// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00260000 - 0x00264000
#include "ghidra_types.h"

// 0x00260290  size 0x6e0
void ScrGarage_Draw_Sell_0290(int param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
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
      iVar4 = UiMgr_FindLayout(0x47);
      pUVar2 = g_UiMgr->slots;
      uVar7 = UiRes_GetLayoutData(0xc0);
      UiLayout_PlayAnim(&pUVar2[iVar4].layout,uVar7);
      uVar3 = UiRes_GetLayoutData(0xbf);
      iVar4 = UiMgr_FindLayout(0x47);
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
      uVar3 = UiRes_GetLayoutData(0x41d);
      iVar4 = UiMgr_FindLayout(0x47);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x360 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x36c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x364 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x36c = uVar3;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
    }
    else {
      uVar3 = UiRes_GetLayoutData(0xc0);
      iVar4 = UiMgr_FindLayout(0x47);
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
    }
    uVar3 = UiRes_GetLayoutData(0xc1);
    iVar4 = UiMgr_FindLayout(0x47);
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
    uVar3 = UiRes_GetLayoutData(0xc2);
    iVar4 = UiMgr_FindLayout(0x47);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0x41f);
    iVar4 = UiMgr_FindLayout(0x47);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x384 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x394 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x390 = 1;
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
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,0x17,8);
    iVar4 = UiMgr_FindLayout(0x47);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,0x18,8);
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar4 = UiMgr_FindLayout(0x47);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x17,8);
    }
    else if (*(int *)(param_1 + 0xc) + 1 == *(int *)(*(int *)(param_1 + 8) * 4 + param_1 + 0x350)) {
      iVar4 = UiMgr_FindLayout(0x47);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x18,8);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x46);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x47);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_UpdateAnimById(0x42,0);
  iVar4 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00260970  size 0x554
void ScrGarage_Draw_Sell_0970(int param_1)

