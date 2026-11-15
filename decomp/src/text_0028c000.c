// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0028c000 - 0x00290000
#include "ghidra_types.h"

// 0x0028c480  size 0x1c
/* entry 11 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State11(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x0028c4a0  size 0x8
/* entry 10 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State10(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 0x0028c4b0  size 0x4c
/* entry 9 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State9(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 != 0) {
    *param_1 = 1;
  }
  Menu_HandleCursor(param_1,0,2,1,1,0);
  return;
}

// 0x0028c500  size 0x8
/* entry 8 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State8(void)

{
  return;
}

// 0x0028c510  size 0x8
/* entry 7 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State7(void)

{
  return;
}

// 0x0028c520  size 0x18
/* entry 6 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State6(undefined8 param_1)

{
  Menu_HandleCursor(param_1,0,2,1,1,0);
  return;
}

// 0x0028c540  size 0x18
/* entry 5 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State5(undefined8 param_1)

{
  Menu_HandleCursor(param_1,0,2,1,1,0);
  return;
}

// 0x0028c560  size 0x60
/* entry 4 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 != 0) {
    param_1[param_1[0x19d] + 1] = *param_1;
    *param_1 = 1;
  }
  Menu_HandleCursor(param_1,0,2,1,1,0);
  return;
}

// 0x0028c5c0  size 0x18
/* entry 3 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State3(undefined8 param_1)

{
  Menu_HandleCursor(param_1,0,2,1,1,0);
  return;
}

// 0x0028c5e0  size 0x58
/* entry 2 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State2(undefined4 *param_1)

{
  int iVar1;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  iVar1 = param_1[6];
  param_1[6] = 0;
  if ((iVar1 != 0) && (param_1[3] == 1)) {
    param_1[param_1[0x19d] + 1] = *param_1;
    *param_1 = 0;
  }
  return;
}

// 0x0028c640  size 0xec
/* entry 1 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State1(undefined4 *param_1)

{
  int iVar1;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 != 0) {
    iVar1 = param_1[3];
    if (iVar1 == 0) {
      param_1[0x19d] = *param_1;
      *param_1 = param_1[param_1[0x19d] + 1];
    }
    else if (iVar1 == 2) {
      *param_1 = param_1[param_1[0x19d] + 1];
    }
    else if ((iVar1 == 4) || (iVar1 == 8)) {
      *param_1 = param_1[param_1[0x19d] + 1];
    }
    else if (iVar1 == 10) {
      *param_1 = param_1[param_1[0x19d] + 1];
    }
    else if (iVar1 == 3) {
      *param_1 = param_1[param_1[0x19d] + 1];
    }
  }
  return;
}

// 0x0028c730  size 0x90
/* entry 0 of state table 0x32e780 used by maybe_ScrRivalList_Update */

void maybe_ScrRivalList_State0(undefined4 *param_1)

{
  int iVar1;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 == 0) {
    param_1[0x19d] = *param_1;
  }
  else if (param_1[3] == 1) {
    param_1[param_1[0x19d] + 1] = *param_1;
    *param_1 = param_1[0x19d];
  }
  Menu_HandleCursor(param_1,0,8,1,1,0);
  return;
}

// 0x0028c7c0  size 0x8
/* menu screen 7 (table 0x3274b0) */

void maybe_ScrRivalList_Exit(void)

{
  return;
}

// 0x0028c7d0  size 0x60
/* menu screen 7 (table 0x3274b0) */

void maybe_ScrRivalList_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0xc);
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrRivalList_State0_0032e780)[*(int *)(iVar2 + 0x10)])(param_1);
    maybe_ScrRivalList_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 0xc);
  }
  return;
}

// 0x0028c830  size 0x74
/* menu screen 7 (table 0x3274b0) */

void maybe_ScrRivalList_Enter(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = Profile_Get(0);
  puVar2 = (undefined4 *)param_1;
  puVar2[0x1a0] = uVar1;
  maybe_ScrRivalList_ClearSlots(param_1);
  puVar2[3] = 0xffffffff;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[7] = 1;
  puVar2[10] = 0;
  puVar2[8] = 1;
  puVar2[6] = 1;
  puVar2[9] = 0;
  *puVar2 = 0;
  puVar2[0x19d] = 0;
  puVar2[0x19e] = 0;
  puVar2[1] = 0;
  puVar2[0x19f] = 0;
  puVar2[2] = 0;
  return;
}

// 0x0028c8b0  size 0xa8
undefined4 maybe_ScrNewProfile_CheckName(int param_1)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  uint uVar6;
  char acStack_10 [16];
  
  iVar4 = 0;
  pcVar3 = acStack_10;
  do {
    cVar2 = *(char *)(param_1 + iVar4);
    if (cVar2 == '\0') break;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    iVar4 = iVar4 + 1;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (iVar4 < 0xb);
  uVar6 = 0;
  ppuVar5 = &PTR_DAT_0032e810;
  do {
    lVar1 = strcmp(acStack_10,*ppuVar5);
    if (lVar1 == 0) {
      return 0;
    }
    uVar6 = uVar6 + 2;
    ppuVar5 = ppuVar5 + 2;
  } while (uVar6 < 3);
  return 1;
}

// 0x0028c960  size 0x15c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ScrNewProfile_OnResult(int param_1,long param_2)

{
  MenuMgr *pMVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pMVar1 = g_MenuMgr;
  if (param_2 < 0) {
    if (param_2 == -1) {
      MenuMgr_RequestScreen(0x16);
    }
    else if (param_2 == -2) {
      uVar4 = 0;
      g_MenuMgr->unk_0538 = 0;
      *(undefined4 *)&pMVar1->field_0x53c = 0;
      lVar2 = strcmp(param_1 + 0x38,0x366bc8);
      if (lVar2 == 0) {
        uVar4 = 0x10;
      }
      lVar2 = strcmp(param_1 + 0x38,0x366bd0);
      if (lVar2 == 0) {
        uVar4 = 0x20;
      }
      lVar2 = strcmp(param_1 + 0x38,0x366bd8);
      if (lVar2 == 0) {
        uVar4 = 0x20;
      }
      lVar2 = strcmp(param_1 + 0x38,0x366be8);
      if (lVar2 == 0) {
        uVar4 = 0x40;
      }
      uVar3 = Profile_Get(0);
      Career_CopyFlags(uVar3,param_1 + 0x38);
      uVar3 = Profile_Get(0);
      Profile_ResetCareer(uVar3,uVar4);
      Profile_ResetPlayTimer();
      _g_CareerShared1 = g_RaceCtx->language + 7;
      RaceCtx_Set_9(0);
      MenuMgr_RequestScreen(0xfffffffffffffffd);
    }
    else if (param_2 == -3) {
      Profile_ResetPlayTimer();
      Menu_GetChapterIndex();
    }
  }
  else {
    *(int *)(param_1 + 0x20) = (int)param_2;
  }
  return;
}

// 0x0028cac0  size 0x58
/* entry 2 of state table 0x32e800 used by maybe_ScrNewProfile_Update */

void maybe_ScrNewProfile_State2(undefined8 param_1)

{
  char cVar1;
  int *piVar2;
  
  Menu_HandleCursor(param_1,0,2,1,0,0);
  piVar2 = (int *)param_1;
  cVar1 = -2;
  if (*piVar2 != 0) {
    cVar1 = '\x01';
  }
  piVar2[4] = (int)cVar1;
  piVar2[5] = 1;
  return;
}

