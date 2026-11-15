// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002e8000 - 0x002ec000
#include "ghidra_types.h"

// 0x002e8380  size 0x7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Updatee8380) */

void maybe_ComposerTask_State13_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = Nameentry_GetField_4_8200(param_1);
  (*(code *)(&PTR_Eventui_Draw_TestCourse_7e90_00342bf0)[iVar1])(param_1);
  return;
}

// 0x002e8400  size 0x8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Exite8400) */

void maybe_ComposerTask_State14_NameentryGetField(void)

{
  return;
}

// 0x002e8410  size 0xc8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Entere8410) */

void maybe_ComposerTask_State12_NameentryGetField(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0);
  iVar2 = UiMgr_FindLayout(0);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar2 + 800) = 0;
  *(undefined4 *)(iVar2 + 0x310) = 0;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x310) = 0;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x318) = 1;
  *(undefined4 *)(iVar2 + 800) = uVar1;
  *(undefined4 *)(iVar2 + 0x31c) = 1;
  iVar2 = UiMgr_FindLayout();
  UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x1a,0x16,10);
  return;
}

// 0x002e84e0  size 0x388
void maybe_ComposerUi_InputInstrument(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x3c);
  uVar7 = ComposerInput_GetRepeat();
  if ((uVar7 & 0x400) == 0) {
    uVar7 = ComposerInput_GetRepeat();
    if ((uVar7 & 0x800) == 0) {
      Composer_MoveCursor(param_1 + 0x3c,1,2,1,0);
      Composer_MoveCursor(param_1 + 0x38,0,*(int *)(param_1 + 0x34) + -1,1,0);
      iVar10 = *(int *)(param_1 + 0x38);
      iVar4 = *(int *)(param_1 + 0x34);
      iVar5 = *(int *)(param_1 + 0x40);
      if (iVar5 == (iVar10 + 1) % iVar4) {
        *(int *)(param_1 + 0x40) = iVar10;
        *(undefined4 *)(param_1 + 0x44) = 2;
      }
      else if (iVar10 == (iVar5 + 6) % iVar4) {
        *(int *)(param_1 + 0x40) = (iVar5 + 1) % iVar4;
        *(undefined4 *)(param_1 + 0x44) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x40) = (*(int *)(param_1 + 0x40) + 6) % *(int *)(param_1 + 0x34);
      *(int *)(param_1 + 0x38) = (*(int *)(param_1 + 0x38) + 6) % *(int *)(param_1 + 0x34);
      Se_PlayMenuVol(7,0x60);
    }
    iVar10 = *(int *)(param_1 + 0x38);
  }
  else {
    *(int *)(param_1 + 0x40) =
         (*(int *)(param_1 + 0x40) + -6 + *(int *)(param_1 + 0x34)) % *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x38) =
         (*(int *)(param_1 + 0x38) + -6 + *(int *)(param_1 + 0x34)) % *(int *)(param_1 + 0x34);
    Se_PlayMenuVol(7,0x60);
    iVar10 = *(int *)(param_1 + 0x38);
  }
  iVar10 = *(int *)(param_1 + 0x3c) + iVar10 * 3 + 1;
  if (iVar3 + iVar2 * 3 + 1 != iVar10) {
    PreviewSnd_StopIfPlaying(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  uVar7 = ComposerInput_GetPressed();
  if ((uVar7 & 0x180) == 0) {
LAB_002e8634:
    cVar1 = *(char *)(param_1 + 0x30);
  }
  else {
    if ((iVar10 < 0x10d) && (*(int *)(iVar10 * 4 + param_1 + 0x50) != 0)) {
      uVar7 = Nameentry_GetField_8(param_1 + 0x20);
      uVar8 = SeqGen_GetPatternId(iVar10);
      if (uVar7 == (uVar8 & 0xffff)) {
        uVar6 = Nameentry_Nop(param_1 + 0x20);
        lVar9 = Composer_GetSelectedPart(uVar6);
        if (lVar9 == 0) {
          PreviewSnd_StopIfPlaying(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
          goto LAB_002e8634;
        }
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(int *)(param_1 + 0x48) = iVar10;
      goto LAB_002e8634;
    }
    Se_PlayMenuVol(8,0x60);
    cVar1 = *(char *)(param_1 + 0x30);
  }
  if (cVar1 == '\x06') {
    uVar6 = Nameentry_Nop(param_1 + 0x20);
    lVar9 = Composer_GetSelectedPart(uVar6);
    if (lVar9 != 0) {
      uVar6 = Nameentry_Nop(param_1 + 0x20);
      lVar9 = Composer_GetPartEntry(uVar6);
      if (lVar9 != 0) {
        PreviewSnd_StopIfPlaying(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
    }
  }
  else if (cVar1 == '\x05') {
    lVar9 = PreviewSnd_Play(param_1 + 0x20,0,0xffffffffffffffff,0xffffffffffffffff);
    if (lVar9 != 0) {
      uVar6 = Nameentry_Nop(param_1 + 0x20);
      lVar9 = Composer_GetSelectedPart(uVar6);
      if (lVar9 != 0) {
        uVar6 = Nameentry_Nop(param_1 + 0x20);
        lVar9 = Composer_GetPartEntry(uVar6);
        if (lVar9 != 0) goto LAB_002e8704;
      }
      *(undefined1 *)(param_1 + 0x30) = 6;
    }
  }
  else if ((cVar1 == '\x01') &&
          (lVar9 = Composer_PreviewInstrument(param_1 + 0x20,*(undefined4 *)(param_1 + 0x48)),
          lVar9 != 0)) {
    *(undefined1 *)(param_1 + 0x30) = 5;
  }
LAB_002e8704:
  uVar7 = ComposerInput_GetPressed();
  if ((uVar7 & 0x240) != 0) {
    PreviewSnd_StopIfPlaying(param_1 + 0x20);
    Se_PlayMenuVol(6,0x60);
    ComposerScene_RequestState(0);
  }
  return;
}

// 0x002e8870  size 0x4c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Updatee8870) */

void maybe_ComposerTask_State7_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Composer_UpdateInput();
  if (lVar2 != 0) {
    iVar1 = Nameentry_GetField_4_8200(param_1);
    (**(code **)(iVar1 * 4 + 0x36eed0))(param_1);
  }
  return;
}

// 0x002e88c0  size 0x8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Exite88c0) */

void maybe_ComposerTask_State8_NameentryGetField(int param_1)

{
  PreviewSnd_StopAndClear(param_1 + 0x20);
  return;
}

// 0x002e88d0  size 0x10c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Entere88d0) */

void maybe_ComposerTask_State6_NameentryGetField(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  Composer_InitPanel(param_1,0);
  PreviewSnd_Init(param_1 + 0x20,9);
  uVar1 = Script_Nop();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x5a;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar2 = maybe_Race_GetMode();
  iVar5 = 0;
  iVar4 = param_1;
  do {
    iVar3 = SeqGen_GetPatternEntry(iVar5);
    if (*(int *)(iVar3 + 4) == 0) {
      if (*(int *)(iVar2 + 0x9660) == 0) {
        *(undefined4 *)(iVar4 + 0x50) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x50) = 1;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      }
      iVar2 = iVar2 + 4;
    }
    else {
      *(undefined4 *)(iVar4 + 0x50) = 1;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x10d);
  return;
}

// 0x002e89f0  size 0x194
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ComposerUi_AnimateNameB(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x44) == 0) {
    lVar2 = Nameentry_GetField_14();
    if ((lVar2 == 0) && (lVar2 = Nameentry_GetField_18(param_1), lVar2 == 0)) {
      ComposerInput_SetMode(1);
      MenuWnd_SetItemState
                (0xb,*(undefined4 *)
                      (*(int *)(iVar1 + 0x3c) * 0x10 +
                      ((*(int *)(iVar1 + 0x34) + (*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x40)))
                      % *(int *)(iVar1 + 0x34)) * 0x30 + 0x342c24),0,0);
    }
  }
  else {
    ComposerInput_SetMode(0);
    if (*(int *)(iVar1 + 0x44) == 1) {
      lVar2 = UiLayout_UpdateAnimById(0xb,2);
      if (lVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x44) = 0;
        iVar1 = UiMgr_FindLayout(0xb);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x338) = 0;
        if (*(int *)(iVar1 + 0x348) == 0) {
          *(undefined4 *)(iVar1 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x344) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      lVar2 = UiLayout_UpdateAnimById(0xb,3);
      if (lVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x44) = 0;
        iVar1 = UiMgr_FindLayout(0xb);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x34c) = 0;
        if (*(int *)(iVar1 + 0x35c) == 0) {
          *(undefined4 *)(iVar1 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x358) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  return;
}

// 0x002e8b90  size 0x9a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Akagi_8b90(undefined8 param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  
  lVar9 = Composer_ConsumeConfirm();
  if (lVar9 != 0) {
    uVar6 = UiRes_GetLayoutData(0x1f);
    iVar7 = UiMgr_FindLayout(10);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar6;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar6 = UiRes_GetLayoutData(0x20);
    iVar7 = UiMgr_FindLayout(10);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar6;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    uVar6 = UiRes_GetLayoutData(0x21);
    iVar7 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar6;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar6 = UiRes_GetLayoutData(0x22);
    iVar7 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar6;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    uVar6 = UiRes_GetLayoutData(0x23);
    iVar7 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x348) = 0;
    *(undefined4 *)(iVar7 + 0x338) = 0;
    if (*(int *)(iVar7 + 0x348) == 0) {
      *(undefined4 *)(iVar7 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    *(undefined4 *)(iVar7 + 0x338) = 0;
    if (*(int *)(iVar7 + 0x348) == 0) {
      *(undefined4 *)(iVar7 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    *(undefined4 *)(iVar7 + 0x340) = 0;
    *(undefined4 *)(iVar7 + 0x348) = uVar6;
    *(undefined4 *)(iVar7 + 0x344) = 1;
    uVar6 = UiRes_GetLayoutData(0x24);
    iVar7 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x35c) = 0;
    *(undefined4 *)(iVar7 + 0x34c) = 0;
    if (*(int *)(iVar7 + 0x35c) == 0) {
      *(undefined4 *)(iVar7 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x358) = 1;
    }
    *(undefined4 *)(iVar7 + 0x34c) = 0;
    if (*(int *)(iVar7 + 0x35c) == 0) {
      *(undefined4 *)(iVar7 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x358) = 1;
    }
    *(undefined4 *)(iVar7 + 0x354) = 0;
    *(undefined4 *)(iVar7 + 0x35c) = uVar6;
    *(undefined4 *)(iVar7 + 0x358) = 1;
    iVar8 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr;
    uVar11 = UiRes_GetLayoutData(0x42);
    UiLayout_IsAnimDone(iVar7 + iVar8 * 0x4f4 + 4,5,0x9e,uVar11,1);
    iVar8 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr;
    uVar11 = UiRes_GetLayoutData(0x43);
    UiLayout_IsAnimDone(iVar7 + iVar8 * 0x4f4 + 4,6,0x9f,uVar11,1);
    Menu_ClearSlot(0);
  }
  lVar9 = UiLayout_UpdateAnimById(10,0);
  lVar10 = UiLayout_UpdateAnimById(0xb,0);
  if (lVar9 == 0 && lVar10 == 0) {
    Composer_ClearDirty(param_1);
  }
  lVar9 = Nameentry_GetField_18(param_1);
  if (lVar9 != 0) {
    lVar9 = UiLayout_UpdateAnimById(10,1);
    lVar10 = UiLayout_UpdateAnimById(0xb,1);
    if (lVar9 == 0 && lVar10 == 0) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  lVar9 = ComposerScene_IsChanging();
  if (lVar9 == 0) {
    UiLayout_UpdateAnimById(0xb,5);
    UiLayout_UpdateAnimById(0xb,6);
  }
  else {
    iVar7 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x9e,8);
    iVar7 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x9f,8);
  }
  maybe_ComposerUi_AnimateNameB(param_1);
  iVar7 = (int)param_1;
  iVar8 = *(int *)(iVar7 + 0x3c) + *(int *)(iVar7 + 0x38) * 3 + 1;
  MenuWnd_DrawText(10,0x13,2);
  MenuWnd_DrawTextId(10,0xd,1,0x38);
  if ((iVar8 == 0) || (0x10c < iVar8)) {
    MenuWnd_DrawText(10,0xe,6);
  }
  else {
    iVar3 = SeqGen_GetPatternEntry(iVar8);
    if (*(int *)(iVar3 + 4) == 0) {
      MenuWnd_DrawText(10,0xe,0x3e);
    }
    else {
      MenuWnd_DrawTextId(10,0xe,4,0x3d);
    }
  }
  MenuWnd_DrawTextId(10,0xf,1,0x3b);
  if (((iVar8 == 0) || (0x10c < iVar8)) || (*(int *)(iVar8 * 4 + iVar7 + 0x50) == 0)) {
    MenuWnd_DrawText(10,0x10,6);
    iVar3 = *(int *)(iVar7 + 0x4c);
  }
  else {
    iVar3 = SeqGen_GetPatternEntry(iVar8);
    MenuWnd_DrawLabel(10,0x10,5,0,*(undefined1 *)(iVar3 + 8));
    iVar3 = *(int *)(iVar7 + 0x4c);
  }
  MenuWnd_DrawLabel(10,0x11,8,iVar3 + -1,0x10c);
  Profile_Get(0);
  iVar3 = 0;
  puVar15 = &DAT_00342c20;
  do {
    iVar14 = 0;
    puVar12 = puVar15;
    do {
      if ((*(int *)(iVar7 + 0x44) == 1) && (iVar3 == 6)) {
        iVar13 = (*(int *)(iVar7 + 0x40) + -1 + *(int *)(iVar7 + 0x34)) % *(int *)(iVar7 + 0x34);
      }
      else {
        iVar13 = (*(int *)(iVar7 + 0x40) + iVar3) % *(int *)(iVar7 + 0x34);
      }
      iVar13 = iVar14 + iVar13 * 3;
      if (iVar13 + 1 < 0x10d) {
        MenuWnd_DrawLabel(0xb,puVar12[2],0xb,0);
        if (*(int *)(iVar7 + iVar13 * 4 + 0x54) == 0) {
          iVar13 = UiMgr_FindLayout(0xb);
          UiElem_SetPropInt(*_g_UiMgr + iVar13 * 0x4f4 + 4,*puVar12,9,0);
          MenuWnd_DrawText(0xb,puVar12[3],6);
        }
        else {
          iVar4 = UiMgr_FindLayout(0xb);
          iVar1 = *_g_UiMgr;
          iVar5 = SeqGen_GetPatternEntry(iVar13 + 1);
          maybe_ComposerUi_SetGridCell
                    (iVar1 + iVar4 * 0x4f4 + 4,*puVar12,9,*(undefined1 *)(iVar5 + 0xb));
          uVar11 = Menuscr_FieldPtr_52(iVar13 + 1);
          MenuWnd_DrawText(0xb,puVar12[3],uVar11);
        }
      }
      else {
        iVar13 = UiMgr_FindLayout(0xb);
        UiElem_SetPropInt(*_g_UiMgr + iVar13 * 0x4f4 + 4,*puVar12,9,0);
        MenuWnd_DrawText(0xb,puVar12[2],6);
      }
      iVar14 = iVar14 + 1;
      puVar12 = puVar12 + 4;
    } while (iVar14 < 3);
    iVar3 = iVar3 + 1;
    puVar15 = puVar15 + 0xc;
  } while (iVar3 < 7);
  MenuWnd_DrawLabel(0xb,0x9c,0x35,5,0);
  MenuWnd_DrawLabel(0xb,0xa0,0x36,5,0);
  uVar2 = Nameentry_Nop(iVar7 + 0x20);
  lVar9 = Composer_GetSelectedPart(uVar2);
  if (lVar9 != 0) {
    uVar2 = Nameentry_Nop(iVar7 + 0x20);
    lVar9 = Composer_GetPartEntry(uVar2);
    if (lVar9 != 0) {
      iVar3 = UiMgr_FindLayout(1);
      UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x1a,0x16,0xd);
      goto LAB_002e8f80;
    }
  }
  iVar3 = UiMgr_FindLayout(1);
  UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x1a,0x16,0xc);
LAB_002e8f80:
  if ((iVar8 == 0) || (0x10c < iVar8)) {
    Composer_DrawLabel(0x34,2);
  }
  else {
    Composer_DrawLabel(0x34,3);
  }
  UiLayout_UpdateAnimById(0,0);
  iVar8 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  iVar8 = UiMgr_FindLayout(10);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  MenuNum_CountUp_Event(0xb,3,4,200,*(undefined4 *)(iVar7 + 0x34),6,*(undefined4 *)(iVar7 + 0x40));
  iVar7 = UiMgr_FindLayout(0xb);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  return;
}

// 0x002e9540  size 0x3c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Updatee9540) */

void maybe_ComposerTask_State19_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = Nameentry_GetField_4_8200();
  (**(code **)(iVar1 * 4 + 0x36eed4))(param_1);
  return;
}

