// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0023c000 - 0x00240000
#include "ghidra_types.h"

// 0x0023c1d0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3277d0 */

void screc3277d0_exit_sub_0023c1d0(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x0023c1f0  size 0x98
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3277d0 */

void screc3277d0_update_sub_0023c1f0(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_ScrScrGarageDrawSponsors_Enter_0032b710)[*(int *)(param_1 + 4)])();
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  return;
}

// 0x0023c290  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3277d0 */

void screc3277d0_enter_sub_0023c290(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0x181);
  iVar2 = UiMgr_FindLayout(0xd3);
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

// 0x0023c330  size 0x5b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_draw_sub_0023c330(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar1 != 0) {
    iVar2 = UiMgr_FindLayout(0xcd);
    iVar1 = *_g_UiMgr;
    uVar6 = UiRes_GetLayoutData(0x39f);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar6);
    iVar2 = UiMgr_FindLayout(0xcd);
    iVar1 = *_g_UiMgr;
    uVar6 = UiRes_GetLayoutData(0x3a0);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar6);
    iVar2 = UiMgr_FindLayout(0xcd);
    iVar1 = *_g_UiMgr;
    uVar6 = UiRes_GetLayoutData(0x3a3);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar6);
    uVar3 = UiRes_GetLayoutData(0x3a5);
    iVar1 = UiMgr_FindLayout(0xce);
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
    uVar3 = UiRes_GetLayoutData(0x3a6);
    iVar1 = UiMgr_FindLayout(0xce);
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
    uVar3 = UiRes_GetLayoutData(0x3bf);
    iVar1 = UiMgr_FindLayout(0xce);
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
    *(undefined4 *)(iVar1 + 0x348) = uVar3;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar3 = UiRes_GetLayoutData(0x3c0);
    iVar1 = UiMgr_FindLayout(0xce);
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
    *(undefined4 *)(iVar1 + 0x35c) = uVar3;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    Menu_ClearSlot(0);
    MenuWnd_DrawDialogText(0xce,0x36eab8,2,0);
  }
  lVar5 = UiLayout_UpdateAnimById(0xce,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((*(int *)(param_1 + 0x34) != 0) && (lVar5 = UiLayout_UpdateAnimById(0xce), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar1 = ((*(int *)(param_1 + 0x10) + 0x14) - *(int *)(param_1 + 0x14)) % 0x14;
  iVar2 = -1;
  if (*(int *)(param_1 + 0x18) == 2) {
    lVar5 = UiLayout_UpdateAnimById(0xce);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar4 = UiMgr_FindLayout(0xce);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x338) = 0;
      if (*(int *)(iVar4 + 0x348) == 0) {
        *(undefined4 *)(iVar4 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar2 = (iVar1 + 0x13) % 0x14;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 1) {
    lVar5 = UiLayout_UpdateAnimById(0xce,3);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar4 = UiMgr_FindLayout(0xce);
      iVar4 = *_g_UiMgr + iVar4 * 0x4f4;
      *(undefined4 *)(iVar4 + 0x34c) = 0;
      if (*(int *)(iVar4 + 0x35c) == 0) {
        *(undefined4 *)(iVar4 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x358) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
    else {
      iVar2 = (iVar1 + 7) % 0x14;
    }
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0xce,*(undefined4 *)(&DAT_0032b790 + *(int *)(param_1 + 0x14) * 4),1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  MenuWnd_DrawCursor(1);
  iVar4 = UiMgr_FindLayout(0xce);
  UiElem_SetPropInt(*_g_UiMgr + iVar4 * 0x4f4 + 4,0x2a,0x16,
                    *(undefined4 *)(&DAT_0032e944 + *(int *)(param_1 + 0x10) * 8));
  iVar4 = 0;
  puVar7 = &DAT_0032b7b0;
  do {
    if (iVar4 == 7) {
      if (iVar2 == -1) break;
      iVar1 = iVar2;
    }
    MenuWnd_DrawText(0xce,*puVar7,iVar1 + 0x469);
    iVar1 = (iVar1 + 1) % 0x14;
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar4 < 8);
  iVar1 = UiMgr_FindLayout(0xce);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,*(int *)(param_1 + 0x10) + 0x491);
  return;
}

// 0x0023c8e0  size 0x480
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32b740 */

void screc32b740_exit_sub_0023c8e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0x3a7);
    iVar1 = UiMgr_FindLayout(0xcf);
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
    uVar2 = UiRes_GetLayoutData(0x3a8);
    iVar1 = UiMgr_FindLayout(0xcf);
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
    uVar2 = UiRes_GetLayoutData(0x3a9);
    iVar1 = UiMgr_FindLayout(0xcf);
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
    uVar2 = UiRes_GetLayoutData(0x3aa);
    iVar1 = UiMgr_FindLayout(0xcf);
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
    MenuWnd_DrawDialogText(0xcf,0x36eab0,2,0);
  }
  lVar3 = UiLayout_UpdateAnimById(0xcf,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((*(int *)(param_1 + 0x34) != 0) && (lVar3 = UiLayout_UpdateAnimById(0xcf), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 2) {
    lVar3 = UiLayout_UpdateAnimById(0xcf);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
      iVar1 = UiMgr_FindLayout(0xcf);
      iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
      *(undefined4 *)(iVar1 + 0x338) = 0;
      if (*(int *)(iVar1 + 0x348) == 0) {
        *(undefined4 *)(iVar1 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  else if (iVar1 == 1) {
    lVar3 = UiLayout_UpdateAnimById(0xcf,3);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
      iVar1 = UiMgr_FindLayout(0xcf);
      iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
      *(undefined4 *)(iVar1 + 0x34c) = 0;
      if (*(int *)(iVar1 + 0x35c) == 0) {
        *(undefined4 *)(iVar1 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x358) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  MenuWnd_DrawCursor(1);
  MenuWnd_DrawText(0xcf,0x15,*(int *)(param_1 + 0xc) + 0x457);
  MenuWnd_DrawLabel(0xcf,0x16,0x3a,*(int *)(param_1 + 0xc) + 1);
  MenuWnd_DrawText(0xcf,0x18,*(int *)(param_1 + 4) + 0x457);
  MenuWnd_DrawLabel(0xcf,0x17,0x3a,*(int *)(param_1 + 4) + 1);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0xcf,6,1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  iVar1 = UiMgr_FindLayout(0xcf);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0x10e);
  return;
}

// 0x0023cd60  size 0x480
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32b740 */

void screc32b740_update_sub_0023cd60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0x3ab);
    iVar1 = UiMgr_FindLayout(0xd0);
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
    uVar2 = UiRes_GetLayoutData(0x3ac);
    iVar1 = UiMgr_FindLayout(0xd0);
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
    uVar2 = UiRes_GetLayoutData(0x3ad);
    iVar1 = UiMgr_FindLayout(0xd0);
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
    uVar2 = UiRes_GetLayoutData(0x3ae);
    iVar1 = UiMgr_FindLayout(0xd0);
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
    MenuWnd_DrawDialogText(0xd0,0x36eaa8,2,0);
  }
  lVar3 = UiLayout_UpdateAnimById(0xd0,0);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((*(int *)(param_1 + 0x34) != 0) && (lVar3 = UiLayout_UpdateAnimById(0xd0), lVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 2) {
    lVar3 = UiLayout_UpdateAnimById(0xd0);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
      iVar1 = UiMgr_FindLayout(0xd0);
      iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
      *(undefined4 *)(iVar1 + 0x338) = 0;
      if (*(int *)(iVar1 + 0x348) == 0) {
        *(undefined4 *)(iVar1 + 0x344) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x344) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  else if (iVar1 == 1) {
    lVar3 = UiLayout_UpdateAnimById(0xd0,3);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
      iVar1 = UiMgr_FindLayout(0xd0);
      iVar1 = *_g_UiMgr + iVar1 * 0x4f4;
      *(undefined4 *)(iVar1 + 0x34c) = 0;
      if (*(int *)(iVar1 + 0x35c) == 0) {
        *(undefined4 *)(iVar1 + 0x358) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x358) = 1;
      }
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    }
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  }
  MenuWnd_DrawCursor(1);
  MenuWnd_DrawText(0xd0,0x15,*(int *)(param_1 + 8) + 0x4ba);
  MenuWnd_DrawLabel(0xd0,0x16,0x3a,*(int *)(param_1 + 8) + 1);
  MenuWnd_DrawText(0xd0,0x18,*(int *)(param_1 + 4) + 0x4ba);
  MenuWnd_DrawLabel(0xd0,0x17,0x3a,*(int *)(param_1 + 4) + 1);
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0xd0,6,1,0);
  }
  else {
    MenuWnd_SetItemVisible(0);
  }
  iVar1 = UiMgr_FindLayout(0xd0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  MenuWnd_SetTitle(3,0x10f);
  return;
}

// 0x0023d1e0  size 0x5b8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32b740 */

void screc32b740_enter_sub_0023d1e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 auStack_20 [4];
  undefined4 uStack_10;
  
  iVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (iVar2 == 0) {
    iVar2 = param_1[7];
  }
  else {
    uVar1 = UiRes_GetLayoutData(0x39f);
    iVar2 = UiMgr_FindLayout(0xcd);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar1;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar1 = UiRes_GetLayoutData(0x3a0);
    iVar2 = UiMgr_FindLayout(0xcd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    uVar1 = UiRes_GetLayoutData(0x3a1);
    iVar2 = UiMgr_FindLayout(0xcd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x348) = 0;
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x338) = 0;
    if (*(int *)(iVar2 + 0x348) == 0) {
      *(undefined4 *)(iVar2 + 0x344) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x344) = 1;
    }
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x348) = uVar1;
    *(undefined4 *)(iVar2 + 0x344) = 1;
    uVar1 = UiRes_GetLayoutData(0x3a2);
    iVar2 = UiMgr_FindLayout(0xcd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x35c) = 0;
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x34c) = 0;
    if (*(int *)(iVar2 + 0x35c) == 0) {
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x358) = 1;
    }
    *(undefined4 *)(iVar2 + 0x354) = 0;
    *(undefined4 *)(iVar2 + 0x35c) = uVar1;
    *(undefined4 *)(iVar2 + 0x358) = 1;
    uVar1 = UiRes_GetLayoutData(0x3a3);
    iVar2 = UiMgr_FindLayout(0xcd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x360) = 0;
    if (*(int *)(iVar2 + 0x370) == 0) {
      *(undefined4 *)(iVar2 + 0x36c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x36c) = 1;
    }
    *(undefined4 *)(iVar2 + 0x368) = 0;
    *(undefined4 *)(iVar2 + 0x370) = uVar1;
    *(undefined4 *)(iVar2 + 0x36c) = 1;
    uVar1 = UiRes_GetLayoutData(0x3a4);
    iVar2 = UiMgr_FindLayout(0xcc);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x378) = 0xffffffff;
    *(undefined4 *)(iVar2 + 900) = 0;
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x374) = 0;
    if (*(int *)(iVar2 + 900) == 0) {
      *(undefined4 *)(iVar2 + 0x380) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x380) = 1;
    }
    *(undefined4 *)(iVar2 + 0x37c) = 0;
    *(undefined4 *)(iVar2 + 900) = uVar1;
    *(undefined4 *)(iVar2 + 0x380) = 1;
    uVar1 = UiRes_GetLayoutData(0x3dd);
    iVar2 = UiMgr_FindLayout(0xcc);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x38c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x398) = 0;
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x388) = 0;
    if (*(int *)(iVar2 + 0x398) == 0) {
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x394) = 1;
    }
    *(undefined4 *)(iVar2 + 0x390) = 0;
    *(undefined4 *)(iVar2 + 0x398) = uVar1;
    *(undefined4 *)(iVar2 + 0x394) = 1;
    Menu_ClearSlot(0);
    iVar2 = param_1[7];
  }
  if ((iVar2 == 1) || (iVar2 == 2)) {
    param_1[0xb] = 0;
  }
  else if (iVar2 == 3) {
    lVar4 = UiLayout_UpdateAnimById(0xcd,0);
    lVar5 = UiLayout_UpdateAnimById(0xcd,1);
    lVar3 = UiLayout_UpdateAnimById(0xcc,6);
    if (lVar3 == 0 && (lVar4 == 0 && lVar5 == 0)) {
      param_1[0xb] = 0;
    }
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xcd,0);
    lVar5 = UiLayout_UpdateAnimById(0xcd,1);
    if (lVar4 == 0 && lVar5 == 0) {
      param_1[0xb] = 0;
    }
  }
  if (param_1[0xd] != 0) {
    if (*(int *)(_g_MenuMgr + 0x20) - 0xdU < 2) {
      lVar4 = UiLayout_UpdateAnimById(0xcd,2);
      lVar5 = UiLayout_UpdateAnimById(0xcd,3);
      if (lVar4 == 0 && lVar5 == 0) {
        param_1[0xd] = 0;
      }
    }
    else if (param_1[9] == 3) {
      lVar4 = UiLayout_UpdateAnimById(0xcd,4);
      lVar5 = UiLayout_UpdateAnimById(0xcc,5);
      if (lVar4 == 0 && lVar5 == 0) {
        param_1[0xd] = 0;
      }
    }
    else {
      param_1[0xd] = 0;
    }
    MenuWnd_SetItemVisible(0);
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0xcd,*(undefined4 *)(&DAT_0032b750 + *param_1 * 4),1,0);
  }
  auStack_20[0] = DAT_0032b770;
  auStack_20[1] = DAT_0032b774;
  auStack_20[2] = DAT_0032b778;
  auStack_20[3] = DAT_0032b77c;
  uStack_10 = DAT_0032b780;
  MenuWnd_SetTitle(3,auStack_20[*param_1]);
  return;
}

