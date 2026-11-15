// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00224000 - 0x00228000
#include "ghidra_types.h"

// 0x002248dc  size 0x18
/* follows ScrCareer_Draw_MessageDeleted; no call, branch, pointer or constant references it
   (exception landing pad or dead code) */

void ScrCareer_Draw_MessageDeleted_Orphan1(void)

{
  return;
}

// 0x00224900  size 0x9c4
void ScrCareer_Draw_DeleteThisMessage(undefined4 *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  UiLayout *pUVar7;
  UiLayout *pUVar8;
  
  UiMgr_FindLayout(0xb2);
  iVar2 = UiMgr_FindLayout(0xb0);
  pUVar8 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xb1);
  iVar2 = param_1[8];
  pUVar1 = g_UiMgr->slots;
  param_1[8] = 0;
  pUVar7 = &pUVar1[iVar3].layout;
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
    uVar5 = UiRes_GetLayoutData(0xf9);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar2].layout.unk_310 = 0xffffffff;
    pUVar1[iVar2].layout.unk_31c = 0;
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    pUVar1[iVar2].layout.unk_31c = uVar5;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0xec);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar2].layout.unk_310 = 0xffffffff;
    pUVar1[iVar2].layout.unk_31c = 0;
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    pUVar1[iVar2].layout.unk_31c = uVar5;
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
    UiElem_SetPropFloat(pUVar8,0x1c,8,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar8,0x1d,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar7,8,8,extraout_a3_lo_02);
    UiElem_SetPropFloat(pUVar7,9,8,extraout_a3_lo_03);
    UiElem_SetPropFloat(pUVar8,0x17,8,extraout_a3_lo_04);
    uVar4 = *param_1;
  }
  lVar6 = MenuWnd_DrawFooter(0xffffffffffffffff,uVar4,0x36e9b8);
  MenuWnd_DrawText(5,0x1c,0x43e);
  if (param_1[9] != 0) {
    if (lVar6 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar6 == 3) {
      param_1[9] = 0;
      *param_1 = param_1[param_1[0x19d] + 0x19e];
    }
  }
  if (lVar6 == 2) {
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
  lVar6 = Career_GetRivalIndex
                    (param_1[0x1a0],iVar2 == 0,param_1[iVar2 * 200 + param_1[iVar2 + 0x19e] + 0xd]);
  if (lVar6 == -1) {
    UiElem_SetPropFloat(pUVar7,3,8,extraout_a3_lo);
  }
  else {
    UiElem_SetPropFloat(pUVar7,3,8,extraout_a3_lo);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  if (param_1[0x19d] == 1) {
    iVar2 = Rival_IsUnlocked(*(undefined4 *)
                              (param_1[param_1[0x19f] + 0xd5] * 0x28 + param_1[0x1a0] + 0x9994));
    if (*(int *)(iVar2 + 0x2c) != -1) {
      iVar2 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
    }
  }
  else if ((param_1[0x19d] == 0) &&
          (iVar2 = Rival_IsUnlocked(*(undefined4 *)
                                     (param_1[param_1[0x19e] + 0xd] * 0x28 + param_1[0x1a0] + 0xb8d4
                                     )), *(int *)(iVar2 + 0x2c) != -1)) {
    iVar2 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  }
  return;
}

// 0x002252d0  size 0xce8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_MessageDeleted_52d0(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte bVar9;
  byte extraout_a3_lo_03;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  undefined8 extraout_a3_01;
  long extraout_a3_02;
  undefined8 extraout_a3_03;
  undefined8 extraout_a3_04;
  UiLayout *pUVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  UiLayout *pUVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  
  iVar3 = UiMgr_FindLayout(0xaf);
  pUVar14 = &g_UiMgr->slots[iVar3].layout;
  iVar4 = UiMgr_FindLayout(0xb0);
  iVar3 = *(int *)(param_1 + 0x20);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pUVar10 = &pUVar1[iVar4].layout;
  if (iVar3 != 0) {
    MenuWnd_SetHelpText(0);
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(pUVar14,0x3f,8,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar14,0x41,8,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar10,0x1c,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar10,0x1d,8,extraout_a3_lo_02);
  }
  lVar6 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  MenuWnd_DrawText(5,0x1c,0x43f);
  if (*(int *)(param_1 + 0x24) != 0) {
    if (lVar6 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar6 == 3) {
      if (*(int *)(param_1 + 0x14) == 0) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,1);
        if (!bVar2) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
  }
  if (lVar6 == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  MenuWnd_DrawText(0xae,1,0x434);
  MenuWnd_DrawText(0xaf,0x43,0x441);
  MenuWnd_DrawText(0xaf,0x44,0x440);
  iVar3 = *(int *)(param_1 + 0x674) * 4 + param_1;
  if (*(int *)(iVar3 + 0x2c) < 1) {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,0);
  }
  else {
    MenuWnd_DrawLabel(0xb0,0x19,0x447,*(int *)(iVar3 + 0x678) + 1);
  }
  MenuWnd_DrawText(0xb0,0x1a,0x449);
  iVar3 = *(int *)(param_1 + 0x674);
  iVar4 = *(int *)(iVar3 * 4 + param_1 + 0x2c);
  if (0 < iVar4) {
    if (iVar4 < 0xb) {
      iVar5 = 0;
      if (0 < iVar4) {
        iVar4 = 0;
        puVar13 = (undefined4 *)0x32abb0;
        puVar11 = (undefined4 *)0x32ab50;
        puVar15 = (undefined4 *)0x32ab80;
        do {
          uVar16 = 0;
          if (iVar3 == 1) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar4 + 0x354) * 0x28 +
                         0x999c) == '\x01') {
              uVar16 = 5;
            }
            iVar3 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar4 + 0x354) * 0x28 +
                            0x9998);
            MenuWnd_DrawLabel(0xaf,*puVar13,0x444,iVar3,iVar3 % 7 + 0x44a);
            iVar8 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar4 + 0x34) * 0x28;
            iVar3 = *(int *)(iVar8 + 0x99a0);
            if (iVar3 == -1) {
              MenuWnd_DrawText(0xaf,*puVar11,*(int *)(iVar8 + 0x9994) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar11,iVar3 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar15,uVar16,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar4 +
                                                0x34) * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar3 == 0) {
            if (*(char *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar4 + 0x34) * 0x28 +
                         0xb8dc) == '\x01') {
              uVar16 = 5;
            }
            iVar3 = *(int *)(*(int *)(param_1 + 0x680) + *(int *)(param_1 + iVar4 + 0x34) * 0x28 +
                            0xb8d8);
            MenuWnd_DrawLabel(0xaf,*puVar13,0x444,iVar3,iVar3 % 7 + 0x44a);
            iVar8 = *(int *)(param_1 + 0x680) +
                    *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar4 + 0x34) * 0x28;
            iVar3 = *(int *)(iVar8 + 0xb8e0);
            if (iVar3 == -1) {
              MenuWnd_DrawText(0xaf,*puVar11,*(int *)(iVar8 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar11,iVar3 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar15,uVar16,
                               *(int *)(*(int *)(param_1 + 0x680) +
                                        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 + iVar4 +
                                                0x34) * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar3 = *(int *)(param_1 + 0x674);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 4;
          puVar13 = puVar13 + 1;
          puVar11 = puVar11 + 1;
          puVar15 = puVar15 + 1;
        } while (iVar5 < *(int *)(param_1 + iVar3 * 4 + 0x2c));
      }
    }
    else {
      iVar3 = 0;
      puVar13 = (undefined4 *)0x32abb0;
      puVar11 = (undefined4 *)0x32ab50;
      puVar15 = (undefined4 *)0x32ab80;
      do {
        uVar16 = 0;
        if (*(int *)(param_1 + 0x674) == 1) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar3) -
                                           *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x999c) ==
              '\x01') {
            uVar16 = 5;
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x680) +
                           *(int *)(param_1 + ((*(int *)(param_1 + 0x67c) + iVar3) -
                                              *(int *)(param_1 + 8)) * 4 + 0x354) * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar13,0x444,iVar4,iVar4 % 7 + 0x44a);
          iVar4 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar5 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar4 + 0x678) + iVar3) - *(int *)(iVar4 + 4)) * 4 + 0x34) *
                  0x28;
          iVar4 = *(int *)(iVar5 + 0x99a0);
          if (iVar4 == -1) {
            MenuWnd_DrawText(0xaf,*puVar11,*(int *)(iVar5 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar11,iVar4 + 0xa8c);
          }
          iVar4 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar15,uVar16,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar4 + 0x678) + iVar3) -
                                               *(int *)(iVar4 + 4)) * 4 + 0x34) * 0x28 + 0x9994) +
                             0x1a28);
        }
        else if (*(int *)(param_1 + 0x674) == 0) {
          if (*(char *)(*(int *)(param_1 + 0x680) +
                        *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar3) -
                                           *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar16 = 5;
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x680) +
                           *(int *)(param_1 + ((*(int *)(param_1 + 0x678) + iVar3) -
                                              *(int *)(param_1 + 4)) * 4 + 0x34) * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar13,0x444,iVar4,iVar4 % 7 + 0x44a);
          iVar4 = param_1 + *(int *)(param_1 + 0x674) * 4;
          iVar5 = *(int *)(param_1 + 0x680) +
                  *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                           ((*(int *)(iVar4 + 0x678) + iVar3) - *(int *)(iVar4 + 4)) * 4 + 0x34) *
                  0x28;
          iVar4 = *(int *)(iVar5 + 0xb8e0);
          if (iVar4 == -1) {
            MenuWnd_DrawText(0xaf,*puVar11,*(int *)(iVar5 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar11,iVar4 + 0xa8c);
          }
          iVar4 = param_1 + *(int *)(param_1 + 0x674) * 4;
          MenuWnd_DrawTextId(0xaf,*puVar15,uVar16,
                             *(int *)(*(int *)(param_1 + 0x680) +
                                      *(int *)(param_1 + *(int *)(param_1 + 0x674) * 800 +
                                               ((*(int *)(iVar4 + 0x678) + iVar3) -
                                               *(int *)(iVar4 + 4)) * 4 + 0x34) * 0x28 + 0xb8d4) +
                             0x1a28);
        }
        iVar3 = iVar3 + 1;
        puVar13 = puVar13 + 1;
        puVar11 = puVar11 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar3 < 10);
    }
  }
  uVar16 = maybe_Mail_CountMessages(*(undefined4 *)(param_1 + 0x674));
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar16);
  _s_ScrCareer_Draw_MessageDeleted_52d0_1 = 0;
  uVar16 = extraout_a3;
  do {
    if (_s_ScrCareer_Draw_MessageDeleted_52d0_1 ==
        *(int *)(param_1 + *(int *)(param_1 + 0x674) * 4 + 4)) {
      UiElem_SetPropFloat(pUVar14,(long)*(int *)(&DAT_0032abe0 +
                                                _s_ScrCareer_Draw_MessageDeleted_52d0_1 * 4),8,
                          (byte)uVar16);
      uVar16 = extraout_a3_00;
    }
    else {
      UiElem_SetPropFloat(pUVar14,(long)*(int *)(&DAT_0032abe0 +
                                                _s_ScrCareer_Draw_MessageDeleted_52d0_1 * 4),8,
                          (byte)uVar16);
      uVar16 = extraout_a3_01;
    }
    _s_ScrCareer_Draw_MessageDeleted_52d0_1 = _s_ScrCareer_Draw_MessageDeleted_52d0_1 + 1;
  } while (_s_ScrCareer_Draw_MessageDeleted_52d0_1 < 10);
  if (*(int *)(*(int *)(param_1 + 0x674) * 4 + param_1 + 0x2c) < 0xb) {
    iVar4 = 0;
    iVar3 = 0;
    piVar12 = &DAT_0032ac10;
    do {
      bVar9 = (byte)uVar16;
      iVar5 = *(int *)(param_1 + 0x674);
      if ((iVar4 < *(int *)(param_1 + iVar5 * 4 + 0x2c)) &&
         (lVar6 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),iVar5 == 0,
                             *(undefined4 *)(param_1 + iVar5 * 800 + iVar3 + 0x34)),
         bVar9 = extraout_a3_lo_03, lVar6 != -1)) {
        UiElem_SetPropFloat(pUVar14,(long)*piVar12,8,extraout_a3_lo_03);
        uVar16 = extraout_a3_03;
      }
      else {
        UiElem_SetPropFloat(pUVar14,(long)*piVar12,8,bVar9);
        uVar16 = extraout_a3_04;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      piVar12 = piVar12 + 1;
    } while (iVar4 < 0xb);
  }
  else {
    iVar3 = 0;
    piVar12 = &DAT_0032ac10;
    do {
      iVar4 = *(int *)(param_1 + 0x674);
      lVar6 = (long)iVar4;
      iVar5 = param_1 + iVar4 * 4;
      iVar8 = iVar3 + (*(int *)(iVar5 + 0x678) - *(int *)(iVar5 + 4));
      if ((iVar8 < *(int *)(iVar5 + 0x2c)) &&
         (lVar7 = Career_GetRivalIndex
                            (*(undefined4 *)(param_1 + 0x680),lVar6 == 0,
                             *(undefined4 *)(param_1 + iVar4 * 800 + iVar8 * 4 + 0x34)),
         lVar6 = extraout_a3_02, lVar7 != -1)) {
        UiElem_SetPropFloat(pUVar14,(long)*piVar12,8,(byte)extraout_a3_02);
      }
      else {
        UiElem_SetPropFloat(pUVar14,(long)*piVar12,8,(byte)lVar6);
      }
      iVar3 = iVar3 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar3 < 0xb);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar3 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00225fd4  size 0x1c
/* follows ScrCareer_Draw_MessageDeleted_52d0; no call, branch, pointer or constant reference
   (exception landing pad or dead code) */

void ScrCareer_Draw_MessageDeleted_52d0_Orphan2
               (UiLayout *param_1,long param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  long lVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  int *unaff_s0_lo;
  int unaff_s1_lo;
  int unaff_s2_lo;
  UiLayout *unaff_s3_lo;
  int unaff_s4_lo;
  
  do {
    UiElem_SetPropFloat(param_1,param_2,8,param_4);
    param_4 = extraout_a3_lo_01;
    while( true ) {
      unaff_s2_lo = unaff_s2_lo + 1;
      unaff_s1_lo = unaff_s1_lo + 4;
      unaff_s0_lo = unaff_s0_lo + 1;
      if (10 < unaff_s2_lo) {
        UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
        iVar1 = UiMgr_FindLayout(0xa6);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
        iVar1 = UiMgr_FindLayout(0xae);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
        iVar1 = UiMgr_FindLayout(0xaf);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
        iVar1 = UiMgr_FindLayout(0xb0);
        UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
        return;
      }
      iVar1 = *(int *)(unaff_s4_lo + 0x674);
      if ((*(int *)(unaff_s4_lo + iVar1 * 4 + 0x2c) <= unaff_s2_lo) ||
         (lVar2 = Career_GetRivalIndex
                            (*(undefined4 *)(unaff_s4_lo + 0x680),iVar1 == 0,
                             *(undefined4 *)(unaff_s4_lo + iVar1 * 800 + unaff_s1_lo + 0x34)),
         param_4 = extraout_a3_lo, lVar2 == -1)) break;
      UiElem_SetPropFloat(unaff_s3_lo,(long)*unaff_s0_lo,8,extraout_a3_lo);
      param_4 = extraout_a3_lo_00;
    }
    param_2 = (long)*unaff_s0_lo;
    param_1 = unaff_s3_lo;
  } while( true );
}

// 0x00225ff4  size 0x20
/* follows ScrCareer_Draw_MessageDeleted_52d0; no call, branch, pointer or constant references it
   (exception landing pad or dead code) */

void ScrCareer_Draw_MessageDeleted_52d0_Orphan1(void)

{
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

// 0x00226050  size 0xc9c
void ScrCareer_Draw_DeleteThisMessage_6050(undefined4 *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte bVar8;
  byte extraout_a3_lo_04;
  long extraout_a3;
  undefined8 extraout_a3_00;
  undefined8 extraout_a3_01;
  undefined8 extraout_a3_02;
  UiLayout *pUVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  UiLayout *pUVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  
  iVar2 = UiMgr_FindLayout(0xaf);
  pUVar13 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xb0);
  iVar2 = param_1[8];
  pUVar1 = g_UiMgr->slots;
  param_1[8] = 0;
  pUVar9 = &pUVar1[iVar3].layout;
  if (iVar2 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(pUVar13,0x3f,8,extraout_a3_lo);
    UiElem_SetPropFloat(pUVar13,0x41,8,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar9,0x1c,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar9,0x1d,8,extraout_a3_lo_02);
    iVar2 = 0;
    piVar10 = &DAT_0032aa60;
    do {
      iVar3 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar3].layout,(long)*piVar10,8,extraout_a3_lo_03);
      iVar2 = iVar2 + 1;
      piVar10 = piVar10 + 1;
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
      iVar6 = 0;
      if (0 < iVar3) {
        iVar3 = 0;
        puVar12 = (undefined4 *)0x32aaf0;
        puVar11 = (undefined4 *)0x32aa90;
        puVar14 = (undefined4 *)0x32aac0;
        do {
          uVar15 = 0;
          if (iVar2 == 1) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar3 + 0x354) * 0x28 + 0x999c)
                == '\x01') {
              uVar15 = 5;
            }
            iVar2 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar3 + 0x354) * 0x28 + 0x9998
                            );
            MenuWnd_DrawLabel(0xaf,*puVar12,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar2 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar3 + param_1[0x19d] * 800 + 0x34) * 0x28;
            if (*(int *)(iVar2 + 0x99a0) == 0) {
              MenuWnd_DrawText(0xaf,*puVar11,0xa8c);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar11,*(int *)(iVar2 + 0x9994) + 0x1b9a);
            }
            MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar3 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0x9994) + 0x1a28);
          }
          else if (iVar2 == 0) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar3 + 0x34) * 0x28 + 0xb8dc) ==
                '\x01') {
              uVar15 = 5;
            }
            iVar2 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar3 + 0x34) * 0x28 + 0xb8d8)
            ;
            MenuWnd_DrawLabel(0xaf,*puVar12,0x444,iVar2,iVar2 % 7 + 0x44a);
            iVar7 = param_1[0x1a0] +
                    *(int *)((int)param_1 + iVar3 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar2 = *(int *)(iVar7 + 0xb8e0);
            if (iVar2 == -1) {
              MenuWnd_DrawText(0xaf,*puVar11,*(int *)(iVar7 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar11,iVar2 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar3 + param_1[0x19d] * 800 + 0x34)
                                        * 0x28 + 0xb8d4) + 0x1a28);
          }
          iVar2 = param_1[0x19d];
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 4;
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar6 < (int)param_1[iVar2 + 0xb]);
      }
    }
    else {
      iVar2 = 0;
      puVar12 = (undefined4 *)0x32aaf0;
      puVar11 = (undefined4 *)0x32aa90;
      puVar14 = (undefined4 *)0x32aac0;
      do {
        uVar15 = 0;
        if (param_1[0x19d] == 1) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19f] + iVar2) - param_1[2]) + 0xd5] * 0x28 + 0x999c) ==
              '\x01') {
            uVar15 = 5;
          }
          iVar3 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19f] + iVar2) - param_1[2]) + 0xd5] * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar12,0x444,iVar3,iVar3 % 7 + 0x44a);
          iVar3 = param_1[0x19d];
          iVar6 = param_1[0x1a0] +
                  param_1[iVar3 * 200 +
                          ((param_1[iVar3 + 0x19e] + iVar2) - param_1[iVar3 + 1]) + 0xd] * 0x28;
          iVar3 = *(int *)(iVar6 + 0x99a0);
          if (iVar3 == -1) {
            MenuWnd_DrawText(0xaf,*puVar11,*(int *)(iVar6 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar11,iVar3 + 0xa8c);
          }
          iVar3 = param_1[0x19d];
          MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                             *(int *)(param_1[0x1a0] +
                                      param_1[iVar3 * 200 +
                                              ((param_1[iVar3 + 0x19e] + iVar2) - param_1[iVar3 + 1]
                                              ) + 0xd] * 0x28 + 0x9994) + 0x1a28);
        }
        else if (param_1[0x19d] == 0) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19e] + iVar2) - param_1[1]) + 0xd] * 0x28 + 0xb8dc) ==
              '\x01') {
            uVar15 = 5;
          }
          iVar3 = *(int *)(param_1[0x1a0] +
                           param_1[((param_1[0x19e] + iVar2) - param_1[1]) + 0xd] * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar12,0x444,iVar3,iVar3 % 7 + 0x44a);
          iVar3 = param_1[0x19d];
          iVar6 = param_1[0x1a0] +
                  param_1[iVar3 * 200 +
                          ((param_1[iVar3 + 0x19e] + iVar2) - param_1[iVar3 + 1]) + 0xd] * 0x28;
          iVar3 = *(int *)(iVar6 + 0xb8e0);
          if (iVar3 == -1) {
            MenuWnd_DrawText(0xaf,*puVar11,*(int *)(iVar6 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar11,iVar3 + 0xa8c);
          }
          iVar3 = param_1[0x19d];
          MenuWnd_DrawTextId(0xaf,*puVar14,uVar15,
                             *(int *)(param_1[0x1a0] +
                                      param_1[iVar3 * 200 +
                                              ((param_1[iVar3 + 0x19e] + iVar2) - param_1[iVar3 + 1]
                                              ) + 0xd] * 0x28 + 0xb8d4) + 0x1a28);
        }
        iVar2 = iVar2 + 1;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar2 < 10);
    }
  }
  uVar15 = maybe_Mail_CountMessages(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar15);
  if ((int)param_1[param_1[0x19d] + 0xb] < 0xb) {
    iVar3 = 0;
    iVar2 = 0;
    piVar10 = &DAT_0032ab20;
    uVar15 = extraout_a3_01;
    do {
      bVar8 = (byte)uVar15;
      iVar6 = param_1[0x19d];
      if ((iVar3 < (int)param_1[iVar6 + 0xb]) &&
         (lVar4 = Career_GetRivalIndex
                            (param_1[0x1a0],iVar6 == 0,
                             *(undefined4 *)((int)param_1 + iVar2 + iVar6 * 800 + 0x34)),
         bVar8 = extraout_a3_lo_04, lVar4 != -1)) {
        UiElem_SetPropFloat(pUVar13,(long)*piVar10,8,extraout_a3_lo_04);
        uVar15 = extraout_a3_00;
      }
      else {
        UiElem_SetPropFloat(pUVar13,(long)*piVar10,8,bVar8);
        uVar15 = extraout_a3_02;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      piVar10 = piVar10 + 1;
    } while (iVar3 < 0xb);
  }
  else {
    iVar2 = 0;
    piVar10 = &DAT_0032ab20;
    do {
      iVar3 = param_1[0x19d];
      lVar4 = (long)iVar3;
      iVar6 = iVar2 + (param_1[iVar3 + 0x19e] - param_1[iVar3 + 1]);
      if ((iVar6 < (int)param_1[iVar3 + 0xb]) &&
         (lVar5 = Career_GetRivalIndex(param_1[0x1a0],lVar4 == 0,param_1[iVar3 * 200 + iVar6 + 0xd])
         , lVar4 = extraout_a3, lVar5 != -1)) {
        UiElem_SetPropFloat(pUVar13,(long)*piVar10,8,(byte)extraout_a3);
      }
      else {
        UiElem_SetPropFloat(pUVar13,(long)*piVar10,8,(byte)lVar4);
      }
      iVar2 = iVar2 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar2 < 0xb);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00226d04  size 0x18
/* follows ScrCareer_Draw_DeleteThisMessage_6050; no call, branch, pointer or constant reference
   (exception landing pad or dead code) */

void ScrCareer_Draw_DeleteThisMessage_6050_Orphan2(void)

{
  int iVar1;
  long lVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte in_a3_lo;
  int *unaff_s0_lo;
  int unaff_s1_lo;
  int unaff_s2_lo;
  UiLayout *unaff_s3_lo;
  int unaff_s4_lo;
  
  while( true ) {
    unaff_s2_lo = unaff_s2_lo + 1;
    unaff_s1_lo = unaff_s1_lo + 4;
    unaff_s0_lo = unaff_s0_lo + 1;
    if (10 < unaff_s2_lo) break;
    iVar1 = *(int *)(unaff_s4_lo + 0x674);
    if ((unaff_s2_lo < *(int *)(unaff_s4_lo + iVar1 * 4 + 0x2c)) &&
       (lVar2 = Career_GetRivalIndex
                          (*(undefined4 *)(unaff_s4_lo + 0x680),iVar1 == 0,
                           *(undefined4 *)(unaff_s4_lo + iVar1 * 800 + unaff_s1_lo + 0x34)),
       in_a3_lo = extraout_a3_lo, lVar2 != -1)) {
      UiElem_SetPropFloat(unaff_s3_lo,(long)*unaff_s0_lo,8,extraout_a3_lo);
      in_a3_lo = extraout_a3_lo_00;
    }
    else {
      UiElem_SetPropFloat(unaff_s3_lo,(long)*unaff_s0_lo,8,in_a3_lo);
      in_a3_lo = extraout_a3_lo_01;
    }
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00226d20  size 0x1c
/* follows ScrCareer_Draw_DeleteThisMessage_6050; no call, branch, pointer or constant references it
   (exception landing pad or dead code) */

void ScrCareer_Draw_DeleteThisMessage_6050_Orphan1(void)

{
  return;
}

// 0x00226d40  size 0x70c
void ScrCareer_Draw_AcceptThisRival(undefined4 *param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  byte extraout_a3_lo;
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
    UiElem_SetPropFloat(pUVar5,3,8,extraout_a3_lo);
  }
  else {
    UiElem_SetPropFloat(pUVar5,3,8,extraout_a3_lo);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar3 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  if (param_1[0x19d] == 1) {
    iVar3 = Rival_IsUnlocked(*(undefined4 *)
                              (param_1[param_1[0x19f] + 0xd5] * 0x28 + param_1[0x1a0] + 0x9994));
    if (*(int *)(iVar3 + 0x2c) != -1) {
      iVar3 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
    }
  }
  else if ((param_1[0x19d] == 0) &&
          (iVar3 = Rival_IsUnlocked(*(undefined4 *)
                                     (param_1[param_1[0x19e] + 0xd] * 0x28 + param_1[0x1a0] + 0xb8d4
                                     )), *(int *)(iVar3 + 0x2c) != -1)) {
    iVar3 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
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
  uint uVar5;
  int *piVar6;
  long lVar7;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  UiLayout *pUVar8;
  UiLayout *pUVar9;
  
  UiMgr_FindLayout(0xb2);
  iVar2 = UiMgr_FindLayout(0xb0);
  pUVar9 = &g_UiMgr->slots[iVar2].layout;
  iVar3 = UiMgr_FindLayout(0xb1);
  iVar2 = *(int *)(param_1 + 0x20);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pUVar8 = &pUVar1[iVar3].layout;
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
    uVar5 = UiRes_GetLayoutData(0xf9);
    iVar2 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar2].layout.unk_310 = 0xffffffff;
    pUVar1[iVar2].layout.unk_31c = 0;
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    pUVar1[iVar2].layout.unk_31c = uVar5;
    pUVar1[iVar2].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0xec);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar2].layout.unk_310 = 0xffffffff;
    pUVar1[iVar2].layout.unk_31c = 0;
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    pUVar1[iVar2].layout.unk_30c = 0;
    if (pUVar1[iVar2].layout.unk_31c == 0) {
      pUVar1[iVar2].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar2].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x314 = 0;
    pUVar1[iVar2].layout.unk_31c = uVar5;
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
    UiElem_SetPropFloat(pUVar9,0x1c,8,extraout_a3_lo_00);
    UiElem_SetPropFloat(pUVar9,0x1d,8,extraout_a3_lo_01);
    UiElem_SetPropFloat(pUVar8,8,8,extraout_a3_lo_02);
    UiElem_SetPropFloat(pUVar8,9,8,extraout_a3_lo_03);
    UiElem_SetPropFloat(pUVar9,0x17,8,extraout_a3_lo_04);
    iVar2 = UiMgr_FindLayout(0xb2);
    pUVar1 = g_UiMgr->slots;
    piVar6 = (int *)UiRes_GetLayoutData(0xed);
    UiLayout_PlayAnim(&pUVar1[iVar2].layout,piVar6);
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
  lVar7 = Career_GetRivalIndex
                    (*(undefined4 *)(param_1 + 0x680),iVar2 == 0,
                     *(undefined4 *)
                      (*(int *)(iVar2 * 4 + param_1 + 0x678) * 4 + iVar2 * 800 + param_1 + 0x34));
  if (lVar7 == -1) {
    UiElem_SetPropFloat(pUVar8,3,8,extraout_a3_lo);
  }
  else {
    UiElem_SetPropFloat(pUVar8,3,8,extraout_a3_lo);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar2 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xb1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  if (*(int *)(param_1 + 0x674) == 1) {
    iVar2 = Rival_IsUnlocked(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x67c) * 4 + param_1 + 0x354) * 0x28 +
                               *(int *)(param_1 + 0x680) + 0x9994));
    if (*(int *)(iVar2 + 0x2c) != -1) {
      iVar2 = UiMgr_FindLayout(0xb2);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
      UiLayout_UpdateAnimById((UiLayout *)0xb2,2);
    }
  }
  else if ((*(int *)(param_1 + 0x674) == 0) &&
          (iVar2 = Rival_IsUnlocked(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x678) * 4 + param_1 + 0x34) *
                                      0x28 + *(int *)(param_1 + 0x680) + 0xb8d4)),
          *(int *)(iVar2 + 0x2c) != -1)) {
    iVar2 = UiMgr_FindLayout(0xb2);
    UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
    UiLayout_UpdateAnimById((UiLayout *)0xb2,2);
  }
  return;
}

