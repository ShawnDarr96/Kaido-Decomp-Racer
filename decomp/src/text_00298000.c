// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00298000 - 0x0029c000
#include "ghidra_types.h"

// 0x00298640  size 0x1b0
void FUN_00298640(undefined8 param_1)

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
    FUN_001fb290(7);
  }
  else if (uVar2 == 1) {
    puVar3[0x18b] = puVar3[0x18b] + -1;
    FUN_001fb290(7);
  }
  else if (uVar2 == 0x10) {
    if (puVar3[0x193] == 9) {
      FUN_0020edb0(5,0xffff);
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
    FUN_0029c370(param_1);
    FUN_001fd070(0xfffffffffffffffe);
    FUN_001fb290(5);
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
    FUN_001fb290(6);
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
void FUN_002987f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
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
      FUN_001fb290(5);
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
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = Race_GetCourseVariant();
    *(undefined1 *)(iRam0036f458 + 0x620) = uVar3;
    *(undefined4 *)(iRam0036f458 + 0x624) = 0xffffffff;
    *(undefined4 *)(iRam0036f458 + 0x628) = 0xffffffff;
    *(undefined1 *)(iRam0036f458 + 0x5ac) = uVar3;
    switch(uVar3) {
    case 0:
      *(undefined1 *)(iRam0036f458 + 0x640) = 1;
      break;
    case 1:
      *(undefined1 *)(iRam0036f458 + 0x640) = 0;
      break;
    case 2:
      *(undefined1 *)(iRam0036f458 + 0x640) = 2;
      break;
    case 3:
      *(undefined1 *)(iRam0036f458 + 0x640) = 3;
      break;
    case 4:
      *(undefined1 *)(iRam0036f458 + 0x640) = 4;
      break;
    case 5:
      *(undefined1 *)(iRam0036f458 + 0x640) = 5;
      break;
    case 6:
      *(undefined1 *)(iRam0036f458 + 0x640) = 6;
      break;
    case 7:
      *(undefined1 *)(iRam0036f458 + 0x640) = 7;
    }
    *(undefined4 *)(iRam0036f458 + 0x624) = uVar4;
    *(undefined4 *)(iRam0036f458 + 0x628) = uVar2;
    FUN_001fd070(0xf);
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x640);
LAB_002989e8:
  *(undefined4 *)(param_1 + 0x650) = uVar4;
  FUN_001fb240(param_1 + 0x648);
  return;
}

