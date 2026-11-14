// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00214000 - 0x00218000
#include "ghidra_types.h"

// 0x002144a0  size 0x7b8
void scrrace_sub_002144a0(int param_1)

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
  
  iVar7 = *(int *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (iVar7 != 0) {
    uVar2 = Msg_Get(0x51);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    uVar2 = Msg_Get(0x52);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    uVar2 = Msg_Get(0x53);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    uVar2 = Msg_Get(0x54);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    uVar2 = Msg_Get(0x55);
    iVar7 = UiMgr_FindLayout(0x17);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    uVar2 = Msg_Get(0x193);
    iVar7 = UiMgr_FindLayout(0x11);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    uVar2 = Msg_Get(0x194);
    iVar7 = UiMgr_FindLayout(0x11);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    uVar2 = Msg_Get(0x5f);
    iVar7 = UiMgr_FindLayout(0x19);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    uVar2 = Msg_Get(0x61);
    iVar7 = UiMgr_FindLayout(0x19);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
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
    iVar1 = UiMgr_FindLayout(0x11);
    iVar7 = *piRam0036f42c;
    uVar6 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(iVar7 + iVar1 * 0x4f4 + 4,0,0x16,uVar6);
    MenuWnd_DrawDialogText(0x17,0x36e8c0,2,0);
    Menu_ClearSlot(0);
  }
  MenuWnd_DrawCursor(1);
  lVar3 = UiLayout_UpdateAnimById(0x17,0);
  lVar4 = UiLayout_UpdateAnimById(0x17,1);
  lVar5 = UiLayout_UpdateAnimById(0x17,2);
  if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  if (*(int *)(param_1 + 0x4d4) != 0) {
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
  }
  puVar9 = auStack_a0;
  puVar10 = &DAT_0032a040;
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
  MenuList_Update(param_1 + 0x4dc,auStack_a0,aiStack_50);
  if (*(int *)(param_1 + 0x4b4) == 1) {
    if (*(int *)(param_1 + 0x4b8) == 1) {
      iVar7 = UiMgr_FindLayout(0x11);
      iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
      *(undefined4 *)(iVar7 + 0x310) = 0;
      if (*(int *)(iVar7 + 800) == 0) {
        *(undefined4 *)(iVar7 + 0x31c) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x31c) = 1;
      }
      *(undefined4 *)(param_1 + 0x4b8) = 0;
    }
    lVar3 = UiLayout_UpdateAnimById(0x11,1);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x4b4) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) != -1) {
    iVar7 = UiMgr_FindLayout(0x11);
    iVar7 = *piRam0036f42c + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    iVar1 = UiMgr_FindLayout(0x11);
    iVar7 = *piRam0036f42c;
    uVar6 = MsgId_ForChapter(*(undefined4 *)(param_1 + 0xc));
    UiElem_SetPropInt(iVar7 + iVar1 * 0x4f4 + 4,0,0x16,uVar6);
    UiLayout_UpdateAnimById(0x11,0);
  }
  uVar6 = Profile_Get(0);
  uVar6 = garage_sub_001bcb00(uVar6);
  MenuWnd_DrawNumber(0x17,0x37,uVar6);
  MenuWnd_SetTitle(3,0x178);
  iVar7 = UiMgr_FindLayout(0x11);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0x16);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0x17);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar7 * 0x4f4 + 4);
  return;
}

// 0x00214c80  size 0xc0
void menuscr_sub_00214c80(undefined8 param_1)

{
  long lVar1;
  
  if ((*(uint *)(iGpffff8d68 + 0x28) & 2) == 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_scrrace_sub_002144a0_0032a020)[*(int *)((int)param_1 + 0x4c0)])(param_1);
  if (((*(uint *)(iGpffff8d68 + 0x28) & 4) == 0) &&
     (lVar1 = Menu_IsInputIdle((int)param_1 + 0x4bc), lVar1 == 1)) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00214d60  size 0x17c
void scrgarage_sub_00214d60(undefined8 param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  uVar2 = Profile_Get(0);
  uVar2 = Garage_GetPartSlot(uVar2,param_1);
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetDay(uVar3);
  CarRec_InstallPart(&uStack_1a0,uVar2,uVar3);
  puVar6 = auStack_18c;
  puVar5 = auStack_bc;
  iVar4 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  puVar8 = auStack_150;
  puVar7 = auStack_80;
  iVar4 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar4);
  puVar8 = auStack_130;
  puVar7 = auStack_60;
  iVar4 = 0x15;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = puVar8[1];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
  } while (0 < iVar4);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar2 = Profile_Get(0);
  uVar2 = Profile_GetDayOfMonth(uVar2);
  Garage_RecalcCar(&uStack_d0,uVar2);
  return;
}

