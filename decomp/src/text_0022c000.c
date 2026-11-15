// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0022c000 - 0x00230000
#include "ghidra_types.h"

// 0x0022c1f0  size 0x310
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Continue(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (iVar2 == 0) {
    iVar2 = param_1[0xc];
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x5d);
    iVar2 = UiMgr_FindLayout(2);
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
    uVar3 = UiRes_GetLayoutData(0x5e);
    iVar2 = UiMgr_FindLayout(2);
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
    uVar3 = UiRes_GetLayoutData(0x1d0);
    iVar2 = UiMgr_FindLayout(0x33);
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
    Menu_ClearSlot(0);
    iVar2 = param_1[0xc];
  }
  if ((iVar2 != 0) && (lVar4 = UiLayout_UpdateAnimById(2), lVar4 == 0)) {
    param_1[0xc] = 0;
  }
  lVar4 = UiLayout_UpdateAnimById(2,0);
  if (lVar4 == 0) {
    param_1[10] = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(2,*(undefined4 *)(&DAT_0036e9c8 + *param_1 * 4),1,0);
  }
  uVar5 = Profile_Get(0);
  lVar4 = Profile_GetDay(uVar5);
  if (lVar4 == 0) {
    MenuWnd_DrawTextId(2,0xc,3,0xf9);
  }
  else {
    MenuWnd_DrawText(2,0xc,0xf9);
  }
  MenuWnd_DrawText(2,0xd,0xfa);
  iVar2 = UiMgr_FindLayout(1);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(2);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x0022c500  size 0x14
/* menu page 9 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage09_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0022c520  size 0xc0
/* menu page 9 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage09_Update(undefined8 param_1)

{
  long lVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_MenuScr_Draw_Continue_0032ad80)[*(int *)((int)param_1 + 0x1c)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle((int)param_1 + 0x18), lVar1 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0022c5e0  size 0x118
/* menu page 9 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage09_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x5d);
  iVar3 = UiMgr_FindLayout(2);
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
  uVar2 = UiRes_GetLayoutData(0x5e);
  iVar3 = UiMgr_FindLayout(2);
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

// 0x0022c700  size 0x14
/* menu page 10 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage10_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0022c720  size 0x194
/* menu page 10 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage10_Update(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar1 = param_1[6];
  uVar3 = 0x14c;
  if (param_1[2] != 0) {
    uVar3 = 0x14d;
  }
  param_1[6] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(uVar3,*param_1,0x36e9d8);
  if (param_1[7] != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      param_1[7] = 0;
    }
  }
  if (lVar2 == 2) {
    param_1[5] = 0;
  }
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  UiLayout_UpdateAnimById(0x13,0);
  iVar1 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle(param_1 + 1), lVar2 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0022c8c0  size 0xb4
/* menu page 10 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage10_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (g_MenuMgr->prevScreen == 0x19) {
    uVar2 = UiRes_GetLayoutData(0x41);
    iVar3 = UiMgr_FindLayout(0x13);
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
  return;
}

// 0x0022c980  size 0x19c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_PlayerCar(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  MenuWnd_DrawText(0x2d,0x37,0xeb);
  MenuWnd_DrawText(0x2d,0x39,0xec);
  MenuWnd_DrawText(0x2d,0x3a,0xed);
  MenuWnd_DrawText(0x2d,0x3b,0xee);
  MenuWnd_DrawText(0x2d,0x3c,0xef);
  MenuWnd_DrawText(0x2d,0x3d,0xf0);
  MenuWnd_DrawText(0x2d,0x3e,0xf1);
  MenuWnd_DrawText(0x2d,0x3f,0xf2);
  MenuWnd_DrawText(0x2d,0x40,0xf3);
  uVar2 = Profile_Get(0);
  uVar2 = Profile_GetMoney(uVar2);
  MenuWnd_DrawNumber(0x2d,0x38,uVar2);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x2d,*(undefined4 *)(&DAT_0032af00 + *param_1 * 4),1,0);
  }
  iVar1 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x2d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032af30 + *param_1 * 4));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0022cb20  size 0x30
/* screen record 0x327764 */

void PagePlayerCar_Exit(void)

