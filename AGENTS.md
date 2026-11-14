# AGENTS.md: how to work on the Kaido Racer decomp

The work is listed in [`WORK.md`](WORK.md). People and AI agents share it. Change the board only with the
`board` command ([collaborative-ai-workboard](https://github.com/ed-slopper/collaborative-ai-workboard)): it
keeps the table valid and makes sure two workers never get the same row.

## The loop

1. **Look.** `board status`, then `board next` for rows that can be started now.
2. **Claim.** `board claim N12 N13 --who <person>/<agent>`. Take as many rows as you will finish this session.
   The claim is pushed at once, on its own, so everyone sees it. Your work is not pushed yet.
3. **Work locally.** One row at a time. Commit each row's work with `board commit N12 -m "what changed"`
   (or any commit whose message starts with `N12:`).
4. **Mark it finished.** `board done N12`. Add `--gap "what is still missing"` for each gap you found: it
   becomes a new row when you land. Add `--summary "..."` to say what was actually done.
5. **Land.** When the batch is finished, `board land`. It rebases your commits onto the newest main, moves
   every finished row to Done with its real commit hash, and pushes everything in one go.

## Rules

- Take rows in board order: the first ready rows in the earliest section.
- Never take a row whose Area is `humans`. Ask the person and record their answer.
- A claim is a promise for this session. If you stop early, `board release N12 --note "done: ..., left: ..."`.
- Keep a batch small enough to land the same day. Rows you hold are rows nobody else can take.
- If `board land` reports a conflict, fix it, `git rebase --continue`, and run `board land` again.
- Do not edit the Done table or reuse an ID.
- Never commit game data: the ISO, `SLES_531.91`, `BUILD.DAT`, extracted assets. `.gitignore` covers the
  usual paths; check `git status` before you commit.

## Where names live

`config/symbols.csv` is the shared source of truth for names, signatures and comments, one row per
function, sorted by address:

```
address,name,signature,source,comment
0x00123450,sceGsSyncPath,"int sceGsSyncPath(int mode, unsigned short timeout)",sdk,
```

You can edit it by hand, or name things in Ghidra (directly or through GhidraMCP) and run
`tools\venv\Scripts\python -I scripts\ghidra_export.py`. The export first applies `symbols.csv` to your
Ghidra project, then writes every non-default name in the project back into `symbols.csv`, and finally
regenerates `decomp/src/*.c` and `decomp/functions.csv`. Then run `python -I scripts/progress.py`.
Commit `config/symbols.csv` together with the regenerated files.

Close the Ghidra GUI before running the export (Ghidra locks the project).

## Naming conventions

- Sony SDK functions keep their SDK names (`sceGsSyncPath`, `sceCdRead`, `sceMcOpen`, ...). Use the SDK 2.8.0
  headers' prototypes as the signature.
- Metrowerks runtime and libc keep their standard names (`memcpy`, `__div64`, ...).
- Game code: `Module_Verb[Object]` in PascalCase, with a short module prefix agreed on the board
  (for example `Car_UpdateEngine`, `Menu_DrawCursor`). Unsure about a name? Prefix with `maybe_` rather
  than guessing silently.
- Globals: `g_` prefix; file-static data: `s_`.
- Don't rename a function someone else named without a reason in the commit message.

## What "done" means here

- **N rows (naming):** every function in the row's file has a real name (no `FUN_`), each name is backed
  by something you can point to (a string, a call into a known SDK function, a caller's use), and the
  export runs cleanly. Report what you could not name as a gap.
- **T rows (types):** the struct is defined in Ghidra's data type manager and in `decomp/include/`, and
  the functions that use it decompile with field names instead of offsets.
- **M rows (matching):** the function compiles with the original compiler (MWCC PS2 2.4.1) to the same
  bytes as the retail executable. No fakematches.
