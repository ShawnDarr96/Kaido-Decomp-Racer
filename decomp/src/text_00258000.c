// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00258000 - 0x0025c000
#include "ghidra_types.h"

// 0x00258370  size 0xb28
void ScrGarage_Draw_NoOwned(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  int *piVar20;
  
  uVar14 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  iVar11 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar11 != 0) {
    if (*(int *)(param_1 + 0x4c) == 3) {
      uVar10 = UiRes_GetLayoutData(0x167);
      iVar11 = UiMgr_FindLayout(0x51);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar11].layout.unk_310 = 0xffffffff;
      pUVar1[iVar11].layout.unk_31c = 0;
      pUVar1[iVar11].layout.unk_30c = 0;
      if (pUVar1[iVar11].layout.unk_31c == 0) {
        pUVar1[iVar11].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar11].layout.unk_318 = 1;
      }
      pUVar1[iVar11].layout.unk_30c = 0;
      if (pUVar1[iVar11].layout.unk_31c == 0) {
        pUVar1[iVar11].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar11].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x314 = 0;
      pUVar1[iVar11].layout.unk_31c = uVar10;
      pUVar1[iVar11].layout.unk_318 = 1;
      uVar12 = UiRes_GetLayoutData(0x169);
      iVar11 = UiMgr_FindLayout(0x51);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x338 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x344 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar11].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar11].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar11].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar11].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x33c = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x344 = uVar12;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x340 = 1;
    }
    iVar11 = *(int *)(param_1 + 0x48);
    if ((((iVar11 == 9) || (iVar11 == 8)) || (iVar11 == 2)) || (iVar11 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar12 = UiRes_GetLayoutData(0x168);
      iVar11 = UiMgr_FindLayout(0x51);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x330 == 0) {
        pUVar1[iVar11].layout.animState = 0;
      }
      else {
        pUVar1[iVar11].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x330 == 0) {
        pUVar1[iVar11].layout.animState = 0;
      }
      else {
        pUVar1[iVar11].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x330 = uVar12;
      pUVar1[iVar11].layout.animState = 1;
      uVar12 = UiRes_GetLayoutData(0x16a);
      iVar11 = UiMgr_FindLayout(0x51);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x34c = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x358 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar11].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar11].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar11].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar11].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x350 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x358 = uVar12;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x354 = 1;
      uVar10 = UiRes_GetLayoutData(0x196);
      iVar11 = UiMgr_FindLayout(100);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar11].layout.unk_310 = 0xffffffff;
      pUVar1[iVar11].layout.unk_31c = 0;
      pUVar1[iVar11].layout.unk_30c = 0;
      if (pUVar1[iVar11].layout.unk_31c == 0) {
        pUVar1[iVar11].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar11].layout.unk_318 = 1;
      }
      pUVar1[iVar11].layout.unk_30c = 0;
      if (pUVar1[iVar11].layout.unk_31c == 0) {
        pUVar1[iVar11].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar11].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x314 = 0;
      pUVar1[iVar11].layout.unk_31c = uVar10;
      pUVar1[iVar11].layout.unk_318 = 1;
      uVar12 = UiRes_GetLayoutData(0x197);
      iVar11 = UiMgr_FindLayout(100);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x330 == 0) {
        pUVar1[iVar11].layout.animState = 0;
      }
      else {
        pUVar1[iVar11].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x330 == 0) {
        pUVar1[iVar11].layout.animState = 0;
      }
      else {
        pUVar1[iVar11].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x330 = uVar12;
      pUVar1[iVar11].layout.animState = 1;
      uVar10 = UiRes_GetLayoutData(0x408);
      iVar11 = UiMgr_FindLayout(0x4e);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar11].layout.unk_310 = 0xffffffff;
      pUVar1[iVar11].layout.unk_31c = 0;
      pUVar1[iVar11].layout.unk_30c = 0;
      if (pUVar1[iVar11].layout.unk_31c == 0) {
        pUVar1[iVar11].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar11].layout.unk_318 = 1;
      }
      pUVar1[iVar11].layout.unk_30c = 0;
      if (pUVar1[iVar11].layout.unk_31c == 0) {
        pUVar1[iVar11].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar11].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x314 = 0;
      pUVar1[iVar11].layout.unk_31c = uVar10;
      pUVar1[iVar11].layout.unk_318 = 1;
      uVar12 = UiRes_GetLayoutData(0x409);
      iVar11 = UiMgr_FindLayout(0x4e);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x330 == 0) {
        pUVar1[iVar11].layout.animState = 0;
      }
      else {
        pUVar1[iVar11].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x320 = 0;
      if (*(int *)&pUVar1[iVar11].layout.field_0x330 == 0) {
        pUVar1[iVar11].layout.animState = 0;
      }
      else {
        pUVar1[iVar11].layout.animState = 1;
      }
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar1[iVar11].layout.field_0x330 = uVar12;
      pUVar1[iVar11].layout.animState = 1;
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x51,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x51,1);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x64,0);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x4e,0);
    if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar11 = *(int *)(param_1 + 0x50);
      if (((iVar11 == 9) || (iVar11 == 8)) || ((iVar11 == 2 || (iVar11 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x51,2);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x51,3);
        bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x64,1);
        bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x4e,1);
        if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x51,2);
        if (!bVar2) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
    }
    if (*g_MenuInput == 1) {
      MenuWnd_SetItemState
                (0x51,*(undefined4 *)(&DAT_0032cfb8 + *(int *)(param_1 + 0x10) * 0x10),1,0);
    }
  }
  lVar15 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 4));
  if (lVar15 == 1) {
    iVar11 = *(int *)(param_1 + 0x4c);
    if (((iVar11 == 7) || (iVar11 == 10)) || (iVar11 == 0xb)) {
      uVar12 = *(undefined4 *)(param_1 + 4);
    }
    else {
      if (iVar11 != 0x11) goto LAB_00258ccc;
      uVar12 = *(undefined4 *)(param_1 + 4);
    }
    uVar6 = maybe_CarModel_IsBossCar(uVar12,*(undefined4 *)(param_1 + 0x10));
    MenuWnd_DrawStatus(0xffffffffffffffff,0,uVar6,*(undefined4 *)(param_1 + 0x14));
  }
  else {
LAB_00258ccc:
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  uVar16 = Garage_ComputeCarStats(uVar14,0);
  MenuWnd_DrawNumber(0x4e,5,uVar16);
  uVar16 = Profile_Get(0);
  uVar16 = Profile_GetMoney(uVar16);
  MenuWnd_DrawNumber(0x4e,4,uVar16);
  uVar16 = Profile_Get(0);
  sVar7 = Profile_GetCurrentPartSlot(uVar16,0xf);
  uVar16 = Profile_Get(0);
  sVar8 = Profile_GetCurrentPartSlot(uVar16,0x10);
  iVar11 = UiMgr_FindLayout(0x51);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar11].layout,(long)DAT_0032d010,8,extraout_a3_lo);
  iVar11 = UiMgr_FindLayout(0x51);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar11].layout,(long)DAT_0032d014,8,extraout_a3_lo_00);
  iVar11 = 0;
  piVar20 = &DAT_0032cfc0;
  do {
    sVar9 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar11 + 1);
    if ((sVar7 != sVar9) &&
       (sVar9 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar11 + 1), sVar8 != sVar9))
    {
      iVar13 = UiMgr_FindLayout(0x51);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)*piVar20,8,extraout_a3_lo_01);
    }
    if (*(int *)(param_1 + 0x4c) != 3) {
      iVar13 = UiMgr_FindLayout(0x51);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)*piVar20,8,extraout_a3_lo_02);
    }
    if (*(int *)(param_1 + 0x40) + -2 < iVar11) {
      iVar13 = UiMgr_FindLayout(0x51);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)piVar20[1],8,extraout_a3_lo_03);
    }
    iVar11 = iVar11 + 1;
    piVar20 = piVar20 + 4;
  } while (iVar11 < 5);
  iVar11 = Profile_Get(0);
  uVar6 = *(undefined2 *)(iVar11 + (short)uVar14 * 2 + 0x1420);
  uVar14 = Profile_Get(0);
  uVar14 = Profile_GetCurrentPartSlot(uVar14,0xf);
  uVar14 = Msg_MakerInfo(uVar14);
  uVar16 = Profile_Get(0);
  uVar16 = Profile_GetCurrentPartSlot(uVar16,0x10);
  uVar16 = Msg_MakerInfo(uVar16);
  uVar17 = Profile_Get(0);
  uVar17 = Profile_GetCurrentPartSlot(uVar17,0xf);
  uVar17 = PartDb_GetInfo(uVar17);
  uVar17 = Msg_PartInfo(uVar17);
  uVar18 = Profile_Get(0);
  uVar18 = Profile_GetCurrentPartSlot(uVar18,0x10);
  uVar18 = PartDb_GetInfo(uVar18);
  uVar18 = Msg_PartInfo(uVar18);
  MenuWnd_DrawText(0x4e,6,0x2e9);
  MenuWnd_DrawLabel(0x4e,7,0x3f,uVar6);
  uVar19 = maybe_CarModel_GetClassC(*(undefined4 *)(param_1 + 4));
  uVar19 = Msg_PartInfo(uVar19);
  MenuWnd_DrawText(0x51,0x30,uVar19);
  MenuWnd_DrawTextId(0x51,0x2f,4,0x44);
  MenuWnd_DrawLabel(0x51,0x34,0x45,uVar17,uVar14);
  MenuWnd_DrawLabel(0x51,0x35,0x45,uVar18,uVar16);
  iVar11 = 1;
  if (1 < *(int *)(param_1 + 0x40)) {
    iVar13 = 0x32cfd0;
    do {
      uVar14 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar11);
      uVar14 = Msg_MakerInfo(uVar14);
      MenuWnd_DrawText(0x51,*(undefined4 *)(iVar13 + -4),uVar14);
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 0x10;
    } while (iVar11 < *(int *)(param_1 + 0x40));
  }
  iVar11 = UiMgr_FindLayout(100);
  pUVar1 = g_UiMgr->slots;
  uVar14 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  iVar13 = MsgId_ForGrade(uVar14);
  UiElem_SetPropInt(&pUVar1[iVar11].layout,5,0x16,iVar13);
  iVar11 = UiMgr_FindLayout(0x51);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar11].layout);
  iVar11 = UiMgr_FindLayout(100);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar11].layout);
  iVar11 = UiMgr_FindLayout(0x4e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar11].layout);
  return;
}

