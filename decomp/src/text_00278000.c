// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00278000 - 0x0027c000
#include "ghidra_types.h"

// 0x00278480  size 0xe1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Front_8480(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  iVar1 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar1 != 0) {
    uVar4 = UiRes_GetLayoutData(0x145);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar4;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x146);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar4;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(0x147);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x348) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar4;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar4 = UiRes_GetLayoutData(0x148);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x35c) = 0;
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x354) = 0;
    *(undefined4 *)(iVar1 + 0x35c) = uVar4;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    uVar4 = UiRes_GetLayoutData(0x149);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar4;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar4 = UiRes_GetLayoutData(0x14a);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar4;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar4 = UiRes_GetLayoutData(0x14b);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 0;
    *(undefined4 *)(iVar1 + 0x398) = uVar4;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar4 = UiRes_GetLayoutData(0x14c);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3ac) = 0;
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x39c) = 0;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3a4) = 0;
    *(undefined4 *)(iVar1 + 0x3ac) = uVar4;
    *(undefined4 *)(iVar1 + 0x3a8) = 1;
    uVar4 = UiRes_GetLayoutData(0x14d);
    iVar1 = UiMgr_FindLayout(0x69);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3c0) = 0;
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      *(undefined4 *)(iVar1 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3b8) = 1;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar4;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x69,0x36ed98,2,0);
    if (*(int *)(param_1 + 0xa00) != 0x11) {
      *(undefined4 *)(param_1 + 0x9e8) = 0xffffffff;
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    }
  }
  UiLayout_UpdateAnimById(0x69,8);
  if (*(int *)(param_1 + 0xa00) == 0x11) {
    lVar5 = UiLayout_UpdateAnimById(0x69,0);
    lVar6 = UiLayout_UpdateAnimById(0x69,2);
    if (lVar5 == 0 && lVar6 == 0) {
      *(undefined4 *)(param_1 + 0xa10) = 0;
    }
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0x69,0);
    lVar6 = UiLayout_UpdateAnimById(0x69,1);
    lVar7 = UiLayout_UpdateAnimById(0x69,2);
    if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
      *(undefined4 *)(param_1 + 0xa10) = 0;
    }
  }
  if (*(int *)(param_1 + 0xa18) == 0) {
    MenuWnd_DrawCursor();
  }
  else {
    Menu_BlockInput(_g_MenuMgr + 0x654);
    if (*(int *)(param_1 + 0xa08) == 0x11) {
      lVar5 = UiLayout_UpdateAnimById(0x69,3);
      lVar6 = UiLayout_UpdateAnimById(0x69,5);
      if (lVar5 == 0 && lVar6 == 0) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0x69,3);
      lVar6 = UiLayout_UpdateAnimById(0x69,4);
      lVar7 = UiLayout_UpdateAnimById(0x69,5);
      if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  iVar1 = menuscr_leaf_sub_002748d0(*(undefined4 *)(param_1 + 0x18));
  iVar1 = *(int *)(iVar1 * 4 + param_1 + 0x20);
  if (iVar1 < 0) {
    iVar1 = UiMgr_FindLayout(0x69);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x2d,8);
LAB_002786e4:
    uVar10 = *(uint *)(param_1 + 0x18);
  }
  else {
    iVar2 = UiMgr_FindLayout(0x69);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x2d,8);
    if (0x1d < iVar1) {
      iVar2 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x2d,0x16,iVar1 + 0x53);
      goto LAB_002786e4;
    }
    iVar2 = UiMgr_FindLayout(0x69);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x2d,0x16,iVar1 + 0x1f);
    uVar10 = *(uint *)(param_1 + 0x18);
  }
  if (uVar10 < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar10) {
    case 0:
    case 1:
    case 2:
      *(undefined4 *)(param_1 + 0x9e4) = 0;
      MenuWnd_DrawText(0x69,0x3c,0x1e4);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x36,0x16,3);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3a,0x16,1);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,0x16,1);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,9,*(int *)(param_1 + 0x18) + 1);
      iVar1 = *(int *)(param_1 + 0x9e4);
      goto LAB_00278a98;
    case 3:
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0x9e4) = 1;
      MenuWnd_DrawText(0x69,0x3c,0x1e5);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x36,0x16,7);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3a,0x16,5);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,0x16,5);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,9,*(int *)(param_1 + 0x18) + -2);
      break;
    default:
      *(undefined4 *)(param_1 + 0x9e4) = 2;
      MenuWnd_DrawText(0x69,0x3c,0x1e6);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x36,0x16,2);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3a,0x16,0);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,0x16,0);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,9,*(int *)(param_1 + 0x18) + -5);
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x9e4) = 3;
      MenuWnd_DrawText(0x69,0x3c,0x1e7);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x36,0x16,6);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3a,0x16,4);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,0x16,4);
      iVar1 = UiMgr_FindLayout(0x69);
      UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,9,*(int *)(param_1 + 0x18) + -10);
    }
  }
  iVar1 = *(int *)(param_1 + 0x9e4);
