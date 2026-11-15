// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002e4000 - 0x002e8000
#include "ghidra_types.h"

// 0x002e41b0  size 0x4e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Rokko(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [64];
  
  lVar4 = Composer_ConsumeConfirm();
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(0x3b);
    iVar3 = UiMgr_FindLayout(9);
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
    uVar2 = UiRes_GetLayoutData(0x3c);
    iVar3 = UiMgr_FindLayout(9);
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
    uVar2 = UiRes_GetLayoutData(0x41);
    iVar3 = UiMgr_FindLayout(9);
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
  lVar4 = UiLayout_UpdateAnimById(9,0);
  if (lVar4 == 0) {
    Composer_ClearDirty(param_1);
  }
  lVar4 = Nameentry_GetField_18(param_1);
  if ((lVar4 != 0) && (lVar4 = UiLayout_UpdateAnimById(9,1), lVar4 == 0)) {
    Composer_ConsumeRedraw(param_1);
  }
  lVar4 = Nameentry_GetField_14(param_1);
  iVar3 = (int)param_1;
  if ((lVar4 == 0) && (lVar4 = Nameentry_GetField_18(param_1), lVar4 == 0)) {
    MenuWnd_SetItemState(9,*(undefined4 *)(&DAT_0036eec0 + *(int *)(iVar3 + 0x6c) * 4),1,0);
  }
  MenuWnd_DrawText(9,0x1b,9);
  MenuWnd_DrawText(9,0x1d,10);
  MenuWnd_DrawLabel(9,0x1c,5,0,*(int *)(iVar3 + 0x60) + 1);
  iVar1 = UiMgr_FindLayout(9);
  UiElem_GetRect(*_g_UiMgr + iVar1 * 0x4f4 + 4,auStack_40,0x1e);
  uVar5 = SeqGen_GetPartTextId(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x60));
  UiText_DrawPlayerName(auStack_40,uVar5,0);
  MenuWnd_DrawText(9,0x1f,0x32);
  UiLayout_UpdateAnimById(9,2);
  iVar1 = UiMgr_FindLayout(9);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  Composer_DrawLabel(0xffffffffffffffff,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar3 + 0x70) == -1) ||
     ((lVar4 = Nameentry_GetField_4_8200(param_1), lVar4 == 1 &&
      (*(int *)(iVar3 + 0x60) != *(int *)(iVar3 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar3 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  lVar4 = ComposerScene_IsChanging();
  if (lVar4 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
  }
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002e46a0  size 0x4bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Hakone_46a0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = Composer_ConsumeConfirm();
  iVar3 = (int)param_1;
  if (lVar4 != 0) {
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
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],5);
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar4 = Nameentry_GetField_18(param_1);
  if (lVar4 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  Composer_DrawLabel(0x2a,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar3 + 0x70) == -1) ||
     ((lVar4 = Nameentry_GetField_4_8200(param_1), lVar4 == 1 &&
      (*(int *)(iVar3 + 0x60) != *(int *)(iVar3 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar3 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  lVar4 = ComposerScene_IsChanging();
  if (lVar4 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
  }
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002e4b60  size 0x568
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Hakone_4b60(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = Composer_ConsumeConfirm();
  iVar3 = (int)param_1;
  if (lVar4 != 0) {
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
    uVar1 = UiRes_GetLayoutData(0x18);
    iVar2 = UiMgr_FindLayout(8);
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
    *(undefined4 *)(iVar2 + 0x368) = 1;
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],5);
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar4 = Nameentry_GetField_18(param_1);
  if (lVar4 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  if (*(int *)(iVar3 + 0x54) == -1) {
    Composer_DrawLabel(0x28,3);
  }
  else {
    Composer_DrawLabel(0x29,3);
  }
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar3 + 0x70) == -1) ||
     ((lVar4 = Nameentry_GetField_4_8200(param_1), lVar4 == 1 &&
      (*(int *)(iVar3 + 0x60) != *(int *)(iVar3 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar3 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  lVar4 = ComposerScene_IsChanging();
  if (lVar4 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
  }
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002e50d0  size 0xb8
/* screen record 0x3428ac */

void ScrDraw_Hakone_Exit(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = Composer_ConsumeConfirm();
  if (lVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    Composer_ShowPanel(1);
  }
  lVar1 = Nameentry_Draw_Rokko(0x2e,*(undefined4 *)((int)param_1 + 0x6c));
  if (lVar1 == 1) {
    Composer_ClearDirty(param_1);
  }
  lVar2 = Nameentry_GetField_18(param_1);
  if (lVar2 != 0) {
    if (lVar1 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar1 == 3) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  Composer_DrawLabel(0xffffffffffffffff,3);
  return;
}

// 0x002e5190  size 0x67c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3428ac */

void ScrDraw_Hakone_Update(undefined8 param_1)

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
  int iVar11;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined1 auStack_4 [4];
  
  lVar6 = Composer_ConsumeConfirm();
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
    Composer_ClearDirty(param_1);
  }
  UiLayout_UpdateAnimById(2,4);
  UiLayout_UpdateAnimById(2,5);
  iVar11 = 0;
  iVar5 = (int)param_1;
  if (DAT_00342a60 != -1) {
    piVar9 = &DAT_00342a60;
    do {
      iVar2 = Keyboard_GetIndex(iVar5 + 0x30);
      if (((iVar11 == iVar2) && (lVar6 = Nameentry_GetField_14(param_1), lVar6 == 0)) &&
         (lVar6 = Nameentry_GetField_18(param_1), lVar6 == 0)) {
        iVar2 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,*piVar9,8);
      }
      else if (*piVar9 != 0) {
        iVar2 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*piVar9,8);
      }
      piVar9 = piVar9 + 1;
      iVar11 = iVar11 + 1;
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
  iVar11 = *(int *)(iVar5 + 0x38);
  iVar2 = 0;
  if (0 < iVar11) {
    puVar10 = &DAT_00342b70;
    do {
      auStack_4[0] = *(undefined1 *)(iVar5 + iVar2 + 0x3c);
      iVar11 = UiMgr_FindLayout(2);
      UiElem_GetRect(*_g_UiMgr + iVar11 * 0x4f4 + 4,auStack_40,*puVar10);
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar11 = *(int *)(iVar5 + 0x38);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar2 < iVar11);
  }
  if ((iVar11 < 0xf) && (lVar6 = Keyboard_IsCharAllowed(iVar5 + 0x30), lVar6 != 0)) {
    auStack_4[0] = Keyboard_GetChar(iVar5 + 0x30);
    iVar11 = UiMgr_FindLayout(2);
    UiElem_GetRect(*_g_UiMgr + iVar11 * 0x4f4 + 4,auStack_40,(&DAT_00342b70)[*(int *)(iVar5 + 0x38)]
                  );
    UiText_DrawPlayerName(auStack_40,auStack_4,0);
    lVar6 = Nameentry_GetField_14(param_1);
    if ((lVar6 == 0) && (lVar6 = Nameentry_GetField_18(param_1), lVar6 == 0)) {
      iVar11 = UiMgr_FindLayout(2);
      UiElem_GetRect(*_g_UiMgr + iVar11 * 0x4f4 + 4,auStack_40,
                     *(undefined4 *)(&DAT_00342bb0 + *(int *)(iVar5 + 0x38) * 4));
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
    }
  }
  lVar6 = Nameentry_GetField_18(param_1);
  if (lVar6 != 0) {
    lVar6 = UiLayout_UpdateAnimById(2,1);
    lVar7 = UiLayout_UpdateAnimById(2,3);
    if (lVar6 == 0 && lVar7 == 0) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  Composer_DrawLabel(0x27,3);
  iVar5 = UiMgr_FindLayout(2);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  return;
}

// 0x002e5810  size 0xa4c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Hakone_5810(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = Composer_ConsumeConfirm();
  iVar3 = (int)param_1;
  if (lVar4 != 0) {
    uVar1 = UiRes_GetLayoutData(0xb);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0xc);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0xd);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0xe);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0xf);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0x10);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0x11);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0x12);
    iVar2 = UiMgr_FindLayout(7);
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
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],5);
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  lVar4 = Nameentry_Nop_2(param_1);
  if ((lVar4 == 4) || (lVar4 = Nameentry_Nop_2(param_1), lVar4 == 5)) {
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],5);
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],8);
    lVar4 = UiLayout_UpdateAnimById(7,0);
    lVar5 = UiLayout_UpdateAnimById(7,2);
    lVar6 = UiLayout_UpdateAnimById(7,4);
    lVar7 = UiLayout_UpdateAnimById(8,0);
    if (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0))) {
      Composer_ClearDirty(param_1);
    }
  }
  else {
    Composer_ClearDirty(param_1);
  }
  lVar4 = Nameentry_GetField_18(param_1);
  if (lVar4 != 0) {
    lVar4 = Nameentry_GetField_8_81f0(param_1);
    if (lVar4 == 4) {
      lVar4 = UiLayout_UpdateAnimById(7,1);
      lVar5 = UiLayout_UpdateAnimById(7,3);
      lVar6 = UiLayout_UpdateAnimById(7,5);
      lVar7 = UiLayout_UpdateAnimById(8,1);
      if (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0))) {
        Composer_ConsumeRedraw(param_1);
      }
    }
    else {
      Composer_ConsumeRedraw(param_1);
    }
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  Composer_DrawLabel(0x26,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar3 + 0x70) == -1) ||
     ((lVar4 = Nameentry_GetField_4_8200(param_1), lVar4 == 1 &&
      (*(int *)(iVar3 + 0x60) != *(int *)(iVar3 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar3 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  lVar4 = ComposerScene_IsChanging();
  if (lVar4 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
  }
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002e6260  size 0x568
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Hakone_6260(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = Composer_ConsumeConfirm();
  iVar3 = (int)param_1;
  if (lVar4 != 0) {
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
    uVar1 = UiRes_GetLayoutData(0x18);
    iVar2 = UiMgr_FindLayout(8);
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
    *(undefined4 *)(iVar2 + 0x368) = 1;
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],5);
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar4 = Nameentry_GetField_18(param_1);
  if (lVar4 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  if (*(int *)(iVar3 + 0x54) == -1) {
    Composer_DrawLabel(0x24,3);
  }
  else {
    Composer_DrawLabel(0x25,3);
  }
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar3 + 0x70) == -1) ||
     ((lVar4 = Nameentry_GetField_4_8200(param_1), lVar4 == 1 &&
      (*(int *)(iVar3 + 0x60) != *(int *)(iVar3 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar3 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  lVar4 = ComposerScene_IsChanging();
  if (lVar4 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
  }
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002e67d0  size 0x4bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Hakone_67d0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = Composer_ConsumeConfirm();
  iVar3 = (int)param_1;
  if (lVar4 != 0) {
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
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],5);
    iVar2 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                        (&DAT_003428d0)[*(int *)(iVar3 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar4 = Nameentry_GetField_18(param_1);
  if (lVar4 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  Composer_DrawLabel(0x23,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar3 + 0x70) == -1) ||
     ((lVar4 = Nameentry_GetField_4_8200(param_1), lVar4 == 1 &&
      (*(int *)(iVar3 + 0x60) != *(int *)(iVar3 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar3 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  lVar4 = ComposerScene_IsChanging();
  if (lVar4 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x90,8);
  }
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002e6c90  size 0xa08
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Hakone_6c90(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  lVar3 = Composer_ConsumeConfirm();
  if (lVar3 != 0) {
    uVar1 = UiRes_GetLayoutData(0xb);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0xc);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0xd);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0xe);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0xf);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0x10);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0x11);
    iVar2 = UiMgr_FindLayout(7);
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
    uVar1 = UiRes_GetLayoutData(0x12);
    iVar2 = UiMgr_FindLayout(7);
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
    MenuWnd_SetItemVisible(0);
    uVar9 = 0;
    puVar8 = &DAT_003428d0;
    do {
      iVar2 = UiMgr_FindLayout(7);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar8,8);
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 < 6);
    Menu_ClearSlot(0);
  }
  lVar3 = Nameentry_GetField_14(param_1);
  iVar2 = (int)param_1;
  if (lVar3 == 0) {
    MenuWnd_SetItemState(7,(&DAT_003428d0)[*(int *)(iVar2 + 0x50)],1,0);
  }
  lVar3 = Nameentry_Nop_2(param_1);
  if (lVar3 < 0) {
    lVar3 = UiLayout_UpdateAnimById(7,0);
    lVar4 = UiLayout_UpdateAnimById(7,2);
    lVar5 = UiLayout_UpdateAnimById(7,4);
    lVar6 = UiLayout_UpdateAnimById(8,0);
    if (lVar6 == 0 && (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0))) {
      Composer_ClearDirty(param_1);
    }
  }
  else {
    Composer_ClearDirty(param_1);
  }
  lVar3 = Nameentry_GetField_18(param_1);
  if (lVar3 != 0) {
    lVar3 = ComposerScene_IsChanging();
    if (lVar3 == 0) {
      Composer_ConsumeRedraw(param_1);
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(7,1);
      lVar4 = UiLayout_UpdateAnimById(7,3);
      lVar5 = UiLayout_UpdateAnimById(7,5);
      lVar6 = UiLayout_UpdateAnimById(8,1);
      if (lVar6 == 0 && (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0))) {
        Composer_ConsumeRedraw(param_1);
        uVar9 = *(uint *)(iVar2 + 0x50);
        goto LAB_002e6d1c;
      }
    }
  }
  uVar9 = *(uint *)(iVar2 + 0x50);
LAB_002e6d1c:
  uVar7 = 0xffffffffffffffff;
  if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar9) {
    case 0:
      if (*(int *)(iVar2 + 0x70) == -1) {
        uVar7 = 0x1d;
      }
      else {
        uVar7 = 0x33;
      }
      break;
    case 1:
      uVar7 = 0x1e;
      break;
    case 2:
      uVar7 = 0x1f;
      break;
    case 3:
      uVar7 = 0x20;
      break;
    case 4:
      uVar7 = 0x21;
      break;
    case 5:
      uVar7 = 0x22;
    }
  }
  Composer_DrawLabel(uVar7,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar2 + 0x70) == -1) ||
     ((lVar3 = Nameentry_GetField_4_8200(param_1), lVar3 == 1 &&
      (*(int *)(iVar2 + 0x60) != *(int *)(iVar2 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar2 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  lVar3 = ComposerScene_IsChanging();
  if (lVar3 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x8f,8);
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x90,8);
  }
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x002e76a0  size 0x7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3433ec */

void ScrNameentryGetField48200_Updatee76a0(undefined8 param_1)

{
  int iVar1;
  
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = Nameentry_GetField_4_8200(param_1);
  (*(code *)(&PTR_Eventui_Draw_Hakone_6c90_003428a0)[iVar1])(param_1);
  return;
}

// 0x002e7720  size 0x8
/* screen record 0x3433ec */

void ScrNameentryGetField48200_Exite7720(void)

{
  return;
}

// 0x002e7730  size 0x27c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3433ec */

void ScrNameentryGetField48200_Entere7730(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
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
  uVar1 = UiRes_GetLayoutData(0x13);
  iVar2 = UiMgr_FindLayout(7);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x3b4) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x3c0) = 0;
  *(undefined4 *)(iVar2 + 0x3b0) = 0;
  if (*(int *)(iVar2 + 0x3c0) == 0) {
    *(undefined4 *)(iVar2 + 0x3bc) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x3bc) = 1;
  }
  *(undefined4 *)(iVar2 + 0x3b0) = 0;
  if (*(int *)(iVar2 + 0x3c0) == 0) {
    *(undefined4 *)(iVar2 + 0x3bc) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x3bc) = 1;
  }
  *(undefined4 *)(iVar2 + 0x3b8) = 1;
  *(undefined4 *)(iVar2 + 0x3c0) = uVar1;
  *(undefined4 *)(iVar2 + 0x3bc) = 1;
  uVar1 = UiRes_GetLayoutData(0x18);
  iVar2 = UiMgr_FindLayout(8);
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
  *(undefined4 *)(iVar2 + 0x368) = 1;
  *(undefined4 *)(iVar2 + 0x370) = uVar1;
  *(undefined4 *)(iVar2 + 0x36c) = 1;
  iVar2 = UiMgr_FindLayout(8);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x8f,8);
  iVar2 = UiMgr_FindLayout(8);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x90,8);
  iVar3 = UiMgr_FindLayout(8);
  iVar2 = *_g_UiMgr;
  uVar4 = UiRes_GetLayoutData(0x42);
  UiLayout_IsAnimDone(iVar2 + iVar3 * 0x4f4 + 4,5,0x8f,uVar4,1);
  iVar3 = UiMgr_FindLayout(8);
  iVar2 = *_g_UiMgr;
  uVar4 = UiRes_GetLayoutData(0x43);
  UiLayout_IsAnimDone(iVar2 + iVar3 * 0x4f4 + 4,6,0x90,uVar4,1);
  return;
}