// 0x00214ee0  size 0x450
void scrgarage_sub_00214ee0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar1 != 0) {
    uVar3 = Msg_Get(0xaf);
    iVar1 = UiMgr_FindLayout(0x23);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar3 = Msg_Get(0xb0);
    iVar1 = UiMgr_FindLayout(0x23);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar3 = Msg_Get(0xb1);
    iVar1 = UiMgr_FindLayout(0x23);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 1;
    *(undefined4 *)(iVar1 + 0x348) = uVar3;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    Menu_ClearSlot(0);
  }
  if (*piGpffff8d78 == 1) {
    MenuWnd_SetItemState
              (0x23,*(undefined4 *)
                     ((int)register0x000001c0 + *(int *)(param_1 + 0x54) * 4 + -0x7dd0),1,0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x23,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x23), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  iVar1 = Profile_Get(0);
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bc600(uVar5,*(undefined2 *)(iVar1 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  iVar1 = Garage_RepairCar(uVar5,uVar6);
  iVar2 = Garage_ComputeValue(uVar5);
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bcb00(uVar5);
  MenuWnd_DrawNumber(0x20,0x3d,uVar5);
  MenuWnd_DrawText(0x23,0x1d,1);
  MenuWnd_DrawText(0x23,0x1f,2);
  MenuWnd_DrawText(0x23,0x1e,0x18a);
  MenuWnd_DrawText(0x23,0x20,0x18e);
  MenuWnd_DrawText(0x23,0x21,400);
  MenuWnd_DrawNumber(0x23,0x22,iVar1 - iVar2);
  MenuWnd_DrawNumber(0x23,0x23,iVar1 - iVar2);
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bcb00(uVar5);
  MenuWnd_DrawNumber(0x20,0x3d,uVar5);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar1 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(*piGpffff8d3c + iVar1 * 0x4f4 + 4,4);
  iVar1 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x23);
  UiLayout_UpdateAnim(*piGpffff8d3c + iVar1 * 0x4f4 + 4,2);
  iVar1 = UiMgr_FindLayout(0x23);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x00215330  size 0x454
void scrgarage_sub_00215330(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar1 != 0) {
    uVar2 = Msg_Get(0xac);
    iVar1 = UiMgr_FindLayout(0x22);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = Msg_Get(0xad);
    iVar1 = UiMgr_FindLayout(0x22);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    uVar2 = Msg_Get(0xae);
    iVar1 = UiMgr_FindLayout(0x22);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 1;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    Menu_ClearSlot(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0x22,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (lVar3 = UiLayout_UpdateAnimById(0x22), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*piGpffff8d78 == 1) {
    MenuWnd_SetItemState
              (0x22,*(undefined4 *)
                     ((int)register0x000001c0 + *(int *)(param_1 + 0x54) * 4 + -0x7dd8),1,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  iVar1 = Profile_Get(0);
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bc600(uVar4,*(undefined2 *)(iVar1 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDay(uVar5);
  uVar5 = Garage_RepairCar(uVar4,uVar5);
  uVar4 = Garage_ComputeValue(uVar4);
  uVar6 = Profile_Get(0);
  uVar6 = garage_sub_001bcb00(uVar6);
  MenuWnd_DrawNumber(0x20,0x3d,uVar6);
  MenuWnd_DrawText(0x22,0x1e,1);
  MenuWnd_DrawText(0x22,0x20,2);
  MenuWnd_DrawText(0x22,0x1f,0x189);
  MenuWnd_DrawText(0x22,0x21,0x18e);
  MenuWnd_DrawText(0x22,0x22,399);
  MenuWnd_DrawText(0x22,0x23,400);
  MenuWnd_DrawNumber(0x22,0x24,(int)uVar5 - (int)uVar4);
  MenuWnd_DrawNumber(0x22,0x25,uVar4);
  MenuWnd_DrawNumber(0x22,0x26,uVar5);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar1 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(*piGpffff8d3c + iVar1 * 0x4f4 + 4,4);
  iVar1 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x22);
  UiLayout_UpdateAnim(*piGpffff8d3c + iVar1 * 0x4f4 + 4,2);
  iVar1 = UiMgr_FindLayout(0x22);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x00215790  size 0x528
void scrgarage_sub_00215790(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar1 != 0) {
    iVar1 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x37,8);
    iVar1 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x38,8);
    iVar1 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x39,8);
    iVar1 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x3c,8);
    iVar1 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x27,8);
    iVar1 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar1 * 0x4f4 + 4,0x28,8);
    iVar2 = UiMgr_FindLayout(0x20);
    iVar1 = *piGpffff8d3c;
    uVar5 = Msg_Get(0xa9);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar5);
    uVar3 = Msg_Get(0xab);
    iVar1 = UiMgr_FindLayout(0x21);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar3 = Msg_Get(0xb2);
    iVar1 = UiMgr_FindLayout(0x21);
    iVar1 = *piGpffff8d3c + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x21,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x21), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  MenuWnd_DrawText(0x21,0x13,0x173);
  MenuWnd_DrawText(0x21,0x14,0x174);
  MenuWnd_DrawText(0x21,0x15,0x175);
  iVar1 = Profile_Get(0);
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bc600(uVar5,*(undefined2 *)(iVar1 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      uVar6 = Profile_Get(0);
      uVar6 = Profile_GetDay(uVar6);
      iVar1 = Garage_RepairCar(uVar5,uVar6);
      iVar2 = Garage_ComputeValue(uVar5);
      MenuWnd_DrawNumber(0x20,0x3e,iVar1 - iVar2);
    }
    else if (iVar1 == 0) {
      uVar6 = Profile_Get(0);
      uVar6 = Profile_GetDay(uVar6);
      uVar5 = Garage_RepairCar(uVar5,uVar6);
      MenuWnd_DrawNumber(0x20,0x3e,uVar5);
    }
  }
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bcb00(uVar5);
  MenuWnd_DrawNumber(0x20,0x3d,uVar5);
  if (*piGpffff8d78 == 1) {
    MenuWnd_SetItemState(0x21,*(undefined4 *)(&DAT_0032a270 + *(int *)(param_1 + 0x50) * 4),1,0);
  }
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032a280 + *(int *)(param_1 + 0x50) * 4));
  iVar1 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(*piGpffff8d3c + iVar1 * 0x4f4 + 4,4);
  iVar1 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x21);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar1 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x00215cc0  size 0x8bc
