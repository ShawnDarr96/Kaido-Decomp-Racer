// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0017c000 - 0x00180000
#include "ghidra_types.h"

// 0x0017c270  size 0x40
void Game_StartNewCareer(void)

{
  g_RaceCtx->mode = '\x05';
  GameState_NewGame();
  g_RaceCtx->raceType = '\x13';
  g_RaceCtx->raceType = '\x10';
  RaceSetup_Prepare();
  return;
}

// 0x0017c2b0  size 0x754
void RaceSetup_FromCareer
               (int param_1,ulong param_2,byte param_3,undefined1 param_4,int param_5,int *param_6,
               undefined8 param_7,undefined4 *param_8,undefined4 param_9)

{
  undefined2 uVar1;
  uint uVar2;
  GameState *pGVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  ulong uVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined1 *puVar21;
  undefined4 uStack_464;
  uint auStack_45c [6];
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined2 auStack_420 [16];
  undefined2 auStack_400 [42];
  undefined1 uStack_3ac;
  undefined4 uStack_3a8;
  uchar uStack_3a0;
  uint uStack_39c;
  uchar uStack_398;
  uchar uStack_397;
  undefined4 uStack_394;
  float fStack_390;
  uint auStack_38c [6];
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined2 auStack_350 [16];
  undefined2 auStack_330 [42];
  undefined1 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 uStack_2d0;
  undefined1 uStack_2cf;
  byte bStack_2ce;
  undefined1 uStack_2cd;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  uchar auStack_280 [4];
  uint uStack_27c;
  uchar uStack_278;
  uchar uStack_277;
  undefined2 uStack_274;
  undefined2 uStack_272;
  float fStack_270;
  undefined1 auStack_26c [24];
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined2 auStack_230 [16];
  undefined2 auStack_210 [42];
  undefined1 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 auStack_1b0 [2];
  int iStack_1a8;
  int aiStack_e0 [54];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar10 = 0x33;
  piVar11 = aiStack_e0;
  do {
    iVar10 = iVar10 + -1;
    *piVar11 = *param_6;
    param_6 = param_6 + 1;
    piVar11 = piVar11 + 1;
  } while (0 < iVar10);
  puVar12 = auStack_1b0;
  iVar10 = 0x33;
  do {
    iVar10 = iVar10 + -1;
    *puVar12 = *param_8;
    param_8 = param_8 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar10);
  uVar18 = param_2 & 0xff;
  if ((uVar18 == 4) || (uVar18 == 7)) {
    if (param_3 == 4) {
      param_3 = 5;
    }
    else if (param_3 == 1) {
      param_3 = 2;
    }
  }
  GameState_NewGame();
  g_RaceCtx->raceType = '\x13';
  g_RaceCtx->raceType = '\r';
  if (aiStack_e0[2] != 0) goto switchD_0017c3e8_caseD_0;
  uVar8 = CarRec_GetPartSlotB(aiStack_e0,0xf);
  uVar9 = CarRec_GetPartSlotB(aiStack_e0,0x10);
  if (5 < param_3) goto switchD_0017c3e8_caseD_0;
                    /* WARNING: Switch is manually overridden */
  switch(param_3) {
  case 1:
    if ((uVar18 == 7) || (uVar18 == 4)) {
      CarRec_SetModelAndColor(uVar8,0x9d);
      CarRec_SetModelAndColor(uVar9,0x9d);
    }
    else {
      CarRec_SetModelAndColor(uVar8,0x98);
      CarRec_SetModelAndColor(uVar9,0x98);
    }
    break;
  case 2:
    CarRec_SetModelAndColor(uVar8,0x9d);
    CarRec_SetModelAndColor(uVar9,0x9d);
    break;
  case 3:
    CarRec_SetModelAndColor(uVar8,0x98);
    CarRec_SetModelAndColor(uVar9,0x98);
    goto LAB_0017c464;
  }
switchD_0017c3e8_caseD_0:
LAB_0017c464:
  CarRec_Copy(aiStack_e0,auStack_280);
  auStack_280[0] = '\x01';
  uStack_27c = 0x89;
  uStack_278 = '\0';
  CarRec_SetMileage(auStack_280,param_7);
  fVar7 = fStack_270;
  uVar6 = uStack_277;
  uVar5 = uStack_278;
  uVar2 = uStack_27c;
  uVar4 = auStack_280[0];
  pGVar3 = g_GameState;
  puVar21 = auStack_26c;
  puVar13 = auStack_38c;
  uStack_3a0 = auStack_280[0];
  uStack_39c = uStack_27c;
  iVar10 = 0x17;
  uStack_398 = uStack_278;
  uStack_397 = uStack_277;
  uStack_394 = CONCAT22(uStack_272,uStack_274);
  fStack_390 = fStack_270;
  puVar14 = puVar21;
  do {
    iVar10 = iVar10 + -1;
    *(undefined1 *)puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = (uint *)((int)puVar13 + 1);
  } while (0 < iVar10);
  puVar20 = auStack_230;
  puVar15 = auStack_350;
  iVar10 = 8;
  uStack_374 = uStack_254;
  uStack_370 = uStack_250;
  uStack_36c = uStack_24c;
  uStack_368 = uStack_248;
  uStack_364 = uStack_244;
  uStack_360 = uStack_240;
  uStack_35c = uStack_23c;
  uStack_358 = uStack_238;
  uStack_354 = uStack_234;
  puVar16 = puVar20;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = puVar16[1];
    *puVar15 = *puVar16;
    puVar15[1] = uVar1;
    puVar16 = puVar16 + 2;
    puVar15 = puVar15 + 2;
  } while (0 < iVar10);
  puVar19 = auStack_210;
  puVar15 = auStack_330;
  iVar10 = 0x15;
  puVar16 = puVar19;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = puVar16[1];
    *puVar15 = *puVar16;
    puVar15[1] = uVar1;
    puVar16 = puVar16 + 2;
    puVar15 = puVar15 + 2;
  } while (0 < iVar10);
  puVar17 = auStack_38c;
  iVar10 = 0x17;
  uStack_2dc = uStack_1bc;
  uStack_2d8 = uStack_1b8;
  g_GameState->entrySetup[0].maybe_state = uVar4;
  pGVar3->entrySetup[0].unk_04 = uVar2;
  puVar13 = &pGVar3->entrySetup[0].unk_14;
  pGVar3->entrySetup[0].unk_08 = uVar5;
  pGVar3->entrySetup[0].racerSlot = uVar6;
  pGVar3->entrySetup[0].maybe_counter = uStack_394;
  pGVar3->entrySetup[0].maybe_accum = fVar7;
  do {
    iVar10 = iVar10 + -1;
    uVar2 = puVar17[1];
    *puVar13 = *puVar17;
    puVar13[1] = uVar2;
    puVar17 = puVar17 + 2;
    puVar13 = puVar13 + 2;
  } while (0 < iVar10);
  if (iStack_1a8 == 0) {
    uVar8 = CarRec_GetPartSlotB(aiStack_e0,0xf);
    uVar9 = CarRec_GetPartSlotB(aiStack_e0,0x10);
    if (param_3 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(param_3) {
      case 1:
        if ((uVar18 == 7) || (uVar18 == 4)) {
          CarRec_SetModelAndColor(uVar8,0x9d);
          CarRec_SetModelAndColor(uVar9,0x9d);
        }
        else {
          CarRec_SetModelAndColor(uVar8,0x98);
          CarRec_SetModelAndColor(uVar9,0x98);
        }
        break;
      case 2:
        CarRec_SetModelAndColor(uVar8,0x9d);
        CarRec_SetModelAndColor(uVar9,0x9d);
        break;
      case 3:
        CarRec_SetModelAndColor(uVar8,0x98);
        CarRec_SetModelAndColor(uVar9,0x98);
        goto LAB_0017c704;
      }
    }
  }
LAB_0017c704:
  CarRec_Copy(auStack_1b0,auStack_280);
  uStack_27c = 0x91;
  auStack_280[0] = '\x01';
  uStack_278 = '\x01';
  CarRec_SetMileage(auStack_280,param_9);
  uVar5 = uStack_278;
  uVar2 = uStack_27c;
  uVar4 = auStack_280[0];
  pGVar3 = g_GameState;
  puVar13 = auStack_45c;
  iVar10 = 0x17;
  uStack_464 = CONCAT22(uStack_272,uStack_274);
  do {
    iVar10 = iVar10 + -1;
    *(undefined1 *)puVar13 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar13 = (uint *)((int)puVar13 + 1);
  } while (0 < iVar10);
  puVar16 = auStack_420;
  iVar10 = 8;
  uStack_444 = uStack_254;
  uStack_440 = uStack_250;
  uStack_43c = uStack_24c;
  uStack_438 = uStack_248;
  uStack_434 = uStack_244;
  uStack_430 = uStack_240;
  uStack_42c = uStack_23c;
  uStack_428 = uStack_238;
  uStack_424 = uStack_234;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = puVar20[1];
    *puVar16 = *puVar20;
    puVar16[1] = uVar1;
    puVar20 = puVar20 + 2;
    puVar16 = puVar16 + 2;
  } while (0 < iVar10);
  puVar16 = auStack_400;
  iVar10 = 0x15;
  do {
    iVar10 = iVar10 + -1;
    uVar1 = puVar19[1];
    *puVar16 = *puVar19;
    puVar16[1] = uVar1;
    puVar19 = puVar19 + 2;
    puVar16 = puVar16 + 2;
  } while (0 < iVar10);
  puVar17 = auStack_45c;
  iVar10 = 0x17;
  uStack_3ac = uStack_1bc;
  uStack_3a8 = uStack_1b8;
  g_GameState->entrySetup[1].maybe_state = uVar4;
  pGVar3->entrySetup[1].unk_04 = uVar2;
  puVar13 = &pGVar3->entrySetup[1].unk_14;
  pGVar3->entrySetup[1].unk_08 = uVar5;
  pGVar3->entrySetup[1].racerSlot = uStack_277;
  pGVar3->entrySetup[1].maybe_counter = uStack_464;
  pGVar3->entrySetup[1].maybe_accum = fStack_270;
  do {
    iVar10 = iVar10 + -1;
    uVar2 = puVar17[1];
    *puVar13 = *puVar17;
    puVar13[1] = uVar2;
    puVar17 = puVar17 + 2;
    puVar13 = puVar13 + 2;
  } while (0 < iVar10);
  GameState_Set_e0(2);
  if (param_5 == 0) {
    uVar9 = 9;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = 9;
  }
  RaceParams_SetDefaults(&uStack_2d0);
  uStack_2cf = Race_GetRewardAmount(param_2,uVar9,uVar8,&uStack_4,&uStack_8);
  uStack_2d0 = (undefined1)param_2;
  uStack_2c8 = 0;
  uStack_2c4 = uStack_4;
  uStack_2c0 = uStack_8;
  bStack_2ce = param_3;
  uStack_2cd = param_4;
  GameState_SaveHeader(&uStack_2d0);
  if (param_1 == 0) {
    GameState_Set_354(0);
    GameState_Set_398(5000000);
    GameState_Set_3a0(100);
  }
  else if (param_1 == 1) {
    GameState_Set_354();
  }
  else {
    GameState_Set_354(2);
  }
  RaceSetup_Prepare();
  return;
}

// 0x0017ca10  size 0x4b4
void RaceSetup_FromQuickRace
               (uchar param_1,undefined8 param_2,ulong param_3,byte param_4,undefined1 param_5,
               int param_6,undefined4 *param_7,uchar param_8)

