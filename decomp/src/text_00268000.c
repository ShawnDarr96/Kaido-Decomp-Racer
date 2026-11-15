// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00268000 - 0x0026c000
#include "ghidra_types.h"

// 0x00268000  size 0x9c
/* menu page 34 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageMoney_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x3e);
  iVar3 = UiMgr_FindLayout(0x12);
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
  return;
}

// 0x002680a0  size 0x14
/* screen record 0x32786c */

void ScrDraw_ConquestMode_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x002680c0  size 0x1d8
void MenuScr_Draw_ConquestMode(int param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb9,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xb9,1);
  if (!bVar2 && !bVar3) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = g_MenuMgr->flags;
  if ((((uVar1 & 4) == 0) && (!bVar2 && !bVar3)) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
  }
  MenuWnd_DrawText(0xb9,0x32,0x1e80);
  MenuWnd_DrawText(0xb9,0x31,0x1e81);
  MenuWnd_DrawText(0xb9,0x30,0x1e82);
  MenuWnd_DrawText(0xb8,0x1b,*(undefined4 *)(&DAT_0032d760 + *(int *)(param_1 + 0x20) * 4));
  MenuWnd_SetItemState(0xb9,*(undefined4 *)(&DAT_0032d750 + *(int *)(param_1 + 0x20) * 4),1,0);
  UiLayout_UpdateAnimById((UiLayout *)0xb4,0);
  iVar4 = UiMgr_FindLayout(0xb4);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xb8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xb9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002682a0  size 0x1b4
/* screen record 0x32786c */

void ScrDraw_ConquestMode_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = UiRes_GetLayoutData(0x226);
  iVar3 = UiMgr_FindLayout(0xb4);
  pUVar1 = g_UiMgr->slots;
  if (pUVar1[iVar3].layout.unk_31c == 0) {
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
  }
  uVar2 = UiRes_GetLayoutData(0x21f);
  iVar3 = UiMgr_FindLayout(0xb9);
  pUVar1 = g_UiMgr->slots;
  if (pUVar1[iVar3].layout.unk_31c == 0) {
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
  }
  uVar4 = UiRes_GetLayoutData(0x220);
  iVar3 = UiMgr_FindLayout(0xb9);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
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
  }
  Menu_ClearSlot(0);
  return;
}

