/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * Batch 10 - https://decomp.me/scratch/Drv7c - all at objdiff 100% unless marked NONMATCHING.
 * Small accessors from several modules (Phys, Snd, Profile garage, RaceProg, SpGauge, Msg ids,
 * GameDb tables, Script, ComposerInput/Scene, Course, RaceCar); they are grouped here until the
 * translation units are split (board row M3). */
extern int D_003625E0[], D_0042F440[], D_0036E0A0[];
typedef struct ListNode { void *vt; int payload; } ListNode;
void SndStream_dtor(void *p); void SndCh_FadeOut(void *p); void SndCh_FadeIn(void *p); void SndCh_dtor(void *p);
int Loading_IsActive(void);
typedef struct SndCh { char pad0[0xc]; int handleC; char pad10[0x54 - 0x10]; int handle54; } SndCh;
typedef struct GarageCar { short model; short color; char pad4[200]; } GarageCar;
typedef struct Garage { GarageCar cars[25]; short current; } Garage;
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct GarageInfo { int f0; Vec3 time; signed char size; char pad11[3]; int used; int max; } GarageInfo;
typedef struct Split { int time; int pad[6]; } Split;
typedef struct RaceProgData { char pad0[0x100]; Split splits[8]; } RaceProgData;
typedef struct RaceProg { int header; int flags; signed char phase; char pad9[3]; int unkC; int f10; } RaceProg;
extern RaceProg *g_RaceProg;
typedef struct SpGauge { char pad0[0x8a0]; int value; int drain; int max; } SpGauge;
typedef struct TeamInfo { int f0; int f4; int f8; int nameId; int pad[6]; } TeamInfo;
void TeamDb_Copy(TeamInfo *out, int team);
int Msg_FormatRivalName(int x); void *RivalDb_Get(int id); int RivalRec_GetType(void *r);
typedef struct Rec12 { int w[3]; } Rec12;
typedef struct Rec80 { int w[20]; } Rec80;
typedef struct Rec68 { int w[17]; } Rec68;
typedef struct Rec380 { int w[95]; } Rec380;
typedef struct GameDb { char pad0[0x240]; Rec380 *rivals; Rec68 *teams; TeamInfo *teamInfo; Rec80 *rivalCars; Rec12 *encounters; } GameDb;
extern GameDb *g_GameDb;
typedef struct ScriptElem { char pad0[0x1d5]; signed char f1d5; char f1d6[0xda8 - 0x1d6]; } ScriptElem;
typedef struct Script { ScriptElem elem[10]; char padX[0x89f0 - 10 * 0xda8]; short f89f0; short f89f2; short f89f4; char f89f6[2]; } Script;
typedef struct ComposerInput { int f0; int f4; int f8; int mode; int f10; int lock; int pressed; int held; int repeat; } ComposerInput;
extern ComposerInput *s_ComposerInputVar1;
void Mem_Free(void *p);
void PhysSphere_Setup(void *s, Vec3 *v);
typedef struct Vec4 { float x, y, z, w; } Vec4;
typedef struct Plane { float w[8]; } Plane;
typedef struct PhysShape { char pad0[0x60]; Vec4 axes; Vec4 halfExt; int param[4]; Vec4 f90[8]; Plane planes[8]; } PhysShape;
typedef struct RefObj { char pad0[0x10]; int ref; int ref14; char pad18[0x24 - 0x18]; struct RefObj *parent; } RefObj;
typedef struct CourseHdr { int f0; int f4; int f8; int fc; int f10; int f14; int f18; int f1c; int f20; int f24; } CourseHdr;
typedef struct RaceCarS { char pad0[0x40]; float speed; char pad44[0x7f8 - 0x44]; float rpm; char pad7fc[0x1798 - 0x7fc]; float lapTime; int lap; float dist; } RaceCarS;
typedef struct ComposerScene { int f0; int state; int prev; int req; int page; } ComposerScene;
extern ComposerScene *g_ComposerScene;

