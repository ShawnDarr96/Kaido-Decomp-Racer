// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0024c000 - 0x00250000
#include "ghidra_types.h"

// 0x0024cb18  size 0x8
/* follows ScrCareer_Draw_WinLoss; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void ScrCareer_Draw_WinLoss_Orphan1(void)

{
  return;
}

// 0x0024cb40  size 0x958
/* entry 19 of state table 0x32be30 used by maybe_PageBetCar_Update */

void maybe_PageBetCar_State19(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  int *piVar16;
  undefined1 *puVar17;
  undefined2 auStack_410 [104];
  undefined2 auStack_340 [104];
  undefined2 auStack_270 [104];
  undefined4 auStack_1a0 [52];
  undefined4 auStack_d0 [52];
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  uVar11 = Profile_Get(0);
  Profile_CopyCarRecord
            (auStack_1a0,uVar11,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0x3e0));
  puVar15 = auStack_1a0;
  puVar14 = auStack_d0;
  iVar13 = 0x33;
  do {
    iVar13 = iVar13 + -1;
    *puVar14 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar14 = puVar14 + 1;
  } while (0 < iVar13);
  iVar13 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar13 != 0) {
    uVar8 = UiRes_GetLayoutData(0x10e);
    iVar13 = UiMgr_FindLayout(0x8a);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar13].layout.unk_310 = 0xffffffff;
    pUVar1[iVar13].layout.unk_31c = 0;
    pUVar1[iVar13].layout.unk_30c = 0;
    if (pUVar1[iVar13].layout.unk_31c == 0) {
      pUVar1[iVar13].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar13].layout.unk_318 = 1;
    }
    pUVar1[iVar13].layout.unk_30c = 0;
    if (pUVar1[iVar13].layout.unk_31c == 0) {
      pUVar1[iVar13].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar13].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x314 = 0;
    pUVar1[iVar13].layout.unk_31c = uVar8;
    pUVar1[iVar13].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x10f);
    iVar13 = UiMgr_FindLayout(0x8a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar13].layout.field_0x330 == 0) {
      pUVar1[iVar13].layout.animState = 0;
    }
    else {
      pUVar1[iVar13].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar13].layout.field_0x330 == 0) {
      pUVar1[iVar13].layout.animState = 0;
    }
    else {
      pUVar1[iVar13].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x330 = uVar9;
    pUVar1[iVar13].layout.animState = 1;
    uVar9 = UiRes_GetLayoutData(0x10d);
    iVar13 = UiMgr_FindLayout(0x8a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar13].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar13].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x344 = uVar9;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x340 = 1;
    uVar9 = UiRes_GetLayoutData(0x110);
    iVar13 = UiMgr_FindLayout(0x8a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar13].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar13].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x358 = uVar9;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x354 = 1;
    uVar9 = UiRes_GetLayoutData(0x111);
    iVar13 = UiMgr_FindLayout(0x8a);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar13].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar13].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar13].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x36c = uVar9;
    *(undefined4 *)&pUVar1[iVar13].layout.field_0x368 = 1;
    uVar9 = UiRes_GetLayoutData(0x195);
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
    *(undefined4 *)&pMVar2->field_0x35c = uVar9;
    *(undefined4 *)&pMVar2->field_0x358 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x8a,0x32c5d0,4,0xffffffffffffffff);
    pMVar2 = g_MenuMgr;
    if (*(int *)(param_1 + 0x648) == 0x27) {
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0x3e0);
      g_MenuMgr->unk_0538 = 2;
      *(undefined4 *)&pMVar2->field_0x53c = uVar9;
      sVar7 = CarRec_GetVariant(auStack_d0);
      g_MenuMgr->unk_0544 = (int)sVar7;
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  uVar11 = Profile_Get(0);
  lVar12 = Garage_FindCar(uVar11);
  if (lVar12 < 3) {
    MenuWnd_DrawCursor(0);
    iVar13 = *(int *)(param_1 + 0x648);
  }
  else {
    MenuWnd_DrawCursor(1);
    iVar13 = *(int *)(param_1 + 0x648);
  }
  if (iVar13 == 0x27) {
    puVar17 = &g_MenuMgr->field_0x40;
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x8a,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x8a,2);
    bVar5 = UiLayout_UpdateAnimIfActive((UiLayout *)puVar17,0);
    if (!bVar5 && (!bVar3 && !bVar4)) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (*(int *)(param_1 + 0x650) == 0x27) {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x8a,1);
      if (!bVar3) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
    else {
      iVar13 = 0;
      piVar16 = &DAT_0032c5e0;
      do {
        iVar10 = UiMgr_FindLayout(0x8a);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar10].layout,(long)*piVar16,8,extraout_a3_lo);
        iVar13 = iVar13 + 1;
        piVar16 = piVar16 + 1;
      } while (iVar13 < 0xc);
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x648) == 0x24) && (*(int *)(param_1 + 0x644) == 0)) {
    uVar11 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_270,uVar11,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    MenuWnd_DrawStatus(auStack_270[0],0xffffffffffffffff,0xffffffffffffffff,0);
    iVar13 = *(int *)(param_1 + 0x648);
  }
  else {
    uVar11 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_340,uVar11,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0x3e0));
    MenuWnd_DrawStatus(auStack_340[0],0xffffffffffffffff,0xffffffffffffffff,0);
    iVar13 = *(int *)(param_1 + 0x648);
  }
  if ((iVar13 == 0x24) && (*(int *)(param_1 + 0x644) == 0)) {
    MenuWnd_DrawLabel(0x8a,0x3b,0x3b,*(int *)(param_1 + 0x6a0) + 1,*(undefined4 *)(param_1 + 0x444))
    ;
  }
  else {
    MenuWnd_DrawLabel(0x8a,0x3b,0x3b,*(int *)(param_1 + 0x62c) + 1,*(undefined4 *)(param_1 + 0x444))
    ;
  }
  MenuWnd_DrawText(7,0x2e,0x37b);
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x8a,(&DAT_0032c5e0)[*(int *)(param_1 + 0x62c)],0,0);
    pMVar2 = g_MenuMgr;
    uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + param_1 + 0x3e0);
    g_MenuMgr->unk_0538 = 2;
    *(undefined4 *)&pMVar2->field_0x53c = uVar9;
    sVar7 = CarRec_GetVariant(auStack_d0);
    g_MenuMgr->unk_0544 = (int)sVar7;
  }
  if (*(int *)(param_1 + 0x444) < 0xc) {
    iVar13 = UiMgr_FindLayout(0x8a);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)DAT_0032c5d0,8,extraout_a3_lo_02);
    iVar13 = UiMgr_FindLayout(0x8a);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar13].layout,(long)DAT_0032c5d4,8,extraout_a3_lo_03);
  }
  iVar13 = 0;
  piVar16 = &DAT_0032c620;
  do {
    if (iVar13 < *(int *)(param_1 + 0x444)) {
      iVar10 = UiMgr_FindLayout(0x8a);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar10].layout,(long)*piVar16,8,extraout_a3_lo_00);
    }
    else {
      iVar10 = UiMgr_FindLayout(0x8a);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar10].layout,(long)*piVar16,8,extraout_a3_lo_01);
    }
    iVar13 = iVar13 + 1;
    piVar16 = piVar16 + 1;
  } while (iVar13 < 0xc);
  iVar13 = UiMgr_FindLayout(0x8a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar13].layout);
  uVar11 = Profile_Get(0);
  cVar6 = Profile_GetChapter(uVar11);
  if (cVar6 == '\0') {
    UiLayout_UpdateAnimById((UiLayout *)0x81,0);
    iVar13 = UiMgr_FindLayout(0x81);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar13].layout);
  }
  else {
    UiLayout_UpdateAnimById((UiLayout *)0x82,0);
    iVar13 = UiMgr_FindLayout(0x82);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar13].layout);
  }
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  if ((*(int *)(param_1 + 0x648) == 0x24) && (*(int *)(param_1 + 0x644) == 0)) {
    puVar17 = &g_MenuMgr->field_0x40;
    uVar11 = Profile_Get(0);
    Profile_CopyCarRecord
              (auStack_410,uVar11,*(undefined4 *)(*(int *)(param_1 + 0x6a0) * 4 + param_1 + 0x3e0));
    iVar13 = MenuText_RivalCar(auStack_410[0],0xffffffffffffffff);
    UiElem_SetPropInt((UiLayout *)puVar17,0,0x16,iVar13);
  }
  else {
    puVar17 = &g_MenuMgr->field_0x40;
    iVar13 = MenuText_RivalCar((undefined2)auStack_d0[0],0xffffffffffffffff);
    UiElem_SetPropInt((UiLayout *)puVar17,0,0x16,iVar13);
  }
  UiLayout_Draw(1.0,(UiLayout *)&g_MenuMgr->field_0x40);
  return;
}

// 0x0024d4a0  size 0x1d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 18 of state table 0x32be30 used by maybe_PageBetCar_Update */

void maybe_PageBetCar_State18(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte bVar6;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  
  iVar4 = UiMgr_FindLayout(7);
  iVar5 = *(int *)(param_1 + 0x65c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x644);
    bVar6 = extraout_a3_lo;
  }
  else {
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    MenuWnd_DrawHelp();
    iVar5 = *(int *)(param_1 + 0x644);
    bVar6 = extraout_a3_lo_01;
  }
  if (1 < iVar5 - 1U) goto LAB_0024d574;
  iVar5 = *(int *)(param_1 + 0x670);
  if (iVar5 < 0xb) {
LAB_0024d54c:
    iVar5 = *(int *)(param_1 + 0x69c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x62c);
    iVar3 = *(int *)(param_1 + 0x69c);
    if (iVar2 + 1 != iVar3) {
      if (iVar2 == (iVar3 + 10) % iVar5) {
        *(int *)(param_1 + 0x69c) = (iVar3 + 1) % iVar5;
        MenuMgr_LockInput(1);
      }
      goto LAB_0024d54c;
    }
    *(int *)(param_1 + 0x69c) = iVar2;
    MenuMgr_LockInput(0);
    iVar5 = *(int *)(param_1 + 0x69c);
  }
  iVar2 = *(int *)(param_1 + 0x670);
  _s_PageBetCar_State18_1 =
       MenuWnd_DrawHeader(param_1 + 0x118,iVar2,iVar5,
                          (iVar2 + (*(int *)(param_1 + 0x62c) - iVar5)) % iVar2);
  bVar6 = extraout_a3_lo_00;
LAB_0024d574:
  iVar5 = _s_PageBetCar_State18_1;
  if (_s_PageBetCar_State18_1 == 2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (iVar5 == 2) {
      MenuWnd_RequestClose();
      bVar6 = extraout_a3_lo_02;
    }
    if (_s_PageBetCar_State18_1 == 3) {
      if (*(int *)(param_1 + 0x650) - 0x22U < 2) {
        UiElem_SetPropFloat(&pUVar1[iVar4].layout,0x25,8,bVar6);
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  return;
}

// 0x0024d680  size 0x2d4
void ScrCareer_Draw_GoBattle_d680(int param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 auStack_300 [96];
  undefined4 auStack_180 [11];
  byte bStack_154;
  
  iVar4 = UiMgr_FindLayout(0x7a);
  iVar7 = *(int *)(param_1 + 0x65c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar7 != 0) {
    uVar5 = UiRes_GetLayoutData(0x7a);
    iVar7 = UiMgr_FindLayout(0x80);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar7].layout.unk_310 = 0xffffffff;
    pUVar2[iVar7].layout.unk_31c = 0;
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
    pUVar2[iVar7].layout.unk_31c = uVar5;
    pUVar2[iVar7].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x7b);
    iVar7 = UiMgr_FindLayout(0x80);
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
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar6;
    pUVar2[iVar7].layout.animState = 1;
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x80,0);
  if (!bVar3) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x80,1), !bVar3)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  MenuWnd_DrawText(0x7a,0x1a,0x362);
  MenuWnd_DrawText(0x7a,0x19,0x363);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + 0x36eb38));
  RivalDb_Copy(auStack_300,*(undefined2 *)(param_1 + 0x24));
  puVar9 = auStack_300;
  puVar8 = auStack_180;
  iVar7 = 0x5f;
  do {
    iVar7 = iVar7 + -1;
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar7);
  UiElem_SetPropInt(&pUVar1[iVar4].layout,0x18,0x16,*(int *)(&DAT_0032c5b0 + (uint)bStack_154 * 4));
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x7a,*(undefined4 *)(*(int *)(param_1 + 0x62c) * 4 + 0x36eb40),1,0);
  }
  iVar7 = UiMgr_FindLayout(0x7a);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x0024d960  size 0x62c
