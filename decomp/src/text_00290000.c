// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00290000 - 0x00294000
#include "ghidra_types.h"

// 0x002900a0  size 0xfc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_002900a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  Menu_HandleCursor(param_1 + 0x24,0,2,0x13,1,0);
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  if ((iVar1 + 1) % 0x14 == iVar2) {
    *(int *)(param_1 + 0x20) = iVar1;
    *(undefined1 *)(param_1 + 0x2c) = 2;
  }
  else if ((iVar2 + 9) % 0x14 == iVar1) {
    *(int *)(param_1 + 0x20) = (iVar2 + 1) % 0x14;
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x002901b0  size 0x1f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_select_sub_002901b0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  lVar2 = Menu_IsInputIdle();
  if (lVar2 == 0) {
    return;
  }
  iVar4 = (int)param_1;
  (*(code *)(&PTR_menuscr_input_sub_002900a0_0032e8d0)[*(int *)(iVar4 + 4)])(param_1);
  uVar3 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 != 0x20) {
    if (uVar3 != 0x10) goto LAB_002902f0;
    iVar1 = *(int *)(iVar4 + 0x38);
    if (*(int *)(iVar4 + 4) == 1) {
      Menu_BlockInput(_g_MenuMgr + 0x654);
    }
    if (iVar1 < 0) {
      if (iVar1 == -1) {
        MenuMgr_GetScreenParam(0xb);
        goto LAB_00290274;
      }
      if (iVar1 == -2) goto LAB_00290274;
      iVar4 = *(int *)(iVar4 + 0x38);
    }
    else {
      *(int *)(iVar4 + 8) = iVar1;
LAB_00290274:
      iVar4 = *(int *)(iVar4 + 0x38);
    }
    if (iVar4 == -2) {
      Se_PlayMenu(8);
    }
    else {
      Se_PlayMenu(5);
    }
    goto LAB_002902f0;
  }
  iVar1 = *(int *)(iVar4 + 0x3c);
  if (*(int *)(iVar4 + 4) == 1) {
    Menu_BlockInput(_g_MenuMgr + 0x654);
  }
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      MenuMgr_GetScreenParam(0xb);
      goto LAB_002902c4;
    }
    if (iVar1 == -2) goto LAB_002902c4;
    iVar4 = *(int *)(iVar4 + 0x3c);
  }
  else {
    *(int *)(iVar4 + 8) = iVar1;
LAB_002902c4:
    iVar4 = *(int *)(iVar4 + 0x3c);
  }
  if (iVar4 == -2) {
    Se_PlayMenu(8);
  }
  else {
    Se_PlayMenu(6);
  }
LAB_002902f0:
  Menu_RequestTransition(param_1);
  return;
}

// 0x002903b0  size 0x114
void scrcareer_step_sub_002903b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int aiStack_a0 [20];
  int aiStack_50 [20];
  
  uVar7 = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 1;
  param_1[7] = 0;
  param_1[5] = 1;
  param_1[3] = 1;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  puVar5 = param_1;
  do {
    puVar5[0x10] = 0xffffffff;
    uVar7 = uVar7 + 1;
    puVar5[0x11] = 0xffffffff;
    puVar5[0x12] = 0;
    puVar5 = puVar5 + 3;
  } while (uVar7 < 0x14);
  uVar3 = Profile_Get(0);
  iVar9 = 0;
  do {
    Rival_GetRecord(aiStack_a0,iVar9);
    piVar8 = aiStack_a0;
    piVar6 = aiStack_50;
    iVar4 = 10;
    do {
      iVar4 = iVar4 + -1;
      iVar1 = piVar8[1];
      *piVar6 = *piVar8;
      piVar6[1] = iVar1;
      piVar8 = piVar8 + 2;
      piVar6 = piVar6 + 2;
    } while (0 < iVar4);
    param_1[0x10] = aiStack_50[0];
    uVar2 = Profile_GetCourseRecord(uVar3,iVar9);
    iVar9 = iVar9 + 1;
    param_1[0x11] = uVar2;
    param_1[0x12] = (uint)(0 < *(short *)((int)uVar3 + aiStack_50[0] * 2 + 0x3fc4));
    param_1 = param_1 + 3;
  } while (iVar9 < 0x14);
  return;
}

// 0x002904e0  size 0x178
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_select_sub_002904e0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = Menu_IsInputIdle();
  if (lVar1 != 0) {
    uVar2 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar2) == 0) {
      uVar2 = 0x100000;
    }
    else if (uVar2 == 0x80000) {
      uVar2 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar2 = 0x100000;
    }
    if (uVar2 == 0x20) {
      MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
      Se_PlayMenu(6);
    }
    else if (uVar2 == 0x10) {
      MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
      Se_PlayMenu(5);
    }
    else {
      iVar3 = (int)param_1;
      if (uVar2 == 2) {
        if (*(int *)(iVar3 + 0x20) + 0xc < 0x11) {
          *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
          *(undefined1 *)(iVar3 + 0x24) = 0xff;
          Se_PlayMenu(7);
        }
        else {
          Se_PlayMenu(8);
        }
      }
      else if (uVar2 == 1) {
        if (*(int *)(iVar3 + 0x20) < 1) {
          Se_PlayMenu(8);
        }
        else {
          *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + -1;
          *(undefined1 *)(iVar3 + 0x24) = 1;
          Se_PlayMenu(7);
        }
      }
    }
    Menu_RequestTransition(param_1);
  }
  return;
}

// 0x002906a0  size 0x140
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_002906a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 0x20) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 4) - 1U < 6) {
      Menu_BlockInput(_g_MenuMgr + 0x654);
    }
    if (iVar1 < 0) {
      MenuMgr_GetScreenParam(0xb);
    }
    else {
      *(int *)(param_1 + 8) = iVar1;
    }
    Se_PlayMenu(6);
  }
  else if (uVar2 == 0x10) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 4) - 1U < 6) {
      Menu_BlockInput(_g_MenuMgr + 0x654);
    }
    if (iVar1 < 0) {
      MenuMgr_GetScreenParam(0xb);
    }
    else {
      *(int *)(param_1 + 8) = iVar1;
    }
    Se_PlayMenu(5);
  }
  return;
}

// 0x002907f0  size 0x7c
undefined4 menuscr_leaf_sub_002907f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 * 0xc + param_1;
  if (*(int *)(iVar2 + 0x48) == -1) {
    uVar1 = 5;
    if (*(int *)(param_1 + 4) == 5) {
      uVar1 = 6;
    }
  }
  else if (*(int *)(iVar2 + 0x40) == 0) {
    uVar1 = 3;
    if (*(int *)(param_1 + 4) == 3) {
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 1;
    if (*(int *)(param_1 + 4) == 1) {
      uVar1 = 2;
    }
  }
  return uVar1;
}