// 0x0023d7a0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3277dc */

void ScrDraw_Movie_Exit(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x0023d7c0  size 0x1cc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Movie(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar3 = (int)param_1;
  (*(code *)(&PTR_screc32b740_enter_sub_0023d1e0_0032b740)[*(int *)(iVar3 + 0x20)])(param_1);
  MenuWnd_DrawText(0xcd,0x1f,0x103);
  MenuWnd_DrawText(0xcd,0x20,0x104);
  MenuWnd_DrawText(0xcd,0x21,0x105);
  MenuWnd_DrawText(0xcd,0x22,0x106);
  MenuWnd_DrawText(0xcd,0x23,0x107);
  iVar1 = UiMgr_FindLayout(0xcb);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  if (*(int *)(iVar3 + 0x20) != 3) {
    iVar1 = UiMgr_FindLayout(0xcc);
    UiLayout_UpdateAnim(*_g_UiMgr + iVar1 * 0x4f4 + 4,0);
    iVar1 = UiMgr_FindLayout(0xcc);
    UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  }
  iVar1 = UiMgr_FindLayout(0xcd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar2 = Menu_IsInputIdle(iVar3 + 0x1c), lVar2 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0023d990  size 0xa4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3277dc */

void ScrDraw_Movie_Enter(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0x39e);
  iVar2 = UiMgr_FindLayout(0xcc);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 800) == 0) {
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
  }
  return;
}