LAB_00278a98:
  if (*(int *)(param_1 + 0x9e8) == iVar1) {
    iVar1 = *(int *)(param_1 + 0x9e0);
  }
  else {
    *(int *)(param_1 + 0x9e8) = iVar1;
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    iVar1 = *(int *)(param_1 + 0x9e0);
  }
  uVar10 = 0xffffffff;
  if (iVar1 == 1) {
    Menu_ClearSlot(0);
    lVar5 = UiLayout_UpdateAnimById(0x69,7);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar1 = UiMgr_FindLayout(0x69);
      iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
      *(undefined4 *)(iVar1 + 0x39c) = 0;
      if (*(int *)(iVar1 + 0x3ac) == 0) {
        *(undefined4 *)(iVar1 + 0x3a8) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3a8) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      uVar3 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x9ec)) + 0xf;
      uVar10 = uVar3 & 0xf;
      if (((int)uVar3 < 0) && (uVar10 != 0)) {
        uVar10 = uVar10 - 0x10;
      }
    }
  }
  else if (iVar1 == 2) {
    lVar5 = UiLayout_UpdateAnimById(0x69,6);
    if (lVar5 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar1 = UiMgr_FindLayout(0x69);
      iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
      *(undefined4 *)(iVar1 + 0x388) = 0;
      if (*(int *)(iVar1 + 0x398) == 0) {
        *(undefined4 *)(iVar1 + 0x394) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x394) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      uVar3 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x9ec)) + 0x15;
      uVar10 = uVar3 & 0xf;
      if (((int)uVar3 < 0) && (uVar10 != 0)) {
        uVar10 = uVar10 - 0x10;
      }
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x69,*(undefined4 *)(&DAT_0032dd70 + *(int *)(param_1 + 0x9ec) * 4),1,0);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
  }
  uVar3 = (iVar1 - *(int *)(param_1 + 0x9ec)) + 0x10;
  uVar9 = uVar3 & 0xf;
  if (((int)uVar3 < 0) && (uVar9 != 0)) {
    uVar9 = uVar9 - 0x10;
  }
  iVar1 = 0;
  puVar8 = &DAT_0032dd90;
  do {
    uVar3 = uVar9;
    if (iVar1 == 5) {
      if (uVar10 == 0xffffffff) break;
      uVar3 = uVar10;
    }
    MenuWnd_DrawLabel(0x69,*puVar8,0x1e3,uVar3 + 1);
    uVar9 = uVar3 + 1 & 0xf;
    if (((int)(uVar3 + 1) < 0) && (uVar9 != 0)) {
      uVar9 = uVar9 - 0x10;
    }
    iVar1 = iVar1 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar1 < 6);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar1 = UiMgr_FindLayout(0x69);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0x211);
  return;
}

