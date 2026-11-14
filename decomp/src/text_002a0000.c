// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002a0000 - 0x002a4000
#include "ghidra_types.h"

// 0x002a11b0  size 0xb8
void FUN_002a11b0(int param_1)

{
  int iVar1;
  undefined8 in_t1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x6c) = 3;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  if (*(int *)(param_1 + 4) < 4) {
    in_t1 = 0xf;
  }
  else if (*(int *)(param_1 + 4) < 8) {
    in_t1 = 0xf0;
  }
  FUN_001f8640(param_1 + 4,0,2,0x1f,1,in_t1);
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  return;
}

// 0x002a1270  size 0x1b0
void FUN_002a1270(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  iVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (iVar1 != 0) {
    param_1[0x1a] = 0;
    param_1[2] = 0;
    param_1[4] = 1;
    if (param_1[1] < 4) {
      param_1[1] = 0;
    }
    else if (param_1[1] < 8) {
      param_1[1] = 4;
    }
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  uVar6 = *(uint *)(&DAT_0032ecf0 + *param_1 * 4);
  if (*param_1 == 5) {
    uVar4 = FUN_001c1890(0);
    uVar4 = FUN_001bc3f0(uVar4);
    uVar3 = FUN_001d20f0(uVar4);
    lVar5 = FUN_002055e0(uVar3);
    if (lVar5 == 1) {
      uVar4 = FUN_001c1890(0);
      uVar4 = FUN_001bc3f0(uVar4);
      cVar2 = FUN_001d3000(uVar4);
      if (cVar2 != '\0') {
        uVar6 = 0x7b000000;
      }
    }
    else {
      uVar6 = 0x7b000000;
    }
    lVar5 = FUN_0029f130(0x19);
    if (lVar5 == 0) {
      uVar6 = uVar6 & 0xfdffffff;
    }
  }
  FUN_001f8640(param_1 + 1,0,2,0x1f,1,uVar6);
  iVar1 = param_1[1];
  if (iVar1 == 0x19) {
    param_1[0x1b] = 9;
  }
  else if ((iVar1 == 0) || (iVar1 == 4)) {
    param_1[0x1b] = 2;
  }
  else {
    param_1[0x1b] = 3;
  }
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  return;
}

// 0x002a1420  size 0xcc
void FUN_002a1420(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[0x15];
  piVar2[0x15] = 0;
  if (iVar1 != 0) {
    piVar2[0x1a] = -1;
    piVar2[1] = 0;
    piVar2[3] = 0;
    piVar2[0xf] = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  FUN_001f8640(param_1,0,2,5,1,0);
  if (*piVar2 == 4) {
    piVar2[0x1b] = 8;
  }
  else {
    piVar2[0x1b] = 1;
  }
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  return;
}

// 0x002a14f0  size 0x34
undefined8 FUN_002a14f0(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x002a1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00367210)[(int)param_1])();
    return uVar1;
  }
  return 0x16;
}

// 0x002a1600  size 0x84
short FUN_002a1600(undefined8 param_1,short param_2)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_002a17d0();
  lVar3 = FUN_001f60a0(uVar2);
  if (lVar3 == 1) {
    sVar1 = FUN_002a17d0(param_1);
    param_2 = param_2 + sVar1;
  }
  else {
    sVar1 = FUN_002a17d0(param_1);
    param_2 = param_2 + sVar1 + -1;
  }
  return param_2;
}

// 0x002a1690  size 0x34
undefined8 FUN_002a1690(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x002a16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_003672a0)[(int)param_1])();
    return uVar1;
  }
  return 0;
}

// 0x002a17d0  size 0x34
undefined8 FUN_002a17d0(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x002a17f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00367330)[(int)param_1])();
    return uVar1;
  }
  return 0;
}

// 0x002a1990  size 0x60
void FUN_002a1990(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_001fb170(iVar2 + 0x48);
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032eca0)[*(int *)(iVar2 + 0x4c)])(param_1);
    FUN_0029e910(param_1);
    FUN_001fb240(iVar2 + 0x48);
  }
  return;
}

// 0x002a19f0  size 0x78
void FUN_002a19f0(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 1;
  param_1[0x19] = 0;
  param_1[0x17] = 1;
  param_1[0x15] = 1;
  param_1[0x18] = 0;
  *param_1 = 0;
  iVar2 = FUN_001c1890(0);
  iVar3 = FUN_002d3ba0(0);
  sVar1 = *(short *)(iVar2 + iVar3 * 2 + 0x13ee);
  *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
  *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
  return;
}

// 0x002a1a70  size 0x16c
void FUN_002a1a70(undefined8 param_1)

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
  if (uVar2 != 0x10) {
    if (uVar2 != 0x20) {
      return;
    }
    if (*(int *)(iVar3 + 0x8f8) == -2) {
      FUN_001fb290(8);
      iVar1 = *(int *)(iVar3 + 0x8f8);
    }
    else {
      FUN_001fb290(6);
      iVar1 = *(int *)(iVar3 + 0x8f8);
    }
    if (-1 < iVar1) {
      *(int *)(iVar3 + 0x8e0) = iVar1;
      return;
    }
    if (iVar1 == -1) {
      FUN_001fd070(*(undefined4 *)(iGpffff8d68 + 0x24));
      return;
    }
    return;
  }
  if (*(int *)(iVar3 + 0x8fc) == -2) {
    FUN_001fb290(8);
  }
  else {
    if (*(int *)(iVar3 + 0x8fc) == 4) {
      FUN_002a1be0(param_1);
      FUN_001fb290(0xc);
      iVar1 = *(int *)(iVar3 + 0x8fc);
      goto LAB_002a1b60;
    }
    FUN_001fb290(5);
  }
  iVar1 = *(int *)(iVar3 + 0x8fc);
