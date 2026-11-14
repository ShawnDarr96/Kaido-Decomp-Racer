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
| Functions named and typed | in progress, tracked in [`WORK.md`](WORK.md) |
| Matching (byte-identical) source | not started, see the P3 rows in [`WORK.md`](WORK.md) |

The executable is stripped (no symbol table), so every function starts as `FUN_xxxxxxxx`. The work now is
naming functions, recovering structs and splitting the code into its original source files. The Sony SDK
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
