// @category Lightspeed
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.lang.*;
import ghidra.app.decompiler.*;
import java.math.BigInteger;
import java.io.*;
import com.google.gson.*;
import java.nio.file.*;
public class FixSegments extends GhidraScript {
 public void run() throws Exception {
  Register cs=currentProgram.getRegister("CS");
  for(MemoryBlock b:currentProgram.getMemory().getBlocks()) {
   if(b.getStart() instanceof SegmentedAddress && b.isExecute() && !b.isOverlay()) {
    int segment=((SegmentedAddress)b.getStart()).getSegment();
    currentProgram.getProgramContext().setValue(cs,b.getStart(),b.getEnd(),BigInteger.valueOf(segment));
   }
  }
  String[] addresses={"1090:12ec","132b:0006","ovl_16::02959e","ovl_00::022dc0"};
  DecompInterface d=new DecompInterface(); d.openProgram(currentProgram);
  for(String text:addresses) {
   Address a=toAddr(text);println("REGISTERS "+a+" CS="+currentProgram.getProgramContext().getValue(cs,a,false)+" DS="+currentProgram.getProgramContext().getValue(currentProgram.getRegister("DS"),a,false));
   var f=getFunctionAt(a);var result=d.decompileFunction(f,15,monitor);
   println("RESULT "+a+" "+result.decompileCompleted()+" "+result.getErrorMessage());
   if(result.decompileCompleted()) Files.writeString(Path.of(getScriptArgs()[0],text.replace(':','_')+".c"),result.getDecompiledFunction().getC());
  }d.dispose();
 }
}