// 0x0028cb20  size 0x380
/* entry 1 of state table 0x32e800 used by maybe_ScrNewProfile_Update */

void maybe_ScrNewProfile_State1(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  *param_1 = 0;
  uVar8 = 0;
  iVar2 = param_1[9];
  param_1[9] = 0;
  if ((iVar2 != 0) && (param_1[3] == 10)) {
    param_1[3] = 9;
    *(undefined1 *)((int)param_1 + 0x41) = 0;
  }
  uVar6 = 0;
  pcVar5 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0 + param_1[1];
  do {
    if (*pcVar5 != '\0') {
      uVar8 = uVar8 | 1 << (uVar6 & 0x1f);
    }
    uVar6 = uVar6 + 1;
    pcVar5 = pcVar5 + 0xd;
  } while ((int)uVar6 < 6);
  uVar6 = 0;
  pcVar5 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0 + param_1[2] * 0xd;
  do {
    if (*pcVar5 != '\0') {
      uVar7 = uVar7 | 1 << (uVar6 & 0x1f);
    }
    uVar6 = uVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while ((int)uVar6 < 0xd);
  Menu_HandleCursor(param_1 + 1,0,8,0xc,1,uVar7);
  Menu_HandleCursor(param_1 + 2,0,2,5,1,uVar8);
  param_1[4] = 0xfffffffc;
  param_1[5] = 0xfffffffc;
  uVar7 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar7) == 0) {
    uVar7 = 0x100000;
  }
  else if (uVar7 == 0x80000) {
    uVar7 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar7 = 0x100000;
  }
  if (uVar7 == 0x10) {
    cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0[param_1[2] * 0xd + param_1[1]];
    if (cVar1 == '>') {
      bVar3 = false;
      cVar1 = *(char *)(param_1 + 0xe);
      iVar2 = 0;
      while (cVar1 != '\0') {
        if (*(char *)((int)param_1 + iVar2 + 0x38) != ' ') {
          bVar3 = true;
          break;
        }
        cVar1 = *(char *)((int)param_1 + iVar2 + 0x39);
        iVar2 = iVar2 + 1;
      }
      lVar4 = maybe_ScrNewProfile_CheckName(param_1 + 0xe);
      if (lVar4 == 0) {
        bVar3 = false;
      }
      if (!bVar3) {
        *(undefined1 *)(param_1 + 0xe) = 0x4b;
        *(undefined1 *)((int)param_1 + 0x39) = 0x61;
        *(undefined1 *)((int)param_1 + 0x3a) = 0x69;
        *(undefined1 *)((int)param_1 + 0x3b) = 100;
        *(undefined1 *)(param_1 + 0xf) = 0x6f;
        *(undefined1 *)((int)param_1 + 0x3d) = 0x5f;
        *(undefined1 *)((int)param_1 + 0x3e) = 0x54;
        *(undefined1 *)((int)param_1 + 0x3f) = 0x61;
        *(undefined1 *)(param_1 + 0x10) = 0x72;
        *(undefined1 *)((int)param_1 + 0x41) = 0x6f;
        *(undefined1 *)((int)param_1 + 0x42) = 0;
        param_1[3] = 10;
        param_1[1] = 1;
        param_1[2] = 3;
      }
      param_1[8] = 2;
    }
    else if (cVar1 == '<') {
      iVar2 = param_1[3];
      if (0 < iVar2) {
        param_1[3] = iVar2 + -1;
        *(undefined1 *)((int)param_1 + iVar2 + 0x37) = 0;
      }
    }
    else {
      iVar2 = param_1[3];
      if (iVar2 < 9) {
        param_1[3] = iVar2 + 1;
        *(char *)((int)param_1 + iVar2 + 0x38) = cVar1;
        *(undefined1 *)((int)param_1 + param_1[3] + 0x38) = 0;
      }
      else {
        param_1[3] = 10;
        *(char *)((int)param_1 + 0x41) = cVar1;
        *(undefined1 *)((int)param_1 + 0x42) = 0;
        param_1[8] = 2;
      }
    }
  }
  else if (uVar7 == 0x20) {
    iVar2 = param_1[3];
    if (iVar2 == 0) {
      param_1[8] = 0;
    }
    else {
      param_1[3] = iVar2 + -1;
      *(undefined1 *)((int)param_1 + iVar2 + 0x37) = 0;
    }
  }
  else if (uVar7 == 0x40) {
    Se_PlayMenu(5);
    param_1[1] = 1;
    param_1[2] = 5;
  }
  return;
}

// 0x0028cea8  size 0x8
/* follows ScrNewProfile_State1; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void ScrNewProfile_State1_Orphan1(void)

{
  return;
}

// 0x0028ceb0  size 0xa8
/* entry 0 of state table 0x32e800 used by maybe_ScrNewProfile_Update */

void maybe_ScrNewProfile_State0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int *piVar5;
  
  uVar2 = Profile_Get(0);
  lVar3 = Profile_GetDay(uVar2);
  piVar5 = (int *)param_1;
  if (lVar3 == 0) {
    Menu_HandleCursor(param_1,0,2,1,1,2);
    iVar1 = *piVar5;
  }
  else {
    Menu_HandleCursor(param_1,0,2,1,1,0);
    iVar1 = *piVar5;
  }
  cVar4 = '\x01';
  if (iVar1 != 1) {
    cVar4 = -3;
  }
  piVar5[4] = (int)cVar4;
  piVar5[5] = -1;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *(undefined1 *)(piVar5 + 0xe) = 0;
  return;
}

// 0x0028cf60  size 0x8
/* menu screen 9 (table 0x3274b0) */

void maybe_ScrNewProfile_Exit(void)

{
  return;
}

// 0x0028cf70  size 0x100
/* menu screen 9 (table 0x3274b0) */

void maybe_ScrNewProfile_Update(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar3 + 0x18);
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrNewProfile_State0_0032e800)[*(int *)(iVar3 + 0x1c)])(param_1);
    uVar2 = g_MenuInput[2];
    if ((g_MenuInput[4] & uVar2) == 0) {
      uVar2 = 0x100000;
    }
    else if (uVar2 == 0x80000) {
      uVar2 = 0x80000;
    }
    else if (*g_MenuInput != 1) {
      uVar2 = 0x100000;
    }
    if (uVar2 == 0x10) {
      Se_PlayMenu(5);
      maybe_ScrNewProfile_OnResult(param_1,*(undefined4 *)(iVar3 + 0x10));
    }
    else if (uVar2 == 0x20) {
      Se_PlayMenu(6);
      maybe_ScrNewProfile_OnResult(param_1,*(undefined4 *)(iVar3 + 0x14));
    }
    Menu_RequestTransition(iVar3 + 0x18);
  }
  return;
}

// 0x0028d070  size 0x68
/* menu screen 9 (table 0x3274b0) */

void maybe_ScrNewProfile_Enter(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 1;
  param_1[0xd] = 0;
  param_1[0xb] = 1;
  param_1[9] = 1;
  param_1[0xc] = 0;
  uVar1 = Profile_Get(0);
  lVar2 = Profile_GetDay(uVar1);
  if (lVar2 == 0) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}

// 0x0028d0e0  size 0x8
/* menu screen 10 (table 0x3274b0) */

void ScrProfileResetPlayTimer_Exit(void)

{
  return;
}

// 0x0028d0f0  size 0x1dc
/* menu screen 10 (table 0x3274b0) */