// 0x002e79b0  size 0x12c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_TestCourse(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = Composer_ConsumeConfirm();
  if (lVar2 != 0) {
    Composer_ShowPanel(1);
  }
  lVar2 = Nameentry_Draw_Rokko(0x12,*(undefined4 *)((int)param_1 + 0x24));
  if (lVar2 == 1) {
    Composer_ClearDirty(param_1);
  }
  lVar3 = Nameentry_GetField_18(param_1);
  if (lVar3 != 0) {
    if (lVar2 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar2 == 3) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  MenuWnd_DrawText(5,0x1f,0);
  MenuWnd_DrawText(5,0x20,1);
  MenuWnd_DrawText(5,0x21,2);
  MenuWnd_DrawText(5,0x22,3);
  MenuWnd_DrawText(5,0x23,4);
  iVar1 = UiMgr_FindLayout(5);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  Composer_DrawLabel(0xffffffffffffffff,3);
  return;
}

// 0x002e7ae0  size 0x12c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_TestCourse_7ae0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = Composer_ConsumeConfirm();
  if (lVar2 != 0) {
    Composer_ShowPanel(1);
  }
  lVar2 = Nameentry_Draw_Rokko(0x11,*(undefined4 *)((int)param_1 + 0x24));
  if (lVar2 == 1) {
    Composer_ClearDirty(param_1);
  }
  lVar3 = Nameentry_GetField_18(param_1);
  if (lVar3 != 0) {
    if (lVar2 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar2 == 3) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  MenuWnd_DrawText(5,0x1f,0);
  MenuWnd_DrawText(5,0x20,1);
  MenuWnd_DrawText(5,0x21,2);
  MenuWnd_DrawText(5,0x22,3);
  MenuWnd_DrawText(5,0x23,4);
  iVar1 = UiMgr_FindLayout(5);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  Composer_DrawLabel(0xffffffffffffffff,3);
  return;
}

