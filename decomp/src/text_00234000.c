// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00234000 - 0x00238000
#include "ghidra_types.h"

// 0x00234060  size 0x50
void MenuScr_Draw_Prizes(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = Profile_Get(param_3);
  uVar1 = Profile_CountClearedCourses(iVar2 + 0x272c);
  MenuWnd_DrawLabel(param_1,param_2,0x26b,uVar1);
  return;
}

// 0x002340b0  size 0x50
void MenuScr_Draw_People(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = Profile_Get(param_3);
  uVar1 = Profile_CountUnlockedCourses(iVar2 + 0x272c);
  MenuWnd_DrawLabel(param_1,param_2,0x26a,uVar1);
  return;
}

// 0x00234100  size 0x50
void MenuScr_Draw_People_4100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = Profile_Get(param_3);
  uVar1 = Profile_GetPoints(uVar1);
  MenuWnd_DrawLabel(param_1,param_2,0x26a,uVar1);
  return;
}

// 0x00234150  size 0x54
void ScrGarage_Draw_Cars(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = Profile_Get(param_3);
  uVar1 = Garage_GetSelectedSlot(uVar2);
  MenuWnd_DrawLabel(param_1,param_2,0x269,uVar1);
  return;
}

// 0x002341b0  size 0x50
void ScrGarage_Draw_Cars_41b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = Profile_Get(param_3);
  uVar1 = Garage_FindCar(uVar1);
  MenuWnd_DrawLabel(param_1,param_2,0x269,uVar1);
  return;
}

// 0x00234200  size 0x9c
/* entry 11 of state table 0x32b2f0 used by ScrRace_Select_PlayerStatus */

void ScrRace_Select_PlayerStatus_State11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iStack_8 = 0;
  Profile_Validate(param_3,&uStack_4,&iStack_8);
  MenuWnd_DrawLabel(param_1,param_2,0x268,uStack_4,iStack_8 / 0xe10);
  return;
}

// 0x002342a0  size 0x54
/* entry 10 of state table 0x32b2f0 used by ScrRace_Select_PlayerStatus */

void ScrRace_Select_PlayerStatus_State10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = Profile_Get(param_3);
  MenuWnd_DrawLabel(param_1,param_2,0x47,*(undefined4 *)(iVar1 + 0x2bf4),
                    (int)*(float *)(iVar1 + 0x2bf8));
  return;
}

// 0x00234300  size 0x44
/* entry 9 of state table 0x32b2f0 used by ScrRace_Select_PlayerStatus */

void ScrRace_Select_PlayerStatus_State9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = Profile_Get(param_3);
  MenuWnd_DrawNumber(param_1,param_2,*(undefined4 *)(iVar1 + 0x2be8));
  return;
}

// 0x00234350  size 0x44
/* entry 8 of state table 0x32b2f0 used by ScrRace_Select_PlayerStatus */

void ScrRace_Select_PlayerStatus_State8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = Profile_Get(param_3);
  MenuWnd_DrawNumber(param_1,param_2,*(undefined4 *)(iVar1 + 0x2be4));
  return;
}

// 0x002343a0  size 0x4c
/* entry 7 of state table 0x32b2f0 used by ScrRace_Select_PlayerStatus */

void ScrRace_Select_PlayerStatus_State7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = Profile_Get(param_3);
  uVar1 = Profile_GetMoney(uVar1);
  MenuWnd_DrawNumber(param_1,param_2,uVar1);
  return;
}

// 0x002343f0  size 0x48
/* entry 6 of state table 0x32b2f0 used by ScrRace_Select_PlayerStatus */

void ScrRace_Select_PlayerStatus_State6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = Profile_Get(param_3);
  MenuWnd_DrawLabel(param_1,param_2,0x267,*(undefined4 *)(iVar1 + 0x2bd0));
  return;
}

// 0x00234440  size 0x50
/* state of ScrRace_Select_PlayerStatus; on-screen text/callee hint "DrawWinLoss" (was
   ScrDraw_WinLoss_Exit) */

void ScrRace_Select_PlayerStatus_State5_DrawWinLoss
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = Profile_Get(param_3);
  MenuWnd_DrawLabel(param_1,param_2,0x266,(int)*(float *)(iVar1 + 0x2bb8));
  return;
}

// 0x00234490  size 0xb8
/* state of ScrRace_Select_PlayerStatus; on-screen text/callee hint "DrawWinLoss" (was
   ScrDraw_WinLoss_Update) */

void ScrRace_Select_PlayerStatus_State4_DrawWinLoss
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = Profile_Get(param_3);
  iVar4 = 0;
  sVar1 = Profile_GetPlayYear(uVar3);
  if (0 < sVar1) {
    sVar1 = Profile_GetPlayMonth(uVar3);
    sVar2 = Profile_GetPlayYear(uVar3);
    iVar4 = (sVar1 * 100) / (int)sVar2;
  }
  MenuWnd_DrawLabel(param_1,param_2,0x29,iVar4);
  return;
}

// 0x00234550  size 0x74
void MenuScr_Draw_WinLoss(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar3 = Profile_Get(param_3);
  uVar1 = Profile_GetPlayMonth(uVar3);
  uVar2 = Profile_GetPlayDay(uVar3);
  MenuWnd_DrawLabel(param_1,param_2,0x265,uVar1,uVar2);
  return;
}

// 0x002345d0  size 0x6c
void MenuScr_Draw_MonthWeek(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = Profile_Get(param_3);
  uVar2 = Profile_GetMonth(uVar1);
  uVar1 = Profile_IsMonthStart(uVar1);
  MenuWnd_DrawLabel(param_1,param_2,0x264,uVar2,uVar1);
  return;
}

