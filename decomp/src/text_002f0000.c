// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002f0000 - 0x002f4000
#include "ghidra_types.h"

// 0x002f0270  size 0x5b4
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawEquipment" (was
   ScrDraw_Equipment_Exit) */

void maybe_ComposerTask_State10_State30_DrawEquipment(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  lVar5 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar5 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0xd74);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x3d);
    iVar4 = UiMgr_FindLayout(0x12);
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
    uVar3 = UiRes_GetLayoutData(0x3e);
    iVar4 = UiMgr_FindLayout(0x12);
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
    uVar3 = UiRes_GetLayoutData(0x3f);
    iVar4 = UiMgr_FindLayout(0x13);
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
    uVar3 = UiRes_GetLayoutData(0x40);
    iVar4 = UiMgr_FindLayout(0x13);
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
    Composer_ShowPanel();
    uVar3 = *(undefined4 *)(param_1 + 0xd74);
  }
  lVar5 = Nameentry_Draw_Rokko(0x4b,uVar3);
  lVar6 = Nameentry_Nop_2(param_1 + 0xc44);
  if (lVar6 == 0xb) {
    lVar6 = UiLayout_UpdateAnimById(0x12,0);
    lVar7 = UiLayout_UpdateAnimById(0x13,0);
    if ((lVar5 == 1 && lVar6 == 0) && lVar7 == 0) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  else if (lVar5 == 1) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  lVar6 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar6 != 0) {
    if (lVar5 == 1) {
      Composer_RequestRedraw();
    }
    lVar6 = Nameentry_GetField_8_81f0(param_1 + 0xc44);
    if ((lVar6 == 0xd) || (lVar6 = Nameentry_GetField_8_81f0(param_1 + 0xc44), lVar6 == 0xf)) {
      if (lVar5 == 3) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0x12,1);
      lVar7 = UiLayout_UpdateAnimById(0x13,1);
      if ((lVar5 == 3 && lVar6 == 0) && lVar7 == 0) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
  }
  lVar5 = ComposerScene_IsChanging();
  if ((lVar5 == 0) || (lVar5 = ComposerScene_GetPage(), lVar5 != 3)) {
    iVar10 = 0;
    puVar9 = &DAT_00343350;
    puVar8 = &DAT_00343370;
    iVar4 = param_1;
    do {
      if (*(int *)(iVar4 + 0xd08) == 0) {
        iVar2 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,*puVar9,8);
      }
      else {
        iVar2 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar2].layout,*puVar9,8);
      }
      if (*(int *)(iVar4 + 0xd28) == 0) {
        iVar2 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,*puVar8,8);
      }
      else {
        iVar2 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,*puVar8,8);
      }
      iVar10 = iVar10 + 1;
      iVar4 = iVar4 + 4;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar10 < 8);
    iVar4 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
    maybe_ComposerUi_DrawPlayhead(param_1);
    maybe_ComposerUi_DrawNotes(param_1,1);
    maybe_ComposerUi_DrawCursor(param_1,1);
    maybe_ComposerUi_DrawGrid(param_1,0);
  }
  iVar4 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002f0830  size 0x840
