// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00280000 - 0x00284000
#include "ghidra_types.h"

// 0x00280140  size 0x69c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_GearRatio(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 *puVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  undefined4 auStack_120 [2];
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar8 = &DAT_0032e2b0;
  puVar11 = auStack_120;
  iVar7 = 0x23;
  do {
    iVar7 = iVar7 + -1;
    uVar3 = puVar8[1];
    *puVar11 = *puVar8;
    puVar11[1] = uVar3;
    puVar8 = puVar8 + 2;
    puVar11 = puVar11 + 2;
  } while (0 < iVar7);
  piVar9 = (int *)param_1;
  iStack_118 = piVar9[0x14];
  iStack_114 = piVar9[0x13];
  iStack_110 = piVar9[0x39];
  iStack_10c = piVar9[0x2a];
  iStack_f0 = piVar9[0x16];
  iStack_ec = piVar9[0x15];
  iStack_e8 = piVar9[0x3a];
  iStack_e4 = piVar9[0x2b];
  iStack_c8 = piVar9[0x18];
  iStack_c4 = piVar9[0x17];
  iStack_c0 = piVar9[0x3b];
  iStack_bc = piVar9[0x2c];
  iStack_a0 = piVar9[0x1a];
  iStack_9c = piVar9[0x19];
  iStack_98 = piVar9[0x3c];
  iStack_94 = piVar9[0x2d];
  iStack_78 = piVar9[0x1c];
  iStack_74 = piVar9[0x1b];
  iStack_70 = piVar9[0x3d];
  iStack_6c = piVar9[0x2e];
  iStack_50 = piVar9[0x1e];
  iStack_4c = piVar9[0x1d];
  iStack_48 = piVar9[0x3e];
  iStack_44 = piVar9[0x2f];
  iStack_28 = piVar9[0x12];
  iStack_24 = piVar9[0x11];
  iStack_20 = piVar9[0x38];
  iStack_1c = piVar9[0x29];
  iVar7 = piVar9[7];
  piVar9[7] = 0;
  if (iVar7 != 0) {
    uVar13 = UiRes_GetLayoutData(0xc);
    iVar7 = UiMgr_FindLayout(0x39);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar13;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0xd);
    iVar7 = UiMgr_FindLayout(0x39);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar3;
    pUVar1[iVar7].layout.animState = 1;
    iVar7 = UiMgr_FindLayout(0x39);
    pUVar1 = g_UiMgr->slots;
    iVar4 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(&pUVar1[iVar7].layout,8,0x90,iVar4,1);
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x39,0);
  if (!bVar2) {
    piVar9[6] = 0;
  }
  if ((piVar9[8] != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x39,1), !bVar2)) {
    piVar9[8] = 0;
  }
  if ((*_g_MenuInput == 1) && (piVar9[0xe] == 0)) {
    MenuWnd_SetItemState(0x39,*(undefined4 *)(&DAT_0032e3d0 + (*piVar9 + piVar9[0xb]) * 4),1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  lVar5 = maybe_Setting_IsModified(param_1);
  if (lVar5 == 1) {
    iVar7 = UiMgr_FindLayout(0x39);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x90,8,extraout_a3_lo);
  }
  else {
    iVar7 = UiMgr_FindLayout(0x39);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x90,8,extraout_a3_lo_00);
    iVar7 = UiMgr_FindLayout(0x39);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3b8 = 1;
    }
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,auStack_120,7,piVar9[0xe],*piVar9);
  MenuWnd_DrawText(0x39,0x91,0x196);
  MenuWnd_DrawTextId(0x39,0x78,1,0x19a);
  MenuWnd_DrawTextId(0x39,0x79,1,0x19b);
  MenuWnd_DrawTextId(0x39,0x7a,1,0x19c);
  MenuWnd_DrawRivalLabel(0x39,0x7b,1,0x19d,4);
  MenuWnd_DrawRivalLabel(0x39,0x7c,1,0x19d,5);
  MenuWnd_DrawRivalLabel(0x39,0x7d,1,0x19d,6);
  MenuWnd_DrawTextId(0x39,0x7e,1,0x19e);
  MenuWnd_DrawText(0x39,0x6c,0x19f);
  MenuWnd_DrawText(0x39,0x6d,0x1a0);
  MenuWnd_DrawText(0x39,0x7f,0x2c);
  MenuWnd_DrawText(0x39,0x80,0x2d);
  MenuWnd_DrawText(0x39,0x81,0x2e);
  uVar13 = 0;
  piVar12 = &DAT_0032e440;
  puVar11 = &DAT_0032e420;
  piVar10 = &DAT_0032e400;
  do {
    if ((piVar9[0xc] & 1 << (uVar13 & 0x1f)) != 0) {
      uVar6 = maybe___sf_to_df(piVar9[*piVar12 + 0x38]);
      MenuWnd_DrawLabel(0x39,*puVar11,0x1cf,uVar6);
      iVar7 = UiMgr_FindLayout(0x39);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)*piVar10,8,extraout_a3_lo_01);
    }
    uVar13 = uVar13 + 1;
    piVar12 = piVar12 + 1;
    puVar11 = puVar11 + 1;
    piVar10 = piVar10 + 1;
  } while ((int)uVar13 < 7);
  iVar7 = piVar9[0xb];
  if ((iVar7 == 0) && (piVar9[10] == *piVar9)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar7 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar7 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032e460 + *piVar9 * 4));
  }
  UiLayout_UpdateAnimById((UiLayout *)0x39,8);
  iVar7 = UiMgr_FindLayout(0x39);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x002807e0  size 0x11a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Others(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  UiLayoutSlot *pUVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  int *piVar10;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  byte extraout_a3_lo_11;
  byte extraout_a3_lo_12;
  byte extraout_a3_lo_13;
  byte extraout_a3_lo_14;
  byte extraout_a3_lo_15;
  byte extraout_a3_lo_16;
  byte extraout_a3_lo_17;
  byte extraout_a3_lo_18;
  byte extraout_a3_lo_19;
  byte extraout_a3_lo_20;
  byte extraout_a3_lo_21;
  byte extraout_a3_lo_22;
  byte extraout_a3_lo_23;
  byte extraout_a3_lo_24;
  byte extraout_a3_lo_25;
  byte extraout_a3_lo_26;
  byte extraout_a3_lo_27;
  byte extraout_a3_lo_28;
  byte extraout_a3_lo_29;
  byte extraout_a3_lo_30;
  byte extraout_a3_lo_31;
  byte extraout_a3_lo_32;
  byte extraout_a3_lo_33;
  byte extraout_a3_lo_34;
  byte extraout_a3_lo_35;
  byte extraout_a3_lo_36;
  byte extraout_a3_lo_37;
  byte extraout_a3_lo_38;
  byte extraout_a3_lo_39;
  undefined8 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_2c = DAT_0032e254;
  uStack_30 = DAT_0032e250;
  uStack_24 = DAT_0032e25c;
  uStack_28 = DAT_0032e258;
  uStack_18 = DAT_0032e268;
  uStack_14 = DAT_0032e26c;
  uStack_10 = DAT_0032e270;
  uStack_c = DAT_0032e274;
  piVar10 = (int *)param_1;
  fStack_20 = (float)(int)*(char *)((int)piVar10 + 0xdd);
  fStack_1c = (float)(int)*(char *)((int)piVar10 + 0xa1);
  iVar5 = piVar10[7];
  piVar10[7] = 0;
  if (iVar5 != 0) {
    uVar7 = UiRes_GetLayoutData(0x1e);
    iVar5 = UiMgr_FindLayout(0x40);
    pUVar3 = g_UiMgr->slots;
    pUVar3[iVar5].layout.unk_310 = 0xffffffff;
    pUVar3[iVar5].layout.unk_31c = 0;
    pUVar3[iVar5].layout.unk_30c = 0;
    if (pUVar3[iVar5].layout.unk_31c == 0) {
      pUVar3[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar5].layout.unk_318 = 1;
    }
    pUVar3[iVar5].layout.unk_30c = 0;
    if (pUVar3[iVar5].layout.unk_31c == 0) {
      pUVar3[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar3[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x314 = 0;
    pUVar3[iVar5].layout.unk_31c = uVar7;
    pUVar3[iVar5].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x1f);
    iVar5 = UiMgr_FindLayout(0x40);
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
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x330 = uVar8;
    pUVar3[iVar5].layout.animState = 1;
    uVar8 = UiRes_GetLayoutData(0x275);
    iVar5 = UiMgr_FindLayout(0x40);
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
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x344 = uVar8;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 1;
    iVar5 = UiMgr_FindLayout(0x40);
    pUVar3 = g_UiMgr->slots;
    iVar6 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(&pUVar3[iVar5].layout,8,0x65,iVar6,1);
    Menu_ClearSlot(0);
  }
  bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x40,0);
  if (!bVar4) {
    piVar10[6] = 0;
  }
  if ((piVar10[8] != 0) && (bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x40,1), !bVar4)) {
    piVar10[8] = 0;
  }
  if (*(char *)((int)piVar10 + 0xd7) == -1) {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2f,8,extraout_a3_lo);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x33,8,extraout_a3_lo_00);
  }
  if ((*_g_MenuInput == 1) && (piVar10[0xe] == 0)) {
    if (*(int *)(&DAT_0032e280 + (*piVar10 + piVar10[0xb]) * 4) != -1) {
      MenuWnd_SetItemState(0x40,*(int *)(&DAT_0032e280 + (*piVar10 + piVar10[0xb]) * 4),1,0);
      iVar5 = UiMgr_FindLayout(0x40);
      pUVar3 = g_UiMgr->slots;
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x334 = 0;
      if (*(int *)&pUVar3[iVar5].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar3[iVar5].layout.field_0x340 = 1;
      }
      goto LAB_002809ec;
    }
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x48,8,extraout_a3_lo_27);
    iVar5 = UiMgr_FindLayout(0x40);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x3cc = 1;
    }
    iVar5 = UiMgr_FindLayout(0x40);
    UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,2);
    if (*(char *)((int)piVar10 + 0xd7) != -1) {
      MenuWnd_SetItemState(0x40,0x2d,0,0);
      iVar5 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2f,8,extraout_a3_lo_29);
      goto LAB_002809ec;
    }
    MenuWnd_SetItemState(0x40,0x31,0,0);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x33,8,extraout_a3_lo_28);
    cVar1 = *(char *)((int)piVar10 + 0xd7);
  }
  else {
    MenuWnd_SetItemVisible(0);
LAB_002809ec:
    cVar1 = *(char *)((int)piVar10 + 0xd7);
  }
  if (cVar1 == -1) {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x33,8,extraout_a3_lo_01);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2f,8,extraout_a3_lo_02);
  }
  lVar9 = maybe_Setting_IsModified(param_1);
  if (lVar9 == 1) {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x65,8,extraout_a3_lo_03);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x65,8,extraout_a3_lo_30);
    iVar5 = UiMgr_FindLayout(0x40);
    pUVar3 = g_UiMgr->slots;
    *(undefined4 *)&pUVar3[iVar5].layout.field_0x3ac = 0;
    if (*(int *)&pUVar3[iVar5].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar3[iVar5].layout.field_0x3b8 = 1;
    }
  }
  if (*piVar10 == 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 10;
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,&uStack_30,1,piVar10[0xe],uVar11);
  MenuWnd_DrawText(0x40,0x68,0x195);
  MenuWnd_DrawText(0x40,0x4c,0x1b2);
  MenuWnd_DrawText(0x40,0x50,0x224);
  MenuWnd_DrawText(0x40,0x4d,0x1b3);
  MenuWnd_DrawText(0x40,0x4a,0x2f);
  MenuWnd_DrawText(0x40,0x4b,0x30);
  MenuWnd_DrawText(0x40,0x51,0x225);
  MenuWnd_DrawText(0x40,0x52,0x226);
  MenuWnd_DrawText(0x40,0x4e,0x2f);
  MenuWnd_DrawText(0x40,0x4f,0x30);
  MenuWnd_DrawText(0x40,0x5b,0x2c);
  MenuWnd_DrawText(0x40,0x5c,0x2d);
  MenuWnd_DrawText(0x40,0x5d,0x2e);
  MenuWnd_DrawText(0x40,0x61,0x32);
  MenuWnd_DrawText(0x40,0x62,0x33);
  MenuWnd_DrawLabel(0x40,0x5e,0x229,0x32 - *(char *)((int)piVar10 + 0xd6),
                    *(char *)((int)piVar10 + 0xd6) + 0x32);
  if ((piVar10[0xc] & 1U) == 0) {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3b,8,extraout_a3_lo_31);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3f,8,extraout_a3_lo_32);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x41,8,extraout_a3_lo_33);
