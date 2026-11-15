// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00288000 - 0x0028c000
#include "ghidra_types.h"

// 0x00288270  size 0x30
/* entry 27 of state table 0x32e6d0 used by maybe_ScrCarPassword_Update */

void maybe_ScrCarPassword_State27(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  return;
}

// 0x002882a0  size 0xc8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* entry 17 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State17(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    g_MenuMgr->unk_05f0 = *(uint *)(&DAT_0032b3d0 + *(int *)(param_1 + 0x30) * 4);
    Menu_SetField_8_9610(&g_MenuMgr->unk_05f0);
  }
  if (*(int *)(_g_TitleCamShared1 + 0xe8) == *(int *)(_g_TitleCamShared1 + 0xec)) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = 0xfffffffc;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffffc;
  }
  return;
}

// 0x00288370  size 0xe4
/* entry 16 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State16(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x38) < 1) {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    uVar3 = Profile_Get(0);
    uVar2 = Profile_GetMoney(uVar3);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
  }
  if (*(int *)(param_1 + 0x40) < 4) {
    *(undefined4 *)(param_1 + 0x6c) = 4;
    *(undefined4 *)(param_1 + 0x68) = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    *(undefined4 *)(param_1 + 0x68) = 1;
    lVar4 = GameState_Get_3a4();
    if ((lVar4 == 1) && (*(int *)(param_1 + 0x34) == 0)) {
      uVar3 = Profile_Get(0);
      lVar4 = Profile_GetCourseBest(uVar3,*(undefined4 *)(param_1 + 0x30));
      if (lVar4 == -1) {
        *(undefined4 *)(param_1 + 0x6c) = 5;
        *(undefined4 *)(param_1 + 0x68) = 5;
      }
    }
  }
  return;
}

// 0x00288460  size 0xdc
/* entry 15 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State15(int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x68) = 2;
    lVar2 = Options_Get_14();
    *(uint *)(param_1 + 0x24) = (uint)(lVar2 != 0);
  }
  uVar3 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar3 = 0x100000;
  }
  if ((uVar3 == 2) || (uVar3 == 1)) {
    Se_PlayMenu(7);
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) != 0 ^ 1;
  }
  return;
}

// 0x00288540  size 0x78
/* entry 14 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  Menu_HandleCursor(param_1 + 0xc,0,2,1,1,0);
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  return;
}

// 0x002885c0  size 0x2f4
/* entry 13 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State13(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar6 = (undefined4 *)param_1;
  iVar1 = puVar6[0x15];
  puVar6[0x15] = 0;
  if (iVar1 != 0) {
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
    puVar6[0x1a] = 0xfffffffd;
    puVar6[10] = 2;
  }
  maybe_Password_GetCurrentCarInfo(param_1);
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  puVar6[0x1b] = 2;
  uVar3 = Menu_MapCursorToItem(puVar6[5]);
  puVar6[6] = puVar6[7];
  Menu_HandleCursor(puVar6 + 7,0,8,puVar6[2] + 1,1,0);
  uVar8 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar8) == 0) {
    uVar7 = 0x100000;
  }
  else {
    uVar7 = 0x80000;
    if (uVar8 != 0x80000) {
      if (*g_MenuInput == 1) {
        uVar7 = uVar8;
      }
      else {
        uVar7 = 0x100000;
      }
    }
  }
  if (uVar7 == 4) {
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    puVar6[10] = 0;
    puVar6[8] = 0;
  }
  else {
    if ((g_MenuInput[4] & uVar8) == 0) {
      uVar8 = 0x100000;
    }
    else if (uVar8 == 0x80000) {
      uVar8 = 0x80000;
    }
    else if (*g_MenuInput != 1) {
      uVar8 = 0x100000;
    }
    if (uVar8 == 8) {
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      puVar6[10] = 1;
      puVar6[8] = 0;
    }
  }
  if (puVar6[7] == puVar6[2] + 1) {
    puVar6[1] = 0;
    uVar8 = 0;
    do {
      uVar4 = Profile_Get(0);
      uVar4 = Profile_GetCurrentCarModel(uVar4);
      lVar5 = Password_EncodeCar(uVar3,uVar8,uVar4);
      if (lVar5 != 0) {
        puVar6[1] = puVar6[1] | 1 << (uVar8 & 0x1f);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 3);
    Menu_HandleCursor(puVar6 + 8,0,2,2,1,0);
    uVar4 = Profile_Get(0);
    uVar4 = Profile_GetCurrentCarModel(uVar4);
    lVar5 = Password_EncodeCar(uVar3,puVar6[8],uVar4);
    if (lVar5 == 0) {
      puVar6[0x1b] = 7;
    }
  }
  else {
    Menu_HandleCursor(puVar6 + 8,0,2,7,1,*puVar6);
  }
  if (puVar6[0x1b] != 7) {
    iVar1 = puVar6[2];
    iVar2 = puVar6[7];
    uVar4 = Profile_Get(0);
    lVar5 = Password_GetRecordScore(uVar4,iVar2 == iVar1 + 1,uVar3,iVar2);
    if (lVar5 == 0) {
      puVar6[0x1b] = 6;
    }
  }
  puVar6[3] = 0;
  return;
}

// 0x002888c0  size 0x2c8
/* entry 12 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State12(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffffd;
  }
  iVar2 = Msg_ProfileStat(1);
  Menu_HandleCursor(param_1 + 0x14,0,2,iVar2,1,0);
  bVar1 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
  g_MenuMgr->unk_0620 = bVar1;
  g_MenuMgr->unk_0624 = 0xffffffff;
  g_MenuMgr->unk_0628 = 0xffffffff;
  g_MenuMgr->unk_05ac = bVar1;
  if (bVar1 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0:
      g_MenuMgr->unk_0640 = '\x01';
      break;
    case 1:
      g_MenuMgr->unk_0640 = '\0';
      break;
    case 2:
      g_MenuMgr->unk_0640 = '\x02';
      break;
    case 3:
      g_MenuMgr->unk_0640 = '\x03';
      break;
    case 4:
      g_MenuMgr->unk_0640 = '\x04';
      break;
    case 5:
      g_MenuMgr->unk_0640 = '\x05';
      break;
    case 6:
      g_MenuMgr->unk_0640 = '\x06';
      break;
    case 7:
      g_MenuMgr->unk_0640 = '\a';
    }
  }
  uVar7 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar7) == 0) {
    uVar8 = 0x100000;
  }
  else {
    uVar8 = 0x80000;
    if ((uVar7 != 0x80000) && (uVar8 = uVar7, *g_MenuInput != 1)) {
      uVar8 = 0x100000;
    }
  }
  if (uVar8 == 1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) < 0) {
      if (iVar2 < 4) {
        *(int *)(param_1 + 0x10) = iVar2;
      }
      else {
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  else {
    if ((g_MenuInput[4] & uVar7) == 0) {
      uVar7 = 0x100000;
    }
    else if (uVar7 == 0x80000) {
      uVar7 = 0x80000;
    }
    else if (*g_MenuInput != 1) {
      uVar7 = 0x100000;
    }
    if (uVar7 == 2) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      iVar3 = iVar2;
      if (3 < iVar2) {
        iVar3 = 3;
      }
      if (iVar3 < *(int *)(param_1 + 0x10)) {
        if (iVar2 < 4) {
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          *(undefined4 *)(param_1 + 0x28) = 1;
          *(undefined4 *)(param_1 + 0x10) = 3;
        }
      }
    }
  }
  uVar5 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x14));
  uVar6 = Profile_Get(0);
  uVar4 = Password_GetDigit(uVar6,uVar5);
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 0x00288b90  size 0x2c
/* menu screen 4 (table 0x3274b0) */

void maybe_ScrRecordPassword_Exit(void)

{
  g_MenuMgr->unk_05a0 = 0;
  g_MenuMgr->unk_05e8 = 0;
  g_MenuMgr->unk_060c = 0;
  g_MenuMgr->unk_0634 = 0;
  g_MenuMgr->unk_0644 = 0;
  return;
}

// 0x00288bc0  size 0x60
/* menu screen 4 (table 0x3274b0) */

void maybe_ScrRecordPassword_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x48);
  if (lVar1 != 0) {
    (*(code *)(&PTR_ScrGarageBuyCar_State12_0032e720)[*(int *)(iVar2 + 0x4c)])(param_1);
    maybe_ScrRecordPassword_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 0x48);
  }
  return;
}