// 0x00258ea0  size 0xab4
void ScrGarage_Draw_NoOwned_8ea0(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  int *piVar17;
  undefined4 *puVar18;
  
  uVar13 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  uVar14 = Profile_Get(0);
  uVar14 = Profile_GetCurrentCar(uVar14);
  uVar14 = CarRec_GetName(uVar14);
  iVar8 = CarRec_GetOptionSlot(uVar14,uVar13);
  if (*(char *)(iVar8 + 2) == '\x1f') {
    iVar8 = 0;
    piVar17 = &DAT_0032cf40;
    do {
      iVar9 = UiMgr_FindLayout(0x57);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar9].layout,(long)*piVar17,0x16,0);
      iVar8 = iVar8 + 1;
      piVar17 = piVar17 + 4;
    } while (iVar8 < 8);
  }
  uVar13 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  uVar14 = Profile_Get(0);
  uVar15 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  uVar14 = Profile_GetCurrentPartSlot(uVar14,uVar15);
  iVar9 = PartDb_Get(uVar14);
  iVar8 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar8 != 0) {
    iVar8 = *(int *)(param_1 + 0x48);
    if ((((iVar8 == 9) || (iVar8 == 8)) || (iVar8 == 2)) || (iVar8 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar10 = UiRes_GetLayoutData(0x199);
      iVar8 = UiMgr_FindLayout(0x57);
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
      pUVar1[iVar8].layout.unk_31c = uVar10;
      pUVar1[iVar8].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0x19a);
      iVar8 = UiMgr_FindLayout(0x57);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar11;
      pUVar1[iVar8].layout.animState = 1;
      uVar11 = UiRes_GetLayoutData(0x19b);
      iVar8 = UiMgr_FindLayout(0x57);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = uVar11;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
      uVar11 = UiRes_GetLayoutData(0x19c);
      iVar8 = UiMgr_FindLayout(0x57);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar11;
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
      uVar10 = UiRes_GetLayoutData(0x196);
      iVar8 = UiMgr_FindLayout(100);
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
      pUVar1[iVar8].layout.unk_31c = uVar10;
      pUVar1[iVar8].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0x197);
      iVar8 = UiMgr_FindLayout(100);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar11;
      pUVar1[iVar8].layout.animState = 1;
      uVar10 = UiRes_GetLayoutData(0x15f);
      iVar8 = UiMgr_FindLayout(0x4e);
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
      pUVar1[iVar8].layout.unk_31c = uVar10;
      pUVar1[iVar8].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0x160);
      iVar8 = UiMgr_FindLayout(0x4e);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar11;
      pUVar1[iVar8].layout.animState = 1;
      if (0 < iVar9) {
        iVar8 = UiMgr_FindLayout(0x57);
        pUVar1 = g_UiMgr->slots;
        iVar12 = UiRes_GetLayoutData(0x118);
        UiLayout_IsAnimDone(&pUVar1[iVar8].layout,9,*(undefined4 *)(&DAT_0032cf30 + iVar9 * 0x10),
                            iVar12,1);
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x57,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x57,1);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x64,0);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x4e,0);
    if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*g_MenuInput == 1) {
      MenuWnd_SetItemState
                (0x57,*(undefined4 *)(&DAT_0032cf38 + *(int *)(param_1 + 0x10) * 0x10),1,0);
      iVar8 = *(int *)(param_1 + 0x60);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x60);
    }
    if (iVar8 != 0) {
      iVar8 = *(int *)(param_1 + 0x50);
      if (((iVar8 == 9) || (iVar8 == 8)) || ((iVar8 == 2 || (iVar8 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x57,2);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x57,3);
        bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x64,1);
        bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x4e,1);
        if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  iVar8 = 0;
  piVar17 = &DAT_0032cf40;
  do {
    iVar12 = UiMgr_FindLayout(0x57);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar12].layout,(long)*piVar17,8,extraout_a3_lo);
    if (*(int *)(param_1 + 0x40) + -2 < iVar8) {
      iVar12 = UiMgr_FindLayout(0x57);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar12].layout,(long)piVar17[1],8,extraout_a3_lo_00);
    }
    iVar8 = iVar8 + 1;
    piVar17 = piVar17 + 4;
  } while (iVar8 < 8);
  if ((0 < iVar9) &&
     (lVar16 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 4)), lVar16 == 1)) {
    if (*(int *)(param_1 + 4) == 0xd) {
      uVar14 = Profile_Get(0);
      uVar14 = Profile_GetCurrentPartSlot(uVar14,7);
      sVar6 = PartDb_GetInfo(uVar14);
      if (sVar6 != 0x67) goto LAB_00259794;
      iVar8 = *(int *)(param_1 + 4);
    }
    else {
      iVar8 = *(int *)(param_1 + 4);
    }
    if (iVar8 == 0xe) {
      uVar14 = Profile_Get(0);
      uVar14 = Profile_GetCurrentPartSlot(uVar14,7);
      sVar6 = PartDb_GetInfo(uVar14);
      if (sVar6 != 0x6b) goto LAB_00259794;
      iVar8 = *(int *)(param_1 + 4);
    }
    else {
      iVar8 = *(int *)(param_1 + 4);
    }
    if (iVar8 == 0xf) {
      uVar14 = Profile_Get(0);
      uVar14 = Profile_GetCurrentPartSlot(uVar14,7);
      sVar6 = PartDb_GetInfo(uVar14);
      if (sVar6 != 0x6e) goto LAB_00259794;
    }
    if (iVar9 < *(int *)(param_1 + 0x40)) {
      iVar8 = UiMgr_FindLayout(0x57);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*(int *)(&DAT_0032cf30 + iVar9 * 0x10)
                          ,8,(char)iVar8 * -0xc);
    }
  }
