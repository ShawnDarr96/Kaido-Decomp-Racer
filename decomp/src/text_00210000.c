// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00210000 - 0x00214000
#include "ghidra_types.h"

// 0x00210450  size 0x8e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectCarFor(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  int *piVar10;
  undefined1 *puVar11;
  
  iVar8 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar6 = UiRes_GetLayoutData(0x3d6);
    iVar8 = UiMgr_FindLayout(0x115);
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
    pUVar1[iVar8].layout.unk_31c = uVar6;
    pUVar1[iVar8].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x3d7);
    iVar8 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar7;
    pUVar1[iVar8].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x3d8);
    iVar8 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x3d9);
    iVar8 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    uVar7 = UiRes_GetLayoutData(0x3f0);
    iVar8 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 1;
    uVar7 = UiRes_GetLayoutData(0x3f1);
    iVar8 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x380 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x37c = 1;
    uVar7 = UiRes_GetLayoutData(0x195);
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0350 = 0xffffffff;
    *(undefined4 *)&pMVar2->field_0x35c = 0;
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x354 = 0;
    *(undefined4 *)&pMVar2->field_0x35c = uVar7;
    *(undefined4 *)&pMVar2->field_0x358 = 1;
    uVar7 = UiRes_GetLayoutData(0x407);
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0364 = 0xffffffff;
    *(undefined4 *)&pMVar2->field_0x370 = 0;
    *(undefined4 *)&pMVar2->field_0x360 = 0;
    if (*(int *)&pMVar2->field_0x370 == 0) {
      *(undefined4 *)&pMVar2->field_0x36c = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x36c = 1;
    }
    *(undefined4 *)&pMVar2->field_0x360 = 0;
    if (*(int *)&pMVar2->field_0x370 == 0) {
      *(undefined4 *)&pMVar2->field_0x36c = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x36c = 1;
    }
    *(undefined4 *)&pMVar2->field_0x368 = 0;
    *(undefined4 *)&pMVar2->field_0x370 = uVar7;
    *(undefined4 *)&pMVar2->field_0x36c = 1;
    iVar8 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x27,8,extraout_a3_lo);
    iVar8 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x28,8,extraout_a3_lo_00);
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 2) {
      iVar8 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar8].layout,0x2b,0x16,2);
    }
    else if (iVar8 == 1) {
      iVar8 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar8].layout,0x2b,0x16,2);
    }
    else if (iVar8 == 0) {
      iVar8 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar8].layout,0x2b,0x16,1);
    }
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x115,0x329f20,4,0xffffffffffffffff);
    iVar8 = *(int *)(param_1 + 0x69c);
  }
  if (iVar8 - 7U < 2) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x115,0);
    if (!bVar3) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    puVar11 = &g_MenuMgr->field_0x40;
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x115,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x115,2);
    bVar5 = UiLayout_UpdateAnimIfActive((UiLayout *)puVar11,0);
    if (!bVar5 && (!bVar3 && !bVar4)) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      MenuWnd_DrawCursor(*(int *)(param_1 + 0x4cc) != 1);
      iVar8 = *(int *)(param_1 + 0x4cc);
      goto LAB_0021059c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x6a4) - 7U < 2) {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x115,1);
      if (!bVar3) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      puVar11 = &g_MenuMgr->field_0x40;
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x115,1);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x115,3);
      bVar5 = UiLayout_UpdateAnimIfActive((UiLayout *)puVar11,1);
      if (!bVar5 && (!bVar3 && !bVar4)) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  iVar8 = *(int *)(param_1 + 0x4cc);