ListNode *ListNode_ctor(ListNode *n, int payload) { n->vt = D_0036E0A0; n->payload = payload; return n; }
Vec4 *PhysBox_GetHalfExtents(PhysShape *b) { return &b->halfExt; }
Vec4 *PhysBox_GetAxes(PhysShape *b) { return &b->axes; }
int PhysBody_GetParam(PhysShape *b, int i) { return b->param[i]; }
void PhysBody_SetParam(PhysShape *b, int i, int v) { b->param[i] = v; }
int Phys_Nop_4(void) { return 12; }
Plane *PhysBox_GetPlane(PhysShape *b, int i) { return &b->planes[i]; }
int Phys_Nop_5(void) { return 6; }
Vec4 *Phys_ElemPtr_90_x10(PhysShape *b, int i) { return &b->f90[i]; }
int Phys_Nop_6(void) { return 8; }
int Phys_Nop_7(void) { return 0; }
void Phys_Nop_8(void) { }
int Phys_Nop_9(void) { return 0; }
int Phys_Nop_10(void) { return 0; }
int Phys_Nop_11(void) { return 0; }
int *maybe_Phys_GetDefaultA(void) { return D_003625E0; }
int *Phys_Nop_12(void) { return D_0042F440; }
int *maybe_Phys_GetDefaultB(void) { return D_003625E0; }
int Phys_Nop_13(void) { return 0; }
int Phys_Nop_14(void) { return 0; }
int Phys_Nop_15(void) { return 0; }
void PhysSphere_SetRadius(void *s, float r) { Vec3 v; v.x = r; v.y = r; v.z = r; PhysSphere_Setup(s, &v); }
unsigned int Snd_VolumeToMidi(unsigned int v) { return (v * 0x3fff) / 15; }
void SndStream_dtorThunk(char *p) { SndStream_dtor(p - 56); }
void SndCh_FadeOutThunk(char *p) { SndCh_FadeOut(p - 56); }
void SndCh_FadeInThunk(char *p) { SndCh_FadeIn(p - 56); }
void SndCh_dtorThunk(char *p) { SndCh_dtor(p - 56); }
int maybe_SndCh_GetHandleIfReady(SndCh *c) { return Loading_IsActive() ? c->handle54 : c->handleC; }
void maybe_Obj_AddRef(RefObj *o) { if (o->parent) o->parent->ref14++; o->ref++; }
void Course_ClearCount(CourseHdr *c) { c->f1c = 0; }
void Course_SetField18(CourseHdr *c, int a, int b) { c->f18 = a; c->f1c = 0; c->f20 = (b & 0x0fffffff) | 0x20000000; }
void maybe_Course_InitHeader(CourseHdr *c, int a, int b) { c->f0 = a; c->f4 = b; c->f8 = 0; c->fc = -1; c->f10 = 0; c->f14 = 0; c->f18 = 0; c->f1c = 0; c->f20 = 0; c->f24 = 0; }
int Profile_GetCurrentCarIndex(Garage *g) { return g->current; }
int Profile_GetCurrentCarModel(Garage *g) { return g->cars[g->current].model; }
int Profile_SetCurrentCarColor(Garage *g, short c) { GarageCar *car = &g->cars[g->current]; car->color = c; return 1; }
void Profile_CopyTime(Vec3 *out, GarageInfo *g) { *out = g->time; }
int Profile_HasFreeGarageSlot(GarageInfo *g) { return g->used < g->max; }
int Profile_GetGarageSize(GarageInfo *g) { return g->size; }
float RaceCar_GetSpeedPerMinute(RaceCarS *c) { return c->speed / 60.0f; }
float RaceCar_GetRpm(RaceCarS *c) { return c->rpm; }
float RaceCar_GetSpeedKmh(RaceCarS *c) { return 3.6f * c->speed; }
float RaceCar_GetDistance(RaceCarS *c) { return c->dist; }
void RaceCar_GetLapTimes(RaceCarS *c, int *lap, float *t) { *lap = c->lap; *t = c->lapTime; }
int RaceProg_GetSplit(RaceProgData *p, int i) { return p->splits[i].time; }
void RaceProg_Set_10(int v) { g_RaceProg->f10 = v; }
int RaceProg_Get_10(void) { return g_RaceProg->f10; }
int SpGauge_GetMax(SpGauge *g) { return g->max; }
int SpGauge_GetDrain(SpGauge *g) { return g->drain; }
int SpGauge_GetValue(SpGauge *g) { return g->value; }
int MsgId_MedalName(int i) { return i + 2207; }
int MsgId_GirlfriendLine(int i) { return i + 3481; }
int MsgId_GirlfriendHobby(int i) { return i + 3521; }
int MsgId_GirlfriendJob(int i) { return i + 3501; }
/* NONMATCHING (85%): the game recomputes &t (addiu v0,sp,16) after the call and loads through it; MWCC folds it into lw v0,28(sp) for every form tried (local, one-element array, struct return). */
int Msg_TeamName(int team) { TeamInfo t; TeamDb_Copy(&t, (signed char)team); return t.nameId; }
int Msg_RivalTitle(int x) { return RivalRec_GetType(RivalDb_Get((short)Msg_FormatRivalName(x))); }
int MsgId_TeamName(int i) { return i + 3541; }
int MsgId_RivalProfile(int i) { return i + 3122; }
int MsgId_RivalNickname(int i) { return i + 1772; }
int MsgId_RivalName(int i) { return i + 2700; }
int MsgId_RivalType(int i) { return i + 1746; }
int MsgId_RivalTrait(int i) { return i + 1720; }
float Math_EaseLinear(float t) { return t; }
Rec12 *GameDb_GetEncounter(int i) { return &g_GameDb->encounters[i]; }
Rec80 *GameDb_GetRivalCar(int i) { return &g_GameDb->rivalCars[i]; }
TeamInfo *GameDb_GetTeamInfo(int i) { return &g_GameDb->teamInfo[i]; }
Rec68 *GameDb_GetTeam(int i) { return &g_GameDb->teams[i]; }
Rec380 *GameDb_GetRival(int i) { return &g_GameDb->rivals[i]; }
char *Script_FieldPtr_89f6(Script *s) { return s->f89f6; }
char *Script_ElemPtr_1d6_xda8(Script *s, int i) { return s->elem[i].f1d6; }
int Script_GetElem_1d5_xda8(Script *s, int i) { return s->elem[i].f1d5; }
int Script_GetField_89f2(Script *s) { return s->f89f2; }
int Script_GetField_89f0(Script *s) { return s->f89f0; }
int Script_GetField_89f4(Script *s) { return s->f89f4; }
void ComposerScene_SetPage(int p) { g_ComposerScene->page = p; }
int ComposerScene_GetPage(void) { return g_ComposerScene->page; }
int ComposerScene_GetPrevState(void) { return g_ComposerScene->prev; }
int ComposerScene_GetState(void) { return g_ComposerScene->state; }
void ComposerScene_RequestState(int s) { if (g_ComposerScene->state != s) { g_ComposerScene->req = s; g_ComposerScene->page = 2; } }
int ComposerInput_GetRepeat(void) { return s_ComposerInputVar1->repeat; }
int ComposerInput_GetHeld(void) { return s_ComposerInputVar1->held; }
int ComposerInput_GetPressed(void) { return s_ComposerInputVar1->pressed; }
void ComposerInput_Lock(void) { s_ComposerInputVar1->lock = 1; }
void ComposerInput_SetMode(int m) { s_ComposerInputVar1->mode = m; }
void ComposerInput_Free(void) { if (s_ComposerInputVar1 != 0) { Mem_Free(s_ComposerInputVar1); s_ComposerInputVar1 = 0; } }
