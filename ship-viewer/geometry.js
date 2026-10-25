/* Geometry operations shared by the browser viewer and extraction checks. */
(function (root) {
  'use strict';
  function cross(a,b,c){return (b[0]-a[0])*(c[1]-a[1])-(b[1]-a[1])*(c[0]-a[0]);}
  function triangulate(vertices,indices){
    const normal=[0,0,0];
    for(let i=0;i<indices.length;i++){
      const a=vertices[indices[i]],b=vertices[indices[(i+1)%indices.length]];
      normal[0]+=(a[1]-b[1])*(a[2]+b[2]);normal[1]+=(a[2]-b[2])*(a[0]+b[0]);normal[2]+=(a[0]-b[0])*(a[1]+b[1]);
    }
    const drop=normal.map(Math.abs).indexOf(Math.max(...normal.map(Math.abs)));
    const points=indices.map(i=>vertices[i].filter((_,axis)=>axis!==drop));
    const area=points.reduce((sum,a,i)=>{const b=points[(i+1)%points.length];return sum+a[0]*b[1]-b[0]*a[1];},0);
    if(Math.abs(area)<1e-8)throw new Error('Degenerate polygon');
    const direction=Math.sign(area),remaining=indices.map((_,i)=>i),triangles=[];
    while(remaining.length>3){
      let found=false;
      for(let i=0;i<remaining.length;i++){
        const ia=remaining[(i+remaining.length-1)%remaining.length],ib=remaining[i],ic=remaining[(i+1)%remaining.length];
        const a=points[ia],b=points[ib],c=points[ic];
        if(cross(a,b,c)*direction<=1e-8)continue;
        const contains=remaining.some(j=>j!==ia&&j!==ib&&j!==ic&&cross(a,b,points[j])*direction>=-1e-8&&cross(b,c,points[j])*direction>=-1e-8&&cross(c,a,points[j])*direction>=-1e-8);
        if(contains)continue;
        triangles.push([indices[ia],indices[ib],indices[ic]]);remaining.splice(i,1);found=true;break;
      }
      if(!found)throw new Error('Cannot triangulate polygon');
    }
    triangles.push(remaining.map(i=>indices[i]));return triangles;
  }
  function build(ship){
    const bounds=[0,1,2].map(axis=>{const values=ship.vertices.map(v=>v[axis]);return [Math.min(...values),Math.max(...values)];});
    const center=bounds.map(([a,b])=>(a+b)/2),size=Math.max(...bounds.map(([a,b])=>b-a),1),scale=176/size;
    const positions=ship.vertices.map(v=>[(v[0]-center[0])*scale,-(v[1]-center[1])*scale,-(v[2]-center[2])*scale]),triangles=[];
    const packed=[];
    for(const polygon of ship.polygons){
      const rgb=ship.palette[polygon.color_index].map(v=>v/255);
            let indices=polygon.vertices.slice();
      const plane=ship.planes?.[polygon.face_group];
      if(plane){
        const normal=[0,0,0];for(let i=0;i<indices.length;i++){const a=positions[indices[i]],b=positions[indices[(i+1)%indices.length]];normal[0]+=(a[1]-b[1])*(a[2]+b[2]);normal[1]+=(a[2]-b[2])*(a[0]+b[0]);normal[2]+=(a[0]-b[0])*(a[1]+b[1]);}
        // Face-plane normals point toward the visible side.
        if(normal[0]*plane[0]-normal[1]*plane[1]-normal[2]*plane[2]<0)indices.reverse();
      }
      const faces=triangulate(positions,indices);triangles.push(...faces);
      for(const face of faces)for(const index of face)packed.push(...positions[index],...rgb);
    }
    const lines=[];for(const edge of ship.edges)for(const i of edge)lines.push(...positions[i],0.45,0.79,0.66);
        const details=[],points=[];
    for(const item of ship.decorations||[]){
      if(item.kind==='conditional')continue;
      const rgb=ship.palette[item.color_index].map(v=>v/255);
      if(item.kind==='points'){for(const i of item.indices)if(positions[i])points.push(...positions[i],...rgb);}
      else for(const id of item.indices){const edge=ship.edges[id];if(!edge)continue;if(edge[0]===edge[1])points.push(...positions[edge[0]],...rgb);else for(const i of edge)details.push(...positions[i],...rgb);}
    }
    return {positions,triangles,scale,solid:new Float32Array(packed),wire:new Float32Array(lines),details:new Float32Array(details),points:new Float32Array(points)};
  }
  root.ShipGeometry={triangulate,build};
  if(typeof module!=='undefined')module.exports=root.ShipGeometry;
})(globalThis);