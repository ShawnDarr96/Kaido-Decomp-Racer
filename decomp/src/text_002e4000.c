// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002e4000 - 0x002e8000
#include "ghidra_types.h"

// 0x002e41b0  size 0x4e8
void Eventui_Draw_Rokko(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [64];
  
  lVar5 = Composer_ConsumeConfirm();
  if (lVar5 != 0) {
    uVar3 = UiRes_GetLayoutData(0x3b);
    iVar4 = UiMgr_FindLayout(9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar3;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x3c);
    iVar4 = UiMgr_FindLayout(9);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar3;
    pUVar1[iVar4].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0x41);
    iVar4 = UiMgr_FindLayout(9);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(9,0);
  if (lVar5 == 0) {
    Composer_ClearDirty(param_1);
  }
  lVar5 = Nameentry_GetField_18(param_1);
  if ((lVar5 != 0) && (lVar5 = UiLayout_UpdateAnimById(9,1), lVar5 == 0)) {
    Composer_ConsumeRedraw(param_1);
  }
  lVar5 = Nameentry_GetField_14(param_1);
  iVar4 = (int)param_1;
  if ((lVar5 == 0) && (lVar5 = Nameentry_GetField_18(param_1), lVar5 == 0)) {
    MenuWnd_SetItemState(9,*(undefined4 *)(&DAT_0036eec0 + *(int *)(iVar4 + 0x6c) * 4),1,0);
  }
  MenuWnd_DrawText(9,0x1b,9);
  MenuWnd_DrawText(9,0x1d,10);
  MenuWnd_DrawLabel(9,0x1c,5,0,*(int *)(iVar4 + 0x60) + 1);
  iVar2 = UiMgr_FindLayout(9);
  UiElem_GetRect(&g_UiMgr->slots[iVar2].layout,auStack_40,0x1e);
  uVar6 = SeqGen_GetPartTextId(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x60));
  UiText_DrawPlayerName(auStack_40,uVar6,0);
  MenuWnd_DrawText(9,0x1f,0x32);
  UiLayout_UpdateAnimById(9,2);
  iVar2 = UiMgr_FindLayout(9);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  Composer_DrawLabel(0xffffffffffffffff,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar4 + 0x70) == -1) ||
     ((lVar5 = Nameentry_GetField_4_8200(param_1), lVar5 == 1 &&
      (*(int *)(iVar4 + 0x60) != *(int *)(iVar4 + 0x70))))) {
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
  iVar4 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  lVar5 = ComposerScene_IsChanging();
  if (lVar5 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
  }
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002e46a0  size 0x4bc
void Eventui_Draw_Hakone_46a0(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = Composer_ConsumeConfirm();
  iVar4 = (int)param_1;
  if (lVar5 != 0) {
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0x17);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],5);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar5 = Nameentry_GetField_18(param_1);
  if (lVar5 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  Composer_DrawLabel(0x2a,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar4 + 0x70) == -1) ||
     ((lVar5 = Nameentry_GetField_4_8200(param_1), lVar5 == 1 &&
      (*(int *)(iVar4 + 0x60) != *(int *)(iVar4 + 0x70))))) {
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
  iVar4 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  lVar5 = ComposerScene_IsChanging();
  if (lVar5 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
  }
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002e4b60  size 0x568
void Eventui_Draw_Hakone_4b60(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = Composer_ConsumeConfirm();
  iVar4 = (int)param_1;
  if (lVar5 != 0) {
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0x17);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar2 = UiRes_GetLayoutData(0x18);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],5);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar5 = Nameentry_GetField_18(param_1);
  if (lVar5 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  if (*(int *)(iVar4 + 0x54) == -1) {
    Composer_DrawLabel(0x28,3);
  }
  else {
    Composer_DrawLabel(0x29,3);
  }
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar4 + 0x70) == -1) ||
     ((lVar5 = Nameentry_GetField_4_8200(param_1), lVar5 == 1 &&
      (*(int *)(iVar4 + 0x60) != *(int *)(iVar4 + 0x70))))) {
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
  iVar4 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  lVar5 = ComposerScene_IsChanging();
  if (lVar5 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
  }
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
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
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined1 auStack_4 [4];
  
  lVar7 = Composer_ConsumeConfirm();
  if (lVar7 != 0) {
    uVar5 = UiRes_GetLayoutData(5);
    iVar6 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(6);
    iVar6 = UiMgr_FindLayout(2);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar5;
    pUVar1[iVar6].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(7);
    iVar6 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(8);
    iVar6 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(9);
    iVar6 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(10);
    iVar6 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
  }
  lVar7 = UiLayout_UpdateAnimById(2,0);
  lVar8 = UiLayout_UpdateAnimById(2,2);
  if (lVar7 == 0 && lVar8 == 0) {
    Composer_ClearDirty(param_1);
  }
  UiLayout_UpdateAnimById(2,4);
  UiLayout_UpdateAnimById(2,5);
  iVar12 = 0;
  iVar6 = (int)param_1;
  if (DAT_00342a60 != -1) {
    piVar10 = &DAT_00342a60;
    do {
      iVar3 = Keyboard_GetIndex(iVar6 + 0x30);
      if (((iVar12 == iVar3) && (lVar7 = Nameentry_GetField_14(param_1), lVar7 == 0)) &&
         (lVar7 = Nameentry_GetField_18(param_1), lVar7 == 0)) {
        iVar3 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,*piVar10,8);
      }
      else if (*piVar10 != 0) {
        iVar3 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*piVar10,8);
      }
      piVar10 = piVar10 + 1;
      iVar12 = iVar12 + 1;
    } while (*piVar10 != -1);
  }
  puVar4 = (undefined1 *)0x2;
  puVar9 = auStack_4;
  puVar2 = puVar9;
  while (puVar2 != (undefined1 *)0x0) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + -1;
    puVar2 = puVar4;
  }
  iVar12 = *(int *)(iVar6 + 0x38);
  iVar3 = 0;
  if (0 < iVar12) {
    puVar11 = &DAT_00342b70;
    do {
      auStack_4[0] = *(undefined1 *)(iVar6 + iVar3 + 0x3c);
      iVar12 = UiMgr_FindLayout(2);
      UiElem_GetRect(&g_UiMgr->slots[iVar12].layout,auStack_40,*puVar11);
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar12 = *(int *)(iVar6 + 0x38);
      iVar3 = iVar3 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar3 < iVar12);
  }
  if ((iVar12 < 0xf) && (lVar7 = Keyboard_IsCharAllowed(iVar6 + 0x30), lVar7 != 0)) {
    auStack_4[0] = Keyboard_GetChar(iVar6 + 0x30);
    iVar12 = UiMgr_FindLayout(2);
    UiElem_GetRect(&g_UiMgr->slots[iVar12].layout,auStack_40,(&DAT_00342b70)[*(int *)(iVar6 + 0x38)]
                  );
    UiText_DrawPlayerName(auStack_40,auStack_4,0);
    lVar7 = Nameentry_GetField_14(param_1);
    if ((lVar7 == 0) && (lVar7 = Nameentry_GetField_18(param_1), lVar7 == 0)) {
      iVar12 = UiMgr_FindLayout(2);
      UiElem_GetRect(&g_UiMgr->slots[iVar12].layout,auStack_40,
                     *(undefined4 *)(&DAT_00342bb0 + *(int *)(iVar6 + 0x38) * 4));
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
    }
  }
  lVar7 = Nameentry_GetField_18(param_1);
  if (lVar7 != 0) {
    lVar7 = UiLayout_UpdateAnimById(2,1);
    lVar8 = UiLayout_UpdateAnimById(2,3);
    if (lVar7 == 0 && lVar8 == 0) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  Composer_DrawLabel(0x27,3);
  iVar6 = UiMgr_FindLayout(2);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002e5810  size 0xa4c
void Eventui_Draw_Hakone_5810(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = Composer_ConsumeConfirm();
  iVar4 = (int)param_1;
  if (lVar5 != 0) {
    uVar2 = UiRes_GetLayoutData(0xb);
    iVar3 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0xc);
    iVar3 = UiMgr_FindLayout(7);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0xd);
    iVar3 = UiMgr_FindLayout(7);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0xe);
    iVar3 = UiMgr_FindLayout(7);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar2 = UiRes_GetLayoutData(0xf);
    iVar3 = UiMgr_FindLayout(7);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    uVar2 = UiRes_GetLayoutData(0x10);
    iVar3 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    uVar2 = UiRes_GetLayoutData(0x11);
    iVar3 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    uVar2 = UiRes_GetLayoutData(0x12);
    iVar3 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0x17);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],5);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  lVar5 = Nameentry_Nop_2(param_1);
  if ((lVar5 == 4) || (lVar5 = Nameentry_Nop_2(param_1), lVar5 == 5)) {
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],5);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],8);
    lVar5 = UiLayout_UpdateAnimById(7,0);
    lVar6 = UiLayout_UpdateAnimById(7,2);
    lVar7 = UiLayout_UpdateAnimById(7,4);
    lVar8 = UiLayout_UpdateAnimById(8,0);
    if (lVar8 == 0 && (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0))) {
      Composer_ClearDirty(param_1);
    }
  }
  else {
    Composer_ClearDirty(param_1);
  }
  lVar5 = Nameentry_GetField_18(param_1);
  if (lVar5 != 0) {
    lVar5 = Nameentry_GetField_8_81f0(param_1);
    if (lVar5 == 4) {
      lVar5 = UiLayout_UpdateAnimById(7,1);
      lVar6 = UiLayout_UpdateAnimById(7,3);
      lVar7 = UiLayout_UpdateAnimById(7,5);
      lVar8 = UiLayout_UpdateAnimById(8,1);
      if (lVar8 == 0 && (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0))) {
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
  if ((*(int *)(iVar4 + 0x70) == -1) ||
     ((lVar5 = Nameentry_GetField_4_8200(param_1), lVar5 == 1 &&
      (*(int *)(iVar4 + 0x60) != *(int *)(iVar4 + 0x70))))) {
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
  iVar4 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  lVar5 = ComposerScene_IsChanging();
  if (lVar5 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
  }
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002e6260  size 0x568
void Eventui_Draw_Hakone_6260(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = Composer_ConsumeConfirm();
  iVar4 = (int)param_1;
  if (lVar5 != 0) {
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0x17);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar2 = UiRes_GetLayoutData(0x18);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],5);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar5 = Nameentry_GetField_18(param_1);
  if (lVar5 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  if (*(int *)(iVar4 + 0x54) == -1) {
    Composer_DrawLabel(0x24,3);
  }
  else {
    Composer_DrawLabel(0x25,3);
  }
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar4 + 0x70) == -1) ||
     ((lVar5 = Nameentry_GetField_4_8200(param_1), lVar5 == 1 &&
      (*(int *)(iVar4 + 0x60) != *(int *)(iVar4 + 0x70))))) {
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
  iVar4 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  lVar5 = ComposerScene_IsChanging();
  if (lVar5 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
  }
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002e67d0  size 0x4bc
void Eventui_Draw_Hakone_67d0(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = Composer_ConsumeConfirm();
  iVar4 = (int)param_1;
  if (lVar5 != 0) {
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0x17);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],5);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                        (&DAT_003428d0)[*(int *)(iVar4 + 0x50)],8);
    Menu_ClearSlot(0);
  }
  Composer_ClearDirty(param_1);
  lVar5 = Nameentry_GetField_18(param_1);
  if (lVar5 != 0) {
    Composer_ConsumeRedraw(param_1);
  }
  maybe_ComposerUi_AnimateNameA(param_1);
  Composer_DrawLabel(0x23,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar4 + 0x70) == -1) ||
     ((lVar5 = Nameentry_GetField_4_8200(param_1), lVar5 == 1 &&
      (*(int *)(iVar4 + 0x60) != *(int *)(iVar4 + 0x70))))) {
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
  iVar4 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  lVar5 = ComposerScene_IsChanging();
  if (lVar5 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
  }
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002e6c90  size 0xa08
void Eventui_Draw_Hakone_6c90(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  lVar4 = Composer_ConsumeConfirm();
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(0xb);
    iVar3 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0xc);
    iVar3 = UiMgr_FindLayout(7);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0xd);
    iVar3 = UiMgr_FindLayout(7);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0xe);
    iVar3 = UiMgr_FindLayout(7);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar2 = UiRes_GetLayoutData(0xf);
    iVar3 = UiMgr_FindLayout(7);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    uVar2 = UiRes_GetLayoutData(0x10);
    iVar3 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    uVar2 = UiRes_GetLayoutData(0x11);
    iVar3 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    uVar2 = UiRes_GetLayoutData(0x12);
    iVar3 = UiMgr_FindLayout(7);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0x17);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    MenuWnd_SetItemVisible(0);
    uVar10 = 0;
    puVar9 = &DAT_003428d0;
    do {
      iVar3 = UiMgr_FindLayout(7);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar9,8);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 < 6);
    Menu_ClearSlot(0);
  }
  lVar4 = Nameentry_GetField_14(param_1);
  iVar3 = (int)param_1;
  if (lVar4 == 0) {
    MenuWnd_SetItemState(7,(&DAT_003428d0)[*(int *)(iVar3 + 0x50)],1,0);
  }
  lVar4 = Nameentry_Nop_2(param_1);
  if (lVar4 < 0) {
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
    lVar4 = ComposerScene_IsChanging();
    if (lVar4 == 0) {
      Composer_ConsumeRedraw(param_1);
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(7,1);
      lVar5 = UiLayout_UpdateAnimById(7,3);
      lVar6 = UiLayout_UpdateAnimById(7,5);
      lVar7 = UiLayout_UpdateAnimById(8,1);
      if (lVar7 == 0 && (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0))) {
        Composer_ConsumeRedraw(param_1);
        uVar10 = *(uint *)(iVar3 + 0x50);
        goto LAB_002e6d1c;
      }
    }
  }
  uVar10 = *(uint *)(iVar3 + 0x50);
