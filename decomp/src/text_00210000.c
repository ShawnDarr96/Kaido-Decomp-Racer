// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00210000 - 0x00214000
#include "ghidra_types.h"

// 0x00210450  size 0x8e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectCarFor(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar1 = UiRes_GetLayoutData(0x3d6);
    iVar8 = UiMgr_FindLayout(0x115);
    iVar8 = *_g_UiMgr + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar8 + 800) = 0;
    *(undefined4 *)(iVar8 + 0x310) = 0;
    if (*(int *)(iVar8 + 800) == 0) {
      *(undefined4 *)(iVar8 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x310) = 0;
    if (*(int *)(iVar8 + 800) == 0) {
      *(undefined4 *)(iVar8 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x318) = 0;
    *(undefined4 *)(iVar8 + 800) = uVar1;
    *(undefined4 *)(iVar8 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x3d7);
    iVar8 = UiMgr_FindLayout(0x115);
    iVar8 = *_g_UiMgr + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x334) = 0;
    *(undefined4 *)(iVar8 + 0x324) = 0;
    if (*(int *)(iVar8 + 0x334) == 0) {
      *(undefined4 *)(iVar8 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x330) = 1;
    }
    *(undefined4 *)(iVar8 + 0x324) = 0;
    if (*(int *)(iVar8 + 0x334) == 0) {
      *(undefined4 *)(iVar8 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x330) = 1;
    }
    *(undefined4 *)(iVar8 + 0x32c) = 0;
    *(undefined4 *)(iVar8 + 0x334) = uVar1;
    *(undefined4 *)(iVar8 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x3d8);
    iVar8 = UiMgr_FindLayout(0x115);
    iVar8 = *_g_UiMgr + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x348) = 0;
    *(undefined4 *)(iVar8 + 0x338) = 0;
    if (*(int *)(iVar8 + 0x348) == 0) {
      *(undefined4 *)(iVar8 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x344) = 1;
    }
    *(undefined4 *)(iVar8 + 0x338) = 0;
    if (*(int *)(iVar8 + 0x348) == 0) {
      *(undefined4 *)(iVar8 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x344) = 1;
    }
    *(undefined4 *)(iVar8 + 0x340) = 0;
    *(undefined4 *)(iVar8 + 0x348) = uVar1;
    *(undefined4 *)(iVar8 + 0x344) = 1;
    uVar1 = UiRes_GetLayoutData(0x3d9);
    iVar8 = UiMgr_FindLayout(0x115);
    iVar8 = *_g_UiMgr + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x35c) = 0;
    *(undefined4 *)(iVar8 + 0x34c) = 0;
    if (*(int *)(iVar8 + 0x35c) == 0) {
      *(undefined4 *)(iVar8 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x358) = 1;
    }
    *(undefined4 *)(iVar8 + 0x34c) = 0;
    if (*(int *)(iVar8 + 0x35c) == 0) {
      *(undefined4 *)(iVar8 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x358) = 1;
    }
    *(undefined4 *)(iVar8 + 0x354) = 0;
    *(undefined4 *)(iVar8 + 0x35c) = uVar1;
    *(undefined4 *)(iVar8 + 0x358) = 1;
    uVar1 = UiRes_GetLayoutData(0x3f0);
    iVar8 = UiMgr_FindLayout(0x115);
    iVar8 = *_g_UiMgr + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x370) = 0;
    *(undefined4 *)(iVar8 + 0x360) = 0;
    if (*(int *)(iVar8 + 0x370) == 0) {
      *(undefined4 *)(iVar8 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x360) = 0;
    if (*(int *)(iVar8 + 0x370) == 0) {
      *(undefined4 *)(iVar8 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x368) = 0;
    *(undefined4 *)(iVar8 + 0x370) = uVar1;
    *(undefined4 *)(iVar8 + 0x36c) = 1;
    uVar1 = UiRes_GetLayoutData(0x3f1);
    iVar8 = UiMgr_FindLayout(0x115);
    iVar8 = *_g_UiMgr + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar8 + 900) = 0;
    *(undefined4 *)(iVar8 + 0x374) = 0;
    if (*(int *)(iVar8 + 900) == 0) {
      *(undefined4 *)(iVar8 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x380) = 1;
    }
    *(undefined4 *)(iVar8 + 0x374) = 0;
    if (*(int *)(iVar8 + 900) == 0) {
      *(undefined4 *)(iVar8 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x380) = 1;
    }
    *(undefined4 *)(iVar8 + 0x37c) = 0;
    *(undefined4 *)(iVar8 + 900) = uVar1;
    *(undefined4 *)(iVar8 + 0x380) = 1;
    uVar1 = UiRes_GetLayoutData(0x195);
    iVar8 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x35c) = 0;
    *(undefined4 *)(iVar8 + 0x34c) = 0;
    if (*(int *)(iVar8 + 0x35c) == 0) {
      *(undefined4 *)(iVar8 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x358) = 1;
    }
    *(undefined4 *)(iVar8 + 0x34c) = 0;
    if (*(int *)(iVar8 + 0x35c) == 0) {
      *(undefined4 *)(iVar8 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x358) = 1;
    }
    *(undefined4 *)(iVar8 + 0x354) = 0;
    *(undefined4 *)(iVar8 + 0x35c) = uVar1;
    *(undefined4 *)(iVar8 + 0x358) = 1;
    uVar1 = UiRes_GetLayoutData(0x407);
    iVar8 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x370) = 0;
    *(undefined4 *)(iVar8 + 0x360) = 0;
    if (*(int *)(iVar8 + 0x370) == 0) {
      *(undefined4 *)(iVar8 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x360) = 0;
    if (*(int *)(iVar8 + 0x370) == 0) {
      *(undefined4 *)(iVar8 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar8 + 0x368) = 0;
    *(undefined4 *)(iVar8 + 0x370) = uVar1;
    *(undefined4 *)(iVar8 + 0x36c) = 1;
    iVar8 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar8 * 0x4f4 + 4,0x27,8);
    iVar8 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar8 * 0x4f4 + 4,0x28,8);
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 2) {
      iVar8 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(*_g_UiMgr + iVar8 * 0x4f4 + 4,0x2b,0x16,2);
    }
    else if (iVar8 == 1) {
      iVar8 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(*_g_UiMgr + iVar8 * 0x4f4 + 4,0x2b,0x16,2);
    }
    else if (iVar8 == 0) {
      iVar8 = UiMgr_FindLayout(0x115);
      UiElem_SetPropInt(*_g_UiMgr + iVar8 * 0x4f4 + 4,0x2b,0x16,1);
    }
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x115,0x329f20,4,0xffffffffffffffff);
    iVar8 = *(int *)(param_1 + 0x69c);
  }
  if (iVar8 - 7U < 2) {
    lVar3 = UiLayout_UpdateAnimById(0x115,0);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    iVar8 = _g_MenuMgr + 0x40;
    lVar3 = UiLayout_UpdateAnimById(0x115,0);
    lVar4 = UiLayout_UpdateAnimById(0x115,2);
    lVar5 = UiLayout_UpdateAnimIfActive(iVar8,0);
    if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      MenuWnd_DrawCursor(*(int *)(param_1 + 0x4cc) != 1);
      iVar8 = *(int *)(param_1 + 0x4cc);
      goto LAB_0021059c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x6a4) - 7U < 2) {
      lVar3 = UiLayout_UpdateAnimById(0x115);
      if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      iVar8 = _g_MenuMgr + 0x40;
      lVar3 = UiLayout_UpdateAnimById(0x115);
      lVar4 = UiLayout_UpdateAnimById(0x115,3);
      lVar5 = UiLayout_UpdateAnimIfActive(iVar8,1);
      if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  iVar8 = *(int *)(param_1 + 0x4cc);
LAB_0021059c:
  if (iVar8 < 0xd) {
    iVar8 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar8 * 0x4f4 + 4,0x3b,8);
    iVar8 = UiMgr_FindLayout(0x115);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar8 * 0x4f4 + 4,0x3d,8);
  }
  iVar8 = 0;
  puVar7 = &DAT_00329f30;
  do {
    if (*(int *)(param_1 + 0x4cc) <= iVar8) {
      iVar2 = UiMgr_FindLayout(0x115);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar7,8);
    }
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 < 0xc);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x115,*(undefined4 *)(&DAT_00329f60 + *(int *)(param_1 + 0x680) * 4),0,0);
  }
  MenuWnd_Update(param_1 + 0x698,0x115,5,4);
  MenuWnd_DrawLabel(0x115,0x3e,0x3b,*(int *)(param_1 + 0x4d0) + 1,*(undefined4 *)(param_1 + 0x4cc));
  iVar8 = UiMgr_FindLayout(0x115);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  MenuWnd_DrawLabel(0x102,0x1b,0x11e,*(int *)(param_1 + 4) + 1);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4d0) * 4 + param_1 + 0x4c);
    MenuWnd_DrawStatus(uVar1,0xffffffffffffffff,0xffffffffffffffff,0);
    iVar8 = _g_MenuMgr + 0x40;
    uVar6 = MenuText_RivalCar(uVar1,0xffffffffffffffff);
    UiElem_SetPropInt(iVar8,0,0x16,uVar6);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x4d0);
    MenuWnd_DrawStatus(uVar1,1,0xffffffffffffffff,0);
    iVar8 = _g_MenuMgr + 0x40;
    uVar6 = MenuText_RivalCar(uVar1,1);
    UiElem_SetPropInt(iVar8,0,0x16,uVar6);
  }
  return;
}