// 0x002e9580  size 0x8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Exite9580) */

void maybe_ComposerTask_State20_NameentryGetField(void)

{
  return;
}

// 0x002e9590  size 0x104
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Entere9590) */

void maybe_ComposerTask_State18_NameentryGetField(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0);
  iVar2 = UiMgr_FindLayout(0);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
  *(undefined4 *)(iVar2 + 800) = 0;
  *(undefined4 *)(iVar2 + 0x310) = 0;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x310) = 0;
  if (*(int *)(iVar2 + 800) == 0) {
    *(undefined4 *)(iVar2 + 0x31c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x318) = 1;
  *(undefined4 *)(iVar2 + 800) = uVar1;
  *(undefined4 *)(iVar2 + 0x31c) = 1;
  iVar2 = UiMgr_FindLayout(0xb);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x9e,8);
  iVar2 = UiMgr_FindLayout(0xb);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x9f,8);
  return;
}

// 0x002e96a0  size 0x134
/* WARNING: Removing unreachable block (ram,0x002e9710) */
/* WARNING: Removing unreachable block (ram,0x002e9720) */
/* WARNING: Removing unreachable block (ram,0x002e9718) */
/* WARNING: Removing unreachable block (ram,0x002e9744) */

void maybe_ComposerUi_SetGridCell(undefined8 param_1,undefined8 param_2,byte param_3,ulong param_4)

{
  bool bVar1;
  uint *puVar2;
  float *pfVar3;
  float fVar4;
  
  if (param_3 < 0x49) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case 0:
      bVar1 = false;
      break;
    case 1:
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((long)param_4 < 0) {
      fVar4 = (float)(param_4 & 0xffffffff);
    }
    else {
      fVar4 = (float)(int)(uint)param_4;
    }
    pfVar3 = (float *)UiElem_GetPropPtr(param_1);
    *pfVar3 = fVar4;
  }
  else {
    puVar2 = (uint *)UiElem_GetPropPtr(param_1);
    *puVar2 = (uint)param_4 & 0xff;
  }
  if (param_3 == 10) {
    UiElem_MarkDirty(param_1);
  }
  return;
}