LAB_0021059c:
  if (iVar8 < 0xd) {
    iVar8 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x3b,8,extraout_a3_lo_01);
    iVar8 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x3d,8,extraout_a3_lo_02);
  }
  iVar8 = 0;
  piVar10 = &DAT_00329f30;
  do {
    if (*(int *)(param_1 + 0x4cc) <= iVar8) {
      iVar9 = UiMgr_FindLayout(0x115);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,(long)*piVar10,8,extraout_a3_lo_03);
    }
    iVar8 = iVar8 + 1;
    piVar10 = piVar10 + 1;
  } while (iVar8 < 0xc);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x115,*(undefined4 *)(&DAT_00329f60 + *(int *)(param_1 + 0x680) * 4),0,0);
  }
  MenuWnd_Update(param_1 + 0x698,0x115,5,4);
  MenuWnd_DrawLabel(0x115,0x3e,0x3b,*(int *)(param_1 + 0x4d0) + 1,*(undefined4 *)(param_1 + 0x4cc));
  iVar8 = UiMgr_FindLayout(0x115);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  MenuWnd_DrawLabel(0x102,0x1b,0x11e,*(int *)(param_1 + 4) + 1);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  if (*(int *)(param_1 + 8) == 0) {
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x4d0) * 4 + param_1 + 0x4c);
    MenuWnd_DrawStatus(uVar7,0xffffffffffffffff,0xffffffffffffffff,0);
    puVar11 = &g_MenuMgr->field_0x40;
    iVar8 = MenuText_RivalCar(uVar7,0xffffffffffffffff);
    UiElem_SetPropInt((UiLayout *)puVar11,0,0x16,iVar8);
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x4d0);
    MenuWnd_DrawStatus(uVar7,1,0xffffffffffffffff,0);
    puVar11 = &g_MenuMgr->field_0x40;
    iVar8 = MenuText_RivalCar(uVar7,1);
    UiElem_SetPropInt((UiLayout *)puVar11,0,0x16,iVar8);
  }
  return;
}

