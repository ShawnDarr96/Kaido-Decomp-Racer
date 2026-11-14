// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0029c000 - 0x002a0000
#include "ghidra_types.h"

// 0x0029c040  size 0x224
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_0029c040(int param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar3 = Profile_Get(0);
  uVar5 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar5) == 0) {
    uVar5 = 0x100000;
  }
  else if (uVar5 == 0x80000) {
    uVar5 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar5 = 0x100000;
  }
  if (uVar5 == 2) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    Se_PlayMenu(7);
  }
  else if (uVar5 == 1) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    Se_PlayMenu(7);
  }
  else if (uVar5 == 0x10) {
    iVar1 = *(int *)(param_1 + 0x62c);
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x640) = 3;
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 1;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x640) = 2;
      *(undefined4 *)(param_1 + 4) = 1;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x640) = 1;
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 1;
    }
    else if (iVar1 == 0) {
      uVar4 = Profile_Get(0);
      Profile_GetChapter(uVar4);
      MenuMgr_GetScreenParam(0xc);
      MenuMgr_GetScreenParam(4);
    }
    *(undefined4 *)(param_1 + 0x644) = 2;
    Se_PlayMenu(5);
  }
  else if (uVar5 == 0x20) {
    *(undefined4 *)(param_1 + 0x640) = 0xb;
    *(undefined4 *)(param_1 + 0x644) = 2;
    Se_PlayMenu(6);
  }
  cVar2 = Profile_GetChapter(uVar3);
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x62c) < 4) {
      if (*(int *)(param_1 + 0x62c) < 0) {
        *(undefined4 *)(param_1 + 0x62c) = 3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x62c) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x62c) < 4) {
    if (*(int *)(param_1 + 0x62c) < 1) {
      *(undefined4 *)(param_1 + 0x62c) = 3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x62c) = 1;
  }
  return;
}

// 0x0029c270  size 0xf4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_step_sub_0029c270(int param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = Profile_Get(0);
  cVar2 = Profile_GetChapter(uVar3);
  if (cVar2 == '\x01') {
    *(undefined4 *)(param_1 + 0x62c) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x63c);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x62c) = 1;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x62c) = 2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x62c) = 3;
  }
  else if (*(int *)(_g_MenuMgr + 0x24) == 4) {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  *(undefined1 *)(param_1 + 0xe8) = 8;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_1 + 0x648);
  if ((((iVar1 != 0x14) && (iVar1 != 0x29)) && (iVar1 != 0x2a)) &&
     (lVar4 = scrrace_step_sub_00296600(), lVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x6b8) = 1;
  }
  return;
}

// 0x0029c370  size 0x684
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_step_sub_0029c370(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined1 auStack_6f0 [4];
  undefined4 uStack_6ec;
  undefined1 uStack_6e8;
  undefined1 uStack_6e7;
  undefined2 uStack_6e4;
  undefined2 uStack_6e2;
  undefined4 uStack_6e0;
  undefined1 auStack_6dc [24];
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined2 auStack_6a0 [16];
  undefined2 auStack_680 [42];
  undefined1 uStack_62c;
  undefined4 uStack_628;
  undefined2 uStack_620;
  undefined2 uStack_61e;
  undefined1 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined1 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined1 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined2 uStack_5e8;
  undefined2 uStack_5e6;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 auStack_5dc [23];
  undefined4 auStack_580 [23];
  undefined4 auStack_524 [16];
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined2 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined1 auStack_4a0 [4];
  undefined4 uStack_49c;
  undefined1 uStack_498;
  undefined1 uStack_497;
  undefined2 uStack_494;
  undefined2 uStack_492;
  undefined4 uStack_490;
  undefined1 auStack_48c [24];
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined2 auStack_450 [16];
  undefined2 auStack_430 [42];
  undefined1 uStack_3dc;
  undefined4 uStack_3d8;
  undefined1 uStack_3d0;
  undefined1 uStack_3cf;
  undefined1 uStack_3ce;
  undefined1 uStack_3cd;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined2 uStack_380;
  undefined2 uStack_37e;
  undefined1 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined1 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined2 uStack_348;
  undefined2 uStack_346;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 auStack_33c [23];
  undefined4 auStack_2e0 [23];
  undefined4 auStack_284 [16];
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined2 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined1 auStack_200 [4];
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined1 uStack_1f7;
  undefined2 uStack_1f4;
  undefined2 uStack_1f2;
  undefined4 uStack_1f0;
  undefined1 auStack_1ec [24];
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined2 auStack_1b0 [16];
  undefined2 auStack_190 [42];
  undefined1 uStack_13c;
  undefined4 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined1 auStack_cc [24];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined2 auStack_90 [16];
  undefined2 auStack_70 [42];
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Career_BeginNew();
  RaceCtx_SetMode(1);
  if (param_1[1] == 0) {
    if (param_1[0x112] == -1) {
      uVar6 = Profile_Get(0);
      Profile_AddCar(auStack_6f0,uVar6);
      puVar12 = auStack_6dc;
      puVar11 = auStack_1ec;
      iVar9 = 0x17;
      uStack_1f2 = uStack_6e2;
      auStack_200[0] = auStack_6f0[0];
      uStack_1fc = uStack_6ec;
      uStack_1f8 = uStack_6e8;
      uStack_1f7 = uStack_6e7;
      uStack_1f4 = uStack_6e4;
      uStack_1f0 = uStack_6e0;
      do {
        iVar9 = iVar9 + -1;
        *puVar11 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      } while (0 < iVar9);
      puVar14 = auStack_6a0;
      puVar13 = auStack_1b0;
      iVar9 = 8;
      uStack_1c8 = uStack_6b8;
      uStack_1c4 = uStack_6b4;
      uStack_1c0 = uStack_6b0;
      uStack_1d4 = uStack_6c4;
      uStack_1d0 = uStack_6c0;
      uStack_1cc = uStack_6bc;
      uStack_1bc = uStack_6ac;
      uStack_1b8 = uStack_6a8;
      uStack_1b4 = uStack_6a4;
      do {
        iVar9 = iVar9 + -1;
        uVar5 = puVar14[1];
        *puVar13 = *puVar14;
        puVar13[1] = uVar5;
        puVar14 = puVar14 + 2;
        puVar13 = puVar13 + 2;
      } while (0 < iVar9);
      puVar14 = auStack_680;
      puVar13 = auStack_190;
      iVar9 = 0x15;
      do {
        iVar9 = iVar9 + -1;
        uVar5 = puVar14[1];
        *puVar13 = *puVar14;
        puVar13[1] = uVar5;
        puVar14 = puVar14 + 2;
        puVar13 = puVar13 + 2;
      } while (0 < iVar9);
      uStack_13c = uStack_62c;
      uStack_138 = uStack_628;
    }
    else {
      GameState_Set_3dc((char)param_1[0x112]);
      RivalSchedule_Clear(param_1[7],param_1[0x1aa]);
      uVar5 = RivalDb_FindByName(*(undefined2 *)(param_1 + 0x112));
      RivalDb_Copy(&uStack_620,uVar5);
      puVar10 = auStack_5dc;
      puVar8 = auStack_33c;
      iVar9 = 0x17;
      uStack_370 = uStack_610;
      uStack_368 = uStack_608;
      uStack_364 = uStack_604;
      uStack_37c = uStack_61c;
      uStack_378 = uStack_618;
      uStack_374 = uStack_614;
      uStack_358 = uStack_5f8;
      uStack_380 = uStack_620;
      uStack_37e = uStack_61e;
      uStack_36c = uStack_60c;
      uStack_360 = uStack_600;
      uStack_35c = uStack_5fc;
      uStack_344 = uStack_5e4;
      uStack_354 = uStack_5f4;
      uStack_350 = uStack_5f0;
      uStack_34c = uStack_5ec;
      uStack_348 = uStack_5e8;
      uStack_346 = uStack_5e6;
      uStack_340 = uStack_5e0;
      do {
        iVar9 = iVar9 + -1;
        *puVar8 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
      } while (0 < iVar9);
      puVar10 = auStack_580;
      puVar8 = auStack_2e0;
      iVar9 = 0x17;
      do {
        iVar9 = iVar9 + -1;
        *puVar8 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
      } while (0 < iVar9);
      puVar10 = auStack_524;
      puVar8 = auStack_284;
      iVar9 = 8;
      do {
        iVar9 = iVar9 + -1;
        uVar1 = puVar10[1];
        *puVar8 = *puVar10;
        puVar8[1] = uVar1;
        puVar10 = puVar10 + 2;
        puVar8 = puVar8 + 2;
      } while (0 < iVar9);
      uStack_244 = uStack_4e4;
      uStack_240 = uStack_4e0;
      uStack_23c = uStack_4dc;
      uStack_238 = uStack_4d8;
      uStack_214 = uStack_4b4;
      uStack_234 = uStack_4d4;
      uStack_210 = uStack_4b0;
      uStack_230 = uStack_4d0;
      uStack_20c = uStack_4ac;
      uStack_218 = uStack_4b8;
      uStack_22c = uStack_4cc;
      uStack_228 = uStack_4c8;
      uStack_224 = uStack_4c4;
      uStack_220 = uStack_4c0;
      uStack_208 = uStack_4a8;
      uStack_21c = uStack_4bc;
      uVar6 = Race_GetCourseId(10);
      Opponent_BuildEntry(&uStack_380,0,auStack_200,0xffffffffffffffff,uVar6);
      GameState_Set_3a48(param_1[0x112]);
    }
    uStack_1f0 = *param_1;
    uStack_1fc = 0x89;
    PlayerRecord_Copy(0,auStack_200);
    GameState_Set_e0(1);
    if (param_1[0x39] == -1) {
      if (param_1[9] != -1) {
        RaceResult_Begin();
      }
    }
    else {
      RaceResult_Compute();
    }
    uVar2 = *(undefined1 *)(_g_MenuMgr + 0x620);
    uVar3 = Race_GetCourseId(10);
    uVar6 = Profile_Get(0);
    uVar4 = Profile_GetChapter(uVar6);
    RaceParams_SetDefaults(&uStack_3d0);
    uStack_3cf = 1;
    uStack_3c4 = 0;
    uStack_3c0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = uVar2;
    uStack_3ce = uVar3;
    uStack_3cd = uVar4;
    GameState_SaveHeader(&uStack_3d0);
    if (param_1[0x112] == -1) {
      if (*(char *)(param_1 + 0x120) == '\x01') {
        param_1[0x121] = param_1[9];
      }
      maybe_Color_Unpack(param_1 + 0x11d);
      maybe_Vec3_Copy(param_1 + 0x120);
      if (*(char *)(param_1 + 0x120) == '\t') {
        RaceCtx_Set_8(1);
      }
      else {
        RaceCtx_Set_8(2);
      }
    }
    else {
      RaceCtx_Set_8(3);
    }
  }
  else {
    uVar6 = Profile_Get(0);
    Profile_AddCar(auStack_4a0,uVar6);
    puVar12 = auStack_48c;
    puVar11 = auStack_cc;
    iVar9 = 0x17;
    uStack_d2 = uStack_492;
    auStack_e0[0] = auStack_4a0[0];
    uStack_dc = uStack_49c;
    uStack_d8 = uStack_498;
    uStack_d7 = uStack_497;
    uStack_d4 = uStack_494;
    uStack_d0 = uStack_490;
    do {
      iVar9 = iVar9 + -1;
      *puVar11 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar9);
    puVar14 = auStack_450;
    puVar13 = auStack_90;
    iVar9 = 8;
    uStack_a8 = uStack_468;
    uStack_a4 = uStack_464;
    uStack_a0 = uStack_460;
    uStack_b4 = uStack_474;
    uStack_b0 = uStack_470;
    uStack_ac = uStack_46c;
    uStack_9c = uStack_45c;
    uStack_98 = uStack_458;
    uStack_94 = uStack_454;
    do {
      iVar9 = iVar9 + -1;
      uVar5 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar5;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar9);
    puVar14 = auStack_430;
    puVar13 = auStack_70;
    iVar9 = 0x15;
    do {
      iVar9 = iVar9 + -1;
      uVar5 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar5;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar9);
    uStack_dc = 0x89;
    uStack_1c = uStack_3dc;
    uStack_18 = uStack_3d8;
    uStack_d0 = *param_1;
    PlayerRecord_Copy(0,auStack_e0);
    GameState_Set_e0(1);
    GameState_Set_354(*(undefined1 *)(param_1 + 0x3a));
    uVar6 = RaceCtx_Get_10();
    uVar2 = Race_GetCourseId(10);
    uVar7 = Profile_Get(0);
    uVar3 = Profile_GetChapter(uVar7);
    uVar4 = Race_GetRewardAmount(uVar6,param_1[3],param_1[4],&uStack_4,&uStack_8);
    RaceParams_SetDefaults(&uStack_130);
    uStack_130 = (undefined1)uVar6;
    uStack_124 = uStack_4;
    uStack_120 = uStack_8;
    uStack_128 = 0;
    uStack_12f = uVar4;
    uStack_12e = uVar2;
    uStack_12d = uVar3;
    GameState_SaveHeader(&uStack_130);
    RaceCtx_Set_8(5);
  }
  Career_ContinueStory();
  return;
}