// 0x00288c20  size 0x3d0
/* menu screen 4 (table 0x3274b0) */

void maybe_ScrRecordPassword_Enter(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 auStack_40 [16];
  
  maybe_Password_GetCurrentCarInfo();
  puVar8 = (undefined4 *)param_1;
  if (g_MenuMgr->prevScreen == 0xf) {
    puVar8[0x12] = 0xffffffff;
    puVar8[0x13] = 2;
    puVar8[0x14] = 2;
    puVar8[0x16] = 1;
    puVar8[0x19] = 0;
    puVar8[0x17] = 1;
    puVar8[0x15] = 1;
    puVar8[0x18] = 0;
    g_MenuMgr->unk_05a0 = 1;
    g_MenuMgr->unk_05e8 = 1;
    g_MenuMgr->unk_060c = 1;
    g_MenuMgr->unk_0634 = 1;
    g_MenuMgr->unk_0644 = 1;
  }
  else {
    cVar3 = RaceCtx_Get_8();
    if (cVar3 == '\x13') {
      uVar7 = 1;
      g_MenuMgr->unk_05a0 = 1;
      g_MenuMgr->unk_05e8 = 1;
      g_MenuMgr->unk_060c = 1;
      g_MenuMgr->unk_0634 = 1;
      g_MenuMgr->unk_0644 = 1;
      uVar4 = MsgId_ForOption(g_MenuMgr->unk_0620);
      puVar8[5] = uVar4;
      uVar5 = Menu_MapCursorToItem(puVar8[5]);
      uVar6 = Profile_Get(0);
      uVar4 = Password_GetDigit(uVar6,uVar5);
      puVar8[2] = uVar4;
      puVar8[7] = puVar8[2];
      puVar8[8] = 0;
      Menu_HandleCursor(puVar8 + 8,0,2,7,1,*puVar8);
      puVar8[4] = 0;
    }
    else {
      RaceCtx_Set_8();
      uVar7 = 4;
      uVar5 = RaceCtx_Get_10();
      uVar4 = MsgId_ForOption(uVar5);
      puVar8[5] = uVar4;
      uVar5 = Menu_MapCursorToItem(puVar8[5]);
      uVar6 = Profile_Get(0);
      uVar4 = Password_GetDigit(uVar6,uVar5);
      puVar8[2] = uVar4;
      uVar1 = g_GameState->unk_03a4;
      if (uVar1 == 1) {
        puVar8[7] = puVar8[2] + 1;
        puVar8[8] = g_GameState->unk_03a8;
      }
      else {
        puVar8[7] = g_GameState->unk_03a8;
        puVar8[8] = g_GameState->unk_03ac;
      }
      uVar4 = Password_GetModeCode();
      puVar8[0xd] = uVar4;
      if (puVar8[0xd] == 6) {
        puVar8[0xe] = 0;
      }
      else {
        uVar4 = Password_Generate();
        puVar8[0xe] = uVar4;
      }
      if (puVar8[0xd] == 0) {
        uVar5 = Profile_Get(0);
        uVar5 = Profile_GetCurrentCar(uVar5);
        uVar5 = CarRec_GetName(uVar5);
        uVar4 = Password_EncodeTeams(uVar5);
        puVar8[0xb] = uVar4;
      }
      else {
        puVar8[0xb] = 0;
      }
      if (uVar1 == 1) {
        uVar5 = Menu_MapCursorToItem(puVar8[5]);
        Course_GetVariantInfo(auStack_40,uVar5,puVar8[8]);
        puVar8[0xc] = auStack_40[0];
      }
      if (uVar1 == 0) {
        puVar8[0xf] = puVar8[7] + 1;
      }
      else {
        puVar8[0xf] = 10;
      }
      uVar5 = Profile_Get(0);
      Profile_EarnMoney(uVar5,puVar8[0xe],1);
      uVar5 = Profile_Get(0);
      Profile_EarnMoney(uVar5,puVar8[0xb] * puVar8[0xf],0);
      puVar8[4] = 0;
    }
    puVar8[3] = 0;
    puVar8[0x12] = 0xffffffff;
    puVar8[0x13] = uVar7;
    puVar8[0x14] = uVar7;
    puVar8[0x16] = 1;
    puVar8[0x19] = 0;
    puVar8[0x17] = 1;
    puVar8[0x15] = 1;
    puVar8[0x18] = 0;
  }
  bVar2 = Menu_MapCursorToItem(puVar8[5]);
  g_MenuMgr->unk_0620 = bVar2;
  g_MenuMgr->unk_0624 = 0xffffffff;
  g_MenuMgr->unk_0628 = 0xffffffff;
  g_MenuMgr->unk_05ac = bVar2;
  if (bVar2 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar2) {
    case 0:
      g_MenuMgr->unk_0640 = '\x01';
      break;
    case 1:
      g_MenuMgr->unk_0640 = '\0';
      break;
    case 2:
      g_MenuMgr->unk_0640 = '\x02';
      break;
    case 3:
      g_MenuMgr->unk_0640 = '\x03';
      break;
    case 4:
      g_MenuMgr->unk_0640 = '\x04';
      break;
    case 5:
      g_MenuMgr->unk_0640 = '\x05';
      break;
    case 6:
      g_MenuMgr->unk_0640 = '\x06';
      break;
    case 7:
      g_MenuMgr->unk_0640 = '\a';
    }
  }
  (*(code *)(&PTR_ScrGarageBuyCar_State12_0032e720)[puVar8[0x13]])(param_1);
  return;
}

