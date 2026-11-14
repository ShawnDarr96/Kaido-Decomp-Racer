// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0025c000 - 0x00260000
#include "ghidra_types.h"

// 0x0025c5d0  size 0x16c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025c5d0(undefined8 param_1)

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
      uVar4 = scrcareer_sub_002a1600(iVar1,puVar6[4]);
      uVar5 = Msg_PartInfo(uVar4);
      uVar4 = Msg_MakerName(uVar4);
      MenuWnd_DrawLabel(5,0x1c,0x2c7,uVar5,uVar4);
    }
    uVar2 = *puVar6;
  }
  lVar3 = scrcareer_sub_00256210(puVar6[1],uVar2);
  if (lVar3 == 1) {
    Menu_DrawFrame(_g_MenuMgr + 0x654);
  }
  scrgarage_sub_0025a760(param_1);
  return;
}

// 0x0025c740  size 0x16c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025c740(undefined8 param_1)

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
      uVar4 = scrcareer_sub_002a1600(iVar1,puVar6[4]);
      uVar5 = Msg_PartInfo(uVar4);
      uVar4 = Msg_MakerName(uVar4);
      MenuWnd_DrawLabel(5,0x1c,0x2c3,uVar5,uVar4);
    }
    uVar2 = *puVar6;
  }
  lVar3 = scrcareer_sub_00256210(puVar6[1],uVar2);
  if (lVar3 == 1) {
    Menu_DrawFrame(_g_MenuMgr + 0x654);
  }
  scrgarage_sub_0025a760(param_1);
  return;
}

// 0x0025c8b0  size 0x124
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025c8b0(undefined8 param_1)

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
  uVar3 = scrcareer_sub_002a1600(puVar5[1],puVar5[4]);
  uVar4 = Msg_PartInfo(uVar3);
  uVar3 = Msg_MakerName(uVar3);
  MenuWnd_DrawLabel(5,0x1c,0x2c6,uVar4,uVar3);
  lVar2 = scrcareer_sub_00256210(puVar5[1],*puVar5);
  if (lVar2 == 1) {
    Menu_DrawFrame(_g_MenuMgr + 0x654);
  }
  scrgarage_sub_0025a760(param_1);
  return;
}

// 0x0025c9e0  size 0x16c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025c9e0(undefined8 param_1)

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
      uVar4 = scrcareer_sub_002a1600(iVar1,puVar6[4]);
      uVar5 = Msg_PartInfo(uVar4);
      uVar4 = Msg_MakerName(uVar4);
      MenuWnd_DrawLabel(5,0x1c,0x2c2,uVar5,uVar4);
    }
    uVar2 = *puVar6;
  }
  lVar3 = scrcareer_sub_00256210(puVar6[1],uVar2);
  if (lVar3 == 1) {
    Menu_DrawFrame(_g_MenuMgr + 0x654);
  }
  scrgarage_sub_0025a760(param_1);
  return;
}

// 0x0025cb50  size 0x78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_sub_0025cb50(undefined4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  scrgarage_sub_0025a760();
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
  lVar1 = scrcareer_sub_00256210(param_1[1],*param_1);
  if (lVar1 == 1) {
    Menu_DrawFrame(_g_MenuMgr + 0x654);
  }
  return;
}

// 0x0025cbd0  size 0x434
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025cbd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *unaff_s1_lo;
  int unaff_s2_lo;
  int unaff_s3_lo;
  undefined4 *puVar6;
  int iVar7;
  
  iVar1 = scrcareer_sub_0029f470(0xffffffffffffffff,0);
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 < 4) {
    unaff_s2_lo = iVar7 + 0x2f1;
    unaff_s1_lo = (undefined4 *)&DAT_0032cd70;
    unaff_s3_lo = iVar7;
  }
  else if (iVar7 < 8) {
    unaff_s1_lo = &DAT_0032cd90;
    unaff_s2_lo = iVar7 + 0x2e9;
    unaff_s3_lo = iVar7 + -4;
  }
  iVar7 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar7 != 0) {
    iVar3 = UiMgr_FindLayout(0x4d);
    iVar7 = *_g_UiMgr;
    uVar5 = Msg_Get(0x118);
    UiLayout_IsAnimDone(iVar7 + iVar3 * 0x4f4 + 4,2,(&DAT_0032cdb0)[iVar1],uVar5,1);
    uVar2 = Msg_Get(0x15d);
    iVar7 = UiMgr_FindLayout(0x4d);
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
    uVar2 = Msg_Get(0x15e);
    iVar7 = UiMgr_FindLayout(0x4d);
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
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x4d,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x4d), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x4d,*(undefined4 *)(&DAT_0032ce90 + unaff_s3_lo * 4),1,0);
  }
  MenuWnd_DrawText(0x4c,0x32,0x980);
  MenuWnd_DrawText(0x4c,0x33,0x981);
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bbaa0(uVar5,0);
  uVar5 = Msg_MakerInfo(uVar5);
  MenuWnd_DrawText(0x4c,0x38,uVar5);
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bbaa0(uVar5,2);
  uVar5 = Msg_MakerInfo(uVar5);
  MenuWnd_DrawText(0x4c,0x39,uVar5);
  MenuWnd_DrawText(0x4d,0x1d,*unaff_s1_lo);
  MenuWnd_DrawText(0x4d,0x1e,unaff_s1_lo[1]);
  MenuWnd_DrawText(0x4d,0x1f,unaff_s1_lo[2]);
  MenuWnd_DrawText(0x4d,0x20,unaff_s1_lo[3]);
  MenuWnd_DrawText(0x4c,0x37,0x9bc);
  lVar4 = MenuText_CarFullName(0xffffffffffffffff,0);
  iVar7 = 0;
  puVar6 = &DAT_0032cdb0;
  do {
    if ((lVar4 == 0x11) || (iVar1 != iVar7)) {
      iVar3 = UiMgr_FindLayout(0x4d);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,*puVar6,8);
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar7 < 4);
  iVar7 = UiMgr_FindLayout(0x4c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x4d,2);
  iVar7 = UiMgr_FindLayout(0x4d);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,unaff_s2_lo);
  return;
}

