// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002e0000 - 0x002e4000
#include "ghidra_types.h"

// 0x002e0040  size 0x320
void MenuNum_CountUp_Bgm(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                        ulong param_5,ulong param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  
  if (param_6 < param_5) {
    uVar1 = (int)(param_4 * (int)param_6) / (int)param_5;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    if ((float)(param_4 + 0x10) <
        (float)((int)(param_7 * param_4) / (int)param_5 + 0x10) + (float)uVar1) {
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo);
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetNumber(&g_UiMgr->slots[iVar2].layout,param_3,2,0x10);
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,6,0);
    }
    else {
      iVar2 = UiMgr_FindLayout(param_1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_3,8,extraout_a3_lo_01);
    }
  }
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,2,extraout_a3_lo_00);
  iVar2 = UiMgr_FindLayout(param_1);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,param_2,6,(byte)g_UiMgr);
  return;
}

// 0x002e0360  size 0x504
void Eventui_Draw_BgmConfig(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined *puVar5;
  uint uVar6;
  undefined4 auStack_40 [16];
  
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
          UiElem_GetRect(&g_UiMgr->slots[iVar1].layout,auStack_40,(long)*(int *)(puVar5 + 0xc));
          uVar3 = SeqGen_GetPartTextId(*(undefined4 *)(param_1 + 0x20),iVar4);
          UiText_DrawPlayerName(auStack_40,uVar3,0);
        }
      }
      if (iVar4 < 0xc) {
        iVar1 = UiMgr_FindLayout(0xf5);
        UiElem_Get(&g_UiMgr->slots[iVar1].layout,*(int *)(puVar5 + 4),0xc0,0xba,0x73);
      }
      else {
        iVar1 = UiMgr_FindLayout(0xf5);
        UiElem_Get(&g_UiMgr->slots[iVar1].layout,*(int *)(puVar5 + 4),0xc0,0xc0,0xc0);
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
      UiElem_Get(&g_UiMgr->slots[iVar1].layout,*(int *)(puVar5 + 4),0x5e,0x7e,0xa3);
    }
    if (iVar4 == *(int *)(param_1 + 0x28)) {
      iVar4 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*(int *)(puVar5 + 0x10),8,
                          extraout_a3_lo);
    }
    else {
      iVar4 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*(int *)(puVar5 + 0x10),8,
                          extraout_a3_lo_00);
    }
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 0x18;
  } while (uVar6 < 0xd);
  UiLayout_UpdateAnimById((UiLayout *)0xf3,0);
  iVar4 = UiMgr_FindLayout(0xf3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xf4);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xf5);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  MenuNum_CountUp_Bgm(0xf6,3,4,0xfc,0x21,0xc,*(undefined4 *)(param_1 + 0x38));
  UiLayout_UpdateAnimById((UiLayout *)0xf6,2);
  iVar4 = UiMgr_FindLayout(0xf6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xf2);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x1a,9,3);
  iVar4 = UiMgr_FindLayout(0xf2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x002e0870  size 0xc
/* follows Eventui_Draw_BgmConfig; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Eventui_Draw_BgmConfig_Orphan1(void)

{
  return;
}

// 0x002e0880  size 0xb20
void Eventui_Draw_BgmConfig_0880(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  undefined *puVar9;
  uint uVar10;
  undefined4 auStack_40 [16];
  
  iVar7 = param_1[5];
  param_1[5] = 0;
  if (iVar7 == 0) {
    iVar7 = *param_1;
  }
  else {
    uVar10 = UiRes_GetLayoutData(0x3e1);
    iVar7 = UiMgr_FindLayout(0xf5);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar10;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x3e2);
    iVar7 = UiMgr_FindLayout(0xf5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar4;
    pUVar1[iVar7].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x3e3);
    iVar7 = UiMgr_FindLayout(0xf5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x3e4);
    iVar7 = UiMgr_FindLayout(0xf5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
    uVar10 = UiRes_GetLayoutData(0x3e5);
    iVar7 = UiMgr_FindLayout(0xf6);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar7].layout.unk_310 = 0xffffffff;
    pUVar1[iVar7].layout.unk_31c = 0;
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    pUVar1[iVar7].layout.unk_30c = 0;
    if (pUVar1[iVar7].layout.unk_31c == 0) {
      pUVar1[iVar7].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar7].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x314 = 0;
    pUVar1[iVar7].layout.unk_31c = uVar10;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x3e6);
    iVar7 = UiMgr_FindLayout(0xf6);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x330 == 0) {
      pUVar1[iVar7].layout.animState = 0;
    }
    else {
      pUVar1[iVar7].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar4;
    pUVar1[iVar7].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(999);
    iVar7 = UiMgr_FindLayout(0xf6);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x33c = 1;
    uVar10 = 0;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x344 = uVar4;
    puVar9 = &DAT_00342520;
    *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
    do {
      if (uVar10 != param_1[0xc]) {
        iVar7 = UiMgr_FindLayout(0xf4);
        UiElem_Get(&g_UiMgr->slots[iVar7].layout,*(int *)(puVar9 + 8),0x53,0x5a,0x4b);
      }
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 0x14;
    } while (uVar10 < 0xc);
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
    iVar7 = *param_1;
  }
  if (iVar7 == 2) {
    param_1[4] = 0;
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf5,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xf6,0);
    if (!bVar2 && !bVar3) {
      param_1[4] = 0;
    }
  }
  if (param_1[6] != 0) {
    if (param_1[2] == 2) {
      param_1[6] = 0;
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf5,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xf6,1);
      if (!bVar2 && !bVar3) {
        param_1[6] = 0;
      }
    }
  }
  MenuWnd_DrawCursor(1);
  if ((char)param_1[0xb] == '\0') {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    if (*g_MenuInput == 1) {
      MenuWnd_SetItemState
                (0xf5,*(undefined4 *)
                       (&DAT_00342610 + (((param_1[0xd] - param_1[0xe]) + 0x21) % 0x21) * 0x18),0,0)
      ;
    }
  }
  else {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    if ((char)param_1[0xb] == '\x01') {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf5,2);
      if (!bVar2) {
        *(undefined1 *)(param_1 + 0xb) = 0;
        iVar7 = UiMgr_FindLayout(0xf5);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x340 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf5,3);
      if (!bVar2) {
        *(undefined1 *)(param_1 + 0xb) = 0;
        iVar7 = UiMgr_FindLayout(0xf5);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar7].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar7].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar7].layout.field_0x354 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  MenuWnd_DrawText(0xf4,0x25,0x1f81);
  uVar10 = 0;
  puVar9 = &DAT_00342520;
  do {
    MenuWnd_DrawText(0xf4,*(undefined4 *)(puVar9 + 4),*(undefined4 *)(puVar9 + 0xc));
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 0x14;
  } while (uVar10 < 0xc);
  uVar10 = 0;
  puVar9 = &DAT_00342610;
  do {
    if (((char)param_1[0xb] == '\x01') && (uVar10 == 0xc)) {
      iVar7 = param_1[0xe] + 0x20;
    }
    else {
      iVar7 = param_1[0xe] + uVar10;
    }
    iVar7 = iVar7 % 0x21;
    MenuWnd_DrawLabel(0xf5,*(undefined4 *)(puVar9 + 8),0x3a,iVar7 + 1);
    if (iVar7 < 0x1e) {
      lVar6 = SeqGen_IsUserSong(iVar7);
      if (lVar6 == 0) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar9 + 0xc),0x1f73);
      }
      else {
        lVar6 = SeqGen_FindPatternIndex(param_1[8]);
        if (lVar6 == 0) {
          MenuWnd_DrawTextId(0xf5,*(undefined4 *)(puVar9 + 0xc),4,0x1f80);
        }
        else {
          iVar5 = UiMgr_FindLayout(0xf5);
          UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_40,(long)*(int *)(puVar9 + 0xc));
          uVar8 = SeqGen_GetPartTextId(param_1[8],iVar7);
          UiText_DrawPlayerName(auStack_40,uVar8,0);
        }
      }
      if (iVar7 < 0xc) {
        iVar5 = UiMgr_FindLayout(0xf5);
        UiElem_Get(&g_UiMgr->slots[iVar5].layout,*(int *)(puVar9 + 4),0xc0,0xba,0x73);
      }
      else {
        iVar5 = UiMgr_FindLayout(0xf5);
        UiElem_Get(&g_UiMgr->slots[iVar5].layout,*(int *)(puVar9 + 4),0xc0,0xc0,0xc0);
      }
    }
    else {
      if (iVar7 == 0x20) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar9 + 0xc),0x1f72);
      }
      else if (iVar7 == 0x1f) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar9 + 0xc),0x1f71);
      }
      else if (iVar7 == 0x1e) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar9 + 0xc),0x1f70);
      }
      iVar5 = UiMgr_FindLayout(0xf5);
      UiElem_Get(&g_UiMgr->slots[iVar5].layout,*(int *)(puVar9 + 4),0x5e,0x7e,0xa3);
    }
    if (iVar7 == param_1[10]) {
      iVar7 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)*(int *)(puVar9 + 0x10),8,
                          extraout_a3_lo);
    }
    else {
      iVar7 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar7].layout,(long)*(int *)(puVar9 + 0x10),8,
                          extraout_a3_lo_00);
    }
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 0x18;
  } while (uVar10 < 0xd);
  UiLayout_UpdateAnimById((UiLayout *)0xf3,0);
  iVar7 = UiMgr_FindLayout(0xf3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0xf4);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0xf5);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  MenuNum_CountUp_Bgm(0xf6,3,4,0xfc,0x21,0xc,param_1[0xe]);
  UiLayout_UpdateAnimById((UiLayout *)0xf6,2);
  iVar7 = UiMgr_FindLayout(0xf6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = param_1[0xd];
  if (iVar7 == 0x20) {
    uVar8 = 0x1f7f;
  }
  else if (iVar7 == 0x1f) {
    uVar8 = 0x1f7e;
  }
  else if (iVar7 == 0x1e) {
    uVar8 = 0x1f7d;
  }
  else {
    uVar8 = 0x1f7c;
  }
  MenuWnd_DrawText(0xf2,0x1b,uVar8);
  if ((param_1[0xd] < 0x1e) && (lVar6 = SeqGen_IsUserSong(), lVar6 == 0)) {
    iVar7 = UiMgr_FindLayout(0xf2);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,0x1a,9,1);
  }
  else {
    iVar7 = UiMgr_FindLayout(0xf2);
    UiElem_SetPropInt(&g_UiMgr->slots[iVar7].layout,0x1a,9,0);
  }
  iVar7 = UiMgr_FindLayout(0xf2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x002e13ac  size 0xc
/* follows Eventui_Draw_BgmConfig_0880; no call, branch, pointer or constant references it
   (exception landing pad or dead code) */

void Eventui_Draw_BgmConfig_0880_Orphan1(void)

{
  return;
}

// 0x002e13c0  size 0x850
void Eventui_Draw_BgmConfig_13c0(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  byte extraout_a3_lo;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 auStack_40 [16];
  
  iVar6 = param_1[5];
  param_1[5] = 0;
  if (iVar6 == 0) {
    iVar6 = *param_1;
  }
  else {
    uVar11 = UiRes_GetLayoutData(0x3df);
    iVar6 = UiMgr_FindLayout(0xf4);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar6].layout.unk_310 = 0xffffffff;
    pUVar1[iVar6].layout.unk_31c = 0;
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    pUVar1[iVar6].layout.unk_31c = uVar11;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x3e0);
    iVar6 = UiMgr_FindLayout(0xf4);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar5;
    pUVar1[iVar6].layout.animState = 1;
    uVar11 = UiRes_GetLayoutData(0x3e1);
    iVar6 = UiMgr_FindLayout(0xf5);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar6].layout.unk_310 = 0xffffffff;
    pUVar1[iVar6].layout.unk_31c = 0;
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    pUVar1[iVar6].layout.unk_30c = 0;
    if (pUVar1[iVar6].layout.unk_31c == 0) {
      pUVar1[iVar6].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar6].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x314 = 0;
    pUVar1[iVar6].layout.unk_31c = uVar11;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x3e2);
    iVar6 = UiMgr_FindLayout(0xf5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x330 == 0) {
      pUVar1[iVar6].layout.animState = 0;
    }
    else {
      pUVar1[iVar6].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar5;
    pUVar1[iVar6].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x3e3);
    iVar6 = UiMgr_FindLayout(0xf5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x3e4);
    iVar6 = UiMgr_FindLayout(0xf5);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar6].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = uVar5;
    uVar11 = 0;
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
    puVar9 = &DAT_00342520;
    do {
      iVar6 = UiMgr_FindLayout(0xf4);
      UiElem_Get(&g_UiMgr->slots[iVar6].layout,*(int *)(puVar9 + 8),0xc0,0xc0,0xc0);
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 0x14;
    } while (uVar11 < 0xc);
    Menu_ClearSlot(0);
    uVar11 = 0;
    puVar9 = &DAT_00342610;
    do {
      iVar6 = UiMgr_FindLayout(0xf5);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar6].layout,(long)*(int *)(puVar9 + 0x10),8,
                          extraout_a3_lo);
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 0x18;
    } while (uVar11 < 0xd);
    MenuWnd_DrawDialogText(0xf5,0x36eeb0,2,0);
    iVar6 = *param_1;
  }
  if (iVar6 == 1) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf5,0);
    if (!bVar2) {
      param_1[4] = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf4,0);
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xf5,0);
    if (!bVar2 && !bVar3) {
      param_1[4] = 0;
    }
  }
  if (param_1[6] != 0) {
    if (param_1[2] == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf5,1);
      if (!bVar2) {
        param_1[6] = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xf4,1);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xf5,1);
      if (!bVar2 && !bVar3) {
        param_1[6] = 0;
      }
    }
  }
  if ((param_1[4] == 0) && (param_1[6] == 0)) {
    MenuWnd_SetItemState(0xf4,*(undefined4 *)(&DAT_00342520 + param_1[0xc] * 0x14),1,0);
  }
  MenuWnd_DrawCursor(0);
  MenuWnd_DrawText(0xf4,0x25,0x1f81);
  piVar4 = (int *)RaceSlotTbl_Get();
  uVar11 = 0;
  puVar10 = &DAT_00342520;
  puVar9 = &DAT_00342610;
  do {
    MenuWnd_DrawText(0xf4,*(undefined4 *)(puVar10 + 4),*(undefined4 *)(puVar10 + 0xc));
    MenuWnd_DrawLabel(0xf5,*(undefined4 *)(puVar9 + 8),0x3a,*piVar4 + 1);
    iVar6 = *piVar4;
    if (iVar6 < 0x1e) {
      lVar7 = SeqGen_FindPatternIndex(param_1[8]);
      if (lVar7 == 0) {
        MenuWnd_DrawTextId(0xf5,*(undefined4 *)(puVar9 + 0xc),4,0x1f80);
      }
      else {
        iVar6 = UiMgr_FindLayout(0xf5);
        UiElem_GetRect(&g_UiMgr->slots[iVar6].layout,auStack_40,(long)*(int *)(puVar9 + 0xc));
        uVar8 = SeqGen_GetPartTextId(param_1[8],*piVar4);
        UiText_DrawPlayerName(auStack_40,uVar8,0);
      }
      if (*piVar4 < 0xc) {
        iVar6 = UiMgr_FindLayout(0xf5);
        UiElem_Get(&g_UiMgr->slots[iVar6].layout,*(int *)(puVar9 + 4),0xc0,0xba,0x73);
      }
      else {
        iVar6 = UiMgr_FindLayout(0xf5);
        UiElem_Get(&g_UiMgr->slots[iVar6].layout,*(int *)(puVar9 + 4),0xc0,0xc0,0xc0);
      }
    }
    else {
      if (iVar6 == 0x20) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar9 + 0xc),0x1f72);
      }
      else if (iVar6 == 0x1f) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar9 + 0xc),0x1f71);
      }
      else if (iVar6 == 0x1e) {
        MenuWnd_DrawText(0xf5,*(undefined4 *)(puVar9 + 0xc),0x1f70);
      }
      iVar6 = UiMgr_FindLayout(0xf5);
      UiElem_Get(&g_UiMgr->slots[iVar6].layout,*(int *)(puVar9 + 4),0x5e,0x7e,0xa3);
    }
    uVar11 = uVar11 + 1;
    puVar10 = puVar10 + 0x14;
    piVar4 = piVar4 + 1;
    puVar9 = puVar9 + 0x18;
  } while (uVar11 < 0xc);
  UiLayout_UpdateAnimById((UiLayout *)0xf3,0);
  iVar6 = UiMgr_FindLayout(0xf3);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0xf4);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0xf5);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0xf2);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,0x1a,9,0);
  MenuWnd_DrawText(0xf2,0x1b,*(undefined4 *)(&DAT_00342530 + param_1[0xc] * 0x14));
  iVar6 = UiMgr_FindLayout(0xf2);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002e1c20  size 0x10