// 0x00290870  size 0x19c
void menuscr_step_sub_00290870(undefined8 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int extraout_a0_lo;
  undefined8 extraout_a0;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)param_1;
  iVar3 = piVar2[3];
  piVar2[3] = 0;
  if (iVar3 != 0) {
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[10] = (piVar2[8] + piVar2[9]) % 0x28;
    if (*piVar2 != 0) {
      piVar2[8] = piVar2[10];
      piVar2[9] = 0;
    }
    iVar3 = piVar2[10] + -1;
    if (iVar3 < 0) {
      iVar3 = 0x27;
    }
    else if (0x27 < iVar3) {
      iVar3 = 0;
    }
    uVar1 = menuscr_leaf_sub_002907f0(param_1,iVar3);
    *(undefined4 *)(extraout_a0_lo + 0x38) = uVar1;
    uVar1 = menuscr_leaf_sub_002907f0();
    *(undefined4 *)((int)extraout_a0 + 0x3c) = uVar1;
    param_1 = extraout_a0;
  }
  uVar4 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar4 = 0x100000;
  }
  iVar3 = (int)param_1;
  if (uVar4 == 8) {
    *(int *)(iVar3 + 0x20) = (*(int *)(iVar3 + 0x20) + 1) % 0x28;
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + 0x3c);
    Se_PlayMenu(7);
  }
  else if (uVar4 == 4) {
    *(int *)(iVar3 + 0x20) = (*(int *)(iVar3 + 0x20) + 0x27) % 0x28;
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + 0x38);
    Se_PlayMenu(7);
  }
  return;
}

// 0x00290a10  size 0x1cc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_00290a10(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1;
  iVar2 = piVar1[3];
  piVar1[3] = 0;
  if (iVar2 != 0) {
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[10] = (piVar1[8] + piVar1[9]) % 0x28;
    if (*piVar1 != 0) {
      piVar1[8] = piVar1[10];
      piVar1[9] = 0;
    }
    iVar2 = piVar1[10] + -1;
    if (iVar2 < 0) {
      iVar2 = 0x27;
    }
    else if (0x27 < iVar2) {
      iVar2 = 0;
    }
    iVar2 = menuscr_leaf_sub_002907f0(param_1,iVar2);
    piVar1[0xe] = iVar2;
    iVar2 = piVar1[10] + 1;
    if (iVar2 < 0) {
      iVar2 = 0x27;
    }
    else if (0x27 < iVar2) {
      iVar2 = 0;
    }
    iVar2 = menuscr_leaf_sub_002907f0(param_1,iVar2);
    piVar1[0xf] = iVar2;
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x121,2);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
  }
  uVar3 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 8) {
    piVar1[8] = (piVar1[8] + 1) % 0x28;
    piVar1[2] = piVar1[0xf];
    Se_PlayMenu(7);
  }
  else if (uVar3 == 4) {
    piVar1[8] = (piVar1[8] + 0x27) % 0x28;
    piVar1[2] = piVar1[0xe];
    Se_PlayMenu(7);
  }
  return;
}

// 0x00290be0  size 0x1cc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_00290be0(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1;
  iVar2 = piVar1[3];
  piVar1[3] = 0;
  if (iVar2 != 0) {
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[10] = (piVar1[8] + piVar1[9]) % 0x28;
    if (*piVar1 != 0) {
      piVar1[8] = piVar1[10];
      piVar1[9] = 0;
    }
    iVar2 = piVar1[10] + -1;
    if (iVar2 < 0) {
      iVar2 = 0x27;
    }
    else if (0x27 < iVar2) {
      iVar2 = 0;
    }
    iVar2 = menuscr_leaf_sub_002907f0(param_1,iVar2);
    piVar1[0xe] = iVar2;
    iVar2 = piVar1[10] + 1;
    if (iVar2 < 0) {
      iVar2 = 0x27;
    }
    else if (0x27 < iVar2) {
      iVar2 = 0;
    }
    iVar2 = menuscr_leaf_sub_002907f0(param_1,iVar2);
    piVar1[0xf] = iVar2;
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x121,2);
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
  }
  uVar3 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 8) {
    piVar1[8] = (piVar1[8] + 1) % 0x28;
    piVar1[2] = piVar1[0xf];
    Se_PlayMenu(7);
  }
  else if (uVar3 == 4) {
    piVar1[8] = (piVar1[8] + 0x27) % 0x28;
    piVar1[2] = piVar1[0xe];
    Se_PlayMenu(7);
  }
  return;
}

// 0x00290db0  size 0x1dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_00290db0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x28) * 0xc + param_1;
  if (*(int *)(iVar1 + 0x48) == -1) {
    *(undefined4 *)(param_1 + 0x30) = 5;
  }
  else if (*(int *)(iVar1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 2) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    if (8 < *(int *)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = 8;
      *(int *)(param_1 + 0x20) = (*(int *)(param_1 + 0x20) + 1) % 0x28;
      *(undefined1 *)(param_1 + 0x2c) = 0xff;
    }
    *(int *)(param_1 + 0x28) = (*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24)) % 0x28;
    Se_PlayMenu(7);
  }
  else if (uVar2 == 1) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    if (*(int *)(param_1 + 0x24) < 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(int *)(param_1 + 0x20) = (*(int *)(param_1 + 0x20) + 0x27) % 0x28;
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    *(int *)(param_1 + 0x28) = (*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24)) % 0x28;
    Se_PlayMenu(7);
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x00290fa0  size 0x5c
void menuscr_select_sub_00290fa0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = Menu_IsInputIdle();
  if (lVar1 != 0) {
    (*(code *)(&PTR_menuscr_step_sub_00290db0_0032e8e0)[*(int *)((int)param_1 + 4)])(param_1);
    menuscr_step_sub_002906a0(param_1);
    Menu_RequestTransition(param_1);
  }
  return;
}

// 0x00291000  size 0xd4
void scrcareer_step_sub_00291000(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined4 uStack_8;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 1;
  param_1[7] = 0;
  param_1[5] = 1;
  param_1[3] = 1;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = Profile_Get(0);
  iVar2 = 0;
  do {
    Profile_BuildRivalList(&uStack_10,uVar1,iVar2);
    iVar2 = iVar2 + 1;
    param_1[0x10] = uStack_10;
    *(undefined2 *)(param_1 + 0x11) = uStack_c;
    param_1[0x12] = uStack_8;
    param_1 = param_1 + 3;
  } while (iVar2 < 0x28);
  return;
}

