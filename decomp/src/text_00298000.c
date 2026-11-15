// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00298000 - 0x0029c000
#include "ghidra_types.h"

// 0x00298640  size 0x1b0
void maybe_ScrRecord_StepSubtitle(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
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
  puVar3 = (undefined4 *)param_1;
  if (uVar2 == 2) {
    puVar3[0x18b] = puVar3[0x18b] + 1;
    Se_PlayMenu(7);
  }
  else if (uVar2 == 1) {
    puVar3[0x18b] = puVar3[0x18b] + -1;
    Se_PlayMenu(7);
  }
  else if (uVar2 == 0x10) {
    if (puVar3[0x193] == 9) {
      Subtitle_Hide(5,0xffff);
      iVar1 = puVar3[0x18b];
    }
    else {
      iVar1 = puVar3[0x18b];
    }
    if (iVar1 == 0) {
      *puVar3 = 1;
    }
    else if (iVar1 == 1) {
      *puVar3 = 0;
    }
    puVar3[0x191] = 2;
    Career_StartNewGame(param_1);
    MenuMgr_RequestScreen(0xfffffffffffffffe);
    Se_PlayMenu(5);
  }
  else {
    if (uVar2 != 0x20) {
      iVar1 = puVar3[0x18b];
      goto LAB_0029878c;
    }
    if (puVar3[1] == 0) {
      puVar3[400] = puVar3[399];
    }
    else {
      puVar3[400] = 6;
    }
    puVar3[0x191] = 2;
    Se_PlayMenu(6);
  }
  iVar1 = puVar3[0x18b];
LAB_0029878c:
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      puVar3[0x18b] = 1;
    }
  }
  else {
    puVar3[0x18b] = 0;
  }
  return;
}

// 0x002987f0  size 0x228
void maybe_ScrCareerStart_SelectCourse(int param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x644);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
  }
  else if (iVar1 == 1) {
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
    if (((uVar5 != 2) && (uVar5 != 1)) && ((uVar5 == 0x10 || (uVar5 == 0x20)))) {
      *(undefined4 *)(param_1 + 0x640) = 6;
      *(undefined4 *)(param_1 + 0x644) = 2;
      Se_PlayMenu(5);
    }
  }
  else {
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x640);
      goto LAB_002989e8;
    }
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined4 *)(param_1 + 0x644) = 1;
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar2 = *(uint *)(param_1 + 0x10);
    bVar3 = Race_GetCourseVariant();
    g_MenuMgr->unk_0620 = bVar3;
    g_MenuMgr->unk_0624 = 0xffffffff;
    g_MenuMgr->unk_0628 = 0xffffffff;
    g_MenuMgr->unk_05ac = bVar3;
    if (bVar3 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar3) {
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
    g_MenuMgr->unk_0624 = uVar5;
    g_MenuMgr->unk_0628 = uVar2;
    MenuMgr_RequestScreen(0xf);
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x640);
LAB_002989e8:
  *(undefined4 *)(param_1 + 0x650) = uVar4;
  Menu_RequestTransition(param_1 + 0x648);
  return;
}