LAB_002a1b60:
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      FUN_001fd070(*(undefined4 *)(iGpffff8d68 + 0x24));
    }
  }
  else {
    *(int *)(iVar3 + 0x8e0) = iVar1;
  }
  return;
}

// 0x002a1be0  size 0x154
void FUN_002a1be0(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 4) == 1) {
    iVar6 = *(int *)(param_1 + 0xc) + 1;
    uVar3 = *(undefined2 *)(*(int *)(param_1 + 8) * 2 + param_1 + 0x8c);
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        uVar4 = FUN_001c1890(0);
        FUN_001bb080(uVar4,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    iVar5 = *(int *)(param_1 + 0x28) * 4 + param_1;
    sVar2 = *(short *)(iVar5 + 0x30);
    uVar1 = *(undefined1 *)(iVar5 + 0x32);
    iVar5 = FUN_001c1890(0);
    uVar3 = *(undefined2 *)(iVar5 + *(int *)(param_1 + 0x20) * 2 + 0x13ee);
    iVar5 = FUN_001c1890(0);
    if (*(short *)(iVar5 + sVar2 * 2 + 0x1420) == 99) {
      uVar4 = FUN_001c1890(0);
      FUN_001bb080(uVar4,sVar2);
      uVar4 = FUN_001c1890(0);
      FUN_001bbb20(uVar4,uVar3,uVar1);
    }
    else {
      uVar4 = FUN_001c1890(0);
      FUN_001bbb20(uVar4,uVar3,uVar1);
      uVar4 = FUN_001c1890(0);
      FUN_001bb080(uVar4,sVar2);
    }
  }
  return;
}

// 0x002a1d40  size 0x104
void FUN_002a1d40(int param_1,int *param_2,int param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  *param_2 = 0;
  iVar3 = FUN_001c1890(0);
  uVar7 = 0;
  uVar1 = *(undefined2 *)(iVar3 + param_3 * 2 + 0x13ee);
  do {
    uVar5 = FUN_001c1890(0);
    uVar5 = FUN_001bc600(uVar5,uVar1);
    psVar4 = (short *)FUN_001d34f0(uVar5,uVar7 & 0xff);
    sVar2 = *psVar4;
    lVar6 = FUN_001f60a0(sVar2);
    if (((lVar6 == 0) && (sVar2 != -1)) && ((char)psVar4[1] == '\x1f')) {
      *(short *)(param_1 + *param_2 * 4) = sVar2;
      *(char *)(param_1 + *param_2 * 4 + 2) = (char)uVar7;
      *param_2 = *param_2 + 1;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x15);
  return;
}

// 0x002a1e50  size 0x158
void FUN_002a1e50(int param_1,long param_2,int *param_3)

{
  short sVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = 0;
  *param_3 = 0;
  do {
    if (iVar7 != 0x20) {
      sVar3 = FUN_002a17d0(iVar7);
      lVar6 = (long)sVar3;
      sVar3 = FUN_002a1690(iVar7);
      if ((lVar6 < 0x162) && ((long)sVar3 < 0x162)) {
        for (; lVar6 <= sVar3; lVar6 = (long)((int)lVar6 + 1)) {
          sVar5 = (short)lVar6;
          lVar2 = FUN_001f60a0(sVar5);
          if (lVar2 == 0) {
            iVar4 = FUN_001c1890(0);
            sVar1 = *(short *)(iVar4 + sVar5 * 2 + 0x1420);
            if (0 < sVar1) {
              *(short *)(param_1 + *param_3 * 2) = sVar5;
              if (param_2 != 0) {
                *(int *)((int)param_2 + *param_3 * 4) = (int)sVar1;
              }
              *param_3 = *param_3 + 1;
            }
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x22);
  return;
}

// 0x002a1fb0  size 0x80
void FUN_002a1fb0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[0x239];
  piVar2[0x239] = 0;
  if (iVar1 != 0) {
    *piVar2 = 0;
    piVar2[0x23e] = 5;
  }
  FUN_001f8640(param_1,0,2,1,1,0);
  if (*piVar2 == 0) {
    piVar2[0x23f] = 4;
  }
  else {
    piVar2[0x23f] = piVar2[0x23e];
  }
  return;
}

// 0x002a2030  size 0x320
void FUN_002a2030(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 4;
  }
  uVar1 = FUN_001c1890(0);
  lVar2 = FUN_001b89d0(uVar1);
  iVar3 = (int)lVar2;
  FUN_001f8640(param_1 + 0x20,0,8,iVar3 + -1,1,0);
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_001f8640(param_1 + 0x28,0,2,*(int *)(param_1 + 0x84) + -1,0,0);
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
    if (iVar4 != *(int *)(param_1 + 0x28)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      iVar4 = *(int *)(param_1 + 0x84) + -1;
      if (6 < iVar4) {
        iVar4 = 6;
      }
      if (iVar4 < *(int *)(param_1 + 0x1c)) {
        if (*(int *)(param_1 + 0x84) < 8) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
        else {
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 6;
        }
      }
    }
  }
  else if (uVar5 == 1) {
    if ((iVar4 != *(int *)(param_1 + 0x28)) &&
       (*(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1, *(int *)(param_1 + 0x1c) < 0)) {
      if (*(int *)(param_1 + 0x84) < 8) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x84) + -1;
      }
      else {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x14) = 1;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
  }
  else if (uVar5 == 8) {
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if (0xb < iVar3) {
      iVar3 = 0xb;
    }
    if (iVar3 < *(int *)(param_1 + 0x18)) {
      if (lVar2 < 0xd) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      else {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x14) = 2;
        *(undefined4 *)(param_1 + 0x18) = 0xb;
      }
    }
  }
  else {
    if (uVar5 != 4) {
      iVar4 = *(int *)(param_1 + 0x24);
      goto LAB_002a2278;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    if (*(int *)(param_1 + 0x18) < 0) {
      if (lVar2 < 0xd) {
        *(int *)(param_1 + 0x18) = iVar3 + -1;
      }
      else {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x14) = 3;
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x24);
LAB_002a2278:
  if (iVar4 == *(int *)(param_1 + 0x20)) {
    iVar4 = *(int *)(param_1 + 0x84);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_002a1d40(param_1 + 0x30,param_1 + 0x84,*(undefined4 *)(param_1 + 0x20));
    iVar4 = *(int *)(param_1 + 0x84);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x8fc) = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x8fc) = 6;
  }
  return;
}

// 0x002a23b0  size 0x9c
void FUN_002a23b0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[0x239];
  piVar2[0x239] = 0;
  if (iVar1 != 0) {
    *piVar2 = 0;
    if (piVar2[piVar2[2] + 0xd4] < 2) {
      piVar2[0x23e] = 1;
    }
    else {
      piVar2[0x23e] = 2;
    }
  }
  FUN_001f8640(param_1,0,2,1,1,0);
  if (*piVar2 == 0) {
    piVar2[0x23f] = 4;
  }
  else {
    piVar2[0x23f] = piVar2[0x23e];
  }
  return;
}

