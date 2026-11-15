// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00270000 - 0x00274000
#include "ghidra_types.h"

// 0x002700c0  size 0xb44
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 1 of draw table 0x32d9b8 used by ScrSubtitleDraw_Update */

void ScrSubtitleDraw_Draw1(undefined8 param_1)

{
  bool bVar1;
  UiLayoutSlot *pUVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  
  iVar7 = (int)param_1;
  iVar4 = *(int *)(iVar7 + 0x3c);
  *(undefined4 *)(iVar7 + 0x3c) = 0;
  if (iVar4 != 0) {
    if (*(int *)(iVar7 + 4) == 0) {
      uVar3 = UiRes_GetLayoutData(0x2bf);
      iVar4 = UiMgr_FindLayout(0x6f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar3;
      pUVar2[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x2c0);
      iVar4 = UiMgr_FindLayout(0x6f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar3;
      pUVar2[iVar4].layout.animState = 1;
      uVar3 = UiRes_GetLayoutData(0x2c1);
      iVar4 = UiMgr_FindLayout(0x6f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x338 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x33c = 1;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = uVar3;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
      uVar3 = UiRes_GetLayoutData(0x2c2);
      iVar4 = UiMgr_FindLayout(0x6f);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x34c = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x348 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x348 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x350 = 1;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = uVar3;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
    }
    else {
      uVar3 = UiRes_GetLayoutData(0x2d5);
      iVar4 = UiMgr_FindLayout(0x70);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x310 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x30c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x31c == 0) {
        pUVar2[iVar4].layout.unk_318 = 0;
      }
      else {
        pUVar2[iVar4].layout.unk_318 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x314 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x31c = uVar3;
      pUVar2[iVar4].layout.unk_318 = 1;
      uVar3 = UiRes_GetLayoutData(0x2d6);
      iVar4 = UiMgr_FindLayout(0x70);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x324 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x320 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x330 == 0) {
        pUVar2[iVar4].layout.animState = 0;
      }
      else {
        pUVar2[iVar4].layout.animState = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x328 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x330 = uVar3;
      pUVar2[iVar4].layout.animState = 1;
      uVar3 = UiRes_GetLayoutData(0x2d7);
      iVar4 = UiMgr_FindLayout(0x70);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x338 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x334 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x33c = 1;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x344 = uVar3;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x340 = 1;
      uVar3 = UiRes_GetLayoutData(0x2d8);
      iVar4 = UiMgr_FindLayout(0x70);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x34c = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x348 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x348 = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x350 = 1;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x358 = uVar3;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x354 = 1;
      uVar3 = UiRes_GetLayoutData(0x2d9);
      iVar4 = UiMgr_FindLayout(0x70);
      pUVar2 = g_UiMgr->slots;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x360 = 0xffffffff;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x36c = 0;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x35c = 0;
      if (*(int *)&pUVar2[iVar4].layout.field_0x36c == 0) {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 0;
      }
      else {
        *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
      }
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x364 = 1;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x36c = uVar3;
      *(undefined4 *)&pUVar2[iVar4].layout.field_0x368 = 1;
    }
    Menu_ClearSlot(0);
  }
  bVar1 = *(int *)(iVar7 + 4) == 0;
  if (bVar1) {
    uVar10 = 0x6f;
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar4].layout,0x25,8);
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar4].layout,0x24,8);
  }
  else {
    uVar10 = 0x70;
    iVar4 = UiMgr_FindLayout(0x70);
    UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar4].layout,0x20,8);
    iVar4 = UiMgr_FindLayout(0x70);
    UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar4].layout,0x21,8);
    iVar4 = UiMgr_FindLayout(0x70);
    UiElem_SetPropFloat(0x3ecccccd,&g_UiMgr->slots[iVar4].layout,0x22,8);
  }
  uVar9 = (uint)!bVar1;
  lVar6 = UiLayout_UpdateAnimById(uVar10,0);
  if (lVar6 == 0) {
    *(undefined4 *)(iVar7 + 0x38) = 0;
  }
  if ((*(int *)(iVar7 + 0x40) != 0) && (lVar6 = UiLayout_UpdateAnimById(uVar10), lVar6 == 0)) {
    *(undefined4 *)(iVar7 + 0x40) = 0;
  }
  MenuScr_Draw_Clockwise(param_1);
  if (*(int *)(iVar7 + 4) == 0) {
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,3,8);
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,7,8);
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0xb,8);
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0xf,8);
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x13,8);
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar4].layout,0x17,8);
    if (*(int *)(iVar7 + 0x14) == 0) {
      iVar4 = UiMgr_FindLayout(0x6f);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x23,0x16,3);
      iVar4 = UiMgr_FindLayout(0x6f);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,3,8);
    }
    else {
      iVar4 = UiMgr_FindLayout(0x6f);
      UiElem_SetPropInt(&g_UiMgr->slots[iVar4].layout,0x23,0x16,2);
      iVar4 = UiMgr_FindLayout(0x6f);
      UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,7,8);
    }
    iVar4 = UiMgr_FindLayout(0x6f);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,
                        *(undefined4 *)(&DAT_0032da40 + *(int *)(iVar7 + 0x18) * 4),8);
  }
  else {
    iVar4 = 0;
    puVar8 = &DAT_0032da50;
    do {
      iVar5 = UiMgr_FindLayout(0x70);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar5].layout,*puVar8,8);
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar4 < 8);
    iVar4 = UiMgr_FindLayout(0x70);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,
                        (&DAT_0032da50)[*(int *)(iVar7 + 0x14)],8);
    iVar4 = UiMgr_FindLayout(0x70);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,
                        *(undefined4 *)(&DAT_0032da58 + *(int *)(iVar7 + 0x18) * 4),8);
    iVar4 = UiMgr_FindLayout(0x70);
    UiElem_SetPropFloat(0x3f800000,&g_UiMgr->slots[iVar4].layout,
                        *(undefined4 *)(&DAT_0032da68 + *(int *)(iVar7 + 0x1c) * 4),8);
  }
  if (*_g_MenuInput == 1) {
    iVar4 = *(int *)(iVar7 + 0x20);
    if (iVar4 == 2) {
      MenuWnd_SetItemState
                (uVar10,*(undefined4 *)(uVar9 * 4 + *(int *)(iVar7 + 0x1c) * 8 + 0x32daa0),0,0);
    }
    else if (iVar4 == 1) {
      MenuWnd_SetItemState
                (uVar10,*(undefined4 *)(uVar9 * 4 + *(int *)(iVar7 + 0x18) * 8 + 0x32da80),0,0);
    }
    else {
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar7 + 0x20);
        goto LAB_002708ac;
      }
      MenuWnd_SetItemState
                (uVar10,*(undefined4 *)(uVar9 * 4 + *(int *)(iVar7 + 0x14) * 8 + 0x32da70),0,0);
    }
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  iVar4 = *(int *)(iVar7 + 0x20);
LAB_002708ac:
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032dab0 + iVar4 * 4));
  UiLayout_UpdateAnimById(uVar10,*(int *)(iVar7 + 0x20) + 2);
  iVar4 = UiMgr_FindLayout(0x6e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  iVar4 = UiMgr_FindLayout(uVar10);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00270c10  size 0xa34
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 0 of draw table 0x32d9b8 used by ScrSubtitleDraw_Update */

void ScrSubtitleDraw_Draw0(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  
  iVar2 = Msg_ProfileStat(1);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar2 = iVar2 + 2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar3 != 0) {
    uVar5 = UiRes_GetLayoutData(0x2b6);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
      pUVar1[iVar3].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar3].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar5;
    pUVar1[iVar3].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x2b7);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x330 == 0) {
      pUVar1[iVar3].layout.animState = 0;
    }
    else {
      pUVar1[iVar3].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x330 = uVar5;
    pUVar1[iVar3].layout.animState = 1;
    uVar5 = UiRes_GetLayoutData(0x2d4);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c4 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3d0 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c0 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3d0 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3c8 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3d0 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3cc = 1;
    uVar5 = UiRes_GetLayoutData(0x2b8);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x344 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
    uVar5 = UiRes_GetLayoutData(0x2b9);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x358 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
    uVar5 = UiRes_GetLayoutData(0x2ba);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x36c = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x368 = 1;
    uVar5 = UiRes_GetLayoutData(699);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x380 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x37c = 1;
    uVar5 = UiRes_GetLayoutData(700);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x394 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x390 = 1;
    uVar5 = UiRes_GetLayoutData(0x2bd);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a8 = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3a4 = 1;
    uVar5 = UiRes_GetLayoutData(0x2be);
    iVar3 = UiMgr_FindLayout(0x6e);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b0 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3bc = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3ac = 0;
    if (*(int *)&pUVar1[iVar3].layout.field_0x3bc == 0) {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 1;
    }
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b4 = 0;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3bc = uVar5;
    *(undefined4 *)&pUVar1[iVar3].layout.field_0x3b8 = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x6e,0x36ed20,2,0);
  }
  iVar3 = Msg_ProfileStat(1);
  MenuWnd_DrawCursor(3 < iVar3 + 1);
  if (*(int *)(param_1 + 0x28) == 1) {
    lVar7 = UiLayout_UpdateAnimById(0x6e,0);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0x6e,0);
    lVar8 = UiLayout_UpdateAnimById(0x6e,1);
    lVar9 = UiLayout_UpdateAnimById(0x6e,9);
    if (lVar9 == 0 && (lVar7 == 0 && lVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x30) == 1) {
      lVar7 = UiLayout_UpdateAnimById(0x6e,*(int *)(param_1 + 8) + 4);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0x6e,8);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    MenuWnd_DrawCursor(0);
    MenuWnd_SetItemVisible(0);
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x6e,*(undefined4 *)(&DAT_0032da10 + *(int *)(param_1 + 8) * 4),1,0);
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  if (iVar3 == 2) {
    Menu_ClearSlot(0);
    lVar7 = UiLayout_UpdateAnimById(0x6e,3);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      iVar3 = UiMgr_FindLayout(0x6e);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar3].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar3].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar3 = (iVar2 + (*(int *)(param_1 + 4) - *(int *)(param_1 + 8)) + 4) % iVar2;
      uVar10 = MsgId_ForSlot(iVar3 + -1,1);
      MenuWnd_DrawText(0x6e,0x4a,uVar10);
      iVar4 = UiMgr_FindLayout(0x6e);
      UiElem_SetNumber(&g_UiMgr->slots[iVar4].layout,0x44,0x16,
                       *(undefined4 *)(&DAT_0032d9e0 + iVar3 * 4));
    }
  }
  else if (iVar3 == 1) {
    lVar7 = UiLayout_UpdateAnimById(0x6e);
    if (lVar7 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0xc) = 0;
      iVar3 = UiMgr_FindLayout(0x6e);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar3].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar3].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar3].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar3 = (iVar2 + (*(int *)(param_1 + 4) - *(int *)(param_1 + 8)) + -1) % iVar2;
      uVar10 = MsgId_ForSlot(iVar3 + -1,1);
      MenuWnd_DrawText(0x6e,0x4a,uVar10);
      iVar4 = UiMgr_FindLayout(0x6e);
      UiElem_SetNumber(&g_UiMgr->slots[iVar4].layout,0x44,0x16,
                       *(undefined4 *)(&DAT_0032d9e0 + iVar3 * 4));
    }
  }
  iVar3 = 0;
  puVar12 = &DAT_0032d9d0;
  puVar11 = &DAT_0032da30;
  while( true ) {
    if (iVar2 < 4) {
      iVar4 = iVar2;
    }
    else {
      iVar4 = 4;
    }
    if (iVar4 <= iVar3) break;
    iVar4 = (iVar2 + iVar3 + (*(int *)(param_1 + 4) - *(int *)(param_1 + 8))) % iVar2;
    uVar10 = MsgId_ForSlot(iVar4 + -1,1);
    MenuWnd_DrawText(0x6e,*puVar12,uVar10);
    iVar6 = UiMgr_FindLayout(0x6e);
    UiElem_SetNumber(&g_UiMgr->slots[iVar6].layout,*puVar11,0x16,
                     *(undefined4 *)(&DAT_0032d9e0 + iVar4 * 4));
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
    iVar3 = iVar3 + 1;
  }
  if ((iVar2 < 4) && (iVar2 < 4)) {
    puVar13 = &DAT_0032da20 + iVar2 * 4;
    puVar11 = &DAT_0032da30 + iVar2;
    do {
      iVar3 = UiMgr_FindLayout(0x6e);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*(undefined4 *)(puVar13 + -4),8);
      iVar3 = UiMgr_FindLayout(0x6e);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar3].layout,*puVar11,8);
      iVar2 = iVar2 + 1;
      puVar13 = puVar13 + 4;
      puVar11 = puVar11 + 1;
    } while (iVar2 < 4);
  }
  MenuWnd_SetTitle(3,0x127);
  iVar3 = UiMgr_FindLayout(0x6e);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
  return;
}

