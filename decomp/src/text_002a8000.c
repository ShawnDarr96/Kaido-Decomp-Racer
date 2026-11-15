// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002a8000 - 0x002ac000
#include "ghidra_types.h"

// 0x002a8100  size 0x58
/* entry 5 of state table 0x32ee50 used by maybe_ScrRivalIntro_Update */

void maybe_ScrRivalIntro_State5(int param_1)

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

// 0x002a8160  size 0x58
/* entry 4 of state table 0x32ee50 used by maybe_ScrRivalIntro_Update */

void maybe_ScrRivalIntro_State4(int param_1)

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

// 0x002a81c0  size 0xe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 3 of state table 0x32ee50 used by maybe_ScrRivalIntro_Update */

void maybe_ScrRivalIntro_State3(uint *param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = param_1[0x48];
  param_1[0x48] = 0;
  if (uVar2 != 0) {
    lVar1 = Options_Get_14();
    *param_1 = (uint)(lVar1 != 0);
    param_1[0x4e] = 0xfffffffd;
    param_1[0x4d] = 1;
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
  if ((uVar2 == 2) || (uVar2 == 1)) {
    Se_PlayMenu(7);
    *param_1 = *param_1 != 0 ^ 1;
  }
  return;
}

// 0x002a82b0  size 0xf4
/* state of maybe_ScrRivalIntro; on-screen text/callee hint "RivalDbFindByName" (was
   ScrRivalDbFindByName_Exit) */

void maybe_ScrRivalIntro_State2_RivalDbFindByName(int param_1)

{
  int iVar1;
  MenuMgr *pMVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar1 != 0) {
    uVar3 = RivalDb_FindByCourse(*(undefined2 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x138) = 1;
    *(undefined4 *)(param_1 + 0x134) = 1;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    MenuList_Init(&g_MenuMgr->unk_0534);
    pMVar2 = g_MenuMgr;
    g_MenuMgr->unk_0538 = 1;
    *(undefined4 *)&pMVar2->field_0x53c = uVar3;
    if (6 < g_MenuMgr->bgMode) {
      return;
    }
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
  return;
}

// 0x002a83b0  size 0x220
/* WARNING: Switch with 1 destination removed at 0x002a8404 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_ScrRivalIntro; on-screen text/callee hint "RivalDbFindByName" (was
   ScrRivalDbFindByName_Update) */

void maybe_ScrRivalIntro_State1_RivalDbFindByName(int param_1)

{
  MenuMgr *pMVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar4 != 0) {
    uVar3 = RivalDb_FindByName(*(undefined2 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x134) = 0;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    MenuList_Init(&g_MenuMgr->unk_0534);
    pMVar1 = g_MenuMgr;
    g_MenuMgr->unk_0538 = 1;
    *(undefined4 *)&pMVar1->field_0x53c = uVar3;
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = 0xf;
        break;
      case 2:
        g_MenuMgr->unk_05dc = 0xf;
        break;
      case 3:
        g_MenuMgr->unk_05fc = 0xf;
        break;
      case 4:
        g_MenuMgr->unk_0618 = 0xf;
      }
    }
  }
  bVar2 = Msg_RivalTitle(*(undefined4 *)(param_1 + 8));
  if (bVar2 < 6) {
                    /* WARNING: Switch is manually overridden */
    Menu_HandleCursor(param_1 + 0x10,0,2,2,1,0);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  else {
    Menu_HandleCursor(param_1 + 0x10,0,2,1,1,0);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0x138) = 2;
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 0x138) = 0xfffffffe;
  }
  else if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x138) = 3;
  }
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
  if (uVar5 == 0x1000) {
    Se_PlayMenu(5);
    *(undefined4 *)(param_1 + 0x11c) = 10;
  }
  return;
}

// 0x002a85e0  size 0x290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_ScrRivalIntro; on-screen text/callee hint "RivalDbFindByName" (was
   ScrRivalDbFindByName_Enter) */

void maybe_ScrRivalIntro_State0_RivalDbFindByName(int param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x108) = 2;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  uVar2 = Profile_Get(0);
  uVar2 = Profile_GetCurrentCar(uVar2);
  uVar1 = CarRec_GetModelId(uVar2);
  Menu_HandleCursor(param_1 + 0xc,0,8,*(int *)(param_1 + 0x104) + -1,1,0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + param_1 + 0x14);
  if (*(int *)(*(int *)(param_1 + 0xc) * 4 + param_1 + 0x8c) == 0) {
    uVar2 = Profile_Get(0);
    lVar3 = Garage_FindFreeSlot(uVar2);
    if (lVar3 < 0xf) {
      lVar3 = Profile_BuildCarFromTeam(uVar1,*(undefined4 *)(param_1 + 8),0);
      if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 0x138) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x138) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x138) = 8;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 6;
  }
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
  if (uVar5 == 8) {
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    iVar4 = *(int *)(param_1 + 0x104) + -1;
    if (2 < iVar4) {
      iVar4 = 2;
    }
    if (iVar4 < *(int *)(param_1 + 0x10c)) {
      if (*(int *)(param_1 + 0x104) < 4) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(undefined4 *)(param_1 + 0x10c) = 2;
      }
    }
  }
  else if ((uVar5 == 4) &&
          (*(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1, *(int *)(param_1 + 0x10c) < 0
          )) {
    if (*(int *)(param_1 + 0x104) < 4) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x104) + -1;
    }
    else {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      *(undefined4 *)(param_1 + 0x108) = 1;
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
  }
  return;
}

// 0x002a8870  size 0x2c
/* menu screen 39 (table 0x3274b0) */

void maybe_ScrRivalIntro_Exit(void)

{
  g_MenuMgr->unk_05a0 = 0;
  g_MenuMgr->unk_05e8 = 0;
  g_MenuMgr->unk_060c = 0;
  g_MenuMgr->unk_0634 = 0;
  g_MenuMgr->unk_0644 = 0;
  return;
}

// 0x002a88a0  size 0x19c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 39 (table 0x3274b0) */