// 0x00268460  size 0x60c
void ScrGarage_Draw_ChangeCar(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  undefined4 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  MenuWnd_DrawLabel(0xe,0x96,0x3b,*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 0x20));
  MenuWnd_DrawText(0xe,0x97,0xfe);
  iVar17 = 0;
  puVar14 = &DAT_0032d7e0;
  iVar16 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x18);
  do {
    if (iVar17 == 7) {
      iVar16 = *(int *)(param_1 + 0x24);
    }
    if (iVar16 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0x20) <= iVar16) {
      return;
    }
    iVar7 = Profile_Get(*(undefined4 *)(param_1 + 0x10));
    uVar1 = *(undefined2 *)(iVar7 + iVar16 * 2 + 0x13ee);
    uVar12 = Profile_Get(*(undefined4 *)(param_1 + 0x10));
    uVar12 = Profile_GetCarRecordB(uVar12,uVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = MenuText_CarNameOrMaker(iVar16,uVar2);
    uVar9 = MenuText_CarGrade(iVar16,uVar2);
    uVar10 = MenuText_CarShortName(iVar16,uVar2);
    puVar15 = (undefined2 *)uVar12;
    fVar18 = *(float *)(puVar15 + 8);
    uVar3 = *(undefined4 *)(puVar15 + 6);
    uVar1 = *puVar15;
    iVar7 = CarDb_GetModel(uVar1);
    uVar13 = *(uint *)(iVar7 + 0x84);
    bVar4 = *(int *)(param_1 + 4) == iVar16;
    cVar5 = MenuText_CarName(iVar16,uVar2);
    sVar6 = CarRec_GetVariant(uVar12);
    iVar16 = iVar16 + 1;
    MenuWnd_DrawText(0xe,*puVar14,uVar8);
    MenuWnd_DrawText(0xe,puVar14[1],uVar9);
    MenuWnd_DrawText(0xe,puVar14[2],uVar10);
    MenuWnd_DrawLabel(0xe,puVar14[3],0x47,uVar3,(int)fVar18 / 100);
    MenuWnd_DrawNumber(0xe,puVar14[4],uVar13 / 1000);
    if (bVar4) {
      if ((*(int *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x38) == 0)) {
        iVar7 = UiMgr_FindLayout(0xe);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[5],8,extraout_a3_lo);
      }
    }
    else {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[5],8,extraout_a3_lo_02);
    }
    if (cVar5 == '\x04') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[6],0x16,7);
    }
    else if (cVar5 == '\x03') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[6],0x16,3);
    }
    else if (cVar5 == '\x02') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[6],0x16,6);
    }
    else if (cVar5 == '\x01') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[6],0x16,5);
    }
    else if (cVar5 == '\0') {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[6],0x16,4);
    }
    if (sVar6 == -1) {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[8],8,extraout_a3_lo_03);
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[7],8,extraout_a3_lo_04);
    }
    else {
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[8],8,extraout_a3_lo_00);
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)(int)puVar14[7],8,extraout_a3_lo_01);
      if ((-1 < sVar6) && (sVar6 < 0x1e)) {
        CarDb_GetPartEntry(auStack_8,uVar1,sVar6,0);
      }
      if ((sVar6 < 0x1e) || (0x2bd < sVar6)) {
        if ((0x2bd < sVar6) && (sVar6 < 0x55e)) {
          iVar7 = (int)sVar6;
          uVar13 = iVar7 - 0x2beU & 0xf;
          if (((int)(iVar7 - 0x2beU) < 0) && (uVar13 != 0)) {
            uVar13 = uVar13 - 0x10;
          }
          iVar11 = iVar7 + -0x2be;
          if (iVar11 < 0) {
            iVar11 = iVar7 + -0x2af;
          }
          CarPreview_GetPaletteColor(auStack_8,uVar13,iVar11 >> 4);
        }
      }
      else {
        iVar7 = (int)sVar6;
        uVar13 = iVar7 - 0x1eU & 0xf;
        if (((int)(iVar7 - 0x1eU) < 0) && (uVar13 != 0)) {
          uVar13 = uVar13 - 0x10;
        }
        iVar11 = iVar7 + -0x1e;
        if (iVar11 < 0) {
          iVar11 = iVar7 + -0xf;
        }
        CarPreview_GetColor(auStack_8,uVar13,iVar11 >> 4);
      }
      iVar7 = UiMgr_FindLayout(0xe);
      UiElem_Get(&g_UiMgr->slots[iVar7].layout,puVar14[7],(uint)bStack_5,(uint)bStack_4,
                 (uint)bStack_3);
    }
    iVar17 = iVar17 + 1;
    puVar14 = puVar14 + 9;
  } while (iVar17 < 8);
  return;
}

// 0x00268a70  size 0x118
/* entry 3 of state table 0x32d770 used by maybe_PageChangeCar_Update */

void maybe_PageChangeCar_State3(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar3 = *(int *)(iVar5 + 0x3c);
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  if (iVar3 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar4 = MenuWnd_DrawFooter(0x161,0xffffffffffffffff,0);
  if (*(int *)(iVar5 + 0x40) != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    bVar1 = UiLayout_UpdateAnimById((UiLayout *)0xf,2);
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf,3);
    if ((!bVar1 && !bVar2) && (lVar4 == 3)) {
      *(undefined4 *)(iVar5 + 0x40) = 0;
    }
  }
  if (lVar4 == 2) {
    *(undefined4 *)(iVar5 + 0x38) = 0;
  }
  ScrGarage_Draw_ChangeCar(param_1);
  UiLayout_UpdateAnimById((UiLayout *)0xe,6);
  iVar3 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00268b90  size 0xf8
void ScrGarage_Draw_ChangeToThis(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  iVar1 = puVar3[0xf];
  puVar3[0xf] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*puVar3,0x36ed18);
  MenuWnd_DrawLabel(5,0x1c,0x160);
  if (puVar3[0x10] != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      puVar3[0x10] = 0;
    }
  }
  if (lVar2 == 2) {
    puVar3[0xe] = 0;
  }
  ScrGarage_Draw_ChangeCar(param_1);
  UiLayout_UpdateAnimById((UiLayout *)0xe,6);
  iVar1 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00268c90  size 0x2a4