{
  int iVar1;
  int iVar2;
  UiLayoutSlot *pUVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_s0;
  
  iVar5 = *(int *)(param_1 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x88);
  }
  else {
    uVar4 = UiRes_GetLayoutData(0xcd);
    iVar5 = UiMgr_FindLayout(0x46);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x31c == 0) {
      pUVar3[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x31c == 0) {
      pUVar3[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x31c = uVar4;
    pUVar3[iVar5].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xce);
    iVar5 = UiMgr_FindLayout(0x46);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = uVar4;
    pUVar3[iVar5].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0xb7);
    iVar5 = UiMgr_FindLayout(0x45);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x330 == 0) {
      pUVar3[iVar5].layout.animState = 0;
    }
    else {
      pUVar3[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = uVar4;
    pUVar3[iVar5].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0xcf);
    iVar5 = UiMgr_FindLayout(0x46);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 1;
    if (*(int *)(param_1 + 0x88) == 0) {
      MenuWnd_SetHelpText(0);
    }
    MenuWnd_DrawHelp();
    iVar5 = *(int *)(param_1 + 0x88);
  }
  if (iVar5 == 0) {
    unaff_s0 = MenuWnd_DrawFooter(0x2ab,0xffffffffffffffff,0);
    lVar6 = MenuWnd_DrawHeader(0,0,0,0);
    goto LAB_00260c44;
  }
  if (iVar5 < 0xb) {
LAB_00260e38:
    iVar5 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == (iVar1 + 1) % iVar5) {
      *(int *)(param_1 + 0x10) = iVar1;
      MenuMgr_LockInput(0);
      goto LAB_00260e38;
    }
    if (iVar1 != (iVar2 + 10) % iVar5) goto LAB_00260e38;
    *(int *)(param_1 + 0x10) = (iVar2 + 1) % iVar5;
    MenuMgr_LockInput(1);
    iVar5 = *(int *)(param_1 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  lVar6 = MenuWnd_DrawHeader(param_1 + 0x8c,iVar1,iVar5,
                             (iVar1 + (*(int *)(param_1 + 8) - iVar5)) % iVar1);
LAB_00260c44:
  lVar7 = UiLayout_UpdateAnimById(0x45,0);
  lVar8 = UiLayout_UpdateAnimById(0x46,1);
  if ((lVar7 == 0 && lVar8 == 0) &&
     (((*(int *)(param_1 + 0x88) != 0 || (unaff_s0 == 2)) && (lVar6 == 2)))) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if (*(int *)(param_1 + 0x8f0) != 0) {
    if (lVar6 == 2) {
      MenuWnd_RequestClose();
      iVar5 = *(int *)(param_1 + 0x88);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x88);
    }
    if (iVar5 == 0) {
      if (unaff_s0 == 2) {
        MenuWnd_RequestRedraw();
      }
      lVar7 = UiLayout_UpdateAnimById(0x45,1);
      lVar8 = UiLayout_UpdateAnimById(0x46,2);
      if (((lVar7 == 0 && lVar8 == 0) && (unaff_s0 == 3)) && (lVar6 == 3)) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0x46,2);
      if ((lVar7 == 0) && (lVar6 == 3)) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
  }
  MenuWnd_DrawText(0x45,1,0x2a2);
  uVar9 = Profile_Get(0);
  uVar9 = Profile_GetMoney(uVar9);
  MenuWnd_DrawNumber(0x46,3,uVar9);
  if (*(int *)(param_1 + 0x88) == 0) {
    MenuWnd_DrawNumber(0x46,4,0);
  }
  else {
    uVar9 = Garage_GetCarPower(*(undefined2 *)(*(int *)(param_1 + 8) * 2 + param_1 + 0x8c));
    MenuWnd_DrawNumber(0x46,4,uVar9);
  }
  MenuWnd_SetTitle(3,0x2aa);
  iVar5 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x46);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  UiLayout_UpdateAnimById(0x42,0);
  iVar5 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00260ed0  size 0x31c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Sell_0ed0(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0xb4);
    iVar2 = UiMgr_FindLayout(0x44);
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
    uVar3 = UiRes_GetLayoutData(0xb5);
    iVar2 = UiMgr_FindLayout(0x44);
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
    uVar3 = UiRes_GetLayoutData(0xb6);
    iVar2 = UiMgr_FindLayout(0x45);
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
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x44,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if ((*(int *)(param_1 + 0x8f0) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x44), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x8f0) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x44,*(undefined4 *)(*(int *)(param_1 + 4) * 4 + 0x36ec60),1,0);
  }
  MenuWnd_DrawText(0x43,0x1b,0x2a2);
  MenuWnd_DrawText(0x44,0xd,0x2a4);
  MenuWnd_DrawText(0x44,0xe,0x2a5);
  MenuWnd_SetTitle(3,*(undefined4 *)(*(int *)(param_1 + 4) * 4 + 0x36ec68));
  iVar2 = UiMgr_FindLayout(0x44);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_UpdateAnimById(0x42,0);
  iVar2 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x43);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x002611f0  size 0x14
/* menu page 30 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage30_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00261210  size 0xc0
/* menu page 30 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage30_Update(undefined8 param_1)

{
  long lVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_ScrRace_Draw_Sell_0ed0_0032d1c0)[*(int *)((int)param_1 + 0x8dc)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle((int)param_1 + 0x8d8), lVar1 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x002612d0  size 0x308
/* menu page 30 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage30_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0xbf);
  iVar3 = UiMgr_FindLayout(0x47);
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
  uVar2 = UiRes_GetLayoutData(0xc0);
  iVar3 = UiMgr_FindLayout(0x47);
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
  uVar2 = UiRes_GetLayoutData(0xc1);
  iVar3 = UiMgr_FindLayout(0x47);
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
  uVar2 = UiRes_GetLayoutData(0xc2);
  iVar3 = UiMgr_FindLayout(0x47);
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
  uVar2 = UiRes_GetLayoutData(0xc3);
  iVar3 = UiMgr_FindLayout(0x48);
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
  uVar2 = UiRes_GetLayoutData(0xc4);
  iVar3 = UiMgr_FindLayout(0x48);
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
  return;
}

// 0x002615e0  size 0x160
/* page identified from its states' on-screen text (N154) */

