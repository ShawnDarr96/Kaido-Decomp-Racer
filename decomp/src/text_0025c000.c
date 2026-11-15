// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0025c000 - 0x00260000
#include "ghidra_types.h"

// 0x0025c5d0  size 0x16c
void ScrGarage_Draw_ColourSchemeChanged(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1;
  iVar1 = puVar6[0x17];
  puVar6[0x17] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(0);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  if (puVar6[0x18] != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      puVar6[0x18] = 0;
    }
  }
  if (lVar3 == 2) {
    puVar6[0x16] = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar1 = puVar6[1];
  if (iVar1 == 0x19) {
    MenuWnd_DrawLabel(5,0x1c,0x2e8);
    uVar2 = *puVar6;
  }
  else {
    if (iVar1 == 0x1a) {
      MenuWnd_DrawLabel(5,0x1c,0x2c7,0x98f,0xffffffffffffffff);
    }
    else {
      uVar4 = maybe_CarModel_IsBossCar(iVar1,puVar6[4]);
      uVar5 = Msg_PartInfo(uVar4);
      uVar4 = Msg_MakerName(uVar4);
      MenuWnd_DrawLabel(5,0x1c,0x2c7,uVar5,uVar4);
    }
    uVar2 = *puVar6;
  }
  lVar3 = maybe_CarSlot_IsSpecial(puVar6[1],uVar2);
  if (lVar3 == 1) {
    Menu_DrawFrame(&g_MenuMgr->field_0x654);
  }
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025c740  size 0x16c
void ScrGarage_Draw_ColourSchemeChanged_c740(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1;
  iVar1 = puVar6[0x17];
  puVar6[0x17] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(0);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  if (puVar6[0x18] != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      puVar6[0x18] = 0;
    }
  }
  if (lVar3 == 2) {
    puVar6[0x16] = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar1 = puVar6[1];
  if (iVar1 == 0x19) {
    MenuWnd_DrawLabel(5,0x1c,0x2e8);
    uVar2 = *puVar6;
  }
  else {
    if (iVar1 == 0x1a) {
      MenuWnd_DrawLabel(5,0x1c,0x2c3,0x98f,0xffffffffffffffff);
    }
    else {
      uVar4 = maybe_CarModel_IsBossCar(iVar1,puVar6[4]);
      uVar5 = Msg_PartInfo(uVar4);
      uVar4 = Msg_MakerName(uVar4);
      MenuWnd_DrawLabel(5,0x1c,0x2c3,uVar5,uVar4);
    }
    uVar2 = *puVar6;
  }
  lVar3 = maybe_CarSlot_IsSpecial(puVar6[1],uVar2);
  if (lVar3 == 1) {
    Menu_DrawFrame(&g_MenuMgr->field_0x654);
  }
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025c8b0  size 0x124
void ScrGarage_Draw_Equip(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1;
  iVar1 = puVar5[0x17];
  puVar5[0x17] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,puVar5[9],0x36ec18);
  if (puVar5[0x18] != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      puVar5[0x18] = 0;
    }
  }
  if (lVar2 == 2) {
    puVar5[0x16] = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  uVar3 = maybe_CarModel_IsBossCar(puVar5[1],puVar5[4]);
  uVar4 = Msg_PartInfo(uVar3);
  uVar3 = Msg_MakerName(uVar3);
  MenuWnd_DrawLabel(5,0x1c,0x2c6,uVar4,uVar3);
  lVar2 = maybe_CarSlot_IsSpecial(puVar5[1],*puVar5);
  if (lVar2 == 1) {
    Menu_DrawFrame(&g_MenuMgr->field_0x654);
  }
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025c9e0  size 0x16c
void ScrGarage_Draw_ChangeColourScheme(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1;
  iVar1 = puVar6[0x17];
  puVar6[0x17] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetItemVisible(0);
    MenuWnd_SetHelpText(2);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,puVar6[9],0x36ec10);
  if (puVar6[0x18] != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      puVar6[0x18] = 0;
    }
  }
  if (lVar3 == 2) {
    puVar6[0x16] = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar1 = puVar6[1];
  if (iVar1 == 0x19) {
    MenuWnd_DrawLabel(5,0x1c,0x2e7);
    uVar2 = *puVar6;
  }
  else {
    if (iVar1 == 0x1a) {
      MenuWnd_DrawLabel(5,0x1c,0x2c2,0x98f,0xffffffffffffffff);
    }
    else {
      uVar4 = maybe_CarModel_IsBossCar(iVar1,puVar6[4]);
      uVar5 = Msg_PartInfo(uVar4);
      uVar4 = Msg_MakerName(uVar4);
      MenuWnd_DrawLabel(5,0x1c,0x2c2,uVar5,uVar4);
    }
    uVar2 = *puVar6;
  }
  lVar3 = maybe_CarSlot_IsSpecial(puVar6[1],uVar2);
  if (lVar3 == 1) {
    Menu_DrawFrame(&g_MenuMgr->field_0x654);
  }
  maybe_PartShop_Draw(param_1);
  return;
}

// 0x0025cb50  size 0x78
/* state of MenuPage29; on-screen text/callee hint "ChangeColourScheme" (was
   ScrChangeColourScheme_Enter) */

void maybe_PageBodyShop_State3_ChangeColourScheme(undefined4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  maybe_PartShop_Draw();
  if (param_1[1] == 0x19) {
    uVar2 = 0x2e6;
  }
  else if (param_1[1] == 0x21) {
    uVar2 = 0x2d9;
  }
  else {
    uVar2 = 0x2be;
  }
  MenuWnd_SetTitle(3,uVar2);
  lVar1 = maybe_CarSlot_IsSpecial(param_1[1],*param_1);
  if (lVar1 == 1) {
    Menu_DrawFrame(&g_MenuMgr->field_0x654);
  }
  return;
}

// 0x0025cbd0  size 0x434
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Engine(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *unaff_s1_lo;
  int unaff_s2_lo;
  int unaff_s3_lo;
  undefined4 *puVar7;
  int iVar8;
  
  iVar2 = maybe_MenuText_CarSpecGrade(0xffffffffffffffff,0);
  iVar8 = *(int *)(param_1 + 4);
  if (iVar8 < 4) {
    unaff_s2_lo = iVar8 + 0x2f1;
    unaff_s1_lo = (undefined4 *)&DAT_0032cd70;
    unaff_s3_lo = iVar8;
  }
  else if (iVar8 < 8) {
    unaff_s1_lo = &DAT_0032cd90;
    unaff_s2_lo = iVar8 + 0x2e9;
    unaff_s3_lo = iVar8 + -4;
  }
  iVar8 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar8 != 0) {
    iVar8 = UiMgr_FindLayout(0x4d);
    pUVar1 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(0x118);
    UiLayout_IsAnimDone(&pUVar1[iVar8].layout,2,(&DAT_0032cdb0)[iVar2],uVar6,1);
    uVar3 = UiRes_GetLayoutData(0x15d);
    iVar8 = UiMgr_FindLayout(0x4d);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x31c = uVar3;
    pUVar1[iVar8].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x15e);
    iVar8 = UiMgr_FindLayout(0x4d);
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
    *(undefined4 *)&pUVar1[iVar8].layout.field_0x330 = uVar3;
    pUVar1[iVar8].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x4d,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x4d), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x4d,*(undefined4 *)(&DAT_0032ce90 + unaff_s3_lo * 4),1,0);
  }
  MenuWnd_DrawText(0x4c,0x32,0x980);
  MenuWnd_DrawText(0x4c,0x33,0x981);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentPartSlot(uVar6,0);
  uVar6 = Msg_MakerInfo(uVar6);
  MenuWnd_DrawText(0x4c,0x38,uVar6);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetCurrentPartSlot(uVar6,2);
  uVar6 = Msg_MakerInfo(uVar6);
  MenuWnd_DrawText(0x4c,0x39,uVar6);
  MenuWnd_DrawText(0x4d,0x1d,*unaff_s1_lo);
  MenuWnd_DrawText(0x4d,0x1e,unaff_s1_lo[1]);
  MenuWnd_DrawText(0x4d,0x1f,unaff_s1_lo[2]);
  MenuWnd_DrawText(0x4d,0x20,unaff_s1_lo[3]);
  MenuWnd_DrawText(0x4c,0x37,0x9bc);
  lVar5 = MenuText_CarFullName(0xffffffffffffffff,0);
  iVar8 = 0;
  puVar7 = &DAT_0032cdb0;
  do {
    if ((lVar5 == 0x11) || (iVar2 != iVar8)) {
      iVar4 = UiMgr_FindLayout(0x4d);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,*puVar7,8);
    }
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 < 4);
  iVar8 = UiMgr_FindLayout(0x4c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  UiLayout_UpdateAnimById(0x4d,2);
  iVar8 = UiMgr_FindLayout(0x4d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar8].layout);
  MenuWnd_SetTitle(3,unaff_s2_lo);
  return;
}

