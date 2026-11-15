// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002fc000 - 0x00300000
#include "ghidra_types.h"

// 0x002fd080  size 0x20
undefined1 GameState_LoadHeader_Wrap(void)

{
  undefined1 auStack_50 [80];
  
  GameState_LoadHeader(auStack_50);
  return auStack_50[0];
}

// 0x002fd0a0  size 0x20
undefined1 GameState_LoadHeader_Wrap2(void)

{
  undefined1 uStack_50;
  undefined1 uStack_4f;
  
  GameState_LoadHeader(&uStack_50);
  return uStack_4f;
}

// 0x002fd0c0  size 0xbc
undefined4 maybe_RaceResult_GetCategory(void)

{
  byte bVar1;
  RaceEntrySetup *pRVar2;
  RacerStats *pRVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  pRVar2 = GameState_Elem_f0_xcc(1);
  if (pRVar2 == (RaceEntrySetup *)0x0) {
    pRVar3 = (RacerStats *)0x0;
  }
  else {
    pRVar3 = GameState_Elem_2fa0_x17c((int)(char)pRVar2->racerSlot);
  }
  if (pRVar3 != (RacerStats *)0x0) {
    bVar1 = RivalRec_GetTeam(pRVar3);
    if (bVar1 < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar1) {
      case 2:
        uVar4 = 1;
        break;
      case 3:
        uVar4 = 2;
        break;
      case 4:
        uVar4 = 3;
        break;
      case 6:
        uVar4 = 4;
        break;
      case 7:
        uVar4 = 5;
        break;
      case 8:
        uVar4 = 6;
        break;
      case 9:
        uVar4 = 7;
        break;
      case 10:
        uVar4 = 8;
      }
    }
  }
  return uVar4;
}

// 0x002fd180  size 0x34
/* stats record (0x17c) of setup entry 1's racer slot (was maybe_RaceResult_GetRivalTeam) */

RacerStats * maybe_Race_GetRivalStats(void)

{
  RaceEntrySetup *pRVar1;
  RacerStats *pRVar2;
  
  pRVar1 = GameState_Elem_f0_xcc(1);
  if (pRVar1 == (RaceEntrySetup *)0x0) {
    pRVar2 = (RacerStats *)0x0;
  }
  else {
    pRVar2 = GameState_Elem_2fa0_x17c((int)(char)pRVar1->racerSlot);
  }
  return pRVar2;
}

// 0x002fd1c0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Misc_Nop(void)

{
  return _g_AttractShared1;
}

// 0x002fd1d0  size 0x8
/* menu screen 45 (table 0x3274b0) */

void ScrRenderSetInterlace_Exit(void)

{
  return;
}

// 0x002fd1e0  size 0x398
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 45 (table 0x3274b0) */

void ScrRenderSetInterlace_Update(int *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = Menu_IsInputIdle(param_1 + 3);
  if (lVar2 != 0) {
    iVar1 = param_1[4];
    if (iVar1 == 3) {
      iVar1 = param_1[2];
      param_1[2] = iVar1 + 1;
      if (600 < iVar1) {
        param_1[1] = 0;
        param_1[5] = 2;
        if (*param_1 == 0) {
          Render_SetInterlace(1);
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
      if (uVar3 == 0x40) {
        param_1[1] = 0;
        *param_1 = 1;
        param_1[5] = 2;
      }
      else if ((uVar3 == 0x10) || (uVar3 == 0x20)) {
        param_1[1] = 0;
        if (*param_1 == 0) {
          Render_SetInterlace(1);
        }
        param_1[5] = 2;
      }
    }
    else if (iVar1 == 2) {
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
        Se_PlayMenu(5);
        if (param_1[1] == 0) {
          MenuMgr_RequestScreen(0);
          param_1[1] = 0;
        }
        else {
          if (param_1[1] == 1) {
            Render_SetInterlace(0);
            param_1[5] = 3;
          }
          else {
            Render_SetInterlace();
            *param_1 = 0;
          }
          param_1[1] = 0;
        }
        param_1[2] = 0;
      }
      else if (uVar3 == 0x20) {
        Se_PlayMenu(8);
      }
      Menu_HandleCursor(param_1 + 1,0,2,2,1,0);
    }
    else if (iVar1 == 1) {
      Sema_Wait(0x36efc0);
      iVar1 = _g_FileShared2;
      Sema_Signal(0x36efc0,0);
      if (iVar1 == 0) {
        if (g_MenuMgr->prevScreen == 0xffffffff) {
          param_1[5] = 2;
        }
        else {
          MenuMgr_RequestScreen();
        }
      }
    }
    else if (iVar1 == 0) {
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
        Se_PlayMenu(5);
        g_RaceCtx->language = *(uchar *)(param_1[1] + 0x36ef28);
        UiRes_LoadLocalized(0x1870);
        param_1[1] = 0;
        param_1[5] = 1;
      }
      else if (uVar3 == 0x20) {
        Se_PlayMenu(8);
      }
      Menu_HandleCursor(param_1 + 1,0,2,4,1,0);
    }
    Menu_RequestTransition(param_1 + 3);
  }
  return;
}