// 0x002910e0  size 0x194
void scrrace_step_sub_002910e0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  iVar3 = (int)param_1;
  if (uVar2 == 0x1000) {
    if (*(int *)(iVar3 + 0x818) == 1) {
      Se_PlayMenu(5);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 8);
      scrrace_step_sub_00291280(param_1,0);
    }
    else if (*(int *)(iVar3 + 0x818) == 0) {
      Se_PlayMenu(5);
      scrrace_step_sub_00291280(param_1,1);
    }
  }
  else if (uVar2 == 0x10) {
    if (*(int *)(iVar3 + 0x868) == -3) {
      Se_PlayMenu(8);
      iVar1 = *(int *)(iVar3 + 0x818);
    }
    else {
      Se_PlayMenu(5);
      iVar1 = *(int *)(iVar3 + 0x818);
    }
    if (iVar1 == 1) {
      *(undefined4 *)(iVar3 + 0x24) = 1;
    }
    scrrace_step_sub_00291280(param_1,*(undefined4 *)(iVar3 + 0x868));
  }
  else if (uVar2 == 0x20) {
    if (*(int *)(iVar3 + 0x864) == -3) {
      Se_PlayMenu(8);
      iVar1 = *(int *)(iVar3 + 0x818);
    }
    else {
      Se_PlayMenu(6);
      iVar1 = *(int *)(iVar3 + 0x818);
    }
    if (iVar1 == 1) {
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 8);
    }
    scrrace_step_sub_00291280(param_1,*(undefined4 *)(iVar3 + 0x864));
  }
  return;
}

// 0x00291280  size 0x160
void scrrace_step_sub_00291280(int *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 unaff_s0;
  
  if (param_2 < 0) {
    if (param_2 == -1) {
      if (*param_1 == 0) {
        MenuMgr_GetScreenParam(0xb);
      }
      else {
        MenuMgr_GetScreenParam(0x15);
      }
    }
    else if (param_2 == -2) {
      iVar1 = RivalDb_Get((short)param_1[8]);
      uVar2 = Race_GetLapCountForMode(*(undefined4 *)(iVar1 + 0x14));
      iVar1 = param_1[0x203];
      if (iVar1 == 3) {
        if (((uVar2 & 0xff) == 7) || (unaff_s0 = 4, (uVar2 & 0xff) == 4)) {
          unaff_s0 = 5;
        }
      }
      else if (iVar1 == 2) {
        if (((uVar2 & 0xff) == 7) || ((uVar2 & 0xff) == 4)) {
          unaff_s0 = 2;
        }
        else {
          unaff_s0 = 1;
        }
      }
      else if (iVar1 == 1) {
        unaff_s0 = 3;
      }
      else if (iVar1 == 0) {
        unaff_s0 = 0;
      }
      RaceSetup_Build(6,param_1[0x204],0xffffffffffffffff,uVar2,unaff_s0,param_1[0x202] != 0,0,0);
      MenuMgr_GetScreenParam(0xfffffffffffffffe);
    }
  }
  else {
    param_1[0x207] = (int)param_2;
  }
  return;
}

// 0x002913e0  size 0x98
int scrcareer_step_sub_002913e0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = RivalDb_Get((short)*param_1);
  uVar2 = RivalRec_GetCarId(uVar2);
  uVar3 = RivalDb_Get((short)*param_2);
  uVar3 = RivalRec_GetCarId(uVar3);
  lVar4 = MenuText_CarShortName(uVar2,0xffffffffffffffff);
  lVar5 = MenuText_CarShortName(uVar3,0xffffffffffffffff);
  if (lVar4 == lVar5) {
    iVar1 = *param_1 - *param_2;
  }
  else {
    iVar1 = UiText_CompareById(lVar4,lVar5);
  }
  return iVar1;
}

