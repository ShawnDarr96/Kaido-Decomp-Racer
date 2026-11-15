// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00280000 - 0x00284000
#include "ghidra_types.h"

// 0x00280140  size 0x69c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_GearRatio(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
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
  puVar7 = auStack_120;
  iVar5 = 0x23;
  do {
    iVar5 = iVar5 + -1;
    uVar1 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar5);
  piVar6 = (int *)param_1;
  iStack_118 = piVar6[0x14];
  iStack_114 = piVar6[0x13];
  iStack_110 = piVar6[0x39];
  iStack_10c = piVar6[0x2a];
  iStack_f0 = piVar6[0x16];
  iStack_ec = piVar6[0x15];
  iStack_e8 = piVar6[0x3a];
  iStack_e4 = piVar6[0x2b];
  iStack_c8 = piVar6[0x18];
  iStack_c4 = piVar6[0x17];
  iStack_c0 = piVar6[0x3b];
  iStack_bc = piVar6[0x2c];
  iStack_a0 = piVar6[0x1a];
  iStack_9c = piVar6[0x19];
  iStack_98 = piVar6[0x3c];
  iStack_94 = piVar6[0x2d];
  iStack_78 = piVar6[0x1c];
  iStack_74 = piVar6[0x1b];
  iStack_70 = piVar6[0x3d];
  iStack_6c = piVar6[0x2e];
  iStack_50 = piVar6[0x1e];
  iStack_4c = piVar6[0x1d];
  iStack_48 = piVar6[0x3e];
  iStack_44 = piVar6[0x2f];
  iStack_28 = piVar6[0x12];
  iStack_24 = piVar6[0x11];
  iStack_20 = piVar6[0x38];
  iStack_1c = piVar6[0x29];
  iVar5 = piVar6[7];
  piVar6[7] = 0;
  if (iVar5 != 0) {
    uVar1 = UiRes_GetLayoutData(0xc);
    iVar5 = UiMgr_FindLayout(0x39);
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
    *(undefined4 *)(iVar5 + 800) = uVar1;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0xd);
    iVar5 = UiMgr_FindLayout(0x39);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar1;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    iVar2 = UiMgr_FindLayout(0x39);
    iVar5 = *_g_UiMgr;
    uVar4 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(iVar5 + iVar2 * 0x4f4 + 4,8,0x90,uVar4,1);
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0x39,0);
  if (lVar3 == 0) {
    piVar6[6] = 0;
  }
  if ((piVar6[8] != 0) && (lVar3 = UiLayout_UpdateAnimById(0x39), lVar3 == 0)) {
    piVar6[8] = 0;
  }
  if ((*_g_MenuInput == 1) && (piVar6[0xe] == 0)) {
    MenuWnd_SetItemState(0x39,*(undefined4 *)(&DAT_0032e3d0 + (*piVar6 + piVar6[0xb]) * 4),1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  lVar3 = maybe_Setting_IsModified(param_1);
  if (lVar3 == 1) {
    iVar5 = UiMgr_FindLayout(0x39);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x90,8);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x39);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x90,8);
    iVar5 = UiMgr_FindLayout(0x39);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
    if (*(int *)(iVar5 + 0x3c0) == 0) {
      *(undefined4 *)(iVar5 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3bc) = 1;
    }
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,auStack_120,7,piVar6[0xe],*piVar6);
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
  uVar10 = 0;
  piVar9 = &DAT_0032e440;
  puVar8 = &DAT_0032e420;
  puVar7 = &DAT_0032e400;
  do {
    if ((piVar6[0xc] & 1 << (uVar10 & 0x1f)) != 0) {
      uVar4 = maybe___sf_to_df(piVar6[*piVar9 + 0x38]);
      MenuWnd_DrawLabel(0x39,*puVar8,0x1cf,uVar4);
      iVar5 = UiMgr_FindLayout(0x39);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,*puVar7,8);
    }
    uVar10 = uVar10 + 1;
    piVar9 = piVar9 + 1;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while ((int)uVar10 < 7);
  iVar5 = piVar6[0xb];
  if ((iVar5 == 0) && (piVar6[10] == *piVar6)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar5 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar5 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032e460 + *piVar6 * 4));
  }
  UiLayout_UpdateAnimById(0x39,8);
  iVar5 = UiMgr_FindLayout(0x39);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  return;
}

