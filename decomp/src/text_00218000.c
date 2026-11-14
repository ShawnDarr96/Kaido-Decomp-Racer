// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00218000 - 0x0021c000
#include "ghidra_types.h"

// 0x00218770  size 0x394
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_sub_00218770(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar1 != 0) {
    iVar2 = UiMgr_FindLayout(0x12);
    iVar1 = *_g_UiMgr;
    uVar5 = Msg_Get(0x3d);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar5);
    iVar2 = UiMgr_FindLayout(0x12);
    iVar1 = *_g_UiMgr;
    uVar5 = Msg_Get(0x49);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar5);
    iVar2 = UiMgr_FindLayout(0x18);
    iVar1 = *_g_UiMgr;
    uVar5 = Msg_Get(0xb3);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar5);
    uVar3 = Msg_Get(0x9e);
    iVar1 = UiMgr_FindLayout(0x1c);
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar3 = Msg_Get(0x9f);
    iVar1 = UiMgr_FindLayout(0x1c);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    Menu_ClearSlot(0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x1c,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(int *)(param_1 + 0x70) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x1c), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x1c,*(undefined4 *)(&DAT_0036e8e0 + *(int *)(param_1 + 0x4c) * 4),1,0);
  }
  MenuWnd_DrawText(0x12,0x40,0x102);
  MenuWnd_DrawText(0x18,0x1a,0xfc);
  MenuWnd_DrawText(0x1c,0xd,0x16f);
  MenuWnd_DrawText(0x1c,0xe,0x170);
  scrgarage_sub_0022d9c0();
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0036e8e8 + *(int *)(param_1 + 0x4c) * 4));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  UiLayout_UpdateAnimById(0x13,0);
  iVar1 = UiMgr_FindLayout(0x1c);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x18);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x12);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x13);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x00218b30  size 0xc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_sub_00218b30(undefined8 param_1)

{
  long lVar1;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_scrcareer_sub_00218770_0032a190)[*(int *)((int)param_1 + 0x5c)])(param_1);
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar1 = Menu_IsInputIdle((int)param_1 + 0x58), lVar1 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x00218bf0  size 0x3b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_sub_00218bf0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Msg_Get(0x3c);
  iVar2 = UiMgr_FindLayout(0x12);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  uVar1 = Msg_Get(0x3d);
  iVar2 = UiMgr_FindLayout(0x12);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 0x334) == 0) {
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
  }
  uVar1 = Msg_Get(0x3e);
  iVar2 = UiMgr_FindLayout(0x12);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 0x348) == 0) {
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
  }
  uVar1 = Msg_Get(0x3f);
  iVar2 = UiMgr_FindLayout(0x12);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 0x35c) == 0) {
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
  }
  uVar1 = Msg_Get(0x40);
  iVar2 = UiMgr_FindLayout(0x12);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 0x370) == 0) {
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
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  uVar1 = Msg_Get(0x41);
  iVar2 = UiMgr_FindLayout(0x13);
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
  uVar1 = Msg_Get(0xaa);
  iVar2 = UiMgr_FindLayout(0x20);
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
  return;
}

// 0x00218fb0  size 0xa3c
void scrrace_sub_00218fb0(uint *param_1)

