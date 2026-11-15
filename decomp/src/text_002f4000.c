// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002f4000 - 0x002f8000
#include "ghidra_types.h"

// 0x002f4190  size 0x2a4
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawTestCourse" (was
   ScrDraw_TestCourse_Enter) */

void maybe_ComposerTask_State10_State19_DrawTestCourse(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  lVar3 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar3 != 0) {
    iVar1 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar1].layout,0x55,9,0);
    Composer_ShowPanel(0);
  }
  lVar3 = Nameentry_Draw_Rokko(7,0xffffffffffffffff);
  if (lVar3 == 1) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar4 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar4 != 0) {
    if (lVar3 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar3 == 3) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
    }
  }
  maybe_ComposerUi_ScrollView(param_1);
  iVar7 = 0;
  piVar6 = &DAT_00343350;
  piVar5 = &DAT_00343370;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0xd08) == 0) {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*piVar6,8,extraout_a3_lo_00);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*piVar6,8,extraout_a3_lo);
    }
    if (*(int *)(iVar1 + 0xd28) == 0) {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*piVar5,8,extraout_a3_lo_02);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*piVar5,8,extraout_a3_lo_01);
    }
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + 4;
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar7 < 8);
  iVar1 = UiMgr_FindLayout(0xc);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar1].layout,0x69,9,*(int *)(param_1 + 0xcc0));
  maybe_ComposerUi_DrawPlayhead(param_1);
  maybe_ComposerUi_DrawNotes(param_1,1);
  maybe_ComposerUi_DrawCursor(param_1,1);
  maybe_ComposerUi_DrawGrid(param_1,0);
  iVar1 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x002f4440  size 0xdf0
void MenuScr_Draw_Akagi(int param_1)

{
  undefined1 uVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  undefined4 auStack_40 [16];
  
  lVar11 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar11 != 0) {
    uVar7 = UiRes_GetLayoutData(0x3f);
    iVar8 = UiMgr_FindLayout(0x13);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar8].layout.unk_310 = 0xffffffff;
    pUVar2[iVar8].layout.unk_31c = 0;
    pUVar2[iVar8].layout.unk_30c = 0;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    pUVar2[iVar8].layout.unk_30c = 0;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x314 = 0;
    pUVar2[iVar8].layout.unk_31c = uVar7;
    pUVar2[iVar8].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x40);
    iVar8 = UiMgr_FindLayout(0x13);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x330 == 0) {
      pUVar2[iVar8].layout.animState = 0;
    }
    else {
      pUVar2[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x330 == 0) {
      pUVar2[iVar8].layout.animState = 0;
    }
    else {
      pUVar2[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = uVar9;
    pUVar2[iVar8].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x19);
    iVar8 = UiMgr_FindLayout(0xf);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar8].layout.unk_310 = 0xffffffff;
    pUVar2[iVar8].layout.unk_31c = 0;
    pUVar2[iVar8].layout.unk_30c = 0;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    pUVar2[iVar8].layout.unk_30c = 0;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x314 = 0;
    pUVar2[iVar8].layout.unk_31c = uVar7;
    pUVar2[iVar8].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x1a);
    iVar8 = UiMgr_FindLayout(0xf);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x330 == 0) {
      pUVar2[iVar8].layout.animState = 0;
    }
    else {
      pUVar2[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x330 == 0) {
      pUVar2[iVar8].layout.animState = 0;
    }
    else {
      pUVar2[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = uVar9;
    pUVar2[iVar8].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x21);
    iVar8 = UiMgr_FindLayout(0xb);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar8].layout.unk_310 = 0xffffffff;
    pUVar2[iVar8].layout.unk_31c = 0;
    pUVar2[iVar8].layout.unk_30c = 0;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    pUVar2[iVar8].layout.unk_30c = 0;
    if (pUVar2[iVar8].layout.unk_31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x314 = 0;
    pUVar2[iVar8].layout.unk_31c = uVar7;
    pUVar2[iVar8].layout.unk_318 = 1;
    uVar9 = UiRes_GetLayoutData(0x22);
    iVar8 = UiMgr_FindLayout(0xb);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x330 == 0) {
      pUVar2[iVar8].layout.animState = 0;
    }
    else {
      pUVar2[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x330 == 0) {
      pUVar2[iVar8].layout.animState = 0;
    }
    else {
      pUVar2[iVar8].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = uVar9;
    pUVar2[iVar8].layout.animState = 1;
    uVar9 = UiRes_GetLayoutData(0x23);
    iVar8 = UiMgr_FindLayout(0xb);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x344 = uVar9;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x340 = 1;
    uVar9 = UiRes_GetLayoutData(0x24);
    iVar8 = UiMgr_FindLayout(0xb);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x358 = uVar9;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 1;
    iVar8 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x9e,8,extraout_a3_lo_03);
    iVar8 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x9f,8,extraout_a3_lo_04);
    iVar8 = UiMgr_FindLayout(0xb);
    pUVar2 = g_UiMgr->slots;
    iVar10 = UiRes_GetLayoutData(0x42);
    UiLayout_IsAnimDone(&pUVar2[iVar8].layout,5,0x9e,iVar10,1);
    iVar8 = UiMgr_FindLayout(0xb);
    pUVar2 = g_UiMgr->slots;
    iVar10 = UiRes_GetLayoutData(0x43);
    UiLayout_IsAnimDone(&pUVar2[iVar8].layout,6,0x9f,iVar10,1);
    iVar8 = UiMgr_FindLayout(0x13);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar8].layout,0xc,0x16,7);
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xf,0);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xb,0);
  bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x13,0);
  if (!bVar5 && (!bVar3 && !bVar4)) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar11 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar11 != 0) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xf,1);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xb,1);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0x13,1);
    if (!bVar5 && (!bVar3 && !bVar4)) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
      iVar8 = UiMgr_FindLayout(0x13);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar8].layout,0xc,0x16,6);
    }
    iVar8 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x9e,8,extraout_a3_lo);
    iVar8 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,0x9f,8,extraout_a3_lo_00);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xb,5);
  UiLayout_UpdateAnimById((UiLayout *)0xb,6);
  lVar11 = Nameentry_GetField_14(param_1 + 0xc44);
  if ((lVar11 == 0) && (lVar11 = Nameentry_GetField_18(param_1 + 0xc44), lVar11 == 0)) {
    if (*(int *)(param_1 + 0xd7c) == 0) {
      lVar11 = Nameentry_GetField_14(param_1 + 0xc44);
      if ((lVar11 == 0) && (lVar11 = Nameentry_GetField_18(param_1 + 0xc44), lVar11 == 0)) {
        ComposerInput_SetMode(1);
        MenuWnd_SetItemState
                  (0xb,*(undefined4 *)
                        (*(int *)(param_1 + 0x123c) * 0x10 +
                        ((*(int *)(param_1 + 0x1234) +
                         (*(int *)(param_1 + 0x1238) - *(int *)(param_1 + 0x1240))) %
                        *(int *)(param_1 + 0x1234)) * 0x30 + 0x343064),0,0);
      }
      goto LAB_002f45e8;
    }
    ComposerInput_SetMode(0);
    if (*(int *)(param_1 + 0xd7c) != 1) {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xb,3);
      if (!bVar3) {
        *(undefined4 *)(param_1 + 0xd7c) = 0;
        iVar8 = UiMgr_FindLayout(0xb);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar8].layout.field_0x348 = 0;
        if (*(int *)&pUVar2[iVar8].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 1;
        }
        Menu_ClearSlot(0);
      }
      goto LAB_002f45e8;
    }
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xb,2);
    if (bVar3) goto LAB_002f45e8;
    *(undefined4 *)(param_1 + 0xd7c) = 0;
    iVar8 = UiMgr_FindLayout(0xb);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar8].layout.field_0x340 = 1;
    }
    Menu_ClearSlot(0);
    iVar8 = *(int *)(param_1 + 0x1238);
  }
  else {
LAB_002f45e8:
    iVar8 = *(int *)(param_1 + 0x1238);
  }
  iVar8 = *(int *)(param_1 + 0x123c) + iVar8 * 3;
  if (iVar8 < 0x10d) {
    iVar8 = *(int *)(iVar8 * 4 + param_1 + 0xdfc);
  }
  else {
    iVar8 = 0x10d;
  }
  MenuWnd_DrawText(0xf,0x24,0x37);
  iVar10 = UiMgr_FindLayout(0xf);
  UiElem_GetRect(&g_UiMgr->slots[iVar10].layout,auStack_40,0x25);
  uVar12 = Script_FieldPtr_89f6(*(undefined4 *)(param_1 + 0xca4));
  UiText_DrawPlayerName(auStack_40,uVar12,0);
  MenuWnd_DrawTextId(0xf,0x18,1,0x38);
  if ((iVar8 == 0) || (0x10c < iVar8)) {
    MenuWnd_DrawText(0xf,0x19,6);
  }
  else {
    iVar10 = SeqGen_GetPatternEntry(iVar8);
    if (*(int *)(iVar10 + 4) == 0) {
      MenuWnd_DrawText(0xf,0x19,0x3e);
    }
    else {
      MenuWnd_DrawTextId(0xf,0x19,4,0x3d);
    }
  }
  MenuWnd_DrawTextId(0xf,0x1a,1,0x39);
  if ((iVar8 == 0) || (0x10c < iVar8)) {
    MenuWnd_DrawText(0xf,0x1b,6);
  }
  else {
    iVar10 = SeqGen_GetPatternEntry(iVar8);
    if (*(char *)(iVar10 + 10) == '\0') {
      MenuWnd_DrawText(0xf,0x1b,0x51);
    }
    else {
      iVar10 = SeqGen_GetPatternEntry(iVar8);
      if (*(char *)(iVar10 + 9) == '\0') {
        iVar10 = SeqGen_GetPatternEntry(iVar8);
        MenuWnd_DrawLabel(0xf,0x1b,0x4f,*(undefined1 *)(iVar10 + 10));
        iVar10 = *(int *)(param_1 + 0x1230);
        goto LAB_002f4770;
      }
      iVar10 = SeqGen_GetPatternEntry(iVar8);
      uVar1 = *(undefined1 *)(iVar10 + 9);
      iVar10 = SeqGen_GetPatternEntry(iVar8);
      MenuWnd_DrawLabel(0xf,0x1b,0x50,uVar1,*(undefined1 *)(iVar10 + 10));
    }
  }
  iVar10 = *(int *)(param_1 + 0x1230);