// 0x00234640  size 0x84
/* state of ScrRace_Select_PlayerStatus; on-screen text/callee hint "DrawMonthWeek" (was
   ScrDraw_MonthWeek_Update) */

void ScrRace_Select_PlayerStatus_State1_DrawMonthWeek
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = Profile_Get(param_3);
  uVar1 = Profile_GetFlag273d(uVar2);
  uVar3 = MsgId_RivalTrait(uVar1);
  uVar1 = Profile_GetFlag273f(uVar2);
  uVar2 = MsgId_RivalType(uVar1);
  MenuWnd_DrawLabel(param_1,param_2,0x43,uVar3,uVar2);
  return;
}

// 0x002346d0  size 0x7c
/* state of ScrRace_Select_PlayerStatus; on-screen text/callee hint "DrawMonthWeek" (was
   ScrDraw_MonthWeek_Enter) */

void ScrRace_Select_PlayerStatus_State0_DrawMonthWeek
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 auStack_40 [16];
  
  uVar2 = Profile_Get(param_3);
  iVar1 = UiMgr_FindLayout(param_1);
  UiElem_GetRect(&g_UiMgr->slots[iVar1].layout,auStack_40,param_2);
  uVar2 = Career_GetRivalTable(uVar2);
  UiText_DrawPlayerName(auStack_40,uVar2,1);
  return;
}

// 0x00234750  size 0x650
void ScrRace_Select_PlayerStatus(int param_1)

{
  int iVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined4 *puVar9;
  
  iVar7 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar7 != 0) {
    uVar5 = UiRes_GetLayoutData(0x1e5);
    iVar7 = UiMgr_FindLayout(0xd7);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar7].layout.unk_310 = 0xffffffff;
    pUVar2[iVar7].layout.unk_31c = 0;
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
    pUVar2[iVar7].layout.unk_31c = uVar5;
    pUVar2[iVar7].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x1e6);
    iVar7 = UiMgr_FindLayout(0xd7);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x330 == 0) {
      pUVar2[iVar7].layout.animState = 0;
    }
    else {
      pUVar2[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x330 == 0) {
      pUVar2[iVar7].layout.animState = 0;
    }
    else {
      pUVar2[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar6;
    pUVar2[iVar7].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x1e7);
    iVar7 = UiMgr_FindLayout(0xd8);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar7].layout.unk_310 = 0xffffffff;
    pUVar2[iVar7].layout.unk_31c = 0;
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    pUVar2[iVar7].layout.unk_30c = 0;
    if (pUVar2[iVar7].layout.unk_31c == 0) {
      pUVar2[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x314 = 0;
    pUVar2[iVar7].layout.unk_31c = uVar5;
    pUVar2[iVar7].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x1e8);
    iVar7 = UiMgr_FindLayout(0xd8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x330 == 0) {
      pUVar2[iVar7].layout.animState = 0;
    }
    else {
      pUVar2[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x330 == 0) {
      pUVar2[iVar7].layout.animState = 0;
    }
    else {
      pUVar2[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x330 = uVar6;
    pUVar2[iVar7].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x1e9);
    iVar7 = UiMgr_FindLayout(0xd8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x1ea);
    iVar7 = UiMgr_FindLayout(0xd8);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar2[iVar7].layout.field_0x354 = 1;
    MenuWnd_DrawDialogText(0xd8,0x36ea30,2,0);
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd7,0);
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd8,0);
  if (!bVar3 && !bVar4) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd7,1);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd8,1);
    if (!bVar3 && !bVar4) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (lVar8 = MenuMgr_Goto(), lVar8 == 0)) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar7 = UiMgr_FindLayout(0xd8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x17,8,extraout_a3_lo_00);
      iVar7 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if (iVar7 == 5) {
      iVar7 = UiMgr_FindLayout(0xd8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x1a,8,extraout_a3_lo);
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  MenuWnd_DrawText(0xd7,1,0xee);
  iVar7 = 0;
  puVar9 = &DAT_0032b340;
  do {
    iVar1 = (*(int *)(param_1 + 0x20) + iVar7) % 0x11;
    MenuWnd_DrawTextId(0xd8,*puVar9,4,iVar1 + 0x253);
    (*(code *)(&PTR_ScrRace_Select_PlayerStatus_State0_DrawMonthWeek_0032b2f0)[iVar1])
              (0xd8,puVar9[1],0);
    iVar7 = iVar7 + 1;
    puVar9 = puVar9 + 2;
  } while (iVar7 < 0xc);
  if (*(char *)(param_1 + 0x24) == -1) {
    iVar7 = (*(int *)(param_1 + 0x20) + 0x10) % 0x11;
    MenuWnd_DrawTextId(0xd8,DAT_0032b3a0,4,iVar7 + 0x253);
    (*(code *)(&PTR_ScrRace_Select_PlayerStatus_State0_DrawMonthWeek_0032b2f0)[iVar7])
              (0xd8,DAT_0032b3a4,0);
  }
  else {
    iVar7 = (*(int *)(param_1 + 0x20) + 0xc) % 0x11;
    MenuWnd_DrawTextId(0xd8,DAT_0032b3a0,4,iVar7 + 0x253);
    (*(code *)(&PTR_ScrRace_Select_PlayerStatus_State0_DrawMonthWeek_0032b2f0)[iVar7])
              (0xd8,DAT_0032b3a4,0);
  }
  iVar7 = UiMgr_FindLayout(0xd7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  MenuNum_CountUp_PlayerStatus(0xd8,0xc,0xd,0x100,0x11,0xc,*(undefined4 *)(param_1 + 0x20));
  iVar7 = UiMgr_FindLayout(0xd8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00234da0  size 0x14
/* screen record 0x3277ac */

void PagePlayerStatus_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00234dc0  size 0x1f8
/* screen record 0x3277ac */

void PagePlayerStatus_Update(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x24) == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if (*(char *)(iVar4 + 0x24) == -1) {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd8,2);
      if (!bVar3) {
        *(undefined1 *)(iVar4 + 0x24) = 0;
        iVar4 = UiMgr_FindLayout(0xd8);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd8,3);
      if (!bVar3) {
        *(undefined1 *)(iVar4 + 0x24) = 0;
        iVar4 = UiMgr_FindLayout(0xd8);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar4].layout,2);
  iVar4 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  ScrRace_Select_PlayerStatus(param_1);
  uVar2 = g_MenuMgr->flags;
  if (((uVar2 & 4) == 0) && ((uVar2 & 1) == 0)) {
    g_MenuMgr->flags = uVar2 | 0x800;
  }
  return;
}

// 0x00234fc0  size 0x188
/* screen record 0x3277ac */

void PagePlayerStatus_Enter(void)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = UiMgr_FindLayout(8);
  pUVar1 = g_UiMgr->slots;
  piVar3 = (int *)UiRes_GetLayoutData(0x7c);
  UiLayout_PlayAnim(&pUVar1[iVar2].layout,piVar3);
  if (g_MenuMgr->prevScreen == 0x24) {
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
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x7e);
    iVar2 = UiMgr_FindLayout(8);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
  }
  return;
}