/* follows Eventui_Draw_BgmConfig_13c0; no call, branch, pointer or constant references it
   (exception landing pad or dead code) */

void Eventui_Draw_BgmConfig_13c0_Orphan1(void)

{
  return;
}

// 0x002e1c30  size 0x14
/* menu page 44 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage44_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x002e1c50  size 0x98
/* menu page 44 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage44_Update(int param_1)

{
  uint uVar1;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_Eventui_Draw_BgmConfig_13c0_00342510)[*(int *)(param_1 + 4)])();
  uVar1 = g_MenuMgr->flags;
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
  }
  return;
}

// 0x002e1cf0  size 0x9c
/* menu page 44 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage44_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x3de);
  iVar3 = UiMgr_FindLayout(0xf3);
  pUVar1 = g_UiMgr->slots;
  pUVar1[iVar3].layout.unk_310 = 0xffffffff;
  pUVar1[iVar3].layout.unk_31c = 0;
  pUVar1[iVar3].layout.unk_30c = 0;
  if (pUVar1[iVar3].layout.unk_31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  pUVar1[iVar3].layout.unk_30c = 0;
  if (pUVar1[iVar3].layout.unk_31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 1;
  pUVar1[iVar3].layout.unk_31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  return;
}

// 0x002e1d90  size 0x1d0
/* state of maybe_ScrMusic; on-screen text/callee hint "SndQueueCmd1" (was ScrSndQueueCmd1_Exit) */

