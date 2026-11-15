// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002a4000 - 0x002a8000
#include "ghidra_types.h"

// 0x002a41e0  size 0x188
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 7 of state table 0x32ed40 used by maybe_ScrQuickRace_Update */

void maybe_ScrQuickRace_State7(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar1 != 0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    if (param_1[0x220] == 6) {
      param_1[0xb] = 0;
      MenuList_Reset(param_1 + 0x228,0x106,2,3,param_1[0xb],0x12,8);
      param_1[0x22e] = param_1[0x1a];
      MenuList_HandleInput(param_1 + 0x228,0);
      if (param_1[0x228] == 2) {
        uVar2 = param_1[0x22a];
      }
      else {
        uVar2 = 0xffffffff;
      }
      param_1[0xb] = uVar2;
    }
    param_1[1] = 8;
    *param_1 = 6;
  }
  lVar3 = MenuList_HandleInput(param_1 + 0x228,0);
  if (lVar3 == 1) {
    param_1[0x20] = 1;
    param_1[0x21] = 1;
  }
  if (param_1[0x20] != 0) {
    uVar4 = _g_MenuInput[2];
    if ((_g_MenuInput[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar4 = 0x100000;
    }
    if (uVar4 != 0x10) goto LAB_002a433c;
  }
  if (param_1[0x228] == 2) {
    uVar2 = param_1[0x22a];
  }
  else {
    uVar2 = 0xffffffff;
  }
  param_1[0xb] = uVar2;
LAB_002a433c:
  param_1[0xc] = 0;
  return;
}

// 0x002a4370  size 0x16c
/* entry 6 of state table 0x32ed40 used by maybe_ScrQuickRace_Update */

void maybe_ScrQuickRace_State6(undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar1 != 0) {
    bVar2 = Menu_MapCursorToItem(param_1[4]);
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
    if ((param_1[0x220] == 5) || (param_1[0x220] == -1)) {
      param_1[9] = 0;
    }
    *param_1 = 5;
  }
  Menu_HandleCursor(param_1 + 9,0,2,1,1,param_1[0x1e]);
  if (param_1[9] == 1) {
    param_1[1] = 8;
  }
  else {
    param_1[1] = 7;
  }
  return;
}

// 0x002a44e0  size 0x1bc
/* entry 5 of state table 0x32ed40 used by maybe_ScrQuickRace_Update */

void maybe_ScrQuickRace_State5(undefined4 *param_1)

{
  undefined1 in_zero_qw [16];
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 extraout_v0_udw;
  undefined8 uVar6;
  undefined8 extraout_v0_udw_00;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar7;
  
  iVar2 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar2 == 0) goto LAB_002a4568;
  param_1[1] = 6;
  *param_1 = 4;
  iVar2 = Replay_GetHeader();
  uVar6 = extraout_v0_udw;
  if ((((*(int *)(iVar2 + 0x40c) == 0) ||
       (cVar1 = Menu_MapCursorToItem(param_1[4]), uVar6 = extraout_v0_udw_00,
       *(char *)(iVar2 + 0x28) != cVar1)) ||
      (*(char *)(iVar2 + 0x29) != (&DAT_0036ee2c)[param_1[6]])) ||
     (*(char *)(iVar2 + 0x2b) != (&DAT_0036ee34)[param_1[8]])) {
LAB_002a4528:
    auVar5._8_8_ = uVar6;
    auVar5._0_8_ = 0xfffffffffffffffd;
    auVar5 = _pcpyld(in_zero_qw,auVar5);
    *(ulong *)(param_1 + 0x1c) = *(ulong *)(param_1 + 0x1c) & auVar5._0_8_;
  }
  else {
    cVar1 = (&DAT_0036ee30)[param_1[7]];
    if (param_1[4] - 5 < 2) {
      if (cVar1 == '\x01') {
        cVar1 = '\x02';
      }
      else if (cVar1 == '\x04') {
        cVar1 = '\x05';
      }
    }
    if (*(char *)(iVar2 + 0x2a) != cVar1) goto LAB_002a4528;
    if (((*(char *)(iVar2 + 0x37c) == '\x02') && (param_1[2] == 0)) ||
       ((*(char *)(iVar2 + 0x37c) == '\x01' && (param_1[2] == 1)))) {
      *(ulong *)(param_1 + 0x1c) = *(ulong *)(param_1 + 0x1c) | 2;
    }
    else {
      auVar4._8_8_ = extraout_v0_udw_00;
      auVar4._0_8_ = 0xfffffffffffffffd;
      auVar5 = _pcpyld(in_zero_qw,auVar4);
      *(ulong *)(param_1 + 0x1c) = *(ulong *)(param_1 + 0x1c) & auVar5._0_8_;
    }
  }
  if (param_1[0x220] == 4) {
    lVar3 = Options_Get_10();
    uVar7 = 1;
    if (lVar3 == 0) {
      uVar7 = 2;
    }
    param_1[10] = uVar7;
  }
LAB_002a4568:
  Menu_HandleCursor(param_1 + 10,0,2,2,1,param_1[0x1c]);
  return;
}

// 0x002a46a0  size 0xfc
/* state of maybe_ScrReplayList; on-screen text/callee hint "SubtitleHide" (was
   ScrSubtitleHide_Exita46a0) */

void maybe_ScrReplayList_State8_SubtitleHide(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar1 != 0) {
    param_1[1] = 5;
    *param_1 = 3;
    if (param_1[0x220] == 3) {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
    }
  }
  Menu_HandleCursor(param_1 + 5,0,2,2,1,0);
  iVar1 = param_1[5];
  if (iVar1 == 2) {
    Menu_HandleCursor(param_1 + 8,0,8,1,1,0);
  }
  else if (iVar1 == 1) {
    Menu_HandleCursor(param_1 + 7,0,8,3,1,0);
  }
  else if (iVar1 == 0) {
    Menu_HandleCursor(param_1 + 6,0,8,1,1,0);
  }
  return;
}

// 0x002a47a0  size 0x250
/* state of maybe_ScrReplayList; on-screen text/callee hint "SubtitleHide" (was
   ScrSubtitleHide_Updatea47a0) */

void maybe_ScrReplayList_State7_SubtitleHide(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar2 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar2 != 0) {
    param_1[1] = 4;
    *param_1 = 2;
    param_1[0x1d9] = 0;
    Subtitle_Show(0x1c,0x1c,0x14,0);
    uVar4 = Menu_MapCursorToItem(param_1[4]);
    uVar4 = MsgId_ForDriveType(uVar4,0);
    Subtitle_Hide(10,uVar4);
    param_1[0x1da] = 0;
    if (param_1[0x220] == 2) {
      param_1[4] = 0;
      param_1[0x1d6] = 0;
    }
  }
  lVar3 = Menu_HandleCursor(param_1 + 4,0,2,param_1[0x1d5],1,0);
  if (lVar3 == 1) {
    uVar4 = Menu_MapCursorToItem(param_1[4]);
    uVar4 = MsgId_ForDriveType(uVar4,0);
    Subtitle_Hide(10,uVar4);
    param_1[0x1da] = 0;
  }
  else {
    param_1[0x1da] = param_1[0x1da] + 1;
    if (param_1[0x1da] == 0xb4) {
      uVar4 = Menu_MapCursorToItem(param_1[4]);
      uVar4 = MsgId_ForDriveType(uVar4,1);
      Subtitle_Hide(10,uVar4);
      iVar2 = param_1[0x1d5];
      goto LAB_002a4838;
    }
    if (param_1[0x1da] == 0x168) {
      param_1[0x1da] = 0;
      uVar4 = Menu_MapCursorToItem(param_1[4]);
      uVar4 = MsgId_ForDriveType(uVar4,0);
      Subtitle_Hide(10,uVar4);
    }
  }
  iVar2 = param_1[0x1d5];