// 0x00298a20  size 0x3cc
void maybe_ScrCareerStart_InputEquip(int param_1)

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
  if (uVar3 == 2) {
    if (*(int *)(param_1 + 0x684) == 0) {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
      if (10 < *(int *)(param_1 + 0x62c) - *(int *)(param_1 + 0x698)) {
        *(int *)(param_1 + 0x698) = *(int *)(param_1 + 0x698) + 1;
        *(undefined4 *)(param_1 + 0x668) = 1;
      }
      if (*(int *)(param_1 + 0x628) + -1 < *(int *)(param_1 + 0x62c)) {
        Se_PlayMenu(8);
      }
      else {
        Se_PlayMenu(7);
      }
    }
  }
  else if (uVar3 == 1) {
    if (*(int *)(param_1 + 0x684) == 0) {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
      if (*(int *)(param_1 + 0x62c) < 0) {
        Se_PlayMenu(8);
      }
      else {
        Se_PlayMenu(7);
      }
    }
  }
  else if (uVar3 == 0x10) {
    if (*(int *)(param_1 + 0x684) == 0) {
      *(undefined4 *)(param_1 + 0x684) = 1;
    }
    else if ((*(int *)(param_1 + 0x684) == 1) && (*(int *)(param_1 + 0x694) == 2)) {
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 2) {
        uVar1 = Profile_Get(0);
        Profile_EquipFromStock
                  (uVar1,0xf,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
        uVar1 = Profile_Get(0);
        Profile_EquipFromStock
                  (uVar1,0x10,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      else if (iVar2 == 0) {
        uVar1 = Profile_Get(0);
        Profile_EquipFromStock
                  (uVar1,0xf,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      else if (iVar2 == 1) {
        uVar1 = Profile_Get(0);
        Profile_EquipFromStock
                  (uVar1,0x10,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      *(undefined4 *)(param_1 + 0x640) = 3;
      *(undefined4 *)(param_1 + 0x644) = 2;
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
    Se_PlayMenu(5);
  }
  else {
    if (uVar3 != 0x20) {
      iVar2 = *(int *)(param_1 + 0x628);
      goto LAB_00298c54;
    }
    if (*(int *)(param_1 + 0x684) == 0) {
      *(undefined4 *)(param_1 + 0x640) = 3;
      *(undefined4 *)(param_1 + 0x644) = 2;
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
      Se_PlayMenu(6);
    }
    else {
      Se_PlayMenu(6);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 2) {
        uVar1 = Profile_Get(0);
        Profile_EquipFromStock
                  (uVar1,0xf,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
        uVar1 = Profile_Get(0);
        Profile_EquipFromStock
                  (uVar1,0x10,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      else if (iVar2 == 0) {
        uVar1 = Profile_Get(0);
        Profile_EquipFromStock
                  (uVar1,0xf,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      else if (iVar2 == 1) {
        uVar1 = Profile_Get(0);
        Profile_EquipFromStock
                  (uVar1,0x10,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      *(undefined4 *)(param_1 + 0x640) = 3;
      *(undefined4 *)(param_1 + 0x644) = 2;
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x628);
LAB_00298c54:
  if (iVar2 + -1 < *(int *)(param_1 + 0x62c)) {
    *(int *)(param_1 + 0x62c) = iVar2 + -1;
  }
  else if (*(int *)(param_1 + 0x62c) < 0) {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  return;
}

// 0x00298df0  size 0x260
void maybe_ScrCareerStart_BuildPartList(int param_1)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  iVar3 = param_1;
  do {
    *(undefined2 *)(iVar3 + 0x5fc) = 0xffff;
    iVar4 = iVar4 + 7;
    *(undefined2 *)(iVar3 + 0x5fe) = 0xffff;
    *(undefined2 *)(iVar3 + 0x600) = 0xffff;
    *(undefined2 *)(iVar3 + 0x602) = 0xffff;
    *(undefined2 *)(iVar3 + 0x604) = 0xffff;
    *(undefined2 *)(iVar3 + 0x606) = 0xffff;
    *(undefined2 *)(iVar3 + 0x608) = 0xffff;
    iVar3 = iVar3 + 0xe;
  } while (iVar4 < 0x15);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 2) {
    uVar2 = Profile_Get(0);
    sVar1 = Profile_GetCurrentPartSlot(uVar2,0xf);
    if (sVar1 != 0x8d) {
      uVar2 = Profile_Get(0);
      sVar1 = Profile_GetCurrentPartSlot(uVar2,0x10);
      if (sVar1 != 0x8d) {
        *(undefined2 *)(*(int *)(param_1 + 0x628) * 2 + param_1 + 0x5fc) = 0x8d;
        *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
      }
    }
  }
  else if (iVar3 == 0) {
    uVar2 = Profile_Get(0);
    sVar1 = Profile_GetCurrentPartSlot(uVar2,0xf);
    if (sVar1 != 0x8d) {
      *(undefined2 *)(*(int *)(param_1 + 0x628) * 2 + param_1 + 0x5fc) = 0x8d;
      *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
    }
  }
  else if (iVar3 == 1) {
    uVar2 = Profile_Get(0);
    sVar1 = Profile_GetCurrentPartSlot(uVar2,0x10);
    if (sVar1 != 0x8d) {
      *(undefined2 *)(*(int *)(param_1 + 0x628) * 2 + param_1 + 0x5fc) = 0x8d;
      *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
    }
  }
  if (*(int *)(param_1 + 0x20) == 2) {
    iVar3 = 0x8e;
    do {
      uVar2 = Profile_Get(0);
      sVar1 = Profile_GetPartStock(uVar2,(short)iVar3);
      if (1 < sVar1) {
        *(short *)(param_1 + *(int *)(param_1 + 0x628) * 2 + 0x5fc) = (short)iVar3;
        *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xa2);
  }
  else {
    iVar3 = 0x8e;
    do {
      uVar2 = Profile_Get(0);
      sVar1 = Profile_GetPartStock(uVar2,(short)iVar3);
      if (0 < sVar1) {
        *(short *)(param_1 + *(int *)(param_1 + 0x628) * 2 + 0x5fc) = (short)iVar3;
        *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xa2);
  }
  *(undefined4 *)(param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0x698) = 0;
  *(undefined4 *)(param_1 + 0x668) = 0;
  return;
}

// 0x00299060  size 0xba4
void maybe_ScrCareerStart_InputRivalCourse(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_740 [58];
  short sStack_706;
  undefined1 auStack_5c0 [56];
  short sStack_588;
  undefined1 auStack_440 [58];
  short sStack_406;
  undefined1 auStack_2c0 [56];
  short sStack_288;
  undefined1 auStack_140 [24];
  uint uStack_128;
  undefined1 auStack_f0 [20];
  uint uStack_dc;
  undefined1 auStack_a0 [24];
  int iStack_88;
  undefined1 auStack_50 [20];
  int iStack_3c;
  
  uVar10 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar10) == 0) {
    uVar10 = 0x100000;
  }
  else if (uVar10 == 0x80000) {
    uVar10 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar10 = 0x100000;
  }
  if (uVar10 == 2) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    Se_PlayMenu(7);
  }
  else if (uVar10 == 1) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    Se_PlayMenu(7);
  }
  else if (uVar10 == 0x10) {
    if (*(int *)(param_1 + 0x62c) == 0) {
      if (*(int *)(param_1 + 4) == 0) {
        if (*(int *)(param_1 + 0x448) == -1) {
          if (*(char *)(param_1 + 0x480) == '\0') {
            *(undefined4 *)(param_1 + 0x640) = 0x1c;
          }
          else if (*(char *)(param_1 + 0x480) == '\x01') {
            *(undefined4 *)(param_1 + 0x640) = 0x1d;
          }
          else {
            *(undefined4 *)(param_1 + 0x640) = 0x1b;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x640) = 0x1e;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x640) = 9;
      }
    }
    else if (*(int *)(param_1 + 0x62c) == 1) {
      if (*(int *)(param_1 + 4) == 0) {
        if ((*(char *)(param_1 + 0x480) == '\x01') || (*(int *)(param_1 + 0x448) != -1)) {
          g_MenuMgr->flags = g_MenuMgr->flags | 0x10000000;
        }
        else {
          g_MenuMgr->flags = g_MenuMgr->flags & 0xdfffffff;
          g_MenuMgr->flags = g_MenuMgr->flags & 0xefffffff;
        }
        if (*(int *)(param_1 + 0xe4) == -1) {
          if (*(int *)(param_1 + 0x448) == -1) {
            uVar9 = RaceCtx_Get_10();
            cVar6 = Race_IsTimeTrialMode(uVar9,0);
            if (cVar6 == '\0') {
              RivalDb_Copy(auStack_440,*(undefined2 *)(param_1 + 0x24));
              RivalDb_Copy(auStack_2c0,*(undefined2 *)(param_1 + 0x24));
              bVar5 = RaceCtx_Get_10();
              g_MenuMgr->unk_0620 = bVar5;
              g_MenuMgr->unk_0624 = 0xffffffff;
              g_MenuMgr->unk_0628 = 0xffffffff;
              g_MenuMgr->unk_05ac = bVar5;
              if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
                switch(bVar5) {
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
              g_MenuMgr->unk_0624 = 9 - (int)sStack_288;
              g_MenuMgr->unk_0628 = 9 - (int)sStack_406;
            }
            else {
              RivalDb_Copy(auStack_740,*(undefined2 *)(param_1 + 0x24));
              RivalDb_Copy(auStack_5c0,*(undefined2 *)(param_1 + 0x24));
              bVar5 = RaceCtx_Get_10();
              g_MenuMgr->unk_0620 = bVar5;
              g_MenuMgr->unk_0624 = 0xffffffff;
              g_MenuMgr->unk_0628 = 0xffffffff;
              g_MenuMgr->unk_05ac = bVar5;
              if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
                switch(bVar5) {
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
              g_MenuMgr->unk_0624 = (int)sStack_588;
              g_MenuMgr->unk_0628 = (int)sStack_706;
            }
          }
          else {
            uVar7 = RivalDb_FindByCourse((short)*(int *)(param_1 + 0x448));
            iVar8 = RivalDb_Get(uVar7);
            uVar9 = RaceCtx_Get_10();
            cVar6 = Race_IsTimeTrialMode(uVar9,0);
            if (cVar6 == '\0') {
              sVar1 = *(short *)(iVar8 + 0x3a);
              sVar2 = *(short *)(iVar8 + 0x38);
              bVar5 = RaceCtx_Get_10();
              g_MenuMgr->unk_0620 = bVar5;
              g_MenuMgr->unk_0624 = 0xffffffff;
              g_MenuMgr->unk_0628 = 0xffffffff;
              g_MenuMgr->unk_05ac = bVar5;
              if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
                switch(bVar5) {
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
              g_MenuMgr->unk_0624 = 9 - (int)sVar2;
              g_MenuMgr->unk_0628 = 9 - (int)sVar1;
            }
            else {
              sVar1 = *(short *)(iVar8 + 0x3a);
              sVar2 = *(short *)(iVar8 + 0x38);
              bVar5 = RaceCtx_Get_10();
              g_MenuMgr->unk_0620 = bVar5;
              g_MenuMgr->unk_0624 = 0xffffffff;
              g_MenuMgr->unk_0628 = 0xffffffff;
              g_MenuMgr->unk_05ac = bVar5;
              if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
                switch(bVar5) {
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
              g_MenuMgr->unk_0624 = (int)sVar2;
              g_MenuMgr->unk_0628 = (int)sVar1;
            }
          }
        }
        else {
          uVar9 = RaceCtx_Get_10();
          cVar6 = Race_IsTimeTrialMode(uVar9,0);
          if (cVar6 == '\0') {
            Rival_GetTeamRecord(auStack_a0,*(undefined4 *)(param_1 + 0xe4));
            Rival_GetTeamRecord(auStack_50,*(undefined4 *)(param_1 + 0xe4));
            bVar5 = RaceCtx_Get_10();
            g_MenuMgr->unk_0620 = bVar5;
            g_MenuMgr->unk_0624 = 0xffffffff;
            g_MenuMgr->unk_0628 = 0xffffffff;
            g_MenuMgr->unk_05ac = bVar5;
            if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(bVar5) {
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
            g_MenuMgr->unk_0624 = 9 - iStack_3c;
            g_MenuMgr->unk_0628 = 9 - iStack_88;
          }
          else {
            Rival_GetTeamRecord(auStack_140,*(undefined4 *)(param_1 + 0xe4));
            Rival_GetTeamRecord(auStack_f0,*(undefined4 *)(param_1 + 0xe4));
            bVar5 = RaceCtx_Get_10();
            g_MenuMgr->unk_0620 = bVar5;
            g_MenuMgr->unk_0624 = 0xffffffff;
            g_MenuMgr->unk_0628 = 0xffffffff;
            g_MenuMgr->unk_05ac = bVar5;
            if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
              switch(bVar5) {
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
            g_MenuMgr->unk_0624 = uStack_dc;
            g_MenuMgr->unk_0628 = uStack_128;
          }
        }
      }
      else {
        uVar9 = RaceCtx_Get_10();
        cVar6 = Race_IsTimeTrialMode(uVar9,0);
        if (cVar6 == '\0') {
          iVar8 = *(int *)(param_1 + 0x10);
          iVar3 = *(int *)(param_1 + 0xc);
          bVar5 = RaceCtx_Get_10();
          g_MenuMgr->unk_0620 = bVar5;
          g_MenuMgr->unk_0624 = 0xffffffff;
          g_MenuMgr->unk_0628 = 0xffffffff;
          g_MenuMgr->unk_05ac = bVar5;
          if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
            switch(bVar5) {
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
          g_MenuMgr->unk_0624 = 9 - iVar3;
          g_MenuMgr->unk_0628 = 9 - iVar8;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0xc);
          uVar4 = *(uint *)(param_1 + 0x10);
          bVar5 = RaceCtx_Get_10();
          g_MenuMgr->unk_0620 = bVar5;
          g_MenuMgr->unk_0624 = 0xffffffff;
          g_MenuMgr->unk_0628 = 0xffffffff;
          g_MenuMgr->unk_05ac = bVar5;
          if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
            switch(bVar5) {
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
          g_MenuMgr->unk_0624 = uVar10;
          g_MenuMgr->unk_0628 = uVar4;
        }
        g_MenuMgr->flags = g_MenuMgr->flags | 0x20000000;
      }
      MenuMgr_RequestScreen(0xf);
      Menu_BlockInput(&g_MenuMgr->field_0x654);
      *(undefined4 *)(param_1 + 0x680) = 1;
    }
    *(undefined4 *)(param_1 + 0x644) = 2;
    Se_PlayMenu(5);
  }
  else {
    if (uVar10 != 0x20) {
      iVar8 = *(int *)(param_1 + 0x62c);
      goto LAB_0029943c;
    }
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x448) == -1) {
        if (*(char *)(param_1 + 0x480) == '\0') {
          if (*(char *)(param_1 + 0x474) == '\x03') {
            *(undefined4 *)(param_1 + 0x640) = 0x10;
          }
          else {
            *(undefined4 *)(param_1 + 0x640) = 0x12;
          }
        }
        else if (*(char *)(param_1 + 0x480) == '\x01') {
          if (*(char *)(param_1 + 0x474) == '\x03') {
            *(undefined4 *)(param_1 + 0x640) = 0x27;
          }
          else {
            *(undefined4 *)(param_1 + 0x640) = 0x13;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x640) = 4;
        }
      }
      else {
        cVar6 = Msg_RivalTitle();
        if ((cVar6 == '\x06') ||
           (cVar6 = Msg_RivalTitle(*(undefined4 *)(param_1 + 0x448)), cVar6 == '\a')) {
          *(undefined4 *)(param_1 + 0x640) = 0x18;
        }
        else {
          *(undefined4 *)(param_1 + 0x640) = 0x2c;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x640) = 5;
    }
    *(undefined4 *)(param_1 + 0x644) = 2;
    Se_PlayMenu(6);
  }
  iVar8 = *(int *)(param_1 + 0x62c);
LAB_0029943c:
  if (iVar8 < 2) {
    if (iVar8 < 0) {
      *(undefined4 *)(param_1 + 0x62c) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  return;
}

// 0x00299c10  size 0xe4
void maybe_ScrCareerStart_IsChoiceLocked(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x63c);
  if (((((iVar1 == 9) || (iVar1 == 0x1b)) || (iVar1 == 0x1d)) ||
      (((iVar1 == 0x1d || (iVar1 == 0x1e)) || ((iVar1 == 0xe || ((iVar1 == 4 || (iVar1 == 5))))))))
     || ((iVar1 == 9 ||
         (((((iVar1 == 0x2c || (iVar1 == 0x18)) || (iVar1 == 0x12)) ||
           ((iVar1 == 0x10 || (iVar1 == 0x27)))) || (iVar1 == 0x13)))))) {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  else if (g_MenuMgr->prevScreen == 0xf) {
    *(undefined4 *)(param_1 + 0x62c) = 1;
  }
  return;
}

// 0x00299d00  size 0x3a4
void maybe_ScrCareerStart_InputSubtitle(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
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
  if (uVar4 == 8) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    if ((*(int *)(param_1 + 0x62c) < 10) && (*(int *)(param_1 + 0x62c) != 9)) {
      Se_PlayMenu(7);
    }
    else {
      Se_PlayMenu(8);
    }
  }
  else if (uVar4 == 4) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    if ((*(int *)(param_1 + 0x62c) < 0) ||
       ((*(int *)(param_1 + 0xc) == 0 && (*(int *)(param_1 + 0x62c) == 0)))) {
      Se_PlayMenu(8);
    }
    else {
      Se_PlayMenu(7);
    }
  }
  else if (uVar4 == 0x10) {
    if (*(int *)(param_1 + 0xc) == -1) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x62c);
      if (*(int *)(param_1 + 0xc) < 5) {
        *(undefined4 *)(param_1 + 0x62c) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x62c) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x10) == -1) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x62c);
      *(undefined4 *)(param_1 + 0x640) = 6;
      *(undefined4 *)(param_1 + 0x644) = 2;
    }
    Se_PlayMenu(5);
  }
  else {
    if (uVar4 != 0x20) {
      iVar1 = *(int *)(param_1 + 0xc);
      goto LAB_00299e84;
    }
    if (*(int *)(param_1 + 0xc) == -1) {
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)(param_1 + 0x640) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x640) = 2;
        Subtitle_Hide(5,0xffff);
      }
      *(undefined4 *)(param_1 + 0x644) = 2;
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
    }
    else {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    }
    Se_PlayMenu(6);
  }
  iVar1 = *(int *)(param_1 + 0xc);
LAB_00299e84:
  if ((iVar1 != -1) && (iVar5 = *(int *)(param_1 + 0x62c), iVar5 == iVar1)) {
    iVar2 = *(int *)(param_1 + 0x630);
    if (iVar2 < iVar5) {
      if (iVar1 == 9) {
        *(int *)(param_1 + 0x62c) = iVar2;
      }
      else {
        *(int *)(param_1 + 0x62c) = iVar5 + 1;
      }
    }
    else if (iVar5 < iVar2) {
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x62c) = iVar2;
      }
      else {
        *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == -1) {
    iVar5 = 8;
  }
  else if (*(int *)(param_1 + 0x10) == -1) {
    if (iVar1 < *(int *)(param_1 + 0x62c)) {
      iVar5 = 8;
    }
    else {
      iVar5 = 9;
    }
  }
  else if (iVar1 < *(int *)(param_1 + 0x10)) {
    iVar5 = 8;
  }
  else {
    iVar5 = 9;
  }
  if (*(int *)(param_1 + 0x6b4) != iVar5) {
    if (iVar1 == -1) {
      uVar3 = 8;
    }
    else if (*(int *)(param_1 + 0x10) == -1) {
      if (iVar1 < *(int *)(param_1 + 0x62c)) {
        uVar3 = 8;
      }
      else {
        uVar3 = 9;
      }
    }
    else if (iVar1 < *(int *)(param_1 + 0x10)) {
      uVar3 = 8;
    }
    else {
      uVar3 = 9;
    }
    *(undefined4 *)(param_1 + 0x6b4) = uVar3;
    Subtitle_Hide(10,*(undefined4 *)(param_1 + 0x6b4));
  }
  if (*(int *)(param_1 + 0x62c) < 10) {
    if (*(int *)(param_1 + 0x62c) < 0) {
      *(undefined4 *)(param_1 + 0x62c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x62c) = 9;
  }
  return;
}

// 0x0029a0b0  size 0x140
void maybe_ScrCareerStart_SelectSubtitle(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x644);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x640);
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
  }
  else if (iVar2 == 1) {
    maybe_ScrCareerStart_InputSubtitle();
  }
  else {
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x640);
      goto LAB_0029a1a4;
    }
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined4 *)(param_1 + 0x644) = 1;
    if (*(int *)(param_1 + 0x63c) == 2) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == -1) {
        uVar1 = 8;
      }
      else if (*(int *)(param_1 + 0x10) == -1) {
        if (iVar2 < *(int *)(param_1 + 0x62c)) {
          uVar1 = 8;
        }
        else {
          uVar1 = 9;
        }
      }
      else if (iVar2 < *(int *)(param_1 + 0x10)) {
        uVar1 = 8;
      }
      else {
        uVar1 = 9;
      }
      *(undefined4 *)(param_1 + 0x6b4) = uVar1;
      Subtitle_Show(0,0x11,8,1);
      Subtitle_Hide(10,*(undefined4 *)(param_1 + 0x6b4));
      iVar2 = *(int *)(param_1 + 0x63c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x63c);
    }
    if (iVar2 == 6) {
      *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x640);
LAB_0029a1a4:
  *(undefined4 *)(param_1 + 0x650) = uVar1;
  Menu_RequestTransition(param_1 + 0x648);
  return;
}

// 0x0029a1f0  size 0x970
int maybe_Career_CommitRaceResult(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined2 uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined2 *puVar17;
  uint uVar18;
  int iVar19;
  undefined4 uStack_550;
  undefined4 auStack_54c [30];
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  short sStack_4b0;
  undefined2 uStack_4ae;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined1 auStack_49c [24];
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined2 auStack_460 [16];
  undefined2 auStack_440 [42];
  undefined1 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 auStack_3e0 [96];
  short sStack_260;
  undefined2 uStack_25e;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined1 auStack_24c [24];
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined2 auStack_210 [16];
  undefined2 auStack_1f0 [42];
  undefined1 uStack_19c;
  undefined4 uStack_198;
  undefined4 auStack_190 [96];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar19 = -1;
  uVar11 = (undefined2)*(undefined4 *)(param_1 + 0x24);
  RivalDb_Copy(auStack_3e0,uVar11);
  puVar15 = auStack_3e0;
  puVar12 = auStack_190;
  iVar9 = 0x5f;
  do {
    iVar9 = iVar9 + -1;
    *puVar12 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar12 = puVar12 + 1;
  } while (0 < iVar9);
  RaceSlot_Clear(param_1 + 0x480);
  sVar4 = RivalRec_GetCourse(auStack_190);
  if (sVar4 == -1) {
    lVar6 = RivalRec_IsValid(auStack_190);
    if (lVar6 != 0) {
      sVar4 = RivalRec_GetId(auStack_190);
      uVar7 = Profile_Get(0);
      sVar5 = Profile_GetRivalWins(uVar7,sVar4);
      if (sVar5 < 1) {
        *(int *)(param_1 + 0xe4) = (int)sVar4;
        iVar19 = 0xe;
        maybe_SaveData_Serialize(&uStack_550,1,*(undefined4 *)(param_1 + 0xe4));
        puVar15 = auStack_54c;
        puVar12 = (undefined4 *)(param_1 + 0x568);
        iVar9 = 0xf;
        *(undefined4 *)(param_1 + 0x564) = uStack_550;
        do {
          iVar9 = iVar9 + -1;
          uVar2 = puVar15[1];
          *puVar12 = *puVar15;
          puVar15 = puVar15 + 2;
          puVar12[1] = uVar2;
          puVar12 = puVar12 + 2;
        } while (0 < iVar9);
        *(undefined4 *)(param_1 + 0x5e0) = uStack_4d4;
        *(undefined4 *)(param_1 + 0x5e4) = uStack_4d0;
        *(undefined4 *)(param_1 + 0x5e8) = uStack_4cc;
        *(undefined4 *)(param_1 + 0x5ec) = uStack_4c8;
        *(undefined4 *)(param_1 + 0x5f0) = uStack_4c4;
        *(undefined4 *)(param_1 + 0x5f4) = uStack_4c0;
        *(undefined4 *)(param_1 + 0x5f8) = uStack_4bc;
        if (*(int *)(param_1 + 0x28) != -1) {
          iVar16 = 0;
          iVar9 = param_1;
          do {
            if (*(int *)(iVar9 + 0x5e4) == -1) break;
            if (*(int *)(iVar9 + 0x5e4) == *(int *)(param_1 + 0x28)) {
              *(int *)(param_1 + 0x62c) = iVar16;
              break;
            }
            iVar16 = iVar16 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar16 < 6);
          *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        }
      }
    }
  }
  else {
    uVar7 = Profile_Get(0);
    lVar6 = Garage_FindFreeSlot(uVar7);
    if (lVar6 < 0xf) {
      sVar4 = RivalRec_GetCourse(auStack_190);
      iVar19 = 0x17;
      *(int *)(param_1 + 0x448) = (int)sVar4;
    }
    else {
      iVar19 = 0xd;
      *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 0x20;
    }
  }
  if (iVar19 == -1) {
    RaceResult_BuildMessage(auStack_10,uVar11);
    *(undefined1 *)(param_1 + 0x480) = auStack_10[0];
    *(undefined4 *)(param_1 + 0x484) = uStack_c;
    *(undefined4 *)(param_1 + 0x488) = uStack_8;
    if (*(byte *)(param_1 + 0x480) < 10) {
                    /* WARNING: Switch is manually overridden */
      switch(*(byte *)(param_1 + 0x480)) {
      case 0:
        uVar7 = Profile_Get(0);
        sVar4 = Profile_GetPartStock(uVar7,*(undefined2 *)(param_1 + 0x484));
        if (0x62 < sVar4) {
          *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 4;
        }
        lVar6 = PartDb_Get(*(undefined2 *)(param_1 + 0x484));
        iVar16 = 0;
        *(int *)(param_1 + 0x490) = (int)lVar6;
        iVar19 = 0;
        iVar9 = param_1;
        do {
          uVar7 = Profile_Get(0);
          uVar11 = (undefined2)iVar19;
          sVar4 = Profile_GetPartStock(uVar7,uVar11);
          if ((((((0 < sVar4) && (lVar8 = PartDb_Get(uVar11), lVar6 <= lVar8)) &&
                (sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0xad)) &&
               (((sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0xa9 &&
                 (sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0xaa)) &&
                ((sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0xa2 &&
                 ((sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0xa4 &&
                  (sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0x89)))))))) &&
              (sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0x8d)) &&
             (((sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0x93 &&
               (sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0x98)) &&
              (sVar4 = PartDb_GetInfo(uVar11), sVar4 != 0x9d)))) {
            *(undefined2 *)(iVar9 + 0x118) = uVar11;
            iVar16 = iVar16 + 1;
            iVar9 = iVar9 + 2;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < 0x162);
        if (iVar16 == 0) {
          *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 2;
        }
        *(int *)(param_1 + 0x3dc) = iVar16;
        iVar9 = Garage_ComputeCarStats(*(undefined2 *)(param_1 + 0x484),0);
        iVar9 = (iVar9 * 100) / 100;
        *(int *)(param_1 + 0x48c) = iVar9;
        uVar7 = Profile_Get(0);
        iVar19 = Profile_GetMoney(uVar7);
        if (iVar19 < iVar9) {
          *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
        }
        uVar18 = *(uint *)(param_1 + 0x494);
        if ((uVar18 & 4) == 0) {
          if (((uVar18 & 2) == 0) || ((uVar18 & 1) == 0)) {
            iVar19 = 0xc;
          }
          else {
            iVar19 = 0xd;
          }
        }
        else {
          iVar19 = 0xd;
        }
        break;
      case 1:
        uVar7 = Profile_Get(0);
        cVar3 = Garage_GetSelectedSlot(uVar7);
        uVar7 = Profile_Get(0);
        iVar9 = Garage_FindCar(uVar7);
        if (cVar3 - iVar9 < 1) {
          *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 0x10;
        }
        uVar7 = Profile_Get(0);
        lVar6 = Garage_FindCar(uVar7);
        if (lVar6 < 2) {
          *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 8;
        }
        else {
          iVar9 = CarDb_GetModel(*(undefined4 *)(param_1 + 0x484));
          iVar19 = 0;
          bVar1 = *(int *)(iVar9 + 0x88) == 2;
          if (bVar1) {
            *(undefined4 *)(param_1 + 0x490) = 1;
          }
          lVar6 = 0;
          do {
            uVar7 = Profile_Get(0);
            sVar4 = Profile_GetCurrentCarIndex(uVar7);
            iVar9 = (int)lVar6;
            if (lVar6 != sVar4) {
              uVar7 = Profile_Get(0);
              Profile_CopyCarRecord(&sStack_4b0,uVar7,lVar6);
              iVar16 = 0x17;
              puVar13 = auStack_49c;
              puVar10 = auStack_24c;
              sStack_260 = sStack_4b0;
              uStack_250 = uStack_4a0;
              uStack_25e = uStack_4ae;
              uStack_25c = uStack_4ac;
              uStack_258 = uStack_4a8;
              uStack_254 = uStack_4a4;
              do {
                iVar16 = iVar16 + -1;
                *puVar10 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar10 = puVar10 + 1;
              } while (0 < iVar16);
              iVar16 = 8;
              puVar17 = auStack_460;
              puVar14 = auStack_210;
              uStack_228 = uStack_478;
              uStack_224 = uStack_474;
              uStack_220 = uStack_470;
              uStack_234 = uStack_484;
              uStack_230 = uStack_480;
              uStack_22c = uStack_47c;
              uStack_21c = uStack_46c;
              uStack_218 = uStack_468;
              uStack_214 = uStack_464;
              do {
                iVar16 = iVar16 + -1;
                uVar11 = puVar17[1];
                *puVar14 = *puVar17;
                puVar14[1] = uVar11;
                puVar17 = puVar17 + 2;
                puVar14 = puVar14 + 2;
              } while (0 < iVar16);
              iVar16 = 0x15;
              puVar17 = auStack_440;
              puVar14 = auStack_1f0;
              do {
                iVar16 = iVar16 + -1;
                uVar11 = puVar17[1];
                *puVar14 = *puVar17;
                puVar14[1] = uVar11;
                puVar17 = puVar17 + 2;
                puVar14 = puVar14 + 2;
              } while (0 < iVar16);
              uStack_19c = uStack_3ec;
              uStack_198 = uStack_3e8;
              if (sStack_4b0 != -1) {
                if (bVar1) {
                  iVar16 = CarDb_GetModel();
                  if (*(int *)(iVar16 + 0x88) == 2) {
                    iVar16 = iVar19 * 4;
                    iVar19 = iVar19 + 1;
                    *(int *)(param_1 + iVar16 + 0x3e0) = iVar9;
                  }
                }
                else {
                  iVar16 = iVar19 * 4;
                  iVar19 = iVar19 + 1;
                  *(int *)(param_1 + iVar16 + 0x3e0) = iVar9;
                }
              }
            }
            lVar6 = (long)(iVar9 + 1);
          } while (lVar6 < 0x19);
          if (iVar19 == 0) {
            *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 8;
          }
          *(int *)(param_1 + 0x444) = iVar19;
        }
        iVar9 = CarDb_GetModel(*(undefined4 *)(param_1 + 0x484));
        uVar18 = (uint)(*(int *)(iVar9 + 0x84) * 0x8c) / 100000;
        *(uint *)(param_1 + 0x48c) = uVar18;
        uVar7 = Profile_Get(0);
        iVar9 = Profile_GetMoney(uVar7);
        if (iVar9 < (int)uVar18) {
          *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
        }
        uVar18 = *(uint *)(param_1 + 0x494);
        if ((uVar18 & 0x10) == 0) {
          if (((uVar18 & 8) == 0) || ((uVar18 & 1) == 0)) {
            iVar19 = 0xc;
          }
          else {
            iVar19 = 0xd;
          }
        }
        else {
          iVar19 = 0xd;
        }
        break;
      case 2:
        iVar19 = 0xc;
        break;
      default:
        *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x488);
        uVar7 = Profile_Get(0);
        iVar9 = Profile_GetMoney(uVar7);
        if (iVar9 < *(int *)(param_1 + 0x48c)) {
          iVar19 = 0xd;
          *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
        }
        else {
          iVar19 = 0x22;
          *(undefined1 *)(param_1 + 0x474) = 3;
          *(undefined4 *)(param_1 + 0x478) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x48c);
        }
        break;
      case 5:
        iVar19 = 0x22;
        *(undefined1 *)(param_1 + 0x474) = 5;
        break;
      case 6:
        *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x488);
        uVar7 = Profile_Get(0);
        iVar9 = Profile_GetMoney(uVar7);
        if (iVar9 < *(int *)(param_1 + 0x48c)) {
          iVar19 = 0xd;
          *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x478) = 0xffffffff;
          iVar19 = 0x22;
          *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x48c);
          *(undefined1 *)(param_1 + 0x474) = 6;
        }
        break;
      case 8:
        iVar19 = 0x22;
        *(undefined1 *)(param_1 + 0x474) = 8;
        break;
      case 9:
        iVar19 = 0x22;
      }
    }
    else {
      iVar19 = 0x22;
    }
  }
  return iVar19;
}

