// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00224000 - 0x00228000
#include "ghidra_types.h"

// 0x00224900  size 0x9c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_DeleteThisMessage(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  UiMgr_FindLayout(0xb2);
  iVar1 = UiMgr_FindLayout(0xb0);
  iVar6 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar2 = UiMgr_FindLayout(0xb1);
  iVar1 = param_1[8];
  iVar5 = *_g_UiMgr;
  param_1[8] = 0;
  iVar5 = iVar5 + iVar2 * 0x4f4 + 4;
  if (iVar1 == 0) {
    uVar3 = *param_1;
  }
  else {
    uVar3 = UiRes_GetLayoutData(0xf7);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar3 = UiRes_GetLayoutData(0xf9);
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0xec);
    iVar1 = UiMgr_FindLayout(0xb2);
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
    uVar3 = UiRes_GetLayoutData(0xed);
    iVar1 = UiMgr_FindLayout(0xb2);
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
    MenuWnd_SetHelpText(2);
    UiElem_SetPropFloat(0,iVar6,0x1c,8);
    UiElem_SetPropFloat(0,iVar6,0x1d,8);
    UiElem_SetPropFloat(0,iVar5,8,8);
    UiElem_SetPropFloat(0,iVar5,9,8);
    UiElem_SetPropFloat(0,iVar6,0x17,8);
    uVar3 = *param_1;
  }
  lVar4 = MenuWnd_DrawFooter(0xffffffffffffffff,uVar3,0x36e9b8);
  MenuWnd_DrawText(5,0x1c,0x43e);
  if (param_1[9] != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      param_1[9] = 0;
      *param_1 = param_1[param_1[0x19d] + 0x19e];
    }
  }
  if (lVar4 == 2) {
    param_1[7] = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  if (param_1[0x19d] == 1) {
    maybe_MenuWnd_DrawMailList(param_1[0x1a0] + param_1[param_1[0x19f] + 0xd5] * 0x28 + 0x9994);
    iVar2 = param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
            param_1[0x1a0];
    iVar1 = *(int *)(iVar2 + 0x99a0);
    if (iVar1 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar2 + 0x9994) + 0x1b9a);
      iVar1 = param_1[0x19d];
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar1 + 0xa8c);
      iVar1 = param_1[0x19d];
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(param_1[iVar1 * 200 + param_1[iVar1 + 0x19e] + 0xd] * 0x28 +
                                     param_1[0x1a0] + 0x9994) + 0x1a28);
    iVar1 = *(int *)(param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
                     param_1[0x1a0] + 0x9998);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar1,iVar1 % 7 + 0x44a);
  }
  else {
    if (param_1[0x19d] != 0) {
      iVar1 = param_1[0x19d];
      goto LAB_00224d38;
    }
    maybe_MenuWnd_DrawMailList(param_1[0x1a0] + param_1[param_1[0x19e] + 0xd] * 0x28 + 0xb8d4);
    iVar2 = param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
            param_1[0x1a0];
    iVar1 = *(int *)(iVar2 + 0xb8e0);
    if (iVar1 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar2 + 0xb8d4) + 0x1b9a);
      iVar1 = param_1[0x19d];
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar1 + 0xa8c);
      iVar1 = param_1[0x19d];
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(param_1[iVar1 * 200 + param_1[iVar1 + 0x19e] + 0xd] * 0x28 +
                                     param_1[0x1a0] + 0xb8d4) + 0x1a28);
    iVar1 = *(int *)(param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
                     param_1[0x1a0] + 0xb8d8);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar1,iVar1 % 7 + 0x44a);
  }
  iVar1 = param_1[0x19d];
