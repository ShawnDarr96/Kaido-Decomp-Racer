/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * Batch 12 - https://decomp.me/scratch/j5YB4 - all 67 at objdiff 100%.
 * Small functions from Profile, CarDb, Obj, TexSlot, GameState, Course, Arena, RivalSchedule,
 * RaceTask, DriverInput, CarRec, LapTime, menus, SeqGen, PreviewSnd, Gfx, File and Movie;
 * grouped here until the translation units are split (board row M3). */
typedef struct RivalStates { int w[404]; } RivalStates;
typedef struct ProfileR { char pad0[0x272c]; int flags; char pad2730[0x3fc4 - 0x2730]; short battles[500]; short rB[500]; short rC[500]; short wins[500]; } ProfileR;
typedef struct ProfileS { char pad0[0x4c30]; RivalStates rivalStates; } ProfileS;
int Profile_FindRivalEntry(ProfileR *p, int id);
typedef struct CarDbEntry { int model; int count; } CarDbEntry;
typedef struct CarDb { char pad0[0x20]; int file; char pad24[0x5c - 0x24]; CarDbEntry *entries; } CarDb;
extern CarDb *g_CarDb;
int File_IsBusy(int file);
void Mem_Copy(void *dst, void *src, int size);
typedef struct Obj { int f0; int f4; char pad8; signed char f9; short fa; char padc[0x70 - 0xc]; unsigned long long f70; char pad78[8]; char f80[32]; int fa0; int fa4; } Obj;
typedef struct TexSlot { int f0; char *data; } TexSlot;
extern TexSlot *s_TexSlotVar3;
extern int s_TexSlotVar2;
void Mem_Free(void *p);
typedef struct GsHeader { int w[18]; } GsHeader;
typedef struct GameStateS { GsHeader hdr; int f48; char pad4c[0xc4 - 0x4c]; int fc4; char padc8[0x3a4 - 0xc8]; int f3a4; int f3a8; int f3ac; } GameStateS;
extern GameStateS *g_GameState;
void Course_RenderHook(void);
typedef struct CourseX { char pad0[0x1c]; void (*hook)(void); char pad20[4]; int f24; } CourseX;
void Skid_DrawAll(void); void PtclSys_UpdateAll(void);
typedef struct Arena { char pad0[0x1c]; int used; char *base; } Arena;
typedef struct SchedRow { short s[6]; } SchedRow;
extern SchedRow *g_RivalSchedule;
typedef struct RaceWorld { unsigned char running; } RaceWorld;
void RaceWorld_Step(RaceWorld *w);
typedef struct RaceTask { char pad0[0x14]; RaceWorld *world; char pad18[4]; void (*fn)(struct RaceTask *); } RaceTask;
void RaceWorld_Step_Thunk(RaceTask *t);
typedef struct DriverInput { int f0; int f4; int f8; int fc; int f10; signed char f14; } DriverInput;
typedef struct DriverAxes { float f0; float f4; float f8; float fc; float f10; } DriverAxes;
float GameState_Get_14(void);
typedef struct RaceCarT { char pad0[0x1780]; float time; } RaceCarT;
typedef struct CarRecP { short model; short f2; int f4; int f8; char padc[0x14 - 0xc]; signed char paint[0x34 - 0x14]; char pad34[2]; short f36; int f38; signed char f3c; char pad3d[3]; int f40; char pad44[0x70 - 0x44]; int parts[20]; char padc0[4]; signed char grade; } CarRecP;
typedef struct Lap { int time; int a; int b; } Lap;
typedef struct LapTime { int f0; Lap laps[10]; } LapTime;
typedef struct RaceProg { int header; int flags; signed char phase; char pad9[3]; int unkC; int f10; int f14; } RaceProg;
extern RaceProg *g_RaceProg;
typedef struct PageMail { char pad0[0x1c]; int f1c; char pad20[4]; int f24; } PageMail;
int Menu_MapCursorToItem(void *menu);
typedef struct QuickRace { char pad0[0x10]; void *menu; } QuickRace;
extern signed char D_0036EF2C[8];
typedef struct SeqElem { char pad0[0x29c]; int f29c; char pad2a0[0x2a8 - 0x2a0]; int f2a8; char pad2ac[0x2bc - 0x2ac]; int f2bc; char pad2c0[0x2d8 - 0x2c0]; int f2d8; char pad2dc[0xda8 - 0x2dc]; } SeqElem;
typedef struct SeqElemA { char pad0[0x1a4]; int f1a4; char pad1a8[0x1bc - 0x1a8]; int f1bc; char pad1c0[0xda8 - 0x1c0]; } SeqElemA;
typedef struct Nameentry { int f0; int f4; int f8; } Nameentry;
void Snd_QueueCmd3c(int h); void Snd_QueueCmd3b(int h);
typedef struct PreviewSnd { int handle; int flags; int f8; } PreviewSnd;
extern char s_GfxFrameList[20];
void List_Remove(void *list, void *node); void List_Append(void *list, void *node);
extern int s_FileVar1, s_File_SetHeap_1, s_File_SetHeap_2;
void RotateThreadReadyQueue(int prio);
typedef struct MovieT { char pad0[8]; char mpeg[0x50 - 8]; int prio; } MovieT;
int maybe_sceMpegIsEnd(void *mp);