LAB_002a4838:
  Menu_HandleList(param_1 + 0x1d9,param_1 + 0x1d6,iVar2 + 1,4,0,2);
  bVar1 = Menu_MapCursorToItem(param_1[4]);
  g_MenuMgr->unk_0620 = bVar1;
  g_MenuMgr->unk_0624 = 0xffffffff;
  g_MenuMgr->unk_0628 = 0xffffffff;
  g_MenuMgr->unk_05ac = bVar1;
  if (bVar1 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
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

// 0x002a49f0  size 0x88
/* state of maybe_ScrReplayList; on-screen text/callee hint "SubtitleHide" (was
   ScrSubtitleHide_Entera49f0) */

void maybe_ScrReplayList_State6_SubtitleHide(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if ((iVar1 != 0) && (*param_1 = 0, param_1[0x220] == 0)) {
    param_1[3] = 0;
  }
  Menu_HandleCursor(param_1 + 3,0,2,1,1,param_1[0x16]);
  if (param_1[3] == 1) {
    param_1[1] = 0xb;
  }
  else {
    param_1[1] = 3;
  }
  return;
}

// 0x002a4a80  size 0x78
/* entry 1 of state table 0x32ed40 used by maybe_ScrQuickRace_Update */

void maybe_ScrQuickRace_State1(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar1 != 0) {
    param_1[0xf] = 0;
    *param_1 = 0;
  }
  Menu_HandleCursor(param_1 + 0xf,0,2,1,1,0);
  if (param_1[0xf] == 0) {
    param_1[1] = 0xfffffffd;
  }
  else {
    param_1[1] = 0xfffffffe;
  }
  return;
}

// 0x002a4b00  size 0x70
/* entry 0 of state table 0x32ed40 used by maybe_ScrQuickRace_Update */

void maybe_ScrQuickRace_State0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar1 != 0) {
    *param_1 = 0;
  }
  Menu_HandleCursor(param_1 + 2,0,2,2,1,0);
  if (param_1[2] == 2) {
    param_1[1] = 1;
  }
  else {
    param_1[1] = 2;
  }
  return;
}

// 0x002a4b70  size 0x8
/* menu screen 32 (table 0x3274b0) */

void maybe_ScrQuickRace_Exit(void)

{
  return;
}

// 0x002a4b80  size 0x194
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 32 (table 0x3274b0) */

void maybe_ScrQuickRace_Update(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  lVar1 = Menu_IsInputIdle(piVar5 + 0x220);
  if (lVar1 != 0) {
    lVar1 = maybe_QuickRace_ReadPad();
    if (lVar1 == 0) {
      iVar3 = piVar5[0x221];
    }
    else {
      uRam0036f770 = uRam0036f770 | (uint)lVar1;
      maybe_ScrQuickRace_UpdateCarNames(param_1);
      iVar3 = piVar5[0x221];
    }
    (*(code *)(&PTR_maybe_ScrQuickRace_State0_0032ed40)[iVar3])(param_1);
    uVar4 = _g_MenuInput[2];
    if ((_g_MenuInput[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar4 = 0x100000;
    }
    if (uVar4 == 0x10) {
      if (piVar5[0x221] == 0) {
        Se_PlayMenu(5);
        iVar3 = piVar5[1];
      }
      else {
        if (*piVar5 == piVar5[0x221]) {
          uVar2 = 8;
        }
        else {
          uVar2 = 5;
        }
        Se_PlayMenu(uVar2);
        iVar3 = piVar5[1];
      }
      maybe_ScrQuickRace_StartRace(param_1,iVar3);
    }
    else if (uVar4 == 0x20) {
      if (*piVar5 == piVar5[0x221]) {
        uVar2 = 8;
      }
      else {
        uVar2 = 6;
      }
      Se_PlayMenu(uVar2);
      if (piVar5[0x221] == 0) {
        piVar5[2] = 2;
      }
      else {
        maybe_ScrQuickRace_StartRace(param_1,*piVar5);
      }
    }
    Menu_RequestTransition(piVar5 + 0x220);
  }
  return;
}

// 0x002a4d20  size 0x350
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 32 (table 0x3274b0) */

void maybe_ScrQuickRace_Enter(int param_1)

{
  undefined1 in_zero_qw [16];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_v1_udw;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  lVar4 = Options_Get_10();
  uVar1 = 1;
  if (lVar4 == 0) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  lVar4 = Options_Get_14();
  *(uint *)(param_1 + 0x38) = (uint)(lVar4 == 0);
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0xffffffff;
  uVar1 = Msg_ProfileStat(0);
  *(undefined4 *)(param_1 + 0x754) = uVar1;
  *(ulong *)(param_1 + 0x60) =
       *(ulong *)(param_1 + 0x60) & (long)((1 << (*(int *)(param_1 + 0x754) + 1U & 0x1f)) + -1);
  Mem_Set16(param_1 + 0x2d4,0,0x480);
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = param_1;
  do {
    iVar2 = Profile_Get(0);
    if (*(int *)(iVar2 + iVar8 + 0x20f0) == 1) {
      uVar3 = MenuText_CarFullName(iVar9,0xffffffffffffffff);
      if ((int)uVar3 < *(int *)(param_1 + 0x2c)) {
        *(uint *)(param_1 + 0x2c) = uVar3;
      }
      *(undefined4 *)(iVar7 + 0x2d4) = 1;
      *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) | (long)(1 << (uVar3 & 0x1f));
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 4;
    iVar7 = iVar7 + 4;
  } while (iVar9 < 0x120);
  if (g_MenuMgr->prevScreen == 0x17) {
    iVar7 = MenuMgr_UpdateTransition();
    *(uint *)(param_1 + 8) = (uint)(*(char *)(iVar7 + 0x779) != '\x04');
    uVar1 = MsgId_ForOption(*(undefined1 *)(iVar7 + 0x780));
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((uint)*(byte *)(iVar7 + 0x781) * 4 + 0x36ee38)
    ;
    *(undefined4 *)(param_1 + 0x1c) =
         *(undefined4 *)(&DAT_0032ed70 + (uint)*(byte *)(iVar7 + 0x782) * 4);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((uint)*(byte *)(iVar7 + 0x783) * 4 + 0x36ee40)
    ;
    iVar7 = MenuMgr_UpdateTransition(0x17);
    if (*(int *)(iVar7 + 0x7e4) == 0) {
      *(undefined4 *)(param_1 + 0x880) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x884) = 5;
      *(undefined4 *)(param_1 + 0x888) = 5;
      *(undefined4 *)(param_1 + 0x890) = 1;
      *(undefined4 *)(param_1 + 0x89c) = 0;
      *(undefined4 *)(param_1 + 0x894) = 1;
      *(undefined4 *)(param_1 + 0x88c) = 1;
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x880) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x884) = 6;
      *(undefined4 *)(param_1 + 0x888) = 6;
      *(undefined4 *)(param_1 + 0x890) = 1;
      *(undefined4 *)(param_1 + 0x89c) = 0;
      *(undefined4 *)(param_1 + 0x894) = 1;
      *(undefined4 *)(param_1 + 0x88c) = 1;
      *(undefined4 *)(param_1 + 0x898) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x880) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x884) = 0;
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined4 *)(param_1 + 0x890) = 1;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    *(undefined4 *)(param_1 + 0x894) = 1;
    *(undefined4 *)(param_1 + 0x88c) = 1;
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  uVar5 = Profile_Get(0);
  lVar4 = Garage_FindCar(uVar5);
  if (lVar4 == 0) {
    auVar6._8_8_ = in_v1_udw;
    auVar6._0_8_ = 0xfffffffffffffffd;
    auVar6 = _pcpyld(in_zero_qw,auVar6);
    *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) & auVar6._0_8_;
  }
  if (iRam0036f770 != 0) {
    maybe_ScrQuickRace_UpdateCarNames(param_1);
  }
  if (_s_ScrQuickRaceVar1 != 2) {
    *(int *)(param_1 + 8) = _s_ScrQuickRaceVar1;
    *(undefined4 *)(param_1 + 0x880) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x884) = 2;
    *(undefined4 *)(param_1 + 0x888) = 2;
    *(undefined4 *)(param_1 + 0x890) = 1;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    *(undefined4 *)(param_1 + 0x894) = 1;
    *(undefined4 *)(param_1 + 0x88c) = 1;
    *(undefined4 *)(param_1 + 0x898) = 0;
    _s_ScrQuickRaceVar1 = 2;
  }
  return;
}