// 0x002a2450  size 0x68
void FUN_002a2450(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x8fc) = 3;
    *(undefined4 *)(param_1 + 0x8f8) = 1;
  }
  FUN_001f8640(param_1 + 0xc,0,2,*(int *)(*(int *)(param_1 + 8) * 4 + param_1 + 0x350) + -1,0,0);
  return;
}

// 0x002a24c0  size 0x208
void FUN_002a24c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x88);
  }
  else {
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_002a1e50(param_1 + 0x8c,param_1 + 0x350,param_1 + 0x88);
    iVar1 = *(int *)(param_1 + 0x88);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x8fc) = 0;
    return;
  }
  FUN_001f8640(param_1 + 8,0,2,iVar1 + -1,1,0);
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
  if (uVar2 == 4) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) =
         ((1 - *(int *)(param_1 + 0x88)) * -10 + iVar1) % *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x10) =
         ((1 - *(int *)(param_1 + 0x88)) * -10 + *(int *)(param_1 + 0x10)) %
         *(int *)(param_1 + 0x88);
    if (*(int *)(param_1 + 8) == iVar1) {
      FUN_001fb290(8);
    }
    else {
      FUN_001fb290(7);
    }
  }
  else {
    if (uVar2 != 8) {
      iVar1 = *(int *)(param_1 + 8);
      goto LAB_002a267c;
    }
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = (iVar1 + 10) % *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x10) = (*(int *)(param_1 + 0x10) + 10) % *(int *)(param_1 + 0x88);
    if (*(int *)(param_1 + 8) == iVar1) {
      FUN_001fb290();
    }
    else {
      FUN_001fb290(7);
    }
  }
  iVar1 = *(int *)(param_1 + 8);
LAB_002a267c:
  if (*(int *)(iVar1 * 4 + param_1 + 0x350) < 2) {
    *(undefined4 *)(param_1 + 0x8fc) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x8fc) = 2;
  }
  return;
}

// 0x002a26d0  size 0xe0
void FUN_002a26d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_001c1890(0);
    lVar4 = FUN_001b89d0(uVar3);
    *(undefined4 *)(param_1 + 0x8f8) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    uVar2 = FUN_002d3ba0(0);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (lVar4 < 0xd) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_001f8640(param_1 + 4,0,2,1,1,0);
  if (*(int *)(param_1 + 4) == 1) {
    *(undefined4 *)(param_1 + 0x8fc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x8fc) = 5;
  }
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1c000;
  return;
}

// 0x002a27c0  size 0x60
void FUN_002a27c0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_001fb170(iVar2 + 0x8d8);
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032ed10)[*(int *)(iVar2 + 0x8dc)])(param_1);
    FUN_002a1a70(param_1);
    FUN_001fb240(iVar2 + 0x8d8);
  }
  return;
}

