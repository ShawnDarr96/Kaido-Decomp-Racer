// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00230000 - 0x00234000
#include "ghidra_types.h"

// 0x00230340  size 0x3a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_draw_sub_00230340(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar3 != 0) {
    uVar4 = Msg_Get(0x398);
    iVar3 = UiMgr_FindLayout(0xf0);
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
    uVar4 = Msg_Get(0x399);
    iVar3 = UiMgr_FindLayout(0xf0);
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
    Menu_ClearSlot(0);
    iVar3 = UiMgr_FindLayout(0xef);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x43,8);
    iVar3 = UiMgr_FindLayout(0xef);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x44,8);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
    switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
    case 1:
      *(undefined4 *)(_g_MenuMgr + 0x598) = 9;
      break;
    case 2:
      *(undefined4 *)(_g_MenuMgr + 0x5dc) = 9;
      break;
    case 3:
      *(undefined4 *)(_g_MenuMgr + 0x5fc) = 9;
      break;
    case 4:
      *(undefined4 *)(_g_MenuMgr + 0x618) = 9;
    }
  }
  lVar5 = UiLayout_UpdateAnimById(0xf0,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (lVar5 = UiLayout_UpdateAnimById(0xf0), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0xf0,*(undefined4 *)(&DAT_0036ea00 + *(int *)(param_1 + 0x30) * 4),1,0);
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar6 = MsgId_ForSlot(iVar3,1);
  MenuWnd_DrawText(0xef,(&DAT_0032b150)[(iVar2 + (iVar3 - iVar1)) % iVar2],uVar6);
  MenuWnd_DrawText(0xf0,0xc,0x4a);
  MenuWnd_DrawText(0xf0,0xd,0x49);
  iVar3 = UiMgr_FindLayout(0xee);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xef);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xf0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0x291);
  Subtitle_Draw();
  return;
}