// 0x00210d40  size 0x6a8
void MenuScr_Draw_SelectCarManufacturer(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte extraout_a3_lo;
  undefined4 auStack_a0 [20];
  int aiStack_50 [20];
  
  iVar8 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar8 != 0) {
    uVar6 = UiRes_GetLayoutData(0x51);
    iVar8 = UiMgr_FindLayout(0x17);
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
    pUVar1[iVar8].layout.unk_31c = uVar6;
    pUVar1[iVar8].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x52);
    iVar8 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar7;
    pUVar1[iVar8].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x53);
    iVar8 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x54);
    iVar8 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    uVar7 = UiRes_GetLayoutData(0x55);
    iVar8 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x193);
    iVar8 = UiMgr_FindLayout(0x11);
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
    pUVar1[iVar8].layout.unk_31c = uVar6;
    pUVar1[iVar8].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x194);
    iVar8 = UiMgr_FindLayout(0x11);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar7;
    pUVar1[iVar8].layout.animState = 1;
    iVar8 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    iVar5 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(&pUVar1[iVar8].layout,0,0x16,iVar5);
    MenuWnd_DrawDialogText(0x17,0x36e8a8,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(1);
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x17,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x17,1);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x17,2);
  if (!bVar4 && (!bVar2 && !bVar3)) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    *(undefined4 *)(param_1 + 0x6b4) = 0;
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
  }
  puVar10 = auStack_a0;
  puVar11 = &DAT_00329ed0;
  iVar8 = 9;
  do {
    iVar8 = iVar8 + -1;
    uVar7 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar7;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar8);
  iVar8 = 0;
  piVar9 = aiStack_50;
  do {
    *piVar9 = iVar8 + 0x6a3;
    piVar9[1] = iVar8 + 0x6a4;
    piVar9[2] = iVar8 + 0x6a5;
    piVar9[3] = iVar8 + 0x6a6;
    piVar9[4] = iVar8 + 0x6a7;
    piVar9[5] = iVar8 + 0x6a8;
    iVar8 = iVar8 + 6;
    piVar9 = piVar9 + 6;
  } while (iVar8 < 0x12);
  MenuList_Update(param_1 + 0x1c,auStack_a0,aiStack_50);
  if (*(int *)(param_1 + 0x10) == 1) {
    if (*(int *)(param_1 + 0x14) == 1) {
      iVar8 = UiMgr_FindLayout(0x11);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar8].layout.unk_30c = 0;
      if (pUVar1[iVar8].layout.unk_31c == 0) {
        pUVar1[iVar8].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar8].layout.unk_318 = 1;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x11,1);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) != -1) {
    iVar8 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x330 == 0) {
      pUVar1[iVar8].layout.animState = 0;
    }
    else {
      pUVar1[iVar8].layout.animState = 1;
    }
    iVar8 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    iVar5 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(&pUVar1[iVar8].layout,0,0x16,iVar5);
    UiLayout_UpdateAnimById((UiLayout *)0x11,0);
  }
  iVar8 = UiMgr_FindLayout(0x17);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x36,8,extraout_a3_lo);
  MenuWnd_DrawLabel(0x102,0x1b,0x178);
  iVar8 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x17);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x002113f0  size 0x5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_NormalCar(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 unaff_s1;
  
  iVar6 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar6 != 0) {
    uVar5 = UiRes_GetLayoutData(0x3d4);
    iVar6 = UiMgr_FindLayout(0x114);
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
    pUVar1[iVar6].layout.unk_31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x3d5);
    iVar6 = UiMgr_FindLayout(0x114);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar7;
    pUVar1[iVar6].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x3d2);
    iVar6 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    iVar6 = UiMgr_FindLayout(0x113);
    pUVar1 = g_UiMgr->slots;
    piVar8 = (int *)UiRes_GetLayoutData(0x3d1);
    UiLayout_PlayAnim(&pUVar1[iVar6].layout,piVar8);
    Menu_ClearSlot(0);
    iVar6 = *(int *)(param_1 + 4);
    iVar9 = UiMgr_FindLayout(0x114);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,0xf,9,(uint)(iVar6 != 0));
    iVar6 = *(int *)(param_1 + 4);
    iVar9 = UiMgr_FindLayout(0x114);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,0x10,9,(uint)(iVar6 != 1));
    iVar6 = UiMgr_FindLayout(0x113);
    UiElem_SetNumber(&g_UiMgr->slots[iVar6].layout,0x37,0x16,
                     (long)*(int *)(&DAT_00329dc0 + *(int *)(param_1 + 0x67c) * 4));
  }
  if (*(int *)(param_1 + 0x69c) == 2) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x114,0);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x114,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x113,2);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    if (*(int *)(param_1 + 0x6a4) == 2) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x114,1);
      if (!bVar2) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x114,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x113,3);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x114,*(undefined4 *)(&DAT_00329ec0 + *(int *)(param_1 + 8) * 4),1,0);
    iVar6 = *(int *)(param_1 + 0x68c);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x68c);
  }
  if (iVar6 == 3) {
    cVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar4 == '\x04') ||
       (cVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar4 == '\a')) {
      unaff_s1 = 5;
    }
    else {
      unaff_s1 = 4;
    }
  }
  else if (iVar6 == 2) {
    cVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar4 == '\x04') ||
       (cVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar4 == '\a')) {
      unaff_s1 = 2;
    }
    else {
      unaff_s1 = 1;
    }
  }
  else if (iVar6 == 1) {
    unaff_s1 = 3;
  }
  else if (iVar6 == 0) {
    unaff_s1 = 0;
  }
  uVar10 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x113,0x3a,uVar10);
  uVar10 = MsgId_OnOff(*(int *)(param_1 + 0x688) == 0);
  MenuWnd_DrawText(0x113,0x3b,uVar10);
  uVar10 = MsgId_ForResult(unaff_s1);
  MenuWnd_DrawText(0x113,0x3c,uVar10);
  uVar10 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x690));
  MenuWnd_DrawText(0x113,0x3d,uVar10);
  MenuWnd_DrawRivalLabel(0x113,0x39,1,0x120,2,*(int *)(param_1 + 4) + 1,1);
  MenuWnd_DrawText(0x114,0x14,0x119);
  MenuWnd_DrawLabel(0x114,0x15,0x11a,1);
  MenuWnd_DrawLabel(0x114,0x16,0x11a,2);
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 2) {
    MenuWnd_DrawLabel(0x102,0x1b,0x118);
  }
  else if (iVar6 == 1) {
    MenuWnd_DrawLabel(0x102,0x1b,0x118);
  }
  else if (iVar6 == 0) {
    MenuWnd_DrawText(0x102,0x1b,0x117);
  }
  iVar6 = UiMgr_FindLayout(0x114);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x113);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002119f0  size 0x54c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SpeedKingMode(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 unaff_s0;
  
  iVar5 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar6 = UiRes_GetLayoutData(0x3d0);
    iVar5 = UiMgr_FindLayout(0x113);
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
    pUVar1[iVar5].layout.unk_31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x3d1);
    iVar5 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x3d2);
    iVar5 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x3d3);
    iVar5 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    iVar5 = UiMgr_FindLayout(0x113);
    UiElem_SetNumber(&g_UiMgr->slots[iVar5].layout,0x37,0x16,
                     (long)*(int *)(&DAT_00329dc0 + *(int *)(param_1 + 0x67c) * 4));
    iVar5 = *(int *)(param_1 + 0x69c);
  }
  if (iVar5 == 3) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x113,0);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x113,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x113,2);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    if (*(int *)(param_1 + 0x6a4) == 3) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x113,1);
      if (!bVar2) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x113,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x113,3);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x113,*(undefined4 *)(&DAT_00329ea0 + *(int *)(param_1 + 0x694) * 4),1,0);
    iVar5 = *(int *)(param_1 + 0x68c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x68c);
  }
  if (iVar5 == 3) {
    cVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar4 == '\x04') ||
       (cVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar4 == '\a')) {
      unaff_s0 = 5;
    }
    else {
      unaff_s0 = 4;
    }
  }
  else if (iVar5 == 2) {
    cVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar4 == '\x04') ||
       (cVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar4 == '\a')) {
      unaff_s0 = 2;
    }
    else {
      unaff_s0 = 1;
    }
  }
  else if (iVar5 == 1) {
    unaff_s0 = 3;
  }
  else if (iVar5 == 0) {
    unaff_s0 = 0;
  }
  uVar8 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x113,0x3a,uVar8);
  uVar8 = MsgId_OnOff(*(int *)(param_1 + 0x688) == 0);
  MenuWnd_DrawText(0x113,0x3b,uVar8);
  uVar8 = MsgId_ForResult(unaff_s0);
  MenuWnd_DrawText(0x113,0x3c,uVar8);
  uVar8 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x690));
  MenuWnd_DrawText(0x113,0x3d,uVar8);
  MenuWnd_DrawTextId(0x113,0x39,1,0x121);
  MenuWnd_DrawText(0x113,0x41,0x11b);
  MenuWnd_DrawText(0x113,0x42,0x11c);
  MenuWnd_DrawText(0x113,0x43,0x11d);
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_00329eb0 + *(int *)(param_1 + 0x694) * 4));
  iVar5 = UiMgr_FindLayout(0x113);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00211f40  size 0x878
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Downhill(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  int *piVar9;
  undefined4 auStack_10 [4];
  
  iVar4 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar4 != 0) {
    auStack_10[0] = DAT_00329e40;
    auStack_10[1] = DAT_00329e44;
    auStack_10[2] = DAT_00329e48;
    auStack_10[3] = DAT_00329e4c;
    uVar6 = UiRes_GetLayoutData(0x3cb);
    iVar4 = UiMgr_FindLayout(0x112);
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
    pUVar1[iVar4].layout.unk_31c = uVar6;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x3cc);
    iVar4 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar7;
    pUVar1[iVar4].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x3cd);
    iVar4 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x3ce);
    iVar4 = UiMgr_FindLayout(0x112);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x350 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar7 = UiRes_GetLayoutData(0x3cf);
    iVar4 = UiMgr_FindLayout(0x112);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    iVar4 = UiMgr_FindLayout(0x111);
    UiElem_SetNumber(&g_UiMgr->slots[iVar4].layout,0x3d,0x16,
                     (long)*(int *)(&DAT_00329da0 + *(int *)(param_1 + 0x67c) * 4));
    iVar4 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    piVar9 = (int *)UiRes_GetLayoutData(auStack_10[*(int *)(param_1 + 0x678)]);
    UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar9);
    iVar4 = UiMgr_FindLayout(0x111);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x47,8,extraout_a3_lo_03);
    iVar4 = UiMgr_FindLayout(0x111);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x48,8,extraout_a3_lo_04);
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x112,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    *(undefined4 *)(param_1 + 0x6b4) = 0;
  }
  iVar4 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x20,8,extraout_a3_lo);
  iVar4 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x21,8,extraout_a3_lo_00);
  iVar4 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x22,8,extraout_a3_lo_01);
  iVar4 = 0;
  piVar9 = &DAT_00329e50;
  do {
    iVar5 = UiMgr_FindLayout(0x112);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar9,8,extraout_a3_lo_02);
    iVar4 = iVar4 + 1;
    piVar9 = piVar9 + 1;
  } while (iVar4 < 8);
  iVar4 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,
                      (long)(int)(&DAT_00329e50)[*(int *)(param_1 + 0x688)],8,(byte)g_UiMgr->slots);
  iVar4 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,
                      (long)*(int *)(&DAT_00329e58 + *(int *)(param_1 + 0x68c) * 4),8,
                      (byte)g_UiMgr->slots);
  iVar4 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,
                      (long)*(int *)(&DAT_00329e68 + *(int *)(param_1 + 0x690) * 4),8,
                      (byte)g_UiMgr->slots);
  if (*_g_MenuInput == 1) {
    iVar4 = *(int *)(param_1 + 0x684);
    if (iVar4 == 2) {
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e88 + *(int *)(param_1 + 0x690) * 4),0,0)
      ;
    }
    else if (iVar4 == 1) {
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e78 + *(int *)(param_1 + 0x68c) * 4),0,0)
      ;
    }
    else {
      if (iVar4 != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x67c);
        goto LAB_00212224;
      }
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e70 + *(int *)(param_1 + 0x688) * 4),0,0)
      ;
    }
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x67c);
LAB_00212224:
  uVar8 = MsgId_ForSlot(uVar7,1);
  MenuWnd_DrawText(0x111,0x42,uVar8);
  uVar8 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x43,uVar8);
  uVar8 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x44,uVar8);
  uVar8 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x45,uVar8);
  MenuWnd_DrawText(0x112,0x2c,0x49);
  MenuWnd_DrawText(0x112,0x2d,0x4a);
  MenuWnd_DrawText(0x112,0x2e,0x4f);
  MenuWnd_DrawText(0x112,0x2f,0x51);
  cVar3 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
  if ((cVar3 == '\x04') ||
     (cVar3 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar3 == '\a')) {
    MenuWnd_DrawText(0x112,0x30,0x53);
    MenuWnd_DrawText(0x112,0x31,0x54);
  }
  else {
    MenuWnd_DrawText(0x112,0x30,0x50);
    MenuWnd_DrawText(0x112,0x31,0x52);
  }
  MenuWnd_DrawText(0x112,0x32,0x55);
  MenuWnd_DrawText(0x112,0x33,0x56);
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_00329e90 + *(int *)(param_1 + 0x684) * 4));
  UiLayout_UpdateAnimById((UiLayout *)0x112,(long)(*(int *)(param_1 + 0x684) + 2));
  iVar4 = UiMgr_FindLayout(0x112);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x111);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  Subtitle_Draw();
  return;
}

