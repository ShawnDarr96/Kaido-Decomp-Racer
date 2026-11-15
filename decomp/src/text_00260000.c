// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00260000 - 0x00264000
#include "ghidra_types.h"

// 0x00260290  size 0x6e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Sell_0290(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar4 = *(int *)(param_1 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x8d8) == 1) {
      iVar2 = UiMgr_FindLayout(0x47);
      iVar4 = *_g_UiMgr;
      uVar7 = UiRes_GetLayoutData(0xc0);
      UiLayout_PlayAnim(iVar4 + iVar2 * 0x4f4 + 4,uVar7);
      uVar3 = UiRes_GetLayoutData(0xbf);
      iVar4 = UiMgr_FindLayout(0x47);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar4 + 800) = 0;
      *(undefined4 *)(iVar4 + 0x310) = 0;
      if (*(int *)(iVar4 + 800) == 0) {
        *(undefined4 *)(iVar4 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x310) = 0;
      if (*(int *)(iVar4 + 800) == 0) {
        *(undefined4 *)(iVar4 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x318) = 0;
      *(undefined4 *)(iVar4 + 800) = uVar3;
      *(undefined4 *)(iVar4 + 0x31c) = 1;
      uVar3 = UiRes_GetLayoutData(0x41d);
      iVar4 = UiMgr_FindLayout(0x47);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x364) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x370) = 0;
      *(undefined4 *)(iVar4 + 0x360) = 0;
      if (*(int *)(iVar4 + 0x370) == 0) {
        *(undefined4 *)(iVar4 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x360) = 0;
      if (*(int *)(iVar4 + 0x370) == 0) {
        *(undefined4 *)(iVar4 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x36c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x368) = 0;
      *(undefined4 *)(iVar4 + 0x370) = uVar3;
      *(undefined4 *)(iVar4 + 0x36c) = 1;
    }
    else {
      uVar3 = UiRes_GetLayoutData(0xc0);
      iVar4 = UiMgr_FindLayout(0x47);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar4 + 800) = 0;
      *(undefined4 *)(iVar4 + 0x310) = 0;
      if (*(int *)(iVar4 + 800) == 0) {
        *(undefined4 *)(iVar4 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x310) = 0;
      if (*(int *)(iVar4 + 800) == 0) {
        *(undefined4 *)(iVar4 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar4 + 0x318) = 0;
      *(undefined4 *)(iVar4 + 800) = uVar3;
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    uVar3 = UiRes_GetLayoutData(0xc1);
    iVar4 = UiMgr_FindLayout(0x47);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x348) = 0;
    *(undefined4 *)(iVar4 + 0x338) = 0;
    if (*(int *)(iVar4 + 0x348) == 0) {
      *(undefined4 *)(iVar4 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x344) = 1;
    }
    *(undefined4 *)(iVar4 + 0x338) = 0;
    if (*(int *)(iVar4 + 0x348) == 0) {
      *(undefined4 *)(iVar4 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x344) = 1;
    }
    *(undefined4 *)(iVar4 + 0x340) = 0;
    *(undefined4 *)(iVar4 + 0x348) = uVar3;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    uVar3 = UiRes_GetLayoutData(0xc2);
    iVar4 = UiMgr_FindLayout(0x47);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x35c) = 0;
    *(undefined4 *)(iVar4 + 0x34c) = 0;
    if (*(int *)(iVar4 + 0x35c) == 0) {
      *(undefined4 *)(iVar4 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x358) = 1;
    }
    *(undefined4 *)(iVar4 + 0x34c) = 0;
    if (*(int *)(iVar4 + 0x35c) == 0) {
      *(undefined4 *)(iVar4 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x358) = 1;
    }
    *(undefined4 *)(iVar4 + 0x354) = 0;
    *(undefined4 *)(iVar4 + 0x35c) = uVar3;
    *(undefined4 *)(iVar4 + 0x358) = 1;
    uVar3 = UiRes_GetLayoutData(0x41f);
    iVar4 = UiMgr_FindLayout(0x47);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x398) = 0;
    *(undefined4 *)(iVar4 + 0x388) = 0;
    if (*(int *)(iVar4 + 0x398) == 0) {
      *(undefined4 *)(iVar4 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x394) = 1;
    }
    *(undefined4 *)(iVar4 + 0x388) = 0;
    if (*(int *)(iVar4 + 0x398) == 0) {
      *(undefined4 *)(iVar4 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x394) = 1;
    }
    *(undefined4 *)(iVar4 + 0x390) = 0;
    *(undefined4 *)(iVar4 + 0x398) = uVar3;
    *(undefined4 *)(iVar4 + 0x394) = 1;
    MenuWnd_DrawDialogText(0x47,0x36ec70,2,0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x47,0);
  lVar6 = UiLayout_UpdateAnimById(0x47,4);
  if (lVar5 == 0 && lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if (*(int *)(param_1 + 0x8f0) == 0) {
    MenuWnd_DrawCursor();
    iVar4 = UiMgr_FindLayout(0x47);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x17,8);
    iVar4 = UiMgr_FindLayout(0x47);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x18,8);
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar4 = UiMgr_FindLayout(0x47);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x17,8);
    }
    else if (*(int *)(param_1 + 0xc) + 1 == *(int *)(*(int *)(param_1 + 8) * 4 + param_1 + 0x350)) {
      iVar4 = UiMgr_FindLayout(0x47);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x18,8);
      iVar4 = *(int *)(param_1 + 8);
      goto LAB_0026067c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x8e0) == 1) {
      lVar5 = UiLayout_UpdateAnimById(0x47,2);
      lVar6 = UiLayout_UpdateAnimById(0x47,6);
      if (lVar5 == 0 && lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0x47,3);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  iVar4 = *(int *)(param_1 + 8);
LAB_0026067c:
  uVar1 = *(undefined2 *)(iVar4 * 2 + param_1 + 0x8c);
  uVar7 = Msg_PartInfo(uVar1);
  uVar8 = Msg_MakerName(uVar1);
  MenuWnd_DrawLabel(0x47,0x1a,0x2ac,uVar7,uVar8);
  MenuWnd_DrawText(0x45,1,0x2a2);
  uVar7 = Profile_Get(0);
  uVar7 = Profile_GetMoney(uVar7);
  MenuWnd_DrawNumber(0x46,3,uVar7);
  uVar7 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x46,4,uVar7);
  iVar4 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x47,0x19,(*(int *)(param_1 + 0xc) + 1) * iVar4);
  MenuWnd_DrawLabel(0x47,0x1c,0x40,*(int *)(param_1 + 0xc) + 1);
  MenuWnd_DrawLabel(0x47,0x1b,0x3a,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0x350));
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar4 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x46);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x47);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x42,0);
  iVar4 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  return;
}