// 0x00291480  size 0x3a4
void scrcareer_step_sub_00291480(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = 0;
  iVar1 = GameDb_FindRival();
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    uVar5 = Menu_MapCursorToItem();
    uVar4 = Race_GetOpponentCount(uVar5);
    iVar10 = 0;
    iVar8 = param_1;
    if (0 < iVar1) {
      do {
        uVar5 = RivalDb_Get((short)iVar10);
        uVar2 = RivalRec_GetTeam(uVar5);
        if ((2 < (uVar2 & 0xff) - 0xb) &&
           (iVar9 = RivalDb_Get((short)iVar10), (uVar4 & *(uint *)(iVar9 + 0x14)) != 0)) {
          *(int *)(iVar8 + 0x38) = iVar10;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
      *(int *)(param_1 + 0x14) = iVar7;
      return;
    }
    break;
  case 8:
    iVar8 = 0;
    if (0 < iVar1) {
      iVar9 = 0;
      iVar10 = param_1;
      do {
        uVar5 = RivalDb_Get((short)iVar8);
        uVar4 = RivalRec_GetTeam(uVar5);
        if ((2 < (uVar4 & 0xff) - 0xb) &&
           (iVar3 = Profile_Get(0), 0 < *(short *)(iVar3 + iVar9 + 0x3fc4))) {
          *(int *)(iVar10 + 0x38) = iVar8;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 4;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 2;
      } while (iVar8 < iVar1);
    }
    break;
  case 9:
    iVar8 = 0;
    if (0 < iVar1) {
      iVar9 = 0;
      iVar10 = param_1;
      do {
        uVar5 = RivalDb_Get((short)iVar8);
        uVar4 = RivalRec_GetTeam(uVar5);
        if ((2 < (uVar4 & 0xff) - 0xb) &&
           (iVar3 = Profile_Get(0), *(short *)(iVar3 + iVar9 + 0x3fc4) < 1)) {
          *(int *)(iVar10 + 0x38) = iVar8;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 4;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 2;
      } while (iVar8 < iVar1);
    }
    break;
  case 10:
    iVar8 = 0;
    if (0 < iVar1) {
      iVar9 = 0;
      iVar10 = param_1;
      do {
        uVar5 = RivalDb_Get((short)iVar8);
        uVar4 = RivalRec_GetTeam(uVar5);
        if ((2 < (uVar4 & 0xff) - 0xb) &&
           (iVar3 = Profile_Get(0), *(int *)(iVar3 + iVar9 + 0x37b0) == 1)) {
          *(int *)(iVar10 + 0x38) = iVar8;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 4;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar8 < iVar1);
    }
    maybe_qsort(param_1 + 0x38,iVar7,4,0x2913e0);
    break;
  case 0xb:
    iVar10 = 0;
    iVar8 = param_1;
    if (0 < iVar1) {
      do {
        uVar5 = RivalDb_Get((short)iVar10);
        uVar4 = RivalRec_GetTeam(uVar5);
        if (2 < (uVar4 & 0xff) - 0xb) {
          uVar5 = RivalDb_Get((short)iVar10);
          lVar6 = RivalRec_IsValid(uVar5);
          if (lVar6 != 0) {
            *(int *)(iVar8 + 0x38) = iVar10;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 4;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
    }
    break;
  case 0xc:
    iVar10 = 0;
    iVar8 = param_1;
    if (0 < iVar1) {
      do {
        uVar5 = RivalDb_Get((short)iVar10);
        uVar4 = RivalRec_GetTeam(uVar5);
        if (2 < (uVar4 & 0xff) - 0xb) {
          *(int *)(iVar8 + 0x38) = iVar10;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
    }
  }
  *(int *)(param_1 + 0x14) = iVar7;
  return;
}

// 0x00291830  size 0xe0
void scroptions_step_sub_00291830(int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (iVar1 != 0) {
    lVar2 = Options_Get_14();
    *(uint *)(param_1 + 0x810) = (uint)(lVar2 != 0);
    *(undefined4 *)(param_1 + 0x868) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x864) = 5;
  }
  uVar3 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar3 = 0x100000;
  }
  if ((uVar3 == 2) || (uVar3 == 1)) {
    Se_PlayMenu(7);
    *(uint *)(param_1 + 0x810) = *(int *)(param_1 + 0x810) != 0 ^ 1;
  }
  return;
}

// 0x00291920  size 0xe4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_00291920(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x864) = 3;
    *(undefined4 *)(param_1 + 0x868) = 6;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  Menu_HandleCursor(param_1 + 0x18,0,2,1,1,0);
  if (*(int *)(param_1 + 0x18) == 1) {
    Menu_HandleCursor(param_1 + 0x808,0,8,1,1,0);
  }
  else if (*(int *)(param_1 + 0x18) == 0) {
    Menu_HandleCursor(param_1 + 0x80c,0,8,3,1,0);
  }
  return;
}

// 0x00291a10  size 0xb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_00291a10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x864) = 3;
    *(undefined4 *)(param_1 + 0x80c) = 0;
    *(undefined4 *)(param_1 + 0x808) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  Menu_HandleCursor(param_1 + 0x18,0,2,1,1,0);
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x868) = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x868) = 3;
  }
  return;
}

// 0x00291ac0  size 0xc8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_00291ac0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1[0x208];
  param_1[0x208] = 0;
  if (iVar1 != 0) {
    uVar2 = MsgId_RivalProfile(param_1[8]);
    iVar1 = UiText_CountLinesById(uVar2);
    if (*param_1 == 1) {
      param_1[0x21a] = 4;
    }
    else {
      param_1[0x21a] = 2;
    }
    iVar1 = iVar1 + -5;
    param_1[0x219] = 2;
    param_1[0xc] = 0;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    param_1[0xd] = iVar1;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  }
  Menu_HandleCursor(param_1 + 0xc,0,2,param_1[0xd],0,0);
  return;
}

// 0x00291b90  size 0x2a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_00291b90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x864) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x1c) * 4 + param_1 + 0x38)
    ;
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  iVar2 = Profile_Get(0);
  if (*(int *)(iVar2 + *(int *)(*(int *)(param_1 + 0x1c) * 4 + param_1 + 0x38) * 4 + 0x37b0) == 1) {
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
    iVar2 = _g_MenuMgr;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) * 4 + param_1 + 0x38);
    *(undefined4 *)(_g_MenuMgr + 0x538) = 1;
    *(undefined4 *)(iVar2 + 0x53c) = uVar1;
  }
  else {
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  iVar2 = Profile_Get(0);
  if (*(short *)(iVar2 + *(int *)(*(int *)(param_1 + 0x1c) * 4 + param_1 + 0x38) * 2 + 0x3fc4) < 1)
  {
    *(undefined4 *)(param_1 + 0x868) = 0xfffffffd;
  }
  else {
    *(undefined4 *)(param_1 + 0x868) = 3;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  lVar3 = Menu_HandleCursor(param_1 + 0x1c,0,8,*(int *)(param_1 + 0x10) + -1,1,0);
  if (lVar3 == 1) {
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  if (iVar2 == iVar4) {
    return;
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
  if (uVar5 == 4) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  else {
    if (uVar5 != 8) {
      iVar2 = *(int *)(param_1 + 0x10);
      goto LAB_00291d80;
    }
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
LAB_00291d80:
  if (iVar2 < 9) {
    iVar4 = iVar2;
  }
  else {
    iVar4 = 9;
  }
  if (*(int *)(param_1 + 0x1c) + iVar4 < iVar2) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if (iVar2 < 9) {
      iVar4 = iVar2;
    }
    else {
      iVar4 = 9;
    }
    *(int *)(param_1 + 0x28) = (*(int *)(param_1 + 0x1c) + iVar4) - iVar2;
  }
  return;
}

// 0x00291e40  size 0xe4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_00291e40(int param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x868) = 0;
    *(undefined4 *)(param_1 + 0x864) = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x24) = 0;
    MenuList_Reset(param_1 + 0x834,0xca,3,2,*(undefined4 *)(param_1 + 4),0xd,7);
    *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_1 + 0xc);
    MenuList_HandleInput(param_1 + 0x834,0);
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  lVar2 = MenuList_HandleInput(param_1 + 0x834,0);
  if (lVar2 == 0) {
    if (*(int *)(param_1 + 0x834) == 2) {
      uVar3 = *(undefined4 *)(param_1 + 0x83c);
    }
    else {
      uVar3 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  return;
}

// 0x00291f30  size 0x31c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_input_sub_00291f30(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x868) = 2;
    *(undefined4 *)(param_1 + 0x864) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    if (*(int *)(param_1 + 0x24) == 1) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      scrcareer_step_sub_00291480();
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 < 9) {
        iVar1 = iVar2;
      }
      else {
        iVar1 = 9;
      }
      if (*(int *)(param_1 + 0x1c) + iVar1 < iVar2) {
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else {
        if (iVar2 < 9) {
          iVar1 = iVar2;
        }
        else {
          iVar1 = 9;
        }
        *(int *)(param_1 + 0x28) = (*(int *)(param_1 + 0x1c) + iVar1) - iVar2;
      }
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  Menu_HandleCursor(param_1 + 0x1c,0,2,*(int *)(param_1 + 0x10) + -1,1,0);
  uVar3 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 2) {
    if (iVar2 != *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      iVar2 = *(int *)(param_1 + 0x10) + -1;
      if (8 < iVar2) {
        iVar2 = 8;
      }
      if (iVar2 < *(int *)(param_1 + 0x28)) {
        if (*(int *)(param_1 + 0x10) < 10) {
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        else {
          *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          *(undefined4 *)(param_1 + 0x28) = 8;
        }
      }
    }
  }
  else if (uVar3 == 1) {
    if ((iVar2 != *(int *)(param_1 + 0x1c)) &&
       (*(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1, *(int *)(param_1 + 0x28) < 0)) {
      if (*(int *)(param_1 + 0x10) < 10) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x10) + -1;
      }
      else {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x2c) = 1;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
  }
  else if (uVar3 == 4) {
    iVar2 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = (iVar2 + *(int *)(param_1 + 0x10) + -9) % *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) == iVar2) {
      Se_PlayMenu(8);
    }
    else {
      Se_PlayMenu(7);
    }
  }
  else if (uVar3 == 8) {
    iVar2 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = (iVar2 + 9) % *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) == iVar2) {
      Se_PlayMenu();
    }
    else {
      Se_PlayMenu(7);
    }
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x00292260  size 0x60
void menuscr_select_sub_00292260(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x814);
  if (lVar1 != 0) {
    (*(code *)(&PTR_scrcareer_input_sub_00291f30_0032e900)[*(int *)(iVar2 + 0x818)])(param_1);
    scrrace_step_sub_002910e0(param_1);
    Menu_RequestTransition(iVar2 + 0x814);
  }
  return;
}