// 0x0025d010  size 0x458
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025d010(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
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
  
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(param_1 + 4) + -0x14;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar8 != 0) {
    uVar2 = Msg_Get(0x127);
    iVar8 = UiMgr_FindLayout(0x60);
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
    *(undefined4 *)(iVar8 + 800) = uVar2;
    *(undefined4 *)(iVar8 + 0x31c) = 1;
    uVar2 = Msg_Get(0x128);
    iVar8 = UiMgr_FindLayout(0x60);
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
    *(undefined4 *)(iVar8 + 0x334) = uVar2;
    *(undefined4 *)(iVar8 + 0x330) = 1;
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0x60,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) && (lVar3 = UiLayout_UpdateAnimById(0x60), lVar3 == 0)) {
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
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bbaa0(uVar4,0xf);
  uStack_10 = Msg_MakerInfo(uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bbaa0(uVar4,0x10);
  uStack_c = Msg_MakerInfo(uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bbaa0(uVar4,0xf);
  sStack_4 = PartDb_GetInfo(uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bbaa0(uVar4,0x10);
  uStack_2 = PartDb_GetInfo(uVar4);
  iVar8 = 0;
  psVar7 = &sStack_4;
  puVar6 = &uStack_10;
  puVar5 = &uStack_30;
  do {
    sVar1 = *psVar7;
    if (sVar1 == 0x9d) {
      puVar5[6] = *puVar6;
    }
    else if (sVar1 == 0x98) {
      puVar5[4] = *puVar6;
    }
    else if (sVar1 == 0x93) {
      puVar5[2] = *puVar6;
    }
    else if (sVar1 == 0x8d) {
      *puVar5 = *puVar6;
    }
    iVar8 = iVar8 + 1;
    psVar7 = psVar7 + 1;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar8 < 2);
  MenuWnd_DrawText(0x60,0x27,uStack_30);
  MenuWnd_DrawText(0x60,0x28,uStack_28);
  MenuWnd_DrawText(0x60,0x29,uStack_20);
  MenuWnd_DrawText(0x60,0x2a,uStack_18);
  MenuWnd_DrawText(0x60,0x23,uStack_2c);
  MenuWnd_DrawText(0x60,0x24,uStack_24);
  MenuWnd_DrawText(0x60,0x25,uStack_1c);
  MenuWnd_DrawText(0x60,0x26,uStack_14);
  MenuWnd_DrawText(0x4c,0x37,0x9bf);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x60,*(undefined4 *)(&DAT_0032ce70 + iVar9 * 4),1,0);
  }
  iVar8 = UiMgr_FindLayout(0x60);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032ce80 + iVar9 * 4));
  return;
}