void ScrCareer_Draw_BetParts(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  UiLayoutSlot *pUVar3;
  bool bVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  byte extraout_a3_lo;
  int iVar17;
  undefined4 auStack_3c0 [20];
  undefined2 uStack_370;
  undefined2 uStack_36e;
  undefined1 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  char cStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined2 uStack_338;
  undefined2 uStack_336;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 auStack_32c [23];
  undefined4 auStack_2d0 [23];
  undefined4 auStack_274 [16];
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined2 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined4 uStack_1e8;
  char cStack_1e0;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined1 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  char cStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 auStack_15c [23];
  undefined4 auStack_100 [23];
  undefined4 auStack_a4 [16];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  UiMgr_FindLayout(0x84);
  UiMgr_FindLayout(0x85);
  iVar7 = UiMgr_FindLayout(7);
  pUVar1 = g_UiMgr->slots;
  UiMgr_FindLayout(0x86);
  iVar8 = UiMgr_FindLayout(0x7b);
  iVar17 = (int)param_1;
  iVar14 = *(int *)(iVar17 + 0x65c);
  pUVar2 = g_UiMgr->slots;
  *(undefined4 *)(iVar17 + 0x65c) = 0;
  if (iVar14 != 0) {
    uVar9 = UiRes_GetLayoutData(0x72);
    iVar14 = UiMgr_FindLayout(0x7b);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar14].layout.unk_310 = 0xffffffff;
    pUVar3[iVar14].layout.unk_31c = 0;
    pUVar3[iVar14].layout.unk_30c = 0;
    if (pUVar3[iVar14].layout.unk_31c == 0) {
      pUVar3[iVar14].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar14].layout.unk_318 = 1;
    }
    pUVar3[iVar14].layout.unk_30c = 0;
    if (pUVar3[iVar14].layout.unk_31c == 0) {
      pUVar3[iVar14].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar14].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar14].layout.field_0x314 = 0;
    pUVar3[iVar14].layout.unk_31c = uVar9;
    pUVar3[iVar14].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x73);
    iVar14 = UiMgr_FindLayout(0x7b);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar14].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar14].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar14].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar14].layout.field_0x330 == 0) {
      pUVar3[iVar14].layout.animState = 0;
    }
    else {
      pUVar3[iVar14].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar14].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar14].layout.field_0x330 == 0) {
      pUVar3[iVar14].layout.animState = 0;
    }
    else {
      pUVar3[iVar14].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar14].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar14].layout.field_0x330 = uVar10;
    pUVar3[iVar14].layout.animState = 1;
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x7b,0);
  if (!bVar4) {
    *(undefined4 *)(iVar17 + 0x658) = 0;
  }
  if ((((*(int *)(iVar17 + 0x660) != 0) &&
       (bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x7b,1), !bVar4)) &&
      (*(undefined4 *)(iVar17 + 0x660) = 0, *(char *)(iVar17 + 0x474) == '\x03')) &&
     (*(int *)(iVar17 + 0x650) != 4)) {
    UiElem_SetPropFloat(&pUVar1[iVar7].layout,0x25,8,extraout_a3_lo);
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0x7b,*(undefined4 *)(*(int *)(iVar17 + 0x62c) * 4 + 0x36eb30),1,0);
  }
  RivalDb_Copy(&uStack_370,*(undefined2 *)(iVar17 + 0x24));
  puVar16 = auStack_32c;
  puVar15 = auStack_15c;
  iVar14 = 0x17;
  uStack_190 = uStack_360;
  uStack_188 = uStack_358;
  uStack_184 = uStack_354;
  uStack_19c = uStack_36c;
  uStack_198 = uStack_368;
  uStack_194 = uStack_364;
  uStack_178 = uStack_348;
  uStack_1a0 = uStack_370;
  uStack_19e = uStack_36e;
  uStack_18c = uStack_35c;
  uStack_180 = uStack_350;
  uStack_17c = uStack_34c;
  uStack_164 = uStack_334;
  cStack_174 = cStack_344;
  uStack_170 = uStack_340;
  uStack_16c = uStack_33c;
  uStack_168 = uStack_338;
  uStack_166 = uStack_336;
  uStack_160 = uStack_330;
  do {
    iVar14 = iVar14 + -1;
    *puVar15 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar15 = puVar15 + 1;
  } while (0 < iVar14);
  puVar16 = auStack_2d0;
  puVar15 = auStack_100;
  iVar14 = 0x17;
  do {
    iVar14 = iVar14 + -1;
    *puVar15 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar15 = puVar15 + 1;
  } while (0 < iVar14);
  puVar16 = auStack_274;
  puVar15 = auStack_a4;
  iVar14 = 8;
  do {
    iVar14 = iVar14 + -1;
    uVar10 = puVar16[1];
    *puVar15 = *puVar16;
    puVar15[1] = uVar10;
    puVar16 = puVar16 + 2;
    puVar15 = puVar15 + 2;
  } while (0 < iVar14);
  uStack_64 = uStack_234;
  uStack_60 = uStack_230;
  uStack_5c = uStack_22c;
  uStack_58 = uStack_228;
  uStack_34 = uStack_204;
  uStack_54 = uStack_224;
  uStack_30 = uStack_200;
  uStack_50 = uStack_220;
  uStack_2c = uStack_1fc;
  uStack_38 = uStack_208;
  uStack_4c = uStack_21c;
  uStack_48 = uStack_218;
  uStack_44 = uStack_214;
  uStack_40 = uStack_210;
  uStack_28 = uStack_1f8;
  uStack_3c = uStack_20c;
  RaceResult_BuildMessage(&uStack_20,*(undefined2 *)(iVar17 + 0x24));
  uVar9 = (uint)cStack_174;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  uStack_8 = uStack_18;
  lVar11 = RivalRec_IsValid(&uStack_1a0);
  if (lVar11 != 0) {
    uVar5 = RivalRec_GetId(&uStack_1a0);
    uVar12 = Profile_Get(0);
    sVar6 = Profile_GetRivalWins(uVar12,uVar5);
    if (sVar6 == 0) {
      Rival_GetTeamRecord(auStack_3c0,uVar5);
      puVar16 = auStack_3c0;
      puVar15 = &uStack_1f0;
      iVar14 = 0x11;
      do {
        iVar14 = iVar14 + -1;
        *puVar15 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar15 = puVar15 + 1;
      } while (0 < iVar14);
      uVar9 = (uint)cStack_1e0;
      uStack_10 = CONCAT31(uStack_10._1_3_,uStack_1ec);
      uStack_c = uStack_1e8;
    }
  }
  UiElem_SetPropInt(&pUVar2[iVar8].layout,0x18,0x16,*(int *)(&DAT_0032c590 + (uVar9 & 0xff) * 4));
  uVar12 = Profile_Get(0);
  uVar12 = Profile_GetMoney(uVar12);
  MenuWnd_DrawNumber(0x7b,0x21,uVar12);
  MenuWnd_DrawNumber(0x7b,0x20,*(undefined4 *)(iVar17 + 0x48c));
  if ((*(uint *)(iVar17 + 0x494) & 10) == 0) {
    MenuWnd_DrawText(0x7b,0x1c,0x366);
    uVar9 = *(uint *)(iVar17 + 0x494);
  }
  else {
    MenuWnd_DrawTextId(0x7b,0x1c,3,0x366);
    uVar9 = *(uint *)(iVar17 + 0x494);
  }
  if ((uVar9 & 1) == 0) {
    MenuWnd_DrawText(0x7b,0x1d,0x367);
    uVar5 = (undefined2)uStack_c;
  }
  else {
    MenuWnd_DrawTextId(0x7b,0x1d,3,0x367);
    uVar5 = (undefined2)uStack_c;
  }
  uVar12 = Msg_PartInfo(uVar5);
  uVar13 = Msg_MakerName(uVar5);
  MenuWnd_DrawLabel(0x7b,0x1f,0x368,uVar12,uVar13);
  MenuWnd_DrawText(0x7b,0x1e,0x369);
  ScrCareer_Draw_MasterLord(param_1);
  iVar14 = UiMgr_FindLayout(0x7b);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar14].layout);
  return;
}

// 0x0024df90  size 0x8c
/* state of maybe_PageBetCar; on-screen text/callee hint "BetParts" (was ScrBetParts_Enter) */

void maybe_PageBetCar_State15_BetParts(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  if (*(int *)(param_1 + 0x660) != 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  return;
}

// 0x0024e020  size 0x46c
/* state of maybe_PageBetCar; on-screen text/callee hint "ThisBattleWith" (was
   ScrThisBattleWith_Exit) */

void maybe_PageBetCar_State14_ThisBattleWith(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  UiLayoutSlot *pUVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte bVar8;
  byte extraout_a3_lo_01;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = UiMgr_FindLayout(0x87);
  pUVar1 = g_UiMgr->slots;
  iVar5 = UiMgr_FindLayout(0x81);
  iVar11 = (int)param_1;
  iVar10 = *(int *)(iVar11 + 0x65c);
  pUVar2 = g_UiMgr->slots;
  *(undefined4 *)(iVar11 + 0x65c) = 0;
  if (iVar10 != 0) {
    uVar6 = UiRes_GetLayoutData(0x8e);
    iVar10 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar10].layout.unk_310 = 0xffffffff;
    pUVar3[iVar10].layout.unk_31c = 0;
    pUVar3[iVar10].layout.unk_30c = 0;
    if (pUVar3[iVar10].layout.unk_31c == 0) {
      pUVar3[iVar10].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar10].layout.unk_318 = 1;
    }
    pUVar3[iVar10].layout.unk_30c = 0;
    if (pUVar3[iVar10].layout.unk_31c == 0) {
      pUVar3[iVar10].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar10].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x314 = 1;
    pUVar3[iVar10].layout.unk_31c = uVar6;
    pUVar3[iVar10].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x26b);
    iVar10 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x330 == 0) {
      pUVar3[iVar10].layout.animState = 0;
    }
    else {
      pUVar3[iVar10].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x330 == 0) {
      pUVar3[iVar10].layout.animState = 0;
    }
    else {
      pUVar3[iVar10].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x328 = 1;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x330 = uVar7;
    pUVar3[iVar10].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x26c);
    iVar10 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x26d);
    iVar10 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x348 = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x348 = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x350 = 1;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x354 = 1;
    uVar7 = UiRes_GetLayoutData(0x26e);
    iVar10 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x35c = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x35c = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x368 = 1;
    uVar7 = UiRes_GetLayoutData(0x26f);
    iVar10 = UiMgr_FindLayout(0x87);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x370 = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x370 = 0;
    if (*(int *)&pUVar3[iVar10].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar10].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x380 = uVar7;
    *(undefined4 *)&pUVar3[iVar10].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    iVar10 = 0;
    piVar9 = &DAT_0032c570;
    bVar8 = extraout_a3_lo_00;
    do {
      UiElem_SetPropFloat(&pUVar1[iVar4].layout,(long)*piVar9,8,bVar8);
      iVar10 = iVar10 + 1;
      piVar9 = piVar9 + 1;
      bVar8 = extraout_a3_lo_01;
    } while (iVar10 < 6);
    UiElem_SetPropFloat(&pUVar2[iVar5].layout,0xe,8,extraout_a3_lo_01);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  *(undefined4 *)(iVar11 + 0x658) = 0;
  if (*(int *)(iVar11 + 0x660) != 0) {
    iVar10 = 0;
    piVar9 = &DAT_0032c570;
    do {
      iVar4 = UiMgr_FindLayout(0x87);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar9,8,extraout_a3_lo);
      iVar10 = iVar10 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar10 < 6);
    *(undefined4 *)(iVar11 + 0x660) = 0;
  }
  ScrCareer_Draw_MasterLord(param_1);
  return;
}

// 0x0024e490  size 0x1dc
void ScrCareer_Draw_YouDonHave(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar3 = *(int *)(iVar4 + 0x65c);
  *(undefined4 *)(iVar4 + 0x65c) = 0;
  if (iVar3 != 0) {
    MenuWnd_SetHelpText(0);
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  uVar1 = *(uint *)(iVar4 + 0x494);
  if (((uVar1 & 8) == 0) || ((uVar1 & 1) == 0)) {
    if (((uVar1 & 2) == 0) || ((uVar1 & 1) == 0)) {
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 1) == 0) {
          if ((uVar1 & 4) == 0) {
            if ((uVar1 & 0x20) == 0) {
              MenuWnd_DrawText(5,0x1c,900);
            }
            else {
              MenuWnd_DrawText(5,0x1c,299);
            }
          }
          else {
            MenuWnd_DrawText(5,0x1c,0x380);
          }
        }
        else {
          MenuWnd_DrawText(5,0x1c,900);
        }
      }
      else {
        MenuWnd_DrawText(5,0x1c,0x382);
      }
    }
    else {
      MenuScr_Draw_YouDonHave_2ee0(5,0x1c,*(undefined4 *)(iVar4 + 0x48c));
    }
    iVar3 = *(int *)(iVar4 + 0x660);
  }
  else {
    MenuScr_Draw_YouDonHave(5,0x1c,*(undefined4 *)(iVar4 + 0x48c));
    iVar3 = *(int *)(iVar4 + 0x660);
  }
  if (iVar3 != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar4 + 0x660) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar4 + 0x658) = 0;
  }
  ScrCareer_Draw_MasterLord(param_1);
  return;
}