// 0x002922c0  size 0x2b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_step_sub_002922c0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  
  switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
  case 1:
    *(undefined4 *)(_g_MenuMgr + 0x598) = 0;
    break;
  case 2:
    *(undefined4 *)(_g_MenuMgr + 0x5dc) = 0;
    break;
  case 3:
    *(undefined4 *)(_g_MenuMgr + 0x5fc) = 0;
    break;
  case 4:
    *(undefined4 *)(_g_MenuMgr + 0x618) = 0;
  }
  puVar12 = (undefined4 *)param_1;
  if (*(int *)(_g_MenuMgr + 0x24) == 0xb) {
    *puVar12 = 0;
    puVar12[7] = 0;
  }
  else {
    *puVar12 = 1;
    cVar4 = RaceCtx_Get_8();
    if (cVar4 == '\x06') {
      RaceCtx_Set_8(0x13);
      iVar7 = GameState_Ptr_48();
      puVar12[7] = *(undefined4 *)(iVar7 + 0x80);
    }
    else {
      puVar12[7] = 0;
    }
  }
  bVar1 = true;
  bVar2 = true;
  bVar3 = true;
  iVar7 = GameDb_FindRival();
  iVar11 = 0;
  if (0 < iVar7) {
    iVar10 = 0;
    iVar9 = 0;
    do {
      uVar8 = RivalDb_Get((short)iVar11);
      uVar5 = RivalRec_GetTeam(uVar8);
      if (2 < (uVar5 & 0xff) - 0xb) {
        iVar6 = Profile_Get(0);
        if (*(int *)(iVar6 + iVar10 + 0x37b0) == 1) {
          bVar1 = false;
          iVar6 = Profile_Get(0);
          if (0 < *(short *)(iVar6 + iVar9 + 0x3fc4)) {
            bVar2 = false;
          }
        }
        else {
          bVar3 = false;
        }
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 4;
      iVar9 = iVar9 + 2;
    } while (iVar11 < iVar7);
  }
  puVar12[3] = 0x1fff;
  if (bVar1) {
    puVar12[3] = puVar12[3] & 0xfffffbff;
  }
  if (bVar2) {
    puVar12[3] = puVar12[3] & 0xfffffeff;
  }
  if (bVar3) {
    puVar12[3] = puVar12[3] & 0xfffffdff;
  }
  puVar12[0x205] = 0xffffffff;
  puVar12[0x206] = 0;
  puVar12[0x207] = 0;
  puVar12[0x209] = 1;
  puVar12[0x20c] = 0;
  puVar12[0x20a] = 1;
  puVar12[0x208] = 1;
  puVar12[0x20b] = 0;
  puVar12[1] = 0xc;
  puVar12[2] = 0xc;
  scrcareer_step_sub_00291480(param_1);
  puVar12[4] = puVar12[5];
  iVar7 = puVar12[4];
  if (iVar7 < 9) {
    iVar11 = iVar7;
  }
  else {
    iVar11 = 9;
  }
  if (puVar12[7] + iVar11 < iVar7) {
    puVar12[10] = 0;
  }
  else {
    if (iVar7 < 9) {
      iVar11 = iVar7;
    }
    else {
      iVar11 = 9;
    }
    puVar12[10] = (puVar12[7] + iVar11) - iVar7;
  }
  puVar12[9] = 0;
  MenuList_Init(_g_MenuMgr + 0x534);
  return;
}

// 0x00292570  size 0x120
void scrgarage_step_sub_00292570(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = Profile_Get(0);
  *(undefined4 *)(param_1 + 0x124) = 0;
  iVar8 = 0;
  iVar6 = param_1;
  iVar5 = iVar2;
  do {
    *(undefined4 *)(iVar6 + 0xc0) = 0xffffffff;
    sVar1 = *(short *)(iVar5 + 0x13ee);
    if (sVar1 != -1) {
      uVar7 = 0;
      do {
        uVar3 = Profile_GetCarRecordB(iVar2,sVar1);
        iVar4 = CarRec_GetPartSlotB(uVar3,uVar7 & 0xff);
        if ((long)*(char *)(iVar4 + 2) ==
            (long)*(int *)(param_1 + ((*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c)) %
                                     *(int *)(param_1 + 0xb4)) * 4 + 0x3c)) {
          *(int *)(param_1 + *(int *)(param_1 + 0x124) * 4 + 0xc0) = (int)sVar1;
          *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
          break;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x15);
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 2;
    if (0x18 < iVar8) {
      return;
    }
  } while( true );
}

// 0x00292690  size 0x64
bool scrcareer_step_sub_00292690(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = Profile_Get(0);
  cVar1 = Career_GetFlag(iVar2 + 0xd82c,
                         *(undefined4 *)
                          (((*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c)) %
                           *(int *)(param_1 + 0xb4)) * 4 + param_1 + 0x3c));
  return cVar1 == '\x02';
}

// 0x00292700  size 0x28
undefined4 menuscr_leaf_sub_00292700(int param_1)

