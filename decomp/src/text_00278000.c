// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00278000 - 0x0027c000
#include "ghidra_types.h"

// 0x00278480  size 0xe1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Front_8480(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar2 != 0) {
    uVar5 = UiRes_GetLayoutData(0x145);
    iVar2 = UiMgr_FindLayout(0x69);
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
    uVar5 = UiRes_GetLayoutData(0x146);
    iVar2 = UiMgr_FindLayout(0x69);
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
    uVar5 = UiRes_GetLayoutData(0x147);
    iVar2 = UiMgr_FindLayout(0x69);
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
    uVar5 = UiRes_GetLayoutData(0x148);
    iVar2 = UiMgr_FindLayout(0x69);
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
    uVar5 = UiRes_GetLayoutData(0x149);
    iVar2 = UiMgr_FindLayout(0x69);
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
    uVar5 = UiRes_GetLayoutData(0x14a);
    iVar2 = UiMgr_FindLayout(0x69);
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
    uVar5 = UiRes_GetLayoutData(0x14b);
    iVar2 = UiMgr_FindLayout(0x69);
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
    uVar5 = UiRes_GetLayoutData(0x14c);
    iVar2 = UiMgr_FindLayout(0x69);
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
    uVar5 = UiRes_GetLayoutData(0x14d);
    iVar2 = UiMgr_FindLayout(0x69);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b4 = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3bc = uVar5;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x3b8 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x69,0x36ed98,2,0);
    if (*(int *)(param_1 + 0xa00) != 0x11) {
      *(undefined4 *)(param_1 + 0x9e8) = 0xffffffff;
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
  }
  UiLayout_UpdateAnimById(0x69,8);
  if (*(int *)(param_1 + 0xa00) == 0x11) {
    lVar6 = UiLayout_UpdateAnimById(0x69,0);
    lVar7 = UiLayout_UpdateAnimById(0x69,2);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(param_1 + 0xa10) = 0;
    }
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0x69,0);
    lVar7 = UiLayout_UpdateAnimById(0x69,1);
    lVar8 = UiLayout_UpdateAnimById(0x69,2);
    if (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0)) {
      *(undefined4 *)(param_1 + 0xa10) = 0;
    }
  }
  if (*(int *)(param_1 + 0xa18) == 0) {
    MenuWnd_DrawCursor();
  }
  else {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    if (*(int *)(param_1 + 0xa08) == 0x11) {
      lVar6 = UiLayout_UpdateAnimById(0x69,3);
      lVar7 = UiLayout_UpdateAnimById(0x69,5);
      if (lVar6 == 0 && lVar7 == 0) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0x69,3);
      lVar7 = UiLayout_UpdateAnimById(0x69,4);
      lVar8 = UiLayout_UpdateAnimById(0x69,5);
      if (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0)) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  iVar2 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
  iVar2 = *(int *)(iVar2 * 4 + param_1 + 0x20);
  if (iVar2 < 0) {
    iVar2 = UiMgr_FindLayout(0x69);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x2d,8);
LAB_002786e4:
    uVar11 = *(uint *)(param_1 + 0x18);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x69);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar3].layout,0x2d,8);
    if (0x1d < iVar2) {
      iVar3 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,0x2d,0x16,iVar2 + 0x53);
      goto LAB_002786e4;
    }
    iVar3 = UiMgr_FindLayout(0x69);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,0x2d,0x16,iVar2 + 0x1f);
    uVar11 = *(uint *)(param_1 + 0x18);
  }
  if (uVar11 < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar11) {
    case 0:
    case 1:
    case 2:
      *(undefined4 *)(param_1 + 0x9e4) = 0;
      MenuWnd_DrawText(0x69,0x3c,0x1e4);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x36,0x16,3);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3a,0x16,1);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3b,0x16,1);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3b,9,*(int *)(param_1 + 0x18) + 1);
      iVar2 = *(int *)(param_1 + 0x9e4);
      goto LAB_00278a98;
    case 3:
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0x9e4) = 1;
      MenuWnd_DrawText(0x69,0x3c,0x1e5);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x36,0x16,7);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3a,0x16,5);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3b,0x16,5);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3b,9,*(int *)(param_1 + 0x18) + -2);
      break;
    default:
      *(undefined4 *)(param_1 + 0x9e4) = 2;
      MenuWnd_DrawText(0x69,0x3c,0x1e6);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x36,0x16,2);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3a,0x16,0);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3b,0x16,0);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3b,9,*(int *)(param_1 + 0x18) + -5);
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x9e4) = 3;
      MenuWnd_DrawText(0x69,0x3c,0x1e7);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x36,0x16,6);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3a,0x16,4);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3b,0x16,4);
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,0x3b,9,*(int *)(param_1 + 0x18) + -10);
    }
  }
  iVar2 = *(int *)(param_1 + 0x9e4);