// 0x002792a0  size 0x2cc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Sponsor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(300);
    iVar1 = UiMgr_FindLayout(0x62);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar2;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x12d);
    iVar1 = UiMgr_FindLayout(0x62);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0x62,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if ((*(int *)(param_1 + 0xa18) != 0) && (lVar3 = UiLayout_UpdateAnimById(0x62), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0xa18) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x62,*(undefined4 *)(*(int *)(param_1 + 0x14) * 4 + 0x36ed88),1,0);
    iVar1 = *(int *)(param_1 + 0x604);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x604);
  }
  if (iVar1 == 0) {
    MenuWnd_DrawTextId(0x62,0xd,3,0x1e1);
  }
  else {
    MenuWnd_DrawText(0x62,0xd,0x1e1);
  }
  MenuWnd_DrawText(0x62,0xe,0x1e2);
  uVar4 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 0x80000000) == 0) {
    uVar4 = 3;
  }
  MenuWnd_DrawTextId(0x61,0x3c,uVar4,0x990);
  MenuWnd_DrawText(0x61,0x36,0x990);
  iVar1 = UiMgr_FindLayout(0x61);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x62);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,*(undefined4 *)(*(int *)(param_1 + 0x14) * 4 + 0x36ed90));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00279570  size 0x478
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Wheel(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  iVar9 = (int)param_1;
  *(undefined4 *)(iVar9 + 0x9d4) = 0;
  iVar2 = *(int *)(iVar9 + 0xa14);
  *(undefined4 *)(iVar9 + 0xa14) = 0;
  if (iVar2 != 0) {
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
    uVar5 = menuscr_leaf_sub_002a14f0(*(undefined4 *)(iVar9 + 0xc),0xffffffffffffffff);
    uVar5 = MsgId_ForGradeShort(uVar5);
    MenuWnd_DrawLabel(5,0x1c,0x231,uVar5);
    iVar2 = *(int *)(iVar9 + 8);
  }
  else {
    uVar5 = Msg_PartInfo(sVar1);
    uVar6 = Msg_MakerName(sVar1);
    MenuWnd_DrawLabel(5,0x1c,0x2c7,uVar5,uVar6);
    iVar2 = *(int *)(iVar9 + 8);
  }
  if (iVar2 == 4) {
    if (((*(int *)(iVar9 + 0xa18) != 0) && (lVar7 = UiLayout_UpdateAnimById(0x68), lVar7 == 0)) &&
       (lVar4 == 3)) {
      *(undefined4 *)(iVar9 + 0xa18) = 0;
    }
    iVar2 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x1d,8);
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
    iVar2 = UiMgr_FindLayout(0x67);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    scrgarage_draw_sub_00274d20
              (*(undefined4 *)(*(int *)(iVar9 + 0x10) * 4 + iVar9 + 0x7c),
               *(undefined4 *)(iVar9 + 0x78),1,*(undefined4 *)(iVar9 + 0x9d4));
    Menu_DrawFrame(_g_MenuMgr + 0x654);
  }
  else if (iVar2 == 3) {
    if (*(int *)(iVar9 + 0xa18) != 0) {
      lVar7 = UiLayout_UpdateAnimById(0x66);
      lVar8 = UiLayout_UpdateAnimById(100,1);
      if ((lVar7 == 0 && lVar8 == 0) && (lVar4 == 3)) {
        *(undefined4 *)(iVar9 + 0xa18) = 0;
      }
    }
    ScrGarage_Draw_Front_4b50(*(undefined4 *)(iVar9 + 0xc),0);
    scrgarage_draw_sub_002750b0(param_1);
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
      iVar2 = *_g_UiMgr;
      uVar5 = menuscr_leaf_sub_002a14f0(*(undefined4 *)(iVar9 + 0xc),0xffffffffffffffff);
      uVar5 = MsgId_ForGrade(uVar5);
      UiElem_SetPropInt(iVar2 + iVar3 * 0x4f4 + 4,5,0x16,uVar5);
      iVar2 = UiMgr_FindLayout(100);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
      scrgarage_draw_sub_002754a0(param_1);
    }
    else {
      scrgarage_draw_sub_002754a0(param_1);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Wheel_99f0(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar2 = *(int *)(iVar7 + 0xa14);
  *(undefined4 *)(iVar7 + 0xa14) = 0;
  if (iVar2 != 0) {
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
    uVar5 = menuscr_leaf_sub_002a14f0(*(undefined4 *)(iVar7 + 0xc),0xffffffffffffffff);
    uVar5 = MsgId_ForGradeShort(uVar5);
    MenuWnd_DrawLabel(5,0x1c,0x230,uVar5);
    iVar2 = *(int *)(iVar7 + 8);
  }
  else {
    uVar5 = Msg_PartInfo(sVar1);
    uVar6 = Msg_MakerName(sVar1);
    MenuWnd_DrawLabel(5,0x1c,0x2c6,uVar5,uVar6);
    iVar2 = *(int *)(iVar7 + 8);
  }
  if (iVar2 == 4) {
    iVar2 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x1d,8);
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
    iVar2 = UiMgr_FindLayout(0x67);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    scrgarage_draw_sub_00274d20
              (*(undefined4 *)(*(int *)(iVar7 + 0x10) * 4 + iVar7 + 0x7c),
               *(undefined4 *)(iVar7 + 0x78),1,0);
    Menu_DrawFrame(_g_MenuMgr + 0x654);
  }
  else if (iVar2 == 3) {
    ScrGarage_Draw_Front_4b50(*(undefined4 *)(iVar7 + 0xc),0);
    scrgarage_draw_sub_002750b0(param_1);
  }
  else if (((*(int *)(iVar7 + 0xc) < 4) || (7 < *(int *)(iVar7 + 0xc))) && (iVar2 != 5)) {
    iVar3 = UiMgr_FindLayout(100);
    iVar2 = *_g_UiMgr;
    uVar5 = menuscr_leaf_sub_002a14f0(*(undefined4 *)(iVar7 + 0xc),0xffffffffffffffff);
    uVar5 = MsgId_ForGrade(uVar5);
    UiElem_SetPropInt(iVar2 + iVar3 * 0x4f4 + 4,5,0x16,uVar5);
    iVar2 = UiMgr_FindLayout(100);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    scrgarage_draw_sub_002754a0(param_1);
  }
  else {
    scrgarage_draw_sub_002754a0(param_1);
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
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  
  *(undefined4 *)(param_1 + 0x9d4) = 0;
  iVar3 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xa20) == *(int *)(param_1 + 0xa00)) {
      uVar2 = UiRes_GetLayoutData(0x140);
      iVar3 = UiMgr_FindLayout(0x68);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar3 + 800) = 0;
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x318) = 0;
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    uVar2 = UiRes_GetLayoutData(0x141);
    iVar3 = UiMgr_FindLayout(0x68);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar2;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x142);
    iVar3 = UiMgr_FindLayout(0x68);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x348) = 0;
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x338) = 0;
    if (*(int *)(iVar3 + 0x348) == 0) {
      *(undefined4 *)(iVar3 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    *(undefined4 *)(iVar3 + 0x340) = 0;
    *(undefined4 *)(iVar3 + 0x348) = uVar2;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x143);
    iVar3 = UiMgr_FindLayout(0x68);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x35c) = 0;
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x34c) = 0;
    if (*(int *)(iVar3 + 0x35c) == 0) {
      *(undefined4 *)(iVar3 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    *(undefined4 *)(iVar3 + 0x354) = 0;
    *(undefined4 *)(iVar3 + 0x35c) = uVar2;
    *(undefined4 *)(iVar3 + 0x358) = 1;
    uVar2 = UiRes_GetLayoutData(0x144);
    iVar3 = UiMgr_FindLayout(0x68);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    if (*(int *)(iVar3 + 0x370) == 0) {
      *(undefined4 *)(iVar3 + 0x364) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x370) = 0;
      *(undefined4 *)(iVar3 + 0x360) = 0;
      if (*(int *)(iVar3 + 0x370) == 0) {
        *(undefined4 *)(iVar3 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x360) = 0;
      if (*(int *)(iVar3 + 0x370) == 0) {
        *(undefined4 *)(iVar3 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x368) = 1;
      *(undefined4 *)(iVar3 + 0x370) = uVar2;
      *(undefined4 *)(iVar3 + 0x36c) = 1;
    }
    iVar3 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x1d,8);
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x68,0x36ed78,2,0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x68,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) == 0) {
    MenuWnd_DrawCursor(9 < *(int *)(param_1 + 0x78));
  }
  else {
    *(undefined4 *)(param_1 + 0x9d4) = 1;
    MenuWnd_DrawCursor(0);
    if (*(int *)(param_1 + 0xa20) == *(int *)(param_1 + 0xa08)) {
      lVar5 = UiLayout_UpdateAnimById(0x68,1);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x68,*(undefined4 *)(&LAB_0032dd40 + *(int *)(param_1 + 0x9dc) * 4),0,0);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  iVar3 = (iVar1 + (iVar3 - *(int *)(param_1 + 0x9dc))) % iVar1;
  iVar8 = 0;
  puVar7 = &DAT_0032dd10;
  while( true ) {
    if (8 < iVar1) {
      iVar1 = 9;
    }
    if (iVar1 <= iVar8) break;
    iVar1 = UiMgr_FindLayout(0x68);
    UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar7,0x16,
                      *(int *)(param_1 + iVar3 * 4 + 0x7c) + -0xa8);
    iVar1 = *(int *)(param_1 + 0x78);
    iVar3 = (iVar3 + 1) % iVar1;
    puVar7 = puVar7 + 1;
    iVar8 = iVar8 + 1;
  }
  iVar3 = UiMgr_FindLayout(0x68);
  iVar1 = *(int *)(param_1 + 0x78);
  iVar8 = *_g_UiMgr + iVar3 * 0x4f4 + 4;
  iVar3 = (iVar1 + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x9dc))) % iVar1;
  if (iVar1 < 10) {
    UiElem_SetPropFloat(0x41800000,iVar8,4,1);
    UiElem_SetPropFloat(0x42060000,iVar8,4,6);
    iVar3 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,3,8);
  }
  else {
    if (iVar3 + 9 <= iVar1) {
      UiElem_SetPropFloat((float)iVar3 * (536.0 / (float)iVar1) + 16.0,iVar8,4,1);
      UiElem_SetPropFloat((9.0 / (float)iVar1) * 33.5,iVar8,4,6);
      iVar3 = UiMgr_FindLayout(0x68);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,3,8);
      iVar3 = *(int *)(param_1 + 0x9e0);
      goto LAB_0027a408;
    }
    fVar9 = (float)((iVar3 + 9) - iVar1);
    UiElem_SetPropFloat((float)iVar3 * (536.0 / (float)iVar1) + 16.0,iVar8,4,1);
    UiElem_SetPropFloat(((9.0 - fVar9) / (float)iVar1) * 33.5,iVar8,4,6);
    UiElem_SetPropFloat(0x41800000,iVar8,3,1);
    UiElem_SetPropFloat((fVar9 / (float)iVar1) * 33.5,iVar8,3,6);
    iVar3 = UiMgr_FindLayout(0x68);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,3,8);
  }
  iVar3 = *(int *)(param_1 + 0x9e0);
