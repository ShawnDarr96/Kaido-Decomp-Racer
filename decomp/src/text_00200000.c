// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00200000 - 0x00204000
#include "ghidra_types.h"

// 0x002008b0  size 0x154
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 61 callers */

void MenuWnd_DrawCursor(long param_1)

{
  int iVar1;
  UiLayout *pUVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (uint)((g_MenuMgr->flags & 0x80000) == 0) * 0x18;
  iVar1 = UiMgr_FindLayout(*(undefined4 *)(iVar3 + _g_MenuWnd + 0x30));
  pUVar2 = &g_UiMgr->slots[iVar1].layout;
  if (param_1 == 0) {
    iVar1 = 0;
    if (0 < *(int *)(iVar3 + _g_MenuWnd + 0x34)) {
      iVar4 = 0;
      do {
        UiElem_SetPropFloat(0,pUVar2,*(undefined4 *)(iVar3 + _g_MenuWnd + iVar4 + 0x20),8);
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar1 < *(int *)(iVar3 + _g_MenuWnd + 0x34));
    }
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(iVar3 + _g_MenuWnd + 0x34)) {
      iVar4 = 0;
      do {
        UiElem_SetPropFloat(0x3f800000,pUVar2,*(undefined4 *)(iVar3 + _g_MenuWnd + iVar4 + 0x20),8);
        UiLayout_UpdateAnim(pUVar2,0x13 - iVar1);
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar1 < *(int *)(iVar3 + _g_MenuWnd + 0x34));
    }
  }
  return;
}

// 0x00200a10  size 0x35c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 60 callers */

void MenuWnd_DrawDialogText(undefined8 param_1,undefined4 *param_2,long param_3,long param_4)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  
  bVar2 = (g_MenuMgr->flags & 0x80000) == 0;
  _s_MenuWnd_DrawDialogText_1 = (uint)bVar2;
  iVar3 = (uint)bVar2 * 0x18;
  *(int *)(iVar3 + _g_MenuWnd + 0x34) = (int)param_3;
  *(int *)(iVar3 + _g_MenuWnd + 0x30) = (int)param_1;
  if (param_4 == -1) {
    *(undefined4 *)(iVar3 + _g_MenuWnd + 0x20) = *param_2;
    *(undefined4 *)(iVar3 + _g_MenuWnd + 0x24) = param_2[1];
    *(undefined4 *)(iVar3 + _g_MenuWnd + 0x28) = param_2[2];
    *(undefined4 *)(iVar3 + _g_MenuWnd + 0x2c) = param_2[3];
    iVar3 = UiMgr_FindLayout(param_1);
    pUVar1 = g_UiMgr->slots;
    uVar4 = UiRes_GetLayoutData(0x68);
    UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0x13,*param_2,uVar4,1);
    iVar3 = UiMgr_FindLayout(param_1);
    pUVar1 = g_UiMgr->slots;
    uVar4 = UiRes_GetLayoutData(0x6a);
    UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0x12,param_2[1],uVar4,1);
    iVar3 = UiMgr_FindLayout(param_1);
    pUVar1 = g_UiMgr->slots;
    uVar4 = UiRes_GetLayoutData(0x6b);
    UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0x11,param_2[2],uVar4,1);
    iVar3 = UiMgr_FindLayout(param_1);
    pUVar1 = g_UiMgr->slots;
    uVar4 = UiRes_GetLayoutData(0x69);
    UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0x10,param_2[3],uVar4,1);
  }
  else {
    *(undefined4 *)(iVar3 + _g_MenuWnd + 0x20) = *param_2;
    if (param_4 == 0) {
      iVar3 = UiMgr_FindLayout(param_1);
      pUVar1 = g_UiMgr->slots;
      uVar4 = UiRes_GetLayoutData(0x68);
      UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0x13,*param_2,uVar4,1);
      if (1 < param_3) {
        *(undefined4 *)(_s_MenuWnd_DrawDialogText_1 * 0x18 + _g_MenuWnd + 0x24) = param_2[1];
        iVar3 = UiMgr_FindLayout(param_1);
        pUVar1 = g_UiMgr->slots;
        uVar4 = UiRes_GetLayoutData(0x6a);
        UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0x12,param_2[1],uVar4,1);
      }
    }
    else {
      iVar3 = UiMgr_FindLayout(param_1);
      pUVar1 = g_UiMgr->slots;
      uVar4 = UiRes_GetLayoutData(0x6b);
      UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0x13,*param_2,uVar4,1);
      if (1 < param_3) {
        *(undefined4 *)(_s_MenuWnd_DrawDialogText_1 * 0x18 + _g_MenuWnd + 0x24) = param_2[1];
        iVar3 = UiMgr_FindLayout(param_1);
        pUVar1 = g_UiMgr->slots;
        uVar4 = UiRes_GetLayoutData(0x69);
        UiLayout_IsAnimDone(&pUVar1[iVar3].layout,0x12,param_2[1],uVar4,1);
      }
    }
  }
  return;
}

// 0x00200d70  size 0x174
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 151 callers */

void MenuWnd_SetItemState(int param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  UiLayout *pUVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_4 == 0) {
    uVar6 = 0x16;
    iVar5 = 0x17;
  }
  else {
    uVar6 = 0x14;
    iVar5 = 0x15;
  }
  iVar1 = UiMgr_FindLayout(param_1);
  iVar3 = (int)param_4 * 4;
  piVar2 = (int *)(iVar3 + _g_MenuWnd);
  pUVar4 = &g_UiMgr->slots[iVar1].layout;
  if (piVar2[2] == param_1) {
    if (param_2 != *piVar2) {
      MenuWnd_SetElementState(0,pUVar4,param_2,param_3,param_4);
      MenuWnd_SetElementState(1,pUVar4,*(undefined4 *)(_g_MenuWnd + iVar3),1,0);
      *(int *)(_g_MenuWnd + iVar3) = param_2;
    }
  }
  else {
    piVar2[2] = param_1;
    *(int *)(_g_MenuWnd + iVar3) = param_2;
    MenuWnd_SetElementState(0,pUVar4,param_2,param_3,param_4);
  }
  if ((&pUVar4->unk_318)[iVar5 * 5] == 1) {
    UiLayout_UpdateAnim(pUVar4,iVar5);
  }
  else {
    UiLayout_UpdateAnim(pUVar4,uVar6);
  }
  return;
}

// 0x00200ef0  size 0xc4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 75 callers */

void MenuWnd_SetItemVisible(int param_1)

{
  int iVar1;
  long lVar2;
  
  param_1 = param_1 * 4;
  if (((-1 < ((int *)(param_1 + _g_MenuWnd))[2]) && (-1 < *(int *)(param_1 + _g_MenuWnd))) &&
     (lVar2 = UiMgr_FindLayout(), lVar2 != -1)) {
    iVar1 = UiMgr_FindLayout(*(undefined4 *)(param_1 + _g_MenuWnd + 8));
    MenuWnd_SetElementState
              (1,&g_UiMgr->slots[iVar1].layout,*(undefined4 *)(_g_MenuWnd + param_1),1,0);
  }
  *(undefined4 *)(param_1 + _g_MenuWnd + 8) = 0xffffffff;
  *(undefined4 *)(_g_MenuWnd + param_1) = 0xffffffff;
  return;
}

