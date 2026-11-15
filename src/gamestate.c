/* Matching C (MWCPS2 3.0 build 011126, -O4,p; see config/compiler.txt).
 * Functions are in their original address order (0x177210-0x177280). */
typedef struct GameState { char pad[0xe0]; int playerCount; int rivalCount; int trafficCount; } GameState;
extern GameState *g_GameState;

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