// 0x0023da40  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3277e8 */

void screc3277e8_exit_sub_0023da40(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x0023da60  size 0x288
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3277e8 */

void screc3277e8_update_sub_0023da60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = UiLayout_UpdateAnimById(0,0);
  lVar4 = UiLayout_UpdateAnimById(0,1);
  if (lVar3 == 0 && lVar4 == 0) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
    }
  }
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
  if (uVar5 != 0x80000) {
    uVar5 = piRam0036f468[3];
    if ((piRam0036f468[5] & uVar5) == 0) {
      uVar5 = 0x100000;
    }
    else if (uVar5 == 0x80000) {
      uVar5 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar5 = 0x100000;
    }
    if (uVar5 != 0x80000) {
      uVar1 = 0x7f;
      goto LAB_0023db74;
    }
  }
  uVar1 = 0x7b;
LAB_0023db74:
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uStack_30 = DAT_0032b7f0;
  uStack_2c = DAT_0032b7f4;
  uStack_28 = DAT_0032b7f8;
  uStack_24 = DAT_0032b7fc;
  uStack_20 = DAT_0032b800;
  uStack_1c = DAT_0032b804;
  uStack_18 = DAT_0032b808;
  uStack_14 = DAT_0032b80c;
  uStack_10 = DAT_0032b810;
  uStack_c = DAT_0032b814;
  MenuList_Update(param_1 + 4,&uStack_30,0x32b7d0);
  iVar2 = UiMgr_FindLayout(0);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(1);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  if ((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) {
    lVar3 = UiLayout_UpdateAnimById(0,4);
    if (lVar3 == 0) {
      if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
      }
    }
  }
  else {
    MenuWnd_DrawCursor(1);
  }
  return;
}

