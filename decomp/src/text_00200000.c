// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00200000 - 0x00204000
#include "ghidra_types.h"

// 0x002008b0  size 0x154
void FUN_002008b0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (uint)((*(uint *)(iGpffff8d68 + 0x28) & 0x80000) == 0) * 0x18;
  iVar1 = FUN_001f48c0(*(undefined4 *)(iVar2 + iGpffff8d88 + 0x30));
  iVar1 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  if (param_1 == 0) {
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + iGpffff8d88 + 0x34)) {
      iVar3 = 0;
      do {
        FUN_001eeb00(0,iVar1,*(undefined4 *)(iVar2 + iGpffff8d88 + iVar3 + 0x20),8);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(iVar2 + iGpffff8d88 + 0x34));
    }
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + iGpffff8d88 + 0x34)) {
      iVar3 = 0;
      do {
        FUN_001eeb00(0x3f800000,iVar1,*(undefined4 *)(iVar2 + iGpffff8d88 + iVar3 + 0x20),8);
        FUN_001ecd80(iVar1,0x13 - iVar4);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(iVar2 + iGpffff8d88 + 0x34));
    }
  }
  return;
}

// 0x00200a10  size 0x35c
void FUN_00200a10(undefined8 param_1,undefined4 *param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  bVar1 = (*(uint *)(iGpffff8d68 + 0x28) & 0x80000) == 0;
  uGpffff8d8c = (uint)bVar1;
  iVar2 = (uint)bVar1 * 0x18;
  *(int *)(iVar2 + iGpffff8d88 + 0x34) = (int)param_3;
  *(int *)(iVar2 + iGpffff8d88 + 0x30) = (int)param_1;
  if (param_4 == -1) {
    *(undefined4 *)(iVar2 + iGpffff8d88 + 0x20) = *param_2;
    *(undefined4 *)(iVar2 + iGpffff8d88 + 0x24) = param_2[1];
    *(undefined4 *)(iVar2 + iGpffff8d88 + 0x28) = param_2[2];
    *(undefined4 *)(iVar2 + iGpffff8d88 + 0x2c) = param_2[3];
    iVar3 = FUN_001f48c0(param_1);
    iVar2 = *piGpffff8d3c;
    uVar4 = FUN_001f4890(0x68);
    FUN_001ed2c0(iVar2 + iVar3 * 0x4f4 + 4,0x13,*param_2,uVar4,1);
    iVar3 = FUN_001f48c0(param_1);
    iVar2 = *piGpffff8d3c;
    uVar4 = FUN_001f4890(0x6a);
    FUN_001ed2c0(iVar2 + iVar3 * 0x4f4 + 4,0x12,param_2[1],uVar4,1);
    iVar3 = FUN_001f48c0(param_1);
    iVar2 = *piGpffff8d3c;
    uVar4 = FUN_001f4890(0x6b);
    FUN_001ed2c0(iVar2 + iVar3 * 0x4f4 + 4,0x11,param_2[2],uVar4,1);
    iVar3 = FUN_001f48c0(param_1);
    iVar2 = *piGpffff8d3c;
    uVar4 = FUN_001f4890(0x69);
    FUN_001ed2c0(iVar2 + iVar3 * 0x4f4 + 4,0x10,param_2[3],uVar4,1);
  }
  else {
    *(undefined4 *)(iVar2 + iGpffff8d88 + 0x20) = *param_2;
    if (param_4 == 0) {
      iVar3 = FUN_001f48c0(param_1);
      iVar2 = *piGpffff8d3c;
      uVar4 = FUN_001f4890(0x68);
      FUN_001ed2c0(iVar2 + iVar3 * 0x4f4 + 4,0x13,*param_2,uVar4,1);
      if (1 < param_3) {
        *(undefined4 *)(uGpffff8d8c * 0x18 + iGpffff8d88 + 0x24) = param_2[1];
        iVar3 = FUN_001f48c0(param_1);
        iVar2 = *piGpffff8d3c;
        uVar4 = FUN_001f4890(0x6a);
        FUN_001ed2c0(iVar2 + iVar3 * 0x4f4 + 4,0x12,param_2[1],uVar4,1);
      }
    }
    else {
      iVar3 = FUN_001f48c0(param_1);
      iVar2 = *piGpffff8d3c;
      uVar4 = FUN_001f4890(0x6b);
      FUN_001ed2c0(iVar2 + iVar3 * 0x4f4 + 4,0x13,*param_2,uVar4,1);
      if (1 < param_3) {
        *(undefined4 *)(uGpffff8d8c * 0x18 + iGpffff8d88 + 0x24) = param_2[1];
        iVar3 = FUN_001f48c0(param_1);
        iVar2 = *piGpffff8d3c;
        uVar4 = FUN_001f4890(0x69);
        FUN_001ed2c0(iVar2 + iVar3 * 0x4f4 + 4,0x12,param_2[1],uVar4,1);
      }
    }
  }
  return;
}

// 0x00200d70  size 0x174
void FUN_00200d70(int param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_4 == 0) {
    uVar5 = 0x16;
    iVar4 = 0x17;
  }
  else {
    uVar5 = 0x14;
    iVar4 = 0x15;
  }
  iVar1 = FUN_001f48c0(param_1);
  iVar3 = (int)param_4 * 4;
  piVar2 = (int *)(iVar3 + iGpffff8d88);
  iVar1 = *piGpffff8d3c + iVar1 * 0x4f4 + 4;
  if (piVar2[2] == param_1) {
    if (param_2 != *piVar2) {
      FUN_001fe850(0,iVar1,param_2,param_3,param_4);
      FUN_001fe850(1,iVar1,*(undefined4 *)(iGpffff8d88 + iVar3),1,0);
      *(int *)(iGpffff8d88 + iVar3) = param_2;
    }
  }
  else {
    piVar2[2] = param_1;
    *(int *)(iGpffff8d88 + iVar3) = param_2;
    FUN_001fe850(0,iVar1,param_2,param_3,param_4);
  }
  if (*(int *)(iVar4 * 0x14 + iVar1 + 0x318) == 1) {
    FUN_001ecd80(iVar1,iVar4);
  }
  else {
    FUN_001ecd80(iVar1,uVar5);
  }
  return;
}

// 0x00200ef0  size 0xc4
void FUN_00200ef0(int param_1)

{
  int iVar1;
  long lVar2;
  
  param_1 = param_1 * 4;
  if (((-1 < ((int *)(param_1 + iGpffff8d88))[2]) && (-1 < *(int *)(param_1 + iGpffff8d88))) &&
     (lVar2 = FUN_001f48c0(), lVar2 != -1)) {
    iVar1 = FUN_001f48c0(*(undefined4 *)(param_1 + iGpffff8d88 + 8));
    FUN_001fe850(1,*piGpffff8d3c + iVar1 * 0x4f4 + 4,*(undefined4 *)(iGpffff8d88 + param_1),1,0);
  }
  *(undefined4 *)(param_1 + iGpffff8d88 + 8) = 0xffffffff;
  *(undefined4 *)(iGpffff8d88 + param_1) = 0xffffffff;
  return;
}