void ScrGarage_Draw_FfSort(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0x3c);
  *(undefined4 *)(iVar6 + 0x3c) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x25d);
    iVar3 = UiMgr_FindLayout(0xf);
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
    uVar5 = UiRes_GetLayoutData(0x25e);
    iVar3 = UiMgr_FindLayout(0xf);
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
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf,0);
  if (!bVar2) {
    *(undefined4 *)(iVar6 + 0x38) = 0;
  }
  if ((*(int *)(iVar6 + 0x40) != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf,1), !bVar2))
  {
    *(undefined4 *)(iVar6 + 0x40) = 0;
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0xf,*(undefined4 *)(&DAT_0032d7c0 + *(int *)(iVar6 + 8) * 4),1,0);
  }
  MenuWnd_DrawText(0xf,0x36,0x163);
  MenuWnd_DrawText(0xf,0x37,0x164);
  MenuWnd_DrawText(0xf,0x38,0x165);
  MenuWnd_DrawText(0xf,0x39,0x166);
  MenuWnd_DrawText(0xf,0x3a,0x167);
  MenuWnd_DrawText(0xf,0x3b,0x168);
  MenuWnd_DrawText(0xf,0x3c,0x169);
  ScrGarage_Draw_ChangeCar(param_1);
  UiLayout_UpdateAnimById((UiLayout *)0xe,6);
  iVar3 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00268f40  size 0x790
/* state of maybe_PageChangeCar; on-screen text/callee hint "FfSort" (was ScrFfSort_Enter) */

void maybe_PageChangeCar_State0_FfSort(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  int *piVar7;
  UiLayout *pUVar8;
  
  iVar4 = (int)param_1;
  iVar6 = *(int *)(iVar4 + 0x3c);
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(iVar4 + 0x20);
  }
  else {
    uVar5 = UiRes_GetLayoutData(600);
    iVar6 = UiMgr_FindLayout(0xe);
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
    uVar5 = UiRes_GetLayoutData(0x259);
    iVar6 = UiMgr_FindLayout(0xe);
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
    uVar5 = UiRes_GetLayoutData(0x25a);
    iVar6 = UiMgr_FindLayout(0xe);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(0x25b);
    iVar6 = UiMgr_FindLayout(0xe);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
    uVar5 = UiRes_GetLayoutData(0x25c);
    iVar6 = UiMgr_FindLayout(0xe);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x38c = 1;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x394 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x390 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xe,0x36ed10,2,0);
    iVar6 = *(int *)(iVar4 + 0x20);
  }
  MenuWnd_DrawCursor(7 < iVar6);
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe,1);
  if (!bVar2 && !bVar3) {
    *(undefined4 *)(iVar4 + 0x38) = 0;
  }
  if (*(int *)(iVar4 + 0x40) != 0) {
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
    if (g_MenuMgr->curScreen == g_MenuMgr->nextScreen) {
      *(undefined4 *)(iVar4 + 0x40) = 0;
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe,3);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(iVar4 + 0x40) = 0;
      }
    }
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(0xe,*(undefined4 *)(&DAT_0032d780 + *(int *)(iVar4 + 0x18) * 4),1,0);
    iVar6 = *(int *)(iVar4 + 0x1c);
  }
  else {
    iVar6 = *(int *)(iVar4 + 0x1c);
  }
  if (iVar6 == 2) {
    Menu_ClearSlot(0);
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe,5);
    if (bVar2) {
      *(int *)(iVar4 + 0x24) =
           (*(int *)(iVar4 + 0x20) + (*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 0x18)) + 7) %
           *(int *)(iVar4 + 0x20);
    }
    else {
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      iVar6 = UiMgr_FindLayout(0xe);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x370 = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x380 == 0) {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else if (iVar6 == 1) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe,4);
    if (bVar2) {
      *(int *)(iVar4 + 0x24) =
           (*(int *)(iVar4 + 0x20) + (*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 0x18)) + -1) %
           *(int *)(iVar4 + 0x20);
    }
    else {
      Menu_ClearSlot(0);
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      iVar6 = UiMgr_FindLayout(0xe);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x35c = 0;
      if (*(int *)&pUVar1[iVar6].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x24) = 0xffffffff;
  }
  if (*(int *)(iVar4 + 0x20) == (*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 0x18)) + 7) {
    iVar6 = UiMgr_FindLayout(0xe);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0xcb,8,extraout_a3_lo_04);
    iVar6 = *(int *)(iVar4 + 0xc);
  }
  else {
    iVar6 = *(int *)(iVar4 + 0xc);
  }
  if (iVar6 == *(int *)(iVar4 + 0x18)) {
    iVar6 = UiMgr_FindLayout(0xe);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,0xca,8,extraout_a3_lo);
  }
  ScrGarage_Draw_ChangeCar(param_1);
  iVar6 = UiMgr_FindLayout(0xe);
  pUVar8 = &g_UiMgr->slots[iVar6].layout;
  if (*(int *)(iVar4 + 0x20) < 8) {
    UiElem_SetPropFloat(pUVar8,3,2,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar8,3,6,extraout_a3_lo_05);
  }
  else {
    UiElem_SetPropFloat(pUVar8,3,2,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar8,3,6,extraout_a3_lo_01);
  }
  iVar6 = UiMgr_FindLayout(0xe);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,4,8,extraout_a3_lo_02);
  iVar6 = *(int *)(iVar4 + 0x20);
  if (iVar6 < 7) {
    piVar7 = (int *)(&DAT_0032d7a0 + iVar6 * 4);
    do {
      iVar4 = UiMgr_FindLayout(0xe);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_03);
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < 7);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xe,6);
  iVar6 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002696d0  size 0x58