void scrcareer_sub_00215cc0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  
  bVar1 = *(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x34);
  uVar6 = Profile_Get(0);
  lVar7 = Garage_FindCar(uVar6);
  uVar6 = Profile_Get(0);
  iVar2 = Garage_FindCar(uVar6);
  iVar3 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x34);
  }
  else {
    Menu_ShowDialog(iGpffff8d68 + 0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == 0) {
      Menu_SetCursorAlpha(iGpffff8d68 + 0x654,1);
      iVar3 = *(int *)(param_1 + 0x58);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58);
    }
    if (iVar3 == 0) {
      uVar4 = Msg_Get(0xa6);
      iVar3 = UiMgr_FindLayout(0x20);
      iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
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
      uVar4 = Msg_Get(0xa8);
      iVar3 = UiMgr_FindLayout(0x20);
      iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
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
    }
    uVar4 = Msg_Get(0xa7);
    iVar3 = UiMgr_FindLayout(0x20);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
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
    uVar4 = Msg_Get(0xa9);
    iVar3 = UiMgr_FindLayout(0x20);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
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
    uVar4 = Msg_Get(0x3ec);
    iVar3 = UiMgr_FindLayout(0x20);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar3 + 900) = 0;
    *(undefined4 *)(iVar3 + 0x374) = 0;
    if (*(int *)(iVar3 + 900) == 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x380) = 1;
    }
    *(undefined4 *)(iVar3 + 0x374) = 0;
    if (*(int *)(iVar3 + 900) == 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x380) = 1;
    }
    *(undefined4 *)(iVar3 + 0x37c) = 0;
    *(undefined4 *)(iVar3 + 900) = uVar4;
    *(undefined4 *)(iVar3 + 0x380) = 1;
    uVar4 = Msg_Get(0x3ed);
    iVar3 = UiMgr_FindLayout(0x20);
    iVar3 = *piGpffff8d3c + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x398) = 0;
    *(undefined4 *)(iVar3 + 0x388) = 0;
    if (*(int *)(iVar3 + 0x398) == 0) {
      *(undefined4 *)(iVar3 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x394) = 1;
    }
    *(undefined4 *)(iVar3 + 0x388) = 0;
    if (*(int *)(iVar3 + 0x398) == 0) {
      *(undefined4 *)(iVar3 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x394) = 1;
    }
    *(undefined4 *)(iVar3 + 0x390) = 0;
    *(undefined4 *)(iVar3 + 0x398) = uVar4;
    *(undefined4 *)(iVar3 + 0x394) = 1;
    uVar4 = Msg_Get(0x195);
    *(undefined4 *)(iGpffff8d68 + 0x350) = 0xffffffff;
    *(undefined4 *)(iGpffff8d68 + 0x35c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x34c) = 0;
    if (*(int *)(iGpffff8d68 + 0x35c) == 0) {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    }
    *(undefined4 *)(iGpffff8d68 + 0x34c) = 0;
    if (*(int *)(iGpffff8d68 + 0x35c) == 0) {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    }
    *(undefined4 *)(iGpffff8d68 + 0x354) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x35c) = uVar4;
    *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    MenuWnd_DrawDialogText(0x20,0x32a200,4,0xffffffffffffffff);
    Menu_ClearSlot(0);
    iVar3 = *(int *)(param_1 + 0x34);
  }
  if ((*(int *)(param_1 + 0x38) != iVar3) && (*(int *)(param_1 + 0x38) = iVar3, bVar1)) {
    MenuWnd_SetHelpText(0);
  }
  if (bVar1) {
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x37,8);
    if (lVar7 < 2) {
      MenuWnd_DrawFooter(0x183,0xffffffffffffffff,0);
    }
    else {
      MenuWnd_DrawFooter(0x188,0xffffffffffffffff,0);
    }
  }
  else {
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x37,8);
  }
  iVar3 = iGpffff8d68 + 0x40;
  lVar7 = UiLayout_UpdateAnimById(0x20,0);
  lVar8 = UiLayout_UpdateAnimById(0x20,1);
  lVar9 = UiLayout_UpdateAnimById(0x20,2);
  lVar10 = UiLayout_UpdateAnimIfActive(iVar3,0);
  if (lVar10 == 0 && (lVar9 == 0 && (lVar7 == 0 && lVar8 == 0))) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) == 0) {
      uVar6 = Profile_Get(0);
      lVar7 = Garage_FindCar(uVar6);
      MenuWnd_DrawCursor(lVar7 != 1);
    }
  }
  else {
    Menu_BlockInput(iGpffff8d68 + 0x654);
    lVar7 = UiLayout_UpdateAnimById(0x20,3);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (iVar2 < 0xd) {
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x39,8);
    iVar3 = UiMgr_FindLayout(0x20);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,0x3c,8);
  }
  iVar3 = 0;
  puVar12 = &DAT_0032a210;
  do {
    if (iVar2 <= iVar3) {
      iVar5 = UiMgr_FindLayout(0x20);
      UiElem_SetPropFloat(0,*piGpffff8d3c + iVar5 * 0x4f4 + 4,*puVar12,8);
    }
    iVar3 = iVar3 + 1;
    puVar12 = puVar12 + 1;
  } while (iVar3 < 0xc);
  if (*piGpffff8d78 == 1) {
    MenuWnd_SetItemState(0x20,*(undefined4 *)(&DAT_0032a240 + *(int *)(param_1 + 0x3c) * 4),0,0);
  }
  MenuWnd_DrawStatus(*(undefined4 *)(param_1 + 0x34),0,0xffffffffffffffff,0);
  iVar3 = iGpffff8d68 + 0x40;
  uVar6 = MenuText_RivalCar(*(undefined4 *)(param_1 + 0x34),0);
  UiElem_SetPropInt(iVar3,0,0x16,uVar6);
  iVar3 = Profile_Get(0);
  uVar6 = Profile_Get(0);
  uVar6 = garage_sub_001bc600(uVar6,*(undefined2 *)(iVar3 + 0x13ee + *(int *)(param_1 + 0x34) * 2));
  uVar11 = Profile_Get(0);
  uVar11 = Profile_GetDay(uVar11);
  uVar6 = Garage_RepairCar(uVar6,uVar11);
  MenuWnd_DrawNumber(0x20,0x3e,uVar6);
  MenuWnd_DrawLabel(0x20,0x3f,0x3b,*(int *)(param_1 + 0x34) + 1,iVar2);
  uVar6 = Profile_Get(0);
  uVar6 = garage_sub_001bcb00(uVar6);
  MenuWnd_DrawNumber(0x20,0x3d,uVar6);
  MenuWnd_Update(param_1 + 0x40,0x20,6,5);
  if (bVar1) {
    MenuWnd_SetTitle(1,0x184);
  }
  else {
    MenuWnd_SetTitle(3,0x184);
  }
  Menu_DrawFrame(iGpffff8d68 + 0x654);
  iVar3 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x20);
  UiLayout_UpdateAnim(*piGpffff8d3c + iVar3 * 0x4f4 + 4,4);
  iVar3 = UiMgr_FindLayout(0x20);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar3 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x00216580  size 0x4a4