// 0x002306e0  size 0xaa4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_select_sub_002306e0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar3 = param_1[5];
  param_1[5] = 0;
  if (iVar3 == 0) {
    iVar3 = *param_1;
  }
  else {
    uVar2 = Msg_Get(0x38e);
    iVar3 = UiMgr_FindLayout(0xef);
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
    uVar2 = Msg_Get(0x38f);
    iVar3 = UiMgr_FindLayout(0xef);
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
    uVar2 = Msg_Get(0x390);
    iVar3 = UiMgr_FindLayout(0xef);
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
    uVar2 = Msg_Get(0x391);
    iVar3 = UiMgr_FindLayout(0xef);
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
    uVar2 = Msg_Get(0x392);
    iVar3 = UiMgr_FindLayout(0xef);
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
    uVar2 = Msg_Get(0x393);
    iVar3 = UiMgr_FindLayout(0xef);
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
    uVar2 = Msg_Get(0x394);
    iVar3 = UiMgr_FindLayout(0xef);
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
    uVar2 = Msg_Get(0x395);
    iVar3 = UiMgr_FindLayout(0xef);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
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
    *(undefined4 *)(iVar3 + 0x3a4) = 0;
    *(undefined4 *)(iVar3 + 0x3ac) = uVar2;
    *(undefined4 *)(iVar3 + 0x3a8) = 1;
    uVar2 = Msg_Get(0x396);
    iVar3 = UiMgr_FindLayout(0xef);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x3b4) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x3c0) = 0;
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
    if (*(int *)(iVar3 + 0x3c0) == 0) {
      *(undefined4 *)(iVar3 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
    if (*(int *)(iVar3 + 0x3c0) == 0) {
      *(undefined4 *)(iVar3 + 0x3bc) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3bc) = 1;
    }
    *(undefined4 *)(iVar3 + 0x3b8) = 0;
    *(undefined4 *)(iVar3 + 0x3c0) = uVar2;
    *(undefined4 *)(iVar3 + 0x3bc) = 1;
    uVar2 = Msg_Get(0x397);
    iVar3 = UiMgr_FindLayout(0xef);
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
    *(undefined4 *)(iVar3 + 0x3c4) = 0;
    if (*(int *)(iVar3 + 0x3d4) == 0) {
      *(undefined4 *)(iVar3 + 0x3d0) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x3d0) = 1;
    }
    *(undefined4 *)(iVar3 + 0x3cc) = 0;
    *(undefined4 *)(iVar3 + 0x3d4) = uVar2;
    *(undefined4 *)(iVar3 + 0x3d0) = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xef,0x36e9f8,2,0);
    iVar3 = *param_1;
  }
  if (iVar3 == 1) {
    lVar6 = UiLayout_UpdateAnimById(0xef,0);
    if (lVar6 == 0) {
      param_1[4] = 0;
    }
  }
  else {
    lVar6 = UiLayout_UpdateAnimById(0xef,0);
    lVar7 = UiLayout_UpdateAnimById(0xef,1);
    if (lVar6 == 0 && lVar7 == 0) {
      param_1[4] = 0;
    }
  }
  if (param_1[6] != 0) {
    if (param_1[2] == 1) {
      lVar6 = UiLayout_UpdateAnimById
                        (0xef,(param_1[9] + (param_1[0xb] - param_1[10])) % param_1[9] + 2);
      if (lVar6 == 0) {
        param_1[6] = 0;
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0xef,6);
      lVar7 = UiLayout_UpdateAnimById(0xef,7);
      if (lVar6 == 0 && lVar7 == 0) {
        param_1[6] = 0;
      }
    }
  }
  if (((param_1[4] == 0) && (param_1[6] == 0)) && (lVar6 = MenuMgr_Goto(), lVar6 == 0)) {
    MenuWnd_DrawCursor(1);
    if (param_1[9] < 5) {
      iVar3 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x43,8);
      iVar3 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,0x44,8);
      cVar1 = (char)param_1[8];
      goto LAB_00230db8;
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  cVar1 = (char)param_1[8];
LAB_00230db8:
  if (cVar1 == '\0') {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    if (*piRam0036f468 == 1) {
      MenuWnd_SetItemState
                (0xef,*(undefined4 *)
                       (&DAT_0032b170 +
                       ((param_1[9] + (param_1[0xb] - param_1[10])) % param_1[9]) * 4),1,0);
    }
  }
  else {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    if ((char)param_1[8] == '\x01') {
      lVar6 = UiLayout_UpdateAnimById(0xef,9);
      if (lVar6 == 0) {
        *(undefined1 *)(param_1 + 8) = 0;
        iVar3 = UiMgr_FindLayout(0xef);
        iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x3c4) = 0;
        if (*(int *)(iVar3 + 0x3d4) == 0) {
          *(undefined4 *)(iVar3 + 0x3d0) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x3d0) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0xef,8);
      if (lVar6 == 0) {
        *(undefined1 *)(param_1 + 8) = 0;
        iVar3 = UiMgr_FindLayout(0xef);
        iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
        *(undefined4 *)(iVar3 + 0x3b0) = 0;
        if (*(int *)(iVar3 + 0x3c0) == 0) {
          *(undefined4 *)(iVar3 + 0x3bc) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x3bc) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar3 = 0;
  puVar10 = &DAT_0032b150;
  puVar9 = &DAT_0032b190;
  while( true ) {
    iVar4 = param_1[9];
    if (iVar4 < 5) {
      iVar5 = iVar4;
    }
    else {
      iVar5 = 4;
    }
    if (iVar5 <= iVar3) break;
    iVar4 = (param_1[10] + iVar3) % iVar4;
    uVar8 = MsgId_ForSlot(iVar4,1);
    MenuWnd_DrawText(0xef,*puVar10,uVar8);
    iVar5 = UiMgr_FindLayout(0xef);
    UiElem_SetPropInt(*_g_UiMgr + iVar5 * 0x4f4 + 4,*puVar9,0x16,
                      *(undefined4 *)(&DAT_0032b1d0 + iVar4 * 4));
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
    iVar3 = iVar3 + 1;
  }
  if ((char)param_1[8] == '\x01') {
    iVar3 = param_1[10] + -1 + iVar4;
  }
  else {
    iVar3 = param_1[10] + 4;
  }
  uVar8 = MsgId_ForSlot(iVar3 % iVar4,1);
  MenuWnd_DrawText(0xef,DAT_0032b160,uVar8);
  iVar5 = UiMgr_FindLayout(0xef);
  UiElem_SetPropInt(*_g_UiMgr + iVar5 * 0x4f4 + 4,DAT_0032b1a0,0x16,
                    *(undefined4 *)(&DAT_0032b1d0 + (iVar3 % iVar4) * 4));
  iVar3 = 4;
  if (param_1[9] < 5) {
    puVar10 = &DAT_0032b1a0;
    puVar9 = &DAT_0032b1c0;
    do {
      iVar4 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,*puVar10,8);
      iVar4 = UiMgr_FindLayout(0xef);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,*puVar9,8);
      iVar3 = iVar3 + -1;
      puVar10 = puVar10 + -1;
      puVar9 = puVar9 + -1;
    } while (param_1[9] <= iVar3);
  }
  iVar3 = UiMgr_FindLayout(0xee);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xef);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0x290);
  Subtitle_Draw();
  return;
}

// 0x00231190  size 0x80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_00231190(void)

{
  int iVar1;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x25,8);
  *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x00231210  size 0x98
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_leaf_sub_00231210(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_scrrace_select_sub_002306e0_0032b140)[*(int *)(param_1 + 4)])();
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  return;
}

// 0x002312c0  size 0x350
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_002312c0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
               ulong param_6,int param_7)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 < param_5) {
    fVar2 = (float)((int)(param_7 * param_4) / (int)param_5 + 0x10);
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    fVar5 = (float)uVar1;
    fVar4 = fVar2 + fVar5;
    if ((float)(param_4 + 0x10) < fVar4) {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,2,0x10);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat((fVar4 - (float)(param_4 + 0x10)) / 16.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,
                          param_3,6);
      fVar5 = (float)(param_4 + 0x10) - fVar2;
    }
    else {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
    }
  }
  else {
    fVar2 = 16.0;
    fVar5 = (float)param_4;
    iVar3 = UiMgr_FindLayout(param_1);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
  }
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar2,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_2,2);
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar5 / 16.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_2,6);
  return;
}