/* menu page 35 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageChangeCar_Exit(void)

{
  int iVar1;
  byte extraout_a3_lo;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x25,8,extraout_a3_lo);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00269730  size 0x120
/* menu page 35 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageChangeCar_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_maybe_PageChangeCar_State0_FfSort_0032d770)[*(int *)((int)param_1 + 0x2c)])
            (param_1);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar1].layout,2);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle((int)param_1 + 0x28), lVar2 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00269850  size 0x200
/* menu page 35 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageChangeCar_Enter(void)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  byte extraout_a3_lo;
  
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  piVar3 = (int *)UiRes_GetLayoutData(0x7c);
  UiLayout_PlayAnim(&pUVar1[iVar2].layout,piVar3);
  uVar4 = UiRes_GetLayoutData(0x7e);
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
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
  }
  iVar2 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x25,8,extraout_a3_lo);
  uVar5 = UiRes_GetLayoutData(0x256);
  iVar2 = UiMgr_FindLayout(0xe);
  pUVar1 = g_UiMgr->slots;
  pUVar1[iVar2].layout.unk_310 = 0xffffffff;
  pUVar1[iVar2].layout.unk_31c = 0;
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
  pUVar1[iVar2].layout.unk_31c = uVar5;
  pUVar1[iVar2].layout.unk_318 = 1;
  uVar4 = UiRes_GetLayoutData(599);
  iVar2 = UiMgr_FindLayout(0xe);
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
  return;
}

// 0x00269a50  size 0xbc
/* screen record 0x327890 */

void ScrShortcutMenu_Exit(void)

{
  int iVar1;
  
  Menu_ClearSlot(0);
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar1].layout,10,10,0x13);
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar1].layout,0xb,10,0x13);
  iVar1 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar1].layout,0xc,10,0x13);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00269b10  size 0x328
void ScrRace_Draw_ShortcutMenu(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  byte extraout_a3_lo;
  
  bVar1 = UiLayout_UpdateAnimById((UiLayout *)0x9,0);
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa,0);
  if (!bVar1 && !bVar2) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
    if (*param_1 == 1) {
      *param_1 = 0;
      Menu_ClearSlot(0);
    }
  }
  if (*g_MenuInput == 1) {
    MenuWnd_SetItemState(9,*(undefined4 *)(&DAT_0032d900 + param_1[2] * 4),1,0);
  }
  if ((g_MenuMgr->flags & 0x10000) == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  MenuWnd_DrawTextId(9,0x13,uVar4,0xee);
  if ((g_MenuMgr->flags & 0x8000) == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  MenuWnd_DrawTextId(9,0x14,uVar4,0xfd);
  if ((g_MenuMgr->flags & 0x4000) == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  MenuWnd_DrawTextId(9,0x15,uVar4,0xfe);
  MenuWnd_DrawText(9,0x16,0x101);
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar3].layout,2);
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(10);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetMoney(uVar4);
  MenuWnd_DrawNumber(10,1,uVar4);
  iVar3 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,0x25,8,extraout_a3_lo);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if ((g_MenuMgr->flags & 4) == 0) {
    bVar1 = UiLayout_UpdateAnimById((UiLayout *)0x9,1);
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xa,1);
    if (!bVar1 && !bVar2) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
  }
  return;
}

// 0x00269e40  size 0x4a0
/* screen record 0x327890 */