LAB_0027a408:
  if (iVar3 == 1) {
    Menu_ClearSlot(0);
    lVar5 = UiLayout_UpdateAnimById(0x68,2);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar3 = UiMgr_FindLayout(0x68);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x338) = 0;
      if (*(int *)(iVar3 + 0x348) == 0) {
        *(undefined4 *)(iVar3 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x9dc);
      iVar8 = *(int *)(param_1 + 0x78);
      iVar4 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,DAT_0032dd34,0x16,
                        *(int *)(((iVar8 + (iVar3 - iVar1) + -1) % iVar8) * 4 + param_1 + 0x7c) +
                        -0xa8);
    }
  }
  else if (iVar3 == 2) {
    lVar5 = UiLayout_UpdateAnimById(0x68,3);
    if (lVar5 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x9e0) = 0;
      iVar3 = UiMgr_FindLayout(0x68);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x34c) = 0;
      if (*(int *)(iVar3 + 0x35c) == 0) {
        *(undefined4 *)(iVar3 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x358) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x9dc);
      iVar8 = *(int *)(param_1 + 0x78);
      iVar4 = UiMgr_FindLayout(0x68);
      UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,DAT_0032dd34,0x16,
                        *(int *)(((iVar8 + (iVar3 - iVar1) + 9) % iVar8) * 4 + param_1 + 0x7c) +
                        -0xa8);
    }
  }
  MenuWnd_SetTitle(3,0x20a);
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
  MenuWnd_DrawText(0x67,0x1d,0x31);
  iVar3 = UiMgr_FindLayout(0x67);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  scrgarage_draw_sub_00274d20
            (*(undefined4 *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c),
             *(undefined4 *)(param_1 + 0x78),1,*(undefined4 *)(param_1 + 0x9d4));
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  return;
}

// 0x0027a760  size 0x37c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32db78 */

