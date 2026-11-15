/* MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt.
 * Batch 13 - https://decomp.me/scratch/jwxlJ - objdiff 100% unless marked NONMATCHING.
 * Sema/Thread wrappers, PhysMaterial tables, Vec3/Vec4 helpers, PhysBody lists, car input clamps,
 * Garage counters, Demo key evaluation and tuning-screen states. */
typedef struct SemaParam { int count; int max_count; int init_count; int wait_threads; unsigned int attr; unsigned int option; } SemaParam;
int iReferSemaStatus(int id, SemaParam *p); int ReferSemaStatus(int id, SemaParam *p);
int iSignalSema(int id); int SignalSema(int id); int WaitSema(int id); int DeleteSema(int id); int CreateSema(SemaParam *p);
typedef struct Sema { int id; } Sema;
typedef struct Thread { int id; int f4; } Thread;
void ExitThread(void); int TerminateThread(int id); int _StartThread(int id, void *arg); int DeleteThread(int id);
extern float s_PhysMaterialVar1, s_PhysMaterialVar2, s_PhysMaterialVar3, s_PhysMaterialVar4, s_PhysMaterialVar5, s_PhysMaterialVar6, s_PhysMaterialVar7, s_PhysMaterialVar8;
extern float s_PhysMaterialVar9, s_PhysMaterialVar10, s_PhysMaterialVar11, s_PhysMaterialVar12, s_PhysMaterialVar13, s_PhysMaterialVar14, s_PhysMaterialVar15, s_PhysMaterialVar16;
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct Vec4 { float x, y, z, w; } Vec4;
typedef struct PhysShapeL { int f0; int flags; char pad8[0x44 - 8]; struct PhysShapeL *next; } PhysShapeL;
typedef struct PhysContactL { char pad0[0x44]; struct PhysContactL *next; } PhysContactL;
typedef struct PhysBodyL { char pad0[0xc4]; struct PhysBodyL *next; struct PhysBodyL *prev; char padcc[0xd4 - 0xcc]; void *list; } PhysBodyL;
typedef struct PhysWorldX { int w[16]; } PhysWorldX;
extern PhysWorldX D_0042F3C0;
PhysContactL *PhysWorld_AllocContact(PhysWorldX *w);
typedef struct CarCtl { char pad0[0x128]; float handbrake; char pad12c[0x130 - 0x12c]; float boost; float throttle; } CarCtl;
typedef struct GarageS { char pad0[0xd82c]; unsigned char slotState[30]; } GarageS;
typedef struct GarageCar { short model; short color; char pad4[200]; } GarageCar;
typedef struct DemoKey { unsigned char type; char pad1[3]; union { float value; void *keys; } u; } DemoKey;
typedef struct DemoKeyB { float value; void *keys; } DemoKeyB;
float Demo_InterpolateKeys(void *keys);
typedef struct ScrTune { char pad0[0xa0c]; int confirm; char pada10[0xa20 - 0xa10]; int next; int nextB; } ScrTune;

