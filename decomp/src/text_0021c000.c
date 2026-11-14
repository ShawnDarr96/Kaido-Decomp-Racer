// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0021c000 - 0x00220000
#include "ghidra_types.h"

// 0x0021c180  size 0xc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_0021c180(undefined8 param_1)

{
  long lVar1;
  
  if ((*(uint *)(_g_MenuMgr + 0x28) & 2) == 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1000;
  }
  (*(code *)(&PTR_scrcareer_draw_sub_0021b780_0032a290)[*(int *)((int)param_1 + 0x4c)])(param_1);
  if (((*(uint *)(_g_MenuMgr + 0x28) & 4) == 0) &&
     (lVar1 = Menu_IsInputIdle((int)param_1 + 0x48), lVar1 == 1)) {
    if ((*(uint *)(_g_MenuMgr + 0x28) & 1) == 0) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x800;
    }
  }
  return;
}

// 0x0021c260  size 0x4c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_WouldYouLike(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = UiMgr_FindLayout(0xac);
  iVar5 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar2 = UiMgr_FindLayout(0xad);
  iVar1 = param_1[7];
  iVar6 = *_g_UiMgr;
  param_1[7] = 0;
  iVar6 = iVar6 + iVar2 * 0x4f4 + 4;
  if (iVar1 != 0) {
    MenuWnd_SetHelpText(2);
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,iVar5,0x1e,8);
    UiElem_SetPropFloat(0,iVar5,0x1f,8);
  }
  lVar3 = MenuWnd_DrawFooter(0xffffffffffffffff,*param_1,0x36e968);
  MenuWnd_DrawText(5,0x1c,0x43d);
  if (param_1[8] != 0) {
    if (lVar3 == 2) {
      MenuWnd_RequestRedraw();
    }
    else if (lVar3 == 3) {
      param_1[8] = 0;
    }
  }
  if (lVar3 == 2) {
    param_1[6] = 0;
  }
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(0xac,0x20,*(undefined4 *)(&DAT_0032a700 + param_1[10] * 4));
  MenuWnd_DrawText(0xac,0x1b,0x451);
  MenuWnd_DrawLabel(0xac,0x1a,0x447,param_1[param_1[10] + 0xb] + 1,param_1[param_1[10] + 0x1d]);
  iVar1 = param_1[10];
  MenuWnd_DrawText(0xad,10,param_1[iVar1 * 200 + param_1[iVar1 + 0xb] + 0x26] +
                           *(int *)(&DAT_0032a790 + iVar1 * 4));
  iVar1 = param_1[10];
  iVar5 = iVar1 * 4;
  iVar2 = param_1[iVar1 + 0xb];
  if (param_1[iVar1 * 200 + iVar2 + 0xe36] == 0) {
    MenuWnd_DrawLabel(0xad,0xb,0x445,
                      param_1[iVar1 * 200 + iVar2 + 0x26] + *(int *)(&DAT_0032a730 + iVar5),0,
                      param_1[iVar1 * 200 + iVar2 + 0x26] + *(int *)(&DAT_0032a760 + iVar5));
    iVar1 = param_1[10];
  }
  else {
    MenuWnd_DrawLabel(0xad,0xb,0x445,
                      param_1[iVar1 * 200 + iVar2 + 0x26] + *(int *)(&DAT_0032a730 + iVar5),0,
                      0xfffffffffffffffe);
    iVar1 = param_1[10];
  }
  uVar4 = Career_GetLevel(param_1[0x153e] + iVar1 * 0x644 +
                          param_1[iVar1 * 200 + param_1[iVar1 + 0xb] + 0x26] * 8 + 0x531c);
  iVar1 = Career_GetLevel(param_1[0x153e] + iVar1 * 0x644 +
                          param_1[iVar1 * 200 + param_1[iVar1 + 0xb] + 0x26] * 8 + 0x531c);
  MenuWnd_DrawLabel(0xad,0xc,0x444,uVar4,iVar1 % 7 + 0x44a);
  iVar1 = param_1[10];
  lVar3 = Career_IsTeamDefeated
                    (param_1[0x153e],iVar1,param_1[iVar1 * 200 + param_1[iVar1 + 0xb] + 0x26]);
  if (lVar3 == 0) {
    UiElem_SetPropFloat(0,iVar6,3,8);
    UiElem_SetPropFloat(0x3f800000,iVar6,2,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,iVar6,3,8);
    UiElem_SetPropFloat(0,iVar6,2,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xad);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x0021c720  size 0xa7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Subject(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = UiMgr_FindLayout(0xac);
  iVar10 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar2 = UiMgr_FindLayout(0xad);
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar9 = *_g_UiMgr;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar9 = iVar9 + iVar2 * 0x4f4 + 4;
  if (iVar1 != 0) {
    uVar4 = UiRes_GetLayoutData(0xd5);
    iVar1 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)(iVar1 + 800) = uVar4;
    *(undefined4 *)(iVar1 + 0x31c) = 1;
    uVar4 = UiRes_GetLayoutData(0xd6);
    iVar1 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)(iVar1 + 0x334) = uVar4;
    *(undefined4 *)(iVar1 + 0x330) = 1;
    uVar4 = UiRes_GetLayoutData(0xd7);
    iVar1 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)(iVar1 + 0x348) = uVar4;
    *(undefined4 *)(iVar1 + 0x344) = 1;
    uVar4 = UiRes_GetLayoutData(0xd4);
    iVar1 = UiMgr_FindLayout(0xad);
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
    *(undefined4 *)(iVar1 + 0x35c) = uVar4;
    *(undefined4 *)(iVar1 + 0x358) = 1;
    Menu_ClearSlot(0);
    UiElem_SetPropFloat(0,iVar10,0x1e,8);
    UiElem_SetPropFloat(0,iVar10,0x1f,8);
    iVar1 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,3,8);
    iVar1 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x18,8);
    MenuWnd_DrawDialogText(0xac,0x36e960,2,1);
  }
  MenuWnd_DrawCursor(1);
  iVar1 = *(int *)(param_1 + 0x28);
  piVar3 = (int *)Rival_IsDefeated(iVar1,*(undefined4 *)(iVar1 * 800 + param_1 + 0x98));
  iVar2 = *piVar3;
  piVar3 = (int *)Rival_IsDefeated(iVar1,*(undefined4 *)
                                          (*(int *)(iVar1 * 4 + param_1 + 0x2c) * 4 +
                                           iVar1 * 800 + param_1 + 0x98));
  if (iVar2 == *piVar3) {
    UiElem_SetPropFloat(0,iVar10,0x1e,8);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    MenuWnd_DrawLabel(0xad,0x12,0x454,5,0);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  piVar3 = (int *)Rival_IsDefeated(iVar1,*(undefined4 *)
                                          (*(int *)(iVar1 * 4 + param_1 + 0x74) * 4 +
                                           iVar1 * 800 + param_1 + 0x94));
  iVar2 = *piVar3;
  piVar3 = (int *)Rival_IsDefeated(iVar1,*(undefined4 *)
                                          (*(int *)(iVar1 * 4 + param_1 + 0x2c) * 4 +
                                           iVar1 * 800 + param_1 + 0x98));
  if (iVar2 == *piVar3) {
    UiElem_SetPropFloat(0,iVar10,0x1f,8);
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    MenuWnd_DrawLabel(0xad,0x13,0x455,5,0);
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar5 = UiLayout_UpdateAnimById(0xad,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x10) == 3) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      lVar5 = UiLayout_UpdateAnimById(0xad);
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(iVar1 * 4 + param_1 + 0x2c);
  if (iVar2 < 1) {
LAB_0021d0f0:
    UiElem_SetPropFloat(0,iVar9,0x11,8);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    piVar3 = (int *)Rival_IsDefeated(iVar1,*(undefined4 *)(iVar2 * 4 + iVar1 * 800 + param_1 + 0x98)
                                    );
    iVar10 = *piVar3;
    piVar3 = (int *)Rival_IsDefeated(iVar1,*(undefined4 *)(iVar2 * 4 + iVar1 * 800 + param_1 + 0x94)
                                    );
    if (iVar10 != *piVar3) goto LAB_0021d0f0;
    UiElem_SetPropFloat(0x3f800000,iVar9,0x11,8);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  iVar10 = iVar1 * 4 + param_1;
  iVar2 = *(int *)(iVar10 + 0x2c);
  if (iVar2 < *(int *)(iVar10 + 0x74) + -1) {
    piVar3 = (int *)Rival_IsDefeated(iVar1,*(undefined4 *)(iVar2 * 4 + iVar1 * 800 + param_1 + 0x98)
                                    );
    iVar10 = *piVar3;
    piVar3 = (int *)Rival_IsDefeated(iVar1,*(undefined4 *)(iVar2 * 4 + iVar1 * 800 + param_1 + 0x9c)
                                    );
    if (iVar10 == *piVar3) {
      UiElem_SetPropFloat(0x3f800000,iVar9,0x10,8);
      goto LAB_0021cd28;
    }
  }
  UiElem_SetPropFloat(0,iVar9,0x10,8);
LAB_0021cd28:
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(0xac,0x20,*(undefined4 *)(&DAT_0032a640 + *(int *)(param_1 + 0x28) * 4));
  MenuWnd_DrawText(0xac,0x1b,0x451);
  iVar1 = *(int *)(param_1 + 0x28) * 4 + param_1;
  MenuWnd_DrawLabel(0xac,0x1a,0x447,*(int *)(iVar1 + 0x2c) + 1,*(undefined4 *)(iVar1 + 0x74));
  iVar1 = *(int *)(param_1 + 0x28) * 4;
  MenuWnd_DrawText(0xad,10,*(int *)(*(int *)(iVar1 + param_1 + 0x2c) * 4 +
                                    *(int *)(param_1 + 0x28) * 800 + param_1 + 0x98) +
                           *(int *)(&DAT_0032a6d0 + iVar1));
  iVar2 = *(int *)(param_1 + 0x28) * 4;
  iVar1 = *(int *)(iVar2 + param_1 + 0x2c) * 4 + *(int *)(param_1 + 0x28) * 800 + param_1;
  if (*(int *)(iVar1 + 0x38d8) == 0) {
    MenuWnd_DrawLabel(0xad,0xb,0x445,*(int *)(iVar1 + 0x98) + *(int *)(&DAT_0032a670 + iVar2),0,
                      *(int *)(iVar1 + 0x98) + *(int *)(&DAT_0032a6a0 + iVar2));
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    MenuWnd_DrawLabel(0xad,0xb,0x445,*(int *)(iVar1 + 0x98) + *(int *)(&DAT_0032a670 + iVar2),0,
                      0xfffffffffffffffe);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  uVar6 = Career_GetLevel(*(int *)(param_1 + 0x54f8) + iVar1 * 0x644 +
                          *(int *)(*(int *)(iVar1 * 4 + param_1 + 0x2c) * 4 + iVar1 * 800 + param_1
                                  + 0x98) * 8 + 0x531c);
  iVar1 = Career_GetLevel(*(int *)(param_1 + 0x54f8) + iVar1 * 0x644 +
                          *(int *)(*(int *)(iVar1 * 4 + param_1 + 0x2c) * 4 + iVar1 * 800 + param_1
                                  + 0x98) * 8 + 0x531c);
  MenuWnd_DrawLabel(0xad,0xc,0x444,uVar6,iVar1 % 7 + 0x44a);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar7 = 0;
  iVar2 = *(int *)(iVar1 * 4 + param_1 + 0x74);
  iVar10 = 0;
  if (0 < iVar2) {
    iVar8 = param_1 + iVar1 * 800;
    do {
      if (*(char *)(*(int *)(param_1 + 0x54f8) + iVar1 * 0x644 + *(int *)(iVar8 + 0x98) * 8 + 0x5320
                   ) == '\x01') {
        iVar7 = iVar7 + 1;
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < iVar2);
  }
  MenuWnd_DrawLabel(7,0x2e,0x456,iVar7);
  iVar1 = *(int *)(param_1 + 0x28);
  lVar5 = Career_IsTeamDefeated
                    (*(undefined4 *)(param_1 + 0x54f8),iVar1,
                     *(undefined4 *)
                      (*(int *)(iVar1 * 4 + param_1 + 0x2c) * 4 + iVar1 * 800 + param_1 + 0x98));
  if (lVar5 == 0) {
    UiElem_SetPropFloat(0,iVar9,3,8);
    UiElem_SetPropFloat(0x3f800000,iVar9,2,8);
  }
  else {
    UiElem_SetPropFloat(0x3f800000,iVar9,3,8);
    UiElem_SetPropFloat(0,iVar9,2,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xad);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

// 0x0021d1a0  size 0x2f78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ScrCareer_Draw_Subject_d1a0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 auStack_20 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auStack_20[0] = DAT_0032a4c0;
  auStack_20[1] = DAT_0032a4c4;
  auStack_20[2] = DAT_0032a4c8;
  auStack_20[3] = DAT_0032a4cc;
  uStack_10 = DAT_0032a4d0;
  uStack_c = DAT_0032a4d4;
  uStack_8 = DAT_0032a4d8;
  iVar1 = UiMgr_FindLayout(0xab);
  iVar12 = *_g_UiMgr + iVar1 * 0x4f4 + 4;
  iVar2 = UiMgr_FindLayout(0xac);
  iVar1 = param_1[7];
  iVar16 = *_g_UiMgr;
  param_1[7] = 0;
  iVar16 = iVar16 + iVar2 * 0x4f4 + 4;
  if (iVar1 != 0) {
    uVar3 = UiRes_GetLayoutData(0xe4);
    iVar1 = UiMgr_FindLayout(0xab);
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
    uVar3 = UiRes_GetLayoutData(0xe5);
    iVar1 = UiMgr_FindLayout(0xab);
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
    uVar3 = UiRes_GetLayoutData(0xe6);
    iVar1 = UiMgr_FindLayout(0xab);
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
    uVar3 = UiRes_GetLayoutData(0xe3);
    iVar1 = UiMgr_FindLayout(0xab);
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
    uVar3 = UiRes_GetLayoutData(0xdf);
    iVar1 = UiMgr_FindLayout(0xac);
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
    uVar3 = UiRes_GetLayoutData(0xe1);
    iVar1 = UiMgr_FindLayout(0xac);
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
    uVar3 = UiRes_GetLayoutData(0xe0);
    iVar1 = UiMgr_FindLayout(0xac);
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
    uVar3 = UiRes_GetLayoutData(0xe2);
    iVar1 = UiMgr_FindLayout(0xac);
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
    MenuWnd_DrawDialogText(0xac,0x36e958,2);
    UiElem_SetPropFloat(0,iVar16,0x1e,8);
    UiElem_SetPropFloat(0,iVar16,0x1f,8);
    MenuWnd_SetItemVisible(0);
    Menu_ClearSlot(0);
    if (param_1[2] == 0) {
      iVar1 = 0;
      puVar11 = &DAT_0032a5a0;
      puVar10 = &DAT_0032a5c0;
      puVar13 = &DAT_0032a600;
      puVar14 = &DAT_0032a620;
      puVar15 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,iVar12,*puVar11,8);
        UiElem_SetPropFloat(0,iVar12,*puVar10,8);
        UiElem_SetPropFloat(0,iVar12,*puVar13,8);
        UiElem_SetPropFloat(0,iVar12,*puVar14,8);
        UiElem_SetPropFloat(0,iVar12,*puVar15,8);
        iVar1 = iVar1 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar1 < 7);
      UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
      iVar1 = param_1[2];
    }
    else {
      iVar1 = param_1[2];
    }
    if ((iVar1 - 2U < 2) && (param_1[0x1540] == 1)) {
      iVar1 = 0;
      puVar10 = &DAT_0032a560;
      do {
        iVar2 = UiMgr_FindLayout(0xab);
        UiElem_SetPropFloat(0,*_g_UiMgr + iVar2 * 0x4f4 + 4,*puVar10,8);
        iVar1 = iVar1 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar1 < 6);
      iVar1 = 0;
      puVar11 = &DAT_0032a5a0;
      puVar10 = &DAT_0032a5c0;
      puVar13 = &DAT_0032a600;
      puVar14 = &DAT_0032a620;
      puVar15 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,iVar12,*puVar11,8);
        UiElem_SetPropFloat(0,iVar12,*puVar10,8);
        UiElem_SetPropFloat(0,iVar12,*puVar13,8);
        UiElem_SetPropFloat(0,iVar12,*puVar14,8);
        UiElem_SetPropFloat(0,iVar12,*puVar15,8);
        iVar1 = iVar1 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar1 < 7);
      UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
      param_1[0x1540] = 0;
    }
    iVar1 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,3,8);
    iVar1 = UiMgr_FindLayout(0xac);
    UiElem_SetPropFloat(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x18,8);
    if ((param_1[2] - 2U < 2) && (param_1[0x1541] == 1)) {
      iVar2 = UiMgr_FindLayout(0xab);
      iVar1 = *_g_UiMgr;
      uVar6 = UiRes_GetLayoutData(0xe3);
      UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar6);
      if ((0 < param_1[param_1[10] + 0xb] - *param_1) &&
         (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] != 0)) {
        UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5fc,8);
        goto LAB_0021fb58;
      }
      UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
      iVar1 = *param_1;
    }
    else {
LAB_0021fb58:
      iVar1 = *param_1;
    }
    param_1[1] = iVar1;
  }
  if (param_1[param_1[10] + 0x1d] < 7) {
LAB_0021d294:
    iVar1 = param_1[2];
  }
  else {
    MenuWnd_DrawCursor(1);
    if (param_1[param_1[10] + 0xb] == *param_1) {
      UiElem_SetPropFloat(0,iVar16,0x1e,8);
      iVar1 = param_1[10];
    }
    else {
      MenuWnd_DrawLabel(0xab,0x4d,0x452,5,0);
      iVar1 = param_1[10];
    }
    if (param_1[iVar1 + 0x1d] != (param_1[iVar1 + 0xb] - *param_1) + 6) {
      MenuWnd_DrawLabel(0xab,0x4e,0x453,5,0);
      goto LAB_0021d294;
    }
    UiElem_SetPropFloat(0,iVar16,0x1f,8);
    iVar1 = param_1[2];
  }
  if (iVar1 - 2U < 2) {
    lVar4 = UiLayout_UpdateAnimById(0xac,2);
    if (lVar4 == 0) {
      param_1[6] = 0;
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
      param_1[0x1541] = 0;
    }
    if ((param_1[6] == 0) || (param_1[0x1541] != 1)) goto LAB_0021d4ac;
    iVar1 = 0;
    puVar11 = &DAT_0032a5a0;
    puVar10 = &DAT_0032a5c0;
    puVar13 = &DAT_0032a600;
    puVar14 = &DAT_0032a620;
    puVar15 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(0,iVar12,*puVar11,8);
      UiElem_SetPropFloat(0,iVar12,*puVar10,8);
      UiElem_SetPropFloat(0,iVar12,*puVar13,8);
      UiElem_SetPropFloat(0,iVar12,*puVar14,8);
      UiElem_SetPropFloat(0,iVar12,*puVar15,8);
      iVar1 = iVar1 + 1;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar1 < 7);
    UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
    iVar1 = param_1[8];
  }
  else {
    lVar4 = UiLayout_UpdateAnimById(0xab,0);
    lVar5 = UiLayout_UpdateAnimById(0xac,0);
    if (lVar4 == 0 && lVar5 == 0) {
      iVar1 = 0;
      puVar11 = &DAT_0032a5a0;
      puVar10 = &DAT_0032a5c0;
      puVar13 = &DAT_0032a600;
      puVar14 = &DAT_0032a620;
      puVar15 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,iVar12,*puVar11,8);
        UiElem_SetPropFloat(0,iVar12,*puVar10,8);
        UiElem_SetPropFloat(0,iVar12,*puVar13,8);
        UiElem_SetPropFloat(0,iVar12,*puVar14,8);
        UiElem_SetPropFloat(0,iVar12,*puVar15,8);
        iVar1 = iVar1 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar1 < 7);
      UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
      param_1[6] = 0;
    }
