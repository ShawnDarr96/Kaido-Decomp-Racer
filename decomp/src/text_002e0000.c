// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002e0000 - 0x002e4000
#include "ghidra_types.h"

// 0x002e0040  size 0x320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuNum_CountUp_Bgm(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                        ulong param_5,ulong param_6,int param_7)

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

// 0x002e0360  size 0x510
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_BgmConfig(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 auStack_40 [64];
  
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar4 != 0) {
    MenuWnd_SetHelpText(0);
    MenuWnd_SetItemVisible(0);
  }
  lVar2 = MenuWnd_DrawFooter(0x1f80,0xffffffffffffffff,0);
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  MenuWnd_DrawCursor(1);
  MenuWnd_DrawText(0xf4,0x25,0x1f81);
  uVar6 = 0;
  puVar5 = &DAT_00342520;
  do {
    MenuWnd_DrawText(0xf4,*(undefined4 *)(puVar5 + 4),*(undefined4 *)(puVar5 + 0xc));
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 0x14;
  } while (uVar6 < 0xc);
  uVar6 = 0;
  puVar5 = &DAT_00342610;
  do {
    if ((*(char *)(param_1 + 0x2c) == '\x01') && (uVar6 == 0xc)) {
      iVar4 = *(int *)(param_1 + 0x38) + 0x20;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x38) + uVar6;
    }
    iVar4 = iVar4 % 0x21;
    MenuWnd_DrawLabel(0xf5,*(undefined4 *)(puVar5 + 8),0x3a,iVar4 + 1);
    if (iVar4 < 0x1e) {
      lVar2 = SeqGen_IsUserSong(iVar4);
      if (lVar2 == 0) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar5 + 0xc),0x1f73);
      }
      else {
        lVar2 = SeqGen_FindPatternIndex(*(undefined4 *)(param_1 + 0x20));
        if (lVar2 == 0) {
          MenuWnd_DrawTextId(0xf5,*(undefined4 *)(puVar5 + 0xc),4,0x1f80);
        }
        else {
          iVar1 = UiMgr_FindLayout(0xf5);
          UiElem_GetRect(*_g_UiMgr + iVar1 * 0x4f4 + 4,auStack_40,*(undefined4 *)(puVar5 + 0xc));
          uVar3 = SeqGen_GetPartTextId(*(undefined4 *)(param_1 + 0x20),iVar4);
          UiText_DrawPlayerName(auStack_40,uVar3,0);
        }
      }
      if (iVar4 < 0xc) {
        iVar1 = UiMgr_FindLayout(0xf5);
        UiElem_Get(*_g_UiMgr + iVar1 * 0x4f4 + 4,*(undefined4 *)(puVar5 + 4),0xc0,0xba,0x73);
      }
      else {
        iVar1 = UiMgr_FindLayout(0xf5);
        UiElem_Get(*_g_UiMgr + iVar1 * 0x4f4 + 4,*(undefined4 *)(puVar5 + 4),0xc0,0xc0,0xc0);
      }
    }
    else {
      if (iVar4 == 0x20) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar5 + 0xc),0x1f72);
      }
      else if (iVar4 == 0x1f) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar5 + 0xc),0x1f71);
      }
      else if (iVar4 == 0x1e) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar5 + 0xc),0x1f70);
      }
      iVar1 = UiMgr_FindLayout(0xf5);
      UiElem_Get(*_g_UiMgr + iVar1 * 0x4f4 + 4,*(undefined4 *)(puVar5 + 4),0x5e,0x7e,0xa3);
    }
    if (iVar4 == *(int *)(param_1 + 0x28)) {
      iVar4 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4,*(undefined4 *)(puVar5 + 0x10),8)
      ;
    }
    else {
      iVar4 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,*(undefined4 *)(puVar5 + 0x10),8);
    }
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 0x18;
  } while (uVar6 < 0xd);
  UiLayout_UpdateAnimById(0xf3,0);
  iVar4 = UiMgr_FindLayout(0xf3);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0xf4);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0xf5);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  MenuNum_CountUp_Bgm(0xf6,3,4,0xfc,0x21,0xc,*(undefined4 *)(param_1 + 0x38));
  UiLayout_UpdateAnimById(0xf6,2);
  iVar4 = UiMgr_FindLayout(0xf6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  iVar4 = UiMgr_FindLayout(0xf2);
  UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x1a,9,3);
  iVar4 = UiMgr_FindLayout(0xf2);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar4 * 0x4f4 + 4);
  return;
}