{
  return *(undefined4 *)
          (((*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c)) % *(int *)(param_1 + 0xb4)) * 4 +
           param_1 + 0x3c);
}

// 0x00292730  size 0x1f0
void scrgarage_step_sub_00292730(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 != 0x20) {
    if (uVar3 != 0x10) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 < 0) {
      if (iVar2 == -1) {
        MenuMgr_GetScreenParam(0xb);
      }
    }
    else if (*(int *)(param_1 + 4) == 4) {
      uVar1 = Profile_Get(0);
      Garage_ApplyPart(uVar1,*(undefined1 *)
                              (((*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c)) %
                               *(int *)(param_1 + 0xb4)) * 4 + param_1 + 0x3c));
      *(int *)(param_1 + 8) = iVar2;
    }
    else {
      *(int *)(param_1 + 8) = iVar2;
    }
    Se_PlayMenu(5);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 < 0) {
    if (iVar2 == -1) {
      MenuMgr_GetScreenParam(0xb);
    }
    else if (iVar2 != -2) {
      iVar2 = *(int *)(param_1 + 0x24);
      goto LAB_00292804;
    }
  }
  else if (*(int *)(param_1 + 4) == 4) {
    uVar1 = Profile_Get(0);
    Garage_ApplyPart(uVar1,*(undefined1 *)
                            (((*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c)) %
                             *(int *)(param_1 + 0xb4)) * 4 + param_1 + 0x3c));
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    *(int *)(param_1 + 8) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x24);
LAB_00292804:
  if (iVar2 == -2) {
    Se_PlayMenu(8);
  }
  else {
    Se_PlayMenu(6);
  }
  return;
}

// 0x00292990  size 0x80
void menuscr_input_sub_00292990(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  Menu_HandleCursor(param_1 + 0x38,0,2,1,1,0);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  return;
}

// 0x00292a10  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_input_sub_00292a10(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[3] = 0;
  if (iVar1 != 0) {
    param_1[8] = 3;
    param_1[9] = 0;
    scrgarage_step_sub_00292570();
    if (*param_1 == 0) {
      param_1[0xd] = 0;
    }
  }
  iVar1 = param_1[0x49] + -6;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  Menu_HandleCursor(param_1 + 0xd,0,2,iVar1,0,0);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x00292ae0  size 0x2ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrcareer_input_sub_00292ae0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0xb8);
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    iVar2 = Profile_Get(0);
    uVar5 = 0;
    iVar3 = param_1;
    do {
      *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
      cVar1 = Career_GetFlag(iVar2 + 0xd82c,uVar5);
      if (cVar1 != '\0') {
        *(ulong *)(param_1 + 0xb8) = *(ulong *)(param_1 + 0xb8) | (long)(1 << (uVar5 & 0x1f));
        *(uint *)(param_1 + *(int *)(param_1 + 0xb4) * 4 + 0x3c) = uVar5;
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar5 < 0x1e);
    lVar4 = *(long *)(param_1 + 0xb8);
  }
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  else {
    iVar3 = Profile_Get(0);
    cVar1 = Career_GetFlag(iVar3 + 0xd82c,
                           *(undefined4 *)
                            (((*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c)) %
                             *(int *)(param_1 + 0xb4)) * 4 + param_1 + 0x3c));
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
    iVar3 = *(int *)(param_1 + 0xb4);
    if (1 < iVar3) {
      if (iVar3 < 4) {
        Menu_HandleCursor(param_1 + 0x2c,0,8,iVar3 + -1,1,0);
      }
      else {
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
        if (uVar5 == 8) {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          if (2 < *(int *)(param_1 + 0x2c)) {
            *(undefined4 *)(param_1 + 0x2c) = 2;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            if (*(int *)(param_1 + 0xb4) + -1 < *(int *)(param_1 + 0x28)) {
              *(undefined4 *)(param_1 + 0x28) = 0;
            }
            *(undefined1 *)(param_1 + 0x30) = 0xff;
          }
          Se_PlayMenu(7);
        }
        else if (uVar5 == 4) {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
          if (*(int *)(param_1 + 0x2c) < 0) {
            *(undefined4 *)(param_1 + 0x2c) = 0;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
            if (*(int *)(param_1 + 0x28) < 0) {
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0xb4) + -1;
            }
            *(undefined1 *)(param_1 + 0x30) = 1;
          }
          Se_PlayMenu(7);
        }
      }
    }
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x00292de0  size 0x5c
void scrgarage_select_sub_00292de0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = Menu_IsInputIdle();
  if (lVar1 != 0) {
    (*(code *)(&PTR_scrcareer_input_sub_00292ae0_0032e920)[*(int *)((int)param_1 + 4)])(param_1);
    scrgarage_step_sub_00292730(param_1);
    Menu_RequestTransition(param_1);
  }
  return;
}

// 0x00292e40  size 0x164
void scrcareer_step_sub_00292e40(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar3 = param_1;
  do {
    uVar4 = uVar4 + 1;
    puVar3[0x30] = 0xffffffff;
    puVar3 = puVar3 + 1;
  } while (uVar4 < 0x19);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x2d] = 0;
  iVar2 = Profile_Get(0);
  uVar4 = 0;
  puVar3 = param_1;
  do {
    puVar3[0xf] = 0xffffffff;
    cVar1 = Career_GetFlag(iVar2 + 0xd82c,uVar4);
    if (cVar1 != '\0') {
      *(ulong *)(param_1 + 0x2e) = *(ulong *)(param_1 + 0x2e) | (long)(1 << (uVar4 & 0x1f));
      param_1[param_1[0x2d] + 0xf] = uVar4;
      param_1[0x2d] = param_1[0x2d] + 1;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)uVar4 < 0x1e);
  if (param_1[0x2d] == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 5;
    param_1[2] = 5;
    param_1[4] = 1;
    param_1[7] = 0;
    param_1[5] = 1;
    param_1[3] = 1;
    param_1[6] = 0;
  }
  else {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 1;
    param_1[7] = 0;
    param_1[5] = 1;
    param_1[3] = 1;
    param_1[6] = 0;
  }
  return;
}