// 0x00210d40  size 0x6a8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SelectCarManufacturer(int param_1)

{
  int iVar1;
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
  
  iVar7 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar7 != 0) {
    uVar2 = UiRes_GetLayoutData(0x51);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar2;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x52);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar2;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x53);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x348) = 0;
    *(undefined4 *)(iVar7 + 0x338) = 0;
    if (*(int *)(iVar7 + 0x348) == 0) {
      *(undefined4 *)(iVar7 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    *(undefined4 *)(iVar7 + 0x338) = 0;
    if (*(int *)(iVar7 + 0x348) == 0) {
      *(undefined4 *)(iVar7 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    *(undefined4 *)(iVar7 + 0x340) = 0;
    *(undefined4 *)(iVar7 + 0x348) = uVar2;
    *(undefined4 *)(iVar7 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x54);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x35c) = 0;
    *(undefined4 *)(iVar7 + 0x34c) = 0;
    if (*(int *)(iVar7 + 0x35c) == 0) {
      *(undefined4 *)(iVar7 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x358) = 1;
    }
    *(undefined4 *)(iVar7 + 0x34c) = 0;
    if (*(int *)(iVar7 + 0x35c) == 0) {
      *(undefined4 *)(iVar7 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x358) = 1;
    }
    *(undefined4 *)(iVar7 + 0x354) = 0;
    *(undefined4 *)(iVar7 + 0x35c) = uVar2;
    *(undefined4 *)(iVar7 + 0x358) = 1;
    uVar2 = UiRes_GetLayoutData(0x55);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x370) = 0;
    *(undefined4 *)(iVar7 + 0x360) = 0;
    if (*(int *)(iVar7 + 0x370) == 0) {
      *(undefined4 *)(iVar7 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x360) = 0;
    if (*(int *)(iVar7 + 0x370) == 0) {
      *(undefined4 *)(iVar7 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x368) = 0;
    *(undefined4 *)(iVar7 + 0x370) = uVar2;
    *(undefined4 *)(iVar7 + 0x36c) = 1;
    uVar2 = UiRes_GetLayoutData(0x193);
    iVar7 = UiMgr_FindLayout(0x11);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar2;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x194);
    iVar7 = UiMgr_FindLayout(0x11);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar2;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    iVar1 = UiMgr_FindLayout(0x11);
    iVar7 = *_g_UiMgr;
    uVar6 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(iVar7 + iVar1 * 0x4f4 + 4,0,0x16,uVar6);
    MenuWnd_DrawDialogText(0x17,0x36e8a8,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(1);
  lVar3 = UiLayout_UpdateAnimById(0x17,0);
  lVar4 = UiLayout_UpdateAnimById(0x17,1);
  lVar5 = UiLayout_UpdateAnimById(0x17,2);
  if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    *(undefined4 *)(param_1 + 0x6b4) = 0;
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
  }
  puVar9 = auStack_a0;
  puVar10 = &DAT_00329ed0;
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
  MenuList_Update(param_1 + 0x1c,auStack_a0,aiStack_50);
  if (*(int *)(param_1 + 0x10) == 1) {
    if (*(int *)(param_1 + 0x14) == 1) {
      iVar7 = UiMgr_FindLayout(0x11);
      iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
      *(undefined4 *)(iVar7 + 0x310) = 0;
      if (*(int *)(iVar7 + 800) == 0) {
        *(undefined4 *)(iVar7 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x31c) = 1;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    lVar3 = UiLayout_UpdateAnimById(0x11,1);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) != -1) {
    iVar7 = UiMgr_FindLayout(0x11);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    iVar1 = UiMgr_FindLayout(0x11);
    iVar7 = *_g_UiMgr;
    uVar6 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(iVar7 + iVar1 * 0x4f4 + 4,0,0x16,uVar6);
    UiLayout_UpdateAnimById(0x11,0);
  }
  iVar7 = UiMgr_FindLayout(0x17);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x36,8);
  MenuWnd_DrawLabel(0x102,0x1b,0x178);
  iVar7 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0x17);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  return;
}

// 0x002113f0  size 0x5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_NormalCar(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_s1;
  
  iVar3 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar3 != 0) {
    uVar2 = UiRes_GetLayoutData(0x3d4);
    iVar3 = UiMgr_FindLayout(0x114);
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
    uVar2 = UiRes_GetLayoutData(0x3d5);
    iVar3 = UiMgr_FindLayout(0x114);
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
    uVar2 = UiRes_GetLayoutData(0x3d2);
    iVar3 = UiMgr_FindLayout(0x113);
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
    iVar4 = UiMgr_FindLayout(0x113);
    iVar3 = *_g_UiMgr;
    uVar5 = UiRes_GetLayoutData(0x3d1);
    UiLayout_PlayAnim(iVar3 + iVar4 * 0x4f4 + 4,uVar5);
    Menu_ClearSlot(0);
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = UiMgr_FindLayout(0x114);
    UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0xf,9,iVar3 != 0);
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = UiMgr_FindLayout(0x114);
    UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x10,9,iVar3 != 1);
    iVar3 = UiMgr_FindLayout(0x113);
    UiElem_SetNumber(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x37,0x16,
                     *(undefined4 *)(&DAT_00329dc0 + *(int *)(param_1 + 0x67c) * 4));
  }
  if (*(int *)(param_1 + 0x69c) == 2) {
    lVar6 = UiLayout_UpdateAnimById(0x114,0);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0x114,0);
    lVar7 = UiLayout_UpdateAnimById(0x113,2);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    if (*(int *)(param_1 + 0x6a4) == 2) {
      lVar6 = UiLayout_UpdateAnimById(0x114);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0x114);
      lVar7 = UiLayout_UpdateAnimById(0x113,3);
      if (lVar6 == 0 && lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x114,*(undefined4 *)(&DAT_00329ec0 + *(int *)(param_1 + 8) * 4),1,0);
    iVar3 = *(int *)(param_1 + 0x68c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x68c);
  }
  if (iVar3 == 3) {
    cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar1 == '\x04') ||
       (cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar1 == '\a')) {
      unaff_s1 = 5;
    }
    else {
      unaff_s1 = 4;
    }
  }
  else if (iVar3 == 2) {
    cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar1 == '\x04') ||
       (cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar1 == '\a')) {
      unaff_s1 = 2;
    }
    else {
      unaff_s1 = 1;
    }
  }
  else if (iVar3 == 1) {
    unaff_s1 = 3;
  }
  else if (iVar3 == 0) {
    unaff_s1 = 0;
  }
  uVar5 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x113,0x3a,uVar5);
  uVar5 = MsgId_OnOff(*(int *)(param_1 + 0x688) == 0);
  MenuWnd_DrawText(0x113,0x3b,uVar5);
  uVar5 = MsgId_ForResult(unaff_s1);
  MenuWnd_DrawText(0x113,0x3c,uVar5);
  uVar5 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x690));
  MenuWnd_DrawText(0x113,0x3d,uVar5);
  MenuWnd_DrawRivalLabel(0x113,0x39,1,0x120,2,*(int *)(param_1 + 4) + 1,1);
  MenuWnd_DrawText(0x114,0x14,0x119);
  MenuWnd_DrawLabel(0x114,0x15,0x11a,1);
  MenuWnd_DrawLabel(0x114,0x16,0x11a,2);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 2) {
    MenuWnd_DrawLabel(0x102,0x1b,0x118);
  }
  else if (iVar3 == 1) {
    MenuWnd_DrawLabel(0x102,0x1b,0x118);
  }
  else if (iVar3 == 0) {
    MenuWnd_DrawText(0x102,0x1b,0x117);
  }
  iVar3 = UiMgr_FindLayout(0x114);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x113);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002119f0  size 0x54c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SpeedKingMode(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_s0;
  
  iVar2 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x3d0);
    iVar2 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x3d1);
    iVar2 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar3 = UiRes_GetLayoutData(0x3d2);
    iVar2 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)(iVar2 + 0x348) = uVar3;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar3 = UiRes_GetLayoutData(0x3d3);
    iVar2 = UiMgr_FindLayout(0x113);
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
    *(undefined4 *)(iVar2 + 0x35c) = uVar3;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    Menu_ClearSlot(0);
    iVar2 = UiMgr_FindLayout(0x113);
    UiElem_SetNumber(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x37,0x16,
                     *(undefined4 *)(&DAT_00329dc0 + *(int *)(param_1 + 0x67c) * 4));
    iVar2 = *(int *)(param_1 + 0x69c);
  }
  if (iVar2 == 3) {
    lVar4 = UiLayout_UpdateAnimById(0x113,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0x113,0);
    lVar5 = UiLayout_UpdateAnimById(0x113,2);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    if (*(int *)(param_1 + 0x6a4) == 3) {
      lVar4 = UiLayout_UpdateAnimById(0x113);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0x113);
      lVar5 = UiLayout_UpdateAnimById(0x113,3);
      if (lVar4 == 0 && lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x113,*(undefined4 *)(&DAT_00329ea0 + *(int *)(param_1 + 0x694) * 4),1,0);
    iVar2 = *(int *)(param_1 + 0x68c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x68c);
  }
  if (iVar2 == 3) {
    cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar1 == '\x04') ||
       (cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar1 == '\a')) {
      unaff_s0 = 5;
    }
    else {
      unaff_s0 = 4;
    }
  }
  else if (iVar2 == 2) {
    cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
    if ((cVar1 == '\x04') ||
       (cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar1 == '\a')) {
      unaff_s0 = 2;
    }
    else {
      unaff_s0 = 1;
    }
  }
  else if (iVar2 == 1) {
    unaff_s0 = 3;
  }
  else if (iVar2 == 0) {
    unaff_s0 = 0;
  }
  uVar6 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x113,0x3a,uVar6);
  uVar6 = MsgId_OnOff(*(int *)(param_1 + 0x688) == 0);
  MenuWnd_DrawText(0x113,0x3b,uVar6);
  uVar6 = MsgId_ForResult(unaff_s0);
  MenuWnd_DrawText(0x113,0x3c,uVar6);
  uVar6 = MsgId_YesNo(*(undefined1 *)(param_1 + 0x690));
  MenuWnd_DrawText(0x113,0x3d,uVar6);
  MenuWnd_DrawTextId(0x113,0x39,1,0x121);
  MenuWnd_DrawText(0x113,0x41,0x11b);
  MenuWnd_DrawText(0x113,0x42,0x11c);
  MenuWnd_DrawText(0x113,0x43,0x11d);
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_00329eb0 + *(int *)(param_1 + 0x694) * 4));
  iVar2 = UiMgr_FindLayout(0x113);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00211f40  size 0x878
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Downhill(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 auStack_10 [4];
  
  iVar2 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar2 != 0) {
    auStack_10[0] = DAT_00329e40;
    auStack_10[1] = DAT_00329e44;
    auStack_10[2] = DAT_00329e48;
    auStack_10[3] = DAT_00329e4c;
    uVar4 = UiRes_GetLayoutData(0x3cb);
    iVar2 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)(iVar2 + 800) = uVar4;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x3cc);
    iVar2 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)(iVar2 + 0x334) = uVar4;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(0x3cd);
    iVar2 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)(iVar2 + 0x340) = 1;
    *(undefined4 *)(iVar2 + 0x348) = uVar4;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar4 = UiRes_GetLayoutData(0x3ce);
    iVar2 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)(iVar2 + 0x354) = 1;
    *(undefined4 *)(iVar2 + 0x35c) = uVar4;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar4 = UiRes_GetLayoutData(0x3cf);
    iVar2 = UiMgr_FindLayout(0x112);
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
    *(undefined4 *)(iVar2 + 0x368) = 1;
    *(undefined4 *)(iVar2 + 0x370) = uVar4;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    iVar2 = UiMgr_FindLayout(0x111);
    UiElem_SetNumber(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x3d,0x16,
                     *(undefined4 *)(&DAT_00329da0 + *(int *)(param_1 + 0x67c) * 4));
    iVar3 = UiMgr_FindLayout(0x111);
    iVar2 = *_g_UiMgr;
    uVar6 = UiRes_GetLayoutData(auStack_10[*(int *)(param_1 + 0x678)]);
    UiLayout_PlayAnim(iVar2 + iVar3 * 0x4f4 + 4,uVar6);
    iVar2 = UiMgr_FindLayout(0x111);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x47,8);
    iVar2 = UiMgr_FindLayout(0x111);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x48,8);
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x112,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  if (*(int *)(param_1 + 0x6b4) != 0) {
    *(undefined4 *)(param_1 + 0x6b4) = 0;
  }
  iVar2 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x20,8);
  iVar2 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x21,8);
  iVar2 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x22,8);
  iVar2 = 0;
  puVar7 = &DAT_00329e50;
  do {
    iVar3 = UiMgr_FindLayout(0x112);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar7,8);
    iVar2 = iVar2 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar2 < 8);
  iVar2 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                      (&DAT_00329e50)[*(int *)(param_1 + 0x688)],8);
  iVar2 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                      *(undefined4 *)(&DAT_00329e58 + *(int *)(param_1 + 0x68c) * 4),8);
  iVar2 = UiMgr_FindLayout(0x112);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,
                      *(undefined4 *)(&DAT_00329e68 + *(int *)(param_1 + 0x690) * 4),8);
  if (*piRam0036f468 == 1) {
    iVar2 = *(int *)(param_1 + 0x684);
    if (iVar2 == 2) {
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e88 + *(int *)(param_1 + 0x690) * 4),0,0)
      ;
    }
    else if (iVar2 == 1) {
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e78 + *(int *)(param_1 + 0x68c) * 4),0,0)
      ;
    }
    else {
      if (iVar2 != 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x67c);
        goto LAB_00212224;
      }
      MenuWnd_SetItemState(0x112,*(undefined4 *)(&DAT_00329e70 + *(int *)(param_1 + 0x688) * 4),0,0)
      ;
    }
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x67c);
LAB_00212224:
  uVar6 = MsgId_ForSlot(uVar4,1);
  MenuWnd_DrawText(0x111,0x42,uVar6);
  uVar6 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x43,uVar6);
  uVar6 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x44,uVar6);
  uVar6 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x67c),1);
  MenuWnd_DrawText(0x111,0x45,uVar6);
  MenuWnd_DrawText(0x112,0x2c,0x49);
  MenuWnd_DrawText(0x112,0x2d,0x4a);
  MenuWnd_DrawText(0x112,0x2e,0x4f);
  MenuWnd_DrawText(0x112,0x2f,0x51);
  cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c));
  if ((cVar1 == '\x04') ||
     (cVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x67c)), cVar1 == '\a')) {
    MenuWnd_DrawText(0x112,0x30,0x53);
    MenuWnd_DrawText(0x112,0x31,0x54);
  }
  else {
    MenuWnd_DrawText(0x112,0x30,0x50);
    MenuWnd_DrawText(0x112,0x31,0x52);
  }
  MenuWnd_DrawText(0x112,0x32,0x55);
  MenuWnd_DrawText(0x112,0x33,0x56);
  MenuWnd_DrawText(0x102,0x1b,*(undefined4 *)(&DAT_00329e90 + *(int *)(param_1 + 0x684) * 4));
  UiLayout_UpdateAnimById(0x112,*(int *)(param_1 + 0x684) + 2);
  iVar2 = UiMgr_FindLayout(0x112);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x111);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  Subtitle_Draw();
  return;
}

