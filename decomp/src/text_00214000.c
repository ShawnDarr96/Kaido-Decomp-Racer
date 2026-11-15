// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00214000 - 0x00218000
#include "ghidra_types.h"

// 0x002144a0  size 0x7b8
/* entry 0 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State0(int param_1)

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
  
  iVar7 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
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
    uVar2 = UiRes_GetLayoutData(0x5f);
    iVar7 = UiMgr_FindLayout(0x19);
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
    uVar2 = UiRes_GetLayoutData(0x61);
    iVar7 = UiMgr_FindLayout(0x19);
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
    iVar7 = UiMgr_FindLayout(0x11);
    pUVar1 = g_UiMgr->slots;
    uVar6 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(&pUVar1[iVar7].layout,0,0x16,uVar6);
    MenuWnd_DrawDialogText(0x17,0x36e8c0,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(1);
  lVar3 = UiLayout_UpdateAnimById(0x17,0);
  lVar4 = UiLayout_UpdateAnimById(0x17,1);
  lVar5 = UiLayout_UpdateAnimById(0x17,2);
  if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if (*(int *)(param_1 + 0x4d4) != 0) {
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
  }
  puVar9 = auStack_a0;
  puVar10 = &DAT_0032a040;
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
  MenuList_Update(param_1 + 0x4dc,auStack_a0,aiStack_50);
  if (*(int *)(param_1 + 0x4b4) == 1) {
    if (*(int *)(param_1 + 0x4b8) == 1) {
      iVar7 = UiMgr_FindLayout(0x11);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar7].layout.field_0x31c == 0) {
        pUVar1[iVar7].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar7].layout.unk_318 = 1;
      }
      *(undefined4 *)(param_1 + 0x4b8) = 0;
    }
    lVar3 = UiLayout_UpdateAnimById(0x11,1);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x4b4) = 0;
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
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x17,0x37,uVar6);
  MenuWnd_SetTitle(3,0x178);
  iVar7 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x16);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x17);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
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
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    uVar4 = UiRes_GetLayoutData(0xaf);
    iVar2 = UiMgr_FindLayout(0x23);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar4;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xb0);
    iVar2 = UiMgr_FindLayout(0x23);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
    pUVar1[iVar2].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0xb1);
    iVar2 = UiMgr_FindLayout(0x23);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x23,*(undefined4 *)(*(int *)(param_1 + 0x54) * 4 + 0x36e920),1,0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x23,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x23), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  iVar2 = Profile_Get(0);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCarRecordB
                    (uVar6,*(undefined2 *)(iVar2 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetDay(uVar7);
  iVar2 = Garage_RepairCar(uVar6,uVar7);
  iVar3 = Garage_ComputeValue(uVar6);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x20,0x3d,uVar6);
  MenuWnd_DrawText(0x23,0x1d,1);
  MenuWnd_DrawText(0x23,0x1f,2);
  MenuWnd_DrawText(0x23,0x1e,0x18a);
  MenuWnd_DrawText(0x23,0x20,0x18e);
  MenuWnd_DrawText(0x23,0x21,400);
  MenuWnd_DrawNumber(0x23,0x22,iVar2 - iVar3);
  MenuWnd_DrawNumber(0x23,0x23,iVar2 - iVar3);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x20,0x3d,uVar6);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,4);
  iVar2 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x23);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,2);
  iVar2 = UiMgr_FindLayout(0x23);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x00215330  size 0x454
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_AreYouSure_5330(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0xac);
    iVar2 = UiMgr_FindLayout(0x22);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0xad);
    iVar2 = UiMgr_FindLayout(0x22);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0xae);
    iVar2 = UiMgr_FindLayout(0x22);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x22,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x22), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x22,*(undefined4 *)(*(int *)(param_1 + 0x54) * 4 + 0x36e918),1,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  iVar2 = Profile_Get(0);
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetCarRecordB
                    (uVar5,*(undefined2 *)(iVar2 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  uVar6 = Garage_RepairCar(uVar5,uVar6);
  uVar5 = Garage_ComputeValue(uVar5);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x20,0x3d,uVar7);
  MenuWnd_DrawText(0x22,0x1e,1);
  MenuWnd_DrawText(0x22,0x20,2);
  MenuWnd_DrawText(0x22,0x1f,0x189);
  MenuWnd_DrawText(0x22,0x21,0x18e);
  MenuWnd_DrawText(0x22,0x22,399);
  MenuWnd_DrawText(0x22,0x23,400);
  MenuWnd_DrawNumber(0x22,0x24,(int)uVar6 - (int)uVar5);
  MenuWnd_DrawNumber(0x22,0x25,uVar5);
  MenuWnd_DrawNumber(0x22,0x26,uVar6);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,4);
  iVar2 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x22);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,2);
  iVar2 = UiMgr_FindLayout(0x22);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x00215790  size 0x528
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_SellAll(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    iVar2 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x37,8);
    iVar2 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x38,8);
    iVar2 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x39,8);
    iVar2 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x3c,8);
    iVar2 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x27,8);
    iVar2 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x28,8);
    iVar2 = UiMgr_FindLayout(0x20);
    pUVar1 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(0xa9);
    UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar6);
    uVar4 = UiRes_GetLayoutData(0xab);
    iVar2 = UiMgr_FindLayout(0x21);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar4;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xb2);
    iVar2 = UiMgr_FindLayout(0x21);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
    pUVar1[iVar2].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x21,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x21), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  MenuWnd_DrawText(0x21,0x13,0x173);
  MenuWnd_DrawText(0x21,0x14,0x174);
  MenuWnd_DrawText(0x21,0x15,0x175);
  iVar2 = Profile_Get(0);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCarRecordB
                    (uVar6,*(undefined2 *)(iVar2 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      uVar7 = Profile_Get(0);
      uVar7 = Profile_GetDay(uVar7);
      iVar2 = Garage_RepairCar(uVar6,uVar7);
      iVar3 = Garage_ComputeValue(uVar6);
      MenuWnd_DrawNumber(0x20,0x3e,iVar2 - iVar3);
    }
    else if (iVar2 == 0) {
      uVar7 = Profile_Get(0);
      uVar7 = Profile_GetDay(uVar7);
      uVar6 = Garage_RepairCar(uVar6,uVar7);
      MenuWnd_DrawNumber(0x20,0x3e,uVar6);
    }
  }
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x20,0x3d,uVar6);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x21,*(undefined4 *)(&DAT_0032a270 + *(int *)(param_1 + 0x50) * 4),1,0);
  }
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032a280 + *(int *)(param_1 + 0x50) * 4));
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,4);
  iVar2 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x21);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  
  bVar2 = *(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x34);
  uVar8 = Profile_Get(0);
  lVar9 = Garage_FindCar(uVar8);
  uVar8 = Profile_Get(0);
  iVar4 = Garage_FindCar(uVar8);
  iVar5 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x34);
  }
  else {
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == 0) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
      iVar5 = *(int *)(param_1 + 0x58);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (iVar5 == 0) {
      uVar6 = UiRes_GetLayoutData(0xa6);
      iVar5 = UiMgr_FindLayout(0x20);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
        pUVar1[iVar5].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar5].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
        pUVar1[iVar5].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar5].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar6;
      pUVar1[iVar5].layout.unk_318 = 1;
      uVar6 = UiRes_GetLayoutData(0xa8);
      iVar5 = UiMgr_FindLayout(0x20);
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
    }
    uVar6 = UiRes_GetLayoutData(0xa7);
    iVar5 = UiMgr_FindLayout(0x20);
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
    uVar6 = UiRes_GetLayoutData(0xa9);
    iVar5 = UiMgr_FindLayout(0x20);
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
    uVar6 = UiRes_GetLayoutData(0x3ec);
    iVar5 = UiMgr_FindLayout(0x20);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x3ed);
    iVar5 = UiMgr_FindLayout(0x20);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 1;
    uVar6 = UiRes_GetLayoutData(0x195);
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
    *(undefined4 *)&pMVar3->field_0x35c = uVar6;
    *(undefined4 *)&pMVar3->field_0x358 = 1;
    MenuWnd_DrawDialogText(0x20,0x32a200,4,0xffffffffffffffff);
    Menu_ClearSlot(0);
    iVar5 = *(int *)(param_1 + 0x34);
  }
  if ((*(int *)(param_1 + 0x38) != iVar5) && (*(int *)(param_1 + 0x38) = iVar5, bVar2)) {
    MenuWnd_SetHelpText(0);
  }
  if (bVar2) {
    iVar5 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar5].layout,0x37,8);
    if (lVar9 < 2) {
      MenuWnd_DrawFooter(0x183,0xffffffffffffffff,0);
    }
    else {
      MenuWnd_DrawFooter(0x188,0xffffffffffffffff,0);
    }
  }
  else {
    iVar5 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,0x37,8);
  }
  puVar14 = &g_MenuMgr->field_0x40;
  lVar9 = UiLayout_UpdateAnimById(0x20,0);
  lVar10 = UiLayout_UpdateAnimById(0x20,1);
  lVar11 = UiLayout_UpdateAnimById(0x20,2);
  lVar12 = UiLayout_UpdateAnimIfActive(puVar14,0);
  if (lVar12 == 0 && (lVar11 == 0 && (lVar9 == 0 && lVar10 == 0))) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      uVar8 = Profile_Get(0);
      lVar9 = Garage_FindCar(uVar8);
      MenuWnd_DrawCursor(lVar9 != 1);
    }
  }
  else {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    lVar9 = UiLayout_UpdateAnimById(0x20,3);
    if (lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (iVar4 < 0xd) {
    iVar5 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,0x39,8);
    iVar5 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,0x3c,8);
  }
  iVar5 = 0;
  puVar15 = &DAT_0032a210;
  do {
    if (iVar4 <= iVar5) {
      iVar7 = UiMgr_FindLayout(0x20);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,*puVar15,8);
    }
    iVar5 = iVar5 + 1;
    puVar15 = puVar15 + 1;
  } while (iVar5 < 0xc);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x20,*(undefined4 *)(&DAT_0032a240 + *(int *)(param_1 + 0x3c) * 4),0,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  puVar14 = &g_MenuMgr->field_0x40;
  uVar8 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x34),0);
  UiElem_SetPropInt(puVar14,0,0x16,uVar8);
  iVar5 = Profile_Get(0);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCarRecordB
                    (uVar8,*(undefined2 *)(iVar5 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar13 = Profile_Get(0);
  uVar13 = Profile_GetDay(uVar13);
  uVar8 = Garage_RepairCar(uVar8,uVar13);
  MenuWnd_DrawNumber(0x20,0x3e,uVar8);
  MenuWnd_DrawLabel(0x20,0x3f,0x3b,*(int *)(param_1 + 0x34) + 1,iVar4);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x20,0x3d,uVar8);
  MenuWnd_Update(param_1 + 0x40,0x20,6,5);
  if (bVar2) {
    MenuWnd_SetTitle(1,0x184);
  }
  else {
    MenuWnd_SetTitle(3,0x184);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar5 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,4);
  iVar5 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x13,8);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x13,8);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x13,8);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x13,8);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x13,8);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x002178d0  size 0x564
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_DemonstrationModel(int param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
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
  
  iVar7 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar7 != 0) {
    iVar7 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    uVar5 = UiRes_GetLayoutData(0xa3);
    UiLayout_PlayAnim(&pUVar2[iVar7].layout,uVar5);
    uVar3 = UiRes_GetLayoutData(0xa4);
    iVar7 = UiMgr_FindLayout(0x1f);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x31c = uVar3;
    pUVar2[iVar7].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0xa5);
    iVar7 = UiMgr_FindLayout(0x1f);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x330 == 0) {
      pUVar2[iVar7].layout.animState = 0;
    }
    else {
      pUVar2[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x330 == 0) {
      pUVar2[iVar7].layout.animState = 0;
    }
    else {
      pUVar2[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar3;
    pUVar2[iVar7].layout.animState = 1;
    Menu_ClearSlot(0);
    iVar7 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,0x12,8);
    iVar7 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,0x13,8);
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == -1) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
  }
  lVar4 = UiLayout_UpdateAnimById(0x1f,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    lVar4 = UiLayout_UpdateAnimById(0x1f,1);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x1f,*(undefined4 *)(*(int *)(param_1 + 0x50) * 4 + 0x36e8f8),1,0);
  }
  MenuWnd_DrawText(0x1f,0xd,0x171);
  MenuWnd_DrawText(0x1f,0xe,0x172);
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_1a0,uVar5,uVar6);
  puVar9 = auStack_18c;
  puVar8 = auStack_bc;
  iVar7 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar7 = iVar7 + -1;
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar7);
  puVar11 = auStack_150;
  puVar10 = auStack_80;
  iVar7 = 8;
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
    iVar7 = iVar7 + -1;
    uVar1 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar1;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar7);
  puVar11 = auStack_130;
  puVar10 = auStack_60;
  iVar7 = 0x15;
  do {
    iVar7 = iVar7 + -1;
    uVar1 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar1;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar7);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  uVar5 = Garage_RecalcCar(&uStack_d0,uVar5);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar5);
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetMoney(uVar5);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar5);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  puVar8 = &g_MenuMgr->field_0x40;
  uVar5 = MenuText_RivalCar(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),
                            0xfffffffffffffffe);
  UiElem_SetPropInt(puVar8,0,0x16,uVar5);
  MenuWnd_SetTitle(3,*(undefined4 *)(*(int *)(param_1 + 0x50) * 4 + 0x36e900));
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar7 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x1f);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
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
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  long lVar18;
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
  
  iVar12 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar12 == 0) {
    iVar12 = *(int *)(param_1 + 4);
  }
  else {
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == 2) {
      iVar12 = *(int *)(param_1 + 4);
    }
    else {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
      iVar12 = *(int *)(param_1 + 4);
    }
    if (iVar12 == 0) {
      MenuWnd_SetHelpText(0);
    }
    uVar4 = UiRes_GetLayoutData(0xa0);
    iVar12 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar12].layout.field_0x31c == 0) {
      pUVar2[iVar12].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar12].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar12].layout.field_0x31c == 0) {
      pUVar2[iVar12].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar12].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x31c = uVar4;
    pUVar2[iVar12].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xa1);
    iVar12 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar12].layout.field_0x330 == 0) {
      pUVar2[iVar12].layout.animState = 0;
    }
    else {
      pUVar2[iVar12].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar12].layout.field_0x330 == 0) {
      pUVar2[iVar12].layout.animState = 0;
    }
    else {
      pUVar2[iVar12].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x330 = uVar4;
    pUVar2[iVar12].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0xa2);
    iVar12 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar12].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar12].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar12].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar12].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar12].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar12].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0xa3);
    iVar12 = UiMgr_FindLayout(0x1e);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar12].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar12].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar12].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar12].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar12].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar12].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar12].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x195);
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
    *(undefined4 *)&pMVar3->field_0x35c = uVar4;
    *(undefined4 *)&pMVar3->field_0x358 = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 4) < 2) {
      iVar12 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar12].layout,0x12,8);
      iVar12 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar12].layout,0x13,8);
    }
    else {
      iVar12 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar12].layout,0x12,8);
      iVar12 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar12].layout,0x13,8);
    }
    MenuWnd_DrawDialogText(0x1e,0x36e8f0,2,1);
    iVar12 = *(int *)(param_1 + 4);
  }
  MenuWnd_DrawCursor(1 < iVar12);
  lVar18 = 2;
  if (*(int *)(param_1 + 4) == 0) {
    lVar18 = MenuWnd_DrawFooter(0x191,0xffffffffffffffff,0);
  }
  if (*(int *)(param_1 + 0x58) == 2) {
    lVar9 = UiLayout_UpdateAnimById(0x1e,1);
    if (lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    puVar13 = &g_MenuMgr->field_0x40;
    lVar9 = UiLayout_UpdateAnimById(0x1e,0);
    lVar6 = UiLayout_UpdateAnimById(0x1e,1);
    lVar7 = UiLayout_UpdateAnimById(0x1e,2);
    lVar8 = UiLayout_UpdateAnimIfActive(puVar13,0);
    if (lVar8 == 0 && (lVar7 == 0 && (lVar9 == 0 && lVar6 == 0))) {
      if (*(int *)(param_1 + 4) == 0) {
        if (lVar18 != 2) goto LAB_00217f40;
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      iVar12 = *(int *)(param_1 + 0x70);
      goto LAB_00217f44;
    }
  }
LAB_00217f40:
  iVar12 = *(int *)(param_1 + 0x70);
LAB_00217f44:
  if (iVar12 != 0) {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    if (*(int *)(param_1 + 4) == 0) {
      if (lVar18 == 2) {
        MenuWnd_RequestRedraw();
      }
      if ((lVar18 == 3) && (lVar18 = UiLayout_UpdateAnimById(0x1e), lVar18 == 0)) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
    else {
      lVar18 = UiLayout_UpdateAnimById(0x1e,3);
      if (lVar18 == 0) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
  }
  if ((*(int *)(param_1 + 4) != 0) && (*_g_MenuInput == 1)) {
    MenuWnd_SetItemState(0x1e,*(undefined4 *)(&DAT_0032a1c0 + *(int *)(param_1 + 8) * 4),0,0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar10 = Profile_Get(0);
    uVar10 = Garage_GetPartSlot(uVar10,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
    uVar11 = Profile_Get(0);
    uVar11 = Profile_GetDay(uVar11);
    CarRec_InstallPart(&uStack_1a0,uVar10,uVar11);
    puVar14 = auStack_18c;
    puVar13 = auStack_bc;
    iVar12 = 0x17;
    uStack_d0 = uStack_1a0;
    uStack_c0 = uStack_190;
    uStack_ce = uStack_19e;
    uStack_cc = uStack_19c;
    uStack_c8 = uStack_198;
    uStack_c4 = uStack_194;
    do {
      iVar12 = iVar12 + -1;
      *puVar13 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar13 = puVar13 + 1;
    } while (0 < iVar12);
    puVar16 = auStack_150;
    puVar15 = auStack_80;
    iVar12 = 8;
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
      iVar12 = iVar12 + -1;
      uVar1 = puVar16[1];
      *puVar15 = *puVar16;
      puVar15[1] = uVar1;
      puVar16 = puVar16 + 2;
      puVar15 = puVar15 + 2;
    } while (0 < iVar12);
    puVar16 = auStack_130;
    puVar15 = auStack_60;
    iVar12 = 0x15;
    do {
      iVar12 = iVar12 + -1;
      uVar1 = puVar16[1];
      *puVar15 = *puVar16;
      puVar15[1] = uVar1;
      puVar16 = puVar16 + 2;
      puVar15 = puVar15 + 2;
    } while (0 < iVar12);
    uStack_c = uStack_dc;
    uStack_8 = uStack_d8;
    uVar10 = Profile_Get(0);
    uVar10 = Profile_GetDayOfMonth(uVar10);
    uVar10 = Garage_RecalcCar(&uStack_d0,uVar10);
    MenuWnd_DrawNumber(0x1e,0x1f,uVar10);
    MenuWnd_DrawLabel(0x1e,0x20,0x3b,*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
  }
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetMoney(uVar10);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar10);
  if (*(int *)(param_1 + 4) == 0) {
    MenuWnd_DrawStatus(0xfffffffffffffffe,0xffffffffffffffff,0xffffffffffffffff,0);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe
                       ,0xffffffffffffffff,0);
    puVar13 = &g_MenuMgr->field_0x40;
    uVar10 = MenuText_RivalCar(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),
                               0xfffffffffffffffe);
    UiElem_SetPropInt(puVar13,0,0x16,uVar10);
  }
  MenuWnd_SetTitle(3,0x180);
  iVar12 = 0;
  puVar17 = &DAT_0032a1e0;
  do {
    if (*(int *)(param_1 + 4) <= iVar12) {
      iVar5 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,*puVar17,8);
    }
    iVar12 = iVar12 + 1;
    puVar17 = puVar17 + 1;
  } while (iVar12 < 6);
  if (*(int *)(param_1 + 4) == 0) {
    iVar12 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar12].layout,0x1a,8);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar12 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar12].layout);
  iVar12 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar12].layout);
  if (*(int *)(param_1 + 4) != 0) {
    UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  }
  return;
}