// 0x00271650  size 0x14
/* screen record 0x3278a8 */

void ScrSubtitleDraw_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00271670  size 0x138
/* screen record 0x3278a8 */

void ScrSubtitleDraw_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  piVar3 = (int *)param_1;
  (*(code *)(&PTR_ScrSubtitleDraw_Draw0_0032d9b8)[piVar3[0xb]])(param_1);
  iVar1 = UiMgr_FindLayout(0x6d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  Subtitle_Draw();
  if (*piVar3 == 3) {
    MenuWnd_DrawStatus(g_MenuMgr->unk_002c,0xfffffffffffffffe,0xffffffffffffffff,0);
  }
  else {
    MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  }
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle(piVar3 + 10), lVar2 == 1)) {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x002717b0  size 0x8
/* screen record 0x3278a8 */

void ScrSubtitleDraw_Enter(void)

{
  return;
}

// 0x002717c0  size 0x244
/* entry 10 of state table 0x32dac0 used by maybe_PageRivalTitle_Update */

void maybe_PageRivalTitle_State10(int param_1)

{
  UiLayoutSlot *pUVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar4 != 0) {
    uVar5 = UiRes_GetLayoutData(0x411);
    iVar4 = UiMgr_FindLayout(0x10);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar4].layout.field_0x31c == 0) {
      pUVar1[iVar4].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar4].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar4].layout.field_0x31c = uVar5;
    pUVar1[iVar4].layout.unk_318 = 1;
    uVar5 = UiRes_GetLayoutData(0x412);
    iVar4 = UiMgr_FindLayout(0x10);
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
  }
  lVar6 = UiLayout_UpdateAnimById(0x10,0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((*(int *)(param_1 + 300) != 0) && (lVar6 = UiLayout_UpdateAnimById(0x10), lVar6 == 0)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  uVar3 = Msg_RivalTitle(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawTextId(0x10,0xf,4,(uVar3 & 0xff) + 0x67);
  bVar2 = Msg_RivalTitle(*(undefined4 *)(param_1 + 8));
  if (bVar2 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar2) {
    case 0:
      uVar7 = 0xc2;
      break;
    default:
      goto switchD_0027187c_caseD_1;
    case 3:
      uVar7 = 0xc3;
      break;
    case 4:
      uVar7 = 0xc6;
      break;
    case 5:
      uVar7 = 199;
      break;
    case 6:
      uVar7 = 0xc4;
      break;
    case 7:
      uVar7 = 0xc5;
    }
  }
  else {
switchD_0027187c_caseD_1:
    uVar7 = 0xffffffffffffffff;
  }
  MenuWnd_DrawText(0x10,0x10,uVar7);
  iVar4 = UiMgr_FindLayout(0x10);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar4].layout);
  return;
}