{
  Menu_BlockInput(&g_MenuMgr->field_0x654);
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0022cb50  size 0x188
/* screen record 0x327764 */

void PagePlayerCar_Update(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = Menu_ClampIndex(g_MenuMgr->prevScreen);
  bVar1 = false;
  if (lVar2 == 0) {
    lVar2 = UiLayout_UpdateAnimById(0x2d,3);
    if (lVar2 == 1) {
      bVar1 = true;
    }
  }
  lVar2 = UiLayout_UpdateAnimById(0x2d,0);
  if (lVar2 == 1) {
    bVar1 = true;
  }
  if (!bVar1) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  ScrCareer_Draw_PlayerCar(param_1);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  if ((g_MenuMgr->flags & 4) == 0) {
    lVar2 = Menu_ClampIndex(*(undefined4 *)((int)param_1 + 4));
    bVar1 = false;
    if (lVar2 == 0) {
      lVar2 = UiLayout_UpdateAnimById(0x2d,5);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    if (g_MenuMgr->nextScreen == 0x28) {
      lVar2 = UiLayout_UpdateAnimById(0x2d,2);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    else {
      lVar2 = UiLayout_UpdateAnimById(0x2d,1);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
  }
  return;
}

// 0x0022cce0  size 0x328
/* screen record 0x327764 */

void PagePlayerCar_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x24);
  iVar3 = UiMgr_FindLayout(0x2d);
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
  uVar2 = UiRes_GetLayoutData(0x25);
  iVar3 = UiMgr_FindLayout(0x2d);
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
  uVar2 = UiRes_GetLayoutData(0x26);
  iVar3 = UiMgr_FindLayout(0x2d);
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
  uVar2 = UiRes_GetLayoutData(0x27);
  iVar3 = UiMgr_FindLayout(0x2d);
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
  uVar2 = UiRes_GetLayoutData(0x28);
  iVar3 = UiMgr_FindLayout(0x2d);
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
  Menu_ClearSlot(0);
  if (g_MenuMgr->prevScreen == 0x1f) {
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x116,3);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,0);
  }
  else if (g_MenuMgr->prevScreen != 0x28) {
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x116,3);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,0);
  }
  return;
}

// 0x0022d010  size 0x2f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_SelectCourse(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  int iVar8;
  int iStack_4;
  
  if ((g_MenuMgr->flags & 1) == 0) {
    iVar1 = Msg_ProfileStat(1);
    MenuWnd_DrawCursor(4 < iVar1 + 1);
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x78,*(undefined4 *)(&DAT_0032af60 + param_1[1] * 4),1,0);
  }
  MenuWnd_Update(param_1 + 3,0x78,7,6);
  iVar2 = Msg_ProfileStat(1);
  iVar2 = iVar2 + 1;
  MenuWnd_Clear(&iStack_4,param_1[3],param_1[1],*param_1,iVar2,4);
  iVar1 = (*param_1 + iVar2) - param_1[1];
  iVar8 = 0;
  puVar6 = &DAT_0032af90;
  puVar5 = &DAT_0032afc0;
  while( true ) {
    iVar3 = iVar2;
    if (4 < iVar2) {
      iVar3 = 5;
    }
    if ((iVar3 <= iVar8) ||
       ((iVar1 = iVar1 % iVar2, iVar8 == 4 && (iVar1 = iStack_4, iStack_4 == -1)))) break;
    uVar4 = MsgId_ForSlot(iVar1,1);
    MenuWnd_DrawText(0x78,*puVar6,uVar4);
    iVar3 = UiMgr_FindLayout(0x78);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,*puVar5,0x16,
                      *(undefined4 *)(&DAT_0032af70 + iVar1 * 4));
    iVar1 = iVar1 + 1;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    iVar8 = iVar8 + 1;
  }
  if ((iVar2 < 4) && (iVar2 < 4)) {
    puVar7 = &DAT_0032afa8 + iVar2 * 4;
    puVar5 = &DAT_0032afc0 + iVar2;
    do {
      iVar1 = UiMgr_FindLayout(0x78);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,*(undefined4 *)(puVar7 + -4),8);
      iVar1 = UiMgr_FindLayout(0x78);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar1].layout,*puVar5,8);
      iVar2 = iVar2 + 1;
      puVar7 = puVar7 + 4;
      puVar5 = puVar5 + 1;
    } while (iVar2 < 4);
  }
  MenuWnd_DrawText(7,0x2e,0x354);
  iVar1 = UiMgr_FindLayout(0x78);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  Subtitle_Draw();
  return;
}