// 0x0023dcf0  size 0x2c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x3277e8 */

void screc3277e8_enter_sub_0023dcf0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0x2e);
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
  *(undefined4 *)(iVar2 + 0x318) = 0;
  *(undefined4 *)(iVar2 + 800) = uVar1;
  *(undefined4 *)(iVar2 + 0x31c) = 1;
  if (*(int *)(_g_MenuMgr + 0x24) != 9) {
    uVar1 = UiRes_GetLayoutData(0x2f);
    iVar2 = UiMgr_FindLayout(0);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar1;
    *(undefined4 *)(iVar2 + 0x330) = 1;
  }
  uVar1 = UiRes_GetLayoutData(0x30);
  iVar2 = UiMgr_FindLayout(0);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x33c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x348) = 0;
  *(undefined4 *)(iVar2 + 0x338) = 0;
  if (*(int *)(iVar2 + 0x348) == 0) {
    *(undefined4 *)(iVar2 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x344) = 1;
  }
  *(undefined4 *)(iVar2 + 0x338) = 0;
  if (*(int *)(iVar2 + 0x348) == 0) {
    *(undefined4 *)(iVar2 + 0x344) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x344) = 1;
  }
  *(undefined4 *)(iVar2 + 0x340) = 0;
  *(undefined4 *)(iVar2 + 0x348) = uVar1;
  *(undefined4 *)(iVar2 + 0x344) = 1;
  uVar1 = UiRes_GetLayoutData(0x31);
  iVar2 = UiMgr_FindLayout(0);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x350) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x35c) = 0;
  *(undefined4 *)(iVar2 + 0x34c) = 0;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  *(undefined4 *)(iVar2 + 0x34c) = 0;
  if (*(int *)(iVar2 + 0x35c) == 0) {
    *(undefined4 *)(iVar2 + 0x358) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x358) = 1;
  }
  *(undefined4 *)(iVar2 + 0x354) = 0;
  *(undefined4 *)(iVar2 + 0x35c) = uVar1;
  *(undefined4 *)(iVar2 + 0x358) = 1;
  uVar1 = UiRes_GetLayoutData(0x5c);
  iVar2 = UiMgr_FindLayout(0);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  *(undefined4 *)(iVar2 + 0x364) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x370) = 0;
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (*(int *)(iVar2 + 0x370) == 0) {
    *(undefined4 *)(iVar2 + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x36c) = 1;
  }
  *(undefined4 *)(iVar2 + 0x368) = 0;
  *(undefined4 *)(iVar2 + 0x370) = uVar1;
  *(undefined4 *)(iVar2 + 0x36c) = 1;
  MenuWnd_DrawDialogText(0,0x36eac0,2,0);
  Menu_ClearSlot(0);
  return;
}

// 0x0023dfb0  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327800 */

void screc327800_exit_sub_0023dfb0(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x0023dfd0  size 0x1a8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327800 */

void screc327800_update_sub_0023dfd0(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x578) = 0;
  *(undefined4 *)(iVar3 + 0x580) = 0;
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  if (*(int *)(iVar3 + 0x770) != *(int *)(iVar3 + 0x774)) {
    uVar4 = password_leaf_sub_002dd4f0();
    uVar5 = password_leaf_sub_002dd4f0(*(undefined4 *)(iVar3 + 0x770));
    password_step_sub_002dcac0(iVar3 + 0x588,uVar5,*(undefined4 *)(iVar3 + 0x770));
    if ((uVar4 & 0xff) == (uVar5 & 0xff)) {
      uVar2 = *(undefined4 *)(iVar3 + 0x770);
    }
    else {
      password_step_sub_002dcc20(iVar3 + 0x588);
      uVar2 = *(undefined4 *)(iVar3 + 0x770);
    }
    *(undefined4 *)(iVar3 + 0x774) = uVar2;
  }
  UiLayout_UpdateAnimById(0xb3,0);
  uVar2 = password_leaf_sub_002dd460(param_1,*(undefined4 *)(iVar3 + 0x770));
  *(undefined4 *)(iVar3 + 0x76c) = uVar2;
  password_anim_sub_002dcd50(iVar3 + 0x588);
  password_step_sub_002dcc40(iVar3 + 0x588);
  iVar3 = UiMgr_FindLayout(0xb3);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xb7);
  UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x15,9,2);
  iVar3 = UiMgr_FindLayout(0xb7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x0023e180  size 0xac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327800 */

void screc327800_enter_sub_0023e180(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0xfc);
  iVar2 = UiMgr_FindLayout(0xb3);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 800) == 0) {
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
  }
  Menu_ClearSlot(0);
  return;
}