void maybe_ScrMusic_State2_SndQueueCmd1(undefined4 *param_1)

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
/* state of maybe_ScrMusic; on-screen text/callee hint "SndQueueCmd1" (was ScrSndQueueCmd1_Update)
    */

void maybe_ScrMusic_State1_SndQueueCmd1(int *param_1)

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
    iVar2 = RaceSlotTbl_Get();
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
  uVar4 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
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
/* state of maybe_ScrMusic; on-screen text/callee hint "SndQueueCmd1" (was ScrSndQueueCmd1_Enter) */

void maybe_ScrMusic_State0_SndQueueCmd1(int param_1)

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
    (*(code *)(&PTR_maybe_ScrMusic_State0_SndQueueCmd1_00342748)[*(int *)(iVar4 + 4)])(param_1);
    uVar5 = g_MenuInput[2];
    if ((g_MenuInput[4] & uVar5) == 0) {
      uVar5 = 0x100000;
    }
    else if (uVar5 == 0x80000) {
      uVar5 = 0x80000;
    }
    else if (*g_MenuInput != 1) {
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
            MenuMgr_RequestScreen(0xfffffffffffffffc);
          }
          else {
            MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
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
            MenuMgr_RequestScreen(0xfffffffffffffffc);
          }
          else {
            MenuMgr_RequestScreen(g_MenuMgr->prevScreen);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
    iVar2 = _g_FileShared2;
    Sema_Signal(0x36efc0,0);
    if ((iVar2 == 0) && (*(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1, *(int *)(iVar1 + 4) < 0)) {
      uVar4 = File_GetSectorCount(&uStack_4);
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
  if ((cVar3 == '\x05') ||
     ((g_RaceScene != (RaceScene *)0x0 && (lVar5 = RaceScene_IsFlag10(), lVar5 != 0)))) {
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
  iVar4 = RaceSlotTbl_Get();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  
  if (((_g_IntroFlag[1] != 0) && (_g_IntroFlag[2] != 0)) && (_g_IntroFlag[3] != 0)) {
    uVar6 = Gut_PackGetEntry(_g_IntroFlag[2],param_1 + 2,0);
    puVar2 = (uint *)Model_GetTexture(uVar6,0);
    if ((*puVar2 & 0x10) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = puVar2 + 0x14;
    }
    puStack_30 = puVar2 + 0xc;
    uVar6 = Gut_PackGetEntry(_g_IntroFlag[2],param_1 + (*_g_IntroFlag & 1),0);
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
                      (((float)(*_g_IntroFlag & 0x7f) / 128.0) * 6.2831855,auStack_14,&fStack_4);
            uVar7 = 0;
            if (*(int *)(puVar4 + 6) != 0) {
              do {
                fVar13 = (*pfVar9 - (float)puVar2[4]) / ((float)puVar2[8] - (float)puVar2[4]);
                fVar12 = fVar13 - 0.6;
                fVar11 = (pfVar9[1] - (float)puVar2[5]) / ((float)puVar2[9] - (float)puVar2[5]) -
                         0.3;
                maybe_Math_AngleToIndex
                          (((float)(*_g_IntroFlag & 0x3f) / 64.0) * 6.2831855 +
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
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  undefined *puVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
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
  
  iVar6 = (param_1 & 0xff) * 0x5c0;
  puVar7 = &g_Views + iVar6;
  bVar1 = false;
  if (((_g_IntroFlag[1] != 0) && (_g_IntroFlag[2] != 0)) && (_g_IntroFlag[3] != 0)) {
    Layer_Reset(auStack_240,puVar7,0x436180,param_2,param_3);
    piVar4 = (int *)_g_IntroFlag[3];
    iVar9 = 0;
    if (0 < *piVar4) {
      iVar10 = 0;
      do {
        pfVar8 = (float *)(*(short **)
                            (g_RoadData->aiLine + (uint)*(ushort *)((int)piVar4 + iVar10 + 0x10) * 4
                            ) + **(short **)
                                  (g_RoadData->aiLine +
                                  (uint)*(ushort *)((int)piVar4 + iVar10 + 0x10) * 4) * 0x10 +
                                *(int *)((int)piVar4 + iVar10 + 0x14) * 6 + 0x3e);
        if (*(int *)((int)piVar4 + iVar10 + 0x18) == 0) {
          uVar2 = Gut_PackGetEntry(_g_IntroFlag[2],*_g_IntroFlag & 1,0);
          puVar5 = _g_IntroFlag + *(int *)((int)piVar4 + iVar10 + 0x1c) * 0x20 + 4;
        }
        else {
          uVar2 = Gut_PackGetEntry(_g_IntroFlag[2],(*_g_IntroFlag & 1) + 4,0);
          puVar5 = _g_IntroFlag + *(int *)((int)piVar4 + iVar10 + 0x1c) * 0x20 + 0x44;
        }
        TexSlot_Set(0xf,1,puVar5);
        uStack_244 = 0x3f800000;
        fStack_248 = *(float *)((int)piVar4 + iVar10 + 0x28) * 0.017453292;
        fStack_260 = *(float *)((int)piVar4 + iVar10 + 0x30) * 10.0 + *pfVar8 + 0.0;
        fStack_250 = *(float *)((int)piVar4 + iVar10 + 0x20) * 0.017453292;
        fStack_25c = *(float *)((int)piVar4 + iVar10 + 0x34) * 10.0 + pfVar8[1] + 0.0;
        fStack_24c = *(float *)((int)piVar4 + iVar10 + 0x24) * 0.017453292;
        uStack_254 = 0x3f800000;
        fStack_258 = *(float *)((int)piVar4 + iVar10 + 0x38) * 10.0 + pfVar8[2] + 0.0;
        if (((*(int *)((int)piVar4 + iVar10 + 0x18) == 0) && (param_4 == 0)) &&
           (fStack_24c = fStack_24c + 3.1415927, 3.1415927 < fStack_24c)) {
          fStack_24c = fStack_24c - 6.2831855;
        }
        fVar11 = (float)maybe_sceVu0InterVectorDist(auStack_270,&fStack_260,puVar7);
        if (((fVar11 <= *(float *)(&g_RaceCamShared2 + iVar6) * 1.1547005) &&
            (fVar12 = (float)sceVu0InnerProduct(iVar6 + 0x431140,auStack_270),
            -20.0 <= fVar11 * fVar12)) &&
           (lVar3 = Course_GetGroundHeight(puVar7,&fStack_260), lVar3 != 0)) {
          if (!bVar1) {
            Layer_Open(auStack_240,0);
            bVar1 = true;
          }
          maybe_Vu0_UnitMatrix(auStack_180);
          maybe_Vu0_RotMatrixZ(fStack_250,auStack_180,auStack_180);
          maybe_Vu0_RotMatrixY(fStack_24c,auStack_180,auStack_180);
          maybe_Vu0_RotMatrixX(fStack_248,auStack_180,auStack_180);
          sceVu0TransMatrix(auStack_180,auStack_180,&fStack_260);
          uVar2 = Model_GetTexture(uVar2,0);
          Model_UpdateNodeMatrix(auStack_240,uVar2);
        }
        iVar9 = iVar9 + 1;
        piVar4 = (int *)_g_IntroFlag[3];
        iVar10 = iVar10 + 0x30;
      } while (iVar9 < *piVar4);
    }
    if (bVar1) {
      Layer_Close(auStack_240,0);
    }
  }
  return;
}

// 0x002e32c0  size 0x140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  uVar1 = *(undefined4 *)(_g_IntroFlag + 8);
  do {
    uVar2 = Gut_PackGetEntry(uVar1,iVar7,0);
    uVar3 = Gut_PackGetEntry(uVar1,iVar7 + 1,0);
    uVar4 = Gut_PackGetEntry(uVar1,iVar7 + 2,0);
    uVar5 = Gut_PackGetEntry(uVar1,iVar7 + 3,0);
    Model_Relocate(uVar2);
    Model_Relocate(uVar3);
    Model_Relocate(uVar4);
    Tex_Relocate(uVar5);
    TexSlot_Bind(_g_IntroFlag + iVar6 + 0x10,uVar5,0,_g_RaceIntroShared1 + _g_CourseShared8,
                 _g_RaceIntroShared1 + _g_CourseShared8,0x51010,0,0);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar8 < 2);
  *(undefined4 *)(_g_IntroFlag + 4) = 1;
  return;
}

// 0x002e3400  size 0x3c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_IntroFlag_Step(void)

{
  if (_g_IntroFlag != (int *)0x0) {
    *_g_IntroFlag = *_g_IntroFlag + 1;
    maybe_IntroFlag_Update(0);
    maybe_IntroFlag_Update(4);
  }
  return;
}

// 0x002e3440  size 0x34
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_IntroFlag_DrawAll(int param_1,undefined8 param_2)

{
  if (_g_IntroFlag != 0) {
    maybe_IntroFlag_Draw
              (*(undefined1 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),param_2);
  }
  return;
}

// 0x002e3480  size 0x74
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void IntroFlag_Free(void)

{
  if (_g_IntroFlag != 0) {
    if (*(int *)(_g_IntroFlag + 8) != 0) {
      Mem_Free();
      *(undefined4 *)(_g_IntroFlag + 8) = 0;
    }
    if (*(int *)(_g_IntroFlag + 0xc) != 0) {
      Mem_Free();
      *(undefined4 *)(_g_IntroFlag + 0xc) = 0;
    }
  }
  if (_g_IntroFlag != 0) {
    Mem_Free();
    _g_IntroFlag = 0;
  }
  return;
}

// 0x002e3500  size 0x170
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void IntroFlag_Load(undefined8 param_1,int param_2,byte param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_3 < 8) {
    _g_IntroFlag = (undefined4 *)Mem_Alloc16(0x210,param_1);
    *_g_IntroFlag = 0;
    _g_IntroFlag[1] = 0;
    _g_IntroFlag[2] = 0;
    _g_IntroFlag[3] = 0;
    uVar1 = *(undefined4 *)(&DAT_00342850 + (uint)param_3 * 4);
    iVar4 = *(int *)(&DAT_003427b0 + param_2 * 4) +
            *(int *)((param_4 & 0xff) * 4 + (param_5 & 0xff) * 0x18 + 0x342870);
    uVar3 = Arc_GetFileSize(iVar4,iVar4,1);
    uVar2 = Mem_AllocAligned(uVar3,0x40,0x430750);
    _g_IntroFlag[2] = uVar2;
    Arc_LoadFileEx(iVar4,_g_IntroFlag[2],0,0,0,0);
    uVar3 = Arc_GetFileSize(uVar1,uVar1,1);
    uVar2 = Mem_AllocAligned(uVar3,0x40,0x430750);
    _g_IntroFlag[3] = uVar2;
    Arc_LoadFileEx(uVar1,_g_IntroFlag[3],0x2e32c0,_g_IntroFlag,0,0);
  }
  return;
}

// 0x002e3670  size 0x360
void Eventui_Draw_Akagi(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  int *piVar5;
  uint uVar6;
  undefined4 auStack_40 [16];
  
  lVar2 = Nameentry_GetField_4_8200();
  if (lVar2 != 9) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,4);
  }
  uVar6 = 0;
  piVar5 = &DAT_003428f0;
  do {
    if ((*(int *)(param_1 + 0x68) == 1) && (uVar6 == 0xc)) {
      iVar4 = *(int *)(param_1 + 0x58) + 0x1d;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x58) + uVar6;
    }
    iVar4 = iVar4 % 0x1e;
    MenuWnd_DrawLabel(8,piVar5[3],5,0,iVar4 + 1);
    lVar2 = SeqGen_IsUserSong(iVar4);
    if (lVar2 == 0) {
      MenuWnd_DrawText(8,piVar5[4],6);
    }
    else {
      lVar2 = SeqGen_FindPatternIndex(*(undefined4 *)(param_1 + 0x20));
      if (lVar2 == 0) {
        MenuWnd_DrawTextId(8,piVar5[4],4,7);
      }
      else {
        iVar1 = UiMgr_FindLayout(8);
        UiElem_GetRect(&g_UiMgr->slots[iVar1].layout,auStack_40,(long)piVar5[4]);
        uVar3 = SeqGen_GetPartTextId(*(undefined4 *)(param_1 + 0x20),iVar4);
        UiText_DrawPlayerName(auStack_40,uVar3,0);
      }
    }
    if (iVar4 < 0xc) {
      iVar1 = UiMgr_FindLayout(8);
      UiElem_Get(&g_UiMgr->slots[iVar1].layout,piVar5[2],0xc0,0xba,0x73);
    }
    else {
      iVar1 = UiMgr_FindLayout(8);
      UiElem_Get(&g_UiMgr->slots[iVar1].layout,piVar5[2],0xc0,0xc0,0xc0);
    }
    if (*(int *)(param_1 + iVar4 * 4 + 0x7c) == 0) {
      iVar1 = UiMgr_FindLayout(7);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*piVar5,8,extraout_a3_lo_00);
    }
    else {
      iVar1 = UiMgr_FindLayout(7);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*piVar5,8,extraout_a3_lo);
    }
    if (iVar4 == *(int *)(param_1 + 0x70)) {
      iVar1 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)piVar5[5],8,extraout_a3_lo_01);
    }
    else {
      iVar1 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)piVar5[5],8,extraout_a3_lo_02);
    }
    if (iVar4 != *(int *)(param_1 + 0x54)) {
      iVar4 = UiMgr_FindLayout(8);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)piVar5[6],8,extraout_a3_lo_03);
    }
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 7;
  } while (uVar6 < 0xd);
  MenuNum_CountUp_Event(7,3,4,0xfc,0x1e,0xc,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
  return;
}