// 0x002a5080  size 0x12c
void maybe_Record_FormatEntry(undefined8 param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_250 [568];
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  uStack_14 = 0;
  uStack_18 = 0;
  if (*(int *)*param_2 < 0) {
    iVar2 = 0;
    do {
      puVar1 = (undefined1 *)((int)param_1 + iVar2);
      *puVar1 = 0x2d;
      iVar2 = iVar2 + 6;
      puVar1[1] = 0x2d;
      puVar1[2] = 0x2d;
      puVar1[3] = 0x2d;
      puVar1[4] = 0x2d;
      puVar1[5] = 0x2d;
    } while (iVar2 < 7);
    *(undefined1 *)((int)param_1 + iVar2) = 0x2d;
  }
  else {
    maybe_Record_GetOptionValue(&uStack_18);
    uStack_18 = uStack_18 & 0xfffffffe;
    Time_SplitHms(1,*(undefined4 *)(*param_2 + 0xc),&uStack_4,&uStack_8,&uStack_c);
    uStack_18 = CONCAT22(uStack_18._2_2_,
                         (ushort)uStack_18 & 0xf01f | (ushort)((uStack_4 & 0x7f) << 5));
    uVar3 = uStack_18 & 0xfffc0fff | (uStack_8 & 0x3f) << 0xc;
    uStack_18._2_2_ = (ushort)(uVar3 >> 0x10);
    uStack_18._0_2_ = (ushort)uVar3;
    uStack_18 = CONCAT22(uStack_18._2_2_ & 0xf003 | (ushort)((uStack_c & 0x3ff) << 2),
                         (ushort)uStack_18);
    Password_Decode(auStack_250,&uStack_18,param_1);
  }
  return;
}

// 0x002a51b0  size 0x2f0
void maybe_QuickRace_GetOptionValue
               (byte *param_1,uint *param_2,byte param_3,char param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  
  if (param_3 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case 0:
      param_1[4] = param_1[4] & 0x83;
      break;
    case 1:
      param_1[4] = param_1[4] & 0x83 | 4;
      break;
    case 2:
      param_1[4] = param_1[4] & 0x83 | 8;
      break;
    case 3:
      param_1[4] = param_1[4] & 0x83 | 0xc;
      break;
    case 4:
      param_1[4] = param_1[4] & 0x83 | 0x10;
      break;
    case 5:
      param_1[4] = param_1[4] & 0x83 | 0x14;
      break;
    case 6:
      param_1[4] = param_1[4] & 0x83 | 0x18;
      break;
    case 7:
      param_1[4] = param_1[4] & 0x83 | 0x1c;
    }
  }
  if (param_4 == '\0') {
    *param_1 = *param_1 & 0xfb;
LAB_002a5310:
    bVar1 = (byte)param_2[1];
  }
  else {
    if (param_4 == '\x01') {
      *param_1 = *param_1 & 0xfb | 4;
      goto LAB_002a5310;
    }
    bVar1 = (byte)param_2[1];
  }
  if (bVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      param_1[4] = param_1[4] & 0xfc;
      break;
    default:
      param_1[4] = param_1[4] & 0xfc | 1;
      break;
    case 3:
      param_1[4] = param_1[4] & 0xfc | 2;
      break;
    case 4:
      param_1[4] = param_1[4] & 0xfc | 3;
    }
  }
  if (*(char *)((int)param_2 + 5) == '\x01') {
    *param_1 = *param_1 & 0xf7 | 8;
  }
  else if (*(char *)((int)param_2 + 5) == '\0') {
    *param_1 = *param_1 & 0xf7;
  }
  if (param_5 == '\x01') {
    *param_1 = *param_1 & 0xfd | 2;
  }
  else {
    if (param_5 != '\0') {
      uVar2 = *param_2;
      goto LAB_002a5454;
    }
    *param_1 = *param_1 & 0xfd;
  }
  uVar2 = *param_2;
LAB_002a5454:
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0x7f | (ushort)((uVar2 & 0x1ff) << 7);
  *param_1 = *param_1 & 0xef | (param_2[2] != 0) << 4;
  return;
}

// 0x002a54a0  size 0x2f0
void maybe_Record_GetOptionValue(byte *param_1,uint *param_2,byte param_3,char param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  
  if (param_3 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case 0:
      param_1[4] = param_1[4] & 0x83;
      break;
    case 1:
      param_1[4] = param_1[4] & 0x83 | 4;
      break;
    case 2:
      param_1[4] = param_1[4] & 0x83 | 8;
      break;
    case 3:
      param_1[4] = param_1[4] & 0x83 | 0xc;
      break;
    case 4:
      param_1[4] = param_1[4] & 0x83 | 0x10;
      break;
    case 5:
      param_1[4] = param_1[4] & 0x83 | 0x14;
      break;
    case 6:
      param_1[4] = param_1[4] & 0x83 | 0x18;
      break;
    case 7:
      param_1[4] = param_1[4] & 0x83 | 0x1c;
    }
  }
  if (param_4 == '\0') {
    *param_1 = *param_1 & 0xfb;
LAB_002a5600:
    bVar1 = (byte)param_2[1];
  }
  else {
    if (param_4 == '\x01') {
      *param_1 = *param_1 & 0xfb | 4;
      goto LAB_002a5600;
    }
    bVar1 = (byte)param_2[1];
  }
  if (bVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      param_1[4] = param_1[4] & 0xfc;
      break;
    default:
      param_1[4] = param_1[4] & 0xfc | 1;
      break;
    case 3:
      param_1[4] = param_1[4] & 0xfc | 2;
      break;
    case 4:
      param_1[4] = param_1[4] & 0xfc | 3;
    }
  }
  if (*(char *)((int)param_2 + 5) == '\x01') {
    *param_1 = *param_1 & 0xf7 | 8;
  }
  else if (*(char *)((int)param_2 + 5) == '\0') {
    *param_1 = *param_1 & 0xf7;
  }
  if (param_5 == '\x01') {
    *param_1 = *param_1 & 0xfd | 2;
  }
  else {
    if (param_5 != '\0') {
      uVar2 = *param_2;
      goto LAB_002a5744;
    }
    *param_1 = *param_1 & 0xfd;
  }
  uVar2 = *param_2;