void ScrShortcutMenu_Enter(undefined4 *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *param_1 = 1;
  iVar2 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,10,10,3);
  iVar2 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0xb,10,3);
  iVar2 = UiMgr_FindLayout(8);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0xc,10,3);
  uVar3 = UiRes_GetLayoutData(0x7c);
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  pUVar1[iVar2].layout.unk_310 = 0xffffffff;
  pUVar1[iVar2].layout.unk_31c = 0;
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
  pUVar1[iVar2].layout.unk_31c = uVar3;
  pUVar1[iVar2].layout.unk_318 = 1;
  uVar4 = UiRes_GetLayoutData(0x7d);
  iVar2 = UiMgr_FindLayout(8);
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
  uVar4 = UiRes_GetLayoutData(0x7e);
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
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
  }
  uVar3 = UiRes_GetLayoutData(0x7f);
  iVar2 = UiMgr_FindLayout(9);
  pUVar1 = g_UiMgr->slots;
  pUVar1[iVar2].layout.unk_310 = 0xffffffff;
  pUVar1[iVar2].layout.unk_31c = 0;
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
  pUVar1[iVar2].layout.unk_31c = uVar3;
  pUVar1[iVar2].layout.unk_318 = 1;
  uVar4 = UiRes_GetLayoutData(0x80);
  iVar2 = UiMgr_FindLayout(9);
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
  uVar4 = UiRes_GetLayoutData(0x81);
  iVar2 = UiMgr_FindLayout(9);
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
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar4;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
  uVar3 = UiRes_GetLayoutData(0x42b);
  iVar2 = UiMgr_FindLayout(10);
  pUVar1 = g_UiMgr->slots;
  pUVar1[iVar2].layout.unk_310 = 0xffffffff;
  pUVar1[iVar2].layout.unk_31c = 0;
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  pUVar1[iVar2].layout.unk_30c = 0;
  if (pUVar1[iVar2].layout.unk_31c == 0) {
    pUVar1[iVar2].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar2].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
  pUVar1[iVar2].layout.unk_31c = uVar3;
  pUVar1[iVar2].layout.unk_318 = 1;
  uVar4 = UiRes_GetLayoutData(0x42c);
  iVar2 = UiMgr_FindLayout(10);
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
  return;
}

// 0x0026a2e0  size 0x1f4
undefined4 maybe_Tune_GetPartGroup(short param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (8 < param_1)) {
    if ((param_1 < 9) || (0x11 < param_1)) {
      if ((param_1 < 0x12) || (0x1a < param_1)) {
        if ((param_1 < 0x1b) || (0x23 < param_1)) {
          if ((param_1 < 0x2a) || (0x32 < param_1)) {
            if ((param_1 < 0x33) || (0x3b < param_1)) {
              if ((param_1 < 0x3c) || (0x44 < param_1)) {
                if ((param_1 < 0x45) || (0x4d < param_1)) {
                  if ((param_1 < 0x68) || (0x6a < param_1)) {
                    if ((param_1 < 0x6b) || (0x6d < param_1)) {
                      if ((param_1 < 0x6e) || (0x70 < param_1)) {
                        if ((param_1 < 0x8e) || (0x92 < param_1)) {
                          if ((param_1 < 0x93) || (0x97 < param_1)) {
                            if ((param_1 < 0x98) || (0x9c < param_1)) {
                              if ((param_1 < 0x9d) || (0xa1 < param_1)) {
                                uVar1 = 0xffffffff;
                              }
                              else {
                                uVar1 = 0x9d6;
                              }
                            }
                            else {
                              uVar1 = 0x9d5;
                            }
                          }
                          else {
                            uVar1 = 0x9d4;
                          }
                        }
                        else {
                          uVar1 = 0x9d3;
                        }
                      }
                      else {
                        uVar1 = 0x9ce;
                      }
                    }
                    else {
                      uVar1 = 0x9cd;
                    }
                  }
                  else {
                    uVar1 = 0x9cc;
                  }
                }
                else {
                  uVar1 = 0x9d2;
                }
              }
              else {
                uVar1 = 0x9d1;
              }
            }
            else {
              uVar1 = 0x9d0;
            }
          }
          else {
            uVar1 = 0x9cf;
          }
        }
        else {
          uVar1 = 0x9d2;
        }
      }
      else {
        uVar1 = 0x9d1;
      }
    }
    else {
      uVar1 = 0x9d0;
    }
  }
  else {
    uVar1 = 0x9cf;
  }
  return uVar1;
}

// 0x0026a4e0  size 0x150
void maybe_CarStatus_ResetBars(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_0032d940 != -1) {
    piVar3 = &DAT_0032d940;
    do {
      *piVar3 = (int)param_1;
      piVar3 = piVar3 + 10;
    } while (*piVar3 != -1);
  }
  iVar2 = UiMgr_FindLayout(0xda);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_1,8,(byte)g_UiMgr);
  iVar2 = UiMgr_FindLayout(0xda);
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
  iVar2 = UiMgr_FindLayout(0xda);
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
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x3c8 = 1;
  *(int **)&pUVar1[iVar2].layout.field_0x3d0 = &DAT_0032d940;
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x3cc = 1;
  return;
}