// 0x00260970  size 0x554
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Sell_0970(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_s0;
  
  iVar4 = *(int *)(param_1 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x88);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0xcd);
    iVar4 = UiMgr_FindLayout(0x46);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar4 + 800) = 0;
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar4 + 0x318) = 0;
    *(undefined4 *)(iVar4 + 800) = uVar3;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0xce);
    iVar4 = UiMgr_FindLayout(0x46);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x334) = 0;
    *(undefined4 *)(iVar4 + 0x324) = 0;
    if (*(int *)(iVar4 + 0x334) == 0) {
      *(undefined4 *)(iVar4 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x330) = 1;
    }
    *(undefined4 *)(iVar4 + 0x324) = 0;
    if (*(int *)(iVar4 + 0x334) == 0) {
      *(undefined4 *)(iVar4 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x330) = 1;
    }
    *(undefined4 *)(iVar4 + 0x32c) = 0;
    *(undefined4 *)(iVar4 + 0x334) = uVar3;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar3 = UiRes_GetLayoutData(0xb7);
    iVar4 = UiMgr_FindLayout(0x45);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x334) = 0;
    *(undefined4 *)(iVar4 + 0x324) = 0;
    if (*(int *)(iVar4 + 0x334) == 0) {
      *(undefined4 *)(iVar4 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x330) = 1;
    }
    *(undefined4 *)(iVar4 + 0x324) = 0;
    if (*(int *)(iVar4 + 0x334) == 0) {
      *(undefined4 *)(iVar4 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x330) = 1;
    }
    *(undefined4 *)(iVar4 + 0x32c) = 0;
    *(undefined4 *)(iVar4 + 0x334) = uVar3;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar3 = UiRes_GetLayoutData(0xcf);
    iVar4 = UiMgr_FindLayout(0x46);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x348) = 0;
    *(undefined4 *)(iVar4 + 0x338) = 0;
    if (*(int *)(iVar4 + 0x348) == 0) {
      *(undefined4 *)(iVar4 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x344) = 1;
    }
    *(undefined4 *)(iVar4 + 0x338) = 0;
    if (*(int *)(iVar4 + 0x348) == 0) {
      *(undefined4 *)(iVar4 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x344) = 1;
    }
    *(undefined4 *)(iVar4 + 0x340) = 0;
    *(undefined4 *)(iVar4 + 0x348) = uVar3;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    if (*(int *)(param_1 + 0x88) == 0) {
      MenuWnd_SetHelpText(0);
    }
    MenuWnd_DrawHelp();
    iVar4 = *(int *)(param_1 + 0x88);
  }
  if (iVar4 == 0) {
    unaff_s0 = MenuWnd_DrawFooter(0x2ab,0xffffffffffffffff,0);
    lVar5 = MenuWnd_DrawHeader(0,0,0,0);
    goto LAB_00260c44;
  }
  if (iVar4 < 0xb) {
LAB_00260e38:
    iVar4 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == (iVar1 + 1) % iVar4) {
      *(int *)(param_1 + 0x10) = iVar1;
      MenuMgr_LockInput(0);
      goto LAB_00260e38;
    }
    if (iVar1 != (iVar2 + 10) % iVar4) goto LAB_00260e38;
    *(int *)(param_1 + 0x10) = (iVar2 + 1) % iVar4;
    MenuMgr_LockInput(1);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  lVar5 = MenuWnd_DrawHeader(param_1 + 0x8c,iVar1,iVar4,
                             (iVar1 + (*(int *)(param_1 + 8) - iVar4)) % iVar1);
LAB_00260c44:
  lVar6 = UiLayout_UpdateAnimById(0x45,0);
  lVar7 = UiLayout_UpdateAnimById(0x46,1);
  if ((lVar6 == 0 && lVar7 == 0) &&
     (((*(int *)(param_1 + 0x88) != 0 || (unaff_s0 == 2)) && (lVar5 == 2)))) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if (*(int *)(param_1 + 0x8f0) != 0) {
    if (lVar5 == 2) {
      MenuWnd_RequestClose();
      iVar4 = *(int *)(param_1 + 0x88);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x88);
    }
    if (iVar4 == 0) {
      if (unaff_s0 == 2) {
        MenuWnd_RequestRedraw();
      }
      lVar6 = UiLayout_UpdateAnimById(0x45,1);
      lVar7 = UiLayout_UpdateAnimById(0x46,2);
      if (((lVar6 == 0 && lVar7 == 0) && (unaff_s0 == 3)) && (lVar5 == 3)) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0x46,2);
      if ((lVar6 == 0) && (lVar5 == 3)) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
  }
  MenuWnd_DrawText(0x45,1,0x2a2);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x46,3,uVar8);
  if (*(int *)(param_1 + 0x88) == 0) {
    MenuWnd_DrawNumber(0x46,4,0);
  }
  else {
    uVar8 = Garage_GetCarPower(*(undefined2 *)(*(int *)(param_1 + 8) * 2 + param_1 + 0x8c));
    MenuWnd_DrawNumber(0x46,4,uVar8);
  }
  MenuWnd_SetTitle(3,0x2aa);
  iVar4 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x46);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x42,0);
  iVar4 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  return;
}

