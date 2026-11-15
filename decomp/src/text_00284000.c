// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00284000 - 0x00288000
#include "ghidra_types.h"

// 0x00284400  size 0x14
/* screen record 0x3276ec */

void ScrShop_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00284420  size 0x314
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Shop_4420(int *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = UiLayout_UpdateAnimById(0x12,0);
  lVar4 = UiLayout_UpdateAnimById(0x18,0);
  lVar5 = UiLayout_UpdateAnimById(0x12,2);
  if (lVar5 != 0 || (lVar3 != 0 || lVar4 != 0)) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x18,*(undefined4 *)(&DAT_0032e670 + *param_1 * 4),1,0);
  }
  MenuWnd_DrawText(0x12,0x40,0x102);
  bVar1 = true;
  if ((param_1[1] != 0) && ((param_1[1] & 1U) == 0)) {
    bVar1 = false;
  }
  uVar6 = 0;
  if (!bVar1) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x18,0x19,uVar6,0xfb);
  bVar1 = true;
  if ((param_1[1] != 0) && ((param_1[1] & 2U) == 0)) {
    bVar1 = false;
  }
  uVar6 = 0;
  if (!bVar1) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x18,0x1a,uVar6,0xfc);
  bVar1 = true;
  if ((param_1[1] != 0) && ((param_1[1] & 4U) == 0)) {
    bVar1 = false;
  }
  uVar6 = 0;
  if (!bVar1) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x18,0x1b,uVar6,0xe2);
  bVar1 = true;
  if ((param_1[1] != 0) && ((param_1[1] & 8U) == 0)) {
    bVar1 = false;
  }
  uVar6 = 0;
  if (!bVar1) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x18,0x1c,uVar6,0xe4);
  ScrGarage_Draw_ThereIsNew();
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032e680 + *param_1 * 4));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  UiLayout_UpdateAnimById(0x13,0);
  iVar2 = UiMgr_FindLayout(0x18);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  if ((g_MenuMgr->flags & 4) == 0) {
    MenuWnd_SetItemVisible(0);
    if (g_MenuMgr->nextScreen == 3) {
      lVar3 = UiLayout_UpdateAnimById(0x18,2);
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0x18,1);
    }
    if (lVar3 == 0) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
  }
  return;
}

// 0x00284740  size 0x51c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3276ec */

void ScrShop_Enter(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = UiMgr_FindLayout(0x12);
  iVar3 = *_g_UiMgr;
  uVar4 = UiRes_GetLayoutData(0x3d);
  UiLayout_PlayAnim(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
  iVar1 = UiMgr_FindLayout(0x12);
  iVar3 = *_g_UiMgr;
  uVar4 = UiRes_GetLayoutData(0x49);
  UiLayout_PlayAnim(iVar3 + iVar1 * 0x4f4 + 4,uVar4);
  uVar2 = UiRes_GetLayoutData(0x3c);
  iVar3 = UiMgr_FindLayout(0x12);
  iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
  if (*(int *)(iVar3 + 800) == 0) {
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
  uVar2 = UiRes_GetLayoutData(0x3d);
  iVar3 = UiMgr_FindLayout(0x12);
  iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
  if (*(int *)(iVar3 + 0x334) == 0) {
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
  uVar2 = UiRes_GetLayoutData(0x3e);
  iVar3 = UiMgr_FindLayout(0x12);
  iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
  if (*(int *)(iVar3 + 0x348) == 0) {
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
  uVar2 = UiRes_GetLayoutData(0x3f);
  iVar3 = UiMgr_FindLayout(0x12);
  iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
  if (*(int *)(iVar3 + 0x35c) == 0) {
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
  }
  uVar2 = UiRes_GetLayoutData(0x40);
  iVar3 = UiMgr_FindLayout(0x12);
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
    *(undefined4 *)(iVar3 + 0x368) = 0;
    *(undefined4 *)(iVar3 + 0x370) = uVar2;
    *(undefined4 *)(iVar3 + 0x36c) = 1;
  }
  uVar2 = UiRes_GetLayoutData(0x41);
  iVar3 = UiMgr_FindLayout(0x13);
  iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
  if (*(int *)(iVar3 + 800) == 0) {
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
    *(undefined4 *)(iVar3 + 0x318) = 1;
    *(undefined4 *)(iVar3 + 800) = uVar2;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
  }
  uVar2 = UiRes_GetLayoutData(0x58);
  iVar3 = UiMgr_FindLayout(0x18);
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
  uVar2 = UiRes_GetLayoutData(0x59);
  iVar3 = UiMgr_FindLayout(0x18);
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
  uVar2 = UiRes_GetLayoutData(0xb3);
  iVar3 = UiMgr_FindLayout(0x18);
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
  Menu_ClearSlot(0);
  return;
}

// 0x00284c60  size 0x338
void maybe_ScrCareerRaceSetup_HandleInput(undefined8 param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 4);
  uVar7 = piRam0036f468[iVar3 + 2];
  if ((piRam0036f468[iVar3 + 4] & uVar7) == 0) {
    uVar7 = 0x100000;
  }
  else if (uVar7 == 0x80000) {
    uVar7 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar7 = 0x100000;
  }
  if (uVar7 == 0x1000) {
    if (*(int *)(iVar6 + 0x6a0) != 6) {
      return;
    }
    if (*(int *)(iVar6 + 8) == 0) {
      return;
    }
    g_MenuMgr->unk_002c = *(uint *)(iVar6 + 0x4d0);
    Se_PlayMenu(5);
    maybe_Garage_StepSubtitle(param_1,0xffffffffffffffff);
    return;
  }
  if (uVar7 != 0x10) {
    if (uVar7 == 0x20) {
      Se_PlayMenu(6);
      maybe_Garage_StepSubtitle(param_1,*(undefined4 *)(iVar6 + 0x6bc));
      return;
    }
    return;
  }
  if (*(int *)(iVar6 + 0x6a0) != 8) goto LAB_00284ed4;
  if (*(int *)(iVar6 + 8) == 0) {
    CarRec_Build(iVar6 + iVar3 * 0xcc + 0x4e0,
                 *(undefined2 *)(*(int *)(iVar6 + 0x4d0) * 4 + iVar6 + 0x4c),
                 *(undefined2 *)(iVar6 + 0x4d4),0,0);
    iVar3 = *(int *)(iVar6 + 4);
  }
  else {
    iVar3 = Profile_Get(1);
    sVar1 = *(short *)(iVar3 + *(int *)(iVar6 + 0x4d0) * 2 + 0x13ee);
    iVar3 = Profile_Get(1);
    memcpy(iVar6 + *(int *)(iVar6 + 4) * 0xcc + 0x4e0,iVar3 + sVar1 * 0xcc,0xcc);
    iVar3 = *(int *)(iVar6 + 4);
  }
  uVar4 = 1;
  if (iVar3 != 1) goto LAB_00284ed4;
  iVar3 = *(int *)(iVar6 + 0x694);
  if (iVar3 == 0) {
    uVar4 = 2;
LAB_00284e20:
    iVar3 = *(int *)(iVar6 + 0x68c);
  }
  else {
    if (iVar3 == 1) goto LAB_00284e20;
    if (iVar3 == 2) {
      uVar4 = 0;
      goto LAB_00284e20;
    }
    iVar3 = *(int *)(iVar6 + 0x68c);
    uVar4 = unaff_s1;
  }
  if (iVar3 == 3) {
    cVar2 = Menu_MapCursorToItem(*(undefined4 *)(iVar6 + 0x67c));
    if ((cVar2 == '\x04') ||
       (cVar2 = Menu_MapCursorToItem(*(undefined4 *)(iVar6 + 0x67c)), cVar2 == '\a')) {
      unaff_s0 = 5;
    }
    else {
      unaff_s0 = 4;
    }
  }
  else if (iVar3 == 2) {
    cVar2 = Menu_MapCursorToItem(*(undefined4 *)(iVar6 + 0x67c));
    if ((cVar2 == '\x04') ||
       (cVar2 = Menu_MapCursorToItem(*(undefined4 *)(iVar6 + 0x67c)), cVar2 == '\a')) {
      unaff_s0 = 2;
    }
    else {
      unaff_s0 = 1;
    }
  }
  else if (iVar3 == 1) {
    unaff_s0 = 3;
  }
  else if (iVar3 == 0) {
    unaff_s0 = 0;
  }
  iVar3 = *(int *)(iVar6 + 0x688);
  uVar5 = Menu_MapCursorToItem(*(undefined4 *)(iVar6 + 0x67c));
  RaceSetup_FromCareer
            (uVar4,uVar5,unaff_s0,*(undefined1 *)(iVar6 + 0x690),iVar3 == 0,iVar6 + 0x4e0,
             *(undefined4 *)(iVar6 + 0x4d8),iVar6 + 0x5ac);
LAB_00284ed4:
  Se_PlayMenu(5);
  maybe_Garage_StepSubtitle(param_1,*(undefined4 *)(iVar6 + 0x6c0));
  return;
}

// 0x00284fa0  size 0x224
void maybe_Garage_StepSubtitle(int param_1,long param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6a0) == 0) {
    Subtitle_Hide(5,0xffff);
    iVar1 = *(int *)(param_1 + 0x6a0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6a0);
  }
  if (iVar1 == 6) {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
  }
  if (param_2 < 0) {
    if (param_2 == -1) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800000;
      if (*(int *)(param_1 + 4) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xfeffffff;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x1000000;
      }
      MenuMgr_RequestScreen(0x23);
    }
    else if (param_2 == -4) {
      if (*(int *)(param_1 + 8) == 1) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xff7fffff;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800000;
      }
      if (*(int *)(param_1 + 4) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xfeffffff;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x1000000;
      }
      Subtitle_SetPending(1,*(int *)(param_1 + 8) + -1,*(undefined4 *)(param_1 + 4));
      MenuMgr_RequestScreen(0x18);
    }
    else if (param_2 == -2) {
      MenuMgr_RequestScreen();
    }
    else {
      g_MenuMgr->flags = g_MenuMgr->flags & 0xff7fffff;
      g_MenuMgr->flags = g_MenuMgr->flags & 0xfeffffff;
      MenuMgr_RequestScreen(0x16);
    }
  }
  else {
    if (((param_2 == 5) && (*(int *)(param_1 + 0x6a0) == 6)) ||
       ((param_2 == 6 && (*(int *)(param_1 + 0x6a0) == 5)))) {
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
    *(int *)(param_1 + 0x6a4) = (int)param_2;
  }
  return;
}

