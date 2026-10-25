// Export decompiler output and an address-indexed function list.
// @category Lightspeed
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.*;
import java.nio.charset.StandardCharsets;

public class ExportLightspeed extends GhidraScript {
    public void run() throws Exception {
        File directory = new File(getScriptArgs()[0]);
        directory.mkdirs();
        String name = currentProgram.getName();
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int total = 0, successful = 0;
        try (PrintWriter code = new PrintWriter(new File(directory, name + ".c"), StandardCharsets.UTF_8);
             PrintWriter index = new PrintWriter(new File(directory, name + "-functions.tsv"), StandardCharsets.UTF_8)) {
            code.println("/* Decompiled pseudocode; not original source or guaranteed compilable C. */");
            index.println("address\tname\tdecompiled");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                if (function.isExternal()) continue;
                total++;
                DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
                boolean ok = result.decompileCompleted() && result.getDecompiledFunction() != null;
                index.println(function.getEntryPoint() + "\t" + function.getName() + "\t" + ok);
                code.println("\n/* " + function.getEntryPoint() + " " + function.getName() + " */");
                if (ok) { code.println(result.getDecompiledFunction().getC()); successful++; }
                else code.println("/* Decompilation failed: " + result.getErrorMessage() + " */");
            }
        } finally { decompiler.dispose(); }
        println("EXPORT: " + successful + "/" + total + " functions decompiled for " + name);
    }
}