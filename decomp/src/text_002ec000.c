// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002ec000 - 0x002f0000
#include "ghidra_types.h"

// 0x002ec550  size 0x3bc
/* state of maybe_ComposerTask; on-screen text/callee hint "iptGetElem2f4xda8" (was
   ScrScriptGetElem2f4xda8_Enter) */

void maybe_ComposerTask_State10_State0_iptGetElem2f4xda8(undefined8 param_1)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  lVar2 = Composer_ConsumeCancel(iVar6 + 0xc44);
  if (lVar2 != 0) {
    lVar2 = Nameentry_Nop_2(iVar6 + 0xc44);
    if (lVar2 == 6) {
      *(undefined4 *)(iVar6 + 0xcc0) = 0;
    }
    PreviewSnd_Stop(iVar6 + 0xc8c);
    *(uint *)(iVar6 + 0xccc) = *(uint *)(iVar6 + 0xccc) & 0xfffffffc;
    *(float *)(iVar6 + 0xcb4) = (float)(int)(short)(int)*(float *)(iVar6 + 0xcbc);
    maybe_ComposerUi_ClearTracks(param_1);
  }
  maybe_ComposerUi_InputEdit(param_1);
  maybe_ComposerUi_InputRange(param_1);
  uVar4 = ComposerInput_GetHeld();
  if ((uVar4 & 0x2000) == 0) {
    uVar4 = ComposerInput_GetHeld();
    if ((uVar4 & 0x80) == 0) {
      uVar4 = ComposerInput_GetPressed();
      if ((uVar4 & 0x1000) == 0) {
        uVar4 = ComposerInput_GetPressed();
        if ((uVar4 & 2) == 0) {
          uVar4 = ComposerInput_GetPressed();
          if ((uVar4 & 0x40) != 0) {
            Se_PlayMenuVol(5,0x60);
            Nameentry_SetField_8(iVar6 + 0xc44,0xd);
          }
        }
        else {
          Nameentry_SetField_8(iVar6 + 0xc44,3);
        }
      }
      else {
        *(undefined4 *)(iVar6 + 0xcb4) = 0;
        Nameentry_SetField_8(iVar6 + 0xc44,3);
      }
    }
    else {
      uVar3 = Script_GetField_89f4(*(undefined4 *)(iVar6 + 0xca4));
      PreviewSnd_Play(iVar6 + 0xc8c,0,uVar3,0xffffffffffffffff);
    }
    uVar4 = ComposerInput_GetPressed();
    if ((uVar4 & 0x4000) == 0) {
      uVar4 = ComposerInput_GetPressed();
      if ((uVar4 & 0x8000) != 0) {
        iVar5 = *(int *)(iVar6 + 0xcc0) * 4 + iVar6;
        *(uint *)(iVar5 + 0xd28) = *(int *)(iVar5 + 0xd28) != 0 ^ 1;
        maybe_ComposerUi_ClearTracks(param_1);
      }
    }
    else {
      iVar5 = *(int *)(iVar6 + 0xcc0) * 4 + iVar6;
      *(uint *)(iVar5 + 0xd08) = *(int *)(iVar5 + 0xd08) != 0 ^ 1;
      maybe_ComposerUi_ClearTracks(param_1);
    }
    uVar4 = ComposerInput_GetPressed();
    if ((uVar4 & 0x200) != 0) {
      *(uint *)(iVar6 + 0xccc) = *(uint *)(iVar6 + 0xccc) ^ 4;
    }
    uVar4 = ComposerInput_GetPressed();
    if ((uVar4 & 0x100) != 0) {
      *(uint *)(iVar6 + 0xc9c) = *(int *)(iVar6 + 0xc9c) != 0 ^ 1;
    }
  }
  else {
    uVar4 = ComposerInput_GetPressed();
    if ((uVar4 & 0x80) != 0) {
      Se_PlayMenuVol(5,0x60);
      Nameentry_SetField_8(iVar6 + 0xc44,2);
    }
    uVar4 = ComposerInput_GetRepeat();
    if ((uVar4 & 4) == 0) {
      uVar4 = ComposerInput_GetRepeat();
      if ((uVar4 & 8) != 0) {
        sVar1 = Script_GetField_89f4(*(undefined4 *)(iVar6 + 0xca4));
        lVar2 = SeqGen_IsValidTempoPercent(*(undefined4 *)(iVar6 + 0xca4),sVar1 + -1);
        if (lVar2 == 0) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
        }
        uVar4 = ComposerInput_GetHeld();
        if ((uVar4 & 0x80) != 0) {
          uVar3 = Script_GetField_89f4(*(undefined4 *)(iVar6 + 0xca4));
          PreviewSnd_Play(iVar6 + 0xc8c,0,uVar3,0xffffffffffffffff);
        }
      }
    }
    else {
      sVar1 = Script_GetField_89f4(*(undefined4 *)(iVar6 + 0xca4));
      lVar2 = SeqGen_IsValidTempoPercent(*(undefined4 *)(iVar6 + 0xca4),sVar1 + 1);
      if (lVar2 == 0) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
      uVar4 = ComposerInput_GetHeld();
      if ((uVar4 & 0x80) != 0) {
        uVar3 = Script_GetField_89f4(*(undefined4 *)(iVar6 + 0xca4));
        PreviewSnd_Play(iVar6 + 0xc8c,0,uVar3,0xffffffffffffffff);
      }
    }
  }
  uVar4 = ComposerInput_GetHeld();
  if ((uVar4 & 0x80) == 0) {
    PreviewSnd_StopIfPlaying(iVar6 + 0xc8c);
  }
  Composer_PreviewTrack(iVar6 + 0xc8c,*(undefined4 *)(iVar6 + 0xcc0));
  return;
}

// 0x002ec910  size 0x6c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Updateec910) */

void maybe_ComposerTask_State10_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)param_1;
  lVar2 = Composer_UpdateInput(iVar1 + 0xc44);
  if (lVar2 != 0) {
    if (0 < *(int *)(iVar1 + 0xd68)) {
      *(int *)(iVar1 + 0xd68) = *(int *)(iVar1 + 0xd68) + -1;
    }
    iVar1 = Nameentry_GetField_4_8200(iVar1 + 0xc44);
    (*(code *)(&PTR_maybe_ComposerTask_State10_State0_iptGetElem2f4xda8_00342d70)[iVar1])(param_1);
  }
  return;
}

// 0x002ec980  size 0x38
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Exitec980) */

void maybe_ComposerTask_State11_NameentryGetField(int param_1)

{
  PreviewSnd_StopAndClear(param_1 + 0xc8c);
  PreviewSnd_StopAndClear(param_1 + 0xc80);
  SeqGen_FreeSong(*(undefined4 *)(param_1 + 0xca4));
  return;
}

// 0x002ec9c0  size 0x1ac
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Enterec9c0) */

