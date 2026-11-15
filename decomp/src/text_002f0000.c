// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002f0000 - 0x002f4000
#include "ghidra_types.h"

// 0x002f0270  size 0x5b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x342de0 */

void ScrDraw_Equipment_Exit(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  lVar4 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar4 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xd74);
  }
  else {
    uVar2 = UiRes_GetLayoutData(0x3d);
    iVar3 = UiMgr_FindLayout(0x12);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x3e);
    iVar3 = UiMgr_FindLayout(0x12);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x3f);
    iVar3 = UiMgr_FindLayout(0x13);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x40);
    iVar3 = UiMgr_FindLayout(0x13);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    Composer_ShowPanel();
    uVar2 = *(undefined4 *)(param_1 + 0xd74);
  }
  lVar4 = Nameentry_Draw_Rokko(0x4b,uVar2);
  lVar5 = Nameentry_Nop_2(param_1 + 0xc44);
  if (lVar5 == 0xb) {
    lVar5 = UiLayout_UpdateAnimById(0x12,0);
    lVar6 = UiLayout_UpdateAnimById(0x13,0);
    if ((lVar4 == 1 && lVar5 == 0) && lVar6 == 0) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  else if (lVar4 == 1) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar5 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar5 != 0) {
    if (lVar4 == 1) {
      Composer_RequestRedraw();
    }
    lVar5 = Nameentry_GetField_8_81f0(param_1 + 0xc44);
    if ((lVar5 == 0xd) || (lVar5 = Nameentry_GetField_8_81f0(param_1 + 0xc44), lVar5 == 0xf)) {
      if (lVar4 == 3) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0x12,1);
      lVar6 = UiLayout_UpdateAnimById(0x13,1);
      if ((lVar4 == 3 && lVar5 == 0) && lVar6 == 0) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
  }
  lVar4 = ComposerScene_IsChanging();
  if ((lVar4 == 0) || (lVar4 = ComposerScene_GetPage(), lVar4 != 3)) {
    iVar9 = 0;
    puVar8 = &DAT_00343350;
    puVar7 = &DAT_00343370;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0xd08) == 0) {
        iVar1 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar8,8);
      }
      else {
        iVar1 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar8,8);
      }
      if (*(int *)(iVar3 + 0xd28) == 0) {
        iVar1 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar7,8);
      }
      else {
        iVar1 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar7,8);
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 4;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar9 < 8);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
    maybe_ComposerUi_DrawPlayhead(param_1);
    maybe_ComposerUi_DrawNotes(param_1,1);
    maybe_ComposerUi_DrawCursor(param_1,1);
    maybe_ComposerUi_DrawGrid(param_1,0);
  }
  iVar3 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002f0830  size 0x840
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Equipment(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  lVar4 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(0x37);
    iVar3 = UiMgr_FindLayout(0x11);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x38);
    iVar3 = UiMgr_FindLayout(0x11);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x39);
    iVar3 = UiMgr_FindLayout(0x11);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x3d);
    iVar3 = UiMgr_FindLayout(0x12);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x3e);
    iVar3 = UiMgr_FindLayout(0x12);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x3f);
    iVar3 = UiMgr_FindLayout(0x13);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x40);
    iVar3 = UiMgr_FindLayout(0x13);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    Menu_ClearSlot(0);
    *(uint *)(param_1 + 0xccc) = *(uint *)(param_1 + 0xccc) & 0xfffffbff;
  }
  lVar4 = Nameentry_Nop_2(param_1 + 0xc44);
  if (lVar4 == 0xe) {
    lVar4 = UiLayout_UpdateAnimById(0x11,0);
    if (lVar4 == 0) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0x11,0);
    lVar5 = UiLayout_UpdateAnimById(0x12,0);
    lVar6 = UiLayout_UpdateAnimById(0x13,0);
    if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  lVar4 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar4 != 0) {
    lVar4 = Nameentry_GetField_8_81f0(param_1 + 0xc44);
    if (lVar4 == 0xe) {
      lVar4 = UiLayout_UpdateAnimById(0x11,1);
      if (lVar4 == 0) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0x11,1);
      lVar5 = UiLayout_UpdateAnimById(0x12,1);
      lVar6 = UiLayout_UpdateAnimById(0x13,1);
      if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
  }
  lVar4 = Nameentry_GetField_14(param_1 + 0xc44);
  if ((lVar4 == 0) && (lVar4 = Nameentry_GetField_18(param_1 + 0xc44), lVar4 == 0)) {
    MenuWnd_SetItemState(0x11,*(undefined4 *)(&DAT_00343340 + *(int *)(param_1 + 0xd6c) * 4),1,0);
  }
  lVar4 = ComposerScene_IsChanging();
  if ((lVar4 == 0) || (lVar4 = ComposerScene_GetPage(), lVar4 != 3)) {
    iVar9 = 0;
    puVar8 = &DAT_00343350;
    puVar7 = &DAT_00343370;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0xd08) == 0) {
        iVar1 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar8,8);
      }
      else {
        iVar1 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar8,8);
      }
      if (*(int *)(iVar3 + 0xd28) == 0) {
        iVar1 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar7,8);
      }
      else {
        iVar1 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar7,8);
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 4;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar9 < 8);
    iVar3 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
    maybe_ComposerUi_DrawPlayhead(param_1);
    maybe_ComposerUi_DrawNotes(param_1,1);
    maybe_ComposerUi_DrawCursor(param_1,1);
    maybe_ComposerUi_DrawGrid(param_1,0);
  }
  MenuWnd_DrawText(0x11,0x21,0x3f);
  MenuWnd_DrawText(0x11,0x22,0x40);
  MenuWnd_DrawText(0x11,0x23,0x41);
  iVar3 = *(int *)(param_1 + 0xd6c);
  if (iVar3 == 2) {
    MenuWnd_DrawText(0x13,0xd,0x45);
  }
  else if (iVar3 == 1) {
    MenuWnd_DrawText(0x13,0xd,0x44);
  }
  else if (iVar3 == 0) {
    MenuWnd_DrawText(0x13,0xd,0x43);
  }
  iVar3 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x11,2);
  iVar3 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002f1080  size 0xf4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x342de0 */

