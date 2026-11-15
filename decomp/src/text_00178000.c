// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00178000 - 0x0017c000
#include "ghidra_types.h"

// 0x00178010  size 0xbc
void RaceParams_Clear(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x20] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x21] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x23] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x24] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x71) = 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x25] = 0xffffffff;
  return;
}

// 0x001780d0  size 0x34
void RaceParams_SetDefaults(undefined1 *param_1)

{
  *param_1 = 10;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

// 0x00178110  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_3acc(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x3acc) = param_1;
  return;
}

// 0x00178120  size 0x26c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x3ae0 bytes -> 0x36f1a8 */

void GameState_Alloc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar1 = (undefined1 *)Mem_Alloc16(0x3ae0,param_1);
  _g_GameState = puVar1;
  *puVar1 = 10;
  puVar1[1] = 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar3 = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0x40) = 0;
  puVar1 = _g_GameState;
  *(undefined4 *)(_g_GameState + 0x48) = 0;
  *(undefined4 *)(puVar1 + 0xc4) = 0;
  *(undefined4 *)(puVar1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x50) = 0xffffffff;
  puVar1[0x54] = 0;
  puVar1[0x55] = 2;
  *(undefined4 *)(puVar1 + 0x58) = 0;
  *(undefined4 *)(puVar1 + 0x5c) = 0;
  *(undefined4 *)(puVar1 + 200) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x60) = 0xffffffff;
  *(undefined4 *)(puVar1 + 100) = 0xffffffff;
  puVar1[0x68] = 0;
  puVar1[0x69] = 2;
  *(undefined4 *)(puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0x70) = 0;
  *(undefined4 *)(puVar1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x74) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x78) = 0xffffffff;
  puVar1[0x7c] = 0;
  puVar1[0x7d] = 2;
  *(undefined4 *)(puVar1 + 0x80) = 0;
  *(undefined4 *)(puVar1 + 0x84) = 0;
  *(undefined4 *)(puVar1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x88) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x8c) = 0xffffffff;
  puVar1[0x90] = 0;
  puVar1[0x91] = 2;
  *(undefined4 *)(puVar1 + 0x94) = 0;
  *(undefined4 *)(puVar1 + 0x98) = 0;
  *(undefined4 *)(puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xa0) = 0xffffffff;
  puVar1[0xa4] = 0;
  puVar1[0xa5] = 2;
  *(undefined4 *)(puVar1 + 0xa8) = 0;
  *(undefined4 *)(puVar1 + 0xac) = 0;
  *(undefined4 *)(puVar1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xb4) = 0xffffffff;
  puVar1[0xb8] = 0;
  puVar1[0xb9] = 2;
  *(undefined4 *)(puVar1 + 0xbc) = 0;
  *(undefined4 *)(puVar1 + 0xc0) = 0;
  *(undefined4 *)(puVar1 + 0xdc) = 0xffffffff;
  puVar1 = _g_GameState;
  *(undefined4 *)(_g_GameState + 0xe0) = 0;
  puVar4 = puVar1 + 0xe0;
  *(undefined4 *)(puVar1 + 0xe4) = 0;
  *(undefined4 *)(puVar1 + 0xe8) = 0;
  *(undefined4 *)(puVar1 + 0xec) = 1;
  do {
    CarRec_Init(puVar4 + 0x10);
    puVar1 = _g_GameState;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0xcc;
  } while (iVar3 < 3);
  iVar3 = 0;
  _g_GameState[0x354] = 8;
  puVar4 = puVar1 + 0x354;
  *(undefined4 *)(puVar1 + 0x35c) = 0;
  *(undefined4 *)(puVar1 + 0x360) = 0;
  *(undefined4 *)(puVar1 + 0x358) = 0;
  puVar1[0x3dc] = 0xff;
  *(undefined4 *)(puVar1 + 0x364) = 0;
  do {
    *(undefined4 *)(puVar4 + 0x14) = 0;
    iVar3 = iVar3 + 5;
    *(undefined4 *)(puVar4 + 0x18) = 0;
    *(undefined4 *)(puVar4 + 0x1c) = 0;
    *(undefined4 *)(puVar4 + 0x20) = 0;
    *(undefined4 *)(puVar4 + 0x24) = 0;
    puVar4 = puVar4 + 0x14;
  } while (iVar3 < 10);
  *(undefined4 *)(puVar1 + 0x390) = 0;
  *(undefined4 *)(puVar1 + 0x394) = 0;
  *(undefined4 *)(puVar1 + 0x398) = 5000000;
  *(undefined4 *)(puVar1 + 0x39c) = 5000000;
  *(undefined4 *)(puVar1 + 0x3a0) = 100;
  *(undefined4 *)(puVar1 + 0x3a4) = 0;
  *(undefined4 *)(puVar1 + 0x3b0) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x3bc) = 0;
  *(undefined4 *)(puVar1 + 0x3c0) = 0;
  *(undefined4 *)(puVar1 + 0x3b4) = 0;
  *(undefined4 *)(puVar1 + 0x3b8) = 0;
  *(undefined4 *)(puVar1 + 0x3ac) = 0;
  RaceSlot_Clear(puVar1 + 0x3c4);
  RaceSlot_Clear(puVar1 + 0x3d0);
  iVar3 = 0;
  puVar2 = (undefined4 *)(_g_GameState + 0x3a50);
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + 5;
    puVar2[10] = 0;
    puVar2[0x14] = 0;
    puVar2[1] = 0;
    puVar2[0xb] = 0;
    puVar2[0x15] = 0;
    puVar2[2] = 0;
    puVar2[0xc] = 0;
    puVar2[0x16] = 0;
    puVar2[3] = 0;
    puVar2[0xd] = 0;
    puVar2[0x17] = 0;
    puVar2[4] = 0;
    puVar2[0xe] = 0;
    puVar2[0x18] = 0;
    puVar2 = puVar2 + 5;
  } while (iVar3 < 10);
  *(undefined4 *)(_g_GameState + 0x3ac8) = 0xffffffff;
  *(undefined4 *)(_g_GameState + 0x3acc) = 0;
  *(undefined4 *)(_g_GameState + 0x3ad0) = 0;
  return;
}

// 0x00178390  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_GameState_GetFlag(void)

{
  return _g_GameState;
}

// 0x001783a0  size 0x9c
void Course_RenderHook(void)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (*(int *)(iRam0036f1b8 + 0xc) != 0) {
    puVar1 = *(undefined4 **)(*(int *)(iRam0036f1b8 + 0xc) + 0x14);
    lVar2 = ResPool_Get(0);
    if (lVar2 != 0) {
      TexSlot_Set(5,9);
      Car_DrawAllEffects();
      PtclSys_BeginFrame();
      uRam004301a8 = 0;
      if (uRam004301a4 == 0) {
        uRam004301a0 = *puVar1;
      }
      else {
        uRam004301a0 = puVar1[1];
      }
      uRam004301a4 = uRam004301a4 ^ 1;
    }
  }
  return;
}

// 0x00178440  size 0x8
void Game_Nop(void)

{
  return;
}

// 0x00178450  size 0x10
void Course_InstallRenderHook(int param_1)

{
  *(code **)(param_1 + 0x1c) = Course_RenderHook;
  return;
}

// 0x00178460  size 0x24
void Course_UpdateHook(void)

{
  Skid_DrawAll();
  PtclSys_UpdateAll();
  return;
}

// 0x00178490  size 0x58
void Course_FreeHook(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (*piVar1 != 0) {
    Mem_Free();
    *piVar1 = 0;
  }
  if (piVar1[1] != 0) {
    Mem_Free();
    piVar1[1] = 0;
  }
  Skid_Free();
  return;
}

// 0x001784f0  size 0x7c
void Course_AllocHook(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  Skid_Alloc(0x430750);
  uVar2 = Mem_AllocAligned(0x23280,0x10,0x430750);
  *puVar1 = uVar2;
  uVar2 = Mem_AllocAligned(0x23280,0x10,0x430750);
  puVar1[1] = uVar2;
  *(code **)(param_1 + 0x1c) = Course_UpdateHook;
  return;
}

// 0x00178570  size 0x1ec
void Course_DrawSky(void)

{
  uint auStack_720 [166];
  undefined4 uStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined1 auStack_410 [20];
  undefined4 uStack_3fc;
  undefined1 auStack_3d0 [20];
  undefined4 uStack_3bc;
  uint auStack_390 [166];
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [20];
  undefined1 *puStack_6c;
  undefined1 auStack_40 [20];
  undefined1 *puStack_2c;
  
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = &g_Views;
  Pkt_Init(auStack_80,1,2,0);
  puStack_6c = &g_Views;
  Pkt_SubmitToChain(auStack_80,8);
  Pkt_End(auStack_80);
  Obj_Reset(auStack_390,4,0xffffffffffffffff);
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_c4 = 0;
  uStack_d0 = 0x10;
  uStack_e0 = 0x40000000a1;
  auStack_390[0] = auStack_390[0] | 2;
  uStack_cc = 0x10;
  uStack_c8 = 0x10;
  uStack_90 = 0x44200000;
  uStack_8c = 0x43e00000;
  uStack_f8 = 0xfffff0;
  uStack_e8 = 0x31001;
  Pkt_AddPrimitives(auStack_80,auStack_390,1);
  Pkt_Submit(auStack_80,0);
  Pkt_Init(auStack_3d0,1,2,0);
  uStack_3bc = 0x433380;
  Pkt_Init(auStack_410,1,2,0);
  uStack_3fc = 0x433380;
  Pkt_SubmitToChain(auStack_410,8);
  Pkt_End(auStack_410);
  Obj_Reset(auStack_720,4,0xffffffffffffffff);
  uStack_430 = 0;
  uStack_42c = 0;
  uStack_454 = 0;
  uStack_460 = 0x10;
  uStack_470 = 0x40000000a1;
  auStack_720[0] = auStack_720[0] | 2;
  uStack_45c = 0x10;
  uStack_458 = 0x10;
  uStack_420 = 0x43800000;
  uStack_41c = 0x42800000;
  uStack_488 = 0xfffff0;
  uStack_478 = 0x31001;
  Pkt_AddPrimitives(auStack_410,auStack_720,1);
  Pkt_Submit(auStack_410,0);
  return;
}

