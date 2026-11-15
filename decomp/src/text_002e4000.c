// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002e4000 - 0x002e8000
#include "ghidra_types.h"

// 0x002e41b0  size 0x4e8
void Eventui_Draw_Rokko(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined4 auStack_40 [16];
  
  lVar7 = Composer_ConsumeConfirm();
  if (lVar7 != 0) {
    uVar4 = UiRes_GetLayoutData(0x3b);
    iVar5 = UiMgr_FindLayout(9);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar5].layout.unk_310 = 0xffffffff;
    pUVar1[iVar5].layout.unk_31c = 0;
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    pUVar1[iVar5].layout.unk_31c = uVar4;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x3c);
    iVar5 = UiMgr_FindLayout(9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar6;
    pUVar1[iVar5].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x41);
    iVar5 = UiMgr_FindLayout(9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x9,0);
  if (!bVar2) {
    Composer_ClearDirty(param_1);
  }
  lVar7 = Nameentry_GetField_18(param_1);
  if ((lVar7 != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x9,1), !bVar2)) {
    Composer_ConsumeRedraw(param_1);
  }
  lVar7 = Nameentry_GetField_14(param_1);
  iVar5 = (int)param_1;
  if ((lVar7 == 0) && (lVar7 = Nameentry_GetField_18(param_1), lVar7 == 0)) {
    MenuWnd_SetItemState(9,*(undefined4 *)(&DAT_0036eec0 + *(int *)(iVar5 + 0x6c) * 4),1,0);
  }
  MenuWnd_DrawText(9,0x1b,9);
  MenuWnd_DrawText(9,0x1d,10);
  MenuWnd_DrawLabel(9,0x1c,5,0,*(int *)(iVar5 + 0x60) + 1);
  iVar3 = UiMgr_FindLayout(9);
  UiElem_GetRect(&g_UiMgr->slots[iVar3].layout,auStack_40,0x1e);
  uVar8 = SeqGen_GetPartTextId(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x60));
  UiText_DrawPlayerName(auStack_40,uVar8,0);
  MenuWnd_DrawText(9,0x1f,0x32);
  UiLayout_UpdateAnimById((UiLayout *)0x9,2);
  iVar3 = UiMgr_FindLayout(9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  Composer_DrawLabel(0xffffffffffffffff,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar5 + 0x70) == -1) ||
     ((lVar7 = Nameentry_GetField_4_8200(param_1), lVar7 == 1 &&
      (*(int *)(iVar5 + 0x60) != *(int *)(iVar5 + 0x70))))) {
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar5 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  lVar7 = ComposerScene_IsChanging();
  if (lVar7 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x8f,8,extraout_a3_lo);
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x90,8,extraout_a3_lo_00);
  }
  iVar5 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x002e46a0  size 0x4bc
void Eventui_Draw_Hakone_46a0(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  lVar6 = Composer_ConsumeConfirm();
  iVar5 = (int)param_1;
  if (lVar6 != 0) {
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar3].layout.unk_310 = 0xffffffff;
    pUVar1[iVar3].layout.unk_31c = 0;
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    pUVar1[iVar3].layout.unk_31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x15);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar4;
    pUVar1[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x16);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x17);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar5 + 0x50)],5,(byte)g_UiMgr->slots);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar5 + 0x50)],8,(byte)g_UiMgr->slots);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar6 = Nameentry_GetField_18(param_1);
  if (lVar6 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  Composer_DrawLabel(0x2a,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar5 + 0x70) == -1) ||
     ((lVar6 = Nameentry_GetField_4_8200(param_1), lVar6 == 1 &&
      (*(int *)(iVar5 + 0x60) != *(int *)(iVar5 + 0x70))))) {
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar5 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  lVar6 = ComposerScene_IsChanging();
  if (lVar6 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x8f,8,extraout_a3_lo);
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x90,8,extraout_a3_lo_00);
  }
  iVar5 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x002e4b60  size 0x568