LAB_002a5744:
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0x7f | (ushort)((uVar2 & 0x1ff) << 7);
  *param_1 = *param_1 & 0xef | (param_2[2] != 0) << 4;
  return;
}

// 0x002a5790  size 0x44
void maybe_QuickRace_InitRowsA(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *param_1 = param_2;
    param_1[1] = param_2 + 0x14;
    iVar1 = iVar1 + 5;
    param_1[2] = param_2 + 0x28;
    param_1[3] = param_2 + 0x3c;
    param_1[4] = param_2 + 0x50;
    param_2 = param_2 + 100;
    param_1 = param_1 + 5;
  } while (iVar1 < 10);
  return;
}

// 0x002a57e0  size 0x44
void maybe_QuickRace_InitRowsB(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *param_1 = param_2;
    param_1[1] = param_2 + 0x10;
    iVar1 = iVar1 + 5;
    param_1[2] = param_2 + 0x20;
    param_1[3] = param_2 + 0x30;
    param_1[4] = param_2 + 0x40;
    param_2 = param_2 + 0x50;
    param_1 = param_1 + 5;
  } while (iVar1 < 10);
  return;
}

// 0x002a5830  size 0x74
/* entry 3 of state table 0x32edf0 used by maybe_ScrCarShop_Update */

void maybe_ScrCarShop_State3(int param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    uVar3 = Profile_Get(0);
    cVar2 = Garage_GetSelectedSlot(uVar3);
    *(int *)(param_1 + 0x2c) = (int)cVar2;
    uVar3 = Profile_Get(0);
    Garage_SortCars(uVar3);
  }
  return;
}

// 0x002a58b0  size 0x30
/* entry 2 of state table 0x32edf0 used by maybe_ScrCarShop_Update */

void maybe_ScrCarShop_State2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// 0x002a58e0  size 0x30
/* entry 1 of state table 0x32edf0 used by maybe_ScrCarShop_Update */

void maybe_ScrCarShop_State1(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// 0x002a5910  size 0xe8
/* entry 0 of state table 0x32edf0 used by maybe_ScrCarShop_Update */

void maybe_ScrCarShop_State0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  iVar1 = piVar5[4];
  piVar5[4] = 0;
  if (iVar1 != 0) {
    *piVar5 = 0;
    piVar5[9] = -1;
  }
  Menu_HandleCursor(param_1,0,2,1,1,0);
  if (*piVar5 == 0) {
    uVar2 = Profile_Get(0);
    lVar3 = Garage_CanBuy(uVar2);
    if (lVar3 == 0) {
      piVar5[10] = 2;
    }
    else {
      uVar2 = Profile_Get(0);
      lVar3 = Garage_CanBuy(uVar2);
      uVar2 = Profile_Get(0);
      lVar4 = Profile_GetMoney(uVar2);
      if (lVar4 < lVar3) {
        piVar5[10] = 1;
      }
      else {
        piVar5[10] = 3;
      }
    }
  }
  else {
    piVar5[10] = -1;
  }
  return;
}

// 0x002a5a00  size 0x8
/* menu screen 34 (table 0x3274b0) */

void maybe_ScrCarShop_Exit(void)

{
  return;
}

// 0x002a5a10  size 0x14c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 34 (table 0x3274b0) */

void maybe_ScrCarShop_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  lVar2 = Menu_IsInputIdle(iVar4 + 4);
  if (lVar2 != 0) {
    (*(code *)(&PTR_maybe_ScrCarShop_State0_0032edf0)[*(int *)(iVar4 + 8)])(param_1);
    uVar3 = _g_MenuInput[2];
    if ((_g_MenuInput[4] & uVar3) == 0) {
      uVar3 = 0x100000;
    }
    else if (uVar3 == 0x80000) {
      uVar3 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar3 = 0x100000;
    }
    if (uVar3 == 0x10) {
      if (*(int *)(iVar4 + 0x28) == 3) {
        Se_PlayMenu(0xc);
        iVar1 = *(int *)(iVar4 + 0x28);
      }
      else {
        Se_PlayMenu(5);
        iVar1 = *(int *)(iVar4 + 0x28);
      }
      if (iVar1 < 0) {
        MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
      }
      else {
        *(int *)(iVar4 + 0xc) = iVar1;
      }
    }
    else if (uVar3 == 0x20) {
      Se_PlayMenu(6);
      if (*(int *)(iVar4 + 0x24) < 0) {
        MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
      }
      else {
        *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0x24);
      }
    }
    Menu_RequestTransition(iVar4 + 4);
  }
  return;
}

// 0x002a5b60  size 0x34
/* menu screen 34 (table 0x3274b0) */

void maybe_ScrCarShop_Enter(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[9] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 1;
  param_1[8] = 0;
  param_1[6] = 1;
  param_1[4] = 1;
  param_1[7] = 0;
  return;
}

// 0x002a5ba0  size 0x1e4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 33 (table 0x3274b0) */

void maybe_ScrModeReset_Update(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  Menu_IsInputIdle();
  uVar5 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar5) == 0) {
    uVar5 = 0x100000;
  }
  else if (uVar5 == 0x80000) {
    uVar5 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar5 = 0x100000;
  }
  iVar4 = (int)param_1;
  if (uVar5 == 0x10) {
    iVar2 = MenuMgr_UpdateTransition(0x17);
    *(undefined1 *)(iVar2 + 0x778) = 1;
    *(char *)(iVar2 + 0x779) = (char)*(undefined4 *)(iVar4 + 0x20) + '\x01';
    *(undefined4 *)(iVar2 + 0x77c) = 0;
    MenuMgr_RequestScreen(0x17);
    uVar3 = UiRes_GetLayoutData(*(undefined4 *)(*(int *)(iVar4 + 0x20) * 4 + 0x32ee00));
    iVar4 = UiMgr_FindLayout(0xb9);
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
    Se_PlayMenu(5);
  }
  else if (uVar5 == 0x20) {
    MenuMgr_RequestScreen(0x16);
    Se_PlayMenu(6);
  }
  else if (uVar5 == 2) {
    Menu_HandleCursor(iVar4 + 0x20,0,2,2,1,0);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar4 + 0x20);
  }
  else if (uVar5 == 1) {
    Menu_HandleCursor(iVar4 + 0x20,0,2,2,1,0);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar4 + 0x20);
  }
  Menu_RequestTransition(param_1);
  return;
}

// 0x002a5d90  size 0x8
/* menu screen 33 (table 0x3274b0) */

void maybe_ScrModeReset_Exit(void)

{
  return;
}

// 0x002a5da0  size 0x38
/* menu screen 33 (table 0x3274b0) */

