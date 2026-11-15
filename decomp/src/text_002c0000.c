// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002c0000 - 0x002c4000
#include "ghidra_types.h"

// 0x002c0160  size 0x16c
void Result_DrawLapTable(int param_1)

{
  int iVar1;
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 auStack_c0 [5];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = *(int *)(param_1 + 0x3f0);
  if (((long)*(int *)(param_1 + 0x3ec) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_40,(long)*(int *)(param_1 + 0x3ec));
    uStack_2c = 0;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_40,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3f8);
  if (((long)*(int *)(param_1 + 0x3f4) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x3f4));
    uStack_6c = 0;
    iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_80,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x400);
  if (((long)*(int *)(param_1 + 0x3fc) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_c0,(long)*(int *)(param_1 + 0x3fc));
    uStack_ac = 4;
    iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_c0,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x408);
  if (((long)*(int *)(param_1 + 0x404) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_100,(long)*(int *)(param_1 + 0x404));
    uStack_ec = 0;
    iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_100,iVar1);
  }
  return;
}

// 0x002c02d0  size 0x1b8
void Result_DrawRewardTable(int param_1)

{
  int iVar1;
  undefined4 auStack_140 [5];
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 auStack_c0 [5];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = *(int *)(param_1 + 0x3c8);
  if (((long)*(int *)(param_1 + 0x3c4) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_40,(long)*(int *)(param_1 + 0x3c4));
    uStack_2c = 0;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_40,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3d0);
  if (((long)*(int *)(param_1 + 0x3cc) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x3cc));
    uStack_6c = 0;
    iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_80,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3d8);
  if (((long)*(int *)(param_1 + 0x3d4) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_c0,(long)*(int *)(param_1 + 0x3d4));
    uStack_ac = 0;
    iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_c0,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3e0);
  if (((long)*(int *)(param_1 + 0x3dc) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_100,(long)*(int *)(param_1 + 0x3dc));
    uStack_ec = 0;
    iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_100,iVar1);
  }
  iVar1 = *(int *)(param_1 + 1000);
  if (((long)*(int *)(param_1 + 0x3e4) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_140,(long)*(int *)(param_1 + 0x3e4));
    uStack_12c = 0;
    iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_140,iVar1);
  }
  return;
}

// 0x002c0490  size 0x304
void Result_DrawMenu(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = param_1;
  do {
    if ((*(int *)(iVar3 + 4) == 0) && (*(int *)(iVar3 + 8) != -1)) {
      iVar2 = UiMgr_FindLayout();
      *(UiLayout **)(iVar3 + 4) = &g_UiMgr->slots[iVar2].layout;
      Result_UpdateRow(param_1,uVar4 & 0xff);
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x24;
  } while (uVar4 < 4);
  Result_DrawRewardTable(param_1);
  Result_DrawLapTable(param_1);
  UiLayout_UpdateAnim(*(UiLayout **)(param_1 + 0x70),*(int *)(param_1 + 0x80));
  UiLayout_UpdateAnim(*(UiLayout **)(param_1 + 4),*(int *)(param_1 + 0x14));
  UiLayout_Draw(*(float *)(param_1 + 0x94),*(UiLayout **)(param_1 + 0x70));
  UiLayout_Draw(*(float *)(param_1 + 0x94),*(UiLayout **)(param_1 + 4));
  UiLayout_Draw(*(float *)(param_1 + 0x94),*(UiLayout **)(param_1 + 0x4c));
  if (*(int *)(param_1 + 800) == 0) {
    Result_Draw_TestCourse_fcc0(param_1);
    Result_DrawRankingTable(param_1);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x48);
    if (cVar1 == '\x05') {
      if ((&(*(UiLayout **)(param_1 + 0x28))->unk_318)[*(int *)(param_1 + 0x34) * 5] == 0) {
        *(undefined1 *)(param_1 + 0x48) = 6;
        iVar3 = *(int *)(param_1 + 0x30) * 0x14 + *(int *)(param_1 + 0x28);
        *(undefined4 *)(iVar3 + 0x30c) = 0;
        if (*(int *)(iVar3 + 0x31c) == 0) {
          *(undefined4 *)(iVar3 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x318) = 1;
        }
        iVar3 = *(int *)(param_1 + 0x34) * 0x14 + *(int *)(param_1 + 0x28);
        *(undefined4 *)(iVar3 + 0x30c) = 0;
        if (*(int *)(iVar3 + 0x31c) == 0) {
          *(undefined4 *)(iVar3 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x318) = 1;
        }
        *(undefined4 *)(param_1 + 800) = 0;
        Menu_ClearSlot(0);
      }
      else {
        UiLayout_UpdateAnim(*(UiLayout **)(param_1 + 0x28),*(int *)(param_1 + 0x34));
      }
    }
    else if (cVar1 == '\x04') {
      if ((&(*(UiLayout **)(param_1 + 0x28))->unk_318)[*(int *)(param_1 + 0x34) * 5] == 0) {
        *(undefined1 *)(param_1 + 0x48) = 6;
      }
      else {
        UiLayout_UpdateAnim(*(UiLayout **)(param_1 + 0x28),*(int *)(param_1 + 0x34));
      }
    }
    else if (cVar1 == '\x03') {
      MenuWnd_SetItemState
                (*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)
                  ((&PTR_DAT_0032f1c0)[(char)(&DAT_0032f535)[(uint)g_RaceHudShared1 * 6] * 2] +
                  *(int *)(param_1 + 0x324) * 0x14 + 8),1,0);
    }
    else if (cVar1 == '\x02') {
      if ((&(*(UiLayout **)(param_1 + 0x28))->unk_318)[*(int *)(param_1 + 0x30) * 5] == 0) {
        *(char *)(param_1 + 0x48) = *(char *)(param_1 + 0x48) + '\x01';
      }
      else {
        UiLayout_UpdateAnim(*(UiLayout **)(param_1 + 0x28),*(int *)(param_1 + 0x30));
      }
    }
    Result_DrawRaceInfo(param_1);
    UiLayout_Draw(*(float *)(param_1 + 0x94),*(UiLayout **)(param_1 + 0x28));
  }
  return;
}

// 0x002c07a0  size 0x18c
void Result_Finish(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  
  puVar5 = (undefined1 *)param_1;
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 0x94) = 0;
  Result_UpdateRow(param_1,0);
  Result_UpdateRow(param_1,1);
  if ((byte)puVar5[0x340] < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(puVar5[0x340]) {
    case 0:
      break;
    case 1:
      RaceHud_ResetSlots();
      *(undefined4 *)(puVar5 + 0x324) = 0;
      *(undefined4 *)(puVar5 + 800) = 0;
      cVar1 = RaceCtx_GetMode();
      if (cVar1 == '\x05') {
        RaceScene_SetFlags(8);
        puVar5[0x340] = 0;
        return;
      }
      RaceScene_SetFlags(4);
      break;
    case 2:
      *puVar5 = 1;
      RaceScene_SetFlags(0x80000);
      RaceScene_SetFlags(0x10);
      break;
    default:
      Result_BuildRaceEntry(param_1);
      *puVar5 = 4;
      break;
    case 5:
      SaveMgr_FreeAll();
      if ((*(int *)(puVar5 + 800) != 0) && (puVar5[0x48] == '\0')) {
        puVar5[0x48] = 2;
      }
      *puVar5 = 8;
      break;
    case 6:
      RaceHud_ResetSlots();
      iVar6 = 0;
      lVar3 = GameState_GetTotalCarCount();
      if (0 < lVar3) {
        do {
          uVar4 = RaceHud_GetRacerPanel(iVar6);
          RaceUi_SetupCarIcons(uVar4,iVar6);
          iVar6 = iVar6 + 1;
          iVar2 = GameState_GetTotalCarCount();
        } while (iVar6 < iVar2);
      }
      *(undefined4 *)(puVar5 + 800) = 0;
      RaceScene_SetFlags(0x80000);
      RaceScene_SetFlags(2);
    }
  }
  puVar5[0x340] = 0;
  return;
}

// 0x002c0930  size 0xe4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Result_FadeOut(void)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_50 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_28 = 0x44;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  if (_s_Result_FadeOut_1 < 1) {
    Gfx_SetFade(2,9,0,0);
    uVar1 = 1;
    _s_Result_FadeOut_1 = 0x3c;
  }
  else {
    iVar2 = ((0x3c - _s_Result_FadeOut_1) * 0x80) / 0x3c;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x80 < iVar2) {
      iVar2 = 0x80;
    }
    aiStack_50[0] = (0x80 - iVar2) * 0x1000000;
    Gfx_SetFade(2,9,1,aiStack_50);
    uVar1 = 0;
    _s_Result_FadeOut_1 = _s_Result_FadeOut_1 + -1;
  }
  return uVar1;
}

// 0x002c0a20  size 0xf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Result_FadeOutAndFinish(undefined8 param_1)

{
  undefined4 uVar1;
  int aiStack_50 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_28 = 0x44;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  if (_s_Result_FadeOutAndFinish_1 < 1) {
    Gfx_SetFade(2,9,0,0);
    _s_Result_FadeOutAndFinish_1 = 0x3c;
    Result_Finish(param_1);
    uVar1 = 1;
  }
  else {
    aiStack_50[0] = ((0x3c - _s_Result_FadeOutAndFinish_1) * 0x80) / 0x3c;
    if (aiStack_50[0] < 0) {
      aiStack_50[0] = 0;
    }
    else if (0x80 < aiStack_50[0]) {
      aiStack_50[0] = 0x80;
    }
    aiStack_50[0] = aiStack_50[0] << 0x18;
    Gfx_SetFade(2,9,1,aiStack_50);
    uVar1 = 0;
    _s_Result_FadeOutAndFinish_1 = _s_Result_FadeOutAndFinish_1 + -1;
  }
  return uVar1;
}