// 0x0029ca00  size 0x158
void menuscr_step_sub_0029ca00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3a) = 8;
  param_1[1] = 0;
  param_1[7] = 0;
  *param_1 = 1;
  RaceSlot_Clear(param_1 + 0x120);
  RaceSlot_Clear(param_1 + 0x11d);
  param_1[0x125] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  RaceParams_Clear(param_1 + 0x159);
  param_1[0x111] = 0;
  param_1[0xf7] = 0;
  iVar2 = 0;
  param_1[0x112] = 0xffffffff;
  puVar1 = param_1;
  do {
    *(undefined2 *)(puVar1 + 0x46) = 0xffff;
    iVar2 = iVar2 + 8;
    *(undefined2 *)((int)puVar1 + 0x11a) = 0xffff;
    *(undefined2 *)(puVar1 + 0x47) = 0xffff;
    *(undefined2 *)((int)puVar1 + 0x11e) = 0xffff;
    *(undefined2 *)(puVar1 + 0x48) = 0xffff;
    *(undefined2 *)((int)puVar1 + 0x122) = 0xffff;
    *(undefined2 *)(puVar1 + 0x49) = 0xffff;
    *(undefined2 *)((int)puVar1 + 0x126) = 0xffff;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 0x15a);
  iVar3 = 0;
  *(undefined2 *)((int)param_1 + iVar2 * 2 + 0x118) = 0xffff;
  *(undefined2 *)((int)param_1 + iVar2 * 2 + 0x11a) = 0xffff;
  puVar1 = param_1;
  do {
    puVar1[0xf8] = 0xffffffff;
    iVar3 = iVar3 + 5;
    puVar1[0xf9] = 0xffffffff;
    puVar1[0xfa] = 0xffffffff;
    puVar1[0xfb] = 0xffffffff;
    puVar1[0xfc] = 0xffffffff;
    puVar1 = puVar1 + 5;
  } while (iVar3 < 0x19);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0xffffffff;
  param_1[0x44] = 0xffffffff;
  param_1[0x45] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[0x39] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[0x18a] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x1ae] = 0;
  return;
}

// 0x0029cb60  size 0x8
/* screen record 0x3275f4 */

void ScrRaceSlotClear_Exit(void)

{
  return;
}

// 0x0029cb70  size 0x176c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3275f4 */

void ScrRaceSlotClear_Update(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = Menu_IsInputIdle(param_1 + 0x648);
  if (lVar2 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_1 + 0x62c);
  switch(*(undefined4 *)(param_1 + 0x638)) {
  case 0:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      if (*(int *)(param_1 + 0x650) == 0xb) {
        *(undefined4 *)(param_1 + 0x644) = 0;
        *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
        *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      }
      else {
        *(undefined4 *)(param_1 + 0x644) = 0;
        *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
        *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
      }
LAB_0029cc60:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_0029c040(param_1);
        goto LAB_0029cc60;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        scrrace_step_sub_0029c270(param_1);
        goto LAB_0029cc60;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 1:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029ccec:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrcareer_step_sub_0029bd40(param_1);
        goto LAB_0029ccec;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        scrcareer_step_sub_0029bf00(param_1);
        goto LAB_0029ccec;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 2:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029cdc0:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_0029bbe0(param_1);
        goto LAB_0029cdc0;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        if (*(char *)(param_1 + 0xe8) != '\b') {
          iVar6 = 0;
          pcVar4 = (char *)0x36ee18;
          do {
            if (*pcVar4 == *(char *)(param_1 + 0xe8)) {
              *(int *)(param_1 + 0x62c) = iVar6;
              break;
            }
            iVar6 = iVar6 + 1;
            pcVar4 = pcVar4 + 1;
          } while (iVar6 < 3);
        }
        *(undefined1 *)(param_1 + 0xe8) = 8;
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        *(undefined4 *)(param_1 + 4) = 0;
        goto LAB_0029cdc0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 3:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029ce4c:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_0029b6b0(param_1);
        goto LAB_0029ce4c;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        scrgarage_step_sub_0029b9b0(param_1);
        goto LAB_0029ce4c;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 4:
    scrcareer_select_sub_0029b5c0(param_1);
    break;
  case 5:
    menuscr_select_sub_0029a0b0(param_1);
    break;
  case 6:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      if (*(int *)(param_1 + 0x640) == 4) {
        *(undefined4 *)(param_1 + 0x62c) = 0xffffffff;
      }
LAB_0029cf00:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrcareer_step_sub_00299060(param_1);
        goto LAB_0029cf00;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x644) = 1;
        menuscr_leaf_sub_00299c10(param_1);
        goto LAB_0029cf00;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 7:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029cf8c:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrgarage_step_sub_00298a20(param_1);
        goto LAB_0029cf8c;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        scrgarage_step_sub_00298df0(param_1);
        goto LAB_0029cf8c;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 8:
    scrrace_select_sub_002987f0(param_1);
    break;
  case 9:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_1 + 0x640);
      Menu_RequestTransition(param_1 + 0x648);
