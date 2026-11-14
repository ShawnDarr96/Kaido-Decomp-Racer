// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002e8000 - 0x002ec000
#include "ghidra_types.h"

// 0x002e8380  size 0x7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void eventui_sub_002e8380(undefined8 param_1)

{
  int iVar1;
  
  UiLayout_UpdateAnimById(0,0);
  iVar1 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = nameentry_sub_002f8200(param_1);
  (*(code *)(&PTR_eventui_sub_002e7e90_00342bf0)[iVar1])(param_1);
  return;
}

// 0x002e8410  size 0xc8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void eventui_sub_002e8410(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Msg_Get(0);
  iVar2 = UiMgr_FindLayout(0);
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
  iVar2 = UiMgr_FindLayout();
  UiElem_SetPropInt(*_g_UiMgr + iVar2 * 0x4f4 + 4,0x1a,0x16,10);
  return;
}

// 0x002e84e0  size 0x388
void eventui_sub_002e84e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x3c);
  uVar7 = nameentry_sub_002f8a90();
  if ((uVar7 & 0x400) == 0) {
    uVar7 = nameentry_sub_002f8a90();
    if ((uVar7 & 0x800) == 0) {
      nameentry_sub_002f6190(param_1 + 0x3c,1,2,1,0);
      nameentry_sub_002f6190(param_1 + 0x38,0,*(int *)(param_1 + 0x34) + -1,1,0);
      iVar10 = *(int *)(param_1 + 0x38);
      iVar4 = *(int *)(param_1 + 0x34);
      iVar5 = *(int *)(param_1 + 0x40);
      if (iVar5 == (iVar10 + 1) % iVar4) {
        *(int *)(param_1 + 0x40) = iVar10;
        *(undefined4 *)(param_1 + 0x44) = 2;
      }
      else if (iVar10 == (iVar5 + 6) % iVar4) {
        *(int *)(param_1 + 0x40) = (iVar5 + 1) % iVar4;
        *(undefined4 *)(param_1 + 0x44) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x40) = (*(int *)(param_1 + 0x40) + 6) % *(int *)(param_1 + 0x34);
      *(int *)(param_1 + 0x38) = (*(int *)(param_1 + 0x38) + 6) % *(int *)(param_1 + 0x34);
      Se_PlayMenuVol(7,0x60);
    }
    iVar10 = *(int *)(param_1 + 0x38);
  }
  else {
    *(int *)(param_1 + 0x40) =
         (*(int *)(param_1 + 0x40) + -6 + *(int *)(param_1 + 0x34)) % *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x38) =
         (*(int *)(param_1 + 0x38) + -6 + *(int *)(param_1 + 0x34)) % *(int *)(param_1 + 0x34);
    Se_PlayMenuVol(7,0x60);
    iVar10 = *(int *)(param_1 + 0x38);
  }
  iVar10 = *(int *)(param_1 + 0x3c) + iVar10 * 3 + 1;
  if (iVar3 + iVar2 * 3 + 1 != iVar10) {
    nameentry_sub_002f7f80(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  uVar7 = nameentry_sub_002f8ab0();
  if ((uVar7 & 0x180) == 0) {
LAB_002e8634:
    cVar1 = *(char *)(param_1 + 0x30);
  }
  else {
    if ((iVar10 < 0x10d) && (*(int *)(iVar10 * 4 + param_1 + 0x50) != 0)) {
      uVar7 = nameentry_sub_002f7c70(param_1 + 0x20);
      uVar8 = script_sub_002bc110(iVar10);
      if (uVar7 == (uVar8 & 0xffff)) {
        uVar6 = nameentry_sub_002f7c80(param_1 + 0x20);
        lVar9 = nameentry_sub_002f63f0(uVar6);
        if (lVar9 == 0) {
          nameentry_sub_002f7f80(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
          goto LAB_002e8634;
        }
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(int *)(param_1 + 0x48) = iVar10;
      goto LAB_002e8634;
    }
    Se_PlayMenuVol(8,0x60);
    cVar1 = *(char *)(param_1 + 0x30);
  }
  if (cVar1 == '\x06') {
    uVar6 = nameentry_sub_002f7c80(param_1 + 0x20);
    lVar9 = nameentry_sub_002f63f0(uVar6);
    if (lVar9 != 0) {
      uVar6 = nameentry_sub_002f7c80(param_1 + 0x20);
      lVar9 = nameentry_sub_002f6440(uVar6);
      if (lVar9 != 0) {
        nameentry_sub_002f7f80(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
    }
  }
  else if (cVar1 == '\x05') {
    lVar9 = nameentry_sub_002f7d80(param_1 + 0x20,0,0xffffffffffffffff,0xffffffffffffffff);
    if (lVar9 != 0) {
      uVar6 = nameentry_sub_002f7c80(param_1 + 0x20);
      lVar9 = nameentry_sub_002f63f0(uVar6);
      if (lVar9 != 0) {
        uVar6 = nameentry_sub_002f7c80(param_1 + 0x20);
        lVar9 = nameentry_sub_002f6440(uVar6);
        if (lVar9 != 0) goto LAB_002e8704;
      }
      *(undefined1 *)(param_1 + 0x30) = 6;
    }
  }
  else if ((cVar1 == '\x01') &&
          (lVar9 = nameentry_sub_002f6990(param_1 + 0x20,*(undefined4 *)(param_1 + 0x48)),
          lVar9 != 0)) {
    *(undefined1 *)(param_1 + 0x30) = 5;
  }
LAB_002e8704:
  uVar7 = nameentry_sub_002f8ab0();
  if ((uVar7 & 0x240) != 0) {
    nameentry_sub_002f7f80(param_1 + 0x20);
    Se_PlayMenuVol(6,0x60);
    nameentry_sub_002f8580(0);
  }
  return;
}

// 0x002e8870  size 0x4c
void eventui_sub_002e8870(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = nameentry_sub_002f80a0();
  if (lVar2 != 0) {
    iVar1 = nameentry_sub_002f8200(param_1);
    (**(code **)(iVar1 * 4 + 0x36eed0))(param_1);
  }
  return;
}

// 0x002e89f0  size 0x194
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void eventui_sub_002e89f0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x44) == 0) {
    lVar2 = nameentry_sub_002f81c0();
    if ((lVar2 == 0) && (lVar2 = nameentry_sub_002f81b0(param_1), lVar2 == 0)) {
      nameentry_sub_002f8ad0(1);
      MenuWnd_SetItemState
                (0xb,*(undefined4 *)
                      (*(int *)(iVar1 + 0x3c) * 0x10 +
                      ((*(int *)(iVar1 + 0x34) + (*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x40)))
                      % *(int *)(iVar1 + 0x34)) * 0x30 + 0x342c24),0,0);
    }
  }
  else {
    nameentry_sub_002f8ad0(0);
    if (*(int *)(iVar1 + 0x44) == 1) {
      lVar2 = UiLayout_UpdateAnimById(0xb,2);
      if (lVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x44) = 0;
        iVar1 = UiMgr_FindLayout(0xb);
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
      lVar2 = UiLayout_UpdateAnimById(0xb,3);
      if (lVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x44) = 0;
        iVar1 = UiMgr_FindLayout(0xb);
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

// 0x002e8b90  size 0x9a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void eventui_sub_002e8b90(undefined8 param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  
  lVar9 = nameentry_sub_002f81d0();
  if (lVar9 != 0) {
    uVar6 = Msg_Get(0x1f);
    iVar7 = UiMgr_FindLayout(10);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar6;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar6 = Msg_Get(0x20);
    iVar7 = UiMgr_FindLayout(10);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar6;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    uVar6 = Msg_Get(0x21);
    iVar7 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar7 + 800) = 0;
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x310) = 0;
    if (*(int *)(iVar7 + 800) == 0) {
      *(undefined4 *)(iVar7 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar7 + 0x318) = 0;
    *(undefined4 *)(iVar7 + 800) = uVar6;
    *(undefined4 *)(iVar7 + 0x31c) = 1;
    uVar6 = Msg_Get(0x22);
    iVar7 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x334) = 0;
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x324) = 0;
    if (*(int *)(iVar7 + 0x334) == 0) {
      *(undefined4 *)(iVar7 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x330) = 1;
    }
    *(undefined4 *)(iVar7 + 0x32c) = 0;
    *(undefined4 *)(iVar7 + 0x334) = uVar6;
    *(undefined4 *)(iVar7 + 0x330) = 1;
    uVar6 = Msg_Get(0x23);
    iVar7 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x348) = 0;
    *(undefined4 *)(iVar7 + 0x338) = 0;
    if (*(int *)(iVar7 + 0x348) == 0) {
      *(undefined4 *)(iVar7 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    *(undefined4 *)(iVar7 + 0x338) = 0;
    if (*(int *)(iVar7 + 0x348) == 0) {
      *(undefined4 *)(iVar7 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x344) = 1;
    }
    *(undefined4 *)(iVar7 + 0x340) = 0;
    *(undefined4 *)(iVar7 + 0x348) = uVar6;
    *(undefined4 *)(iVar7 + 0x344) = 1;
    uVar6 = Msg_Get(0x24);
    iVar7 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
    *(undefined4 *)(iVar7 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x35c) = 0;
    *(undefined4 *)(iVar7 + 0x34c) = 0;
    if (*(int *)(iVar7 + 0x35c) == 0) {
      *(undefined4 *)(iVar7 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x358) = 1;
    }
    *(undefined4 *)(iVar7 + 0x34c) = 0;
    if (*(int *)(iVar7 + 0x35c) == 0) {
      *(undefined4 *)(iVar7 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x358) = 1;
    }
    *(undefined4 *)(iVar7 + 0x354) = 0;
    *(undefined4 *)(iVar7 + 0x35c) = uVar6;
    *(undefined4 *)(iVar7 + 0x358) = 1;
    iVar8 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr;
    uVar11 = Msg_Get(0x42);
    UiLayout_IsAnimDone(iVar7 + iVar8 * 0x4f4 + 4,5,0x9e,uVar11,1);
    iVar8 = UiMgr_FindLayout(0xb);
    iVar7 = *_g_UiMgr;
    uVar11 = Msg_Get(0x43);
    UiLayout_IsAnimDone(iVar7 + iVar8 * 0x4f4 + 4,6,0x9f,uVar11,1);
    Menu_ClearSlot(0);
  }
  lVar9 = UiLayout_UpdateAnimById(10,0);
  lVar10 = UiLayout_UpdateAnimById(0xb,0);
  if (lVar9 == 0 && lVar10 == 0) {
    nameentry_sub_002f81a0(param_1);
  }
  lVar9 = nameentry_sub_002f81b0(param_1);
  if (lVar9 != 0) {
    lVar9 = UiLayout_UpdateAnimById(10,1);
    lVar10 = UiLayout_UpdateAnimById(0xb,1);
    if (lVar9 == 0 && lVar10 == 0) {
      nameentry_sub_002f8170(param_1);
    }
  }
  lVar9 = nameentry_sub_002f86e0();
  if (lVar9 == 0) {
    UiLayout_UpdateAnimById(0xb,5);
    UiLayout_UpdateAnimById(0xb,6);
  }
  else {
    iVar7 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x9e,8);
    iVar7 = UiMgr_FindLayout(0xb);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar7 * 0x4f4 + 4,0x9f,8);
  }
  eventui_sub_002e89f0(param_1);
  iVar7 = (int)param_1;
  iVar8 = *(int *)(iVar7 + 0x3c) + *(int *)(iVar7 + 0x38) * 3 + 1;
  MenuWnd_DrawText(10,0x13,2);
  MenuWnd_DrawTextId(10,0xd,1,0x38);
  if ((iVar8 == 0) || (0x10c < iVar8)) {
    MenuWnd_DrawText(10,0xe,6);
  }
  else {
    iVar3 = script_sub_002bc130(iVar8);
    if (*(int *)(iVar3 + 4) == 0) {
      MenuWnd_DrawText(10,0xe,0x3e);
    }
    else {
      MenuWnd_DrawTextId(10,0xe,4,0x3d);
    }
  }
  MenuWnd_DrawTextId(10,0xf,1,0x3b);
  if (((iVar8 == 0) || (0x10c < iVar8)) || (*(int *)(iVar8 * 4 + iVar7 + 0x50) == 0)) {
    MenuWnd_DrawText(10,0x10,6);
    iVar3 = *(int *)(iVar7 + 0x4c);
  }
  else {
    iVar3 = script_sub_002bc130(iVar8);
    MenuWnd_DrawLabel(10,0x10,5,0,*(undefined1 *)(iVar3 + 8));
    iVar3 = *(int *)(iVar7 + 0x4c);
  }
  MenuWnd_DrawLabel(10,0x11,8,iVar3 + -1,0x10c);
  Profile_Get(0);
  iVar3 = 0;
  puVar15 = &DAT_00342c20;
  do {
    iVar14 = 0;
    puVar12 = puVar15;
    do {
      if ((*(int *)(iVar7 + 0x44) == 1) && (iVar3 == 6)) {
        iVar13 = (*(int *)(iVar7 + 0x40) + -1 + *(int *)(iVar7 + 0x34)) % *(int *)(iVar7 + 0x34);
      }
      else {
        iVar13 = (*(int *)(iVar7 + 0x40) + iVar3) % *(int *)(iVar7 + 0x34);
      }
      iVar13 = iVar14 + iVar13 * 3;
      if (iVar13 + 1 < 0x10d) {
        MenuWnd_DrawLabel(0xb,puVar12[2],0xb,0);
        if (*(int *)(iVar7 + iVar13 * 4 + 0x54) == 0) {
          iVar13 = UiMgr_FindLayout(0xb);
          UiElem_SetPropInt(*_g_UiMgr + iVar13 * 0x4f4 + 4,*puVar12,9,0);
          MenuWnd_DrawText(0xb,puVar12[3],6);
        }
        else {
          iVar4 = UiMgr_FindLayout(0xb);
          iVar1 = *_g_UiMgr;
          iVar5 = script_sub_002bc130(iVar13 + 1);
          eventui_sub_002e96a0(iVar1 + iVar4 * 0x4f4 + 4,*puVar12,9,*(undefined1 *)(iVar5 + 0xb));
          uVar11 = menuscr_sub_002f5e60(iVar13 + 1);
          MenuWnd_DrawText(0xb,puVar12[3],uVar11);
        }
      }
      else {
        iVar13 = UiMgr_FindLayout(0xb);
        UiElem_SetPropInt(*_g_UiMgr + iVar13 * 0x4f4 + 4,*puVar12,9,0);
        MenuWnd_DrawText(0xb,puVar12[2],6);
      }
      iVar14 = iVar14 + 1;
      puVar12 = puVar12 + 4;
    } while (iVar14 < 3);
    iVar3 = iVar3 + 1;
    puVar15 = puVar15 + 0xc;
  } while (iVar3 < 7);
  MenuWnd_DrawLabel(0xb,0x9c,0x35,5,0);
  MenuWnd_DrawLabel(0xb,0xa0,0x36,5,0);
  uVar2 = nameentry_sub_002f7c80(iVar7 + 0x20);
  lVar9 = nameentry_sub_002f63f0(uVar2);
  if (lVar9 != 0) {
    uVar2 = nameentry_sub_002f7c80(iVar7 + 0x20);
    lVar9 = nameentry_sub_002f6440(uVar2);
    if (lVar9 != 0) {
      iVar3 = UiMgr_FindLayout(1);
      UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x1a,0x16,0xd);
      goto LAB_002e8f80;
    }
  }
  iVar3 = UiMgr_FindLayout(1);
  UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x1a,0x16,0xc);