// 0x00271a10  size 0x200
void ScrGarage_Draw_Sponsors_1a10(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,*(undefined4 *)(param_1 + 0x10),0x36ed58);
  uVar3 = MsgId_PartDescription(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawLabel(5,0x1c,0x12f,uVar3);
  if (*(int *)(param_1 + 300) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  uVar3 = Msg_TeamInfo(*(undefined4 *)(param_1 + 8));
  uVar4 = Profile_Get(0);
  uVar4 = Garage_FindFreeSlot(uVar4);
  MenuWnd_DrawText(0x72,0x4a,0x128);
  MenuWnd_DrawLabel(0x72,0x4b,0x3d,uVar4,0xf);
  uVar4 = Msg_RivalNickname(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x72,0x4e,uVar4);
  uVar4 = Msg_MakerCountry(uVar3);
  uVar3 = Msg_MakerName(uVar3);
  MenuWnd_DrawLabel(0x72,0x4d,0x45,uVar4,uVar3);
  MenuWnd_DrawText(0x72,0x4c,0x129);
  uVar3 = Msg_TeamName(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawNumber(0x72,0x49,uVar3);
  MenuWnd_DrawText(0x72,0x4f,0x12a);
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x72,0x50,uVar3);
  uVar3 = MsgId_PartDescription(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x72,0x51,uVar3);
  iVar1 = UiMgr_FindLayout(0x72);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00271c10  size 0x1e4
void ScrGarage_Draw_Sponsors_1c10(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(299,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 300) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  uVar3 = Msg_TeamInfo(*(undefined4 *)(param_1 + 8));
  uVar4 = Profile_Get(0);
  uVar4 = Garage_FindFreeSlot(uVar4);
  MenuWnd_DrawText(0x72,0x4a,0x128);
  MenuWnd_DrawLabel(0x72,0x4b,0x3d,uVar4,0xf);
  uVar4 = Msg_RivalNickname(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x72,0x4e,uVar4);
  uVar4 = Msg_MakerCountry(uVar3);
  uVar3 = Msg_MakerName(uVar3);
  MenuWnd_DrawLabel(0x72,0x4d,0x45,uVar4,uVar3);
  MenuWnd_DrawText(0x72,0x4c,0x129);
  uVar3 = Msg_TeamName(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawNumber(0x72,0x49,uVar3);
  MenuWnd_DrawText(0x72,0x4f,0x12a);
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x72,0x50,uVar3);
  uVar3 = MsgId_PartDescription(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x72,0x51,uVar3);
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar1 = UiMgr_FindLayout(0x72);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00271e00  size 0x240
void ScrGarage_Draw_Sponsors_1e00(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(0);
  }
  lVar2 = MenuWnd_DrawFooter(0xffffffffffffffff,0xffffffffffffffff,0);
  if (*(int *)(param_1 + 0x110) == 1) {
    uVar3 = Msg_TeamInfo(*(undefined4 *)(param_1 + 8));
    uVar4 = Msg_MakerCountry(uVar3);
    uVar3 = Msg_MakerName(uVar3);
    MenuWnd_DrawLabel(5,0x1c,0x13c,uVar4,uVar3);
    iVar1 = *(int *)(param_1 + 300);
  }
  else {
    MenuWnd_DrawLabel(5,0x1c,0x135);
    iVar1 = *(int *)(param_1 + 300);
  }
  if (iVar1 != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  uVar3 = Msg_TeamInfo(*(undefined4 *)(param_1 + 8));
  uVar4 = Profile_Get(0);
  uVar4 = Garage_FindFreeSlot(uVar4);
  MenuWnd_DrawText(0x72,0x4a,0x128);
  MenuWnd_DrawLabel(0x72,0x4b,0x3d,uVar4,0xf);
  uVar4 = Msg_RivalNickname(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x72,0x4e,uVar4);
  uVar4 = Msg_MakerCountry(uVar3);
  uVar3 = Msg_MakerName(uVar3);
  MenuWnd_DrawLabel(0x72,0x4d,0x45,uVar4,uVar3);
  MenuWnd_DrawText(0x72,0x4c,0x129);
  uVar3 = Msg_TeamName(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawNumber(0x72,0x49,uVar3);
  MenuWnd_DrawText(0x72,0x4f,0x12a);
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x72,0x50,uVar3);
  uVar3 = MsgId_PartDescription(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x72,0x51,uVar3);
  iVar1 = UiMgr_FindLayout(0x72);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00272040  size 0x1fc
void ScrGarage_Draw_Sponsors_2040(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x110);
  }
  else {
    MenuWnd_SetHelpText(2);
    iVar1 = *(int *)(param_1 + 0x110);
  }
  if (iVar1 == 1) {
    uVar4 = 0x13b;
  }
  else {
    uVar4 = 300;
  }
  lVar2 = MenuWnd_DrawFooter(uVar4,*(undefined4 *)(param_1 + 0x10),0x36ed50);
  if (*(int *)(param_1 + 300) != 0) {
    if (lVar2 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar2 == 3) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
  if (lVar2 == 2) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  uVar4 = Msg_TeamInfo(*(undefined4 *)(param_1 + 8));
  uVar3 = Profile_Get(0);
  uVar3 = Garage_FindFreeSlot(uVar3);
  MenuWnd_DrawText(0x72,0x4a,0x128);
  MenuWnd_DrawLabel(0x72,0x4b,0x3d,uVar3,0xf);
  uVar3 = Msg_RivalNickname(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x72,0x4e,uVar3);
  uVar3 = Msg_MakerCountry(uVar4);
  uVar4 = Msg_MakerName(uVar4);
  MenuWnd_DrawLabel(0x72,0x4d,0x45,uVar3,uVar4);
  MenuWnd_DrawText(0x72,0x4c,0x129);
  uVar4 = Msg_TeamName(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawNumber(0x72,0x49,uVar4);
  MenuWnd_DrawText(0x72,0x4f,0x12a);
  uVar4 = Profile_Get(0);
  uVar4 = Profile_GetMoney(uVar4);
  MenuWnd_DrawNumber(0x72,0x50,uVar4);
  uVar4 = MsgId_PartDescription(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x72,0x51,uVar4);
  iVar1 = UiMgr_FindLayout(0x72);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  return;
}

// 0x00272240  size 0x208
void ScrCareer_Draw_YouDidNot_2240(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x2d0);
    iVar2 = UiMgr_FindLayout(0x76);
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
    uVar3 = UiRes_GetLayoutData(0x2d1);
    iVar2 = UiMgr_FindLayout(0x76);
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
  }
  lVar4 = UiLayout_UpdateAnimById(0x76,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((*(int *)(param_1 + 300) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x76), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  iVar2 = UiMgr_FindLayout(0x76);
  pUVar1 = g_UiMgr->slots;
  uVar5 = MsgId_Symbol(*(undefined4 *)(param_1 + 8));
  UiElem_SetPropInt(&pUVar1[iVar2].layout,0x19,0x16,uVar5);
  uVar5 = Msg_RivalNickname(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawLabel(0x76,0x1a,0x137,uVar5);
  iVar2 = UiMgr_FindLayout(0x76);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00272450  size 0x270
void ScrCareer_Draw_ContractMoney_2450(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x2ce);
    iVar2 = UiMgr_FindLayout(0x75);
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
    uVar3 = UiRes_GetLayoutData(0x2cf);
    iVar2 = UiMgr_FindLayout(0x75);
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
  }
  lVar4 = UiLayout_UpdateAnimById(0x75,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((*(int *)(param_1 + 300) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x75), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  MenuWnd_SetTitle(3,0xffffffffffffffff);
  uVar5 = Msg_TeamInfo(*(undefined4 *)(param_1 + 8));
  iVar2 = UiMgr_FindLayout(0x75);
  pUVar1 = g_UiMgr->slots;
  uVar6 = MsgId_Symbol(*(undefined4 *)(param_1 + 8));
  UiElem_SetPropInt(&pUVar1[iVar2].layout,0x25,0x16,uVar6);
  uVar6 = Msg_RivalNickname(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawLabel(0x75,0x28,0x136,uVar6);
  uVar6 = Msg_MakerCountry(uVar5);
  uVar5 = Msg_MakerName(uVar5);
  MenuWnd_DrawLabel(0x75,0x27,0x45,uVar6,uVar5);
  MenuWnd_DrawText(0x75,0x26,0x129);
  uVar5 = Msg_TeamName(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawNumber(0x75,0x29,uVar5);
  iVar2 = UiMgr_FindLayout(0x75);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x002726c0  size 0x2a4
/* WARNING: Switch with 1 destination removed at 0x00272894 */

void ScrCareer_Draw_SponsorData(int *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar5 = *param_1;
  iVar1 = param_1[0x4a];
  param_1[0x4a] = 0;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
  }
  lVar6 = MenuWnd_DrawFooter(0x57,iVar5 != 1,0x36ed40);
  if (param_1[0x4b] != 0) {
    if (lVar6 == 2) {
      MenuWnd_RequestRedraw();
    }
    lVar7 = UiLayout_UpdateAnimById(0x74,1);
    if ((lVar7 == 0) && (lVar6 == 3)) {
      param_1[0x4b] = 0;
    }
  }
  if (lVar6 == 2) {
    param_1[0x49] = 0;
  }
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0036ed48 + (uint)(iVar5 != 1) * 4));
  uVar8 = Msg_RivalCourse(param_1[2]);
  uVar8 = MsgId_ForOption(uVar8);
  cVar2 = Msg_RivalComment(param_1[2]);
  if (cVar2 == '\x01') {
    uVar9 = 0x4d;
  }
  else {
    uVar9 = 0x4e;
  }
  uVar8 = MsgId_ForSlot(uVar8,0);
  MenuWnd_DrawLabel(0x73,0x14,0x46,uVar8,uVar9);
  bVar3 = Msg_RivalTitle(param_1[2]);
  if (bVar3 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar3) {
    case 0:
      uVar8 = 0x6f;
      break;
    default:
      goto switchD_00272804_caseD_1;
    case 3:
      uVar8 = 0x70;
      break;
    case 4:
      uVar8 = 0x73;
      break;
    case 5:
      uVar8 = 0x74;
      break;
    case 6:
      uVar8 = 0x71;
      break;
    case 7:
      uVar8 = 0x72;
    }
  }
  else {
switchD_00272804_caseD_1:
    uVar8 = 0xffffffffffffffff;
  }
  MenuWnd_DrawText(0x73,0x15,uVar8);
  uVar4 = Msg_RivalTitle(param_1[2]);
  MenuWnd_DrawText(0x73,0x16,(uVar4 & 0xff) + 0x67);
  bVar3 = Msg_RivalTitle(param_1[2]);
  if (bVar3 < 6) {
                    /* WARNING: Switch is manually overridden */
    MenuWnd_DrawText(0x73,0x1d,0x13a);
  }
  else {
    MenuWnd_DrawTextId(0x73,0x1d,3,0x13a);
  }
  MenuWnd_DrawText(0x73,0x1b,0x138);
  MenuWnd_DrawText(0x73,0x1c,0x139);
  MenuWnd_DrawText(0x73,0x17,0x12d);
  uVar8 = RivalDb_FindByName((short)param_1[2]);
  MenuWnd_DrawStatus(uVar8,0xfffffffffffffffd,0xffffffffffffffff,0);
  UiLayout_UpdateAnimById(0x73,2);
  iVar5 = UiMgr_FindLayout(0x73);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00272970  size 0x298
void ScrCareer_Draw_RivalCar(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x2cb);
    iVar2 = UiMgr_FindLayout(0x74);
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
    uVar3 = UiRes_GetLayoutData(0x2cc);
    iVar2 = UiMgr_FindLayout(0x74);
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
    uVar3 = UiRes_GetLayoutData(0x2cd);
    iVar2 = UiMgr_FindLayout(0x74);
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
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x344 = uVar3;
    *(undefined4 *)&pUVar1[iVar2].layout.field_0x340 = 1;
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11e,2);
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,0);
  }
  lVar4 = UiLayout_UpdateAnimById(0x74,0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((*(int *)(param_1 + 300) != 0) && (lVar4 = UiLayout_UpdateAnimById(0x74), lVar4 == 0)) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  MenuWnd_SetTitle(3,0x134);
  MenuWnd_DrawText(0x74,2,0x12e);
  uVar5 = RivalDb_FindByCourse(*(undefined2 *)(param_1 + 8));
  MenuWnd_DrawStatus(uVar5,0xfffffffffffffffd,0xffffffffffffffff,0);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  UiLayout_UpdateAnimById(0x74,2);
  iVar2 = UiMgr_FindLayout(0x74);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00272c10  size 0x69c
/* WARNING: Switch with 1 destination removed at 0x00272e20 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_SponsorData_2c10(int param_1)

{
  UiLayoutSlot *pUVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  iVar5 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar5 == 0) {
LAB_00272c3c:
    iVar5 = *(int *)(param_1 + 0x114);
  }
  else {
    uVar6 = UiRes_GetLayoutData(0x2c9);
    iVar5 = UiMgr_FindLayout(0x73);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar6;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x2ca);
    iVar5 = UiMgr_FindLayout(0x73);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar6;
    pUVar1[iVar5].layout.animState = 1;
    uVar6 = UiRes_GetLayoutData(0x2d3);
    iVar5 = UiMgr_FindLayout(0x73);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    uVar6 = UiRes_GetLayoutData(0x421);
    iVar5 = UiMgr_FindLayout(0x73);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    uVar6 = UiRes_GetLayoutData(0x422);
    iVar5 = UiMgr_FindLayout(0x73);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    uVar6 = UiRes_GetLayoutData(0x423);
    iVar5 = UiMgr_FindLayout(0x73);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x378 = 1;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = uVar6;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    Menu_ShowDialog(&g_MenuMgr->field_0x654,0x11e,2);
    if (*(int *)(param_1 + 0x114) == 3) goto LAB_00272c3c;
    Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    iVar5 = *(int *)(param_1 + 0x114);
  }
  if (iVar5 == 3) {
    lVar7 = UiLayout_UpdateAnimById(0x73);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  else {
    lVar7 = UiLayout_UpdateAnimById(0x73,0);
    lVar9 = UiLayout_UpdateAnimById(0x73,3);
    if (lVar7 == 0 && lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  if (*(int *)(param_1 + 300) != 0) {
    Menu_BlockInput(&g_MenuMgr->field_0x654);
    MenuWnd_SetItemVisible(0);
    if (*(int *)(param_1 + 0x11c) == 3) {
      lVar7 = UiLayout_UpdateAnimById(0x73,4);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 300) = 0;
      }
    }
    else {
      lVar7 = UiLayout_UpdateAnimById(0x73,1);
      lVar9 = UiLayout_UpdateAnimById(0x73,4);
      if (lVar7 == 0 && lVar9 == 0) {
        *(undefined4 *)(param_1 + 300) = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x73,*(undefined4 *)(&DAT_0032db20 + *(int *)(param_1 + 0x10) * 4),1,0);
  }
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032db30 + *(int *)(param_1 + 0x10) * 4));
  uVar8 = Msg_RivalCourse(*(undefined4 *)(param_1 + 8));
  uVar8 = MsgId_ForOption(uVar8);
  cVar2 = Msg_RivalComment(*(undefined4 *)(param_1 + 8));
  if (cVar2 == '\x01') {
    uVar10 = 0x4d;
  }
  else {
    uVar10 = 0x4e;
  }
  uVar8 = MsgId_ForSlot(uVar8,0);
  MenuWnd_DrawLabel(0x73,0x14,0x46,uVar8,uVar10);
  bVar3 = Msg_RivalTitle(*(undefined4 *)(param_1 + 8));
  if (bVar3 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar3) {
    case 0:
      uVar8 = 0x6f;
      break;
    default:
      goto switchD_00272d90_caseD_1;
    case 3:
      uVar8 = 0x70;
      break;
    case 4:
      uVar8 = 0x73;
      break;
    case 5:
      uVar8 = 0x74;
      break;
    case 6:
      uVar8 = 0x71;
      break;
    case 7:
      uVar8 = 0x72;
    }
  }
  else {
switchD_00272d90_caseD_1:
    uVar8 = 0xffffffffffffffff;
  }
  MenuWnd_DrawText(0x73,0x15,uVar8);
  uVar4 = Msg_RivalTitle(*(undefined4 *)(param_1 + 8));
  MenuWnd_DrawText(0x73,0x16,(uVar4 & 0xff) + 0x67);
  bVar3 = Msg_RivalTitle(*(undefined4 *)(param_1 + 8));
  if (bVar3 < 6) {
                    /* WARNING: Switch is manually overridden */
    MenuWnd_DrawText(0x73,0x1d,0x13a);
  }
  else {
    MenuWnd_DrawTextId(0x73,0x1d,3,0x13a);
  }
  MenuWnd_DrawText(0x73,0x1b,0x138);
  MenuWnd_DrawText(0x73,0x1c,0x139);
  MenuWnd_DrawText(0x73,0x17,0x12d);
  uVar8 = RivalDb_FindByName(*(undefined2 *)(param_1 + 8));
  MenuWnd_DrawStatus(uVar8,0xfffffffffffffffd,0xffffffffffffffff,0);
  Menu_DrawFrame(&g_MenuMgr->field_0x654);
  UiLayout_UpdateAnimById(0x73,2);
  UiLayout_UpdateAnimById(0x73,5);
  iVar5 = UiMgr_FindLayout(0x73);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x002732b0  size 0xab0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrGarage_Draw_Sponsors_32b0(int param_1)

{
  UiLayoutSlot *pUVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar3 = -1;
  iVar5 = *(int *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x104);
  }
  else {
    uVar4 = UiRes_GetLayoutData(0x2c4);
    iVar5 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x310 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x30c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x31c = uVar4;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar4 = UiRes_GetLayoutData(0x2c5);
    iVar5 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x324 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x320 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x330 == 0) {
      pUVar1[iVar5].layout.animState = 0;
    }
    else {
      pUVar1[iVar5].layout.animState = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x328 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x330 = uVar4;
    pUVar1[iVar5].layout.animState = 1;
    uVar4 = UiRes_GetLayoutData(0x2c6);
    iVar5 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x338 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x33c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x344 = uVar4;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
    uVar4 = UiRes_GetLayoutData(0x2d2);
    iVar5 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x34c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x350 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x358 = uVar4;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
    uVar4 = UiRes_GetLayoutData(0x413);
    iVar5 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x388 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x394 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x384 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x394 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x38c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x394 = uVar4;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x390 = 1;
    uVar4 = UiRes_GetLayoutData(0x414);
    iVar5 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x39c = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a8 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x398 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x3a8 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a0 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a8 = uVar4;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x3a4 = 1;
    uVar4 = UiRes_GetLayoutData(0x2c7);
    iVar5 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x360 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x364 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x36c = uVar4;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
    uVar4 = UiRes_GetLayoutData(0x2c8);
    iVar5 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x374 = 0xffffffff;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
    if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
    }
    else {
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x378 = 0;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x380 = uVar4;
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0x72,0x36ed38,2,0);
    iVar5 = *(int *)(param_1 + 0x104);
  }
  MenuWnd_DrawCursor(3 < iVar5);
  if (*(int *)(param_1 + 0x114) - 6U < 4) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  else {
    lVar8 = UiLayout_UpdateAnimById(0x72,0);
    lVar9 = UiLayout_UpdateAnimById(0x72,6);
    if (lVar8 == 0 && lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  if (*(int *)(param_1 + 300) != 0) {
    MenuWnd_DrawCursor(0);
    if (*(int *)(param_1 + 0x11c) - 6U < 4) {
      MenuWnd_SetItemVisible(0);
      *(undefined4 *)(param_1 + 300) = 0;
    }
    else {
      lVar8 = UiLayout_UpdateAnimById(0x72,1);
      lVar9 = UiLayout_UpdateAnimById(0x72,7);
      if (lVar8 == 0 && lVar9 == 0) {
        *(undefined4 *)(param_1 + 300) = 0;
      }
    }
  }
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x72,*(undefined4 *)(&DAT_0032db00 + *(int *)(param_1 + 0x10c) * 4),0,0);
    iVar5 = *(int *)(param_1 + 0x104);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x104);
  }
  if (iVar5 < 3) {
    puVar12 = (undefined4 *)(&DAT_0032db10 + iVar5 * 4);
    puVar10 = &DAT_0032daf0 + iVar5;
    do {
      iVar2 = UiMgr_FindLayout(0x72);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,*puVar12,8);
      iVar2 = UiMgr_FindLayout(0x72);
      UiElem_SetPropFloat(0,&g_UiMgr->slots[iVar2].layout,*puVar10,8);
      iVar5 = iVar5 + 1;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar5 < 3);
    iVar5 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x108);
  }
  if (iVar5 == 1) {
    Menu_ClearSlot(0);
    lVar8 = UiLayout_UpdateAnimById(0x72,3);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x108) = 2;
      iVar5 = UiMgr_FindLayout(0x72);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x348 = 0;
      if (*(int *)&pUVar1[iVar5].layout.field_0x358 == 0) {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x354 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar3 = (*(int *)(param_1 + 0x104) + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10c)) + 3
              ) % *(int *)(param_1 + 0x104);
    }
  }
  else {
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0xc);
      goto LAB_002733f0;
    }
    lVar8 = UiLayout_UpdateAnimById(0x72,2);
    if (lVar8 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x108) = 2;
      iVar5 = UiMgr_FindLayout(0x72);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x334 = 0;
      if (*(int *)&pUVar1[iVar5].layout.field_0x344 == 0) {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x340 = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      iVar3 = (*(int *)(param_1 + 0x104) + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10c)) +
              -1) % *(int *)(param_1 + 0x104);
    }
  }
  iVar5 = *(int *)(param_1 + 0xc);