// 0x00288ff0  size 0x1c8
void maybe_TeamList_FillPage(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = param_3 + -0xd;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  iVar4 = (int)param_2 * 4 + param_1;
  piVar6 = (int *)(iVar4 + 0x74);
  iVar4 = *(int *)(iVar4 + 0x74);
  iVar9 = param_3 + 0xd;
  if (iVar4 < param_3 + 0xd) {
    iVar9 = iVar4;
  }
  if (iVar8 < iVar9) {
    param_1 = param_1 + (int)param_2 * 800;
    iVar4 = param_1 + iVar8 * 4;
    do {
      *(undefined4 *)(iVar4 + 0x1cb8) = 0;
      *(undefined4 *)(iVar4 + 0x38d8) = 0;
      iVar7 = 0;
      if (0 < *piVar6) {
        iVar5 = param_1;
        do {
          piVar1 = (int *)Rival_IsDefeated(param_2,*(undefined4 *)(iVar4 + 0x98));
          iVar2 = *piVar1;
          piVar1 = (int *)Rival_IsDefeated(param_2,*(undefined4 *)(iVar5 + 0x98));
          if (iVar2 == *piVar1) {
            iVar2 = Rival_IsDefeated(param_2,*(undefined4 *)(iVar4 + 0x98));
            iVar2 = *(int *)(iVar2 + 4);
            iVar3 = Rival_IsDefeated(param_2,*(undefined4 *)(iVar5 + 0x98));
            if (iVar2 < *(int *)(iVar3 + 4)) {
              *(undefined4 *)(iVar4 + 0x1cb8) = 1;
            }
          }
          piVar1 = (int *)Rival_IsDefeated(param_2,*(undefined4 *)(iVar4 + 0x98));
          iVar2 = *piVar1;
          piVar1 = (int *)Rival_IsDefeated(param_2,*(undefined4 *)(iVar5 + 0x98));
          if (iVar2 == *piVar1) {
            iVar2 = Rival_IsDefeated(param_2,*(undefined4 *)(iVar4 + 0x98));
            iVar2 = *(int *)(iVar2 + 4);
            iVar3 = Rival_IsDefeated(param_2,*(undefined4 *)(iVar5 + 0x98));
            if (iVar2 == *(int *)(iVar3 + 0x10)) {
              *(undefined4 *)(iVar4 + 0x38d8) = 1;
            }
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar7 < *piVar6);
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar8 < iVar9);
  }
  return;
}

// 0x002891c0  size 0x8
/* follows TeamList_FillPage; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void TeamList_FillPage_Orphan1(void)

{
  return;
}

// 0x002891d0  size 0x478
/* WARNING: Removing unreachable block (ram,0x00289470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_TeamList_Build(int param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  uVar5 = Profile_Get(0);
  *(undefined4 *)(param_1 + 0x54f8) = uVar5;
  _s_TeamListVar1 = (int)param_2;
  iVar11 = _s_TeamListVar1 * 4 + param_1;
  piVar6 = (int *)(iVar11 + 0x74);
  param_1 = param_1 + _s_TeamListVar1 * 800;
  maybe_qsort(param_1 + 0x98,*(undefined4 *)(iVar11 + 0x74),4,0x289660);
  iVar11 = 0;
  if (0 < *piVar6 + -1) {
    do {
      iVar23 = param_1 + iVar11 * 4;
      iVar22 = 0;
      piVar7 = (int *)Rival_IsDefeated(param_2,*(undefined4 *)(iVar23 + 0x98));
      iVar19 = iVar11 + 1;
      if (iVar19 < *piVar6) {
        iVar21 = param_1 + iVar19 * 4;
        do {
          piVar8 = (int *)Rival_IsDefeated(param_2,*(undefined4 *)(iVar21 + 0x98));
          if (*piVar7 == *piVar8) {
            uVar5 = *(undefined4 *)(iVar21 + 0x98);
            iVar20 = iVar19 + -1;
            iVar22 = iVar22 + 1;
            if (iVar11 < iVar20) {
              if (8 < iVar20 - iVar11) {
                bVar3 = false;
                bVar2 = false;
                bVar1 = false;
                bVar4 = false;
                if ((iVar11 <= iVar20) && (-0x80000000 < iVar11)) {
                  bVar4 = true;
                }
                if ((bVar4) && (-0x80000000 < iVar19 + -1)) {
                  bVar1 = true;
                }
                if ((bVar1) && (iVar11 != -0x80000000)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  uVar12 = iVar19 - 1U & 0x80000000;
                  bVar1 = true;
                  if ((uVar12 == (-iVar11 & 0x80000000U)) &&
                     (uVar12 != (iVar20 - iVar11 & 0x80000000U))) {
                    bVar1 = false;
                  }
                  if (bVar1) {
                    bVar3 = true;
                  }
                }
                if (bVar3) {
                  iVar9 = iVar20 * 4;
                  iVar18 = param_1 + iVar9;
                  iVar17 = param_1 + -4 + iVar9;
                  iVar16 = param_1 + -8 + iVar9;
                  iVar15 = param_1 + -0xc + iVar9;
                  iVar14 = param_1 + -0x10 + iVar9;
                  iVar13 = param_1 + -0x14 + iVar9;
                  iVar10 = param_1 + -0x18 + iVar9;
                  iVar9 = param_1 + -0x1c + iVar9;
                  do {
                    iVar20 = iVar20 + -8;
                    *(undefined4 *)(iVar18 + 0x9c) = *(undefined4 *)(iVar18 + 0x98);
                    iVar18 = iVar18 + -0x20;
                    *(undefined4 *)(iVar17 + 0x9c) = *(undefined4 *)(iVar17 + 0x98);
                    iVar17 = iVar17 + -0x20;
                    *(undefined4 *)(iVar16 + 0x9c) = *(undefined4 *)(iVar16 + 0x98);
                    iVar16 = iVar16 + -0x20;
                    *(undefined4 *)(iVar15 + 0x9c) = *(undefined4 *)(iVar15 + 0x98);
                    iVar15 = iVar15 + -0x20;
                    *(undefined4 *)(iVar14 + 0x9c) = *(undefined4 *)(iVar14 + 0x98);
                    iVar14 = iVar14 + -0x20;
                    *(undefined4 *)(iVar13 + 0x9c) = *(undefined4 *)(iVar13 + 0x98);
                    iVar13 = iVar13 + -0x20;
                    *(undefined4 *)(iVar10 + 0x9c) = *(undefined4 *)(iVar10 + 0x98);
                    iVar10 = iVar10 + -0x20;
                    *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar9 + 0x98);
                    iVar9 = iVar9 + -0x20;
                  } while (iVar11 + 8 < iVar20);
                }
              }
              if (iVar11 < iVar20) {
                iVar9 = param_1 + iVar20 * 4;
                do {
                  iVar20 = iVar20 + -1;
                  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar9 + 0x98);
                  iVar9 = iVar9 + -4;
                } while (iVar11 < iVar20);
              }
            }
            *(undefined4 *)(iVar23 + 0x9c) = uVar5;
          }
          iVar19 = iVar19 + 1;
          iVar21 = iVar21 + 4;
        } while (iVar19 < *piVar6);
      }
      iVar19 = 0;
      if (0 < iVar22) {
        do {
          if (iVar19 < iVar22 + 1) {
            iVar20 = param_1 + iVar11 * 4 + iVar19 * 4;
            iVar21 = iVar19;
            do {
              iVar9 = Rival_IsDefeated(param_2,*(undefined4 *)(iVar23 + 0x98));
              iVar9 = *(int *)(iVar9 + 4);
              iVar10 = Rival_IsDefeated(param_2,*(undefined4 *)(iVar20 + 0x98));
              if (*(int *)(iVar10 + 4) < iVar9) {
                uVar5 = *(undefined4 *)(iVar23 + 0x98);
                *(undefined4 *)(iVar23 + 0x98) = *(undefined4 *)(iVar20 + 0x98);
                *(undefined4 *)(iVar20 + 0x98) = uVar5;
              }
              iVar21 = iVar21 + 1;
              iVar20 = iVar20 + 4;
            } while (iVar21 < iVar22 + 1);
          }
          iVar19 = iVar19 + 1;
          iVar23 = iVar23 + 4;
        } while (iVar19 < iVar22);
      }
      iVar11 = iVar11 + iVar22 + 1;
    } while (iVar11 < *piVar6 + -1);
  }
  return;
}

// 0x00289650  size 0x8
/* follows TeamList_Build; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void TeamList_Build_Orphan1(void)

{
  return;
}

// 0x00289660  size 0x90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int maybe_TeamList_CompareRivals(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = Profile_Get(0);
  Rival_IsDefeated(_s_TeamListVar1,*param_1);
  Rival_IsDefeated(_s_TeamListVar1,*param_2);
  iVar1 = _s_TeamListVar1 * 0x644 + iVar1 + 0x531c;
  return *(int *)(iVar1 + *param_2 * 8) - *(int *)(iVar1 + *param_1 * 8);
}

// 0x002896f0  size 0x11d0
void maybe_ScrTeamList_HandleInput(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  
  uVar5 = Profile_Get(0);
  piVar10 = (int *)param_1;
  iVar3 = piVar10[3];
  uVar8 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar8) == 0) {
    uVar8 = 0x100000;
  }
  else if (uVar8 == 0x80000) {
    uVar8 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar8 = 0x100000;
  }
  if (uVar8 == 0x400) {
    if (iVar3 != 2) {
      return;
    }
    iVar3 = piVar10[piVar10[10] + 0xb];
    piVar10[piVar10[10] + 0xb] = iVar3 + -1;
    if (-1 < iVar3 + -1) {
      iVar3 = piVar10[10];
      piVar4 = (int *)Rival_IsDefeated(iVar3,piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x27]);
      iVar2 = *piVar4;
      piVar4 = (int *)Rival_IsDefeated(iVar3,piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26]);
      if (iVar2 == *piVar4) {
        iVar3 = piVar10[piVar10[10] + 0x14];
        piVar10[piVar10[10] + 0x14] = iVar3 + -1;
        if (iVar3 + -1 < 0) {
          piVar10[piVar10[10] + 0x14] = piVar10[piVar10[10] + 0x14] + 1;
        }
        piVar10[0x1541] = 1;
        iVar3 = piVar10[10];
        if (*(char *)(piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26] * 8 +
                      iVar3 * 0x644 + piVar10[0x153e] + 0x5320) == '\x01') {
          Career_SetTeamDefeated(uVar5);
          Se_PlayMenu(0x12);
          return;
        }
        Se_PlayMenu(7);
        maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
        return;
      }
    }
    piVar10[piVar10[10] + 0xb] = piVar10[piVar10[10] + 0xb] + 1;
    Se_PlayMenu(8);
    return;
  }
  if (uVar8 == 0x2000) {
    if (iVar3 != 2) {
      return;
    }
    iVar3 = piVar10[10];
    iVar2 = piVar10[iVar3 + 0xb];
    piVar10[iVar3 + 0xb] = iVar2 + 1;
    if (iVar2 + 1 < piVar10[iVar3 + 0x1d]) {
      iVar3 = piVar10[10];
      piVar4 = (int *)Rival_IsDefeated(iVar3,piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x25]);
      iVar2 = *piVar4;
      piVar4 = (int *)Rival_IsDefeated(iVar3,piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26]);
      if (iVar2 == *piVar4) {
        iVar3 = piVar10[piVar10[10] + 0x14];
        piVar10[piVar10[10] + 0x14] = iVar3 + 1;
        if (5 < iVar3 + 1) {
          piVar10[piVar10[10] + 0x14] = piVar10[piVar10[10] + 0x14] + -1;
        }
        piVar10[0x1541] = 1;
        iVar3 = piVar10[10];
        if (*(char *)(piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26] * 8 +
                      iVar3 * 0x644 + piVar10[0x153e] + 0x5320) == '\x01') {
          Career_SetTeamDefeated(uVar5);
          Se_PlayMenu(0x12);
          return;
        }
        Se_PlayMenu(7);
        maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
        return;
      }
    }
    piVar10[piVar10[10] + 0xb] = piVar10[piVar10[10] + 0xb] + -1;
    Se_PlayMenu(8);
    return;
  }
  if (uVar8 == 0x200) {
    if (iVar3 != 2) {
      if (iVar3 != 1) {
        return;
      }
      if (piVar10[0x153f] != 0) {
        return;
      }
      iVar3 = piVar10[piVar10[10] + 0xb];
      if (5 < iVar3 - *piVar10) {
        piVar10[piVar10[10] + 0xb] = iVar3 + -6;
        maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
        Se_PlayMenu(7);
        return;
      }
      if (iVar3 == 0) {
        Se_PlayMenu(8);
        iVar3 = piVar10[10];
      }
      else {
        maybe_TeamList_FillPage(param_1);
        Se_PlayMenu(7);
        iVar3 = piVar10[10];
      }
      piVar10[iVar3 + 0xb] = 0;
      *piVar10 = 0;
      return;
    }
    if (piVar10[piVar10[10] + 0xb] == 0) {
      Se_PlayMenu(8);
      return;
    }
    iVar3 = piVar10[piVar10[10] + 0xb] + -1;
    if (iVar3 < 0) {
LAB_0028a7dc:
      iVar3 = piVar10[10];
    }
    else {
      iVar2 = iVar3 * 4;
      do {
        iVar9 = Rival_IsDefeated(piVar10[10],
                                 *(undefined4 *)((int)piVar10 + iVar2 + piVar10[10] * 800 + 0x98));
        if (*(int *)(iVar9 + 4) == 0) {
          iVar9 = piVar10[10];
          piVar4 = (int *)Rival_IsDefeated(iVar9,*(undefined4 *)
                                                  ((int)piVar10 + iVar2 + iVar9 * 800 + 0x98));
          iVar1 = *piVar4;
          piVar4 = (int *)Rival_IsDefeated(iVar9,piVar10[iVar9 * 200 + piVar10[iVar9 + 0xb] + 0x26])
          ;
          if (iVar1 != *piVar4) {
            iVar2 = piVar10[10];
            piVar10[iVar2 + 0x14] = piVar10[iVar2 + 0x14] - (piVar10[iVar2 + 0xb] - iVar3);
            if (piVar10[piVar10[10] + 0x14] < 0) {
              piVar10[piVar10[10] + 0x14] = 0;
            }
            piVar10[piVar10[10] + 0xb] = iVar3;
            iVar3 = piVar10[10];
            if (*(char *)(piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26] * 8 +
                          iVar3 * 0x644 + piVar10[0x153e] + 0x5320) == '\x01') {
              Career_SetTeamDefeated(uVar5);
              Se_PlayMenu(0x12);
            }
            else {
              Se_PlayMenu(7);
            }
            piVar10[0x1541] = 1;
            goto LAB_0028a7dc;
          }
        }
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + -4;
      } while (-1 < iVar3);
      iVar3 = piVar10[10];
    }
    maybe_TeamList_FillPage(param_1,iVar3,piVar10[iVar3 + 0xb]);
    return;
  }
  if (uVar8 == 0x1000) {
    if (iVar3 != 2) {
      if (iVar3 != 1) {
        return;
      }
      if (piVar10[0x153f] != 0) {
        return;
      }
      iVar3 = piVar10[10];
      iVar2 = piVar10[iVar3 + 0xb];
      iVar9 = piVar10[iVar3 + 0x1d];
      if ((iVar2 - *piVar10) + 0xc <= iVar9) {
        piVar10[iVar3 + 0xb] = iVar2 + 6;
        maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
        Se_PlayMenu(7);
        return;
      }
      if (iVar9 < 7) {
        if (iVar2 == iVar9 + -1) {
          Se_PlayMenu(8);
          maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
          iVar3 = piVar10[10];
        }
        else {
          Se_PlayMenu(7);
          maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
          iVar3 = piVar10[10];
        }
        piVar10[iVar3 + 0xb] = piVar10[iVar3 + 0x1d] + -1;
        *piVar10 = piVar10[piVar10[10] + 0x1d] + -1;
        return;
      }
      if (iVar9 < 2) {
        Se_PlayMenu(8);
        return;
      }
      if (iVar2 == iVar9 + -1) {
        Se_PlayMenu(8);
        maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
        iVar3 = piVar10[10];
      }
      else {
        Se_PlayMenu(7);
        maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
        iVar3 = piVar10[10];
      }
      piVar10[iVar3 + 0xb] = piVar10[iVar3 + 0x1d] + -1;
      *piVar10 = 5;
      return;
    }
    iVar3 = piVar10[10];
    if (piVar10[iVar3 + 0xb] == piVar10[iVar3 + 0x1d] + -1) {
      Se_PlayMenu(8);
      return;
    }
    iVar2 = piVar10[iVar3 + 0xb] + 1;
    if (iVar2 < piVar10[iVar3 + 0x1d]) {
      iVar9 = iVar2 * 4;
      do {
        iVar3 = Rival_IsDefeated(iVar3,*(undefined4 *)((int)piVar10 + iVar9 + iVar3 * 800 + 0x98));
        if (*(int *)(iVar3 + 4) == 0) {
          iVar3 = piVar10[10];
          piVar4 = (int *)Rival_IsDefeated(iVar3,*(undefined4 *)
                                                  ((int)piVar10 + iVar9 + iVar3 * 800 + 0x98));
          iVar1 = *piVar4;
          piVar4 = (int *)Rival_IsDefeated(iVar3,piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26])
          ;
          if (iVar1 != *piVar4) {
            iVar3 = piVar10[10];
            piVar10[iVar3 + 0x14] = piVar10[iVar3 + 0x14] + (iVar2 - piVar10[iVar3 + 0xb]);
            if (5 < piVar10[piVar10[10] + 0x14]) {
              piVar10[piVar10[10] + 0x14] = 5;
            }
            piVar10[piVar10[10] + 0xb] = iVar2;
            iVar3 = piVar10[10];
            if (*(char *)(piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26] * 8 +
                          iVar3 * 0x644 + piVar10[0x153e] + 0x5320) == '\x01') {
              Career_SetTeamDefeated(uVar5);
              Se_PlayMenu(0x12);
            }
            else {
              Se_PlayMenu(7);
            }
            piVar10[0x1541] = 1;
            goto LAB_0028a604;
          }
        }
        iVar3 = piVar10[10];
        iVar2 = iVar2 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar2 < piVar10[iVar3 + 0x1d]);
      iVar3 = piVar10[10];
    }
    else {
LAB_0028a604:
      iVar3 = piVar10[10];
    }
    maybe_TeamList_FillPage(param_1,iVar3,piVar10[iVar3 + 0xb]);
    if (iVar2 == piVar10[piVar10[10] + 0x1d]) {
      Se_PlayMenu(8);
      return;
    }
    return;
  }
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 == 0x10) {
        if (iVar3 == 3) {
          if (*piVar10 == 1) {
            piVar10[4] = 1;
            Se_PlayMenu(6);
            if (piVar10[0x1542] == piVar10[piVar10[10] + 0xb]) {
              piVar10[0x1541] = 0;
              return;
            }
            return;
          }
          if (*piVar10 != 0) {
            return;
          }
          iVar3 = piVar10[10];
          uVar7 = Career_FindTeam(uVar5,iVar3,piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26]);
          Profile_CountEventsSeen(uVar5,uVar7,0);
          iVar3 = piVar10[10];
          iVar2 = Profile_Get(0);
          piVar10[0x153e] = iVar2;
          piVar10[iVar3 + 0x1d] = 0;
          iVar9 = 0;
          iVar2 = 0;
          do {
            if (*(byte *)(iVar3 * 0x644 + piVar10[0x153e] + iVar2 + 0x5320) - 1 < 3) {
              iVar1 = piVar10[iVar3 + 0x1d];
              piVar10[iVar3 + 0x1d] = iVar1 + 1;
              piVar10[iVar3 * 200 + iVar1 + 0x26] = iVar9;
            }
            iVar9 = iVar9 + 1;
            iVar2 = iVar2 + 8;
          } while (iVar9 < 200);
          maybe_TeamList_Build(param_1,piVar10[10]);
          piVar10[4] = 2;
          piVar10[piVar10[10] + 0x14] = 1;
          piVar10[piVar10[10] + 0xb] = 1;
          piVar10[0x1540] = 1;
          piVar10[0x1541] = 1;
          Se_PlayMenu(5);
          return;
        }
        if (iVar3 == 2) {
          iVar3 = piVar10[10];
          lVar6 = Career_IsTeamDefeated
                            (uVar5,iVar3,piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26]);
          if (lVar6 != 0) {
            piVar10[4] = 3;
            Se_PlayMenu(5);
            return;
          }
          piVar10[4] = 1;
          Se_PlayMenu(6);
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          if (piVar10[0x1542] == piVar10[piVar10[10] + 0xb]) {
            piVar10[0x1541] = 0;
            return;
          }
          return;
        }
        if (iVar3 == 1) {
          iVar3 = piVar10[10];
          if (*(char *)(piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26] * 8 +
                        iVar3 * 0x644 + piVar10[0x153e] + 0x5320) == '\x01') {
            Career_SetTeamDefeated(uVar5);
            Se_PlayMenu(0x12);
          }
          else {
            Se_PlayMenu(5);
          }
          piVar10[4] = 2;
          return;
        }
        if (iVar3 == 0) {
          piVar10[4] = 1;
          maybe_TeamList_Build(param_1,*piVar10);
          Se_PlayMenu(5);
          return;
        }
        return;
      }
      if (uVar8 != 0x20) {
        return;
      }
      if (iVar3 == 3) {
        piVar10[4] = 2;
        Se_PlayMenu(6);
        return;
      }
      if (iVar3 == 2) {
        iVar3 = piVar10[10];
        lVar6 = Career_IsTeamDefeated
                          (uVar5,iVar3,piVar10[iVar3 * 200 + piVar10[iVar3 + 0xb] + 0x26]);
        if (lVar6 != 0) {
          piVar10[4] = 3;
          Se_PlayMenu(5);
          return;
        }
        piVar10[4] = 1;
        Se_PlayMenu(6);
        g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
        if (piVar10[0x1542] == piVar10[piVar10[10] + 0xb]) {
          piVar10[0x1541] = 0;
          return;
        }
        return;
      }
      if (iVar3 == 1) {
        piVar10[4] = 0;
        Se_PlayMenu(6);
        return;
      }
      if (iVar3 == 0) {
        MenuMgr_RequestScreen(8);
        Se_PlayMenu(6);
        return;
      }
      return;
    }
    if (iVar3 == 2) {
      return;
    }
    if (iVar3 != 1) {
      return;
    }
    if (piVar10[0x153f] != 0) {
      return;
    }
    *piVar10 = *piVar10 + 1;
    piVar10[piVar10[10] + 0xb] = piVar10[piVar10[10] + 0xb] + 1;
    if ((*piVar10 == 6) && (piVar10[piVar10[10] + 0x1d] != piVar10[piVar10[10] + 0xb])) {
      piVar10[0x153f] = 1;
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      UiLayout_UpdateAnimById((UiLayout *)0xab,2);
    }
    iVar3 = piVar10[10];
    if (piVar10[iVar3 + 0x1d] < 6) {
      if (piVar10[iVar3 + 0x1d] <= *piVar10) {
        *piVar10 = *piVar10 + -1;
        Se_PlayMenu(8);
        iVar3 = piVar10[10];
        goto LAB_00289c40;
      }
      maybe_TeamList_FillPage(param_1,iVar3,piVar10[iVar3 + 0xb]);
      Se_PlayMenu(7);
    }
    else if (*piVar10 < 6) {
      maybe_TeamList_FillPage(param_1,iVar3,piVar10[iVar3 + 0xb]);
      Se_PlayMenu(7);
    }
    else {
      *piVar10 = *piVar10 + -1;
      if (piVar10[0x153f] == 0) {
        Se_PlayMenu(8);
      }
      else {
        maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
        Se_PlayMenu(7);
      }
    }
    iVar3 = piVar10[10];
LAB_00289c40:
    if (piVar10[iVar3 + 0xb] < piVar10[iVar3 + 0x1d]) {
      return;
    }
    piVar10[iVar3 + 0xb] = piVar10[iVar3 + 0xb] + -1;
    return;
  }
  if (iVar3 == 2) {
    return;
  }
  if (iVar3 != 1) {
    return;
  }
  if (piVar10[0x153f] != 0) {
    return;
  }
  *piVar10 = *piVar10 + -1;
  piVar10[piVar10[10] + 0xb] = piVar10[piVar10[10] + 0xb] + -1;
  if ((*piVar10 == -1) && (piVar10[piVar10[10] + 0xb] != -1)) {
    piVar10[0x153f] = 2;
    g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
    UiLayout_UpdateAnimById((UiLayout *)0xab,3);
  }
  if (*piVar10 < 0) {
    *piVar10 = *piVar10 + 1;
    if (piVar10[0x153f] == 0) {
      Se_PlayMenu(8);
      iVar3 = piVar10[10];
      goto LAB_00289d50;
    }
    maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
    Se_PlayMenu(7);
  }
  else {
    maybe_TeamList_FillPage(param_1,piVar10[10],piVar10[piVar10[10] + 0xb]);
    Se_PlayMenu(7);
  }
  iVar3 = piVar10[10];
LAB_00289d50:
  if (piVar10[iVar3 + 0xb] < 0) {
    piVar10[iVar3 + 0xb] = piVar10[iVar3 + 0xb] + 1;
  }
  return;
}

// 0x0028a8c0  size 0x1c
/* entry 24 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State24(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x0028a8e0  size 0x18
/* entry 23 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State23(undefined8 param_1)

{
  Menu_HandleCursor(param_1,0,2,1,1,0);
  return;
}

// 0x0028a900  size 0xc4
/* entry 22 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State22(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  Profile_Get(0);
  puVar2 = (undefined4 *)param_1;
  iVar1 = puVar2[5];
  puVar2[5] = 0;
  if (iVar1 != 0) {
    if (puVar2[2] == 1) {
      puVar2[puVar2[10] + 0x14] = *puVar2;
      *puVar2 = 0;
      puVar2[0x1541] = 0;
      puVar2[0x1542] = puVar2[puVar2[10] + 0xb];
    }
    if (puVar2[2] == 3) {
      maybe_TeamList_FillPage(param_1,puVar2[10],puVar2[puVar2[10] + 0xb]);
    }
  }
  return;
}

// 0x0028a9d0  size 0xc0
/* entry 21 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State21(undefined4 *param_1)

{
  int iVar1;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  iVar1 = param_1[5];
  param_1[5] = 0;
  if (iVar1 != 0) {
    iVar1 = param_1[2];
    if (iVar1 == 0) {
      param_1[10] = *param_1;
      *param_1 = param_1[param_1[10] + 0x14];
      maybe_TeamList_FillPage(param_1,param_1[10],param_1[param_1[10] + 0xb]);
    }
    else if (iVar1 == 2) {
      *param_1 = param_1[param_1[10] + 0x14];
    }
    else if (iVar1 == 3) {
      *param_1 = param_1[param_1[10] + 0x14];
    }
  }
  return;
}

// 0x0028aa90  size 0x1b4
/* entry 20 of state table 0x32e6f0 used by ScrGarageBuyCar_Update */

void ScrGarageBuyCar_State20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  piVar5 = (int *)param_1;
  iVar2 = piVar5[5];
  piVar5[5] = 0;
  if ((iVar2 != 0) && (piVar5[2] == 1)) {
    piVar5[piVar5[10] + 0x14] = *piVar5;
    *piVar5 = piVar5[10];
  }
  uVar9 = 1;
  uVar8 = 0;
  piVar7 = &DAT_0032e760;
  do {
    iVar2 = Profile_Get(0);
    if (*(int *)(iVar2 + *piVar7 * 4 + 0x2708) != 0) {
      uVar9 = uVar9 | 1 << (uVar8 + 1 & 0x1f);
    }
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar8 < 8);
  iVar2 = Msg_ProfileStat(1);
  lVar4 = Menu_HandleCursor(param_1,0,2,iVar2 + 1,1,uVar9);
  if (lVar4 == 1) {
    iVar2 = *piVar5;
    iVar3 = Profile_Get(0);
    piVar5[0x153e] = iVar3;
    piVar5[iVar2 + 0x1d] = 0;
    iVar6 = 0;
    iVar3 = 0;
    do {
      if (*(byte *)(iVar2 * 0x644 + piVar5[0x153e] + iVar3 + 0x5320) - 1 < 3) {
        iVar1 = piVar5[iVar2 + 0x1d];
        piVar5[iVar2 + 0x1d] = iVar1 + 1;
        piVar5[iVar2 * 200 + iVar1 + 0x26] = iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar6 < 200);
  }
  return;
}

// 0x0028ac50  size 0x8
/* menu screen 5 (table 0x3274b0) */

void maybe_ScrTeamList_Exit(void)

{
  return;
}

// 0x0028ac60  size 0x60
/* menu screen 5 (table 0x3274b0) */

void maybe_ScrTeamList_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 8);
  if (lVar1 != 0) {
    (*(code *)(&PTR_ScrGarageBuyCar_State20_0032e740)[*(int *)(iVar2 + 0xc)])(param_1);
    maybe_ScrTeamList_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 8);
  }
  return;
}