// 0x002a2850  size 0x238
void FUN_002a2850(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
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
  if (uVar4 == 0x1000) {
    if (param_1[6] == 0) {
      FUN_001fb290(5);
      *(int *)(iGpffff8d68 + 0x2c) = *param_1;
      FUN_001fd070(0x23);
    }
  }
  else if (uVar4 == 0x10) {
    FUN_001fb290(5);
    if (param_1[0xe] == 3) {
      iVar2 = FUN_001c1890(0);
      uVar1 = *(undefined2 *)(iVar2 + *param_1 * 2 + 0x13ee);
      uVar3 = FUN_001c1890(0);
      FUN_001b9c10(uVar3,uVar1);
      param_1[2] = *param_1;
    }
    iVar2 = param_1[0xe];
    if (iVar2 < 0) {
      if (iVar2 == -2) {
        *(int *)(iGpffff8d68 + 0x2c) = *param_1;
        FUN_001fd070(0x25);
      }
      else if (iVar2 == -3) {
        *(int *)(iGpffff8d68 + 0x2c) = *param_1;
        FUN_001fd070(0x23);
      }
      else if (iVar2 == -1) {
        FUN_001fd070(0xb);
      }
    }
    else {
      param_1[7] = iVar2;
    }
  }
  else if (uVar4 == 0x20) {
    FUN_001fb290(6);
    iVar2 = param_1[0xd];
    if (iVar2 < 0) {
      if (iVar2 == -2) {
        *(int *)(iGpffff8d68 + 0x2c) = *param_1;
        FUN_001fd070(0x25);
      }
      else if (iVar2 == -3) {
        *(int *)(iGpffff8d68 + 0x2c) = *param_1;
        FUN_001fd070(0x23);
      }
      else if (iVar2 == -1) {
        FUN_001fd070(0xb);
      }
    }
    else {
      param_1[7] = iVar2;
    }
  }
  return;
}

// 0x002a2ac0  size 0x7c
void FUN_002a2ac0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_001f8640(param_1 + 4,0,2,1,1,0);
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}

// 0x002a2b40  size 0x88
void FUN_002a2b40(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1[8];
  param_1[8] = 0;
  if (iVar1 != 0) {
    param_1[0xd] = 0;
  }
  uVar2 = 0;
  if (*param_1 == param_1[2]) {
    uVar2 = 2;
  }
  FUN_001f8640(param_1 + 1,0,2,1,1,uVar2);
  if (param_1[1] == 0) {
    param_1[0xe] = 2;
  }
  else {
    param_1[0xe] = -2;
  }
  return;
}

// 0x002a2bd0  size 0xe8
void FUN_002a2bd0(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  iVar2 = piVar5[8];
  piVar5[8] = 0;
  if (iVar2 != 0) {
    piVar5[0xe] = 1;
    piVar5[0xd] = -1;
    piVar5[1] = 0;
    piVar5[3] = 0;
  }
  uVar3 = FUN_001c1890(0);
  iVar2 = FUN_001b89d0(uVar3);
  lVar4 = FUN_001f8640(param_1,0,8,iVar2 + -1,1,0);
  if (lVar4 == 1) {
    FUN_001f8ae0(iGpffff8d68 + 0x654);
    iVar2 = FUN_001c1890(0);
    sVar1 = *(short *)(iVar2 + *piVar5 * 2 + 0x13ee);
    *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
    *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
  }
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001b89d0(uVar3);
  FUN_001f8300(piVar5 + 3,piVar5 + 4,uVar3,0xc,0,8);
  return;
}

// 0x002a2cf0  size 0x60
void FUN_002a2cf0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_001fb170(iVar2 + 0x14);
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032ed30)[*(int *)(iVar2 + 0x18)])(param_1);
    FUN_002a2850(param_1);
    FUN_001fb240(iVar2 + 0x14);
  }
  return;
}

// 0x002a2d50  size 0x230
void FUN_002a2d50(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  FUN_002d3990(param_1 + 2,8,0);
  *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  switch(*(undefined4 *)(iGpffff8d68 + 0x34)) {
  case 1:
    *(undefined4 *)(iGpffff8d68 + 0x598) = 0;
    break;
  case 2:
    *(undefined4 *)(iGpffff8d68 + 0x5dc) = 0;
    break;
  case 3:
    *(undefined4 *)(iGpffff8d68 + 0x5fc) = 0;
    break;
  case 4:
    *(undefined4 *)(iGpffff8d68 + 0x618) = 0;
  }
  iVar3 = 0;
  *(undefined4 *)(iGpffff8d68 + 0x544) = 0xfffffffe;
  *(undefined4 *)(iGpffff8d68 + 0x594) = 0;
  iVar2 = iGpffff8d68 + 0x534;
  do {
    *(undefined2 *)(iVar2 + 0x14) = 0x162;
    iVar3 = iVar3 + 7;
    *(undefined2 *)(iVar2 + 0x16) = 0x162;
    *(undefined2 *)(iVar2 + 0x18) = 0x162;
    *(undefined2 *)(iVar2 + 0x1a) = 0x162;
    *(undefined2 *)(iVar2 + 0x1c) = 0x162;
    *(undefined2 *)(iVar2 + 0x1e) = 0x162;
    *(undefined2 *)(iVar2 + 0x20) = 0x162;
    iVar2 = iVar2 + 0xe;
  } while (iVar3 < 0x15);
  FUN_001f8cd0(iGpffff8d68 + 0x654,0x116,3);
  iVar2 = *(int *)(iGpffff8d68 + 0x24);
  if (iVar2 == 0x25) {
    *param_1 = *(int *)(iGpffff8d68 + 0x2c);
    param_1[5] = -1;
    param_1[6] = 1;
    param_1[7] = 1;
    param_1[9] = 1;
    param_1[0xc] = 0;
    param_1[10] = 1;
    param_1[8] = 1;
    param_1[0xb] = 0;
    param_1[1] = 1;
  }
  else if (iVar2 == 0x23) {
    if (*param_1 != *(int *)(iGpffff8d68 + 0x2c)) {
      *param_1 = *(int *)(iGpffff8d68 + 0x2c);
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    }
    param_1[5] = -1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 1;
    param_1[0xc] = 0;
    param_1[10] = 1;
    param_1[8] = 1;
    param_1[0xb] = 0;
  }
  else {
    if (iVar2 != 0xb) {
      iVar2 = *param_1;
      goto LAB_002a2f1c;
    }
    *param_1 = param_1[2];
    param_1[5] = -1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 1;
    param_1[0xc] = 0;
    param_1[10] = 1;
    param_1[8] = 1;
    param_1[0xb] = 0;
  }
  iVar2 = *param_1;
LAB_002a2f1c:
  if (iVar2 < 0xc) {
    param_1[4] = iVar2;
  }
  else {
    param_1[4] = 0;
  }
  iVar2 = FUN_001c1890(0);
  sVar1 = *(short *)(iVar2 + *param_1 * 2 + 0x13ee);
  *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
  *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
  return;
}