void Eventui_Draw_Hakone_4b60(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  lVar6 = Composer_ConsumeConfirm();
  iVar5 = (int)param_1;
  if (lVar6 != 0) {
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar3].layout.unk_310 = 0xffffffff;
    pUVar1[iVar3].layout.unk_31c = 0;
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    pUVar1[iVar3].layout.unk_31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x15);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar4;
    pUVar1[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x16);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x17);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x18);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar5 + 0x50)],5,(byte)g_UiMgr->slots);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar5 + 0x50)],8,(byte)g_UiMgr->slots);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar6 = Nameentry_GetField_18(param_1);
  if (lVar6 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  if (*(int *)(iVar5 + 0x54) == -1) {
    Composer_DrawLabel(0x28,3);
  }
  else {
    Composer_DrawLabel(0x29,3);
  }
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar5 + 0x70) == -1) ||
     ((lVar6 = Nameentry_GetField_4_8200(param_1), lVar6 == 1 &&
      (*(int *)(iVar5 + 0x60) != *(int *)(iVar5 + 0x70))))) {
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar5 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  lVar6 = ComposerScene_IsChanging();
  if (lVar6 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x8f,8,extraout_a3_lo);
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x90,8,extraout_a3_lo_00);
  }
  iVar5 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x002e50d0  size 0xb8
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawHakone" (was ScrDraw_Hakone_Exit) */

void maybe_ComposerTask_State16_State5_DrawHakone(undefined8 param_1)

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
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawHakone" (was ScrDraw_Hakone_Update)
    */

