# Kaido Racer decompilation

A decompilation of **Kaido Racer** (PlayStation 2, PAL, SLES-53191, Genki / Konami 2005).

> This repository contains no game data. You need your own copy of the game.
> Expected files (see [`config/`](config)):
>
> | File | SHA-1 |
> |---|---|
> | `Kaido Racer (Europe) (En,Fr,De,Es,It).iso` | `8ae9ec979fe5c80f563e3212cdf5ca4a4d18114f` |
> | `SLES_531.91` (main executable on the disc) | `05f754aea14cafd28d0922b8c87586f9c9ca651e` |

## Status

| Stage | State |
|---|---|
| Executable extracted, compiler identified | done: **Metrowerks CodeWarrior MIPS C 2.4.1.01**, Sony SDK libraries **2.8.0** |
| Full Ghidra analysis (Emotion Engine processor) | done |
| Every function decompiled to C | done: [`decomp/src/`](decomp/src), index in [`decomp/functions.csv`](decomp/functions.csv), progress in [`decomp/PROGRESS.md`](decomp/PROGRESS.md) |
| Every function named or assigned to its module | done: 3576 named (75%), 1177 tagged `module_role_sub_ADDRESS` (25%); see [`config/symbols.csv`](config/symbols.csv) |
| Global singletons named, `$gp` resolved | done: [`config/globals.csv`](config/globals.csv), `$gp = 0x3766f0` |
| Placeholders replaced with real names, types recovered | in progress, tracked in [`WORK.md`](WORK.md) |
| Matching (byte-identical) source | not started, see the P3 rows in [`WORK.md`](WORK.md) |

The executable is stripped (no symbol table). Every function now has either a name backed by its code
(strings, SDK conventions, call graph) or a module tag such as `scrgarage_sub_00213720` that records which
subsystem it belongs to while its real name is still open. Names prefixed `maybe_` are educated guesses.
The work now is replacing placeholders, recovering structs and splitting the code into its original source
files (the 200 `__sinit_*` static initializers mark many translation-unit boundaries). The Sony SDK
code (`sceGs*`, `sceCd*`, `sceMc*`, `scePad2*`, `sceDbc*`, libipu/MPEG) and the Metrowerks runtime can be
identified from their strings and from other games that use the same SDK version.

## Layout

| Path | What |
|---|---|
| `decomp/src/text_XXXXXXXX.c` | Ghidra's C for every function, one file per 16 KiB of `.text` (generated) |
| `decomp/src/ghidra_types.h` | Typedefs for Ghidra's `undefined4` etc. |
| `decomp/functions.csv` | Address, size, current name, file, decompile status of every function |
| `decomp/strings.csv` | Every string Ghidra found |
| `scripts/ghidra_export.py` | Headless import + analysis + export (PyGhidra) |
| `scripts/setup_tools.ps1` | Installs the toolchain into `tools/` and extracts the ELF from your ISO |
| `scripts/progress.py` | Writes `decomp/PROGRESS.md` from `functions.csv` |
| `scripts/show.py` | Prints functions with their calls and strings, for naming work |
| `scripts/add_names.py` | Merges `address name` lines (or a `--fill` range) into `config/symbols.csv` |
| `decomp/xrefs.csv` | Call graph and string references of every function |
| `config/globals.csv` | Named global singletons (applied as labels by the export) |
| `scripts/extract_build.py` | Extracts BUILD.DAT via BUILD.TOC (UCL NRV2B decompression) into `extracted/` (git-ignored) |
| `scripts/text_table.py` | Decodes the in-game string tables (entry 0x1870 + language) for naming UI code |
| `ghidra_scripts/ExportDecomp.java` | The same export as a Ghidra GUI script |
| `WORK.md`, `AGENTS.md`, `workboard.toml` | The shared work board (below) |

## Setup (Windows)

```powershell
git clone https://github.com/ShawnDarr96/Kaido-Decomp-Racer
cd Kaido-Decomp-Racer
powershell -ExecutionPolicy Bypass -File scripts\setup_tools.ps1 -Iso "C:\path\to\Kaido Racer (Europe) (En,Fr,De,Es,It).iso"
tools\venv\Scripts\python -I scripts\ghidra_export.py
```