void maybe_ComposerTask_State9_NameentryGetField(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  Mem_Set16(param_1,0,0x1248);
  lVar3 = ComposerScene_GetMode();
  if (lVar3 == 0) {
    Composer_InitPanel(param_1 + 0xc44,0);
  }
  else {
    Composer_InitPanel(param_1 + 0xc44,4);
  }
  PreviewSnd_Init(param_1 + 0xc80,8);
  PreviewSnd_Init(param_1 + 0xc8c,9);
  PreviewSnd_MarkStopped(param_1 + 0xc8c);
  *(undefined4 *)(param_1 + 0xca0) = 1;
  Snd_PlayStreamEx(*(undefined4 *)(param_1 + 0xca0),0x1c5b,0x1ca4,0);
  *(undefined4 *)(param_1 + 0xc98) = 0x41700000;
  *(undefined4 *)(param_1 + 0xc9c) = 0;
  uVar1 = Script_Nop();
  *(undefined4 *)(param_1 + 0xca4) = uVar1;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xcc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1230) = 0;
  iVar4 = param_1;
  do {
    uVar1 = Composer_GetModeSongs(iVar5);
    *(undefined4 *)(iVar4 + 0xd84) = uVar1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x1e);
  iVar4 = RaceSlotTbl_Get();
  iVar5 = 0;
  do {
    iVar2 = SeqGen_GetPatternEntry(iVar5);
    if (*(int *)(iVar2 + 4) == 0) {
      if (*(int *)(iVar4 + 0x9660) != 0) {
        *(int *)(param_1 + *(int *)(param_1 + 0x1230) * 4 + 0xdfc) = iVar5;
        *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + 1;
      }
      iVar4 = iVar4 + 4;
    }
    else {
      *(int *)(param_1 + *(int *)(param_1 + 0x1230) * 4 + 0xdfc) = iVar5;
      *(int *)(param_1 + 0x1230) = *(int *)(param_1 + 0x1230) + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10d);
  *(int *)(param_1 + 0x1234) = (*(int *)(param_1 + 0x1230) + 2) / 3;
  SeqGen_FreeSong(*(undefined4 *)(param_1 + 0xca4));
  return;
}

// 0x002ecb70  size 0x280
void maybe_ComposerUi_AnimateNameC(int param_1,long param_2)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0xd7c) == 0) {
    lVar5 = Nameentry_GetField_14(param_1 + 0xc44);
    if ((lVar5 == 0) && (lVar5 = Nameentry_GetField_18(param_1 + 0xc44), lVar5 == 0)) {
      ComposerInput_SetMode(1);
      if (param_2 == 0) {
        iVar4 = ((*(int *)(param_1 + 0xd70) - *(int *)(param_1 + 0xd78)) + 0x12) % 0x12;
      }
      else {
        iVar4 = ((*(int *)(param_1 + 0xd70) - *(int *)(param_1 + 0xd78)) + 0x1e) % 0x1e;
      }
      MenuWnd_SetItemState(8,*(undefined4 *)(&DAT_00342ef4 + iVar4 * 0x1c),0,0);
    }
  }
  else {
    ComposerInput_SetMode(0);
    if (*(int *)(param_1 + 0xd7c) == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd,6);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x8,2);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0xd7c) = 0;
        iVar4 = UiMgr_FindLayout(0xd);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x384 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x394 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
        }
        iVar4 = UiMgr_FindLayout(8);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd,7);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x8,3);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0xd7c) = 0;
        iVar4 = UiMgr_FindLayout(0xd);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x398 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x3a8 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
        }
        iVar4 = UiMgr_FindLayout(8);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  return;
}

// 0x002ecdf0  size 0x348
bool Eventui_Draw_Akagi_cdf0(int param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int *piVar6;
  uint uVar7;
  undefined4 auStack_40 [16];
  
  uVar7 = 0;
  piVar6 = &DAT_00342ef0;
  do {
    if ((*(int *)(param_1 + 0xd7c) == 1) && (uVar7 == 0xc)) {
      if (param_2 == 0) {
        iVar3 = (*(int *)(param_1 + 0xd78) + 0x11) % 0x12 + 0xc;
      }
      else {
        iVar3 = (*(int *)(param_1 + 0xd78) + 0x1d) % 0x1e;
      }
    }
    else if (param_2 == 0) {
      iVar3 = (int)(*(int *)(param_1 + 0xd78) + uVar7) % 0x12 + 0xc;
    }
    else {
      iVar3 = (int)(*(int *)(param_1 + 0xd78) + uVar7) % 0x1e;
    }
    MenuWnd_DrawLabel(8,piVar6[3],5,0,iVar3 + 1);
    lVar4 = SeqGen_IsUserSong(iVar3);
    if (lVar4 == 0) {
      MenuWnd_DrawText(8,piVar6[4],6);
    }
    else {
      lVar4 = SeqGen_FindPatternIndex(*(undefined4 *)(param_1 + 0xca4));
      if (lVar4 == 0) {
        MenuWnd_DrawTextId(8,piVar6[4],4,7);
      }
      else {
        iVar2 = UiMgr_FindLayout(8);
        UiElem_GetRect(&g_UiMgr->slots[iVar2].layout,auStack_40,(long)piVar6[4]);
        uVar5 = SeqGen_GetPartTextId(*(undefined4 *)(param_1 + 0xca4),iVar3);
        UiText_DrawPlayerName(auStack_40,uVar5,0);
      }
    }
    if (iVar3 < 0xc) {
      iVar2 = UiMgr_FindLayout(8);
      UiElem_Get(&g_UiMgr->slots[iVar2].layout,piVar6[2],0xc0,0xba,0x73);
    }
    else {
      iVar2 = UiMgr_FindLayout(8);
      UiElem_Get(&g_UiMgr->slots[iVar2].layout,piVar6[2],0xc0,0xc0,0xc0);
    }
    if (*(int *)(param_1 + iVar3 * 4 + 0xd84) == 0) {
      iVar3 = UiMgr_FindLayout(0xd);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,(long)*piVar6,8,extraout_a3_lo_00);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xd);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,(long)*piVar6,8,extraout_a3_lo);
    }
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,(long)piVar6[5],8,extraout_a3_lo_01);
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 7;
  } while (uVar7 < 0xd);
  iVar3 = UiMgr_FindLayout(0xd);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x24,8,extraout_a3_lo_02);
  uVar5 = 0x1e;
  if (param_2 == 0) {
    uVar5 = 0x12;
  }
  MenuNum_CountUp_Event(0xd,3,4,0xfc,uVar5,0xc,*(undefined4 *)(param_1 + 0xd78));
  UiLayout_UpdateAnimById((UiLayout *)0x8,5);
  bVar1 = UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  return bVar1;
}

// 0x002ed140  size 0x8
/* follows Eventui_Draw_Akagi_cdf0; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Eventui_Draw_Akagi_cdf0_Orphan1(void)

{
  return;
}

// 0x002ed150  size 0x23c
/* WARNING: Removing unreachable block (ram,0x002ed278) */

void maybe_ComposerUi_SetCellNumber(uint param_1,int param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  uVar2 = param_1;
  if ((int)param_1 < 0) {
    uVar2 = param_1 + 0xf;
  }
  iVar7 = (int)uVar2 >> 4;
  uVar2 = param_1 & 0xf;
  if (((int)param_1 < 0) && (uVar2 != 0)) {
    uVar2 = uVar2 - 0x10;
  }
  uVar3 = uVar2;
  if ((int)uVar2 < 0) {
    uVar3 = uVar2 + 3;
  }
  iVar5 = (int)uVar3 >> 2;
  uVar3 = uVar2 & 3;
  if (((int)uVar2 < 0) && (uVar3 != 0)) {
    uVar3 = uVar3 - 4;
  }
  if (param_3 != 0) {
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 1;
    uVar3 = uVar3 + 1;
  }
  uVar2 = 0;
  piVar9 = (int *)(&DAT_00342e90 + param_2 * 4);
  do {
    iVar4 = UiMgr_FindLayout(0xc);
    iVar8 = 1;
    iVar6 = 0;
    if (0 < (int)uVar2) {
      if (8 < (int)uVar2) {
        bVar1 = false;
        if ((-1 < (int)uVar2) && ((int)uVar2 < 0x7fffffff)) {
          bVar1 = true;
        }
        if (bVar1) {
          do {
            iVar6 = iVar6 + 8;
            iVar8 = iVar8 * 100000000;
          } while (iVar6 < (int)(uVar2 - 8));
        }
      }
      for (; iVar6 < (int)uVar2; iVar6 = iVar6 + 1) {
        iVar8 = iVar8 * 10;
      }
    }
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,(long)*piVar9,0x16,
                      (&DAT_00342e60)[((int)(uVar3 + iVar5 * 100 + iVar7 * 10000) / iVar8) % 10]);
    uVar2 = uVar2 + 1;
    piVar9 = piVar9 + 4;
  } while (uVar2 < 6);
  return;
}