// 0x0028acc0  size 0xf8
/* menu screen 5 (table 0x3274b0) */

void maybe_ScrTeamList_Enter(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = Profile_Get(0);
  param_1[0x153e] = uVar2;
  iVar4 = 0;
  param_1[0x1d] = 0;
  iVar5 = 0;
  do {
    if (*(byte *)(param_1[0x153e] + iVar5 + 0x5320) - 1 < 3) {
      iVar1 = param_1[0x1d];
      param_1[0x1d] = iVar1 + 1;
      param_1[iVar1 + 0x26] = iVar4;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 8;
  } while (iVar4 < 200);
  param_1[2] = 0xffffffff;
  iVar4 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 1;
  param_1[9] = 0;
  param_1[7] = 1;
  param_1[5] = 1;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[0x153f] = 0;
  puVar3 = param_1;
  do {
    puVar3[0xb] = 0;
    iVar4 = iVar4 + 3;
    puVar3[0x14] = 0;
    puVar3[0xc] = 0;
    puVar3[0x15] = 0;
    puVar3[0xd] = 0;
    puVar3[0x16] = 0;
    puVar3 = puVar3 + 3;
  } while (iVar4 < 9);
  param_1[0x1540] = 0;
  return;
}

// 0x0028adc0  size 0x78
int Profile_Get_Wrap(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = Profile_Get(0);
  return *(int *)(*param_2 * 0xc + iVar1 + 0x8b80) - *(int *)(*param_1 * 0xc + iVar1 + 0x8b80);
}

// 0x0028ae40  size 0x2e0
void maybe_ScrEventList_HandleInput(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[2];
  if (param_1[0xdf] == 0) {
    uVar2 = g_MenuInput[2];
    if ((g_MenuInput[4] & uVar2) == 0) {
      uVar2 = 0x100000;
    }
    else if (uVar2 == 0x80000) {
      uVar2 = 0x80000;
    }
    else if (*g_MenuInput != 1) {
      uVar2 = 0x100000;
    }
    if ((uVar2 == 0x8000) || (uVar2 == 0x200)) {
      if (iVar1 == 0) {
        if (*param_1 < 1) {
          Se_PlayMenu(8);
        }
        else {
          *param_1 = *param_1 + -3;
          if (*param_1 < 0) {
            *param_1 = 0;
          }
          Se_PlayMenu(7);
        }
      }
    }
    else if ((uVar2 == 0x20000) || (uVar2 == 0x1000)) {
      if (iVar1 == 0) {
        if (*param_1 < param_1[0x15] + -3) {
          *param_1 = *param_1 + 3;
          if (param_1[0x15] + -3 < *param_1) {
            *param_1 = param_1[0x15] + -3;
          }
          Se_PlayMenu(7);
        }
        else {
          Se_PlayMenu(8);
        }
      }
    }
    else if (uVar2 == 1) {
      if (iVar1 == 0) {
        if (*param_1 < 1) {
          Se_PlayMenu(8);
        }
        else {
          *param_1 = *param_1 + -1;
          param_1[0xdf] = 2;
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          UiLayout_UpdateAnimById((UiLayout *)0xa8,3);
          Se_PlayMenu(7);
        }
      }
    }
    else if (uVar2 == 2) {
      if (iVar1 == 0) {
        if (*param_1 < param_1[0x15] + -3) {
          *param_1 = *param_1 + 1;
          param_1[0xdf] = 1;
          g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
          UiLayout_UpdateAnimById((UiLayout *)0xa8,2);
          Se_PlayMenu(7);
        }
        else {
          Se_PlayMenu(8);
        }
      }
    }
    else if (uVar2 == 0x10) {
      if (iVar1 == 0) {
        MenuMgr_RequestScreen(8);
        Se_PlayMenu(6);
      }
    }
    else if ((uVar2 == 0x20) && (iVar1 == 0)) {
      MenuMgr_RequestScreen(8);
      Se_PlayMenu(6);
    }
  }
  return;
}

// 0x0028b120  size 0x1c
void maybe_MenuMgr_SetLeaveFlagsA(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x0028b140  size 0x8
/* menu screen 6 (table 0x3274b0) */

void maybe_ScrEventList_Exit(void)

{
  return;
}

// 0x0028b150  size 0x5c
/* menu screen 6 (table 0x3274b0) */

void maybe_ScrEventList_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 4);
  if (lVar1 != 0) {
    (**(code **)(*(int *)(iVar2 + 8) * 4 + 0x36ee10))(param_1);
    maybe_ScrEventList_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 4);
  }
  return;
}

