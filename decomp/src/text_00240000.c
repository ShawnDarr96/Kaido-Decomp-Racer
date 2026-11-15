// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00240000 - 0x00244000
#include "ghidra_types.h"

// 0x00240130  size 0x58c
void MenuScr_Draw_ButtonConfig_0130(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  bVar2 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar2 = false;
  }
  iVar6 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar6 != 0) {
    uVar8 = UiRes_GetLayoutData(0x285);
    iVar6 = UiMgr_FindLayout(0x100);
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
    pUVar1[iVar6].layout.unk_31c = uVar8;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x286);
    iVar6 = UiMgr_FindLayout(0x100);
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
    *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar7;
    pUVar1[iVar6].layout.animState = 1;
    if (*(int *)(param_1 + 0x5b8) != 0) {
      uVar8 = UiRes_GetLayoutData(0x288);
      iVar6 = UiMgr_FindLayout(0xf9);
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
      pUVar1[iVar6].layout.unk_31c = uVar8;
      pUVar1[iVar6].layout.unk_318 = 1;
    }
  }
  if (*(int *)(param_1 + 0x5c8) != 0) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x100,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x100,1);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xf9,0);
    if (!bVar5 && (!bVar3 && !bVar4)) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar2 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar6 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar6 != 0) {
      uVar7 = UiRes_GetLayoutData(0x287);
      iVar6 = UiMgr_FindLayout(0x100);
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
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x344 = uVar7;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x340 = 1;
      uVar7 = UiRes_GetLayoutData(0x2b5);
      iVar6 = UiMgr_FindLayout(0x100);
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
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x358 = uVar7;
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
      if (*(int *)(param_1 + 0x5c0) != 0) {
        uVar8 = UiRes_GetLayoutData(0x289);
        iVar6 = UiMgr_FindLayout(0xf9);
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
        pUVar1[iVar6].layout.unk_31c = uVar8;
        pUVar1[iVar6].layout.unk_318 = 1;
      }
      Menu_ClearSlot(0);
    }
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0x100,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0x100,3);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xf9,0);
    if (!bVar5 && (!bVar3 && !bVar4)) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar2 = true;
    }
  }
  iVar6 = UiMgr_FindLayout(0x100);
  UiElem_SetPropInt(&g_UiMgr->slots[iVar6].layout,0x1f,0x16,
                    *(int *)(&DAT_0032be10 + *(int *)(param_1 + 0x18) * 4));
  MenuWnd_DrawText(0xf9,0x2d,0x1ed3);
  MenuWnd_DrawText(0x100,0x22,0x1ee3);
  MenuWnd_DrawText(0x100,0x23,0x1ee4);
  MenuWnd_DrawText(0xf8,0x1b,*(undefined4 *)(&DAT_0036ead0 + *(int *)(param_1 + 0x18) * 4));
  if (!bVar2) {
    MenuWnd_SetItemState(0x100,*(undefined4 *)(&DAT_0032be00 + *(int *)(param_1 + 0x18) * 4),1,0);
  }
  iVar6 = UiMgr_FindLayout(0xf9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0x100);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002406c0  size 0x654
void MenuScr_Draw_SoundConfig(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  UiLayout *pUVar11;
  
  bVar2 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar2 = false;
  }
  iVar7 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x14);
  }
  else {
    uVar8 = UiRes_GetLayoutData(0x277);
    iVar7 = UiMgr_FindLayout(0xfa);
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
    pUVar1[iVar7].layout.unk_31c = uVar8;
    pUVar1[iVar7].layout.unk_318 = 1;
    uVar8 = UiRes_GetLayoutData(0x28a);
    iVar7 = UiMgr_FindLayout(0x101);
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
    pUVar1[iVar7].layout.unk_31c = uVar8;
    pUVar1[iVar7].layout.unk_318 = 1;
    *(undefined4 *)(param_1 + 0x6c) = 0x101;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    uVar3 = DAT_0032bde4;
    uVar9 = DAT_0032bde0;
    *(undefined4 *)(param_1 + 0x78) = 0x101;
    *(undefined4 *)(param_1 + 0x7c) = uVar9;
    uVar4 = DAT_0032bdec;
    uVar9 = DAT_0032bde8;
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0x101;
    *(undefined4 *)(param_1 + 0x90) = uVar9;
    *(undefined4 *)(param_1 + 0x94) = uVar4;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    maybe_MenuOpt_Init(param_1 + 0x140,0x101,0x32bdf0,0x32bdf8);
    iVar7 = *(int *)(param_1 + 0x14);
  }
  maybe_MenuOpt_SetSelected(param_1 + 0x140,*(undefined4 *)(param_1 + 0x5c),iVar7 == 2);
  if (*(int *)(param_1 + 0x5c8) != 0) {
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xfa,0);
    bVar6 = UiLayout_UpdateAnimById((UiLayout *)0x101,0);
    if (!bVar5 && !bVar6) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar2 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar7 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar7 != 0) {
      uVar9 = UiRes_GetLayoutData(0x278);
      iVar7 = UiMgr_FindLayout(0xfa);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar9;
      pUVar1[iVar7].layout.animState = 1;
      uVar9 = UiRes_GetLayoutData(0x28b);
      iVar7 = UiMgr_FindLayout(0x101);
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
      *(undefined4 *)&pUVar1[iVar7].layout.field_0x330 = uVar9;
      pUVar1[iVar7].layout.animState = 1;
    }
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xfa,1);
    bVar6 = UiLayout_UpdateAnimById((UiLayout *)0x101,1);
    if (!bVar5 && !bVar6) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar2 = true;
    }
  }
  MenuWnd_DrawText(0xfa,1,0x1ed2);
  MenuWnd_DrawText(0x101,0x2c,0x1ee1);
  MenuWnd_DrawText(0x101,0x2d,0x1ee2);
  MenuWnd_DrawText(0x101,0x2e,0x1ef9);
  MenuWnd_DrawText(0x101,0x2f,0x1ed0);
  MenuWnd_DrawLabel(0x101,0x30,0x3a,*(undefined4 *)(param_1 + 0x54));
  MenuWnd_DrawLabel(0x101,0x31,0x3a,*(undefined4 *)(param_1 + 0x58));
  MenuWnd_DrawText(0x101,0x32,0x1efb);
  MenuWnd_DrawText(0x101,0x33,0x1efa);
  iVar7 = UiMgr_FindLayout(0x101);
  pUVar11 = &g_UiMgr->slots[iVar7].layout;
  UiElem_SetPropInt(pUVar11,0xe,9,*(int *)(param_1 + 0x54));
  UiElem_SetPropInt(pUVar11,0x15,9,*(int *)(param_1 + 0x58));
  UiElem_SetPropInt(pUVar11,0xd,9,*(int *)(param_1 + 0x54));
  UiElem_SetPropInt(pUVar11,0x14,9,*(int *)(param_1 + 0x58));
  iVar7 = 7;
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar7 = 6;
  }
  UiElem_SetPropInt(pUVar11,0x2a,0x16,iVar7);
  iVar7 = 7;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar7 = 6;
  }
  UiElem_SetPropInt(pUVar11,0x2b,0x16,iVar7);
  MenuWnd_DrawText(0xf8,0x1b,*(undefined4 *)(&DAT_0032bdd0 + *(int *)(param_1 + 0x14) * 4));
  if (bVar2) {
    maybe_MenuOpt_SetSelected(param_1 + 0x140,*(undefined4 *)(param_1 + 0x5c),0);
    iVar7 = *(int *)(param_1 + 0x14);
  }
  else {
    maybe_MenuOpt_SetValue
              (param_1 + 0x6c,*(undefined4 *)(&DAT_0032bdc0 + *(int *)(param_1 + 0x14) * 4));
    iVar7 = *(int *)(param_1 + 0x14);
  }
  if (iVar7 == 0 && !bVar2) {
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar10 = 3;
    }
    else if (*(int *)(param_1 + 0x54) == 0xf) {
      uVar10 = 2;
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  maybe_MenuOpt_SetItemActive(param_1 + 0x78,uVar10);
  if (*(int *)(param_1 + 0x14) == 1 && !bVar2) {
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar10 = 3;
    }
    else if (*(int *)(param_1 + 0x58) == 0xf) {
      uVar10 = 2;
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  maybe_MenuOpt_SetItemActive(param_1 + 0x8c,uVar10);
  iVar7 = UiMgr_FindLayout(0xfa);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  iVar7 = UiMgr_FindLayout(0x101);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar7].layout);
  return;
}