void maybe_ScrRivalIntro_Update(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  lVar3 = Menu_IsInputIdle(iVar7 + 0x114);
  if (lVar3 != 0) {
    (*(code *)(&PTR_maybe_ScrRivalIntro_State0_RivalDbFindByName_0032ee50)[*(int *)(iVar7 + 0x118)])
              (param_1);
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
    if (uVar5 == 0x10) {
      Se_PlayMenu(5);
      if (*(int *)(iVar7 + 0x138) == 7) {
        uVar4 = Profile_Get(0);
        Garage_ApplyPart(uVar4,*(undefined1 *)(iVar7 + 8));
        *(undefined4 *)(iVar7 + 0x104) = 0;
        iVar6 = 0;
        do {
          iVar2 = Profile_Get(0);
          cVar1 = Career_GetFlag(iVar2 + 0xd82c,iVar6);
          if (cVar1 != '\0') {
            *(int *)(iVar7 + *(int *)(iVar7 + 0x104) * 4 + 0x14) = iVar6;
            *(uint *)(iVar7 + *(int *)(iVar7 + 0x104) * 4 + 0x8c) = (uint)(cVar1 == '\x02');
            *(int *)(iVar7 + 0x104) = *(int *)(iVar7 + 0x104) + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x1e);
      }
      maybe_ScrRivalIntro_OnResult(param_1,*(undefined4 *)(iVar7 + 0x138));
    }
    else if (uVar5 == 0x20) {
      Se_PlayMenu(6);
      maybe_ScrRivalIntro_OnResult(param_1,*(undefined4 *)(iVar7 + 0x134));
    }
    Menu_RequestTransition(iVar7 + 0x114);
  }
  return;
}

// 0x002a8a40  size 0x228
/* menu screen 39 (table 0x3274b0) */

void maybe_ScrRivalIntro_Enter(int param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  do {
    iVar2 = Profile_Get(0);
    cVar1 = Career_GetFlag(iVar2 + 0xd82c,iVar5);
    if (cVar1 != '\0') {
      *(int *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x14) = iVar5;
      *(uint *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x8c) = (uint)(cVar1 == '\x02');
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1e);
  if (g_MenuMgr->prevScreen == 0xf) {
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    cVar1 = RaceCtx_Get_8();
    if (cVar1 == '\x04') {
      RaceCtx_Set_8(0x13);
      cVar1 = GameState_Get_3dc();
      *(int *)(param_1 + 8) = (int)cVar1;
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x104)) {
        iVar2 = param_1;
        do {
          if (*(int *)(iVar2 + 0x14) == *(int *)(param_1 + 8)) {
            *(int *)(param_1 + 0xc) = iVar5;
            break;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x104));
      }
      uVar3 = GameState_Get_35c();
      if ((uVar3 & 1) == 0) {
        uVar6 = 5;
      }
      else {
        uVar6 = 4;
        uVar4 = Profile_Get(0);
        Garage_CountParts(uVar4,*(undefined1 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 0x104) = 0;
        iVar5 = 0;
        do {
          iVar2 = Profile_Get(0);
          cVar1 = Career_GetFlag(iVar2 + 0xd82c,iVar5);
          if (cVar1 != '\0') {
            *(int *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x14) = iVar5;
            *(uint *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x8c) = (uint)(cVar1 == '\x02');
            *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x1e);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + param_1 + 0x14);
    }
  }
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = uVar6;
  *(undefined4 *)(param_1 + 0x11c) = uVar6;
  *(undefined4 *)(param_1 + 0x124) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 0x120) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}

// 0x002a8c70  size 0xc4
/* menu screen 40 (table 0x3274b0) */

void maybe_ScrCarListB_Exit(void)

{
  short sVar1;
  MenuMgr *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  g_MenuMgr->unk_05a0 = 0;
  g_MenuMgr->unk_05e8 = 0;
  g_MenuMgr->unk_060c = 0;
  g_MenuMgr->unk_0634 = 0;
  g_MenuMgr->unk_0644 = 0;
  iVar3 = Profile_Get(0);
  iVar4 = Garage_GetSortedCarCount(0);
  pMVar2 = g_MenuMgr;
  iVar6 = 0;
  sVar1 = *(short *)(iVar3 + iVar4 * 2 + 0x13ee);
  g_MenuMgr->unk_0538 = 2;
  *(int *)&pMVar2->field_0x53c = (int)sVar1;
  g_MenuMgr->unk_0544 = 0xfffffffe;
  g_MenuMgr->unk_0594 = 0;
  puVar5 = &g_MenuMgr->unk_0534;
  do {
    *(undefined2 *)(puVar5 + 5) = 0x162;
    iVar6 = iVar6 + 7;
    *(undefined2 *)((int)puVar5 + 0x16) = 0x162;
    *(undefined2 *)(puVar5 + 6) = 0x162;
    *(undefined2 *)((int)puVar5 + 0x1a) = 0x162;
    *(undefined2 *)(puVar5 + 7) = 0x162;
    *(undefined2 *)((int)puVar5 + 0x1e) = 0x162;
    *(undefined2 *)(puVar5 + 8) = 0x162;
    puVar5 = (uint *)((int)puVar5 + 0xe);
  } while (iVar6 < 0x15);
  return;
}

// 0x002a8d40  size 0x158
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 40 (table 0x3274b0) */

void maybe_ScrCarListB_Update(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = MenuText_CarFullName(0xffffffffffffffff,0);
  if (lVar1 == 0x11) {
    Menu_HandleCursor(param_1,0,2,2,1,6);
  }
  else {
    Menu_HandleCursor(param_1,0,2,2,1,0);
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
  if (uVar2 == 0x10) {
    Se_PlayMenu(5);
    if (*(int *)param_1 == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
    MenuMgr_RequestScreen(*(undefined4 *)(*(int *)param_1 * 4 + 0x32ee80));
  }
  else if (uVar2 == 0x20) {
    Se_PlayMenu(6);
    MenuMgr_RequestScreen(0xb);
  }
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x002a8ea0  size 0x148
/* menu screen 40 (table 0x3274b0) */

void maybe_ScrCarListB_Enter(undefined4 *param_1)

{
  short sVar1;
  MenuMgr *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  if (g_MenuMgr->prevScreen == 0x26) {
    *param_1 = 2;
  }
  else if (g_MenuMgr->prevScreen == 0x29) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
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
  iVar3 = Profile_Get(0);
  iVar4 = Garage_GetSortedCarCount(0);
  pMVar2 = g_MenuMgr;
  iVar6 = 0;
  sVar1 = *(short *)(iVar3 + iVar4 * 2 + 0x13ee);
  g_MenuMgr->unk_0538 = 2;
  *(int *)&pMVar2->field_0x53c = (int)sVar1;
  g_MenuMgr->unk_0544 = 0xfffffffe;
  g_MenuMgr->unk_0594 = 0;
  puVar5 = &g_MenuMgr->unk_0534;
  do {
    *(undefined2 *)(puVar5 + 5) = 0x162;
    iVar6 = iVar6 + 7;
    *(undefined2 *)((int)puVar5 + 0x16) = 0x162;
    *(undefined2 *)(puVar5 + 6) = 0x162;
    *(undefined2 *)((int)puVar5 + 0x1a) = 0x162;
    *(undefined2 *)(puVar5 + 7) = 0x162;
    *(undefined2 *)((int)puVar5 + 0x1e) = 0x162;
    *(undefined2 *)(puVar5 + 8) = 0x162;
    puVar5 = (uint *)((int)puVar5 + 0xe);
  } while (iVar6 < 0x15);
  return;
}

// 0x002a8ff0  size 0x208
void maybe_ScrTuneParts_HandleInput(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
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
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0xa04) - 5U < 2) {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
  }
  if (param_2 < 0) {
    if (param_2 != -2) {
      MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
    }
  }
  else {
    if ((int)param_2 - 0xcU < 3) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,0);
      maybe_ScrTuneParts_EquipPart(param_1);
    }
    if (param_2 == 0x14) {
      uVar3 = Profile_Get(0);
      Profile_DecPartStock(uVar3,*(undefined2 *)(*(int *)(iVar5 + 0xc) * 2 + iVar5 + 0x70c));
    }
    if (param_2 == 0x18) {
      maybe_ScrTuneParts_ResetParts(param_1);
    }
    if (((param_2 == 0x19) && (*(int *)(iVar5 + 0xa04) == 0x1d)) && (*(int *)(iVar5 + 0x9d8) == 0))
    {
      TeamDb_Copy(&uStack_60,*(undefined1 *)(*(int *)(iVar5 + 0x60) * 4 + iVar5 + 0x608));
      uStack_28 = uStack_58;
      uStack_24 = uStack_54;
      uStack_20 = uStack_50;
      uStack_1c = uStack_4c;
      uStack_30 = uStack_60;
      uVar2 = uStack_30;
      uStack_30._0_2_ = (undefined2)uStack_60;
      uVar1 = (undefined2)uStack_30;
      uStack_2c = uStack_5c;
      uStack_18 = uStack_48;
      uStack_14 = uStack_44;
      uStack_10 = uStack_40;
      uStack_c = uStack_3c;
      uStack_30 = uVar2;
      uVar3 = Maker_GetInfo(uVar1);
      uVar4 = Profile_Get(0);
      Profile_ResetCurrentCarParts(uVar4,uVar3);
      uVar4 = Profile_Get(0);
      Profile_InstallPartOnCurrent
                (uVar4,uVar3,*(undefined4 *)(*(int *)(iVar5 + 0x60) * 4 + iVar5 + 0x608),0);
    }
    if ((param_2 == 0) || (*(int *)(iVar5 + 0xa04) == 0)) {
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
    *(int *)(iVar5 + 0xa08) = (int)param_2;
  }
  return;
}

// 0x002a9200  size 0xf0
void maybe_ScrTuneParts_ResetParts(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = Profile_Get(0);
  if (*(int *)(param_1 + 0x644) + -1 == *(int *)(param_1 + 0x68)) {
    Profile_ResetAllCarParts(uVar2,*(undefined2 *)((int)uVar2 + 0x13ec));
    Profile_IsCurrentCarTuned(uVar2);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) * 8 + param_1 + 0x648);
    if (iVar1 == 0x13) {
      Profile_IsCurrentCarTuned(uVar2);
    }
    else if (iVar1 == 0x11) {
      Profile_ResetCurrentCarParts(uVar2,0xd);
      Profile_ResetCurrentCarParts(uVar2,0xe);
    }
    else if (iVar1 == 0xe) {
      Profile_ResetCurrentCarParts(uVar2,0xf);
      Profile_ResetCurrentCarParts(uVar2,0x10);
    }
    else {
      uVar3 = maybe_PartSlot_GetCategory();
      Profile_ResetCurrentCarParts(uVar2,uVar3);
    }
  }
  return;
}

