// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00214000 - 0x00218000
#include "ghidra_types.h"

// 0x002144a0  size 0x7b8
/* entry 0 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State0(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 auStack_a0 [20];
  int aiStack_50 [20];
  
  iVar9 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar9 != 0) {
    uVar6 = UiRes_GetLayoutData(0x51);
    iVar9 = UiMgr_FindLayout(0x17);
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
    pUVar1[iVar9].layout.unk_31c = uVar6;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x52);
    iVar9 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar7;
    pUVar1[iVar9].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x53);
    iVar9 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x54);
    iVar9 = UiMgr_FindLayout(0x17);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    uVar7 = UiRes_GetLayoutData(0x55);
    iVar9 = UiMgr_FindLayout(0x17);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x193);
    iVar9 = UiMgr_FindLayout(0x11);
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
    pUVar1[iVar9].layout.unk_31c = uVar6;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x194);
    iVar9 = UiMgr_FindLayout(0x11);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar7;
    pUVar1[iVar9].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x5f);
    iVar9 = UiMgr_FindLayout(0x19);
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
    pUVar1[iVar9].layout.unk_31c = uVar6;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x61);
    iVar9 = UiMgr_FindLayout(0x19);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    iVar9 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    iVar5 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(&pUVar1[iVar9].layout,0,0x16,iVar5);
    MenuWnd_DrawDialogText(0x17,0x36e8c0,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(1);
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x17,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x17,1);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x17,2);
  if (!bVar4 && (!bVar2 && !bVar3)) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if (*(int *)(param_1 + 0x4d4) != 0) {
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
  }
  puVar11 = auStack_a0;
  puVar12 = &DAT_0032a040;
  iVar9 = 9;
  do {
    iVar9 = iVar9 + -1;
    uVar7 = puVar12[1];
    *puVar11 = *puVar12;
    puVar11[1] = uVar7;
    puVar12 = puVar12 + 2;
    puVar11 = puVar11 + 2;
  } while (0 < iVar9);
  iVar9 = 0;
  piVar10 = aiStack_50;
  do {
    *piVar10 = iVar9 + 0x6a3;
    piVar10[1] = iVar9 + 0x6a4;
    piVar10[2] = iVar9 + 0x6a5;
    piVar10[3] = iVar9 + 0x6a6;
    piVar10[4] = iVar9 + 0x6a7;
    piVar10[5] = iVar9 + 0x6a8;
    iVar9 = iVar9 + 6;
    piVar10 = piVar10 + 6;
  } while (iVar9 < 0x12);
  MenuList_Update(param_1 + 0x4dc,auStack_a0,aiStack_50);
  if (*(int *)(param_1 + 0x4b4) == 1) {
    if (*(int *)(param_1 + 0x4b8) == 1) {
      iVar9 = UiMgr_FindLayout(0x11);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar9].layout.unk_30c = 0;
      if (pUVar1[iVar9].layout.unk_31c == 0) {
        pUVar1[iVar9].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar9].layout.unk_318 = 1;
      }
      *(undefined4 *)(param_1 + 0x4b8) = 0;
    }
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x11,1);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x4b4) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) != -1) {
    iVar9 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x330 == 0) {
      pUVar1[iVar9].layout.animState = 0;
    }
    else {
      pUVar1[iVar9].layout.animState = 1;
    }
    iVar9 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    iVar5 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(&pUVar1[iVar9].layout,0,0x16,iVar5);
    UiLayout_UpdateAnimById((UiLayout *)0x11,0);
  }
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x17,0x37,uVar8);
  MenuWnd_SetTitle(3,0x178);
  iVar9 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x16);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x17);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  return;
}

// 0x00214c60  size 0x14
/* menu page 2 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageCarPartInfo_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00214c80  size 0xc0
/* menu page 2 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageCarPartInfo_Update(undefined8 param_1)

{
  long lVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_maybe_PageCarPartInfo_State0_0032a020)[*(int *)((int)param_1 + 0x4c0)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle((int)param_1 + 0x4bc), lVar1 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00214d40  size 0x14
/* menu page 2 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageCarPartInfo_Enter(void)

{
  Menu_ShowDialog(&g_MenuMgr->field_0x654,0x117,4);
  return;
}

// 0x00214d60  size 0x17c
void maybe_Garage_InstallPartDated(undefined8 param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  uVar2 = Profile_Get(0);
  uVar2 = Garage_GetPartSlot(uVar2,param_1);
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetDay(uVar3);
  CarRec_InstallPart(&uStack_1a0,uVar2,uVar3);
  puVar6 = auStack_18c;
  puVar5 = auStack_bc;
  iVar4 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  puVar8 = auStack_150;
  puVar7 = auStack_80;
  iVar4 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar4);
  puVar8 = auStack_130;
  puVar7 = auStack_60;
  iVar4 = 0x15;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar4);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar2 = Profile_Get(0);
  uVar2 = Profile_GetDayOfMonth(uVar2);
  Garage_RecalcCar(&uStack_d0,uVar2);
  return;
}

// 0x00214ee0  size 0x450
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_AreYouSure(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar3 != 0) {
    uVar5 = UiRes_GetLayoutData(0xaf);
    iVar3 = UiMgr_FindLayout(0x23);
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
    pUVar1[iVar3].layout.unk_31c = uVar5;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0xb0);
    iVar3 = UiMgr_FindLayout(0x23);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar6;
    pUVar1[iVar3].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0xb1);
    iVar3 = UiMgr_FindLayout(0x23);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x23,*(undefined4 *)(*(int *)(param_1 + 0x54) * 4 + 0x36e920),1,0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x23,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x23,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  iVar3 = Profile_Get(0);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetCarRecordB
                    (uVar7,*(undefined2 *)(iVar3 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetDay(uVar8);
  iVar3 = Garage_RepairCar(uVar7,uVar8);
  iVar4 = Garage_ComputeValue(uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x20,0x3d,uVar7);
  MenuWnd_DrawText(0x23,0x1d,1);
  MenuWnd_DrawText(0x23,0x1f,2);
  MenuWnd_DrawText(0x23,0x1e,0x18a);
  MenuWnd_DrawText(0x23,0x20,0x18e);
  MenuWnd_DrawText(0x23,0x21,400);
  MenuWnd_DrawNumber(0x23,0x22,iVar3 - iVar4);
  MenuWnd_DrawNumber(0x23,0x23,iVar3 - iVar4);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x20,0x3d,uVar7);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar3 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar3].layout,4);
  iVar3 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x23);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar3].layout,2);
  iVar3 = UiMgr_FindLayout(0x23);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00215330  size 0x454
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_AreYouSure_5330(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0xac);
    iVar3 = UiMgr_FindLayout(0x22);
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
    pUVar1[iVar3].layout.unk_31c = uVar4;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0xad);
    iVar3 = UiMgr_FindLayout(0x22);
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
    uVar5 = UiRes_GetLayoutData(0xae);
    iVar3 = UiMgr_FindLayout(0x22);
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
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x22,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x22,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x22,*(undefined4 *)(*(int *)(param_1 + 0x54) * 4 + 0x36e918),1,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  iVar3 = Profile_Get(0);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCarRecordB
                    (uVar6,*(undefined2 *)(iVar3 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetDay(uVar7);
  uVar7 = Garage_RepairCar(uVar6,uVar7);
  uVar6 = Garage_ComputeValue(uVar6);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x20,0x3d,uVar8);
  MenuWnd_DrawText(0x22,0x1e,1);
  MenuWnd_DrawText(0x22,0x20,2);
  MenuWnd_DrawText(0x22,0x1f,0x189);
  MenuWnd_DrawText(0x22,0x21,0x18e);
  MenuWnd_DrawText(0x22,0x22,399);
  MenuWnd_DrawText(0x22,0x23,400);
  MenuWnd_DrawNumber(0x22,0x24,(int)uVar7 - (int)uVar6);
  MenuWnd_DrawNumber(0x22,0x25,uVar6);
  MenuWnd_DrawNumber(0x22,0x26,uVar7);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar3 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar3].layout,4);
  iVar3 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x22);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar3].layout,2);
  iVar3 = UiMgr_FindLayout(0x22);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00215790  size 0x528
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_SellAll(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar3 != 0) {
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x37,8,extraout_a3_lo);
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x38,8,extraout_a3_lo_00);
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x39,8,extraout_a3_lo_01);
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x3c,8,extraout_a3_lo_02);
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x27,8,extraout_a3_lo_03);
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x28,8,extraout_a3_lo_04);
    iVar3 = UiMgr_FindLayout(0x20);
    pUVar1 = g_UiMgr->slots;
    piVar5 = (int *)UiRes_GetLayoutData(0xa9);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar5);
    uVar6 = UiRes_GetLayoutData(0xab);
    iVar3 = UiMgr_FindLayout(0x21);
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
    pUVar1[iVar3].layout.unk_31c = uVar6;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xb2);
    iVar3 = UiMgr_FindLayout(0x21);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar7;
    pUVar1[iVar3].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x21,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x21,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  MenuWnd_DrawText(0x21,0x13,0x173);
  MenuWnd_DrawText(0x21,0x14,0x174);
  MenuWnd_DrawText(0x21,0x15,0x175);
  iVar3 = Profile_Get(0);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCarRecordB
                    (uVar8,*(undefined2 *)(iVar3 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 != 2) {
    if (iVar3 == 1) {
      uVar9 = Profile_Get(0);
      uVar9 = Profile_GetDay(uVar9);
      iVar3 = Garage_RepairCar(uVar8,uVar9);
      iVar4 = Garage_ComputeValue(uVar8);
      MenuWnd_DrawNumber(0x20,0x3e,iVar3 - iVar4);
    }
    else if (iVar3 == 0) {
      uVar9 = Profile_Get(0);
      uVar9 = Profile_GetDay(uVar9);
      uVar8 = Garage_RepairCar(uVar8,uVar9);
      MenuWnd_DrawNumber(0x20,0x3e,uVar8);
    }
  }
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x20,0x3d,uVar8);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x21,*(undefined4 *)(&DAT_0032a270 + *(int *)(param_1 + 0x50) * 4),1,0);
  }
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032a280 + *(int *)(param_1 + 0x50) * 4));
  iVar3 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar3].layout,4);
  iVar3 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x21);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00215cc0  size 0x8bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage03; on-screen text/callee hint "GarageGetPartSlot" (was
   ScrGarageGetPartSlot_Exit) */