LAB_0021d4ac:
    iVar1 = param_1[8];
  }
  if (iVar1 != 0) {
    if (param_1[4] == 2) {
      lVar4 = UiLayout_UpdateAnimById(0xac,3);
      if (lVar4 == 0) {
        param_1[8] = 0;
      }
    }
    else {
      iVar1 = 0;
      puVar11 = &DAT_0032a5a0;
      puVar10 = &DAT_0032a5c0;
      puVar13 = &DAT_0032a600;
      puVar14 = &DAT_0032a620;
      puVar15 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,iVar12,*puVar11,8);
        UiElem_SetPropFloat(0,iVar12,*puVar10,8);
        UiElem_SetPropFloat(0,iVar12,*puVar13,8);
        UiElem_SetPropFloat(0,iVar12,*puVar14,8);
        UiElem_SetPropFloat(0,iVar12,*puVar15,8);
        iVar1 = iVar1 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar1 < 7);
      UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
      lVar4 = UiLayout_UpdateAnimById(0xab,1);
      lVar5 = UiLayout_UpdateAnimById(0xac,1);
      if (lVar4 == 0 && lVar5 == 0) {
        param_1[8] = 0;
      }
    }
    MenuWnd_SetItemVisible(0);
  }
  if ((*piRam0036f468 == 1) && (param_1[0x153f] == 0)) {
    MenuWnd_SetItemState(0xab,(&DAT_0032a560)[*param_1],0,0);
  }
  MenuWnd_DrawText(0xaa,1,0x433);
  MenuWnd_DrawText(0xac,0x20,*(undefined4 *)(&DAT_0032a490 + param_1[10] * 4));
  MenuWnd_DrawText(0xac,0x1b,0x451);
  iVar1 = param_1[10];
  iVar8 = 0;
  iVar2 = 0;
  if (0 < param_1[iVar1 + 0x1d]) {
    piVar9 = param_1 + iVar1 * 200;
    do {
      if (*(char *)(param_1[0x153e] + iVar1 * 0x644 + piVar9[0x26] * 8 + 0x5320) == '\x01') {
        iVar8 = iVar8 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar2 < param_1[iVar1 + 0x1d]);
  }
  MenuWnd_DrawLabel(7,0x2e,0x456,iVar8);
  MenuWnd_DrawLabel(0xac,0x1a,0x447,param_1[param_1[10] + 0xb] + 1,param_1[param_1[10] + 0x1d]);
  iVar1 = 0;
  puVar10 = &DAT_0032a510;
  puVar11 = auStack_20;
  puVar13 = &DAT_0032a580;
  do {
    iVar2 = param_1[10];
    iVar8 = iVar1 + (param_1[iVar2 + 0xb] - *param_1);
    if (iVar8 < param_1[iVar2 + 0x1d]) {
      if (param_1[iVar2 * 200 + iVar8 + 0xe36] == 0) {
        if (*(char *)(param_1[0x153e] + iVar2 * 0x644 + param_1[iVar2 * 200 + iVar8 + 0x26] * 8 +
                     0x5320) == '\x01') {
          iVar2 = Rival_IsDefeated();
          if (*(int *)(iVar2 + 4) == 0) {
            uVar3 = *puVar11;
          }
          else {
            uVar3 = *puVar10;
          }
          iVar2 = param_1[10];
          MenuWnd_DrawRivalLabel
                    (0xab,uVar3,5,0x445,
                     param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26] +
                     *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,
                     param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26] +
                     *(int *)(&DAT_0032a530 + iVar2 * 4));
        }
        else {
          iVar2 = Rival_IsDefeated();
          if (*(int *)(iVar2 + 4) == 0) {
            uVar3 = *puVar11;
          }
          else {
            uVar3 = *puVar10;
          }
          iVar2 = param_1[10];
          MenuWnd_DrawLabel(0xab,uVar3,0x445,
                            param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,
                            param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a530 + iVar2 * 4));
        }
LAB_0021da2c:
        iVar2 = param_1[10];
      }
      else {
        if (*(char *)(param_1[0x153e] + iVar2 * 0x644 + param_1[iVar2 * 200 + iVar8 + 0x26] * 8 +
                     0x5320) != '\x01') {
          iVar2 = Rival_IsDefeated();
          if (*(int *)(iVar2 + 4) == 0) {
            uVar3 = *puVar11;
          }
          else {
            uVar3 = *puVar10;
          }
          iVar2 = param_1[10];
          MenuWnd_DrawLabel(0xab,uVar3,0x445,
                            param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26]
                            + *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,0xfffffffffffffffe);
          goto LAB_0021da2c;
        }
        iVar2 = Rival_IsDefeated();
        if (*(int *)(iVar2 + 4) == 0) {
          uVar3 = *puVar11;
        }
        else {
          uVar3 = *puVar10;
        }
        iVar2 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar3,5,0x445,
                   param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26] +
                   *(int *)(&DAT_0032a4e0 + iVar2 * 4),0,0xfffffffffffffffe);
        iVar2 = param_1[10];
      }
      uVar6 = Career_GetLevel(param_1[0x153e] + iVar2 * 0x644 +
                              param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26
                                     ] * 8 + 0x531c);
      iVar2 = Career_GetLevel(param_1[0x153e] + iVar2 * 0x644 +
                              param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26
                                     ] * 8 + 0x531c);
      MenuWnd_DrawLabel(0xab,*puVar13,0x444,uVar6,iVar2 % 7 + 0x44a);
    }
    iVar1 = iVar1 + 1;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  } while (iVar1 < 6);
  if (param_1[0x153f] == 1) {
    iVar1 = param_1[10];
    iVar2 = param_1[iVar1 + 0xb] - *param_1;
    if (param_1[iVar1 * 200 + iVar2 + 0xe35] == 0) {
      if (*(char *)(param_1[iVar1 * 200 + iVar2 + 0x25] * 8 + iVar1 * 0x644 + param_1[0x153e] +
                   0x5320) == '\x01') {
        iVar1 = Rival_IsDefeated();
        if (*(int *)(iVar1 + 4) == 0) {
          uVar3 = uStack_8;
        }
        else {
          uVar3 = DAT_0032a528;
        }
        iVar1 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar3,5,0x445,
                   param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25] +
                   *(int *)(&DAT_0032a4e0 + iVar1 * 4),0,
                   param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25] +
                   *(int *)(&DAT_0032a530 + iVar1 * 4));
      }
      else {
        iVar1 = Rival_IsDefeated();
        if (*(int *)(iVar1 + 4) == 0) {
          uVar3 = uStack_8;
        }
        else {
          uVar3 = DAT_0032a528;
        }
        iVar1 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar3,0x445,
                          param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a4e0 + iVar1 * 4),0,
                          param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a530 + iVar1 * 4));
      }
