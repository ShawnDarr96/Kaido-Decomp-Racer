// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00180000 - 0x00184000
#include "ghidra_types.h"

// 0x00180140  size 0xc
uchar GameState_Get_3dc(void)

{
  return g_GameState->unk_03dc;
}

// 0x00180150  size 0xc
void GameState_Set_3dc(uchar param_1)

{
  g_GameState->unk_03dc = param_1;
  return;
}

// 0x00180160  size 0x70
void Race_FrameBegin(void)

{
  long lVar1;
  undefined8 uVar2;
  
  Race_InitFrame();
  lVar1 = RaceScene_IsFlag10();
  if (lVar1 == 0) {
    if (g_RaceCtx->mode == '\x01') {
      uVar2 = Profile_Get(0);
      Career_ProcessDay(uVar2);
    }
    uVar2 = RaceProg_GetHeader();
    GameState_Set_35c(uVar2);
    RaceScene_SetupPlayerCar();
  }
  RaceScene_SetFlags(0x100);
  return;
}

// 0x001801d0  size 0x84
undefined8 Race_AdvanceCheckpoint(void)

{
  undefined8 uVar1;
  
  if (g_GameState->recordHeader == 0) {
    uVar1 = 0;
  }
  else {
    g_GameState->currentRecord = g_GameState->currentRecord + 1;
    if ((int)g_GameState->currentRecord < 6) {
      if (*(int *)&g_GameState->records[g_GameState->currentRecord - 1].field_0x10 == -1) {
        uVar1 = 0;
      }
      else if ((g_GameState->unk_035c & 1) == 0) {
        uVar1 = 0;
      }
      else {
        g_GameState->rivalCount = 0;
        uVar1 = Career_ProcessRaceEnd();
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

// 0x00180260  size 0x7c
undefined4 Race_GetModeFlags(void)

{
  undefined4 uVar1;
  
  if (g_GameState->modeFlags < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(g_GameState->modeFlags) {
    case '\0':
      uVar1 = 5;
      break;
    case '\x01':
      uVar1 = 6;
      break;
    case '\x02':
      uVar1 = 4;
      break;
    case '\x03':
      uVar1 = 6;
      break;
    case '\x04':
      uVar1 = 0xc;
      break;
    case '\x05':
      uVar1 = 0x14;
      break;
    case '\x06':
      uVar1 = 5;
      break;
    case '\a':
      uVar1 = 0x46;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x001802e0  size 0x108
void maybe_Race_Debug(void)

{
  return;
}

// 0x001803f0  size 0x14
void maybe_Race_DebugState(void)

{
  maybe_Race_Debug(g_GameState->course,g_GameState->unk_0003,g_GameState->unk_0002);
  return;
}

// 0x00180410  size 0xb0
int Course_GetIdFromSelection(uint param_1,uint param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1 = param_1 & 0xff;
  if (param_1 == 8) {
    iVar1 = 0x40;
    uVar2 = (uint)param_3;
    if ((uVar2 == 1) || (uVar2 - 3 < 2)) {
      iVar1 = 0x41;
    }
    else if ((uVar2 == 2) || (uVar2 == 5)) {
      iVar1 = 0x42;
    }
  }
  else if (param_3 == 0) {
    iVar1 = param_1 * 8 + (param_2 & 0xff) * 4;
  }
  else {
    iVar1 = param_1 * 8 + (param_2 & 0xff) * 4 + 1;
  }
  return iVar1;
}

// 0x001804d0  size 0x14
void Course_GetCurrentId(void)

{
  Course_GetIdFromSelection(g_GameState->course,g_GameState->unk_0003,g_GameState->unk_0002);
  return;
}

// 0x001804f0  size 0x104
undefined4 GameState_ComputeTimestamp(void)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  lVar4 = GameState_Get_44();
  if (lVar4 != 0) {
    uVar2 = GameState_Get_1();
    iVar3 = (int)lVar4 + (uVar2 & 0xff) * 0x10;
    iVar6 = *(int *)(iVar3 + 4);
    iVar5 = *(int *)(iVar3 + 0xc);
    iVar3 = GameState_Get_c();
    uVar1 = *(undefined8 *)(iVar6 + iVar3 * 0x10);
    iVar3 = GameState_Get_10();
    uVar7 = Checkpoint_BuildGate(uVar1,*(undefined8 *)(iVar5 + iVar3 * 0x10));
  }
  return uVar7;
}

// 0x00180600  size 0x9a0
undefined4 Career_ProcessRaceEnd(void)

{
  undefined2 uVar1;
  bool bVar2;
  GameState *pGVar3;
  uchar uVar4;
  uchar uVar5;
  float fVar6;
  uchar uVar7;
  char cVar8;
  int iVar9;
  int index;
  RaceEntrySetup *pRVar10;
  int iVar11;
  RacerStats *pRVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  uint *puVar22;
  undefined2 *puVar23;
  int iVar24;
  undefined2 *puVar25;
  undefined1 *puVar26;
  uchar uVar27;
  long lVar28;
  undefined4 uVar29;
  undefined4 uStack_374;
  uint auStack_36c [6];
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined2 auStack_330 [16];
  undefined2 auStack_310 [42];
  undefined1 uStack_2bc;
  undefined4 uStack_2b8;
  uchar uStack_2b0;
  uint uStack_2ac;
  uchar uStack_2a8;
  uchar uStack_2a7;
  undefined4 uStack_2a4;
  float fStack_2a0;
  uint auStack_29c [6];
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined2 auStack_260 [16];
  undefined2 auStack_240 [42];
  undefined1 uStack_1ec;
  undefined4 uStack_1e8;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined1 auStack_1a0 [160];
  int iStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
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
  uint uStack_8;
  uint uStack_4;
  
  uVar29 = 1;
  GameState_LoadRecords(auStack_1a0);
  lVar15 = GameState_GetRivalCount();
  if (lVar15 != 0) goto LAB_001806c0;
  iVar9 = GameState_GetPlayerCount();
  index = GameState_GetPlayerCount();
  pRVar10 = GameState_Elem_f0_xcc(0);
  GameState_GetCurrentRecord(&iStack_1c0);
  iVar24 = 0;
  iStack_100 = iStack_1c0;
  iStack_fc = iStack_1bc;
  uStack_f8 = uStack_1b8;
  uStack_f4 = uStack_1b4;
  uStack_f0 = uStack_1b0;
  lVar15 = GameState_Get_c4();
  if (0 < lVar15) {
    do {
      GameState_GetRecord(&iStack_1e0,iVar24);
      if (iStack_1e0 != -1) {
        iVar9 = iVar9 + 1;
      }
      if (iStack_1dc != -1) {
        iVar9 = iVar9 + 1;
      }
      iVar24 = iVar24 + 1;
      iVar11 = GameState_Get_c4();
    } while (iVar24 < iVar11);
  }
  if (iStack_100 == -1) {
    uVar29 = 0;
    goto LAB_001806c0;
  }
  pRVar12 = GameState_Elem_2fa0_x17c(iVar9);
  GameState_Elem_3e0_x540(iVar9);
  uVar16 = GameState_Get_2();
  Opponent_BuildEntry(pRVar12,0,auStack_e0,iVar9,uVar16);
  uVar27 = (uchar)iVar9;
  pRVar10->unk_08 = '\x01';
  uStack_d7 = uVar27;
  if (g_RaceCtx->raceType != '\x06') {
    lVar15 = GameState_Get_48();
    if (lVar15 < 2) {
      uVar29 = *(undefined4 *)&pRVar12->field_0x14;
      uVar17 = RivalRec_GetType(pRVar12);
      RivalRec_IsBelowMax(pRVar12);
      lVar28 = (long)*(short *)&pRVar12->field_0x38;
      lVar15 = (long)*(short *)&pRVar12->field_0x3a;
    }
    else {
      uVar16 = GameState_Ptr_3a04();
      puVar13 = (undefined4 *)uVar16;
      uVar29 = *puVar13;
      uVar17 = Profile_GetGarageSize(uVar16);
      Profile_HasFreeGarageSlot(uVar16);
      lVar28 = (long)(int)puVar13[5];
      lVar15 = (long)(int)puVar13[6];
    }
    GameState_Set_354(uVar17);
    uVar16 = Race_GetLapCountForMode(uVar29);
    g_GameState->course = (uchar)uVar16;
    uVar7 = Race_GetRewardAmount(uVar16,lVar28,lVar15,&uStack_4,&uStack_8);
    g_GameState->direction = uVar7;
    g_GameState->unk_000c = uStack_4;
    g_GameState->unk_0010 = uStack_8;
  }
  cVar8 = GameState_Get_354_7050();
  if (cVar8 == '\x02') {
LAB_00180b1c:
    GameState_Set_364(*(undefined4 *)&pRVar12->field_0x40);
    uStack_d8 = '\0';
    pRVar10->unk_08 = '\0';
    uVar14 = uStack_dc | 0x100;
    if (*(uint *)&pRVar12->field_0x30 != 0xffffffff) {
      g_GameState->unk_3ac8 = *(uint *)&pRVar12->field_0x30;
      uVar14 = uStack_dc | 0x120;
    }
  }
  else {
    if ((cVar8 == '\x01') || (cVar8 == '\x03')) {
      GameState_Set_390(*(undefined4 *)&pRVar12->field_0x3c);
      goto LAB_00180b1c;
    }
    uVar14 = uStack_dc;
    if (cVar8 == '\x04') {
      uStack_d8 = '\x02';
      pRVar10->unk_08 = '\0';
    }
    else if (cVar8 == '\x05') {
      uStack_d8 = '\0';
      pRVar10->unk_08 = '\x02';
    }
  }
  uStack_dc = uVar14;
  fVar6 = fStack_d0;
  uVar5 = uStack_d7;
  uVar4 = uStack_d8;
  uVar7 = auStack_e0[0];
  pGVar3 = g_GameState;
  uVar29 = 1;
  puVar26 = auStack_cc;
  uStack_2a8 = uStack_d8;
  iVar24 = 0x17;
  uStack_2ac = uStack_dc | 0x82;
  uStack_2b0 = auStack_e0[0];
  puVar18 = auStack_29c;
  uStack_2a7 = uStack_d7;
  uStack_2a4 = CONCAT22(uStack_d2,uStack_d4);
  fStack_2a0 = fStack_d0;
  puVar19 = puVar26;
  uStack_dc = uStack_2ac;
  do {
    iVar24 = iVar24 + -1;
    *(undefined1 *)puVar18 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar18 = (uint *)((int)puVar18 + 1);
  } while (0 < iVar24);
  puVar25 = auStack_90;
  puVar20 = auStack_260;
  iVar24 = 8;
  uStack_284 = uStack_b4;
  uStack_280 = uStack_b0;
  uStack_27c = uStack_ac;
  uStack_278 = uStack_a8;
  uStack_274 = uStack_a4;
  uStack_270 = uStack_a0;
  uStack_26c = uStack_9c;
  uStack_268 = uStack_98;
  uStack_264 = uStack_94;
  puVar21 = puVar25;
  do {
    iVar24 = iVar24 + -1;
    uVar1 = puVar21[1];
    *puVar20 = *puVar21;
    puVar20[1] = uVar1;
    puVar21 = puVar21 + 2;
    puVar20 = puVar20 + 2;
  } while (0 < iVar24);
  puVar23 = auStack_70;
  puVar20 = auStack_240;
  iVar24 = 0x15;
  puVar21 = puVar23;
  do {
    iVar24 = iVar24 + -1;
    uVar1 = puVar21[1];
    *puVar20 = *puVar21;
    puVar20[1] = uVar1;
    puVar21 = puVar21 + 2;
    puVar20 = puVar20 + 2;
  } while (0 < iVar24);
  uStack_1ec = uStack_1c;
  puVar22 = auStack_29c;
  uStack_1e8 = uStack_18;
  g_GameState->entrySetup[index].maybe_state = uVar7;
  pGVar3->entrySetup[index].unk_04 = uStack_2ac;
  puVar18 = &pGVar3->entrySetup[index].unk_14;
  iVar24 = 0x17;
  pGVar3->entrySetup[index].unk_08 = uVar4;
  pGVar3->entrySetup[index].unk_09 = uVar5;
  pGVar3->entrySetup[index].maybe_counter = uStack_2a4;
  pGVar3->entrySetup[index].maybe_accum = fVar6;
  do {
    iVar24 = iVar24 + -1;
    uVar14 = puVar22[1];
    *puVar18 = *puVar22;
    puVar18[1] = uVar14;
    puVar22 = puVar22 + 2;
    puVar18 = puVar18 + 2;
  } while (0 < iVar24);
  GameState_Set_e4(1);
  if (iStack_fc != -1) {
    pRVar12 = GameState_Elem_2fa0_x17c(iVar9 + 1);
    GameState_Elem_3e0_x540(iVar9 + 1);
    lVar15 = RivalRec_IsBoss(pRVar12);
    if (lVar15 == 0) {
      uVar16 = GameState_Get_2();
      Opponent_BuildEntry(pRVar12,2,auStack_e0,iVar9 + 1,uVar16);
    }
    else {
      pRVar10 = GameState_Elem_f0_xcc(index);
      pRVar10->unk_08 = '\x02';
      uVar16 = GameState_Get_2();
      Opponent_BuildEntry(pRVar12,0,auStack_e0,iVar9 + 1,uVar16);
    }
    uVar7 = uStack_d8;
    pGVar3 = g_GameState;
    puVar18 = auStack_36c;
    iVar9 = 0x17;
    uStack_374 = CONCAT22(uStack_d2,uStack_d4);
    uVar14 = uStack_dc | 0x82;
    uStack_dc = uVar14;
    uStack_d7 = uVar27 + '\x01';
    do {
      iVar9 = iVar9 + -1;
      *(undefined1 *)puVar18 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar18 = (uint *)((int)puVar18 + 1);
    } while (0 < iVar9);
    puVar21 = auStack_330;
    iVar9 = 8;
    uStack_354 = uStack_b4;
    uStack_350 = uStack_b0;
    uStack_34c = uStack_ac;
    uStack_348 = uStack_a8;
    uStack_344 = uStack_a4;
    uStack_340 = uStack_a0;
    uStack_33c = uStack_9c;
    uStack_338 = uStack_98;
    uStack_334 = uStack_94;
    do {
      iVar9 = iVar9 + -1;
      uVar1 = puVar25[1];
      *puVar21 = *puVar25;
      puVar21[1] = uVar1;
      puVar25 = puVar25 + 2;
      puVar21 = puVar21 + 2;
    } while (0 < iVar9);
    puVar21 = auStack_310;
    iVar9 = 0x15;
    do {
      iVar9 = iVar9 + -1;
      uVar1 = puVar23[1];
      *puVar21 = *puVar23;
      puVar21[1] = uVar1;
      puVar23 = puVar23 + 2;
      puVar21 = puVar21 + 2;
    } while (0 < iVar9);
    uStack_2bc = uStack_1c;
    uStack_2b8 = uStack_18;
    g_GameState->entrySetup[index + 1].maybe_state = auStack_e0[0];
    pGVar3->entrySetup[index + 1].unk_04 = uVar14;
    pGVar3->entrySetup[index + 1].unk_08 = uVar7;
    puVar18 = &pGVar3->entrySetup[index + 1].unk_14;
    puVar22 = auStack_36c;
    iVar9 = 0x17;
    pGVar3->entrySetup[index + 1].unk_09 = uVar27 + '\x01';
    pGVar3->entrySetup[index + 1].maybe_counter = uStack_374;
    pGVar3->entrySetup[index + 1].maybe_accum = fStack_d0;
    do {
      iVar9 = iVar9 + -1;
      uVar14 = puVar22[1];
      *puVar18 = *puVar22;
      puVar18[1] = uVar14;
      puVar22 = puVar22 + 2;
      puVar18 = puVar18 + 2;
    } while (0 < iVar9);
    GameState_Set_e4(2);
  }
LAB_001806c0:
  cVar8 = GameState_Get_354();
  if (cVar8 == '\a') {
    if (g_RaceCtx->mode == '\x01') {
      uVar16 = Profile_Get(0);
      lVar15 = Profile_GetStat(uVar16,6);
      if (lVar15 == 0) {
        uVar16 = Profile_Get(0);
        lVar15 = Profile_GetStat(uVar16,5);
        if (lVar15 == 0) {
          uVar16 = Profile_Get(0);
          lVar15 = Profile_GetStat(uVar16,2);
          if (lVar15 == 0) {
            uVar16 = Profile_Get(0);
            lVar15 = Profile_GetStat(uVar16,0);
            if (lVar15 == 0) {
              GameState_Set_394(0);
            }
            else {
              GameState_Set_394(1);
            }
          }
          else {
            GameState_Set_394(2);
          }
        }
        else {
          GameState_Set_394(3);
        }
      }
      else {
        GameState_Set_394(4);
      }
    }
    else {
      GameState_Set_394(0);
    }
  }
  iVar9 = Course_GetIdFromSelection(g_GameState->course,g_GameState->unk_0003,g_GameState->unk_0002)
  ;
  g_GameState->unk_0044 = (uint)(&PTR_DAT_00326710)[iVar9];
  g_GameState->unk_0014 = 0;
  if (g_GameState->direction == '\0') {
    uVar27 = g_GameState->course;
    if ((((uVar27 == '\b') || (uVar27 == '\a')) || (uVar27 == '\x03')) ||
       ((uVar27 == '\x04' || (uVar27 == '\0')))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      if ((int)g_GameState->unk_000c < (int)g_GameState->unk_0010) {
        g_GameState->unk_0010 = g_GameState->unk_000c;
      }
      g_GameState->unk_0040 = 1;
    }
    else {
      if ((int)g_GameState->unk_0010 < (int)g_GameState->unk_000c) {
        g_GameState->unk_0010 = g_GameState->unk_000c;
      }
      g_GameState->unk_0040 = 0;
    }
  }
  else {
    uVar27 = g_GameState->course;
    if (((uVar27 == '\b') || (uVar27 == '\a')) ||
       ((uVar27 == '\x03' || ((uVar27 == '\x04' || (uVar27 == '\0')))))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((int)g_GameState->unk_000c < (int)g_GameState->unk_0010) {
        g_GameState->unk_0010 = g_GameState->unk_000c;
      }
      g_GameState->unk_0040 = 1;
    }
    else {
      if ((int)g_GameState->unk_0010 < (int)g_GameState->unk_000c) {
        g_GameState->unk_0010 = g_GameState->unk_000c;
      }
      g_GameState->unk_0040 = 0;
    }
  }
  return uVar29;
}

// 0x00180fa0  size 0x1c20
/* 7 callers; builds the whole grid */

undefined4 RaceSetup_Prepare(void)

{
  undefined2 uVar1;
  bool bVar2;
  GameState *pGVar3;
  uchar uVar4;
  uchar uVar5;
  int iVar6;
  uchar uVar7;
  char cVar8;
  uchar uVar9;
  byte bVar10;
  short sVar11;
  int iVar12;
  RaceEntrySetup *pRVar13;
  RacerState *pRVar14;
  RacerResult *pRVar15;
  int *piVar16;
  int iVar17;
  RacerStats *pRVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  undefined2 *puVar25;
  undefined4 *puVar26;
  undefined1 *puVar27;
  int *piVar28;
  undefined2 *puVar29;
  undefined4 *puVar30;
  uint *puVar31;
  undefined2 *puVar32;
  undefined1 *puVar33;
  int iVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined2 *puVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  undefined4 uVar45;
  uint uVar46;
  undefined4 uStack_1260;
  int iStack_1250;
  undefined4 uStack_1220;
  undefined4 uStack_1204;
  uint auStack_11fc [6];
  undefined4 uStack_11e4;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  undefined4 uStack_11d8;
  undefined4 uStack_11d4;
  undefined4 uStack_11d0;
  undefined4 uStack_11cc;
  undefined4 uStack_11c8;
  undefined4 uStack_11c4;
  undefined2 auStack_11c0 [16];
  undefined2 auStack_11a0 [42];
  undefined1 uStack_114c;
  undefined4 uStack_1148;
  uchar uStack_1140;
  uint uStack_113c;
  uchar uStack_1138;
  uchar uStack_1137;
  undefined4 uStack_1134;
  float fStack_1130;
  uint auStack_112c [6];
  undefined4 uStack_1114;
  undefined4 uStack_1110;
  undefined4 uStack_110c;
  undefined4 uStack_1108;
  undefined4 uStack_1104;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  undefined4 uStack_10f8;
  undefined4 uStack_10f4;
  undefined2 auStack_10f0 [16];
  undefined2 auStack_10d0 [42];
  undefined1 uStack_107c;
  undefined4 uStack_1078;
  undefined1 auStack_1070 [4];
  undefined4 uStack_106c;
  undefined1 uStack_1068;
  undefined1 uStack_1067;
  undefined2 uStack_1064;
  undefined2 uStack_1062;
  undefined4 uStack_1060;
  undefined1 auStack_105c [24];
  undefined4 uStack_1044;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  undefined4 uStack_1028;
  undefined4 uStack_1024;
  undefined2 auStack_1020 [16];
  undefined2 auStack_1000 [42];
  undefined1 uStack_fac;
  undefined4 uStack_fa8;
  undefined2 uStack_fa0;
  undefined2 uStack_f9e;
  byte bStack_f9c;
  undefined4 uStack_f98;
  undefined4 uStack_f94;
  undefined4 uStack_f90;
  undefined4 uStack_f8c;
  undefined4 uStack_f88;
  undefined4 uStack_f84;
  undefined1 uStack_f80;
  undefined4 uStack_f7c;
  undefined4 uStack_f78;
  undefined1 uStack_f74;
  undefined4 uStack_f70;
  undefined4 uStack_f6c;
  undefined2 uStack_f68;
  undefined2 uStack_f66;
  undefined4 uStack_f64;
  undefined4 uStack_f60;
  undefined4 auStack_f5c [23];
  undefined4 auStack_f00 [23];
  undefined4 auStack_ea4 [16];
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined4 uStack_e58;
  undefined4 uStack_e54;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined4 uStack_e48;
  undefined4 uStack_e44;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined2 uStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined1 auStack_e20 [4];
  undefined4 uStack_e1c;
  undefined1 uStack_e18;
  undefined1 uStack_e17;
  undefined2 uStack_e14;
  undefined2 uStack_e12;
  undefined4 uStack_e10;
  undefined1 auStack_e0c [24];
  undefined4 uStack_df4;
  undefined4 uStack_df0;
  undefined4 uStack_dec;
  undefined4 uStack_de8;
  undefined4 uStack_de4;
  undefined4 uStack_de0;
  undefined4 uStack_ddc;
  undefined4 uStack_dd8;
  undefined4 uStack_dd4;
  undefined2 auStack_dd0 [16];
  undefined2 auStack_db0 [42];
  undefined1 uStack_d5c;
  undefined4 uStack_d58;
  undefined4 auStack_d50 [40];
  undefined1 auStack_cb0 [4];
  undefined4 uStack_cac;
  undefined1 uStack_ca8;
  undefined1 uStack_ca7;
  undefined2 uStack_ca4;
  undefined2 uStack_ca2;
  undefined4 uStack_ca0;
  undefined1 auStack_c9c [24];
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 uStack_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  undefined4 uStack_c68;
  undefined4 uStack_c64;
  undefined2 auStack_c60 [16];
  undefined2 auStack_c40 [42];
  undefined1 uStack_bec;
  undefined4 uStack_be8;
  int iStack_be0;
  int iStack_bdc;
  undefined4 uStack_bd8;
  undefined4 uStack_bd4;
  undefined4 uStack_bd0;
  undefined2 uStack_bc0;
  undefined2 uStack_bbe;
  undefined1 uStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined1 uStack_ba0;
  undefined4 uStack_b9c;
  undefined4 uStack_b98;
  undefined1 uStack_b94;
  int iStack_b90;
  undefined4 uStack_b8c;
  short sStack_b88;
  short sStack_b86;
  int iStack_b84;
  int iStack_b80;
  undefined4 auStack_b7c [23];
  undefined4 auStack_b20 [23];
  undefined4 auStack_ac4 [16];
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined2 uStack_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined4 auStack_a40 [20];
  undefined2 uStack_9f0;
  undefined2 uStack_9ee;
  undefined1 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined4 uStack_9d8;
  undefined4 uStack_9d4;
  undefined1 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined1 uStack_9c4;
  int iStack_9c0;
  undefined4 uStack_9bc;
  short sStack_9b8;
  short sStack_9b6;
  int iStack_9b4;
  int iStack_9b0;
  undefined4 auStack_9ac [23];
  undefined4 auStack_950 [23];
  undefined4 auStack_8f4 [16];
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined2 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined1 auStack_870 [32];
  int iStack_850;
  int iStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  int aiStack_830 [40];
  undefined2 uStack_790;
  undefined2 uStack_78e;
  byte bStack_78c;
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
  undefined4 uStack_654;
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
  undefined4 auStack_610 [40];
  int aiStack_570 [8];
  undefined1 auStack_550 [256];
  int iStack_450;
  int iStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined1 auStack_430 [4];
  undefined4 uStack_42c;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined2 uStack_424;
  undefined2 uStack_422;
  undefined4 uStack_420;
  undefined1 auStack_41c [24];
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined2 auStack_3e0 [16];
  undefined2 auStack_3c0 [42];
  undefined1 uStack_36c;
  undefined4 uStack_368;
  undefined4 auStack_360 [5];
  int iStack_34c;
  int iStack_348;
  int iStack_310;
  int iStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined2 uStack_2f0;
  undefined2 uStack_2ee;
  undefined1 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined1 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  short sStack_2b8;
  short sStack_2b6;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 auStack_2ac [23];
  undefined4 auStack_250 [23];
  undefined4 auStack_1f4 [16];
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined2 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  uchar auStack_170 [4];
  uint uStack_16c;
  uchar uStack_168;
  uchar uStack_167;
  undefined2 uStack_164;
  undefined2 uStack_162;
  float fStack_160;
  undefined1 auStack_15c [24];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined2 auStack_120 [16];
  undefined2 auStack_100 [42];
  undefined1 uStack_ac;
  undefined4 uStack_a8;
  int aiStack_a0 [38];
  uint uStack_8;
  uint uStack_4;
  
  uStack_1220 = 1;
  sVar11 = -1;
  if (g_RaceCtx->mode == '\x05') {
    piVar16 = (int *)maybe_Replay_GetSize();
    pGVar3 = g_GameState;
    iVar23 = *piVar16;
    iVar12 = 0xf;
    g_GameState->course = *(uchar *)(iVar23 + 0x28);
    pGVar3->direction = *(uchar *)(iVar23 + 0x29);
    pGVar3->unk_0002 = *(uchar *)(iVar23 + 0x2a);
    pGVar3->unk_0003 = *(uchar *)(iVar23 + 0x2b);
    pGVar3->field_0x4 = *(undefined1 *)(iVar23 + 0x2c);
    pGVar3->unk_0008 = *(uint *)(iVar23 + 0x30);
    pGVar3->unk_000c = *(uint *)(iVar23 + 0x34);
    pGVar3->unk_0010 = *(uint *)(iVar23 + 0x38);
    pGVar3->unk_0014 = *(uint *)(iVar23 + 0x3c);
    uVar45 = *(undefined4 *)(iVar23 + 0x44);
    uVar39 = *(undefined4 *)(iVar23 + 0x48);
    uVar41 = *(undefined4 *)(iVar23 + 0x4c);
    *(undefined4 *)&pGVar3->field_0x18 = *(undefined4 *)(iVar23 + 0x40);
    *(undefined4 *)&pGVar3->field_0x1c = uVar45;
    *(undefined4 *)&pGVar3->field_0x20 = uVar39;
    *(undefined4 *)&pGVar3->field_0x24 = uVar41;
    uVar45 = *(undefined4 *)(iVar23 + 0x54);
    uVar39 = *(undefined4 *)(iVar23 + 0x58);
    uVar41 = *(undefined4 *)(iVar23 + 0x5c);
    *(undefined4 *)&pGVar3->field_0x28 = *(undefined4 *)(iVar23 + 0x50);
    *(undefined4 *)&pGVar3->field_0x2c = uVar45;
    *(undefined4 *)&pGVar3->field_0x30 = uVar39;
    *(undefined4 *)&pGVar3->field_0x34 = uVar41;
    uVar39 = *(undefined4 *)(iVar23 + 100);
    *(undefined4 *)&pGVar3->field_0x38 = *(undefined4 *)(iVar23 + 0x60);
    *(undefined4 *)&pGVar3->field_0x3c = uVar39;
    pGVar3->unk_0040 = *(uint *)(iVar23 + 0x68);
    pGVar3->unk_0044 = *(uint *)(iVar23 + 0x6c);
    pGVar3 = g_GameState;
    iVar23 = *piVar16;
    g_GameState->modeFlags = *(uchar *)(iVar23 + 0x37c);
    *(undefined4 *)&pGVar3->field_0x358 = *(undefined4 *)(iVar23 + 0x380);
    pGVar3->unk_035c = *(uint *)(iVar23 + 900);
    pGVar3->unk_0360 = *(uint *)(iVar23 + 0x388);
    uVar45 = *(undefined4 *)(iVar23 + 0x390);
    uVar39 = *(undefined4 *)(iVar23 + 0x394);
    uVar41 = *(undefined4 *)(iVar23 + 0x398);
    pGVar3->unk_0364 = *(uint *)(iVar23 + 0x38c);
    *(undefined4 *)&pGVar3->field_0x368 = uVar45;
    *(undefined4 *)&pGVar3->field_0x36c = uVar39;
    *(undefined4 *)&pGVar3->field_0x370 = uVar41;
    uVar45 = *(undefined4 *)(iVar23 + 0x3a0);
    uVar39 = *(undefined4 *)(iVar23 + 0x3a4);
    uVar41 = *(undefined4 *)(iVar23 + 0x3a8);
    *(undefined4 *)&pGVar3->field_0x374 = *(undefined4 *)(iVar23 + 0x39c);
    *(undefined4 *)&pGVar3->field_0x378 = uVar45;
    *(undefined4 *)&pGVar3->field_0x37c = uVar39;
    *(undefined4 *)&pGVar3->field_0x380 = uVar41;
    uVar39 = *(undefined4 *)(iVar23 + 0x3b0);
    uVar41 = *(undefined4 *)(iVar23 + 0x3b4);
    *(undefined4 *)&pGVar3->field_0x384 = *(undefined4 *)(iVar23 + 0x3ac);
    *(undefined4 *)&pGVar3->field_0x388 = uVar39;
    *(undefined4 *)&pGVar3->field_0x38c = uVar41;
    uVar42 = *(uint *)(iVar23 + 0x3bc);
    pGVar3->unk_0390 = *(uint *)(iVar23 + 0x3b8);
    pGVar3->unk_0394 = uVar42;
    uVar42 = *(uint *)(iVar23 + 0x3c4);
    uVar43 = *(uint *)(iVar23 + 0x3c8);
    pGVar3->unk_0398 = *(uint *)(iVar23 + 0x3c0);
    pGVar3->unk_039c = uVar42;
    pGVar3->unk_03a0 = uVar43;
    uVar46 = *(uint *)(iVar23 + 0x3d0);
    uVar42 = *(uint *)(iVar23 + 0x3d4);
    uVar43 = *(uint *)(iVar23 + 0x3d8);
    pGVar3->unk_03a4 = *(uint *)(iVar23 + 0x3cc);
    pGVar3->unk_03a8 = uVar46;
    pGVar3->unk_03ac = uVar42;
    pGVar3->unk_03b0 = uVar43;
    uVar46 = *(uint *)(iVar23 + 0x3e0);
    uVar42 = *(uint *)(iVar23 + 0x3e4);
    uVar43 = *(uint *)(iVar23 + 1000);
    pGVar3->unk_03b4 = *(uint *)(iVar23 + 0x3dc);
    pGVar3->unk_03b8 = uVar46;
    pGVar3->unk_03bc = uVar42;
    pGVar3->unk_03c0 = uVar43;
    uVar42 = *(uint *)(iVar23 + 0x3f0);
    uVar43 = *(uint *)(iVar23 + 0x3f4);
    *(undefined4 *)pGVar3->color = *(undefined4 *)(iVar23 + 0x3ec);
    pGVar3->unk_03c8 = uVar42;
    pGVar3->unk_03cc = uVar43;
    fVar40 = *(float *)(iVar23 + 0x3fc);
    fVar44 = *(float *)(iVar23 + 0x400);
    pGVar3->startPos[0] = *(float *)(iVar23 + 0x3f8);
    pGVar3->startPos[1] = fVar40;
    pGVar3->startPos[2] = fVar44;
    pGVar3->unk_03dc = *(uchar *)(iVar23 + 0x404);
    pGVar3 = g_GameState;
    iVar23 = *piVar16;
    puVar31 = (uint *)(iVar23 + 0x74);
    puVar24 = &g_GameState->unk_004c;
    g_GameState->recordHeader = *(uint *)(iVar23 + 0x70);
    do {
      iVar12 = iVar12 + -1;
      uVar42 = puVar31[1];
      *puVar24 = *puVar31;
      puVar31 = puVar31 + 2;
      *(uint *)(puVar24 + 1) = uVar42;
      puVar24 = puVar24 + 2;
    } while (0 < iVar12);
    iVar12 = 0x99;
    pGVar3->currentRecord = *(uint *)(iVar23 + 0xec);
    uVar46 = *(uint *)(iVar23 + 0xf4);
    uVar42 = *(uint *)(iVar23 + 0xf8);
    uVar43 = *(uint *)(iVar23 + 0xfc);
    pGVar3->unk_00c8 = *(uint *)(iVar23 + 0xf0);
    pGVar3->unk_00cc = uVar46;
    pGVar3->unk_00d0 = uVar42;
    pGVar3->unk_00d4 = uVar43;
    uVar42 = *(uint *)(iVar23 + 0x104);
    pGVar3->unk_00d8 = *(uint *)(iVar23 + 0x100);
    pGVar3->unk_00dc = uVar42;
    pGVar3 = g_GameState;
    iVar23 = *piVar16;
    puVar30 = (undefined4 *)(iVar23 + 0x118);
    pRVar13 = g_GameState->entrySetup;
    g_GameState->playerCount = *(uint *)(iVar23 + 0x108);
    pGVar3->rivalCount = *(uint *)(iVar23 + 0x10c);
    pGVar3->trafficCount = *(uint *)(iVar23 + 0x110);
    pGVar3->unk_00ec = *(uint *)(iVar23 + 0x114);
    do {
      iVar12 = iVar12 + -1;
      *(undefined4 *)pRVar13 = *puVar30;
      puVar30 = puVar30 + 1;
      pRVar13 = (RaceEntrySetup *)&pRVar13->unk_04;
    } while (0 < iVar12);
    g_GameState->unk_3ac8 = *(uint *)(*piVar16 + 0x408);
    iVar23 = Course_GetIdFromSelection
                       (g_GameState->course,g_GameState->unk_0003,g_GameState->unk_0002);
    g_GameState->unk_0044 = (uint)(&PTR_DAT_00326710)[iVar23];
    iVar23 = GameState_GetTotalCarCount();
    iVar12 = 0;
    if (0 < iVar23) {
      do {
        pRVar13 = GameState_Elem_f0_xcc(iVar12);
        iVar12 = iVar12 + 1;
        pRVar13->unk_04 = pRVar13->unk_04 | 0x80;
      } while (iVar12 < iVar23);
    }
    goto LAB_00181390;
  }
  lVar19 = GameState_Get_ec();
  if (lVar19 != 0) {
    uVar20 = Replay_GetHeader();
    uVar21 = maybe_GameState_GetFlag();
    RaceEntry_SetCar(uVar20,uVar21);
  }
  GameState_LoadRecords(aiStack_830);
  piVar28 = aiStack_830;
  piVar16 = aiStack_a0;
  iVar23 = 0x13;
  do {
    iVar23 = iVar23 + -1;
    iVar12 = piVar28[1];
    *piVar16 = *piVar28;
    piVar16[1] = iVar12;
    piVar28 = piVar28 + 2;
    piVar16 = piVar16 + 2;
  } while (0 < iVar23);
  lVar19 = GameState_GetRivalCount();
  if (aiStack_a0[0] == 0) {
    iVar23 = GameState_GetTotalCarCount();
    if (0 < lVar19) {
      aiStack_a0[0] = (int)lVar19;
      GameState_SaveRecords(aiStack_a0);
    }
    iVar12 = 0;
    if (0 < iVar23) {
      do {
        pRVar13 = GameState_Elem_f0_xcc(iVar12);
        pRVar13->unk_09 = (uchar)iVar12;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar23);
    }
  }
  else {
    if (lVar19 != 0) goto LAB_001810e8;
    uVar7 = GameState_GetPlayerCount();
    iVar12 = GameState_GetPlayerCount();
    pRVar13 = GameState_Elem_f0_xcc(0);
    GameState_GetCurrentRecord(&iStack_850);
    iVar34 = 0;
    iStack_310 = iStack_850;
    iStack_30c = iStack_84c;
    uStack_308 = uStack_848;
    uStack_304 = uStack_844;
    uStack_300 = uStack_840;
    lVar19 = GameState_Get_c4();
    iVar23 = iStack_30c;
    if (0 < lVar19) {
      do {
        GameState_GetRecord(auStack_870,iVar34);
        if (iStack_310 != -1) {
          uVar7 = uVar7 + '\x01';
        }
        if (iVar23 != -1) {
          uVar7 = uVar7 + '\x01';
        }
        iVar34 = iVar34 + 1;
        iVar17 = GameState_Get_c4();
      } while (iVar34 < iVar17);
    }
    if (iStack_310 == -1) {
      uStack_1220 = 0;
      goto LAB_001810e8;
    }
    bVar2 = false;
    RivalDb_Copy(&uStack_9f0,(short)iStack_310);
    puVar37 = auStack_2ac;
    uStack_2f0 = uStack_9f0;
    uStack_2ee = uStack_9ee;
    uStack_2ec = uStack_9ec;
    uStack_2e8 = uStack_9e8;
    uStack_2e4 = uStack_9e4;
    uStack_2e0 = uStack_9e0;
    uStack_2dc = uStack_9dc;
    uStack_2d8 = uStack_9d8;
    uStack_2d4 = uStack_9d4;
    uStack_2d0 = uStack_9d0;
    puVar26 = auStack_9ac;
    uStack_2cc = uStack_9cc;
    iVar23 = 0x17;
    uStack_2c8 = uStack_9c8;
    uStack_2c4 = uStack_9c4;
    iStack_2c0 = iStack_9c0;
    uStack_2bc = uStack_9bc;
    sStack_2b8 = sStack_9b8;
    sStack_2b6 = sStack_9b6;
    iStack_2b4 = iStack_9b4;
    iStack_2b0 = iStack_9b0;
    puVar30 = puVar37;
    do {
      iVar23 = iVar23 + -1;
      *puVar30 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar30 = puVar30 + 1;
    } while (0 < iVar23);
    puVar36 = auStack_250;
    puVar26 = auStack_950;
    iVar23 = 0x17;
    puVar30 = puVar36;
    do {
      iVar23 = iVar23 + -1;
      *puVar30 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar30 = puVar30 + 1;
    } while (0 < iVar23);
    puVar35 = auStack_1f4;
    puVar26 = auStack_8f4;
    iVar23 = 8;
    puVar30 = puVar35;
    do {
      iVar23 = iVar23 + -1;
      uVar39 = puVar26[1];
      *puVar30 = *puVar26;
      puVar30[1] = uVar39;
      puVar26 = puVar26 + 2;
      puVar30 = puVar30 + 2;
    } while (0 < iVar23);
    uStack_1b4 = uStack_8b4;
    uStack_188 = uStack_888;
    uStack_1b0 = uStack_8b0;
    uStack_184 = uStack_884;
    uStack_1ac = uStack_8ac;
    uStack_180 = uStack_880;
    uStack_1a8 = uStack_8a8;
    uStack_17c = uStack_87c;
    uStack_1a4 = uStack_8a4;
    uStack_1a0 = uStack_8a0;
    uStack_19c = uStack_89c;
    uStack_178 = uStack_878;
    uStack_198 = uStack_898;
    uStack_194 = uStack_894;
    uStack_190 = uStack_890;
    uStack_18c = uStack_88c;
    uVar20 = GameState_Get_2();
    Opponent_BuildEntry(&uStack_2f0,0,auStack_170,0xffffffffffffffff,uVar20);
    pRVar13->unk_08 = '\x01';
    uStack_167 = uVar7;
    lVar19 = GameState_Get_48();
    if (lVar19 < 2) {
      uStack_1260 = uStack_2dc;
      uVar20 = RivalRec_GetType(&uStack_2f0);
      RivalRec_IsBelowMax(&uStack_2f0);
      lVar19 = (long)sStack_2b8;
      iStack_1250 = (int)sStack_2b6;
    }
    else {
      sVar11 = RivalRec_GetId(&uStack_2f0);
      Rival_GetTeamRecord(auStack_a40,sVar11);
      puVar26 = auStack_a40;
      puVar30 = auStack_360;
      iVar23 = 0x11;
      do {
        iVar23 = iVar23 + -1;
        *puVar30 = *puVar26;
        puVar26 = puVar26 + 1;
        puVar30 = puVar30 + 1;
      } while (0 < iVar23);
      uStack_1260 = auStack_360[0];
      uVar20 = Profile_GetGarageSize(auStack_360);
      Profile_HasFreeGarageSlot(auStack_360);
      lVar19 = (long)iStack_34c;
      iStack_1250 = iStack_348;
    }
    if (g_RaceCtx->raceType == '\x06') {
      GameState_Set_354(0);
    }
    else {
      GameState_Set_354(uVar20);
    }
    uVar20 = Race_GetLapCountForMode(uStack_1260);
    g_GameState->course = (uchar)uVar20;
    uVar9 = Race_GetRewardAmount(uVar20,lVar19,iStack_1250,&uStack_4,&uStack_8);
    g_GameState->direction = uVar9;
    g_GameState->unk_000c = uStack_4;
    g_GameState->unk_0010 = uStack_8;
    bVar10 = GameState_Get_354_7050();
    uVar42 = uStack_16c;
    if (7 < bVar10) goto switchD_00181ca8_caseD_0;
                    /* WARNING: Switch is manually overridden */
    switch(bVar10) {
    case 0:
      break;
    default:
      if (iStack_2b4 != 0) {
        GameState_Set_390();
      }
    case 2:
      if (iStack_2b0 != 0) {
        GameState_Set_364();
      }
      uStack_168 = '\0';
      pRVar13->unk_08 = '\0';
      uVar42 = uStack_16c | 0x100;
      if (iStack_2c0 != -1) {
        g_GameState->unk_3ac8 = iStack_2c0 + 0x1bd5;
        uVar42 = uStack_16c | 0x120;
      }
      break;
    case 4:
      uStack_168 = '\x02';
      pRVar13->unk_08 = '\0';
      break;
    case 5:
      uStack_168 = '\0';
      pRVar13->unk_08 = '\x02';
      break;
    case 6:
      bVar2 = true;
      GameState_Set_364(iStack_2b0);
      uVar42 = uStack_16c;
      if (iStack_2b4 != 0) {
        GameState_Set_3a0();
        uVar42 = uStack_16c;
      }
      break;
    case 7:
      bVar2 = true;
      if (iStack_2b4 == 0) break;
      GameState_Set_390();
      goto LAB_00181d98;
    }
switchD_00181ca8_caseD_0:
    uStack_16c = uVar42;
LAB_00181d98:
    fVar40 = fStack_160;
    uVar5 = uStack_167;
    uVar4 = uStack_168;
    uVar9 = auStack_170[0];
    pGVar3 = g_GameState;
    uStack_1220 = 1;
    uVar42 = uStack_16c | 0x82;
    uStack_16c = uVar42;
    if (!bVar2) {
      puVar33 = auStack_15c;
      puVar24 = auStack_112c;
      iVar23 = 0x17;
      uStack_1140 = auStack_170[0];
      uStack_1138 = uStack_168;
      uStack_1137 = uStack_167;
      uStack_1134 = CONCAT22(uStack_162,uStack_164);
      fStack_1130 = fStack_160;
      puVar27 = puVar33;
      do {
        iVar23 = iVar23 + -1;
        *(undefined1 *)puVar24 = *puVar27;
        puVar27 = puVar27 + 1;
        puVar24 = (uint *)((int)puVar24 + 1);
      } while (0 < iVar23);
      puVar32 = auStack_120;
      puVar29 = auStack_10f0;
      iVar23 = 8;
      uStack_1114 = uStack_144;
      uStack_1110 = uStack_140;
      uStack_110c = uStack_13c;
      uStack_1108 = uStack_138;
      uStack_1104 = uStack_134;
      uStack_1100 = uStack_130;
      uStack_10fc = uStack_12c;
      uStack_10f8 = uStack_128;
      uStack_10f4 = uStack_124;
      puVar25 = puVar32;
      do {
        iVar23 = iVar23 + -1;
        uVar1 = puVar25[1];
        *puVar29 = *puVar25;
        puVar29[1] = uVar1;
        puVar25 = puVar25 + 2;
        puVar29 = puVar29 + 2;
      } while (0 < iVar23);
      puVar38 = auStack_100;
      puVar29 = auStack_10d0;
      iVar23 = 0x15;
      puVar25 = puVar38;
      do {
        iVar23 = iVar23 + -1;
        uVar1 = puVar25[1];
        *puVar29 = *puVar25;
        puVar29[1] = uVar1;
        puVar25 = puVar25 + 2;
        puVar29 = puVar29 + 2;
      } while (0 < iVar23);
      uStack_1078 = uStack_a8;
      uStack_107c = uStack_ac;
      puVar31 = auStack_112c;
      g_GameState->entrySetup[iVar12].maybe_state = uVar9;
      pGVar3->entrySetup[iVar12].unk_04 = uVar42;
      puVar24 = &pGVar3->entrySetup[iVar12].unk_14;
      iVar23 = 0x17;
      pGVar3->entrySetup[iVar12].unk_08 = uVar4;
      pGVar3->entrySetup[iVar12].unk_09 = uVar5;
      pGVar3->entrySetup[iVar12].maybe_counter = uStack_1134;
      pGVar3->entrySetup[iVar12].maybe_accum = fVar40;
      do {
        iVar23 = iVar23 + -1;
        uVar43 = puVar31[1];
        *puVar24 = *puVar31;
        puVar24[1] = uVar43;
        puVar31 = puVar31 + 2;
        puVar24 = puVar24 + 2;
      } while (0 < iVar23);
      uStack_113c = uVar42;
      GameState_Set_e4(1);
      if (iStack_30c != -1) {
        RivalDb_Copy(&uStack_bc0,(short)iStack_30c);
        puVar30 = auStack_b7c;
        iVar23 = 0x17;
        uStack_2d8 = uStack_ba8;
        uStack_2f0 = uStack_bc0;
        uStack_2d4 = uStack_ba4;
        uStack_2ee = uStack_bbe;
        uStack_2ec = uStack_bbc;
        uStack_2e8 = uStack_bb8;
        uStack_2e4 = uStack_bb4;
        uStack_2e0 = uStack_bb0;
        uStack_2dc = uStack_bac;
        uStack_2d0 = uStack_ba0;
        uStack_2cc = uStack_b9c;
        uStack_2c8 = uStack_b98;
        uStack_2c4 = uStack_b94;
        iStack_2c0 = iStack_b90;
        uStack_2bc = uStack_b8c;
        sStack_2b8 = sStack_b88;
        sStack_2b6 = sStack_b86;
        iStack_2b4 = iStack_b84;
        iStack_2b0 = iStack_b80;
        do {
          iVar23 = iVar23 + -1;
          *puVar37 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar37 = puVar37 + 1;
        } while (0 < iVar23);
        puVar30 = auStack_b20;
        iVar23 = 0x17;
        do {
          iVar23 = iVar23 + -1;
          *puVar36 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar36 = puVar36 + 1;
        } while (0 < iVar23);
        puVar30 = auStack_ac4;
        iVar23 = 8;
        do {
          iVar23 = iVar23 + -1;
          uVar39 = puVar30[1];
          *puVar35 = *puVar30;
          puVar35[1] = uVar39;
          puVar30 = puVar30 + 2;
          puVar35 = puVar35 + 2;
        } while (0 < iVar23);
        uStack_1b4 = uStack_a84;
        uStack_1b0 = uStack_a80;
        uStack_188 = uStack_a58;
        uStack_1ac = uStack_a7c;
        uStack_1a8 = uStack_a78;
        uStack_1a4 = uStack_a74;
        uStack_184 = uStack_a54;
        uStack_1a0 = uStack_a70;
        uStack_180 = uStack_a50;
        uStack_17c = uStack_a4c;
        uStack_178 = uStack_a48;
        uStack_19c = uStack_a6c;
        uStack_198 = uStack_a68;
        uStack_194 = uStack_a64;
        uStack_190 = uStack_a60;
        uStack_18c = uStack_a5c;
        lVar19 = RivalRec_IsBoss(&uStack_2f0);
        if (lVar19 == 0) {
          uVar20 = GameState_Get_2();
          Opponent_BuildEntry(&uStack_2f0,2,auStack_170,0xffffffffffffffff,uVar20);
        }
        else {
          pRVar13 = GameState_Elem_f0_xcc(iVar12);
          pRVar13->unk_08 = '\x02';
          uVar20 = GameState_Get_2();
          Opponent_BuildEntry(&uStack_2f0,0,auStack_170,0xffffffffffffffff,uVar20);
        }
        pGVar3 = g_GameState;
        uStack_167 = uVar7 + '\x01';
        puVar24 = auStack_11fc;
        iVar23 = 0x17;
        uStack_1204 = CONCAT22(uStack_162,uStack_164);
        uStack_16c = uStack_16c | 0x82;
        do {
          iVar23 = iVar23 + -1;
          *(undefined1 *)puVar24 = *puVar33;
          puVar33 = puVar33 + 1;
          puVar24 = (uint *)((int)puVar24 + 1);
        } while (0 < iVar23);
        puVar25 = auStack_11c0;
        iVar23 = 8;
        uStack_11e4 = uStack_144;
        uStack_11e0 = uStack_140;
        uStack_11dc = uStack_13c;
        uStack_11d8 = uStack_138;
        uStack_11d4 = uStack_134;
        uStack_11d0 = uStack_130;
        uStack_11cc = uStack_12c;
        uStack_11c8 = uStack_128;
        uStack_11c4 = uStack_124;
        do {
          iVar23 = iVar23 + -1;
          uVar1 = puVar32[1];
          *puVar25 = *puVar32;
          puVar25[1] = uVar1;
          puVar32 = puVar32 + 2;
          puVar25 = puVar25 + 2;
        } while (0 < iVar23);
        puVar25 = auStack_11a0;
        iVar23 = 0x15;
        do {
          iVar23 = iVar23 + -1;
          uVar1 = puVar38[1];
          *puVar25 = *puVar38;
          puVar25[1] = uVar1;
          puVar38 = puVar38 + 2;
          puVar25 = puVar25 + 2;
        } while (0 < iVar23);
        uStack_114c = uStack_ac;
        uStack_1148 = uStack_a8;
        g_GameState->entrySetup[iVar12 + 1].maybe_state = auStack_170[0];
        puVar31 = auStack_11fc;
        pGVar3->entrySetup[iVar12 + 1].unk_04 = uStack_16c;
        pGVar3->entrySetup[iVar12 + 1].unk_08 = uStack_168;
        puVar24 = &pGVar3->entrySetup[iVar12 + 1].unk_14;
        iVar23 = 0x17;
        pGVar3->entrySetup[iVar12 + 1].unk_09 = uStack_167;
        pGVar3->entrySetup[iVar12 + 1].maybe_counter = uStack_1204;
        pGVar3->entrySetup[iVar12 + 1].maybe_accum = fStack_160;
        do {
          iVar23 = iVar23 + -1;
          uVar42 = puVar31[1];
          *puVar24 = *puVar31;
          puVar24[1] = uVar42;
          puVar31 = puVar31 + 2;
          puVar24 = puVar24 + 2;
        } while (0 < iVar23);
        GameState_Set_e4(2);
      }
    }
  }
LAB_001810e8:
  cVar8 = GameState_Get_354();
  if (cVar8 == '\a') {
    if (g_RaceCtx->mode == '\x01') {
      uVar20 = Profile_Get(0);
      lVar19 = Profile_GetStat(uVar20,6);
      if (lVar19 == 0) {
        uVar20 = Profile_Get(0);
        lVar19 = Profile_GetStat(uVar20,5);
        if (lVar19 == 0) {
          uVar20 = Profile_Get(0);
          lVar19 = Profile_GetStat(uVar20,2);
          if (lVar19 == 0) {
            uVar20 = Profile_Get(0);
            lVar19 = Profile_GetStat(uVar20,0);
            if (lVar19 == 0) {
              GameState_Set_394(0);
            }
            else {
              GameState_Set_394(1);
            }
          }
          else {
            GameState_Set_394(2);
          }
        }
        else {
          GameState_Set_394(3);
        }
      }
      else {
        GameState_Set_394(4);
      }
    }
    else {
      GameState_Set_394(0);
    }
  }
  iVar23 = Course_GetIdFromSelection
                     (g_GameState->course,g_GameState->unk_0003,g_GameState->unk_0002);
  g_GameState->unk_0044 = (uint)(&PTR_DAT_00326710)[iVar23];
  g_GameState->unk_0014 = 0;
  if (g_GameState->direction == '\0') {
    uVar7 = g_GameState->course;
    if ((((uVar7 == '\b') || (uVar7 == '\a')) || (uVar7 == '\x03')) ||
       ((uVar7 == '\x04' || (uVar7 == '\0')))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      if ((int)g_GameState->unk_000c < (int)g_GameState->unk_0010) {
        g_GameState->unk_0010 = g_GameState->unk_000c;
      }
      g_GameState->unk_0040 = 1;
    }
    else {
      if ((int)g_GameState->unk_0010 < (int)g_GameState->unk_000c) {
        g_GameState->unk_0010 = g_GameState->unk_000c;
      }
      g_GameState->unk_0040 = 0;
    }
  }
  else {
    uVar7 = g_GameState->course;
    if (((uVar7 == '\b') || (uVar7 == '\a')) ||
       ((uVar7 == '\x03' || ((uVar7 == '\x04' || (uVar7 == '\0')))))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((int)g_GameState->unk_000c < (int)g_GameState->unk_0010) {
        g_GameState->unk_0010 = g_GameState->unk_000c;
      }
      g_GameState->unk_0040 = 1;
    }
    else {
      if ((int)g_GameState->unk_0010 < (int)g_GameState->unk_000c) {
        g_GameState->unk_0010 = g_GameState->unk_000c;
      }
      g_GameState->unk_0040 = 0;
    }
  }
  if (10 < (int)g_GameState->unk_0008) {
    g_GameState->unk_0008 = 10;
  }
LAB_00181390:
  GameState_GetRecord(&iStack_be0,0);
  iStack_450 = iStack_be0;
  iStack_44c = iStack_bdc;
  uStack_448 = uStack_bd8;
  uStack_444 = uStack_bd4;
  uStack_440 = uStack_bd0;
  if ((iStack_be0 == -1) && (iStack_bdc == -1)) {
    iVar23 = GameState_GetTotalCarCount();
    iVar12 = 0;
    if (0 < iVar23) {
      do {
        GameState_CopyPlayerRecord(auStack_cb0,iVar12);
        iVar34 = 0x17;
        puVar33 = auStack_c9c;
        auStack_430[0] = auStack_cb0[0];
        uStack_424 = uStack_ca4;
        uStack_422 = uStack_ca2;
        uStack_42c = uStack_cac;
        uStack_428 = uStack_ca8;
        uStack_427 = uStack_ca7;
        uStack_420 = uStack_ca0;
        puVar27 = auStack_41c;
        do {
          iVar34 = iVar34 + -1;
          *puVar27 = *puVar33;
          puVar33 = puVar33 + 1;
          puVar27 = puVar27 + 1;
        } while (0 < iVar34);
        iVar34 = 8;
        puVar29 = auStack_c60;
        puVar25 = auStack_3e0;
        uStack_3f8 = uStack_c78;
        uStack_3f4 = uStack_c74;
        uStack_3f0 = uStack_c70;
        uStack_404 = uStack_c84;
        uStack_400 = uStack_c80;
        uStack_3fc = uStack_c7c;
        uStack_3ec = uStack_c6c;
        uStack_3e8 = uStack_c68;
        uStack_3e4 = uStack_c64;
        do {
          iVar34 = iVar34 + -1;
          uVar1 = puVar29[1];
          *puVar25 = *puVar29;
          puVar25[1] = uVar1;
          puVar29 = puVar29 + 2;
          puVar25 = puVar25 + 2;
        } while (0 < iVar34);
        iVar34 = 0x15;
        puVar29 = auStack_c40;
        puVar25 = auStack_3c0;
        do {
          iVar34 = iVar34 + -1;
          uVar1 = puVar29[1];
          *puVar25 = *puVar29;
          puVar25[1] = uVar1;
          puVar29 = puVar29 + 2;
          puVar25 = puVar25 + 2;
        } while (0 < iVar34);
        uStack_36c = uStack_bec;
        uStack_368 = uStack_be8;
        pRVar14 = GameState_Elem_3e0_x540(iVar12);
        maybe_RaceSetup_BuildCarEntry(pRVar14,auStack_430);
        MenuCar_ApplyPartPreview(auStack_550,uStack_424,uStack_422,auStack_41c,uStack_36c);
        pRVar15 = GameState_Elem_28a0_x100(iVar12);
        memcpy(pRVar15,auStack_550,0x100);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar23);
    }
  }
  else {
    iVar23 = GameState_GetPlayerCount();
    iVar34 = 0;
    iVar17 = 0;
    GameState_LoadRecords(auStack_d50);
    puVar26 = auStack_d50;
    puVar30 = auStack_610;
    iVar12 = 0x13;
    do {
      iVar12 = iVar12 + -1;
      uVar39 = puVar26[1];
      *puVar30 = *puVar26;
      puVar30[1] = uVar39;
      puVar26 = puVar26 + 2;
      puVar30 = puVar30 + 2;
    } while (0 < iVar12);
    piVar16 = aiStack_570;
    aiStack_570[0] = -1;
    iVar12 = 0;
    aiStack_570[1] = 0xffffffff;
    aiStack_570[2] = 0xffffffff;
    aiStack_570[3] = 0xffffffff;
    aiStack_570[4] = 0xffffffff;
    aiStack_570[5] = 0xffffffff;
    if (0 < iVar23) {
      do {
        GameState_CopyPlayerRecord(auStack_e20,iVar12);
        iVar22 = 0x17;
        puVar33 = auStack_e0c;
        puVar27 = auStack_41c;
        auStack_430[0] = auStack_e20[0];
        uStack_424 = uStack_e14;
        uStack_422 = uStack_e12;
        uStack_42c = uStack_e1c;
        uStack_428 = uStack_e18;
        uStack_427 = uStack_e17;
        uStack_420 = uStack_e10;
        do {
          iVar22 = iVar22 + -1;
          *puVar27 = *puVar33;
          puVar33 = puVar33 + 1;
          puVar27 = puVar27 + 1;
        } while (0 < iVar22);
        iVar22 = 8;
        puVar29 = auStack_dd0;
        puVar25 = auStack_3e0;
        uStack_3f8 = uStack_de8;
        uStack_3f4 = uStack_de4;
        uStack_3f0 = uStack_de0;
        uStack_404 = uStack_df4;
        uStack_400 = uStack_df0;
        uStack_3fc = uStack_dec;
        uStack_3ec = uStack_ddc;
        uStack_3e8 = uStack_dd8;
        uStack_3e4 = uStack_dd4;
        do {
          iVar22 = iVar22 + -1;
          uVar1 = puVar29[1];
          *puVar25 = *puVar29;
          puVar25[1] = uVar1;
          puVar29 = puVar29 + 2;
          puVar25 = puVar25 + 2;
        } while (0 < iVar22);
        iVar22 = 0x15;
        puVar29 = auStack_db0;
        puVar25 = auStack_3c0;
        do {
          iVar22 = iVar22 + -1;
          uVar1 = puVar29[1];
          *puVar25 = *puVar29;
          puVar25[1] = uVar1;
          puVar29 = puVar29 + 2;
          puVar25 = puVar25 + 2;
        } while (0 < iVar22);
        uStack_36c = uStack_d5c;
        uStack_368 = uStack_d58;
        pRVar14 = GameState_Elem_3e0_x540(iVar17);
        maybe_RaceSetup_BuildCarEntry(pRVar14,auStack_430);
        MenuCar_ApplyPartPreview(auStack_550,uStack_424,uStack_422,auStack_41c,uStack_36c);
        pRVar15 = GameState_Elem_28a0_x100(iVar17);
        memcpy(pRVar15,auStack_550,0x100);
        iVar12 = iVar12 + 1;
        iVar17 = iVar17 + 1;
      } while (iVar12 < iVar23);
    }
    iVar12 = 0;
    puVar30 = auStack_610;
    do {
      if (puVar30[1] == -1) break;
      iVar22 = puVar30[2];
      aiStack_570[iVar34] = puVar30[1];
      iVar6 = iVar34 + 1;
      if (iVar22 != -1) {
        aiStack_570[iVar34 + 1] = iVar22;
        iVar6 = iVar34 + 2;
      }
      iVar34 = iVar6;
      iVar12 = iVar12 + 1;
      puVar30 = puVar30 + 5;
    } while (iVar12 < 6);
    iVar12 = 0;
    do {
      if (*piVar16 == -1) break;
      RivalDb_Copy(&uStack_fa0,(short)*piVar16);
      puVar26 = auStack_f5c;
      uStack_790 = uStack_fa0;
      uStack_778 = uStack_f88;
      puVar30 = auStack_74c;
      uStack_78e = uStack_f9e;
      uStack_774 = uStack_f84;
      bStack_78c = bStack_f9c;
      iVar34 = 0x17;
      uStack_788 = uStack_f98;
      uStack_784 = uStack_f94;
      uStack_780 = uStack_f90;
      uStack_77c = uStack_f8c;
      uStack_770 = uStack_f80;
      uStack_76c = uStack_f7c;
      uStack_768 = uStack_f78;
      uStack_764 = uStack_f74;
      uStack_760 = uStack_f70;
      uStack_75c = uStack_f6c;
      uStack_758 = uStack_f68;
      uStack_756 = uStack_f66;
      uStack_754 = uStack_f64;
      uStack_750 = uStack_f60;
      do {
        iVar34 = iVar34 + -1;
        *puVar30 = *puVar26;
        puVar26 = puVar26 + 1;
        puVar30 = puVar30 + 1;
      } while (0 < iVar34);
      iVar34 = 0x17;
      puVar26 = auStack_f00;
      puVar30 = auStack_6f0;
      do {
        iVar34 = iVar34 + -1;
        *puVar30 = *puVar26;
        puVar26 = puVar26 + 1;
        puVar30 = puVar30 + 1;
      } while (0 < iVar34);
      iVar34 = 8;
      puVar26 = auStack_ea4;
      puVar30 = auStack_694;
      do {
        iVar34 = iVar34 + -1;
        uVar39 = puVar26[1];
        *puVar30 = *puVar26;
        puVar30[1] = uVar39;
        puVar26 = puVar26 + 2;
        puVar30 = puVar30 + 2;
      } while (0 < iVar34);
      uStack_648 = uStack_e58;
      uStack_644 = uStack_e54;
      uStack_640 = uStack_e50;
      uStack_63c = uStack_e4c;
      uStack_650 = uStack_e60;
      uStack_64c = uStack_e5c;
      uStack_638 = uStack_e48;
      uStack_634 = uStack_e44;
      uStack_630 = uStack_e40;
      uStack_62c = uStack_e3c;
      uStack_654 = uStack_e64;
      uStack_628 = uStack_e38;
      uStack_624 = uStack_e34;
      uStack_620 = uStack_e30;
      uStack_61c = uStack_e2c;
      uStack_618 = uStack_e28;
      pRVar18 = GameState_Elem_2fa0_x17c(iVar17);
      memcpy(pRVar18,&uStack_790,0x17c);
      if (bStack_78c - 5 < 2) {
        GameState_CopyPlayerRecord(auStack_1070,iVar23 + iVar12);
        iVar34 = 0x17;
        puVar33 = auStack_41c;
        puVar27 = auStack_105c;
        auStack_430[0] = auStack_1070[0];
        uStack_42c = uStack_106c;
        uStack_428 = uStack_1068;
        uStack_427 = uStack_1067;
        uStack_424 = uStack_1064;
        uStack_422 = uStack_1062;
        uStack_420 = uStack_1060;
        do {
          iVar34 = iVar34 + -1;
          *puVar33 = *puVar27;
          puVar27 = puVar27 + 1;
          puVar33 = puVar33 + 1;
        } while (0 < iVar34);
        iVar34 = 8;
        puVar29 = auStack_1020;
        puVar25 = auStack_3e0;
        uStack_3f8 = uStack_1038;
        uStack_3f4 = uStack_1034;
        uStack_3f0 = uStack_1030;
        uStack_404 = uStack_1044;
        uStack_400 = uStack_1040;
        uStack_3fc = uStack_103c;
        uStack_3ec = uStack_102c;
        uStack_3e8 = uStack_1028;
        uStack_3e4 = uStack_1024;
        do {
          iVar34 = iVar34 + -1;
          uVar1 = puVar29[1];
          *puVar25 = *puVar29;
          puVar25[1] = uVar1;
          puVar29 = puVar29 + 2;
          puVar25 = puVar25 + 2;
        } while (0 < iVar34);
        iVar34 = 0x15;
        puVar29 = auStack_1000;
        puVar25 = auStack_3c0;
        do {
          iVar34 = iVar34 + -1;
          uVar1 = puVar29[1];
          *puVar25 = *puVar29;
          puVar25[1] = uVar1;
          puVar29 = puVar29 + 2;
          puVar25 = puVar25 + 2;
        } while (0 < iVar34);
        uStack_36c = uStack_fac;
        uStack_368 = uStack_fa8;
      }
      else {
        uVar20 = GameState_Get_2();
        Opponent_BuildEntry(&uStack_790,0,auStack_430,0xffffffffffffffff,uVar20);
      }
      pRVar14 = GameState_Elem_3e0_x540(iVar17);
      maybe_RaceSetup_BuildCarEntry(pRVar14,auStack_430);
      MenuCar_ApplyPartPreview(auStack_550,uStack_424,uStack_422,auStack_41c,uStack_36c);
      pRVar15 = GameState_Elem_28a0_x100(iVar17);
      memcpy(pRVar15,auStack_550,0x100);
      iVar12 = iVar12 + 1;
      iVar17 = iVar17 + 1;
      piVar16 = piVar16 + 1;
    } while (iVar12 < 6);
    if (sVar11 != -1) {
      uVar20 = GameState_Ptr_3a04();
      uVar21 = GameDb_GetTeam(sVar11);
      memcpy(uVar20,uVar21,0x44);
    }
  }
  return uStack_1220;
}

// 0x00182bc8  size 0x8
/* follows RaceSetup_Prepare; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void RaceSetup_Prepare_Orphan1(void)

{
  return;
}

// 0x00182bd0  size 0x40
void Career_ContinueStory(void)

{
  if (g_RaceCtx->raceType == '\x13') {
    g_RaceCtx->raceType = '\x12';
  }
  RaceSetup_Prepare();
  return;
}

// 0x00182c10  size 0x28
void Career_BeginNew(void)

{
  GameState_NewGame();
  g_RaceCtx->raceType = '\x13';
  return;
}

// 0x00182c40  size 0x64
uint Race_IsTimeTrialMode(char param_1,uint param_2)

{
  if ((((param_1 == '\b') || (param_1 == '\a')) || (param_1 == '\x03')) ||
     ((param_1 == '\x04' || (param_1 == '\0')))) {
    if ((param_2 & 0xff) == 1) {
      param_2 = 0;
    }
    else if ((param_2 & 0xff) == 0) {
      param_2 = 1;
    }
  }
  return param_2;
}

// 0x00182cb0  size 0xac
void PlayerRecord_Copy(int param_1,undefined4 *param_2)

{
  uint uVar1;
  GameState *pGVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint auStack_d0 [2];
  uchar uStack_c8;
  uchar uStack_c7;
  uint uStack_c4;
  float fStack_c0;
  uint auStack_bc [47];
  
  pGVar2 = g_GameState;
  puVar4 = auStack_d0;
  iVar3 = 0x33;
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  } while (0 < iVar3);
  puVar5 = auStack_bc;
  g_GameState->entrySetup[param_1].maybe_state = (uchar)auStack_d0[0];
  pGVar2->entrySetup[param_1].unk_04 = auStack_d0[1];
  puVar4 = &pGVar2->entrySetup[param_1].unk_14;
  iVar3 = 0x17;
  pGVar2->entrySetup[param_1].unk_08 = uStack_c8;
  pGVar2->entrySetup[param_1].unk_09 = uStack_c7;
  pGVar2->entrySetup[param_1].maybe_counter = uStack_c4;
  pGVar2->entrySetup[param_1].maybe_accum = fStack_c0;
  do {
    iVar3 = iVar3 + -1;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    puVar5 = puVar5 + 2;
    puVar4 = puVar4 + 2;
  } while (0 < iVar3);
  return;
}

// 0x00182d60  size 0x170
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Controls_SetDefaults(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _g_ControlsShared2;
  uVar1 = _g_ControlsShared1;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 4;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined4 *)(param_1 + 0x84) = 5;
  *(undefined4 *)(param_1 + 0x88) = 4;
  *(undefined4 *)(param_1 + 0x8c) = 2;
  *(undefined4 *)(param_1 + 0x90) = 8;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x10;
  *(undefined4 *)(param_1 + 0x9c) = 3;
  *(undefined4 *)(param_1 + 0xa0) = 0x20;
  *(undefined4 *)(param_1 + 0xa4) = 0xb;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  Wheel_SetAxisMap(param_2,param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xb0) = 0x14;
  *(undefined4 *)(param_1 + 0xb4) = 0x15;
  *(undefined4 *)(param_1 + 0xb8) = 0x16;
  *(undefined4 *)(param_1 + 0xbc) = 0x17;
  *(undefined4 *)(param_1 + 0xc0) = 0x10;
  *(undefined4 *)(param_1 + 0xc4) = 0x11;
  *(undefined4 *)(param_1 + 200) = 0x12;
  *(undefined4 *)(param_1 + 0xcc) = 0x13;
  *(undefined4 *)(param_1 + 0xd0) = 0x1a;
  *(undefined4 *)(param_1 + 0xd4) = 0x1b;
  *(undefined4 *)(param_1 + 0xd8) = 0x1c;
  *(undefined4 *)(param_1 + 0xdc) = 0x1d;
  *(undefined4 *)(param_1 + 0xe0) = 8;
  *(undefined4 *)(param_1 + 0xe4) = 9;
  Wheel_SetButtonMap(param_2,param_1 + 0xb0);
  maybe_Pad_ApplyDeadzone(0x3f333333,0x3e4ccccd,param_2,8,0,0);
  maybe_Pad_ApplyDeadzone(0x3f333333,0x3e4ccccd,param_2,9,0,0);
  return;
}

// 0x00182ed0  size 0x98
void Controls_ApplyMapping(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = Controls_BuildAxisMap();
  Wheel_SetAxisMap(param_2,uVar1);
  uVar1 = Controls_BuildButtonMap(param_1);
  Wheel_SetButtonMap(param_2,uVar1);
  maybe_Pad_ApplyDeadzone(0x3dcccccd,0,param_2,8,0,0);
  maybe_Pad_ApplyDeadzone(0x3dcccccd,0,param_2,9,0,0);
  return;
}

// 0x00182f70  size 0xb0
int * Controls_BuildButtonMap(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_0030b940;
  piVar3 = param_1;
  do {
    iVar1 = *piVar3;
    if (iVar1 == 4) {
      param_1[0x38] = *piVar2;
    }
    else if (iVar1 == 8) {
      param_1[0x39] = *piVar2;
    }
    else if (iVar1 == 0x10) {
      if (iVar4 == 0x12) {
        param_1[0x34] = 0x1a;
        param_1[0x35] = 0x1b;
        param_1[0x36] = 0x1c;
        param_1[0x37] = 0x1d;
      }
      else {
        param_1[0x34] = 0x1c;
        param_1[0x35] = 0x1d;
        param_1[0x36] = 0x1a;
        param_1[0x37] = 0x1b;
      }
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 0x18);
  return param_1 + 0x2c;
}

// 0x00183030  size 0x90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * Controls_BuildAxisMap(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar2 = _s_Controls_BuildAxisMap_2;
  iVar1 = _s_Controls_BuildAxisMap_1;
  piVar8 = param_1 + 0x1e;
  iVar7 = 0;
  piVar4 = &DAT_0030b8b0;
  piVar5 = param_1;
  do {
    iVar6 = 0;
    piVar3 = param_1;
    do {
      if (piVar5[0x18] == *piVar3) {
        iVar6 = *(int *)(&DAT_0030b8d0 + iVar6 * 4);
        *piVar8 = *piVar4;
        piVar8[1] = iVar6;
        piVar8 = piVar8 + 2;
        break;
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar6 < 0x18);
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
    if (5 < iVar7) {
      *piVar8 = iVar1;
      piVar8[1] = iVar2;
      return param_1 + 0x1e;
    }
  } while( true );
}

// 0x001830d0  size 0x34
void Options_SetDefaultsSound(undefined4 *param_1)

{
  *param_1 = 0x80000000;
  param_1[1] = 0x200;
  param_1[2] = 0x40;
  param_1[3] = 0x20000000;
  param_1[4] = 2;
  param_1[5] = 1;
  return;
}

// 0x00183110  size 0x98
void Options_SetDefaultsDisplay(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x80000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x10;
  param_1[5] = 0x20;
  param_1[6] = 0x40;
  param_1[7] = 8;
  param_1[8] = 0x200;
  param_1[9] = 4;
  param_1[10] = 2;
  param_1[0xb] = 0x100;
  param_1[0xc] = 0x800000;
  param_1[0xd] = 1;
  param_1[0xe] = 0x20000000;
  param_1[0xf] = 0x80;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x10;
  param_1[0x13] = 0x20;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}

// 0x001831b0  size 0x8
/* returns g_Options itself; 19 callers (was maybe_Options_GetLanguage) */

Options * Options_GetInstance(void)

{
  return g_Options;
}

// 0x001831c0  size 0x140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Options_SetDefaults(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Options_SetDefaultsDisplay();
  *(undefined4 *)(param_1 + 0x60) = 0x80000000;
  *(undefined4 *)(param_1 + 100) = 0x200;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  *(undefined4 *)(param_1 + 0x6c) = 0x20000000;
  *(undefined4 *)(param_1 + 0x70) = 2;
  *(undefined4 *)(param_1 + 0x74) = 1;
  uVar2 = _g_ControlsShared2;
  uVar1 = _g_ControlsShared1;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 4;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined4 *)(param_1 + 0x84) = 5;
  *(undefined4 *)(param_1 + 0x88) = 4;
  *(undefined4 *)(param_1 + 0x8c) = 2;
  *(undefined4 *)(param_1 + 0x90) = 8;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x10;
  *(undefined4 *)(param_1 + 0x9c) = 3;
  *(undefined4 *)(param_1 + 0xa0) = 0x20;
  *(undefined4 *)(param_1 + 0xa4) = 0xb;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xb0) = 0x14;
  *(undefined4 *)(param_1 + 0xb4) = 0x15;
  *(undefined4 *)(param_1 + 0xb8) = 0x16;
  *(undefined4 *)(param_1 + 0xbc) = 0x17;
  *(undefined4 *)(param_1 + 0xc0) = 0x10;
  *(undefined4 *)(param_1 + 0xc4) = 0x11;
  *(undefined4 *)(param_1 + 200) = 0x12;
  *(undefined4 *)(param_1 + 0xcc) = 0x13;
  *(undefined4 *)(param_1 + 0xd0) = 0x1a;
  *(undefined4 *)(param_1 + 0xd4) = 0x1b;
  *(undefined4 *)(param_1 + 0xd8) = 0x1c;
  *(undefined4 *)(param_1 + 0xdc) = 0x1d;
  *(undefined4 *)(param_1 + 0xe0) = 8;
  *(undefined4 *)(param_1 + 0xe4) = 9;
  return;
}

// 0x00183300  size 0x14
void Options_SetDefaultsVolume(undefined4 *param_1)

{
  *param_1 = 0xf;
  param_1[1] = 0xf;
  param_1[2] = 0;
  return;
}

// 0x00183320  size 0x24
void Options_SetDefaultsGame(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 1;
  param_1[5] = 1;
  param_1[6] = 1;
  param_1[1] = 1;
  return;
}

// 0x00183350  size 0x24
undefined1 * Options_Elem_28_xe8(int param_1)

{
  return &g_Options->field_0x28 + param_1 * 0xe8;
}

// 0x00183380  size 0x68
void Options_ApplyBgmVolume(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = SndMgr_GetInstance();
  if (lVar1 != 0) {
    uVar2 = SndMgr_GetInstance();
    uVar3 = Snd_RpmToPitch(param_1);
    SndMgr_PlayEngine(uVar2,uVar3);
  }
  g_Options->bgmVolume = (int)param_1;
  return;
}

// 0x001833f0  size 0x68
void Options_ApplySeVolume(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = SndMgr_GetInstance();
  if (lVar1 != 0) {
    uVar2 = SndMgr_GetInstance();
    uVar3 = Snd_VolumeToMidi(param_1);
    SndMgr_SetPitchAll(uVar2,uVar3);
  }
  g_Options->seVolume = (int)param_1;
  return;
}

// 0x00183460  size 0xc
/* N153 confirmed: returns Options.bgmVolume, the field ApplyBgmVolume writes */

undefined1 Options_GetBgmVolume(void)

{
  return (char)g_Options->bgmVolume;
}

// 0x00183470  size 0xc
undefined1 Options_Get_1c(void)

{
  return (char)g_Options->seVolume;
}

// 0x00183480  size 0xc
uint Options_Get_14(void)

{
  return g_Options->unk_0014;
}

// 0x00183490  size 0xc
uint Options_Get_18(void)

{
  return g_Options->unk_0018;
}

// 0x001834a0  size 0xc
uint Options_Get_10(void)

{
  return g_Options->unk_0010;
}

// 0x001834b0  size 0xc
void Options_Set_4(uint param_1)

{
  g_Options->unk_0004 = param_1;
  return;
}

// 0x001834c0  size 0xc
uint Options_Get_4(void)

{
  return g_Options->unk_0004;
}

// 0x001834d0  size 0xc
uint Options_Get_8(void)

{
  return g_Options->unk_0008;
}

// 0x001834e0  size 0xc
uint Options_Get_c(void)

{
  return g_Options->unk_000c;
}

// 0x001834f0  size 0x2c
void Options_Free(void)

{
  if (g_Options != (Options *)0x0) {
    Mem_Free();
    g_Options = (Options *)0x0;
  }
  return;
}

// 0x00183520  size 0x70
void Options_Alloc(undefined8 param_1)

{
  Options *pOVar1;
  
  pOVar1 = (Options *)Mem_Alloc16(0x1f8,param_1);
  g_Options = pOVar1;
  *(undefined4 *)pOVar1 = 0;
  pOVar1->unk_0008 = 1;
  pOVar1->unk_000c = 1;
  pOVar1->unk_0010 = 1;
  pOVar1->unk_0014 = 1;
  pOVar1->unk_0018 = 1;
  pOVar1->unk_0004 = 1;
  pOVar1 = g_Options;
  g_Options->seVolume = 0xf;
  pOVar1->bgmVolume = 0xf;
  *(undefined4 *)&pOVar1->field_0x24 = 0;
  Options_SetDefaults(&g_Options->field_0x28);
  Options_SetDefaults(&g_Options->field_0x110);
  return;
}

// 0x00183590  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Fade_ToBlack(void)

{
  _g_ReplayCamShared3 = _g_ReplayCamShared3 & 0xfffffff3;
  Gfx_SetFade(2,1,0,0);
  Gfx_SetFade(2,3,0,0);
  Gfx_SetFade(4,9,0,0);
  return;
}

// 0x00183600  size 0x70
undefined4 Loading_IsActive(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (g_Loading == (LoadingCtx *)0x0) {
    uVar3 = 0;
  }
  else {
    if ((g_Loading->workBufs[0][0x4f8] == '\0') || (g_Loading->workBufs[0][0x4f8] == '\x04')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar2 = Options_GetInstance(), *(int *)(iVar2 + 0x24) == 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

// 0x00183670  size 0x1a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Loading_Update(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  
  if (_s_RaceIsReplayMode == 0) {
    View_Clear(0x431100);
    View_Clear(0x432240);
    View_Clear(0x432800);
    View_Clear(0x435bc0);
    cVar1 = g_Loading->workBufs[0][0x4f8];
    if ((cVar1 == '\0') || (cVar1 == '\x04')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && ((*(uint *)(g_Loading->workBufs[0] + 0x7c0) & 1) == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      View_Clear(0x433380);
    }
    bVar2 = g_Loading->workBufs[0][0x4f8];
    bVar3 = false;
    if ((2 < bVar2) && (bVar2 < 7)) {
      bVar3 = true;
    }
    if (bVar3) {
      if ((bVar2 == 0) || (bVar2 == 4)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        View_Clear(0x435600);
      }
    }
  }
  else {
    View_Clear(0x4316c0);
    View_Clear(0x431c80);
    View_Clear(0x432800);
  }
  return;
}

// 0x00183810  size 0xe0
undefined4 Loading_LoadScreenImage(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(&DAT_0030ba00 + (param_1 & 0xff) * 4);
  uVar2 = g_ArcToc->entries[iVar1].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[iVar1].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  if (g_Loading->unk_04 != 0) {
    Mem_Free();
  }
  uVar2 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  g_Loading->unk_04 = uVar2;
  uVar3 = Arc_LoadFileEx(iVar1,g_Loading->unk_04,0x185b50,g_Loading,0,0);
  *(undefined4 *)&g_Loading->field_0xc = uVar3;
  g_Loading->flags = g_Loading->flags | 8;
  return 1;
}

// 0x001838f0  size 0xe4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Loading_End(void)

{
  int iVar1;
  int iVar2;
  
  _g_ReplayCamShared3 = _g_ReplayCamShared3 & 0xfffffff3;
  Gfx_SetFade(2,1,0,0);
  Gfx_SetFade(2,3,0,0);
  Gfx_SetFade(4,9,0,0);
  if (g_Loading->unk_04 != 0) {
    Mem_Free();
  }
  if (g_Loading->unk_08 != 0) {
    Mem_Free();
  }
  iVar2 = 0;
  iVar1 = 0;
  do {
    Mem_Free(*(undefined4 *)((int)g_Loading->workBufs + iVar1));
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  Mem_Free(g_Loading);
  g_Loading = (LoadingCtx *)0x0;
  return;
}

// 0x001839e0  size 0xc0
void Loading_Begin(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = Mem_Alloc16(0x1c,param_1);
  g_Loading = (LoadingCtx *)uVar2;
  Mem_Set16(uVar2,0,0x1c);
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar1 = Mem_Alloc16(2000,param_1);
    *(undefined4 *)((int)g_Loading->workBufs + iVar3) = uVar1;
    Mem_Set16(*(undefined4 *)((int)g_Loading->workBufs + iVar3),0,2000);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 2);
  g_Loading->unk_04 = 0;
  g_Loading->unk_08 = 0;
  Cam_Init(g_Loading->workBufs[0]);
  Cam_Init(g_Loading->workBufs[1]);
  return;
}

// 0x00183aa0  size 0x94
void Cam_Update(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar2 = (int)param_1;
  Cam_SetTarget(iVar2 + 0x510,*(undefined4 *)(iVar2 + 0x7b0));
  iVar1 = *(int *)(iVar2 + 0x7b4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar2 + 0x7b0);
  }
  Cam_SetTarget(iVar2 + 0x660,iVar1);
  (**(code **)(**(int **)(iVar2 + 0x4fc) + 0xc))(*(int **)(iVar2 + 0x4fc),param_1);
  Cam_ApplyLookAt(param_1);
  uVar3 = sceVu0InnerProduct(iVar2 + 0x4b0,iVar2 + 0x4b0);
  fVar4 = (float)Vu0_SqrtQ(uVar3);
  if (2.0 < fVar4) {
    *(undefined4 *)(iVar2 + 0x500) = 1;
  }
  return;
}

// 0x00183b40  size 0x1a8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 Cam_SetMode(undefined8 param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x4f8) == param_2) {
    *(char *)(iVar1 + 0x4f8) = param_2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x500) = 1;
    g_Loading->flags = g_Loading->flags & 10;
    *(undefined4 *)(iVar1 + 0x7c0) = 0;
    _g_ReplayCamShared3 = _g_ReplayCamShared3 & 0xfffffff3;
    Gfx_SetFade(2,1,0,0);
    Gfx_SetFade(2,3,0,0);
    Gfx_SetFade(4,9,0,0);
    *(char *)(iVar1 + 0x4f8) = param_2;
  }
  if (*(byte *)(iVar1 + 0x4f8) < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)(iVar1 + 0x4f8)) {
    case 0:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_1;
      break;
    case 1:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_2;
      break;
    case 2:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_3;
      break;
    case 3:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_8;
      break;
    case 4:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_1;
      break;
    case 5:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_2;
      break;
    case 6:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_3;
      break;
    case 7:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_5;
      break;
    case 8:
      *(undefined **)(iVar1 + 0x4fc) = &s___sinit_00369910_6;
    }
  }
  (**(code **)(**(int **)(iVar1 + 0x4fc) + 8))(*(int **)(iVar1 + 0x4fc),param_1);
  *(undefined4 *)(iVar1 + 0x4e0) = *(undefined4 *)(iVar1 + 0x4ec);
  *(undefined4 *)(iVar1 + 0x4e4) = *(undefined4 *)(iVar1 + 0x4f0);
  *(undefined4 *)(iVar1 + 0x4e8) = *(undefined4 *)(iVar1 + 0x4f4);
  Cam_SetYaw(*(undefined4 *)(iVar1 + 0x4e0),param_1);
  Cam_SetPitch(*(undefined4 *)(iVar1 + 0x4e4),param_1);
  _s_CamVar1 = *(undefined4 *)(iVar1 + 0x4e8);
  *(undefined4 *)(iVar1 + 0x4e8) = _s_CamVar1;
  return *(undefined1 *)(iVar1 + 0x4f8);
}

