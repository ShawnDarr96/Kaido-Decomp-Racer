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
    uVar2 = maybe_RaceProg_GetEntry();
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
  undefined4 uVar2;
  bool bVar3;
  GameState *pGVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  uchar uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined4 *puVar22;
  undefined2 *puVar23;
  int iVar24;
  undefined2 *puVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined4 uVar28;
  undefined4 uStack_374;
  undefined4 auStack_36c [6];
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
  undefined1 uStack_2b0;
  uint uStack_2ac;
  undefined1 uStack_2a8;
  char cStack_2a7;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 auStack_29c [6];
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
  undefined1 auStack_e0 [4];
  uint uStack_dc;
  undefined1 uStack_d8;
  char cStack_d7;
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
  uint uStack_8;
  uint uStack_4;
  
  uVar28 = 1;
  GameState_LoadRecords(auStack_1a0);
  lVar14 = GameState_GetRivalCount();
  if (lVar14 != 0) goto LAB_001806c0;
  iVar10 = GameState_GetPlayerCount();
  uVar15 = GameState_GetPlayerCount();
  iVar11 = GameState_Elem_f0_xcc(0);
  GameState_GetCurrentRecord(&iStack_1c0);
  iVar24 = 0;
  iStack_100 = iStack_1c0;
  iStack_fc = iStack_1bc;
  uStack_f8 = uStack_1b8;
  uStack_f4 = uStack_1b4;
  uStack_f0 = uStack_1b0;
  lVar14 = GameState_Get_c4();
  if (0 < lVar14) {
    do {
      GameState_GetRecord(&iStack_1e0,iVar24);
      if (iStack_1e0 != -1) {
        iVar10 = iVar10 + 1;
      }
      if (iStack_1dc != -1) {
        iVar10 = iVar10 + 1;
      }
      iVar24 = iVar24 + 1;
      iVar12 = GameState_Get_c4();
    } while (iVar24 < iVar12);
  }
  if (iStack_100 == -1) {
    uVar28 = 0;
    goto LAB_001806c0;
  }
  uVar16 = GameState_Elem_2fa0_x17c(iVar10);
  GameState_Elem_3e0_x540(iVar10);
  uVar17 = GameState_Get_2();
  Opponent_BuildEntry(uVar16,0,auStack_e0,iVar10,uVar17);
  cVar7 = (char)iVar10;
  *(undefined1 *)(iVar11 + 8) = 1;
  iVar24 = (int)uVar16;
  cStack_d7 = cVar7;
  if (g_RaceCtx->raceType != '\x06') {
    lVar14 = GameState_Get_48();
    if (lVar14 < 2) {
      uVar28 = *(undefined4 *)(iVar24 + 0x14);
      uVar17 = RivalRec_GetType(uVar16);
      RivalRec_IsBelowMax(uVar16);
      lVar27 = (long)*(short *)(iVar24 + 0x38);
      lVar14 = (long)*(short *)(iVar24 + 0x3a);
    }
    else {
      uVar16 = GameState_Ptr_3a04();
      puVar18 = (undefined4 *)uVar16;
      uVar28 = *puVar18;
      uVar17 = Profile_GetGarageSize(uVar16);
      Profile_HasFreeGarageSlot(uVar16);
      lVar27 = (long)(int)puVar18[5];
      lVar14 = (long)(int)puVar18[6];
    }
    GameState_Set_354(uVar17);
    uVar16 = Race_GetLapCountForMode(uVar28);
    g_GameState->course = (uchar)uVar16;
    uVar8 = Race_GetRewardAmount(uVar16,lVar27,lVar14,&uStack_4,&uStack_8);
    g_GameState->direction = uVar8;
    g_GameState->unk_000c = uStack_4;
    g_GameState->unk_0010 = uStack_8;
  }
  cVar9 = GameState_Get_354_7050();
  if (cVar9 == '\x02') {
LAB_00180b1c:
    GameState_Set_364(*(undefined4 *)(iVar24 + 0x40));
    uStack_d8 = 0;
    *(undefined1 *)(iVar11 + 8) = 0;
    uVar13 = uStack_dc | 0x100;
    if (*(uint *)(iVar24 + 0x30) != 0xffffffff) {
      g_GameState->unk_3ac8 = *(uint *)(iVar24 + 0x30);
      uVar13 = uStack_dc | 0x120;
    }
  }
  else {
    if ((cVar9 == '\x01') || (cVar9 == '\x03')) {
      GameState_Set_390(*(undefined4 *)(iVar24 + 0x3c));
      goto LAB_00180b1c;
    }
    uVar13 = uStack_dc;
    if (cVar9 == '\x04') {
      uStack_d8 = 2;
      *(undefined1 *)(iVar11 + 8) = 0;
    }
    else if (cVar9 == '\x05') {
      uStack_d8 = 0;
      *(undefined1 *)(iVar11 + 8) = 2;
    }
  }
  uStack_dc = uVar13;
  uVar2 = uStack_d0;
  cVar9 = cStack_d7;
  uVar6 = uStack_d8;
  uVar5 = auStack_e0[0];
  pGVar4 = g_GameState;
  uVar28 = 1;
  puVar26 = auStack_cc;
  uStack_2a8 = uStack_d8;
  iVar11 = 0x17;
  uStack_2ac = uStack_dc | 0x82;
  uStack_2b0 = auStack_e0[0];
  puVar18 = auStack_29c;
  cStack_2a7 = cStack_d7;
  uStack_2a4 = CONCAT22(uStack_d2,uStack_d4);
  uStack_2a0 = uStack_d0;
  puVar19 = puVar26;
  uStack_dc = uStack_2ac;
  do {
    iVar11 = iVar11 + -1;
    *(undefined1 *)puVar18 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar18 = (undefined4 *)((int)puVar18 + 1);
  } while (0 < iVar11);
  puVar25 = auStack_90;
  puVar20 = auStack_260;
  iVar11 = 8;
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
    iVar11 = iVar11 + -1;
    uVar1 = puVar21[1];
    *puVar20 = *puVar21;
    puVar20[1] = uVar1;
    puVar21 = puVar21 + 2;
    puVar20 = puVar20 + 2;
  } while (0 < iVar11);
  puVar23 = auStack_70;
  puVar20 = auStack_240;
  iVar11 = 0x15;
  puVar21 = puVar23;
  do {
    iVar11 = iVar11 + -1;
    uVar1 = puVar21[1];
    *puVar20 = *puVar21;
    puVar20[1] = uVar1;
    puVar21 = puVar21 + 2;
    puVar20 = puVar20 + 2;
  } while (0 < iVar11);
  uStack_1ec = uStack_1c;
  puVar22 = auStack_29c;
  iVar24 = (int)uVar15;
  uStack_1e8 = uStack_18;
  *(undefined1 *)(g_GameState->entrySetup + iVar24) = uVar5;
  *(uint *)&pGVar4->entrySetup[iVar24].field_0x4 = uStack_2ac;
  puVar18 = (undefined4 *)&pGVar4->entrySetup[iVar24].field_0x14;
  iVar11 = 0x17;
  pGVar4->entrySetup[iVar24].field_0x8 = uVar6;
  pGVar4->entrySetup[iVar24].field_0x9 = cVar9;
  *(undefined4 *)&pGVar4->entrySetup[iVar24].field_0xc = uStack_2a4;
  *(undefined4 *)&pGVar4->entrySetup[iVar24].field_0x10 = uVar2;
  do {
    iVar11 = iVar11 + -1;
    uVar2 = puVar22[1];
    *puVar18 = *puVar22;
    puVar18[1] = uVar2;
    puVar22 = puVar22 + 2;
    puVar18 = puVar18 + 2;
  } while (0 < iVar11);
  GameState_Set_e4(1);
  if (iStack_fc != -1) {
    uVar16 = GameState_Elem_2fa0_x17c(iVar10 + 1);
    GameState_Elem_3e0_x540(iVar10 + 1);
    lVar14 = RivalRec_IsBoss(uVar16);
    if (lVar14 == 0) {
      uVar15 = GameState_Get_2();
      Opponent_BuildEntry(uVar16,2,auStack_e0,iVar10 + 1,uVar15);
    }
    else {
      iVar11 = GameState_Elem_f0_xcc(uVar15);
      *(undefined1 *)(iVar11 + 8) = 2;
      uVar15 = GameState_Get_2();
      Opponent_BuildEntry(uVar16,0,auStack_e0,iVar10 + 1,uVar15);
    }
    uVar5 = uStack_d8;
    pGVar4 = g_GameState;
    puVar18 = auStack_36c;
    iVar10 = 0x17;
    uStack_374 = CONCAT22(uStack_d2,uStack_d4);
    uVar13 = uStack_dc | 0x82;
    uStack_dc = uVar13;
    cStack_d7 = cVar7 + '\x01';
    do {
      iVar10 = iVar10 + -1;
      *(undefined1 *)puVar18 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    } while (0 < iVar10);
    puVar21 = auStack_330;
    iVar10 = 8;
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
      iVar10 = iVar10 + -1;
      uVar1 = puVar25[1];
      *puVar21 = *puVar25;
      puVar21[1] = uVar1;
      puVar25 = puVar25 + 2;
      puVar21 = puVar21 + 2;
    } while (0 < iVar10);
    puVar21 = auStack_310;
    iVar10 = 0x15;
    do {
      iVar10 = iVar10 + -1;
      uVar1 = puVar23[1];
      *puVar21 = *puVar23;
      puVar21[1] = uVar1;
      puVar23 = puVar23 + 2;
      puVar21 = puVar21 + 2;
    } while (0 < iVar10);
    uStack_2bc = uStack_1c;
    uStack_2b8 = uStack_18;
    *(undefined1 *)(g_GameState->entrySetup + iVar24 + 1) = auStack_e0[0];
    *(uint *)&pGVar4->entrySetup[iVar24 + 1].field_0x4 = uVar13;
    pGVar4->entrySetup[iVar24 + 1].field_0x8 = uVar5;
    puVar18 = (undefined4 *)&pGVar4->entrySetup[iVar24 + 1].field_0x14;
    puVar22 = auStack_36c;
    iVar10 = 0x17;
    pGVar4->entrySetup[iVar24 + 1].field_0x9 = cVar7 + '\x01';
    *(undefined4 *)&pGVar4->entrySetup[iVar24 + 1].field_0xc = uStack_374;
    *(undefined4 *)&pGVar4->entrySetup[iVar24 + 1].field_0x10 = uStack_d0;
    do {
      iVar10 = iVar10 + -1;
      uVar2 = puVar22[1];
      *puVar18 = *puVar22;
      puVar18[1] = uVar2;
      puVar22 = puVar22 + 2;
      puVar18 = puVar18 + 2;
    } while (0 < iVar10);
    GameState_Set_e4(2);
  }