void ScrDraw_Equipment_Enter(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar2 != 0) {
    MenuWnd_SetItemVisible(0);
    Composer_ShowPanel(1);
  }
  lVar2 = Nameentry_Draw_Rokko(0x2e,*(undefined4 *)(param_1 + 0xd74));
  if (lVar2 == 1) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar3 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar3 != 0) {
    if (lVar2 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar2 == 3) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
    }
  }
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f1180  size 0x6b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x342dd4 */

void ScrDraw_TestCourse_Exit(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined1 auStack_4 [4];
  
  lVar6 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar6 != 0) {
    uVar4 = UiRes_GetLayoutData(5);
    iVar5 = UiMgr_FindLayout(2);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar5 + 800) = 0;
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x310) = 0;
    if (*(int *)(iVar5 + 800) == 0) {
      *(undefined4 *)(iVar5 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x318) = 0;
    *(undefined4 *)(iVar5 + 800) = uVar4;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(6);
    iVar5 = UiMgr_FindLayout(2);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x334) = 0;
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x324) = 0;
    if (*(int *)(iVar5 + 0x334) == 0) {
      *(undefined4 *)(iVar5 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    *(undefined4 *)(iVar5 + 0x32c) = 0;
    *(undefined4 *)(iVar5 + 0x334) = uVar4;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(7);
    iVar5 = UiMgr_FindLayout(2);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x348) = 0;
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x340) = 0;
    *(undefined4 *)(iVar5 + 0x348) = uVar4;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    uVar4 = UiRes_GetLayoutData(8);
    iVar5 = UiMgr_FindLayout(2);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x35c) = 0;
    *(undefined4 *)(iVar5 + 0x34c) = 0;
    if (*(int *)(iVar5 + 0x35c) == 0) {
      *(undefined4 *)(iVar5 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    *(undefined4 *)(iVar5 + 0x34c) = 0;
    if (*(int *)(iVar5 + 0x35c) == 0) {
      *(undefined4 *)(iVar5 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    *(undefined4 *)(iVar5 + 0x354) = 0;
    *(undefined4 *)(iVar5 + 0x35c) = uVar4;
    *(undefined4 *)(iVar5 + 0x358) = 1;
    uVar4 = UiRes_GetLayoutData(9);
    iVar5 = UiMgr_FindLayout(2);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x370) = 0;
    *(undefined4 *)(iVar5 + 0x360) = 0;
    if (*(int *)(iVar5 + 0x370) == 0) {
      *(undefined4 *)(iVar5 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x360) = 0;
    if (*(int *)(iVar5 + 0x370) == 0) {
      *(undefined4 *)(iVar5 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x368) = 1;
    *(undefined4 *)(iVar5 + 0x370) = uVar4;
    *(undefined4 *)(iVar5 + 0x36c) = 1;
    uVar4 = UiRes_GetLayoutData(10);
    iVar5 = UiMgr_FindLayout(2);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar5 + 900) = 0;
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    *(undefined4 *)(iVar5 + 0x37c) = 1;
    *(undefined4 *)(iVar5 + 900) = uVar4;
    *(undefined4 *)(iVar5 + 0x380) = 1;
  }
  lVar6 = UiLayout_UpdateAnimById(2,0);
  lVar7 = UiLayout_UpdateAnimById(2,2);
  if (lVar6 == 0 && lVar7 == 0) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  UiLayout_UpdateAnimById(2,4);
  UiLayout_UpdateAnimById(2,5);
  iVar5 = 0;
  if (DAT_003431b0 != -1) {
    piVar9 = &DAT_003431b0;
    do {
      iVar2 = Keyboard_GetIndex(param_1 + 0xc64);
      if (((iVar5 == iVar2) && (lVar6 = Nameentry_GetField_14(param_1 + 0xc44), lVar6 == 0)) &&
         (lVar6 = Nameentry_GetField_18(param_1 + 0xc44), lVar6 == 0)) {
        iVar2 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,*piVar9,8);
      }
      else if (*piVar9 != 0) {
        iVar2 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*piVar9,8);
      }
      piVar9 = piVar9 + 1;
      iVar5 = iVar5 + 1;
    } while (*piVar9 != -1);
  }
  puVar3 = (undefined1 *)0x2;
  puVar8 = auStack_4;
  puVar1 = puVar8;
  while (puVar1 != (undefined1 *)0x0) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
    puVar3 = puVar3 + -1;
    puVar1 = puVar3;
  }
  iVar5 = *(int *)(param_1 + 0xc6c);
  iVar2 = 0;
  if (0 < iVar5) {
    puVar10 = &DAT_003432c0;
    do {
      auStack_4[0] = *(undefined1 *)(param_1 + iVar2 + 0xc70);
      iVar5 = UiMgr_FindLayout(2);
      UiElem_GetRect(*_g_UiMgr + iVar5 * 0x4f4 + 4,auStack_40,*puVar10);
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar5 = *(int *)(param_1 + 0xc6c);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar2 < iVar5);
  }
  if ((iVar5 < 0xf) && (lVar6 = Keyboard_IsCharAllowed(param_1 + 0xc64), lVar6 != 0)) {
    auStack_4[0] = Keyboard_GetChar(param_1 + 0xc64);
    iVar5 = UiMgr_FindLayout(2);
    UiElem_GetRect(*_g_UiMgr + iVar5 * 0x4f4 + 4,auStack_40,
                   (&DAT_003432c0)[*(int *)(param_1 + 0xc6c)]);
    UiText_DrawPlayerName(auStack_40,auStack_4,0);
    lVar6 = Nameentry_GetField_14(param_1 + 0xc44);
    if ((lVar6 == 0) && (lVar6 = Nameentry_GetField_18(param_1 + 0xc44), lVar6 == 0)) {
      iVar5 = UiMgr_FindLayout(2);
      UiElem_GetRect(*_g_UiMgr + iVar5 * 0x4f4 + 4,auStack_40,
                     *(undefined4 *)(&DAT_00343300 + *(int *)(param_1 + 0xc6c) * 4));
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
    }
  }
  lVar6 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar6 != 0) {
    lVar6 = UiLayout_UpdateAnimById(2,1);
    lVar7 = UiLayout_UpdateAnimById(2,3);
    if (lVar6 == 0 && lVar7 == 0) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
    }
  }
  Composer_DrawLabel(0x27,3);
  UiLayout_UpdateAnimById(0,0);
  iVar5 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(2);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  return;
}

