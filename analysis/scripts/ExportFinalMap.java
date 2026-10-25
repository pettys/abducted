// @category Lightspeed
import java.io.File;
public class ExportFinalMap extends MapLightspeed {
 public void run() throws Exception {
  root=new File(getScriptArgs()[0]);output=new File(root,"analysis/mapped");export();
 }
}