// 0x00227e70  size 0x21dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Mail_7e70(int *param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  byte extraout_a3_lo_08;
  byte bVar12;
  byte extraout_a3_lo_09;
  byte extraout_a3_lo_10;
  byte extraout_a3_lo_11;
  byte extraout_a3_lo_12;
  byte extraout_a3_lo_13;
  byte extraout_a3_lo_14;
  byte extraout_a3_lo_15;
  byte extraout_a3_lo_16;
  byte extraout_a3_lo_17;
  byte extraout_a3_lo_18;
  byte extraout_a3_lo_19;
  byte extraout_a3_lo_20;
  byte extraout_a3_lo_21;
  byte extraout_a3_lo_22;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  undefined8 extraout_a3_01;
  undefined8 extraout_a3_02;
  undefined8 extraout_a3_03;
  undefined8 extraout_a3_04;
  undefined8 extraout_a3_05;
  undefined8 extraout_a3_06;
  undefined8 extraout_a3_07;
  undefined8 extraout_a3_08;
  undefined8 extraout_a3_09;
  undefined8 extraout_a3_10;
  undefined8 extraout_a3_11;
  undefined8 extraout_a3_12;
  undefined8 extraout_a3_13;
  undefined8 extraout_a3_14;
  undefined8 extraout_a3_15;
  undefined8 extraout_a3_16;
  undefined8 extraout_a3_17;
  undefined8 extraout_a3_18;
  undefined8 extraout_a3_19;
  undefined8 extraout_a3_20;
  undefined8 extraout_a3_21;
  undefined8 extraout_a3_22;
  undefined8 extraout_a3_23;
  undefined8 extraout_a3_24;
  undefined8 extraout_a3_25;
  undefined8 extraout_a3_26;
  long extraout_a3_27;
  undefined8 extraout_a3_28;
  undefined8 extraout_a3_29;
  undefined8 extraout_a3_30;
  undefined8 extraout_a3_31;
  int *piVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  UiLayout *pUVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  UiLayout *pUVar20;
  
  iVar4 = UiMgr_FindLayout(0xaf);
  pUVar17 = &g_UiMgr->slots[iVar4].layout;
  iVar4 = UiMgr_FindLayout(0xb0);
  pUVar20 = &g_UiMgr->slots[iVar4].layout;
  UiMgr_FindLayout(0xb1);
  iVar4 = param_1[8];
  param_1[8] = 0;
  if (iVar4 == 0) {
    iVar4 = param_1[0x19d];
    uVar6 = extraout_a3;
  }
  else {
    uVar15 = UiRes_GetLayoutData(0xee);
    iVar4 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar4].layout.unk_310 = 0xffffffff;
    pUVar1[iVar4].layout.unk_31c = 0;
    pUVar1[iVar4].layout.unk_30c = 0;
    if (pUVar1[iVar4].layout.unk_31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    pUVar1[iVar4].layout.unk_30c = 0;
    if (pUVar1[iVar4].layout.unk_31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    pUVar1[iVar4].layout.unk_31c = uVar15;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0xef);
    iVar4 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
      pUVar1[iVar4].layout.animState = 0;
    }
    else {
      pUVar1[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
      pUVar1[iVar4].layout.animState = 0;
    }
    else {
      pUVar1[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar5;
    pUVar1[iVar4].layout.animState = 1;
    uVar15 = UiRes_GetLayoutData(0xf2);
    iVar4 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar4].layout.unk_310 = 0xffffffff;
    pUVar1[iVar4].layout.unk_31c = 0;
    pUVar1[iVar4].layout.unk_30c = 0;
    if (pUVar1[iVar4].layout.unk_31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    pUVar1[iVar4].layout.unk_30c = 0;
    if (pUVar1[iVar4].layout.unk_31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    pUVar1[iVar4].layout.unk_31c = uVar15;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0xf3);
    iVar4 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
      pUVar1[iVar4].layout.animState = 0;
    }
    else {
      pUVar1[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
      pUVar1[iVar4].layout.animState = 0;
    }
    else {
      pUVar1[iVar4].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar5;
    pUVar1[iVar4].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0xf7);
    iVar4 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0xf9);
    iVar4 = UiMgr_FindLayout(0xb0);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0xf4);
    iVar4 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0xf1);
    iVar4 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xb0,0x36e998,2,1);
    UiElem_SetPropFloat(pUVar17,0x3f,8,extraout_a3_lo_02);
    UiElem_SetPropFloat(pUVar17,0x41,8,extraout_a3_lo_03);
    UiElem_SetPropFloat(pUVar20,0x1c,8,extraout_a3_lo_04);
    UiElem_SetPropFloat(pUVar20,0x1d,8,extraout_a3_lo_05);
    UiElem_SetPropFloat(pUVar20,0x17,8,extraout_a3_lo_06);
    _s_ScrCareer_Draw_Mail_7e70_1 = 0;
    uVar6 = extraout_a3_09;
    do {
      UiElem_SetPropFloat(pUVar17,(long)(int)(&DAT_0032a970)[_s_ScrCareer_Draw_Mail_7e70_1],8,
                          (byte)uVar6);
      _s_ScrCareer_Draw_Mail_7e70_1 = _s_ScrCareer_Draw_Mail_7e70_1 + 1;
      uVar6 = extraout_a3_10;
    } while (_s_ScrCareer_Draw_Mail_7e70_1 < 0xb);
    iVar4 = param_1[0x19d];
  }
  if (param_1[iVar4 + 0xb] < 0xb) {
    iVar4 = param_1[3];
  }
  else {
    MenuWnd_DrawCursor(1);
    iVar4 = param_1[3];
    uVar6 = extraout_a3_11;
  }
  if (iVar4 - 2U < 2) {
    if (param_1[0x19d] == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaf,0);
      bVar12 = extraout_a3_lo_07;
      if (!bVar2 && !bVar3) {
        param_1[7] = 0;
      }
    }
    else {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,2);
      bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaf,0);
      bVar12 = extraout_a3_lo_08;
      if (!bVar2 && !bVar3) {
        param_1[7] = 0;
      }
    }
    UiElem_SetPropFloat(pUVar17,0x3f,8,bVar12);
    UiElem_SetPropFloat(pUVar17,0x41,8,extraout_a3_lo_09);
    iVar4 = param_1[9];
    uVar6 = extraout_a3_12;
  }
  else {
    if (((iVar4 == 4) || (iVar4 == 8)) || (iVar4 == 10)) {
      param_1[7] = 0;
    }
    else if (param_1[0x19d] == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,0);
      uVar6 = extraout_a3_13;
      if (!bVar2) {
        param_1[7] = 0;
      }
    }
    else {
      param_1[7] = 0;
    }
    iVar4 = param_1[9];
  }
  if (iVar4 != 0) {
    if (param_1[5] == 2) {
      if (param_1[0x19d] == 1) {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,3);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaf,1);
        bVar12 = extraout_a3_lo_10;
        if (!bVar2 && !bVar3) {
          param_1[9] = 0;
        }
      }
      else {
        bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,3);
        bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xaf,1);
        bVar12 = extraout_a3_lo_11;
        if (!bVar2 && !bVar3) {
          param_1[9] = 0;
        }
      }
      UiElem_SetPropFloat(pUVar17,0x3f,8,bVar12);
      UiElem_SetPropFloat(pUVar17,0x41,8,extraout_a3_lo_12);
      uVar6 = extraout_a3_14;
    }
    else if (param_1[5] == 4) {
      param_1[9] = 0;
    }
    else if (param_1[0x19d] == 1) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,1);
      uVar6 = extraout_a3_15;
      if (!bVar2) {
        param_1[9] = 0;
      }
    }
    else {
      param_1[9] = 0;
    }
    iVar4 = 0;
    piVar13 = &DAT_0032a970;
    do {
      UiElem_SetPropFloat(pUVar17,(long)*piVar13,8,(byte)uVar6);
      iVar4 = iVar4 + 1;
      piVar13 = piVar13 + 1;
      uVar6 = extraout_a3_00;
    } while (iVar4 < 10);
    MenuWnd_SetItemVisible(0);
    uVar6 = extraout_a3_01;
  }
  if (param_1[0x1a1] == 3) {
    if (param_1[0x19d] == 0) {
      bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,1);
      uVar6 = extraout_a3_16;
      if (!bVar2) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
        param_1[0x1a1] = 2;
        iVar4 = UiMgr_FindLayout(0xaf);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,5,8,extraout_a3_lo_13);
        uVar5 = UiRes_GetLayoutData(0xef);
        iVar4 = UiMgr_FindLayout(0xb0);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x324 = 0xffffffff;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
          pUVar1[iVar4].layout.animState = 0;
        }
        else {
          pUVar1[iVar4].layout.animState = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x320 = 0;
        if (*(int *)&pUVar1[iVar4].layout.field_0x330 == 0) {
          pUVar1[iVar4].layout.animState = 0;
        }
        else {
          pUVar1[iVar4].layout.animState = 1;
        }
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x328 = 0;
        *(undefined4 *)&pUVar1[iVar4].layout.field_0x330 = uVar5;
        pUVar1[iVar4].layout.animState = 1;
        uVar6 = extraout_a3_17;
        if (param_1[0xb] < 10) {
          iVar4 = UiMgr_FindLayout(0xb0);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x1c,8,extraout_a3_lo_14);
          iVar4 = UiMgr_FindLayout(0xb0);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x1d,8,extraout_a3_lo_15);
          uVar6 = extraout_a3_18;
        }
      }
    }
    else if ((param_1[0x19d] == 1) &&
            (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xb0,0), uVar6 = extraout_a3_02, !bVar2)) {
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      param_1[0x1a1] = 2;
      iVar4 = UiMgr_FindLayout(0xaf);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,4,8,extraout_a3_lo);
      uVar15 = UiRes_GetLayoutData(0xee);
      iVar4 = UiMgr_FindLayout(0xb0);
      pUVar1 = g_UiMgr->slots;
      pUVar1[iVar4].layout.unk_310 = 0xffffffff;
      pUVar1[iVar4].layout.unk_31c = 0;
      pUVar1[iVar4].layout.unk_30c = 0;
      if (pUVar1[iVar4].layout.unk_31c == 0) {
        pUVar1[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar4].layout.unk_318 = 1;
      }
      pUVar1[iVar4].layout.unk_30c = 0;
      if (pUVar1[iVar4].layout.unk_31c == 0) {
        pUVar1[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar1[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
      pUVar1[iVar4].layout.unk_31c = uVar15;
      pUVar1[iVar4].layout.unk_318 = 1;
      uVar6 = extraout_a3_03;
      if (param_1[0xc] < 10) {
        iVar4 = UiMgr_FindLayout(0xb0);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x1c,8,extraout_a3_lo_00);
        iVar4 = UiMgr_FindLayout(0xb0);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,0x1d,8,extraout_a3_lo_01);
        uVar6 = extraout_a3_04;
      }
    }
    uVar15 = 0;
    piVar13 = &DAT_0032a970;
    do {
      UiElem_SetPropFloat(pUVar17,(long)*piVar13,8,(byte)uVar6);
      uVar15 = uVar15 + 1;
      piVar13 = piVar13 + 1;
      uVar6 = extraout_a3_05;
    } while (uVar15 < 0xb);
  }
  if ((*g_MenuInput == 1) && (param_1[0x1a1] == 2)) {
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
  iVar4 = param_1[0x19d];
  iVar10 = param_1[iVar4 + 0xb];
  uVar6 = extraout_a3_06;
  if (0 < iVar10) {
    if (iVar10 < 0xb) {
      iVar9 = 0;
      if (0 < iVar10) {
        iVar10 = 0;
        puVar16 = (undefined4 *)0x32aa00;
        puVar14 = (undefined4 *)0x32a9a0;
        puVar18 = (undefined4 *)0x32a9d0;
        do {
          uVar19 = 0;
          if (iVar4 == 1) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar10 + 0x354) * 0x28 + 0x999c)
                == '\x01') {
              uVar19 = 5;
            }
            iVar4 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar10 + 0x354) * 0x28 +
                            0x9998);
            MenuWnd_DrawLabel(0xaf,*puVar16,0x444,iVar4,iVar4 % 7 + 0x44a);
            iVar11 = param_1[0x1a0] +
                     *(int *)((int)param_1 + iVar10 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar4 = *(int *)(iVar11 + 0x99a0);
            if (iVar4 == -1) {
              MenuWnd_DrawText(0xaf,*puVar14,*(int *)(iVar11 + 0x9994) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar14,iVar4 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar18,uVar19,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar10 + param_1[0x19d] * 800 + 0x34
                                                ) * 0x28 + 0x9994) + 0x1a28);
            uVar6 = extraout_a3_20;
          }
          else if (iVar4 == 0) {
            if (*(char *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar10 + 0x34) * 0x28 + 0xb8dc)
                == '\x01') {
              uVar19 = 5;
            }
            iVar4 = *(int *)(param_1[0x1a0] + *(int *)((int)param_1 + iVar10 + 0x34) * 0x28 + 0xb8d8
                            );
            MenuWnd_DrawLabel(0xaf,*puVar16,0x444,iVar4,iVar4 % 7 + 0x44a);
            iVar11 = param_1[0x1a0] +
                     *(int *)((int)param_1 + iVar10 + param_1[0x19d] * 800 + 0x34) * 0x28;
            iVar4 = *(int *)(iVar11 + 0xb8e0);
            if (iVar4 == -1) {
              MenuWnd_DrawText(0xaf,*puVar14,*(int *)(iVar11 + 0xb8d4) + 0x1b9a);
            }
            else {
              MenuWnd_DrawText(0xaf,*puVar14,iVar4 + 0xa8c);
            }
            MenuWnd_DrawTextId(0xaf,*puVar18,uVar19,
                               *(int *)(param_1[0x1a0] +
                                        *(int *)((int)param_1 + iVar10 + param_1[0x19d] * 800 + 0x34
                                                ) * 0x28 + 0xb8d4) + 0x1a28);
            uVar6 = extraout_a3_19;
          }
          iVar4 = param_1[0x19d];
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
          puVar16 = puVar16 + 1;
          puVar14 = puVar14 + 1;
          puVar18 = puVar18 + 1;
        } while (iVar9 < param_1[iVar4 + 0xb]);
      }
    }
    else {
      iVar4 = 0;
      puVar16 = (undefined4 *)0x32aa00;
      puVar14 = (undefined4 *)0x32a9a0;
      puVar18 = (undefined4 *)0x32a9d0;
      do {
        uVar19 = 0;
        if (param_1[0x19d] == 1) {
          if (*(char *)(param_1[0x1a0] +
                        param_1[((param_1[0x19f] + iVar4) - *param_1) + 0xd5] * 0x28 + 0x999c) ==
              '\x01') {
            uVar19 = 5;
          }
          iVar10 = *(int *)(param_1[0x1a0] +
                            param_1[((param_1[0x19f] + iVar4) - *param_1) + 0xd5] * 0x28 + 0x9998);
          MenuWnd_DrawLabel(0xaf,*puVar16,0x444,iVar10,iVar10 % 7 + 0x44a);
          iVar9 = param_1[0x1a0] +
                  param_1[param_1[0x19d] * 200 +
                          ((param_1[param_1[0x19d] + 0x19e] + iVar4) - *param_1) + 0xd] * 0x28;
          iVar10 = *(int *)(iVar9 + 0x99a0);
          if (iVar10 == -1) {
            MenuWnd_DrawText(0xaf,*puVar14,*(int *)(iVar9 + 0x9994) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar14,iVar10 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar18,uVar19,
                             *(int *)(param_1[0x1a0] +
                                      param_1[param_1[0x19d] * 200 +
                                              ((param_1[param_1[0x19d] + 0x19e] + iVar4) - *param_1)
                                              + 0xd] * 0x28 + 0x9994) + 0x1a28);
          uVar6 = extraout_a3_08;
        }
        else if (param_1[0x19d] == 0) {
          if (*(char *)(param_1[0x1a0] + param_1[((param_1[0x19e] + iVar4) - *param_1) + 0xd] * 0x28
                       + 0xb8dc) == '\x01') {
            uVar19 = 5;
          }
          iVar10 = *(int *)(param_1[0x1a0] +
                            param_1[((param_1[0x19e] + iVar4) - *param_1) + 0xd] * 0x28 + 0xb8d8);
          MenuWnd_DrawLabel(0xaf,*puVar16,0x444,iVar10,iVar10 % 7 + 0x44a);
          iVar9 = param_1[0x1a0] +
                  param_1[param_1[0x19d] * 200 +
                          ((param_1[param_1[0x19d] + 0x19e] + iVar4) - *param_1) + 0xd] * 0x28;
          iVar10 = *(int *)(iVar9 + 0xb8e0);
          if (iVar10 == -1) {
            MenuWnd_DrawText(0xaf,*puVar14,*(int *)(iVar9 + 0xb8d4) + 0x1b9a);
          }
          else {
            MenuWnd_DrawText(0xaf,*puVar14,iVar10 + 0xa8c);
          }
          MenuWnd_DrawTextId(0xaf,*puVar18,uVar19,
                             *(int *)(param_1[0x1a0] +
                                      param_1[param_1[0x19d] * 200 +
                                              ((param_1[param_1[0x19d] + 0x19e] + iVar4) - *param_1)
                                              + 0xd] * 0x28 + 0xb8d4) + 0x1a28);
          uVar6 = extraout_a3_07;
        }
        iVar4 = iVar4 + 1;
        puVar16 = puVar16 + 1;
        puVar14 = puVar14 + 1;
        puVar18 = puVar18 + 1;
      } while (iVar4 < 10);
    }
  }
  if (param_1[0x1a1] == 0) {
    uVar19 = 0;
    if (param_1[0x19d] == 1) {
      if (*(char *)(param_1[(param_1[0x19f] - *param_1) + 0xd4] * 0x28 + param_1[0x1a0] + 0x999c) ==
          '\x01') {
        uVar19 = 5;
      }
      iVar4 = *(int *)(param_1[(param_1[0x19f] - *param_1) + 0xd4] * 0x28 + param_1[0x1a0] + 0x9998)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar4,iVar4 % 7 + 0x44a);
      iVar10 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] *
               0x28 + param_1[0x1a0];
      iVar4 = *(int *)(iVar10 + 0x99a0);
      if (iVar4 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar10 + 0x9994) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar4 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar19,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] * 0x28
                                  + param_1[0x1a0] + 0x9994) + 0x1a28);
      uVar6 = extraout_a3_22;
      goto LAB_00229558;
    }
    if (param_1[0x19d] == 0) {
      if (*(char *)(param_1[(param_1[0x19e] - *param_1) + 0xc] * 0x28 + param_1[0x1a0] + 0xb8dc) ==
          '\x01') {
        uVar19 = 5;
      }
      iVar4 = *(int *)(param_1[(param_1[0x19e] - *param_1) + 0xc] * 0x28 + param_1[0x1a0] + 0xb8d8);
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar4,iVar4 % 7 + 0x44a);
      iVar10 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] *
               0x28 + param_1[0x1a0];
      iVar4 = *(int *)(iVar10 + 0xb8e0);
      if (iVar4 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar10 + 0xb8d4) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar4 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar19,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0xc] * 0x28
                                  + param_1[0x1a0] + 0xb8d4) + 0x1a28);
      uVar6 = extraout_a3_21;
      goto LAB_00229558;
    }
    iVar4 = param_1[0x1a1];
  }
  else {
LAB_00229558:
    iVar4 = param_1[0x1a1];
  }
  if (iVar4 == 1) {
    uVar19 = 0;
    if (param_1[0x19d] == 1) {
      if (*(char *)(param_1[(param_1[0x19f] - *param_1) + 0xdf] * 0x28 + param_1[0x1a0] + 0x999c) ==
          '\x01') {
        uVar19 = 5;
      }
      iVar4 = *(int *)(param_1[(param_1[0x19f] - *param_1) + 0xdf] * 0x28 + param_1[0x1a0] + 0x9998)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar4,iVar4 % 7 + 0x44a);
      iVar10 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
               0x28 + param_1[0x1a0];
      iVar4 = *(int *)(iVar10 + 0x99a0);
      if (iVar4 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar10 + 0x9994) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar4 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar19,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
                                  0x28 + param_1[0x1a0] + 0x9994) + 0x1a28);
      uVar6 = extraout_a3_24;
    }
    else {
      if (param_1[0x19d] != 0) {
        iVar4 = param_1[0x19d];
        goto LAB_002298fc;
      }
      if (*(char *)(param_1[(param_1[0x19e] - *param_1) + 0x17] * 0x28 + param_1[0x1a0] + 0xb8dc) ==
          '\x01') {
        uVar19 = 5;
      }
      iVar4 = *(int *)(param_1[(param_1[0x19e] - *param_1) + 0x17] * 0x28 + param_1[0x1a0] + 0xb8d8)
      ;
      MenuWnd_DrawLabel(0xaf,DAT_0032aa28,0x444,iVar4,iVar4 % 7 + 0x44a);
      iVar10 = param_1[param_1[0x19d] * 200 + (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
               0x28 + param_1[0x1a0];
      iVar4 = *(int *)(iVar10 + 0xb8e0);
      if (iVar4 == -1) {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,*(int *)(iVar10 + 0xb8d4) + 0x1b9a);
      }
      else {
        MenuWnd_DrawText(0xaf,DAT_0032a9c8,iVar4 + 0xa8c);
      }
      MenuWnd_DrawTextId(0xaf,DAT_0032a9f8,uVar19,
                         *(int *)(param_1[param_1[0x19d] * 200 +
                                          (param_1[param_1[0x19d] + 0x19e] - *param_1) + 0x17] *
                                  0x28 + param_1[0x1a0] + 0xb8d4) + 0x1a28);
      uVar6 = extraout_a3_23;
    }
  }
  iVar4 = param_1[0x19d];