// 0x00240d20  size 0x6c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_GameConfig(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  bVar2 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar2 = false;
  }
  iVar6 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar7 = UiRes_GetLayoutData(0x277);
    iVar6 = UiMgr_FindLayout(0xfa);
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
    pUVar1[iVar6].layout.unk_31c = uVar7;
    pUVar1[iVar6].layout.unk_318 = 1;
    uVar7 = UiRes_GetLayoutData(0x27e);
    iVar6 = UiMgr_FindLayout(0xfb);
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
    pUVar1[iVar6].layout.unk_31c = uVar7;
    pUVar1[iVar6].layout.unk_318 = 1;
    *(undefined4 *)(param_1 + 0x6c) = 0xfb;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    uVar3 = _s_MenuScr_Draw_GameConfig_2;
    uVar8 = _s_MenuScr_Draw_GameConfig_1;
    *(undefined4 *)(param_1 + 0x78) = 0xfb;
    *(undefined4 *)(param_1 + 0x7c) = uVar8;
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    maybe_MenuOpt_Init(param_1 + 0x140,0xfb,0x32bd70,0x32bd78);
    maybe_MenuOpt_Init(param_1 + 0x160,0xfb,0x32bd80,0x32bd88);
    maybe_MenuOpt_Init(param_1 + 0x180,0xfb,0x32bd90,0x32bd98);
    maybe_MenuOpt_Init(param_1 + 0x1a0,0xfb,0x32bda0,0x32bda8);
    maybe_MenuOpt_Init(param_1 + 0x1c0,0xfb,0x32bdb0,0x32bdb8);
    iVar6 = *(int *)(param_1 + 0x10);
  }
  maybe_MenuOpt_SetSelected(param_1 + 0x140,*(undefined4 *)(param_1 + 0x3c),iVar6 == 1);
  maybe_MenuOpt_SetSelected
            (param_1 + 0x160,*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x10) == 2);
  maybe_MenuOpt_SetSelected
            (param_1 + 0x180,*(undefined4 *)(param_1 + 0x44),*(int *)(param_1 + 0x10) == 3);
  maybe_MenuOpt_SetSelected
            (param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x48),*(int *)(param_1 + 0x10) == 4);
  maybe_MenuOpt_SetSelected
            (param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x10) == 5);
  if (*(int *)(param_1 + 0x5c8) != 0) {
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xfa,0);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xfb,0);
    if (!bVar4 && !bVar5) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar2 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar6 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar6 != 0) {
      uVar8 = UiRes_GetLayoutData(0x278);
      iVar6 = UiMgr_FindLayout(0xfa);
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
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar8;
      pUVar1[iVar6].layout.animState = 1;
      uVar8 = UiRes_GetLayoutData(0x27f);
      iVar6 = UiMgr_FindLayout(0xfb);
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
      *(undefined4 *)&pUVar1[iVar6].layout.field_0x330 = uVar8;
      pUVar1[iVar6].layout.animState = 1;
    }
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xfa,1);
    bVar5 = UiLayout_UpdateAnimById((UiLayout *)0xfb,1);
    if (!bVar4 && !bVar5) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar2 = true;
    }
  }
  MenuWnd_DrawText(0xfa,1,0x1ed1);
  MenuWnd_DrawText(0xfb,0x3b,0x1ed8);
  MenuWnd_DrawText(0xfb,0x3c,0x1ed9);
  MenuWnd_DrawText(0xfb,0x3d,0x1eda);
  MenuWnd_DrawText(0xfb,0x3e,0x1edb);
  MenuWnd_DrawText(0xfb,0x3f,0x1edc);
  MenuWnd_DrawText(0xfb,0x40,0x1edd);
  MenuWnd_DrawText(0xfb,0x41,0x1ed0);
  MenuWnd_DrawText(0xfb,0x42,0x32);
  MenuWnd_DrawText(0xfb,0x43,0x33);
  MenuWnd_DrawText(0xfb,0x44,0x32);
  MenuWnd_DrawText(0xfb,0x48,0x33);
  MenuWnd_DrawText(0xfb,0x45,0x32);
  MenuWnd_DrawText(0xfb,0x49,0x33);
  MenuWnd_DrawText(0xfb,0x46,0x32);
  MenuWnd_DrawText(0xfb,0x4a,0x33);
  MenuWnd_DrawText(0xfb,0x47,0x1ef8);
  MenuWnd_DrawText(0xfb,0x4b,0x1ef7);
  MenuWnd_DrawText(0xfb,0x4c,*(undefined4 *)(&DAT_0032bd20 + *(int *)(param_1 + 0x38) * 4));
  MenuWnd_DrawText(0xf8,0x1b,*(undefined4 *)(&DAT_0032bd50 + *(int *)(param_1 + 0x10) * 4));
  if (bVar2) {
    maybe_MenuOpt_SetSelected(param_1 + 0x140,*(undefined4 *)(param_1 + 0x3c),0);
    maybe_MenuOpt_SetSelected(param_1 + 0x160,*(undefined4 *)(param_1 + 0x40),0);
    maybe_MenuOpt_SetSelected(param_1 + 0x180,*(undefined4 *)(param_1 + 0x44),0);
    maybe_MenuOpt_SetSelected(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x48),0);
    maybe_MenuOpt_SetSelected(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x4c),0);
    iVar6 = *(int *)(param_1 + 0x10);
  }
  else {
    maybe_MenuOpt_SetValue
              (param_1 + 0x6c,*(undefined4 *)(&DAT_0032bd30 + *(int *)(param_1 + 0x10) * 4));
    iVar6 = *(int *)(param_1 + 0x10);
  }
  if ((iVar6 != 0) || (bVar2)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  maybe_MenuOpt_SetItemActive(param_1 + 0x78,uVar9);
  iVar6 = UiMgr_FindLayout(0xfa);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  iVar6 = UiMgr_FindLayout(0xfb);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002413f0  size 0x4e4
void MenuScr_Draw_GameConfig_13f0(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  bVar2 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar2 = false;
  }
  iVar6 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar6 != 0) {
    uVar7 = UiRes_GetLayoutData(0x292);
    iVar6 = UiMgr_FindLayout(0xf9);
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
    pUVar1[iVar6].layout.unk_31c = uVar7;
    pUVar1[iVar6].layout.unk_318 = 1;
    if (*(int *)(param_1 + 0x5b8) != 3) {
      uVar5 = UiRes_GetLayoutData(0x288);
      iVar6 = UiMgr_FindLayout(0xf9);
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
    }
  }
  if (*(int *)(param_1 + 0x5c8) != 0) {
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xf9,0);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xf9,1);
    if (!bVar3 && !bVar4) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar2 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar6 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar6 != 0) {
      if (*(int *)(param_1 + 0x5c0) == -1) {
        MenuWnd_SetItemVisible(0);
      }
      else if (*(int *)(param_1 + 0xc) == 2) {
        uVar5 = UiRes_GetLayoutData(0x294);
        iVar6 = UiMgr_FindLayout(0xf9);
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
      }
      else {
        uVar5 = UiRes_GetLayoutData(0x293);
        iVar6 = UiMgr_FindLayout(0xf9);
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
        uVar5 = UiRes_GetLayoutData(0x289);
        iVar6 = UiMgr_FindLayout(0xf9);
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
        *(undefined4 *)&pUVar1[iVar6].layout.field_0x354 = 1;
      }
    }
    bVar3 = UiLayout_UpdateAnimById((UiLayout *)0xf9,2);
    bVar4 = UiLayout_UpdateAnimById((UiLayout *)0xf9,3);
    if (!bVar3 && !bVar4) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar2 = true;
    }
  }
  MenuWnd_DrawText(0xf9,0x2b,0x1ed1);
  MenuWnd_DrawText(0xf9,0x2c,0x1ed2);
  MenuWnd_DrawText(0xf9,0x2d,0x1ed3);
  MenuWnd_DrawText(0xf9,0x2e,0x1ed4);
  MenuWnd_DrawText(0xf9,0x2f,0x1ed5);
  MenuWnd_DrawText(0xf9,0x30,0x1ed6);
  MenuWnd_DrawText(0xf9,0x31,0x1ed7);
  MenuWnd_DrawText(0xf8,0x1b,*(undefined4 *)(&DAT_0032bd00 + *(int *)(param_1 + 0xc) * 4));
  if ((!bVar2) && ((g_MenuMgr->flags & 1) == 0)) {
    MenuWnd_SetItemState(0xf9,*(undefined4 *)(&DAT_0032bce0 + *(int *)(param_1 + 0xc) * 4),1,0);
  }
  iVar6 = UiMgr_FindLayout(0xf9);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar6].layout);
  return;
}