LAB_00259794:
  uVar14 = Garage_ComputeCarStats(uVar13,0);
  MenuWnd_DrawNumber(0x4e,5,uVar14);
  uVar14 = Profile_Get(0);
  uVar14 = Profile_GetMoney(uVar14);
  MenuWnd_DrawNumber(0x4e,4,uVar14);
  iVar8 = Profile_Get(0);
  uVar7 = *(undefined2 *)(iVar8 + (short)uVar13 * 2 + 0x1420);
  MenuWnd_DrawText(0x4e,6,0x2e9);
  MenuWnd_DrawLabel(0x4e,7,0x3f,uVar7);
  uVar13 = maybe_CarModel_GetClassC(*(undefined4 *)(param_1 + 4));
  uVar13 = Msg_PartInfo(uVar13);
  MenuWnd_DrawText(0x57,0x42,uVar13);
  iVar8 = 1;
  if (1 < *(int *)(param_1 + 0x40)) {
    puVar18 = &DAT_0032cf50;
    do {
      uVar13 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar8);
      uVar13 = Msg_MakerInfo(uVar13);
      MenuWnd_DrawText(0x57,puVar18[-1],uVar13);
      iVar8 = iVar8 + 1;
      puVar18 = puVar18 + 4;
    } while (iVar8 < *(int *)(param_1 + 0x40));
  }
  lVar16 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 4));
  if (lVar16 == 1) {
    uVar7 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    MenuWnd_DrawStatus(0xffffffffffffffff,0,uVar7,0);
  }
  else {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x57,9);
  iVar8 = UiMgr_FindLayout(0x57);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x4e);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x00259960  size 0xe00