// 0x002e0880  size 0xb2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_BgmConfig_0880(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined1 auStack_40 [64];
  
  iVar5 = param_1[5];
  param_1[5] = 0;
  if (iVar5 == 0) {
    iVar5 = *param_1;
  }
  else {
    uVar1 = UiRes_GetLayoutData(0x3e1);
    iVar5 = UiMgr_FindLayout(0xf5);
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
    uVar1 = UiRes_GetLayoutData(0x3e2);
    iVar5 = UiMgr_FindLayout(0xf5);
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
    uVar1 = UiRes_GetLayoutData(0x3e3);
    iVar5 = UiMgr_FindLayout(0xf5);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x348) = 0;
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x340) = 0;
    *(undefined4 *)(iVar5 + 0x348) = uVar1;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    uVar1 = UiRes_GetLayoutData(0x3e4);
    iVar5 = UiMgr_FindLayout(0xf5);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x35c) = 0;
    *(undefined4 *)(iVar5 + 0x34c) = 0;
    if (*(int *)(iVar5 + 0x35c) == 0) {
      *(undefined4 *)(iVar5 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    *(undefined4 *)(iVar5 + 0x34c) = 0;
    if (*(int *)(iVar5 + 0x35c) == 0) {
      *(undefined4 *)(iVar5 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x358) = 1;
    }
    *(undefined4 *)(iVar5 + 0x354) = 0;
    *(undefined4 *)(iVar5 + 0x35c) = uVar1;
    *(undefined4 *)(iVar5 + 0x358) = 1;
    uVar1 = UiRes_GetLayoutData(0x3e5);
    iVar5 = UiMgr_FindLayout(0xf6);
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
    uVar1 = UiRes_GetLayoutData(0x3e6);
    iVar5 = UiMgr_FindLayout(0xf6);
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
    uVar1 = UiRes_GetLayoutData(999);
    iVar5 = UiMgr_FindLayout(0xf6);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x348) = 0;
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x338) = 0;
    if (*(int *)(iVar5 + 0x348) == 0) {
      *(undefined4 *)(iVar5 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x344) = 1;
    }
    *(undefined4 *)(iVar5 + 0x340) = 1;
    uVar8 = 0;
    *(undefined4 *)(iVar5 + 0x348) = uVar1;
    puVar7 = &DAT_00342520;
    *(undefined4 *)(iVar5 + 0x344) = 1;
    do {
      if (uVar8 != param_1[0xc]) {
        iVar5 = UiMgr_FindLayout(0xf4);
        UiElem_Get(*_g_UiMgr + iVar5 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 8),0x53,0x5a,0x4b);
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 0x14;
    } while (uVar8 < 0xc);
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
    iVar5 = *param_1;
  }
  if (iVar5 == 2) {
    param_1[4] = 0;
  }
  else {
    lVar3 = UiLayout_UpdateAnimById(0xf5,0);
    lVar4 = UiLayout_UpdateAnimById(0xf6,0);
    if (lVar3 == 0 && lVar4 == 0) {
      param_1[4] = 0;
    }
  }
  if (param_1[6] != 0) {
    if (param_1[2] == 2) {
      param_1[6] = 0;
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0xf5);
      lVar4 = UiLayout_UpdateAnimById(0xf6,1);
      if (lVar3 == 0 && lVar4 == 0) {
        param_1[6] = 0;
      }
    }
  }
  MenuWnd_DrawCursor(1);
  if ((char)param_1[0xb] == '\0') {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    if (*piRam0036f468 == 1) {
      MenuWnd_SetItemState
                (0xf5,*(undefined4 *)
                       (&DAT_00342610 + (((param_1[0xd] - param_1[0xe]) + 0x21) % 0x21) * 0x18),0,0)
      ;
    }
  }
  else {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    if ((char)param_1[0xb] == '\x01') {
      lVar3 = UiLayout_UpdateAnimById(0xf5,2);
      if (lVar3 == 0) {
        *(undefined1 *)(param_1 + 0xb) = 0;
        iVar5 = UiMgr_FindLayout(0xf5);
        iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
        *(undefined4 *)(iVar5 + 0x338) = 0;
        if (*(int *)(iVar5 + 0x348) == 0) {
          *(undefined4 *)(iVar5 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x344) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0xf5,3);
      if (lVar3 == 0) {
        *(undefined1 *)(param_1 + 0xb) = 0;
        iVar5 = UiMgr_FindLayout(0xf5);
        iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
        *(undefined4 *)(iVar5 + 0x34c) = 0;
        if (*(int *)(iVar5 + 0x35c) == 0) {
          *(undefined4 *)(iVar5 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x358) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  MenuWnd_DrawText(0xf4,0x25,0x1f81);
  uVar8 = 0;
  puVar7 = &DAT_00342520;
  do {
    MenuWnd_DrawText(0xf4,*(undefined4 *)(puVar7 + 4),*(undefined4 *)(puVar7 + 0xc));
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 0x14;
  } while (uVar8 < 0xc);
  uVar8 = 0;
  puVar7 = &DAT_00342610;
  do {
    if (((char)param_1[0xb] == '\x01') && (uVar8 == 0xc)) {
      iVar5 = param_1[0xe] + 0x20;
    }
    else {
      iVar5 = param_1[0xe] + uVar8;
    }
    iVar5 = iVar5 % 0x21;
    MenuWnd_DrawLabel(0xf5,*(undefined4 *)(puVar7 + 8),0x3a,iVar5 + 1);
    if (iVar5 < 0x1e) {
      lVar3 = SeqGen_IsUserSong(iVar5);
      if (lVar3 == 0) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar7 + 0xc),0x1f73);
      }
      else {
        lVar3 = SeqGen_FindPatternIndex(param_1[8]);
        if (lVar3 == 0) {
          MenuWnd_DrawTextId(0xf5,*(undefined4 *)(puVar7 + 0xc),4,0x1f80);
        }
        else {
          iVar2 = UiMgr_FindLayout(0xf5);
          UiElem_GetRect(*_g_UiMgr + iVar2 * 0x4f4 + 4,auStack_40,*(undefined4 *)(puVar7 + 0xc));
          uVar6 = SeqGen_GetPartTextId(param_1[8],iVar5);
          UiText_DrawPlayerName(auStack_40,uVar6,0);
        }
      }
      if (iVar5 < 0xc) {
        iVar2 = UiMgr_FindLayout(0xf5);
        UiElem_Get(*_g_UiMgr + iVar2 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 4),0xc0,0xba,0x73);
      }
      else {
        iVar2 = UiMgr_FindLayout(0xf5);
        UiElem_Get(*_g_UiMgr + iVar2 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 4),0xc0,0xc0,0xc0);
      }
    }
    else {
      if (iVar5 == 0x20) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar7 + 0xc),0x1f72);
      }
      else if (iVar5 == 0x1f) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar7 + 0xc),0x1f71);
      }
      else if (iVar5 == 0x1e) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar7 + 0xc),0x1f70);
      }
      iVar2 = UiMgr_FindLayout(0xf5);
      UiElem_Get(*_g_UiMgr + iVar2 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 4),0x5e,0x7e,0xa3);
    }
    if (iVar5 == param_1[10]) {
      iVar5 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 0x10),8)
      ;
    }
    else {
      iVar5 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 0x10),8);
    }
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 0x18;
  } while (uVar8 < 0xd);
  UiLayout_UpdateAnimById(0xf3,0);
  iVar5 = UiMgr_FindLayout(0xf3);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0xf4);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0xf5);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  MenuNum_CountUp_Bgm(0xf6,3,4,0xfc,0x21,0xc,param_1[0xe]);
  UiLayout_UpdateAnimById(0xf6,2);
  iVar5 = UiMgr_FindLayout(0xf6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = param_1[0xd];
  if (iVar5 == 0x20) {
    uVar6 = 0x1f7f;
  }
  else if (iVar5 == 0x1f) {
    uVar6 = 0x1f7e;
  }
  else if (iVar5 == 0x1e) {
    uVar6 = 0x1f7d;
  }
  else {
    uVar6 = 0x1f7c;
  }
  MenuWnd_DrawText(0xf2,0x1b,uVar6);
  if ((param_1[0xd] < 0x1e) && (lVar3 = SeqGen_IsUserSong(), lVar3 == 0)) {
    iVar5 = UiMgr_FindLayout(0xf2);
    UiElem_SetPropInt(*_g_UiMgr + iVar5 * 0x4f4 + 4,0x1a,9,1);
  }
  else {
    iVar5 = UiMgr_FindLayout(0xf2);
    UiElem_SetPropInt(*_g_UiMgr + iVar5 * 0x4f4 + 4,0x1a,9,0);
  }
  iVar5 = UiMgr_FindLayout(0xf2);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  return;
}