LAB_002f4770:
  MenuWnd_DrawLabel(0xf,0x1c,8,iVar10 + -1,0x10c);
  MenuWnd_DrawTextId(0xf,0x1d,1,0x3a);
  MenuWnd_DrawLabel(0xf,0x1e,5,0,*(int *)(param_1 + 0xcc0) + 1);
  MenuWnd_DrawTextId(0xf,0x1f,1,0x3b);
  if ((iVar8 == 0) || (0x10c < iVar8)) {
    MenuWnd_DrawText(0xf,0x20,6);
  }
  else {
    iVar8 = SeqGen_GetPatternEntry(iVar8);
    MenuWnd_DrawLabel(0xf,0x20,5,0,*(undefined1 *)(iVar8 + 8));
  }
  uVar13 = ComposerInput_GetHeld();
  if ((uVar13 & 0x2000) == 0) {
    MenuWnd_DrawTextId(0xf,0x21,1,0x3c);
    iVar8 = UiMgr_FindLayout(0xf);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,7,8,extraout_a3_lo_02);
    uVar1 = *(undefined1 *)(param_1 + 0x1245);
  }
  else {
    MenuWnd_DrawTextId(0xf,0x21,0,0x3c);
    iVar8 = UiMgr_FindLayout(0xf);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,7,8,extraout_a3_lo_01);
    uVar1 = *(undefined1 *)(param_1 + 0x1245);
  }
  MenuWnd_DrawLabel(0xf,0x22,5,1,uVar1);
  MenuWnd_DrawText(0x13,0xd,0x4e);
  iVar8 = 0;
  piVar17 = &DAT_00343060;
  do {
    iVar10 = 0;
    piVar16 = piVar17;
    do {
      if ((*(int *)(param_1 + 0xd7c) == 1) && (iVar8 == 6)) {
        iVar14 = (*(int *)(param_1 + 0x1240) + -1 + *(int *)(param_1 + 0x1234)) %
                 *(int *)(param_1 + 0x1234);
      }
      else {
        iVar14 = (*(int *)(param_1 + 0x1240) + iVar8) % *(int *)(param_1 + 0x1234);
      }
      iVar14 = iVar10 + iVar14 * 3;
      if (iVar14 < *(int *)(param_1 + 0x1230)) {
        iVar14 = param_1 + iVar14 * 4;
        puVar15 = (undefined4 *)(iVar14 + 0xdfc);
        MenuWnd_DrawLabel(0xb,piVar16[2],0xb,0,*(undefined4 *)(iVar14 + 0xdfc));
        iVar14 = UiMgr_FindLayout(0xb);
        pUVar2 = g_UiMgr->slots;
        iVar6 = SeqGen_GetPatternEntry(*puVar15);
        maybe_ComposerUi_SetGridCell(&pUVar2[iVar14].layout,*piVar16,9,*(undefined1 *)(iVar6 + 0xb))
        ;
        uVar12 = Menuscr_FieldPtr_52(*puVar15);
        MenuWnd_DrawText(0xb,piVar16[3],uVar12);
      }
      else {
        iVar14 = UiMgr_FindLayout(0xb);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar14].layout,(long)*piVar16,9,0);
        MenuWnd_DrawText(0xb,piVar16[2],6);
      }
      iVar10 = iVar10 + 1;
      piVar16 = piVar16 + 4;
    } while (iVar10 < 3);
    iVar8 = iVar8 + 1;
    piVar17 = piVar17 + 0xc;
  } while (iVar8 < 7);
  MenuWnd_DrawLabel(0xb,0x9c,0x35,5,0);
  MenuWnd_DrawLabel(0xb,0xa0,0x36,5,0);
  iVar8 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0xe);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0xf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  MenuNum_CountUp_Event
            (0xb,3,4,200,*(undefined4 *)(param_1 + 0x1234),6,*(undefined4 *)(param_1 + 0x1240));
  iVar8 = UiMgr_FindLayout(0xb);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x002f5230  size 0x27c
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawAkagi" (was ScrDraw_Akagi_Update) */