LAB_001806c0:
  cVar7 = GameState_Get_354();
  if (cVar7 == '\a') {
    if (g_RaceCtx->mode == '\x01') {
      uVar15 = Profile_Get(0);
      lVar14 = Profile_GetStat(uVar15,6);
      if (lVar14 == 0) {
        uVar15 = Profile_Get(0);
        lVar14 = Profile_GetStat(uVar15,5);
        if (lVar14 == 0) {
          uVar15 = Profile_Get(0);
          lVar14 = Profile_GetStat(uVar15,2);
          if (lVar14 == 0) {
            uVar15 = Profile_Get(0);
            lVar14 = Profile_GetStat(uVar15,0);
            if (lVar14 == 0) {
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
  iVar10 = Course_GetIdFromSelection
                     (g_GameState->course,g_GameState->unk_0003,g_GameState->unk_0002);
  g_GameState->unk_0044 = (uint)(&PTR_DAT_00326710)[iVar10];
  g_GameState->unk_0014 = 0;
  if (g_GameState->direction == '\0') {
    uVar8 = g_GameState->course;
    if ((((uVar8 == '\b') || (uVar8 == '\a')) || (uVar8 == '\x03')) ||
       ((uVar8 == '\x04' || (uVar8 == '\0')))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
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
    uVar8 = g_GameState->course;
    if (((uVar8 == '\b') || (uVar8 == '\a')) ||
       ((uVar8 == '\x03' || ((uVar8 == '\x04' || (uVar8 == '\0')))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
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
  return uVar28;
}

// 0x00180fa0  size 0x1c28
/* 7 callers; builds the whole grid */

undefined4 RaceSetup_Prepare(void)

{
  undefined2 uVar1;
  bool bVar2;
  GameState *pGVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  uchar uVar9;
  byte bVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined2 *puVar21;
  RaceEntrySetup *pRVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  undefined2 *puVar26;
  uint *puVar27;
  uint *puVar28;
  undefined2 *puVar29;
  undefined1 *puVar30;
  int iVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined2 *puVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  float fVar41;
  undefined4 uVar42;
  uint uVar43;
  undefined4 uStack_1260;
  int iStack_1250;
  undefined4 uStack_1220;
  undefined4 uStack_1204;
  undefined4 auStack_11fc [6];
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
  undefined1 uStack_1140;
  uint uStack_113c;
  undefined1 uStack_1138;
  char cStack_1137;
  undefined4 uStack_1134;
  undefined4 uStack_1130;
  undefined4 auStack_112c [6];
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
  undefined1 auStack_170 [4];
  uint uStack_16c;
  undefined1 uStack_168;
  char cStack_167;
  undefined2 uStack_164;
  undefined2 uStack_162;
  undefined4 uStack_160;
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
    piVar14 = (int *)maybe_Replay_GetSize();
    pGVar3 = g_GameState;
    iVar19 = *piVar14;
    iVar12 = 0xf;
    g_GameState->course = *(uchar *)(iVar19 + 0x28);
    pGVar3->direction = *(uchar *)(iVar19 + 0x29);
    pGVar3->unk_0002 = *(uchar *)(iVar19 + 0x2a);
    pGVar3->unk_0003 = *(uchar *)(iVar19 + 0x2b);
    pGVar3->field_0x4 = *(undefined1 *)(iVar19 + 0x2c);
    pGVar3->unk_0008 = *(uint *)(iVar19 + 0x30);
    pGVar3->unk_000c = *(uint *)(iVar19 + 0x34);
    pGVar3->unk_0010 = *(uint *)(iVar19 + 0x38);
    pGVar3->unk_0014 = *(uint *)(iVar19 + 0x3c);
    uVar42 = *(undefined4 *)(iVar19 + 0x44);
    uVar36 = *(undefined4 *)(iVar19 + 0x48);
    uVar38 = *(undefined4 *)(iVar19 + 0x4c);
    *(undefined4 *)&pGVar3->field_0x18 = *(undefined4 *)(iVar19 + 0x40);
    *(undefined4 *)&pGVar3->field_0x1c = uVar42;
    *(undefined4 *)&pGVar3->field_0x20 = uVar36;
    *(undefined4 *)&pGVar3->field_0x24 = uVar38;
    uVar42 = *(undefined4 *)(iVar19 + 0x54);
    uVar36 = *(undefined4 *)(iVar19 + 0x58);
    uVar38 = *(undefined4 *)(iVar19 + 0x5c);
    *(undefined4 *)&pGVar3->field_0x28 = *(undefined4 *)(iVar19 + 0x50);
    *(undefined4 *)&pGVar3->field_0x2c = uVar42;
    *(undefined4 *)&pGVar3->field_0x30 = uVar36;
    *(undefined4 *)&pGVar3->field_0x34 = uVar38;
    uVar36 = *(undefined4 *)(iVar19 + 100);
    *(undefined4 *)&pGVar3->field_0x38 = *(undefined4 *)(iVar19 + 0x60);
    *(undefined4 *)&pGVar3->field_0x3c = uVar36;
    pGVar3->unk_0040 = *(uint *)(iVar19 + 0x68);
    pGVar3->unk_0044 = *(uint *)(iVar19 + 0x6c);
    pGVar3 = g_GameState;
    iVar19 = *piVar14;
    g_GameState->modeFlags = *(uchar *)(iVar19 + 0x37c);
    *(undefined4 *)&pGVar3->field_0x358 = *(undefined4 *)(iVar19 + 0x380);
    pGVar3->unk_035c = *(uint *)(iVar19 + 900);
    pGVar3->unk_0360 = *(uint *)(iVar19 + 0x388);
    uVar42 = *(undefined4 *)(iVar19 + 0x390);
    uVar36 = *(undefined4 *)(iVar19 + 0x394);
    uVar38 = *(undefined4 *)(iVar19 + 0x398);
    pGVar3->unk_0364 = *(uint *)(iVar19 + 0x38c);
    *(undefined4 *)&pGVar3->field_0x368 = uVar42;
    *(undefined4 *)&pGVar3->field_0x36c = uVar36;
    *(undefined4 *)&pGVar3->field_0x370 = uVar38;
    uVar42 = *(undefined4 *)(iVar19 + 0x3a0);
    uVar36 = *(undefined4 *)(iVar19 + 0x3a4);
    uVar38 = *(undefined4 *)(iVar19 + 0x3a8);
    *(undefined4 *)&pGVar3->field_0x374 = *(undefined4 *)(iVar19 + 0x39c);
    *(undefined4 *)&pGVar3->field_0x378 = uVar42;
    *(undefined4 *)&pGVar3->field_0x37c = uVar36;
    *(undefined4 *)&pGVar3->field_0x380 = uVar38;
    uVar36 = *(undefined4 *)(iVar19 + 0x3b0);
    uVar38 = *(undefined4 *)(iVar19 + 0x3b4);
    *(undefined4 *)&pGVar3->field_0x384 = *(undefined4 *)(iVar19 + 0x3ac);
    *(undefined4 *)&pGVar3->field_0x388 = uVar36;
    *(undefined4 *)&pGVar3->field_0x38c = uVar38;
    uVar39 = *(uint *)(iVar19 + 0x3bc);
    pGVar3->unk_0390 = *(uint *)(iVar19 + 0x3b8);
    pGVar3->unk_0394 = uVar39;
    uVar39 = *(uint *)(iVar19 + 0x3c4);
    uVar40 = *(uint *)(iVar19 + 0x3c8);
    pGVar3->unk_0398 = *(uint *)(iVar19 + 0x3c0);
    pGVar3->unk_039c = uVar39;
    pGVar3->unk_03a0 = uVar40;
    uVar43 = *(uint *)(iVar19 + 0x3d0);
    uVar39 = *(uint *)(iVar19 + 0x3d4);
    uVar40 = *(uint *)(iVar19 + 0x3d8);
    pGVar3->unk_03a4 = *(uint *)(iVar19 + 0x3cc);
    pGVar3->unk_03a8 = uVar43;
    pGVar3->unk_03ac = uVar39;
    pGVar3->unk_03b0 = uVar40;
    uVar43 = *(uint *)(iVar19 + 0x3e0);
    uVar39 = *(uint *)(iVar19 + 0x3e4);
    uVar40 = *(uint *)(iVar19 + 1000);
    pGVar3->unk_03b4 = *(uint *)(iVar19 + 0x3dc);
    pGVar3->unk_03b8 = uVar43;
    pGVar3->unk_03bc = uVar39;
    pGVar3->unk_03c0 = uVar40;
    uVar39 = *(uint *)(iVar19 + 0x3f0);
    uVar40 = *(uint *)(iVar19 + 0x3f4);
    *(undefined4 *)pGVar3->color = *(undefined4 *)(iVar19 + 0x3ec);
    pGVar3->unk_03c8 = uVar39;
    pGVar3->unk_03cc = uVar40;
    fVar37 = *(float *)(iVar19 + 0x3fc);
    fVar41 = *(float *)(iVar19 + 0x400);
    pGVar3->startPos[0] = *(float *)(iVar19 + 0x3f8);
    pGVar3->startPos[1] = fVar37;
    pGVar3->startPos[2] = fVar41;
    pGVar3->unk_03dc = *(uchar *)(iVar19 + 0x404);
    pGVar3 = g_GameState;
    iVar19 = *piVar14;
    puVar28 = (uint *)(iVar19 + 0x74);
    puVar27 = &g_GameState->unk_004c;
    g_GameState->recordHeader = *(uint *)(iVar19 + 0x70);
    do {
      iVar12 = iVar12 + -1;
      uVar39 = puVar28[1];
      *puVar27 = *puVar28;
      puVar28 = puVar28 + 2;
      *(uint *)(puVar27 + 1) = uVar39;
      puVar27 = puVar27 + 2;
    } while (0 < iVar12);
    iVar12 = 0x99;
    pGVar3->currentRecord = *(uint *)(iVar19 + 0xec);
    uVar43 = *(uint *)(iVar19 + 0xf4);
    uVar39 = *(uint *)(iVar19 + 0xf8);
    uVar40 = *(uint *)(iVar19 + 0xfc);
    pGVar3->unk_00c8 = *(uint *)(iVar19 + 0xf0);
    pGVar3->unk_00cc = uVar43;
    pGVar3->unk_00d0 = uVar39;
    pGVar3->unk_00d4 = uVar40;
    uVar39 = *(uint *)(iVar19 + 0x104);
    pGVar3->unk_00d8 = *(uint *)(iVar19 + 0x100);
    pGVar3->unk_00dc = uVar39;
    pGVar3 = g_GameState;
    iVar19 = *piVar14;
    puVar20 = (undefined4 *)(iVar19 + 0x118);
    pRVar22 = g_GameState->entrySetup;
    g_GameState->playerCount = *(uint *)(iVar19 + 0x108);
    pGVar3->rivalCount = *(uint *)(iVar19 + 0x10c);
    pGVar3->trafficCount = *(uint *)(iVar19 + 0x110);
    pGVar3->unk_00ec = *(uint *)(iVar19 + 0x114);
    do {
      iVar12 = iVar12 + -1;
      *(undefined4 *)pRVar22 = *puVar20;
      puVar20 = puVar20 + 1;
      pRVar22 = (RaceEntrySetup *)&pRVar22->field_0x4;
    } while (0 < iVar12);
    g_GameState->unk_3ac8 = *(uint *)(*piVar14 + 0x408);
    iVar19 = Course_GetIdFromSelection
                       (g_GameState->course,g_GameState->unk_0003,g_GameState->unk_0002);
    g_GameState->unk_0044 = (uint)(&PTR_DAT_00326710)[iVar19];
    iVar19 = GameState_GetTotalCarCount();
    iVar12 = 0;
    if (0 < iVar19) {
      do {
        iVar13 = GameState_Elem_f0_xcc(iVar12);
        iVar12 = iVar12 + 1;
        *(uint *)(iVar13 + 4) = *(uint *)(iVar13 + 4) | 0x80;
      } while (iVar12 < iVar19);
    }
    goto LAB_00181390;
  }
  lVar16 = GameState_Get_ec();
  if (lVar16 != 0) {
    uVar17 = Replay_GetHeader();
    uVar18 = maybe_GameState_GetFlag();
    RaceEntry_SetCar(uVar17,uVar18);
  }
  GameState_LoadRecords(aiStack_830);
  piVar25 = aiStack_830;
  piVar14 = aiStack_a0;
  iVar19 = 0x13;
  do {
    iVar19 = iVar19 + -1;
    iVar12 = piVar25[1];
    *piVar14 = *piVar25;
    piVar14[1] = iVar12;
    piVar25 = piVar25 + 2;
    piVar14 = piVar14 + 2;
  } while (0 < iVar19);
  lVar16 = GameState_GetRivalCount();
  if (aiStack_a0[0] == 0) {
    iVar19 = GameState_GetTotalCarCount();
    if (0 < lVar16) {
      aiStack_a0[0] = (int)lVar16;
      GameState_SaveRecords(aiStack_a0);
    }
    iVar12 = 0;
    if (0 < iVar19) {
      do {
        iVar13 = GameState_Elem_f0_xcc(iVar12);
        *(char *)(iVar13 + 9) = (char)iVar12;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar19);
    }
  }
  else {
    if (lVar16 != 0) goto LAB_001810e8;
    cVar8 = GameState_GetPlayerCount();
    iVar12 = GameState_GetPlayerCount();
    iVar13 = GameState_Elem_f0_xcc(0);
    GameState_GetCurrentRecord(&iStack_850);
    iVar31 = 0;
    iStack_310 = iStack_850;
    iStack_30c = iStack_84c;
    uStack_308 = uStack_848;
    uStack_304 = uStack_844;
    uStack_300 = uStack_840;
    lVar16 = GameState_Get_c4();
    iVar19 = iStack_30c;
    if (0 < lVar16) {
      do {
        GameState_GetRecord(auStack_870,iVar31);
        if (iStack_310 != -1) {
          cVar8 = cVar8 + '\x01';
        }
        if (iVar19 != -1) {
          cVar8 = cVar8 + '\x01';
        }
        iVar31 = iVar31 + 1;
        iVar15 = GameState_Get_c4();
      } while (iVar31 < iVar15);
    }
    if (iStack_310 == -1) {
      uStack_1220 = 0;
      goto LAB_001810e8;
    }
    bVar2 = false;
    RivalDb_Copy(&uStack_9f0,(short)iStack_310);
    puVar34 = auStack_2ac;
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
    puVar23 = auStack_9ac;
    uStack_2cc = uStack_9cc;
    iVar19 = 0x17;
    uStack_2c8 = uStack_9c8;
    uStack_2c4 = uStack_9c4;
    iStack_2c0 = iStack_9c0;
    uStack_2bc = uStack_9bc;
    sStack_2b8 = sStack_9b8;
    sStack_2b6 = sStack_9b6;
    iStack_2b4 = iStack_9b4;
    iStack_2b0 = iStack_9b0;
    puVar20 = puVar34;
    do {
      iVar19 = iVar19 + -1;
      *puVar20 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar20 = puVar20 + 1;
    } while (0 < iVar19);
    puVar33 = auStack_250;
    puVar23 = auStack_950;
    iVar19 = 0x17;
    puVar20 = puVar33;
    do {
      iVar19 = iVar19 + -1;
      *puVar20 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar20 = puVar20 + 1;
    } while (0 < iVar19);
    puVar32 = auStack_1f4;
    puVar23 = auStack_8f4;
    iVar19 = 8;
    puVar20 = puVar32;
    do {
      iVar19 = iVar19 + -1;
      uVar36 = puVar23[1];
      *puVar20 = *puVar23;
      puVar20[1] = uVar36;
      puVar23 = puVar23 + 2;
      puVar20 = puVar20 + 2;
    } while (0 < iVar19);
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
    uVar17 = GameState_Get_2();
    Opponent_BuildEntry(&uStack_2f0,0,auStack_170,0xffffffffffffffff,uVar17);
    *(undefined1 *)(iVar13 + 8) = 1;
    cStack_167 = cVar8;
    lVar16 = GameState_Get_48();
    if (lVar16 < 2) {
      uStack_1260 = uStack_2dc;
      uVar17 = RivalRec_GetType(&uStack_2f0);
      RivalRec_IsBelowMax(&uStack_2f0);
      lVar16 = (long)sStack_2b8;
      iStack_1250 = (int)sStack_2b6;
    }
    else {
      sVar11 = RivalRec_GetId(&uStack_2f0);
      Rival_GetTeamRecord(auStack_a40,sVar11);
      puVar23 = auStack_a40;
      puVar20 = auStack_360;
      iVar19 = 0x11;
      do {
        iVar19 = iVar19 + -1;
        *puVar20 = *puVar23;
        puVar23 = puVar23 + 1;
        puVar20 = puVar20 + 1;
      } while (0 < iVar19);
      uStack_1260 = auStack_360[0];
      uVar17 = Profile_GetGarageSize(auStack_360);
      Profile_HasFreeGarageSlot(auStack_360);
      lVar16 = (long)iStack_34c;
      iStack_1250 = iStack_348;
    }
    if (g_RaceCtx->raceType == '\x06') {
      GameState_Set_354(0);
    }
    else {
      GameState_Set_354(uVar17);
    }
    uVar17 = Race_GetLapCountForMode(uStack_1260);
    g_GameState->course = (uchar)uVar17;
    uVar9 = Race_GetRewardAmount(uVar17,lVar16,iStack_1250,&uStack_4,&uStack_8);
    g_GameState->direction = uVar9;
    g_GameState->unk_000c = uStack_4;
    g_GameState->unk_0010 = uStack_8;
    bVar10 = GameState_Get_354_7050();
    uVar39 = uStack_16c;
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
      uStack_168 = 0;
      *(undefined1 *)(iVar13 + 8) = 0;
      uVar39 = uStack_16c | 0x100;
      if (iStack_2c0 != -1) {
        g_GameState->unk_3ac8 = iStack_2c0 + 0x1bd5;
        uVar39 = uStack_16c | 0x120;
      }
      break;
    case 4:
      uStack_168 = 2;
      *(undefined1 *)(iVar13 + 8) = 0;
      break;
    case 5:
      uStack_168 = 0;
      *(undefined1 *)(iVar13 + 8) = 2;
      break;
    case 6:
      bVar2 = true;
      GameState_Set_364(iStack_2b0);
      uVar39 = uStack_16c;
      if (iStack_2b4 != 0) {
        GameState_Set_3a0();
        uVar39 = uStack_16c;
      }
      break;
    case 7:
      bVar2 = true;
      if (iStack_2b4 == 0) break;
      GameState_Set_390();
      goto LAB_00181d98;
    }
switchD_00181ca8_caseD_0:
    uStack_16c = uVar39;
LAB_00181d98:
    uVar36 = uStack_160;
    cVar6 = cStack_167;
    uVar5 = uStack_168;
    uVar4 = auStack_170[0];
    pGVar3 = g_GameState;
    uStack_1220 = 1;
    uVar39 = uStack_16c | 0x82;
    uStack_16c = uVar39;
    if (!bVar2) {
      puVar30 = auStack_15c;
      puVar20 = auStack_112c;
      iVar19 = 0x17;
      uStack_1140 = auStack_170[0];
      uStack_1138 = uStack_168;
      cStack_1137 = cStack_167;
      uStack_1134 = CONCAT22(uStack_162,uStack_164);
      uStack_1130 = uStack_160;
      puVar24 = puVar30;
      do {
        iVar19 = iVar19 + -1;
        *(undefined1 *)puVar20 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar20 = (undefined4 *)((int)puVar20 + 1);
      } while (0 < iVar19);
      puVar29 = auStack_120;
      puVar26 = auStack_10f0;
      iVar19 = 8;
      uStack_1114 = uStack_144;
      uStack_1110 = uStack_140;
      uStack_110c = uStack_13c;
      uStack_1108 = uStack_138;
      uStack_1104 = uStack_134;
      uStack_1100 = uStack_130;
      uStack_10fc = uStack_12c;
      uStack_10f8 = uStack_128;
      uStack_10f4 = uStack_124;
      puVar21 = puVar29;
      do {
        iVar19 = iVar19 + -1;
        uVar1 = puVar21[1];
        *puVar26 = *puVar21;
        puVar26[1] = uVar1;
        puVar21 = puVar21 + 2;
        puVar26 = puVar26 + 2;
      } while (0 < iVar19);
      puVar35 = auStack_100;
      puVar26 = auStack_10d0;
      iVar19 = 0x15;
      puVar21 = puVar35;
      do {
        iVar19 = iVar19 + -1;
        uVar1 = puVar21[1];
        *puVar26 = *puVar21;
        puVar26[1] = uVar1;
        puVar21 = puVar21 + 2;
        puVar26 = puVar26 + 2;
      } while (0 < iVar19);
      uStack_1078 = uStack_a8;
      uStack_107c = uStack_ac;
      puVar23 = auStack_112c;
      *(undefined1 *)(g_GameState->entrySetup + iVar12) = uVar4;
      *(uint *)&pGVar3->entrySetup[iVar12].field_0x4 = uVar39;
      puVar20 = (undefined4 *)&pGVar3->entrySetup[iVar12].field_0x14;
      iVar19 = 0x17;
      pGVar3->entrySetup[iVar12].field_0x8 = uVar5;
      pGVar3->entrySetup[iVar12].field_0x9 = cVar6;
      *(undefined4 *)&pGVar3->entrySetup[iVar12].field_0xc = uStack_1134;
      *(undefined4 *)&pGVar3->entrySetup[iVar12].field_0x10 = uVar36;
      do {
        iVar19 = iVar19 + -1;
        uVar36 = puVar23[1];
        *puVar20 = *puVar23;
        puVar20[1] = uVar36;
        puVar23 = puVar23 + 2;
        puVar20 = puVar20 + 2;
      } while (0 < iVar19);
      uStack_113c = uVar39;
      GameState_Set_e4(1);
      if (iStack_30c != -1) {
        RivalDb_Copy(&uStack_bc0,(short)iStack_30c);
        puVar20 = auStack_b7c;
        iVar19 = 0x17;
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
          iVar19 = iVar19 + -1;
          *puVar34 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar34 = puVar34 + 1;
        } while (0 < iVar19);
        puVar20 = auStack_b20;
        iVar19 = 0x17;
        do {
          iVar19 = iVar19 + -1;
          *puVar33 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar33 = puVar33 + 1;
        } while (0 < iVar19);
        puVar20 = auStack_ac4;
        iVar19 = 8;
        do {
          iVar19 = iVar19 + -1;
          uVar36 = puVar20[1];
          *puVar32 = *puVar20;
          puVar32[1] = uVar36;
          puVar20 = puVar20 + 2;
          puVar32 = puVar32 + 2;
        } while (0 < iVar19);
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
        lVar16 = RivalRec_IsBoss(&uStack_2f0);
        if (lVar16 == 0) {
          uVar17 = GameState_Get_2();
          Opponent_BuildEntry(&uStack_2f0,2,auStack_170,0xffffffffffffffff,uVar17);
        }
        else {
          iVar19 = GameState_Elem_f0_xcc(iVar12);
          *(undefined1 *)(iVar19 + 8) = 2;
          uVar17 = GameState_Get_2();
          Opponent_BuildEntry(&uStack_2f0,0,auStack_170,0xffffffffffffffff,uVar17);
        }
        pGVar3 = g_GameState;
        cStack_167 = cVar8 + '\x01';
        puVar20 = auStack_11fc;
        iVar19 = 0x17;
        uStack_1204 = CONCAT22(uStack_162,uStack_164);
        uStack_16c = uStack_16c | 0x82;
        do {
          iVar19 = iVar19 + -1;
          *(undefined1 *)puVar20 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar20 = (undefined4 *)((int)puVar20 + 1);
        } while (0 < iVar19);
        puVar21 = auStack_11c0;
        iVar19 = 8;
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
          iVar19 = iVar19 + -1;
          uVar1 = puVar29[1];
          *puVar21 = *puVar29;
          puVar21[1] = uVar1;
          puVar29 = puVar29 + 2;
          puVar21 = puVar21 + 2;
        } while (0 < iVar19);
        puVar21 = auStack_11a0;
        iVar19 = 0x15;
        do {
          iVar19 = iVar19 + -1;
          uVar1 = puVar35[1];
          *puVar21 = *puVar35;
          puVar21[1] = uVar1;
          puVar35 = puVar35 + 2;
          puVar21 = puVar21 + 2;
        } while (0 < iVar19);
        uStack_114c = uStack_ac;
        uStack_1148 = uStack_a8;
        *(undefined1 *)(g_GameState->entrySetup + iVar12 + 1) = auStack_170[0];
        puVar23 = auStack_11fc;
        *(uint *)&pGVar3->entrySetup[iVar12 + 1].field_0x4 = uStack_16c;
        pGVar3->entrySetup[iVar12 + 1].field_0x8 = uStack_168;
        puVar20 = (undefined4 *)&pGVar3->entrySetup[iVar12 + 1].field_0x14;
        iVar19 = 0x17;
        pGVar3->entrySetup[iVar12 + 1].field_0x9 = cStack_167;
        *(undefined4 *)&pGVar3->entrySetup[iVar12 + 1].field_0xc = uStack_1204;
        *(undefined4 *)&pGVar3->entrySetup[iVar12 + 1].field_0x10 = uStack_160;
        do {
          iVar19 = iVar19 + -1;
          uVar36 = puVar23[1];
          *puVar20 = *puVar23;
          puVar20[1] = uVar36;
          puVar23 = puVar23 + 2;
          puVar20 = puVar20 + 2;
        } while (0 < iVar19);
        GameState_Set_e4(2);
      }
    }
  }
LAB_001810e8:
  cVar8 = GameState_Get_354();
  if (cVar8 == '\a') {
    if (g_RaceCtx->mode == '\x01') {
      uVar17 = Profile_Get(0);
      lVar16 = Profile_GetStat(uVar17,6);
      if (lVar16 == 0) {
        uVar17 = Profile_Get(0);
        lVar16 = Profile_GetStat(uVar17,5);
        if (lVar16 == 0) {
          uVar17 = Profile_Get(0);
          lVar16 = Profile_GetStat(uVar17,2);
          if (lVar16 == 0) {
            uVar17 = Profile_Get(0);
            lVar16 = Profile_GetStat(uVar17,0);
            if (lVar16 == 0) {
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
  iVar19 = Course_GetIdFromSelection
                     (g_GameState->course,g_GameState->unk_0003,g_GameState->unk_0002);
  g_GameState->unk_0044 = (uint)(&PTR_DAT_00326710)[iVar19];
  g_GameState->unk_0014 = 0;
  if (g_GameState->direction == '\0') {
    uVar9 = g_GameState->course;
    if ((((uVar9 == '\b') || (uVar9 == '\a')) || (uVar9 == '\x03')) ||
       ((uVar9 == '\x04' || (uVar9 == '\0')))) {
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
    uVar9 = g_GameState->course;
    if (((uVar9 == '\b') || (uVar9 == '\a')) ||
       ((uVar9 == '\x03' || ((uVar9 == '\x04' || (uVar9 == '\0')))))) {
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
    iVar19 = GameState_GetTotalCarCount();
    iVar12 = 0;
    if (0 < iVar19) {
      do {
        GameState_CopyPlayerRecord(auStack_cb0,iVar12);
        iVar13 = 0x17;
        puVar30 = auStack_c9c;
        auStack_430[0] = auStack_cb0[0];
        uStack_424 = uStack_ca4;
        uStack_422 = uStack_ca2;
        uStack_42c = uStack_cac;
        uStack_428 = uStack_ca8;
        uStack_427 = uStack_ca7;
        uStack_420 = uStack_ca0;
        puVar24 = auStack_41c;
        do {
          iVar13 = iVar13 + -1;
          *puVar24 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar24 = puVar24 + 1;
        } while (0 < iVar13);
        iVar13 = 8;
        puVar26 = auStack_c60;
        puVar21 = auStack_3e0;
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
          iVar13 = iVar13 + -1;
          uVar1 = puVar26[1];
          *puVar21 = *puVar26;
          puVar21[1] = uVar1;
          puVar26 = puVar26 + 2;
          puVar21 = puVar21 + 2;
        } while (0 < iVar13);
        iVar13 = 0x15;
        puVar26 = auStack_c40;
        puVar21 = auStack_3c0;
        do {
          iVar13 = iVar13 + -1;
          uVar1 = puVar26[1];
          *puVar21 = *puVar26;
          puVar21[1] = uVar1;
          puVar26 = puVar26 + 2;
          puVar21 = puVar21 + 2;
        } while (0 < iVar13);
        uStack_36c = uStack_bec;
        uStack_368 = uStack_be8;
        uVar17 = GameState_Elem_3e0_x540(iVar12);
        maybe_RaceSetup_BuildCarEntry(uVar17,auStack_430);
        MenuCar_ApplyPartPreview(auStack_550,uStack_424,uStack_422,auStack_41c,uStack_36c);
        uVar17 = GameState_Elem_28a0_x100(iVar12);
        memcpy(uVar17,auStack_550,0x100);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar19);
    }
  }
  else {
    iVar19 = GameState_GetPlayerCount();
    iVar13 = 0;
    iVar31 = 0;
    GameState_LoadRecords(auStack_d50);
    puVar23 = auStack_d50;
    puVar20 = auStack_610;
    iVar12 = 0x13;
    do {
      iVar12 = iVar12 + -1;
      uVar36 = puVar23[1];
      *puVar20 = *puVar23;
      puVar20[1] = uVar36;
      puVar23 = puVar23 + 2;
      puVar20 = puVar20 + 2;
    } while (0 < iVar12);
    piVar14 = aiStack_570;
    aiStack_570[0] = -1;
    iVar12 = 0;
    aiStack_570[1] = 0xffffffff;
    aiStack_570[2] = 0xffffffff;
    aiStack_570[3] = 0xffffffff;
    aiStack_570[4] = 0xffffffff;
    aiStack_570[5] = 0xffffffff;
    if (0 < iVar19) {
      do {
        GameState_CopyPlayerRecord(auStack_e20,iVar12);
        iVar15 = 0x17;
        puVar30 = auStack_e0c;
        puVar24 = auStack_41c;
        auStack_430[0] = auStack_e20[0];
        uStack_424 = uStack_e14;
        uStack_422 = uStack_e12;
        uStack_42c = uStack_e1c;
        uStack_428 = uStack_e18;
        uStack_427 = uStack_e17;
        uStack_420 = uStack_e10;
        do {
          iVar15 = iVar15 + -1;
          *puVar24 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar24 = puVar24 + 1;
        } while (0 < iVar15);
        iVar15 = 8;
        puVar26 = auStack_dd0;
        puVar21 = auStack_3e0;
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
          iVar15 = iVar15 + -1;
          uVar1 = puVar26[1];
          *puVar21 = *puVar26;
          puVar21[1] = uVar1;
          puVar26 = puVar26 + 2;
          puVar21 = puVar21 + 2;
        } while (0 < iVar15);
        iVar15 = 0x15;
        puVar26 = auStack_db0;
        puVar21 = auStack_3c0;
        do {
          iVar15 = iVar15 + -1;
          uVar1 = puVar26[1];
          *puVar21 = *puVar26;
          puVar21[1] = uVar1;
          puVar26 = puVar26 + 2;
          puVar21 = puVar21 + 2;
        } while (0 < iVar15);
        uStack_36c = uStack_d5c;
        uStack_368 = uStack_d58;
        uVar17 = GameState_Elem_3e0_x540(iVar31);
        maybe_RaceSetup_BuildCarEntry(uVar17,auStack_430);
        MenuCar_ApplyPartPreview(auStack_550,uStack_424,uStack_422,auStack_41c,uStack_36c);
        uVar17 = GameState_Elem_28a0_x100(iVar31);
        memcpy(uVar17,auStack_550,0x100);
        iVar12 = iVar12 + 1;
        iVar31 = iVar31 + 1;
      } while (iVar12 < iVar19);
    }
    iVar12 = 0;
    puVar20 = auStack_610;
    do {
      if (puVar20[1] == -1) break;
      iVar15 = puVar20[2];
      aiStack_570[iVar13] = puVar20[1];
      iVar7 = iVar13 + 1;
      if (iVar15 != -1) {
        aiStack_570[iVar13 + 1] = iVar15;
        iVar7 = iVar13 + 2;
      }
      iVar13 = iVar7;
      iVar12 = iVar12 + 1;
      puVar20 = puVar20 + 5;
    } while (iVar12 < 6);
    iVar12 = 0;
    do {
      if (*piVar14 == -1) break;
      RivalDb_Copy(&uStack_fa0,(short)*piVar14);
      puVar23 = auStack_f5c;
      uStack_790 = uStack_fa0;
      uStack_778 = uStack_f88;
      puVar20 = auStack_74c;
      uStack_78e = uStack_f9e;
      uStack_774 = uStack_f84;
      bStack_78c = bStack_f9c;
      iVar13 = 0x17;
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
        iVar13 = iVar13 + -1;
        *puVar20 = *puVar23;
        puVar23 = puVar23 + 1;
        puVar20 = puVar20 + 1;
      } while (0 < iVar13);
      iVar13 = 0x17;
      puVar23 = auStack_f00;
      puVar20 = auStack_6f0;
      do {
        iVar13 = iVar13 + -1;
        *puVar20 = *puVar23;
        puVar23 = puVar23 + 1;
        puVar20 = puVar20 + 1;
      } while (0 < iVar13);
      iVar13 = 8;
      puVar23 = auStack_ea4;
      puVar20 = auStack_694;
      do {
        iVar13 = iVar13 + -1;
        uVar36 = puVar23[1];
        *puVar20 = *puVar23;
        puVar20[1] = uVar36;
        puVar23 = puVar23 + 2;
        puVar20 = puVar20 + 2;
      } while (0 < iVar13);
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
      uVar17 = GameState_Elem_2fa0_x17c(iVar31);
      memcpy(uVar17,&uStack_790,0x17c);
      if (bStack_78c - 5 < 2) {
        GameState_CopyPlayerRecord(auStack_1070,iVar19 + iVar12);
        iVar13 = 0x17;
        puVar30 = auStack_41c;
        puVar24 = auStack_105c;
        auStack_430[0] = auStack_1070[0];
        uStack_42c = uStack_106c;
        uStack_428 = uStack_1068;
        uStack_427 = uStack_1067;
        uStack_424 = uStack_1064;
        uStack_422 = uStack_1062;
        uStack_420 = uStack_1060;
        do {
          iVar13 = iVar13 + -1;
          *puVar30 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar30 = puVar30 + 1;
        } while (0 < iVar13);
        iVar13 = 8;
        puVar26 = auStack_1020;
        puVar21 = auStack_3e0;
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
          iVar13 = iVar13 + -1;
          uVar1 = puVar26[1];
          *puVar21 = *puVar26;
          puVar21[1] = uVar1;
          puVar26 = puVar26 + 2;
          puVar21 = puVar21 + 2;
        } while (0 < iVar13);
        iVar13 = 0x15;
        puVar26 = auStack_1000;
        puVar21 = auStack_3c0;
        do {
          iVar13 = iVar13 + -1;
          uVar1 = puVar26[1];
          *puVar21 = *puVar26;
          puVar21[1] = uVar1;
          puVar26 = puVar26 + 2;
          puVar21 = puVar21 + 2;
        } while (0 < iVar13);
        uStack_36c = uStack_fac;
        uStack_368 = uStack_fa8;
      }
      else {
        uVar17 = GameState_Get_2();
        Opponent_BuildEntry(&uStack_790,0,auStack_430,0xffffffffffffffff,uVar17);
      }
      uVar17 = GameState_Elem_3e0_x540(iVar31);
      maybe_RaceSetup_BuildCarEntry(uVar17,auStack_430);
      MenuCar_ApplyPartPreview(auStack_550,uStack_424,uStack_422,auStack_41c,uStack_36c);
      uVar17 = GameState_Elem_28a0_x100(iVar31);
      memcpy(uVar17,auStack_550,0x100);
      iVar12 = iVar12 + 1;
      iVar31 = iVar31 + 1;
      piVar14 = piVar14 + 1;
    } while (iVar12 < 6);
    if (sVar11 != -1) {
      uVar17 = GameState_Ptr_3a04();
      uVar18 = GameDb_GetTeam(sVar11);
      memcpy(uVar17,uVar18,0x44);
    }
  }
  return uStack_1220;
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
  undefined4 uVar1;
  GameState *pGVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_d0 [2];
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 auStack_bc [47];
  
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
  *(undefined1 *)(g_GameState->entrySetup + param_1) = (undefined1)auStack_d0[0];
  *(undefined4 *)&pGVar2->entrySetup[param_1].field_0x4 = auStack_d0[1];
  puVar4 = (undefined4 *)&pGVar2->entrySetup[param_1].field_0x14;
  iVar3 = 0x17;
  pGVar2->entrySetup[param_1].field_0x8 = uStack_c8;
  pGVar2->entrySetup[param_1].field_0x9 = uStack_c7;
  *(undefined4 *)&pGVar2->entrySetup[param_1].field_0xc = uStack_c4;
  *(undefined4 *)&pGVar2->entrySetup[param_1].field_0x10 = uStack_c0;
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
void Controls_SetDefaults(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = uRam0036e774;
  uVar1 = uRam0036e770;
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
  
  iVar2 = iRam0036e77c;
  iVar1 = iRam0036e778;
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
/* 18 callers */

Options * maybe_Options_GetLanguage(void)

{
  return g_Options;
}

// 0x001831c0  size 0x140
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
  uVar2 = uRam0036e774;
  uVar1 = uRam0036e770;
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
/* reads Options+0x20, the field Options_ApplyBgmVolume writes (was Options_GetSeVolume) */

undefined1 maybe_Options_GetBgmVolume(void)

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
void Fade_ToBlack(void)

{
  uRam0046a028 = uRam0046a028 & 0xfffffff3;
  Gfx_SetFade(2,1,0,0);
  Gfx_SetFade(2,3,0,0);
  Gfx_SetFade(4,9,0,0);
  return;
}

// 0x00183600  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Loading_IsActive(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (_g_Loading == 0) {
    uVar4 = 0;
  }
  else {
    cVar1 = *(char *)(*(int *)(_g_Loading + 0x14) + 0x4f8);
    if ((cVar1 == '\0') || (cVar1 == '\x04')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (iVar3 = maybe_Options_GetLanguage(), *(int *)(iVar3 + 0x24) == 0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

// 0x00183670  size 0x1a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Loading_Update(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  
  if (iRam0036f1f8 == 0) {
    View_Clear(0x431100);
    View_Clear(0x432240);
    View_Clear(0x432800);
    View_Clear(0x435bc0);
    cVar1 = *(char *)(*(int *)(_g_Loading + 0x14) + 0x4f8);
    if ((cVar1 == '\0') || (cVar1 == '\x04')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && ((*(uint *)(*(int *)(_g_Loading + 0x14) + 0x7c0) & 1) == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      View_Clear(0x433380);
    }
    bVar2 = *(byte *)(*(int *)(_g_Loading + 0x14) + 0x4f8);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Loading_LoadScreenImage(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(&DAT_0030ba00 + (param_1 & 0xff) * 4);
  uVar2 = g_ArcToc->entries[iVar1].unpackedSize;
  if (uVar2 == 0) {
    uVar2 = g_ArcToc->entries[iVar1].sectorCount;
  }
  else {
    uVar2 = uVar2 + 0x7ff >> 0xb;
  }
  if (_g_Loading[1] != 0) {
    Mem_Free();
  }
  uVar2 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
  _g_Loading[1] = uVar2;
  uVar2 = Arc_LoadFileEx(iVar1,_g_Loading[1],0x185b50,_g_Loading,0,0);
  _g_Loading[3] = uVar2;
  *_g_Loading = *_g_Loading | 8;
  return 1;
}

// 0x001838f0  size 0xe4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Loading_End(void)

{
  int iVar1;
  int iVar2;
  
  uRam0046a028 = uRam0046a028 & 0xfffffff3;
  Gfx_SetFade(2,1,0,0);
  Gfx_SetFade(2,3,0,0);
  Gfx_SetFade(4,9,0,0);
  if (*(int *)(_g_Loading + 4) != 0) {
    Mem_Free();
  }
  if (*(int *)(_g_Loading + 8) != 0) {
    Mem_Free();
  }
  iVar2 = 0;
  iVar1 = 0;
  do {
    Mem_Free(*(undefined4 *)(_g_Loading + iVar1 + 0x14));
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  Mem_Free(_g_Loading);
  _g_Loading = 0;
  return;
}

// 0x001839e0  size 0xc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Loading_Begin(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = Mem_Alloc16(0x1c,param_1);
  _g_Loading = (int)uVar2;
  Mem_Set16(uVar2,0,0x1c);
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar1 = Mem_Alloc16(2000,param_1);
    *(undefined4 *)(_g_Loading + iVar3 + 0x14) = uVar1;
    Mem_Set16(*(undefined4 *)(_g_Loading + iVar3 + 0x14),0,2000);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 2);
  *(undefined4 *)(_g_Loading + 4) = 0;
  *(undefined4 *)(_g_Loading + 8) = 0;
  Cam_Init(*(undefined4 *)(_g_Loading + 0x14));
  Cam_Init(*(undefined4 *)(_g_Loading + 0x18));
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
  fVar4 = (float)maybe_Vu0_SqrtQ(uVar3);
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
    *_g_Loading = *_g_Loading & 10;
    *(undefined4 *)(iVar1 + 0x7c0) = 0;
    uRam0046a028 = uRam0046a028 & 0xfffffff3;
    Gfx_SetFade(2,1,0,0);
    Gfx_SetFade(2,3,0,0);
    Gfx_SetFade(4,9,0,0);
    *(char *)(iVar1 + 0x4f8) = param_2;
  }
  if (*(byte *)(iVar1 + 0x4f8) < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)(iVar1 + 0x4f8)) {
    case 0:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f200;
      break;
    case 1:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f204;
      break;
    case 2:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f208;
      break;
    case 3:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f21c;
      break;
    case 4:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f200;
      break;
    case 5:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f204;
      break;
    case 6:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f208;
      break;
    case 7:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f210;
      break;
    case 8:
      *(undefined4 *)(iVar1 + 0x4fc) = 0x36f214;
    }
  }
  (**(code **)(**(int **)(iVar1 + 0x4fc) + 8))(*(int **)(iVar1 + 0x4fc),param_1);
  *(undefined4 *)(iVar1 + 0x4e0) = *(undefined4 *)(iVar1 + 0x4ec);
  *(undefined4 *)(iVar1 + 0x4e4) = *(undefined4 *)(iVar1 + 0x4f0);
  *(undefined4 *)(iVar1 + 0x4e8) = *(undefined4 *)(iVar1 + 0x4f4);
  Cam_SetYaw(*(undefined4 *)(iVar1 + 0x4e0),param_1);
  Cam_SetPitch(*(undefined4 *)(iVar1 + 0x4e4),param_1);
  uRam004311a0 = *(undefined4 *)(iVar1 + 0x4e8);
  *(undefined4 *)(iVar1 + 0x4e8) = uRam004311a0;
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
  int iVar3;
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
        iVar3 = RaceCar_Get(iVar6);
        if ((iVar3 != 0) && (iVar3 != *(int *)(param_1 + 0x7b0))) {
          uVar5 = PhysBody_GetWorldMatrix(*(undefined4 *)(iVar3 + 0x154));
          Vec3_Sub(auStack_10,uVar5,uVar4);
          Vec3_Sub(auStack_20,uVar5,uVar4);
          fVar7 = (float)Vec3_Dot(auStack_10,auStack_20);
          if (fVar7 < fVar2) {
            *(int *)(param_1 + 0x7b4) = iVar3;
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
  fVar5 = (float)maybe_Vu0_SqrtQ(uVar4);
  if (fVar2 / fVar3 < 0.0) {
    fVar5 = fVar5 * -1.0;
  }
  fVar2 = (float)sceVu0InnerProduct(auStack_40,auStack_20);
  fVar3 = (float)sceVu0InnerProduct(auStack_40,auStack_40);
  maybe_sceVu0ScaleVectorXYZ(fVar2 / fVar3,auStack_20,auStack_40);
  uVar4 = sceVu0InnerProduct(auStack_20,auStack_20);
  fVar6 = (float)maybe_Vu0_SqrtQ(uVar4);
  if (0.0 < fVar2 / fVar3) {
    fVar6 = fVar6 * -1.0;
  }
  return (fVar6 + 170.0) / (170.0 - fVar5);
}