// 0x00178760  size 0x2e8
void Course_DrawLayer(int param_1,uint param_2)

{
  uint auStack_ab0 [166];
  undefined4 uStack_818;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  float fStack_7b0;
  float fStack_7ac;
  undefined1 auStack_7a0 [20];
  int iStack_78c;
  undefined1 auStack_760 [20];
  int iStack_74c;
  uint auStack_720 [166];
  undefined4 uStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  uint uStack_454;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  float fStack_420;
  float fStack_41c;
  undefined1 auStack_410 [20];
  int iStack_3fc;
  undefined1 auStack_3d0 [20];
  int iStack_3bc;
  uint auStack_390 [166];
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_80 [20];
  int iStack_6c;
  undefined1 auStack_40 [20];
  int iStack_2c;
  
  Pkt_Init(auStack_40,1,2,0);
  iStack_2c = param_1;
  Pkt_Init(auStack_80,1,2,0);
  iStack_6c = param_1;
  Pkt_SubmitToChain(auStack_80,8);
  Pkt_End(auStack_80);
  Obj_Reset(auStack_390,4,0xffffffffffffffff);
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_e0 = (ulong)param_2 << 0x20 | 0xa1;
  auStack_390[0] = auStack_390[0] | 2;
  uStack_d0 = 0x10;
  uStack_cc = 0x10;
  uStack_c8 = 0x10;
  uStack_c4 = 0;
  fStack_8c = (float)*(int *)(param_1 + 0x84);
  uStack_f8 = 0xfffff0;
  uStack_e8 = 0x31001;
  fStack_90 = (float)*(int *)(param_1 + 0x80);
  Pkt_AddPrimitives(auStack_80,auStack_390,1);
  Pkt_Submit(auStack_80,0);
  Pkt_Init(auStack_3d0,1,2,0);
  iStack_3bc = param_1;
  Pkt_Init(auStack_410,1,2,0);
  iStack_3fc = param_1;
  Pkt_SubmitToChain(auStack_410,8);
  Pkt_End(auStack_410);
  Obj_Reset(auStack_720,4,0xffffffffffffffff);
  uStack_430 = 0;
  uStack_42c = 0;
  uStack_470 = 0x48;
  uStack_460 = 0;
  uStack_45c = 0;
  uStack_458 = 0;
  uStack_454 = param_2 & 0xff;
  auStack_720[0] = auStack_720[0] | 2;
  fStack_41c = (float)*(int *)(param_1 + 0x84);
  uStack_488 = 0x10;
  uStack_478 = 0x71001;
  fStack_420 = (float)*(int *)(param_1 + 0x80);
  Pkt_AddPrimitives(auStack_410,auStack_720,1);
  Pkt_Submit(auStack_410,0);
  Pkt_Init(auStack_760,1,2,0);
  iStack_74c = param_1;
  Pkt_Init(auStack_7a0,1,2,0);
  iStack_78c = param_1;
  Pkt_SubmitToChain(auStack_7a0,8);
  Pkt_End(auStack_7a0);
  Obj_Reset(auStack_ab0,4,0xffffffffffffffff);
  uStack_7c0 = 0;
  uStack_7bc = 0;
  uStack_7e4 = 0;
  uStack_7f0 = 0xff;
  uStack_800 = 0x5000000058;
  auStack_ab0[0] = auStack_ab0[0] | 2;
  uStack_7ec = 0xff;
  uStack_7e8 = 0xff;
  fStack_7ac = (float)*(int *)(param_1 + 0x84);
  uStack_818 = 0xfffff0;
  uStack_808 = 0x31001;
  fStack_7b0 = (float)*(int *)(param_1 + 0x80);
  Pkt_AddPrimitives(auStack_7a0,auStack_ab0,1);
  Pkt_Submit(auStack_7a0,0);
  return;
}

// 0x00178a50  size 0x19c
void Course_SpawnAmbient(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (uRam0036f1c8 == 0) {
    fVar4 = (float)maybe_Rand_Next(0x41000000,0x447a0000);
    if (fVar4 < 2.1474836e+09) {
      uRam0036f1c8 = (uint)fVar4;
    }
    else {
      uRam0036f1c8 = (int)(fVar4 - 2.1474836e+09) | 0x80000000;
    }
  }
  lVar2 = RaceScene_IsPaused();
  if ((lVar2 == 0) && (iRam0046a59c == 0)) {
    uRam0036f1c8 = uRam0036f1c8 - 1;
  }
  if (uRam0036f1c8 < 8) {
    if (uRam0036f1c8 == 6) {
      lVar2 = Loading_IsActive();
      uVar3 = 0x11;
      if (lVar2 == 0) {
        uVar3 = 0x10;
      }
      Se_PlayMenuVol(uVar3,0x7f);
    }
    uVar1 = uRam0036f1c8 * 0x70;
    if ((int)uVar1 < 0) {
      fVar4 = (float)(uVar1 >> 1) + (float)(uVar1 >> 1);
    }
    else {
      fVar4 = (float)(int)uVar1;
    }
    fVar4 = fVar4 * 0.14;
    if (fVar4 < 2.1474836e+09) {
      uVar1 = (uint)fVar4;
    }
    else {
      uVar1 = (int)(fVar4 - 2.1474836e+09) | 0x80000000;
    }
    Course_DrawLayer(0x431100,uVar1);
    Course_DrawLayer(0x433380,uVar1);
  }
  return;
}

// 0x00178bf0  size 0xdb4
void Course_UpdateEnvironment(void)