void MenuScr_Draw_Equipment(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  lVar5 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar5 != 0) {
    uVar3 = UiRes_GetLayoutData(0x37);
    iVar4 = UiMgr_FindLayout(0x11);
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
    uVar3 = UiRes_GetLayoutData(0x38);
    iVar4 = UiMgr_FindLayout(0x11);
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
    uVar3 = UiRes_GetLayoutData(0x39);
    iVar4 = UiMgr_FindLayout(0x11);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x3d);
    iVar4 = UiMgr_FindLayout(0x12);
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
    uVar3 = UiRes_GetLayoutData(0x3e);
    iVar4 = UiMgr_FindLayout(0x12);
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
    uVar3 = UiRes_GetLayoutData(0x3f);
    iVar4 = UiMgr_FindLayout(0x13);
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
    uVar3 = UiRes_GetLayoutData(0x40);
    iVar4 = UiMgr_FindLayout(0x13);
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
    Menu_ClearSlot(0);
    *(uint *)(param_1 + 0xccc) = *(uint *)(param_1 + 0xccc) & 0xfffffbff;
  }
  lVar5 = Nameentry_Nop_2(param_1 + 0xc44);
  if (lVar5 == 0xe) {
    lVar5 = UiLayout_UpdateAnimById(0x11,0);
    if (lVar5 == 0) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0x11,0);
    lVar6 = UiLayout_UpdateAnimById(0x12,0);
    lVar7 = UiLayout_UpdateAnimById(0x13,0);
    if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
      Composer_ClearDirty(param_1 + 0xc44);
    }
  }
  lVar5 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar5 != 0) {
    lVar5 = Nameentry_GetField_8_81f0(param_1 + 0xc44);
    if (lVar5 == 0xe) {
      lVar5 = UiLayout_UpdateAnimById(0x11,1);
      if (lVar5 == 0) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0x11,1);
      lVar6 = UiLayout_UpdateAnimById(0x12,1);
      lVar7 = UiLayout_UpdateAnimById(0x13,1);
      if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
        Composer_ConsumeRedraw(param_1 + 0xc44);
      }
    }
  }
  lVar5 = Nameentry_GetField_14(param_1 + 0xc44);
  if ((lVar5 == 0) && (lVar5 = Nameentry_GetField_18(param_1 + 0xc44), lVar5 == 0)) {
    MenuWnd_SetItemState(0x11,*(undefined4 *)(&DAT_00343340 + *(int *)(param_1 + 0xd6c) * 4),1,0);
  }
  lVar5 = ComposerScene_IsChanging();
  if ((lVar5 == 0) || (lVar5 = ComposerScene_GetPage(), lVar5 != 3)) {
    iVar10 = 0;
    puVar9 = &DAT_00343350;
    puVar8 = &DAT_00343370;
    iVar4 = param_1;
    do {
      if (*(int *)(iVar4 + 0xd08) == 0) {
        iVar2 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,*puVar9,8);
      }
      else {
        iVar2 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar2].layout,*puVar9,8);
      }
      if (*(int *)(iVar4 + 0xd28) == 0) {
        iVar2 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,*puVar8,8);
      }
      else {
        iVar2 = UiMgr_FindLayout(0xc);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar2].layout,*puVar8,8);
      }
      iVar10 = iVar10 + 1;
      iVar4 = iVar4 + 4;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar10 < 8);
    iVar4 = UiMgr_FindLayout(0xc);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x69,9,*(undefined4 *)(param_1 + 0xcc0));
    maybe_ComposerUi_DrawPlayhead(param_1);
    maybe_ComposerUi_DrawNotes(param_1,1);
    maybe_ComposerUi_DrawCursor(param_1,1);
    maybe_ComposerUi_DrawGrid(param_1,0);
  }
  MenuWnd_DrawText(0x11,0x21,0x3f);
  MenuWnd_DrawText(0x11,0x22,0x40);
  MenuWnd_DrawText(0x11,0x23,0x41);
  iVar4 = *(int *)(param_1 + 0xd6c);
  if (iVar4 == 2) {
    MenuWnd_DrawText(0x13,0xd,0x45);
  }
  else if (iVar4 == 1) {
    MenuWnd_DrawText(0x13,0xd,0x44);
  }
  else if (iVar4 == 0) {
    MenuWnd_DrawText(0x13,0xd,0x43);
  }
  iVar4 = UiMgr_FindLayout(0xc);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_UpdateAnimById(0x11,2);
  iVar4 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
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
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x002f1180  size 0x6b4
/* state of maybe_ComposerTask; on-screen text/callee hint "DrawTestCourse" (was
   ScrDraw_TestCourse_Exit) */

void maybe_ComposerTask_State10_State27_DrawTestCourse(int param_1)