// 0x0024e670  size 0x160
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_ThisBattleWith(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  UiMgr_FindLayout(0x84);
  UiMgr_FindLayout(0x85);
  UiMgr_FindLayout(7);
  UiMgr_FindLayout(0x86);
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x65c);
  *(undefined4 *)(iVar3 + 0x65c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    _s_ScrCareer_Draw_ThisBattleWith_1 = 2;
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  _s_ScrCareer_Draw_ThisBattleWith_1 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  cVar1 = *(char *)(iVar3 + 0x480);
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    MenuWnd_DrawText(5,0x1c,0x37f);
  }
  else {
    if (cVar1 != '\0') {
      iVar2 = *(int *)(iVar3 + 0x660);
      goto LAB_0024e71c;
    }
    MenuWnd_DrawText(5,0x1c,0x37e);
  }
  iVar2 = *(int *)(iVar3 + 0x660);
LAB_0024e71c:
  if (iVar2 != 0) {
    if (_s_ScrCareer_Draw_ThisBattleWith_1 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (_s_ScrCareer_Draw_ThisBattleWith_1 == 3) {
      *(undefined4 *)(iVar3 + 0x660) = 0;
    }
  }
  if (_s_ScrCareer_Draw_ThisBattleWith_1 == 2) {
    *(undefined4 *)(iVar3 + 0x658) = 0;
  }
  ScrCareer_Draw_MasterLord(param_1);
  return;
}

// 0x0024e7d0  size 0x3a4
void ScrRace_Draw_CategoryRace(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  UiLayout *pUVar7;
  
  iVar4 = UiMgr_FindLayout(0x78);
  iVar5 = *(int *)(param_1 + 0x65c);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  pUVar7 = &pUVar1[iVar4].layout;
  if (iVar5 != 0) {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  if ((*(int *)(param_1 + 0x660) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x79,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar6 = Race_GetCourseVariant();
  iVar5 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(pUVar7,0x3d,0x16,*(int *)(&DAT_0032c550 + iVar5 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar5 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(pUVar7,0x3e,0x16,*(int *)(&DAT_0032c550 + iVar5 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar5 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(pUVar7,0x3f,0x16,*(int *)(&DAT_0032c550 + iVar5 * 4));
  uVar6 = Race_GetCourseVariant();
  iVar5 = MsgId_ForOption(uVar6);
  UiElem_SetPropInt(pUVar7,0x40,0x16,*(int *)(&DAT_0032c550 + iVar5 * 4));
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x42,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x43,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x44,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x45,uVar6);
  uVar6 = Profile_Get(0);
  cVar3 = Profile_GetChapter(uVar6);
  if (cVar3 == '\0') {
    MenuWnd_DrawText(0x79,0x18,0xe0);
  }
  else {
    MenuWnd_DrawTextId(0x79,0x18,3,0xe0);
  }
  MenuWnd_DrawText(0x79,0x19,0x355);
  MenuWnd_DrawText(0x79,0x1a,0x356);
  MenuWnd_DrawText(0x79,0x1b,0x357);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032c540 + *(int *)(param_1 + 0x62c) * 4));
  UiElem_SetPropFloat(pUVar7,1,8,extraout_a3_lo);
  UiElem_SetPropFloat(pUVar7,0xb,8,extraout_a3_lo_00);
  UiElem_SetPropFloat(pUVar7,0x15,8,extraout_a3_lo_01);
  UiElem_SetPropFloat(pUVar7,0x1f,8,extraout_a3_lo_02);
  iVar5 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x78);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x79);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x0024eb80  size 0x54
/* state of maybe_PageBetCar; on-screen text/callee hint "EnableAutomaticGear" (was
   ScrEnableAutomaticGear_Update) */

void maybe_PageBetCar_State10_EnableAutomaticGear(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  else {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
  return;
}

// 0x0024ebe0  size 0x11c
void ScrRace_Draw_EnableAutomaticGear(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x65c);
  *(undefined4 *)(iVar3 + 0x65c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar3 + 0x62c),0x36eb20);
  MenuWnd_DrawText(5,0x1c,0x378);
  if (*(int *)(iVar3 + 0x660) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(iVar3 + 0x660) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(iVar3 + 0x658) = 0;
  }
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(iVar3 + 0x62c) * 4 + 0x36eb28));
  ScrRace_Draw_Interval(param_1);
  Subtitle_Draw();
  return;
}

// 0x0024ed00  size 0x78
/* state of maybe_PageBetCar; on-screen text/callee hint "StartPractice" (was ScrStartPractice_Exit)
    */

void maybe_PageBetCar_State8_StartPractice(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  return;
}

// 0x0024ed80  size 0x4f0
void ScrGarage_Draw_ChangeTyres(int param_1)

{
  int iVar1;
  int iVar2;
  UiLayoutSlot *pUVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_s1;
  
  iVar8 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar8 != 0) {
    uVar5 = UiRes_GetLayoutData(0x29d);
    iVar8 = UiMgr_FindLayout(0xa5);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar8].layout.unk_310 = 0xffffffff;
    pUVar3[iVar8].layout.unk_31c = 0;
    pUVar3[iVar8].layout.unk_30c = 0;
    if (pUVar3[iVar8].layout.unk_31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    pUVar3[iVar8].layout.unk_30c = 0;
    if (pUVar3[iVar8].layout.unk_31c == 0) {
      pUVar3[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x314 = 0;
    pUVar3[iVar8].layout.unk_31c = uVar5;
    pUVar3[iVar8].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x29e);
    iVar8 = UiMgr_FindLayout(0xa5);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar8].layout.field_0x330 == 0) {
      pUVar3[iVar8].layout.animState = 0;
    }
    else {
      pUVar3[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar8].layout.field_0x330 = uVar6;
    pUVar3[iVar8].layout.animState = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawHelp();
    MenuWnd_SetHelpText(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  if (1 < *(int *)(param_1 + 0x644) - 1U) goto LAB_0024ee20;
  iVar8 = *(int *)(param_1 + 0x628);
  if (iVar8 < 0xb) {
LAB_0024f024:
    iVar8 = *(int *)(param_1 + 0x698);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x62c);
    iVar2 = *(int *)(param_1 + 0x698);
    if (iVar2 == (iVar1 + 1) % iVar8) {
      *(int *)(param_1 + 0x698) = iVar1;
      MenuMgr_LockInput(0);
      goto LAB_0024f024;
    }
    if (iVar1 != (iVar2 + 10) % iVar8) goto LAB_0024f024;
    *(int *)(param_1 + 0x698) = (iVar2 + 1) % iVar8;
    MenuMgr_LockInput(1);
    iVar8 = *(int *)(param_1 + 0x698);
  }
  iVar1 = *(int *)(param_1 + 0x628);
  unaff_s1 = MenuWnd_DrawHeader(param_1 + 0x5fc,iVar1,iVar8,
                                (iVar1 + (*(int *)(param_1 + 0x62c) - iVar8)) % iVar1);
LAB_0024ee20:
  if (*(int *)(param_1 + 0x684) == 1) {
    uVar6 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
    *(undefined4 *)(param_1 + 0x694) = uVar6;
    uVar9 = Msg_PartInfo(*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
    uVar10 = Msg_MakerInfo(*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
    MenuWnd_DrawLabel(5,0x1c,0x3a8,*(undefined4 *)(&DAT_0032c528 + *(int *)(param_1 + 0x20) * 4),
                      uVar9,uVar10);
  }
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xa5,0);
  if ((!bVar4) && (unaff_s1 == 2)) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (unaff_s1 == 2) {
      MenuWnd_RequestClose();
      iVar8 = *(int *)(param_1 + 0x684);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x684);
    }
    if ((iVar8 == 1) && (*(int *)(param_1 + 0x694) == 2)) {
      MenuWnd_RequestRedraw();
    }
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xa5,1);
    if ((!bVar4) && (unaff_s1 == 3)) {
      if (*(int *)(param_1 + 0x684) == 1) {
        if (*(int *)(param_1 + 0x694) == 3) {
          *(undefined4 *)(param_1 + 0x660) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  MenuWnd_DrawText(0xa5,6,0x357);
  MenuWnd_DrawText(0xa5,9,*(undefined4 *)(&DAT_0032c528 + *(int *)(param_1 + 0x20) * 4));
  MenuWnd_DrawTextId(0xa5,5,4,0x44);
  uVar9 = Profile_Get(0);
  uVar9 = Profile_GetCurrentCar(uVar9);
  puVar7 = (undefined2 *)CarRec_GetPartSlotB(uVar9,0xf);
  uVar9 = Msg_PartInfo(*puVar7);
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetCurrentCar(uVar10);
  puVar7 = (undefined2 *)CarRec_GetPartSlotB(uVar10,0xf);
  uVar10 = Msg_MakerInfo(*puVar7);
  MenuWnd_DrawLabel(0xa5,7,0x45,uVar9,uVar10);
  uVar9 = Profile_Get(0);
  uVar9 = Profile_GetCurrentCar(uVar9);
  puVar7 = (undefined2 *)CarRec_GetPartSlotB(uVar9,0x10);
  uVar9 = Msg_PartInfo(*puVar7);
  uVar10 = Profile_Get(0);
  uVar10 = Profile_GetCurrentCar(uVar10);
  puVar7 = (undefined2 *)CarRec_GetPartSlotB(uVar10,0x10);
  uVar10 = Msg_MakerInfo(*puVar7);
  MenuWnd_DrawLabel(0xa5,8,0x45,uVar9,uVar10);
  MenuWnd_DrawText(7,0x2e,0x3a7);
  UiLayout_UpdateAnimById((UiLayout *)0xa2,0);
  iVar8 = UiMgr_FindLayout(0xa2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0xa5);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x0024f270  size 0x4ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_StartPractice(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  int iVar7;
  
  UiMgr_FindLayout(0xa0);
  iVar7 = (int)param_1;
  iVar3 = *(int *)(iVar7 + 0x65c);
  *(undefined4 *)(iVar7 + 0x65c) = 0;
  if (iVar3 != 0) {
    uVar6 = UiRes_GetLayoutData(0x1d7);
    iVar3 = UiMgr_FindLayout(0xa0);
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
    uVar5 = UiRes_GetLayoutData(0x1d8);
    iVar3 = UiMgr_FindLayout(0xa0);
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
    uVar5 = UiRes_GetLayoutData(0x297);
    iVar3 = UiMgr_FindLayout(0xa0);
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
    *(undefined4 *)(iVar7 + 0x680) = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  if (g_MenuMgr->prevScreen == 0xf) {
    iVar3 = UiMgr_FindLayout(0x9f);
    pUVar1 = g_UiMgr->slots;
    piVar4 = (int *)UiRes_GetLayoutData(0x28c);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar4);
    iVar3 = UiMgr_FindLayout(0x9f);
    pUVar1 = g_UiMgr->slots;
    piVar4 = (int *)UiRes_GetLayoutData(0x28e);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar4);
    iVar3 = UiMgr_FindLayout(0xa1);
    pUVar1 = g_UiMgr->slots;
    piVar4 = (int *)UiRes_GetLayoutData(0x295);
    UiLayout_PlayAnim(&pUVar1[iVar3].layout,piVar4);
    if ((*(int *)(iVar7 + 0x680) == 1) && (g_MenuMgr->nextScreen != 0xf)) {
      uVar5 = UiRes_GetLayoutData(0x1d8);
      iVar3 = UiMgr_FindLayout(0xa0);
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
      iVar3 = UiMgr_FindLayout(0xa0);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,(long)_s_ScrRace_Draw_StartPractice_1,8,
                          extraout_a3_lo);
      iVar3 = UiMgr_FindLayout(0xa0);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,(long)_s_ScrRace_Draw_StartPractice_2,8,
                          extraout_a3_lo_00);
      *(undefined4 *)(iVar7 + 0x680) = 0;
    }
    *(undefined4 *)(iVar7 + 0x658) = 0;
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa0,0);
  if (!bVar2) {
    *(undefined4 *)(iVar7 + 0x658) = 0;
  }
  if ((*(int *)(iVar7 + 0x660) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa0,1), !bVar2)) {
    *(undefined4 *)(iVar7 + 0x660) = 0;
  }
  MenuWnd_DrawText(0xa0,0x1c,0x39c);
  MenuWnd_DrawText(0xa0,0x1b,0x39d);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(*(int *)(iVar7 + 0x62c) * 4 + 0x36eb10));
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState
              (0xa0,*(undefined4 *)(&s_ScrRace_Draw_StartPractice_1 + *(int *)(iVar7 + 0x62c) * 4),1
               ,0);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa0,2);
  iVar3 = UiMgr_FindLayout(0xa0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  ScrRace_Draw_Interval(param_1);
  Subtitle_Draw();
  return;
}

