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
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  lVar2 = GameState_Elem_f0_xcc(1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = GameState_Elem_2fa0_x17c(*(undefined1 *)((int)lVar2 + 9));
  }
  if (lVar2 != 0) {
    bVar1 = RivalRec_GetTeam(lVar2);
    if (bVar1 < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar1) {
      case 2:
        uVar3 = 1;
        break;
      case 3:
        uVar3 = 2;
        break;
      case 4:
        uVar3 = 3;
        break;
      case 6:
        uVar3 = 4;
        break;
      case 7:
        uVar3 = 5;
        break;
      case 8:
        uVar3 = 6;
        break;
      case 9:
        uVar3 = 7;
        break;
      case 10:
        uVar3 = 8;
      }
    }
  }
  return uVar3;
}

// 0x002fd180  size 0x34
undefined8 maybe_RaceResult_GetRivalTeam(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = GameState_Elem_f0_xcc(1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = GameState_Elem_2fa0_x17c(*(undefined1 *)((int)lVar1 + 9));
  }
  return uVar2;
}

// 0x002fd1c0  size 0xc
undefined4 Misc_Nop(void)

{
  return uRam0046a598;
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
      uVar3 = piRam0036f468[2];
      if ((piRam0036f468[4] & uVar3) == 0) {
        uVar3 = 0x100000;
      }
      else if (uVar3 == 0x80000) {
        uVar3 = 0x80000;
      }
      else if (*piRam0036f468 != 1) {
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
      uVar3 = piRam0036f468[2];
      if ((piRam0036f468[4] & uVar3) == 0) {
        uVar3 = 0x100000;
      }
      else if (uVar3 == 0x80000) {
        uVar3 = 0x80000;
      }
      else if (*piRam0036f468 != 1) {
        uVar3 = 0x100000;
      }
      if (uVar3 == 0x10) {
        Se_PlayMenu(5);
        if (param_1[1] == 0) {
          MenuMgr_GetScreenParam(0);
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
      iVar1 = iRam00386628;
      Sema_Signal(0x36efc0,0);
      if (iVar1 == 0) {
        if (*(int *)(_g_MenuMgr + 0x24) == -1) {
          param_1[5] = 2;
        }
        else {
          MenuMgr_GetScreenParam();
        }
      }
    }
    else if (iVar1 == 0) {
      uVar3 = piRam0036f468[2];
      if ((piRam0036f468[4] & uVar3) == 0) {
        uVar3 = 0x100000;
      }
      else if (uVar3 == 0x80000) {
        uVar3 = 0x80000;
      }
      else if (*piRam0036f468 != 1) {
        uVar3 = 0x100000;
      }
      if (uVar3 == 0x10) {
        Se_PlayMenu(5);
        *(undefined1 *)(iRam0036f1d4 + 0x15) = *(undefined1 *)(param_1[1] + 0x36ef28);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3278fc */

void ScrDraw_StartGame_Exit(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x002fd5e0  size 0x3d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Misc_Draw_StartGame(int *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar1 = param_1[4];
  if (iVar1 == 3) {
    iVar1 = UiMgr_FindLayout(0x12a);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
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
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
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
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
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
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar2 = Menu_IsInputIdle(param_1 + 3), lVar2 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
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

