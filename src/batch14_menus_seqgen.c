/* MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt.
 * Batch 14 - https://decomp.me/scratch/GJB7z - objdiff 100% unless marked NONMATCHING.
 * Player-status/menu draw states, SeqGen validators, BlockPool searches, RoadData section lookups,
 * car sound helpers, Profile calendar helpers and the RaceScene task callbacks. */
typedef struct ProfileP { char pad0[0x272c]; int flags; char pad2730[0x2734 - 0x2730]; int day; char pad2738[0x2bb8 - 0x2738]; float winRate; char pad2bbc[0x2bd0 - 0x2bbc]; int races; char pad2bd4[0x2be4 - 0x2bd4]; int stat8; int stat9; } ProfileP;
ProfileP *Profile_Get(int idx);
int Profile_GetMoney(ProfileP *p); int Profile_GetPoints(ProfileP *p);
int Profile_CountClearedCourses(int *flags); int Profile_CountUnlockedCourses(int *flags);
void MenuWnd_DrawNumber(void *w, int x, int v);
void MenuWnd_DrawLabel(void *w, int x, int msg, int v);
void maybe_strncpy(char *dst, const char *src, int n);
typedef struct ScriptElem { char pad0[0x1d5]; signed char f1d5; char f1d6[0xda8 - 0x1d6]; } ScriptElem;
typedef struct Script { ScriptElem elem[10]; char padX[0x89f0 - 10 * 0xda8]; short f89f0; short f89f2; short f89f4; char title[16]; } Script;
typedef struct Block80 { int flags; int used; int id; int pad[17]; } Block80;
typedef struct Block116 { int flags; int used; int id; int pad[26]; } Block116;
typedef struct RoadSeg { int w[8]; } RoadSeg;
typedef struct RoadSeg12 { int w[3]; } RoadSeg12;
typedef struct RoadSection { short n; char pad2[0x7c - 2]; RoadSeg segs[1]; } RoadSection;
typedef struct RoadData { int f0; RoadSection **sections; } RoadData;
extern RoadData *g_RoadData;
typedef struct Vec4 { float x, y, z, w; } Vec4;
void Vec3_ScaleInPlace(Vec4 *v, float s);
typedef struct PhysContactF { Vec4 point; Vec4 normal; Vec4 normalB; } PhysContactF;
int Loading_IsActive(void);
void *SndMgr_GetInstance(void); int SndMgr_GetChannelB(void *m, int i);
typedef struct CarSnd { int f0; unsigned char slot; } CarSnd;
int RaceScene_IsRunning(void); void RaceCar_PlaceAll(void); void RaceCar_FreeAll(void); void RaceWorld_Shutdown(void);
typedef struct RaceTaskE { char pad0[0x1c]; void (*fn)(void); } RaceTaskE;
void RaceWorld_Init(RaceTaskE *t);
typedef struct Heap { int w[16]; } Heap;
extern Heap D_00430750;
void RaceCar_CreateAll(Heap *h);
void RaceScene_Update(void);