// 0x002c0b10  size 0x3e8
void Result_Init(undefined8 param_1)

{
  byte bVar1;
  RaceEntrySetup *pRVar2;
  int iVar3;
  RacerState *pRVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)param_1;
  if ((*(int *)(pbVar8 + 0x98) == 0) && (uVar5 = GameState_Get_35c(), uVar5 != 0)) {
    *(uint *)(pbVar8 + 0x328) = (uint)((uVar5 & 1) != 0);
    *(uint *)(pbVar8 + 0x32c) = (uint)((uVar5 & 4) != 0);
    *(uint *)(pbVar8 + 0x318) = (uint)((uVar5 & 0x400) != 0);
    Result_BuildCareerRecords(param_1);
    pRVar2 = GameState_Elem_f0_xcc(0);
    if (pRVar2->maybe_state == '\x01') {
      pbVar8[0x3f0] = 0x4e;
      pbVar8[0x3f1] = 0;
      pbVar8[0x3f2] = 0;
      pbVar8[0x3f3] = 0;
    }
    else if (pRVar2->maybe_state == '\0') {
      pbVar8[0x3f0] = 0x4d;
      pbVar8[0x3f1] = 0;
      pbVar8[0x3f2] = 0;
      pbVar8[0x3f3] = 0;
    }
    pRVar2 = GameState_Elem_f0_xcc(0);
    if ((short)pRVar2->maybe_counter == 0x112) {
      iVar3 = 0x295;
    }
    else {
      iVar3 = maybe_GameState_GetFlag();
      iVar3 = *(char *)(iVar3 + 0x40c) + 0x296;
    }
    *(int *)(pbVar8 + 0x3f8) = iVar3;
    pRVar2 = GameState_Elem_f0_xcc(0);
    pRVar4 = GameState_Elem_3e0_x540((int)(char)pRVar2->unk_09);
    *(uint *)(pbVar8 + 0x400) = pRVar4->unk_00 + 0x1b3;
    pRVar2 = GameState_Elem_f0_xcc(0);
    pRVar4 = GameState_Elem_3e0_x540((int)(char)pRVar2->unk_09);
    *(uint *)(pbVar8 + 0x408) = pRVar4->unk_00 + 0xd1;
    Result_BuildTimeAttackRecords(param_1,0);
    uVar5 = RaceProg_Get_4();
    if ((uVar5 & 2) != 0) {
      Result_BuildBattleRecords(param_1,0);
    }
    uVar5 = RaceProg_Get_4();
    if (((uVar5 & 0x19) != 0) && (*(int *)(pbVar8 + 0x318) == 0)) {
      uVar6 = RaceProg_GetArray_40(0);
      LapTime_FormatBest(uVar6,pbVar8 + 0x1d8,pbVar8 + 0x1dc,pbVar8 + 0x1e0);
    }
    Result_GetPageLayout(param_1);
    pbVar8[0x98] = 1;
    pbVar8[0x99] = 0;
    pbVar8[0x9a] = 0;
    pbVar8[0x9b] = 0;
    pbVar8[0x9c] = 0;
    pbVar8[0x9d] = 0;
    pbVar8[0x9e] = 0;
    pbVar8[0x9f] = 0;
  }
  bVar1 = *pbVar8;
  if (bVar1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 1:
      if ((bVar1 == 1) || (bVar1 == 8)) {
        pbVar8[0x94] = 0;
        pbVar8[0x95] = 0;
        pbVar8[0x96] = 0x80;
        pbVar8[0x97] = 0x3f;
        lVar7 = RaceScene_IsReplay();
        if (lVar7 == 0) {
          RaceScene_SetFlags(0x40000);
          GameState_FreeReplay();
          RaceScene_ClearFlag800();
        }
      }
      Result_DrawMenu(param_1);
      Result_UpdateCursor(param_1);
      break;
    case 3:
      lVar7 = maybe_NameEntry_StepSave(pbVar8 + 0x40c);
      if (lVar7 != 1) {
        *pbVar8 = 5;
        pbVar8[0x340] = 5;
      }
      Save_IsBusy();
      maybe_NameEntry_Update(pbVar8 + 0x40c);
      break;
    case 4:
      lVar7 = Result_FadeOut(param_1);
      if (lVar7 != 0) {
        *pbVar8 = 3;
      }
      maybe_NameEntry_Update(pbVar8 + 0x40c);
      break;
    case 5:
      lVar7 = Result_FadeOutAndFinish(param_1);
      if (lVar7 != 0) {
        return;
      }
      maybe_NameEntry_Update(pbVar8 + 0x40c);
      break;
    case 6:
      if ((bVar1 == 1) || (bVar1 == 8)) {
        pbVar8[0x94] = 0;
        pbVar8[0x95] = 0;
        pbVar8[0x96] = 0x80;
        pbVar8[0x97] = 0x3f;
        lVar7 = RaceScene_IsReplay();
        if (lVar7 == 0) {
          RaceScene_SetFlags(0x40000);
          GameState_FreeReplay();
          RaceScene_ClearFlag800();
        }
      }
      Result_DrawMenu(param_1);
      Result_UpdateCursor(param_1);
      break;
    case 7:
      if ((bVar1 == 1) || (bVar1 == 8)) {
        pbVar8[0x94] = 0;
        pbVar8[0x95] = 0;
        pbVar8[0x96] = 0x80;
        pbVar8[0x97] = 0x3f;
        lVar7 = RaceScene_IsReplay();
        if (lVar7 == 0) {
          RaceScene_SetFlags(0x40000);
          GameState_FreeReplay();
          RaceScene_ClearFlag800();
        }
      }
      Result_FadeOutAndFinish(param_1);
      Result_DrawMenu(param_1);
      break;
    case 8:
      lVar7 = Result_FadeOut(param_1);
      if (lVar7 != 0) {
        *pbVar8 = 1;
      }
      if ((*pbVar8 == 1) || (*pbVar8 == 8)) {
        pbVar8[0x94] = 0;
        pbVar8[0x95] = 0;
        pbVar8[0x96] = 0x80;
        pbVar8[0x97] = 0x3f;
        lVar7 = RaceScene_IsReplay();
        if (lVar7 == 0) {
          RaceScene_SetFlags(0x40000);
          GameState_FreeReplay();
          RaceScene_ClearFlag800();
        }
      }
      Result_DrawMenu(param_1);
      Result_UpdateCursor(param_1);
    }
  }
  return;
}

// 0x002c0f00  size 0x394
void Result_BuildTimeAttackRecords(int param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  iVar3 = GameState_Ptr_354();
  cVar1 = (&DAT_0032f535)[(uint)g_RaceHudShared1 * 6];
  if (cVar1 == '\0') {
    Time_SplitHms(1,*(undefined4 *)(iVar3 + 0x68),param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c);
  }
  else if (cVar1 == '\x01') {
    Time_SplitHms(1,*(undefined4 *)(iVar3 + 0x10),param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c);
  }
  else {
    if (cVar1 == '\x02') {
      Time_SplitHms(1,*(undefined4 *)(iVar3 + 0x10),param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c)
      ;
      iVar3 = *(int *)(param_1 + 0x318);
      goto LAB_002c0fa8;
    }
    Time_SplitHms(1,0,param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c);
  }
  iVar3 = *(int *)(param_1 + 0x318);
LAB_002c0fa8:
  if (iVar3 == 0) {
    uVar5 = RaceProg_GetArray_40(param_2);
    bVar2 = false;
    uVar6 = LapTime_GetBest(uVar5);
    Time_SplitHms(1,uVar6,param_1 + 0x1e4,param_1 + 0x1e8,param_1 + 0x1ec);
    uVar4 = LapTime_GetBest(uVar5);
    *(undefined4 *)(param_1 + 0x1d4) = uVar4;
    if (*(int *)(param_1 + 0x9c) == 0) {
      lVar8 = LapTime_Compare(param_1 + 0x268,param_1 + 0x1e4,param_1 + 0xcc);
      if (lVar8 < 0) {
        bVar2 = true;
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x1e4);
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1e8);
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x1ec);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined4 *)(param_1 + 0x26c) = 0;
      *(undefined4 *)(param_1 + 0x270) = 0;
      *(undefined4 *)(param_1 + 0x274) = 0;
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x1e4);
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x1ec);
    }
    uVar10 = 0;
    iVar3 = param_1;
    iVar9 = param_1;
    do {
      if (uVar10 == 0) {
        LapTime_FormatLap(uVar5,0,iVar3 + 0x1f0,iVar3 + 500,iVar3 + 0x1f8);
        if (*(int *)(param_1 + 0x9c) == 0) {
          lVar8 = LapTime_Compare(iVar9 + 0x278,iVar3 + 0x1f0,iVar3 + 0xd8);
          if (lVar8 < 0) {
            *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0x1f0);
            *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 500);
            *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0x1f8);
          }
        }
        else {
          *(undefined4 *)(iVar9 + 0x278) = 0;
          *(undefined4 *)(iVar9 + 0x27c) = 0;
          *(undefined4 *)(iVar9 + 0x280) = 0;
          *(undefined4 *)(iVar9 + 0x284) = 0;
          *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0x1f0);
          *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 500);
          *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0x1f8);
        }
      }
      else {
        lVar8 = LapTime_GetLap(uVar5,uVar10);
        lVar7 = LapTime_GetLap(uVar5,uVar10 - 1);
        if (lVar7 < lVar8) {
          uVar6 = LapTime_GetLap(uVar5,uVar10 - 1);
          Time_SplitHms(1,uVar6,auStack_10,auStack_c,auStack_8);
          uVar6 = LapTime_GetLap(uVar5,uVar10);
          Time_SplitHms(1,uVar6,auStack_20,auStack_1c,auStack_18);
          LapTime_FormatTotal(uVar5,uVar10,iVar3 + 0x1f0,iVar3 + 500,iVar3 + 0x1f8);
          if (*(int *)(param_1 + 0x9c) == 0) {
            LapTime_Compare(iVar9 + 0x278,iVar3 + 0x1f0,iVar3 + 0xd8);
            if (bVar2) {
              *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0x1f0);
              *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 500);
              *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0x1f8);
            }
          }
          else {
            *(undefined4 *)(iVar9 + 0x278) = 0;
            *(undefined4 *)(iVar9 + 0x27c) = 0;
            *(undefined4 *)(iVar9 + 0x280) = 0;
            *(undefined4 *)(iVar9 + 0x284) = 0;
            *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0x1f0);
            *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 500);
            *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0x1f8);
          }
        }
        else {
          *(undefined4 *)(iVar3 + 0x1f0) = 0;
          *(undefined4 *)(iVar3 + 500) = 0;
          *(undefined4 *)(iVar3 + 0x1f8) = 0;
          *(undefined4 *)(iVar9 + 0x278) = 0;
          *(undefined4 *)(iVar9 + 0x27c) = 0;
          *(undefined4 *)(iVar9 + 0x280) = 0;
          *(undefined4 *)(iVar9 + 0x284) = 0;
        }
      }
      uVar10 = uVar10 + 1;
      iVar3 = iVar3 + 0xc;
      iVar9 = iVar9 + 0x10;
    } while (uVar10 < 10);
  }
  return;
}