// 0x00292fb0  size 0x1b0
void scroptions_step_sub_00292fb0(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar4 = 0x100000;
  }
  piVar5 = (int *)param_1;
  if (uVar4 != 0x10) {
    if (uVar4 != 0x20) {
      return;
    }
    if ((piVar5[0xf] == -6) && (*piVar5 == 4)) {
      Se_PlayMenu(8);
      iVar1 = piVar5[0xf];
    }
    else {
      MenuSnd_Stop(piVar5[2]);
      Se_PlayMenu(6);
      iVar1 = piVar5[0xf];
    }
    scrrace_step_sub_00293170(param_1,iVar1);
    return;
  }
  iVar1 = piVar5[0x10];
  if (iVar1 == -4) {
    Se_PlayMenuVol(piVar5[2],0x60);
  }
  else if (iVar1 == -5) {
    MenuSnd_PlayVoice();
    MenuSnd_PlaySe(*(undefined4 *)(&DAT_0032e9f0 + piVar5[3] * 4),1);
    Se_PlayMenu(5);
  }
  else {
    if (iVar1 == -1) {
      MenuSnd_PlayVoice();
      uVar3 = Profile_Get(0);
      cVar2 = Profile_GetChapter(uVar3);
      uVar3 = 0xd;
      if (cVar2 != '\0') {
        uVar3 = 0xe;
      }
      MenuSnd_PlaySe(uVar3,1);
      Se_PlayMenu(5);
      iVar1 = piVar5[0x10];
      goto LAB_002930d8;
    }
    Se_PlayMenu(5);
  }
  iVar1 = piVar5[0x10];
LAB_002930d8:
  scrrace_step_sub_00293170(param_1,iVar1);
  return;
}

// 0x00293170  size 0xe0
void scrrace_step_sub_00293170(undefined4 *param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    if (param_2 == -1) {
      Menu_GetChapterIndex();
    }
    else if (param_2 == -2) {
      MenuMgr_GetScreenParam(0x13);
    }
    else if (param_2 == -3) {
      if ((&DAT_0032e940)[param_1[4] * 2] == 7) {
        uVar1 = (uint)*(byte *)(iRam0036f1d4 + 0x15);
      }
      else {
        uVar1 = 0;
      }
      iRam0036f2b4 = (&DAT_0032e940)[param_1[4] * 2] + uVar1;
      RaceCtx_Set_9(5);
      MenuMgr_GetScreenParam(0xfffffffffffffffd);
    }
    else if ((param_2 != -4) && (param_2 == -6)) {
      *param_1 = 4;
    }
  }
  else {
    param_1[9] = (int)param_2;
  }
  return;
}

// 0x00293250  size 0x160
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_00293250(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xfffffffd;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  Menu_HandleCursor(param_1 + 0x10,0,2,0x13,1,0);
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 2) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (6 < *(int *)(param_1 + 0x14)) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
      *(undefined4 *)(param_1 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0x14) = 6;
    }
  }
  else if ((uVar2 == 1) &&
          (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) < 0))
  {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x002933b0  size 0x12c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_002933b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xfffffffb;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  Menu_HandleCursor(param_1 + 0xc,0,8,0x11,1,0);
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 8) {
    *(undefined4 *)(param_1 + 0x18) = 2;
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
  }
  else if (uVar2 == 4) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x002934e0  size 0x13c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_002934e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xfffffffc;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  Menu_HandleCursor(param_1 + 8,0,8,0x14,1,0);
  if (iVar1 != *(int *)(param_1 + 8)) {
    MenuSnd_Stop(iVar1);
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
  }
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 8) {
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  else if (uVar2 == 4) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x00293620  size 0x9c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_input_sub_00293620(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[10];
  piVar2[10] = 0;
  if (iVar1 != 0) {
    piVar2[0xf] = -6;
    piVar2[4] = 0;
    piVar2[5] = 0;
  }
  Menu_HandleCursor(param_1,0,2,4,1,0);
  piVar2[0x10] = *(int *)(&DAT_0032ea40 + *piVar2 * 4);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x002936d0  size 0x84
void scroptions_select_sub_002936d0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = MenuSnd_StopBgm();
  if ((lVar1 == 0) && (lVar1 = MenuSnd_PlayBgm(), lVar1 == 0)) {
    MenuSnd_SetBgmVolume();
  }
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x1c);
  if (lVar1 != 0) {
    (*(code *)(&PTR_menuscr_input_sub_00293620_0032e9e0)[*(int *)(iVar2 + 0x20)])(param_1);
    scroptions_step_sub_00292fb0(param_1);
    Menu_RequestTransition(iVar2 + 0x1c);
  }
  return;
}

// 0x00293760  size 0x12c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_step_sub_00293760(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(_g_MenuMgr + 0x24) == 0x13) {
    *param_1 = 3;
    param_1[7] = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 1;
    param_1[0xe] = 0;
    param_1[0xc] = 1;
    param_1[10] = 1;
    param_1[0xd] = 0;
  }
  else {
    cVar2 = RaceCtx_GetMode();
    iVar1 = iRam0036f2b4;
    if (cVar2 == '\a') {
      iVar4 = 0;
      piVar3 = &DAT_0032e940;
      param_1[4] = 0;
      do {
        if (iVar1 == *piVar3) {
          param_1[4] = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar4 < 0x14);
      RaceCtx_Set_9(6);
      RaceCtx_SetMode(1);
      param_1[7] = 0xffffffff;
      param_1[8] = 3;
      param_1[9] = 3;
      param_1[0xb] = 1;
      param_1[0xe] = 0;
      param_1[0xc] = 1;
      param_1[10] = 1;
      param_1[0xd] = 0;
    }
    else {
      param_1[7] = 0xffffffff;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[0xb] = 1;
      param_1[0xe] = 0;
      param_1[0xc] = 1;
      param_1[10] = 1;
      param_1[0xd] = 0;
    }
  }
  return;
}

// 0x002938a0  size 0x15c
void scrrace_input_sub_002938a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 auStack_20 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auStack_20[0] = DAT_0032ea80;
  auStack_20[1] = DAT_0032ea84;
  auStack_20[2] = DAT_0032ea88;
  auStack_20[3] = DAT_0032ea8c;
  uStack_10 = DAT_0032ea90;
  uStack_c = DAT_0032ea94;
  uStack_8 = DAT_0032ea98;
  MenuList_HandleInput(param_1 + 4,0);
  uVar1 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 0x10) {
    Se_PlayMenu(5);
    if (*(int *)(param_1 + 4) == 2) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = -1;
    }
    if (iVar2 != -1) {
      MenuMgr_GetScreenParam(auStack_20[iVar2]);
    }
    if (iVar2 == 0) {
      RaceCtx_SetMode(1);
    }
  }
  else if (uVar1 == 0x20) {
    Se_PlayMenu(8);
  }
  return;
}