// 0x00231610  size 0x1d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_draw_sub_00231610(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  MenuWnd_DrawLabel(0xea,0x18,0x3a,*(int *)(param_1 + 0x24) + 1);
  iVar3 = *(int *)(param_1 + 0x24) * 0xc + param_1;
  if (*(int *)(iVar3 + 0x44) == -1) {
    iVar3 = UiMgr_FindLayout(0xea);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,4,8);
    MenuWnd_DrawText(0xea,0x17,0x5c);
    MenuWnd_DrawText(0xea,0x19,0x5c);
    MenuWnd_DrawText(0xea,0x1a,0x5b);
  }
  else {
    if (*(int *)(iVar3 + 0x48) == 0) {
      iVar3 = UiMgr_FindLayout(0xea);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,4,8);
      iVar3 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar3 = UiMgr_FindLayout(0xea);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,4,8);
      iVar3 = *(int *)(param_1 + 0x24);
    }
    uVar2 = MsgId_TeamName(*(undefined4 *)(iVar3 * 0xc + param_1 + 0x40));
    MenuWnd_DrawText(0xea,0x17,uVar2);
    uVar2 = MsgId_RivalName(*(undefined4 *)(*(int *)(param_1 + 0x24) * 0xc + param_1 + 0x40));
    MenuWnd_DrawText(0xea,0x19,uVar2);
    uVar2 = RivalDb_Get(*(undefined2 *)(*(int *)(param_1 + 0x24) * 0xc + param_1 + 0x40));
    uVar1 = RivalRec_GetType(uVar2);
    MenuWnd_DrawText(0xea,0x1a,(uVar1 & 0xff) + 0x67);
  }
  return;
}

// 0x002317e0  size 0x3b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_draw_sub_002317e0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_0032b250;
  iVar3 = 0;
  do {
    iVar4 = (*(int *)(param_1 + 0x20) + iVar3) % 0x14;
    MenuWnd_DrawLabel(0xe9,*puVar5,0x3a,iVar4 + 1);
    iVar4 = param_1 + iVar4 * 0xc;
    if (*(int *)(iVar4 + 0x44) == -1) {
      iVar4 = UiMgr_FindLayout(0xe9);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,puVar5[3],8);
      MenuWnd_DrawText(0xe9,puVar5[1],0x5c);
      MenuWnd_DrawText(0xe9,puVar5[2],0x5b);
    }
    else {
      if (*(int *)(iVar4 + 0x48) == 0) {
        iVar2 = UiMgr_FindLayout(0xe9);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,puVar5[3],8);
      }
      else {
        iVar2 = UiMgr_FindLayout(0xe9);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,puVar5[3],8);
      }
      uVar1 = MsgId_TeamName(*(undefined4 *)(iVar4 + 0x40));
      MenuWnd_DrawText(0xe9,puVar5[1],uVar1);
      uVar1 = RivalDb_Get(*(undefined2 *)(iVar4 + 0x40));
      uVar1 = RivalRec_GetCarId(uVar1);
      uVar1 = MenuText_CarShortName(uVar1,0xffffffffffffffff);
      MenuWnd_DrawText(0xe9,puVar5[2],uVar1);
    }
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 4;
  } while (iVar3 < 9);
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x20) + 0x13;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x20) + 9;
  }
  MenuWnd_DrawLabel(0xe9,(&DAT_0032b250)[iVar3 * 4],0x3a,iVar4 % 0x14 + 1);
  iVar4 = (iVar4 % 0x14) * 0xc;
  iVar2 = iVar4 + param_1;
  if (*(int *)(iVar2 + 0x44) == -1) {
    iVar4 = UiMgr_FindLayout(0xe9);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,(&DAT_0032b25c)[iVar3 * 4],8);
    MenuWnd_DrawText(0xe9,(&DAT_0032b254)[iVar3 * 4],0x5c);
    MenuWnd_DrawText(0xe9,(&DAT_0032b258)[iVar3 * 4],0x5b);
  }
  else {
    if (*(int *)(iVar2 + 0x48) == 0) {
      iVar2 = UiMgr_FindLayout(0xe9);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,(&DAT_0032b25c)[iVar3 * 4],8);
    }
    else {
      iVar2 = UiMgr_FindLayout(0xe9);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,(&DAT_0032b25c)[iVar3 * 4],8);
    }
    iVar4 = iVar4 + param_1;
    uVar1 = MsgId_TeamName(*(undefined4 *)(iVar4 + 0x40));
    MenuWnd_DrawText(0xe9,(&DAT_0032b254)[iVar3 * 4],uVar1);
    uVar1 = RivalDb_Get(*(undefined2 *)(iVar4 + 0x40));
    uVar1 = RivalRec_GetCarId(uVar1);
    uVar1 = MenuText_CarShortName(uVar1,0xffffffffffffffff);
    MenuWnd_DrawText(0xe9,(&DAT_0032b258)[iVar3 * 4],uVar1);
  }
  return;
}

