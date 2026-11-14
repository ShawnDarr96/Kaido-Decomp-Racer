"""Rebuild SLES_531.91 from the splat output and check it is byte-identical.

    tools/splat-venv/Scripts/python -m splat split splat/kaido.yaml
    python -I scripts/build.py [--prefix mips64r5900el-ps2-elf-]

Needs GNU binutils for the EE on PATH (the ps2dev toolchain provides mips64r5900el-ps2-elf-as/ld/objcopy;
mips-linux-gnu- binutils also work). Pass --bindir to point at them explicitly.
"""
import argparse
import hashlib
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
BUILD = ROOT / "build"
TARGET = ROOT / "iso_extract" / "SLES_531.91"


def run(cmd):
    r = subprocess.run([str(c) for c in cmd], cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        sys.exit(f"failed: {' '.join(map(str, cmd))}\n{r.stdout}{r.stderr}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--prefix", default="mips64r5900el-ps2-elf-")
    ap.add_argument("--bindir", default="")
    a = ap.parse_args()
    tool = lambda t: str(Path(a.bindir) / f"{a.prefix}{t}") if a.bindir else f"{a.prefix}{t}"

    asm = sorted((BUILD / "asm").rglob("*.s"))
    for s in asm:
        run([tool("as"), "-EL", "-march=r5900", "-mabi=eabi", "-G0", "-no-pad-sections",
             "-I", ROOT / "include", "-o", f"{s}.o", s])
    for b in sorted((BUILD / "assets").glob("*.bin")):
        run([tool("objcopy"), "-I", "binary", "-O", "elf32-littlemips", b, f"{b}.o"])
    elf = BUILD / "SLES_531.91.elf"
    run([tool("ld"), "-T", BUILD / "SLES_531.91.ld", "-T", BUILD / "undefined_syms_auto.txt",
         "-T", BUILD / "undefined_funcs_auto.txt", "--no-check-sections", "-o", elf])
    out = BUILD / "SLES_531.91.bin"
    run([tool("objcopy"), "-O", "binary", elf, out])

    want, got = TARGET.read_bytes(), out.read_bytes()
    print(f"assembled {len(asm)} files; output {len(got):#x} bytes, target {len(want):#x} bytes")
    if got == want:
        print("OK: byte-identical, sha1", hashlib.sha1(got).hexdigest())
        return 0
    n = min(len(got), len(want))
    first = next((i for i in range(n) if got[i] != want[i]), n)
    print(f"MISMATCH: first difference at file offset {first:#x} (vram {first - 0x80 + 0x100000:#x})")
    return 1


if __name__ == "__main__":
    sys.exit(main())