// 0x0023e230  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32780c */

void screc32780c_exit_sub_0023e230(void)

{
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 4;
  return;
}

// 0x0023e250  size 0x1a8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32780c */

void screc32780c_update_sub_0023e250(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x578) = 0;
  *(undefined4 *)(iVar3 + 0x580) = 0;
  uVar1 = *(uint *)(_g_MenuMgr + 0x28);
  if (((uVar1 & 4) == 0) && ((uVar1 & 1) == 0)) {
    *(uint *)(_g_MenuMgr + 0x28) = uVar1 | 0x800;
  }
  if (*(int *)(iVar3 + 0x770) != *(int *)(iVar3 + 0x774)) {
    uVar4 = password_leaf_sub_002dd4f0();
    uVar5 = password_leaf_sub_002dd4f0(*(undefined4 *)(iVar3 + 0x770));
    password_step_sub_002dcac0(iVar3 + 0x588,uVar5,*(undefined4 *)(iVar3 + 0x770));
    if ((uVar4 & 0xff) == (uVar5 & 0xff)) {
      uVar2 = *(undefined4 *)(iVar3 + 0x770);
    }
    else {
      password_step_sub_002dcc20(iVar3 + 0x588);
      uVar2 = *(undefined4 *)(iVar3 + 0x770);
    }
    *(undefined4 *)(iVar3 + 0x774) = uVar2;
  }
  UiLayout_UpdateAnimById(0xb3,0);
  uVar2 = password_leaf_sub_002dd460(param_1,*(undefined4 *)(iVar3 + 0x770));
  *(undefined4 *)(iVar3 + 0x76c) = uVar2;
  password_anim_sub_002dcd50(iVar3 + 0x588);
  password_step_sub_002dcc40(iVar3 + 0x588);
  iVar3 = UiMgr_FindLayout(0xb3);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xb7);
  UiElem_SetPropInt(*_g_UiMgr + iVar3 * 0x4f4 + 4,0x15,9,2);
  iVar3 = UiMgr_FindLayout(0xb7);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x0023e400  size 0xac
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32780c */

void screc32780c_enter_sub_0023e400(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = UiRes_GetLayoutData(0xfc);
  iVar2 = UiMgr_FindLayout(0xb3);
  iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
  if (*(int *)(iVar2 + 800) == 0) {
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
  }
  Menu_ClearSlot(0);
  return;
}

// 0x0023e4b0  size 0x2ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_DefaultOptionSettings(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar1 = false;
  }
  iVar2 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x101);
    iVar2 = UiMgr_FindLayout(0xbc);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x100);
    iVar2 = UiMgr_FindLayout(0xbc);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 1;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
  }
  if ((*(int *)(param_1 + 0x5c8) != 0) && (lVar4 = UiLayout_UpdateAnimById(0xbc,0), lVar4 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x5c8) = 0;
    bVar1 = false;
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar2 != 0) {
      uVar3 = UiRes_GetLayoutData(0x102);
      iVar2 = UiMgr_FindLayout(0xbc);
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
      *(undefined4 *)(iVar2 + 0x318) = 0;
      *(undefined4 *)(iVar2 + 800) = uVar3;
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    lVar4 = UiLayout_UpdateAnimById(0xbc,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar1 = true;
    }
  }
  UiLayout_UpdateAnimById(0xbc,1);
  UiLayout_UpdateAnimById(0xbc,2);
  MenuWnd_DrawTextId(0xbc,0x17,5,0x1ed7);
  MenuWnd_DrawText(0xbc,0x16,0x1efd);
  MenuWnd_DrawText(0xbc,0x15,0x2c);
  if (!bVar1) {
    MenuWnd_SetItemState(0xbc,0xd,1,0);
  }
  iVar2 = UiMgr_FindLayout(0xbc);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0023e7a0  size 0x318
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_RestoreAllOption(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar1 = false;
  }
  iVar2 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0xfe);
    iVar2 = UiMgr_FindLayout(0xbb);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0xfd);
    iVar2 = UiMgr_FindLayout(0xbb);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 1;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
  }
  if ((*(int *)(param_1 + 0x5c8) != 0) && (lVar4 = UiLayout_UpdateAnimById(0xbb,0), lVar4 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x5c8) = 0;
    bVar1 = false;
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar2 != 0) {
      uVar3 = UiRes_GetLayoutData(0xff);
      iVar2 = UiMgr_FindLayout(0xbb);
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
      *(undefined4 *)(iVar2 + 0x318) = 0;
      *(undefined4 *)(iVar2 + 800) = uVar3;
      *(undefined4 *)(iVar2 + 0x31c) = 1;
    }
    lVar4 = UiLayout_UpdateAnimById(0xbb,0);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar1 = true;
    }
  }
  UiLayout_UpdateAnimById(0xbb,1);
  UiLayout_UpdateAnimById(0xbb,2);
  MenuWnd_DrawTextId(0xbb,0x1e,5,0x1ed7);
  MenuWnd_DrawText(0xbb,0x1c,0x1efc);
  MenuWnd_DrawText(0xbb,0x1b,1);
  MenuWnd_DrawText(0xbb,0x1d,2);
  if (!bVar1) {
    MenuWnd_SetItemState(0xbb,*(undefined4 *)(&LAB_0036eaf8 + *(int *)(param_1 + 0x28) * 4),1,0);
  }
  iVar2 = UiMgr_FindLayout(0xbb);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0023eac0  size 0x8