// 0x002a2f80  size 0x128
void FUN_002a2f80(int param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if ((uGpffff9080 & 2) != 0) {
    iVar4 = 0;
    iVar3 = param_1;
    do {
      lVar2 = FUN_002055e0(iVar4);
      if (((((lVar2 != 2) && (iVar4 != 0xf7)) && (iVar4 != 0xf8)) &&
          ((iVar4 != 0xff && (iVar4 != 0x100)))) &&
         ((iVar4 != 0x101 && ((iVar4 != 0xf9 && (iVar4 != 0xfa)))))) {
        *(undefined4 *)(iVar3 + 0x2d4) = 1;
        uVar1 = FUN_001f7ee0(iVar4,0xffffffffffffffff);
        *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) | (long)(1 << (uVar1 & 0x1f));
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x120);
  }
  if ((uGpffff9080 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x754) = 7;
    *(long *)(param_1 + 0x60) = (long)((1 << (*(uint *)(param_1 + 0x754) & 0x1f)) + -1);
  }
  return;
}

// 0x002a30b0  size 0x11c
ulong FUN_002a30b0(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = Pad_GetPort(0,0);
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar2 = 0;
  if (iVar1 == 0) {
    iGpffff908c = iGpffff908c + 1;
    if (300 < iGpffff908c) {
      iGpffff908c = 0;
      iGpffff9084 = 0;
      iGpffff9088 = 0;
    }
  }
  else {
    if ((uGpffff9080 & 1) == 0) {
      if (iVar1 == *(int *)(&LAB_0032ed90 + iGpffff9084 * 4)) {
        iGpffff9084 = iGpffff9084 + 1;
        if (iGpffff9084 == 10) {
          iGpffff9084 = 0;
          uVar2 = 1;
          FUN_002062d0(4,0x60);
        }
      }
      else {
        iGpffff9084 = 0;
      }
    }
    if ((uGpffff9080 & 2) == 0) {
      if (iVar1 == *(int *)(&LAB_0032edc0 + iGpffff9088 * 4)) {
        iGpffff9088 = iGpffff9088 + 1;
        if (iGpffff9088 == 10) {
          iGpffff9088 = 0;
          uVar2 = uVar2 | 2;
          FUN_002062d0(4,0x60);
        }
      }
      else {
        iGpffff9088 = 0;
      }
    }
    iGpffff908c = 0;
  }
  return uVar2;
}

// 0x002a31d0  size 0x8
undefined4 FUN_002a31d0(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 5;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 7;
    break;
  case 7:
    uVar1 = 6;
    break;
  case 0xffffffff:
    uVar1 = 8;
    break;
  default:
    uVar1 = 1;
  }
  return uVar1;
}

// 0x002a31e0  size 0x8
undefined4 FUN_002a31e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 5;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 7;
    break;
  case 7:
    uVar1 = 6;
    break;
  case 0xffffffff:
    uVar1 = 8;
    break;
  default:
    uVar1 = 1;
  }
  return uVar1;
}

// 0x002a31f0  size 0x10
undefined1 FUN_002a31f0(undefined8 param_1,int param_2)

{
  return *(undefined1 *)((int)register0x000001c0 + param_2 + -0x78c4);
}

