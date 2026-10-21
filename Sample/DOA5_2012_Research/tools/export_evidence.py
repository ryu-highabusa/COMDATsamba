from match import load
from core import *
import csv,hashlib,difflib
B=load();M=json.load(open('analysis/matches.json'));O=Path('deliverables');(O/'evidence').mkdir(exist_ok=True)
def tsv(path,fields,rows):
 with (O/path).open('w',newline='',encoding='utf-8') as fp:
  w=csv.writer(fp,delimiter='\t');w.writerow(fields);w.writerows(rows)
manifest=[];fr=[];sr=[];stage=[];cr=[];notable=[]
for k,b in B.items():
 small=sum(sum(e-a+1 for a,e in f['ranges'])<=8 for f in b.meta['functions'])
 manifest.append(dict(build=k,xml=Path(b.meta['path']).name,binary=Path(b.meta['binary']).name,binary_sha256=b.meta['sha256'],xml_sha256=hashlib.sha256(Path(b.meta['path']).read_bytes()).hexdigest(),binary_size=b.meta['size'],sections=b.sections,xml_function_count=len(b.meta['functions']),xml_functions_at_most_8_bytes=small,pdata_functions=b.pdata_count,matching_functions=len(b.funcs),ascii_strings=len(b.strings)))
 for f in b.funcs:fr.append([k,'%08X'%f['va'],f['size'],f['source'],f['name'],len(f['calls']),len(f['refs'])])
 for a,t in b.strings.items():
  sr.append([k,'%08X'%a,'ASCII',t])
  mm=re.match(r'stage/([^/]+)/(.+)',t)
  if mm:stage.append([k,mm[1],'%08X'%a,t])
  if re.search(r'DebugCharacterSelect|^TEST2$|^GP Debug$|^Dummy Calc$|debug_patch0|stage_debug|^stage/(AQUARIUM2?|T0\d+|CHECK)/|^character/m_tengu|tengu_stream|game\.pdb$|^trial.lnk$|^RANKING$|Clear User Storage|^SOCIAL POST$|^GRAPH API$|^HTTP GET$',t):notable.append([k,'%08X'%a,t])
 # ASCII subset of UTF16, helpful without pretending to decode Japanese.
 for s in b.sections:
  if s['name'] not in ('.rdata','.data'):continue
  raw=b.read(s['va'],s['size'])
  for encoding,pat in [('UTF16BE',rb'(?:\x00[\x20-\x7e]){5,}'),('UTF16LE',rb'(?:[\x20-\x7e]\x00){5,}')]:
   for m in re.finditer(pat,raw):
    text=m.group().decode('utf-16-be' if encoding=='UTF16BE' else 'utf-16-le');sr.append([k,'%08X'%(s['va']+m.start()),encoding,text])
 # Existing labeled category-count tables; preserve physical order, not inferred char IDs.
 if k in ('2012-02-19','2012-06-02'):
  tb,ct,count=(0x820e0f30,0x820e0fb0,32) if k=='2012-02-19' else (0x820f1e80,0x820f1f18,38)
  for i in range(count):
   p=int.from_bytes(b.read(tb+i*4,4),'big');q=int.from_bytes(b.read(ct+i*4,4),'big');name=b.symbols.get(q,b.symbols.get(p,''));raw=b.read(q,9) if q else bytes(9)
   cr.append([k,'%02X'%i,'%08X'%p,'%08X'%q,name,*raw])
tsv(Path('evidence/functions.tsv'),['build','va','size','boundary_source','existing_user_label','direct_call_count','approx_reference_count'],fr)
tsv(Path('evidence/strings.tsv'),['build','va','encoding','text'],sr)
tsv(Path('evidence/notable_strings.tsv'),['build','va','text'],notable)
tsv(Path('evidence/stage_resources.tsv'),['build','directory','va','path'],stage)
tsv(Path('evidence/command_category_counts.tsv'),['build','physical_table_index','category_pointer_array','count_bytes_address','existing_annotation']+['category_'+str(i) for i in range(9)],cr)
(O/'evidence/build_manifest.json').write_text(json.dumps(manifest,indent=2))
# Review selected matches; custom labels remain hypotheses.
selected=[('Combo eligibility / 30-hit check','2012-06-02',0x8228b6d8,'2012-08-19',0x824068e0),('Combat-state predicate','2012-06-02',0x82248580,'2012-08-19',0x823bb298),('Round parameters / health setter candidate','2012-06-02',0x822494c8,'2012-08-19',0x823bc768),('Title-stage equality helper','2012-06-02',0x8224d060,'2012-08-19',0x823c1150),('Title-stage transition update','2012-06-02',0x8224d1d8,'2012-08-19',0x823c12c8),('Casual/pro settings event handler','2012-06-02',0x821d6578,'2012-08-19',0x822f41d8),('General list cleanup (old stage-select hypothesis)','2012-06-02',0x8224c278,'2012-08-19',0x824c8760),('Context reset / old stage-select hypothesis','2012-06-02',0x8224c540,'2012-08-19',0x823c0618)]
rows=[]
for title,ka,a,kb,c in selected:
 r=M[ka+'_'+kb][str(a)];af=B[ka].byva[a];cf=B[kb].byva[c]
 rows.append([title,ka,'%08X'%a,kb,'%08X'%c,'%.4f'%r['score'],r['method'],'manually inspected instructions; behavior names provisional'])
 lines=['# '+title,'',ka+' '+hex(a)+' -> '+kb+' '+hex(c),'','Normalized score: %.6f'%r['score'],'']
 for k,v in [(ka,a),(kb,c)]:
  b=B[k];f=b.byva[v];lines+=['## '+k,'','```asm',b.disasm(v,f['size']),'```','']
 (O/'evidence'/('review_'+('%08X'%a)+'.md')).write_text('\n'.join(lines))
 # Short normalized diff for two-sided inspection, no byte patches.
 diff=list(difflib.unified_diff(['%08X'%x+'\n' for x in af['norm']],['%08X'%x+'\n' for x in cf['norm']],fromfile=ka,tofile=kb))
 (O/'evidence'/('normalized_diff_'+('%08X'%a)+'.txt')).write_text(''.join(diff))
tsv(Path('reviewed_function_matches.tsv'),['topic','source_build','source_va','target_build','target_va','normalized_similarity','automatic_method','review_status'],rows)
# Full direct-reference list for researchers, explicitly heuristic.
tsv(Path('evidence/approx_code_references.tsv'),['build','instruction_va','target_va','owner_va','kind'],[[k,'%08X'%p,'%08X'%v,'%08X'%f,t] for k,b in B.items() for p,v,f,t in b.refs])
# DOA1 data used only as semantic reference.
d=next((v for k,v in D.items() if k.startswith('1996')), dict(functions=[],symbols=[]));
(O/'evidence/doa1_reference_annotations.json').write_text(json.dumps(dict(functions=[f for f in d['functions'] if re.search('debug|comact|dwn|act_|cpu|think',f['name'],re.I)],symbols=[s for s in d['symbols'] if s.get('SOURCE_TYPE')=='USER_DEFINED' and re.search('debug|act_|combo|ringBoundary',s['NAME'],re.I)]),indent=2))