// 0x002418e0  size 0x14
/* menu page 26 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage26_Exit(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 4;
  return;
}

// 0x00241900  size 0xf4
/* menu page 26 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage26_Update(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((g_MenuMgr->flags & 2) == 0) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x1000;
  }
  (*(code *)(&PTR_MenuScr_Draw_GameConfig_13f0_0032b820)[*(int *)(param_1 + 0x5bc)])();
  uVar1 = g_MenuMgr->flags;
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    g_MenuMgr->flags = uVar1 | 0x800;
  }
  UiLayout_UpdateAnimById((UiLayout *)0xf7,0);
  iVar2 = UiMgr_FindLayout(0xf7);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  iVar2 = UiMgr_FindLayout(0xf8);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar2].layout);
  return;
}

// 0x00241a00  size 0xac
/* menu page 26 (table 0x3276e0, dispatched by 0x201380) */

void MenuPage26_Enter(void)

{
  UiLayoutSlot *pUVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = UiRes_GetLayoutData(0x290);
  iVar3 = UiMgr_FindLayout(0xf7);
  pUVar1 = g_UiMgr->slots;
  if (pUVar1[iVar3].layout.unk_31c == 0) {
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
  }
  Menu_ClearSlot(0);
  return;
}

// 0x00241ab0  size 0x364
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ButtonConfig_DrawList(uint *param_1,long param_2)