LAB_00278a98:
  if (*(int *)(param_1 + 0x9e8) == iVar2) {
    iVar2 = *(int *)(param_1 + 0x9e0);
  }
  else {
    *(int *)(param_1 + 0x9e8) = iVar2;
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    iVar2 = *(int *)(param_1 + 0x9e0);
  }
  uVar11 = 0xffffffff;
  if (iVar2 == 1) {
    Menu_ClearSlot(0);
    lVar6 = UiLayout_UpdateAnimById(0x69,7);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar2 = UiMgr_FindLayout(0x69);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x398 = 0;
      if (*(int *)&pUVar1[iVar2].layout.field_0x3a8 == 0) {
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x3a4 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      uVar4 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x9ec)) + 0xf;
      uVar11 = uVar4 & 0xf;
      if (((int)uVar4 < 0) && (uVar11 != 0)) {
        uVar11 = uVar11 - 0x10;
      }
    }
  }
  else if (iVar2 == 2) {
    lVar6 = UiLayout_UpdateAnimById(0x69,6);
    if (lVar6 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar2 = UiMgr_FindLayout(0x69);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x384 = 0;
      if (*(int *)&pUVar1[iVar2].layout.field_0x394 == 0) {
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x390 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      uVar4 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x9ec)) + 0x15;
      uVar11 = uVar4 & 0xf;
      if (((int)uVar4 < 0) && (uVar11 != 0)) {
        uVar11 = uVar11 - 0x10;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x69,*(undefined4 *)(&DAT_0032dd70 + *(int *)(param_1 + 0x9ec) * 4),1,0);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  uVar4 = (iVar2 - *(int *)(param_1 + 0x9ec)) + 0x10;
  uVar10 = uVar4 & 0xf;
  if (((int)uVar4 < 0) && (uVar10 != 0)) {
    uVar10 = uVar10 - 0x10;
  }
  iVar2 = 0;
  puVar9 = &DAT_0032dd90;
  do {
    uVar4 = uVar10;
    if (iVar2 == 5) {
      if (uVar11 == 0xffffffff) break;
      uVar4 = uVar11;
    }
    MenuWnd_DrawLabel(0x69,*puVar9,0x1e3,uVar4 + 1);
    uVar10 = uVar4 + 1 & 0xf;
    if (((int)(uVar4 + 1) < 0) && (uVar10 != 0)) {
      uVar10 = uVar10 - 0x10;
    }
    iVar2 = iVar2 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar2 < 6);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  iVar2 = UiMgr_FindLayout(0x69);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0x211);
  return;
}

// 0x002792a0  size 0x2cc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Sponsor(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(300);
    iVar2 = UiMgr_FindLayout(0x62);
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
    uVar3 = UiRes_GetLayoutData(0x12d);
    iVar2 = UiMgr_FindLayout(0x62);
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
  }
  lVar4 = UiLayout_UpdateAnimById(0x62,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if ((*(int *)(param_1 + 0xa18) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x62), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0xa18) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x62,*(undefined4 *)(*(int *)(param_1 + 0x14) * 4 + 0x36ed88),1,0);
    iVar2 = *(int *)(param_1 + 0x604);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x604);
  }
  if (iVar2 == 0) {
    MenuWnd_DrawTextId(0x62,0xd,3,0x1e1);
  }
  else {
    MenuWnd_DrawText(0x62,0xd,0x1e1);
  }
  MenuWnd_DrawText(0x62,0xe,0x1e2);
  uVar5 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 0x80000000) == 0) {
    uVar5 = 3;
  }
  MenuWnd_DrawTextId(0x61,0x3c,uVar5,0x990);
  MenuWnd_DrawText(0x61,0x36,0x990);
  iVar2 = UiMgr_FindLayout(0x61);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x62);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(*(int *)(param_1 + 0x14) * 4 + 0x36ed90));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00279570  size 0x478
void ScrGarage_Draw_Wheel(undefined8 param_1)