void maybe_PagePartShop_State8_GarageGetPartSlot(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  MenuMgr *pMVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  undefined1 *puVar16;
  int *piVar17;
  
  bVar2 = *(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x34);
  uVar13 = Profile_Get(0);
  lVar14 = Garage_FindCar(uVar13);
  uVar13 = Profile_Get(0);
  iVar8 = Garage_FindCar(uVar13);
  iVar9 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar9 == 0) {
    iVar9 = *(int *)(param_1 + 0x34);
  }
  else {
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == 0) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
      iVar9 = *(int *)(param_1 + 0x58);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x58);
    }
    if (iVar9 == 0) {
      uVar10 = UiRes_GetLayoutData(0xa6);
      iVar9 = UiMgr_FindLayout(0x20);
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
      pUVar1[iVar9].layout.unk_31c = uVar10;
      pUVar1[iVar9].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0xa8);
      iVar9 = UiMgr_FindLayout(0x20);
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
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar11;
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    }
    uVar11 = UiRes_GetLayoutData(0xa7);
    iVar9 = UiMgr_FindLayout(0x20);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar11;
    pUVar1[iVar9].layout.animState = 1;
    uVar11 = UiRes_GetLayoutData(0xa9);
    iVar9 = UiMgr_FindLayout(0x20);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = uVar11;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    uVar11 = UiRes_GetLayoutData(0x3ec);
    iVar9 = UiMgr_FindLayout(0x20);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x380 = uVar11;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 1;
    uVar11 = UiRes_GetLayoutData(0x3ed);
    iVar9 = UiMgr_FindLayout(0x20);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x394 = uVar11;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 1;
    uVar11 = UiRes_GetLayoutData(0x195);
    pMVar3 = g_MenuMgr;
    g_MenuMgr->unk_0350 = 0xffffffff;
    *(undefined4 *)&pMVar3->field_0x35c = 0;
    *(undefined4 *)&pMVar3->field_0x34c = 0;
    if (*(int *)&pMVar3->field_0x35c == 0) {
      *(undefined4 *)&pMVar3->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar3->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar3->field_0x34c = 0;
    if (*(int *)&pMVar3->field_0x35c == 0) {
      *(undefined4 *)&pMVar3->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar3->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar3->field_0x354 = 0;
    *(undefined4 *)&pMVar3->field_0x35c = uVar11;
    *(undefined4 *)&pMVar3->field_0x358 = 1;
    MenuWnd_DrawDialogText(0x20,0x32a200,4,0xffffffffffffffff);
    Menu_ClearSlot(0);
    iVar9 = *(int *)(param_1 + 0x34);
  }
  if ((*(int *)(param_1 + 0x38) != iVar9) && (*(int *)(param_1 + 0x38) = iVar9, bVar2)) {
    MenuWnd_SetHelpText(0);
  }
  if (bVar2) {
    iVar9 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x37,8,extraout_a3_lo);
    if (lVar14 < 2) {
      MenuWnd_DrawFooter(0x183,0xffffffffffffffff,0);
    }
    else {
      MenuWnd_DrawFooter(0x188,0xffffffffffffffff,0);
    }
  }
  else {
    iVar9 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x37,8,extraout_a3_lo_00);
  }
  puVar16 = &g_MenuMgr->field_0x40;
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x20,0);
  bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x20,1);
  bVar6 = UiLayout_UpdateAnimById((UiLayout *)0x20,2);
  bVar7 = UiLayout_UpdateAnimIfActive((UiLayout *)puVar16,0);
  if (!bVar7 && (!bVar6 && (!bVar4 && !bVar5))) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      uVar13 = Profile_Get(0);
      lVar14 = Garage_FindCar(uVar13);
      MenuWnd_DrawCursor(lVar14 != 1);
    }
  }
  else {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x20,3);
    if (!bVar4) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (iVar8 < 0xd) {
    iVar9 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x39,8,extraout_a3_lo_01);
    iVar9 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x3c,8,extraout_a3_lo_02);
  }
  iVar9 = 0;
  piVar17 = &DAT_0032a210;
  do {
    if (iVar8 <= iVar9) {
      iVar12 = UiMgr_FindLayout(0x20);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar12].layout,(long)*piVar17,8,extraout_a3_lo_03);
    }
    iVar9 = iVar9 + 1;
    piVar17 = piVar17 + 1;
  } while (iVar9 < 0xc);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x20,*(undefined4 *)(&DAT_0032a240 + *(int *)(param_1 + 0x3c) * 4),0,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  puVar16 = &g_MenuMgr->field_0x40;
  iVar9 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x34),0);
  UiElem_SetPropInt((UiLayout *)puVar16,0,0x16,iVar9);
  iVar9 = Profile_Get(0);
  uVar13 = Profile_Get(0);
  uVar13 = Profile_GetCarRecordB
                     (uVar13,*(undefined2 *)(iVar9 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar15 = Profile_Get(0);
  uVar15 = Profile_GetDay(uVar15);
  uVar13 = Garage_RepairCar(uVar13,uVar15);
  MenuWnd_DrawNumber(0x20,0x3e,uVar13);
  MenuWnd_DrawLabel(0x20,0x3f,0x3b,*(int *)(param_1 + 0x34) + 1,iVar8);
  uVar13 = Profile_Get(0);
  uVar13 = Profile_GetMoney(uVar13);
  MenuWnd_DrawNumber(0x20,0x3d,uVar13);
  MenuWnd_Update(param_1 + 0x40,0x20,6,5);
  if (bVar2) {
    MenuWnd_SetTitle(1,0x184);
  }
  else {
    MenuWnd_SetTitle(3,0x184);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar9 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar9].layout,4);
  iVar9 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00216580  size 0x4a4
/* state of MenuPage03; on-screen text/callee hint "GarageGetPartSlot" (was
   ScrGarageGetPartSlot_Update) */

void maybe_PagePartShop_State7_GarageGetPartSlot(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined2 uStack_340;
  undefined2 uStack_33e;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined1 auStack_32c [24];
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined2 auStack_2f0 [16];
  undefined2 auStack_2d0 [42];
  undefined1 uStack_27c;
  undefined4 uStack_278;
  undefined2 uStack_270;
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_25c [24];
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined2 auStack_220 [16];
  undefined2 auStack_200 [42];
  undefined1 uStack_1ac;
  undefined4 uStack_1a8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x12,8,extraout_a3_lo);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x13,8,extraout_a3_lo_00);
  }
  lVar4 = MenuWnd_DrawFooter(0x18b,*(undefined4 *)(param_1 + 0x54),0x36e910);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar4 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_1a0,uVar5,uVar6);
  puVar8 = auStack_18c;
  puVar7 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar2);
  puVar10 = auStack_150;
  puVar9 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  puVar10 = auStack_130;
  puVar9 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  uVar5 = Garage_RecalcCar(&uStack_d0,uVar5);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar5);
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_340,uVar5,uVar6);
  puVar8 = auStack_32c;
  puVar7 = auStack_25c;
  iVar2 = 0x17;
  uStack_270 = uStack_340;
  uStack_260 = uStack_330;
  uStack_26e = uStack_33e;
  uStack_26c = uStack_33c;
  uStack_268 = uStack_338;
  uStack_264 = uStack_334;
  do {
    iVar2 = iVar2 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar2);
  puVar10 = auStack_2f0;
  puVar9 = auStack_220;
  iVar2 = 8;
  uStack_238 = uStack_308;
  uStack_234 = uStack_304;
  uStack_230 = uStack_300;
  uStack_244 = uStack_314;
  uStack_240 = uStack_310;
  uStack_23c = uStack_30c;
  uStack_22c = uStack_2fc;
  uStack_228 = uStack_2f8;
  uStack_224 = uStack_2f4;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  puVar10 = auStack_2d0;
  puVar9 = auStack_200;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  uStack_1ac = uStack_27c;
  uStack_1a8 = uStack_278;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  iVar2 = Garage_RecalcCar(&uStack_270,uVar5);
  uVar5 = Profile_Get(0);
  iVar3 = Profile_GetMoney(uVar5);
  MenuWnd_DrawNumber(0x1e,0x1e,iVar3 - iVar2);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00216a30  size 0x4a4