// 0x00200fc0  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 201 callers */

void Menu_ClearSlot(int param_1)

{
  *(undefined4 *)(param_1 * 4 + _g_MenuWnd + 8) = 0xffffffff;
  *(undefined4 *)(_g_MenuWnd + param_1 * 4) = 0xffffffff;
  return;
}

// 0x00200ff0  size 0xac
/* WARNING: Removing unreachable block (ram,0x00201058) */

void MenuWnd_DrawRivalLabel
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_a0 [20];
  undefined4 uStack_8c;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  iVar1 = UiMgr_FindLayout();
  UiElem_GetRect(&g_UiMgr->slots[iVar1].layout,auStack_a0,param_2);
  uStack_8c = param_3;
  UiText_DrawRivalName(auStack_a0,param_4,&uStack_20);
  return;
}

// 0x002010a0  size 0xa0
/* WARNING: Removing unreachable block (ram,0x00201104) */
/* 152 callers */

void MenuWnd_DrawLabel(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_a0 [120];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  iVar1 = UiMgr_FindLayout();
  UiElem_GetRect(&g_UiMgr->slots[iVar1].layout,auStack_a0,param_2);
  UiText_DrawRivalName(auStack_a0,param_3,&uStack_28);
  return;
}

// 0x00201140  size 0x70
/* 80 callers */

void MenuWnd_DrawTextId(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  iVar1 = UiMgr_FindLayout();
  UiElem_GetRect(&g_UiMgr->slots[iVar1].layout,auStack_40,param_2);
  uStack_2c = param_3;
  UiText_DrawById(auStack_40,param_4);
  return;
}

// 0x002011b0  size 0x60
/* 245 callers */

void MenuWnd_DrawText(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_40 [64];
  
  iVar1 = UiMgr_FindLayout();
  UiElem_GetRect(&g_UiMgr->slots[iVar1].layout,auStack_40,param_2);
  UiText_DrawById(auStack_40,param_3);
  return;
}

// 0x00201210  size 0x48
bool UiLayout_UpdateAnimIfActive(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_2 * 0x14 + param_1 + 0x318) == 1;
  if (bVar1) {
    UiLayout_UpdateAnim();
  }
  return bVar1;
}

// 0x00201260  size 0x98
/* 273 callers */

bool UiLayout_UpdateAnimById(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = UiMgr_FindLayout();
  bVar1 = (&g_UiMgr->slots[iVar2].layout.unk_318)[(int)param_2 * 5] == 1;
  if (bVar1) {
    iVar2 = UiMgr_FindLayout(param_1);
    UiLayout_UpdateAnim(&g_UiMgr->slots[iVar2].layout,param_2);
  }
  return bVar1;
}

// 0x00201300  size 0x2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuWnd_FreeSystem(void)

{
  if (_g_MenuWnd != 0) {
    Mem_Free();
  }
  _g_MenuWnd = 0;
  return;
}

// 0x00201330  size 0x44
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuWnd_AllocSystem(undefined8 param_1)

{
  _g_MenuWnd = (undefined4 *)Mem_Alloc16(0x50,param_1);
  *_g_MenuWnd = 0xffffffff;
  _g_MenuWnd[2] = 0xffffffff;
  _g_MenuWnd[1] = 0xffffffff;
  _g_MenuWnd[3] = 0xffffffff;
  return;
}