// 0x002a3200  size 0x458
void FUN_002a3200(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x884) == 3) {
    FUN_0020edb0(5,0xffff);
    iVar4 = *(int *)(param_1 + 0x884);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x884);
  }
  if (iVar4 == 8) {
    FUN_001f8ca0(iGpffff8d68 + 0x654);
  }
  if (param_2 < 0) {
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    if (param_2 == -2) {
      FUN_001fd070(0x16);
      uGpffff8738 = *(undefined4 *)(param_1 + 8);
    }
    else {
      if (param_2 == -3) {
        FUN_001fd070(0x19);
      }
      else {
        if (*(int *)(param_1 + 0x24) == 1) {
          iVar4 = FUN_001c1890(0);
          uVar2 = *(undefined2 *)(iVar4 + *(int *)(param_1 + 0x90) * 2 + 0x13ee);
          uVar6 = FUN_001c1890(0);
          FUN_001bc3b0(&uStack_1a0,uVar6,uVar2);
          puVar10 = auStack_18c;
          puVar8 = auStack_bc;
          iVar4 = 0x17;
          uStack_d0 = uStack_1a0;
          uStack_c0 = uStack_190;
          uStack_ce = uStack_19e;
          uStack_cc = uStack_19c;
          uStack_c8 = uStack_198;
          uStack_c4 = uStack_194;
          do {
            iVar4 = iVar4 + -1;
            *puVar8 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + 1;
          } while (0 < iVar4);
          puVar12 = auStack_150;
          puVar11 = auStack_80;
          iVar4 = 8;
          uStack_98 = uStack_168;
          uStack_94 = uStack_164;
          uStack_90 = uStack_160;
          uStack_a4 = uStack_174;
          uStack_a0 = uStack_170;
          uStack_9c = uStack_16c;
          uStack_8c = uStack_15c;
          uStack_88 = uStack_158;
          uStack_84 = uStack_154;
          do {
            iVar4 = iVar4 + -1;
            uVar2 = puVar12[1];
            *puVar11 = *puVar12;
            puVar11[1] = uVar2;
            puVar12 = puVar12 + 2;
            puVar11 = puVar11 + 2;
          } while (0 < iVar4);
          puVar12 = auStack_130;
          puVar11 = auStack_60;
          iVar4 = 0x15;
          do {
            iVar4 = iVar4 + -1;
            uVar2 = puVar12[1];
            *puVar11 = *puVar12;
            puVar11[1] = uVar2;
            puVar12 = puVar12 + 2;
            puVar11 = puVar11 + 2;
          } while (0 < iVar4);
          uStack_c = uStack_dc;
          uStack_8 = uStack_d8;
        }
        else {
          FUN_001d3510(&uStack_d0);
          FUN_001d3020(&uStack_d0,*(undefined2 *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x34),
                       *(int *)(param_1 + 0x38) == 0,0);
        }
        if (*(int *)(param_1 + 8) == 0) {
          RaceCtx_SetMode(2);
          iVar4 = *(int *)(param_1 + 0x28);
        }
        else {
          if (*(int *)(param_1 + 8) == 1) {
            RaceCtx_SetMode(3);
          }
          iVar4 = *(int *)(param_1 + 0x28);
        }
        uGpffff8afc = (uint)(iVar4 != 2);
        iVar4 = *(int *)(param_1 + 0x38);
        uVar6 = 0xb;
        if (*(int *)(param_1 + 8) != 0) {
          uVar6 = 0xc;
        }
        uVar5 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x10));
        bVar1 = *(int *)(param_1 + 0x24) != 1;
        if (bVar1) {
          iVar9 = *(int *)(param_1 + 0x1c);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x1c);
        }
        cVar7 = *(char *)((int)register0x000001c0 + iVar9 + -0x78c0);
        if (*(int *)(param_1 + 0x10) - 5U < 2) {
          if (cVar7 == '\x01') {
            cVar7 = '\x02';
          }
          else if (cVar7 == '\x04') {
            cVar7 = '\x05';
          }
        }
        RaceSetup_FromQuickRace
                  (uVar6,iVar4 == 0,uVar5,cVar7,
                   *(undefined1 *)((int)register0x000001c0 + *(int *)(param_1 + 0x20) + -0x78bc),
                   *(undefined1 *)((int)register0x000001c0 + *(int *)(param_1 + 0x18) + -0x78c4),
                   &uStack_d0,!bVar1);
        FUN_001fd070(0xfffffffffffffffe);
      }
      uGpffff8738 = *(undefined4 *)(param_1 + 8);
    }
  }
  else if ((param_2 == 6) && (*(int *)(param_1 + 0x28) == 0)) {
    iVar4 = FUN_001fd380(0x17);
    uVar3 = 4;
    *(undefined1 *)(iVar4 + 0x778) = 1;
    if (*(int *)(param_1 + 8) != 0) {
      uVar3 = 5;
    }
    *(undefined1 *)(iVar4 + 0x779) = uVar3;
    *(undefined4 *)(iVar4 + 0x77c) = 1;
    uVar3 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x10));
    *(undefined1 *)(iVar4 + 0x780) = uVar3;
    *(undefined1 *)(iVar4 + 0x781) =
         *(undefined1 *)((int)register0x000001c0 + *(int *)(param_1 + 0x18) + -0x78c4);
    cVar7 = *(char *)((int)register0x000001c0 + *(int *)(param_1 + 0x1c) + -0x78c0);
    if (*(int *)(param_1 + 0x10) - 5U < 2) {
      if (cVar7 == '\x01') {
        cVar7 = '\x02';
      }
      else if (cVar7 == '\x04') {
        cVar7 = '\x05';
      }
    }
    *(char *)(iVar4 + 0x782) = cVar7;
    *(undefined1 *)(iVar4 + 0x783) =
         *(undefined1 *)((int)register0x000001c0 + *(int *)(param_1 + 0x20) + -0x78bc);
    FUN_001fd070(0x17);
  }
  else {
    if (((param_2 == 7) && (*(int *)(param_1 + 0x884) == 8)) ||
       ((param_2 == 8 && (*(int *)(param_1 + 0x884) == 7)))) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 1;
    }
    *(int *)(param_1 + 0x888) = param_2;
  }
  return;
}

