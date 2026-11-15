// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00210000 - 0x00214000
#include "ghidra_types.h"

// 0x00210450  size 0x8e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectCarFor(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  
  iVar4 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x3d6);
    iVar4 = UiMgr_FindLayout(0x115);
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
    uVar3 = UiRes_GetLayoutData(0x3d7);
    iVar4 = UiMgr_FindLayout(0x115);
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
    uVar3 = UiRes_GetLayoutData(0x3d8);
    iVar4 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x3d9);
    iVar4 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x3f0);
    iVar4 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x3f1);
    iVar4 = UiMgr_FindLayout(0x115);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar3 = UiRes_GetLayoutData(0x195);
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
    *(undefined4 *)&pMVar2->field_0x35c = uVar3;
    *(undefined4 *)&pMVar2->field_0x358 = 1;
    uVar3 = UiRes_GetLayoutData(0x407);
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
    *(undefined4 *)&pMVar2->field_0x370 = uVar3;
    *(undefined4 *)&pMVar2->field_0x36c = 1;
    iVar4 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x27,8);
    iVar4 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x28,8);
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 2) {
      iVar4 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x2b,0x16,2);
    }
    else if (iVar4 == 1) {
      iVar4 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x2b,0x16,2);
    }
    else if (iVar4 == 0) {
      iVar4 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x2b,0x16,1);
    }
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x115,0x329f20,4,0xffffffffffffffff);
    iVar4 = *(int *)(param_1 + 0x69c);
  }
  if (iVar4 - 7U < 2) {
    lVar6 = UiLayout_UpdateAnimById(0x115,0);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    puVar11 = &g_MenuMgr->field_0x40;
    lVar6 = UiLayout_UpdateAnimById(0x115,0);
    lVar7 = UiLayout_UpdateAnimById(0x115,2);
    lVar8 = UiLayout_UpdateAnimIfActive(puVar11,0);
    if (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      MenuWnd_DrawCursor(*(int *)(param_1 + 0x4cc) != 1);
      iVar4 = *(int *)(param_1 + 0x4cc);
      goto LAB_0021059c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x6a4) - 7U < 2) {
      lVar6 = UiLayout_UpdateAnimById(0x115);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      puVar11 = &g_MenuMgr->field_0x40;
      lVar6 = UiLayout_UpdateAnimById(0x115);
      lVar7 = UiLayout_UpdateAnimById(0x115,3);
      lVar8 = UiLayout_UpdateAnimIfActive(puVar11,1);
      if (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0)) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  iVar4 = *(int *)(param_1 + 0x4cc);
LAB_0021059c:
  if (iVar4 < 0xd) {
    iVar4 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3b,8);
    iVar4 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3d,8);
  }
  iVar4 = 0;
  puVar10 = &DAT_00329f30;
  do {
    if (*(int *)(param_1 + 0x4cc) <= iVar4) {
      iVar5 = UiMgr_FindLayout(0x115);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,*puVar10,8);
    }
    iVar4 = iVar4 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar4 < 0xc);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x115,*(undefined4 *)(&DAT_00329f60 + *(int *)(param_1 + 0x680) * 4),0,0);
  }
  MenuWnd_Update(param_1 + 0x698,0x115,5,4);
  MenuWnd_DrawLabel(0x115,0x3e,0x3b,*(int *)(param_1 + 0x4d0) + 1,*(undefined4 *)(param_1 + 0x4cc));
  iVar4 = UiMgr_FindLayout(0x115);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  MenuWnd_DrawLabel(0x102,0x1b,0x11e,*(int *)(param_1 + 4) + 1);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x4d0) * 4 + param_1 + 0x4c);
    MenuWnd_DrawStatus(uVar3,0xffffffffffffffff,0xffffffffffffffff,0);
    puVar11 = &g_MenuMgr->field_0x40;
    uVar9 = MenuText_RivalCar(uVar3,0xffffffffffffffff);
    UiElem_SetPropInt(puVar11,0,0x16,uVar9);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x4d0);
    MenuWnd_DrawStatus(uVar3,1,0xffffffffffffffff,0);
    puVar11 = &g_MenuMgr->field_0x40;
    uVar9 = MenuText_RivalCar(uVar3,1);
    UiElem_SetPropInt(puVar11,0,0x16,uVar9);
  }
  return;
}