// 0x00298a20  size 0x3cc
void FUN_00298a20(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
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
        FUN_001fb290(8);
      }
      else {
        FUN_001fb290(7);
      }
    }
  }
  else if (uVar3 == 1) {
    if (*(int *)(param_1 + 0x684) == 0) {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
      if (*(int *)(param_1 + 0x62c) < 0) {
        FUN_001fb290(8);
      }
      else {
        FUN_001fb290(7);
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
        uVar1 = FUN_001c1890(0);
        FUN_001bc010(uVar1,0xf,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
        uVar1 = FUN_001c1890(0);
        FUN_001bc010(uVar1,0x10,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      else if (iVar2 == 0) {
        uVar1 = FUN_001c1890(0);
        FUN_001bc010(uVar1,0xf,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      else if (iVar2 == 1) {
        uVar1 = FUN_001c1890(0);
        FUN_001bc010(uVar1,0x10,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      *(undefined4 *)(param_1 + 0x640) = 3;
      *(undefined4 *)(param_1 + 0x644) = 2;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    }
    FUN_001fb290(5);
  }
  else {
    if (uVar3 != 0x20) {
      iVar2 = *(int *)(param_1 + 0x628);
      goto LAB_00298c54;
    }
    if (*(int *)(param_1 + 0x684) == 0) {
      *(undefined4 *)(param_1 + 0x640) = 3;
      *(undefined4 *)(param_1 + 0x644) = 2;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
      FUN_001fb290(6);
    }
    else {
      FUN_001fb290(6);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 2) {
        uVar1 = FUN_001c1890(0);
        FUN_001bc010(uVar1,0xf,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
        uVar1 = FUN_001c1890(0);
        FUN_001bc010(uVar1,0x10,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      else if (iVar2 == 0) {
        uVar1 = FUN_001c1890(0);
        FUN_001bc010(uVar1,0xf,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      else if (iVar2 == 1) {
        uVar1 = FUN_001c1890(0);
        FUN_001bc010(uVar1,0x10,*(undefined2 *)(*(int *)(param_1 + 0x62c) * 2 + param_1 + 0x5fc));
      }
      *(undefined4 *)(param_1 + 0x640) = 3;
      *(undefined4 *)(param_1 + 0x644) = 2;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
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
void FUN_00298df0(int param_1)

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
    uVar2 = FUN_001c1890(0);
    sVar1 = FUN_001bbaa0(uVar2,0xf);
    if (sVar1 != 0x8d) {
      uVar2 = FUN_001c1890(0);
      sVar1 = FUN_001bbaa0(uVar2,0x10);
      if (sVar1 != 0x8d) {
        *(undefined2 *)(*(int *)(param_1 + 0x628) * 2 + param_1 + 0x5fc) = 0x8d;
        *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
      }
    }
  }
  else if (iVar3 == 0) {
    uVar2 = FUN_001c1890(0);
    sVar1 = FUN_001bbaa0(uVar2,0xf);
    if (sVar1 != 0x8d) {
      *(undefined2 *)(*(int *)(param_1 + 0x628) * 2 + param_1 + 0x5fc) = 0x8d;
      *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
    }
  }
  else if (iVar3 == 1) {
    uVar2 = FUN_001c1890(0);
    sVar1 = FUN_001bbaa0(uVar2,0x10);
    if (sVar1 != 0x8d) {
      *(undefined2 *)(*(int *)(param_1 + 0x628) * 2 + param_1 + 0x5fc) = 0x8d;
      *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
    }
  }
  if (*(int *)(param_1 + 0x20) == 2) {
    iVar3 = 0x8e;
    do {
      uVar2 = FUN_001c1890(0);
      sVar1 = FUN_001bc220(uVar2,(short)iVar3);
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
      uVar2 = FUN_001c1890(0);
      sVar1 = FUN_001bc220(uVar2,(short)iVar3);
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
void FUN_00299060(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 auStack_740 [58];
  short sStack_706;
  undefined1 auStack_5c0 [56];
  short sStack_588;
  undefined1 auStack_440 [58];
  short sStack_406;
  undefined1 auStack_2c0 [56];
  short sStack_288;
  undefined1 auStack_140 [24];
  undefined4 uStack_128;
  undefined1 auStack_f0 [20];
  undefined4 uStack_dc;
  undefined1 auStack_a0 [24];
  int iStack_88;
  undefined1 auStack_50 [20];
  int iStack_3c;
  
  uVar11 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar11) == 0) {
    uVar11 = 0x100000;
  }
  else if (uVar11 == 0x80000) {
    uVar11 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar11 = 0x100000;
  }
  if (uVar11 == 2) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    FUN_001fb290(7);
  }
  else if (uVar11 == 1) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    FUN_001fb290(7);
  }
  else if (uVar11 == 0x10) {
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
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x10000000;
        }
        else {
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xdfffffff;
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xefffffff;
        }
        if (*(int *)(param_1 + 0xe4) == -1) {
          if (*(int *)(param_1 + 0x448) == -1) {
            uVar10 = RaceCtx_Get_10();
            cVar7 = Race_IsTimeTrialMode(uVar10,0);
            if (cVar7 == '\0') {
              FUN_001b55b0(auStack_440,*(undefined2 *)(param_1 + 0x24));
              FUN_001b55b0(auStack_2c0,*(undefined2 *)(param_1 + 0x24));
              uVar6 = RaceCtx_Get_10();
              *(undefined1 *)(iGpffff8d68 + 0x620) = uVar6;
              *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
              *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
              *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar6;
              switch(uVar6) {
              case 0:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
                break;
              case 1:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
                break;
              case 2:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
                break;
              case 3:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
                break;
              case 4:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
                break;
              case 5:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
                break;
              case 6:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
                break;
              case 7:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
              }
              *(int *)(iGpffff8d68 + 0x624) = 9 - sStack_288;
              *(int *)(iGpffff8d68 + 0x628) = 9 - sStack_406;
            }
            else {
              FUN_001b55b0(auStack_740,*(undefined2 *)(param_1 + 0x24));
              FUN_001b55b0(auStack_5c0,*(undefined2 *)(param_1 + 0x24));
              uVar6 = RaceCtx_Get_10();
              *(undefined1 *)(iGpffff8d68 + 0x620) = uVar6;
              *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
              *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
              *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar6;
              switch(uVar6) {
              case 0:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
                break;
              case 1:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
                break;
              case 2:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
                break;
              case 3:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
                break;
              case 4:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
                break;
              case 5:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
                break;
              case 6:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
                break;
              case 7:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
              }
              *(int *)(iGpffff8d68 + 0x624) = (int)sStack_588;
              *(int *)(iGpffff8d68 + 0x628) = (int)sStack_706;
            }
          }
          else {
            uVar8 = FUN_001b5610((short)*(int *)(param_1 + 0x448));
            iVar9 = FUN_001b55a0(uVar8);
            uVar10 = RaceCtx_Get_10();
            cVar7 = Race_IsTimeTrialMode(uVar10,0);
            if (cVar7 == '\0') {
              sVar1 = *(short *)(iVar9 + 0x3a);
              sVar2 = *(short *)(iVar9 + 0x38);
              uVar6 = RaceCtx_Get_10();
              *(undefined1 *)(iGpffff8d68 + 0x620) = uVar6;
              *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
              *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
              *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar6;
              switch(uVar6) {
              case 0:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
                break;
              case 1:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
                break;
              case 2:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
                break;
              case 3:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
                break;
              case 4:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
                break;
              case 5:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
                break;
              case 6:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
                break;
              case 7:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
              }
              *(int *)(iGpffff8d68 + 0x624) = 9 - sVar2;
              *(int *)(iGpffff8d68 + 0x628) = 9 - sVar1;
            }
            else {
              sVar1 = *(short *)(iVar9 + 0x3a);
              sVar2 = *(short *)(iVar9 + 0x38);
              uVar6 = RaceCtx_Get_10();
              *(undefined1 *)(iGpffff8d68 + 0x620) = uVar6;
              *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
              *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
              *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar6;
              switch(uVar6) {
              case 0:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
                break;
              case 1:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
                break;
              case 2:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
                break;
              case 3:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
                break;
              case 4:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
                break;
              case 5:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
                break;
              case 6:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
                break;
              case 7:
                *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
              }
              *(int *)(iGpffff8d68 + 0x624) = (int)sVar2;
              *(int *)(iGpffff8d68 + 0x628) = (int)sVar1;
            }
          }
        }
        else {
          uVar10 = RaceCtx_Get_10();
          cVar7 = Race_IsTimeTrialMode(uVar10,0);
          if (cVar7 == '\0') {
            FUN_001b0ea0(auStack_a0,*(undefined4 *)(param_1 + 0xe4));
            FUN_001b0ea0(auStack_50,*(undefined4 *)(param_1 + 0xe4));
            uVar6 = RaceCtx_Get_10();
            *(undefined1 *)(iGpffff8d68 + 0x620) = uVar6;
            *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
            *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
            *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar6;
            switch(uVar6) {
            case 0:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
              break;
            case 1:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
              break;
            case 2:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
              break;
            case 3:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
              break;
            case 4:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
              break;
            case 5:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
              break;
            case 6:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
              break;
            case 7:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
            }
            *(int *)(iGpffff8d68 + 0x624) = 9 - iStack_3c;
            *(int *)(iGpffff8d68 + 0x628) = 9 - iStack_88;
          }
          else {
            FUN_001b0ea0(auStack_140,*(undefined4 *)(param_1 + 0xe4));
            FUN_001b0ea0(auStack_f0,*(undefined4 *)(param_1 + 0xe4));
            uVar6 = RaceCtx_Get_10();
            *(undefined1 *)(iGpffff8d68 + 0x620) = uVar6;
            *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
            *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
            *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar6;
            switch(uVar6) {
            case 0:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
              break;
            case 1:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
              break;
            case 2:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
              break;
            case 3:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
              break;
            case 4:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
              break;
            case 5:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
              break;
            case 6:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
              break;
            case 7:
              *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
            }
            *(undefined4 *)(iGpffff8d68 + 0x624) = uStack_dc;
            *(undefined4 *)(iGpffff8d68 + 0x628) = uStack_128;
          }
        }
      }
      else {
        uVar10 = RaceCtx_Get_10();
        cVar7 = Race_IsTimeTrialMode(uVar10,0);
        if (cVar7 == '\0') {
          iVar9 = *(int *)(param_1 + 0x10);
          iVar3 = *(int *)(param_1 + 0xc);
          uVar6 = RaceCtx_Get_10();
          *(undefined1 *)(iGpffff8d68 + 0x620) = uVar6;
          *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
          *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
          *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar6;
          switch(uVar6) {
          case 0:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
            break;
          case 1:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
            break;
          case 2:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
            break;
          case 3:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
            break;
          case 4:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
            break;
          case 5:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
            break;
          case 6:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
            break;
          case 7:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
          }
          *(int *)(iGpffff8d68 + 0x624) = 9 - iVar3;
          *(int *)(iGpffff8d68 + 0x628) = 9 - iVar9;
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0xc);
          uVar5 = *(undefined4 *)(param_1 + 0x10);
          uVar6 = RaceCtx_Get_10();
          *(undefined1 *)(iGpffff8d68 + 0x620) = uVar6;
          *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
          *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
          *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar6;
          switch(uVar6) {
          case 0:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
            break;
          case 1:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
            break;
          case 2:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
            break;
          case 3:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
            break;
          case 4:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
            break;
          case 5:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
            break;
          case 6:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
            break;
          case 7:
            *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
          }
          *(undefined4 *)(iGpffff8d68 + 0x624) = uVar4;
          *(undefined4 *)(iGpffff8d68 + 0x628) = uVar5;
        }
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x20000000;
      }
      FUN_001fd070(0xf);
      FUN_001f8ca0(iGpffff8d68 + 0x654);
      *(undefined4 *)(param_1 + 0x680) = 1;
    }
    *(undefined4 *)(param_1 + 0x644) = 2;
    FUN_001fb290(5);
  }
  else {
    if (uVar11 != 0x20) {
      iVar9 = *(int *)(param_1 + 0x62c);
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
        cVar7 = FUN_001f5cb0();
        if ((cVar7 == '\x06') ||
           (cVar7 = FUN_001f5cb0(*(undefined4 *)(param_1 + 0x448)), cVar7 == '\a')) {
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
    FUN_001fb290(6);
  }
  iVar9 = *(int *)(param_1 + 0x62c);
LAB_0029943c:
  if (iVar9 < 2) {
    if (iVar9 < 0) {
      *(undefined4 *)(param_1 + 0x62c) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x62c) = 0;
  }
  return;
}

// 0x00299c10  size 0xe4
void FUN_00299c10(int param_1)

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
  else if (*(int *)(iGpffff8d68 + 0x24) == 0xf) {
    *(undefined4 *)(param_1 + 0x62c) = 1;
  }
  return;
}

// 0x00299d00  size 0x3a4
void FUN_00299d00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 8) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    if ((*(int *)(param_1 + 0x62c) < 10) && (*(int *)(param_1 + 0x62c) != 9)) {
      FUN_001fb290(7);
    }
    else {
      FUN_001fb290(8);
    }
  }
  else if (uVar4 == 4) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    if ((*(int *)(param_1 + 0x62c) < 0) ||
       ((*(int *)(param_1 + 0xc) == 0 && (*(int *)(param_1 + 0x62c) == 0)))) {
      FUN_001fb290(8);
    }
    else {
      FUN_001fb290(7);
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
    FUN_001fb290(5);
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
        FUN_0020edb0(5,0xffff);
      }
      *(undefined4 *)(param_1 + 0x644) = 2;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    }
    else {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    }
    FUN_001fb290(6);
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
    FUN_0020edb0(10,*(undefined4 *)(param_1 + 0x6b4));
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
void FUN_0029a0b0(int param_1)

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
    FUN_00299d00();
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
      FUN_0020ee40(0,0x11,8,1);
      FUN_0020edb0(10,*(undefined4 *)(param_1 + 0x6b4));
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
  FUN_001fb240(param_1 + 0x648);
  return;
}

// 0x0029a1f0  size 0x970
int FUN_0029a1f0(int param_1)

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
  FUN_001b55b0(auStack_3e0,uVar11);
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
  sVar4 = FUN_001b4970(auStack_190);
  if (sVar4 == -1) {
    lVar6 = FUN_001b4940(auStack_190);
    if (lVar6 != 0) {
      sVar4 = FUN_001b4900(auStack_190);
      uVar7 = FUN_001c1890(0);
      sVar5 = FUN_001c0850(uVar7,sVar4);
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
    uVar7 = FUN_001c1890(0);
    lVar6 = FUN_001b8990(uVar7);
    if (lVar6 < 0xf) {
      sVar4 = FUN_001b4970(auStack_190);
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
    switch(*(undefined1 *)(param_1 + 0x480)) {
    case 0:
      uVar7 = FUN_001c1890(0);
      sVar4 = FUN_001bc220(uVar7,*(undefined2 *)(param_1 + 0x484));
      if (0x62 < sVar4) {
        *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 4;
      }
      lVar6 = FUN_001d3540(*(undefined2 *)(param_1 + 0x484));
      iVar16 = 0;
      *(int *)(param_1 + 0x490) = (int)lVar6;
      iVar19 = 0;
      iVar9 = param_1;
      do {
        uVar7 = FUN_001c1890(0);
        uVar11 = (undefined2)iVar19;
        sVar4 = FUN_001bc220(uVar7,uVar11);
        if ((((((0 < sVar4) && (lVar8 = FUN_001d3540(uVar11), lVar6 <= lVar8)) &&
              (sVar4 = FUN_001d3970(uVar11), sVar4 != 0xad)) &&
             (((sVar4 = FUN_001d3970(uVar11), sVar4 != 0xa9 &&
               (sVar4 = FUN_001d3970(uVar11), sVar4 != 0xaa)) &&
              ((sVar4 = FUN_001d3970(uVar11), sVar4 != 0xa2 &&
               ((sVar4 = FUN_001d3970(uVar11), sVar4 != 0xa4 &&
                (sVar4 = FUN_001d3970(uVar11), sVar4 != 0x89)))))))) &&
            (sVar4 = FUN_001d3970(uVar11), sVar4 != 0x8d)) &&
           (((sVar4 = FUN_001d3970(uVar11), sVar4 != 0x93 &&
             (sVar4 = FUN_001d3970(uVar11), sVar4 != 0x98)) &&
            (sVar4 = FUN_001d3970(uVar11), sVar4 != 0x9d)))) {
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
      iVar9 = FUN_001ba290(*(undefined2 *)(param_1 + 0x484),0);
      iVar9 = (iVar9 * 100) / 100;
      *(int *)(param_1 + 0x48c) = iVar9;
      uVar7 = FUN_001c1890(0);
      iVar19 = FUN_001bcb00(uVar7);
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
      uVar7 = FUN_001c1890(0);
      cVar3 = FUN_001b8eb0(uVar7);
      uVar7 = FUN_001c1890(0);
      iVar9 = FUN_001b89d0(uVar7);
      if (cVar3 - iVar9 < 1) {
        *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 0x10;
      }
      uVar7 = FUN_001c1890(0);
      lVar6 = FUN_001b89d0(uVar7);
      if (lVar6 < 2) {
        *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 8;
      }
      else {
        iVar9 = FUN_00205530(*(undefined4 *)(param_1 + 0x484));
        iVar19 = 0;
        bVar1 = *(int *)(iVar9 + 0x88) == 2;
        if (bVar1) {
          *(undefined4 *)(param_1 + 0x490) = 1;
        }
        lVar6 = 0;
        do {
          uVar7 = FUN_001c1890(0);
          sVar4 = FUN_001bc460(uVar7);
          iVar9 = (int)lVar6;
          if (lVar6 != sVar4) {
            uVar7 = FUN_001c1890(0);
            FUN_001bc3b0(&sStack_4b0,uVar7,lVar6);
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
                iVar16 = FUN_00205530();
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
      iVar9 = FUN_00205530(*(undefined4 *)(param_1 + 0x484));
      uVar18 = (uint)(*(int *)(iVar9 + 0x84) * 0x8c) / 100000;
      *(uint *)(param_1 + 0x48c) = uVar18;
      uVar7 = FUN_001c1890(0);
      iVar9 = FUN_001bcb00(uVar7);
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
    case 3:
    case 4:
    case 7:
      *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x488);
      uVar7 = FUN_001c1890(0);
      iVar9 = FUN_001bcb00(uVar7);
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
      uVar7 = FUN_001c1890(0);
      iVar9 = FUN_001bcb00(uVar7);
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
      break;
    default:
      iVar19 = 0x22;
    }
  }
  return iVar19;
}

// 0x0029ab70  size 0x458
void FUN_0029ab70(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar3 = 0x100000;
  }
  iVar4 = (int)param_1;
  if (uVar3 == 8) {
    iVar1 = *(int *)(iVar4 + 0x62c) + 1;
    *(int *)(iVar4 + 0x62c) = iVar1;
    if (iVar1 < 6) {
      *(undefined4 *)(iVar4 + 0x668) = 1;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
      FUN_00201260(0x84,0);
      FUN_001fb290(7);
    }
    else {
      *(undefined4 *)(iVar4 + 0x62c) = 5;
      FUN_001fb290();
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x62c);
    switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
    case 1:
      *(undefined4 *)(iGpffff8d68 + 0x598) = uVar2;
      break;
    case 2:
      *(undefined4 *)(iGpffff8d68 + 0x5dc) = uVar2;
      break;
    case 3:
      *(undefined4 *)(iGpffff8d68 + 0x5fc) = uVar2;
      break;
    case 4:
      *(undefined4 *)(iGpffff8d68 + 0x618) = uVar2;
    }
    *(undefined4 *)(iVar4 + 0x6a4) = *(undefined4 *)(iVar4 + 0x62c);
  }
  else if (uVar3 == 4) {
    iVar1 = *(int *)(iVar4 + 0x62c) + -1;
    *(int *)(iVar4 + 0x62c) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(iVar4 + 0x62c) = 0;
      FUN_001fb290();
    }
    else {
      *(undefined4 *)(iVar4 + 0x668) = 2;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
      FUN_00201260(0x84,1);
      FUN_001fb290(7);
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x62c);
    switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
    case 1:
      *(undefined4 *)(iGpffff8d68 + 0x598) = uVar2;
      break;
    case 2:
      *(undefined4 *)(iGpffff8d68 + 0x5dc) = uVar2;
      break;
    case 3:
      *(undefined4 *)(iGpffff8d68 + 0x5fc) = uVar2;
      break;
    case 4:
      *(undefined4 *)(iGpffff8d68 + 0x618) = uVar2;
    }
    *(undefined4 *)(iVar4 + 0x6a4) = *(undefined4 *)(iVar4 + 0x62c);
  }
  else if (uVar3 == 0x400) {
    iVar1 = *(int *)(iVar4 + 0x1c) + -1;
    *(int *)(iVar4 + 0x1c) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      FUN_001fb290();
    }
    else {
      *(undefined4 *)(iGpffff8d68 + 0x5b8) = *(undefined4 *)(iVar4 + 0x1c);
      FUN_001fb290(7);
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    }
    FUN_0029afd0(param_1);
    *(undefined4 *)(iGpffff8d68 + 0x5bc) = *(undefined4 *)(iVar4 + 0x100);
    *(undefined4 *)(iGpffff8d68 + 0x5c0) = *(undefined4 *)(iVar4 + 0x104);
    *(undefined4 *)(iGpffff8d68 + 0x5c4) = *(undefined4 *)(iVar4 + 0x108);
    *(undefined4 *)(iGpffff8d68 + 0x5c8) = *(undefined4 *)(iVar4 + 0x10c);
    *(undefined4 *)(iGpffff8d68 + 0x5cc) = *(undefined4 *)(iVar4 + 0x110);
    *(undefined4 *)(iGpffff8d68 + 0x5d0) = *(undefined4 *)(iVar4 + 0x114);
  }
  else if (uVar3 == 0x2000) {
    iVar1 = *(int *)(iVar4 + 0x1c) + 1;
    *(int *)(iVar4 + 0x1c) = iVar1;
    if (iVar1 < 5) {
      *(undefined4 *)(iGpffff8d68 + 0x5b8) = *(undefined4 *)(iVar4 + 0x1c);
      FUN_001fb290(7);
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    }
    else {
      *(undefined4 *)(iVar4 + 0x1c) = 4;
      FUN_001fb290();
    }
    FUN_0029afd0(param_1);
    *(undefined4 *)(iGpffff8d68 + 0x5bc) = *(undefined4 *)(iVar4 + 0x100);
    *(undefined4 *)(iGpffff8d68 + 0x5c0) = *(undefined4 *)(iVar4 + 0x104);
    *(undefined4 *)(iGpffff8d68 + 0x5c4) = *(undefined4 *)(iVar4 + 0x108);
    *(undefined4 *)(iGpffff8d68 + 0x5c8) = *(undefined4 *)(iVar4 + 0x10c);
    *(undefined4 *)(iGpffff8d68 + 0x5cc) = *(undefined4 *)(iVar4 + 0x110);
    *(undefined4 *)(iGpffff8d68 + 0x5d0) = *(undefined4 *)(iVar4 + 0x114);
  }
  else if (uVar3 == 0x1000) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x62c) * 4 + iVar4 + 0x100);
    if (iVar1 != -1) {
      *(int *)(iVar4 + 0x28) = iVar1;
      *(undefined4 *)(iVar4 + 0x640) = 0x16;
      *(undefined4 *)(iVar4 + 0x644) = 2;
      FUN_001fb290(5);
    }
  }
  else if (uVar3 == 0x10) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x62c) * 4 + iVar4 + 0x100);
    if (iVar1 == -1) {
      FUN_001fb290();
    }
    else {
      *(int *)(iVar4 + 0x24) = iVar1;
      uVar2 = FUN_0029a1f0(param_1);
      *(undefined4 *)(iVar4 + 0x640) = uVar2;
      *(undefined4 *)(iVar4 + 0x644) = 2;
      if (*(int *)(iVar4 + 0x640) == 0xd) {
        FUN_001fb290(8);
        uVar2 = *(undefined4 *)(iVar4 + 0x62c);
      }
      else {
        FUN_001fb290(5);
        uVar2 = *(undefined4 *)(iVar4 + 0x62c);
      }
      *(undefined4 *)(iVar4 + 0x6a8) = uVar2;
    }
  }
  else {
    if (uVar3 != 0x20) {
      iVar1 = *(int *)(iVar4 + 0x62c);
      goto LAB_0029af18;
    }
    *(undefined4 *)(iVar4 + 0x640) = 1;
    *(undefined4 *)(iVar4 + 0x644) = 2;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    FUN_001fb290(6);
    FUN_001f8ca0(iGpffff8d68 + 0x654);
  }
  iVar1 = *(int *)(iVar4 + 0x62c);