// 0x002a3660  size 0x7a4
void FUN_002a3660(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_490 [576];
  undefined1 auStack_250 [576];
  uint auStack_10 [4];
  
  iVar2 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar2 != 0) {
    param_1[1] = 2;
    *param_1 = 2;
    param_1[0x15] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if (param_1[0x15] == 0) {
    iVar7 = param_1[0x14];
    iVar3 = param_1[0x10];
    lVar8 = FUN_001f8640(param_1 + 0x14,0,2,9,0,0);
    lVar9 = FUN_001f8640(param_1 + 0x10,0,8,7,1,param_1[0x18]);
    FUN_001f48c0(0x10e);
    uVar14 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar14) == 0) {
      uVar14 = 0x100000;
    }
    else if (uVar14 == 0x80000) {
      uVar14 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar14 = 0x100000;
    }
    if (uVar14 == 0x1000) {
      FUN_001fb290(7);
      param_1[0x11] = param_1[0x11] != 0 ^ 1;
    }
    uVar15 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar15) == 0) {
      uVar15 = 0x100000;
    }
    else if (uVar15 == 0x80000) {
      uVar15 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar15 = 0x100000;
    }
    if (uVar15 == 0x2000) {
      FUN_001fb290(7);
      param_1[0x12] = param_1[0x12] != 0 ^ 1;
    }
    iVar4 = param_1[0x14];
    if ((3 < iVar4 - param_1[0x13]) || (iVar4 < (int)param_1[0x13])) {
      if (iVar7 < iVar4) {
        param_1[0x13] = param_1[0x13] + 1;
        param_1[0x15] = 1;
        uVar6 = FUN_001f4890(0x38d);
        iVar7 = FUN_001f48c0(0x10e);
        iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
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
      }
      else if (iVar4 < iVar7) {
        param_1[0x13] = param_1[0x13] + -1;
        param_1[0x15] = 2;
        uVar6 = FUN_001f4890(0x388);
        iVar7 = FUN_001f48c0(0x10e);
        iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
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
      }
    }
    iVar7 = param_1[0x10];
    if (iVar3 != iVar7) {
      bVar5 = iVar3 < iVar7;
      lVar10 = abs(iVar3 - iVar7);
      if (lVar10 != 1) {
        bVar5 = !bVar5;
      }
      if (bVar5) {
        param_1[0x15] = 4;
        uVar6 = FUN_001f4890(0x38a);
        iVar7 = FUN_001f48c0(0x10e);
        iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
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
      }
      else {
        param_1[0x15] = 5;
        uVar6 = FUN_001f4890(0x38c);
        iVar7 = FUN_001f48c0(0x10e);
        iVar7 = *piGpffff8d3c + iVar7 * 0x4f4;
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
      }
    }
    if (uVar15 == 0x2000 || (uVar14 == 0x1000 || (lVar9 != 0 || (lVar8 != 0 || iVar2 != 0)))) {
      uVar11 = RaceTbl_Ptr_5fa0();
      uVar12 = maybe_RaceTbl_GetCount();
      uVar13 = FUN_001f6a70(param_1[0x10]);
      uVar1 = *(undefined1 *)((int)register0x000001c0 + param_1[0x11] + -0x78c4);
      if (param_1[2] == 0) {
        if (param_1[0x12] == 0) {
          uVar11 = RaceTbl_GetCourseEntryB(uVar11,0,uVar1,uVar13);
          FUN_002a57e0(param_1 + 0x1ff,uVar11);
          FUN_002a5080(param_1 + 0x1fb,param_1 + param_1[0x14] + 0x1ff,uVar13,uVar1,0);
          *(undefined1 *)((int)param_1 + 0x7f9) = 0;
          return;
        }
        uVar11 = RaceTbl_GetCourseEntryB(uVar11,1,uVar1,uVar13);
        FUN_002a57e0(param_1 + 0x1ff,uVar11);
        FUN_002a5080(param_1 + 0x1fb,param_1 + param_1[0x14] + 0x1ff,uVar13,uVar1,1);
      }
      else if (param_1[0x12] == 0) {
        uVar11 = RaceTbl_GetCourseEntry(uVar12,0,uVar1,uVar13);
        FUN_002a5790(param_1 + 0x209,uVar11);
        iVar2 = param_1[0x14];
        auStack_10[3] = 0;
        if (*(int *)param_1[iVar2 + 0x209] < 0) {
          iVar2 = 0;
          do {
            iVar7 = iVar2;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ec) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ed) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ee) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ef) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7f0) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7f1) = 0x2d;
            iVar2 = iVar7 + 6;
          } while (iVar7 + 6 < 7);
          *(undefined1 *)((int)param_1 + iVar7 + 0x7f2) = 0x2d;
        }
        else {
          auStack_10[2] = 1;
          FUN_002a51b0(auStack_10 + 2,param_1[iVar2 + 0x209],uVar13,uVar1,0);
          auStack_10[2] =
               auStack_10[2] & 0xf000001f |
               (*(uint *)(param_1[iVar2 + 0x209] + 0x10) & 0x7fffff) << 5;
          FUN_002dddc0(auStack_250,auStack_10 + 2,param_1 + 0x1fb);
        }
      }
      else {
        uVar11 = RaceTbl_GetCourseEntry(uVar12,1,uVar1,uVar13);
        FUN_002a5790(param_1 + 0x209,uVar11);
        iVar2 = param_1[0x14];
        auStack_10[1] = 0;
        if (*(int *)param_1[iVar2 + 0x209] < 0) {
          iVar2 = 0;
          do {
            iVar7 = iVar2;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ec) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ed) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ee) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ef) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7f0) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7f1) = 0x2d;
            iVar2 = iVar7 + 6;
          } while (iVar7 + 6 < 7);
          *(undefined1 *)((int)param_1 + iVar7 + 0x7f2) = 0x2d;
        }
        else {
          auStack_10[0] = 1;
          FUN_002a51b0(auStack_10,param_1[iVar2 + 0x209],uVar13,uVar1,1);
          auStack_10[0] =
               auStack_10[0] & 0xf000001f |
               (*(uint *)(param_1[iVar2 + 0x209] + 0x10) & 0x7fffff) << 5;
          FUN_002dddc0(auStack_490,auStack_10,param_1 + 0x1fb);
        }
      }
      *(undefined1 *)((int)param_1 + 0x7f9) = 0;
    }
  }
  return;
}