void maybe_ComposerTask_State10_State17_DrawAkagi(int param_1)

{
  int iVar1;
  long lVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  Composer_ConsumeConfirm(param_1 + 0xc44);
  Composer_ClearDirty(param_1 + 0xc44);
  lVar2 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar2 != 0) {
    Composer_ConsumeRedraw(param_1 + 0xc44);
  }
  maybe_ComposerUi_ScrollView(param_1);
  iVar7 = 0;
  piVar5 = &DAT_00343350;
  piVar4 = &DAT_00343370;
  iVar6 = param_1;
  do {
    if (*(int *)(iVar6 + 0xd08) == 0) {
      iVar1 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*piVar5,8,extraout_a3_lo_00);
    }
    else {
      iVar1 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*piVar5,8,extraout_a3_lo);
    }
    if (*(int *)(iVar6 + 0xd28) == 0) {
      iVar1 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*piVar4,8,extraout_a3_lo_02);
    }
    else {
      iVar1 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*piVar4,8,extraout_a3_lo_01);
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 4;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar7 < 8);
  iVar6 = UiMgr_FindLayout(0xc);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,0x69,9,*(int *)(param_1 + 0xcc0));
  maybe_ComposerUi_DrawPlayhead(param_1);
  maybe_ComposerUi_DrawNotes(param_1,0);
  maybe_ComposerUi_DrawCursor(param_1,0);
  maybe_ComposerUi_DrawGrid(param_1,1);
  iVar6 = UiMgr_FindLayout(0xc);
  uVar8 = (uint)(*(float *)(param_1 + 0xcb8) + 16.0);
  uVar3 = uVar8 & 0xf;
  if (((int)uVar8 < 0) && (uVar3 != 0)) {
    uVar3 = uVar3 - 0x10;
  }
  UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,0x55,9,uVar3);
  iVar6 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002f54b0  size 0x254
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawAkagi" (was ScrDraw_Akagi_Enter) */

void maybe_ComposerTask_State10_State16_DrawAkagi(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  lVar3 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar3 != 0) {
    iVar1 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar1].layout,0x55,9,0);
  }
  Composer_ClearDirty(param_1 + 0xc44);
  lVar3 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar3 != 0) {
    Composer_ConsumeRedraw(param_1 + 0xc44);
  }
  maybe_ComposerUi_ScrollView(param_1);
  iVar6 = 0;
  piVar5 = &DAT_00343350;
  piVar4 = &DAT_00343370;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0xd08) == 0) {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*piVar5,8,extraout_a3_lo_00);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*piVar5,8,extraout_a3_lo);
    }
    if (*(int *)(iVar1 + 0xd28) == 0) {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*piVar4,8,extraout_a3_lo_02);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*piVar4,8,extraout_a3_lo_01);
    }
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + 4;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar6 < 8);
  iVar1 = UiMgr_FindLayout(0xc);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar1].layout,0x69,9,*(int *)(param_1 + 0xcc0));
  maybe_ComposerUi_DrawPlayhead(param_1);
  maybe_ComposerUi_DrawNotes(param_1,1);
  maybe_ComposerUi_DrawCursor(param_1,1);
  maybe_ComposerUi_DrawGrid(param_1,1);
  iVar1 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x002f5710  size 0x54
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Updatef5710) */

void maybe_ComposerTask_State22_NameentryGetField(undefined8 param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x30) == 0) {
    iVar1 = Nameentry_GetField_4_8200((int)param_1 + 0xc44);
    (*(code *)(&PTR_maybe_ComposerTask_State10_State16_DrawAkagi_00342db0)[iVar1])(param_1);
    ComposerTex_Draw(param_1);
  }
  return;
}

// 0x002f5770  size 0x40
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Exitf5770) */

void maybe_ComposerTask_State23_NameentryGetField(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0xc40) != 0) {
    Mem_Free();
    *(undefined4 *)((int)param_1 + 0xc40) = 0;
  }
  ComposerTex_Free(param_1);
  return;
}

// 0x002f57b0  size 0x2f8
/* state of maybe_ComposerTask; on-screen text/callee hint "NameentryGetField" (was
   ScrNameentryGetField48200_Enterf57b0) */

void maybe_ComposerTask_State21_NameentryGetField(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  undefined4 *puVar9;
  
  uVar6 = Nameentry_Nop_4();
  uVar7 = Nameentry_Nop_3();
  ComposerTex_Init(param_1,0x430750,1,uVar6,uVar7,0x50010);
  ComposerTex_Load(param_1,0x17fe,0);
  uVar6 = Profile_Get(0);
  uVar8 = Profile_GetFlags(uVar6);
  if ((uVar8 & 0x200000) == 0) {
    iVar2 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x44,8,extraout_a3_lo_01);
    iVar2 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x45,8,extraout_a3_lo_02);
  }
  else {
    iVar2 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x44,8,extraout_a3_lo);
    iVar2 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x45,8,extraout_a3_lo_00);
  }
  uVar3 = UiRes_GetLayoutData(0);
  iVar2 = UiMgr_FindLayout(0);
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
  *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 1;
  pUVar1[iVar2].layout.unk_31c = uVar3;
  pUVar1[iVar2].layout.unk_318 = 1;
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  iVar4 = UiRes_GetLayoutData(0x42);
  UiLayout_IsAnimDone(&pUVar1[iVar2].layout,5,0x8f,iVar4,1);
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  iVar4 = UiRes_GetLayoutData(0x43);
  UiLayout_IsAnimDone(&pUVar1[iVar2].layout,6,0x90,iVar4,1);
  iVar2 = UiMgr_FindLayout(0xd);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x24,8,extraout_a3_lo_03);
  uVar3 = 0;
  puVar9 = &DAT_00342ef0;
  do {
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)(int)puVar9[6],8,extraout_a3_lo_04);
    uVar3 = uVar3 + 1;
    puVar9 = puVar9 + 7;
  } while (uVar3 < 0xd);
  uVar5 = Mem_Alloc16(0x1cb600,0x430750);
  *(undefined4 *)((int)param_1 + 0xc40) = uVar5;
  return;
}