{
  UiLayoutSlot *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined1 auStack_4 [4];
  
  lVar7 = Composer_ConsumeConfirm(param_1 + 0xc44);
  if (lVar7 != 0) {
    uVar5 = UiRes_GetLayoutData(5);
    iVar6 = UiMgr_FindLayout(2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x31c = uVar5;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(6);
    iVar6 = UiMgr_FindLayout(2);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar5;
    pUVar1[iVar6].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(7);
    iVar6 = UiMgr_FindLayout(2);
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
    uVar5 = UiRes_GetLayoutData(8);
    iVar6 = UiMgr_FindLayout(2);
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
    uVar5 = UiRes_GetLayoutData(9);
    iVar6 = UiMgr_FindLayout(2);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x364 = 1;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(10);
    iVar6 = UiMgr_FindLayout(2);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x37c = 1;
  }
  lVar7 = UiLayout_UpdateAnimById(2,0);
  lVar8 = UiLayout_UpdateAnimById(2,2);
  if (lVar7 == 0 && lVar8 == 0) {
    Composer_ClearDirty(param_1 + 0xc44);
  }
  UiLayout_UpdateAnimById(2,4);
  UiLayout_UpdateAnimById(2,5);
  iVar6 = 0;
  if (DAT_003431b0 != -1) {
    piVar10 = &DAT_003431b0;
    do {
      iVar3 = Keyboard_GetIndex(param_1 + 0xc64);
      if (((iVar6 == iVar3) && (lVar7 = Nameentry_GetField_14(param_1 + 0xc44), lVar7 == 0)) &&
         (lVar7 = Nameentry_GetField_18(param_1 + 0xc44), lVar7 == 0)) {
        iVar3 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,*piVar10,8);
      }
      else if (*piVar10 != 0) {
        iVar3 = UiMgr_FindLayout(2);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*piVar10,8);
      }
      piVar10 = piVar10 + 1;
      iVar6 = iVar6 + 1;
    } while (*piVar10 != -1);
  }
  puVar4 = (undefined1 *)0x2;
  puVar9 = auStack_4;
  puVar2 = puVar9;
  while (puVar2 != (undefined1 *)0x0) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    puVar4 = puVar4 + -1;
    puVar2 = puVar4;
  }
  iVar6 = *(int *)(param_1 + 0xc6c);
  iVar3 = 0;
  if (0 < iVar6) {
    puVar11 = &DAT_003432c0;
    do {
      auStack_4[0] = *(undefined1 *)(param_1 + iVar3 + 0xc70);
      iVar6 = UiMgr_FindLayout(2);
      UiElem_GetRect(&g_UiMgr->slots[iVar6].layout,auStack_40,*puVar11);
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar6 = *(int *)(param_1 + 0xc6c);
      iVar3 = iVar3 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar3 < iVar6);
  }
  if ((iVar6 < 0xf) && (lVar7 = Keyboard_IsCharAllowed(param_1 + 0xc64), lVar7 != 0)) {
    auStack_4[0] = Keyboard_GetChar(param_1 + 0xc64);
    iVar6 = UiMgr_FindLayout(2);
    UiElem_GetRect(&g_UiMgr->slots[iVar6].layout,auStack_40,
                   (&DAT_003432c0)[*(int *)(param_1 + 0xc6c)]);
    UiText_DrawPlayerName(auStack_40,auStack_4,0);
    lVar7 = Nameentry_GetField_14(param_1 + 0xc44);
    if ((lVar7 == 0) && (lVar7 = Nameentry_GetField_18(param_1 + 0xc44), lVar7 == 0)) {
      iVar6 = UiMgr_FindLayout(2);
      UiElem_GetRect(&g_UiMgr->slots[iVar6].layout,auStack_40,
                     *(undefined4 *)(&DAT_00343300 + *(int *)(param_1 + 0xc6c) * 4));
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
    }
  }
  lVar7 = Nameentry_GetField_18(param_1 + 0xc44);
  if (lVar7 != 0) {
    lVar7 = UiLayout_UpdateAnimById(2,1);
    lVar8 = UiLayout_UpdateAnimById(2,3);
    if (lVar7 == 0 && lVar8 == 0) {
      Composer_ConsumeRedraw(param_1 + 0xc44);
    }
  }
  Composer_DrawLabel(0x27,3);
  UiLayout_UpdateAnimById(0,0);
  iVar6 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(2);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002f1840  size 0x9b8