LAB_00280dc4:
    uVar2 = *(undefined1 *)((int)piVar10 + 0xdd);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,99,8,extraout_a3_lo_04);
    if (*piVar10 != 0) goto LAB_00280dc4;
    if (piVar10[0xe] != 1) {
      iVar5 = UiMgr_FindLayout(0x40);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0x41,9,0);
      iVar5 = UiMgr_FindLayout(0x40);
      pUVar3 = g_UiMgr->slots;
      iVar6 = UiRes_GetLayoutData(0x21);
      UiLayout_IsAnimDone(&pUVar3[iVar5].layout,9,0x41,iVar6,1);
      iVar5 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3b,8,extraout_a3_lo_07);
      iVar5 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3f,8,extraout_a3_lo_08);
      goto LAB_00280dc4;
    }
    iVar5 = UiMgr_FindLayout(0x40);
    UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,9);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3b,8,extraout_a3_lo_05);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3f,8,extraout_a3_lo_06);
    uVar2 = *(undefined1 *)((int)piVar10 + 0xdd);
  }
  maybe_Setting_DrawValueLabel(uVar2,0x40,0x5f,0x1d3,0x1d4,0x1d5,0);
  if ((piVar10[0xc] & 4U) == 0) {
    cVar1 = *(char *)((int)piVar10 + 0xd7);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x66,8,extraout_a3_lo_34);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x67,8,extraout_a3_lo_35);
    cVar1 = *(char *)((int)piVar10 + 0xd7);
  }
  if (cVar1 == -1) {
    MenuWnd_DrawLabel(0x40,0x60,0x229,0x32,0x32);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x25,8,extraout_a3_lo_36);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2b,8,extraout_a3_lo_37);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x29,8,extraout_a3_lo_38);
    if (*_g_MenuInput == 1) {
      iVar5 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,100,8,extraout_a3_lo_39);
    }