// 0x0025d480  size 0xea0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025d480(int *param_1)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int unaff_s0_lo;
  undefined8 uVar8;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*param_1 == 3) {
    scrgarage_sub_0025d010();
    return;
  }
  uVar8 = 1;
  if (param_1[0x14] != 0) {
    iVar5 = param_1[1];
    if (iVar5 == 4) {
      uVar8 = 3;
    }
    else if (iVar5 == 0x19) {
      uVar8 = 2;
    }
    else if (iVar5 == 0) {
      uVar8 = 2;
    }
  }
  iVar5 = param_1[0x17];
  param_1[0x17] = 0;
  if (iVar5 != 0) {
    iVar5 = *param_1;
    if (iVar5 == 5) {
      uVar4 = Msg_Get(0x156);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar5 + 800) = 0;
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar4;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar4 = Msg_Get(0x157);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x334) = 0;
      *(undefined4 *)(iVar5 + 0x324) = 0;
      if (*(int *)(iVar5 + 0x334) == 0) {
        *(undefined4 *)(iVar5 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      *(undefined4 *)(iVar5 + 0x324) = 0;
      if (*(int *)(iVar5 + 0x334) == 0) {
        *(undefined4 *)(iVar5 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar4;
      *(undefined4 *)(iVar5 + 0x330) = 1;
      uVar4 = Msg_Get(0x158);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x33c) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x348) = 0;
      *(undefined4 *)(iVar5 + 0x338) = 0;
      if (*(int *)(iVar5 + 0x348) == 0) {
        *(undefined4 *)(iVar5 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x344) = 1;
      }
      *(undefined4 *)(iVar5 + 0x338) = 0;
      if (*(int *)(iVar5 + 0x348) == 0) {
        *(undefined4 *)(iVar5 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x344) = 1;
      }
      *(undefined4 *)(iVar5 + 0x340) = 0;
      *(undefined4 *)(iVar5 + 0x348) = uVar4;
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    else if (iVar5 == 2) {
      uVar4 = Msg_Get(0x154);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar5 + 800) = 0;
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar4;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar4 = Msg_Get(0x155);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x334) = 0;
      *(undefined4 *)(iVar5 + 0x324) = 0;
      if (*(int *)(iVar5 + 0x334) == 0) {
        *(undefined4 *)(iVar5 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      *(undefined4 *)(iVar5 + 0x324) = 0;
      if (*(int *)(iVar5 + 0x334) == 0) {
        *(undefined4 *)(iVar5 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar4;
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    else if (iVar5 == 1) {
      uVar4 = Msg_Get(0x15b);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar5 + 800) = 0;
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar4;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar4 = Msg_Get(0x15c);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x334) = 0;
      *(undefined4 *)(iVar5 + 0x324) = 0;
      if (*(int *)(iVar5 + 0x334) == 0) {
        *(undefined4 *)(iVar5 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      *(undefined4 *)(iVar5 + 0x324) = 0;
      if (*(int *)(iVar5 + 0x334) == 0) {
        *(undefined4 *)(iVar5 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar4;
      *(undefined4 *)(iVar5 + 0x330) = 1;
    }
    else if (iVar5 == 0) {
      uVar4 = Msg_Get(0x159);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x314) = 0xffffffff;
      *(undefined4 *)(iVar5 + 800) = 0;
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x310) = 0;
      if (*(int *)(iVar5 + 800) == 0) {
        *(undefined4 *)(iVar5 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x31c) = 1;
      }
      *(undefined4 *)(iVar5 + 0x318) = 0;
      *(undefined4 *)(iVar5 + 800) = uVar4;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
      uVar4 = Msg_Get(0x15a);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x334) = 0;
      *(undefined4 *)(iVar5 + 0x324) = 0;
      if (*(int *)(iVar5 + 0x334) == 0) {
        *(undefined4 *)(iVar5 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      *(undefined4 *)(iVar5 + 0x324) = 0;
      if (*(int *)(iVar5 + 0x334) == 0) {
        *(undefined4 *)(iVar5 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x330) = 1;
      }
      *(undefined4 *)(iVar5 + 0x32c) = 0;
      *(undefined4 *)(iVar5 + 0x334) = uVar4;
      *(undefined4 *)(iVar5 + 0x330) = 1;
      uVar4 = Msg_Get(0x177);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x33c) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x348) = 0;
      *(undefined4 *)(iVar5 + 0x338) = 0;
      if (*(int *)(iVar5 + 0x348) == 0) {
        *(undefined4 *)(iVar5 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x344) = 1;
      }
      *(undefined4 *)(iVar5 + 0x338) = 0;
      if (*(int *)(iVar5 + 0x348) == 0) {
        *(undefined4 *)(iVar5 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x344) = 1;
      }
      *(undefined4 *)(iVar5 + 0x340) = 0;
      *(undefined4 *)(iVar5 + 0x348) = uVar4;
      *(undefined4 *)(iVar5 + 0x344) = 1;
      uVar4 = Msg_Get(0x178);
      iVar5 = UiMgr_FindLayout(0x4c);
      iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
      *(undefined4 *)(iVar5 + 0x350) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x35c) = 0;
      *(undefined4 *)(iVar5 + 0x34c) = 0;
      if (*(int *)(iVar5 + 0x35c) == 0) {
        *(undefined4 *)(iVar5 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x358) = 1;
      }
      *(undefined4 *)(iVar5 + 0x34c) = 0;
      if (*(int *)(iVar5 + 0x35c) == 0) {
        *(undefined4 *)(iVar5 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x358) = 1;
      }
      *(undefined4 *)(iVar5 + 0x354) = 0;
      *(undefined4 *)(iVar5 + 0x35c) = uVar4;
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    Menu_ClearSlot(0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x4c,0);
  if (lVar6 == 0) {
    param_1[0x16] = 0;
  }
  if ((param_1[0x18] != 0) && (lVar6 = UiLayout_UpdateAnimById(0x4c,uVar8), lVar6 == 0)) {
    param_1[0x18] = 0;
  }
  uVar8 = 0x41;
  switch(param_1[1]) {
  case 0:
  case 1:
  case 2:
  case 3:
    unaff_s0_lo = 0;
    uVar8 = 0x2b7;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    unaff_s0_lo = 1;
    uVar8 = 0x2b8;
    break;
  case 8:
    unaff_s0_lo = 2;
    uVar8 = 0x2b9;
    break;
  case 9:
    unaff_s0_lo = 3;
    uVar8 = 0x2ba;
    break;
  case 10:
    unaff_s0_lo = 4;
    uVar8 = 699;
    break;
  case 0xb:
    unaff_s0_lo = 0;
    uVar8 = 0x2c8;
    break;
  case 0xc:
    unaff_s0_lo = 1;
    uVar8 = 0x2c9;
    break;
  case 0xd:
    unaff_s0_lo = 2;
    uVar8 = 0x2ca;
    break;
  case 0xe:
    unaff_s0_lo = 3;
    uVar8 = 0x2cb;
    break;
  case 0xf:
    unaff_s0_lo = 4;
    uVar8 = 0x2cc;
    break;
  case 0x10:
    unaff_s0_lo = 5;
    uVar8 = 0x2cd;
    break;
  case 0x11:
    unaff_s0_lo = 6;
    uVar8 = 0x2ce;
    break;
  case 0x12:
    unaff_s0_lo = 0;
    uVar8 = 0x2cf;
    break;
  case 0x13:
    unaff_s0_lo = 1;
    uVar8 = 0x2d0;
    break;
  case 0x18:
    unaff_s0_lo = 0;
    uVar8 = 0x2da;
    break;
  case 0x19:
    unaff_s0_lo = 1;
    uVar8 = 0x2db;
    break;
  case 0x1a:
    unaff_s0_lo = 2;
    uVar8 = 0x2dc;
    break;
  case 0x1b:
    unaff_s0_lo = 3;
    uVar8 = 0x2dd;
    break;
  case 0x1c:
    unaff_s0_lo = 4;
    uVar8 = 0x2de;
    break;
  case 0x1d:
    unaff_s0_lo = 5;
    uVar8 = 0x2df;
    break;
  case 0x1e:
    unaff_s0_lo = 6;
    uVar8 = 0x2e0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x4c,*(undefined4 *)(&DAT_0032ce00 + unaff_s0_lo * 4),1,0);
  }
  MenuWnd_DrawText(0x4c,0x37,*(undefined4 *)(&DAT_0032ce20 + *param_1 * 4));
  iVar5 = *param_1;
  if (iVar5 != 5) {
    if (iVar5 == 2) {
      MenuWnd_DrawText(0x4c,0x32,0x98a);
      MenuWnd_DrawText(0x4c,0x33,0x98b);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,10);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x38,uVar7);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,0xb);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x39,uVar7);
    }
    else if (iVar5 == 1) {
      MenuWnd_DrawText(0x4c,0x32,0x985);
      MenuWnd_DrawText(0x4c,0x33,0x986);
      MenuWnd_DrawText(0x4c,0x34,0x9a2);
      MenuWnd_DrawText(0x4c,0x35,0x9a3);
      MenuWnd_DrawText(0x4c,0x36,0x9a4);
      MenuWnd_DrawText(0x4c,0x3d,0x988);
      MenuWnd_DrawText(0x4c,0x3e,0x989);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,7);
      sVar2 = PartDb_GetInfo(uVar7);
      uStack_10 = DAT_0032ce38;
      uStack_c = DAT_0032ce3c;
      uStack_8 = DAT_0032ce40;
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,5);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x38,uVar7);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,6);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x39,uVar7);
      if (sVar2 == 0x6e) {
        uVar7 = Profile_Get(0);
        uVar7 = garage_sub_001bbaa0(uVar7,7);
        uStack_8 = Msg_MakerInfo(uVar7);
      }
      else if (sVar2 == 0x6b) {
        uVar7 = Profile_Get(0);
        uVar7 = garage_sub_001bbaa0(uVar7,7);
        uStack_c = Msg_MakerInfo(uVar7);
      }
      else if (sVar2 == 0x67) {
        uVar7 = Profile_Get(0);
        uVar7 = garage_sub_001bbaa0(uVar7,7);
        uStack_10 = Msg_MakerInfo(uVar7);
      }
      MenuWnd_DrawText(0x4c,0x3a,uStack_10);
      MenuWnd_DrawText(0x4c,0x3b,uStack_c);
      MenuWnd_DrawText(0x4c,0x3c,uStack_8);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,8);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x3f,uVar7);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,9);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x40,uVar7);
    }
    else if (iVar5 == 0) {
      MenuWnd_DrawText(0x4c,0x32,0x980);
      MenuWnd_DrawText(0x4c,0x33,0x981);
      MenuWnd_DrawText(0x4c,0x34,0x982);
      MenuWnd_DrawText(0x4c,0x35,0x983);
      MenuWnd_DrawText(0x4c,0x36,0x984);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,0);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x38,uVar7);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,2);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x39,uVar7);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,1);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x3a,uVar7);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,3);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x3b,uVar7);
      uVar7 = Profile_Get(0);
      uVar7 = garage_sub_001bbaa0(uVar7,4);
      uVar7 = Msg_MakerInfo(uVar7);
      MenuWnd_DrawText(0x4c,0x3c,uVar7);
    }
    goto LAB_0025e244;
  }
  MenuWnd_DrawText(0x4c,0x32,0x98d);
  lVar6 = scrcareer_sub_0029f130(0x19);
  if (lVar6 == 0) {
    MenuWnd_DrawTextId(0x4c,0x33,3,0x98e);
  }
  else {
    MenuWnd_DrawText(0x4c,0x33,0x98e);
  }
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bc3f0(uVar7);
  uVar3 = CarRec_GetModelId(uVar7);
  lVar6 = CarDb_GetVariant(uVar3);
  if (lVar6 == 1) {
    uVar7 = Profile_Get(0);
    uVar7 = garage_sub_001bc3f0(uVar7);
    cVar1 = CarRec_GetGrade(uVar7);
    if (cVar1 != '\0') goto LAB_0025e0b0;
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
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bbaa0(uVar7,0xc);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x4c,0x38,uVar7);
  MenuWnd_DrawText(0x4c,0x39,0x9b2);
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bc3f0(uVar7);
  cVar1 = CarRec_GetGrade(uVar7);
  if (cVar1 == '\0') {
    MenuWnd_DrawText(0x4c,0x3a,0x9b2);
  }
  else {
    MenuWnd_DrawText(0x4c,0x3a,0x98f);
  }
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bbaa0(uVar7,0x12);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x4c,0x3b,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bbaa0(uVar7,0x11);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x4c,0x3c,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bbaa0(uVar7,0x13);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x4c,0x3f,uVar7);
  uVar7 = Profile_Get(0);
  uVar7 = garage_sub_001bbaa0(uVar7,0x14);
  uVar7 = Msg_MakerInfo(uVar7);
  MenuWnd_DrawText(0x4c,0x40,uVar7);