// 0x0029ab70  size 0x458
void maybe_ScrCareerStart_InputResult(undefined8 param_1)

{
  MenuMgr *pMVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
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
  iVar5 = (int)param_1;
  if (uVar4 == 8) {
    iVar2 = *(int *)(iVar5 + 0x62c) + 1;
    *(int *)(iVar5 + 0x62c) = iVar2;
    if (iVar2 < 6) {
      *(undefined4 *)(iVar5 + 0x668) = 1;
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      UiLayout_UpdateAnimById(0x84,0);
      Se_PlayMenu(7);
    }
    else {
      *(undefined4 *)(iVar5 + 0x62c) = 5;
      Se_PlayMenu();
    }
    uVar4 = *(uint *)(iVar5 + 0x62c);
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = uVar4;
        break;
      case 2:
        g_MenuMgr->unk_05dc = uVar4;
        break;
      case 3:
        g_MenuMgr->unk_05fc = uVar4;
        break;
      case 4:
        g_MenuMgr->unk_0618 = uVar4;
      }
    }
    *(undefined4 *)(iVar5 + 0x6a4) = *(undefined4 *)(iVar5 + 0x62c);
  }
  else if (uVar4 == 4) {
    iVar2 = *(int *)(iVar5 + 0x62c) + -1;
    *(int *)(iVar5 + 0x62c) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(iVar5 + 0x62c) = 0;
      Se_PlayMenu();
    }
    else {
      *(undefined4 *)(iVar5 + 0x668) = 2;
      g_MenuMgr->flags = g_MenuMgr->flags | 0x400000;
      UiLayout_UpdateAnimById(0x84,1);
      Se_PlayMenu(7);
    }
    uVar4 = *(uint *)(iVar5 + 0x62c);
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = uVar4;
        break;
      case 2:
        g_MenuMgr->unk_05dc = uVar4;
        break;
      case 3:
        g_MenuMgr->unk_05fc = uVar4;
        break;
      case 4:
        g_MenuMgr->unk_0618 = uVar4;
      }
    }
    *(undefined4 *)(iVar5 + 0x6a4) = *(undefined4 *)(iVar5 + 0x62c);
  }
  else if (uVar4 == 0x400) {
    iVar2 = *(int *)(iVar5 + 0x1c) + -1;
    *(int *)(iVar5 + 0x1c) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      Se_PlayMenu();
    }
    else {
      g_MenuMgr->unk_05b8 = *(uint *)(iVar5 + 0x1c);
      Se_PlayMenu(7);
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    maybe_ScrCareerStart_AdvanceSchedule(param_1);
    pMVar1 = g_MenuMgr;
    g_MenuMgr->unk_05bc = *(uint *)(iVar5 + 0x100);
    *(undefined4 *)&pMVar1->field_0x5c0 = *(undefined4 *)(iVar5 + 0x104);
    *(undefined4 *)&pMVar1->field_0x5c4 = *(undefined4 *)(iVar5 + 0x108);
    *(undefined4 *)&pMVar1->field_0x5c8 = *(undefined4 *)(iVar5 + 0x10c);
    *(undefined4 *)&pMVar1->field_0x5cc = *(undefined4 *)(iVar5 + 0x110);
    *(undefined4 *)&pMVar1->field_0x5d0 = *(undefined4 *)(iVar5 + 0x114);
  }
  else if (uVar4 == 0x2000) {
    iVar2 = *(int *)(iVar5 + 0x1c) + 1;
    *(int *)(iVar5 + 0x1c) = iVar2;
    if (iVar2 < 5) {
      g_MenuMgr->unk_05b8 = *(uint *)(iVar5 + 0x1c);
      Se_PlayMenu(7);
      Menu_SetCursorAlpha(&g_MenuMgr->field_0x654,1);
    }
    else {
      *(undefined4 *)(iVar5 + 0x1c) = 4;
      Se_PlayMenu();
    }
    maybe_ScrCareerStart_AdvanceSchedule(param_1);
    pMVar1 = g_MenuMgr;
    g_MenuMgr->unk_05bc = *(uint *)(iVar5 + 0x100);
    *(undefined4 *)&pMVar1->field_0x5c0 = *(undefined4 *)(iVar5 + 0x104);
    *(undefined4 *)&pMVar1->field_0x5c4 = *(undefined4 *)(iVar5 + 0x108);
    *(undefined4 *)&pMVar1->field_0x5c8 = *(undefined4 *)(iVar5 + 0x10c);
    *(undefined4 *)&pMVar1->field_0x5cc = *(undefined4 *)(iVar5 + 0x110);
    *(undefined4 *)&pMVar1->field_0x5d0 = *(undefined4 *)(iVar5 + 0x114);
  }
  else if (uVar4 == 0x1000) {
    iVar2 = *(int *)(*(int *)(iVar5 + 0x62c) * 4 + iVar5 + 0x100);
    if (iVar2 != -1) {
      *(int *)(iVar5 + 0x28) = iVar2;
      *(undefined4 *)(iVar5 + 0x640) = 0x16;
      *(undefined4 *)(iVar5 + 0x644) = 2;
      Se_PlayMenu(5);
    }
  }
  else if (uVar4 == 0x10) {
    iVar2 = *(int *)(*(int *)(iVar5 + 0x62c) * 4 + iVar5 + 0x100);
    if (iVar2 == -1) {
      Se_PlayMenu();
    }
    else {
      *(int *)(iVar5 + 0x24) = iVar2;
      uVar3 = maybe_Career_CommitRaceResult(param_1);
      *(undefined4 *)(iVar5 + 0x640) = uVar3;
      *(undefined4 *)(iVar5 + 0x644) = 2;
      if (*(int *)(iVar5 + 0x640) == 0xd) {
        Se_PlayMenu(8);
        uVar3 = *(undefined4 *)(iVar5 + 0x62c);
      }
      else {
        Se_PlayMenu(5);
        uVar3 = *(undefined4 *)(iVar5 + 0x62c);
      }
      *(undefined4 *)(iVar5 + 0x6a8) = uVar3;
    }
  }
  else {
    if (uVar4 != 0x20) {
      iVar2 = *(int *)(iVar5 + 0x62c);
      goto LAB_0029af18;
    }
    *(undefined4 *)(iVar5 + 0x640) = 1;
    *(undefined4 *)(iVar5 + 0x644) = 2;
    g_MenuMgr->flags = g_MenuMgr->flags | 1;
    Se_PlayMenu(6);
    Menu_BlockInput(&g_MenuMgr->field_0x654);
  }
  iVar2 = *(int *)(iVar5 + 0x62c);
