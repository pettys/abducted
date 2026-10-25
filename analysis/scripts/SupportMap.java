// @category Lightspeed
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;
public class SupportMap extends MapLightspeed {
 public void run() throws Exception {
  root=new File(getScriptArgs()[0]);output=new File(root,"analysis/support/"+currentProgram.getName());output.mkdirs();
  for(MemoryBlock block:currentProgram.getMemory().getBlocks()) {
   if(!block.isInitialized()||block.getName().equals("HEADER"))continue;
   block.setExecute(true);
   int segment=block.getStart() instanceof SegmentedAddress?((SegmentedAddress)block.getStart()).getSegment():0x1000;
   context(block,"CS",segment);
   if(currentProgram.getName().endsWith(".COM")){context(block,"DS",0x1000);context(block,"SS",0x1000);}
   byte[] bytes=new byte[(int)block.getSize()];currentProgram.getMemory().getBytes(block.getStart(),bytes);
   for(int i=0;i<bytes.length-2;i++) if(bytes[i]==0x55&&bytes[i+1]==(byte)0x8b&&bytes[i+2]==(byte)0xec) ensureFunction(block.getStart().add(i),null);
  }
  if(currentProgram.getName().endsWith(".COM")) ensureFunction(currentProgram.getMinAddress(),"com_entry");
  analyzeAll(currentProgram);export();
 }
}