LAB_002e6d1c:
  uVar8 = 0xffffffffffffffff;
  if (uVar10 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar10) {
    case 0:
      if (*(int *)(iVar3 + 0x70) == -1) {
        uVar8 = 0x1d;
      }
      else {
        uVar8 = 0x33;
      }
      break;
    case 1:
      uVar8 = 0x1e;
      break;
    case 2:
      uVar8 = 0x1f;
      break;
    case 3:
      uVar8 = 0x20;
      break;
    case 4:
      uVar8 = 0x21;
      break;
    case 5:
      uVar8 = 0x22;
    }
  }
  Composer_DrawLabel(uVar8,3);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  lVar4 = ComposerScene_IsChanging();
  if (lVar4 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x90,8);
  }
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x002e76a0  size 0x7c
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Updatee76a0) */

void maybe_ComposerTask_State16_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
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
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = UiRes_GetLayoutData(0);
  iVar3 = UiMgr_FindLayout(0);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  uVar2 = UiRes_GetLayoutData(0x13);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3bc = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 1;
  uVar2 = UiRes_GetLayoutData(0x18);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  iVar3 = UiMgr_FindLayout(8);
  UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x8f,8);
  iVar3 = UiMgr_FindLayout(8);
  UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x90,8);
  iVar3 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  uVar4 = UiRes_GetLayoutData(0x42);
  UiLayout_IsAnimDone(&pUVar1[iVar3].layout,5,0x8f,uVar4,1);
  iVar3 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  uVar4 = UiRes_GetLayoutData(0x43);
  UiLayout_IsAnimDone(&pUVar1[iVar3].layout,6,0x90,uVar4,1);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  Composer_DrawLabel(0xffffffffffffffff,3);
  return;
}