// 0x0024f720  size 0x6a8
void ScrRace_Draw_SelectStartingPoint(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte extraout_a3_lo;
  UiLayout *pUVar8;
  int iVar9;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  UiMgr_FindLayout(0x79);
  iVar5 = UiMgr_FindLayout(0x9f);
  pUVar8 = &g_UiMgr->slots[iVar5].layout;
  UiMgr_FindLayout(0xa1);
  iVar9 = (int)param_1;
  iVar5 = *(int *)(iVar9 + 0x65c);
  *(undefined4 *)(iVar9 + 0x65c) = 0;
  if (iVar5 != 0) {
    uVar6 = UiRes_GetLayoutData(0x28c);
    iVar5 = UiMgr_FindLayout(0x9f);
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
    uVar7 = UiRes_GetLayoutData(0x28d);
    iVar5 = UiMgr_FindLayout(0x9f);
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
    uVar7 = UiRes_GetLayoutData(0x28e);
    iVar5 = UiMgr_FindLayout(0x9f);
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
    uVar7 = UiRes_GetLayoutData(0x28f);
    iVar5 = UiMgr_FindLayout(0x9f);
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
    uVar7 = UiRes_GetLayoutData(0x3f9);
    iVar5 = UiMgr_FindLayout(0x9f);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    uVar7 = UiRes_GetLayoutData(0x3fa);
    iVar5 = UiMgr_FindLayout(0x9f);
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
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x295);
    iVar5 = UiMgr_FindLayout(0xa1);
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
    uVar7 = UiRes_GetLayoutData(0x296);
    iVar5 = UiMgr_FindLayout(0xa1);
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
    Menu_ClearSlot(0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  if (*(int *)(iVar9 + 0x648) == 2) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x9f,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x9f,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xa1,0);
    if (!bVar4 && (!bVar2 && !bVar3)) {
      *(undefined4 *)(iVar9 + 0x658) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar9 + 0x658) = 0;
  }
  if (*(int *)(iVar9 + 0x660) != 0) {
    if (*(int *)(iVar9 + 0x650) != 2) {
      *(undefined4 *)(iVar9 + 0x660) = 0;
    }
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x9f,1);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x9f,3);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xa1,1);
    if (!bVar4 && (!bVar2 && !bVar3)) {
      *(undefined4 *)(iVar9 + 0x660) = 0;
    }
  }
  if (*g_MenuInput == 1) {
    if (*(int *)(iVar9 + 0xc) == -1) {
      MenuWnd_SetItemState(0x9f,*(undefined4 *)(&DAT_0032c4d0 + *(int *)(iVar9 + 0x62c) * 4),0,0);
      iVar5 = *(int *)(iVar9 + 0xc);
      goto LAB_0024f8a0;
    }
    MenuWnd_SetItemState(0x9f,*(undefined4 *)(&DAT_0032c500 + *(int *)(iVar9 + 0x62c) * 4),0,0);
  }
  iVar5 = *(int *)(iVar9 + 0xc);
LAB_0024f8a0:
  if (iVar5 == -1) {
    MenuWnd_DrawText(7,0x2e,0x398);
  }
  else {
    MenuWnd_DrawText(7,0x2e,0x399);
  }
  ScrRace_Draw_Interval(param_1);
  if (*(int *)(iVar9 + 0xc) == -1) {
    UiElem_SetPropFloat(pUVar8,0x7e,8,extraout_a3_lo);
    UiLayout_UpdateAnimById((UiLayout *)0x9f,4);
  }
  else {
    UiElem_SetPropFloat(pUVar8,0x7d,8,extraout_a3_lo);
    UiLayout_UpdateAnimById((UiLayout *)0x9f,5);
  }
  Subtitle_Draw();
  return;
}

// 0x0024fdd0  size 0x37e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Trickster(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte extraout_a3_lo;
  byte bVar16;
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
  byte extraout_a3_lo_23;
  byte extraout_a3_lo_24;
  byte extraout_a3_lo_25;
  byte extraout_a3_lo_26;
  byte extraout_a3_lo_27;
  byte extraout_a3_lo_28;
  byte extraout_a3_lo_29;
  byte extraout_a3_lo_30;
  byte extraout_a3_lo_31;
  byte extraout_a3_lo_32;
  byte extraout_a3_lo_33;
  byte extraout_a3_lo_34;
  byte extraout_a3_lo_35;
  byte extraout_a3_lo_36;
  byte extraout_a3_lo_37;
  byte extraout_a3_lo_38;
  byte extraout_a3_lo_39;
  byte extraout_a3_lo_40;
  byte extraout_a3_lo_41;
  byte extraout_a3_lo_42;
  byte extraout_a3_lo_43;
  byte extraout_a3_lo_44;
  byte extraout_a3_lo_45;
  byte extraout_a3_lo_46;
  byte extraout_a3_lo_47;
  byte extraout_a3_lo_48;
  byte extraout_a3_lo_49;
  byte extraout_a3_lo_50;
  byte extraout_a3_lo_51;
  byte extraout_a3_lo_52;
  byte extraout_a3_lo_53;
  byte extraout_a3_lo_54;
  byte extraout_a3_lo_55;
  byte extraout_a3_lo_56;
  byte extraout_a3_lo_57;
  byte extraout_a3_lo_58;
  byte extraout_a3_lo_59;
  byte extraout_a3_lo_60;
  byte extraout_a3_lo_61;
  byte extraout_a3_lo_62;
  byte extraout_a3_lo_63;
  byte extraout_a3_lo_64;
  byte extraout_a3_lo_65;
  byte extraout_a3_lo_66;
  byte extraout_a3_lo_67;
  byte extraout_a3_lo_68;
  byte extraout_a3_lo_69;
  UiLayout *pUVar17;
  UiLayout *pUVar18;
  int *piVar19;
  UiLayout *pUVar20;
  int iVar21;
  UiLayout *pUVar22;
  undefined1 auStack_4db0 [384];
  int aiStack_4c30 [20];
  undefined2 uStack_4be0;
  undefined2 uStack_4bde;
  undefined1 uStack_4bdc;
  undefined4 uStack_4bd8;
  undefined4 uStack_4bd4;
  undefined4 uStack_4bd0;
  undefined4 uStack_4bcc;
  undefined4 uStack_4bc8;
  undefined4 uStack_4bc4;
  undefined1 uStack_4bc0;
  undefined4 uStack_4bbc;
  undefined4 uStack_4bb8;
  undefined1 uStack_4bb4;
  undefined4 uStack_4bb0;
  undefined4 uStack_4bac;
  undefined2 uStack_4ba8;
  undefined2 uStack_4ba6;
  undefined4 uStack_4ba4;
  undefined4 uStack_4ba0;
  undefined4 auStack_4b9c [23];
  undefined4 auStack_4b40 [23];
  undefined4 auStack_4ae4 [16];
  undefined4 uStack_4aa4;
  undefined4 uStack_4aa0;
  undefined4 uStack_4a9c;
  undefined4 uStack_4a98;
  undefined4 uStack_4a94;
  undefined4 uStack_4a90;
  undefined4 uStack_4a8c;
  undefined4 uStack_4a88;
  undefined4 uStack_4a84;
  undefined4 uStack_4a80;
  undefined4 uStack_4a7c;
  undefined2 uStack_4a78;
  undefined4 uStack_4a74;
  undefined4 uStack_4a70;
  undefined4 uStack_4a6c;
  undefined4 uStack_4a68;
  undefined1 auStack_4a60 [384];
  undefined1 auStack_48e0 [384];
  undefined1 auStack_4760 [384];
  undefined1 auStack_45e0 [384];
  undefined1 auStack_4460 [384];
  undefined1 auStack_42e0 [384];
  undefined1 auStack_4160 [384];
  undefined1 auStack_3fe0 [384];
  undefined1 auStack_3e60 [384];
  undefined1 auStack_3ce0 [384];
  undefined1 auStack_3b60 [384];
  undefined1 auStack_39e0 [384];
  undefined1 auStack_3860 [384];
  undefined1 auStack_36e0 [384];
  int aiStack_3560 [20];
  undefined2 uStack_3510;
  undefined2 uStack_350e;
  undefined1 uStack_350c;
  undefined4 uStack_3508;
  undefined4 uStack_3504;
  undefined4 uStack_3500;
  undefined4 uStack_34fc;
  undefined4 uStack_34f8;
  undefined4 uStack_34f4;
  undefined1 uStack_34f0;
  undefined4 uStack_34ec;
  undefined4 uStack_34e8;
  undefined1 uStack_34e4;
  undefined4 uStack_34e0;
  undefined4 uStack_34dc;
  undefined2 uStack_34d8;
  undefined2 uStack_34d6;
  undefined4 uStack_34d4;
  undefined4 uStack_34d0;
  undefined4 auStack_34cc [23];
  undefined4 auStack_3470 [23];
  undefined4 auStack_3414 [16];
  undefined4 uStack_33d4;
  undefined4 uStack_33d0;
  undefined4 uStack_33cc;
  undefined4 uStack_33c8;
  undefined4 uStack_33c4;
  undefined4 uStack_33c0;
  undefined4 uStack_33bc;
  undefined4 uStack_33b8;
  undefined4 uStack_33b4;
  undefined4 uStack_33b0;
  undefined4 uStack_33ac;
  undefined2 uStack_33a8;
  undefined4 uStack_33a4;
  undefined4 uStack_33a0;
  undefined4 uStack_339c;
  undefined4 uStack_3398;
  undefined1 auStack_3390 [384];
  undefined1 auStack_3210 [384];
  undefined1 auStack_3090 [384];
  undefined1 auStack_2f10 [384];
  undefined1 auStack_2d90 [384];
  undefined1 auStack_2c10 [384];
  undefined1 auStack_2a90 [384];
  undefined1 auStack_2910 [384];
  undefined1 auStack_2790 [384];
  undefined1 auStack_2610 [384];
  undefined1 auStack_2490 [384];
  undefined1 auStack_2310 [384];
  undefined1 auStack_2190 [384];
  undefined1 auStack_2010 [384];
  int aiStack_1e90 [20];
  undefined2 uStack_1e40;
  undefined2 uStack_1e3e;
  undefined1 uStack_1e3c;
  undefined4 uStack_1e38;
  undefined4 uStack_1e34;
  undefined4 uStack_1e30;
  undefined4 uStack_1e2c;
  undefined4 uStack_1e28;
  undefined4 uStack_1e24;
  undefined1 uStack_1e20;
  undefined4 uStack_1e1c;
  undefined4 uStack_1e18;
  undefined1 uStack_1e14;
  undefined4 uStack_1e10;
  undefined4 uStack_1e0c;
  undefined2 uStack_1e08;
  undefined2 uStack_1e06;
  undefined4 uStack_1e04;
  undefined4 uStack_1e00;
  undefined4 auStack_1dfc [23];
  undefined4 auStack_1da0 [23];
  undefined4 auStack_1d44 [16];
  undefined4 uStack_1d04;
  undefined4 uStack_1d00;
  undefined4 uStack_1cfc;
  undefined4 uStack_1cf8;
  undefined4 uStack_1cf4;
  undefined4 uStack_1cf0;
  undefined4 uStack_1cec;
  undefined4 uStack_1ce8;
  undefined4 uStack_1ce4;
  undefined4 uStack_1ce0;
  undefined4 uStack_1cdc;
  undefined2 uStack_1cd8;
  undefined4 uStack_1cd4;
  undefined4 uStack_1cd0;
  undefined4 uStack_1ccc;
  undefined4 uStack_1cc8;
  undefined1 auStack_1cc0 [4];
  char cStack_1cbc;
  undefined1 auStack_1b40 [4];
  char cStack_1b3c;
  undefined1 auStack_19c0 [4];
  char cStack_19bc;
  undefined1 auStack_1840 [4];
  char cStack_183c;
  undefined1 auStack_16c0 [4];
  char cStack_16bc;
  undefined1 auStack_1540 [4];
  char cStack_153c;
  undefined1 auStack_13c0 [4];
  char cStack_13bc;
  undefined1 auStack_1240 [4];
  char cStack_123c;
  undefined1 auStack_10c0 [4];
  char cStack_10bc;
  undefined1 auStack_f40 [4];
  char cStack_f3c;
  undefined1 auStack_dc0 [4];
  char cStack_dbc;
  undefined1 auStack_c40 [4];
  char cStack_c3c;
  undefined1 auStack_ac0 [384];
  undefined1 auStack_940 [384];
  undefined1 auStack_7c0 [384];
  undefined1 auStack_640 [384];
  undefined2 uStack_4c0;
  undefined2 uStack_4be;
  undefined1 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined1 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined1 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined2 uStack_488;
  undefined2 uStack_486;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 auStack_47c [23];
  undefined4 auStack_420 [23];
  undefined4 auStack_3c4 [16];
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined2 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined2 uStack_340;
  undefined2 uStack_33e;
  undefined1 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined1 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined2 uStack_308;
  undefined2 uStack_306;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 auStack_2fc [23];
  undefined4 auStack_2a0 [23];
  undefined4 auStack_244 [16];
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1be;
  undefined1 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 auStack_17c [23];
  undefined4 auStack_120 [23];
  undefined4 auStack_c4 [16];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  iVar7 = UiMgr_FindLayout(0x84);
  pUVar20 = &g_UiMgr->slots[iVar7].layout;
  iVar8 = UiMgr_FindLayout(0x85);
  pUVar1 = g_UiMgr->slots;
  iVar7 = UiMgr_FindLayout(7);
  pUVar18 = &g_UiMgr->slots[iVar7].layout;
  iVar7 = UiMgr_FindLayout(0x86);
  pUVar17 = &g_UiMgr->slots[iVar7].layout;
  iVar9 = UiMgr_FindLayout(0x91);
  iVar21 = (int)param_1;
  iVar7 = *(int *)(iVar21 + 0x65c);
  pUVar2 = g_UiMgr->slots;
  *(undefined4 *)(iVar21 + 0x65c) = 0;
  pUVar22 = &pUVar2[iVar9].layout;
  bVar16 = extraout_a3_lo;
  if (iVar7 != 0) {
    uVar11 = UiRes_GetLayoutData(0x8b);
    iVar7 = UiMgr_FindLayout(0x84);
    pUVar2 = g_UiMgr->slots;
    maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,2);
    maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,2);
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x344 = uVar11;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    if (*(int *)(iVar21 + 0x648) == 1) {
      uVar10 = UiRes_GetLayoutData(0x8c);
      iVar7 = UiMgr_FindLayout(0x84);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
      pUVar2[iVar7].layout.unk_31c = uVar10;
      pUVar2[iVar7].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0x8d);
      iVar7 = UiMgr_FindLayout(0x84);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
      pUVar2[iVar7].layout.animState = 1;
      uVar11 = UiRes_GetLayoutData(0x8a);
      iVar7 = UiMgr_FindLayout(0x86);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
      pUVar2[iVar7].layout.animState = 1;
      uVar10 = UiRes_GetLayoutData(0x89);
      iVar7 = UiMgr_FindLayout(0x86);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
      pUVar2[iVar7].layout.unk_31c = uVar10;
      pUVar2[iVar7].layout.unk_318 = 1;
      uVar10 = UiRes_GetLayoutData(0x40d);
      iVar7 = UiMgr_FindLayout(0x91);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
      pUVar2[iVar7].layout.unk_31c = uVar10;
      pUVar2[iVar7].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0x40e);
      iVar7 = UiMgr_FindLayout(0x91);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
      pUVar2[iVar7].layout.animState = 1;
      uVar10 = UiRes_GetLayoutData(0x424);
      iVar7 = UiMgr_FindLayout(0x9d);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
      pUVar2[iVar7].layout.unk_31c = uVar10;
      pUVar2[iVar7].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0x425);
      iVar7 = UiMgr_FindLayout(0x9d);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
      pUVar2[iVar7].layout.animState = 1;
    }
    iVar7 = UiMgr_FindLayout(0x86);
    pUVar2 = g_UiMgr->slots;
    piVar19 = (int *)UiRes_GetLayoutData(0x89);
    UiLayout_PlayAnim(&pUVar2[iVar7].layout,piVar19);
    iVar7 = UiMgr_FindLayout(0x91);
    pUVar2 = g_UiMgr->slots;
    piVar19 = (int *)UiRes_GetLayoutData(0x40d);
    UiLayout_PlayAnim(&pUVar2[iVar7].layout,piVar19);
    uVar11 = UiRes_GetLayoutData(0x8a);
    iVar7 = UiMgr_FindLayout(0x86);
    pUVar2 = g_UiMgr->slots;
    maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
    maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
    pUVar2[iVar7].layout.animState = 1;
    uVar11 = UiRes_GetLayoutData(0x40e);
    iVar7 = UiMgr_FindLayout(0x91);
    pUVar2 = g_UiMgr->slots;
    maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
    maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
    pUVar2[iVar7].layout.animState = 1;
    uVar10 = UiRes_GetLayoutData(0x41b);
    iVar7 = UiMgr_FindLayout(0x9c);
    pUVar2 = g_UiMgr->slots;
    maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
    maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
    pUVar2[iVar7].layout.unk_31c = uVar10;
    pUVar2[iVar7].layout.unk_318 = 1;
    uVar11 = UiRes_GetLayoutData(0x41c);
    iVar7 = UiMgr_FindLayout(0x9c);
    pUVar2 = g_UiMgr->slots;
    maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
    maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
    pUVar2[iVar7].layout.animState = 1;
    uVar11 = UiRes_GetLayoutData(0x426);
    iVar7 = UiMgr_FindLayout(0x9d);
    pUVar2 = g_UiMgr->slots;
    maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,2);
    maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,2);
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x344 = uVar11;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    iVar7 = *(int *)(iVar21 + 0x648);
    if ((((iVar7 == 1) || (iVar7 == 0x26)) || (iVar7 == 0x18)) || (iVar7 == 0x27)) {
      Menu_ShowDialog(&g_MenuMgr->field_0x654,0x124,0);
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(pUVar18,0x25,8,extraout_a3_lo_02);
    bVar16 = extraout_a3_lo_03;
  }
  UiElem_SetPropFloat(pUVar18,0x25,8,bVar16);
  iVar7 = *(int *)(iVar21 + 0x648);
  if (((iVar7 == 0x16) || (iVar7 == 0x10)) ||
     ((iVar7 == 0xd || ((iVar7 == 0x22 || (iVar7 - 0x17U < 2)))))) {
    iVar7 = UiMgr_FindLayout(0x9d);
    pUVar2 = g_UiMgr->slots;
    piVar19 = (int *)UiRes_GetLayoutData(0x424);
    UiLayout_PlayAnim(&pUVar2[iVar7].layout,piVar19);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x86,0);
    bVar16 = extraout_a3_lo_04;
    if (!bVar3) {
      *(undefined4 *)(iVar21 + 0x658) = 0;
    }
  }
  else {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x86,0);
    bVar16 = extraout_a3_lo_00;
    if (!bVar3) {
      *(undefined4 *)(iVar21 + 0x658) = 0;
    }
  }
  if (*(int *)(iVar21 + 0x660) != 0) {
    iVar7 = *(int *)(iVar21 + 0x650);
    if ((((iVar7 == 0xc) || (iVar7 == 0xd)) || (iVar7 == 0x22)) || (iVar7 == 0x17)) {
      UiElem_SetPropFloat(pUVar18,0x25,8,bVar16);
      UiElem_SetPropFloat(pUVar18,0x24,8,extraout_a3_lo_05);
      *(undefined4 *)(iVar21 + 0x660) = 0;
      bVar16 = extraout_a3_lo_06;
    }
    else {
      if (iVar7 == 1) {
        UiLayout_UpdateAnimById((UiLayout *)0x9c,1);
      }
      UiLayout_UpdateAnimById((UiLayout *)0x86,1);
      *(undefined4 *)(iVar21 + 0x660) = 0;
      bVar16 = extraout_a3_lo_01;
    }
  }
  if ((*(int *)(iVar21 + 0x644) == 0) ||
     (*(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100) == -1)) {
    if (*(int *)(iVar21 + 0x668) == 1) {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x84,0);
      bVar16 = extraout_a3_lo_16;
      if (!bVar3) {
        *(undefined4 *)(iVar21 + 0x668) = 0;
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        uVar10 = UiRes_GetLayoutData(0x8c);
        iVar7 = UiMgr_FindLayout(0x84);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
        pUVar2[iVar7].layout.unk_31c = uVar10;
        pUVar2[iVar7].layout.unk_318 = 1;
        uVar10 = UiRes_GetLayoutData(0x89);
        iVar7 = UiMgr_FindLayout(0x86);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
        pUVar2[iVar7].layout.unk_31c = uVar10;
        pUVar2[iVar7].layout.unk_318 = 1;
        uVar11 = UiRes_GetLayoutData(0x8a);
        iVar7 = UiMgr_FindLayout(0x86);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
        pUVar2[iVar7].layout.animState = 1;
        uVar10 = UiRes_GetLayoutData(0x40d);
        iVar7 = UiMgr_FindLayout(0x91);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
        pUVar2[iVar7].layout.unk_31c = uVar10;
        pUVar2[iVar7].layout.unk_318 = 1;
        uVar11 = UiRes_GetLayoutData(0x40e);
        iVar7 = UiMgr_FindLayout(0x91);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
        pUVar2[iVar7].layout.animState = 1;
        bVar16 = extraout_a3_lo_17;
      }
    }
    else if ((*(int *)(iVar21 + 0x668) == 2) &&
            (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x84,1), bVar16 = extraout_a3_lo_11, !bVar3
            )) {
      *(undefined4 *)(iVar21 + 0x668) = 0;
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      uVar11 = UiRes_GetLayoutData(0x8d);
      iVar7 = UiMgr_FindLayout(0x84);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
      pUVar2[iVar7].layout.animState = 1;
      uVar10 = UiRes_GetLayoutData(0x89);
      iVar7 = UiMgr_FindLayout(0x86);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
      pUVar2[iVar7].layout.unk_31c = uVar10;
      pUVar2[iVar7].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0x8a);
      iVar7 = UiMgr_FindLayout(0x86);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
      pUVar2[iVar7].layout.animState = 1;
      uVar10 = UiRes_GetLayoutData(0x40d);
      iVar7 = UiMgr_FindLayout(0x91);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
      pUVar2[iVar7].layout.unk_31c = uVar10;
      pUVar2[iVar7].layout.unk_318 = 1;
      uVar11 = UiRes_GetLayoutData(0x40e);
      iVar7 = UiMgr_FindLayout(0x91);
      pUVar2 = g_UiMgr->slots;
      maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
      maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
      pUVar2[iVar7].layout.animState = 1;
      bVar16 = extraout_a3_lo_12;
    }