void maybe_ComposerTask_State16_State4_DrawHakone(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined1 *puVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  int *piVar12;
  int iVar13;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  undefined1 auStack_4 [4];
  
  lVar10 = Composer_ConsumeConfirm();
  if (lVar10 != 0) {
    uVar7 = UiRes_GetLayoutData(5);
    iVar8 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar8].layout.unk_310 = 0xffffffff;
    pUVar1[iVar8].layout.unk_31c = 0;
    pUVar1[iVar8].layout.unk_30c = 0;
    if (pUVar1[iVar8].layout.unk_31c == 0) {
      pUVar1[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar8].layout.unk_318 = 1;
    }
    pUVar1[iVar8].layout.unk_30c = 0;
    if (pUVar1[iVar8].layout.unk_31c == 0) {
      pUVar1[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x314 = 0;
    pUVar1[iVar8].layout.unk_31c = uVar7;
    pUVar1[iVar8].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(6);
    iVar8 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x330 == 0) {
      pUVar1[iVar8].layout.animState = 0;
    }
    else {
      pUVar1[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x330 == 0) {
      pUVar1[iVar8].layout.animState = 0;
    }
    else {
      pUVar1[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar9;
    pUVar1[iVar8].layout.animState = 1;
    uVar9 = UiRes_GetLayoutData(7);
    iVar8 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = uVar9;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    uVar9 = UiRes_GetLayoutData(8);
    iVar8 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar9;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    uVar9 = UiRes_GetLayoutData(9);
    iVar8 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x36c = uVar9;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 1;
    uVar9 = UiRes_GetLayoutData(10);
    iVar8 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x380 = uVar9;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x37c = 1;
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x2,0);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x2,2);
  if (!bVar3 && !bVar4) {
    Composer_ClearDirty(param_1);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x2,4);
  UiLayout_UpdateAnimById((UiLayout *)0x2,5);
  iVar13 = 0;
  iVar8 = (int)param_1;
  if (DAT_00342a60 != -1) {
    piVar12 = &DAT_00342a60;
    do {
      iVar5 = Keyboard_GetIndex(iVar8 + 0x30);
      if (((iVar13 == iVar5) && (lVar10 = Nameentry_GetField_14(param_1), lVar10 == 0)) &&
         (lVar10 = Nameentry_GetField_18(param_1), lVar10 == 0)) {
        iVar5 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar12,8,extraout_a3_lo_00);
      }
      else if (*piVar12 != 0) {
        iVar5 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar12,8,extraout_a3_lo);
      }
      piVar12 = piVar12 + 1;
      iVar13 = iVar13 + 1;
    } while (*piVar12 != -1);
  }
  puVar6 = (undefined1 *)0x2;
  puVar11 = auStack_4;
  puVar2 = puVar11;
  while (puVar2 != (undefined1 *)0x0) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
    puVar6 = puVar6 + -1;
    puVar2 = puVar6;
  }
  iVar13 = *(int *)(iVar8 + 0x38);
  iVar5 = 0;
  if (0 < iVar13) {
    piVar12 = &DAT_00342b70;
    do {
      auStack_4[0] = *(undefined1 *)(iVar8 + iVar5 + 0x3c);
      iVar13 = UiMgr_FindLayout(2);
      UiElem_GetRect(&g_UiMgr->slots[iVar13].layout,auStack_40,(long)*piVar12);
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar13 = *(int *)(iVar8 + 0x38);
      iVar5 = iVar5 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar5 < iVar13);
  }
  if ((iVar13 < 0xf) && (lVar10 = Keyboard_IsCharAllowed(iVar8 + 0x30), lVar10 != 0)) {
    auStack_4[0] = Keyboard_GetChar(iVar8 + 0x30);
    iVar13 = UiMgr_FindLayout(2);
    UiElem_GetRect(&g_UiMgr->slots[iVar13].layout,auStack_40,
                   (long)(int)(&DAT_00342b70)[*(int *)(iVar8 + 0x38)]);
    UiText_DrawPlayerName(auStack_40,auStack_4,0);
    lVar10 = Nameentry_GetField_14(param_1);
    if ((lVar10 == 0) && (lVar10 = Nameentry_GetField_18(param_1), lVar10 == 0)) {
      iVar13 = UiMgr_FindLayout(2);
      UiElem_GetRect(&g_UiMgr->slots[iVar13].layout,auStack_40,
                     (long)*(int *)(&DAT_00342bb0 + *(int *)(iVar8 + 0x38) * 4));
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
    }
  }
  lVar10 = Nameentry_GetField_18(param_1);
  if (lVar10 != 0) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x2,1);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x2,3);
    if (!bVar3 && !bVar4) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  Composer_DrawLabel(0x27,3);
  iVar8 = UiMgr_FindLayout(2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x002e5810  size 0xa4c
void Eventui_Draw_Hakone_5810(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  lVar10 = Composer_ConsumeConfirm();
  iVar9 = (int)param_1;
  if (lVar10 != 0) {
    uVar6 = UiRes_GetLayoutData(0xb);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar6;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0xc);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar8;
    pUVar1[iVar7].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0xd);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0xe);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    uVar8 = UiRes_GetLayoutData(0xf);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    uVar8 = UiRes_GetLayoutData(0x10);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x380 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    uVar8 = UiRes_GetLayoutData(0x11);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x394 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    uVar8 = UiRes_GetLayoutData(0x12);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a8 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
    uVar6 = UiRes_GetLayoutData(0x14);
    iVar7 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar6;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x15);
    iVar7 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar8;
    pUVar1[iVar7].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x16);
    iVar7 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x17);
    iVar7 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    iVar7 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar9 + 0x50)],5,(byte)g_UiMgr->slots);
    iVar7 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar9 + 0x50)],8,(byte)g_UiMgr->slots);
    Menu_ClearSlot(0);
  }
  lVar10 = Nameentry_Nop_2(param_1);
  if ((lVar10 == 4) || (lVar10 = Nameentry_Nop_2(param_1), lVar10 == 5)) {
    iVar7 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar9 + 0x50)],5,(byte)g_UiMgr->slots);
    iVar7 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar9 + 0x50)],8,(byte)g_UiMgr->slots);
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x7,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x7,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x7,4);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,0);
    if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
      Composer_ClearDirty(param_1);
    }
  }
  else {
    Composer_ClearDirty(param_1);
  }
  lVar10 = Nameentry_GetField_18(param_1);
  if (lVar10 != 0) {
    lVar10 = Nameentry_GetField_8_81f0(param_1);
    if (lVar10 == 4) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x7,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x7,3);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x7,5);
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,1);
      if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
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
  if ((*(int *)(iVar9 + 0x70) == -1) ||
     ((lVar10 = Nameentry_GetField_4_8200(param_1), lVar10 == 1 &&
      (*(int *)(iVar9 + 0x60) != *(int *)(iVar9 + 0x70))))) {
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar9 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  lVar10 = ComposerScene_IsChanging();
  if (lVar10 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar9 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x8f,8,extraout_a3_lo);
    iVar9 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x90,8,extraout_a3_lo_00);
  }
  iVar9 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  return;
}

