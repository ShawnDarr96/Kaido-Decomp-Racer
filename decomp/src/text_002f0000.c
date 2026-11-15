// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002f0000 - 0x002f4000
#include "ghidra_types.h"

// 0x002f0270  size 0x5b4
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawEquipment" (was
   ScrDraw_Equipment_Exit) */

void maybe_ComposerTask_State10_State30_DrawEquipment(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int *piVar10;
  int *piVar11;
  int iVar12;
  
  lVar8 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar8 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0xd74);
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x3d);
    iVar6 = UiMgr_FindLayout(0x12);
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
    uVar7 = UiRes_GetLayoutData(0x3e);
    iVar6 = UiMgr_FindLayout(0x12);
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
    uVar5 = UiRes_GetLayoutData(0x3f);
    iVar6 = UiMgr_FindLayout(0x13);
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
    uVar7 = UiRes_GetLayoutData(0x40);
    iVar6 = UiMgr_FindLayout(0x13);
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
    Composer_ShowPanel();
    uVar7 = *(undefined4 *)(param_1 + 0xd74);
  }
  lVar8 = Nameentry_Draw_Rokko(0x4b,uVar7);
  lVar9 = Nameentry_Nop_2(param_1 + 0xc44);
  if (lVar9 == 0xb) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x12,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x13,0);
    if ((lVar8 == 1 && !bVar2) && !bVar3) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  else if (lVar8 == 1) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar9 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar9 != 0) {
    if (lVar8 == 1) {
      Composer_RequestRedraw();
    }
    lVar9 = Nameentry_GetField_8_81f0(param_1 + 0xc44);
    if ((lVar9 == 0xd) || (lVar9 = Nameentry_GetField_8_81f0(param_1 + 0xc44), lVar9 == 0xf)) {
      if (lVar8 == 3) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x12,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x13,1);
      if ((lVar8 == 3 && !bVar2) && !bVar3) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
  }
  lVar8 = ComposerScene_IsChanging();
  if ((lVar8 == 0) || (lVar8 = ComposerScene_GetPage(), lVar8 != 3)) {
    iVar12 = 0;
    piVar11 = &DAT_00343350;
    piVar10 = &DAT_00343370;
    iVar6 = param_1;
    do {
      if (*(int *)(iVar6 + 0xd08) == 0) {
        iVar4 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar11,8,extraout_a3_lo_00);
      }
      else {
        iVar4 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar11,8,extraout_a3_lo);
      }
      if (*(int *)(iVar6 + 0xd28) == 0) {
        iVar4 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar10,8,extraout_a3_lo_02);
      }
      else {
        iVar4 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar10,8,extraout_a3_lo_01);
      }
      iVar12 = iVar12 + 1;
      iVar6 = iVar6 + 4;
      piVar11 = piVar11 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar12 < 8);
    iVar6 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,0x69,9,*(int *)(param_1 + 0xcc0));
    maybe_ComposerUi_DrawPlayhead(param_1);
    maybe_ComposerUi_DrawNotes(param_1,1);
    maybe_ComposerUi_DrawCursor(param_1,1);
    maybe_ComposerUi_DrawGrid(param_1,0);
  }
  iVar6 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002f0830  size 0x840