void scrgarage_sub_00216580(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 uStack_340;
  undefined2 uStack_33e;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined1 auStack_32c [24];
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined2 auStack_2f0 [16];
  undefined2 auStack_2d0 [42];
  undefined1 uStack_27c;
  undefined4 uStack_278;
  undefined2 uStack_270;
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_25c [24];
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined2 auStack_220 [16];
  undefined2 auStack_200 [42];
  undefined1 uStack_1ac;
  undefined4 uStack_1a8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piRam0036f42c + iVar2 * 0x4f4 + 4,0x13,8);
  }
  lVar4 = MenuWnd_DrawFooter(0x18b,*(undefined4 *)(param_1 + 0x54),0x36e910);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar4 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_1a0,uVar5,uVar6);
  puVar8 = auStack_18c;
  puVar7 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar2);
  puVar10 = auStack_150;
  puVar9 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  puVar10 = auStack_130;
  puVar9 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  uVar5 = Garage_RecalcCar(&uStack_d0,uVar5);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar5);
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_340,uVar5,uVar6);
  puVar8 = auStack_32c;
  puVar7 = auStack_25c;
  iVar2 = 0x17;
  uStack_270 = uStack_340;
  uStack_260 = uStack_330;
  uStack_26e = uStack_33e;
  uStack_26c = uStack_33c;
  uStack_268 = uStack_338;
  uStack_264 = uStack_334;
  do {
    iVar2 = iVar2 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar2);
  puVar10 = auStack_2f0;
  puVar9 = auStack_220;
  iVar2 = 8;
  uStack_238 = uStack_308;
  uStack_234 = uStack_304;
  uStack_230 = uStack_300;
  uStack_244 = uStack_314;
  uStack_240 = uStack_310;
  uStack_23c = uStack_30c;
  uStack_22c = uStack_2fc;
  uStack_228 = uStack_2f8;
  uStack_224 = uStack_2f4;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  puVar10 = auStack_2d0;
  puVar9 = auStack_200;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  uStack_1ac = uStack_27c;
  uStack_1a8 = uStack_278;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  iVar2 = Garage_RecalcCar(&uStack_270,uVar5);
  uVar5 = Profile_Get(0);
  iVar3 = garage_sub_001bcb00(uVar5);
  MenuWnd_DrawNumber(0x1e,0x1e,iVar3 - iVar2);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,*piRam0036f42c + iVar2 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iRam0036f458 + 0x40);
  return;
}

