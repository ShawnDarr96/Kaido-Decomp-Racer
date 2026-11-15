/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * Batch 11 - https://decomp.me/scratch/K6LSo - all at objdiff 100% unless marked NONMATCHING.
 * Small functions from RingBuf, Phys, Save, GameState, RaceTbl, Render, Snd, CarRec, LapTime, Menu,
 * Composer, Input and Vec3; grouped here until the translation units are split (board row M3). */
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct RingBuf { int span0; int span1; int span2; int count; char pad10[4]; char data[0x3c - 0x14]; int used; } RingBuf;
typedef void (*PhysFn)(void);
typedef struct PhysCb { PhysFn fn; int pad[2]; } PhysCb; extern PhysCb D_0042F3C4;
extern int s_PhysParamA, s_PhysParamB;
extern int D_0030ACB0[], D_0030AC80[];
typedef struct PhysPairRef { int f0; int a; int b; } PhysPairRef;
typedef struct PhysBodyS { unsigned char asleep; char pad1[0x30 - 1]; float timer; } PhysBodyS;
typedef struct PhysBodyV { char pad0[0x20]; float pos[4]; char pad30[0xa0 - 0x30]; float linVel[4]; } PhysBodyV;
void Mc_Shutdown(void); void Mc_Init(int a, int n);
extern int s_SaveVar1, g_SaveSlots;
typedef struct SaveSlot { char pad0[0x3c]; signed char state; signed char subState; char pad3e[0x5c - 0x3e]; int buffer; char pad60[4]; int userData; char pad68[4]; int *files; char pad70[0x78 - 0x70]; int f78; char pad7c[4]; int f80; } SaveSlot;
typedef struct Ghost { int value; int dirty; } Ghost;
typedef struct GameStateS { char pad0[0x14]; float f14; float f18[10]; char pad40[4]; int f44; char pad48[0x394 - 0x48]; int f394; char pad398[0x3c4 - 0x398]; Vec3 v3c4; char pad3d0[0x3acc - 0x3d0]; Ghost *replay; Ghost *ghost; } GameStateS;
extern GameStateS *g_GameState;
typedef struct RaceResult { int f0; int f4; signed char f8; signed char f9; char pada[2]; int fc; int f10; } RaceResult;
extern char *g_RaceTbl;
void Mem_Free(void *p);
typedef struct RenderObj { int f0; int f4; int f8[6]; int f20[4]; } RenderObj;
typedef struct SndCh { char pad0[0x10]; int midiPort; } SndCh;
typedef struct SndMgr { int slot[6]; int ch[16]; } SndMgr;
extern SndMgr *g_SndMgr;
typedef struct CarRecX { short model; short color; int f4; int f8; int fc; int f10; char name[0x50 - 0x14]; short colors[16]; int parts[8]; } CarRecX;
typedef struct LapTime { int f0; int f4; int f8; int fc; int f10; int f14; int f18; char pad1c[0x4b0 - 0x1c]; int total; int pad4b4; int best; } LapTime;
typedef struct MenuW { int f0; int f4; int f8; int fc; int f10; int f14; int f18; } MenuW;
void Menu_HandleCursor(void *m, int a, int b, int c, int d, int e);
typedef struct ComposerScene { int f0; int state; int prev; int req; int page; int f14; int mode; } ComposerScene;
extern ComposerScene *g_ComposerScene;
extern int s_Nameentry_Nop_3_1, s_Nameentry_Nop_4_1;
void Mem_Set16(void *dst, int value, int size);
typedef struct Input { int f0; int f4; int f8; int fc; int f10; int f14; int latched; int latch[32]; int analog[32]; } Input;
typedef struct PhysLocal { char pad0[0x20]; float local[4]; } PhysLocal;
typedef struct PhysShapeS { int f0; PhysLocal *a; PhysLocal *b; char padc[0x14 - 0xc]; float type; } PhysShapeS;