// 0x002e6260  size 0x568
void Eventui_Draw_Hakone_6260(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  lVar6 = Composer_ConsumeConfirm();
  iVar5 = (int)param_1;
  if (lVar6 != 0) {
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar3].layout.unk_310 = 0xffffffff;
    pUVar1[iVar3].layout.unk_31c = 0;
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    pUVar1[iVar3].layout.unk_31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x15);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar4;
    pUVar1[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x16);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x17);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x18);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar5 + 0x50)],5,(byte)g_UiMgr->slots);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar5 + 0x50)],8,(byte)g_UiMgr->slots);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar6 = Nameentry_GetField_18(param_1);
  if (lVar6 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  if (*(int *)(iVar5 + 0x54) == -1) {
    Composer_DrawLabel(0x24,3);
  }
  else {
    Composer_DrawLabel(0x25,3);
  }
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar5 + 0x70) == -1) ||
     ((lVar6 = Nameentry_GetField_4_8200(param_1), lVar6 == 1 &&
      (*(int *)(iVar5 + 0x60) != *(int *)(iVar5 + 0x70))))) {
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar5 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  lVar6 = ComposerScene_IsChanging();
  if (lVar6 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x8f,8,extraout_a3_lo);
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x90,8,extraout_a3_lo_00);
  }
  iVar5 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x002e67d0  size 0x4bc
void Eventui_Draw_Hakone_67d0(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  lVar6 = Composer_ConsumeConfirm();
  iVar5 = (int)param_1;
  if (lVar6 != 0) {
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar3].layout.unk_310 = 0xffffffff;
    pUVar1[iVar3].layout.unk_31c = 0;
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    pUVar1[iVar3].layout.unk_30c = 0;
    if (pUVar1[iVar3].layout.unk_31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    pUVar1[iVar3].layout.unk_31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x15);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar4;
    pUVar1[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x16);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x17);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar5 + 0x50)],5,(byte)g_UiMgr->slots);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,
                        (long)(int)(&DAT_003428d0)[*(int *)(iVar5 + 0x50)],8,(byte)g_UiMgr->slots);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar6 = Nameentry_GetField_18(param_1);
  if (lVar6 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  Composer_DrawLabel(0x23,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar5 + 0x70) == -1) ||
     ((lVar6 = Nameentry_GetField_4_8200(param_1), lVar6 == 1 &&
      (*(int *)(iVar5 + 0x60) != *(int *)(iVar5 + 0x70))))) {
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar5 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  lVar6 = ComposerScene_IsChanging();
  if (lVar6 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x8f,8,extraout_a3_lo);
    iVar5 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x90,8,extraout_a3_lo_00);
  }
  iVar5 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x002e6c90  size 0xa08
void Eventui_Draw_Hakone_6c90(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  int *piVar11;
  
  lVar9 = Composer_ConsumeConfirm();
  if (lVar9 != 0) {
    uVar6 = UiRes_GetLayoutData(0xb);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar6;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0xc);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar8;
    pUVar1[iVar7].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0xd);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0xe);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    uVar8 = UiRes_GetLayoutData(0xf);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    uVar8 = UiRes_GetLayoutData(0x10);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x380 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x37c = 1;
    uVar8 = UiRes_GetLayoutData(0x11);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x394 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x390 = 1;
    uVar8 = UiRes_GetLayoutData(0x12);
    iVar7 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a8 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3a4 = 1;
    uVar6 = UiRes_GetLayoutData(0x14);
    iVar7 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar6;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x15);
    iVar7 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar8;
    pUVar1[iVar7].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x16);
    iVar7 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x17);
    iVar7 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    MenuWnd_SetItemVisible(0);
    uVar6 = 0;
    piVar11 = &DAT_003428d0;
    do {
      iVar7 = UiMgr_FindLayout(7);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)*piVar11,8,extraout_a3_lo);
      uVar6 = uVar6 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar6 < 6);
    Menu_ClearSlot(0);
  }
  lVar9 = Nameentry_GetField_14(param_1);
  iVar7 = (int)param_1;
  if (lVar9 == 0) {
    MenuWnd_SetItemState(7,(&DAT_003428d0)[*(int *)(iVar7 + 0x50)],1,0);
  }
  lVar9 = Nameentry_Nop_2(param_1);
  if (lVar9 < 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x7,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x7,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x7,4);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,0);
    if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
      Composer_ClearDirty(param_1);
    }
  }
  else {
    Composer_ClearDirty(param_1);
  }
  lVar9 = Nameentry_GetField_18(param_1);
  if (lVar9 != 0) {
    lVar9 = ComposerScene_IsChanging();
    if (lVar9 == 0) {
      Composer_ConsumeRedraw(param_1);
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x7,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x7,3);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x7,5);
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,1);
      if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
        Composer_ConsumeRedraw(param_1);
        uVar6 = *(uint *)(iVar7 + 0x50);
        goto LAB_002e6d1c;
      }
    }
  }
  uVar6 = *(uint *)(iVar7 + 0x50);