void ScrProfileResetPlayTimer_Update(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  lVar1 = Menu_IsInputIdle(piVar3 + 1);
  if (lVar1 != 0) {
    if (piVar3[2] == 0) {
      uVar2 = g_MenuInput[2];
      if ((g_MenuInput[4] & uVar2) == 0) {
        uVar2 = 0x100000;
      }
      else if (uVar2 == 0x80000) {
        uVar2 = 0x80000;
      }
      else if (*g_MenuInput != 1) {
        uVar2 = 0x100000;
      }
      if (uVar2 == 0x10) {
        Se_PlayMenu(5);
        if (*piVar3 == 1) {
          Menu_GetChapterIndex();
          Profile_ResetPlayTimer();
        }
        else {
          *piVar3 = 0;
          piVar3[3] = 1;
        }
      }
      else if (uVar2 == 0x20) {
        Se_PlayMenu(6);
        Menu_GetChapterIndex();
      }
    }
    else {
      uVar2 = g_MenuInput[2];
      if ((g_MenuInput[4] & uVar2) == 0) {
        uVar2 = 0x100000;
      }
      else if (uVar2 == 0x80000) {
        uVar2 = 0x80000;
      }
      else if (*g_MenuInput != 1) {
        uVar2 = 0x100000;
      }
      if (uVar2 == 0x10) {
        Se_PlayMenu(5);
        if (*piVar3 == 1) {
          MenuMgr_RequestScreen(0x16);
        }
        else {
          MenuMgr_RequestScreen(0x19);
        }
      }
      else if (uVar2 == 0x20) {
        Se_PlayMenu(6);
        *piVar3 = 1;
        piVar3[3] = 0;
      }
    }
    Menu_HandleCursor(param_1,0,2,1,1,0);
    Menu_RequestTransition(piVar3 + 1);
  }
  return;
}

// 0x0028d2d0  size 0xa0
/* menu screen 10 (table 0x3274b0) */

void ScrProfileResetPlayTimer_Enter(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = g_MenuMgr->prevScreen;
  if ((uVar1 != 0xe) && (uVar1 != 0xd)) {
    if (uVar1 != 0x19) {
      return;
    }
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1[2] = 1;
    param_1[3] = 1;
    param_1[5] = 1;
    param_1[8] = 0;
    param_1[6] = 1;
    param_1[4] = 1;
    param_1[7] = 0;
  }
  *param_1 = 1;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 1;
  param_1[8] = 0;
  param_1[6] = 1;
  param_1[4] = 1;
  param_1[7] = 0;
  Profile_GetPlayTime();
  return;
}

// 0x0028d370  size 0x80
/* menu screen 11 (table 0x3274b0) */

void maybe_ScrCarListSorted_Exit(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  g_MenuMgr->unk_05a0 = 0;
  g_MenuMgr->unk_05e8 = 0;
  g_MenuMgr->unk_060c = 0;
  g_MenuMgr->unk_0634 = 0;
  g_MenuMgr->unk_0644 = 0;
  g_MenuMgr->unk_0544 = 0xfffffffe;
  g_MenuMgr->unk_0594 = 0;
  puVar1 = &g_MenuMgr->unk_0534;
  do {
    *(undefined2 *)(puVar1 + 5) = 0x162;
    iVar2 = iVar2 + 7;
    *(undefined2 *)((int)puVar1 + 0x16) = 0x162;
    *(undefined2 *)(puVar1 + 6) = 0x162;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0x162;
    *(undefined2 *)(puVar1 + 7) = 0x162;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0x162;
    *(undefined2 *)(puVar1 + 8) = 0x162;
    puVar1 = (uint *)((int)puVar1 + 0xe);
  } while (iVar2 < 0x15);
  return;
}

// 0x0028d3f0  size 0x118
/* menu screen 11 (table 0x3274b0) */

void maybe_ScrCarListSorted_Update(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  
  Menu_HandleCursor(param_1,0,2,8,1,0);
  piVar2 = (int *)param_1;
  piVar2[1] = *(int *)(&DAT_0032e820 + *piVar2 * 4);
  uVar1 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 0x10) {
    Se_PlayMenu(5);
    MenuMgr_RequestScreen(*(undefined4 *)(&DAT_0032e820 + *piVar2 * 4));
  }
  else if (uVar1 == 0x20) {
    Se_PlayMenu(6);
    Menu_GetChapterIndex();
  }
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x0028d510  size 0x1e0
/* menu screen 11 (table 0x3274b0) */

void maybe_ScrCarListSorted_Enter(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  MenuMgr *pMVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  uVar2 = g_MenuMgr->prevScreen;
  g_MenuMgr->unk_05a0 = 1;
  g_MenuMgr->unk_05e8 = 1;
  g_MenuMgr->unk_060c = 1;
  g_MenuMgr->unk_0634 = 1;
  g_MenuMgr->unk_0644 = 1;
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
  iVar4 = Profile_Get(0);
  iVar5 = Garage_GetSortedCarCount(0);
  pMVar3 = g_MenuMgr;
  iVar7 = 0;
  sVar1 = *(short *)(iVar4 + iVar5 * 2 + 0x13ee);
  g_MenuMgr->unk_0538 = 2;
  *(int *)&pMVar3->field_0x53c = (int)sVar1;
  g_MenuMgr->unk_0544 = 0xfffffffe;
  g_MenuMgr->unk_0594 = 0;
  puVar6 = &g_MenuMgr->unk_0534;
  do {
    *(undefined2 *)(puVar6 + 5) = 0x162;
    iVar7 = iVar7 + 7;
    *(undefined2 *)((int)puVar6 + 0x16) = 0x162;
    *(undefined2 *)(puVar6 + 6) = 0x162;
    *(undefined2 *)((int)puVar6 + 0x1a) = 0x162;
    *(undefined2 *)(puVar6 + 7) = 0x162;
    *(undefined2 *)((int)puVar6 + 0x1e) = 0x162;
    *(undefined2 *)(puVar6 + 8) = 0x162;
    puVar6 = (uint *)((int)puVar6 + 0xe);
  } while (iVar7 < 0x15);
  *param_1 = 0;
  if (uVar2 == 0xf) {
    *param_1 = 8;
  }
  else if (uVar2 == 0x12) {
    *param_1 = 7;
  }
  else if (uVar2 == 0x10) {
    *param_1 = 6;
  }
  else if (uVar2 == 0x14) {
    *param_1 = 5;
  }
  else if (uVar2 == 0x13) {
    *param_1 = 4;
  }
  else if (uVar2 == 0x11) {
    *param_1 = 3;
  }
  else if (uVar2 == 8) {
    *param_1 = 2;
  }
  else if (uVar2 == 0x28) {
    *param_1 = 1;
  }
  else if (uVar2 == 0x1f) {
    *param_1 = 0;
  }
  return;
}