void MenuScr_Draw_Equipment(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int *piVar10;
  int *piVar11;
  int iVar12;
  
  lVar9 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar9 != 0) {
    uVar6 = UiRes_GetLayoutData(0x37);
    iVar7 = UiMgr_FindLayout(0x11);
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
    uVar8 = UiRes_GetLayoutData(0x38);
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
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar8;
    pUVar1[iVar7].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x39);
    iVar7 = UiMgr_FindLayout(0x11);
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
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x3d);
    iVar7 = UiMgr_FindLayout(0x12);
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
    uVar8 = UiRes_GetLayoutData(0x3e);
    iVar7 = UiMgr_FindLayout(0x12);
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
    uVar6 = UiRes_GetLayoutData(0x3f);
    iVar7 = UiMgr_FindLayout(0x13);
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
    uVar8 = UiRes_GetLayoutData(0x40);
    iVar7 = UiMgr_FindLayout(0x13);
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
    Menu_ClearSlot(0);
    *(uint *)(param_1 + 0xccc) = *(uint *)(param_1 + 0xccc) & 0xfffffbff;
  }
  lVar9 = Nameentry_Nop_2(param_1 + 0xc44);
  if (lVar9 == 0xe) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x11,0);
    if (!bVar2) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x11,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x12,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x13,0);
    if (!bVar4 && (!bVar2 && !bVar3)) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  lVar9 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar9 != 0) {
    lVar9 = Nameentry_GetField_8_81f0(param_1 + 0xc44);
    if (lVar9 == 0xe) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x11,1);
      if (!bVar2) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x11,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x12,1);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x13,1);
      if (!bVar4 && (!bVar2 && !bVar3)) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
  }
  lVar9 = Nameentry_GetField_14(param_1 + 0xc44);
  if ((lVar9 == 0) && (lVar9 = Nameentry_GetField_18(param_1 + 0xc44), lVar9 == 0)) {
    MenuWnd_SetItemState(0x11,*(undefined4 *)(&DAT_00343340 + *(int *)(param_1 + 0xd6c) * 4),1,0);
  }
  lVar9 = ComposerScene_IsChanging();
  if ((lVar9 == 0) || (lVar9 = ComposerScene_GetPage(), lVar9 != 3)) {
    iVar12 = 0;
    piVar11 = &DAT_00343350;
    piVar10 = &DAT_00343370;
    iVar7 = param_1;
    do {
      if (*(int *)(iVar7 + 0xd08) == 0) {
        iVar5 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar11,8,extraout_a3_lo_00);
      }
      else {
        iVar5 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar11,8,extraout_a3_lo);
      }
      if (*(int *)(iVar7 + 0xd28) == 0) {
        iVar5 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar10,8,extraout_a3_lo_02);
      }
      else {
        iVar5 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar10,8,extraout_a3_lo_01);
      }
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 + 4;
      piVar11 = piVar11 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar12 < 8);
    iVar7 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,0x69,9,*(int *)(param_1 + 0xcc0));
    maybe_ComposerUi_DrawPlayhead(param_1);
    maybe_ComposerUi_DrawNotes(param_1,1);
    maybe_ComposerUi_DrawCursor(param_1,1);
    maybe_ComposerUi_DrawGrid(param_1,0);
  }
  MenuWnd_DrawText(0x11,0x21,0x3f);
  MenuWnd_DrawText(0x11,0x22,0x40);
  MenuWnd_DrawText(0x11,0x23,0x41);
  iVar7 = *(int *)(param_1 + 0xd6c);
  if (iVar7 == 2) {
    MenuWnd_DrawText(0x13,0xd,0x45);
  }
  else if (iVar7 == 1) {
    MenuWnd_DrawText(0x13,0xd,0x44);
  }
  else if (iVar7 == 0) {
    MenuWnd_DrawText(0x13,0xd,0x43);
  }
  iVar7 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  UiLayout_UpdateAnimById((UiLayout *)0x11,2);
  iVar7 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x002f1080  size 0xf4
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawEquipment" (was
   ScrDraw_Equipment_Enter) */

void maybe_ComposerTask_State10_State28_DrawEquipment(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar2 != 0) {
    MenuWnd_SetItemVisible(0);
    Composer_ShowPanel(1);
  }
  lVar2 = Nameentry_Draw_Rokko(0x2e,*(undefined4 *)(param_1 + 0xd74));
  if (lVar2 == 1) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar3 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar3 != 0) {
    if (lVar2 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar2 == 3) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
    }
  }
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x002f1180  size 0x6b4
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawTestCourse" (was
   ScrDraw_TestCourse_Exit) */

