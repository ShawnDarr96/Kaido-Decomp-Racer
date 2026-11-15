// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00224000 - 0x00228000
#include "ghidra_types.h"

// 0x00224900  size 0x9c4
void ScrCareer_Draw_DeleteThisMessage(undefined4 *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  UiLayout *pUVar6;
  UiLayout *pUVar7;
  
  UiMgr_FindLayout(0xb2);
  iVar2 = UiMgr_FindLayout(0xb0);
  pUVar7 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xb1);
  iVar2 = param_1[8];
  pUVar1 = g_UiMgr->slots;
  param_1[8] = 0;
  pUVar6 = &pUVar1[iVar3].layout;
  if (iVar2 == 0) {
    uVar4 = *param_1;
  }
  else {
    uVar4 = UiRes_GetLayoutData(0xf7);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
    pUVar1[iVar2].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0xf9);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar4;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xec);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar4;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xed);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
    pUVar1[iVar2].layout.animState = 1;
    Menu_ClearSlot(0);
    MenuWnd_SetHelpText(2);
    UiElem_SetPropFloat(0,pUVar7,0x1c,8);
    UiElem_SetPropFloat(0,pUVar7,0x1d,8);
    UiElem_SetPropFloat(0,pUVar6,8,8);
    UiElem_SetPropFloat(0,pUVar6,9,8);
    UiElem_SetPropFloat(0,pUVar7,0x17,8);
    uVar4 = *param_1;
  }
  lVar5 = MenuWnd_DrawFooter(0xffffffffffffffff,uVar4,0x36e9b8);
  MenuWnd_DrawText(5,0x1c,0x43e);
  if (param_1[9] != 0) {
    if (lVar5 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar5 == 3) {
      param_1[9] = 0;
      *param_1 = param_1[param_1[0x19d] + 0x19e];
    }
  }
  if (lVar5 == 2) {
    param_1[7] = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  if (param_1[0x19d] == 1) {
    maybe_MenuWnd_DrawMailList(param_1[0x1a0] + param_1[param_1[0x19f] + 0xd5] * 0x28 + 0x9994);
    iVar3 = param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
            param_1[0x1a0];
    iVar2 = *(int *)(iVar3 + 0x99a0);
    if (iVar2 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar3 + 0x9994) + 0x1b9a);
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
      goto LAB_00224d38;
    }
    maybe_MenuWnd_DrawMailList(param_1[0x1a0] + param_1[param_1[0x19e] + 0xd] * 0x28 + 0xb8d4);
    iVar3 = param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
            param_1[0x1a0];
    iVar2 = *(int *)(iVar3 + 0xb8e0);
    if (iVar2 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar3 + 0xb8d4) + 0x1b9a);
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
LAB_00224d38:
  lVar5 = Career_GetRivalIndex
                    (param_1[0x1a0],iVar2 == 0,param_1[iVar2 * 200 + param_1[iVar2 + 0x19e] + 0xd]);
  if (lVar5 == -1) {
    UiElem_SetPropFloat(0,pUVar6,3,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,pUVar6,3,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  if (param_1[0x19d] == 1) {
    iVar2 = Rival_IsUnlocked(*(undefined4 *)
                              (param_1[param_1[0x19f] + 0xd5] * 0x28 + param_1[0x1a0] + 0x9994));
    if (*(int *)(iVar2 + 0x2c) != -1) {
      iVar2 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
    }
  }
  else if ((param_1[0x19d] == 0) &&
          (iVar2 = Rival_IsUnlocked(*(undefined4 *)
                                     (param_1[param_1[0x19e] + 0xd] * 0x28 + param_1[0x1a0] + 0xb8d4
                                     )), *(int *)(iVar2 + 0x2c) != -1)) {
    iVar2 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  }
  return;
}

// 0x002252d0  size 0xd24
void ScrCareer_Draw_MessageDeleted_52d0(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  UiLayout *pUVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  UiLayout *pUVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  
  iVar2 = UiMgr_FindLayout(0xaf);
  pUVar11 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xb0);
  iVar2 = *(int *)(param_1 + 0x20);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pUVar8 = &pUVar1[iVar3].layout;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(0);
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,pUVar11,0x3f,8);
    UiElem_SetPropFloat(0,pUVar11,0x41,8);
    UiElem_SetPropFloat(0,pUVar8,0x1c,8);
    UiElem_SetPropFloat(0,pUVar8,0x1d,8);
  }
  lVar5 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  MenuWnd_DrawText(5,0x1c,0x43f);
  if (*(int *)(param_1 + 0x24) != 0) {
    if (lVar5 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar5 == 3) {
      if (*(int *)(param_1 + 0x14) == 0) {
        lVar6 = UiLayout_UpdateAnimById(0xb0);
        if (lVar6 == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
  }
  if (lVar5 == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  iVar2 = *(int *)(param_1 + 0x674) * 4 + param_1;
  if (*(int *)(iVar2 + 0x2c) < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,*(int *)(iVar2 + 0x678) + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar2 = *(int *)(param_1 + 0x674);
  iVar3 = *(int *)(iVar2 * 4 + param_1 + 0x2c);
  if (0 < iVar3) {
    if (iVar3 < 0xb) {
      iVar4 = 0;
      if (0 < iVar3) {
        iVar3 = 0;
        puVar10 = (undefined4 *)0x32abb0;
        puVar9 = (undefined4 *)0x32ab50;
        puVar12 = (undefined4 *)0x32ab80;
        do {
          uVar13 = 0;
          if (iVar2 == 1) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar3 + 0x354) * 0x28 +
                         0x999c) == '\x01') {
              uVar13 = 5;
            }
            iVar2 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar3 + 0x354) * 0x28 +
                            0x9998);
            MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar7 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar3 + 0x34) * 0x28;
            iVar2 = *(int *)(iVar7 + 0x99a0);
            if (iVar2 == -1) {
              MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar7 + 0x9994) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar9,iVar2 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar3 +
                                                0x34) * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar2 == 0) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar3 + 0x34) * 0x28 +
                         0xb8dc) == '\x01') {
              uVar13 = 5;
            }
            iVar2 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar3 + 0x34) * 0x28 +
                            0xb8d8);
            MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar7 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar3 + 0x34) * 0x28;
            iVar2 = *(int *)(iVar7 + 0xb8e0);
            if (iVar2 == -1) {
              MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar9,iVar2 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar3 +
                                                0x34) * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar2 = *(int *)(param_1 + 0x674);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        } while (iVar4 < *(int *)(param_1 + iVar2 * 4 + 0x2c));
      }
    }
    else {
      iVar2 = 0;
      puVar10 = (undefined4 *)0x32abb0;
      puVar9 = (undefined4 *)0x32ab50;
      puVar12 = (undefined4 *)0x32ab80;
      do {
        uVar13 = 0;
        if (*(int *)(param_1 + 0x674) == 1) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar2) -
                                           *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar13 = 5;
          }
          iVar3 = *(int *)(*(int *)(param_1 + 0x680) +
                           *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar2) -
                                              *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar3,iVar3 % 7 + 0x44a);
          iVar3 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar4 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar3 + 0x678) + iVar2) - *(int *)(iVar3 + 4)) * 4 + 0x34) *
                  0x28;
          iVar3 = *(int *)(iVar4 + 0x99a0);
          if (iVar3 == -1) {
            MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar4 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar9,iVar3 + 0xa8c);
          }
          iVar3 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar3 + 0x678) + iVar2) -
                                               *(int *)(iVar3 + 4)) * 4 + 0x34) * 0x28 + 0x9994) +
                             0x1a28);
        }
        else if (*(int *)(param_1 + 0x674) == 0) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar2) -
                                           *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar13 = 5;
          }
          iVar3 = *(int *)(*(int *)(param_1 + 0x680) +
                           *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar2) -
                                              *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar10,0x444,iVar3,iVar3 % 7 + 0x44a);
          iVar3 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar4 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar3 + 0x678) + iVar2) - *(int *)(iVar3 + 4)) * 4 + 0x34) *
                  0x28;
          iVar3 = *(int *)(iVar4 + 0xb8e0);
          if (iVar3 == -1) {
            MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar4 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar9,iVar3 + 0xa8c);
          }
          iVar3 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar12,uVar13,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar3 + 0x678) + iVar2) -
                                               *(int *)(iVar3 + 4)) * 4 + 0x34) * 0x28 + 0xb8d4) +
                             0x1a28);
        }
        iVar2 = iVar2 + 1;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar2 < 10);
    }
  }
  uVar13 = maybe_Mail_CountMessages(*(undefined4 *)(param_1 + 0x674));
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar13);
  iRam0036f544 = 0;
  do {
    if (iRam0036f544 == *(int *)(param_1 + *(int *)(param_1 + 0x674) * 4 + 4)) {
      UiElem_SetPropFloat(0x3f800000,pUVar11,*(undefined4 *)(&DAT_0032abe0 + iRam0036f544 * 4),8);
    }
    else {
      UiElem_SetPropFloat(0,pUVar11,*(undefined4 *)(&DAT_0032abe0 + iRam0036f544 * 4),8);
    }
    iRam0036f544 = iRam0036f544 + 1;
  } while (iRam0036f544 < 10);
  if (*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x2c) < 0xb) {
    iVar3 = 0;
    iVar2 = 0;
    puVar9 = &DAT_0032ac10;
    do {
      iVar4 = *(int *)(param_1 + 0x674);
      if ((iVar3 < *(int *)(param_1 + iVar4 * 4 + 0x2c)) &&
         (lVar5 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),iVar4 == 0,
                             *(undefined4 *)(param_1 + iVar4 * 800 + iVar2 + 0x34)), lVar5 != -1)) {
        UiElem_SetPropFloat(0x3f800000,pUVar11,*puVar9,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar11,*puVar9,8);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      puVar9 = puVar9 + 1;
    } while (iVar3 < 0xb);
  }
  else {
    iVar2 = 0;
    puVar9 = &DAT_0032ac10;
    do {
      iVar3 = *(int *)(param_1 + 0x674);
      iVar4 = param_1 + iVar3 * 4;
      iVar7 = iVar2 + (*(int *)(iVar4 + 0x678) - *(int *)(iVar4 + 4));
      if ((iVar7 < *(int *)(iVar4 + 0x2c)) &&
         (lVar5 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),iVar3 == 0,
                             *(undefined4 *)(param_1 + iVar3 * 800 + iVar7 * 4 + 0x34)), lVar5 != -1
         )) {
        UiElem_SetPropFloat(0x3f800000,pUVar11,*puVar9,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar11,*puVar9,8);
      }
      iVar2 = iVar2 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar2 < 0xb);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
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
void ScrCareer_Draw_DeleteThisMessage_6050(undefined4 *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  UiLayout *pUVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  UiLayout *pUVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  
  iVar2 = UiMgr_FindLayout(0xaf);
  pUVar10 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xb0);
  iVar2 = param_1[8];
  pUVar1 = g_UiMgr->slots;
  param_1[8] = 0;
  pUVar7 = &pUVar1[iVar3].layout;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,pUVar10,0x3f,8);
    UiElem_SetPropFloat(0,pUVar10,0x41,8);
    UiElem_SetPropFloat(0,pUVar7,0x1c,8);
    UiElem_SetPropFloat(0,pUVar7,0x1d,8);
    iVar2 = 0;
    puVar8 = &DAT_0032aa60;
    do {
      iVar3 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar8,8);
      iVar2 = iVar2 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar2 < 10);
  }
  lVar4 = MenuWnd_DrawFooter(0xffffffffffffffff,*param_1,0x36e9b0);
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
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  if ((int)param_1[param_1[0x19d] + 0xb] < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,param_1[param_1[0x19d] + 0x19e] + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar2 = param_1[0x19d];
  iVar3 = param_1[iVar2 + 0xb];
  if (0 < iVar3) {
    if (iVar3 < 0xb) {
      iVar5 = 0;
      if (0 < iVar3) {
        iVar3 = 0;
        puVar9 = (undefined4 *)0x32aaf0;
        puVar8 = (undefined4 *)0x32aa90;
        puVar11 = (undefined4 *)0x32aac0;
        do {
          uVar12 = 0;
          if (iVar2 == 1) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar3 + 0x354) * 0x28 + 0x999c)
                == '\x01') {
              uVar12 = 5;
            }
            iVar2 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar3 + 0x354) * 0x28 + 0x9998
                            );
            MenuWnd_DrawLabel(0xaf,*puVar9,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar2 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar3 + param_1[0x19d] * 800 + 0x34) * 0x28;
            if (*(int *)(iVar2 + 0x99a0) == 0) {
              MenuWnd_DrawText(0xaf,*puVar8,0xa8c);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar8,*(int *)(iVar2 + 0x9994) + 0x1b9a);
            }
            MenuWnd_DrawTextId(0xaf,*puVar11,uVar12,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar3 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar2 == 0) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar3 + 0x34) * 0x28 + 0xb8dc) ==
                '\x01') {
              uVar12 = 5;
            }
            iVar2 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar3 + 0x34) * 0x28 + 0xb8d8)
            ;
            MenuWnd_DrawLabel(0xaf,*puVar9,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar6 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar3 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar2 = *(int *)(iVar6 + 0xb8e0);
            if (iVar2 == -1) {
              MenuWnd_DrawText(0xaf,*puVar8,*(int *)(iVar6 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar8,iVar2 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar11,uVar12,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar3 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar2 = param_1[0x19d];
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 4;
          puVar9 = puVar9 + 1;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar5 < (int)param_1[iVar2 + 0xb]);
      }
    }
    else {
      iVar2 = 0;
      puVar9 = (undefined4 *)0x32aaf0;
      puVar8 = (undefined4 *)0x32aa90;
      puVar11 = (undefined4 *)0x32aac0;
      do {
        uVar12 = 0;
        if (param_1[0x19d] == 1) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19f] + iVar2) - param_1[2]) + 0xd5] * 0x28 + 0x999c) ==
              '\x01') {
            uVar12 = 5;
          }
          iVar3 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19f] + iVar2) - param_1[2]) + 0xd5] * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar9,0x444,iVar3,iVar3 % 7 + 0x44a);
          iVar3 = param_1[0x19d];
          iVar5 = param_1[0x1a0] +
                  param_1[iVar3 * 200 +
                          ((param_1[iVar3 + 0x19e] + iVar2) - param_1[iVar3 + 1]) + 0xd] * 0x28;
          iVar3 = *(int *)(iVar5 + 0x99a0);
          if (iVar3 == -1) {
            MenuWnd_DrawText(0xaf,*puVar8,*(int *)(iVar5 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar8,iVar3 + 0xa8c);
          }
          iVar3 = param_1[0x19d];
          MenuWnd_DrawTextId(0xaf,*puVar11,uVar12,
                             *(int *)(param_1[0x1a0] +
                                      param_1[iVar3 * 200 +
                                              ((param_1[iVar3 + 0x19e] + iVar2) - param_1[iVar3 + 1]
                                              ) + 0xd] * 0x28 + 0x9994) + 0x1a28);
        }
        else if (param_1[0x19d] == 0) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19e] + iVar2) - param_1[1]) + 0xd] * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar12 = 5;
          }
          iVar3 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19e] + iVar2) - param_1[1]) + 0xd] * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar9,0x444,iVar3,iVar3 % 7 + 0x44a);
          iVar3 = param_1[0x19d];
          iVar5 = param_1[0x1a0] +
                  param_1[iVar3 * 200 +
                          ((param_1[iVar3 + 0x19e] + iVar2) - param_1[iVar3 + 1]) + 0xd] * 0x28;
          iVar3 = *(int *)(iVar5 + 0xb8e0);
          if (iVar3 == -1) {
            MenuWnd_DrawText(0xaf,*puVar8,*(int *)(iVar5 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar8,iVar3 + 0xa8c);
          }
          iVar3 = param_1[0x19d];
          MenuWnd_DrawTextId(0xaf,*puVar11,uVar12,
                             *(int *)(param_1[0x1a0] +
                                      param_1[iVar3 * 200 +
                                              ((param_1[iVar3 + 0x19e] + iVar2) - param_1[iVar3 + 1]
                                              ) + 0xd] * 0x28 + 0xb8d4) + 0x1a28);
        }
        iVar2 = iVar2 + 1;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar2 < 10);
    }
  }
  uVar12 = maybe_Mail_CountMessages(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar12);
  if ((int)param_1[param_1[0x19d] + 0xb] < 0xb) {
    iVar3 = 0;
    iVar2 = 0;
    puVar8 = &DAT_0032ab20;
    do {
      iVar5 = param_1[0x19d];
      if ((iVar3 < (int)param_1[iVar5 + 0xb]) &&
         (lVar4 = Career_GetRivalIndex
                            (param_1[0x1a0],iVar5 == 0,
                             *(undefined4 *)((int)param_1 + iVar2 + iVar5 * 800 + 0x34)),
         lVar4 != -1)) {
        UiElem_SetPropFloat(0x3f800000,pUVar10,*puVar8,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar10,*puVar8,8);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      puVar8 = puVar8 + 1;
    } while (iVar3 < 0xb);
  }
  else {
    iVar2 = 0;
    puVar8 = &DAT_0032ab20;
    do {
      iVar3 = param_1[0x19d];
      iVar5 = iVar2 + (param_1[iVar3 + 0x19e] - param_1[iVar3 + 1]);
      if ((iVar5 < (int)param_1[iVar3 + 0xb]) &&
         (lVar4 = Career_GetRivalIndex(param_1[0x1a0],iVar3 == 0,param_1[iVar3 * 200 + iVar5 + 0xd])
         , lVar4 != -1)) {
        UiElem_SetPropFloat(0x3f800000,pUVar10,*puVar8,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar10,*puVar8,8);
      }
      iVar2 = iVar2 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar2 < 0xb);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00226d40  size 0x70c
void ScrCareer_Draw_AcceptThisRival(undefined4 *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  UiLayout *pUVar5;
  
  UiMgr_FindLayout(0xb2);
  iVar2 = UiMgr_FindLayout(0xb1);
  iVar3 = param_1[8];
  pUVar1 = g_UiMgr->slots;
  param_1[8] = 0;
  pUVar5 = &pUVar1[iVar2].layout;
  if (iVar3 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
  }
  lVar4 = MenuWnd_DrawFooter(0xffffffffffffffff,*param_1,0x36e9a8);
  MenuWnd_DrawText(5,0x1c,0x448);
  if (param_1[9] != 0) {
    if (lVar4 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar4 == 3) {
      param_1[9] = 0;
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
    iVar3 = *(int *)(iVar2 + 0x99a0);
    if (iVar3 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar2 + 0x9994) + 0x1b9a);
      iVar3 = param_1[0x19d];
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar3 + 0xa8c);
      iVar3 = param_1[0x19d];
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(param_1[iVar3 * 200 + param_1[iVar3 + 0x19e] + 0xd] * 0x28 +
                                     param_1[0x1a0] + 0x9994) + 0x1a28);
    iVar3 = *(int *)(param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
                     param_1[0x1a0] + 0x9998);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar3,iVar3 % 7 + 0x44a);
  }
  else {
    if (param_1[0x19d] != 0) {
      iVar3 = param_1[0x19d];
      goto LAB_00227150;
    }
    maybe_MenuWnd_DrawMailList(param_1[0x1a0] + param_1[param_1[0x19e] + 0xd] * 0x28 + 0xb8d4);
    iVar2 = param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
            param_1[0x1a0];
    iVar3 = *(int *)(iVar2 + 0xb8e0);
    if (iVar3 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar2 + 0xb8d4) + 0x1b9a);
      iVar3 = param_1[0x19d];
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar3 + 0xa8c);
      iVar3 = param_1[0x19d];
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(param_1[iVar3 * 200 + param_1[iVar3 + 0x19e] + 0xd] * 0x28 +
                                     param_1[0x1a0] + 0xb8d4) + 0x1a28);
    iVar3 = *(int *)(param_1[param_1[0x19d] * 200 + param_1[param_1[0x19d] + 0x19e] + 0xd] * 0x28 +
                     param_1[0x1a0] + 0xb8d8);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar3,iVar3 % 7 + 0x44a);
  }
  iVar3 = param_1[0x19d];