{
  int iVar1;
  int iVar2;
  int in_zero_lo;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 *puStack_5e0;
  undefined1 *puStack_5d0;
  uint uStack_5c0;
  float fStack_560;
  float fStack_55c;
  float fStack_558;
  undefined4 uStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  undefined4 uStack_544;
  float afStack_540 [2];
  float fStack_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  float fStack_520;
  float fStack_51c;
  float fStack_518;
  float afStack_510 [2];
  float fStack_508;
  undefined2 uStack_4e8;
  undefined1 uStack_4e6;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  undefined4 uStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  undefined4 uStack_4a4;
  float afStack_4a0 [2];
  float fStack_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float afStack_470 [2];
  float fStack_468;
  undefined1 auStack_460 [704];
  undefined1 auStack_1a0 [32];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined1 uStack_15e;
  undefined4 uStack_154;
  
  iVar2 = iRam004301a8;
  iVar1 = iRam004301a0;
  if (cRam004301c0 != '\0') {
    if (6.2831855 < fRam0036e768) {
      fRam0036e768 = fRam0036e768 - 6.2831855;
    }
    if (fRam0036e768 < 0.0) {
      fRam0036e768 = fRam0036e768 + 6.2831855;
    }
    uStack_180 = DAT_0030b870;
    uStack_17c = DAT_0030b874;
    uStack_178 = DAT_0030b878;
    uStack_174 = DAT_0030b87c;
    uStack_16c = DAT_0030b884;
    uStack_168 = DAT_0030b888;
    uStack_170 = DAT_0030b880;
    uStack_164 = DAT_0030b88c;
    if (iRam004301a0 != 0) {
      if (iRam0036f1f8 == 0) {
        sceVu0CopyVector(auStack_1a0,0x431120);
        sceVu0CopyVector(0x431120,0x431140);
        uStack_530 = DAT_0030b8a0;
        uStack_52c = DAT_0030b8a4;
        uStack_528 = DAT_0030b8a8;
        uStack_524 = DAT_0030b8ac;
        sceVu0SubVector(afStack_510,0x431110,0x431100);
        sceVu0ScaleVector(0x3f000000,afStack_510,afStack_510);
        fVar13 = (float)sceVu0InnerProduct(afStack_510,afStack_510);
        if (5.0 < SQRT(fVar13)) {
          sceVu0ScaleVector(5.0 / SQRT(fVar13),afStack_510,afStack_510);
        }
        sceVu0AddVector(&fStack_520,afStack_510,&g_Views);
        sceVu0Normalize(afStack_540,afStack_510);
        sceVu0OuterProduct(afStack_540,&uStack_530,afStack_540);
        sceVu0Normalize(afStack_540,afStack_540);
        lVar3 = RaceScene_IsPaused();
        if (((lVar3 == 0) && (iRam0046a59c == 0)) && (uRam004301c4 = 0xc, cRam004301c0 == '\x01')) {
          fVar13 = (float)maybe_Rand_Next(0x3f800000,0x41400000);
          if (fVar13 < 2.1474836e+09) {
            uRam004301c4 = (uint)fVar13;
          }
          else {
            uRam004301c4 = (int)(fVar13 - 2.1474836e+09) | 0x80000000;
          }
        }
        uVar7 = 0;
        iVar12 = iVar2;
        if (uRam004301c4 != 0) {
          iVar8 = 0x4301c0;
          iVar6 = iVar1 + iVar2 * 0x30;
          do {
            iVar11 = iVar8 + 0x10;
            iVar4 = iVar8 + 0x20;
            lVar3 = RaceScene_IsPaused();
            if ((lVar3 == 0) && (iRam0046a59c == 0)) {
              fVar13 = (float)maybe_Rand_Next(0xbf800000,0x3f800000);
              fVar14 = (float)maybe_Rand_Next(0xbf800000,0x3f800000);
              fVar15 = (float)maybe_Rand_Next(0xbf800000,0x3f800000);
              fVar16 = (float)maybe_Rand_Next(0xbf800000,0x3f800000);
              fStack_560 = fVar14 * afStack_540[0] * 5.0 +
                           fVar13 * afStack_510[0] + fStack_520 + 0.0;
              fStack_558 = fVar16 * fStack_538 * 5.0 + fVar15 * fStack_508 + fStack_518 + 0.0;
              fStack_54c = fStack_51c + 2.3;
              fStack_55c = fStack_51c - 1.3;
              fStack_550 = fStack_560;
              fStack_548 = fStack_558;
              fVar13 = (float)cosf(fRam0036e768);
              fVar14 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
              fStack_550 = (fStack_550 + 0.0) - fVar13 * fVar14;
              fVar13 = (float)sinf(fRam0036e768);
              fVar14 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
              fStack_548 = (fStack_548 + 0.0) - fVar13 * fVar14;
              fVar13 = (float)cosf(fRam0036e768);
              fVar14 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
              fStack_560 = fVar13 * fVar14 + fStack_560 + 0.0;
              fVar13 = (float)sinf(fRam0036e768);
              fVar14 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
              uStack_544 = 0x3c23d70a;
              uStack_554 = 0x3c23d70a;
              fStack_558 = fVar13 * fVar14 + fStack_558 + 0.0;
              sceVu0CopyVector(iVar11,&fStack_550);
              sceVu0CopyVector(iVar4,&fStack_560);
            }
            maybe_Vu0_VecMin(&uStack_180,&uStack_180,iVar11);
            maybe_Vu0_VecMax(&uStack_170,&uStack_170,iVar11);
            maybe_Vu0_VecMin(&uStack_180,&uStack_180,iVar4);
            maybe_Vu0_VecMax(&uStack_170,&uStack_170,iVar4);
            sceVu0CopyVector(iVar6,iVar11);
            sceVu0CopyVector(iVar6 + 0x20,iVar4);
            *(undefined4 *)(iVar6 + 0x14) = 0x43640000;
            *(undefined4 *)(iVar6 + 0x10) = 0x43640000;
            if (cRam004301c0 == '\x01') {
              *(undefined4 *)(iVar6 + 0x18) = 0x41700000;
            }
            else {
              *(undefined4 *)(iVar6 + 0x18) = 0x41f00000;
            }
            *(undefined4 *)(iVar6 + 0x1c) = 0x41600000;
            uVar7 = uVar7 + 1;
            iVar12 = iVar12 + 1;
            iVar6 = iVar6 + 0x30;
            iVar8 = iVar8 + 0x20;
          } while (uVar7 < uRam004301c4);
        }
        iRam004301a8 = iRam004301a8 + (iVar12 - iVar2);
        maybe_Pkt_InitLayers(auStack_460,&g_Views,0x436180,0,1);
        Obj_Init(&uStack_160);
        uStack_160 = 8;
        uStack_15e = 4;
        Obj_SetBlend(&uStack_160,5,1,0);
        uStack_154 = 0;
        Obj_SetTexture(&uStack_160,iVar12 - iVar2,iVar1 + iVar2 * 0x30,&uStack_180);
        Model_Draw(auStack_460,&uStack_160);
        sceVu0CopyVector(0x431120,auStack_1a0);
      }
      else {
        puStack_5d0 = auStack_1a0;
        uStack_5c0 = 0;
        iVar6 = iRam004301a0 + iRam004301a8 * 0x30;
        iVar12 = iRam004301a8;
        puStack_5e0 = puStack_5d0;
        do {
          if (uStack_5c0 == 0) {
            iVar8 = 0x4316c0;
          }
          else {
            iVar8 = 0x431c80;
          }
          sceVu0SubVector(iVar8 + 0x40,iVar8 + 0x10,iVar8);
          sceVu0Normalize(iVar8 + 0x40,iVar8 + 0x40);
          sceVu0CopyVector(puStack_5e0,iVar8 + 0x20);
          sceVu0CopyVector(iVar8 + 0x20,iVar8 + 0x40);
          uStack_490 = DAT_0030b890;
          uStack_48c = DAT_0030b894;
          uStack_488 = DAT_0030b898;
          uStack_484 = DAT_0030b89c;
          sceVu0ScaleVector(0x40000000,afStack_470,iVar8 + 0x40);
          fVar13 = (float)sceVu0InnerProduct(afStack_470,afStack_470);
          if (5.0 < SQRT(fVar13)) {
            sceVu0ScaleVector(5.0 / SQRT(fVar13),afStack_470,afStack_470);
          }
          sceVu0AddVector(&fStack_480,afStack_470,iVar8);
          sceVu0Normalize(afStack_4a0,afStack_470);
          sceVu0OuterProduct(afStack_4a0,&uStack_490,afStack_4a0);
          sceVu0Normalize(afStack_4a0,afStack_4a0);
          lVar3 = RaceScene_IsPaused();
          if (((lVar3 == 0) && (iRam0046a59c == 0)) && (uRam004301c4 = 6, cRam004301c0 == '\x01')) {
            fVar13 = (float)maybe_Rand_Next(0x3f800000,0x40c00000);
            if (fVar13 < 2.1474836e+09) {
              uRam004301c4 = (uint)fVar13;
            }
            else {
              uRam004301c4 = (int)(fVar13 - 2.1474836e+09) | 0x80000000;
            }
          }
          uVar7 = 0;
          iVar8 = in_zero_lo;
          if (uStack_5c0 != 0) {
            iVar8 = 6;
          }
          if (uRam004301c4 != 0) {
            do {
              iVar4 = (uVar7 + iVar8) * 0x20;
              iVar11 = iVar4 + 0x4301d0;
              iVar4 = iVar4 + 0x4301e0;
              lVar3 = RaceScene_IsPaused();
              if ((lVar3 == 0) && (iRam0046a59c == 0)) {
                fVar13 = (float)maybe_Rand_Next(0xbf800000,0x3f800000);
                fVar14 = (float)maybe_Rand_Next(0xbf800000,0x3f800000);
                fVar15 = (float)maybe_Rand_Next(0xbf800000,0x3f800000);
                fVar16 = (float)maybe_Rand_Next(0xbf800000,0x3f800000);
                fStack_4c0 = fVar14 * afStack_4a0[0] * 5.0 +
                             fVar13 * afStack_470[0] + fStack_480 + 0.0;
                fStack_4b8 = fVar16 * fStack_498 * 5.0 + fVar15 * fStack_468 + fStack_478 + 0.0;
                fStack_4ac = fStack_47c + 2.3;
                fStack_4bc = fStack_47c - 1.3;
                fStack_4b0 = fStack_4c0;
                fStack_4a8 = fStack_4b8;
                fVar13 = (float)cosf(fRam0036e768);
                fVar14 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
                fStack_4b0 = (fStack_4b0 + 0.0) - fVar13 * fVar14;
                fVar13 = (float)sinf(fRam0036e768);
                fVar14 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
                fStack_4a8 = (fStack_4a8 + 0.0) - fVar13 * fVar14;
                fVar13 = (float)cosf(fRam0036e768);
                fVar14 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
                fStack_4c0 = fVar13 * fVar14 + fStack_4c0 + 0.0;
                fVar13 = (float)sinf(fRam0036e768);
                fVar14 = (float)maybe_Rand_Next(0x3f000000,0x3fc00000);
                uStack_4a4 = 0x3c23d70a;
                uStack_4b4 = 0x3c23d70a;
                fStack_4b8 = fVar13 * fVar14 + fStack_4b8 + 0.0;
                sceVu0CopyVector(iVar11,&fStack_4b0);
                sceVu0CopyVector(iVar4,&fStack_4c0);
              }
              maybe_Vu0_VecMin(&uStack_180,&uStack_180,iVar11);
              maybe_Vu0_VecMax(&uStack_170,&uStack_170,iVar11);
              maybe_Vu0_VecMin(&uStack_180,&uStack_180,iVar4);
              maybe_Vu0_VecMax(&uStack_170,&uStack_170,iVar4);
              sceVu0CopyVector(iVar6,iVar11);
              sceVu0CopyVector(iVar6 + 0x20,iVar4);
              *(undefined4 *)(iVar6 + 0x14) = 0x43640000;
              *(undefined4 *)(iVar6 + 0x10) = 0x43640000;
              if (cRam004301c0 == '\x01') {
                *(undefined4 *)(iVar6 + 0x18) = 0x41700000;
              }
              else {
                *(undefined4 *)(iVar6 + 0x18) = 0x41f00000;
              }
              *(undefined4 *)(iVar6 + 0x1c) = 0x41600000;
              uVar7 = uVar7 + 1;
              iVar12 = iVar12 + 1;
              iVar6 = iVar6 + 0x30;
            } while (uVar7 < uRam004301c4);
          }
          puStack_5e0 = puStack_5e0 + 0x10;
          uStack_5c0 = uStack_5c0 + 1;
        } while (uStack_5c0 < 2);
        uStack_4e8 = 8;
        uStack_4e6 = 4;
        uVar7 = 0;
        puVar10 = auStack_460;
        iRam004301a8 = iRam004301a8 + (iVar12 - iVar2);
        puVar9 = &uStack_160;
        do {
          if (uVar7 == 0) {
            iVar6 = 0x4316c0;
          }
          else {
            iVar6 = 0x431c80;
          }
          uVar5 = 2;
          if (uVar7 != 0) {
            uVar5 = 3;
          }
          maybe_Pkt_InitLayers(puVar10,iVar6,0x436180,0,uVar5);
          Obj_Init(puVar9);
          *puVar9 = 8;
          *(undefined1 *)(puVar9 + 1) = 4;
          Obj_SetBlend(puVar9,5,1,0);
          *(undefined4 *)(puVar9 + 6) = 0;
          Obj_SetTexture(puVar9,iVar12 - iVar2,iVar1 + iVar2 * 0x30,&uStack_180);
          Model_Draw(puVar10,puVar9);
          sceVu0CopyVector(iVar6 + 0x20,puStack_5d0);
          uVar7 = uVar7 + 1;
          puVar10 = puVar10 + 0x160;
          puStack_5d0 = puStack_5d0 + 0x10;
          puVar9 = puVar9 + 0x58;
        } while (uVar7 < 2);
      }
      cRam004301c0 = '\0';
    }
  }
  return;
}