void maybe_ComposerTask_State10_State27_DrawTestCourse(int param_1)

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
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  undefined1 auStack_4 [4];
  
  lVar10 = Composer_ConsumeConfirm(param_1 + 0xc44);
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
    Composer_ClearDirty(param_1 + 0xc44);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x2,4);
  UiLayout_UpdateAnimById((UiLayout *)0x2,5);
  iVar8 = 0;
  if (DAT_003431b0 != -1) {
    piVar12 = &DAT_003431b0;
    do {
      iVar5 = Keyboard_GetIndex(param_1 + 0xc64);
      if (((iVar8 == iVar5) && (lVar10 = Nameentry_GetField_14(param_1 + 0xc44), lVar10 == 0)) &&
         (lVar10 = Nameentry_GetField_18(param_1 + 0xc44), lVar10 == 0)) {
        iVar5 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar12,8,extraout_a3_lo_00);
      }
      else if (*piVar12 != 0) {
        iVar5 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)*piVar12,8,extraout_a3_lo);
      }
      piVar12 = piVar12 + 1;
      iVar8 = iVar8 + 1;
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
  iVar8 = *(int *)(param_1 + 0xc6c);
  iVar5 = 0;
  if (0 < iVar8) {
    piVar12 = &DAT_003432c0;
    do {
      auStack_4[0] = *(undefined1 *)(param_1 + iVar5 + 0xc70);
      iVar8 = UiMgr_FindLayout(2);
      UiElem_GetRect(&g_UiMgr->slots[iVar8].layout,auStack_40,(long)*piVar12);
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar8 = *(int *)(param_1 + 0xc6c);
      iVar5 = iVar5 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar5 < iVar8);
  }
  if ((iVar8 < 0xf) && (lVar10 = Keyboard_IsCharAllowed(param_1 + 0xc64), lVar10 != 0)) {
    auStack_4[0] = Keyboard_GetChar(param_1 + 0xc64);
    iVar8 = UiMgr_FindLayout(2);
    UiElem_GetRect(&g_UiMgr->slots[iVar8].layout,auStack_40,
                   (long)(int)(&DAT_003432c0)[*(int *)(param_1 + 0xc6c)]);
    UiText_DrawPlayerName(auStack_40,auStack_4,0);
    lVar10 = Nameentry_GetField_14(param_1 + 0xc44);
    if ((lVar10 == 0) && (lVar10 = Nameentry_GetField_18(param_1 + 0xc44), lVar10 == 0)) {
      iVar8 = UiMgr_FindLayout(2);
      UiElem_GetRect(&g_UiMgr->slots[iVar8].layout,auStack_40,
                     (long)*(int *)(&DAT_00343300 + *(int *)(param_1 + 0xc6c) * 4));
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
    }
  }
  lVar10 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar10 != 0) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x2,1);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x2,3);
    if (!bVar3 && !bVar4) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
    }
  }
  Composer_DrawLabel(0x27,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar8 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x002f1840  size 0x9b8
void MenuScr_Draw_TestCourse(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  iVar7 = (int)param_1;
  lVar11 = Composer_ConsumeConfirm(iVar7 + 0xc44);
  if (lVar11 != 0) {
    uVar8 = UiRes_GetLayoutData(0x27);
    iVar9 = UiMgr_FindLayout(3);
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
    pUVar1[iVar9].layout.unk_31c = uVar8;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x28);
    iVar9 = UiMgr_FindLayout(3);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar10;
    pUVar1[iVar9].layout.animState = 1;
    uVar10 = UiRes_GetLayoutData(0x29);
    iVar9 = UiMgr_FindLayout(3);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    uVar8 = UiRes_GetLayoutData(0x2a);
    iVar9 = UiMgr_FindLayout(0xd);
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
    pUVar1[iVar9].layout.unk_31c = uVar8;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x2b);
    iVar9 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar10;
    pUVar1[iVar9].layout.animState = 1;
    uVar10 = UiRes_GetLayoutData(0x2c);
    iVar9 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    uVar10 = UiRes_GetLayoutData(0x2d);
    iVar9 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    uVar10 = UiRes_GetLayoutData(0x2e);
    iVar9 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x36c = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x368 = 1;
    uVar10 = UiRes_GetLayoutData(0x2f);
    iVar9 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x380 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x37c = 1;
    uVar10 = UiRes_GetLayoutData(0x30);
    iVar9 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x394 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x390 = 1;
    uVar10 = UiRes_GetLayoutData(0x31);
    iVar9 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar9].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a8 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x3a4 = 1;
    uVar8 = UiRes_GetLayoutData(0x14);
    iVar9 = UiMgr_FindLayout(8);
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
    pUVar1[iVar9].layout.unk_31c = uVar8;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x15);
    iVar9 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar10;
    pUVar1[iVar9].layout.animState = 1;
    uVar10 = UiRes_GetLayoutData(0x16);
    iVar9 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    uVar10 = UiRes_GetLayoutData(0x17);
    iVar9 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x358 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x354 = 1;
    MenuWnd_SetItemVisible(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x3,0);
  if (!bVar2) {
    Composer_ClearDirty(iVar7 + 0xc44);
  }
  lVar11 = Nameentry_GetField_18(iVar7 + 0xc44);
  if (lVar11 != 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x3,1);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd,1);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd,3);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xd,5);
    bVar6 = UiLayout_UpdateAnimById((UiLayout *)0x8,1);
    if (!bVar6 && (!bVar5 && (!bVar4 && (!bVar2 && !bVar3)))) {
      Composer_ConsumeRedraw(iVar7 + 0xc44);
    }
    iVar9 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x8f,8,extraout_a3_lo);
    iVar9 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x90,8,extraout_a3_lo_00);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  MenuWnd_DrawLabel(3,0xf,0x48,*(int *)(iVar7 + 0xd80) + 1);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar7 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  UiLayout_UpdateAnimById((UiLayout *)0x3,2);
  iVar7 = UiMgr_FindLayout(3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x002f2200  size 0x38c
void MenuScr_Draw_TestCourse_2200(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  
  iVar3 = (int)param_1;
  lVar7 = Composer_ConsumeConfirm(iVar3 + 0xc44);
  if (lVar7 != 0) {
    uVar4 = UiRes_GetLayoutData(0x32);
    iVar5 = UiMgr_FindLayout(0x10);
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
    uVar6 = UiRes_GetLayoutData(0x33);
    iVar5 = UiMgr_FindLayout(0x10);
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
    uVar6 = UiRes_GetLayoutData(0x36);
    iVar5 = UiMgr_FindLayout(0x10);
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
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x10,0);
  if (!bVar2) {
    Composer_ClearDirty(iVar3 + 0xc44);
  }
  lVar7 = Nameentry_GetField_18(iVar3 + 0xc44);
  if ((lVar7 != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x10,1), !bVar2)) {
    Composer_ConsumeRedraw(iVar3 + 0xc44);
  }
  lVar7 = Nameentry_GetField_14(iVar3 + 0xc44);
  if ((lVar7 == 0) && (lVar7 = Nameentry_GetField_18(iVar3 + 0xc44), lVar7 == 0)) {
    MenuWnd_SetItemState(0x10,*(undefined4 *)(&DAT_0036eee8 + *(int *)(iVar3 + 0xd74) * 4),1,0);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  MenuWnd_DrawText(0x10,0x1b,9);
  MenuWnd_DrawText(0x10,0x1d,10);
  MenuWnd_DrawLabel(0x10,0x1c,0x4d,*(int *)(iVar3 + 0xd70) + 0xd);
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar3 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  UiLayout_UpdateAnimById((UiLayout *)0x10,2);
  iVar3 = UiMgr_FindLayout(0x10);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x002f2590  size 0x38c
void MenuScr_Draw_TestCourse_2590(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  
  iVar3 = (int)param_1;
  lVar7 = Composer_ConsumeConfirm(iVar3 + 0xc44);
  if (lVar7 != 0) {
    uVar4 = UiRes_GetLayoutData(0x34);
    iVar5 = UiMgr_FindLayout(4);
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
    uVar6 = UiRes_GetLayoutData(0x35);
    iVar5 = UiMgr_FindLayout(4);
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
    uVar6 = UiRes_GetLayoutData(0x36);
    iVar5 = UiMgr_FindLayout(4);
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
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x4,0);
  if (!bVar2) {
    Composer_ClearDirty(iVar3 + 0xc44);
  }
  lVar7 = Nameentry_GetField_18(iVar3 + 0xc44);
  if ((lVar7 != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x4,1), !bVar2)) {
    Composer_ConsumeRedraw(iVar3 + 0xc44);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  MenuWnd_DrawText(4,0x1b,9);
  MenuWnd_DrawText(4,0x1d,10);
  MenuWnd_DrawLabel(4,0x1c,0x49,*(int *)(iVar3 + 0xd70) + 0xd);
  lVar7 = Nameentry_GetField_14(iVar3 + 0xc44);
  if ((lVar7 == 0) && (lVar7 = Nameentry_GetField_18(iVar3 + 0xc44), lVar7 == 0)) {
    MenuWnd_SetItemState(4,*(undefined4 *)(&DAT_0036eee0 + *(int *)(iVar3 + 0xd74) * 4),1,0);
  }
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar3 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  UiLayout_UpdateAnimById((UiLayout *)0x4,2);
  iVar3 = UiMgr_FindLayout(4);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x002f2920  size 0x8f8
void MenuScr_Draw_TestCourse_2920(undefined8 param_1)

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
  
  iVar9 = (int)param_1;
  lVar10 = Composer_ConsumeConfirm(iVar9 + 0xc44);
  if (lVar10 != 0) {
    uVar6 = UiRes_GetLayoutData(0x2a);
    iVar7 = UiMgr_FindLayout(0xd);
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
    uVar8 = UiRes_GetLayoutData(0x2b);
    iVar7 = UiMgr_FindLayout(0xd);
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
    uVar8 = UiRes_GetLayoutData(0x2c);
    iVar7 = UiMgr_FindLayout(0xd);
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
    uVar8 = UiRes_GetLayoutData(0x2d);
    iVar7 = UiMgr_FindLayout(0xd);
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
    uVar8 = UiRes_GetLayoutData(0x2e);
    iVar7 = UiMgr_FindLayout(0xd);
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
    uVar8 = UiRes_GetLayoutData(0x2f);
    iVar7 = UiMgr_FindLayout(0xd);
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
    uVar8 = UiRes_GetLayoutData(0x30);
    iVar7 = UiMgr_FindLayout(0xd);
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
    uVar8 = UiRes_GetLayoutData(0x31);
    iVar7 = UiMgr_FindLayout(0xd);
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
    iVar7 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x8f,8,extraout_a3_lo);
    iVar7 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x90,8,extraout_a3_lo_00);
  }
  lVar10 = Nameentry_Nop_2(iVar9 + 0xc44);
  if (((lVar10 == 8) || (lVar10 = Nameentry_Nop_2(iVar9 + 0xc44), lVar10 == 9)) ||
     ((lVar10 = Nameentry_Nop_2(iVar9 + 0xc44), lVar10 == 0xf &&
      ((*(uint *)(iVar9 + 0xccc) & 0x400) != 0)))) {
    Composer_ClearDirty(iVar9 + 0xc44);
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd,4);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,0);
    if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
      Composer_ClearDirty(iVar9 + 0xc44);
      *(uint *)(iVar9 + 0xccc) = *(uint *)(iVar9 + 0xccc) | 0x400;
    }
  }
  lVar10 = Nameentry_GetField_18(iVar9 + 0xc44);
  if (lVar10 != 0) {
    lVar10 = Nameentry_GetField_8_81f0(iVar9 + 0xc44);
    if ((((lVar10 == 8) || (lVar10 = Nameentry_GetField_8_81f0(iVar9 + 0xc44), lVar10 == 9)) ||
        (lVar10 = Nameentry_GetField_8_81f0(iVar9 + 0xc44), lVar10 == 0xf)) ||
       (lVar10 = Nameentry_GetField_8_81f0(iVar9 + 0xc44), lVar10 == 10)) {
      Composer_ConsumeRedraw(iVar9 + 0xc44);
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd,3);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd,5);
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,1);
      if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
        Composer_ConsumeRedraw(iVar9 + 0xc44);
      }
    }
  }
  maybe_ComposerUi_AnimateNameC(param_1,0);
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  Composer_DrawLabel(0x47,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar9 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  return;
}