/* state of MenuPage03; on-screen text/callee hint "GarageGetPartSlot" (was
   ScrGarageGetPartSlot_Enter) */

void maybe_PagePartShop_State6_GarageGetPartSlot(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined2 uStack_340;
  undefined2 uStack_33e;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined1 auStack_32c [24];
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined2 auStack_2f0 [16];
  undefined2 auStack_2d0 [42];
  undefined1 uStack_27c;
  undefined4 uStack_278;
  undefined2 uStack_270;
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_25c [24];
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined2 auStack_220 [16];
  undefined2 auStack_200 [42];
  undefined1 uStack_1ac;
  undefined4 uStack_1a8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x12,8,extraout_a3_lo);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x13,8,extraout_a3_lo_00);
  }
  lVar4 = MenuWnd_DrawFooter(0x18d,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar4 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_1a0,uVar5,uVar6);
  puVar8 = auStack_18c;
  puVar7 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar2);
  puVar10 = auStack_150;
  puVar9 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  puVar10 = auStack_130;
  puVar9 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  uVar5 = Garage_RecalcCar(&uStack_d0,uVar5);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar5);
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_340,uVar5,uVar6);
  puVar8 = auStack_32c;
  puVar7 = auStack_25c;
  iVar2 = 0x17;
  uStack_270 = uStack_340;
  uStack_260 = uStack_330;
  uStack_26e = uStack_33e;
  uStack_26c = uStack_33c;
  uStack_268 = uStack_338;
  uStack_264 = uStack_334;
  do {
    iVar2 = iVar2 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar2);
  puVar10 = auStack_2f0;
  puVar9 = auStack_220;
  iVar2 = 8;
  uStack_238 = uStack_308;
  uStack_234 = uStack_304;
  uStack_230 = uStack_300;
  uStack_244 = uStack_314;
  uStack_240 = uStack_310;
  uStack_23c = uStack_30c;
  uStack_22c = uStack_2fc;
  uStack_228 = uStack_2f8;
  uStack_224 = uStack_2f4;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  puVar10 = auStack_2d0;
  puVar9 = auStack_200;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  uStack_1ac = uStack_27c;
  uStack_1a8 = uStack_278;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  iVar2 = Garage_RecalcCar(&uStack_270,uVar5);
  uVar5 = Profile_Get(0);
  iVar3 = Profile_GetMoney(uVar5);
  MenuWnd_DrawNumber(0x1e,0x1e,iVar3 - iVar2);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00216ee0  size 0x364