void ScrGarage_Draw_FullAero(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
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
  
  iVar6 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x48);
    if ((((iVar6 == 9) || (iVar6 == 8)) || (iVar6 == 2)) || (iVar6 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar5 = UiRes_GetLayoutData(0x429);
      iVar6 = UiMgr_FindLayout(0x5a);
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
      uVar7 = UiRes_GetLayoutData(0x42a);
      iVar6 = UiMgr_FindLayout(0x5a);
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
      uVar5 = UiRes_GetLayoutData(0x12e);
      iVar6 = UiMgr_FindLayout(99);
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
      uVar7 = UiRes_GetLayoutData(0x12f);
      iVar6 = UiMgr_FindLayout(99);
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
      uVar5 = UiRes_GetLayoutData(0x173);
      iVar6 = UiMgr_FindLayout(0x55);
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
      uVar7 = UiRes_GetLayoutData(0x174);
      iVar6 = UiMgr_FindLayout(0x55);
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
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x63,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x5a,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x55,0);
    if (!bVar4 && (!bVar2 && !bVar3)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar6 = *(int *)(param_1 + 0x50);
      if (((iVar6 == 9) || (iVar6 == 8)) || ((iVar6 == 2 || (iVar6 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x63,1);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x5a,1);
        bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x55,1);
        if (!bVar4 && (!bVar2 && !bVar3)) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    if (*g_MenuInput == 1) {
      MenuWnd_SetItemState(99,*(undefined4 *)(*(int *)(param_1 + 0x10) * 4 + 0x36ec48),1,0);
    }
  }
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x31,8,extraout_a3_lo);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x32,8,extraout_a3_lo_00);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x33,8,extraout_a3_lo_01);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x34,8,extraout_a3_lo_02);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x35,8,extraout_a3_lo_03);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x36,8,extraout_a3_lo_04);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x37,8,extraout_a3_lo_05);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x38,8,extraout_a3_lo_06);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x29,8,extraout_a3_lo_07);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x2a,8,extraout_a3_lo_08);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x2b,8,extraout_a3_lo_09);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x2c,8,extraout_a3_lo_10);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x2d,8,extraout_a3_lo_11);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x2e,8,extraout_a3_lo_12);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x2f,8,extraout_a3_lo_13);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x3a,8,extraout_a3_lo_14);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x3b,8,extraout_a3_lo_15);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x3c,8,extraout_a3_lo_16);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x3d,8,extraout_a3_lo_17);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x3e,8,extraout_a3_lo_18);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x3f,8,extraout_a3_lo_19);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x40,8,extraout_a3_lo_20);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x42,8,extraout_a3_lo_21);
  iVar6 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0x43,8,extraout_a3_lo_22);
  MenuWnd_DrawText(99,0x39,0x98f);
  MenuWnd_DrawText(99,0x44,0x98f);
  uVar8 = Garage_ComputeCarStats(0xffffffffffffffff,1);
  MenuWnd_DrawNumber(0x55,3,uVar8);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x55,4,uVar8);
  iVar6 = MenuText_CarModelId(0xffffffffffffffff,0);
  iVar6 = CarDb_GetVariantCount(iVar6 + 1);
  if (iVar6 - 3U < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar6 - 3U) {
    case 0:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,0xe);
      break;
    case 1:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,10);
      break;
    case 2:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,1);
      break;
    case 3:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,4);
      break;
    case 4:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,3);
      break;
    case 5:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,2);
      break;
    case 6:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,6);
      break;
    case 7:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,5);
      break;
    case 8:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,0xd);
      break;
    case 9:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,0xc);
      break;
    case 10:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,7);
      break;
    case 0xb:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,0xf);
      break;
    case 0xc:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,8);
      break;
    case 0xd:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,9);
      break;
    case 0xe:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,0xb);
      break;
    case 0xf:
      iVar6 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,1,0x16,0x10);
    }
  }
  iVar6 = MenuText_CarModelId(0xffffffffffffffff,0);
  lVar9 = CarDb_GetVariantCount(iVar6 + 1);
  if (lVar9 != 2) {
    iVar6 = UiMgr_FindLayout(0x5a);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  }
  iVar6 = UiMgr_FindLayout(99);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x0025a760  size 0x1dc