LAB_0025e244:
  iVar5 = UiMgr_FindLayout(0x4c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,uVar8);
  return;
}

// 0x0025e320  size 0x258
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_sub_0025e320(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = param_1[0x17];
  param_1[0x17] = 0;
  if (iVar1 != 0) {
    uVar2 = Msg_Get(0x11f);
    iVar1 = UiMgr_FindLayout(0x5e);
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
    uVar2 = Msg_Get(0x120);
    iVar1 = UiMgr_FindLayout(0x5e);
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
  lVar3 = UiLayout_UpdateAnimById(0x5e,0);
  if (lVar3 == 0) {
    param_1[0x16] = 0;
  }
  if ((param_1[0x18] != 0) && (lVar3 = UiLayout_UpdateAnimById(0x5e), lVar3 == 0)) {
    param_1[0x18] = 0;
  }
  MenuWnd_DrawText(0x43,0x1a,0x2a1);
  scrcareer_sub_0025a940(*param_1,1);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x5e,*(undefined4 *)(&DAT_0032cdc0 + *param_1 * 4),1,0);
  }
  iVar1 = UiMgr_FindLayout(0x5e);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x43);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032cde0 + *param_1 * 4));
  return;
}

// 0x0025e5a0  size 0xf8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_sub_0025e5a0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_scrrace_sub_0025e320_0032cd20)[*(int *)((int)param_1 + 0x4c)])(param_1);
  UiLayout_UpdateAnimById(0x42,0);
  iVar1 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar2 = Menu_IsInputIdle((int)param_1 + 0x48), lVar2 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0025e6a0  size 0xb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_sub_0025e6a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Msg_Get(0x97);
  iVar2 = UiMgr_FindLayout(0x42);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 800) == 0) {
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
  }
  Menu_ShowDialog(_g_MenuMgr + 0x654,0x11b,2);
  return;
}