// 0x002807e0  size 0x11a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Others(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  float fVar9;
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
  piVar7 = (int *)param_1;
  fStack_20 = (float)(int)*(char *)((int)piVar7 + 0xdd);
  fStack_1c = (float)(int)*(char *)((int)piVar7 + 0xa1);
  iVar3 = piVar7[7];
  piVar7[7] = 0;
  if (iVar3 != 0) {
    uVar5 = UiRes_GetLayoutData(0x1e);
    iVar3 = UiMgr_FindLayout(0x40);
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
    *(undefined4 *)(iVar3 + 800) = uVar5;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar5 = UiRes_GetLayoutData(0x1f);
    iVar3 = UiMgr_FindLayout(0x40);
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
    *(undefined4 *)(iVar3 + 0x334) = uVar5;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar5 = UiRes_GetLayoutData(0x275);
    iVar3 = UiMgr_FindLayout(0x40);
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
    *(undefined4 *)(iVar3 + 0x340) = 1;
    *(undefined4 *)(iVar3 + 0x348) = uVar5;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    iVar4 = UiMgr_FindLayout(0x40);
    iVar3 = *_g_UiMgr;
    uVar8 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(iVar3 + iVar4 * 0x4f4 + 4,8,0x65,uVar8,1);
    Menu_ClearSlot(0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x40,0);
  if (lVar6 == 0) {
    piVar7[6] = 0;
  }
  if ((piVar7[8] != 0) && (lVar6 = UiLayout_UpdateAnimById(0x40), lVar6 == 0)) {
    piVar7[8] = 0;
  }
  if (*(char *)((int)piVar7 + 0xd7) == -1) {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x2f,8);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x33,8);
  }
  if ((*_g_MenuInput == 1) && (piVar7[0xe] == 0)) {
    if (*(int *)(&DAT_0032e280 + (*piVar7 + piVar7[0xb]) * 4) != -1) {
      MenuWnd_SetItemState(0x40,*(int *)(&DAT_0032e280 + (*piVar7 + piVar7[0xb]) * 4),1,0);
      iVar3 = UiMgr_FindLayout(0x40);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x338) = 0;
      if (*(int *)(iVar3 + 0x348) == 0) {
        *(undefined4 *)(iVar3 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x344) = 1;
      }
      goto LAB_002809ec;
    }
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3ecccccd,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x48,8);
    iVar3 = UiMgr_FindLayout(0x40);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x3c8) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x3d4) = 0;
    *(undefined4 *)(iVar3 + 0x3c4) = 0;
    if (*(int *)(iVar3 + 0x3d4) == 0) {
      *(undefined4 *)(iVar3 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3d0) = 1;
    }
    iVar3 = UiMgr_FindLayout(0x40);
    UiLayout_UpdateAnim(*_g_UiMgr + iVar3 * 0x4f4 + 4,2);
    if (*(char *)((int)piVar7 + 0xd7) != -1) {
      MenuWnd_SetItemState(0x40,0x2d,0,0);
      iVar3 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x2f,8);
      goto LAB_002809ec;
    }
    MenuWnd_SetItemState(0x40,0x31,0,0);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x33,8);
    cVar1 = *(char *)((int)piVar7 + 0xd7);
  }
  else {
    MenuWnd_SetItemVisible(0);
LAB_002809ec:
    cVar1 = *(char *)((int)piVar7 + 0xd7);
  }
  if (cVar1 == -1) {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x33,8);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x2f,8);
  }
  lVar6 = maybe_Setting_IsModified(param_1);
  if (lVar6 == 1) {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x65,8);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x65,8);
    iVar3 = UiMgr_FindLayout(0x40);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
    if (*(int *)(iVar3 + 0x3c0) == 0) {
      *(undefined4 *)(iVar3 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3bc) = 1;
    }
  }
  if (*piVar7 == 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 10;
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,&uStack_30,1,piVar7[0xe],uVar8);
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
  MenuWnd_DrawLabel(0x40,0x5e,0x229,0x32 - *(char *)((int)piVar7 + 0xd6),
                    *(char *)((int)piVar7 + 0xd6) + 0x32);
  if ((piVar7[0xc] & 1U) == 0) {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3b,8);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3f,8);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x41,8);