LAB_0029d048:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrrecord_step_sub_00298640(param_1);
        goto LAB_0029d048;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        lVar2 = Options_Get_14();
        if (lVar2 == 0) {
          *(undefined4 *)(param_1 + 0x62c) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x62c) = 0;
        }
        goto LAB_0029d048;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 10:
    if (*(int *)(param_1 + 0x644) == 1) {
      scrcareer_step_sub_0029c370(param_1);
      MenuMgr_GetScreenParam(0xfffffffffffffffe);
    }
    else if (*(int *)(param_1 + 0x644) == 0) {
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      *(undefined4 *)(param_1 + 0x644) = 1;
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x644) == 1) {
      uVar3 = Profile_Get(0);
      Profile_GetChapter(uVar3);
      MenuMgr_GetScreenParam(0xc);
    }
    else if (*(int *)(param_1 + 0x644) == 0) {
      *(undefined4 *)(param_1 + 0x644) = 1;
    }
    break;
  case 0xc:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029d1d0:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if ((uVar5 == 0x10) || (uVar5 == 0x20)) {
          uVar1 = scrgarage_step_sub_00297fa0(param_1);
          *(undefined4 *)(param_1 + 0x640) = uVar1;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(5);
        }
        goto LAB_0029d1d0;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029d1d0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0xd:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0xffffffff;
LAB_0029d2c8:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if ((uVar5 == 0x10) || (uVar5 == 0x20)) {
          *(undefined4 *)(param_1 + 0x640) = 4;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(5);
        }
        goto LAB_0029d2c8;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        *(undefined4 *)(param_1 + 0x62c) = 0;
        goto LAB_0029d2c8;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0xe:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
LAB_0029d338:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrcareer_step_sub_00297e10(param_1);
        goto LAB_0029d338;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029d338;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0xf:
    menuscr_select_sub_00297ba0(param_1);
    break;
  case 0x10:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      if (*(int *)(param_1 + 0x640) == 4) {
        *(undefined4 *)(param_1 + 0x62c) = 0xffffffff;
      }
LAB_0029d3ec:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_00297890(param_1);
        goto LAB_0029d3ec;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        menuscr_leaf_sub_00297b20(param_1);
        goto LAB_0029d3ec;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x11:
  case 0x28:
  case 0x2d:
    break;
  case 0x12:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029d478:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_002975e0(param_1);
        goto LAB_0029d478;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        menuscr_step_sub_002977b0(param_1);
        goto LAB_0029d478;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x13:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029d538:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_00297450(param_1);
        goto LAB_0029d538;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        if (*(int *)(param_1 + 0x478) != -1) {
          iVar7 = 0;
          iVar6 = param_1;
          do {
            if (*(int *)(iVar6 + 0x3e0) == -1) break;
            if (*(int *)(param_1 + 0x478) == *(int *)(iVar6 + 0x3e0)) {
              *(int *)(param_1 + 0x62c) = iVar7;
              break;
            }
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar7 < 0x162);
        }
        RaceSlot_Clear(param_1 + 0x474);
        if (*(int *)(param_1 + 0x648) == 0x24) {
          *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_1 + 0x6a0);
        }
        goto LAB_0029d538;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x14:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      if ((*(int *)(param_1 + 0x640) != 0x2e) && (lVar2 = scrrace_step_sub_00296600(), lVar2 != 0))
      {
        *(undefined4 *)(param_1 + 0x6b8) = 1;
      }
LAB_0029d5e0:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrrecord_step_sub_00297120(param_1);
        goto LAB_0029d5e0;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029d5e0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x15:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029d660:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_00296fe0(param_1);
        goto LAB_0029d660;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029d660;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x16:
    scrcareer_select_sub_00296e10(param_1);
    break;
  case 0x17:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029d95c:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if (uVar5 == 0x10) {
          *(undefined4 *)(param_1 + 0x640) = 0x18;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(5);
        }
        else if (uVar5 == 0x20) {
          *(undefined4 *)(param_1 + 0x640) = 4;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(6);
        }
        goto LAB_0029d95c;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029d95c;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x18:
    scrcareer_select_sub_00296a90(param_1);
    break;
  case 0x19:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029d754:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if (uVar5 == 0x10) {
          *(undefined4 *)(param_1 + 0x640) = 0;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(5);
        }
        goto LAB_0029d754;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029d754;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x1a:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029d838:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if (uVar5 == 0x10) {
          *(undefined4 *)(param_1 + 0x640) = 0;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(5);
        }
        goto LAB_0029d838;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029d838;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x1b:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029d9f8:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrrecord_step_sub_00298640(param_1);
        goto LAB_0029d9f8;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        lVar2 = Options_Get_14();
        if (lVar2 == 0) {
          *(undefined4 *)(param_1 + 0x62c) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x62c) = 0;
        }
        goto LAB_0029d9f8;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x1c:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029da94:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrrecord_step_sub_00298640(param_1);
        goto LAB_0029da94;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        lVar2 = Options_Get_14();
        if (lVar2 == 0) {
          *(undefined4 *)(param_1 + 0x62c) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x62c) = 0;
        }
        goto LAB_0029da94;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x1d:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029db30:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrrecord_step_sub_00298640(param_1);
        goto LAB_0029db30;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        lVar2 = Options_Get_14();
        if (lVar2 == 0) {
          *(undefined4 *)(param_1 + 0x62c) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x62c) = 0;
        }
        goto LAB_0029db30;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x1e:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029dbcc:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrrecord_step_sub_00298640(param_1);
        goto LAB_0029dbcc;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        lVar2 = Options_Get_14();
        if (lVar2 == 0) {
          *(undefined4 *)(param_1 + 0x62c) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x62c) = 0;
        }
        goto LAB_0029dbcc;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x1f:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      Menu_BlockInput(_g_MenuMgr + 0x654);
LAB_0029dc58:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrrecord_step_sub_00297120(param_1);
        goto LAB_0029dc58;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029dc58;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x20:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      Menu_BlockInput(_g_MenuMgr + 0x654);
LAB_0029dce4:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        scrrecord_step_sub_00297120(param_1);
        goto LAB_0029dce4;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029dce4;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x21:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      Menu_BlockInput(_g_MenuMgr + 0x654);
LAB_0029dd70:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_00296fe0(param_1);
        goto LAB_0029dd70;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029dd70;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x26:
    menuscr_select_sub_00296930(param_1);
    break;
  case 0x27:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029de0c:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_00297890(param_1);
        goto LAB_0029de0c;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        menuscr_leaf_sub_00297b20(param_1);
        goto LAB_0029de0c;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x29:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      lVar2 = scrrace_step_sub_00296600();
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x6b8) = 1;
      }
LAB_0029dea0:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_00296840(param_1);
        goto LAB_0029dea0;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029dea0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x2a:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      Menu_BlockInput(_g_MenuMgr + 0x654);
      lVar2 = scrrace_step_sub_00296600();
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x6b8) = 1;
      }
LAB_0029df44:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        menuscr_step_sub_00296840(param_1);
        goto LAB_0029df44;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029df44;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x2b:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      Menu_BlockInput(_g_MenuMgr + 0x654);
LAB_0029e034:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if (uVar5 == 0x10) {
          *(undefined4 *)(param_1 + 0x640) = 0;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(5);
        }
        goto LAB_0029e034;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029e034;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x2c:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
LAB_0029e148:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if (uVar5 == 0x10) {
          *(undefined4 *)(param_1 + 0x640) = 0x25;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(5);
        }
        else if (uVar5 == 0x20) {
          *(undefined4 *)(param_1 + 0x640) = 0x18;
          *(undefined4 *)(param_1 + 0x644) = 2;
          Se_PlayMenu(6);
        }
        goto LAB_0029e148;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029e148;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  case 0x2e:
    iVar6 = *(int *)(param_1 + 0x644);
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
      *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
      *(undefined4 *)(param_1 + 0x62c) = 0;
      *(undefined4 *)(param_1 + 0x630) = 0;
      lVar2 = scrrace_step_sub_00296600();
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x6b8) = 1;
      }
LAB_0029e248:
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    else {
      if (iVar6 == 1) {
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if ((uVar5 == 0x10) || (uVar5 == 0x20)) {
          *(undefined4 *)(param_1 + 0x640) = 0;
          Se_PlayMenu(5);
          *(undefined4 *)(param_1 + 0x644) = 2;
        }
        goto LAB_0029e248;
      }
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x62c) = 0;
        *(undefined4 *)(param_1 + 0x630) = 0;
        *(undefined4 *)(param_1 + 0x644) = 1;
        goto LAB_0029e248;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x650) = uVar1;
    Menu_RequestTransition(param_1 + 0x648);
    break;
  default:
    goto switchD_0029cbbc_default;
  }
switchD_0029cbbc_default:
  return;
}

// 0x0029e2e0  size 0x4f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3275f4 */

