from pathlib import Path
import csv,json,hashlib,struct,re,sys,collections,html,bisect
ROOT=Path(__file__).resolve().parents[2]
OUT=ROOT/'analysis'/'mapped'
sys.path.insert(0,str(ROOT/'tools'/'python-libs'))
from capstone import Cs,CS_ARCH_X86,CS_MODE_16
from capstone.x86_const import X86_OP_IMM
md=Cs(CS_ARCH_X86,CS_MODE_16);md.detail=True
manifest=json.loads((OUT/'manifest.json').read_text(encoding='utf-8'))
def table(path):
 with path.open(newline='',encoding='utf8') as f:return list(csv.DictReader(f,delimiter='\t'))
def write(path,text):path.write_bytes(text.replace('\r\n','\n').replace('\n','\r\n').encode())
def tsv(path,rows,keys=None):
 if keys is None:keys=list(rows[0]) if rows else []
 with path.open('w',newline='',encoding='utf8') as f:
  w=csv.DictWriter(f,keys,delimiter='\t',extrasaction='ignore');w.writeheader();w.writerows(rows)
def linear(address):
 if '::' in address:return int(address.split('::')[-1],16)
 a,b=address.split(':');return int(a,16)*16+int(b,16)
functions=table(OUT/'functions.tsv')
summary=json.loads((OUT/'decompile-summary.json').read_text(encoding='utf-8'))
refs=table(OUT/'references.tsv');blocks=table(OUT/'memory-blocks.tsv');gaps=table(OUT/'unclassified-ranges.tsv')
audit=[];hardware=[];instructions=[];decoded=collections.Counter()
for line in (OUT/'disassembly.asm').read_text(encoding='utf-8').splitlines():
 addr,hexbytes,text=line.split('\t',2);raw=bytes.fromhex(hexbytes);ins=next(md.disasm(raw,linear(addr)),None)
 valid=ins is not None and ins.size==len(raw)
 audit.append(dict(address=addr,bytes=hexbytes,ghidra=text,capstone='' if ins is None else ins.mnemonic+' '+ins.op_str,length_agrees=valid))
 region=addr.split('::')[0] if '::' in addr else 'resident'
 decoded[region]+=len(raw)
 if ins:
  instructions.append(dict(address=addr,region=region,linear=linear(addr),bytes=hexbytes,mnemonic=ins.mnemonic,operands=ins.op_str))
  if ins.mnemonic in ('int','int1','int3','into','in','out','insb','insw','outsb','outsw','cli','sti','hlt','iret'):
   hardware.append(dict(address=addr,region=region,instruction=ins.mnemonic+' '+ins.op_str))
tsv(OUT/'instruction-audit.tsv',audit)
tsv(OUT/'hardware-boundaries.tsv',hardware)
# Recover file-offset identities for all function entries, independent of generated labels.
region_map={r['name']:r for r in manifest['regions']}
for f in functions:
 value=linear(f['address']);region=f['region']
 if region in region_map:
  r=region_map[region];offset=value-r['analysis_segment']*16
  f['source']=r['source'];f['source_file_offset']=hex(r['payload_offset']+offset)
 else:
  f['source']='LIGHTSPD.EXE';f['source_file_offset']=hex(value-0x10000+manifest['resident']['header_size'])
 f['module']=region if region.startswith('ovl_') else 'resident'
 f['recovery']='loader_entry' if f['name'].startswith(('dispatch_','ovl_','dos_')) else 'candidate_function; static analysis, not runtime verified'
tsv(OUT/'function-map.tsv',functions)
# Function call graph records exact entries, plus overlay dispatch metadata.
fbyaddr={f['address']:f for f in functions}
calls=[]
for ref in refs:
 if 'CALL' in ref['type']:
  target=fbyaddr.get(ref['to'])
  calls.append(dict(site=ref['from'],target=ref['to'],target_name=target['name'] if target else '',type=ref['type'],resolved_entry=target is not None))
tsv(OUT/'calls.tsv',calls,['site','target','target_name','type','resolved_entry'])
# Complete file partition: headers, relocations, alignment, load images, and appended data.
parts=[]
def part(source,start,end,kind,name):
 if end>start:parts.append(dict(source=source,start=start,end_exclusive=end,length=end-start,kind=kind,region=name))
exe=(ROOT/'exe'/'Lightspe'/'LIGHTSPD.EXE').read_bytes();ovl=(ROOT/'exe'/'Lightspe'/'LIGHTSPD.OVL').read_bytes()
part('LIGHTSPD.EXE',0,manifest['resident']['header_size'],'DOS header and relocation table','header')
part('LIGHTSPD.EXE',manifest['resident']['header_size'],manifest['resident']['image_file_end'],'resident load image','resident')
part('LIGHTSPD.EXE',manifest['resident']['image_file_end'],manifest['regions'][-1]['file_offset'],'alignment','tail_alignment')
for r in manifest['regions']:
 part(r['source'],r['file_offset'],r['file_offset']+r['relocation_count']*4,'overlay relocation records',r['name'])
 part(r['source'],r['file_offset']+r['relocation_count']*4,r['payload_offset'],'alignment',r['name'])
 part(r['source'],r['payload_offset'],r['payload_offset']+r['file_backed_size'],'code overlay payload' if r['id']<52 else 'initialized data payload',r['name'])