// 0x0022d300  size 0x78
/* menu page 12 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage12_Exit(void)

{
  if (g_MenuMgr->nextScreen - 0xd < 2) {
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  else {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0022d380  size 0x114
/* menu page 12 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage12_Update(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = UiLayout_UpdateAnimById(0x78,0);
  lVar3 = UiLayout_UpdateAnimById(0x78,1);
  if (lVar2 == 0 && lVar3 == 0) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  MenuScr_Draw_SelectCourse(param_1);
  MenuWnd_SetTitle(0,0xffffffffffffffff);
  if ((g_MenuMgr->flags & 4) == 0) {
    bVar1 = false;
    if (g_MenuMgr->nextScreen == 0x1b) {
      lVar2 = UiLayout_UpdateAnimById(0x78,*(int *)((int)param_1 + 4) + 2);
      if (lVar2 == 1) {
        bVar1 = true;
      }
    }
    else {
      MenuWnd_SetItemVisible(0);
    }
    if (!bVar1) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
  }
  return;
}

// 0x0022d4a0  size 0x468
/* menu page 12 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage12_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  g_MenuMgr->unk_05a0 = 1;
  g_MenuMgr->unk_05e8 = 1;
  g_MenuMgr->unk_060c = 1;
  g_MenuMgr->unk_0634 = 1;
  g_MenuMgr->unk_0644 = 1;
  if (g_MenuMgr->prevScreen == 0xd) {
    uVar2 = UiRes_GetLayoutData(0x33);
    iVar3 = UiMgr_FindLayout(0x78);
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
  uVar2 = UiRes_GetLayoutData(0x32);
  iVar3 = UiMgr_FindLayout(0x78);
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
  uVar2 = UiRes_GetLayoutData(0x34);
  iVar3 = UiMgr_FindLayout(0x78);
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
  uVar2 = UiRes_GetLayoutData(0x35);
  iVar3 = UiMgr_FindLayout(0x78);
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
  uVar2 = UiRes_GetLayoutData(0x36);
  iVar3 = UiMgr_FindLayout(0x78);
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
  uVar2 = UiRes_GetLayoutData(0x37);
  iVar3 = UiMgr_FindLayout(0x78);
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
  uVar2 = UiRes_GetLayoutData(0x38);
  iVar3 = UiMgr_FindLayout(0x78);
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
  uVar2 = UiRes_GetLayoutData(0x39);
  iVar3 = UiMgr_FindLayout(0x78);
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
  Menu_ClearSlot(0);
  MenuWnd_DrawDialogText(0x78,0x36e9e0,2,0);
  Menu_ClearSlot(0);
  return;
}

// 0x0022d910  size 0xa4
int maybe_Profile_CountNewItems(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = Profile_Get(0);
  iVar1 = iVar1 + 0x531c;
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    if (*(int *)(iVar2 + 0x4678) == -1) break;
    if (*(char *)(iVar2 + 0x4680) == '\x01') {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x28;
  } while (iVar3 < 200);
  iVar2 = 0;
  do {
    if (*(int *)(iVar1 + 0x65b8) == -1) {
      return iVar4;
    }
    if (*(char *)(iVar1 + 0x65c0) == '\x01') {
      iVar4 = iVar4 + 1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x28;
  } while (iVar2 < 200);
  return iVar4;
}

// 0x0022d9c0  size 0x32c
void ScrGarage_Draw_ThereIsNew(void)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int unaff_s2_lo;
  int iVar13;
  
  uVar7 = Profile_Get(0);
  iVar5 = UiMgr_FindLayout(0x12);
  pUVar1 = g_UiMgr->slots;
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x12,0x36,uVar8);
  cVar2 = Profile_GetChapter(uVar7);
  bVar3 = Profile_GetDifficulty(uVar7);
  if (bVar3 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar3) {
    case 0:
      unaff_s2_lo = 0;
      break;
    default:
      unaff_s2_lo = 1;
      break;
    case 3:
      unaff_s2_lo = 2;
      break;
    case 4:
      unaff_s2_lo = 3;
    }
  }
  UiElem_SetPropInt(&pUVar1[iVar5].layout,0x35,0x16,
                    *(undefined4 *)((uint)(cVar2 != '\0') * 4 + unaff_s2_lo * 8 + 0x32b040));
  uVar4 = Profile_GetFlag273d(uVar7);
  uVar8 = MsgId_RivalTrait(uVar4);
  uVar4 = Profile_GetFlag273f(uVar7);
  uVar9 = MsgId_RivalType(uVar4);
  MenuWnd_DrawLabel(0x12,0x2f,0x43,uVar8,uVar9);
  uVar7 = Profile_GetPoints(uVar7);
  MenuWnd_DrawLabel(0x12,0x30,0x3a,uVar7);
  uVar7 = Profile_Get(0);
  lVar10 = Garage_FindCar(uVar7);
  if (0 < lVar10) {
    iVar13 = 0;
    iVar5 = Profile_Get(0);
    iVar5 = iVar5 + 0x531c;
    iVar12 = 0;
    do {
      if ((*(char *)(iVar5 + 0x3868) != '\0') && (*(char *)(iVar5 + 0x3868) != '\x04')) {
        uVar7 = Profile_Get(0);
        iVar6 = Profile_GetDay(uVar7);
        if (iVar6 - *(int *)(iVar5 + 0x3864) < 1) {
          iVar13 = iVar13 + 1;
        }
      }
      iVar12 = iVar12 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar12 < 200);
    if (iVar13 < 2) {
      if (iVar13 == 1) {
        MenuWnd_DrawLabel(0x12,0x31,0x16c,1);
      }
    }
    else {
      MenuWnd_DrawLabel(0x12,0x31,0x149,iVar13);
    }
    lVar10 = maybe_Profile_CountNewItems();
    if (lVar10 < 2) {
      if (lVar10 == 1) {
        MenuWnd_DrawLabel(0x12,0x32,0x16d,1);
      }
    }
    else {
      MenuWnd_DrawLabel(0x12,0x32,0x14a,lVar10);
    }
    iVar13 = 0;
    iVar5 = Profile_Get(0);
    iVar5 = iVar5 + 0x531c;
    iVar12 = 0;
    do {
      iVar11 = 0;
      iVar6 = iVar5;
      do {
        if (*(char *)(iVar6 + 4) == '\x01') {
          iVar13 = iVar13 + 1;
        }
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + 8;
      } while (iVar11 < 200);
      iVar12 = iVar12 + 1;
      iVar5 = iVar5 + 0x644;
    } while (iVar12 < 9);
    if (iVar13 < 2) {
      if (iVar13 == 1) {
        MenuWnd_DrawLabel(0x12,0x33,0x16e,1);
      }
    }
    else {
      MenuWnd_DrawLabel(0x12,0x33,0x14b,iVar13);
    }
  }
  return;
}

// 0x0022dcf0  size 0x288
void ScrRace_Draw_WelcomeToKaido(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [32];
  undefined4 uStack_20;
  
  iVar2 = -1;
  if (*(uint *)(param_1 + 0x2c) < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0x2c)) {
    case 1:
      iVar2 = *(int *)(param_1 + 0x18) + 0xb3;
      break;
    case 2:
      iVar2 = *(int *)(param_1 + 0x18) + 0xb6;
      break;
    case 3:
      iVar2 = *(int *)(param_1 + 0x18) + 0xbf;
      break;
    case 4:
      iVar2 = 0x14f;
      break;
    case 5:
      iVar2 = 0x14e;
      break;
    case 6:
      iVar2 = 0x150;
      break;
    case 7:
      iVar1 = *(int *)(param_1 + 0x24);
      uVar3 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x20),0);
      MenuWnd_DrawLabel(5,0x1c,0x16b,uVar3,iVar1 / 1000,iVar1 % 1000);
    }
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  if (iVar2 == 0xb3) {
    iVar2 = UiMgr_FindLayout(5);
    UiElem_GetRect(&g_UiMgr->slots[iVar2].layout,auStack_40,0x1c);
    uStack_20 = 0x22;
    UiText_DrawById(auStack_40,0xb3);
    iVar2 = -1;
  }
  lVar4 = MenuWnd_DrawFooter(iVar2,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x40) != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
      iVar2 = *(int *)(param_1 + 0x14);
      goto LAB_0022de28;
    }
    if (lVar4 == 3) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
LAB_0022de28:
  if (iVar2 != *(int *)(param_1 + 0x18)) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      MenuWnd_SetHelpText(0);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    }
  }
  if (lVar4 == 2) {
    if ((*(int *)(param_1 + 0x2c) == 4) && (*(int *)(param_1 + 0x38) != 0)) {
      MenuSnd_Stop(5);
      Se_PlayMenu(0xf);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  UiLayout_UpdateAnimById(0x13,0);
  iVar2 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0022df80  size 0x3a8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_KaidoTheatre(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar3 != 0) {
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x12,0);
  lVar5 = UiLayout_UpdateAnimById(0x12,1);
  lVar6 = UiLayout_UpdateAnimById(0x12,2);
  if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    MenuWnd_SetItemVisible(0);
    if (*(int *)(param_1 + 0xc) == 1) {
      lVar4 = UiLayout_UpdateAnimById(0x12,5);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  UiLayout_UpdateAnimById(0x13,0);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 1) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x3f,uVar7,0xdf);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 2) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x40,uVar7,0x102);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 4) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x41,uVar7,0xe5);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 8) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x42,uVar7,0xe3);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x10) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x43,uVar7,0xe6);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x20) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x44,uVar7,0xe7);
  ScrGarage_Draw_ThereIsNew();
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  iVar3 = *(int *)(param_1 + 0xc);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x40) == 0)) {
    bVar1 = false;
  }
  iVar2 = 0;
  if (!bVar1) {
    iVar2 = 3;
  }
  if (iVar2 == 0) {
    MenuWnd_DrawText(0x12,0x45,0xe9);
    MenuWnd_DrawText(0x12,0x46,0xe8);
  }
  else {
    MenuWnd_DrawText(0x12,0x45,0xe8);
    iVar2 = UiMgr_FindLayout(0x12);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x37,8);
    if (iVar3 == 7) {
      iVar3 = 6;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x12,*(undefined4 *)(&DAT_0032b020 + iVar3 * 4),1,0);
  }
  iVar3 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032b000 + *(int *)(param_1 + 0xc) * 4));
  return;
}

// 0x0022e330  size 0x14
/* menu page 13 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage13_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0022e350  size 0xc8
/* menu page 13 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage13_Update(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = UiLayout_UpdateAnimById(0x13,1);
  if (lVar1 == 0) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  (*(code *)(&PTR_ScrCareer_Draw_KaidoTheatre_0032afe0)[*(int *)((int)param_1 + 0x2c)])(param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle((int)param_1 + 0x28), lVar1 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0022e420  size 0x44c
/* menu page 13 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage13_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (g_MenuMgr->prevScreen == 0xe) {
    uVar2 = UiRes_GetLayoutData(0x42);
    iVar3 = UiMgr_FindLayout(0x13);
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
  uVar2 = UiRes_GetLayoutData(0x3c);
  iVar3 = UiMgr_FindLayout(0x12);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
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
  }
  uVar2 = UiRes_GetLayoutData(0x3d);
  iVar3 = UiMgr_FindLayout(0x12);
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
  if (g_MenuMgr->prevScreen != 1) {
    uVar2 = UiRes_GetLayoutData(0x3e);
    iVar3 = UiMgr_FindLayout(0x12);
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
  }
  uVar2 = UiRes_GetLayoutData(0x3f);
  iVar3 = UiMgr_FindLayout(0x12);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
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
  }
  uVar2 = UiRes_GetLayoutData(0x40);
  iVar3 = UiMgr_FindLayout(0x12);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
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
  }
  uVar2 = UiRes_GetLayoutData(0x41);
  iVar3 = UiMgr_FindLayout(0x13);
  pUVar1 = g_UiMgr->slots;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
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
  uVar2 = UiRes_GetLayoutData(0x49);
  iVar3 = UiMgr_FindLayout(0x12);
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
  return;
}

// 0x0022e870  size 0xa18
void ScrRace_Draw_TodayResult(int param_1)

{
  short sVar1;
  int iVar2;
  UiLayoutSlot *pUVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *piVar16;
  int iVar17;
  UiLayout *pUVar18;
  int iVar19;
  int aiStack_d40 [404];
  undefined4 auStack_6f0 [36];
  int aiStack_660 [401];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar7 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar7 != 0) {
    uVar6 = UiRes_GetLayoutData(0x3b9);
    iVar7 = UiMgr_FindLayout(0x14);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = uVar6;
    pUVar3[iVar7].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x3ba);
    iVar7 = UiMgr_FindLayout(0x14);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = uVar6;
    pUVar3[iVar7].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x3bb);
    iVar7 = UiMgr_FindLayout(0x14);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x3bc);
    iVar7 = UiMgr_FindLayout(0x14);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x3bd);
    iVar7 = UiMgr_FindLayout(0x15);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x30c = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x31c == 0) {
      pUVar3[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x31c = uVar6;
    pUVar3[iVar7].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x3be);
    iVar7 = UiMgr_FindLayout(0x15);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar3[iVar7].layout.field_0x330 == 0) {
      pUVar3[iVar7].layout.animState = 0;
    }
    else {
      pUVar3[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar3[iVar7].layout.field_0x330 = uVar6;
    pUVar3[iVar7].layout.animState = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x14,0x36e9e8,2,0);
  }
  lVar8 = UiLayout_UpdateAnimById(0x14,0);
  lVar9 = UiLayout_UpdateAnimById(0x15,0);
  if (lVar8 == 0 && lVar9 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar7 = UiMgr_FindLayout(0x14);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,0x39,8);
      iVar7 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if (iVar7 == *(int *)(param_1 + 0x1c)) {
      iVar7 = UiMgr_FindLayout(0x14);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar7].layout,0x3a,8);
    }
    iVar7 = *(int *)(param_1 + 0x24);
  }
  else {
    lVar8 = UiLayout_UpdateAnimById(0x14);
    lVar9 = UiLayout_UpdateAnimById(0x15,1);
    if (lVar8 == 0 && lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    MenuWnd_DrawCursor(0);
    iVar7 = *(int *)(param_1 + 0x24);
  }
  iVar19 = -1;
  if (iVar7 == 2) {
    lVar8 = UiLayout_UpdateAnimById(0x14);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      iVar7 = UiMgr_FindLayout(0x14);
      pUVar3 = g_UiMgr->slots;
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x334 = 0;
      if (*(int *)&pUVar3[iVar7].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar3[iVar7].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    iVar19 = *(int *)(param_1 + 0x20) + 6;
  }
  else if (iVar7 == 1) {
    lVar8 = UiLayout_UpdateAnimById(0x14,3);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      iVar7 = UiMgr_FindLayout(0x14);
      pUVar3 = g_UiMgr->slots;
      *(undefined4 *)&pUVar3[iVar7].layout.field_0x348 = 0;
      if (*(int *)&pUVar3[iVar7].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar3[iVar7].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    iVar19 = *(int *)(param_1 + 0x20) + -1;
  }
  uVar10 = Profile_Get(0);
  Profile_CopyRivalStates(aiStack_d40,uVar10);
  piVar16 = aiStack_d40;
  piVar14 = aiStack_660;
  iVar7 = 0xca;
  do {
    iVar7 = iVar7 + -1;
    iVar17 = piVar16[1];
    *piVar14 = *piVar16;
    piVar14[1] = iVar17;
    piVar16 = piVar16 + 2;
    piVar14 = piVar14 + 2;
  } while (0 < iVar7);
  puVar13 = auStack_6f0;
  puVar15 = &DAT_0032b0b0;
  iVar7 = 0x23;
  do {
    iVar7 = iVar7 + -1;
    *puVar13 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar13 = puVar13 + 1;
  } while (0 < iVar7);
  iVar7 = *(int *)(param_1 + 0x20);
  iVar17 = 0;
  puVar13 = auStack_6f0;
  do {
    if (iVar17 == 6) {
      if (iVar19 == -1) break;
      iVar7 = iVar19;
    }
    iVar2 = aiStack_660[iVar7 * 2 + 1];
    if (iVar2 == -1) break;
    uVar11 = MsgId_RivalNickname(iVar2);
    MenuWnd_DrawText(0x14,*puVar13,uVar11);
    MenuWnd_DrawTextId(0x14,puVar13[1],5,0x7d);
    iVar5 = Profile_Get(0);
    MenuWnd_DrawLabel(0x14,puVar13[2],0x3a,*(undefined2 *)(iVar5 + iVar2 * 2 + 0x3fc4));
    MenuWnd_DrawTextId(0x14,puVar13[3],4,0x7e);
    iVar5 = Profile_Get(0);
    MenuWnd_DrawLabel(0x14,puVar13[4],0x3a,*(undefined2 *)(iVar5 + iVar2 * 2 + 0x43ac));
    iVar17 = iVar17 + 1;
    iVar7 = iVar7 + 1;
    puVar13 = puVar13 + 5;
  } while (iVar17 < 7);
  MenuWnd_DrawText(0x15,0x1c,0x108);
  MenuWnd_DrawText(0x15,0x20,0x7f);
  uVar4 = Profile_GetFlag273d(uVar10);
  uVar11 = MsgId_RivalTrait(uVar4);
  uVar4 = Profile_GetFlag273f(uVar10);
  uVar12 = MsgId_RivalType(uVar4);
  MenuWnd_DrawLabel(0x15,0x21,0x43,uVar11,uVar12);
  MenuWnd_DrawTextId(0x15,0x22,5,0x82);
  MenuWnd_DrawTextId(0x15,0x23,4,0x83);
  MenuWnd_DrawTextId(0x15,0x26,5,0x80);
  MenuWnd_DrawTextId(0x15,0x27,4,0x81);
  MenuWnd_DrawTextId(0x15,0x28,0,0x84);
  MenuWnd_DrawLabel(0x15,0x24,0x3a,uStack_1c);
  MenuWnd_DrawLabel(0x15,0x25,0x3a,uStack_1a);
  iVar7 = (int)uVar10;
  MenuWnd_DrawLabel(0x15,0x29,0x3a,*(undefined2 *)(iVar7 + 0x5312));
  MenuWnd_DrawLabel(0x15,0x2a,0x3a,*(undefined2 *)(iVar7 + 0x5314));
  sVar1 = *(short *)(iVar7 + 0x5312);
  if (sVar1 == 0) {
    MenuWnd_DrawLabel(0x15,0x2b,0x29,0);
  }
  else {
    MenuWnd_DrawLabel(0x15,0x2b,0x29,(sVar1 * 100) / ((int)sVar1 + (int)*(short *)(iVar7 + 0x5314)))
    ;
  }
  uStack_8 = uRam0036e9f0;
  iVar17 = *(int *)(param_1 + 0x1c) + 6;
  uStack_4 = uRam0036e9f4;
  iVar19 = UiMgr_FindLayout(0x14);
  iVar7 = *(int *)(param_1 + 0x20);
  pUVar18 = &g_UiMgr->slots[iVar19].layout;
  iVar19 = UiMgr_FindLayout(0x14);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar19].layout,uStack_4,8);
  if (iVar17 < 7) {
    UiElem_SetPropFloat(0x41800000,pUVar18,uStack_8,2);
    UiElem_SetPropFloat(0x40e00000,pUVar18,uStack_8,6);
  }
  else {
    UiElem_SetPropFloat((float)iVar7 * (112.0 / (float)iVar17) + 16.0,pUVar18,uStack_8,2);
    UiElem_SetPropFloat((6.0 / (float)iVar17) * 7.0,pUVar18,uStack_8,6);
  }
  UiLayout_UpdateAnimById(0x13,0);
  iVar7 = UiMgr_FindLayout(0x14);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x15);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar7].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0022f290  size 0x138
/* state of MenuPage14; on-screen text/callee hint "KaidoTheatre" (was ScrKaidoTheatre_Update) */