{
  undefined2 uVar1;
  uint uVar2;
  GameState *pGVar3;
  uchar uVar4;
  uchar uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  uint *puVar14;
  ulong uVar15;
  short sVar16;
  undefined4 uStack_2c4;
  uint auStack_2bc [6];
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined2 auStack_280 [16];
  undefined2 auStack_260 [42];
  undefined1 uStack_20c;
  undefined4 uStack_208;
  undefined1 uStack_200;
  undefined1 uStack_1ff;
  byte bStack_1fe;
  undefined1 uStack_1fd;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uchar auStack_1b0 [4];
  uint uStack_1ac;
  uchar uStack_1a8;
  uchar uStack_1a7;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  float fStack_1a0;
  undefined1 auStack_19c [24];
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 auStack_160 [16];
  undefined2 auStack_140 [42];
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined4 auStack_e0 [2];
  int iStack_d8;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar8 = 0x33;
  puVar9 = auStack_e0;
  do {
    iVar8 = iVar8 + -1;
    *puVar9 = *param_7;
    param_7 = param_7 + 1;
    puVar9 = puVar9 + 1;
  } while (0 < iVar8);
  uVar15 = param_3 & 0xff;
  if ((uVar15 == 4) || (uVar15 == 7)) {
    if (param_4 == 4) {
      param_4 = 5;
    }
    else if (param_4 == 1) {
      param_4 = 2;
    }
  }
  GameState_NewGame();
  g_RaceCtx->raceType = '\x13';
  g_RaceCtx->raceType = param_1;
  if (iStack_d8 == 0) {
    sVar16 = 0;
    uVar6 = CarRec_GetPartSlotB(auStack_e0,0xf);
    uVar7 = CarRec_GetPartSlotB(auStack_e0,0x10);
    if (param_1 == '\x0f') {
      sVar16 = 4;
    }
    if (param_4 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(param_4) {
      case 0:
        CarRec_SetModelAndColor(uVar6,sVar16 + 0x8d);
        CarRec_SetModelAndColor(uVar7,sVar16 + 0x8d);
        break;
      case 1:
        if ((uVar15 == 7) || (uVar15 == 4)) {
          CarRec_SetModelAndColor(uVar6,sVar16 + 0x9d);
          CarRec_SetModelAndColor(uVar7,sVar16 + 0x9d);
        }
        else {
          CarRec_SetModelAndColor(uVar6,sVar16 + 0x98);
          CarRec_SetModelAndColor(uVar7,sVar16 + 0x98);
        }
        break;
      case 2:
        CarRec_SetModelAndColor(uVar6,sVar16 + 0x9d);
        CarRec_SetModelAndColor(uVar7,sVar16 + 0x9d);
        break;
      case 3:
        CarRec_SetModelAndColor(uVar6,sVar16 + 0x98);
        CarRec_SetModelAndColor(uVar7,sVar16 + 0x98);
      }
    }
  }
  CarRec_Copy(auStack_e0,auStack_1b0);
  uStack_1a8 = '\0';
  uStack_1ac = 0x89;
  auStack_1b0[0] = param_8;
  CarRec_SetMileage(auStack_1b0,param_2);
  uVar5 = uStack_1a8;
  uVar2 = uStack_1ac;
  uVar4 = auStack_1b0[0];
  pGVar3 = g_GameState;
  puVar11 = auStack_19c;
  puVar10 = auStack_2bc;
  iVar8 = 0x17;
  uStack_2c4 = CONCAT22(uStack_1a2,uStack_1a4);
  do {
    iVar8 = iVar8 + -1;
    *(undefined1 *)puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = (uint *)((int)puVar10 + 1);
  } while (0 < iVar8);
  puVar13 = auStack_160;
  puVar12 = auStack_280;
  iVar8 = 8;
  uStack_298 = uStack_178;
  uStack_294 = uStack_174;
  uStack_290 = uStack_170;
  uStack_2a4 = uStack_184;
  uStack_2a0 = uStack_180;
  uStack_29c = uStack_17c;
  uStack_28c = uStack_16c;
  uStack_288 = uStack_168;
  uStack_284 = uStack_164;
  do {
    iVar8 = iVar8 + -1;
    uVar1 = puVar13[1];
    *puVar12 = *puVar13;
    puVar12[1] = uVar1;
    puVar13 = puVar13 + 2;
    puVar12 = puVar12 + 2;
  } while (0 < iVar8);
  puVar13 = auStack_140;
  puVar12 = auStack_260;
  iVar8 = 0x15;
  do {
    iVar8 = iVar8 + -1;
    uVar1 = puVar13[1];
    *puVar12 = *puVar13;
    puVar12[1] = uVar1;
    puVar13 = puVar13 + 2;
    puVar12 = puVar12 + 2;
  } while (0 < iVar8);
  puVar14 = auStack_2bc;
  iVar8 = 0x17;
  uStack_20c = uStack_ec;
  uStack_208 = uStack_e8;
  g_GameState->entrySetup[0].maybe_state = uVar4;
  pGVar3->entrySetup[0].unk_04 = uVar2;
  puVar10 = &pGVar3->entrySetup[0].unk_14;
  pGVar3->entrySetup[0].unk_08 = uVar5;
  pGVar3->entrySetup[0].racerSlot = uStack_1a7;
  pGVar3->entrySetup[0].maybe_counter = uStack_2c4;
  pGVar3->entrySetup[0].maybe_accum = fStack_1a0;
  do {
    iVar8 = iVar8 + -1;
    uVar2 = puVar14[1];
    *puVar10 = *puVar14;
    puVar10[1] = uVar2;
    puVar14 = puVar14 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar8);
  GameState_Set_e0(1);
  if (param_6 == 0) {
    uVar7 = 9;
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 9;
  }
  RaceParams_SetDefaults(&uStack_200);
  uStack_1ff = Race_GetRewardAmount(param_3,uVar7,uVar6,&uStack_4,&uStack_8);
  uStack_200 = (undefined1)param_3;
  uStack_1f8 = 0;
  uStack_1f4 = uStack_4;
  uStack_1f0 = uStack_8;
  bStack_1fe = param_4;
  uStack_1fd = param_5;
  GameState_SaveHeader(&uStack_200);
  if (param_1 == '\f') {
    GameState_Set_354(1);
  }
  else {
    GameState_Set_354(2);
  }
  RaceSetup_Prepare();
  return;
}

