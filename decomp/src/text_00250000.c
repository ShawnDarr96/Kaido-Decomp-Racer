// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00250000 - 0x00254000
#include "ghidra_types.h"

// 0x002535c0  size 0x30
void menuscr_sub_002535c0(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  return;
}

// 0x002535f0  size 0x3c
void menuscr_sub_002535f0(int param_1,int param_2)

{
  param_1 = param_2 * 0x14 + param_1;
  *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  return;
}

// 0x00253630  size 0x60c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_sub_00253630(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_s0;
  
  iVar3 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      unaff_s0 = MenuWnd_DrawFooter(0x3a9,0xffffffffffffffff,0);
    }
  }
  else {
    uVar1 = Msg_Get(0x298);
    iVar3 = UiMgr_FindLayout(0xa2);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 1;
    *(undefined4 *)(iVar3 + 800) = uVar1;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar1 = Msg_Get(0x299);
    iVar3 = UiMgr_FindLayout(0xa3);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar1;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar1 = Msg_Get(0x29b);
    iVar3 = UiMgr_FindLayout(0xa3);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar1;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    uVar1 = Msg_Get(0x29a);
    iVar3 = UiMgr_FindLayout(0xa4);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x314) = 0xffffffff;
    *(undefined4 *)(iVar3 + 800) = 0;
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x310) = 0;
    if (*(int *)(iVar3 + 800) == 0) {
      *(undefined4 *)(iVar3 + 0x31c) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x31c) = 1;
    }
    *(undefined4 *)(iVar3 + 0x318) = 0;
    *(undefined4 *)(iVar3 + 800) = uVar1;
    *(undefined4 *)(iVar3 + 0x31c) = 1;
    uVar1 = Msg_Get(0x29c);
    iVar3 = UiMgr_FindLayout(0xa4);
    iVar3 = *_g_UiMgr + iVar3 * 0x4f4;
    *(undefined4 *)(iVar3 + 0x328) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x324) = 0;
    if (*(int *)(iVar3 + 0x334) == 0) {
      *(undefined4 *)(iVar3 + 0x330) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x330) = 1;
    }
    *(undefined4 *)(iVar3 + 0x32c) = 0;
    *(undefined4 *)(iVar3 + 0x334) = uVar1;
    *(undefined4 *)(iVar3 + 0x330) = 1;
    Menu_ClearSlot(0);
    MenuWnd_SetHelpText(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  lVar4 = UiLayout_UpdateAnimById(0xa3,0);
  lVar5 = UiLayout_UpdateAnimById(0xa4,0);
  if (lVar4 == 0 && lVar5 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      if (unaff_s0 == 2) {
        *(undefined4 *)(param_1 + 0x658) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
  }
  if (*(int *)(param_1 + 0x660) != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      if (unaff_s0 == 2) {
        MenuWnd_RequestRedraw();
      }
      lVar4 = UiLayout_UpdateAnimById(0xa3,1);
      lVar5 = UiLayout_UpdateAnimById(0xa4,1);
      if (unaff_s0 == 3 && (lVar4 == 0 && lVar5 == 0)) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
    else {
      lVar4 = UiLayout_UpdateAnimById(0xa3);
      lVar5 = UiLayout_UpdateAnimById(0xa4,1);
      if (lVar4 == 0 && lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x660) = 0;
      }
    }
  }
  MenuWnd_DrawText(0xa3,0x17,0x357);
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    MenuWnd_DrawTextId(0xa4,0x12,3,0x3a3);
    uVar2 = *(uint *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawText(0xa4,0x12,0x3a3);
    uVar2 = *(uint *)(param_1 + 8);
  }
  if ((uVar2 & 2) == 0) {
    MenuWnd_DrawTextId(0xa4,0x13,3,0x3a4);
    uVar2 = *(uint *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawText(0xa4,0x13,0x3a4);
    uVar2 = *(uint *)(param_1 + 8);
  }
  if ((uVar2 & 4) == 0) {
    MenuWnd_DrawTextId(0xa4,0x14,3,0x3a5);
  }
  else {
    MenuWnd_DrawText(0xa4,0x14,0x3a5);
  }
  MenuWnd_DrawText(7,0x2e,0x3a6);
  MenuWnd_DrawStatus(0xffffffffffffffff,0,0xffffffffffffffff,0);
  if ((*piRam0036f468 == 1) && (*(int *)(param_1 + 8) != 0)) {
    MenuWnd_SetItemState(0xa4,*(undefined4 *)(&DAT_0032c208 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  if (*(int *)(param_1 + 8) == 0) {
    DAT_0032befc = 3;
  }
  else {
    DAT_0032befc = 3;
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x18000;
  }
  UiLayout_UpdateAnimById(0xa2,0);
  iVar3 = UiMgr_FindLayout(0xa2);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xa3);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  iVar3 = UiMgr_FindLayout(0xa4);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar3 * 0x4f4 + 4);
  return;
}

// 0x00253c40  size 0x4b8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_sub_00253c40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  UiMgr_FindLayout(0x9e);
  UiMgr_FindLayout(0x78);
  iVar1 = *(int *)(param_1 + 0x65c);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (iVar1 != 0) {
    uVar2 = Msg_Get(0x1d9);
    iVar1 = UiMgr_FindLayout(0x9e);
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
    uVar2 = Msg_Get(0x1da);
    iVar1 = UiMgr_FindLayout(0x9e);
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
    iVar3 = UiMgr_FindLayout(0x78);
    iVar1 = *_g_UiMgr;
    uVar6 = Msg_Get(*(int *)(param_1 + 0x6b0) + 0x34);
    UiLayout_PlayAnim(iVar1 + iVar3 * 0x4f4 + 4,uVar6);
    iVar3 = UiMgr_FindLayout(0x79);
    iVar1 = *_g_UiMgr;
    uVar6 = Msg_Get(0x291);
    UiLayout_PlayAnim(iVar1 + iVar3 * 0x4f4 + 4,uVar6);
    iVar3 = UiMgr_FindLayout(0x78);
    iVar1 = *_g_UiMgr;
    uVar6 = Profile_Get(0);
    uVar6 = Profile_GetCurrentCar(uVar6);
    iVar4 = MsgId_ForOption(uVar6);
    UiElem_SetPropInt(iVar1 + iVar3 * 0x4f4 + 4,
                      *(undefined4 *)(&DAT_0032c1d0 + *(int *)(param_1 + 0x6b0) * 4),0x16,
                      *(undefined4 *)(&DAT_0032c1b0 + iVar4 * 4));
    Menu_ClearSlot(0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  lVar5 = UiLayout_UpdateAnimById(0x9e,0);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  if ((*(int *)(param_1 + 0x660) != 0) && (lVar5 = UiLayout_UpdateAnimById(0x9e), lVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  if (*piRam0036f468 == 1) {
    MenuWnd_SetItemState(0x9e,*(undefined4 *)(&DAT_0032c1e8 + *(int *)(param_1 + 0x62c) * 4),1,0);
  }
  MenuWnd_DrawText(0x9e,0x17,0x392);
  MenuWnd_DrawText(0x9e,0x18,0x393);
  MenuWnd_DrawText(0x9e,0x19,0x394);
  MenuWnd_DrawText(0x79,0x1a,0x356);
  MenuWnd_DrawText(7,0x2e,*(undefined4 *)(&DAT_0032c1f8 + *(int *)(param_1 + 0x62c) * 4));
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x42,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x43,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x44,uVar6);
  uVar6 = Race_GetCourseVariant();
  uVar6 = MsgId_ForOption(uVar6);
  uVar6 = MsgId_ForSlot(uVar6,1);
  MenuWnd_DrawText(0x78,0x45,uVar6);
  iVar1 = UiMgr_FindLayout(0x77);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x78);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x79);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0x9e);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