LAB_00224d38:
  lVar4 = Career_GetRivalIndex
                    (param_1[0x1a0],iVar1 == 0,param_1[iVar1 * 200 + param_1[iVar1 + 0x19e] + 0xd]);
  if (lVar4 == -1) {
    UiElem_SetPropFloat(0,iVar5,3,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,iVar5,3,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  if (param_1[0x19d] == 1) {
    iVar1 = Rival_IsUnlocked(*(undefined4 *)
                              (param_1[param_1[0x19f] + 0xd5] * 0x28 + param_1[0x1a0] + 0x9994));
    if (*(int *)(iVar1 + 0x2c) != -1) {
      iVar1 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
    }
  }
  else if ((param_1[0x19d] == 0) &&
          (iVar1 = Rival_IsUnlocked(*(undefined4 *)
                                     (param_1[param_1[0x19e] + 0xd] * 0x28 + param_1[0x1a0] + 0xb8d4
                                     )), *(int *)(iVar1 + 0x2c) != -1)) {
    iVar1 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  }
  return;
}

// 0x002252d0  size 0xd24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_MessageDeleted_52d0(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  
  iVar1 = UiMgr_FindLayout(0xaf);
  iVar9 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar2 = UiMgr_FindLayout(0xb0);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar6 = *_g_UiMgr;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar6 = iVar6 + iVar2 * 0x4f4 + 4;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,iVar9,0x3f,8);
    UiElem_SetPropFloat(0,iVar9,0x41,8);
    UiElem_SetPropFloat(0,iVar6,0x1c,8);
    UiElem_SetPropFloat(0,iVar6,0x1d,8);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  MenuWnd_DrawText(5,0x1c,0x43f);
  if (*(int *)(param_1 + 0x24) != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      if (*(int *)(param_1 + 0x14) == 0) {
        lVar4 = UiLayout_UpdateAnimById(0xb0);
        if (lVar4 == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
  }
  if (lVar3 == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  iVar1 = *(int *)(param_1 + 0x674) * 4 + param_1;
  if (*(int *)(iVar1 + 0x2c) < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,*(int *)(iVar1 + 0x678) + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar1 = *(int *)(param_1 + 0x674);
  iVar6 = *(int *)(iVar1 * 4 + param_1 + 0x2c);
  if (0 < iVar6) {
    if (iVar6 < 0xb) {
      iVar2 = 0;
      if (0 < iVar6) {
        iVar6 = 0;
        puVar8 = (undefined4 *)0x32abb0;
        puVar7 = (undefined4 *)0x32ab50;
        puVar10 = (undefined4 *)0x32ab80;
        do {
          uVar11 = 0;
          if (iVar1 == 1) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar6 + 0x354) * 0x28 +
                         0x999c) == '\x01') {
              uVar11 = 5;
            }
            iVar1 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar6 + 0x354) * 0x28 +
                            0x9998);
            MenuWnd_DrawLabel(0xaf,*puVar8,0x444,iVar1,iVar1 % 7 + 0x44a);
            iVar5 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar6 + 0x34) * 0x28;
            iVar1 = *(int *)(iVar5 + 0x99a0);
            if (iVar1 == -1) {
              MenuWnd_DrawText(0xaf,*puVar7,*(int *)(iVar5 + 0x9994) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar7,iVar1 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar10,uVar11,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar6 +
                                                0x34) * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar1 == 0) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar6 + 0x34) * 0x28 +
                         0xb8dc) == '\x01') {
              uVar11 = 5;
            }
            iVar1 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar6 + 0x34) * 0x28 +
                            0xb8d8);
            MenuWnd_DrawLabel(0xaf,*puVar8,0x444,iVar1,iVar1 % 7 + 0x44a);
            iVar5 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar6 + 0x34) * 0x28;
            iVar1 = *(int *)(iVar5 + 0xb8e0);
            if (iVar1 == -1) {
              MenuWnd_DrawText(0xaf,*puVar7,*(int *)(iVar5 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar7,iVar1 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar10,uVar11,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar6 +
                                                0x34) * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar1 = *(int *)(param_1 + 0x674);
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 4;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar2 < *(int *)(param_1 + iVar1 * 4 + 0x2c));
      }
    }
    else {
      iVar1 = 0;
      puVar8 = (undefined4 *)0x32abb0;
      puVar7 = (undefined4 *)0x32ab50;
      puVar10 = (undefined4 *)0x32ab80;
      do {
        uVar11 = 0;
        if (*(int *)(param_1 + 0x674) == 1) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar1) -
                                           *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar11 = 5;
          }
          iVar6 = *(int *)(*(int *)(param_1 + 0x680) +
                           *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar1) -
                                              *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar8,0x444,iVar6,iVar6 % 7 + 0x44a);
          iVar6 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar2 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar6 + 0x678) + iVar1) - *(int *)(iVar6 + 4)) * 4 + 0x34) *
                  0x28;
          iVar6 = *(int *)(iVar2 + 0x99a0);
          if (iVar6 == -1) {
            MenuWnd_DrawText(0xaf,*puVar7,*(int *)(iVar2 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar7,iVar6 + 0xa8c);
          }
          iVar6 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar10,uVar11,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar6 + 0x678) + iVar1) -
                                               *(int *)(iVar6 + 4)) * 4 + 0x34) * 0x28 + 0x9994) +
                             0x1a28);
        }
        else if (*(int *)(param_1 + 0x674) == 0) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar1) -
                                           *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar11 = 5;
          }
          iVar6 = *(int *)(*(int *)(param_1 + 0x680) +
                           *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar1) -
                                              *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar8,0x444,iVar6,iVar6 % 7 + 0x44a);
          iVar6 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar2 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar6 + 0x678) + iVar1) - *(int *)(iVar6 + 4)) * 4 + 0x34) *
                  0x28;
          iVar6 = *(int *)(iVar2 + 0xb8e0);
          if (iVar6 == -1) {
            MenuWnd_DrawText(0xaf,*puVar7,*(int *)(iVar2 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar7,iVar6 + 0xa8c);
          }
          iVar6 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar10,uVar11,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar6 + 0x678) + iVar1) -
                                               *(int *)(iVar6 + 4)) * 4 + 0x34) * 0x28 + 0xb8d4) +
                             0x1a28);
        }
        iVar1 = iVar1 + 1;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar1 < 10);
    }
  }
  uVar11 = maybe_Mail_CountMessages(*(undefined4 *)(param_1 + 0x674));
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar11);
  iRam0036f544 = 0;
  do {
    if (iRam0036f544 == *(int *)(param_1 + *(int *)(param_1 + 0x674) * 4 + 4)) {
      UiElem_SetPropFloat(0x3f800000,iVar9,*(undefined4 *)(&DAT_0032abe0 + iRam0036f544 * 4),8);
    }
    else {
      UiElem_SetPropFloat(0,iVar9,*(undefined4 *)(&DAT_0032abe0 + iRam0036f544 * 4),8);
    }
    iRam0036f544 = iRam0036f544 + 1;
  } while (iRam0036f544 < 10);
  if (*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x2c) < 0xb) {
    iVar6 = 0;
    iVar1 = 0;
    puVar7 = &DAT_0032ac10;
    do {
      iVar2 = *(int *)(param_1 + 0x674);
      if ((iVar6 < *(int *)(param_1 + iVar2 * 4 + 0x2c)) &&
         (lVar3 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),iVar2 == 0,
                             *(undefined4 *)(param_1 + iVar2 * 800 + iVar1 + 0x34)), lVar3 != -1)) {
        UiElem_SetPropFloat(0x3f800000,iVar9,*puVar7,8);
      }
      else {
        UiElem_SetPropFloat(0,iVar9,*puVar7,8);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + 4;
      puVar7 = puVar7 + 1;
    } while (iVar6 < 0xb);
  }
  else {
    iVar1 = 0;
    puVar7 = &DAT_0032ac10;
    do {
      iVar6 = *(int *)(param_1 + 0x674);
      iVar2 = param_1 + iVar6 * 4;
      iVar5 = iVar1 + (*(int *)(iVar2 + 0x678) - *(int *)(iVar2 + 4));
      if ((iVar5 < *(int *)(iVar2 + 0x2c)) &&
         (lVar3 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),iVar6 == 0,
                             *(undefined4 *)(param_1 + iVar6 * 800 + iVar5 * 4 + 0x34)), lVar3 != -1
         )) {
        UiElem_SetPropFloat(0x3f800000,iVar9,*puVar7,8);
      }
      else {
        UiElem_SetPropFloat(0,iVar9,*puVar7,8);
      }
      iVar1 = iVar1 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar1 < 0xb);
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