void maybe_ScrModeReset_Enter(undefined4 *param_1)

{
  param_1[8] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = param_1[8];
  param_1[2] = param_1[8];
  param_1[4] = 1;
  param_1[7] = 0;
  param_1[5] = 1;
  param_1[3] = 1;
  param_1[6] = 0;
  RaceCtx_SetMode(5);
  return;
}

// 0x002a5de0  size 0x1f8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ScrGarageList_HandleInput(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = _g_MenuInput[*(int *)(param_1 + 0x14) + 2];
  if ((_g_MenuInput[*(int *)(param_1 + 0x14) + 4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 0x1000) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      Se_PlayMenu(5);
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    else if (*(int *)(param_1 + 0x2c) == 1) {
      Se_PlayMenu(5);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else if (uVar4 == 0x10) {
    Se_PlayMenu(5);
    if (*(int *)(param_1 + 0x4c) == 3) {
      iVar2 = Profile_Get(*(undefined4 *)(param_1 + 0x10));
      uVar1 = *(undefined2 *)(iVar2 + *(int *)(param_1 + 0xc) * 2 + 0x13ee);
      uVar3 = Profile_Get(*(undefined4 *)(param_1 + 0x10));
      Garage_IsSlotUsed(uVar3,uVar1);
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    if (iVar2 == 1) {
      Garage_BuildSortedCarList
                (param_1 + 4,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
      g_MenuMgr->unk_002c = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 < 0) {
      if (iVar2 == -2) {
        g_MenuMgr->unk_002c = *(uint *)(param_1 + 0xc);
      }
      MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
    }
    else {
      *(int *)(param_1 + 0x30) = iVar2;
    }
  }
  else if (uVar4 == 0x20) {
    Se_PlayMenu(6);
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 < 0) {
      if (iVar2 == -2) {
        g_MenuMgr->unk_002c = *(uint *)(param_1 + 0xc);
      }
      MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
    }
    else {
      *(int *)(param_1 + 0x30) = iVar2;
    }
  }
  return;
}

// 0x002a5fe0  size 0x34
/* entry 3 of state table 0x32ee10 used by maybe_ScrGarageList_Update */

void maybe_ScrGarageList_State3(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  return;
}

// 0x002a6020  size 0x74
/* entry 2 of state table 0x32ee10 used by maybe_ScrGarageList_Update */

void maybe_ScrGarageList_State2(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[0xd];
  piVar2[0xd] = 0;
  if (iVar1 != 0) {
    piVar2[0x12] = 0;
    *piVar2 = 0;
  }
  Menu_HandleCursor(param_1,piVar2[5],2,1,1,0);
  if (*piVar2 == 0) {
    piVar2[0x13] = 3;
  }
  else {
    piVar2[0x13] = 0;
  }
  return;
}

// 0x002a60a0  size 0x5c
/* entry 1 of state table 0x32ee10 used by maybe_ScrGarageList_Update */

void maybe_ScrGarageList_State1(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  Menu_HandleCursor(param_1 + 8,*(undefined4 *)(param_1 + 0x14),2,6,1,0);
  return;
}

// 0x002a6100  size 0x1dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 0 of state table 0x32ee10 used by maybe_ScrGarageList_Update */

void maybe_ScrGarageList_State0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (iVar1 != 0) {
    if ((g_MenuMgr->flags & 0x1a0000) == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0xfffffffe;
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 2;
    }
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  Menu_HandleCursor(param_1 + 0xc,*(undefined4 *)(param_1 + 0x14),2,*(int *)(param_1 + 0x20) + -1,0,
                    0);
  uVar2 = _g_MenuInput[*(int *)(param_1 + 0x14) + 2];
  if ((_g_MenuInput[*(int *)(param_1 + 0x14) + 4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 2) {
    if (iVar1 != *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar1 = *(int *)(param_1 + 0x20) + -1;
      if (6 < iVar1) {
        iVar1 = 6;
      }
      if ((iVar1 < *(int *)(param_1 + 0x18)) && (7 < *(int *)(param_1 + 0x20))) {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        *(undefined4 *)(param_1 + 0x1c) = 1;
        *(undefined4 *)(param_1 + 0x18) = 6;
      }
    }
  }
  else if ((((uVar2 == 1) && (iVar1 != *(int *)(param_1 + 0xc))) &&
           (*(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1, *(int *)(param_1 + 0x18) < 0))
          && (7 < *(int *)(param_1 + 0x20))) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    *(undefined4 *)(param_1 + 0x1c) = 2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

// 0x002a62e0  size 0x8
/* menu screen 35 (table 0x3274b0) */

void maybe_ScrGarageList_Exit(void)

{
  return;
}

// 0x002a62f0  size 0x60
/* menu screen 35 (table 0x3274b0) */

void maybe_ScrGarageList_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x28);
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrGarageList_State0_0032ee10)[*(int *)(iVar2 + 0x2c)])(param_1);
    maybe_ScrGarageList_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 0x28);
  }
  return;
}

// 0x002a6350  size 0xfc
/* menu screen 35 (table 0x3274b0) */

void maybe_ScrGarageList_Enter(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 0x10) = (uint)((g_MenuMgr->flags & 0x800000) != 0);
  *(uint *)(param_1 + 0x14) = (uint)((g_MenuMgr->flags & 0x1000000) != 0);
  uVar2 = Profile_Get(*(undefined4 *)(param_1 + 0x10));
  uVar1 = Garage_FindCar(uVar2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if ((g_MenuMgr->flags & 0x1a0000) == 0) {
    *(uint *)(param_1 + 0xc) = g_MenuMgr->unk_002c;
    if (*(int *)(param_1 + 0xc) < 7) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0xc);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 6;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  Garage_BuildSortedCarList(param_1 + 4,8,*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

// 0x002a6450  size 0x8
/* menu screen 36 (table 0x3274b0) */

void ScrGarageSelect_Exit(void)

{
  return;
}

// 0x002a6460  size 0x11c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 36 (table 0x3274b0) */

void ScrGarageSelect_Update(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uStack_4;
  
  Menu_HandleCursor(param_1 + 8,0,2,2,1,*(undefined4 *)(param_1 + 4));
  uVar2 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 0x10) {
    Se_PlayMenu(5);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 2) {
      MenuMgr_RequestScreen(0x23);
    }
    else if (iVar1 == 1) {
      uStack_4 = 0;
      Garage_BuildSortedCarList(&uStack_4,8,0);
      g_MenuMgr->unk_002c = uStack_4;
      MenuMgr_RequestScreen(0x25);
    }
    else if (iVar1 == 0) {
      MenuMgr_RequestScreen(0x11);
    }
  }
  return;
}

// 0x002a6580  size 0xc4
/* menu screen 36 (table 0x3274b0) */

void ScrGarageSelect_Enter(int param_1)

{
  if (g_MenuMgr->prevScreen == 0x23) {
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else if (g_MenuMgr->prevScreen == 0x25) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((g_MenuMgr->flags & 0x10000) != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  if ((g_MenuMgr->flags & 0x8000) != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  if ((g_MenuMgr->flags & 0x4000) != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  }
  return;
}

// 0x002a6650  size 0x154
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_ScrGarageList; on-screen text/callee hint "SubtitleHide" (was
   ScrSubtitleHide_Entera6650) */

void maybe_ScrGarageList_State9_SubtitleHide(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  Menu_HandleCursor(param_1 + 0x2c,0,2,*(int *)(param_1 + 0x2f8) + -1,1,0);
  iVar1 = *(int *)(param_1 + 0x2f8);
  if (10 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == (iVar2 + 1) % iVar1) {
      *(int *)(param_1 + 0x28) = iVar2;
      *(undefined1 *)(param_1 + 0x30) = 2;
    }
    else if (iVar2 == (iVar3 + 10) % iVar1) {
      *(int *)(param_1 + 0x28) = (iVar3 + 1) % iVar1;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  uVar4 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 8) {
    Se_PlayMenu();
  }
  else if (uVar4 == 4) {
    *(undefined4 *)(param_1 + 8) = 1;
    Se_PlayMenu(7);
  }
  return;
}

// 0x002a67b0  size 0xf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 4 of state table 0x32ee20 used by maybe_ScrCarSpec_Update */

void maybe_ScrCarSpec_State4(int param_1)

{
  uint uVar1;
  
  uVar1 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 1;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 3;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 8) = 5;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 4) {
    *(undefined4 *)(param_1 + 8) = 0;
    Se_PlayMenu(7);
  }
  return;
}

// 0x002a68b0  size 0xec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 3 of state table 0x32ee20 used by maybe_ScrCarSpec_Update */

void maybe_ScrCarSpec_State3(int param_1)

{
  uint uVar1;
  
  uVar1 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 4;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 2;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 8) = 5;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 4) {
    *(undefined4 *)(param_1 + 8) = 0;
    Se_PlayMenu(7);
  }
  return;
}