LAB_00250bc4:
    iVar7 = *(int *)(iVar21 + 0x668);
  }
  else {
    uStack_1c = DAT_0032c224;
    uStack_20 = DAT_0032c220;
    uStack_14 = DAT_0032c22c;
    uStack_18 = DAT_0032c228;
    uStack_c = DAT_0032c234;
    uStack_10 = DAT_0032c230;
    uStack_3c = DAT_0032c244;
    uStack_40 = DAT_0032c240;
    uStack_38 = DAT_0032c248;
    uStack_34 = DAT_0032c24c;
    uStack_30 = DAT_0032c250;
    uStack_2c = DAT_0032c254;
    iVar7 = UiMgr_FindLayout(0x9d);
    pUVar18 = &g_UiMgr->slots[iVar7].layout;
    UiElem_SetPropFloat(pUVar18,4,1,(byte)g_UiMgr);
    UiElem_SetPropFloat(pUVar18,4,2,extraout_a3_lo_07);
    if (*(int *)(iVar21 + 0x668) == 1) {
      RivalDb_Copy(auStack_640,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
      sVar5 = RivalRec_GetCourse(auStack_640);
      if (sVar5 == -1) {
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x84,0);
        bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x86,1);
        if (bVar3 || bVar4) goto LAB_00250cec;
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x86,0);
        if (bVar3) {
          iVar7 = *(int *)(iVar21 + 0x62c);
          goto LAB_00250cf0;
        }
LAB_00250d68:
        *(undefined4 *)(iVar21 + 0x668) = 0;
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        uVar10 = UiRes_GetLayoutData(0x8c);
        iVar7 = UiMgr_FindLayout(0x84);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
        pUVar2[iVar7].layout.unk_31c = uVar10;
        pUVar2[iVar7].layout.unk_318 = 1;
        uVar10 = UiRes_GetLayoutData(0x89);
        iVar7 = UiMgr_FindLayout(0x86);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
        pUVar2[iVar7].layout.unk_31c = uVar10;
        pUVar2[iVar7].layout.unk_318 = 1;
        uVar11 = UiRes_GetLayoutData(0x8a);
        iVar7 = UiMgr_FindLayout(0x86);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
        pUVar2[iVar7].layout.animState = 1;
        uVar10 = UiRes_GetLayoutData(0x40d);
        iVar7 = UiMgr_FindLayout(0x91);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
        pUVar2[iVar7].layout.unk_31c = uVar10;
        pUVar2[iVar7].layout.unk_318 = 1;
        uVar11 = UiRes_GetLayoutData(0x40e);
        iVar7 = UiMgr_FindLayout(0x91);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
        pUVar2[iVar7].layout.animState = 1;
      }
      else {
LAB_00250cec:
        iVar7 = *(int *)(iVar21 + 0x62c);
LAB_00250cf0:
        RivalDb_Copy(auStack_7c0,*(undefined2 *)(iVar7 * 4 + iVar21 + 0x100));
        sVar5 = RivalRec_GetCourse(auStack_7c0);
        if (sVar5 != -1) {
          bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x84,0);
          bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x91,1);
          if ((!bVar3 && !bVar4) && (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x91,0), !bVar3))
          goto LAB_00250d68;
        }
      }
      UiLayout_UpdateAnimById((UiLayout *)0x9d,0);
      bVar16 = extraout_a3_lo_15;
LAB_00250994:
      iVar7 = *(int *)(iVar21 + 0x644);
    }
    else {
      if (*(int *)(iVar21 + 0x668) != 2) {
        UiLayout_UpdateAnimById((UiLayout *)0x9d,2);
        bVar16 = extraout_a3_lo_09;
        goto LAB_00250994;
      }
      RivalDb_Copy(auStack_940,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
      sVar5 = RivalRec_GetCourse(auStack_940);
      if (sVar5 == -1) {
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x84,1);
        bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x86,1);
        if (bVar3 || bVar4) goto LAB_0025073c;
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x86,0);
        if (bVar3) {
          iVar7 = *(int *)(iVar21 + 0x62c);
          goto LAB_00250740;
        }