// 0x002ed390  size 0x1080
void maybe_ComposerUi_DrawGrid(int param_1,long param_2)

{
  UiLayoutSlot *pUVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  byte extraout_a3_lo_11;
  byte extraout_a3_lo_12;
  byte extraout_a3_lo_13;
  byte extraout_a3_lo_14;
  byte extraout_a3_lo_15;
  byte extraout_a3_lo_16;
  byte extraout_a3_lo_17;
  byte extraout_a3_lo_18;
  byte extraout_a3_lo_19;
  byte extraout_a3_lo_20;
  byte extraout_a3_lo_21;
  byte extraout_a3_lo_22;
  byte extraout_a3_lo_23;
  byte extraout_a3_lo_24;
  byte extraout_a3_lo_25;
  byte extraout_a3_lo_26;
  byte extraout_a3_lo_27;
  byte extraout_a3_lo_28;
  byte extraout_a3_lo_29;
  byte extraout_a3_lo_30;
  byte extraout_a3_lo_31;
  byte extraout_a3_lo_32;
  byte extraout_a3_lo_33;
  byte extraout_a3_lo_34;
  byte extraout_a3_lo_35;
  byte extraout_a3_lo_36;
  byte extraout_a3_lo_37;
  byte extraout_a3_lo_38;
  byte extraout_a3_lo_39;
  byte extraout_a3_lo_40;
  byte extraout_a3_lo_41;
  byte extraout_a3_lo_42;
  uint uVar9;
  short *psVar10;
  float fVar11;
  uint uVar12;
  undefined4 auStack_40 [16];
  
  iVar3 = UiMgr_FindLayout(0xc);
  UiElem_GetRect(&g_UiMgr->slots[iVar3].layout,auStack_40,0x6d);
  uVar5 = Script_FieldPtr_89f6(*(undefined4 *)(param_1 + 0xca4));
  UiText_DrawPlayerName(auStack_40,uVar5,0);
  if ((*(uint *)(param_1 + 0xccc) & 4) == 0) {
LAB_002ee318:
    maybe_ComposerUi_SetCellNumber((int)*(float *)(param_1 + 0xcb4),3,1);
    uVar8 = *(uint *)(param_1 + 0xccc);
  }
  else {
    if (*(float *)(param_1 + 0xcb4) <= *(float *)(param_1 + 0xcb8)) goto LAB_002ee318;
    fVar11 = *(float *)(param_1 + 0xcb4) - *(float *)(param_1 + 0xcb8);
    uVar12 = (uint)fVar11;
    uVar8 = uVar12 & 0xf;
    if (((int)uVar12 < 0) && (uVar8 != 0)) {
      uVar8 = uVar8 - 0x10;
    }
    uVar12 = uVar8;
    if ((int)uVar8 < 0) {
      uVar12 = uVar8 + 3;
    }
    uVar9 = uVar8 & 3;
    if (((int)uVar8 < 0) && (uVar9 != 0)) {
      uVar9 = uVar9 - 4;
    }
    iVar3 = ((int)uVar12 >> 2) + 1;
    if (fVar11 == 16.0) {
      iVar3 = 5;
    }
    iVar4 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,(long)DAT_00342e9c,0x16,
                      (&DAT_00342e60)[(int)(uVar9 + 1) % 10]);
    iVar4 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,(long)DAT_00342eac,0x16,
                      (&DAT_00342e60)[((int)(uVar9 + 1) / 10) % 10]);
    iVar4 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,(long)DAT_00342ebc,0x16,
                      (&DAT_00342e60)[iVar3 % 10]);
    iVar4 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,(long)DAT_00342ecc,0x16,
                      (&DAT_00342e60)[(iVar3 / 10) % 10]);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,(long)DAT_00342edc,0x16,DAT_00342e60);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,(long)DAT_00342eec,0x16,DAT_00342e60);
    uVar8 = *(uint *)(param_1 + 0xccc);
  }
  if ((uVar8 & 1) == 0) {
    lVar7 = SeqGen_GetTrackLength
                      (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                       *(undefined4 *)(param_1 + 0xcc4));
    if (lVar7 == 0) {
      maybe_ComposerUi_SetCellNumber(0,0,0);
      maybe_ComposerUi_SetCellNumber(0,1,0);
      maybe_ComposerUi_SetCellNumber(0,2,0);
    }
    else {
      psVar10 = (short *)lVar7;
      maybe_ComposerUi_SetCellNumber(*psVar10,0,1);
      maybe_ComposerUi_SetCellNumber((int)*psVar10 + (int)psVar10[1],1,1);
      maybe_ComposerUi_SetCellNumber(psVar10[1],2,0);
    }
  }
  else if (*(short *)(param_1 + 0xcaa) < 1) {
    maybe_ComposerUi_SetCellNumber(0,0,0);
    maybe_ComposerUi_SetCellNumber(0,1,0);
    maybe_ComposerUi_SetCellNumber(0,2,0);
  }
  else {
    maybe_ComposerUi_SetCellNumber(*(undefined2 *)(param_1 + 0xca8),0,1);
    maybe_ComposerUi_SetCellNumber
              ((int)*(short *)(param_1 + 0xca8) + (int)*(short *)(param_1 + 0xcaa),1,1);
    maybe_ComposerUi_SetCellNumber(*(undefined2 *)(param_1 + 0xcaa),2,0);
  }
  iVar3 = UiMgr_FindLayout(0xc);
  pUVar1 = g_UiMgr->slots;
  sVar2 = Script_GetField_89f4(*(undefined4 *)(param_1 + 0xca4));
  UiElem_SetPropInt(&pUVar1[iVar3].layout,0x26,0x16,(&DAT_00342e60)[((int)sVar2 / 100) % 10]);
  iVar3 = UiMgr_FindLayout(0xc);
  pUVar1 = g_UiMgr->slots;
  sVar2 = Script_GetField_89f4(*(undefined4 *)(param_1 + 0xca4));
  UiElem_SetPropInt(&pUVar1[iVar3].layout,0x27,0x16,(&DAT_00342e60)[((int)sVar2 / 10) % 10]);
  iVar3 = UiMgr_FindLayout(0xc);
  pUVar1 = g_UiMgr->slots;
  sVar2 = Script_GetField_89f4(*(undefined4 *)(param_1 + 0xca4));
  UiElem_SetPropInt(&pUVar1[iVar3].layout,0x28,0x16,
                    (&DAT_00342e60)[(int)sVar2 + ((int)sVar2 / 10) * -10]);
  if (param_2 != 0) {
    uVar6 = ComposerInput_GetHeld();
    if ((uVar6 & 0x80) == 0) {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x66,8,extraout_a3_lo_00);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x66,8,extraout_a3_lo);
    }
    uVar6 = ComposerInput_GetHeld();
    if ((uVar6 & 0x100) == 0) {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x67,8,extraout_a3_lo_02);
      uVar8 = *(uint *)(param_1 + 0xccc);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x67,8,extraout_a3_lo_01);
      uVar8 = *(uint *)(param_1 + 0xccc);
    }
    if ((uVar8 & 4) == 0) {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x52,8,extraout_a3_lo_04);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x52,8,extraout_a3_lo_03);
    }
    lVar7 = Nameentry_GetField_4_8200(param_1 + 0xc44);
    if (lVar7 == 0) {
      uVar6 = ComposerInput_GetHeld();
      if ((uVar6 & 0x1000) == 0) {
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5c,8,extraout_a3_lo_06);
      }
      else {
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5c,8,extraout_a3_lo_05);
      }
      uVar6 = ComposerInput_GetHeld();
      if ((uVar6 & 0x400) == 0) {
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5d,8,extraout_a3_lo_08);
      }
      else {
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5d,8,extraout_a3_lo_07);
      }
      uVar6 = ComposerInput_GetHeld();
      if ((uVar6 & 0x800) == 0) {
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5e,8,extraout_a3_lo_10);
      }
      else {
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5e,8,extraout_a3_lo_09);
      }
      uVar6 = ComposerInput_GetHeld();
      if ((uVar6 & 0x2000) == 0) {
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5f,8,extraout_a3_lo_18);
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x6b,8,extraout_a3_lo_19);
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x3a,8,extraout_a3_lo_20);
        if (*(int *)(param_1 + 0xc9c) == 0) {
          iVar3 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x51,8,extraout_a3_lo_22);
        }
        else {
          iVar3 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x51,8,extraout_a3_lo_21);
        }
        uVar6 = ComposerInput_GetHeld();
        if ((uVar6 & 0x40) == 0) {
          iVar3 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x65,8,extraout_a3_lo_24);
        }
        else {
          iVar3 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x65,8,extraout_a3_lo_23);
        }
        uVar6 = ComposerInput_GetHeld();
        if ((uVar6 & 0x200) == 0) {
          iVar3 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x68,8,extraout_a3_lo_26);
        }
        else {
          iVar3 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x68,8,extraout_a3_lo_25);
        }
        uVar6 = ComposerInput_GetHeld();
        if ((uVar6 & 2) == 0) {
          iVar3 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5b,8,extraout_a3_lo_28);
        }
        else {
          iVar3 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5b,8,extraout_a3_lo_27);
        }
      }
      else {
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5f,8,extraout_a3_lo_11);
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x6b,8,extraout_a3_lo_12);
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x3a,8,extraout_a3_lo_13);
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x51,8,extraout_a3_lo_14);
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x65,8,extraout_a3_lo_15);
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x68,8,extraout_a3_lo_16);
        iVar3 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5b,8,extraout_a3_lo_17);
      }
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5a,8,extraout_a3_lo_29);
      iVar3 = *(int *)(param_1 + 0xcc0);
      goto LAB_002ee2f0;
    }
    uVar6 = ComposerInput_GetHeld();
    if ((uVar6 & 1) == 0) {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5a,8,extraout_a3_lo_31);
      iVar3 = *(int *)(param_1 + 0xc9c);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5a,8,extraout_a3_lo_30);
      iVar3 = *(int *)(param_1 + 0xc9c);
    }
    if (iVar3 == 0) {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x51,8,extraout_a3_lo_33);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x51,8,extraout_a3_lo_32);
    }
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x65,8,extraout_a3_lo_34);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x68,8,extraout_a3_lo_35);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5b,8,extraout_a3_lo_36);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5c,8,extraout_a3_lo_37);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5d,8,extraout_a3_lo_38);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5e,8,extraout_a3_lo_39);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x5f,8,extraout_a3_lo_40);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x6b,8,extraout_a3_lo_41);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x3a,8,extraout_a3_lo_42);
  }
  iVar3 = *(int *)(param_1 + 0xcc0);