LAB_00227150:
  lVar4 = Career_GetRivalIndex
                    (param_1[0x1a0],iVar3 == 0,param_1[iVar3 * 200 + param_1[iVar3 + 0x19e] + 0xd]);
  if (lVar4 == -1) {
    UiElem_SetPropFloat(0,pUVar5,3,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,pUVar5,3,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar3 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  if (param_1[0x19d] == 1) {
    iVar3 = Rival_IsUnlocked(*(undefined4 *)
                              (param_1[param_1[0x19f] + 0xd5] * 0x28 + param_1[0x1a0] + 0x9994));
    if (*(int *)(iVar3 + 0x2c) != -1) {
      iVar3 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
    }
  }
  else if ((param_1[0x19d] == 0) &&
          (iVar3 = Rival_IsUnlocked(*(undefined4 *)
                                     (param_1[param_1[0x19e] + 0xd] * 0x28 + param_1[0x1a0] + 0xb8d4
                                     )), *(int *)(iVar3 + 0x2c) != -1)) {
    iVar3 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  }
  return;
}

// 0x00227450  size 0xa20
void ScrCareer_Draw_Mail_7450(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  UiLayout *pUVar7;
  UiLayout *pUVar8;
  
  UiMgr_FindLayout(0xb2);
  iVar2 = UiMgr_FindLayout(0xb0);
  pUVar8 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xb1);
  iVar2 = *(int *)(param_1 + 0x20);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pUVar7 = &pUVar1[iVar3].layout;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    uVar4 = UiRes_GetLayoutData(0xf7);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
    pUVar1[iVar2].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0xf9);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar4;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xec);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar4;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0xed);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar4;
    pUVar1[iVar2].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x40a);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,pUVar8,0x1c,8);
    UiElem_SetPropFloat(0,pUVar8,0x1d,8);
    UiElem_SetPropFloat(0,pUVar7,8,8);
    UiElem_SetPropFloat(0,pUVar7,9,8);
    UiElem_SetPropFloat(0,pUVar8,0x17,8);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    uVar6 = UiRes_GetLayoutData(0xed);
    UiLayout_PlayAnim(&pUVar1[iVar2].layout,uVar6);
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
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar2 = *(int *)(iVar3 + 0x99a0);
    if (iVar2 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar3 + 0x9994) + 0x1b9a);
      iVar2 = *(int *)(param_1 + 0x674);
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar2 + 0xa8c);
      iVar2 = *(int *)(param_1 + 0x674);
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(*(int *)(*(int *)(iVar2 * 4 + param_1 + 0x678) * 4 +
                                              iVar2 * 800 + param_1 + 0x34) * 0x28 +
                                     *(int *)(param_1 + 0x680) + 0x9994) + 0x1a28);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0x9998);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar2,iVar2 % 7 + 0x44a);
  }
  else {
    if (*(int *)(param_1 + 0x674) != 0) {
      iVar2 = *(int *)(param_1 + 0x674);
      goto LAB_0022782c;
    }
    maybe_MenuWnd_DrawMailList
              (*(int *)(param_1 + 0x680) +
               *(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) * 0x28 + 0xb8d4);
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                     *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
            *(int *)(param_1 + 0x680);
    iVar2 = *(int *)(iVar3 + 0xb8e0);
    if (iVar2 == -1) {
      MenuWnd_DrawText(0xb1,5,*(int *)(iVar3 + 0xb8d4) + 0x1b9a);
      iVar2 = *(int *)(param_1 + 0x674);
    }
    else {
      MenuWnd_DrawText(0xb1,5,iVar2 + 0xa8c);
      iVar2 = *(int *)(param_1 + 0x674);
    }
    MenuWnd_DrawText(0xb1,4,*(int *)(*(int *)(*(int *)(iVar2 * 4 + param_1 + 0x678) * 4 +
                                              iVar2 * 800 + param_1 + 0x34) * 0x28 +
                                     *(int *)(param_1 + 0x680) + 0xb8d4) + 0x1a28);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x678) * 4 +
                              *(int *)(param_1 + 0x674) * 800 + param_1 + 0x34) * 0x28 +
                     *(int *)(param_1 + 0x680) + 0xb8d8);
    MenuWnd_DrawLabel(0xb1,6,0x444,iVar2,iVar2 % 7 + 0x44a);
  }
  iVar2 = *(int *)(param_1 + 0x674);
