/* Matching C (MWCPS2 3.0.1b145 (Built 050209), -O4,p; see config/compiler.txt).
 * Functions are in their original address order. 0x176f30-0x177210: https://decomp.me/scratch/E0YK3 */
typedef struct Rec204 { int w[51]; } Rec204;
typedef struct Rec256 { int w[64]; } Rec256;
typedef struct Rec380 { int w[95]; } Rec380;
typedef struct Rec1344 { int w[336]; } Rec1344;
typedef struct GameState {
    char pad0[0xe0];
    int playerCount;      /* 0xe0 */
    int rivalCount;       /* 0xe4 */
    int trafficCount;     /* 0xe8 */
    char pad1[0xf0 - 0xec];
    Rec204 entry[3];      /* 0xf0 */
    char pad2[0x3e0 - 0x354];
    Rec1344 racer[7];     /* 0x3e0 */
    Rec256 course[7];     /* 0x28a0 */
    Rec380 stats[7];      /* 0x2fa0 */
} GameState;
extern GameState *g_GameState;

int GameState_Get_3acc(void) { return *(int *)(((char *)g_GameState) + 0x3acc); }
int GameState_Get_3ad0(void) { return *(int *)(((char *)g_GameState) + 0x3ad0); }
void GameState_Set_364(int v) { *(int *)(((char *)g_GameState) + 0x364) = v; }
void GameState_Set_390(int v) { *(int *)(((char *)g_GameState) + 0x390) = v; }
int GameState_Get_364(void) { return *(int *)(((char *)g_GameState) + 0x364); }
int GameState_Get_390(void) { return *(int *)(((char *)g_GameState) + 0x390); }
int GameState_Get_360(void) { return *(int *)(((char *)g_GameState) + 0x360); }
int GameState_Get_35c(void) { return *(int *)(((char *)g_GameState) + 0x35c); }
void GameState_Set_360(int v) { *(int *)(((char *)g_GameState) + 0x360) = v; }
void GameState_Set_35c(int v) { *(int *)(((char *)g_GameState) + 0x35c) = v; }
int GameState_Get_3a0(void) { return *(int *)(((char *)g_GameState) + 0x3a0); }
void GameState_Set_3a0(int v) { *(int *)(((char *)g_GameState) + 0x3a0) = v; }
int GameState_Get_39c(void) { return *(int *)(((char *)g_GameState) + 0x39c); }
void GameState_Set_39c(int v) { *(int *)(((char *)g_GameState) + 0x39c) = v; }
int GameState_Get_398(void) { return *(int *)(((char *)g_GameState) + 0x398); }
void GameState_Set_398(int v) { *(int *)(((char *)g_GameState) + 0x398) = v; }
void GameState_Set_354(signed char v) { *(signed char *)(((char *)g_GameState) + 0x354) = v; }
signed char GameState_Get_354(void) { return *(signed char *)(((char *)g_GameState) + 0x354); }
signed char GameState_Get_354_7050(void) { return *(signed char *)(((char *)g_GameState) + 0x354); }
char *GameState_Ptr_354(void) { return ((char *)g_GameState) + 0x354; }
Rec204 *GameState_Elem_f0_xcc(int i) { return &g_GameState->entry[i]; }
/* the extra nop 3.0 (011126) put before the copy loop is gone under 3.0.1b145: matches */
void GameState_CopyPlayerRecord(Rec204 *dst, int i) { *dst = g_GameState->entry[i]; }
void GameState_Set_3a48(int v) { *(int *)(((char *)g_GameState) + 0x3a48) = v; }
int GameState_Get_3a48(void) { return *(int *)(((char *)g_GameState) + 0x3a48); }
void GameState_CopyCourseRecord(Rec256 *dst, int i) { *dst = g_GameState->course[i]; }
char *GameState_Ptr_3a04(void) { return ((char *)g_GameState) + 0x3a04; }
Rec380 *GameState_Elem_2fa0_x17c(int i) { return &g_GameState->stats[i]; }
Rec256 *GameState_Elem_28a0_x100(int i) { return &g_GameState->course[i]; }
Rec1344 *GameState_Elem_3e0_x540(int i) { return &g_GameState->racer[i]; }
int GameState_Get_ec(void) { return *(int *)(((char *)g_GameState) + 0xec); }
void GameState_Set_e4(int v) { *(int *)(((char *)g_GameState) + 0xe4) = v; }
void GameState_Set_e0(int v) { *(int *)(((char *)g_GameState) + 0xe0) = v; }

/* 0x00177210 - matched: https://decomp.me/scratch/DAiek */
int GameState_GetRacerCount(void) {
    return g_GameState->playerCount + g_GameState->rivalCount;
}

/* 0x00177230 - matched: https://decomp.me/scratch/DAiek */
int GameState_GetTotalCarCount(void) {
    return g_GameState->playerCount + (g_GameState->trafficCount + g_GameState->rivalCount);
}

/* 0x00177250 - matched: https://decomp.me/scratch/DAiek */
int GameState_GetTrafficCount(void) {
    return g_GameState->trafficCount;
}

/* 0x00177260 - matched: https://decomp.me/scratch/DAiek */
int GameState_GetRivalCount(void) {
    return g_GameState->rivalCount;
}

/* 0x00177270 - matched: https://decomp.me/scratch/zXHfU (and DAiek) */
int GameState_GetPlayerCount(void) {
    return g_GameState->playerCount;
}

/* 0x177740-0x1777c0 - matched: https://decomp.me/scratch/zUNmC */
int GameState_Get_8(void) { return *(int *)(((char *)g_GameState) + 0x8); }
int GameState_Get_40(void) { return *(int *)(((char *)g_GameState) + 0x40); }
int GameState_Get_10(void) { return *(int *)(((char *)g_GameState) + 0x10); }
int GameState_Get_c(void) { return *(int *)(((char *)g_GameState) + 0xc); }
signed char GameState_Get_3(void) { return *(signed char *)(((char *)g_GameState) + 0x3); }
signed char GameState_Get_2(void) { return *(signed char *)(((char *)g_GameState) + 0x2); }
signed char GameState_Get_1(void) { return *(signed char *)(((char *)g_GameState) + 0x1); }
signed char GameState_Get_0(void) { return *(signed char *)(((char *)g_GameState) + 0x0); }