// 0x0025d010  size 0x458
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_SportsTyres(int param_1)

{
  short sVar1;
  UiLayoutSlot *pUVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
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
  
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar10 = *(int *)(param_1 + 4) + -0x14;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar9 != 0) {
    uVar3 = UiRes_GetLayoutData(0x127);
    iVar9 = UiMgr_FindLayout(0x60);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x31c == 0) {
      pUVar2[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x31c == 0) {
      pUVar2[iVar9].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar9].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x31c = uVar3;
    pUVar2[iVar9].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0x128);
    iVar9 = UiMgr_FindLayout(0x60);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x330 == 0) {
      pUVar2[iVar9].layout.animState = 0;
    }
    else {
      pUVar2[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x320 = 0;
    if (*(int *)&pUVar2[iVar9].layout.field_0x330 == 0) {
      pUVar2[iVar9].layout.animState = 0;
    }
    else {
      pUVar2[iVar9].layout.animState = 1;
    }
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar2[iVar9].layout.field_0x330 = uVar3;
    pUVar2[iVar9].layout.animState = 1;
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x60,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x60), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  MenuWnd_DrawText(0x60,0x2b,0x99e);
  MenuWnd_DrawText(0x60,0x2c,0x99f);
  MenuWnd_DrawText(0x60,0x2d,0x9a0);
  MenuWnd_DrawText(0x60,0x2e,0x9a1);
  uStack_30 = DAT_0032ce50;
  uStack_2c = DAT_0032ce54;
  uStack_28 = DAT_0032ce58;
  uStack_24 = DAT_0032ce5c;
  uStack_20 = DAT_0032ce60;
  uStack_1c = DAT_0032ce64;
  uStack_18 = DAT_0032ce68;
  uStack_14 = DAT_0032ce6c;
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
  iVar9 = 0;
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
    iVar9 = iVar9 + 1;
    psVar8 = psVar8 + 1;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar9 < 2);
  MenuWnd_DrawText(0x60,0x27,uStack_30);
  MenuWnd_DrawText(0x60,0x28,uStack_28);
  MenuWnd_DrawText(0x60,0x29,uStack_20);
  MenuWnd_DrawText(0x60,0x2a,uStack_18);
  MenuWnd_DrawText(0x60,0x23,uStack_2c);
  MenuWnd_DrawText(0x60,0x24,uStack_24);
  MenuWnd_DrawText(0x60,0x25,uStack_1c);
  MenuWnd_DrawText(0x60,0x26,uStack_14);
  MenuWnd_DrawText(0x4c,0x37,0x9bf);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x60,*(undefined4 *)(&DAT_0032ce70 + iVar10 * 4),1,0);
  }
  iVar9 = UiMgr_FindLayout(0x60);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar9].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032ce80 + iVar10 * 4));
  return;
}

