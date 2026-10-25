'use strict';
const assert=require('node:assert/strict');
const fs=require('node:fs');
const path=require('node:path');
const geometry=require('./geometry.js');
function normal(a,b,c){const ab=b.map((v,i)=>v-a[i]),ac=c.map((v,i)=>v-a[i]);return [ab[1]*ac[2]-ab[2]*ac[1],ab[2]*ac[0]-ab[0]*ac[2],ab[0]*ac[1]-ab[1]*ac[0]];}
function dot(a,b){return a.reduce((sum,x,i)=>sum+x*b[i],0);}
// A convex cube's faces must point away from its known interior, regardless of input winding.
const vertices=[[-1,-1,-1],[1,-1,-1],[1,1,-1],[-1,1,-1],[-1,-1,1],[1,-1,1],[1,1,1],[-1,1,1]];
const faces=[[0,1,2,3],[4,5,6,7],[0,4,7,3],[1,5,6,2],[0,1,5,4],[3,2,6,7]];
const planes=[[0,0,-1,-1],[0,0,1,-1],[-1,0,0,-1],[1,0,0,-1],[0,-1,0,-1],[0,1,0,-1]];
const cube={vertices,edges:[],planes,palette:[[255,255,255]],polygons:faces.map((v,i)=>({vertices:i%2?v.slice().reverse():v,face_group:i,color_index:0}))};
const mesh=geometry.build(cube);
for(const t of mesh.triangles){const pts=t.map(i=>mesh.positions[i]);const n=normal(...pts),center=[0,1,2].map(axis=>pts.reduce((sum,p)=>sum+p[axis],0)/3);assert(dot(n,center)>0,'Cube triangle faces its interior');}
// From the positive Z side, only the near cap should face the camera; the far cap must be culled.
const caps=mesh.triangles.filter(t=>t.every(i=>Math.abs(mesh.positions[i][2]-mesh.positions[t[0]][2])<1e-8));
const visibleCaps=caps.filter(t=>{const pts=t.map(i=>mesh.positions[i]);return dot(normal(...pts),[0,0,500-pts[0][2]])>0;});
assert.equal(visibleCaps.length,2);assert(visibleCaps.every(t=>mesh.positions[t[0]][2]>0),'Far cap exposed instead of near cap');
// Catalog triangles must face the positive side of the original model planes.
const catalog=JSON.parse(fs.readFileSync(path.join(__dirname,'model-catalog.json'),'utf8'));
let triangles=0;
for(const model of catalog.models){
 const built=geometry.build(model);let offset=0;
 for(const polygon of model.polygons){
  const plane=model.planes[polygon.face_group],expected=plane?[plane[0],-plane[1],-plane[2]]:null;
  const count=polygon.vertices.length-2;
  for(const t of built.triangles.slice(offset,offset+count)){
   const n=normal(...t.map(i=>built.positions[i]));
   if(expected)assert(dot(n,expected)>=-0.01,model.id+' has a reversed face');
   triangles++;
  }
  offset+=count;
 }
 assert.equal(offset,built.triangles.length);
}
console.log(`Passed: outward cube faces, near-cap visibility, ${triangles} triangles across ${catalog.models.length} models.`);