LAB_00281014:
    iVar5 = piVar10[0xb];
  }
  else {
    MenuWnd_DrawLabel(0x40,0x60,0x229,cVar1 * -5 + 100);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,100,8,extraout_a3_lo_09);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2b,8,extraout_a3_lo_10);
    if (*piVar10 != 3) goto LAB_00281014;
    if (piVar10[0xe] != 1) {
      iVar5 = UiMgr_FindLayout(0x40);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0x2b,9,0);
      iVar5 = UiMgr_FindLayout(0x40);
      pUVar3 = g_UiMgr->slots;
      iVar6 = UiRes_GetLayoutData(0x21);
      UiLayout_IsAnimDone(&pUVar3[iVar5].layout,9,0x2b,iVar6,1);
      iVar5 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x25,8,extraout_a3_lo_13);
      iVar5 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x29,8,extraout_a3_lo_14);
      goto LAB_00281014;
    }
    iVar5 = UiMgr_FindLayout(0x40);
    UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,9);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x25,8,extraout_a3_lo_11);
    iVar5 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x29,8,extraout_a3_lo_12);
    iVar5 = piVar10[0xb];
  }
  if ((iVar5 == 0) && (piVar10[10] == *piVar10)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar5 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else {
    if (iVar5 == 2) {
      MenuWnd_DrawText(7,0x2e,0x1bb);
      uVar2 = *(undefined1 *)((int)piVar10 + 0x9a);
      goto LAB_00281074;
    }
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032e2a0 + *piVar10 * 4));
  }
  uVar2 = *(undefined1 *)((int)piVar10 + 0x9a);