// 0x00260ed0  size 0x31c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Sell_0ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0xb4);
    iVar1 = UiMgr_FindLayout(0x44);
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
    uVar2 = UiRes_GetLayoutData(0xb5);
    iVar1 = UiMgr_FindLayout(0x44);
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
    uVar2 = UiRes_GetLayoutData(0xb6);
    iVar1 = UiMgr_FindLayout(0x45);
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
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0x44,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if ((*(int *)(param_1 + 0x8f0) != 0) && (lVar3 = UiLayout_UpdateAnimById(0x44), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x8f0) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x44,*(undefined4 *)(*(int *)(param_1 + 4) * 4 + 0x36ec60),1,0);
  }
  MenuWnd_DrawText(0x43,0x1b,0x2a2);
  MenuWnd_DrawText(0x44,0xd,0x2a4);
  MenuWnd_DrawText(0x44,0xe,0x2a5);
  MenuWnd_SetTitle(3,*(undefined4 *)(*(int *)(param_1 + 4) * 4 + 0x36ec68));
  iVar1 = UiMgr_FindLayout(0x44);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x42,0);
  iVar1 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x43);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002611f0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 30 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage30_Exit(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x00261210  size 0xc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 30 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage30_Update(undefined8 param_1)

{
  long lVar1;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_ScrRace_Draw_Sell_0ed0_0032d1c0)[*(int *)((int)param_1 + 0x8dc)])(param_1);
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar1 = Menu_IsInputIdle((int)param_1 + 0x8d8), lVar1 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x002612d0  size 0x308
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 30 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage30_Enter(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0xbf);
  iVar2 = UiMgr_FindLayout(0x47);
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
  uVar1 = UiRes_GetLayoutData(0xc0);
  iVar2 = UiMgr_FindLayout(0x47);
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
  uVar1 = UiRes_GetLayoutData(0xc1);
  iVar2 = UiMgr_FindLayout(0x47);
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
  uVar1 = UiRes_GetLayoutData(0xc2);
  iVar2 = UiMgr_FindLayout(0x47);
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
  uVar1 = UiRes_GetLayoutData(0xc3);
  iVar2 = UiMgr_FindLayout(0x48);
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
  uVar1 = UiRes_GetLayoutData(0xc4);
  iVar2 = UiMgr_FindLayout(0x48);
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
  return;
}

// 0x002615e0  size 0x160
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 3 of state table 0x32d2e0 used by MenuPage31_Update */

void MenuPage31_State3(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = param_1[10];
  param_1[10] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x161,0xffffffffffffffff,0);
  if (param_1[0xb] != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      param_1[0xb] = 0;
    }
  }
  if (lVar2 == 2) {
    param_1[9] = 0;
  }
  MenuWnd_DrawStatus(*param_1,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar1 = UiMgr_FindLayout(0x2f);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x2e);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00261740  size 0x160
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32d2e0 */

void ScrCarStatus_Exit(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = param_1[10];
  param_1[10] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0x18b,param_1[1],0x36ec98);
  if (param_1[0xb] != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      param_1[0xb] = 0;
    }
  }
  if (lVar2 == 2) {
    param_1[9] = 0;
  }
  MenuWnd_DrawStatus(*param_1,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar1 = UiMgr_FindLayout(0x2f);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x2e);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x002618a0  size 0x514
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_CarStatus(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = param_1[10];
  param_1[10] = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0x1cb);
    iVar1 = UiMgr_FindLayout(0x2f);
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
    uVar2 = UiRes_GetLayoutData(0x1cc);
    iVar1 = UiMgr_FindLayout(0x2f);
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
    iVar3 = UiMgr_FindLayout(0x2e);
    iVar1 = *_g_UiMgr;
    uVar5 = UiRes_GetLayoutData(0x1c6);
    UiLayout_PlayAnim(iVar1 + iVar3 * 0x4f4 + 4,uVar5);
    iVar1 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x39,8);
    iVar1 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x3b,8);
    iVar1 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x27,8);
    iVar1 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x28,8);
    if (param_1[5] == -1) {
      uVar2 = UiRes_GetLayoutData(0x1c8);
      iVar1 = UiMgr_FindLayout(0x2e);
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
      uVar2 = UiRes_GetLayoutData(0x1c9);
      iVar1 = UiMgr_FindLayout(0x2e);
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
      *(undefined4 *)(iVar1 + 0x370) = uVar2;
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    if (*param_1 == param_1[2]) {
      do {
        lVar4 = UiLayout_UpdateAnimById(0x2e,3);
      } while (lVar4 == 1);
    }
    else {
      do {
        lVar4 = UiLayout_UpdateAnimById(0x2e,4);
      } while (lVar4 == 1);
    }
  }
  lVar4 = UiLayout_UpdateAnimById(0x2f,0);
  if (lVar4 == 0) {
    param_1[9] = 0;
  }
  if ((param_1[0xb] != 0) && (lVar4 = UiLayout_UpdateAnimById(0x2f), lVar4 == 0)) {
    param_1[0xb] = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x2f,*(undefined4 *)(param_1[1] * 4 + 0x36ec88),1,0);
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  if (iVar1 == param_1[2]) {
    uVar5 = 3;
  }
  else {
    uVar5 = 0;
  }
  MenuWnd_DrawTextId(0x2f,0xd,uVar5,0xfe);
  MenuWnd_DrawText(0x2f,0xe,0xfd);
  MenuWnd_DrawStatus(*param_1,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,*(undefined4 *)(param_1[1] * 4 + 0x36ec90));
  iVar1 = UiMgr_FindLayout(0x2f);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x2e);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00261dc0  size 0x8a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32d2e0 */