{
  bool bVar1;
  short sVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_f0 [16];
  int iStack_e0;
  int iStack_dc;
  undefined1 auStack_b0 [8];
  int iStack_a8;
  int iStack_a4;
  undefined1 auStack_90 [12];
  char cStack_84;
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  int aiStack_30 [4];
  int iStack_20;
  undefined4 auStack_18 [3];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar3 = param_1[7] == param_1[2] + 1;
  uVar11 = Menu_MapCursorToItem(param_1[5]);
  piVar7 = (int *)0x14;
  piVar14 = aiStack_30;
  piVar4 = piVar14;
  while (piVar4 != (int *)0x0) {
    *(undefined1 *)piVar14 = 0;
    piVar14 = (int *)((int)piVar14 + 1);
    piVar7 = (int *)((int)piVar7 + -1);
    piVar4 = piVar7;
  }
  puVar8 = (undefined4 *)0x14;
  puVar15 = auStack_50;
  puVar5 = puVar15;
  while (puVar5 != (undefined4 *)0x0) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + -1);
    puVar5 = puVar8;
  }
  MenuWnd_DrawTextId(0x26,0x3d,1,0x2fb);
  MenuWnd_DrawTextId(0x26,0x40,1,0x2fc);
  MenuWnd_DrawTextId(0x26,0x41,1,0x2fd);
  MenuWnd_DrawTextId(0x26,0x42,1,0x2fe);
  MenuWnd_DrawTextId(0x26,0x43,1,0x2ff);
  if (bVar3) {
    uVar13 = 0;
    if ((param_1[1] & 1) == 0) {
      uVar13 = 3;
    }
    uVar12 = Menu_MapCursorToItem(param_1[5]);
    uVar12 = MsgId_ForModeShort(uVar12,0);
    MenuWnd_DrawTextId(0x26,0x66,uVar13,uVar12);
    uVar13 = 0;
    if ((param_1[1] & 2) == 0) {
      uVar13 = 3;
    }
    uVar12 = Menu_MapCursorToItem(param_1[5]);
    uVar12 = MsgId_ForModeShort(uVar12,1);
    MenuWnd_DrawTextId(0x26,0x67,uVar13,uVar12);
    uVar13 = 0;
    if ((param_1[1] & 4) == 0) {
      uVar13 = 3;
    }
    uVar12 = Menu_MapCursorToItem(param_1[5]);
    uVar12 = MsgId_ForModeShort(uVar12,2);
    MenuWnd_DrawTextId(0x26,0x68,uVar13,uVar12);
  }
  else {
    uVar13 = 0;
    if ((*param_1 & 1) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x66,uVar13,0x301);
    uVar13 = 0;
    if ((*param_1 & 2) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x67,uVar13,0x302);
    uVar13 = 0;
    if ((*param_1 & 4) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x68,uVar13,0x303);
    uVar13 = 0;
    if ((*param_1 & 8) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x69,uVar13,0x304);
    uVar13 = 0;
    if ((*param_1 & 0x10) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x6a,uVar13,0x305);
    uVar13 = 0;
    if ((*param_1 & 0x20) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x6b,uVar13,0x306);
    uVar13 = 0;
    if ((*param_1 & 0x40) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x6c,uVar13,0x307);
    uVar13 = 0;
    if ((*param_1 & 0x80) == 0) {
      uVar13 = 3;
    }
    MenuWnd_DrawTextId(0x26,0x6d,uVar13,0x308);
  }
  if (bVar3) {
    password_sub_002dfed0(auStack_90,uVar11,param_1[8]);
    bVar1 = cStack_84 == '\x01';
    iVar17 = 0;
    piVar14 = aiStack_30;
    puVar15 = auStack_50;
    do {
      if (bVar1) {
        uVar13 = Race_GetTimeOfDay();
        iVar9 = password_sub_002df710(uVar11,param_1[8],uVar13,iVar17);
        *piVar14 = iVar9;
      }
      else {
        uVar13 = Race_GetTimeOfDay();
        iVar9 = password_sub_002df680(uVar11,param_1[8],uVar13,iVar17);
        *piVar14 = iVar9;
      }
      uVar10 = password_sub_002df7f0(iVar17);
      *puVar15 = uVar10;
      iVar17 = iVar17 + 1;
      piVar14 = piVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar17 < 5);
  }
  else {
    iVar17 = 0;
    piVar14 = aiStack_30;
    puVar15 = auStack_50;
    do {
      uVar13 = Race_GetTimeOfDay();
      iVar9 = password_sub_002df870(uVar11,param_1[7],param_1[8],uVar13,iVar17);
      uVar16 = param_1[7];
      *piVar14 = iVar9;
      uVar10 = password_sub_002df9f0(uVar16,iVar17);
      *puVar15 = uVar10;
      iVar17 = iVar17 + 1;
      piVar14 = piVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar17 < 5);
    bVar1 = true;
  }
  uVar16 = (uint)uVar11 & 0xff;
  iVar17 = Profile_Get(0);
  sVar2 = *(short *)(iVar17 + uVar16 * 2 + 0xd85c);
  if (bVar3) {
    iVar17 = *(int *)(&DAT_00342340 + uVar16 * 4);
  }
  else {
    iVar17 = *(int *)(&DAT_00342310 + param_1[7] * 4);
  }
  uVar13 = MsgId_ForSlot(param_1[5],0);
  MenuWnd_DrawLabel(0x26,0x4e,0x34e,uVar13);
  MenuWnd_DrawLabel(0x26,0x4f,0x322);
  MenuWnd_DrawLabel(0x26,0x52,0x34f,5,(int)sVar2 / iVar17,5);
  MenuWnd_DrawRivalLabel(0x26,0x50,5,0x3a,sVar2);
  MenuWnd_DrawRivalLabel(0x26,0x51,5,0x3a,iVar17);
  if (bVar3) {
    password_sub_002dfed0(auStack_f0,uVar11,param_1[8]);
    uVar13 = MsgId_OnOff(iStack_e0 <= iStack_dc);
    MenuWnd_DrawText(0x26,0x3e,uVar13);
    cVar6 = Race_IsTimeTrialMode(uVar11,0);
    if (cVar6 == '\0') {
      ui_sub_001f6720(auStack_18,uVar11,9 - iStack_e0,9 - iStack_dc);
    }
    else {
      ui_sub_001f6720(auStack_18,uVar11,iStack_e0,iStack_dc);
    }
    ui_sub_001f6720(auStack_18,uVar11,iStack_e0,iStack_dc);
  }
  else {
    password_sub_002dff30(auStack_b0,uVar11,param_1[7],param_1[8]);
    uVar13 = MsgId_OnOff(iStack_a8 <= iStack_a4);
    MenuWnd_DrawText(0x26,0x3e,uVar13);
    cVar6 = Race_IsTimeTrialMode(uVar11,0);
    if (cVar6 == '\0') {
      ui_sub_001f6720(auStack_18,uVar11,9 - iStack_a8,9 - iStack_a4);
    }
    else {
      ui_sub_001f6720(auStack_18,uVar11,iStack_a8,iStack_a4);
    }
  }
  uVar11 = newlib_sub_0012f600(auStack_18[0]);
  MenuWnd_DrawRivalLabel(0x26,0x3f,4,0x15,uVar11);
  if (bVar1) {
    if (aiStack_30[0] < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x44,5,0x34d);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x44,5,0x323,aiStack_30[0] / 1000,aiStack_30[0] % 1000);
    }
    if (aiStack_30[1] < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x45,5,0x34d,aiStack_30[1]);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x45,5,0x323,aiStack_30[1] / 1000,aiStack_30[1] % 1000);
    }
    if (aiStack_30[2] < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x46,5,0x34d,aiStack_30[2]);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x46,5,0x323,aiStack_30[2] / 1000,aiStack_30[2] % 1000);
    }
    if (aiStack_30[3] < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x47,5,0x34d,aiStack_30[3]);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x47,5,0x323,aiStack_30[3] / 1000,aiStack_30[3] % 1000);
    }
    if (iStack_20 < 1000) {
      MenuWnd_DrawRivalLabel(0x26,0x48,5,0x34d,iStack_20);
    }
    else {
      MenuWnd_DrawRivalLabel(0x26,0x48,5,0x323,iStack_20 / 1000,iStack_20 % 1000);
    }
  }
  else {
    Time_SplitHms(0,aiStack_30[0],&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x44,5,0x331,uStack_4,uStack_8,uStack_c);
    Time_SplitHms(0,aiStack_30[1],&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x45,5,0x331,uStack_4,uStack_8,uStack_c);
    Time_SplitHms(0,aiStack_30[2],&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x46,5,0x331,uStack_4,uStack_8,uStack_c);
    Time_SplitHms(0,aiStack_30[3],&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x47,5,0x331,uStack_4,uStack_8,uStack_c);
    Time_SplitHms(0,iStack_20,&uStack_4,&uStack_8,&uStack_c);
    MenuWnd_DrawRivalLabel(0x26,0x48,5,0x331,uStack_4,uStack_8,uStack_c);
  }
  MenuWnd_DrawNumber(0x26,0x49,auStack_50[0]);
  MenuWnd_DrawNumber(0x26,0x4a,auStack_50[1]);
  MenuWnd_DrawNumber(0x26,0x4b,auStack_50[2]);
  MenuWnd_DrawNumber(0x26,0x4c,auStack_50[3]);
  MenuWnd_DrawNumber(0x26,0x4d,uStack_40);
  if (bVar3) {
    MenuWnd_DrawRivalLabel(0x26,0x55,1,0x34b);
  }
  else {
    MenuWnd_DrawRivalLabel(0x26,0x55,1,0x321,param_1[7] + 1);
  }
  return;
}