LAB_002e8f80:
  if ((iVar8 == 0) || (0x10c < iVar8)) {
    nameentry_sub_002f8260(0x34,2);
  }
  else {
    nameentry_sub_002f8260(0x34,3);
  }
  UiLayout_UpdateAnimById(0,0);
  iVar8 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  iVar8 = UiMgr_FindLayout(10);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar8 * 0x4f4 + 4);
  menuscr_sub_002f5e70(0xb,3,4,200,*(undefined4 *)(iVar7 + 0x34),6,*(undefined4 *)(iVar7 + 0x40));
  iVar7 = UiMgr_FindLayout(0xb);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar7 * 0x4f4 + 4);
  return;
}

// 0x002e9540  size 0x3c
void eventui_sub_002e9540(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = nameentry_sub_002f8200();
  (**(code **)(iVar1 * 4 + 0x36eed4))(param_1);
  return;
}

// 0x002e9590  size 0x104
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void eventui_sub_002e9590(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Msg_Get(0);
  iVar2 = UiMgr_FindLayout(0);
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
  iVar2 = UiMgr_FindLayout(0xb);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x9e,8);
  iVar2 = UiMgr_FindLayout(0xb);
  UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4,0x9f,8);
  return;
}

// 0x002e96a0  size 0x134
/* WARNING: Removing unreachable block (ram,0x002e9710) */
/* WARNING: Removing unreachable block (ram,0x002e9720) */
/* WARNING: Removing unreachable block (ram,0x002e9718) */
/* WARNING: Removing unreachable block (ram,0x002e9744) */

void eventui_sub_002e96a0(undefined8 param_1,undefined8 param_2,char param_3,ulong param_4)

{
  bool bVar1;
  uint *puVar2;
  float *pfVar3;
  float fVar4;
  
  switch(param_3) {
  case '\0':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case '@':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
    bVar1 = false;
    break;
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    bVar1 = true;
    break;
  default:
    bVar1 = false;
  }
  if (bVar1) {
    if ((long)param_4 < 0) {
      fVar4 = (float)(param_4 & 0xffffffff);
    }
    else {
      fVar4 = (float)(int)(uint)param_4;
    }
    pfVar3 = (float *)UiElem_GetPropPtr(param_1);
    *pfVar3 = fVar4;
  }
  else {
    puVar2 = (uint *)UiElem_GetPropPtr(param_1);
    *puVar2 = (uint)param_4 & 0xff;
  }
  if (param_3 == '\n') {
    UiElem_MarkDirty(param_1);
  }
  return;
}