// 0x002851d0  size 0x13c
/* entry 8 of state table 0x32e690 used by maybe_ScrCareerRaceSetup_Update */

void maybe_ScrCareerRaceSetup_State8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined4 *)(param_1 + 0x6c0) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x6c0) = 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_1 + 0x69c);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    *(undefined4 *)(*(int *)(param_1 + 4) * 4 + param_1 + 0x4d8) = 1;
  }
  uVar2 = piRam0036f468[*(int *)(param_1 + 4) + 2];
  if ((piRam0036f468[*(int *)(param_1 + 4) + 4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if ((uVar2 == 2) || (uVar2 == 1)) {
    Se_PlayMenu(7);
    param_1 = *(int *)(param_1 + 4) * 4 + param_1;
    *(uint *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) != 0 ^ 1;
  }
  return;
}

// 0x00285310  size 0xb0
/* entry 7 of state table 0x32e690 used by maybe_ScrCareerRaceSetup_Update */

void maybe_ScrCareerRaceSetup_State7(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c0) = 8;
    *(undefined4 *)(param_1 + 0x6bc) = 6;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  iVar1 = CarDb_GetModelEntry(*(undefined4 *)(*(int *)(param_1 + 0x4d0) * 4 + param_1 + 0x4c));
  Menu_HandleCursor(param_1 + 0x4d4,*(undefined4 *)(param_1 + 4),8,iVar1 + -1,1,0);
  g_MenuMgr->unk_0544 = *(uint *)(param_1 + 0x4d4);
  return;
}

// 0x002853c0  size 0x310
/* entry 6 of state table 0x32e690 used by maybe_ScrCareerRaceSetup_Update */

void maybe_ScrCareerRaceSetup_State6(int param_1)

{
  short sVar1;
  MenuMgr *pMVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  int iStack_4;
  
  iVar8 = *(int *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (iVar8 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 *)(param_1 + 0x6bc) = 5;
    }
    else if (*(int *)(param_1 + 4) == 0) {
      *(undefined4 *)(param_1 + 0x6bc) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x6bc) = 4;
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = 0;
        break;
      case 2:
        g_MenuMgr->unk_05dc = 0;
        break;
      case 3:
        g_MenuMgr->unk_05fc = 0;
        break;
      case 4:
        g_MenuMgr->unk_0618 = 0;
      }
    }
    iVar8 = 0;
    g_MenuMgr->unk_0544 = 0xfffffffe;
    g_MenuMgr->unk_0594 = 0;
    puVar7 = &g_MenuMgr->unk_0534;
    do {
      *(undefined2 *)(puVar7 + 5) = 0x162;
      iVar8 = iVar8 + 7;
      *(undefined2 *)((int)puVar7 + 0x16) = 0x162;
      *(undefined2 *)(puVar7 + 6) = 0x162;
      *(undefined2 *)((int)puVar7 + 0x1a) = 0x162;
      *(undefined2 *)(puVar7 + 7) = 0x162;
      *(undefined2 *)((int)puVar7 + 0x1e) = 0x162;
      *(undefined2 *)(puVar7 + 8) = 0x162;
      puVar7 = (uint *)((int)puVar7 + 0xe);
    } while (iVar8 < 0x15);
    if (*(int *)(param_1 + 8) == 0) {
      iStack_4 = 0;
      iVar8 = Profile_Get(0);
      MenuText_CountCars(&iStack_4,1,*(undefined4 *)(param_1 + 0xc),iVar8 + 0x20f0);
      iVar8 = iStack_4;
      *(undefined4 *)(param_1 + 0x4cc) = 0;
      do {
        *(int *)(param_1 + *(int *)(param_1 + 0x4cc) * 4 + 0x4c) = iStack_4;
        *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + 1;
        iVar3 = Profile_Get(0);
        MenuText_CountCars(&iStack_4,1,*(undefined4 *)(param_1 + 0xc),iVar3 + 0x20f0);
      } while (iVar8 != iStack_4);
    }
    else {
      *(undefined4 *)(param_1 + 0x6c0) = 8;
      uVar6 = Profile_Get(1);
      uVar4 = Garage_FindCar(uVar6);
      *(undefined4 *)(param_1 + 0x4cc) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x698) = 0;
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x119,3);
    if ((*(int *)(param_1 + 0x69c) != 7) && (*(int *)(param_1 + 0x69c) != 8)) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
  }
  lVar5 = Menu_HandleCursor(param_1 + 0x4d0,*(undefined4 *)(param_1 + 4),8,
                            *(int *)(param_1 + 0x4cc) + -1,1,0);
  if (lVar5 == 1) {
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
    iVar8 = *(int *)(param_1 + 8);
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
  }
  if (iVar8 == 0) {
    Menu_HandleList(param_1 + 0x698,param_1 + 0x680,*(undefined4 *)(param_1 + 0x4cc),0xc,
                    *(undefined4 *)(param_1 + 4),8);
    pMVar2 = g_MenuMgr;
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4d0) * 4 + param_1 + 0x4c);
    g_MenuMgr->unk_0538 = 0;
    *(undefined4 *)&pMVar2->field_0x53c = uVar4;
    g_MenuMgr->unk_0540 = 0;
    lVar5 = MenuText_CarFullNameDefault();
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x6c0) = 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x6c0) = 7;
    }
  }
  else {
    Menu_HandleList(param_1 + 0x698,param_1 + 0x680,*(undefined4 *)(param_1 + 0x4cc),0xc,
                    *(undefined4 *)(param_1 + 4),8);
    iVar8 = Profile_Get(1);
    pMVar2 = g_MenuMgr;
    sVar1 = *(short *)(iVar8 + *(int *)(param_1 + 0x4d0) * 2 + 0x13ee);
    g_MenuMgr->unk_0538 = 2;
    *(int *)&pMVar2->field_0x53c = (int)sVar1;
    g_MenuMgr->unk_0540 = 1;
  }
  return;
}