void MenuScr_Draw_TestCourse(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar2 = (int)param_1;
  lVar5 = Composer_ConsumeConfirm(iVar2 + 0xc44);
  if (lVar5 != 0) {
    uVar3 = UiRes_GetLayoutData(0x27);
    iVar4 = UiMgr_FindLayout(3);
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
    uVar3 = UiRes_GetLayoutData(0x28);
    iVar4 = UiMgr_FindLayout(3);
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
    uVar3 = UiRes_GetLayoutData(0x29);
    iVar4 = UiMgr_FindLayout(3);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0x2a);
    iVar4 = UiMgr_FindLayout(0xd);
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
    uVar3 = UiRes_GetLayoutData(0x2b);
    iVar4 = UiMgr_FindLayout(0xd);
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
    uVar3 = UiRes_GetLayoutData(0x2c);
    iVar4 = UiMgr_FindLayout(0xd);
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
    uVar3 = UiRes_GetLayoutData(0x2d);
    iVar4 = UiMgr_FindLayout(0xd);
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
    uVar3 = UiRes_GetLayoutData(0x2e);
    iVar4 = UiMgr_FindLayout(0xd);
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
    uVar3 = UiRes_GetLayoutData(0x2f);
    iVar4 = UiMgr_FindLayout(0xd);
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
    uVar3 = UiRes_GetLayoutData(0x30);
    iVar4 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    uVar3 = UiRes_GetLayoutData(0x31);
    iVar4 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    uVar3 = UiRes_GetLayoutData(0x14);
    iVar4 = UiMgr_FindLayout(8);
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
    uVar3 = UiRes_GetLayoutData(0x15);
    iVar4 = UiMgr_FindLayout(8);
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
    uVar3 = UiRes_GetLayoutData(0x16);
    iVar4 = UiMgr_FindLayout(8);
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
    uVar3 = UiRes_GetLayoutData(0x17);
    iVar4 = UiMgr_FindLayout(8);
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
    MenuWnd_SetItemVisible(0);
  }
  lVar5 = UiLayout_UpdateAnimById(3,0);
  if (lVar5 == 0) {
    Composer_ClearDirty(iVar2 + 0xc44);
  }
  lVar5 = Nameentry_GetField_18(iVar2 + 0xc44);
  if (lVar5 != 0) {
    lVar5 = UiLayout_UpdateAnimById(3,1);
    lVar6 = UiLayout_UpdateAnimById(0xd,1);
    lVar7 = UiLayout_UpdateAnimById(0xd,3);
    lVar8 = UiLayout_UpdateAnimById(0xd,5);
    lVar9 = UiLayout_UpdateAnimById(8,1);
    if (lVar9 == 0 && (lVar8 == 0 && (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)))) {
      Composer_ConsumeRedraw(iVar2 + 0xc44);
    }
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
    iVar4 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  MenuWnd_DrawLabel(3,0xf,0x48,*(int *)(iVar2 + 0xd80) + 1);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById(0,0);
  iVar2 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_UpdateAnimById(3,2);
  iVar2 = UiMgr_FindLayout(3);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x002f2200  size 0x38c