LAB_002733f0:
  if (*(int *)(iVar5 * 4 + param_1 + 0x8c) == 1) {
    if (*(int *)(param_1 + 4) == 0) {
      lVar8 = UiLayout_UpdateAnimById(0x72,4);
      if (lVar8 == 0) {
        *(undefined4 *)(param_1 + 4) = 1;
        iVar5 = UiMgr_FindLayout(0x72);
        pUVar1 = g_UiMgr->slots;
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x35c = 0;
        if (*(int *)&pUVar1[iVar5].layout.field_0x36c == 0) {
          *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 0;
        }
        else {
          *(undefined4 *)&pUVar1[iVar5].layout.field_0x368 = 1;
        }
        g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      }
    }
  }
  else if (*(int *)(param_1 + 4) == 1) {
    lVar8 = UiLayout_UpdateAnimById(0x72,5);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      iVar5 = UiMgr_FindLayout(0x72);
      pUVar1 = g_UiMgr->slots;
      *(undefined4 *)&pUVar1[iVar5].layout.field_0x370 = 0;
      if (*(int *)&pUVar1[iVar5].layout.field_0x380 == 0) {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 0;
      }
      else {
        *(undefined4 *)&pUVar1[iVar5].layout.field_0x37c = 1;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xffbfffff;
    }
    else {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    }
  }
  iVar2 = *(int *)(param_1 + 0x104);
  iVar5 = (iVar2 + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10c))) % iVar2;
  iVar11 = 0;
  puVar10 = &DAT_0032daf0;
  do {
    if (3 < iVar2) {
      iVar2 = 4;
    }
    if (iVar2 <= iVar11) goto LAB_00273534;
    if (iVar11 == 3) {
      if (iVar3 == -1) {
LAB_00273534:
        MenuWnd_SetTitle(3,0x130);
        uVar6 = Msg_TeamInfo(*(undefined4 *)(param_1 + 8));
        uVar7 = Profile_Get(0);
        uVar7 = Garage_FindFreeSlot(uVar7);
        MenuWnd_DrawText(0x72,0x4a,0x128);
        MenuWnd_DrawLabel(0x72,0x4b,0x3d,uVar7,0xf);
        uVar7 = Msg_RivalNickname(*(undefined4 *)(param_1 + 8));
        MenuWnd_DrawText(0x72,0x4e,uVar7);
        uVar7 = Msg_MakerCountry(uVar6);
        uVar6 = Msg_MakerName(uVar6);
        MenuWnd_DrawLabel(0x72,0x4d,0x45,uVar7,uVar6);
        MenuWnd_DrawText(0x72,0x4c,0x129);
        uVar6 = Msg_TeamName(*(undefined4 *)(param_1 + 8));
        MenuWnd_DrawNumber(0x72,0x49,uVar6);
        MenuWnd_DrawText(0x72,0x4f,0x12a);
        uVar6 = Profile_Get(0);
        uVar6 = Profile_GetMoney(uVar6);
        MenuWnd_DrawNumber(0x72,0x50,uVar6);
        uVar6 = MsgId_PartDescription(*(undefined4 *)(param_1 + 8));
        MenuWnd_DrawText(0x72,0x51,uVar6);
        iVar3 = UiMgr_FindLayout(0x72);
        UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar3].layout);
        return;
      }
      iVar5 = iVar3;
    }
    uVar4 = *(undefined4 *)(param_1 + iVar5 * 4 + 0x14);
    iVar2 = UiMgr_FindLayout(0x72);
    pUVar1 = g_UiMgr->slots;
    uVar6 = MsgId_Symbol(uVar4);
    UiElem_SetPropInt(&pUVar1[iVar2].layout,*puVar10,0x16,uVar6);
    iVar2 = *(int *)(param_1 + 0x104);
    iVar5 = (iVar5 + 1) % iVar2;
    puVar10 = puVar10 + 1;
    iVar11 = iVar11 + 1;
  } while( true );
}