LAB_0029af18:
  if (iVar1 < 6) {
    if (iVar1 < 0) {
      *(undefined4 *)(iVar4 + 0x62c) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x62c) = 5;
  }
  return;
}

// 0x0029afd0  size 0x5f0
void FUN_0029afd0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
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
      iVar10 = 0;
      iVar8 = param_1;
      do {
        uVar4 = FUN_001beac0(*(undefined4 *)(param_1 + 0x1c),iVar10);
        *(undefined4 *)(iVar8 + 0x100) = uVar4;
        iVar1 = *(int *)(iVar8 + 0x100);
        if (iVar1 != -1) {
          FUN_001b55b0(&uStack_300,(short)iVar1);
          puVar9 = auStack_2bc;
          uStack_180 = uStack_300;
          uStack_168 = uStack_2e8;
          puVar7 = auStack_13c;
          uStack_17e = uStack_2fe;
          uStack_164 = uStack_2e4;
          iVar5 = 0x17;
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
            iVar5 = iVar5 + -1;
            *puVar7 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (0 < iVar5);
          iVar5 = 0x17;
          puVar9 = auStack_260;
          puVar7 = auStack_e0;
          do {
            iVar5 = iVar5 + -1;
            *puVar7 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (0 < iVar5);
          iVar5 = 8;
          puVar9 = auStack_204;
          puVar7 = auStack_84;
          do {
            iVar5 = iVar5 + -1;
            uVar4 = puVar9[1];
            *puVar7 = *puVar9;
            puVar7[1] = uVar4;
            puVar9 = puVar9 + 2;
            puVar7 = puVar7 + 2;
          } while (0 < iVar5);
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
          uVar6 = FUN_001c1890(0);
          FUN_001c0e30(uVar6,iVar1);
          cVar2 = FUN_001b4930(&uStack_180);
          if (cVar2 == '\v') {
            uVar6 = FUN_001c1890(0);
            uVar3 = FUN_001b4970(&uStack_180);
            FUN_001b88c0(uVar6,uVar3);
          }
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar10 < 6);
    }
    else {
      iVar10 = 0;
      iVar8 = param_1;
      do {
        if (*(int *)(param_1 + 0x28) == *(int *)(iVar8 + 0x100)) {
          *(int *)(param_1 + 0x62c) = iVar10;
          break;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar10 < 6);
    }
  }
  else {
    iVar10 = 0;
    iVar8 = param_1;
    do {
      if (*(int *)(param_1 + 0x24) == *(int *)(iVar8 + 0x100)) {
        *(int *)(param_1 + 0x62c) = iVar10;
        break;
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < 6);
  }
  iVar10 = 0;
  iVar8 = param_1;
  do {
    *(undefined2 *)(iVar8 + 0x118) = 0xffff;
    iVar10 = iVar10 + 8;
    *(undefined2 *)(iVar8 + 0x11a) = 0xffff;
    *(undefined2 *)(iVar8 + 0x11c) = 0xffff;
    *(undefined2 *)(iVar8 + 0x11e) = 0xffff;
    *(undefined2 *)(iVar8 + 0x120) = 0xffff;
    *(undefined2 *)(iVar8 + 0x122) = 0xffff;
    *(undefined2 *)(iVar8 + 0x124) = 0xffff;
    *(undefined2 *)(iVar8 + 0x126) = 0xffff;
    iVar8 = iVar8 + 0x10;
  } while (iVar10 < 0x15a);
  iVar8 = iVar10 * 2 + param_1;
  iVar10 = 0;
  *(undefined2 *)(iVar8 + 0x118) = 0xffff;
  *(undefined2 *)(iVar8 + 0x11a) = 0xffff;
  iVar8 = param_1;
  do {
    *(undefined4 *)(iVar8 + 0x3e0) = 0xffffffff;
    iVar10 = iVar10 + 5;
    *(undefined4 *)(iVar8 + 0x3e4) = 0xffffffff;
    *(undefined4 *)(iVar8 + 1000) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x3ec) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x3f0) = 0xffffffff;
    iVar8 = iVar8 + 0x14;
  } while (iVar10 < 0x19);
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
  iVar8 = *(int *)(param_1 + 0x648);
  if ((((iVar8 == 1) || (iVar8 == 0x26)) || (iVar8 == 0x18)) || (iVar8 == 0x27)) {
    *(undefined4 *)(iGpffff8d68 + 0x5b8) = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(param_1 + 0x62c);
    switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
    case 1:
      *(undefined4 *)(iGpffff8d68 + 0x598) = uVar4;
      break;
    case 2:
      *(undefined4 *)(iGpffff8d68 + 0x5dc) = uVar4;
      break;
    case 3:
      *(undefined4 *)(iGpffff8d68 + 0x5fc) = uVar4;
      break;
    case 4:
      *(undefined4 *)(iGpffff8d68 + 0x618) = uVar4;
    }
    uVar6 = FUN_001c1890(0);
    uVar3 = FUN_001c1700(uVar6);
    *(undefined1 *)(iGpffff8d68 + 0x620) = uVar3;
    *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
    *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
    *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar3;
    switch(uVar3) {
    case 0:
      *(undefined1 *)(iGpffff8d68 + 0x640) = 1;
      break;
    case 1:
      *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
      break;
    case 2:
      *(undefined1 *)(iGpffff8d68 + 0x640) = 2;
      break;
    case 3:
      *(undefined1 *)(iGpffff8d68 + 0x640) = 3;
      break;
    case 4:
      *(undefined1 *)(iGpffff8d68 + 0x640) = 4;
      break;
    case 5:
      *(undefined1 *)(iGpffff8d68 + 0x640) = 5;
      break;
    case 6:
      *(undefined1 *)(iGpffff8d68 + 0x640) = 6;
      break;
    case 7:
      *(undefined1 *)(iGpffff8d68 + 0x640) = 7;
    }
  }
  *(undefined4 *)(param_1 + 0x668) = 0;
  return;
}