// 0x00201380  size 0x8f8
void MenuWnd_DrawMoney(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  uVar4 = g_MenuMgr->flags;
  if ((uVar4 & 0x20000) == 0) {
    if (((uVar4 & 0x80000) == 0) && ((uVar4 & 0x100000) != 0)) {
      if (*(int *)(param_1 + 8) == 1) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      iVar5 = UiMgr_FindLayout(10);
      bVar1 = g_UiMgr->slots[iVar5].layout.animState != 1;
      if (!bVar1) {
        iVar5 = UiMgr_FindLayout(10);
        UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,1);
      }
      iVar5 = UiMgr_FindLayout(9);
      bVar2 = g_UiMgr->slots[iVar5].layout.animState != 1;
      if (!bVar2) {
        iVar5 = UiMgr_FindLayout(9);
        UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,1);
      }
      iVar5 = UiMgr_FindLayout(8);
      bVar3 = g_UiMgr->slots[iVar5].layout.animState != 1;
      if (!bVar3) {
        iVar5 = UiMgr_FindLayout(8);
        UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,1);
      }
      if (bVar1 && (bVar2 && bVar3)) {
        *(undefined4 *)(param_1 + 8) = 1;
        g_MenuMgr->flags = g_MenuMgr->flags | 0x200000;
        iVar5 = UiMgr_FindLayout(8);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,10,10,0x13);
        iVar5 = UiMgr_FindLayout(8);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0xb,10,0x13);
        iVar5 = UiMgr_FindLayout(8);
        UiElem_SetPropInt(&g_UiMgr->slots[iVar5].layout,0xc,10,0x13);
      }
      iVar5 = UiMgr_FindLayout(8);
      UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,2);
      iVar5 = UiMgr_FindLayout(8);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
      iVar5 = UiMgr_FindLayout(9);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
      iVar5 = UiMgr_FindLayout(10);
      UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
      uVar6 = Profile_Get(0);
      uVar6 = Profile_GetMoney(uVar6);
      MenuWnd_DrawNumber(10,1,uVar6);
      if ((g_MenuMgr->flags & 0x10000) == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = 0;
      }
      iVar5 = UiMgr_FindLayout(9);
      UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_100,0x13);
      uStack_ec = uVar7;
      UiText_DrawById(auStack_100,0xee);
      if ((g_MenuMgr->flags & 0x8000) == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = 0;
      }
      iVar5 = UiMgr_FindLayout(9);
      UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_140,0x14);
      uStack_12c = uVar7;
      UiText_DrawById(auStack_140,0xfd);
      if ((g_MenuMgr->flags & 0x4000) == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = 0;
      }
      iVar5 = UiMgr_FindLayout(9);
      UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_180,0x15);
      uStack_16c = uVar7;
      UiText_DrawById(auStack_180,0xfe);
    }
  }
  else {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0;
      uVar6 = MenuMgr_UpdateTransition(0x24);
      (*(code *)PTR_ScrShortcutMenu_Enter_00327890)(uVar6);
    }
    iVar5 = UiMgr_FindLayout(10);
    bVar1 = g_UiMgr->slots[iVar5].layout.unk_318 != 1;
    if (!bVar1) {
      iVar5 = UiMgr_FindLayout(10);
      UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,0);
    }
    iVar5 = UiMgr_FindLayout(9);
    bVar2 = g_UiMgr->slots[iVar5].layout.unk_318 != 1;
    if (!bVar2) {
      iVar5 = UiMgr_FindLayout(9);
      UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,0);
    }
    iVar5 = UiMgr_FindLayout(8);
    bVar3 = g_UiMgr->slots[iVar5].layout.unk_318 != 1;
    if (!bVar3) {
      iVar5 = UiMgr_FindLayout(8);
      UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,0);
    }
    if (bVar1 && (bVar2 && bVar3)) {
      *(undefined4 *)(param_1 + 8) = 1;
      g_MenuMgr->flags = g_MenuMgr->flags | 0x40000;
    }
    iVar5 = UiMgr_FindLayout(8);
    UiLayout_UpdateAnim(&g_UiMgr->slots[iVar5].layout,2);
    iVar5 = UiMgr_FindLayout(8);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
    iVar5 = UiMgr_FindLayout(9);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
    iVar5 = UiMgr_FindLayout(10);
    UiLayout_Draw(0x3f800000,&g_UiMgr->slots[iVar5].layout);
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetMoney(uVar6);
    MenuWnd_DrawNumber(10,1,uVar6);
    if ((g_MenuMgr->flags & 0x10000) == 0) {
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
    }
    iVar5 = UiMgr_FindLayout(9);
    UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_40,0x13);
    uStack_2c = uVar7;
    UiText_DrawById(auStack_40,0xee);
    if ((g_MenuMgr->flags & 0x8000) == 0) {
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
    }
    iVar5 = UiMgr_FindLayout(9);
    UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_80,0x14);
    uStack_6c = uVar7;
    UiText_DrawById(auStack_80,0xfd);
    if ((g_MenuMgr->flags & 0x4000) == 0) {
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
    }
    iVar5 = UiMgr_FindLayout(9);
    UiElem_GetRect(&g_UiMgr->slots[iVar5].layout,auStack_c0,0x15);
    uStack_ac = uVar7;
    UiText_DrawById(auStack_c0,0xfe);
  }
  uVar4 = g_MenuMgr->curScreen;
  if (*(int *)(param_1 + 4) == 0) {
    uVar6 = MenuMgr_UpdateTransition(uVar4);
    (*(code *)(&PTR_maybe_PagePasswordEntry_Enter_003276e0)[uVar4 * 3])(uVar6);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  if (*(int *)(param_1 + 4) == 1) {
    uVar6 = MenuMgr_UpdateTransition(uVar4);
    (*(code *)(&PTR_maybe_PagePasswordEntry_Update_003276e4)[uVar4 * 3])(uVar6);
    if ((g_MenuMgr->flags & 0x800) != 0) {
      g_MenuMgr->flags = g_MenuMgr->flags & 0xfffff7ff;
      g_MenuMgr->flags = g_MenuMgr->flags | 4;
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
  if (*(int *)(param_1 + 4) == 2) {
    uVar6 = MenuMgr_UpdateTransition(uVar4);
    (*(code *)(&PTR_maybe_PagePasswordEntry_Exit_003276e8)[uVar4 * 3])(uVar6);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 0x00201c80  size 0x47c
void MenuScene_Update(int param_1)

{
  int *piVar1;
  UiLayoutSlot *pUVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int aiStack_50 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar1 = *(int **)(param_1 + 0x14);
  uStack_28 = 0x44;
  uStack_30 = 1;
  aiStack_50[0] = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uVar3 = g_MenuMgr->flags;
  uVar8 = 0x80;
  if ((((uVar3 & 0x700) == 0) && ((uVar3 & 0x8000000) == 0)) && (-2 < (int)g_MenuMgr->curScreen)) {
    if ((uVar3 & 2) != 0) {
      if (*piVar1 < 0) {
        uVar4 = UiRes_GetLayoutData(4);
        iVar5 = UiMgr_FindLayout(7);
        pUVar2 = g_UiMgr->slots;
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x310 = 0xffffffff;
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x31c = 0;
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
        if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
          pUVar2[iVar5].layout.unk_318 = 0;
        }
        else {
          pUVar2[iVar5].layout.unk_318 = 1;
        }
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x30c = 0;
        if (*(int *)&pUVar2[iVar5].layout.field_0x31c == 0) {
          pUVar2[iVar5].layout.unk_318 = 0;
        }
        else {
          pUVar2[iVar5].layout.unk_318 = 1;
        }
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x314 = 1;
        *(undefined4 *)&pUVar2[iVar5].layout.field_0x31c = uVar4;
        pUVar2[iVar5].layout.unk_318 = 1;
        *piVar1 = 0x14;
      }
      if (*piVar1 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xfffffffd;
        Gfx_SetFade(2,9,0,0);
        iVar5 = *piVar1;
      }
      else {
        uVar8 = (uint)(*piVar1 << 7) / 0x14;
        if (uVar8 < 0x81) {
          aiStack_50[0] = uVar8 << 0x18;
        }
        else {
          uVar8 = 0x80;
          aiStack_50[0] = -0x80000000;
        }
        Gfx_SetFade(2,9,1,aiStack_50);
        iVar5 = *piVar1;
      }
      *piVar1 = iVar5 + -1;
    }
    if ((g_MenuMgr->flags & 1) != 0) {
      if (*piVar1 < 0) {
        *piVar1 = 0x28;
      }
      if (*piVar1 == 0) {
        g_MenuMgr->flags = g_MenuMgr->flags & 0xfffffffe;
        g_MenuMgr->flags = g_MenuMgr->flags | 2;
      }
      else {
        uVar3 = (uVar8 * (0x28 - *piVar1)) / 0x28;
        if (uVar3 < 0x81) {
          aiStack_50[0] = uVar3 << 0x18;
        }
        else {
          aiStack_50[0] = -0x80000000;
        }
        Gfx_SetFade(2,9,1,aiStack_50);
      }
      *piVar1 = *piVar1 + -1;
    }
    if ((g_MenuMgr->flags & 0x1a0000) == 0) {
      if ((g_MenuMgr->flags & 8) != 0) {
        uVar3 = g_MenuMgr->curScreen;
        if (piVar1[1] == 0) {
          uVar7 = MenuMgr_UpdateTransition(uVar3);
          (*(code *)(&PTR_maybe_PagePasswordEntry_Enter_003276e0)[uVar3 * 3])(uVar7);
          piVar1[1] = 1;
        }
        if (piVar1[1] == 1) {
          uVar7 = MenuMgr_UpdateTransition(uVar3);
          (*(code *)(&PTR_maybe_PagePasswordEntry_Update_003276e4)[uVar3 * 3])(uVar7);
          if ((g_MenuMgr->flags & 0x800) != 0) {
            g_MenuMgr->flags = g_MenuMgr->flags & 0xfffff7ff;
            g_MenuMgr->flags = g_MenuMgr->flags | 4;
            piVar1[1] = 2;
          }
        }
        if (piVar1[1] == 2) {
          uVar7 = MenuMgr_UpdateTransition(uVar3);
          (*(code *)(&PTR_maybe_PagePasswordEntry_Exit_003276e8)[uVar3 * 3])(uVar7);
          piVar1[1] = 0;
        }
      }
    }
    else {
      MenuWnd_DrawMoney(piVar1);
    }
    MenuMgr_DrawCar();
  }
  else {
    Gfx_SetFade(2,9,0,0);
    UiMgr_DrawAll(0);
    if ((((g_MenuMgr->flags & 0x200) == 0) && ((g_MenuMgr->flags & 0x8000000) == 0)) &&
       ((-2 < (int)g_MenuMgr->curScreen && (lVar6 = CarDb_IsLoading(), lVar6 == 1)))) {
      MenuMgr_DrawCar();
    }
  }
  return;
}

// 0x00202100  size 0xc
void maybe_Ui_ClearField4(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  return;
}

// 0x00202110  size 0x28
void maybe_Ui_ResetState(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0;
  puVar1[2] = 1;
  *(code **)(param_1 + 0x1c) = MenuScene_Update;
  return;
}

// 0x00202140  size 0x1bc
undefined4 MenuScene_GetEntryScreen(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  
  RaceCtx_GetMode();
  bVar1 = RaceCtx_GetMode();
  if (8 < bVar1) goto switchD_0020217c_default;
                    /* WARNING: Switch is manually overridden */
  switch(bVar1) {
  case 0:
    uVar2 = 0x2d;
    break;
  default:
    bVar1 = RaceCtx_Get_8();
    if (bVar1 < 0x11) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar1) {
      case 0:
        uVar2 = 4;
        break;
      case 1:
        uVar2 = 0x1b;
        break;
      case 2:
        uVar2 = 0x1b;
        break;
      case 3:
        uVar2 = 0x1b;
        break;
      case 4:
        uVar2 = 0x27;
        break;
      case 5:
        uVar2 = 0x1b;
        break;
      case 6:
        uVar2 = 0x13;
        break;
      case 7:
        uVar2 = 5;
        break;
      case 8:
        uVar2 = 7;
        break;
      case 9:
        uVar2 = 0x26;
        break;
      case 10:
        uVar2 = 0x26;
        break;
      case 0xb:
        uVar2 = 0x20;
        break;
      case 0xc:
        uVar2 = 0x20;
        break;
      case 0xd:
        uVar2 = 0x2b;
        break;
      default:
        goto switchD_0020217c_default;
      case 0x10:
        uVar2 = 0x21;
      }
    }
    else {
switchD_0020217c_default:
      uVar2 = 0x16;
    }
    break;
  case 5:
    uVar2 = 0x21;
    break;
  case 6:
    uVar2 = 0x16;
    break;
  case 7:
    bVar1 = RaceCtx_Get_9();
    if (bVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar1) {
      case 0:
        uVar2 = 0xd;
        break;
      case 1:
        uVar2 = 0xd;
        break;
      case 2:
        uVar2 = 0x1b;
        break;
      case 3:
        uVar2 = 0xfffffff9;
        break;
      case 4:
        uVar2 = 0xfffffff9;
        break;
      case 5:
        uVar2 = 0x15;
      }
    }
    else {
      uVar2 = 0x16;
    }
    break;
  case 8:
    lVar3 = RaceCtx_Get_4();
    if (lVar3 == 0) {
      uVar2 = 0x16;
    }
    else {
      lVar3 = RaceCtx_Get_4();
      if (lVar3 == 1) {
        uVar2 = 0x19;
      }
      else {
        uVar2 = 0x2c;
      }
    }
  }
  return uVar2;
}