{
  short sVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  iVar9 = (int)param_1;
  *(undefined4 *)(iVar9 + 0x9d4) = 0;
  iVar3 = *(int *)(iVar9 + 0xa14);
  *(undefined4 *)(iVar9 + 0xa14) = 0;
  if (iVar3 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(0);
  }
  lVar4 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  if (*(int *)(iVar9 + 0xa18) != 0) {
    *(undefined4 *)(iVar9 + 0x9d4) = 1;
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    if (lVar4 == 3) {
      *(undefined4 *)(iVar9 + 0xa18) = 0;
    }
  }
  if (lVar4 == 2) {
    *(undefined4 *)(iVar9 + 0xa10) = 0;
  }
  sVar1 = *(short *)(*(int *)(iVar9 + 0x10) * 4 + iVar9 + 0x7c);
  if ((sVar1 == -1) || (sVar1 == 0xa2)) {
    uVar5 = maybe_CarModel_GetClassA(*(undefined4 *)(iVar9 + 0xc),0xffffffffffffffff);
    uVar5 = MsgId_ForGradeShort(uVar5);
    MenuWnd_DrawLabel(5,0x1c,0x231,uVar5);
    iVar3 = *(int *)(iVar9 + 8);
  }
  else {
    uVar5 = Msg_PartInfo(sVar1);
    uVar6 = Msg_MakerName(sVar1);
    MenuWnd_DrawLabel(5,0x1c,0x2c7,uVar5,uVar6);
    iVar3 = *(int *)(iVar9 + 8);
  }
  if (iVar3 == 4) {
    if (((*(int *)(iVar9 + 0xa18) != 0) && (lVar7 = UiLayout_UpdateAnimById(0x68), lVar7 == 0)) &&
       (lVar4 == 3)) {
      *(undefined4 *)(iVar9 + 0xa18) = 0;
    }
    iVar3 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x1d,8);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0xd);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x67,0x14,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0xe);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x67,0x15,uVar5);
    MenuWnd_DrawText(0x67,0x17,0x9c0);
    MenuWnd_DrawText(0x67,0x1b,0x2f);
    MenuWnd_DrawText(0x67,0x1c,0x30);
    MenuWnd_DrawText(0x67,0x1d,0x31);
    iVar3 = UiMgr_FindLayout(0x67);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
    maybe_Wheel_DrawList
              (*(undefined4 *)(*(int *)(iVar9 + 0x10) * 4 + iVar9 + 0x7c),
               *(undefined4 *)(iVar9 + 0x78),1,*(undefined4 *)(iVar9 + 0x9d4));
    Menu_DrawFrame(&g_MenuMgr->field_0x654);
  }
  else if (iVar3 == 3) {
    if (*(int *)(iVar9 + 0xa18) != 0) {
      lVar7 = UiLayout_UpdateAnimById(0x66);
      lVar8 = UiLayout_UpdateAnimById(100,1);
      if ((lVar7 == 0 && lVar8 == 0) && (lVar4 == 3)) {
        *(undefined4 *)(iVar9 + 0xa18) = 0;
      }
    }
    ScrGarage_Draw_Front_4b50(*(undefined4 *)(iVar9 + 0xc),0);
    maybe_Wheel_DrawDetails(param_1);
  }
  else {
    if (*(int *)(iVar9 + 0xa18) != 0) {
      lVar7 = UiLayout_UpdateAnimById(99);
      lVar8 = UiLayout_UpdateAnimById(100,1);
      if ((lVar7 == 0 && lVar8 == 0) && (*(undefined4 *)(iVar9 + 0x9d4) = 1, lVar4 == 3)) {
        *(undefined4 *)(iVar9 + 0xa18) = 0;
      }
    }
    if (((*(int *)(iVar9 + 0xc) < 4) || (7 < *(int *)(iVar9 + 0xc))) && (*(int *)(iVar9 + 8) != 5))
    {
      iVar3 = UiMgr_FindLayout(100);
      pUVar2 = g_UiMgr->slots;
      uVar5 = maybe_CarModel_GetClassA(*(undefined4 *)(iVar9 + 0xc),0xffffffffffffffff);
      uVar5 = MsgId_ForGrade(uVar5);
      UiElem_SetPropInt(&pUVar2[iVar3].layout,5,0x16,uVar5);
      iVar3 = UiMgr_FindLayout(100);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
      maybe_Wheel_DrawCarInfo(param_1);
    }
    else {
      maybe_Wheel_DrawCarInfo(param_1);
    }
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if (*(int *)(iVar9 + 8) != 4) {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,
                       *(undefined4 *)(*(int *)(iVar9 + 0x10) * 4 + iVar9 + 0x7c),
                       *(undefined4 *)(iVar9 + 0x68));
  }
  return;
}

// 0x002799f0  size 0x384
void ScrGarage_Draw_Wheel_99f0(undefined8 param_1)

{
  short sVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar3 = *(int *)(iVar7 + 0xa14);
  *(undefined4 *)(iVar7 + 0xa14) = 0;
  if (iVar3 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(2);
  }
  lVar4 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(iVar7 + 0x9d8),0x36ed80);
  if (*(int *)(iVar7 + 0xa18) != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      *(undefined4 *)(iVar7 + 0xa18) = 0;
    }
  }
  if (lVar4 == 2) {
    *(undefined4 *)(iVar7 + 0xa10) = 0;
  }
  sVar1 = *(short *)(*(int *)(iVar7 + 0x10) * 4 + iVar7 + 0x7c);
  if ((sVar1 == -1) || (sVar1 == 0xa2)) {
    uVar5 = maybe_CarModel_GetClassA(*(undefined4 *)(iVar7 + 0xc),0xffffffffffffffff);
    uVar5 = MsgId_ForGradeShort(uVar5);
    MenuWnd_DrawLabel(5,0x1c,0x230,uVar5);
    iVar3 = *(int *)(iVar7 + 8);
  }
  else {
    uVar5 = Msg_PartInfo(sVar1);
    uVar6 = Msg_MakerName(sVar1);
    MenuWnd_DrawLabel(5,0x1c,0x2c6,uVar5,uVar6);
    iVar3 = *(int *)(iVar7 + 8);
  }
  if (iVar3 == 4) {
    iVar3 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x1d,8);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0xd);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x67,0x14,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0xe);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x67,0x15,uVar5);
    MenuWnd_DrawText(0x67,0x17,0x9c0);
    MenuWnd_DrawText(0x67,0x1b,0x2f);
    MenuWnd_DrawText(0x67,0x1c,0x30);
    MenuWnd_DrawText(0x67,0x1d,0x31);
    iVar3 = UiMgr_FindLayout(0x67);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
    maybe_Wheel_DrawList
              (*(undefined4 *)(*(int *)(iVar7 + 0x10) * 4 + iVar7 + 0x7c),
               *(undefined4 *)(iVar7 + 0x78),1,0);
    Menu_DrawFrame(&g_MenuMgr->field_0x654);
  }
  else if (iVar3 == 3) {
    ScrGarage_Draw_Front_4b50(*(undefined4 *)(iVar7 + 0xc),0);
    maybe_Wheel_DrawDetails(param_1);
  }
  else if (((*(int *)(iVar7 + 0xc) < 4) || (7 < *(int *)(iVar7 + 0xc))) && (iVar3 != 5)) {
    iVar3 = UiMgr_FindLayout(100);
    pUVar2 = g_UiMgr->slots;
    uVar5 = maybe_CarModel_GetClassA(*(undefined4 *)(iVar7 + 0xc),0xffffffffffffffff);
    uVar5 = MsgId_ForGrade(uVar5);
    UiElem_SetPropInt(&pUVar2[iVar3].layout,5,0x16,uVar5);
    iVar3 = UiMgr_FindLayout(100);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
    maybe_Wheel_DrawCarInfo(param_1);
  }
  else {
    maybe_Wheel_DrawCarInfo(param_1);
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if (*(int *)(iVar7 + 8) != 4) {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,
                       *(undefined4 *)(*(int *)(iVar7 + 0x10) * 4 + iVar7 + 0x7c),
                       *(undefined4 *)(iVar7 + 0x68));
  }
  return;
}