// 0x001799b0  size 0x66c
void Car_DrawShadowAndBlur(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_f23;
  float unaff_f22;
  float fVar14;
  float fVar15;
  float unaff_f26;
  int iStack_2f0;
  int iStack_2e0;
  int iStack_2d0;
  int iStack_2c0;
  int iStack_2b0;
  uint uStack_2a0;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined2 uStack_250;
  undefined1 uStack_24e;
  undefined4 uStack_244;
  undefined1 auStack_1a0 [352];
  float fStack_40;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_4;
  
  if (iRam0036f1f8 == 0) {
    uStack_2a0 = 0;
    iStack_2c0 = 0;
    iStack_2d0 = 0;
    do {
      uVar10 = 0;
      iStack_2e0 = 0;
      do {
        uVar3 = uRam004301a8;
        iVar2 = iRam004301a0;
        uVar7 = 10;
        iStack_2b0 = 1;
        fVar12 = 1.0;
        if (*(int *)(iStack_2d0 + *(int *)(param_2 + 0x504) + iStack_2e0 + 0x5a0) != 0) {
          iVar6 = 0;
          iStack_2f0 = 0;
          piVar9 = param_1 + (uVar10 + iStack_2c0) * 0x84;
          pfVar4 = (float *)(iRam004301a0 + uRam004301a8 * 0x30);
          uVar8 = uRam004301a8;
          piVar5 = piVar9;
          do {
            if (iVar6 == 0) {
              sceVu0CopyVector(&fStack_10,piVar9 + 0x1fd0);
              iStack_2b0 = piVar9[0x1fcc];
              unaff_f26 = 1.0 / fStack_4;
              sceVu0ScaleVector(unaff_f26,&fStack_10,&fStack_10);
              fStack_40 = fStack_10;
              fStack_3c = fStack_c;
            }
            sceVu0CopyVector(&fStack_20,(int)piVar9 + iStack_2f0 + 0x7f70);
            iVar1 = piVar5[0x1fd8];
            sceVu0ScaleVector(1.0 / fStack_14,&fStack_20,&fStack_20);
            if ((iStack_2b0 == 1) && (iVar1 == 1)) {
              fStack_30 = (float)fabsf(fStack_40 - fStack_20);
              fStack_2c = (float)fabsf(fStack_3c - fStack_1c);
              fVar13 = 0.0;
              fStack_28 = SQRT(fStack_30 * fStack_30 + fStack_2c * fStack_2c);
              if ((uint)(*param_1 * (iVar6 + 1)) <= (uint)param_1[1]) {
                fVar14 = fStack_10 - fStack_20;
                fVar15 = fStack_c - fStack_1c;
                fVar11 = fVar14 * fVar14 + fVar15 * fVar15 + 0.0;
                if (0.0001 <= fVar11) {
                  fVar13 = 1.0 / SQRT(fVar11);
                }
                *pfVar4 = fStack_10;
                pfVar4[1] = fStack_c;
                if (iVar6 == 0) {
                  pfVar4[2] = unaff_f26 * fVar15 * 0.045 * fVar13 * fRam0043118c;
                  pfVar4[3] = unaff_f26 * fVar14 * -0.045 * fVar13 * fRam0043118c;
                }
                else {
                  pfVar4[2] = in_f23;
                  pfVar4[3] = unaff_f22;
                }
                sceVu0CopyVector(pfVar4 + 4,piVar5 + 0x1fd4);
                sceVu0ScaleVector(fVar12 * 1.0,pfVar4 + 4,pfVar4 + 4);
                if (0.0 < (float)piVar5[0x1fd3] - 3.0) {
                  pfVar4[7] = (float)piVar5[0x1fd2] / ((float)piVar5[0x1fd3] - 3.0);
                }
                else {
                  pfVar4[7] = 65535.0;
                }
                in_f23 = (float)uVar7 * unaff_f26 * fVar15 * 0.045 * fVar13 * fRam0043118c * 0.1;
                unaff_f22 = (float)uVar7 *
                            unaff_f26 * fVar14 * -0.045 * fVar13 * fRam0043118c * 0.1 * 0.466666;
                uVar8 = uVar8 + 1;
                uVar7 = uVar7 - 1;
                fVar12 = fVar12 * 0.9;
                pfVar4[8] = fStack_20;
                pfVar4[9] = fStack_1c;
                pfVar4[10] = in_f23;
                pfVar4[0xb] = unaff_f22;
                pfVar4 = pfVar4 + 0xc;
                sceVu0CopyVector(&fStack_10,&fStack_20);
                if (0x300 < uVar8) {
                  return;
                }
              }
            }
            iVar6 = iVar6 + 1;
            iStack_2f0 = iStack_2f0 + 0x30;
            piVar5 = piVar5 + 0xc;
          } while (iVar6 < 10);
          iVar6 = uVar8 - uVar3;
          if (iVar6 != 0) {
            uStack_260 = DAT_0030b860;
            uStack_25c = DAT_0030b864;
            uStack_258 = DAT_0030b868;
            uStack_254 = DAT_0030b86c;
            uRam004301a8 = uRam004301a8 + iVar6;
            maybe_Pkt_InitLayers(auStack_1a0,0x431100,0x436180,0,1);
            Obj_Init(&uStack_250);
            uStack_244 = 0;
            uStack_250 = 0x800;
            uStack_24e = 4;
            sceVu0CopyVector(auStack_280,&uStack_260);
            sceVu0CopyVector(auStack_270,&uStack_260);
            Obj_SetTexture(&uStack_250,iVar6,iVar2 + uVar3 * 0x30,auStack_280);
            Model_Draw(auStack_1a0,&uStack_250);
          }
        }
        uVar10 = uVar10 + 1;
        iStack_2e0 = iStack_2e0 + 0x40;
      } while (uVar10 < 4);
      iStack_2c0 = iStack_2c0 + 4;
      iStack_2d0 = iStack_2d0 + 0x100;
      uStack_2a0 = uStack_2a0 + 1;
    } while (uStack_2a0 < 7);
  }
  return;
}

// 0x0017a020  size 0xd8
/* WARNING: Removing unreachable block (ram,0x0017a0d4) */
/* "blur error : viewNrm == NULL." */

void MotionBlur_Setup(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (iRam0036f1f8 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar6 = 0;
    iVar3 = 0;
    do {
      uVar5 = 0;
      do {
        uVar4 = 0;
        iVar2 = param_1 + (uVar5 + iVar3) * 0x210;
        iVar1 = iVar2;
        do {
          *(undefined4 *)(iVar1 + 0x7f30) = 0;
          *(undefined4 *)(iVar1 + 0x7f60) = 0;
          uVar4 = uVar4 + 5;
          *(undefined4 *)(iVar1 + 0x7f90) = 0;
          *(undefined4 *)(iVar1 + 0x7fc0) = 0;
          *(undefined4 *)(iVar1 + 0x7ff0) = 0;
          iVar1 = iVar1 + 0xf0;
        } while (uVar4 < 6);
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar2 + uVar4 * 0x30 + 0x7f30) = 0;
      } while (uVar5 < 4);
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar6 < 7);
  }
  return;
}

// 0x0017a100  size 0x5c
void MotionBlur_Advance(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xb8f4);
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0xb8f4) = 0;
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xb8f4) = 2;
  }
  else if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xb8f4) = 1;
  }
  return;
}

// 0x0017a160  size 0x94
bool MotionBlur_FindSample
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined1 auStack_410 [16];
  undefined1 auStack_400 [16];
  undefined4 auStack_3f0 [16];
  undefined1 auStack_3b0 [944];
  
  iVar4 = 0x3f;
  puVar5 = auStack_3f0;
  do {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    iVar4 = iVar4 + -1;
    *puVar5 = *param_3;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    param_3 = param_3 + 4;
    puVar5 = puVar5 + 4;
  } while (0 < iVar4);
  sceVu0SubVector(auStack_400,param_4,0x431100);
  sceVu0SubVector(auStack_410,param_4,auStack_3b0);
  fVar6 = (float)sceVu0InnerProduct(auStack_410,auStack_400);
  return 0.0 <= fVar6;
}