void maybe_PartShop_Draw(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  iVar2 = piVar6[1];
  if (iVar2 == 0x19) {
    iVar2 = piVar6[2];
    if ((iVar2 == 3) || (iVar2 == 2)) {
      ScrGarage_Draw_MetalColour(param_1);
    }
    else if (iVar2 == 1) {
      MenuScr_Draw_MazioraColour();
    }
    else if (iVar2 == 0) {
      ScrGarage_Draw_DealerColour();
    }
  }
  else if (iVar2 == 0x1a) {
    ScrGarage_Draw_FullAero();
  }
  else if (iVar2 == 0x21) {
    maybe_PartShop_DrawDetails();
  }
  else if (((iVar2 < 4) || (7 < iVar2)) ||
          (lVar4 = maybe_MenuText_CurrentCarSpec(iVar2), lVar4 != 1)) {
    if ((*piVar6 == 5) && (lVar4 = maybe_MenuText_CurrentCarSpec(piVar6[1]), lVar4 == 1)) {
      ScrGarage_Draw_NoOwned_8ea0(param_1);
    }
    else if (*piVar6 == 3) {
      ScrGarage_Draw_NoOwned(param_1);
    }
    else {
      ScrGarage_Draw_NoOwned_8ea0(param_1);
      iVar2 = UiMgr_FindLayout(100);
      pUVar1 = g_UiMgr->slots;
      uVar5 = maybe_CarModel_GetClassA(piVar6[1],0xffffffffffffffff);
      iVar3 = MsgId_ForGrade(uVar5);
      UiElem_SetPropInt(&pUVar1[iVar2].layout,5,0x16,iVar3);
      iVar2 = UiMgr_FindLayout(100);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
    }
  }
  else {
    ScrGarage_Draw_NoOwned_8ea0(param_1);
  }
  return;
}