// 0x0025d480  size 0xea0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Reinforcement(int *param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int unaff_s0_lo;
  undefined8 uVar9;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*param_1 == 3) {
    ScrGarage_Draw_SportsTyres();
    return;
  }
  uVar9 = 1;
  if (param_1[0x14] != 0) {
    iVar6 = param_1[1];
    if (iVar6 == 4) {
      uVar9 = 3;
    }
    else if (iVar6 == 0x19) {
      uVar9 = 2;
    }
    else if (iVar6 == 0) {
      uVar9 = 2;
    }
  }
  iVar6 = param_1[0x17];
  param_1[0x17] = 0;
  if (iVar6 != 0) {
    iVar6 = *param_1;
    if (iVar6 == 5) {
      uVar5 = UiRes_GetLayoutData(0x156);
      iVar6 = UiMgr_FindLayout(0x4c);
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
      uVar5 = UiRes_GetLayoutData(0x157);
      iVar6 = UiMgr_FindLayout(0x4c);
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
      uVar5 = UiRes_GetLayoutData(0x158);
      iVar6 = UiMgr_FindLayout(0x4c);
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
    }
    else if (iVar6 == 2) {
      uVar5 = UiRes_GetLayoutData(0x154);
      iVar6 = UiMgr_FindLayout(0x4c);
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
      uVar5 = UiRes_GetLayoutData(0x155);
      iVar6 = UiMgr_FindLayout(0x4c);
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
    }
    else if (iVar6 == 1) {
      uVar5 = UiRes_GetLayoutData(0x15b);
      iVar6 = UiMgr_FindLayout(0x4c);
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
      uVar5 = UiRes_GetLayoutData(0x15c);
      iVar6 = UiMgr_FindLayout(0x4c);
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
    }
    else if (iVar6 == 0) {
      uVar5 = UiRes_GetLayoutData(0x159);
      iVar6 = UiMgr_FindLayout(0x4c);
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
      uVar5 = UiRes_GetLayoutData(0x15a);
      iVar6 = UiMgr_FindLayout(0x4c);
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
      uVar5 = UiRes_GetLayoutData(0x177);
      iVar6 = UiMgr_FindLayout(0x4c);
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
      uVar5 = UiRes_GetLayoutData(0x178);
      iVar6 = UiMgr_FindLayout(0x4c);
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
    }
    Menu_ClearSlot(0);
  }
  lVar7 = UiLayout_UpdateAnimById(0x4c,0);
  if (lVar7 == 0) {
    param_1[0x16] = 0;
  }
  if ((param_1[0x18] != 0) && (lVar7 = UiLayout_UpdateAnimById(0x4c,uVar9), lVar7 == 0)) {
    param_1[0x18] = 0;
  }
  uVar9 = 0x41;
  if ((uint)param_1[1] < 0x1f) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1[1]) {
    default:
      unaff_s0_lo = 0;
      uVar9 = 0x2b7;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      unaff_s0_lo = 1;
      uVar9 = 0x2b8;
      break;
    case 8:
      unaff_s0_lo = 2;
      uVar9 = 0x2b9;
      break;
    case 9:
      unaff_s0_lo = 3;
      uVar9 = 0x2ba;
      break;
    case 10:
      unaff_s0_lo = 4;
      uVar9 = 699;
      break;
    case 0xb:
      unaff_s0_lo = 0;
      uVar9 = 0x2c8;
      break;
    case 0xc:
      unaff_s0_lo = 1;
      uVar9 = 0x2c9;
      break;
    case 0xd:
      unaff_s0_lo = 2;
      uVar9 = 0x2ca;
      break;
    case 0xe:
      unaff_s0_lo = 3;
      uVar9 = 0x2cb;
      break;
    case 0xf:
      unaff_s0_lo = 4;
      uVar9 = 0x2cc;
      break;
    case 0x10:
      unaff_s0_lo = 5;
      uVar9 = 0x2cd;
      break;
    case 0x11:
      unaff_s0_lo = 6;
      uVar9 = 0x2ce;
      break;
    case 0x12:
      unaff_s0_lo = 0;
      uVar9 = 0x2cf;
      break;
    case 0x13:
      unaff_s0_lo = 1;
      uVar9 = 0x2d0;
      break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      break;
    case 0x18:
      unaff_s0_lo = 0;
      uVar9 = 0x2da;
      break;
    case 0x19:
      unaff_s0_lo = 1;
      uVar9 = 0x2db;
      break;
    case 0x1a:
      unaff_s0_lo = 2;
      uVar9 = 0x2dc;
      break;
    case 0x1b:
      unaff_s0_lo = 3;
      uVar9 = 0x2dd;
      break;
    case 0x1c:
      unaff_s0_lo = 4;
      uVar9 = 0x2de;
      break;
    case 0x1d:
      unaff_s0_lo = 5;
      uVar9 = 0x2df;
      break;
    case 0x1e:
      unaff_s0_lo = 6;
      uVar9 = 0x2e0;
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x4c,*(undefined4 *)(&DAT_0032ce00 + unaff_s0_lo * 4),1,0);
  }
  MenuWnd_DrawText(0x4c,0x37,*(undefined4 *)(&DAT_0032ce20 + *param_1 * 4));
  iVar6 = *param_1;
  if (iVar6 != 5) {
    if (iVar6 == 2) {
      MenuWnd_DrawText(0x4c,0x32,0x98a);
      MenuWnd_DrawText(0x4c,0x33,0x98b);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,10);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x38,uVar8);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,0xb);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x39,uVar8);
    }
    else if (iVar6 == 1) {
      MenuWnd_DrawText(0x4c,0x32,0x985);
      MenuWnd_DrawText(0x4c,0x33,0x986);
      MenuWnd_DrawText(0x4c,0x34,0x9a2);
      MenuWnd_DrawText(0x4c,0x35,0x9a3);
      MenuWnd_DrawText(0x4c,0x36,0x9a4);
      MenuWnd_DrawText(0x4c,0x3d,0x988);
      MenuWnd_DrawText(0x4c,0x3e,0x989);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,7);
      sVar3 = PartDb_GetInfo(uVar8);
      uStack_10 = DAT_0032ce38;
      uStack_c = DAT_0032ce3c;
      uStack_8 = DAT_0032ce40;
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,5);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x38,uVar8);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,6);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x39,uVar8);
      if (sVar3 == 0x6e) {
        uVar8 = Profile_Get(0);
        uVar8 = Profile_GetCurrentPartSlot(uVar8,7);
        uStack_8 = Msg_MakerInfo(uVar8);
      }
      else if (sVar3 == 0x6b) {
        uVar8 = Profile_Get(0);
        uVar8 = Profile_GetCurrentPartSlot(uVar8,7);
        uStack_c = Msg_MakerInfo(uVar8);
      }
      else if (sVar3 == 0x67) {
        uVar8 = Profile_Get(0);
        uVar8 = Profile_GetCurrentPartSlot(uVar8,7);
        uStack_10 = Msg_MakerInfo(uVar8);
      }
      MenuWnd_DrawText(0x4c,0x3a,uStack_10);
      MenuWnd_DrawText(0x4c,0x3b,uStack_c);
      MenuWnd_DrawText(0x4c,0x3c,uStack_8);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,8);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x3f,uVar8);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,9);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x40,uVar8);
    }
    else if (iVar6 == 0) {
      MenuWnd_DrawText(0x4c,0x32,0x980);
      MenuWnd_DrawText(0x4c,0x33,0x981);
      MenuWnd_DrawText(0x4c,0x34,0x982);
      MenuWnd_DrawText(0x4c,0x35,0x983);
      MenuWnd_DrawText(0x4c,0x36,0x984);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,0);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x38,uVar8);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,2);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x39,uVar8);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,1);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x3a,uVar8);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,3);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x3b,uVar8);
      uVar8 = Profile_Get(0);
      uVar8 = Profile_GetCurrentPartSlot(uVar8,4);
      uVar8 = Msg_MakerInfo(uVar8);
      MenuWnd_DrawText(0x4c,0x3c,uVar8);
    }
    goto LAB_0025e244;
  }
  MenuWnd_DrawText(0x4c,0x32,0x98d);
  lVar7 = maybe_MenuText_CurrentCarSpec(0x19);
  if (lVar7 == 0) {
    MenuWnd_DrawTextId(0x4c,0x33,3,0x98e);
  }
  else {
    MenuWnd_DrawText(0x4c,0x33,0x98e);
  }
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentCar(uVar8);
  uVar4 = CarRec_GetModelId(uVar8);
  lVar7 = CarDb_GetVariant(uVar4);
  if (lVar7 == 1) {
    uVar8 = Profile_Get(0);
    uVar8 = Profile_GetCurrentCar(uVar8);
    cVar2 = CarRec_GetGrade(uVar8);
    if (cVar2 != '\0') goto LAB_0025e0b0;
    MenuWnd_DrawText(0x4c,0x34,0x98f);
  }
  else {
LAB_0025e0b0:
    MenuWnd_DrawTextId(0x4c,0x34,3,0x98f);
  }
  MenuWnd_DrawText(0x4c,0x35,0x991);
  MenuWnd_DrawText(0x4c,0x36,0x992);
  MenuWnd_DrawText(0x4c,0x3d,0x993);
  MenuWnd_DrawText(0x4c,0x3e,0x994);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentPartSlot(uVar8,0xc);
  uVar8 = Msg_MakerInfo(uVar8);
  MenuWnd_DrawText(0x4c,0x38,uVar8);
  MenuWnd_DrawText(0x4c,0x39,0x9b2);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentCar(uVar8);
  cVar2 = CarRec_GetGrade(uVar8);
  if (cVar2 == '\0') {
    MenuWnd_DrawText(0x4c,0x3a,0x9b2);
  }
  else {
    MenuWnd_DrawText(0x4c,0x3a,0x98f);
  }
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentPartSlot(uVar8,0x12);
  uVar8 = Msg_MakerInfo(uVar8);
  MenuWnd_DrawText(0x4c,0x3b,uVar8);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentPartSlot(uVar8,0x11);
  uVar8 = Msg_MakerInfo(uVar8);
  MenuWnd_DrawText(0x4c,0x3c,uVar8);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentPartSlot(uVar8,0x13);
  uVar8 = Msg_MakerInfo(uVar8);
  MenuWnd_DrawText(0x4c,0x3f,uVar8);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentPartSlot(uVar8,0x14);
  uVar8 = Msg_MakerInfo(uVar8);
  MenuWnd_DrawText(0x4c,0x40,uVar8);