{
  int iVar1;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  undefined8 extraout_a3;
  undefined8 extraout_a3_00;
  undefined8 uVar2;
  undefined8 extraout_a3_01;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  UiLayout *pUVar8;
  
  iVar1 = UiMgr_FindLayout(0xfd);
  iVar6 = 0;
  puVar7 = (undefined4 *)(param_1[1] * 200 + 0x32bb50);
  pUVar8 = &g_UiMgr->slots[iVar1].layout;
  puVar5 = param_1;
  puVar4 = puVar7;
  do {
    MenuWnd_DrawText(0xfd,*puVar4,*(undefined4 *)(&DAT_0032bb30 + puVar5[0xf] * 4));
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 5;
  } while (iVar6 < 9);
  uVar3 = _g_MenuInput[param_1[1] + 2];
  if ((_g_MenuInput[param_1[1] + 4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 0x80000) {
    if (param_2 == 0) {
      iVar1 = 0;
      uVar2 = extraout_a3;
      do {
        UiElem_SetPropFloat(pUVar8,(long)(int)puVar7[3],8,(byte)uVar2);
        UiElem_SetPropFloat(pUVar8,(long)(int)puVar7[4],8,extraout_a3_lo_02);
        UiElem_SetPropFloat(pUVar8,(long)(int)puVar7[1],8,extraout_a3_lo_03);
        iVar1 = iVar1 + 1;
        puVar7 = puVar7 + 5;
        uVar2 = extraout_a3_00;
      } while (iVar1 < 9);
    }
    else {
      iVar1 = 0;
      do {
        UiElem_GetPropPtr(pUVar8,puVar7[1],8);
        UiElem_SetPropFloat(pUVar8,(long)(int)puVar7[3],8,extraout_a3_lo);
        UiElem_SetPropFloat(pUVar8,(long)(int)puVar7[2],8,extraout_a3_lo_00);
        UiElem_SetPropFloat(pUVar8,(long)(int)puVar7[4],8,extraout_a3_lo_01);
        iVar1 = iVar1 + 1;
        puVar7 = puVar7 + 5;
      } while (iVar1 < 9);
    }
    uVar3 = 0;
    do {
      maybe_MenuOpt_SetItemActive(param_1 + 0x4a,0);
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 5;
    } while (uVar3 < 9);
  }
  else if (param_2 == 0) {
    iVar1 = 0;
    uVar2 = extraout_a3;
    puVar5 = param_1;
    puVar4 = puVar7;
    do {
      if ((param_1[0xe] & 1 << (puVar5[0xf] & 0x1f)) == 0) {
        iVar6 = puVar4[3];
      }
      else {
        iVar6 = puVar4[3];
      }
      UiElem_SetPropFloat(pUVar8,(long)iVar6,8,(byte)uVar2);
      UiElem_SetPropFloat(pUVar8,(long)(int)puVar4[4],8,extraout_a3_lo_04);
      UiElem_SetPropFloat(pUVar8,(long)(int)puVar4[1],8,extraout_a3_lo_05);
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 5;
      uVar2 = extraout_a3_01;
    } while (iVar1 < 9);
    uVar3 = 0;
    puVar5 = param_1;
    do {
      maybe_MenuOpt_SetItemActive(puVar5 + 0x4a,uVar3 == *param_1);
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 5;
    } while (uVar3 < 9);
    MenuWnd_SetItemState(0xfd,puVar7[*param_1 * 5 + 2],1,param_1[1]);
  }
  else {
    uVar3 = 0;
    do {
      maybe_MenuOpt_SetItemActive(param_1 + 0x4a,0);
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 5;
    } while (uVar3 < 9);
  }
  return;
}

// 0x00241e20  size 0x460
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ButtonConfig_AnimateCursor(uint *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  byte extraout_a3_lo_07;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  UiLayout *pUVar7;
  int iVar8;
  
  iVar1 = UiMgr_FindLayout(0xfc);
  uVar3 = param_1[1];
  uVar2 = _g_MenuInput[uVar3 + 2];
  piVar6 = (int *)(&DAT_0032b920 + uVar3 * 0x108);
  pUVar7 = &g_UiMgr->slots[iVar1].layout;
  if ((_g_MenuInput[uVar3 + 4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*_g_MenuInput != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 0x80000) {
    if (param_2 == 0) {
      iVar1 = 0;
      puVar5 = param_1;
      do {
        uVar3 = puVar5[4];
        UiElem_SetPropInt(pUVar7,(long)*piVar6,0x16,*(int *)(&DAT_0032b860 + uVar3 * 4));
        UiElem_SetPropInt(pUVar7,(long)piVar6[1],0x16,*(int *)(&LAB_0032b8c0 + uVar3 * 4));
        UiElem_SetPropFloat(pUVar7,(long)piVar6[5],8,extraout_a3_lo_02);
        UiElem_SetPropFloat(pUVar7,(long)piVar6[2],8,extraout_a3_lo_03);
        UiElem_SetPropFloat(pUVar7,(long)piVar6[4],8,extraout_a3_lo_04);
        iVar1 = iVar1 + 1;
        puVar5 = puVar5 + 1;
        piVar6 = piVar6 + 6;
      } while (iVar1 < 10);
    }
    else {
      iVar1 = 0;
      puVar5 = param_1;
      do {
        UiElem_GetPropPtr(pUVar7,piVar6[2],8);
        uVar3 = puVar5[4];
        UiElem_SetPropInt(pUVar7,(long)*piVar6,0x16,*(int *)(&DAT_0032b860 + uVar3 * 4));
        UiElem_SetPropInt(pUVar7,(long)piVar6[1],0x16,*(int *)(&LAB_0032b8c0 + uVar3 * 4));
        UiElem_SetPropFloat(pUVar7,(long)piVar6[4],8,extraout_a3_lo);
        UiElem_SetPropFloat(pUVar7,(long)piVar6[3],8,extraout_a3_lo_00);
        UiElem_SetPropFloat(pUVar7,(long)piVar6[5],8,extraout_a3_lo_01);
        iVar1 = iVar1 + 1;
        piVar6 = piVar6 + 6;
        puVar5 = puVar5 + 1;
      } while (iVar1 < 10);
    }
    uVar3 = 0;
    do {
      maybe_MenuOpt_SetItemActive(param_1 + 0x18,0);
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 5;
    } while (uVar3 < 10);
  }
  else if (param_2 == 0) {
    iVar1 = 0;
    puVar5 = param_1;
    piVar4 = piVar6;
    do {
      uVar3 = puVar5[4];
      iVar8 = uVar3 * 4;
      UiElem_SetPropInt(pUVar7,(long)*piVar4,0x16,*(int *)(&DAT_0032b860 + iVar8));
      UiElem_SetPropInt(pUVar7,(long)piVar4[1],0x16,*(int *)(&LAB_0032b8c0 + iVar8));
      if ((param_1[3] & 1 << (uVar3 & 0x1f)) == 0) {
        iVar8 = piVar4[4];
      }
      else {
        iVar8 = piVar4[4];
      }
      UiElem_SetPropFloat(pUVar7,(long)iVar8,8,extraout_a3_lo_05);
      UiElem_SetPropFloat(pUVar7,(long)piVar4[5],8,extraout_a3_lo_06);
      UiElem_SetPropFloat(pUVar7,(long)piVar4[2],8,extraout_a3_lo_07);
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 1;
      piVar4 = piVar4 + 6;
    } while (iVar1 < 10);
    uVar3 = 0;
    puVar5 = param_1;
    do {
      maybe_MenuOpt_SetItemActive(puVar5 + 0x18,uVar3 == *param_1);
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 5;
    } while (uVar3 < 10);
    MenuWnd_SetItemState(0xfc,piVar6[*param_1 * 6 + 3],1,param_1[1]);
  }
  else {
    uVar3 = 0;
    puVar5 = param_1;
    do {
      maybe_MenuOpt_SetItemActive(puVar5 + 0x18,0);
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 5;
    } while (uVar3 < 10);
    iVar1 = 0;
    do {
      uVar3 = param_1[4];
      UiElem_SetPropInt(pUVar7,(long)*piVar6,0x16,*(int *)(&DAT_0032b860 + uVar3 * 4));
      UiElem_SetPropInt(pUVar7,(long)piVar6[1],0x16,*(int *)(&LAB_0032b8c0 + uVar3 * 4));
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar1 < 10);
  }
  return;
}

// 0x00242290  size 0x310
void maybe_MenuOpt_SetItemActive(undefined4 *param_1,int param_2)

{
  int iVar1;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  byte extraout_a3_lo_05;
  byte extraout_a3_lo_06;
  UiLayout *pUVar2;
  
  iVar1 = UiMgr_FindLayout(*param_1);
  pUVar2 = &g_UiMgr->slots[iVar1].layout;
  if (param_2 == 0) {
    iVar1 = UiMgr_FindLayout(*param_1);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)(int)param_1[1],8,extraout_a3_lo_00);
    iVar1 = UiMgr_FindLayout(*param_1);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)(int)param_1[2],8,extraout_a3_lo_01);
  }
  else {
    iVar1 = param_1[4];
    if (param_2 != iVar1) {
      if (iVar1 == 0) {
        iVar1 = UiMgr_FindLayout(*param_1);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)(int)param_1[1],8,extraout_a3_lo_02)
        ;
        iVar1 = UiMgr_FindLayout(*param_1);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)(int)param_1[2],8,extraout_a3_lo_03)
        ;
      }
      else if (iVar1 == 2) {
        iVar1 = UiMgr_FindLayout(*param_1);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)(int)param_1[2],8,extraout_a3_lo_04)
        ;
      }
      else if (iVar1 == 3) {
        iVar1 = UiMgr_FindLayout(*param_1);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)(int)param_1[1],8,extraout_a3_lo);
      }
    }
    if (param_2 - 1U < 2) {
      if (param_2 == 2) {
        iVar1 = UiMgr_FindLayout(*param_1);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)(int)param_1[2],8,extraout_a3_lo_05)
        ;
      }
      UiElem_SetPropInt(pUVar2,(long)(int)param_1[1],9,(int)param_1[3] / 10);
    }
    if ((param_2 == 3) || (param_2 == 1)) {
      if (param_2 == 3) {
        iVar1 = UiMgr_FindLayout(*param_1);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)(int)param_1[1],8,extraout_a3_lo_06)
        ;
      }
      UiElem_SetPropInt(pUVar2,(long)(int)param_1[2],9,(int)param_1[3] / 10);
    }
    iVar1 = param_1[3] + 1;
    if (iVar1 < 0) {
      iVar1 = 0x3c;
    }
    else if (0x3c < iVar1) {
      iVar1 = 0;
    }
    param_1[3] = iVar1;
  }
  param_1[4] = param_2;
  return;
}

