// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00258000 - 0x0025c000
#include "ghidra_types.h"

// 0x00258370  size 0xb28
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_NoOwned(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  
  uVar10 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  iVar8 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar8 != 0) {
    if (*(int *)(param_1 + 0x4c) == 3) {
      uVar7 = UiRes_GetLayoutData(0x167);
      iVar8 = UiMgr_FindLayout(0x51);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x31c = uVar7;
      pUVar1[iVar8].layout.unk_318 = 1;
      uVar7 = UiRes_GetLayoutData(0x169);
      iVar8 = UiMgr_FindLayout(0x51);
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
    }
    iVar8 = *(int *)(param_1 + 0x48);
    if ((((iVar8 == 9) || (iVar8 == 8)) || (iVar8 == 2)) || (iVar8 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar7 = UiRes_GetLayoutData(0x168);
      iVar8 = UiMgr_FindLayout(0x51);
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
      uVar7 = UiRes_GetLayoutData(0x16a);
      iVar8 = UiMgr_FindLayout(0x51);
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
      uVar7 = UiRes_GetLayoutData(0x196);
      iVar8 = UiMgr_FindLayout(100);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x31c = uVar7;
      pUVar1[iVar8].layout.unk_318 = 1;
      uVar7 = UiRes_GetLayoutData(0x197);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar7;
      pUVar1[iVar8].layout.animState = 1;
      uVar7 = UiRes_GetLayoutData(0x408);
      iVar8 = UiMgr_FindLayout(0x4e);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x31c = uVar7;
      pUVar1[iVar8].layout.unk_318 = 1;
      uVar7 = UiRes_GetLayoutData(0x409);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar7;
      pUVar1[iVar8].layout.animState = 1;
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar11 = UiLayout_UpdateAnimById(0x51,0);
    lVar12 = UiLayout_UpdateAnimById(0x51,1);
    lVar13 = UiLayout_UpdateAnimById(100,0);
    lVar14 = UiLayout_UpdateAnimById(0x4e,0);
    if (lVar14 == 0 && (lVar13 == 0 && (lVar11 == 0 && lVar12 == 0))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar8 = *(int *)(param_1 + 0x50);
      if (((iVar8 == 9) || (iVar8 == 8)) || ((iVar8 == 2 || (iVar8 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        lVar11 = UiLayout_UpdateAnimById(0x51,2);
        lVar12 = UiLayout_UpdateAnimById(0x51,3);
        lVar13 = UiLayout_UpdateAnimById(100,1);
        lVar14 = UiLayout_UpdateAnimById(0x4e,1);
        if (lVar14 == 0 && (lVar13 == 0 && (lVar11 == 0 && lVar12 == 0))) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        lVar11 = UiLayout_UpdateAnimById(0x51,2);
        if (lVar11 == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
    }
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState
                (0x51,*(undefined4 *)(&DAT_0032cfb8 + *(int *)(param_1 + 0x10) * 0x10),1,0);
    }
  }
  lVar11 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 4));
  if (lVar11 == 1) {
    iVar8 = *(int *)(param_1 + 0x4c);
    if (((iVar8 == 7) || (iVar8 == 10)) || (iVar8 == 0xb)) {
      uVar7 = *(undefined4 *)(param_1 + 4);
    }
    else {
      if (iVar8 != 0x11) goto LAB_00258ccc;
      uVar7 = *(undefined4 *)(param_1 + 4);
    }
    uVar3 = maybe_CarModel_IsBossCar(uVar7,*(undefined4 *)(param_1 + 0x10));
    MenuWnd_DrawStatus(0xffffffffffffffff,0,uVar3,*(undefined4 *)(param_1 + 0x14));
  }
  else {
LAB_00258ccc:
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  uVar15 = Garage_ComputeCarStats(uVar10,0);
  MenuWnd_DrawNumber(0x4e,5,uVar15);
  uVar15 = Profile_Get(0);
  uVar15 = Profile_GetMoney(uVar15);
  MenuWnd_DrawNumber(0x4e,4,uVar15);
  uVar15 = Profile_Get(0);
  sVar4 = Profile_GetCurrentPartSlot(uVar15,0xf);
  uVar15 = Profile_Get(0);
  sVar5 = Profile_GetCurrentPartSlot(uVar15,0x10);
  iVar8 = UiMgr_FindLayout(0x51);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,DAT_0032d010,8);
  iVar8 = UiMgr_FindLayout(0x51);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,DAT_0032d014,8);
  iVar8 = 0;
  puVar19 = &DAT_0032cfc0;
  do {
    sVar6 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar8 + 1);
    if ((sVar4 != sVar6) &&
       (sVar6 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar8 + 1), sVar5 != sVar6)) {
      iVar9 = UiMgr_FindLayout(0x51);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar9].layout,*puVar19,8);
    }
    if (*(int *)(param_1 + 0x4c) != 3) {
      iVar9 = UiMgr_FindLayout(0x51);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar9].layout,*puVar19,8);
    }
    if (*(int *)(param_1 + 0x40) + -2 < iVar8) {
      iVar9 = UiMgr_FindLayout(0x51);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar9].layout,puVar19[1],8);
    }
    iVar8 = iVar8 + 1;
    puVar19 = puVar19 + 4;
  } while (iVar8 < 5);
  iVar8 = Profile_Get(0);
  uVar3 = *(undefined2 *)(iVar8 + (short)uVar10 * 2 + 0x1420);
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetCurrentPartSlot(uVar10,0xf);
  uVar10 = Msg_MakerInfo(uVar10);
  uVar15 = Profile_Get(0);
  uVar15 = Profile_GetCurrentPartSlot(uVar15,0x10);
  uVar15 = Msg_MakerInfo(uVar15);
  uVar16 = Profile_Get(0);
  uVar16 = Profile_GetCurrentPartSlot(uVar16,0xf);
  uVar16 = PartDb_GetInfo(uVar16);
  uVar16 = Msg_PartInfo(uVar16);
  uVar17 = Profile_Get(0);
  uVar17 = Profile_GetCurrentPartSlot(uVar17,0x10);
  uVar17 = PartDb_GetInfo(uVar17);
  uVar17 = Msg_PartInfo(uVar17);
  MenuWnd_DrawText(0x4e,6,0x2e9);
  MenuWnd_DrawLabel(0x4e,7,0x3f,uVar3);
  uVar18 = maybe_CarModel_GetClassC(*(undefined4 *)(param_1 + 4));
  uVar18 = Msg_PartInfo(uVar18);
  MenuWnd_DrawText(0x51,0x30,uVar18);
  MenuWnd_DrawTextId(0x51,0x2f,4,0x44);
  MenuWnd_DrawLabel(0x51,0x34,0x45,uVar16,uVar10);
  MenuWnd_DrawLabel(0x51,0x35,0x45,uVar17,uVar15);
  iVar8 = 1;
  if (1 < *(int *)(param_1 + 0x40)) {
    iVar9 = 0x32cfd0;
    do {
      uVar10 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar8);
      uVar10 = Msg_MakerInfo(uVar10);
      MenuWnd_DrawText(0x51,*(undefined4 *)(iVar9 + -4),uVar10);
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar8 < *(int *)(param_1 + 0x40));
  }
  iVar8 = UiMgr_FindLayout(100);
  pUVar1 = g_UiMgr->slots;
  uVar10 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  uVar10 = MsgId_ForGrade(uVar10);
  UiElem_SetPropInt(&pUVar1[iVar8].layout,5,0x16,uVar10);
  iVar8 = UiMgr_FindLayout(0x51);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(100);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x4e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x00258ea0  size 0xab4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_NoOwned_8ea0(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  
  uVar9 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetCurrentCar(uVar10);
  uVar10 = CarRec_GetName(uVar10);
  iVar5 = CarRec_GetOptionSlot(uVar10,uVar9);
  if (*(char *)(iVar5 + 2) == '\x1f') {
    iVar5 = 0;
    puVar16 = &DAT_0032cf40;
    do {
      iVar6 = UiMgr_FindLayout(0x57);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,*puVar16,0x16,0);
      iVar5 = iVar5 + 1;
      puVar16 = puVar16 + 4;
    } while (iVar5 < 8);
  }
  uVar9 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  uVar10 = Profile_Get(0);
  uVar11 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 4),0xffffffffffffffff);
  uVar10 = Profile_GetCurrentPartSlot(uVar10,uVar11);
  iVar6 = PartDb_Get(uVar10);
  iVar5 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x48);
    if ((((iVar5 == 9) || (iVar5 == 8)) || (iVar5 == 2)) || (iVar5 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar8 = UiRes_GetLayoutData(0x199);
      iVar5 = UiMgr_FindLayout(0x57);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar8;
      pUVar1[iVar5].layout.unk_318 = 1;
      uVar8 = UiRes_GetLayoutData(0x19a);
      iVar5 = UiMgr_FindLayout(0x57);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar8;
      pUVar1[iVar5].layout.animState = 1;
      uVar8 = UiRes_GetLayoutData(0x19b);
      iVar5 = UiMgr_FindLayout(0x57);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar8;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
      uVar8 = UiRes_GetLayoutData(0x19c);
      iVar5 = UiMgr_FindLayout(0x57);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = uVar8;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
      uVar8 = UiRes_GetLayoutData(0x196);
      iVar5 = UiMgr_FindLayout(100);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar8;
      pUVar1[iVar5].layout.unk_318 = 1;
      uVar8 = UiRes_GetLayoutData(0x197);
      iVar5 = UiMgr_FindLayout(100);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar8;
      pUVar1[iVar5].layout.animState = 1;
      uVar8 = UiRes_GetLayoutData(0x15f);
      iVar5 = UiMgr_FindLayout(0x4e);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar8;
      pUVar1[iVar5].layout.unk_318 = 1;
      uVar8 = UiRes_GetLayoutData(0x160);
      iVar5 = UiMgr_FindLayout(0x4e);
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
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar8;
      pUVar1[iVar5].layout.animState = 1;
      if (0 < iVar6) {
        iVar5 = UiMgr_FindLayout(0x57);
        pUVar1 = g_UiMgr->slots;
        uVar10 = UiRes_GetLayoutData(0x118);
        UiLayout_IsAnimDone(&pUVar1[iVar5].layout,9,*(undefined4 *)(&DAT_0032cf30 + iVar6 * 0x10),
                            uVar10,1);
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar12 = UiLayout_UpdateAnimById(0x57,0);
    lVar13 = UiLayout_UpdateAnimById(0x57,1);
    lVar14 = UiLayout_UpdateAnimById(100,0);
    lVar15 = UiLayout_UpdateAnimById(0x4e,0);
    if (lVar15 == 0 && (lVar14 == 0 && (lVar12 == 0 && lVar13 == 0))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState
                (0x57,*(undefined4 *)(&DAT_0032cf38 + *(int *)(param_1 + 0x10) * 0x10),1,0);
      iVar5 = *(int *)(param_1 + 0x60);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x60);
    }
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x50);
      if (((iVar5 == 9) || (iVar5 == 8)) || ((iVar5 == 2 || (iVar5 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        lVar12 = UiLayout_UpdateAnimById(0x57,2);
        lVar13 = UiLayout_UpdateAnimById(0x57,3);
        lVar14 = UiLayout_UpdateAnimById(100,1);
        lVar15 = UiLayout_UpdateAnimById(0x4e,1);
        if (lVar15 == 0 && (lVar14 == 0 && (lVar12 == 0 && lVar13 == 0))) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  iVar5 = 0;
  puVar16 = &DAT_0032cf40;
  do {
    iVar7 = UiMgr_FindLayout(0x57);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,*puVar16,8);
    if (*(int *)(param_1 + 0x40) + -2 < iVar5) {
      iVar7 = UiMgr_FindLayout(0x57);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,puVar16[1],8);
    }
    iVar5 = iVar5 + 1;
    puVar16 = puVar16 + 4;
  } while (iVar5 < 8);
  if ((0 < iVar6) &&
     (lVar12 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 4)), lVar12 == 1)) {
    if (*(int *)(param_1 + 4) == 0xd) {
      uVar10 = Profile_Get(0);
      uVar10 = Profile_GetCurrentPartSlot(uVar10,7);
      sVar3 = PartDb_GetInfo(uVar10);
      if (sVar3 != 0x67) goto LAB_00259794;
      iVar5 = *(int *)(param_1 + 4);
    }
    else {
      iVar5 = *(int *)(param_1 + 4);
    }
    if (iVar5 == 0xe) {
      uVar10 = Profile_Get(0);
      uVar10 = Profile_GetCurrentPartSlot(uVar10,7);
      sVar3 = PartDb_GetInfo(uVar10);
      if (sVar3 != 0x6b) goto LAB_00259794;
      iVar5 = *(int *)(param_1 + 4);
    }
    else {
      iVar5 = *(int *)(param_1 + 4);
    }
    if (iVar5 == 0xf) {
      uVar10 = Profile_Get(0);
      uVar10 = Profile_GetCurrentPartSlot(uVar10,7);
      sVar3 = PartDb_GetInfo(uVar10);
      if (sVar3 != 0x6e) goto LAB_00259794;
    }
    if (iVar6 < *(int *)(param_1 + 0x40)) {
      iVar5 = UiMgr_FindLayout(0x57);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar5].layout,
                          *(undefined4 *)(&DAT_0032cf30 + iVar6 * 0x10),8);
    }
  }