// 0x00202300  size 0x24
bool MenuText_CarFullNameDefault(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = MenuText_CarFullName(param_1,0xffffffffffffffff);
  return lVar1 != 0x11;
}

// 0x00202330  size 0xcc
bool MenuText_CountCars(int *param_1,int param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *param_1;
  while( true ) {
    *param_1 = (*param_1 + 0x120 + param_2) % 0x120;
    if ((*(int *)(param_4 + *param_1 * 4) == 1) &&
       (lVar2 = MenuText_CarFullName(*param_1,0xffffffffffffffff), param_3 == lVar2)) break;
    iVar3 = iVar3 + 1;
    if (0x11f < iVar3) {
      *param_1 = iVar1;
      return false;
    }
  }
  return *param_1 != iVar1;
}

// 0x00202400  size 0x588
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScene_HandleGarageSelect(int *param_1)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = g_MenuMgr->curScreen;
  if ((((g_MenuMgr->flags & 4) == 0) || ((g_MenuMgr->flags & 0x1000) == 0)) &&
     (*_g_MenuInput = 0, *param_1 != 0)) {
    return;
  }
  if ((g_MenuMgr->flags & 0x400000) == 0) {
    *_g_MenuInput = 1;
  }
  else {
    *_g_MenuInput = 0;
  }
  if (((g_MenuMgr->flags & 2) != 0) || ((g_MenuMgr->flags & 1) != 0)) {
    *_g_MenuInput = 0;
  }
  if (((g_MenuMgr->flags & 0x1c000) != 0) && ((g_MenuMgr->flags & 0x1a0000) == 0)) {
    uVar1 = Profile_Get(0);
    lVar2 = Garage_FindCar(uVar1);
    if (0 < lVar2) {
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
      if (uVar3 == 0x80) {
        Se_PlayMenu(5);
        param_1[2] = g_MenuMgr->prevScreen;
        param_1[3] = uVar5;
        uVar1 = MenuMgr_UpdateTransition(0x24);
        (*(code *)PTR_ScrGarageSelect_Enter_00327660)(uVar1);
        g_MenuMgr->flags = g_MenuMgr->flags | 0x20000;
        return;
      }
      g_MenuMgr->flags = g_MenuMgr->flags & 0xfffe3fff;
      goto LAB_0020263c;
    }
  }
  uVar3 = g_MenuMgr->flags;
  if ((uVar3 & 0x20000) == 0) {
    if ((uVar3 & 0x80000) == 0) {
      if ((uVar3 & 0x100000) != 0) {
        if ((uVar3 & 0x200000) == 0) {
          if (uVar5 == 0x24) {
            uVar3 = param_1[3];
            g_MenuMgr->prevScreen = param_1[2];
            g_MenuMgr->curScreen = uVar3;
            g_MenuMgr->nextScreen = uVar3;
          }
        }
        else {
          g_MenuMgr->flags = uVar3 & 0xffefffff;
          g_MenuMgr->flags = g_MenuMgr->flags & 0xffdfffff;
        }
        *_g_MenuInput = 0;
        g_MenuMgr->flags = g_MenuMgr->flags & 0xfffe3fff;
      }
    }
    else if (uVar5 == 0x24) {
      uVar3 = _g_MenuInput[2];
      if ((_g_MenuInput[4] & uVar3) == 0) {
        uVar4 = 0x100000;
      }
      else {
        uVar4 = 0x80000;
        if ((uVar3 != 0x80000) && (uVar4 = uVar3, *_g_MenuInput != 1)) {
          uVar4 = 0x100000;
        }
      }
      if (uVar4 != 0x80) {
        if ((_g_MenuInput[4] & uVar3) == 0) {
          uVar3 = 0x100000;
        }
        else if (uVar3 == 0x80000) {
          uVar3 = 0x80000;
        }
        else if (*_g_MenuInput != 1) {
          uVar3 = 0x100000;
        }
        if (uVar3 != 0x20) goto LAB_0020263c;
      }
      Se_PlayMenu(6);
      g_MenuMgr->flags = g_MenuMgr->flags | 0x100000;
      g_MenuMgr->flags = g_MenuMgr->flags & 0xfff7ffff;
      return;
    }
  }
  else {
    if ((uVar3 & 0x40000) == 0) {
      return;
    }
    MenuWnd_SetItemVisible(0);
    uVar5 = 0x24;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xfffbffff;
    g_MenuMgr->flags = g_MenuMgr->flags & 0xfffdffff;
    g_MenuMgr->flags = g_MenuMgr->flags | 0x80000;
    MenuMgr_RequestScreen(0x24);
    MenuMgr_Back();
    *_g_MenuInput = 0;
  }
