from pathlib import Path
import struct, hashlib, json, re, csv, sys
ROOT = Path(__file__).resolve().parents[2]
SOURCE = ROOT / 'exe' / 'Lightspe'
OUT = ROOT / 'analysis' / 'mapped'
OUT.mkdir(exist_ok=True)
def save_text(path, text):
    path.write_bytes(text.replace('\r\n','\n').replace('\n','\r\n').encode('utf-8'))
def words(data, at, count): return struct.unpack_from('<'+'H'*count, data, at)
def sha(data): return hashlib.sha256(data).hexdigest()
exe = (SOURCE/'LIGHTSPD.EXE').read_bytes()
ovl = (SOURCE/'LIGHTSPD.OVL').read_bytes()
h = words(exe,0,14)
header_size = h[4]*16
resident_end = (h[2]-1)*512+h[1] if h[1] else h[2]*512
loader_base = header_size+h[11]*16
count = words(exe,loader_base+0xc24,1)[0]
assert count == 53
records=[]
for n in range(count):
    at=loader_base+0xc2c+n*16
    segment, fileptr, paragraph, flags, paragraphs, reloc_count, parent, debug_id = words(exe,at,8)
    name_start=loader_base+fileptr+1
    filename=exe[name_start:exe.index(0,name_start)].decode('ascii')
    data=(SOURCE/filename).read_bytes()
    offset=paragraph*16+(flags&255)*0x100000
    payload_offset=offset+((reloc_count+3)//4)*16
    size=paragraphs*16
    available=min(size,max(0,len(data)-payload_offset))
    payload=bytearray(data[payload_offset:payload_offset+available])+bytearray(size-available)
    relocations=[]
    for i in range(reloc_count):
        off,seg=words(data,offset+i*4,2)
        target=(seg-segment)*16+off
        assert 0<=target<size-1, (n,i,target,size)
        original=words(payload,target,1)[0]
        struct.pack_into('<H',payload,target,(original+0x1000)&0xffff)
        relocations.append(dict(index=i,offset=off,segment=seg,payload_offset=target,original=original,relocated=(original+0x1000)&0xffff))
    basename=f'ovl_{n:02d}' if n<52 else 'game_data'
    (OUT/(basename+'.bin')).write_bytes(payload)
    rec=dict(id=n,name=basename,source=filename,directory_offset=at,load_segment=segment,analysis_segment=segment+0x1000,flags=flags,file_offset=offset,payload_offset=payload_offset,declared_size=size,file_backed_size=available,zero_fill=size-available,relocation_count=reloc_count,parent=parent,debug_id=debug_id,sha256=sha(payload),relocations=relocations)
    records.append(rec)
# Loader thunks are: CALL near loader_dispatch; JMP far target; overlay ID word.
thunks=[]
for at in range(loader_base, resident_end-9):
    if exe[at]!=0xe8 or exe[at+3]!=0xea: continue
    ip=at-loader_base
    relative=struct.unpack_from('<h',exe,at+1)[0]
    if (ip+3+relative)&0xffff != 0x34c: continue
    off,seg,overlay=words(exe,at+4,3)
    assert 0<=overlay<52
    rec=records[overlay]
    assert 0 <= (seg-rec['load_segment'])*16+off < rec['declared_size'], (ip,overlay,seg,off)
    thunks.append(dict(file_offset=at,segment=0x2120,offset=ip,target_segment=seg+0x1000,target_offset=off,overlay=overlay))
assert len(thunks)>100
# Verify all OVL bytes are explained by relocation tables, alignment, and payloads.
for a,b in zip(records[:51],records[1:52]):
    assert a['payload_offset']+a['declared_size']==b['file_offset']
assert records[0]['file_offset']==0
assert records[51]['payload_offset']+records[51]['file_backed_size']==len(ovl)
manifest=dict(format_version=1,analysis_load_base=0x1000,resident=dict(source='LIGHTSPD.EXE',sha256=sha(exe),header_size=header_size,image_file_end=resident_end,entry_segment=h[11]+0x1000,entry_offset=h[10],relocation_count=h[3],loader_segment=h[11]+0x1000,loader_directory_file_offset=loader_base+0xc2c,initial_stack_segment=h[7]+0x1000,game_data_segment=0x2e67),overlay_source_sha256=sha(ovl),regions=records,thunks=thunks,validation=dict(overlay_directory_entries=count,code_overlays=52,thunks=len(thunks),all_relocations_in_bounds=True,ovl_file_coverage='100%; final paragraph padding synthesized',data_zero_fill='Loader requests full allocation but reads to EOF; remaining bytes treated as zero for static analysis, not verified at runtime'))
save_text(OUT/'manifest.json',json.dumps(manifest,indent=2)+'\n')
with (OUT/'regions.tsv').open('w',newline='',encoding='utf-8') as f:
    cols=['id','name','source','file_offset','payload_offset','analysis_segment','declared_size','file_backed_size','zero_fill','relocation_count']
    w=csv.DictWriter(f,cols,delimiter='\t',extrasaction='ignore');w.writeheader();w.writerows(records)
with (OUT/'thunks.tsv').open('w',newline='',encoding='utf-8') as f:
    w=csv.DictWriter(f,list(thunks[0]),delimiter='\t');w.writeheader();w.writerows(thunks)
# Extract original-file strings with offsets for later semantic reconstruction.
with (OUT/'strings.tsv').open('w',newline='',encoding='utf-8') as f:
    w=csv.writer(f,delimiter='\t');w.writerow(['source','file_offset','text'])
    for name in ['LIGHTSPD.EXE','LIGHTSPD.OVL']:
        data=(SOURCE/name).read_bytes()
        for m in re.finditer(rb'[ -~]{5,}',data): w.writerow([name,hex(m.start()),m.group().decode('ascii')])
print(json.dumps(manifest['validation'],indent=2))
print('Relocations:',sum(r['relocation_count'] for r in records))
print('File-backed overlay bytes:',sum(r['file_backed_size'] for r in records[:52]))