// 0x0026a630  size 0x350
void MenuNum_CountUp_Tune
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
               ulong param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  
  if (param_6 < param_5) {
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    if ((float)(param_4 + 0x10) <
        (float)((int)(param_7 * param_4) / (int)param_5 + 0x10) + (float)uVar1) {
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo);
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(&g_UiMgr->slots[iVar2].layout,param_3,2,0x10);
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,6,0);
    }
    else {
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo_02);
    }
  }
  else {
    iVar2 = UiMgr_FindLayout(param_1);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo_01);
  }
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,2,extraout_a3_lo_00);
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,6,(byte)g_UiMgr);
  return;
}

// 0x0026a980  size 0x3fc
void ScrGarage_Draw_FullAero_a980(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar2 = Profile_Get(0);
  MenuWnd_DrawTextId(0xdf,0x2c,1,0x243);
  MenuWnd_DrawTextId(0xdf,0x20,4,0x98d);
  uVar3 = Profile_Get(0);
  uVar4 = Profile_GetCarPartSlot(uVar3,*(undefined4 *)(param_1 + 0x24),0xc);
  uVar3 = Profile_GetCarRecordB(uVar3,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar3,0xc);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = 0x24d;
  }
  uVar4 = maybe_Tune_GetPartGroup(uVar4);
  uVar5 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x26,0x24e,uVar4,uVar5,uVar3);
  MenuWnd_DrawTextId(0xdf,0x21,4,0x98f);
  uVar2 = Profile_GetCarRecord(uVar2,*(undefined4 *)(param_1 + 0x24));
  lVar6 = CarRec_GetGrade(uVar2);
  if (lVar6 == 0) {
    MenuWnd_DrawText(0xdf,0x27,0x9b2);
  }
  else {
    MenuWnd_DrawText(0xdf,0x27,0x98f);
  }
  MenuWnd_DrawTextId(0xdf,0x22,4,0x991);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x12);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x12);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x28,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdf,0x23,4,0x992);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x11);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x11);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x29,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdf,0x24,4,0x993);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x13);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x13);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x2a,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdf,0x25,4,0x994);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x14);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x14);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdf,0x2b,0x24e,uVar3,uVar4,uVar2);
  iVar1 = UiMgr_FindLayout(0xdf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x0026ad80  size 0x464
void ScrGarage_Draw_BodyTune(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Profile_Get(0);
  MenuWnd_DrawTextId(0xde,0x33,1,0x240);
  MenuWnd_DrawTextId(0xde,0x27,4,0x98a);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),10);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,10);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x2d,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x28,4,0x98b);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0xb);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0xb);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x2e,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x34,1,0x241);
  MenuWnd_DrawTextId(0xde,0x29,4,0x247);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0xf);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0xf);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x2f,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x2a,4,0x248);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0x10);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0x10);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x30,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x35,1,0x242);
  MenuWnd_DrawTextId(0xde,0x2b,4,0x247);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0xd);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0xd);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x31,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xde,0x2c,4,0x248);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0xe);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0xe);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xde,0x32,0x24e,uVar3,uVar4,uVar2);
  iVar1 = UiMgr_FindLayout(0xde);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x0026b1f0  size 0x6d0