LAB_002e6d1c:
  uVar10 = 0xffffffffffffffff;
  if (uVar6 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar6) {
    case 0:
      if (*(int *)(iVar7 + 0x70) == -1) {
        uVar10 = 0x1d;
      }
      else {
        uVar10 = 0x33;
      }
      break;
    case 1:
      uVar10 = 0x1e;
      break;
    case 2:
      uVar10 = 0x1f;
      break;
    case 3:
      uVar10 = 0x20;
      break;
    case 4:
      uVar10 = 0x21;
      break;
    case 5:
      uVar10 = 0x22;
    }
  }
  Composer_DrawLabel(uVar10,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar7 + 0x70) == -1) ||
     ((lVar9 = Nameentry_GetField_4_8200(param_1), lVar9 == 1 &&
      (*(int *)(iVar7 + 0x60) != *(int *)(iVar7 + 0x70))))) {
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar7 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  lVar9 = ComposerScene_IsChanging();
  if (lVar9 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar7 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x8f,8,extraout_a3_lo_00);
    iVar7 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x90,8,extraout_a3_lo_01);
  }
  iVar7 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x002e76a0  size 0x7c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Updatee76a0) */

void maybe_ComposerTask_State16_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = Nameentry_GetField_4_8200(param_1);
  (*(code *)(&PTR_Eventui_Draw_Hakone_6c90_003428a0)[iVar1])(param_1);
  return;
}

// 0x002e7720  size 0x8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Exite7720) */

void maybe_ComposerTask_State17_NameentryGetField(void)

{
  return;
}

// 0x002e7730  size 0x27c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Entere7730) */

void maybe_ComposerTask_State15_NameentryGetField(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  uVar2 = UiRes_GetLayoutData(0);
  iVar3 = UiMgr_FindLayout(0);
  pUVar1 = g_UiMgr->slots;
  pUVar1[iVar3].layout.unk_310 = 0xffffffff;
  pUVar1[iVar3].layout.unk_31c = 0;
  pUVar1[iVar3].layout.unk_30c = 0;
  if (pUVar1[iVar3].layout.unk_31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  pUVar1[iVar3].layout.unk_30c = 0;
  if (pUVar1[iVar3].layout.unk_31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 1;
  pUVar1[iVar3].layout.unk_31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  uVar4 = UiRes_GetLayoutData(0x13);
  iVar3 = UiMgr_FindLayout(7);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b0 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3bc = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3ac = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x3bc == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3ac = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x3bc == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b4 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3bc = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 1;
  uVar4 = UiRes_GetLayoutData(0x18);
  iVar3 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x360 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
  }
  else {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  iVar3 = UiMgr_FindLayout(8);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x8f,8,extraout_a3_lo);
  iVar3 = UiMgr_FindLayout(8);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x90,8,extraout_a3_lo_00);
  iVar3 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  iVar5 = UiRes_GetLayoutData(0x42);
  UiLayout_IsAnimDone(&pUVar1[iVar3].layout,5,0x8f,iVar5,1);
  iVar3 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  iVar5 = UiRes_GetLayoutData(0x43);
  UiLayout_IsAnimDone(&pUVar1[iVar3].layout,6,0x90,iVar5,1);
  return;
}

// 0x002e79b0  size 0x12c
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
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  Composer_DrawLabel(0xffffffffffffffff,3);
  return;
}

// 0x002e7ae0  size 0x12c
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
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  Composer_DrawLabel(0xffffffffffffffff,3);
  return;
}