// 0x002e97e0  size 0x204
void eventui_sub_002e97e0(float param_1,float *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2[1] != 0.0) || (param_3 != 0)) {
    uVar4 = (uint)((param_1 - 0.083333336) + 32.0);
    uVar3 = uVar4 & 0xf;
    if (((int)uVar4 < 0) && (uVar3 != 0)) {
      uVar3 = uVar3 - 0x10;
    }
    if (uVar3 == 0) {
      uVar5 = (uint)((*param_2 - 0.083333336) + 32.0);
      uVar3 = uVar5 & 0xf;
      if (((int)uVar5 < 0) && (uVar3 != 0)) {
        uVar3 = uVar3 - 0x10;
      }
      if (uVar3 != 0) {
        iVar1 = iRam0036f048 + (int)param_2[2] * 0x50;
        Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0x3f0ab0);
        lVar2 = Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0xc0);
        if (lVar2 == 0) {
          Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0x7f3c90);
        }
        goto LAB_002e9918;
      }
    }
    uVar3 = uVar4 & 3;
    if (((int)uVar4 < 0) && (uVar3 != 0)) {
      uVar3 = uVar3 - 4;
    }
    if (uVar3 == 0) {
      uVar4 = (uint)((*param_2 - 0.083333336) + 32.0);
      uVar3 = uVar4 & 3;
      if (((int)uVar4 < 0) && (uVar3 != 0)) {
        uVar3 = uVar3 - 4;
      }
      if (uVar3 != 0) {
        iVar1 = iRam0036f048 + (int)param_2[2] * 0x50;
        Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0x3f0ab0);
        lVar2 = Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0xc0);
        if (lVar2 == 0) {
          Midi_SendMessage(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x40),0x7f3d90);
        }
      }
    }
  }
LAB_002e9918:
  *param_2 = param_1;
  return;
}

// 0x002e99f0  size 0x13c
void eventui_sub_002e99f0(int param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xd68) < 1) {
    eventui_sub_002e9b30();
    iVar6 = 0;
    iVar5 = 0;
    iVar4 = 1;
    iVar3 = param_1;
    do {
      lVar2 = script_sub_002b8fc0(*(undefined4 *)(param_1 + 0xca4),iVar6);
      if (lVar2 != 0) {
        puVar1 = (undefined1 *)script_sub_002b8ee0(*(undefined4 *)(param_1 + 0xca4),iVar6);
        nameentry_sub_002f7ff0(param_2,iVar5,*puVar1);
        nameentry_sub_002f7ff0(param_2,iVar4,puVar1[1]);
        if (*(int *)(iVar3 + 0xd48) == 0) {
          nameentry_sub_002f7fe0(param_2,iVar5,0);
          nameentry_sub_002f7fe0(param_2,iVar4,0);
        }
        else {
          nameentry_sub_002f7fe0(param_2,iVar5,0x7f);
          nameentry_sub_002f7fe0(param_2,iVar4,0x7f);
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 2;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 8);
    *(undefined4 *)(param_1 + 0xd68) = 2;
  }
  return;
}

// 0x002e9b30  size 0x90
void eventui_sub_002e9b30(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 0xd28) != 0) {
      bVar1 = true;
      break;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 8);
  iVar2 = 0;
  do {
    if ((*(int *)(param_1 + 0xd08) != 0) || ((bVar1 && (*(int *)(param_1 + 0xd28) == 0)))) {
      *(undefined4 *)(param_1 + 0xd48) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xd48) = 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 8);
  return;
}

// 0x002e9bc0  size 0x704
void eventui_sub_002e9bc0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = nameentry_sub_002f8aa0();
  if ((uVar5 & 0x2000) == 0) {
    *(undefined4 *)(param_1 + 0xcd4) = 0;
    *(undefined4 *)(param_1 + 0xcd8) = 0;
    *(undefined4 *)(param_1 + 0xcdc) = 0;
    uVar5 = nameentry_sub_002f8aa0();
    if (((uVar5 & 0x80) == 0) &&
       ((uVar5 = nameentry_sub_002f8ab0(), (uVar5 & 4) != 0 ||
        (uVar5 = nameentry_sub_002f8ab0(), (uVar5 & 8) != 0)))) {
      *(undefined1 *)(param_1 + 0xce0) = 0;
      lVar6 = script_sub_002b8df0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                                  *(undefined4 *)(param_1 + 0xcc4));
      if (lVar6 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)*(short *)lVar6;
      }
      uVar5 = nameentry_sub_002f8ab0();
      if ((uVar5 & 4) == 0) {
        uVar5 = nameentry_sub_002f8ab0();
        if ((uVar5 & 8) != 0) {
          iVar8 = *(int *)(param_1 + 0xcc0) + 1;
          if (iVar8 < 0) {
            iVar8 = 7;
          }
          else if (7 < iVar8) {
            iVar8 = 0;
          }
          *(int *)(param_1 + 0xcc0) = iVar8;
        }
      }
      else {
        iVar8 = *(int *)(param_1 + 0xcc0) + -1;
        if (iVar8 < 0) {
          iVar8 = 7;
        }
        else if (7 < iVar8) {
          iVar8 = 0;
        }
        *(int *)(param_1 + 0xcc0) = iVar8;
      }
      Se_PlayMenuVol(7,0x60);
      psVar4 = (short *)script_sub_002b8df0(*(undefined4 *)(param_1 + 0xca4),
                                            *(undefined4 *)(param_1 + 0xcc0),0);
      if (psVar4 == (short *)0x0) {
        *(undefined4 *)(param_1 + 0xcc4) = 0xffffffff;
      }
      else {
        iVar8 = 0;
        lVar6 = 0x400;
        if (psVar4 != (short *)0x0) {
          do {
            iVar9 = *psVar4 - iVar10;
            lVar7 = abs(iVar9);
            if (lVar7 < lVar6) {
              *(int *)(param_1 + 0xcc4) = iVar8;
              lVar6 = abs(iVar9);
            }
            if (-1 < iVar9) goto LAB_002ea03c;
            psVar4 = *(short **)(psVar4 + 4);
            iVar8 = iVar8 + 1;
          } while (psVar4 != (short *)0x0);
          uVar2 = *(undefined4 *)(param_1 + 0xcc0);
          goto LAB_002ea040;
        }
      }
    }
LAB_002ea03c:
    uVar2 = *(undefined4 *)(param_1 + 0xcc0);
LAB_002ea040:
    lVar6 = script_sub_002b8dd0(*(undefined4 *)(param_1 + 0xca4),uVar2);
    if (0 < lVar6) {
      uVar5 = nameentry_sub_002f8a90();
      if ((uVar5 & 0x10) == 0) {
        uVar5 = nameentry_sub_002f8a90();
        if ((uVar5 & 0x20) != 0) {
          *(undefined1 *)(param_1 + 0xce0) = 0;
          iVar10 = *(int *)(param_1 + 0xcc4);
          iVar8 = iVar10 + 1;
          if (iVar8 < 0) {
            iVar8 = script_sub_002b8dd0(*(undefined4 *)(param_1 + 0xca4),
                                        *(undefined4 *)(param_1 + 0xcc0));
            iVar8 = iVar8 + -1;
          }
          else {
            iVar9 = script_sub_002b8dd0(*(undefined4 *)(param_1 + 0xca4),
                                        *(undefined4 *)(param_1 + 0xcc0));
            if (iVar9 + -1 < iVar8) {
              iVar8 = 0;
            }
          }
          *(int *)(param_1 + 0xcc4) = iVar8;
          if (*(int *)(param_1 + 0xcc4) != iVar10) {
            Se_PlayMenuVol(7,0x60);
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xce0) = 0;
        iVar10 = *(int *)(param_1 + 0xcc4);
        iVar8 = iVar10 + -1;
        if (iVar8 < 0) {
          iVar8 = script_sub_002b8dd0(*(undefined4 *)(param_1 + 0xca4),
                                      *(undefined4 *)(param_1 + 0xcc0));
          iVar8 = iVar8 + -1;
        }
        else {
          iVar9 = script_sub_002b8dd0(*(undefined4 *)(param_1 + 0xca4),
                                      *(undefined4 *)(param_1 + 0xcc0));
          if (iVar9 + -1 < iVar8) {
            iVar8 = 0;
          }
        }
        *(int *)(param_1 + 0xcc4) = iVar8;
        if (*(int *)(param_1 + 0xcc4) != iVar10) {
          Se_PlayMenuVol(7,0x60);
        }
      }
    }
    return;
  }
  uVar5 = nameentry_sub_002f8aa0();
  if ((uVar5 & 0x10) == 0) {
    uVar5 = nameentry_sub_002f8aa0();
    if ((uVar5 & 0x20) == 0) {
      *(undefined4 *)(param_1 + 0xcd4) = 0;
    }
    else {
      uVar5 = nameentry_sub_002f8a90();
      if ((uVar5 & 0x20) == 0) {
LAB_002e9f14:
        iVar10 = *(int *)(param_1 + 0xcd4);
      }
      else {
        *(undefined1 *)(param_1 + 0xce0) = 4;
        lVar6 = script_sub_002b8df0(*(undefined4 *)(param_1 + 0xca4),
                                    *(undefined4 *)(param_1 + 0xcc0),
                                    *(undefined4 *)(param_1 + 0xcc4));
        if (lVar6 == 0) goto LAB_002e9f14;
        psVar4 = (short *)lVar6;
        if (*(short **)(psVar4 + 4) == (short *)0x0) {
          iVar10 = 0x400;
        }
        else {
          iVar10 = (int)**(short **)(psVar4 + 4);
        }
        sVar1 = *psVar4;
        iVar9 = (int)sVar1 + *(int *)(param_1 + 0xcd4) / 0x3c + 1;
        iVar8 = iVar10 - psVar4[1];
        if (iVar9 <= iVar10 - psVar4[1]) {
          iVar8 = iVar9;
        }
        *psVar4 = (short)iVar8;
        if (*psVar4 == sVar1) {
          Se_PlayMenuVol(8,0x60);
          goto LAB_002e9f14;
        }
        Se_PlayMenuVol(7,0x60);
        iVar10 = *(int *)(param_1 + 0xcd4);
      }
      *(int *)(param_1 + 0xcd4) = iVar10 + 1;
    }
  }
  else {
    uVar5 = nameentry_sub_002f8a90();
    if ((uVar5 & 0x10) == 0) {
LAB_002e9cc8:
      iVar10 = *(int *)(param_1 + 0xcd4);
    }
    else {
      *(undefined1 *)(param_1 + 0xce0) = 4;
      lVar6 = script_sub_002b8df0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                                  *(undefined4 *)(param_1 + 0xcc4));
      if (lVar6 == 0) goto LAB_002e9cc8;
      psVar3 = (short *)lVar6;
      psVar4 = *(short **)(psVar3 + 2);
      if (psVar4 == (short *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)*psVar4 + (int)psVar4[1];
      }
      sVar1 = *psVar3;
      iVar8 = (int)sVar1 - (*(int *)(param_1 + 0xcd4) / 0x3c + 1);
      if (iVar10 <= iVar8) {
        iVar10 = iVar8;
      }
      *psVar3 = (short)iVar10;
      if (*psVar3 == sVar1) {
        Se_PlayMenuVol(8,0x60);
        goto LAB_002e9cc8;
      }
      Se_PlayMenuVol(7,0x60);
      iVar10 = *(int *)(param_1 + 0xcd4);
    }
    *(int *)(param_1 + 0xcd4) = iVar10 + 1;
  }
  uVar5 = nameentry_sub_002f8aa0();
  if ((uVar5 & 0x400) == 0) {
    uVar5 = nameentry_sub_002f8aa0();
    if ((uVar5 & 0x800) == 0) {
      *(undefined4 *)(param_1 + 0xcd8) = 0;
      *(undefined4 *)(param_1 + 0xcdc) = 0;
      goto LAB_002e9dd8;
    }
    uVar5 = nameentry_sub_002f8a90();
    if ((uVar5 & 0x800) != 0) {
      *(undefined1 *)(param_1 + 0xce0) = 5;
      lVar6 = script_sub_002b8df0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                                  *(undefined4 *)(param_1 + 0xcc4));
      if (lVar6 != 0) {
        psVar4 = (short *)lVar6;
        if (*(short **)(psVar4 + 4) == (short *)0x0) {
          iVar10 = 0x400;
        }
        else {
          iVar10 = (int)**(short **)(psVar4 + 4);
        }
        sVar1 = psVar4[1];
        iVar9 = (int)sVar1 + *(int *)(param_1 + 0xcdc) / 0x3c + 1;
        iVar8 = iVar10 - *psVar4;
        if (iVar9 <= iVar10 - *psVar4) {
          iVar8 = iVar9;
        }
        psVar4[1] = (short)iVar8;
        if (psVar4[1] != sVar1) {
          Se_PlayMenuVol(7,0x60);
          *(undefined4 *)(param_1 + 0xcd8) = 0;
          goto LAB_002e9fe8;
        }
        Se_PlayMenuVol(8,0x60);
      }
      *(undefined4 *)(param_1 + 0xcd8) = 0;
    }