// 0x002127c0  size 0x8b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SelectTheCourse(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  int *piVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  int iVar13;
  int iStack_4;
  
  iVar4 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar7 = UiRes_GetLayoutData(0x3c1);
    iVar4 = UiMgr_FindLayout(0x111);
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
    pUVar1[iVar4].layout.unk_31c = uVar7;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x3c2);
    iVar4 = UiMgr_FindLayout(0x111);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar8;
    pUVar1[iVar4].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x3c3);
    iVar4 = UiMgr_FindLayout(0x111);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x3c4);
    iVar4 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar8 = UiRes_GetLayoutData(0x3c5);
    iVar4 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar8 = UiRes_GetLayoutData(0x3c6);
    iVar4 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar8 = UiRes_GetLayoutData(0x3c7);
    iVar4 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    uVar8 = UiRes_GetLayoutData(0x3c8);
    iVar4 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    uVar8 = UiRes_GetLayoutData(0x3c9);
    iVar4 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3bc = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    uVar8 = UiRes_GetLayoutData(0x3ca);
    iVar4 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3c8 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3d0 = uVar8;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3cc = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x111,0x36e8a0,2,0);
    iVar4 = *(int *)(param_1 + 0x69c);
  }
  if (iVar4 == 1) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x111,0);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x111,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x111,1);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      iVar4 = Msg_ProfileStat(0);
      MenuWnd_DrawCursor(4 < iVar4 + 1);
    }
  }
  else {
    if (g_MenuMgr->nextScreen == g_MenuMgr->curScreen) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x111,(long)(*(int *)(param_1 + 0x678) + 4));
      if (!bVar2) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x111,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x111,3);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x111,*(undefined4 *)(&DAT_00329de0 + *(int *)(param_1 + 0x678) * 4),1,0);
  }
  MenuWnd_Update(param_1 + 0x698,0x111,8,9);
  iVar5 = Msg_ProfileStat(0);
  iVar5 = iVar5 + 1;
  MenuWnd_Clear(&iStack_4,*(undefined4 *)(param_1 + 0x698),*(undefined4 *)(param_1 + 0x678),
                *(undefined4 *)(param_1 + 0x67c),iVar5,4);
  iVar4 = (*(int *)(param_1 + 0x67c) + iVar5) - *(int *)(param_1 + 0x678);
  iVar13 = 0;
  puVar11 = &DAT_00329df0;
  piVar10 = &DAT_00329e20;
  while( true ) {
    iVar6 = iVar5;
    if (4 < iVar5) {
      iVar6 = 5;
    }
    if ((iVar6 <= iVar13) ||
       ((iVar4 = iVar4 % iVar5, iVar13 == 4 && (iVar4 = iStack_4, iStack_4 == -1)))) break;
    uVar9 = MsgId_ForSlot(iVar4,1);
    MenuWnd_DrawText(0x111,*puVar11,uVar9);
    iVar6 = UiMgr_FindLayout(0x111);
    UiElem_SetNumber(&g_UiMgr->slots[iVar6].layout,(long)*piVar10,0x16,
                     (long)*(int *)(&DAT_00329da0 + iVar4 * 4));
    iVar4 = iVar4 + 1;
    puVar11 = puVar11 + 1;
    piVar10 = piVar10 + 1;
    iVar13 = iVar13 + 1;
  }
  if ((iVar5 < 4) && (iVar5 < 4)) {
    puVar12 = &DAT_00329e08 + iVar5 * 4;
    piVar10 = &DAT_00329e20 + iVar5;
    do {
      iVar4 = UiMgr_FindLayout(0x111);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*(int *)(puVar12 + -4),8,
                          extraout_a3_lo);
      iVar4 = UiMgr_FindLayout(0x111);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar10,8,extraout_a3_lo_00);
      iVar5 = iVar5 + 1;
      puVar12 = puVar12 + 4;
      piVar10 = piVar10 + 1;
    } while (iVar5 < 4);
  }
  MenuWnd_DrawText(0x102,0x1b,0x110);
  iVar4 = UiMgr_FindLayout(0x111);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  Subtitle_Draw();
  return;
}