LAB_00281074:
  iVar5 = UiMgr_FindLayout(0x40,uVar2);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3b,1,extraout_a3_lo_15);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3b,5,extraout_a3_lo_16);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3f,3,extraout_a3_lo_17);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x41,3,extraout_a3_lo_18);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x3f,1,extraout_a3_lo_19);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x41,1,extraout_a3_lo_20);
  iVar5 = UiMgr_FindLayout(0x40,*(undefined1 *)((int)piVar10 + 0x9b));
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x25,1,extraout_a3_lo_21);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x25,5,extraout_a3_lo_22);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x29,3,extraout_a3_lo_23);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2b,3,extraout_a3_lo_24);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x29,1,extraout_a3_lo_25);
  iVar5 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x2b,1,extraout_a3_lo_26);
  UiLayout_UpdateAnimById((UiLayout *)0x40,8);
  iVar5 = UiMgr_FindLayout(0x40);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00281990  size 0x628
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Alignment(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  int *piVar10;
  undefined4 auStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_68;
  float fStack_64;
  float fStack_40;
  float fStack_3c;
  float fStack_18;
  float fStack_14;
  
  puVar9 = &DAT_0032e180;
  puVar8 = auStack_a0;
  iVar7 = 0x14;
  do {
    iVar7 = iVar7 + -1;
    uVar4 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar4;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar7);
  piVar10 = (int *)param_1;
  fStack_90 = (float)(int)*(char *)((int)piVar10 + 0xca);
  fStack_8c = (float)(int)*(char *)((int)piVar10 + 0x8e);
  fStack_68 = (float)(int)*(char *)((int)piVar10 + 0xcb);
  fStack_64 = (float)(int)*(char *)((int)piVar10 + 0x8f);
  fStack_40 = (float)(int)(char)piVar10[0x33];
  fStack_3c = (float)(int)(char)piVar10[0x24];
  fStack_18 = (float)(int)*(char *)((int)piVar10 + 0xcd);
  fStack_14 = (float)(int)*(char *)((int)piVar10 + 0x91);
  iVar7 = piVar10[7];
  piVar10[7] = 0;
  if (iVar7 != 0) {
    uVar3 = UiRes_GetLayoutData(0x1c);
    iVar7 = UiMgr_FindLayout(0x3f);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar3;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x1d);
    iVar7 = UiMgr_FindLayout(0x3f);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar4;
    pUVar1[iVar7].layout.animState = 1;
    iVar7 = UiMgr_FindLayout(0x3f);
    pUVar1 = g_UiMgr->slots;
    iVar5 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(&pUVar1[iVar7].layout,8,0x66,iVar5,1);
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x3f,0);
  if (!bVar2) {
    piVar10[6] = 0;
  }
  if ((piVar10[8] != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x3f,1), !bVar2)) {
    piVar10[8] = 0;
  }
  if ((*_g_MenuInput == 1) && (piVar10[0xe] == 0)) {
    MenuWnd_SetItemState(0x3f,*(undefined4 *)(&DAT_0032e220 + (*piVar10 + piVar10[0xb]) * 4),1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  lVar6 = maybe_Setting_IsModified(param_1);
  if (lVar6 == 1) {
    iVar7 = UiMgr_FindLayout(0x3f);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x66,8,extraout_a3_lo);
  }
  else {
    iVar7 = UiMgr_FindLayout(0x3f);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,0x66,8,extraout_a3_lo_00);
    iVar7 = UiMgr_FindLayout(0x3f);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x3b8 = 1;
    }
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,auStack_a0,4,piVar10[0xe],*piVar10);
  MenuWnd_DrawText(0x3f,0x67,0x194);
  MenuWnd_DrawText(0x3f,0x4c,0x1ac);
  MenuWnd_DrawText(0x3f,0x4d,0x1ad);
  MenuWnd_DrawText(0x3f,0x4a,0x1ae);
  MenuWnd_DrawText(0x3f,0x4b,0x1af);
  MenuWnd_DrawText(0x3f,0x4e,0x1b0);
  MenuWnd_DrawText(0x3f,0x4f,0x1b1);
  MenuWnd_DrawTextId(0x3f,0x57,1,0x2f);
  MenuWnd_DrawTextId(0x3f,0x58,1,0x30);
  MenuWnd_DrawTextId(0x3f,0x5c,1,0x2f);
  MenuWnd_DrawTextId(0x3f,0x5d,1,0x30);
  MenuWnd_DrawText(0x3f,0x59,0x2c);
  MenuWnd_DrawText(0x3f,0x5a,0x2d);
  MenuWnd_DrawText(0x3f,0x5b,0x2e);
  maybe_Setting_DrawValueLabel(*(undefined1 *)((int)piVar10 + 0xca),0x3f,0x5e,0x1d6,0x1d7,0x1d8,0);
  maybe_Setting_DrawValueLabel(*(undefined1 *)((int)piVar10 + 0xcb),0x3f,0x5f,0x1d6,0x1d7,0x1d8,0);
  maybe_Setting_DrawValueLabel((char)piVar10[0x33] * 0x1e,0x3f,0x60,0x1d9,0x1da,0x1db,1);
  maybe_Setting_DrawValueLabel(*(char *)((int)piVar10 + 0xcd) * 0x1e,0x3f,0x61,0x1d9,0x1da,0x1db,1);
  iVar7 = piVar10[0xb];
  if ((iVar7 == 0) && (piVar10[10] == *piVar10)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar7 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar7 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032e240 + *piVar10 * 4));
  }
  UiLayout_UpdateAnimById((UiLayout *)0x3f,8);
  iVar7 = UiMgr_FindLayout(0x3f);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x00281fc0  size 0xc7c