void Gfx_RemoveFrameCallback(void *node) { List_Remove(s_GfxFrameList, node); }
void Gfx_AddFrameCallback(void *node) { List_Append(s_GfxFrameList, node); }
void File_ShutdownNop(void) { }
void File_SetHeap(int h) { s_FileVar1 = h; s_File_SetHeap_1 = -1; s_File_SetHeap_2 = -1; }
void maybe_Movie_iSuspendSelf(MovieT *m) { RotateThreadReadyQueue(m->prio); }
int Movie_IsEnd(MovieT *m) { return maybe_sceMpegIsEnd(m->mpeg) != 0; }
void Obj_SetTexture(Obj *o, int a, int b, void *src) { o->fa0 = a; o->fa4 = b; if (src) Mem_Copy(o->f80, src, 32); }
void Obj_SetBlend(Obj *o, int a, int b, unsigned long long c) { o->f4 = 1; o->f9 = a; o->fa = b; o->f70 = c; }
char *TexSlot_GetEntry(int i, int j) { return s_TexSlotVar3[i].data + j * 0x80; }
void TexSlot_Set(int i, int a, char *b) { s_TexSlotVar3[i].f0 = a; s_TexSlotVar3[i].data = b; }
void TexSlot_Free(void) { if (s_TexSlotVar3 != 0) Mem_Free(s_TexSlotVar3); s_TexSlotVar2 = 0; s_TexSlotVar3 = 0; }
void GameState_LoadHeader(GsHeader *out) { *out = g_GameState->hdr; }
int GameState_Get_48(void) { return g_GameState->f48; }
int GameState_Get_c4(void) { return g_GameState->fc4; }
void Game_Nop(void) { }
void Course_InstallRenderHook(CourseX *c) { c->hook = Course_RenderHook; }
void Course_UpdateHook(void) { Skid_DrawAll(); PtclSys_UpdateAll(); }
char *Arena_Alloc(Arena *a, int size) { char *p = a->base + a->used; a->used += (size + 15) & ~15; return p; }
void Course_SetField_24(CourseX *c, int v) { c->f24 = v; }
int Course_GetField_24(CourseX *c) { return c->f24; }
void Profile_ClearFlags(ProfileR *p, int m) { p->flags &= ~m; }
int Profile_GetFlags(ProfileR *p) { return p->flags; }
void Profile_SetFlags(ProfileR *p, int m) { p->flags |= m; }
void Profile_CopyRivalStates(RivalStates *out, ProfileS *p) { *out = p->rivalStates; }
int RivalSchedule_Get(int i, int j) { return g_RivalSchedule[i].s[j]; }
void RivalSchedule_Free(void) { if (g_RivalSchedule != 0) { Mem_Free(g_RivalSchedule); g_RivalSchedule = 0; } }
int Profile_GetRivalWins(ProfileR *p, int i) { return p->wins[i]; }
int Profile_GetRivalTotalRaces(ProfileR *p, int i) { return (short)(p->battles[i] + p->rB[i] + p->rC[i]); }
int Profile_GetRivalBattleCount(ProfileR *p, int i) { return p->battles[i]; }
int Profile_GetRivalBattleCountById(ProfileR *p, int id) { return p->battles[Profile_FindRivalEntry(p, id)]; }
void RaceWorld_Step_Thunk(RaceTask *t) { RaceWorld_Step(t->world); }
void maybe_RaceTask_ClearFlag(RaceTask *t) { t->world->running = 0; }
void RaceTask_StartWorld(RaceTask *t) { t->world->running = 1; t->fn = RaceWorld_Step_Thunk; }
void DriverInput_Clear(DriverInput *d) { d->f0 = 0; d->f4 = 0; d->f8 = 0; d->fc = 0; d->f10 = 0; d->f14 = 0; }
void DriverInput_ClearAxes(DriverAxes *d) { d->f0 = 0.0f; d->f4 = 1.0f; d->f8 = 0.0f; d->fc = 1.0f; d->f10 = 0.0f; }
float Race_GetTimeScale(RaceCarT *r) { return GameState_Get_14() - r->time; }
int CarRec_GetPaint(CarRecP *r, unsigned char i) { return r->paint[i]; }
signed char *CarRec_GetPaintArray(CarRecP *r) { return r->paint; }
int *CarRec_GetPartSlot(CarRecP *r, unsigned char i) { return &r->parts[i]; }
void CarRec_ResetParts(CarRecP *r) { r->model = -1; r->f2 = 0; r->f4 = 0; r->f8 = 0; r->f38 = 0; r->f3c = 0; r->f36 = -1; r->f40 = 0; }
int CarRec_GetGrade(CarRecP *r) { return r->grade; }
int CarRec_GetVariant(CarRecP *r) { return r->f2; }
int LapTime_GetLap(LapTime *t, int i) { return t->laps[i].time; }
void RaceRule_Set_14(int v) { g_RaceProg->f14 = v; }
int RaceRule_Get_14(void) { return g_RaceProg->f14; }
int CarDb_GetVariantCount(int i) { CarDbEntry *e = &g_CarDb->entries[i]; if (e->count < 2) return 0; return e->count; }
int CarDb_GetVariant(int i) { CarDbEntry *e = &g_CarDb->entries[i]; int n = e->count; if (n >= 2) n = 2; return n; }
int CarDb_GetModelIndex(int i) { return g_CarDb->entries[i].model; }
int CarDb_IsLoading(void) { return File_IsBusy(g_CarDb->file); }
void maybe_PageMail_State7_MessageDeleted(PageMail *m) { m->f1c = 0; m->f24 = 0; }
void maybe_PageMail_State6_MessageDeleted(PageMail *m) { m->f1c = 0; m->f24 = 0; }
void maybe_PageMail_State5_AcceptThisRival(PageMail *m) { m->f1c = 0; m->f24 = 0; }
int maybe_QuickRace_MapRowToItem(QuickRace *q) { return Menu_MapCursorToItem(q->menu); }
int maybe_Record_MapRowToItem(void *self, void *menu) { return Menu_MapCursorToItem(menu); }
int Record_GetTableEntry(void *self, int i) { return D_0036EF2C[i]; }
void SeqGen_GetTrackRangeA(SeqElemA *s, int i, int *a, int *b) { SeqElemA *e = &s[i]; *a = e->f1bc; *b = e->f1a4; }
void SeqGen_GetTrackRangeB(SeqElem *s, int i, int *a, int *b) { SeqElem *e = &s[i]; *a = e->f2d8; *b = e->f2bc; }
void SeqGen_GetTrackRangeC(SeqElem *s, int i, int *a, int *b) { SeqElem *e = &s[i]; *a = e->f2a8; *b = e->f29c; }
int GameState_Get_3a4(void) { return g_GameState->f3a4; }
int GameState_Get_3ac(void) { return g_GameState->f3ac; }
int GameState_Get_3a8(void) { return g_GameState->f3a8; }
int Nameentry_GetField_4(Nameentry *n) { return n->f4; }
int Nameentry_GetField_8(Nameentry *n) { return n->f8; }
int Nameentry_Nop(Nameentry *n) { return n->f0; }
void PreviewSnd_QueueStop(PreviewSnd *p) { Snd_QueueCmd3c(p->handle); }
void PreviewSnd_QueuePause(PreviewSnd *p) { Snd_QueueCmd3b(p->handle); }
void PreviewSnd_MarkStopped(PreviewSnd *p) { p->flags |= 1; p->f8 = -1; }