LAB_00259794:
  uVar10 = Garage_ComputeCarStats(uVar9,0);
  MenuWnd_DrawNumber(0x4e,5,uVar10);
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetMoney(uVar10);
  MenuWnd_DrawNumber(0x4e,4,uVar10);
  iVar5 = Profile_Get(0);
  uVar4 = *(undefined2 *)(iVar5 + (short)uVar9 * 2 + 0x1420);
  MenuWnd_DrawText(0x4e,6,0x2e9);
  MenuWnd_DrawLabel(0x4e,7,0x3f,uVar4);
  uVar9 = maybe_CarModel_GetClassC(*(undefined4 *)(param_1 + 4));
  uVar9 = Msg_PartInfo(uVar9);
  MenuWnd_DrawText(0x57,0x42,uVar9);
  iVar5 = 1;
  if (1 < *(int *)(param_1 + 0x40)) {
    puVar16 = &DAT_0032cf50;
    do {
      uVar9 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),iVar5);
      uVar9 = Msg_MakerInfo(uVar9);
      MenuWnd_DrawText(0x57,puVar16[-1],uVar9);
      iVar5 = iVar5 + 1;
      puVar16 = puVar16 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x40));
  }
  lVar12 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 4));
  if (lVar12 == 1) {
    uVar4 = maybe_CarModel_IsBossCar(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    MenuWnd_DrawStatus(0xffffffffffffffff,0,uVar4,0);
  }
  else {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  UiLayout_UpdateAnimById(0x57,9);
  iVar5 = UiMgr_FindLayout(0x57);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x4e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00259960  size 0xe00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_FullAero(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar4 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x48);
    if ((((iVar4 == 9) || (iVar4 == 8)) || (iVar4 == 2)) || (iVar4 == 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar3 = UiRes_GetLayoutData(0x429);
      iVar4 = UiMgr_FindLayout(0x5a);
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
      uVar3 = UiRes_GetLayoutData(0x42a);
      iVar4 = UiMgr_FindLayout(0x5a);
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
      uVar3 = UiRes_GetLayoutData(0x12e);
      iVar4 = UiMgr_FindLayout(99);
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
      uVar3 = UiRes_GetLayoutData(0x12f);
      iVar4 = UiMgr_FindLayout(99);
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
      uVar3 = UiRes_GetLayoutData(0x173);
      iVar4 = UiMgr_FindLayout(0x55);
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
      uVar3 = UiRes_GetLayoutData(0x174);
      iVar4 = UiMgr_FindLayout(0x55);
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
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*(int *)(param_1 + 0x4c) == 3) {
    lVar5 = UiLayout_UpdateAnimById(99,0);
    lVar6 = UiLayout_UpdateAnimById(0x5a,0);
    lVar7 = UiLayout_UpdateAnimById(0x55,0);
    if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar4 = *(int *)(param_1 + 0x50);
      if (((iVar4 == 9) || (iVar4 == 8)) || ((iVar4 == 2 || (iVar4 == 1)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        lVar5 = UiLayout_UpdateAnimById(99,1);
        lVar6 = UiLayout_UpdateAnimById(0x5a,1);
        lVar7 = UiLayout_UpdateAnimById(0x55,1);
        if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState(99,*(undefined4 *)(*(int *)(param_1 + 0x10) * 4 + 0x36ec48),1,0);
    }
  }
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x31,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x32,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x33,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x34,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x35,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x36,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x37,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x38,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x29,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x2a,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x2b,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x2c,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x2d,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x2e,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x2f,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3a,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3b,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3c,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3d,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3e,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3f,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x40,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x42,8);
  iVar4 = UiMgr_FindLayout(99);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x43,8);
  MenuWnd_DrawText(99,0x39,0x98f);
  MenuWnd_DrawText(99,0x44,0x98f);
  uVar8 = Garage_ComputeCarStats(0xffffffffffffffff,1);
  MenuWnd_DrawNumber(0x55,3,uVar8);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x55,4,uVar8);
  iVar4 = MenuText_CarModelId(0xffffffffffffffff,0);
  iVar4 = CarDb_GetVariantCount(iVar4 + 1);
  if (iVar4 - 3U < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar4 - 3U) {
    case 0:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,0xe);
      break;
    case 1:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,10);
      break;
    case 2:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,1);
      break;
    case 3:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,4);
      break;
    case 4:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,3);
      break;
    case 5:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,2);
      break;
    case 6:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,6);
      break;
    case 7:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,5);
      break;
    case 8:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,0xd);
      break;
    case 9:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,0xc);
      break;
    case 10:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,7);
      break;
    case 0xb:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,0xf);
      break;
    case 0xc:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,8);
      break;
    case 0xd:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,9);
      break;
    case 0xe:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,0xb);
      break;
    case 0xf:
      iVar4 = UiMgr_FindLayout(0x5a);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,1,0x16,0x10);
    }
  }
  iVar4 = MenuText_CarModelId(0xffffffffffffffff,0);
  lVar5 = CarDb_GetVariantCount(iVar4 + 1);
  if (lVar5 != 2) {
    iVar4 = UiMgr_FindLayout(0x5a);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  }
  iVar4 = UiMgr_FindLayout(99);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x55);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x0025a760  size 0x1dc