LAB_0029af18:
  if (iVar2 < 6) {
    if (iVar2 < 0) {
      *(undefined4 *)(iVar5 + 0x62c) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x62c) = 5;
  }
  return;
}

// 0x0029afd0  size 0x5f0
void maybe_ScrCareerStart_AdvanceSchedule(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined2 uStack_300;
  undefined2 uStack_2fe;
  undefined1 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined2 uStack_2c6;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 auStack_2bc [23];
  undefined4 auStack_260 [23];
  undefined4 auStack_204 [16];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined1 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 auStack_13c [23];
  undefined4 auStack_e0 [23];
  undefined4 auStack_84 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x24) == -1) {
    if (*(int *)(param_1 + 0x28) == -1) {
      iVar12 = 0;
      iVar10 = param_1;
      do {
        uVar6 = RivalSchedule_Get(*(undefined4 *)(param_1 + 0x1c),iVar12);
        *(undefined4 *)(iVar10 + 0x100) = uVar6;
        iVar1 = *(int *)(iVar10 + 0x100);
        if (iVar1 != -1) {
          RivalDb_Copy(&uStack_300,(short)iVar1);
          puVar11 = auStack_2bc;
          uStack_180 = uStack_300;
          uStack_168 = uStack_2e8;
          puVar9 = auStack_13c;
          uStack_17e = uStack_2fe;
          uStack_164 = uStack_2e4;
          iVar7 = 0x17;
          uStack_17c = uStack_2fc;
          uStack_178 = uStack_2f8;
          uStack_174 = uStack_2f4;
          uStack_170 = uStack_2f0;
          uStack_16c = uStack_2ec;
          uStack_160 = uStack_2e0;
          uStack_15c = uStack_2dc;
          uStack_158 = uStack_2d8;
          uStack_154 = uStack_2d4;
          uStack_150 = uStack_2d0;
          uStack_14c = uStack_2cc;
          uStack_148 = uStack_2c8;
          uStack_146 = uStack_2c6;
          uStack_144 = uStack_2c4;
          uStack_140 = uStack_2c0;
          do {
            iVar7 = iVar7 + -1;
            *puVar9 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar9 = puVar9 + 1;
          } while (0 < iVar7);
          iVar7 = 0x17;
          puVar11 = auStack_260;
          puVar9 = auStack_e0;
          do {
            iVar7 = iVar7 + -1;
            *puVar9 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar9 = puVar9 + 1;
          } while (0 < iVar7);
          iVar7 = 8;
          puVar11 = auStack_204;
          puVar9 = auStack_84;
          do {
            iVar7 = iVar7 + -1;
            uVar6 = puVar11[1];
            *puVar9 = *puVar11;
            puVar9[1] = uVar6;
            puVar11 = puVar11 + 2;
            puVar9 = puVar9 + 2;
          } while (0 < iVar7);
          uStack_38 = uStack_1b8;
          uStack_34 = uStack_1b4;
          uStack_30 = uStack_1b0;
          uStack_2c = uStack_1ac;
          uStack_40 = uStack_1c0;
          uStack_3c = uStack_1bc;
          uStack_28 = uStack_1a8;
          uStack_24 = uStack_1a4;
          uStack_20 = uStack_1a0;
          uStack_1c = uStack_19c;
          uStack_44 = uStack_1c4;
          uStack_18 = uStack_198;
          uStack_14 = uStack_194;
          uStack_10 = uStack_190;
          uStack_c = uStack_18c;
          uStack_8 = uStack_188;
          uVar8 = Profile_Get(0);
          Profile_MarkEventSeen(uVar8,iVar1);
          cVar3 = RivalRec_GetTeam(&uStack_180);
          if (cVar3 == '\v') {
            uVar8 = Profile_Get(0);
            uVar4 = RivalRec_GetCourse(&uStack_180);
            Garage_IsPartOwned(uVar8,uVar4);
          }
        }
        iVar12 = iVar12 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar12 < 6);
    }
    else {
      iVar12 = 0;
      iVar10 = param_1;
      do {
        if (*(int *)(param_1 + 0x28) == *(int *)(iVar10 + 0x100)) {
          *(int *)(param_1 + 0x62c) = iVar12;
          break;
        }
        iVar12 = iVar12 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar12 < 6);
    }
  }
  else {
    iVar12 = 0;
    iVar10 = param_1;
    do {
      if (*(int *)(param_1 + 0x24) == *(int *)(iVar10 + 0x100)) {
        *(int *)(param_1 + 0x62c) = iVar12;
        break;
      }
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar12 < 6);
  }
  iVar12 = 0;
  iVar10 = param_1;
  do {
    *(undefined2 *)(iVar10 + 0x118) = 0xffff;
    iVar12 = iVar12 + 8;
    *(undefined2 *)(iVar10 + 0x11a) = 0xffff;
    *(undefined2 *)(iVar10 + 0x11c) = 0xffff;
    *(undefined2 *)(iVar10 + 0x11e) = 0xffff;
    *(undefined2 *)(iVar10 + 0x120) = 0xffff;
    *(undefined2 *)(iVar10 + 0x122) = 0xffff;
    *(undefined2 *)(iVar10 + 0x124) = 0xffff;
    *(undefined2 *)(iVar10 + 0x126) = 0xffff;
    iVar10 = iVar10 + 0x10;
  } while (iVar12 < 0x15a);
  iVar10 = iVar12 * 2 + param_1;
  iVar12 = 0;
  *(undefined2 *)(iVar10 + 0x118) = 0xffff;
  *(undefined2 *)(iVar10 + 0x11a) = 0xffff;
  iVar10 = param_1;
  do {
    *(undefined4 *)(iVar10 + 0x3e0) = 0xffffffff;
    iVar12 = iVar12 + 5;
    *(undefined4 *)(iVar10 + 0x3e4) = 0xffffffff;
    *(undefined4 *)(iVar10 + 1000) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x3ec) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x3f0) = 0xffffffff;
    iVar10 = iVar10 + 0x14;
  } while (iVar12 < 0x19);
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  RaceSlot_Clear(param_1 + 0x480);
  RaceSlot_Clear(param_1 + 0x474);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_1 + 0x62c);
  iVar10 = *(int *)(param_1 + 0x648);
  if ((((iVar10 == 1) || (iVar10 == 0x26)) || (iVar10 == 0x18)) || (iVar10 == 0x27)) {
    g_MenuMgr->unk_05b8 = *(uint *)(param_1 + 0x1c);
    uVar2 = *(uint *)(param_1 + 0x62c);
    if (g_MenuMgr->bgMode < 7) {
                    /* WARNING: Switch is manually overridden */
      switch(g_MenuMgr->bgMode) {
      case 1:
        g_MenuMgr->unk_0598 = uVar2;
        break;
      case 2:
        g_MenuMgr->unk_05dc = uVar2;
        break;
      case 3:
        g_MenuMgr->unk_05fc = uVar2;
        break;
      case 4:
        g_MenuMgr->unk_0618 = uVar2;
      }
    }
    uVar8 = Profile_Get(0);
    bVar5 = Profile_GetSelection2733(uVar8);
    g_MenuMgr->unk_0620 = bVar5;
    g_MenuMgr->unk_0624 = 0xffffffff;
    g_MenuMgr->unk_0628 = 0xffffffff;
    g_MenuMgr->unk_05ac = bVar5;
    if (bVar5 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar5) {
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
  }
  *(undefined4 *)(param_1 + 0x668) = 0;
  return;
}