void ScrGarage_Draw_DoYouWant(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x12,8,extraout_a3_lo);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x13,8,extraout_a3_lo_00);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x54),0x36e908);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar4 = MenuText_CarShortName
                    (*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe);
  MenuWnd_DrawLabel(5,0x1c,0x17b,uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = Garage_GetPartSlot(uVar4,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDay(uVar5);
  CarRec_InstallPart(&uStack_1a0,uVar4,uVar5);
  puVar7 = auStack_18c;
  puVar6 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (0 < iVar2);
  puVar9 = auStack_150;
  puVar8 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  puVar9 = auStack_130;
  puVar8 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetDayOfMonth(uVar4);
  uVar4 = Garage_RecalcCar(&uStack_d0,uVar4);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetMoney(uVar4);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar4);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00217250  size 0x338
/* state of MenuPage03; on-screen text/callee hint "DoYouWant" (was ScrDoYouWant_Update17250) */

void maybe_PagePartShop_State4_DoYouWant(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x12,8,extraout_a3_lo);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x13,8,extraout_a3_lo_00);
  }
  lVar3 = MenuWnd_DrawFooter(0x17c,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar4 = Profile_Get(0);
  uVar4 = Garage_GetPartSlot(uVar4,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDay(uVar5);
  CarRec_InstallPart(&uStack_1a0,uVar4,uVar5);
  puVar7 = auStack_18c;
  puVar6 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (0 < iVar2);
  puVar9 = auStack_150;
  puVar8 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  puVar9 = auStack_130;
  puVar8 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetDayOfMonth(uVar4);
  uVar4 = Garage_RecalcCar(&uStack_d0,uVar4);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetMoney(uVar4);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar4);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00217590  size 0x338
/* state of MenuPage03; on-screen text/callee hint "DoYouWant" (was ScrDoYouWant_Enter) */

void maybe_PagePartShop_State3_DoYouWant(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x12,8,extraout_a3_lo);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x13,8,extraout_a3_lo_00);
  }
  lVar3 = MenuWnd_DrawFooter(0x17d,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar4 = Profile_Get(0);
  uVar4 = Garage_GetPartSlot(uVar4,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDay(uVar5);
  CarRec_InstallPart(&uStack_1a0,uVar4,uVar5);
  puVar7 = auStack_18c;
  puVar6 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (0 < iVar2);
  puVar9 = auStack_150;
  puVar8 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  puVar9 = auStack_130;
  puVar8 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetDayOfMonth(uVar4);
  uVar4 = Garage_RecalcCar(&uStack_d0,uVar4);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetMoney(uVar4);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar4);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x002178d0  size 0x564
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_DemonstrationModel(int param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar9 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar9 != 0) {
    iVar9 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    piVar4 = (int *)UiRes_GetLayoutData(0xa3);
    UiLayout_PlayAnim(&pUVar2[iVar9].layout,piVar4);
    uVar5 = UiRes_GetLayoutData(0xa4);
    iVar9 = UiMgr_FindLayout(0x1f);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar9].layout.unk_310 = 0xffffffff;
    pUVar2[iVar9].layout.unk_31c = 0;
    pUVar2[iVar9].layout.unk_30c = 0;
    if (pUVar2[iVar9].layout.unk_31c == 0) {
      pUVar2[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    pUVar2[iVar9].layout.unk_30c = 0;
    if (pUVar2[iVar9].layout.unk_31c == 0) {
      pUVar2[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x314 = 0;
    pUVar2[iVar9].layout.unk_31c = uVar5;
    pUVar2[iVar9].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0xa5);
    iVar9 = UiMgr_FindLayout(0x1f);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x330 == 0) {
      pUVar2[iVar9].layout.animState = 0;
    }
    else {
      pUVar2[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x330 == 0) {
      pUVar2[iVar9].layout.animState = 0;
    }
    else {
      pUVar2[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x330 = uVar6;
    pUVar2[iVar9].layout.animState = 1;
    Menu_ClearSlot(0);
    iVar9 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x12,8,extraout_a3_lo);
    iVar9 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x13,8,extraout_a3_lo_00);
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == -1) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x1f,0);
  if (!bVar3) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x1f,1);
    if (!bVar3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x1f,*(undefined4 *)(*(int *)(param_1 + 0x50) * 4 + 0x36e8f8),1,0);
  }
  MenuWnd_DrawText(0x1f,0xd,0x171);
  MenuWnd_DrawText(0x1f,0xe,0x172);
  uVar7 = Profile_Get(0);
  uVar7 = Garage_GetPartSlot(uVar7,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetDay(uVar8);
  CarRec_InstallPart(&uStack_1a0,uVar7,uVar8);
  puVar11 = auStack_18c;
  puVar10 = auStack_bc;
  iVar9 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar9 = iVar9 + -1;
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  } while (0 < iVar9);
  puVar13 = auStack_150;
  puVar12 = auStack_80;
  iVar9 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar9 = iVar9 + -1;
    uVar1 = puVar13[1];
    *puVar12 = *puVar13;
    puVar12[1] = uVar1;
    puVar13 = puVar13 + 2;
    puVar12 = puVar12 + 2;
  } while (0 < iVar9);
  puVar13 = auStack_130;
  puVar12 = auStack_60;
  iVar9 = 0x15;
  do {
    iVar9 = iVar9 + -1;
    uVar1 = puVar13[1];
    *puVar12 = *puVar13;
    puVar12[1] = uVar1;
    puVar13 = puVar13 + 2;
    puVar12 = puVar12 + 2;
  } while (0 < iVar9);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetDayOfMonth(uVar7);
  uVar7 = Garage_RecalcCar(&uStack_d0,uVar7);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar7);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  puVar10 = &g_MenuMgr->field_0x40;
  iVar9 = MenuText_RivalCar(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),
                            0xfffffffffffffffe);
  UiElem_SetPropInt((UiLayout *)puVar10,0,0x16,iVar9);
  MenuWnd_SetTitle(3,*(undefined4 *)(*(int *)(param_1 + 0x50) * 4 + 0x36e900));
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar9 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0x1f);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x00217e40  size 0x92c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage03; on-screen text/callee hint "Shop" (was ScrShop_Update) */