LAB_00280dc4:
    uVar2 = *(undefined1 *)((int)piVar7 + 0xdd);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,99,8);
    if (*piVar7 != 0) goto LAB_00280dc4;
    if (piVar7[0xe] != 1) {
      iVar3 = UiMgr_FindLayout(0x40);
      UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x41,9,0);
      iVar4 = UiMgr_FindLayout(0x40);
      iVar3 = *_g_UiMgr;
      uVar8 = UiRes_GetLayoutData(0x21);
      UiLayout_IsAnimDone(iVar3 + iVar4 * 0x4f4 + 4,9,0x41,uVar8,1);
      iVar3 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3b,8);
      iVar3 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3f,8);
      goto LAB_00280dc4;
    }
    iVar3 = UiMgr_FindLayout(0x40);
    UiLayout_UpdateAnim(*_g_UiMgr + iVar3 * 0x4f4 + 4,9);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3b,8);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f333333,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3f,8);
    uVar2 = *(undefined1 *)((int)piVar7 + 0xdd);
  }
  maybe_Setting_DrawValueLabel(uVar2,0x40,0x5f,0x1d3,0x1d4,0x1d5,0);
  if ((piVar7[0xc] & 4U) == 0) {
    cVar1 = *(char *)((int)piVar7 + 0xd7);
  }
  else {
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x66,8);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x67,8);
    cVar1 = *(char *)((int)piVar7 + 0xd7);
  }
  if (cVar1 == -1) {
    MenuWnd_DrawLabel(0x40,0x60,0x229,0x32,0x32);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x25,8);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x2b,8);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x29,8);
    if (*_g_MenuInput == 1) {
      iVar3 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(0x3f000000,*_g_UiMgr + iVar3 * 0x4f4 + 4,100,8);
    }
LAB_00281014:
    iVar3 = piVar7[0xb];
  }
  else {
    MenuWnd_DrawLabel(0x40,0x60,0x229,cVar1 * -5 + 100);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,100,8);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f333333,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x2b,8);
    if (*piVar7 != 3) goto LAB_00281014;
    if (piVar7[0xe] != 1) {
      iVar3 = UiMgr_FindLayout(0x40);
      UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x2b,9,0);
      iVar4 = UiMgr_FindLayout(0x40);
      iVar3 = *_g_UiMgr;
      uVar8 = UiRes_GetLayoutData(0x21);
      UiLayout_IsAnimDone(iVar3 + iVar4 * 0x4f4 + 4,9,0x2b,uVar8,1);
      iVar3 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x25,8);
      iVar3 = UiMgr_FindLayout(0x40);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x29,8);
      goto LAB_00281014;
    }
    iVar3 = UiMgr_FindLayout(0x40);
    UiLayout_UpdateAnim(*_g_UiMgr + iVar3 * 0x4f4 + 4,9);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x25,8);
    iVar3 = UiMgr_FindLayout(0x40);
    UiElem_SetPropFloat(0x3f333333,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x29,8);
    iVar3 = piVar7[0xb];
  }
  if ((iVar3 == 0) && (piVar7[10] == *piVar7)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar3 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else {
    if (iVar3 == 2) {
      MenuWnd_DrawText(7,0x2e,0x1bb);
      cVar1 = *(char *)((int)piVar7 + 0x9a);
      goto LAB_00281074;
    }
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032e2a0 + *piVar7 * 4));
  }
  cVar1 = *(char *)((int)piVar7 + 0x9a);