// 0x002e13c0  size 0x860
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_BgmConfig_13c0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 auStack_40 [64];
  
  iVar3 = param_1[5];
  param_1[5] = 0;
  if (iVar3 == 0) {
    iVar3 = *param_1;
  }
  else {
    uVar2 = UiRes_GetLayoutData(0x3df);
    iVar3 = UiMgr_FindLayout(0xf4);
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
    uVar2 = UiRes_GetLayoutData(0x3e0);
    iVar3 = UiMgr_FindLayout(0xf4);
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
    uVar2 = UiRes_GetLayoutData(0x3e1);
    iVar3 = UiMgr_FindLayout(0xf5);
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
    uVar2 = UiRes_GetLayoutData(0x3e2);
    iVar3 = UiMgr_FindLayout(0xf5);
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
    uVar2 = UiRes_GetLayoutData(0x3e3);
    iVar3 = UiMgr_FindLayout(0xf5);
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
    uVar2 = UiRes_GetLayoutData(0x3e4);
    iVar3 = UiMgr_FindLayout(0xf5);
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
    uVar9 = 0;
    *(undefined4 *)(iVar3 + 0x358) = 1;
    puVar7 = &DAT_00342520;
    do {
      iVar3 = UiMgr_FindLayout(0xf4);
      UiElem_Get(*_g_UiMgr + iVar3 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 8),0xc0,0xc0,0xc0);
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 0x14;
    } while (uVar9 < 0xc);
    Menu_ClearSlot(0);
    uVar9 = 0;
    puVar7 = &DAT_00342610;
    do {
      iVar3 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar3 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 0x10),8);
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 0x18;
    } while (uVar9 < 0xd);
    MenuWnd_DrawDialogText(0xf5,0x36eeb0,2,0);
    iVar3 = *param_1;
  }
  if (iVar3 == 1) {
    lVar4 = UiLayout_UpdateAnimById(0xf5,0);
    if (lVar4 == 0) {
      param_1[4] = 0;
    }
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xf4,0);
    lVar5 = UiLayout_UpdateAnimById(0xf5,0);
    if (lVar4 == 0 && lVar5 == 0) {
      param_1[4] = 0;
    }
  }
  if (param_1[6] != 0) {
    if (param_1[2] == 1) {
      lVar4 = UiLayout_UpdateAnimById(0xf5);
      if (lVar4 == 0) {
        param_1[6] = 0;
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xf4);
      lVar5 = UiLayout_UpdateAnimById(0xf5,1);
      if (lVar4 == 0 && lVar5 == 0) {
        param_1[6] = 0;
      }
    }
  }
  if ((param_1[4] == 0) && (param_1[6] == 0)) {
    MenuWnd_SetItemState(0xf4,*(undefined4 *)(&DAT_00342520 + param_1[0xc] * 0x14),1,0);
  }
  MenuWnd_DrawCursor(0);
  MenuWnd_DrawText(0xf4,0x25,0x1f81);
  piVar1 = (int *)maybe_Race_GetMode();
  uVar9 = 0;
  puVar8 = &DAT_00342520;
  puVar7 = &DAT_00342610;
  do {
    MenuWnd_DrawText(0xf4,*(undefined4 *)(puVar8 + 4),*(undefined4 *)(puVar8 + 0xc));
    MenuWnd_DrawLabel(0xf5,*(undefined4 *)(puVar7 + 8),0x3a,*piVar1 + 1);
    iVar3 = *piVar1;
    if (iVar3 < 0x1e) {
      lVar4 = SeqGen_FindPatternIndex(param_1[8]);
      if (lVar4 == 0) {
        MenuWnd_DrawTextId(0xf5,*(undefined4 *)(puVar7 + 0xc),4,0x1f80);
      }
      else {
        iVar3 = UiMgr_FindLayout(0xf5);
        UiElem_GetRect(*_g_UiMgr + iVar3 * 0x4f4 + 4,auStack_40,*(undefined4 *)(puVar7 + 0xc));
        uVar6 = SeqGen_GetPartTextId(param_1[8],*piVar1);
        UiText_DrawPlayerName(auStack_40,uVar6,0);
      }
      if (*piVar1 < 0xc) {
        iVar3 = UiMgr_FindLayout(0xf5);
        UiElem_Get(*_g_UiMgr + iVar3 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 4),0xc0,0xba,0x73);
      }
      else {
        iVar3 = UiMgr_FindLayout(0xf5);
        UiElem_Get(*_g_UiMgr + iVar3 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 4),0xc0,0xc0,0xc0);
      }
    }
    else {
      if (iVar3 == 0x20) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar7 + 0xc),0x1f72);
      }
      else if (iVar3 == 0x1f) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar7 + 0xc),0x1f71);
      }
      else if (iVar3 == 0x1e) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar7 + 0xc),0x1f70);
      }
      iVar3 = UiMgr_FindLayout(0xf5);
      UiElem_Get(*_g_UiMgr + iVar3 * 0x4f4 + 4,*(undefined4 *)(puVar7 + 4),0x5e,0x7e,0xa3);
    }
    uVar9 = uVar9 + 1;
    puVar8 = puVar8 + 0x14;
    piVar1 = piVar1 + 1;
    puVar7 = puVar7 + 0x18;
  } while (uVar9 < 0xc);
  UiLayout_UpdateAnimById(0xf3,0);
  iVar3 = UiMgr_FindLayout(0xf3);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xf4);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xf5);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xf2);
  UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x1a,9,0);
  MenuWnd_DrawText(0xf2,0x1b,*(undefined4 *)(&DAT_00342530 + param_1[0xc] * 0x14));
  iVar3 = UiMgr_FindLayout(0xf2);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x002e1c30  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 44 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage44_Exit(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x002e1c50  size 0x98
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 44 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage44_Update(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_Eventui_Draw_BgmConfig_13c0_00342510)[*(int *)(param_1 + 4)])();
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  return;
}

// 0x002e1cf0  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu page 44 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage44_Enter(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0x3de);
  iVar2 = UiMgr_FindLayout(0xf3);
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

// 0x002e1d90  size 0x1d0
/* screen record 0x342748 */