LAB_0020263c:
  if (*param_1 == 1) {
    uVar1 = MenuMgr_UpdateTransition(uVar5);
    (*(code *)(&PTR_maybe_ScrMemCard_Update_003274b4)[uVar5 * 3])(uVar1);
    lVar2 = MenuMgr_Goto();
    if (lVar2 == 1) {
      *param_1 = 2;
    }
  }
  else if (*param_1 == 2) {
    uVar1 = MenuMgr_UpdateTransition(uVar5);
    (*(code *)(&PTR_maybe_ScrMemCard_Exit_003274b8)[uVar5 * 3])(uVar1);
    *param_1 = 0;
    MenuMgr_Back();
    uVar5 = g_MenuMgr->curScreen;
  }
  if (((g_MenuMgr->curScreen == g_MenuMgr->nextScreen) && ((g_MenuMgr->flags & 0xe0) != 0)) &&
     ((g_MenuMgr->flags & 1) == 0)) {
    UiMgr_UpdateAll();
    lVar2 = MenuMgr_PushScreen();
    if (lVar2 == 1) {
      return;
    }
  }
  if ((*param_1 == 0) && (-1 < (int)uVar5)) {
    g_MenuMgr->flags = g_MenuMgr->flags & 0xffffefff;
    uVar1 = MenuMgr_UpdateTransition(uVar5);
    (*(code *)(&PTR_maybe_ScrMemCard_Enter_003274b0)[uVar5 * 3])(uVar1);
    *param_1 = 1;
  }
  return;
}

// 0x00202990  size 0x180
void MenuScene_StartRace(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  MenuMgr_Update();
  lVar3 = MenuMgr_ChangeScreen();
  if (lVar3 == 0) {
    uVar2 = g_MenuMgr->curScreen;
    if ((int)uVar2 < -1) {
      if (uVar2 == 0xfffffffc) {
        RaceCtx_SetMode(8);
        RaceCtx_Set_8(0x13);
        Scene_RequestChange(4);
      }
      else if (uVar2 == 0xfffffffe) {
        Scene_RequestChange(0);
      }
      else if (uVar2 == 0xfffffffd) {
        RaceCtx_SetMode(7);
        RaceCtx_Set_8(0x13);
        Scene_RequestChange(2);
      }
      else if (uVar2 == 0xfffffffb) {
        RaceCtx_SetMode(7);
        RaceCtx_Set_8(0x13);
        Scene_RequestChange(1);
      }
      else if (uVar2 == 0xfffffffa) {
        Scene_RequestChange(6);
      }
    }
    else {
      lVar3 = MenuMgr_Start();
      if (lVar3 != 1) {
        if ((g_MenuMgr->flags & 0x40000000) != 0) {
          g_MenuMgr->flags = g_MenuMgr->flags & 0xbfffffff;
          uVar4 = Profile_Get(0);
          Profile_StartNight(uVar4);
        }
        Subtitle_DrawPortrait();
        MenuScene_HandleGarageSelect(uVar1);
      }
    }
  }
  return;
}

// 0x00202b10  size 0x74
void MenuScene_Exit(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  UiLayout_Free(&g_MenuMgr->field_0x40);
  *puVar1 = 0;
  MenuWnd_FreeSystem();
  MenuWnd_Free();
  MenuMgr_FreeBuffers();
  UiMgr_Free();
  CarDb_Free();
  Subtitle_Free();
  GameDb_Free();
  MenuObj_Shutdown();
  UiRes_FreeFonts();
  return;
}