// 0x002f3220  size 0x170
void MenuScr_Draw_TestCourse_3220(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = (int)param_1;
  lVar2 = Composer_ConsumeConfirm(iVar1 + 0xc44);
  if (lVar2 != 0) {
    Composer_ShowPanel(0);
  }
  lVar2 = Nameentry_Draw_Rokko(7,0xffffffffffffffff);
  if (lVar2 == 1) {
    Composer_ClearDirty(iVar1 + 0xc44);
  }
  lVar3 = Nameentry_GetField_18(iVar1 + 0xc44);
  if (lVar3 != 0) {
    if (lVar2 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar2 == 3) {
      Composer_ConsumeRedraw(iVar1 + 0xc44);
    }
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,1);
  Composer_DrawLabel(0x42,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x002f3390  size 0x484
void MenuScr_Draw_TestCourse_3390(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  iVar7 = (int)param_1;
  lVar11 = Composer_ConsumeConfirm(iVar7 + 0xc44);
  if (lVar11 != 0) {
    uVar8 = UiRes_GetLayoutData(0x32);
    iVar9 = UiMgr_FindLayout(0x10);
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
    pUVar1[iVar9].layout.unk_31c = uVar8;
    pUVar1[iVar9].layout.unk_318 = 1;
    uVar10 = UiRes_GetLayoutData(0x33);
    iVar9 = UiMgr_FindLayout(0x10);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x330 = uVar10;
    pUVar1[iVar9].layout.animState = 1;
    uVar10 = UiRes_GetLayoutData(0x36);
    iVar9 = UiMgr_FindLayout(0x10);
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
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x344 = uVar10;
    *(undefined4 *)&pUVar1[iVar9].layout.field_0x340 = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x10,0);
  if (!bVar2) {
    Composer_ClearDirty(iVar7 + 0xc44);
  }
  lVar11 = Nameentry_GetField_18(iVar7 + 0xc44);
  if (lVar11 != 0) {
    lVar11 = Nameentry_GetField_8_81f0(iVar7 + 0xc44);
    if (lVar11 == 4) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x10,1);
      if (!bVar2) {
        Composer_ConsumeRedraw(iVar7 + 0xc44);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd,3);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd,5);
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,1);
      bVar6 = UiLayout_UpdateAnimById((UiLayout *)0x10,1);
      if (!bVar6 && (!bVar5 && (!bVar4 && (!bVar2 && !bVar3)))) {
        Composer_ConsumeRedraw(iVar7 + 0xc44);
      }
      iVar9 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x8f,8,extraout_a3_lo);
      iVar9 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x90,8,extraout_a3_lo_00);
    }
  }
  lVar11 = Nameentry_GetField_14(iVar7 + 0xc44);
  if ((lVar11 == 0) && (lVar11 = Nameentry_GetField_18(iVar7 + 0xc44), lVar11 == 0)) {
    MenuWnd_SetItemState(0x10,*(undefined4 *)(*(int *)(iVar7 + 0xd74) * 4 + 0x36eed8),1,0);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,1);
  MenuWnd_DrawText(0x10,0x1b,9);
  MenuWnd_DrawText(0x10,0x1d,10);
  MenuWnd_DrawText(0x10,0x1c,0x4a);
  Composer_DrawLabel(0x42,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar7 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  UiLayout_UpdateAnimById((UiLayout *)0x10,2);
  iVar7 = UiMgr_FindLayout(0x10);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x002f3820  size 0x964
void MenuScr_Draw_TestCourse_3820(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  
  iVar9 = (int)param_1;
  lVar10 = Composer_ConsumeConfirm(iVar9 + 0xc44);
  if (lVar10 != 0) {
    lVar10 = Nameentry_Nop_2(iVar9 + 0xc44);
    if (lVar10 != 5) {
      uVar7 = UiRes_GetLayoutData(0);
      iVar8 = UiMgr_FindLayout(0);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x314 = 1;
      pUVar1[iVar8].layout.unk_31c = uVar7;
      pUVar1[iVar8].layout.unk_318 = 1;
    }
    uVar7 = UiRes_GetLayoutData(0x2a);
    iVar8 = UiMgr_FindLayout(0xd);
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
    uVar6 = UiRes_GetLayoutData(0x2b);
    iVar8 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar6;
    pUVar1[iVar8].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x2c);
    iVar8 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x2d);
    iVar8 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x2e);
    iVar8 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x2f);
    iVar8 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x37c = 1;
    uVar6 = UiRes_GetLayoutData(0x30);
    iVar8 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x394 = uVar6;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x390 = 1;
    uVar6 = UiRes_GetLayoutData(0x31);
    iVar8 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar8].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x3a8 = uVar6;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x3a4 = 1;
    uVar7 = UiRes_GetLayoutData(0x14);
    iVar8 = UiMgr_FindLayout(8);
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
    uVar6 = UiRes_GetLayoutData(0x15);
    iVar8 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar6;
    pUVar1[iVar8].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x16);
    iVar8 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x17);
    iVar8 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    iVar8 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x8f,8,extraout_a3_lo);
    iVar8 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x90,8,extraout_a3_lo_00);
  }
  lVar10 = Nameentry_Nop_2(iVar9 + 0xc44);
  if (lVar10 == 5) {
    Composer_ClearDirty(iVar9 + 0xc44);
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd,4);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,0);
    if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
      Composer_ClearDirty(iVar9 + 0xc44);
    }
  }
  lVar10 = Nameentry_GetField_18(iVar9 + 0xc44);
  if (lVar10 != 0) {
    lVar10 = Nameentry_GetField_8_81f0(iVar9 + 0xc44);
    if (lVar10 == 5) {
      Composer_ConsumeRedraw(iVar9 + 0xc44);
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd,3);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd,5);
      bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x8,1);
      if (!bVar5 && (!bVar4 && (!bVar2 && !bVar3))) {
        Composer_ConsumeRedraw(iVar9 + 0xc44);
      }
      iVar9 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x8f,8,extraout_a3_lo_01);
      iVar9 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar9].layout,0x90,8,extraout_a3_lo_02);
    }
  }
  maybe_ComposerUi_AnimateNameC(param_1,1);
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,1);
  Composer_DrawLabel(0x42,3);
  UiLayout_UpdateAnimById((UiLayout *)0x0,0);
  iVar9 = UiMgr_FindLayout(0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  iVar9 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar9].layout);
  return;
}