void Input_Clear(Input *in) { in->f4 = 0; in->f8 = 0; in->fc = 0; in->f10 = 0; in->f14 = 0; in->latched = 0; Mem_Set16(in->latch, 0, 32); }
void Input_LatchButton(Input *in, int b) { in->latched |= 1 << b; in->latch[b] = in->analog[b]; }
int Input_GetAnalog(Input *in, int i) { return in->analog[i]; }
void Movie_ShutdownNop(void) { }
void RingBuf_Consume(RingBuf *rb, int n) { n = n < rb->count ? n : rb->count; rb->count -= n; }
void RingBuf_GetSpans(RingBuf *rb, int *a, int *b, int *c, int *d) { *a = rb->span0; *b = rb->span1; *c = rb->span2; *d = rb->count; }
char *RingBuf_GetFree(RingBuf *rb) { return (unsigned)rb->used >= 40 ? rb->data : 0; }
void PhysShape_CallVirtual(void) { D_0042F3C4.fn(); }
void Phys_SetCallback(PhysFn f) { D_0042F3C4.fn = f; }
void Phys_SetParamA(int v) { s_PhysParamA = v; }
void Phys_SetParamB(int v) { s_PhysParamB = v; }
int PhysContact_GetBodyB(PhysPairRef *p) { return p->b; }
int PhysContact_GetBodyA(PhysPairRef *p) { return p->a; }
int PhysShape_GetBody(PhysPairRef *p) { return p->b; }
int PhysShape_GetOwner(PhysPairRef *p) { return p->a; }
float PhysShape_GetType(PhysShapeS *s) { return s->type; }
float *PhysShape_GetLocalA(PhysShapeS *s) { return s->a->local; }
float *PhysShape_GetLocalB(PhysShapeS *s) { return s->b->local; }
int PhysBox_GetEdgeIndexA(int i) { return D_0030ACB0[i]; }
int PhysBox_GetEdgeIndexB(int i) { return D_0030AC80[i]; }
int maybe_Phys_GetTableA(void *self, int i) { return D_0030ACB0[i]; }
int maybe_Phys_GetTableB(void *self, int i) { return D_0030AC80[i]; }
/* NONMATCHING (97%): only the float registers differ (the game puts x/y/z in f0/f1/f2). */
void Vec3_ScaleCopy(Vec3 *out, Vec3 *in, float s) { float x = in->x, y = in->y, z = in->z; out->x = x * s; out->y = y * s; out->z = z * s; }
/* NONMATCHING (97%): same register difference as Vec3_ScaleCopy. */
void Vec3_Scale(Vec3 *out, Vec3 *in, float s) { float x = in->x, y = in->y, z = in->z; out->x = x * s; out->y = y * s; out->z = z * s; }
float Vec3_Dot(Vec3 *a, Vec3 *b) { return a->x * b->x + a->y * b->y + a->z * b->z; }
float PhysBody_GetSleepTimer(PhysBodyS *b) { return b->asleep ? 0.0f : b->timer; }
void PhysBody_SetSleepTimer(PhysBodyS *b, float *t) { b->timer = *t; }
float *PhysBody_GetLinearVelocity(PhysBodyV *b) { return b->linVel; }
float *PhysBody_GetPositionPtr(PhysBodyV *b) { return b->pos; }
void Save_Shutdown(void) { Mc_Shutdown(); s_SaveVar1 = 0; g_SaveSlots = 0; }
void Save_Init(int a) { s_SaveVar1 = a; g_SaveSlots = 0; Mc_Init(a, 20); }
void SaveSlot_SetUserData(SaveSlot *s, int v) { s->userData = v; }
int SaveSlot_GetBuffer(SaveSlot *s) { return s->buffer; }
int SaveSlot_GetFileList(SaveSlot *s, int *a, int *b) { *a = s->f80; *b = s->files[1]; return s->f78; }
int SaveSlot_GetSubState(SaveSlot *s) { return s->subState; }
int SaveSlot_GetState(SaveSlot *s) { return s->state; }
void GameState_GetVec3c4(Vec3 *out) { *out = g_GameState->v3c4; }
int GameState_GetReplayValue(void) { return g_GameState->replay->value; }
int GameState_GetGhostValue(void) { return g_GameState->ghost->value; }
int GameState_Get_44(void) { return g_GameState->f44; }
float GameState_GetArray_18(int i) { return g_GameState->f18[i]; }
float GameState_Get_14(void) { return g_GameState->f14; }
void GameState_MarkGhostDirty(void) { Ghost *g = g_GameState->ghost; if (g != 0) g->dirty = 1; }
void RaceResult_Clear(RaceResult *r) { r->f0 = -1; r->f4 = -1; r->f8 = 0; r->f9 = 2; r->fc = 0; r->f10 = 0; }
void GameState_Set_394(int v) { g_GameState->f394 = v; }
int GameState_Get_394(void) { return g_GameState->f394; }
char *RaceTbl_Ptr_5fa0(void) { return g_RaceTbl + 0x5fa0; }
char *maybe_RaceTbl_GetCount(void) { return g_RaceTbl; }
char *maybe_RaceTbl_GetCapacity(void) { return g_RaceTbl; }
void RaceTbl_Free(void) { if (g_RaceTbl != 0) Mem_Free(g_RaceTbl); }
int Render_Nop_3(void) { return 1; }
int Render_Nop_4(void) { return 1; }
int Render_Nop_5(void) { return 1; }
int Render_Nop_6(void) { return 1; }
int Render_Nop_7(void) { return 1; }
int *Render_FieldPtr_20(RenderObj *r) { return r->f20; }
int *Render_FieldPtr_8(RenderObj *r) { return r->f8; }
void SndCh_SetMidiPort(SndCh *c, int p) { c->midiPort = p; }
int SndMgr_GetChannel(SndMgr *m, int i) { return m->ch[i]; }
int SndMgr_GetChannelB(SndMgr *m, int i) { return m->ch[i]; }
int SndMgr_GetSlot(SndMgr *m, int i) { return m->slot[i]; }
SndMgr *SndMgr_GetInstance(void) { return g_SndMgr; }
char *CarRec_GetName(CarRecX *r) { return r->name; }
short *CarRec_GetColorSlot(CarRecX *r, int i) { return &r->colors[i]; }
int *CarRec_GetPartSlotB(CarRecX *r, unsigned char i) { return &r->parts[i]; }
void CarRec_ResetColors(CarRecX *r) { r->model = -1; r->color = 0; r->f4 = 1; r->f8 = 0; r->fc = 0; r->f10 = 0; }
int LapTime_GetBest(LapTime *t) { return t->best; }
int LapTime_GetTotal(LapTime *t) { return t->total; }
void LapTime_Clear(LapTime *t) { t->f0 = -1; t->f8 = 0; t->fc = 0; t->f10 = 0; t->f14 = 0; t->f18 = 0; t->f4 = -1; }
void LapTime_Reset(LapTime *t) { t->f4 = 0; t->f0 = 0; }
int Menu_GetField_14(MenuW *m) { return m->f14; }
int Menu_GetField_10(MenuW *m) { return m->f10; }
void Menu_SetField_18(MenuW *m, int v) { m->f18 = v; }
void Menu_SetField_8(MenuW *m, int v) { m->f8 = v; }
void maybe_ScrRivalList_State8(void) { }
void maybe_ScrRivalList_State7(void) { }
void maybe_ScrRivalList_State6(void *m) { Menu_HandleCursor(m, 0, 2, 1, 1, 0); }
void maybe_ScrRivalList_State5(void *m) { Menu_HandleCursor(m, 0, 2, 1, 1, 0); }
int ComposerScene_GetMode(void) { return g_ComposerScene->mode; }
void ComposerScene_SetMode(int m) { g_ComposerScene->mode = m; }
int Nameentry_Nop_3(void) { return s_Nameentry_Nop_3_1; }
int Nameentry_Nop_4(void) { return s_Nameentry_Nop_4_1; }