// 0x00213080  size 0x14
/* menu page 43 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage43_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x002130a0  size 0x178
/* menu page 43 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage43_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar3 = (int)param_1;
  (*(code *)(&PTR_MenuScr_Draw_SelectTheCourse_00329d70)[*(int *)(iVar3 + 0x6a0)])(param_1);
  if (*(int *)(iVar3 + 0x6a0) < 2) {
    iVar1 = UiMgr_FindLayout(0x110);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0x10f,0);
    iVar1 = UiMgr_FindLayout(0x10f);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  }
  iVar1 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle(iVar3 + 0x69c), lVar2 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00213220  size 0x9c
/* menu page 43 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage43_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x3da);
  iVar3 = UiMgr_FindLayout(0x10f);
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
  return;
}

// 0x002132c0  size 0x164
/* entry 7 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State7(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0x18b,*(undefined4 *)(param_1 + 0x4a0),0x36e8d8);
  if (*(int *)(param_1 + 0x4d4) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x19,0x3c,uVar3);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00213430  size 0x17c
/* state of maybe_PageCarPartInfo; on-screen text/callee hint "DoYouWant" (was ScrDoYouWant_Exit) */

void maybe_PageCarPartInfo_State5_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x4c0) == 5) {
    uVar3 = 0x17d;
  }
  else {
    uVar3 = 0x17c;
  }
  iVar1 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(uVar3,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x4d4) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x19,0x3c,uVar3);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x002135b0  size 0x164