// 0x002f5ab0  size 0x214
void maybe_ComposerTask_Update(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  pcVar1 = *(char **)(param_1 + 0x14);
  uVar3 = Script_Nop();
  lVar4 = SeqGen_FindPatternIndex(uVar3);
  if ((lVar4 != 0) && (lVar4 = UiMgr_FindFreeSlot(), lVar4 == 0)) {
    ComposerScene_FadeIn();
    if (*pcVar1 == '\0') {
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_maybe_ComposerTask_State0_NameentryGetField_003433b0)[iVar2 * 3])(uVar3);
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_maybe_ComposerTask_State12_NameentryGetField_003433e0)[iVar2 * 3])(uVar3);
      *pcVar1 = '\x01';
    }
    if (*pcVar1 == '\x01') {
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_maybe_ComposerTask_State1_NameentryGetField_003433b4)[iVar2 * 3])(uVar3);
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_maybe_ComposerTask_State13_NameentryGetField_003433e4)[iVar2 * 3])(uVar3);
      lVar4 = ComposerScene_IsChanging();
      if ((lVar4 != 0) && (lVar4 = ComposerScene_GetPage(), lVar4 == 3)) {
        ComposerScene_SetPage(0);
        *pcVar1 = '\x02';
      }
    }
    else if (*pcVar1 == '\x02') {
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_maybe_ComposerTask_State14_NameentryGetField_003433e8)[iVar2 * 3])(uVar3);
      uVar3 = ComposerScene_ApplyState();
      iVar2 = ComposerScene_GetState();
      (*(code *)(&PTR_maybe_ComposerTask_State2_NameentryGetField_003433b8)[iVar2 * 3])(uVar3);
      ComposerScene_Exit();
      *pcVar1 = '\0';
    }
  }
  return;
}

// 0x002f5cd0  size 0x3c
void ComposerTask_Exit(void)

{
  ComposerInput_Free();
  ComposerScene_Free();
  SeqGen_Shutdown();
  MenuWnd_FreeSystem();
  UiRes_FreeFonts();
  return;
}

// 0x002f5d10  size 0x148
void ComposerTask_Init(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar1 = *(undefined1 **)(param_1 + 0x14);
  RaceCtx_SetMode(8);
  UiRes_LoadLocalizedAlloc(0x430750,0x187c,0x160);
  MenuWnd_AllocSystem(0x430750);
  Snd_StopAllVoices(0xfff);
  Snd_QueueCmd2d(8,0x100);
  Snd_QueueCmd2d(9,0x100);
  Snd_QueueCmd2d(1,0x100);
  lVar3 = Script_Nop();
  if (lVar3 == 0) {
    SeqGen_Init(0x430750,1,0xffff);
  }
  ComposerScene_Alloc(0x430750,0);
  ComposerInput_Alloc(0x430750,0);
  uVar4 = Profile_Get(0);
  iVar2 = maybe_Race_GetMode();
  iVar5 = 0;
  do {
    lVar3 = Profile_IsEventSeen(uVar4,iVar5);
    if (lVar3 != 0) {
      *(undefined4 *)(iVar2 + 0x9660) = 1;
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar5 < 0xb9);
  *puVar1 = 0;
  *(code **)(param_1 + 0x1c) = maybe_ComposerTask_Update;
  return;
}

// 0x002f5e60  size 0x8
int Menuscr_FieldPtr_52(int param_1)

{
  return param_1 + 0x52;
}

// 0x002f5e70  size 0x320
void MenuNum_CountUp_Event
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
               ulong param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  
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
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo_01);
    }
  }
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,2,extraout_a3_lo_00);
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,6,(byte)g_UiMgr);
  return;
}

// 0x002f6190  size 0x260
/* 24 callers */