void maybe_PageKaidoTheatre_State1_KaidoTheatre(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(*(int *)(param_1 + 0x18) + 0xba,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x40) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
      iVar1 = *(int *)(param_1 + 0xc);
      goto LAB_0022f30c;
    }
    if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
LAB_0022f30c:
  if (iVar1 != *(int *)(param_1 + 0x18)) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      MenuWnd_SetHelpText(0);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  UiLayout_UpdateAnimById(0x13,0);
  iVar1 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0022f3d0  size 0x388
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_KaidoTheatre_f3d0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar3 != 0) {
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x12,0);
  lVar5 = UiLayout_UpdateAnimById(0x12,1);
  lVar6 = UiLayout_UpdateAnimById(0x12,2);
  if (lVar6 == 0 && (lVar4 == 0 && lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    MenuWnd_SetItemVisible(0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  UiLayout_UpdateAnimById(0x13,0);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 1) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x3f,uVar7,0xdf);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 2) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x40,uVar7,0x102);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 4) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x41,uVar7,0xe5);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 8) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x42,uVar7,0xe3);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x10) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x43,uVar7,0xea);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x20) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x12,0x44,uVar7,0xe7);
  ScrGarage_Draw_ThereIsNew();
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  iVar3 = *(int *)(param_1 + 8);
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x10) != 0) && ((*(uint *)(param_1 + 0x10) & 0x40) == 0)) {
    bVar1 = false;
  }
  iVar2 = 0;
  if (!bVar1) {
    iVar2 = 3;
  }
  if (iVar2 == 0) {
    MenuWnd_DrawText(0x12,0x45,0xe9);
    MenuWnd_DrawText(0x12,0x46,0xe8);
  }
  else {
    MenuWnd_DrawText(0x12,0x45,0xe8);
    iVar2 = UiMgr_FindLayout(0x12);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x37,8);
    if (iVar3 == 7) {
      iVar3 = 6;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x12,*(undefined4 *)(&DAT_0032b090 + iVar3 * 4),1,0);
  }
  iVar3 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032b070 + *(int *)(param_1 + 8) * 4));
  return;
}