void ScrSndQueueCmd1_Exit(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = param_1[3];
  param_1[3] = 0;
  if (iVar1 == 0) {
    cVar2 = *(char *)(param_1 + 9);
  }
  else {
    param_1[0xf] = 0xfffffffe;
    param_1[0x10] = 0xfffffffe;
    Snd_QueueCmd1(8);
    param_1[10] = param_1[0xd];
    *(undefined1 *)(param_1 + 9) = 1;
    SeqGen_SelectSong(param_1[8],param_1[0xd]);
    cVar2 = *(char *)(param_1 + 9);
  }
  if (cVar2 == '\x04') {
    cVar2 = Snd_IsBusy(8);
    if (cVar2 == '\0') {
      Snd_QueueCmd3(8,0,0);
      lVar3 = Snd_QueueCmd2(8,1);
      if (lVar3 != 0) {
        *(undefined1 *)(param_1 + 9) = 5;
        param_1[2] = *param_1;
      }
    }
  }
  else if (cVar2 == '\x03') {
    lVar3 = SeqGen_IsReady(param_1[8]);
    if (lVar3 == 0) {
      *(undefined1 *)(param_1 + 9) = 0;
      param_1[2] = *param_1;
    }
    else {
      cVar2 = Snd_IsBusy(8);
      if (cVar2 == '\0') {
        SeqGen_GetLoopRangeC(param_1[8],&uStack_4,&uStack_8);
        SeqGen_GetLoopRangeB(param_1[8],&uStack_c,&uStack_10);
        SeqGen_GetLoopRangeA(param_1[8],&uStack_14,&uStack_18);
        lVar3 = Snd_PlayStream(8,uStack_4,uStack_8,uStack_c,uStack_10,uStack_14,uStack_18);
        if (lVar3 != 0) {
          *(undefined1 *)(param_1 + 9) = 4;
        }
      }
    }
  }
  else if (cVar2 == '\x02') {
    lVar3 = SeqGen_StopThread(param_1[8]);
    if (lVar3 != 0) {
      *(undefined1 *)(param_1 + 9) = 3;
    }
  }
  else if ((cVar2 == '\x01') &&
          (lVar3 = SeqGen_GetPosition(param_1[8],0xffffffffffffffff), lVar3 == 0)) {
    SeqGen_StartThread(param_1[8]);
    *(undefined1 *)(param_1 + 9) = 2;
  }
  return;
}

// 0x002e1f60  size 0x27c
/* screen record 0x342748 */

void ScrSndQueueCmd1_Update(int *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  iVar2 = param_1[3];
  param_1[3] = 0;
  if ((iVar2 != 0) && (param_1[0x10] = 0, *param_1 != 2)) {
    *(undefined1 *)(param_1 + 9) = 0;
    param_1[10] = -1;
    iVar2 = maybe_Race_GetMode();
    param_1[0xd] = *(int *)(iVar2 + param_1[0xc] * 4);
    param_1[0xe] = ((param_1[0xd] - param_1[0xc]) + 0x21) % 0x21;
  }
  Menu_HandleCursor(param_1 + 0xd,0,2,0x20,1,0);
  iVar2 = param_1[0xd];
  iVar1 = param_1[0xe];
  if ((iVar2 + 1) % 0x21 == iVar1) {
    param_1[0xe] = iVar2;
    *(undefined1 *)(param_1 + 0xb) = 2;
  }
  else if ((iVar1 + 0xc) % 0x21 == iVar2) {
    param_1[0xe] = (iVar1 + 1) % 0x21;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  if ((param_1[0xd] < 0x1e) && (lVar3 = SeqGen_IsUserSong(), lVar3 == 0)) {
    param_1[0xf] = -2;
  }
  else {
    param_1[0xf] = 0;
  }
  uVar4 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 0x1000) {
    lVar3 = SeqGen_FindPatternIndex(param_1[8]);
    if (((lVar3 == 0) || (0x1d < param_1[0xd])) || (lVar3 = SeqGen_IsUserSong(), lVar3 == 0)) {
      Se_PlayMenu(8);
    }
    else if (param_1[0xd] == param_1[10]) {
      Snd_QueueCmd1(8);
      param_1[10] = -1;
      *(undefined1 *)(param_1 + 9) = 0;
    }
    else {
      param_1[2] = 2;
    }
  }
  else if (uVar4 == 0x20) {
    Snd_QueueCmd1(8);
  }
  else if (uVar4 == 0x10) {
    if (param_1[0xf] == 0) {
      Race_SetCarSlot(param_1[0xc],param_1[0xd]);
      if ((char)param_1[9] == '\x05') {
        Snd_QueueCmd1(8);
        *(undefined1 *)(param_1 + 9) = 0;
      }
    }
    else {
      Se_PlayMenu(8);
    }
  }
  return;
}

// 0x002e21e0  size 0x58
/* screen record 0x342748 */

void ScrSndQueueCmd1_Enter(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  Menu_HandleCursor(param_1 + 0x30,0,2,0xb,1,0);
  return;
}

// 0x002e2250  size 0x22c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* menu screen 44 (table 0x3274b0) */

void maybe_ScrMusic_Update(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)param_1;
  lVar2 = SeqGen_FindPatternIndex(*(undefined4 *)(iVar4 + 0x20));
  if ((lVar2 != 0) && (lVar2 = Menu_IsInputIdle(param_1), lVar2 != 0)) {
    (*(code *)(&PTR_ScrSndQueueCmd1_Enter_00342748)[*(int *)(iVar4 + 4)])(param_1);
    uVar5 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar5) == 0) {
      uVar5 = 0x100000;
    }
    else if (uVar5 == 0x80000) {
      uVar5 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar5 = 0x100000;
    }
    if (uVar5 == 0x20) {
      if (*(int *)(iVar4 + 0x40) == -2) {
        iVar3 = *(int *)(iVar4 + 0x40);
      }
      else {
        Se_PlayMenu(6);
        iVar3 = *(int *)(iVar4 + 0x40);
      }
      if (iVar3 < 0) {
        if (iVar3 == -1) {
          cVar1 = RaceCtx_GetMode();
          if ((cVar1 == '\b') && (lVar2 = RaceCtx_Get_4(), lVar2 == 2)) {
            MenuMgr_GetScreenParam(0xfffffffffffffffc);
          }
          else {
            MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
          }
        }
      }
      else {
        *(int *)(iVar4 + 8) = iVar3;
      }
    }
    else if (uVar5 == 0x10) {
      if (*(int *)(iVar4 + 0x3c) == -2) {
        iVar3 = *(int *)(iVar4 + 0x3c);
      }
      else {
        Se_PlayMenu(5);
        iVar3 = *(int *)(iVar4 + 0x3c);
      }
      if (iVar3 < 0) {
        if (iVar3 == -1) {
          cVar1 = RaceCtx_GetMode();
          if ((cVar1 == '\b') && (lVar2 = RaceCtx_Get_4(), lVar2 == 2)) {
            MenuMgr_GetScreenParam(0xfffffffffffffffc);
          }
          else {
            MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
          }
        }
      }
      else {
        *(int *)(iVar4 + 8) = iVar3;
      }
    }
    Menu_RequestTransition(param_1);
  }
  return;
}

// 0x002e2480  size 0xb0
/* menu screen 44 (table 0x3274b0) */

void maybe_ScrMusic_Enter(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  Snd_QueueCmd2d(8,0x100);
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 1;
  param_1[7] = 0;
  param_1[5] = 1;
  param_1[3] = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[8] = 0;
  lVar2 = Script_Nop();
  if (lVar2 == 0) {
    SeqGen_Init(0x430750,0,0xffff);
  }
  uVar1 = Script_Nop();
  param_1[8] = uVar1;
  return;
}

