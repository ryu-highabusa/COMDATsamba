from pathlib import Path
import json,struct,bisect,collections,re,os
from capstone import Cs,CS_ARCH_PPC,CS_MODE_32,CS_MODE_BIG_ENDIAN
D=json.load(open(os.environ.get('DOA5_INPUT_INDEX', str(Path(__file__).parent/'inputs.json'))))
def sx(n,b=16):return n-(1<<b) if n&(1<<(b-1)) else n
class Build:
 def __init__(self,k):
  self.key=k;self.meta=D[k];self.b=Path(self.meta['binary']).read_bytes();self.sections=self.meta['sections'];self.text=next(s for s in self.sections if s['name']=='.text');self.strings={s['va']:s['text'] for s in self.meta['strings']};self.symbols={int(s['ADDRESS'],16):s['NAME'] for s in self.meta['symbols'] if s.get('SOURCE_TYPE')=='USER_DEFINED'}
  s=next(s for s in self.sections if s['name']=='.pdata'); self.funcs=[]
  for i in range(0,s['size'],8):
   a,w=struct.unpack_from('>II',self.b,s['offset']+i);size=((w>>8)&0x3fffff)*4
   if self.text['va']<=a<a+size<=self.text['va']+self.text['size']:self.funcs.append(dict(va=a,size=size,source='pdata'))
  self.pdata_count=len(self.funcs)
  # Add only XML leaf bodies not overlapping pdata, containing a return, min 16 bytes.
  starts=[f['va'] for f in self.funcs]
  for f in self.meta['functions']:
   if len(f['ranges'])!=1:continue
   a,e=f['ranges'][0];size=e-a+1
   if size<16 or a%4 or size%4 or not self.text['va']<=a<=e<self.text['va']+self.text['size']:continue
   p=bisect.bisect_right(starts,a)-1
   if p>=0 and self.funcs[p]['va']+self.funcs[p]['size']>a:continue
   n=bisect.bisect_left(starts,a)
   if n<len(starts) and starts[n]<=e:continue
   raw=self.read(a,size)
   if b'\x4e\x80\x00\x20' not in raw:continue
   self.funcs.append(dict(va=a,size=size,source='xml_leaf'))
  # Resolve any overlapping supplemental XML ranges by keeping first nonoverlapping.
  self.funcs.sort(key=lambda x:x['va']); clean=[]
  for f in self.funcs:
   if clean and f['va']<clean[-1]['va']+clean[-1]['size']:continue
   clean.append(f)
  self.funcs=clean;self.starts=[f['va'] for f in self.funcs];self.byva={f['va']:f for f in self.funcs}
  self.refs=[];self.calls=collections.defaultdict(list)
  for f in self.funcs:self.analyze(f)
 def read(self,a,n):
  for s in self.sections:
   if s['va']<=a and a+n<=s['va']+s['size']:
    p=s['offset']+a-s['va'];return self.b[p:p+n]
  return b''
 def owner(self,a):
  i=bisect.bisect_right(self.starts,a)-1
  return self.funcs[i] if i>=0 and a<self.funcs[i]['va']+self.funcs[i]['size'] else None
 def mapped(self,a):return any(s['va']<=a<s['va']+s['size'] for s in self.sections)
 def analyze(self,f):
  raw=self.read(f['va'],f['size']); words=list(struct.unpack('>'+str(len(raw)//4)+'I',raw));norm=words.copy();regs={};refs=[];calls=[]
  for i,w in enumerate(words):
   pc=f['va']+i*4;op=w>>26;rt=(w>>21)&31;ra=(w>>16)&31;imm=w&65535
   regs={r:v for r,v in regs.items() if i-v[2]<24}
   if op==15 and ra==0:
    regs[rt]=(sx(imm)<<16,i,i)
   elif op in (14,24) and (ra if op==14 else rt) in regs:
    sr=ra if op==14 else rt;v,hi,t=regs[sr];val=((v+sx(imm)) if op==14 else (v|imm))&0xffffffff
    dst=rt if op==14 else ra
    if self.mapped(val):
     norm[hi]&=0xffff0000;norm[i]&=0xffff0000;refs.append((pc,val,'address'));self.refs.append((pc,val,f['va'],'address'))
    regs[dst]=(val,hi,i)
   elif op in range(32,56) and ra in regs:
    v,hi,t=regs[ra];val=(v+sx(imm))&0xffffffff
    if self.mapped(val):
     norm[hi]&=0xffff0000;norm[i]&=0xffff0000;refs.append((pc,val,'memory'));self.refs.append((pc,val,f['va'],'memory'))
    if op not in (36,37,38,39,44,45,47,52,53,54,55):regs.pop(rt,None)
   elif op==18:
    dest=(sx(w&0x3fffffc,26)+(0 if w&2 else pc))&0xffffffff
    if w&1:calls.append(dest);self.calls[dest].append(pc)
    if not f['va']<=dest<f['va']+f['size']:norm[i]&=0xfc000003
    regs={}
   elif op==16:
    dest=(sx(w&0xfffc,16)+(0 if w&2 else pc))&0xffffffff
    if not f['va']<=dest<f['va']+f['size']:norm[i]&=0xffff0003
   elif op in (7,8,12,13,14,15,32,33,34,35,40,41,42,43,46,58):regs.pop(rt,None)
   elif op in (20,21,23,24,25,26,27,28,29):regs.pop(ra,None)
   elif op==31:
    # Conservative clobber: eliminate stale upper-address candidates on arithmetic.
    regs.pop(rt,None);regs.pop(ra,None)
  f.update(words=words,norm=norm,refs=refs,calls=calls,name=self.symbols.get(f['va'],''))
 def disasm(self,a,n):
  md=Cs(CS_ARCH_PPC,CS_MODE_32|CS_MODE_BIG_ENDIAN);md.skipdata=True
  return '\n'.join('%08X  %-11s %s %s'%(x.address,x.bytes.hex(),x.mnemonic,x.op_str) for x in md.disasm(self.read(a,n),a))
if __name__=='__main__':
 for k in sorted(D):
  if not k.startswith('2012'):continue
  b=Build(k);print(k,'pdata',b.pdata_count,'functions',len(b.funcs),'refs',len(b.refs));print(b.disasm(b.text['va'],80))