void ScrRaceSlotClear_Enter(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 auStack_dc [47];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar2 = RaceCtx_Get_10();
  *(undefined1 *)(_g_MenuMgr + 0x620) = uVar2;
  *(undefined4 *)(_g_MenuMgr + 0x624) = 0xffffffff;
  *(undefined4 *)(_g_MenuMgr + 0x628) = 0xffffffff;
  *(undefined1 *)(_g_MenuMgr + 0x5ac) = uVar2;
  switch(uVar2) {
  case 0:
    *(undefined1 *)(_g_MenuMgr + 0x640) = 1;
    break;
  case 1:
    *(undefined1 *)(_g_MenuMgr + 0x640) = 0;
    break;
  case 2:
    *(undefined1 *)(_g_MenuMgr + 0x640) = 2;
    break;
  case 3:
    *(undefined1 *)(_g_MenuMgr + 0x640) = 3;
    break;
  case 4:
    *(undefined1 *)(_g_MenuMgr + 0x640) = 4;
    break;
  case 5:
    *(undefined1 *)(_g_MenuMgr + 0x640) = 5;
    break;
  case 6:
    *(undefined1 *)(_g_MenuMgr + 0x640) = 6;
    break;
  case 7:
    *(undefined1 *)(_g_MenuMgr + 0x640) = 7;
  }
  iVar9 = (int)param_1;
  if (*(int *)(_g_MenuMgr + 0x24) == 0xf) {
    *(undefined4 *)(iVar9 + 0x648) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x64c) = *(undefined4 *)(iVar9 + 0x638);
    *(undefined4 *)(iVar9 + 0x650) = *(undefined4 *)(iVar9 + 0x638);
    *(undefined4 *)(iVar9 + 0x658) = 1;
    *(undefined4 *)(iVar9 + 0x664) = 0;
    *(undefined4 *)(iVar9 + 0x65c) = 1;
    *(undefined4 *)(iVar9 + 0x654) = 1;
    *(undefined4 *)(iVar9 + 0x660) = 0;
  }
  else {
    if (*(int *)(_g_MenuMgr + 0x24) == -1) {
      RaceCtx_SetMode(1);
    }
    if (*(int *)(_g_MenuMgr + 0x24) == -3) {
      *(undefined4 *)(iVar9 + 0x648) = 0xffffffff;
      *(undefined4 *)(iVar9 + 0x64c) = *(undefined4 *)(iVar9 + 0x638);
      *(undefined4 *)(iVar9 + 0x650) = *(undefined4 *)(iVar9 + 0x638);
      *(undefined4 *)(iVar9 + 0x658) = 1;
      *(undefined4 *)(iVar9 + 0x664) = 0;
      *(undefined4 *)(iVar9 + 0x65c) = 1;
      *(undefined4 *)(iVar9 + 0x654) = 1;
      *(undefined4 *)(iVar9 + 0x660) = 0;
    }
    else {
      menuscr_step_sub_0029ca00(param_1);
      cVar3 = RaceCtx_Get_8();
      if (cVar3 == '\x02') {
        RaceCtx_Set_8(0x13);
        RivalSchedule_SetupBattle();
        uVar4 = GameState_Get_35c();
        if ((uVar4 & 1) == 0) {
          uVar4 = GameState_Get_35c();
          if ((uVar4 & 0x100000) == 0) {
            GameState_GetVec3c4(auStack_20);
            *(undefined1 *)(iVar9 + 0x474) = auStack_20[0];
            *(undefined4 *)(iVar9 + 0x478) = uStack_1c;
            *(undefined4 *)(iVar9 + 0x47c) = uStack_18;
            if (*(char *)(iVar9 + 0x474) == '\x01') {
              uVar5 = Profile_Get(0);
              Profile_CopyCarRecord(&uStack_f0,uVar5,*(undefined4 *)(iVar9 + 0x478));
              puVar8 = auStack_dc;
              puVar7 = (undefined4 *)(iVar9 + 0x4ac);
              iVar6 = 0x17;
              *(undefined4 *)(iVar9 + 0x498) = uStack_f0;
              *(undefined4 *)(iVar9 + 0x49c) = uStack_ec;
              *(undefined4 *)(iVar9 + 0x4a0) = uStack_e8;
              *(undefined4 *)(iVar9 + 0x4a4) = uStack_e4;
              *(undefined4 *)(iVar9 + 0x4a8) = uStack_e0;
              do {
                iVar6 = iVar6 + -1;
                uVar1 = puVar8[1];
                *puVar7 = *puVar8;
                puVar8 = puVar8 + 2;
                puVar7[1] = uVar1;
                puVar7 = puVar7 + 2;
              } while (0 < iVar6);
              cVar3 = *(char *)(iVar9 + 0x474);
            }
            else {
              cVar3 = *(char *)(iVar9 + 0x474);
            }
            if (cVar3 == '\x01') {
              *(undefined4 *)(iVar9 + 0x638) = 0x21;
              *(undefined4 *)(iVar9 + 0x63c) = 0x21;
            }
            else if (cVar3 == '\x05') {
              *(undefined4 *)(iVar9 + 0x638) = 0;
              *(undefined4 *)(iVar9 + 0x63c) = 0;
            }
            else if (cVar3 == '\b') {
              *(undefined4 *)(iVar9 + 0x638) = 0;
              *(undefined4 *)(iVar9 + 0x63c) = 0;
            }
            else if (cVar3 == '\x06') {
              *(undefined4 *)(iVar9 + 0x638) = 0;
              *(undefined4 *)(iVar9 + 0x63c) = 0;
            }
            else {
              *(undefined4 *)(iVar9 + 0x638) = 0x15;
              *(undefined4 *)(iVar9 + 0x63c) = 0x15;
            }
            RaceResult_Award();
          }
          else {
            *(undefined4 *)(iVar9 + 0x638) = 0;
            *(undefined4 *)(iVar9 + 0x63c) = 0;
          }
        }
        else {
          GameState_GetVec3d0(auStack_10);
          *(undefined1 *)(iVar9 + 0x480) = auStack_10[0];
          *(undefined4 *)(iVar9 + 0x484) = uStack_c;
          *(undefined4 *)(iVar9 + 0x488) = uStack_8;
          if (*(byte *)(iVar9 + 0x480) - 1 < 2) {
            *(undefined4 *)(iVar9 + 0x638) = 0x1f;
            *(undefined4 *)(iVar9 + 0x63c) = 0x1f;
          }
          else if (*(byte *)(iVar9 + 0x480) == 5) {
            *(undefined4 *)(iVar9 + 0x638) = 0x20;
            *(undefined4 *)(iVar9 + 0x63c) = 0x20;
          }
          else {
            *(undefined4 *)(iVar9 + 0x638) = 0x14;
            *(undefined4 *)(iVar9 + 0x63c) = 0x14;
          }
          RaceResult_Award();
        }
      }
      else {
        cVar3 = RaceCtx_Get_8();
        if (cVar3 == '\x03') {
          RaceCtx_Set_8(0x13);
          RivalSchedule_SetupBattle();
          cVar3 = GameState_Get_3dc();
          *(int *)(iVar9 + 0x448) = (int)cVar3;
          uVar4 = GameState_Get_35c();
          if ((uVar4 & 1) == 0) {
            *(undefined4 *)(iVar9 + 0x638) = 0x1a;
            *(undefined4 *)(iVar9 + 0x63c) = 0x1a;
          }
          else {
            *(undefined4 *)(iVar9 + 0x638) = 0x19;
            *(undefined4 *)(iVar9 + 0x63c) = 0x19;
            uVar5 = Profile_Get(0);
            Garage_CountParts(uVar5,*(undefined1 *)(iVar9 + 0x448));
          }
        }
        else {
          cVar3 = RaceCtx_Get_8();
          if ((cVar3 == '\x01') || (cVar3 = RaceCtx_Get_8(), cVar3 == '\x05')) {
            RaceCtx_Set_8(0x13);
            RivalSchedule_SetupBattle();
            *(undefined4 *)(iVar9 + 0x638) = 0;
            *(undefined4 *)(iVar9 + 0x63c) = 0;
          }
          else {
            RaceCtx_Set_8(0x13);
            RivalSchedule_SetupTeamBattle();
            *(undefined4 *)(iVar9 + 0x638) = 0;
            *(undefined4 *)(iVar9 + 0x63c) = 0;
          }
        }
      }
      RaceCtx_Set_8(0x13);
      *(undefined4 *)(iVar9 + 0x6b0) = 0;
      *(undefined4 *)(iVar9 + 0x634) = 0xffffffff;
      uVar5 = Profile_Get(0);
      uVar2 = Profile_GetChapter(uVar5);
      *(undefined1 *)(_g_MenuMgr + 0x5d4) = uVar2;
      uVar2 = Race_GetCourseId(10);
      *(undefined1 *)(_g_MenuMgr + 0x5d5) = uVar2;
      *(undefined4 *)(iVar9 + 0x640) = *(undefined4 *)(iVar9 + 0x638);
      *(undefined4 *)(iVar9 + 0x648) = 0xffffffff;
      *(undefined4 *)(iVar9 + 0x64c) = *(undefined4 *)(iVar9 + 0x638);
      *(undefined4 *)(iVar9 + 0x650) = *(undefined4 *)(iVar9 + 0x638);
      *(undefined4 *)(iVar9 + 0x658) = 1;
      *(undefined4 *)(iVar9 + 0x664) = 0;
      *(undefined4 *)(iVar9 + 0x65c) = 1;
      *(undefined4 *)(iVar9 + 0x654) = 1;
      *(undefined4 *)(iVar9 + 0x660) = 0;
      *(undefined4 *)(iVar9 + 0x650) = *(undefined4 *)(iVar9 + 0x638);
      Menu_RequestTransition(iVar9 + 0x648);
      Menu_IsInputIdle(iVar9 + 0x648);
    }
  }
  return;
}

// 0x0029e7d0  size 0x8
/* screen record 0x327600 */

void screc327600_exit_sub_0029e7d0(void)

{
  return;
}

// 0x0029e7e0  size 0xf8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327600 */

void screc327600_update_sub_0029e7e0(undefined8 param_1)

