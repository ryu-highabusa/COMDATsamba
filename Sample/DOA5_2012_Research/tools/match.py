from core import *
import pickle,hashlib,difflib,csv,math,argparse
CACHE=Path('analysis/builds.pkl')
def load():
 if CACHE.exists():return pickle.loads(CACHE.read_bytes())
 B={k:Build(k) for k in sorted(D) if k.startswith('2012')};CACHE.write_bytes(pickle.dumps(B));return B
def digest(f):return hashlib.sha256(struct.pack('>'+str(len(f['norm']))+'I',*f['norm'])).digest()
def shingles(f):
 n=f['norm'];return {hash(tuple(n[i:i+5])) for i in range(len(n)-4)}
def match(A,B):
 ah=collections.defaultdict(list);bh=collections.defaultdict(list)
 for f in A.funcs:
  if f['size']>=32:ah[digest(f)].append(f)
 for f in B.funcs:
  if f['size']>=32:bh[digest(f)].append(f)
 res={};used=set()
 for h,fs in ah.items():
  if len(fs)==1 and len(bh.get(h,[]))==1:
   a,b=fs[0],bh[h][0];res[a['va']]=dict(a=a['va'],b=b['va'],method='unique_normalized_exact',score=1.,margin=1.,raw_equal=a['words']==b['words']);used.add(b['va'])
 print(A.key,B.key,'exact',len(res),flush=True)
 inv=collections.defaultdict(list);bs={}
 for f in B.funcs:
  if f['size']>=64:
   s=shingles(f);bs[f['va']]=s
   for t in s:inv[t].append(f['va'])
 af={f['va']:shingles(f) for f in A.funcs if f['size']>=64 and f['va'] not in res}
 pending=[]
 for av,ss in af.items():
  a=A.byva[av];counts=collections.Counter()
  for t in ss:
   hits=inv.get(t,[])
   if len(hits)>60:continue
   for bv in hits:
    if bv not in used and .55<=B.byva[bv]['size']/a['size']<=1.8:counts[bv]+=1
  cand=[]
  for bv,count in counts.most_common(5):
   b=B.byva[bv];s=bs[bv];jac=len(ss&s)/max(1,len(ss|s))
   if jac<.15:continue
   ratio=difflib.SequenceMatcher(None,a['norm'],b['norm'],autojunk=False).ratio() if max(a['size'],b['size'])<24000 else jac
   if ratio>=.65:cand.append((ratio,bv,jac))
  cand.sort(reverse=True)
  if cand:
   score,bv,jac=cand[0];margin=score-(cand[1][0] if len(cand)>1 else 0)
   known=[res[t]['b'] for t in a['calls'] if t in res];support=len(set(known)&set(B.byva[bv]['calls']))
   if (score>=.88 and margin>=.06) or (score>=.76 and margin>=.1 and support>=2):
    pending.append((score,margin,av,bv,support,jac))
 for score,margin,av,bv,support,jac in sorted(pending,reverse=True):
  if bv in used:continue
  res[av]=dict(a=av,b=bv,method='fuzzy_candidate',score=score,margin=margin,call_support=support,jaccard=jac,raw_equal=False);used.add(bv)
 print('total',len(res),'fuzzy',len(res)-sum(x['method']=='unique_normalized_exact' for x in res.values()),flush=True)
 return res
if __name__=='__main__':
 B=load();results={}
 for ka,kb in [('2012-02-19','2012-06-02'),('2012-06-02','2012-08-19'),('2012-02-19','2012-08-19')]:
  A,C=B[ka],B[kb];rr=match(A,C);results[ka+'_'+kb]=rr
  with open('deliverables/matches_'+ka+'_'+kb+'.tsv','w') as fp:
   w=csv.writer(fp,delimiter='\t');w.writerow(['source_build','source_va','target_build','target_va','source_size','target_size','method','score','margin','matched_call_targets','raw_equal','source_annotation','target_annotation'])
   for a,r in sorted(rr.items()):
    b=r['b'];w.writerow([ka,'%08X'%a,kb,'%08X'%b,A.byva[a]['size'],C.byva[b]['size'],r['method'],'%.4f'%r['score'],'%.4f'%r['margin'],r.get('call_support',''),r['raw_equal'],A.byva[a]['name'],C.byva[b]['name']])
 Path('analysis/matches.json').write_text(json.dumps(results))