undefined4 Composer_MoveCursor(uint *param_1,long param_2,uint param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *param_1;
  iVar9 = 0;
  if (param_2 == 0) {
    uVar4 = ComposerInput_GetRepeat();
    if ((uVar4 & 0x400004) == 0) {
      uVar4 = ComposerInput_GetRepeat();
      if ((uVar4 & 0x800008) != 0) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = -1;
    }
  }
  else if (param_2 == 1) {
    uVar4 = ComposerInput_GetRepeat();
    if ((uVar4 & 0x100010) == 0) {
      uVar4 = ComposerInput_GetRepeat();
      if ((uVar4 & 0x200020) != 0) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = -1;
    }
  }
  iVar7 = param_3 + 1;
  uVar2 = 0;
  if (0 < iVar7) {
    do {
      if (param_4 == 0) {
        uVar6 = *param_1 + iVar9;
        if ((int)uVar6 < 0) {
          *param_1 = 0;
        }
        else {
          if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          *param_1 = uVar6;
        }
      }
      else {
        uVar5 = *param_1 + iVar9;
        uVar6 = param_3;
        if ((-1 < (int)uVar5) && (uVar6 = uVar5, (int)param_3 < (int)uVar5)) {
          uVar6 = 0;
        }
        *param_1 = uVar6;
      }
      if ((param_5 == 0) || ((param_5 & 1 << (*param_1 & 0x1f)) != 0)) break;
      if ((uVar2 == param_3) && ((param_4 == 0 && (iVar8 = 0, 0 < iVar7)))) {
        do {
          uVar6 = *param_1 - iVar9;
          if ((int)uVar6 < 0) {
            *param_1 = 0;
          }
          else {
            if ((int)param_3 < (int)uVar6) {
              uVar6 = param_3;
            }
            *param_1 = uVar6;
          }
          if ((param_5 == 0) || ((param_5 & 1 << (*param_1 & 0x1f)) != 0)) break;
          if (uVar2 == param_3) {
            *param_1 = uVar1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar7);
  }
  if (uVar1 == *param_1) {
    if (iVar9 != 0) {
      Se_PlayMenuVol(8,0x60);
    }
    uVar3 = 0;
  }
  else {
    Se_PlayMenuVol(7,0x60);
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f63f0  size 0x44
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Composer_GetSelectedPart(char param_1)

{
  uint uVar1;
  
  if (param_1 < '\0') {
    uVar1 = *_g_ComposerShared3;
  }
  else {
    uVar1 = (int)*_g_ComposerShared3 >> ((int)param_1 & 0x1fU) & 1;
  }
  return uVar1 == 0;
}

// 0x002f6440  size 0xa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Composer_GetPartEntry(char param_1)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = _g_ComposerShared3 + 4;
  if ((long)param_1 < 0) {
    bVar2 = *(int *)(_g_ComposerShared3 + 8) == 0;
  }
  else {
    iVar6 = 0;
    do {
      iVar5 = 0;
      do {
        bVar1 = *(byte *)(iVar4 + iVar5 + 8);
        if ((bVar1 & 0x80) == 0) {
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = (ulong)bVar1 & 0x70;
        }
        if (uVar3 != 0) {
          if ((bVar1 & 0x80) == 0) {
            uVar3 = 0xffffffffffffffff;
          }
          else {
            uVar3 = (ulong)bVar1 & 0xf;
          }
          if ((long)param_1 == uVar3) {
            return false;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x18);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar6 < 2);
    bVar2 = true;
  }
  return bVar2;
}

// 0x002f64e0  size 0x210
/* WARNING: Removing unreachable block (ram,0x002f6538) */
/* WARNING: Removing unreachable block (ram,0x002f6548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Composer_PreviewLoop(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar3 = Script_Nop();
  if ((param_1[1] & 0x80) == 0) {
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    lVar4 = SeqGen_IsReady(uVar3);
    if (lVar4 == 0) {
      uVar1 = 1;
      param_1[1] = param_1[1] | 1;
      param_1[2] = 0xffffffff;
    }
    else {
      SeqGen_GetLoopRangeC(uVar3,&uStack_4,&uStack_8);
      SeqGen_GetLoopRangeB(uVar3,&uStack_c,&uStack_10);
      SeqGen_GetLoopRangeA(uVar3,&uStack_14,&uStack_18);
      cVar5 = (char)*param_1;
      if (cVar5 < '\0') {
        uVar2 = *_g_ComposerShared3;
      }
      else {
        uVar2 = (int)*_g_ComposerShared3 >> ((int)cVar5 & 0x1fU) & 1;
      }
      if ((((uVar2 == 0) && (lVar4 = Composer_GetPartEntry(cVar5), lVar4 != 0)) &&
          (cVar5 = Snd_IsBusy(*param_1), cVar5 == '\0')) &&
         (lVar4 = Snd_PlayStream(*param_1,uStack_4,uStack_8,uStack_c,uStack_10,uStack_14,uStack_18),
         lVar4 != 0)) {
        uVar1 = 1;
        param_1[1] = param_1[1] | 2;
        param_1[2] = 0;
      }
      else {
        uVar1 = 0;
        param_1[1] = param_1[1] & 0xfffffffd;
        param_1[2] = 0xffffffff;
      }
    }
  }
  else {
    if (((param_1[1] & 0x80) != 0) && (lVar4 = Snd_QueueCmd1(*param_1), lVar4 != 0)) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002f66f0  size 0x2a0
/* WARNING: Removing unreachable block (ram,0x002f679c) */
/* WARNING: Removing unreachable block (ram,0x002f67ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Composer_PreviewTrack(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  char cVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar7 = Script_Nop();
  iVar1 = param_1[2];
  iVar3 = Script_GetElem_2f0_xda8(uVar7,param_2);
  if (iVar3 == iVar1) {
    bVar2 = true;
    if (((param_1[1] & 2) == 0) && ((param_1[1] & 1) == 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      return 1;
    }
  }
  if ((param_1[1] & 0x80) == 0) {
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    lVar8 = Script_GetElem_2f0_xda8(uVar7,param_2);
    if (lVar8 < 1) {
      uVar6 = 1;
      param_1[1] = param_1[1] | 1;
      param_1[2] = 0xffffffff;
    }
    else {
      lVar8 = SeqGen_ComputeDuration(uVar7,param_2);
      if (lVar8 == 0) {
        uVar6 = 0;
      }
      else {
        SeqGen_GetTrackRangeC(uVar7,param_2,&uStack_4,&uStack_8);
        SeqGen_GetTrackRangeB(uVar7,param_2,&uStack_c,&uStack_10);
        SeqGen_GetTrackRangeA(uVar7,param_2,&uStack_14,&uStack_18);
        uVar4 = Script_GetElem_2f0_xda8(uVar7,param_2);
        cVar9 = (char)*param_1;
        if (cVar9 < '\0') {
          uVar5 = *_g_ComposerShared3;
        }
        else {
          uVar5 = (int)*_g_ComposerShared3 >> ((int)cVar9 & 0x1fU) & 1;
        }
        if ((((uVar5 == 0) && (lVar8 = Composer_GetPartEntry(cVar9), lVar8 != 0)) &&
            (cVar9 = Snd_IsBusy(*param_1), cVar9 == '\0')) &&
           (lVar8 = Snd_PlayStream(*param_1,uStack_4,uStack_8,uStack_c,uStack_10,uStack_14,uStack_18
                                  ), lVar8 != 0)) {
          uVar6 = 1;
          param_1[1] = param_1[1] | 2;
          param_1[2] = uVar4;
        }
        else {
          uVar6 = 0;
          param_1[1] = param_1[1] & 0xfffffffd;
          param_1[2] = 0xffffffff;
        }
      }
    }
  }
  else {
    if (((param_1[1] & 0x80) != 0) && (lVar8 = Snd_QueueCmd1(*param_1), lVar8 != 0)) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    uVar6 = 0;
  }
  return uVar6;
}

// 0x002f6990  size 0x24c
/* WARNING: Removing unreachable block (ram,0x002f6a40) */
/* WARNING: Removing unreachable block (ram,0x002f6a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Composer_PreviewInstrument(undefined4 *param_1,long param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar6 = Script_Nop();
  if ((param_2 < 0) || (0x10c < param_2)) {
    uVar5 = 0;
  }
  else {
    uVar4 = param_1[2];
    uVar3 = SeqGen_GetPatternId(param_2);
    if ((uVar3 & 0xffff) == uVar4) {
      bVar1 = true;
      if (((param_1[1] & 2) == 0) && ((param_1[1] & 1) == 0)) {
        bVar1 = false;
      }
      if (bVar1) {
        return 1;
      }
    }
    if ((param_1[1] & 0x80) == 0) {
      param_1[1] = 0;
      param_1[2] = 0xffffffff;
      sVar2 = SeqGen_GetPatternId(param_2);
      if (sVar2 == 0) {
        uVar5 = 1;
        param_1[1] = param_1[1] | 1;
        param_1[2] = 0xffffffff;
      }
      else {
        SeqGen_GetInstrumentIds(uVar6,param_2,&uStack_4,&uStack_8,&uStack_c);
        uVar4 = SeqGen_GetPatternId(param_2);
        cVar8 = (char)*param_1;
        if (cVar8 < '\0') {
          uVar3 = *_g_ComposerShared3;
        }
        else {
          uVar3 = (int)*_g_ComposerShared3 >> ((int)cVar8 & 0x1fU) & 1;
        }
        if ((((uVar3 == 0) && (lVar7 = Composer_GetPartEntry(cVar8), lVar7 != 0)) &&
            (cVar8 = Snd_IsBusy(*param_1), cVar8 == '\0')) &&
           (lVar7 = Snd_PlayStreamEx(*param_1,uStack_4,uStack_8,uStack_c,0), lVar7 != 0)) {
          uVar5 = 1;
          param_1[1] = param_1[1] | 2;
          param_1[2] = uVar4 & 0xffff;
        }
        else {
          uVar5 = 0;
          param_1[1] = param_1[1] & 0xfffffffd;
          param_1[2] = 0xffffffff;
        }
      }
    }
    else {
      if (((param_1[1] & 0x80) != 0) && (lVar7 = Snd_QueueCmd1(*param_1), lVar7 != 0)) {
        param_1[1] = param_1[1] & 0xffffff7f;
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}

// 0x002f6be0  size 0x4c
undefined4 Composer_GetModeSongs(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)maybe_Race_GetMode();
  iVar2 = 0;
  do {
    if (param_1 == *piVar1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0xc);
  return 0;
}

// 0x002f6c30  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Composer_RequestRedraw(void)

{
  _g_NameentryShared2 = 2;
  return;
}

// 0x002f6c40  size 0x138
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Nameentry_Draw_Rokko(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (_g_NameentryShared2 == 2) {
    bVar1 = UiLayout_UpdateAnimById(_g_NameentryShared1,1);
    if (!bVar1) {
      _g_NameentryShared2 = 3;
    }
  }
  else if ((_g_NameentryShared2 == 0) &&
          (bVar1 = UiLayout_UpdateAnimById(_g_NameentryShared1,0), !bVar1)) {
    _g_NameentryShared2 = 1;
  }
  MenuWnd_DrawText(_g_NameentryShared1,_g_ComposerShared1,param_1);
  if (_g_ComposerShared2 == 1) {
    MenuWnd_DrawText(4,0x1b,9);
    MenuWnd_DrawText(4,0x1d,10);
    if (_g_NameentryShared2 == 1) {
      MenuWnd_SetItemState(4,*(undefined4 *)(param_2 * 4 + 0x36ef00),1,0);
    }
    else {
      MenuWnd_SetItemVisible(0);
    }
  }
  UiLayout_UpdateAnimById(_g_NameentryShared1,2);
  iVar2 = UiMgr_FindLayout(_g_NameentryShared1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  return _g_NameentryShared2;
}

// 0x002f6d80  size 0x34c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Composer_ShowPanel(uint param_1)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  _g_ComposerShared2 = param_1 & 0xff;
  if (_g_ComposerShared2 == 0) {
    uVar2 = UiRes_GetLayoutData(0x27);
    iVar3 = UiMgr_FindLayout(3);
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
    pUVar1[iVar3].layout.unk_31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x28);
    iVar3 = UiMgr_FindLayout(3);
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
    uVar4 = UiRes_GetLayoutData(0x29);
    iVar3 = UiMgr_FindLayout(3);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    _g_NameentryShared1 = 3;
    _g_ComposerShared1 = 0xf;
  }
  else {
    uVar2 = UiRes_GetLayoutData(0x34);
    iVar3 = UiMgr_FindLayout(4);
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
    pUVar1[iVar3].layout.unk_31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x35);
    iVar3 = UiMgr_FindLayout(4);
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
    uVar4 = UiRes_GetLayoutData(0x36);
    iVar3 = UiMgr_FindLayout(4);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
    _g_NameentryShared1 = 4;
    _g_ComposerShared1 = 0x1c;
  }
  _g_NameentryShared2 = 0;
  return;
}

// 0x002f70d0  size 0x30
/* 13-column character grid */

char Keyboard_GetChar(int *param_1)

{
  return s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*param_1 + param_1[1] * 0xd];
}

// 0x002f7100  size 0x68
undefined8 Keyboard_IsCharAllowed(int *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*param_1 + param_1[1] * 0xd];
  bVar2 = false;
  if ((cVar1 != '<') && (cVar1 != '>')) {
    bVar2 = true;
  }
  if ((bVar2) && (cVar1 != '\0')) {
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f7170  size 0x20
int Keyboard_GetIndex(int *param_1)

{
  return *param_1 + param_1[1] * 0xd;
}

// 0x002f7190  size 0x2a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "ABCDEF...0123456789-_" */

undefined4 Keyboard_Update(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  piVar5 = (int *)param_1;
  uVar9 = 0;
  uVar7 = 0;
  pcVar6 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500 + *piVar5;
  do {
    if (*pcVar6 != '\0') {
      uVar9 = uVar9 | 1 << (uVar7 & 0x1f);
    }
    uVar7 = uVar7 + 1;
    pcVar6 = pcVar6 + 0xd;
  } while ((int)uVar7 < 6);
  uVar7 = 0;
  pcVar6 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500 + piVar5[1] * 0xd;
  do {
    if (*pcVar6 != '\0') {
      uVar8 = uVar8 | 1 << (uVar7 & 0x1f);
    }
    uVar7 = uVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while ((int)uVar7 < 0xd);
  Composer_MoveCursor(param_1,1,0xc,1,uVar8);
  Composer_MoveCursor(piVar5 + 1,0,5,1,uVar9);
  lVar4 = ComposerInput_GetPressed();
  if ((lVar4 == 0x100) || (lVar4 == 0x80)) {
    cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00343500[*piVar5 + piVar5[1] * 0xd];
    if (cVar1 == '>') {
      cVar1 = (char)piVar5[3];
      bVar2 = true;
      iVar3 = 0;
      do {
        if (cVar1 == '\0') {
LAB_002f7388:
          if (bVar2) {
            maybe_strncpy(piVar5 + 3,_s_Keyboard_Update_1,0x10);
            iVar3 = strlen(piVar5 + 3);
            piVar5[2] = iVar3;
          }
          return 1;
        }
        if (*(char *)((int)piVar5 + iVar3 + 0xc) != ' ') {
          bVar2 = false;
          goto LAB_002f7388;
        }
        cVar1 = *(char *)((int)piVar5 + iVar3 + 0xd);
        iVar3 = iVar3 + 1;
      } while( true );
    }
    if (cVar1 == '<') {
      iVar3 = piVar5[2];
      if (0 < iVar3) {
        piVar5[2] = iVar3 + -1;
        *(undefined1 *)((int)piVar5 + iVar3 + 0xb) = 0;
      }
    }
    else {
      if (0xd < piVar5[2]) {
        *(char *)((int)piVar5 + 0x1a) = cVar1;
        *(undefined1 *)((int)piVar5 + 0x1b) = 0;
        iVar3 = strlen(piVar5 + 3);
        piVar5[2] = iVar3;
        *piVar5 = 1;
        piVar5[1] = 5;
        return 1;
      }
      iVar3 = piVar5[2];
      piVar5[2] = iVar3 + 1;
      *(char *)((int)piVar5 + iVar3 + 0xc) = cVar1;
      *(undefined1 *)((int)piVar5 + piVar5[2] + 0xc) = 0;
    }
  }
  else if ((lVar4 == 0x200) || (lVar4 == 0x40)) {
    iVar3 = piVar5[2];
    if (iVar3 == 0) {
      return 2;
    }
    piVar5[2] = iVar3 + -1;
    *(undefined1 *)((int)piVar5 + iVar3 + 0xb) = 0;
  }
  else if (lVar4 == 2) {
    *piVar5 = 1;
    piVar5[1] = 5;
    Se_PlayMenuVol(5,0x60);
  }
  return 0;
}

// 0x002f7430  size 0x50
void Keyboard_Init(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  maybe_strncpy(param_1 + 3,param_2,0xf);
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  uVar1 = strlen(param_1 + 3);
  param_1[2] = uVar1;
  *(undefined1 *)((int)param_1 + param_1[2] + 0xc) = 0;
  return;
}

// 0x002f7480  size 0x19c
void Composer_OnTextureLoaded(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_1 == param_4[0xe]) {
    Tex_Relocate(param_4[1]);
    uVar1 = *(ushort *)(param_4[1] + 6);
    iVar2 = Tex_UploadAll(param_4[1],0x412,0,0,0);
    if ((param_4[0xd] != 0) && (uVar6 = 0, uVar1 != 0)) {
      do {
        iVar3 = Tex_GetEntry(param_4[1],uVar6);
        *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xc000;
        if (*(int *)(iVar3 + 4) != 0) {
          uVar5 = Tex_GetPageCount(((ulong)*(ushort *)(iVar3 + 0x1a) & 0x3ff) >> 4,
                                   *(undefined2 *)(iVar3 + 0x14),*(undefined2 *)(iVar3 + 0x16));
          *(ulong *)(iVar3 + 0x18) =
               *(ulong *)(iVar3 + 0x18) & 0xfff8001fffffffff | (uVar5 & 0x3fff) << 0x25;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    if (param_4[2] != 0) {
      DmaBuf_Alloc(param_4 + 4,*param_4,iVar2 + 1);
      Pkt_AddTextureUploadAll(param_4 + 4,param_4[1],param_4[8],param_4[9]);
    }
    uVar4 = Mem_Alloc16((uint)uVar1 << 7,*param_4);
    param_4[3] = uVar4;
    TexSlot_Bind(param_4[3],param_4[1],param_4[2],param_4[8],param_4[9],param_4[10],0,0);
    param_4[0xc] = 0;
  }
  return;
}

// 0x002f7620  size 0x30
void ComposerTex_Clear(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  return;
}

// 0x002f7650  size 0x2fc
void ComposerTex_Draw(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint auStack_c440 [12544];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 4) != 0) {
    TexSlot_Set(0,*(undefined2 *)(*(int *)(param_1 + 4) + 6),*(undefined4 *)(param_1 + 0xc));
    iVar6 = 0;
    iVar2 = param_1;
    do {
      if (0 < *(int *)(iVar2 + 0x93c)) {
        iVar4 = 0;
        puVar5 = auStack_c440;
        Pkt_Init(auStack_40,2,2,0);
        Pkt_SubmitToChain(auStack_40,iVar6);
        if (*(int *)(param_1 + 8) != 0) {
          Pkt_Flush(auStack_40,param_1 + 0x10);
        }
        iVar3 = 0;
        iVar1 = param_1;
        do {
          if (iVar6 == *(int *)(iVar1 + 0x3c)) {
            Obj_Reset(puVar5,4,0xffffffffffffffff);
            Obj_SetVisible(puVar5,1,0,*(undefined4 *)(iVar1 + 0x48));
            puVar5[0xa7] = *(uint *)(iVar1 + 0x4c);
            *puVar5 = *puVar5 | 2;
            fVar7 = *(float *)(iVar1 + 0x50) * 128.0;
            if (2.1474836e+09 <= fVar7) {
              fVar7 = fVar7 - 2.1474836e+09;
            }
            puVar5[0xb3] = (int)fVar7 & 0xff;
            puVar5[0xb4] = 0;
            puVar5[0xb5] = 0;
            uVar8 = *(uint *)(iVar1 + 0x44);
            puVar5[0xbc] = *(uint *)(iVar1 + 0x40);
            puVar5[0xbd] = uVar8;
            uVar8 = *(uint *)(iVar1 + 0x58);
            uVar9 = *(uint *)(iVar1 + 0x54);
            *puVar5 = *puVar5 | 4;
            puVar5[0xb8] = uVar9;
            puVar5[0xb9] = uVar8;
            if (*(int *)(iVar1 + 0x5c) == 0) {
              *puVar5 = *puVar5 & 0xfffffdff;
            }
            else {
              *puVar5 = *puVar5 | 0x200;
            }
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 0xc4;
            if (*(int *)(iVar2 + 0x93c) <= iVar4) break;
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0x24;
        } while (iVar3 < 0x40);
        if (*(int *)(iVar2 + 0x950) != 0) {
          Pkt_SetScissor(auStack_40,*(undefined4 *)(iVar2 + 0x940),*(undefined4 *)(iVar2 + 0x944),
                         *(undefined4 *)(iVar2 + 0x948),*(undefined4 *)(iVar2 + 0x94c),0);
        }
        Pkt_AddPrimitives(auStack_40,auStack_c440,((int)puVar5 - (int)auStack_c440) / 0x310);
        if (*(int *)(iVar2 + 0x950) != 0) {
          Pkt_SetScissor(auStack_40,0,0,0,0,0);
        }
        Pkt_Submit(auStack_40,0);
        *(undefined4 *)(iVar2 + 0x93c) = 0;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar6 < 0x20);
    *(undefined4 *)(param_1 + 0xc3c) = 0;
  }
  return;
}

// 0x002f7960  size 0xbc
void ComposerTex_Animate(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((float)param_2[5] != 0.0) {
    iVar1 = param_1 + *(int *)(param_1 + 0xc3c) * 0x24;
    *(undefined4 *)(iVar1 + 0x3c) = *param_2;
    *(undefined4 *)(iVar1 + 0x40) = param_2[1];
    *(undefined4 *)(iVar1 + 0x44) = param_2[2];
    *(undefined4 *)(iVar1 + 0x48) = param_2[3];
    *(undefined4 *)(iVar1 + 0x4c) = param_2[4];
    *(undefined4 *)(iVar1 + 0x50) = param_2[5];
    *(undefined4 *)(iVar1 + 0x54) = param_2[6];
    *(undefined4 *)(iVar1 + 0x58) = param_2[7];
    *(undefined4 *)(iVar1 + 0x5c) = param_2[8];
    iVar1 = *(int *)(*(int *)(param_1 + 0xc3c) * 0x24 + param_1 + 0x3c) * 0x18 + param_1;
    *(int *)(iVar1 + 0x93c) = *(int *)(iVar1 + 0x93c) + 1;
    *(int *)(param_1 + 0xc3c) = *(int *)(param_1 + 0xc3c) + 1;
  }
  return;
}

// 0x002f7a20  size 0x38
void ComposerTex_SetRect(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6
                        )

{
  param_1 = param_2 * 0x18 + param_1;
  *(int *)(param_1 + 0x940) = (int)param_3;
  *(int *)(param_1 + 0x944) = (int)param_4;
  *(int *)(param_1 + 0x948) = (int)param_5;
  *(int *)(param_1 + 0x94c) = (int)param_6;
  *(uint *)(param_1 + 0x950) =
       (uint)(param_6 != 0 || (param_5 != 0 || (param_3 != 0 || param_4 != 0)));
  return;
}

// 0x002f7a60  size 0xec
void ComposerTex_Init(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0xf] = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0x3f800000;
    puVar1[0x15] = 0x3f800000;
    puVar1[0x16] = 0x3f800000;
    puVar1[0x17] = 0;
    puVar1 = puVar1 + 9;
  } while (iVar2 < 0x40);
  Mem_Set16(param_1 + 0x24f,0,0x300);
  param_1[0x30f] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  DmaBuf_SetUncached(param_1 + 4,0,0);
  return;
}

// 0x002f7b50  size 0x5c
void ComposerTex_Free(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  DmaBuf_Free(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// 0x002f7bb0  size 0xb0
void ComposerTex_Load(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = g_ArcToc->entries[(int)param_2].unpackedSize;
  if (uVar1 == 0) {
    uVar1 = g_ArcToc->entries[(int)param_2].sectorCount;
  }
  else {
    uVar1 = uVar1 + 0x7ff >> 0xb;
  }
  puVar3 = (undefined4 *)param_1;
  uVar2 = Mem_AllocAligned(uVar1 << 0xb,0x40,*puVar3);
  puVar3[1] = uVar2;
  uVar2 = Arc_LoadFileEx(param_2,puVar3[1],0x2f7480,param_1,0,0);
  puVar3[0xe] = uVar2;
  puVar3[0xd] = param_3;
  puVar3[0xc] = 1;
  return;
}

// 0x002f7c60  size 0x8
undefined4 Nameentry_GetField_4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x002f7c70  size 0x8
undefined4 Nameentry_GetField_8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x002f7c80  size 0x8
undefined4 Nameentry_Nop(undefined4 *param_1)

{
  return *param_1;
}

// 0x002f7c90  size 0x58
undefined4 PreviewSnd_Update(undefined4 *param_1)

{
  char cVar1;
  
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) != 0) {
      return 1;
    }
  }
  else {
    cVar1 = Snd_IsBusy(*param_1);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

// 0x002f7cf0  size 0x28
undefined8 PreviewSnd_IsIdle(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((*(uint *)(param_1 + 4) & 2) == 0) && ((*(uint *)(param_1 + 4) & 1) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002f7d20  size 0x60
void PreviewSnd_Stop(undefined4 *param_1)

{
  long lVar1;
  
  if (((param_1[1] & 0x80) != 0) && (lVar1 = Snd_QueueCmd1(*param_1), lVar1 != 0)) {
    param_1[1] = param_1[1] & 0xffffff7f;
  }
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 0x002f7d80  size 0x1f8
undefined4 PreviewSnd_Play(undefined4 *param_1,undefined8 param_2,short param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((param_1[1] & 1) != 0) goto LAB_002f7ea4;
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) == 0) goto LAB_002f7dd8;
    bVar1 = true;
  }
  else {
    cVar2 = Snd_IsBusy(*param_1);
    if (cVar2 == '\0') {
      bVar1 = true;
    }
    else {
LAB_002f7dd8:
      bVar1 = false;
    }
  }
  if (((((!bVar1) || ((param_1[1] & 0x80) != 0)) ||
       (lVar4 = Snd_QueueCmd3(*param_1,0,0), lVar4 == 0)) ||
      ((lVar4 = Snd_QueueCmd2b(*param_1,param_2), lVar4 == 0 || ((param_1[1] & 0x80) != 0)))) ||
     ((param_1[1] & 1) != 0)) goto LAB_002f7ea4;
  if ((param_1[1] & 2) == 0) {
    if ((param_1[1] & 1) == 0) goto LAB_002f7e68;
    bVar1 = true;
  }
  else {
    cVar2 = Snd_IsBusy(*param_1);
    if (cVar2 == '\0') {
      bVar1 = true;
    }
    else {
LAB_002f7e68:
      bVar1 = false;
    }
  }
  if (bVar1) {
    lVar4 = Snd_QueueCmd2(*param_1,0);
    if (lVar4 == 0) {
      param_1[1] = param_1[1] & 0xffffff7f;
    }
    else {
      param_1[1] = param_1[1] | 0x80;
    }
  }
LAB_002f7ea4:
  if ((param_1[1] & 0x80) == 0) {
    uVar3 = 0;
  }
  else {
    if ((0x13 < param_3) && (param_3 < 0x100)) {
      Snd_QueueCmd2c(*param_1);
    }
    if ((-1 < param_4) && (param_4 <= '\x7f')) {
      Snd_QueueCmd3c(*param_1,0,param_4);
      Snd_QueueCmd3c(*param_1,1,param_4);
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 0x002f7f80  size 0x58
/* 13 callers */

undefined4 PreviewSnd_StopIfPlaying(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (((param_1[1] & 0x80) == 0) || (lVar2 = Snd_QueueCmd1(*param_1), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    param_1[1] = param_1[1] & 0xffffff7f;
  }
  return uVar1;
}

// 0x002f7fe0  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool PreviewSnd_QueueStop(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_10;
  
  uVar1 = *param_1;
  bVar2 = _s_SndCmdCount < 0x30;
  if (bVar2) {
    iVar3 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar3 + 0x42db00) = 0x208;
    *(undefined4 *)(iVar3 + 0x42db04) = uVar1;
    *(undefined4 *)(iVar3 + 0x42db08) = param_2;
    *(undefined4 *)(iVar3 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar3 + 0x42db10) = uStack_10;
  }
  return bVar2;
}

// 0x002f7ff0  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool PreviewSnd_QueuePause(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_10;
  
  uVar1 = *param_1;
  bVar2 = _s_SndCmdCount < 0x30;
  if (bVar2) {
    iVar3 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar3 + 0x42db00) = 0x209;
    *(undefined4 *)(iVar3 + 0x42db04) = uVar1;
    *(undefined4 *)(iVar3 + 0x42db08) = param_2;
    *(undefined4 *)(iVar3 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar3 + 0x42db10) = uStack_10;
  }
  return bVar2;
}