// 0x002127c0  size 0x8b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SelectTheCourse(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int iVar11;
  int iStack_4;
  
  iVar1 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x69c);
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x3c1);
    iVar1 = UiMgr_FindLayout(0x111);
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
    uVar4 = UiRes_GetLayoutData(0x3c2);
    iVar1 = UiMgr_FindLayout(0x111);
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
    uVar4 = UiRes_GetLayoutData(0x3c3);
    iVar1 = UiMgr_FindLayout(0x111);
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
    uVar4 = UiRes_GetLayoutData(0x3c4);
    iVar1 = UiMgr_FindLayout(0x111);
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
    uVar4 = UiRes_GetLayoutData(0x3c5);
    iVar1 = UiMgr_FindLayout(0x111);
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
    uVar4 = UiRes_GetLayoutData(0x3c6);
    iVar1 = UiMgr_FindLayout(0x111);
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
    uVar4 = UiRes_GetLayoutData(0x3c7);
    iVar1 = UiMgr_FindLayout(0x111);
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
    uVar4 = UiRes_GetLayoutData(0x3c8);
    iVar1 = UiMgr_FindLayout(0x111);
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
    uVar4 = UiRes_GetLayoutData(0x3c9);
    iVar1 = UiMgr_FindLayout(0x111);
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
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x3c0) = uVar4;
    *(undefined4 *)(iVar1 + 0x3bc) = 1;
    uVar4 = UiRes_GetLayoutData(0x3ca);
    iVar1 = UiMgr_FindLayout(0x111);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x3c8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x3d4) = 0;
    *(undefined4 *)(iVar1 + 0x3c4) = 0;
    if (*(int *)(iVar1 + 0x3d4) == 0) {
      *(undefined4 *)(iVar1 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3d0) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3c4) = 0;
    if (*(int *)(iVar1 + 0x3d4) == 0) {
      *(undefined4 *)(iVar1 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3d0) = 1;
    }
    *(undefined4 *)(iVar1 + 0x3cc) = 0;
    *(undefined4 *)(iVar1 + 0x3d4) = uVar4;
    *(undefined4 *)(iVar1 + 0x3d0) = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x111,0x36e8a0,2,0);
    iVar1 = *(int *)(param_1 + 0x69c);
  }
  if (iVar1 == 1) {
    lVar5 = UiLayout_UpdateAnimById(0x111,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0x111,0);
    lVar6 = UiLayout_UpdateAnimById(0x111,1);
    if (lVar5 == 0 && lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x6ac) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      iVar1 = Msg_ProfileStat(0);
      MenuWnd_DrawCursor(4 < iVar1 + 1);
    }
  }
  else {
    if (*(int *)(_g_MenuMgr + 0x20) == *(int *)(_g_MenuMgr + 0x1c)) {
      lVar5 = UiLayout_UpdateAnimById(0x111,*(int *)(param_1 + 0x678) + 4);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0x111,2);
      lVar6 = UiLayout_UpdateAnimById(0x111,3);
      if (lVar5 == 0 && lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x6b4) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x111,*(undefined4 *)(&DAT_00329de0 + *(int *)(param_1 + 0x678) * 4),1,0);
  }
  MenuWnd_Update(param_1 + 0x698,0x111,8,9);
  iVar2 = Msg_ProfileStat(0);
  iVar2 = iVar2 + 1;
  MenuWnd_Clear(&iStack_4,*(undefined4 *)(param_1 + 0x698),*(undefined4 *)(param_1 + 0x678),
                *(undefined4 *)(param_1 + 0x67c),iVar2,4);
  iVar1 = (*(int *)(param_1 + 0x67c) + iVar2) - *(int *)(param_1 + 0x678);
  iVar11 = 0;
  puVar9 = &DAT_00329df0;
  puVar8 = &DAT_00329e20;
  while( true ) {
    iVar3 = iVar2;
    if (4 < iVar2) {
      iVar3 = 5;
    }
    if ((iVar3 <= iVar11) ||
       ((iVar1 = iVar1 % iVar2, iVar11 == 4 && (iVar1 = iStack_4, iStack_4 == -1)))) break;
    uVar7 = MsgId_ForSlot(iVar1,1);
    MenuWnd_DrawText(0x111,*puVar9,uVar7);
    iVar3 = UiMgr_FindLayout(0x111);
    UiElem_SetNumber(*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar8,0x16,
                     *(undefined4 *)(&DAT_00329da0 + iVar1 * 4));
    iVar1 = iVar1 + 1;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    iVar11 = iVar11 + 1;
  }
  if ((iVar2 < 4) && (iVar2 < 4)) {
    puVar10 = &DAT_00329e08 + iVar2 * 4;
    puVar8 = &DAT_00329e20 + iVar2;
    do {
      iVar1 = UiMgr_FindLayout(0x111);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*(undefined4 *)(puVar10 + -4),8);
      iVar1 = UiMgr_FindLayout(0x111);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar8,8);
      iVar2 = iVar2 + 1;
      puVar10 = puVar10 + 4;
      puVar8 = puVar8 + 1;
    } while (iVar2 < 4);
  }
  MenuWnd_DrawText(0x102,0x1b,0x110);
  iVar1 = UiMgr_FindLayout(0x111);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  Subtitle_Draw();
  return;
}