// 0x0029b5c0  size 0xec
void FUN_0029b5c0(undefined8 param_1)

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
    FUN_0029ab70();
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
    FUN_0029afd0(param_1);
    *(undefined4 *)(iVar3 + 0x668) = 0;
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x640);
LAB_0029b680:
  *(undefined4 *)(iVar3 + 0x650) = uVar2;
  FUN_001fb240(iVar3 + 0x648);
  return;
}

// 0x0029b6b0  size 0x2f0
void FUN_0029b6b0(int param_1)

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
    uVar5 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar5) == 0) {
      uVar5 = 0x100000;
    }
    else if (uVar5 == 0x80000) {
      uVar5 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar5 = 0x100000;
    }
    if ((uVar5 == 0x20) || (uVar5 == 0x10)) {
      *(undefined4 *)(param_1 + 0x640) = 0;
      *(undefined4 *)(param_1 + 0x644) = 2;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
      FUN_001fb290(6);
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
    uVar5 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar5) == 0) {
      uVar5 = 0x100000;
    }
    else if (uVar5 == 0x80000) {
      uVar5 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar5 = 0x100000;
    }
    if (uVar5 == 2) {
      *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
      do {
        iVar3 = *(int *)(param_1 + 0x62c);
        while( true ) {
          if (aiStack_10[iVar3] == 1) {
            FUN_001fb290(7);
            return;
          }
          *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
          if (*(int *)(param_1 + 0x62c) < 3) break;
          *(undefined4 *)(param_1 + 0x62c) = 0;
          FUN_001fb290(7);
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
            FUN_001fb290(7);
            return;
          }
          *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
          if (-1 < *(int *)(param_1 + 0x62c)) break;
          *(undefined4 *)(param_1 + 0x62c) = 2;
          FUN_001fb290(7);
          iVar3 = *(int *)(param_1 + 0x62c);
        }
      } while( true );
    }
    if (uVar5 == 0x10) {
      *(undefined4 *)(param_1 + 0x640) = 7;
      *(undefined4 *)(param_1 + 0x644) = 2;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x62c);
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
      FUN_001fb290(5);
    }
    else if (uVar5 == 0x20) {
      *(undefined4 *)(param_1 + 0x640) = 0;
      *(undefined4 *)(param_1 + 0x644) = 2;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
      FUN_001fb290(6);
    }
  }
  return;
}