This installs, under `tools/` (git-ignored):

- [Ghidra 12.2](https://github.com/NationalSecurityAgency/ghidra/releases) with Temurin JDK 25
- [ghidra-emotionengine-reloaded](https://github.com/chaoticgd/ghidra-emotionengine-reloaded) (R5900 / EE processor, VU, MMIO labels)
- [GhidraMCP](https://github.com/bethington/ghidra-mcp), built from source for Ghidra 12.2, and its MCP bridge
- PyGhidra for headless runs

Two notes from setting this up:

- Ghidra's `.bat` launchers and Gradle fail on paths with spaces. Clone to a path without spaces.
- Ghidra keeps its settings (and its OSGi script cache) in `tools/ghidra_settings` via
  `-Dapplication.settingsdir` in `support/launch.properties`. Felix (the OSGi framework) refuses a cache
  directory whose canonical path differs from its given path, which happens behind a junction, a symlink or
  a virtualized `%APPDATA%` (for example when Ghidra is started from a packaged app).

## Splitting and rebuilding (matching setup)

[`splat/kaido.yaml`](splat/kaido.yaml) splits the executable into assembly and data with
[splat](https://github.com/ethteck/splat) (`pip install splat64[mips]`), using the names in
`config/symbols.csv` (regenerate `splat/symbol_addrs.txt` with `python -I scripts/gen_symbol_addrs.py`):

```bash
tools/splat-venv/Scripts/python -m splat split splat/kaido.yaml   # writes build/ (git-ignored)
python -I scripts/build.py --bindir <ps2dev>/ee/bin                # assemble, link, compare with SLES_531.91
```

`scripts/build.py` needs EE binutils (`mips64r5900el-ps2-elf-as/ld/objcopy` from the
[ps2dev](https://github.com/ps2dev/ps2dev/releases) toolchain). The byte-identical round trip has not been
verified yet (board row M2). Matching C additionally needs the original compiler, Metrowerks CodeWarrior
for PS2 2.4.1 (`MW MIPS C Compiler 2.4.1.01`), which is proprietary and not provided here (board row M1).

Layout found while splitting: `.text` 0x100000-0x308080, `.data` to 0x35e130, `.rodata` to 0x3685e0,
static-initializer code (`__sinit_*`) 0x3685e0-0x36db30, more data (vtables) to 0x36ef80, `.bss` to 0x46a600,
`$gp` = 0x3766f0.

## Working with Ghidra through MCP

1. Start Ghidra (`tools\ghidra_12.2_PUBLIC\ghidraRun.bat`), open `tools/ghidra_proj/KaidoRacer`.
2. In the project window: **File > Configure > Utility**, tick **GhidraMCPPlugin**. Check it:
   `curl http://127.0.0.1:8089/check_connection`.
3. The repo's [`.mcp.json`](.mcp.json) points Claude Code (and other MCP clients) at the bridge in
   `tools/mcp-venv`. Agents can then list, rename, retype and comment functions in the live project.

Names and types decided in Ghidra reach the repo by re-running the export (`scripts/ghidra_export.py`),
which rewrites `decomp/src` and `decomp/functions.csv` from the project.

## Collaborating

Work is split into rows on [`WORK.md`](WORK.md), managed with
[collaborative-ai-workboard](https://github.com/ed-slopper/collaborative-ai-workboard). People and AI agents
claim rows, work locally and land their batch in one push, so two people never work on the same file.

```bash
pip install git+https://github.com/ed-slopper/collaborative-ai-workboard
board status          # how far along each section is
board next            # rows you can start now
board claim N12 --who yourname/claude
# ... work, then:
board commit N12 -m "name and type the sceGs* wrappers"
board done N12
board land
```

Read [`AGENTS.md`](AGENTS.md) before you start. Ask for push access on the repository, or work from a fork
and open a pull request with your landed rows.

## Legal

This project is for preservation, study and modding. The repository does not include the disc image, the
executable or any game assets. Kaido Racer is © Genki / Konami.