// 0x00226020  size 0xc
/* state of MenuPage07; on-screen text/callee hint "MessageDeleted" (was ScrMessageDeleted_Update)
    */

void maybe_PageMail_State7_MessageDeleted(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 0x00226030  size 0xc
/* state of MenuPage07; on-screen text/callee hint "MessageDeleted" (was ScrMessageDeleted_Enter) */

void maybe_PageMail_State6_MessageDeleted(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 0x00226040  size 0xc
/* state of MenuPage07; on-screen text/callee hint "AcceptThisRival" (was ScrAcceptThisRival_Exit)
    */

void maybe_PageMail_State5_AcceptThisRival(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 0x00226050  size 0xcd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_DeleteThisMessage_6050(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  iVar1 = UiMgr_FindLayout(0xaf);
  iVar8 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar2 = UiMgr_FindLayout(0xb0);
  iVar1 = param_1[8];
  iVar5 = *_g_UiMgr;
  param_1[8] = 0;
  iVar5 = iVar5 + iVar2 * 0x4f4 + 4;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,iVar8,0x3f,8);
    UiElem_SetPropFloat(0,iVar8,0x41,8);
    UiElem_SetPropFloat(0,iVar5,0x1c,8);
    UiElem_SetPropFloat(0,iVar5,0x1d,8);
    iVar1 = 0;
    puVar6 = &DAT_0032aa60;
    do {
      iVar5 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar5 * 0x4f4 + 4,*puVar6,8);
      iVar1 = iVar1 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar1 < 10);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*param_1,0x36e9b0);
  MenuWnd_DrawText(5,0x1c,0x43e);
  if (param_1[9] != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      param_1[9] = 0;
      *param_1 = param_1[param_1[0x19d] + 0x19e];
    }
  }
  if (lVar3 == 2) {
    param_1[7] = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  if ((int)param_1[param_1[0x19d] + 0xb] < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,param_1[param_1[0x19d] + 0x19e] + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar1 = param_1[0x19d];
  iVar5 = param_1[iVar1 + 0xb];
  if (0 < iVar5) {
    if (iVar5 < 0xb) {
      iVar2 = 0;
      if (0 < iVar5) {
        iVar5 = 0;
        puVar7 = (undefined4 *)0x32aaf0;
        puVar6 = (undefined4 *)0x32aa90;
        puVar9 = (undefined4 *)0x32aac0;
        do {
          uVar10 = 0;
          if (iVar1 == 1) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar5 + 0x354) * 0x28 + 0x999c)
                == '\x01') {
              uVar10 = 5;
            }
            iVar1 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar5 + 0x354) * 0x28 + 0x9998
                            );
            MenuWnd_DrawLabel(0xaf,*puVar7,0x444,iVar1,iVar1 % 7 + 0x44a);
            iVar1 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar5 + param_1[0x19d] * 800 + 0x34) * 0x28;
            if (*(int *)(iVar1 + 0x99a0) == 0) {
              MenuWnd_DrawText(0xaf,*puVar6,0xa8c);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar6,*(int *)(iVar1 + 0x9994) + 0x1b9a);
            }
            MenuWnd_DrawTextId(0xaf,*puVar9,uVar10,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar5 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar1 == 0) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar5 + 0x34) * 0x28 + 0xb8dc) ==
                '\x01') {
              uVar10 = 5;
            }
            iVar1 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar5 + 0x34) * 0x28 + 0xb8d8)
            ;
            MenuWnd_DrawLabel(0xaf,*puVar7,0x444,iVar1,iVar1 % 7 + 0x44a);
            iVar4 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar5 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar1 = *(int *)(iVar4 + 0xb8e0);
            if (iVar1 == -1) {
              MenuWnd_DrawText(0xaf,*puVar6,*(int *)(iVar4 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar6,iVar1 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar9,uVar10,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar5 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar1 = param_1[0x19d];
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 4;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar2 < (int)param_1[iVar1 + 0xb]);
      }
    }
    else {
      iVar1 = 0;
      puVar7 = (undefined4 *)0x32aaf0;
      puVar6 = (undefined4 *)0x32aa90;
      puVar9 = (undefined4 *)0x32aac0;
      do {
        uVar10 = 0;
        if (param_1[0x19d] == 1) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19f] + iVar1) - param_1[2]) + 0xd5] * 0x28 + 0x999c) ==
              '\x01') {
            uVar10 = 5;
          }
          iVar5 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19f] + iVar1) - param_1[2]) + 0xd5] * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar7,0x444,iVar5,iVar5 % 7 + 0x44a);
          iVar5 = param_1[0x19d];
          iVar2 = param_1[0x1a0] +
                  param_1[iVar5 * 200 +
                          ((param_1[iVar5 + 0x19e] + iVar1) - param_1[iVar5 + 1]) + 0xd] * 0x28;
          iVar5 = *(int *)(iVar2 + 0x99a0);
          if (iVar5 == -1) {
            MenuWnd_DrawText(0xaf,*puVar6,*(int *)(iVar2 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar6,iVar5 + 0xa8c);
          }
          iVar5 = param_1[0x19d];
          MenuWnd_DrawTextId(0xaf,*puVar9,uVar10,
                             *(int *)(param_1[0x1a0] +
                                      param_1[iVar5 * 200 +
                                              ((param_1[iVar5 + 0x19e] + iVar1) - param_1[iVar5 + 1]
                                              ) + 0xd] * 0x28 + 0x9994) + 0x1a28);
        }
        else if (param_1[0x19d] == 0) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19e] + iVar1) - param_1[1]) + 0xd] * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar10 = 5;
          }
          iVar5 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19e] + iVar1) - param_1[1]) + 0xd] * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar7,0x444,iVar5,iVar5 % 7 + 0x44a);
          iVar5 = param_1[0x19d];
          iVar2 = param_1[0x1a0] +
                  param_1[iVar5 * 200 +
                          ((param_1[iVar5 + 0x19e] + iVar1) - param_1[iVar5 + 1]) + 0xd] * 0x28;
          iVar5 = *(int *)(iVar2 + 0xb8e0);
          if (iVar5 == -1) {
            MenuWnd_DrawText(0xaf,*puVar6,*(int *)(iVar2 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar6,iVar5 + 0xa8c);
          }
          iVar5 = param_1[0x19d];
          MenuWnd_DrawTextId(0xaf,*puVar9,uVar10,
                             *(int *)(param_1[0x1a0] +
                                      param_1[iVar5 * 200 +
                                              ((param_1[iVar5 + 0x19e] + iVar1) - param_1[iVar5 + 1]
                                              ) + 0xd] * 0x28 + 0xb8d4) + 0x1a28);
        }
        iVar1 = iVar1 + 1;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar1 < 10);
    }
  }
  uVar10 = maybe_Mail_CountMessages(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar10);
  if ((int)param_1[param_1[0x19d] + 0xb] < 0xb) {
    iVar5 = 0;
    iVar1 = 0;
    puVar6 = &DAT_0032ab20;
    do {
      iVar2 = param_1[0x19d];
      if ((iVar5 < (int)param_1[iVar2 + 0xb]) &&
         (lVar3 = Career_GetRivalIndex
                            (param_1[0x1a0],iVar2 == 0,
                             *(undefined4 *)((int)param_1 + iVar1 + iVar2 * 800 + 0x34)),
         lVar3 != -1)) {
        UiElem_SetPropFloat(0x3f800000,iVar8,*puVar6,8);
      }
      else {
        UiElem_SetPropFloat(0,iVar8,*puVar6,8);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 4;
      puVar6 = puVar6 + 1;
    } while (iVar5 < 0xb);
  }
  else {
    iVar1 = 0;
    puVar6 = &DAT_0032ab20;
    do {
      iVar5 = param_1[0x19d];
      iVar2 = iVar1 + (param_1[iVar5 + 0x19e] - param_1[iVar5 + 1]);
      if ((iVar2 < (int)param_1[iVar5 + 0xb]) &&
         (lVar3 = Career_GetRivalIndex(param_1[0x1a0],iVar5 == 0,param_1[iVar5 * 200 + iVar2 + 0xd])
         , lVar3 != -1)) {
        UiElem_SetPropFloat(0x3f800000,iVar8,*puVar6,8);
      }
      else {
        UiElem_SetPropFloat(0,iVar8,*puVar6,8);
      }
      iVar1 = iVar1 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar1 < 0xb);
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

// 0x00226d40  size 0x70c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_AcceptThisRival(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  UiMgr_FindLayout(0xb2);
  iVar1 = UiMgr_FindLayout(0xb1);
  iVar2 = param_1[8];
  iVar4 = *_g_UiMgr;
  param_1[8] = 0;
  iVar4 = iVar4 + iVar1 * 0x4f4 + 4;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*param_1,0x36e9a8);
  MenuWnd_DrawText(5,0x1c,0x448);
  if (param_1[9] != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      param_1[9] = 0;
    }
  }
  if (lVar3 == 2) {
    param_1[7] = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  if (param_1[0x19d] == 1) {
    maybe_MenuWnd_DrawMailList(param_1[0x1a0] + param_1[param_1[0x19f] + 0xd5] * 0x28 + 0x9994);
    iVar1 = param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
            param_1[0x1a0];
    iVar2 = *(int *)(iVar1 + 0x99a0);
    if (iVar2 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar1 + 0x9994) + 0x1b9a);
      iVar2 = param_1[0x19d];
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar2 + 0xa8c);
      iVar2 = param_1[0x19d];
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(param_1[iVar2 * 200 + param_1[iVar2 + 0x19e] + 0xd] * 0x28 +
                                     param_1[0x1a0] + 0x9994) + 0x1a28);
    iVar2 = *(int *)(param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
                     param_1[0x1a0] + 0x9998);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar2,iVar2 % 7 + 0x44a);
  }
  else {
    if (param_1[0x19d] != 0) {
      iVar2 = param_1[0x19d];
      goto LAB_00227150;
    }
    maybe_MenuWnd_DrawMailList(param_1[0x1a0] + param_1[param_1[0x19e] + 0xd] * 0x28 + 0xb8d4);
    iVar1 = param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
            param_1[0x1a0];
    iVar2 = *(int *)(iVar1 + 0xb8e0);
    if (iVar2 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar1 + 0xb8d4) + 0x1b9a);
      iVar2 = param_1[0x19d];
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar2 + 0xa8c);
      iVar2 = param_1[0x19d];
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(param_1[iVar2 * 200 + param_1[iVar2 + 0x19e] + 0xd] * 0x28 +
                                     param_1[0x1a0] + 0xb8d4) + 0x1a28);
    iVar2 = *(int *)(param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
                     param_1[0x1a0] + 0xb8d8);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar2,iVar2 % 7 + 0x44a);
  }
  iVar2 = param_1[0x19d];