// 0x0017ced0  size 0xb08
void RaceSetup_Build(uchar param_1,undefined8 param_2,char param_3,ulong param_4,ulong param_5,
                    undefined1 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                    int param_10,uint param_11,char param_12)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  GameState *pGVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  float fVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  uint *puVar18;
  undefined4 *puVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined1 *puVar22;
  undefined4 uStack_a24;
  uint auStack_a1c [6];
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined2 auStack_9e0 [16];
  undefined2 auStack_9c0 [42];
  undefined1 uStack_96c;
  undefined4 uStack_968;
  uchar uStack_960;
  uint uStack_95c;
  uchar uStack_958;
  uchar uStack_957;
  undefined4 uStack_954;
  float fStack_950;
  uint auStack_94c [6];
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined2 auStack_910 [16];
  undefined2 auStack_8f0 [42];
  undefined1 uStack_89c;
  undefined4 uStack_898;
  uchar auStack_890 [4];
  undefined4 uStack_88c;
  undefined1 uStack_888;
  uchar uStack_887;
  undefined2 uStack_884;
  undefined2 uStack_882;
  float fStack_880;
  undefined1 auStack_87c [24];
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined2 auStack_840 [16];
  undefined2 auStack_820 [42];
  undefined1 uStack_7cc;
  undefined4 uStack_7c8;
  undefined2 uStack_7c0;
  undefined2 uStack_7be;
  char cStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined1 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined1 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined2 uStack_788;
  undefined2 uStack_786;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 auStack_77c [23];
  undefined4 auStack_720 [23];
  undefined4 auStack_6c4 [16];
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined2 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined2 uStack_640;
  undefined2 uStack_63e;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined1 auStack_62c [24];
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined2 auStack_5f0 [16];
  undefined2 auStack_5d0 [42];
  undefined1 uStack_57c;
  undefined4 uStack_578;
  undefined2 uStack_570;
  undefined2 uStack_56e;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined1 auStack_55c [24];
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined2 auStack_520 [16];
  undefined2 auStack_500 [42];
  undefined1 uStack_4ac;
  undefined4 uStack_4a8;
  undefined1 uStack_4a0;
  undefined1 uStack_49f;
  undefined1 uStack_49e;
  undefined1 uStack_49d;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined1 uStack_450;
  undefined1 uStack_44f;
  undefined1 uStack_44e;
  undefined1 uStack_44d;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  uchar auStack_400 [4];
  uint uStack_3fc;
  uchar uStack_3f8;
  uchar uStack_3f7;
  undefined2 uStack_3f4;
  undefined2 uStack_3f2;
  float fStack_3f0;
  undefined1 auStack_3ec [24];
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined2 auStack_3b0 [16];
  undefined2 auStack_390 [42];
  undefined1 uStack_33c;
  undefined4 uStack_338;
  undefined2 uStack_330;
  undefined2 uStack_32e;
  char cStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined1 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined2 uStack_2f8;
  undefined2 uStack_2f6;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 auStack_2ec [23];
  undefined4 auStack_290 [23];
  undefined4 auStack_234 [16];
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined2 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined2 uStack_1b0;
  undefined2 uStack_1ae;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_19c [24];
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 auStack_160 [16];
  undefined2 auStack_140 [42];
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  uchar auStack_e0 [4];
  uint uStack_dc;
  uchar uStack_d8;
  uchar uStack_d7;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  float fStack_d0;
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
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((param_4 & 0xff) == 4) || ((param_4 & 0xff) == 7)) {
    if ((param_5 & 0xff) == 4) {
      param_5 = 5;
    }
    else if ((param_5 & 0xff) == 1) {
      param_5 = 2;
    }
  }
  GameState_NewGame();
  g_RaceCtx->raceType = '\x13';
  g_RaceCtx->raceType = param_1;
  if (param_3 == -1) {
    uVar10 = Profile_Get(0);
    Profile_CopyCurrentCar(&uStack_640,uVar10);
    puVar14 = auStack_62c;
    puVar12 = auStack_19c;
    iVar11 = 0x17;
    uStack_1b0 = uStack_640;
    uStack_1a0 = uStack_630;
    uStack_1ae = uStack_63e;
    uStack_1ac = uStack_63c;
    uStack_1a8 = uStack_638;
    uStack_1a4 = uStack_634;
    do {
      iVar11 = iVar11 + -1;
      *puVar12 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar12 = puVar12 + 1;
    } while (0 < iVar11);
    puVar17 = auStack_5f0;
    puVar15 = auStack_160;
    iVar11 = 8;
    uStack_178 = uStack_608;
    uStack_174 = uStack_604;
    uStack_170 = uStack_600;
    uStack_184 = uStack_614;
    uStack_180 = uStack_610;
    uStack_17c = uStack_60c;
    uStack_16c = uStack_5fc;
    uStack_168 = uStack_5f8;
    uStack_164 = uStack_5f4;
    do {
      iVar11 = iVar11 + -1;
      uVar9 = puVar17[1];
      *puVar15 = *puVar17;
      puVar15[1] = uVar9;
      puVar17 = puVar17 + 2;
      puVar15 = puVar15 + 2;
    } while (0 < iVar11);
    puVar17 = auStack_5d0;
    puVar15 = auStack_140;
    iVar11 = 0x15;
    do {
      iVar11 = iVar11 + -1;
      uVar9 = puVar17[1];
      *puVar15 = *puVar17;
      puVar15[1] = uVar9;
      puVar17 = puVar17 + 2;
      puVar15 = puVar15 + 2;
    } while (0 < iVar11);
    uStack_ec = uStack_57c;
    uStack_e8 = uStack_578;
  }
  else {
    uVar10 = Profile_Get(0);
    uVar10 = Garage_GetPartSlot(uVar10,param_3);
    CarRec_InstallPart(&uStack_570,uVar10,0);
    puVar14 = auStack_55c;
    puVar12 = auStack_19c;
    iVar11 = 0x17;
    uStack_1b0 = uStack_570;
    uStack_1a0 = uStack_560;
    uStack_1ae = uStack_56e;
    uStack_1ac = uStack_56c;
    uStack_1a8 = uStack_568;
    uStack_1a4 = uStack_564;
    do {
      iVar11 = iVar11 + -1;
      *puVar12 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar12 = puVar12 + 1;
    } while (0 < iVar11);
    puVar17 = auStack_520;
    puVar15 = auStack_160;
    iVar11 = 8;
    uStack_178 = uStack_538;
    uStack_174 = uStack_534;
    uStack_170 = uStack_530;
    uStack_184 = uStack_544;
    uStack_180 = uStack_540;
    uStack_17c = uStack_53c;
    uStack_16c = uStack_52c;
    uStack_168 = uStack_528;
    uStack_164 = uStack_524;
    do {
      iVar11 = iVar11 + -1;
      uVar9 = puVar17[1];
      *puVar15 = *puVar17;
      puVar15[1] = uVar9;
      puVar17 = puVar17 + 2;
      puVar15 = puVar15 + 2;
    } while (0 < iVar11);
    puVar17 = auStack_500;
    puVar15 = auStack_140;
    iVar11 = 0x15;
    do {
      iVar11 = iVar11 + -1;
      uVar9 = puVar17[1];
      *puVar15 = *puVar17;
      puVar15[1] = uVar9;
      puVar17 = puVar17 + 2;
      puVar15 = puVar15 + 2;
    } while (0 < iVar11);
    uStack_ec = uStack_4ac;
    uStack_e8 = uStack_4a8;
    GameState_Set_3a48(param_3);
  }
  CarRec_Copy(&uStack_1b0,auStack_e0);
  auStack_e0[0] = '\x01';
  uStack_dc = 0x89;
  uStack_d8 = '\0';
  CarRec_SetMileage(auStack_e0,param_2);
  uVar6 = uStack_d8;
  uVar2 = uStack_dc;
  uVar5 = auStack_e0[0];
  pGVar4 = g_GameState;
  puVar12 = auStack_cc;
  puVar13 = auStack_94c;
  iVar11 = 0x17;
  uStack_95c = uStack_dc;
  uStack_958 = uStack_d8;
  uStack_960 = auStack_e0[0];
  uStack_957 = uStack_d7;
  uStack_954 = CONCAT22(uStack_d2,uStack_d4);
  fStack_950 = fStack_d0;
  do {
    iVar11 = iVar11 + -1;
    *(undefined1 *)puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = (uint *)((int)puVar13 + 1);
  } while (0 < iVar11);
  puVar17 = auStack_90;
  puVar15 = auStack_910;
  iVar11 = 8;
  uStack_928 = uStack_a8;
  uStack_924 = uStack_a4;
  uStack_920 = uStack_a0;
  uStack_934 = uStack_b4;
  uStack_930 = uStack_b0;
  uStack_92c = uStack_ac;
  uStack_91c = uStack_9c;
  uStack_918 = uStack_98;
  uStack_914 = uStack_94;
  do {
    iVar11 = iVar11 + -1;
    uVar9 = puVar17[1];
    *puVar15 = *puVar17;
    puVar15[1] = uVar9;
    puVar17 = puVar17 + 2;
    puVar15 = puVar15 + 2;
  } while (0 < iVar11);
  puVar17 = auStack_70;
  puVar15 = auStack_8f0;
  iVar11 = 0x15;
  do {
    iVar11 = iVar11 + -1;
    uVar9 = puVar17[1];
    *puVar15 = *puVar17;
    puVar15[1] = uVar9;
    puVar17 = puVar17 + 2;
    puVar15 = puVar15 + 2;
  } while (0 < iVar11);
  puVar18 = auStack_94c;
  iVar11 = 0x17;
  uStack_89c = uStack_1c;
  uStack_898 = uStack_18;
  g_GameState->entrySetup[0].maybe_state = uVar5;
  pGVar4->entrySetup[0].unk_04 = uVar2;
  puVar13 = &pGVar4->entrySetup[0].unk_14;
  pGVar4->entrySetup[0].unk_08 = uVar6;
  pGVar4->entrySetup[0].racerSlot = uStack_d7;
  pGVar4->entrySetup[0].maybe_counter = uStack_954;
  pGVar4->entrySetup[0].maybe_accum = fStack_d0;
  do {
    iVar11 = iVar11 + -1;
    uVar2 = puVar18[1];
    *puVar13 = *puVar18;
    puVar13[1] = uVar2;
    puVar18 = puVar18 + 2;
    puVar13 = puVar13 + 2;
  } while (0 < iVar11);
  GameState_Set_e0(1);
  if (param_11 == 0xffffffff) {
    if (param_12 != '\b') {
      GameState_Set_354(param_12);
    }
    RaceParams_SetDefaults(&uStack_4a0);
    uStack_49f = Race_GetRewardAmount(param_4,param_8,param_9,&uStack_c,&uStack_10);
    uStack_494 = uStack_c;
    uStack_490 = uStack_10;
    uStack_4a0 = (char)param_4;
    uStack_49e = (char)param_5;
    uStack_49d = param_6;
    uStack_498 = param_7;
    GameState_SaveHeader(&uStack_4a0);
  }
  else {
    if (param_10 == 0) {
      RivalDb_Copy(&uStack_7c0,(short)param_11);
      puVar19 = auStack_77c;
      puVar16 = auStack_2ec;
      iVar11 = 0x17;
      uStack_320 = uStack_7b0;
      uStack_318 = uStack_7a8;
      uStack_314 = uStack_7a4;
      uStack_328 = uStack_7b8;
      cStack_32c = cStack_7bc;
      uStack_324 = uStack_7b4;
      uStack_308 = uStack_798;
      uStack_330 = uStack_7c0;
      uStack_32e = uStack_7be;
      uStack_31c = uStack_7ac;
      uStack_310 = uStack_7a0;
      uStack_30c = uStack_79c;
      uStack_2f4 = uStack_784;
      uStack_304 = uStack_794;
      uStack_300 = uStack_790;
      uStack_2fc = uStack_78c;
      uStack_2f8 = uStack_788;
      uStack_2f6 = uStack_786;
      uStack_2f0 = uStack_780;
      do {
        iVar11 = iVar11 + -1;
        *puVar16 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar16 = puVar16 + 1;
      } while (0 < iVar11);
      puVar19 = auStack_720;
      puVar16 = auStack_290;
      iVar11 = 0x17;
      do {
        iVar11 = iVar11 + -1;
        *puVar16 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar16 = puVar16 + 1;
      } while (0 < iVar11);
      puVar19 = auStack_6c4;
      puVar16 = auStack_234;
      iVar11 = 8;
      do {
        iVar11 = iVar11 + -1;
        uVar3 = puVar19[1];
        *puVar16 = *puVar19;
        puVar16[1] = uVar3;
        puVar19 = puVar19 + 2;
        puVar16 = puVar16 + 2;
      } while (0 < iVar11);
      uStack_1f4 = uStack_684;
      uStack_1f0 = uStack_680;
      uStack_1ec = uStack_67c;
      uStack_1e8 = uStack_678;
      uStack_1e4 = uStack_674;
      uStack_1c4 = uStack_654;
      uStack_1e0 = uStack_670;
      uStack_1c0 = uStack_650;
      uStack_1bc = uStack_64c;
      uStack_1c8 = uStack_658;
      uStack_1dc = uStack_66c;
      uStack_1d8 = uStack_668;
      uStack_1d4 = uStack_664;
      uStack_1d0 = uStack_660;
      uStack_1b8 = uStack_648;
      uStack_1cc = uStack_65c;
      if (cStack_7bc == '\v') {
        uVar9 = RivalRec_GetCourse(&uStack_330);
        Opponent_BuildFromTeam(auStack_890,(char)uVar9,param_5);
        puVar22 = auStack_3ec;
        auStack_400[0] = auStack_890[0];
        uStack_3fc = uStack_88c;
        puVar14 = auStack_87c;
        uStack_3f8 = uStack_888;
        iVar11 = 0x17;
        uStack_3f7 = uStack_887;
        uStack_3f4 = uStack_884;
        uStack_3f2 = uStack_882;
        fStack_3f0 = fStack_880;
        puVar12 = puVar22;
        do {
          iVar11 = iVar11 + -1;
          *puVar12 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar12 = puVar12 + 1;
        } while (0 < iVar11);
        puVar21 = auStack_3b0;
        puVar17 = auStack_840;
        iVar11 = 8;
        uStack_3d4 = uStack_864;
        uStack_3d0 = uStack_860;
        uStack_3cc = uStack_85c;
        uStack_3c8 = uStack_858;
        uStack_3c4 = uStack_854;
        uStack_3c0 = uStack_850;
        uStack_3bc = uStack_84c;
        uStack_3b8 = uStack_848;
        uStack_3b4 = uStack_844;
        puVar15 = puVar21;
        do {
          iVar11 = iVar11 + -1;
          uVar1 = puVar17[1];
          *puVar15 = *puVar17;
          puVar15[1] = uVar1;
          puVar17 = puVar17 + 2;
          puVar15 = puVar15 + 2;
        } while (0 < iVar11);
        puVar20 = auStack_390;
        puVar17 = auStack_820;
        iVar11 = 0x15;
        puVar15 = puVar20;
        do {
          iVar11 = iVar11 + -1;
          uVar1 = puVar17[1];
          *puVar15 = *puVar17;
          puVar15[1] = uVar1;
          puVar17 = puVar17 + 2;
          puVar15 = puVar15 + 2;
        } while (0 < iVar11);
        uStack_3f8 = '\0';
        auStack_400[0] = '\x01';
        uStack_3fc = 0x89;
        uStack_338 = uStack_7c8;
        uStack_33c = uStack_7cc;
        CarRec_SetMileage(auStack_400,param_2);
        fVar8 = fStack_3f0;
        uVar7 = uStack_3f7;
        uVar6 = uStack_3f8;
        uVar2 = uStack_3fc;
        uVar5 = auStack_400[0];
        pGVar4 = g_GameState;
        puVar13 = auStack_a1c;
        iVar11 = 0x17;
        uStack_a24 = CONCAT22(uStack_3f2,uStack_3f4);
        do {
          iVar11 = iVar11 + -1;
          *(undefined1 *)puVar13 = *puVar22;
          puVar22 = puVar22 + 1;
          puVar13 = (uint *)((int)puVar13 + 1);
        } while (0 < iVar11);
        puVar15 = auStack_9e0;
        iVar11 = 8;
        uStack_a04 = uStack_3d4;
        uStack_a00 = uStack_3d0;
        uStack_9fc = uStack_3cc;
        uStack_9f8 = uStack_3c8;
        uStack_9f4 = uStack_3c4;
        uStack_9f0 = uStack_3c0;
        uStack_9ec = uStack_3bc;
        uStack_9e8 = uStack_3b8;
        uStack_9e4 = uStack_3b4;
        do {
          iVar11 = iVar11 + -1;
          uVar1 = puVar21[1];
          *puVar15 = *puVar21;
          puVar15[1] = uVar1;
          puVar21 = puVar21 + 2;
          puVar15 = puVar15 + 2;
        } while (0 < iVar11);
        puVar15 = auStack_9c0;
        iVar11 = 0x15;
        do {
          iVar11 = iVar11 + -1;
          uVar1 = puVar20[1];
          *puVar15 = *puVar20;
          puVar15[1] = uVar1;
          puVar20 = puVar20 + 2;
          puVar15 = puVar15 + 2;
        } while (0 < iVar11);
        puVar18 = auStack_a1c;
        iVar11 = 0x17;
        uStack_96c = uStack_33c;
        uStack_968 = uStack_338;
        g_GameState->entrySetup[0].maybe_state = uVar5;
        pGVar4->entrySetup[0].unk_04 = uVar2;
        pGVar4->entrySetup[0].unk_08 = uVar6;
        puVar13 = &pGVar4->entrySetup[0].unk_14;
        pGVar4->entrySetup[0].racerSlot = uVar7;
        pGVar4->entrySetup[0].maybe_counter = uStack_a24;
        pGVar4->entrySetup[0].maybe_accum = fVar8;
        do {
          iVar11 = iVar11 + -1;
          uVar2 = puVar18[1];
          *puVar13 = *puVar18;
          puVar13[1] = uVar2;
          puVar18 = puVar18 + 2;
          puVar13 = puVar13 + 2;
        } while (0 < iVar11);
        GameState_Set_3a48(uVar9);
      }
      RaceParams_Clear(&g_GameState->recordHeader);
      g_GameState->recordHeader = 1;
      g_GameState->unk_004c = param_11;
      g_GameState->unk_00c8 = 0xffffffff;
      g_GameState->unk_00cc = 0xffffffff;
      g_GameState->unk_00d0 = 0xffffffff;
      g_GameState->unk_00d4 = 0xffffffff;
      g_GameState->unk_00d8 = 0xffffffff;
      g_GameState->unk_00dc = 0xffffffff;
      g_GameState->unk_00c8 = param_11;
    }
    else {
      RaceResult_Compute(param_11);
    }
    RaceParams_SetDefaults(&uStack_450);
    uStack_44f = Race_GetRewardAmount(param_4,param_8,param_9,&uStack_4,&uStack_8);
    uStack_444 = uStack_4;
    uStack_440 = uStack_8;
    uStack_450 = (char)param_4;
    uStack_44e = (char)param_5;
    uStack_44d = param_6;
    uStack_448 = param_7;
    GameState_SaveHeader(&uStack_450);
  }
  RaceSetup_Prepare();
  return;
}