void maybe_PageCarStatus_State3(undefined4 *param_1)

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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x2e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x00261740  size 0x160
/* state of MenuPage31; on-screen text/callee hint "CarStatus" (was ScrCarStatus_Exit) */

void maybe_PageCarStatus_State2_CarStatus(undefined4 *param_1)

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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x2e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x002618a0  size 0x514
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_CarStatus(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = param_1[10];
  param_1[10] = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x1cb);
    iVar2 = UiMgr_FindLayout(0x2f);
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
    uVar3 = UiRes_GetLayoutData(0x1cc);
    iVar2 = UiMgr_FindLayout(0x2f);
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
    iVar2 = UiMgr_FindLayout(0x2e);
    pUVar1 = g_UiMgr->slots;
    uVar5 = UiRes_GetLayoutData(0x1c6);
    UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar5);
    iVar2 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x39,8);
    iVar2 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x3b,8);
    iVar2 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x27,8);
    iVar2 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x28,8);
    if (param_1[5] == -1) {
      uVar3 = UiRes_GetLayoutData(0x1c8);
      iVar2 = UiMgr_FindLayout(0x2e);
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
      uVar3 = UiRes_GetLayoutData(0x1c9);
      iVar2 = UiMgr_FindLayout(0x2e);
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
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x2f,*(undefined4 *)(param_1[1] * 4 + 0x36ec88),1,0);
    iVar2 = *param_1;
  }
  else {
    iVar2 = *param_1;
  }
  if (iVar2 == param_1[2]) {
    uVar5 = 3;
  }
  else {
    uVar5 = 0;
  }
  MenuWnd_DrawTextId(0x2f,0xd,uVar5,0xfe);
  MenuWnd_DrawText(0x2f,0xe,0xfd);
  MenuWnd_DrawStatus(*param_1,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,*(undefined4 *)(param_1[1] * 4 + 0x36ec90));
  iVar2 = UiMgr_FindLayout(0x2f);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x2e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x00261dc0  size 0x8a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage31; on-screen text/callee hint "CarStatus" (was ScrCarStatus_Enter) */