// 0x00231ba0  size 0x7f8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_draw_sub_00231ba0(undefined8 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  iVar11 = (int)param_1;
  iVar7 = *(int *)(iVar11 + 0x14);
  *(undefined4 *)(iVar11 + 0x14) = 0;
  if (iVar7 == 0) {
    iVar7 = *(int *)(iVar11 + 0x10);
  }
  else {
    uVar6 = Msg_Get(0x2b0);
    iVar7 = UiMgr_FindLayout(0xec);
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
    *(undefined4 *)(iVar7 + 800) = uVar6;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar6 = Msg_Get(0x2b1);
    iVar7 = UiMgr_FindLayout(0xec);
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
    *(undefined4 *)(iVar7 + 0x334) = uVar6;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    MenuWnd_DrawDialogText(0xec,0x36ea28,2,0);
    iVar7 = UiMgr_FindLayout(0xec);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x3b,8);
    iVar7 = *(int *)(iVar11 + 0x10);
  }
  if ((iVar7 == 0) && (*(int *)(iVar11 + 0x18) == 0)) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(iVar11 + 0x30) == 0) {
      iVar7 = UiMgr_FindLayout(0xec);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x3c,8);
      iVar7 = *(int *)(iVar11 + 0x34);
    }
    else {
      iVar7 = *(int *)(iVar11 + 0x34);
    }
    if ((iVar7 == 0) || (*(int *)(iVar11 + 0x30) == iVar7)) {
      iVar7 = UiMgr_FindLayout(0xec);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x3d,8);
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  lVar8 = UiLayout_UpdateAnimById(0xec,0);
  if (lVar8 == 0) {
    *(undefined4 *)(iVar11 + 0x10) = 0;
  }
  if ((*(int *)(iVar11 + 0x18) != 0) && (lVar8 = UiLayout_UpdateAnimById(0xec), lVar8 == 0)) {
    *(undefined4 *)(iVar11 + 0x18) = 0;
  }
  scrcareer_draw_sub_00231610(param_1);
  iVar7 = *(int *)(*(int *)(iVar11 + 0x24) * 0xc + iVar11 + 0x40);
  uVar9 = MenuText_CarNameOrMaker(iVar7,0xfffffffffffffffd);
  MenuWnd_DrawText(0xec,0x27,uVar9);
  uVar9 = MenuText_CarGrade(iVar7,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x28,4,uVar9);
  uVar9 = MenuText_CarShortName(iVar7,0xfffffffffffffffd);
  MenuWnd_DrawText(0xec,0x29,uVar9);
  iVar4 = Profile_Get(0);
  uVar1 = *(undefined2 *)(iVar4 + iVar7 * 2 + 0x3fc4);
  iVar4 = Profile_Get(0);
  uVar2 = *(undefined2 *)(iVar4 + iVar7 * 2 + 0x43ac);
  MenuWnd_DrawTextId(0xec,0x26,4,0x292);
  MenuWnd_DrawLabel(0xec,0x32,0x293,uVar1,uVar2);
  uVar5 = MenuText_CarName(iVar7,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2a,4,0x294);
  MenuWnd_DrawLabel(0xec,0x33,(uVar5 & 0xff) + 0x5d);
  lVar8 = MenuText_OpponentSpec(iVar7,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2b,4,0x297);
  if (lVar8 < 1) {
    MenuWnd_DrawLabel(0xec,0x34,0x26,0);
  }
  else {
    cVar3 = MenuText_RivalCarSpec(iVar7,0xfffffffffffffffd);
    if (cVar3 == '\a') {
      MenuWnd_DrawLabel(0xec,0x34,0x18,lVar8,0);
    }
    else {
      MenuWnd_DrawLabel(0xec,0x34,0x17,lVar8,0);
    }
  }
  lVar8 = MenuText_OpponentTitle(iVar7,0xfffffffffffffffd);
  uVar9 = MenuText_OpponentCar(iVar7,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2c,4,0x295);
  if (lVar8 < 1) {
    MenuWnd_DrawLabel(0xec,0x35,0x27,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x35,0x19,lVar8,0,0,uVar9,0);
  }
  lVar8 = MenuText_OpponentTeam(iVar7,0xfffffffffffffffd);
  uVar9 = MenuText_OpponentName(iVar7,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2d,4,0x296);
  if (lVar8 < 1) {
    MenuWnd_DrawLabel(0xec,0x36,0x28,0,0,0);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x36,0x1a,(int)lVar8 / 10,(int)lVar8 % 10,0,0,uVar9);
  }
  lVar8 = MenuText_OpponentComment(iVar7,0xfffffffffffffffd);
  MenuWnd_DrawTextId(0xec,0x2e,4,0x298);
  if (lVar8 < 1) {
    MenuWnd_DrawLabel(0xec,0x37,0x25,0);
    iVar4 = *(int *)(iVar11 + 0x24);
  }
  else {
    MenuWnd_DrawLabel(0xec,0x37,0x16,lVar8,0);
    iVar4 = *(int *)(iVar11 + 0x24);
  }
  uVar9 = RivalDb_Get(*(undefined2 *)(iVar4 * 0xc + iVar11 + 0x40));
  lVar8 = RivalRec_IsValid(uVar9);
  if (lVar8 != 0) {
    MenuWnd_DrawTextId(0xec,0x2f,4,0x299);
    uVar10 = MsgId_PartLong(*(undefined2 *)uVar9);
    MenuWnd_DrawLabel(0xec,0x38,uVar10);
  }
  uVar10 = Race_GetLapCountForMode(*(undefined4 *)((undefined2 *)uVar9 + 10));
  MenuWnd_DrawTextId(0xec,0x30,4,0x29a);
  uVar10 = MsgId_ForOption(uVar10);
  uVar10 = MsgId_ForSlot(uVar10,0);
  MenuWnd_DrawLabel(0xec,0x39,uVar10);
  MenuWnd_DrawTextId(0xec,0x31,4,0x29b);
  lVar8 = RivalRec_IsBelowMax(uVar9);
  uVar9 = 0x4b;
  if (lVar8 == 0) {
    uVar9 = 0x4c;
  }
  MenuWnd_DrawLabel(0xec,0x3a,uVar9);
  iVar4 = UiMgr_FindLayout(0xec);
  UiElem_GetRect(*_g_UiMgr + iVar4 * 0x4f4 + 4,auStack_40,0x3e);
  iStack_34 = iStack_34 + *(int *)(iVar11 + 0x30) * -0x16;
  uVar9 = MsgId_PartShort(iVar7);
  UiText_DrawById(auStack_40,uVar9);
  iVar7 = UiMgr_FindLayout(0xec);
  UiElem_SetPropInt(*_g_UiMgr + iVar7 * 0x4f4 + 4,0x10,0x16,*(int *)(iVar11 + 0x24) + 0x45);
  menuscr_anim_sub_002312c0
            (0xec,0x1e,0x1f,0x60,*(int *)(iVar11 + 0x34) + 5,5,*(undefined4 *)(iVar11 + 0x30));
  iVar7 = UiMgr_FindLayout(0xec);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  iVar7 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar7 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  MenuWnd_SetTitle(1,0xffffffffffffffff);
  return;
}