void Menuscr_Nop(void)

{
  return;
}

// 0x0023ead0  size 0x8
void Menuscr_Nop_2(void)

{
  return;
}

// 0x0023eae0  size 0x304
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_CalibratingDoNot(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar1 != 0) {
    uVar2 = UiRes_GetLayoutData(0x105);
    iVar1 = UiMgr_FindLayout(0xbd);
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
    uVar2 = UiRes_GetLayoutData(0x103);
    iVar1 = UiMgr_FindLayout(0xbd);
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
    *(undefined4 *)(iVar1 + 0x32c) = 1;
    *(undefined4 *)(iVar1 + 0x334) = uVar2;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar2 = UiRes_GetLayoutData(0x104);
    iVar1 = UiMgr_FindLayout(0xbd);
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
    *(undefined4 *)(iVar1 + 0x348) = uVar2;
    *(undefined4 *)(iVar1 + 0x344) = 1;
  }
  if ((*(int *)(param_1 + 0x5c8) != 0) && (lVar3 = UiLayout_UpdateAnimById(0xbd,0), lVar3 == 0)) {
    Menu_ClearSlot(0);
    *(undefined4 *)(param_1 + 0x5c8) = 0;
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar1 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar1 != 0) {
      uVar2 = UiRes_GetLayoutData(0x106);
      iVar1 = UiMgr_FindLayout(0xbd);
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
    }
    lVar3 = UiLayout_UpdateAnimById(0xbd,0);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
    }
  }
  UiLayout_UpdateAnimById(0xbd,1);
  UiLayout_UpdateAnimById(0xbd,2);
  MenuWnd_DrawTextId(0xbd,0x14,5,0x1ee9);
  MenuWnd_DrawText(0xbd,0x13,0x1f19);
  iVar1 = UiMgr_FindLayout(0xbd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x0023edf0  size 0x590
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_ButtonConfig(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 1;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    uVar6 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x5c8);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x280);
    iVar2 = UiMgr_FindLayout(0xfd);
    iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
    *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x334) = 0;
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x324) = 0;
    if (*(int *)(iVar2 + 0x334) == 0) {
      *(undefined4 *)(iVar2 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    *(undefined4 *)(iVar2 + 0x32c) = 0;
    *(undefined4 *)(iVar2 + 0x334) = uVar3;
    *(undefined4 *)(iVar2 + 0x330) = 1;
    do {
      lVar4 = UiLayout_UpdateAnimById(0xfd,1);
    } while (lVar4 != 0);
    uVar3 = UiRes_GetLayoutData(0x277);
    iVar2 = UiMgr_FindLayout(0xfa);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x27b);
    iVar2 = UiMgr_FindLayout(0xfd);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    menuscr_draw_sub_00241ab0(param_1 + 0x200);
    menuscr_draw_sub_00241ab0(param_1 + 0x3dc,1);
    iVar2 = *(int *)(param_1 + 0x5c8);
  }
  if (iVar2 != 0) {
    lVar4 = UiLayout_UpdateAnimById(0xfa,0);
    lVar5 = UiLayout_UpdateAnimById(0xfd,0);
    if (lVar4 == 0 && lVar5 == 0) {
      Menu_ClearSlot(0);
      Menu_ClearSlot(1);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      uVar6 = 0;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar2 != 0) {
      uVar3 = UiRes_GetLayoutData(0x278);
      iVar2 = UiMgr_FindLayout(0xfa);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar3;
      *(undefined4 *)(iVar2 + 0x330) = 1;
      uVar3 = UiRes_GetLayoutData(0x280);
      iVar2 = UiMgr_FindLayout(0xfd);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar3;
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    lVar4 = UiLayout_UpdateAnimById(0xfa,1);
    lVar5 = UiLayout_UpdateAnimById(0xfd,1);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      uVar6 = 1;
    }
  }
  MenuWnd_DrawText(0xfa,1,0x1ee6);
  MenuWnd_DrawText(0xfd,0xa4,0x1eec);
  MenuWnd_DrawText(0xfd,0xa7,0x1eed);
  MenuWnd_DrawText(0xfd,0xa9,0x1eee);
  MenuWnd_DrawText(0xfd,0xa8,0x1eef);
  MenuWnd_DrawText(0xfd,0xaa,0x1ef0);
  MenuWnd_DrawText(0xfd,0xab,0x1ef1);
  MenuWnd_DrawText(0xfd,0xac,0x1ef2);
  MenuWnd_DrawText(0xfd,0xad,0x1ef3);
  MenuWnd_DrawText(0xfd,0xae,0x1ef4);
  MenuWnd_DrawText(0xfd,0xaf,0x1ed0);
  MenuWnd_DrawText(0xfd,0xb0,0x1ed0);
  MenuWnd_DrawTextId(0xfd,0xa5,1,0x1ef5);
  MenuWnd_DrawTextId(0xfd,0xa6,1,0x1ef6);
  menuscr_draw_sub_00241ab0(param_1 + 0x200,uVar6);
  menuscr_draw_sub_00241ab0(param_1 + 0x3dc,uVar6);
  bVar1 = *(int *)(param_1 + 0x20c) != 0;
  if (!bVar1) {
    bVar1 = *(int *)(param_1 + 0x238) != 0;
  }
  if (!bVar1) {
    bVar1 = *(int *)(param_1 + 1000) != 0;
    if (!bVar1) {
      bVar1 = *(int *)(param_1 + 0x414) != 0;
    }
    if (!bVar1) goto LAB_0023effc;
  }
  MenuWnd_DrawText(0xf8,0x1b,0x1f18);
