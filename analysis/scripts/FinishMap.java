// @category Lightspeed
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import com.google.gson.*;
import java.nio.file.*;
import java.io.*;
import ghidra.program.model.data.*;
public class FinishMap extends MapLightspeed {
 public void run() throws Exception {
  root=new File(getScriptArgs()[0]);output=new File(root,"analysis/mapped");
  manifest=JsonParser.parseString(Files.readString(new File(output,"manifest.json").toPath())).getAsJsonObject();
  for(MemoryBlock b:currentProgram.getMemory().getBlocks()) if(b.getName().startsWith("ovl_")) overlays.put(Integer.parseInt(b.getName().substring(4)),b);
  MemoryBlock b=overlays.get(8);Address a=b.getStart();println("OVL8 unit="+currentProgram.getListing().getCodeUnitAt(a));
  clearListing(a,b.getEnd());
  DisassembleCommand cmd=new DisassembleCommand(a,new AddressSet(a,b.getEnd()),true);boolean ok=cmd.applyTo(currentProgram,monitor);println("OVL8 dis="+ok+" status="+cmd.getStatusMsg());
  Function f=ensureFunction(a,"ovl_08_entry");println("OVL8 func="+f);
  for(JsonElement e:manifest.getAsJsonArray("thunks")) {
   JsonObject t=e.getAsJsonObject();Address stub=addr(num(t,"segment"),num(t,"offset"));Address target=overlayAddr(num(t,"overlay"),num(t,"target_segment"),num(t,"target_offset"));
   for(Reference ref:currentProgram.getReferenceManager().getReferencesFrom(stub)) if(ref.getReferenceType().isFlow())currentProgram.getReferenceManager().delete(ref);
   Reference ref=currentProgram.getReferenceManager().addMemoryReference(stub,target,RefType.JUMP_OVERRIDE_UNCONDITIONAL,SourceType.USER_DEFINED,0);currentProgram.getReferenceManager().setPrimary(ref,true);
  }
  FunctionIterator functions=currentProgram.getFunctionManager().getFunctions(true);
  java.util.ArrayList<Address> invalid=new java.util.ArrayList<>();
  while(functions.hasNext()){Function fun=functions.next();MemoryBlock block=currentProgram.getMemory().getBlock(fun.getEntryPoint());if(block!=null&&!block.isExecute())invalid.add(fun.getEntryPoint());}
  for(Address entry:invalid){removeFunction(getFunctionAt(entry));println("Removed data function "+entry);}
    analyzeAll(currentProgram);
  MemoryBlock data=currentProgram.getMemory().getBlock("game_data");
  java.util.ArrayList<Function> dataFunctions=new java.util.ArrayList<>();
  FunctionIterator fit=currentProgram.getFunctionManager().getFunctions(true);
  while(fit.hasNext()){Function fun=fit.next();if(data.contains(fun.getEntryPoint()))dataFunctions.add(fun);}
  for(Function fun:dataFunctions)removeFunction(fun);
  clearListing(data.getStart(),data.getEnd());
  StructureDataType entry=new StructureDataType("DosOverlayDirectoryEntry",0);
  String[] fields={"load_segment","file_name_offset","file_paragraph","flags_and_high_offset","allocation_paragraphs","relocation_count","parent_overlay","linker_overlay_number"};
  for(String field:fields)entry.add(WordDataType.dataType,field,null);
  Address directory=addr(0x2120,0xc2c);clearListing(directory,directory.add(53*16-1));createData(directory,new ArrayDataType(entry,53,16));createLabel(directory,"overlay_directory",true);
  export();
 }
}