LAB_0025e244:
  iVar6 = UiMgr_FindLayout(0x4c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar6].layout);
  MenuWnd_SetTitle(3,uVar9);
  return;
}

// 0x0025e320  size 0x258
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of MenuPage29; on-screen text/callee hint "Reinforcement" (was ScrReinforcement_Enter) */

void maybe_PageBodyShop_State0_Reinforcement(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar2 = param_1[0x17];
  param_1[0x17] = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x11f);
    iVar2 = UiMgr_FindLayout(0x5e);
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
    uVar3 = UiRes_GetLayoutData(0x120);
    iVar2 = UiMgr_FindLayout(0x5e);
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
  lVar4 = UiLayout_UpdateAnimById(0x5e,0);
  if (lVar4 == 0) {
    param_1[0x16] = 0;
  }
  if ((param_1[0x18] != 0) && (lVar4 = UiLayout_UpdateAnimById(0x5e), lVar4 == 0)) {
    param_1[0x18] = 0;
  }
  MenuWnd_DrawText(0x43,0x1a,0x2a1);
  ScrCareer_Draw_Power(*param_1,1);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x5e,*(undefined4 *)(&DAT_0032cdc0 + *param_1 * 4),1,0);
  }
  iVar2 = UiMgr_FindLayout(0x5e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x43);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032cde0 + *param_1 * 4));
  return;
}