// 0x00235150  size 0x350
void MenuNum_CountUp_PrizeInfo
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

// 0x002354a0  size 0x4a0
void ScrRace_Draw_YouHaveNot(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x232);
    iVar4 = UiMgr_FindLayout(0xe6);
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
    uVar6 = UiRes_GetLayoutData(0x233);
    iVar4 = UiMgr_FindLayout(0xe6);
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
    uVar5 = UiRes_GetLayoutData(0x236);
    iVar4 = UiMgr_FindLayout(0xe7);
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
    uVar6 = UiRes_GetLayoutData(0x237);
    iVar4 = UiMgr_FindLayout(0xe7);
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
    uVar6 = UiRes_GetLayoutData(0x238);
    iVar4 = UiMgr_FindLayout(0xe7);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    MenuWnd_DrawDialogText(0xe6,0x36ea50,2,0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  MenuWnd_DrawCursor(1);
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe6,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe7,0);
  if (!bVar2 && !bVar3) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe6,1);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe7,1);
    if (!bVar2 && !bVar3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  MenuWnd_DrawLabel(0xe6,0xe,0x3a,*(int *)(param_1 + 0x28) + 1);
  MenuWnd_DrawText(0xe6,0xf,0x271);
  MenuWnd_DrawText(0xe6,0x10,0x272);
  MenuWnd_DrawText(0xe6,0x11,0x271);
  MenuWnd_DrawText(0xe7,0x10,0x270);
  iVar4 = UiMgr_FindLayout(0xe2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_DrawText(0xe3,1,0x26d);
  iVar4 = UiMgr_FindLayout(0xe3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  UiLayout_UpdateAnimById((UiLayout *)0xe7,2);
  iVar4 = UiMgr_FindLayout(0xe7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xe6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00235940  size 0x340
void ScrRace_Draw_PrizeInformation(int param_1)

{
  short sVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x232);
    iVar4 = UiMgr_FindLayout(0xe6);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar4].layout.unk_310 = 0xffffffff;
    pUVar2[iVar4].layout.unk_31c = 0;
    pUVar2[iVar4].layout.unk_30c = 0;
    if (pUVar2[iVar4].layout.unk_31c == 0) {
      pUVar2[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar4].layout.unk_318 = 1;
    }
    pUVar2[iVar4].layout.unk_30c = 0;
    if (pUVar2[iVar4].layout.unk_31c == 0) {
      pUVar2[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
    pUVar2[iVar4].layout.unk_31c = uVar5;
    pUVar2[iVar4].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x233);
    iVar4 = UiMgr_FindLayout(0xe6);
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
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar6;
    pUVar2[iVar4].layout.animState = 1;
    MenuWnd_DrawDialogText(0xe6,0x36ea48,2,0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    g_MenuMgr->unk_05f0 = *(uint *)(&DAT_0032b3d0 + *(int *)(param_1 + 0x28) * 4);
  }
  MenuWnd_DrawCursor(1);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe6,0);
  if (!bVar3) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe6,1), !bVar3)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  MenuWnd_DrawLabel(0xe6,0xe,0x3a,*(int *)(param_1 + 0x28) + 1);
  uVar7 = MsgId_MedalName(*(undefined4 *)(param_1 + 0x28));
  MenuWnd_DrawText(0xe6,0xf,uVar7);
  MenuWnd_DrawLabel(0xe6,0x10,0x26f,*(undefined4 *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x48)
                   );
  sVar1 = *(short *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x44);
  uVar7 = MsgId_ForModeShort((int)sVar1 / 3 & 0xff,(int)sVar1 % 3);
  MenuWnd_DrawText(0xe6,0x11,uVar7);
  iVar4 = UiMgr_FindLayout(0xe2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuWnd_DrawText(0xe3,1,0x26d);
  iVar4 = UiMgr_FindLayout(0xe3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xe6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00235c80  size 0x33c
void ScrRace_Draw_PrizeInformation_5c80(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x230);
    iVar3 = UiMgr_FindLayout(0xe5);
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
    uVar5 = UiRes_GetLayoutData(0x231);
    iVar3 = UiMgr_FindLayout(0xe5);
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
    MenuWnd_DrawDialogText(0xe5,0x36ea40,2,0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    g_MenuMgr->unk_05f0 = *(uint *)(&DAT_0032b3d0 + *(int *)(param_1 + 0x28) * 4);
  }
  MenuWnd_DrawCursor(1);
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe5,0);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xe5,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  MenuWnd_DrawLabel(0xe5,0xf,0x3a,*(int *)(param_1 + 0x28) + 1);
  uVar6 = MsgId_MedalName(*(undefined4 *)(param_1 + 0x28));
  MenuWnd_DrawText(0xe5,0x10,uVar6);
  MenuWnd_DrawLabel(0xe5,0x11,0x26f,*(undefined4 *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x48)
                   );
  uVar6 = MsgId_RivalNickname(*(undefined2 *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x44));
  MenuWnd_DrawText(0xe5,0x12,uVar6);
  uVar6 = MsgId_RivalName(*(undefined2 *)(*(int *)(param_1 + 0x28) * 0xc + param_1 + 0x44));
  MenuWnd_DrawText(0xe5,0x13,uVar6);
  iVar3 = UiMgr_FindLayout(0xe2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  MenuWnd_DrawText(0xe3,1,0x26d);
  iVar3 = UiMgr_FindLayout(0xe3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xe5);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00235fc0  size 0x714
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Select_PrizeInformation(int param_1)

{
  int iVar1;
  UiLayoutSlot *pUVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  
  iVar5 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar5 != 0) {
    uVar6 = UiRes_GetLayoutData(0x229);
    iVar5 = UiMgr_FindLayout(0xe1);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar5].layout.unk_310 = 0xffffffff;
    pUVar2[iVar5].layout.unk_31c = 0;
    pUVar2[iVar5].layout.unk_30c = 0;
    if (pUVar2[iVar5].layout.unk_31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    pUVar2[iVar5].layout.unk_30c = 0;
    if (pUVar2[iVar5].layout.unk_31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x314 = 1;
    pUVar2[iVar5].layout.unk_31c = uVar6;
    pUVar2[iVar5].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x22c);
    iVar5 = UiMgr_FindLayout(0xe4);
    pUVar2 = g_UiMgr->slots;
    pUVar2[iVar5].layout.unk_310 = 0xffffffff;
    pUVar2[iVar5].layout.unk_31c = 0;
    pUVar2[iVar5].layout.unk_30c = 0;
    if (pUVar2[iVar5].layout.unk_31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    pUVar2[iVar5].layout.unk_30c = 0;
    if (pUVar2[iVar5].layout.unk_31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x314 = 0;
    pUVar2[iVar5].layout.unk_31c = uVar6;
    pUVar2[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x22d);
    iVar5 = UiMgr_FindLayout(0xe4);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x330 == 0) {
      pUVar2[iVar5].layout.animState = 0;
    }
    else {
      pUVar2[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x330 == 0) {
      pUVar2[iVar5].layout.animState = 0;
    }
    else {
      pUVar2[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x330 = uVar7;
    pUVar2[iVar5].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x22e);
    iVar5 = UiMgr_FindLayout(0xe4);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x22f);
    iVar5 = UiMgr_FindLayout(0xe4);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xe4,0x36ea38,2,0);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe4,0);
  if (!bVar3) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe4,1), !bVar3)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (lVar8 = MenuMgr_Goto(), lVar8 == 0)) {
    MenuWnd_DrawCursor(1);
    cVar4 = *(char *)(param_1 + 0x2c);
  }
  else {
    MenuWnd_DrawCursor(0);
    cVar4 = *(char *)(param_1 + 0x2c);
  }
  if (cVar4 == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState(0xe4,*(undefined4 *)(&DAT_0032b470 + *(int *)(param_1 + 0x24) * 4),0,0);
    }
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if (*(char *)(param_1 + 0x2c) == -1) {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe4,2);
      if (!bVar3) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
        iVar5 = UiMgr_FindLayout(0xe4);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x334 = 0;
        if (*(int *)&pUVar2[iVar5].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xe4,3);
      if (!bVar3) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
        iVar5 = UiMgr_FindLayout(0xe4);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x348 = 0;
        if (*(int *)&pUVar2[iVar5].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar5 = Profile_Get(0);
  MenuWnd_DrawText(0xe3,1,0x26d);
  uVar9 = Profile_CountClearedCourses(iVar5 + 0x272c);
  MenuWnd_DrawLabel(0xe4,0x59,0x3d,uVar9,0x28);
  iVar5 = 0;
  puVar10 = &DAT_0032b4a0;
  do {
    iVar1 = (*(int *)(param_1 + 0x20) + iVar5) % 0x28;
    uVar7 = puVar10[1];
    MenuWnd_DrawLabel(0xe4,*puVar10,0x3a,iVar1 + 1);
    if (*(int *)(param_1 + iVar1 * 0xc + 0x48) == -1) {
      MenuWnd_DrawText(0xe4,uVar7,0x271);
    }
    else {
      uVar9 = MsgId_MedalName(iVar1);
      MenuWnd_DrawLabel(0xe4,uVar7,uVar9);
    }
    uVar7 = DAT_0032b4ec;
    iVar5 = iVar5 + 1;
    puVar10 = puVar10 + 2;
  } while (iVar5 < 9);
  if (*(char *)(param_1 + 0x2c) == -1) {
    iVar5 = *(int *)(param_1 + 0x20) + 0x27;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x20) + 9;
  }
  iVar5 = iVar5 % 0x28;
  MenuWnd_DrawLabel(0xe4,DAT_0032b4e8,0x3a,iVar5 + 1);
  if (*(int *)(iVar5 * 0xc + param_1 + 0x48) == -1) {
    MenuWnd_DrawText(0xe4,uVar7,0x271);
  }
  else {
    uVar9 = MsgId_MedalName(iVar5);
    MenuWnd_DrawLabel(0xe4,uVar7,uVar9);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xe1,0);
  iVar5 = UiMgr_FindLayout(0xe1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xe3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  MenuNum_CountUp_PrizeInfo(0xe4,0x49,0x4a,0xf6,0x28,9,*(undefined4 *)(param_1 + 0x20));
  iVar5 = UiMgr_FindLayout(0xe4);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x002366e0  size 0x58
/* menu page 18 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage18_Exit(void)

{
  int iVar1;
  byte extraout_a3_lo;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x25,8,extraout_a3_lo);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00236740  size 0xf8
/* menu page 18 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage18_Update(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  byte extraout_a3_lo;
  
  bVar1 = UiLayout_UpdateAnimById((UiLayout *)0xe3,0);
  if (!bVar1) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  iVar2 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x25,8,extraout_a3_lo);
  (*(code *)(&PTR_ScrRace_Select_PrizeInformation_0032b3b0)[*(int *)((int)param_1 + 4)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (bVar1 = UiLayout_UpdateAnimById((UiLayout *)0xe3,1), !bVar1)
     ) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00236840  size 0x118
/* menu page 18 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage18_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = UiRes_GetLayoutData(0x22a);
  iVar3 = UiMgr_FindLayout(0xe3);
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
  uVar4 = UiRes_GetLayoutData(0x22b);
  iVar3 = UiMgr_FindLayout(0xe3);
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
  return;
}

// 0x00236960  size 0x158
void ScrCareer_Draw_RivalBattle(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = RivalDb_Get(*(undefined2 *)(param_1 + 0x20));
  uVar2 = Race_GetLapCountForMode(*(undefined4 *)(iVar1 + 0x14));
  uVar2 = MsgId_ForOption(uVar2);
  MenuWnd_DrawText(0xd2,0x27,0x106);
  uVar3 = MsgId_ForSlot(uVar2,1);
  MenuWnd_DrawText(0xd2,0x25,uVar3);
  iVar1 = UiMgr_FindLayout(0xd2);
  UiElem_SetNumber(&g_UiMgr->slots[iVar1].layout,0x24,0x16,
                   (long)*(int *)(&DAT_0032b6f0 + (int)uVar2 * 4));
  MenuWnd_DrawText(0xd1,0x2e,0x49);
  MenuWnd_DrawText(0xd1,0x2f,0x4a);
  MenuWnd_DrawText(0xd1,0x30,0x4f);
  MenuWnd_DrawText(0xd1,0x31,0x51);
  if ((int)uVar2 - 5U < 2) {
    MenuWnd_DrawText(0xd1,0x32,0x53);
    MenuWnd_DrawText(0xd1,0x33,0x54);
  }
  else {
    MenuWnd_DrawText(0xd1,0x32,0x50);
    MenuWnd_DrawText(0xd1,0x33,0x52);
  }
  MenuWnd_DrawText(0xd1,0x34,0x55);
  MenuWnd_DrawText(0xd1,0x35,0x56);
  return;
}

// 0x00236ac0  size 0x744
void ScrCareer_Draw_NoData_6ac0(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  int iVar18;
  int iVar19;
  short *psVar20;
  int aiStack_90 [20];
  undefined4 auStack_40 [3];
  int iStack_34;
  
  uVar13 = RivalDb_Get(*(undefined2 *)(param_1 + 0x20));
  uVar7 = RivalRec_GetType(uVar13);
  MenuWnd_DrawLabel(199,0x14,0x3c,*(int *)(param_1 + 0x1c) + 1,*(undefined4 *)(param_1 + 0x10));
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = Profile_Get(0);
  if (*(int *)(iVar8 + iVar9 * 4 + 0x37b0) == 1) {
    uVar13 = MsgId_RivalNickname(iVar9);
    MenuWnd_DrawText(199,0x17,uVar13);
    uVar13 = MsgId_RivalName(*(undefined4 *)(param_1 + 0x20));
    MenuWnd_DrawText(199,0x19,uVar13);
    MenuWnd_DrawText(199,0x1a,(uVar7 & 0xff) + 0x67);
    uVar1 = *(undefined2 *)(param_1 + 0x20);
  }
  else {
    MenuWnd_DrawText(199,0x17,0x5c);
    MenuWnd_DrawText(199,0x19,0x5c);
    MenuWnd_DrawText(199,0x1a,0x5b);
    uVar1 = *(undefined2 *)(param_1 + 0x20);
  }
  uVar13 = RivalDb_Get(uVar1);
  lVar14 = RivalRec_IsValid(uVar13);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = Profile_Get(0);
  uVar1 = *(undefined2 *)(iVar8 + iVar9 * 2 + 0x3fc4);
  iVar8 = Profile_Get(0);
  uVar2 = *(undefined2 *)(iVar8 + iVar9 * 2 + 0x43ac);
  lVar15 = MenuText_OpponentSpec(iVar9,0xfffffffffffffffd);
  iVar9 = MenuText_OpponentTitle(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  uVar10 = MenuText_OpponentCar(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  lVar16 = MenuText_OpponentTeam(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  uVar11 = MenuText_OpponentName(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  iVar8 = MenuText_OpponentComment(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  psVar20 = (short *)uVar13;
  uVar5 = Race_GetLapCountForMode(*(undefined4 *)(psVar20 + 10));
  cVar6 = RivalRec_GetTeam(uVar13);
  iVar19 = -1;
  if (cVar6 == '\n') {
    iVar12 = 0x7b;
    iVar19 = 0x3e;
  }
  else if (cVar6 == '\t') {
    iVar12 = 0x7a;
    iVar19 = 0x42;
  }
  else if (cVar6 == '\b') {
    iVar12 = 0x79;
    iVar19 = 0x43;
  }
  else if (cVar6 == '\a') {
    iVar12 = 0x78;
    iVar18 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x20);
      Rival_GetRecord(aiStack_90,iVar18);
      if (iVar3 == aiStack_90[0]) {
        iVar19 = iVar18 + 0x45;
        break;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < 0x14);
  }
  else if (cVar6 == '\x04') {
    iVar12 = 0x77;
    iVar19 = 0x3f;
  }
  else if (cVar6 == '\x03') {
    iVar12 = 0x76;
    iVar19 = 0x41;
  }
  else {
    iVar12 = iVar19;
    if (cVar6 == '\x02') {
      iVar12 = 0x75;
      iVar19 = 0x44;
    }
  }
  if (lVar14 == 1) {
    iVar19 = *psVar20 + 0x59;
  }
  if (iVar12 != -1) {
    MenuWnd_DrawTextId(200,0x25,2,iVar12);
  }
  if (iVar19 == -1) {
    iVar19 = UiMgr_FindLayout(200);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar19].layout,0x10,8,extraout_a3_lo_00);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    iVar12 = UiMgr_FindLayout(200);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar12].layout,0x10,8,extraout_a3_lo);
    iVar12 = UiMgr_FindLayout(200);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar12].layout,0x10,0x16,iVar19);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
  }
  uVar17 = MenuText_CarNameOrMaker(uVar4,0xfffffffffffffffd);
  MenuWnd_DrawText(200,0x27,uVar17);
  uVar17 = MenuText_CarGrade(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  MenuWnd_DrawTextId(200,0x28,4,uVar17);
  uVar17 = MenuText_CarShortName(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  MenuWnd_DrawText(200,0x29,uVar17);
  MenuWnd_DrawTextId(200,0x26,4,0x292);
  MenuWnd_DrawTextId(200,0x2a,4,0x294);
  MenuWnd_DrawTextId(200,0x2b,4,0x297);
  MenuWnd_DrawTextId(200,0x2c,4,0x295);
  MenuWnd_DrawTextId(200,0x2d,4,0x296);
  MenuWnd_DrawTextId(200,0x2e,4,0x298);
  if (lVar14 == 1) {
    MenuWnd_DrawTextId(200,0x2f,4,0x299);
  }
  MenuWnd_DrawTextId(200,0x30,4,0x29a);
  MenuWnd_DrawTextId(200,0x31,4,0x29b);
  MenuWnd_DrawLabel(200,0x32,0x293,uVar1,uVar2);
  uVar7 = MenuText_CarName(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
  MenuWnd_DrawLabel(200,0x33,(uVar7 & 0xff) + 0x5d);
  if (lVar15 < 1) {
    MenuWnd_DrawLabel(200,0x34,0x26,0);
  }
  else {
    cVar6 = MenuText_RivalCarSpec(*(undefined4 *)(param_1 + 0x20),0xfffffffffffffffd);
    if (cVar6 == '\a') {
      MenuWnd_DrawLabel(200,0x34,0x18,lVar15,0);
    }
    else {
      MenuWnd_DrawLabel(200,0x34,0x17,lVar15,0);
    }
  }
  if (iVar9 < 1) {
    MenuWnd_DrawLabel(200,0x35,0x27,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(200,0x35,0x19,iVar9,0,0,uVar10,0);
  }
  if (lVar16 < 1) {
    MenuWnd_DrawLabel(200,0x36,0x28,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(200,0x36,0x1a,(int)lVar16 / 10,(int)lVar16 % 10,0,0,uVar11);
  }
  if (iVar8 < 1) {
    MenuWnd_DrawLabel(200,0x37,0x25,0);
  }
  else {
    MenuWnd_DrawLabel(200,0x37,0x16,iVar8,0);
  }
  if (lVar14 == 1) {
    uVar17 = MsgId_TeamName(*psVar20);
    MenuWnd_DrawLabel(200,0x38,uVar17);
  }
  uVar17 = MsgId_ForOption(uVar5);
  uVar17 = MsgId_ForSlot(uVar17,0);
  MenuWnd_DrawLabel(200,0x39,uVar17);
  lVar14 = RivalRec_IsBelowMax(uVar13);
  uVar13 = 0x4b;
  if (lVar14 == 0) {
    uVar13 = 0x4c;
  }
  MenuWnd_DrawLabel(200,0x3a,uVar13);
  iVar9 = UiMgr_FindLayout(200);
  UiElem_GetRect(&g_UiMgr->slots[iVar9].layout,auStack_40,0x3d);
  iStack_34 = iStack_34 + *(int *)(param_1 + 0x30) * -0x16;
  uVar13 = MsgId_RivalProfile(*(undefined4 *)(param_1 + 0x20));
  UiText_DrawById(auStack_40,uVar13);
  return;
}

// 0x00237210  size 0x3bc
void ScrCareer_Draw_NoData_7210(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  MenuWnd_DrawLabel(0xc6,0x6e,0x3c,*(int *)(param_1 + 0x1c) + 1,*(undefined4 *)(param_1 + 0x10));
  iVar5 = *(int *)(param_1 + 0x10);
  iVar8 = (iVar5 + (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x28))) % iVar5;
  iVar7 = 0;
  puVar6 = &DAT_0032b510;
  while( true ) {
    iVar5 = iVar5 + -1;
    if (8 < iVar5) {
      iVar5 = 9;
    }
    if (iVar5 < iVar7) {
      return;
    }
    if (iVar7 == 9) {
      iVar8 = param_2;
    }
    if (iVar8 == -1) break;
    iVar5 = *(int *)(param_1 + iVar8 * 4 + 0x38);
    MenuWnd_DrawLabel(0xc6,*puVar6,0x3a,iVar5);
    iVar9 = iVar5 * 4;
    iVar2 = Profile_Get(0);
    if (*(int *)(iVar2 + iVar9 + 0x37b0) == 1) {
      uVar4 = MsgId_RivalNickname(iVar5);
      MenuWnd_DrawText(0xc6,puVar6[1],uVar4);
      uVar3 = *(uint *)(param_1 + 8);
    }
    else {
      MenuWnd_DrawText(0xc6,puVar6[1],0x5c);
      uVar3 = *(uint *)(param_1 + 8);
    }
    if (uVar3 < 0xd) {
      uVar1 = (undefined2)iVar5;
                    /* WARNING: Switch is manually overridden */
      switch(uVar3) {
      default:
        iVar2 = RivalDb_Get(uVar1);
        uVar4 = Race_GetLapCountForMode(*(undefined4 *)(iVar2 + 0x14));
        uVar4 = MsgId_ForOption(uVar4);
        uVar4 = MsgId_ForSlot(uVar4,0);
        MenuWnd_DrawText(0xc6,puVar6[2],uVar4);
        break;
      case 8:
      case 9:
        iVar2 = Profile_Get(0);
        if (*(short *)(iVar2 + iVar5 * 2 + 0x3fc4) < 1) {
          MenuWnd_DrawText(0xc6,puVar6[3],0x5b);
        }
        else {
          MenuWnd_DrawText(0xc6,puVar6[3],0xd9);
        }
        break;
      case 10:
        iVar2 = Profile_Get(0);
        if (*(int *)(iVar2 + iVar9 + 0x37b0) == 1) {
          uVar4 = RivalDb_Get(uVar1);
          uVar4 = RivalRec_GetCarId(uVar4);
          uVar4 = MenuText_CarShortName(uVar4,0xffffffffffffffff);
          MenuWnd_DrawText(0xc6,puVar6[3],uVar4);
        }
        else {
          MenuWnd_DrawText(0xc6,puVar6[3],0x5b);
        }
        break;
      case 0xb:
        iVar2 = Profile_Get(0);
        if (*(int *)(iVar2 + iVar9 + 0x37b0) == 1) {
          uVar4 = RivalDb_Get(uVar1);
          uVar1 = RivalRec_GetId(uVar4);
          uVar4 = MsgId_TeamName(uVar1);
          MenuWnd_DrawText(0xc6,puVar6[2],uVar4);
        }
        else {
          MenuWnd_DrawText(0xc6,puVar6[3],0x5b);
        }
      }
    }
    iVar2 = Profile_Get(0);
    if (*(short *)(iVar2 + iVar5 * 2 + 0x3fc4) < 1) {
      iVar5 = UiMgr_FindLayout(0xc6);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)(int)puVar6[4],8,extraout_a3_lo_00);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      if ((*(int *)(param_1 + 0x82c) == 0) || (*(int *)(param_1 + 0x824) == 0)) {
        iVar5 = UiMgr_FindLayout(0xc6);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,(long)(int)puVar6[4],8,extraout_a3_lo);
      }
      iVar5 = *(int *)(param_1 + 0x10);
    }
    iVar8 = (iVar8 + 1) % iVar5;
    puVar6 = puVar6 + 6;
    iVar7 = iVar7 + 1;
  }
  return;
}