// 0x002a92f0  size 0x120
void maybe_ScrTuneParts_EquipPart(int param_1)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c);
  if ((*(int *)(param_1 + 8) - 3U < 2) && (*(int *)(param_1 + 0x68) == 2)) {
    uVar2 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),0);
    uVar3 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),1);
    uVar4 = Profile_Get(0);
    Profile_EquipFromStock(uVar4,uVar2,sVar1);
    uVar2 = Profile_Get(0);
    Profile_EquipFromStock(uVar2,uVar3,sVar1);
  }
  else if (sVar1 == -1) {
    uVar2 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x68))
    ;
    uVar3 = Profile_Get(0);
    Profile_ResetCurrentCarParts(uVar3,uVar2);
  }
  else {
    uVar2 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x68))
    ;
    uVar3 = Profile_Get(0);
    Profile_EquipFromStock(uVar3,uVar2,sVar1);
  }
  return;
}

// 0x002a9410  size 0xf4
undefined4 maybe_PartSlot_GetCategory(ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x18) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_1) {
    case 0:
      uVar1 = 0;
      break;
    case 1:
      uVar1 = 2;
      break;
    case 2:
      uVar1 = 1;
      break;
    case 3:
      uVar1 = 3;
      break;
    case 4:
      uVar1 = 4;
      break;
    case 5:
      uVar1 = 5;
      break;
    case 6:
      uVar1 = 6;
      break;
    case 7:
      uVar1 = 7;
      break;
    case 8:
      uVar1 = 8;
      break;
    case 9:
      uVar1 = 9;
      break;
    case 10:
      uVar1 = 10;
      break;
    case 0xb:
      uVar1 = 0xb;
      break;
    case 0xc:
      uVar1 = 0xf;
      break;
    case 0xd:
      uVar1 = 0x10;
      break;
    case 0xe:
      uVar1 = 0x16;
      break;
    case 0xf:
      uVar1 = 0xd;
      break;
    case 0x10:
      uVar1 = 0xe;
      break;
    case 0x11:
      uVar1 = 0x16;
      break;
    case 0x12:
      uVar1 = 0xc;
      break;
    case 0x13:
      uVar1 = 0x16;
      break;
    case 0x14:
      uVar1 = 0x12;
      break;
    case 0x15:
      uVar1 = 0x11;
      break;
    case 0x16:
      uVar1 = 0x13;
      break;
    case 0x17:
      uVar1 = 0x14;
    }
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}

// 0x002a9510  size 0x24c
void maybe_ScrTuneParts_BuildRow(int param_1,int *param_2,long param_3,short param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  *param_2 = 0;
  iVar3 = maybe_MenuText_CarSpecGrade(0xffffffffffffffff,0);
  if (param_3 == 0xd) {
    lVar10 = 0x67;
    lVar9 = 0x70;
  }
  else if ((param_3 == 4) || (param_3 == 0)) {
    iVar3 = (int)param_3 + iVar3;
    sVar2 = maybe_CarModel_GetClassC(iVar3);
    lVar10 = (long)sVar2;
    sVar2 = maybe_CarModel_GetClassB(iVar3);
    lVar9 = (long)sVar2;
  }
  else {
    sVar2 = maybe_CarModel_GetClassC(param_3);
    lVar10 = (long)sVar2;
    sVar2 = maybe_CarModel_GetClassB(param_3);
    lVar9 = (long)sVar2;
  }
  lVar6 = Rival_IsBossId((short)lVar10);
  if ((((lVar6 == 0) && (param_3 != 0x14)) && (param_3 != 0x16)) &&
     ((param_3 != 0x17 && (param_3 != 0x15)))) {
    *(undefined4 *)(param_1 + *param_2 * 4) = 0xffffffff;
    *param_2 = *param_2 + 1;
  }
  if (lVar10 <= lVar9) {
    iVar3 = (int)lVar10 << 1;
    do {
      if (lVar10 == 0x6b) {
        param_3 = 0xe;
      }
      else if (lVar10 == 0x6e) {
        param_3 = 0xf;
      }
      lVar6 = Rival_IsBossId((short)lVar10);
      if ((lVar6 == 1) || (iVar4 = Profile_Get(0), param_4 <= *(short *)(iVar4 + iVar3 + 0x1420))) {
LAB_002a96f0:
        lVar6 = maybe_MenuText_CurrentCarSpec(param_3);
        if (lVar6 == 1) {
          *(int *)(param_1 + *param_2 * 4) = (int)lVar10;
          *param_2 = *param_2 + 1;
        }
      }
      else {
        uVar8 = 0;
        do {
          uVar7 = Profile_Get(0);
          uVar7 = Profile_GetCurrentCar(uVar7);
          uVar7 = CarRec_GetName(uVar7);
          psVar5 = (short *)CarRec_GetOptionSlot(uVar7,uVar8 & 0xff);
          if (lVar10 == *psVar5) {
            bVar1 = true;
            goto LAB_002a96e8;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 0x15);
        bVar1 = false;
LAB_002a96e8:
        if (bVar1) goto LAB_002a96f0;
      }
      lVar10 = (long)((int)lVar10 + 1);
      iVar3 = iVar3 + 2;
    } while (lVar10 <= lVar9);
  }
  return;
}

// 0x002a9760  size 0x34
/* entry 29 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State29(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x19;
    *(undefined4 *)(param_1 + 0xa24) = 0x19;
  }
  return;
}

// 0x002a97a0  size 0x34
/* state of maybe_ScrTuneParts; on-screen text/callee hint "TeamDbCopy" (was ScrTeamDbCopy_Exit) */

void maybe_ScrTuneParts_State26_TeamDbCopy(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x19;
    *(undefined4 *)(param_1 + 0xa24) = 0x19;
  }
  return;
}

// 0x002a97e0  size 0x36c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* state of maybe_ScrTuneParts; on-screen text/callee hint "TeamDbCopy" (was ScrTeamDbCopy_Update)
    */