LAB_002ee2f0:
  uVar5 = Menuscr_FieldPtr_52(*(undefined4 *)(iVar3 * 4 + param_1 + 0xce8));
  MenuWnd_DrawText(0xc,0x6e,uVar5);
  return;
}

// 0x002ee410  size 0x25c
void maybe_ComposerUi_DrawCursorSprite(int param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0xce4);
  fVar4 = 64.0;
  fVar5 = (float)param_3 * 0.515625 + 64.0;
  if (param_3 < iVar1) {
    fVar6 = ((float)(iVar1 - param_3) / 1024.0) * 4.0 + 245.0;
  }
  else if (iVar1 + 0xb0 < param_3) {
    fVar4 = 592.0;
    fVar6 = ((float)(param_3 - (iVar1 + 0xb0)) / 1024.0) * 4.0 + 245.0;
  }
  else {
    fVar6 = 245.0;
    fVar4 = (float)((param_3 - iVar1) * 3 + 0x40);
    Obj_Reset(*param_2,1,0xffffffffffffffff);
    iVar1 = *param_2;
    *(float *)(iVar1 + 0x10) = fVar4;
    *(undefined4 *)(iVar1 + 0x14) = 0x42400000;
    *(float *)(iVar1 + 0x20) = fVar4;
    *(undefined4 *)(iVar1 + 0x24) = 0x43750000;
    iVar1 = *param_2;
    *(uint *)(iVar1 + 0x2c0) = param_4 >> 0x10 & 0xff;
    *(uint *)(iVar1 + 0x2c4) = param_4 >> 8 & 0xff;
    *(uint *)(iVar1 + 0x2c8) = param_4 & 0xff;
    *(uint *)(iVar1 + 0x2cc) = param_4 >> 0x18;
    *param_2 = *param_2 + 0x310;
  }
  Obj_Reset(*param_2,1,0xffffffffffffffff);
  iVar1 = *param_2;
  uVar3 = param_4 >> 0x10 & 0xff;
  uVar2 = param_4 >> 8 & 0xff;
  *(float *)(iVar1 + 0x10) = fVar5;
  *(undefined4 *)(iVar1 + 0x14) = 0x43790000;
  *(float *)(iVar1 + 0x20) = fVar5;
  *(undefined4 *)(iVar1 + 0x24) = 0x43908000;
  iVar1 = *param_2;
  *(uint *)(iVar1 + 0x2c0) = uVar3;
  *(uint *)(iVar1 + 0x2c4) = uVar2;
  *(uint *)(iVar1 + 0x2c8) = param_4 & 0xff;
  *(uint *)(iVar1 + 0x2cc) = param_4 >> 0x18;
  *param_2 = *param_2 + 0x310;
  Obj_Reset(*param_2,1,0xffffffffffffffff);
  iVar1 = *param_2;
  *(float *)(iVar1 + 0x10) = fVar4;
  *(float *)(iVar1 + 0x14) = fVar6;
  *(float *)(iVar1 + 0x20) = fVar5;
  *(undefined4 *)(iVar1 + 0x24) = 0x43790000;
  iVar1 = *param_2;
  *(uint *)(iVar1 + 0x2c0) = uVar3;
  *(uint *)(iVar1 + 0x2c4) = uVar2;
  *(uint *)(iVar1 + 0x2c8) = param_4 & 0xff;
  *(uint *)(iVar1 + 0x2cc) = param_4 >> 0x18;
  *param_2 = *param_2 + 0x310;
  return;
}