// 0x0025a940  size 0x280
void ScrCareer_Draw_Power(int param_1,long param_2)

{
  int iVar1;
  
  MenuWnd_DrawText(0x5e,0x26,0x9bc);
  MenuWnd_DrawText(0x5e,0x27,0x9bd);
  MenuWnd_DrawText(0x5e,0x28,0x9be);
  MenuWnd_DrawText(0x5e,0x29,0x9bf);
  MenuWnd_DrawText(0x5e,0x2a,0x9c0);
  MenuWnd_DrawText(0x5e,0x2b,0x9c1);
  if (param_1 == 5) {
    if (param_2 == 0) {
      MenuWnd_DrawLabel(0x5e,0x1e,0x42,0x98d,0x991,0x992,0x993,0x994);
    }
    else {
      MenuWnd_DrawLabel(0x5e,0x1e,0x42,0x98d,0x98e,0x98f,0x991,0x992);
    }
  }
  else if (param_1 == 3) {
    MenuWnd_DrawLabel(0x5e,0x1e,0x42,0x99e,0x99f,0x9a0,0x9a1);
  }
  else if (param_1 == 2) {
    MenuWnd_DrawLabel(0x5e,0x1e,0x42,0x98a,0x98b,0x41,0x41,0x41);
  }
  else if (param_1 == 1) {
    if (param_2 == 0) {
      MenuWnd_DrawLabel(0x5e,0x1e,0x42,0x985,0x986,0x987,0x988,0x989);
    }
    else {
      MenuWnd_DrawLabel(0x5e,0x1e,0x42,0x985,0x986,0x9a2,0x9a3,0x9a4);
    }
  }
  else if (param_1 == 0) {
    iVar1 = maybe_MenuText_CarSpecGrade(0xffffffffffffffff,0);
    if (param_2 != 0) {
      iVar1 = 4;
    }
    MenuWnd_DrawLabel(0x5e,0x1e,0x42,*(undefined4 *)(&DAT_0032cd70 + iVar1 * 4),
                      (&DAT_0032cd90)[iVar1],0x982,0x983,0x984);
  }
  return;
}

// 0x0025abc0  size 0xc4
/* state of MenuPage29; on-screen text/callee hint "CanEquipThis" (was ScrCanEquipThis_Exit) */

void maybe_PageBodyShop_State17_CanEquipThis(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x2d6,0xffffffffffffffff,0);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025ac90  size 0x128
void ScrRace_Draw_ThisCarPart(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetItemVisible(0);
    if (*(int *)(iVar3 + 4) == 0x19) {
      MenuWnd_SetHelpText(0);
      iVar2 = *(int *)(iVar3 + 4);
      goto LAB_0025acec;
    }
    MenuWnd_SetHelpText(2);
  }
  iVar2 = *(int *)(iVar3 + 4);
LAB_0025acec:
  if (iVar2 == 0x19) {
    lVar1 = MenuWnd_DrawFooter(0x2ec,0xffffffffffffffff,0);
  }
  else {
    lVar1 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x24),0x36ec40);
  }
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar1 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar1 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar1 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if (*(int *)(iVar3 + 4) != 0x19) {
    MenuWnd_DrawLabel(5,0x1c,0x2c5);
  }
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025adc0  size 0xd4
void ScrRace_Draw_CanEquipThis(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x24),0x36ec38);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawLabel(5,0x1c,0x2c1);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025aea0  size 0xd4
void ScrRace_Draw_ThisCarPart_aea0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x24),0x36ec30);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawLabel(5,0x1c,0x2c4);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025af80  size 0xc4
/* state of MenuPage29; on-screen text/callee hint "ThisCarPart" (was ScrThisCarPart_Update) */

void maybe_PageBodyShop_State13_ThisCarPart(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x2c0,0xffffffffffffffff,0);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025b050  size 0xc4
/* state of MenuPage29; on-screen text/callee hint "ThisCarPart" (was ScrThisCarPart_Enter) */

