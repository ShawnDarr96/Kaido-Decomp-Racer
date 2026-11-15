/* Matching C (MWCPS2 3.0 build 011126, -O4,p; see config/compiler.txt). */
typedef struct GameState { char pad[0xe0]; int playerCount; } GameState;
extern GameState *g_GameState;

/* 0x00177270 - matched: https://decomp.me/scratch/zXHfU */
int GameState_GetPlayerCount(void) {
    return g_GameState->playerCount;
}