// 0x0028d6f0  size 0x260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_ScrProfileSetSelection_Apply(void)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar2 = Profile_Get(0);
  cVar1 = Profile_GetSelection2733(uVar2);
  if ((cVar1 == '\0') && (uVar3 = Profile_GetFlags(uVar2), (uVar3 & 0x4000) == 0)) {
    Profile_SetFlags(uVar2,0x4000);
    _g_CareerShared1 = 0x11;
    RaceCtx_Set_9(2);
    uVar4 = 1;
  }
  else {
    cVar1 = Profile_GetSelection2733(uVar2);
    if ((cVar1 == '\x05') && (uVar3 = Profile_GetFlags(uVar2), (uVar3 & 0x8000) == 0)) {
      Profile_SetFlags(uVar2,0x8000);
      _g_CareerShared1 = 0x15;
      RaceCtx_Set_9(2);
      uVar4 = 1;
    }
    else {
      cVar1 = Profile_GetSelection2733(uVar2);
      if ((cVar1 == '\x03') && (uVar3 = Profile_GetFlags(uVar2), (uVar3 & 0x10000) == 0)) {
        Profile_SetFlags(uVar2);
        _g_CareerShared1 = 0x13;
        RaceCtx_Set_9(2);
        uVar4 = 1;
      }
      else {
        cVar1 = Profile_GetSelection2733(uVar2);
        if ((cVar1 == '\x02') && (uVar3 = Profile_GetFlags(uVar2), (uVar3 & 0x20000) == 0)) {
          Profile_SetFlags(uVar2);
          _g_CareerShared1 = 0x12;
          RaceCtx_Set_9(2);
          uVar4 = 1;
        }
        else {
          cVar1 = Profile_GetSelection2733(uVar2);
          if ((cVar1 == '\x04') && (uVar3 = Profile_GetFlags(uVar2), (uVar3 & 0x40000) == 0)) {
            Profile_SetFlags(uVar2);
            _g_CareerShared1 = 0x14;
            RaceCtx_Set_9(2);
            uVar4 = 1;
          }
          else {
            cVar1 = Profile_GetSelection2733(uVar2);
            if ((cVar1 == '\a') && (uVar3 = Profile_GetFlags(uVar2), (uVar3 & 0x80000) == 0)) {
              Profile_SetFlags(uVar2);
              _g_CareerShared1 = 0x17;
              RaceCtx_Set_9(2);
              uVar4 = 1;
            }
            else {
              cVar1 = Profile_GetSelection2733(uVar2);
              if ((cVar1 == '\x06') && (uVar3 = Profile_GetFlags(uVar2), (uVar3 & 0x100000) == 0)) {
                Profile_SetFlags(uVar2);
                _g_CareerShared1 = 0x16;
                RaceCtx_Set_9(2);
                uVar4 = 1;
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}

// 0x0028d950  size 0x8
/* menu screen 12 (table 0x3274b0) */

void ScrProfileSetSelection2733_Exit(void)

{
  return;
}

// 0x0028d960  size 0x2fc
/* menu screen 12 (table 0x3274b0) */

void ScrProfileSetSelection2733_Update(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  uVar6 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar6) == 0) {
    uVar6 = 0x100000;
  }
  else if (uVar6 == 0x80000) {
    uVar6 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar6 = 0x100000;
  }
  if (uVar6 == 0x10) {
    Subtitle_Hide(5,0xffff);
    Se_PlayMenu(5);
    lVar4 = maybe_ScrProfileSetSelection_Apply();
    if (lVar4 == 1) {
      MenuMgr_RequestScreen(0xfffffffffffffffd);
    }
    else {
      MenuMgr_RequestScreen(0x1b);
    }
  }
  else if (uVar6 == 0x20) {
    Subtitle_Hide(5,0xffff);
    Menu_GetChapterIndex();
    Se_PlayMenu(6);
  }
  uVar3 = Msg_ProfileStat(1);
  lVar4 = Menu_HandleCursor(param_1,0,2,uVar3,1,0);
  puVar7 = (undefined4 *)param_1;
  if (lVar4 == 1) {
    uVar3 = Menu_MapCursorToItem(*puVar7);
    uVar3 = MsgId_ForDriveType(uVar3,0);
    Subtitle_Hide(10,uVar3);
    puVar7[2] = 0;
  }
  else {
    puVar7[2] = puVar7[2] + 1;
    if (puVar7[2] == 0xb4) {
      uVar3 = Menu_MapCursorToItem(*puVar7);
      uVar3 = MsgId_ForDriveType(uVar3,1);
      Subtitle_Hide(10,uVar3);
    }
    else if (puVar7[2] == 0x168) {
      puVar7[2] = 0;
      uVar3 = Menu_MapCursorToItem(*puVar7);
      uVar3 = MsgId_ForDriveType(uVar3,0);
      Subtitle_Hide(10,uVar3);
    }
  }
  iVar2 = Msg_ProfileStat(1);
  Menu_HandleList(puVar7 + 3,puVar7 + 1,iVar2 + 1,4,0,2);
  uVar3 = Menu_MapCursorToItem(*puVar7);
  RaceCtx_Set_10(uVar3);
  bVar1 = Menu_MapCursorToItem(*puVar7);
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
  uVar3 = Profile_Get(0);
  uVar5 = Menu_MapCursorToItem(*puVar7);
  Profile_SetSelection2733(uVar3,uVar5);
  return;
}

// 0x0028dc60  size 0x180
/* menu screen 12 (table 0x3274b0) */

void ScrProfileSetSelection2733_Enter(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  param_1[3] = 0;
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetSelection2733(uVar3);
  iVar2 = MsgId_ForOption(uVar3);
  *param_1 = iVar2;
  if (*param_1 < 4) {
    param_1[1] = *param_1;
  }
  else {
    param_1[1] = 0;
  }
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetSelection2733(uVar3);
  RaceCtx_Set_10(uVar3);
  uVar3 = Profile_Get(0);
  bVar1 = Profile_GetSelection2733(uVar3);
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
  Subtitle_Show(0x1c,0x1c,0x14,0);
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetSelection2733(uVar3);
  uVar3 = MsgId_ForDriveType(uVar3,0);
  Subtitle_Hide(10,uVar3);
  param_1[2] = 0;
  return;
}

// 0x0028dde0  size 0x84
void maybe_ScrDay_PickMode(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = g_MenuMgr->prevScreen;
  if (uVar1 == 10) {
    *param_1 = 7;
  }
  else if (uVar1 == 0x15) {
    *param_1 = 6;
  }
  else if (uVar1 == 0x1a) {
    *param_1 = 5;
  }
  else if (uVar1 == 0x27) {
    *param_1 = 3;
  }
  else if (uVar1 == 0xc) {
    *param_1 = 2;
  }
  else if (uVar1 == 1) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}

// 0x0028de70  size 0x250
void maybe_ScrDayResult_HandleInput(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 0x10) {
    if (param_1[1] == -2) {
      Se_PlayMenu(8);
      iVar1 = param_1[1];
    }
    else {
      if (param_1[0xb] == 7) {
        Se_PlayMenu(0xc);
        uVar2 = Profile_Get(0);
        Profile_EarnMoney(uVar2,param_1[9],0);
      }
      else {
        Se_PlayMenu(5);
      }
      iVar1 = param_1[1];
    }
    if (-1 < iVar1) {
      param_1[0xc] = iVar1;
      return;
    }
    if (iVar1 != -1) {
      return;
    }
    if (*(int *)(&DAT_0032e870 + param_1[3] * 4) == -1) {
      MenuMgr_RequestScreen(0xe);
      return;
    }
    MenuMgr_RequestScreen();
    return;
  }
  if (uVar3 != 0x20) {
    return;
  }
  if (*param_1 == -2) {
    Se_PlayMenu(8);
  }
  else if (*param_1 == -3) {
    if (param_1[3] == 7) {
      Se_PlayMenu(8);
      iVar1 = *param_1;
      goto LAB_0028df54;
    }
    Se_PlayMenu(6);
    param_1[3] = 7;
  }
  else if (param_1[0xb] == 7) {
    Se_PlayMenu(0xc);
    uVar2 = Profile_Get(0);
    Profile_EarnMoney(uVar2,param_1[9],0);
  }
  else {
    Se_PlayMenu(6);
  }
  iVar1 = *param_1;
LAB_0028df54:
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      if (*(int *)(&DAT_0032e870 + param_1[3] * 4) == -1) {
        MenuMgr_RequestScreen(0xe);
      }
      else {
        MenuMgr_RequestScreen();
      }
    }
  }
  else {
    param_1[0xc] = iVar1;
  }
  return;
}

// 0x0028e0c0  size 0x49c
/* entry 2 of state table 0x32e850 used by maybe_ScrDayResult_Update */

void maybe_ScrDayResult_State2(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  if ((uint)param_1[0xb] < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1[0xb]) {
    case 1:
      if ((param_1[2] & 2) != 0) {
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[2] = param_1[2] & 0xfffffffd;
      }
      if (param_1[5] != 2) {
        if (param_1[6] == param_1[5]) {
          uVar1 = g_MenuInput[2];
          if ((g_MenuInput[4] & uVar1) == 0) {
            uVar2 = 0x100000;
          }
          else {
            uVar2 = 0x80000;
            if (uVar1 != 0x80000) {
              if (*g_MenuInput == 1) {
                uVar2 = uVar1;
              }
              else {
                uVar2 = 0x100000;
              }
            }
          }
          if (uVar2 != 0x10) {
            if ((g_MenuInput[4] & uVar1) == 0) {
              uVar1 = 0x100000;
            }
            else if (uVar1 == 0x80000) {
              uVar1 = 0x80000;
            }
            else if (*g_MenuInput != 1) {
              uVar1 = 0x100000;
            }
            if (uVar1 != 0x20) goto LAB_0028e204;
          }
          param_1[5] = param_1[5] + 1;
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        }
LAB_0028e204:
        param_1[1] = param_1[0xb];
        *param_1 = param_1[1];
        return;
      }
      break;
    case 2:
      if ((param_1[2] & 4) != 0) {
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[2] = param_1[2] & 0xfffffffb;
      }
      if (param_1[5] != 3) {
        if (param_1[6] == param_1[5]) {
          uVar1 = g_MenuInput[2];
          if ((g_MenuInput[4] & uVar1) == 0) {
            uVar2 = 0x100000;
          }
          else {
            uVar2 = 0x80000;
            if (uVar1 != 0x80000) {
              if (*g_MenuInput == 1) {
                uVar2 = uVar1;
              }
              else {
                uVar2 = 0x100000;
              }
            }
          }
          if (uVar2 != 0x10) {
            if ((g_MenuInput[4] & uVar1) == 0) {
              uVar1 = 0x100000;
            }
            else if (uVar1 == 0x80000) {
              uVar1 = 0x80000;
            }
            else if (*g_MenuInput != 1) {
              uVar1 = 0x100000;
            }
            if (uVar1 != 0x20) goto LAB_0028e304;
          }
          param_1[5] = param_1[5] + 1;
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        }
LAB_0028e304:
        param_1[1] = param_1[0xb];
        *param_1 = param_1[1];
        return;
      }
      break;
    case 3:
      if ((param_1[2] & 8) != 0) {
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[2] = param_1[2] & 0xfffffff7;
      }
      if (param_1[5] != 2) {
        if (param_1[6] == param_1[5]) {
          uVar1 = g_MenuInput[2];
          if ((g_MenuInput[4] & uVar1) == 0) {
            uVar2 = 0x100000;
          }
          else {
            uVar2 = 0x80000;
            if (uVar1 != 0x80000) {
              if (*g_MenuInput == 1) {
                uVar2 = uVar1;
              }
              else {
                uVar2 = 0x100000;
              }
            }
          }
          if (uVar2 != 0x10) {
            if ((g_MenuInput[4] & uVar1) == 0) {
              uVar1 = 0x100000;
            }
            else if (uVar1 == 0x80000) {
              uVar1 = 0x80000;
            }
            else if (*g_MenuInput != 1) {
              uVar1 = 0x100000;
            }
            if (uVar1 != 0x20) goto LAB_0028e404;
          }
          param_1[5] = param_1[5] + 1;
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        }
LAB_0028e404:
        param_1[1] = param_1[0xb];
        *param_1 = param_1[1];
        return;
      }
      break;
    case 4:
      if ((param_1[2] & 1) != 0) {
        param_1[2] = param_1[2] & 0xfffffffe;
      }
      break;
    case 5:
      param_1[2] = param_1[2] & 0xffffffef;
      break;
    case 6:
      param_1[2] = param_1[2] & 0xffffffdf;
      break;
    case 7:
      param_1[2] = param_1[2] & 0xffffffbf;
    }
  }
  uVar1 = param_1[2];
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) == 0) {
        param_1[1] = 0;
      }
      else {
        param_1[1] = 6;
      }
    }
    else {
      param_1[1] = 5;
    }
  }
  else {
    param_1[1] = 4;
  }
  *param_1 = param_1[1];
  return;
}