LAB_0021de10:
      iVar1 = param_1[10];
    }
    else {
      if (*(char *)(param_1[iVar1 * 200 + iVar2 + 0x25] * 8 + iVar1 * 0x644 + param_1[0x153e] +
                   0x5320) != '\x01') {
        iVar1 = Rival_IsDefeated();
        if (*(int *)(iVar1 + 4) == 0) {
          uVar3 = uStack_8;
        }
        else {
          uVar3 = DAT_0032a528;
        }
        iVar1 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar3,0x445,
                          param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25] +
                          *(int *)(&DAT_0032a4e0 + iVar1 * 4),0,0xfffffffffffffffe);
        goto LAB_0021de10;
      }
      iVar1 = Rival_IsDefeated();
      if (*(int *)(iVar1 + 4) == 0) {
        uVar3 = uStack_8;
      }
      else {
        uVar3 = DAT_0032a528;
      }
      iVar1 = param_1[10];
      MenuWnd_DrawRivalLabel
                (0xab,uVar3,5,0x445,
                 param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25] +
                 *(int *)(&DAT_0032a4e0 + iVar1 * 4),0,0xfffffffffffffffe);
      iVar1 = param_1[10];
    }
    uVar6 = Career_GetLevel(param_1[0x153e] + iVar1 * 0x644 +
                            param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25] * 8 +
                            0x531c);
    iVar1 = Career_GetLevel(param_1[0x153e] + iVar1 * 0x644 +
                            param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25] * 8 +
                            0x531c);
    MenuWnd_DrawLabel(0xab,DAT_0032a598,0x444,uVar6,iVar1 % 7 + 0x44a);
  }
  if (param_1[0x153f] == 2) {
    iVar1 = param_1[10];
    iVar2 = param_1[iVar1 + 0xb] - *param_1;
    if (param_1[iVar1 * 200 + iVar2 + 0xe3c] == 0) {
      if (*(char *)(param_1[iVar1 * 200 + iVar2 + 0x2c] * 8 + iVar1 * 0x644 + param_1[0x153e] +
                   0x5320) == '\x01') {
        iVar1 = Rival_IsDefeated();
        if (*(int *)(iVar1 + 4) == 0) {
          uVar3 = uStack_8;
        }
        else {
          uVar3 = DAT_0032a528;
        }
        iVar1 = param_1[10];
        MenuWnd_DrawRivalLabel
                  (0xab,uVar3,5,0x445,
                   param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c] +
                   *(int *)(&DAT_0032a4e0 + iVar1 * 4),0,
                   param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c] +
                   *(int *)(&DAT_0032a530 + iVar1 * 4));
      }
      else {
        iVar1 = Rival_IsDefeated();
        if (*(int *)(iVar1 + 4) == 0) {
          uVar3 = uStack_8;
        }
        else {
          uVar3 = DAT_0032a528;
        }
        iVar1 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar3,0x445,
                          param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a4e0 + iVar1 * 4),0,
                          param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a530 + iVar1 * 4));
      }