void maybe_PageBodyShop_State12_ThisCarPart(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x5c);
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x2bf,0xffffffffffffffff,0);
  if (*(int *)(iVar3 + 0x60) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025b120  size 0x2cc
void ScrGarage_Draw_YouNeedTo(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  iVar3 = *(int *)(iVar8 + 0x5c);
  *(undefined4 *)(iVar8 + 0x5c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x16d);
    iVar3 = UiMgr_FindLayout(0x53);
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
    uVar5 = UiRes_GetLayoutData(0x16e);
    iVar3 = UiMgr_FindLayout(0x53);
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
    iVar3 = UiMgr_FindLayout(0x53);
    pUVar1 = g_UiMgr->slots;
    iVar6 = UiRes_GetLayoutData(0x117);
    UiLayout_IsAnimDone(&pUVar1[iVar3].layout,2,0x18,iVar6,1);
    Menu_ClearSlot(0);
    MenuWnd_SetItemVisible(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x53,0);
  if (!bVar2) {
    *(undefined4 *)(iVar8 + 0x58) = 0;
  }
  bVar2 = !bVar2;
  if (*(int *)(iVar8 + 0x60) != 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x53,1);
    if (!bVar2) {
      *(undefined4 *)(iVar8 + 0x60) = 0;
    }
    bVar2 = false;
  }
  if (bVar2) {
    UiLayout_UpdateAnimById((UiLayout *)0x53,2);
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x53,*(undefined4 *)(*(int *)(iVar8 + 0x24) * 4 + 0x36ec28),1,0);
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  uVar7 = maybe_CarModel_IsBossCar(*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 0x10));
  iVar3 = Garage_ComputeCarStats(uVar7,0);
  MenuWnd_DrawLabel(0x53,0x1f,0x2d7);
  MenuWnd_DrawText(0x53,0x1e,1);
  MenuWnd_DrawText(0x53,0x20,2);
  MenuWnd_DrawNumber(0x53,0x1d,iVar3 << 1);
  iVar3 = UiMgr_FindLayout(0x53);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025b3f0  size 0x3c
/* state of MenuPage29; on-screen text/callee hint "BodyColour" (was ScrBodyColour_Update) */

void maybe_PageBodyShop_State10_BodyColour(int *param_1)

{
  if (*param_1 == 3) {
    ScrRace_Draw_Front();
  }
  else {
    ScrGarage_Draw_Front();
  }
  return;
}

// 0x0025b430  size 0x3e0
void ScrGarage_Draw_Front(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  iVar4 = *(int *)(iVar8 + 0x5c);
  *(undefined4 *)(iVar8 + 0x5c) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x13c);
    iVar4 = UiMgr_FindLayout(0x67);
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
    pUVar1[iVar4].layout.unk_31c = uVar5;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x13d);
    iVar4 = UiMgr_FindLayout(0x67);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar6;
    pUVar1[iVar4].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x13e);
    iVar4 = UiMgr_FindLayout(0x67);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x13f);
    iVar4 = UiMgr_FindLayout(0x67);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    MenuWnd_SetItemVisible(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x67,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x67,1);
  if (!bVar2 && !bVar3) {
    *(undefined4 *)(iVar8 + 0x58) = 0;
  }
  if (*(int *)(iVar8 + 0x60) != 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x67,2);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x67,3);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(iVar8 + 0x60) = 0;
    }
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x67,*(undefined4 *)(&DAT_0032cf30 + *(int *)(iVar8 + 0x14) * 4),1,0);
  }
  MenuWnd_DrawText(0x67,0x1b,0x2f);
  MenuWnd_DrawText(0x67,0x1c,0x30);
  MenuWnd_DrawText(0x67,0x1d,0x31);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetCurrentPartSlot(uVar7,0xd);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x67,0x14,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetCurrentPartSlot(uVar7,0xe);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x67,0x15,uVar7);
  MenuWnd_DrawText(0x67,0x17,0x9c0);
  iVar4 = UiMgr_FindLayout(0x67);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_SetTitle(3,0x2d5);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025b810  size 0x240
void ScrRace_Draw_Front(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0x5c);
  *(undefined4 *)(iVar6 + 0x5c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x16b);
    iVar3 = UiMgr_FindLayout(0x52);
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
    uVar5 = UiRes_GetLayoutData(0x16c);
    iVar3 = UiMgr_FindLayout(0x52);
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
    Menu_ClearSlot(0);
    MenuWnd_SetItemVisible(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x52,0);
  if (!bVar2) {
    *(undefined4 *)(iVar6 + 0x58) = 0;
  }
  if ((*(int *)(iVar6 + 0x60) != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x52,1), !bVar2)
     ) {
    *(undefined4 *)(iVar6 + 0x60) = 0;
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x52,*(undefined4 *)(&DAT_0032cf20 + *(int *)(iVar6 + 0x14) * 4),1,0);
  }
  MenuWnd_DrawText(0x52,0x12,0x2f);
  MenuWnd_DrawText(0x52,0x13,0x30);
  MenuWnd_DrawText(0x52,0x14,0x31);
  iVar3 = UiMgr_FindLayout(0x52);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  MenuWnd_SetTitle(3,0x2d5);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025ba50  size 0x330