// 0x0028e560  size 0x80
/* entry 0 of state table 0x32e850 used by maybe_ScrDayResult_Update */

void maybe_ScrDayResult_State0(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = Profile_Get(0);
  lVar2 = Garage_FindCar(uVar1);
  if (0 < lVar2) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  }
  *param_1 = 0xfffffffd;
  param_1[1] = 0xffffffff;
  Menu_HandleCursor(param_1 + 3,0,2,7,1,param_1[4]);
  return;
}

// 0x0028e5e0  size 0x44
/* menu screen 13 (table 0x3274b0) */

void maybe_ScrDayResult_Exit(void)

{
  undefined8 uVar1;
  
  if (g_MenuMgr->nextScreen == 0xe) {
    uVar1 = Profile_Get(0);
    Profile_StartNight(uVar1);
  }
  return;
}

// 0x0028e630  size 0x60
/* menu screen 13 (table 0x3274b0) */

void maybe_ScrDayResult_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x28);
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrDayResult_State0_0032e850)[*(int *)(iVar2 + 0x2c)])(param_1);
    maybe_ScrDayResult_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 0x28);
  }
  return;
}

// 0x0028e690  size 0x3e0
/* menu screen 13 (table 0x3274b0) */

void maybe_ScrDayResult_Enter(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  g_MenuMgr->unk_0620 = '\x01';
  g_MenuMgr->unk_0624 = 0xffffffff;
  g_MenuMgr->unk_0628 = 0xffffffff;
  g_MenuMgr->unk_05ac = '\x01';
  g_MenuMgr->unk_0640 = '\0';
  maybe_ScrDay_PickMode(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  g_MenuMgr->flags = g_MenuMgr->flags | 0x2000;
  if (g_MenuMgr->prevScreen == 0xe) {
    uVar6 = Profile_Get(0);
    iVar3 = Profile_GetDay(uVar6);
    if (iVar3 % 0xf == 0) {
      uVar6 = Profile_Get(0);
      lVar7 = TeamDb_Count(uVar6);
      if (lVar7 != 0) {
        uVar8 = 6;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20;
      }
    }
    uVar6 = Profile_Get(0);
    lVar7 = Career_CountFlags(uVar6);
    if (lVar7 == 1) {
      uVar8 = 5;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
    }
    uVar6 = Profile_Get(0);
    lVar7 = Career_CountDefeatedRivals(uVar6);
    if (lVar7 == 1) {
      uVar8 = 4;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
    uVar6 = Profile_Get(0);
    lVar7 = Profile_GetDay(uVar6);
    if (lVar7 == 2) {
      uVar8 = 3;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    }
  }
  cVar2 = RaceCtx_GetMode();
  if (cVar2 == '\a') {
    cVar2 = RaceCtx_Get_9();
    if (cVar2 == '\x03') {
      uVar6 = RaceCtx_Get_10();
      uVar4 = MsgId_ForOption(uVar6);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      uVar6 = Profile_Get(0);
      iVar3 = Profile_GetDay(uVar6);
      if (iVar3 % 0xf == 0) {
        uVar6 = Profile_Get(0);
        lVar7 = TeamDb_Count(uVar6);
        if (lVar7 != 0) {
          uVar8 = 6;
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20;
        }
      }
      uVar6 = Profile_Get(0);
      lVar7 = Career_CountFlags(uVar6);
      if (lVar7 == 1) {
        uVar8 = 5;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
      }
      uVar6 = Profile_Get(0);
      lVar7 = Career_CountDefeatedRivals(uVar6);
      if (lVar7 == 1) {
        uVar8 = 4;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      }
      uVar6 = Profile_Get(0);
      lVar7 = Profile_GetDay(uVar6);
      if (lVar7 == 2) {
        uVar8 = 3;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
      }
      if (*(int *)(param_1 + 0x20) != 7) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
        *(undefined4 *)(param_1 + 0x24) =
             *(undefined4 *)(&DAT_0032e890 + *(int *)(param_1 + 0x20) * 4);
        uVar8 = 7;
      }
    }
    else if (cVar2 == '\x01') {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
      uVar8 = 2;
    }
    else if (cVar2 == '\0') {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      uVar8 = 1;
    }
    RaceCtx_Set_9(6);
    RaceCtx_SetMode(1);
  }
  bVar1 = false;
  iVar3 = 0;
  do {
    iVar5 = Profile_Get(0);
    cVar2 = Career_GetFlag(iVar5 + 0xd82c,iVar3);
    if (cVar2 != '\0') {
      bVar1 = true;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  uVar6 = Profile_Get(0);
  lVar7 = Garage_FindCar(uVar6);
  if (lVar7 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xa2;
  }
  else {
    iVar3 = Profile_Get(0);
    if ((*(uint *)(iVar3 + 0x272c) & 0x200000) == 0) {
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x10) = 0xbf;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0xb7;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0xff;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

// 0x0028ea70  size 0x220
void maybe_ScrNightBegin_HandleInput(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 0x10) {
    if (param_1[1] == -2) {
      Se_PlayMenu(8);
      iVar1 = param_1[1];
    }
    else {
      Se_PlayMenu(5);
      iVar1 = param_1[1];
    }
    if (iVar1 < 0) {
      if (iVar1 == -1) {
        if (param_1[0xb] == 2) {
          MenuMgr_RequestScreen(0xd);
          iVar1 = param_1[2];
        }
        else {
          iVar1 = param_1[2];
        }
        if (*(int *)(&DAT_0032e870 + iVar1 * 4) == -1) {
          param_1[0xc] = 2;
        }
        else {
          MenuMgr_RequestScreen();
        }
      }
    }
    else {
      param_1[0xc] = iVar1;
    }
  }
  else if (uVar2 == 0x20) {
    if (*param_1 == -2) {
      Se_PlayMenu(8);
      iVar1 = *param_1;
    }
    else {
      if (*param_1 == -3) {
        if (param_1[2] == 7) {
          Se_PlayMenu(8);
        }
        else {
          Se_PlayMenu(6);
          param_1[2] = 7;
        }
      }
      else {
        Se_PlayMenu(6);
      }
      iVar1 = *param_1;
    }
    if (iVar1 < 0) {
      if (iVar1 == -1) {
        if (param_1[0xb] == 2) {
          MenuMgr_RequestScreen(0xd);
          iVar1 = param_1[2];
        }
        else {
          iVar1 = param_1[2];
        }
        if (*(int *)(&DAT_0032e870 + iVar1 * 4) == -1) {
          param_1[0xc] = 2;
        }
        else {
          MenuMgr_RequestScreen();
        }
      }
    }
    else {
      param_1[0xc] = iVar1;
    }
  }
  return;
}

// 0x0028ec90  size 0x168
/* entry 2 of state table 0x32e8b0 used by maybe_ScrNightBegin_Update */

void maybe_ScrNightBegin_State2(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_ca0 [404];
  int aiStack_650 [404];
  
  uVar2 = Profile_Get(0);
  Profile_CopyRivalStates(aiStack_ca0,uVar2);
  piVar5 = aiStack_ca0;
  piVar4 = aiStack_650;
  iVar3 = 0xca;
  do {
    iVar3 = iVar3 + -1;
    iVar1 = piVar5[1];
    *piVar4 = *piVar5;
    piVar4[1] = iVar1;
    piVar5 = piVar5 + 2;
    piVar4 = piVar4 + 2;
  } while (0 < iVar3);
  iVar3 = param_1[0xd];
  param_1[0xd] = 0;
  if (iVar3 != 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[8] = 0;
    param_1[7] = 0;
    iVar3 = param_1[7];
    while ((iVar3 < 200 && (aiStack_650[iVar3 * 2 + 1] != -1))) {
      param_1[7] = param_1[7] + 1;
      iVar3 = param_1[7];
    }
    param_1[9] = 0;
    iVar3 = param_1[7] + -6;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    param_1[7] = iVar3;
  }
  iVar3 = param_1[8];
  Menu_HandleCursor(param_1 + 8,0,2,param_1[7],0,0);
  if (iVar3 < (int)param_1[8]) {
    param_1[9] = 1;
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
  }
  else if ((int)param_1[8] < iVar3) {
    param_1[9] = 2;
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
  }
  return;
}

// 0x0028ee00  size 0x12c
/* entry 1 of state table 0x32e8b0 used by maybe_ScrNightBegin_Update */

void maybe_ScrNightBegin_State1(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  param_1[1] = 0;
  g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
  if (param_1[3] == 4) goto LAB_0028ef00;
  if (param_1[6] == param_1[3]) {
    uVar1 = g_MenuInput[2];
    if ((g_MenuInput[4] & uVar1) == 0) {
      uVar2 = 0x100000;
    }
    else {
      uVar2 = 0x80000;
      if (uVar1 != 0x80000) {
        if (*g_MenuInput == 1) {
          uVar2 = uVar1;
        }
        else {
          uVar2 = 0x100000;
        }
      }
    }
    if (uVar2 != 0x10) {
      if ((g_MenuInput[4] & uVar1) == 0) {
        uVar1 = 0x100000;
      }
      else if (uVar1 == 0x80000) {
        uVar1 = 0x80000;
      }
      else if (*g_MenuInput != 1) {
        uVar1 = 0x100000;
      }
      if (uVar1 != 0x20) goto LAB_0028eef8;
    }
    param_1[3] = param_1[3] + 1;
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
  }
LAB_0028eef8:
  param_1[1] = param_1[0xb];
LAB_0028ef00:
  *param_1 = param_1[1];
  return;
}

// 0x0028ef30  size 0x58
/* entry 0 of state table 0x32e8b0 used by maybe_ScrNightBegin_Update */

void maybe_ScrNightBegin_State0(undefined4 *param_1)

{
  *param_1 = 0xfffffffd;
  param_1[1] = 0xffffffff;
  Menu_HandleCursor(param_1 + 2,0,2,7,1,param_1[4]);
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x0028ef90  size 0x44
/* menu screen 14 (table 0x3274b0) */

void maybe_ScrNightBegin_Exit(void)

{
  undefined8 uVar1;
  
  if (g_MenuMgr->nextScreen == 0xd) {
    uVar1 = Profile_Get(0);
    Profile_StartNight(uVar1);
  }
  return;
}

// 0x0028efe0  size 0x60
/* menu screen 14 (table 0x3274b0) */

void maybe_ScrNightBegin_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x28);
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrNightBegin_State0_0032e8b0)[*(int *)(iVar2 + 0x2c)])(param_1);
    maybe_ScrNightBegin_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 0x28);
  }
  return;
}