void ScrGarage_Draw_SaveChangesAnd_1fc0(undefined8 param_1)

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
  undefined4 *puVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  undefined4 *puVar12;
  long lVar13;
  int *piVar14;
  undefined4 auStack_140 [2];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar9 = Profile_Get(0);
  iVar5 = Profile_GetCurrentCar(uVar9);
  lVar10 = CarRec_GetOptionData(iVar5 + 0x14,8);
  lVar13 = lVar10;
  if (lVar10 == 5) {
    lVar13 = 6;
  }
  puVar11 = auStack_140;
  puVar12 = &DAT_0032dff0;
  iVar5 = 0x28;
  do {
    iVar5 = iVar5 + -1;
    uVar7 = puVar12[1];
    *puVar11 = *puVar12;
    puVar11[1] = uVar7;
    puVar12 = puVar12 + 2;
    puVar11 = puVar11 + 2;
  } while (0 < iVar5);
  fStack_138 = (float)(int)lVar10;
  fStack_134 = (float)-(int)lVar10;
  fStack_48 = (float)(int)lVar13;
  piVar14 = (int *)param_1;
  fStack_44 = (float)-(int)lVar13;
  fStack_130 = (float)(int)*(char *)((int)piVar14 + 0xce);
  fStack_12c = (float)(int)*(char *)((int)piVar14 + 0x92);
  fStack_108 = (float)(int)*(char *)((int)piVar14 + 0xcf);
  fStack_104 = (float)(int)*(char *)((int)piVar14 + 0x93);
  fStack_e0 = (float)(int)(char)piVar14[0x34];
  fStack_dc = (float)(int)(char)piVar14[0x25];
  fStack_b8 = (float)(int)*(char *)((int)piVar14 + 0xd1);
  fStack_b4 = (float)(int)*(char *)((int)piVar14 + 0x95);
  fStack_90 = (float)(int)*(char *)((int)piVar14 + 0xd2);
  fStack_8c = (float)(int)*(char *)((int)piVar14 + 0x96);
  fStack_68 = (float)(int)*(char *)((int)piVar14 + 0xd3);
  fStack_64 = (float)(int)*(char *)((int)piVar14 + 0x97);
  fStack_40 = (float)(int)(char)piVar14[0x35];
  fStack_3c = (float)(int)(char)piVar14[0x26];
  fStack_18 = (float)(int)*(char *)((int)piVar14 + 0xd5);
  fStack_14 = (float)(int)*(char *)((int)piVar14 + 0x99);
  iVar5 = piVar14[7];
  piVar14[7] = 0;
  fStack_110 = fStack_138;
  fStack_10c = fStack_134;
  fStack_e8 = fStack_138;
  fStack_e4 = fStack_134;
  fStack_c0 = fStack_138;
  fStack_bc = fStack_134;
  fStack_98 = fStack_138;
  fStack_94 = fStack_134;
  fStack_70 = fStack_138;
  fStack_6c = fStack_134;
  fStack_20 = fStack_48;
  fStack_1c = fStack_44;
  if (iVar5 != 0) {
    uVar6 = UiRes_GetLayoutData(0x15);
    iVar5 = UiMgr_FindLayout(0x3d);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar5].layout.unk_310 = 0xffffffff;
    pUVar1[iVar5].layout.unk_31c = 0;
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    pUVar1[iVar5].layout.unk_31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x16);
    iVar5 = UiMgr_FindLayout(0x3d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    do {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x3d,1);
    } while (bVar2);
    uVar7 = UiRes_GetLayoutData(0x16);
    iVar5 = UiMgr_FindLayout(0x3d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x17);
    iVar5 = UiMgr_FindLayout(0x3d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    uVar7 = UiRes_GetLayoutData(0x18);
    iVar5 = UiMgr_FindLayout(0x3d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x19);
    iVar5 = UiMgr_FindLayout(0x3e);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar5].layout.unk_310 = 0xffffffff;
    pUVar1[iVar5].layout.unk_31c = 0;
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    pUVar1[iVar5].layout.unk_31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x1a);
    iVar5 = UiMgr_FindLayout(0x3e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar7;
    pUVar1[iVar5].layout.animState = 1;
    uVar7 = UiRes_GetLayoutData(0x1b);
    iVar5 = UiMgr_FindLayout(0x3e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar7;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    iVar5 = UiMgr_FindLayout(0x3d);
    pUVar1 = g_UiMgr->slots;
    iVar8 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(&pUVar1[iVar5].layout,8,0x52,iVar8,1);
    piVar14[0xd] = 0;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x3d,0x36edd0,1,1);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x3d,0);
  if (!bVar2) {
    piVar14[6] = 0;
  }
  bVar2 = !bVar2;
  if (piVar14[8] != 0) {
    if (piVar14[0xd] == 0) {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x3d,2);
      if (!bVar3) {
        piVar14[8] = 0;
      }
    }
    else {
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x3e,1);
      if (!bVar3) {
        piVar14[8] = 0;
      }
    }
  }
  lVar13 = maybe_Setting_IsModified(param_1);
  if (lVar13 == 1) {
    iVar5 = UiMgr_FindLayout(0x3d);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x52,8,extraout_a3_lo);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x3d);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x52,8,extraout_a3_lo_01);
    iVar5 = UiMgr_FindLayout(0x3d);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3b8 = 1;
    }
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,auStack_140,8,piVar14[0xe],*piVar14);
  iVar5 = piVar14[0xb];
  if ((iVar5 == 0) && (piVar14[10] == *piVar14)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar5 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar5 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032e130 + *piVar14 * 4));
  }
  MenuWnd_DrawText(0x3d,0x53,0x193);
  if (*piVar14 < 4) {
    if (piVar14[0xd] == 1) {
      MenuWnd_DrawCursor(0);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x3d,1);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x3e,2);
      if (bVar3 || bVar4) {
        bVar2 = false;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        piVar14[0xd] = 0;
        iVar5 = UiMgr_FindLayout(0x3d);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
          pUVar1[iVar5].layout.animState = 0;
        }
        else {
          pUVar1[iVar5].layout.animState = 1;
        }
        iVar5 = UiMgr_FindLayout(0x3e);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
        }
        Menu_ClearSlot(0);
        MenuWnd_DrawDialogText(0x3d,0x36edd4,1,1);
      }
      MenuScr_Draw_SpringRate(param_1,1);
      iVar5 = UiMgr_FindLayout(0x3e);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x62,8,extraout_a3_lo_02);
      iVar5 = UiMgr_FindLayout(0x3e);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
    }
    else {
      MenuWnd_DrawCursor();
    }
    MenuScr_Draw_SpringRate(param_1,0);
  }
  else {
    if (piVar14[0xd] == 0) {
      MenuWnd_DrawCursor(0);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x3d,3);
      bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x3e,0);
      if (bVar3 || bVar4) {
        bVar2 = false;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        piVar14[0xd] = 1;
        iVar5 = UiMgr_FindLayout(0x3d);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
        }
        iVar5 = UiMgr_FindLayout(0x3e);
        pUVar1 = g_UiMgr->slots;
        pUVar1[iVar5].layout.unk_30c = 0;
        if (pUVar1[iVar5].layout.unk_31c == 0) {
          pUVar1[iVar5].layout.unk_318 = 0;
        }
        else {
          pUVar1[iVar5].layout.unk_318 = 1;
        }
        Menu_ClearSlot(0);
        MenuWnd_DrawDialogText(0x3e,0x36edd8,1,1);
      }
      MenuScr_Draw_SpringRate(param_1,0);
    }
    else {
      MenuWnd_DrawCursor(1);
    }
    iVar5 = UiMgr_FindLayout(0x3e);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x62,8,extraout_a3_lo_00);
    iVar5 = UiMgr_FindLayout(0x3e);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
    MenuScr_Draw_SpringRate(param_1,1);
  }
  if ((bVar2) && (piVar14[0xe] == 0)) {
    if (piVar14[0xd] == 0) {
      MenuWnd_SetItemState(0x3d,*(undefined4 *)(&DAT_0032e150 + *piVar14 * 4),1,0);
    }
    else {
      MenuWnd_SetItemState(0x3e,*(undefined4 *)(&DAT_0032e150 + (*piVar14 + piVar14[0xb]) * 4),1,0);
    }
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  UiLayout_UpdateAnimById((UiLayout *)0x3d,8);
  iVar5 = UiMgr_FindLayout(0x3d);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00282c40  size 0x364
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_PowerTrain(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  iVar4 = param_1[7];
  param_1[7] = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(10);
    iVar4 = UiMgr_FindLayout(0x38);
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
    uVar6 = UiRes_GetLayoutData(0xb);
    iVar4 = UiMgr_FindLayout(0x38);
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
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x37,1);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x38,0);
  if (!bVar2 && !bVar3) {
    param_1[6] = 0;
  }
  if ((param_1[8] != 0) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x38,1), !bVar2)) {
    param_1[8] = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x38,*(undefined4 *)(&DAT_0032dfe0 + *param_1 * 4),1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  MenuWnd_DrawText(0x37,0x32,0x192);
  bVar2 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 1U) == 0)) {
    bVar2 = false;
  }
  uVar7 = 0;
  if (!bVar2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x38,0x19,uVar7,0x196);
  bVar2 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 2U) == 0)) {
    bVar2 = false;
  }
  uVar7 = 0;
  if (!bVar2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x38,0x1a,uVar7,0x197);
  bVar2 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 4U) == 0)) {
    bVar2 = false;
  }
  uVar7 = 0;
  if (!bVar2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x38,0x1b,uVar7,0x198);
  bVar2 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 8U) == 0)) {
    bVar2 = false;
  }
  uVar7 = 0;
  if (!bVar2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x38,0x1c,uVar7,0x199);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032dfd0 + *param_1 * 4));
  iVar4 = UiMgr_FindLayout(0x37);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0x38);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00282fb0  size 0x484
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_PowerTrain_2fb0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte extraout_a3_lo;
  
  iVar4 = param_1[7];
  param_1[7] = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(6);
    iVar4 = UiMgr_FindLayout(0x37);
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
    if (param_1[2] != 1) {
      uVar6 = UiRes_GetLayoutData(7);
      iVar4 = UiMgr_FindLayout(0x37);
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
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar6;
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    uVar6 = UiRes_GetLayoutData(8);
    iVar4 = UiMgr_FindLayout(0x37);
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
    uVar6 = UiRes_GetLayoutData(9);
    iVar4 = UiMgr_FindLayout(0x37);
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
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
  }
  bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x37,0);
  bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x37,3);
  if (!bVar2 && !bVar3) {
    param_1[6] = 0;
  }
  if (param_1[8] != 0) {
    if (param_1[4] == 1) {
      iVar4 = UiMgr_FindLayout(0x37);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,1,5,extraout_a3_lo);
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x37,1);
      if (!bVar2) {
        param_1[8] = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x37,2);
      if (!bVar2) {
        param_1[8] = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x37,*(undefined4 *)(&DAT_0032dfc0 + *param_1 * 4),1,0);
    uVar5 = param_1[0xc];
  }
  else {
    MenuWnd_SetItemVisible(0);
    uVar5 = param_1[0xc];
  }
  bVar2 = true;
  if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
    bVar2 = false;
  }
  uVar7 = 0;
  if (!bVar2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x37,0x32,uVar7,0x192);
  bVar2 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 2U) == 0)) {
    bVar2 = false;
  }
  uVar7 = 0;
  if (!bVar2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x37,0x33,uVar7,0x193);
  bVar2 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 4U) == 0)) {
    bVar2 = false;
  }
  uVar7 = 0;
  if (!bVar2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x37,0x34,uVar7,0x194);
  bVar2 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 8U) == 0)) {
    bVar2 = false;
  }
  uVar7 = 0;
  if (!bVar2) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x37,0x35,uVar7,0x195);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032dfb0 + *param_1 * 4));
  iVar4 = UiMgr_FindLayout(0x37);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00283440  size 0x14