// 0x002ee670  size 0x1b4
void maybe_ComposerUi_DrawCursor(undefined8 param_1,long param_2)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_40 [60];
  int iStack_4;
  
  iVar5 = (int)param_1;
  iStack_4 = *(int *)(iVar5 + 0xc40);
  Pkt_Init(auStack_40,2,2,0);
  Pkt_SubmitToChain(auStack_40,0x1a);
  uVar3 = Script_GetField_89f0(*(undefined4 *)(iVar5 + 0xca4));
  maybe_ComposerUi_DrawCursorSprite(param_1,&iStack_4,uVar3,0xffffffff8055b4e6);
  uVar3 = Script_GetField_89f2(*(undefined4 *)(iVar5 + 0xca4));
  maybe_ComposerUi_DrawCursorSprite(param_1,&iStack_4,uVar3,0xffffffff8055b4e6);
  if ((param_2 != 0) &&
     (lVar4 = SeqGen_GetTrackLength
                        (*(undefined4 *)(iVar5 + 0xca4),*(undefined4 *)(iVar5 + 0xcc0),
                         *(undefined4 *)(iVar5 + 0xcc4)), lVar4 != 0)) {
    sVar1 = *(short *)lVar4;
    iVar2 = *(int *)(iVar5 + 0xce4);
    if (((long)iVar2 <= (long)sVar1) && ((long)sVar1 <= (long)(iVar2 + 0xb0))) {
      Obj_Reset(iStack_4,1,0xffffffffffffffff);
      fVar6 = (float)((sVar1 - iVar2) * 3 + 0x40);
      *(float *)(iStack_4 + 0x10) = fVar6;
      *(undefined4 *)(iStack_4 + 0x14) = 0x42400000;
      *(float *)(iStack_4 + 0x20) = fVar6;
      *(undefined4 *)(iStack_4 + 0x24) = 0x43750000;
      *(undefined4 *)(iStack_4 + 0x2c0) = 0xa6;
      *(undefined4 *)(iStack_4 + 0x2c4) = 0xc0;
      *(undefined4 *)(iStack_4 + 0x2c8) = 0xbd;
      *(undefined4 *)(iStack_4 + 0x2cc) = 0x80;
      iStack_4 = iStack_4 + 0x310;
    }
  }
  maybe_ComposerUi_DrawCursorSprite
            (param_1,&iStack_4,(int)*(float *)(iVar5 + 0xcb4),0xffffffff8098ffe1);
  Pkt_AddPrimitives(auStack_40,*(int *)(iVar5 + 0xc40),(iStack_4 - *(int *)(iVar5 + 0xc40)) / 0x310)
  ;
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x002ee830  size 0x990
void maybe_ComposerUi_DrawNotes(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  bool bVar4;
  short *psVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  short *psVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iStack_d0;
  int iStack_c0;
  int iStack_b0;
  byte bStack_a0;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined1 auStack_40 [64];
  
  psVar11 = (short *)0x0;
  Pkt_Init(auStack_40,2,2,0);
  Pkt_SubmitToChain(auStack_40,0x14);
  uVar9 = 0;
  iStack_b0 = 0x56;
  iStack_c0 = 0xf9;
  iStack_d0 = param_1;
  do {
    puVar10 = *(uint **)(param_1 + 0xc40);
    iVar12 = 0;
    fVar20 = (float)iStack_b0;
    fVar18 = -1.0;
    fVar19 = fVar20 + 16.0;
    fVar17 = (float)iStack_c0;
    psVar5 = (short *)SeqGen_GetTrackLength(*(undefined4 *)(param_1 + 0xca4),uVar9,0);
    if (psVar5 != (short *)0x0) {
      iVar8 = (uVar9 & 1) * 0x20;
      fVar16 = fVar17 + 2.0;
      do {
        iVar7 = *(int *)(param_1 + 0xce4);
        iVar15 = (int)*psVar5;
        if (((long)(iVar7 + 0xb0) < (long)*psVar5) || (iVar15 + psVar5[1] < iVar7)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          fVar6 = 64.0;
          fVar13 = (float)((iVar15 - iVar7) * 3 + 0x40);
          fVar14 = (float)(((iVar15 + psVar5[1]) - iVar7) * 3 + 0x40);
          if (64.0 <= fVar13) {
            fVar6 = fVar13;
          }
          fVar13 = 592.0;
          if (fVar14 <= 592.0) {
            fVar13 = fVar14;
          }
          if (((iVar12 == *(int *)(param_1 + 0xcc4)) && (uVar9 == *(uint *)(param_1 + 0xcc0))) &&
             (param_2 != 0)) {
            uStack_70 = DAT_00342e30;
            uStack_6c = DAT_00342e34;
            iStack_74 = DAT_00342e3c;
            iStack_64 = DAT_00342e3c;
            uStack_68 = DAT_00342e38;
            uStack_50 = DAT_00342e40;
            uStack_4c = DAT_00342e44;
            uStack_48 = DAT_00342e48;
            iStack_54 = DAT_00342e4c;
            iStack_44 = DAT_00342e4c;
          }
          else {
            uStack_50 = *(undefined4 *)(&DAT_00342e00 + iVar8);
            uStack_70 = *(undefined4 *)(&DAT_00342df0 + iVar8);
            uStack_6c = *(undefined4 *)(&DAT_00342df4 + iVar8);
            uStack_68 = *(undefined4 *)(&DAT_00342df8 + iVar8);
            uStack_4c = *(undefined4 *)(&DAT_00342e04 + iVar8);
            iVar15 = *(int *)(&DAT_00342dfc + iVar8);
            uStack_48 = *(undefined4 *)(&DAT_00342e08 + iVar8);
            iVar7 = *(int *)(&DAT_00342e0c + iVar8);
            if (*(int *)(iStack_d0 + 0xd48) == 0) {
              iStack_74 = (int)((float)iVar15 * 0.3);
              iStack_64 = (int)((float)iVar15 * 0.3);
              iStack_54 = (int)((float)iVar7 * 0.3);
              iStack_44 = (int)((float)iVar7 * 0.3);
            }
            else {
              iStack_74 = (int)((float)iVar15 * 0.8);
              iStack_64 = (int)((float)iVar15 * 0.8);
              iStack_54 = (int)((float)iVar7 * 0.8);
              iStack_44 = (int)((float)iVar7 * 0.8);
            }
          }
          uStack_80 = uStack_70;
          uStack_7c = uStack_6c;
          uStack_78 = uStack_68;
          uStack_60 = uStack_50;
          uStack_5c = uStack_4c;
          uStack_58 = uStack_48;
          Obj_Reset(puVar10,3,0xffffffffffffffff);
          *puVar10 = *puVar10 | 2;
          puVar10[4] = (uint)fVar6;
          puVar10[5] = (uint)fVar20;
          puVar10[8] = (uint)fVar6;
          puVar10[9] = (uint)fVar19;
          puVar10[0xc] = (uint)fVar13;
          puVar10[0xd] = (uint)fVar20;
          puVar10[0x10] = (uint)fVar13;
          puVar10[0x11] = (uint)fVar19;
          Obj_SetMatrixDirty(puVar10,&uStack_80);
          puVar10 = puVar10 + 0xc4;
        }
        uVar2 = *(uint *)(&DAT_00342e50 + (uVar9 & 1) * 4);
        bStack_a0 = 0x40;
        if (fVar18 < 0.0) {
          iVar7 = *psVar5 * 0x210;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0x3ff;
          }
          bStack_a0 = 0x59;
          fVar18 = (float)((iVar7 >> 10) + 0x40);
        }
        psVar3 = *(short **)(psVar5 + 4);
        if (((psVar3 == (short *)0x0) || (2 < (int)*psVar3 - ((int)*psVar5 + (int)psVar5[1]))) ||
           ((3 < psVar5[1] || (3 < psVar3[1])))) {
          iVar7 = ((int)*psVar5 + (int)psVar5[1]) * 0x210;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0x3ff;
          }
          fVar13 = (float)((iVar7 >> 10) + 0x40);
          fVar6 = fVar18 + 1.0;
          if (fVar18 + 1.0 <= fVar13) {
            fVar6 = fVar13;
          }
          Obj_Reset(puVar10,3,0xffffffffffffffff);
          *puVar10 = *puVar10 | 2;
          puVar10[4] = (uint)fVar18;
          puVar10[5] = (uint)fVar17;
          puVar10[8] = (uint)fVar18;
          puVar10[9] = (uint)fVar16;
          puVar10[0xc] = (uint)fVar6;
          puVar10[0xd] = (uint)fVar17;
          puVar10[0x10] = (uint)fVar6;
          puVar10[0x11] = (uint)fVar16;
          puVar10[0xb0] = uVar2 >> 0x10 & 0xff;
          puVar10[0xb1] = uVar2 >> 8 & 0xff;
          puVar10[0xb2] = uVar2 & 0xff;
          puVar10[0xb3] = (uint)bStack_a0;
          fVar18 = -1.0;
          puVar10 = puVar10 + 0xc4;
        }
        if (((iVar12 == *(int *)(param_1 + 0xcc4)) && (uVar9 == *(uint *)(param_1 + 0xcc0))) &&
           (param_2 != 0)) {
          psVar11 = psVar5;
        }
        psVar5 = *(short **)(psVar5 + 4);
        iVar12 = iVar12 + 1;
      } while (psVar5 != (short *)0x0);
    }
    Pkt_AddPrimitives(auStack_40,*(int *)(param_1 + 0xc40),
                      ((int)puVar10 - *(int *)(param_1 + 0xc40)) / 0x310);
    uVar9 = uVar9 + 1;
    iStack_b0 = iStack_b0 + 0x14;
    iStack_c0 = iStack_c0 + 5;
    iStack_d0 = iStack_d0 + 4;
  } while ((int)uVar9 < 8);
  Pkt_Submit(auStack_40,0);
  Pkt_Init(auStack_40,2,2,0);
  Pkt_SubmitToChain(auStack_40,0x15);
  uVar9 = DAT_00342e58;
  if (psVar11 != (short *)0x0) {
    puVar10 = *(uint **)(param_1 + 0xc40);
    iVar12 = *psVar11 * 0x210;
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0x3ff;
    }
    fVar18 = (float)((iVar12 >> 10) + 0x40);
    iVar12 = psVar11[1] * 0x210;
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0x3ff;
    }
    fVar19 = fVar18 + (float)(iVar12 >> 10);
    fVar17 = fVar18 + 1.0;
    if (fVar18 + 1.0 <= fVar19) {
      fVar17 = fVar19;
    }
    fVar19 = (float)(*(int *)(param_1 + 0xcc0) * 5 + 0xf9);
    Obj_Reset(puVar10,3,0xffffffffffffffff);
    *puVar10 = *puVar10 | 2;
    puVar10[4] = (uint)fVar18;
    puVar10[5] = (uint)fVar19;
    puVar10[8] = (uint)fVar18;
    puVar10[9] = (uint)(fVar19 + 2.0);
    puVar10[0xc] = (uint)fVar17;
    puVar10[0xd] = (uint)fVar19;
    puVar10[0x10] = (uint)fVar17;
    puVar10[0x11] = (uint)(fVar19 + 2.0);
    puVar10[0xb0] = uVar9 >> 0x10 & 0xff;
    puVar10[0xb1] = uVar9 >> 8 & 0xff;
    puVar10[0xb2] = uVar9 & 0xff;
    puVar10[0xb3] = 0x59;
    Pkt_AddPrimitives(auStack_40,*(int *)(param_1 + 0xc40),
                      ((int)puVar10 + (0x310 - *(int *)(param_1 + 0xc40))) / 0x310);
  }
  if (((*(uint *)(param_1 + 0xccc) & 1) != 0) && (0 < *(short *)(param_1 + 0xcaa))) {
    iVar12 = *(int *)(param_1 + 0xce4);
    sVar1 = *(short *)(param_1 + 0xca8);
    if ((long)sVar1 < (long)iVar12) {
      fVar18 = 64.0;
    }
    else {
      fVar18 = (float)((sVar1 - iVar12) * 3 + 0x40);
    }
    iVar8 = *(int *)(param_1 + 0xc40);
    fVar20 = (float)((((int)sVar1 + (int)*(short *)(param_1 + 0xcaa)) - iVar12) * 3 + 0x40);
    fVar19 = (float)(*(int *)(param_1 + 0xcc0) * 0x14 + 0x56);
    fVar17 = fVar19 + 16.0;
    Obj_Reset(iVar8,3,0xffffffffffffffff);
    *(float *)(iVar8 + 0x10) = fVar18;
    *(float *)(iVar8 + 0x14) = fVar19;
    *(float *)(iVar8 + 0x20) = fVar18;
    *(float *)(iVar8 + 0x24) = fVar17;
    *(float *)(iVar8 + 0x30) = fVar20;
    *(float *)(iVar8 + 0x34) = fVar19;
    *(float *)(iVar8 + 0x40) = fVar20;
    *(float *)(iVar8 + 0x44) = fVar17;
    *(undefined4 *)(iVar8 + 0x2c0) = 0xa6;
    *(undefined4 *)(iVar8 + 0x2c4) = 0xc0;
    *(undefined4 *)(iVar8 + 0x2c8) = 0xbd;
    *(undefined4 *)(iVar8 + 0x2cc) = 0x80;
    Pkt_AddPrimitives(auStack_40,*(int *)(param_1 + 0xc40),
                      ((iVar8 + 0x310) - *(int *)(param_1 + 0xc40)) / 0x310);
  }
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x002ef1c0  size 0x42c
void maybe_ComposerUi_DrawPlayhead(undefined8 param_1)

