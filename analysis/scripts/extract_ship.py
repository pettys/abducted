"""Extract the uncompressed FIRST3D ship, original draw polygons, edges, and palette."""
from pathlib import Path
import struct,json,hashlib,math
ROOT=Path(__file__).resolve().parents[2]
SRC=ROOT/'exe'/'Lightspe'
OUT=ROOT/'ship-viewer'
OUT.mkdir(exist_ok=True)
def u16(b,p):return struct.unpack_from('<H',b,p)[0]
def i16(b,p):return struct.unpack_from('<h',b,p)[0]
def text(path,s):path.write_bytes(s.replace('\r\n','\n').replace('\n','\r\n').encode('utf8'))
def palette_entry(cat,name):
    for i in range(u16(cat,0)):
        p=2+i*24
        entry=cat[p:p+12].split(b'\0')[0].decode('ascii')
        if entry==name:
            length,offset=struct.unpack_from('<II',cat,p+16)
            return cat[offset:offset+length]
    raise ValueError(name)
def apply_palette(data,palette):
    assert data[:2]==b'M0'
    size=u16(data,2);first,last=data[4:6]
    assert size==2+(last-first+1)*3
    for c in range(first,last+1):palette[c]=[(v*255+31)//63 for v in data[6+(c-first)*3:9+(c-first)*3]]
if __name__ == '__main__':
    raw=(SRC/'FIRST3D.ZDT').read_bytes()
    expanded,stored,workspace=struct.unpack_from('<HHH',raw)
    assert expanded==stored==len(raw)-6 and workspace==0
    b=raw[6:]
    assert u16(b,0)==1
    start,end=u16(b,2),u16(b,4)
    header=list(struct.unpack_from('<4H',b,start));assert header[0]==0x8001 and header[3]==1
    p=start+8;nv=u16(b,p);nf=-i16(b,p+2);p+=4
    planes=[]
    for i in range(nf):
        x,y,z,d=struct.unpack_from('<hhhi',b,p);p+=10;planes.append([x,y,z,d])
    visibility_vertices=[]
    for i in range(nf):
        count=b[p];visibility_vertices.append(list(b[p+1:p+1+count]));p+=count+1
    root_face=b[p];children=[list(struct.unpack_from('<bb',b,p+1+i*2)) for i in range(nf)];p+=1+nf*2
    assert root_face<nf and all(c==-1 or 0<=c<nf for pair in children for c in pair)
    vertices_offset=p
    vertices=[list(struct.unpack_from('<hhh',b,p+i*6)) for i in range(nv)];p+=nv*6
    ne=u16(b,p);p+=2
    edges=[list(b[p+i*2:p+i*2+2]) for i in range(ne)];p+=ne*2
    assert all(0<=v<nv for edge in edges for v in edge)
    command_offsets=list(struct.unpack_from('<'+'H'*nf,b,p));p+=nf*2
    polygons=[]
    for face,offset in enumerate(command_offsets):
        at=offset
        while b[at]!=255:
            count=b[at];edge_ids=list(b[at+1:at+1+count]);color=b[at+count+1];at+=count+2
            assert 3<=count<=32 and all(e<ne for e in edge_ids)
            # Edges may run in either direction; recover their connected vertex cycle.
            remaining=[edges[e][:] for e in edge_ids]
            first,last=remaining.pop(0);loop=[first,last]
            while remaining:
                found=next((i for i,e in enumerate(remaining) if loop[-1] in e),None)
                assert found is not None,(face,loop,remaining)
                edge=remaining.pop(found);loop.append(edge[1] if edge[0]==loop[-1] else edge[0])
            assert loop[-1]==loop[0]
            loop.pop();assert len(set(loop))==len(loop)
            polygons.append(dict(face_group=face,vertices=loop,edges=edge_ids,color_index=color))
        assert at+1==(command_offsets[face+1] if face+1<nf else end)
    # Validate geometry against the original face-plane equations, independent of rendering.
    max_error=0
    for poly in polygons:
        normal=planes[poly['face_group']];length=math.sqrt(sum(x*x for x in normal[:3]))
        assert length>0
        for v in poly['vertices']:
            error=abs(sum(normal[i]*vertices[v][i] for i in range(3))+normal[3])/length
            max_error=max(max_error,error)
    assert max_error<0.01,max_error
    cat=(SRC/'PAL3D.CAT').read_bytes();palette=[[0,0,0] for i in range(256)]
    apply_palette(palette_entry(cat,'US3D.PAL'),palette)
    apply_palette(palette_entry(cat,'FIRST3D.PAL'),palette)
    result=dict(name='FIRST3D / model 1',source='FIRST3D.ZDT',source_sha256=hashlib.sha256(raw).hexdigest(),header_words=header,vertices=vertices,edges=edges,polygons=polygons,palette=palette,planes=planes,bsp=dict(root=root_face,children=children),validation=dict(vertices=nv,edges=ne,face_groups=nf,draw_polygons=len(polygons),max_plane_error=max_error,all_polygon_edge_loops_closed=True),rendering_note='Original vertices, draw polygons, and palette entries. Browser projection and depth buffering replace the DOS renderer; original shading is not emulated.')
    text(OUT/'ship.json',json.dumps(result,indent=2)+'\n')
    text(OUT/'ship-data.js','window.LIGHTSPEED_SHIP = '+json.dumps(result,separators=(',',':'))+';\n')
    obj=['# Original FIRST3D geometry extracted from Lightspeed','mtllib ship.mtl','o FIRST3D']
    for v in vertices:obj.append('v '+' '.join(map(str,v)))
    for poly in polygons:
        obj.append('usemtl color_'+str(poly['color_index']));obj.append('f '+' '.join(str(i+1) for i in poly['vertices']))
    text(OUT/'ship.obj','\n'.join(obj)+'\n')
    mtl=[]
    for c in sorted(set(p['color_index'] for p in polygons)):
        mtl.extend(['newmtl color_'+str(c),'Kd '+' '.join(f'{v/255:.6f}' for v in palette[c]),''])
    text(OUT/'ship.mtl','\n'.join(mtl))
    print(json.dumps(result['validation'],indent=2));print('Vertices offset in expanded data:',hex(vertices_offset))