// 0x0017a200  size 0x4e4
void MotionBlur_Build(undefined8 param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  float fVar14;
  int iStack_f0;
  int iStack_e0;
  uint *puStack_d0;
  int iStack_c0;
  uint uStack_90;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar11 = (uint *)(param_3 + 0x110);
  if (iRam0036f1f8 == 0) {
    uStack_20 = DAT_0030b840;
    uStack_1c = DAT_0030b844;
    uStack_18 = DAT_0030b848;
    uStack_14 = DAT_0030b84c;
    uStack_30 = DAT_0030b850;
    uStack_2c = DAT_0030b854;
    uStack_28 = DAT_0030b858;
    uStack_24 = DAT_0030b85c;
    piVar10 = (int *)param_1;
    uStack_10 = DAT_0030b830;
    uStack_c = DAT_0030b834;
    uStack_8 = DAT_0030b838;
    uStack_4 = DAT_0030b83c;
    if ((char)piVar10[0x2e3d] != '\0') {
      if ((char)piVar10[0x2e3d] == '\x02') {
        MotionBlur_Setup();
      }
      cVar2 = (char)piVar10[0x2e3d];
      if (cVar2 == '\x02') {
        *(undefined1 *)(piVar10 + 0x2e3d) = 0;
      }
      else if (cVar2 == '\x01') {
        *(undefined1 *)(piVar10 + 0x2e3d) = 2;
      }
      else if (cVar2 == '\0') {
        *(undefined1 *)(piVar10 + 0x2e3d) = 1;
      }
    }
    *piVar10 = 1;
    piVar10[1] = piVar10[1] + param_2;
    if (piVar10[1] % *piVar10 == 0) {
      uVar13 = 0;
      iStack_c0 = 0;
      iStack_e0 = 0;
      puStack_d0 = puVar11;
      do {
        uStack_90 = 0;
        iStack_f0 = 0;
        puVar12 = puStack_d0;
        do {
          iVar6 = uStack_90 + iStack_c0;
          bVar1 = true;
          if (uVar13 < 7) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar13) {
            case 0:
              bVar1 = (*puVar11 & 4) != 0;
              sceVu0ScaleVector(puVar12[0xc1],auStack_40,&uStack_20);
              break;
            default:
              bVar1 = (*puVar11 & 8) != 0;
              sceVu0ScaleVector(puVar12[0xc1],auStack_40,&uStack_20);
              break;
            case 2:
              bVar1 = (*puVar11 & 0x10) != 0;
              sceVu0ScaleVector(puVar12[0xc1],auStack_40,&uStack_30);
              break;
            case 5:
              bVar1 = (*puVar11 & 4) != 0;
              sceVu0ScaleVector(puVar12[0xc1],auStack_40,&uStack_10);
              break;
            case 6:
              bVar1 = (*puVar11 & 0x20) != 0;
              sceVu0ScaleVector(puVar12[0xc1],auStack_40,&uStack_10);
            }
          }
          iVar5 = iStack_e0 + *(int *)(param_3 + 0x504) + iStack_f0;
          if (*(int *)(iVar5 + 0x5a0) != 0) {
            iVar9 = 9;
            iVar7 = 0x1b0;
            piVar8 = piVar10 + iVar6 * 0x84 + 0x6c;
            do {
              iVar3 = iVar7 + 0x30 + iVar6 * 0x210;
              sceVu0CopyVector((int)piVar10 + iVar3 + 0x7f40,piVar8 + 0x1fd0);
              sceVu0CopyVector((int)piVar10 + iVar3 + 0x7f50,piVar8 + 0x1fd4);
              iVar9 = iVar9 + -1;
              iVar7 = iVar7 + -0x30;
              piVar8[0x1fd8] = piVar8[0x1fcc];
              piVar8 = piVar8 + -0xc;
            } while (-1 < iVar9);
            sceVu0ApplyMatrix(auStack_50,param_3 + 0x120,iVar5 + 0x5b0);
            sceVu0ApplyMatrix(auStack_60,0x431280,auStack_50);
            sceVu0ApplyMatrix(piVar10 + iVar6 * 0x84 + 0x1fd0,0x4312c0,auStack_60);
            sceVu0CopyVector(piVar10 + iVar6 * 0x84 + 0x1fd4,auStack_40);
            if (bVar1) {
              sceVu0ApplyMatrix(&fStack_70,0x431380,auStack_50);
              if (fStack_64 < 0.0) {
                fStack_64 = -fStack_64;
              }
              if ((((fStack_64 < fStack_68) || (fVar14 = -fStack_64, fStack_68 < fVar14)) ||
                  (fStack_64 < fStack_70)) ||
                 (((fStack_70 < fVar14 || (fStack_64 < fStack_6c)) || (fStack_6c < fVar14)))) {
                piVar10[iVar6 * 0x84 + 0x1fcc] = 0;
              }
              else {
                piVar10[iVar6 * 0x84 + 0x1fcc] = 1;
              }
              piVar8 = piVar10 + iVar6 * 0x84 + 0x1fcc;
              lVar4 = MotionBlur_FindSample(param_1,piVar8,puVar11,auStack_50);
              if (lVar4 != 0) {
                *piVar8 = 0;
              }
              if ((float)puVar12[0xc1] < 0.0) {
                *piVar8 = 0;
              }
            }
            else {
              piVar10[iVar6 * 0x84 + 0x1fcc] = 0;
            }
          }
          iStack_f0 = iStack_f0 + 0x40;
          uStack_90 = uStack_90 + 1;
          puVar12 = puVar12 + 1;
        } while (uStack_90 < 4);
        uVar13 = uVar13 + 1;
        iStack_c0 = iStack_c0 + 4;
        puStack_d0 = puStack_d0 + 4;
        iStack_e0 = iStack_e0 + 0x100;
      } while (uVar13 < 7);
    }
  }
  return;
}

// 0x0017a6f0  size 0x5d0
void Car_DrawReflection(int param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iStack_2b0;
  int iStack_298;
  int iStack_294;
  uint uStack_290;
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined4 uStack_214;
  undefined2 uStack_210;
  undefined1 uStack_20e;
  undefined1 auStack_160 [352];
  
  uVar13 = uRam004301a8;
  iVar6 = iRam004301a0;
  iVar8 = (int)param_2;
  maybe_Pkt_InitLayers(auStack_160,param_2,0x436180,0,1);
  uStack_290 = 0;
  do {
    if (*(int *)(param_1 + 0x20fc) != 0xfa) {
      Obj_Init(&uStack_210);
      uStack_210 = 8;
      uStack_20e = 0x28;
      Obj_SetBlend(&uStack_210,5,3,0);
      iVar1 = *(int *)(param_1 + 0x20f0);
      bVar3 = false;
      bVar2 = false;
      iVar10 = iVar1 + -1;
      if (iVar10 < 0) {
        iVar10 = iVar1 + 0xf9;
      }
      uVar4 = uVar13;
      if (*(int *)(param_1 + iVar10 * 0x20 + 0x1c8) != 3) {
        while (iVar5 = iVar10, iVar5 != iVar1) {
          iVar10 = 0;
          if (!bVar2) {
            iVar9 = param_1 + iVar5 * 0x20;
            if (*(int *)(iVar9 + 0x1c8) == 1) {
              sceVu0CopyVector(auStack_250,iVar9 + 0x1b0);
              bVar2 = true;
              sceVu0CopyVector(&fStack_230,auStack_250);
              sceVu0CopyVector(&fStack_220,auStack_250);
              iStack_294 = iVar5;
            }
          }
          if ((bVar2) && (!bVar3)) {
            iVar9 = param_1 + iVar5 * 0x20;
            if (*(int *)(iVar9 + 0x1c8) == 0) {
              sceVu0CopyVector(auStack_240,iVar9 + 0x1b0);
              bVar3 = true;
              iStack_298 = iVar5;
            }
          }
          uVar14 = uVar4;
          if ((bVar2) && (bVar3)) {
            sceVu0SubVector(auStack_260,auStack_240,iVar8);
            sceVu0SubVector(auStack_270,auStack_250,iVar8);
            fVar16 = (float)sceVu0InnerProduct(auStack_260,iVar8 + 0x40);
            fVar17 = (float)sceVu0InnerProduct(auStack_270,iVar8 + 0x40);
            if (fVar17 < fVar16) {
              fVar18 = fVar17;
            }
            else {
              fVar18 = fVar16;
            }
            if ((0.0 <= fVar16) || (0.0 <= fVar17)) {
              if ((fVar18 <= 50.0) || (fVar17 * fVar16 <= 0.0)) {
                iVar9 = iStack_294 - iStack_298;
                if (iVar9 < 1) {
                  iVar9 = iVar9 + 0xfa;
                }
                sceVu0CopyVector(&fStack_230,auStack_250);
                sceVu0CopyVector(&fStack_220,auStack_250);
                uVar14 = uVar13;
                if (0 < iVar9) {
                  iVar12 = iVar6 + uVar13 * 0x30;
                  iVar7 = iStack_294;
                  do {
                    iStack_2b0 = iVar7 + -1;
                    fVar16 = 1.0;
                    fVar17 = 1.0;
                    if (iStack_2b0 < 0) {
                      iStack_2b0 = iVar7 + 0xf9;
                    }
                    iVar15 = param_1 + iStack_2b0 * 0x20;
                    if (*(uint *)(iVar15 + 0x1cc) < 0xb4) {
                      fVar16 = (float)*(uint *)(iVar15 + 0x1cc) * 0.0055555557;
                    }
                    iVar7 = param_1 + iVar7 * 0x20;
                    if (*(uint *)(iVar7 + 0x1cc) < 0xb4) {
                      fVar17 = (float)*(uint *)(iVar7 + 0x1cc) * 0.0055555557;
                    }
                    sceVu0CopyVector(iVar12,iVar15 + 0x1b0);
                    pfVar11 = (float *)(iVar7 + 0x1b0);
                    sceVu0CopyVector(iVar12 + 0x20,pfVar11);
                    *(undefined4 *)(iVar12 + 0x10) = 0;
                    *(undefined4 *)(iVar12 + 0x14) = 0;
                    *(float *)(iVar12 + 0x18) = *(float *)(iVar15 + 0x1c0) * fVar16;
                    *(float *)(iVar12 + 0x1c) = *(float *)(iVar7 + 0x1c0) * fVar17;
                    *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(iVar15 + 0x1c4);
                    *(undefined4 *)(iVar12 + 0x2c) = *(undefined4 *)(iVar7 + 0x1c4);
                    if (*pfVar11 < fStack_230) {
                      fStack_230 = *pfVar11;
                    }
                    if (*(float *)(iVar7 + 0x1b4) < fStack_22c) {
                      fStack_22c = *(float *)(iVar7 + 0x1b4);
                    }
                    if (*(float *)(iVar7 + 0x1b8) < fStack_228) {
                      fStack_228 = *(float *)(iVar7 + 0x1b8);
                    }
                    if (fStack_220 < *pfVar11) {
                      fStack_220 = *pfVar11;
                    }
                    if (fStack_21c < *(float *)(iVar7 + 0x1b4)) {
                      fStack_21c = *(float *)(iVar7 + 0x1b4);
                    }
                    if (fStack_218 < *(float *)(iVar7 + 0x1b8)) {
                      fStack_218 = *(float *)(iVar7 + 0x1b8);
                    }
                    uVar13 = uVar13 + 1;
                    iVar12 = iVar12 + 0x30;
                    iVar10 = iVar10 + 1;
                    iVar9 = iVar9 + -1;
                    if (0x300 < uVar13) {
                      return;
                    }
                    uVar14 = uVar13;
                    iVar7 = iStack_2b0;
                  } while (0 < iVar9);
                }
              }
              else {
                iVar10 = 0;
              }
            }
            else {
              iVar10 = 0;
            }
            uStack_224 = 0x3f800000;
            uStack_214 = 0x3f800000;
            if (iVar10 != 0) {
              Obj_SetTexture(&uStack_210,iVar10,iVar6 + uVar4 * 0x30,&fStack_230);
              Model_Draw(auStack_160,&uStack_210);
            }
            bVar3 = false;
            bVar2 = false;
            uRam004301a8 = uRam004301a8 + (uVar14 - uVar4);
            uVar13 = uVar14;
          }
          uVar4 = uVar14;
          iVar10 = iVar5 + -1;
          if (iVar5 + -1 < 0) {
            iVar10 = iVar5 + 0xf9;
          }
        }
      }
    }
    uStack_290 = uStack_290 + 1;
    param_1 = param_1 + 0x1f60;
    if (3 < uStack_290) {
      return;
    }
  } while( true );
}