LAB_0021e1e0:
      iVar1 = param_1[10];
    }
    else {
      if (*(char *)(param_1[iVar1 * 200 + iVar2 + 0x2c] * 8 + iVar1 * 0x644 + param_1[0x153e] +
                   0x5320) != '\x01') {
        iVar1 = Rival_IsDefeated();
        if (*(int *)(iVar1 + 4) == 0) {
          uVar3 = uStack_8;
        }
        else {
          uVar3 = DAT_0032a528;
        }
        iVar1 = param_1[10];
        MenuWnd_DrawLabel(0xab,uVar3,0x445,
                          param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c] +
                          *(int *)(&DAT_0032a4e0 + iVar1 * 4),0,0xfffffffffffffffe);
        goto LAB_0021e1e0;
      }
      iVar1 = Rival_IsDefeated();
      if (*(int *)(iVar1 + 4) == 0) {
        uVar3 = uStack_8;
      }
      else {
        uVar3 = DAT_0032a528;
      }
      iVar1 = param_1[10];
      MenuWnd_DrawRivalLabel
                (0xab,uVar3,5,0x445,
                 param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c] +
                 *(int *)(&DAT_0032a4e0 + iVar1 * 4),0,0xfffffffffffffffe);
      iVar1 = param_1[10];
    }
    uVar6 = Career_GetLevel(param_1[0x153e] + iVar1 * 0x644 +
                            param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c] * 8 +
                            0x531c);
    iVar1 = Career_GetLevel(param_1[0x153e] + iVar1 * 0x644 +
                            param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c] * 8 +
                            0x531c);
    MenuWnd_DrawLabel(0xab,DAT_0032a598,0x444,uVar6,iVar1 % 7 + 0x44a);
  }
  if ((param_1[4] == 2) || ((param_1[8] == 0 && (param_1[6] == 0)))) {
    iVar1 = 0;
    puVar11 = &DAT_0032a5a0;
    puVar10 = &DAT_0032a600;
    puVar13 = &DAT_0032a5c0;
    puVar14 = &DAT_0032a620;
    puVar15 = &DAT_0032a5e0;
    do {
      iVar2 = param_1[10];
      if (iVar1 + (param_1[iVar2 + 0xb] - *param_1) < param_1[iVar2 + 0x1d]) {
        iVar2 = Rival_IsDefeated(iVar2,param_1[iVar2 * 200 +
                                               iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26]);
        if (*(int *)(iVar2 + 4) == 0) {
          if (iVar1 + (param_1[param_1[10] + 0xb] - *param_1) < param_1[param_1[10] + 0x1d]) {
            UiElem_SetPropFloat(0x3f800000,iVar12,*puVar11,8);
          }
          else {
            UiElem_SetPropFloat(0,iVar12,*puVar11,8);
          }
          iVar2 = param_1[10];
          lVar4 = Career_IsTeamDefeated
                            (param_1[0x153e],iVar2,
                             param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26]
                            );
          if (lVar4 == 0) {
            UiElem_SetPropFloat(0,iVar12,*puVar10,8);
          }
          else {
            UiElem_SetPropFloat(0x3f800000,iVar12,*puVar10,8);
          }
          UiElem_SetPropFloat(0,iVar12,*puVar13,8);
          UiElem_SetPropFloat(0,iVar12,*puVar14,8);
        }
        else {
          if (iVar1 + (param_1[param_1[10] + 0xb] - *param_1) < param_1[param_1[10] + 0x1d]) {
            UiElem_SetPropFloat(0x3f800000,iVar12,*puVar13,8);
          }
          else {
            UiElem_SetPropFloat(0,iVar12,*puVar13,8);
          }
          iVar2 = param_1[10];
          lVar4 = Career_IsTeamDefeated
                            (param_1[0x153e],iVar2,
                             param_1[iVar2 * 200 + iVar1 + (param_1[iVar2 + 0xb] - *param_1) + 0x26]
                            );
          if (lVar4 == 0) {
            UiElem_SetPropFloat(0,iVar12,*puVar14,8);
          }
          else {
            UiElem_SetPropFloat(0x3f800000,iVar12,*puVar14,8);
          }
          UiElem_SetPropFloat(0,iVar12,*puVar11,8);
          UiElem_SetPropFloat(0,iVar12,*puVar10,8);
        }
        if (param_1[param_1[10] * 200 + iVar1 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72e] ==
            0) {
          UiElem_SetPropFloat(0,iVar12,*puVar15,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,iVar12,*puVar15,8);
        }
      }
      else {
        UiElem_SetPropFloat(0,iVar12,*puVar11,8);
        UiElem_SetPropFloat(0,iVar12,*puVar13,8);
        UiElem_SetPropFloat(0,iVar12,*puVar10,8);
        UiElem_SetPropFloat(0,iVar12,*puVar14,8);
        UiElem_SetPropFloat(0,iVar12,*puVar15,8);
      }
      iVar1 = iVar1 + 1;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar1 < 6);
    if (param_1[0x153f] == 1) {
      if (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0) {
        UiElem_SetPropFloat(0,iVar12,DAT_0032a5f8,8);
        iVar1 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5f8,8);
        iVar1 = param_1[10];
      }
      if ((param_1[iVar1 + 0xb] - *param_1 < 1) ||
         (param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
        iVar1 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5fc,8);
        iVar1 = param_1[10];
      }
      iVar1 = Rival_IsDefeated(iVar1,param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25]
                              );
      if (*(int *)(iVar1 + 4) != 0) {
        iVar1 = param_1[10];
        lVar4 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar1,
                           param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25]);
        if (lVar4 == 0) {
          UiElem_SetPropFloat(0,iVar12,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a618,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a638,8);
        }
        else {
          UiElem_SetPropFloat(0,iVar12,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a618,8);
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a638,8);
        }
        goto LAB_0021e9c8;
      }
      iVar1 = param_1[10];
      lVar4 = Career_IsTeamDefeated
                        (param_1[0x153e],iVar1,
                         param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x25]);
      if (lVar4 == 0) {
        UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5b8,8);
        UiElem_SetPropFloat(0,iVar12,DAT_0032a5d8,8);
        UiElem_SetPropFloat(0,iVar12,DAT_0032a618,8);
        UiElem_SetPropFloat(0,iVar12,DAT_0032a638,8);
        goto LAB_0021e9c8;
      }
      UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5b8,8);
      UiElem_SetPropFloat(0,iVar12,DAT_0032a5d8,8);
      UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a618,8);
      UiElem_SetPropFloat(0,iVar12,DAT_0032a638,8);
      iVar1 = param_1[0x153f];
    }
    else {
LAB_0021e9c8:
      iVar1 = param_1[0x153f];
    }
    if (iVar1 == 2) {
      if (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x734] == 0) {
        UiElem_SetPropFloat(0,iVar12,DAT_0032a5f8,8);
        iVar1 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5f8,8);
        iVar1 = param_1[10];
      }
      if ((param_1[iVar1 + 0xb] < 1) ||
         (param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
        iVar1 = param_1[10];
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5fc,8);
        iVar1 = param_1[10];
      }
      iVar1 = Rival_IsDefeated(iVar1,param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c]
                              );
      if (*(int *)(iVar1 + 4) == 0) {
        iVar1 = param_1[10];
        lVar4 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar1,
                           param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c]);
        if (lVar4 == 0) {
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a618,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a638,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a618,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a638,8);
        }
      }
      else {
        iVar1 = param_1[10];
        lVar4 = Career_IsTeamDefeated
                          (param_1[0x153e],iVar1,
                           param_1[iVar1 * 200 + (param_1[iVar1 + 0xb] - *param_1) + 0x2c]);
        if (lVar4 == 0) {
          UiElem_SetPropFloat(0,iVar12,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a618,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a638,8);
        }
        else {
          UiElem_SetPropFloat(0,iVar12,DAT_0032a5b8,8);
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5d8,8);
          UiElem_SetPropFloat(0,iVar12,DAT_0032a618,8);
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a638,8);
        }
      }
    }
    uVar7 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar7) == 0) {
      uVar7 = 0x100000;
    }
    else if (uVar7 == 0x80000) {
      uVar7 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar7 = 0x100000;
    }
    if (uVar7 == 0x1000) {
      iVar2 = UiMgr_FindLayout(0xab);
      iVar1 = *_g_UiMgr;
      uVar6 = UiRes_GetLayoutData(0xe3);
      UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar6);
      if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
         (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
        UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
      }
      else {
        UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5fc,8);
      }