// 0x002323a0  size 0x5ac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_draw_sub_002323a0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0x14);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar5 + 0x10);
  }
  else {
    uVar1 = Msg_Get(0x2ae);
    iVar2 = UiMgr_FindLayout(0xeb);
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
    uVar1 = Msg_Get(0x2af);
    iVar2 = UiMgr_FindLayout(0xeb);
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
    MenuWnd_DrawDialogText(0xeb,0x36ea20,2,0);
    iVar2 = UiMgr_FindLayout(0xeb);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x38,8);
    iVar2 = *(int *)(iVar5 + 0x10);
  }
  if ((iVar2 == 0) && (*(int *)(iVar5 + 0x18) == 0)) {
    MenuWnd_DrawCursor(1);
    if (*(int *)(iVar5 + 0x30) == 0) {
      iVar2 = UiMgr_FindLayout(0xeb);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x36,8);
      iVar2 = *(int *)(iVar5 + 0x34);
    }
    else {
      iVar2 = *(int *)(iVar5 + 0x34);
    }
    if ((iVar2 == 0) || (*(int *)(iVar5 + 0x30) == iVar2)) {
      iVar2 = UiMgr_FindLayout(0xeb);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x37,8);
    }
  }
  else {
    MenuWnd_DrawCursor(0);
  }
  lVar3 = UiLayout_UpdateAnimById(0xeb,0);
  if (lVar3 == 0) {
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  if ((*(int *)(iVar5 + 0x18) != 0) && (lVar3 = UiLayout_UpdateAnimById(0xeb), lVar3 == 0)) {
    *(undefined4 *)(iVar5 + 0x18) = 0;
  }
  scrcareer_draw_sub_00231610(param_1);
  MenuWnd_DrawTextId(0xeb,0x28,4,0x274);
  uVar4 = MsgId_RivalName(*(undefined4 *)(*(int *)(iVar5 + 0x24) * 0xc + iVar5 + 0x40));
  MenuWnd_DrawText(0xeb,0x2e,uVar4);
  iVar2 = GameDb_GetRivalCar(*(undefined4 *)(iVar5 + 0x24));
  iVar2 = *(int *)(iVar2 + 0x4c);
  MenuWnd_DrawTextId(0xeb,0x29,4,0x275);
  if (iVar2 < 1) {
    MenuWnd_DrawText(0xeb,0x2f,0x27f);
  }
  else {
    MenuWnd_DrawLabel(0xeb,0x2f,0x27b,iVar2);
  }
  MenuWnd_DrawTextId(0xeb,0x2a,4,0x276);
  uVar4 = MsgId_TeamName(*(undefined4 *)(*(int *)(iVar5 + 0x24) * 0xc + iVar5 + 0x40));
  MenuWnd_DrawText(0xeb,0x30,uVar4);
  MenuWnd_DrawTextId(0xeb,0x2b,4,0x277);
  uVar4 = MsgId_PartCategory(*(undefined4 *)(iVar5 + 0x24));
  MenuWnd_DrawText(0xeb,0x31,uVar4);
  MenuWnd_DrawTextId(0xeb,0x2c,4,0x278);
  uVar4 = MsgId_PartDesc(*(undefined4 *)(iVar5 + 0x24));
  MenuWnd_DrawText(0xeb,0x32,uVar4);
  MenuWnd_DrawTextId(0xeb,0x2d,4,0x279);
  MenuWnd_DrawLabel(0xeb,0x33,0x27c,*(undefined4 *)(*(int *)(iVar5 + 0x24) * 0xc + iVar5 + 0x44));
  uVar4 = Profile_Get(0);
  MenuWnd_DrawTextId(0xeb,0x34,4,0x27a);
  uVar4 = Profile_GetCourseRecordB(uVar4,*(undefined4 *)(iVar5 + 0x24));
  MenuWnd_DrawLabel(0xeb,0x35,0x27d,uVar4);
  MenuWnd_DrawText(0xeb,0x27,0x27e);
  iVar2 = UiMgr_FindLayout(0xeb);
  UiElem_GetRect(*_g_UiMgr + iVar2 * 0x4f4 + 4,auStack_40,0x39);
  iStack_34 = iStack_34 + *(int *)(iVar5 + 0x30) * -0x16;
  uVar4 = MsgId_PartName(*(undefined4 *)(iVar5 + 0x24));
  UiText_DrawById(auStack_40,uVar4);
  iVar2 = UiMgr_FindLayout(0xeb);
  UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x11,0x16,*(int *)(iVar5 + 0x24) + 0x45);
  menuscr_anim_sub_002312c0
            (0xeb,0x1e,0x1f,0x60,*(int *)(iVar5 + 0x34) + 5,5,*(undefined4 *)(iVar5 + 0x30));
  iVar2 = UiMgr_FindLayout(0xeb);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar2 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00232950  size 0xbe4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_select_sub_00232950(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  iVar1 = piVar7[5];
  piVar7[5] = 0;
  if (iVar1 == 0) {
    iVar1 = piVar7[4];
  }
  else {
    uVar3 = Msg_Get(0x2a7);
    iVar1 = UiMgr_FindLayout(0xea);
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
    uVar3 = Msg_Get(0x2a8);
    iVar1 = UiMgr_FindLayout(0xea);
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
    uVar3 = Msg_Get(0x2a9);
    iVar1 = UiMgr_FindLayout(0xea);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar3;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar3 = Msg_Get(0x2aa);
    iVar1 = UiMgr_FindLayout(0xea);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x35c) = 0;
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x354) = 0;
    *(undefined4 *)(iVar1 + 0x35c) = uVar3;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    uVar3 = Msg_Get(0x2ab);
    iVar1 = UiMgr_FindLayout(0xea);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar3;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar3 = Msg_Get(0x2ac);
    iVar1 = UiMgr_FindLayout(0xea);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar3;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    uVar3 = Msg_Get(0x2ad);
    iVar1 = UiMgr_FindLayout(0xea);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x398) = 0;
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x388) = 0;
    if (*(int *)(iVar1 + 0x398) == 0) {
      *(undefined4 *)(iVar1 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x394) = 1;
    }
    *(undefined4 *)(iVar1 + 0x390) = 1;
    *(undefined4 *)(iVar1 + 0x398) = uVar3;
    *(undefined4 *)(iVar1 + 0x394) = 1;
    uVar3 = Msg_Get(0x2b2);
    iVar1 = UiMgr_FindLayout(0xed);
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
    uVar3 = Msg_Get(0x2b3);
    iVar1 = UiMgr_FindLayout(0xed);
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
    uVar3 = Msg_Get(0x2b4);
    iVar1 = UiMgr_FindLayout(0xed);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
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
    MenuWnd_DrawDialogText(0xea,0x36ea18,2);
    iVar1 = piVar7[4];
  }
  if (((iVar1 == 0) && (piVar7[6] == 0)) && (lVar4 = MenuMgr_Goto(), lVar4 == 0)) {
    MenuWnd_DrawCursor(1);
    iVar1 = *piVar7;
  }
  else {
    MenuWnd_DrawCursor(0);
    iVar1 = *piVar7;
  }
  if (iVar1 == 0) {
    lVar4 = UiLayout_UpdateAnimById(0xea,0);
    if (lVar4 == 0) {
      piVar7[4] = 0;
    }
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xea,1);
    if (lVar4 == 0) {
      piVar7[4] = 0;
    }
  }
  if (piVar7[6] != 0) {
    if (piVar7[2] == 0) {
      lVar4 = UiLayout_UpdateAnimById(0xea,2);
      lVar5 = UiLayout_UpdateAnimById(0xed,1);
      if (lVar4 == 0 && lVar5 == 0) {
        piVar7[6] = 0;
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xea,3);
      if (lVar4 == 0) {
        piVar7[6] = 0;
      }
    }
  }
  if ((char)piVar7[0xb] != '\0') {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    lVar4 = 0;
    if (piVar7[piVar7[10] * 3 + 0x11] == -1) {
      lVar4 = UiLayout_UpdateAnimById(0xed,1);
    }
    if ((char)piVar7[0xb] == '\x03') {
      lVar5 = UiLayout_UpdateAnimById(0xea,4);
      if (lVar5 == 0 && lVar4 == 0) {
        piVar7[10] = piVar7[9];
        *(undefined1 *)(piVar7 + 0xb) = 0;
        iVar1 = UiMgr_FindLayout(0xea);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x360) = 0;
        if (*(int *)(iVar1 + 0x370) == 0) {
          *(undefined4 *)(iVar1 + 0x36c) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x36c) = 1;
        }
        iVar1 = UiMgr_FindLayout(0xed);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x310) = 0;
        if (*(int *)(iVar1 + 800) == 0) {
          *(undefined4 *)(iVar1 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x31c) = 1;
        }
        iVar1 = UiMgr_FindLayout(0xed);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x324) = 0;
        if (*(int *)(iVar1 + 0x334) == 0) {
          *(undefined4 *)(iVar1 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x330) = 1;
        }
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
      }
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xea,5);
      if (lVar5 == 0 && lVar4 == 0) {
        piVar7[10] = piVar7[9];
        *(undefined1 *)(piVar7 + 0xb) = 0;
        iVar1 = UiMgr_FindLayout(0xea);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x374) = 0;
        if (*(int *)(iVar1 + 900) == 0) {
          *(undefined4 *)(iVar1 + 0x380) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x380) = 1;
        }
        iVar1 = UiMgr_FindLayout(0xed);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x310) = 0;
        if (*(int *)(iVar1 + 800) == 0) {
          *(undefined4 *)(iVar1 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x31c) = 1;
        }
        iVar1 = UiMgr_FindLayout(0xed);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x324) = 0;
        if (*(int *)(iVar1 + 0x334) == 0) {
          *(undefined4 *)(iVar1 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x330) = 1;
        }
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
      }
    }
  }
  MenuWnd_DrawLabel(0xea,0x14,0x3c,piVar7[9] + 1,0x14);
  scrcareer_draw_sub_00231610(param_1);
  iVar1 = piVar7[10];
  if (piVar7[9] != iVar1) {
    if (piVar7[iVar1 * 3 + 0x11] != -1) {
      if (piVar7[iVar1 * 3 + 0x12] == 0) {
        iVar1 = UiMgr_FindLayout(0xea);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0xd,8);
        iVar1 = piVar7[10];
      }
      else {
        iVar1 = UiMgr_FindLayout(0xea);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,0xd,8);
        iVar1 = piVar7[10];
      }
      uVar6 = MsgId_TeamName(piVar7[iVar1 * 3 + 0x10]);
      MenuWnd_DrawText(0xea,0x1c,uVar6);
      uVar6 = MsgId_RivalName(piVar7[piVar7[10] * 3 + 0x10]);
      MenuWnd_DrawText(0xea,0x1d,uVar6);
      uVar6 = RivalDb_Get((short)piVar7[piVar7[10] * 3 + 0x10]);
      uVar2 = RivalRec_GetType(uVar6);
      MenuWnd_DrawText(0xea,0x1e,(uVar2 & 0xff) + 0x67);
      iVar1 = piVar7[10];
      goto LAB_00233374;
    }
    iVar1 = UiMgr_FindLayout(0xea);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0xd,8);
    MenuWnd_DrawText(0xea,0x1c,0x5c);
    MenuWnd_DrawText(0xea,0x1d,0x5c);
    MenuWnd_DrawText(0xea,0x1e,0x5b);
  }
  iVar1 = piVar7[10];