// 0x0017d9e0  size 0x19c
/* 0xe10 = 3600 */

void Time_SplitHms(long param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  if (param_1 == 0) {
    *param_3 = param_2 / 0xe10;
    *param_4 = (param_2 / 0x3c) % 0x3c;
    *param_5 = ((param_2 % 0x3c) * 1000) / 0x3c;
  }
  else {
    *param_3 = (param_2 / 1000) / 0xe10;
    *param_4 = ((param_2 / 1000) / 0x3c) % 0x3c;
    *param_5 = ((param_2 % 60000) * 1000) / 60000;
  }
  if (99 < *param_3) {
    *param_3 = 99;
    *param_4 = 0x3b;
    *param_5 = 999;
  }
  return;
}

// 0x0017db80  size 0x370
int Ranking_ComputePlayerRank(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  RaceTbl *pRVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  RaceEntrySetup *pRVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  RaceRecordA *pRVar14;
  undefined8 uVar15;
  int iVar16;
  RaceRecordA *pRVar17;
  int *piVar18;
  undefined4 *puVar19;
  int iVar20;
  
  pRVar8 = GameState_Elem_f0_xcc(0);
  iVar9 = RaceProg_GetArray_34(0);
  uVar15 = RaceProg_GetArray_40(0);
  pRVar4 = g_RaceTbl;
  bVar2 = pRVar8->maybe_state;
  uVar10 = GameState_Get_1();
  bVar5 = GameState_Get_0();
  uVar6 = GameState_Get_2();
  uVar7 = GameState_Get_3();
  uVar3 = pRVar8->maybe_counter;
  iVar11 = LapTime_GetBest(uVar15);
  iVar12 = SpGauge_GetValue(iVar9);
  if (bVar5 == 8) {
    return -1;
  }
  iVar13 = RaceProg_GetArray_1c(0);
  pRVar17 = pRVar4->recordsA + (uint)bVar2 * 0x12 + (uVar10 & 0xff) * 9 + (uint)bVar5;
  iVar16 = 0;
  pRVar14 = pRVar17;
  while( true ) {
    iVar20 = iVar16;
    iVar16 = (int)(short)uVar3;
    uVar10 = (uint)(*(int *)(iVar13 + 0xc) != 0);
    if (*(int *)pRVar14 == -1) {
      piVar18 = (int *)((int)&pRVar17->field_0x0 + iVar20 * 5 * 4);
      *piVar18 = iVar16;
      *(undefined1 *)(piVar18 + 1) = uVar6;
      *(undefined1 *)((int)piVar18 + 5) = uVar7;
      piVar18[2] = uVar10;
      piVar18[3] = iVar11;
      piVar18[4] = iVar12;
      goto LAB_0017dd10;
    }
    if (*(int *)&pRVar14->field_0x10 < iVar12) break;
    iVar16 = iVar20 + 1;
    pRVar14 = (RaceRecordA *)&pRVar14->field_0x14;
    iVar20 = -1;
    if (0x13 < iVar16) goto LAB_0017dd10;
  }
  iVar13 = 0x13;
  if (iVar20 < 0x13) {
    puVar19 = (undefined4 *)&pRVar17->field_0x17c;
    do {
      iVar13 = iVar13 + -1;
      *puVar19 = puVar19[-5];
      *(undefined1 *)(puVar19 + 1) = *(undefined1 *)(puVar19 + -4);
      *(undefined1 *)((int)puVar19 + 5) = *(undefined1 *)((int)puVar19 + -0xf);
      puVar19[2] = puVar19[-3];
      puVar19[3] = puVar19[-2];
      puVar19[4] = puVar19[-1];
      puVar19 = puVar19 + -5;
    } while (iVar20 < iVar13);
  }
  piVar18 = (int *)((int)&pRVar17->field_0x0 + iVar20 * 5 * 4);
  *piVar18 = iVar16;
  *(undefined1 *)(piVar18 + 1) = uVar6;
  *(undefined1 *)((int)piVar18 + 5) = uVar7;
  piVar18[2] = uVar10;
  piVar18[3] = iVar11;
  piVar18[4] = iVar12;
LAB_0017dd10:
  if (iVar20 == 0) {
    pRVar14 = pRVar17;
    iVar11 = 0;
    iVar12 = iVar9;
    do {
      iVar16 = iVar11;
      iVar11 = iVar16 + 8;
      *(int *)&pRVar14->field_0x190 = *(int *)(iVar12 + 0x100) + *(int *)(iVar12 + 0x104);
      *(int *)&pRVar14->field_0x194 = *(int *)(iVar12 + 0x11c) + *(int *)(iVar12 + 0x120);
      *(int *)&pRVar14->field_0x198 = *(int *)(iVar12 + 0x138) + *(int *)(iVar12 + 0x13c);
      *(int *)&pRVar14->field_0x19c = *(int *)(iVar12 + 0x154) + *(int *)(iVar12 + 0x158);
      *(int *)&pRVar14->field_0x1a0 = *(int *)(iVar12 + 0x170) + *(int *)(iVar12 + 0x174);
      *(int *)&pRVar14->field_0x1a4 = *(int *)(iVar12 + 0x18c) + *(int *)(iVar12 + 400);
      *(int *)&pRVar14->field_0x1a8 = *(int *)(iVar12 + 0x1a8) + *(int *)(iVar12 + 0x1ac);
      piVar18 = (int *)(iVar12 + 0x1c4);
      piVar1 = (int *)(iVar12 + 0x1c8);
      iVar12 = iVar12 + 0xe0;
      *(int *)&pRVar14->field_0x1ac = *piVar18 + *piVar1;
      pRVar14 = (RaceRecordA *)&pRVar14->field_0x20;
    } while (iVar11 < 0x3e);
    iVar9 = iVar11 * 0x1c + iVar9;
    *(int *)(&pRVar17->field_0x1b0 + iVar16 * 4) = *(int *)(iVar9 + 0x100) + *(int *)(iVar9 + 0x104)
    ;
    *(int *)(&pRVar17->field_0x1b4 + iVar16 * 4) = *(int *)(iVar9 + 0x11c) + *(int *)(iVar9 + 0x120)
    ;
    *(int *)(&pRVar17->field_0x1b8 + iVar16 * 4) = *(int *)(iVar9 + 0x138) + *(int *)(iVar9 + 0x13c)
    ;
    *(int *)(&pRVar17->field_0x1bc + iVar16 * 4) = *(int *)(iVar9 + 0x154) + *(int *)(iVar9 + 0x158)
    ;
    *(int *)(&pRVar17->field_0x1c0 + iVar16 * 4) = *(int *)(iVar9 + 0x170) + *(int *)(iVar9 + 0x174)
    ;
    *(int *)(&pRVar17->field_0x1c4 + iVar16 * 4) = *(int *)(iVar9 + 0x18c) + *(int *)(iVar9 + 400);
  }
  return iVar20;
}

// 0x0017def0  size 0x24c
int Ranking_FindBestRival(void)

{
  byte bVar1;
  uint uVar2;
  RaceTbl *pRVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  RaceEntrySetup *pRVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  RaceRecordB *pRVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  RaceRecordB *pRVar16;
  int iVar17;
  int iVar18;
  
  iVar17 = -1;
  pRVar7 = GameState_Elem_f0_xcc(0);
  iVar8 = RaceProg_GetArray_40(0);
  pRVar3 = g_RaceTbl;
  bVar1 = pRVar7->maybe_state;
  uVar9 = GameState_Get_1();
  bVar4 = GameState_Get_0();
  uVar5 = GameState_Get_2();
  uVar6 = GameState_Get_3();
  uVar2 = pRVar7->maybe_counter;
  iVar10 = LapTime_GetBest(iVar8);
  if (bVar4 == 8) {
    iVar17 = -1;
  }
  else if (iVar10 != 0) {
    iVar11 = RaceProg_GetArray_1c(0);
    iVar13 = 0;
    pRVar12 = pRVar3->recordsB + (uint)bVar1 * 0x12 + (uVar9 & 0xff) * 9 + (uint)bVar4;
    pRVar16 = pRVar12;
    while( true ) {
      iVar18 = (int)(short)uVar2;
      uVar9 = (uint)(*(int *)(iVar11 + 0xc) != 0);
      if (*(int *)pRVar16 == -1) {
        piVar14 = (int *)((int)&pRVar12->field_0x0 + iVar13 * 4 * 4);
        *piVar14 = iVar18;
        *(undefined1 *)(piVar14 + 1) = uVar5;
        *(undefined1 *)((int)piVar14 + 5) = uVar6;
        piVar14[2] = uVar9;
        piVar14[3] = iVar10;
        iVar17 = iVar13;
        goto LAB_0017e048;
      }
      if (iVar10 < *(int *)&pRVar16->field_0xc) break;
      iVar13 = iVar13 + 1;
      pRVar16 = (RaceRecordB *)&pRVar16->field_0x10;
      if (0x13 < iVar13) goto LAB_0017e048;
    }
    iVar17 = 0x13;
    if (iVar13 < 0x13) {
      puVar15 = (undefined4 *)&pRVar12->field_0x130;
      do {
        iVar17 = iVar17 + -1;
        *puVar15 = puVar15[-4];
        *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar15 + -3);
        *(undefined1 *)((int)puVar15 + 5) = *(undefined1 *)((int)puVar15 + -0xb);
        puVar15[2] = puVar15[-2];
        puVar15[3] = puVar15[-1];
        puVar15 = puVar15 + -4;
      } while (iVar13 < iVar17);
    }
    piVar14 = (int *)((int)&pRVar12->field_0x0 + iVar13 * 4 * 4);
    *piVar14 = iVar18;
    *(undefined1 *)(piVar14 + 1) = uVar5;
    *(undefined1 *)((int)piVar14 + 5) = uVar6;
    piVar14[2] = uVar9;
    piVar14[3] = iVar10;
    iVar17 = iVar13;
LAB_0017e048:
    if (iVar17 == 0) {
      iVar10 = 0;
      do {
        iVar10 = iVar10 + 5;
        *(undefined4 *)&pRVar12->field_0x140 = *(undefined4 *)(iVar8 + 4);
        *(undefined4 *)&pRVar12->field_0x144 = *(undefined4 *)(iVar8 + 0x10);
        *(undefined4 *)&pRVar12->field_0x148 = *(undefined4 *)(iVar8 + 0x1c);
        *(undefined4 *)&pRVar12->field_0x14c = *(undefined4 *)(iVar8 + 0x28);
        *(undefined4 *)&pRVar12->field_0x150 = *(undefined4 *)(iVar8 + 0x34);
        iVar8 = iVar8 + 0x3c;
        pRVar12 = (RaceRecordB *)&pRVar12->field_0x14;
      } while (iVar10 < 10);
    }
  }
  return iVar17;
}