{
  uint uVar1;
  
  Menu_HandleCursor(param_1,0,2,1,1,0);
  uVar1 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 0x10) {
    Se_PlayMenu(5);
    MenuMgr_GetScreenParam(*(undefined4 *)(*(int *)param_1 * 4 + 0x36ee20));
  }
  else if (uVar1 == 0x20) {
    Se_PlayMenu(6);
    MenuMgr_GetScreenParam(1);
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x0029e8e0  size 0x28
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327600 */

void screc327600_enter_sub_0029e8e0(undefined4 *param_1)

{
  if (*(int *)(_g_MenuMgr + 0x24) == 0x1e) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}

// 0x0029e910  size 0x108
void scrcareer_step_sub_0029e910(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  iVar3 = (int)param_1;
  if (uVar2 == 0x10) {
    if (*(int *)(iVar3 + 0x6c) - 6U < 2) {
      Se_PlayMenu(0xc);
      uVar1 = *(undefined4 *)(iVar3 + 0x6c);
    }
    else {
      Se_PlayMenu(5);
      uVar1 = *(undefined4 *)(iVar3 + 0x6c);
    }
    scrcareer_step_sub_0029ea20(param_1,uVar1);
  }
  else if (uVar2 == 0x20) {
    if (*(int *)(iVar3 + 0x68) - 6U < 2) {
      Se_PlayMenu(0xc);
      uVar1 = *(undefined4 *)(iVar3 + 0x68);
    }
    else {
      Se_PlayMenu(6);
      uVar1 = *(undefined4 *)(iVar3 + 0x68);
    }
    scrcareer_step_sub_0029ea20(param_1,uVar1);
  }
  return;
}

// 0x0029ea20  size 0x49c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_step_sub_0029ea20(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  short sVar10;
  
  iVar9 = (int)param_1;
  if (*(int *)(iVar9 + 0x4c) == 3) {
    Menu_BlockInput(_g_MenuMgr + 0x654);
  }
  if (param_2 < 0) {
    MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
  }
  else {
    uVar1 = *(undefined4 *)(iVar9 + 4);
    uVar2 = *(undefined4 *)(iVar9 + 0x10);
    uVar6 = menuscr_leaf_sub_002a17d0(uVar1);
    lVar7 = Rival_IsBossId(uVar6);
    sVar10 = (short)uVar2;
    if (lVar7 == 1) {
      sVar3 = menuscr_leaf_sub_002a17d0(uVar1);
      sVar10 = sVar10 + sVar3;
    }
    else {
      sVar3 = menuscr_leaf_sub_002a17d0(uVar1);
      sVar10 = sVar10 + sVar3 + -1;
    }
    iVar5 = Profile_Get(0);
    sVar10 = *(short *)(iVar5 + sVar10 * 2 + 0x1420);
    if (param_2 == 6) {
      iVar5 = *(int *)(iVar9 + 4);
      if (iVar5 == 0x19) {
        uVar6 = Profile_Get(0);
        Profile_SetCurrentCarColor(uVar6,*(undefined2 *)(iVar9 + 0x18));
        if (*(int *)(iVar9 + 8) == 0) {
          uVar6 = 100;
        }
        else if (*(int *)(iVar9 + 8) == 1) {
          uVar6 = 200;
        }
        else {
          uVar6 = 0x96;
        }
        uVar8 = Profile_Get(0);
        Profile_SpendMoney(uVar8,uVar6,0);
        Menu_SetCursorAlpha(_g_MenuMgr + 0x654,0);
      }
      else if (iVar5 == 0x1a) {
        uVar6 = Profile_Get(0);
        Profile_GetCurrentCarValue(uVar6);
        Menu_SetCursorAlpha(_g_MenuMgr + 0x654,0);
      }
      else {
        uVar1 = *(undefined4 *)(iVar9 + 0x10);
        uVar6 = menuscr_leaf_sub_002a17d0(iVar5);
        lVar7 = Rival_IsBossId(uVar6);
        sVar3 = (short)uVar1;
        if (lVar7 == 1) {
          sVar4 = menuscr_leaf_sub_002a17d0(iVar5);
          sVar3 = sVar3 + sVar4;
        }
        else {
          sVar4 = menuscr_leaf_sub_002a17d0(iVar5);
          sVar3 = sVar3 + sVar4 + -1;
        }
        uVar6 = Profile_Get(0);
        Profile_PayForCar(uVar6,sVar3);
      }
    }
    if (param_2 == 7) {
      if (sVar10 < 3) {
        iVar5 = *(int *)(iVar9 + 4);
        if (iVar5 == 0x19) {
          uVar6 = Profile_Get(0);
          Profile_SetCurrentCarColor(uVar6,*(undefined2 *)(iVar9 + 0x18));
          if (*(int *)(iVar9 + 8) == 0) {
            uVar6 = 100;
          }
          else if (*(int *)(iVar9 + 8) == 1) {
            uVar6 = 200;
          }
          else {
            uVar6 = 0x96;
          }
          uVar8 = Profile_Get(0);
          Profile_SpendMoney(uVar8,uVar6,0);
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654,0);
        }
        else if (iVar5 == 0x1a) {
          uVar6 = Profile_Get(0);
          Profile_GetCurrentCarValue(uVar6);
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654,0);
        }
        else {
          uVar1 = *(undefined4 *)(iVar9 + 0x10);
          uVar6 = menuscr_leaf_sub_002a17d0(iVar5);
          lVar7 = Rival_IsBossId(uVar6);
          sVar10 = (short)uVar1;
          if (lVar7 == 1) {
            sVar3 = menuscr_leaf_sub_002a17d0(iVar5);
            sVar10 = sVar10 + sVar3;
          }
          else {
            sVar3 = menuscr_leaf_sub_002a17d0(iVar5);
            sVar10 = sVar10 + sVar3 + -1;
          }
          uVar6 = Profile_Get(0);
          Profile_PayForCar(uVar6,sVar10);
        }
        scrgarage_step_sub_0029eec0(param_1);
      }
      else {
        scrgarage_step_sub_0029eec0(param_1);
        iVar5 = *(int *)(iVar9 + 4);
        if (iVar5 == 0x19) {
          uVar6 = Profile_Get(0);
          Profile_SetCurrentCarColor(uVar6,*(undefined2 *)(iVar9 + 0x18));
          if (*(int *)(iVar9 + 8) == 0) {
            uVar6 = 100;
          }
          else if (*(int *)(iVar9 + 8) == 1) {
            uVar6 = 200;
          }
          else {
            uVar6 = 0x96;
          }
          uVar8 = Profile_Get(0);
          Profile_SpendMoney(uVar8,uVar6,0);
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654,0);
        }
        else {
          if (iVar5 != 0x1a) {
            uVar1 = *(undefined4 *)(iVar9 + 0x10);
            uVar6 = menuscr_leaf_sub_002a17d0(iVar5);
            lVar7 = Rival_IsBossId(uVar6);
            sVar10 = (short)uVar1;
            if (lVar7 == 1) {
              sVar3 = menuscr_leaf_sub_002a17d0(iVar5);
              sVar10 = sVar10 + sVar3;
            }
            else {
              sVar3 = menuscr_leaf_sub_002a17d0(iVar5);
              sVar10 = sVar10 + sVar3 + -1;
            }
            uVar6 = Profile_Get(0);
            Profile_PayForCar(uVar6,sVar10);
            *(undefined4 *)(iVar9 + 0x50) = 7;
            return;
          }
          uVar6 = Profile_Get(0);
          Profile_GetCurrentCarValue(uVar6);
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654,0);
        }
      }
    }
    *(int *)(iVar9 + 0x50) = (int)param_2;
  }
  return;
}

// 0x0029eec0  size 0x268
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_step_sub_0029eec0(int *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0x19) && (iVar1 != 0x1a)) {
    if ((1 < *param_1 - 3U) || (param_1[5] != 2)) {
      uVar4 = menuscr_leaf_sub_002a14f0(iVar1,param_1[5]);
      iVar1 = param_1[1];
      iVar2 = param_1[4];
      uVar6 = menuscr_leaf_sub_002a17d0(iVar1);
      lVar5 = Rival_IsBossId(uVar6);
      if (lVar5 == 1) {
        sVar3 = menuscr_leaf_sub_002a17d0(iVar1);
        sVar3 = (short)iVar2 + sVar3;
      }
      else {
        sVar3 = menuscr_leaf_sub_002a17d0(iVar1);
        sVar3 = (short)iVar2 + sVar3 + -1;
      }
      uVar6 = Profile_Get(0);
      Profile_EquipFromStock(uVar6,uVar4,sVar3);
      iVar1 = *param_1;
      goto LAB_0029f048;
    }
    iVar2 = param_1[4];
    uVar4 = menuscr_leaf_sub_002a17d0(iVar1);
    lVar5 = Rival_IsBossId(uVar4);
    if (lVar5 == 1) {
      sVar3 = menuscr_leaf_sub_002a17d0(iVar1);
      sVar3 = (short)iVar2 + sVar3;
    }
    else {
      sVar3 = menuscr_leaf_sub_002a17d0(iVar1);
      sVar3 = (short)iVar2 + sVar3 + -1;
    }
    uVar4 = Profile_Get(0);
    Profile_PayForCar(uVar4,sVar3);
    uVar4 = menuscr_leaf_sub_002a14f0(param_1[1],0);
    uVar6 = menuscr_leaf_sub_002a14f0(param_1[1],1);
    iVar1 = param_1[1];
    iVar2 = param_1[4];
    uVar7 = menuscr_leaf_sub_002a17d0(iVar1);
    lVar5 = Rival_IsBossId(uVar7);
    if (lVar5 == 1) {
      sVar3 = menuscr_leaf_sub_002a17d0(iVar1);
      sVar3 = (short)iVar2 + sVar3;
    }
    else {
      sVar3 = menuscr_leaf_sub_002a17d0(iVar1);
      sVar3 = (short)iVar2 + sVar3 + -1;
    }
    uVar7 = Profile_Get(0);
    Profile_EquipFromStock(uVar7,uVar4,sVar3);
    uVar4 = Profile_Get(0);
    Profile_EquipFromStock(uVar4,uVar6,sVar3);
  }
  iVar1 = *param_1;