// 0x002425a0  size 0x20
void MenuOpt_InitItem(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4
                     )

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = *param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 0x002425c0  size 0x23c
void maybe_MenuOpt_SetSelected(int *param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  byte extraout_a3_lo_03;
  byte extraout_a3_lo_04;
  
  if (param_2 != param_1[3]) {
    if (param_2 == 0) {
      param_1[3] = 0;
    }
    else {
      iVar2 = UiMgr_FindLayout(param_1[2]);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*param_1,8,extraout_a3_lo_01);
      param_1[3] = param_2;
    }
  }
  if (param_3 == 0 || param_2 == 0) {
    iVar2 = UiMgr_FindLayout(param_1[2]);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)param_1[1],8,extraout_a3_lo);
  }
  else {
    MenuWnd_SetItemState(param_1[2],param_1[1],0,1);
  }
  if (param_2 == 0) {
    iVar2 = UiMgr_FindLayout(param_1[2]);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)*param_1,8,extraout_a3_lo_02);
    uVar1 = param_1[7];
  }
  else {
    uVar1 = param_1[7];
  }
  uVar3 = param_2 != 0 ^ 1;
  if (uVar3 != uVar1) {
    if (uVar3 == 0) {
      param_1[7] = 0;
    }
    else {
      iVar2 = UiMgr_FindLayout(param_1[6]);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)param_1[4],8,extraout_a3_lo_03);
      param_1[7] = uVar3;
    }
  }
  if (param_3 == 0 || uVar3 == 0) {
    iVar2 = UiMgr_FindLayout(param_1[6]);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)param_1[5],8,extraout_a3_lo_00);
  }
  else {
    MenuWnd_SetItemState(param_1[6],param_1[5],0,1);
  }
  if (uVar3 == 0) {
    iVar2 = UiMgr_FindLayout(param_1[6]);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar2].layout,(long)param_1[4],8,extraout_a3_lo_04);
  }
  return;
}

// 0x00242800  size 0x160
void maybe_MenuOpt_Init(undefined8 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  byte extraout_a3_lo_02;
  
  piVar2 = (int *)param_1;
  piVar2[2] = param_2;
  *piVar2 = *param_3;
  piVar2[1] = param_3[1];
  piVar2[3] = 1;
  if (piVar2[3] != 0) {
    piVar2[3] = 0;
  }
  iVar1 = UiMgr_FindLayout(piVar2[2]);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)piVar2[1],8,extraout_a3_lo);
  iVar1 = UiMgr_FindLayout(piVar2[2]);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*piVar2,8,extraout_a3_lo_00);
  piVar2[6] = param_2;
  piVar2[4] = *param_4;
  piVar2[5] = param_4[1];
  piVar2[7] = 1;
  if (piVar2[7] != 0) {
    piVar2[7] = 0;
  }
  iVar1 = UiMgr_FindLayout(piVar2[6]);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)piVar2[5],8,extraout_a3_lo_01);
  iVar1 = UiMgr_FindLayout(piVar2[6]);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)piVar2[4],8,extraout_a3_lo_02);
  maybe_MenuOpt_SetSelected(param_1,0,0);
  return;
}

// 0x00242960  size 0x128
void maybe_MenuOpt_SetSelectedB(int *param_1,int param_2,long param_3)

{
  int iVar1;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  
  if (param_2 != param_1[3]) {
    if (param_2 != 0) {
      iVar1 = UiMgr_FindLayout(param_1[2]);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*param_1,8,extraout_a3_lo_00);
    }
    param_1[3] = param_2;
  }
  if (param_3 == 0) {
    iVar1 = UiMgr_FindLayout(param_1[2]);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)param_1[1],8,extraout_a3_lo);
  }
  else {
    MenuWnd_SetItemState(param_1[2],param_1[1],0,1);
  }
  if (param_2 == 0) {
    iVar1 = UiMgr_FindLayout(param_1[2]);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*param_1,8,extraout_a3_lo_01);
  }
  return;
}

// 0x00242a90  size 0xb0
void maybe_MenuOpt_InitB(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  
  param_1[2] = param_2;
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[3] = 1;
  if (param_1[3] != 0) {
    param_1[3] = 0;
  }
  iVar1 = UiMgr_FindLayout(param_1[2]);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)param_1[1],8,extraout_a3_lo);
  iVar1 = UiMgr_FindLayout(param_1[2]);
  UiElem_SetPropFloat(&g_UiMgr->slots[iVar1].layout,(long)*param_1,8,extraout_a3_lo_00);
  return;
}

// 0x00242b40  size 0x1a0
void maybe_MenuOpt_SetValue(undefined4 *param_1,int param_2)

{
  int iVar1;
  byte extraout_a3_lo;
  byte bVar2;
  byte extraout_a3_lo_00;
  UiLayout *pUVar3;
  
  iVar1 = UiMgr_FindLayout(*param_1);
  pUVar3 = &g_UiMgr->slots[iVar1].layout;
  bVar2 = extraout_a3_lo;
  if (param_1[1] != param_2) {
    param_1[2] = 0;
    if (0 < (long)(int)param_1[1]) {
      UiElem_SetPropFloat(pUVar3,(long)(int)param_1[1],8,extraout_a3_lo);
      bVar2 = extraout_a3_lo_00;
    }
    param_1[1] = param_2;
  }
  if (0 < (long)(int)param_1[1]) {
    UiElem_SetPropFloat(pUVar3,(long)(int)param_1[1],8,bVar2);
    iVar1 = param_1[2] + 1;
    if (iVar1 < 0) {
      iVar1 = 0x3c;
    }
    else if (0x3c < iVar1) {
      iVar1 = 0;
    }
    param_1[2] = iVar1;
  }
  return;
}

// 0x00242ce0  size 0x10
void MenuOpt_InitIndex(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  return;
}

// 0x00242cf0  size 0x1e8
void MenuScr_Draw_YouDonHave(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (((int)param_3 % 1000) * 1000) % 1000;
  iVar2 = (int)param_3 - iVar1 / 1000;
  if (param_3 == 0) {
    MenuWnd_DrawLabel(param_1,param_2,0x3c3);
  }
  else if (param_3 < 1) {
    MenuWnd_DrawLabel(param_1,param_2,0x3c4,iVar1);
  }
  else if (param_3 < 1000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3c5,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3c6,(iVar2 / 1000) % 1000,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3c7,((iVar2 / 1000) / 1000) % 1000,(iVar2 / 1000) % 1000,
                      iVar2 % 1000,iVar1);
  }
  else {
    iVar1 = (iVar2 / 1000) / 1000;
    MenuWnd_DrawLabel(param_1,param_2,0x3c8,(iVar1 / 1000) % 1000,iVar1 % 1000,(iVar2 / 1000) % 1000
                      ,iVar2 % 1000);
  }
  return;
}

// 0x00242ee0  size 0x1e8
void MenuScr_Draw_YouDonHave_2ee0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (((int)param_3 % 1000) * 1000) % 1000;
  iVar2 = (int)param_3 - iVar1 / 1000;
  if (param_3 == 0) {
    MenuWnd_DrawLabel(param_1,param_2,0x3bd);
  }
  else if (param_3 < 1) {
    MenuWnd_DrawLabel(param_1,param_2,0x3be,iVar1);
  }
  else if (param_3 < 1000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3bf,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3c0,(iVar2 / 1000) % 1000,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3c1,((iVar2 / 1000) / 1000) % 1000,(iVar2 / 1000) % 1000,
                      iVar2 % 1000,iVar1);
  }
  else {
    iVar1 = (iVar2 / 1000) / 1000;
    MenuWnd_DrawLabel(param_1,param_2,0x3c2,(iVar1 / 1000) % 1000,iVar1 % 1000,(iVar2 / 1000) % 1000
                      ,iVar2 % 1000);
  }
  return;
}