void ScrGarage_Draw_BodyColour(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte extraout_a3_lo;
  int *piVar8;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar3 != 0) {
    uVar5 = UiRes_GetLayoutData(0x15d);
    iVar3 = UiMgr_FindLayout(0x4d);
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
    uVar6 = UiRes_GetLayoutData(0x15e);
    iVar3 = UiMgr_FindLayout(0x4d);
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
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x4d,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x4d,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x4d,*(undefined4 *)(&DAT_0032cf10 + *(int *)(param_1 + 8) * 4),1,0);
  }
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetCurrentCar(uVar7);
  CarRec_GetModelId(uVar7);
  MenuWnd_DrawText(0x4c,0x33,0x98e);
  MenuWnd_DrawText(0x4c,0x39,0x9b2);
  MenuWnd_DrawText(0x4d,0x1d,0x2e2);
  uVar7 = 0;
  iVar3 = MenuText_CarFullName(0xffffffffffffffff,0);
  if (iVar3 - 0xcU < 2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x4d,0x1e,uVar7,0x2e3);
  MenuWnd_DrawTextId(0x4d,0x1f,uVar7,0x2e4);
  MenuWnd_DrawTextId(0x4d,0x20,uVar7,0x2e5);
  MenuWnd_DrawText(0x4c,0x37,0x9c1);
  iVar3 = 0;
  piVar8 = &DAT_0032cdb0;
  do {
    iVar4 = UiMgr_FindLayout(0x4d);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar8,8,extraout_a3_lo);
    iVar3 = iVar3 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar3 < 4);
  iVar3 = UiMgr_FindLayout(0x4c);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x4d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  MenuWnd_SetTitle(3,0x2e1);
  return;
}

// 0x0025bd80  size 0x84c
/* state of MenuPage29; on-screen text/callee hint "ColourSchemeChanged" (was
   ScrColourSchemeChanged_Exit) */

void maybe_PageBodyShop_State8_ColourSchemeChanged(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  undefined4 *puVar9;
  int iVar10;
  
  iVar5 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar5 != 0) {
    uVar6 = UiRes_GetLayoutData(0x261);
    iVar5 = UiMgr_FindLayout(0x58);
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
    uVar7 = UiRes_GetLayoutData(0x263);
    iVar5 = UiMgr_FindLayout(0x58);
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
    uVar7 = UiRes_GetLayoutData(0x264);
    iVar5 = UiMgr_FindLayout(0x58);
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
    uVar7 = UiRes_GetLayoutData(0x262);
    iVar5 = UiMgr_FindLayout(0x58);
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
    uVar7 = UiRes_GetLayoutData(0x265);
    iVar5 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    uVar7 = UiRes_GetLayoutData(0x266);
    iVar5 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    uVar7 = UiRes_GetLayoutData(0x267);
    iVar5 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x394 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 1;
    uVar7 = UiRes_GetLayoutData(0x268);
    iVar5 = UiMgr_FindLayout(0x58);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a8 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 1;
    uVar7 = UiRes_GetLayoutData(0x269);
    iVar5 = UiMgr_FindLayout(0x58);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3bc = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b8 = 1;
    do {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x58,8);
    } while (bVar2);
    uVar7 = UiRes_GetLayoutData(0x26a);
    iVar5 = UiMgr_FindLayout(0x58);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3c8 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3d0 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3cc = 1;
    MenuWnd_DrawDialogText(0x58,0x36ec20,2,0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x58,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x58,2);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x58,3);
  if (!bVar4 && (!bVar2 && !bVar3)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    MenuWnd_DrawCursor(1);
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x58,1);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x58,4);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x58,5);
    if (!bVar4 && (!bVar2 && !bVar3)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x58,*(undefined4 *)(&DAT_0032cea0 + *(int *)(param_1 + 0x3c) * 4),1,0);
  }
  iVar5 = UiMgr_FindLayout(0x58);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0x38,0x16,
                    *(int *)(&DAT_0032cec0 + *(int *)(param_1 + 0x34) * 4));
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x58,0x37,uVar8);
  iVar5 = 0;
  iVar10 = 0;
  puVar9 = &DAT_0032cee0;
  do {
    if (iVar10 == 5) {
      iVar5 = -1;
    }
    if (iVar5 == -1) break;
    uVar8 = MsgId_ForMenuTitle(iVar5 + 1U & 0xff);
    MenuWnd_DrawText(0x58,*puVar9,uVar8);
    iVar5 = (iVar5 + 1) % 5;
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar10 < 6);
  MenuWnd_SetTitle(3,0x2d8);
  iVar5 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x4b,8,extraout_a3_lo);
  iVar5 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x4c,8,extraout_a3_lo_00);
  iVar5 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3c,8,extraout_a3_lo_01);
  iVar5 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3b,8,extraout_a3_lo_02);
  iVar5 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3a,8,extraout_a3_lo_03);
  iVar5 = UiMgr_FindLayout(0x58);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