LAB_0021eedc:
      iVar1 = param_1[4];
    }
    else {
      if (uVar7 == 0x200) {
        iVar2 = UiMgr_FindLayout(0xab);
        iVar1 = *_g_UiMgr;
        uVar6 = UiRes_GetLayoutData(0xe3);
        UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar6);
        if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
           (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
          UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
        }
        else {
          UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5fc,8);
        }
        goto LAB_0021eedc;
      }
      iVar1 = param_1[4];
    }
    if (iVar1 == 0) {
      iVar1 = 0;
      puVar11 = &DAT_0032a5a0;
      puVar10 = &DAT_0032a5c0;
      puVar13 = &DAT_0032a600;
      puVar14 = &DAT_0032a620;
      puVar15 = &DAT_0032a5e0;
      do {
        UiElem_SetPropFloat(0,iVar12,*puVar11,8);
        UiElem_SetPropFloat(0,iVar12,*puVar10,8);
        UiElem_SetPropFloat(0,iVar12,*puVar13,8);
        UiElem_SetPropFloat(0,iVar12,*puVar14,8);
        UiElem_SetPropFloat(0,iVar12,*puVar15,8);
        iVar1 = iVar1 + 1;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar1 < 7);
      UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
    }
  }
  if ((param_1[0x153f] == 0) && (param_1[6] == 0)) {
    if ((param_1[param_1[10] + 0xb] - *param_1 < 1) ||
       (param_1[param_1[10] * 200 + (param_1[param_1[10] + 0xb] - *param_1) + 0x72d] == 0)) {
      UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
      iVar1 = param_1[0x153f];
      goto LAB_0021f034;
    }
    UiElem_SetPropFloat(0x3f800000,iVar12,DAT_0032a5fc,8);
  }
  iVar1 = param_1[0x153f];