// 0x0017acc0  size 0xf8
void Skid_AddSegment(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  param_4 = param_4 * 0x1f60;
  iVar4 = param_4 + param_3;
  iVar2 = *(int *)(iVar4 + 0x20f0);
  piVar3 = (int *)(iVar4 + 0x1c8 + iVar2 * 0x20);
  if (*piVar3 == 3) {
    iVar1 = *(int *)(iVar4 + 0x20f8);
    if (iVar1 < 0xfb) {
      if (iVar1 < 0x10) {
        if (iVar1 != 0xf) {
          *(undefined4 *)(iVar4 + 0x20f4) = 2;
          return;
        }
        iVar1 = iVar2 + 1;
        if (0xf9 < iVar1) {
          iVar1 = iVar2 + -0xf9;
        }
        if (*(int *)(iVar4 + 0x1c8 + iVar1 * 0x20) != 3) {
          *(undefined4 *)(param_4 + param_3 + 0x20f4) = 0;
          return;
        }
        *piVar3 = 0;
      }
      else {
        iVar4 = iVar2 + -1;
        if (iVar4 < 0) {
          iVar4 = iVar2 + 0xf9;
        }
        *piVar3 = 1;
        iVar2 = iVar4 * 0x20 + param_4 + param_3;
        if (*(int *)(iVar2 + 0x1c8) != 0) {
          *(undefined4 *)(iVar2 + 0x1c8) = 2;
        }
      }
      param_4 = param_4 + param_3;
      *(undefined4 *)(param_4 + 0x20f4) = 1;
      *(undefined4 *)(param_4 + 0x2100) = param_1;
      *(undefined4 *)(param_4 + 0x2104) = param_2;
    }
    else {
      *(undefined4 *)(iVar4 + 0x20f4) = 2;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x20f4) = 0;
  }
  return;
}

// 0x0017adc0  size 0xe0
void Skid_UpdateWheel(int param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  
  Skid_ResetCar();
  if (param_3 < 4) {
    iVar2 = (int)param_3 * 0x20;
    puVar3 = (undefined4 *)(iVar2 + param_1 + 0x130);
    if (*(int *)(iVar2 + param_1 + 0x130) == -1) {
      lVar1 = PtclSys_Create(0x30b7f8);
      *puVar3 = (int)lVar1;
      if (lVar1 == -1) {
        return;
      }
    }
    *(undefined4 *)(iVar2 + param_1 + 0x134) = 1;
    lVar1 = PtclSys_Get(*puVar3);
    if (lVar1 == 0) {
      *puVar3 = 0xffffffff;
      *(undefined4 *)(iVar2 + param_1 + 0x134) = 0;
    }
    else {
      *(undefined4 *)((int)lVar1 + 0x124) = 0x42700000;
      *(undefined4 *)((int)lVar1 + 0x128) = 0;
      sceVu0CopyVector(param_1 + iVar2 + 0x140,param_2);
    }
  }
  return;
}

// 0x0017aea0  size 0xe8
void Skid_EmitPoint(undefined4 param_1,int param_2,ulong param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_3 < 4) {
    iVar3 = (int)param_3 * 8;
    iVar2 = iVar3 + param_2;
    puVar4 = (undefined4 *)(iVar2 + 0xe0);
    if (*(int *)(iVar2 + 0xe0) == -1) {
      if (param_4 == 0) {
        lVar1 = PtclSys_Create(0x30b808);
        *puVar4 = (int)lVar1;
      }
      else {
        lVar1 = PtclSys_Create(0x30b800);
        *puVar4 = (int)lVar1;
      }
      if (lVar1 == -1) {
        return;
      }
    }
    iVar3 = iVar3 + param_2;
    *(undefined4 *)(iVar3 + 0xe4) = 1;
    lVar1 = PtclSys_Get(*puVar4);
    if (lVar1 == 0) {
      *puVar4 = 0xffffffff;
      *(undefined4 *)(iVar3 + 0xe4) = 0;
    }
    else {
      *(undefined4 *)((int)lVar1 + 0x124) = param_1;
      *(undefined4 *)((int)lVar1 + 0x128) = 0;
    }
  }
  return;
}