LAB_00227150:
  lVar3 = Career_GetRivalIndex
                    (param_1[0x1a0],iVar2 == 0,param_1[iVar2 * 200 + param_1[iVar2 + 0x19e] + 0xd]);
  if (lVar3 == -1) {
    UiElem_SetPropFloat(0,iVar4,3,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,iVar4,3,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  if (param_1[0x19d] == 1) {
    iVar2 = Rival_IsUnlocked(*(undefined4 *)
                              (param_1[param_1[0x19f] + 0xd5] * 0x28 + param_1[0x1a0] + 0x9994));
    if (*(int *)(iVar2 + 0x2c) != -1) {
      iVar2 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
    }
  }
  else if ((param_1[0x19d] == 0) &&
          (iVar2 = Rival_IsUnlocked(*(undefined4 *)
                                     (param_1[param_1[0x19e] + 0xd] * 0x28 + param_1[0x1a0] + 0xb8d4
                                     )), *(int *)(iVar2 + 0x2c) != -1)) {
    iVar2 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  }
  return;
}

// 0x00227450  size 0xa20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Mail_7450(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  UiMgr_FindLayout(0xb2);
  iVar1 = UiMgr_FindLayout(0xb0);
  iVar7 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar2 = UiMgr_FindLayout(0xb1);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar6 = *_g_UiMgr;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar6 = iVar6 + iVar2 * 0x4f4 + 4;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    uVar3 = UiRes_GetLayoutData(0xf7);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar3;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar3 = UiRes_GetLayoutData(0xf9);
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
    *(undefined4 *)(iVar1 + 800) = uVar3;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0xec);
    iVar1 = UiMgr_FindLayout(0xb2);
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
    uVar3 = UiRes_GetLayoutData(0xed);
    iVar1 = UiMgr_FindLayout(0xb2);
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
    uVar3 = UiRes_GetLayoutData(0x40a);
    iVar1 = UiMgr_FindLayout(0xb2);
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
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,iVar7,0x1c,8);
    UiElem_SetPropFloat(0,iVar7,0x1d,8);
    UiElem_SetPropFloat(0,iVar6,8,8);
    UiElem_SetPropFloat(0,iVar6,9,8);
    UiElem_SetPropFloat(0,iVar7,0x17,8);
    iVar2 = UiMgr_FindLayout(0xb2);
    iVar1 = *_g_UiMgr;
    uVar5 = UiRes_GetLayoutData(0xed);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar5);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  if (*(int *)(param_1 + 0x674) == 1) {
    maybe_MenuWnd_DrawMailList
              (*(int *)(param_1 + 0x680) +
               *(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 + 0x9994);
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar1 = *(int *)(iVar2 + 0x99a0);
    if (iVar1 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar2 + 0x9994) + 0x1b9a);
      iVar1 = *(int *)(param_1 + 0x674);
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar1 + 0xa8c);
      iVar1 = *(int *)(param_1 + 0x674);
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(*(int *)(*(int *)(iVar1 * 4 + param_1 + 0x678) * 4 +
                                              iVar1 * 800 + param_1 + 0x34) * 0x28 +
                                     *(int *)(param_1 + 0x680) + 0x9994) + 0x1a28);
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0x9998);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar1,iVar1 % 7 + 0x44a);
  }
  else {
    if (*(int *)(param_1 + 0x674) != 0) {
      iVar1 = *(int *)(param_1 + 0x674);
      goto LAB_0022782c;
    }
    maybe_MenuWnd_DrawMailList
              (*(int *)(param_1 + 0x680) +
               *(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) * 0x28 + 0xb8d4);
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar1 = *(int *)(iVar2 + 0xb8e0);
    if (iVar1 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar2 + 0xb8d4) + 0x1b9a);
      iVar1 = *(int *)(param_1 + 0x674);
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar1 + 0xa8c);
      iVar1 = *(int *)(param_1 + 0x674);
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(*(int *)(*(int *)(iVar1 * 4 + param_1 + 0x678) * 4 +
                                              iVar1 * 800 + param_1 + 0x34) * 0x28 +
                                     *(int *)(param_1 + 0x680) + 0xb8d4) + 0x1a28);
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0xb8d8);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar1,iVar1 % 7 + 0x44a);
  }
  iVar1 = *(int *)(param_1 + 0x674);
