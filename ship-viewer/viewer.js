(function(){
  'use strict';
  const canvas=document.getElementById('viewport'),error=document.getElementById('error');
  try {
    const gl=canvas.getContext('webgl',{alpha:true,antialias:false,preserveDrawingBuffer:true});
    if(!gl)throw new Error('This browser could not start WebGL. Try opening the viewer in Chrome or Edge.');
    const shader=(type,source)=>{const s=gl.createShader(type);gl.shaderSource(s,source);gl.compileShader(s);if(!gl.getShaderParameter(s,gl.COMPILE_STATUS))throw new Error(gl.getShaderInfoLog(s));return s;};
    const vertex=shader(gl.VERTEX_SHADER,'attribute vec3 position; attribute vec3 color; uniform mat3 rotation; uniform mat4 projection; uniform float distance; varying vec3 rgb; void main(){vec3 p=rotation*position;p.z-=distance;gl_Position=projection*vec4(p,1.0);gl_PointSize=4.0;rgb=color;}');
    const fragment=shader(gl.FRAGMENT_SHADER,'precision mediump float; varying vec3 rgb; void main(){gl_FragColor=vec4(rgb,1.0);}');
    const program=gl.createProgram();gl.attachShader(program,vertex);gl.attachShader(program,fragment);gl.linkProgram(program);if(!gl.getProgramParameter(program,gl.LINK_STATUS))throw new Error(gl.getProgramInfoLog(program));gl.useProgram(program);
    const catalog=window.LIGHTSPEED_MODELS; let data,solid,wire,details,points,active;
    const buffer=(values)=>{const b=gl.createBuffer();gl.bindBuffer(gl.ARRAY_BUFFER,b);gl.bufferData(gl.ARRAY_BUFFER,values,gl.STATIC_DRAW);return {handle:b,count:values.length/6};};

    const position=gl.getAttribLocation(program,'position'),color=gl.getAttribLocation(program,'color');
    const rotation=gl.getUniformLocation(program,'rotation'),projection=gl.getUniformLocation(program,'projection'),distance=gl.getUniformLocation(program,'distance');
    const state={yaw:-0.6,pitch:0.35,distance:250,playing:true,mode:'solid',speed:0.35,frames:0};
    const picker=document.getElementById('model');
    let group=null,lastPack=null,downloadUrls=[];
    for(const model of catalog){
      if(model.pack!==lastPack){group=document.createElement('optgroup');group.label=model.pack;picker.appendChild(group);lastPack=model.pack;}
      const option=document.createElement('option');option.value=model.id;option.textContent=`${model.pack} · Model ${String(model.model_index+1).padStart(2,'0')}${model.polygons.length?'':' (point marker)'}`;group.appendChild(option);
    }
    function loadModel(id){
      const model=catalog.find(m=>m.id===id);if(!model)throw new Error('Unknown model');
      const built=ShipGeometry.build(model);
      for(const b of [solid,wire,details,points])if(b)gl.deleteBuffer(b.handle);
      active=model;data=built;solid=buffer(data.solid);wire=buffer(data.wire);details=buffer(data.details);points=buffer(data.points);
      state.distance=250;state.modelId=id;picker.value=id;
      document.getElementById('model-label').textContent=`${model.pack} · MODEL ${String(model.model_index+1).padStart(2,'0')}`;
      document.getElementById('vertex-count').textContent=model.vertices.length;document.getElementById('edge-count').textContent=model.edges.length;document.getElementById('polygon-count').textContent=model.polygons.length;
      for(const url of downloadUrls)URL.revokeObjectURL(url);downloadUrls=[];
      const obj=['# Lightspeed '+model.id,...model.vertices.map(v=>'v '+v.join(' ')),...model.polygons.map(p=>'f '+p.vertices.map(i=>i+1).join(' '))].join('\n');
      for(const [element,content,extension,type] of [['download-obj',obj,'obj','text/plain'],['download-json',JSON.stringify(model,null,2),'json','application/json']]){
        const url=URL.createObjectURL(new Blob([content],{type}));downloadUrls.push(url);const link=document.getElementById(element);link.href=url;link.download=`${model.pack}-${model.model_index+1}.${extension}`;
      }
      if(window.shipViewer){window.shipViewer.triangleCount=data.triangles.length;window.shipViewer.vertexCount=model.vertices.length;}
    }
    picker.addEventListener('change',e=>loadModel(e.target.value));loadModel('FIRST3D:0');
    const toggle=document.getElementById('toggle');
    function updateToggle(){toggle.textContent=state.playing?'Pause':'Rotate';toggle.setAttribute('aria-pressed',String(state.playing));}
    toggle.addEventListener('click',()=>{state.playing=!state.playing;updateToggle();});updateToggle();
    document.getElementById('reset').addEventListener('click',()=>Object.assign(state,{yaw:-0.6,pitch:0.35,distance:250}));
    document.getElementById('mode').addEventListener('change',e=>state.mode=e.target.value);
    document.getElementById('speed').addEventListener('input',e=>state.speed=Number(e.target.value));
    let drag=null;
    canvas.addEventListener('pointerdown',e=>{drag={x:e.clientX,y:e.clientY};canvas.setPointerCapture(e.pointerId);});
    canvas.addEventListener('pointermove',e=>{if(!drag)return;state.yaw+=(e.clientX-drag.x)*0.008;state.pitch=Math.max(-1.45,Math.min(1.45,state.pitch+(e.clientY-drag.y)*0.008));drag={x:e.clientX,y:e.clientY};});
    canvas.addEventListener('pointerup',()=>drag=null);canvas.addEventListener('pointercancel',()=>drag=null);
    canvas.addEventListener('wheel',e=>{e.preventDefault();state.distance=Math.max(155,Math.min(650,state.distance*Math.exp(e.deltaY*0.001)));},{passive:false});
    canvas.addEventListener('keydown',e=>{if(e.key===' '){e.preventDefault();state.playing=!state.playing;updateToggle();}else if(e.key.startsWith('Arrow')){e.preventDefault();if(e.key==='ArrowLeft')state.yaw-=0.12;if(e.key==='ArrowRight')state.yaw+=0.12;if(e.key==='ArrowUp')state.pitch=Math.max(-1.45,state.pitch-0.12);if(e.key==='ArrowDown')state.pitch=Math.min(1.45,state.pitch+0.12);}});
    function drawBuffer(b,kind){if(!b.count)return;gl.bindBuffer(gl.ARRAY_BUFFER,b.handle);gl.enableVertexAttribArray(position);gl.enableVertexAttribArray(color);gl.vertexAttribPointer(position,3,gl.FLOAT,false,24,0);gl.vertexAttribPointer(color,3,gl.FLOAT,false,24,12);gl.drawArrays(kind,0,b.count);}
    function render(){
      const ratio=Math.min(devicePixelRatio||1,2),w=Math.round(canvas.clientWidth*ratio),h=Math.round(canvas.clientHeight*ratio);
      if(canvas.width!==w||canvas.height!==h){canvas.width=w;canvas.height=h;}
      gl.viewport(0,0,w,h);gl.clearColor(0,0,0,0);gl.clear(gl.COLOR_BUFFER_BIT|gl.DEPTH_BUFFER_BIT);gl.enable(gl.DEPTH_TEST);gl.depthFunc(gl.LEQUAL);gl.enable(gl.CULL_FACE);gl.cullFace(gl.BACK);gl.frontFace(gl.CCW);
      const f=1/Math.tan(50*Math.PI/360),near=1,far=2000;
      gl.uniformMatrix4fv(projection,false,new Float32Array([f/(w/h),0,0,0,0,f,0,0,0,0,(far+near)/(near-far),-1,0,0,2*far*near/(near-far),0]));
      const cy=Math.cos(state.yaw),sy=Math.sin(state.yaw),cp=Math.cos(state.pitch),sp=Math.sin(state.pitch);
      gl.uniformMatrix3fv(rotation,false,new Float32Array([cy,sp*sy,-cp*sy,0,-cp,-sp,-sy,sp*cy,-cp*cy]));gl.uniform1f(distance,state.distance);
      if(state.mode!=='wire'){gl.enable(gl.POLYGON_OFFSET_FILL);gl.polygonOffset(1,1);drawBuffer(solid,gl.TRIANGLES);gl.disable(gl.POLYGON_OFFSET_FILL);}
      if(state.mode!=='solid')drawBuffer(wire,gl.LINES);
      if(state.mode!=='wire')drawBuffer(details,gl.LINES);drawBuffer(points,gl.POINTS);
      state.frames++;
    }
    let previous=performance.now();
    function frame(now){const dt=Math.min((now-previous)/1000,0.05);previous=now;if(state.playing&&!drag&&!document.hidden)state.yaw+=dt*state.speed;render();requestAnimationFrame(frame);}requestAnimationFrame(frame);
    canvas.addEventListener('webglcontextlost',e=>{e.preventDefault();error.textContent='The graphics context was interrupted. Reload to continue.';error.hidden=false;});
    window.shipViewer={state,render,triangleCount:data.triangles.length,vertexCount:active.vertices.length,modelCount:catalog.length};
  } catch(e){error.textContent=e.message;error.hidden=false;console.error(e);}
})();