// 0x002c12a0  size 0x1a8
void Result_BuildBattleRecords(int param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar3 = GameState_Ptr_354();
  cVar1 = (&DAT_0032f535)[(uint)g_RaceHudShared1 * 6];
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar3 + 0x60);
  }
  else if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar3 + 0x3c);
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar3 + 0x3c);
  }
  else {
    *(undefined4 *)(param_1 + 0x330) = 0;
  }
  if (*(int *)(param_1 + 0x318) == 0) {
    uVar6 = RaceProg_GetArray_34(param_2);
    bVar2 = false;
    iVar3 = SpGauge_GetMax(uVar6);
    iVar4 = SpGauge_GetDrain(uVar6);
    *(int *)(param_1 + 0x150) = iVar3 - iVar4;
    iVar3 = SpGauge_GetDrain(uVar6);
    *(int *)(param_1 + 0x1a4) = -iVar3;
    if (*(int *)(param_1 + 0x9c) == 0) {
      iVar3 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0xa0);
      *(int *)(param_1 + 0x1a8) = iVar3;
      if (0 < iVar3) {
        bVar2 = true;
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x150);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x150);
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x150);
    }
    iVar4 = 0;
    iVar3 = param_1;
    do {
      uVar5 = maybe_RaceProg_CountD(uVar6,iVar4);
      *(undefined4 *)(iVar3 + 0x154) = uVar5;
      uVar5 = maybe_RaceProg_CountC(uVar6,iVar4);
      *(undefined4 *)(iVar3 + 0x17c) = uVar5;
      if (*(int *)(param_1 + 0x9c) == 0) {
        *(int *)(iVar3 + 0x1ac) = *(int *)(iVar3 + 0x154) - *(int *)(iVar3 + 0xa4);
        if (bVar2) {
          *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x154);
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0x1ac) = *(undefined4 *)(iVar3 + 0x154);
        *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x154);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 9);
  }
  return;
}

// 0x002c1450  size 0x24c
void Result_BuildCareerRecords(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  
  cVar1 = RaceCtx_Get_8();
  if (cVar1 == '\x06') {
    bVar2 = GameState_Get_0();
    cVar1 = GameState_Get_1();
    bVar3 = GameState_Get_2();
    cVar4 = GameState_Get_3();
  }
  else {
    bVar2 = Race_GetCourseVariant();
    cVar1 = Race_GetDirection();
    bVar3 = Race_GetCourseId(10);
    cVar4 = Race_GetWeather();
  }
  if (bVar2 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar2) {
    case 0:
      *(undefined4 *)(param_1 + 0x3d0) = 0x51;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x3d0) = 0x50;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x3d0) = 0x53;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x3d0) = 0x52;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x3d0) = 0x54;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x3d0) = 0x4f;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x3d0) = 0x56;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x3d0) = 0x55;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x3d0) = 0x4f;
    }
  }
  uVar5 = 0x3c;
  if (cVar1 != '\0') {
    uVar5 = 0x3b;
  }
  *(undefined4 *)(param_1 + 0x3d8) = uVar5;
  if (bVar3 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar3) {
    case 0:
      *(undefined4 *)(param_1 + 0x3e0) = 0x47;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x3e0) = 0x49;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x3e0) = 0x4b;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x3e0) = 0x48;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x3e0) = 0x4a;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x3e0) = 0x4c;
    }
  }
  uVar5 = 0x3d;
  if (cVar4 != '\0') {
    uVar5 = 0x3e;
  }
  *(undefined4 *)(param_1 + 1000) = uVar5;
  bVar3 = GameState_Get_354_7050();
  if (bVar3 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar3) {
    case 0:
      *(undefined4 *)(param_1 + 0x3c8) = 0x42;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x3c8) = 0x3f;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x3c8) = 0x40;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x3c8) = 0x41;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x3c8) = 0x43;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x3c8) = 0x44;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x3c8) = 0x45;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x3c8) = 0x46;
    }
  }
  return;
}

// 0x002c16a0  size 0x114
void Result_GetPageLayout(int param_1)

{
  if (g_RaceHudShared1 < 0x18) {
                    /* WARNING: Switch is manually overridden */
    switch(g_RaceHudShared1) {
    case 0:
    case 7:
    case 0xc:
      *(undefined4 *)(param_1 + 0x350) = 0x34;
      *(undefined4 *)(param_1 + 0x360) = 0x32;
      break;
    default:
      *(undefined4 *)(param_1 + 0x350) = 0x35;
      *(undefined4 *)(param_1 + 0x360) = 0x31;
      break;
    case 2:
    case 9:
    case 0xe:
      *(undefined4 *)(param_1 + 0x350) = 0x34;
      *(undefined4 *)(param_1 + 0x360) = 0x32;
      *(undefined4 *)(param_1 + 0x370) = 0x35;
      *(undefined4 *)(param_1 + 0x380) = 0x31;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x350) = 0x36;
      *(undefined4 *)(param_1 + 0x360) = 0x32;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x350) = 0x37;
      *(undefined4 *)(param_1 + 0x360) = 0x31;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x350) = 0x36;
      *(undefined4 *)(param_1 + 0x360) = 0x32;
      *(undefined4 *)(param_1 + 0x370) = 0x37;
      *(undefined4 *)(param_1 + 0x380) = 0x31;
      break;
    case 6:
    case 10:
    case 0xb:
    case 0xf:
      *(undefined4 *)(param_1 + 0x360) = 0x3a;
      break;
    case 0x11:
      break;
    case 0x12:
      *(undefined4 *)(param_1 + 0x360) = 0x32;
      *(undefined4 *)(param_1 + 0x3b8) = 0xe;
      *(undefined4 *)(param_1 + 0x3c0) = 0xf;
      *(undefined4 *)(param_1 + 0x390) = 0x33;
      break;
    case 0x13:
      *(undefined4 *)(param_1 + 0x360) = 0x31;
      *(undefined4 *)(param_1 + 0x3b8) = 0xe;
      *(undefined4 *)(param_1 + 0x3c0) = 0xf;
    }
  }
  return;
}

// 0x002c17c0  size 0x42c
void Result_SetupLayout(int param_1)