void maybe_PagePartShop_State1_Shop(int param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  MenuMgr *pMVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  int *piVar18;
  long lVar19;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar13 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar13 == 0) {
    iVar13 = *(int *)(param_1 + 4);
  }
  else {
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == 2) {
      iVar13 = *(int *)(param_1 + 4);
    }
    else {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
      iVar13 = *(int *)(param_1 + 4);
    }
    if (iVar13 == 0) {
      MenuWnd_SetHelpText(0);
    }
    uVar8 = UiRes_GetLayoutData(0xa0);
    iVar13 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar13].layout.unk_310 = 0xffffffff;
    pUVar2[iVar13].layout.unk_31c = 0;
    pUVar2[iVar13].layout.unk_30c = 0;
    if (pUVar2[iVar13].layout.unk_31c == 0) {
      pUVar2[iVar13].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar13].layout.unk_318 = 1;
    }
    pUVar2[iVar13].layout.unk_30c = 0;
    if (pUVar2[iVar13].layout.unk_31c == 0) {
      pUVar2[iVar13].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar13].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x314 = 0;
    pUVar2[iVar13].layout.unk_31c = uVar8;
    pUVar2[iVar13].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0xa1);
    iVar13 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar13].layout.field_0x330 == 0) {
      pUVar2[iVar13].layout.animState = 0;
    }
    else {
      pUVar2[iVar13].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar13].layout.field_0x330 == 0) {
      pUVar2[iVar13].layout.animState = 0;
    }
    else {
      pUVar2[iVar13].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x330 = uVar9;
    pUVar2[iVar13].layout.animState = 1;
    uVar9 = UiRes_GetLayoutData(0xa2);
    iVar13 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar13].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar13].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar13].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar13].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar13].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar13].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x344 = uVar9;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x340 = 1;
    uVar9 = UiRes_GetLayoutData(0xa3);
    iVar13 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar13].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar13].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar13].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar13].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar13].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar13].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x358 = uVar9;
    *(undefined4 *)&pUVar2[iVar13].layout.field_0x354 = 1;
    uVar9 = UiRes_GetLayoutData(0x195);
    pMVar3 = g_MenuMgr;
    g_MenuMgr->unk_0350 = 0xffffffff;
    *(undefined4 *)&pMVar3->field_0x35c = 0;
    *(undefined4 *)&pMVar3->field_0x34c = 0;
    if (*(int *)&pMVar3->field_0x35c == 0) {
      *(undefined4 *)&pMVar3->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar3->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar3->field_0x34c = 0;
    if (*(int *)&pMVar3->field_0x35c == 0) {
      *(undefined4 *)&pMVar3->field_0x358 = 0;
    }
    else {
      *(undefined4 *)&pMVar3->field_0x358 = 1;
    }
    *(undefined4 *)&pMVar3->field_0x354 = 0;
    *(undefined4 *)&pMVar3->field_0x35c = uVar9;
    *(undefined4 *)&pMVar3->field_0x358 = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 4) < 2) {
      iVar13 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,0x12,8,extraout_a3_lo_00);
      iVar13 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,0x13,8,extraout_a3_lo_01);
    }
    else {
      iVar13 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,0x12,8,extraout_a3_lo_02);
      iVar13 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,0x13,8,extraout_a3_lo_03);
    }
    MenuWnd_DrawDialogText(0x1e,0x36e8f0,2,1);
    iVar13 = *(int *)(param_1 + 4);
  }
  MenuWnd_DrawCursor(1 < iVar13);
  lVar19 = 2;
  if (*(int *)(param_1 + 4) == 0) {
    lVar19 = MenuWnd_DrawFooter(0x191,0xffffffffffffffff,0);
  }
  if (*(int *)(param_1 + 0x58) == 2) {
    bVar7 = UiLayout_UpdateAnimById((UiLayout *)0x1e,1);
    if (!bVar7) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    puVar14 = &g_MenuMgr->field_0x40;
    bVar7 = UiLayout_UpdateAnimById((UiLayout *)0x1e,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x1e,1);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x1e,2);
    bVar6 = UiLayout_UpdateAnimIfActive((UiLayout *)puVar14,0);
    if (!bVar6 && (!bVar5 && (!bVar7 && !bVar4))) {
      if (*(int *)(param_1 + 4) == 0) {
        if (lVar19 != 2) goto LAB_00217f40;
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      iVar13 = *(int *)(param_1 + 0x70);
      goto LAB_00217f44;
    }
  }