// 0x002856d0  size 0x1cc
/* entry 5 of state table 0x32e690 used by maybe_ScrCareerRaceSetup_Update */

void maybe_ScrCareerRaceSetup_State5(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c0) = 6;
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined4 *)(param_1 + 0x6bc) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x6bc) = 4;
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    MenuList_Reset(param_1 + 0x1c,0x17,3,4,*(undefined4 *)(param_1 + 0xc),0x12,8);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
    MenuList_HandleInput(param_1 + 0x1c,0);
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar2 = *(undefined4 *)(param_1 + 0x24);
    }
    else {
      uVar2 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  lVar3 = MenuList_HandleInput(param_1 + 0x1c,*(undefined4 *)(param_1 + 4));
  if (lVar3 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = piRam0036f468[*(int *)(param_1 + 4) + 2];
    if ((piRam0036f468[*(int *)(param_1 + 4) + 4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar4 = 0x100000;
    }
    if (uVar4 != 0x10) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    uVar2 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

// 0x002858a0  size 0x10c
/* entry 4 of state table 0x32e690 used by maybe_ScrCareerRaceSetup_Update */

void maybe_ScrCareerRaceSetup_State4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x69c);
    if (((iVar1 == 8) || (iVar1 == 4)) || (iVar1 == 2)) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 0x6a0) == 3) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 1;
    }
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined4 *)(param_1 + 0x6bc) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x6bc) = 3;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  Menu_HandleCursor(param_1 + 8,*(undefined4 *)(param_1 + 4),2,2,1,0);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x6c0) = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c0) = 0xfffffffc;
  }
  return;
}

// 0x002859b0  size 0x80
/* entry 2 of state table 0x32e690 used by maybe_ScrCareerRaceSetup_Update */

void maybe_ScrCareerRaceSetup_State2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c0) = 3;
    *(undefined4 *)(param_1 + 0x6bc) = 1;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  Menu_HandleCursor(param_1 + 0x694,0,2,2,1,0);
  return;
}

// 0x00285a30  size 0x120
/* entry 1 of state table 0x32e690 used by maybe_ScrCareerRaceSetup_Update */

void maybe_ScrCareerRaceSetup_State1(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 auStack_20 [4];
  int aiStack_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c0) = 2;
    *(undefined4 *)(param_1 + 0x6bc) = 0;
    *(undefined4 *)(param_1 + 0x684) = 0;
    *(undefined4 *)(param_1 + 0x694) = 0;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  piVar3 = (int *)0xc;
  piVar4 = aiStack_10;
  piVar2 = piVar4;
  while (piVar2 != (int *)0x0) {
    *(undefined1 *)piVar4 = 0;
    piVar4 = (int *)((int)piVar4 + 1);
    piVar3 = (int *)((int)piVar3 + -1);
    piVar2 = piVar3;
  }
  aiStack_10[1] = param_1 + 0x68c;
  aiStack_10[0] = param_1 + 0x688;
  aiStack_10[2] = param_1 + 0x690;
  auStack_20[0] = DAT_0032e6b8;
  auStack_20[1] = DAT_0032e6bc;
  auStack_20[2] = DAT_0032e6c0;
  Menu_HandleCursor(param_1 + 0x684,0,2,2,1,0);
  Menu_HandleCursor(aiStack_10[*(int *)(param_1 + 0x684)],0,8,auStack_20[*(int *)(param_1 + 0x684)],
                    1,0);
  return;
}

// 0x00285b50  size 0x28c
/* entry 0 of state table 0x32e690 used by maybe_ScrCareerRaceSetup_Update */

void maybe_ScrCareerRaceSetup_State0(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = param_1[0x1aa];
  param_1[0x1aa] = 0;
  if (iVar1 != 0) {
    param_1[0x1b0] = 1;
    param_1[0x1af] = -3;
    param_1[0x1a6] = 0;
    param_1[0x1a2] = 0;
    param_1[0x1a3] = 0;
    param_1[0x1a4] = 0;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    Subtitle_Show(0x1c,0x1c,0x14,0);
    uVar3 = Menu_MapCursorToItem(param_1[0x19f]);
    uVar3 = MsgId_ForDriveType(uVar3,0);
    Subtitle_Hide(10,uVar3);
    *param_1 = 0;
  }
  uVar3 = Msg_ProfileStat(0);
  lVar4 = Menu_HandleCursor(param_1 + 0x19f,0,2,uVar3,1,0);
  if (lVar4 == 1) {
    uVar5 = Menu_MapCursorToItem(param_1[0x19f]);
    uVar5 = MsgId_ForDriveType(uVar5,0);
    Subtitle_Hide(10,uVar5);
    *param_1 = 0;
  }
  else {
    *param_1 = *param_1 + 1;
    if (*param_1 == 0xb4) {
      uVar5 = Menu_MapCursorToItem(param_1[0x19f]);
      uVar5 = MsgId_ForDriveType(uVar5,1);
      Subtitle_Hide(10,uVar5);
    }
    else if (*param_1 == 0x168) {
      *param_1 = 0;
      uVar5 = Menu_MapCursorToItem(param_1[0x19f]);
      uVar5 = MsgId_ForDriveType(uVar5,0);
      Subtitle_Hide(10,uVar5);
    }
  }
  Menu_HandleList(param_1 + 0x1a6,param_1 + 0x19e,(int)uVar3 + 1,4,0,2);
  uVar3 = Menu_MapCursorToItem(param_1[0x19f]);
  RaceCtx_Set_10(uVar3);
  bVar2 = Menu_MapCursorToItem(param_1[0x19f]);
  g_MenuMgr->unk_0620 = bVar2;
  g_MenuMgr->unk_0624 = 0xffffffff;
  g_MenuMgr->unk_0628 = 0xffffffff;
  g_MenuMgr->unk_05ac = bVar2;
  if (bVar2 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar2) {
    case 0:
      g_MenuMgr->unk_0640 = '\x01';
      break;
    case 1:
      g_MenuMgr->unk_0640 = '\0';
      break;
    case 2:
      g_MenuMgr->unk_0640 = '\x02';
      break;
    case 3:
      g_MenuMgr->unk_0640 = '\x03';
      break;
    case 4:
      g_MenuMgr->unk_0640 = '\x04';
      break;
    case 5:
      g_MenuMgr->unk_0640 = '\x05';
      break;
    case 6:
      g_MenuMgr->unk_0640 = '\x06';
      break;
    case 7:
      g_MenuMgr->unk_0640 = '\a';
    }
  }
  return;
}