LAB_0022782c:
  lVar4 = Career_GetRivalIndex
                    (*(undefined4 *)(param_1 + 0x680),iVar1 == 0,
                     *(undefined4 *)
                      (*(int *)(iVar1 * 4 + param_1 + 0x678) * 4 + iVar1 * 800 + param_1 + 0x34));
  if (lVar4 == -1) {
    UiElem_SetPropFloat(0,iVar6,3,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,iVar6,3,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  if (*(int *)(param_1 + 0x674) == 1) {
    iVar1 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                               *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar1 + 0x2c) != -1) {
      iVar1 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
      UiLayout_UpdateAnimById(0xb2,2);
    }
  }
  else if ((*(int *)(param_1 + 0x674) == 0) &&
          (iVar1 = Rival_IsUnlocked(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) *
                                      0x28 + *(int *)(param_1 + 0x680) + 0xb8d4)),
          *(int *)(iVar1 + 0x2c) != -1)) {
    iVar1 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
    UiLayout_UpdateAnimById(0xb2,2);
  }
  return;
}

// 0x00227e70  size 0x2224
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Mail_7e70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int iVar14;
  
  iVar1 = UiMgr_FindLayout(0xaf);
  iVar11 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar1 = UiMgr_FindLayout(0xb0);
  iVar14 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  UiMgr_FindLayout(0xb1);
  iVar1 = param_1[8];
  param_1[8] = 0;
  if (iVar1 == 0) {
    iVar1 = param_1[0x19d];
  }
  else {
    uVar2 = UiRes_GetLayoutData(0xee);
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
    uVar2 = UiRes_GetLayoutData(0xef);
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
    uVar2 = UiRes_GetLayoutData(0xf7);
    iVar1 = UiMgr_FindLayout(0xb0);
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
    uVar2 = UiRes_GetLayoutData(0xf9);
    iVar1 = UiMgr_FindLayout(0xb0);
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
    MenuWnd_DrawDialogText(0xb0,0x36e998,2,1);
    UiElem_SetPropFloat(0,iVar11,0x3f,8);
    UiElem_SetPropFloat(0,iVar11,0x41,8);
    UiElem_SetPropFloat(0,iVar14,0x1c,8);
    UiElem_SetPropFloat(0,iVar14,0x1d,8);
    UiElem_SetPropFloat(0x3f800000,iVar14,0x17,8);
    uRam0036f540 = 0;
    do {
      UiElem_SetPropFloat(0,iVar11,(&DAT_0032a970)[uRam0036f540],8);
      uRam0036f540 = uRam0036f540 + 1;
    } while (uRam0036f540 < 0xb);
    iVar1 = param_1[0x19d];
  }
  if (param_1[iVar1 + 0xb] < 0xb) {
    iVar1 = param_1[3];
  }
  else {
    MenuWnd_DrawCursor(1);
    iVar1 = param_1[3];
  }
  if (iVar1 - 2U < 2) {
    if (param_1[0x19d] == 1) {
      lVar3 = UiLayout_UpdateAnimById(0xb0,2);
      lVar4 = UiLayout_UpdateAnimById(0xaf,0);
      if (lVar3 == 0 && lVar4 == 0) {
        param_1[7] = 0;
      }
    }
    else {
      lVar3 = UiLayout_UpdateAnimById(0xb0,2);
      lVar4 = UiLayout_UpdateAnimById(0xaf,0);
      if (lVar3 == 0 && lVar4 == 0) {
        param_1[7] = 0;
      }
    }
    UiElem_SetPropFloat(0,iVar11,0x3f,8);
    UiElem_SetPropFloat(0,iVar11,0x41,8);
    iVar1 = param_1[9];
  }
  else {
    if (((iVar1 == 4) || (iVar1 == 8)) || (iVar1 == 10)) {
      param_1[7] = 0;
    }
    else if (param_1[0x19d] == 1) {
      lVar3 = UiLayout_UpdateAnimById(0xb0,0);
      if (lVar3 == 0) {
        param_1[7] = 0;
      }
    }
    else {
      param_1[7] = 0;
    }
    iVar1 = param_1[9];
  }
  if (iVar1 != 0) {
    if (param_1[5] == 2) {
      if (param_1[0x19d] == 1) {
        lVar3 = UiLayout_UpdateAnimById(0xb0,3);
        lVar4 = UiLayout_UpdateAnimById(0xaf,1);
        if (lVar3 == 0 && lVar4 == 0) {
          param_1[9] = 0;
        }
      }
      else {
        lVar3 = UiLayout_UpdateAnimById(0xb0,3);
        lVar4 = UiLayout_UpdateAnimById(0xaf,1);
        if (lVar3 == 0 && lVar4 == 0) {
          param_1[9] = 0;
        }
      }
      UiElem_SetPropFloat(0,iVar11,0x3f,8);
      UiElem_SetPropFloat(0,iVar11,0x41,8);
    }
    else if (param_1[5] == 4) {
      param_1[9] = 0;
    }
    else if (param_1[0x19d] == 1) {
      lVar3 = UiLayout_UpdateAnimById(0xb0);
      if (lVar3 == 0) {
        param_1[9] = 0;
      }
    }
    else {
      param_1[9] = 0;
    }
    iVar1 = 0;
    puVar8 = &DAT_0032a970;
    do {
      UiElem_SetPropFloat(0,iVar11,*puVar8,8);
      iVar1 = iVar1 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar1 < 10);
    MenuWnd_SetItemVisible(0);
  }
  if (param_1[0x1a1] == 3) {
    if (param_1[0x19d] == 0) {
      lVar3 = UiLayout_UpdateAnimById(0xb0,1);
      if (lVar3 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        param_1[0x1a1] = 2;
        iVar1 = UiMgr_FindLayout(0xaf);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,5,8);
        uVar2 = UiRes_GetLayoutData(0xef);
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
        if (param_1[0xb] < 10) {
          iVar1 = UiMgr_FindLayout(0xb0);
          UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x1c,8);
          iVar1 = UiMgr_FindLayout(0xb0);
          UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x1d,8);
        }
      }
    }
    else if ((param_1[0x19d] == 1) && (lVar3 = UiLayout_UpdateAnimById(0xb0,0), lVar3 == 0)) {
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      param_1[0x1a1] = 2;
      iVar1 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,4,8);
      uVar2 = UiRes_GetLayoutData(0xee);
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
      if (param_1[0xc] < 10) {
        iVar1 = UiMgr_FindLayout(0xb0);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x1c,8);
        iVar1 = UiMgr_FindLayout(0xb0);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x1d,8);
      }
    }
    uVar9 = 0;
    puVar8 = &DAT_0032a970;
    do {
      UiElem_SetPropFloat(0,iVar11,*puVar8,8);
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 < 0xb);
  }
  if ((*piRam0036f468 == 1) && (param_1[0x1a1] == 2)) {
    MenuWnd_SetItemState(0xaf,(&DAT_0032a970)[*param_1],0,0);
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
  iVar6 = param_1[iVar1 + 0xb];
  if (0 < iVar6) {
    if (iVar6 < 0xb) {
      iVar5 = 0;
      if (0 < iVar6) {
        iVar6 = 0;
        puVar10 = (undefined4 *)0x32aa00;
        puVar8 = (undefined4 *)0x32a9a0;
        puVar12 = (undefined4 *)0x32a9d0;
        do {
          uVar13 = 0;
          if (iVar1 == 1) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar6 + 0x354) * 0x28 + 0x999c)
                == '\x01') {
              uVar13 = 5;
            }
            iVar1 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar6 + 0x354) * 0x28 + 0x9998
                            );
            MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar1,iVar1 % 7 + 0x44a);
            iVar7 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar6 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar1 = *(int *)(iVar7 + 0x99a0);
            if (iVar1 == -1) {
              MenuWnd_DrawText(0xaf,*puVar8,*(int *)(iVar7 + 0x9994) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar8,iVar1 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar6 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar1 == 0) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar6 + 0x34) * 0x28 + 0xb8dc) ==
                '\x01') {
              uVar13 = 5;
            }
            iVar1 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar6 + 0x34) * 0x28 + 0xb8d8)
            ;
            MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar1,iVar1 % 7 + 0x44a);
            iVar7 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar6 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar1 = *(int *)(iVar7 + 0xb8e0);
            if (iVar1 == -1) {
              MenuWnd_DrawText(0xaf,*puVar8,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar8,iVar1 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar6 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar1 = param_1[0x19d];
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 4;
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        } while (iVar5 < param_1[iVar1 + 0xb]);
      }
    }
    else {
      iVar1 = 0;
      puVar10 = (undefined4 *)0x32aa00;
      puVar8 = (undefined4 *)0x32a9a0;
      puVar12 = (undefined4 *)0x32a9d0;
      do {
        uVar13 = 0;
        if (param_1[0x19d] == 1) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19f] + iVar1) - *param_1) + 0xd5] * 0x28 + 0x999c) ==
              '\x01') {
            uVar13 = 5;
          }
          iVar6 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19f] + iVar1) - *param_1) + 0xd5] * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar6,iVar6 % 7 + 0x44a);
          iVar5 = param_1[0x1a0] +
                  param_1[param_1[0x19d] * 200 +
                          ((param_1[param_1[0x19d] + 0x19e] + iVar1) - *param_1) + 0xd] * 0x28;
          iVar6 = *(int *)(iVar5 + 0x99a0);
          if (iVar6 == -1) {
            MenuWnd_DrawText(0xaf,*puVar8,*(int *)(iVar5 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar8,iVar6 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                             *(int *)(param_1[0x1a0] +
                                      param_1[param_1[0x19d] * 200 +
                                              ((param_1[param_1[0x19d] + 0x19e] + iVar1) - *param_1)
                                              + 0xd] * 0x28 + 0x9994) + 0x1a28);
        }
        else if (param_1[0x19d] == 0) {
          if (*(char *)(param_1[0x1a0] + param_1[((param_1[0x19e] + iVar1) - *param_1) + 0xd] * 0x28
                       + 0xb8dc) == '\x01') {
            uVar13 = 5;
          }
          iVar6 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19e] + iVar1) - *param_1) + 0xd] * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar6,iVar6 % 7 + 0x44a);
          iVar5 = param_1[0x1a0] +
                  param_1[param_1[0x19d] * 200 +
                          ((param_1[param_1[0x19d] + 0x19e] + iVar1) - *param_1) + 0xd] * 0x28;
          iVar6 = *(int *)(iVar5 + 0xb8e0);
          if (iVar6 == -1) {
            MenuWnd_DrawText(0xaf,*puVar8,*(int *)(iVar5 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar8,iVar6 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                             *(int *)(param_1[0x1a0] +
                                      param_1[param_1[0x19d] * 200 +
                                              ((param_1[param_1[0x19d] + 0x19e] + iVar1) - *param_1)
                                              + 0xd] * 0x28 + 0xb8d4) + 0x1a28);
        }
        iVar1 = iVar1 + 1;
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar1 < 10);
    }
  }
  if (param_1[0x1a1] == 0) {
    uVar13 = 0;
    if (param_1[0x19d] == 1) {
      if (*(char *)(param_1[(param_1[0x19f] - *param_1) + 0xd4] * 0x28 + param_1[0x1a0] + 0x999c) ==
          '\x01') {
        uVar13 = 5;
      }
      iVar1 = *(int *)(param_1[(param_1[0x19f] - *param_1) + 0xd4] * 0x28 + param_1[0x1a0] + 0x9998)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar1,iVar1 % 7 + 0x44a);
      iVar6 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] *
              0x28 + param_1[0x1a0];
      iVar1 = *(int *)(iVar6 + 0x99a0);
      if (iVar1 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar6 + 0x9994) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar1 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar13,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] * 0x28
                                  + param_1[0x1a0] + 0x9994) + 0x1a28);
      goto LAB_00229558;
    }
    if (param_1[0x19d] == 0) {
      if (*(char *)(param_1[(param_1[0x19e] - *param_1) + 0xc] * 0x28 + param_1[0x1a0] + 0xb8dc) ==
          '\x01') {
        uVar13 = 5;
      }
      iVar1 = *(int *)(param_1[(param_1[0x19e] - *param_1) + 0xc] * 0x28 + param_1[0x1a0] + 0xb8d8);
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar1,iVar1 % 7 + 0x44a);
      iVar6 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] *
              0x28 + param_1[0x1a0];
      iVar1 = *(int *)(iVar6 + 0xb8e0);
      if (iVar1 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar6 + 0xb8d4) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar1 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar13,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] * 0x28
                                  + param_1[0x1a0] + 0xb8d4) + 0x1a28);
      goto LAB_00229558;
    }
    iVar1 = param_1[0x1a1];
  }
  else {
LAB_00229558:
    iVar1 = param_1[0x1a1];
  }
  if (iVar1 == 1) {
    uVar13 = 0;
    if (param_1[0x19d] == 1) {
      if (*(char *)(param_1[(param_1[0x19f] - *param_1) + 0xdf] * 0x28 + param_1[0x1a0] + 0x999c) ==
          '\x01') {
        uVar13 = 5;
      }
      iVar1 = *(int *)(param_1[(param_1[0x19f] - *param_1) + 0xdf] * 0x28 + param_1[0x1a0] + 0x9998)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar1,iVar1 % 7 + 0x44a);
      iVar6 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
              0x28 + param_1[0x1a0];
      iVar1 = *(int *)(iVar6 + 0x99a0);
      if (iVar1 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar6 + 0x9994) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar1 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar13,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
                                  0x28 + param_1[0x1a0] + 0x9994) + 0x1a28);
    }
    else {
      if (param_1[0x19d] != 0) {
        iVar1 = param_1[0x19d];
        goto LAB_002298fc;
      }
      if (*(char *)(param_1[(param_1[0x19e] - *param_1) + 0x17] * 0x28 + param_1[0x1a0] + 0xb8dc) ==
          '\x01') {
        uVar13 = 5;
      }
      iVar1 = *(int *)(param_1[(param_1[0x19e] - *param_1) + 0x17] * 0x28 + param_1[0x1a0] + 0xb8d8)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar1,iVar1 % 7 + 0x44a);
      iVar6 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
              0x28 + param_1[0x1a0];
      iVar1 = *(int *)(iVar6 + 0xb8e0);
      if (iVar1 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar6 + 0xb8d4) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar1 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar13,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
                                  0x28 + param_1[0x1a0] + 0xb8d4) + 0x1a28);
    }
  }
  iVar1 = param_1[0x19d];