// 0x002199f0  size 0x14c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_sub_002199f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x4c) == 6) {
    uVar4 = 0x324;
  }
  else {
    uVar4 = 0x34a;
  }
  iVar1 = *(int *)(iVar2 + 0x5c);
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar3 = MenuWnd_DrawFooter(uVar4,0xffffffffffffffff,0);
  if (*(int *)(iVar2 + 0x60) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(iVar2 + 0x60) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar2 + 0x58) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  scrrace_sub_00218fb0(param_1);
  UiLayout_UpdateAnimById(0x26,7);
  iVar2 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x26);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x00219b40  size 0x1c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_sub_00219b40(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    iVar1 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x25,8);
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x11d,0);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    Menu_BlockInput(_g_MenuMgr + 0x654);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  MenuWnd_DrawLabel(0x2a,0xd,0x3a,*(int *)(param_1 + 0x30) + 1);
  uVar2 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x14),1);
  MenuWnd_DrawText(0x2a,0xe,uVar2);
  uVar2 = MsgId_CarName(*(undefined4 *)(param_1 + 0x30));
  MenuWnd_DrawText(0x2a,0xf,uVar2);
  uVar2 = Profile_Get(0);
  uVar2 = Profile_GetDayClamped(uVar2);
  MenuWnd_DrawLabel(0x2a,0x10,0x48,uVar2);
  uVar2 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
  uVar2 = MsgId_ForModeShort(uVar2,*(undefined4 *)(param_1 + 0x20));
  MenuWnd_DrawText(0x2a,0x11,uVar2);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  iVar1 = UiMgr_FindLayout(0x2a);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x2b);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00219d00  size 0x7f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_sub_00219d00(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_40 [12];
  char cStack_34;
  
  password_sub_002df320();
  iVar6 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    uVar3 = Msg_Get(0x1c0);
    iVar6 = UiMgr_FindLayout(0x28);
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
    *(undefined4 *)(iVar6 + 0x318) = 1;
    *(undefined4 *)(iVar6 + 800) = uVar3;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar3 = Msg_Get(0x1c1);
    iVar6 = UiMgr_FindLayout(0x29);
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
    *(undefined4 *)(iVar6 + 0x318) = 1;
    *(undefined4 *)(iVar6 + 800) = uVar3;
    *(undefined4 *)(iVar6 + 0x31c) = 1;
    uVar3 = Msg_Get(0x42e);
    iVar6 = UiMgr_FindLayout(0x29);
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
    *(undefined4 *)(iVar6 + 0x334) = uVar3;
    *(undefined4 *)(iVar6 + 0x330) = 1;
    uVar3 = Msg_Get(0x42f);
    iVar6 = UiMgr_FindLayout(0x29);
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
    *(undefined4 *)(iVar6 + 0x348) = uVar3;
    *(undefined4 *)(iVar6 + 0x344) = 1;
    uVar3 = Msg_Get(0x430);
    iVar6 = UiMgr_FindLayout(0x29);
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
    *(undefined4 *)(iVar6 + 0x35c) = uVar3;
    *(undefined4 *)(iVar6 + 0x358) = 1;
    uVar3 = Msg_Get(0x431);
    iVar6 = UiMgr_FindLayout(0x29);
    iVar6 = *_g_UiMgr + iVar6 * 0x4f4;
    *(undefined4 *)(iVar6 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x370) = 0;
    *(undefined4 *)(iVar6 + 0x360) = 0;
    if (*(int *)(iVar6 + 0x370) == 0) {
      *(undefined4 *)(iVar6 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x360) = 0;
    if (*(int *)(iVar6 + 0x370) == 0) {
      *(undefined4 *)(iVar6 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar6 + 0x368) = 0;
    *(undefined4 *)(iVar6 + 0x370) = uVar3;
    *(undefined4 *)(iVar6 + 0x36c) = 1;
    UiLayout_UpdateAnimById(0x29);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) &&
     (lVar5 = UiLayout_UpdateAnimById(0x29,1), lVar5 == 0)) {
    if (*(int *)(param_1 + 0x40) == 0) {
      Se_PlayMenu(0x14);
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    lVar5 = UiLayout_UpdateAnimById(0x29,2);
    if (lVar5 == 0) {
      if (*(int *)(param_1 + 0x40) == 1) {
        Se_PlayMenu(0x14);
        *(undefined4 *)(param_1 + 0x40) = 2;
      }
      lVar5 = UiLayout_UpdateAnimById(0x29,3);
      if (lVar5 == 0) {
        if (*(int *)(param_1 + 0x40) == 2) {
          Se_PlayMenu(0x14);
          *(undefined4 *)(param_1 + 0x40) = 3;
        }
        lVar5 = UiLayout_UpdateAnimById(0x29,4);
        if ((lVar5 == 0) && (*(int *)(param_1 + 0x40) == 3)) {
          Se_PlayMenu(0xc);
          *(undefined4 *)(param_1 + 0x40) = 4;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x40) == 4) {
    iVar6 = 0;
    do {
      do {
        lVar5 = UiLayout_UpdateAnimById(0x29,iVar6 + 1);
      } while (lVar5 != 0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
  }
  uVar4 = GameState_Get_1();
  uVar4 = MsgId_OnOff(uVar4);
  MenuWnd_DrawText(0x29,0x3c,uVar4);
  uVar4 = RaceCtx_Get_13();
  uVar4 = MsgId_YesNo(uVar4);
  MenuWnd_DrawText(0x29,0x3f,uVar4);
  uVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
  uVar4 = Race_GetCourseId(uVar4);
  uVar4 = MsgId_ForResult(uVar4);
  MenuWnd_DrawText(0x29,0x3e,uVar4);
  uVar4 = MsgId_ForSlot(*(undefined4 *)(param_1 + 0x14),1);
  MenuWnd_DrawText(0x29,0x3d,uVar4);
  MenuWnd_DrawNumber(0x29,0x43,*(undefined4 *)(param_1 + 0x38));
  iVar6 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x3c);
  if (iVar6 == 0) {
    MenuWnd_DrawNumber(0x29,0x45,0);
    iVar6 = *(int *)(param_1 + 0x2c);
  }
  else {
    if (iVar6 / 1000 < 1) {
      MenuWnd_DrawLabel(0x29,0x45,0x353,*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x3c),iVar6);
    }
    else {
      MenuWnd_DrawLabel(0x29,0x45,0x352);
    }
    iVar6 = *(int *)(param_1 + 0x2c);
  }
  MenuWnd_DrawNumber(0x29,0x48,*(int *)(param_1 + 0x38) + iVar6 * *(int *)(param_1 + 0x3c));
  uVar4 = Profile_Get(0);
  uVar4 = garage_sub_001bcb00(uVar4);
  MenuWnd_DrawNumber(0x29,0x49,uVar4);
  MenuWnd_DrawTextId(0x29,0x41,1,0x2f9);
  MenuWnd_DrawTextId(0x29,0x44,1,0x34c);
  MenuWnd_DrawTextId(0x29,0x46,1,0x350);
  MenuWnd_DrawTextId(0x29,0x47,0,0x351);
  bVar2 = true;
  iVar6 = *(int *)(_g_GameState + 0x3a4);
  iVar1 = *(int *)(_g_GameState + 0x3a8);
  if (iVar6 == 1) {
    uVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
    password_sub_002dfed0(auStack_40,uVar4,*(undefined4 *)(param_1 + 0x20));
    if (cStack_34 == '\x02') {
      bVar2 = false;
    }
  }
  if (bVar2) {
    MenuWnd_DrawText(0x29,0x40,0x65);
  }
  else {
    MenuWnd_DrawText(0x29,0x40,0x66);
  }
  if (iVar6 == 1) {
    uVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
    uVar4 = MsgId_ForModeShort(uVar4,*(undefined4 *)(param_1 + 0x20));
    MenuWnd_DrawText(0x29,0x42,uVar4);
    MenuWnd_DrawRivalLabel(0x29,0x3b,1,0x34b);
  }
  else {
    MenuWnd_DrawText(0x29,0x42,*(int *)(param_1 + 0x20) + 0x301);
    MenuWnd_DrawRivalLabel(0x29,0x3b,1,0x321,iVar1 + 1);
  }
  iVar6 = UiMgr_FindLayout(0x29);
  UiElem_SetNumber(*_g_UiMgr + iVar6 * 0x4f4 + 4,0x39,0x16,
                   *(undefined4 *)(&DAT_0032a350 + *(int *)(param_1 + 0x34) * 4));
  UiLayout_UpdateAnimById(0x28,0);
  if (*(int *)(param_1 + 0x34) == 0) {
    UiLayout_UpdateAnimById(0x29,0);
  }
  iVar6 = UiMgr_FindLayout(0x28);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  iVar6 = UiMgr_FindLayout(0x29);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x0021a4f0  size 0x180
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_sub_0021a4f0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0x5c);
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  bVar1 = *(int *)(iVar4 + 0x24) != 1;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar3 = MenuWnd_DrawFooter(0x57,bVar1,0x36e948);
  if (*(int *)(iVar4 + 0x60) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      *(undefined4 *)(iVar4 + 0x60) = 0;
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
  }
  scrrace_sub_00218fb0(param_1);
  UiLayout_UpdateAnimById(0x26,7);
  iVar2 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x26);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0x27);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0036e950 + (uint)bVar1 * 4));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0021a670  size 0x57c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_sub_0021a670(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar1 = *(int *)(iVar7 + 0x5c);
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  if (iVar1 != 0) {
    iVar1 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x6e,8);
    iVar1 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x6f,8);
    iVar2 = UiMgr_FindLayout(0x26);
    iVar1 = *_g_UiMgr;
    uVar4 = Msg_Get(*(int *)(iVar7 + 0x20) + 0x1b4);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar4);
    iVar2 = UiMgr_FindLayout(0x25);
    iVar1 = *_g_UiMgr;
    uVar4 = Msg_Get(0x1c2);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar4);
    iVar2 = UiMgr_FindLayout(0x25);
    iVar1 = *_g_UiMgr;
    uVar4 = Msg_Get(0x1c3);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar4);
    iVar2 = UiMgr_FindLayout(0x25);
    iVar1 = *_g_UiMgr;
    uVar4 = Msg_Get(0x1c4);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar4);
    uVar3 = Msg_Get(0x42d);
    iVar1 = UiMgr_FindLayout(0x26);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    if (*(int *)(iVar1 + 0x3ac) == 0) {
      *(undefined4 *)(iVar1 + 0x3a0) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x3ac) = 0;
      *(undefined4 *)(iVar1 + 0x39c) = 0;
      if (*(int *)(iVar1 + 0x3ac) == 0) {
        *(undefined4 *)(iVar1 + 0x3a8) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3a8) = 1;
      }
      *(undefined4 *)(iVar1 + 0x39c) = 0;
      if (*(int *)(iVar1 + 0x3ac) == 0) {
        *(undefined4 *)(iVar1 + 0x3a8) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3a8) = 1;
      }
      *(undefined4 *)(iVar1 + 0x3a4) = 1;
      *(undefined4 *)(iVar1 + 0x3ac) = uVar3;
      *(undefined4 *)(iVar1 + 0x3a8) = 1;
    }
    uVar3 = Msg_Get(0x1be);
    iVar1 = UiMgr_FindLayout(0x27);
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar3 = Msg_Get(0x1bf);
    iVar1 = UiMgr_FindLayout(0x27);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    iVar1 = UiMgr_FindLayout(0x25);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x49,8);
    iVar1 = UiMgr_FindLayout(0x25);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x4a,8);
    Menu_ClearSlot(0);
    iVar1 = *(int *)(iVar7 + 8);
    iVar2 = *(int *)(iVar7 + 0x1c);
    uVar4 = Menu_MapCursorToItem(*(undefined4 *)(iVar7 + 0x14));
    if (iVar2 == iVar1 + 1) {
      uVar5 = Profile_Get(0);
      lVar6 = password_sub_002de8e0(uVar5,1,0,uVar4,*(undefined4 *)(iVar7 + 0x20));
    }
    else {
      uVar5 = Profile_Get(0);
      lVar6 = password_sub_002de8e0
                        (uVar5,0,*(undefined4 *)(iVar7 + 0x20),uVar4,*(undefined4 *)(iVar7 + 0x1c));
    }
    if (lVar6 != 0) {
      iVar1 = UiMgr_FindLayout(0x26);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,
                          *(undefined4 *)(&DAT_0032a2b0 + *(int *)(iVar7 + 0x20) * 4),8);
    }
  }
  lVar6 = UiLayout_UpdateAnimById(0x27,0);
  if (lVar6 == 0) {
    *(undefined4 *)(iVar7 + 0x58) = 0;
  }
  if ((*(int *)(iVar7 + 0x60) != 0) && (lVar6 = UiLayout_UpdateAnimById(0x27), lVar6 == 0)) {
    *(undefined4 *)(iVar7 + 0x60) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x27,*(undefined4 *)(&DAT_0036e938 + *(int *)(iVar7 + 0xc) * 4),1,0);
  }
  MenuWnd_DrawText(0x27,0xe,0x2f6);
  MenuWnd_DrawText(0x27,0xf,0x2f7);
  scrrace_sub_00218fb0(param_1);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0036e940 + *(int *)(iVar7 + 0xc) * 4));
  UiLayout_UpdateAnimById(0x26,7);
  iVar1 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x26);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x27);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0021abf0  size 0xb90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_sub_0021abf0(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar9 = (int)param_1;
  iVar3 = *(int *)(iVar9 + 0x5c);
  *(undefined4 *)(iVar9 + 0x5c) = 0;
  bVar1 = *(int *)(iVar9 + 0x1c) == *(int *)(iVar9 + 8) + 1;
  if (iVar3 != 0) {
    uVar2 = Msg_Get(0x1b0);
    iVar3 = UiMgr_FindLayout(0x26);
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
    uVar2 = Msg_Get(0x1b0);
    iVar3 = UiMgr_FindLayout(0x26);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
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
    *(undefined4 *)(iVar3 + 0x398) = uVar2;
    *(undefined4 *)(iVar3 + 0x394) = 1;
    uVar2 = Msg_Get(0x1bc);
    iVar3 = UiMgr_FindLayout(0x26);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
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
    uVar2 = Msg_Get(0x1bd);
    iVar3 = UiMgr_FindLayout(0x26);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
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
    *(undefined4 *)(iVar3 + 900) = uVar2;
    *(undefined4 *)(iVar3 + 0x380) = 1;
    uVar2 = Msg_Get(0x42d);
    iVar3 = UiMgr_FindLayout(0x26);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    if (*(int *)(iVar3 + 0x3ac) == 0) {
      *(undefined4 *)(iVar3 + 0x3a0) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x3ac) = 0;
      *(undefined4 *)(iVar3 + 0x39c) = 0;
      if (*(int *)(iVar3 + 0x3ac) == 0) {
        *(undefined4 *)(iVar3 + 0x3a8) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x3a8) = 1;
      }
      *(undefined4 *)(iVar3 + 0x39c) = 0;
      if (*(int *)(iVar3 + 0x3ac) == 0) {
        *(undefined4 *)(iVar3 + 0x3a8) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x3a8) = 1;
      }
      *(undefined4 *)(iVar3 + 0x3a4) = 1;
      *(undefined4 *)(iVar3 + 0x3ac) = uVar2;
      *(undefined4 *)(iVar3 + 0x3a8) = 1;
    }
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x26,0x36e930,2,1);
    iVar3 = UiMgr_FindLayout(7);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x25,8);
  }
  MenuWnd_DrawCursor(1);
  if (*(int *)(iVar9 + 0x48) - 6U < 2) {
    *(undefined4 *)(iVar9 + 0x58) = 0;
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0x26,0);
    lVar7 = UiLayout_UpdateAnimById(0x26,1);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(iVar9 + 0x58) = 0;
    }
  }
  if (*(int *)(iVar9 + 0x60) != 0) {
    MenuWnd_SetItemVisible(0);
    iVar3 = *(int *)(iVar9 + 100);
    *(undefined4 *)(iVar9 + 100) = 0;
    if (iVar3 != 0) {
      if (*(int *)(iVar9 + 0x50) == 0) {
        uVar2 = Msg_Get(0x1b3);
        iVar3 = UiMgr_FindLayout(0x26);
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
        *(undefined4 *)(iVar3 + 0x35c) = uVar2;
        *(undefined4 *)(iVar3 + 0x358) = 1;
        uVar2 = Msg_Get(0x1b2);
        iVar3 = UiMgr_FindLayout(0x26);
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
      }
      else if (*(int *)(iVar9 + 0x50) == 2) {
        uVar2 = Msg_Get(*(int *)(iVar9 + 0x20) + 0x1b4);
        iVar3 = UiMgr_FindLayout(0x26);
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
        *(undefined4 *)(iVar3 + 0x35c) = uVar2;
        *(undefined4 *)(iVar3 + 0x358) = 1;
        iVar3 = UiMgr_FindLayout(0x26);
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
      }
      else {
        iVar3 = UiMgr_FindLayout(0x26);
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
        iVar3 = UiMgr_FindLayout(0x26);
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
      }
    }
    lVar6 = UiLayout_UpdateAnimById(0x26,2);
    lVar7 = UiLayout_UpdateAnimById(0x26,3);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(iVar9 + 0x60) = 0;
      MenuWnd_DrawCursor(0);
    }
  }
  if (*(int *)(iVar9 + 0x28) == 1) {
    lVar6 = UiLayout_UpdateAnimById(0x26,5);
    lVar7 = UiLayout_UpdateAnimById(0x26,6);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(iVar9 + 0x28) = 2;
      iVar3 = UiMgr_FindLayout(0x26);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x374) = 0;
      if (*(int *)(iVar3 + 900) == 0) {
        *(undefined4 *)(iVar3 + 0x380) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x380) = 1;
      }
      iVar3 = UiMgr_FindLayout(0x26);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x388) = 0;
      if (*(int *)(iVar3 + 0x398) == 0) {
        *(undefined4 *)(iVar3 + 0x394) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x394) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      MenuWnd_SetItemVisible(0);
      if (*(int *)(iVar9 + 0x18) == *(int *)(iVar9 + 8) + 1) {
        MenuWnd_DrawRivalLabel(0x26,0x56,1,0x34b);
      }
      else {
        MenuWnd_DrawRivalLabel(0x26,0x56,1,0x321,*(int *)(iVar9 + 0x18) + 1);
      }
    }
  }
  else if (*(int *)(iVar9 + 0x28) == 0) {
    lVar6 = UiLayout_UpdateAnimById(0x26,6);
    lVar7 = UiLayout_UpdateAnimById(0x26,4);
    if (lVar6 == 0 && lVar7 == 0) {
      *(undefined4 *)(iVar9 + 0x28) = 2;
      iVar3 = UiMgr_FindLayout(0x26);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x360) = 0;
      if (*(int *)(iVar3 + 0x370) == 0) {
        *(undefined4 *)(iVar3 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x36c) = 1;
      }
      iVar3 = UiMgr_FindLayout(0x26);
      iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
      *(undefined4 *)(iVar3 + 0x388) = 0;
      if (*(int *)(iVar3 + 0x398) == 0) {
        *(undefined4 *)(iVar3 + 0x394) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x394) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      MenuWnd_SetItemVisible(0);
      if (*(int *)(iVar9 + 0x18) == *(int *)(iVar9 + 8) + 1) {
        MenuWnd_DrawRivalLabel(0x26,0x56,1,0x34b);
      }
      else {
        MenuWnd_DrawRivalLabel(0x26,0x56,1,0x321,*(int *)(iVar9 + 0x18) + 1);
      }
    }
  }
  if (bVar1) {
    iVar3 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x5a,8);
    iVar3 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x59,8);
    iVar3 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x58,8);
    iVar3 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x57,8);
    iVar3 = UiMgr_FindLayout(0x26);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x37,8);
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x26,*(undefined4 *)(&DAT_0032a330 + *(int *)(iVar9 + 0x20) * 4),1,0);
  }
  scrrace_sub_00218fb0(param_1);
  if (bVar1) {
    uVar5 = Menu_MapCursorToItem(*(undefined4 *)(iVar9 + 0x14));
    uVar5 = MsgId_ForMode(uVar5,*(undefined4 *)(iVar9 + 0x20));
    MenuWnd_SetTitle(3,uVar5);
    uVar2 = *(undefined4 *)(iVar9 + 0x14);
  }
  else {
    MenuWnd_SetTitle(3,*(int *)(iVar9 + 0x20) + 0x326);
    uVar2 = *(undefined4 *)(iVar9 + 0x14);
  }
  uVar5 = Menu_MapCursorToItem(uVar2);
  iVar3 = 0;
  puVar10 = (undefined4 *)&DAT_0032a2b0;
  do {
    if (bVar1) {
      if (iVar3 < 3) {
        uVar8 = Profile_Get(0);
        lVar6 = password_sub_002de8e0(uVar8,1,0,uVar5,iVar3);
      }
      else {
        lVar6 = 7;
      }
    }
    else {
      uVar8 = Profile_Get(0);
      lVar6 = password_sub_002de8e0(uVar8,0,iVar3,uVar5,*(undefined4 *)(iVar9 + 0x1c));
    }
    if (lVar6 != 0) {
      iVar4 = UiMgr_FindLayout(0x26);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,*puVar10,8);
    }
    iVar3 = iVar3 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar3 < 8);
  UiLayout_UpdateAnimById(0x26,7);
  iVar3 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0x26);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