// 0x00213080  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 43 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage43_Exit(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x002130a0  size 0x178
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 43 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage43_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar3 = (int)param_1;
  (*(code *)(&PTR_MenuScr_Draw_SelectTheCourse_00329d70)[*(int *)(iVar3 + 0x6a0)])(param_1);
  if (*(int *)(iVar3 + 0x6a0) < 2) {
    iVar1 = UiMgr_FindLayout(0x110);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0x10f,0);
    iVar1 = UiMgr_FindLayout(0x10f);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  }
  iVar1 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar2 = Menu_IsInputIdle(iVar3 + 0x69c), lVar2 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00213220  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 43 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage43_Enter(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0x3da);
  iVar2 = UiMgr_FindLayout(0x10f);
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
  *(undefined4 *)(iVar2 + 0x318) = 1;
  *(undefined4 *)(iVar2 + 800) = uVar1;
  *(undefined4 *)(iVar2 + 0x31c) = 1;
  return;
}

// 0x002132c0  size 0x164
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 7 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State7(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0x18b,*(undefined4 *)(param_1 + 0x4a0),0x36e8d8);
  if (*(int *)(param_1 + 0x4d4) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x19,0x3c,uVar3);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00213430  size 0x17c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_PageCarPartInfo; on-screen text/callee hint "DoYouWant" (was ScrDoYouWant_Exit) */