LAB_0022782c:
  lVar5 = Career_GetRivalIndex
                    (*(undefined4 *)(param_1 + 0x680),iVar2 == 0,
                     *(undefined4 *)
                      (*(int *)(iVar2 * 4 + param_1 + 0x678) * 4 + iVar2 * 800 + param_1 + 0x34));
  if (lVar5 == -1) {
    UiElem_SetPropFloat(0,pUVar7,3,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,pUVar7,3,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  if (*(int *)(param_1 + 0x674) == 1) {
    iVar2 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                               *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar2 + 0x2c) != -1) {
      iVar2 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
      UiLayout_UpdateAnimById(0xb2,2);
    }
  }
  else if ((*(int *)(param_1 + 0x674) == 0) &&
          (iVar2 = Rival_IsUnlocked(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) *
                                      0x28 + *(int *)(param_1 + 0x680) + 0xb8d4)),
          *(int *)(iVar2 + 0x2c) != -1)) {
    iVar2 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
    UiLayout_UpdateAnimById(0xb2,2);
  }
  return;
}

// 0x00227e70  size 0x2224
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Mail_7e70(int *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  UiLayout *pUVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  UiLayout *pUVar15;
  
  iVar2 = UiMgr_FindLayout(0xaf);
  pUVar12 = &g_UiMgr->slots[iVar2].layout;
  iVar2 = UiMgr_FindLayout(0xb0);
  pUVar15 = &g_UiMgr->slots[iVar2].layout;
  UiMgr_FindLayout(0xb1);
  iVar2 = param_1[8];
  param_1[8] = 0;
  if (iVar2 == 0) {
    iVar2 = param_1[0x19d];
  }
  else {
    uVar3 = UiRes_GetLayoutData(0xee);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0xef);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0xf2);
    iVar2 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar3 = UiRes_GetLayoutData(0xf3);
    iVar2 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
      pUVar1[iVar2].layout.animState = 0;
    }
    else {
      pUVar1[iVar2].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
    pUVar1[iVar2].layout.animState = 1;
    uVar3 = UiRes_GetLayoutData(0xf7);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0xf9);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    uVar3 = UiRes_GetLayoutData(0xf4);
    iVar2 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    uVar3 = UiRes_GetLayoutData(0xf1);
    iVar2 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xb0,0x36e998,2,1);
    UiElem_SetPropFloat(0,pUVar12,0x3f,8);
    UiElem_SetPropFloat(0,pUVar12,0x41,8);
    UiElem_SetPropFloat(0,pUVar15,0x1c,8);
    UiElem_SetPropFloat(0,pUVar15,0x1d,8);
    UiElem_SetPropFloat(0x3f800000,pUVar15,0x17,8);
    uRam0036f540 = 0;
    do {
      UiElem_SetPropFloat(0,pUVar12,(&DAT_0032a970)[uRam0036f540],8);
      uRam0036f540 = uRam0036f540 + 1;
    } while (uRam0036f540 < 0xb);
    iVar2 = param_1[0x19d];
  }
  if (param_1[iVar2 + 0xb] < 0xb) {
    iVar2 = param_1[3];
  }
  else {
    MenuWnd_DrawCursor(1);
    iVar2 = param_1[3];
  }
  if (iVar2 - 2U < 2) {
    if (param_1[0x19d] == 1) {
      lVar4 = UiLayout_UpdateAnimById(0xb0,2);
      lVar5 = UiLayout_UpdateAnimById(0xaf,0);
      if (lVar4 == 0 && lVar5 == 0) {
        param_1[7] = 0;
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xb0,2);
      lVar5 = UiLayout_UpdateAnimById(0xaf,0);
      if (lVar4 == 0 && lVar5 == 0) {
        param_1[7] = 0;
      }
    }
    UiElem_SetPropFloat(0,pUVar12,0x3f,8);
    UiElem_SetPropFloat(0,pUVar12,0x41,8);
    iVar2 = param_1[9];
  }
  else {
    if (((iVar2 == 4) || (iVar2 == 8)) || (iVar2 == 10)) {
      param_1[7] = 0;
    }
    else if (param_1[0x19d] == 1) {
      lVar4 = UiLayout_UpdateAnimById(0xb0,0);
      if (lVar4 == 0) {
        param_1[7] = 0;
      }
    }
    else {
      param_1[7] = 0;
    }
    iVar2 = param_1[9];
  }
  if (iVar2 != 0) {
    if (param_1[5] == 2) {
      if (param_1[0x19d] == 1) {
        lVar4 = UiLayout_UpdateAnimById(0xb0,3);
        lVar5 = UiLayout_UpdateAnimById(0xaf,1);
        if (lVar4 == 0 && lVar5 == 0) {
          param_1[9] = 0;
        }
      }
      else {
        lVar4 = UiLayout_UpdateAnimById(0xb0,3);
        lVar5 = UiLayout_UpdateAnimById(0xaf,1);
        if (lVar4 == 0 && lVar5 == 0) {
          param_1[9] = 0;
        }
      }
      UiElem_SetPropFloat(0,pUVar12,0x3f,8);
      UiElem_SetPropFloat(0,pUVar12,0x41,8);
    }
    else if (param_1[5] == 4) {
      param_1[9] = 0;
    }
    else if (param_1[0x19d] == 1) {
      lVar4 = UiLayout_UpdateAnimById(0xb0);
      if (lVar4 == 0) {
        param_1[9] = 0;
      }
    }
    else {
      param_1[9] = 0;
    }
    iVar2 = 0;
    puVar9 = &DAT_0032a970;
    do {
      UiElem_SetPropFloat(0,pUVar12,*puVar9,8);
      iVar2 = iVar2 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar2 < 10);
    MenuWnd_SetItemVisible(0);
  }
  if (param_1[0x1a1] == 3) {
    if (param_1[0x19d] == 0) {
      lVar4 = UiLayout_UpdateAnimById(0xb0,1);
      if (lVar4 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        param_1[0x1a1] = 2;
        iVar2 = UiMgr_FindLayout(0xaf);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,5,8);
        uVar3 = UiRes_GetLayoutData(0xef);
        iVar2 = UiMgr_FindLayout(0xb0);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x324 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = 0;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
          pUVar1[iVar2].layout.animState = 0;
        }
        else {
          pUVar1[iVar2].layout.animState = 1;
        }
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar2].layout.field_0x330 == 0) {
          pUVar1[iVar2].layout.animState = 0;
        }
        else {
          pUVar1[iVar2].layout.animState = 1;
        }
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar1[iVar2].layout.field_0x330 = uVar3;
        pUVar1[iVar2].layout.animState = 1;
        if (param_1[0xb] < 10) {
          iVar2 = UiMgr_FindLayout(0xb0);
          UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x1c,8);
          iVar2 = UiMgr_FindLayout(0xb0);
          UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x1d,8);
        }
      }
    }
    else if ((param_1[0x19d] == 1) && (lVar4 = UiLayout_UpdateAnimById(0xb0,0), lVar4 == 0)) {
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      param_1[0x1a1] = 2;
      iVar2 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,4,8);
      uVar3 = UiRes_GetLayoutData(0xee);
      iVar2 = UiMgr_FindLayout(0xb0);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
        pUVar1[iVar2].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar2].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x30c = 0;
      if (*(int *)&pUVar1[iVar2].layout.field_0x31c == 0) {
        pUVar1[iVar2].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar2].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x31c = uVar3;
      pUVar1[iVar2].layout.unk_318 = 1;
      if (param_1[0xc] < 10) {
        iVar2 = UiMgr_FindLayout(0xb0);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x1c,8);
        iVar2 = UiMgr_FindLayout(0xb0);
        UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,0x1d,8);
      }
    }
    uVar10 = 0;
    puVar9 = &DAT_0032a970;
    do {
      UiElem_SetPropFloat(0,pUVar12,*puVar9,8);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 < 0xb);
  }
  if ((*_g_MenuInput == 1) && (param_1[0x1a1] == 2)) {
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
  iVar2 = param_1[0x19d];
  iVar7 = param_1[iVar2 + 0xb];
  if (0 < iVar7) {
    if (iVar7 < 0xb) {
      iVar6 = 0;
      if (0 < iVar7) {
        iVar7 = 0;
        puVar11 = (undefined4 *)0x32aa00;
        puVar9 = (undefined4 *)0x32a9a0;
        puVar13 = (undefined4 *)0x32a9d0;
        do {
          uVar14 = 0;
          if (iVar2 == 1) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar7 + 0x354) * 0x28 + 0x999c)
                == '\x01') {
              uVar14 = 5;
            }
            iVar2 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar7 + 0x354) * 0x28 + 0x9998
                            );
            MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar8 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar7 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar2 = *(int *)(iVar8 + 0x99a0);
            if (iVar2 == -1) {
              MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar8 + 0x9994) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar9,iVar2 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar13,uVar14,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar7 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar2 == 0) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar7 + 0x34) * 0x28 + 0xb8dc) ==
                '\x01') {
              uVar14 = 5;
            }
            iVar2 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar7 + 0x34) * 0x28 + 0xb8d8)
            ;
            MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar8 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar7 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar2 = *(int *)(iVar8 + 0xb8e0);
            if (iVar2 == -1) {
              MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar8 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar9,iVar2 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar13,uVar14,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar7 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar2 = param_1[0x19d];
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 4;
          puVar11 = puVar11 + 1;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        } while (iVar6 < param_1[iVar2 + 0xb]);
      }
    }
    else {
      iVar2 = 0;
      puVar11 = (undefined4 *)0x32aa00;
      puVar9 = (undefined4 *)0x32a9a0;
      puVar13 = (undefined4 *)0x32a9d0;
      do {
        uVar14 = 0;
        if (param_1[0x19d] == 1) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19f] + iVar2) - *param_1) + 0xd5] * 0x28 + 0x999c) ==
              '\x01') {
            uVar14 = 5;
          }
          iVar7 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19f] + iVar2) - *param_1) + 0xd5] * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar7,iVar7 % 7 + 0x44a);
          iVar6 = param_1[0x1a0] +
                  param_1[param_1[0x19d] * 200 +
                          ((param_1[param_1[0x19d] + 0x19e] + iVar2) - *param_1) + 0xd] * 0x28;
          iVar7 = *(int *)(iVar6 + 0x99a0);
          if (iVar7 == -1) {
            MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar6 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar9,iVar7 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar13,uVar14,
                             *(int *)(param_1[0x1a0] +
                                      param_1[param_1[0x19d] * 200 +
                                              ((param_1[param_1[0x19d] + 0x19e] + iVar2) - *param_1)
                                              + 0xd] * 0x28 + 0x9994) + 0x1a28);
        }
        else if (param_1[0x19d] == 0) {
          if (*(char *)(param_1[0x1a0] + param_1[((param_1[0x19e] + iVar2) - *param_1) + 0xd] * 0x28
                       + 0xb8dc) == '\x01') {
            uVar14 = 5;
          }
          iVar7 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19e] + iVar2) - *param_1) + 0xd] * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar11,0x444,iVar7,iVar7 % 7 + 0x44a);
          iVar6 = param_1[0x1a0] +
                  param_1[param_1[0x19d] * 200 +
                          ((param_1[param_1[0x19d] + 0x19e] + iVar2) - *param_1) + 0xd] * 0x28;
          iVar7 = *(int *)(iVar6 + 0xb8e0);
          if (iVar7 == -1) {
            MenuWnd_DrawText(0xaf,*puVar9,*(int *)(iVar6 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar9,iVar7 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar13,uVar14,
                             *(int *)(param_1[0x1a0] +
                                      param_1[param_1[0x19d] * 200 +
                                              ((param_1[param_1[0x19d] + 0x19e] + iVar2) - *param_1)
                                              + 0xd] * 0x28 + 0xb8d4) + 0x1a28);
        }
        iVar2 = iVar2 + 1;
        puVar11 = puVar11 + 1;
        puVar9 = puVar9 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar2 < 10);
    }
  }
  if (param_1[0x1a1] == 0) {
    uVar14 = 0;
    if (param_1[0x19d] == 1) {
      if (*(char *)(param_1[(param_1[0x19f] - *param_1) + 0xd4] * 0x28 + param_1[0x1a0] + 0x999c) ==
          '\x01') {
        uVar14 = 5;
      }
      iVar2 = *(int *)(param_1[(param_1[0x19f] - *param_1) + 0xd4] * 0x28 + param_1[0x1a0] + 0x9998)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar2,iVar2 % 7 + 0x44a);
      iVar7 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] *
              0x28 + param_1[0x1a0];
      iVar2 = *(int *)(iVar7 + 0x99a0);
      if (iVar2 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar7 + 0x9994) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar2 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar14,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] * 0x28
                                  + param_1[0x1a0] + 0x9994) + 0x1a28);
      goto LAB_00229558;
    }
    if (param_1[0x19d] == 0) {
      if (*(char *)(param_1[(param_1[0x19e] - *param_1) + 0xc] * 0x28 + param_1[0x1a0] + 0xb8dc) ==
          '\x01') {
        uVar14 = 5;
      }
      iVar2 = *(int *)(param_1[(param_1[0x19e] - *param_1) + 0xc] * 0x28 + param_1[0x1a0] + 0xb8d8);
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar2,iVar2 % 7 + 0x44a);
      iVar7 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] *
              0x28 + param_1[0x1a0];
      iVar2 = *(int *)(iVar7 + 0xb8e0);
      if (iVar2 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar2 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar14,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] * 0x28
                                  + param_1[0x1a0] + 0xb8d4) + 0x1a28);
      goto LAB_00229558;
    }
    iVar2 = param_1[0x1a1];
  }
  else {
LAB_00229558:
    iVar2 = param_1[0x1a1];
  }
  if (iVar2 == 1) {
    uVar14 = 0;
    if (param_1[0x19d] == 1) {
      if (*(char *)(param_1[(param_1[0x19f] - *param_1) + 0xdf] * 0x28 + param_1[0x1a0] + 0x999c) ==
          '\x01') {
        uVar14 = 5;
      }
      iVar2 = *(int *)(param_1[(param_1[0x19f] - *param_1) + 0xdf] * 0x28 + param_1[0x1a0] + 0x9998)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar2,iVar2 % 7 + 0x44a);
      iVar7 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
              0x28 + param_1[0x1a0];
      iVar2 = *(int *)(iVar7 + 0x99a0);
      if (iVar2 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar7 + 0x9994) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar2 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar14,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
                                  0x28 + param_1[0x1a0] + 0x9994) + 0x1a28);
    }
    else {
      if (param_1[0x19d] != 0) {
        iVar2 = param_1[0x19d];
        goto LAB_002298fc;
      }
      if (*(char *)(param_1[(param_1[0x19e] - *param_1) + 0x17] * 0x28 + param_1[0x1a0] + 0xb8dc) ==
          '\x01') {
        uVar14 = 5;
      }
      iVar2 = *(int *)(param_1[(param_1[0x19e] - *param_1) + 0x17] * 0x28 + param_1[0x1a0] + 0xb8d8)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar2,iVar2 % 7 + 0x44a);
      iVar7 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
              0x28 + param_1[0x1a0];
      iVar2 = *(int *)(iVar7 + 0xb8e0);
      if (iVar2 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar2 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar14,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
                                  0x28 + param_1[0x1a0] + 0xb8d4) + 0x1a28);
    }
  }
  iVar2 = param_1[0x19d];