{
  *(undefined4 *)(param_1 + 0x344) = 0x1b;
  if ((byte)(&DAT_0032f532)[(uint)g_RaceHudShared1 * 6] < 0xb) {
                    /* WARNING: Switch is manually overridden */
    switch((&DAT_0032f532)[(uint)g_RaceHudShared1 * 6]) {
    case 0:
      *(undefined4 *)(param_1 + 0x3c4) = 0x20;
      *(undefined4 *)(param_1 + 0x3cc) = 0x21;
      *(undefined4 *)(param_1 + 0x3d4) = 0x1f;
      *(undefined4 *)(param_1 + 0x3dc) = 0x22;
      *(undefined4 *)(param_1 + 0x3e4) = 0x23;
      *(undefined4 *)(param_1 + 0x35c) = 0x24;
      *(undefined4 *)(param_1 + 0x364) = 0x25;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x3c4) = 0x26;
      *(undefined4 *)(param_1 + 0x3cc) = 0x27;
      *(undefined4 *)(param_1 + 0x3d4) = 0x25;
      *(undefined4 *)(param_1 + 0x3dc) = 0x28;
      *(undefined4 *)(param_1 + 0x3e4) = 0x29;
      *(undefined4 *)(param_1 + 0x34c) = 0x2a;
      *(undefined4 *)(param_1 + 0x354) = 0x2b;
      *(undefined4 *)(param_1 + 0x35c) = 0x2c;
      *(undefined4 *)(param_1 + 0x364) = 0x2d;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x3c4) = 0x27;
      *(undefined4 *)(param_1 + 0x3cc) = 0x28;
      *(undefined4 *)(param_1 + 0x3d4) = 0x26;
      *(undefined4 *)(param_1 + 0x3dc) = 0x29;
      *(undefined4 *)(param_1 + 0x3e4) = 0x2a;
      *(undefined4 *)(param_1 + 0x34c) = 0x2b;
      *(undefined4 *)(param_1 + 0x354) = 0x2c;
      *(undefined4 *)(param_1 + 0x35c) = 0x2d;
      *(undefined4 *)(param_1 + 0x364) = 0x2e;
      *(undefined4 *)(param_1 + 0x36c) = 0x2f;
      *(undefined4 *)(param_1 + 0x374) = 0x30;
      *(undefined4 *)(param_1 + 0x37c) = 0x31;
      *(undefined4 *)(param_1 + 900) = 0x32;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x3c4) = 0x27;
      *(undefined4 *)(param_1 + 0x3cc) = 0x28;
      *(undefined4 *)(param_1 + 0x3d4) = 0x26;
      *(undefined4 *)(param_1 + 0x3dc) = 0x29;
      *(undefined4 *)(param_1 + 0x3e4) = 0x2a;
      *(undefined4 *)(param_1 + 0x34c) = 0x2b;
      *(undefined4 *)(param_1 + 0x354) = 0x2c;
      *(undefined4 *)(param_1 + 0x35c) = 0x2d;
      *(undefined4 *)(param_1 + 0x364) = 0x2e;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x3c4) = 0x28;
      *(undefined4 *)(param_1 + 0x3cc) = 0x29;
      *(undefined4 *)(param_1 + 0x3d4) = 0x27;
      *(undefined4 *)(param_1 + 0x3dc) = 0x2a;
      *(undefined4 *)(param_1 + 0x3e4) = 0x2b;
      *(undefined4 *)(param_1 + 0x34c) = 0x2c;
      *(undefined4 *)(param_1 + 0x354) = 0x2d;
      *(undefined4 *)(param_1 + 0x35c) = 0x2e;
      *(undefined4 *)(param_1 + 0x364) = 0x2f;
      *(undefined4 *)(param_1 + 0x36c) = 0x30;
      *(undefined4 *)(param_1 + 0x374) = 0x31;
      *(undefined4 *)(param_1 + 0x37c) = 0x32;
      *(undefined4 *)(param_1 + 900) = 0x33;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x3cc) = 0x2c;
      *(undefined4 *)(param_1 + 0x3d4) = 0x2b;
      *(undefined4 *)(param_1 + 0x3dc) = 0x2d;
      *(undefined4 *)(param_1 + 0x3e4) = 0x2e;
      *(undefined4 *)(param_1 + 0x3ec) = 0x41;
      *(undefined4 *)(param_1 + 0x3f4) = 0x42;
      *(undefined4 *)(param_1 + 0x3fc) = 0x44;
      *(undefined4 *)(param_1 + 0x404) = 0x43;
      *(undefined4 *)(param_1 + 0x35c) = 0x45;
      *(undefined4 *)(param_1 + 0x364) = 0x47;
      *(undefined4 *)(param_1 + 900) = 0x46;
      *(undefined4 *)(param_1 + 0x3a4) = 0x38;
      *(undefined4 *)(param_1 + 0x3ac) = 0x2f;
      *(undefined4 *)(param_1 + 0x3b4) = 0x25;
      *(undefined4 *)(param_1 + 0x3bc) = 0x26;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x3c4) = 0x1b;
      *(undefined4 *)(param_1 + 0x3cc) = 0x1c;
      *(undefined4 *)(param_1 + 0x3d4) = 0x1a;
      *(undefined4 *)(param_1 + 0x3dc) = 0x1d;
      *(undefined4 *)(param_1 + 0x3e4) = 0x1e;
      *(undefined4 *)(param_1 + 0x34c) = 0x1f;
      *(undefined4 *)(param_1 + 0x354) = 0x20;
      *(undefined4 *)(param_1 + 0x35c) = 0x21;
      *(undefined4 *)(param_1 + 0x364) = 0x22;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x3c4) = 0x1c;
      *(undefined4 *)(param_1 + 0x3cc) = 0x1d;
      *(undefined4 *)(param_1 + 0x3d4) = 0x1b;
      *(undefined4 *)(param_1 + 0x3dc) = 0x1e;
      *(undefined4 *)(param_1 + 0x3e4) = 0x1f;
      *(undefined4 *)(param_1 + 0x34c) = 0x20;
      *(undefined4 *)(param_1 + 0x354) = 0x21;
      *(undefined4 *)(param_1 + 0x35c) = 0x22;
      *(undefined4 *)(param_1 + 0x364) = 0x23;
      *(undefined4 *)(param_1 + 0x36c) = 0x24;
      *(undefined4 *)(param_1 + 0x374) = 0x25;
      *(undefined4 *)(param_1 + 0x37c) = 0x26;
      *(undefined4 *)(param_1 + 900) = 0x27;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x3c4) = 0x2a;
      *(undefined4 *)(param_1 + 0x3cc) = 0x2b;
      *(undefined4 *)(param_1 + 0x3d4) = 0x29;
      *(undefined4 *)(param_1 + 0x3dc) = 0x2c;
      *(undefined4 *)(param_1 + 0x3e4) = 0x2d;
      *(undefined4 *)(param_1 + 0x39c) = 0x37;
      *(undefined4 *)(param_1 + 0x3a4) = 0x40;
      *(undefined4 *)(param_1 + 0x3ac) = 0x2e;
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x3c4) = 0x1b;
      *(undefined4 *)(param_1 + 0x3cc) = 0x1c;
      *(undefined4 *)(param_1 + 0x3d4) = 0x1a;
      *(undefined4 *)(param_1 + 0x3dc) = 0x1d;
      *(undefined4 *)(param_1 + 0x3e4) = 0x1e;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x3cc) = 0x2c;
      *(undefined4 *)(param_1 + 0x3d4) = 0x2b;
      *(undefined4 *)(param_1 + 0x3dc) = 0x2d;
      *(undefined4 *)(param_1 + 0x3e4) = 0x2e;
      *(undefined4 *)(param_1 + 0x3ec) = 0x4a;
      *(undefined4 *)(param_1 + 0x3f4) = 0x4b;
      *(undefined4 *)(param_1 + 0x3fc) = 0x4d;
      *(undefined4 *)(param_1 + 0x404) = 0x4c;
      *(undefined4 *)(param_1 + 0x35c) = 0x4e;
      *(undefined4 *)(param_1 + 0x364) = 0x50;
      *(undefined4 *)(param_1 + 900) = 0x4f;
      *(undefined4 *)(param_1 + 0x39c) = 0x38;
      *(undefined4 *)(param_1 + 0x3a4) = 0x41;
      *(undefined4 *)(param_1 + 0x3ac) = 0x2f;
      *(undefined4 *)(param_1 + 0x3b4) = 0x25;
      *(undefined4 *)(param_1 + 0x3bc) = 0x26;
      *(undefined4 *)(param_1 + 0x38c) = 0x51;
      *(undefined4 *)(param_1 + 0x394) = 0x52;
    }
  }
  return;
}

// 0x002c1bf0  size 0x50
void Result_LoadPageA(void)

{
  Result_LoadLayouts();
  return;
}

// 0x002c1c40  size 0x4c
void Result_LoadPageB(void)

{
  Result_LoadLayouts();
  return;
}

// 0x002c1c90  size 0x21c
void Result_LoadLayouts(int param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
                       int param_9,int param_10)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  param_1 = param_1 + (param_2 & 0xff) * 0x24;
  iVar3 = (param_2 & 0xff) * 0xc;
  uStack_10 = *param_4;
  uStack_c = param_4[1];
  uStack_8 = param_4[2];
  *(undefined4 *)(&DAT_0032efa0 + iVar3) = uStack_10;
  *(undefined4 *)(&DAT_0032efa4 + iVar3) = uStack_c;
  *(undefined4 *)(&DAT_0032efa8 + iVar3) = uStack_8;
  *(int *)(param_1 + 8) = (int)param_3;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_6;
  *(undefined4 *)(param_1 + 0x14) = param_7;
  UiMgr_LoadLayout(param_3,&uStack_10,0);
  if (-1 < param_8) {
    uVar2 = g_ArcToc->entries[(int)param_8].unpackedSize;
    if (uVar2 == 0) {
      uVar2 = g_ArcToc->entries[(int)param_8].sectorCount;
    }
    else {
      uVar2 = uVar2 + 0x7ff >> 0xb;
    }
    uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    Arc_LoadFileEx(param_8,*(undefined4 *)(param_1 + 0x18),0,0,0,0);
  }
  if (-1 < param_9) {
    uVar2 = g_ArcToc->entries[param_9].unpackedSize;
    if (uVar2 == 0) {
      uVar2 = g_ArcToc->entries[param_9].sectorCount;
    }
    else {
      uVar2 = uVar2 + 0x7ff >> 0xb;
    }
    uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    Arc_LoadFileEx(param_9,*(undefined4 *)(param_1 + 0x1c),0,0,0,0);
  }
  if (-1 < param_10) {
    uVar2 = g_ArcToc->entries[param_10].unpackedSize;
    if (uVar2 == 0) {
      uVar2 = g_ArcToc->entries[param_10].sectorCount;
    }
    else {
      uVar2 = uVar2 + 0x7ff >> 0xb;
    }
    uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    Arc_LoadFileEx(param_10,*(undefined4 *)(param_1 + 0x20),0,0,0,0);
  }
  return;
}

// 0x002c1eb0  size 0x294
void Result_CheckNewRecord(int param_1,int param_2)