LAB_00281074:
  fVar9 = (float)(*(char *)((int)piVar7 + 0xd6) + 0x32) * 1.76 + 172.0;
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(0x43ae0000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3b,1);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(0x402c0000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3b,5);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3f,3);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x41,3);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat((float)(cVar1 + 0x32) * 1.76 + 172.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x3f,1);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(fVar9,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x41,1);
  cVar1 = *(char *)((int)piVar7 + 0x9b);
  fVar9 = (float)(int)*(char *)((int)piVar7 + 0xd7) * 8.8 + 172.0;
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(0x43ae0000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x25,1);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(0x402c0000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x25,5);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x29,3);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x2b,3);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat((float)(int)cVar1 * 8.8 + 172.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x29,1);
  iVar3 = UiMgr_FindLayout(0x40);
  UiElem_SetPropFloat(fVar9,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x2b,1);
  UiLayout_UpdateAnimById(0x40,8);
  iVar3 = UiMgr_FindLayout(0x40);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00281990  size 0x628
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Alignment(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 auStack_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_68;
  float fStack_64;
  float fStack_40;
  float fStack_3c;
  float fStack_18;
  float fStack_14;
  
  puVar7 = &DAT_0032e180;
  puVar6 = auStack_a0;
  iVar5 = 0x14;
  do {
    iVar5 = iVar5 + -1;
    uVar1 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    puVar7 = puVar7 + 2;
    puVar6 = puVar6 + 2;
  } while (0 < iVar5);
  piVar8 = (int *)param_1;
  fStack_90 = (float)(int)*(char *)((int)piVar8 + 0xca);
  fStack_8c = (float)(int)*(char *)((int)piVar8 + 0x8e);
  fStack_68 = (float)(int)*(char *)((int)piVar8 + 0xcb);
  fStack_64 = (float)(int)*(char *)((int)piVar8 + 0x8f);
  fStack_40 = (float)(int)(char)piVar8[0x33];
  fStack_3c = (float)(int)(char)piVar8[0x24];
  fStack_18 = (float)(int)*(char *)((int)piVar8 + 0xcd);
  fStack_14 = (float)(int)*(char *)((int)piVar8 + 0x91);
  iVar5 = piVar8[7];
  piVar8[7] = 0;
  if (iVar5 != 0) {
    uVar1 = UiRes_GetLayoutData(0x1c);
    iVar5 = UiMgr_FindLayout(0x3f);
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
    *(undefined4 *)(iVar5 + 800) = uVar1;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x1d);
    iVar5 = UiMgr_FindLayout(0x3f);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar1;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    iVar2 = UiMgr_FindLayout(0x3f);
    iVar5 = *_g_UiMgr;
    uVar4 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(iVar5 + iVar2 * 0x4f4 + 4,8,0x66,uVar4,1);
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0x3f,0);
  if (lVar3 == 0) {
    piVar8[6] = 0;
  }
  if ((piVar8[8] != 0) && (lVar3 = UiLayout_UpdateAnimById(0x3f), lVar3 == 0)) {
    piVar8[8] = 0;
  }
  if ((*_g_MenuInput == 1) && (piVar8[0xe] == 0)) {
    MenuWnd_SetItemState(0x3f,*(undefined4 *)(&DAT_0032e220 + (*piVar8 + piVar8[0xb]) * 4),1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  lVar3 = maybe_Setting_IsModified(param_1);
  if (lVar3 == 1) {
    iVar5 = UiMgr_FindLayout(0x3f);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x66,8);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x3f);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,0x66,8);
    iVar5 = UiMgr_FindLayout(0x3f);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
    if (*(int *)(iVar5 + 0x3c0) == 0) {
      *(undefined4 *)(iVar5 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3bc) = 1;
    }
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,auStack_a0,4,piVar8[0xe],*piVar8);
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
  maybe_Setting_DrawValueLabel(*(undefined1 *)((int)piVar8 + 0xca),0x3f,0x5e,0x1d6,0x1d7,0x1d8,0);
  maybe_Setting_DrawValueLabel(*(undefined1 *)((int)piVar8 + 0xcb),0x3f,0x5f,0x1d6,0x1d7,0x1d8,0);
  maybe_Setting_DrawValueLabel((char)piVar8[0x33] * 0x1e,0x3f,0x60,0x1d9,0x1da,0x1db,1);
  maybe_Setting_DrawValueLabel(*(char *)((int)piVar8 + 0xcd) * 0x1e,0x3f,0x61,0x1d9,0x1da,0x1db,1);
  iVar5 = piVar8[0xb];
  if ((iVar5 == 0) && (piVar8[10] == *piVar8)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar5 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar5 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032e240 + *piVar8 * 4));
  }
  UiLayout_UpdateAnimById(0x3f,8);
  iVar5 = UiMgr_FindLayout(0x3f);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  return;
}