LAB_0023effc:
  iVar2 = UiMgr_FindLayout(0xfa);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xfd);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0023f380  size 0x424
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_DrivingForce(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar1 = false;
  }
  iVar2 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar2 != 0) {
    uVar3 = UiRes_GetLayoutData(0x277);
    iVar2 = UiMgr_FindLayout(0xfa);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x283);
    iVar2 = UiMgr_FindLayout(0xff);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
  }
  if (*(int *)(param_1 + 0x5c8) != 0) {
    lVar4 = UiLayout_UpdateAnimById(0xfa,0);
    lVar5 = UiLayout_UpdateAnimById(0xff,0);
    if (lVar4 == 0 && lVar5 == 0) {
      Menu_ClearSlot(0);
      Menu_ClearSlot(1);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar1 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar2 != 0) {
      uVar3 = UiRes_GetLayoutData(0x278);
      iVar2 = UiMgr_FindLayout(0xfa);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar3;
      *(undefined4 *)(iVar2 + 0x330) = 1;
      uVar3 = UiRes_GetLayoutData(0x284);
      iVar2 = UiMgr_FindLayout(0xff);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar3;
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    lVar4 = UiLayout_UpdateAnimById(0xfa,1);
    lVar5 = UiLayout_UpdateAnimById(0xff,1);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar1 = true;
    }
  }
  MenuWnd_DrawText(0xfa,1,0x1ee4);
  MenuWnd_DrawText(0xff,0x18,0x1ee8);
  if ((*(uint *)(param_1 + 0x34) & 2) == 0) {
    MenuWnd_DrawTextId(0xff,0x19,3,0x1ee9);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    MenuWnd_DrawText(0xff,0x19,0x1ee9);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  MenuWnd_DrawText(0xf8,0x1b,*(undefined4 *)(iVar2 * 4 + 0x36eaf0));
  if (!bVar1) {
    MenuWnd_SetItemState(0xff,*(undefined4 *)(*(int *)(param_1 + 0x20) * 4 + 0x36eae8),1,0);
  }
  iVar2 = UiMgr_FindLayout(0xfa);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xff);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0023f7b0  size 0x508
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_ButtonConfig_f7b0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 1;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    uVar6 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x5c8);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x277);
    iVar2 = UiMgr_FindLayout(0xfa);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x279);
    iVar2 = UiMgr_FindLayout(0xfc);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    menuscr_anim_sub_00241e20(param_1 + 0x200);
    menuscr_anim_sub_00241e20(param_1 + 0x3dc,1);
    iVar2 = *(int *)(param_1 + 0x5c8);
  }
  if (iVar2 != 0) {
    lVar4 = UiLayout_UpdateAnimById(0xfa,0);
    lVar5 = UiLayout_UpdateAnimById(0xfc,0);
    if (lVar4 == 0 && lVar5 == 0) {
      Menu_ClearSlot(0);
      Menu_ClearSlot(1);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      uVar6 = 0;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar2 != 0) {
      uVar3 = UiRes_GetLayoutData(0x278);
      iVar2 = UiMgr_FindLayout(0xfa);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar3;
      *(undefined4 *)(iVar2 + 0x330) = 1;
      uVar3 = UiRes_GetLayoutData(0x27a);
      iVar2 = UiMgr_FindLayout(0xfc);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar3;
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    lVar4 = UiLayout_UpdateAnimById(0xfa,1);
    lVar5 = UiLayout_UpdateAnimById(0xfc,1);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      uVar6 = 1;
    }
  }
  MenuWnd_DrawText(0xfa,1,0x1ee6);
  MenuWnd_DrawText(0xfc,0xd4,0x1eea);
  MenuWnd_DrawText(0xfc,0xd7,0x1eeb);
  MenuWnd_DrawText(0xfc,0xd9,0x1eec);
  MenuWnd_DrawText(0xfc,0xd8,0x1eed);
  MenuWnd_DrawText(0xfc,0xda,0x1eee);
  MenuWnd_DrawText(0xfc,0xdb,0x1eef);
  MenuWnd_DrawText(0xfc,0xdc,0x1ef0);
  MenuWnd_DrawText(0xfc,0xdd,0x1ef1);
  MenuWnd_DrawText(0xfc,0xde,0x1ef2);
  MenuWnd_DrawText(0xfc,0xdf,0x1ef3);
  MenuWnd_DrawText(0xfc,0xe0,0x1ed0);
  MenuWnd_DrawText(0xfc,0xe1,0x1ed0);
  MenuWnd_DrawTextId(0xfc,0xd5,1,0x1ef5);
  MenuWnd_DrawTextId(0xfc,0xd6,1,0x1ef6);
  menuscr_anim_sub_00241e20(param_1 + 0x200,uVar6);
  menuscr_anim_sub_00241e20(param_1 + 0x3dc,uVar6);
  bVar1 = *(int *)(param_1 + 0x20c) != 0;
  if (!bVar1) {
    bVar1 = *(int *)(param_1 + 0x238) != 0;
  }
  if (!bVar1) {
    bVar1 = *(int *)(param_1 + 1000) != 0;
    if (!bVar1) {
      bVar1 = *(int *)(param_1 + 0x414) != 0;
    }
    if (!bVar1) goto LAB_0023f9cc;
  }
  MenuWnd_DrawText(0xf8,0x1b,0x1f18);