// 0x00279d80  size 0x9d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Wheel_9d80(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  UiLayout *pUVar10;
  float fVar11;
  
  *(undefined4 *)(param_1 + 0x9d4) = 0;
  iVar4 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0xa20) == *(int *)(param_1 + 0xa00)) {
      uVar3 = UiRes_GetLayoutData(0x140);
      iVar4 = UiMgr_FindLayout(0x68);
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
    }
    uVar3 = UiRes_GetLayoutData(0x141);
    iVar4 = UiMgr_FindLayout(0x68);
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
    uVar3 = UiRes_GetLayoutData(0x142);
    iVar4 = UiMgr_FindLayout(0x68);
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
    uVar3 = UiRes_GetLayoutData(0x143);
    iVar4 = UiMgr_FindLayout(0x68);
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
    uVar3 = UiRes_GetLayoutData(0x144);
    iVar4 = UiMgr_FindLayout(0x68);
    pUVar1 = g_UiMgr->slots;
    if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x364 = 1;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar3;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
    iVar4 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,0x1d,8);
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x68,0x36ed78,2,0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x68,0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) == 0) {
    MenuWnd_DrawCursor(9 < *(int *)(param_1 + 0x78));
  }
  else {
    *(undefined4 *)(param_1 + 0x9d4) = 1;
    MenuWnd_DrawCursor(0);
    if (*(int *)(param_1 + 0xa20) == *(int *)(param_1 + 0xa08)) {
      lVar6 = UiLayout_UpdateAnimById(0x68,1);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x68,*(undefined4 *)(&LAB_0032dd40 + *(int *)(param_1 + 0x9dc) * 4),0,0);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
  }
  iVar2 = *(int *)(param_1 + 0x78);
  iVar4 = (iVar2 + (iVar4 - *(int *)(param_1 + 0x9dc))) % iVar2;
  iVar9 = 0;
  puVar8 = &DAT_0032dd10;
  while( true ) {
    if (8 < iVar2) {
      iVar2 = 9;
    }
    if (iVar2 <= iVar9) break;
    iVar2 = UiMgr_FindLayout(0x68);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar2].layout,*puVar8,0x16,
                      *(int *)(param_1 + iVar4 * 4 + 0x7c) + -0xa8);
    iVar2 = *(int *)(param_1 + 0x78);
    iVar4 = (iVar4 + 1) % iVar2;
    puVar8 = puVar8 + 1;
    iVar9 = iVar9 + 1;
  }
  iVar4 = UiMgr_FindLayout(0x68);
  iVar2 = *(int *)(param_1 + 0x78);
  pUVar10 = &g_UiMgr->slots[iVar4].layout;
  iVar4 = (iVar2 + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x9dc))) % iVar2;
  if (iVar2 < 10) {
    UiElem_SetPropFloat(0x41800000,pUVar10,4,1);
    UiElem_SetPropFloat(0x42060000,pUVar10,4,6);
    iVar4 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,3,8);
  }
  else {
    if (iVar4 + 9 <= iVar2) {
      UiElem_SetPropFloat((float)iVar4 * (536.0 / (float)iVar2) + 16.0,pUVar10,4,1);
      UiElem_SetPropFloat((9.0 / (float)iVar2) * 33.5,pUVar10,4,6);
      iVar4 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,3,8);
      iVar4 = *(int *)(param_1 + 0x9e0);
      goto LAB_0027a408;
    }
    fVar11 = (float)((iVar4 + 9) - iVar2);
    UiElem_SetPropFloat((float)iVar4 * (536.0 / (float)iVar2) + 16.0,pUVar10,4,1);
    UiElem_SetPropFloat(((9.0 - fVar11) / (float)iVar2) * 33.5,pUVar10,4,6);
    UiElem_SetPropFloat(0x41800000,pUVar10,3,1);
    UiElem_SetPropFloat((fVar11 / (float)iVar2) * 33.5,pUVar10,3,6);
    iVar4 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,3,8);
  }
  iVar4 = *(int *)(param_1 + 0x9e0);
LAB_0027a408:
  if (iVar4 == 1) {
    Menu_ClearSlot(0);
    lVar6 = UiLayout_UpdateAnimById(0x68,2);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar4 = UiMgr_FindLayout(0x68);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x9dc);
      iVar9 = *(int *)(param_1 + 0x78);
      iVar5 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,DAT_0032dd34,0x16,
                        *(int *)(((iVar9 + (iVar4 - iVar2) + -1) % iVar9) * 4 + param_1 + 0x7c) +
                        -0xa8);
    }
  }
  else if (iVar4 == 2) {
    lVar6 = UiLayout_UpdateAnimById(0x68,3);
    if (lVar6 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar4 = UiMgr_FindLayout(0x68);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x9dc);
      iVar9 = *(int *)(param_1 + 0x78);
      iVar5 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,DAT_0032dd34,0x16,
                        *(int *)(((iVar9 + (iVar4 - iVar2) + 9) % iVar9) * 4 + param_1 + 0x7c) +
                        -0xa8);
    }
  }
  MenuWnd_SetTitle(3,0x20a);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetCurrentPartSlot(uVar7,0xd);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x67,0x14,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetCurrentPartSlot(uVar7,0xe);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x67,0x15,uVar7);
  MenuWnd_DrawText(0x67,0x17,0x9c0);
  MenuWnd_DrawText(0x67,0x1b,0x2f);
  MenuWnd_DrawText(0x67,0x1c,0x30);
  MenuWnd_DrawText(0x67,0x1d,0x31);
  iVar4 = UiMgr_FindLayout(0x67);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  maybe_Wheel_DrawList
            (*(undefined4 *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c),
             *(undefined4 *)(param_1 + 0x78),1,*(undefined4 *)(param_1 + 0x9d4));
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  return;
}