LAB_002298fc:
  if (param_1[iVar2 + 0xb] < 0xb) {
    iVar7 = 0;
    iVar2 = 0;
    puVar9 = &DAT_0032aa30;
    do {
      iVar6 = param_1[0x19d];
      if ((iVar7 < param_1[iVar6 + 0xb]) &&
         (lVar4 = Career_GetRivalIndex
                            (param_1[0x1a0],iVar6 == 0,
                             *(undefined4 *)((int)param_1 + iVar2 + iVar6 * 800 + 0x34)),
         lVar4 != -1)) {
        UiElem_SetPropFloat(0x3f800000,pUVar12,*puVar9,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar12,*puVar9,8);
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 4;
      puVar9 = puVar9 + 1;
    } while (iVar7 < 0xb);
  }
  else if (param_1[0x1a1] == 0) {
    iVar2 = 0;
    puVar9 = &DAT_0032aa30;
    do {
      iVar7 = param_1[0x19d];
      iVar6 = iVar2 + (param_1[iVar7 + 0x19e] - *param_1);
      if ((iVar6 < param_1[iVar7 + 0xb]) &&
         (lVar4 = Career_GetRivalIndex(param_1[0x1a0],iVar7 == 0,param_1[iVar7 * 200 + iVar6 + 0xd])
         , lVar4 != -1)) {
        UiElem_SetPropFloat(0x3f800000,pUVar12,*puVar9,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar12,*puVar9,8);
      }
      iVar2 = iVar2 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar2 < 10);
    iVar2 = param_1[0x19d];
    if (((param_1[iVar2 + 0x19e] - *param_1) + -1 < param_1[iVar2 + 0xb]) &&
       (lVar4 = Career_GetRivalIndex
                          (param_1[0x1a0],iVar2 == 0,
                           param_1[iVar2 * 200 + (param_1[iVar2 + 0x19e] - *param_1) + 0xc]),
       lVar4 != -1)) {
      UiElem_SetPropFloat(0x3f800000,pUVar12,DAT_0032aa58,8);
    }
    else {
      UiElem_SetPropFloat(0,pUVar12,DAT_0032aa58,8);
    }
  }
  else {
    iVar2 = 0;
    puVar9 = &DAT_0032aa30;
    do {
      iVar7 = param_1[0x19d];
      iVar6 = iVar2 + (param_1[iVar7 + 0x19e] - *param_1);
      if ((iVar6 < param_1[iVar7 + 0xb]) &&
         (lVar4 = Career_GetRivalIndex(param_1[0x1a0],iVar7 == 0,param_1[iVar7 * 200 + iVar6 + 0xd])
         , lVar4 != -1)) {
        UiElem_SetPropFloat(0x3f800000,pUVar12,*puVar9,8);
      }
      else {
        UiElem_SetPropFloat(0,pUVar12,*puVar9,8);
      }
      iVar2 = iVar2 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar2 < 0xb);
  }
  if ((param_1[0x1a1] == 0) && (lVar4 = UiLayout_UpdateAnimById(0xaf,2), lVar4 == 0)) {
    param_1[0x1a1] = 2;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    uVar3 = UiRes_GetLayoutData(0xf4);
    iVar2 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
    iVar2 = param_1[0x1a1];
  }
  else {
    iVar2 = param_1[0x1a1];
  }
  if ((iVar2 == 1) && (lVar4 = UiLayout_UpdateAnimById(0xaf,3), lVar4 == 0)) {
    param_1[0x1a1] = 2;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    uVar3 = UiRes_GetLayoutData(0xf1);
    iVar2 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar2].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x358 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
  }
  uVar14 = maybe_Mail_CountMessages(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar14);
  UiElem_SetPropFloat(0x3f800000,pUVar12,*(undefined4 *)(param_1[0x19d] * 4 + 0x36e9a0),8);
  UiElem_SetPropFloat(0x3f800000,pUVar15,0x17,8);
  if (param_1[param_1[0x19d] + 0xb] < 0xb) {
    UiElem_SetPropFloat(0x41800000,pUVar15,1,2);
    UiElem_SetPropFloat(0x41600000,pUVar15,1,6);
  }
  else {
    UiElem_SetPropFloat((10.0 / (float)param_1[param_1[0x19d] + 0xb]) * 14.0,pUVar15,1,6);
    UiElem_SetPropFloat((224.0 / (float)param_1[param_1[0x19d] + 0xb]) *
                        (float)(param_1[param_1[0x19d] + 0x19e] - *param_1) + 16.0,pUVar15,1,2);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

