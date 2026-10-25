"""Build a catalog of Lightspeed mesh models, keeping file and model IDs."""
from pathlib import Path
import json,struct,hashlib,math
from model_format import unpack_zdt
from extract_ship import palette_entry,apply_palette
ROOT=Path(__file__).resolve().parents[2];SRC=ROOT/'exe'/'Lightspe';OUT=ROOT/'ship-viewer'
def u16(b,p):return struct.unpack_from('<H',b,p)[0]
def i16(b,p):return struct.unpack_from('<h',b,p)[0]
def txt(p,s):p.write_bytes(s.replace('\r\n','\n').replace('\n','\r\n').encode())
def parse_mesh(b,body):
    radius,parts=struct.unpack_from('<HH',b,body);assert 1<=parts<=16,('parts',parts)
    at=body+4+8*(parts-1);nv,nface=struct.unpack_from('<hh',b,at);at+=4;nf=abs(nface)
    assert 0<=nv<=256 and nf<=256,('counts',nv,nface)
    planes=[];plane_parts=[];part=0
    for i in range(nf):
        while u16(b,at)&0xff00==0x8000:part=u16(b,at)&255;at+=2
        while u16(b,at)==0x8100:at+=4
        planes.append(list(struct.unpack_from('<hhhi',b,at)));plane_parts.append(part);at+=10
    for i in range(nf):
        n=b[at];assert n<=nv,('visibility_count',n,nv);at+=1+n
    if nface<0:at+=1+nf*2
    vertices=[];vertex_parts=[];part=0
    for i in range(nv):
        while 0x8000<=u16(b,at)<0x8010:part=u16(b,at)&15;at+=2
        vertices.append(list(struct.unpack_from('<hhh',b,at)));vertex_parts.append(part);at+=6
    ne=u16(b,at);at+=2;assert ne<=256,('edges',ne)
    if nv==0 and nf==0 and ne==0:return dict(vertices=[],edges=[],polygons=[],planes=[],parts=parts,vertex_parts=[],plane_parts=[],decorations=[],radius=radius,max_plane_error=0,body_offset=body)
    edges=[list(b[at+i*2:at+i*2+2]) for i in range(ne)];at+=ne*2
    assert all(v<nv for e in edges for v in e),('edge_vertex',nv)
    offsets=list(struct.unpack_from('<'+'H'*nf,b,at)) if nf else [at];polygons=[];decorations=[]
    for face,start in enumerate(offsets):
        at=start;iterations=0
        while b[at]!=255:
            iterations+=1;assert iterations<500
            command=b[at];at+=1
            if command&128:
                decorations.append(dict(kind='conditional',offset=at-1));at+=1;continue
            if command&0x60:
                n=command&31;color=b[at];ids=list(b[at+1:at+1+n]);at+=1+n
                decorations.append(dict(kind='points' if command&32 else 'lines',indices=ids,color_index=color));continue
            n=command;assert 2<=n<=31,('polygon_command',command,at)
            ids=list(b[at:at+n]);color=b[at+n];at+=n+1
            if color==255:continue
            if n<3:decorations.append(dict(kind='lines',indices=ids,color_index=color));continue
            assert all(e<ne for e in ids),('polygon_edge',ids,ne)
            remaining=[edges[e][:] for e in ids];first,last=remaining.pop(0);loop=[first,last]
            while remaining:
                j=next((j for j,e in enumerate(remaining) if loop[-1] in e),None)
                assert j is not None,('open_polygon',face,ids)
                edge=remaining.pop(j);loop.append(edge[1] if edge[0]==loop[-1] else edge[0])
            assert loop[-1]==loop[0],('unclosed_polygon',face)
            loop.pop()
            if len(set(loop))<3:continue
            polygons.append(dict(face_group=face,vertices=loop,edges=ids,color_index=color))
    max_error=0
    for poly in polygons:
        if nf==0:continue
        normal=planes[poly['face_group']];length=math.sqrt(sum(x*x for x in normal[:3]))
        if length:
            for v in poly['vertices']:max_error=max(max_error,abs(sum(normal[i]*vertices[v][i] for i in range(3))+normal[3])/length)
    return dict(vertices=vertices,edges=edges,polygons=polygons,planes=planes,parts=parts,vertex_parts=vertex_parts,plane_parts=plane_parts,decorations=decorations,radius=radius,max_plane_error=max_error,body_offset=body)

def main():
    cat=(SRC/'PAL3D.CAT').read_bytes();models=[];failures=[];empty=[];packs=[]
    for path in sorted(SRC.glob('*.ZDT')):
        raw=path.read_bytes();data=unpack_zdt(raw);count=u16(data,0);offsets=list(struct.unpack_from('<'+'H'*count,data,2))
        assert offsets[0]>=2+count*2 and all(0<=x<len(data) for x in offsets)
        palette=[[0,0,0] for i in range(256)];apply_palette(palette_entry(cat,'US3D.PAL'),palette)
        palname=path.stem+'.PAL'
        try:apply_palette(palette_entry(cat,palname),palette)
        except ValueError:palname='US3D.PAL'
        packs.append(dict(name=path.stem,models=count,palette=palname))
        for index,start in enumerate(offsets):
            ident=f'{path.stem}:{index}'
            try:
                lods=[];p=start
                while True:
                    threshold,body=struct.unpack_from('<HH',data,p);lods.append(dict(threshold=threshold,offset=body));p+=4
                    if threshold&0x8000:break
                    assert len(lods)<32
                mesh=parse_mesh(data,lods[0]['offset'])
                if not mesh['polygons'] and not mesh['edges']:empty.append(dict(id=ident,reason='No mesh geometry'));continue
                mesh.update(id=ident,name=f'{path.stem} / model {index+1:02}',pack=path.stem,model_index=index,source=path.name,source_sha256=hashlib.sha256(raw).hexdigest(),palette=palette,palette_source=palname,lods=lods)
                models.append(mesh)
            except Exception as e:failures.append(dict(id=ident,error=str(e)))
    result=dict(models=models,packs=packs,failures=failures,empty=empty)
    txt(OUT/'model-catalog.json',json.dumps(result,indent=2)+'\n')
    txt(OUT/'model-catalog.js','window.LIGHTSPEED_MODELS = '+json.dumps(models,separators=(',',':'))+';\n')
    print('Models',len(models),'empty',len(empty),'failed',len(failures));print(json.dumps(failures,indent=2));print('Decorated',sum(bool(m['decorations']) for m in models))
if __name__=='__main__':main()