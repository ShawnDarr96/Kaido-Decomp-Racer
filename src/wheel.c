/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * https://decomp.me/scratch/zLgfx - all at objdiff 100% unless marked NONMATCHING. */
typedef struct Wheel { char pad0[0x47c]; int f47c; int flags480; int axisMap; int buttonMap; char pad48c[0x588 - 0x48c]; int state; } Wheel;
typedef struct EngVT { void *fn[4]; } EngVT;
typedef struct EngObj { int f0; EngVT *vt; } EngObj;
extern int D_0030A870[], D_0030A830[];  /* default button / axis maps */

void Wheel_SetButtonMap(Wheel *w, int *map) { if (map) w->buttonMap = (int)map; else w->buttonMap = (int)D_0030A870; }
void Wheel_SetAxisMap(Wheel *w, int *map) { if (map) w->axisMap = (int)map; else w->axisMap = (int)D_0030A830; }
int Wheel_IsActive(Wheel *w) { return w->state != 7; }
int Wheel_ConsumeDisconnect(Wheel *w) { if (w->state == 7) { w->state = 0; return 1; } return 0; }
int Engine_GetField_47c(Wheel *w) { return w->f47c; }
/* NONMATCHING (64%): the game loads the vtable then calls through t9, which looks like a C++ virtual call; this C form calls through v0. */
void maybe_EngineObj_SetBitB(EngObj *o, int bit) { EngVT *vt = o->vt; ((void (*)(EngObj *, int))vt->fn[3])(o, 1 << bit); }
int EngineObj_HasFlags(Wheel *w, int m) { return (m & w->flags480) == m; }