void maybe_ScrTuneParts_State25_TeamDbCopy(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  short *psVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
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
  
  uVar8 = Profile_Get(0);
  uVar8 = Profile_GetCurrentCar(uVar8);
  uVar5 = CarRec_GetModelId(uVar8);
  iVar11 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar11 != 0) {
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    *(undefined4 *)(param_1 + 0xa20) = 0;
    *(undefined4 *)(param_1 + 0xa24) = 0;
  }
  if (*(int *)(param_1 + 0x604) < 1) goto LAB_002a9a98;
  Menu_HandleCursor(param_1 + 0x60,0,8,*(int *)(param_1 + 0x604) + -1,1,0);
  uVar12 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar12) == 0) {
    uVar12 = 0x100000;
  }
  else if (uVar12 == 0x80000) {
    uVar12 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar12 = 0x100000;
  }
  if (uVar12 == 8) {
    *(int *)(param_1 + 0x9f0) = *(int *)(param_1 + 0x9f0) + 1;
    iVar11 = *(int *)(param_1 + 0x604) + -1;
    if (2 < iVar11) {
      iVar11 = 2;
    }
    if (iVar11 < *(int *)(param_1 + 0x9f0)) {
      if (*(int *)(param_1 + 0x604) < 4) {
        *(undefined4 *)(param_1 + 0x9f0) = 0;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        *(undefined4 *)(param_1 + 0x9e0) = 1;
        *(undefined4 *)(param_1 + 0x9f0) = 2;
      }
    }
LAB_002a995c:
    iVar11 = *(int *)(param_1 + 0x60);
  }
  else {
    if (uVar12 == 4) {
      *(int *)(param_1 + 0x9f0) = *(int *)(param_1 + 0x9f0) + -1;
      if (*(int *)(param_1 + 0x9f0) < 0) {
        if (*(int *)(param_1 + 0x604) < 4) {
          *(int *)(param_1 + 0x9f0) = *(int *)(param_1 + 0x604) + -1;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 2;
          *(undefined4 *)(param_1 + 0x9f0) = 0;
        }
      }
      goto LAB_002a995c;
    }
    iVar11 = *(int *)(param_1 + 0x60);
  }
  iVar11 = *(int *)(iVar11 * 4 + param_1 + 0x608);
  TeamDb_Copy(&uStack_60,(char)iVar11);
  uStack_28 = uStack_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  uStack_30 = uStack_60;
  uVar4 = uStack_30;
  uStack_30._0_2_ = (undefined2)uStack_60;
  uVar3 = (undefined2)uStack_30;
  uStack_2c = uStack_5c;
  uStack_18 = uStack_48;
  uStack_14 = uStack_44;
  uStack_10 = uStack_40;
  uStack_c = uStack_3c;
  uStack_30 = uVar4;
  uVar8 = Maker_GetInfo(uVar3);
  uVar9 = Profile_Get(0);
  uVar9 = Profile_GetCurrentCar(uVar9);
  uVar9 = CarRec_GetName(uVar9);
  psVar6 = (short *)CarRec_GetOptionSlot(uVar9,uVar8);
  sVar1 = *psVar6;
  sVar2 = psVar6[1];
  iVar7 = Profile_Get(0);
  sVar13 = *(short *)(iVar7 + sVar1 * 2 + 0x1420);
  lVar10 = Rival_IsBossId(sVar1);
  if ((lVar10 == 1) || ((char)sVar2 != '\x1f')) {
    sVar13 = 0;
  }
  lVar10 = Profile_BuildCarFromTeam(uVar5,(long)iVar11,0);
  if (lVar10 == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0x1c;
  }
  else if ((long)(char)sVar2 == (long)iVar11) {
    *(undefined4 *)(param_1 + 0xa24) = 0x1b;
  }
  else if (sVar13 == 99) {
    *(undefined4 *)(param_1 + 0xa24) = 0x1a;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = 0x1d;
  }
LAB_002a9a98:
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x002a9b50  size 0x38
/* state of maybe_ScrTuneParts; on-screen text/callee hint "TeamDbCopy" (was ScrTeamDbCopy_Enter) */

void maybe_ScrTuneParts_State24_TeamDbCopy(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x9f8) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 0x15;
    *(undefined4 *)(param_1 + 0xa24) = 0x15;
  }
  return;
}