// 0x0017e140  size 0x58
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* 0x2fd0/0x17e8/0x2a8 strides */

RaceRecordA * RaceTbl_GetCourseEntry(RaceTbl *tbl,uint a,uint b,uint c)

{
  return tbl->recordsA + (a & 0xff) * 0x12 + (b & 0xff) * 9 + (c & 0xff);
}

// 0x0017e1a0  size 0x40
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* records [2][2][9] of 0x168 (tbl = RaceTbl_Ptr_5fa0()) */

RaceRecordB * RaceTbl_GetCourseEntryB(RaceRecordB *tbl,uint a,uint b,uint c)

{
  return tbl + (a & 0xff) * 0x12 + (b & 0xff) * 9 + (c & 0xff);
}

// 0x0017e1e0  size 0xc
RaceRecordB * RaceTbl_Ptr_5fa0(void)

{
  return g_RaceTbl->recordsB;
}

// 0x0017e1f0  size 0x8
RaceTbl * maybe_RaceTbl_GetCount(void)

{
  return g_RaceTbl;
}

// 0x0017e200  size 0x8
RaceTbl * maybe_RaceTbl_GetCapacity(void)

{
  return g_RaceTbl;
}

// 0x0017e210  size 0x28
void RaceTbl_Free(void)

{
  if (g_RaceTbl != (RaceTbl *)0x0) {
    Mem_Free();
  }
  return;
}

// 0x0017e240  size 0x1e0
/* 0x9240 bytes */

void RaceTbl_Alloc(undefined8 param_1)

{
  RaceTbl *pRVar1;
  RaceTbl *pRVar2;
  RaceRecordB *pRVar3;
  RaceTbl *pRVar4;
  RaceRecordB *pRVar5;
  RaceTbl *pRVar6;
  RaceRecordB *pRVar7;
  int iVar8;
  int iVar9;
  RaceRecordB *pRVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  pRVar1 = (RaceTbl *)Mem_Alloc16(0x9240,param_1);
  iVar13 = 0;
  g_RaceTbl = pRVar1;
  do {
    iVar12 = 0;
    pRVar6 = pRVar1;
    do {
      iVar11 = 0;
      pRVar4 = pRVar6;
      do {
        iVar8 = 0;
        pRVar2 = pRVar4;
        do {
          *(undefined4 *)pRVar2->recordsA = 0xffffffff;
          *(undefined4 *)&pRVar2->recordsA[0].field_0xc = 0;
          iVar8 = iVar8 + 5;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x10 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x14 = 0xffffffff;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x20 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x24 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x28 = 0xffffffff;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x34 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x38 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x3c = 0xffffffff;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x48 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x4c = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x50 = 0xffffffff;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x5c = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x60 = 0;
          pRVar2 = (RaceTbl *)&pRVar2->recordsA[0].field_0x64;
        } while (iVar8 < 0x14);
        pRVar2 = pRVar4;
        iVar8 = 0;
        do {
          iVar9 = iVar8;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x190 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x194 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x198 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x19c = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x1a0 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x1a4 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x1a8 = 0;
          *(undefined4 *)&pRVar2->recordsA[0].field_0x1ac = 0;
          pRVar2 = (RaceTbl *)&pRVar2->recordsA[0].field_0x20;
          iVar8 = iVar9 + 8;
        } while (iVar9 + 8 < 0x3e);
        iVar11 = iVar11 + 1;
        *(undefined4 *)(&pRVar4->recordsA[0].field_0x1b0 + iVar9 * 4) = 0;
        *(undefined4 *)(&pRVar4->recordsA[0].field_0x1b4 + iVar9 * 4) = 0;
        *(undefined4 *)(&pRVar4->recordsA[0].field_0x1b8 + iVar9 * 4) = 0;
        *(undefined4 *)(&pRVar4->recordsA[0].field_0x1bc + iVar9 * 4) = 0;
        *(undefined4 *)(&pRVar4->recordsA[0].field_0x1c0 + iVar9 * 4) = 0;
        *(undefined4 *)(&pRVar4->recordsA[0].field_0x1c4 + iVar9 * 4) = 0;
        pRVar4 = (RaceTbl *)(pRVar4->recordsA + 1);
      } while (iVar11 < 9);
      iVar12 = iVar12 + 1;
      pRVar6 = (RaceTbl *)(pRVar6->recordsA + 9);
    } while (iVar12 < 2);
    iVar13 = iVar13 + 1;
    pRVar1 = (RaceTbl *)(pRVar1->recordsA + 0x12);
  } while (iVar13 < 2);
  iVar13 = 0;
  pRVar10 = g_RaceTbl->recordsB;
  do {
    iVar12 = 0;
    pRVar7 = pRVar10;
    do {
      iVar11 = 0;
      pRVar5 = pRVar7;
      do {
        iVar8 = 0;
        pRVar3 = pRVar5;
        do {
          *(undefined4 *)pRVar3 = 0xffffffff;
          *(undefined4 *)&pRVar3->field_0xc = 0;
          iVar8 = iVar8 + 5;
          *(undefined4 *)&pRVar3->field_0x10 = 0xffffffff;
          *(undefined4 *)&pRVar3->field_0x1c = 0;
          *(undefined4 *)&pRVar3->field_0x20 = 0xffffffff;
          *(undefined4 *)&pRVar3->field_0x2c = 0;
          *(undefined4 *)&pRVar3->field_0x30 = 0xffffffff;
          *(undefined4 *)&pRVar3->field_0x3c = 0;
          *(undefined4 *)&pRVar3->field_0x40 = 0xffffffff;
          *(undefined4 *)&pRVar3->field_0x4c = 0;
          pRVar3 = (RaceRecordB *)&pRVar3->field_0x50;
        } while (iVar8 < 0x14);
        iVar8 = 0;
        pRVar3 = pRVar5;
        do {
          *(undefined4 *)&pRVar3->field_0x140 = 0;
          *(undefined4 *)&pRVar3->field_0x144 = 0;
          iVar8 = iVar8 + 5;
          *(undefined4 *)&pRVar3->field_0x148 = 0;
          *(undefined4 *)&pRVar3->field_0x14c = 0;
          *(undefined4 *)&pRVar3->field_0x150 = 0;
          pRVar3 = (RaceRecordB *)&pRVar3->field_0x14;
        } while (iVar8 < 10);
        iVar11 = iVar11 + 1;
        pRVar5 = pRVar5 + 1;
      } while (iVar11 < 9);
      iVar12 = iVar12 + 1;
      pRVar7 = pRVar7 + 9;
    } while (iVar12 < 2);
    iVar13 = iVar13 + 1;
    pRVar10 = pRVar10 + 0x12;
  } while (iVar13 < 2);
  return;
}

// 0x0017e420  size 0xc
uint GameState_Get_3ac8(void)

{
  return g_GameState->unk_3ac8;
}

// 0x0017e430  size 0xac
undefined4 Race_GetLapCountForMode(ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 10;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 4) == 0) {
      if ((param_1 & 8) == 0) {
        if ((param_1 & 0x10) == 0) {
          if ((param_1 & 0x20) == 0) {
            if ((param_1 & 0x40) == 0) {
              if ((param_1 & 0x80) == 0) {
                if ((param_1 & 0x100) != 0) {
                  uVar1 = 7;
                }
              }
              else {
                uVar1 = 6;
              }
            }
            else {
              uVar1 = 5;
            }
          }
          else {
            uVar1 = 4;
          }
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0017e4e0  size 0x70
undefined4 Race_GetOpponentCount(byte param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_1 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      break;
    case 1:
      uVar1 = 4;
      break;
    case 2:
      uVar1 = 8;
      break;
    case 3:
      uVar1 = 0x10;
      break;
    case 4:
      uVar1 = 0x20;
      break;
    case 5:
      uVar1 = 0x40;
      break;
    case 6:
      uVar1 = 0x80;
      break;
    case 7:
      uVar1 = 0x100;
    }
  }
  return uVar1;
}

// 0x0017e550  size 0x124
ulong Race_GetCourseId(uchar param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_1 == '\n') || (param_1 == '\n')) {
    if (g_RaceCtx->raceType == '\x13') {
      param_1 = g_RaceCtx->courseOverride;
    }
    else {
      param_1 = GameState_Get_0();
    }
  }
  if (g_RaceCtx->mode == '\x01') {
    uVar2 = Profile_Get(0);
    uVar1 = Profile_GetDifficulty(uVar2);
  }
  else if (g_RaceCtx->raceType == '\x13') {
    uVar1 = (ulong)(char)g_RaceCtx->unk_0012;
  }
  else {
    uVar1 = GameState_Get_2();
  }
  if ((uVar1 & 0xff) == 1) {
    if ((param_1 == '\x04') || (param_1 == '\a')) {
      uVar1 = 2;
    }
  }
  else if (((uVar1 & 0xff) == 4) && ((param_1 == '\x04' || (param_1 == '\a')))) {
    uVar1 = 5;
  }
  return uVar1;
}

// 0x0017e680  size 0x60
uchar Race_GetTimeOfDay(void)

{
  uchar uVar1;
  undefined8 uVar2;
  
  if (g_RaceCtx->mode == '\x01') {
    uVar2 = Profile_Get(0);
    uVar1 = Profile_GetDifficulty(uVar2);
  }
  else if (g_RaceCtx->raceType == '\x13') {
    uVar1 = g_RaceCtx->unk_0012;
  }
  else {
    uVar1 = GameState_Get_2();
  }
  return uVar1;
}

// 0x0017e6e0  size 0x38
uchar Race_GetDirection(void)

{
  uchar uVar1;
  
  if (g_RaceCtx->raceType == '\x13') {
    uVar1 = g_RaceCtx->directionOverride;
  }
  else {
    uVar1 = GameState_Get_1();
  }
  return uVar1;
}

// 0x0017e720  size 0x38
/* 19 callers */

uchar Race_GetCourseVariant(void)

{
  uchar uVar1;
  
  if (g_RaceCtx->raceType == '\x13') {
    uVar1 = g_RaceCtx->courseOverride;
  }
  else {
    uVar1 = GameState_Get_0();
  }
  return uVar1;
}

// 0x0017e760  size 0x60
uchar Race_GetWeather(void)