LAB_00233374:
  if (piVar7[iVar1 * 3 + 0x11] == -1) {
    iVar1 = UiMgr_FindLayout(0xea);
    UiElem_SetPropInt(*_g_UiMgr + iVar1 * 0x4f4 + 4,0x13,9,7);
    if (piVar7[9] == piVar7[10]) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
      lVar4 = UiLayout_UpdateAnimById(0xed,0);
      if (lVar4 == 0) {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
      }
    }
    MenuWnd_DrawText(0xed,0x10,0x280);
    UiLayout_UpdateAnimById(0xed,2);
    iVar1 = UiMgr_FindLayout(0xed);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  }
  else {
    UiLayout_UpdateAnimById(0xea,6);
  }
  iVar1 = UiMgr_FindLayout(0xea);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar1 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  Menu_DrawFrame(_g_MenuMgr + 0x654);
  if (piVar7[piVar7[10] * 3 + 0x11] == -1) {
    MenuWnd_SetTitle(1);
  }
  else {
    MenuWnd_SetTitle(3);
  }
  return;
}

// 0x00233540  size 0x5ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_draw_sub_00233540(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x14);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar5 + 8);
  }
  else {
    uVar2 = Msg_Get(0x2a1);
    iVar1 = UiMgr_FindLayout(0xe9);
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
    uVar2 = Msg_Get(0x2a2);
    iVar1 = UiMgr_FindLayout(0xe9);
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
    uVar2 = Msg_Get(0x2a3);
    iVar1 = UiMgr_FindLayout(0xe9);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
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
    *(undefined4 *)(iVar1 + 0x340) = 0;
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar2 = Msg_Get(0x2a4);
    iVar1 = UiMgr_FindLayout(0xe9);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x35c) = 0;
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x34c) = 0;
    if (*(int *)(iVar1 + 0x35c) == 0) {
      *(undefined4 *)(iVar1 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x358) = 1;
    }
    *(undefined4 *)(iVar1 + 0x354) = 0;
    *(undefined4 *)(iVar1 + 0x35c) = uVar2;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    uVar2 = Msg_Get(0x2a5);
    iVar1 = UiMgr_FindLayout(0xe9);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x370) = 0;
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x360) = 0;
    if (*(int *)(iVar1 + 0x370) == 0) {
      *(undefined4 *)(iVar1 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar1 + 0x368) = 0;
    *(undefined4 *)(iVar1 + 0x370) = uVar2;
    *(undefined4 *)(iVar1 + 0x36c) = 1;
    uVar2 = Msg_Get(0x2a6);
    iVar1 = UiMgr_FindLayout(0xe9);
    iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar1 + 900) = 0;
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x374) = 0;
    if (*(int *)(iVar1 + 900) == 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x380) = 1;
    }
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = uVar2;
    *(undefined4 *)(iVar1 + 0x380) = 1;
    Menu_ClearSlot(0);
    iVar1 = *(int *)(iVar5 + 8);
  }
  if (iVar1 == 1) {
    lVar3 = UiLayout_UpdateAnimById(0xe9,0);
    if (lVar3 == 0) {
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
  }
  else {
    lVar3 = UiLayout_UpdateAnimById(0xe9,0);
    lVar4 = UiLayout_UpdateAnimById(0xe9,2);
    if (lVar3 == 0 && lVar4 == 0) {
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
  }
  if (*(int *)(iVar5 + 0x18) != 0) {
    if (*(int *)(iVar5 + 8) == 1) {
      lVar3 = UiLayout_UpdateAnimById(0xe9);
      if (lVar3 == 0) {
        *(undefined4 *)(iVar5 + 0x18) = 0;
      }
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0xe9);
      lVar4 = UiLayout_UpdateAnimById(0xe9,3);
      if (lVar3 == 0 && lVar4 == 0) {
        *(undefined4 *)(iVar5 + 0x18) = 0;
      }
    }
  }
  if (*(char *)(iVar5 + 0x2c) == '\0') {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    if (*piRam0036f468 == 1) {
      MenuWnd_SetItemState
                (0xe9,*(undefined4 *)
                       (&DAT_0032b220 +
                       (((*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20)) + 0x14) % 0x14) * 4),0,0)
      ;
    }
  }
  else {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    if (*(char *)(iVar5 + 0x2c) == '\x01') {
      lVar3 = UiLayout_UpdateAnimById(0xe9,5);
      if (lVar3 == 0) {
        *(undefined1 *)(iVar5 + 0x2c) = 0;
        iVar1 = UiMgr_FindLayout(0xe9);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x374) = 0;
        if (*(int *)(iVar1 + 900) == 0) {
          *(undefined4 *)(iVar1 + 0x380) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x380) = 1;
        }
        Menu_ClearSlot(0);
        iVar1 = *(int *)(iVar5 + 0x24);
        goto LAB_0023371c;
      }
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0xe9,4);
      if (lVar3 == 0) {
        *(undefined1 *)(iVar5 + 0x2c) = 0;
        iVar1 = UiMgr_FindLayout(0xe9);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x360) = 0;
        if (*(int *)(iVar1 + 0x370) == 0) {
          *(undefined4 *)(iVar1 + 0x36c) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x36c) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  iVar1 = *(int *)(iVar5 + 0x24);