{
  char cVar1;
  RaceEntrySetup *pRVar2;
  RaceRecordB *pRVar3;
  uint b;
  uint c;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_20;
  int iStack_1c;
  int aiStack_18 [2];
  int iStack_10;
  int iStack_c;
  int aiStack_8 [2];
  
  pRVar2 = GameState_Elem_f0_xcc(param_2);
  pRVar3 = (RaceRecordB *)RaceTbl_Ptr_5fa0();
  b = Race_GetDirection();
  c = Race_GetCourseVariant();
  pRVar3 = RaceTbl_GetCourseEntryB(pRVar3,(int)(char)pRVar2->maybe_state,b,c);
  if (((&DAT_0032f535)[(uint)g_RaceHudShared1 * 6] == '\x05') &&
     (cVar1 = GameState_Get_354_7050(), cVar1 == '\x02')) {
    Time_SplitHms(1,*(undefined4 *)&pRVar3->field_0xc,param_1 + 0xcc,param_1 + 0xd0,param_1 + 0xd4);
    iVar6 = 0;
    do {
      if (iVar6 == 0) {
        Time_SplitHms(1,*(undefined4 *)&pRVar3->field_0x140,param_1 + 0xd8,param_1 + 0xdc,
                      param_1 + 0xe0);
      }
      else if (*(int *)&pRVar3->field_0x13c < *(int *)&pRVar3->field_0x140) {
        Time_SplitHms(1,*(int *)&pRVar3->field_0x13c,&iStack_10,&iStack_c,aiStack_8);
        Time_SplitHms(1,*(undefined4 *)&pRVar3->field_0x140,&iStack_20,&iStack_1c,aiStack_18);
        iVar4 = aiStack_8[0] + iStack_c * 1000 + iStack_10 * 60000;
        iVar5 = aiStack_18[0] + iStack_1c * 1000 + iStack_20 * 60000;
        if (iVar4 < iVar5) {
          iVar5 = iVar5 - iVar4;
        }
        else if (iVar5 < iVar4) {
          iVar5 = iVar4 - iVar5;
        }
        else {
          iVar5 = 0;
        }
        *(int *)(param_1 + 0xd8) = iVar5 / 60000;
        *(int *)(param_1 + 0xdc) = (iVar5 / 1000) % 0x3c;
        *(int *)(param_1 + 0xe0) = iVar5 % 1000;
      }
      else {
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 0xc;
      pRVar3 = (RaceRecordB *)&pRVar3->field_0x4;
    } while (iVar6 < 10);
  }
  return;
}

// 0x002c2150  size 0x150
void Result_StoreRecord(int param_1,int param_2)

{
  char cVar1;
  RaceEntrySetup *pRVar2;
  int iVar3;
  RaceTbl *tbl;
  uint b;
  uint c;
  RaceRecordA *pRVar4;
  int iVar5;
  int iVar6;
  
  pRVar2 = GameState_Elem_f0_xcc(param_2);
  iVar3 = RaceProg_GetArray_34((char)param_2);
  tbl = (RaceTbl *)maybe_RaceTbl_GetCount();
  b = Race_GetDirection();
  c = Race_GetCourseVariant();
  pRVar4 = RaceTbl_GetCourseEntry(tbl,(int)(char)pRVar2->maybe_state,b,c);
  if (((&DAT_0032f535)[(uint)g_RaceHudShared1 * 6] == '\x05') &&
     (cVar1 = GameState_Get_354_7050(), cVar1 == '\x01')) {
    iVar6 = 0;
    iVar5 = param_1;
    do {
      *(undefined4 *)(iVar5 + 0xa4) = 0;
      iVar6 = iVar6 + 3;
      *(undefined4 *)(iVar5 + 0xa8) = 0;
      *(undefined4 *)(iVar5 + 0xac) = 0;
      iVar5 = iVar5 + 0xc;
    } while (iVar6 < 9);
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)&pRVar4->field_0x10;
    do {
      if (*(int *)(iVar3 + 0xfc) != -1) {
        iVar6 = param_1 + *(int *)(iVar3 + 0xfc) * 4;
        *(int *)(iVar6 + 0xa4) = *(int *)(iVar6 + 0xa4) + *(int *)&pRVar4->field_0x190;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x1c;
      pRVar4 = (RaceRecordA *)&pRVar4->field_0x4;
    } while (iVar5 < 0x46);
  }
  return;
}

// 0x002c22a0  size 0x158
void Result_StoreRecordAlt(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  RaceEntrySetup *pRVar2;
  RaceTbl *tbl;
  uint uVar3;
  uint uVar4;
  RaceRecordA *pRVar5;
  RaceRecordB *pRVar6;
  ulong uVar7;
  
  if ((&DAT_0032f535)[(uint)g_RaceHudShared1 * 6] == '\x05') {
    pRVar2 = GameState_Elem_f0_xcc(0);
    cVar1 = GameState_Get_354_7050();
    if (cVar1 == '\x01') {
      tbl = (RaceTbl *)maybe_RaceTbl_GetCount();
      uVar3 = Race_GetDirection();
      uVar4 = Race_GetCourseVariant();
      pRVar5 = RaceTbl_GetCourseEntry(tbl,(int)(char)pRVar2->maybe_state,uVar3,uVar4);
      *(uint *)((int)param_1 + 0x9c) = (uint)(*(int *)&pRVar5->field_0x10 == 0);
    }
    else {
      cVar1 = GameState_Get_354_7050();
      if (cVar1 == '\x02') {
        pRVar6 = (RaceRecordB *)RaceTbl_Ptr_5fa0();
        uVar3 = Race_GetDirection();
        uVar4 = Race_GetCourseVariant();
        pRVar6 = RaceTbl_GetCourseEntryB(pRVar6,(int)(char)pRVar2->maybe_state,uVar3,uVar4);
        *(uint *)((int)param_1 + 0x9c) = (uint)(*(int *)&pRVar6->field_0xc == 0);
      }
    }
  }
  Result_CheckNewRecord(param_1,param_2);
  uVar7 = RaceProg_Get_4();
  if ((uVar7 & 2) != 0) {
    Result_StoreRecord(param_1,param_2);
  }
  return;
}

// 0x002c2400  size 0x21c
void Result_UpdateRow(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  param_1 = param_1 + (param_2 & 0xff) * 0x24;
  piVar6 = (int *)(param_1 + 4);
  if (((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
     (*(int *)(param_1 + 0x1c) != 0)) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    iVar1 = *piVar6;
    iVar2 = *(int *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0xc) * 0x14;
    iVar3 = iVar4 + iVar1;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar5 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
    *(undefined4 *)(iVar4 + iVar1 + 0x314) = 0;
    *(int *)(iVar3 + 0x31c) = iVar2;
    *puVar5 = 1;
    iVar1 = *piVar6;
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(param_1 + 0x10) * 0x14;
    iVar3 = iVar4 + iVar1;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar5 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
    *(undefined4 *)(iVar4 + iVar1 + 0x314) = 0;
    *(int *)(iVar3 + 0x31c) = iVar2;
    *puVar5 = 1;
    Menu_ClearSlot(0);
  }
  if ((*piVar6 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    *(undefined1 *)(param_1 + 0x24) = 1;
    iVar1 = *piVar6;
    iVar2 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x14) * 0x14;
    iVar3 = iVar4 + iVar1;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar5 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
    *(undefined4 *)(iVar4 + iVar1 + 0x314) = 1;
    *(int *)(iVar3 + 0x31c) = iVar2;
    *puVar5 = 1;
  }
  return;
}

// 0x002c2620  size 0x84
void Result_Free(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x18) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x24;
  } while (uVar1 < 4);
  return;
}

// 0x002c26b0  size 0x254
/* pause/end menu */

void RaceMenu_Init(undefined1 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x340] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x408) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x404) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
  *(undefined4 *)(param_1 + 900) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x380) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x37c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x374) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x370) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x354) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x318) = 0;
  lVar1 = Options_Get_10();
  iVar5 = 0;
  *(uint *)(param_1 + 0x31c) = lVar1 != 0 ^ 1;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  puVar3 = param_1;
  puVar4 = param_1;
  puVar2 = param_1;
  do {
    *(undefined4 *)(puVar4 + 0x1f0) = 0;
    iVar5 = iVar5 + 1;
    *(undefined4 *)(puVar4 + 500) = 0;
    *(undefined4 *)(puVar4 + 0x1f8) = 0;
    *(undefined4 *)(puVar3 + 0x278) = 0;
    *(undefined4 *)(puVar3 + 0x27c) = 0;
    *(undefined4 *)(puVar3 + 0x280) = 0;
    *(undefined4 *)(puVar3 + 0x284) = 0;
    *(undefined4 *)(puVar4 + 0xd8) = 0;
    puVar3 = puVar3 + 0x10;
    *(undefined4 *)(puVar4 + 0xdc) = 0;
    *(undefined4 *)(puVar4 + 0xe0) = 0;
    *(undefined4 *)(puVar2 + 0xa4) = 0;
    puVar4 = puVar4 + 0xc;
    *(undefined4 *)(puVar2 + 0x154) = 0;
    *(undefined4 *)(puVar2 + 0x17c) = 0;
    *(undefined4 *)(puVar2 + 0x1ac) = 0;
    puVar2 = puVar2 + 4;
  } while (iVar5 < 10);
  Result_SetupLayout(param_1);
  return;
}

// 0x002c2910  size 0x74
void RaceMenu_MoveUp(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  Se_PlayMenuVol(5,0x60);
  if (*(int *)((int)param_1 + 0x104) == 0) {
    RaceMenu_IsItemEnabled(param_1,9);
  }
  else {
    RaceMenu_IsItemEnabled(param_1,10);
    lVar1 = RaceScene_IsFlag10();
    uVar2 = 7;
    if (lVar1 == 0) {
      uVar2 = 2;
    }
    RaceMenu_SetHighlight(param_1,uVar2);
  }
  return;
}