// 0x00200fc0  size 0x24
void FUN_00200fc0(int param_1)

{
  *(undefined4 *)(param_1 * 4 + iGpffff8d88 + 8) = 0xffffffff;
  *(undefined4 *)(iGpffff8d88 + param_1 * 4) = 0xffffffff;
  return;
}

// 0x00200ff0  size 0xac
/* WARNING: Removing unreachable block (ram,0x00201058) */

void FUN_00200ff0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_a0 [20];
  undefined4 uStack_8c;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  iVar1 = FUN_001f48c0();
  FUN_001ede20(*piGpffff8d3c + iVar1 * 0x4f4 + 4,auStack_a0,param_2);
  uStack_8c = param_3;
  FUN_001f1390(auStack_a0,param_4,&uStack_20);
  return;
}

// 0x002010a0  size 0xa0
/* WARNING: Removing unreachable block (ram,0x00201104) */

void FUN_002010a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_a0 [120];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  iVar1 = FUN_001f48c0();
  FUN_001ede20(*piGpffff8d3c + iVar1 * 0x4f4 + 4,auStack_a0,param_2);
  FUN_001f1390(auStack_a0,param_3,&uStack_28);
  return;
}

// 0x00201140  size 0x70
void FUN_00201140(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  iVar1 = FUN_001f48c0();
  FUN_001ede20(*piGpffff8d3c + iVar1 * 0x4f4 + 4,auStack_40,param_2);
  uStack_2c = param_3;
  FUN_001f1350(auStack_40,param_4);
  return;
}

// 0x002011b0  size 0x60
void FUN_002011b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_40 [64];
  
  iVar1 = FUN_001f48c0();
  FUN_001ede20(*piGpffff8d3c + iVar1 * 0x4f4 + 4,auStack_40,param_2);
  FUN_001f1350(auStack_40,param_3);
  return;
}

// 0x00201210  size 0x48
bool FUN_00201210(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_2 * 0x14 + param_1 + 0x318) == 1;
  if (bVar1) {
    FUN_001ecd80();
  }
  return bVar1;
}

// 0x00201260  size 0x98
bool FUN_00201260(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_001f48c0();
  bVar1 = *(int *)((int)param_2 * 0x14 + *piGpffff8d3c + iVar2 * 0x4f4 + 0x31c) == 1;
  if (bVar1) {
    iVar2 = FUN_001f48c0(param_1);
    FUN_001ecd80(*piGpffff8d3c + iVar2 * 0x4f4 + 4,param_2);
  }
  return bVar1;
}

// 0x00201300  size 0x2c
void FUN_00201300(void)

{
  if (iGpffff8d88 != 0) {
    Mem_Free();
  }
  iGpffff8d88 = 0;
  return;
}

// 0x00201330  size 0x44
void FUN_00201330(undefined8 param_1)

{
  puGpffff8d88 = (undefined4 *)Mem_Alloc16(0x50,param_1);
  *puGpffff8d88 = 0xffffffff;
  puGpffff8d88[2] = 0xffffffff;
  puGpffff8d88[1] = 0xffffffff;
  puGpffff8d88[3] = 0xffffffff;
  return;
}