LAB_002507b8:
        *(undefined4 *)(iVar21 + 0x668) = 0;
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        uVar11 = UiRes_GetLayoutData(0x8d);
        iVar7 = UiMgr_FindLayout(0x84);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
        pUVar2[iVar7].layout.animState = 1;
        uVar10 = UiRes_GetLayoutData(0x89);
        iVar7 = UiMgr_FindLayout(0x86);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
        pUVar2[iVar7].layout.unk_31c = uVar10;
        pUVar2[iVar7].layout.unk_318 = 1;
        uVar11 = UiRes_GetLayoutData(0x8a);
        iVar7 = UiMgr_FindLayout(0x86);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
        pUVar2[iVar7].layout.animState = 1;
        uVar10 = UiRes_GetLayoutData(0x40d);
        iVar7 = UiMgr_FindLayout(0x91);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
        pUVar2[iVar7].layout.unk_31c = uVar10;
        pUVar2[iVar7].layout.unk_318 = 1;
        uVar11 = UiRes_GetLayoutData(0x40e);
        iVar7 = UiMgr_FindLayout(0x91);
        pUVar2 = g_UiMgr->slots;
        maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,1);
        maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,1);
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar11;
        pUVar2[iVar7].layout.animState = 1;
      }
      else {
LAB_0025073c:
        iVar7 = *(int *)(iVar21 + 0x62c);
LAB_00250740:
        RivalDb_Copy(auStack_ac0,*(undefined2 *)(iVar7 * 4 + iVar21 + 0x100));
        sVar5 = RivalRec_GetCourse(auStack_ac0);
        if (sVar5 != -1) {
          bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x84,1);
          bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x91,1);
          if ((!bVar3 && !bVar4) && (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x91,0), !bVar3))
          goto LAB_002507b8;
        }
      }
      UiLayout_UpdateAnimById((UiLayout *)0x9d,0);
      iVar7 = *(int *)(iVar21 + 0x644);
      bVar16 = extraout_a3_lo_08;
    }
    if (iVar7 != 1) goto LAB_00250bc4;
    iVar7 = UiMgr_FindLayout(0x9d);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    iVar7 = *(int *)(iVar21 + 0x668);
    bVar16 = extraout_a3_lo_10;
  }
  if (iVar7 == 0) {
    uVar10 = UiRes_GetLayoutData(0x424);
    iVar7 = UiMgr_FindLayout(0x9d);
    pUVar2 = g_UiMgr->slots;
    maybe_Trickster_ClearSlot(&pUVar2[iVar7].layout,0);
    maybe_Trickster_ResetSlot(&pUVar2[iVar7].layout,0);
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
    pUVar2[iVar7].layout.unk_31c = uVar10;
    pUVar2[iVar7].layout.unk_318 = 1;
    bVar16 = extraout_a3_lo_18;
  }
  if (*(int *)(iVar21 + 0x644) != 0) {
    if (*(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100) == -1) {
      UiElem_SetPropFloat(pUVar20,0xf,8,bVar16);
      bVar16 = extraout_a3_lo_13;
    }
    else {
      UiElem_SetPropFloat(pUVar20,0xf,8,bVar16);
      bVar16 = extraout_a3_lo_14;
    }
    UiElem_SetPropFloat(pUVar20,0xe,8,bVar16);
  }
  if (*(int *)(iVar21 + 0x668) == 1) {
    ScrCareer_Draw_Prize(param_1,*(undefined4 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100),0);
    ScrCareer_Draw_Prize(param_1,*(undefined4 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0xfc),1);
    iVar7 = *(int *)(iVar21 + 0x668);
  }
  else {
    iVar7 = *(int *)(iVar21 + 0x668);
  }
  if (iVar7 == 2) {
    ScrCareer_Draw_Prize(param_1,*(undefined4 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100),0);
    ScrCareer_Draw_Prize(param_1,*(undefined4 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104),1);
    iVar7 = *(int *)(iVar21 + 0x668);
  }
  else {
    iVar7 = *(int *)(iVar21 + 0x668);
  }
  if (iVar7 == 0) {
    if ((*(int *)(iVar21 + 0x648) == 1) || (*(int *)(iVar21 + 0x62c) == *(int *)(iVar21 + 0x6a4))) {
      ScrCareer_Draw_Prize(param_1,*(undefined4 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100),0)
      ;
    }
    else {
      ScrCareer_Draw_Prize(param_1,*(undefined4 *)(*(int *)(iVar21 + 0x6a4) * 4 + iVar21 + 0x100),0)
      ;
    }
  }
  uVar12 = Race_GetCourseVariant();
  uVar12 = MsgId_ForOption(uVar12);
  uVar12 = MsgId_ForSlot(uVar12,1);
  MenuWnd_DrawLabel(0x85,3,0x37d,1,uVar12);
  bVar16 = extraout_a3_lo_19;
  if (*(int *)(iVar21 + 0x644) == 0) {
LAB_0025188c:
    iVar7 = *(int *)(iVar21 + 0x644);
  }
  else {
    if (*(int *)(iVar21 + 0x668) == 0) {
      if ((*(int *)(iVar21 + 0x62c) < 0) ||
         (iVar7 = *(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100), iVar7 < 0)) {
LAB_00251538:
        iVar7 = *(int *)(iVar21 + 0x6a4);
        if ((((-1 < iVar7) && (iVar9 = *(int *)(iVar7 * 4 + iVar21 + 0x100), -1 < iVar9)) &&
            (*(int *)(iVar21 + 0x648) != 1)) && (*(int *)(iVar21 + 0x62c) != iVar7)) {
          uVar12 = Profile_Get(0);
          sVar5 = Profile_GetRivalBattleCount(uVar12,iVar9);
          bVar16 = extraout_a3_lo_34;
          if (0 < sVar5) {
            RivalDb_Copy(auStack_f40,*(undefined2 *)(*(int *)(iVar21 + 0x6a4) * 4 + iVar21 + 0x100))
            ;
            bVar16 = extraout_a3_lo_35;
            if ((cStack_f3c == '\x05') ||
               (RivalDb_Copy(auStack_10c0,
                             *(undefined2 *)(*(int *)(iVar21 + 0x6a4) * 4 + iVar21 + 0x100)),
               bVar16 = extraout_a3_lo_36, cStack_10bc == '\x06')) {
              UiElem_SetPropFloat(pUVar20,1,8,bVar16);
              bVar16 = extraout_a3_lo_38;
            }
            else {
              UiElem_SetPropFloat(pUVar20,1,8,extraout_a3_lo_36);
              bVar16 = extraout_a3_lo_37;
            }
            goto LAB_00251398;
          }
        }
        UiElem_SetPropFloat(pUVar20,1,8,bVar16);
        bVar16 = extraout_a3_lo_39;
      }
      else {
        uVar12 = Profile_Get(0);
        sVar5 = Profile_GetRivalBattleCount(uVar12,iVar7);
        bVar16 = extraout_a3_lo_20;
        if (sVar5 < 1) goto LAB_00251538;
        RivalDb_Copy(auStack_c40,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        bVar16 = extraout_a3_lo_21;
        if ((cStack_c3c == '\x05') ||
           (RivalDb_Copy(auStack_dc0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100))
           , bVar16 = extraout_a3_lo_22, cStack_dbc == '\x06')) {
          UiElem_SetPropFloat(pUVar20,1,8,bVar16);
          bVar16 = extraout_a3_lo_33;
        }
        else {
          UiElem_SetPropFloat(pUVar20,1,8,extraout_a3_lo_22);
          bVar16 = extraout_a3_lo_23;
        }
      }
LAB_00251398:
      UiElem_SetPropFloat(pUVar20,3,8,bVar16);
      bVar16 = extraout_a3_lo_24;
    }
    if (*(int *)(iVar21 + 0x668) == 1) {
      iVar7 = *(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100);
      if (iVar7 < 0) {
LAB_00251668:
        UiElem_SetPropFloat(pUVar20,1,8,bVar16);
        bVar16 = extraout_a3_lo_41;
LAB_00251468:
        iVar7 = *(int *)(iVar21 + 0x62c);
      }
      else {
        uVar12 = Profile_Get(0);
        sVar5 = Profile_GetRivalBattleCount(uVar12,iVar7);
        bVar16 = extraout_a3_lo_25;
        if (sVar5 < 1) goto LAB_00251668;
        RivalDb_Copy(auStack_1240,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        bVar16 = extraout_a3_lo_26;
        if ((cStack_123c != '\x05') &&
           (RivalDb_Copy(auStack_13c0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100)
                        ), bVar16 = extraout_a3_lo_27, cStack_13bc != '\x06')) {
          UiElem_SetPropFloat(pUVar20,1,8,extraout_a3_lo_27);
          bVar16 = extraout_a3_lo_28;
          goto LAB_00251468;
        }
        UiElem_SetPropFloat(pUVar20,1,8,bVar16);
        iVar7 = *(int *)(iVar21 + 0x62c);
        bVar16 = extraout_a3_lo_40;
      }
      iVar7 = *(int *)(iVar7 * 4 + iVar21 + 0xfc);
      if (iVar7 < 0) {
LAB_002516a0:
        UiElem_SetPropFloat(pUVar20,3,8,bVar16);
        bVar16 = extraout_a3_lo_43;
        goto LAB_002516b4;
      }
      uVar12 = Profile_Get(0);
      sVar5 = Profile_GetRivalBattleCount(uVar12,iVar7);
      bVar16 = extraout_a3_lo_29;
      if (sVar5 < 1) goto LAB_002516a0;
      RivalDb_Copy(auStack_1540,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0xfc));
      bVar16 = extraout_a3_lo_30;
      if ((cStack_153c == '\x05') ||
         (RivalDb_Copy(auStack_16c0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0xfc)),
         bVar16 = extraout_a3_lo_31, cStack_16bc == '\x06')) {
        UiElem_SetPropFloat(pUVar20,3,8,bVar16);
        bVar16 = extraout_a3_lo_42;
        goto LAB_002516b4;
      }
      UiElem_SetPropFloat(pUVar20,3,8,extraout_a3_lo_31);
      iVar7 = *(int *)(iVar21 + 0x668);
      bVar16 = extraout_a3_lo_32;
    }
    else {
LAB_002516b4:
      iVar7 = *(int *)(iVar21 + 0x668);
    }
    if (iVar7 != 2) goto LAB_0025188c;
    iVar7 = *(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100);
    if (iVar7 < 0) {
LAB_00251840:
      UiElem_SetPropFloat(pUVar20,1,8,bVar16);
      bVar16 = extraout_a3_lo_53;
LAB_00251770:
      iVar7 = *(int *)(iVar21 + 0x62c);
    }
    else {
      uVar12 = Profile_Get(0);
      sVar5 = Profile_GetRivalBattleCount(uVar12,iVar7);
      bVar16 = extraout_a3_lo_44;
      if (sVar5 < 1) goto LAB_00251840;
      RivalDb_Copy(auStack_1840,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
      bVar16 = extraout_a3_lo_45;
      if ((cStack_183c != '\x05') &&
         (RivalDb_Copy(auStack_19c0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100)),
         bVar16 = extraout_a3_lo_46, cStack_19bc != '\x06')) {
        UiElem_SetPropFloat(pUVar20,1,8,extraout_a3_lo_46);
        bVar16 = extraout_a3_lo_47;
        goto LAB_00251770;
      }
      UiElem_SetPropFloat(pUVar20,1,8,bVar16);
      iVar7 = *(int *)(iVar21 + 0x62c);
      bVar16 = extraout_a3_lo_52;
    }
    iVar7 = *(int *)(iVar7 * 4 + iVar21 + 0x104);
    if (iVar7 < 0) {
LAB_00251878:
      UiElem_SetPropFloat(pUVar20,3,8,bVar16);
      bVar16 = extraout_a3_lo_55;
      goto LAB_0025188c;
    }
    uVar12 = Profile_Get(0);
    sVar5 = Profile_GetRivalBattleCount(uVar12,iVar7);
    bVar16 = extraout_a3_lo_48;
    if (sVar5 < 1) goto LAB_00251878;
    RivalDb_Copy(auStack_1b40,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104));
    bVar16 = extraout_a3_lo_49;
    if ((cStack_1b3c == '\x05') ||
       (RivalDb_Copy(auStack_1cc0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104)),
       bVar16 = extraout_a3_lo_50, cStack_1cbc == '\x06')) {
      UiElem_SetPropFloat(pUVar20,1,8,bVar16);
      bVar16 = extraout_a3_lo_54;
      goto LAB_0025188c;
    }
    UiElem_SetPropFloat(pUVar20,3,8,extraout_a3_lo_50);
    iVar7 = *(int *)(iVar21 + 0x644);
    bVar16 = extraout_a3_lo_51;
  }
  if (iVar7 == 0) {
LAB_00251a68:
    iVar7 = *(int *)(iVar21 + 0x1c);
  }
  else {
    if (*(int *)(iVar21 + 0x668) == 0) {
      if (*(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100) < 0) {
        if ((*(int *)(iVar21 + 0x648) == 1) ||
           (*(int *)(iVar21 + 0x62c) == *(int *)(iVar21 + 0x6a4))) {
          UiElem_SetPropFloat(pUVar20,0,8,bVar16);
          bVar16 = extraout_a3_lo_69;
        }
        else {
          UiElem_SetPropFloat(pUVar20,0,8,bVar16);
          bVar16 = extraout_a3_lo_56;
        }
      }
      else {
        UiElem_SetPropFloat(pUVar20,0,8,bVar16);
        bVar16 = extraout_a3_lo_68;
      }
      UiElem_SetPropFloat(pUVar20,2,8,bVar16);
      bVar16 = extraout_a3_lo_57;
    }
    if (*(int *)(iVar21 + 0x668) == 1) {
      if (*(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100) < 0) {
        UiElem_SetPropFloat(pUVar20,0,8,bVar16);
        iVar7 = *(int *)(iVar21 + 0x62c);
        bVar16 = extraout_a3_lo_59;
      }
      else {
        UiElem_SetPropFloat(pUVar20,0,8,bVar16);
        iVar7 = *(int *)(iVar21 + 0x62c);
        bVar16 = extraout_a3_lo_58;
      }
      if (*(int *)(iVar7 * 4 + iVar21 + 0xfc) < 0) {
        UiElem_SetPropFloat(pUVar20,2,8,bVar16);
        bVar16 = extraout_a3_lo_61;
        goto LAB_002519b8;
      }
      UiElem_SetPropFloat(pUVar20,2,8,bVar16);
      iVar7 = *(int *)(iVar21 + 0x668);
      bVar16 = extraout_a3_lo_60;
    }
    else {
LAB_002519b8:
      iVar7 = *(int *)(iVar21 + 0x668);
    }
    if (iVar7 != 2) goto LAB_00251a68;
    if (*(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100) < 0) {
      UiElem_SetPropFloat(pUVar20,0,8,bVar16);
      iVar7 = *(int *)(iVar21 + 0x62c);
      bVar16 = extraout_a3_lo_63;
    }
    else {
      UiElem_SetPropFloat(pUVar20,0,8,bVar16);
      iVar7 = *(int *)(iVar21 + 0x62c);
      bVar16 = extraout_a3_lo_62;
    }
    if (*(int *)(iVar7 * 4 + iVar21 + 0x104) < 0) {
      UiElem_SetPropFloat(pUVar20,2,8,bVar16);
      goto LAB_00251a68;
    }
    UiElem_SetPropFloat(pUVar20,2,8,bVar16);
    iVar7 = *(int *)(iVar21 + 0x1c);
  }
  UiElem_SetPropInt(&pUVar1[iVar8].layout,1,9,iVar7);
  UiLayout_UpdateAnimById((UiLayout *)0x85,0);
  iVar7 = UiMgr_FindLayout(0x84);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x85);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  if (*(int *)(iVar21 + 0x668) == 1) {
    iVar7 = UiMgr_FindLayout(0x91);
    uVar10 = g_UiMgr->slots[iVar7].layout.animState;
    iVar7 = UiMgr_FindLayout(0x86);
    if (g_UiMgr->slots[iVar7].layout.animState != 1 || uVar10 != 1) goto LAB_00251af0;
    iVar7 = *(int *)(iVar21 + 0x62c) + -1;
  }
  else {
LAB_00251af0:
    if (*(int *)(iVar21 + 0x668) == 2) {
      iVar7 = UiMgr_FindLayout(0x91);
      uVar10 = g_UiMgr->slots[iVar7].layout.animState;
      iVar7 = UiMgr_FindLayout(0x86);
      if (g_UiMgr->slots[iVar7].layout.animState == 1 && uVar10 == 1) {
        iVar7 = *(int *)(iVar21 + 0x62c) + 1;
        goto LAB_00251b04;
      }
    }
    iVar7 = -1;
  }