// 0x002e2530  size 0x118
void maybe_JukeboxTask_Draw(void)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = SndMgr_GetInstance();
  UiMgr_DrawAll(1);
  uVar4 = Script_Nop();
  lVar5 = SeqGen_FindPatternIndex(uVar4);
  if (lVar5 != 0) {
    uVar4 = Script_Nop();
    lVar5 = SeqGen_GetPosition(uVar4,0xffffffffffffffff);
    if (lVar5 == 0) {
      uVar3 = SndMgr_GetSlot(uVar3,4);
      lVar5 = (**(code **)(*(int *)uVar3 + 0x2c))(uVar3);
      if (lVar5 == 0) {
        lVar5 = Misc_Nop();
        if ((lVar5 == 0) && (lVar5 = maybe_RaceResult_GetCategory(), lVar5 != 0)) {
          uVar3 = Profile_Get(0);
          uVar4 = GameState_GetCurrentRecordValue();
          sVar2 = Profile_GetRivalTotalRaces(uVar3,uVar4);
          if ((sVar2 == 0) && (cVar1 = RaceCtx_GetMode(), cVar1 != '\x05')) {
            Scene_SetParam(3);
            return;
          }
        }
        Scene_SetParam(0);
      }
    }
  }
  return;
}

// 0x002e2650  size 0x2c
void maybe_JukeboxTask_Exit(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  SeqGen_Shutdown();
  maybe_Heap_Release(iVar1 + 8);
  return;
}