// 0x002c2990  size 0x108
void RaceMenu_MoveDown(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  Se_PlayMenuVol(5,0x60);
  lVar2 = RaceScene_IsFlag10();
  iVar4 = (int)param_1;
  if (lVar2 == 0) {
    uVar1 = (uint)*(char *)(iVar4 + 0xf4);
  }
  else {
    uVar1 = 2;
  }
  if ((byte)(&PTR_DAT_0032f370)[(uVar1 & 0xff) * 2][*(int *)(iVar4 + 0xf8) * 0x14] < 8) {
                    /* WARNING: Switch is manually overridden */
    switch((&PTR_DAT_0032f370)[(uVar1 & 0xff) * 2][*(int *)(iVar4 + 0xf8) * 0x14]) {
    default:
      goto switchD_002c2a10_caseD_0;
    case 1:
      *(undefined4 *)(iVar4 + 0xf0) = 6;
      lVar2 = RaceScene_IsFlag10();
      uVar3 = 6;
      if (lVar2 == 0) {
        uVar3 = 1;
      }
      RaceMenu_SetHighlight(param_1,uVar3);
      break;
    case 5:
      RaceMenu_Confirm(param_1,3);
      break;
    case 6:
      RaceMenu_Confirm(param_1,4);
      break;
    case 7:
      RaceMenu_Confirm(param_1,5);
    }
  }
  else {
switchD_002c2a10_caseD_0:
    RaceMenu_Confirm(param_1,2);
  }
  return;
}

// 0x002c2aa0  size 0x184
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceMenu_HandleInput(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = (int)param_1;
  bVar1 = *(int *)(iVar2 + 0xfc) != 0;
  uVar4 = 0;
  if (*_g_MenuInput != 1) {
    *_g_MenuInput = 1;
  }
  uVar3 = _g_MenuInput[bVar1 + 2];
  if ((_g_MenuInput[bVar1 + 4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 0x20) {
    Se_PlayMenuVol(6,0x60);
    RaceMenu_IsItemEnabled(param_1,9);
    uVar4 = 1;
  }
  else if (uVar3 == 0x10) {
    RaceMenu_MoveUp(param_1);
    uVar4 = 1;
  }
  else if (uVar3 == 2) {
    if (*(int *)(iVar2 + 0x104) == 0) {
      Se_PlayMenuVol(8,0x60);
      *(undefined4 *)(iVar2 + 0x104) = 0;
    }
    else {
      Se_PlayMenuVol(7,0x60);
      *(undefined4 *)(iVar2 + 0x104) = 0;
    }
  }
  else {
    if (uVar3 != 1) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x104) == 0) {
      Se_PlayMenuVol(7,0x60);
    }
    else {
      Se_PlayMenuVol(8,0x60);
    }
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  return uVar4;
}

// 0x002c2c30  size 0x668
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceMenu_HandleOptions(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  
  lVar8 = RaceScene_IsFlag10();
  iVar14 = (int)param_1;
  if (lVar8 == 0) {
    uVar7 = (uint)*(char *)(iVar14 + 0xf4);
  }
  else {
    uVar7 = 2;
  }
  uVar7 = uVar7 & 0xff;
  iVar2 = *(int *)(iVar14 + 0xf8);
  uVar15 = 0;
  iVar3 = *(int *)(&DAT_0032f374 + uVar7 * 8);
  bVar5 = true;
  lVar8 = RaceScene_IsFlag10();
  lVar9 = RaceScene_IsFlag10();
  cVar11 = '\v';
  if (lVar9 == 0) {
    cVar11 = '\x06';
  }
  uVar13 = (ulong)(lVar8 == 0);
  if (uVar13 < (ulong)(long)cVar11) {
    iVar12 = iVar14 + (lVar8 == 0) * 0x14;
    do {
      if ((*(char *)(iVar12 + 0x14) == '\x01') || (*(char *)(iVar12 + 0x15) == '\x01')) {
        bVar5 = false;
      }
      uVar13 = (ulong)((int)uVar13 + 1);
      iVar12 = iVar12 + 0x14;
    } while (uVar13 < (ulong)(long)cVar11);
  }
  if (!bVar5) {
    return 0;
  }
  bVar5 = *(int *)(iVar14 + 0xfc) != 0;
  if (*_g_MenuInput != 1) {
    *_g_MenuInput = 1;
  }
  uVar10 = _g_MenuInput[bVar5 + 2];
  if ((_g_MenuInput[bVar5 + 4] & uVar10) == 0) {
    uVar10 = 0x100000;
  }
  else if (uVar10 == 0x80000) {
    uVar10 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar10 = 0x100000;
  }
  if (uVar10 == 0x40) {
LAB_002c3178:
    Se_PlayMenuVol(6,0x60);
    RaceMenu_Confirm(param_1,2);
    uVar15 = 1;
  }
  else {
    if (uVar10 == 0x20) {
      Options_ApplySeVolume(*(undefined1 *)(iVar14 + 0x108));
      Options_ApplyBgmVolume(*(undefined1 *)(iVar14 + 0x10c));
      Options_Set_4(*(undefined4 *)(iVar14 + 0x110));
      goto LAB_002c3178;
    }
    if (uVar10 == 0x10) {
      RaceMenu_MoveDown(param_1);
      uVar15 = 1;
    }
    else if (uVar10 == 8) {
      cVar11 = (&PTR_DAT_0032f370)[uVar7 * 2][*(int *)(iVar14 + 0xf8) * 0x14];
      if (cVar11 == '\x04') {
        iVar3 = *(int *)(iVar14 + 0x114);
        *(undefined4 *)(iVar14 + 0x114) = 0;
        if (iVar3 == *(int *)(iVar14 + 0x114)) {
          Se_PlayMenuVol(8,0x60);
          uVar4 = *(undefined4 *)(iVar14 + 0x114);
        }
        else {
          Se_PlayMenuVol(7,0x60);
          uVar4 = *(undefined4 *)(iVar14 + 0x114);
        }
        Options_Set_4(uVar4);
      }
      else if (cVar11 == '\x03') {
        sVar1 = *(short *)(iVar14 + 0x10e);
        *(short *)(iVar14 + 0x10e) = sVar1 + 1;
        sVar6 = *(short *)(iVar14 + 0x10e);
        if (sVar6 < 0) {
          *(undefined2 *)(iVar14 + 0x10e) = 0;
        }
        else {
          if (0xf < sVar6) {
            sVar6 = 0xf;
          }
          *(short *)(iVar14 + 0x10e) = sVar6;
        }
        if (sVar1 == *(short *)(iVar14 + 0x10e)) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
          Options_ApplyBgmVolume(*(undefined1 *)(iVar14 + 0x10e));
        }
      }
      else if (cVar11 == '\x02') {
        sVar1 = *(short *)(iVar14 + 0x10a);
        *(short *)(iVar14 + 0x10a) = sVar1 + 1;
        sVar6 = *(short *)(iVar14 + 0x10a);
        if (sVar6 < 0) {
          *(undefined2 *)(iVar14 + 0x10a) = 0;
        }
        else {
          if (0xf < sVar6) {
            sVar6 = 0xf;
          }
          *(short *)(iVar14 + 0x10a) = sVar6;
        }
        if (sVar1 == *(short *)(iVar14 + 0x10a)) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
          Options_ApplySeVolume(*(undefined1 *)(iVar14 + 0x10a));
        }
      }
    }
    else if (uVar10 == 4) {
      cVar11 = (&PTR_DAT_0032f370)[uVar7 * 2][*(int *)(iVar14 + 0xf8) * 0x14];
      if (cVar11 == '\x04') {
        iVar3 = *(int *)(iVar14 + 0x114);
        *(undefined4 *)(iVar14 + 0x114) = 1;
        if (iVar3 == *(int *)(iVar14 + 0x114)) {
          Se_PlayMenuVol(8,0x60);
          uVar4 = *(undefined4 *)(iVar14 + 0x114);
        }
        else {
          Se_PlayMenuVol(7,0x60);
          uVar4 = *(undefined4 *)(iVar14 + 0x114);
        }
        Options_Set_4(uVar4);
      }
      else if (cVar11 == '\x03') {
        sVar1 = *(short *)(iVar14 + 0x10e);
        *(short *)(iVar14 + 0x10e) = sVar1 + -1;
        sVar6 = *(short *)(iVar14 + 0x10e);
        if (sVar6 < 0) {
          *(undefined2 *)(iVar14 + 0x10e) = 0;
        }
        else {
          if (0xf < sVar6) {
            sVar6 = 0xf;
          }
          *(short *)(iVar14 + 0x10e) = sVar6;
        }
        if (sVar1 == *(short *)(iVar14 + 0x10e)) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
          Options_ApplyBgmVolume(*(undefined1 *)(iVar14 + 0x10e));
        }
      }
      else if (cVar11 == '\x02') {
        sVar1 = *(short *)(iVar14 + 0x10a);
        *(short *)(iVar14 + 0x10a) = sVar1 + -1;
        sVar6 = *(short *)(iVar14 + 0x10a);
        if (sVar6 < 0) {
          *(undefined2 *)(iVar14 + 0x10a) = 0;
        }
        else {
          if (0xf < sVar6) {
            sVar6 = 0xf;
          }
          *(short *)(iVar14 + 0x10a) = sVar6;
        }
        if (sVar1 == *(short *)(iVar14 + 0x10a)) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
          Options_ApplySeVolume(*(undefined1 *)(iVar14 + 0x10a));
        }
      }
    }
    else if (uVar10 == 2) {
      *(int *)(iVar14 + 0xf8) = *(int *)(iVar14 + 0xf8) + 1;
      uVar10 = *(uint *)(iVar14 + 0xf8);
      if ((int)uVar10 < 0) {
        uVar10 = iVar3 - 1;
      }
      else if (iVar3 - 1U < uVar10) {
        uVar10 = 0;
      }
      *(uint *)(iVar14 + 0xf8) = uVar10;
    }
    else {
      if (uVar10 != 1) {
        iVar14 = *(int *)(iVar14 + 0xf8);
        goto LAB_002c3198;
      }
      *(int *)(iVar14 + 0xf8) = *(int *)(iVar14 + 0xf8) + -1;
      uVar10 = *(uint *)(iVar14 + 0xf8);
      if ((int)uVar10 < 0) {
        uVar10 = iVar3 - 1;
      }
      else if (iVar3 - 1U < uVar10) {
        uVar10 = 0;
      }
      *(uint *)(iVar14 + 0xf8) = uVar10;
    }
  }
  iVar14 = *(int *)(iVar14 + 0xf8);