// 0x0017af90  size 0x90
void Skid_UpdateAll(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  Skid_ResetCar();
  uVar1 = 0;
  do {
    if ((param_2 & 1 << (uVar1 & 0x1f)) != 0) {
      Skid_EmitPoint(0x41a00000,param_1,uVar1,param_3);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}

// 0x0017b030  size 0x14c
void Skid_UpdateCar(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  Skid_ResetCar();
  uVar3 = 0;
  iVar2 = param_3;
  do {
    if (((param_4 & 1 << (uVar3 & 0x1f)) != 0) && (uVar3 < 4)) {
      if (*(int *)(iVar2 + 0x100) == -1) {
        lVar1 = PtclSys_Create(0x30b7e8);
        *(int *)(iVar2 + 0x100) = (int)lVar1;
        if (lVar1 == -1) goto LAB_0017b0f0;
      }
      *(undefined4 *)(iVar2 + 0x104) = 1;
      lVar1 = PtclSys_Get(*(undefined4 *)(iVar2 + 0x100));
      if (lVar1 == 0) {
        *(undefined4 *)(iVar2 + 0x100) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x104) = 0;
      }
      else {
        *(undefined4 *)((int)lVar1 + 0x124) = param_1;
        *(undefined4 *)((int)lVar1 + 0x128) = 0;
      }
    }
LAB_0017b0f0:
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 8;
    if (3 < uVar3) {
      if (*(int *)(param_3 + 0x120) == -1) {
        lVar1 = PtclSys_Create(0x30b7f0);
        *(int *)(param_3 + 0x120) = (int)lVar1;
        if (lVar1 == -1) {
          return;
        }
      }
      *(undefined4 *)(param_3 + 0x124) = 1;
      lVar1 = PtclSys_Get(*(undefined4 *)(param_3 + 0x120));
      if (lVar1 == 0) {
        *(undefined4 *)(param_3 + 0x120) = 0xffffffff;
        *(undefined4 *)(param_3 + 0x124) = 0;
      }
      else {
        *(undefined4 *)((int)lVar1 + 0x124) = param_2;
        *(undefined4 *)((int)lVar1 + 0x128) = 0;
      }
      return;
    }
  } while( true );
}

// 0x0017b180  size 0x100
void Skid_UpdateCarEx(int param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  Skid_ResetCar();
  uVar3 = 0;
  iVar2 = param_1;
  do {
    if ((param_2 & 1 << (uVar3 & 0x1f)) != 0) {
      if (uVar3 < 4) {
        if (*(int *)(iVar2 + 0xc0) == -1) {
          lVar1 = PtclSys_Create(0x30b7e0);
          *(int *)(iVar2 + 0xc0) = (int)lVar1;
          if (lVar1 == -1) goto LAB_0017b220;
        }
        *(undefined4 *)(iVar2 + 0xc4) = 1;
        lVar1 = PtclSys_Get(*(undefined4 *)(iVar2 + 0xc0));
        if (lVar1 == 0) {
          *(undefined4 *)(iVar2 + 0xc0) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0xc4) = 0;
        }
        else {
          *(undefined4 *)((int)lVar1 + 0x124) = 0x41700000;
          *(undefined4 *)((int)lVar1 + 0x128) = 0;
        }
      }
LAB_0017b220:
      Skid_AddSegment(0x42800000,0x3e4ccccd,param_1,uVar3);
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 8;
    if (3 < uVar3) {
      return;
    }
  } while( true );
}

// 0x0017b290  size 0xc0
void Skid_ResetCar(int param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = param_1;
  do {
    if ((*(int *)(iVar2 + 0xc0) != -1) && (lVar1 = PtclSys_Get(), lVar1 == 0)) {
      *(undefined4 *)(iVar2 + 0xc0) = 0xffffffff;
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 8;
  } while (uVar3 < 4);
  uVar3 = 0;
  do {
    if ((*(int *)(param_1 + 0x130) != -1) && (lVar1 = PtclSys_Get(), lVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
    }
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 0x20;
  } while (uVar3 < 4);
  return;
}

// 0x0017b360  size 0x628
void Skid_Draw(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  lVar3 = RaceCar_Get(param_2);
  if (lVar3 != 0) {
    uVar9 = 0;
    iVar8 = param_1;
    do {
      iVar1 = (int)lVar3;
      if (*(int *)(iVar8 + 0x130) != -1) {
        lVar5 = PtclSys_Get();
        if (lVar5 == 0) {
          *(undefined4 *)(iVar8 + 0x130) = 0xffffffff;
        }
        else {
          puVar2 = (undefined4 *)PhysBody_GetRotation(*(undefined4 *)(iVar1 + 0x154));
          uStack_10 = *puVar2;
          uStack_c = puVar2[1];
          uStack_8 = puVar2[2];
          uStack_4 = puVar2[3];
          puVar2 = (undefined4 *)PhysBody_GetWorldMatrix(*(undefined4 *)(iVar1 + 0x154));
          Mat34_Identity(auStack_a0);
          Quat_ToMat33(auStack_a0,&uStack_10);
          sceVu0CopyVector(auStack_50,auStack_a0);
          sceVu0CopyVector(auStack_40,auStack_90);
          sceVu0CopyVector(auStack_30,auStack_80);
          sceVu0CopyVector(auStack_20,auStack_70);
          uStack_60 = *puVar2;
          uStack_5c = puVar2[1];
          uStack_58 = puVar2[2];
          uStack_54 = 0x3f800000;
          sceVu0TransMatrix(auStack_50,auStack_50,&uStack_60);
          iVar7 = (int)lVar5;
          sceVu0ApplyMatrix(iVar7 + 0xc0,auStack_50,iVar8 + 0x140);
          maybe_Vu0_UnitMatrix(auStack_e0);
          maybe_Vu0_SetUnitW(auStack_20);
          maybe_Vu0_RotMatrixX(0x3fc90fdb,auStack_e0,auStack_e0);
          sceVu0MulMatrix(iVar7 + 0xd0,auStack_50,auStack_e0);
          if (*(int *)(iVar8 + 0x134) == 0) {
            *(undefined4 *)(iVar7 + 0x124) = 0;
            *(undefined4 *)(iVar7 + 0x128) = 0;
          }
          *(undefined4 *)(iVar8 + 0x134) = 0;
        }
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 0x20;
    } while (uVar9 < 4);
    if (*(int *)(param_1 + 0x120) != -1) {
      lVar5 = PtclSys_Get();
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      }
      else {
        uVar4 = PhysBody_GetWorldMatrix(*(undefined4 *)(iVar1 + 0x154));
        iVar8 = (int)lVar5;
        sceVu0CopyVector(iVar8 + 0xc0,uVar4);
        maybe_Vu0_UnitMatrix(iVar8 + 0xd0);
        if (*(int *)(param_1 + 0x124) == 0) {
          *(undefined4 *)(iVar8 + 0x124) = 0;
          *(undefined4 *)(iVar8 + 0x128) = 0;
        }
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
    }
    uVar9 = 0;
    iVar8 = param_1;
    do {
      iVar1 = RaceCar_GetWheelFx(lVar3,uVar9);
      if (*(int *)(param_1 + 0xc0) != -1) {
        lVar5 = PtclSys_Get();
        if (lVar5 == 0) {
          *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
        }
        else {
          iVar7 = (int)lVar5;
          sceVu0CopyVector(iVar7 + 0xc0,iVar1 + 0x10);
          maybe_Vu0_UnitMatrix(iVar7 + 0xd0);
          if (*(int *)(param_1 + 0xc4) == 0) {
            *(undefined4 *)(iVar7 + 0x124) = 0;
            *(undefined4 *)(iVar7 + 0x128) = 0;
          }
          *(undefined4 *)(param_1 + 0xc4) = 0;
        }
      }
      if (*(int *)(param_1 + 0xe0) != -1) {
        lVar5 = PtclSys_Get();
        if (lVar5 == 0) {
          *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
        }
        else {
          iVar7 = (int)lVar5;
          sceVu0CopyVector(iVar7 + 0xc0,iVar1 + 0x10);
          maybe_Vu0_UnitMatrix(iVar7 + 0xd0);
          if (*(int *)(param_1 + 0xe4) == 0) {
            *(undefined4 *)(iVar7 + 0x124) = 0;
            *(undefined4 *)(iVar7 + 0x128) = 0;
          }
          *(undefined4 *)(param_1 + 0xe4) = 0;
        }
      }
      if (*(int *)(param_1 + 0x100) != -1) {
        lVar5 = PtclSys_Get();
        if (lVar5 == 0) {
          *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
        }
        else {
          iVar7 = (int)lVar5;
          sceVu0CopyVector(iVar7 + 0xc0,iVar1 + 0x10);
          maybe_Vu0_UnitMatrix(iVar7 + 0xd0);
          if (*(int *)(param_1 + 0x104) == 0) {
            *(undefined4 *)(iVar7 + 0x124) = 0;
            *(undefined4 *)(iVar7 + 0x128) = 0;
          }
          *(undefined4 *)(param_1 + 0x104) = 0;
        }
      }
      iVar7 = *(int *)(iVar8 + 0x20f4);
      if (iVar7 == 0) {
        if (*(int *)(iVar8 + 0x20f8) == 0x10) {
          *(undefined4 *)(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1cc) = 600;
          sceVu0CopyVector(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1b0,iVar1 + 0x10);
          iVar1 = iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20;
          *(float *)(iVar1 + 0x1b4) = *(float *)(iVar1 + 0x1b4) + 0.05;
          *(undefined4 *)(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1c0) =
               *(undefined4 *)(iVar8 + 0x2100);
          *(undefined4 *)(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1c4) =
               *(undefined4 *)(iVar8 + 0x2104);
          *(undefined4 *)(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1c8) = 1;
          iVar1 = *(int *)(iVar8 + 0x20f0) + 1;
          if (iVar1 < 0xfa) {
            *(int *)(iVar8 + 0x20f0) = iVar1;
          }
          else {
            *(int *)(iVar8 + 0x20f0) = *(int *)(iVar8 + 0x20f0) + -0xf9;
          }
          *(int *)(iVar8 + 0x20fc) = *(int *)(iVar8 + 0x20fc) + -1;
        }
        *(undefined4 *)(iVar8 + 0x20f8) = 0;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 != 1) goto LAB_0017b5e8;
          *(undefined4 *)(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1cc) = 600;
          sceVu0CopyVector(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1b0,iVar1 + 0x10);
          iVar1 = iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20;
          *(float *)(iVar1 + 0x1b4) = *(float *)(iVar1 + 0x1b4) + 0.05;
          *(undefined4 *)(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1c0) =
               *(undefined4 *)(iVar8 + 0x2100);
          *(undefined4 *)(iVar8 + *(int *)(iVar8 + 0x20f0) * 0x20 + 0x1c4) =
               *(undefined4 *)(iVar8 + 0x2104);
          iVar1 = *(int *)(iVar8 + 0x20f0) + 1;
          if (iVar1 < 0xfa) {
            *(int *)(iVar8 + 0x20f0) = iVar1;
          }
          else {
            *(int *)(iVar8 + 0x20f0) = *(int *)(iVar8 + 0x20f0) + -0xf9;
          }
          *(int *)(iVar8 + 0x20fc) = *(int *)(iVar8 + 0x20fc) + -1;
        }
        *(undefined4 *)(iVar8 + 0x20f4) = 0;
        *(int *)(iVar8 + 0x20f8) = *(int *)(iVar8 + 0x20f8) + 1;
      }
LAB_0017b5e8:
      uVar6 = 0;
      iVar1 = iVar8;
      do {
        if ((*(int *)(iVar1 + 0x1cc) != 0) &&
           (iVar7 = *(int *)(iVar1 + 0x1cc) + -1, *(int *)(iVar1 + 0x1cc) = iVar7, iVar7 == 0)) {
          iVar7 = uVar6 + 1;
          if (0xf9 < iVar7) {
            iVar7 = uVar6 - 0xf9;
          }
          iVar7 = iVar8 + iVar7 * 0x20;
          if (*(int *)(iVar7 + 0x1c8) == 1) {
            *(undefined4 *)(iVar7 + 0x1c8) = 3;
            *(undefined4 *)(iVar7 + 0x1cc) = 0;
            *(int *)(iVar8 + 0x20fc) = *(int *)(iVar8 + 0x20fc) + 1;
          }
          else {
            *(undefined4 *)(iVar7 + 0x1c8) = 0;
          }
          *(undefined4 *)(iVar1 + 0x1c8) = 3;
          *(undefined4 *)(iVar1 + 0x1cc) = 0;
          *(int *)(iVar8 + 0x20fc) = *(int *)(iVar8 + 0x20fc) + 1;
        }
        iVar7 = *(int *)(iVar8 + 0x20f0) + 1;
        if (0xf9 < iVar7) {
          iVar7 = 0;
        }
        uVar6 = uVar6 + 1;
        *(int *)(iVar8 + 0x20f0) = iVar7;
        iVar1 = iVar1 + 0x20;
      } while (uVar6 < 0xfa);
      uVar9 = uVar9 + 1;
      param_1 = param_1 + 8;
      iVar8 = iVar8 + 0x1f60;
    } while (uVar9 < 4);
  }
  return;
}

// 0x0017b990  size 0x184
void Skid_Clear(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar5 = 0;
  uStack_10 = DAT_0030b820;
  uStack_c = DAT_0030b824;
  uStack_8 = DAT_0030b828;
  uStack_4 = DAT_0030b82c;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = 0;
  iVar2 = param_1;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0xc0) = 0xffffffff;
    uVar4 = 0;
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    *(undefined4 *)(iVar3 + 0xe0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0xe4) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x104) = 0;
    *(undefined4 *)(iVar2 + 0x20fc) = 0xfa;
    *(undefined4 *)(iVar2 + 0x20f0) = 0;
    *(undefined4 *)(iVar2 + 0x20f4) = 0;
    *(undefined4 *)(iVar2 + 0x20f8) = 0;
    iVar1 = iVar2;
    do {
      sceVu0CopyVector(iVar1 + 0x1b0,&uStack_10);
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar1 + 0x1c8) = 3;
      *(undefined4 *)(iVar1 + 0x1cc) = 0;
      iVar1 = iVar1 + 0x20;
    } while (uVar4 < 0xfa);
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 8;
    iVar2 = iVar2 + 0x1f60;
  } while (uVar5 < 4);
  MotionBlur_Setup(param_1);
  uVar5 = 0;
  *(undefined1 *)(param_1 + 0xb8f4) = 0;
  do {
    uVar4 = 0;
    iVar2 = param_1;
    do {
      sceVu0CopyVector(iVar2 + 0x7f40,&uStack_10);
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar2 + 0x7f30) = 0;
      iVar2 = iVar2 + 0x30;
    } while (uVar4 < 0xb);
    uVar5 = uVar5 + 1;
    param_1 = param_1 + 0x210;
  } while (uVar5 < 0x1c);
  return;
}