/* state of maybe_PageCarPartInfo; on-screen text/callee hint "DoYouWant" (was ScrDoYouWant_Update)
    */

void maybe_PageCarPartInfo_State4_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x18d,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x4d4) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x19,0x3c,uVar3);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00213720  size 0x184
void ScrCareer_Draw_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x4a0),0x36e8d0);
  uVar3 = MenuText_CarShortName(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff);
  MenuWnd_DrawLabel(5,0x1c,0x17b,uVar3);
  if (*(int *)(param_1 + 0x4d4) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x19,0x3c,uVar3);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x002138b0  size 0x5e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 2 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State2(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int *piVar8;
  int iVar9;
  UiLayout *pUVar10;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  iVar3 = CarDb_GetModelEntry(*(undefined4 *)(param_1 + 0x498));
  iVar9 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar9 != 0) {
    uVar5 = UiRes_GetLayoutData(100);
    iVar9 = UiMgr_FindLayout(0x1a);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar9].layout.unk_310 = 0xffffffff;
    pUVar1[iVar9].layout.unk_31c = 0;
    pUVar1[iVar9].layout.unk_30c = 0;
    if (pUVar1[iVar9].layout.unk_31c == 0) {
      pUVar1[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar9].layout.unk_318 = 1;
    }
    pUVar1[iVar9].layout.unk_30c = 0;
    if (pUVar1[iVar9].layout.unk_31c == 0) {
      pUVar1[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x314 = 0;
    pUVar1[iVar9].layout.unk_31c = uVar5;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x65);
    iVar9 = UiMgr_FindLayout(0x1a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
      pUVar1[iVar9].layout.animState = 0;
    }
    else {
      pUVar1[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
      pUVar1[iVar9].layout.animState = 0;
    }
    else {
      pUVar1[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar6;
    pUVar1[iVar9].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x66);
    iVar9 = UiMgr_FindLayout(0x1a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x67);
    iVar9 = UiMgr_FindLayout(0x1a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    iVar9 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x27,8,extraout_a3_lo_01);
    iVar9 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x28,8,extraout_a3_lo_02);
    MenuWnd_DrawDialogText(0x1a,0x36e8c8,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(0xc < iVar3);
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x1a,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if ((*(int *)(param_1 + 0x4d4) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x1a,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x4d4) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x1a,*(undefined4 *)(&DAT_0032a100 + *(int *)(param_1 + 0x49c) * 4),0,0);
  }
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x19,0x3c,uVar7);
  MenuWnd_SetTitle(3,0x17a);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar9 = 0;
  piVar8 = &DAT_0032a130;
  do {
    if (iVar9 < iVar3) {
      iVar4 = UiMgr_FindLayout(0x1a);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar8,8,extraout_a3_lo);
    }
    else {
      iVar4 = UiMgr_FindLayout(0x1a);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar8,8,extraout_a3_lo_00);
    }
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar9 < 0xc);
  iVar9 = 0;
  if (0 < iVar3) {
    piVar8 = &DAT_0032a160;
    do {
      iVar4 = UiMgr_FindLayout(0x1a);
      pUVar10 = &g_UiMgr->slots[iVar4].layout;
      CarDb_GetPartEntry(auStack_8,*(undefined4 *)(param_1 + 0x498),iVar9,0);
      uVar5 = (uint)bStack_3 | (uint)bStack_5 << 0x10 | 0xff000000 | (uint)bStack_4 << 8;
      UiElem_SetPropInt(pUVar10,(long)*piVar8,0x39,uVar5);
      UiElem_SetPropInt(pUVar10,(long)*piVar8,0x3a,uVar5);
      UiElem_SetPropInt(pUVar10,(long)*piVar8,0x3b,uVar5);
      UiElem_SetPropInt(pUVar10,(long)*piVar8,0x3c,uVar5);
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar9 < iVar3);
  }
  iVar9 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x1a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00213ea0  size 0x5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 1 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State1(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  int *piVar11;
  undefined1 *puVar12;
  
  iVar8 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar8 != 0) {
    uVar7 = UiRes_GetLayoutData(0x60);
    iVar8 = UiMgr_FindLayout(0x19);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar7;
    pUVar1[iVar8].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x62);
    iVar8 = UiMgr_FindLayout(0x19);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    uVar7 = UiRes_GetLayoutData(99);
    iVar8 = UiMgr_FindLayout(0x19);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 1;
    uVar7 = UiRes_GetLayoutData(0x96);
    iVar8 = UiMgr_FindLayout(0x19);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x380 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x37c = 1;
    uVar7 = UiRes_GetLayoutData(0x195);
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0350 = 0xffffffff;
    *(undefined4 *)&pMVar2->field_0x35c = 0;
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x34c = 0;
    if (*(int *)&pMVar2->field_0x35c == 0) {
      *(undefined4 *)&pMVar2->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar2->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar2->field_0x354 = 0;
    *(undefined4 *)&pMVar2->field_0x35c = uVar7;
    *(undefined4 *)&pMVar2->field_0x358 = 1;
    if (*(int *)(param_1 + 0x4bc) == 0) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
    }
    MenuWnd_DrawDialogText(0x19,0x32a090,4,0xffffffffffffffff);
    Menu_ClearSlot(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x19,*(undefined4 *)(&DAT_0032a0a0 + *(int *)(param_1 + 0x4ac) * 4),0,0);
  }
  puVar12 = &g_MenuMgr->field_0x40;
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x19,0);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x19,1);
  bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x19,2);
  bVar6 = UiLayout_UpdateAnimIfActive((UiLayout *)puVar12,0);
  if (!bVar6 && (!bVar5 && (!bVar3 && !bVar4))) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if (*(int *)(param_1 + 0x4d4) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      MenuWnd_DrawCursor(*(int *)(param_1 + 0x490) != 1);
    }
  }
  else {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x19,5);
    if (!bVar3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetMoney(uVar10);
  MenuWnd_DrawNumber(0x19,0x3c,uVar10);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_DrawLabel(0x19,0x3e,0x3b,*(int *)(param_1 + 0x494) + 1,*(undefined4 *)(param_1 + 0x490));
  MenuWnd_Update(param_1 + 0x4b0,0x19,4,3);
  MenuWnd_SetTitle(3,0x179);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x490) < 0xd) {
    iVar8 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x37,8,extraout_a3_lo);
    iVar8 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x3b,8,extraout_a3_lo_00);
  }
  iVar8 = 0;
  piVar11 = &DAT_0032a0d0;
  do {
    if (*(int *)(param_1 + 0x490) <= iVar8) {
      iVar9 = UiMgr_FindLayout(0x19);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,(long)*piVar11,8,extraout_a3_lo_01);
    }
    iVar8 = iVar8 + 1;
    piVar11 = piVar11 + 1;
  } while (iVar8 < 0xc);
  puVar12 = &g_MenuMgr->field_0x40;
  iVar8 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff);
  UiElem_SetPropInt((UiLayout *)puVar12,0,0x16,iVar8);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar8 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