// 0x00216a30  size 0x4a4
void scrgarage_sub_00216a30(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 uStack_340;
  undefined2 uStack_33e;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined1 auStack_32c [24];
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined2 auStack_2f0 [16];
  undefined2 auStack_2d0 [42];
  undefined1 uStack_27c;
  undefined4 uStack_278;
  undefined2 uStack_270;
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_25c [24];
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined2 auStack_220 [16];
  undefined2 auStack_200 [42];
  undefined1 uStack_1ac;
  undefined4 uStack_1a8;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x13,8);
  }
  lVar4 = MenuWnd_DrawFooter(0x18d,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar4 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_1a0,uVar5,uVar6);
  puVar8 = auStack_18c;
  puVar7 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar2);
  puVar10 = auStack_150;
  puVar9 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  puVar10 = auStack_130;
  puVar9 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  uVar5 = Garage_RecalcCar(&uStack_d0,uVar5);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar5);
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_340,uVar5,uVar6);
  puVar8 = auStack_32c;
  puVar7 = auStack_25c;
  iVar2 = 0x17;
  uStack_270 = uStack_340;
  uStack_260 = uStack_330;
  uStack_26e = uStack_33e;
  uStack_26c = uStack_33c;
  uStack_268 = uStack_338;
  uStack_264 = uStack_334;
  do {
    iVar2 = iVar2 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar2);
  puVar10 = auStack_2f0;
  puVar9 = auStack_220;
  iVar2 = 8;
  uStack_238 = uStack_308;
  uStack_234 = uStack_304;
  uStack_230 = uStack_300;
  uStack_244 = uStack_314;
  uStack_240 = uStack_310;
  uStack_23c = uStack_30c;
  uStack_22c = uStack_2fc;
  uStack_228 = uStack_2f8;
  uStack_224 = uStack_2f4;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  puVar10 = auStack_2d0;
  puVar9 = auStack_200;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar1;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  } while (0 < iVar2);
  uStack_1ac = uStack_27c;
  uStack_1a8 = uStack_278;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  iVar2 = Garage_RecalcCar(&uStack_270,uVar5);
  uVar5 = Profile_Get(0);
  iVar3 = garage_sub_001bcb00(uVar5);
  MenuWnd_DrawNumber(0x1e,0x1e,iVar3 - iVar2);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x00216ee0  size 0x364