LAB_0029f048:
  lVar5 = scrcareer_step_sub_00256210(param_1[1],iVar1);
  if (lVar5 == 1) {
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,0);
  }
  return;
}

// 0x0029f130  size 0x338
bool scrcareer_step_sub_0029f130(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  lVar5 = MenuText_CarFullName(0xffffffffffffffff,0);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentCar(uVar6);
  sVar4 = CarRec_GetModelId(uVar6);
  if (lVar5 == 0x11) {
    bVar3 = false;
  }
  else if (param_1 == 0xf) {
    cVar1 = MenuText_CarName(0xffffffffffffffff,0);
    bVar3 = cVar1 != '\0';
  }
  else if (param_1 == 0x19) {
    if (sVar4 == 0xfb) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else if (param_1 == 0x1f) {
    bVar3 = lVar5 != 0xc;
  }
  else {
    iVar7 = (int)lVar5;
    if (param_1 == 0x1b) {
      if ((lVar5 == 0xf) || (iVar7 - 0xbU < 3)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    else if (param_1 == 8) {
      cVar1 = MenuText_RivalCarMaker(0xffffffffffffffff,0);
      bVar3 = cVar1 != '\0';
    }
    else if (param_1 == 0x1d) {
      if ((lVar5 == 0xf) || (iVar7 - 0xbU < 3)) {
        if (sVar4 != 0x100) {
          return false;
        }
      }
      else if ((((((sVar4 == 0xc6) || (sVar4 == 0xc5)) || (sVar4 == 0xcb)) ||
                ((sVar4 == 0xca || (sVar4 == 0xc9)))) ||
               ((((sVar4 == 0xaa || ((sVar4 == 0xa9 || (sVar4 == 0x2f)))) || (sVar4 == 0x2e)) ||
                ((((sVar4 == 0x2d || (sVar4 == 0x2c)) || (sVar4 == 0x20)) ||
                 (((sVar4 == 0x1f || (sVar4 == 8)) ||
                  ((sVar4 == 7 || ((sVar4 == 0x26 || (sVar4 == 0x25)))))))))))) ||
              ((sVar4 == 4 || (sVar4 == 3)))) {
        return false;
      }
      bVar3 = true;
    }
    else {
      if (param_1 == 0x1c) {
        if ((lVar5 == 0xf) || (iVar7 - 0xbU < 3)) {
          return false;
        }
      }
      else if ((param_1 == 0x1e) && ((lVar5 == 0xf || (iVar7 - 0xbU < 3)))) {
        return false;
      }
      uVar2 = MenuText_RivalCarSpec(0xffffffffffffffff,0);
      iVar7 = 0;
      switch(uVar2) {
      case 0:
      case 1:
      case 2:
        break;
      case 3:
      case 4:
        iVar7 = 2;
        break;
      case 5:
      case 6:
      case 8:
        iVar7 = 1;
        break;
      case 7:
        iVar7 = 3;
      }
      if (3 < param_1) {
        if (7 < param_1) {
          return true;
        }
        param_1 = param_1 + -4;
      }
      bVar3 = param_1 == iVar7;
    }
  }
  return bVar3;
}

// 0x0029f470  size 0x64
undefined4 scrcareer_step_sub_0029f470(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = MenuText_RivalCarSpec();
  uVar2 = 0;
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
    break;
  case 3:
  case 4:
    uVar2 = 2;
    break;
  case 5:
  case 6:
  case 8:
    uVar2 = 1;
    break;
  case 7:
    uVar2 = 3;
  }
  return uVar2;
}

// 0x0029f4e0  size 0x34
/* screen record 0x32ecdc */

void screc32ecdc_exit_sub_0029f4e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 4;
    *(undefined4 *)(param_1 + 0x68) = 4;
  }
  return;
}

// 0x0029f520  size 0xc8
/* screen record 0x32ecdc */

void screc32ecdc_update_sub_0029f520(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 3;
    if (*(int *)(param_1 + 4) - 0x19U < 2) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if ((*(int *)(param_1 + 4) != 0x19) && (*(int *)(param_1 + 4) != 0x1a)) {
    Menu_HandleCursor(param_1 + 0x24,0,2,1,1,0);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 6;
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
    }
  }
  return;
}

// 0x0029f5f0  size 0x80
/* screen record 0x32ecdc */

void screc32ecdc_enter_sub_0029f5f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 3;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  Menu_HandleCursor(param_1 + 0x24,0,2,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 6;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  }
  return;
}

// 0x0029f670  size 0x84
/* screen record 0x32ecd0 */

void screc32ecd0_exit_sub_0029f670(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(undefined4 *)(param_1 + 0x68) = 3;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  Menu_HandleCursor(param_1 + 0x24,0,2,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  }
  return;
}

// 0x0029f700  size 0x34
/* screen record 0x32ecd0 */

void screc32ecd0_update_sub_0029f700(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 3;
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  return;
}

// 0x0029f740  size 0x34
/* screen record 0x32ecd0 */

void screc32ecd0_enter_sub_0029f740(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 3;
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  return;
}

// 0x0029f780  size 0x80
/* screen record 0x32ecc4 */

void ScrGarageComputeCarStats_Exit(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 4;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  Menu_HandleCursor(param_1 + 0x24,0,2,1,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 7;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  }
  return;
}

// 0x0029f800  size 0x204
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ecc4 */

void ScrGarageComputeCarStats_Update(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  
  iVar3 = param_1[0x15];
  param_1[0x15] = 0;
  if (iVar3 != 0) {
    param_1[0x1a] = 5;
  }
  iVar3 = param_1[1];
  iVar4 = param_1[4];
  uVar5 = menuscr_leaf_sub_002a17d0(iVar3);
  lVar6 = Rival_IsBossId(uVar5);
  if (lVar6 == 1) {
    sVar1 = menuscr_leaf_sub_002a17d0(iVar3);
    sVar1 = (short)iVar4 + sVar1;
  }
  else {
    sVar1 = menuscr_leaf_sub_002a17d0(iVar3);
    sVar1 = (short)iVar4 + sVar1 + -1;
  }
  Menu_HandleCursor(param_1 + 5,0,2,2,1,0);
  if (*param_1 == 4) {
    iVar3 = param_1[1];
    iVar4 = param_1[4];
    uVar5 = menuscr_leaf_sub_002a17d0(iVar3);
    lVar6 = Rival_IsBossId(uVar5);
    if (lVar6 == 1) {
      sVar2 = menuscr_leaf_sub_002a17d0(iVar3);
      sVar2 = (short)iVar4 + sVar2;
    }
    else {
      sVar2 = menuscr_leaf_sub_002a17d0(iVar3);
      sVar2 = (short)iVar4 + sVar2 + -1;
    }
    iVar3 = param_1[5];
    if (iVar3 == 1) {
      *(undefined2 *)(_g_MenuMgr + 0x562) = 0x162;
      *(short *)(_g_MenuMgr + 0x564) = sVar2;
    }
    else if (iVar3 == 0) {
      *(short *)(_g_MenuMgr + 0x562) = sVar2;
      *(undefined2 *)(_g_MenuMgr + 0x564) = 0x162;
    }
    else {
      if (iVar3 != 2) {
        iVar3 = param_1[5];
        goto LAB_0029f988;
      }
      *(short *)(_g_MenuMgr + 0x562) = sVar2;
      *(short *)(_g_MenuMgr + 0x564) = sVar2;
    }
  }
  iVar3 = param_1[5];
LAB_0029f988:
  if (iVar3 == 2) {
    iVar3 = Garage_ComputeCarStats(sVar1,0);
    uVar5 = Profile_Get(0);
    iVar4 = Profile_GetMoney(uVar5);
    if (iVar4 < iVar3 << 1) {
      param_1[0x1b] = 0x11;
    }
    else {
      param_1[0x1b] = 0xb;
    }
  }
  else {
    param_1[0x1b] = 7;
  }
  return;
}

// 0x0029fa10  size 0xec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ecc4 */