// 0x0025e580  size 0x14
/* page identified from its states' on-screen text (N154) */

void maybe_PageBodyShop_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x0025e5a0  size 0xf8
/* page identified from its states' on-screen text (N154) */

void maybe_PageBodyShop_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_maybe_PageBodyShop_State0_Reinforcement_0032cd20)[*(int *)((int)param_1 + 0x4c)])
            (param_1);
  UiLayout_UpdateAnimById(0x42,0);
  iVar1 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle((int)param_1 + 0x48), lVar2 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x0025e6a0  size 0xb8
/* page identified from its states' on-screen text (N154) */

void maybe_PageBodyShop_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x97);
  iVar3 = UiMgr_FindLayout(0x42);
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
  Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11b,2);
  return;
}

// 0x0025e760  size 0x37c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Sell(int *param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar3 = param_1[0x23b];
  param_1[0x23b] = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(0xcb);
    iVar3 = UiMgr_FindLayout(0x4b);
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
    uVar4 = UiRes_GetLayoutData(0xcc);
    iVar3 = UiMgr_FindLayout(0x4b);
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
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x4b,0);
  if (lVar5 == 0) {
    param_1[0x23a] = 0;
  }
  if ((param_1[0x23c] != 0) && (lVar5 = UiLayout_UpdateAnimById(0x4b), lVar5 == 0)) {
    param_1[0x23c] = 0;
  }
  uVar1 = (undefined2)param_1[param_1[10] + 0xc];
  uVar6 = Msg_PartInfo(uVar1);
  uVar7 = Msg_MakerName(uVar1);
  MenuWnd_DrawLabel(0x4b,0x23,0x2b0,uVar6,uVar7);
  MenuWnd_DrawText(0x45,1,0x2a2);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x4a,3,uVar6);
  uVar6 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x4a,4,uVar6);
  uVar6 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x4b,0x22,uVar6);
  MenuWnd_DrawText(0x4b,0x26,1);
  MenuWnd_DrawText(0x4b,0x27,2);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x4b,*(undefined4 *)(&DAT_0036ec80 + *param_1 * 4),1,0);
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar3 = UiMgr_FindLayout(0x4b);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,0x1f,8);
  iVar3 = UiMgr_FindLayout(0x4a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x4b);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  UiLayout_UpdateAnimById(0x42,0);
  iVar3 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x0025eae0  size 0xf2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Sell_eae0(int param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 *puVar14;
  long lVar15;
  UiLayout *pUVar16;
  
  iVar5 = *(int *)(param_1 + 0x8ec);
  iVar13 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  else {
    uVar7 = UiRes_GetLayoutData(0xc5);
    iVar5 = UiMgr_FindLayout(0x49);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x31c = uVar7;
    pUVar2[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xc6);
    iVar5 = UiMgr_FindLayout(0x49);
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
    uVar7 = UiRes_GetLayoutData(199);
    iVar5 = UiMgr_FindLayout(0x49);
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
    uVar7 = UiRes_GetLayoutData(200);
    iVar5 = UiMgr_FindLayout(0x49);
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
    uVar7 = UiRes_GetLayoutData(0xc9);
    iVar5 = UiMgr_FindLayout(0x4a);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x31c = uVar7;
    pUVar2[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xca);
    iVar5 = UiMgr_FindLayout(0x4a);
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
    uVar7 = UiRes_GetLayoutData(0xd0);
    iVar5 = UiMgr_FindLayout(0xc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x31c = uVar7;
    pUVar2[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0xd1);
    iVar5 = UiMgr_FindLayout(0xc);
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
    uVar7 = UiRes_GetLayoutData(0xd2);
    iVar5 = UiMgr_FindLayout(0xc);
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
    uVar7 = UiRes_GetLayoutData(0xd3);
    iVar5 = UiMgr_FindLayout(0xc);
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
    Menu_ClearSlot(1);
    MenuWnd_DrawDialogText(0x49,0x32d220,4,0xffffffffffffffff);
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  if (iVar5 == 1) {
    if (*(int *)(param_1 + 0x84) == 0) {
      MenuWnd_SetHelpText(0);
    }
    iVar5 = UiMgr_FindLayout(0xc);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
      pUVar2[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar2[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  lVar15 = 2;
  if (*(int *)(param_1 + 0x84) == 0) {
    lVar15 = MenuWnd_DrawFooter(0x2ab,0xffffffffffffffff,0);
  }
  lVar9 = UiLayout_UpdateAnimById(0x49,0);
  lVar10 = UiLayout_UpdateAnimById(0x4a,0);
  lVar11 = UiLayout_UpdateAnimById(0xc,0);
  if ((lVar11 == 0 && (lVar9 == 0 && lVar10 == 0)) && (lVar15 == 2)) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if (*(int *)(param_1 + 0x8f0) != 0) {
    if (*(int *)(param_1 + 0x84) == 0) {
      if (lVar15 == 2) {
        MenuWnd_RequestRedraw();
      }
      lVar9 = UiLayout_UpdateAnimById(0x49,1);
      lVar10 = UiLayout_UpdateAnimById(0x4a,1);
      lVar11 = UiLayout_UpdateAnimById(0xc,1);
      if ((lVar11 == 0 && (lVar9 == 0 && lVar10 == 0)) && (lVar15 == 3)) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
    else {
      lVar15 = UiLayout_UpdateAnimById(0x49);
      lVar9 = UiLayout_UpdateAnimById(0x4a,1);
      lVar10 = UiLayout_UpdateAnimById(0xc,1);
      if (lVar10 == 0 && (lVar15 == 0 && lVar9 == 0)) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  uVar12 = Profile_Get(0);
  lVar15 = Garage_FindCar(uVar12);
  MenuWnd_DrawCursor(lVar15 != 1);
  if ((*_g_MenuInput == 1) && (*(int *)(param_1 + 0x84) != 0)) {
    MenuWnd_SetItemState(0xc,*(undefined4 *)(&DAT_0032d230 + *(int *)(param_1 + 0x1c) * 4),0,0);
  }
  MenuWnd_SetItemState(0x49,*(undefined4 *)(&DAT_0032d250 + *(int *)(param_1 + 0x18) * 4),0,1);
  iVar5 = *(int *)(param_1 + 0x84);
  if ((iVar5 != 0) && (iVar5 < 7)) {
    puVar14 = (undefined4 *)(&DAT_0032d280 + iVar5 * 4);
    do {
      iVar6 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar6].layout,*puVar14,8);
      iVar5 = iVar5 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar5 < 7);
  }
  uVar12 = Profile_Get(0);
  iVar5 = Garage_FindCar(uVar12);
  if (iVar5 < 0xc) {
    puVar14 = (undefined4 *)(&DAT_0032d2a0 + iVar5 * 4);
    iVar6 = iVar5;
    do {
      iVar8 = UiMgr_FindLayout(0x49);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar8].layout,*puVar14,8);
      iVar6 = iVar6 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar6 < 0xc);
  }
  if (iVar5 < 0xd) {
    iVar5 = UiMgr_FindLayout(0x49);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,0x37,8);
    iVar5 = UiMgr_FindLayout(0x49);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,0x38,8);
  }
  iVar6 = UiMgr_FindLayout(0xc);
  iVar5 = *(int *)(param_1 + 0x84);
  pUVar16 = &g_UiMgr->slots[iVar6].layout;
  if (iVar5 < 8) {
    UiElem_SetPropFloat(0x41800000,pUVar16,8,2);
    UiElem_SetPropFloat(0x41380000,pUVar16,8,6);
    iVar5 = *(int *)(param_1 + 0x14);
  }
  else {
    UiElem_SetPropFloat((float)iVar13 * (184.0 / (float)iVar5) + 16.0,pUVar16,8,2);
    UiElem_SetPropFloat((7.0 / (float)iVar5) * 11.5,pUVar16,8,6);
    iVar5 = *(int *)(param_1 + 0x14);
  }
  if (iVar5 == 3) {
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    lVar15 = UiLayout_UpdateAnimById(0x49,3);
    if (lVar15 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar5 = UiMgr_FindLayout(0x49);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x348 = 0;
      if (*(int *)&pUVar2[iVar5].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else if (iVar5 == 2) {
    lVar15 = UiLayout_UpdateAnimById(0x49);
    if (lVar15 == 0) {
      Menu_ClearSlot(0);
      Menu_ClearSlot(1);
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar5 = UiMgr_FindLayout(0x49);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar5].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else if (iVar5 == 1) {
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    lVar15 = UiLayout_UpdateAnimById(0xc,3);
    if (lVar15 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar5 = UiMgr_FindLayout(0xc);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x348 = 0;
      if (*(int *)&pUVar2[iVar5].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  else {
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x28);
      goto LAB_0025f0f4;
    }
    lVar15 = UiLayout_UpdateAnimById(0xc);
    if (lVar15 == 0) {
      Menu_ClearSlot(0);
      Menu_ClearSlot(1);
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar5 = UiMgr_FindLayout(0xc);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar5].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar5].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
  }
  iVar5 = *(int *)(param_1 + 0x28);
LAB_0025f0f4:
  uVar1 = *(undefined2 *)(iVar5 * 4 + param_1 + 0x30);
  uVar12 = Profile_Get(0);
  uVar12 = Garage_FindCar(uVar12);
  MenuWnd_DrawLabel(0x49,0x39,0x3b,*(int *)(param_1 + 0x20) + 1,uVar12);
  MenuWnd_DrawText(0x4a,6,0x2a2);
  uVar12 = Profile_Get(0);
  uVar12 = Profile_GetMoney(uVar12);
  MenuWnd_DrawNumber(0x4a,3,uVar12);
  if (*(int *)(param_1 + 0x84) == 0) {
    MenuWnd_DrawNumber(0x4a,4,0);
  }
  else {
    uVar12 = Garage_GetCarPower(uVar1);
    MenuWnd_DrawNumber(0x4a,4,uVar12);
  }
  iVar6 = 0;
  iVar5 = param_1 + iVar13 * 4;
  puVar14 = &DAT_0032d1e0;
  while( true ) {
    iVar13 = *(int *)(param_1 + 0x84);
    if (6 < iVar13) {
      iVar13 = 7;
    }
    if (iVar13 <= iVar6) break;
    uVar1 = *(undefined2 *)(iVar5 + 0x30);
    uVar12 = MsgId_ForGradeShort(*(undefined1 *)(iVar5 + 0x32));
    MenuWnd_DrawText(0xc,*puVar14,uVar12);
    uVar12 = Msg_MakerInfo(uVar1);
    MenuWnd_DrawText(0xc,puVar14[1],uVar12);
    iVar5 = iVar5 + 4;
    puVar14 = puVar14 + 2;
    iVar6 = iVar6 + 1;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar5 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,0x44,8);
    iVar5 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,0x45,8);
    iVar5 = UiMgr_FindLayout(0xc);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  }
  iVar5 = UiMgr_FindLayout(0x49);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  iVar5 = UiMgr_FindLayout(0x4a);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  UiLayout_UpdateAnimById(0x42,0);
  iVar5 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x28) * 4 + param_1 + 0x30);
  iVar5 = Profile_Get(0);
  sVar4 = *(short *)(iVar5 + *(int *)(param_1 + 0x20) * 2 + 0x13ee);
  iVar5 = Profile_Get(0);
  uVar3 = CarRec_GetModelId(iVar5 + sVar4 * 0xcc);
  uVar12 = Maker_GetInfo(uVar1);
  sVar4 = CarDb_FindDefaultPart(uVar3,uVar12,0xffffffffffffffff);
  if (sVar4 == -1) {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x20),0,0xffffffffffffffff,0);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x20),0,sVar4,0);
  }
  return;
}