void scrgarage_sub_00216ee0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x13,8);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x54),
                             (int)register0x000001c0 + -0x7de8);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar4 = MenuText_CarShortName
                    (*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe);
  MenuWnd_DrawLabel(5,0x1c,0x17b,uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = Garage_GetPartSlot(uVar4,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDay(uVar5);
  CarRec_InstallPart(&uStack_1a0,uVar4,uVar5);
  puVar7 = auStack_18c;
  puVar6 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (0 < iVar2);
  puVar9 = auStack_150;
  puVar8 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  puVar9 = auStack_130;
  puVar8 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetDayOfMonth(uVar4);
  uVar4 = Garage_RecalcCar(&uStack_d0,uVar4);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bcb00(uVar4);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar4);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x00217250  size 0x338
void scrgarage_sub_00217250(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x13,8);
  }
  lVar3 = MenuWnd_DrawFooter(0x17c,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar4 = Profile_Get(0);
  uVar4 = Garage_GetPartSlot(uVar4,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDay(uVar5);
  CarRec_InstallPart(&uStack_1a0,uVar4,uVar5);
  puVar7 = auStack_18c;
  puVar6 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (0 < iVar2);
  puVar9 = auStack_150;
  puVar8 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  puVar9 = auStack_130;
  puVar8 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetDayOfMonth(uVar4);
  uVar4 = Garage_RecalcCar(&uStack_d0,uVar4);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bcb00(uVar4);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar4);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x00217590  size 0x338
void scrgarage_sub_00217590(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x12,8);
    iVar2 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar2 * 0x4f4 + 4,0x13,8);
  }
  lVar3 = MenuWnd_DrawFooter(0x17d,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x70) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar4 = Profile_Get(0);
  uVar4 = Garage_GetPartSlot(uVar4,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDay(uVar5);
  CarRec_InstallPart(&uStack_1a0,uVar4,uVar5);
  puVar7 = auStack_18c;
  puVar6 = auStack_bc;
  iVar2 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar2 = iVar2 + -1;
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (0 < iVar2);
  puVar9 = auStack_150;
  puVar8 = auStack_80;
  iVar2 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  puVar9 = auStack_130;
  puVar8 = auStack_60;
  iVar2 = 0x15;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar9[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar1;
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (0 < iVar2);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetDayOfMonth(uVar4);
  uVar4 = Garage_RecalcCar(&uStack_d0,uVar4);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar4);
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bcb00(uVar4);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar4);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar2 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x002178d0  size 0x564
void scrgarage_sub_002178d0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar7 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar7 != 0) {
    iVar2 = UiMgr_FindLayout(0x1e);
    iVar7 = *piGpffff8d3c;
    uVar5 = Msg_Get(0xa3);
    UiLayout_PlayAnim(iVar7 + iVar2 * 0x4f4 + 4,uVar5);
    uVar3 = Msg_Get(0xa4);
    iVar7 = UiMgr_FindLayout(0x1f);
    iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
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
    uVar3 = Msg_Get(0xa5);
    iVar7 = UiMgr_FindLayout(0x1f);
    iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
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
    Menu_ClearSlot(0);
    iVar7 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar7 * 0x4f4 + 4,0x12,8);
    iVar7 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar7 * 0x4f4 + 4,0x13,8);
    Menu_ShowDialog(iGpffff8d68 + 0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == -1) {
      Menu_SetCursorAlpha(iGpffff8d68 + 0x654,1);
    }
  }
  lVar4 = UiLayout_UpdateAnimById(0x1f,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    Menu_BlockInput(iGpffff8d68 + 0x654);
    lVar4 = UiLayout_UpdateAnimById(0x1f,1);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (*piGpffff8d78 == 1) {
    MenuWnd_SetItemState
              (0x1f,*(undefined4 *)
                     ((int)register0x000001c0 + *(int *)(param_1 + 0x50) * 4 + -0x7df8),1,0);
  }
  MenuWnd_DrawText(0x1f,0xd,0x171);
  MenuWnd_DrawText(0x1f,0xe,0x172);
  uVar5 = Profile_Get(0);
  uVar5 = Garage_GetPartSlot(uVar5,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
  uVar6 = Profile_Get(0);
  uVar6 = Profile_GetDay(uVar6);
  CarRec_InstallPart(&uStack_1a0,uVar5,uVar6);
  puVar9 = auStack_18c;
  puVar8 = auStack_bc;
  iVar7 = 0x17;
  uStack_d0 = uStack_1a0;
  uStack_c0 = uStack_190;
  uStack_ce = uStack_19e;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  do {
    iVar7 = iVar7 + -1;
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar7);
  puVar11 = auStack_150;
  puVar10 = auStack_80;
  iVar7 = 8;
  uStack_98 = uStack_168;
  uStack_94 = uStack_164;
  uStack_90 = uStack_160;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  uStack_9c = uStack_16c;
  uStack_8c = uStack_15c;
  uStack_88 = uStack_158;
  uStack_84 = uStack_154;
  do {
    iVar7 = iVar7 + -1;
    uVar1 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar1;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar7);
  puVar11 = auStack_130;
  puVar10 = auStack_60;
  iVar7 = 0x15;
  do {
    iVar7 = iVar7 + -1;
    uVar1 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar1;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 2;
  } while (0 < iVar7);
  uStack_c = uStack_dc;
  uStack_8 = uStack_d8;
  uVar5 = Profile_Get(0);
  uVar5 = Profile_GetDayOfMonth(uVar5);
  uVar5 = Garage_RecalcCar(&uStack_d0,uVar5);
  MenuWnd_DrawNumber(0x1e,0x1f,uVar5);
  uVar5 = Profile_Get(0);
  uVar5 = garage_sub_001bcb00(uVar5);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar5);
  MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe,
                     0xffffffffffffffff,0);
  iVar7 = iGpffff8d68 + 0x40;
  uVar5 = MenuText_RivalCar(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),
                            0xfffffffffffffffe);
  UiElem_SetPropInt(iVar7,0,0x16,uVar5);
  MenuWnd_SetTitle(3,*(undefined4 *)
                      ((int)register0x000001c0 + *(int *)(param_1 + 0x50) * 4 + -0x7df0));
  Menu_DrawFrame(iGpffff8d68 + 0x654);
  iVar7 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0x1f);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar7 * 0x4f4 + 4);
  UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  return;
}