int Sema_GetCount(Sema *s, int intr) { SemaParam p; if (intr) iReferSemaStatus(s->id, &p); else ReferSemaStatus(s->id, &p); return p.count; }
/* NONMATCHING: the game tests id < 0 with slt $at + beqz/bnez (an assembler-macro shape); MWCC emits bgez/bltz. */
void Sema_Signal(Sema *s, int intr) { if (!(s->id < 0)) { if (intr) iSignalSema(s->id); else SignalSema(s->id); } }
/* NONMATCHING: the game tests id < 0 with slt $at + beqz/bnez (an assembler-macro shape); MWCC emits bgez/bltz. */
void Sema_Wait(Sema *s) { if (!(s->id < 0)) WaitSema(s->id); }
/* NONMATCHING: the game tests id < 0 with slt $at + beqz/bnez (an assembler-macro shape); MWCC emits bgez/bltz. */
void Sema_Delete(Sema *s) { if (s->id >= 0) DeleteSema(s->id); }
int Sema_Create(Sema *s, int init, int max) { SemaParam p; p.init_count = init; p.max_count = max; s->id = CreateSema(&p); return s->id > 0; }
/* NONMATCHING: same slt $at shape as the Sema wrappers. */
void Thread_Exit(Thread *t) { if (t->id >= 0) ExitThread(); }
/* NONMATCHING: same slt $at shape as the Sema wrappers. */
void Thread_Terminate(Thread *t) { if (t->id >= 0) TerminateThread(t->id); }
/* NONMATCHING: same slt $at shape as the Sema wrappers. */
void Thread_Start(Thread *t, void *arg) { if (t->id >= 0) _StartThread(t->id, arg); }
/* NONMATCHING: same slt $at shape as the Sema wrappers. */
void Thread_Delete(Thread *t) { if (t->id >= 0) { DeleteThread(t->id); t->id = 0; t->f4 = 0; } }
void PhysMaterial_SetFriction(int m, float v) { if (m & 0x7000000) s_PhysMaterialVar2 = v; if (m & 0x1000000) s_PhysMaterialVar6 = v; if (m & 0x2000000) s_PhysMaterialVar10 = v; if (m & 0x4000000) s_PhysMaterialVar14 = v; }
void PhysMaterial_SetRestitution(int m, float v) { if (m & 0x7000000) s_PhysMaterialVar1 = v; if (m & 0x1000000) s_PhysMaterialVar5 = v; if (m & 0x2000000) s_PhysMaterialVar9 = v; if (m & 0x4000000) s_PhysMaterialVar13 = v; }
void PhysMaterial_SetSoftness(int m, float v) { if (m & 0x7000000) s_PhysMaterialVar4 = v; if (m & 0x1000000) s_PhysMaterialVar8 = v; if (m & 0x2000000) s_PhysMaterialVar12 = v; if (m & 0x4000000) s_PhysMaterialVar16 = v; }
void PhysMaterial_SetDamping(int m, float v) { if (m & 0x7000000) s_PhysMaterialVar3 = v; if (m & 0x1000000) s_PhysMaterialVar7 = v; if (m & 0x2000000) s_PhysMaterialVar11 = v; if (m & 0x4000000) s_PhysMaterialVar15 = v; }
float PhysMaterial_GetFriction(int m) { if (m & 0x1000000) return s_PhysMaterialVar8; if (m & 0x2000000) return s_PhysMaterialVar12; if (m & 0x4000000) return s_PhysMaterialVar16; return s_PhysMaterialVar4; }
float PhysMaterial_GetRestitution(int m) { if (m & 0x1000000) return s_PhysMaterialVar7; if (m & 0x2000000) return s_PhysMaterialVar11; if (m & 0x4000000) return s_PhysMaterialVar15; return s_PhysMaterialVar3; }
float PhysMaterial_GetSoftness(int m) { if (m & 0x1000000) return s_PhysMaterialVar6; if (m & 0x2000000) return s_PhysMaterialVar10; if (m & 0x4000000) return s_PhysMaterialVar14; return s_PhysMaterialVar4; }
float PhysMaterial_GetDamping(int m) { if (m & 0x1000000) return s_PhysMaterialVar5; if (m & 0x2000000) return s_PhysMaterialVar9; if (m & 0x4000000) return s_PhysMaterialVar13; return s_PhysMaterialVar1; }
PhysShapeL *PhysBody_FindShapeWithFlags(PhysBodyL *b, int m) { PhysShapeL *s; for (s = b->list; s != 0; s = s->next) { if (s->flags & m) break; } return s; }
PhysContactL *PhysBody_AddContact(PhysBodyL *b) { PhysContactL *c = PhysWorld_AllocContact(&D_0042F3C0); if (c == 0) return 0; c->next = b->list; b->list = c; return c; }
void PhysBody_Unlink(PhysBodyL *b, PhysBodyL **head) { if (b->prev) b->prev->next = b->next; else *head = b->next; if (b->next) b->next->prev = b->prev; }
/* NONMATCHING: load/register order. */
void Quat_Mul(Vec4 *out, Vec4 *a, Vec4 *b) { float x = a->x + b->x, y = a->y + b->y, z = a->z + b->z, w = a->w + b->w; out->x = x; out->y = y; out->z = z; out->w = w; }
void Vec3_AddInPlaceB(Vec3 *a, Vec3 *b) { a->x += b->x; a->y += b->y; a->z += b->z; }
/* NONMATCHING: float registers only. */
void Vec4_Sub(Vec4 *out, Vec4 *a, Vec4 *b) { float x = a->x - b->x, y = a->y - b->y, z = a->z - b->z, w = a->w; out->x = x; out->y = y; out->z = z; out->w = w; }
void Vec3_SubInPlace(Vec3 *a, Vec3 *b) { a->x -= b->x; a->y -= b->y; a->z -= b->z; }
void Vec3_AddInPlace(Vec3 *a, Vec3 *b) { a->x += b->x; a->y += b->y; a->z += b->z; }
/* NONMATCHING: float registers only. */
void Vec3_Sub(Vec3 *out, Vec3 *a, Vec3 *b) { float x = a->x - b->x, y = a->y - b->y, z = a->z - b->z; out->x = x; out->y = y; out->z = z; }
/* NONMATCHING: float registers only. */
void Vec3_Add(Vec3 *out, Vec3 *a, Vec3 *b) { float x = a->x + b->x, y = a->y + b->y, z = a->z + b->z; out->x = x; out->y = y; out->z = z; }
/* NONMATCHING: the upper clamp is bc1tl with the move in the delay slot; MWCC gives bc1f. */
void maybe_Car_SetHandbrakeDirect(CarCtl *c, float v) { if (v < 0.0f) v = 0.0f; else if (1.0f < v) v = 1.0f; c->handbrake = v; }
/* NONMATCHING: the upper clamp is bc1tl with the move in the delay slot; MWCC gives bc1f. */
void maybe_Car_SetThrottleDirect(CarCtl *c, float v) { if (v < 0.0f) v = 0.0f; else if (1.0f < v) v = 1.0f; c->throttle = v; }
/* NONMATCHING: the upper clamp is bc1tl with the move in the delay slot; MWCC gives bc1f. */
void maybe_Car_SetBoostDirect(CarCtl *c, float v) { if (v < 0.0f) v = 0.0f; else if (1.0f < v) v = 1.0f; c->boost = v; }
int Garage_FindFreeSlot(GarageS *g) { int n = 0; int i; for (i = 0; i < 30; i++) { if (g->slotState[i] == 2) n++; } return n; }
int Garage_FindCar(GarageCar *c) { int n = 0; int i; for (i = 0; i < 25; i++, c++) { if (c->model != -1) n++; } return n; }
float Demo_EvalKeyB(DemoKey *k) { if (k->type == 0) return k->u.value; if (k->type == 1) return Demo_InterpolateKeys(k->u.keys); return 0.0f; }
/* NONMATCHING: the null check puts the call argument copy in a bnezl delay slot. */
float Demo_EvalKeyC(DemoKeyB *k) { float v; if (k->keys) v = Demo_InterpolateKeys(k->keys); else v = k->value; return 10.0f * v; }
/* NONMATCHING: the null check puts the call argument copy in a bnezl delay slot. */
float Demo_EvalKeyD(DemoKeyB *k) { if (k->keys) return Demo_InterpolateKeys(k->keys); return k->value; }
void maybe_ScrTuneParts_State14(ScrTune *s) { int f = s->confirm != 0; s->confirm = 0; if (f == 1) { s->next = 5; s->nextB = 5; } }
void maybe_ScrTuneParts_State13(ScrTune *s) { int f = s->confirm != 0; s->confirm = 0; if (f == 1) { s->next = 3; s->nextB = 3; } }
void maybe_ScrTuneParts_State12(ScrTune *s) { int f = s->confirm != 0; s->confirm = 0; if (f == 1) { s->next = 3; s->nextB = 3; } }