void ScrWheel_Update(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0xa14);
  *(undefined4 *)(iVar5 + 0xa14) = 0;
  if (iVar2 == 0) {
    *(undefined4 *)(iVar5 + 0x9d4) = 0;
  }
  else {
    uVar1 = UiRes_GetLayoutData(0x13a);
    iVar2 = UiMgr_FindLayout(0x66);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x13b);
    iVar2 = UiMgr_FindLayout(0x66);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x196);
    iVar2 = UiMgr_FindLayout(100);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x197);
    iVar2 = UiMgr_FindLayout(100);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar5 + 0x9d4) = 0;
  }
  if (*(int *)(iVar5 + 0xa00) == 4) {
    lVar3 = UiLayout_UpdateAnimById(0x66,0);
    lVar4 = UiLayout_UpdateAnimById(100,0);
    if (lVar3 == 0 && lVar4 == 0) {
      *(undefined4 *)(iVar5 + 0xa10) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x9d4) = 1;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0xa10) = 0;
  }
  if (*(int *)(iVar5 + 0xa18) != 0) {
    *(undefined4 *)(iVar5 + 0x9d4) = 1;
    if (*(int *)(iVar5 + 0xa08) == 4) {
      lVar3 = UiLayout_UpdateAnimById(0x66);
      lVar4 = UiLayout_UpdateAnimById(100,1);
      if (lVar3 == 0 && lVar4 == 0) {
        *(undefined4 *)(iVar5 + 0xa18) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0xa18) = 0;
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x66,*(undefined4 *)(&DAT_0032dcf0 + *(int *)(iVar5 + 0x10) * 4),1,0);
  }
  scrgarage_draw_sub_002750b0(param_1);
  MenuWnd_SetTitle(3,0x1fb);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,*(undefined4 *)(*(int *)(iVar5 + 0x10) * 4 + iVar5 + 0x7c)
                     ,*(undefined4 *)(iVar5 + 0x68));
  ScrGarage_Draw_Front_4b50(*(undefined4 *)(iVar5 + 0xc),0);
  return;
}

// 0x0027aae0  size 0x670
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32db78 */

void ScrWheel_Enter(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x9d4) = 0;
  iVar1 = *(int *)(iVar7 + 0xa14);
  *(undefined4 *)(iVar7 + 0xa14) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar7 + 0xa00);
  }
  else {
    uVar2 = UiRes_GetLayoutData(0x12e);
    iVar1 = UiMgr_FindLayout(99);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar2;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x12f);
    iVar1 = UiMgr_FindLayout(99);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x130);
    iVar1 = UiMgr_FindLayout(99);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x348) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x131);
    iVar1 = UiMgr_FindLayout(99);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x35c) = 0;
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x354) = 0;
    *(undefined4 *)(iVar1 + 0x35c) = uVar2;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    uVar2 = UiRes_GetLayoutData(0x196);
    iVar1 = UiMgr_FindLayout(100);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar2;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x197);
    iVar1 = UiMgr_FindLayout(100);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    *(undefined4 *)(iVar1 + 0x32c) = 0;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(99,0x36ed70,2,0);
    iVar1 = *(int *)(iVar7 + 0xa00);
  }
  if (iVar1 == 3) {
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
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(99,*(undefined4 *)(&DAT_0032dcd0 + *(int *)(iVar7 + 0x9fc) * 4),1,0);
    iVar1 = *(int *)(iVar7 + 0x9e0);
  }
  else {
    iVar1 = *(int *)(iVar7 + 0x9e0);
  }
  if (iVar1 == 1) {
    Menu_ClearSlot(0);
    lVar4 = UiLayout_UpdateAnimById(99,2);
    if (lVar4 == 0) {
      *(undefined4 *)(iVar7 + 0x9e0) = 0;
      iVar1 = UiMgr_FindLayout(99);
      iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
      *(undefined4 *)(iVar1 + 0x338) = 0;
      if (*(int *)(iVar1 + 0x348) == 0) {
        *(undefined4 *)(iVar1 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  else if ((iVar1 == 2) && (lVar4 = UiLayout_UpdateAnimById(99,3), lVar4 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar7 + 0x9e0) = 0;
    iVar1 = UiMgr_FindLayout(99);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
  }
  MenuWnd_SetTitle(3,0x1fb);
  iVar1 = *(int *)(*(int *)(iVar7 + 0x10) * 4 + iVar7 + 0x7c);
  if (iVar1 == -1) {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
    iVar1 = *(int *)(iVar7 + 0xc);
  }
  else {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,iVar1,0);
    iVar1 = *(int *)(iVar7 + 0xc);
  }
  if (((iVar1 < 4) || (7 < iVar1)) && (*(int *)(iVar7 + 8) != 5)) {
    iVar3 = UiMgr_FindLayout(100);
    iVar1 = *_g_UiMgr;
    uVar6 = menuscr_leaf_sub_002a14f0(*(undefined4 *)(iVar7 + 0xc),0xffffffffffffffff);
    uVar6 = MsgId_ForGrade(uVar6);
    UiElem_SetPropInt(iVar1 + iVar3 * 0x4f4 + 4,5,0x16,uVar6);
    iVar1 = UiMgr_FindLayout(100);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
    scrgarage_draw_sub_002754a0(param_1);
  }
  else {
    scrgarage_draw_sub_002754a0(param_1);
  }
  return;
}

// 0x0027b150  size 0x440
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Wheel_b150(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0x13c);
    iVar1 = UiMgr_FindLayout(0x67);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar1 + 800) = 0;
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x310) = 0;
    if (*(int *)(iVar1 + 800) == 0) {
      *(undefined4 *)(iVar1 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x318) = 0;
    *(undefined4 *)(iVar1 + 800) = uVar2;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    if (*(int *)(param_1 + 0xa00) == 2) {
      uVar2 = UiRes_GetLayoutData(0x13d);
      iVar1 = UiMgr_FindLayout(0x67);
      iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
      *(undefined4 *)(iVar1 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x334) = 0;
      *(undefined4 *)(iVar1 + 0x324) = 0;
      if (*(int *)(iVar1 + 0x334) == 0) {
        *(undefined4 *)(iVar1 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x330) = 1;
      }
      *(undefined4 *)(iVar1 + 0x324) = 0;
      if (*(int *)(iVar1 + 0x334) == 0) {
        *(undefined4 *)(iVar1 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x330) = 1;
      }
      *(undefined4 *)(iVar1 + 0x32c) = 0;
      *(undefined4 *)(iVar1 + 0x334) = uVar2;
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    uVar2 = UiRes_GetLayoutData(0x13e);
    iVar1 = UiMgr_FindLayout(0x67);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x348) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x338) = 0;
    if (*(int *)(iVar1 + 0x348) == 0) {
      *(undefined4 *)(iVar1 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x344) = 1;
    }
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x13f);
    iVar1 = UiMgr_FindLayout(0x67);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x35c) = 0;
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x354) = 0;
    *(undefined4 *)(iVar1 + 0x35c) = uVar2;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0x67,0);
  lVar4 = UiLayout_UpdateAnimById(0x67,1);
  if (lVar3 == 0 && lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    if (*(int *)(param_1 + 0xa20) == *(int *)(param_1 + 0xa08)) {
      lVar3 = UiLayout_UpdateAnimById(0x67,2);
      lVar4 = UiLayout_UpdateAnimById(0x67,3);
      if (lVar3 == 0 && lVar4 == 0) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0x67,2);
      if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 0xa18) = 0;
      }
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x67,*(undefined4 *)(&DAT_0032dcc0 + *(int *)(param_1 + 0x68) * 4),1,0);
  }
  iVar1 = *(int *)(param_1 + 0x6c);
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
  if (iVar1 == 0) {
    MenuWnd_DrawText(0x67,0x1d,0x31);
  }
  else {
    MenuWnd_DrawTextId(0x67,0x1d,3,0x31);
  }
  iVar1 = UiMgr_FindLayout(0x67);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0x209);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  return;
}