LAB_002c3198:
  if (iVar2 != iVar14) {
    RaceMenu_SetItemAlpha(param_1,(&PTR_DAT_0032f370)[uVar7 * 2][iVar14 * 0x14 + 8]);
    RaceMenu_SetHighlight(param_1,(&PTR_DAT_0032f370)[uVar7 * 2][iVar2 * 0x14 + 8]);
  }
  return uVar15;
}

// 0x002c32a0  size 0x5e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceMenu_AnimateOptions(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  ulong uVar14;
  int aiStack_1a0 [48];
  undefined4 auStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int aiStack_c0 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int aiStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int aiStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_40 [4];
  int aiStack_30 [4];
  int aiStack_20 [4];
  undefined4 auStack_10 [4];
  
  puVar10 = (undefined4 *)param_1;
  iVar3 = puVar10[0x3e];
  cVar1 = *(char *)((int)puVar10 + 0x10a);
  cVar2 = *(char *)((int)puVar10 + 0x10e);
  iVar4 = puVar10[0x45];
  lVar9 = RaceScene_IsFlag10();
  if (lVar9 == 0) {
    uVar8 = (uint)*(char *)(puVar10 + 0x3d);
  }
  else {
    uVar8 = 2;
  }
  uVar8 = uVar8 & 0xff;
  piVar13 = &DAT_0032f470;
  piVar12 = aiStack_1a0;
  iVar11 = 0x18;
  auStack_10[0] = DAT_0032f388;
  auStack_10[1] = DAT_0032f38c;
  auStack_10[2] = DAT_0032f390;
  aiStack_20[0] = DAT_0032f398;
  aiStack_20[1] = DAT_0032f39c;
  aiStack_20[2] = DAT_0032f3a0;
  aiStack_30[0] = DAT_0032f3a8;
  aiStack_30[1] = DAT_0032f3ac;
  aiStack_30[2] = DAT_0032f3b0;
  auStack_40[1] = DAT_0032f3bc;
  auStack_40[0] = DAT_0032f3b8;
  aiStack_50[1] = DAT_0032f3cc;
  auStack_40[2] = DAT_0032f3c0;
  aiStack_50[0] = DAT_0032f3c8;
  aiStack_60[2] = DAT_0032f3e0;
  aiStack_50[2] = DAT_0032f3d0;
  aiStack_80[3] = DAT_0032f3fc;
  aiStack_60[0] = DAT_0032f3d8;
  aiStack_60[1] = DAT_0032f3dc;
  aiStack_80[0] = DAT_0032f3f0;
  aiStack_80[1] = DAT_0032f3f4;
  aiStack_80[2] = DAT_0032f3f8;
  uStack_6c = DAT_0032f404;
  uStack_70 = DAT_0032f400;
  aiStack_a0[1] = DAT_0032f414;
  aiStack_a0[0] = DAT_0032f410;
  aiStack_a0[3] = DAT_0032f41c;
  aiStack_a0[2] = DAT_0032f418;
  uStack_8c = DAT_0032f424;
  uStack_90 = DAT_0032f420;
  aiStack_c0[1] = DAT_0032f434;
  aiStack_c0[0] = DAT_0032f430;
  aiStack_c0[3] = DAT_0032f43c;
  aiStack_c0[2] = DAT_0032f438;
  uStack_ac = DAT_0032f444;
  uStack_b0 = DAT_0032f440;
  auStack_e0[1] = DAT_0032f454;
  auStack_e0[0] = DAT_0032f450;
  auStack_e0[3] = DAT_0032f45c;
  auStack_e0[2] = DAT_0032f458;
  uStack_d0 = DAT_0032f460;
  uStack_cc = DAT_0032f464;
  do {
    iVar11 = iVar11 + -1;
    iVar5 = piVar13[1];
    *piVar12 = *piVar13;
    piVar12[1] = iVar5;
    piVar13 = piVar13 + 2;
    piVar12 = piVar12 + 2;
  } while (0 < iVar11);
  lVar9 = RaceMenu_HandleOptions(param_1);
  if (lVar9 == 0) {
    if (puVar10[0x3e] != iVar3) {
      Se_PlayMenuVol(7,0x60);
    }
    RaceUi_SetElementNumber(*puVar10,auStack_10[uVar8],9,cVar1);
    RaceUi_SetElementNumber(*puVar10,auStack_40[uVar8],9,cVar2);
    UiElem_SetPropInt((UiLayout *)*puVar10,(long)aiStack_30[uVar8],0x16,
                      aiStack_1a0[uVar8 * 0x10 + (int)cVar1]);
    UiElem_SetPropInt((UiLayout *)*puVar10,(long)aiStack_60[uVar8],0x16,
                      aiStack_1a0[uVar8 * 0x10 + (int)cVar2]);
    UiElem_SetPropInt((UiLayout *)*puVar10,(long)aiStack_20[uVar8],9,(uint)(cVar1 == '\0'));
    UiElem_SetPropInt((UiLayout *)*puVar10,(long)aiStack_50[uVar8],9,(uint)(cVar2 == '\0'));
    uVar14 = (ulong)(int)((_g_ProfileShared1 / 10) % 6);
    iVar3 = aiStack_a0[uVar8 * 2];
    UiElem_SetPropFloat((UiLayout *)*puVar10,(long)iVar3,8,extraout_a3_lo);
    iVar11 = aiStack_a0[uVar8 * 2 + 1];
    UiElem_SetPropFloat((UiLayout *)*puVar10,(long)iVar11,8,extraout_a3_lo_00);
    iVar5 = aiStack_c0[uVar8 * 2];
    UiElem_SetPropFloat((UiLayout *)*puVar10,(long)iVar5,8,extraout_a3_lo_01);
    iVar6 = aiStack_c0[uVar8 * 2 + 1];
    UiElem_SetPropFloat((UiLayout *)*puVar10,(long)iVar6,8,extraout_a3_lo_02);
    UiElem_SetNumber((UiLayout *)*puVar10,(long)iVar3,9,uVar14);
    UiElem_SetNumber((UiLayout *)*puVar10,(long)iVar11,9,uVar14);
    UiElem_SetNumber((UiLayout *)*puVar10,(long)iVar5,9,uVar14);
    UiElem_SetNumber((UiLayout *)*puVar10,(long)iVar6,9,uVar14);
    if (iVar4 == 0) {
      iVar3 = aiStack_80[uVar8 * 2];
    }
    else {
      iVar3 = aiStack_80[uVar8 * 2];
    }
    UiElem_SetPropFloat((UiLayout *)*puVar10,(long)iVar3,8,extraout_a3_lo_03);
    if (iVar4 == 0) {
      iVar3 = aiStack_80[uVar8 * 2 + 1];
    }
    else {
      iVar3 = aiStack_80[uVar8 * 2 + 1];
    }
    UiElem_SetPropFloat((UiLayout *)*puVar10,(long)iVar3,8,extraout_a3_lo_04);
    lVar9 = RaceScene_IsFlag10();
    if (lVar9 == 0) {
      uVar7 = puVar10[1];
    }
    else {
      uVar7 = puVar10[2];
    }
    if ((&PTR_DAT_0032f370)[uVar8 * 2][puVar10[0x3e] * 0x14] == '\x04') {
      MenuWnd_SetItemState(uVar7,auStack_e0[uVar8 * 2 + (iVar4 != 0 ^ 1)],0,0);
    }
    else {
      iVar3 = *(int *)((&PTR_DAT_0032f370)[uVar8 * 2] + puVar10[0x3e] * 0x14 + 4);
      if (iVar3 != -1) {
        MenuWnd_SetItemState(uVar7,iVar3,1,0);
      }
    }
  }
  return;
}

// 0x002c3890  size 0x74
void RaceMenu_Confirm(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = RaceScene_IsFlag10();
  uVar2 = 6;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  lVar1 = RaceScene_IsFlag10();
  *(uint *)((int)param_1 + 0xf0) = param_2 & 0xff;
  uVar3 = 7;
  if (lVar1 == 0) {
    uVar3 = 2;
  }
  RaceMenu_SetHighlight(param_1,uVar2);
  RaceMenu_SetHighlight(param_1,uVar3);
  return;
}