// 0x00217e40  size 0x92c
void scrgarage_sub_00217e40(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  iVar10 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar10 == 0) {
    iVar10 = *(int *)(param_1 + 4);
  }
  else {
    Menu_ShowDialog(iGpffff8d68 + 0x654,0x118,4);
    if (*(int *)(param_1 + 0x58) == 2) {
      iVar10 = *(int *)(param_1 + 4);
    }
    else {
      Menu_SetCursorAlpha(iGpffff8d68 + 0x654,1);
      iVar10 = *(int *)(param_1 + 4);
    }
    if (iVar10 == 0) {
      MenuWnd_SetHelpText(0);
    }
    uVar2 = Msg_Get(0xa0);
    iVar10 = UiMgr_FindLayout(0x1e);
    iVar10 = *piGpffff8d3c + iVar10 * 0x4f4;
    *(undefined4 *)(iVar10 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar10 + 800) = 0;
    *(undefined4 *)(iVar10 + 0x310) = 0;
    if (*(int *)(iVar10 + 800) == 0) {
      *(undefined4 *)(iVar10 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar10 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar10 + 0x310) = 0;
    if (*(int *)(iVar10 + 800) == 0) {
      *(undefined4 *)(iVar10 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar10 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar10 + 0x318) = 0;
    *(undefined4 *)(iVar10 + 800) = uVar2;
    *(undefined4 *)(iVar10 + 0x31c) = 1;
    uVar2 = Msg_Get(0xa1);
    iVar10 = UiMgr_FindLayout(0x1e);
    iVar10 = *piGpffff8d3c + iVar10 * 0x4f4;
    *(undefined4 *)(iVar10 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x334) = 0;
    *(undefined4 *)(iVar10 + 0x324) = 0;
    if (*(int *)(iVar10 + 0x334) == 0) {
      *(undefined4 *)(iVar10 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar10 + 0x330) = 1;
    }
    *(undefined4 *)(iVar10 + 0x324) = 0;
    if (*(int *)(iVar10 + 0x334) == 0) {
      *(undefined4 *)(iVar10 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar10 + 0x330) = 1;
    }
    *(undefined4 *)(iVar10 + 0x32c) = 0;
    *(undefined4 *)(iVar10 + 0x334) = uVar2;
    *(undefined4 *)(iVar10 + 0x330) = 1;
    uVar2 = Msg_Get(0xa2);
    iVar10 = UiMgr_FindLayout(0x1e);
    iVar10 = *piGpffff8d3c + iVar10 * 0x4f4;
    *(undefined4 *)(iVar10 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x348) = 0;
    *(undefined4 *)(iVar10 + 0x338) = 0;
    if (*(int *)(iVar10 + 0x348) == 0) {
      *(undefined4 *)(iVar10 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar10 + 0x344) = 1;
    }
    *(undefined4 *)(iVar10 + 0x338) = 0;
    if (*(int *)(iVar10 + 0x348) == 0) {
      *(undefined4 *)(iVar10 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar10 + 0x344) = 1;
    }
    *(undefined4 *)(iVar10 + 0x340) = 0;
    *(undefined4 *)(iVar10 + 0x348) = uVar2;
    *(undefined4 *)(iVar10 + 0x344) = 1;
    uVar2 = Msg_Get(0xa3);
    iVar10 = UiMgr_FindLayout(0x1e);
    iVar10 = *piGpffff8d3c + iVar10 * 0x4f4;
    *(undefined4 *)(iVar10 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x35c) = 0;
    *(undefined4 *)(iVar10 + 0x34c) = 0;
    if (*(int *)(iVar10 + 0x35c) == 0) {
      *(undefined4 *)(iVar10 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar10 + 0x358) = 1;
    }
    *(undefined4 *)(iVar10 + 0x34c) = 0;
    if (*(int *)(iVar10 + 0x35c) == 0) {
      *(undefined4 *)(iVar10 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar10 + 0x358) = 1;
    }
    *(undefined4 *)(iVar10 + 0x354) = 0;
    *(undefined4 *)(iVar10 + 0x35c) = uVar2;
    *(undefined4 *)(iVar10 + 0x358) = 1;
    uVar2 = Msg_Get(0x195);
    *(undefined4 *)(iGpffff8d68 + 0x350) = 0xffffffff;
    *(undefined4 *)(iGpffff8d68 + 0x35c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x34c) = 0;
    if (*(int *)(iGpffff8d68 + 0x35c) == 0) {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    }
    *(undefined4 *)(iGpffff8d68 + 0x34c) = 0;
    if (*(int *)(iGpffff8d68 + 0x35c) == 0) {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    }
    *(undefined4 *)(iGpffff8d68 + 0x354) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x35c) = uVar2;
    *(undefined4 *)(iGpffff8d68 + 0x358) = 1;
    Menu_ClearSlot(0);
    if (*(int *)(param_1 + 4) < 2) {
      iVar10 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0,*piGpffff8d3c + iVar10 * 0x4f4 + 4,0x12,8);
      iVar10 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0,*piGpffff8d3c + iVar10 * 0x4f4 + 4,0x13,8);
    }
    else {
      iVar10 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0x3f800000,*piGpffff8d3c + iVar10 * 0x4f4 + 4,0x12,8);
      iVar10 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0x3f800000,*piGpffff8d3c + iVar10 * 0x4f4 + 4,0x13,8);
    }
    MenuWnd_DrawDialogText(0x1e,(int)register0x000001c0 + -0x7e00,2,1);
    iVar10 = *(int *)(param_1 + 4);
  }
  MenuWnd_DrawCursor(1 < iVar10);
  lVar16 = 2;
  if (*(int *)(param_1 + 4) == 0) {
    lVar16 = MenuWnd_DrawFooter(0x191,0xffffffffffffffff,0);
  }
  if (*(int *)(param_1 + 0x58) == 2) {
    lVar7 = UiLayout_UpdateAnimById(0x1e,1);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    iVar10 = iGpffff8d68 + 0x40;
    lVar7 = UiLayout_UpdateAnimById(0x1e,0);
    lVar4 = UiLayout_UpdateAnimById(0x1e,1);
    lVar5 = UiLayout_UpdateAnimById(0x1e,2);
    lVar6 = UiLayout_UpdateAnimIfActive(iVar10,0);
    if (lVar6 == 0 && (lVar5 == 0 && (lVar7 == 0 && lVar4 == 0))) {
      if (*(int *)(param_1 + 4) == 0) {
        if (lVar16 != 2) goto LAB_00217f40;
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      iVar10 = *(int *)(param_1 + 0x70);
      goto LAB_00217f44;
    }
  }
LAB_00217f40:
  iVar10 = *(int *)(param_1 + 0x70);
LAB_00217f44:
  if (iVar10 != 0) {
    Menu_BlockInput(iGpffff8d68 + 0x654);
    if (*(int *)(param_1 + 4) == 0) {
      if (lVar16 == 2) {
        MenuWnd_RequestRedraw();
      }
      if ((lVar16 == 3) && (lVar16 = UiLayout_UpdateAnimById(0x1e), lVar16 == 0)) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
    else {
      lVar16 = UiLayout_UpdateAnimById(0x1e,3);
      if (lVar16 == 0) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
  }
  if ((*(int *)(param_1 + 4) != 0) && (*piGpffff8d78 == 1)) {
    MenuWnd_SetItemState(0x1e,*(undefined4 *)(&DAT_0032a1c0 + *(int *)(param_1 + 8) * 4),0,0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar8 = Profile_Get(0);
    uVar8 = Garage_GetPartSlot(uVar8,*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc));
    uVar9 = Profile_Get(0);
    uVar9 = Profile_GetDay(uVar9);
    CarRec_InstallPart(&uStack_1a0,uVar8,uVar9);
    puVar12 = auStack_18c;
    puVar11 = auStack_bc;
    iVar10 = 0x17;
    uStack_d0 = uStack_1a0;
    uStack_c0 = uStack_190;
    uStack_ce = uStack_19e;
    uStack_cc = uStack_19c;
    uStack_c8 = uStack_198;
    uStack_c4 = uStack_194;
    do {
      iVar10 = iVar10 + -1;
      *puVar11 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
    } while (0 < iVar10);
    puVar14 = auStack_150;
    puVar13 = auStack_80;
    iVar10 = 8;
    uStack_98 = uStack_168;
    uStack_94 = uStack_164;
    uStack_90 = uStack_160;
    uStack_a4 = uStack_174;
    uStack_a0 = uStack_170;
    uStack_9c = uStack_16c;
    uStack_8c = uStack_15c;
    uStack_88 = uStack_158;
    uStack_84 = uStack_154;
    do {
      iVar10 = iVar10 + -1;
      uVar1 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar1;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar10);
    puVar14 = auStack_130;
    puVar13 = auStack_60;
    iVar10 = 0x15;
    do {
      iVar10 = iVar10 + -1;
      uVar1 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar1;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 2;
    } while (0 < iVar10);
    uStack_c = uStack_dc;
    uStack_8 = uStack_d8;
    uVar8 = Profile_Get(0);
    uVar8 = Profile_GetDayOfMonth(uVar8);
    uVar8 = Garage_RecalcCar(&uStack_d0,uVar8);
    MenuWnd_DrawNumber(0x1e,0x1f,uVar8);
    MenuWnd_DrawLabel(0x1e,0x20,0x3b,*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
  }
  uVar8 = Profile_Get(0);
  uVar8 = garage_sub_001bcb00(uVar8);
  MenuWnd_DrawNumber(0x1e,0x1e,uVar8);
  if (*(int *)(param_1 + 4) == 0) {
    MenuWnd_DrawStatus(0xfffffffffffffffe,0xffffffffffffffff,0xffffffffffffffff,0);
  }
  else {
    MenuWnd_DrawStatus(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),0xfffffffffffffffe
                       ,0xffffffffffffffff,0);
    iVar10 = iGpffff8d68 + 0x40;
    uVar8 = MenuText_RivalCar(*(undefined4 *)(*(int *)(param_1 + 8) * 4 + param_1 + 0xc),
                              0xfffffffffffffffe);
    UiElem_SetPropInt(iVar10,0,0x16,uVar8);
  }
  MenuWnd_SetTitle(3,0x180);
  iVar10 = 0;
  puVar15 = &DAT_0032a1e0;
  do {
    if (*(int *)(param_1 + 4) <= iVar10) {
      iVar3 = UiMgr_FindLayout(0x1e);
      UiElem_SetPropFloat(0,*piGpffff8d3c + iVar3 * 0x4f4 + 4,*puVar15,8);
    }
    iVar10 = iVar10 + 1;
    puVar15 = puVar15 + 1;
  } while (iVar10 < 6);
  if (*(int *)(param_1 + 4) == 0) {
    iVar10 = UiMgr_FindLayout(0x1e);
    UiElem_SetPropFloat(0,*piGpffff8d3c + iVar10 * 0x4f4 + 4,0x1a,8);
  }
  Menu_DrawFrame(iGpffff8d68 + 0x654);
  iVar10 = UiMgr_FindLayout(0x1d);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar10 * 0x4f4 + 4);
  iVar10 = UiMgr_FindLayout(0x1e);
  UiLayout_Draw(0x3f800000,*piGpffff8d3c + iVar10 * 0x4f4 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    UiLayout_Draw(0x3f800000,iGpffff8d68 + 0x40);
  }
  return;
}