// 0x0028b1b0  size 0x10c
/* menu screen 6 (table 0x3274b0) */

void maybe_ScrEventList_Enter(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = Profile_Get(0);
  param_1[0xde] = uVar1;
  iVar5 = 0;
  param_1[0x15] = 0;
  lVar3 = GameDb_GetEventCount();
  if (0 < lVar3) {
    iVar4 = 0;
    do {
      if (*(byte *)(param_1[0xde] + iVar4 + 0x8b84) - 1 < 2) {
        iVar2 = param_1[0x15];
        param_1[0x15] = iVar2 + 1;
        param_1[iVar2 + 0x16] = iVar5;
      }
      iVar4 = iVar4 + 0xc;
      iVar5 = iVar5 + 1;
      iVar2 = GameDb_GetEventCount();
    } while (iVar5 < iVar2);
  }
  maybe_qsort(param_1 + 0x16,param_1[0x15],4,0x28adc0);
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 1;
  param_1[8] = 0;
  param_1[6] = 1;
  param_1[4] = 1;
  param_1[7] = 0;
  g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
  *param_1 = 0;
  return;
}

// 0x0028b2c0  size 0x1a0
void maybe_ScrBlank08_HandleInput(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 2) {
    *param_1 = *param_1 + 1;
    Se_PlayMenu(7);
  }
  else if (uVar2 == 1) {
    *param_1 = *param_1 + -1;
    Se_PlayMenu(7);
  }
  else if (uVar2 == 0x10) {
    if (param_1[2] == 0) {
      iVar1 = *param_1;
      if (iVar1 == 2) {
        MenuMgr_RequestScreen(7);
      }
      else if (iVar1 == 1) {
        MenuMgr_RequestScreen(5);
      }
      else if (iVar1 == 0) {
        MenuMgr_RequestScreen(6);
      }
      Se_PlayMenu(5);
    }
  }
  else {
    if (uVar2 != 0x20) {
      iVar1 = *param_1;
      goto LAB_0028b41c;
    }
    if (param_1[2] == 0) {
      MenuMgr_RequestScreen(0xb);
      Se_PlayMenu(6);
    }
  }
  iVar1 = *param_1;