void PhysContact_FlipNormal(PhysContactF *c) { Vec3_ScaleInPlace(&c->normal, -1.0f); Vec3_ScaleInPlace(&c->normalB, -1.0f); }
unsigned char maybe_CarSnd_GetBankId(void) { return Loading_IsActive() ? 61 : 60; }
int maybe_CarSnd_GetChannel(void) { return SndMgr_GetChannelB(SndMgr_GetInstance(), 3); }
unsigned char maybe_CarSnd_GetSlotIndex(CarSnd *c) { return Loading_IsActive() ? c->slot : c->slot + 1; }
/* NONMATCHING (89%): branch layout / address arithmetic order still differs. */
Block80 *BlockPool_FindFree(Block80 *b, unsigned int n) { unsigned int i; for (i = 0; i < n; i++, b++) { if (b->used + (b->flags & 0x1b) == 0) return b; } return 0; }
/* NONMATCHING (89%): branch layout / address arithmetic order still differs. */
Block116 *BlockPool_FindFreeB(Block116 *b, unsigned int n) { unsigned int i; for (i = 0; i < n; i++, b++) { if (b->used + (b->flags & 0x1b) == 0) return b; } return 0; }
Block80 *BlockPool_Find(Block80 *b, unsigned int n, int id) { unsigned int i; for (i = 0; i < n; i++, b++) { if (id == b->id) return b; } return 0; }
Block116 *BlockPool_FindB(Block116 *b, unsigned int n, int id) { unsigned int i; for (i = 0; i < n; i++, b++) { if (id == b->id) return b; } return 0; }
int Profile_GetDayOfMonth(ProfileP *p) { int d = p->day % 28; if (d == 0) d = 28; return d; }
/* NONMATCHING (99%): branch layout / address arithmetic order still differs. */
int Profile_GetMonth(ProfileP *p) { int m = (p->day - 1) / 28 + 1; if (m >= 1000) m = 999; return m; }
int Profile_IsMonthStart(ProfileP *p) { int d = p->day % 28; if (d == 0) d = 28; return (d - 1) / 7 + 1; }
void RaceScene_Update(void) { if (RaceScene_IsRunning() == 1) RaceCar_PlaceAll(); }
void RaceScene_Exit(void) { RaceCar_FreeAll(); RaceWorld_Shutdown(); }
void RaceScene_Enter(RaceTaskE *t) { RaceWorld_Init(t); RaceCar_CreateAll(&D_00430750); t->fn = RaceScene_Update; }
/* NONMATCHING (49%): branch layout / address arithmetic order still differs. */
void RoadData_GetSectionStart(RoadSeg **out, unsigned short i) { RoadSection *s = g_RoadData->sections[i]; *out = &s->segs[s->n]; }
/* NONMATCHING (23%): branch layout / address arithmetic order still differs. */
void RoadData_GetSectionEnd(RoadSeg12 **out, unsigned short i) { RoadSection *s = g_RoadData->sections[i]; *out = (RoadSeg12 *)&s->segs[s->n] + s->n; }
void RoadData_GetSegmentTable(RoadSeg **out, unsigned short i) { RoadSection *s = g_RoadData->sections[i]; *out = s->segs; }
void MenuScr_Draw_Prizes(void *w, int x, int idx) { MenuWnd_DrawLabel(w, x, 619, Profile_CountClearedCourses(&Profile_Get(idx)->flags)); }
void MenuScr_Draw_People(void *w, int x, int idx) { MenuWnd_DrawLabel(w, x, 618, Profile_CountUnlockedCourses(&Profile_Get(idx)->flags)); }
void MenuScr_Draw_People_4100(void *w, int x, int idx) { MenuWnd_DrawLabel(w, x, 618, Profile_GetPoints(Profile_Get(idx))); }
void ScrRace_Select_PlayerStatus_State9(void *w, int x, int idx) { MenuWnd_DrawNumber(w, x, Profile_Get(idx)->stat9); }
void ScrRace_Select_PlayerStatus_State8(void *w, int x, int idx) { MenuWnd_DrawNumber(w, x, Profile_Get(idx)->stat8); }
void ScrRace_Select_PlayerStatus_State7(void *w, int x, int idx) { MenuWnd_DrawNumber(w, x, Profile_GetMoney(Profile_Get(idx))); }
void ScrRace_Select_PlayerStatus_State6(void *w, int x, int idx) { MenuWnd_DrawLabel(w, x, 615, Profile_Get(idx)->races); }
void SeqGen_SetTitle(Script *s, const char *src) { maybe_strncpy(s->title, src, 16); s->title[15] = 0; }
/* NONMATCHING (78%): branch layout / address arithmetic order still differs. */
int SeqGen_IsValidNote(Script *s, int i, signed char n) { if (n >= 0 && n < 128) { s->elem[i].f1d5 = n; return 1; } return 0; }
/* NONMATCHING (99%): branch layout / address arithmetic order still differs. */
int SeqGen_IsValidStart(Script *s, short v) { if (v >= s->f89f0 + 16 && v <= 1024) { s->f89f2 = v; return 1; } return 0; }
/* NONMATCHING (92%): branch layout / address arithmetic order still differs. */
int SeqGen_IsValidEnd(Script *s, short v) { if (v >= 0 && v <= s->f89f2 - 16) { s->f89f0 = v; return 1; } return 0; }
int SeqGen_IsValidTempoPercent(Script *s, short v) { if (v >= 100 && v <= 200) { s->f89f4 = v; return 1; } return 0; }