// 0x00273d60  size 0x14
/* menu page 39 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageRivalTitle_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00273d80  size 0x114
/* menu page 39 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageRivalTitle_Update(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_ScrGarage_Draw_Sponsors_32b0_0032dac0)[*(int *)((int)param_1 + 0x118)])(param_1);
  iVar1 = UiMgr_FindLayout(0x71);
  UiLayout_UpdateAnim(&g_UiMgr->slots[iVar1].layout,0);
  iVar1 = UiMgr_FindLayout(0x71);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  if (((g_MenuMgr->flags & 4) == 0) && (lVar2 = Menu_IsInputIdle((int)param_1 + 0x114), lVar2 == 1))
  {
    if ((g_MenuMgr->flags & 1) == 0) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x800;
    }
  }
  return;
}

// 0x00273ea0  size 0x9c
/* menu page 39 (table 0x3276e0, dispatched by 0x201380) */

void maybe_PageRivalTitle_Enter(void)

{
  UiLayoutSlot *pUVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x2c3);
  iVar3 = UiMgr_FindLayout(0x71);
  pUVar1 = g_UiMgr->slots;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x310 = 0xffffffff;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = 0;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x30c = 0;
  if (*(int *)&pUVar1[iVar3].layout.field_0x31c == 0) {
    pUVar1[iVar3].layout.unk_318 = 0;
  }
  else {
    pUVar1[iVar3].layout.unk_318 = 1;
  }
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x314 = 1;
  *(undefined4 *)&pUVar1[iVar3].layout.field_0x31c = uVar2;
  pUVar1[iVar3].layout.unk_318 = 1;
  return;
}

// 0x00273f40  size 0x1a8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_TuneUp(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = MenuText_CarFullName(0xffffffffffffffff,0);
  MenuWnd_DrawText(0x2d,0x39,0xec);
  uVar3 = 0;
  if (lVar2 == 0x11) {
    uVar3 = 3;
  }
  MenuWnd_DrawTextId(0x35,0x13,uVar3,0xf4);
  MenuWnd_DrawTextId(0x35,0x14,0,0xf5);
  MenuWnd_DrawTextId(0x35,0x15,0,0xf6);
  uVar3 = Profile_Get(0);
  uVar3 = Profile_GetMoney(uVar3);
  MenuWnd_DrawNumber(0x2d,0x38,uVar3);
  if (*_g_MenuInput == 1) {
    MenuWnd_SetItemState(0x35,*(undefined4 *)(&DAT_0032db40 + *param_1 * 4),1,0);
  }
  iVar1 = UiMgr_FindLayout(0x35);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x2c);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  iVar1 = UiMgr_FindLayout(0x2d);
  UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar1].layout);
  MenuWnd_SetTitle(3,*(undefined4 *)(&DAT_0032db50 + *param_1 * 4));
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  return;
}