// 0x00285de0  size 0x60
/* menu screen 43 (table 0x3274b0) */

void maybe_ScrCareerRaceSetup_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x69c);
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrCareerRaceSetup_State0_0032e690)[*(int *)(iVar2 + 0x6a0)])(param_1);
    maybe_ScrCareerRaceSetup_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 0x69c);
  }
  return;
}

// 0x00285e40  size 0x70
/* menu screen 43 (table 0x3274b0) */

void maybe_ScrCareerRaceSetup_Exit(void)

{
  MenuList_Init(&g_MenuMgr->unk_0534);
  if ((g_MenuMgr->nextScreen != 0x18) && (g_MenuMgr->nextScreen != 0x23)) {
    Profile_Free(1);
  }
  g_MenuMgr->unk_05a0 = 0;
  g_MenuMgr->unk_05e8 = 0;
  g_MenuMgr->unk_060c = 0;
  g_MenuMgr->unk_0634 = 0;
  g_MenuMgr->unk_0644 = 0;
  return;
}

// 0x00285eb0  size 0x218
/* menu screen 43 (table 0x3274b0) */

void maybe_ScrCareerRaceSetup_Enter(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_4 [4];
  
  iVar7 = 0;
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  iVar5 = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0xff;
  do {
    iVar2 = Profile_Get(0);
    if (*(int *)(iVar2 + iVar5 + 0x20f0) == 1) {
      uVar3 = MenuText_CarFullName(iVar7,0xffffffffffffffff);
      if ((int)uVar3 < *(int *)(iVar4 + 0xc)) {
        *(uint *)(iVar4 + 0xc) = uVar3;
      }
      *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) | 1 << (uVar3 & 0x1f);
    }
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar7 < 0x120);
  cVar1 = RaceCtx_Get_8();
  if (cVar1 == '\r') {
    RaceCtx_Set_8(0x13);
    Profile_Create(1,0x430750);
    *(undefined4 *)(iVar4 + 4) = 0;
    uVar6 = 0;
    *(undefined4 *)(iVar4 + 0x678) = 0;
    *(undefined4 *)(iVar4 + 0x67c) = 0;
  }
  else if (g_MenuMgr->prevScreen == 0x18) {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xff7fffff;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xfeffffff;
    if (cRam0036f8a4 == '\x02') {
      uVar6 = 6;
      Garage_BuildSortedCarList(auStack_4,8,1);
    }
    else if (*(int *)(iVar4 + 4) == 0) {
      uVar6 = 3;
    }
    else {
      uVar6 = 4;
    }
  }
  else if (g_MenuMgr->prevScreen == 0x23) {
    uVar6 = 6;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xff7fffff;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xfeffffff;
  }
  else {
    Profile_Create(1,0x430750);
    *(undefined4 *)(iVar4 + 4) = 0;
    uVar6 = 0;
    *(undefined4 *)(iVar4 + 0x678) = 0;
    *(undefined4 *)(iVar4 + 0x67c) = 0;
  }
  *(undefined4 *)(iVar4 + 0x69c) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x6a0) = uVar6;
  *(undefined4 *)(iVar4 + 0x6a4) = uVar6;
  *(undefined4 *)(iVar4 + 0x6ac) = 1;
  *(undefined4 *)(iVar4 + 0x6b8) = 0;
  *(undefined4 *)(iVar4 + 0x6b0) = 1;
  *(undefined4 *)(iVar4 + 0x6a8) = 1;
  *(undefined4 *)(iVar4 + 0x6b4) = 0;
  RaceCtx_SetMode(4);
  (*(code *)(&PTR_maybe_ScrCareerRaceSetup_State0_0032e690)[*(int *)(iVar4 + 0x6a0)])(param_1);
  return;
}

// 0x002860d0  size 0x1c4
void maybe_ScrCarPassword_HandleInput(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 0x10) {
    if (param_1[1] == 4) {
      iVar1 = param_1[1];
    }
    else {
      Se_PlayMenu(5);
      iVar1 = param_1[1];
    }
    if (iVar1 < 0) {
      if (iVar1 == -2) {
        uRam0036f2b4 = 0x10;
        RaceCtx_Set_9(1);
        MenuMgr_RequestScreen(0xfffffffffffffffd);
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 1;
        MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
      }
    }
    else {
      if ((iVar1 == 0) || (param_1[0x130] == 0)) {
        g_MenuMgr->flags = g_MenuMgr->flags | 1;
      }
      param_1[0x131] = iVar1;
    }
  }
  else if (uVar2 == 0x20) {
    Se_PlayMenu(6);
    iVar1 = *param_1;
    if (iVar1 < 0) {
      if (iVar1 == -2) {
        uRam0036f2b4 = 0x10;
        RaceCtx_Set_9(1);
        MenuMgr_RequestScreen(0xfffffffffffffffd);
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 1;
        MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
      }
    }
    else {
      if ((iVar1 == 0) || (param_1[0x130] == 0)) {
        g_MenuMgr->flags = g_MenuMgr->flags | 1;
      }
      param_1[0x131] = iVar1;
    }
  }
  return;
}

// 0x002862a0  size 0xe8
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageIsSlotUsed" (was
   ScrGarageIsSlotUsed_Update) */

void maybe_ScrCarPassword_State7_GarageIsSlotUsed(undefined4 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = 7;
  Menu_HandleCursor(param_1 + 0x128,0,2,1,1,0);
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 0x10) {
    if (param_1[0x128] == 0) {
      uVar1 = Profile_Get(0);
      Garage_IsSlotUsed(uVar1,param_1[0x129]);
    }
  }
  else if (uVar2 == 0x20) {
    param_1[0x128] = 1;
  }
  return;
}

// 0x00286390  size 0x10
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageIsSlotUsed" (was
   ScrGarageIsSlotUsed_Enter) */

void maybe_ScrCarPassword_State5_GarageIsSlotUsed(undefined4 *param_1)

{
  param_1[1] = 1;
  *param_1 = 1;
  return;
}

// 0x002863a0  size 0x74
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageFindCar" (was
   ScrGarageFindCar_Update863a0) */

void maybe_ScrCarPassword_State4_GarageFindCar(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = Profile_Get(0);
  lVar2 = Garage_FindCar(uVar1);
  if (lVar2 == 1) {
    uVar1 = Profile_Get(0);
    Garage_IsSlotUsed(uVar1,param_1[0x129]);
    param_1[1] = 0xfffffffe;
    *param_1 = 0xfffffffe;
  }
  else {
    param_1[1] = 7;
    *param_1 = 7;
  }
  param_1[0x128] = 0;
  return;
}

// 0x00286420  size 0x188
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageFindCar" (was
   ScrGarageFindCar_Enter86420) */