{
  int iVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_70 [64];
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_10;
  
  iVar8 = (int)param_1;
  uVar6 = *(uint *)(iVar8 + 0xce4);
  uVar7 = uVar6 & 0xf;
  if (((int)uVar6 < 0) && (uVar7 != 0)) {
    uVar7 = uVar7 - 0x10;
  }
  iVar4 = (int)((ulong)((long)(int)(uVar7 * 3) << 0x24) >> 0x20);
  if ((int)(uVar7 * 0x30) < 0) {
    iVar4 = uVar7 * 0x30 + 0xf;
  }
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 + 0xf;
  }
  iVar5 = (int)uVar6 >> 4;
  iVar4 = 0x3f - (iVar4 >> 4);
  iVar9 = 0;
  do {
    iVar5 = iVar5 + 1;
    ComposerTex_Clear(&uStack_30);
    uStack_28 = 0x42600000;
    fStack_2c = (float)iVar4;
    uStack_30 = 0x12;
    iStack_24 = 0xb;
    ComposerTex_Animate(param_1,&uStack_30);
    fStack_2c = fStack_2c + 4.0;
    iStack_24 = (iVar5 / 10) % 10;
    ComposerTex_Animate(param_1,&uStack_30);
    fStack_2c = fStack_2c + 10.0;
    iStack_24 = iVar5 % 10;
    ComposerTex_Animate(param_1,&uStack_30);
    iVar1 = *(int *)(iVar8 + 0xce4);
    sVar3 = Script_GetField_89f0(*(undefined4 *)(iVar8 + 0xca4));
    if (((long)(iVar1 + -8) <= (long)sVar3) &&
       (sVar3 = Script_GetField_89f0(*(undefined4 *)(iVar8 + 0xca4)),
       (long)sVar3 <= (long)(*(int *)(iVar8 + 0xce4) + 0xb0))) {
      sVar3 = Script_GetField_89f0(*(undefined4 *)(iVar8 + 0xca4));
      iStack_24 = 0xc;
      uStack_28 = 0x42400000;
      fStack_2c = (float)(((int)sVar3 - *(int *)(iVar8 + 0xce4)) * 3 + 0x40);
      ComposerTex_Animate(param_1,&uStack_30);
    }
    iVar1 = *(int *)(iVar8 + 0xce4);
    sVar3 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4));
    if (((long)iVar1 <= (long)sVar3) &&
       (sVar3 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4)),
       (long)sVar3 <= (long)(*(int *)(iVar8 + 0xce4) + 0xb8))) {
      sVar3 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4));
      iStack_24 = 0xc;
      uStack_10 = 1;
      uStack_28 = 0x42400000;
      fStack_2c = (float)(((int)sVar3 - *(int *)(iVar8 + 0xce4)) * 3 + 0x28);
      ComposerTex_Animate(param_1,&uStack_30);
    }
    iVar9 = iVar9 + 1;
    iVar4 = iVar4 + 0x30;
  } while (iVar9 < 0xc);
  ComposerTex_SetRect(param_1,0x12,0x40,0xffffffffffffffd0,0,0);
  puVar2 = *(uint **)(iVar8 + 0xc40);
  Pkt_Init(auStack_70,2,2,0);
  Pkt_SubmitToChain(auStack_70,0x10);
  iVar4 = *(int *)(iVar8 + 0xce4) * 0x210;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x3ff;
  }
  fVar10 = (float)((iVar4 >> 10) + 0x40);
  fVar11 = fVar10 + 90.75;
  Obj_Reset(puVar2,3,0xffffffffffffffff);
  *puVar2 = *puVar2 | 2;
  puVar2[4] = (uint)fVar10;
  puVar2[5] = 0x43790000;
  puVar2[8] = (uint)fVar10;
  puVar2[9] = 0x43900000;
  puVar2[0xc] = (uint)fVar11;
  puVar2[0xd] = 0x43790000;
  puVar2[0x10] = (uint)fVar11;
  puVar2[0x11] = 0x43900000;
  puVar2[0xb0] = 0;
  puVar2[0xb1] = 0x81;
  puVar2[0xb2] = 0x98;
  puVar2[0xb3] = 0x19;
  Pkt_AddPrimitives(auStack_70,*(int *)(iVar8 + 0xc40),
                    ((int)puVar2 + (0x310 - *(int *)(iVar8 + 0xc40))) / 0x310);
  Pkt_Submit(auStack_70,0);
  return;
}