// 0x002e97e0  size 0x204
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ComposerUi_PlayNote(float param_1,float *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2[1] != 0.0) || (param_3 != 0)) {
    uVar4 = (uint)((param_1 - 0.083333336) + 32.0);
    uVar3 = uVar4 & 0xf;
    if (((int)uVar4 < 0) && (uVar3 != 0)) {
      uVar3 = uVar3 - 0x10;
    }
    if (uVar3 == 0) {
      uVar5 = (uint)((*param_2 - 0.083333336) + 32.0);
      uVar3 = uVar5 & 0xf;
      if (((int)uVar5 < 0) && (uVar3 != 0)) {
        uVar3 = uVar3 - 0x10;
      }
      if (uVar3 != 0) {
        iVar1 = _g_IopSe + (int)param_2[2] * 0x50;
        Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0x3f0ab0);
        lVar2 = Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0xc0);
        if (lVar2 == 0) {
          Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0x7f3c90);
        }
        goto LAB_002e9918;
      }
    }
    uVar3 = uVar4 & 3;
    if (((int)uVar4 < 0) && (uVar3 != 0)) {
      uVar3 = uVar3 - 4;
    }
    if (uVar3 == 0) {
      uVar4 = (uint)((*param_2 - 0.083333336) + 32.0);
      uVar3 = uVar4 & 3;
      if (((int)uVar4 < 0) && (uVar3 != 0)) {
        uVar3 = uVar3 - 4;
      }
      if (uVar3 != 0) {
        iVar1 = _g_IopSe + (int)param_2[2] * 0x50;
        Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0x3f0ab0);
        lVar2 = Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0xc0);
        if (lVar2 == 0) {
          Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0x7f3d90);
        }
      }
    }
  }
LAB_002e9918:
  *param_2 = param_1;
  return;
}

// 0x002e99f0  size 0x13c
void maybe_ComposerUi_UpdatePlayback(int param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xd68) < 1) {
    maybe_ComposerUi_ClearTracks();
    iVar6 = 0;
    iVar5 = 0;
    iVar4 = 1;
    iVar3 = param_1;
    do {
      lVar2 = SeqGen_ComputeDuration(*(undefined4 *)(param_1 + 0xca4),iVar6);
      if (lVar2 != 0) {
        puVar1 = (undefined1 *)Script_ElemPtr_1d6_xda8(*(undefined4 *)(param_1 + 0xca4),iVar6);
        PreviewSnd_QueuePause(param_2,iVar5,*puVar1);
        PreviewSnd_QueuePause(param_2,iVar4,puVar1[1]);
        if (*(int *)(iVar3 + 0xd48) == 0) {
          PreviewSnd_QueueStop(param_2,iVar5,0);
          PreviewSnd_QueueStop(param_2,iVar4,0);
        }
        else {
          PreviewSnd_QueueStop(param_2,iVar5,0x7f);
          PreviewSnd_QueueStop(param_2,iVar4,0x7f);
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 2;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 8);
    *(undefined4 *)(param_1 + 0xd68) = 2;
  }
  return;
}

// 0x002e9b30  size 0x90
void maybe_ComposerUi_ClearTracks(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 0xd28) != 0) {
      bVar1 = true;
      break;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 8);
  iVar2 = 0;
  do {
    if ((*(int *)(param_1 + 0xd08) != 0) || ((bVar1 && (*(int *)(param_1 + 0xd28) == 0)))) {
      *(undefined4 *)(param_1 + 0xd48) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xd48) = 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 8);
  return;
}

// 0x002e9bc0  size 0x704
void maybe_ComposerUi_InputEdit(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = ComposerInput_GetHeld();
  if ((uVar5 & 0x2000) == 0) {
    *(undefined4 *)(param_1 + 0xcd4) = 0;
    *(undefined4 *)(param_1 + 0xcd8) = 0;
    *(undefined4 *)(param_1 + 0xcdc) = 0;
    uVar5 = ComposerInput_GetHeld();
    if (((uVar5 & 0x80) == 0) &&
       ((uVar5 = ComposerInput_GetPressed(), (uVar5 & 4) != 0 ||
        (uVar5 = ComposerInput_GetPressed(), (uVar5 & 8) != 0)))) {
      *(undefined1 *)(param_1 + 0xce0) = 0;
      lVar6 = SeqGen_GetTrackLength
                        (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                         *(undefined4 *)(param_1 + 0xcc4));
      if (lVar6 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)*(short *)lVar6;
      }
      uVar5 = ComposerInput_GetPressed();
      if ((uVar5 & 4) == 0) {
        uVar5 = ComposerInput_GetPressed();
        if ((uVar5 & 8) != 0) {
          iVar8 = *(int *)(param_1 + 0xcc0) + 1;
          if (iVar8 < 0) {
            iVar8 = 7;
          }
          else if (7 < iVar8) {
            iVar8 = 0;
          }
          *(int *)(param_1 + 0xcc0) = iVar8;
        }
      }
      else {
        iVar8 = *(int *)(param_1 + 0xcc0) + -1;
        if (iVar8 < 0) {
          iVar8 = 7;
        }
        else if (7 < iVar8) {
          iVar8 = 0;
        }
        *(int *)(param_1 + 0xcc0) = iVar8;
      }
      Se_PlayMenuVol(7,0x60);
      psVar4 = (short *)SeqGen_GetTrackLength
                                  (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0)
                                   ,0);
      if (psVar4 == (short *)0x0) {
        *(undefined4 *)(param_1 + 0xcc4) = 0xffffffff;
      }
      else {
        iVar8 = 0;
        lVar6 = 0x400;
        if (psVar4 != (short *)0x0) {
          do {
            iVar9 = *psVar4 - iVar10;
            lVar7 = abs(iVar9);
            if (lVar7 < lVar6) {
              *(int *)(param_1 + 0xcc4) = iVar8;
              lVar6 = abs(iVar9);
            }
            if (-1 < iVar9) goto LAB_002ea03c;
            psVar4 = *(short **)(psVar4 + 4);
            iVar8 = iVar8 + 1;
          } while (psVar4 != (short *)0x0);
          uVar2 = *(undefined4 *)(param_1 + 0xcc0);
          goto LAB_002ea040;
        }
      }
    }
LAB_002ea03c:
    uVar2 = *(undefined4 *)(param_1 + 0xcc0);