void maybe_ScrCarPassword_State3_GarageFindCar(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  iVar1 = param_1[0x132];
  param_1[0x132] = 0;
  if (iVar1 != 0) {
    param_1[0x128] = 0;
    lVar6 = MenuText_CarFullNameDefault(param_1[0x126]);
    if (lVar6 == 0) {
      *param_1 = 1;
    }
    else {
      *param_1 = 2;
    }
  }
  Menu_HandleCursor(param_1 + 0x128,0,2,1,1,0);
  if (param_1[0x128] == 0) {
    param_1[1] = 4;
    uVar7 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar7) == 0) {
      uVar7 = 0x100000;
    }
    else if (uVar7 == 0x80000) {
      uVar7 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar7 = 0x100000;
    }
    if (uVar7 == 0x10) {
      Se_PlayMenu(0xc);
      uVar3 = Options_Get_14();
      uVar4 = Profile_Get(0);
      uVar5 = Profile_Get(0);
      uVar5 = Profile_GetDay(uVar5);
      uVar2 = Garage_TradeCar(uVar4,param_1[0x126],*(undefined2 *)(param_1 + 0x127),uVar3,uVar5);
      param_1[0x129] = uVar2;
      uVar3 = Profile_Get(0);
      lVar6 = Garage_FindCar(uVar3);
      if (lVar6 == 1) {
        uVar3 = Profile_Get(0);
        Garage_IsSlotUsed(uVar3,param_1[0x129]);
      }
    }
  }
  else {
    param_1[1] = *param_1;
  }
  return;
}

// 0x002865b0  size 0x7c
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageFindCar" (was
   ScrGarageFindCar_Exit) */

void maybe_ScrCarPassword_State2_GarageFindCar(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 3;
  *param_1 = 1;
  param_1[0x128] = 0;
  iVar1 = CarDb_GetModelEntry(param_1[0x126]);
  Menu_HandleCursor(param_1 + 0x127,0,8,iVar1 + -1,1,0);
  g_MenuMgr->unk_0544 = param_1[0x127];
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x00286630  size 0x2bc
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageFindCar" (was
   ScrGarageFindCar_Update) */

void maybe_ScrCarPassword_State1_GarageFindCar(undefined4 *param_1)

{
  MenuMgr *pMVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [204];
  int iStack_4;
  
  iVar6 = param_1[0x132];
  param_1[0x132] = 0;
  if (iVar6 != 0) {
    g_MenuMgr->unk_0544 = 0xfffffffe;
    iStack_4 = 0;
    param_1[0x124] = 0;
    iVar6 = Profile_Get(0);
    MenuText_CountCars(&iStack_4,1,param_1[3],iVar6 + 0x1c70);
    iVar6 = iStack_4;
    if (param_1[0x12f] == 0) {
      param_1[0x125] = 0;
      param_1[299] = 0;
    }
    do {
      param_1[param_1[0x124] + 4] = iStack_4;
      param_1[0x124] = param_1[0x124] + 1;
      iVar5 = Profile_Get(0);
      MenuText_CountCars(&iStack_4,1,param_1[3],iVar5 + 0x1c70);
    } while (iVar6 != iStack_4);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = 0;
        break;
      case 2:
        g_MenuMgr->unk_05dc = 0;
        break;
      case 3:
        g_MenuMgr->unk_05fc = 0;
        break;
      case 4:
        g_MenuMgr->unk_0618 = 0;
      }
    }
    param_1[300] = 0;
  }
  lVar7 = Menu_HandleCursor(param_1 + 0x125,0,8,param_1[0x124] + -1,1,0);
  if (lVar7 == 1) {
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
  }
  Menu_HandleList(param_1 + 300,param_1 + 299,param_1[0x124],0xc,0,8);
  param_1[0x126] = param_1[param_1[0x125] + 4];
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetDay(uVar8);
  CarRec_Build(auStack_d0,*(undefined2 *)(param_1 + 0x126),0,0,uVar8);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetDayOfMonth(uVar8);
  uVar4 = Garage_RecalcCar(auStack_d0,uVar8);
  param_1[0x12a] = uVar4;
  iVar6 = param_1[0x12a];
  uVar8 = Profile_Get(0);
  iVar5 = Profile_GetMoney(uVar8);
  if (iVar5 < iVar6) {
    param_1[1] = 5;
  }
  else {
    uVar8 = Profile_Get(0);
    cVar2 = Garage_GetSelectedSlot(uVar8);
    uVar8 = Profile_Get(0);
    cVar3 = Garage_FindCar(uVar8);
    if (cVar3 < cVar2) {
      lVar7 = MenuText_CarFullNameDefault(param_1[0x126]);
      if (lVar7 == 0) {
        param_1[1] = 3;
      }
      else {
        param_1[1] = 2;
      }
    }
    else {
      param_1[1] = 6;
    }
  }
  param_1[0x127] = 0;
  *param_1 = 0;
  pMVar1 = g_MenuMgr;
  uVar4 = param_1[0x126];
  g_MenuMgr->unk_0538 = 0;
  *(undefined4 *)&pMVar1->field_0x53c = uVar4;
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x002868f0  size 0x1f8
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageFindCar" (was
   ScrGarageFindCar_Enter) */

void maybe_ScrCarPassword_State0_GarageFindCar(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[0x132];
  param_1[0x132] = 0;
  if (iVar5 != 0) {
    param_1[2] = 0;
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar1 = Profile_Get(0);
      if (*(int *)(iVar1 + iVar5 + 0x1c70) == 1) {
        uVar3 = MenuText_CarFullName(iVar6,0xffffffffffffffff);
        param_1[2] = param_1[2] | 1 << (uVar3 & 0x1f);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 0x120);
    MenuList_Reset(param_1 + 0x137,0x17,3,4,param_1[3],0x12,8);
    param_1[0x13d] = param_1[2];
    MenuList_HandleInput(param_1 + 0x137,0);
    if (param_1[0x137] == 2) {
      uVar2 = param_1[0x139];
    }
    else {
      uVar2 = 0xffffffff;
    }
    param_1[3] = uVar2;
    param_1[0x12d] = 0;
    param_1[0x12e] = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  param_1[1] = 1;
  *param_1 = 0xffffffff;
  lVar4 = MenuList_HandleInput(param_1 + 0x137,0);
  if (lVar4 == 1) {
    param_1[0x12d] = 1;
    param_1[0x12e] = 1;
  }
  if (param_1[0x12d] != 0) {
    uVar3 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar3) == 0) {
      uVar3 = 0x100000;
    }
    else if (uVar3 == 0x80000) {
      uVar3 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar3 = 0x100000;
    }
    if (uVar3 != 0x10) goto LAB_00286a78;
  }
  if (param_1[0x137] == 2) {
    uVar2 = param_1[0x139];
  }
  else {
    uVar2 = 0xffffffff;
  }
  param_1[3] = uVar2;
LAB_00286a78:
  param_1[0x126] = 0;
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x00286af0  size 0x10
/* menu screen 2 (table 0x3274b0) */

void maybe_ScrCarPassword_Exit(void)

{
  g_MenuMgr->unk_0544 = 0xfffffffe;
  return;
}

// 0x00286b00  size 0x60
/* menu screen 2 (table 0x3274b0) */

void maybe_ScrCarPassword_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x4bc);
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrCarPassword_State0_GarageFindCar_0032e6d0)[*(int *)(iVar2 + 0x4c0)])
              (param_1);
    maybe_ScrCarPassword_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 0x4bc);
  }
  return;
}