// 0x0025fa10  size 0x214
void ScrGarage_Draw_Sell_fa10(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if (*(int *)(param_1 + 0x8f0) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    lVar4 = UiLayout_UpdateAnimById(0x45,1);
    lVar5 = UiLayout_UpdateAnimById(0x46,2);
    if ((lVar4 == 0 && lVar5 == 0) && (lVar3 == 3)) {
      *(undefined4 *)(param_1 + 0x8f0) = 0;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x28) * 4 + param_1 + 0x30);
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 8) * 2 + param_1 + 0x8c);
  }
  uVar6 = Msg_PartInfo(uVar1);
  uVar7 = Msg_MakerName(uVar1);
  MenuWnd_DrawLabel(5,0x1c,0x2af,uVar6,uVar7);
  MenuWnd_DrawText(0x45,1,0x2a2);
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetMoney(uVar6);
  MenuWnd_DrawNumber(0x46,3,uVar6);
  uVar6 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x46,4,uVar6);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  UiLayout_UpdateAnimById(0x42,0);
  iVar2 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0x46);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x0025fc30  size 0x654
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Sell_fc30(int *param_1)

{
  undefined2 uVar1;
  UiLayoutSlot *pUVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar4 = param_1[0x23b];
  param_1[0x23b] = 0;
  if (iVar4 != 0) {
    uVar3 = UiRes_GetLayoutData(0x420);
    iVar4 = UiMgr_FindLayout(0x47);
    pUVar2 = g_UiMgr->slots;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x398 = 0;
    if (*(int *)&pUVar2[iVar4].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a8 = uVar3;
    *(undefined4 *)&pUVar2[iVar4].layout.field_0x3a4 = 1;
    uVar3 = UiRes_GetLayoutData(0xc3);
    iVar4 = UiMgr_FindLayout(0x48);
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
    uVar3 = UiRes_GetLayoutData(0xc4);
    iVar4 = UiMgr_FindLayout(0x48);
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
    if (param_1[0x236] == 1) {
      uVar3 = UiRes_GetLayoutData(0x41e);
      iVar4 = UiMgr_FindLayout(0x47);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x374 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x380 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x370 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x380 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x370 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x380 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x378 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x380 = uVar3;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x37c = 1;
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
    }
    iVar4 = UiMgr_FindLayout(0x47);
    pUVar2 = g_UiMgr->slots;
    uVar8 = UiRes_GetLayoutData(0xc2);
    UiLayout_PlayAnim(&pUVar2[iVar4].layout,uVar8);
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x48,0);
  lVar6 = UiLayout_UpdateAnimById(0x47,0);
  lVar7 = UiLayout_UpdateAnimById(0x47,5);
  if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
    param_1[0x23a] = 0;
  }
  if (param_1[0x23c] != 0) {
    if (param_1[0x238] == 4) {
      lVar5 = UiLayout_UpdateAnimById(0x48);
      lVar6 = UiLayout_UpdateAnimById(0x47,2);
      lVar7 = UiLayout_UpdateAnimById(0x47,7);
      if (lVar7 == 0 && (lVar5 == 0 && lVar6 == 0)) {
        param_1[0x23c] = 0;
      }
    }
    else {
      param_1[0x23c] = 0;
    }
  }
  uVar1 = *(undefined2 *)((int)param_1 + param_1[2] * 2 + 0x8c);
  uVar8 = Msg_PartInfo(uVar1);
  uVar9 = Msg_MakerName(uVar1);
  MenuWnd_DrawLabel(0x47,0x1a,0x2ae,uVar8,uVar9);
  MenuWnd_DrawText(0x45,1,0x2a2);
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetMoney(uVar8);
  MenuWnd_DrawNumber(0x46,3,uVar8);
  uVar8 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x46,4,uVar8);
  iVar4 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x47,0x19,(param_1[3] + 1) * iVar4);
  MenuWnd_DrawLabel(0x47,0x1c,0x40,param_1[3] + 1);
  MenuWnd_DrawLabel(0x47,0x1b,0x3a,param_1[param_1[2] + 0xd4]);
  MenuWnd_DrawText(0x48,0xc,1);
  MenuWnd_DrawText(0x48,0xd,2);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x48,*(undefined4 *)(*param_1 * 4 + 0x36ec78),1,0);
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar4 = UiMgr_FindLayout(0x47);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x17,8);
  iVar4 = UiMgr_FindLayout(0x47);
  UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x18,8);
  iVar4 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x47);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x48);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x46);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  UiLayout_UpdateAnimById(0x42,0);
  iVar4 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