void ScrGarage_Draw_PowerTune(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Profile_Get(0);
  MenuWnd_DrawTextId(0xdd,0x36,1,0x23e);
  MenuWnd_DrawTextId(0xdd,0x24,4,0x980);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),0);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,0);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x2c,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x25,4,0x981);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),2);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,2);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x2d,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x26,4,0x982);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),1);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,1);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x2e,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x27,4,0x983);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),3);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,3);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x2f,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x28,4,0x984);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),4);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,4);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x30,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x37,1,0x23f);
  MenuWnd_DrawTextId(0xdd,0x29,4,0x985);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),5);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,5);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x31,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x2a,4,0x986);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),6);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,6);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x32,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x2b,4,0x987);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),7);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,7);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x33,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x34,4,0x988);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),8);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,8);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x35,0x24e,uVar3,uVar4,uVar2);
  MenuWnd_DrawTextId(0xdd,0x38,4,0x989);
  uVar2 = Profile_Get(0);
  uVar3 = Profile_GetCarPartSlot(uVar2,*(undefined4 *)(param_1 + 0x24),9);
  uVar2 = Profile_GetCarRecordB(uVar2,*(undefined4 *)(param_1 + 0x24));
  iVar1 = CarRec_GetPartSlotB(uVar2,9);
  if ((*(char *)(iVar1 + 2) < '\0') || ('\x1d' < *(char *)(iVar1 + 2))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0x24d;
  }
  uVar3 = maybe_Tune_GetPartGroup(uVar3);
  uVar4 = Msg_MakerInfo();
  MenuWnd_DrawLabel(0xdd,0x39,0x24e,uVar3,uVar4,uVar2);
  iVar1 = UiMgr_FindLayout(0xdd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x0026b8c0  size 0x464
void MenuScr_Select_CarStatus(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,2);
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_DrawText(0xd9,1,0xfd);
  iVar2 = UiMgr_FindLayout(0xd9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  bVar1 = *(byte *)(param_1 + 4);
  iVar2 = 0;
  if (bVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      uVar5 = *(uint *)(param_1 + 8);
      goto LAB_0026b9ac;
    default:
      iVar2 = 1;
      break;
    case 5:
      iVar2 = 2;
    }
  }
  uVar5 = *(uint *)(param_1 + 8);
LAB_0026b9ac:
  lVar7 = 0;
  if (bVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      break;
    default:
      lVar7 = 1;
      break;
    case 5:
      lVar7 = 2;
    }
  }
  lVar6 = 0;
  if ((uVar5 & 0xff) < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar5 & 0xff) {
    case 0:
      break;
    default:
      lVar6 = 1;
      break;
    case 5:
      lVar6 = 2;
    }
  }
  if (lVar7 == lVar6) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x2fc) != iVar2) {
        iVar3 = *(int *)(&DAT_0032d928 + *(int *)(param_1 + 0x2fc) * 4);
        iVar4 = UiMgr_FindLayout(0xda);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)iVar3,8,extraout_a3_lo_04);
        maybe_CarStatus_ResetBars(*(undefined4 *)(&DAT_0032d928 + iVar2 * 4));
        *(int *)(param_1 + 0x2fc) = iVar2;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar3 = UiMgr_FindLayout(0xda);
        UiLayout_UpdateAnim(&g_UiMgr->slots[iVar3].layout,9);
      }
    }
  }
  else {
    iVar3 = *(int *)(&DAT_0032d928 + iVar2 * 4);
    iVar4 = UiMgr_FindLayout(0xda);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)iVar3,8,extraout_a3_lo_03);
  }
  lVar7 = MenuMgr_Goto();
  if (lVar7 == 0) {
    if (iVar2 == 0) {
      iVar3 = UiMgr_FindLayout(0xda);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,7,8,extraout_a3_lo);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xda);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,7,8,extraout_a3_lo_00);
    }
    if (iVar2 == 2) {
      iVar2 = UiMgr_FindLayout(0xda);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,8,8,extraout_a3_lo_01);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xda);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,8,8,extraout_a3_lo_02);
    }
  }
  else {
    iVar2 = UiMgr_FindLayout(0xda);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,7,8,extraout_a3_lo_05);
    iVar2 = UiMgr_FindLayout(0xda);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,8,8,extraout_a3_lo_06);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xda,2);
  UiLayout_UpdateAnimById((UiLayout *)0xda,3);
  MenuWnd_DrawText(0xda,9,0x23b);
  MenuWnd_DrawText(0xda,10,0x23c);
  MenuWnd_DrawText(0xda,0xb,0x23d);
  iVar2 = UiMgr_FindLayout(0xda);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x0026bd30  size 0x138
/* state of MenuPage37; on-screen text/callee hint "GarageDrawFullAero" (was
   ScrScrGarageDrawFullAeroa980_Exit) */

void maybe_PageAero_State5_GarageDrawFullAero(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0x14);
  *(undefined4 *)(iVar4 + 0x14) = 0;
  if (iVar2 == 0) {
    cVar1 = *(char *)(iVar4 + 0x30);
  }
  else {
    MenuWnd_DrawHelp();
    cVar1 = *(char *)(iVar4 + 0x30);
  }
  if (cVar1 == '\x02') {
    MenuMgr_LockInput(0);
    *(undefined1 *)(iVar4 + 0x30) = 0;
  }
  else {
    if (cVar1 != '\x01') {
      iVar2 = *(int *)(iVar4 + 0x2f8);
      goto LAB_0026bd9c;
    }
    MenuMgr_LockInput();
    *(undefined1 *)(iVar4 + 0x30) = 0;
  }
  iVar2 = *(int *)(iVar4 + 0x2f8);