// 0x00210d40  size 0x6a8
void MenuScr_Draw_SelectCarManufacturer(int param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 auStack_a0 [20];
  int aiStack_50 [20];
  
  iVar7 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar7 != 0) {
    uVar2 = UiRes_GetLayoutData(0x51);
    iVar7 = UiMgr_FindLayout(0x17);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = uVar2;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x52);
    iVar7 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar2;
    pUVar1[iVar7].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x53);
    iVar7 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar2;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    uVar2 = UiRes_GetLayoutData(0x54);
    iVar7 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    uVar2 = UiRes_GetLayoutData(0x55);
    iVar7 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x36c = uVar2;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x368 = 1;
    uVar2 = UiRes_GetLayoutData(0x193);
    iVar7 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x31c = uVar2;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x194);
    iVar7 = UiMgr_FindLayout(0x11);
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
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar2;
    pUVar1[iVar7].layout.animState = 1;
    iVar7 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    uVar6 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(&pUVar1[iVar7].layout,0,0x16,uVar6);
    MenuWnd_DrawDialogText(0x17,0x36e8a8,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(1);
  lVar3 = UiLayout_UpdateAnimById(0x17,0);
  lVar4 = UiLayout_UpdateAnimById(0x17,1);
  lVar5 = UiLayout_UpdateAnimById(0x17,2);
  if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    *(undefined4 *)(param_1 + 0x6b4) = 0;
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
  }
  puVar9 = auStack_a0;
  puVar10 = &DAT_00329ed0;
  iVar7 = 9;
  do {
    iVar7 = iVar7 + -1;
    uVar2 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar2;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar7);
  iVar7 = 0;
  piVar8 = aiStack_50;
  do {
    *piVar8 = iVar7 + 0x6a3;
    piVar8[1] = iVar7 + 0x6a4;
    piVar8[2] = iVar7 + 0x6a5;
    piVar8[3] = iVar7 + 0x6a6;
    piVar8[4] = iVar7 + 0x6a7;
    piVar8[5] = iVar7 + 0x6a8;
    iVar7 = iVar7 + 6;
    piVar8 = piVar8 + 6;
  } while (iVar7 < 0x12);
  MenuList_Update(param_1 + 0x1c,auStack_a0,aiStack_50);
  if (*(int *)(param_1 + 0x10) == 1) {
    if (*(int *)(param_1 + 0x14) == 1) {
      iVar7 = UiMgr_FindLayout(0x11);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    lVar3 = UiLayout_UpdateAnimById(0x11,1);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) != -1) {
    iVar7 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    iVar7 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    uVar6 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(&pUVar1[iVar7].layout,0,0x16,uVar6);
    UiLayout_UpdateAnimById(0x11,0);
  }
  iVar7 = UiMgr_FindLayout(0x17);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,0x36,8);
  MenuWnd_DrawLabel(0x102,0x1b,0x178);
  iVar7 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x17);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x002113f0  size 0x5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_NormalCar(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_s1;
  
  iVar4 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar4 != 0) {
    uVar3 = UiRes_GetLayoutData(0x3d4);
    iVar4 = UiMgr_FindLayout(0x114);
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
    uVar3 = UiRes_GetLayoutData(0x3d5);
    iVar4 = UiMgr_FindLayout(0x114);
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
    uVar3 = UiRes_GetLayoutData(0x3d2);
    iVar4 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    iVar4 = UiMgr_FindLayout(0x113);
    pUVar1 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(0x3d1);
    UiLayout_PlayAnim(&pUVar1[iVar4].layout,uVar6);
    Menu_ClearSlot(0);
    iVar4 = *(int *)(param_1 + 4);
    iVar5 = UiMgr_FindLayout(0x114);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0xf,9,iVar4 != 0);
    iVar4 = *(int *)(param_1 + 4);
    iVar5 = UiMgr_FindLayout(0x114);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0x10,9,iVar4 != 1);
    iVar4 = UiMgr_FindLayout(0x113);
    UiElem_SetNumber(&g_UiMgr->slots[iVar4].layout,0x37,0x16,
                     *(undefined4 *)(&DAT_00329dc0 + *(int *)(param_1 + 0x67c) * 4));
  }
  if (*(int *)(param_1 + 0x69c) == 2) {
    lVar7 = UiLayout_UpdateAnimById(0x114,0);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0x114,0);
    lVar8 = UiLayout_UpdateAnimById(0x113,2);
    if (lVar7 == 0 && lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    if (*(int *)(param_1 + 0x6a4) == 2) {
      lVar7 = UiLayout_UpdateAnimById(0x114);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0x114);
      lVar8 = UiLayout_UpdateAnimById(0x113,3);
      if (lVar7 == 0 && lVar8 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x114,*(undefined4 *)(&DAT_00329ec0 + *(int *)(param_1 + 8) * 4),1,0);
    iVar4 = *(int *)(param_1 + 0x68c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x68c);
  }
  if (iVar4 == 3) {
    cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar2 == '\x04') ||
       (cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar2 == '\a')) {
      unaff_s1 = 5;
    }
    else {
      unaff_s1 = 4;
    }
  }
  else if (iVar4 == 2) {
    cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar2 == '\x04') ||
       (cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar2 == '\a')) {
      unaff_s1 = 2;
    }
    else {
      unaff_s1 = 1;
    }
  }
  else if (iVar4 == 1) {
    unaff_s1 = 3;
  }
  else if (iVar4 == 0) {
    unaff_s1 = 0;
  }
  uVar6 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x113,0x3a,uVar6);
  uVar6 = MsgId_OnOff(*(int *)(param_1 + 0x688) == 0);
  MenuWnd_DrawText(0x113,0x3b,uVar6);
  uVar6 = MsgId_ForResult(unaff_s1);
  MenuWnd_DrawText(0x113,0x3c,uVar6);
  uVar6 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x690));
  MenuWnd_DrawText(0x113,0x3d,uVar6);
  MenuWnd_DrawRivalLabel(0x113,0x39,1,0x120,2,*(int *)(param_1 + 4) + 1,1);
  MenuWnd_DrawText(0x114,0x14,0x119);
  MenuWnd_DrawLabel(0x114,0x15,0x11a,1);
  MenuWnd_DrawLabel(0x114,0x16,0x11a,2);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 2) {
    MenuWnd_DrawLabel(0x102,0x1b,0x118);
  }
  else if (iVar4 == 1) {
    MenuWnd_DrawLabel(0x102,0x1b,0x118);
  }
  else if (iVar4 == 0) {
    MenuWnd_DrawText(0x102,0x1b,0x117);
  }
  iVar4 = UiMgr_FindLayout(0x114);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x113);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002119f0  size 0x54c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SpeedKingMode(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_s0;
  
  iVar3 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x3d0);
    iVar3 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar4;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x3d1);
    iVar3 = UiMgr_FindLayout(0x113);
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
    uVar4 = UiRes_GetLayoutData(0x3d2);
    iVar3 = UiMgr_FindLayout(0x113);
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
    uVar4 = UiRes_GetLayoutData(0x3d3);
    iVar3 = UiMgr_FindLayout(0x113);
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
    Menu_ClearSlot(0);
    iVar3 = UiMgr_FindLayout(0x113);
    UiElem_SetNumber(&g_UiMgr->slots[iVar3].layout,0x37,0x16,
                     *(undefined4 *)(&DAT_00329dc0 + *(int *)(param_1 + 0x67c) * 4));
    iVar3 = *(int *)(param_1 + 0x69c);
  }
  if (iVar3 == 3) {
    lVar5 = UiLayout_UpdateAnimById(0x113,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0x113,0);
    lVar6 = UiLayout_UpdateAnimById(0x113,2);
    if (lVar5 == 0 && lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    if (*(int *)(param_1 + 0x6a4) == 3) {
      lVar5 = UiLayout_UpdateAnimById(0x113);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0x113);
      lVar6 = UiLayout_UpdateAnimById(0x113,3);
      if (lVar5 == 0 && lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x113,*(undefined4 *)(&DAT_00329ea0 + *(int *)(param_1 + 0x694) * 4),1,0);
    iVar3 = *(int *)(param_1 + 0x68c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x68c);
  }
  if (iVar3 == 3) {
    cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar2 == '\x04') ||
       (cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar2 == '\a')) {
      unaff_s0 = 5;
    }
    else {
      unaff_s0 = 4;
    }
  }
  else if (iVar3 == 2) {
    cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar2 == '\x04') ||
       (cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar2 == '\a')) {
      unaff_s0 = 2;
    }
    else {
      unaff_s0 = 1;
    }
  }
  else if (iVar3 == 1) {
    unaff_s0 = 3;
  }
  else if (iVar3 == 0) {
    unaff_s0 = 0;
  }
  uVar7 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x113,0x3a,uVar7);
  uVar7 = MsgId_OnOff(*(int *)(param_1 + 0x688) == 0);
  MenuWnd_DrawText(0x113,0x3b,uVar7);
  uVar7 = MsgId_ForResult(unaff_s0);
  MenuWnd_DrawText(0x113,0x3c,uVar7);
  uVar7 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x690));
  MenuWnd_DrawText(0x113,0x3d,uVar7);
  MenuWnd_DrawTextId(0x113,0x39,1,0x121);
  MenuWnd_DrawText(0x113,0x41,0x11b);
  MenuWnd_DrawText(0x113,0x42,0x11c);
  MenuWnd_DrawText(0x113,0x43,0x11d);
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_00329eb0 + *(int *)(param_1 + 0x694) * 4));
  iVar3 = UiMgr_FindLayout(0x113);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00211f40  size 0x878
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Downhill(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 auStack_10 [4];
  
  iVar3 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar3 != 0) {
    auStack_10[0] = DAT_00329e40;
    auStack_10[1] = DAT_00329e44;
    auStack_10[2] = DAT_00329e48;
    auStack_10[3] = DAT_00329e4c;
    uVar5 = UiRes_GetLayoutData(0x3cb);
    iVar3 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar5;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x3cc);
    iVar3 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar5;
    pUVar1[iVar3].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x3cd);
    iVar3 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x3ce);
    iVar3 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x350 = 1;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0x3cf);
    iVar3 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    iVar3 = UiMgr_FindLayout(0x111);
    UiElem_SetNumber(&g_UiMgr->slots[iVar3].layout,0x3d,0x16,
                     *(undefined4 *)(&DAT_00329da0 + *(int *)(param_1 + 0x67c) * 4));
    iVar3 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    uVar7 = UiRes_GetLayoutData(auStack_10[*(int *)(param_1 + 0x678)]);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,uVar7);
    iVar3 = UiMgr_FindLayout(0x111);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x47,8);
    iVar3 = UiMgr_FindLayout(0x111);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x48,8);
    Menu_ClearSlot(0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x112,0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    *(undefined4 *)(param_1 + 0x6b4) = 0;
  }
  iVar3 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar3].layout,0x20,8);
  iVar3 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar3].layout,0x21,8);
  iVar3 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar3].layout,0x22,8);
  iVar3 = 0;
  puVar8 = &DAT_00329e50;
  do {
    iVar4 = UiMgr_FindLayout(0x112);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,*puVar8,8);
    iVar3 = iVar3 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar3 < 8);
  iVar3 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                      (&DAT_00329e50)[*(int *)(param_1 + 0x688)],8);
  iVar3 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                      *(undefined4 *)(&DAT_00329e58 + *(int *)(param_1 + 0x68c) * 4),8);
  iVar3 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,
                      *(undefined4 *)(&DAT_00329e68 + *(int *)(param_1 + 0x690) * 4),8);
  if (*_g_MenuInput == 1) {
    iVar3 = *(int *)(param_1 + 0x684);
    if (iVar3 == 2) {
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e88 + *(int *)(param_1 + 0x690) * 4),0,0)
      ;
    }
    else if (iVar3 == 1) {
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e78 + *(int *)(param_1 + 0x68c) * 4),0,0)
      ;
    }
    else {
      if (iVar3 != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x67c);
        goto LAB_00212224;
      }
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e70 + *(int *)(param_1 + 0x688) * 4),0,0)
      ;
    }
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x67c);
LAB_00212224:
  uVar7 = MsgId_ForSlot(uVar5,1);
  MenuWnd_DrawText(0x111,0x42,uVar7);
  uVar7 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x43,uVar7);
  uVar7 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x44,uVar7);
  uVar7 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x45,uVar7);
  MenuWnd_DrawText(0x112,0x2c,0x49);
  MenuWnd_DrawText(0x112,0x2d,0x4a);
  MenuWnd_DrawText(0x112,0x2e,0x4f);
  MenuWnd_DrawText(0x112,0x2f,0x51);
  cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
  if ((cVar2 == '\x04') ||
     (cVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar2 == '\a')) {
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
  UiLayout_UpdateAnimById(0x112,*(int *)(param_1 + 0x684) + 2);
  iVar3 = UiMgr_FindLayout(0x112);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x111);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  Subtitle_Draw();
  return;
}