LAB_00251b04:
  if (iVar7 < 0) {
LAB_00252314:
    if (((iVar7 == -1) && (-1 < *(int *)(iVar21 + 0x62c))) &&
       (iVar7 = *(int *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100), -1 < iVar7)) {
      RivalDb_Copy(&uStack_3510,(short)iVar7);
      puVar15 = auStack_34cc;
      puVar14 = auStack_2fc;
      iVar7 = 0x17;
      uStack_330 = uStack_3500;
      uStack_328 = uStack_34f8;
      uStack_324 = uStack_34f4;
      uStack_338 = uStack_3508;
      uStack_33c = uStack_350c;
      uStack_334 = uStack_3504;
      uStack_318 = uStack_34e8;
      uStack_340 = uStack_3510;
      uStack_33e = uStack_350e;
      uStack_32c = uStack_34fc;
      uStack_320 = uStack_34f0;
      uStack_31c = uStack_34ec;
      uStack_304 = uStack_34d4;
      uStack_314 = uStack_34e4;
      uStack_310 = uStack_34e0;
      uStack_30c = uStack_34dc;
      uStack_308 = uStack_34d8;
      uStack_306 = uStack_34d6;
      uStack_300 = uStack_34d0;
      do {
        iVar7 = iVar7 + -1;
        *puVar14 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar14 = puVar14 + 1;
      } while (0 < iVar7);
      puVar15 = auStack_3470;
      puVar14 = auStack_2a0;
      iVar7 = 0x17;
      do {
        iVar7 = iVar7 + -1;
        *puVar14 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar14 = puVar14 + 1;
      } while (0 < iVar7);
      puVar15 = auStack_3414;
      puVar14 = auStack_244;
      iVar7 = 8;
      do {
        iVar7 = iVar7 + -1;
        uVar11 = puVar15[1];
        *puVar14 = *puVar15;
        puVar14[1] = uVar11;
        puVar15 = puVar15 + 2;
        puVar14 = puVar14 + 2;
      } while (0 < iVar7);
      uStack_204 = uStack_33d4;
      uStack_200 = uStack_33d0;
      uStack_1fc = uStack_33cc;
      uStack_1f8 = uStack_33c8;
      uStack_1f4 = uStack_33c4;
      uStack_1d4 = uStack_33a4;
      uStack_1f0 = uStack_33c0;
      uStack_1d0 = uStack_33a0;
      uStack_1cc = uStack_339c;
      uStack_1d8 = uStack_33a8;
      uStack_1ec = uStack_33bc;
      uStack_1e8 = uStack_33b8;
      uStack_1e4 = uStack_33b4;
      uStack_1e0 = uStack_33b0;
      uStack_1c8 = uStack_3398;
      uStack_1dc = uStack_33ac;
      switch(uStack_350c) {
      case 0:
        RivalRec_IsValid(&uStack_340);
        break;
      case 2:
        UiElem_SetPropInt(pUVar17,1,0x16,0x44);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0x75);
        break;
      case 3:
        UiElem_SetPropInt(pUVar17,1,0x16,0x41);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0x76);
        break;
      case 4:
        UiElem_SetPropInt(pUVar17,1,0x16,0x3f);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0x77);
        break;
      case 5:
        UiElem_SetPropInt(pUVar17,1,0x16,0x40);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0xa3);
        break;
      case 6:
        UiElem_SetPropInt(pUVar17,1,0x16,0x40);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0xa4);
        break;
      case 7:
        iVar7 = 0;
        do {
          iVar8 = *(int *)(iVar21 + *(int *)(iVar21 + 0x62c) * 4 + 0x100);
          Rival_GetRecord(aiStack_3560,iVar7);
          if (iVar8 == aiStack_3560[0]) {
            UiElem_SetPropInt(pUVar17,1,0x16,*(int *)(&DAT_0032c330 + iVar7 * 4));
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x14);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0x78);
        break;
      case 8:
        UiElem_SetPropInt(pUVar17,1,0x16,0x43);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0x79);
        break;
      case 9:
        UiElem_SetPropInt(pUVar17,1,0x16,0x42);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0x7a);
        break;
      case 10:
        UiElem_SetPropInt(pUVar17,1,0x16,0x3e);
        iVar7 = UiMgr_FindLayout(0x86);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        MenuWnd_DrawText(0x86,2,0x7c);
        break;
      case 0xb:
        iVar7 = UiMgr_FindLayout(0x91);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0xc,8,extraout_a3_lo_66);
        iVar7 = UiMgr_FindLayout(0x91);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x11,8,extraout_a3_lo_67);
        RivalDb_Copy(auStack_36e0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        sVar5 = RivalRec_GetCourse(auStack_36e0);
        UiElem_SetPropInt(pUVar22,2,0x16,*(int *)(&DAT_0032c380 + sVar5 * 4));
        iVar7 = UiMgr_FindLayout(0x91);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
        RivalDb_Copy(auStack_3860,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        uVar6 = RivalRec_GetCourse(auStack_3860);
        uVar12 = MsgId_PartDescription(uVar6);
        MenuWnd_DrawText(0x91,0x14,uVar12);
        if (*(int *)(iVar21 + 0x668) == 1) {
          RivalDb_Copy(auStack_39e0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
          sVar5 = RivalRec_GetCourse(auStack_39e0);
          if (sVar5 != -1) {
            RivalDb_Copy(auStack_3b60,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100)
                        );
            uVar6 = RivalRec_GetCourse(auStack_3b60);
            uVar12 = Msg_TeamInfo(uVar6);
            uVar12 = Msg_MakerCountry(uVar12);
            RivalDb_Copy(auStack_3ce0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100)
                        );
            uVar6 = RivalRec_GetCourse(auStack_3ce0);
            uVar13 = Msg_TeamInfo(uVar6);
            uVar13 = Msg_MakerName(uVar13);
            MenuWnd_DrawLabel(0x84,_s_ScrCareer_Draw_Trickster_3,0x45,uVar12,uVar13);
          }
          RivalDb_Copy(auStack_3e60,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0xfc));
          sVar5 = RivalRec_GetCourse(auStack_3e60);
          if (sVar5 != -1) {
            RivalDb_Copy(auStack_3fe0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0xfc))
            ;
            uVar6 = RivalRec_GetCourse(auStack_3fe0);
            uVar12 = Msg_TeamInfo(uVar6);
            uVar12 = Msg_MakerCountry(uVar12);
            RivalDb_Copy(auStack_4160,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100)
                        );
            uVar6 = RivalRec_GetCourse(auStack_4160);
            uVar13 = Msg_TeamInfo(uVar6);
            uVar13 = Msg_MakerName(uVar13);
            MenuWnd_DrawLabel(0x84,_s_ScrCareer_Draw_Trickster_4,0x45,uVar12,uVar13);
          }
        }
        else if (*(int *)(iVar21 + 0x668) == 2) {
          RivalDb_Copy(auStack_42e0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
          sVar5 = RivalRec_GetCourse(auStack_42e0);
          if (sVar5 != -1) {
            RivalDb_Copy(auStack_4460,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100)
                        );
            uVar6 = RivalRec_GetCourse(auStack_4460);
            uVar12 = Msg_TeamInfo(uVar6);
            uVar12 = Msg_MakerCountry(uVar12);
            RivalDb_Copy(auStack_45e0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100)
                        );
            uVar6 = RivalRec_GetCourse(auStack_45e0);
            uVar13 = Msg_TeamInfo(uVar6);
            uVar13 = Msg_MakerName(uVar13);
            MenuWnd_DrawLabel(0x84,_s_ScrCareer_Draw_Trickster_3,0x45,uVar12,uVar13);
          }
          RivalDb_Copy(auStack_4760,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104));
          sVar5 = RivalRec_GetCourse(auStack_4760);
          if (sVar5 != -1) {
            RivalDb_Copy(auStack_48e0,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104)
                        );
            uVar6 = RivalRec_GetCourse(auStack_48e0);
            uVar12 = Msg_TeamInfo(uVar6);
            uVar12 = Msg_MakerCountry(uVar12);
            RivalDb_Copy(auStack_4a60,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104)
                        );
            uVar6 = RivalRec_GetCourse(auStack_4a60);
            uVar13 = Msg_TeamInfo(uVar6);
            uVar13 = Msg_MakerName(uVar13);
            MenuWnd_DrawLabel(0x84,_s_ScrCareer_Draw_Trickster_4,0x45,uVar12,uVar13);
          }
        }
        MenuWnd_DrawText(0x91,0x15,0x43a);
      }
    }
    goto switchD_00251cf4_caseD_1;
  }
  iVar8 = iVar7 * 4 + iVar21;
  piVar19 = (int *)(iVar8 + 0x100);
  iVar8 = *(int *)(iVar8 + 0x100);
  if (iVar8 < 0) goto LAB_00252314;
  RivalDb_Copy(&uStack_1e40,(short)iVar8);
  puVar15 = auStack_1dfc;
  puVar14 = auStack_17c;
  iVar7 = 0x17;
  uStack_1b0 = uStack_1e30;
  uStack_1a8 = uStack_1e28;
  uStack_1a4 = uStack_1e24;
  uStack_1b8 = uStack_1e38;
  uStack_1bc = uStack_1e3c;
  uStack_1b4 = uStack_1e34;
  uStack_198 = uStack_1e18;
  uStack_1c0 = uStack_1e40;
  uStack_1be = uStack_1e3e;
  uStack_1ac = uStack_1e2c;
  uStack_1a0 = uStack_1e20;
  uStack_19c = uStack_1e1c;
  uStack_184 = uStack_1e04;
  uStack_194 = uStack_1e14;
  uStack_190 = uStack_1e10;
  uStack_18c = uStack_1e0c;
  uStack_188 = uStack_1e08;
  uStack_186 = uStack_1e06;
  uStack_180 = uStack_1e00;
  do {
    iVar7 = iVar7 + -1;
    *puVar14 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar14 = puVar14 + 1;
  } while (0 < iVar7);
  puVar15 = auStack_1da0;
  puVar14 = auStack_120;
  iVar7 = 0x17;
  do {
    iVar7 = iVar7 + -1;
    *puVar14 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar14 = puVar14 + 1;
  } while (0 < iVar7);
  puVar15 = auStack_1d44;
  puVar14 = auStack_c4;
  iVar7 = 8;
  do {
    iVar7 = iVar7 + -1;
    uVar11 = puVar15[1];
    *puVar14 = *puVar15;
    puVar14[1] = uVar11;
    puVar15 = puVar15 + 2;
    puVar14 = puVar14 + 2;
  } while (0 < iVar7);
  uStack_84 = uStack_1d04;
  uStack_80 = uStack_1d00;
  uStack_7c = uStack_1cfc;
  uStack_78 = uStack_1cf8;
  uStack_74 = uStack_1cf4;
  uStack_54 = uStack_1cd4;
  uStack_70 = uStack_1cf0;
  uStack_50 = uStack_1cd0;
  uStack_4c = uStack_1ccc;
  uStack_58 = uStack_1cd8;
  uStack_6c = uStack_1cec;
  uStack_68 = uStack_1ce8;
  uStack_64 = uStack_1ce4;
  uStack_60 = uStack_1ce0;
  uStack_48 = uStack_1cc8;
  uStack_5c = uStack_1cdc;
  switch(uStack_1e3c) {
  case 0:
    RivalRec_IsValid(&uStack_1c0);
    iVar7 = *(int *)(iVar21 + 0x648);
    goto LAB_00252b50;
  case 2:
    UiElem_SetPropInt(pUVar17,1,0x16,0x44);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0x75);
    break;
  case 3:
    UiElem_SetPropInt(pUVar17,1,0x16,0x41);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0x76);
    break;
  case 4:
    UiElem_SetPropInt(pUVar17,1,0x16,0x3f);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0x77);
    break;
  case 5:
    UiElem_SetPropInt(pUVar17,1,0x16,0x40);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0xa3);
    break;
  case 6:
    UiElem_SetPropInt(pUVar17,1,0x16,0x40);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0xa4);
    break;
  case 7:
    iVar7 = 0;
    do {
      iVar8 = *piVar19;
      Rival_GetRecord(aiStack_1e90,iVar7);
      if (iVar8 == aiStack_1e90[0]) {
        UiElem_SetPropInt(pUVar17,1,0x16,*(int *)(&DAT_0032c260 + iVar7 * 4));
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0x78);
    break;
  case 8:
    UiElem_SetPropInt(pUVar17,1,0x16,0x43);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0x79);
    break;
  case 9:
    UiElem_SetPropInt(pUVar17,1,0x16,0x42);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0x7a);
    break;
  case 10:
    UiElem_SetPropInt(pUVar17,1,0x16,0x3e);
    iVar7 = UiMgr_FindLayout(0x86);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    MenuWnd_DrawText(0x86,2,0x7c);
    break;
  case 0xb:
    iVar7 = UiMgr_FindLayout(0x91);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0xc,8,extraout_a3_lo_64);
    iVar7 = UiMgr_FindLayout(0x91);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x11,8,extraout_a3_lo_65);
    RivalDb_Copy(auStack_2010,*(undefined2 *)piVar19);
    sVar5 = RivalRec_GetCourse(auStack_2010);
    UiElem_SetPropInt(pUVar22,2,0x16,*(int *)(&DAT_0032c2b0 + sVar5 * 4));
    iVar7 = UiMgr_FindLayout(0x91);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    RivalDb_Copy(auStack_2190,*(undefined2 *)piVar19);
    uVar6 = RivalRec_GetCourse(auStack_2190);
    uVar12 = MsgId_PartDescription(uVar6);
    MenuWnd_DrawText(0x91,0x14,uVar12);
    if (*(int *)(iVar21 + 0x668) == 1) {
      RivalDb_Copy(auStack_2310,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
      sVar5 = RivalRec_GetCourse(auStack_2310);
      if (sVar5 != -1) {
        RivalDb_Copy(auStack_2490,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        uVar6 = RivalRec_GetCourse(auStack_2490);
        uVar12 = Msg_TeamInfo(uVar6);
        uVar12 = Msg_MakerCountry(uVar12);
        RivalDb_Copy(auStack_2610,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        uVar6 = RivalRec_GetCourse(auStack_2610);
        uVar13 = Msg_TeamInfo(uVar6);
        uVar13 = Msg_MakerName(uVar13);
        MenuWnd_DrawLabel(0x84,_s_ScrCareer_Draw_Trickster_1,0x45,uVar12,uVar13);
      }
      RivalDb_Copy(auStack_2790,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0xfc));
      sVar5 = RivalRec_GetCourse(auStack_2790);
      if (sVar5 != -1) {
        RivalDb_Copy(auStack_2910,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0xfc));
        uVar6 = RivalRec_GetCourse(auStack_2910);
        uVar12 = Msg_TeamInfo(uVar6);
        uVar12 = Msg_MakerCountry(uVar12);
        RivalDb_Copy(auStack_2a90,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        uVar6 = RivalRec_GetCourse(auStack_2a90);
        uVar13 = Msg_TeamInfo(uVar6);
        uVar13 = Msg_MakerName(uVar13);
        MenuWnd_DrawLabel(0x84,_s_ScrCareer_Draw_Trickster_2,0x45,uVar12,uVar13);
      }
    }
    else if (*(int *)(iVar21 + 0x668) == 2) {
      RivalDb_Copy(auStack_2c10,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
      sVar5 = RivalRec_GetCourse(auStack_2c10);
      if (sVar5 != -1) {
        RivalDb_Copy(auStack_2d90,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        uVar6 = RivalRec_GetCourse(auStack_2d90);
        uVar12 = Msg_TeamInfo(uVar6);
        uVar12 = Msg_MakerCountry(uVar12);
        RivalDb_Copy(auStack_2f10,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x100));
        uVar6 = RivalRec_GetCourse(auStack_2f10);
        uVar13 = Msg_TeamInfo(uVar6);
        uVar13 = Msg_MakerName(uVar13);
        MenuWnd_DrawLabel(0x84,_s_ScrCareer_Draw_Trickster_1,0x45,uVar12,uVar13);
      }
      RivalDb_Copy(auStack_3090,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104));
      sVar5 = RivalRec_GetCourse(auStack_3090);
      if (sVar5 != -1) {
        RivalDb_Copy(auStack_3210,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104));
        uVar6 = RivalRec_GetCourse(auStack_3210);
        uVar12 = Msg_TeamInfo(uVar6);
        uVar12 = Msg_MakerCountry(uVar12);
        RivalDb_Copy(auStack_3390,*(undefined2 *)(*(int *)(iVar21 + 0x62c) * 4 + iVar21 + 0x104));
        uVar6 = RivalRec_GetCourse(auStack_3390);
        uVar13 = Msg_TeamInfo(uVar6);
        uVar13 = Msg_MakerName(uVar13);
        MenuWnd_DrawLabel(0x84,_s_ScrCareer_Draw_Trickster_2,0x45,uVar12,uVar13);
      }
    }
    MenuWnd_DrawText(0x91,0x15,0x43a);
  }