// 0x002a9b90  size 0x34
/* entry 23 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State23(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x16;
    *(undefined4 *)(param_1 + 0xa24) = 0x16;
  }
  return;
}

// 0x002a9bd0  size 0x80
/* entry 22 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State22(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x15;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  Menu_HandleCursor(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002a9c50  size 0x488
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 21 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State21(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar7 != 0) {
    if (*(int *)(param_1 + 0xa00) == 0x18) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    *(undefined4 *)(param_1 + 0x644) = 0;
    do {
      if (iVar7 == 0x13) {
        uVar3 = Profile_Get(0);
        iVar2 = Profile_GetCurrentCar(uVar3);
        if (*(char *)(iVar2 + 0xc4) == '\x01') {
          *(undefined4 *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x648) = 0x13;
          *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
        }
      }
      else if (iVar7 == 0x11) {
        uVar3 = Profile_Get(0);
        uVar3 = Profile_GetCurrentPartSlot(uVar3,0xd);
        uVar4 = Profile_Get(0);
        sVar1 = Profile_GetCurrentPartSlot(uVar4,0xe);
        if (((short)uVar3 == sVar1) && (lVar5 = Rival_IsBossId(uVar3), lVar5 == 0)) {
          *(undefined4 *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x648) = 0x11;
          *(short *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x64c) = (short)uVar3;
          *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
        }
      }
      else if (iVar7 == 0xe) {
        uVar3 = Profile_Get(0);
        uVar3 = Profile_GetCurrentPartSlot(uVar3,0xf);
        uVar4 = Profile_Get(0);
        sVar1 = Profile_GetCurrentPartSlot(uVar4,0x10);
        if (((short)uVar3 == sVar1) && (lVar5 = Rival_IsBossId(uVar3), lVar5 == 0)) {
          *(undefined4 *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x648) = 0xe;
          *(short *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x64c) = (short)uVar3;
          *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
        }
      }
      else {
        uVar3 = maybe_PartSlot_GetCategory(iVar7);
        uVar4 = Profile_Get(0);
        uVar3 = Profile_GetCurrentPartSlot(uVar4,uVar3);
        lVar5 = Rival_IsBossId(uVar3);
        if ((lVar5 == 0) && ((short)uVar3 != -1)) {
          *(int *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x648) = iVar7;
          *(short *)(param_1 + *(int *)(param_1 + 0x644) * 8 + 0x64c) = (short)uVar3;
          *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x18);
    if (*(int *)(param_1 + 0x644) == 0) {
      *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
    }
    else {
      *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
    }
  }
  iVar7 = *(int *)(param_1 + 0x644);
  if (iVar7 < 1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar7 == 2) {
    Menu_HandleCursor(param_1 + 0x68,0,2,0,0,0);
  }
  else {
    Menu_HandleCursor(param_1 + 0x68,0,2,iVar7 + -1,0,0);
  }
  uVar6 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar6) == 0) {
    uVar6 = 0x100000;
  }
  else if (uVar6 == 0x80000) {
    uVar6 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar6 = 0x100000;
  }
  if (uVar6 == 2) {
    if (iVar2 != *(int *)(param_1 + 0x68)) {
      *(int *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x9f8) + 1;
      iVar7 = *(int *)(param_1 + 0x644) + -1;
      if (6 < iVar7) {
        iVar7 = 6;
      }
      if (iVar7 < *(int *)(param_1 + 0x9f8)) {
        if (*(int *)(param_1 + 0x644) < 8) {
          *(undefined4 *)(param_1 + 0x9f8) = 0;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 1;
          *(undefined4 *)(param_1 + 0x9f8) = 6;
        }
      }
    }
LAB_002a9eb4:
    iVar7 = *(int *)(param_1 + 0x644);
  }
  else {
    if (uVar6 == 1) {
      if ((iVar2 != *(int *)(param_1 + 0x68)) &&
         (*(int *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x9f8) + -1, *(int *)(param_1 + 0x9f8) < 0)
         ) {
        if (*(int *)(param_1 + 0x644) < 8) {
          *(int *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x644) + -1;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 2;
          *(undefined4 *)(param_1 + 0x9f8) = 0;
        }
      }
      goto LAB_002a9eb4;
    }
    iVar7 = *(int *)(param_1 + 0x644);
  }
  if (iVar7 + -1 == *(int *)(param_1 + 0x68)) {
    uVar3 = Profile_Get(0);
    iVar7 = Profile_GetCurrentCar(uVar3);
    if (*(char *)(iVar7 + 0xc4) == '\x01') goto LAB_002a9ef0;
    iVar7 = *(int *)(param_1 + 0x68);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x68);
  }
  if (*(int *)(iVar7 * 8 + param_1 + 0x648) != 0x13) {
    *(undefined4 *)(param_1 + 0xa24) = 0x16;
    return;
  }
LAB_002a9ef0:
  *(undefined4 *)(param_1 + 0xa24) = 0x17;
  return;
}

// 0x002aa0e0  size 0x34
/* entry 20 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x12;
    *(undefined4 *)(param_1 + 0xa24) = 0x12;
  }
  return;
}

// 0x002aa120  size 0x7c
/* entry 19 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State19(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x12;
  }
  Menu_HandleCursor(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0x14;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002aa1a0  size 0x88
/* entry 18 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x708);
  }
  else {
    *(undefined4 *)(param_1 + 0xa20) = 1;
    maybe_CarList_BuildOwned(param_1 + 0x70c,0,param_1 + 0x708);
    iVar1 = *(int *)(param_1 + 0x708);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  else {
    Menu_HandleCursor(param_1 + 0xc,0,2,iVar1 + -1,1,0);
    *(undefined4 *)(param_1 + 0xa24) = 0x13;
  }
  return;
}

// 0x002aa230  size 0x3b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 17 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State17(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 0x10;
    *(undefined4 *)(param_1 + 0xa24) = 0x10;
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x604);
    }
    else {
      *(undefined4 *)(param_1 + 0x74) = 0xc;
    }
    iVar5 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(iVar5 * 4 + param_1 + 0x20) != -1) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  Menu_HandleCursor(param_1 + 0x1c,0,8,*(int *)(param_1 + 0x74) + -1,0,0);
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x604)) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) * 4 + param_1 + 0x608);
    }
  }
  else if (*(int *)(param_1 + 0x1c) == 0xc) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c) + 0x1e;
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
  if (uVar4 == 0x10) {
    iVar3 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
    *(int *)(iVar3 * 4 + param_1 + 0x20) = iVar2;
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
  if (uVar4 == 0x20) {
    iVar2 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
    uVar1 = *(undefined2 *)(iVar2 * 4 + param_1 + 0x20);
    iVar2 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
    *(undefined2 *)(&g_MenuMgr->field_0x572 + iVar2 * 2) = uVar1;
  }
  else {
    iVar3 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
    *(short *)(&g_MenuMgr->field_0x572 + iVar3 * 2) = (short)iVar2;
  }
  if (iVar5 != *(int *)(param_1 + 0x1c)) {
    uVar4 = _g_MenuInput[2];
    if ((_g_MenuInput[4] & uVar4) == 0) {
      uVar6 = 0x100000;
    }
    else {
      uVar6 = 0x80000;
      if (uVar4 != 0x80000) {
        if (*_g_MenuInput == 1) {
          uVar6 = uVar4;
        }
        else {
          uVar6 = 0x100000;
        }
      }
    }
    if (uVar6 == 4) {
      *(int *)(param_1 + 0x9f4) = *(int *)(param_1 + 0x9f4) + -1;
      if (*(int *)(param_1 + 0x9f4) < 0) {
        if (*(int *)(param_1 + 0x74) < 4) {
          *(int *)(param_1 + 0x9f4) = *(int *)(param_1 + 0x74) + -1;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 2;
          *(undefined4 *)(param_1 + 0x9f4) = 0;
        }
      }
    }
    else {
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
        *(int *)(param_1 + 0x9f4) = *(int *)(param_1 + 0x9f4) + 1;
        iVar5 = *(int *)(param_1 + 0x74) + -1;
        if (2 < iVar5) {
          iVar5 = 2;
        }
        if (iVar5 < *(int *)(param_1 + 0x9f4)) {
          if (*(int *)(param_1 + 0x74) < 4) {
            *(undefined4 *)(param_1 + 0x9f4) = 0;
          }
          else {
            g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
            *(undefined4 *)(param_1 + 0x9e0) = 1;
            *(undefined4 *)(param_1 + 0x9f4) = 2;
          }
        }
      }
    }
  }
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x002aa5e0  size 0x404
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 16 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State16(int param_1)

{
  short sVar1;
  MenuMgr *pMVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar3 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0x11;
    *(undefined4 *)(param_1 + 0xa20) = 0xf;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x9f4) = 0;
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    iVar3 = Profile_Get(0);
    iVar4 = Garage_GetSortedCarCount(0);
    pMVar2 = g_MenuMgr;
    iVar8 = 0;
    sVar1 = *(short *)(iVar3 + iVar4 * 2 + 0x13ee);
    g_MenuMgr->unk_0538 = 2;
    *(int *)&pMVar2->field_0x53c = (int)sVar1;
    puVar6 = &g_MenuMgr->unk_0534;
    do {
      *(undefined2 *)(puVar6 + 5) = 0x162;
      iVar8 = iVar8 + 7;
      *(undefined2 *)((int)puVar6 + 0x16) = 0x162;
      *(undefined2 *)(puVar6 + 6) = 0x162;
      *(undefined2 *)((int)puVar6 + 0x1a) = 0x162;
      *(undefined2 *)(puVar6 + 7) = 0x162;
      *(undefined2 *)((int)puVar6 + 0x1e) = 0x162;
      *(undefined2 *)(puVar6 + 8) = 0x162;
      puVar6 = (uint *)((int)puVar6 + 0xe);
    } while (iVar8 < 0x15);
    g_MenuMgr->unk_0594 = 0;
    g_MenuMgr->unk_0544 = 0xfffffffe;
  }
  Menu_HandleCursor(param_1 + 0x18,0,2,0xf,1,0);
  uVar7 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar7) == 0) {
    uVar9 = 0x100000;
  }
  else {
    uVar9 = 0x80000;
    if ((uVar7 != 0x80000) && (uVar9 = uVar7, *_g_MenuInput != 1)) {
      uVar9 = 0x100000;
    }
  }
  if (uVar9 == 1) {
    *(int *)(param_1 + 0x9ec) = *(int *)(param_1 + 0x9ec) + -1;
    if (*(int *)(param_1 + 0x9ec) < 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      *(undefined4 *)(param_1 + 0x9e0) = 2;
      *(undefined4 *)(param_1 + 0x9ec) = 0;
    }
  }
  else {
    if ((_g_MenuInput[4] & uVar7) == 0) {
      uVar7 = 0x100000;
    }
    else if (uVar7 == 0x80000) {
      uVar7 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar7 = 0x100000;
    }
    if ((uVar7 == 2) &&
       (*(int *)(param_1 + 0x9ec) = *(int *)(param_1 + 0x9ec) + 1, 4 < *(int *)(param_1 + 0x9ec))) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      *(undefined4 *)(param_1 + 0x9e0) = 1;
      *(undefined4 *)(param_1 + 0x9ec) = 4;
    }
  }
  uVar5 = maybe_PartSlot_IsAvailable(*(undefined4 *)(param_1 + 0x18));
  if (uVar5 < 0x10) {
                    /* WARNING: Switch is manually overridden */
    switch((int)uVar5) {
    case 0:
    case 1:
    case 2:
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 0xb;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 0xb;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 0xb;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 0xb;
        }
      }
      break;
    default:
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 0xd;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 0xd;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 0xd;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 0xd;
        }
      }
      break;
    case 6:
    case 7:
    case 8:
    case 0xb:
    case 0xc:
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 0xe;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 0xe;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 0xe;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 0xe;
        }
      }
      break;
    case 0xd:
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 0xc;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 0xc;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 0xc;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 0xc;
        }
      }
    }
  }
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x002aa9f0  size 0x224
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 15 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State15(int param_1)