void maybe_PageCarPartInfo_State5_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x4c0) == 5) {
    uVar3 = 0x17d;
  }
  else {
    uVar3 = 0x17c;
  }
  iVar1 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(uVar3,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x4d4) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x19,0x3c,uVar3);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x002135b0  size 0x164
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_PageCarPartInfo; on-screen text/callee hint "DoYouWant" (was ScrDoYouWant_Update)
    */

void maybe_PageCarPartInfo_State4_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x18d,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x4d4) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x19,0x3c,uVar3);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00213720  size 0x184
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_DoYouWant(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x4a0),0x36e8d0);
  uVar3 = MenuText_CarShortName(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff);
  MenuWnd_DrawLabel(5,0x1c,0x17b,uVar3);
  if (*(int *)(param_1 + 0x4d4) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x19,0x3c,uVar3);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar1 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x002138b0  size 0x5e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 2 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  iVar1 = CarDb_GetModelEntry(*(undefined4 *)(param_1 + 0x498));
  iVar7 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar7 != 0) {
    uVar3 = UiRes_GetLayoutData(100);
    iVar7 = UiMgr_FindLayout(0x1a);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar3;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x65);
    iVar7 = UiMgr_FindLayout(0x1a);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar3;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    uVar3 = UiRes_GetLayoutData(0x66);
    iVar7 = UiMgr_FindLayout(0x1a);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x348) = 0;
    *(undefined4 *)(iVar7 + 0x338) = 0;
    if (*(int *)(iVar7 + 0x348) == 0) {
      *(undefined4 *)(iVar7 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    *(undefined4 *)(iVar7 + 0x338) = 0;
    if (*(int *)(iVar7 + 0x348) == 0) {
      *(undefined4 *)(iVar7 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    *(undefined4 *)(iVar7 + 0x340) = 0;
    *(undefined4 *)(iVar7 + 0x348) = uVar3;
    *(undefined4 *)(iVar7 + 0x344) = 1;
    uVar3 = UiRes_GetLayoutData(0x67);
    iVar7 = UiMgr_FindLayout(0x1a);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x35c) = 0;
    *(undefined4 *)(iVar7 + 0x34c) = 0;
    if (*(int *)(iVar7 + 0x35c) == 0) {
      *(undefined4 *)(iVar7 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x358) = 1;
    }
    *(undefined4 *)(iVar7 + 0x34c) = 0;
    if (*(int *)(iVar7 + 0x35c) == 0) {
      *(undefined4 *)(iVar7 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x358) = 1;
    }
    *(undefined4 *)(iVar7 + 0x354) = 0;
    *(undefined4 *)(iVar7 + 0x35c) = uVar3;
    *(undefined4 *)(iVar7 + 0x358) = 1;
    iVar7 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x27,8);
    iVar7 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x28,8);
    MenuWnd_DrawDialogText(0x1a,0x36e8c8,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(0xc < iVar1);
  lVar4 = UiLayout_UpdateAnimById(0x1a,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if ((*(int *)(param_1 + 0x4d4) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x1a), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x4d4) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x1a,*(undefined4 *)(&DAT_0032a100 + *(int *)(param_1 + 0x49c) * 4),0,0);
  }
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetMoney(uVar5);
  MenuWnd_DrawNumber(0x19,0x3c,uVar5);
  MenuWnd_SetTitle(3,0x17a);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  iVar7 = 0;
  puVar6 = &DAT_0032a130;
  do {
    if (iVar7 < iVar1) {
      iVar2 = UiMgr_FindLayout(0x1a);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar6,8);
    }
    else {
      iVar2 = UiMgr_FindLayout(0x1a);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar6,8);
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar7 < 0xc);
  iVar7 = 0;
  if (0 < iVar1) {
    puVar6 = &DAT_0032a160;
    do {
      iVar2 = UiMgr_FindLayout(0x1a);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4 + 4;
      CarDb_GetPartEntry(auStack_8,*(undefined4 *)(param_1 + 0x498),iVar7,0);
      uVar8 = (uint)bStack_3 | (uint)bStack_5 << 0x10 | 0xff000000 | (uint)bStack_4 << 8;
      UiElem_SetPropInt(iVar2,*puVar6,0x39,uVar8);
      UiElem_SetPropInt(iVar2,*puVar6,0x3a,uVar8);
      UiElem_SetPropInt(iVar2,*puVar6,0x3b,uVar8);
      UiElem_SetPropInt(iVar2,*puVar6,0x3c,uVar8);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < iVar1);
  }
  iVar7 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0x1a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00213ea0  size 0x5f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 1 of state table 0x32a020 used by maybe_PageCarPartInfo_Update */