LAB_0023371c:
  MenuWnd_DrawLabel(0xe9,0x6d,0x3c,iVar1 + 1,0x14);
  scrcareer_draw_sub_002317e0(param_1);
  menuscr_anim_sub_002312c0(0xe9,3,4,0xf8,0x14,9,*(undefined4 *)(iVar5 + 0x20));
  MenuWnd_DrawText(0xe9,0x6c,0x273);
  iVar1 = UiMgr_FindLayout(0xe9);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  return;
}

// 0x00233b30  size 0x58
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_00233b30(void)

{
  int iVar1;
  
  iVar1 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x25,8);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x00233b90  size 0x10c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_draw_sub_00233b90(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar2 = UiMgr_FindLayout(7);
  UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x25,8);
  UiLayout_UpdateAnimById(0xe8,0);
  iVar2 = UiMgr_FindLayout(0xe8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  (*(code *)(&PTR_scrcareer_draw_sub_00233540_0032b210)[*(int *)((int)param_1 + 4)])(param_1);
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  return;
}

// 0x00233ca0  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_00233ca0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Msg_Get(0x2a0);
  iVar2 = UiMgr_FindLayout(0xe8);
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
  return;
}

// 0x00233d40  size 0x320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_anim_sub_00233d40
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
               ulong param_6,int param_7)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 < param_5) {
    fVar2 = (float)((int)(param_7 * param_4) / (int)param_5 + 0x10);
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    fVar5 = (float)uVar1;
    fVar4 = fVar2 + fVar5;
    if ((float)(param_4 + 0x10) < fVar4) {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,2,0x10);
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat((fVar4 - (float)(param_4 + 0x10)) / 16.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,
                          param_3,6);
      fVar5 = (float)(param_4 + 0x10) - fVar2;
    }
    else {
      iVar3 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_3,8);
    }
  }
  else {
    fVar2 = 16.0;
    fVar5 = (float)param_4;
  }
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar2,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_2,2);
  iVar3 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(fVar5 / 16.0,*_g_UiMgr + iVar3 * 0x4f4 + 4,param_2,6);
  return;
}