void ScrGarageComputeCarStats_Enter(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 3;
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  iVar1 = MenuText_CarFullName(0xffffffffffffffff,0);
  if (iVar1 - 0xcU < 2) {
    Menu_HandleCursor(param_1 + 8,0,2,3,1,1);
  }
  else {
    Menu_HandleCursor(param_1 + 8,0,2,3,1,0);
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x18000;
  return;
}

// 0x0029fb00  size 0x194
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ecb8 */

void screc32ecb8_exit_sub_0029fb00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 4) = 0x21;
    *(undefined4 *)(param_1 + 0x6c) = 3;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 4;
  }
  if (*(int *)(param_1 + 0x2c) == 4) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xc);
    Menu_HandleCursor(param_1 + 0xc,0,2,4,1,0);
  }
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 2) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    if (4 < *(int *)(param_1 + 0x3c)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  else if ((uVar2 == 1) &&
          (*(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1, *(int *)(param_1 + 0x3c) < 0))
  {
    *(undefined4 *)(param_1 + 0x3c) = 4;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x0029fca0  size 0x3c
/* screen record 0x32ecb8 */

void screc32ecb8_update_sub_0029fca0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (iVar1 != 0) {
    if (*param_1 == 4) {
      param_1[0x1b] = 8;
    }
    else {
      param_1[0x1b] = 1;
    }
    param_1[0x1a] = param_1[0x1b];
  }
  return;
}

// 0x0029fce0  size 0x3c
/* screen record 0x32ecb8 */

void screc32ecb8_enter_sub_0029fce0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (iVar1 != 0) {
    if (*param_1 == 4) {
      param_1[0x1b] = 8;
    }
    else {
      param_1[0x1b] = 1;
    }
    param_1[0x1a] = param_1[0x1b];
  }
  return;
}

// 0x0029fd20  size 0x174
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ecac */

void screc32ecac_exit_sub_0029fd20(int *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (iVar1 != 0) {
    param_1[9] = 0;
    if (param_1[0x11] == 1) {
      param_1[0x1a] = 0xe;
    }
    else {
      param_1[0x1a] = 4;
    }
    if (*param_1 == 4) {
      iVar1 = param_1[1];
      iVar2 = param_1[4];
      uVar6 = menuscr_leaf_sub_002a17d0(iVar1);
      lVar7 = Rival_IsBossId(uVar6);
      if (lVar7 == 1) {
        sVar3 = menuscr_leaf_sub_002a17d0(iVar1);
        sVar3 = (short)iVar2 + sVar3;
      }
      else {
        sVar3 = menuscr_leaf_sub_002a17d0(iVar1);
        sVar3 = (short)iVar2 + sVar3 + -1;
      }
      uVar4 = menuscr_leaf_sub_002a14f0(param_1[1],0);
      uVar5 = menuscr_leaf_sub_002a14f0(param_1[1],1);
      *(short *)((uVar4 & 0xff) * 2 + _g_MenuMgr + 0x548) = sVar3;
      *(short *)((uVar5 & 0xff) * 2 + _g_MenuMgr + 0x548) = sVar3;
    }
  }
  Menu_HandleCursor(param_1 + 9,0,2,1,1,0);
  if (param_1[9] == 0) {
    if (*param_1 - 3U < 2) {
      param_1[0x1b] = 10;
    }
    else {
      param_1[0x1b] = 7;
    }
  }
  else {
    param_1[0x1b] = 6;
  }
  return;
}

// 0x0029fea0  size 0x104
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ecac */

void screc32ecac_update_sub_0029fea0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (iVar1 != 0) {
    if (*param_1 == 4) {
      switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
      case 1:
        *(undefined4 *)(_g_MenuMgr + 0x598) = 2;
        break;
      case 2:
        *(undefined4 *)(_g_MenuMgr + 0x5dc) = 2;
        break;
      case 3:
        *(undefined4 *)(_g_MenuMgr + 0x5fc) = 2;
        break;
      case 4:
        *(undefined4 *)(_g_MenuMgr + 0x618) = 2;
      }
    }
    param_1[0x1a] = 3;
    param_1[9] = 0;
  }
  Menu_HandleCursor(param_1 + 9,0,2,1,1,0);
  if (param_1[9] == 0) {
    if (param_1[1] - 0x19U < 2) {
      param_1[0x1b] = 7;
    }
    else {
      param_1[0x1b] = 5;
    }
  }
  else {
    param_1[0x1b] = 3;
  }
  return;
}

// 0x0029ffb0  size 0x11f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ecac */

void screc32ecac_enter_sub_0029ffb0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  
  iVar16 = param_1[0x15];
  param_1[0x15] = 0;
  if (iVar16 != 0) {
    iVar17 = 0;
    iVar16 = _g_MenuMgr + 0x534;
    do {
      *(undefined2 *)(iVar16 + 0x14) = 0x162;
      iVar17 = iVar17 + 7;
      *(undefined2 *)(iVar16 + 0x16) = 0x162;
      *(undefined2 *)(iVar16 + 0x18) = 0x162;
      *(undefined2 *)(iVar16 + 0x1a) = 0x162;
      *(undefined2 *)(iVar16 + 0x1c) = 0x162;
      *(undefined2 *)(iVar16 + 0x1e) = 0x162;
      *(undefined2 *)(iVar16 + 0x20) = 0x162;
      iVar16 = iVar16 + 0xe;
    } while (iVar17 < 0x15);
    *(undefined4 *)(_g_MenuMgr + 0x544) = 0xfffffffe;
    iVar17 = Profile_Get(0);
    iVar10 = showroom_step_sub_002d3ba0(0);
    iVar16 = _g_MenuMgr;
    sVar6 = *(short *)(iVar17 + iVar10 * 2 + 0x13ee);
    *(undefined4 *)(_g_MenuMgr + 0x538) = 2;
    *(int *)(iVar16 + 0x53c) = (int)sVar6;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
    lVar12 = scrcareer_step_sub_0029f130(param_1[1]);
    if (lVar12 == 1) {
      iVar16 = param_1[1];
      if (iVar16 == 0x21) {
        if (param_1[0x12] == 8) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 2;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 2;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 2;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 2;
        }
        goto switchD_002a01a8_caseD_0;
      }
      if ((((iVar16 == 7) || (iVar16 == 6)) || (iVar16 == 5)) || (iVar16 == 4)) {
        if (param_1[0x12] == 2) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 1;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 1;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 1;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 1;
        }
        goto switchD_002a01a8_caseD_0;
      }
      if (iVar16 == 0x1e) {
        if (param_1[0x12] == 1) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 10;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 10;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 10;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 10;
        }
        goto switchD_002a01a8_caseD_0;
      }
      if (iVar16 == 0x1d) {
        if (param_1[0x12] == 1) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 9;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 9;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 9;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 9;
        }
        goto switchD_002a01a8_caseD_0;
      }
      if (iVar16 == 0x1c) {
        if (param_1[0x12] == 1) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 8;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 8;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 8;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 8;
        }
        goto switchD_002a01a8_caseD_0;
      }
      if (iVar16 == 0x1b) {
        if (param_1[0x12] == 1) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 6;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 6;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 6;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 6;
        }
        goto switchD_002a01a8_caseD_0;
      }
      if (iVar16 == 0x18) {
        if (param_1[0x12] == 1) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 5;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 5;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 5;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 5;
        }
        goto switchD_002a01a8_caseD_0;
      }
      if (iVar16 == 0x1a) {
        if (param_1[0x12] == 1) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 7;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 7;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 7;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 7;
        }
        goto switchD_002a01a8_caseD_0;
      }
      if (iVar16 == 0x19) {
        if (param_1[0x12] == 9) {
          Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
        }
        *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
        *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 0;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 0;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 0;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 0;
        }
        goto switchD_002a01a8_caseD_0;
      }
    }
    else {
switchD_002a01a8_caseD_0:
    }
    param_1[0xb] = 4;
    if (param_1[1] == 0x1a) {
      *(undefined4 *)(_g_MenuMgr + 0x594) = 1;
    }
    else {
      *(undefined4 *)(_g_MenuMgr + 0x594) = 0;
    }
    param_1[0x11] = 0;
    if (*param_1 == 4) {
      param_1[0x1a] = 8;
    }
    else {
      iVar16 = param_1[1];
      if (iVar16 == 0x19) {
        param_1[0x1a] = 9;
      }
      else if (((iVar16 < 0) || (3 < iVar16)) && ((iVar16 < 4 || (7 < iVar16)))) {
        param_1[0x1a] = 1;
      }
      else {
        param_1[0x1a] = 2;
      }
    }
    param_1[5] = 0;
    param_1[0xc] = 0;
    param_1[0x10] = 0;
    if (param_1[1] != 0x19) {
      if (param_1[1] == 0x1a) {
        param_1[4] = 0;
        param_1[0x10] = 0;
      }
      else {
        uVar13 = menuscr_leaf_sub_002a17d0();
        lVar12 = Rival_IsBossId(uVar13);
        if (lVar12 == 0) {
          param_1[0x10] = param_1[0x10] + 1;
        }
        sVar6 = menuscr_leaf_sub_002a17d0(param_1[1]);
        lVar12 = (long)sVar6;
        sVar5 = menuscr_leaf_sub_002a1690(param_1[1]);
        if (lVar12 <= sVar5) {
          iVar16 = (int)sVar6 << 2;
          do {
            iVar17 = Profile_Get(0);
            if (*(int *)(iVar17 + iVar16 + 0x16e8) == 0) break;
            iVar16 = iVar16 + 4;
            param_1[0x10] = param_1[0x10] + 1;
            lVar12 = (long)((int)lVar12 + 1);
            sVar6 = menuscr_leaf_sub_002a1690(param_1[1]);
          } while (lVar12 <= sVar6);
        }
      }
    }
  }
  bVar2 = false;
  bVar1 = false;
  sVar6 = 0;
  if (param_1[1] != 0x19) {
    if (param_1[1] == 0x1a) {
      lVar12 = Garage_ComputeCarStats(0xffffffffffffffff,1);
      goto LAB_002a0f0c;
    }
    if (*param_1 != 4) {
      param_1[4] = param_1[4] + -1;
      Menu_HandleCursor(param_1 + 4,0,2,param_1[0x10] + -2,1,0);
      param_1[4] = param_1[4] + 1;
      bVar3 = menuscr_leaf_sub_002a14f0(param_1[1],0);
      iVar16 = param_1[1];
      iVar17 = param_1[4];
      uVar13 = menuscr_leaf_sub_002a17d0(iVar16);
      lVar12 = Rival_IsBossId(uVar13);
      if (lVar12 == 1) {
        sVar5 = menuscr_leaf_sub_002a17d0(iVar16);
        sVar5 = (short)iVar17 + sVar5;
      }
      else {
        sVar6 = menuscr_leaf_sub_002a17d0(iVar16);
        sVar5 = (short)iVar17 + sVar6 + -1;
      }
      iVar16 = Profile_Get(0);
      sVar6 = *(short *)(iVar16 + sVar5 * 2 + 0x1420);
      lVar12 = Garage_ComputeCarStats(sVar5,0);
      uVar13 = Profile_Get(0);
      uVar13 = Profile_GetCurrentPartSlot(uVar13,bVar3);
      iVar16 = PartDb_Get(uVar13);
      if (*param_1 == 3) {
        uVar13 = menuscr_leaf_sub_002a14f0(param_1[1],1);
        uVar14 = Profile_Get(0);
        uVar13 = Profile_GetCurrentPartSlot(uVar14,uVar13);
        iVar17 = PartDb_Get(uVar13);
        if (iVar16 == iVar17) {
          bVar1 = false;
          bVar2 = sVar5 == (short)uVar13;
          if ((param_1[4] < iVar16) && ((int)sVar5 - param_1[4] == (short)uVar13 - iVar17)) {
            bVar1 = true;
          }
        }
      }
      else {
        uVar4 = menuscr_leaf_sub_002a14f0(param_1[1],0xffffffffffffffff);
        uVar14 = Profile_Get(0);
        uVar14 = Profile_GetCurrentCar(uVar14);
        uVar14 = CarRec_GetName(uVar14);
        iVar17 = CarRec_GetOptionSlot(uVar14,uVar4);
        if (*(char *)(iVar17 + 2) == '\x1f') {
          bVar2 = sVar5 == (short)uVar13;
        }
      }
      if (((param_1[1] != 0x1e) && (param_1[1] != 0x1b)) && (*param_1 != 3)) {
        bVar1 = param_1[4] < iVar16;
      }
      *(short *)((uint)bVar3 * 2 + _g_MenuMgr + 0x548) = sVar5;
      goto LAB_002a0f0c;
    }
    lVar12 = MsgId_ForMenu(param_1[3] + 1U & 0xff);
    iVar16 = MsgId_ForMenu(param_1[3] + 1U & 0xff);
    Menu_HandleCursor(param_1 + 10,0,8,iVar16 + -1,1,0);
    iVar16 = MsgId_ForMenuHelp(param_1[3] + 1U & 0xff);
    param_1[4] = param_1[10] + iVar16;
    uVar11 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar11) == 0) {
      uVar11 = 0x100000;
    }
    else if (uVar11 == 0x80000) {
      uVar11 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar11 = 0x100000;
    }
    if (uVar11 == 0x1000) {
      Se_PlayMenu(7);
      param_1[0xc] = (param_1[0xc] + 1) % 3;
      iVar16 = param_1[0xc];
      if (iVar16 == 2) {
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 4;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 4;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 4;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 4;
        }
      }
      else if (iVar16 == 1) {
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 3;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 3;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 3;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 3;
        }
      }
      else if (iVar16 == 0) {
        switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
        case 1:
          *(undefined4 *)(_g_MenuMgr + 0x598) = 2;
          break;
        case 2:
          *(undefined4 *)(_g_MenuMgr + 0x5dc) = 2;
          break;
        case 3:
          *(undefined4 *)(_g_MenuMgr + 0x5fc) = 2;
          break;
        case 4:
          *(undefined4 *)(_g_MenuMgr + 0x618) = 2;
        }
      }