// 0x00286b60  size 0x44
/* menu screen 2 (table 0x3274b0) */

void maybe_ScrCarPassword_Enter(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 1;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 1;
  *(undefined4 *)(param_1 + 0x4c8) = 1;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  g_MenuMgr->unk_0544 = 0xfffffffe;
  maybe_ScrCarPassword_State0_GarageFindCar();
  return;
}

// 0x00286bb0  size 0x14c
void maybe_ScrGarageBuyCar_HandleInput(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  iVar3 = (int)param_1;
  if (uVar2 != 0x10) {
    if (uVar2 == 0x20) {
      Se_PlayMenu(6);
      maybe_ScrGarageBuyCar_OnResult(param_1,*(undefined4 *)(iVar3 + 0x44));
      return;
    }
    return;
  }
  if (*(int *)(iVar3 + 0x48) == 0) {
    if (*(int *)(iVar3 + 0x5c) == 0xb) {
      Se_PlayMenu(0xc);
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 4;
    }
    else if (*(int *)(iVar3 + 0x5c) == 10) {
      Se_PlayMenu(0xc);
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 8;
    }
    else {
      Se_PlayMenu(5);
    }
  }
  else {
    if (*(int *)(iVar3 + 0x48) == 6) {
      Se_PlayMenu(0xc);
      uVar1 = *(undefined4 *)(iVar3 + 0x48);
      goto LAB_00286c74;
    }
    Se_PlayMenu(5);
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x48);
LAB_00286c74:
  maybe_ScrGarageBuyCar_OnResult(param_1,uVar1);
  return;
}

// 0x00286d10  size 0xd4
void maybe_ScrGarageBuyCar_OnResult(int param_1,long param_2)

{
  if (param_2 < 0) {
    if (param_2 != -5) {
      if (param_2 == -1) {
        MenuMgr_RequestScreen(1);
      }
      else if (param_2 == -2) {
        g_MenuMgr->unk_002c = *(uint *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc);
        MenuMgr_RequestScreen(0x26);
      }
      else if (param_2 == -3) {
        g_MenuMgr->unk_002c = *(uint *)(param_1 + 0x34);
        MenuMgr_RequestScreen(0x25);
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0x5c) == 0) || (param_2 == 0)) {
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
    *(int *)(param_1 + 0x60) = (int)param_2;
  }
  return;
}

// 0x00286df0  size 0x7c
/* entry 11 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State11(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 9;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  Menu_HandleCursor(param_1 + 0x54,0,2,1,1,0);
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 9;
  }
  return;
}

// 0x00286e70  size 0x7c
/* entry 10 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 9;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  Menu_HandleCursor(param_1 + 0x54,0,2,1,1,0);
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 9;
  }
  return;
}

// 0x00286ef0  size 0xc8
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageFindCar" (was
   ScrGarageFindCar_Exit86ef0) */

void maybe_ScrCarPassword_State17_GarageFindCar(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 8;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  Menu_HandleCursor(param_1 + 0x50,0,2,2,1,0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x48) = 0xfffffffd;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x48) = 0xb;
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 10;
  }
  return;
}

// 0x00286fc0  size 0x18c
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageFindCar" (was
   ScrGarageFindCar_Update86fc0) */

void maybe_ScrCarPassword_State16_GarageFindCar(int param_1)

{
  short sVar1;
  MenuMgr *pMVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar3 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar3 != 0) {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = 0;
        break;
      case 2:
        g_MenuMgr->unk_05dc = 0;
        break;
      case 3:
        g_MenuMgr->unk_05fc = 0;
        break;
      case 4:
        g_MenuMgr->unk_0618 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  Garage_BuildSortedCarList(param_1 + 0x28,8,0);
  uVar4 = Profile_Get(0);
  iVar3 = Garage_FindCar(uVar4);
  lVar5 = Menu_HandleCursor(param_1 + 0x34,0,8,iVar3 + -1,1,0);
  if (lVar5 == 1) {
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
  }
  uVar4 = Profile_Get(0);
  uVar4 = Garage_FindCar(uVar4);
  Menu_HandleList(param_1 + 0x40,param_1 + 0x3c,uVar4,0xc,0,8);
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x48) = 0xfffffffb;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 9;
  }
  iVar3 = Profile_Get(0);
  pMVar2 = g_MenuMgr;
  sVar1 = *(short *)(iVar3 + *(int *)(param_1 + 0x34) * 2 + 0x13ee);
  g_MenuMgr->unk_0538 = 2;
  *(int *)&pMVar2->field_0x53c = (int)sVar1;
  return;
}

// 0x00287150  size 0xe8
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageFindCar" (was
   ScrGarageFindCar_Enter87150) */

void maybe_ScrCarPassword_State15_GarageFindCar(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 7;
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  Menu_HandleCursor(param_1 + 0x54,0,2,1,1,0);
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if ((uVar2 == 0x10) &&
     (*(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1, *(int *)(param_1 + 0x54) == 0)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
  }
  return;
}

// 0x00287240  size 0xf8
/* entry 6 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State6(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    uVar2 = Profile_Get(0);
    lVar3 = Garage_FindCar(uVar2);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 1;
      *(undefined4 *)(param_1 + 0x44) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 7;
      *(undefined4 *)(param_1 + 0x44) = 7;
    }
  }
  uVar2 = Profile_Get(0);
  lVar3 = Garage_FindCar(uVar2);
  if (lVar3 == 0) {
    uVar4 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar4 = 0x100000;
    }
    if (uVar4 == 0x10) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
    }
  }
  return;
}

// 0x00287340  size 0x80
/* entry 5 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State5(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 2;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  Menu_HandleCursor(param_1 + 0x54,0,2,1,1,0);
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 6;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  return;
}

// 0x002873c0  size 0x30
/* entry 4 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  return;
}

// 0x002873f0  size 0x30
/* entry 3 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State3(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  return;
}

// 0x00287420  size 0x90
/* entry 2 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  Menu_HandleCursor(param_1 + 0x50,0,2,1,1,0);
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 5;
  }
  else {
    g_MenuMgr->unk_002c = *(uint *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x48) = 0xfffffffe;
  }
  return;
}

// 0x002874b0  size 0x2b8
/* entry 1 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State1(undefined4 *param_1)

{
  int iVar1;
  MenuMgr *pMVar2;
  char cVar3;
  char cVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  iVar10 = param_1[0x19];
  param_1[0x19] = 0;
  if (iVar10 != 0) {
    param_1[0x11] = 0;
    iVar10 = 0;
    param_1[0x14] = 0;
    param_1[1] = 0;
    do {
      uVar7 = Profile_Get(0);
      psVar5 = (short *)Garage_GetPartSlot(uVar7,iVar10);
      if (*psVar5 != -1) {
        iVar1 = param_1[1];
        param_1[1] = iVar1 + 1;
        param_1[iVar1 + 3] = iVar10;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 6);
    if (param_1[1] == 0) {
      g_MenuMgr->unk_05a0 = 0;
      g_MenuMgr->unk_05e8 = 0;
      g_MenuMgr->unk_060c = 0;
      g_MenuMgr->unk_0634 = 0;
      g_MenuMgr->unk_0644 = 0;
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 0;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 0;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 0;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 0;
        }
      }
      pMVar2 = g_MenuMgr;
      g_MenuMgr->unk_0538 = 0;
      *(undefined4 *)&pMVar2->field_0x53c = 0;
    }
    else {
      g_MenuMgr->unk_05a0 = 1;
      g_MenuMgr->unk_05e8 = 1;
      g_MenuMgr->unk_060c = 1;
      g_MenuMgr->unk_0634 = 1;
      g_MenuMgr->unk_0644 = 1;
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 0;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 0;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 0;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 0;
        }
      }
    }
  }
  if (param_1[1] == 0) {
    param_1[0x12] = 0;
  }
  else {
    lVar8 = Menu_HandleCursor(param_1 + 2,0,8,param_1[1] + -1,1,0);
    if (lVar8 == 1) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
    }
    lVar8 = maybe_Garage_InstallPartDated(param_1[param_1[2] + 3]);
    uVar7 = Profile_Get(0);
    lVar9 = Profile_GetMoney(uVar7);
    if (lVar9 < lVar8) {
      param_1[0x12] = 3;
    }
    else {
      uVar7 = Profile_Get(0);
      cVar3 = Garage_GetSelectedSlot(uVar7);
      uVar7 = Profile_Get(0);
      cVar4 = Garage_FindCar(uVar7);
      if (cVar4 < cVar3) {
        param_1[0x12] = 2;
      }
      else {
        param_1[0x12] = 4;
      }
    }
    uVar7 = Profile_Get(0);
    uVar6 = Garage_GetPartSlot(uVar7,param_1[param_1[2] + 3]);
    *param_1 = uVar6;
    pMVar2 = g_MenuMgr;
    uVar6 = param_1[param_1[2] + 3];
    g_MenuMgr->unk_0538 = 3;
    *(undefined4 *)&pMVar2->field_0x53c = uVar6;
  }
  return;
}

// 0x00287770  size 0xe0
/* state of maybe_ScrCarPassword; on-screen text/callee hint "GarageIsSlotUsed" (was
   ScrGarageIsSlotUsed_Exit) */

void maybe_ScrCarPassword_State8_GarageIsSlotUsed(int param_1)

{
  int iVar1;
  MenuMgr *pMVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    uVar3 = Profile_Get(0);
    lVar4 = Garage_FindCar(uVar3);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0538 = 0;
    *(undefined4 *)&pMVar2->field_0x53c = 0;
  }
  Menu_HandleCursor(param_1 + 0x4c,0,2,1,1,*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x4c) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 8;
  }
  return;
}