// 0x00201380  size 0x8f8
void FUN_00201380(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  uVar4 = *(uint *)(iGpffff8d68 + 0x28);
  if ((uVar4 & 0x20000) == 0) {
    if (((uVar4 & 0x80000) == 0) && ((uVar4 & 0x100000) != 0)) {
      if (*(int *)(param_1 + 8) == 1) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      iVar5 = FUN_001f48c0(10);
      bVar1 = *(int *)(*piGpffff8d3c + iVar5 * 0x4f4 + 0x330) != 1;
      if (!bVar1) {
        iVar5 = FUN_001f48c0(10);
        FUN_001ecd80(*piGpffff8d3c + iVar5 * 0x4f4 + 4,1);
      }
      iVar5 = FUN_001f48c0(9);
      bVar2 = *(int *)(*piGpffff8d3c + iVar5 * 0x4f4 + 0x330) != 1;
      if (!bVar2) {
        iVar5 = FUN_001f48c0(9);
        FUN_001ecd80(*piGpffff8d3c + iVar5 * 0x4f4 + 4,1);
      }
      iVar5 = FUN_001f48c0(8);
      bVar3 = *(int *)(*piGpffff8d3c + iVar5 * 0x4f4 + 0x330) != 1;
      if (!bVar3) {
        iVar5 = FUN_001f48c0(8);
        FUN_001ecd80(*piGpffff8d3c + iVar5 * 0x4f4 + 4,1);
      }
      if (bVar1 && (bVar2 && bVar3)) {
        *(undefined4 *)(param_1 + 8) = 1;
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x200000;
        iVar5 = FUN_001f48c0(8);
        FUN_001eea30(*piGpffff8d3c + iVar5 * 0x4f4 + 4,10,10,0x13);
        iVar5 = FUN_001f48c0(8);
        FUN_001eea30(*piGpffff8d3c + iVar5 * 0x4f4 + 4,0xb,10,0x13);
        iVar5 = FUN_001f48c0(8);
        FUN_001eea30(*piGpffff8d3c + iVar5 * 0x4f4 + 4,0xc,10,0x13);
      }
      iVar5 = FUN_001f48c0(8);
      FUN_001ecd80(*piGpffff8d3c + iVar5 * 0x4f4 + 4,2);
      iVar5 = FUN_001f48c0(8);
      FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
      iVar5 = FUN_001f48c0(9);
      FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
      iVar5 = FUN_001f48c0(10);
      FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
      uVar6 = FUN_001c1890(0);
      uVar6 = FUN_001bcb00(uVar6);
      FUN_001fe620(10,1,uVar6);
      if ((*(uint *)(iGpffff8d68 + 0x28) & 0x10000) == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = 0;
      }
      iVar5 = FUN_001f48c0(9);
      FUN_001ede20(*piGpffff8d3c + iVar5 * 0x4f4 + 4,auStack_100,0x13);
      uStack_ec = uVar7;
      FUN_001f1350(auStack_100,0xee);
      if ((*(uint *)(iGpffff8d68 + 0x28) & 0x8000) == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = 0;
      }
      iVar5 = FUN_001f48c0(9);
      FUN_001ede20(*piGpffff8d3c + iVar5 * 0x4f4 + 4,auStack_140,0x14);
      uStack_12c = uVar7;
      FUN_001f1350(auStack_140,0xfd);
      if ((*(uint *)(iGpffff8d68 + 0x28) & 0x4000) == 0) {
        uVar7 = 3;
      }
      else {
        uVar7 = 0;
      }
      iVar5 = FUN_001f48c0(9);
      FUN_001ede20(*piGpffff8d3c + iVar5 * 0x4f4 + 4,auStack_180,0x15);
      uStack_16c = uVar7;
      FUN_001f1350(auStack_180,0xfe);
    }
  }
  else {
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0;
      uVar6 = FUN_001fd380(0x24);
      (*(code *)PTR_FUN_00327890)(uVar6);
    }
    iVar5 = FUN_001f48c0(10);
    bVar1 = *(int *)(*piGpffff8d3c + iVar5 * 0x4f4 + 0x31c) != 1;
    if (!bVar1) {
      iVar5 = FUN_001f48c0(10);
      FUN_001ecd80(*piGpffff8d3c + iVar5 * 0x4f4 + 4,0);
    }
    iVar5 = FUN_001f48c0(9);
    bVar2 = *(int *)(*piGpffff8d3c + iVar5 * 0x4f4 + 0x31c) != 1;
    if (!bVar2) {
      iVar5 = FUN_001f48c0(9);
      FUN_001ecd80(*piGpffff8d3c + iVar5 * 0x4f4 + 4,0);
    }
    iVar5 = FUN_001f48c0(8);
    bVar3 = *(int *)(*piGpffff8d3c + iVar5 * 0x4f4 + 0x31c) != 1;
    if (!bVar3) {
      iVar5 = FUN_001f48c0(8);
      FUN_001ecd80(*piGpffff8d3c + iVar5 * 0x4f4 + 4,0);
    }
    if (bVar1 && (bVar2 && bVar3)) {
      *(undefined4 *)(param_1 + 8) = 1;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x40000;
    }
    iVar5 = FUN_001f48c0(8);
    FUN_001ecd80(*piGpffff8d3c + iVar5 * 0x4f4 + 4,2);
    iVar5 = FUN_001f48c0(8);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
    iVar5 = FUN_001f48c0(9);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
    iVar5 = FUN_001f48c0(10);
    FUN_001eda40(0x3f800000,*piGpffff8d3c + iVar5 * 0x4f4 + 4);
    uVar6 = FUN_001c1890(0);
    uVar6 = FUN_001bcb00(uVar6);
    FUN_001fe620(10,1,uVar6);
    if ((*(uint *)(iGpffff8d68 + 0x28) & 0x10000) == 0) {
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
    }
    iVar5 = FUN_001f48c0(9);
    FUN_001ede20(*piGpffff8d3c + iVar5 * 0x4f4 + 4,auStack_40,0x13);
    uStack_2c = uVar7;
    FUN_001f1350(auStack_40,0xee);
    if ((*(uint *)(iGpffff8d68 + 0x28) & 0x8000) == 0) {
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
    }
    iVar5 = FUN_001f48c0(9);
    FUN_001ede20(*piGpffff8d3c + iVar5 * 0x4f4 + 4,auStack_80,0x14);
    uStack_6c = uVar7;
    FUN_001f1350(auStack_80,0xfd);
    if ((*(uint *)(iGpffff8d68 + 0x28) & 0x4000) == 0) {
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
    }
    iVar5 = FUN_001f48c0(9);
    FUN_001ede20(*piGpffff8d3c + iVar5 * 0x4f4 + 4,auStack_c0,0x15);
    uStack_ac = uVar7;
    FUN_001f1350(auStack_c0,0xfe);
  }
  iVar5 = *(int *)(iGpffff8d68 + 0x1c);
  if (*(int *)(param_1 + 4) == 0) {
    uVar6 = FUN_001fd380(iVar5);
    (*(code *)(&PTR_FUN_003276e0)[iVar5 * 3])(uVar6);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  if (*(int *)(param_1 + 4) == 1) {
    uVar6 = FUN_001fd380(iVar5);
    (*(code *)(&PTR_FUN_003276e4)[iVar5 * 3])(uVar6);
    if ((*(uint *)(iGpffff8d68 + 0x28) & 0x800) != 0) {
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xfffff7ff;
      *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 4;
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
  if (*(int *)(param_1 + 4) == 2) {
    uVar6 = FUN_001fd380(iVar5);
    (*(code *)(&PTR_LAB_003276e8)[iVar5 * 3])(uVar6);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 0x00201c80  size 0x47c
void FUN_00201c80(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int aiStack_50 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar1 = *(int **)(param_1 + 0x14);
  uStack_28 = 0x44;
  uStack_30 = 1;
  aiStack_50[0] = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uVar2 = *(uint *)(iGpffff8d68 + 0x28);
  uVar7 = 0x80;
  if ((((uVar2 & 0x700) == 0) && ((uVar2 & 0x8000000) == 0)) && (-2 < *(int *)(iGpffff8d68 + 0x1c)))
  {
    if ((uVar2 & 2) != 0) {
      if (*piVar1 < 0) {
        uVar3 = FUN_001f4890(4);
        iVar4 = FUN_001f48c0(7);
        iVar4 = *piGpffff8d3c + iVar4 * 0x4f4;
        *(undefined4 *)(iVar4 + 0x314) = 0xffffffff;
        *(undefined4 *)(iVar4 + 800) = 0;
        *(undefined4 *)(iVar4 + 0x310) = 0;
        if (*(int *)(iVar4 + 800) == 0) {
          *(undefined4 *)(iVar4 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 0x31c) = 1;
        }
        *(undefined4 *)(iVar4 + 0x310) = 0;
        if (*(int *)(iVar4 + 800) == 0) {
          *(undefined4 *)(iVar4 + 0x31c) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 0x31c) = 1;
        }
        *(undefined4 *)(iVar4 + 0x318) = 1;
        *(undefined4 *)(iVar4 + 800) = uVar3;
        *(undefined4 *)(iVar4 + 0x31c) = 1;
        *piVar1 = 0x14;
      }
      if (*piVar1 == 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xfffffffd;
        FUN_00153260(2,9,0,0);
        iVar4 = *piVar1;
      }
      else {
        uVar7 = (uint)(*piVar1 << 7) / 0x14;
        if (uVar7 < 0x81) {
          aiStack_50[0] = uVar7 << 0x18;
        }
        else {
          uVar7 = 0x80;
          aiStack_50[0] = -0x80000000;
        }
        FUN_00153260(2,9,1,aiStack_50);
        iVar4 = *piVar1;
      }
      *piVar1 = iVar4 + -1;
    }
    if ((*(uint *)(iGpffff8d68 + 0x28) & 1) != 0) {
      if (*piVar1 < 0) {
        *piVar1 = 0x28;
      }
      if (*piVar1 == 0) {
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xfffffffe;
        *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 2;
      }
      else {
        uVar2 = (uVar7 * (0x28 - *piVar1)) / 0x28;
        if (uVar2 < 0x81) {
          aiStack_50[0] = uVar2 << 0x18;
        }
        else {
          aiStack_50[0] = -0x80000000;
        }
        FUN_00153260(2,9,1,aiStack_50);
      }
      *piVar1 = *piVar1 + -1;
    }
    if ((*(uint *)(iGpffff8d68 + 0x28) & 0x1a0000) == 0) {
      if ((*(uint *)(iGpffff8d68 + 0x28) & 8) != 0) {
        iVar4 = *(int *)(iGpffff8d68 + 0x1c);
        if (piVar1[1] == 0) {
          uVar6 = FUN_001fd380(iVar4);
          (*(code *)(&PTR_FUN_003276e0)[iVar4 * 3])(uVar6);
          piVar1[1] = 1;
        }
        if (piVar1[1] == 1) {
          uVar6 = FUN_001fd380(iVar4);
          (*(code *)(&PTR_FUN_003276e4)[iVar4 * 3])(uVar6);
          if ((*(uint *)(iGpffff8d68 + 0x28) & 0x800) != 0) {
            *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xfffff7ff;
            *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 4;
            piVar1[1] = 2;
          }
        }
        if (piVar1[1] == 2) {
          uVar6 = FUN_001fd380(iVar4);
          (*(code *)(&PTR_LAB_003276e8)[iVar4 * 3])(uVar6);
          piVar1[1] = 0;
        }
      }
    }
    else {
      FUN_00201380(piVar1);
    }
    FUN_001fba40();
  }
  else {
    FUN_00153260(2,9,0,0);
    FUN_001f4e90(0);
    if ((((*(uint *)(iGpffff8d68 + 0x28) & 0x200) == 0) &&
        ((*(uint *)(iGpffff8d68 + 0x28) & 0x8000000) == 0)) &&
       ((-2 < *(int *)(iGpffff8d68 + 0x1c) && (lVar5 = FUN_00205630(), lVar5 == 1)))) {
      FUN_001fba40();
    }
  }
  return;
}

// 0x00202140  size 0x1bc
undefined4 FUN_00202140(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_0017e8d0();
  uVar1 = FUN_0017e8d0();
  switch(uVar1) {
  case 0:
    uVar2 = 0x2d;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
    uVar1 = FUN_0017e890();
    switch(uVar1) {
    case 0:
      uVar2 = 4;
      break;
    case 1:
      uVar2 = 0x1b;
      break;
    case 2:
      uVar2 = 0x1b;
      break;
    case 3:
      uVar2 = 0x1b;
      break;
    case 4:
      uVar2 = 0x27;
      break;
    case 5:
      uVar2 = 0x1b;
      break;
    case 6:
      uVar2 = 0x13;
      break;
    case 7:
      uVar2 = 5;
      break;
    case 8:
      uVar2 = 7;
      break;
    case 9:
      uVar2 = 0x26;
      break;
    case 10:
      uVar2 = 0x26;
      break;
    case 0xb:
      uVar2 = 0x20;
      break;
    case 0xc:
      uVar2 = 0x20;
      break;
    case 0xd:
      uVar2 = 0x2b;
      break;
    default:
      goto switchD_0020217c_default;
    case 0x10:
      uVar2 = 0x21;
    }
    break;
  case 5:
    uVar2 = 0x21;
    break;
  case 6:
    uVar2 = 0x16;
    break;
  case 7:
    uVar1 = FUN_0017e870();
    switch(uVar1) {
    case 0:
      uVar2 = 0xd;
      break;
    case 1:
      uVar2 = 0xd;
      break;
    case 2:
      uVar2 = 0x1b;
      break;
    case 3:
      uVar2 = 0xfffffff9;
      break;
    case 4:
      uVar2 = 0xfffffff9;
      break;
    case 5:
      uVar2 = 0x15;
      break;
    default:
      uVar2 = 0x16;
    }
    break;
  case 8:
    lVar3 = FUN_0017e8b0();
    if (lVar3 == 0) {
      uVar2 = 0x16;
    }
    else {
      lVar3 = FUN_0017e8b0();
      if (lVar3 == 1) {
        uVar2 = 0x19;
      }
      else {
        uVar2 = 0x2c;
      }
    }
    break;
  default:
switchD_0020217c_default:
    uVar2 = 0x16;
  }
  return uVar2;
}

// 0x00202300  size 0x24
bool FUN_00202300(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_001f7ee0(param_1,0xffffffffffffffff);
  return lVar1 != 0x11;
}

// 0x00202330  size 0xcc
bool FUN_00202330(int *param_1,int param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *param_1;
  while( true ) {
    *param_1 = (*param_1 + 0x120 + param_2) % 0x120;
    if ((*(int *)(param_4 + *param_1 * 4) == 1) &&
       (lVar2 = FUN_001f7ee0(*param_1,0xffffffffffffffff), param_3 == lVar2)) break;
    iVar3 = iVar3 + 1;
    if (0x11f < iVar3) {
      *param_1 = iVar1;
      return false;
    }
  }
  return *param_1 != iVar1;
}

// 0x00202400  size 0x588
void FUN_00202400(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(iRam0036f458 + 0x1c);
  if ((((*(uint *)(iRam0036f458 + 0x28) & 4) == 0) ||
      ((*(uint *)(iRam0036f458 + 0x28) & 0x1000) == 0)) && (*piRam0036f468 = 0, *param_1 != 0)) {
    return;
  }
  if ((*(uint *)(iRam0036f458 + 0x28) & 0x400000) == 0) {
    *piRam0036f468 = 1;
  }
  else {
    *piRam0036f468 = 0;
  }
  if (((*(uint *)(iRam0036f458 + 0x28) & 2) != 0) || ((*(uint *)(iRam0036f458 + 0x28) & 1) != 0)) {
    *piRam0036f468 = 0;
  }
  if (((*(uint *)(iRam0036f458 + 0x28) & 0x1c000) != 0) &&
     ((*(uint *)(iRam0036f458 + 0x28) & 0x1a0000) == 0)) {
    uVar2 = FUN_001c1890(0);
    lVar3 = FUN_001b89d0(uVar2);
    if (0 < lVar3) {
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
      if (uVar4 == 0x80) {
        FUN_001fb290(5);
        param_1[2] = *(int *)(iRam0036f458 + 0x24);
        param_1[3] = iVar6;
        uVar2 = FUN_001fd380(0x24);
        (*(code *)PTR_FUN_00327660)(uVar2);
        *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x20000;
        return;
      }
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xfffe3fff;
      goto LAB_0020263c;
    }
  }
  uVar4 = *(uint *)(iRam0036f458 + 0x28);
  if ((uVar4 & 0x20000) == 0) {
    if ((uVar4 & 0x80000) == 0) {
      if ((uVar4 & 0x100000) != 0) {
        if ((uVar4 & 0x200000) == 0) {
          if (iVar6 == 0x24) {
            iVar1 = param_1[3];
            *(int *)(iRam0036f458 + 0x24) = param_1[2];
            *(int *)(iRam0036f458 + 0x1c) = iVar1;
            *(int *)(iRam0036f458 + 0x20) = iVar1;
          }
        }
        else {
          *(uint *)(iRam0036f458 + 0x28) = uVar4 & 0xffefffff;
          *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffdfffff;
        }
        *piRam0036f468 = 0;
        *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xfffe3fff;
      }
    }
    else if (iVar6 == 0x24) {
      uVar4 = piRam0036f468[2];
      if ((piRam0036f468[4] & uVar4) == 0) {
        uVar5 = 0x100000;
      }
      else {
        uVar5 = 0x80000;
        if ((uVar4 != 0x80000) && (uVar5 = uVar4, *piRam0036f468 != 1)) {
          uVar5 = 0x100000;
        }
      }
      if (uVar5 != 0x80) {
        if ((piRam0036f468[4] & uVar4) == 0) {
          uVar4 = 0x100000;
        }
        else if (uVar4 == 0x80000) {
          uVar4 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar4 = 0x100000;
        }
        if (uVar4 != 0x20) goto LAB_0020263c;
      }
      FUN_001fb290(6);
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x100000;
      *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xfff7ffff;
      return;
    }
  }
  else {
    if ((uVar4 & 0x40000) == 0) {
      return;
    }
    FUN_00200ef0(0);
    iVar6 = 0x24;
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xfffbffff;
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xfffdffff;
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x80000;
    FUN_001fd070(0x24);
    FUN_001fc4a0();
    *piRam0036f468 = 0;
  }
LAB_0020263c:
  if (*param_1 == 1) {
    uVar2 = FUN_001fd380(iVar6);
    (*(code *)(&PTR_LAB_003274b4)[iVar6 * 3])(uVar2);
    lVar3 = FUN_001fd2d0();
    if (lVar3 == 1) {
      *param_1 = 2;
    }
  }
  else if (*param_1 == 2) {
    uVar2 = FUN_001fd380(iVar6);
    (*(code *)(&PTR_LAB_003274b8)[iVar6 * 3])(uVar2);
    *param_1 = 0;
    FUN_001fc4a0();
    iVar6 = *(int *)(iRam0036f458 + 0x1c);
  }
  if (((*(int *)(iRam0036f458 + 0x1c) == *(int *)(iRam0036f458 + 0x20)) &&
      ((*(uint *)(iRam0036f458 + 0x28) & 0xe0) != 0)) && ((*(uint *)(iRam0036f458 + 0x28) & 1) == 0)
     ) {
    FUN_001f5030();
    lVar3 = FUN_001fc2d0();
    if (lVar3 == 1) {
      return;
    }
  }
  if ((*param_1 == 0) && (-1 < iVar6)) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) & 0xffffefff;
    uVar2 = FUN_001fd380(iVar6);
    (*(code *)(&PTR_FUN_003274b0)[iVar6 * 3])(uVar2);
    *param_1 = 1;
  }
  return;
}

// 0x00202990  size 0x180
void FUN_00202990(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  FUN_001fbb00();
  lVar3 = FUN_001fb790();
  if (lVar3 == 0) {
    iVar2 = *(int *)(iGpffff8d68 + 0x1c);
    if (iVar2 < -1) {
      if (iVar2 == -4) {
        FUN_0017e8c0(8);
        FUN_0017e880(0x13);
        FUN_0014b880(4);
      }
      else if (iVar2 == -2) {
        FUN_0014b880(0);
      }
      else if (iVar2 == -3) {
        FUN_0017e8c0(7);
        FUN_0017e880(0x13);
        FUN_0014b880(2);
      }
      else if (iVar2 == -5) {
        FUN_0017e8c0(7);
        FUN_0017e880(0x13);
        FUN_0014b880(1);
      }
      else if (iVar2 == -6) {
        FUN_0014b880(6);
      }
    }
    else {
      lVar3 = FUN_001fc400();
      if (lVar3 != 1) {
        if ((*(uint *)(iGpffff8d68 + 0x28) & 0x40000000) != 0) {
          *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) & 0xbfffffff;
          uVar4 = FUN_001c1890(0);
          FUN_001bcb10(uVar4);
        }
        FUN_0020f150();
        FUN_00202400(uVar1);
      }
    }
  }
  return;
}