// 0x00202b90  size 0x384
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScene_Enter(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  undefined **ppuVar10;
  int iVar11;
  int iVar12;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar7 = 0;
  iVar8 = 1;
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  do {
    uVar3 = g_ArcToc->entries[iVar8 + 0x1870].unpackedSize;
    if (uVar3 == 0) {
      uVar4 = g_ArcToc->entries[iVar8 + 0x1870].sectorCount;
    }
    else {
      uVar4 = uVar3 + 0x7ff >> 0xb;
    }
    if (uVar7 < uVar4 << 0xb) {
      if (uVar3 == 0) {
        uVar7 = g_ArcToc->entries[iVar8 + 0x1870].sectorCount;
      }
      else {
        uVar7 = uVar3 + 0x7ff >> 0xb;
      }
      uVar7 = uVar7 << 0xb;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  UiRes_AllocFonts(0x430750,uVar7,0x1f91);
  UiRes_LoadLocalized(0x1870);
  puVar2[4] = 0;
  *puVar2 = 0;
  uVar5 = MenuScene_GetEntryScreen();
  puVar2[1] = uVar5;
  MenuObj_Init(0x430750);
  CarDb_Alloc(0x430750);
  CarDb_Load();
  GameDb_Alloc(0x430750);
  GameDb_Load();
  iVar8 = 0;
  iVar12 = 0;
  ppuVar10 = &PTR_DAT_00328f60;
  iStack_10 = DAT_003294b8;
  iStack_c = DAT_003294bc;
  iStack_8 = DAT_003294c0;
  do {
    psVar9 = (short *)*ppuVar10;
    iVar11 = 0;
    sVar1 = *psVar9;
    while (sVar1 != -2) {
      iVar6 = sVar1 * 0xc;
      uVar7 = g_ArcToc->entries[*(int *)(iVar6 + 0x327930)].unpackedSize;
      if (uVar7 == 0) {
        uVar7 = g_ArcToc->entries[*(int *)(iVar6 + 0x327930)].sectorCount;
      }
      else {
        uVar7 = uVar7 + 0x7ff >> 0xb;
      }
      psVar9 = psVar9 + 1;
      iVar11 = iVar11 + ((*(int *)(iVar6 + 0x327938) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                        uVar7 * 0x800 + *(int *)(iVar6 + 0x327934) * 0x80;
      sVar1 = *psVar9;
    }
    if (iVar8 < iVar11) {
      iVar8 = iVar11;
    }
    iVar12 = iVar12 + 1;
    ppuVar10 = ppuVar10 + 1;
  } while (iVar12 < 0x2e);
  iVar12 = DAT_003294c0 * 0xd;
  uVar7 = g_ArcToc->entries[DAT_003294b8].unpackedSize;
  if (uVar7 == 0) {
    uVar7 = g_ArcToc->entries[DAT_003294b8].sectorCount;
  }
  else {
    uVar7 = uVar7 + 0x7ff >> 0xb;
  }
  iVar11 = DAT_003294bc * 0x80;
  MenuWnd_Alloc(0x430750,1);
  Subtitle_Alloc(0x430750,0x17fd,0);
  MenuWnd_AllocSystem(0x430750);
  UiMgr_Alloc(0x430750,299,
              iVar8 + ((iVar12 + 1) * 0x10 + 0x3fU & 0xffffffc0) + uVar7 * 0x800 + iVar11,&iStack_10
              ,0xc20,0x17fb);
  UiMgr_SetActive(_g_RaceIntroShared1,_g_RaceIntroShared1);
  if (puVar2[1] == -7) {
    puVar2[1] = 0xd;
    MenuMgr_Alloc(0x430750,puVar2[1]);
    g_MenuMgr->flags = g_MenuMgr->flags | 0x40000000;
  }
  else {
    MenuMgr_Alloc(0x430750);
  }
  Subtitle_AllocBuffer(0x430750);
  g_MenuMgr->flags = g_MenuMgr->flags | 8;
  g_MenuMgr->flags = g_MenuMgr->flags | 2;
  UiMgr_UpdateAll();
  *(code **)(param_1 + 0x1c) = MenuScene_StartRace;
  return;
}

// 0x00202f20  size 0x7f8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuCar_ComputeTurntable(int param_1,int param_2,long param_3,long param_4)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfStack_90;
  int iStack_80;
  int iStack_70;
  undefined1 auStack_60 [72];
  float fStack_18;
  float fStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  bVar1 = false;
  iVar11 = (int)param_3;
  if ((param_4 != 0) || (*(char *)(iVar11 + 0xb0) != '\0')) {
    bVar1 = true;
  }
  if (param_3 == 0) {
    iStack_4 = 0;
    iStack_c = 0;
    iStack_8 = 0;
    iStack_10 = 0;
  }
  else {
    MenuCar_GetPartModel(*(undefined2 *)(iVar11 + 0x98),&iStack_4,&iStack_8);
    MenuCar_GetPartModel(*(undefined2 *)(iVar11 + 0x9c),&iStack_c,&iStack_10);
  }
  if (iStack_4 == 0) {
    iVar4 = *(int *)(_g_CarDb + 0x34) + *(int *)(*(int *)(_g_CarDb + 0x5c) + param_2 * 8) * 0x6e4;
  }
  else if (iStack_4 == 1) {
    iVar4 = *(int *)(_g_CarDb + 0x34) + *(int *)(*(int *)(_g_CarDb + 0x5c) + param_2 * 8) * 0x6e4 +
            iStack_8 * 0x54 + 0x54;
  }
  else {
    iVar4 = *(int *)(_g_CarDb + 0x34) + *(int *)(*(int *)(_g_CarDb + 0x5c) + param_2 * 8) * 0x6e4 +
            (iStack_4 + -1) * 0x1a4 + iStack_8 * 0x54 + 0x54;
  }
  piVar2 = (int *)(_g_CarDb + 0x5c);
  iVar10 = param_2 * 8;
  fStack_18 = *(float *)(iVar4 + 0x24);
  if (iStack_c == 0) {
    iVar4 = *(int *)(_g_CarDb + 0x38) + *(int *)(*piVar2 + iVar10) * 0x6e4;
  }
  else if (iStack_c == 1) {
    iVar4 = *(int *)(_g_CarDb + 0x38) + *(int *)(*piVar2 + iVar10) * 0x6e4 + iStack_10 * 0x54 + 0x54
    ;
  }
  else {
    iVar4 = *(int *)(_g_CarDb + 0x38) + *(int *)(*piVar2 + iVar10) * 0x6e4 + (iStack_c + -1) * 0x1a4
            + iStack_10 * 0x54 + 0x54;
  }
  fStack_14 = *(float *)(iVar4 + 0x24);
  fVar17 = 0.0;
  iVar4 = *(int *)(_g_CarDb + 0x2c) + *(int *)(*piVar2 + iVar10) * 0x270;
  fVar20 = *(float *)(iVar4 + 0xcc);
  fVar18 = *(float *)(iVar4 + 0x10c);
  fVar19 = *(float *)(iVar4 + 0xd0);
  fVar16 = *(float *)(iVar4 + 0x110);
  fVar14 = fStack_18 - *(float *)(iVar4 + 0x138);
  fVar15 = fStack_14 - *(float *)(iVar4 + 0x14c);
  if (param_3 != 0) {
    fVar14 = (float)(int)*(char *)(iVar11 + 0xc) * 0.005 + fVar14 + 0.0;
    fVar15 = (float)(int)*(char *)(iVar11 + 0xd) * 0.005 + fVar15 + 0.0;
    fVar20 = (float)(int)*(char *)(iVar11 + 4) * 0.5 + fVar20 + 0.0;
    fVar18 = (float)(int)*(char *)(iVar11 + 5) * 0.5 + fVar18 + 0.0;
    fVar12 = (float)maybe_asinf(((float)(int)*(char *)(iVar11 + 2) / 2.0) /
                                (fStack_18 * 2.0 * 1000.0),*(char *)(iVar11 + 2),
                                *(char *)(iVar11 + 5));
    fVar19 = fVar19 + (fVar12 * 180.0) / 3.1415927;
    fVar12 = (float)maybe_asinf(((float)(int)*(char *)(iVar11 + 3) / 2.0) /
                                (fStack_14 * 2.0 * 1000.0));
    fVar16 = fVar16 + (fVar12 * 180.0) / 3.1415927;
  }
  fVar18 = fVar18 * 0.017453292;
  fVar16 = fVar16 * 0.017453292;
  maybe_Vu0_UnitMatrix(param_1 + 0x10);
  uVar13 = atan2f(fVar14 - fVar15,*(undefined4 *)(iVar4 + 8));
  maybe_Vu0_RotMatrixX(uVar13,param_1 + 0x10,param_1 + 0x10);
  *(float *)(param_1 + 0x44) = (fVar14 + fVar15) / 2.0;
  sceVu0InversMatrix(auStack_60,param_1 + 0x10);
  if (bVar1) {
    uVar3 = 0;
    piVar2 = &DAT_003295d0;
    do {
      if (param_2 == *piVar2) {
        fVar17 = *(float *)(&DAT_003295d4 + uVar3 * 8) / 2.0;
        break;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < 3);
  }
  uVar3 = 0;
  iVar11 = 0;
  fVar12 = -(fVar20 * 0.017453292);
  fVar14 = -fVar18;
  *(undefined4 *)(param_1 + 0x2e8) = 1;
  fVar15 = -fVar16;
  *(undefined4 *)(param_1 + 0x388) = 1;
  *(undefined4 *)(param_1 + 0x390) = 1;
  pfStack_90 = &fStack_18;
  iStack_80 = param_1;
  iStack_70 = param_1;
  do {
    uVar9 = 0;
    iVar10 = iStack_70;
    iVar5 = iStack_80;
    do {
      iVar7 = iVar5 + 0x1a0;
      pfVar8 = (float *)(iVar10 + 0x60);
      iVar6 = iVar5 + 0xa0;
      maybe_Vu0_UnitMatrix(iVar7);
      if (uVar9 == 1) {
        maybe_Vu0_RotMatrixY(0x40490fdb,iVar7,iVar7);
      }
      maybe_Vu0_UnitMatrix(iVar6);
      iVar7 = (1 - uVar9) + iVar11;
      if (iVar7 == 3) {
        maybe_Vu0_RotMatrixZ(fVar14,iVar6,iVar6);
        maybe_Vu0_RotMatrixY(fVar15,iVar6,iVar6);
      }
      else if (iVar7 == 2) {
        maybe_Vu0_RotMatrixZ(fVar18,iVar6,iVar6);
        maybe_Vu0_RotMatrixY(fVar16,iVar6,iVar6);
      }
      else if (iVar7 == 1) {
        maybe_Vu0_RotMatrixZ(fVar12,iVar6,iVar6);
        maybe_Vu0_RotMatrixY(-(fVar19 * 0.017453292),iVar6,iVar6);
      }
      else if (iVar7 == 0) {
        maybe_Vu0_RotMatrixZ(fVar20 * 0.017453292,iVar6,iVar6);
        maybe_Vu0_RotMatrixY(fVar19 * 0.017453292,iVar6,iVar6);
      }
      if (uVar3 == 0) {
        *pfVar8 = *(float *)(iVar4 + 8) / 2.0;
        if (uVar9 == 0) {
          *(float *)(iVar10 + 0x68) = -(*(float *)(iVar4 + 0xc) / 2.0 + fVar17);
        }
        else {
          *(float *)(iVar10 + 0x68) = *(float *)(iVar4 + 0xc) / 2.0 + fVar17;
        }
      }
      else {
        *pfVar8 = -(*(float *)(iVar4 + 8) / 2.0);
        if (uVar9 == 0) {
          *(float *)(iVar10 + 0x68) = -(*(float *)(iVar4 + 0x10) / 2.0 + fVar17);
        }
        else {
          *(float *)(iVar10 + 0x68) = *(float *)(iVar4 + 0x10) / 2.0 + fVar17;
        }
      }
      *(float *)(iVar10 + 100) = *pfStack_90;
      *(undefined4 *)(iVar10 + 0x6c) = 0x3f800000;
      sceVu0TransMatrix(iVar6,iVar6,pfVar8);
      sceVu0MulMatrix(iVar6,auStack_60,iVar6);
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iVar10 + 100) = 0;
      iVar10 = iVar10 + 0x10;
      iVar5 = iVar5 + 0x40;
    } while (uVar9 < 2);
    uVar3 = uVar3 + 1;
    iStack_70 = iStack_70 + 0x20;
    iStack_80 = iStack_80 + 0x80;
    pfStack_90 = pfStack_90 + 1;
    iVar11 = iVar11 + 2;
  } while (uVar3 < 2);
  return;
}

// 0x00203720  size 0x2cc
void MenuCar_BuildRivalPreview
               (undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uStack_570;
  undefined2 uStack_56e;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined1 auStack_55c [24];
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined2 auStack_520 [16];
  undefined2 auStack_500 [42];
  undefined1 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 auStack_4a0 [96];
  undefined2 uStack_320;
  undefined2 uStack_31e;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined1 auStack_30c [24];
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined2 auStack_2d0 [16];
  undefined2 auStack_2b0 [42];
  undefined1 uStack_25c;
  undefined4 uStack_258;
  undefined1 auStack_250 [12];
  undefined1 auStack_244 [8];
  undefined1 auStack_23c [188];
  undefined4 auStack_180 [96];
  
  Mem_Set16(param_1,0,8);
  Mem_Set16(param_2,0,0xb8);
  if (param_3 == '\x03') {
    uVar1 = Profile_Get(param_4);
    uVar1 = Garage_GetPartSlot(uVar1,param_5);
    CarRec_InstallPart(&uStack_570,uVar1,0);
    puVar7 = auStack_55c;
    iVar2 = 0x17;
    uStack_320 = uStack_570;
    uStack_310 = uStack_560;
    uStack_31e = uStack_56e;
    uStack_31c = uStack_56c;
    uStack_318 = uStack_568;
    uStack_314 = uStack_564;
    puVar4 = auStack_30c;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    puVar9 = auStack_520;
    puVar8 = auStack_2d0;
    iVar2 = 8;
    uStack_2e8 = uStack_538;
    uStack_2e4 = uStack_534;
    uStack_2e0 = uStack_530;
    uStack_2f4 = uStack_544;
    uStack_2f0 = uStack_540;
    uStack_2ec = uStack_53c;
    uStack_2dc = uStack_52c;
    uStack_2d8 = uStack_528;
    uStack_2d4 = uStack_524;
    do {
      iVar2 = iVar2 + -1;
      uVar5 = puVar9[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 2;
    } while (0 < iVar2);
    puVar9 = auStack_500;
    puVar8 = auStack_2b0;
    iVar2 = 0x15;
    do {
      iVar2 = iVar2 + -1;
      uVar5 = puVar9[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 2;
    } while (0 < iVar2);
    uStack_25c = uStack_4ac;
    uStack_258 = uStack_4a8;
    maybe_Mem_CopyQwords(param_1,&uStack_320,8);
    maybe_Mem_CopyQwords(param_2,auStack_30c,0xb8);
  }
  else {
    uVar5 = (undefined2)param_5;
    if (param_3 == '\x02') {
      RivalDb_Copy(auStack_4a0,uVar5);
      puVar6 = auStack_4a0;
      puVar3 = auStack_180;
      iVar2 = 0x5f;
      do {
        iVar2 = iVar2 + -1;
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (0 < iVar2);
      Opponent_BuildEntry(auStack_180,0,auStack_250,0xffffffffffffffff,0);
      maybe_Mem_CopyQwords(param_1,auStack_244,8);
      maybe_Mem_CopyQwords(param_2,auStack_23c,0xb8);
    }
    else if (param_3 == '\x01') {
      uVar1 = Profile_Get(param_4);
      uVar1 = Profile_GetCarRecord(uVar1,param_5);
      maybe_Mem_CopyQwords(param_1,uVar1,8);
      maybe_Mem_CopyQwords(param_2,(int)uVar1 + 0x14,0xb8);
    }
    else if (param_3 == '\0') {
      CarRec_Clear(param_1);
      *(undefined2 *)param_1 = uVar5;
      CarRec_CountParts(param_2,uVar5);
    }
  }
  return;
}

// 0x002039f0  size 0x78
void MenuCar_GetSpecialPaint(long param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0xad) {
    iVar5 = 0;
  }
  else {
    iVar2 = (int)(short)param_1;
    iVar4 = iVar2 + -0xae;
    iVar5 = 0;
    pcVar3 = &DAT_00329422 + iVar2;
    cVar1 = *pcVar3;
    param_2 = (char)(&DAT_00329422)[iVar2] + 0x120;
    for (; (iVar4 != 0 && (cVar1 == pcVar3[-1])); pcVar3 = pcVar3 + -1) {
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    }
  }
  *param_3 = param_2;
  *param_4 = iVar5;
  return;
}

// 0x00203a70  size 0xf4
void MenuCar_GetPartModel(short param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 unaff_s1_lo;
  
  iVar1 = PartDb_Get(param_1);
  if ((param_1 < 0x8d) || (0x92 < param_1)) {
    if ((param_1 < 0x93) || (0x97 < param_1)) {
      if ((param_1 < 0x98) || (0x9c < param_1)) {
        if ((0x9c < param_1) && (param_1 < 0xa2)) {
          unaff_s1_lo = 4;
          iVar1 = iVar1 + -1;
        }
      }
      else {
        unaff_s1_lo = 3;
        iVar1 = iVar1 + -1;
      }
    }
    else {
      unaff_s1_lo = 2;
      iVar1 = iVar1 + -1;
    }
  }
  else if (iVar1 == 0) {
    unaff_s1_lo = 0;
    iVar1 = 0;
  }
  else {
    unaff_s1_lo = 1;
    iVar1 = iVar1 + -1;
  }
  *param_2 = unaff_s1_lo;
  *param_3 = iVar1;
  return;
}

// 0x00203b70  size 0x358
void MenuCar_ApplyPartPreview(int param_1,int param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined2 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((param_5 != 0) || (*(char *)(param_4 + 0xb0) != '\0')) {
    param_2 = param_2 + 1;
  }
  CourseStream_InitBlock(param_1);
  *(undefined1 *)(param_1 + 8) = 0;
  iVar10 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar9 = param_1 + 0x10;
  do {
    uVar4 = CarPreview_ApplyDecal(iVar9 + 0x20,param_2,param_3,iVar10);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 8;
  } while (iVar10 < 6);
  *(int *)(param_1 + 0xc) = param_2;
  uVar4 = CarPreview_SetupWheelsAlt(param_1 + 0x74,0,param_2,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  uVar4 = CarPreview_SetupWheelsAlt(param_1 + 0xbc,1,param_2,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  uVar4 = CarPreview_SetupWheels(param_1 + 0x98,0,param_2,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  uVar4 = CarPreview_SetupWheels(param_1 + 0xe0,1,param_2,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  uVar4 = CarPreview_LoadBody(param_1 + 100,param_2,0);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  uVar2 = CarRec_GetOptionData(param_4,0xc);
  *(undefined1 *)(param_1 + 8) = uVar2;
  lVar5 = CarRec_GetOptionData(param_4,0x11);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  uVar2 = CarRec_GetOptionData(param_4,2);
  *(undefined1 *)(param_1 + 0x1c) = uVar2;
  uVar2 = CarRec_GetOptionData(param_4,0x12);
  *(undefined1 *)(param_1 + 0x1d) = uVar2;
  uVar2 = CarRec_GetOptionData(param_4,0x13);
  *(undefined1 *)(param_1 + 0x1e) = uVar2;
  uVar2 = CarRec_GetOptionData(param_4,0x14);
  *(undefined1 *)(param_1 + 0x1f) = uVar2;
  iVar10 = 0;
  iVar9 = param_4;
  do {
    if (*(short *)(iVar9 + 0x3c) < 0) {
      *(undefined1 *)(param_1 + iVar10 + 0x20) = 0xff;
    }
    else {
      *(char *)(param_1 + iVar10 + 0x20) = (char)*(short *)(iVar9 + 0x3c);
    }
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 2;
  } while (iVar10 < 0x10);
  iVar13 = 0;
  iVar9 = param_4;
  iVar10 = param_1;
  do {
    MenuCar_GetPartModel(*(undefined2 *)(iVar9 + 0x98),&uStack_4,&uStack_8);
    if (*(short *)(iVar9 + 0x90) == 0xad) {
      iVar12 = 0;
      iVar14 = param_2;
    }
    else {
      iVar6 = (int)*(short *)(iVar9 + 0x90);
      iVar8 = iVar6 + -0xae;
      pcVar7 = &DAT_00329422 + iVar6;
      iVar12 = 0;
      cVar3 = *pcVar7;
      for (; (iVar14 = (char)(&DAT_00329422)[iVar6] + 0x120, iVar8 != 0 && (cVar3 == pcVar7[-1]));
          pcVar7 = pcVar7 + -1) {
        iVar8 = iVar8 + -1;
        iVar12 = iVar12 + 1;
      }
    }
    uVar4 = CarPreview_SetupWheelsAlt(iVar10 + 0x74,iVar13,param_2,iVar14,uStack_4,uStack_8,iVar12);
    *(undefined4 *)(iVar10 + 0x70) = uVar4;
    uVar4 = CarPreview_SetupWheels(iVar10 + 0x98,iVar13,param_2,iVar14,uStack_4,uStack_8,iVar12);
    *(undefined4 *)(iVar10 + 0x94) = uVar4;
    iVar13 = iVar13 + 1;
    iVar9 = iVar9 + 4;
    iVar10 = iVar10 + 0x48;
  } while (iVar13 < 2);
  uVar1 = *(undefined2 *)(param_4 + 0x80);
  uVar11 = 0;
  cVar3 = Maker_GetInfo(uVar1);
  if ((cVar3 == '\t') && (lVar5 = PartDb_Get(uVar1), lVar5 != 0)) {
    uVar11 = PartDb_Get(uVar1);
  }
  CarPreview_LoadBody(param_1 + 100,param_2,uVar11);
  return;
}

// 0x00203ed0  size 0x140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CarPreview_LoadBody(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int aiStack_8 [2];
  
  aiStack_8[0] = *(int *)(_g_CarDb + 0x30) +
                 *(int *)(*(int *)(_g_CarDb + 0x5c) + param_2 * 8) * 0xc0 + param_3 * 0x10;
  aiStack_8[1] = aiStack_8[0] + 0x60;
  CarAsset_Clear();
  iVar3 = 0;
  piVar2 = aiStack_8;
  do {
    puVar1 = (undefined4 *)*piVar2;
    *param_1 = (char)*puVar1;
    param_1[1] = (char)puVar1[2];
    if (*(char *)(puVar1 + 1) == '\0') {
      param_1[2] = 2;
    }
    else {
      param_1[2] = *(char *)(puVar1 + 1) + -1;
    }
    if (*(char *)(*piVar2 + 0xc) == '\0') {
      param_1[3] = 5;
    }
    else {
      param_1[3] = *(char *)(*piVar2 + 0xc) + -1;
      if (*(int *)(&DAT_003295b0 + (uint)(byte)param_1[3] * 4) < param_3) {
        param_1[3] = (char)*(undefined4 *)(&DAT_00329590 + param_3 * 4);
      }
    }
    if (*(char *)(*piVar2 + 0xd) == '\0') {
      param_1[4] = 2;
    }
    else {
      param_1[4] = *(char *)(*piVar2 + 0xd) + -1;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 5;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 2);
  return 0;
}