// 0x002e7c10  size 0x278
void Eventui_Draw_TestCourse_7c10(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = Composer_ConsumeConfirm();
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(0x25);
    iVar3 = UiMgr_FindLayout(6);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x26);
    iVar3 = UiMgr_FindLayout(6);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(6,0);
  if (lVar4 == 0) {
    Composer_ClearDirty(param_1);
  }
  lVar4 = Nameentry_GetField_18(param_1);
  if ((lVar4 != 0) && (lVar4 = UiLayout_UpdateAnimById(6,1), lVar4 == 0)) {
    Composer_ConsumeRedraw(param_1);
  }
  lVar4 = Nameentry_GetField_14(param_1);
  if (lVar4 == 0) {
    MenuWnd_SetItemState(6,*(undefined4 *)(*(int *)((int)param_1 + 0x24) * 4 + 0x36eec8),1,0);
  }
  MenuWnd_DrawText(5,0x22,3);
  MenuWnd_DrawText(6,0xd,0x13);
  MenuWnd_DrawText(6,0xe,0x14);
  iVar3 = UiMgr_FindLayout(5);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
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
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = Composer_ConsumeConfirm();
  if (lVar4 != 0) {
    uVar2 = UiRes_GetLayoutData(1);
    iVar3 = UiMgr_FindLayout(5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(2);
    iVar3 = UiMgr_FindLayout(5);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(3);
    iVar3 = UiMgr_FindLayout(5);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(4);
    iVar3 = UiMgr_FindLayout(5);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar2 = UiRes_GetLayoutData(0x3a);
    iVar3 = UiMgr_FindLayout(5);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    Menu_ClearSlot(0);
  }
  lVar4 = Nameentry_Nop_2(param_1);
  if (lVar4 == 1) {
    lVar4 = UiLayout_UpdateAnimById(5,0);
    if (lVar4 == 0) {
      Composer_ClearDirty(param_1);
    }
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(5,0);
    lVar5 = UiLayout_UpdateAnimById(5,1);
    if (lVar4 == 0 && lVar5 == 0) {
      Composer_ClearDirty(param_1);
    }
  }
  lVar4 = Nameentry_GetField_18(param_1);
  if (lVar4 != 0) {
    MenuWnd_SetItemVisible(0);
    lVar4 = Nameentry_GetField_8_81f0(param_1);
    if (lVar4 == 1) {
      lVar4 = UiLayout_UpdateAnimById(5,4);
      if (lVar4 == 0) {
        Composer_ConsumeRedraw(param_1);
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(5,2);
      lVar5 = UiLayout_UpdateAnimById(5,3);
      if (lVar4 == 0 && lVar5 == 0) {
        Composer_ConsumeRedraw(param_1);
      }
    }
  }
  lVar4 = Nameentry_GetField_14(param_1);
  if ((lVar4 == 0) && (lVar4 = Nameentry_GetField_18(param_1), lVar4 == 0)) {
    MenuWnd_SetItemState(5,*(undefined4 *)(&DAT_00342c00 + *(int *)((int)param_1 + 0x20) * 4),1,0);
  }
  MenuWnd_DrawText(5,0x1f,0);
  MenuWnd_DrawText(5,0x20,1);
  MenuWnd_DrawText(5,0x21,2);
  MenuWnd_DrawText(5,0x22,3);
  MenuWnd_DrawText(5,0x23,4);
  iVar3 = UiMgr_FindLayout(5);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = *(int *)((int)param_1 + 0x20);
  uVar6 = 0xffffffffffffffff;
  if (iVar3 == 4) {
    uVar6 = 0x10;
  }
  else if (iVar3 == 3) {
    uVar6 = 0xf;
  }
  else if (iVar3 == 2) {
    uVar6 = 0xe;
  }
  else if (iVar3 == 1) {
    uVar6 = 0xd;
  }
  else if (iVar3 == 0) {
    uVar6 = 0xc;
  }
  Composer_DrawLabel(uVar6,3);
  return;
}