// 0x002127c0  size 0x8b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SelectTheCourse(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  int iVar12;
  int iStack_4;
  
  iVar2 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x3c1);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar5;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x3c2);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar5;
    pUVar1[iVar2].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x3c3);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x3c4);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0x3c5);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(0x3c6);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar5 = UiRes_GetLayoutData(0x3c7);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    uVar5 = UiRes_GetLayoutData(0x3c8);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    uVar5 = UiRes_GetLayoutData(0x3c9);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    uVar5 = UiRes_GetLayoutData(0x3ca);
    iVar2 = UiMgr_FindLayout(0x111);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c8 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3d0 = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x111,0x36e8a0,2,0);
    iVar2 = *(int *)(param_1 + 0x69c);
  }
  if (iVar2 == 1) {
    lVar6 = UiLayout_UpdateAnimById(0x111,0);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0x111,0);
    lVar7 = UiLayout_UpdateAnimById(0x111,1);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      iVar2 = Msg_ProfileStat(0);
      MenuWnd_DrawCursor(4 < iVar2 + 1);
    }
  }
  else {
    if (g_MenuMgr->nextScreen == g_MenuMgr->curScreen) {
      lVar6 = UiLayout_UpdateAnimById(0x111,*(int *)(param_1 + 0x678) + 4);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0x111,2);
      lVar7 = UiLayout_UpdateAnimById(0x111,3);
      if (lVar6 == 0 && lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x111,*(undefined4 *)(&DAT_00329de0 + *(int *)(param_1 + 0x678) * 4),1,0);
  }
  MenuWnd_Update(param_1 + 0x698,0x111,8,9);
  iVar3 = Msg_ProfileStat(0);
  iVar3 = iVar3 + 1;
  MenuWnd_Clear(&iStack_4,*(undefined4 *)(param_1 + 0x698),*(undefined4 *)(param_1 + 0x678),
                *(undefined4 *)(param_1 + 0x67c),iVar3,4);
  iVar2 = (*(int *)(param_1 + 0x67c) + iVar3) - *(int *)(param_1 + 0x678);
  iVar12 = 0;
  puVar10 = &DAT_00329df0;
  puVar9 = &DAT_00329e20;
  while( true ) {
    iVar4 = iVar3;
    if (4 < iVar3) {
      iVar4 = 5;
    }
    if ((iVar4 <= iVar12) ||
       ((iVar2 = iVar2 % iVar3, iVar12 == 4 && (iVar2 = iStack_4, iStack_4 == -1)))) break;
    uVar8 = MsgId_ForSlot(iVar2,1);
    MenuWnd_DrawText(0x111,*puVar10,uVar8);
    iVar4 = UiMgr_FindLayout(0x111);
    UiElem_SetNumber(&g_UiMgr->slots[iVar4].layout,*puVar9,0x16,
                     *(undefined4 *)(&DAT_00329da0 + iVar2 * 4));
    iVar2 = iVar2 + 1;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
    iVar12 = iVar12 + 1;
  }
  if ((iVar3 < 4) && (iVar3 < 4)) {
    puVar11 = &DAT_00329e08 + iVar3 * 4;
    puVar9 = &DAT_00329e20 + iVar3;
    do {
      iVar2 = UiMgr_FindLayout(0x111);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,*(undefined4 *)(puVar11 + -4),8);
      iVar2 = UiMgr_FindLayout(0x111);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,*puVar9,8);
      iVar3 = iVar3 + 1;
      puVar11 = puVar11 + 4;
      puVar9 = puVar9 + 1;
    } while (iVar3 < 4);
  }
  MenuWnd_DrawText(0x102,0x1b,0x110);
  iVar2 = UiMgr_FindLayout(0x111);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
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
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  }
  else {
    UiLayout_UpdateAnimById(0x10f,0);
    iVar1 = UiMgr_FindLayout(0x10f);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  }
  iVar1 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
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
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x3da);
  iVar3 = UiMgr_FindLayout(0x10f);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x002138b0  size 0x5e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 2 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State2(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  UiLayout *pUVar9;
  uint uVar10;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  iVar2 = CarDb_GetModelEntry(*(undefined4 *)(param_1 + 0x498));
  iVar8 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar8 != 0) {
    uVar4 = UiRes_GetLayoutData(100);
    iVar8 = UiMgr_FindLayout(0x1a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x31c == 0) {
      pUVar1[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x31c == 0) {
      pUVar1[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x31c = uVar4;
    pUVar1[iVar8].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x65);
    iVar8 = UiMgr_FindLayout(0x1a);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar4;
    pUVar1[iVar8].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x66);
    iVar8 = UiMgr_FindLayout(0x1a);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x67);
    iVar8 = UiMgr_FindLayout(0x1a);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    iVar8 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x27,8);
    iVar8 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x28,8);
    MenuWnd_DrawDialogText(0x1a,0x36e8c8,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(0xc < iVar2);
  lVar5 = UiLayout_UpdateAnimById(0x1a,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if ((*(int *)(param_1 + 0x4d4) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x1a), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x4d4) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x1a,*(undefined4 *)(&DAT_0032a100 + *(int *)(param_1 + 0x49c) * 4),0,0);
  }
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x19,0x3c,uVar6);
  MenuWnd_SetTitle(3,0x17a);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar8 = 0;
  puVar7 = &DAT_0032a130;
  do {
    if (iVar8 < iVar2) {
      iVar3 = UiMgr_FindLayout(0x1a);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,*puVar7,8);
    }
    else {
      iVar3 = UiMgr_FindLayout(0x1a);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar7,8);
    }
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 < 0xc);
  iVar8 = 0;
  if (0 < iVar2) {
    puVar7 = &DAT_0032a160;
    do {
      iVar3 = UiMgr_FindLayout(0x1a);
      pUVar9 = &g_UiMgr->slots[iVar3].layout;
      CarDb_GetPartEntry(auStack_8,*(undefined4 *)(param_1 + 0x498),iVar8,0);
      uVar10 = (uint)bStack_3 | (uint)bStack_5 << 0x10 | 0xff000000 | (uint)bStack_4 << 8;
      UiElem_SetPropInt(pUVar9,*puVar7,0x39,uVar10);
      UiElem_SetPropInt(pUVar9,*puVar7,0x3a,uVar10);
      UiElem_SetPropInt(pUVar9,*puVar7,0x3b,uVar10);
      UiElem_SetPropInt(pUVar9,*puVar7,0x3c,uVar10);
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < iVar2);
  }
  iVar8 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x1a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x00213ea0  size 0x5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 1 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State1(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  
  iVar4 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar4 != 0) {
    uVar3 = UiRes_GetLayoutData(0x60);
    iVar4 = UiMgr_FindLayout(0x19);
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
    uVar3 = UiRes_GetLayoutData(0x62);
    iVar4 = UiMgr_FindLayout(0x19);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(99);
    iVar4 = UiMgr_FindLayout(0x19);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x96);
    iVar4 = UiMgr_FindLayout(0x19);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar3 = UiRes_GetLayoutData(0x195);
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
    *(undefined4 *)&pMVar2->field_0x35c = uVar3;
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
  lVar6 = UiLayout_UpdateAnimById(0x19,0);
  lVar7 = UiLayout_UpdateAnimById(0x19,1);
  lVar8 = UiLayout_UpdateAnimById(0x19,2);
  lVar9 = UiLayout_UpdateAnimIfActive(puVar12,0);
  if (lVar9 == 0 && (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0))) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if (*(int *)(param_1 + 0x4d4) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      MenuWnd_DrawCursor(*(int *)(param_1 + 0x490) != 1);
    }
  }
  else {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    lVar6 = UiLayout_UpdateAnimById(0x19,5);
    if (lVar6 == 0) {
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
    iVar4 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x37,8);
    iVar4 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3b,8);
  }
  iVar4 = 0;
  puVar11 = &DAT_0032a0d0;
  do {
    if (*(int *)(param_1 + 0x490) <= iVar4) {
      iVar5 = UiMgr_FindLayout(0x19);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,*puVar11,8);
    }
    iVar4 = iVar4 + 1;
    puVar11 = puVar11 + 1;
  } while (iVar4 < 0xc);
  puVar12 = &g_MenuMgr->field_0x40;
  uVar10 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff);
  UiElem_SetPropInt(puVar12,0,0x16,uVar10);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar4 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