// 0x002a69a0  size 0xec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 2 of state table 0x32ee20 used by maybe_ScrCarSpec_Update */

void maybe_ScrCarSpec_State2(int param_1)

{
  uint uVar1;
  
  uVar1 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 3;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 1;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 8) = 5;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 4) {
    *(undefined4 *)(param_1 + 8) = 0;
    Se_PlayMenu(7);
  }
  return;
}

// 0x002a6a90  size 0xec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 1 of state table 0x32ee20 used by maybe_ScrCarSpec_Update */

void maybe_ScrCarSpec_State1(int param_1)

{
  uint uVar1;
  
  uVar1 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 2;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 4;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 8) = 5;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 4) {
    *(undefined4 *)(param_1 + 8) = 0;
    Se_PlayMenu(7);
  }
  return;
}

// 0x002a6b80  size 0xa4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 0 of state table 0x32ee20 used by maybe_ScrCarSpec_Update */

void maybe_ScrCarSpec_State0(int param_1)

{
  uint uVar1;
  
  uVar1 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 8) = 1;
    Se_PlayMenu(7);
  }
  else if (uVar1 == 4) {
    Se_PlayMenu(8);
  }
  return;
}

// 0x002a6c30  size 0x8
/* menu screen 37 (table 0x3274b0) */

void maybe_ScrCarSpec_Exit(void)

{
  return;
}

// 0x002a6c40  size 0xfc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 37 (table 0x3274b0) */

void maybe_ScrCarSpec_Update(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = Menu_IsInputIdle();
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrCarSpec_State0_0032ee20)[*(int *)((int)param_1 + 4)])(param_1);
    uVar2 = _g_MenuInput[2];
    if ((_g_MenuInput[4] & uVar2) == 0) {
      uVar2 = 0x100000;
    }
    else if (uVar2 == 0x80000) {
      uVar2 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar2 = 0x100000;
    }
    if (uVar2 == 0x20) {
      MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
      Se_PlayMenu(6);
    }
    else if (uVar2 == 0x10) {
      MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
      Se_PlayMenu(5);
    }
    Menu_RequestTransition(param_1);
  }
  return;
}

// 0x002a6d40  size 0x2a8
/* menu screen 37 (table 0x3274b0) */

void maybe_ScrCarSpec_Enter(undefined4 *param_1)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_5b0 [1424];
  undefined1 auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 1;
  param_1[7] = 0;
  param_1[5] = 1;
  param_1[3] = 1;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xbf] = 0;
  uVar4 = Profile_Get(0);
  lVar5 = Garage_FindCar(uVar4);
  if (lVar5 == 0) {
    param_1[0xc0] = 0xffffffff;
    param_1[0xc1] = 0;
    param_1[0xc2] = 0;
    param_1[0xc3] = 0;
    param_1[0xc4] = 0;
    param_1[0xc5] = 0;
    param_1[0xc6] = 0;
    param_1[199] = 0;
    param_1[200] = 0;
    param_1[0xc9] = 0;
    param_1[0xca] = 0;
    param_1[0xcb] = 0;
    param_1[0xcc] = 0;
    param_1[0xcd] = 0;
  }
  else {
    uVar4 = Profile_Get(0);
    if (g_MenuMgr->prevScreen == 0x24) {
      param_1[8] = 0xffffffff;
      uVar6 = Profile_Get(0);
      sVar1 = Profile_GetCurrentCarIndex(uVar6);
      param_1[9] = (int)sVar1;
    }
    else {
      param_1[8] = g_MenuMgr->unk_002c;
      param_1[9] = (int)*(short *)(param_1[8] * 2 + (int)uVar4 + 0x13ee);
    }
    maybe_Ui_BuildCarSpec(auStack_20,param_1[8],0,0xffffffffffffffff,0);
    puVar2 = (undefined2 *)Profile_GetCarRecordB(uVar4,param_1[9]);
    iVar3 = CarDb_GetModel(*puVar2);
    param_1[0xc0] = *(undefined4 *)(iVar3 + 0x88);
    param_1[0xc1] = uStack_8;
    param_1[0xc2] = (int)fStack_1c;
    param_1[0xc3] = (int)fStack_18;
    param_1[0xc4] = (int)(fStack_14 * 10.0);
    param_1[0xc5] = (int)fStack_10;
    param_1[0xc6] = (int)fStack_c;
    iVar3 = Profile_GetDay(uVar4);
    param_1[199] = iVar3 - *(int *)(puVar2 + 4);
    param_1[200] = *(undefined4 *)(puVar2 + 6);
    param_1[0xc9] = (int)*(float *)(puVar2 + 8);
    uVar4 = MenuText_CarModelId(param_1[8],0);
    lVar5 = MenuText_OpponentComment(uVar4,0xffffffffffffffff);
    param_1[0xca] = (uint)(0 < lVar5);
    lVar5 = MenuText_OpponentTitle(uVar4,0xffffffffffffffff);
    param_1[0xcb] = (uint)(0 < lVar5);
    iVar3 = MenuText_OpponentTeam(uVar4,0xffffffffffffffff);
    param_1[0xcc] = (uint)(0.0 < (float)iVar3);
    lVar5 = MenuText_OpponentSpec(uVar4,0xffffffffffffffff);
    param_1[0xcd] = (uint)(0 < lVar5);
  }
  Mem_Set16((int)param_1 + 0x32,0,0x2c4);
  maybe_CarList_BuildOwned((int)param_1 + 0x32,auStack_5b0,param_1 + 0xbe);
  return;
}