LAB_002e9fe8:
    *(int *)(param_1 + 0xcdc) = *(int *)(param_1 + 0xcdc) + 1;
    goto LAB_002e9dd8;
  }
  uVar5 = nameentry_sub_002f8a90();
  if ((uVar5 & 0x400) != 0) {
    *(undefined1 *)(param_1 + 0xce0) = 5;
    lVar6 = script_sub_002b8df0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                                *(undefined4 *)(param_1 + 0xcc4));
    if (lVar6 != 0) {
      iVar10 = (int)lVar6;
      sVar1 = *(short *)(iVar10 + 2);
      iVar8 = (int)sVar1 - (*(int *)(param_1 + 0xcd8) / 0x3c + 1);
      if (iVar8 < 1) {
        iVar8 = 1;
      }
      *(short *)(iVar10 + 2) = (short)iVar8;
      if (*(short *)(iVar10 + 2) != sVar1) {
        Se_PlayMenuVol(7,0x60);
        *(undefined4 *)(param_1 + 0xcdc) = 0;
        goto LAB_002e9dac;
      }
      Se_PlayMenuVol(8,0x60);
    }
    *(undefined4 *)(param_1 + 0xcdc) = 0;
  }
LAB_002e9dac:
  *(int *)(param_1 + 0xcd8) = *(int *)(param_1 + 0xcd8) + 1;
LAB_002e9dd8:
  uVar5 = nameentry_sub_002f8ab0();
  if ((uVar5 & 0x100) == 0) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0xcc4);
  if (iVar10 < 0) {
    return;
  }
  iVar8 = script_sub_002b8dd0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
  if (iVar8 <= iVar10) {
    return;
  }
  script_sub_002bb7d0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),iVar10);
  iVar10 = *(int *)(param_1 + 0xcc4);
  iVar8 = script_sub_002b8dd0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
  if (iVar10 < iVar8) {
    return;
  }
  *(int *)(param_1 + 0xcc4) = *(int *)(param_1 + 0xcc4) + -1;
  return;
}