// 0x0017bb20  size 0x7c
void Skid_DrawAll(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (uRam004301ac != 0) {
    iVar1 = 0;
    do {
      if (iRam004301b0 + iVar1 != 0) {
        Skid_Draw(iRam004301b0 + iVar1,uVar2);
      }
      iVar1 = iVar1 + 0xb900;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uRam004301ac);
  }
  return;
}

// 0x0017bba0  size 0x140
void Car_DrawAllEffects(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_10 [16];
  
  uVar3 = 0;
  do {
    lVar1 = PtclSys_Get(uVar3);
    if (lVar1 != 0) {
      PtclSys_Draw(lVar1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x3b);
  uVar3 = 0;
  iVar5 = 0x30b810;
  do {
    iVar2 = ((uint)*(byte *)(iVar5 + 2) * 0x18 - (uint)*(byte *)(iVar5 + 2)) * 0x40;
    if (*(int *)(iVar2 + 0x431684) != 0) {
      sceVu0SubVector(auStack_10,iVar2 + 0x431110,&g_Views + iVar2);
      sceVu0Normalize(iVar2 + 0x431140,auStack_10);
      uVar6 = 0;
      if (uRam004301ac != 0) {
        iVar4 = 0;
        do {
          if (iRam004301b0 + iVar4 != 0) {
            Car_DrawReflection(iRam004301b0 + iVar4,&g_Views + iVar2);
          }
          iVar4 = iVar4 + 0xb900;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uRam004301ac);
      }
    }
    uVar3 = uVar3 + 1;
    iVar5 = iVar5 + 3;
  } while (uVar3 < 3);
  Course_UpdateEnvironment();
  return;
}

// 0x0017bce0  size 0x5c
void Skid_ClearAll(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    Skid_Clear(iRam004301b0 + iVar1);
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0xb900;
  } while (uVar2 < 3);
  PtclSys_RemoveAll();
  return;
}

// 0x0017bd40  size 0x40
void Skid_Free(void)

{
  if (iRam004301b0 != 0) {
    Mem_Free();
  }
  iRam004301b0 = 0;
  uRam004301ac = 0;
  PtclSys_Shutdown();
  return;
}

// 0x0017bd80  size 0x9c
void Skid_Alloc(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  PtclSys_Init();
  uRam004301ac = 3;
  iRam004301b0 = Mem_Alloc16(0x22b00,param_1);
  uVar1 = 0;
  iVar2 = 0;
  do {
    Skid_Clear(iRam004301b0 + iVar2);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0xb900;
  } while (uVar1 < 3);
  uRam004301a8 = 0;
  uRam004301a4 = 1;
  uRam004301a0 = 0;
  return;
}

// 0x0017be20  size 0x60
void Race_Shutdown(void)

{
  if (iRam0036f1d4 != 0) {
    Mem_Free();
  }
  GameState_Free();
  Profile_FreeAll();
  RivalSchedule_Free();
  RaceTbl_Free();
  Options_Free();
  RaceTables_Free();
  Replay_Free();
  return;
}

// 0x0017be80  size 0xb4
void Race_Init(undefined8 param_1)

{
  Render_SetInterlace(1);
  iRam0036f1d4 = Mem_Alloc16(0x18,param_1);
  RaceCtx_SetMode(0);
  RaceCtx_Set_4(0);
  RaceCtx_Set_8(0x13);
  RaceCtx_Set_9(6);
  RaceCtx_SetDefaults(iRam0036f1d4 + 0x10);
  *(undefined1 *)(iRam0036f1d4 + 0x15) = 1;
  GameState_Alloc(param_1);
  Profile_InitTable(param_1);
  Profile_Create(0,param_1);
  RivalSchedule_Alloc(param_1);
  RaceTbl_Alloc(param_1);
  Replay_Alloc(param_1);
  RaceTables_Alloc(param_1);
  Options_Alloc(param_1);
  return;
}

// 0x0017bf40  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_Race_GetMode(void)

{
  return _g_RaceSlotTbl;
}

// 0x0017bf50  size 0x3c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Race_SetCarSlot(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xc) && (param_2 < 0x21)) {
    uVar1 = 1;
    *(int *)(_g_RaceSlotTbl + (int)param_1 * 4) = (int)param_2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0017bf90  size 0x2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceTables_Free(void)

{
  if (_g_RaceSlotTbl != 0) {
    Mem_Free();
    _g_RaceSlotTbl = 0;
  }
  return;
}

// 0x0017bfc0  size 0x2ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceTables_Alloc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  _g_RaceSlotTbl = Mem_Alloc16(0x9944,param_1);
  puVar7 = &uStack_30;
  uStack_2c = DAT_0030b9a4;
  uStack_30 = DAT_0030b9a0;
  uStack_24 = DAT_0030b9ac;
  uStack_28 = DAT_0030b9a8;
  uStack_1c = DAT_0030b9b4;
  uStack_20 = DAT_0030b9b0;
  iVar8 = 0;
  uStack_14 = DAT_0030b9bc;
  uStack_18 = DAT_0030b9b8;
  uStack_10 = DAT_0030b9c0;
  uStack_c = DAT_0030b9c4;
  uStack_8 = DAT_0030b9c8;
  iVar6 = 0;
  uStack_4 = DAT_0030b9cc;
  do {
    iVar8 = iVar8 + 6;
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    uVar4 = puVar7[4];
    uVar5 = puVar7[5];
    *(undefined4 *)(_g_RaceSlotTbl + iVar6) = *puVar7;
    puVar7 = puVar7 + 6;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 4) = uVar1;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 8) = uVar2;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0xc) = uVar3;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x10) = uVar4;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x14) = uVar5;
    iVar6 = iVar6 + 0x18;
  } while (iVar8 < 0xc);
  iVar8 = 0;
  iVar6 = 0;
  do {
    iVar8 = iVar8 + 6;
    *(undefined2 *)(_g_RaceSlotTbl + iVar6 + 0x874) = 0;
    *(undefined1 *)(_g_RaceSlotTbl + iVar6 + 0x876) = 0;
    *(undefined2 *)(_g_RaceSlotTbl + iVar6 + 0x10cc) = 0;
    *(undefined1 *)(_g_RaceSlotTbl + iVar6 + 0x10ce) = 0;
    *(undefined2 *)(_g_RaceSlotTbl + iVar6 + 0x1924) = 0;
    *(undefined1 *)(_g_RaceSlotTbl + iVar6 + 0x1926) = 0;
    *(undefined2 *)(_g_RaceSlotTbl + iVar6 + 0x217c) = 0;
    *(undefined1 *)(_g_RaceSlotTbl + iVar6 + 0x217e) = 0;
    *(undefined2 *)(_g_RaceSlotTbl + iVar6 + 0x29d4) = 0;
    *(undefined1 *)(_g_RaceSlotTbl + iVar6 + 0x29d6) = 0;
    *(undefined2 *)(_g_RaceSlotTbl + iVar6 + 0x322c) = 0;
    *(undefined1 *)(_g_RaceSlotTbl + iVar6 + 0x322e) = 0;
    iVar6 = iVar6 + 0x3210;
  } while (iVar8 < 0x12);
  iVar8 = 0;
  iVar6 = 0;
  do {
    iVar8 = iVar8 + 8;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x9660) = 0;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x9664) = 0;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x9668) = 0;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x966c) = 0;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x9670) = 0;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x9674) = 0;
    *(undefined4 *)(_g_RaceSlotTbl + iVar6 + 0x9678) = 0;
    iVar9 = _g_RaceSlotTbl + iVar6;
    iVar6 = iVar6 + 0x20;
    *(undefined4 *)(iVar9 + 0x967c) = 0;
  } while (iVar8 < 0xb1);
  *(undefined4 *)(iVar8 * 4 + _g_RaceSlotTbl + 0x9660) = 0;
  return;
}