// 0x0029b9b0  size 0x220
void FUN_0029b9b0(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_001c1890(0);
  uVar2 = FUN_001bc470(uVar6);
  iVar5 = FUN_00205530(uVar2);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(iVar5 + 0x88) != 2) {
    sVar4 = 0;
    iVar5 = 0x8e;
    do {
      uVar6 = FUN_001c1890(0);
      sVar3 = FUN_001bc220(uVar6,(short)iVar5);
      if (sVar4 < sVar3) {
        uVar6 = FUN_001c1890(0);
        sVar4 = FUN_001bc220(uVar6,(short)iVar5);
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
    uVar6 = FUN_001c1890(0);
    sVar4 = FUN_001bbaa0(uVar6,0xf);
    if (sVar4 != 0x8d) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
    uVar6 = FUN_001c1890(0);
    sVar4 = FUN_001bbaa0(uVar6,0x10);
    if (sVar4 != 0x8d) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    }
    uVar6 = FUN_001c1890(0);
    sVar4 = FUN_001bbaa0(uVar6,0xf);
    if (sVar4 != 0x8d) {
      uVar6 = FUN_001c1890(0);
      sVar4 = FUN_001bbaa0(uVar6,0x10);
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
void FUN_0029bbe0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 2) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
    FUN_001fb290(7);
  }
  else if (uVar2 == 1) {
    *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + -1;
    FUN_001fb290(7);
  }
  else if (uVar2 == 0x10) {
    *(undefined4 *)(param_1 + 0x640) = 5;
    *(undefined4 *)(param_1 + 0x644) = 2;
    *(undefined1 *)(param_1 + 0xe8) =
         *(undefined1 *)((int)register0x000001c0 + *(int *)(param_1 + 0x62c) + -0x78d8);
    *(undefined4 *)(param_1 + 4) = 1;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    FUN_001fb290();
  }
  else {
    if (uVar2 != 0x20) {
      iVar1 = *(int *)(param_1 + 0x62c);
      goto LAB_0029bcf8;
    }
    *(undefined4 *)(param_1 + 0x640) = 0;
    *(undefined4 *)(param_1 + 0x644) = 2;
    FUN_001fb290(6);
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
void FUN_0029bd40(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar2 = 0x100000;
  }
  iVar3 = (int)param_1;
  if ((uVar2 == 8) || (uVar2 == 2)) {
    *(int *)(iVar3 + 0x62c) = *(int *)(iVar3 + 0x62c) + 1;
    FUN_001fb290(7);
  }
  else if ((uVar2 == 4) || (uVar2 == 1)) {
    *(int *)(iVar3 + 0x62c) = *(int *)(iVar3 + 0x62c) + -1;
    FUN_001fb290(7);
  }
  else if (uVar2 == 0x10) {
    *(undefined4 *)(iVar3 + 0x640) = 4;
    *(undefined4 *)(iVar3 + 0x644) = 2;
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x62c);
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    *(undefined4 *)(iGpffff8d68 + 0x5b8) = *(undefined4 *)(iVar3 + 0x1c);
    FUN_0029afd0(param_1);
    *(undefined4 *)(iGpffff8d68 + 0x5bc) = *(undefined4 *)(iVar3 + 0x100);
    *(undefined4 *)(iGpffff8d68 + 0x5c0) = *(undefined4 *)(iVar3 + 0x104);
    *(undefined4 *)(iGpffff8d68 + 0x5c4) = *(undefined4 *)(iVar3 + 0x108);
    *(undefined4 *)(iGpffff8d68 + 0x5c8) = *(undefined4 *)(iVar3 + 0x10c);
    *(undefined4 *)(iGpffff8d68 + 0x5cc) = *(undefined4 *)(iVar3 + 0x110);
    *(undefined4 *)(iGpffff8d68 + 0x5d0) = *(undefined4 *)(iVar3 + 0x114);
    FUN_001fb290(5);
  }
  else {
    if (uVar2 != 0x20) {
      iVar1 = *(int *)(iVar3 + 0x62c);
      goto LAB_0029beb8;
    }
    *(undefined4 *)(iVar3 + 0x640) = 0;
    *(undefined4 *)(iVar3 + 0x644) = 2;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    FUN_001fb290(6);
  }
  iVar1 = *(int *)(iVar3 + 0x62c);
LAB_0029beb8:
  if (iVar1 < 5) {
    if (iVar1 < 0) {
      *(undefined4 *)(iVar3 + 0x62c) = 4;
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x62c) = 0;
  }
  return;
}

// 0x0029bf00  size 0x13c
void FUN_0029bf00(int param_1)

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
      lVar2 = FUN_001beac0(iVar5,iVar4);
      if (lVar2 != -1) {
        uVar3 = FUN_001c1890(0);
        sVar1 = FUN_001c0890(uVar3,lVar2);
        if (sVar1 != 0) {
          FUN_001b55b0(auStack_180,(short)lVar2);
          if ((cStack_17c != '\x05') &&
             (FUN_001b55b0(auStack_300,(short)lVar2), cStack_2fc != '\x06')) goto LAB_0029bf70;
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