// 0x0025e760  size 0x37c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025e760(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = param_1[0x23b];
  param_1[0x23b] = 0;
  if (iVar2 != 0) {
    uVar3 = Msg_Get(0xcb);
    iVar2 = UiMgr_FindLayout(0x4b);
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
    uVar3 = Msg_Get(0xcc);
    iVar2 = UiMgr_FindLayout(0x4b);
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
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x4b,0);
  if (lVar4 == 0) {
    param_1[0x23a] = 0;
  }
  if ((param_1[0x23c] != 0) && (lVar4 = UiLayout_UpdateAnimById(0x4b), lVar4 == 0)) {
    param_1[0x23c] = 0;
  }
  uVar1 = (undefined2)param_1[param_1[10] + 0xc];
  uVar5 = Msg_PartInfo(uVar1);
  uVar6 = Msg_MakerName(uVar1);
  MenuWnd_DrawLabel(0x4b,0x23,0x2b0,uVar5,uVar6);
  MenuWnd_DrawText(0x45,1,0x2a2);
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bcb00(uVar5);
  MenuWnd_DrawNumber(0x4a,3,uVar5);
  uVar5 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x4a,4,uVar5);
  uVar5 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x4b,0x22,uVar5);
  MenuWnd_DrawText(0x4b,0x26,1);
  MenuWnd_DrawText(0x4b,0x27,2);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x4b,*(undefined4 *)(&DAT_0036ec80 + *param_1 * 4),1,0);
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x4b);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x1f,8);
  iVar2 = UiMgr_FindLayout(0x4a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x4b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x42,0);
  iVar2 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0025eae0  size 0xf2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025eae0(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 *puVar13;
  long lVar14;
  
  iVar4 = *(int *)(param_1 + 0x8ec);
  iVar12 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x2c);
  }
  else {
    uVar6 = Msg_Get(0xc5);
    iVar4 = UiMgr_FindLayout(0x49);
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
    *(undefined4 *)(iVar4 + 800) = uVar6;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar6 = Msg_Get(0xc6);
    iVar4 = UiMgr_FindLayout(0x49);
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
    *(undefined4 *)(iVar4 + 0x334) = uVar6;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar6 = Msg_Get(199);
    iVar4 = UiMgr_FindLayout(0x49);
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
    *(undefined4 *)(iVar4 + 0x348) = uVar6;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    uVar6 = Msg_Get(200);
    iVar4 = UiMgr_FindLayout(0x49);
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
    *(undefined4 *)(iVar4 + 0x35c) = uVar6;
    *(undefined4 *)(iVar4 + 0x358) = 1;
    uVar6 = Msg_Get(0xc9);
    iVar4 = UiMgr_FindLayout(0x4a);
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
    *(undefined4 *)(iVar4 + 800) = uVar6;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar6 = Msg_Get(0xca);
    iVar4 = UiMgr_FindLayout(0x4a);
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
    *(undefined4 *)(iVar4 + 0x334) = uVar6;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar6 = Msg_Get(0xd0);
    iVar4 = UiMgr_FindLayout(0xc);
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
    *(undefined4 *)(iVar4 + 800) = uVar6;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar6 = Msg_Get(0xd1);
    iVar4 = UiMgr_FindLayout(0xc);
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
    *(undefined4 *)(iVar4 + 0x334) = uVar6;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    uVar6 = Msg_Get(0xd2);
    iVar4 = UiMgr_FindLayout(0xc);
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
    *(undefined4 *)(iVar4 + 0x348) = uVar6;
    *(undefined4 *)(iVar4 + 0x344) = 1;
    uVar6 = Msg_Get(0xd3);
    iVar4 = UiMgr_FindLayout(0xc);
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
    *(undefined4 *)(iVar4 + 0x35c) = uVar6;
    *(undefined4 *)(iVar4 + 0x358) = 1;
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    MenuWnd_DrawDialogText(0x49,0x32d220,4,0xffffffffffffffff);
    iVar4 = *(int *)(param_1 + 0x2c);
  }
  if (iVar4 == 1) {
    if (*(int *)(param_1 + 0x84) == 0) {
      MenuWnd_SetHelpText(0);
    }
    iVar4 = UiMgr_FindLayout(0xc);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x310) = 0;
    if (*(int *)(iVar4 + 800) == 0) {
      *(undefined4 *)(iVar4 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  lVar14 = 2;
  if (*(int *)(param_1 + 0x84) == 0) {
    lVar14 = MenuWnd_DrawFooter(0x2ab,0xffffffffffffffff,0);
  }
  lVar8 = UiLayout_UpdateAnimById(0x49,0);
  lVar9 = UiLayout_UpdateAnimById(0x4a,0);
  lVar10 = UiLayout_UpdateAnimById(0xc,0);
  if ((lVar10 == 0 && (lVar8 == 0 && lVar9 == 0)) && (lVar14 == 2)) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if (*(int *)(param_1 + 0x8f0) != 0) {
    if (*(int *)(param_1 + 0x84) == 0) {
      if (lVar14 == 2) {
        MenuWnd_RequestRedraw();
      }
      lVar8 = UiLayout_UpdateAnimById(0x49,1);
      lVar9 = UiLayout_UpdateAnimById(0x4a,1);
      lVar10 = UiLayout_UpdateAnimById(0xc,1);
      if ((lVar10 == 0 && (lVar8 == 0 && lVar9 == 0)) && (lVar14 == 3)) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
    else {
      lVar14 = UiLayout_UpdateAnimById(0x49);
      lVar8 = UiLayout_UpdateAnimById(0x4a,1);
      lVar9 = UiLayout_UpdateAnimById(0xc,1);
      if (lVar9 == 0 && (lVar14 == 0 && lVar8 == 0)) {
        *(undefined4 *)(param_1 + 0x8f0) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
  }
  uVar11 = Profile_Get(0);
  lVar14 = Garage_FindCar(uVar11);
  MenuWnd_DrawCursor(lVar14 != 1);
  if ((*piRam0036f468 == 1) && (*(int *)(param_1 + 0x84) != 0)) {
    MenuWnd_SetItemState(0xc,*(undefined4 *)(&DAT_0032d230 + *(int *)(param_1 + 0x1c) * 4),0,0);
  }
  MenuWnd_SetItemState(0x49,*(undefined4 *)(&DAT_0032d250 + *(int *)(param_1 + 0x18) * 4),0,1);
  iVar4 = *(int *)(param_1 + 0x84);
  if ((iVar4 != 0) && (iVar4 < 7)) {
    puVar13 = (undefined4 *)(&DAT_0032d280 + iVar4 * 4);
    do {
      iVar5 = UiMgr_FindLayout(0xc);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,*puVar13,8);
      iVar4 = iVar4 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar4 < 7);
  }
  uVar11 = Profile_Get(0);
  iVar4 = Garage_FindCar(uVar11);
  if (iVar4 < 0xc) {
    puVar13 = (undefined4 *)(&DAT_0032d2a0 + iVar4 * 4);
    iVar5 = iVar4;
    do {
      iVar7 = UiMgr_FindLayout(0x49);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,*puVar13,8);
      iVar5 = iVar5 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar5 < 0xc);
  }
  if (iVar4 < 0xd) {
    iVar4 = UiMgr_FindLayout(0x49);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x37,8);
    iVar4 = UiMgr_FindLayout(0x49);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x38,8);
  }
  iVar5 = UiMgr_FindLayout(0xc);
  iVar4 = *(int *)(param_1 + 0x84);
  iVar5 = *_g_UiMgr + iVar5 * 0x4f4 + 4;
  if (iVar4 < 8) {
    UiElem_SetPropFloat(0x41800000,iVar5,8,2);
    UiElem_SetPropFloat(0x41380000,iVar5,8,6);
    iVar4 = *(int *)(param_1 + 0x14);
  }
  else {
    UiElem_SetPropFloat((float)iVar12 * (184.0 / (float)iVar4) + 16.0,iVar5,8,2);
    UiElem_SetPropFloat((7.0 / (float)iVar4) * 11.5,iVar5,8,6);
    iVar4 = *(int *)(param_1 + 0x14);
  }
  if (iVar4 == 3) {
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    lVar14 = UiLayout_UpdateAnimById(0x49,3);
    if (lVar14 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar4 = UiMgr_FindLayout(0x49);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x34c) = 0;
      if (*(int *)(iVar4 + 0x35c) == 0) {
        *(undefined4 *)(iVar4 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x358) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  else if (iVar4 == 2) {
    lVar14 = UiLayout_UpdateAnimById(0x49);
    if (lVar14 == 0) {
      Menu_ClearSlot(0);
      Menu_ClearSlot(1);
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar4 = UiMgr_FindLayout(0x49);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x338) = 0;
      if (*(int *)(iVar4 + 0x348) == 0) {
        *(undefined4 *)(iVar4 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  else if (iVar4 == 1) {
    Menu_ClearSlot(0);
    Menu_ClearSlot(1);
    lVar14 = UiLayout_UpdateAnimById(0xc,3);
    if (lVar14 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar4 = UiMgr_FindLayout(0xc);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x34c) = 0;
      if (*(int *)(iVar4 + 0x35c) == 0) {
        *(undefined4 *)(iVar4 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x358) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  else {
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0x28);
      goto LAB_0025f0f4;
    }
    lVar14 = UiLayout_UpdateAnimById(0xc);
    if (lVar14 == 0) {
      Menu_ClearSlot(0);
      Menu_ClearSlot(1);
      *(undefined4 *)(param_1 + 0x14) = 4;
      iVar4 = UiMgr_FindLayout(0xc);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x338) = 0;
      if (*(int *)(iVar4 + 0x348) == 0) {
        *(undefined4 *)(iVar4 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  iVar4 = *(int *)(param_1 + 0x28);
LAB_0025f0f4:
  uVar1 = *(undefined2 *)(iVar4 * 4 + param_1 + 0x30);
  uVar11 = Profile_Get(0);
  uVar11 = Garage_FindCar(uVar11);
  MenuWnd_DrawLabel(0x49,0x39,0x3b,*(int *)(param_1 + 0x20) + 1,uVar11);
  MenuWnd_DrawText(0x4a,6,0x2a2);
  uVar11 = Profile_Get(0);
  uVar11 = garage_sub_001bcb00(uVar11);
  MenuWnd_DrawNumber(0x4a,3,uVar11);
  if (*(int *)(param_1 + 0x84) == 0) {
    MenuWnd_DrawNumber(0x4a,4,0);
  }
  else {
    uVar11 = Garage_GetCarPower(uVar1);
    MenuWnd_DrawNumber(0x4a,4,uVar11);
  }
  iVar5 = 0;
  iVar4 = param_1 + iVar12 * 4;
  puVar13 = &DAT_0032d1e0;
  while( true ) {
    iVar12 = *(int *)(param_1 + 0x84);
    if (6 < iVar12) {
      iVar12 = 7;
    }
    if (iVar12 <= iVar5) break;
    uVar1 = *(undefined2 *)(iVar4 + 0x30);
    uVar11 = MsgId_ForGradeShort(*(undefined1 *)(iVar4 + 0x32));
    MenuWnd_DrawText(0xc,*puVar13,uVar11);
    uVar11 = Msg_MakerInfo(uVar1);
    MenuWnd_DrawText(0xc,puVar13[1],uVar11);
    iVar4 = iVar4 + 4;
    puVar13 = puVar13 + 2;
    iVar5 = iVar5 + 1;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar4 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x44,8);
    iVar4 = UiMgr_FindLayout(0xc);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x45,8);
    iVar4 = UiMgr_FindLayout(0xc);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  }
  iVar4 = UiMgr_FindLayout(0x49);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x4a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x42,0);
  iVar4 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x28) * 4 + param_1 + 0x30);
  iVar4 = Profile_Get(0);
  sVar3 = *(short *)(iVar4 + *(int *)(param_1 + 0x20) * 2 + 0x13ee);
  iVar4 = Profile_Get(0);
  uVar2 = CarRec_GetModelId(iVar4 + sVar3 * 0xcc);
  uVar11 = Maker_GetInfo(uVar1);
  sVar3 = CarDb_FindDefaultPart(uVar2,uVar11,0xffffffffffffffff);
  if (sVar3 == -1) {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x20),0,0xffffffffffffffff,0);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x20),0,sVar3,0);
  }
  return;
}

