/* Matching C (MWCPS2 3.0 build 011126, -O4,p). 0x17e800-0x17e8e0: https://decomp.me/scratch/zUNmC */
extern void *g_RaceCtx;

void RaceCtx_Set_14(signed char v) { *(signed char *)(((char *)g_RaceCtx) + 0x14) = v; }
void RaceCtx_Set_13(signed char v) { *(signed char *)(((char *)g_RaceCtx) + 0x13) = v; }
void RaceCtx_Set_12(signed char v) { *(signed char *)(((char *)g_RaceCtx) + 0x12) = v; }
void RaceCtx_Set_10(signed char v) { *(signed char *)(((char *)g_RaceCtx) + 0x10) = v; }
signed char RaceCtx_Get_13(void) { return *(signed char *)(((char *)g_RaceCtx) + 0x13); }
signed char RaceCtx_Get_10(void) { return *(signed char *)(((char *)g_RaceCtx) + 0x10); }
void RaceCtx_Set_9(signed char v) { *(signed char *)(((char *)g_RaceCtx) + 0x9) = v; }
signed char RaceCtx_Get_9(void) { return *(signed char *)(((char *)g_RaceCtx) + 0x9); }
void RaceCtx_Set_8(signed char v) { *(signed char *)(((char *)g_RaceCtx) + 0x8) = v; }
signed char RaceCtx_Get_8(void) { return *(signed char *)(((char *)g_RaceCtx) + 0x8); }
void RaceCtx_Set_4(int v) { *(int *)(((char *)g_RaceCtx) + 0x4) = v; }
int RaceCtx_Get_4(void) { return *(int *)(((char *)g_RaceCtx) + 0x4); }
void RaceCtx_SetMode(signed char v) { *(signed char *)(((char *)g_RaceCtx) + 0x0) = v; }
signed char RaceCtx_GetMode(void) { return *(signed char *)(((char *)g_RaceCtx) + 0x0); }