void maybe_PageCarPartInfo_State1(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar9 != 0) {
    uVar1 = UiRes_GetLayoutData(0x60);
    iVar9 = UiMgr_FindLayout(0x19);
    iVar9 = *_g_UiMgr + iVar9 * 0x4f4;
    *(undefined4 *)(iVar9 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x334) = 0;
    *(undefined4 *)(iVar9 + 0x324) = 0;
    if (*(int *)(iVar9 + 0x334) == 0) {
      *(undefined4 *)(iVar9 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x330) = 1;
    }
    *(undefined4 *)(iVar9 + 0x324) = 0;
    if (*(int *)(iVar9 + 0x334) == 0) {
      *(undefined4 *)(iVar9 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x330) = 1;
    }
    *(undefined4 *)(iVar9 + 0x32c) = 0;
    *(undefined4 *)(iVar9 + 0x334) = uVar1;
    *(undefined4 *)(iVar9 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x62);
    iVar9 = UiMgr_FindLayout(0x19);
    iVar9 = *_g_UiMgr + iVar9 * 0x4f4;
    *(undefined4 *)(iVar9 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x35c) = 0;
    *(undefined4 *)(iVar9 + 0x34c) = 0;
    if (*(int *)(iVar9 + 0x35c) == 0) {
      *(undefined4 *)(iVar9 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x358) = 1;
    }
    *(undefined4 *)(iVar9 + 0x34c) = 0;
    if (*(int *)(iVar9 + 0x35c) == 0) {
      *(undefined4 *)(iVar9 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x358) = 1;
    }
    *(undefined4 *)(iVar9 + 0x354) = 0;
    *(undefined4 *)(iVar9 + 0x35c) = uVar1;
    *(undefined4 *)(iVar9 + 0x358) = 1;
    uVar1 = UiRes_GetLayoutData(99);
    iVar9 = UiMgr_FindLayout(0x19);
    iVar9 = *_g_UiMgr + iVar9 * 0x4f4;
    *(undefined4 *)(iVar9 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x370) = 0;
    *(undefined4 *)(iVar9 + 0x360) = 0;
    if (*(int *)(iVar9 + 0x370) == 0) {
      *(undefined4 *)(iVar9 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar9 + 0x360) = 0;
    if (*(int *)(iVar9 + 0x370) == 0) {
      *(undefined4 *)(iVar9 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar9 + 0x368) = 0;
    *(undefined4 *)(iVar9 + 0x370) = uVar1;
    *(undefined4 *)(iVar9 + 0x36c) = 1;
    uVar1 = UiRes_GetLayoutData(0x96);
    iVar9 = UiMgr_FindLayout(0x19);
    iVar9 = *_g_UiMgr + iVar9 * 0x4f4;
    *(undefined4 *)(iVar9 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar9 + 900) = 0;
    *(undefined4 *)(iVar9 + 0x374) = 0;
    if (*(int *)(iVar9 + 900) == 0) {
      *(undefined4 *)(iVar9 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x380) = 1;
    }
    *(undefined4 *)(iVar9 + 0x374) = 0;
    if (*(int *)(iVar9 + 900) == 0) {
      *(undefined4 *)(iVar9 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x380) = 1;
    }
    *(undefined4 *)(iVar9 + 0x37c) = 0;
    *(undefined4 *)(iVar9 + 900) = uVar1;
    *(undefined4 *)(iVar9 + 0x380) = 1;
    uVar1 = UiRes_GetLayoutData(0x195);
    iVar9 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x35c) = 0;
    *(undefined4 *)(iVar9 + 0x34c) = 0;
    if (*(int *)(iVar9 + 0x35c) == 0) {
      *(undefined4 *)(iVar9 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x358) = 1;
    }
    *(undefined4 *)(iVar9 + 0x34c) = 0;
    if (*(int *)(iVar9 + 0x35c) == 0) {
      *(undefined4 *)(iVar9 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x358) = 1;
    }
    *(undefined4 *)(iVar9 + 0x354) = 0;
    *(undefined4 *)(iVar9 + 0x35c) = uVar1;
    *(undefined4 *)(iVar9 + 0x358) = 1;
    if (*(int *)(param_1 + 0x4bc) == 0) {
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
    }
    MenuWnd_DrawDialogText(0x19,0x32a090,4,0xffffffffffffffff);
    Menu_ClearSlot(0);
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x19,*(undefined4 *)(&DAT_0032a0a0 + *(int *)(param_1 + 0x4ac) * 4),0,0);
  }
  iVar9 = _g_MenuMgr + 0x40;
  lVar3 = UiLayout_UpdateAnimById(0x19,0);
  lVar4 = UiLayout_UpdateAnimById(0x19,1);
  lVar5 = UiLayout_UpdateAnimById(0x19,2);
  lVar6 = UiLayout_UpdateAnimIfActive(iVar9,0);
  if (lVar6 == 0 && (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0))) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if (*(int *)(param_1 + 0x4d4) == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      MenuWnd_DrawCursor(*(int *)(param_1 + 0x490) != 1);
    }
  }
  else {
    Menu_BlockInput(_g_MenuMgr + 0x654);
    lVar3 = UiLayout_UpdateAnimById(0x19,5);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x19,0x3c,uVar7);
  MenuWnd_DrawNumber(0x19,0x3d,*(undefined4 *)(param_1 + 0x4a8));
  MenuWnd_DrawLabel(0x19,0x3e,0x3b,*(int *)(param_1 + 0x494) + 1,*(undefined4 *)(param_1 + 0x490));
  MenuWnd_Update(param_1 + 0x4b0,0x19,4,3);
  MenuWnd_SetTitle(3,0x179);
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x490) < 0xd) {
    iVar9 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar9 * 0x4f4 + 4,0x37,8);
    iVar9 = UiMgr_FindLayout(0x19);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar9 * 0x4f4 + 4,0x3b,8);
  }
  iVar9 = 0;
  puVar8 = &DAT_0032a0d0;
  do {
    if (*(int *)(param_1 + 0x490) <= iVar9) {
      iVar2 = UiMgr_FindLayout(0x19);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar8,8);
    }
    iVar9 = iVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar9 < 0xc);
  iVar9 = _g_MenuMgr + 0x40;
  uVar7 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x498),0xffffffffffffffff);
  UiElem_SetPropInt(iVar9,0,0x16,uVar7);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar9 = UiMgr_FindLayout(0x19);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar9 * 0x4f4 + 4);
  iVar9 = UiMgr_FindLayout(0x1b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar9 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