// 0x0029b5c0  size 0xec
void maybe_ScrCareerStart_SelectResult(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x644);
  if (iVar1 == 2) {
    if (*(int *)(iVar3 + 0x640) == 0x16) {
      *(undefined4 *)(iVar3 + 0x644) = 0;
      *(undefined4 *)(iVar3 + 0x63c) = *(undefined4 *)(iVar3 + 0x638);
      *(undefined4 *)(iVar3 + 0x638) = *(undefined4 *)(iVar3 + 0x640);
    }
    else {
      *(undefined4 *)(iVar3 + 0x644) = 0;
      *(undefined4 *)(iVar3 + 0x63c) = *(undefined4 *)(iVar3 + 0x638);
      *(undefined4 *)(iVar3 + 0x638) = *(undefined4 *)(iVar3 + 0x640);
      *(undefined4 *)(iVar3 + 0x62c) = 0;
      *(undefined4 *)(iVar3 + 0x630) = 0;
    }
  }
  else if (iVar1 == 1) {
    maybe_ScrCareerStart_InputResult();
  }
  else {
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 0x640);
      goto LAB_0029b680;
    }
    if ((*(int *)(iVar3 + 0x63c) == 0x22) || (*(int *)(iVar3 + 0x63c) == 0x16)) {
      *(undefined4 *)(iVar3 + 0x644) = 1;
    }
    else {
      *(undefined4 *)(iVar3 + 0x62c) = 0;
      *(undefined4 *)(iVar3 + 0x630) = 0;
      *(undefined4 *)(iVar3 + 0x644) = 1;
    }
    maybe_ScrCareerStart_AdvanceSchedule(param_1);
    *(undefined4 *)(iVar3 + 0x668) = 0;
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x640);
LAB_0029b680:
  *(undefined4 *)(iVar3 + 0x650) = uVar2;
  Menu_RequestTransition(iVar3 + 0x648);
  return;
}