// 0x0021b780  size 0x9d8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_sub_0021b780(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  
  iVar1 = Msg_ProfileStat(1);
  iVar1 = iVar1 + 1;
  Subtitle_Draw();
  iVar4 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar4 != 0) {
    uVar3 = Msg_Get(0x44);
    iVar4 = UiMgr_FindLayout(0x25);
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
    uVar3 = Msg_Get(0x45);
    iVar4 = UiMgr_FindLayout(0x25);
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
    uVar3 = Msg_Get(0x46);
    iVar4 = UiMgr_FindLayout(0x25);
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
    uVar3 = Msg_Get(0x5a);
    iVar4 = UiMgr_FindLayout(0x25);
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
    uVar3 = Msg_Get(0x5b);
    iVar4 = UiMgr_FindLayout(0x25);
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
    uVar3 = Msg_Get(0x1c2);
    iVar4 = UiMgr_FindLayout(0x25);
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
    *(undefined4 *)(iVar4 + 900) = uVar3;
    *(undefined4 *)(iVar4 + 0x380) = 1;
    uVar3 = Msg_Get(0x1c3);
    iVar4 = UiMgr_FindLayout(0x25);
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
    uVar3 = Msg_Get(0x1c4);
    iVar4 = UiMgr_FindLayout(0x25);
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
    *(undefined4 *)(iVar4 + 0x3ac) = uVar3;
    *(undefined4 *)(iVar4 + 0x3a8) = 1;
    uVar3 = Msg_Get(0x1b1);
    iVar4 = UiMgr_FindLayout(0x26);
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
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x25,0x36e928,2,0);
  }
  lVar6 = Msg_ProfileStat(1);
  MenuWnd_DrawCursor(3 < lVar6);
  lVar6 = UiLayout_UpdateAnimById(0x25,0);
  lVar7 = UiLayout_UpdateAnimById(0x25,1);
  lVar8 = UiLayout_UpdateAnimById(0x25,2);
  if (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar6 = UiLayout_UpdateAnimById(0x25,5);
    lVar7 = UiLayout_UpdateAnimById(0x25,6);
    lVar8 = UiLayout_UpdateAnimById(0x25,7);
    if (lVar8 == 0 && (lVar6 == 0 && lVar7 == 0)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    MenuWnd_DrawCursor(0);
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x25,*(undefined4 *)(&DAT_0032a2f0 + *(int *)(param_1 + 0x10) * 4),1,0);
    iVar4 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28);
  }
  if (iVar4 == 1) {
    Menu_ClearSlot(0);
    lVar6 = UiLayout_UpdateAnimById(0x25,3);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 2;
      iVar4 = UiMgr_FindLayout(0x25);
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
    else {
      iVar4 = (iVar1 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) + 4) % iVar1;
      uVar9 = MsgId_ForSlot(iVar4,1);
      MenuWnd_DrawText(0x25,0x48,uVar9);
      iVar2 = UiMgr_FindLayout(0x25);
      UiElem_SetNumber(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x43,0x16,
                       *(undefined4 *)(&DAT_0032a2d0 + iVar4 * 4));
    }
  }
  else if (iVar4 == 0) {
    lVar6 = UiLayout_UpdateAnimById(0x25,4);
    if (lVar6 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x28) = 2;
      iVar4 = UiMgr_FindLayout(0x25);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x360) = 0;
      if (*(int *)(iVar4 + 0x370) == 0) {
        *(undefined4 *)(iVar4 + 0x36c) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x36c) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar4 = (iVar1 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) + -1) % iVar1;
      uVar9 = MsgId_ForSlot(iVar4,1);
      MenuWnd_DrawText(0x25,0x48,uVar9);
      iVar2 = UiMgr_FindLayout(0x25);
      UiElem_SetNumber(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x43,0x16,
                       *(undefined4 *)(&DAT_0032a2d0 + iVar4 * 4));
    }
  }
  iVar4 = 0;
  puVar11 = &DAT_0032a300;
  puVar10 = &DAT_0032a320;
  while( true ) {
    if (iVar1 < 4) {
      iVar2 = iVar1;
    }
    else {
      iVar2 = 4;
    }
    if (iVar2 <= iVar4) break;
    iVar2 = (iVar1 + iVar4 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))) % iVar1;
    uVar9 = MsgId_ForSlot(iVar2,1);
    MenuWnd_DrawText(0x25,*puVar11,uVar9);
    iVar5 = UiMgr_FindLayout(0x25);
    UiElem_SetNumber(*_g_UiMgr + iVar5 * 0x4f4 + 4,*puVar10,0x16,
                     *(undefined4 *)(&DAT_0032a2d0 + iVar2 * 4));
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
    iVar4 = iVar4 + 1;
  }
  if ((iVar1 < 4) && (iVar1 < 4)) {
    puVar12 = &DAT_0032a310 + iVar1 * 4;
    puVar10 = &DAT_0032a320 + iVar1;
    do {
      iVar4 = UiMgr_FindLayout(0x25);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,*(undefined4 *)(puVar12 + -4),8);
      iVar4 = UiMgr_FindLayout(0x25);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,*puVar10,8);
      iVar1 = iVar1 + 1;
      puVar12 = puVar12 + 4;
      puVar10 = puVar10 + 1;
    } while (iVar1 < 4);
  }
  MenuWnd_SetTitle(3,0x354);
  iVar4 = UiMgr_FindLayout(0x24);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0x25);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