// 0x002f1840  size 0x9b8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_TestCourse(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = (int)param_1;
  lVar4 = Composer_ConsumeConfirm(iVar1 + 0xc44);
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(0x27);
    iVar3 = UiMgr_FindLayout(3);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x28);
    iVar3 = UiMgr_FindLayout(3);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x29);
    iVar3 = UiMgr_FindLayout(3);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x2a);
    iVar3 = UiMgr_FindLayout(0xd);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x2b);
    iVar3 = UiMgr_FindLayout(0xd);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x2c);
    iVar3 = UiMgr_FindLayout(0xd);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 0;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x2d);
    iVar3 = UiMgr_FindLayout(0xd);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x35c) = 0;
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x354) = 0;
    *(undefined4 *)(iVar3 + 0x35c) = uVar2;
    *(undefined4 *)(iVar3 + 0x358) = 1;
    uVar2 = UiRes_GetLayoutData(0x2e);
    iVar3 = UiMgr_FindLayout(0xd);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x370) = 0;
    *(undefined4 *)(iVar3 + 0x360) = 0;
    if (*(int *)(iVar3 + 0x370) == 0) {
      *(undefined4 *)(iVar3 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x360) = 0;
    if (*(int *)(iVar3 + 0x370) == 0) {
      *(undefined4 *)(iVar3 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x368) = 0;
    *(undefined4 *)(iVar3 + 0x370) = uVar2;
    *(undefined4 *)(iVar3 + 0x36c) = 1;
    uVar2 = UiRes_GetLayoutData(0x2f);
    iVar3 = UiMgr_FindLayout(0xd);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar3 + 900) = 0;
    *(undefined4 *)(iVar3 + 0x374) = 0;
    if (*(int *)(iVar3 + 900) == 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x380) = 1;
    }
    *(undefined4 *)(iVar3 + 0x374) = 0;
    if (*(int *)(iVar3 + 900) == 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x380) = 1;
    }
    *(undefined4 *)(iVar3 + 0x37c) = 0;
    *(undefined4 *)(iVar3 + 900) = uVar2;
    *(undefined4 *)(iVar3 + 0x380) = 1;
    uVar2 = UiRes_GetLayoutData(0x30);
    iVar3 = UiMgr_FindLayout(0xd);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x398) = 0;
    *(undefined4 *)(iVar3 + 0x388) = 0;
    if (*(int *)(iVar3 + 0x398) == 0) {
      *(undefined4 *)(iVar3 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x394) = 1;
    }
    *(undefined4 *)(iVar3 + 0x388) = 0;
    if (*(int *)(iVar3 + 0x398) == 0) {
      *(undefined4 *)(iVar3 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x394) = 1;
    }
    *(undefined4 *)(iVar3 + 0x390) = 0;
    *(undefined4 *)(iVar3 + 0x398) = uVar2;
    *(undefined4 *)(iVar3 + 0x394) = 1;
    uVar2 = UiRes_GetLayoutData(0x31);
    iVar3 = UiMgr_FindLayout(0xd);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x3ac) = 0;
    *(undefined4 *)(iVar3 + 0x39c) = 0;
    if (*(int *)(iVar3 + 0x3ac) == 0) {
      *(undefined4 *)(iVar3 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar3 + 0x39c) = 0;
    if (*(int *)(iVar3 + 0x3ac) == 0) {
      *(undefined4 *)(iVar3 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar3 + 0x3a4) = 0;
    *(undefined4 *)(iVar3 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar3 + 0x3a8) = 1;
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
    iVar3 = UiMgr_FindLayout(8);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
    iVar3 = UiMgr_FindLayout(8);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 0;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x17);
    iVar3 = UiMgr_FindLayout(8);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x35c) = 0;
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x354) = 0;
    *(undefined4 *)(iVar3 + 0x35c) = uVar2;
    *(undefined4 *)(iVar3 + 0x358) = 1;
    MenuWnd_SetItemVisible(0);
  }
  lVar4 = UiLayout_UpdateAnimById(3,0);
  if (lVar4 == 0) {
    Composer_ClearDirty(iVar1 + 0xc44);
  }
  lVar4 = Nameentry_GetField_18(iVar1 + 0xc44);
  if (lVar4 != 0) {
    lVar4 = UiLayout_UpdateAnimById(3,1);
    lVar5 = UiLayout_UpdateAnimById(0xd,1);
    lVar6 = UiLayout_UpdateAnimById(0xd,3);
    lVar7 = UiLayout_UpdateAnimById(0xd,5);
    lVar8 = UiLayout_UpdateAnimById(8,1);
    if (lVar8 == 0 && (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)))) {
      Composer_ConsumeRedraw(iVar1 + 0xc44);
    }
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  MenuWnd_DrawLabel(3,0xf,0x48,*(int *)(iVar1 + 0xd80) + 1);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(3,2);
  iVar1 = UiMgr_FindLayout(3);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f2200  size 0x38c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_TestCourse_2200(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = (int)param_1;
  lVar4 = Composer_ConsumeConfirm(iVar1 + 0xc44);
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(0x32);
    iVar3 = UiMgr_FindLayout(0x10);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x33);
    iVar3 = UiMgr_FindLayout(0x10);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x36);
    iVar3 = UiMgr_FindLayout(0x10);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x10,0);
  if (lVar4 == 0) {
    Composer_ClearDirty(iVar1 + 0xc44);
  }
  lVar4 = Nameentry_GetField_18(iVar1 + 0xc44);
  if ((lVar4 != 0) && (lVar4 = UiLayout_UpdateAnimById(0x10,1), lVar4 == 0)) {
    Composer_ConsumeRedraw(iVar1 + 0xc44);
  }
  lVar4 = Nameentry_GetField_14(iVar1 + 0xc44);
  if ((lVar4 == 0) && (lVar4 = Nameentry_GetField_18(iVar1 + 0xc44), lVar4 == 0)) {
    MenuWnd_SetItemState(0x10,*(undefined4 *)(&DAT_0036eee8 + *(int *)(iVar1 + 0xd74) * 4),1,0);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  MenuWnd_DrawText(0x10,0x1b,9);
  MenuWnd_DrawText(0x10,0x1d,10);
  MenuWnd_DrawLabel(0x10,0x1c,0x4d,*(int *)(iVar1 + 0xd70) + 0xd);
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x10,2);
  iVar1 = UiMgr_FindLayout(0x10);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f2590  size 0x38c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_TestCourse_2590(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = (int)param_1;
  lVar4 = Composer_ConsumeConfirm(iVar1 + 0xc44);
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(0x34);
    iVar3 = UiMgr_FindLayout(4);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x35);
    iVar3 = UiMgr_FindLayout(4);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x36);
    iVar3 = UiMgr_FindLayout(4);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(4,0);
  if (lVar4 == 0) {
    Composer_ClearDirty(iVar1 + 0xc44);
  }
  lVar4 = Nameentry_GetField_18(iVar1 + 0xc44);
  if ((lVar4 != 0) && (lVar4 = UiLayout_UpdateAnimById(4,1), lVar4 == 0)) {
    Composer_ConsumeRedraw(iVar1 + 0xc44);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  MenuWnd_DrawText(4,0x1b,9);
  MenuWnd_DrawText(4,0x1d,10);
  MenuWnd_DrawLabel(4,0x1c,0x49,*(int *)(iVar1 + 0xd70) + 0xd);
  lVar4 = Nameentry_GetField_14(iVar1 + 0xc44);
  if ((lVar4 == 0) && (lVar4 = Nameentry_GetField_18(iVar1 + 0xc44), lVar4 == 0)) {
    MenuWnd_SetItemState(4,*(undefined4 *)(&DAT_0036eee0 + *(int *)(iVar1 + 0xd74) * 4),1,0);
  }
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(4,2);
  iVar1 = UiMgr_FindLayout(4);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f2920  size 0x8f8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_TestCourse_2920(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar3 = (int)param_1;
  lVar4 = Composer_ConsumeConfirm(iVar3 + 0xc44);
  if (lVar4 != 0) {
    uVar1 = UiRes_GetLayoutData(0x2a);
    iVar2 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x2b);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x2c);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar1 = UiRes_GetLayoutData(0x2d);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar1;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar1 = UiRes_GetLayoutData(0x2e);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar1 = UiRes_GetLayoutData(0x2f);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar2 + 900) = 0;
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x37c) = 0;
    *(undefined4 *)(iVar2 + 900) = uVar1;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    uVar1 = UiRes_GetLayoutData(0x30);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x398) = 0;
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x390) = 0;
    *(undefined4 *)(iVar2 + 0x398) = uVar1;
    *(undefined4 *)(iVar2 + 0x394) = 1;
    uVar1 = UiRes_GetLayoutData(0x31);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3ac) = 0;
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3a4) = 0;
    *(undefined4 *)(iVar2 + 0x3ac) = uVar1;
    *(undefined4 *)(iVar2 + 0x3a8) = 1;
    uVar1 = UiRes_GetLayoutData(0x14);
    iVar2 = UiMgr_FindLayout(8);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x15);
    iVar2 = UiMgr_FindLayout(8);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x16);
    iVar2 = UiMgr_FindLayout(8);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar1 = UiRes_GetLayoutData(0x17);
    iVar2 = UiMgr_FindLayout(8);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar1;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x8f,8);
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x90,8);
  }
  lVar4 = Nameentry_Nop_2(iVar3 + 0xc44);
  if (((lVar4 == 8) || (lVar4 = Nameentry_Nop_2(iVar3 + 0xc44), lVar4 == 9)) ||
     ((lVar4 = Nameentry_Nop_2(iVar3 + 0xc44), lVar4 == 0xf &&
      ((*(uint *)(iVar3 + 0xccc) & 0x400) != 0)))) {
    Composer_ClearDirty(iVar3 + 0xc44);
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xd,0);
    lVar5 = UiLayout_UpdateAnimById(0xd,2);
    lVar6 = UiLayout_UpdateAnimById(0xd,4);
    lVar7 = UiLayout_UpdateAnimById(8,0);
    if (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0))) {
      Composer_ClearDirty(iVar3 + 0xc44);
      *(uint *)(iVar3 + 0xccc) = *(uint *)(iVar3 + 0xccc) | 0x400;
    }
  }
  lVar4 = Nameentry_GetField_18(iVar3 + 0xc44);
  if (lVar4 != 0) {
    lVar4 = Nameentry_GetField_8_81f0(iVar3 + 0xc44);
    if ((((lVar4 == 8) || (lVar4 = Nameentry_GetField_8_81f0(iVar3 + 0xc44), lVar4 == 9)) ||
        (lVar4 = Nameentry_GetField_8_81f0(iVar3 + 0xc44), lVar4 == 0xf)) ||
       (lVar4 = Nameentry_GetField_8_81f0(iVar3 + 0xc44), lVar4 == 10)) {
      Composer_ConsumeRedraw(iVar3 + 0xc44);
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xd,1);
      lVar5 = UiLayout_UpdateAnimById(0xd,3);
      lVar6 = UiLayout_UpdateAnimById(0xd,5);
      lVar7 = UiLayout_UpdateAnimById(8,1);
      if (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0))) {
        Composer_ConsumeRedraw(iVar3 + 0xc44);
      }
    }
  }
  maybe_ComposerUi_AnimateNameC(param_1,0);
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  Composer_DrawLabel(0x47,3);
  UiLayout_UpdateAnimById(0,0);
  iVar3 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002f3220  size 0x170
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_TestCourse_3220(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = (int)param_1;
  lVar2 = Composer_ConsumeConfirm(iVar1 + 0xc44);
  if (lVar2 != 0) {
    Composer_ShowPanel(0);
  }
  lVar2 = Nameentry_Draw_Rokko(7,0xffffffffffffffff);
  if (lVar2 == 1) {
    Composer_ClearDirty(iVar1 + 0xc44);
  }
  lVar3 = Nameentry_GetField_18(iVar1 + 0xc44);
  if (lVar3 != 0) {
    if (lVar2 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar2 == 3) {
      Composer_ConsumeRedraw(iVar1 + 0xc44);
    }
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,1);
  Composer_DrawLabel(0x42,3);
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f3390  size 0x484
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_TestCourse_3390(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = (int)param_1;
  lVar4 = Composer_ConsumeConfirm(iVar1 + 0xc44);
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(0x32);
    iVar3 = UiMgr_FindLayout(0x10);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x33);
    iVar3 = UiMgr_FindLayout(0x10);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x36);
    iVar3 = UiMgr_FindLayout(0x10);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x10,0);
  if (lVar4 == 0) {
    Composer_ClearDirty(iVar1 + 0xc44);
  }
  lVar4 = Nameentry_GetField_18(iVar1 + 0xc44);
  if (lVar4 != 0) {
    lVar4 = Nameentry_GetField_8_81f0(iVar1 + 0xc44);
    if (lVar4 == 4) {
      lVar4 = UiLayout_UpdateAnimById(0x10,1);
      if (lVar4 == 0) {
        Composer_ConsumeRedraw(iVar1 + 0xc44);
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xd,1);
      lVar5 = UiLayout_UpdateAnimById(0xd,3);
      lVar6 = UiLayout_UpdateAnimById(0xd,5);
      lVar7 = UiLayout_UpdateAnimById(8,1);
      lVar8 = UiLayout_UpdateAnimById(0x10,1);
      if (lVar8 == 0 && (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)))) {
        Composer_ConsumeRedraw(iVar1 + 0xc44);
      }
      iVar3 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
      iVar3 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
    }
  }
  lVar4 = Nameentry_GetField_14(iVar1 + 0xc44);
  if ((lVar4 == 0) && (lVar4 = Nameentry_GetField_18(iVar1 + 0xc44), lVar4 == 0)) {
    MenuWnd_SetItemState(0x10,*(undefined4 *)(*(int *)(iVar1 + 0xd74) * 4 + 0x36eed8),1,0);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,1);
  MenuWnd_DrawText(0x10,0x1b,9);
  MenuWnd_DrawText(0x10,0x1d,10);
  MenuWnd_DrawText(0x10,0x1c,0x4a);
  Composer_DrawLabel(0x42,3);
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x10,2);
  iVar1 = UiMgr_FindLayout(0x10);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002f3820  size 0x964
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_TestCourse_3820(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar3 = (int)param_1;
  lVar4 = Composer_ConsumeConfirm(iVar3 + 0xc44);
  if (lVar4 != 0) {
    lVar4 = Nameentry_Nop_2(iVar3 + 0xc44);
    if (lVar4 != 5) {
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
    }
    uVar1 = UiRes_GetLayoutData(0x2a);
    iVar2 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x2b);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x2c);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar1 = UiRes_GetLayoutData(0x2d);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar1;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar1 = UiRes_GetLayoutData(0x2e);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar1 = UiRes_GetLayoutData(0x2f);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar2 + 900) = 0;
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x37c) = 0;
    *(undefined4 *)(iVar2 + 900) = uVar1;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    uVar1 = UiRes_GetLayoutData(0x30);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x398) = 0;
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x390) = 0;
    *(undefined4 *)(iVar2 + 0x398) = uVar1;
    *(undefined4 *)(iVar2 + 0x394) = 1;
    uVar1 = UiRes_GetLayoutData(0x31);
    iVar2 = UiMgr_FindLayout(0xd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3ac) = 0;
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3a4) = 0;
    *(undefined4 *)(iVar2 + 0x3ac) = uVar1;
    *(undefined4 *)(iVar2 + 0x3a8) = 1;
    uVar1 = UiRes_GetLayoutData(0x14);
    iVar2 = UiMgr_FindLayout(8);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x15);
    iVar2 = UiMgr_FindLayout(8);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x16);
    iVar2 = UiMgr_FindLayout(8);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar1 = UiRes_GetLayoutData(0x17);
    iVar2 = UiMgr_FindLayout(8);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar1;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x8f,8);
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x90,8);
  }
  lVar4 = Nameentry_Nop_2(iVar3 + 0xc44);
  if (lVar4 == 5) {
    Composer_ClearDirty(iVar3 + 0xc44);
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xd,0);
    lVar5 = UiLayout_UpdateAnimById(0xd,2);
    lVar6 = UiLayout_UpdateAnimById(0xd,4);
    lVar7 = UiLayout_UpdateAnimById(8,0);
    if (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0))) {
      Composer_ClearDirty(iVar3 + 0xc44);
    }
  }
  lVar4 = Nameentry_GetField_18(iVar3 + 0xc44);
  if (lVar4 != 0) {
    lVar4 = Nameentry_GetField_8_81f0(iVar3 + 0xc44);
    if (lVar4 == 5) {
      Composer_ConsumeRedraw(iVar3 + 0xc44);
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xd,1);
      lVar5 = UiLayout_UpdateAnimById(0xd,3);
      lVar6 = UiLayout_UpdateAnimById(0xd,5);
      lVar7 = UiLayout_UpdateAnimById(8,1);
      if (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0))) {
        Composer_ConsumeRedraw(iVar3 + 0xc44);
      }
      iVar3 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
      iVar3 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
    }
  }
  maybe_ComposerUi_AnimateNameC(param_1,1);
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,1);
  Composer_DrawLabel(0x42,3);
  UiLayout_UpdateAnimById(0,0);
  iVar3 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

