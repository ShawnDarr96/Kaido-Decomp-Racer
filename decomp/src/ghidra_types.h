/* Type names used by Ghidra's decompiler output, so the exported C reads (and mostly parses)
 * as ordinary C. Target: PS2 Emotion Engine (MIPS R5900, little endian, 32-bit pointers,
 * 64/128-bit GPRs). */
#ifndef GHIDRA_TYPES_H
#define GHIDRA_TYPES_H

typedef unsigned char      undefined;
typedef unsigned char      undefined1;
typedef unsigned short     undefined2;
typedef unsigned int       undefined3;
typedef unsigned int       undefined4;
typedef unsigned long long undefined5;
typedef unsigned long long undefined6;
typedef unsigned long long undefined7;
typedef unsigned long long undefined8;
typedef struct { unsigned long long lo, hi; } undefined16;

typedef unsigned char      byte;
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned int       uint;
typedef unsigned long      ulong;
typedef long long          longlong;
typedef unsigned long long ulonglong;
typedef unsigned short     word;
typedef unsigned int       dword;
typedef unsigned long long qword;
typedef int                bool_t;
typedef unsigned int       uint3;
typedef unsigned long long uint5, uint6, uint7;
typedef long long          int5, int6, int7;
typedef float              float4;
typedef double             float8;
typedef void              *pointer;
typedef void               code;

#define CONCAT11(a, b)  ((unsigned short)(((unsigned short)(a) << 8) | (unsigned char)(b)))
#define CONCAT22(a, b)  ((unsigned int)(((unsigned int)(a) << 16) | (unsigned short)(b)))
#define CONCAT44(a, b)  ((unsigned long long)(((unsigned long long)(a) << 32) | (unsigned int)(b)))
#define SUB41(x, n)     ((unsigned char)((x) >> ((n) * 8)))
#define SUB42(x, n)     ((unsigned short)((x) >> ((n) * 8)))
#define SUB84(x, n)     ((unsigned int)((x) >> ((n) * 8)))

#endif