// 0x002a6ff0  size 0x174
void maybe_ScrRaceStart_Build(int *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_s0;
  
  uVar2 = Menu_MapCursorToItem(param_1[1] + -1);
  iVar1 = param_1[6];
  if (iVar1 == 3) {
    if (((uVar2 & 0xff) == 7) || (unaff_s0 = 4, (uVar2 & 0xff) == 4)) {
      unaff_s0 = 5;
    }
  }
  else if (iVar1 == 2) {
    uVar3 = uVar2 & 0xff;
    if (uVar3 == 8) {
      unaff_s0 = 2;
    }
    else if ((uVar3 == 7) || (uVar3 == 4)) {
      unaff_s0 = 2;
    }
    else {
      unaff_s0 = 1;
    }
  }
  else if (iVar1 == 1) {
    if ((uVar2 & 0xff) == 8) {
      unaff_s0 = 1;
    }
    else {
      unaff_s0 = 3;
    }
  }
  else if (iVar1 == 0) {
    unaff_s0 = 0;
  }
  if (param_1[5] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 9;
  }
  if (*param_1 == 3) {
    RaceSetup_Build(10,param_1[9],(char)g_MenuMgr->unk_002c,uVar2,unaff_s0,param_1[7] != 0,0,uVar4);
  }
  else {
    RaceSetup_Build(9,param_1[9],0xffffffffffffffff,uVar2,unaff_s0,param_1[7] != 0,0,uVar4);
  }
  return;
}

// 0x002a7170  size 0xd8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 8 of state table 0x32ee20 used by maybe_ScrCarSpec_Update */

void maybe_ScrCarSpec_State8(int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x48) = 1;
    lVar2 = Options_Get_14();
    *(uint *)(param_1 + 0x24) = (uint)(lVar2 != 0);
  }
  uVar3 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar3 = 0x100000;
  }
  if ((uVar3 == 2) || (uVar3 == 1)) {
    Se_PlayMenu(7);
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) != 0 ^ 1;
  }
  return;
}

// 0x002a7250  size 0x134
/* state of maybe_ScrGarageList; on-screen text/callee hint "SubtitleHide" (was
   ScrSubtitleHide_Exita7250) */

void maybe_ScrGarageList_State11_SubtitleHide(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xd];
  param_1[0xd] = 0;
  if (iVar1 != 0) {
    param_1[0x13] = 2;
    param_1[0x12] = 0;
  }
  if (param_1[1] == 0) {
    Menu_HandleCursor(param_1 + 8,0,2,1,1,0);
    iVar1 = param_1[8];
  }
  else {
    Menu_HandleCursor(param_1 + 8,0,2,2,1,0);
    iVar1 = param_1[8];
  }
  if (iVar1 == 2) {
    Menu_HandleCursor(param_1 + 7,0,8,1,1,0);
  }
  else if (iVar1 == 1) {
    Menu_HandleCursor(param_1 + 6,0,8,3,1,0);
  }
  else {
    if (iVar1 != 0) {
      iVar1 = *param_1;
      goto LAB_002a733c;
    }
    Menu_HandleCursor(param_1 + 5,0,8,1,1,0);
  }
  iVar1 = *param_1;
LAB_002a733c:
  if (iVar1 == 0x28) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  }
  return;
}

// 0x002a7390  size 0x2fc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_ScrGarageList; on-screen text/callee hint "SubtitleHide" (was
   ScrSubtitleHide_Updatea7390) */

void maybe_ScrGarageList_State10_SubtitleHide(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = Msg_ProfileStat(1);
  iVar4 = param_1[0xd];
  iVar1 = iVar1 + 1;
  param_1[0xd] = 0;
  if (iVar4 != 0) {
    param_1[0x13] = 1;
    param_1[0x12] = -1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    Subtitle_Show(0x1c,0x1c,0x14,0);
    uVar3 = Menu_MapCursorToItem(param_1[1] + -1);
    uVar3 = MsgId_ForDriveType(uVar3,0);
    Subtitle_Hide(10,uVar3);
    param_1[4] = 0;
  }
  lVar2 = Menu_HandleCursor(param_1 + 1,0,2,iVar1,1,0);
  if (lVar2 == 1) {
    uVar3 = Menu_MapCursorToItem(param_1[1] + -1);
    uVar3 = MsgId_ForDriveType(uVar3,0);
    Subtitle_Hide(10,uVar3);
    param_1[4] = 0;
  }
  else {
    param_1[4] = param_1[4] + 1;
    if (param_1[4] == 0xb4) {
      uVar3 = Menu_MapCursorToItem(param_1[1] + -1);
      uVar3 = MsgId_ForDriveType(uVar3,1);
      Subtitle_Hide(10,uVar3);
    }
    else if (param_1[4] == 0x168) {
      param_1[4] = 0;
      uVar3 = Menu_MapCursorToItem(param_1[1] + -1);
      uVar3 = MsgId_ForDriveType(uVar3,0);
      Subtitle_Hide(10,uVar3);
    }
  }
  uVar5 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar5) == 0) {
    uVar6 = 0x100000;
  }
  else {
    uVar6 = 0x80000;
    if (uVar5 != 0x80000) {
      if (*_g_MenuInput == 1) {
        uVar6 = uVar5;
      }
      else {
        uVar6 = 0x100000;
      }
    }
  }
  if (uVar6 == 1) {
    param_1[2] = param_1[2] + -1;
    if (param_1[2] < 0) {
      if (iVar1 < 4) {
        param_1[2] = iVar1;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        param_1[3] = 2;
        param_1[2] = 0;
      }
    }
  }
  else {
    if ((_g_MenuInput[4] & uVar5) == 0) {
      uVar5 = 0x100000;
    }
    else if (uVar5 == 0x80000) {
      uVar5 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar5 = 0x100000;
    }
    if (uVar5 == 2) {
      param_1[2] = param_1[2] + 1;
      iVar4 = iVar1;
      if (3 < iVar1) {
        iVar4 = 3;
      }
      if (iVar4 < param_1[2]) {
        if (iVar1 < 4) {
          param_1[2] = 0;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          param_1[3] = 1;
          param_1[2] = 3;
        }
      }
    }
  }
  if (*param_1 == 0x28) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  }
  return;
}

// 0x002a7690  size 0x8
/* menu screen 38 (table 0x3274b0) */

void maybe_ScrRaceStart_Exit(void)

{
  return;
}

// 0x002a76a0  size 0x1bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 38 (table 0x3274b0) */

void maybe_ScrRaceStart_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  lVar2 = Menu_IsInputIdle(puVar4 + 10);
  if (lVar2 != 0) {
    (*(code *)(&PTR_maybe_ScrGarageList_State10_SubtitleHide_0032ee38)[puVar4[0xb]])(param_1);
    uVar3 = _g_MenuInput[2];
    if ((_g_MenuInput[4] & uVar3) == 0) {
      uVar3 = 0x100000;
    }
    else if (uVar3 == 0x80000) {
      uVar3 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar3 = 0x100000;
    }
    if (uVar3 == 0x10) {
      if (puVar4[0xb] == 0) {
        Subtitle_Hide(5,0xffff);
      }
      Se_PlayMenu(5);
      iVar1 = puVar4[0x13];
      if (iVar1 < 0) {
        if (iVar1 == -1) {
          MenuMgr_RequestScreen(*puVar4);
        }
        if (iVar1 == -2) {
          maybe_ScrRaceStart_Build(param_1);
          MenuMgr_RequestScreen(0xfffffffffffffffe);
        }
      }
      else {
        puVar4[0xc] = iVar1;
      }
    }
    else if (uVar3 == 0x20) {
      if (puVar4[0xb] == 0) {
        Subtitle_Hide(5,0xffff);
      }
      Se_PlayMenu(6);
      iVar1 = puVar4[0x12];
      if (iVar1 < 0) {
        if (iVar1 == -1) {
          MenuMgr_RequestScreen(*puVar4);
        }
        if (iVar1 == -2) {
          maybe_ScrRaceStart_Build(param_1);
          MenuMgr_RequestScreen(0xfffffffffffffffe);
        }
      }
      else {
        puVar4[0xc] = iVar1;
      }
    }
    Menu_RequestTransition(puVar4 + 10);
  }
  return;
}