void maybe_PageCarStatus_State0_CarStatus(int *param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  
  uVar7 = Profile_Get(0);
  iVar3 = Garage_FindCar(uVar7);
  iVar4 = param_1[10];
  param_1[10] = 0;
  if (iVar4 == 0) {
    iVar4 = *param_1;
  }
  else {
    uVar5 = UiRes_GetLayoutData(0x1c5);
    iVar4 = UiMgr_FindLayout(0x2e);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar5;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x1c6);
    iVar4 = UiMgr_FindLayout(0x2e);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar5;
    pUVar1[iVar4].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x1c7);
    iVar4 = UiMgr_FindLayout(0x2e);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    if (param_1[5] == -1) {
      uVar5 = UiRes_GetLayoutData(0x1c8);
      iVar4 = UiMgr_FindLayout(0x2e);
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar5;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
      uVar5 = UiRes_GetLayoutData(0x1c9);
      iVar4 = UiMgr_FindLayout(0x2e);
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x36c = uVar5;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
    uVar5 = UiRes_GetLayoutData(0x1ca);
    iVar4 = UiMgr_FindLayout(0x2e);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x37c = 1;
    uVar5 = UiRes_GetLayoutData(0x3ee);
    iVar4 = UiMgr_FindLayout(0x2e);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x394 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
    uVar5 = UiRes_GetLayoutData(0x3ef);
    iVar4 = UiMgr_FindLayout(0x2e);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a8 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
    uVar5 = UiRes_GetLayoutData(0x195);
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
    *(undefined4 *)&pMVar2->field_0x35c = uVar5;
    *(undefined4 *)&pMVar2->field_0x358 = 1;
    if (*param_1 != param_1[2]) {
      iVar4 = UiMgr_FindLayout(0x2e);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x37,8);
    }
    MenuWnd_DrawDialogText(0x2e,0x32d2f0,4,0xffffffffffffffff);
    Menu_ClearSlot(0);
    iVar4 = *param_1;
  }
  if (iVar4 == param_1[2]) {
    UiLayout_UpdateAnimById(0x2e,3);
    iVar4 = UiMgr_FindLayout(0x2e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x368 = 1;
    }
  }
  else {
    UiLayout_UpdateAnimById(0x2e,4);
    iVar4 = UiMgr_FindLayout(0x2e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
  }
  puVar12 = &g_MenuMgr->field_0x40;
  lVar8 = UiLayout_UpdateAnimById(0x2e,0);
  lVar9 = UiLayout_UpdateAnimById(0x2e,2);
  lVar10 = UiLayout_UpdateAnimIfActive(puVar12,0);
  if (lVar10 == 0 && (lVar8 == 0 && lVar9 == 0)) {
    param_1[9] = 0;
  }
  if (param_1[0xb] == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      uVar7 = Profile_Get(0);
      lVar8 = Garage_FindCar(uVar7);
      MenuWnd_DrawCursor(lVar8 != 1);
    }
  }
  else {
    lVar8 = UiLayout_UpdateAnimById(0x2e);
    if (lVar8 == 0) {
      param_1[0xb] = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  uVar7 = Profile_Get(0);
  uVar7 = Garage_FindCar(uVar7);
  MenuWnd_DrawLabel(0x2e,0x3c,0x3b,*param_1 + 1,uVar7);
  if (iVar3 < 0xd) {
    iVar4 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x39,8);
    iVar4 = UiMgr_FindLayout(0x2e);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3b,8);
  }
  iVar4 = 0;
  puVar11 = &DAT_0032d300;
  do {
    if (iVar3 <= iVar4) {
      iVar6 = UiMgr_FindLayout(0x2e);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,*puVar11,8);
    }
    iVar4 = iVar4 + 1;
    puVar11 = puVar11 + 1;
  } while (iVar4 < 0xc);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x2e,*(undefined4 *)(&DAT_0032d330 + param_1[4] * 4),0,0);
  }
  MenuWnd_DrawStatus(*param_1,0,0xffffffffffffffff,0);
  puVar12 = &g_MenuMgr->field_0x40;
  uVar7 = MenuText_RivalCar(*param_1,0);
  UiElem_SetPropInt(puVar12,0,0x16,uVar7);
  MenuWnd_SetTitle(3,0x15d);
  MenuWnd_Update(param_1 + 3,0x2e,7,6);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  UiLayout_UpdateAnimById(0x2e,5);
  iVar4 = UiMgr_FindLayout(0x2e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  return;
}

// 0x00262670  size 0x30
/* page identified from its states' on-screen text (N154) */

void maybe_PageCarStatus_Exit(void)

{
  Menu_BlockInput(&g_MenuMgr->field_0x654);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x002626a0  size 0x98
/* page identified from its states' on-screen text (N154) */

void maybe_PageCarStatus_Update(int param_1)

{
  uint uVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_maybe_PageCarStatus_State0_CarStatus_0032d2e0)[*(int *)(param_1 + 0x18)])();
  uVar1 = g_MenuMgr->flags;
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
  }
  return;
}

// 0x00262740  size 0x8
/* page identified from its states' on-screen text (N154) */

void maybe_PageCarStatus_Enter(void)

{
  return;
}