// 0x00287850  size 0x2c
/* menu screen 3 (table 0x3274b0) */

void ScrGarageBuyCar_Exit(void)

{
  g_MenuMgr->unk_05a0 = 0;
  g_MenuMgr->unk_05e8 = 0;
  g_MenuMgr->unk_060c = 0;
  g_MenuMgr->unk_0634 = 0;
  g_MenuMgr->unk_0644 = 0;
  return;
}

// 0x00287880  size 0x1dc
/* menu screen 3 (table 0x3274b0) */

void ScrGarageBuyCar_Update(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  lVar4 = Menu_IsInputIdle(iVar7 + 0x58);
  if (lVar4 != 0) {
    if ((*(uint *)(iVar7 + 0x30) & 1) != 0) {
      uVar6 = Profile_Get(0);
      uVar5 = Profile_Get(0);
      uVar5 = Profile_GetDay(uVar5);
      uVar2 = Garage_SellCar(uVar6,*(undefined4 *)(*(int *)(iVar7 + 8) * 4 + iVar7 + 0xc),uVar5);
      *(undefined4 *)(iVar7 + 0x24) = uVar2;
      *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xfffffffe;
      *(undefined4 *)(iVar7 + 8) = 0;
    }
    if ((*(uint *)(iVar7 + 0x30) & 2) != 0) {
      uVar6 = Profile_Get(0);
      Garage_IsSlotUsed(uVar6,*(undefined4 *)(iVar7 + 0x24));
      *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xfffffffd;
    }
    if ((*(uint *)(iVar7 + 0x30) & 4) == 0) {
      uVar1 = *(uint *)(iVar7 + 0x30);
    }
    else {
      iVar3 = Profile_Get(0);
      uVar6 = Profile_Get(0);
      Garage_BuyCar(uVar6,0,*(undefined2 *)(iVar3 + 0x13ee + *(int *)(iVar7 + 0x34) * 2));
      *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xfffffffb;
      Garage_BuildSortedCarList(iVar7 + 0x28,8,0);
      uVar1 = *(uint *)(iVar7 + 0x30);
    }
    if ((uVar1 & 8) == 0) {
      iVar3 = *(int *)(iVar7 + 0x5c);
    }
    else {
      iVar3 = Profile_Get(0);
      uVar6 = Profile_Get(0);
      Garage_BuyCar(uVar6,1,*(undefined2 *)(iVar3 + 0x13ee + *(int *)(iVar7 + 0x34) * 2));
      *(uint *)(iVar7 + 0x30) = *(uint *)(iVar7 + 0x30) & 0xfffffff7;
      Garage_BuildSortedCarList(iVar7 + 0x28,8,0);
      iVar3 = *(int *)(iVar7 + 0x5c);
    }
    (*(code *)(&PTR_maybe_ScrCarPassword_State8_GarageIsSlotUsed_0032e6f0)[iVar3])(param_1);
    maybe_ScrGarageBuyCar_HandleInput(param_1);
    Menu_RequestTransition(iVar7 + 0x58);
  }
  return;
}

// 0x00287a60  size 0x20c
/* menu screen 3 (table 0x3274b0) */

void ScrGarageBuyCar_Enter(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  MenuMgr *pMVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  
  puVar7 = (undefined4 *)param_1;
  puVar7[0xc] = 0;
  uVar1 = g_MenuMgr->prevScreen;
  if (uVar1 == 0x26) {
    uVar1 = g_MenuMgr->unk_002c;
    uVar9 = 0;
    puVar7[2] = 0xffffffff;
    puVar7[1] = 0;
    do {
      uVar6 = Profile_Get(0);
      psVar4 = (short *)Garage_GetPartSlot(uVar6,uVar9);
      if (*psVar4 != -1) {
        if (uVar9 == uVar1) {
          puVar7[2] = puVar7[1];
        }
        iVar2 = puVar7[1];
        puVar7[1] = iVar2 + 1;
        puVar7[iVar2 + 3] = uVar9;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 6);
    puVar7[0x14] = 1;
    puVar7[0x13] = 0;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    uVar8 = 2;
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = 0;
        break;
      case 2:
        g_MenuMgr->unk_05dc = 0;
        break;
      case 3:
        g_MenuMgr->unk_05fc = 0;
        break;
      case 4:
        g_MenuMgr->unk_0618 = 0;
      }
    }
    pMVar3 = g_MenuMgr;
    uVar5 = puVar7[puVar7[2] + 3];
    g_MenuMgr->unk_0538 = 3;
    *(undefined4 *)&pMVar3->field_0x53c = uVar5;
    uVar6 = Profile_Get(0);
    uVar5 = Garage_GetPartSlot(uVar6,puVar7[puVar7[2] + 3]);
    *puVar7 = uVar5;
  }
  else if (uVar1 == 0x25) {
    uVar8 = 9;
    puVar7[0x14] = 2;
    puVar7[0x13] = 1;
  }
  else if (uVar1 == 0x23) {
    puVar7[0x13] = 0;
    uVar8 = 8;
  }
  else {
    puVar7[0x13] = 0;
    uVar8 = 0;
  }
  puVar7[0x16] = 0xffffffff;
  puVar7[0x17] = uVar8;
  puVar7[0x18] = uVar8;
  puVar7[0x1a] = 1;
  puVar7[0x1d] = 0;
  puVar7[0x1b] = 1;
  puVar7[0x19] = 1;
  puVar7[0x1c] = 0;
  (*(code *)(&PTR_maybe_ScrCarPassword_State8_GarageIsSlotUsed_0032e6f0)[puVar7[0x17]])(param_1);
  return;
}