LAB_002298fc:
  if (param_1[iVar4 + 0xb] < 0xb) {
    iVar10 = 0;
    iVar4 = 0;
    piVar13 = &DAT_0032aa30;
    do {
      bVar12 = (byte)uVar6;
      iVar9 = param_1[0x19d];
      if ((iVar10 < param_1[iVar9 + 0xb]) &&
         (lVar7 = Career_GetRivalIndex
                            (param_1[0x1a0],iVar9 == 0,
                             *(undefined4 *)((int)param_1 + iVar4 + iVar9 * 800 + 0x34)),
         bVar12 = extraout_a3_lo_16, lVar7 != -1)) {
        UiElem_SetPropFloat(pUVar17,(long)*piVar13,8,extraout_a3_lo_16);
        uVar6 = extraout_a3_25;
      }
      else {
        UiElem_SetPropFloat(pUVar17,(long)*piVar13,8,bVar12);
        uVar6 = extraout_a3_31;
      }
      iVar10 = iVar10 + 1;
      iVar4 = iVar4 + 4;
      piVar13 = piVar13 + 1;
    } while (iVar10 < 0xb);
  }
  else if (param_1[0x1a1] == 0) {
    iVar4 = 0;
    piVar13 = &DAT_0032aa30;
    do {
      bVar12 = (byte)uVar6;
      iVar10 = param_1[0x19d];
      iVar9 = iVar4 + (param_1[iVar10 + 0x19e] - *param_1);
      if ((iVar9 < param_1[iVar10 + 0xb]) &&
         (lVar7 = Career_GetRivalIndex
                            (param_1[0x1a0],iVar10 == 0,param_1[iVar10 * 200 + iVar9 + 0xd]),
         bVar12 = extraout_a3_lo_20, lVar7 != -1)) {
        UiElem_SetPropFloat(pUVar17,(long)*piVar13,8,extraout_a3_lo_20);
        uVar6 = extraout_a3_26;
      }
      else {
        UiElem_SetPropFloat(pUVar17,(long)*piVar13,8,bVar12);
        uVar6 = extraout_a3_29;
      }
      iVar4 = iVar4 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar4 < 10);
    iVar4 = param_1[0x19d];
    lVar7 = (long)iVar4;
    if (((param_1[iVar4 + 0x19e] - *param_1) + -1 < param_1[iVar4 + 0xb]) &&
       (lVar8 = Career_GetRivalIndex
                          (param_1[0x1a0],lVar7 == 0,
                           param_1[iVar4 * 200 + (param_1[iVar4 + 0x19e] - *param_1) + 0xc]),
       lVar7 = extraout_a3_27, lVar8 != -1)) {
      UiElem_SetPropFloat(pUVar17,(long)DAT_0032aa58,8,(byte)extraout_a3_27);
    }
    else {
      UiElem_SetPropFloat(pUVar17,(long)DAT_0032aa58,8,(byte)lVar7);
    }
  }
  else {
    iVar4 = 0;
    piVar13 = &DAT_0032aa30;
    do {
      bVar12 = (byte)uVar6;
      iVar10 = param_1[0x19d];
      iVar9 = iVar4 + (param_1[iVar10 + 0x19e] - *param_1);
      if ((iVar9 < param_1[iVar10 + 0xb]) &&
         (lVar7 = Career_GetRivalIndex
                            (param_1[0x1a0],iVar10 == 0,param_1[iVar10 * 200 + iVar9 + 0xd]),
         bVar12 = extraout_a3_lo_21, lVar7 != -1)) {
        UiElem_SetPropFloat(pUVar17,(long)*piVar13,8,extraout_a3_lo_21);
        uVar6 = extraout_a3_28;
      }
      else {
        UiElem_SetPropFloat(pUVar17,(long)*piVar13,8,bVar12);
        uVar6 = extraout_a3_30;
      }
      iVar4 = iVar4 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar4 < 0xb);
  }
  if ((param_1[0x1a1] != 0) || (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xaf,2), bVar2)) {
    iVar4 = param_1[0x1a1];
  }
  else {
    param_1[0x1a1] = 2;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    uVar5 = UiRes_GetLayoutData(0xf4);
    iVar4 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x340 = 1;
    Menu_ClearSlot(0);
    iVar4 = param_1[0x1a1];
  }
  if ((iVar4 == 1) && (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0xaf,3), !bVar2)) {
    param_1[0x1a1] = 2;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    uVar5 = UiRes_GetLayoutData(0xf1);
    iVar4 = UiMgr_FindLayout(0xaf);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x354 = 1;
    Menu_ClearSlot(0);
  }
  uVar6 = maybe_Mail_CountMessages(param_1[0x19d]);
  MenuWnd_DrawLabel(7,0x2e,0x446,uVar6);
  UiElem_SetPropFloat(pUVar17,(long)*(int *)(param_1[0x19d] * 4 + 0x36e9a0),8,extraout_a3_lo_17);
  UiElem_SetPropFloat(pUVar20,0x17,8,extraout_a3_lo_18);
  if (param_1[param_1[0x19d] + 0xb] < 0xb) {
    UiElem_SetPropFloat(pUVar20,1,2,extraout_a3_lo_19);
    UiElem_SetPropFloat(pUVar20,1,6,extraout_a3_lo_22);
  }
  else {
    UiElem_SetPropFloat(pUVar20,1,6,extraout_a3_lo_19);
    UiElem_SetPropFloat(pUVar20,1,2,(byte)param_1[0x19d]);
  }
  UiLayout_UpdateAnimById((UiLayout *)0xa6,0);
  iVar4 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xae);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xaf);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(0xb0);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar4].layout);
  return;
}