// 0x00262750  size 0x6bc
void ScrRecord_Draw_NormalCar(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  UiLayout *pUVar10;
  
  bVar2 = true;
  iVar4 = (int)param_1;
  if ((*(int *)(iVar4 + 0x898) == 0) && (*(int *)(iVar4 + 0x890) == 0)) {
    bVar2 = false;
  }
  iVar3 = *(int *)(iVar4 + 0x894);
  *(undefined4 *)(iVar4 + 0x894) = 0;
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar4 + 0x890);
  }
  else {
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    uVar5 = UiRes_GetLayoutData(0x389);
    iVar3 = UiMgr_FindLayout(0x10e);
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
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar5;
    pUVar1[iVar3].layout.unk_318 = 1;
    MenuOpt_InitItem(iVar4 + 0x858,0x10e,0x32d710,0x32d714);
    MenuOpt_InitItem(iVar4 + 0x86c,0x10e,0x32d718,0x32d71c);
    iVar3 = UiMgr_FindLayout(0x10e);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,2,0x16,
                      *(undefined4 *)(&DAT_0036ecf0 + *(int *)(iVar4 + 8) * 4));
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    iVar3 = *(int *)(iVar4 + 0x890);
  }
  if ((iVar3 != 0) && (lVar7 = UiLayout_UpdateAnimById(0x10e,0), lVar7 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(iVar4 + 0x890) = 0;
    bVar2 = false;
  }
  if (*(int *)(iVar4 + 0x898) != 0) {
    iVar3 = *(int *)(iVar4 + 0x89c);
    *(undefined4 *)(iVar4 + 0x89c) = 0;
    if (iVar3 != 0) {
      uVar5 = UiRes_GetLayoutData(0x38b);
      iVar3 = UiMgr_FindLayout(0x10e);
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
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar5;
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    lVar7 = UiLayout_UpdateAnimById(0x10e,0);
    if (lVar7 == 0) {
      *(undefined4 *)(iVar4 + 0x898) = 0;
      bVar2 = true;
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
    iVar3 = *(int *)(iVar4 + 0x54);
  }
  else {
    ScrGarage_Draw_NoData(param_1,iVar4 + 0x824);
    iVar3 = *(int *)(iVar4 + 0x54);
  }
  if (iVar3 == 4) {
    uVar6 = *(int *)(iVar4 + 0x40) + 7;
    uVar9 = uVar6 & 7;
    if (((int)uVar6 < 0) && (uVar9 != 0)) {
      uVar9 = uVar9 - 8;
    }
    uVar8 = MsgId_ForSlot(uVar9,1);
    MenuWnd_DrawLabel(0x10e,0x9b,uVar8);
  }
  else if (iVar3 == 5) {
    uVar6 = *(int *)(iVar4 + 0x40) + 1;
    uVar9 = uVar6 & 7;
    if (((int)uVar6 < 0) && (uVar9 != 0)) {
      uVar9 = uVar9 - 8;
    }
    uVar8 = MsgId_ForSlot(uVar9,1);
    MenuWnd_DrawTextId(0x10e,0x9b,5,uVar8);
  }
  if ((bVar2) || ((g_MenuMgr->flags & 1) != 0)) {
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
    iVar3 = UiMgr_FindLayout(0x10e);
    pUVar10 = &g_UiMgr->slots[iVar3].layout;
    if (*(int *)(iVar4 + 0x44) == 0) {
      UiElem_SetPropFloat(0x3f000000,pUVar10,DAT_0036ecf8,8);
      UiElem_SetPropFloat(0,pUVar10,DAT_0036ecfc,8);
      iVar3 = *(int *)(iVar4 + 0x48);
    }
    else {
      UiElem_SetPropFloat(0,pUVar10,DAT_0036ecf8,8);
      UiElem_SetPropFloat(0x3f000000,pUVar10,DAT_0036ecfc,8);
      iVar3 = *(int *)(iVar4 + 0x48);
    }
    if (iVar3 == 0) {
      UiElem_SetPropFloat(0x3f000000,pUVar10,DAT_0036ed00,8);
      UiElem_SetPropFloat(0,pUVar10,DAT_0036ed04,8);
      uVar5 = *(undefined4 *)(iVar4 + 0x40);
      goto LAB_00262a40;
    }
    UiElem_SetPropFloat(0,pUVar10,DAT_0036ed00,8);
    UiElem_SetPropFloat(0x3f000000,pUVar10,DAT_0036ed04,8);
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x10b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xb7);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x15,9,0);
  iVar4 = UiMgr_FindLayout(0xb7);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00262e10  size 0x380
void ScrCareer_Draw_AutomaticGearChange(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    iVar2 = UiMgr_FindLayout(0x105);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x34,8);
    iVar2 = UiMgr_FindLayout(0x105);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x36,8);
    iVar2 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x27,8);
    iVar2 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x28,8);
    iVar2 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x38,8);
    iVar2 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x3a,8);
    MenuWnd_SetHelpText(2);
    iVar2 = 0;
    puVar7 = &DAT_0032d480;
    do {
      iVar3 = UiMgr_FindLayout(0x105);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar7,8);
      iVar2 = iVar2 + 1;
      puVar7 = puVar7 + 1;
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
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  if (*(int *)(param_1 + 0x24) == 1) {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x90),0,0xffffffffffffffff,0);
    puVar6 = &g_MenuMgr->field_0x40;
    uVar5 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x90),0);
    UiElem_SetPropInt(puVar6,0,0x16,uVar5);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff,0xffffffffffffffff,0);
    puVar6 = &g_MenuMgr->field_0x40;
    uVar5 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff);
    UiElem_SetPropInt(puVar6,0,0x16,uVar5);
  }
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  iVar2 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00263190  size 0x5e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectCarColour_3190(int param_1)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  UiLayout *pUVar9;
  uint uVar10;
  undefined1 auStack_8 [3];
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  
  iVar8 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x75c);
  }
  else {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    uVar2 = UiRes_GetLayoutData(0x37b);
    iVar8 = UiMgr_FindLayout(0x105);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x31c = uVar2;
    pUVar1[iVar8].layout.unk_318 = 1;
    iVar8 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x27,8);
    iVar8 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x28,8);
    iVar8 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x38,8);
    iVar8 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,0x3a,8);
    MenuWnd_DrawDialogText(0x105,0x36ece0,2,0);
    iVar8 = *(int *)(param_1 + 0x75c);
  }
  MenuWnd_DrawCursor(0xc < iVar8);
  if ((*(int *)(param_1 + 0x890) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x105,0), lVar5 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    iVar8 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar8 != 0) {
      uVar2 = UiRes_GetLayoutData(0x37c);
      iVar8 = UiMgr_FindLayout(0x105);
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
      *(undefined4 *)&pUVar1[iVar8].layout.field_0x31c = uVar2;
      pUVar1[iVar8].layout.unk_318 = 1;
    }
    lVar5 = UiLayout_UpdateAnimById(0x105,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x105,*(undefined4 *)(&DAT_0032d6b0 + *(int *)(param_1 + 0x34) * 4),0,0);
  }
  iVar8 = 0;
  puVar6 = &DAT_0032d450;
  do {
    if (*(int *)(param_1 + 0x75c) <= iVar8) {
      iVar3 = UiMgr_FindLayout(0x105);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar6,8);
    }
    iVar8 = iVar8 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar8 < 0xc);
  iVar8 = 0;
  if (*(int *)(param_1 + 0x75c) < 1) {
    iVar8 = *(int *)(param_1 + 0x24);
  }
  else {
    puVar6 = &DAT_0032d6e0;
    do {
      iVar3 = UiMgr_FindLayout(0x105);
      pUVar9 = &g_UiMgr->slots[iVar3].layout;
      CarDb_GetPartEntry(auStack_8,*(undefined4 *)(param_1 + 0x30),iVar8,0);
      uVar10 = (uint)bStack_3 | (uint)bStack_5 << 0x10 | 0xff000000 | (uint)bStack_4 << 8;
      UiElem_SetPropInt(pUVar9,*puVar6,0x39,uVar10);
      UiElem_SetPropInt(pUVar9,*puVar6,0x3a,uVar10);
      UiElem_SetPropInt(pUVar9,*puVar6,0x3b,uVar10);
      UiElem_SetPropInt(pUVar9,*puVar6,0x3c,uVar10);
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x75c));
    iVar8 = *(int *)(param_1 + 0x24);
  }
  if (iVar8 == 1) {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x90),0,0xffffffffffffffff,0);
    puVar7 = &g_MenuMgr->field_0x40;
    uVar4 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x90),0);
    UiElem_SetPropInt(puVar7,0,0x16,uVar4);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff,0xffffffffffffffff,0);
    puVar7 = &g_MenuMgr->field_0x40;
    uVar4 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff);
    UiElem_SetPropInt(puVar7,0,0x16,uVar4);
  }
  MenuWnd_DrawText(0x102,0x1b,0x1f35);
  iVar8 = UiMgr_FindLayout(0x107);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x105);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  iVar8 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  return;
}