{
  uchar uVar1;
  undefined8 uVar2;
  
  if (g_RaceCtx->mode == '\x01') {
    uVar2 = Profile_Get(0);
    uVar1 = Profile_GetChapter(uVar2);
  }
  else if (g_RaceCtx->raceType == '\x13') {
    uVar1 = g_RaceCtx->unk_0013;
  }
  else {
    uVar1 = GameState_Get_3();
  }
  return uVar1;
}

// 0x0017e7c0  size 0x18
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* type = 9 (empty), id = -1 */

void RaceSlot_Clear(RaceSlot *slot)

{
  slot->type = '\t';
  slot->id = 0xffffffff;
  slot->unk_08 = 0;
  return;
}

// 0x0017e7e0  size 0x1c
void RaceCtx_SetDefaults(undefined1 *param_1)

{
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 0x0017e800  size 0xc
void RaceCtx_Set_14(uchar param_1)

{
  g_RaceCtx->unk_0014 = param_1;
  return;
}

// 0x0017e810  size 0xc
void RaceCtx_Set_13(uchar param_1)

{
  g_RaceCtx->unk_0013 = param_1;
  return;
}

// 0x0017e820  size 0xc
void RaceCtx_Set_12(uchar param_1)

{
  g_RaceCtx->unk_0012 = param_1;
  return;
}

// 0x0017e830  size 0xc
void RaceCtx_Set_10(uchar param_1)

{
  g_RaceCtx->courseOverride = param_1;
  return;
}

// 0x0017e840  size 0xc
uchar RaceCtx_Get_13(void)

{
  return g_RaceCtx->unk_0013;
}

// 0x0017e850  size 0xc
uchar RaceCtx_Get_10(void)

{
  return g_RaceCtx->courseOverride;
}

// 0x0017e860  size 0xc
void RaceCtx_Set_9(uchar param_1)

{
  g_RaceCtx->unk_0009 = param_1;
  return;
}

// 0x0017e870  size 0xc
uchar RaceCtx_Get_9(void)

{
  return g_RaceCtx->unk_0009;
}

// 0x0017e880  size 0xc
void RaceCtx_Set_8(uchar param_1)

{
  g_RaceCtx->raceType = param_1;
  return;
}

// 0x0017e890  size 0xc
uchar RaceCtx_Get_8(void)

{
  return g_RaceCtx->raceType;
}

// 0x0017e8a0  size 0xc
void RaceCtx_Set_4(uint param_1)

{
  g_RaceCtx->unk_0004 = param_1;
  return;
}

// 0x0017e8b0  size 0xc
uint RaceCtx_Get_4(void)

{
  return g_RaceCtx->unk_0004;
}

// 0x0017e8c0  size 0xc
void RaceCtx_SetMode(uchar param_1)

{
  g_RaceCtx->mode = param_1;
  return;
}

// 0x0017e8d0  size 0xc
/* 31 callers */

uchar RaceCtx_GetMode(void)

{
  return g_RaceCtx->mode;
}

// 0x0017e8e0  size 0x1f4
undefined4 Course_GetStartTransform(int param_1,undefined4 *param_2,int *param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar2 = (int *)g_GameState->replayBuf;
  if (param_1 < *piVar2) {
    if (param_1 < 0) {
      iStack_40 = piVar2[4];
      iStack_3c = piVar2[5];
      iStack_38 = piVar2[6];
      iStack_34 = piVar2[7];
      iStack_30 = piVar2[8];
      iStack_2c = piVar2[9];
      iStack_28 = piVar2[10];
      iStack_24 = piVar2[0xb];
      iStack_20 = piVar2[0xc];
      iStack_1c = piVar2[0xd];
      iStack_18 = piVar2[0xe];
      iStack_14 = piVar2[0xf];
      iStack_10 = piVar2[0x10];
      iStack_c = piVar2[0x11];
      iStack_8 = piVar2[0x12];
      iStack_4 = piVar2[0x13];
    }
    else {
      iStack_40 = piVar2[param_1 * 0x10 + 4];
      iStack_3c = piVar2[param_1 * 0x10 + 5];
      iStack_38 = piVar2[param_1 * 0x10 + 6];
      iStack_34 = piVar2[param_1 * 0x10 + 7];
      iStack_30 = piVar2[param_1 * 0x10 + 8];
      iStack_2c = piVar2[param_1 * 0x10 + 9];
      iStack_28 = piVar2[param_1 * 0x10 + 10];
      iStack_24 = piVar2[param_1 * 0x10 + 0xb];
      iStack_20 = piVar2[param_1 * 0x10 + 0xc];
      iStack_1c = piVar2[param_1 * 0x10 + 0xd];
      iStack_18 = piVar2[param_1 * 0x10 + 0xe];
      iStack_14 = piVar2[param_1 * 0x10 + 0xf];
      iStack_10 = piVar2[param_1 * 0x10 + 0x10];
      iStack_c = piVar2[param_1 * 0x10 + 0x11];
      iStack_8 = piVar2[param_1 * 0x10 + 0x12];
      iStack_4 = piVar2[param_1 * 0x10 + 0x13];
    }
    uVar3 = 1;
  }
  else {
    iVar1 = *piVar2 + -1;
    uVar3 = 0;
    iStack_40 = piVar2[iVar1 * 0x10 + 4];
    iStack_3c = piVar2[iVar1 * 0x10 + 5];
    iStack_38 = piVar2[iVar1 * 0x10 + 6];
    iStack_34 = piVar2[iVar1 * 0x10 + 7];
    iStack_30 = piVar2[iVar1 * 0x10 + 8];
    iStack_2c = piVar2[iVar1 * 0x10 + 9];
    iStack_28 = piVar2[iVar1 * 0x10 + 10];
    iStack_24 = piVar2[iVar1 * 0x10 + 0xb];
    iStack_20 = piVar2[iVar1 * 0x10 + 0xc];
    iStack_1c = piVar2[iVar1 * 0x10 + 0xd];
    iStack_18 = piVar2[iVar1 * 0x10 + 0xe];
    iStack_14 = piVar2[iVar1 * 0x10 + 0xf];
    iStack_10 = piVar2[iVar1 * 0x10 + 0x10];
    iStack_c = piVar2[iVar1 * 0x10 + 0x11];
    iStack_8 = piVar2[iVar1 * 0x10 + 0x12];
    iStack_4 = piVar2[iVar1 * 0x10 + 0x13];
  }
  Mat34_Identity(&uStack_80);
  iStack_90 = iStack_40;
  iStack_8c = iStack_3c;
  iStack_88 = iStack_38;
  Mat33_Copy(&uStack_80,&iStack_90);
  Quat_ToMat33Normalized(&uStack_80,&iStack_30);
  *param_2 = uStack_80;
  param_2[1] = uStack_7c;
  param_2[2] = uStack_78;
  param_2[3] = uStack_74;
  param_2[4] = uStack_70;
  param_2[5] = uStack_6c;
  param_2[6] = uStack_68;
  param_2[7] = uStack_64;
  param_2[8] = uStack_60;
  param_2[9] = uStack_5c;
  param_2[10] = uStack_58;
  param_2[0xb] = uStack_54;
  param_2[0xc] = uStack_50;
  param_2[0xd] = uStack_4c;
  param_2[0xe] = uStack_48;
  param_2[0xf] = uStack_44;
  *param_3 = iStack_10;
  param_3[1] = iStack_c;
  param_3[2] = iStack_8;
  param_3[3] = iStack_4;
  if (param_4 != 0) {
    piVar2 = (int *)param_4;
    *piVar2 = iStack_20;
    piVar2[1] = iStack_1c;
    piVar2[2] = iStack_18;
    piVar2[3] = iStack_14;
  }
  return uVar3;
}

// 0x0017eae0  size 0x17c
void Course_TransformStartPoint
               (long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  GameState *pGVar2;
  int iVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
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
  
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  uStack_30 = param_2[4];
  uStack_2c = param_2[5];
  uStack_28 = param_2[6];
  uStack_24 = param_2[7];
  uStack_20 = param_2[8];
  uStack_1c = param_2[9];
  uStack_18 = param_2[10];
  uStack_14 = param_2[0xb];
  uStack_10 = param_2[0xc];
  uStack_c = param_2[0xd];
  uStack_8 = param_2[0xe];
  uStack_4 = param_2[0xf];
  uStack_50 = *param_3;
  uStack_4c = param_3[1];
  uStack_48 = param_3[2];
  uStack_44 = param_3[3];
  if (param_1 < 0x30c1) {
    Mat33_ToQuat(&uStack_60,&uStack_40);
    iVar3 = (int)param_1 * 0x40;
    *(undefined4 *)(g_GameState->ghostBuf + iVar3 + 0x10) = uStack_10;
    *(undefined4 *)(g_GameState->ghostBuf + iVar3 + 0x14) = uStack_c;
    *(undefined4 *)(g_GameState->ghostBuf + iVar3 + 0x18) = uStack_8;
    *(undefined4 *)(g_GameState->ghostBuf + iVar3 + 0x1c) = uStack_4;
    puVar1 = g_GameState->ghostBuf;
    *(undefined4 *)(puVar1 + iVar3 + 0x20) = uStack_60;
    *(undefined4 *)(puVar1 + iVar3 + 0x24) = uStack_5c;
    *(undefined4 *)(puVar1 + iVar3 + 0x28) = uStack_58;
    *(undefined4 *)(puVar1 + iVar3 + 0x2c) = uStack_54;
    pGVar2 = g_GameState;
    puVar1 = g_GameState->ghostBuf;
    *(undefined4 *)(puVar1 + iVar3 + 0x40) = uStack_50;
    *(undefined4 *)(puVar1 + iVar3 + 0x44) = uStack_4c;
    *(undefined4 *)(puVar1 + iVar3 + 0x48) = uStack_48;
    *(undefined4 *)(puVar1 + iVar3 + 0x4c) = uStack_44;
    *(undefined4 *)(pGVar2->ghostBuf + iVar3 + 0x30) = *param_4;
    *(undefined4 *)(g_GameState->ghostBuf + iVar3 + 0x34) = param_4[1];
    *(undefined4 *)(g_GameState->ghostBuf + iVar3 + 0x38) = param_4[2];
    *(undefined4 *)(g_GameState->ghostBuf + iVar3 + 0x3c) = param_4[3];
    *(int *)g_GameState->ghostBuf = (int)param_1 + 1;
  }
  return;
}

// 0x0017ec60  size 0x7c
void RaceResult_Begin(uint param_1)

{
  RaceParams_Clear(&g_GameState->recordHeader);
  g_GameState->recordHeader = 1;
  g_GameState->unk_004c = param_1;
  g_GameState->unk_00c8 = 0xffffffff;
  g_GameState->unk_00cc = 0xffffffff;
  g_GameState->unk_00d0 = 0xffffffff;
  g_GameState->unk_00d4 = 0xffffffff;
  g_GameState->unk_00d8 = 0xffffffff;
  g_GameState->unk_00dc = 0xffffffff;
  g_GameState->unk_00c8 = param_1;
  return;
}

// 0x0017ece0  size 0xbc0
/* WARNING: Removing unreachable block (ram,0x0017f750) */

void RaceResult_Compute(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined2 *puVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  short sVar12;
  undefined4 *puVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iStack_7b0;
  undefined2 uStack_790;
  short sStack_78e;
  undefined1 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined1 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined1 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined2 uStack_758;
  undefined2 uStack_756;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 auStack_74c [23];
  undefined4 auStack_6f0 [23];
  undefined4 auStack_694 [16];
  int iStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined2 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined2 uStack_610;
  undefined2 uStack_60e;
  undefined1 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined1 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined1 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined2 uStack_5d8;
  undefined2 uStack_5d6;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 auStack_5cc [23];
  undefined4 auStack_570 [23];
  undefined4 auStack_514 [16];
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined2 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined2 uStack_490;
  short sStack_48e;
  undefined1 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined1 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined1 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined2 uStack_458;
  undefined2 uStack_456;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 auStack_44c [23];
  undefined4 auStack_3f0 [23];
  undefined4 auStack_394 [16];
  int iStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined2 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined2 uStack_310;
  undefined2 uStack_30e;
  undefined1 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined1 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined2 uStack_2d8;
  undefined2 uStack_2d6;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 auStack_2cc [23];
  undefined4 auStack_270 [23];
  undefined4 auStack_214 [16];
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined2 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined2 uStack_190;
  short sStack_18e;
  undefined1 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 auStack_14c [23];
  undefined4 auStack_f0 [23];
  undefined4 auStack_94 [16];
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  short asStack_28 [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  short asStack_14 [10];
  
  RaceParams_Clear(&g_GameState->recordHeader);
  uVar22 = 0;
  iStack_7b0 = -1;
  asStack_14[2] = -1;
  iVar23 = 0;
  asStack_14[3] = -1;
  asStack_14[4] = -1;
  asStack_14[5] = -1;
  asStack_14[6] = -1;
  asStack_14[7] = -1;
  do {
    sVar12 = (short)iVar23;
    RivalDb_Copy(&uStack_490,sVar12);
    puVar13 = auStack_44c;
    uStack_190 = uStack_490;
    uStack_178 = uStack_478;
    puVar11 = auStack_14c;
    sStack_18e = sStack_48e;
    uStack_174 = uStack_474;
    uStack_18c = uStack_48c;
    iVar9 = 0x17;
    uStack_188 = uStack_488;
    uStack_184 = uStack_484;
    uStack_180 = uStack_480;
    uStack_17c = uStack_47c;
    uStack_170 = uStack_470;
    uStack_16c = uStack_46c;
    uStack_168 = uStack_468;
    uStack_164 = uStack_464;
    uStack_160 = uStack_460;
    uStack_15c = uStack_45c;
    uStack_158 = uStack_458;
    uStack_156 = uStack_456;
    uStack_154 = uStack_454;
    uStack_150 = uStack_450;
    do {
      iVar9 = iVar9 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar9);
    iVar9 = 0x17;
    puVar13 = auStack_3f0;
    puVar11 = auStack_f0;
    do {
      iVar9 = iVar9 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar9);
    iVar9 = 8;
    puVar13 = auStack_394;
    puVar11 = auStack_94;
    do {
      iVar9 = iVar9 + -1;
      uVar1 = puVar13[1];
      *puVar11 = *puVar13;
      puVar11[1] = uVar1;
      puVar13 = puVar13 + 2;
      puVar11 = puVar11 + 2;
    } while (0 < iVar9);
    uStack_48 = uStack_348;
    uStack_44 = uStack_344;
    uStack_40 = uStack_340;
    uStack_3c = uStack_33c;
    uStack_50 = uStack_350;
    uStack_4c = uStack_34c;
    uStack_38 = uStack_338;
    uStack_34 = uStack_334;
    uStack_30 = uStack_330;
    iStack_54 = iStack_354;
    asStack_28[0] = uStack_328;
    uStack_24 = uStack_324;
    uStack_20 = uStack_320;
    uStack_1c = uStack_31c;
    uStack_18 = uStack_318;
    uStack_2c = uStack_32c;
    if (sStack_48e == -1) break;
    sVar7 = RivalRec_GetId(&uStack_190);
    if ((long)param_1 == (long)sVar7) {
      cVar6 = RivalRec_GetTeam(&uStack_190);
      if (cVar6 != '\x01') {
        iVar9 = 0;
        psVar20 = asStack_14 + 2;
LAB_0017f3b8:
        if (*psVar20 == -1) {
          uVar22 = uVar22 + 1;
          asStack_14[iVar9 + 2] = sVar12;
        }
        else {
          RivalDb_Copy(&uStack_610);
          puVar13 = auStack_5cc;
          uStack_310 = uStack_610;
          uStack_2f8 = uStack_5f8;
          puVar11 = auStack_2cc;
          uStack_30e = uStack_60e;
          uStack_2f4 = uStack_5f4;
          uStack_30c = uStack_60c;
          iVar21 = 0x17;
          uStack_308 = uStack_608;
          uStack_304 = uStack_604;
          uStack_300 = uStack_600;
          uStack_2fc = uStack_5fc;
          uStack_2f0 = uStack_5f0;
          uStack_2ec = uStack_5ec;
          uStack_2e8 = uStack_5e8;
          uStack_2e4 = uStack_5e4;
          uStack_2e0 = uStack_5e0;
          uStack_2dc = uStack_5dc;
          uStack_2d8 = uStack_5d8;
          uStack_2d6 = uStack_5d6;
          uStack_2d4 = uStack_5d4;
          uStack_2d0 = uStack_5d0;
          do {
            iVar21 = iVar21 + -1;
            *puVar11 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar11 = puVar11 + 1;
          } while (0 < iVar21);
          iVar21 = 0x17;
          puVar13 = auStack_570;
          puVar11 = auStack_270;
          do {
            iVar21 = iVar21 + -1;
            *puVar11 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar11 = puVar11 + 1;
          } while (0 < iVar21);
          iVar21 = 8;
          puVar13 = auStack_514;
          puVar11 = auStack_214;
          do {
            iVar21 = iVar21 + -1;
            uVar1 = puVar13[1];
            *puVar11 = *puVar13;
            puVar11[1] = uVar1;
            puVar13 = puVar13 + 2;
            puVar11 = puVar11 + 2;
          } while (0 < iVar21);
          uStack_1c8 = uStack_4c8;
          uStack_1c4 = uStack_4c4;
          uStack_1c0 = uStack_4c0;
          uStack_1bc = uStack_4bc;
          uStack_1d0 = uStack_4d0;
          uStack_1cc = uStack_4cc;
          uStack_1b8 = uStack_4b8;
          uStack_1b4 = uStack_4b4;
          uStack_1b0 = uStack_4b0;
          uStack_1ac = uStack_4ac;
          uStack_1d4 = uStack_4d4;
          uStack_1a8 = uStack_4a8;
          uStack_1a4 = uStack_4a4;
          uStack_1a0 = uStack_4a0;
          uStack_19c = uStack_49c;
          uStack_198 = uStack_498;
          sVar7 = RivalRec_GetSubId(&uStack_310);
          sVar8 = RivalRec_GetSubId(&uStack_190);
          if (sVar7 <= sVar8) goto code_r0x0017f66c;
          iVar21 = 5;
          if (iVar9 < 5) {
            if (8 < (int)(5U - iVar9)) {
              bVar3 = false;
              bVar2 = false;
              bVar4 = false;
              if ((iVar9 < 6) && (-0x80000000 < iVar9)) {
                bVar4 = true;
              }
              if ((bVar4) && (iVar9 != -0x80000000)) {
                bVar2 = true;
              }
              if (bVar2) {
                bVar2 = true;
                if (((-iVar9 & 0x80000000U) == 0) && ((5U - iVar9 & 0x80000000) != 0)) {
                  bVar2 = false;
                }
                if (bVar2) {
                  bVar3 = true;
                }
              }
              if (bVar3) {
                psVar19 = asStack_14 + 7;
                psVar18 = asStack_14 + 6;
                psVar17 = asStack_14 + 5;
                psVar16 = asStack_14 + 4;
                psVar15 = asStack_14 + 3;
                psVar14 = asStack_14 + 1;
                psVar20 = asStack_14;
                puVar5 = (undefined2 *)register0x000001d0;
                do {
                  iVar21 = iVar21 + -8;
                  *psVar19 = psVar19[-1];
                  psVar19 = psVar19 + -8;
                  *psVar18 = psVar18[-1];
                  psVar18 = psVar18 + -8;
                  *psVar17 = psVar17[-1];
                  psVar17 = psVar17 + -8;
                  *psVar16 = psVar16[-1];
                  psVar16 = psVar16 + -8;
                  *psVar15 = psVar15[-1];
                  psVar15 = psVar15 + -8;
                  puVar5[-8] = puVar5[-9];
                  *psVar14 = psVar14[-1];
                  psVar14 = psVar14 + -8;
                  *psVar20 = psVar20[-1];
                  psVar20 = psVar20 + -8;
                  puVar5 = puVar5 + -8;
                } while (iVar9 + 8 < iVar21);
              }
            }
            if (iVar9 < iVar21) {
              psVar20 = asStack_14 + iVar21 + 2;
              do {
                iVar21 = iVar21 + -1;
                *psVar20 = psVar20[-1];
                psVar20 = psVar20 + -1;
              } while (iVar9 < iVar21);
            }
          }
          uVar22 = uVar22 + 1;
          asStack_14[iVar9 + 2] = sVar12;
        }
        goto LAB_0017f008;
      }
      iStack_7b0 = iVar23;
    }
LAB_0017f008:
    iVar23 = iVar23 + 1;
  } while (iVar23 < 500);
  if (iStack_7b0 == -1) {
    g_GameState->recordHeader = uVar22;
  }
  else {
    g_GameState->recordHeader = uVar22 + 1;
    asStack_14[uVar22 + 2] = (short)iStack_7b0;
  }
  iVar21 = 0;
  iVar9 = 0;
  iVar23 = 0;
  g_GameState->unk_00c8 = (int)asStack_14[2];
  g_GameState->unk_00cc = (int)asStack_14[3];
  g_GameState->unk_00d0 = (int)asStack_14[4];
  g_GameState->unk_00d4 = (int)asStack_14[5];
  g_GameState->unk_00d8 = (int)asStack_14[6];
  g_GameState->unk_00dc = (int)asStack_14[7];
  do {
    if (asStack_14[iVar21 + 2] == -1) break;
    RivalDb_Copy(&uStack_790);
    puVar13 = auStack_74c;
    uStack_190 = uStack_790;
    uStack_178 = uStack_778;
    puVar11 = auStack_14c;
    sStack_18e = sStack_78e;
    uStack_174 = uStack_774;
    iVar10 = 0x17;
    uStack_18c = uStack_78c;
    uStack_188 = uStack_788;
    uStack_184 = uStack_784;
    uStack_180 = uStack_780;
    uStack_17c = uStack_77c;
    uStack_170 = uStack_770;
    uStack_16c = uStack_76c;
    uStack_168 = uStack_768;
    uStack_164 = uStack_764;
    uStack_160 = uStack_760;
    uStack_15c = uStack_75c;
    uStack_158 = uStack_758;
    uStack_156 = uStack_756;
    uStack_154 = uStack_754;
    uStack_150 = uStack_750;
    do {
      iVar10 = iVar10 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar10);
    iVar10 = 0x17;
    puVar13 = auStack_6f0;
    puVar11 = auStack_f0;
    do {
      iVar10 = iVar10 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar10);
    iVar10 = 8;
    puVar13 = auStack_694;
    puVar11 = auStack_94;
    do {
      iVar10 = iVar10 + -1;
      uVar1 = puVar13[1];
      *puVar11 = *puVar13;
      puVar11[1] = uVar1;
      puVar13 = puVar13 + 2;
      puVar11 = puVar11 + 2;
    } while (0 < iVar10);
    uStack_48 = uStack_648;
    uStack_44 = uStack_644;
    uStack_40 = uStack_640;
    uStack_3c = uStack_63c;
    uStack_50 = uStack_650;
    uStack_4c = uStack_64c;
    uStack_38 = uStack_638;
    uStack_34 = uStack_634;
    uStack_30 = uStack_630;
    uStack_2c = uStack_62c;
    iStack_54 = iStack_654;
    asStack_28[0] = uStack_628;
    uStack_24 = uStack_624;
    uStack_20 = uStack_620;
    uStack_1c = uStack_61c;
    uStack_18 = uStack_618;
    *(int *)((int)g_GameState->records + iVar23 + -4) = (int)asStack_14[iVar21 + 2];
    iVar10 = iVar21;
    if (iStack_654 != 0) {
      iVar10 = iVar21 + 1;
      *(int *)(&g_GameState->records[0].field_0x0 + iVar23) = (int)asStack_14[iVar21 + 3];
    }
    iVar9 = iVar9 + 1;
    iVar21 = iVar10 + 1;
    iVar23 = iVar23 + 0x14;
  } while (iVar9 < 6);
  if ((g_RaceCtx->mode == '\x01') && (g_RaceCtx->raceType != '\x06')) {
    g_GameState->currentRecord = 0;
  }
  return;
code_r0x0017f66c:
  iVar9 = iVar9 + 1;
  psVar20 = psVar20 + 1;
  if (5 < iVar9) goto LAB_0017f008;
  goto LAB_0017f3b8;
}

// 0x0017f8b0  size 0x10
/* follows RaceResult_Compute; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void RaceResult_Compute_Orphan1(void)

{
  return;
}

// 0x0017f8c0  size 0x464
void RaceResult_Award(void)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_400 [12];
  undefined2 uStack_3f4;
  undefined1 auStack_280 [8];
  undefined2 uStack_278;
  undefined1 auStack_100 [208];
  char acStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte abStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  byte bStack_10;
  short asStack_4 [2];
  
  uVar4 = GameState_Get_35c();
  if ((uVar4 & 1) == 0) {
    uVar4 = GameState_Get_35c();
    if ((uVar4 & 2) == 0) {
      GameState_Get_35c();
    }
    else {
      GameState_GetVec3c4(acStack_30);
      bStack_10 = acStack_30[0];
      if (acStack_30[0] == '\x06') {
        uVar6 = Profile_Get(0);
        Profile_SpendMoney(uVar6,uStack_28,1);
      }
      else if (acStack_30[0] == '\x03') {
        uVar6 = Profile_Get(0);
        Profile_SpendMoney(uVar6,uStack_28,1);
      }
      else if ((acStack_30[0] == '\x02') || (acStack_30[0] == '\x01')) {
        uVar6 = Profile_Get(0);
        Garage_InitCarRecord(uVar6,uStack_2c);
        uVar6 = Profile_Get(0);
        Career_IsBelowCap(uVar6,8,0xffffffffffffffff);
      }
      else if (acStack_30[0] == '\0') {
        uVar6 = Profile_Get(0);
        Profile_DecPartStock(uVar6,(short)uStack_2c);
        uVar6 = Profile_Get(0);
        Career_IsBelowCap(uVar6,2,0xffffffffffffffff);
      }
    }
  }
  else {
    GameState_GetVec3d0(abStack_20);
    bStack_10 = abStack_20[0];
    if (8 < abStack_20[0]) {
      return;
    }
    uVar7 = (undefined2)iStack_1c;
                    /* WARNING: Switch is manually overridden */
    switch(abStack_20[0]) {
    case 0:
      CarRec_SetModelAndColor(asStack_4,uVar7);
      uVar6 = Profile_Get(0);
      Profile_HasPartStock(uVar6,asStack_4[0]);
      sVar2 = PartDb_GetInfo(asStack_4[0]);
      lVar8 = (long)sVar2;
      if (lVar8 <= asStack_4[0]) {
        do {
          uVar6 = Profile_Get(0);
          Garage_MarkDirty(uVar6,(short)lVar8);
          lVar8 = (long)((int)lVar8 + 1);
        } while (lVar8 <= asStack_4[0]);
      }
      uVar6 = Profile_Get(0);
      Career_IsBelowCap(uVar6,1,0xffffffffffffffff);
      break;
    case 1:
      RivalDb_Copy(auStack_280,uVar7);
      RivalDb_Copy(auStack_400,uVar7);
      uVar6 = Profile_Get(0);
      uVar6 = Profile_GetDay(uVar6);
      CarRec_Build(auStack_100,uStack_278,uStack_3f4,1,uVar6);
      uVar6 = Profile_Get(0);
      Garage_ResetCarRecord(uVar6,auStack_100);
      uVar6 = Profile_Get(0);
      Career_IsBelowCap(uVar6,4,0xffffffffffffffff);
      break;
    case 3:
      uVar6 = Profile_Get(0);
      Profile_EarnMoney(uVar6,uStack_18,1);
      if (iStack_1c == -1) {
        return;
      }
      uVar6 = Profile_Get(0);
      iVar9 = GameState_Ptr_48();
      sVar2 = Profile_GetRivalBattleCount(uVar6,*(undefined4 *)(iVar9 + 0x80));
      if (1 < sVar2) {
        return;
      }
      piVar3 = (int *)GameDb_GetEncounter(iStack_1c);
      iVar9 = 0;
      do {
        iVar1 = *piVar3;
        if (-1 < iVar1) {
          uVar6 = Profile_Get(0);
          Profile_SetEventSeen(uVar6,iVar1);
        }
        iVar9 = iVar9 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar9 < 3);
      break;
    case 5:
      uVar6 = Profile_Get(0);
      uVar5 = Profile_Get(0);
      uVar5 = Profile_GetDayClamped(uVar5);
      Profile_SetCourseBest(uVar6,iStack_1c,uVar5);
      break;
    case 6:
      piVar3 = (int *)GameDb_GetEncounter(iStack_1c);
      iVar9 = 0;
      do {
        iVar1 = *piVar3;
        if (-1 < iVar1) {
          uVar6 = Profile_Get(0);
          Profile_SetEventSeen(uVar6,iVar1);
        }
        iVar9 = iVar9 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar9 < 3);
      break;
    case 7:
      uVar6 = Profile_Get(0);
      Profile_AddPoints(uVar6,iStack_1c);
      uVar6 = Profile_Get(0);
      Profile_EarnMoney(uVar6,uStack_18,1);
      break;
    case 8:
      uVar6 = Profile_Get(0);
      uVar5 = Profile_Get(0);
      uVar5 = Profile_GetDay(uVar5);
      Profile_SetCourseRecord(uVar6,iStack_1c,uVar5);
    }
  }
  return;
}