// 0x00281fc0  size 0xc7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_SaveChangesAnd_1fc0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  int *piVar10;
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
  
  uVar5 = Profile_Get(0);
  iVar2 = Profile_GetCurrentCar(uVar5);
  lVar6 = CarRec_GetOptionData(iVar2 + 0x14,8);
  lVar9 = lVar6;
  if (lVar6 == 5) {
    lVar9 = 6;
  }
  puVar7 = auStack_140;
  puVar8 = &DAT_0032dff0;
  iVar2 = 0x28;
  do {
    iVar2 = iVar2 + -1;
    uVar3 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar3;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar2);
  fStack_138 = (float)(int)lVar6;
  fStack_134 = (float)-(int)lVar6;
  fStack_48 = (float)(int)lVar9;
  piVar10 = (int *)param_1;
  fStack_44 = (float)-(int)lVar9;
  fStack_130 = (float)(int)*(char *)((int)piVar10 + 0xce);
  fStack_12c = (float)(int)*(char *)((int)piVar10 + 0x92);
  fStack_108 = (float)(int)*(char *)((int)piVar10 + 0xcf);
  fStack_104 = (float)(int)*(char *)((int)piVar10 + 0x93);
  fStack_e0 = (float)(int)(char)piVar10[0x34];
  fStack_dc = (float)(int)(char)piVar10[0x25];
  fStack_b8 = (float)(int)*(char *)((int)piVar10 + 0xd1);
  fStack_b4 = (float)(int)*(char *)((int)piVar10 + 0x95);
  fStack_90 = (float)(int)*(char *)((int)piVar10 + 0xd2);
  fStack_8c = (float)(int)*(char *)((int)piVar10 + 0x96);
  fStack_68 = (float)(int)*(char *)((int)piVar10 + 0xd3);
  fStack_64 = (float)(int)*(char *)((int)piVar10 + 0x97);
  fStack_40 = (float)(int)(char)piVar10[0x35];
  fStack_3c = (float)(int)(char)piVar10[0x26];
  fStack_18 = (float)(int)*(char *)((int)piVar10 + 0xd5);
  fStack_14 = (float)(int)*(char *)((int)piVar10 + 0x99);
  iVar2 = piVar10[7];
  piVar10[7] = 0;
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
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x15);
    iVar2 = UiMgr_FindLayout(0x3d);
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
    uVar3 = UiRes_GetLayoutData(0x16);
    iVar2 = UiMgr_FindLayout(0x3d);
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
    do {
      lVar9 = UiLayout_UpdateAnimById(0x3d,1);
    } while (lVar9 == 1);
    uVar3 = UiRes_GetLayoutData(0x16);
    iVar2 = UiMgr_FindLayout(0x3d);
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
    uVar3 = UiRes_GetLayoutData(0x17);
    iVar2 = UiMgr_FindLayout(0x3d);
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
    uVar3 = UiRes_GetLayoutData(0x18);
    iVar2 = UiMgr_FindLayout(0x3d);
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
    uVar3 = UiRes_GetLayoutData(0x19);
    iVar2 = UiMgr_FindLayout(0x3e);
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
    uVar3 = UiRes_GetLayoutData(0x1a);
    iVar2 = UiMgr_FindLayout(0x3e);
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
    uVar3 = UiRes_GetLayoutData(0x1b);
    iVar2 = UiMgr_FindLayout(0x3e);
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
    iVar4 = UiMgr_FindLayout(0x3d);
    iVar2 = *_g_UiMgr;
    uVar5 = UiRes_GetLayoutData(0x20);
    UiLayout_IsAnimDone(iVar2 + iVar4 * 0x4f4 + 4,8,0x52,uVar5,1);
    piVar10[0xd] = 0;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x3d,0x36edd0,1,1);
  }
  lVar9 = UiLayout_UpdateAnimById(0x3d,0);
  bVar1 = lVar9 == 0;
  if (bVar1) {
    piVar10[6] = 0;
  }
  if (piVar10[8] != 0) {
    if (piVar10[0xd] == 0) {
      lVar9 = UiLayout_UpdateAnimById(0x3d,2);
      if (lVar9 == 0) {
        piVar10[8] = 0;
      }
    }
    else {
      lVar9 = UiLayout_UpdateAnimById(0x3e);
      if (lVar9 == 0) {
        piVar10[8] = 0;
      }
    }
  }
  lVar9 = maybe_Setting_IsModified(param_1);
  if (lVar9 == 1) {
    iVar2 = UiMgr_FindLayout(0x3d);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x52,8);
  }
  else {
    iVar2 = UiMgr_FindLayout(0x3d);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x52,8);
    iVar2 = UiMgr_FindLayout(0x3d);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
    if (*(int *)(iVar2 + 0x3c0) == 0) {
      *(undefined4 *)(iVar2 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x3bc) = 1;
    }
  }
  maybe_Setting_AnimateGauge(0x43300000,0x44020000,auStack_140,8,piVar10[0xe],*piVar10);
  iVar2 = piVar10[0xb];
  if ((iVar2 == 0) && (piVar10[10] == *piVar10)) {
    MenuWnd_DrawText(7,0x2e,0x1b9);
  }
  else if (iVar2 == 1) {
    MenuWnd_DrawText(7,0x2e,0x1ba);
  }
  else if (iVar2 == 2) {
    MenuWnd_DrawText(7,0x2e,0x1bb);
  }
  else {
    MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032e130 + *piVar10 * 4));
  }
  MenuWnd_DrawText(0x3d,0x53,0x193);
  if (*piVar10 < 4) {
    if (piVar10[0xd] == 1) {
      MenuWnd_DrawCursor(0);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      lVar9 = UiLayout_UpdateAnimById(0x3d,1);
      lVar6 = UiLayout_UpdateAnimById(0x3e,2);
      if (lVar9 == 0 && lVar6 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        piVar10[0xd] = 0;
        iVar2 = UiMgr_FindLayout(0x3d);
        iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
        *(undefined4 *)(iVar2 + 0x324) = 0;
        if (*(int *)(iVar2 + 0x334) == 0) {
          *(undefined4 *)(iVar2 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x330) = 1;
        }
        iVar2 = UiMgr_FindLayout(0x3e);
        iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
        *(undefined4 *)(iVar2 + 0x338) = 0;
        if (*(int *)(iVar2 + 0x348) == 0) {
          *(undefined4 *)(iVar2 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x344) = 1;
        }
        Menu_ClearSlot(0);
        MenuWnd_DrawDialogText(0x3d,0x36edd4,1,1);
      }
      else {
        bVar1 = false;
      }
      MenuScr_Draw_SpringRate(param_1,1);
      iVar2 = UiMgr_FindLayout(0x3e);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x62,8);
      iVar2 = UiMgr_FindLayout(0x3e);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    }
    else {
      MenuWnd_DrawCursor();
    }
    MenuScr_Draw_SpringRate(param_1,0);
  }
  else {
    if (piVar10[0xd] == 0) {
      MenuWnd_DrawCursor(0);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      lVar9 = UiLayout_UpdateAnimById(0x3d,3);
      lVar6 = UiLayout_UpdateAnimById(0x3e,0);
      if (lVar9 == 0 && lVar6 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        piVar10[0xd] = 1;
        iVar2 = UiMgr_FindLayout(0x3d);
        iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
        *(undefined4 *)(iVar2 + 0x34c) = 0;
        if (*(int *)(iVar2 + 0x35c) == 0) {
          *(undefined4 *)(iVar2 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x358) = 1;
        }
        iVar2 = UiMgr_FindLayout(0x3e);
        iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
        *(undefined4 *)(iVar2 + 0x310) = 0;
        if (*(int *)(iVar2 + 800) == 0) {
          *(undefined4 *)(iVar2 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x31c) = 1;
        }
        Menu_ClearSlot(0);
        MenuWnd_DrawDialogText(0x3e,0x36edd8,1,1);
      }
      else {
        bVar1 = false;
      }
      MenuScr_Draw_SpringRate(param_1,0);
    }
    else {
      MenuWnd_DrawCursor(1);
    }
    iVar2 = UiMgr_FindLayout(0x3e);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x62,8);
    iVar2 = UiMgr_FindLayout(0x3e);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    MenuScr_Draw_SpringRate(param_1,1);
  }
  if ((bVar1) && (piVar10[0xe] == 0)) {
    if (piVar10[0xd] == 0) {
      MenuWnd_SetItemState(0x3d,*(undefined4 *)(&DAT_0032e150 + *piVar10 * 4),1,0);
    }
    else {
      MenuWnd_SetItemState(0x3e,*(undefined4 *)(&DAT_0032e150 + (*piVar10 + piVar10[0xb]) * 4),1,0);
    }
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  UiLayout_UpdateAnimById(0x3d,8);
  iVar2 = UiMgr_FindLayout(0x3d);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00282c40  size 0x364
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_PowerTrain(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar2 = param_1[7];
  param_1[7] = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(10);
    iVar2 = UiMgr_FindLayout(0x38);
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
    uVar3 = UiRes_GetLayoutData(0xb);
    iVar2 = UiMgr_FindLayout(0x38);
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
  lVar4 = UiLayout_UpdateAnimById(0x37,1);
  lVar5 = UiLayout_UpdateAnimById(0x38,0);
  if (lVar4 == 0 && lVar5 == 0) {
    param_1[6] = 0;
  }
  if ((param_1[8] != 0) && (lVar4 = UiLayout_UpdateAnimById(0x38), lVar4 == 0)) {
    param_1[8] = 0;
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x38,*(undefined4 *)(&DAT_0032dfe0 + *param_1 * 4),1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  MenuWnd_DrawText(0x37,0x32,0x192);
  bVar1 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 1U) == 0)) {
    bVar1 = false;
  }
  uVar6 = 0;
  if (!bVar1) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x38,0x19,uVar6,0x196);
  bVar1 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 2U) == 0)) {
    bVar1 = false;
  }
  uVar6 = 0;
  if (!bVar1) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x38,0x1a,uVar6,0x197);
  bVar1 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 4U) == 0)) {
    bVar1 = false;
  }
  uVar6 = 0;
  if (!bVar1) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x38,0x1b,uVar6,0x198);
  bVar1 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 8U) == 0)) {
    bVar1 = false;
  }
  uVar6 = 0;
  if (!bVar1) {
    uVar6 = 3;
  }
  MenuWnd_DrawTextId(0x38,0x1c,uVar6,0x199);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032dfd0 + *param_1 * 4));
  iVar2 = UiMgr_FindLayout(0x37);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x38);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x00282fb0  size 0x484
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_PowerTrain_2fb0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = param_1[7];
  param_1[7] = 0;
  if (iVar3 != 0) {
    uVar4 = UiRes_GetLayoutData(6);
    iVar3 = UiMgr_FindLayout(0x37);
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
    *(undefined4 *)(iVar3 + 800) = uVar4;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    if (param_1[2] != 1) {
      uVar4 = UiRes_GetLayoutData(7);
      iVar3 = UiMgr_FindLayout(0x37);
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
      *(undefined4 *)(iVar3 + 0x35c) = uVar4;
      *(undefined4 *)(iVar3 + 0x358) = 1;
    }
    uVar4 = UiRes_GetLayoutData(8);
    iVar3 = UiMgr_FindLayout(0x37);
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
    *(undefined4 *)(iVar3 + 0x334) = uVar4;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(9);
    iVar3 = UiMgr_FindLayout(0x37);
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
    *(undefined4 *)(iVar3 + 0x348) = uVar4;
    *(undefined4 *)(iVar3 + 0x344) = 1;
    Menu_ClearSlot(0);
  }
  lVar5 = UiLayout_UpdateAnimById(0x37,0);
  lVar6 = UiLayout_UpdateAnimById(0x37,3);
  if (lVar5 == 0 && lVar6 == 0) {
    param_1[6] = 0;
  }
  if (param_1[8] != 0) {
    if (param_1[4] == 1) {
      iVar3 = UiMgr_FindLayout(0x37);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,1,5);
      lVar5 = UiLayout_UpdateAnimById(0x37,1);
      if (lVar5 == 0) {
        param_1[8] = 0;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0x37,2);
      if (lVar5 == 0) {
        param_1[8] = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x37,*(undefined4 *)(&DAT_0032dfc0 + *param_1 * 4),1,0);
    uVar2 = param_1[0xc];
  }
  else {
    MenuWnd_SetItemVisible(0);
    uVar2 = param_1[0xc];
  }
  bVar1 = true;
  if ((uVar2 != 0) && ((uVar2 & 1) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x37,0x32,uVar7,0x192);
  bVar1 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 2U) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x37,0x33,uVar7,0x193);
  bVar1 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 4U) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x37,0x34,uVar7,0x194);
  bVar1 = true;
  if ((param_1[0xc] != 0) && ((param_1[0xc] & 8U) == 0)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if (!bVar1) {
    uVar7 = 3;
  }
  MenuWnd_DrawTextId(0x37,0x35,uVar7,0x195);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032dfb0 + *param_1 * 4));
  iVar3 = UiMgr_FindLayout(0x37);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 42 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PagePartInfo_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar1 = UiMgr_FindLayout(0x36);
  UiLayout_UpdateAnim(*_g_UiMgr + iVar1 * 0x4f4 + 4,0);
  iVar1 = UiMgr_FindLayout(0x36);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  (*(code *)(&PTR_MenuScr_Draw_PowerTrain_2fb0_0032df80)[*(int *)((int)param_1 + 0xc)])(param_1);
  if (*(int *)((int)param_1 + 0x3c) != 5) {
    maybe_PartInfo_Draw(param_1);
  }
  if ((g_MenuMgr->flags & 4) == 0) {
    lVar2 = UiLayout_UpdateAnimById(0x37,2);
    if (lVar2 == 0) {
      if ((g_MenuMgr->flags & 1) == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
      }
    }
    iVar1 = UiMgr_FindLayout(0x37);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  }
  return;
}