LAB_0028b41c:
  if (iVar1 < 0) {
    iVar1 = 2;
  }
  else if (2 < iVar1) {
    iVar1 = 0;
  }
  *param_1 = iVar1;
  return;
}

// 0x0028b460  size 0x1c
void maybe_MenuMgr_SetLeaveFlagsB(void)

{
  g_MenuMgr->flags = g_MenuMgr->flags | 0x1c000;
  return;
}

// 0x0028b480  size 0x8
/* menu screen 8 (table 0x3274b0) */

void maybe_ScrBlank08_Exit(void)

{
  return;
}

// 0x0028b490  size 0x5c
/* menu screen 8 (table 0x3274b0) */

void maybe_ScrBlank08_Update(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 4);
  if (lVar1 != 0) {
    (**(code **)(*(int *)(iVar2 + 8) * 4 + 0x36ee14))(param_1);
    maybe_ScrBlank08_HandleInput(param_1);
    Menu_RequestTransition(iVar2 + 4);
  }
  return;
}

// 0x0028b4f0  size 0x90
/* menu screen 8 (table 0x3274b0) */

void maybe_ScrBlank08_Enter(undefined4 *param_1)

{
  uint uVar1;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 1;
  param_1[8] = 0;
  param_1[6] = 1;
  param_1[4] = 1;
  param_1[7] = 0;
  g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
  uVar1 = g_MenuMgr->prevScreen;
  if (uVar1 == 7) {
    *param_1 = 2;
  }
  else if (uVar1 == 5) {
    *param_1 = 1;
  }
  else if ((uVar1 == 6) || (uVar1 == 0xb)) {
    *param_1 = 0;
  }
  return;
}