// 0x0027a760  size 0x37c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage41; on-screen text/callee hint "Wheel" (was ScrWheel_Update) */

void maybe_PageWheels_State7_Wheel(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0xa14);
  *(undefined4 *)(iVar6 + 0xa14) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar6 + 0x9d4) = 0;
  }
  else {
    uVar2 = UiRes_GetLayoutData(0x13a);
    iVar3 = UiMgr_FindLayout(0x66);
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
    uVar2 = UiRes_GetLayoutData(0x13b);
    iVar3 = UiMgr_FindLayout(0x66);
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
    uVar2 = UiRes_GetLayoutData(0x196);
    iVar3 = UiMgr_FindLayout(100);
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
    uVar2 = UiRes_GetLayoutData(0x197);
    iVar3 = UiMgr_FindLayout(100);
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
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar6 + 0x9d4) = 0;
  }
  if (*(int *)(iVar6 + 0xa00) == 4) {
    lVar4 = UiLayout_UpdateAnimById(0x66,0);
    lVar5 = UiLayout_UpdateAnimById(100,0);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(iVar6 + 0xa10) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x9d4) = 1;
    }
  }
  else {
    *(undefined4 *)(iVar6 + 0xa10) = 0;
  }
  if (*(int *)(iVar6 + 0xa18) != 0) {
    *(undefined4 *)(iVar6 + 0x9d4) = 1;
    if (*(int *)(iVar6 + 0xa08) == 4) {
      lVar4 = UiLayout_UpdateAnimById(0x66);
      lVar5 = UiLayout_UpdateAnimById(100,1);
      if (lVar4 == 0 && lVar5 == 0) {
        *(undefined4 *)(iVar6 + 0xa18) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar6 + 0xa18) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x66,*(undefined4 *)(&DAT_0032dcf0 + *(int *)(iVar6 + 0x10) * 4),1,0);
  }
  maybe_Wheel_DrawDetails(param_1);
  MenuWnd_SetTitle(3,0x1fb);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,*(undefined4 *)(*(int *)(iVar6 + 0x10) * 4 + iVar6 + 0x7c)
                     ,*(undefined4 *)(iVar6 + 0x68));
  ScrGarage_Draw_Front_4b50(*(undefined4 *)(iVar6 + 0xc),0);
  return;
}

// 0x0027aae0  size 0x670
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage41; on-screen text/callee hint "Wheel" (was ScrWheel_Enter) */