// 0x0025fa10  size 0x214
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025fa10(int param_1)

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
  uVar6 = garage_sub_001bcb00(uVar6);
  MenuWnd_DrawNumber(0x46,3,uVar6);
  uVar6 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x46,4,uVar6);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  UiLayout_UpdateAnimById(0x42,0);
  iVar2 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x46);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0025fc30  size 0x654
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_sub_0025fc30(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar4 = param_1[0x23b];
  param_1[0x23b] = 0;
  if (iVar4 != 0) {
    uVar2 = Msg_Get(0x420);
    iVar4 = UiMgr_FindLayout(0x47);
    iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
    *(undefined4 *)(iVar4 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x3ac) = 0;
    *(undefined4 *)(iVar4 + 0x39c) = 0;
    if (*(int *)(iVar4 + 0x3ac) == 0) {
      *(undefined4 *)(iVar4 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar4 + 0x39c) = 0;
    if (*(int *)(iVar4 + 0x3ac) == 0) {
      *(undefined4 *)(iVar4 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar4 + 0x3a4) = 0;
    *(undefined4 *)(iVar4 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar4 + 0x3a8) = 1;
    uVar2 = Msg_Get(0xc3);
    iVar4 = UiMgr_FindLayout(0x48);
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
    *(undefined4 *)(iVar4 + 800) = uVar2;
    *(undefined4 *)(iVar4 + 0x31c) = 1;
    uVar2 = Msg_Get(0xc4);
    iVar4 = UiMgr_FindLayout(0x48);
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
    *(undefined4 *)(iVar4 + 0x334) = uVar2;
    *(undefined4 *)(iVar4 + 0x330) = 1;
    if (param_1[0x236] == 1) {
      uVar2 = Msg_Get(0x41e);
      iVar4 = UiMgr_FindLayout(0x47);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x378) = 0xffffffff;
      *(undefined4 *)(iVar4 + 900) = 0;
      *(undefined4 *)(iVar4 + 0x374) = 0;
      if (*(int *)(iVar4 + 900) == 0) {
        *(undefined4 *)(iVar4 + 0x380) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x380) = 1;
      }
      *(undefined4 *)(iVar4 + 0x374) = 0;
      if (*(int *)(iVar4 + 900) == 0) {
        *(undefined4 *)(iVar4 + 0x380) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x380) = 1;
      }
      *(undefined4 *)(iVar4 + 0x37c) = 0;
      *(undefined4 *)(iVar4 + 900) = uVar2;
      *(undefined4 *)(iVar4 + 0x380) = 1;
      uVar2 = Msg_Get(0xbf);
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
      *(undefined4 *)(iVar4 + 800) = uVar2;
      *(undefined4 *)(iVar4 + 0x31c) = 1;
    }
    iVar3 = UiMgr_FindLayout(0x47);
    iVar4 = *_g_UiMgr;
    uVar8 = Msg_Get(0xc2);
    UiLayout_PlayAnim(iVar4 + iVar3 * 0x4f4 + 4,uVar8);
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
  uVar8 = garage_sub_001bcb00(uVar8);
  MenuWnd_DrawNumber(0x46,3,uVar8);
  uVar8 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x46,4,uVar8);
  iVar4 = Garage_GetCarPower(uVar1);
  MenuWnd_DrawNumber(0x47,0x19,(param_1[3] + 1) * iVar4);
  MenuWnd_DrawLabel(0x47,0x1c,0x40,param_1[3] + 1);
  MenuWnd_DrawLabel(0x47,0x1b,0x3a,param_1[param_1[2] + 0xd4]);
  MenuWnd_DrawText(0x48,0xc,1);
  MenuWnd_DrawText(0x48,0xd,2);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x48,*(undefined4 *)(*param_1 * 4 + 0x36ec78),1,0);
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar4 = UiMgr_FindLayout(0x47);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x17,8);
  iVar4 = UiMgr_FindLayout(0x47);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,0x18,8);
  iVar4 = UiMgr_FindLayout(0x45);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x47);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x48);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x46);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  UiLayout_UpdateAnimById(0x42,0);
  iVar4 = UiMgr_FindLayout(0x42);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  return;
}