// 0x002835d0  size 0xe2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 42 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PagePartInfo_Enter(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(5);
  iVar2 = UiMgr_FindLayout(0x36);
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
  uVar1 = UiRes_GetLayoutData(6);
  iVar2 = UiMgr_FindLayout(0x37);
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
  uVar1 = UiRes_GetLayoutData(8);
  iVar2 = UiMgr_FindLayout(0x37);
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
  uVar1 = UiRes_GetLayoutData(9);
  iVar2 = UiMgr_FindLayout(0x37);
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
  uVar1 = UiRes_GetLayoutData(7);
  iVar2 = UiMgr_FindLayout(0x37);
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
  uVar1 = UiRes_GetLayoutData(10);
  iVar2 = UiMgr_FindLayout(0x38);
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
  uVar1 = UiRes_GetLayoutData(0xb);
  iVar2 = UiMgr_FindLayout(0x38);
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
  uVar1 = UiRes_GetLayoutData(0xc);
  iVar2 = UiMgr_FindLayout(0x39);
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
  uVar1 = UiRes_GetLayoutData(0xd);
  iVar2 = UiMgr_FindLayout(0x39);
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
  uVar1 = UiRes_GetLayoutData(0xe);
  iVar2 = UiMgr_FindLayout(0x3a);
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
  uVar1 = UiRes_GetLayoutData(0xf);
  iVar2 = UiMgr_FindLayout(0x3a);
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
  uVar1 = UiRes_GetLayoutData(0x10);
  iVar2 = UiMgr_FindLayout(0x3a);
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
  *(undefined4 *)(iVar2 + 0x348) = uVar1;
  *(undefined4 *)(iVar2 + 0x344) = 1;
  uVar1 = UiRes_GetLayoutData(0x11);
  iVar2 = UiMgr_FindLayout(0x3b);
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
  uVar1 = UiRes_GetLayoutData(0x12);
  iVar2 = UiMgr_FindLayout(0x3b);
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
  uVar1 = UiRes_GetLayoutData(0x13);
  iVar2 = UiMgr_FindLayout(0x3c);
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
  uVar1 = UiRes_GetLayoutData(0x14);
  iVar2 = UiMgr_FindLayout(0x3c);
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
  uVar1 = UiRes_GetLayoutData(0x15);
  iVar2 = UiMgr_FindLayout(0x3d);
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
  uVar1 = UiRes_GetLayoutData(0x16);
  iVar2 = UiMgr_FindLayout(0x3d);
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
  uVar1 = UiRes_GetLayoutData(0x17);
  iVar2 = UiMgr_FindLayout(0x3d);
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
  uVar1 = UiRes_GetLayoutData(0x18);
  iVar2 = UiMgr_FindLayout(0x3d);
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
  uVar1 = UiRes_GetLayoutData(0x22);
  iVar2 = UiMgr_FindLayout(0x3d);
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
  *(undefined4 *)(iVar2 + 0x370) = uVar1;
  *(undefined4 *)(iVar2 + 0x36c) = 1;
  uVar1 = UiRes_GetLayoutData(0x19);
  iVar2 = UiMgr_FindLayout(0x3e);
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
  uVar1 = UiRes_GetLayoutData(0x1a);
  iVar2 = UiMgr_FindLayout(0x3e);
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
  uVar1 = UiRes_GetLayoutData(0x1b);
  iVar2 = UiMgr_FindLayout(0x3e);
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
  uVar1 = UiRes_GetLayoutData(0x23);
  iVar2 = UiMgr_FindLayout(0x3e);
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
  *(undefined4 *)(iVar2 + 0x35c) = uVar1;
  *(undefined4 *)(iVar2 + 0x358) = 1;
  uVar1 = UiRes_GetLayoutData(0x1c);
  iVar2 = UiMgr_FindLayout(0x3f);
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
  uVar1 = UiRes_GetLayoutData(0x1d);
  iVar2 = UiMgr_FindLayout(0x3f);
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
  uVar1 = UiRes_GetLayoutData(0x1e);
  iVar2 = UiMgr_FindLayout(0x40);
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
  uVar1 = UiRes_GetLayoutData(0x1f);
  iVar2 = UiMgr_FindLayout(0x40);
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