// 0x002ea2d0  size 0x3b8
void eventui_sub_002ea2d0(int param_1)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  
  uVar3 = nameentry_sub_002f8aa0();
  if ((uVar3 & 0x2000) == 0) {
    uVar3 = nameentry_sub_002f8a90();
    if ((uVar3 & 0x400) != 0) {
      fVar8 = *(float *)(param_1 + 0xcb4);
      *(undefined1 *)(param_1 + 0xce0) = 1;
      uVar6 = (uint)*(float *)(param_1 + 0xcb4);
      uVar2 = uVar6 & 0xf;
      if (((int)uVar6 < 0) && (uVar2 != 0)) {
        uVar2 = uVar2 - 0x10;
      }
      if (uVar2 == 0) {
        *(float *)(param_1 + 0xcb4) = *(float *)(param_1 + 0xcb4) - 16.0;
      }
      else {
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0xf;
        }
        *(float *)(param_1 + 0xcb4) = (float)(((int)uVar6 >> 4) << 4);
      }
      fVar5 = *(float *)(param_1 + 0xcb4);
      if (0.0 <= fVar5) {
        if (1024.0 < fVar5) {
          fVar5 = 1024.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      *(float *)(param_1 + 0xcb4) = fVar5;
      if (fVar8 == fVar5) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
    uVar3 = nameentry_sub_002f8a90();
    if ((uVar3 & 0x800) != 0) {
      fVar8 = *(float *)(param_1 + 0xcb4);
      *(undefined1 *)(param_1 + 0xce0) = 1;
      uVar6 = (uint)*(float *)(param_1 + 0xcb4);
      uVar2 = uVar6 & 0xf;
      if (((int)uVar6 < 0) && (uVar2 != 0)) {
        uVar2 = uVar2 - 0x10;
      }
      if (uVar2 == 0) {
        *(float *)(param_1 + 0xcb4) = *(float *)(param_1 + 0xcb4) + 16.0;
      }
      else {
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0xf;
        }
        *(float *)(param_1 + 0xcb4) = (float)(((int)uVar6 >> 4) * 0x10 + 0x10);
      }
      fVar5 = *(float *)(param_1 + 0xcb4);
      if (0.0 <= fVar5) {
        if (1024.0 < fVar5) {
          fVar5 = 1024.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      *(float *)(param_1 + 0xcb4) = fVar5;
      if (fVar8 == fVar5) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
  }
  else {
    uVar3 = nameentry_sub_002f8a90();
    if ((uVar3 & 0x100000) == 0) {
      uVar3 = nameentry_sub_002f8a90();
      if ((uVar3 & 0x200000) != 0) {
        *(undefined1 *)(param_1 + 0xce0) = 2;
        sVar1 = script_sub_002b8f30(*(undefined4 *)(param_1 + 0xca4));
        lVar4 = script_sub_002b9390(*(undefined4 *)(param_1 + 0xca4),sVar1 + 0x10);
        if (lVar4 == 0) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xce0) = 2;
      sVar1 = script_sub_002b8f30(*(undefined4 *)(param_1 + 0xca4));
      lVar4 = script_sub_002b9390(*(undefined4 *)(param_1 + 0xca4),sVar1 + -0x10);
      if (lVar4 == 0) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
    uVar3 = nameentry_sub_002f8a90();
    if ((uVar3 & 0x10000) == 0) {
      uVar3 = nameentry_sub_002f8a90();
      if ((uVar3 & 0x20000) != 0) {
        *(undefined1 *)(param_1 + 0xce0) = 3;
        sVar1 = script_sub_002b8f20(*(undefined4 *)(param_1 + 0xca4));
        lVar4 = script_sub_002b9340(*(undefined4 *)(param_1 + 0xca4),sVar1 + 0x10);
        if (lVar4 != 0) {
          Se_PlayMenuVol(7,0x60);
          uVar7 = *(undefined4 *)(param_1 + 0xcb4);
          goto LAB_002ea570;
        }
        Se_PlayMenuVol(8,0x60);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xce0) = 3;
      sVar1 = script_sub_002b8f20(*(undefined4 *)(param_1 + 0xca4));
      lVar4 = script_sub_002b9340(*(undefined4 *)(param_1 + 0xca4),sVar1 + -0x10);
      if (lVar4 == 0) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
  }
  uVar7 = *(undefined4 *)(param_1 + 0xcb4);
LAB_002ea570:
  *(undefined4 *)(param_1 + 0xcb8) = uVar7;
  return;
}

// 0x002ea690  size 0x124
void eventui_sub_002ea690(int param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  nameentry_sub_002f6190(param_1 + 0xd74,0,1,1,0);
  uVar3 = nameentry_sub_002f8ab0();
  if ((uVar3 & 0x180) == 0) {
    uVar3 = nameentry_sub_002f8ab0();
    if ((uVar3 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      lVar2 = nameentry_sub_002f8210(param_1 + 0xc44);
      if (lVar2 == 7) {
        nameentry_sub_002f8220(param_1 + 0xc44);
      }
      else {
        nameentry_sub_002f8220(param_1 + 0xc44,0xe);
      }
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      nameentry_sub_002f8580(0);
    }
    else {
      pcVar1 = (char *)script_sub_002b8ed0(*(undefined4 *)(param_1 + 0xca4));
      if (*pcVar1 == '\0') {
        nameentry_sub_002f8220(param_1 + 0xc44,0xb);
      }
      else {
        nameentry_sub_002f8220(param_1 + 0xc44,7);
      }
    }
  }
  return;
}

// 0x002ea7c0  size 0x100
void eventui_sub_002ea7c0(int param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 0;
  }
  nameentry_sub_002f6190(param_1 + 0xd74,0,1,1,0);
  uVar3 = nameentry_sub_002f8ab0();
  if ((uVar3 & 0x180) == 0) {
    uVar3 = nameentry_sub_002f8ab0();
    if ((uVar3 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      nameentry_sub_002f8220(param_1 + 0xc44,0xd);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      pcVar1 = (char *)script_sub_002b8ed0(*(undefined4 *)(param_1 + 0xca4));
      if (*pcVar1 == '\0') {
        nameentry_sub_002f8220(param_1 + 0xc44,0xb);
      }
      else {
        nameentry_sub_002f8220(param_1 + 0xc44,7);
      }
    }
    else {
      nameentry_sub_002f8220(param_1 + 0xc44,0xf);
    }
  }
  return;
}

// 0x002ea8c0  size 0x194
void eventui_sub_002ea8c0(int param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if ((lVar3 != 0) && (lVar3 = nameentry_sub_002f8210(param_1 + 0xc44), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(param_1 + 0xcb4);
  }
  nameentry_sub_002f6190(param_1 + 0xd6c,0,2,1,0);
  uVar4 = nameentry_sub_002f8ab0();
  if ((uVar4 & 0x180) == 0) {
    uVar4 = nameentry_sub_002f8ab0();
    if ((uVar4 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      nameentry_sub_002f8220(param_1 + 0xc44,0);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    iVar1 = *(int *)(param_1 + 0xd6c);
    if (iVar1 == 2) {
      pcVar2 = (char *)script_sub_002b8ed0(*(undefined4 *)(param_1 + 0xca4));
      if (((*pcVar2 == '\0') &&
          (lVar3 = script_sub_002bb6f0(*(undefined4 *)(param_1 + 0xca4)), lVar3 == 0)) &&
         (lVar3 = script_sub_002bb6a0(*(undefined4 *)(param_1 + 0xca4)), lVar3 == 0)) {
        nameentry_sub_002f8580(0);
      }
      else {
        nameentry_sub_002f8220(param_1 + 0xc44,0xe);
      }
    }
    else if (iVar1 == 1) {
      nameentry_sub_002f8220(param_1 + 0xc44,4);
    }
    else if (iVar1 == 0) {
      pcVar2 = (char *)script_sub_002b8ed0(*(undefined4 *)(param_1 + 0xca4));
      if (*pcVar2 == '\0') {
        nameentry_sub_002f8220(param_1 + 0xc44,0xb);
      }
      else {
        nameentry_sub_002f8220(param_1 + 0xc44,7);
      }
    }
  }
  return;
}

// 0x002eaa60  size 0xe8
void eventui_sub_002eaa60(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  nameentry_sub_002f6190(param_1 + 0xd74,0,1,1,0);
  uVar2 = nameentry_sub_002f8ab0();
  if ((uVar2 & 0x180) == 0) {
    uVar2 = nameentry_sub_002f8ab0();
    if ((uVar2 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      nameentry_sub_002f8220(param_1 + 0xc44,0xb);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      script_sub_002b92b0(*(undefined4 *)(param_1 + 0xca4),param_1 + 0xc70);
      nameentry_sub_002f8220(param_1 + 0xc44,7);
    }
    else {
      nameentry_sub_002f8220(param_1 + 0xc44,0xb);
    }
  }
  return;
}

// 0x002eab50  size 0x164
void eventui_sub_002eab50(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  
  lVar1 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if ((lVar1 != 0) && (lVar1 = nameentry_sub_002f8210(param_1 + 0xc44), lVar1 != 0xc)) {
    uVar2 = script_sub_002b8ed0(*(undefined4 *)(param_1 + 0xca4));
    nameentry_sub_002f7430(param_1 + 0xc64,uVar2);
  }
  uVar3 = nameentry_sub_002f8ab0();
  if ((uVar3 & 0x180) == 0) {
    uVar3 = nameentry_sub_002f8ab0();
    if ((uVar3 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
  }
  lVar1 = nameentry_sub_002f7190(param_1 + 0xc64);
  if (lVar1 == 2) {
    uVar2 = nameentry_sub_002f8210(param_1 + 0xc44);
    nameentry_sub_002f8220(param_1 + 0xc44,uVar2);
  }
  else if (lVar1 == 1) {
    iVar4 = 0xc;
    do {
      lVar1 = script_sub_002bc1a0(iVar4);
      if (lVar1 != 0) {
        uVar2 = script_sub_002b8e60(*(undefined4 *)(param_1 + 0xca4),iVar4);
        lVar1 = newlib_sub_0012b0d8(param_1 + 0xc70,uVar2);
        if (lVar1 == 0) {
          nameentry_sub_002f8220(param_1 + 0xc44,0xc);
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1e);
    script_sub_002b92b0(*(undefined4 *)(param_1 + 0xca4),param_1 + 0xc70);
    nameentry_sub_002f8220(param_1 + 0xc44,7);
  }
  return;
}

// 0x002eacc0  size 0xbc
void eventui_sub_002eacc0(int param_1)

{
  ulong uVar1;
  
  uVar1 = nameentry_sub_002f8ab0();
  if ((uVar1 & 0x180) == 0) {
    uVar1 = nameentry_sub_002f8ab0();
    if ((uVar1 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      if (*(int *)(param_1 + 0xd6c) == 0) {
        nameentry_sub_002f8220(param_1 + 0xc44,0xd);
      }
      else {
        nameentry_sub_002f8580(0);
      }
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd6c) == 0) {
      nameentry_sub_002f8220(param_1 + 0xc44,0xd);
    }
    else {
      nameentry_sub_002f8580(0);
    }
  }
  return;
}

// 0x002ead80  size 0xe8
void eventui_sub_002ead80(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  nameentry_sub_002f6190(param_1 + 0xd74,0,1,1,0);
  uVar2 = nameentry_sub_002f8ab0();
  if ((uVar2 & 0x180) == 0) {
    uVar2 = nameentry_sub_002f8ab0();
    if ((uVar2 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      nameentry_sub_002f8220(param_1 + 0xc44,7);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      script_sub_002b9a00(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd80));
      nameentry_sub_002f8220(param_1 + 0xc44,10);
    }
    else {
      nameentry_sub_002f8220(param_1 + 0xc44,7);
    }
  }
  return;
}

// 0x002eae70  size 0xe8
void eventui_sub_002eae70(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  nameentry_sub_002f6190(param_1 + 0xd74,0,1,1,0);
  uVar2 = nameentry_sub_002f8ab0();
  if ((uVar2 & 0x180) == 0) {
    uVar2 = nameentry_sub_002f8ab0();
    if ((uVar2 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      nameentry_sub_002f8220(param_1 + 0xc44,7);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      script_sub_002b9a00(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd80));
      nameentry_sub_002f8220(param_1 + 0xc44,10);
    }
    else {
      nameentry_sub_002f8220(param_1 + 0xc44,7);
    }
  }
  return;
}

// 0x002eaf60  size 0x1e4
void eventui_sub_002eaf60(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (((lVar3 != 0) && (lVar3 = nameentry_sub_002f8210(param_1 + 0xc44), lVar3 != 8)) &&
     (lVar3 = nameentry_sub_002f8210(param_1 + 0xc44), lVar3 != 9)) {
    if (*(int *)(param_1 + 0xcd0) < 0xc) {
      *(undefined4 *)(param_1 + 0xd70) = 0;
    }
    else {
      *(int *)(param_1 + 0xd70) = *(int *)(param_1 + 0xcd0) + -0xc;
    }
    *(undefined4 *)(param_1 + 0xd78) = *(undefined4 *)(param_1 + 0xd70);
  }
  nameentry_sub_002f6190(param_1 + 0xd70,0,0x11,1,0);
  iVar1 = *(int *)(param_1 + 0xd70);
  iVar2 = *(int *)(param_1 + 0xd78);
  if ((iVar1 + 1) % 0x12 == iVar2) {
    *(int *)(param_1 + 0xd78) = iVar1;
    *(undefined4 *)(param_1 + 0xd7c) = 2;
  }
  else if ((iVar2 + 0xc) % 0x12 == iVar1) {
    *(int *)(param_1 + 0xd78) = (iVar2 + 1) % 0x12;
    *(undefined4 *)(param_1 + 0xd7c) = 1;
  }
  uVar4 = nameentry_sub_002f8ab0();
  if ((uVar4 & 0x180) == 0) {
    uVar4 = nameentry_sub_002f8ab0();
    if ((uVar4 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      if (*(int *)(param_1 + 0xd6c) == 0) {
        nameentry_sub_002f8220(param_1 + 0xc44,0xd);
      }
      else {
        nameentry_sub_002f8220(param_1 + 0xc44,0xf);
      }
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    *(int *)(param_1 + 0xd80) = *(int *)(param_1 + 0xd70) + 0xc;
    lVar3 = script_sub_002bc1a0(*(undefined4 *)(param_1 + 0xd80));
    if (lVar3 == 0) {
      script_sub_002b9a00(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd80));
      nameentry_sub_002f8220(param_1 + 0xc44,10);
    }
    else if (*(int *)(*(int *)(param_1 + 0xd80) * 4 + param_1 + 0xd84) == 0) {
      nameentry_sub_002f8220(param_1 + 0xc44,8);
    }
    else {
      nameentry_sub_002f8220(param_1 + 0xc44,9);
    }
  }
  return;
}

// 0x002eb150  size 0x184
void eventui_sub_002eb150(int param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar1 != 0) {
    nameentry_sub_002f7d20(param_1 + 0xc80);
    nameentry_sub_002f7d20(param_1 + 0xc8c);
    *(undefined4 *)(param_1 + 0xcd0) = *(undefined4 *)(param_1 + 0xd70);
    *(undefined4 *)(param_1 + 0xcb4) = 0;
    *(undefined4 *)(param_1 + 0xcbc) = 0;
    *(undefined4 *)(param_1 + 0xcb8) = *(undefined4 *)(param_1 + 0xcb4);
    *(undefined4 *)(param_1 + 0xcc0) = 0;
    *(undefined4 *)(param_1 + 0xcc4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xce0) = 1;
    Mem_Set16(param_1 + 0xd08,0,0x20);
    Mem_Set16(param_1 + 0xd28,0,0x20);
  }
  lVar1 = nameentry_sub_002f81c0(param_1 + 0xc44);
  if ((lVar1 == 0) &&
     (lVar1 = script_sub_002b9080(*(undefined4 *)(param_1 + 0xca4),0xffffffffffffffff), lVar1 == 0))
  {
    iVar7 = 0;
    iVar5 = param_1;
    do {
      *(undefined4 *)(iVar5 + 0xce8) = 0;
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x1230)) {
        iVar4 = param_1;
        do {
          uVar2 = script_sub_002bc110(*(undefined4 *)(iVar4 + 0xdfc));
          uVar3 = script_sub_002b8e40(*(undefined4 *)(param_1 + 0xca4),iVar7);
          if ((uVar2 & 0xffff) == uVar3) {
            *(undefined4 *)(iVar5 + 0xce8) = *(undefined4 *)(param_1 + iVar6 * 4 + 0xdfc);
            break;
          }
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar6 < *(int *)(param_1 + 0x1230));
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar7 < 8);
    *(undefined4 *)(param_1 + 0xcb4) = 0;
    nameentry_sub_002f8220(param_1 + 0xc44,0);
  }
  return;
}

// 0x002eb2e0  size 0xf8
void eventui_sub_002eb2e0(int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd74) = 1;
  }
  nameentry_sub_002f6190(param_1 + 0xd74,0,1,1,0);
  uVar2 = nameentry_sub_002f8ab0();
  if ((uVar2 & 0x180) == 0) {
    uVar2 = nameentry_sub_002f8ab0();
    if ((uVar2 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      uVar3 = nameentry_sub_002f8210(param_1 + 0xc44);
      nameentry_sub_002f8220(param_1 + 0xc44,uVar3);
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    if (*(int *)(param_1 + 0xd74) == 0) {
      script_sub_002b97c0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd70));
      nameentry_sub_002f8220(param_1 + 0xc44,6);
    }
    else {
      uVar3 = nameentry_sub_002f8210(param_1 + 0xc44);
      nameentry_sub_002f8220(param_1 + 0xc44,uVar3);
    }
  }
  return;
}

// 0x002eb3e0  size 0x18c
void eventui_sub_002eb3e0(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if ((lVar3 != 0) && (lVar3 = nameentry_sub_002f8210(param_1 + 0xc44), lVar3 != 5)) {
    *(undefined4 *)(param_1 + 0xd70) = 0;
    *(undefined4 *)(param_1 + 0xd78) = 0;
  }
  nameentry_sub_002f6190(param_1 + 0xd70,0,0x1d,1,0);
  iVar1 = *(int *)(param_1 + 0xd70);
  iVar2 = *(int *)(param_1 + 0xd78);
  if ((iVar1 + 1) % 0x1e == iVar2) {
    *(int *)(param_1 + 0xd78) = iVar1;
    *(undefined4 *)(param_1 + 0xd7c) = 2;
  }
  else if ((iVar2 + 0xc) % 0x1e == iVar1) {
    *(int *)(param_1 + 0xd78) = (iVar2 + 1) % 0x1e;
    *(undefined4 *)(param_1 + 0xd7c) = 1;
  }
  uVar4 = nameentry_sub_002f8ab0();
  if ((uVar4 & 0x180) == 0) {
    uVar4 = nameentry_sub_002f8ab0();
    if ((uVar4 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      lVar3 = nameentry_sub_002f8210(param_1 + 0xc44);
      if (lVar3 < 1) {
        nameentry_sub_002f8580(0);
      }
      else {
        nameentry_sub_002f8220(param_1 + 0xc44,0xd);
      }
    }
  }
  else {
    Se_PlayMenuVol(5,0x60);
    lVar3 = script_sub_002bb6f0(*(undefined4 *)(param_1 + 0xca4));
    if ((lVar3 == 0) && (lVar3 = script_sub_002bb6a0(*(undefined4 *)(param_1 + 0xca4)), lVar3 == 0))
    {
      script_sub_002b97c0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xd70));
      nameentry_sub_002f8220(param_1 + 0xc44,6);
    }
    else {
      nameentry_sub_002f8220(param_1 + 0xc44,5);
    }
  }
  return;
}

// 0x002eb570  size 0xa4
void eventui_sub_002eb570(int param_1)

{
  long lVar1;
  
  lVar1 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar1 != 0) {
    *(uint *)(param_1 + 0xccc) = *(uint *)(param_1 + 0xccc) & 0xfffffeff;
  }
  if ((*(uint *)(param_1 + 0xccc) & 0x100) == 0) {
    lVar1 = script_sub_002b9080(*(undefined4 *)(param_1 + 0xca4),0xffffffffffffffff);
    if (lVar1 == 0) {
      script_sub_002bb4c0(*(undefined4 *)(param_1 + 0xca4));
      *(uint *)(param_1 + 0xccc) = *(uint *)(param_1 + 0xccc) | 0x100;
    }
  }
  else {
    lVar1 = script_sub_002bb460(*(undefined4 *)(param_1 + 0xca4));
    if (lVar1 != 0) {
      nameentry_sub_002f8220(param_1 + 0xc44,1);
    }
  }
  return;
}

// 0x002eb620  size 0x550
void eventui_sub_002eb620(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  
  lVar5 = nameentry_sub_002f81e0(param_1 + 0xc44);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x1238) = 0;
    *(undefined4 *)(param_1 + 0x123c) = 0;
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x1230)) {
      iVar11 = param_1;
      do {
        uVar6 = script_sub_002bc110(*(undefined4 *)(iVar11 + 0xdfc));
        uVar7 = script_sub_002b8e40(*(undefined4 *)(param_1 + 0xca4),
                                    *(undefined4 *)(param_1 + 0xcc0));
        if ((uVar6 & 0xffff) == uVar7) {
          *(int *)(param_1 + 0x1238) = iVar10 / 3;
          *(int *)(param_1 + 0x123c) = iVar10 % 3;
          break;
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar10 < *(int *)(param_1 + 0x1230));
    }
    *(undefined4 *)(param_1 + 0x1240) = *(undefined4 *)(param_1 + 0x1238);
    nameentry_sub_002f7d20(param_1 + 0xc8c);
    uVar4 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
    *(undefined1 *)(param_1 + 0x1244) = uVar4;
    uVar4 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0));
    *(undefined1 *)(param_1 + 0x1245) = uVar4;
    *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(param_1 + 0xcb4);
  }
  iVar10 = *(int *)(param_1 + 0x123c) + *(int *)(param_1 + 0x1238) * 3;
  uVar6 = nameentry_sub_002f8aa0();
  if ((uVar6 & 0x2000) == 0) {
    uVar6 = nameentry_sub_002f8aa0();
    if ((uVar6 & 0x80) == 0) {
      uVar6 = nameentry_sub_002f8a90();
      if ((uVar6 & 0x400) == 0) {
        uVar6 = nameentry_sub_002f8a90();
        if ((uVar6 & 0x800) == 0) {
          nameentry_sub_002f6190(param_1 + 0x123c,1,2,1,0);
          nameentry_sub_002f6190(param_1 + 0x1238,0,*(int *)(param_1 + 0x1234) + -1,1,0);
          iVar11 = *(int *)(param_1 + 0x1238);
          iVar1 = *(int *)(param_1 + 0x1234);
          iVar2 = *(int *)(param_1 + 0x1240);
          if (iVar2 == (iVar11 + 1) % iVar1) {
            *(int *)(param_1 + 0x1240) = iVar11;
            *(undefined4 *)(param_1 + 0xd7c) = 2;
          }
          else if (iVar11 == (iVar2 + 6) % iVar1) {
            *(int *)(param_1 + 0x1240) = (iVar2 + 1) % iVar1;
            *(undefined4 *)(param_1 + 0xd7c) = 1;
          }
        }
        else {
          *(int *)(param_1 + 0x1240) = (*(int *)(param_1 + 0x1240) + 6) % *(int *)(param_1 + 0x1234)
          ;
          *(int *)(param_1 + 0x1238) = (*(int *)(param_1 + 0x1238) + 6) % *(int *)(param_1 + 0x1234)
          ;
          Se_PlayMenuVol(7,0x60);
        }
      }
      else {
        *(int *)(param_1 + 0x1240) =
             (*(int *)(param_1 + 0x1240) + -6 + *(int *)(param_1 + 0x1234)) %
             *(int *)(param_1 + 0x1234);
        *(int *)(param_1 + 0x1238) =
             (*(int *)(param_1 + 0x1238) + -6 + *(int *)(param_1 + 0x1234)) %
             *(int *)(param_1 + 0x1234);
        Se_PlayMenuVol(7,0x60);
      }
    }
    else if (iVar10 < *(int *)(param_1 + 0x1230)) {
      uVar8 = script_sub_002b8f40(*(undefined4 *)(param_1 + 0xca4));
      uVar9 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0))
      ;
      nameentry_sub_002f7d80(param_1 + 0xc8c,0,uVar8,uVar9);
    }
    else {
      uVar6 = nameentry_sub_002f8ab0();
      if ((uVar6 & 0x80) != 0) {
        Se_PlayMenuVol(8,0x60);
      }
    }
  }
  else {
    uVar6 = nameentry_sub_002f8ab0();
    if ((uVar6 & 0x80) != 0) {
      if (iVar10 < *(int *)(param_1 + 0x1230)) {
        Se_PlayMenuVol(5,0x60);
        iVar11 = iVar10 * 4 + param_1;
        script_sub_002bbfc0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                            *(undefined4 *)(iVar11 + 0xdfc));
        *(undefined4 *)(*(int *)(param_1 + 0xcc0) * 4 + param_1 + 0xce8) =
             *(undefined4 *)(iVar11 + 0xdfc);
        nameentry_sub_002f8220(param_1 + 0xc44,0);
      }
      else {
        Se_PlayMenuVol(8,0x60);
      }
    }
    uVar6 = nameentry_sub_002f8a90();
    if ((uVar6 & 4) == 0) {
      uVar6 = nameentry_sub_002f8a90();
      if ((uVar6 & 8) != 0) {
        cVar3 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),
                                    *(undefined4 *)(param_1 + 0xcc0));
        lVar5 = script_sub_002b92f0(*(undefined4 *)(param_1 + 0xca4),
                                    *(undefined4 *)(param_1 + 0xcc0),cVar3 + -1);
        if (lVar5 == 0) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
          uVar4 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),
                                      *(undefined4 *)(param_1 + 0xcc0));
          *(undefined1 *)(param_1 + 0x1245) = uVar4;
          uVar6 = nameentry_sub_002f8aa0();
          if (((uVar6 & 0x80) != 0) && (iVar10 < 0x10d)) {
            uVar8 = script_sub_002b8f40(*(undefined4 *)(param_1 + 0xca4));
            uVar9 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),
                                        *(undefined4 *)(param_1 + 0xcc0));
            nameentry_sub_002f7d80(param_1 + 0xc8c,0,uVar8,uVar9);
          }
        }
      }
    }
    else {
      cVar3 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0))
      ;
      lVar5 = script_sub_002b92f0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                                  cVar3 + '\x01');
      if (lVar5 == 0) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
        uVar4 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),
                                    *(undefined4 *)(param_1 + 0xcc0));
        *(undefined1 *)(param_1 + 0x1245) = uVar4;
        uVar6 = nameentry_sub_002f8aa0();
        if (((uVar6 & 0x80) != 0) && (iVar10 < 0x10d)) {
          uVar8 = script_sub_002b8f40(*(undefined4 *)(param_1 + 0xca4));
          uVar9 = script_sub_002b8f00(*(undefined4 *)(param_1 + 0xca4),
                                      *(undefined4 *)(param_1 + 0xcc0));
          nameentry_sub_002f7d80(param_1 + 0xc8c,0,uVar8,uVar9);
        }
      }
    }
  }
  uVar6 = nameentry_sub_002f8aa0();
  if ((uVar6 & 0x80) == 0) {
    nameentry_sub_002f7f80(param_1 + 0xc8c);
    uVar6 = nameentry_sub_002f8ab0();
    if ((uVar6 & 0x240) != 0) {
      Se_PlayMenuVol(6,0x60);
      script_sub_002b92f0(*(undefined4 *)(param_1 + 0xca4),*(undefined4 *)(param_1 + 0xcc0),
                          *(undefined1 *)(param_1 + 0x1244));
      nameentry_sub_002f8220(param_1 + 0xc44,0);
    }
  }
  nameentry_sub_002f6990(param_1 + 0xc8c,*(undefined4 *)(iVar10 * 4 + param_1 + 0xdfc));
  return;
}