// 0x0022f760  size 0x14
/* page identified from its states' on-screen text (N154) */

void maybe_PageKaidoTheatre_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0022f780  size 0xc8
/* page identified from its states' on-screen text (N154) */

void maybe_PageKaidoTheatre_Update(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = UiLayout_UpdateAnimById(0x13,1);
  if (lVar1 == 0) {
    if ((g_MenuMgr->flags & 2) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
    }
  }
  (*(code *)(&PTR_ScrCareer_Draw_KaidoTheatre_f3d0_0032b060)[*(int *)((int)param_1 + 0x2c)])
            (param_1);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar1 = Menu_IsInputIdle((int)param_1 + 0x28), lVar1 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0022f850  size 0x428
/* page identified from its states' on-screen text (N154) */

void maybe_PageKaidoTheatre_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = UiRes_GetLayoutData(0x43);
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
  if (g_MenuMgr->prevScreen != 0xd) {
    iVar4 = UiMgr_FindLayout(0x13);
    uVar2 = g_UiMgr->slots[iVar4].layout.animState;
    while (uVar2 == 1) {
      iVar4 = UiMgr_FindLayout(0x13);
      UiLayout_UpdateAnim(&g_UiMgr->slots[iVar4].layout,1);
      iVar4 = UiMgr_FindLayout(0x13);
      uVar2 = g_UiMgr->slots[iVar4].layout.animState;
    }
    uVar3 = UiRes_GetLayoutData(0x3f);
    iVar4 = UiMgr_FindLayout(0x12);
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
    uVar3 = UiRes_GetLayoutData(0x40);
    iVar4 = UiMgr_FindLayout(0x12);
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
    uVar3 = UiRes_GetLayoutData(0x41);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 1;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar3;
    pUVar1[iVar4].layout.unk_318 = 1;
  }
  uVar3 = UiRes_GetLayoutData(0x3c);
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
  uVar3 = UiRes_GetLayoutData(0x3d);
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
  uVar3 = UiRes_GetLayoutData(0x3e);
  iVar4 = UiMgr_FindLayout(0x12);
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
  return;
}