// 0x002ef5f0  size 0x414
void maybe_ComposerUi_ScrollView(int param_1)

{
  short sVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  
  if (*(byte *)(param_1 + 0xce0) < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)(param_1 + 0xce0)) {
    case 1:
      fVar5 = *(float *)(param_1 + 0xcb4);
      if (88.0 <= fVar5) {
        if (fVar5 < 936.0) {
          *(int *)(param_1 + 0xce4) = (int)(fVar5 - 88.0);
        }
        else {
          *(undefined4 *)(param_1 + 0xce4) = 0x350;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xce4) = 0;
      }
      if (((*(uint *)(param_1 + 0xccc) & 1) != 0) &&
         (iVar4 = *(int *)(param_1 + 0xce4),
         sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4)),
         (long)sVar2 <= (long)(iVar4 + 0xb0))) {
        fVar5 = *(float *)(param_1 + 0xcb4) - 88.0;
        sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
        if ((float)(sVar2 + -0xb0) < fVar5) {
          sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
          fVar5 = (float)(sVar2 + -0xb0);
        }
        if (fVar5 <= 0.0) {
          iVar4 = 0;
        }
        else {
          fVar5 = *(float *)(param_1 + 0xcb4) - 88.0;
          sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
          if ((float)(sVar2 + -0xb0) < fVar5) {
            sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
            fVar5 = (float)(sVar2 + -0xb0);
          }
          iVar4 = (int)fVar5;
        }
        *(int *)(param_1 + 0xce4) = iVar4;
      }
      if ((*(uint *)(param_1 + 0xccc) & 2) == 0) {
        return;
      }
      sVar2 = Script_GetField_89f0(*(undefined4 *)(param_1 + 0xca4));
      sVar1 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
      if ((long)(sVar2 + 0xb0) < (long)sVar1) {
        iVar4 = *(int *)(param_1 + 0xce4);
        sVar2 = Script_GetField_89f0(*(undefined4 *)(param_1 + 0xca4));
        if ((long)sVar2 < (long)iVar4) {
          return;
        }
        sVar2 = Script_GetField_89f0(*(undefined4 *)(param_1 + 0xca4));
        *(int *)(param_1 + 0xce4) = (int)sVar2;
      }
      else {
        sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
        if (sVar2 + -0xb0 < 1) {
          iVar4 = 0;
        }
        else {
          sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
          iVar4 = sVar2 + -0xb0;
        }
        *(int *)(param_1 + 0xce4) = iVar4;
      }
      break;
    case 2:
      sVar2 = Script_GetField_89f0(*(undefined4 *)(param_1 + 0xca4));
      if (sVar2 < 0x58) {
        *(undefined4 *)(param_1 + 0xce4) = 0;
      }
      else {
        sVar2 = Script_GetField_89f0(*(undefined4 *)(param_1 + 0xca4));
        if (sVar2 < 0x3a8) {
          sVar2 = Script_GetField_89f0(*(undefined4 *)(param_1 + 0xca4));
          *(int *)(param_1 + 0xce4) = sVar2 + -0x58;
        }
        else {
          *(undefined4 *)(param_1 + 0xce4) = 0x350;
        }
      }
      break;
    case 3:
      sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
      if (sVar2 < 0x58) {
        *(undefined4 *)(param_1 + 0xce4) = 0;
      }
      else {
        sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
        if (sVar2 < 0x3a8) {
          sVar2 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
          *(int *)(param_1 + 0xce4) = sVar2 + -0x58;
        }
        else {
          *(undefined4 *)(param_1 + 0xce4) = 0x350;
        }
      }
      break;
    case 4:
      lVar3 = SeqGen_GetTrackLength
                        (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                         *(undefined4 *)(param_1 + 0xcc4));
      if (lVar3 == 0) {
        return;
      }
      sVar2 = *(short *)lVar3;
      if (sVar2 < 0x58) {
        *(undefined4 *)(param_1 + 0xce4) = 0;
      }
      else if (sVar2 < 0x3a8) {
        *(int *)(param_1 + 0xce4) = sVar2 + -0x58;
      }
      else {
        *(undefined4 *)(param_1 + 0xce4) = 0x350;
      }
      break;
    case 5:
      lVar3 = SeqGen_GetTrackLength
                        (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                         *(undefined4 *)(param_1 + 0xcc4));
      if (lVar3 == 0) {
        return;
      }
      iVar4 = (int)*(short *)lVar3 + (int)((short *)lVar3)[1];
      if (iVar4 < 0x58) {
        *(undefined4 *)(param_1 + 0xce4) = 0;
      }
      else if (iVar4 < 0x3a8) {
        *(int *)(param_1 + 0xce4) = iVar4 + -0x58;
      }
      else {
        *(undefined4 *)(param_1 + 0xce4) = 0x350;
      }
    }
  }
  return;
}