// 0x002e2680  size 0xc4
void maybe_JukeboxTask_Load(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  SndMgr_GetInstance();
  UiMgr_DrawAll(1);
  lVar3 = SndMgr_IsIdle();
  if (lVar3 != 0) {
    Sema_Wait(0x36efc0);
    iVar2 = iRam00386628;
    Sema_Signal(0x36efc0,0);
    if ((iVar2 == 0) && (*(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1, *(int *)(iVar1 + 4) < 0)) {
      uVar4 = maybe_File_GetSectorCount(&uStack_4);
      maybe_Heap_CreateFromBuffer(iVar1 + 8,uVar4,uStack_4);
      maybe_Jukebox_PickSong(iVar1);
      *(code **)(param_1 + 0x1c) = maybe_JukeboxTask_Draw;
    }
  }
  return;
}

// 0x002e2750  size 0xac
void maybe_JukeboxTask_Init(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = SndMgr_GetInstance();
  *(undefined4 *)(iVar1 + 4) = 0x3c;
  uVar3 = SndMgr_GetSlot(uVar2,4);
  (**(code **)(*(int *)uVar3 + 0x1c))(uVar3);
  uVar3 = SndMgr_GetSlot(uVar2,0);
  (**(code **)(*(int *)uVar3 + 0x1c))(uVar3);
  uVar3 = SndMgr_GetSlot(uVar2,1);
  (**(code **)(*(int *)uVar3 + 0x1c))(uVar3);
  SndMgr_PauseAll(uVar2);
  *(code **)(param_1 + 0x1c) = maybe_JukeboxTask_Load;
  return;
}

// 0x002e2800  size 0x2b4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Jukebox_PickSong(int param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_a0 [3];
  char cStack_9d;
  undefined1 auStack_50 [2];
  char cStack_4e;
  
  GameState_LoadHeader(auStack_50);
  GameState_LoadHeader(auStack_a0);
  cVar3 = RaceCtx_GetMode();
  if ((cVar3 == '\x05') || ((_g_RaceScene != 0 && (lVar5 = RaceScene_IsFlag10(), lVar5 != 0)))) {
    iVar7 = 10;
    if (cStack_9d != '\0') {
      iVar7 = 0xb;
    }
  }
  else if ((cStack_4e == '\x01') || (cStack_4e == '\x04')) {
    iVar7 = 3;
    if (cStack_9d != '\0') {
      iVar7 = 8;
    }
  }
  else if ((cStack_4e == '\x02') || (cStack_4e == '\x05')) {
    iVar7 = 4;
    if (cStack_9d != '\0') {
      iVar7 = 9;
    }
  }
  else if (cStack_9d == '\0') {
    iVar7 = maybe_Rand_Float();
    iVar7 = iVar7 % 3;
  }
  else {
    iVar7 = maybe_Rand_Float();
    iVar7 = iVar7 % 3 + 5;
  }
  iVar4 = maybe_Race_GetMode();
  uVar9 = *(uint *)(iVar4 + iVar7 * 4);
  uVar2 = DAT_0036eebc;
  if (uVar9 == 0x21) {
    uVar9 = *(uint *)(iVar7 * 4 + 0x342780);
  }
  else if (uVar9 == 0x1e) {
    iVar4 = 0;
    iVar7 = 0;
    do {
      lVar5 = SeqGen_IsUserSong(iVar7);
      if (lVar5 != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x1e);
    do {
      iVar7 = maybe_Rand_Float();
      iVar7 = iVar7 % iVar4;
      uVar8 = 0;
      while ((lVar5 = SeqGen_IsUserSong(uVar8), lVar5 == 0 ||
             (bVar1 = 0 < iVar7, iVar7 = iVar7 + -1, bVar1))) {
        uVar8 = uVar8 + 1;
        uVar2 = DAT_0036eebc;
        uVar9 = 0;
        if (0x1d < (int)uVar8) goto LAB_002e2904;
      }
      uVar2 = uVar8;
      uVar9 = uVar8;
    } while (uVar8 == DAT_0036eebc);
  }
  else if (uVar9 == 0x20) {
    uVar9 = 0xff;
  }
  else if (uVar9 == 0x1f) {
    do {
      DAT_0036eeb8 = DAT_0036eeb8 + 1;
      if ((int)DAT_0036eeb8 < 0) {
        DAT_0036eeb8 = 0x1d;
      }
      else if (0x1d < (int)DAT_0036eeb8) {
        DAT_0036eeb8 = 0;
      }
      lVar5 = SeqGen_IsUserSong();
      uVar2 = DAT_0036eebc;
      uVar9 = DAT_0036eeb8;
    } while (lVar5 == 0);
  }
LAB_002e2904:
  DAT_0036eebc = uVar2;
  SeqGen_Init(param_1 + 8,0,1 << (uVar9 & 0x1f) & 0xffff);
  uVar6 = SndMgr_GetInstance();
  uVar6 = SndMgr_GetSlot(uVar6,4);
  lVar5 = Misc_Nop();
  if (lVar5 == 0) {
    (**(code **)(*(int *)uVar6 + 0x28))(uVar6,uVar9 & 0xff);
  }
  return;
}

// 0x002e2ac0  size 0x418
/* WARNING: Removing unreachable block (ram,0x002e2c84) */
/* WARNING: Removing unreachable block (ram,0x002e2d78) */

void maybe_IntroFlag_Update(int param_1)

{
  float *pfVar1;
  uint *puVar2;
  uint *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort *puVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uStack_40;
  uint *puStack_30;
  undefined1 auStack_14 [4];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (((puRam0036f8ec[1] != 0) && (puRam0036f8ec[2] != 0)) && (puRam0036f8ec[3] != 0)) {
    uVar6 = Gut_PackGetEntry(puRam0036f8ec[2],param_1 + 2,0);
    puVar2 = (uint *)Model_GetTexture(uVar6,0);
    if ((*puVar2 & 0x10) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = puVar2 + 0x14;
    }
    puStack_30 = puVar2 + 0xc;
    uVar6 = Gut_PackGetEntry(puRam0036f8ec[2],param_1 + (*puRam0036f8ec & 1),0);
    puVar3 = (uint *)Model_GetTexture(uVar6,0);
    if ((*puVar3 & 0x10) == 0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = puVar3 + 0x14;
    }
    puVar3 = puVar3 + 0xc;
    uStack_40 = 0;
    if (puVar2[3] != 0) {
      do {
        puVar4 = (ushort *)Model_SkipNops(puStack_30 + 0x1c);
        puVar5 = (ushort *)Model_SkipNops(puVar3 + 0x1c);
        *(undefined1 *)((int)puVar3 + 0xd) = 0xf;
        uVar10 = 0;
        if (puStack_30[0x1d] != 0) {
          do {
            pfVar9 = (float *)(puVar4 + 0x20);
            puVar8 = puVar5 + 0x20;
            maybe_Math_AngleToIndex
                      (((float)(*puRam0036f8ec & 0x7f) / 128.0) * 6.2831855,auStack_14,&fStack_4);
            uVar7 = 0;
            if (*(int *)(puVar4 + 6) != 0) {
              do {
                fVar13 = (*pfVar9 - (float)puVar2[4]) / ((float)puVar2[8] - (float)puVar2[4]);
                fVar12 = fVar13 - 0.6;
                fVar11 = (pfVar9[1] - (float)puVar2[5]) / ((float)puVar2[9] - (float)puVar2[5]) -
                         0.3;
                maybe_Math_AngleToIndex
                          (((float)(*puRam0036f8ec & 0x3f) / 64.0) * 6.2831855 +
                           SQRT(fVar12 * fVar12 + fVar11 * fVar11 * fVar11 * fVar11 * fVar11) *
                           6.2831855,auStack_14,&fStack_8);
                maybe_Math_AngleToIndex(fVar13 * 3.1415927,auStack_14,&fStack_c);
                maybe_Math_AngleToIndex(fStack_4 * 3.1415927,auStack_14,&fStack_10);
                uVar7 = uVar7 + 1;
                pfVar1 = pfVar9 + 1;
                pfVar9 = pfVar9 + 3;
                *(float *)(puVar8 + 2) = fStack_10 * 0.25 * fStack_c * 0.375 + *pfVar1 + 0.0;
                *(float *)(puVar8 + 4) = fStack_8 * fStack_c * 0.375;
                puVar8 = puVar8 + 6;
              } while (uVar7 < *(uint *)(puVar4 + 6));
            }
            uVar10 = uVar10 + 1;
            puVar4 = puVar4 + (*puVar4 + 1) * 8;
            puVar5 = puVar5 + (*puVar5 + 1) * 8;
          } while (uVar10 < puStack_30[0x1d]);
        }
        uStack_40 = uStack_40 + 1;
        puStack_30 = puStack_30 + (puStack_30[0x1e] + 1) * 4 + 0x28;
        puVar3 = puVar3 + (puVar3[0x1e] + 1) * 4 + 0x28;
      } while (uStack_40 < puVar2[3]);
    }
  }
  return;
}

// 0x002e2ee0  size 0x3dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_IntroFlag_Draw(uint param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  short *psVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  undefined1 *puVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_270 [16];
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  undefined1 auStack_240 [192];
  undefined1 auStack_180 [384];
  
  iVar7 = (param_1 & 0xff) * 0x5c0;
  puVar8 = &g_Views + iVar7;
  bVar2 = false;
  if (((puRam0036f8ec[1] != 0) && (puRam0036f8ec[2] != 0)) && (puRam0036f8ec[3] != 0)) {
    Layer_Reset(auStack_240,puVar8,0x436180,param_2,param_3);
    piVar5 = (int *)puRam0036f8ec[3];
    iVar10 = 0;
    if (0 < *piVar5) {
      iVar11 = 0;
      do {
        psVar1 = *(short **)
                  (*(int *)(_g_RoadData + 4) + (uint)*(ushort *)((int)piVar5 + iVar11 + 0x10) * 4);
        pfVar9 = (float *)(psVar1 + *psVar1 * 0x10 +
                                    *(int *)((int)piVar5 + iVar11 + 0x14) * 6 + 0x3e);
        if (*(int *)((int)piVar5 + iVar11 + 0x18) == 0) {
          uVar3 = Gut_PackGetEntry(puRam0036f8ec[2],*puRam0036f8ec & 1,0);
          puVar6 = puRam0036f8ec + *(int *)((int)piVar5 + iVar11 + 0x1c) * 0x20 + 4;
        }
        else {
          uVar3 = Gut_PackGetEntry(puRam0036f8ec[2],(*puRam0036f8ec & 1) + 4,0);
          puVar6 = puRam0036f8ec + *(int *)((int)piVar5 + iVar11 + 0x1c) * 0x20 + 0x44;
        }
        TexSlot_Set(0xf,1,puVar6);
        uStack_244 = 0x3f800000;
        fStack_248 = *(float *)((int)piVar5 + iVar11 + 0x28) * 0.017453292;
        fStack_260 = *(float *)((int)piVar5 + iVar11 + 0x30) * 10.0 + *pfVar9 + 0.0;
        fStack_250 = *(float *)((int)piVar5 + iVar11 + 0x20) * 0.017453292;
        fStack_25c = *(float *)((int)piVar5 + iVar11 + 0x34) * 10.0 + pfVar9[1] + 0.0;
        fStack_24c = *(float *)((int)piVar5 + iVar11 + 0x24) * 0.017453292;
        uStack_254 = 0x3f800000;
        fStack_258 = *(float *)((int)piVar5 + iVar11 + 0x38) * 10.0 + pfVar9[2] + 0.0;
        if (((*(int *)((int)piVar5 + iVar11 + 0x18) == 0) && (param_4 == 0)) &&
           (fStack_24c = fStack_24c + 3.1415927, 3.1415927 < fStack_24c)) {
          fStack_24c = fStack_24c - 6.2831855;
        }
        fVar12 = (float)maybe_sceVu0InterVectorDist(auStack_270,&fStack_260,puVar8);
        if (((fVar12 <= *(float *)(iVar7 + 0x4311a4) * 1.1547005) &&
            (fVar13 = (float)sceVu0InnerProduct(iVar7 + 0x431140,auStack_270),
            -20.0 <= fVar12 * fVar13)) &&
           (lVar4 = Course_GetGroundHeight(puVar8,&fStack_260), lVar4 != 0)) {
          if (!bVar2) {
            Layer_Open(auStack_240,0);
            bVar2 = true;
          }
          maybe_Vu0_UnitMatrix(auStack_180);
          maybe_Vu0_RotMatrixZ(fStack_250,auStack_180,auStack_180);
          maybe_Vu0_RotMatrixY(fStack_24c,auStack_180,auStack_180);
          maybe_Vu0_RotMatrixX(fStack_248,auStack_180,auStack_180);
          sceVu0TransMatrix(auStack_180,auStack_180,&fStack_260);
          uVar3 = Model_GetTexture(uVar3,0);
          Model_UpdateNodeMatrix(auStack_240,uVar3);
        }
        iVar10 = iVar10 + 1;
        piVar5 = (int *)puRam0036f8ec[3];
        iVar11 = iVar11 + 0x30;
      } while (iVar10 < *piVar5);
    }
    if (bVar2) {
      Layer_Close(auStack_240,0);
    }
  }
  return;
}