// 0x0029b6b0  size 0x2f0
void maybe_ScrCareerStart_InputE(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int aiStack_10 [4];
  
  piVar2 = (int *)0xc;
  piVar4 = aiStack_10;
  piVar1 = piVar4;
  while (piVar1 != (int *)0x0) {
    *(undefined1 *)piVar4 = 0;
    piVar4 = (int *)((int)piVar4 + 1);
    piVar2 = (int *)((int)piVar2 + -1);
    piVar1 = piVar2;
  }
  if (*(uint *)(param_1 + 8) == 0) {
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
    if ((uVar5 == 0x20) || (uVar5 == 0x10)) {
      *(undefined4 *)(param_1 + 0x640) = 0;
      *(undefined4 *)(param_1 + 0x644) = 2;
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
      Se_PlayMenu(6);
    }
  }
  else {
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      aiStack_10[0] = 1;
    }
    if ((*(uint *)(param_1 + 8) & 2) != 0) {
      aiStack_10[1] = 1;
    }
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      aiStack_10[2] = 1;
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
    if (uVar5 == 2) {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
      do {
        iVar3 = *(int *)(param_1 + 0x62c);
        while( true ) {
          if (aiStack_10[iVar3] == 1) {
            Se_PlayMenu(7);
            return;
          }
          *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
          if (*(int *)(param_1 + 0x62c) < 3) break;
          *(undefined4 *)(param_1 + 0x62c) = 0;
          Se_PlayMenu(7);
          iVar3 = *(int *)(param_1 + 0x62c);
        }
      } while( true );
    }
    if (uVar5 == 1) {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
      do {
        iVar3 = *(int *)(param_1 + 0x62c);
        while( true ) {
          if (aiStack_10[iVar3] == 1) {
            Se_PlayMenu(7);
            return;
          }
          *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
          if (-1 < *(int *)(param_1 + 0x62c)) break;
          *(undefined4 *)(param_1 + 0x62c) = 2;
          Se_PlayMenu(7);
          iVar3 = *(int *)(param_1 + 0x62c);
        }
      } while( true );
    }
    if (uVar5 == 0x10) {
      *(undefined4 *)(param_1 + 0x640) = 7;
      *(undefined4 *)(param_1 + 0x644) = 2;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x62c);
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
      Se_PlayMenu(5);
    }
    else if (uVar5 == 0x20) {
      *(undefined4 *)(param_1 + 0x640) = 0;
      *(undefined4 *)(param_1 + 0x644) = 2;
      g_MenuMgr->flags = g_MenuMgr->flags | 1;
      Se_PlayMenu(6);
    }
  }
  return;
}