// 0x0027b590  size 0x4ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32db6c */

void ScrSportsTyres_Update(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xa00) == 3) {
      uVar1 = UiRes_GetLayoutData(0x133);
      iVar2 = UiMgr_FindLayout(0x65);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar1;
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    uVar1 = UiRes_GetLayoutData(0x132);
    iVar2 = UiMgr_FindLayout(0x65);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar2 + 800) = 0;
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x310) = 0;
    if (*(int *)(iVar2 + 800) == 0) {
      *(undefined4 *)(iVar2 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x134);
    iVar2 = UiMgr_FindLayout(0x65);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar1 = UiRes_GetLayoutData(0x135);
    iVar2 = UiMgr_FindLayout(0x65);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar1;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar1 = UiRes_GetLayoutData(0x136);
    iVar2 = UiMgr_FindLayout(0x65);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar1 = UiRes_GetLayoutData(0x137);
    iVar2 = UiMgr_FindLayout(0x65);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar2 + 900) = 0;
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x37c) = 0;
    *(undefined4 *)(iVar2 + 900) = uVar1;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    uVar1 = UiRes_GetLayoutData(0x214);
    iVar2 = UiMgr_FindLayout(0x65);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x38c) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x398) = 0;
      *(undefined4 *)(iVar2 + 0x388) = 0;
      if (*(int *)(iVar2 + 0x398) == 0) {
        *(undefined4 *)(iVar2 + 0x394) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x394) = 1;
      }
      *(undefined4 *)(iVar2 + 0x388) = 0;
      if (*(int *)(iVar2 + 0x398) == 0) {
        *(undefined4 *)(iVar2 + 0x394) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x394) = 1;
      }
      *(undefined4 *)(iVar2 + 0x390) = 1;
      *(undefined4 *)(iVar2 + 0x398) = uVar1;
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0x65,0);
  lVar4 = UiLayout_UpdateAnimById(0x65,1);
  if (lVar3 == 0 && lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if (*(int *)(param_1 + 0xa18) != 0) {
    if (*(int *)(param_1 + 0xa08) == 3) {
      iVar2 = 2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x68) + 3;
    }
    lVar3 = UiLayout_UpdateAnimById(0x65,iVar2);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0xa18) = 0;
    }
  }
  if (*piRam0036f468 == 1) {
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
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  short *psVar8;
  int unaff_s0_lo;
  undefined8 uVar9;
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
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 3) {
    unaff_s2 = 0x60;
LAB_0027baac:
    iVar3 = *(int *)(param_1 + 0xa08);
  }
  else {
    if (iVar3 == 5) {
      unaff_s2 = 0x61;
      goto LAB_0027baac;
    }
    if (((iVar3 == 2) || (iVar3 == 1)) || (iVar3 == 0)) {
      unaff_s2 = 0x5f;
      goto LAB_0027baac;
    }
    iVar3 = *(int *)(param_1 + 0xa08);
  }
  uVar9 = 1;
  if ((iVar3 != 2) && (*(int *)(param_1 + 0xc) == 0x1f)) {
    uVar9 = 2;
  }
  iVar3 = *(int *)(param_1 + 0xa14);
  *(undefined4 *)(param_1 + 0xa14) = 0;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 3) {
      uVar2 = UiRes_GetLayoutData(0x127);
      iVar3 = UiMgr_FindLayout(0x60);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar3 + 800) = 0;
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x318) = 0;
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = UiRes_GetLayoutData(0x128);
      iVar3 = UiMgr_FindLayout(0x60);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x334) = 0;
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x32c) = 0;
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    else if (iVar3 == 5) {
      uVar2 = UiRes_GetLayoutData(0x129);
      iVar3 = UiMgr_FindLayout(0x61);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar3 + 800) = 0;
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x318) = 0;
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = UiRes_GetLayoutData(0x12a);
      iVar3 = UiMgr_FindLayout(0x61);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x334) = 0;
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x32c) = 0;
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
      uVar2 = UiRes_GetLayoutData(299);
      iVar3 = UiMgr_FindLayout(0x61);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x33c) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x348) = 0;
      *(undefined4 *)(iVar3 + 0x338) = 0;
      if (*(int *)(iVar3 + 0x348) == 0) {
        *(undefined4 *)(iVar3 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x344) = 1;
      }
      *(undefined4 *)(iVar3 + 0x338) = 0;
      if (*(int *)(iVar3 + 0x348) == 0) {
        *(undefined4 *)(iVar3 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x344) = 1;
      }
      *(undefined4 *)(iVar3 + 0x340) = 0;
      *(undefined4 *)(iVar3 + 0x348) = uVar2;
      *(undefined4 *)(iVar3 + 0x344) = 1;
    }
    else if (iVar3 == 2) {
      uVar2 = UiRes_GetLayoutData(0x121);
      iVar3 = UiMgr_FindLayout(0x5f);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar3 + 800) = 0;
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x318) = 0;
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = UiRes_GetLayoutData(0x122);
      iVar3 = UiMgr_FindLayout(0x5f);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x334) = 0;
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x32c) = 0;
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    else if (iVar3 == 1) {
      uVar2 = UiRes_GetLayoutData(0x125);
      iVar3 = UiMgr_FindLayout(0x5f);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar3 + 800) = 0;
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x318) = 0;
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = UiRes_GetLayoutData(0x126);
      iVar3 = UiMgr_FindLayout(0x5f);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x334) = 0;
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x32c) = 0;
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    else if (iVar3 == 0) {
      uVar2 = UiRes_GetLayoutData(0x123);
      iVar3 = UiMgr_FindLayout(0x5f);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar3 + 800) = 0;
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x310) = 0;
      if (*(int *)(iVar3 + 800) == 0) {
        *(undefined4 *)(iVar3 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar3 + 0x318) = 0;
      *(undefined4 *)(iVar3 + 800) = uVar2;
      *(undefined4 *)(iVar3 + 0x31c) = 1;
      uVar2 = UiRes_GetLayoutData(0x124);
      iVar3 = UiMgr_FindLayout(0x5f);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x334) = 0;
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x324) = 0;
      if (*(int *)(iVar3 + 0x334) == 0) {
        *(undefined4 *)(iVar3 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x330) = 1;
      }
      *(undefined4 *)(iVar3 + 0x32c) = 0;
      *(undefined4 *)(iVar3 + 0x334) = uVar2;
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(unaff_s2,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa10) = 0;
  }
  if ((*(int *)(param_1 + 0xa18) != 0) &&
     (lVar4 = UiLayout_UpdateAnimById(unaff_s2,uVar9), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0xa18) = 0;
  }
  uVar9 = 0x41;
  if (*(uint *)(param_1 + 0xc) < 0x20) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0xc)) {
    default:
      unaff_s0_lo = 0;
      uVar9 = 0x1f7;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      unaff_s0_lo = 1;
      uVar9 = 0x1f8;
      break;
    case 8:
      unaff_s0_lo = 2;
      uVar9 = 0x1f9;
      break;
    case 9:
      unaff_s0_lo = 3;
      uVar9 = 0x1fa;
      break;
    case 10:
      unaff_s0_lo = 4;
      uVar9 = 0x22b;
      break;
    case 0xb:
      unaff_s0_lo = 0;
      uVar9 = 0x1fd;
      break;
    case 0xc:
      unaff_s0_lo = 1;
      uVar9 = 0x1fe;
      break;
    case 0xd:
      unaff_s0_lo = 2;
      uVar9 = 0x1ff;
      break;
    case 0xe:
      unaff_s0_lo = 2;
      uVar9 = 0x1ff;
      break;
    case 0xf:
      unaff_s0_lo = 2;
      uVar9 = 0x1ff;
      break;
    case 0x10:
      unaff_s0_lo = 3;
      uVar9 = 0x200;
      break;
    case 0x11:
      unaff_s0_lo = 4;
      uVar9 = 0x201;
      break;
    case 0x12:
      unaff_s0_lo = 0;
      uVar9 = 0x202;
      break;
    case 0x13:
      unaff_s0_lo = 1;
      uVar9 = 0x203;
      break;
    case 0x14:
      unaff_s0_lo = 0;
      uVar9 = 0x204;
      break;
    case 0x15:
      unaff_s0_lo = 1;
      uVar9 = 0x205;
      break;
    case 0x16:
      unaff_s0_lo = 2;
      uVar9 = 0x206;
      break;
    case 0x17:
      unaff_s0_lo = 3;
      uVar9 = 0x207;
      break;
    case 0x18:
      unaff_s0_lo = 0;
      uVar9 = 0x20c;
      break;
    case 0x19:
    case 0x1a:
      break;
    case 0x1b:
      unaff_s0_lo = 1;
      uVar9 = 0x22c;
      break;
    case 0x1c:
      unaff_s0_lo = 2;
      uVar9 = 0x22d;
      break;
    case 0x1d:
      unaff_s0_lo = 3;
      uVar9 = 0x22e;
      break;
    case 0x1e:
      unaff_s0_lo = 4;
      uVar9 = 0x22f;
      break;
    case 0x1f:
      unaff_s0_lo = 5;
      uVar9 = 0x20d;
    }
  }
  if (*piRam0036f468 == 1) {
    if (unaff_s2 == 0x60) {
      MenuWnd_SetItemState(0x60,*(undefined4 *)(unaff_s0_lo * 4 + 0x32dc80),1,0);
    }
    else if (unaff_s2 == 0x61) {
      MenuWnd_SetItemState(0x61,*(undefined4 *)(unaff_s0_lo * 4 + 0x32dc60),1,0);
    }
    else {
      if (unaff_s2 != 0x5f) {
        iVar3 = *(int *)(param_1 + 8);
        goto LAB_0027c25c;
      }
      MenuWnd_SetItemState(0x5f,*(undefined4 *)(unaff_s0_lo * 4 + 0x32dc40),1,0);
    }
  }
  iVar3 = *(int *)(param_1 + 8);