// 0x002e7c10  size 0x278
void Eventui_Draw_TestCourse_7c10(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  
  lVar6 = Composer_ConsumeConfirm();
  if (lVar6 != 0) {
    uVar3 = UiRes_GetLayoutData(0x25);
    iVar4 = UiMgr_FindLayout(6);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar4].layout.unk_310 = 0xffffffff;
    pUVar1[iVar4].layout.unk_31c = 0;
    pUVar1[iVar4].layout.unk_30c = 0;
    if (pUVar1[iVar4].layout.unk_31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    pUVar1[iVar4].layout.unk_30c = 0;
    if (pUVar1[iVar4].layout.unk_31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    pUVar1[iVar4].layout.unk_31c = uVar3;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x26);
    iVar4 = UiMgr_FindLayout(6);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
      pUVar1[iVar4].layout.animState = 0;
    }
    else {
      pUVar1[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
      pUVar1[iVar4].layout.animState = 0;
    }
    else {
      pUVar1[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar5;
    pUVar1[iVar4].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x6,0);
  if (!bVar2) {
    Composer_ClearDirty(param_1);
  }
  lVar6 = Nameentry_GetField_18(param_1);
  if ((lVar6 != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x6,1), !bVar2)) {
    Composer_ConsumeRedraw(param_1);
  }
  lVar6 = Nameentry_GetField_14(param_1);
  if (lVar6 == 0) {
    MenuWnd_SetItemState(6,*(undefined4 *)(*(int *)((int)param_1 + 0x24) * 4 + 0x36eec8),1,0);
  }
  MenuWnd_DrawText(5,0x22,3);
  MenuWnd_DrawText(6,0xd,0x13);
  MenuWnd_DrawText(6,0xe,0x14);
  iVar4 = UiMgr_FindLayout(5);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  if (*(int *)((int)param_1 + 0x24) == 0) {
    Composer_DrawLabel(0x15,3);
  }
  else {
    Composer_DrawLabel(0x16,3);
  }
  return;
}

// 0x002e7e90  size 0x4f0
void Eventui_Draw_TestCourse_7e90(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = Composer_ConsumeConfirm();
  if (lVar7 != 0) {
    uVar4 = UiRes_GetLayoutData(1);
    iVar5 = UiMgr_FindLayout(5);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar5].layout.unk_310 = 0xffffffff;
    pUVar1[iVar5].layout.unk_31c = 0;
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    pUVar1[iVar5].layout.unk_31c = uVar4;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(2);
    iVar5 = UiMgr_FindLayout(5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar6;
    pUVar1[iVar5].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(3);
    iVar5 = UiMgr_FindLayout(5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(4);
    iVar5 = UiMgr_FindLayout(5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x3a);
    iVar5 = UiMgr_FindLayout(5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    Menu_ClearSlot(0);
  }
  lVar7 = Nameentry_Nop_2(param_1);
  if (lVar7 == 1) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x5,0);
    if (!bVar2) {
      Composer_ClearDirty(param_1);
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x5,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x5,1);
    if (!bVar2 && !bVar3) {
      Composer_ClearDirty(param_1);
    }
  }
  lVar7 = Nameentry_GetField_18(param_1);
  if (lVar7 != 0) {
    MenuWnd_SetItemVisible(0);
    lVar7 = Nameentry_GetField_8_81f0(param_1);
    if (lVar7 == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x5,4);
      if (!bVar2) {
        Composer_ConsumeRedraw(param_1);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x5,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x5,3);
      if (!bVar2 && !bVar3) {
        Composer_ConsumeRedraw(param_1);
      }
    }
  }
  lVar7 = Nameentry_GetField_14(param_1);
  if ((lVar7 == 0) && (lVar7 = Nameentry_GetField_18(param_1), lVar7 == 0)) {
    MenuWnd_SetItemState(5,*(undefined4 *)(&DAT_00342c00 + *(int *)((int)param_1 + 0x20) * 4),1,0);
  }
  MenuWnd_DrawText(5,0x1f,0);
  MenuWnd_DrawText(5,0x20,1);
  MenuWnd_DrawText(5,0x21,2);
  MenuWnd_DrawText(5,0x22,3);
  MenuWnd_DrawText(5,0x23,4);
  iVar5 = UiMgr_FindLayout(5);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = *(int *)((int)param_1 + 0x20);
  uVar8 = 0xffffffffffffffff;
  if (iVar5 == 4) {
    uVar8 = 0x10;
  }
  else if (iVar5 == 3) {
    uVar8 = 0xf;
  }
  else if (iVar5 == 2) {
    uVar8 = 0xe;
  }
  else if (iVar5 == 1) {
    uVar8 = 0xd;
  }
  else if (iVar5 == 0) {
    uVar8 = 0xc;
  }
  Composer_DrawLabel(uVar8,3);
  return;
}