// 0x002a3e10  size 0xa8
void FUN_002a3e10(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar1 != 0) {
    param_1[1] = 0xffffffff;
    if ((param_1[9] == 1) || (lVar2 = FUN_00202300(param_1[0xc]), lVar2 == 0)) {
      *param_1 = 8;
    }
    else {
      *param_1 = 9;
    }
    lVar2 = Hud_Get_14();
    param_1[0xe] = (uint)(lVar2 == 0);
  }
  FUN_001f8640(param_1 + 0xe,0,2,1,1,0);
  return;
}

// 0x002a3ec0  size 0xb0
void FUN_002a3ec0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if ((iVar1 != 0) && (param_1[1] = 10, param_1[0x220] == 8)) {
    uVar2 = FUN_00204b50(param_1[0xc]);
    param_1[0x1d7] = uVar2;
    param_1[0x1d8] = 0;
    param_1[0xd] = 0;
  }
  if (param_1[9] == 1) {
    *param_1 = 6;
  }
  else {
    *param_1 = 8;
  }
  FUN_001f8640(param_1 + 0xd,0,8,param_1[0x1d7] + -1,1,0);
  *(undefined4 *)(iGpffff8d68 + 0x544) = param_1[0xd];
  return;
}

// 0x002a3f70  size 0x270
void FUN_002a3f70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iStack_4;
  
  iVar2 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar2 != 0) {
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x120,4);
    if (param_1[0x220] - 6 < 2) {
      param_1[0x24] = 0;
      param_1[0x23] = 0;
      if (param_1[9] == 1) {
        uVar4 = FUN_001c1890(0);
        uVar1 = FUN_001b89d0(uVar4);
        param_1[0x22] = uVar1;
      }
      else {
        iStack_4 = 0;
        param_1[0x22] = 0;
        FUN_00202330(&iStack_4,1,param_1[0xb],param_1 + 0xb5);
        iVar2 = iStack_4;
        do {
          *(short *)((int)param_1 + param_1[0x22] * 2 + 0x94) = (short)iStack_4;
          param_1[0x22] = param_1[0x22] + 1;
          FUN_00202330(&iStack_4,1,param_1[0xb],param_1 + 0xb5);
        } while (iVar2 != iStack_4);
      }
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
      iVar2 = param_1[0x220];
    }
    else {
      iVar2 = param_1[0x220];
    }
    if (iVar2 == 9) {
      uVar1 = FUN_00204b50(param_1[0xc]);
      param_1[0x1d7] = uVar1;
      param_1[0x1d8] = 0;
      param_1[0xd] = 0;
      *(undefined4 *)(iGpffff8d68 + 0x544) = param_1[0xd];
    }
  }
  if (param_1[9] == 1) {
    *param_1 = 6;
    param_1[1] = 10;
  }
  else {
    *param_1 = 7;
    param_1[1] = 9;
  }
  lVar3 = FUN_001f8640(param_1 + 0x24,0,8,param_1[0x22] + -1,1,0);
  if (lVar3 == 0) {
    iVar2 = param_1[9];
  }
  else {
    FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    iVar2 = param_1[9];
  }
  if (iVar2 == 1) {
    FUN_001f8300(param_1 + 0x1d9,param_1 + 0x23,param_1[0x22],0xc,0,8);
    iVar2 = param_1[9];
  }
  else {
    FUN_001f8300(param_1 + 0x1d9,param_1 + 0x23,param_1[0x22],0xc,0,8);
    lVar3 = FUN_00202300(param_1[0xc]);
    if (lVar3 == 0) {
      param_1[1] = 10;
    }
    iVar2 = param_1[9];
  }
  if (iVar2 == 1) {
    iVar2 = FUN_001c1890(0);
    param_1[0xc] = (int)*(short *)(iVar2 + param_1[0x24] * 2 + 0x13ee);
    uVar1 = param_1[0xc];
    *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
    *(undefined4 *)(iGpffff8d68 + 0x53c) = uVar1;
  }
  else {
    param_1[0xc] = (int)*(short *)((int)param_1 + param_1[0x24] * 2 + 0x94);
    uVar1 = param_1[0xc];
    *(undefined4 *)(iGpffff8d68 + 0x538) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x53c) = uVar1;
  }
  return;
}