// 0x0028b580  size 0x120
int maybe_Mail_CountMessages(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 == 1) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = Profile_Get(0);
      if ((-1 < *(int *)(iVar1 + iVar2 + 0x9994)) &&
         (iVar1 = Profile_Get(0), *(char *)(iVar1 + iVar2 + 0x999c) == '\x01')) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < 200);
  }
  else if (param_1 == 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = Profile_Get(0);
      if ((-1 < *(int *)(iVar1 + iVar2 + 0xb8d4)) &&
         (iVar1 = Profile_Get(0), *(char *)(iVar1 + iVar2 + 0xb8dc) == '\x01')) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < 200);
  }
  return iVar4;
}

// 0x0028b6a8  size 0x8
/* follows Mail_CountMessages; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void Mail_CountMessages_Orphan1(void)

{
  return;
}

// 0x0028b6b0  size 0x130
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_ScrRivalList_ClearSlots(int param_1)

{
  int iVar1;
  
  _s_ScrRivalList_ClearSlots_1 = 0;
  do {
    *(undefined4 *)(param_1 + _s_ScrRivalList_ClearSlots_1 * 4 + 0x2c) = 0;
    _s_ScrRivalList_ClearSlots_1 = _s_ScrRivalList_ClearSlots_1 + 1;
  } while (_s_ScrRivalList_ClearSlots_1 < 2);
  _s_ScrRivalList_ClearSlots_1 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x680) + _s_ScrRivalList_ClearSlots_1 * 0x28;
    if ((-1 < *(int *)(iVar1 + 0x9994)) && (*(byte *)(iVar1 + 0x999c) - 1 < 3)) {
      *(int *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x354) = _s_ScrRivalList_ClearSlots_1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x680) + _s_ScrRivalList_ClearSlots_1 * 0x28;
    if ((-1 < *(int *)(iVar1 + 0xb8d4)) && (*(byte *)(iVar1 + 0xb8dc) - 1 < 3)) {
      *(int *)(param_1 + *(int *)(param_1 + 0x2c) * 4 + 0x34) = _s_ScrRivalList_ClearSlots_1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    _s_ScrRivalList_ClearSlots_1 = _s_ScrRivalList_ClearSlots_1 + 1;
  } while (_s_ScrRivalList_ClearSlots_1 < 200);
  _s_ScrRivalList_ClearSlots_1 = 2;
  return;
}

// 0x0028b7e0  size 0xc9c
void maybe_ScrRivalList_HandleInput(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  piVar6 = (int *)param_1;
  uVar1 = piVar6[4];
  uVar8 = g_MenuInput[2];
  if ((g_MenuInput[4] & uVar8) == 0) {
    uVar8 = 0x100000;
  }
  else if (uVar8 == 0x80000) {
    uVar8 = 0x80000;
  }
  else if (*g_MenuInput != 1) {
    uVar8 = 0x100000;
  }
  if (uVar8 == 1) {
    if (uVar1 != 1) {
      return;
    }
    *piVar6 = *piVar6 + -1;
    piVar6[piVar6[0x19d] + 0x19e] = piVar6[piVar6[0x19d] + 0x19e] + -1;
    if ((*piVar6 == -1) && (piVar6[piVar6[0x19d] + 0x19e] != -1)) {
      piVar6[0x1a1] = 1;
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      UiLayout_UpdateAnimById((UiLayout *)0xaf,3);
    }
    if (*piVar6 < 0) {
      *piVar6 = *piVar6 + 1;
    }
    if (piVar6[piVar6[0x19d] + 0x19e] < 0) {
      piVar6[piVar6[0x19d] + 0x19e] = piVar6[piVar6[0x19d] + 0x19e] + 1;
      Se_PlayMenu(8);
      return;
    }
    Se_PlayMenu(7);
    return;
  }
  if (uVar8 == 2) {
    if (uVar1 != 1) {
      return;
    }
    *piVar6 = *piVar6 + 1;
    piVar6[piVar6[0x19d] + 0x19e] = piVar6[piVar6[0x19d] + 0x19e] + 1;
    if ((*piVar6 == 10) && (piVar6[piVar6[0x19d] + 0xb] != piVar6[piVar6[0x19d] + 0x19e])) {
      piVar6[0x1a1] = 0;
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      UiLayout_UpdateAnimById((UiLayout *)0xaf,2);
    }
    if (piVar6[piVar6[0x19d] + 0xb] < 10) {
      if (piVar6[piVar6[0x19d] + 0xb] <= *piVar6) {
        *piVar6 = *piVar6 + -1;
      }
    }
    else if (9 < *piVar6) {
      *piVar6 = *piVar6 + -1;
    }
    iVar7 = piVar6[0x19d];
    if (piVar6[iVar7 + 0x19e] < piVar6[iVar7 + 0xb]) {
      Se_PlayMenu(7);
      return;
    }
    piVar6[iVar7 + 0x19e] = piVar6[iVar7 + 0x19e] + -1;
    Se_PlayMenu(8);
    return;
  }
  if (uVar8 == 0x2000) {
    if (uVar1 != 1) {
      return;
    }
    if ((piVar6[0x19d] == 0) && (0 < piVar6[0xc])) {
      piVar6[1] = *piVar6;
      *piVar6 = piVar6[2];
      piVar6[0x19d] = 1;
      piVar6[0x1a1] = 3;
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      Se_PlayMenu(7);
      return;
    }
    Se_PlayMenu(8);
    return;
  }
  if (uVar8 == 0x400) {
    if (uVar1 != 1) {
      return;
    }
    if ((piVar6[0x19d] == 1) && (0 < piVar6[0xb])) {
      piVar6[2] = *piVar6;
      *piVar6 = piVar6[1];
      piVar6[0x19d] = 0;
      piVar6[0x1a1] = 3;
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      Se_PlayMenu(7);
      return;
    }
    Se_PlayMenu(8);
    return;
  }
  if (uVar8 == 0x1000) {
    if (uVar1 == 2) {
      if (piVar6[0x19d] != 1) {
        return;
      }
      if (piVar6[0xc] < 1) {
        return;
      }
      piVar6[5] = 9;
      Se_PlayMenu(5);
      return;
    }
    if (uVar1 != 1) {
      return;
    }
    if (piVar6[0x19d] != 1) {
      return;
    }
    if (piVar6[0xc] < 1) {
      return;
    }
    piVar6[5] = 4;
    Se_PlayMenu(5);
    return;
  }
  if (uVar8 != 0x10) {
    if (uVar8 != 0x20) {
      return;
    }
    if (uVar1 == 0xb) {
      piVar6[5] = 2;
      Se_PlayMenu(6);
      return;
    }
    if (uVar1 == 9) {
      piVar6[5] = 2;
      Se_PlayMenu(6);
      return;
    }
    if (uVar1 == 4) {
      piVar6[5] = 1;
      Se_PlayMenu(6);
      return;
    }
    if (uVar1 == 3) {
      piVar6[5] = 2;
      Se_PlayMenu(6);
      return;
    }
    if (uVar1 == 2) {
      iVar7 = piVar6[0x19d];
      lVar3 = Career_GetRivalIndex
                        (piVar6[0x1a0],iVar7 == 0,piVar6[iVar7 * 200 + piVar6[iVar7 + 0x19e] + 0xd])
      ;
      if (lVar3 == -1) {
        piVar6[5] = 1;
        Se_PlayMenu(6);
        return;
      }
      *piVar6 = 0;
      piVar6[5] = 3;
      Se_PlayMenu(5);
      return;
    }
    if (uVar1 == 1) {
      piVar6[5] = 0;
      Se_PlayMenu(6);
      return;
    }
    if (uVar1 == 0) {
      MenuMgr_RequestScreen(8);
      Se_PlayMenu(6);
      return;
    }
    return;
  }
  if (0xb < uVar1) {
    return;
  }
                    /* WARNING: Switch is manually overridden */
  switch(uVar1) {
  case 0:
    if (piVar6[piVar6[0x19d] + 0xb] < 1) {
      Se_PlayMenu(8);
    }
    else {
      piVar6[5] = 1;
      Se_PlayMenu(5);
    }
    break;
  case 1:
    if (piVar6[piVar6[0x19d] + 0xb] < 0xb) {
      piVar6[piVar6[0x19d] + 0x19e] = *piVar6;
    }
    if (piVar6[0x19d] == 0) {
      if ((piVar6[0xb] < 1) ||
         (*(char *)(piVar6[piVar6[0x19e] + 0xd] * 0x28 + piVar6[0x1a0] + 0xb8dc) != '\x01')) {
        Se_PlayMenu(5);
      }
      else {
        Career_MarkRivalSeen();
        Se_PlayMenu(0x12);
      }
    }
    else if ((piVar6[0xc] < 1) ||
            (*(char *)(piVar6[piVar6[piVar6[0x19d] + 0x19e] + 0xd5] * 0x28 + piVar6[0x1a0] + 0x999c)
             != '\x01')) {
      Se_PlayMenu(5);
    }
    else {
      Career_MarkRivalSeen(piVar6[0x1a0],0);
      Se_PlayMenu(0x12);
    }
    piVar6[5] = 2;
    break;
  case 2:
    if (piVar6[0x19d] == 0) {
      iVar7 = Rival_IsUnlocked(*(undefined4 *)
                                (piVar6[piVar6[0x19e] + 0xd] * 0x28 + piVar6[0x1a0] + 0xb8d4));
      if (*(int *)(iVar7 + 0x2c) == -1) {
        iVar7 = piVar6[0x19d];
        goto LAB_0028bb50;
      }
    }
    else {
      iVar7 = piVar6[0x19d];
LAB_0028bb50:
      if ((iVar7 != 1) ||
         (iVar7 = Rival_IsUnlocked(*(undefined4 *)
                                    (piVar6[piVar6[0x19f] + 0xd5] * 0x28 + piVar6[0x1a0] + 0x9994)),
         *(int *)(iVar7 + 0x2c) == -1)) {
        iVar7 = piVar6[0x19d];
        lVar3 = Career_GetRivalIndex
                          (piVar6[0x1a0],iVar7 == 0,
                           piVar6[iVar7 * 200 + piVar6[iVar7 + 0x19e] + 0xd]);
        if (lVar3 == -1) {
          piVar6[5] = 1;
          Se_PlayMenu(6);
          return;
        }
        *piVar6 = 0;
        piVar6[5] = 3;
        Se_PlayMenu(5);
        return;
      }
    }
    piVar6[5] = 0xb;
    Se_PlayMenu(5);
    break;
  case 3:
    if (*piVar6 == 1) {
      piVar6[5] = 1;
      Se_PlayMenu(6);
    }
    else if (*piVar6 == 0) {
      iVar7 = piVar6[0x19d];
      uVar4 = Career_FindRival(piVar6[0x1a0],iVar7 == 0,
                               piVar6[iVar7 * 200 + piVar6[iVar7 + 0x19e] + 0xd]);
      Profile_CountEventsSeen(piVar6[0x1a0],uVar4,0);
      maybe_ScrRivalList_ClearSlots(param_1);
      piVar6[5] = 2;
      Se_PlayMenu(5);
    }
    break;
  case 4:
    if (*piVar6 == 1) {
      piVar6[5] = 1;
      Se_PlayMenu(6);
    }
    else if (*piVar6 == 0) {
      piVar6[5] = 8;
      Se_PlayMenu(5);
    }
    break;
  case 8:
    Career_SetRivalResult(piVar6[0x1a0],piVar6[piVar6[piVar6[0x19d] + 0x19e] + 0xd5]);
    iVar7 = piVar6[piVar6[0x19d] + 0x19e];
    if (iVar7 < piVar6[0xc] + -1) {
      piVar5 = piVar6 + iVar7;
      do {
        iVar7 = iVar7 + 1;
        piVar5[0xd5] = piVar5[0xd6];
        piVar5 = piVar5 + 1;
      } while (iVar7 < piVar6[0xc] + -1);
      iVar7 = piVar6[0xc];
    }
    else {
      iVar7 = piVar6[0xc];
    }
    piVar6[0xc] = iVar7 + -1;
    if (piVar6[0xc] <= piVar6[piVar6[0x19d] + 0x19e]) {
      piVar6[piVar6[0x19d] + 0x19e] = piVar6[piVar6[0x19d] + 0x19e] + -1;
    }
    maybe_ScrRivalList_ClearSlots(param_1);
    if (piVar6[piVar6[0x19d] + 0xb] == 0) {
      piVar6[5] = 0;
    }
    else {
      piVar6[5] = 1;
      iVar7 = piVar6[0x19d];
      iVar2 = piVar6[iVar7 + 0xb];
      if (iVar2 < 10) {
        if (piVar6[iVar7 + 1] == iVar2) {
          piVar6[iVar7 + 1] = piVar6[iVar7 + 1] + -1;
        }
      }
      else if (piVar6[iVar7 + 1] + (iVar2 - piVar6[iVar7 + 0x19e]) < 10) {
        piVar6[iVar7 + 0x19e] = piVar6[iVar7 + 0x19e] + -1;
      }
    }
    Se_PlayMenu(5);
    break;
  case 9:
    if (*piVar6 == 1) {
      piVar6[5] = 2;
      Se_PlayMenu(6);
    }
    else if (*piVar6 == 0) {
      piVar6[5] = 10;
      Se_PlayMenu(5);
    }
    break;
  case 10:
    Career_SetRivalResult(piVar6[0x1a0],piVar6[piVar6[piVar6[0x19d] + 0x19e] + 0xd5]);
    iVar7 = piVar6[piVar6[0x19d] + 0x19e];
    if (iVar7 < piVar6[0xc] + -1) {
      piVar5 = piVar6 + iVar7;
      do {
        iVar7 = iVar7 + 1;
        piVar5[0xd5] = piVar5[0xd6];
        piVar5 = piVar5 + 1;
      } while (iVar7 < piVar6[0xc] + -1);
      iVar7 = piVar6[0xc];
    }
    else {
      iVar7 = piVar6[0xc];
    }
    piVar6[0xc] = iVar7 + -1;
    if (piVar6[0xc] <= piVar6[piVar6[0x19d] + 0x19e]) {
      piVar6[piVar6[0x19d] + 0x19e] = piVar6[piVar6[0x19d] + 0x19e] + -1;
    }
    maybe_ScrRivalList_ClearSlots(param_1);
    if (piVar6[piVar6[0x19d] + 0xb] == 0) {
      piVar6[5] = 0;
    }
    else {
      piVar6[5] = 1;
      iVar7 = piVar6[0x19d];
      iVar2 = piVar6[iVar7 + 0xb];
      if (iVar2 < 10) {
        if (piVar6[iVar7 + 1] == iVar2) {
          piVar6[iVar7 + 1] = piVar6[iVar7 + 1] + -1;
        }
      }
      else if (piVar6[iVar7 + 1] + (iVar2 - piVar6[iVar7 + 0x19e]) < 10) {
        piVar6[iVar7 + 0x19e] = piVar6[iVar7 + 0x19e] + -1;
      }
    }
    Se_PlayMenu(5);
    break;
  case 0xb:
    piVar6[5] = 2;
    Se_PlayMenu(6);
  }
  return;
}