void maybe_PartShop_Draw(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  iVar2 = piVar5[1];
  if (iVar2 == 0x19) {
    iVar2 = piVar5[2];
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
          (lVar3 = maybe_MenuText_CurrentCarSpec(iVar2), lVar3 != 1)) {
    if ((*piVar5 == 5) && (lVar3 = maybe_MenuText_CurrentCarSpec(piVar5[1]), lVar3 == 1)) {
      ScrGarage_Draw_NoOwned_8ea0(param_1);
    }
    else if (*piVar5 == 3) {
      ScrGarage_Draw_NoOwned(param_1);
    }
    else {
      ScrGarage_Draw_NoOwned_8ea0(param_1);
      iVar2 = UiMgr_FindLayout(100);
      pUVar1 = g_UiMgr->slots;
      uVar4 = maybe_CarModel_GetClassA(piVar5[1],0xffffffffffffffff);
      uVar4 = MsgId_ForGrade(uVar4);
      UiElem_SetPropInt(&pUVar1[iVar2].layout,5,0x16,uVar4);
      iVar2 = UiMgr_FindLayout(100);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_YouNeedTo(undefined8 param_1)

{
  bool bVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar3 = *(int *)(iVar7 + 0x5c);
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x16d);
    iVar3 = UiMgr_FindLayout(0x53);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = uVar4;
    pUVar2[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x16e);
    iVar3 = UiMgr_FindLayout(0x53);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = uVar4;
    pUVar2[iVar3].layout.animState = 1;
    iVar3 = UiMgr_FindLayout(0x53);
    pUVar2 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(0x117);
    UiLayout_IsAnimDone(&pUVar2[iVar3].layout,2,0x18,uVar6,1);
    Menu_ClearSlot(0);
    MenuWnd_SetItemVisible(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x53,0);
  bVar1 = lVar5 == 0;
  if (bVar1) {
    *(undefined4 *)(iVar7 + 0x58) = 0;
  }
  if (*(int *)(iVar7 + 0x60) != 0) {
    lVar5 = UiLayout_UpdateAnimById(0x53);
    if (lVar5 == 0) {
      *(undefined4 *)(iVar7 + 0x60) = 0;
    }
    bVar1 = false;
  }
  if (bVar1) {
    UiLayout_UpdateAnimById(0x53,2);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x53,*(undefined4 *)(*(int *)(iVar7 + 0x24) * 4 + 0x36ec28),1,0);
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  uVar6 = maybe_CarModel_IsBossCar(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0x10));
  iVar3 = Garage_ComputeCarStats(uVar6,0);
  MenuWnd_DrawLabel(0x53,0x1f,0x2d7);
  MenuWnd_DrawText(0x53,0x1e,1);
  MenuWnd_DrawText(0x53,0x20,2);
  MenuWnd_DrawNumber(0x53,0x1d,iVar3 << 1);
  iVar3 = UiMgr_FindLayout(0x53);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Front(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar2 = *(int *)(iVar7 + 0x5c);
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x13c);
    iVar2 = UiMgr_FindLayout(0x67);
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
    uVar3 = UiRes_GetLayoutData(0x13d);
    iVar2 = UiMgr_FindLayout(0x67);
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
    uVar3 = UiRes_GetLayoutData(0x13e);
    iVar2 = UiMgr_FindLayout(0x67);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x13f);
    iVar2 = UiMgr_FindLayout(0x67);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    MenuWnd_SetItemVisible(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x67,0);
  lVar5 = UiLayout_UpdateAnimById(0x67,1);
  if (lVar4 == 0 && lVar5 == 0) {
    *(undefined4 *)(iVar7 + 0x58) = 0;
  }
  if (*(int *)(iVar7 + 0x60) != 0) {
    lVar4 = UiLayout_UpdateAnimById(0x67,2);
    lVar5 = UiLayout_UpdateAnimById(0x67,3);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(iVar7 + 0x60) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x67,*(undefined4 *)(&DAT_0032cf30 + *(int *)(iVar7 + 0x14) * 4),1,0);
  }
  MenuWnd_DrawText(0x67,0x1b,0x2f);
  MenuWnd_DrawText(0x67,0x1c,0x30);
  MenuWnd_DrawText(0x67,0x1d,0x31);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentPartSlot(uVar6,0xd);
  uVar6 = Msg_MakerInfo(uVar6);
  MenuWnd_DrawText(0x67,0x14,uVar6);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentPartSlot(uVar6,0xe);
  uVar6 = Msg_MakerInfo(uVar6);
  MenuWnd_DrawText(0x67,0x15,uVar6);
  MenuWnd_DrawText(0x67,0x17,0x9c0);
  iVar2 = UiMgr_FindLayout(0x67);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0x2d5);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025b810  size 0x240
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Front(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0x5c);
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x16b);
    iVar2 = UiMgr_FindLayout(0x52);
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
    uVar3 = UiRes_GetLayoutData(0x16c);
    iVar2 = UiMgr_FindLayout(0x52);
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
    Menu_ClearSlot(0);
    MenuWnd_SetItemVisible(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x52,0);
  if (lVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x58) = 0;
  }
  if ((*(int *)(iVar5 + 0x60) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x52), lVar4 == 0)) {
    *(undefined4 *)(iVar5 + 0x60) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x52,*(undefined4 *)(&DAT_0032cf20 + *(int *)(iVar5 + 0x14) * 4),1,0);
  }
  MenuWnd_DrawText(0x52,0x12,0x2f);
  MenuWnd_DrawText(0x52,0x13,0x30);
  MenuWnd_DrawText(0x52,0x14,0x31);
  iVar2 = UiMgr_FindLayout(0x52);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0x2d5);
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025ba50  size 0x330
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_BodyColour(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar2 != 0) {
    uVar4 = UiRes_GetLayoutData(0x15d);
    iVar2 = UiMgr_FindLayout(0x4d);
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
    uVar4 = UiRes_GetLayoutData(0x15e);
    iVar2 = UiMgr_FindLayout(0x4d);
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
  lVar5 = UiLayout_UpdateAnimById(0x4d,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x4d), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x4d,*(undefined4 *)(&DAT_0032cf10 + *(int *)(param_1 + 8) * 4),1,0);
  }
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentCar(uVar6);
  CarRec_GetModelId(uVar6);
  MenuWnd_DrawText(0x4c,0x33,0x98e);
  MenuWnd_DrawText(0x4c,0x39,0x9b2);
  MenuWnd_DrawText(0x4d,0x1d,0x2e2);
  uVar6 = 0;
  iVar2 = MenuText_CarFullName(0xffffffffffffffff,0);
  if (iVar2 - 0xcU < 2) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x4d,0x1e,uVar6,0x2e3);
  MenuWnd_DrawTextId(0x4d,0x1f,uVar6,0x2e4);
  MenuWnd_DrawTextId(0x4d,0x20,uVar6,0x2e5);
  MenuWnd_DrawText(0x4c,0x37,0x9c1);
  iVar2 = 0;
  puVar7 = &DAT_0032cdb0;
  do {
    iVar3 = UiMgr_FindLayout(0x4d);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar7,8);
    iVar2 = iVar2 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar2 < 4);
  iVar2 = UiMgr_FindLayout(0x4c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x4d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0x2e1);
  return;
}