LAB_002298fc:
  if (param_1[iVar1 + 0xb] < 0xb) {
    iVar6 = 0;
    iVar1 = 0;
    puVar8 = &DAT_0032aa30;
    do {
      iVar5 = param_1[0x19d];
      if ((iVar6 < param_1[iVar5 + 0xb]) &&
         (lVar3 = Career_GetRivalIndex
                            (param_1[0x1a0],iVar5 == 0,
                             *(undefined4 *)((int)param_1 + iVar1 + iVar5 * 800 + 0x34)),
         lVar3 != -1)) {
        UiElem_SetPropFloat(0x3f800000,iVar11,*puVar8,8);
      }
      else {
        UiElem_SetPropFloat(0,iVar11,*puVar8,8);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + 4;
      puVar8 = puVar8 + 1;
    } while (iVar6 < 0xb);
  }
  else if (param_1[0x1a1] == 0) {
    iVar1 = 0;
    puVar8 = &DAT_0032aa30;
    do {
      iVar6 = param_1[0x19d];
      iVar5 = iVar1 + (param_1[iVar6 + 0x19e] - *param_1);
      if ((iVar5 < param_1[iVar6 + 0xb]) &&
         (lVar3 = Career_GetRivalIndex(param_1[0x1a0],iVar6 == 0,param_1[iVar6 * 200 + iVar5 + 0xd])
         , lVar3 != -1)) {
        UiElem_SetPropFloat(0x3f800000,iVar11,*puVar8,8);
      }
      else {
        UiElem_SetPropFloat(0,iVar11,*puVar8,8);
      }
      iVar1 = iVar1 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar1 < 10);
    iVar1 = param_1[0x19d];
    if (((param_1[iVar1 + 0x19e] - *param_1) + -1 < param_1[iVar1 + 0xb]) &&
       (lVar3 = Career_GetRivalIndex
                          (param_1[0x1a0],iVar1 == 0,
                           param_1[iVar1 * 200 + (param_1[iVar1 + 0x19e] - *param_1) + 0xc]),
       lVar3 != -1)) {
      UiElem_SetPropFloat(0x3f800000,iVar11,DAT_0032aa58,8);
    }
    else {
      UiElem_SetPropFloat(0,iVar11,DAT_0032aa58,8);
    }
  }
  else {
    iVar1 = 0;
    puVar8 = &DAT_0032aa30;
    do {
      iVar6 = param_1[0x19d];
      iVar5 = iVar1 + (param_1[iVar6 + 0x19e] - *param_1);
      if ((iVar5 < param_1[iVar6 + 0xb]) &&
         (lVar3 = Career_GetRivalIndex(param_1[0x1a0],iVar6 == 0,param_1[iVar6 * 200 + iVar5 + 0xd])
         , lVar3 != -1)) {
        UiElem_SetPropFloat(0x3f800000,iVar11,*puVar8,8);
      }
      else {
        UiElem_SetPropFloat(0,iVar11,*puVar8,8);
      }
      iVar1 = iVar1 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar1 < 0xb);
  }
  if ((param_1[0x1a1] == 0) && (lVar3 = UiLayout_UpdateAnimById(0xaf,2), lVar3 == 0)) {
    param_1[0x1a1] = 2;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
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
    Menu_ClearSlot(0);
    iVar1 = param_1[0x1a1];
  }
  else {
    iVar1 = param_1[0x1a1];
  }
  if ((iVar1 == 1) && (lVar3 = UiLayout_UpdateAnimById(0xaf,3), lVar3 == 0)) {
    param_1[0x1a1] = 2;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
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
  }
  uVar13 = maybe_Mail_CountMessages(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar13);
  UiElem_SetPropFloat(0x3f800000,iVar11,*(undefined4 *)(param_1[0x19d] * 4 + 0x36e9a0),8);
  UiElem_SetPropFloat(0x3f800000,iVar14,0x17,8);
  if (param_1[param_1[0x19d] + 0xb] < 0xb) {
    UiElem_SetPropFloat(0x41800000,iVar14,1,2);
    UiElem_SetPropFloat(0x41600000,iVar14,1,6);
  }
  else {
    UiElem_SetPropFloat((10.0 / (float)param_1[param_1[0x19d] + 0xb]) * 14.0,iVar14,1,6);
    UiElem_SetPropFloat((224.0 / (float)param_1[param_1[0x19d] + 0xb]) *
                        (float)(param_1[param_1[0x19d] + 0x19e] - *param_1) + 16.0,iVar14,1,2);
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

