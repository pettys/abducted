// @category Lightspeed
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.data.*;
import com.google.gson.*;
import java.io.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.math.BigInteger;
import java.util.*;

public class MapLightspeed extends GhidraScript {
    File root, output;
    JsonObject manifest;
    Map<Integer, MemoryBlock> overlays = new HashMap<>();
    int num(JsonObject o, String key) { return o.get(key).getAsInt(); }
    Address addr(int segment, int offset) { return toAddr(String.format("%04x:%04x",segment,offset)); }
    Address overlayAddr(int id, int segment, int offset) throws Exception {
        return overlays.get(id).getStart().getAddressSpace().getAddress(((long)segment << 4)+offset);
    }
    void context(MemoryBlock block, String register, int value) throws Exception {
        Register r=currentProgram.getRegister(register);
        if(r!=null) currentProgram.getProgramContext().setValue(r,block.getStart(),block.getEnd(),BigInteger.valueOf(value)); if(register.equals("CS")) currentProgram.getProgramContext().setValue(currentProgram.getRegister("lightspeedCS"),block.getStart(),block.getEnd(),BigInteger.valueOf(value));
    }
    boolean dis(Address a) {
        DisassembleCommand command=new DisassembleCommand(a,null,true);
        return command.applyTo(currentProgram,monitor);
    }
    Function ensureFunction(Address a, String name) throws Exception {
        Function f=getFunctionAt(a);
        if(f==null) { dis(a); f=createFunction(a,name); }
        if(f!=null && name!=null) f.setName(name,SourceType.USER_DEFINED);
        return f;
    }
    PrintWriter writer(String file) throws Exception {return new PrintWriter(new File(output,file),StandardCharsets.UTF_8);}
    public void run() throws Exception {
        root=new File(getScriptArgs()[0]); output=new File(root,"analysis/mapped");
        manifest=JsonParser.parseString(Files.readString(new File(output,"manifest.json").toPath())).getAsJsonObject();
        JsonArray regions=manifest.getAsJsonArray("regions");
        for(JsonElement e:regions) {
            JsonObject r=e.getAsJsonObject(); int id=num(r,"id");
            String name=r.get("name").getAsString(); byte[] data=Files.readAllBytes(new File(output,name+".bin").toPath());
                        Address start=addr(num(r,"analysis_segment"),0);
            if(id==52) {
                Memory memory=currentProgram.getMemory();
                                Address end=start.add(data.length-1);
                for(MemoryBlock candidate:memory.getBlocks()) {
                    if(candidate.isOverlay() || !candidate.getStart().getAddressSpace().equals(start.getAddressSpace())) continue;
                    if(candidate.getEnd().compareTo(start)<0 || candidate.getStart().compareTo(end)>0) continue;
                    if(candidate.isInitialized()) throw new IOException("Initialized block overlaps data: "+candidate.getName());
                    MemoryBlock conflict=candidate;
                    if(conflict.getStart().compareTo(start)<0) {memory.split(conflict,start);conflict=memory.getBlock(start);}
                    if(conflict.getEnd().compareTo(end)>0) memory.split(conflict,end.add(1));
                    memory.removeBlock(conflict,monitor);
                }
            }
            MemoryBlock block=currentProgram.getMemory().createInitializedBlock(name,start,new ByteArrayInputStream(data),data.length,monitor,id<52);
            block.setRead(true); block.setWrite(id==52); block.setExecute(id<52);
            block.setComment("Source "+r.get("source").getAsString()+" payload file offset "+Integer.toHexString(num(r,"payload_offset"))+". Relocated to DOS load base 1000. See manifest.json.");
                        if(id<52) {
                overlays.put(id,block);
                TreeSet<Integer> segments=new TreeSet<>();segments.add(num(r,"analysis_segment"));
                for(JsonElement relocation:r.getAsJsonArray("relocations")) segments.add(num(relocation.getAsJsonObject(),"segment")+0x1000);
                ArrayList<Integer> ordered=new ArrayList<>(segments);
                for(int k=0;k<ordered.size();k++) {
                    int s=ordered.get(k);
                    Address a=block.getStart().getAddressSpace().getAddress((long)s<<4);
                    Address z=k+1<ordered.size()?block.getStart().getAddressSpace().getAddress(((long)ordered.get(k+1)<<4)-1):block.getEnd();
                    currentProgram.getProgramContext().setValue(currentProgram.getRegister("CS"),a,z,BigInteger.valueOf(s)); currentProgram.getProgramContext().setValue(currentProgram.getRegister("lightspeedCS"),a,z,BigInteger.valueOf(s));
                }
            }
            context(block,"DS",0x2e67); context(block,"SS",0x2e67);
        }
        for(MemoryBlock block:currentProgram.getMemory().getBlocks()) {
            if(!block.isOverlay() && block.isExecute() && block.getStart() instanceof SegmentedAddress)
                context(block,"CS",((SegmentedAddress)block.getStart()).getSegment());
        }
        // The C runtime establishes SS=DS=2e67 after overlay startup.
        for(MemoryBlock block:currentProgram.getMemory().getBlocks()) {
            if(!block.isOverlay() && block.isExecute() && block.getStart().getOffset()<0x21200) {
                context(block,"DS",0x2e67); context(block,"SS",0x2e67);
            }
        }
        // Represent overlay dispatch stubs as direct jumps in the analysis copy only.
        // The on-disk game files remain unchanged; manifest retains each original thunk.
        for(JsonElement e:manifest.getAsJsonArray("thunks")) {
            JsonObject t=e.getAsJsonObject();Address stub=addr(num(t,"segment"),num(t,"offset"));
            clearListing(stub,stub.add(9)); int off=num(t,"target_offset"),seg=num(t,"target_segment");
            byte[] patch={(byte)0xea,(byte)off,(byte)(off>>8),(byte)seg,(byte)(seg>>8),(byte)0x90,(byte)0x90,(byte)0x90,(byte)0x90,(byte)0x90};
            setBytes(stub,patch); dis(stub);
            Address target=overlayAddr(num(t,"overlay"),seg,off);
            currentProgram.getReferenceManager().addMemoryReference(stub,target,RefType.JUMP_OVERRIDE_UNCONDITIONAL,SourceType.USER_DEFINED,0);
            setPlateComment(stub,"Analysis-only direct jump replacing overlay load/return trampoline. Original bytes and overlay ID in manifest.json.");
            ensureFunction(target,String.format("ovl_%02d_entry_%04x_%04x",num(t,"overlay"),seg,off));
        }
        // Seed compiler prologues as candidate function boundaries, including unreferenced code.
        for(MemoryBlock b:currentProgram.getMemory().getBlocks()) {
            if(!b.isInitialized()||!b.isExecute()||b.getName().equals("HEADER"))continue;
            byte[] bytes=new byte[(int)b.getSize()];currentProgram.getMemory().getBytes(b.getStart(),bytes);
            for(int i=0;i<bytes.length-2;i++) {
                if(bytes[i]==0x55 && bytes[i+1]==(byte)0x8b && bytes[i+2]==(byte)0xec) {
                    Address a=b.getStart().add(i);
                    if(getFunctionAt(a)==null) ensureFunction(a,null);
                }
            }
            if(b.isOverlay()&&!b.getName().equals("ovl_09")) ensureFunction(b.getStart(),null);
        }
        analyzeAll(currentProgram);
        for(JsonElement e:manifest.getAsJsonArray("thunks")) {
            JsonObject t=e.getAsJsonObject();Address stub=addr(num(t,"segment"),num(t,"offset"));
            Address target=overlayAddr(num(t,"overlay"),num(t,"target_segment"),num(t,"target_offset"));
            Function destination=getFunctionAt(target);
            Function f=ensureFunction(stub,String.format("dispatch_ovl_%02d_%04x_%04x",num(t,"overlay"),num(t,"target_segment"),num(t,"target_offset")));
            if(f!=null && destination!=null) f.setThunkedFunction(destination);
        }
        int[][] known={{0x2120,0x414},{0x2120,0x35},{0x2120,0x34c},{0x2120,0x3ba},{0x2120,0x5bb},{0x2120,0x5d7},{0x2120,0x641},{0x19c7,0x2854},{0x1000,0}};
        String[] names={"dos_overlay_startup","dos_load_overlay","dos_overlay_dispatch","dos_overlay_restore_caller","dos_overlay_print_filename","dos_overlay_fatal_error","dos_overlay_find_file","msc_runtime_startup","game_main"};
        for(int i=0;i<known.length;i++) ensureFunction(addr(known[i][0],known[i][1]),names[i]);
        export();
        println("MAPPED: "+overlays.size()+" code overlays, initialized data region, 129 dispatch stubs");
    }
    void export() throws Exception {
        Map<String,PrintWriter> code=new LinkedHashMap<>();
        DecompInterface d=new DecompInterface(); d.openProgram(currentProgram);
        int total=0,success=0,aliases=0;
        try(PrintWriter functions=writer("functions.tsv");PrintWriter calls=writer("references.tsv");PrintWriter assembly=writer("disassembly.asm");PrintWriter blocks=writer("memory-blocks.tsv");PrintWriter gaps=writer("unclassified-ranges.tsv");PrintWriter issues=writer("unresolved-instructions.tsv")) {
            functions.println("address\tname\tregion\tbody_bytes\tdecompiled\terror");
            calls.println("from\tto\ttype\toperand\tsource");blocks.println("name\tstart\tend\tsize\texecutable\toverlay");
            gaps.println("region\tstart\tend\tbytes\tstatus");issues.println("address\tinstruction\treason");
            for(MemoryBlock b:currentProgram.getMemory().getBlocks()) {
                blocks.println(b.getName()+"\t"+b.getStart()+"\t"+b.getEnd()+"\t"+b.getSize()+"\t"+b.isExecute()+"\t"+b.isOverlay());
                if(!b.isInitialized()) continue;
                AddressSet unknown=new AddressSet(b.getStart(),b.getEnd());
                InstructionIterator it=currentProgram.getListing().getInstructions(new AddressSet(b.getStart(),b.getEnd()),true);
                while(it.hasNext()) {
                    Instruction ins=it.next(); unknown.delete(ins.getMinAddress(),ins.getMaxAddress());
                    assembly.println(ins.getAddress()+"\t"+ghidra.util.NumericUtilities.convertBytesToString(ins.getBytes())+"\t"+ins);
                    FlowType flow=ins.getFlowType();
                    if(flow.isComputed() && (flow.isCall()||flow.isJump())) issues.println(ins.getAddress()+"\t"+ins+"\tindirect control flow; targets require validation");
                    for(Reference ref:ins.getReferencesFrom()) {
                        calls.println(ref.getFromAddress()+"\t"+ref.getToAddress()+"\t"+ref.getReferenceType()+"\t"+ref.getOperandIndex()+"\t"+ref.getSource());
                        if(ref.getReferenceType().isFlow() && ref.isMemoryReference() && !currentProgram.getMemory().contains(ref.getToAddress())) issues.println(ins.getAddress()+"\t"+ins+"\tunmapped target "+ref.getToAddress());
                    }
                }
                AddressRangeIterator ranges=unknown.getAddressRanges();
                while(ranges.hasNext()) {AddressRange r=ranges.next();gaps.println(b.getName()+"\t"+r.getMinAddress()+"\t"+r.getMaxAddress()+"\t"+r.getLength()+"\t"+(b.isExecute()?"not decoded; may be data, padding, or undiscovered code":"data"));}
            }
            FunctionIterator iterator=currentProgram.getFunctionManager().getFunctions(true);
            while(iterator.hasNext()&&!monitor.isCancelled()) {
                Function f=iterator.next();if(f.isExternal())continue;total++;
                MemoryBlock block=currentProgram.getMemory().getBlock(f.getEntryPoint());String region=block==null?"unmapped":block.getName();
                String module=region.startsWith("ovl_")?region:"resident";
                PrintWriter out=code.get(module);
                if(out==null) {out=writer(module+".c");out.println("/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */");code.put(module,out);}
                                if(f.getName().startsWith("dispatch_ovl_")) {
                    aliases++; functions.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+region+"\t"+f.getBody().getNumAddresses()+"\talias\t");
                    out.println("/* "+f.getEntryPoint()+" "+f.getName()+" is an overlay dispatch alias for "+f.getName()+". */");
                    continue;
                }
                DecompileResults result=d.decompileFunction(f,30,monitor);boolean ok=result.decompileCompleted()&&result.getDecompiledFunction()!=null;
                String error=result.getErrorMessage().replace('\n',' ').replace('\r',' ').replace('\t',' ');
                functions.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+region+"\t"+f.getBody().getNumAddresses()+"\t"+ok+"\t"+error);
                out.println("\n/* "+f.getEntryPoint()+" "+f.getName()+" */");
                if(ok) {out.println(result.getDecompiledFunction().getC());success++;} else out.println("/* "+error+" */");
            }
        } finally {for(PrintWriter w:code.values())w.close();d.dispose();}
        try(PrintWriter summary=writer("decompile-summary.json")) {summary.println("{\"functions\":"+total+",\"decompiled\":"+success+",\"aliases\":"+aliases+",\"modules\":"+code.size()+"}");}
        println("EXPORT: "+success+"/"+total+" functions, "+code.size()+" modules");
    }
}