// 0x0028f040  size 0x120
/* menu screen 14 (table 0x3274b0) */

void maybe_ScrNightBegin_Enter(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  g_MenuMgr->unk_0620 = '\x01';
  g_MenuMgr->unk_0624 = 0xffffffff;
  g_MenuMgr->unk_0628 = 0xffffffff;
  g_MenuMgr->unk_05ac = '\x01';
  g_MenuMgr->unk_0640 = '\0';
  maybe_ScrDay_PickMode(param_1 + 8);
  g_MenuMgr->flags = g_MenuMgr->flags | 0x2000;
  uVar2 = Profile_Get(0);
  lVar3 = Profile_GetDay(uVar2);
  if ((lVar3 == 1) && (g_MenuMgr->prevScreen == 0xd)) {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar1 = Profile_Get(0);
  if ((*(uint *)(iVar1 + 0x272c) & 0x200000) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xb5;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0xf5;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 0x0028f160  size 0x1b8
void maybe_ScrRaceInfo_HandleInput(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 0x20) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 4) == 0) {
      Subtitle_Hide(5,0xffff);
      iVar2 = *(int *)(param_1 + 4);
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
    }
    if (iVar2 == 2) {
      Menu_BlockInput(&g_MenuMgr->field_0x654);
    }
    if (iVar1 < 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
      }
      else {
        MenuMgr_RequestScreen(0xb);
      }
    }
    else {
      *(int *)(param_1 + 8) = iVar1;
    }
    Se_PlayMenu(6);
  }
  else if (uVar3 == 0x10) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 4) == 0) {
      Subtitle_Hide(5,0xffff);
      iVar2 = *(int *)(param_1 + 4);
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
    }
    if (iVar2 == 2) {
      Menu_BlockInput(&g_MenuMgr->field_0x654);
    }
    if (iVar1 < 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
      }
      else {
        MenuMgr_RequestScreen(0xb);
      }
    }
    else {
      *(int *)(param_1 + 8) = iVar1;
    }
    Se_PlayMenu(5);
  }
  return;
}