void maybe_PageWheels_State6_Wheel(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x9d4) = 0;
  iVar2 = *(int *)(iVar7 + 0xa14);
  *(undefined4 *)(iVar7 + 0xa14) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar7 + 0xa00);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x12e);
    iVar2 = UiMgr_FindLayout(99);
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
    uVar3 = UiRes_GetLayoutData(0x12f);
    iVar2 = UiMgr_FindLayout(99);
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
    uVar3 = UiRes_GetLayoutData(0x130);
    iVar2 = UiMgr_FindLayout(99);
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
    uVar3 = UiRes_GetLayoutData(0x131);
    iVar2 = UiMgr_FindLayout(99);
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
    uVar3 = UiRes_GetLayoutData(0x196);
    iVar2 = UiMgr_FindLayout(100);
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
    uVar3 = UiRes_GetLayoutData(0x197);
    iVar2 = UiMgr_FindLayout(100);
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
    MenuWnd_DrawDialogText(99,0x36ed70,2,0);
    iVar2 = *(int *)(iVar7 + 0xa00);
  }
  if (iVar2 == 3) {
    lVar4 = UiLayout_UpdateAnimById(99,0);
    lVar5 = UiLayout_UpdateAnimById(100,0);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(iVar7 + 0xa10) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x9d4) = 1;
    }
  }
  else {
    *(undefined4 *)(iVar7 + 0xa10) = 0;
  }
  if (*(int *)(iVar7 + 0xa18) == 0) {
    MenuWnd_DrawCursor(7 < *(int *)(iVar7 + 0x78));
  }
  else {
    *(undefined4 *)(iVar7 + 0x9d4) = 1;
    if (*(int *)(iVar7 + 0xa08) == 3) {
      lVar4 = UiLayout_UpdateAnimById(99);
      lVar5 = UiLayout_UpdateAnimById(100,1);
      if (lVar4 == 0 && lVar5 == 0) {
        *(undefined4 *)(iVar7 + 0xa18) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar7 + 0xa18) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(99,*(undefined4 *)(&DAT_0032dcd0 + *(int *)(iVar7 + 0x9fc) * 4),1,0);
    iVar2 = *(int *)(iVar7 + 0x9e0);
  }
  else {
    iVar2 = *(int *)(iVar7 + 0x9e0);
  }
  if (iVar2 == 1) {
    Menu_ClearSlot(0);
    lVar4 = UiLayout_UpdateAnimById(99,2);
    if (lVar4 == 0) {
      *(undefined4 *)(iVar7 + 0x9e0) = 0;
      iVar2 = UiMgr_FindLayout(99);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else if ((iVar2 == 2) && (lVar4 = UiLayout_UpdateAnimById(99,3), lVar4 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar7 + 0x9e0) = 0;
    iVar2 = UiMgr_FindLayout(99);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  }
  MenuWnd_SetTitle(3,0x1fb);
  iVar2 = *(int *)(*(int *)(iVar7 + 0x10) * 4 + iVar7 + 0x7c);
  if (iVar2 == -1) {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
    iVar2 = *(int *)(iVar7 + 0xc);
  }
  else {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,iVar2,0);
    iVar2 = *(int *)(iVar7 + 0xc);
  }
  if (((iVar2 < 4) || (7 < iVar2)) && (*(int *)(iVar7 + 8) != 5)) {
    iVar2 = UiMgr_FindLayout(100);
    pUVar1 = g_UiMgr->slots;
    uVar6 = maybe_CarModel_GetClassA(*(undefined4 *)(iVar7 + 0xc),0xffffffffffffffff);
    uVar6 = MsgId_ForGrade(uVar6);
    UiElem_SetPropInt(&pUVar1[iVar2].layout,5,0x16,uVar6);
    iVar2 = UiMgr_FindLayout(100);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
    maybe_Wheel_DrawCarInfo(param_1);
  }
  else {
    maybe_Wheel_DrawCarInfo(param_1);
  }
  return;
}

// 0x0027b150  size 0x440
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Wheel_b150(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
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
    if (*(int *)(param_1 + 0xa00) == 2) {
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
    }
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
  }
  lVar4 = UiLayout_UpdateAnimById(0x67,0);
  lVar5 = UiLayout_UpdateAnimById(0x67,1);
  if (lVar4 == 0 && lVar5 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    if (*(int *)(param_1 + 0xa20) == *(int *)(param_1 + 0xa08)) {
      lVar4 = UiLayout_UpdateAnimById(0x67,2);
      lVar5 = UiLayout_UpdateAnimById(0x67,3);
      if (lVar4 == 0 && lVar5 == 0) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0x67,2);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x67,*(undefined4 *)(&DAT_0032dcc0 + *(int *)(param_1 + 0x68) * 4),1,0);
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentPartSlot(uVar6,0xd);
  uVar6 = Msg_MakerInfo(uVar6);
  MenuWnd_DrawText(0x67,0x14,uVar6);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentPartSlot(uVar6,0xe);
  uVar6 = Msg_MakerInfo(uVar6);
  MenuWnd_DrawText(0x67,0x15,uVar6);
  MenuWnd_DrawText(0x67,0x17,0x9c0);
  MenuWnd_DrawText(0x67,0x1b,0x2f);
  MenuWnd_DrawText(0x67,0x1c,0x30);
  if (iVar2 == 0) {
    MenuWnd_DrawText(0x67,0x1d,0x31);
  }
  else {
    MenuWnd_DrawTextId(0x67,0x1d,3,0x31);
  }
  iVar2 = UiMgr_FindLayout(0x67);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0x209);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  return;
}

// 0x0027b590  size 0x4ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage41; on-screen text/callee hint "SportsTyres" (was ScrSportsTyres_Update) */

void maybe_PageWheels_State4_SportsTyres(int param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xa00) == 3) {
      uVar2 = UiRes_GetLayoutData(0x133);
      iVar3 = UiMgr_FindLayout(0x65);
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
    }
    uVar2 = UiRes_GetLayoutData(0x132);
    iVar3 = UiMgr_FindLayout(0x65);
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
    uVar2 = UiRes_GetLayoutData(0x134);
    iVar3 = UiMgr_FindLayout(0x65);
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
    uVar2 = UiRes_GetLayoutData(0x135);
    iVar3 = UiMgr_FindLayout(0x65);
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
    uVar2 = UiRes_GetLayoutData(0x136);
    iVar3 = UiMgr_FindLayout(0x65);
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
    uVar2 = UiRes_GetLayoutData(0x137);
    iVar3 = UiMgr_FindLayout(0x65);
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
    uVar2 = UiRes_GetLayoutData(0x214);
    iVar3 = UiMgr_FindLayout(0x65);
    pUVar1 = g_UiMgr->slots;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
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
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x38c = 1;
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar2;
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x65,0);
  lVar5 = UiLayout_UpdateAnimById(0x65,1);
  if (lVar4 == 0 && lVar5 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    if (*(int *)(param_1 + 0xa08) == 3) {
      iVar3 = 2;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x68) + 3;
    }
    lVar4 = UiLayout_UpdateAnimById(0x65,iVar3);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x65,*(undefined4 *)(&DAT_0032dcb0 + *(int *)(param_1 + 0x68) * 4),1,0);
  }
  MenuWnd_SetTitle(3,0x209);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  ScrGarage_Draw_Front_4b50(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x6c));
  return;
}

// 0x0027ba40  size 0x10c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_SportsTyres_ba40(int param_1)