{
  short *psVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x604);
  }
  else {
    *(undefined4 *)(param_1 + 0xa20) = 3;
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0xa24) = 0x10;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x9ec) = 0;
    puVar2 = &g_MenuMgr->unk_0534;
    do {
      *(undefined2 *)((int)puVar2 + 0x3e) = 0xfffe;
      iVar5 = iVar5 + 8;
      *(undefined2 *)(puVar2 + 0x10) = 0xfffe;
      *(undefined2 *)((int)puVar2 + 0x42) = 0xfffe;
      *(undefined2 *)(puVar2 + 0x11) = 0xfffe;
      *(undefined2 *)((int)puVar2 + 0x46) = 0xfffe;
      *(undefined2 *)(puVar2 + 0x12) = 0xfffe;
      *(undefined2 *)((int)puVar2 + 0x4a) = 0xfffe;
      *(undefined2 *)(puVar2 + 0x13) = 0xfffe;
      puVar2 = puVar2 + 4;
    } while (iVar5 < 0x10);
    iVar6 = 0;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    iVar5 = param_1;
    do {
      uVar4 = Profile_Get(0);
      uVar4 = Profile_GetCurrentCar(uVar4);
      psVar1 = (short *)CarRec_GetColorSlot(uVar4,iVar6);
      iVar6 = iVar6 + 1;
      *(int *)(iVar5 + 0x20) = (int)*psVar1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 0x10);
    iVar5 = *(int *)(param_1 + 0x604);
  }
  uVar4 = 2;
  if (0 < iVar5) {
    uVar4 = 3;
  }
  Menu_HandleCursor(param_1 + 0x14,0,2,1,1,uVar4);
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
  if ((uVar3 == 0x10) || (uVar3 == 0x20)) {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x20);
      if ((iVar6 == -1) || (iVar6 == -1)) {
        uVar4 = Profile_Get(0);
        Garage_GetCurrentCarSpec(uVar4,iVar5);
      }
      else {
        uVar4 = Profile_Get(0);
        Garage_GetCurrentCarStats(uVar4,iVar5,0,(short)iVar6);
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 4;
    } while (iVar5 < 0x10);
  }
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x002aac20  size 0x34
/* entry 14 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 5;
    *(undefined4 *)(param_1 + 0xa24) = 5;
  }
  return;
}

// 0x002aac60  size 0x34
/* entry 13 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State13(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 3;
    *(undefined4 *)(param_1 + 0xa24) = 3;
  }
  return;
}

// 0x002aaca0  size 0x34
/* entry 12 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State12(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 3;
    *(undefined4 *)(param_1 + 0xa24) = 3;
  }
  return;
}

// 0x002aace0  size 0x80
/* entry 11 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State11(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 8;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  Menu_HandleCursor(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0xe;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002aad60  size 0x80
/* entry 10 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 7;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  Menu_HandleCursor(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0xd;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002aade0  size 0x80
/* entry 9 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State9(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 6;
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  Menu_HandleCursor(param_1 + 0x9d8,0,2,1,1,0);
  if (*(int *)(param_1 + 0x9d8) == 0) {
    *(undefined4 *)(param_1 + 0xa24) = 0xc;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 0xa20);
  }
  return;
}

// 0x002aae60  size 0x590
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 8 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 5;
    *(undefined4 *)(param_1 + 0xa24) = 0xb;
    *(undefined4 *)(param_1 + 0xc) = 0x21;
    if (*(int *)(param_1 + 0x68) == 2) {
      maybe_ScrTuneParts_BuildRow(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x9d0) = 0;
    }
    else {
      maybe_ScrTuneParts_BuildRow(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc),1);
      *(undefined4 *)(param_1 + 0x9d0) = 0;
    }
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = 2;
        break;
      case 2:
        g_MenuMgr->unk_05dc = 2;
        break;
      case 3:
        g_MenuMgr->unk_05fc = 2;
        break;
      case 4:
        g_MenuMgr->unk_0618 = 2;
      }
    }
  }
  Menu_HandleCursor(param_1 + 0x10,0,8,*(int *)(param_1 + 0x78) + -1,1,0);
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c);
  if (*(int *)(param_1 + 0x68) == 2) {
    g_MenuMgr->unk_0562 = uVar1;
    g_MenuMgr->unk_0564 = uVar1;
  }
  else if (*(int *)(param_1 + 0x68) == 0) {
    g_MenuMgr->unk_0562 = uVar1;
    g_MenuMgr->unk_0564 = 0x162;
  }
  else {
    g_MenuMgr->unk_0562 = 0x162;
    g_MenuMgr->unk_0564 = uVar1;
  }
  uVar4 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar4) == 0) {
    uVar5 = 0x100000;
  }
  else {
    uVar5 = 0x80000;
    if ((uVar4 != 0x80000) && (uVar5 = uVar4, *_g_MenuInput != 1)) {
      uVar5 = 0x100000;
    }
  }
  if (uVar5 == 4) {
    *(int *)(param_1 + 0x9dc) = *(int *)(param_1 + 0x9dc) + -1;
    if (*(int *)(param_1 + 0x9dc) < 0) {
      if (*(int *)(param_1 + 0x78) < 10) {
        *(int *)(param_1 + 0x9dc) = *(int *)(param_1 + 0x78) + -1;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        *(undefined4 *)(param_1 + 0x9e0) = 2;
        *(undefined4 *)(param_1 + 0x9dc) = 0;
      }
    }
  }
  else {
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
      *(int *)(param_1 + 0x9dc) = *(int *)(param_1 + 0x9dc) + 1;
      iVar2 = *(int *)(param_1 + 0x78) + -1;
      iVar3 = 8;
      if (iVar2 < 9) {
        iVar3 = iVar2;
      }
      if (iVar3 < *(int *)(param_1 + 0x9dc)) {
        if (*(int *)(param_1 + 0x78) < 10) {
          *(undefined4 *)(param_1 + 0x9dc) = 0;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 1;
          *(undefined4 *)(param_1 + 0x9dc) = 8;
        }
      }
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
  if (uVar4 == 0x1000) {
    Se_PlayMenu(7);
    *(int *)(param_1 + 0x9d0) = (*(int *)(param_1 + 0x9d0) + 1) % 3;
    iVar3 = *(int *)(param_1 + 0x9d0);
    if (iVar3 == 2) {
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 4;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 4;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 4;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 4;
        }
      }
      goto switchD_002ab308_caseD_0;
    }
    if (iVar3 == 1) {
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 3;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 3;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 3;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 3;
        }
      }
      goto switchD_002ab308_caseD_0;
    }
    if (iVar3 == 0) {
      if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
        switch(g_MenuMgr->bgMode) {
        case 1:
          g_MenuMgr->unk_0598 = 2;
          break;
        case 2:
          g_MenuMgr->unk_05dc = 2;
          break;
        case 3:
          g_MenuMgr->unk_05fc = 2;
          break;
        case 4:
          g_MenuMgr->unk_0618 = 2;
        }
      }
      goto switchD_002ab308_caseD_0;
    }
  }
  else {
switchD_002ab308_caseD_0:
  }
  uVar4 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar4) == 0) {
    uVar5 = 0x100000;
  }
  else {
    uVar5 = 0x80000;
    if (uVar4 != 0x80000) {
      if (*_g_MenuInput == 1) {
        uVar5 = uVar4;
      }
      else {
        uVar5 = 0x100000;
      }
    }
  }
  if (uVar5 != 0x10) {
    if ((_g_MenuInput[4] & uVar4) == 0) {
      uVar4 = 0x100000;
    }
    else if (uVar4 == 0x80000) {
      uVar4 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar4 = 0x100000;
    }
    if (uVar4 != 0x20) goto switchD_002ab114_caseD_0;
  }
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(g_MenuMgr->bgMode) {
    case 1:
      g_MenuMgr->unk_0598 = 2;
      break;
    case 2:
      g_MenuMgr->unk_05dc = 2;
      break;
    case 3:
      g_MenuMgr->unk_05fc = 2;
      break;
    case 4:
      g_MenuMgr->unk_0618 = 2;
    }
  }
switchD_002ab114_caseD_0:
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x002ab3f0  size 0xb4
/* entry 7 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State7(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 4;
    *(undefined4 *)(param_1 + 0xa24) = 10;
    if (*(int *)(param_1 + 0x68) == 2) {
      maybe_ScrTuneParts_BuildRow(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc));
      iVar1 = *(int *)(param_1 + 0x78);
      goto LAB_002ab460;
    }
    maybe_ScrTuneParts_BuildRow(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc),1);
  }
  iVar1 = *(int *)(param_1 + 0x78);
LAB_002ab460:
  Menu_HandleCursor(param_1 + 0x10,0,2,iVar1 + -1,1,0);
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x002ab4b0  size 0x818
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 6 of state table 0x32ee90 used by maybe_ScrTuneParts_Update */