coverage={}
for name,data in [('LIGHTSPD.EXE',exe),('LIGHTSPD.OVL',ovl)]:
 cursor=0
 for p in sorted((p for p in parts if p['source']==name),key=lambda p:p['start']):
  assert p['start']==cursor,(name,cursor,p);cursor=p['end_exclusive']
 assert cursor==len(data),(name,cursor,len(data))
 coverage[name]=dict(bytes=len(data),partitioned_bytes=cursor,sha256=hashlib.sha256(data).hexdigest())
assert coverage['LIGHTSPD.EXE']['sha256']==manifest['resident']['sha256']
assert coverage['LIGHTSPD.OVL']['sha256']==manifest['overlay_source_sha256']
tsv(OUT/'file-map.tsv',parts)
modules=[]
for r in manifest['regions'][:52]:
 fs=[f for f in functions if f['region']==r['name']]
 modules.append(dict(name=r['name'],source=r['source'],file_offset=hex(r['payload_offset']),load_address=f"{r['analysis_segment']:04x}:0000",file_bytes=r['file_backed_size'],decoded_bytes=decoded[r['name']],unclassified_bytes=sum(int(g['bytes']) for g in gaps if g['region']==r['name']),functions=len(fs),decompiled=sum(f['decompiled']=='true' for f in fs)))
tsv(OUT/'module-map.tsv',modules)
support=[]
for path in sorted((ROOT/'analysis'/'support').glob('*/decompile-summary.json')):
 data=json.loads(path.read_text(encoding='utf-8'));support.append(dict(name=path.parent.name,**data,path=str(path.parent.relative_to(ROOT/'analysis'))).copy())
failed=[f for f in functions if f['decompiled']=='false']
validation=dict(main=summary,code_overlays=len(modules),overlay_dispatch_stubs=len(manifest['thunks']),file_partition=coverage,instruction_count=len(audit),instruction_length_agreements=sum(a['length_agrees'] for a in audit),instruction_length_disagreements=[a for a in audit if not a['length_agrees']],decoded_overlay_bytes=sum(m['decoded_bytes'] for m in modules),overlay_payload_bytes=sum(m['file_bytes'] for m in modules),failed_functions=failed,indirect_or_unmapped_instructions=len(table(OUT/'unresolved-instructions.tsv')),support=support,original_game_files_unchanged=True)
write(OUT/'validation.json',json.dumps(validation,indent=2)+'\n')
# Source manifest and raw-data inventory for porting work.
inventory=[]
for path in sorted((ROOT/'exe'/'Lightspe').iterdir()):
 if path.is_file():inventory.append(dict(name=path.name,bytes=path.stat().st_size,sha256=hashlib.sha256(path.read_bytes()).hexdigest(),extension=path.suffix.lower()))