/* menu page 42 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PagePartInfo_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00283460  size 0x16c
/* menu page 42 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PagePartInfo_Update(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar2 = UiMgr_FindLayout(0x36);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,0);
  iVar2 = UiMgr_FindLayout(0x36);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  (*(code *)(&PTR_MenuScr_Draw_PowerTrain_2fb0_0032df80)[*(int *)((int)param_1 + 0xc)])(param_1);
  if (*(int *)((int)param_1 + 0x3c) != 5) {
    maybe_PartInfo_Draw(param_1);
  }
  if ((g_MenuMgr->flags & 4) == 0) {
    bVar1 = UiLayout_UpdateAnimById((UiLayout *)0x37,2);
    if (!bVar1) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
    iVar2 = UiMgr_FindLayout(0x37);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  }
  return;
}

// 0x002835d0  size 0xe2c
/* menu page 42 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PagePartInfo_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = UiRes_GetLayoutData(5);
  iVar3 = UiMgr_FindLayout(0x36);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 1;
  pUVar1[iVar3].layout.unk_31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  uVar2 = UiRes_GetLayoutData(6);
  iVar3 = UiMgr_FindLayout(0x37);
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
  uVar4 = UiRes_GetLayoutData(8);
  iVar3 = UiMgr_FindLayout(0x37);
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
  uVar4 = UiRes_GetLayoutData(9);
  iVar3 = UiMgr_FindLayout(0x37);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
  uVar4 = UiRes_GetLayoutData(7);
  iVar3 = UiMgr_FindLayout(0x37);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
  uVar2 = UiRes_GetLayoutData(10);
  iVar3 = UiMgr_FindLayout(0x38);
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
  uVar4 = UiRes_GetLayoutData(0xb);
  iVar3 = UiMgr_FindLayout(0x38);
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
  uVar2 = UiRes_GetLayoutData(0xc);
  iVar3 = UiMgr_FindLayout(0x39);
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
  uVar4 = UiRes_GetLayoutData(0xd);
  iVar3 = UiMgr_FindLayout(0x39);
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
  uVar2 = UiRes_GetLayoutData(0xe);
  iVar3 = UiMgr_FindLayout(0x3a);
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
  uVar4 = UiRes_GetLayoutData(0xf);
  iVar3 = UiMgr_FindLayout(0x3a);
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
  uVar4 = UiRes_GetLayoutData(0x10);
  iVar3 = UiMgr_FindLayout(0x3a);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
  uVar2 = UiRes_GetLayoutData(0x11);
  iVar3 = UiMgr_FindLayout(0x3b);
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
  uVar4 = UiRes_GetLayoutData(0x12);
  iVar3 = UiMgr_FindLayout(0x3b);
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
  uVar2 = UiRes_GetLayoutData(0x13);
  iVar3 = UiMgr_FindLayout(0x3c);
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
  uVar4 = UiRes_GetLayoutData(0x14);
  iVar3 = UiMgr_FindLayout(0x3c);
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
  uVar2 = UiRes_GetLayoutData(0x15);
  iVar3 = UiMgr_FindLayout(0x3d);
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
  uVar4 = UiRes_GetLayoutData(0x16);
  iVar3 = UiMgr_FindLayout(0x3d);
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
  uVar4 = UiRes_GetLayoutData(0x17);
  iVar3 = UiMgr_FindLayout(0x3d);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
  uVar4 = UiRes_GetLayoutData(0x18);
  iVar3 = UiMgr_FindLayout(0x3d);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
  uVar4 = UiRes_GetLayoutData(0x22);
  iVar3 = UiMgr_FindLayout(0x3d);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
  uVar2 = UiRes_GetLayoutData(0x19);
  iVar3 = UiMgr_FindLayout(0x3e);
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
  uVar4 = UiRes_GetLayoutData(0x1a);
  iVar3 = UiMgr_FindLayout(0x3e);
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
  uVar4 = UiRes_GetLayoutData(0x1b);
  iVar3 = UiMgr_FindLayout(0x3e);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
  uVar4 = UiRes_GetLayoutData(0x23);
  iVar3 = UiMgr_FindLayout(0x3e);
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
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x350 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar4;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
  uVar2 = UiRes_GetLayoutData(0x1c);
  iVar3 = UiMgr_FindLayout(0x3f);
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
  uVar4 = UiRes_GetLayoutData(0x1d);
  iVar3 = UiMgr_FindLayout(0x3f);
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
  uVar2 = UiRes_GetLayoutData(0x1e);
  iVar3 = UiMgr_FindLayout(0x40);
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
  uVar4 = UiRes_GetLayoutData(0x1f);
  iVar3 = UiMgr_FindLayout(0x40);
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