void maybe_ScrTuneParts_State6(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  MenuMgr *pMVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  
  iVar11 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar11 != 0) {
    *(undefined4 *)(param_1 + 0xa20) = 3;
    maybe_ScrTuneParts_BuildRow(param_1 + 0x7c,param_1 + 0x78,*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x9e0) = 0;
    iVar11 = 0;
    puVar12 = &g_MenuMgr->unk_0534;
    do {
      *(undefined2 *)(puVar12 + 5) = 0x162;
      iVar11 = iVar11 + 7;
      *(undefined2 *)((int)puVar12 + 0x16) = 0x162;
      *(undefined2 *)(puVar12 + 6) = 0x162;
      *(undefined2 *)((int)puVar12 + 0x1a) = 0x162;
      *(undefined2 *)(puVar12 + 7) = 0x162;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0x162;
      *(undefined2 *)(puVar12 + 8) = 0x162;
      puVar12 = (uint *)((int)puVar12 + 0xe);
    } while (iVar11 < 0x15);
    g_MenuMgr->unk_0544 = 0xfffffffe;
    iVar11 = Profile_Get(0);
    iVar7 = Garage_GetSortedCarCount(0);
    pMVar4 = g_MenuMgr;
    sVar1 = *(short *)(iVar11 + iVar7 * 2 + 0x13ee);
    g_MenuMgr->unk_0538 = 2;
    *(int *)&pMVar4->field_0x53c = (int)sVar1;
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
    lVar10 = maybe_MenuText_CurrentCarSpec(*(undefined4 *)(param_1 + 0xc));
    if (lVar10 == 1) {
      iVar11 = *(int *)(param_1 + 0xc);
      if ((((iVar11 == 7) || (iVar11 == 6)) || (iVar11 == 5)) || (iVar11 == 4)) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
        }
        g_MenuMgr->unk_05a0 = 1;
        g_MenuMgr->unk_05e8 = 1;
        g_MenuMgr->unk_060c = 1;
        g_MenuMgr->unk_0634 = 1;
        g_MenuMgr->unk_0644 = 1;
        if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
          switch(g_MenuMgr->bgMode) {
          case 1:
            g_MenuMgr->unk_0598 = 1;
            break;
          case 2:
            g_MenuMgr->unk_05dc = 1;
            break;
          case 3:
            g_MenuMgr->unk_05fc = 1;
            break;
          case 4:
            g_MenuMgr->unk_0618 = 1;
          }
        }
      }
      else if (iVar11 == 0x1e) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
        }
        g_MenuMgr->unk_05a0 = 1;
        g_MenuMgr->unk_05e8 = 1;
        g_MenuMgr->unk_060c = 1;
        g_MenuMgr->unk_0634 = 1;
        g_MenuMgr->unk_0644 = 1;
        if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
          switch(g_MenuMgr->bgMode) {
          case 1:
            g_MenuMgr->unk_0598 = 10;
            break;
          case 2:
            g_MenuMgr->unk_05dc = 10;
            break;
          case 3:
            g_MenuMgr->unk_05fc = 10;
            break;
          case 4:
            g_MenuMgr->unk_0618 = 10;
          }
        }
      }
      else if (iVar11 == 0x1d) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
        }
        g_MenuMgr->unk_05a0 = 1;
        g_MenuMgr->unk_05e8 = 1;
        g_MenuMgr->unk_060c = 1;
        g_MenuMgr->unk_0634 = 1;
        g_MenuMgr->unk_0644 = 1;
        if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
          switch(g_MenuMgr->bgMode) {
          case 1:
            g_MenuMgr->unk_0598 = 9;
            break;
          case 2:
            g_MenuMgr->unk_05dc = 9;
            break;
          case 3:
            g_MenuMgr->unk_05fc = 9;
            break;
          case 4:
            g_MenuMgr->unk_0618 = 9;
          }
        }
      }
      else if (iVar11 == 0x1c) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
        }
        g_MenuMgr->unk_05a0 = 1;
        g_MenuMgr->unk_05e8 = 1;
        g_MenuMgr->unk_060c = 1;
        g_MenuMgr->unk_0634 = 1;
        g_MenuMgr->unk_0644 = 1;
        if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
          switch(g_MenuMgr->bgMode) {
          case 1:
            g_MenuMgr->unk_0598 = 8;
            break;
          case 2:
            g_MenuMgr->unk_05dc = 8;
            break;
          case 3:
            g_MenuMgr->unk_05fc = 8;
            break;
          case 4:
            g_MenuMgr->unk_0618 = 8;
          }
        }
      }
      else if (iVar11 == 0x1b) {
        if (*(int *)(param_1 + 0xa00) == 3) {
          Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
        }
        g_MenuMgr->unk_05a0 = 1;
        g_MenuMgr->unk_05e8 = 1;
        g_MenuMgr->unk_060c = 1;
        g_MenuMgr->unk_0634 = 1;
        g_MenuMgr->unk_0644 = 1;
        if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
          switch(g_MenuMgr->bgMode) {
          case 1:
            g_MenuMgr->unk_0598 = 6;
            break;
          case 2:
            g_MenuMgr->unk_05dc = 6;
            break;
          case 3:
            g_MenuMgr->unk_05fc = 6;
            break;
          case 4:
            g_MenuMgr->unk_0618 = 6;
          }
        }
      }
      else {
        if (iVar11 != 0x18) {
          iVar11 = *(int *)(param_1 + 0x78);
          goto LAB_002ab4e0;
        }
        if (*(int *)(param_1 + 0xa00) == 3) {
          Menu_SetCursorAlpha(&g_MenuMgr->field_0x654);
        }
        g_MenuMgr->unk_05a0 = 1;
        g_MenuMgr->unk_05e8 = 1;
        g_MenuMgr->unk_060c = 1;
        g_MenuMgr->unk_0634 = 1;
        g_MenuMgr->unk_0644 = 1;
        if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
          switch(g_MenuMgr->bgMode) {
          case 1:
            g_MenuMgr->unk_0598 = 5;
            break;
          case 2:
            g_MenuMgr->unk_05dc = 5;
            break;
          case 3:
            g_MenuMgr->unk_05fc = 5;
            break;
          case 4:
            g_MenuMgr->unk_0618 = 5;
          }
        }
      }
    }
  }
  iVar11 = *(int *)(param_1 + 0x78);