LAB_0027c25c:
  if (iVar3 == 3) {
    MenuWnd_DrawText(0x60,0x2b,0x99e);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x200000) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x60,0x2c,uVar5,0x99f);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x400000) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x60,0x2d,uVar5,0x9a0);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x800000) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x60,0x2e,uVar5,0x9a1);
    uStack_30 = DAT_0032dc90;
    uStack_2c = DAT_0032dc94;
    uStack_28 = DAT_0032dc98;
    uStack_24 = DAT_0032dc9c;
    uStack_20 = DAT_0032dca0;
    uStack_1c = DAT_0032dca4;
    uStack_18 = DAT_0032dca8;
    uStack_14 = DAT_0032dcac;
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0xf);
    uStack_10 = Msg_MakerInfo(uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0x10);
    uStack_c = Msg_MakerInfo(uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0xf);
    sStack_4 = PartDb_GetInfo(uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0x10);
    uStack_2 = PartDb_GetInfo(uVar5);
    iVar3 = 0;
    psVar8 = &sStack_4;
    puVar7 = &uStack_10;
    puVar6 = &uStack_30;
    do {
      sVar1 = *psVar8;
      if (sVar1 == 0x9d) {
        puVar6[6] = *puVar7;
      }
      else if (sVar1 == 0x98) {
        puVar6[4] = *puVar7;
      }
      else if (sVar1 == 0x93) {
        puVar6[2] = *puVar7;
      }
      else if (sVar1 == 0x8d) {
        *puVar6 = *puVar7;
      }
      iVar3 = iVar3 + 1;
      psVar8 = psVar8 + 1;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 2);
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
  else if (iVar3 == 5) {
    MenuWnd_DrawText(0x61,0x31,0x98d);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x8000000) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x32,uVar5,0x991);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x10000000) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x33,uVar5,0x992);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x20000000) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x34,uVar5,0x993);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x40000000) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x35,uVar5,0x994);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x80000000) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x61,0x3c,uVar5,0x990);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0xc);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x61,0x37,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0x12);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x61,0x38,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0x11);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x61,0x39,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0x13);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x61,0x3a,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0x14);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x61,0x3b,uVar5);
    MenuWnd_DrawText(0x61,0x36,0x9c1);
  }
  else if (iVar3 == 2) {
    MenuWnd_DrawText(0x5f,0x24,0x98a);
    MenuWnd_DrawText(0x5f,0x25,0x98b);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,10);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2a,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0xb);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2b,uVar5);
    MenuWnd_DrawText(0x5f,0x29,0x9be);
  }
  else if (iVar3 == 1) {
    MenuWnd_DrawText(0x5f,0x24,0x985);
    MenuWnd_DrawText(0x5f,0x25,0x986);
    MenuWnd_DrawText(0x5f,0x26,0x987);
    MenuWnd_DrawText(0x5f,0x27,0x988);
    MenuWnd_DrawText(0x5f,0x28,0x989);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,5);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2a,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,6);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2b,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,7);
    uVar5 = Msg_PartMaker(uVar5);
    MenuWnd_DrawText(0x5f,0x2c,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,8);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2d,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,9);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2e,uVar5);
    MenuWnd_DrawText(0x5f,0x29,0x9bd);
  }
  else if (iVar3 == 0) {
    iVar3 = scrcareer_step_sub_0029f470(0xffffffffffffffff,0);
    MenuWnd_DrawText(0x5f,0x24,*(undefined4 *)(&DAT_0032cd70 + iVar3 * 4));
    MenuWnd_DrawText(0x5f,0x25,(&DAT_0032cd90)[iVar3]);
    uVar5 = 0;
    if ((*(uint *)(param_1 + 0x6c) & 0x100) == 0) {
      uVar5 = 3;
    }
    MenuWnd_DrawTextId(0x5f,0x26,uVar5,0x982);
    MenuWnd_DrawText(0x5f,0x27,0x983);
    MenuWnd_DrawText(0x5f,0x28,0x984);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,0);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2a,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,2);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2b,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,1);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2c,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,3);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2d,uVar5);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCurrentPartSlot(uVar5,4);
    uVar5 = Msg_MakerInfo(uVar5);
    MenuWnd_DrawText(0x5f,0x2e,uVar5);
    MenuWnd_DrawText(0x5f,0x29,0x9bc);
  }
  iVar3 = UiMgr_FindLayout(unaff_s2);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,uVar9);
  return;
}

