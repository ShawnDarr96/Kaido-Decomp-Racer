// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00228000 - 0x0022c000
#include "ghidra_types.h"

// 0x0022a0c0  size 0x1334
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Mail_a0c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar1 = UiMgr_FindLayout(0xaf);
  iVar11 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar1 = UiMgr_FindLayout(0xb0);
  iVar8 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  UiMgr_FindLayout(0xb1);
  iVar1 = param_1[8];
  param_1[8] = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0xf0);
    iVar1 = UiMgr_FindLayout(0xae);
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
    uVar2 = UiRes_GetLayoutData(0xf5);
    iVar1 = UiMgr_FindLayout(0xae);
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
    uVar2 = UiRes_GetLayoutData(0xf2);
    iVar1 = UiMgr_FindLayout(0xaf);
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
    uVar2 = UiRes_GetLayoutData(0xf3);
    iVar1 = UiMgr_FindLayout(0xaf);
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
    uVar2 = UiRes_GetLayoutData(0xf6);
    iVar1 = UiMgr_FindLayout(0xb0);
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
    uVar2 = UiRes_GetLayoutData(0xf8);
    iVar1 = UiMgr_FindLayout(0xb0);
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
    uVar2 = UiRes_GetLayoutData(0xf4);
    iVar1 = UiMgr_FindLayout(0xaf);
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
    uVar2 = UiRes_GetLayoutData(0xf1);
    iVar1 = UiMgr_FindLayout(0xaf);
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
    Menu_ClearSlot(0);
    param_1[0x1a1] = 2;
    MenuWnd_DrawDialogText(0xaf,0x36e988,2,0);
    auStack_30[1] = DAT_0032a884;
    auStack_30[0] = DAT_0032a880;
    auStack_30[3] = DAT_0032a88c;
    auStack_30[2] = DAT_0032a888;
    uStack_1c = DAT_0032a894;
    uStack_20 = DAT_0032a890;
    uStack_14 = DAT_0032a89c;
    uStack_18 = DAT_0032a898;
    uStack_10 = DAT_0032a8a0;
    uStack_c = DAT_0032a8a4;
    uStack_8 = DAT_0032a8a8;
    UiElem_SetPropFloat(0x3f800000,iVar11,0x3f,8);
    UiElem_SetPropFloat(0x3f800000,iVar11,0x41,8);
    UiElem_SetPropFloat(0,iVar8,0x1c,8);
    UiElem_SetPropFloat(0,iVar8,0x1d,8);
    iVar1 = 0;
    puVar9 = auStack_30;
    do {
      iVar6 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*puVar9,8);
      iVar1 = iVar1 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar1 < 0xb);
    UiElem_SetPropFloat(0,iVar8,0x17,8);
    if ((param_1[3] == 8) || (param_1[3] == 10)) {
      iVar1 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,5,8);
      iVar1 = param_1[9];
      goto LAB_0022a14c;
    }
  }
  iVar1 = param_1[9];