// 0x00263780  size 0x72c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SelectCarTo(int param_1)

{
  UiLayoutSlot *pUVar1;
  MenuMgr *pMVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  
  iVar4 = *(int *)(param_1 + 0x894);
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x890);
  }
  else {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    MenuWnd_DrawDialogText(0x107,0x32d670,4,0xffffffffffffffff);
    if (*(int *)(param_1 + 0x880) - 6U < 2) {
      uVar3 = UiRes_GetLayoutData(0x195);
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
      *(undefined4 *)&pMVar2->field_0x35c = uVar3;
      *(undefined4 *)&pMVar2->field_0x358 = 1;
      uVar3 = UiRes_GetLayoutData(0x37e);
      iVar4 = UiMgr_FindLayout(0x107);
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
    uVar3 = UiRes_GetLayoutData(0x37d);
    iVar4 = UiMgr_FindLayout(0x107);
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
    uVar3 = UiRes_GetLayoutData(0x403);
    iVar4 = UiMgr_FindLayout(0x107);
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
    uVar3 = UiRes_GetLayoutData(0x404);
    iVar4 = UiMgr_FindLayout(0x107);
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
    iVar4 = UiMgr_FindLayout(0x107);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x29,0x16,
                      *(undefined4 *)(*(int *)(param_1 + 0x24) * 4 + 0x36ecd8));
    iVar4 = *(int *)(param_1 + 0x890);
  }
  if (iVar4 != 0) {
    puVar11 = &g_MenuMgr->field_0x40;
    lVar7 = UiLayout_UpdateAnimById(0x107,0);
    lVar8 = UiLayout_UpdateAnimById(0x107,1);
    lVar9 = UiLayout_UpdateAnimIfActive(puVar11,0);
    if (lVar9 == 0 && (lVar7 == 0 && lVar8 == 0)) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x890) = 0;
    }
  }
  if (*(int *)(param_1 + 0x898) == 0) {
    if ((g_MenuMgr->flags & 1) == 0) {
      MenuWnd_DrawCursor(*(int *)(param_1 + 0x88) != 1);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x89c);
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (iVar4 != 0) {
      uVar3 = UiRes_GetLayoutData(0x37f);
      iVar4 = UiMgr_FindLayout(0x107);
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
    lVar7 = UiLayout_UpdateAnimById(0x107,0);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
  }
  if (*(int *)(param_1 + 0x88) < 0xd) {
    iVar4 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x38,8);
    iVar4 = UiMgr_FindLayout(0x107);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x3a,8);
  }
  iVar4 = 0;
  puVar10 = &DAT_0032d480;
  do {
    if (*(int *)(param_1 + 0x88) <= iVar4) {
      iVar5 = UiMgr_FindLayout(0x107);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,*puVar10,8);
    }
    iVar4 = iVar4 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar4 < 0xc);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x107,*(undefined4 *)(&DAT_0032d680 + *(int *)(param_1 + 0x8c) * 4),0,0);
  }
  MenuWnd_Update(param_1 + 0x764,0x107,7,6);
  MenuWnd_DrawLabel(0x107,0x3b,0x3b,*(int *)(param_1 + 0x90) + 1,*(undefined4 *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x24) == 1) {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x90),0,0xffffffffffffffff,0);
    puVar11 = &g_MenuMgr->field_0x40;
    uVar6 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x90),0);
    UiElem_SetPropInt(puVar11,0,0x16,uVar6);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff,0xffffffffffffffff,0);
    puVar11 = &g_MenuMgr->field_0x40;
    uVar6 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x30),0xffffffffffffffff);
    UiElem_SetPropInt(puVar11,0,0x16,uVar6);
  }
  MenuWnd_DrawText(0x102,0x1b,0x1f34);
  iVar4 = UiMgr_FindLayout(0x107);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_Draw(0x3f800000,&g_MenuMgr->field_0x40);
  iVar4 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  return;
}