// 0x002a7860  size 0x17c
/* menu screen 38 (table 0x3274b0) */

void maybe_ScrRaceStart_Enter(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  cVar1 = RaceCtx_Get_8();
  if (cVar1 == '\t') {
    RaceCtx_Set_8(0x13);
    puVar3[10] = 0xffffffff;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xe] = 1;
    puVar3[0x11] = 0;
    puVar3[0xf] = 1;
    puVar3[0xd] = 1;
    puVar3[0x10] = 0;
    *puVar3 = 0x28;
  }
  else {
    cVar1 = RaceCtx_Get_8();
    if (cVar1 == '\n') {
      RaceCtx_Set_8(0x13);
      puVar3[10] = 0xffffffff;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xe] = 1;
      puVar3[0x11] = 0;
      puVar3[0xf] = 1;
      puVar3[0xd] = 1;
      puVar3[0x10] = 0;
      *puVar3 = 3;
      uVar2 = GameState_Get_3a48();
      g_MenuMgr->unk_002c = uVar2;
    }
    else if (g_MenuMgr->prevScreen == 0x28) {
      puVar3[10] = 0xffffffff;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xe] = 1;
      puVar3[0x11] = 0;
      puVar3[0xf] = 1;
      puVar3[0xd] = 1;
      puVar3[0x10] = 0;
      *puVar3 = 0x28;
    }
    else {
      puVar3[10] = 0xffffffff;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xe] = 1;
      puVar3[0x11] = 0;
      puVar3[0xf] = 1;
      puVar3[0xd] = 1;
      puVar3[0x10] = 0;
      *puVar3 = 3;
    }
  }
  (*(code *)(&PTR_maybe_ScrGarageList_State10_SubtitleHide_0032ee38)[puVar3[0xb]])(param_1);
  return;
}

// 0x002a79e0  size 0x348
void maybe_ScrRivalIntro_OnResult(undefined4 *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_300 [58];
  short sStack_2c6;
  undefined1 auStack_180 [56];
  short sStack_148;
  
  if (param_2 < 0) {
    if (param_2 == -2) {
      uVar3 = RivalDb_FindByCourse(*(undefined2 *)(param_1 + 2));
      RivalDb_Copy(auStack_180,uVar3);
      RivalDb_Copy(auStack_300,uVar3);
      uVar6 = Msg_RivalCourse(param_1[2]);
      cVar1 = Race_IsTimeTrialMode(uVar6,0);
      if (cVar1 == '\0') {
        bVar2 = Msg_RivalCourse(param_1[2]);
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
        g_MenuMgr->unk_0624 = 9 - (int)sStack_148;
        g_MenuMgr->unk_0628 = 9 - (int)sStack_2c6;
      }
      else {
        bVar2 = Msg_RivalCourse(param_1[2]);
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
        g_MenuMgr->unk_0624 = (int)sStack_148;
        g_MenuMgr->unk_0628 = (int)sStack_2c6;
      }
      MenuMgr_RequestScreen(0xf);
    }
    else if (param_2 == -3) {
      uVar6 = Msg_RivalCourse(param_1[2]);
      uVar4 = Profile_Get(0);
      uVar4 = Profile_GetDifficulty(uVar4);
      uVar5 = Profile_Get(0);
      uVar5 = Profile_GetChapter(uVar5);
      RivalDb_FindByCourse(*(undefined2 *)(param_1 + 2));
      Msg_RivalTitle(param_1[2]);
      RaceSetup_Build(4,*param_1,0xffffffffffffffff,uVar6,uVar4,uVar5,0,0);
      GameState_Set_3dc(*(undefined1 *)(param_1 + 2));
      MenuMgr_RequestScreen(0xfffffffffffffffe);
    }
    else if (param_2 == -1) {
      MenuMgr_RequestScreen(0xd);
    }
  }
  else {
    param_1[0x47] = (int)param_2;
  }
  return;
}

// 0x002a7d30  size 0xdc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 10 of state table 0x32ee50 used by maybe_ScrRivalIntro_Update */

void maybe_ScrRivalIntro_State10(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x134) = 1;
    *(undefined4 *)(param_1 + 0x138) = 1;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  uVar2 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 0x1000) {
    Se_PlayMenu(5);
    *(undefined4 *)(param_1 + 0x11c) = 1;
  }
  return;
}

// 0x002a7e10  size 0x9c
/* entry 9 of state table 0x32ee50 used by maybe_ScrRivalIntro_Update */

void maybe_ScrRivalIntro_State9(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  Menu_HandleCursor(param_1 + 0x10,0,2,1,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x138) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}

// 0x002a7eb0  size 0x58
/* entry 8 of state table 0x32ee50 used by maybe_ScrRivalIntro_Update */

void maybe_ScrRivalIntro_State8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  return;
}

// 0x002a7f10  size 0x58
/* entry 7 of state table 0x32ee50 used by maybe_ScrRivalIntro_Update */

void maybe_ScrRivalIntro_State7(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  return;
}

// 0x002a7f70  size 0x184
/* entry 6 of state table 0x32ee50 used by maybe_ScrRivalIntro_Update */

void maybe_ScrRivalIntro_State6(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    iVar2 = *(int *)(param_1 + 8);
    iVar8 = 0;
    uVar4 = Profile_Get(0);
    lVar5 = Garage_FindCar(uVar4);
    if (0 < lVar5) {
      iVar7 = 0;
      do {
        uVar4 = Msg_TeamInfo((long)iVar2);
        uVar4 = Maker_GetInfo(uVar4);
        iVar3 = Profile_Get(0);
        uVar1 = *(undefined2 *)(iVar3 + iVar7 + 0x13ee);
        uVar6 = Profile_Get(0);
        uVar6 = Profile_GetCarRecordB(uVar6,uVar1);
        uVar6 = CarRec_GetName(uVar6);
        iVar3 = CarRec_GetOptionSlot(uVar6,uVar4);
        if ((long)*(char *)(iVar3 + 2) == (long)iVar2) {
          *(undefined4 *)(param_1 + 0x110) = 1;
          goto LAB_002a8074;
        }
        iVar7 = iVar7 + 2;
        iVar8 = iVar8 + 1;
        uVar4 = Profile_Get(0);
        iVar3 = Garage_FindCar(uVar4);
      } while (iVar8 < iVar3);
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
LAB_002a8074:
  Menu_HandleCursor(param_1 + 0x10,0,2,1,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x138) = 7;
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}