{
  short sVar1;
  UiLayoutSlot *pUVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  short *psVar9;
  int unaff_s0_lo;
  undefined8 uVar10;
  long unaff_s2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  short sStack_4;
  undefined2 uStack_2;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 3) {
    unaff_s2 = 0x60;
LAB_0027baac:
    iVar4 = *(int *)(param_1 + 0xa08);
  }
  else {
    if (iVar4 == 5) {
      unaff_s2 = 0x61;
      goto LAB_0027baac;
    }
    if (((iVar4 == 2) || (iVar4 == 1)) || (iVar4 == 0)) {
      unaff_s2 = 0x5f;
      goto LAB_0027baac;
    }
    iVar4 = *(int *)(param_1 + 0xa08);
  }
  uVar10 = 1;
  if ((iVar4 != 2) && (*(int *)(param_1 + 0xc) == 0x1f)) {
    uVar10 = 2;
  }
  iVar4 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 3) {
      uVar3 = UiRes_GetLayoutData(0x127);
      iVar4 = UiMgr_FindLayout(0x60);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar3;
      pUVar2[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x128);
      iVar4 = UiMgr_FindLayout(0x60);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar3;
      pUVar2[iVar4].layout.animState = 1;
    }
    else if (iVar4 == 5) {
      uVar3 = UiRes_GetLayoutData(0x129);
      iVar4 = UiMgr_FindLayout(0x61);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar3;
      pUVar2[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x12a);
      iVar4 = UiMgr_FindLayout(0x61);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar3;
      pUVar2[iVar4].layout.animState = 1;
      uVar3 = UiRes_GetLayoutData(299);
      iVar4 = UiMgr_FindLayout(0x61);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x338 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x33c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = uVar3;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
    }
    else if (iVar4 == 2) {
      uVar3 = UiRes_GetLayoutData(0x121);
      iVar4 = UiMgr_FindLayout(0x5f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar3;
      pUVar2[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x122);
      iVar4 = UiMgr_FindLayout(0x5f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar3;
      pUVar2[iVar4].layout.animState = 1;
    }
    else if (iVar4 == 1) {
      uVar3 = UiRes_GetLayoutData(0x125);
      iVar4 = UiMgr_FindLayout(0x5f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar3;
      pUVar2[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x126);
      iVar4 = UiMgr_FindLayout(0x5f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar3;
      pUVar2[iVar4].layout.animState = 1;
    }
    else if (iVar4 == 0) {
      uVar3 = UiRes_GetLayoutData(0x123);
      iVar4 = UiMgr_FindLayout(0x5f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar3;
      pUVar2[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x124);
      iVar4 = UiMgr_FindLayout(0x5f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar3;
      pUVar2[iVar4].layout.animState = 1;
    }
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(unaff_s2,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if ((*(int *)(param_1 + 0xa18) != 0) &&
     (lVar5 = UiLayout_UpdateAnimById(unaff_s2,uVar10), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0xa18) = 0;
  }
  uVar10 = 0x41;
  if (*(uint *)(param_1 + 0xc) < 0x20) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0xc)) {
    default:
      unaff_s0_lo = 0;
      uVar10 = 0x1f7;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      unaff_s0_lo = 1;
      uVar10 = 0x1f8;
      break;
    case 8:
      unaff_s0_lo = 2;
      uVar10 = 0x1f9;
      break;
    case 9:
      unaff_s0_lo = 3;
      uVar10 = 0x1fa;
      break;
    case 10:
      unaff_s0_lo = 4;
      uVar10 = 0x22b;
      break;
    case 0xb:
      unaff_s0_lo = 0;
      uVar10 = 0x1fd;
      break;
    case 0xc:
      unaff_s0_lo = 1;
      uVar10 = 0x1fe;
      break;
    case 0xd:
      unaff_s0_lo = 2;
      uVar10 = 0x1ff;
      break;
    case 0xe:
      unaff_s0_lo = 2;
      uVar10 = 0x1ff;
      break;
    case 0xf:
      unaff_s0_lo = 2;
      uVar10 = 0x1ff;
      break;
    case 0x10:
      unaff_s0_lo = 3;
      uVar10 = 0x200;
      break;
    case 0x11:
      unaff_s0_lo = 4;
      uVar10 = 0x201;
      break;
    case 0x12:
      unaff_s0_lo = 0;
      uVar10 = 0x202;
      break;
    case 0x13:
      unaff_s0_lo = 1;
      uVar10 = 0x203;
      break;
    case 0x14:
      unaff_s0_lo = 0;
      uVar10 = 0x204;
      break;
    case 0x15:
      unaff_s0_lo = 1;
      uVar10 = 0x205;
      break;
    case 0x16:
      unaff_s0_lo = 2;
      uVar10 = 0x206;
      break;
    case 0x17:
      unaff_s0_lo = 3;
      uVar10 = 0x207;
      break;
    case 0x18:
      unaff_s0_lo = 0;
      uVar10 = 0x20c;
      break;
    case 0x19:
    case 0x1a:
      break;
    case 0x1b:
      unaff_s0_lo = 1;
      uVar10 = 0x22c;
      break;
    case 0x1c:
      unaff_s0_lo = 2;
      uVar10 = 0x22d;
      break;
    case 0x1d:
      unaff_s0_lo = 3;
      uVar10 = 0x22e;
      break;
    case 0x1e:
      unaff_s0_lo = 4;
      uVar10 = 0x22f;
      break;
    case 0x1f:
      unaff_s0_lo = 5;
      uVar10 = 0x20d;
    }
  }
  if (*_g_MenuInput == 1) {
    if (unaff_s2 == 0x60) {
      MenuWnd_SetItemState(0x60,*(undefined4 *)(unaff_s0_lo * 4 + 0x32dc80),1,0);
    }
    else if (unaff_s2 == 0x61) {
      MenuWnd_SetItemState(0x61,*(undefined4 *)(unaff_s0_lo * 4 + 0x32dc60),1,0);
    }
    else {
      if (unaff_s2 != 0x5f) {
        iVar4 = *(int *)(param_1 + 8);
        goto LAB_0027c25c;
      }
      MenuWnd_SetItemState(0x5f,*(undefined4 *)(unaff_s0_lo * 4 + 0x32dc40),1,0);
    }
  }
  iVar4 = *(int *)(param_1 + 8);
LAB_0027c25c:
  if (iVar4 == 3) {
    MenuWnd_DrawText(0x60,0x2b,0x99e);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x200000) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x60,0x2c,uVar6,0x99f);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x400000) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x60,0x2d,uVar6,0x9a0);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x800000) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x60,0x2e,uVar6,0x9a1);
    uStack_30 = DAT_0032dc90;
    uStack_2c = DAT_0032dc94;
    uStack_28 = DAT_0032dc98;
    uStack_24 = DAT_0032dc9c;
    uStack_20 = DAT_0032dca0;
    uStack_1c = DAT_0032dca4;
    uStack_18 = DAT_0032dca8;
    uStack_14 = DAT_0032dcac;
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0xf);
    uStack_10 = Msg_MakerInfo(uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0x10);
    uStack_c = Msg_MakerInfo(uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0xf);
    sStack_4 = PartDb_GetInfo(uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0x10);
    uStack_2 = PartDb_GetInfo(uVar6);
    iVar4 = 0;
    psVar9 = &sStack_4;
    puVar8 = &uStack_10;
    puVar7 = &uStack_30;
    do {
      sVar1 = *psVar9;
      if (sVar1 == 0x9d) {
        puVar7[6] = *puVar8;
      }
      else if (sVar1 == 0x98) {
        puVar7[4] = *puVar8;
      }
      else if (sVar1 == 0x93) {
        puVar7[2] = *puVar8;
      }
      else if (sVar1 == 0x8d) {
        *puVar7 = *puVar8;
      }
      iVar4 = iVar4 + 1;
      psVar9 = psVar9 + 1;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar4 < 2);
    MenuWnd_DrawText(0x60,0x27,uStack_30);
    MenuWnd_DrawText(0x60,0x28,uStack_28);
    MenuWnd_DrawText(0x60,0x29,uStack_20);
    MenuWnd_DrawText(0x60,0x2a,uStack_18);
    MenuWnd_DrawText(0x60,0x23,uStack_2c);
    MenuWnd_DrawText(0x60,0x24,uStack_24);
    MenuWnd_DrawText(0x60,0x25,uStack_1c);
    MenuWnd_DrawText(0x60,0x26,uStack_14);
    MenuWnd_DrawText(0x60,0x22,0x9bf);
  }
  else if (iVar4 == 5) {
    MenuWnd_DrawText(0x61,0x31,0x98d);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x8000000) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x32,uVar6,0x991);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x10000000) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x33,uVar6,0x992);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x20000000) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x34,uVar6,0x993);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x40000000) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x35,uVar6,0x994);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x80000000) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x3c,uVar6,0x990);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0xc);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x61,0x37,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0x12);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x61,0x38,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0x11);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x61,0x39,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0x13);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x61,0x3a,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0x14);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x61,0x3b,uVar6);
    MenuWnd_DrawText(0x61,0x36,0x9c1);
  }
  else if (iVar4 == 2) {
    MenuWnd_DrawText(0x5f,0x24,0x98a);
    MenuWnd_DrawText(0x5f,0x25,0x98b);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,10);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2a,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0xb);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2b,uVar6);
    MenuWnd_DrawText(0x5f,0x29,0x9be);
  }
  else if (iVar4 == 1) {
    MenuWnd_DrawText(0x5f,0x24,0x985);
    MenuWnd_DrawText(0x5f,0x25,0x986);
    MenuWnd_DrawText(0x5f,0x26,0x987);
    MenuWnd_DrawText(0x5f,0x27,0x988);
    MenuWnd_DrawText(0x5f,0x28,0x989);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,5);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2a,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,6);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2b,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,7);
    uVar6 = Msg_PartMaker(uVar6);
    MenuWnd_DrawText(0x5f,0x2c,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,8);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2d,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,9);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2e,uVar6);
    MenuWnd_DrawText(0x5f,0x29,0x9bd);
  }
  else if (iVar4 == 0) {
    iVar4 = maybe_MenuText_CarSpecGrade(0xffffffffffffffff,0);
    MenuWnd_DrawText(0x5f,0x24,*(undefined4 *)(&DAT_0032cd70 + iVar4 * 4));
    MenuWnd_DrawText(0x5f,0x25,(&DAT_0032cd90)[iVar4]);
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x100) == 0) {
      uVar6 = 3;
    }
    MenuWnd_DrawTextId(0x5f,0x26,uVar6,0x982);
    MenuWnd_DrawText(0x5f,0x27,0x983);
    MenuWnd_DrawText(0x5f,0x28,0x984);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,0);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2a,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,2);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2b,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,1);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2c,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,3);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2d,uVar6);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentPartSlot(uVar6,4);
    uVar6 = Msg_MakerInfo(uVar6);
    MenuWnd_DrawText(0x5f,0x2e,uVar6);
    MenuWnd_DrawText(0x5f,0x29,0x9bc);
  }
  iVar4 = UiMgr_FindLayout(unaff_s2);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_SetTitle(3,uVar10);
  return;
}