void MenuScr_Draw_TestCourse_2200(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  
  iVar2 = (int)param_1;
  lVar5 = Composer_ConsumeConfirm(iVar2 + 0xc44);
  if (lVar5 != 0) {
    uVar3 = UiRes_GetLayoutData(0x32);
    iVar4 = UiMgr_FindLayout(0x10);
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
    uVar3 = UiRes_GetLayoutData(0x33);
    iVar4 = UiMgr_FindLayout(0x10);
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
    uVar3 = UiRes_GetLayoutData(0x36);
    iVar4 = UiMgr_FindLayout(0x10);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x10,0);
  if (lVar5 == 0) {
    Composer_ClearDirty(iVar2 + 0xc44);
  }
  lVar5 = Nameentry_GetField_18(iVar2 + 0xc44);
  if ((lVar5 != 0) && (lVar5 = UiLayout_UpdateAnimById(0x10,1), lVar5 == 0)) {
    Composer_ConsumeRedraw(iVar2 + 0xc44);
  }
  lVar5 = Nameentry_GetField_14(iVar2 + 0xc44);
  if ((lVar5 == 0) && (lVar5 = Nameentry_GetField_18(iVar2 + 0xc44), lVar5 == 0)) {
    MenuWnd_SetItemState(0x10,*(undefined4 *)(&DAT_0036eee8 + *(int *)(iVar2 + 0xd74) * 4),1,0);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  MenuWnd_DrawText(0x10,0x1b,9);
  MenuWnd_DrawText(0x10,0x1d,10);
  MenuWnd_DrawLabel(0x10,0x1c,0x4d,*(int *)(iVar2 + 0xd70) + 0xd);
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById(0,0);
  iVar2 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_UpdateAnimById(0x10,2);
  iVar2 = UiMgr_FindLayout(0x10);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x002f2590  size 0x38c
void MenuScr_Draw_TestCourse_2590(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  
  iVar2 = (int)param_1;
  lVar5 = Composer_ConsumeConfirm(iVar2 + 0xc44);
  if (lVar5 != 0) {
    uVar3 = UiRes_GetLayoutData(0x34);
    iVar4 = UiMgr_FindLayout(4);
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
    uVar3 = UiRes_GetLayoutData(0x35);
    iVar4 = UiMgr_FindLayout(4);
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
    uVar3 = UiRes_GetLayoutData(0x36);
    iVar4 = UiMgr_FindLayout(4);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(4,0);
  if (lVar5 == 0) {
    Composer_ClearDirty(iVar2 + 0xc44);
  }
  lVar5 = Nameentry_GetField_18(iVar2 + 0xc44);
  if ((lVar5 != 0) && (lVar5 = UiLayout_UpdateAnimById(4,1), lVar5 == 0)) {
    Composer_ConsumeRedraw(iVar2 + 0xc44);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  MenuWnd_DrawText(4,0x1b,9);
  MenuWnd_DrawText(4,0x1d,10);
  MenuWnd_DrawLabel(4,0x1c,0x49,*(int *)(iVar2 + 0xd70) + 0xd);
  lVar5 = Nameentry_GetField_14(iVar2 + 0xc44);
  if ((lVar5 == 0) && (lVar5 = Nameentry_GetField_18(iVar2 + 0xc44), lVar5 == 0)) {
    MenuWnd_SetItemState(4,*(undefined4 *)(&DAT_0036eee0 + *(int *)(iVar2 + 0xd74) * 4),1,0);
  }
  Composer_DrawLabel(0xffffffffffffffff,3);
  UiLayout_UpdateAnimById(0,0);
  iVar2 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_UpdateAnimById(4,2);
  iVar2 = UiMgr_FindLayout(4);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x002f2920  size 0x8f8
void MenuScr_Draw_TestCourse_2920(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar4 = (int)param_1;
  lVar5 = Composer_ConsumeConfirm(iVar4 + 0xc44);
  if (lVar5 != 0) {
    uVar2 = UiRes_GetLayoutData(0x2a);
    iVar3 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x2b);
    iVar3 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x2c);
    iVar3 = UiMgr_FindLayout(0xd);
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
    uVar2 = UiRes_GetLayoutData(0x2d);
    iVar3 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar2 = UiRes_GetLayoutData(0x2e);
    iVar3 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    uVar2 = UiRes_GetLayoutData(0x2f);
    iVar3 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    uVar2 = UiRes_GetLayoutData(0x30);
    iVar3 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    uVar2 = UiRes_GetLayoutData(0x31);
    iVar3 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
    iVar3 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
    iVar3 = UiMgr_FindLayout(8);
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
    uVar2 = UiRes_GetLayoutData(0x17);
    iVar3 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x90,8);
  }
  lVar5 = Nameentry_Nop_2(iVar4 + 0xc44);
  if (((lVar5 == 8) || (lVar5 = Nameentry_Nop_2(iVar4 + 0xc44), lVar5 == 9)) ||
     ((lVar5 = Nameentry_Nop_2(iVar4 + 0xc44), lVar5 == 0xf &&
      ((*(uint *)(iVar4 + 0xccc) & 0x400) != 0)))) {
    Composer_ClearDirty(iVar4 + 0xc44);
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0xd,0);
    lVar6 = UiLayout_UpdateAnimById(0xd,2);
    lVar7 = UiLayout_UpdateAnimById(0xd,4);
    lVar8 = UiLayout_UpdateAnimById(8,0);
    if (lVar8 == 0 && (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0))) {
      Composer_ClearDirty(iVar4 + 0xc44);
      *(uint *)(iVar4 + 0xccc) = *(uint *)(iVar4 + 0xccc) | 0x400;
    }
  }
  lVar5 = Nameentry_GetField_18(iVar4 + 0xc44);
  if (lVar5 != 0) {
    lVar5 = Nameentry_GetField_8_81f0(iVar4 + 0xc44);
    if ((((lVar5 == 8) || (lVar5 = Nameentry_GetField_8_81f0(iVar4 + 0xc44), lVar5 == 9)) ||
        (lVar5 = Nameentry_GetField_8_81f0(iVar4 + 0xc44), lVar5 == 0xf)) ||
       (lVar5 = Nameentry_GetField_8_81f0(iVar4 + 0xc44), lVar5 == 10)) {
      Composer_ConsumeRedraw(iVar4 + 0xc44);
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xd,1);
      lVar6 = UiLayout_UpdateAnimById(0xd,3);
      lVar7 = UiLayout_UpdateAnimById(0xd,5);
      lVar8 = UiLayout_UpdateAnimById(8,1);
      if (lVar8 == 0 && (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0))) {
        Composer_ConsumeRedraw(iVar4 + 0xc44);
      }
    }
  }
  maybe_ComposerUi_AnimateNameC(param_1,0);
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,0);
  Composer_DrawLabel(0x47,3);
  UiLayout_UpdateAnimById(0,0);
  iVar4 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
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
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x002f3390  size 0x484
void MenuScr_Draw_TestCourse_3390(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar2 = (int)param_1;
  lVar5 = Composer_ConsumeConfirm(iVar2 + 0xc44);
  if (lVar5 != 0) {
    uVar3 = UiRes_GetLayoutData(0x32);
    iVar4 = UiMgr_FindLayout(0x10);
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
    uVar3 = UiRes_GetLayoutData(0x33);
    iVar4 = UiMgr_FindLayout(0x10);
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
    uVar3 = UiRes_GetLayoutData(0x36);
    iVar4 = UiMgr_FindLayout(0x10);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x10,0);
  if (lVar5 == 0) {
    Composer_ClearDirty(iVar2 + 0xc44);
  }
  lVar5 = Nameentry_GetField_18(iVar2 + 0xc44);
  if (lVar5 != 0) {
    lVar5 = Nameentry_GetField_8_81f0(iVar2 + 0xc44);
    if (lVar5 == 4) {
      lVar5 = UiLayout_UpdateAnimById(0x10,1);
      if (lVar5 == 0) {
        Composer_ConsumeRedraw(iVar2 + 0xc44);
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xd,1);
      lVar6 = UiLayout_UpdateAnimById(0xd,3);
      lVar7 = UiLayout_UpdateAnimById(0xd,5);
      lVar8 = UiLayout_UpdateAnimById(8,1);
      lVar9 = UiLayout_UpdateAnimById(0x10,1);
      if (lVar9 == 0 && (lVar8 == 0 && (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)))) {
        Composer_ConsumeRedraw(iVar2 + 0xc44);
      }
      iVar4 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
      iVar4 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
    }
  }
  lVar5 = Nameentry_GetField_14(iVar2 + 0xc44);
  if ((lVar5 == 0) && (lVar5 = Nameentry_GetField_18(iVar2 + 0xc44), lVar5 == 0)) {
    MenuWnd_SetItemState(0x10,*(undefined4 *)(*(int *)(iVar2 + 0xd74) * 4 + 0x36eed8),1,0);
  }
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,1);
  MenuWnd_DrawText(0x10,0x1b,9);
  MenuWnd_DrawText(0x10,0x1d,10);
  MenuWnd_DrawText(0x10,0x1c,0x4a);
  Composer_DrawLabel(0x42,3);
  UiLayout_UpdateAnimById(0,0);
  iVar2 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_UpdateAnimById(0x10,2);
  iVar2 = UiMgr_FindLayout(0x10);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x002f3820  size 0x964