// 0x0029b9b0  size 0x220
void maybe_ScrCareerStart_BuildStockList(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = Profile_Get(0);
  uVar2 = Profile_GetCurrentCarModel(uVar6);
  iVar5 = CarDb_GetModel(uVar2);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(iVar5 + 0x88) != 2) {
    sVar4 = 0;
    iVar5 = 0x8e;
    do {
      uVar6 = Profile_Get(0);
      sVar3 = Profile_GetPartStock(uVar6,(short)iVar5);
      if (sVar4 < sVar3) {
        uVar6 = Profile_Get(0);
        sVar4 = Profile_GetPartStock(uVar6,(short)iVar5);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xa2);
    if (sVar4 == 1) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 3;
    }
    else if (1 < sVar4) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 3;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
    }
    uVar6 = Profile_Get(0);
    sVar4 = Profile_GetCurrentPartSlot(uVar6,0xf);
    if (sVar4 != 0x8d) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
    uVar6 = Profile_Get(0);
    sVar4 = Profile_GetCurrentPartSlot(uVar6,0x10);
    if (sVar4 != 0x8d) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    }
    uVar6 = Profile_Get(0);
    sVar4 = Profile_GetCurrentPartSlot(uVar6,0xf);
    if (sVar4 != 0x8d) {
      uVar6 = Profile_Get(0);
      sVar4 = Profile_GetCurrentPartSlot(uVar6,0x10);
      if (sVar4 != 0x8d) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
      }
    }
  }
  if (*(int *)(param_1 + 0x63c) == 7) {
    *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) == 0) {
        if ((uVar1 & 4) == 0) {
          *(undefined4 *)(param_1 + 0x62c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x62c) = 2;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x62c) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x62c) = 0;
    }
  }
  return;
}