// 0x0028f320  size 0x3e4
/* entry 2 of state table 0x32e8c0 used by maybe_ScrRaceInfo_Update */

void maybe_ScrRaceInfo_State2(int param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_10 [4];
  
  iVar8 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x34);
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 1;
      *(undefined4 *)(param_1 + 0x58) = 1;
      uVar6 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
      cVar2 = Race_IsTimeTrialMode(uVar6,*(undefined1 *)(param_1 + 0x30));
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x40) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x3c) = 9;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      cVar2 = *(char *)(param_1 + 0x30);
      uVar6 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
      cVar3 = Race_IsTimeTrialMode(uVar6,*(undefined1 *)(param_1 + 0x30));
      if (cVar2 == cVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 1;
      }
      uVar7 = *(uint *)(param_1 + 0x40);
      uVar1 = *(uint *)(param_1 + 0x3c);
      bVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
      g_MenuMgr->unk_0620 = bVar4;
      g_MenuMgr->unk_0624 = 0xffffffff;
      g_MenuMgr->unk_0628 = 0xffffffff;
      g_MenuMgr->unk_05ac = bVar4;
      if (bVar4 < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(bVar4) {
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
      g_MenuMgr->unk_0624 = uVar1;
      g_MenuMgr->unk_0628 = uVar7;
    }
    uVar6 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
    maybe_Ui_LeafF6720(afStack_10,uVar6,*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x40));
    *(int *)(param_1 + 0x50) = (int)(afStack_10[0] * 1000.0);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    iVar8 = *(int *)(param_1 + 0x34);
  }
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x40);
    iVar9 = *(int *)(param_1 + 0x3c);
  }
  else {
    iVar9 = iVar8 + -1;
    if (((*(int *)(param_1 + 0x60) != 0) && (*(int *)(param_1 + 0x30) == 0)) ||
       ((*(int *)(param_1 + 0x60) == 0 && (*(int *)(param_1 + 0x30) == 1)))) {
      iVar9 = 9 - iVar9;
      iVar8 = 9 - iVar8;
    }
  }
  uVar6 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
  maybe_Ui_LeafF6720(&fStack_20,uVar6,iVar9,iVar8);
  *(int *)(param_1 + 0x48) = (int)(fStack_20 * 1000.0);
  uVar5 = abs((int)((fStack_1c - fStack_18) * 1000.0));
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar7 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar7) == 0) {
    uVar7 = 0x100000;
  }
  else if (uVar7 == 0x80000) {
    uVar7 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar7 = 0x100000;
  }
  if (uVar7 == 8) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) + 1) % 10;
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 4;
    }
    *(undefined1 *)(param_1 + 0x20) = 3;
    Se_PlayMenu(7);
  }
  else if (uVar7 == 4) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) + 9) % 10;
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 4;
    }
    *(undefined1 *)(param_1 + 0x20) = 4;
    Se_PlayMenu(7);
  }
  return;
}

// 0x0028f710  size 0x74
/* entry 1 of state table 0x32e8c0 used by maybe_ScrRaceInfo_Update */