void MenuScr_Draw_TestCourse_3820(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar4 = (int)param_1;
  lVar5 = Composer_ConsumeConfirm(iVar4 + 0xc44);
  if (lVar5 != 0) {
    lVar5 = Nameentry_Nop_2(iVar4 + 0xc44);
    if (lVar5 != 5) {
      uVar2 = UiRes_GetLayoutData(0);
      iVar3 = UiMgr_FindLayout(0);
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
    }
    uVar2 = UiRes_GetLayoutData(0x2a);
    iVar3 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x2b);
    iVar3 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x2c);
    iVar3 = UiMgr_FindLayout(0xd);
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
    uVar2 = UiRes_GetLayoutData(0x2d);
    iVar3 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar2 = UiRes_GetLayoutData(0x2e);
    iVar3 = UiMgr_FindLayout(0xd);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    uVar2 = UiRes_GetLayoutData(0x2f);
    iVar3 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    uVar2 = UiRes_GetLayoutData(0x30);
    iVar3 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    uVar2 = UiRes_GetLayoutData(0x31);
    iVar3 = UiMgr_FindLayout(0xd);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    uVar2 = UiRes_GetLayoutData(0x14);
    iVar3 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar2 = UiRes_GetLayoutData(0x15);
    iVar3 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar2;
    pUVar1[iVar3].layout.animState = 1;
    uVar2 = UiRes_GetLayoutData(0x16);
    iVar3 = UiMgr_FindLayout(8);
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
    uVar2 = UiRes_GetLayoutData(0x17);
    iVar3 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar2;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x8f,8);
    iVar3 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x90,8);
  }
  lVar5 = Nameentry_Nop_2(iVar4 + 0xc44);
  if (lVar5 == 5) {
    Composer_ClearDirty(iVar4 + 0xc44);
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0xd,0);
    lVar6 = UiLayout_UpdateAnimById(0xd,2);
    lVar7 = UiLayout_UpdateAnimById(0xd,4);
    lVar8 = UiLayout_UpdateAnimById(8,0);
    if (lVar8 == 0 && (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0))) {
      Composer_ClearDirty(iVar4 + 0xc44);
    }
  }
  lVar5 = Nameentry_GetField_18(iVar4 + 0xc44);
  if (lVar5 != 0) {
    lVar5 = Nameentry_GetField_8_81f0(iVar4 + 0xc44);
    if (lVar5 == 5) {
      Composer_ConsumeRedraw(iVar4 + 0xc44);
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xd,1);
      lVar6 = UiLayout_UpdateAnimById(0xd,3);
      lVar7 = UiLayout_UpdateAnimById(0xd,5);
      lVar8 = UiLayout_UpdateAnimById(8,1);
      if (lVar8 == 0 && (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0))) {
        Composer_ConsumeRedraw(iVar4 + 0xc44);
      }
      iVar4 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x8f,8);
      iVar4 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x90,8);
    }
  }
  maybe_ComposerUi_AnimateNameC(param_1,1);
  MenuWnd_DrawText(0xd,0x26,3);
  MenuWnd_DrawText(0xd,0x27,0x40);
  Eventui_Draw_Akagi_cdf0(param_1,1);
  Composer_DrawLabel(0x42,3);
  UiLayout_UpdateAnimById(0,0);
  iVar4 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

