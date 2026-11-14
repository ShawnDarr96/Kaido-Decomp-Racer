// Exports every function in the current program as decompiled C, grouped into
// one file per 16 KiB of address space, plus a symbol list and a string list.
// Usage (headless): -postScript ExportDecomp.java <outDir>
//@category KaidoDecomp
import ghidra.app.decompiler.*;
import ghidra.app.decompiler.parallel.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.util.task.TaskMonitor;

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class ExportDecomp extends GhidraScript {
    static final long BUCKET = 0x4000;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path out = Paths.get(args.length > 0 ? args[0] : "decomp");
        Path srcDir = out.resolve("src");
        Files.createDirectories(srcDir);

        Listing listing = currentProgram.getListing();
        List<Function> funcs = new ArrayList<>();
        for (Function f : listing.getFunctions(true)) {
            if (!f.isExternal() && !f.isThunk()) funcs.add(f);
        }
        println("Functions to decompile: " + funcs.size());

        DecompilerCallback<String[]> cb = new DecompilerCallback<>(currentProgram, new DecompilerConfigurer() {
            @Override
            public void configure(DecompInterface d) {
                DecompileOptions o = new DecompileOptions();
                d.setOptions(o);
                d.toggleCCode(true);
                d.toggleSyntaxTree(false);
                d.setSimplificationStyle("decompile");
            }
        }) {
            @Override
            public String[] process(DecompileResults r, TaskMonitor m) {
                Function f = r.getFunction();
                String body;
                if (r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    body = r.getDecompiledFunction().getC();
                } else {
                    body = "/* decompilation failed: " + r.getErrorMessage() + " */\n";
                }
                return new String[] { f.getEntryPoint().toString(), body };
            }
        };
        cb.setTimeout(120);
        List<String[]> results = ParallelDecompiler.decompileFunctions(cb, funcs, monitor);
        cb.dispose();

        Map<String, String> byAddr = new HashMap<>();
        for (String[] r : results) if (r != null) byAddr.put(r[0], r[1]);

        // Group by address bucket.
        TreeMap<Long, List<Function>> buckets = new TreeMap<>();
        for (Function f : funcs) {
            long a = f.getEntryPoint().getOffset();
            buckets.computeIfAbsent(a / BUCKET * BUCKET, k -> new ArrayList<>()).add(f);
        }
        int failed = 0;
        try (PrintWriter idx = writer(out.resolve("functions.csv"))) {
            idx.println("address,size,name,file,status");
            for (Map.Entry<Long, List<Function>> e : buckets.entrySet()) {
                String fname = String.format("text_%08x.c", e.getKey());
                try (PrintWriter w = writer(srcDir.resolve(fname))) {
                    w.println("// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.");
                    w.printf("// Address range 0x%08x - 0x%08x%n", e.getKey(), e.getKey() + BUCKET);
                    w.println("#include \"ghidra_types.h\"");
                    w.println();
                    for (Function f : e.getValue()) {
                        String key = f.getEntryPoint().toString();
                        String c = byAddr.getOrDefault(key, "/* missing */\n");
                        boolean ok = !c.startsWith("/* decompilation failed") && !c.startsWith("/* missing");
                        if (!ok) failed++;
                        w.printf("// 0x%s  size 0x%x%n", key, f.getBody().getNumAddresses());
                        w.println(c.strip());
                        w.println();
                        idx.printf("0x%s,0x%x,%s,src/%s,%s%n", key, f.getBody().getNumAddresses(),
                                f.getName(), fname, ok ? "decompiled" : "failed");
                    }
                }
            }
        }

        // Strings.
        try (PrintWriter w = writer(out.resolve("strings.csv"))) {
            w.println("address,string");
            for (Data d : listing.getDefinedData(true)) {
                if (d.hasStringValue() && d.getValue() != null) {
                    String s = d.getValue().toString().replace("\\", "\\\\").replace("\n", "\\n")
                            .replace("\r", "\\r").replace("\"", "\"\"");
                    w.printf("0x%s,\"%s\"%n", d.getAddress(), s);
                }
            }
        }
        println("Exported " + funcs.size() + " functions into " + buckets.size() + " files; failed: " + failed);
    }

    private static PrintWriter writer(Path p) throws IOException {
        return new PrintWriter(Files.newBufferedWriter(p, StandardCharsets.UTF_8));
    }
}