// 0x00287c70  size 0x128
void maybe_Password_GetCurrentCarInfo(uint *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = 0;
  uVar1 = Profile_Get(0);
  uVar1 = Profile_GetCurrentCarModel(uVar1);
  lVar2 = Password_GetCarFlags(uVar1);
  if (lVar2 == 0) {
    *param_1 = *param_1 | 1;
  }
  else {
    *param_1 = *param_1 | 2;
  }
  uVar1 = Profile_Get(0);
  uVar1 = Profile_GetCurrentCarModel(uVar1);
  lVar2 = Password_GetCarClass(uVar1);
  if (lVar2 == 4) {
    *param_1 = *param_1 | 0x10;
  }
  else if (lVar2 == 3) {
    *param_1 = *param_1 | 8;
  }
  else if (lVar2 == 2) {
    *param_1 = *param_1 | 4;
  }
  uVar1 = Profile_Get(0);
  uVar1 = Profile_GetCurrentCarModel(uVar1);
  lVar2 = Password_IsCarSpecial(uVar1);
  if (lVar2 == 7) {
    *param_1 = *param_1 | 0x80;
  }
  else if (lVar2 == 6) {
    *param_1 = *param_1 | 0x40;
  }
  else if (lVar2 == 5) {
    *param_1 = *param_1 | 0x20;
  }
  return;
}

// 0x00287da0  size 0x110
void maybe_ScrRecordPassword_HandleInput(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar1 = 0x100000;
  }
  iVar2 = (int)param_1;
  if (uVar1 == 0x10) {
    if ((*(int *)(iVar2 + 0x6c) != -4) &&
       ((*(int *)(iVar2 + 0x4c) != 4 || (*(int *)(iVar2 + 0x6c) != 4)))) {
      Se_PlayMenu(5);
    }
    maybe_ScrRecordPassword_OnResult(param_1,*(undefined4 *)(iVar2 + 0x6c));
  }
  else if (uVar1 == 0x20) {
    if ((*(int *)(iVar2 + 0x68) != -4) &&
       ((*(int *)(iVar2 + 0x4c) != 4 || (*(int *)(iVar2 + 0x68) != 4)))) {
      Se_PlayMenu(6);
    }
    maybe_ScrRecordPassword_OnResult(param_1,*(undefined4 *)(iVar2 + 0x68));
  }
  return;
}

// 0x00287ec0  size 0x3ac
void maybe_ScrRecordPassword_OnResult(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uchar uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_60 [8];
  uint uStack_58;
  uint uStack_54;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  
  if (*(int *)(param_1 + 0x4c) == 5) {
    uVar4 = Profile_Get(0);
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetDayClamped(uVar5);
    Profile_SetCourseBest(uVar4,*(undefined4 *)(param_1 + 0x30),uVar5);
  }
  if (param_2 < 0) {
    if (param_2 != -4) {
      if (param_2 == -1) {
        uVar6 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
        if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 8) + 1) {
          Course_GetVariantInfo(auStack_40,uVar6,*(undefined4 *)(param_1 + 0x20));
          uVar8 = uStack_2c;
          uVar9 = uStack_30;
        }
        else {
          Course_FindSection(auStack_60,uVar6,*(int *)(param_1 + 0x1c),
                             *(undefined4 *)(param_1 + 0x20));
          uVar8 = uStack_54;
          uVar9 = uStack_58;
        }
        cVar3 = Race_IsTimeTrialMode(uVar6,0);
        uVar7 = (uchar)uVar6;
        if (cVar3 == '\0') {
          g_MenuMgr->unk_0620 = uVar7;
          g_MenuMgr->unk_0624 = 0xffffffff;
          g_MenuMgr->unk_0628 = 0xffffffff;
          g_MenuMgr->unk_05ac = uVar7;
          if ((uVar6 & 0xff) < 8) {
                    /* WARNING: Switch is manually overridden */
            switch((int)(uVar6 & 0xff)) {
            case 0:
              g_MenuMgr->unk_0640 = '\x01';
              break;
            case 1:
              g_MenuMgr->unk_0640 = '\0';
              break;
            case 2:
              g_MenuMgr->unk_0640 = '\x02';
              break;
            case 3:
              g_MenuMgr->unk_0640 = '\x03';
              break;
            case 4:
              g_MenuMgr->unk_0640 = '\x04';
              break;
            case 5:
              g_MenuMgr->unk_0640 = '\x05';
              break;
            case 6:
              g_MenuMgr->unk_0640 = '\x06';
              break;
            case 7:
              g_MenuMgr->unk_0640 = '\a';
            }
          }
          g_MenuMgr->unk_0624 = 9 - uVar9;
          g_MenuMgr->unk_0628 = 9 - uVar8;
        }
        else {
          g_MenuMgr->unk_0620 = uVar7;
          g_MenuMgr->unk_0624 = 0xffffffff;
          g_MenuMgr->unk_0628 = 0xffffffff;
          g_MenuMgr->unk_05ac = uVar7;
          if ((uVar6 & 0xff) < 8) {
                    /* WARNING: Switch is manually overridden */
            switch((int)(uVar6 & 0xff)) {
            case 0:
              g_MenuMgr->unk_0640 = '\x01';
              break;
            case 1:
              g_MenuMgr->unk_0640 = '\0';
              break;
            case 2:
              g_MenuMgr->unk_0640 = '\x02';
              break;
            case 3:
              g_MenuMgr->unk_0640 = '\x03';
              break;
            case 4:
              g_MenuMgr->unk_0640 = '\x04';
              break;
            case 5:
              g_MenuMgr->unk_0640 = '\x05';
              break;
            case 6:
              g_MenuMgr->unk_0640 = '\x06';
              break;
            case 7:
              g_MenuMgr->unk_0640 = '\a';
            }
          }
          g_MenuMgr->unk_0624 = uVar9;
          g_MenuMgr->unk_0628 = uVar8;
        }
        MenuMgr_RequestScreen(0xf);
        MenuMgr_RequestScreen(0xf);
      }
      else if (param_2 == -2) {
        iVar1 = *(int *)(param_1 + 8);
        iVar2 = *(int *)(param_1 + 0x1c);
        uVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
        uVar5 = Profile_Get(0);
        Password_GetRecordTime(uVar5,uVar4,*(undefined4 *)(param_1 + 0x1c),iVar2 == iVar1 + 1);
        uVar5 = Race_GetCourseId(g_MenuMgr->unk_0620);
        if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 8) + 1) {
          Password_ApplyCareer
                    (uVar4,*(undefined4 *)(param_1 + 0x20),uVar5,*(undefined4 *)(param_1 + 0x24));
        }
        else {
          Password_ApplyCareerEx
                    (uVar4,*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),uVar5,
                     *(undefined4 *)(param_1 + 0x24));
        }
        MenuMgr_RequestScreen(0xfffffffffffffffe);
      }
      else if (param_2 == -3) {
        MenuMgr_RequestScreen(0x1b);
      }
    }
  }
  else {
    *(int *)(param_1 + 0x50) = (int)param_2;
  }
  return;
}