// 0x0025bd80  size 0x84c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage29; on-screen text/callee hint "ColourSchemeChanged" (was
   ScrColourSchemeChanged_Exit) */

void maybe_PageBodyShop_State8_ColourSchemeChanged(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x261);
    iVar2 = UiMgr_FindLayout(0x58);
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
    uVar3 = UiRes_GetLayoutData(0x263);
    iVar2 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x264);
    iVar2 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x262);
    iVar2 = UiMgr_FindLayout(0x58);
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
    uVar3 = UiRes_GetLayoutData(0x265);
    iVar2 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x36c = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x368 = 1;
    uVar3 = UiRes_GetLayoutData(0x266);
    iVar2 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x380 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x37c = 1;
    uVar3 = UiRes_GetLayoutData(0x267);
    iVar2 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
    uVar3 = UiRes_GetLayoutData(0x268);
    iVar2 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
    uVar3 = UiRes_GetLayoutData(0x269);
    iVar2 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    do {
      lVar4 = UiLayout_UpdateAnimById(0x58,8);
    } while (lVar4 == 1);
    uVar3 = UiRes_GetLayoutData(0x26a);
    iVar2 = UiMgr_FindLayout(0x58);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3d0 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 1;
    MenuWnd_DrawDialogText(0x58,0x36ec20,2,0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x58,0);
  lVar5 = UiLayout_UpdateAnimById(0x58,2);
  lVar6 = UiLayout_UpdateAnimById(0x58,3);
  if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    MenuWnd_DrawCursor(1);
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0x58);
    lVar5 = UiLayout_UpdateAnimById(0x58,4);
    lVar6 = UiLayout_UpdateAnimById(0x58,5);
    if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x58,*(undefined4 *)(&DAT_0032cea0 + *(int *)(param_1 + 0x3c) * 4),1,0);
  }
  iVar2 = UiMgr_FindLayout(0x58);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x38,0x16,
                    *(undefined4 *)(&DAT_0032cec0 + *(int *)(param_1 + 0x34) * 4));
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x58,0x37,uVar7);
  iVar2 = 0;
  iVar9 = 0;
  puVar8 = &DAT_0032cee0;
  do {
    if (iVar9 == 5) {
      iVar2 = -1;
    }
    if (iVar2 == -1) break;
    uVar7 = MsgId_ForMenuTitle(iVar2 + 1U & 0xff);
    MenuWnd_DrawText(0x58,*puVar8,uVar7);
    iVar2 = (iVar2 + 1) % 5;
    iVar9 = iVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar9 < 6);
  MenuWnd_SetTitle(3,0x2d8);
  iVar2 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x4b,8);
  iVar2 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x4c,8);
  iVar2 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x3c,8);
  iVar2 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x3b,8);
  iVar2 = UiMgr_FindLayout(0x58);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x3a,8);
  iVar2 = UiMgr_FindLayout(0x58);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