// 0x002e7c10  size 0x278
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_TestCourse_7c10(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = Composer_ConsumeConfirm();
  if (lVar3 != 0) {
    uVar1 = UiRes_GetLayoutData(0x25);
    iVar2 = UiMgr_FindLayout(6);
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
    uVar1 = UiRes_GetLayoutData(0x26);
    iVar2 = UiMgr_FindLayout(6);
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
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(6,0);
  if (lVar3 == 0) {
    Composer_ClearDirty(param_1);
  }
  lVar3 = Nameentry_GetField_18(param_1);
  if ((lVar3 != 0) && (lVar3 = UiLayout_UpdateAnimById(6,1), lVar3 == 0)) {
    Composer_ConsumeRedraw(param_1);
  }
  lVar3 = Nameentry_GetField_14(param_1);
  if (lVar3 == 0) {
    MenuWnd_SetItemState(6,*(undefined4 *)(*(int *)((int)param_1 + 0x24) * 4 + 0x36eec8),1,0);
  }
  MenuWnd_DrawText(5,0x22,3);
  MenuWnd_DrawText(6,0xd,0x13);
  MenuWnd_DrawText(6,0xe,0x14);
  iVar2 = UiMgr_FindLayout(5);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  if (*(int *)((int)param_1 + 0x24) == 0) {
    Composer_DrawLabel(0x15,3);
  }
  else {
    Composer_DrawLabel(0x16,3);
  }
  return;
}

// 0x002e7e90  size 0x4f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_TestCourse_7e90(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = Composer_ConsumeConfirm();
  if (lVar3 != 0) {
    uVar1 = UiRes_GetLayoutData(1);
    iVar2 = UiMgr_FindLayout(5);
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
    uVar1 = UiRes_GetLayoutData(2);
    iVar2 = UiMgr_FindLayout(5);
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
    uVar1 = UiRes_GetLayoutData(3);
    iVar2 = UiMgr_FindLayout(5);
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
    uVar1 = UiRes_GetLayoutData(4);
    iVar2 = UiMgr_FindLayout(5);
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
    uVar1 = UiRes_GetLayoutData(0x3a);
    iVar2 = UiMgr_FindLayout(5);
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
    Menu_ClearSlot(0);
  }
  lVar3 = Nameentry_Nop_2(param_1);
  if (lVar3 == 1) {
    lVar3 = UiLayout_UpdateAnimById(5,0);
    if (lVar3 == 0) {
      Composer_ClearDirty(param_1);
    }
  }
  else {
    lVar3 = UiLayout_UpdateAnimById(5,0);
    lVar4 = UiLayout_UpdateAnimById(5,1);
    if (lVar3 == 0 && lVar4 == 0) {
      Composer_ClearDirty(param_1);
    }
  }
  lVar3 = Nameentry_GetField_18(param_1);
  if (lVar3 != 0) {
    MenuWnd_SetItemVisible(0);
    lVar3 = Nameentry_GetField_8_81f0(param_1);
    if (lVar3 == 1) {
      lVar3 = UiLayout_UpdateAnimById(5,4);
      if (lVar3 == 0) {
        Composer_ConsumeRedraw(param_1);
      }
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(5,2);
      lVar4 = UiLayout_UpdateAnimById(5,3);
      if (lVar3 == 0 && lVar4 == 0) {
        Composer_ConsumeRedraw(param_1);
      }
    }
  }
  lVar3 = Nameentry_GetField_14(param_1);
  if ((lVar3 == 0) && (lVar3 = Nameentry_GetField_18(param_1), lVar3 == 0)) {
    MenuWnd_SetItemState(5,*(undefined4 *)(&DAT_00342c00 + *(int *)((int)param_1 + 0x20) * 4),1,0);
  }
  MenuWnd_DrawText(5,0x1f,0);
  MenuWnd_DrawText(5,0x20,1);
  MenuWnd_DrawText(5,0x21,2);
  MenuWnd_DrawText(5,0x22,3);
  MenuWnd_DrawText(5,0x23,4);
  iVar2 = UiMgr_FindLayout(5);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = *(int *)((int)param_1 + 0x20);
  uVar5 = 0xffffffffffffffff;
  if (iVar2 == 4) {
    uVar5 = 0x10;
  }
  else if (iVar2 == 3) {
    uVar5 = 0xf;
  }
  else if (iVar2 == 2) {
    uVar5 = 0xe;
  }
  else if (iVar2 == 1) {
    uVar5 = 0xd;
  }
  else if (iVar2 == 0) {
    uVar5 = 0xc;
  }
  Composer_DrawLabel(uVar5,3);
  return;
}