switchD_002a0ac8_caseD_0:
      iVar16 = param_1[1];
    }
    else {
      if (uVar11 == 8) {
        iVar17 = (int)lVar12 + -1;
        iVar16 = 8;
        if (iVar17 < 9) {
          iVar16 = iVar17;
        }
        param_1[0xe] = param_1[0xe] + 1;
        if (iVar16 < param_1[0xe]) {
          if (lVar12 < 10) {
            param_1[0xe] = 0;
          }
          else {
            *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
            param_1[0xb] = 3;
            param_1[0xe] = 8;
          }
        }
        goto switchD_002a0ac8_caseD_0;
      }
      if (uVar11 == 4) {
        param_1[0xe] = param_1[0xe] + -1;
        if (param_1[0xe] < 0) {
          if (lVar12 < 10) {
            param_1[0xe] = (int)lVar12 + -1;
          }
          else {
            *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
            param_1[0xb] = 2;
            param_1[0xe] = 0;
          }
        }
        goto switchD_002a0ac8_caseD_0;
      }
      iVar16 = param_1[1];
    }
    iVar17 = param_1[4];
    uVar13 = menuscr_leaf_sub_002a17d0(iVar16);
    lVar12 = Rival_IsBossId(uVar13);
    if (lVar12 == 1) {
      sVar5 = menuscr_leaf_sub_002a17d0(iVar16);
      sVar5 = (short)iVar17 + sVar5;
    }
    else {
      sVar6 = menuscr_leaf_sub_002a17d0(iVar16);
      sVar5 = (short)iVar17 + sVar6 + -1;
    }
    uVar11 = menuscr_leaf_sub_002a14f0(param_1[1],0);
    *(short *)((uVar11 & 0xff) * 2 + _g_MenuMgr + 0x548) = sVar5;
    uVar11 = menuscr_leaf_sub_002a14f0(param_1[1],1);
    *(short *)((uVar11 & 0xff) * 2 + _g_MenuMgr + 0x548) = sVar5;
    iVar16 = Profile_Get(0);
    sVar6 = *(short *)(iVar16 + sVar5 * 2 + 0x1420);
    uVar13 = Profile_Get(0);
    sVar7 = Profile_GetCurrentPartSlot(uVar13,0xd);
    uVar13 = Profile_Get(0);
    sVar8 = Profile_GetCurrentPartSlot(uVar13,0xe);
    if (sVar7 == sVar8) {
      uVar13 = Profile_Get(0);
      sVar7 = Profile_GetCurrentPartSlot(uVar13,0xd);
      sVar8 = menuscr_leaf_sub_002a17d0(param_1[1]);
      bVar2 = param_1[4] == (int)sVar7 - (int)sVar8;
    }
    lVar12 = Garage_ComputeCarStats(sVar5,0);
    goto LAB_002a0f0c;
  }
  iVar16 = param_1[2];
  if (iVar16 == 0) {
    lVar12 = 100;
  }
  else if (iVar16 == 1) {
    lVar12 = 200;
  }
  else {
    lVar12 = 0x96;
  }
  if ((iVar16 == 3) || (iVar16 == 2)) {
    Menu_HandleCursor(param_1 + 8,0,2,0x29,1,0);
    Menu_HandleCursor(param_1 + 7,0,8,0xf,0,0);
    if (param_1[2] == 3) {
      param_1[6] = param_1[7] + param_1[8] * 0x10 + 0x2be;
    }
    else {
      param_1[6] = param_1[7] + param_1[8] * 0x10 + 0x1e;
    }
LAB_002a1098:
    iVar16 = param_1[6];
  }
  else {
    if (iVar16 == 1) {
      param_1[6] = -1;
      goto LAB_002a1098;
    }
    if (iVar16 == 0) {
      uVar13 = Profile_Get(0);
      uVar13 = Profile_GetCurrentCar(uVar13);
      uVar9 = CarRec_GetModelId(uVar13);
      iVar16 = CarDb_GetModelEntry(uVar9);
      Menu_HandleCursor(param_1 + 6,0,8,iVar16 + -1,1,0);
      goto LAB_002a1098;
    }
    iVar16 = param_1[6];
  }
  *(int *)(_g_MenuMgr + 0x544) = iVar16;
  iVar16 = param_1[6];
  uVar13 = Profile_Get(0);
  uVar13 = Profile_GetCurrentCar(uVar13);
  sVar5 = CarRec_GetVariant(uVar13);
  if ((long)iVar16 == (long)sVar5) {
    bVar2 = true;
  }
LAB_002a0f0c:
  uVar13 = Profile_Get(0);
  lVar15 = Profile_GetMoney(uVar13);
  if (lVar15 < lVar12) {
    param_1[0x1b] = 0xd;
  }
  else if (sVar6 < 99) {
    lVar12 = scrcareer_step_sub_0029f130(param_1[1]);
    if (lVar12 == 0) {
      param_1[0x1b] = 0xf;
    }
    else if (bVar2) {
      param_1[0x1b] = 0x10;
    }
    else if (bVar1) {
      param_1[0x1b] = 0xe;
    }
    else {
      param_1[0x1b] = 4;
    }
  }
  else {
    param_1[0x1b] = 0xc;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x18000;
  return;
}