LAB_0026bd9c:
  if (iVar2 == 0) {
    lVar3 = MenuWnd_DrawHeader(0,0,0,0);
  }
  else {
    lVar3 = MenuWnd_DrawHeader(iVar4 + 0x32,iVar2,*(int *)(iVar4 + 0x28),
                               (iVar2 + (*(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x28))) % iVar2);
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  if (*(int *)(iVar4 + 0x18) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestClose();
    }
    if (lVar3 == 3) {
      *(undefined4 *)(iVar4 + 0x18) = 0;
    }
  }
  MenuScr_Select_CarStatus(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0026be70  size 0xca0
/* state of MenuPage37; on-screen text/callee hint "GarageDrawFullAero" (was
   ScrScrGarageDrawFullAeroa980_Update) */

void maybe_PageAero_State4_GarageDrawFullAero(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  iVar4 = *(int *)(iVar8 + 0x14);
  *(undefined4 *)(iVar8 + 0x14) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x1fa);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    uVar6 = UiRes_GetLayoutData(0x1fb);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    uVar6 = UiRes_GetLayoutData(0x1fd);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    uVar6 = UiRes_GetLayoutData(0x1fe);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    uVar6 = UiRes_GetLayoutData(0x1ff);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x200);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x201);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    uVar6 = UiRes_GetLayoutData(0x202);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    uVar6 = UiRes_GetLayoutData(0x1fc);
    iVar4 = UiMgr_FindLayout(0xdd);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3bc = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    uVar6 = UiRes_GetLayoutData(0x203);
    iVar4 = UiMgr_FindLayout(0xde);
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
    uVar6 = UiRes_GetLayoutData(0x205);
    iVar4 = UiMgr_FindLayout(0xde);
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
    uVar6 = UiRes_GetLayoutData(0x206);
    iVar4 = UiMgr_FindLayout(0xde);
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
    uVar6 = UiRes_GetLayoutData(0x207);
    iVar4 = UiMgr_FindLayout(0xde);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x208);
    iVar4 = UiMgr_FindLayout(0xde);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x209);
    iVar4 = UiMgr_FindLayout(0xde);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    uVar6 = UiRes_GetLayoutData(0x20a);
    iVar4 = UiMgr_FindLayout(0xde);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    uVar6 = UiRes_GetLayoutData(0x204);
    iVar4 = UiMgr_FindLayout(0xde);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3bc = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3b8 = 1;
    uVar6 = UiRes_GetLayoutData(0x20b);
    iVar4 = UiMgr_FindLayout(0xdf);
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
    uVar6 = UiRes_GetLayoutData(0x20c);
    iVar4 = UiMgr_FindLayout(0xdf);
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
    uVar6 = UiRes_GetLayoutData(0x20d);
    iVar4 = UiMgr_FindLayout(0xdf);
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
    uVar6 = UiRes_GetLayoutData(0x20e);
    iVar4 = UiMgr_FindLayout(0xdf);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x20f);
    iVar4 = UiMgr_FindLayout(0xdf);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
  }
  *(undefined4 *)(iVar8 + 0x10) = 0;
  if (*(int *)(iVar8 + 0x18) != 0) {
    lVar7 = 0;
    if (*(byte *)(iVar8 + 8) < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(*(byte *)(iVar8 + 8)) {
      case 0:
        break;
      default:
        lVar7 = 1;
        break;
      case 5:
        lVar7 = 2;
      }
    }
    if ((lVar7 == 1) && (lVar7 = MenuMgr_Goto(), lVar7 == 0)) {
      if (*(int *)(iVar8 + 8) == 3) {
        ScrGarage_Draw_BodyTune(param_1);
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xde,6);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xdf,4);
        if (!bVar2 && !bVar3) {
          *(undefined4 *)(iVar8 + 0x18) = 0;
        }
      }
      else {
        ScrGarage_Draw_PowerTune(param_1);
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xdd,3);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xdf,3);
        if (!bVar2 && !bVar3) {
          *(undefined4 *)(iVar8 + 0x18) = 0;
        }
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xdc,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xdf,1);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(iVar8 + 0x18) = 0;
      }
    }
  }
  MenuScr_Select_CarStatus(param_1);
  MenuNum_CountUp_Tune(0xdc,3,4,0xf8,4,1,3);
  UiLayout_UpdateAnimById((UiLayout *)0xdc,2);
  iVar4 = UiMgr_FindLayout(0xdc);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  ScrGarage_Draw_FullAero_a980(param_1);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