// 0x002430d0  size 0x1e8
void MenuScr_Draw_ContractMoney(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (((int)param_3 % 1000) * 1000) % 1000;
  iVar2 = (int)param_3 - iVar1 / 1000;
  if (param_3 == 0) {
    MenuWnd_DrawLabel(param_1,param_2,0x3b4);
  }
  else if (param_3 < 1) {
    MenuWnd_DrawLabel(param_1,param_2,0x3b5,iVar1);
  }
  else if (param_3 < 1000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3b6,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3b7,(iVar2 / 1000) % 1000,iVar2 % 1000,iVar1);
  }
  else if (param_3 < 1000000000) {
    MenuWnd_DrawLabel(param_1,param_2,0x3b8,((iVar2 / 1000) / 1000) % 1000,(iVar2 / 1000) % 1000,
                      iVar2 % 1000,iVar1);
  }
  else {
    iVar1 = (iVar2 / 1000) / 1000;
    MenuWnd_DrawLabel(param_1,param_2,0x3b9,(iVar1 / 1000) % 1000,iVar1 % 1000,(iVar2 / 1000) % 1000
                      ,iVar2 % 1000);
  }
  return;
}

// 0x002432c0  size 0x904
void ScrRecord_Draw_IsTakenAway(int param_1)

{
  UiLayoutSlot *pUVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte extraout_a3_lo;
  byte extraout_a3_lo_00;
  byte extraout_a3_lo_01;
  undefined4 *puVar10;
  int iVar11;
  char acStack_80 [16];
  char acStack_70 [4];
  undefined2 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  char acStack_40 [4];
  undefined2 uStack_3c;
  undefined4 uStack_38;
  char acStack_30 [16];
  char acStack_20 [16];
  char cStack_10;
  
  UiMgr_FindLayout(0x99);
  iVar5 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar5 != 0) {
    uVar3 = UiRes_GetLayoutData(0x112);
    iVar5 = UiMgr_FindLayout(0x95);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar5].layout.unk_310 = 0xffffffff;
    pUVar1[iVar5].layout.unk_31c = 0;
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    pUVar1[iVar5].layout.unk_31c = uVar3;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x113);
    iVar5 = UiMgr_FindLayout(0x95);
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
    uVar3 = UiRes_GetLayoutData(0x114);
    iVar5 = UiMgr_FindLayout(0x96);
    pUVar1 = g_UiMgr->slots;
    pUVar1[iVar5].layout.unk_310 = 0xffffffff;
    pUVar1[iVar5].layout.unk_31c = 0;
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    pUVar1[iVar5].layout.unk_30c = 0;
    if (pUVar1[iVar5].layout.unk_31c == 0) {
      pUVar1[iVar5].layout.unk_318 = 0;
    }
    else {
      pUVar1[iVar5].layout.unk_318 = 1;
    }
    *(undefined4 *)&pUVar1[iVar5].layout.field_0x314 = 0;
    pUVar1[iVar5].layout.unk_31c = uVar3;
    pUVar1[iVar5].layout.unk_318 = 1;
    uVar6 = UiRes_GetLayoutData(0x115);
    iVar5 = UiMgr_FindLayout(0x96);
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
    Menu_ClearSlot(0);
    iVar5 = UiMgr_FindLayout(0x99);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x22,8,extraout_a3_lo);
    iVar5 = UiMgr_FindLayout(0x99);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x21,8,extraout_a3_lo_00);
    iVar5 = UiMgr_FindLayout(0x99);
    UiElem_SetPropFloat(&g_UiMgr->slots[iVar5].layout,0x1d,8,extraout_a3_lo_01);
    g_MenuMgr->unk_05a0 = 0;
    g_MenuMgr->unk_05e8 = 0;
    g_MenuMgr->unk_060c = 0;
    g_MenuMgr->unk_0634 = 0;
    g_MenuMgr->unk_0644 = 0;
  }
  GameState_GetVec3d0(acStack_20);
  if ((acStack_20[0] == '\x06') || (*(int *)(param_1 + 0x64c) == 0x2e)) {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x96,0);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  else {
    bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x95,0);
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  GameState_GetVec3d0(acStack_30);
  if ((acStack_30[0] == '\x06') || (*(int *)(param_1 + 0x64c) == 0x2e)) {
    if ((*(int *)(param_1 + 0x660) != 0) &&
       (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x96,1), !bVar2)) {
      *(undefined4 *)(param_1 + 0x660) = 0;
    }
  }
  else if ((*(int *)(param_1 + 0x660) != 0) &&
          (bVar2 = UiLayout_UpdateAnimById((UiLayout *)0x95,1), !bVar2)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  uVar7 = GameState_Get_0();
  uVar7 = MsgId_ForOption(uVar7);
  uVar7 = MsgId_ForSlot(uVar7,1);
  MenuWnd_DrawText(0x99,0x24,uVar7);
  uVar3 = GameState_Get_354();
  MenuWnd_DrawLabel(0x99,0x29,0x36f,(uVar3 & 0xff) + 0x370);
  uVar3 = GameState_Get_1();
  MenuWnd_DrawLabel(0x99,0x23,*(undefined4 *)((uVar3 & 0xff) * 4 + 0x36ebf0));
  uVar3 = GameState_Get_2();
  MenuWnd_DrawLabel(0x99,0x25,*(undefined4 *)(&DAT_0032cce0 + (uVar3 & 0xff) * 4));
  uVar3 = GameState_Get_3();
  MenuWnd_DrawLabel(0x99,0x26,*(undefined4 *)((uVar3 & 0xff) * 4 + 0x36ebf8));
  uVar8 = GameState_Get_35c();
  if ((uVar8 & 1) == 0) {
    uVar8 = GameState_Get_35c();
    if ((uVar8 & 2) != 0) {
      GameState_GetVec3c4(acStack_70);
      cStack_10 = acStack_70[0];
      if (acStack_70[0] == '\0') {
        MenuWnd_DrawTextId(0x95,0x13,1,0x3ad);
        uVar7 = Msg_PartInfo(uStack_6c);
        uVar9 = Msg_MakerInfo(uStack_6c);
        MenuWnd_DrawLabel(0x95,0x14,0x45,uVar7,uVar9);
        MenuWnd_DrawText(0x95,0x11,0x3ab);
      }
      else if ((acStack_70[0] == '\x03') || (acStack_70[0] == '\x04')) {
        MenuWnd_DrawTextId(0x95,0x13,1,0x3ad);
        MenuWnd_DrawNumber(0x95,0x12,uStack_68);
        MenuWnd_DrawText(0x95,0x11,0x3ab);
      }
    }
  }
  else {
    GameState_GetVec3d0(acStack_40);
    cStack_10 = acStack_40[0];
    if (acStack_40[0] == '\x06') {
      MenuWnd_DrawTextId(0x96,0x25,1,0x3af);
      iVar11 = 0;
      iVar5 = 0;
      puVar10 = &DAT_0032cd08;
      do {
        GameState_GetVec3d0(auStack_60);
        iVar4 = GameDb_GetEncounter(uStack_5c);
        if (-1 < *(int *)(iVar4 + iVar5)) {
          MenuWnd_DrawText(0x96,*puVar10,*(int *)(iVar4 + iVar5) + 0x8c7);
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + 4;
        puVar10 = puVar10 + 1;
      } while (iVar11 < 3);
      MenuWnd_DrawText(0x96,0x23,0x3aa);
    }
    else if (acStack_40[0] == '\b') {
      MenuWnd_DrawTextId(0x95,0x13,1,0x78);
      iVar5 = GameState_Ptr_48();
      uVar7 = MsgId_RivalName(*(undefined4 *)(iVar5 + 0x80));
      MenuWnd_DrawText(0x95,0x14,uVar7);
      MenuWnd_DrawText(0x95,0x11,0x3ac);
    }
    else if (acStack_40[0] == '\0') {
      MenuWnd_DrawTextId(0x95,0x13,1,0x3ae);
      uVar7 = Msg_PartInfo(uStack_3c);
      uVar9 = Msg_MakerInfo(uStack_3c);
      MenuWnd_DrawLabel(0x95,0x14,0x45,uVar7,uVar9);
      MenuWnd_DrawText(0x95,0x11,0x3aa);
    }
    else if ((acStack_40[0] == '\x03') || (acStack_40[0] == '\x04')) {
      if (*(int *)(param_1 + 0x64c) == 0x2e) {
        MenuWnd_DrawTextId(0x96,0x25,1,0x3af);
        iVar11 = 0;
        iVar5 = 0;
        puVar10 = &DAT_0032ccf8;
        do {
          GameState_GetVec3d0(auStack_50);
          iVar4 = GameDb_GetEncounter(uStack_4c);
          if (-1 < *(int *)(iVar4 + iVar5)) {
            MenuWnd_DrawText(0x96,*puVar10,*(int *)(iVar4 + iVar5) + 0x8c7);
          }
          iVar11 = iVar11 + 1;
          iVar5 = iVar5 + 4;
          puVar10 = puVar10 + 1;
        } while (iVar11 < 3);
        MenuWnd_DrawText(0x96,0x23,0x3aa);
      }
      else {
        MenuWnd_DrawTextId(0x95,0x13,1,0x3ae);
        MenuWnd_DrawNumber(0x95,0x12,uStack_38);
        MenuWnd_DrawText(0x95,0x11,0x3aa);
      }
    }
  }
  iVar5 = UiMgr_FindLayout(0x94);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  uVar8 = GameState_Get_35c();
  if ((uVar8 & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0x64c);
LAB_002437b4:
    if (iVar5 != 0x2e) {
      iVar5 = UiMgr_FindLayout(0x95);
      UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
      goto LAB_00243824;
    }
  }
  else {
    GameState_GetVec3d0(acStack_80);
    if (acStack_80[0] != '\x06') {
      iVar5 = *(int *)(param_1 + 0x64c);
      goto LAB_002437b4;
    }
  }
  iVar5 = UiMgr_FindLayout(0x96);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
LAB_00243824:
  iVar5 = UiMgr_FindLayout(0x99);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar5].layout);
  return;
}