// 0x002c3910  size 0x1bc
int RaceMenu_AnimateOpen(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  
  piVar5 = (int *)param_1;
  iVar10 = 1;
  if (*(char *)((int)piVar5 + 0x15) == '\x01') {
    if ((&((UiLayout *)piVar5[3])->unk_318)[piVar5[7] * 5] == 0) {
      *(undefined1 *)((int)piVar5 + 0x15) = 2;
    }
    else {
      iVar10 = 0;
      UiLayout_UpdateAnim((UiLayout *)piVar5[3],piVar5[7]);
    }
  }
  lVar4 = RaceScene_IsFlag10();
  cVar9 = '\x06';
  if (lVar4 == 0) {
    cVar9 = '\x01';
  }
  if (iVar10 != 0) {
    piVar5[0x40] = 0;
    piVar5[0x41] = 0;
    iVar8 = (int)cVar9;
    piVar5[0x3c] = 0;
    *(undefined1 *)(piVar5 + iVar8 * 5 + 5) = 0;
    *(undefined1 *)((int)piVar5 + iVar8 * 0x14 + 0x15) = 0;
    iVar1 = piVar5[iVar8 * 5 + 8];
    iVar2 = piVar5[iVar8 * 5 + 6];
    iVar3 = *piVar5;
    iVar6 = iVar2 * 0x14 + iVar3;
    *(undefined4 *)(iVar6 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x31c) = 0;
    *(undefined4 *)(iVar6 + 0x30c) = 0;
    if (*(int *)(iVar6 + 0x31c) == 0) {
      *(undefined4 *)(iVar6 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x318) = 1;
    }
    puVar7 = (undefined4 *)(iVar6 + 0x318);
    *(undefined4 *)(iVar6 + 0x30c) = 0;
    if (*(int *)(iVar6 + 0x31c) == 0) {
      *puVar7 = 0;
    }
    else {
      *puVar7 = 1;
    }
    *(undefined4 *)(iVar2 * 0x14 + iVar3 + 0x314) = 0;
    *(int *)(iVar6 + 0x31c) = iVar1;
    *puVar7 = 1;
    iVar1 = piVar5[iVar8 * 5 + 9];
    iVar2 = piVar5[iVar8 * 5 + 7];
    iVar3 = *piVar5;
    iVar8 = iVar2 * 0x14 + iVar3;
    *(undefined4 *)(iVar8 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x31c) = 0;
    *(undefined4 *)(iVar8 + 0x30c) = 0;
    if (*(int *)(iVar8 + 0x31c) == 0) {
      *(undefined4 *)(iVar8 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x318) = 1;
    }
    puVar7 = (undefined4 *)(iVar8 + 0x318);
    *(undefined4 *)(iVar8 + 0x30c) = 0;
    if (*(int *)(iVar8 + 0x31c) == 0) {
      *puVar7 = 0;
    }
    else {
      *puVar7 = 1;
    }
    *(undefined4 *)(iVar2 * 0x14 + iVar3 + 0x314) = 0;
    *(int *)(iVar8 + 0x31c) = iVar1;
    *puVar7 = 1;
    RaceMenu_SetItemAlpha(param_1);
  }
  return iVar10;
}

// 0x002c3ad0  size 0x200
long RaceMenu_AnimateClose(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  
  lVar7 = 1;
  lVar2 = RaceScene_IsFlag10();
  cVar1 = '\x06';
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  uVar6 = (ulong)cVar1;
  lVar2 = RaceScene_IsFlag10();
  cVar4 = '\v';
  if (lVar2 == 0) {
    cVar4 = '\x06';
  }
  puVar8 = (undefined4 *)param_1;
  if (uVar6 < (ulong)(long)cVar4) {
    puVar5 = puVar8 + cVar1 * 5;
    do {
      if (*(char *)((int)puVar5 + 0x15) == '\x01') {
        if ((&((UiLayout *)*puVar8)->unk_318)[puVar5[7] * 5] == 0) {
          *(undefined1 *)((int)puVar5 + 0x15) = 2;
        }
        else {
          lVar7 = 0;
          UiLayout_UpdateAnim((UiLayout *)*puVar8,puVar5[7]);
        }
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      puVar5 = puVar5 + 5;
    } while (uVar6 < (ulong)(long)cVar4);
  }
  if (lVar7 == 0) {
    return 0;
  }
  iVar3 = puVar8[0x3c];
  if (iVar3 == 6) {
    RaceMenu_Update(param_1);
  }
  else if (iVar3 == 3) {
    RaceScene_SetFlags(0x80000);
    RaceScene_SetFlags(2);
    RaceHud_ResetSlots();
  }
  else if (iVar3 == 4) {
    RaceScene_SetFlags(0x80000);
    RaceScene_SetFlags(0x10);
    RaceHud_ResetSlots();
  }
  else if (iVar3 == 5) {
    cVar1 = RaceCtx_GetMode();
    if (cVar1 == '\x05') {
      RaceScene_SetFlags(8);
      iVar3 = puVar8[0x3c];
      goto LAB_002c3bf8;
    }
    Race_FrameBegin();
  }
  iVar3 = puVar8[0x3c];
LAB_002c3bf8:
  if (iVar3 - 2U < 4) {
    if ((iVar3 == 2) || (iVar3 == 5)) {
      RaceScene_SetFlags(0x20);
    }
    puVar8[0x3c] = 0xb;
    *puVar8 = 0;
    puVar8[3] = 0;
    RaceHud_SetState(3);
  }
  return lVar7;
}

// 0x002c3cd0  size 0x10c
void RaceMenu_AnimateCursor(undefined4 *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined4 *puVar5;
  ulong uVar6;
  
  bVar1 = true;
  lVar2 = RaceScene_IsFlag10();
  lVar3 = RaceScene_IsFlag10();
  cVar4 = '\v';
  if (lVar3 == 0) {
    cVar4 = '\x06';
  }
  uVar6 = (ulong)(lVar2 == 0);
  if (uVar6 < (ulong)(long)cVar4) {
    puVar5 = param_1 + (lVar2 == 0) * 5;
    do {
      if (*(char *)(puVar5 + 5) == '\x01') {
        if ((&((UiLayout *)*param_1)->unk_318)[puVar5[6] * 5] == 0) {
          *(undefined1 *)(puVar5 + 5) = 2;
        }
        else {
          bVar1 = false;
          UiLayout_UpdateAnim((UiLayout *)*param_1,puVar5[6]);
        }
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      puVar5 = puVar5 + 5;
    } while (uVar6 < (ulong)(long)cVar4);
  }
  if ((bVar1) && (param_1[0x3c] == 0)) {
    param_1[0x3c] = 1;
  }
  return;
}

// 0x002c3de0  size 0xcc
void RaceMenu_IsItemEnabled(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*(int *)(*(int *)(param_1 + 0x18) * 0x14 + *(int *)(param_1 + 0xc) + 0x318) == 0) {
    *(uint *)(param_1 + 0xf0) = param_2 & 0xff;
    *(undefined1 *)(param_1 + 0x15) = 1;
    *(undefined1 *)(param_1 + 0x14) = 0;
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 0x1c) * 0x14;
    iVar3 = iVar5 + iVar2;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar4 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar4 = 0;
    }
    else {
      *puVar4 = 1;
    }
    *(undefined4 *)(iVar5 + iVar2 + 0x314) = 0;
    *(int *)(iVar3 + 0x31c) = iVar1;
    *puVar4 = 1;
  }
  return;
}

// 0x002c3eb0  size 0xdc
void RaceMenu_SetHighlight(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2 != -1) {
    if (((char)param_1[param_2 * 5 + 5] == '\x02') &&
       (*(char *)((int)param_1 + param_2 * 0x14 + 0x15) == '\0')) {
      *(undefined1 *)((int)param_1 + param_2 * 0x14 + 0x15) = 1;
      *(undefined1 *)(param_1 + param_2 * 5 + 5) = 0;
      iVar1 = *param_1;
      iVar2 = param_1[param_2 * 5 + 9];
      iVar3 = param_1[param_2 * 5 + 7];
      iVar4 = iVar3 * 0x14 + iVar1;
      *(undefined4 *)(iVar4 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x31c) = 0;
      *(undefined4 *)(iVar4 + 0x30c) = 0;
      if (*(int *)(iVar4 + 0x31c) == 0) {
        *(undefined4 *)(iVar4 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x318) = 1;
      }
      puVar5 = (undefined4 *)(iVar4 + 0x318);
      *(undefined4 *)(iVar4 + 0x30c) = 0;
      if (*(int *)(iVar4 + 0x31c) == 0) {
        *puVar5 = 0;
      }
      else {
        *puVar5 = 1;
      }
      *(undefined4 *)(iVar3 * 0x14 + iVar1 + 0x314) = 0;
      *(int *)(iVar4 + 0x31c) = iVar2;
      *puVar5 = 1;
    }
  }
  return;
}

// 0x002c3f90  size 0x134
void RaceMenu_Update(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  
  lVar4 = RaceScene_IsFlag10();
  cVar5 = '\x06';
  if (lVar4 == 0) {
    cVar5 = '\x01';
  }
  if ((*(int *)(*param_1 + 0x318 + param_1[cVar5 * 5 + 6] * 0x14) == 0) &&
     (*(int *)(*param_1 + 0x318 + param_1[cVar5 * 5 + 7] * 0x14) == 0)) {
    param_1[0x3c] = 7;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + cVar5 * 5 + 5) = 0;
    *(undefined1 *)((int)param_1 + cVar5 * 0x14 + 0x15) = 0;
    iVar1 = param_1[6];
    iVar2 = param_1[3];
    iVar3 = param_1[8];
    iVar6 = iVar1 * 0x14 + iVar2;
    *(undefined4 *)(iVar6 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x31c) = 0;
    *(undefined4 *)(iVar6 + 0x30c) = 0;
    if (*(int *)(iVar6 + 0x31c) == 0) {
      *(undefined4 *)(iVar6 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x318) = 1;
    }
    puVar7 = (undefined4 *)(iVar6 + 0x318);
    *(undefined4 *)(iVar6 + 0x30c) = 0;
    if (*(int *)(iVar6 + 0x31c) == 0) {
      *puVar7 = 0;
    }
    else {
      *puVar7 = 1;
    }
    *(undefined4 *)(iVar1 * 0x14 + iVar2 + 0x314) = 0;
    *(int *)(iVar6 + 0x31c) = iVar3;
    *puVar7 = 1;
  }
  return;
}