// 0x0029bbe0  size 0x15c
void maybe_ScrCareerStart_InputF(int param_1)

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
  if (uVar2 == 2) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    Se_PlayMenu(7);
  }
  else if (uVar2 == 1) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    Se_PlayMenu(7);
  }
  else if (uVar2 == 0x10) {
    *(undefined4 *)(param_1 + 0x640) = 5;
    *(undefined4 *)(param_1 + 0x644) = 2;
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(*(int *)(param_1 + 0x62c) + 0x36ee18);
    *(undefined4 *)(param_1 + 4) = 1;
    g_MenuMgr->flags = g_MenuMgr->flags | 1;
    Se_PlayMenu();
  }
  else {
    if (uVar2 != 0x20) {
      iVar1 = *(int *)(param_1 + 0x62c);
      goto LAB_0029bcf8;
    }
    *(undefined4 *)(param_1 + 0x640) = 0;
    *(undefined4 *)(param_1 + 0x644) = 2;
    Se_PlayMenu(6);
  }
  iVar1 = *(int *)(param_1 + 0x62c);
LAB_0029bcf8:
  if (iVar1 < 3) {
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x62c) = 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  return;
}

// 0x0029bd40  size 0x1bc
void maybe_ScrCareerStart_InputSchedule(undefined8 param_1)

{
  MenuMgr *pMVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
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
  iVar4 = (int)param_1;
  if ((uVar3 == 8) || (uVar3 == 2)) {
    *(int *)(iVar4 + 0x62c) = *(int *)(iVar4 + 0x62c) + 1;
    Se_PlayMenu(7);
  }
  else if ((uVar3 == 4) || (uVar3 == 1)) {
    *(int *)(iVar4 + 0x62c) = *(int *)(iVar4 + 0x62c) + -1;
    Se_PlayMenu(7);
  }
  else if (uVar3 == 0x10) {
    *(undefined4 *)(iVar4 + 0x640) = 4;
    *(undefined4 *)(iVar4 + 0x644) = 2;
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar4 + 0x62c);
    g_MenuMgr->flags = g_MenuMgr->flags | 1;
    g_MenuMgr->unk_05b8 = *(uint *)(iVar4 + 0x1c);
    maybe_ScrCareerStart_AdvanceSchedule(param_1);
    pMVar1 = g_MenuMgr;
    g_MenuMgr->unk_05bc = *(uint *)(iVar4 + 0x100);
    *(undefined4 *)&pMVar1->field_0x5c0 = *(undefined4 *)(iVar4 + 0x104);
    *(undefined4 *)&pMVar1->field_0x5c4 = *(undefined4 *)(iVar4 + 0x108);
    *(undefined4 *)&pMVar1->field_0x5c8 = *(undefined4 *)(iVar4 + 0x10c);
    *(undefined4 *)&pMVar1->field_0x5cc = *(undefined4 *)(iVar4 + 0x110);
    *(undefined4 *)&pMVar1->field_0x5d0 = *(undefined4 *)(iVar4 + 0x114);
    Se_PlayMenu(5);
  }
  else {
    if (uVar3 != 0x20) {
      iVar2 = *(int *)(iVar4 + 0x62c);
      goto LAB_0029beb8;
    }
    *(undefined4 *)(iVar4 + 0x640) = 0;
    *(undefined4 *)(iVar4 + 0x644) = 2;
    g_MenuMgr->flags = g_MenuMgr->flags | 1;
    Se_PlayMenu(6);
  }
  iVar2 = *(int *)(iVar4 + 0x62c);
LAB_0029beb8:
  if (iVar2 < 5) {
    if (iVar2 < 0) {
      *(undefined4 *)(iVar4 + 0x62c) = 4;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x62c) = 0;
  }
  return;
}

// 0x0029bf00  size 0x13c
void maybe_ScrCareerStart_BuildBattleList(int param_1)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_300 [4];
  char cStack_2fc;
  undefined1 auStack_180 [4];
  char cStack_17c;
  
  if (*(int *)(param_1 + 0x63c) == 4) {
    *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_1 + 0x1c);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  do {
    iVar4 = 0;
    do {
      lVar2 = RivalSchedule_Get(iVar5,iVar4);
      if (lVar2 != -1) {
        uVar3 = Profile_Get(0);
        sVar1 = Profile_GetRivalBattleCount(uVar3,lVar2);
        if (sVar1 != 0) {
          RivalDb_Copy(auStack_180,(short)lVar2);
          if ((cStack_17c != '\x05') &&
             (RivalDb_Copy(auStack_300,(short)lVar2), cStack_2fc != '\x06')) goto LAB_0029bf70;
        }
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      }
LAB_0029bf70:
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 4;
    if (4 < iVar5) {
      return;
    }
  } while( true );
}