// 0x002efa10  size 0x860
void Eventui_Draw_TestCourse_fa10(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  int *piVar12;
  int *piVar13;
  int iVar14;
  
  lVar10 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar10 != 0) {
    lVar10 = Nameentry_Nop_2(param_1 + 0xc44);
    if ((lVar10 == 0xe) || (lVar10 = Nameentry_Nop_2(param_1 + 0xc44), lVar10 == 0xb)) {
      uVar7 = UiRes_GetLayoutData(0x3d);
      iVar6 = UiMgr_FindLayout(0x12);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar6].layout.unk_310 = 0xffffffff;
      pUVar1[iVar6].layout.unk_31c = 0;
      pUVar1[iVar6].layout.unk_30c = 0;
      if (pUVar1[iVar6].layout.unk_31c == 0) {
        pUVar1[iVar6].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar6].layout.unk_318 = 1;
      }
      pUVar1[iVar6].layout.unk_30c = 0;
      if (pUVar1[iVar6].layout.unk_31c == 0) {
        pUVar1[iVar6].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar6].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
      pUVar1[iVar6].layout.unk_31c = uVar7;
      pUVar1[iVar6].layout.unk_318 = 1;
      uVar8 = UiRes_GetLayoutData(0x3e);
      iVar6 = UiMgr_FindLayout(0x12);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
        pUVar1[iVar6].layout.animState = 0;
      }
      else {
        pUVar1[iVar6].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
        pUVar1[iVar6].layout.animState = 0;
      }
      else {
        pUVar1[iVar6].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar8;
      pUVar1[iVar6].layout.animState = 1;
      uVar7 = UiRes_GetLayoutData(0x3f);
      iVar6 = UiMgr_FindLayout(0x13);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar6].layout.unk_310 = 0xffffffff;
      pUVar1[iVar6].layout.unk_31c = 0;
      pUVar1[iVar6].layout.unk_30c = 0;
      if (pUVar1[iVar6].layout.unk_31c == 0) {
        pUVar1[iVar6].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar6].layout.unk_318 = 1;
      }
      pUVar1[iVar6].layout.unk_30c = 0;
      if (pUVar1[iVar6].layout.unk_31c == 0) {
        pUVar1[iVar6].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar6].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
      pUVar1[iVar6].layout.unk_31c = uVar7;
      pUVar1[iVar6].layout.unk_318 = 1;
      uVar8 = UiRes_GetLayoutData(0x40);
      iVar6 = UiMgr_FindLayout(0x13);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
        pUVar1[iVar6].layout.animState = 0;
      }
      else {
        pUVar1[iVar6].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
        pUVar1[iVar6].layout.animState = 0;
      }
      else {
        pUVar1[iVar6].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar8;
      pUVar1[iVar6].layout.animState = 1;
    }
    Composer_ShowPanel(1);
  }
  lVar10 = Nameentry_Draw_Rokko(0x4c,*(undefined4 *)(param_1 + 0xd74));
  lVar11 = Nameentry_Nop_2(param_1 + 0xc44);
  if (lVar11 == 0xb) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x12,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x13,0);
    if ((lVar10 == 1 && !bVar2) && !bVar3) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  else if (lVar10 == 1) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar11 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar11 != 0) {
    if (lVar10 == 1) {
      Composer_RequestRedraw();
    }
    lVar11 = Nameentry_GetField_8_81f0(param_1 + 0xc44);
    if ((lVar11 == 7) || (lVar11 = Nameentry_GetField_8_81f0(param_1 + 0xc44), lVar11 == 0xb)) {
      lVar11 = Nameentry_Nop_2(param_1 + 0xc44);
      if (lVar11 == 0xe) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x12,1);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x13,1);
        if ((lVar10 == 3 && !bVar2) && !bVar3) {
          Composer_ConsumeRedraw(param_1 + 0xc44);
        }
      }
      else if (lVar10 == 3) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
    else {
      lVar11 = Nameentry_Nop_2(param_1 + 0xc44);
      if (lVar11 == 0xe) {
        lVar11 = Nameentry_GetField_8_81f0(param_1 + 0xc44);
        if (lVar11 == 0xe) {
          if (lVar10 == 3) {
            Composer_ConsumeRedraw(param_1 + 0xc44);
          }
        }
        else {
          bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x12,1);
          bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x13,1);
          if ((lVar10 == 3 && !bVar2) && !bVar3) {
            Composer_ConsumeRedraw(param_1 + 0xc44);
          }
        }
      }
      else {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd,1);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd,3);
        bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd,5);
        bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,1);
        if (!bVar5 && (!bVar4 && ((lVar10 == 3 && !bVar2) && !bVar3))) {
          Composer_ConsumeRedraw(param_1 + 0xc44);
        }
      }
      iVar6 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x8f,8,extraout_a3_lo);
      iVar6 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x90,8,extraout_a3_lo_00);
    }
  }
  lVar10 = Nameentry_Nop_2(param_1 + 0xc44);
  if ((lVar10 == 0xe) || (lVar10 = Nameentry_Nop_2(param_1 + 0xc44), lVar10 == 0xb)) {
    lVar10 = ComposerScene_IsChanging();
    if ((lVar10 == 0) || (lVar10 = ComposerScene_GetPage(), lVar10 != 3)) {
      iVar14 = 0;
      piVar13 = &DAT_00343350;
      piVar12 = &DAT_00343370;
      iVar6 = param_1;
      do {
        if (*(int *)(iVar6 + 0xd08) == 0) {
          iVar9 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,(long)*piVar13,8,extraout_a3_lo_02);
        }
        else {
          iVar9 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,(long)*piVar13,8,extraout_a3_lo_01);
        }
        if (*(int *)(iVar6 + 0xd28) == 0) {
          iVar9 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,(long)*piVar12,8,extraout_a3_lo_04);
        }
        else {
          iVar9 = UiMgr_FindLayout(0xc);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,(long)*piVar12,8,extraout_a3_lo_03);
        }
        iVar14 = iVar14 + 1;
        iVar6 = iVar6 + 4;
        piVar13 = piVar13 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar14 < 8);
      iVar6 = UiMgr_FindLayout(0xc);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,0x69,9,*(int *)(param_1 + 0xcc0));
      maybe_ComposerUi_DrawPlayhead(param_1);
      maybe_ComposerUi_DrawNotes(param_1,1);
      maybe_ComposerUi_DrawCursor(param_1,1);
      maybe_ComposerUi_DrawGrid(param_1,0);
    }
    iVar6 = UiMgr_FindLayout(0xc);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
    iVar6 = UiMgr_FindLayout(0x12);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
    iVar6 = UiMgr_FindLayout(0x13);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  }
  else {
    MenuWnd_DrawText(0xd,0x26,3);
    MenuWnd_DrawText(0xd,0x27,0x40);
    Eventui_Draw_Akagi_cdf0(param_1,0);
    Composer_DrawLabel(0x47,3);
    UiLayout_UpdateAnimById((UiLayout *)0x0,0);
    iVar6 = UiMgr_FindLayout(0);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
    iVar6 = UiMgr_FindLayout(0xd);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
    iVar6 = UiMgr_FindLayout(8);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  }
  return;
}