// 0x002ebb70  size 0x9d4
void eventui_sub_002ebb70(undefined8 param_1)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  
  iVar8 = (int)param_1;
  lVar5 = nameentry_sub_002f81e0(iVar8 + 0xc44);
  if (lVar5 != 0) {
    *(undefined4 *)(iVar8 + 0xcbc) = *(undefined4 *)(iVar8 + 0xcb4);
    sVar2 = script_sub_002b8f20(*(undefined4 *)(iVar8 + 0xca4));
    if (sVar2 <= (short)(int)*(float *)(iVar8 + 0xcb4)) {
      *(undefined4 *)(iVar8 + 0xcb4) = 0;
    }
    if ((*(uint *)(iVar8 + 0xccc) & 4) == 0) {
      fVar9 = 0.0;
      fVar10 = *(float *)(iVar8 + 0xcb4);
    }
    else {
      fVar9 = 16.0;
      fVar10 = *(float *)(iVar8 + 0xcb4);
    }
    *(float *)(iVar8 + 0xcb8) = fVar10 - fVar9;
    *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 1;
    *(undefined1 *)(iVar8 + 0xce0) = 1;
    *(undefined4 *)(iVar8 + 0xc98) = 0x41700000;
  }
  uVar6 = nameentry_sub_002f8aa0();
  if ((uVar6 & 0x80) == 0) {
    *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 0xffffff7f;
  }
  if ((*(uint *)(iVar8 + 0xccc) & 0x20) == 0) {
    lVar5 = nameentry_sub_002f7cf0(iVar8 + 0xc80);
    if (lVar5 == 0) {
      nameentry_sub_002f64e0(iVar8 + 0xc80);
    }
    else {
      lVar5 = nameentry_sub_002f7c90(iVar8 + 0xc80);
      if (lVar5 != 0) {
        nameentry_sub_002f66f0(iVar8 + 0xc8c,*(undefined4 *)(iVar8 + 0xcc0));
      }
    }
    lVar5 = nameentry_sub_002f7c90(iVar8 + 0xc8c);
    if ((lVar5 != 0) && (lVar5 = nameentry_sub_002f7c90(iVar8 + 0xc80), lVar5 != 0)) {
      *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 0x20;
    }
  }
  else {
    uVar6 = nameentry_sub_002f8ab0();
    if ((uVar6 & 0x100) != 0) {
      *(uint *)(iVar8 + 0xc9c) = *(int *)(iVar8 + 0xc9c) != 0 ^ 1;
    }
    eventui_sub_002e97e0(iVar8 + 0xc98,*(float *)(iVar8 + 0xcb8) < *(float *)(iVar8 + 0xcb4));
    if (0.0 <= *(float *)(iVar8 + 0xcb8)) {
      fVar9 = (*(float *)(iVar8 + 0xcb8) * 480.0) / 4.0;
      if (fVar9 < 2.1474836e+09) {
        uVar11 = (uint)fVar9;
      }
      else {
        uVar11 = (int)(fVar9 - 2.1474836e+09) | 0x80000000;
      }
      nameentry_sub_002f7d80(iVar8 + 0xc80,uVar11,0xffffffffffffffff,0xffffffffffffffff);
      if ((*(uint *)(iVar8 + 0xccc) & 0x200) == 0) {
        eventui_sub_002e99f0(param_1,iVar8 + 0xc80);
        *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 0x200;
      }
    }
    fVar9 = *(float *)(iVar8 + 0xcb8);
    if (iRam0036f2cc == 1) {
      iVar4 = script_sub_002b8f40(*(undefined4 *)(iVar8 + 0xca4));
      fVar10 = (((float)iVar4 * 4.0) / 60.0) / 60.0;
      iVar4 = script_sub_002b8f40(*(undefined4 *)(iVar8 + 0xca4));
      *(float *)(iVar8 + 0xcb8) =
           (fVar10 + ((float)iVar4 * 0.000122) / 80.0) * 1.2 + *(float *)(iVar8 + 0xcb8) + 0.0;
    }
    else {
      iVar4 = script_sub_002b8f40(*(undefined4 *)(iVar8 + 0xca4));
      fVar10 = (((float)iVar4 * 4.0) / 60.0) / 60.0;
      iVar4 = script_sub_002b8f40(*(undefined4 *)(iVar8 + 0xca4));
      *(float *)(iVar8 + 0xcb8) =
           *(float *)(iVar8 + 0xcb8) + fVar10 + ((float)iVar4 * 0.000122) / 80.0;
    }
    if ((fVar9 < 0.0) && (0.0 < *(float *)(iVar8 + 0xcb8))) {
      *(undefined4 *)(iVar8 + 0xcb8) = 0;
    }
    if (((*(uint *)(iVar8 + 0xccc) & 4) == 0) ||
       (*(float *)(iVar8 + 0xcb4) <= *(float *)(iVar8 + 0xcb8))) {
      *(undefined4 *)(iVar8 + 0xcb4) = *(undefined4 *)(iVar8 + 0xcb8);
    }
    if ((*(uint *)(iVar8 + 0xccc) & 0x40) == 0) {
      nameentry_sub_002f7f80(iVar8 + 0xc8c);
      uVar6 = nameentry_sub_002f8ab0();
      if (((uVar6 & 4) != 0) || (uVar6 = nameentry_sub_002f8ab0(), (uVar6 & 8) != 0)) {
        sVar2 = script_sub_002b8f40(*(undefined4 *)(iVar8 + 0xca4));
        sVar3 = script_sub_002b8f20(*(undefined4 *)(iVar8 + 0xca4));
        if (*(float *)(iVar8 + 0xcb4) < (float)((int)sVar3 - (sVar2 * 5) / 100)) {
          uVar1 = nameentry_sub_002f7c80(iVar8 + 0xc8c);
          lVar5 = nameentry_sub_002f63f0(uVar1);
          if (lVar5 != 0) {
            uVar1 = nameentry_sub_002f7c80(iVar8 + 0xc8c);
            lVar5 = nameentry_sub_002f6440(uVar1);
            if (lVar5 != 0) {
              uVar6 = nameentry_sub_002f8ab0();
              if ((uVar6 & 4) == 0) {
                uVar6 = nameentry_sub_002f8ab0();
                if ((uVar6 & 8) != 0) {
                  iVar4 = *(int *)(iVar8 + 0xcc0) + 1;
                  if (iVar4 < 0) {
                    iVar4 = 7;
                  }
                  else if (7 < iVar4) {
                    iVar4 = 0;
                  }
                  *(int *)(iVar8 + 0xcc0) = iVar4;
                }
              }
              else {
                iVar4 = *(int *)(iVar8 + 0xcc0) + -1;
                if (iVar4 < 0) {
                  iVar4 = 7;
                }
                else if (7 < iVar4) {
                  iVar4 = 0;
                }
                *(int *)(iVar8 + 0xcc0) = iVar4;
              }
              *(undefined4 *)(iVar8 + 0xcc4) = 0xffffffff;
            }
          }
        }
      }
      uVar6 = nameentry_sub_002f8ab0();
      if ((uVar6 & 0x4000) == 0) {
        uVar6 = nameentry_sub_002f8ab0();
        if ((((uVar6 & 0x8000) != 0) && (lVar5 = nameentry_sub_002f7c90(iVar8 + 0xc8c), lVar5 != 0))
           && (*(int *)(iVar8 + 0xd68) < 1)) {
          iVar4 = *(int *)(iVar8 + 0xcc0) * 4 + iVar8;
          *(uint *)(iVar4 + 0xd28) = *(int *)(iVar4 + 0xd28) != 0 ^ 1;
          eventui_sub_002e99f0(param_1,iVar8 + 0xc80);
        }
      }
      else {
        lVar5 = nameentry_sub_002f7c90(iVar8 + 0xc8c);
        if ((lVar5 != 0) && (*(int *)(iVar8 + 0xd68) < 1)) {
          iVar4 = *(int *)(iVar8 + 0xcc0) * 4 + iVar8;
          *(uint *)(iVar4 + 0xd08) = *(int *)(iVar4 + 0xd08) != 0 ^ 1;
          eventui_sub_002e99f0(param_1,iVar8 + 0xc80);
        }
      }
      uVar6 = nameentry_sub_002f8aa0();
      if ((uVar6 & 0x80) != 0) {
        sVar2 = (short)(int)(*(float *)(iVar8 + 0xcb4) + 0.5);
        lVar5 = script_sub_002b8f50(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                                    sVar2);
        if (((lVar5 == 0) &&
            (sVar3 = script_sub_002b8f20(*(undefined4 *)(iVar8 + 0xca4)), sVar2 < sVar3)) &&
           (((*(uint *)(iVar8 + 0xccc) & 0x80) == 0 &&
            (((((*(uint *)(iVar8 + 0xccc) & 4) == 0 ||
               (*(float *)(iVar8 + 0xcb4) <= *(float *)(iVar8 + 0xcb8))) &&
              (lVar5 = nameentry_sub_002f7c90(iVar8 + 0xc8c), lVar5 != 0)) &&
             (lVar5 = script_sub_002b8dd0(*(undefined4 *)(iVar8 + 0xca4),
                                          *(undefined4 *)(iVar8 + 0xcc0)), lVar5 < 0x100)))))) {
          *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 0x40;
          *(short *)(iVar8 + 0xca8) = sVar2;
        }
      }
    }
    else {
      uVar7 = script_sub_002b8f40(*(undefined4 *)(iVar8 + 0xca4));
      nameentry_sub_002f7d80(iVar8 + 0xc8c,0,uVar7,0xffffffffffffffff);
      uVar6 = nameentry_sub_002f8aa0();
      if ((uVar6 & 0x80) == 0) {
        iVar4 = (int)(short)(int)(*(float *)(iVar8 + 0xcb4) + 0.5) - (int)*(short *)(iVar8 + 0xca8);
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        *(short *)(iVar8 + 0xcaa) = (short)iVar4;
        script_sub_002bb7f0(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                            *(undefined2 *)(iVar8 + 0xca8),*(undefined2 *)(iVar8 + 0xcaa));
        *(undefined2 *)(iVar8 + 0xcaa) = 0;
        *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 0xffffffbf;
      }
      else {
        *(short *)(iVar8 + 0xcaa) =
             (short)(int)(*(float *)(iVar8 + 0xcb4) - (float)(int)*(short *)(iVar8 + 0xca8));
        lVar5 = script_sub_002b8f50(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                                    (short)(int)*(float *)(iVar8 + 0xcb4));
        if (lVar5 == 0) {
          iVar4 = script_sub_002b8f20(*(undefined4 *)(iVar8 + 0xca4));
          if ((float)iVar4 <= *(float *)(iVar8 + 0xcb4)) {
            sVar2 = script_sub_002b8f20(*(undefined4 *)(iVar8 + 0xca4));
            *(short *)(iVar8 + 0xcaa) = sVar2 - *(short *)(iVar8 + 0xca8);
            script_sub_002bb7f0(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                                *(undefined2 *)(iVar8 + 0xca8),*(undefined2 *)(iVar8 + 0xcaa));
            *(undefined2 *)(iVar8 + 0xcaa) = 0;
            *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 0xffffffbf;
            *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 0x80;
          }
        }
        else {
          script_sub_002bb7f0(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                              *(undefined2 *)(iVar8 + 0xca8),*(undefined2 *)(iVar8 + 0xcaa));
          *(undefined2 *)(iVar8 + 0xcaa) = 0;
          *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 0xffffffbf;
        }
      }
    }
    fVar9 = *(float *)(iVar8 + 0xcb4);
    sVar2 = script_sub_002b8f20(*(undefined4 *)(iVar8 + 0xca4));
    if (sVar2 <= (short)(int)fVar9) {
      *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) | 2;
      iVar4 = script_sub_002b8f30(*(undefined4 *)(iVar8 + 0xca4));
      *(float *)(iVar8 + 0xcb8) = (float)iVar4;
      *(float *)(iVar8 + 0xcb4) = (float)iVar4;
      uVar6 = nameentry_sub_002f7c60(iVar8 + 0xc80);
      if ((uVar6 & 1) == 0) {
        nameentry_sub_002f7f80(iVar8 + 0xc80);
      }
    }
    uVar6 = nameentry_sub_002f8ab0();
    if ((uVar6 & 1) != 0) {
      uVar6 = nameentry_sub_002f7c60(iVar8 + 0xc80);
      if ((uVar6 & 1) == 0) {
        uVar1 = nameentry_sub_002f7c80(iVar8 + 0xc80);
        lVar5 = nameentry_sub_002f63f0(uVar1);
        if (lVar5 != 0) goto LAB_002ebcb8;
      }
      nameentry_sub_002f7f80(iVar8 + 0xc80);
      nameentry_sub_002f7d20(iVar8 + 0xc80);
      nameentry_sub_002f7f80(iVar8 + 0xc8c);
      if (((*(uint *)(iVar8 + 0xccc) & 0x40) != 0) && (0 < *(short *)(iVar8 + 0xcaa))) {
        script_sub_002bb7f0(*(undefined4 *)(iVar8 + 0xca4),*(undefined4 *)(iVar8 + 0xcc0),
                            *(undefined2 *)(iVar8 + 0xca8));
        *(undefined2 *)(iVar8 + 0xcaa) = 0;
      }
      *(uint *)(iVar8 + 0xccc) = *(uint *)(iVar8 + 0xccc) & 4;
      nameentry_sub_002f8220(iVar8 + 0xc44,0);
      return;
    }
  }
LAB_002ebcb8:
  nameentry_sub_002f66f0(iVar8 + 0xc8c,*(undefined4 *)(iVar8 + 0xcc0));
  return;
}