write(OUT/'assets.json',json.dumps(inventory,indent=2)+'\n')
H=html.escape
rows=''.join(f'<tr><td><a href="{m["name"]}.c">{m["name"]}</a></td><td>{m["load_address"]}</td><td>{m["file_offset"]}</td><td>{m["file_bytes"]:,}</td><td>{m["decoded_bytes"]:,}</td><td>{m["functions"]}</td><td>{m["decompiled"]}</td></tr>' for m in modules)
funrows=''.join(f'<tr><td>{H(f["address"])}</td><td>{H(f["name"])}</td><td><a href="{f["module"]}.c">{f["module"]}</a></td><td>{f["source_file_offset"]}</td><td>{"yes" if f["decompiled"]=="true" else f["decompiled"]}</td></tr>' for f in functions)
supportrows=''.join(f'<li><a href="../{s["path"]}/resident.c">{s["name"]}</a>: {s["decompiled"]}/{s["functions"]} functions exported; <a href="../{s["path"]}/disassembly.asm">assembly</a></li>' for s in support)
failrows=''.join(f'<li><code>{H(f["address"])} {H(f["name"])}</code>: {H(f["error"])}</li>' for f in failed)
page=f'''<!doctype html><html lang="en"><meta charset="utf-8"><meta name="viewport" content="width=device-width"><title>Lightspeed code map</title>
<style>body{{font:16px/1.55 system-ui,sans-serif;background:#10151d;color:#dbe5ef;max-width:1250px;margin:40px auto;padding:0 24px}}a{{color:#7ed7ff}}h1,h2{{color:#fff}}.stats{{display:flex;gap:20px;flex-wrap:wrap}}.stats div{{padding:18px;background:#1b2635;border-radius:8px}}strong{{font-size:1.3em}}table{{border-collapse:collapse;width:100%;font:14px/1.5 ui-monospace,monospace}}td,th{{text-align:left;padding:8px;border-bottom:1px solid #304052}}th{{position:sticky;top:0;background:#1b2635}}input{{font:inherit;padding:10px;width:95%;background:#1b2635;color:white;border:1px solid #52687f;border-radius:5px}}.scroll{{max-height:600px;overflow:auto}}.note{{border-left:4px solid #e0b55f;padding:10px 20px;background:#211e16}}code{{color:#b6dcff}}small{{color:#9cb0c4}}</style>
<h1>Lightspeed: structural code map</h1><p>DOS game build 461.01. Original binaries preserved. Addresses use analysis load segment <code>1000</code>; overlay address spaces retain distinct code that shared memory at runtime.</p>
<div class="stats"><div><strong>52</strong><br>code overlays</div><div><strong>129</strong><br>dispatch stubs mapped</div><div><strong>{summary['decompiled']:,}/{summary['functions']:,}</strong><br>functions exported + {summary.get('aliases',0)} dispatch aliases</div><div><strong>100%</strong><br>EXE / OVL bytes partitioned</div></div>
<h2>Start reading</h2><p><a href="resident.c">Resident pseudocode</a> · <a href="disassembly.asm">Assembly listing</a> · <a href="manifest.json">Overlay / relocation manifest</a> · <a href="function-map.tsv">Function map</a> · <a href="calls.tsv">Call graph</a> · <a href="file-map.tsv">Complete file partition</a> · <a href="validation.json">Validation</a></p>
<p>Start at <code>dos_overlay_startup</code> → <code>msc_runtime_startup</code> → <code>game_main</code>. Overlay function names retain their overlay IDs and addresses. Symbol names inferred by the decompiler remain candidates, not recovered original names.</p>
<div class="note"><b>What “complete” means here:</b> every byte in LIGHTSPD.EXE and LIGHTSPD.OVL belongs to a documented file region; all loader-declared overlays and relocations are mapped. This is a structural map, not a verified reconstruction of every function or a buildable port. Unknown bytes may be embedded tables, padding, or undiscovered code. Indirect calls, runtime driver installation, self-modifying code, and original copy checks need runtime validation.</div>
<h2>Overlay modules</h2><p>{validation['decoded_overlay_bytes']:,} of {validation['overlay_payload_bytes']:,} file-backed overlay bytes decoded as instructions. Remaining ranges are listed in <a href="unclassified-ranges.tsv">unclassified-ranges.tsv</a>; they are not assumed to be code.</p><div class="scroll"><table><thead><tr><th>Module</th><th>DOS address</th><th>Payload offset</th><th>File bytes</th><th>Decoded bytes</th><th>Functions</th><th>Exported</th></tr></thead><tbody>{rows}</tbody></table></div>
<h2>Function index</h2><input id="filter" aria-label="Filter functions" placeholder="Filter by name, address, or module"><div class="scroll"><table><thead><tr><th>Address</th><th>Name</th><th>Source</th><th>File offset</th><th>Exported</th></tr></thead><tbody id="functions">{funrows}</tbody></table></div>
<h2>Supporting executables</h2><ul>{supportrows}</ul><p><a href="assets.json">Inventory of all original game files and SHA-256 hashes</a>.</p>
<h2>Unresolved work</h2><ul><li><a href="unresolved-instructions.tsv">{validation['indirect_or_unmapped_instructions']} indirect or unmapped control-flow instructions</a>; some are normal driver callbacks and DOS vectors.</li><li><a href="unclassified-ranges.tsv">Undecoded ranges</a> remain explicitly unclassified.</li><li>Data allocation extends past the end of the EXE payload; static analysis synthesizes zero bytes for that allocation. Runtime initialization has not been validated.</li><li>Compiler-prologue matches are candidate function boundaries. Successful decompilation does not establish semantic correctness.</li>{failrows}</ul>
<h2>Analysis transformations</h2><p>Overlay relocations use the same add-load-segment rule as the DOS loader. Analysis copies of dispatch stubs replace the loader call with an explicit jump and an overlay-space reference; the originals are unchanged. A separate Ghidra language variant uses per-region code-segment context to avoid incorrect normalization of CS-relative tables. Original files, offsets, relocation values, and dispatch destinations remain in the manifest.</p><p>Ghidra project: <code>analysis/projects/LightspeedMapped.gpr</code>. Rebuild scripts: <code>analysis/scripts</code>. Custom language sources: <code>analysis/language</code>.</p>
<script>document.getElementById('filter').addEventListener('input',function(){{let q=this.value.toLowerCase();for(let r of document.querySelectorAll('#functions tr'))r.hidden=!r.textContent.toLowerCase().includes(q)}});</script></html>'''
write(OUT/'code-map.html',page)
print(json.dumps({k:v for k,v in validation.items() if k not in ['failed_functions','instruction_length_disagreements','file_partition','support']},indent=2));print('Support programs',len(support));print('Failed functions',[(f['address'],f['name']) for f in failed])