// 0x0017fd30  size 0x40
void maybe_Vec3_Copy(undefined4 *param_1)

{
  GameState *pGVar1;
  float fVar2;
  float fVar3;
  undefined1 uStack_10;
  
  pGVar1 = g_GameState;
  fVar2 = (float)param_1[1];
  fVar3 = (float)param_1[2];
  uStack_10 = (undefined1)*param_1;
  *(undefined1 *)g_GameState->startPos = uStack_10;
  pGVar1->startPos[1] = fVar2;
  pGVar1->startPos[2] = fVar3;
  return;
}

// 0x0017fd70  size 0x3c4
void RaceResult_BuildMessage(undefined4 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_4b0 [20];
  undefined4 auStack_460 [20];
  undefined4 auStack_410 [96];
  undefined4 auStack_290 [20];
  undefined4 auStack_240 [20];
  undefined4 auStack_1f0 [8];
  char cStack_1d0;
  char acStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  RivalDb_Copy(auStack_410);
  puVar8 = auStack_410;
  puVar7 = auStack_1f0;
  iVar6 = 0x5f;
  do {
    iVar6 = iVar6 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar6);
  uStack_c = 0xffffffff;
  uStack_10 = CONCAT31(uStack_10._1_3_,9);
  uStack_8 = 0;
  if (cStack_1d0 != '\t') {
    cVar1 = RivalRec_GetTeam(auStack_1f0);
    if (cVar1 == '\x01') {
      uVar5 = Profile_Get(0);
      uVar2 = RivalRec_GetId(auStack_1f0);
      sVar3 = Profile_GetRivalWins(uVar5,uVar2);
      if (sVar3 == 0) {
        uVar2 = RivalRec_GetId(auStack_1f0);
        Rival_GetTeamRecord(auStack_460,uVar2);
        puVar8 = auStack_460;
        puVar7 = auStack_240;
        iVar6 = 0x11;
        do {
          iVar6 = iVar6 + -1;
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar6);
        Profile_CopyTime(auStack_20,auStack_240);
        uStack_10 = CONCAT31(uStack_10._1_3_,auStack_20[0]);
        uStack_c = uStack_1c;
        uStack_8 = uStack_18;
      }
      else {
        uVar5 = Profile_Get(0);
        sVar3 = Profile_GetRivalBattleCount(uVar5,param_2);
        if (sVar3 == 1) {
          RivalRec_GetPosition(auStack_30,auStack_1f0);
          uStack_10 = CONCAT31(uStack_10._1_3_,auStack_30[0]);
          uStack_c = uStack_2c;
          uStack_8 = uStack_28;
        }
      }
    }
    else {
      lVar4 = RivalRec_IsValid(auStack_1f0);
      if (lVar4 == 0) {
        uVar5 = Profile_Get(0);
        sVar3 = Profile_GetRivalBattleCount(uVar5,param_2);
        if (sVar3 == 0) {
          RivalRec_GetPosition(auStack_60,auStack_1f0);
          uStack_10 = CONCAT31(uStack_10._1_3_,auStack_60[0]);
          uStack_c = uStack_5c;
          uStack_8 = uStack_58;
        }
        else {
          uVar5 = Profile_Get(0);
          sVar3 = Profile_GetRivalBattleCount(uVar5,param_2);
          if (0 < sVar3) {
            RivalRec_GetPosition(acStack_70,auStack_1f0);
            uStack_10 = CONCAT31(uStack_10._1_3_,acStack_70[0]);
            uStack_8 = uStack_68;
            uStack_c = uStack_6c;
            if (acStack_70[0] != '\x03') {
              uStack_8 = 0;
              uStack_10 = CONCAT31(uStack_10._1_3_,9);
              uStack_c = 0xffffffff;
            }
          }
        }
      }
      else {
        uVar5 = Profile_Get(0);
        uVar2 = RivalRec_GetId(auStack_1f0);
        sVar3 = Profile_GetRivalWins(uVar5,uVar2);
        if (sVar3 == 0) {
          uVar2 = RivalRec_GetId(auStack_1f0);
          Rival_GetTeamRecord(auStack_4b0,uVar2);
          puVar8 = auStack_4b0;
          puVar7 = auStack_290;
          iVar6 = 0x11;
          do {
            iVar6 = iVar6 + -1;
            *puVar7 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 1;
          } while (0 < iVar6);
          Profile_CopyTime(auStack_50,auStack_290);
          uStack_10 = CONCAT31(uStack_10._1_3_,auStack_50[0]);
          uStack_c = uStack_4c;
          uStack_8 = uStack_48;
        }
        else {
          uVar5 = Profile_Get(0);
          sVar3 = Profile_GetRivalBattleCount(uVar5,param_2);
          if (sVar3 == 1) {
            RivalRec_GetPosition(auStack_40,auStack_1f0);
            uStack_10 = CONCAT31(uStack_10._1_3_,auStack_40[0]);
            uStack_c = uStack_3c;
            uStack_8 = uStack_38;
            uVar5 = Profile_Get(0);
            sVar3 = Profile_GetRivalBattleCount(uVar5,param_2);
            if ((1 < sVar3) && ((char)uStack_10 != '\x03')) {
              uStack_8 = 0;
              uStack_10 = CONCAT31(uStack_10._1_3_,9);
              uStack_c = 0xffffffff;
            }
          }
        }
      }
    }
  }
  *param_1 = uStack_10;
  param_1[1] = uStack_c;
  param_1[2] = uStack_8;
  return;
}