// 0x00202b10  size 0x74
void FUN_00202b10(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  FUN_001ee8f0(iGpffff8d68 + 0x40);
  *puVar1 = 0;
  FUN_00201300();
  FUN_001fe2d0();
  FUN_001fd580();
  FUN_001f4be0();
  FUN_00205860();
  FUN_0020f3e0();
  FUN_00209fe0();
  FUN_002d5230();
  FUN_001f05b0();
  return;
}

// 0x00202b90  size 0x384
void FUN_00202b90(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined **ppuVar11;
  int iVar12;
  int iVar13;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar7 = 0;
  iVar9 = 1;
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  do {
    iVar8 = iGpffff89d4 + (iVar9 + 0x1870) * 0x14;
    iVar12 = *(int *)(iVar8 + 0x20);
    if (iVar12 == 0) {
      uVar4 = *(uint *)(iVar8 + 0x18);
    }
    else {
      uVar4 = iVar12 + 0x7ffU >> 0xb;
    }
    if (uVar7 < uVar4 << 0xb) {
      if (iVar12 == 0) {
        uVar7 = *(uint *)(iVar8 + 0x18);
      }
      else {
        uVar7 = iVar12 + 0x7ffU >> 0xb;
      }
      uVar7 = uVar7 << 0xb;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 6);
  FUN_001f0710(0x430750,uVar7,0x1f91);
  FUN_001f06b0(0x1870);
  puVar2[4] = 0;
  *puVar2 = 0;
  uVar5 = FUN_00202140();
  puVar2[1] = uVar5;
  FUN_002d5260(0x430750);
  FUN_002058b0(0x430750);
  FUN_00205640();
  FUN_0020a030(0x430750);
  FUN_00209630();
  iVar9 = 0;
  iVar12 = 0;
  ppuVar11 = &PTR_DAT_00328f60;
  iStack_10 = DAT_003294b8;
  iStack_c = DAT_003294bc;
  iStack_8 = DAT_003294c0;
  do {
    psVar10 = (short *)*ppuVar11;
    iVar8 = 0;
    sVar1 = *psVar10;
    while (sVar1 != -2) {
      iVar6 = sVar1 * 0xc;
      iVar13 = iGpffff89d4 + *(int *)(iVar6 + 0x327930) * 0x14;
      iVar3 = *(int *)(iVar13 + 0x20);
      if (iVar3 == 0) {
        uVar7 = *(uint *)(iVar13 + 0x18);
      }
      else {
        uVar7 = iVar3 + 0x7ffU >> 0xb;
      }
      psVar10 = psVar10 + 1;
      iVar8 = iVar8 + ((*(int *)(iVar6 + 0x327938) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
                      uVar7 * 0x800 + *(int *)(iVar6 + 0x327934) * 0x80;
      sVar1 = *psVar10;
    }
    if (iVar9 < iVar8) {
      iVar9 = iVar8;
    }
    iVar12 = iVar12 + 1;
    ppuVar11 = ppuVar11 + 1;
  } while (iVar12 < 0x2e);
  iVar8 = DAT_003294c0 * 0xd;
  iVar12 = *(int *)(iGpffff89d4 + 0x20 + DAT_003294b8 * 0x14);
  if (iVar12 == 0) {
    uVar7 = *(uint *)(DAT_003294b8 * 0x14 + iGpffff89d4 + 0x18);
  }
  else {
    uVar7 = iVar12 + 0x7ffU >> 0xb;
  }
  iVar12 = DAT_003294bc * 0x80;
  FUN_001fe300(0x430750,1);
  FUN_0020f480(0x430750,0x17fd,0);
  FUN_00201330(0x430750);
  FUN_001f4c80(0x430750,299,
               iVar9 + ((iVar8 + 1) * 0x10 + 0x3fU & 0xffffffc0) + uVar7 * 0x800 + iVar12,&iStack_10
               ,0xc20,0x17fb);
  FUN_001f4b20(uGpffff8bd0,uGpffff8bd0);
  if (puVar2[1] == -7) {
    puVar2[1] = 0xd;
    FUN_001fd5d0(0x430750,puVar2[1]);
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x40000000;
  }
  else {
    FUN_001fd5d0(0x430750);
  }
  FUN_0020f2e0(0x430750);
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 8;
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 2;
  FUN_001f5030();
  *(code **)(param_1 + 0x1c) = FUN_00202990;
  return;
}

// 0x00202f20  size 0x7f8
void FUN_00202f20(int param_1,int param_2,long param_3,long param_4)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfStack_90;
  int iStack_80;
  int iStack_70;
  undefined1 auStack_60 [72];
  float fStack_18;
  float fStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  bVar1 = false;
  iVar11 = (int)param_3;
  if ((param_4 != 0) || (*(char *)(iVar11 + 0xb0) != '\0')) {
    bVar1 = true;
  }
  if (param_3 == 0) {
    iStack_4 = 0;
    iStack_c = 0;
    iStack_8 = 0;
    iStack_10 = 0;
  }
  else {
    FUN_00203a70(*(undefined2 *)(iVar11 + 0x98),&iStack_4,&iStack_8);
    FUN_00203a70(*(undefined2 *)(iVar11 + 0x9c),&iStack_c,&iStack_10);
  }
  if (iStack_4 == 0) {
    iVar4 = *(int *)(iGpffff8da4 + 0x34) +
            *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2 * 8) * 0x6e4;
  }
  else if (iStack_4 == 1) {
    iVar4 = *(int *)(iGpffff8da4 + 0x34) +
            *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2 * 8) * 0x6e4 + iStack_8 * 0x54 + 0x54;
  }
  else {
    iVar4 = *(int *)(iGpffff8da4 + 0x34) +
            *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2 * 8) * 0x6e4 + (iStack_4 + -1) * 0x1a4 +
            iStack_8 * 0x54 + 0x54;
  }
  piVar2 = (int *)(iGpffff8da4 + 0x5c);
  iVar10 = param_2 * 8;
  fStack_18 = *(float *)(iVar4 + 0x24);
  if (iStack_c == 0) {
    iVar4 = *(int *)(iGpffff8da4 + 0x38) + *(int *)(*piVar2 + iVar10) * 0x6e4;
  }
  else if (iStack_c == 1) {
    iVar4 = *(int *)(iGpffff8da4 + 0x38) + *(int *)(*piVar2 + iVar10) * 0x6e4 + iStack_10 * 0x54 +
            0x54;
  }
  else {
    iVar4 = *(int *)(iGpffff8da4 + 0x38) + *(int *)(*piVar2 + iVar10) * 0x6e4 +
            (iStack_c + -1) * 0x1a4 + iStack_10 * 0x54 + 0x54;
  }
  fStack_14 = *(float *)(iVar4 + 0x24);
  fVar17 = 0.0;
  iVar4 = *(int *)(iGpffff8da4 + 0x2c) + *(int *)(*piVar2 + iVar10) * 0x270;
  fVar20 = *(float *)(iVar4 + 0xcc);
  fVar18 = *(float *)(iVar4 + 0x10c);
  fVar19 = *(float *)(iVar4 + 0xd0);
  fVar16 = *(float *)(iVar4 + 0x110);
  fVar14 = fStack_18 - *(float *)(iVar4 + 0x138);
  fVar15 = fStack_14 - *(float *)(iVar4 + 0x14c);
  if (param_3 != 0) {
    fVar14 = (float)(int)*(char *)(iVar11 + 0xc) * 0.005 + fVar14 + 0.0;
    fVar15 = (float)(int)*(char *)(iVar11 + 0xd) * 0.005 + fVar15 + 0.0;
    fVar20 = (float)(int)*(char *)(iVar11 + 4) * 0.5 + fVar20 + 0.0;
    fVar18 = (float)(int)*(char *)(iVar11 + 5) * 0.5 + fVar18 + 0.0;
    fVar12 = (float)maybe_asinf(((float)(int)*(char *)(iVar11 + 2) / 2.0) /
                                (fStack_18 * 2.0 * 1000.0),*(char *)(iVar11 + 2),
                                *(char *)(iVar11 + 5));
    fVar19 = fVar19 + (fVar12 * 180.0) / 3.1415927;
    fVar12 = (float)maybe_asinf(((float)(int)*(char *)(iVar11 + 3) / 2.0) /
                                (fStack_14 * 2.0 * 1000.0));
    fVar16 = fVar16 + (fVar12 * 180.0) / 3.1415927;
  }
  fVar18 = fVar18 * 0.017453292;
  fVar16 = fVar16 * 0.017453292;
  maybe_Vu0_UnitMatrix(param_1 + 0x10);
  uVar13 = atan2f(fVar14 - fVar15,*(undefined4 *)(iVar4 + 8));
  maybe_Vu0_RotMatrixX(uVar13,param_1 + 0x10,param_1 + 0x10);
  *(float *)(param_1 + 0x44) = (fVar14 + fVar15) / 2.0;
  vu0math_sub_00133020(auStack_60,param_1 + 0x10);
  if (bVar1) {
    uVar3 = 0;
    piVar2 = &DAT_003295d0;
    do {
      if (param_2 == *piVar2) {
        fVar17 = *(float *)(&DAT_003295d4 + uVar3 * 8) / 2.0;
        break;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < 3);
  }
  uVar3 = 0;
  iVar11 = 0;
  fVar12 = -(fVar20 * 0.017453292);
  fVar14 = -fVar18;
  *(undefined4 *)(param_1 + 0x2e8) = 1;
  fVar15 = -fVar16;
  *(undefined4 *)(param_1 + 0x388) = 1;
  *(undefined4 *)(param_1 + 0x390) = 1;
  pfStack_90 = &fStack_18;
  iStack_80 = param_1;
  iStack_70 = param_1;
  do {
    uVar9 = 0;
    iVar10 = iStack_70;
    iVar5 = iStack_80;
    do {
      iVar7 = iVar5 + 0x1a0;
      pfVar8 = (float *)(iVar10 + 0x60);
      iVar6 = iVar5 + 0xa0;
      maybe_Vu0_UnitMatrix(iVar7);
      if (uVar9 == 1) {
        maybe_Vu0_RotMatrixY(0x40490fdb,iVar7,iVar7);
      }
      maybe_Vu0_UnitMatrix(iVar6);
      iVar7 = (1 - uVar9) + iVar11;
      if (iVar7 == 3) {
        maybe_Vu0_RotMatrixZ(fVar14,iVar6,iVar6);
        maybe_Vu0_RotMatrixY(fVar15,iVar6,iVar6);
      }
      else if (iVar7 == 2) {
        maybe_Vu0_RotMatrixZ(fVar18,iVar6,iVar6);
        maybe_Vu0_RotMatrixY(fVar16,iVar6,iVar6);
      }
      else if (iVar7 == 1) {
        maybe_Vu0_RotMatrixZ(fVar12,iVar6,iVar6);
        maybe_Vu0_RotMatrixY(-(fVar19 * 0.017453292),iVar6,iVar6);
      }
      else if (iVar7 == 0) {
        maybe_Vu0_RotMatrixZ(fVar20 * 0.017453292,iVar6,iVar6);
        maybe_Vu0_RotMatrixY(fVar19 * 0.017453292,iVar6,iVar6);
      }
      if (uVar3 == 0) {
        *pfVar8 = *(float *)(iVar4 + 8) / 2.0;
        if (uVar9 == 0) {
          *(float *)(iVar10 + 0x68) = -(*(float *)(iVar4 + 0xc) / 2.0 + fVar17);
        }
        else {
          *(float *)(iVar10 + 0x68) = *(float *)(iVar4 + 0xc) / 2.0 + fVar17;
        }
      }
      else {
        *pfVar8 = -(*(float *)(iVar4 + 8) / 2.0);
        if (uVar9 == 0) {
          *(float *)(iVar10 + 0x68) = -(*(float *)(iVar4 + 0x10) / 2.0 + fVar17);
        }
        else {
          *(float *)(iVar10 + 0x68) = *(float *)(iVar4 + 0x10) / 2.0 + fVar17;
        }
      }
      *(float *)(iVar10 + 100) = *pfStack_90;
      *(undefined4 *)(iVar10 + 0x6c) = 0x3f800000;
      vu0math_sub_00132d20(iVar6,iVar6,pfVar8);
      vu0math_sub_00132ba0(iVar6,auStack_60,iVar6);
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iVar10 + 100) = 0;
      iVar10 = iVar10 + 0x10;
      iVar5 = iVar5 + 0x40;
    } while (uVar9 < 2);
    uVar3 = uVar3 + 1;
    iStack_70 = iStack_70 + 0x20;
    iStack_80 = iStack_80 + 0x80;
    pfStack_90 = pfStack_90 + 1;
    iVar11 = iVar11 + 2;
  } while (uVar3 < 2);
  return;
}