void ScrCarStatus_Enter(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  
  uVar5 = Profile_Get(0);
  iVar1 = Garage_FindCar(uVar5);
  iVar2 = param_1[10];
  param_1[10] = 0;
  if (iVar2 == 0) {
    iVar2 = *param_1;
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x1c5);
    iVar2 = UiMgr_FindLayout(0x2e);
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
    uVar3 = UiRes_GetLayoutData(0x1c6);
    iVar2 = UiMgr_FindLayout(0x2e);
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
    uVar3 = UiRes_GetLayoutData(0x1c7);
    iVar2 = UiMgr_FindLayout(0x2e);
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
    if (param_1[5] == -1) {
      uVar3 = UiRes_GetLayoutData(0x1c8);
      iVar2 = UiMgr_FindLayout(0x2e);
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
      uVar3 = UiRes_GetLayoutData(0x1c9);
      iVar2 = UiMgr_FindLayout(0x2e);
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
      *(undefined4 *)(iVar2 + 0x370) = uVar3;
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    uVar3 = UiRes_GetLayoutData(0x1ca);
    iVar2 = UiMgr_FindLayout(0x2e);
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
    *(undefined4 *)(iVar2 + 0x37c) = 1;
    *(undefined4 *)(iVar2 + 900) = uVar3;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    uVar3 = UiRes_GetLayoutData(0x3ee);
    iVar2 = UiMgr_FindLayout(0x2e);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
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
    *(undefined4 *)(iVar2 + 0x390) = 0;
    *(undefined4 *)(iVar2 + 0x398) = uVar3;
    *(undefined4 *)(iVar2 + 0x394) = 1;
    uVar3 = UiRes_GetLayoutData(0x3ef);
    iVar2 = UiMgr_FindLayout(0x2e);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3ac) = 0;
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x39c) = 0;
    if (*(int *)(iVar2 + 0x3ac) == 0) {
      *(undefined4 *)(iVar2 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar2 + 0x3a4) = 0;
    *(undefined4 *)(iVar2 + 0x3ac) = uVar3;
    *(undefined4 *)(iVar2 + 0x3a8) = 1;
    uVar3 = UiRes_GetLayoutData(0x195);
    iVar2 = _g_MenuMgr;
    *(undefined4 *)(_g_MenuMgr + 0x350) = 0xffffffff;
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
    if (*param_1 != param_1[2]) {
      iVar2 = UiMgr_FindLayout(0x2e);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x37,8);
    }
    MenuWnd_DrawDialogText(0x2e,0x32d2f0,4,0xffffffffffffffff);
    Menu_ClearSlot(0);
    iVar2 = *param_1;
  }
  if (iVar2 == param_1[2]) {
    UiLayout_UpdateAnimById(0x2e,3);
    iVar2 = UiMgr_FindLayout(0x2e);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
  }
  else {
    UiLayout_UpdateAnimById(0x2e,4);
    iVar2 = UiMgr_FindLayout(0x2e);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
  }
  iVar2 = _g_MenuMgr + 0x40;
  lVar6 = UiLayout_UpdateAnimById(0x2e,0);
  lVar7 = UiLayout_UpdateAnimById(0x2e,2);
  lVar8 = UiLayout_UpdateAnimIfActive(iVar2,0);
  if (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0)) {
    param_1[9] = 0;
  }
  if (param_1[0xb] == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      uVar5 = Profile_Get(0);
      lVar6 = Garage_FindCar(uVar5);
      MenuWnd_DrawCursor(lVar6 != 1);
    }
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0x2e);
    if (lVar6 == 0) {
      param_1[0xb] = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  uVar5 = Profile_Get(0);
  uVar5 = Garage_FindCar(uVar5);
  MenuWnd_DrawLabel(0x2e,0x3c,0x3b,*param_1 + 1,uVar5);
  if (iVar1 < 0xd) {
    iVar2 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x39,8);
    iVar2 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x3b,8);
  }
  iVar2 = 0;
  puVar9 = &DAT_0032d300;
  do {
    if (iVar1 <= iVar2) {
      iVar4 = UiMgr_FindLayout(0x2e);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,*puVar9,8);
    }
    iVar2 = iVar2 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar2 < 0xc);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x2e,*(undefined4 *)(&DAT_0032d330 + param_1[4] * 4),0,0);
  }
  MenuWnd_DrawStatus(*param_1,0,0xffffffffffffffff,0);
  iVar2 = _g_MenuMgr + 0x40;
  uVar5 = MenuText_RivalCar(*param_1,0);
  UiElem_SetPropInt(iVar2,0,0x16,uVar5);
  MenuWnd_SetTitle(3,0x15d);
  MenuWnd_Update(param_1 + 3,0x2e,7,6);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  UiLayout_UpdateAnimById(0x2e,5);
  iVar2 = UiMgr_FindLayout(0x2e);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  return;
}

// 0x00262670  size 0x30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 31 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage31_Exit(void)

{
  Menu_BlockInput(_g_MenuMgr + 0x654);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x002626a0  size 0x98
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 31 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage31_Update(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_ScrCarStatus_Enter_0032d2e0)[*(int *)(param_1 + 0x18)])();
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  return;
}