// 0x0022fc80  size 0x6b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Select_Full(int param_1)

{
  char cVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0x39a);
    iVar3 = UiMgr_FindLayout(0xf1);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x31c == 0) {
      pUVar2[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x31c = uVar4;
    pUVar2[iVar3].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x39b);
    iVar3 = UiMgr_FindLayout(0xf1);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x330 == 0) {
      pUVar2[iVar3].layout.animState = 0;
    }
    else {
      pUVar2[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x330 = uVar4;
    pUVar2[iVar3].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x39c);
    iVar3 = UiMgr_FindLayout(0xf1);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x39d);
    iVar3 = UiMgr_FindLayout(0xf1);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xf1,0x36ea08,2,0);
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    Menu_SetField_18(&g_MenuMgr->field_0x614);
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
  lVar5 = UiLayout_UpdateAnimById(0xf1,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (lVar5 = UiLayout_UpdateAnimById(0xf1), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (lVar5 = MenuMgr_Goto(), lVar5 == 0)) {
    MenuWnd_DrawCursor(1);
    cVar1 = *(char *)(param_1 + 0x20);
  }
  else {
    MenuWnd_DrawCursor(0);
    cVar1 = *(char *)(param_1 + 0x20);
  }
  if (cVar1 == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (*_g_MenuInput == 1) {
      MenuWnd_SetItemState(0xf1,uRam0036ea10,0,0);
    }
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if (*(char *)(param_1 + 0x20) == '\x03') {
      lVar5 = UiLayout_UpdateAnimById(0xf1,2);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
        *(undefined1 *)(param_1 + 0x20) = 0;
        iVar3 = UiMgr_FindLayout(0xf1);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar3].layout.field_0x334 = 0;
        if (*(int *)&pUVar2[iVar3].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar3].layout.field_0x340 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xf1);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
        *(undefined1 *)(param_1 + 0x20) = 0;
        iVar3 = UiMgr_FindLayout(0xf1);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar3].layout.field_0x348 = 0;
        if (*(int *)&pUVar2[iVar3].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar2[iVar3].layout.field_0x354 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar3 = UiMgr_FindLayout(0xf1);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar3].layout,0x10,0x16,
                    *(undefined4 *)(&DAT_0032b1f0 + *(int *)(param_1 + 0x2c) * 4));
  uVar6 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x2c),1);
  MenuWnd_DrawText(0xf1,0x27,uVar6);
  uVar6 = 0x4a;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar6 = 0x49;
  }
  MenuWnd_DrawTextId(0xf1,0x28,1,uVar6);
  if (*(int *)(param_1 + 0x34) == 0) {
    MenuWnd_DrawText(0xf1,0x2b,0x28a);
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    MenuWnd_DrawLabel(0xf1,0x2b,0x28b);
    iVar3 = *(int *)(param_1 + 0x38);
  }
  if (iVar3 == 0) {
    MenuWnd_DrawText(0xf1,0x2c,0x28a);
  }
  else {
    MenuWnd_DrawLabel(0xf1,0x2c,0x28b);
  }
  MenuWnd_DrawText(0xf1,0x21,0x28c);
  MenuWnd_DrawLabel(0xf1,0x24,0x28f,*(undefined4 *)(param_1 + 0x48));
  MenuWnd_DrawText(0xf1,0x22,0x28d);
  MenuWnd_DrawLabel(0xf1,0x25,0x28f,*(undefined4 *)(param_1 + 0x4c));
  MenuWnd_DrawText(0xf1,0x23,0x28e);
  MenuWnd_DrawLabel(0xf1,0x26,0x28f,*(undefined4 *)(param_1 + 0x50));
  iVar3 = UiMgr_FindLayout(0xf1);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  uVar7 = *(uint *)(param_1 + 0x34);
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else if (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) < 1) {
    uVar7 = 10 - uVar7;
  }
  if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(g_MenuMgr->bgMode) {
    case 1:
      g_MenuMgr->unk_0598 = uVar7;
      break;
    case 2:
      g_MenuMgr->unk_05dc = uVar7;
      break;
    case 3:
      g_MenuMgr->unk_05fc = uVar7;
      break;
    case 4:
      g_MenuMgr->unk_0618 = uVar7;
    }
  }
  Menu_SetField_8(&g_MenuMgr->field_0x614,*(undefined4 *)(param_1 + 0x44));
  return;
}

