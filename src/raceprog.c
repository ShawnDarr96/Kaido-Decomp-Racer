/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * https://decomp.me/scratch/zLgfx - all at objdiff 100% unless marked NONMATCHING. */
typedef struct RaceProg { int header; int flags; signed char phase; char pad9[3]; int unkC; char pad10[0x1c - 0x10]; int arr1c[3]; int arr28[3]; int arr34[3]; int arr40[3]; } RaceProg;
extern RaceProg *g_RaceProg;

int RaceProg_GetHeader(void) { return g_RaceProg->header; }
int RaceProg_Get_c(void) { return g_RaceProg->unkC; }
void RaceProg_Set_8(int v) { g_RaceProg->phase = (signed char)v; }
int RaceProg_GetPhase(void) { RaceProg *p = g_RaceProg; return p == 0 ? 3 : p->phase; }
int RaceProg_IsFinished(void) { if (g_RaceProg != 0 && (g_RaceProg->flags & 2)) return 1; return 0; }
int RaceProg_GetArray_1c(int i) { return g_RaceProg->arr1c[(signed char)i]; }
int RaceProg_GetArray_40(int i) { return g_RaceProg->arr40[(signed char)i]; }
int RaceProg_GetArray_34(int i) { return g_RaceProg->arr34[(signed char)i]; }
int RaceProg_GetArray_28(int i) { return g_RaceProg->arr28[(signed char)i]; }
RaceProg *RaceProg_GetInstance(void) { return g_RaceProg; }
int RaceProg_Get_4(void) { return g_RaceProg->flags; }
void Flags_Set(int *f, int m) { *f |= m; }