// 0x00262740  size 0x8
/* menu page 31 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage31_Enter(void)

{
  return;
}

// 0x00262750  size 0x6bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRecord_Draw_NormalCar(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  
  bVar1 = true;
  iVar4 = (int)param_1;
  if ((*(int *)(iVar4 + 0x898) == 0) && (*(int *)(iVar4 + 0x890) == 0)) {
    bVar1 = false;
  }
  iVar2 = *(int *)(iVar4 + 0x894);
  *(undefined4 *)(iVar4 + 0x894) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar4 + 0x890);
  }
  else {
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
    uVar5 = UiRes_GetLayoutData(0x389);
    iVar2 = UiMgr_FindLayout(0x10e);
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
    *(undefined4 *)(iVar2 + 800) = uVar5;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    MenuOpt_InitItem(iVar4 + 0x858,0x10e,0x32d710,0x32d714);
    MenuOpt_InitItem(iVar4 + 0x86c,0x10e,0x32d718,0x32d71c);
    iVar2 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,2,0x16,
                      *(undefined4 *)(&DAT_0036ecf0 + *(int *)(iVar4 + 8) * 4));
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    iVar2 = *(int *)(iVar4 + 0x890);
  }
  if ((iVar2 != 0) && (lVar7 = UiLayout_UpdateAnimById(0x10e,0), lVar7 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar4 + 0x890) = 0;
    bVar1 = false;
  }
  if (*(int *)(iVar4 + 0x898) != 0) {
    iVar2 = *(int *)(iVar4 + 0x89c);
    *(undefined4 *)(iVar4 + 0x89c) = 0;
    if (iVar2 != 0) {
      uVar5 = UiRes_GetLayoutData(0x38b);
      iVar2 = UiMgr_FindLayout(0x10e);
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
      *(undefined4 *)(iVar2 + 800) = uVar5;
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    lVar7 = UiLayout_UpdateAnimById(0x10e,0);
    if (lVar7 == 0) {
      *(undefined4 *)(iVar4 + 0x898) = 0;
      bVar1 = true;
    }
  }
  if (*(int *)(iVar4 + 0x54) == 0) {
    MenuWnd_SetItemState
              (0x10e,*(undefined4 *)
                      (&DAT_0032d720 + (*(int *)(iVar4 + 0x50) - *(int *)(iVar4 + 0x4c)) * 4),0,0);
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0x10e,1);
    if (lVar7 == 0) {
      *(undefined4 *)(iVar4 + 0x54) = 0;
    }
  }
  maybe_Record_IsSlotUsed(param_1,*(undefined4 *)(iVar4 + 0x40));
  Record_GetTableEntry(param_1,*(undefined4 *)(iVar4 + 0x44));
  if (*(int *)(iVar4 + 8) == 0) {
    ScrRecord_Draw_NoData(param_1,iVar4 + 0x7fc);
    iVar2 = *(int *)(iVar4 + 0x54);
  }
  else {
    ScrGarage_Draw_NoData(param_1,iVar4 + 0x824);
    iVar2 = *(int *)(iVar4 + 0x54);
  }
  if (iVar2 == 4) {
    uVar6 = *(int *)(iVar4 + 0x40) + 7;
    uVar9 = uVar6 & 7;
    if (((int)uVar6 < 0) && (uVar9 != 0)) {
      uVar9 = uVar9 - 8;
    }
    uVar8 = MsgId_ForSlot(uVar9,1);
    MenuWnd_DrawLabel(0x10e,0x9b,uVar8);
  }
  else if (iVar2 == 5) {
    uVar6 = *(int *)(iVar4 + 0x40) + 1;
    uVar9 = uVar6 & 7;
    if (((int)uVar6 < 0) && (uVar9 != 0)) {
      uVar9 = uVar9 - 8;
    }
    uVar8 = MsgId_ForSlot(uVar9,1);
    MenuWnd_DrawTextId(0x10e,0x9b,5,uVar8);
  }
  if ((bVar1) || ((*(uint *)(_g_MenuMgr + 0x28) & 1) != 0)) {
    maybe_MenuOpt_SetItemActive(iVar4 + 0x858,0);
    maybe_MenuOpt_SetItemActive(iVar4 + 0x86c,0);
  }
  else {
    if (*(int *)(iVar4 + 0x4c) == 0) {
      maybe_MenuOpt_SetItemActive(iVar4 + 0x858,3);
    }
    else if (*(int *)(iVar4 + 0x4c) == 6) {
      maybe_MenuOpt_SetItemActive(iVar4 + 0x858,2);
    }
    else {
      maybe_MenuOpt_SetItemActive(iVar4 + 0x858,1);
    }
    maybe_MenuOpt_SetItemActive(iVar4 + 0x86c,1);
    iVar2 = UiMgr_FindLayout(0x10e);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4 + 4;
    if (*(int *)(iVar4 + 0x44) == 0) {
      UiElem_SetPropFloat(0x3f000000,iVar2,DAT_0036ecf8,8);
      UiElem_SetPropFloat(0,iVar2,DAT_0036ecfc,8);
      iVar3 = *(int *)(iVar4 + 0x48);
    }
    else {
      UiElem_SetPropFloat(0,iVar2,DAT_0036ecf8,8);
      UiElem_SetPropFloat(0x3f000000,iVar2,DAT_0036ecfc,8);
      iVar3 = *(int *)(iVar4 + 0x48);
    }
    if (iVar3 == 0) {
      UiElem_SetPropFloat(0x3f000000,iVar2,DAT_0036ed00,8);
      UiElem_SetPropFloat(0,iVar2,DAT_0036ed04,8);
      uVar5 = *(undefined4 *)(iVar4 + 0x40);
      goto LAB_00262a40;
    }
    UiElem_SetPropFloat(0,iVar2,DAT_0036ed00,8);
    UiElem_SetPropFloat(0x3f000000,iVar2,DAT_0036ed04,8);
  }
  uVar5 = *(undefined4 *)(iVar4 + 0x40);
LAB_00262a40:
  uVar8 = MsgId_ForSlot(uVar5,1);
  MenuWnd_DrawTextId(0x10e,0x99,5,uVar8);
  uVar8 = 0x66;
  if (*(int *)(iVar4 + 8) != 0) {
    uVar8 = 0x65;
  }
  MenuWnd_DrawText(0x10e,0x98,uVar8);
  MenuWnd_DrawText(0x10e,0x9a,uVar8);
  uVar8 = MsgId_OnOff(1);
  MenuWnd_DrawText(0x10e,0x6f,uVar8);
  uVar8 = MsgId_OnOff(0);
  MenuWnd_DrawText(0x10e,0x70,uVar8);
  MenuWnd_DrawText(0x10e,0x71,0x418);
  MenuWnd_DrawText(0x10e,0x72,0x419);
  MenuWnd_DrawText(0x10e,0xa1,0x1f41);
  maybe_MenuWnd_DrawRivalLabels(0x10e,0xa2,iVar4 + 0x7ec);
  iVar4 = UiMgr_FindLayout(0x10e);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x10b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0xb7);
  UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x15,9,0);
  iVar4 = UiMgr_FindLayout(0xb7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  return;
}

// 0x00262e10  size 0x380
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_AutomaticGearChange(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    iVar2 = UiMgr_FindLayout(0x105);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x34,8);
    iVar2 = UiMgr_FindLayout(0x105);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x36,8);
    iVar2 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x27,8);
    iVar2 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x28,8);
    iVar2 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x38,8);
    iVar2 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x3a,8);
    MenuWnd_SetHelpText(2);
    iVar2 = 0;
    puVar6 = &DAT_0032d480;
    do {
      iVar3 = UiMgr_FindLayout(0x105);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar6,8);
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar2 < 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  lVar4 = MenuWnd_DrawFooter(0xffffffffffffffff,uVar1,0x36ece8);
  MenuWnd_DrawText(5,0x1c,0x57);
  if (*(int *)(param_1 + 0x898) != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
  }
  if (lVar4 == 2) {
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  iVar2 = UiMgr_FindLayout(0x107);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  if (*(int *)(param_1 + 0x24) == 1) {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x90),0,0xffffffffffffffff,0);
    iVar2 = _g_MenuMgr + 0x40;
    uVar5 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x90),0);
    UiElem_SetPropInt(iVar2,0,0x16,uVar5);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff,0xffffffffffffffff,0);
    iVar2 = _g_MenuMgr + 0x40;
    uVar5 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff);
    UiElem_SetPropInt(iVar2,0,0x16,uVar5);
  }
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  iVar2 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00263190  size 0x5e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectCarColour_3190(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  iVar6 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x75c);
  }
  else {
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    uVar1 = UiRes_GetLayoutData(0x37b);
    iVar6 = UiMgr_FindLayout(0x105);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar6 + 800) = 0;
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x318) = 0;
    *(undefined4 *)(iVar6 + 800) = uVar1;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    iVar6 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,0x27,8);
    iVar6 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,0x28,8);
    iVar6 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,0x38,8);
    iVar6 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,0x3a,8);
    MenuWnd_DrawDialogText(0x105,0x36ece0,2,0);
    iVar6 = *(int *)(param_1 + 0x75c);
  }
  MenuWnd_DrawCursor(0xc < iVar6);
  if ((*(int *)(param_1 + 0x890) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x105,0), lVar4 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar6 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar6 != 0) {
      uVar1 = UiRes_GetLayoutData(0x37c);
      iVar6 = UiMgr_FindLayout(0x105);
      iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
      *(undefined4 *)(iVar6 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar6 + 800) = 0;
      *(undefined4 *)(iVar6 + 0x310) = 0;
      if (*(int *)(iVar6 + 800) == 0) {
        *(undefined4 *)(iVar6 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar6 + 0x310) = 0;
      if (*(int *)(iVar6 + 800) == 0) {
        *(undefined4 *)(iVar6 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar6 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar6 + 0x318) = 0;
      *(undefined4 *)(iVar6 + 800) = uVar1;
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    lVar4 = UiLayout_UpdateAnimById(0x105,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x105,*(undefined4 *)(&DAT_0032d6b0 + *(int *)(param_1 + 0x34) * 4),0,0);
  }
  iVar6 = 0;
  puVar5 = &DAT_0032d450;
  do {
    if (*(int *)(param_1 + 0x75c) <= iVar6) {
      iVar2 = UiMgr_FindLayout(0x105);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar5,8);
    }
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 < 0xc);
  iVar6 = 0;
  if (*(int *)(param_1 + 0x75c) < 1) {
    iVar6 = *(int *)(param_1 + 0x24);
  }
  else {
    puVar5 = &DAT_0032d6e0;
    do {
      iVar2 = UiMgr_FindLayout(0x105);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4 + 4;
      CarDb_GetPartEntry(auStack_8,*(undefined4 *)(param_1 + 0x30),iVar6,0);
      uVar7 = (uint)bStack_3 | (uint)bStack_5 << 0x10 | 0xff000000 | (uint)bStack_4 << 8;
      UiElem_SetPropInt(iVar2,*puVar5,0x39,uVar7);
      UiElem_SetPropInt(iVar2,*puVar5,0x3a,uVar7);
      UiElem_SetPropInt(iVar2,*puVar5,0x3b,uVar7);
      UiElem_SetPropInt(iVar2,*puVar5,0x3c,uVar7);
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x75c));
    iVar6 = *(int *)(param_1 + 0x24);
  }
  if (iVar6 == 1) {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x90),0,0xffffffffffffffff,0);
    iVar6 = _g_MenuMgr + 0x40;
    uVar3 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x90),0);
    UiElem_SetPropInt(iVar6,0,0x16,uVar3);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff,0xffffffffffffffff,0);
    iVar6 = _g_MenuMgr + 0x40;
    uVar3 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff);
    UiElem_SetPropInt(iVar6,0,0x16,uVar3);
  }
  MenuWnd_DrawText(0x102,0x1b,0x1f35);
  iVar6 = UiMgr_FindLayout(0x107);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  iVar6 = UiMgr_FindLayout(0x105);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  iVar6 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  iVar6 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  return;
}

// 0x00263780  size 0x72c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectCarTo(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x890);
  }
  else {
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    MenuWnd_DrawDialogText(0x107,0x32d670,4,0xffffffffffffffff);
    if (*(int *)(param_1 + 0x880) - 6U < 2) {
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
      uVar1 = UiRes_GetLayoutData(0x37e);
      iVar8 = UiMgr_FindLayout(0x107);
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
    }
    uVar1 = UiRes_GetLayoutData(0x37d);
    iVar8 = UiMgr_FindLayout(0x107);
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
    uVar1 = UiRes_GetLayoutData(0x403);
    iVar8 = UiMgr_FindLayout(0x107);
    iVar8 = *_g_UiMgr + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x398) = 0;
    *(undefined4 *)(iVar8 + 0x388) = 0;
    if (*(int *)(iVar8 + 0x398) == 0) {
      *(undefined4 *)(iVar8 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x394) = 1;
    }
    *(undefined4 *)(iVar8 + 0x388) = 0;
    if (*(int *)(iVar8 + 0x398) == 0) {
      *(undefined4 *)(iVar8 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x394) = 1;
    }
    *(undefined4 *)(iVar8 + 0x390) = 0;
    *(undefined4 *)(iVar8 + 0x398) = uVar1;
    *(undefined4 *)(iVar8 + 0x394) = 1;
    uVar1 = UiRes_GetLayoutData(0x404);
    iVar8 = UiMgr_FindLayout(0x107);
    iVar8 = *_g_UiMgr + iVar8 * 0x4f4;
    *(undefined4 *)(iVar8 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x3ac) = 0;
    *(undefined4 *)(iVar8 + 0x39c) = 0;
    if (*(int *)(iVar8 + 0x3ac) == 0) {
      *(undefined4 *)(iVar8 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar8 + 0x39c) = 0;
    if (*(int *)(iVar8 + 0x3ac) == 0) {
      *(undefined4 *)(iVar8 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar8 + 0x3a4) = 0;
    *(undefined4 *)(iVar8 + 0x3ac) = uVar1;
    *(undefined4 *)(iVar8 + 0x3a8) = 1;
    iVar8 = UiMgr_FindLayout(0x107);
    UiElem_SetPropInt(*_g_UiMgr + iVar8 * 0x4f4 + 4,0x29,0x16,
                      *(undefined4 *)(*(int *)(param_1 + 0x24) * 4 + 0x36ecd8));
    iVar8 = *(int *)(param_1 + 0x890);
  }
  if (iVar8 != 0) {
    iVar8 = _g_MenuMgr + 0x40;
    lVar4 = UiLayout_UpdateAnimById(0x107,0);
    lVar5 = UiLayout_UpdateAnimById(0x107,1);
    lVar6 = UiLayout_UpdateAnimIfActive(iVar8,0);
    if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x890) = 0;
    }
  }
  if (*(int *)(param_1 + 0x898) == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      MenuWnd_DrawCursor(*(int *)(param_1 + 0x88) != 1);
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar8 != 0) {
      uVar1 = UiRes_GetLayoutData(0x37f);
      iVar8 = UiMgr_FindLayout(0x107);
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
    }
    lVar4 = UiLayout_UpdateAnimById(0x107,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
  }
  if (*(int *)(param_1 + 0x88) < 0xd) {
    iVar8 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar8 * 0x4f4 + 4,0x38,8);
    iVar8 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar8 * 0x4f4 + 4,0x3a,8);
  }
  iVar8 = 0;
  puVar7 = &DAT_0032d480;
  do {
    if (*(int *)(param_1 + 0x88) <= iVar8) {
      iVar2 = UiMgr_FindLayout(0x107);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar7,8);
    }
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 < 0xc);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x107,*(undefined4 *)(&DAT_0032d680 + *(int *)(param_1 + 0x8c) * 4),0,0);
  }
  MenuWnd_Update(param_1 + 0x764,0x107,7,6);
  MenuWnd_DrawLabel(0x107,0x3b,0x3b,*(int *)(param_1 + 0x90) + 1,*(undefined4 *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x24) == 1) {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x90),0,0xffffffffffffffff,0);
    iVar8 = _g_MenuMgr + 0x40;
    uVar3 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x90),0);
    UiElem_SetPropInt(iVar8,0,0x16,uVar3);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff,0xffffffffffffffff,0);
    iVar8 = _g_MenuMgr + 0x40;
    uVar3 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff);
    UiElem_SetPropInt(iVar8,0,0x16,uVar3);
  }
  MenuWnd_DrawText(0x102,0x1b,0x1f34);
  iVar8 = UiMgr_FindLayout(0x107);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,_g_MenuMgr + 0x40);
  iVar8 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  iVar8 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  return;
}

// 0x00263eb0  size 0x610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SelectCarManufacturer_3eb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 auStack_a0 [20];
  int aiStack_50 [20];
  
  iVar1 = UiMgr_FindLayout(0x11);
  iVar6 = *(int *)(param_1 + 0x894);
  iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar6 != 0) {
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
    uVar2 = UiRes_GetLayoutData(0x365);
    iVar6 = UiMgr_FindLayout(0x106);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar6 + 800) = 0;
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x318) = 0;
    *(undefined4 *)(iVar6 + 800) = uVar2;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x366);
    iVar6 = UiMgr_FindLayout(0x106);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x334) = 0;
    *(undefined4 *)(iVar6 + 0x324) = 0;
    if (*(int *)(iVar6 + 0x334) == 0) {
      *(undefined4 *)(iVar6 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    *(undefined4 *)(iVar6 + 0x324) = 0;
    if (*(int *)(iVar6 + 0x334) == 0) {
      *(undefined4 *)(iVar6 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    *(undefined4 *)(iVar6 + 0x32c) = 0;
    *(undefined4 *)(iVar6 + 0x334) = uVar2;
    *(undefined4 *)(iVar6 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x367);
    iVar6 = UiMgr_FindLayout(0x106);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x348) = 0;
    *(undefined4 *)(iVar6 + 0x338) = 0;
    if (*(int *)(iVar6 + 0x348) == 0) {
      *(undefined4 *)(iVar6 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x344) = 1;
    }
    *(undefined4 *)(iVar6 + 0x338) = 0;
    if (*(int *)(iVar6 + 0x348) == 0) {
      *(undefined4 *)(iVar6 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x344) = 1;
    }
    *(undefined4 *)(iVar6 + 0x340) = 0;
    *(undefined4 *)(iVar6 + 0x348) = uVar2;
    *(undefined4 *)(iVar6 + 0x344) = 1;
    uVar2 = UiRes_GetLayoutData(0x364);
    iVar6 = UiMgr_FindLayout(0x106);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x35c) = 0;
    *(undefined4 *)(iVar6 + 0x34c) = 0;
    if (*(int *)(iVar6 + 0x35c) == 0) {
      *(undefined4 *)(iVar6 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x358) = 1;
    }
    *(undefined4 *)(iVar6 + 0x34c) = 0;
    if (*(int *)(iVar6 + 0x35c) == 0) {
      *(undefined4 *)(iVar6 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x358) = 1;
    }
    *(undefined4 *)(iVar6 + 0x354) = 0;
    *(undefined4 *)(iVar6 + 0x35c) = uVar2;
    *(undefined4 *)(iVar6 + 0x358) = 1;
    uVar2 = UiRes_GetLayoutData(0x193);
    iVar6 = UiMgr_FindLayout(0x11);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar6 + 800) = 0;
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x310) = 0;
    if (*(int *)(iVar6 + 800) == 0) {
      *(undefined4 *)(iVar6 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x318) = 0;
    *(undefined4 *)(iVar6 + 800) = uVar2;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar2 = UiRes_GetLayoutData(0x194);
    iVar6 = UiMgr_FindLayout(0x11);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x334) = 0;
    *(undefined4 *)(iVar6 + 0x324) = 0;
    if (*(int *)(iVar6 + 0x334) == 0) {
      *(undefined4 *)(iVar6 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    *(undefined4 *)(iVar6 + 0x324) = 0;
    if (*(int *)(iVar6 + 0x334) == 0) {
      *(undefined4 *)(iVar6 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x330) = 1;
    }
    *(undefined4 *)(iVar6 + 0x32c) = 0;
    *(undefined4 *)(iVar6 + 0x334) = uVar2;
    *(undefined4 *)(iVar6 + 0x330) = 1;
    uVar3 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0x2c));
    UiElem_SetPropInt(iVar1 + 4,0,0x16,uVar3);
    MenuWnd_DrawDialogText(0x106,0x36ecd0,2,0);
  }
  MenuWnd_DrawCursor(1);
  if (*(int *)(param_1 + 0x890) != 0) {
    lVar4 = UiLayout_UpdateAnimById(0x106,0);
    lVar5 = UiLayout_UpdateAnimById(0x106,1);
    if (lVar4 == 0 && lVar5 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x890) = 0;
    }
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    MenuWnd_SetItemVisible(0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  puVar8 = auStack_a0;
  puVar9 = &DAT_0032d620;
  iVar6 = 9;
  do {
    iVar6 = iVar6 + -1;
    uVar2 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar2;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar6);
  iVar6 = 0;
  piVar7 = aiStack_50;
  do {
    *piVar7 = iVar6 + 0x6a3;
    piVar7[1] = iVar6 + 0x6a4;
    piVar7[2] = iVar6 + 0x6a5;
    piVar7[3] = iVar6 + 0x6a6;
    piVar7[4] = iVar6 + 0x6a7;
    piVar7[5] = iVar6 + 0x6a8;
    iVar6 = iVar6 + 6;
    piVar7 = piVar7 + 6;
  } while (iVar6 < 0x12);
  MenuList_Update(param_1 + 0x8a0,auStack_a0,aiStack_50);
  if (*(int *)(param_1 + 0x80) == 1) {
    if (*(int *)(param_1 + 0x84) == 1) {
      *(undefined4 *)(iVar1 + 0x310) = 0;
      if (*(int *)(iVar1 + 800) == 0) {
        *(undefined4 *)(iVar1 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x31c) = 1;
      }
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    lVar4 = UiLayout_UpdateAnimById(0x11,1);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x2c) != -1) {
    *(undefined4 *)(iVar1 + 0x324) = 0;
    if (*(int *)(iVar1 + 0x334) == 0) {
      *(undefined4 *)(iVar1 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x330) = 1;
    }
    uVar3 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0x2c));
    UiElem_SetPropInt(iVar1 + 4,0,0x16,uVar3);
    UiLayout_UpdateAnimById(0x11,0);
  }
  MenuWnd_DrawText(0x102,0x1b,0x1f33);
  iVar6 = UiMgr_FindLayout(0x106);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  iVar6 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  iVar6 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  iVar6 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  return;
}