// 0x002fd580  size 0x38
/* menu screen 45 (table 0x3274b0) */

void ScrRenderSetInterlace_Enter(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 1;
  param_1[10] = 0;
  param_1[8] = 1;
  param_1[6] = 1;
  param_1[9] = 0;
  return;
}

// 0x002fd5c0  size 0x14
/* screen record 0x3278fc */

void ScrDraw_StartGame_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x002fd5e0  size 0x3d0
void Misc_Draw_StartGame(int *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  iVar1 = param_1[4];
  if (iVar1 == 3) {
    iVar1 = UiMgr_FindLayout(0x12a);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
    MenuWnd_DrawLabel(0x12a,1,0x1f89,(600 - param_1[2]) / 0x3c + 1);
  }
  else if (iVar1 == 2) {
    iVar1 = param_1[8];
    param_1[8] = 0;
    if (iVar1 != 0) {
      MenuWnd_SetItemState(0x129,1,1,0);
      MenuWnd_SetItemVisible(0);
      MenuWnd_SetItemState(0x129,6,1,0);
      MenuWnd_SetItemVisible(0);
      MenuWnd_SetItemState(0x129,0xb,1,0);
      MenuWnd_SetItemVisible(0);
    }
    iVar1 = UiMgr_FindLayout(0x129);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
    if (*param_1 == 0) {
      MenuWnd_DrawLabel(0x129,0x14,0x1f82,0x1f83);
    }
    else {
      MenuWnd_DrawLabel(0x129,0x14,0x1f82,0x1f84);
    }
    MenuWnd_DrawText(0x129,0x13,0x1f85);
    MenuWnd_DrawText(0x129,0x15,0x1f86);
    MenuWnd_DrawText(0x129,0x16,0x1f88);
    MenuWnd_SetItemState(0x129,*(undefined4 *)(&DAT_0035e098 + param_1[1] * 4),1,0);
  }
  else if (iVar1 == 1) {
    UiMgr_DrawAll(0);
  }
  else {
    if (iVar1 != 0) {
      param_1[7] = 0;
      goto LAB_002fd938;
    }
    iVar1 = param_1[8];
    param_1[8] = 0;
    if (iVar1 != 0) {
      MenuWnd_SetItemState(0x128,1,1,0);
      MenuWnd_SetItemVisible(0);
      MenuWnd_SetItemState(0x128,6,1,0);
      MenuWnd_SetItemVisible(0);
      MenuWnd_SetItemState(0x128,0xb,1,0);
      MenuWnd_SetItemVisible(0);
      MenuWnd_SetItemState(0x128,0x10,1,0);
      MenuWnd_SetItemVisible(0);
      MenuWnd_SetItemState(0x128,0x15,1,0);
      MenuWnd_SetItemVisible(0);
    }
    iVar1 = UiMgr_FindLayout(0x128);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
    MenuWnd_DrawText(0x128,0x1f,0x1f8c);
    MenuWnd_DrawText(0x128,0x20,0x1f8d);
    MenuWnd_DrawText(0x128,0x21,0x1f8e);
    MenuWnd_DrawText(0x128,0x22,0x1f8f);
    MenuWnd_DrawText(0x128,0x23,0x1f90);
    MenuWnd_SetItemState(0x128,*(undefined4 *)(&DAT_0035e080 + param_1[1] * 4),1,0);
  }
  param_1[7] = 0;
LAB_002fd938:
  param_1[9] = 0;
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle(param_1 + 3), lVar2 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x002fd9b0  size 0x8
/* screen record 0x3278fc */

void ScrDraw_StartGame_Enter(void)

{
  Menu_ClearSlot(0);
  return;
}