switchD_00251cf4_caseD_1:
  iVar7 = *(int *)(iVar21 + 0x648);
LAB_00252b50:
  if ((iVar7 != 1) && (*(int *)(iVar21 + 0x62c) != *(int *)(iVar21 + 0x6a4))) {
    RivalDb_Copy(&uStack_4be0,*(undefined2 *)(*(int *)(iVar21 + 0x6a4) * 4 + iVar21 + 0x100));
    puVar15 = auStack_4b9c;
    puVar14 = auStack_47c;
    iVar7 = 0x17;
    uStack_4b0 = uStack_4bd0;
    uStack_4a8 = uStack_4bc8;
    uStack_4a4 = uStack_4bc4;
    uStack_4b8 = uStack_4bd8;
    uStack_4bc = uStack_4bdc;
    uStack_4b4 = uStack_4bd4;
    uStack_498 = uStack_4bb8;
    uStack_4c0 = uStack_4be0;
    uStack_4be = uStack_4bde;
    uStack_4ac = uStack_4bcc;
    uStack_4a0 = uStack_4bc0;
    uStack_49c = uStack_4bbc;
    uStack_484 = uStack_4ba4;
    uStack_494 = uStack_4bb4;
    uStack_490 = uStack_4bb0;
    uStack_48c = uStack_4bac;
    uStack_488 = uStack_4ba8;
    uStack_486 = uStack_4ba6;
    uStack_480 = uStack_4ba0;
    do {
      iVar7 = iVar7 + -1;
      *puVar14 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (0 < iVar7);
    puVar15 = auStack_4b40;
    puVar14 = auStack_420;
    iVar7 = 0x17;
    do {
      iVar7 = iVar7 + -1;
      *puVar14 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (0 < iVar7);
    puVar15 = auStack_4ae4;
    puVar14 = auStack_3c4;
    iVar7 = 8;
    do {
      iVar7 = iVar7 + -1;
      uVar11 = puVar15[1];
      *puVar14 = *puVar15;
      puVar14[1] = uVar11;
      puVar15 = puVar15 + 2;
      puVar14 = puVar14 + 2;
    } while (0 < iVar7);
    uStack_384 = uStack_4aa4;
    uStack_380 = uStack_4aa0;
    uStack_37c = uStack_4a9c;
    uStack_378 = uStack_4a98;
    uStack_374 = uStack_4a94;
    uStack_354 = uStack_4a74;
    uStack_370 = uStack_4a90;
    uStack_350 = uStack_4a70;
    uStack_34c = uStack_4a6c;
    uStack_358 = uStack_4a78;
    uStack_36c = uStack_4a8c;
    uStack_368 = uStack_4a88;
    uStack_364 = uStack_4a84;
    uStack_360 = uStack_4a80;
    uStack_348 = uStack_4a68;
    uStack_35c = uStack_4a7c;
    switch(uStack_4bdc) {
    case 0:
      RivalRec_IsValid(&uStack_4c0);
      goto LAB_00253138;
    case 2:
      UiElem_SetPropInt(pUVar17,1,0x16,0x44);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0x75);
      break;
    case 3:
      UiElem_SetPropInt(pUVar17,1,0x16,0x41);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0x76);
      break;
    case 4:
      UiElem_SetPropInt(pUVar17,1,0x16,0x3f);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0x77);
      break;
    case 5:
      UiElem_SetPropInt(pUVar17,1,0x16,0x40);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0xa3);
      break;
    case 6:
      UiElem_SetPropInt(pUVar17,1,0x16,0x40);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0xa4);
      break;
    case 7:
      iVar7 = 0;
      do {
        iVar8 = *(int *)(iVar21 + *(int *)(iVar21 + 0x6a4) * 4 + 0x100);
        Rival_GetRecord(aiStack_4c30,iVar7);
        if (iVar8 == aiStack_4c30[0]) {
          UiElem_SetPropInt(pUVar17,1,0x16,*(int *)(&DAT_0032c400 + iVar7 * 4));
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x14);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0x78);
      break;
    case 8:
      UiElem_SetPropInt(pUVar17,1,0x16,0x43);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0x79);
      break;
    case 9:
      UiElem_SetPropInt(pUVar17,1,0x16,0x42);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0x7a);
      break;
    case 10:
      UiElem_SetPropInt(pUVar17,1,0x16,0x3e);
      iVar7 = UiMgr_FindLayout(0x86);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
      MenuWnd_DrawText(0x86,2,0x7c);
      break;
    case 0xb:
      RivalDb_Copy(auStack_4db0,*(undefined2 *)(*(int *)(iVar21 + 0x6a4) * 4 + iVar21 + 0x100));
      sVar5 = RivalRec_GetCourse(auStack_4db0);
      UiElem_SetPropInt(pUVar22,2,0x16,*(int *)(&DAT_0032c450 + sVar5 * 4));
      iVar7 = UiMgr_FindLayout(0x91);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
    }
  }
LAB_00253138:
  DAT_0032bf00 = 3;
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  uVar12 = Profile_Get(0);
  uVar12 = Profile_GetMoney(uVar12);
  MenuWnd_DrawNumber(0x9c,1,uVar12);
  iVar7 = UiMgr_FindLayout(0x9c);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