// 0x00243bd0  size 0xf8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrRace_Draw_Interval(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
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
  UiLayout *pUVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  
  UiMgr_FindLayout(0x79);
  UiMgr_FindLayout(0x9f);
  iVar3 = UiMgr_FindLayout(0xa1);
  pUVar6 = &g_UiMgr->slots[iVar3].layout;
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar3 = 0;
    piVar7 = &DAT_0032cbb0;
    do {
      if (*(int *)(param_1 + 0x62c) == iVar3) {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_01);
      }
      else {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_02);
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 10);
  }
  else {
    iVar3 = 0;
    piVar7 = &DAT_0032cbb0;
    do {
      if (*(int *)(param_1 + 0xc) == iVar3) {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo);
      }
      else {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_00);
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 10);
  }
  if (*(int *)(param_1 + 0x10) == -1) {
    iVar3 = 0;
    piVar7 = &DAT_0032cbe0;
    do {
      if ((*(int *)(param_1 + 0x62c) == iVar3) && (*(int *)(param_1 + 0xc) != -1)) {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_05);
      }
      else {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_15);
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 10);
  }
  else {
    iVar3 = 0;
    piVar7 = &DAT_0032cbe0;
    do {
      if (*(int *)(param_1 + 0x10) == iVar3) {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_03);
      }
      else {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_04);
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 10);
  }
  if (*(int *)(param_1 + 0x10) == -1) {
    iVar3 = 0;
    piVar8 = &DAT_0032cc10;
    piVar7 = &DAT_0032cc40;
    do {
      iVar4 = UiMgr_FindLayout(0x9f);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar8,8,extraout_a3_lo_08);
      if (iVar3 == *(int *)(param_1 + 0xc)) {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_09);
      }
      else {
        iVar4 = UiMgr_FindLayout(0x9f);
        UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_10);
      }
      iVar3 = iVar3 + 1;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 10);
  }
  else {
    iVar3 = 0;
    piVar8 = &DAT_0032cc10;
    piVar7 = &DAT_0032cc40;
    do {
      iVar4 = UiMgr_FindLayout(0x9f);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar8,8,extraout_a3_lo_06);
      iVar4 = UiMgr_FindLayout(0x9f);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_07);
      iVar3 = iVar3 + 1;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 10);
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    if (*(int *)(param_1 + 0x10) == -1) {
      uVar5 = Race_GetCourseVariant();
      cVar2 = Race_IsTimeTrialMode(uVar5,0);
      if (cVar2 == '\0') {
        uVar5 = Race_GetCourseVariant();
        maybe_Ui_LeafF6720(0x469830,uVar5,9 - *(int *)(param_1 + 0xc),9 - *(int *)(param_1 + 0x62c))
        ;
      }
      else {
        uVar5 = Race_GetCourseVariant();
        maybe_Ui_LeafF6720(0x469830,uVar5,*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(param_1 + 0x62c));
      }
    }
    else {
      uVar5 = Race_GetCourseVariant();
      cVar2 = Race_IsTimeTrialMode(uVar5,0);
      if (cVar2 == '\0') {
        uVar5 = Race_GetCourseVariant();
        maybe_Ui_LeafF6720(0x469830,uVar5,9 - *(int *)(param_1 + 0xc),9 - *(int *)(param_1 + 0x10));
      }
      else {
        uVar5 = Race_GetCourseVariant();
        maybe_Ui_LeafF6720(0x469830,uVar5,*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(param_1 + 0x10));
      }
    }
    uVar5 = maybe___sf_to_df(_s_ScrRace_Draw_Interval_3 - _s_ScrRace_Draw_Interval_2);
    uVar5 = fabs(uVar5);
    fVar9 = (float)maybe___extendsfdf2(uVar5);
    MenuWnd_DrawLabel(0x9f,0xb4,0x3a2,(int)(fVar9 * 1000.0),4);
    MenuWnd_DrawLabel(0x9f,0xb5,0x3a2,(int)(_s_ScrRace_Draw_Interval_1 * 1000.0),4);
  }
  uVar5 = Race_GetCourseVariant();
  uVar5 = MsgId_ForOption(uVar5);
  uVar5 = MsgId_ForSlot(uVar5,1);
  MenuWnd_DrawText(0x9f,0xaf,uVar5);
  MenuWnd_DrawText(0x9f,0xae,0x39e);
  MenuWnd_DrawText(0x9f,0xb3,0x39f);
  MenuWnd_DrawTextId(0x9f,0xac,1,0x39e);
  MenuWnd_DrawTextId(0x9f,0xad,1,0x39f);
  MenuWnd_DrawText(0x9f,0xb1,0x3a0);
  MenuWnd_DrawText(0x9f,0xb2,0x3a1);
  MenuWnd_DrawText(0x9f,0xb0,0x356);
  uVar5 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar5);
  UiElem_SetPropInt(pUVar6,10,0x16,*(int *)(&DAT_0032cc90 + iVar3 * 4));
  uVar5 = Race_GetCourseVariant();
  iVar3 = MsgId_ForOption(uVar5);
  UiElem_SetPropInt(pUVar6,0xb,0x16,*(int *)(&DAT_0032cc70 + iVar3 * 4));
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar3 = 0;
    piVar7 = &DAT_0032ccb0;
    do {
      iVar4 = UiMgr_FindLayout(0xa1);
      UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_20);
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 9);
  }
  else if (*(int *)(param_1 + 0x10) == -1) {
    iVar3 = 0;
    piVar7 = &DAT_0032ccb0;
    do {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(param_1 + 0x62c);
      if (iVar4 < iVar1) {
        if ((iVar3 < iVar4) || (iVar1 <= iVar3)) {
          uVar5 = Race_GetCourseVariant();
          cVar2 = Race_IsTimeTrialMode(uVar5,0);
          if (cVar2 == '\0') {
            iVar4 = UiMgr_FindLayout(0xa1);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032ccb0)[8 - iVar3],
                                8,(byte)g_UiMgr);
          }
          else {
            iVar4 = UiMgr_FindLayout(0xa1);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_18);
          }
        }
        else {
          uVar5 = Race_GetCourseVariant();
          cVar2 = Race_IsTimeTrialMode(uVar5,0);
          if (cVar2 == '\0') {
            iVar4 = UiMgr_FindLayout(0xa1);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032ccb0)[8 - iVar3],
                                8,(char)(8 - iVar3) * '\x04');
            uVar5 = Race_GetCourseVariant();
            iVar4 = MsgId_ForOption(uVar5);
            UiElem_SetPropInt(pUVar6,(long)(int)(&DAT_0032ccb0)[8 - iVar3],0x16,
                              *(int *)(&DAT_0032cc70 + iVar4 * 4));
          }
          else {
            iVar4 = UiMgr_FindLayout(0xa1);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_13);
            uVar5 = Race_GetCourseVariant();
            iVar4 = MsgId_ForOption(uVar5);
            UiElem_SetPropInt(pUVar6,(long)*piVar7,0x16,*(int *)(&DAT_0032cc70 + iVar4 * 4));
          }
        }
      }
      else if ((iVar3 < iVar1) || (iVar4 <= iVar3)) {
        uVar5 = Race_GetCourseVariant();
        cVar2 = Race_IsTimeTrialMode(uVar5,0);
        if (cVar2 == '\0') {
          iVar4 = UiMgr_FindLayout(0xa1);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032ccb0)[8 - iVar3],8,
                              (byte)g_UiMgr);
        }
        else {
          iVar4 = UiMgr_FindLayout(0xa1);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_19);
        }
      }
      else {
        uVar5 = Race_GetCourseVariant();
        cVar2 = Race_IsTimeTrialMode(uVar5,0);
        if (cVar2 == '\0') {
          iVar4 = UiMgr_FindLayout(0xa1);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032ccb0)[8 - iVar3],8,
                              (char)(8 - iVar3) * '\x04');
          uVar5 = Race_GetCourseVariant();
          iVar4 = MsgId_ForOption(uVar5);
          UiElem_SetPropInt(pUVar6,(long)(int)(&DAT_0032ccb0)[8 - iVar3],0x16,
                            *(int *)(&DAT_0032cc70 + iVar4 * 4));
        }
        else {
          iVar4 = UiMgr_FindLayout(0xa1);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_14);
          uVar5 = Race_GetCourseVariant();
          iVar4 = MsgId_ForOption(uVar5);
          UiElem_SetPropInt(pUVar6,(long)*piVar7,0x16,*(int *)(&DAT_0032cc70 + iVar4 * 4));
        }
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 9);
  }
  else {
    iVar3 = 0;
    piVar7 = &DAT_0032ccb0;
    do {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar4 < iVar1) {
        if ((iVar3 < iVar4) || (iVar1 <= iVar3)) {
          uVar5 = Race_GetCourseVariant();
          cVar2 = Race_IsTimeTrialMode(uVar5,0);
          if (cVar2 == '\0') {
            iVar4 = UiMgr_FindLayout(0xa1);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032ccb0)[8 - iVar3],
                                8,(byte)g_UiMgr);
          }
          else {
            iVar4 = UiMgr_FindLayout(0xa1);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_16);
          }
        }
        else {
          uVar5 = Race_GetCourseVariant();
          cVar2 = Race_IsTimeTrialMode(uVar5,0);
          if (cVar2 == '\0') {
            iVar4 = UiMgr_FindLayout(0xa1);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032ccb0)[8 - iVar3],
                                8,(char)(8 - iVar3) * '\x04');
            uVar5 = Race_GetCourseVariant();
            iVar4 = MsgId_ForOption(uVar5);
            UiElem_SetPropInt(pUVar6,(long)(int)(&DAT_0032ccb0)[8 - iVar3],0x16,
                              *(int *)(&DAT_0032cc70 + iVar4 * 4));
          }
          else {
            iVar4 = UiMgr_FindLayout(0xa1);
            UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_11);
            uVar5 = Race_GetCourseVariant();
            iVar4 = MsgId_ForOption(uVar5);
            UiElem_SetPropInt(pUVar6,(long)*piVar7,0x16,*(int *)(&DAT_0032cc70 + iVar4 * 4));
          }
        }
      }
      else if ((iVar3 < iVar1) || (iVar4 <= iVar3)) {
        uVar5 = Race_GetCourseVariant();
        cVar2 = Race_IsTimeTrialMode(uVar5,0);
        if (cVar2 == '\0') {
          iVar4 = UiMgr_FindLayout(0xa1);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032ccb0)[8 - iVar3],8,
                              (byte)g_UiMgr);
        }
        else {
          iVar4 = UiMgr_FindLayout(0xa1);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_17);
        }
      }
      else {
        uVar5 = Race_GetCourseVariant();
        cVar2 = Race_IsTimeTrialMode(uVar5,0);
        if (cVar2 == '\0') {
          iVar4 = UiMgr_FindLayout(0xa1);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)(int)(&DAT_0032ccb0)[8 - iVar3],8,
                              (char)(8 - iVar3) * '\x04');
          uVar5 = Race_GetCourseVariant();
          iVar4 = MsgId_ForOption(uVar5);
          UiElem_SetPropInt(pUVar6,(long)(int)(&DAT_0032ccb0)[8 - iVar3],0x16,
                            *(int *)(&DAT_0032cc70 + iVar4 * 4));
        }
        else {
          iVar4 = UiMgr_FindLayout(0xa1);
          UiElem_SetPropFloat(&g_UiMgr->slots[iVar4].layout,(long)*piVar7,8,extraout_a3_lo_12);
          uVar5 = Race_GetCourseVariant();
          iVar4 = MsgId_ForOption(uVar5);
          UiElem_SetPropInt(pUVar6,(long)*piVar7,0x16,*(int *)(&DAT_0032cc70 + iVar4 * 4));
        }
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar3 < 9);
  }
  iVar3 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0x9f);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  iVar3 = UiMgr_FindLayout(0xa1);
  UiLayout_Draw(1.0,&g_UiMgr->slots[iVar3].layout);
  return;
}