LAB_002ab4e0:
  Menu_HandleCursor(param_1 + 0x10,0,2,iVar11 + -1,1,0);
  uVar5 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),0);
  *(short *)(&g_MenuMgr->field_0x548 + (uVar5 & 0xff) * 2) =
       (short)*(undefined4 *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c);
  uVar5 = _g_MenuInput[2];
  if ((_g_MenuInput[4] & uVar5) == 0) {
    uVar13 = 0x100000;
  }
  else {
    uVar13 = 0x80000;
    if ((uVar5 != 0x80000) && (uVar13 = uVar5, *_g_MenuInput != 1)) {
      uVar13 = 0x100000;
    }
  }
  if (uVar13 == 1) {
    *(int *)(param_1 + 0x9fc) = *(int *)(param_1 + 0x9fc) + -1;
    if (*(int *)(param_1 + 0x9fc) < 0) {
      if (*(int *)(param_1 + 0x78) < 8) {
        *(int *)(param_1 + 0x9fc) = *(int *)(param_1 + 0x78) + -1;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        *(undefined4 *)(param_1 + 0x9e0) = 2;
        *(undefined4 *)(param_1 + 0x9fc) = 0;
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
      *(int *)(param_1 + 0x9fc) = *(int *)(param_1 + 0x9fc) + 1;
      iVar11 = *(int *)(param_1 + 0x78) + -1;
      if (6 < iVar11) {
        iVar11 = 6;
      }
      if (iVar11 < *(int *)(param_1 + 0x9fc)) {
        if (*(int *)(param_1 + 0x78) < 8) {
          *(undefined4 *)(param_1 + 0x9fc) = 0;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          *(undefined4 *)(param_1 + 0x9e0) = 1;
          *(undefined4 *)(param_1 + 0x9fc) = 6;
        }
      }
    }
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) * 4 + param_1 + 0x7c);
  uVar8 = maybe_CarModel_GetClassA(*(undefined4 *)(param_1 + 0xc),0xffffffffffffffff);
  uVar9 = Profile_Get(0);
  uVar9 = Profile_GetCurrentCar(uVar9);
  uVar9 = CarRec_GetName(uVar9);
  psVar6 = (short *)CarRec_GetOptionSlot(uVar9,uVar8);
  sVar3 = psVar6[1];
  sVar2 = *psVar6;
  *(undefined4 *)(param_1 + 0xa24) = 9;
  if (sVar2 == sVar1) {
    if (((char)sVar3 == '\x1f') || (sVar2 == -1)) {
      *(undefined4 *)(param_1 + 0xa24) = 0xfffffffe;
    }
    else {
      iVar11 = Profile_Get(0);
      if (*(short *)(iVar11 + sVar2 * 2 + 0x1420) < 1) {
        *(undefined4 *)(param_1 + 0xa24) = 0xfffffffe;
      }
    }
  }
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x002abcd0  size 0x23c
/* state of maybe_ScrTuneParts; on-screen text/callee hint "RivalIsBossId" (was
   ScrRivalIsBossId_Exit) */

void maybe_ScrTuneParts_State5_RivalIsBossId(int param_1)

{
  MenuMgr *pMVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  
  iVar7 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar7 != 0) {
    *(undefined4 *)(param_1 + 0x9d0) = 0;
    *(undefined4 *)(param_1 + 0x9dc) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 2;
    *(undefined4 *)(param_1 + 0xa24) = 8;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x9fc) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 3;
    sVar2 = maybe_CarModel_GetClassC(*(undefined4 *)(param_1 + 0xc));
    lVar8 = (long)sVar2;
    sVar3 = maybe_CarModel_GetClassB(*(undefined4 *)(param_1 + 0xc));
    if (lVar8 <= sVar3) {
      iVar7 = (int)sVar2 << 1;
      do {
        lVar5 = Rival_IsBossId((short)lVar8);
        if ((lVar5 == 1) || (iVar4 = Profile_Get(0), 1 < *(short *)(iVar4 + iVar7 + 0x1420))) {
          *(undefined4 *)(param_1 + 0x6c) = 0;
          break;
        }
        lVar8 = (long)((int)lVar8 + 1);
        iVar7 = iVar7 + 2;
      } while (lVar8 <= sVar3);
    }
    iVar7 = 0;
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
    g_MenuMgr->unk_0544 = 0xfffffffe;
    if (*(int *)(param_1 + 0xa00) == 2) {
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    iVar7 = Profile_Get(0);
    iVar4 = Garage_GetSortedCarCount(0);
    pMVar1 = g_MenuMgr;
    sVar2 = *(short *)(iVar7 + iVar4 * 2 + 0x13ee);
    g_MenuMgr->unk_0538 = 2;
    *(int *)&pMVar1->field_0x53c = (int)sVar2;
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = 2;
        break;
      case 2:
        g_MenuMgr->unk_05dc = 2;
        break;
      case 3:
        g_MenuMgr->unk_05fc = 2;
        break;
      case 4:
        g_MenuMgr->unk_0618 = 2;
      }
    }
  }
  Menu_HandleCursor(param_1 + 0x68,0,2,2,1,*(undefined4 *)(param_1 + 0x6c));
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

// 0x002abf10  size 0x120
/* state of maybe_ScrTuneParts; on-screen text/callee hint "RivalIsBossId" (was
   ScrRivalIsBossId_Update) */

void maybe_ScrTuneParts_State4_RivalIsBossId(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  iVar6 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x9dc) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 3;
    *(undefined4 *)(param_1 + 0xa24) = 7;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x9fc) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 3;
    sVar2 = maybe_CarModel_GetClassC(*(undefined4 *)(param_1 + 0xc));
    lVar7 = (long)sVar2;
    sVar3 = maybe_CarModel_GetClassB(*(undefined4 *)(param_1 + 0xc));
    if (lVar7 <= sVar3) {
      iVar6 = (int)sVar2 << 1;
      do {
        lVar5 = Rival_IsBossId((short)lVar7);
        if ((lVar5 == 1) || (iVar4 = Profile_Get(0), 1 < *(short *)(iVar4 + iVar6 + 0x1420))) {
          *(undefined4 *)(param_1 + 0x6c) = 0;
          goto LAB_002abfe0;
        }
        lVar7 = (long)((int)lVar7 + 1);
        iVar6 = iVar6 + 2;
      } while (lVar7 <= sVar3);
      uVar1 = *(undefined4 *)(param_1 + 0x6c);
      goto LAB_002abfe4;
    }
  }
LAB_002abfe0:
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
LAB_002abfe4:
  Menu_HandleCursor(param_1 + 0x68,0,2,2,1,uVar1);
  g_MenuMgr->flags = g_MenuMgr->flags | 0x18000;
  return;
}