LAB_00217f40:
  iVar13 = *(int *)(param_1 + 0x70);
LAB_00217f44:
  if (iVar13 != 0) {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    if (*(int *)(param_1 + 4) == 0) {
      if (lVar19 == 2) {
        MenuWnd_RequestRedraw();
      }
      if ((lVar19 == 3) && (bVar7 = UiLayout_UpdateAnimById((UiLayout *)0x1e,3), !bVar7)) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
    else {
      bVar7 = UiLayout_UpdateAnimById((UiLayout *)0x1e,3);
      if (!bVar7) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
  }
  if ((*(int *)(param_1 + 4) != 0) && (*_g_MenuInput == 1)) {
    MenuWnd_SetItemState(0x1e,*(undefined4 *)(&DAT_0032a1c0 + *(int *)(param_1 + 8) * 4),0,0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar11 = Profile_Get(0);
    uVar11 = Garage_GetPartSlot(uVar11,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
    uVar12 = Profile_Get(0);
    uVar12 = Profile_GetDay(uVar12);
    CarRec_InstallPart(&uStack_1a0,uVar11,uVar12);
    puVar15 = auStack_18c;
    puVar14 = auStack_bc;
    iVar13 = 0x17;
    uStack_d0 = uStack_1a0;
    uStack_c0 = uStack_190;
    uStack_ce = uStack_19e;
    uStack_cc = uStack_19c;
    uStack_c8 = uStack_198;
    uStack_c4 = uStack_194;
    do {
      iVar13 = iVar13 + -1;
      *puVar14 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (0 < iVar13);
    puVar17 = auStack_150;
    puVar16 = auStack_80;
    iVar13 = 8;
    uStack_98 = uStack_168;
    uStack_94 = uStack_164;
    uStack_90 = uStack_160;
    uStack_a4 = uStack_174;
    uStack_a0 = uStack_170;
    uStack_9c = uStack_16c;
    uStack_8c = uStack_15c;
    uStack_88 = uStack_158;
    uStack_84 = uStack_154;
    do {
      iVar13 = iVar13 + -1;
      uVar1 = puVar17[1];
      *puVar16 = *puVar17;
      puVar16[1] = uVar1;
      puVar17 = puVar17 + 2;
      puVar16 = puVar16 + 2;
    } while (0 < iVar13);
    puVar17 = auStack_130;
    puVar16 = auStack_60;
    iVar13 = 0x15;
    do {
      iVar13 = iVar13 + -1;
      uVar1 = puVar17[1];
      *puVar16 = *puVar17;
      puVar16[1] = uVar1;
      puVar17 = puVar17 + 2;
      puVar16 = puVar16 + 2;
    } while (0 < iVar13);
    uStack_c = uStack_dc;
    uStack_8 = uStack_d8;
    uVar11 = Profile_Get(0);
    uVar11 = Profile_GetDayOfMonth(uVar11);
    uVar11 = Garage_RecalcCar(&uStack_d0,uVar11);
    MenuWnd_DrawNumber(0x1e,0x1f,uVar11);
    MenuWnd_DrawLabel(0x1e,0x20,0x3b,*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
  }
  uVar11 = Profile_Get(0);
  uVar11 = Profile_GetMoney(uVar11);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar11);
  if (*(int *)(param_1 + 4) == 0) {
    MenuWnd_DrawStatus(0xfffffffffffffffe,0xffffffffffffffff,0xffffffffffffffff,0);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe
                       ,0xffffffffffffffff,0);
    puVar14 = &g_MenuMgr->field_0x40;
    iVar13 = MenuText_RivalCar(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),
                               0xfffffffffffffffe);
    UiElem_SetPropInt((UiLayout *)puVar14,0,0x16,iVar13);
  }
  MenuWnd_SetTitle(3,0x180);
  iVar13 = 0;
  piVar18 = &DAT_0032a1e0;
  do {
    if (*(int *)(param_1 + 4) <= iVar13) {
      iVar10 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar10].layout,(long)*piVar18,8,extraout_a3_lo_04);
    }
    iVar13 = iVar13 + 1;
    piVar18 = piVar18 + 1;
  } while (iVar13 < 6);
  if (*(int *)(param_1 + 4) == 0) {
    iVar13 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,0x1a,8,extraout_a3_lo);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar13 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar13].layout);
  iVar13 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar13].layout);
  if (*(int *)(param_1 + 4) != 0) {
    UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  }
  return;
}