// 0x00183cf0  size 0xbc
/* WARNING: Removing unreachable block (ram,0x00183d7c) */

undefined1 Cam_NextMode(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x4f8);
  bVar2 = false;
  if ((2 < bVar1) && (bVar1 < 7)) {
    bVar2 = true;
  }
  if (bVar2) {
    uVar4 = bVar1 + 1;
    if (uVar4 < 3) {
      uVar4 = 6;
    }
    else if (6 < uVar4) {
      uVar4 = 3;
    }
  }
  else {
    if (2 < bVar1) {
      return *(undefined1 *)(param_1 + 0x4f8);
    }
    uVar4 = bVar1 + 1;
    if (2 < uVar4) {
      uVar4 = 0;
    }
  }
  uVar3 = Cam_SetMode(param_1,uVar4 & 0xff);
  return uVar3;
}

// 0x00183db0  size 0x30
undefined4 Cam_IsTransitioning(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x4f8) == '\x01') || (*(char *)(param_1 + 0x4f8) == '\x05')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00183de0  size 0x2c
undefined4 Cam_IsIdle(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x4f8) == '\0') || (*(char *)(param_1 + 0x4f8) == '\x04')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00183e10  size 0x80
void Cam_UpdateShake(int param_1,undefined8 param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((2 < *(byte *)(param_1 + 0x4f8)) && (*(byte *)(param_1 + 0x4f8) < 7)) {
    bVar1 = true;
  }
  if (bVar1) {
    sceVu0CopyVector(param_2,param_1 + 0x4d0);
  }
  else if (*(int *)(param_1 + 0x7b0) == 0) {
    sceVu0CopyVector(param_2,param_1 + 0x420);
  }
  else {
    sceVu0CopyVector(param_2,param_1 + 0x510);
  }
  return;
}