void maybe_ScrRaceInfo_State1(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[3] = 0;
  if (iVar1 != 0) {
    param_1[0x15] = 2;
    param_1[0x16] = 0;
    if (*param_1 == 0) {
      param_1[0xc] = 0;
    }
  }
  Menu_HandleCursor(param_1 + 0xc,0,2,1,0,0);
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x0028f790  size 0x220
/* entry 0 of state table 0x32e8c0 used by maybe_ScrRaceInfo_Update */

void maybe_ScrRaceInfo_State0(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    Subtitle_Show(0x1c,0x1c,0x14,0);
    uVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
    uVar4 = MsgId_ForDriveType(uVar4,0);
    Subtitle_Hide(10,uVar4);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  lVar3 = Menu_HandleCursor(param_1 + 0x2c,0,2,*(int *)(param_1 + 0x24) + -1,1,0);
  if (lVar3 == 1) {
    uVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
    uVar4 = MsgId_ForDriveType(uVar4,0);
    Subtitle_Hide(10,uVar4);
    *(undefined4 *)(param_1 + 100) = 0;
LAB_0028f828:
    iVar5 = *(int *)(param_1 + 0x24);
  }
  else {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (*(int *)(param_1 + 100) != 0xb4) {
      if (*(int *)(param_1 + 100) == 0x168) {
        *(undefined4 *)(param_1 + 100) = 0;
        uVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
        uVar4 = MsgId_ForDriveType(uVar4,0);
        Subtitle_Hide(10,uVar4);
      }
      goto LAB_0028f828;
    }
    uVar4 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x2c));
    uVar4 = MsgId_ForDriveType(uVar4,1);
    Subtitle_Hide(10,uVar4);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  if (4 < iVar5) {
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == (iVar1 + 1) % iVar5) {
      uVar6 = g_MenuInput[2];
      if ((g_MenuInput[4] & uVar6) == 0) {
        uVar6 = 0x100000;
      }
      else if (uVar6 == 0x80000) {
        uVar6 = 0x80000;
      }
      else if (*g_MenuInput != 1) {
        uVar6 = 0x100000;
      }
      if (uVar6 == 1) {
        *(int *)(param_1 + 0x28) = iVar1;
        *(undefined1 *)(param_1 + 0x20) = 2;
        goto LAB_0028f8e0;
      }
    }
    if (iVar1 == (iVar2 + 4) % iVar5) {
      *(int *)(param_1 + 0x28) = (iVar2 + 1) % iVar5;
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
LAB_0028f8e0:
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x0028f9b0  size 0x8
/* menu screen 15 (table 0x3274b0) */

void maybe_ScrRaceInfo_Exit(void)

{
  return;
}

// 0x0028f9c0  size 0x5c
/* menu screen 15 (table 0x3274b0) */

void maybe_ScrRaceInfo_Update(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = Menu_IsInputIdle();
  if (lVar1 != 0) {
    (*(code *)(&PTR_maybe_ScrRaceInfo_State0_0032e8c0)[*(int *)((int)param_1 + 4)])(param_1);
    maybe_ScrRaceInfo_HandleInput(param_1);
    Menu_RequestTransition(param_1);
  }
  return;
}

// 0x0028fa20  size 0x2a4
/* menu screen 15 (table 0x3274b0) */

void maybe_ScrRaceInfo_Enter(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_10 [4];
  
  param_1[0xb] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  iVar2 = Msg_ProfileStat(1);
  param_1[9] = iVar2 + 1;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1[0xd];
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  if (g_MenuMgr->prevScreen == 0xb) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 1;
    param_1[7] = 0;
    param_1[5] = 1;
    param_1[3] = 1;
    param_1[6] = 0;
    param_1[0x17] = 1;
  }
  else {
    *param_1 = 0xffffffff;
    param_1[1] = 2;
    param_1[2] = 2;
    param_1[4] = 1;
    param_1[7] = 0;
    param_1[5] = 1;
    param_1[3] = 1;
    param_1[6] = 0;
    param_1[0x17] = 0;
    puVar5 = &g_MenuMgr->field_0x614;
    uVar3 = Menu_GetField_10(puVar5);
    param_1[0xf] = uVar3;
    uVar3 = Menu_GetField_14(puVar5);
    param_1[0x10] = uVar3;
    uVar3 = MsgId_ForOption(g_MenuMgr->unk_0620);
    param_1[0xb] = uVar3;
    if ((int)param_1[0xf] < (int)param_1[0x10]) {
      cVar1 = Race_IsTimeTrialMode(g_MenuMgr->unk_0620,0);
      if (cVar1 == '\0') {
        param_1[0xc] = 0;
      }
      else {
        param_1[0x18] = 1;
        param_1[0xc] = 1;
      }
    }
    else {
      cVar1 = Race_IsTimeTrialMode(g_MenuMgr->unk_0620,0);
      if (cVar1 == '\0') {
        param_1[0xc] = 1;
      }
      else {
        param_1[0x18] = 1;
        param_1[0xc] = 0;
      }
    }
    uVar4 = Menu_MapCursorToItem(param_1[0xb]);
    maybe_Ui_LeafF6720(afStack_10,uVar4,param_1[0xf],param_1[0x10]);
    param_1[0x14] = (int)(afStack_10[0] * 1000.0);
    iVar2 = param_1[0xd];
    if (iVar2 == 0) {
      iVar6 = param_1[0xf];
      iVar2 = param_1[0x10];
    }
    else {
      iVar6 = iVar2 + -1;
      if (((param_1[0x18] != 0) && (param_1[0xc] == 0)) ||
         ((param_1[0x18] == 0 && (param_1[0xc] == 1)))) {
        iVar6 = 9 - iVar6;
        iVar2 = 9 - iVar2;
      }
    }
    uVar4 = Menu_MapCursorToItem(param_1[0xb]);
    maybe_Ui_LeafF6720(&fStack_20,uVar4,iVar6,iVar2);
    param_1[0x12] = (int)(fStack_20 * 1000.0);
    uVar3 = abs((int)((fStack_1c - fStack_18) * 1000.0));
    param_1[0x13] = uVar3;
  }
  Menu_ShowDialog(&g_MenuMgr->field_0x654,0x123,0);
  return;
}

// 0x0028fcd0  size 0x98
/* entry 3 of state table 0x32e8d0 used by maybe_ScrRivalProfile_Update */

void maybe_ScrRivalProfile_State3(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x3c) = 2;
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar2 = MsgId_RivalProfile(*(undefined4 *)(*(int *)(param_1 + 0x24) * 0xc + param_1 + 0x40));
    iVar1 = UiText_CountLinesById(uVar2);
    iVar1 = iVar1 + -5;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x34) = iVar1;
  }
  Menu_HandleCursor(param_1 + 0x30,0,2,*(undefined4 *)(param_1 + 0x34),0,0);
  return;
}

// 0x0028fd70  size 0x84
/* entry 2 of state table 0x32e8d0 used by maybe_ScrRivalProfile_Update */

void maybe_ScrRivalProfile_State2(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 3;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar2 = MsgId_GirlfriendLine(*(undefined4 *)(param_1 + 0x24));
    iVar1 = UiText_CountLinesById(uVar2);
    iVar1 = iVar1 + -5;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x34) = iVar1;
  }
  Menu_HandleCursor(param_1 + 0x30,0,2,*(undefined4 *)(param_1 + 0x34),0,0);
  return;
}

// 0x0028fe00  size 0x298
/* entry 1 of state table 0x32e8d0 used by maybe_ScrRivalProfile_Update */

void maybe_ScrRivalProfile_State1(int *param_1)

{
  MenuMgr *pMVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[3];
  param_1[3] = 0;
  if (iVar2 != 0) {
    param_1[0xf] = 0;
    param_1[10] = param_1[9];
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x122,0);
    if ((param_1[param_1[9] * 3 + 0x11] != -1) && (*param_1 != 2)) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
  }
  uVar3 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 8) {
    param_1[10] = param_1[9];
    param_1[9] = (param_1[9] + 1) % 0x14;
    param_1[8] = param_1[9];
    *(undefined1 *)(param_1 + 0xb) = 3;
    Se_PlayMenu(7);
    if (param_1[param_1[9] * 3 + 0x11] != -1) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
  }
  else {
    if (uVar3 != 4) {
      iVar2 = param_1[9];
      goto LAB_0028ff64;
    }
    param_1[10] = param_1[9];
    param_1[9] = (param_1[9] + 0x13) % 0x14;
    param_1[8] = param_1[9];
    *(undefined1 *)(param_1 + 0xb) = 4;
    Se_PlayMenu(7);
    if (param_1[param_1[9] * 3 + 0x11] != -1) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
  }
  iVar2 = param_1[9];
LAB_0028ff64:
  if (param_1[iVar2 * 3 + 0x11] == -1) {
    param_1[0xe] = -2;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  else {
    param_1[0xe] = 2;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    pMVar1 = g_MenuMgr;
    iVar2 = param_1[param_1[9] * 3 + 0x10];
    g_MenuMgr->unk_0538 = 1;
    *(int *)&pMVar1->field_0x53c = iVar2;
  }
  return;
}