// 0x00293a00  size 0x19c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrace_step_sub_00293a00(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int aiStack_20 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = DAT_0032ea78;
  aiStack_20[0] = DAT_0032ea60;
  aiStack_20[1] = DAT_0032ea64;
  aiStack_20[2] = DAT_0032ea68;
  aiStack_20[3] = DAT_0032ea6c;
  uStack_10 = DAT_0032ea70;
  uStack_c = DAT_0032ea74;
  *param_1 = 7;
  iVar1 = *(int *)(_g_MenuMgr + 0x24);
  MenuList_Reset(param_1 + 1,0,2,3,0,*param_1,4);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) & 0xffffdfff;
  cVar3 = RaceCtx_GetMode();
  if (cVar3 == '\b') {
    MenuList_Reset(param_1 + 1,0,2,3,3,*param_1,4);
  }
  else if (iVar1 == 0x19) {
    cVar3 = RaceCtx_GetMode();
    if (cVar3 != '\x01') {
      MenuList_Reset(param_1 + 1,0,2,3,1,*param_1,4);
    }
  }
  else {
    RaceCtx_SetMode(9);
    iVar2 = *param_1;
    iVar5 = 0;
    if (0 < iVar2) {
      piVar4 = aiStack_20;
      do {
        if (iVar1 == *piVar4) {
          MenuList_Reset(param_1 + 1,0,2,3,iVar5,iVar2,4);
          return;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < iVar2);
    }
  }
  return;
}

// 0x00293ba0  size 0x2e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrsave_select_sub_00293ba0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  lVar3 = Menu_IsInputIdle(iVar6 + 0x568);
  if (*(int *)(iVar6 + 0x77c) == 0) {
    lVar5 = password_leaf_sub_002dcc30(iVar6 + 0x588);
    if (lVar5 == 0) {
      if (iRam0036f898 == 0) {
        uVar2 = SaveUi_Task(param_1,lVar3,0,0);
        *(uint *)(iVar6 + 0x770) = uVar2 & 0xff;
      }
      else {
        uVar2 = SaveUi_Task(param_1,lVar3,1,1);
        *(uint *)(iVar6 + 0x770) = uVar2 & 0xff;
      }
      if (*(int *)(iVar6 + 0x770) != *(int *)(iVar6 + 0x56c)) {
        *(int *)(iVar6 + 0x570) = *(int *)(iVar6 + 0x770);
      }
      iVar1 = *(int *)(iVar6 + 0x770);
      if (iVar1 == 3) {
        SaveMgr_Close(param_1);
        uRam0036f8a4 = 2;
        if (*(int *)(iVar6 + 0x24) == 0) {
          uRam0036f8a4 = 3;
        }
      }
      else if (iVar1 == 1) {
        SaveMgr_Close(param_1);
        *(undefined4 *)(iVar6 + 0x77c) = 1;
        if ((iRam0036f898 == 1) && (*(int *)(iVar6 + 0x24) != 0)) {
          uVar4 = Profile_Get();
          lVar3 = Garage_FindCar(uVar4);
          if (lVar3 == 0) {
            *(undefined4 *)(iVar6 + 0x770) = 0x25;
          }
        }
        if ((*(int *)(iVar6 + 0x24) != 0) && (iRam0036f898 != 1)) {
          GameDb_ApplyToProfile(0);
          GameDb_ApplyToProfile(1);
        }
      }
      else if (iVar1 == 0) {
        if (iRam0036f898 == 0) {
          SaveMgr_Open(param_1,1,0,0,0,0,0);
        }
        else {
          SaveMgr_Open(param_1,1,0,uRam0036f89c,iRam0036f8a0,1,0);
        }
      }
    }
  }
  else if (lVar3 != 0) {
    if (*(int *)(iVar6 + 0x770) == 0x25) {
      uVar2 = piRam0036f468[iRam0036f8a0 + 2];
      if ((piRam0036f468[iRam0036f8a0 + 4] & uVar2) == 0) {
        uVar2 = 0x100000;
      }
      else if (uVar2 == 0x80000) {
        uVar2 = 0x80000;
      }
      else if (*piRam0036f468 != 1) {
        uVar2 = 0x100000;
      }
      if (uVar2 == 0x10) {
        *(undefined4 *)(iVar6 + 0x770) = 1;
        Se_PlayMenu(5);
        MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
        uRam0036f8a4 = 3;
      }
    }
    else {
      uRam0036f8a4 = 2;
      if (*(int *)(iVar6 + 0x24) == 0) {
        uRam0036f8a4 = 3;
      }
      uVar4 = Profile_Get(0);
      lVar3 = Profile_GetDay(uVar4);
      if ((lVar3 == 0) && (*(int *)(_g_MenuMgr + 0x24) != 0x2b)) {
        MenuMgr_GetScreenParam(0x16);
      }
      else {
        MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
      }
    }
  }
  Save_IsBusy();
  Menu_RequestTransition(iVar6 + 0x568);
  return;
}

// 0x00293f90  size 0x19c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrsave_select_sub_00293f90(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  lVar3 = Menu_IsInputIdle(iVar5 + 0x568);
  if (*(int *)(iVar5 + 0x778) == 0) {
    lVar4 = password_leaf_sub_002dcc30(iVar5 + 0x588);
    if (lVar4 == 0) {
      uVar2 = SaveUi_Task(param_1,lVar3,0,0);
      *(uint *)(iVar5 + 0x770) = uVar2 & 0xff;
      if (*(int *)(iVar5 + 0x770) != *(int *)(iVar5 + 0x56c)) {
        *(int *)(iVar5 + 0x570) = *(int *)(iVar5 + 0x770);
      }
      iVar1 = *(int *)(iVar5 + 0x770);
      if (iVar1 == 3) {
        SaveMgr_Close(param_1);
      }
      else if (iVar1 == 1) {
        SaveMgr_Close(param_1);
        *(undefined4 *)(iVar5 + 0x778) = 1;
      }
      else if (iVar1 == 0) {
        SaveMgr_Open(param_1,2,0,0,0,0,0);
      }
    }
  }
  else if (lVar3 != 0) {
    lVar3 = RaceCtx_Get_4();
    if (lVar3 == 1) {
      RaceCtx_Set_4(0);
      MenuMgr_GetScreenParam(0x16);
    }
    else {
      iVar1 = *(int *)(_g_MenuMgr + 0x24);
      if (iVar1 == 0x20) {
        MenuMgr_GetScreenParam(0x16);
      }
      else if (iVar1 == 10) {
        if (*(int *)(iVar5 + 0x24) == 0) {
          MenuMgr_GetScreenParam();
        }
        else {
          MenuMgr_GetScreenParam(0x16);
        }
      }
      else {
        MenuMgr_GetScreenParam(iVar1);
      }
    }
  }
  Save_IsBusy();
  Menu_RequestTransition(iVar5 + 0x568);
  return;
}