// 0x00203720  size 0x2cc
void FUN_00203720(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uStack_570;
  undefined2 uStack_56e;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined1 auStack_55c [24];
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined2 auStack_520 [16];
  undefined2 auStack_500 [42];
  undefined1 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 auStack_4a0 [96];
  undefined2 uStack_320;
  undefined2 uStack_31e;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined1 auStack_30c [24];
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined2 auStack_2d0 [16];
  undefined2 auStack_2b0 [42];
  undefined1 uStack_25c;
  undefined4 uStack_258;
  undefined1 auStack_250 [12];
  undefined1 auStack_244 [8];
  undefined1 auStack_23c [188];
  undefined4 auStack_180 [96];
  
  FUN_001325d0(param_1,0,8);
  FUN_001325d0(param_2,0,0xb8);
  if (param_3 == '\x03') {
    uVar1 = FUN_001c1890(param_4);
    uVar1 = FUN_001b8ec0(uVar1,param_5);
    FUN_001d2e00(&uStack_570,uVar1,0);
    puVar7 = auStack_55c;
    iVar2 = 0x17;
    uStack_320 = uStack_570;
    uStack_310 = uStack_560;
    uStack_31e = uStack_56e;
    uStack_31c = uStack_56c;
    uStack_318 = uStack_568;
    uStack_314 = uStack_564;
    puVar4 = auStack_30c;
    do {
      iVar2 = iVar2 + -1;
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
    puVar9 = auStack_520;
    puVar8 = auStack_2d0;
    iVar2 = 8;
    uStack_2e8 = uStack_538;
    uStack_2e4 = uStack_534;
    uStack_2e0 = uStack_530;
    uStack_2f4 = uStack_544;
    uStack_2f0 = uStack_540;
    uStack_2ec = uStack_53c;
    uStack_2dc = uStack_52c;
    uStack_2d8 = uStack_528;
    uStack_2d4 = uStack_524;
    do {
      iVar2 = iVar2 + -1;
      uVar5 = puVar9[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 2;
    } while (0 < iVar2);
    puVar9 = auStack_500;
    puVar8 = auStack_2b0;
    iVar2 = 0x15;
    do {
      iVar2 = iVar2 + -1;
      uVar5 = puVar9[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 2;
    } while (0 < iVar2);
    uStack_25c = uStack_4ac;
    uStack_258 = uStack_4a8;
    maybe_Mem_CopyQwords(param_1,&uStack_320,8);
    maybe_Mem_CopyQwords(param_2,auStack_30c,0xb8);
  }
  else {
    uVar5 = (undefined2)param_5;
    if (param_3 == '\x02') {
      FUN_001b55b0(auStack_4a0,uVar5);
      puVar6 = auStack_4a0;
      puVar3 = auStack_180;
      iVar2 = 0x5f;
      do {
        iVar2 = iVar2 + -1;
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (0 < iVar2);
      FUN_001b49a0(auStack_180,0,auStack_250,0xffffffffffffffff,0);
      maybe_Mem_CopyQwords(param_1,auStack_244,8);
      maybe_Mem_CopyQwords(param_2,auStack_23c,0xb8);
    }
    else if (param_3 == '\x01') {
      uVar1 = FUN_001c1890(param_4);
      uVar1 = FUN_001bc390(uVar1,param_5);
      maybe_Mem_CopyQwords(param_1,uVar1,8);
      maybe_Mem_CopyQwords(param_2,(int)uVar1 + 0x14,0xb8);
    }
    else if (param_3 == '\0') {
      FUN_001d2100(param_1);
      *(undefined2 *)param_1 = uVar5;
      FUN_001d22c0(param_2,uVar5);
    }
  }
  return;
}

// 0x002039f0  size 0x78
void FUN_002039f0(long param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0xad) {
    iVar5 = 0;
  }
  else {
    iVar2 = (int)(short)param_1;
    iVar4 = iVar2 + -0xae;
    iVar5 = 0;
    pcVar3 = &DAT_00329422 + iVar2;
    cVar1 = *pcVar3;
    param_2 = (char)(&DAT_00329422)[iVar2] + 0x120;
    for (; (iVar4 != 0 && (cVar1 == pcVar3[-1])); pcVar3 = pcVar3 + -1) {
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    }
  }
  *param_3 = param_2;
  *param_4 = iVar5;
  return;
}

// 0x00203a70  size 0xf4
void FUN_00203a70(short param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 unaff_s1_lo;
  
  iVar1 = FUN_001d3540(param_1);
  if ((param_1 < 0x8d) || (0x92 < param_1)) {
    if ((param_1 < 0x93) || (0x97 < param_1)) {
      if ((param_1 < 0x98) || (0x9c < param_1)) {
        if ((0x9c < param_1) && (param_1 < 0xa2)) {
          unaff_s1_lo = 4;
          iVar1 = iVar1 + -1;
        }
      }
      else {
        unaff_s1_lo = 3;
        iVar1 = iVar1 + -1;
      }
    }
    else {
      unaff_s1_lo = 2;
      iVar1 = iVar1 + -1;
    }
  }
  else if (iVar1 == 0) {
    unaff_s1_lo = 0;
    iVar1 = 0;
  }
  else {
    unaff_s1_lo = 1;
    iVar1 = iVar1 + -1;
  }
  *param_2 = unaff_s1_lo;
  *param_3 = iVar1;
  return;
}

// 0x00203b70  size 0x358
void FUN_00203b70(int param_1,int param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined2 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((param_5 != 0) || (*(char *)(param_4 + 0xb0) != '\0')) {
    param_2 = param_2 + 1;
  }
  FUN_0019d090(param_1);
  *(undefined1 *)(param_1 + 8) = 0;
  iVar10 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar9 = param_1 + 0x10;
  do {
    uVar4 = FUN_002047e0(iVar9 + 0x20,param_2,param_3,iVar10);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 8;
  } while (iVar10 < 6);
  *(int *)(param_1 + 0xc) = param_2;
  uVar4 = FUN_00204310(param_1 + 0x74,0,param_2,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  uVar4 = FUN_00204310(param_1 + 0xbc,1,param_2,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  uVar4 = FUN_00204020(param_1 + 0x98,0,param_2,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  uVar4 = FUN_00204020(param_1 + 0xe0,1,param_2,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  uVar4 = FUN_00203ed0(param_1 + 100,param_2,0);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  uVar2 = FUN_001d23c0(param_4,0xc);
  *(undefined1 *)(param_1 + 8) = uVar2;
  lVar5 = FUN_001d23c0(param_4,0x11);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  uVar2 = FUN_001d23c0(param_4,2);
  *(undefined1 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_001d23c0(param_4,0x12);
  *(undefined1 *)(param_1 + 0x1d) = uVar2;
  uVar2 = FUN_001d23c0(param_4,0x13);
  *(undefined1 *)(param_1 + 0x1e) = uVar2;
  uVar2 = FUN_001d23c0(param_4,0x14);
  *(undefined1 *)(param_1 + 0x1f) = uVar2;
  iVar10 = 0;
  iVar9 = param_4;
  do {
    if (*(short *)(iVar9 + 0x3c) < 0) {
      *(undefined1 *)(param_1 + iVar10 + 0x20) = 0xff;
    }
    else {
      *(char *)(param_1 + iVar10 + 0x20) = (char)*(short *)(iVar9 + 0x3c);
    }
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 2;
  } while (iVar10 < 0x10);
  iVar13 = 0;
  iVar9 = param_4;
  iVar10 = param_1;
  do {
    FUN_00203a70(*(undefined2 *)(iVar9 + 0x98),&uStack_4,&uStack_8);
    if (*(short *)(iVar9 + 0x90) == 0xad) {
      iVar12 = 0;
      iVar14 = param_2;
    }
    else {
      iVar6 = (int)*(short *)(iVar9 + 0x90);
      iVar8 = iVar6 + -0xae;
      pcVar7 = &DAT_00329422 + iVar6;
      iVar12 = 0;
      cVar3 = *pcVar7;
      for (; (iVar14 = (char)(&DAT_00329422)[iVar6] + 0x120, iVar8 != 0 && (cVar3 == pcVar7[-1]));
          pcVar7 = pcVar7 + -1) {
        iVar8 = iVar8 + -1;
        iVar12 = iVar12 + 1;
      }
    }
    uVar4 = FUN_00204310(iVar10 + 0x74,iVar13,param_2,iVar14,uStack_4,uStack_8,iVar12);
    *(undefined4 *)(iVar10 + 0x70) = uVar4;
    uVar4 = FUN_00204020(iVar10 + 0x98,iVar13,param_2,iVar14,uStack_4,uStack_8,iVar12);
    *(undefined4 *)(iVar10 + 0x94) = uVar4;
    iVar13 = iVar13 + 1;
    iVar9 = iVar9 + 4;
    iVar10 = iVar10 + 0x48;
  } while (iVar13 < 2);
  uVar1 = *(undefined2 *)(param_4 + 0x80);
  uVar11 = 0;
  cVar3 = FUN_001d3da0(uVar1);
  if ((cVar3 == '\t') && (lVar5 = FUN_001d3540(uVar1), lVar5 != 0)) {
    uVar11 = FUN_001d3540(uVar1);
  }
  FUN_00203ed0(param_1 + 100,param_2,uVar11);
  return;
}

// 0x00203ed0  size 0x140
undefined8 FUN_00203ed0(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int aiStack_8 [2];
  
  aiStack_8[0] = *(int *)(iGpffff8da4 + 0x30) +
                 *(int *)(*(int *)(iGpffff8da4 + 0x5c) + param_2 * 8) * 0xc0 + param_3 * 0x10;
  aiStack_8[1] = aiStack_8[0] + 0x60;
  FUN_001ab5f0();
  iVar3 = 0;
  piVar2 = aiStack_8;
  do {
    puVar1 = (undefined4 *)*piVar2;
    *param_1 = (char)*puVar1;
    param_1[1] = (char)puVar1[2];
    if (*(char *)(puVar1 + 1) == '\0') {
      param_1[2] = 2;
    }
    else {
      param_1[2] = *(char *)(puVar1 + 1) + -1;
    }
    if (*(char *)(*piVar2 + 0xc) == '\0') {
      param_1[3] = 5;
    }
    else {
      param_1[3] = *(char *)(*piVar2 + 0xc) + -1;
      if (*(int *)(&DAT_003295b0 + (uint)(byte)param_1[3] * 4) < param_3) {
        param_1[3] = (char)*(undefined4 *)(&DAT_00329590 + param_3 * 4);
      }
    }
    if (*(char *)(*piVar2 + 0xd) == '\0') {
      param_1[4] = 2;
    }
    else {
      param_1[4] = *(char *)(*piVar2 + 0xd) + -1;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 5;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 2);
  return 0;
}