LAB_0022a14c:
  if (iVar1 == 0) {
    MenuWnd_DrawCursor(1);
    iVar1 = param_1[3];
  }
  else {
    iVar1 = param_1[3];
  }
  if (((iVar1 == 1) || (iVar1 == 8)) || (iVar1 == 10)) {
    param_1[7] = 0;
  }
  else {
    lVar3 = UiLayout_UpdateAnimById(0xae,0);
    lVar4 = UiLayout_UpdateAnimById(0xaf,0);
    lVar5 = UiLayout_UpdateAnimById(0xb0,0);
    if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
      param_1[7] = 0;
    }
  }
  if (param_1[9] != 0) {
    if (param_1[5] == 1) {
      param_1[9] = 0;
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0xae);
      lVar4 = UiLayout_UpdateAnimById(0xaf,1);
      lVar5 = UiLayout_UpdateAnimById(0xb0,1);
      if (lVar5 == 0 && (lVar3 == 0 && lVar4 == 0)) {
        param_1[9] = 0;
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0xaf,*(undefined4 *)(&DAT_0036e990 + *param_1 * 4),0,0);
  }
  MenuWnd_DrawText(0xae,1,0x434);
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  if (param_1[param_1[0x19d] + 0xb] < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,param_1[param_1[0x19d] + 0x19e] + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar1 = param_1[0x19d];
  if (param_1[iVar1 + 0xb] < 0xb) {
    iVar8 = 0;
    if (0 < param_1[iVar1 + 0xb]) {
      iVar6 = 0;
      puVar10 = (undefined4 *)0x32a910;
      puVar9 = (undefined4 *)0x32a8b0;
      puVar12 = (undefined4 *)0x32a8e0;
      do {
        uVar13 = 0;
        if (iVar1 == 1) {
          if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar6 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar13 = 5;
          }
          iVar1 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar6 + 0x354) * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar1,iVar1 % 7 + 0x44a);
          iVar7 = param_1[0x1a0] +
                  *(int *)((int)param_1 + iVar6 + param_1[0x19d] * 800 + 0x34) * 0x28;
          iVar1 = *(int *)(iVar7 + 0x99a0);
          if (iVar1 == -1) {
            MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar7 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar9,iVar1 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                             *(int *)(param_1[0x1a0] +
                                      *(int *)((int)param_1 + iVar6 + param_1[0x19d] * 800 + 0x34) *
                                      0x28 + 0x9994) + 0x1a28);
        }
        else if (iVar1 == 0) {
          if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar6 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar13 = 5;
          }
          iVar1 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar6 + 0x34) * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar1,iVar1 % 7 + 0x44a);
          iVar7 = param_1[0x1a0] +
                  *(int *)((int)param_1 + iVar6 + param_1[0x19d] * 800 + 0x34) * 0x28;
          iVar1 = *(int *)(iVar7 + 0xb8e0);
          if (iVar1 == -1) {
            MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar9,iVar1 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                             *(int *)(param_1[0x1a0] +
                                      *(int *)((int)param_1 + iVar6 + param_1[0x19d] * 800 + 0x34) *
                                      0x28 + 0xb8d4) + 0x1a28);
        }
        iVar1 = param_1[0x19d];
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 4;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar8 < param_1[iVar1 + 0xb]);
    }
  }
  else {
    iVar1 = 0;
    puVar10 = (undefined4 *)0x32a910;
    puVar9 = (undefined4 *)0x32a8b0;
    puVar12 = (undefined4 *)0x32a8e0;
    do {
      uVar13 = 0;
      if (param_1[0x19d] == 1) {
        if (*(char *)(param_1[0x1a0] + param_1[iVar1 + (param_1[0x19f] - param_1[2]) + 0xd5] * 0x28
                     + 0x999c) == '\x01') {
          uVar13 = 5;
        }
        iVar8 = *(int *)(param_1[0x1a0] +
                         param_1[iVar1 + (param_1[0x19f] - param_1[2]) + 0xd5] * 0x28 + 0x9998);
        MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar8,iVar8 % 7 + 0x44a);
        iVar8 = param_1[0x19d];
        iVar6 = param_1[0x1a0] +
                param_1[iVar8 * 200 + iVar1 + (param_1[iVar8 + 0x19e] - param_1[iVar8 + 1]) + 0xd] *
                0x28;
        iVar8 = *(int *)(iVar6 + 0x99a0);
        if (iVar8 == -1) {
          MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar6 + 0x9994) + 0x1b9a);
        }
        else {
          MenuWnd_DrawText(0xaf,*puVar9,iVar8 + 0xa8c);
        }
        iVar8 = param_1[0x19d];
        MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                           *(int *)(param_1[0x1a0] +
                                    param_1[iVar8 * 200 +
                                            iVar1 + (param_1[iVar8 + 0x19e] - param_1[iVar8 + 1]) +
                                            0xd] * 0x28 + 0x9994) + 0x1a28);
      }
      else if (param_1[0x19d] == 0) {
        if (*(char *)(param_1[0x1a0] + param_1[iVar1 + (param_1[0x19e] - param_1[1]) + 0xd] * 0x28 +
                     0xb8dc) == '\x01') {
          uVar13 = 5;
        }
        iVar8 = *(int *)(param_1[0x1a0] +
                         param_1[iVar1 + (param_1[0x19e] - param_1[1]) + 0xd] * 0x28 + 0xb8d8);
        MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar8,iVar8 % 7 + 0x44a);
        iVar8 = param_1[0x19d];
        iVar6 = param_1[0x1a0] +
                param_1[iVar8 * 200 + iVar1 + (param_1[iVar8 + 0x19e] - param_1[iVar8 + 1]) + 0xd] *
                0x28;
        iVar8 = *(int *)(iVar6 + 0xb8e0);
        if (iVar8 == -1) {
          MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar6 + 0xb8d4) + 0x1b9a);
        }
        else {
          MenuWnd_DrawText(0xaf,*puVar9,iVar8 + 0xa8c);
        }
        iVar8 = param_1[0x19d];
        MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                           *(int *)(param_1[0x1a0] +
                                    param_1[iVar8 * 200 +
                                            iVar1 + (param_1[iVar8 + 0x19e] - param_1[iVar8 + 1]) +
                                            0xd] * 0x28 + 0xb8d4) + 0x1a28);
      }
      iVar1 = iVar1 + 1;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar1 < 10);
  }
  if (param_1[7] == 0) {
    if (param_1[param_1[0x19d] + 0xb] < 0xb) {
      iVar8 = 0;
      iVar1 = 0;
      puVar9 = &DAT_0032a940;
      do {
        iVar6 = param_1[0x19d];
        if ((iVar8 < param_1[iVar6 + 0xb]) &&
           (lVar3 = Career_GetRivalIndex
                              (param_1[0x1a0],iVar6 == 0,
                               *(undefined4 *)((int)param_1 + iVar1 + iVar6 * 800 + 0x34)),
           lVar3 != -1)) {
          UiElem_SetPropFloat(0x3f800000,iVar11,*puVar9,8);
        }
        else {
          UiElem_SetPropFloat(0,iVar11,*puVar9,8);
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar1 + 4;
        puVar9 = puVar9 + 1;
      } while (iVar8 < 0xb);
    }
    else {
      iVar1 = 0;
      puVar9 = &DAT_0032a940;
      do {
        iVar8 = param_1[0x19d];
        lVar3 = Career_GetRivalIndex
                          (param_1[0x1a0],iVar8 == 0,
                           param_1[iVar8 * 200 +
                                   iVar1 + (param_1[iVar8 + 0x19e] - param_1[iVar8 + 1]) + 0xd]);
        if (lVar3 == -1) {
          UiElem_SetPropFloat(0,iVar11,*puVar9,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,iVar11,*puVar9,8);
        }
        iVar1 = iVar1 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar1 < 10);
    }
  }
  else {
    iVar1 = 0;
    puVar9 = &DAT_0032a940;
    do {
      UiElem_SetPropFloat(0,iVar11,*puVar9,8);
      iVar1 = iVar1 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar1 < 0xb);
  }
  if (*(int *)(_g_MenuMgr + 0x20) == 8) {
    iVar1 = 0;
    puVar9 = &DAT_0032a940;
    do {
      UiElem_SetPropFloat(0,iVar11,*puVar9,8);
      iVar1 = iVar1 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar1 < 0xb);
  }
  uVar13 = menuscr_step_sub_0028b580(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar13);
  if (param_1[param_1[0x19d] + 0xb] < 1) {
    DAT_0032a850 = 1;
  }
  else {
    DAT_0032a850 = 3;
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x0022b410  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327734 */

void screc327734_exit_sub_0022b410(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x0022b430  size 0xe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327734 */

void screc327734_update_sub_0022b430(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar2 = (int)param_1;
  MenuWnd_SetTitle((&DAT_0032a850)[*(int *)(iVar2 + 0x10)],0xffffffffffffffff);
  (*(code *)(&PTR_ScrCareer_Draw_Mail_a0c0_0032a820)[*(int *)(iVar2 + 0x10)])(param_1);
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar1 = Menu_IsInputIdle(iVar2 + 0xc), lVar1 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0022b510  size 0x8
/* screen record 0x327734 */

void screc327734_enter_sub_0022b510(void)

{
  return;
}

// 0x0022b520  size 0x3c8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_AreYouSure(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_40 [60];
  undefined1 auStack_4 [4];
  
  iVar5 = param_1[0xb];
  param_1[0xb] = 0;
  if (iVar5 != 0) {
    uVar4 = UiRes_GetLayoutData(0x1d5);
    iVar5 = UiMgr_FindLayout(0x34);
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
    *(undefined4 *)(iVar5 + 800) = uVar4;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x1d6);
    iVar5 = UiMgr_FindLayout(0x34);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar4;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    Menu_ClearSlot(0);
  }
  lVar6 = UiLayout_UpdateAnimById(0x34,0);
  if (lVar6 == 0) {
    param_1[10] = 0;
  }
  if (param_1[0xc] != 0) {
    if (param_1[8] == 1) {
      lVar6 = UiLayout_UpdateAnimById(0x34);
      lVar7 = UiLayout_UpdateAnimById(0x33,7);
      if (lVar6 == 0 && lVar7 == 0) {
        param_1[0xc] = 0;
      }
    }
    else {
      lVar6 = UiLayout_UpdateAnimById(0x34);
      if (lVar6 == 0) {
        param_1[0xc] = 0;
      }
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x34,*(undefined4 *)(*param_1 * 4 + 0x36e9d0),1,0);
  }
  MenuWnd_DrawText(0x34,0x1b,1);
  MenuWnd_DrawText(0x34,0x1d,2);
  MenuWnd_DrawText(0x34,0x1c,0x15b);
  MenuWnd_DrawTextId(0x33,0x5a,4,0x58);
  iVar2 = UiMgr_FindLayout(0x33);
  iVar11 = 0;
  iVar10 = 0;
  iVar5 = *_g_UiMgr;
  if (0 < param_1[3]) {
    do {
      puVar3 = (undefined1 *)0x2;
      puVar8 = auStack_4;
      puVar1 = puVar8;
      while (puVar1 != (undefined1 *)0x0) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
        puVar3 = puVar3 + -1;
        puVar1 = puVar3;
      }
      iVar9 = iVar11 * 4;
      auStack_4[0] = *(undefined1 *)((int)param_1 + iVar10 + 0x38);
      iVar11 = iVar11 + 1;
      UiElem_GetRect(iVar5 + iVar2 * 0x4f4 + 4,auStack_40,*(undefined4 *)(&DAT_0032ad90 + iVar9));
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_1[3]);
  }
  UiLayout_UpdateAnimById(0x32,0);
  iVar5 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0x32);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0x33);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0x34);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  return;
}