// 0x002e32c0  size 0x140
void maybe_IntroFlag_OnLoaded(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  uVar1 = *(undefined4 *)(iRam0036f8ec + 8);
  do {
    uVar2 = Gut_PackGetEntry(uVar1,iVar7,0);
    uVar3 = Gut_PackGetEntry(uVar1,iVar7 + 1,0);
    uVar4 = Gut_PackGetEntry(uVar1,iVar7 + 2,0);
    uVar5 = Gut_PackGetEntry(uVar1,iVar7 + 3,0);
    Model_Relocate(uVar2);
    Model_Relocate(uVar3);
    Model_Relocate(uVar4);
    Tex_Relocate(uVar5);
    TexSlot_Bind(iRam0036f8ec + iVar6 + 0x10,uVar5,0,iRam0036f2c0 + iRam004305f0,
                 iRam0036f2c0 + iRam004305f0,0x51010,0,0);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar8 < 2);
  *(undefined4 *)(iRam0036f8ec + 4) = 1;
  return;
}

// 0x002e3400  size 0x3c
void maybe_IntroFlag_Step(void)

{
  if (piRam0036f8ec != (int *)0x0) {
    *piRam0036f8ec = *piRam0036f8ec + 1;
    maybe_IntroFlag_Update(0);
    maybe_IntroFlag_Update(4);
  }
  return;
}

// 0x002e3440  size 0x34
void maybe_IntroFlag_DrawAll(int param_1,undefined8 param_2)

{
  if (iRam0036f8ec != 0) {
    maybe_IntroFlag_Draw
              (*(undefined1 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),param_2);
  }
  return;
}

// 0x002e3480  size 0x74
void IntroFlag_Free(void)

{
  if (iRam0036f8ec != 0) {
    if (*(int *)(iRam0036f8ec + 8) != 0) {
      Mem_Free();
      *(undefined4 *)(iRam0036f8ec + 8) = 0;
    }
    if (*(int *)(iRam0036f8ec + 0xc) != 0) {
      Mem_Free();
      *(undefined4 *)(iRam0036f8ec + 0xc) = 0;
    }
  }
  if (iRam0036f8ec != 0) {
    Mem_Free();
    iRam0036f8ec = 0;
  }
  return;
}

// 0x002e3500  size 0x170
void IntroFlag_Load(undefined8 param_1,int param_2,byte param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_3 < 8) {
    puRam0036f8ec = (undefined4 *)Mem_Alloc16(0x210,param_1);
    *puRam0036f8ec = 0;
    puRam0036f8ec[1] = 0;
    puRam0036f8ec[2] = 0;
    puRam0036f8ec[3] = 0;
    uVar1 = *(undefined4 *)(&DAT_00342850 + (uint)param_3 * 4);
    iVar4 = *(int *)(&DAT_003427b0 + param_2 * 4) +
            *(int *)((param_4 & 0xff) * 4 + (param_5 & 0xff) * 0x18 + 0x342870);
    uVar3 = Arc_GetFileSize(iVar4,iVar4,1);
    uVar2 = Mem_AllocAligned(uVar3,0x40,0x430750);
    puRam0036f8ec[2] = uVar2;
    Arc_LoadFileEx(iVar4,puRam0036f8ec[2],0,0,0,0);
    uVar3 = Arc_GetFileSize(uVar1,uVar1,1);
    uVar2 = Mem_AllocAligned(uVar3,0x40,0x430750);
    puRam0036f8ec[3] = uVar2;
    Arc_LoadFileEx(uVar1,puRam0036f8ec[3],0x2e32c0,puRam0036f8ec,0,0);
  }
  return;
}

// 0x002e3670  size 0x360
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Akagi(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_40 [64];
  
  lVar2 = Nameentry_GetField_4_8200();
  if (lVar2 != 9) {
    UiLayout_UpdateAnimById(8,4);
  }
  uVar6 = 0;
  puVar5 = &DAT_003428f0;
  do {
    if ((*(int *)(param_1 + 0x68) == 1) && (uVar6 == 0xc)) {
      iVar4 = *(int *)(param_1 + 0x58) + 0x1d;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x58) + uVar6;
    }
    iVar4 = iVar4 % 0x1e;
    MenuWnd_DrawLabel(8,puVar5[3],5,0,iVar4 + 1);
    lVar2 = SeqGen_IsUserSong(iVar4);
    if (lVar2 == 0) {
      MenuWnd_DrawText(8,puVar5[4],6);
    }
    else {
      lVar2 = SeqGen_FindPatternIndex(*(undefined4 *)(param_1 + 0x20));
      if (lVar2 == 0) {
        MenuWnd_DrawTextId(8,puVar5[4],4,7);
      }
      else {
        iVar1 = UiMgr_FindLayout(8);
        UiElem_GetRect(*_g_UiMgr + iVar1 * 0x4f4 + 4,auStack_40,puVar5[4]);
        uVar3 = SeqGen_GetPartTextId(*(undefined4 *)(param_1 + 0x20),iVar4);
        UiText_DrawPlayerName(auStack_40,uVar3,0);
      }
    }
    if (iVar4 < 0xc) {
      iVar1 = UiMgr_FindLayout(8);
      UiElem_Get(*_g_UiMgr + iVar1 * 0x4f4 + 4,puVar5[2],0xc0,0xba,0x73);
    }
    else {
      iVar1 = UiMgr_FindLayout(8);
      UiElem_Get(*_g_UiMgr + iVar1 * 0x4f4 + 4,puVar5[2],0xc0,0xc0,0xc0);
    }
    if (*(int *)(param_1 + iVar4 * 4 + 0x7c) == 0) {
      iVar1 = UiMgr_FindLayout(7);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar5,8);
    }
    else {
      iVar1 = UiMgr_FindLayout(7);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,*puVar5,8);
    }
    if (iVar4 == *(int *)(param_1 + 0x70)) {
      iVar1 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,puVar5[5],8);
    }
    else {
      iVar1 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,puVar5[5],8);
    }
    if (iVar4 != *(int *)(param_1 + 0x54)) {
      iVar4 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar4 * 0x4f4 + 4,puVar5[6],8);
    }
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 7;
  } while (uVar6 < 0xd);
  MenuNum_CountUp_Event(7,3,4,0xfc,0x1e,0xc,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
  return;
}