// 0x002e39e0  size 0x250
void maybe_ComposerUi_AnimateNameA(undefined8 param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x68) == 0) {
    lVar5 = Nameentry_GetField_14();
    if ((lVar5 == 0) && (lVar5 = Nameentry_GetField_18(param_1), lVar5 == 0)) {
      ComposerInput_SetMode(1);
      MenuWnd_SetItemState
                (8,*(undefined4 *)
                    (&DAT_003428f4 +
                    (((*(int *)(iVar4 + 0x60) - *(int *)(iVar4 + 0x58)) + 0x1e) % 0x1e) * 0x1c),0,0)
      ;
    }
  }
  else {
    ComposerInput_SetMode(0);
    if (*(int *)(iVar4 + 0x68) == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x7,6);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x8,2);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(iVar4 + 0x68) = 0;
        iVar4 = UiMgr_FindLayout(7);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x384 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x394 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x390 = 1;
        }
        iVar4 = UiMgr_FindLayout(8);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x7,7);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x8,3);
      if (!bVar2 && !bVar3) {
        *(undefined4 *)(iVar4 + 0x68) = 0;
        iVar4 = UiMgr_FindLayout(7);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x398 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x3a8 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x3a4 = 1;
        }
        iVar4 = UiMgr_FindLayout(8);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
        }
        Menu_ClearSlot(0);
      }
    }
  }
  return;
}

// 0x002e3c30  size 0x278
void Eventui_Draw_Hakone(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar1 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  lVar2 = ComposerScene_IsChanging();
  if (lVar2 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar1 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x8f,8,extraout_a3_lo);
    iVar1 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,0x90,8,extraout_a3_lo_00);
  }
  iVar1 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x002e3eb0  size 0x300
void Eventui_Draw_Hakone_3eb0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
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
  UiLayout_UpdateAnimById((UiLayout *)0x7,8);
  iVar2 = UiMgr_FindLayout(7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  lVar3 = ComposerScene_IsChanging();
  if (lVar3 == 0) {
    UiLayout_UpdateAnimById((UiLayout *)0x8,5);
    UiLayout_UpdateAnimById((UiLayout *)0x8,6);
  }
  else {
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x8f,8,extraout_a3_lo);
    iVar2 = UiMgr_FindLayout(8);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,0x90,8,extraout_a3_lo_00);
  }
  iVar2 = UiMgr_FindLayout(8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  return;
}