LAB_0023f9cc:
  iVar2 = UiMgr_FindLayout(0xfa);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xfc);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

// 0x0023fcc0  size 0x470
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MenuScr_Draw_Controller(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x5d0) == 0) && (*(int *)(param_1 + 0x5c8) == 0)) {
    bVar1 = false;
  }
  iVar2 = *(int *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  else {
    uVar3 = UiRes_GetLayoutData(0x277);
    iVar2 = UiMgr_FindLayout(0xfa);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    uVar3 = UiRes_GetLayoutData(0x281);
    iVar2 = UiMgr_FindLayout(0xfe);
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
    *(undefined4 *)(iVar2 + 0x318) = 0;
    *(undefined4 *)(iVar2 + 800) = uVar3;
    *(undefined4 *)(iVar2 + 0x31c) = 1;
    menuscr_anim_sub_00242800(param_1 + 0x140,0xfe,0x32be20,0x32be28);
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  menuscr_anim_sub_002425c0(param_1 + 0x140,*(undefined4 *)(param_1 + 0x50),iVar2 == 1);
  if (*(int *)(param_1 + 0x5c8) != 0) {
    lVar4 = UiLayout_UpdateAnimById(0xfa,0);
    lVar5 = UiLayout_UpdateAnimById(0xfe,0);
    if (lVar4 == 0 && lVar5 == 0) {
      Menu_ClearSlot(0);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      bVar1 = false;
    }
  }
  if (*(int *)(param_1 + 0x5d0) != 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    if (iVar2 != 0) {
      uVar3 = UiRes_GetLayoutData(0x278);
      iVar2 = UiMgr_FindLayout(0xfa);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar3;
      *(undefined4 *)(iVar2 + 0x330) = 1;
      uVar3 = UiRes_GetLayoutData(0x282);
      iVar2 = UiMgr_FindLayout(0xfe);
      iVar2 = *_g_UiMgr + iVar2 * 0x4f4;
      *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x334) = 0;
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x324) = 0;
      if (*(int *)(iVar2 + 0x334) == 0) {
        *(undefined4 *)(iVar2 + 0x330) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x330) = 1;
      }
      *(undefined4 *)(iVar2 + 0x32c) = 0;
      *(undefined4 *)(iVar2 + 0x334) = uVar3;
      *(undefined4 *)(iVar2 + 0x330) = 1;
    }
    lVar4 = UiLayout_UpdateAnimById(0xfa,1);
    lVar5 = UiLayout_UpdateAnimById(0xfe,1);
    if (lVar4 == 0 && lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x5d0) = 0;
      bVar1 = true;
    }
  }
  MenuWnd_DrawText(0xfa,1,0x1ee3);
  MenuWnd_DrawText(0xfe,0x1f,0x32);
  MenuWnd_DrawText(0xfe,0x20,0x33);
  MenuWnd_DrawText(0xfe,0x1d,0x1ee6);
  MenuWnd_DrawText(0xfe,0x1e,0x1ee7);
  MenuWnd_DrawText(0xf8,0x1b,*(undefined4 *)(*(int *)(param_1 + 0x1c) * 4 + 0x36eae0));
  if (bVar1) {
    menuscr_anim_sub_002425c0(param_1 + 0x140,*(undefined4 *)(param_1 + 0x50),0);
  }
  else {
    MenuWnd_SetItemState(0xfe,*(undefined4 *)(*(int *)(param_1 + 0x1c) * 4 + 0x36ead8),1,0);
  }
  iVar2 = UiMgr_FindLayout(0xfa);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  iVar2 = UiMgr_FindLayout(0xfe);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar2 * 0x4f4 + 4);
  return;
}