// 0x002e39e0  size 0x250
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ComposerUi_AnimateNameA(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x68) == 0) {
    lVar2 = Nameentry_GetField_14();
    if ((lVar2 == 0) && (lVar2 = Nameentry_GetField_18(param_1), lVar2 == 0)) {
      ComposerInput_SetMode(1);
      MenuWnd_SetItemState
                (8,*(undefined4 *)
                    (&DAT_003428f4 +
                    (((*(int *)(iVar1 + 0x60) - *(int *)(iVar1 + 0x58)) + 0x1e) % 0x1e) * 0x1c),0,0)
      ;
    }
  }
  else {
    ComposerInput_SetMode(0);
    if (*(int *)(iVar1 + 0x68) == 1) {
      lVar2 = UiLayout_UpdateAnimById(7,6);
      lVar3 = UiLayout_UpdateAnimById(8,2);
      if (lVar2 == 0 && lVar3 == 0) {
        *(undefined4 *)(iVar1 + 0x68) = 0;
        iVar1 = UiMgr_FindLayout(7);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x388) = 0;
        if (*(int *)(iVar1 + 0x398) == 0) {
          *(undefined4 *)(iVar1 + 0x394) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x394) = 1;
        }
        iVar1 = UiMgr_FindLayout(8);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x338) = 0;
        if (*(int *)(iVar1 + 0x348) == 0) {
          *(undefined4 *)(iVar1 + 0x344) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x344) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      lVar2 = UiLayout_UpdateAnimById(7,7);
      lVar3 = UiLayout_UpdateAnimById(8,3);
      if (lVar2 == 0 && lVar3 == 0) {
        *(undefined4 *)(iVar1 + 0x68) = 0;
        iVar1 = UiMgr_FindLayout(7);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x39c) = 0;
        if (*(int *)(iVar1 + 0x3ac) == 0) {
          *(undefined4 *)(iVar1 + 0x3a8) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x3a8) = 1;
        }
        iVar1 = UiMgr_FindLayout(8);
        iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
        *(undefined4 *)(iVar1 + 0x34c) = 0;
        if (*(int *)(iVar1 + 0x35c) == 0) {
          *(undefined4 *)(iVar1 + 0x358) = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x358) = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  return;
}

// 0x002e3c30  size 0x278
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Hakone(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = Composer_ConsumeConfirm();
  if (lVar2 != 0) {
    MenuWnd_SetItemVisible(0);
    Composer_ShowPanel(0);
  }
  lVar2 = Nameentry_Draw_Rokko(7,0xffffffffffffffff);
  if (lVar2 == 1) {
    Composer_ClearDirty(param_1);
  }
  lVar3 = Nameentry_GetField_18(param_1);
  if (lVar3 != 0) {
    if (lVar2 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar2 == 3) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  Composer_DrawLabel(0xffffffffffffffff,0);
  MenuWnd_DrawText(7,0x45,1);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x70) == -1) ||
     ((lVar2 = Nameentry_GetField_4_8200(param_1), lVar2 == 1 &&
      (*(int *)(iVar1 + 0x60) != *(int *)(iVar1 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar1 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  lVar2 = ComposerScene_IsChanging();
  if (lVar2 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar1 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x8f,8);
    iVar1 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x90,8);
  }
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x002e3eb0  size 0x300
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Eventui_Draw_Hakone_3eb0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = Composer_ConsumeConfirm();
  if (lVar3 != 0) {
    MenuWnd_SetItemVisible(0);
    Composer_ShowPanel(0);
  }
  iVar2 = (int)param_1;
  uVar5 = 0;
  cVar1 = Composer_GetSlotLabel(param_1,*(undefined1 *)(iVar2 + 100));
  if (cVar1 == '\x04') {
    uVar5 = 0x30;
  }
  else if (cVar1 == '\x03') {
    lVar3 = Nameentry_Nop_2(param_1);
    if (lVar3 == 6) {
      uVar5 = 0x2f;
    }
    else if (lVar3 == 2) {
      uVar5 = 0x2c;
    }
  }
  else if (cVar1 == '\x02') {
    lVar3 = Nameentry_Nop_2(param_1);
    if (lVar3 == 7) {
      uVar5 = 0x31;
    }
    else {
      uVar5 = 0x2b;
    }
  }
  else if (cVar1 == '\x01') {
    uVar5 = 0x2d;
  }
  else {
    uVar5 = 0;
  }
  lVar3 = Nameentry_Draw_Rokko(uVar5,0xffffffffffffffff);
  if (lVar3 == 1) {
    Composer_ClearDirty(param_1);
  }
  lVar4 = Nameentry_GetField_18(param_1);
  if (lVar4 != 0) {
    if (lVar3 == 1) {
      Composer_RequestRedraw();
    }
    if (lVar3 == 3) {
      Composer_ConsumeRedraw(param_1);
    }
  }
  Composer_DrawLabel(0xffffffffffffffff,3);
  MenuWnd_DrawText(7,0x45,1);
  if ((*(int *)(iVar2 + 0x70) == -1) ||
     ((lVar3 = Nameentry_GetField_4_8200(param_1), lVar3 == 1 &&
      (*(int *)(iVar2 + 0x60) != *(int *)(iVar2 + 0x70))))) {
    MenuWnd_DrawText(7,0x46,0x17);
  }
  else {
    MenuWnd_DrawText(7,0x46,0x18);
  }
  MenuWnd_DrawText(7,0x47,0x19);
  MenuWnd_DrawText(7,0x48,0x1a);
  MenuWnd_DrawText(7,0x49,0x1b);
  MenuWnd_DrawText(7,0x4a,0x1c);
  MenuWnd_DrawText(7,0x4b,4);
  Eventui_Draw_Akagi(param_1);
  UiLayout_UpdateAnimById(7,8);
  iVar2 = UiMgr_FindLayout(7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  lVar3 = ComposerScene_IsChanging();
  if (lVar3 == 0) {
    UiLayout_UpdateAnimById(8,5);
    UiLayout_UpdateAnimById(8,6);
  }
  else {
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x8f,8);
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x90,8);
  }
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