// 0x00263eb0  size 0x610
void MenuScr_Draw_SelectCarManufacturer_3eb0(int param_1)

{
  UiLayoutSlot *pUVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 auStack_a0 [20];
  int aiStack_50 [20];
  
  iVar3 = UiMgr_FindLayout(0x11);
  iVar8 = *(int *)(param_1 + 0x894);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x894) = 0;
  if (iVar8 != 0) {
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    uVar4 = UiRes_GetLayoutData(0x365);
    iVar8 = UiMgr_FindLayout(0x106);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x31c = uVar4;
    pUVar2[iVar8].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x366);
    iVar8 = UiMgr_FindLayout(0x106);
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
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = uVar4;
    pUVar2[iVar8].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x367);
    iVar8 = UiMgr_FindLayout(0x106);
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
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x364);
    iVar8 = UiMgr_FindLayout(0x106);
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
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x193);
    iVar8 = UiMgr_FindLayout(0x11);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar8].layout.field_0x31c == 0) {
      pUVar2[iVar8].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar8].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x31c = uVar4;
    pUVar2[iVar8].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x194);
    iVar8 = UiMgr_FindLayout(0x11);
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
    *(undefined4 *)&pUVar2[iVar8].layout.field_0x330 = uVar4;
    pUVar2[iVar8].layout.animState = 1;
    uVar5 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0x2c));
    UiElem_SetPropInt(&pUVar1[iVar3].layout,0,0x16,uVar5);
    MenuWnd_DrawDialogText(0x106,0x36ecd0,2,0);
  }
  MenuWnd_DrawCursor(1);
  if (*(int *)(param_1 + 0x890) != 0) {
    lVar6 = UiLayout_UpdateAnimById(0x106,0);
    lVar7 = UiLayout_UpdateAnimById(0x106,1);
    if (lVar6 == 0 && lVar7 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x890) = 0;
    }
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    MenuWnd_SetItemVisible(0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  puVar10 = auStack_a0;
  puVar11 = &DAT_0032d620;
  iVar8 = 9;
  do {
    iVar8 = iVar8 + -1;
    uVar4 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar4;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar8);
  iVar8 = 0;
  piVar9 = aiStack_50;
  do {
    *piVar9 = iVar8 + 0x6a3;
    piVar9[1] = iVar8 + 0x6a4;
    piVar9[2] = iVar8 + 0x6a5;
    piVar9[3] = iVar8 + 0x6a6;
    piVar9[4] = iVar8 + 0x6a7;
    piVar9[5] = iVar8 + 0x6a8;
    iVar8 = iVar8 + 6;
    piVar9 = piVar9 + 6;
  } while (iVar8 < 0x12);
  MenuList_Update(param_1 + 0x8a0,auStack_a0,aiStack_50);
  if (*(int *)(param_1 + 0x80) == 1) {
    if (*(int *)(param_1 + 0x84) == 1) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
        pUVar1[iVar3].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar3].layout.unk_318 = 1;
      }
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    lVar6 = UiLayout_UpdateAnimById(0x11,1);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x2c) != -1) {
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    uVar5 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0x2c));
    UiElem_SetPropInt(&pUVar1[iVar3].layout,0,0x16,uVar5);
    UiLayout_UpdateAnimById(0x11,0);
  }
  MenuWnd_DrawText(0x102,0x1b,0x1f33);
  iVar8 = UiMgr_FindLayout(0x106);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x102);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  iVar8 = UiMgr_FindLayout(0x10c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  return;
}