LAB_002ea040:
    lVar6 = Script_GetElem_2f4_xda8(*(undefined4 *)(param_1 + 0xca4),uVar2);
    if (0 < lVar6) {
      uVar5 = ComposerInput_GetRepeat();
      if ((uVar5 & 0x10) == 0) {
        uVar5 = ComposerInput_GetRepeat();
        if ((uVar5 & 0x20) != 0) {
          *(undefined1 *)(param_1 + 0xce0) = 0;
          iVar10 = *(int *)(param_1 + 0xcc4);
          iVar8 = iVar10 + 1;
          if (iVar8 < 0) {
            iVar8 = Script_GetElem_2f4_xda8
                              (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
            iVar8 = iVar8 + -1;
          }
          else {
            iVar9 = Script_GetElem_2f4_xda8
                              (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
            if (iVar9 + -1 < iVar8) {
              iVar8 = 0;
            }
          }
          *(int *)(param_1 + 0xcc4) = iVar8;
          if (*(int *)(param_1 + 0xcc4) != iVar10) {
            Se_PlayMenuVol(7,0x60);
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xce0) = 0;
        iVar10 = *(int *)(param_1 + 0xcc4);
        iVar8 = iVar10 + -1;
        if (iVar8 < 0) {
          iVar8 = Script_GetElem_2f4_xda8
                            (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
          iVar8 = iVar8 + -1;
        }
        else {
          iVar9 = Script_GetElem_2f4_xda8
                            (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
          if (iVar9 + -1 < iVar8) {
            iVar8 = 0;
          }
        }
        *(int *)(param_1 + 0xcc4) = iVar8;
        if (*(int *)(param_1 + 0xcc4) != iVar10) {
          Se_PlayMenuVol(7,0x60);
        }
      }
    }
    return;
  }
  uVar5 = ComposerInput_GetHeld();
  if ((uVar5 & 0x10) == 0) {
    uVar5 = ComposerInput_GetHeld();
    if ((uVar5 & 0x20) == 0) {
      *(undefined4 *)(param_1 + 0xcd4) = 0;
    }
    else {
      uVar5 = ComposerInput_GetRepeat();
      if ((uVar5 & 0x20) == 0) {
LAB_002e9f14:
        iVar10 = *(int *)(param_1 + 0xcd4);
      }
      else {
        *(undefined1 *)(param_1 + 0xce0) = 4;
        lVar6 = SeqGen_GetTrackLength
                          (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                           *(undefined4 *)(param_1 + 0xcc4));
        if (lVar6 == 0) goto LAB_002e9f14;
        psVar4 = (short *)lVar6;
        if (*(short **)(psVar4 + 4) == (short *)0x0) {
          iVar10 = 0x400;
        }
        else {
          iVar10 = (int)**(short **)(psVar4 + 4);
        }
        sVar1 = *psVar4;
        iVar9 = (int)sVar1 + *(int *)(param_1 + 0xcd4) / 0x3c + 1;
        iVar8 = iVar10 - psVar4[1];
        if (iVar9 <= iVar10 - psVar4[1]) {
          iVar8 = iVar9;
        }
        *psVar4 = (short)iVar8;
        if (*psVar4 == sVar1) {
          Se_PlayMenuVol(8,0x60);
          goto LAB_002e9f14;
        }
        Se_PlayMenuVol(7,0x60);
        iVar10 = *(int *)(param_1 + 0xcd4);
      }
      *(int *)(param_1 + 0xcd4) = iVar10 + 1;
    }
  }
  else {
    uVar5 = ComposerInput_GetRepeat();
    if ((uVar5 & 0x10) == 0) {
LAB_002e9cc8:
      iVar10 = *(int *)(param_1 + 0xcd4);
    }
    else {
      *(undefined1 *)(param_1 + 0xce0) = 4;
      lVar6 = SeqGen_GetTrackLength
                        (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                         *(undefined4 *)(param_1 + 0xcc4));
      if (lVar6 == 0) goto LAB_002e9cc8;
      psVar3 = (short *)lVar6;
      psVar4 = *(short **)(psVar3 + 2);
      if (psVar4 == (short *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)*psVar4 + (int)psVar4[1];
      }
      sVar1 = *psVar3;
      iVar8 = (int)sVar1 - (*(int *)(param_1 + 0xcd4) / 0x3c + 1);
      if (iVar10 <= iVar8) {
        iVar10 = iVar8;
      }
      *psVar3 = (short)iVar10;
      if (*psVar3 == sVar1) {
        Se_PlayMenuVol(8,0x60);
        goto LAB_002e9cc8;
      }
      Se_PlayMenuVol(7,0x60);
      iVar10 = *(int *)(param_1 + 0xcd4);
    }
    *(int *)(param_1 + 0xcd4) = iVar10 + 1;
  }
  uVar5 = ComposerInput_GetHeld();
  if ((uVar5 & 0x400) == 0) {
    uVar5 = ComposerInput_GetHeld();
    if ((uVar5 & 0x800) == 0) {
      *(undefined4 *)(param_1 + 0xcd8) = 0;
      *(undefined4 *)(param_1 + 0xcdc) = 0;
      goto LAB_002e9dd8;
    }
    uVar5 = ComposerInput_GetRepeat();
    if ((uVar5 & 0x800) != 0) {
      *(undefined1 *)(param_1 + 0xce0) = 5;
      lVar6 = SeqGen_GetTrackLength
                        (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                         *(undefined4 *)(param_1 + 0xcc4));
      if (lVar6 != 0) {
        psVar4 = (short *)lVar6;
        if (*(short **)(psVar4 + 4) == (short *)0x0) {
          iVar10 = 0x400;
        }
        else {
          iVar10 = (int)**(short **)(psVar4 + 4);
        }
        sVar1 = psVar4[1];
        iVar9 = (int)sVar1 + *(int *)(param_1 + 0xcdc) / 0x3c + 1;
        iVar8 = iVar10 - *psVar4;
        if (iVar9 <= iVar10 - *psVar4) {
          iVar8 = iVar9;
        }
        psVar4[1] = (short)iVar8;
        if (psVar4[1] != sVar1) {
          Se_PlayMenuVol(7,0x60);
          *(undefined4 *)(param_1 + 0xcd8) = 0;
          goto LAB_002e9fe8;
        }
        Se_PlayMenuVol(8,0x60);
      }
      *(undefined4 *)(param_1 + 0xcd8) = 0;
    }
LAB_002e9fe8:
    *(int *)(param_1 + 0xcdc) = *(int *)(param_1 + 0xcdc) + 1;
    goto LAB_002e9dd8;
  }
  uVar5 = ComposerInput_GetRepeat();
  if ((uVar5 & 0x400) != 0) {
    *(undefined1 *)(param_1 + 0xce0) = 5;
    lVar6 = SeqGen_GetTrackLength
                      (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                       *(undefined4 *)(param_1 + 0xcc4));
    if (lVar6 != 0) {
      iVar10 = (int)lVar6;
      sVar1 = *(short *)(iVar10 + 2);
      iVar8 = (int)sVar1 - (*(int *)(param_1 + 0xcd8) / 0x3c + 1);
      if (iVar8 < 1) {
        iVar8 = 1;
      }
      *(short *)(iVar10 + 2) = (short)iVar8;
      if (*(short *)(iVar10 + 2) != sVar1) {
        Se_PlayMenuVol(7,0x60);
        *(undefined4 *)(param_1 + 0xcdc) = 0;
        goto LAB_002e9dac;
      }
      Se_PlayMenuVol(8,0x60);
    }
    *(undefined4 *)(param_1 + 0xcdc) = 0;
  }
LAB_002e9dac:
  *(int *)(param_1 + 0xcd8) = *(int *)(param_1 + 0xcd8) + 1;
LAB_002e9dd8:
  uVar5 = ComposerInput_GetPressed();
  if ((uVar5 & 0x100) == 0) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0xcc4);
  if (iVar10 < 0) {
    return;
  }
  iVar8 = Script_GetElem_2f4_xda8(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0))
  ;
  if (iVar8 <= iVar10) {
    return;
  }
  SeqGen_SetPartPattern(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),iVar10);
  iVar10 = *(int *)(param_1 + 0xcc4);
  iVar8 = Script_GetElem_2f4_xda8(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0))
  ;
  if (iVar10 < iVar8) {
    return;
  }
  *(int *)(param_1 + 0xcc4) = *(int *)(param_1 + 0xcc4) + -1;
  return;
}