// 0x0022b8f0  size 0x8f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_PleaseEnterAn(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  char acStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar5 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (iVar5 != 0) {
    uVar4 = UiRes_GetLayoutData(0x1cd);
    iVar5 = UiMgr_FindLayout(0x32);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    if (*(int *)(iVar5 + 800) == 0) {
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
      *(undefined4 *)(iVar5 + 0x318) = 1;
      *(undefined4 *)(iVar5 + 800) = uVar4;
      *(undefined4 *)(iVar5 + 0x31c) = 1;
    }
    uVar4 = UiRes_GetLayoutData(0x1ce);
    iVar5 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)(iVar5 + 800) = uVar4;
    *(undefined4 *)(iVar5 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0x1cf);
    iVar5 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)(iVar5 + 0x334) = uVar4;
    *(undefined4 *)(iVar5 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(0x1d1);
    iVar5 = UiMgr_FindLayout(0x33);
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
    *(undefined4 *)(iVar5 + 0x35c) = uVar4;
    *(undefined4 *)(iVar5 + 0x358) = 1;
    uVar4 = UiRes_GetLayoutData(0x1d2);
    iVar5 = UiMgr_FindLayout(0x33);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x370) = 0;
    *(undefined4 *)(iVar5 + 0x360) = 0;
    if (*(int *)(iVar5 + 0x370) == 0) {
      *(undefined4 *)(iVar5 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x360) = 0;
    if (*(int *)(iVar5 + 0x370) == 0) {
      *(undefined4 *)(iVar5 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar5 + 0x368) = 0;
    *(undefined4 *)(iVar5 + 0x370) = uVar4;
    *(undefined4 *)(iVar5 + 0x36c) = 1;
    uVar4 = UiRes_GetLayoutData(0x1d3);
    iVar5 = UiMgr_FindLayout(0x33);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar5 + 900) = 0;
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    *(undefined4 *)(iVar5 + 0x37c) = 1;
    *(undefined4 *)(iVar5 + 900) = uVar4;
    *(undefined4 *)(iVar5 + 0x380) = 1;
    uVar4 = UiRes_GetLayoutData(0x1d4);
    iVar5 = UiMgr_FindLayout(0x33);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x398) = 0;
    *(undefined4 *)(iVar5 + 0x388) = 0;
    if (*(int *)(iVar5 + 0x398) == 0) {
      *(undefined4 *)(iVar5 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x394) = 1;
    }
    *(undefined4 *)(iVar5 + 0x388) = 0;
    if (*(int *)(iVar5 + 0x398) == 0) {
      *(undefined4 *)(iVar5 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x394) = 1;
    }
    *(undefined4 *)(iVar5 + 0x390) = 1;
    *(undefined4 *)(iVar5 + 0x398) = uVar4;
    *(undefined4 *)(iVar5 + 0x394) = 1;
    uVar4 = UiRes_GetLayoutData(0x1db);
    iVar5 = UiMgr_FindLayout(0x33);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x3a0) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x3ac) = 0;
    *(undefined4 *)(iVar5 + 0x39c) = 0;
    if (*(int *)(iVar5 + 0x3ac) == 0) {
      *(undefined4 *)(iVar5 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar5 + 0x39c) = 0;
    if (*(int *)(iVar5 + 0x3ac) == 0) {
      *(undefined4 *)(iVar5 + 0x3a8) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3a8) = 1;
    }
    *(undefined4 *)(iVar5 + 0x3a4) = 0;
    *(undefined4 *)(iVar5 + 0x3ac) = uVar4;
    *(undefined4 *)(iVar5 + 0x3a8) = 1;
  }
  lVar9 = UiLayout_UpdateAnimById(0x33,0);
  lVar10 = UiLayout_UpdateAnimById(0x33,2);
  if (lVar9 == 0 && lVar10 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar9 = UiLayout_UpdateAnimById(0x33);
      lVar10 = UiLayout_UpdateAnimById(0x33,3);
      if (lVar9 == 0 && lVar10 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      lVar9 = UiLayout_UpdateAnimById(0x33);
      if ((lVar9 == 0) && (lVar9 = UiLayout_UpdateAnimById(0x33,4), lVar9 == 0)) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
  }
  if (*piRam0036f468 == 1) {
    UiLayout_UpdateAnimById(0x33,5);
    UiLayout_UpdateAnimById(0x33,6);
  }
  else {
    iVar5 = UiMgr_FindLayout(0x33);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x374) = 0;
    if (*(int *)(iVar5 + 900) == 0) {
      *(undefined4 *)(iVar5 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x380) = 1;
    }
    iVar5 = UiMgr_FindLayout(0x33);
    iVar5 = *_g_UiMgr + iVar5 * 0x4f4;
    *(undefined4 *)(iVar5 + 0x388) = 0;
    if (*(int *)(iVar5 + 0x398) == 0) {
      *(undefined4 *)(iVar5 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x394) = 1;
    }
  }
  iVar5 = 0;
  if (DAT_0032adf0 != -1) {
    piVar13 = &DAT_0032adf0;
    do {
      if ((iVar5 == *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0xd) && (*piRam0036f468 == 1)) {
        iVar6 = UiMgr_FindLayout(0x33);
        UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar6 * 0x4f4 + 4,*piVar13,8);
      }
      else if (*piVar13 != 0) {
        iVar6 = UiMgr_FindLayout(0x33);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar6 * 0x4f4 + 4,*piVar13,8);
      }
      piVar13 = piVar13 + 1;
      iVar5 = iVar5 + 1;
    } while (*piVar13 != -1);
  }
  MenuWnd_DrawText(0xd,0x1b,0x15c);
  MenuWnd_DrawTextId(0x33,0x5a,4,0x58);
  iVar6 = UiMgr_FindLayout(0x33);
  iVar5 = *(int *)(param_1 + 0xc);
  iVar15 = 0;
  iVar14 = 0;
  iVar6 = *_g_UiMgr + iVar6 * 0x4f4 + 4;
  if (0 < iVar5) {
    do {
      puVar8 = (undefined1 *)0x2;
      puVar12 = auStack_4;
      puVar3 = puVar12;
      while (puVar3 != (undefined1 *)0x0) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
        puVar8 = puVar8 + -1;
        puVar3 = puVar8;
      }
      iVar5 = iVar15 * 4;
      auStack_4[0] = *(undefined1 *)(param_1 + iVar14 + 0x38);
      iVar15 = iVar15 + 1;
      UiElem_GetRect(iVar6,auStack_40,*(undefined4 *)(&DAT_0032ad90 + iVar5));
      UiText_DrawPlayerName(auStack_40,auStack_4,0);
      iVar5 = *(int *)(param_1 + 0xc);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar5);
  }
  if (iVar5 < 10) {
    cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0
            [*(int *)(param_1 + 8) * 0xd + *(int *)(param_1 + 4)];
    pcVar7 = (char *)0x2;
    pcVar11 = acStack_8;
    pcVar2 = pcVar11;
    while (pcVar2 != (char *)0x0) {
      *pcVar11 = '\0';
      pcVar11 = pcVar11 + 1;
      pcVar7 = pcVar7 + -1;
      pcVar2 = pcVar7;
    }
    if ((cVar1 != '<') && (cVar1 != '>')) {
      acStack_8[0] = cVar1;
    }
    UiElem_GetRect(iVar6,auStack_40,*(undefined4 *)(&DAT_0032ad90 + *(int *)(param_1 + 0xc) * 4));
    UiText_DrawPlayerName(auStack_40,acStack_8,0);
    if (*piRam0036f468 == 1) {
      UiElem_GetRect(iVar6,auStack_40,*(undefined4 *)(&DAT_0032adc0 + *(int *)(param_1 + 0xc) * 4));
      uStack_2c = 2;
      UiText_DrawPlayerName(auStack_40,acStack_8,0);
    }
  }
  UiLayout_UpdateAnimById(0x32,0);
  iVar5 = UiMgr_FindLayout(0xd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0x32);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  iVar5 = UiMgr_FindLayout(0x33);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar5 * 0x4f4 + 4);
  return;
}