// 0x00183e90  size 0x148
void Cam_UpdateTargetFromCar(int param_1)

{
  bool bVar1;
  float fVar2;
  RaceCar *pRVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar6 = *(int *)(param_1 + 0x7b0);
  if (iVar6 == 0) {
    sceVu0CopyVector(param_1 + 0x450,param_1 + 0x430);
  }
  else {
    if ((*(char *)(param_1 + 0x4f8) == '\0') || (*(char *)(param_1 + 0x4f8) == '\x04')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = PhysBody_GetWorldMatrix(*(undefined4 *)(iVar6 + 0x154));
      iVar6 = 0;
      fVar2 = 1e+07;
      do {
        pRVar3 = RaceCar_Get(iVar6);
        if ((pRVar3 != (RaceCar *)0x0) && (pRVar3 != *(RaceCar **)(param_1 + 0x7b0))) {
          uVar5 = PhysBody_GetWorldMatrix(pRVar3->unk_0154);
          Vec3_Sub(auStack_10,uVar5,uVar4);
          Vec3_Sub(auStack_20,uVar5,uVar4);
          fVar7 = (float)Vec3_Dot(auStack_10,auStack_20);
          if (fVar7 < fVar2) {
            *(RaceCar **)(param_1 + 0x7b4) = pRVar3;
            fVar2 = fVar7;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
    }
    else {
      *(int *)(param_1 + 0x7b4) = iVar6;
    }
    sceVu0CopyVector(param_1 + 0x450,param_1 + 0x660);
  }
  return;
}

// 0x00183fe0  size 0x194
float Cam_ComputeFov(int param_1,int param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined1 auStack_10 [12];
  undefined4 uStack_4;
  
  sceVu0CopyVector(auStack_20,param_1 + 0x4b0);
  sceVu0ScaleVector(0x42700000,auStack_20,auStack_20);
  uStack_14 = 0;
  uVar1 = PhysBody_GetPositionPtr(*(undefined4 *)(param_2 + 0x154));
  sceVu0CopyVector(auStack_30,uVar1);
  uStack_24 = 0;
  uVar1 = PhysBody_GetWorldMatrix(*(undefined4 *)(param_2 + 0x154));
  sceVu0CopyVector(auStack_10,uVar1);
  uStack_4 = 0;
  sceVu0SubVector(auStack_40,param_1 + 0x420,auStack_10);
  fVar2 = (float)sceVu0InnerProduct(auStack_40,auStack_30);
  fVar3 = (float)sceVu0InnerProduct(auStack_40,auStack_40);
  maybe_sceVu0ScaleVectorXYZ(fVar2 / fVar3,auStack_30,auStack_40);
  uVar4 = sceVu0InnerProduct(auStack_30,auStack_30);
  fVar5 = (float)Vu0_SqrtQ(uVar4);
  if (fVar2 / fVar3 < 0.0) {
    fVar5 = fVar5 * -1.0;
  }
  fVar2 = (float)sceVu0InnerProduct(auStack_40,auStack_20);
  fVar3 = (float)sceVu0InnerProduct(auStack_40,auStack_40);
  maybe_sceVu0ScaleVectorXYZ(fVar2 / fVar3,auStack_20,auStack_40);
  uVar4 = sceVu0InnerProduct(auStack_20,auStack_20);
  fVar6 = (float)Vu0_SqrtQ(uVar4);
  if (0.0 < fVar2 / fVar3) {
    fVar6 = fVar6 * -1.0;
  }
  return (fVar6 + 170.0) / (170.0 - fVar5);
}