LAB_0021f034:
  if ((iVar1 == 1) && (lVar4 = UiLayout_UpdateAnimById(0xab,2), lVar4 == 0)) {
    param_1[0x153f] = 0;
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    uVar3 = UiRes_GetLayoutData(0xe6);
    iVar1 = UiMgr_FindLayout(0xab);
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
    iVar2 = UiMgr_FindLayout(0xab);
    iVar1 = *_g_UiMgr;
    uVar6 = UiRes_GetLayoutData(0xe3);
    UiLayout_PlayAnim(iVar1 + iVar2 * 0x4f4 + 4,uVar6);
    Menu_ClearSlot(0);
    iVar1 = param_1[0x153f];
  }
  else {
    iVar1 = param_1[0x153f];
  }
  if ((iVar1 == 2) && (lVar4 = UiLayout_UpdateAnimById(0xab,3), lVar4 == 0)) {
    param_1[0x153f] = 0;
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffbfffff;
    uVar3 = UiRes_GetLayoutData(0xe3);
    iVar1 = UiMgr_FindLayout(0xab);
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
    iVar1 = param_1[10];
  }
  else {
    iVar1 = param_1[10];
  }
  if (param_1[iVar1 + 0x1d] < 6) {
    UiElem_SetPropFloat(0x41700000,iVar16,3,2);
    UiElem_SetPropFloat(0x41700000,iVar16,3,6);
    iVar1 = param_1[6];
  }
  else {
    UiElem_SetPropFloat((6.0 / (float)param_1[iVar1 + 0x1d]) * 15.0,iVar16,3,6);
    UiElem_SetPropFloat((240.0 / (float)param_1[param_1[10] + 0x1d]) *
                        (float)(param_1[param_1[10] + 0xb] - *param_1) + 15.0,iVar16,3,2);
    iVar1 = param_1[6];
  }
  if ((iVar1 != 0) && (param_1[2] == 0)) {
    iVar1 = 0;
    puVar11 = &DAT_0032a5a0;
    puVar10 = &DAT_0032a5c0;
    puVar13 = &DAT_0032a600;
    puVar14 = &DAT_0032a620;
    puVar15 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(0,iVar12,*puVar11,8);
      UiElem_SetPropFloat(0,iVar12,*puVar10,8);
      UiElem_SetPropFloat(0,iVar12,*puVar13,8);
      UiElem_SetPropFloat(0,iVar12,*puVar14,8);
      UiElem_SetPropFloat(0,iVar12,*puVar15,8);
      iVar1 = iVar1 + 1;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar1 < 7);
    UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
  }
  if ((param_1[8] != 0) && (param_1[4] == 0)) {
    iVar1 = 0;
    puVar11 = &DAT_0032a5a0;
    puVar10 = &DAT_0032a5c0;
    puVar13 = &DAT_0032a600;
    puVar14 = &DAT_0032a620;
    puVar15 = &DAT_0032a5e0;
    do {
      UiElem_SetPropFloat(0,iVar12,*puVar11,8);
      UiElem_SetPropFloat(0,iVar12,*puVar10,8);
      UiElem_SetPropFloat(0,iVar12,*puVar13,8);
      UiElem_SetPropFloat(0,iVar12,*puVar14,8);
      UiElem_SetPropFloat(0,iVar12,*puVar15,8);
      iVar1 = iVar1 + 1;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (iVar1 < 7);
    UiElem_SetPropFloat(0,iVar12,DAT_0032a5fc,8);
  }
  UiLayout_UpdateAnimById(0xa6,0);
  if (param_1[4] == 0) {
    iVar1 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x23,8);
    iVar1 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x24,8);
    iVar1 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x25,8);
    iVar1 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x26,8);
    iVar1 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x27,8);
    iVar1 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x29,8);
    iVar1 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x28,8);
    iVar1 = UiMgr_FindLayout(0xab);
    UiElem_SetPropFloat(0,*_g_UiMgr + iVar1 * 0x4f4 + 4,0x22,8);
  }
  iVar1 = UiMgr_FindLayout(0xa6);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xaa);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xab);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  iVar1 = UiMgr_FindLayout(0xac);
  UiLayout_Draw(0x3f800000,*_g_UiMgr + iVar1 * 0x4f4 + 4);
  return;
}