// 0x002ea2d0  size 0x3b8
void maybe_ComposerUi_InputRange(int param_1)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  
  uVar3 = ComposerInput_GetHeld();
  if ((uVar3 & 0x2000) == 0) {
    uVar3 = ComposerInput_GetRepeat();
    if ((uVar3 & 0x400) != 0) {
      fVar8 = *(float *)(param_1 + 0xcb4);
      *(undefined1 *)(param_1 + 0xce0) = 1;
      uVar6 = (uint)*(float *)(param_1 + 0xcb4);
      uVar2 = uVar6 & 0xf;
      if (((int)uVar6 < 0) && (uVar2 != 0)) {
        uVar2 = uVar2 - 0x10;
      }
      if (uVar2 == 0) {
        *(float *)(param_1 + 0xcb4) = *(float *)(param_1 + 0xcb4) - 16.0;
      }
      else {
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0xf;
        }
        *(float *)(param_1 + 0xcb4) = (float)(((int)uVar6 >> 4) << 4);
      }
      fVar5 = *(float *)(param_1 + 0xcb4);
      if (0.0 <= fVar5) {
        if (1024.0 < fVar5) {
          fVar5 = 1024.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      *(float *)(param_1 + 0xcb4) = fVar5;
      if (fVar8 == fVar5) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
    uVar3 = ComposerInput_GetRepeat();
    if ((uVar3 & 0x800) != 0) {
      fVar8 = *(float *)(param_1 + 0xcb4);
      *(undefined1 *)(param_1 + 0xce0) = 1;
      uVar6 = (uint)*(float *)(param_1 + 0xcb4);
      uVar2 = uVar6 & 0xf;
      if (((int)uVar6 < 0) && (uVar2 != 0)) {
        uVar2 = uVar2 - 0x10;
      }
      if (uVar2 == 0) {
        *(float *)(param_1 + 0xcb4) = *(float *)(param_1 + 0xcb4) + 16.0;
      }
      else {
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0xf;
        }
        *(float *)(param_1 + 0xcb4) = (float)(((int)uVar6 >> 4) * 0x10 + 0x10);
      }
      fVar5 = *(float *)(param_1 + 0xcb4);
      if (0.0 <= fVar5) {
        if (1024.0 < fVar5) {
          fVar5 = 1024.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      *(float *)(param_1 + 0xcb4) = fVar5;
      if (fVar8 == fVar5) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
  }
  else {
    uVar3 = ComposerInput_GetRepeat();
    if ((uVar3 & 0x100000) == 0) {
      uVar3 = ComposerInput_GetRepeat();
      if ((uVar3 & 0x200000) != 0) {
        *(undefined1 *)(param_1 + 0xce0) = 2;
        sVar1 = Script_GetField_89f0(*(undefined4 *)(param_1 + 0xca4));
        lVar4 = SeqGen_IsValidEnd(*(undefined4 *)(param_1 + 0xca4),sVar1 + 0x10);
        if (lVar4 == 0) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xce0) = 2;
      sVar1 = Script_GetField_89f0(*(undefined4 *)(param_1 + 0xca4));
      lVar4 = SeqGen_IsValidEnd(*(undefined4 *)(param_1 + 0xca4),sVar1 + -0x10);
      if (lVar4 == 0) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
    uVar3 = ComposerInput_GetRepeat();
    if ((uVar3 & 0x10000) == 0) {
      uVar3 = ComposerInput_GetRepeat();
      if ((uVar3 & 0x20000) != 0) {
        *(undefined1 *)(param_1 + 0xce0) = 3;
        sVar1 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
        lVar4 = SeqGen_IsValidStart(*(undefined4 *)(param_1 + 0xca4),sVar1 + 0x10);
        if (lVar4 != 0) {
          Se_PlayMenuVol(7,0x60);
          uVar7 = *(undefined4 *)(param_1 + 0xcb4);
          goto LAB_002ea570;
        }
        Se_PlayMenuVol(8,0x60);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xce0) = 3;
      sVar1 = Script_GetField_89f2(*(undefined4 *)(param_1 + 0xca4));
      lVar4 = SeqGen_IsValidStart(*(undefined4 *)(param_1 + 0xca4),sVar1 + -0x10);
      if (lVar4 == 0) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
  }
  uVar7 = *(undefined4 *)(param_1 + 0xcb4);
LAB_002ea570:
  *(undefined4 *)(param_1 + 0xcb8) = uVar7;
  return;
}

// 0x002ea690  size 0x124
/* entry 15 of state table 0x342d70 used by ScrNameentryGetField48200_Updateec910 */

void maybe_ComposerTask_State10_Sub15(int param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  Composer_MoveCursor(param_1 + 0xd74,0,1,1,0);
  uVar3 = ComposerInput_GetPressed();
  if ((uVar3 & 0x180) == 0) {
    uVar3 = ComposerInput_GetPressed();
    if ((uVar3 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      lVar2 = Nameentry_Nop_2(param_1 + 0xc44);
      if (lVar2 == 7) {
        Nameentry_SetField_8(param_1 + 0xc44);
      }
      else {
        Nameentry_SetField_8(param_1 + 0xc44,0xe);
      }
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      ComposerScene_RequestState(0);
    }
    else {
      pcVar1 = (char *)Script_FieldPtr_89f6(*(undefined4 *)(param_1 + 0xca4));
      if (*pcVar1 == '\0') {
        Nameentry_SetField_8(param_1 + 0xc44,0xb);
      }
      else {
        Nameentry_SetField_8(param_1 + 0xc44,7);
      }
    }
  }
  return;
}

// 0x002ea7c0  size 0x100
/* state of maybe_ComposerTask; on-screen text/callee hint "iptFieldPtr" (was
   ScrScriptFieldPtr89f6_Exit) */

void maybe_ComposerTask_State10_State14_iptFieldPtr(int param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 0;
  }
  Composer_MoveCursor(param_1 + 0xd74,0,1,1,0);
  uVar3 = ComposerInput_GetPressed();
  if ((uVar3 & 0x180) == 0) {
    uVar3 = ComposerInput_GetPressed();
    if ((uVar3 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      Nameentry_SetField_8(param_1 + 0xc44,0xd);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      pcVar1 = (char *)Script_FieldPtr_89f6(*(undefined4 *)(param_1 + 0xca4));
      if (*pcVar1 == '\0') {
        Nameentry_SetField_8(param_1 + 0xc44,0xb);
      }
      else {
        Nameentry_SetField_8(param_1 + 0xc44,7);
      }
    }
    else {
      Nameentry_SetField_8(param_1 + 0xc44,0xf);
    }
  }
  return;
}

// 0x002ea8c0  size 0x194
/* state of maybe_ComposerTask; on-screen text/callee hint "iptFieldPtr" (was
   ScrScriptFieldPtr89f6_Update) */

void maybe_ComposerTask_State10_State13_iptFieldPtr(int param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = Composer_ConsumeCancel(param_1 + 0xc44);
  if ((lVar3 != 0) && (lVar3 = Nameentry_Nop_2(param_1 + 0xc44), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(param_1 + 0xcb4);
  }
  Composer_MoveCursor(param_1 + 0xd6c,0,2,1,0);
  uVar4 = ComposerInput_GetPressed();
  if ((uVar4 & 0x180) == 0) {
    uVar4 = ComposerInput_GetPressed();
    if ((uVar4 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      Nameentry_SetField_8(param_1 + 0xc44,0);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    iVar1 = *(int *)(param_1 + 0xd6c);
    if (iVar1 == 2) {
      pcVar2 = (char *)Script_FieldPtr_89f6(*(undefined4 *)(param_1 + 0xca4));
      if (((*pcVar2 == '\0') &&
          (lVar3 = SeqGen_FindNextPart(*(undefined4 *)(param_1 + 0xca4)), lVar3 == 0)) &&
         (lVar3 = SeqGen_FindFirstActivePart(*(undefined4 *)(param_1 + 0xca4)), lVar3 == 0)) {
        ComposerScene_RequestState(0);
      }
      else {
        Nameentry_SetField_8(param_1 + 0xc44,0xe);
      }
    }
    else if (iVar1 == 1) {
      Nameentry_SetField_8(param_1 + 0xc44,4);
    }
    else if (iVar1 == 0) {
      pcVar2 = (char *)Script_FieldPtr_89f6(*(undefined4 *)(param_1 + 0xca4));
      if (*pcVar2 == '\0') {
        Nameentry_SetField_8(param_1 + 0xc44,0xb);
      }
      else {
        Nameentry_SetField_8(param_1 + 0xc44,7);
      }
    }
  }
  return;
}

// 0x002eaa60  size 0xe8
/* state of maybe_ComposerTask; on-screen text/callee hint "iptFieldPtr" (was
   ScrScriptFieldPtr89f6_Enter) */

void maybe_ComposerTask_State10_State12_iptFieldPtr(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  Composer_MoveCursor(param_1 + 0xd74,0,1,1,0);
  uVar2 = ComposerInput_GetPressed();
  if ((uVar2 & 0x180) == 0) {
    uVar2 = ComposerInput_GetPressed();
    if ((uVar2 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      Nameentry_SetField_8(param_1 + 0xc44,0xb);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      SeqGen_SetTitle(*(undefined4 *)(param_1 + 0xca4),param_1 + 0xc70);
      Nameentry_SetField_8(param_1 + 0xc44,7);
    }
    else {
      Nameentry_SetField_8(param_1 + 0xc44,0xb);
    }
  }
  return;
}

// 0x002eab50  size 0x164
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Exiteab50) */

void maybe_ComposerTask_State10_State11_NameentrySetField8(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  
  lVar1 = Composer_ConsumeCancel(param_1 + 0xc44);
  if ((lVar1 != 0) && (lVar1 = Nameentry_Nop_2(param_1 + 0xc44), lVar1 != 0xc)) {
    uVar2 = Script_FieldPtr_89f6(*(undefined4 *)(param_1 + 0xca4));
    Keyboard_Init(param_1 + 0xc64,uVar2);
  }
  uVar3 = ComposerInput_GetPressed();
  if ((uVar3 & 0x180) == 0) {
    uVar3 = ComposerInput_GetPressed();
    if ((uVar3 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
  }
  lVar1 = Keyboard_Update(param_1 + 0xc64);
  if (lVar1 == 2) {
    uVar2 = Nameentry_Nop_2(param_1 + 0xc44);
    Nameentry_SetField_8(param_1 + 0xc44,uVar2);
  }
  else if (lVar1 == 1) {
    iVar4 = 0xc;
    do {
      lVar1 = SeqGen_IsUserSong(iVar4);
      if (lVar1 != 0) {
        uVar2 = SeqGen_GetPartTextId(*(undefined4 *)(param_1 + 0xca4),iVar4);
        lVar1 = strcmp(param_1 + 0xc70,uVar2);
        if (lVar1 == 0) {
          Nameentry_SetField_8(param_1 + 0xc44,0xc);
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1e);
    SeqGen_SetTitle(*(undefined4 *)(param_1 + 0xca4),param_1 + 0xc70);
    Nameentry_SetField_8(param_1 + 0xc44,7);
  }
  return;
}

// 0x002eacc0  size 0xbc
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Updateeacc0) */

void maybe_ComposerTask_State10_State10_NameentrySetField8(int param_1)

{
  ulong uVar1;
  
  uVar1 = ComposerInput_GetPressed();
  if ((uVar1 & 0x180) == 0) {
    uVar1 = ComposerInput_GetPressed();
    if ((uVar1 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      if (*(int *)(param_1 + 0xd6c) == 0) {
        Nameentry_SetField_8(param_1 + 0xc44,0xd);
      }
      else {
        ComposerScene_RequestState(0);
      }
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd6c) == 0) {
      Nameentry_SetField_8(param_1 + 0xc44,0xd);
    }
    else {
      ComposerScene_RequestState(0);
    }
  }
  return;
}

// 0x002ead80  size 0xe8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Enteread80) */

void maybe_ComposerTask_State10_State9_NameentrySetField8(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  Composer_MoveCursor(param_1 + 0xd74,0,1,1,0);
  uVar2 = ComposerInput_GetPressed();
  if ((uVar2 & 0x180) == 0) {
    uVar2 = ComposerInput_GetPressed();
    if ((uVar2 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      Nameentry_SetField_8(param_1 + 0xc44,7);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      SeqGen_SaveSongSlot(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd80));
      Nameentry_SetField_8(param_1 + 0xc44,10);
    }
    else {
      Nameentry_SetField_8(param_1 + 0xc44,7);
    }
  }
  return;
}

// 0x002eae70  size 0xe8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Exiteae70) */

void maybe_ComposerTask_State10_State8_NameentrySetField8(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  Composer_MoveCursor(param_1 + 0xd74,0,1,1,0);
  uVar2 = ComposerInput_GetPressed();
  if ((uVar2 & 0x180) == 0) {
    uVar2 = ComposerInput_GetPressed();
    if ((uVar2 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      Nameentry_SetField_8(param_1 + 0xc44,7);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      SeqGen_SaveSongSlot(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd80));
      Nameentry_SetField_8(param_1 + 0xc44,10);
    }
    else {
      Nameentry_SetField_8(param_1 + 0xc44,7);
    }
  }
  return;
}

// 0x002eaf60  size 0x1e4
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Updateeaf60) */

void maybe_ComposerTask_State10_State7_NameentrySetField8(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (((lVar3 != 0) && (lVar3 = Nameentry_Nop_2(param_1 + 0xc44), lVar3 != 8)) &&
     (lVar3 = Nameentry_Nop_2(param_1 + 0xc44), lVar3 != 9)) {
    if (*(int *)(param_1 + 0xcd0) < 0xc) {
      *(undefined4 *)(param_1 + 0xd70) = 0;
    }
    else {
      *(int *)(param_1 + 0xd70) = *(int *)(param_1 + 0xcd0) + -0xc;
    }
    *(undefined4 *)(param_1 + 0xd78) = *(undefined4 *)(param_1 + 0xd70);
  }
  Composer_MoveCursor(param_1 + 0xd70,0,0x11,1,0);
  iVar1 = *(int *)(param_1 + 0xd70);
  iVar2 = *(int *)(param_1 + 0xd78);
  if ((iVar1 + 1) % 0x12 == iVar2) {
    *(int *)(param_1 + 0xd78) = iVar1;
    *(undefined4 *)(param_1 + 0xd7c) = 2;
  }
  else if ((iVar2 + 0xc) % 0x12 == iVar1) {
    *(int *)(param_1 + 0xd78) = (iVar2 + 1) % 0x12;
    *(undefined4 *)(param_1 + 0xd7c) = 1;
  }
  uVar4 = ComposerInput_GetPressed();
  if ((uVar4 & 0x180) == 0) {
    uVar4 = ComposerInput_GetPressed();
    if ((uVar4 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      if (*(int *)(param_1 + 0xd6c) == 0) {
        Nameentry_SetField_8(param_1 + 0xc44,0xd);
      }
      else {
        Nameentry_SetField_8(param_1 + 0xc44,0xf);
      }
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    *(int *)(param_1 + 0xd80) = *(int *)(param_1 + 0xd70) + 0xc;
    lVar3 = SeqGen_IsUserSong(*(undefined4 *)(param_1 + 0xd80));
    if (lVar3 == 0) {
      SeqGen_SaveSongSlot(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd80));
      Nameentry_SetField_8(param_1 + 0xc44,10);
    }
    else if (*(int *)(*(int *)(param_1 + 0xd80) * 4 + param_1 + 0xd84) == 0) {
      Nameentry_SetField_8(param_1 + 0xc44,8);
    }
    else {
      Nameentry_SetField_8(param_1 + 0xc44,9);
    }
  }
  return;
}

// 0x002eb150  size 0x184
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Entereb150) */

void maybe_ComposerTask_State10_State6_NameentrySetField8(int param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar1 != 0) {
    PreviewSnd_Stop(param_1 + 0xc80);
    PreviewSnd_Stop(param_1 + 0xc8c);
    *(undefined4 *)(param_1 + 0xcd0) = *(undefined4 *)(param_1 + 0xd70);
    *(undefined4 *)(param_1 + 0xcb4) = 0;
    *(undefined4 *)(param_1 + 0xcbc) = 0;
    *(undefined4 *)(param_1 + 0xcb8) = *(undefined4 *)(param_1 + 0xcb4);
    *(undefined4 *)(param_1 + 0xcc0) = 0;
    *(undefined4 *)(param_1 + 0xcc4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xce0) = 1;
    Mem_Set16(param_1 + 0xd08,0,0x20);
    Mem_Set16(param_1 + 0xd28,0,0x20);
  }
  lVar1 = Nameentry_GetField_14(param_1 + 0xc44);
  if ((lVar1 == 0) &&
     (lVar1 = SeqGen_GetPosition(*(undefined4 *)(param_1 + 0xca4),0xffffffffffffffff), lVar1 == 0))
  {
    iVar7 = 0;
    iVar5 = param_1;
    do {
      *(undefined4 *)(iVar5 + 0xce8) = 0;
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x1230)) {
        iVar4 = param_1;
        do {
          uVar2 = SeqGen_GetPatternId(*(undefined4 *)(iVar4 + 0xdfc));
          uVar3 = Script_GetElem_2f0_xda8(*(undefined4 *)(param_1 + 0xca4),iVar7);
          if ((uVar2 & 0xffff) == uVar3) {
            *(undefined4 *)(iVar5 + 0xce8) = *(undefined4 *)(param_1 + iVar6 * 4 + 0xdfc);
            break;
          }
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar6 < *(int *)(param_1 + 0x1230));
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar7 < 8);
    *(undefined4 *)(param_1 + 0xcb4) = 0;
    Nameentry_SetField_8(param_1 + 0xc44,0);
  }
  return;
}

// 0x002eb2e0  size 0xf8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Exit) */

void maybe_ComposerTask_State10_State5_NameentrySetField8(int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  Composer_MoveCursor(param_1 + 0xd74,0,1,1,0);
  uVar2 = ComposerInput_GetPressed();
  if ((uVar2 & 0x180) == 0) {
    uVar2 = ComposerInput_GetPressed();
    if ((uVar2 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      uVar3 = Nameentry_Nop_2(param_1 + 0xc44);
      Nameentry_SetField_8(param_1 + 0xc44,uVar3);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      SeqGen_SelectSong(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd70));
      Nameentry_SetField_8(param_1 + 0xc44,6);
    }
    else {
      uVar3 = Nameentry_Nop_2(param_1 + 0xc44);
      Nameentry_SetField_8(param_1 + 0xc44,uVar3);
    }
  }
  return;
}

// 0x002eb3e0  size 0x18c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Update) */

void maybe_ComposerTask_State10_State4_NameentrySetField8(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = Composer_ConsumeCancel(param_1 + 0xc44);
  if ((lVar3 != 0) && (lVar3 = Nameentry_Nop_2(param_1 + 0xc44), lVar3 != 5)) {
    *(undefined4 *)(param_1 + 0xd70) = 0;
    *(undefined4 *)(param_1 + 0xd78) = 0;
  }
  Composer_MoveCursor(param_1 + 0xd70,0,0x1d,1,0);
  iVar1 = *(int *)(param_1 + 0xd70);
  iVar2 = *(int *)(param_1 + 0xd78);
  if ((iVar1 + 1) % 0x1e == iVar2) {
    *(int *)(param_1 + 0xd78) = iVar1;
    *(undefined4 *)(param_1 + 0xd7c) = 2;
  }
  else if ((iVar2 + 0xc) % 0x1e == iVar1) {
    *(int *)(param_1 + 0xd78) = (iVar2 + 1) % 0x1e;
    *(undefined4 *)(param_1 + 0xd7c) = 1;
  }
  uVar4 = ComposerInput_GetPressed();
  if ((uVar4 & 0x180) == 0) {
    uVar4 = ComposerInput_GetPressed();
    if ((uVar4 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      lVar3 = Nameentry_Nop_2(param_1 + 0xc44);
      if (lVar3 < 1) {
        ComposerScene_RequestState(0);
      }
      else {
        Nameentry_SetField_8(param_1 + 0xc44,0xd);
      }
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    lVar3 = SeqGen_FindNextPart(*(undefined4 *)(param_1 + 0xca4));
    if ((lVar3 == 0) &&
       (lVar3 = SeqGen_FindFirstActivePart(*(undefined4 *)(param_1 + 0xca4)), lVar3 == 0)) {
      SeqGen_SelectSong(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd70));
      Nameentry_SetField_8(param_1 + 0xc44,6);
    }
    else {
      Nameentry_SetField_8(param_1 + 0xc44,5);
    }
  }
  return;
}

// 0x002eb570  size 0xa4
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentrySetField8" (was
   ScrNameentrySetField8_Enter) */

void maybe_ComposerTask_State10_State3_NameentrySetField8(int param_1)

{
  long lVar1;
  
  lVar1 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(uint *)(param_1 + 0xccc) = *(uint *)(param_1 + 0xccc) & 0xfffffeff;
  }
  if ((*(uint *)(param_1 + 0xccc) & 0x100) == 0) {
    lVar1 = SeqGen_GetPosition(*(undefined4 *)(param_1 + 0xca4),0xffffffffffffffff);
    if (lVar1 == 0) {
      SeqGen_StartThread(*(undefined4 *)(param_1 + 0xca4));
      *(uint *)(param_1 + 0xccc) = *(uint *)(param_1 + 0xccc) | 0x100;
    }
  }
  else {
    lVar1 = SeqGen_StopThread(*(undefined4 *)(param_1 + 0xca4));
    if (lVar1 != 0) {
      Nameentry_SetField_8(param_1 + 0xc44,1);
    }
  }
  return;
}

// 0x002eb620  size 0x550
/* state of maybe_ComposerTask; on-screen text/callee hint "iptGetElem2f4xda8" (was
   ScrScriptGetElem2f4xda8_Exit) */

void maybe_ComposerTask_State10_State2_iptGetElem2f4xda8(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  
  lVar5 = Composer_ConsumeCancel(param_1 + 0xc44);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x1238) = 0;
    *(undefined4 *)(param_1 + 0x123c) = 0;
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x1230)) {
      iVar11 = param_1;
      do {
        uVar6 = SeqGen_GetPatternId(*(undefined4 *)(iVar11 + 0xdfc));
        uVar7 = Script_GetElem_2f0_xda8
                          (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
        if ((uVar6 & 0xffff) == uVar7) {
          *(int *)(param_1 + 0x1238) = iVar10 / 3;
          *(int *)(param_1 + 0x123c) = iVar10 % 3;
          break;
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar10 < *(int *)(param_1 + 0x1230));
    }
    *(undefined4 *)(param_1 + 0x1240) = *(undefined4 *)(param_1 + 0x1238);
    PreviewSnd_Stop(param_1 + 0xc8c);
    uVar4 = Script_GetElem_1d5_xda8
                      (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
    *(undefined1 *)(param_1 + 0x1244) = uVar4;
    uVar4 = Script_GetElem_1d5_xda8
                      (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
    *(undefined1 *)(param_1 + 0x1245) = uVar4;
    *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(param_1 + 0xcb4);
  }
  iVar10 = *(int *)(param_1 + 0x123c) + *(int *)(param_1 + 0x1238) * 3;
  uVar6 = ComposerInput_GetHeld();
  if ((uVar6 & 0x2000) == 0) {
    uVar6 = ComposerInput_GetHeld();
    if ((uVar6 & 0x80) == 0) {
      uVar6 = ComposerInput_GetRepeat();
      if ((uVar6 & 0x400) == 0) {
        uVar6 = ComposerInput_GetRepeat();
        if ((uVar6 & 0x800) == 0) {
          Composer_MoveCursor(param_1 + 0x123c,1,2,1,0);
          Composer_MoveCursor(param_1 + 0x1238,0,*(int *)(param_1 + 0x1234) + -1,1,0);
          iVar11 = *(int *)(param_1 + 0x1238);
          iVar1 = *(int *)(param_1 + 0x1234);
          iVar2 = *(int *)(param_1 + 0x1240);
          if (iVar2 == (iVar11 + 1) % iVar1) {
            *(int *)(param_1 + 0x1240) = iVar11;
            *(undefined4 *)(param_1 + 0xd7c) = 2;
          }
          else if (iVar11 == (iVar2 + 6) % iVar1) {
            *(int *)(param_1 + 0x1240) = (iVar2 + 1) % iVar1;
            *(undefined4 *)(param_1 + 0xd7c) = 1;
          }
        }
        else {
          *(int *)(param_1 + 0x1240) = (*(int *)(param_1 + 0x1240) + 6) % *(int *)(param_1 + 0x1234)
          ;
          *(int *)(param_1 + 0x1238) = (*(int *)(param_1 + 0x1238) + 6) % *(int *)(param_1 + 0x1234)
          ;
          Se_PlayMenuVol(7,0x60);
        }
      }
      else {
        *(int *)(param_1 + 0x1240) =
             (*(int *)(param_1 + 0x1240) + -6 + *(int *)(param_1 + 0x1234)) %
             *(int *)(param_1 + 0x1234);
        *(int *)(param_1 + 0x1238) =
             (*(int *)(param_1 + 0x1238) + -6 + *(int *)(param_1 + 0x1234)) %
             *(int *)(param_1 + 0x1234);
        Se_PlayMenuVol(7,0x60);
      }
    }
    else if (iVar10 < *(int *)(param_1 + 0x1230)) {
      uVar8 = Script_GetField_89f4(*(undefined4 *)(param_1 + 0xca4));
      uVar9 = Script_GetElem_1d5_xda8
                        (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
      PreviewSnd_Play(param_1 + 0xc8c,0,uVar8,uVar9);
    }
    else {
      uVar6 = ComposerInput_GetPressed();
      if ((uVar6 & 0x80) != 0) {
        Se_PlayMenuVol(8,0x60);
      }
    }
  }
  else {
    uVar6 = ComposerInput_GetPressed();
    if ((uVar6 & 0x80) != 0) {
      if (iVar10 < *(int *)(param_1 + 0x1230)) {
        Se_PlayMenuVol(5,0x60);
        iVar11 = iVar10 * 4 + param_1;
        SeqGen_ReloadPattern
                  (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                   *(undefined4 *)(iVar11 + 0xdfc));
        *(undefined4 *)(*(int *)(param_1 + 0xcc0) * 4 + param_1 + 0xce8) =
             *(undefined4 *)(iVar11 + 0xdfc);
        Nameentry_SetField_8(param_1 + 0xc44,0);
      }
      else {
        Se_PlayMenuVol(8,0x60);
      }
    }
    uVar6 = ComposerInput_GetRepeat();
    if ((uVar6 & 4) == 0) {
      uVar6 = ComposerInput_GetRepeat();
      if ((uVar6 & 8) != 0) {
        cVar3 = Script_GetElem_1d5_xda8
                          (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
        lVar5 = SeqGen_IsValidNote(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0)
                                   ,cVar3 + -1);
        if (lVar5 == 0) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
          uVar4 = Script_GetElem_1d5_xda8
                            (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
          *(undefined1 *)(param_1 + 0x1245) = uVar4;
          uVar6 = ComposerInput_GetHeld();
          if (((uVar6 & 0x80) != 0) && (iVar10 < 0x10d)) {
            uVar8 = Script_GetField_89f4(*(undefined4 *)(param_1 + 0xca4));
            uVar9 = Script_GetElem_1d5_xda8
                              (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
            PreviewSnd_Play(param_1 + 0xc8c,0,uVar8,uVar9);
          }
        }
      }
    }
    else {
      cVar3 = Script_GetElem_1d5_xda8
                        (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
      lVar5 = SeqGen_IsValidNote(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                                 cVar3 + '\x01');
      if (lVar5 == 0) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
        uVar4 = Script_GetElem_1d5_xda8
                          (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
        *(undefined1 *)(param_1 + 0x1245) = uVar4;
        uVar6 = ComposerInput_GetHeld();
        if (((uVar6 & 0x80) != 0) && (iVar10 < 0x10d)) {
          uVar8 = Script_GetField_89f4(*(undefined4 *)(param_1 + 0xca4));
          uVar9 = Script_GetElem_1d5_xda8
                            (*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
          PreviewSnd_Play(param_1 + 0xc8c,0,uVar8,uVar9);
        }
      }
    }
  }
  uVar6 = ComposerInput_GetHeld();
  if ((uVar6 & 0x80) == 0) {
    PreviewSnd_StopIfPlaying(param_1 + 0xc8c);
    uVar6 = ComposerInput_GetPressed();
    if ((uVar6 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      SeqGen_IsValidNote(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                         *(undefined1 *)(param_1 + 0x1244));
      Nameentry_SetField_8(param_1 + 0xc44,0);
    }
  }
  Composer_PreviewInstrument(param_1 + 0xc8c,*(undefined4 *)(iVar10 * 4 + param_1 + 0xdfc));
  return;
}

// 0x002ebb70  size 0x9d4
/* state of maybe_ComposerTask; on-screen text/callee hint "iptGetElem2f4xda8" (was
   ScrScriptGetElem2f4xda8_Update) */

void maybe_ComposerTask_State10_State1_iptGetElem2f4xda8(undefined8 param_1)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  
  iVar8 = (int)param_1;
  lVar5 = Composer_ConsumeCancel(iVar8 + 0xc44);
  if (lVar5 != 0) {
    *(undefined4 *)(iVar8 + 0xcbc) = *(undefined4 *)(iVar8 + 0xcb4);
    sVar2 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4));
    if (sVar2 <= (short)(int)*(float *)(iVar8 + 0xcb4)) {
      *(undefined4 *)(iVar8 + 0xcb4) = 0;
    }
    if ((*(uint *)(iVar8 + 0xccc) & 4) == 0) {
      fVar9 = 0.0;
      fVar10 = *(float *)(iVar8 + 0xcb4);
    }
    else {
      fVar9 = 16.0;
      fVar10 = *(float *)(iVar8 + 0xcb4);
    }
    *(float *)(iVar8 + 0xcb8) = fVar10 - fVar9;
    *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 1;
    *(undefined1 *)(iVar8 + 0xce0) = 1;
    *(undefined4 *)(iVar8 + 0xc98) = 0x41700000;
  }
  uVar6 = ComposerInput_GetHeld();
  if ((uVar6 & 0x80) == 0) {
    *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 0xffffff7f;
  }
  if ((*(uint *)(iVar8 + 0xccc) & 0x20) == 0) {
    lVar5 = PreviewSnd_IsIdle(iVar8 + 0xc80);
    if (lVar5 == 0) {
      Composer_PreviewLoop(iVar8 + 0xc80);
    }
    else {
      lVar5 = PreviewSnd_Update(iVar8 + 0xc80);
      if (lVar5 != 0) {
        Composer_PreviewTrack(iVar8 + 0xc8c,*(undefined4 *)(iVar8 + 0xcc0));
      }
    }
    lVar5 = PreviewSnd_Update(iVar8 + 0xc8c);
    if ((lVar5 != 0) && (lVar5 = PreviewSnd_Update(iVar8 + 0xc80), lVar5 != 0)) {
      *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 0x20;
    }
  }
  else {
    uVar6 = ComposerInput_GetPressed();
    if ((uVar6 & 0x100) != 0) {
      *(uint *)(iVar8 + 0xc9c) = *(int *)(iVar8 + 0xc9c) != 0 ^ 1;
    }
    maybe_ComposerUi_PlayNote(iVar8 + 0xc98,*(float *)(iVar8 + 0xcb8) < *(float *)(iVar8 + 0xcb4));
    if (0.0 <= *(float *)(iVar8 + 0xcb8)) {
      fVar9 = (*(float *)(iVar8 + 0xcb8) * 480.0) / 4.0;
      if (fVar9 < 2.1474836e+09) {
        uVar11 = (uint)fVar9;
      }
      else {
        uVar11 = (int)(fVar9 - 2.1474836e+09) | 0x80000000;
      }
      PreviewSnd_Play(iVar8 + 0xc80,uVar11,0xffffffffffffffff,0xffffffffffffffff);
      if ((*(uint *)(iVar8 + 0xccc) & 0x200) == 0) {
        maybe_ComposerUi_UpdatePlayback(param_1,iVar8 + 0xc80);
        *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 0x200;
      }
    }
    fVar9 = *(float *)(iVar8 + 0xcb8);
    if (iRam0036f2cc == 1) {
      iVar4 = Script_GetField_89f4(*(undefined4 *)(iVar8 + 0xca4));
      fVar10 = (((float)iVar4 * 4.0) / 60.0) / 60.0;
      iVar4 = Script_GetField_89f4(*(undefined4 *)(iVar8 + 0xca4));
      *(float *)(iVar8 + 0xcb8) =
           (fVar10 + ((float)iVar4 * 0.000122) / 80.0) * 1.2 + *(float *)(iVar8 + 0xcb8) + 0.0;
    }
    else {
      iVar4 = Script_GetField_89f4(*(undefined4 *)(iVar8 + 0xca4));
      fVar10 = (((float)iVar4 * 4.0) / 60.0) / 60.0;
      iVar4 = Script_GetField_89f4(*(undefined4 *)(iVar8 + 0xca4));
      *(float *)(iVar8 + 0xcb8) =
           *(float *)(iVar8 + 0xcb8) + fVar10 + ((float)iVar4 * 0.000122) / 80.0;
    }
    if ((fVar9 < 0.0) && (0.0 < *(float *)(iVar8 + 0xcb8))) {
      *(undefined4 *)(iVar8 + 0xcb8) = 0;
    }
    if (((*(uint *)(iVar8 + 0xccc) & 4) == 0) ||
       (*(float *)(iVar8 + 0xcb4) <= *(float *)(iVar8 + 0xcb8))) {
      *(undefined4 *)(iVar8 + 0xcb4) = *(undefined4 *)(iVar8 + 0xcb8);
    }
    if ((*(uint *)(iVar8 + 0xccc) & 0x40) == 0) {
      PreviewSnd_StopIfPlaying(iVar8 + 0xc8c);
      uVar6 = ComposerInput_GetPressed();
      if (((uVar6 & 4) != 0) || (uVar6 = ComposerInput_GetPressed(), (uVar6 & 8) != 0)) {
        sVar2 = Script_GetField_89f4(*(undefined4 *)(iVar8 + 0xca4));
        sVar3 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4));
        if (*(float *)(iVar8 + 0xcb4) < (float)((int)sVar3 - (sVar2 * 5) / 100)) {
          uVar1 = Nameentry_Nop(iVar8 + 0xc8c);
          lVar5 = Composer_GetSelectedPart(uVar1);
          if (lVar5 != 0) {
            uVar1 = Nameentry_Nop(iVar8 + 0xc8c);
            lVar5 = Composer_GetPartEntry(uVar1);
            if (lVar5 != 0) {
              uVar6 = ComposerInput_GetPressed();
              if ((uVar6 & 4) == 0) {
                uVar6 = ComposerInput_GetPressed();
                if ((uVar6 & 8) != 0) {
                  iVar4 = *(int *)(iVar8 + 0xcc0) + 1;
                  if (iVar4 < 0) {
                    iVar4 = 7;
                  }
                  else if (7 < iVar4) {
                    iVar4 = 0;
                  }
                  *(int *)(iVar8 + 0xcc0) = iVar4;
                }
              }
              else {
                iVar4 = *(int *)(iVar8 + 0xcc0) + -1;
                if (iVar4 < 0) {
                  iVar4 = 7;
                }
                else if (7 < iVar4) {
                  iVar4 = 0;
                }
                *(int *)(iVar8 + 0xcc0) = iVar4;
              }
              *(undefined4 *)(iVar8 + 0xcc4) = 0xffffffff;
            }
          }
        }
      }
      uVar6 = ComposerInput_GetPressed();
      if ((uVar6 & 0x4000) == 0) {
        uVar6 = ComposerInput_GetPressed();
        if ((((uVar6 & 0x8000) != 0) && (lVar5 = PreviewSnd_Update(iVar8 + 0xc8c), lVar5 != 0)) &&
           (*(int *)(iVar8 + 0xd68) < 1)) {
          iVar4 = *(int *)(iVar8 + 0xcc0) * 4 + iVar8;
          *(uint *)(iVar4 + 0xd28) = *(int *)(iVar4 + 0xd28) != 0 ^ 1;
          maybe_ComposerUi_UpdatePlayback(param_1,iVar8 + 0xc80);
        }
      }
      else {
        lVar5 = PreviewSnd_Update(iVar8 + 0xc8c);
        if ((lVar5 != 0) && (*(int *)(iVar8 + 0xd68) < 1)) {
          iVar4 = *(int *)(iVar8 + 0xcc0) * 4 + iVar8;
          *(uint *)(iVar4 + 0xd08) = *(int *)(iVar4 + 0xd08) != 0 ^ 1;
          maybe_ComposerUi_UpdatePlayback(param_1,iVar8 + 0xc80);
        }
      }
      uVar6 = ComposerInput_GetHeld();
      if ((uVar6 & 0x80) != 0) {
        sVar2 = (short)(int)(*(float *)(iVar8 + 0xcb4) + 0.5);
        lVar5 = SeqGen_CountEvents(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                                   sVar2);
        if (((lVar5 == 0) &&
            (sVar3 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4)), sVar2 < sVar3)) &&
           (((*(uint *)(iVar8 + 0xccc) & 0x80) == 0 &&
            (((((*(uint *)(iVar8 + 0xccc) & 4) == 0 ||
               (*(float *)(iVar8 + 0xcb4) <= *(float *)(iVar8 + 0xcb8))) &&
              (lVar5 = PreviewSnd_Update(iVar8 + 0xc8c), lVar5 != 0)) &&
             (lVar5 = Script_GetElem_2f4_xda8
                                (*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0)),
             lVar5 < 0x100)))))) {
          *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 0x40;
          *(short *)(iVar8 + 0xca8) = sVar2;
        }
      }
    }
    else {
      uVar7 = Script_GetField_89f4(*(undefined4 *)(iVar8 + 0xca4));
      PreviewSnd_Play(iVar8 + 0xc8c,0,uVar7,0xffffffffffffffff);
      uVar6 = ComposerInput_GetHeld();
      if ((uVar6 & 0x80) == 0) {
        iVar4 = (int)(short)(int)(*(float *)(iVar8 + 0xcb4) + 0.5) - (int)*(short *)(iVar8 + 0xca8);
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        *(short *)(iVar8 + 0xcaa) = (short)iVar4;
        SeqGen_SetPartRange(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                            *(undefined2 *)(iVar8 + 0xca8),*(undefined2 *)(iVar8 + 0xcaa));
        *(undefined2 *)(iVar8 + 0xcaa) = 0;
        *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 0xffffffbf;
      }
      else {
        *(short *)(iVar8 + 0xcaa) =
             (short)(int)(*(float *)(iVar8 + 0xcb4) - (float)(int)*(short *)(iVar8 + 0xca8));
        lVar5 = SeqGen_CountEvents(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                                   (short)(int)*(float *)(iVar8 + 0xcb4));
        if (lVar5 == 0) {
          iVar4 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4));
          if ((float)iVar4 <= *(float *)(iVar8 + 0xcb4)) {
            sVar2 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4));
            *(short *)(iVar8 + 0xcaa) = sVar2 - *(short *)(iVar8 + 0xca8);
            SeqGen_SetPartRange(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                                *(undefined2 *)(iVar8 + 0xca8),*(undefined2 *)(iVar8 + 0xcaa));
            *(undefined2 *)(iVar8 + 0xcaa) = 0;
            *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 0xffffffbf;
            *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 0x80;
          }
        }
        else {
          SeqGen_SetPartRange(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                              *(undefined2 *)(iVar8 + 0xca8),*(undefined2 *)(iVar8 + 0xcaa));
          *(undefined2 *)(iVar8 + 0xcaa) = 0;
          *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 0xffffffbf;
        }
      }
    }
    fVar9 = *(float *)(iVar8 + 0xcb4);
    sVar2 = Script_GetField_89f2(*(undefined4 *)(iVar8 + 0xca4));
    if (sVar2 <= (short)(int)fVar9) {
      *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 2;
      iVar4 = Script_GetField_89f0(*(undefined4 *)(iVar8 + 0xca4));
      *(float *)(iVar8 + 0xcb8) = (float)iVar4;
      *(float *)(iVar8 + 0xcb4) = (float)iVar4;
      uVar6 = Nameentry_GetField_4(iVar8 + 0xc80);
      if ((uVar6 & 1) == 0) {
        PreviewSnd_StopIfPlaying(iVar8 + 0xc80);
      }
    }
    uVar6 = ComposerInput_GetPressed();
    if ((uVar6 & 1) != 0) {
      uVar6 = Nameentry_GetField_4(iVar8 + 0xc80);
      if ((uVar6 & 1) == 0) {
        uVar1 = Nameentry_Nop(iVar8 + 0xc80);
        lVar5 = Composer_GetSelectedPart(uVar1);
        if (lVar5 != 0) goto LAB_002ebcb8;
      }
      PreviewSnd_StopIfPlaying(iVar8 + 0xc80);
      PreviewSnd_Stop(iVar8 + 0xc80);
      PreviewSnd_StopIfPlaying(iVar8 + 0xc8c);
      if (((*(uint *)(iVar8 + 0xccc) & 0x40) != 0) && (0 < *(short *)(iVar8 + 0xcaa))) {
        SeqGen_SetPartRange(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                            *(undefined2 *)(iVar8 + 0xca8));
        *(undefined2 *)(iVar8 + 0xcaa) = 0;
      }
      *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 4;
      Nameentry_SetField_8(iVar8 + 0xc44,0);
      return;
    }
  }
LAB_002ebcb8:
  Composer_PreviewTrack(iVar8 + 0xc8c,*(undefined4 *)(iVar8 + 0xcc0));
  return;
}