// 0x002375d0  size 0x170
/* entry 6 of draw table 0x32b4f0 used by ScrRace_Draw_RivalInfo */

void ScrRace_Draw_RivalInfo_Draw6(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  byte extraout_a3_lo;
  
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0x810);
  iVar1 = *(int *)(iVar4 + 0x828);
  *(undefined4 *)(iVar4 + 0x828) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar3 = MenuWnd_DrawFooter(0x57,iVar2 != 1,0x36ea88);
  if (*(int *)(iVar4 + 0x82c) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(iVar4 + 0x82c) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar4 + 0x824) = 0;
  }
  ScrCareer_Draw_RivalBattle(param_1);
  iVar2 = UiMgr_FindLayout(0xd1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xd2);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x26,8,extraout_a3_lo);
  iVar2 = UiMgr_FindLayout(0xd2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00237740  size 0x7cc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of ScrRace_Draw_RivalInfo; on-screen text/callee hint "CareerDrawNoDat" (was
   ScrScrCareerDrawNoData6ac0_Exit) */

void ScrRace_Draw_RivalInfo_Draw5_CareerDrawNoDat(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  int *piVar12;
  uint uVar13;
  
  iVar11 = (int)param_1;
  iVar5 = 0;
  uVar9 = RivalDb_Get(*(undefined2 *)(iVar11 + 0x20));
  bVar4 = false;
  if (*(int *)(iVar11 + 0x18) == 1) {
    iVar5 = *(int *)(iVar11 + 0x808) + 4;
  }
  else {
    if (*(int *)(iVar11 + 0x18) != 0) {
      iVar8 = *(int *)(iVar11 + 0x828);
      goto LAB_0023779c;
    }
    iVar5 = *(int *)(iVar11 + 0x80c);
  }
  iVar8 = *(int *)(iVar11 + 0x828);
LAB_0023779c:
  *(undefined4 *)(iVar11 + 0x828) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(iVar11 + 0x814);
  }
  else {
    uVar6 = UiRes_GetLayoutData(0x3af);
    iVar8 = UiMgr_FindLayout(0xd1);
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
    pUVar1[iVar8].layout.unk_31c = uVar6;
    pUVar1[iVar8].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x3b0);
    iVar8 = UiMgr_FindLayout(0xd1);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar7;
    pUVar1[iVar8].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x3db);
    iVar8 = UiMgr_FindLayout(0xd1);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x3dc);
    iVar8 = UiMgr_FindLayout(0xd1);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x350 = 1;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x3b1);
    iVar8 = UiMgr_FindLayout(0xd2);
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
    pUVar1[iVar8].layout.unk_31c = uVar6;
    pUVar1[iVar8].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x3b2);
    iVar8 = UiMgr_FindLayout(0xd2);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar7;
    pUVar1[iVar8].layout.animState = 1;
    Menu_ClearSlot(0);
    iVar8 = *(int *)(iVar11 + 0x814);
  }
  if (iVar8 == 4) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd1,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xd2,0);
    if (bVar2 || bVar3) {
      bVar4 = true;
    }
    else {
      *(undefined4 *)(iVar11 + 0x824) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar11 + 0x824) = 0;
  }
  if (*(int *)(iVar11 + 0x82c) != 0) {
    if (*(int *)(iVar11 + 0x81c) == 3) {
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xd1,1);
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xd2,1);
      if (!bVar4 && !bVar2) {
        *(undefined4 *)(iVar11 + 0x82c) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar11 + 0x82c) = 0;
    }
    bVar4 = true;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0xd1,*(undefined4 *)(&DAT_0032b6b0 + iVar5 * 4),0,0);
    if (*(int *)(iVar11 + 0x18) == 0) {
      UiLayout_UpdateAnimById((UiLayout *)0xd1,2);
      iVar5 = UiMgr_FindLayout(0xd1);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
      }
      iVar5 = UiMgr_FindLayout(0xd1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x25,8,extraout_a3_lo);
    }
    else {
      UiLayout_UpdateAnimById((UiLayout *)0xd1,3);
      iVar5 = UiMgr_FindLayout(0xd1);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
      }
      iVar5 = UiMgr_FindLayout(0xd1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x24,8,extraout_a3_lo_00);
    }
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  lVar10 = RivalRec_IsBelowMax(uVar9);
  if (lVar10 == 0) {
    uVar6 = 2;
  }
  else {
    uVar6 = 1;
  }
  iVar5 = *(int *)(iVar11 + 0x80c);
  iVar11 = *(int *)(iVar11 + 0x808);
  uVar13 = 0;
  piVar12 = &DAT_0032b6d0;
  do {
    if (((uVar6 | 1 << (iVar5 + 2U & 0x1f) | 1 << (iVar11 + 6U & 0x1f)) & 1 << (uVar13 & 0x1f)) == 0
       ) {
      iVar8 = UiMgr_FindLayout(0xd1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar12,8,extraout_a3_lo_06);
    }
    else if (!bVar4) {
      iVar8 = UiMgr_FindLayout(0xd1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar8].layout,(long)*piVar12,8,extraout_a3_lo_01);
    }
    uVar13 = uVar13 + 1;
    piVar12 = piVar12 + 1;
  } while ((int)uVar13 < 8);
  ScrCareer_Draw_RivalBattle(param_1);
  iVar5 = UiMgr_FindLayout(0xd1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,7,8,extraout_a3_lo_02);
  iVar5 = UiMgr_FindLayout(0xd1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,2,8,extraout_a3_lo_03);
  iVar5 = UiMgr_FindLayout(0xd1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x23,8,extraout_a3_lo_04);
  iVar5 = UiMgr_FindLayout(0xd1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xd2);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x26,8,extraout_a3_lo_05);
  iVar5 = UiMgr_FindLayout(0xd2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00237f10  size 0x1b8
/* state of ScrRace_Draw_RivalInfo; on-screen text/callee hint "CareerDrawNoDat" (was
   ScrScrCareerDrawNoData6ac0_Update) */

void ScrRace_Draw_RivalInfo_Draw4_CareerDrawNoDat(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar4 = *(int *)(iVar7 + 0x828);
  *(undefined4 *)(iVar7 + 0x828) = 0;
  if (iVar4 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar6 = MenuWnd_DrawFooter(0x2a0,*(undefined4 *)(iVar7 + 0x18),0x36ea80);
  if (*(int *)(iVar7 + 0x82c) != 0) {
    if (lVar6 == 2) {
      MenuWnd_RequestRedraw();
      iVar4 = *(int *)(iVar7 + 0x81c);
    }
    else {
      iVar4 = *(int *)(iVar7 + 0x81c);
    }
    if (iVar4 == 3) {
      *(undefined4 *)(iVar7 + 0x82c) = 0;
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xc8,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xc7,2);
      if ((!bVar2 && !bVar3) && (lVar6 == 3)) {
        *(undefined4 *)(iVar7 + 0x82c) = 0;
      }
    }
  }
  if (lVar6 == 2) {
    *(undefined4 *)(iVar7 + 0x824) = 0;
  }
  iVar4 = UiMgr_FindLayout(199);
  pUVar1 = g_UiMgr->slots;
  piVar5 = (int *)UiRes_GetLayoutData(0x245);
  UiLayout_PlayAnim(&pUVar1[iVar4].layout,piVar5);
  ScrCareer_Draw_NoData_6ac0(param_1);
  iVar4 = UiMgr_FindLayout(199);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(200);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xc6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

