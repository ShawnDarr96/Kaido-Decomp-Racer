// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0013c000 - 0x00140000
#include "ghidra_types.h"

// 0x0013c000  size 0x4c
void FUN_0013c000(undefined8 param_1,long param_2)

{
  long lVar1;
  
  do {
    lVar1 = sceSifDmaStat(param_1);
    if (lVar1 < 0) {
      return;
    }
  } while (param_2 != 0);
  return;
}

// 0x0013c050  size 0x90
long FUN_0013c050(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  uStack_10 = param_2;
  uStack_c = param_1;
  uStack_8 = param_3;
  FlushCache(0);
  lVar1 = sceSifSetDma(&uStack_10,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    do {
      if (param_4 == 0) break;
      lVar2 = sceSifDmaStat(lVar1);
    } while (-1 < lVar2);
  }
  return lVar1;
}

// 0x0013c100  size 0xac
int FUN_0013c100(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *param_2;
  while (iVar1 != 0) {
    iVar1 = FUN_0012b338(*param_2);
    iVar1 = iVar1 + 1;
    FUN_00132600(param_1 + iVar4,*param_2,iVar1);
    uVar3 = FUN_00131e20(param_1 + iVar4 + iVar1,param_2[1],10);
    iVar2 = FUN_0012b338(uVar3);
    param_2 = param_2 + 2;
    iVar4 = iVar4 + iVar1 + iVar2 + 1;
    iVar1 = *param_2;
  }
  return iVar4;
}

// 0x0013c1b0  size 0x38
void FUN_0013c1b0(void)

{
  long in_a3;
  undefined4 uStack_4;
  
  FUN_00119918();
  if (in_a3 != 0) {
    *(undefined4 *)in_a3 = uStack_4;
  }
  return;
}

// 0x0013c1f0  size 0xcc
void FUN_0013c1f0(long param_1,long param_2)

{
  long lVar1;
  
  FUN_00114200(0);
  FUN_00121c80(0);
  if (param_2 != 0) {
    do {
      lVar1 = FUN_001198f8(param_2,0,0);
    } while (lVar1 < 0);
  }
  if (param_1 != 0) {
    do {
      lVar1 = FUN_00119e28(param_1);
    } while (lVar1 == 0);
    do {
      lVar1 = FUN_00119dd8();
    } while (lVar1 == 0);
  }
  FUN_00114200(0);
  FUN_00119088();
  FUN_00115bb8();
  FUN_001189a8();
  return;
}

// 0x0013c2c0  size 0x1d8
/* WARNING: Removing unreachable block (ram,0x0013c2f0) */

void FUN_0013c2c0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 *puStack_60;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar5 = 0;
  puVar4 = (undefined4 *)0x387000;
  puVar6 = &uStack_38;
  do {
    uVar5 = uVar5 + 8;
    *puVar4 = *(undefined4 *)puVar6;
    puVar4[1] = *(undefined4 *)(puVar6 + 1);
    puVar4[2] = *(undefined4 *)(puVar6 + 2);
    puVar4[3] = *(undefined4 *)(puVar6 + 3);
    puVar4[4] = *(undefined4 *)(puVar6 + 4);
    puVar4[5] = *(undefined4 *)(puVar6 + 5);
    puVar4[6] = *(undefined4 *)(puVar6 + 6);
    puVar4[7] = *(undefined4 *)(puVar6 + 7);
    puVar3 = puRam00387008;
    puVar4 = puVar4 + 8;
    puVar6 = puVar6 + 8;
  } while (uVar5 < 0x10);
  uStack_68 = 0x387000;
  uStack_6c = 0x40;
  uStack_64 = 0x40;
  puStack_60 = (undefined2 *)0x387040;
  uStack_70 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  switch(param_1) {
  case 0x10a:
    puStack_60 = puRam00387004;
    break;
  case 0x10b:
    FUN_00132600(0x387004,puRam00387004,0x14);
    goto LAB_0013c474;
  case 0x110:
    puVar1 = (undefined2 *)0x387004;
    puVar2 = puRam00387004;
    for (iVar7 = iRam00387000; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    }
    puStack_60 = puVar3;
  }
LAB_0013c474:
  FUN_0013bd50(uRam0036f020,&uStack_70);
  return;
}

// 0x0013c4a0  size 0x8
void FUN_0013c4a0(void)

{
  return;
}

// 0x0013c4b0  size 0x94
void FUN_0013c4b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uRam0036f020 = (undefined4)param_1;
  uVar1 = FUN_0013be40(param_1,1);
  FUN_0013c2c0(0x100,0);
  FUN_0013c2c0(0x10d,0x980,0x3fff);
  FUN_0013c2c0(0x10d,0xa80,0x3fff);
  FUN_0013c2c0(0x10d,0x981,0x3fff);
  FUN_0013c2c0(0x10d,0xa81,0x3fff);
  FUN_0013c2c0(0x107,10,0x80);
  FUN_0013be40(uRam0036f020,uVar1);
  return;
}

// 0x0013c550  size 0x1dc
undefined4 FUN_0013c550(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_2;
  iVar5 = iVar1 * 0x6c;
  iVar4 = iRam0036f038 + iVar5;
  WaitSema(uRam0036f03c);
  switch(param_1) {
  case 0x400:
    *(undefined4 *)(iVar4 + 0x3c) = 2;
    break;
  case 0x401:
    *(undefined4 *)(iVar4 + 0x3c) = 0;
    iVar5 = iRam0036f038 + iVar5;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
    *(undefined4 *)(iVar5 + 0x30) = 0;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    *(undefined4 *)(iVar5 + 0x38) = 0;
    break;
  case 0x402:
    *(undefined4 *)(iVar4 + 0x3c) = 0;
    iVar5 = iRam0036f038 + iVar5;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
    *(undefined4 *)(iVar5 + 0x30) = 0;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    *(undefined4 *)(iVar5 + 0x38) = 0;
    break;
  case 0x403:
    iVar5 = param_2[2];
    iVar2 = param_2[1];
    if (*(int *)(iVar4 + 0x14) == 0) {
      *(int *)(iVar4 + 0x44) = iVar2;
      *(int *)(iVar4 + 0x48) = iVar5;
      if (*(code **)(iVar4 + 0x68) != (code *)0x0) {
        (**(code **)(iVar4 + 0x68))(iVar1,iVar4 + 0x44,1);
      }
    }
    else {
      if (*(code **)(iVar4 + 0x68) != (code *)0x0) {
        (**(code **)(iVar4 + 0x68))(iVar1,iVar4 + 0x44,*(undefined4 *)(iVar4 + 100));
      }
      FUN_0013c730(iVar1,iVar2,iVar5);
      *(undefined4 *)(iVar4 + 0x2c) = 0;
    }
    break;
  case 0x404:
    if ((*(int *)(iVar4 + 0x30) == 0) ||
       (lVar3 = FUN_0013c000(*(int *)(iVar4 + 0x30),0), -1 < lVar3)) {
      uRam003871c0 = 0;
    }
    else {
      uRam003871c0 = *(undefined4 *)(iVar4 + 0x34);
      *(undefined4 *)(iVar4 + 0x34) = 0;
    }
    break;
  case 0x405:
    *(undefined4 *)(iVar4 + 0x3c) = 0;
    iVar5 = iRam0036f038 + iVar5;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
    *(undefined4 *)(iVar5 + 0x30) = 0;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    *(undefined4 *)(iVar5 + 0x38) = 0;
  }
  SignalSema(uRam0036f03c);
  return 0x3871c0;
}

// 0x0013c730  size 0x148
undefined8 FUN_0013c730(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int aiStack_40 [16];
  
  piVar12 = (int *)(iRam0036f038 + param_1 * 0x6c);
  uVar1 = piVar12[6];
  piVar7 = piVar12 + 0x11;
  if (uVar1 != 0) {
    iVar13 = 0;
    if (uVar1 <= param_3) {
      param_3 = uVar1;
    }
    param_2 = param_2 - piVar12[8];
    iVar6 = 0;
    uVar1 = *piVar12 * piVar12[5];
    uVar5 = *piVar12 * piVar12[9];
    if (param_3 != 0) {
      piVar11 = aiStack_40;
      do {
        iVar2 = piVar12[4];
        iVar3 = piVar12[3];
        uVar8 = iVar2 + param_3;
        if (uVar1 <= iVar2 + param_3) {
          uVar8 = uVar1;
        }
        iVar4 = piVar12[8];
        uVar9 = param_2 + param_3;
        if (uVar5 <= param_2 + param_3) {
          uVar9 = uVar5;
        }
        uVar10 = uVar9 - param_2;
        if (uVar8 - iVar2 <= uVar9 - param_2) {
          uVar10 = uVar8 - iVar2;
        }
        *piVar11 = iVar3 + iVar2;
        piVar11[1] = iVar4 + param_2;
        piVar11[2] = uVar10;
        piVar11[3] = 0;
        *piVar7 = iVar3 + iVar2;
        piVar7[1] = uVar10;
        piVar12[4] = (int)(piVar12[4] + uVar10) % (int)uVar1;
        param_2 = (int)(param_2 + uVar10) % (int)uVar5;
        param_3 = param_3 - uVar10;
        iVar6 = iVar6 + uVar10;
        piVar11 = piVar11 + 4;
        piVar7 = piVar7 + 2;
        iVar13 = iVar13 + 1;
        piVar12[6] = piVar12[6] - uVar10;
      } while (param_3 != 0);
    }
    piVar12[0x19] = iVar13;
    piVar12[0xd] = iVar6;
    piVar12[0xe] = piVar12[0xe] + iVar6;
    FlushCache(0);
    iVar13 = sceSifSetDma(aiStack_40,iVar13);
    piVar12[0xc] = iVar13;
  }
  return 0;
}

// 0x0013c880  size 0x124
undefined4 FUN_0013c880(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  lVar2 = FUN_0013c9b0(0x300,param_1,param_2,uGpffff8938);
  if (lVar2 == -1) {
    uVar1 = 0;
  }
  else {
    uVar5 = 0;
    if (param_1 != 0) {
      do {
        FUN_0013c9b0(0x303,uVar5,0,1,0x2a);
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_1);
    }
    uGpffff8944 = param_1;
    iGpffff8948 = FUN_00100680(param_1 * 0x6c,param_3);
    uVar5 = 0;
    if (param_1 != 0) {
      iVar4 = 0;
      do {
        uVar5 = uVar5 + 1;
        puVar3 = (undefined4 *)(iGpffff8948 + iVar4);
        *puVar3 = 0;
        iVar4 = iVar4 + 0x6c;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0x19] = 0;
        puVar3[0x1a] = 0;
      } while (uVar5 < param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}

// 0x0013c9b0  size 0x168
/* WARNING: Removing unreachable block (ram,0x0013c9e0) */

void FUN_0013c9b0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)0x387080;
  puVar3 = &uStack_38;
  do {
    uVar2 = uVar2 + 8;
    *puVar1 = *(undefined4 *)puVar3;
    puVar1[1] = *(undefined4 *)(puVar3 + 1);
    puVar1[2] = *(undefined4 *)(puVar3 + 2);
    puVar1[3] = *(undefined4 *)(puVar3 + 3);
    puVar1[4] = *(undefined4 *)(puVar3 + 4);
    puVar1[5] = *(undefined4 *)(puVar3 + 5);
    puVar1[6] = *(undefined4 *)(puVar3 + 6);
    puVar1[7] = *(undefined4 *)(puVar3 + 7);
    puVar1 = puVar1 + 8;
    puVar3 = puVar3 + 8;
  } while (uVar2 < 0x10);
  uStack_68 = 0x387080;
  uStack_6c = 0x40;
  uStack_60 = 0x3870c0;
  uStack_64 = 0x40;
  uStack_70 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  switch(param_1) {
  case 0x305:
    FUN_00132600(0x387084,uRam00387084,0x10);
    break;
  case 0x306:
    FUN_00132600(0x387084,uRam00387084,0xc);
  default:
  }
  FUN_0013bd50(uGpffff8934,&uStack_70);
  return;
}

// 0x0013cb20  size 0x94
bool FUN_0013cb20(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = iGpffff8948 + (int)param_1 * 0x6c;
  WaitSema(uGpffff894c);
  bVar1 = *(int *)(iVar2 + 0x3c) - 2U < 2;
  if (bVar1) {
    FUN_0013c9b0(0x30a,param_1);
    *(undefined4 *)(iVar2 + 0x3c) = 1;
    *(undefined4 *)(iVar2 + 0x40) = 0;
  }
  SignalSema(uGpffff894c);
  return bVar1;
}

// 0x0013cbc0  size 0xbc
undefined4 FUN_0013cbc0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = iGpffff8948 + (int)param_1 * 0x6c;
  WaitSema(uGpffff894c);
  if ((*(int *)(iVar2 + 0x40) != param_2) && (*(int *)(iVar2 + 0x3c) - 2U < 2)) {
    FUN_0013c9b0(0x309,param_1,param_2);
    uVar1 = 2;
    if (param_2 == 0) {
      uVar1 = 3;
    }
    uVar3 = 1;
    *(undefined4 *)(iVar2 + 0x3c) = uVar1;
    *(int *)(iVar2 + 0x40) = param_2;
  }
  SignalSema(uGpffff894c);
  return uVar3;
}

// 0x0013cc80  size 0x8c
bool FUN_0013cc80(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = iGpffff8948 + (int)param_1 * 0x6c;
  WaitSema(uGpffff894c);
  bVar1 = *(int *)(iVar2 + 0x3c) == 0;
  if (bVar1) {
    FUN_0013c9b0(0x308,param_1);
    *(undefined4 *)(iVar2 + 0x3c) = 1;
    *(undefined4 *)(iVar2 + 0x40) = 0;
  }
  SignalSema(uGpffff894c);
  return bVar1;
}

// 0x0013cd10  size 0x5c
void FUN_0013cd10(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = iGpffff8948 + (int)param_1 * 0x6c;
  if (param_2 != 0) {
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  FUN_0013c9b0(0x307,param_1,*(undefined4 *)(iVar1 + 0x2c));
  return;
}

// 0x0013cd70  size 0x50
undefined1 FUN_0013cd70(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = iGpffff8948 + param_1 * 0x6c;
  WaitSema(uGpffff894c);
  uVar1 = *(undefined1 *)(iVar2 + 0x3c);
  SignalSema(uGpffff894c);
  return uVar1;
}

// 0x0013cdc0  size 0x68
undefined4 FUN_0013cdc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = iGpffff8948 + param_1 * 0x6c;
  iVar1 = *(int *)(iVar4 + 0x30);
  if ((iVar1 == 0) || (lVar3 = FUN_0013c000(iVar1,0), -1 < lVar3)) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar4 + 0x34) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

// 0x0013ce30  size 0x7c
undefined8 FUN_0013ce30(undefined8 param_1)

{
  undefined8 uVar1;
  int *piVar2;
  
  piVar2 = (int *)(iGpffff8948 + (int)param_1 * 0x6c);
  WaitSema(uGpffff894c);
  uVar1 = FUN_0013c730(param_1,piVar2[8],*piVar2 * piVar2[9]);
  piVar2[0xb] = piVar2[0xd];
  SignalSema(uGpffff894c);
  return uVar1;
}

// 0x0013ceb0  size 0x60
void FUN_0013ceb0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = iGpffff8948 + param_1 * 0x6c;
  WaitSema(uGpffff894c);
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_2;
  SignalSema(uGpffff894c);
  return;
}

// 0x0013cf10  size 0xf0
void FUN_0013cf10(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *param_2;
  iVar2 = (int)param_1 * 0x6c;
  iVar1 = iGpffff8948 + iVar2;
  iStack_c = (int)(((float)(uint)param_2[1] * 4096.0) / 48000.0);
  uStack_8 = param_2[2];
  *(undefined4 *)(iVar1 + 4) = *param_2;
  *(undefined4 *)(iVar1 + 8) = param_2[1];
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = param_2[2];
  iVar2 = iGpffff8948 + iVar2;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  FUN_0013c9b0(0x306,param_1,&uStack_10);
  return;
}

// 0x0013d000  size 0xcc
void FUN_0013d000(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = *param_2;
  puVar1 = (undefined4 *)(iGpffff8948 + (int)param_1 * 0x6c);
  uStack_c = param_2[4];
  uStack_8 = param_2[3];
  uStack_4 = param_2[5];
  *puVar1 = *param_2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2[1];
  puVar1[4] = 0;
  puVar1[5] = param_2[2];
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_2[3];
  puVar1[9] = param_2[4];
  puVar1[10] = param_2[5];
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = param_2[6];
  FUN_0013c9b0(0x305,param_1,&uStack_10);
  return;
}

// 0x0013d0d0  size 0x9c
void FUN_0013d0d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0013be40(uGpffff8934,1);
  uGpffff8944 = 0;
  if (iGpffff8948 != 0) {
    FUN_00100290();
    iGpffff8948 = 0;
  }
  FUN_0013c9b0(0x301);
  FUN_0013be40(uGpffff8934,uVar1);
  FUN_0013bf50(0x387100);
  FUN_00132790((int)register0x000001c0 + -0x76b4);
  if (iGpffff893c != 0) {
    FUN_00100290();
    iGpffff893c = 0;
  }
  if (iGpffff8940 != 0) {
    FUN_00100290();
    iGpffff8940 = 0;
  }
  return;
}

// 0x0013d170  size 0xf0
bool FUN_0013d170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  uGpffff8938 = (undefined4)param_3;
  uGpffff893c = FUN_00100480(0x40,0x40,param_5);
  uGpffff8940 = FUN_00100480(0x1000,0x10,param_5);
  FUN_001327d0((int)register0x000001c0 + -0x76b4);
  lVar1 = FUN_0013bfa0(0x387100,param_3,param_4,0x40,uGpffff893c,0x1000,uGpffff8940,0x13c550);
  if (lVar1 != 0) {
    uVar2 = FUN_0013be40(uGpffff8934,1);
    FUN_0013c880(param_1,param_2,param_5);
    FUN_0013be40(uGpffff8934,uVar2);
  }
  return lVar1 != 0;
}

// 0x0013d260  size 0x9c
void FUN_0013d260(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0013be40(uGpffff8934,1);
  uGpffff8944 = 0;
  if (iGpffff8948 != 0) {
    FUN_00100290();
    iGpffff8948 = 0;
  }
  FUN_0013c9b0(0x301);
  FUN_0013be40(uGpffff8934,uVar1);
  FUN_0013bf50(0x387100);
  FUN_00132790((int)register0x000001c0 + -0x76b4);
  if (iGpffff893c != 0) {
    FUN_00100290();
    iGpffff893c = 0;
  }
  if (iGpffff8940 != 0) {
    FUN_00100290();
    iGpffff8940 = 0;
  }
  return;
}

// 0x0013d300  size 0x8
void FUN_0013d300(undefined4 param_1)

{
  uGpffff8934 = param_1;
  return;
}

// 0x0013d310  size 0x170
undefined4 FUN_0013d310(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  lVar2 = FUN_0013d620(0x200,param_2,param_1);
  if (lVar2 == -1) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_0013d620(0x204,1);
    if (lVar2 == -1) {
      uVar1 = 0;
    }
    else {
      uVar5 = 0;
      if (param_1 != 0) {
        do {
          lVar2 = FUN_0013d620(0x206,uVar5,0x100);
          if (lVar2 == -1) {
            return 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_1);
      }
      uGpffff8954 = param_1;
      iGpffff8958 = FUN_00100680(param_1 * 0x50,param_3);
      uVar5 = 0;
      if (param_1 != 0) {
        iVar4 = 0;
        do {
          uVar5 = uVar5 + 1;
          puVar3 = (undefined4 *)(iGpffff8958 + iVar4);
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          *puVar3 = 0;
          puVar3[5] = 0;
          iVar4 = iVar4 + 0x50;
          puVar3[4] = 0;
          puVar3[3] = 0;
          puVar3[1] = 2;
          puVar3[2] = puVar3 + 6;
          *(undefined4 *)puVar3[2] = 0;
          *(undefined4 *)(puVar3[2] + 4) = 0;
          *(undefined4 *)(puVar3[2] + 8) = 1;
          *(undefined4 **)(puVar3[2] + 0xc) = puVar3 + 10;
          **(undefined4 **)(puVar3[2] + 0xc) = 0;
          *(undefined4 **)(*(int *)(puVar3[2] + 0xc) + 4) = puVar3 + 0xc;
          puVar3[0xf] = puVar3 + 0xc;
          *(undefined1 *)((int)puVar3[0xf] + *(int *)puVar3[0xf] + 8) = 0;
        } while (uVar5 < param_1);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

// 0x0013d480  size 0x17c
void FUN_0013d480(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int aiStack_200 [128];
  
  uVar7 = 0;
  iVar8 = 0;
  if (uGpffff8954 != 0) {
    iVar6 = 0;
    piVar4 = aiStack_200;
    do {
      piVar5 = (int *)(iGpffff8958 + iVar6);
      if ((*piVar5 == 0) && (piVar1 = (int *)piVar5[0xf], piVar1[1] != 0)) {
        iVar8 = iVar8 + 1;
        *(undefined1 *)((int)piVar1 + *piVar1 + 8) = 1;
        *piVar4 = piVar5[0xf];
        piVar4[1] = piVar5[0xe];
        piVar4[2] = *(int *)piVar5[0xf] + 0x10;
        piVar4[3] = 0;
        piVar4 = piVar4 + 4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0x50;
    } while (uVar7 < uGpffff8954);
  }
  if (iVar8 != 0) {
    FlushCache(0);
    do {
      lVar2 = sceSifSetDma(aiStack_200,iVar8);
    } while (lVar2 == 0);
    do {
      lVar3 = sceSifDmaStat(lVar2);
    } while (-1 < lVar3);
  }
  uVar7 = 0;
  if (uGpffff8954 != 0) {
    iVar8 = 0;
    do {
      piVar4 = (int *)(iGpffff8958 + iVar8);
      if ((*piVar4 == 0) && (piVar5 = (int *)piVar4[0xf], piVar5[1] != 0)) {
        *(undefined1 *)((int)piVar5 + *piVar5 + 8) = 0;
        *(undefined4 *)(piVar4[0xf] + 4) = 0;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x50;
    } while (uVar7 < uGpffff8954);
  }
  return;
}

// 0x0013d600  size 0x20
void FUN_0013d600(int param_1)

{
  *(undefined4 *)(*(int *)(iGpffff8958 + param_1 * 0x50 + 0x3c) + 4) = 0;
  return;
}

// 0x0013d620  size 0x148
/* WARNING: Removing unreachable block (ram,0x0013d650) */

void FUN_0013d620(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)0x387200;
  puVar3 = &uStack_38;
  do {
    uVar2 = uVar2 + 8;
    *puVar1 = *(undefined4 *)puVar3;
    puVar1[1] = *(undefined4 *)(puVar3 + 1);
    puVar1[2] = *(undefined4 *)(puVar3 + 2);
    puVar1[3] = *(undefined4 *)(puVar3 + 3);
    puVar1[4] = *(undefined4 *)(puVar3 + 4);
    puVar1[5] = *(undefined4 *)(puVar3 + 5);
    puVar1[6] = *(undefined4 *)(puVar3 + 6);
    puVar1[7] = *(undefined4 *)(puVar3 + 7);
    puVar1 = puVar1 + 8;
    puVar3 = puVar3 + 8;
  } while (uVar2 < 0x10);
  uStack_68 = 0x387200;
  uStack_6c = 0x40;
  uStack_60 = 0x387240;
  uStack_64 = 0x40;
  uStack_70 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  switch(param_1) {
  case 0x205:
    FUN_00132600(0x387204,uRam00387204,0x1c);
  }
  FUN_0013bd50(uGpffff8950,&uStack_70);
  return;
}

// 0x0013d770  size 0x118
void FUN_0013d770(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  piVar1 = (int *)(iGpffff8958 + (int)param_1 * 0x50);
  if (*param_2 == 0) {
    *piVar1 = 0;
    piVar1[0xe] = param_2[5];
    piVar1[0xf] = param_2[3];
    *(int *)piVar1[0xf] = param_2[4] + -0x10;
    *(undefined4 *)(piVar1[0xf] + 4) = 0;
    *(int *)(*(int *)(piVar1[2] + 0xc) + 4) = piVar1[0xf];
    FUN_001247f0(piVar1 + 1);
    FUN_00124918(piVar1 + 1,0,0xc0);
    piVar1[0x11] = (int)(piVar1 + 1);
    piVar1[0x10] = 0;
    *(undefined1 *)(piVar1[0xf] + *(int *)piVar1[0xf] + 8) = 1;
  }
  else {
    *piVar1 = *param_2;
  }
  iStack_20 = *param_2;
  iStack_1c = param_2[1];
  iStack_18 = param_2[2];
  iStack_14 = param_2[5];
  iStack_10 = param_2[6];
  iStack_c = param_2[7];
  iStack_8 = param_2[8];
  FUN_0013d620(0x205,param_1,&iStack_20);
  return;
}

// 0x0013d890  size 0x58
void FUN_0013d890(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0013be40(uGpffff8950,1);
  if (iGpffff8958 != 0) {
    FUN_00100290();
    iGpffff8958 = 0;
  }
  uGpffff8954 = 0;
  FUN_0013d620(0x201);
  FUN_0013be40(uGpffff8950,uVar1);
  return;
}

// 0x0013d8f0  size 0x6c
undefined8 FUN_0013d8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0013be40(uGpffff8950,1);
  uVar2 = FUN_0013d310(param_1,param_2,param_3);
  FUN_0013be40(uGpffff8950,uVar1);
  return uVar2;
}

// 0x0013d960  size 0x64
void FUN_0013d960(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0013be40(uGpffff8950,1);
  if (iGpffff8958 != 0) {
    FUN_00100290();
    iGpffff8958 = 0;
  }
  uGpffff8954 = 0;
  FUN_0013d620(0x201);
  FUN_0013be40(uGpffff8950,uVar1);
  uGpffff8950 = 0;
  uGpffff8954 = 0;
  iGpffff8958 = 0;
  return;
}

// 0x0013d9d0  size 0x10
void FUN_0013d9d0(undefined4 param_1)

{
  uGpffff8950 = param_1;
  uGpffff8954 = 0;
  uGpffff8958 = 0;
  return;
}

// 0x0013d9e0  size 0x58
int * FUN_0013d9e0(int param_1,uint param_2)

{
  int *piVar1;
  
  if (param_2 < *(ushort *)(param_1 + 6)) {
    piVar1 = (int *)0x0;
    if (*(ushort *)(param_1 + 6) != 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        piVar1 = (int *)(param_1 + 0x10);
      }
      else {
        piVar1 = (int *)(param_1 + 0x80);
      }
    }
    for (; param_2 != 0; param_2 = param_2 - 1) {
      piVar1 = (int *)((int)piVar1 + *piVar1);
    }
  }
  else {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

// 0x0013da40  size 0x24
int FUN_0013da40(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(short *)(param_1 + 6) != 0) {
    if (*(char *)(param_1 + 5) == '\0') {
      iVar1 = param_1 + 0x10;
    }
    else {
      iVar1 = param_1 + 0x80;
    }
  }
  return iVar1;
}

// 0x0013da70  size 0x13c
void FUN_0013da70(int param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 6);
  piVar4 = (int *)0x0;
  if (uVar2 != 0) {
    if (*(char *)(param_1 + 5) == '\0') {
      piVar4 = (int *)(param_1 + 0x10);
    }
    else {
      piVar4 = (int *)(param_1 + 0x80);
    }
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      *(ushort *)((int)piVar4 + 0x1a) =
           *(ushort *)((int)piVar4 + 0x1a) & 0xfc0f |
           (ushort)((*(uint *)(&DAT_00361530 + (uint)*(byte *)((int)piVar4 + 0x13) * 4) & 0x3f) << 4
                   );
      if ((*(ulong *)(piVar4 + 6) & 0xfffff) >> 0xe == 0) {
        uVar1 = FUN_00140070(((ulong)*(ushort *)((int)piVar4 + 0x1a) & 0x3ff) >> 4,
                             (uint)(*(ushort *)((int)piVar4 + 0x26) >> 6) +
                             (uint)*(ushort *)(piVar4 + 5));
        *(ulong *)(piVar4 + 6) = *(ulong *)(piVar4 + 6) & 0xfffffffffff03fff | (uVar1 & 0x3f) << 0xe
        ;
      }
      uVar3 = uVar3 + 1;
      *(byte *)((int)piVar4 + 0x1e) =
           *(byte *)((int)piVar4 + 0x1e) & 0x87 |
           (byte)((*(uint *)(&DAT_00361530 + (*(byte *)((int)piVar4 + 0x12) & 0x3f) * 4) & 0xf) << 3
                 );
      piVar4 = (int *)((int)piVar4 + *piVar4);
    } while (uVar3 < uVar2);
  }
  return;
}

// 0x0013dbb0  size 0xcc
undefined4 FUN_0013dbb0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 == 0x14) || (param_1 == 0x2c)) || (param_1 == 0x24)) {
    uVar1 = 4;
  }
  else if ((param_1 == 0x13) || (param_1 == 0x1b)) {
    uVar1 = 5;
  }
  else if (((param_1 == 10) || (param_1 == 2)) || ((param_1 == 0x3a || (param_1 == 0x32)))) {
    uVar1 = 1;
  }
  else if ((param_1 == 1) || (param_1 == 0x31)) {
    uVar1 = 2;
  }
  else if ((param_1 == 0) || (param_1 == 0x30)) {
    uVar1 = 3;
  }
  return uVar1;
}

// 0x0013dc80  size 0x1c
undefined4 FUN_0013dc80(uint param_1)

{
  return *(undefined4 *)(&DAT_00361530 + (param_1 & 0xff) * 4);
}

// 0x0013dca0  size 0x70c
int FUN_0013dca0(ulong param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
                uint param_6,int param_7,long param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  ulong *puVar12;
  ulong uVar13;
  int *piStack_90;
  uint uStack_80;
  uint uStack_70;
  uint uStack_60;
  uint uStack_50;
  uint uStack_34;
  undefined4 uStack_30;
  int iStack_20;
  int iStack_10;
  
  iVar8 = 0x30;
  iStack_10 = 0;
  iStack_20 = 0;
  uVar7 = 0;
  uStack_30 = 0;
  uVar6 = 0;
  uStack_34 = 0;
  uVar10 = (uint)param_2;
  uVar9 = (uint)param_3;
  if (param_4 != 0) {
    uVar5 = param_1 & 0xff;
    do {
      uVar3 = 0;
      if (uVar5 == 5) {
        uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f));
      }
      else if (uVar5 == 4) {
        uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f)) >> 1;
      }
      else if (uVar5 == 3) {
        uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f)) * 4;
      }
      else if (uVar5 == 2) {
        uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f)) * 3;
      }
      else if (uVar5 == 1) {
        uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f)) * 2;
      }
      uVar6 = uVar6 + 1;
      iStack_10 = iStack_10 + param_7 * ((int)(param_7 + uVar3 + -1) / param_7);
    } while (uVar6 < param_4);
  }
  if (1 < param_4) {
    iVar8 = ((param_4 - 2) / 3) * 0xc + 0x40;
  }
  iVar8 = param_7 * ((iVar8 + param_7 + -1) / param_7);
  uVar5 = param_1 & 0xff;
  if (uVar5 != 5) {
    if (uVar5 != 4) goto LAB_0013df40;
    uVar6 = param_5 & 0xff;
    if (uVar6 == 5) {
      iVar4 = param_6 << 4;
LAB_0013de90:
      iVar4 = param_7 + iVar4;
    }
    else {
      if (uVar6 == 4) {
        iVar4 = (param_6 & 0xfffffff) << 3;
        goto LAB_0013de90;
      }
      if (uVar6 == 3) {
        iVar4 = param_6 << 6;
        goto LAB_0013de90;
      }
      if (uVar6 == 2) {
        iVar4 = param_6 * 0x30;
        goto LAB_0013de90;
      }
      if (uVar6 == 1) {
        iVar4 = param_6 << 5;
        goto LAB_0013de90;
      }
      iVar4 = param_7;
    }
    iStack_20 = param_7 * ((iVar4 + -1) / param_7);
    uVar7 = (undefined2)(param_6 << 4);
    uStack_30 = 0x10;
    uStack_34 = param_6;
    goto LAB_0013df40;
  }
  uVar6 = param_5 & 0xff;
  if (uVar6 == 5) {
    iVar4 = param_6 << 8;
LAB_0013df18:
    iVar4 = param_7 + iVar4;
  }
  else {
    if (uVar6 == 4) {
      iVar4 = (param_6 & 0xffffff) << 7;
      goto LAB_0013df18;
    }
    if (uVar6 == 3) {
      iVar4 = param_6 << 10;
      goto LAB_0013df18;
    }
    if (uVar6 == 2) {
      iVar4 = param_6 * 0x300;
      goto LAB_0013df18;
    }
    if (uVar6 == 1) {
      iVar4 = param_6 << 9;
      goto LAB_0013df18;
    }
    iVar4 = param_7;
  }
  iStack_20 = param_7 * ((iVar4 + -1) / param_7);
  uVar7 = (undefined2)(param_6 << 8);
  uStack_30 = 0x100;
  uStack_34 = param_6;
LAB_0013df40:
  if (param_8 != 0) {
    uVar13 = 0;
    piVar11 = (int *)param_8;
    *piVar11 = iStack_20 + iVar8 + iStack_10;
    piVar11[1] = iStack_20;
    piVar11[2] = iStack_10;
    *(short *)(piVar11 + 3) = (short)iVar8;
    *(undefined2 *)((int)piVar11 + 0xe) = uVar7;
    *(undefined1 *)(piVar11 + 4) = 0;
    *(char *)((int)piVar11 + 0x11) = (char)param_4;
    *(char *)((int)piVar11 + 0x12) = (char)param_5;
    *(char *)((int)piVar11 + 0x13) = (char)param_1;
    *(short *)(piVar11 + 5) = (short)param_2;
    *(short *)((int)piVar11 + 0x16) = (short)param_3;
    piVar11[6] = 0;
    piVar11[7] = 0;
    piVar11[8] = 0;
    piVar11[9] = 0;
    piVar11[10] = 0;
    piVar11[0xb] = 0;
    if (param_1 != 0) {
      *(ushort *)((int)piVar11 + 0x1a) =
           *(ushort *)((int)piVar11 + 0x1a) & 0xfc0f |
           (ushort)((*(uint *)(&DAT_00361530 + ((uint)param_1 & 0xff) * 4) & 0x3f) << 4);
      uVar13 = FUN_00140070(((ulong)*(ushort *)((int)piVar11 + 0x1a) & 0x3ff) >> 4,param_2);
      *(ulong *)(piVar11 + 6) =
           *(ulong *)(piVar11 + 6) & 0xfffffffffff03fff | (uVar13 & 0x3f) << 0xe;
      bVar1 = FUN_00140020(param_2);
      *(byte *)((int)piVar11 + 0x1b) = *(byte *)((int)piVar11 + 0x1b) & 0xc3 | (bVar1 & 0xf) << 2;
      uVar13 = FUN_00140020(param_3);
      *(ulong *)(piVar11 + 6) =
           *(ulong *)(piVar11 + 6) & 0xfffffffc3fffffff | (uVar13 & 0xf) << 0x1e;
      iVar4 = FUN_0013fe10(((ulong)*(ushort *)((int)piVar11 + 0x1a) & 0x3ff) >> 4,param_2,param_3);
      uVar13 = (ulong)iVar4;
    }
    if (param_5 != 0) {
      *(byte *)((int)piVar11 + 0x1e) =
           *(byte *)((int)piVar11 + 0x1e) & 0x87 |
           (byte)((*(uint *)(&DAT_00361530 + (param_5 & 0xff) * 4) & 0xf) << 3);
      *(ulong *)(piVar11 + 6) =
           *(ulong *)(piVar11 + 6) & 0xfff8001fffffffff | (uVar13 & 0x3fff) << 0x25;
      iVar4 = FUN_0013fe10(((ulong)*(byte *)((int)piVar11 + 0x1e) & 0x7f) >> 3,uStack_30,uStack_34);
      uVar13 = (ulong)((int)uVar13 + iVar4);
    }
    if (1 < param_4) {
      puVar12 = (ulong *)(piVar11 + 0xc);
      piVar11[0xc] = 0;
      piVar11[0xd] = 0;
      piStack_90 = piVar11 + 0x10;
      piVar11[0xe] = 0;
      piVar11[0xf] = 0;
      uStack_50 = 0;
      uStack_60 = 0xe;
      uVar6 = 0;
      uStack_70 = 0;
      uStack_80 = 0x14;
      if (param_4 != 0) {
        param_1 = param_1 & 0xff;
        do {
          uVar3 = 0;
          if (uVar5 == 5) {
            uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f));
          }
          else if (uVar5 == 4) {
            uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f)) >> 1;
          }
          else if (uVar5 == 3) {
            uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f)) * 4;
          }
          else if (uVar5 == 2) {
            uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f)) * 3;
          }
          else if (uVar5 == 1) {
            uVar3 = (uVar10 >> (uVar6 & 0x1f)) * (uVar9 >> (uVar6 & 0x1f)) * 2;
          }
          *piStack_90 = param_7 * ((int)(param_7 + uVar3 + -1) / param_7);
          iVar4 = (int)uVar13;
          if ((uVar6 != 0) && (uVar6 < 4)) {
            *puVar12 = *puVar12 | (ulong)(uint)(iVar4 << (uStack_50 & 0x1f));
            iVar2 = FUN_00140070(param_1,uVar10 >> (uVar6 & 0x1f));
            uVar3 = uStack_60 & 0x1f;
            uStack_50 = uStack_50 + 0x14;
            uStack_60 = uStack_60 + 0x14;
            *puVar12 = *puVar12 | (ulong)(uint)(iVar2 << uVar3);
          }
          if ((3 < uVar6) && (uVar6 < 7)) {
            *(ulong *)(piVar11 + 0xe) =
                 *(ulong *)(piVar11 + 0xe) | (ulong)(uint)(iVar4 << (uStack_70 & 0x1f));
            iVar2 = FUN_00140070(param_1,uVar10 >> (uVar6 & 0x1f));
            uVar3 = uStack_80 & 0x1f;
            uStack_70 = uStack_70 + 0x14;
            uStack_80 = uStack_80 + 0x14;
            *(ulong *)(piVar11 + 0xe) = *(ulong *)(piVar11 + 0xe) | (ulong)(uint)(iVar2 << uVar3);
          }
          iVar2 = FUN_0013fe10(param_1,uVar10 >> (uVar6 & 0x1f),uVar9 >> (uVar6 & 0x1f));
          uVar13 = (ulong)(iVar4 + iVar2);
          uVar6 = uVar6 + 1;
          piStack_90 = piStack_90 + 1;
        } while (uVar6 < param_4);
      }
    }
  }
  return iStack_20 + iVar8 + iStack_10;
}

// 0x0013e3d0  size 0x464
undefined4 FUN_0013e3d0(int param_1,long param_2,uint *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  
  iVar6 = (int)param_2;
  if (param_2 != 0) {
    if ((*(char *)(param_1 + 0x13) != '\x05') || (*(char *)(iVar6 + 0x13) != '\x04')) {
      return 0;
    }
    if (*(char *)(param_1 + 0x12) != *(char *)(iVar6 + 0x12)) {
      return 0;
    }
  }
  uVar9 = param_3[4];
  if ((((uVar9 & 1) == 0) && (uVar10 = *param_3, (uVar10 & 1) == 0)) && ((param_3[2] & 1) == 0)) {
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        iVar11 = 0;
      }
      else {
        iVar11 = param_1 + (uint)*(ushort *)(param_1 + 0xc);
      }
      uVar2 = *(ushort *)(param_1 + 0x14);
      uVar3 = 0;
      iVar11 = iVar11 + uVar10 + param_3[1] * (uint)uVar2;
      if (param_3[5] != 0) {
        do {
          uVar10 = 0;
          if (uVar9 == 0) {
            uVar10 = param_3[5];
          }
          else {
            do {
              puVar4 = (undefined1 *)(iVar11 + uVar10);
              uVar10 = uVar10 + 1;
              *puVar4 = (char)param_3[7];
              uVar9 = param_3[4];
            } while (uVar10 < uVar9);
            uVar10 = param_3[5];
          }
          uVar3 = uVar3 + 1;
          iVar11 = iVar11 + (uint)uVar2;
        } while (uVar3 < uVar10);
      }
    }
    else {
      if (*(char *)(param_1 + 0x11) == '\0') {
        iVar11 = 0;
      }
      else {
        iVar11 = param_1 + (uint)*(ushort *)(param_1 + 0xc);
      }
      if (*(char *)(iVar6 + 0x11) == '\0') {
        iVar13 = 0;
      }
      else {
        iVar13 = iVar6 + (uint)*(ushort *)(iVar6 + 0xc);
      }
      uVar2 = *(ushort *)(param_1 + 0x14);
      uVar3 = (uint)(*(ushort *)(iVar6 + 0x14) >> 1);
      pcVar12 = (char *)(iVar11 + uVar10 + param_3[1] * (uint)uVar2);
      uVar10 = 0;
      iVar13 = iVar13 + param_3[2] + param_3[3] * uVar3;
      if (param_3[5] != 0) {
        do {
          uVar7 = 0;
          if (uVar9 >> 1 == 0) {
            uVar7 = param_3[5];
          }
          else {
            pcVar14 = pcVar12;
            do {
              bVar1 = *(byte *)(iVar13 + uVar7);
              uVar7 = uVar7 + 1;
              *pcVar14 = (bVar1 & 0xf) + (char)param_3[7];
              pcVar14[1] = (char)((int)(bVar1 & 0xf0) >> 4) + (char)param_3[7];
              uVar9 = param_3[4];
              pcVar14 = pcVar14 + 2;
            } while (uVar7 < uVar9 >> 1);
            uVar7 = param_3[5];
          }
          uVar10 = uVar10 + 1;
          pcVar12 = pcVar12 + uVar2;
          iVar13 = iVar13 + uVar3;
        } while (uVar10 < uVar7);
      }
    }
    if (param_2 == 0) {
      if (*(short *)(param_1 + 0xe) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 8) + param_1 + (uint)*(ushort *)(param_1 + 0xc);
        if ((*(char *)(param_1 + 0x12) != '\x03') && (*(char *)(param_1 + 0x12) == '\x01')) {
        }
      }
      uVar9 = 0;
      do {
        uVar3 = param_3[7] + uVar9;
        uVar10 = uVar3 & 0x1f;
        if (7 < uVar10) {
          if (uVar10 < 0x10) {
            uVar3 = uVar3 + 8;
          }
          else if (uVar10 < 0x18) {
            uVar3 = uVar3 - 8;
          }
        }
        uVar9 = uVar9 + 1;
        *(undefined4 *)(iVar6 + uVar3 * 4) = 0;
      } while (uVar9 < 0x10);
    }
    else {
      if (*(short *)(param_1 + 0xe) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(param_1 + 8) + param_1 + (uint)*(ushort *)(param_1 + 0xc);
        if ((*(char *)(param_1 + 0x12) != '\x03') && (*(char *)(param_1 + 0x12) == '\x01')) {
        }
      }
      if (*(short *)(iVar6 + 0xe) == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)(*(int *)(iVar6 + 8) + iVar6 + (uint)*(ushort *)(iVar6 + 0xc));
        if ((*(char *)(iVar6 + 0x12) != '\x03') && (*(char *)(iVar6 + 0x12) == '\x01')) {
        }
      }
      uVar9 = 0;
      do {
        uVar3 = param_3[7] + uVar9;
        uVar10 = uVar3 & 0x1f;
        if (7 < uVar10) {
          if (uVar10 < 0x10) {
            uVar3 = uVar3 + 8;
          }
          else if (uVar10 < 0x18) {
            uVar3 = uVar3 - 8;
          }
        }
        uVar9 = uVar9 + 1;
        *(undefined4 *)(iVar11 + uVar3 * 4) = *puVar8;
        puVar8 = puVar8 + 1;
      } while (uVar9 < 0x10);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

// 0x0013e840  size 0x304
void FUN_0013e840(int param_1,uint *param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  *param_2 = (uint)*(byte *)(param_1 + 0x11);
  *(ushort *)(param_2 + 1) = *(ushort *)(param_1 + 0x26) >> 6;
  *(short *)((int)param_2 + 6) = (short)(((long)*(int *)(param_1 + 0x24) & 0x3fffffU) >> 0xc);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 0x14);
  *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(param_1 + 0x16);
  uVar1 = *(ushort *)(param_1 + 0xe);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(char *)(param_1 + 0x13) == '\x05') {
    uVar3 = (uint)(uVar1 >> 8);
  }
  else if (*(char *)(param_1 + 0x13) == '\x04') {
    uVar3 = (uint)(uVar1 >> 4);
  }
  else {
    uVar3 = 0;
  }
  param_2[3] = uVar3;
  if (param_2[3] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)(uint)*(ushort *)(param_1 + 0xe) / (int)param_2[3];
  }
  param_2[4] = uVar3;
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_2 + 10) =
       (ulong)*(byte *)(param_1 + 0x2a) << 0x20 |
       (ulong)*(byte *)(param_1 + 0x28) | (ulong)(*(byte *)(param_1 + 0x29) >> 7) << 0xf;
  *(ulong *)(param_2 + 0xc) = (ulong)(*(byte *)(param_1 + 0x2b) >> 7);
  *(ulong *)(param_2 + 0xe) = ((ulong)*(byte *)(param_1 + 0x2b) & 0x7f) >> 6;
  *(ulong *)(param_2 + 0x10) = (ulong)*(uint *)(param_1 + 0x2c);
  puVar4 = (undefined8 *)0x0;
  if (1 < *(byte *)(param_1 + 0x11)) {
    puVar4 = (undefined8 *)(param_1 + 0x30);
  }
  if (puVar4 == (undefined8 *)0x0) {
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
  }
  else {
    *(undefined8 *)(param_2 + 0x12) = *puVar4;
    *(undefined8 *)(param_2 + 0x14) = puVar4[1];
  }
  sVar2 = (short)param_3;
  *(ulong *)(param_2 + 0x16) =
       (ulong)*(ushort *)((int)param_2 + 6) << 0x18 |
       (ulong)(ushort)param_2[1] << 4 | 10 |
       (long)(int)((uint)(ushort)param_2[1] + (uint)(ushort)param_2[2] + -1) << 0xe |
       (long)(int)((uint)*(ushort *)((int)param_2 + 6) + (uint)*(ushort *)((int)param_2 + 10) + -1)
       << 0x22;
  *(ushort *)(param_2 + 6) =
       (ushort)param_2[6] & 0xc000 | ((ushort)param_2[6] & 0x3fff) + sVar2 & 0x3fff;
  *(ulong *)(param_2 + 6) =
       *(ulong *)(param_2 + 6) & 0xfff8001fffffffff |
       (((*(ulong *)(param_2 + 6) & 0x7ffffffffffff) >> 0x25) + (param_4 & 0xffffffff) & 0x3fff) <<
       0x25;
  if (1 < *param_2) {
    param_3 = param_3 & 0xffffffff;
    *(ushort *)(param_2 + 0x12) =
         (ushort)param_2[0x12] & 0xc000 | ((ushort)param_2[0x12] & 0x3fff) + sVar2 & 0x3fff;
    *(ulong *)(param_2 + 0x12) =
         *(ulong *)(param_2 + 0x12) & 0xfffffffc000fffff |
         (((*(ulong *)(param_2 + 0x12) & 0x3ffffffff) >> 0x14) + param_3 & 0x3fff) << 0x14;
    *(ulong *)(param_2 + 0x12) =
         *(ulong *)(param_2 + 0x12) & 0xffc000ffffffffff |
         (((*(ulong *)(param_2 + 0x12) & 0x3fffffffffffff) >> 0x28) + param_3 & 0x3fff) << 0x28;
    *(ushort *)(param_2 + 0x14) =
         (ushort)param_2[0x14] & 0xc000 | ((ushort)param_2[0x14] & 0x3fff) + sVar2 & 0x3fff;
    *(ulong *)(param_2 + 0x14) =
         *(ulong *)(param_2 + 0x14) & 0xfffffffc000fffff |
         (((*(ulong *)(param_2 + 0x14) & 0x3ffffffff) >> 0x14) + param_3 & 0x3fff) << 0x14;
    *(ulong *)(param_2 + 0x14) =
         *(ulong *)(param_2 + 0x14) & 0xffc000ffffffffff |
         (((*(ulong *)(param_2 + 0x14) & 0x3fffffffffffff) >> 0x28) + param_3 & 0x3fff) << 0x28;
  }
  return;
}

// 0x0013eb50  size 0x7c
int FUN_0013eb50(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0xe) == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 8) + param_1 + (uint)*(ushort *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x13) == '\x05') {
    iVar3 = param_2 << 8;
  }
  else {
    if (*(char *)(param_1 + 0x13) != '\x04') {
      cVar1 = *(char *)(param_1 + 0x12);
      goto LAB_0013eb98;
    }
    iVar3 = param_2 << 4;
  }
  cVar1 = *(char *)(param_1 + 0x12);
LAB_0013eb98:
  if (cVar1 == '\x03') {
    iVar2 = iVar2 + iVar3 * 4;
  }
  else if (cVar1 == '\x01') {
    iVar2 = iVar2 + iVar3 * 2;
  }
  return iVar2;
}

// 0x0013ebd0  size 0x4c
ushort FUN_0013ebd0(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xe);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x13) == '\x05') {
    uVar1 = uVar1 >> 8;
  }
  else if (*(char *)(param_1 + 0x13) == '\x04') {
    uVar1 = uVar1 >> 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0013ec20  size 0xd0
int FUN_0013ec20(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < *(byte *)(param_1 + 0x11)) {
    iVar2 = 0;
    iVar1 = param_1 + (uint)*(ushort *)(param_1 + 0xc);
    if (1 < *(byte *)(param_1 + 0x11)) {
      iVar2 = param_1 + 0x30;
    }
    uVar3 = 0;
    if (param_2 != 0) {
      if (8 < param_2) {
        iVar4 = iVar2;
        do {
          uVar3 = uVar3 + 8;
          iVar1 = iVar1 + *(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 0x14) + *(int *)(iVar4 + 0x18) +
                  *(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 0x20) + *(int *)(iVar4 + 0x24) +
                  *(int *)(iVar4 + 0x28) + *(int *)(iVar4 + 0x2c);
          iVar4 = iVar4 + 0x20;
        } while (uVar3 < param_2 - 8);
      }
      if (uVar3 < param_2) {
        iVar2 = iVar2 + uVar3 * 4;
        do {
          uVar3 = uVar3 + 1;
          iVar1 = iVar1 + *(int *)(iVar2 + 0x10);
          iVar2 = iVar2 + 4;
        } while (uVar3 < param_2);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

// 0x0013ecf0  size 0x1c
int FUN_0013ecf0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 0x11)) {
    iVar1 = param_1 + 0x30;
  }
  return iVar1;
}

// 0x0013ed10  size 0x1cc
void FUN_0013ed10(int param_1,int param_2,ulong *param_3,ulong *param_4)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  *param_3 = *(ulong *)(param_1 + 0x18);
  *param_4 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar5 = 2;
    uVar6 = (*(ulong *)(param_1 + 0x40) & 0x3fffff) >> 0xc;
    if (((ulong)*(byte *)(param_1 + 0x1e) & 0x7f) >> 3 == 2) {
      uVar1 = *(ushort *)(param_1 + 0x1a);
    }
    else {
      iVar5 = 4;
      uVar1 = *(ushort *)(param_1 + 0x1a);
    }
    uVar4 = ((ulong)uVar1 & 0x3ff) >> 4;
    if (uVar4 == 0x14) {
      uVar3 = (int)(((ulong)*(ushort *)(param_1 + 0x40) & 0xfff) >> 6) + param_2;
      *param_4 = *param_3;
      lVar2 = (long)(int)(iVar5 * ((int)uVar6 + (uVar3 & 0xfffffffe) >> 4));
      *param_4 = *param_4 & 0xfff8001fffffffff |
                 (((*param_4 & 0x7ffffffffffff) >> 0x25) + lVar2 & 0x3fff) << 0x25;
      *(ushort *)((int)param_4 + 2) = *(ushort *)((int)param_4 + 2) & 0xfc0f | 0x130;
      *(byte *)((int)param_4 + 7) = *(byte *)((int)param_4 + 7) & 0x1f | 0x20;
      *param_3 = *param_3 & 0xfff8001fffffffff |
                 (((*param_3 & 0x7ffffffffffff) >> 0x25) + lVar2 & 0x3fff) << 0x25;
      *(byte *)((int)param_3 + 7) = *(byte *)((int)param_3 + 7) & 0x1f;
      *(byte *)((int)param_3 + 7) =
           *(byte *)((int)param_3 + 7) & 0xe0 | (char)uVar6 + (char)uVar3 & 0xfU;
    }
    else if (uVar4 == 0x13) {
      *param_3 = *param_3 & 0xfff8001fffffffff |
                 (((*param_3 & 0x7ffffffffffff) >> 0x25) + (ulong)(uint)(param_2 * iVar5) & 0x3fff)
                 << 0x25;
    }
  }
  return;
}

// 0x0013eee0  size 0x180
void FUN_0013eee0(uint *param_1,ulong param_2,ulong param_3)

{
  short sVar1;
  
  sVar1 = (short)param_2;
  *(ushort *)(param_1 + 6) =
       (ushort)param_1[6] & 0xc000 | ((ushort)param_1[6] & 0x3fff) + sVar1 & 0x3fff;
  *(ulong *)(param_1 + 6) =
       *(ulong *)(param_1 + 6) & 0xfff8001fffffffff |
       (((*(ulong *)(param_1 + 6) & 0x7ffffffffffff) >> 0x25) + (param_3 & 0xffffffff) & 0x3fff) <<
       0x25;
  if (1 < *param_1) {
    param_2 = param_2 & 0xffffffff;
    *(ushort *)(param_1 + 0x12) =
         (ushort)param_1[0x12] & 0xc000 | ((ushort)param_1[0x12] & 0x3fff) + sVar1 & 0x3fff;
    *(ulong *)(param_1 + 0x12) =
         *(ulong *)(param_1 + 0x12) & 0xfffffffc000fffff |
         (((*(ulong *)(param_1 + 0x12) & 0x3ffffffff) >> 0x14) + param_2 & 0x3fff) << 0x14;
    *(ulong *)(param_1 + 0x12) =
         *(ulong *)(param_1 + 0x12) & 0xffc000ffffffffff |
         (((*(ulong *)(param_1 + 0x12) & 0x3fffffffffffff) >> 0x28) + param_2 & 0x3fff) << 0x28;
    *(ushort *)(param_1 + 0x14) =
         (ushort)param_1[0x14] & 0xc000 | ((ushort)param_1[0x14] & 0x3fff) + sVar1 & 0x3fff;
    *(ulong *)(param_1 + 0x14) =
         *(ulong *)(param_1 + 0x14) & 0xfffffffc000fffff |
         (((*(ulong *)(param_1 + 0x14) & 0x3ffffffff) >> 0x14) + param_2 & 0x3fff) << 0x14;
    *(ulong *)(param_1 + 0x14) =
         *(ulong *)(param_1 + 0x14) & 0xffc000ffffffffff |
         (((*(ulong *)(param_1 + 0x14) & 0x3fffffffffffff) >> 0x28) + param_2 & 0x3fff) << 0x28;
  }
  return;
}

// 0x0013f060  size 0x208
void FUN_0013f060(int *param_1,uint param_2,byte param_3,ushort param_4,undefined1 param_5,
                 undefined1 param_6)

{
  byte bVar1;
  bool bVar2;
  
  bVar2 = ((ulong)*(ushort *)((int)param_1 + 0x1a) & 0x3ff) >> 4 == 1;
  if (!bVar2) {
    bVar2 = ((ulong)*(byte *)((int)param_1 + 0x1e) & 0x7f) >> 3 == 1;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb | (bVar2 ^ 1U) << 2;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xe7 | (byte)((param_2 & 3) << 3);
  bVar1 = (byte)(param_2 >> 0x18);
  *(byte *)((int)param_1 + 0x1f) =
       *(byte *)((int)param_1 + 0x1f) & 0x1f | (byte)(((param_2 & 0xf0) >> 4 & 7) << 5);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe | (byte)(param_2 >> 8) & 1;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xe3 | (byte)((*param_1 - 1U & 7) << 2);
  *(byte *)(param_1 + 8) =
       *(byte *)(param_1 + 8) & 0xdf | (byte)(((param_2 & 0xf000) >> 0xc & 1) << 5);
  *(ushort *)(param_1 + 8) =
       *(ushort *)(param_1 + 8) & 0xfe3f | (ushort)(((param_2 & 0xf0000) >> 0x10 & 7) << 6);
  *(byte *)((int)param_1 + 0x22) = *(byte *)((int)param_1 + 0x22) & 0xe7 | (param_3 & 3) << 3;
  *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xf000 | param_4 & 0xfff;
  *(undefined1 *)(param_1 + 10) = param_5;
  *(byte *)((int)param_1 + 0x29) =
       *(byte *)((int)param_1 + 0x29) & 0x7f | (byte)(((param_2 & 0xf00000) >> 0x14 & 1) << 7);
  *(undefined1 *)(param_1 + 0xb) = param_6;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe | bVar1 & 1;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe | bVar1 >> 4 & 1;
  return;
}

// 0x0013f270  size 0xc8
int FUN_0013f270(int param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar1 = (int *)FUN_0013da40();
  uVar3 = 0;
  if (*(short *)(param_1 + 6) != 0) {
    do {
      if (param_3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)param_3 + iVar4 * 0x10;
      }
      iVar2 = FUN_0013f340(piVar1,param_2,iVar2,param_4,param_5);
      iVar4 = iVar4 + iVar2;
      uVar3 = uVar3 + 1;
      piVar1 = (int *)((int)piVar1 + *piVar1);
    } while (uVar3 < *(ushort *)(param_1 + 6));
  }
  return iVar4;
}

// 0x0013f340  size 0x5ec
int FUN_0013f340(undefined8 param_1,uint param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int unaff_s6_lo;
  int iVar16;
  int iVar17;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  iVar15 = 0;
  iVar10 = (int)param_1;
  if ((*(char *)(iVar10 + 0x11) != '\0') && ((param_2 & 0x200) == 0)) {
    puVar3 = (ulong *)FUN_0013ecf0();
    uVar13 = 0;
    if (*(char *)(iVar10 + 0x11) != '\0') {
      do {
        switch(uVar13) {
        case 0:
          uStack_20 = *(ushort *)(iVar10 + 0x18) & 0x3fff;
          uStack_1c = (uint)((*(ulong *)(iVar10 + 0x18) & 0xfffff) >> 0xe);
          break;
        case 1:
          uStack_20 = (ushort)*puVar3 & 0x3fff;
          uStack_1c = (uint)((*puVar3 & 0xfffff) >> 0xe);
          break;
        case 2:
          uStack_20 = (uint)((*puVar3 & 0x3ffffffff) >> 0x14);
          uStack_1c = (uint)(*(byte *)((int)puVar3 + 4) >> 2);
          break;
        case 3:
          uStack_20 = ((uint)(*puVar3 >> 0x20) & 0x3fffff) >> 8;
          uStack_1c = (uint)(((ulong)*(ushort *)((int)puVar3 + 6) & 0xfff) >> 6);
          break;
        case 4:
          uStack_20 = (ushort)puVar3[1] & 0x3fff;
          uStack_1c = (uint)((puVar3[1] & 0xfffff) >> 0xe);
          break;
        case 5:
          uStack_20 = (uint)((puVar3[1] & 0x3ffffffff) >> 0x14);
          uStack_1c = (uint)(*(byte *)((int)puVar3 + 0xc) >> 2);
          break;
        case 6:
          uStack_20 = ((uint)(puVar3[1] >> 0x20) & 0x3fffff) >> 8;
          uStack_1c = (uint)(((ulong)*(ushort *)((int)puVar3 + 0xe) & 0xfff) >> 6);
        }
        uStack_20 = uStack_20 + param_4;
        iStack_18 = (int)(((ulong)*(ushort *)(iVar10 + 0x1a) & 0x3ff) >> 4);
        uVar1 = *(ushort *)(iVar10 + 0x26) >> 6;
        uStack_10 = (uint)(((long)*(int *)(iVar10 + 0x24) & 0x3fffffU) >> 0xc);
        uStack_c = (int)(uint)*(ushort *)(iVar10 + 0x14) >> (uVar13 & 0x1f);
        uStack_8 = (int)(uint)*(ushort *)(iVar10 + 0x16) >> (uVar13 & 0x1f);
        if ((*(byte *)(iVar10 + 0x10) & 0xf0) != 0) {
          iVar8 = (int)(*(byte *)(iVar10 + 0x10) & 0xf0) >> 4;
          if (((iVar8 == 3) && ((uStack_c & 0xf) == 0)) && ((uStack_8 & 0xf) == 0)) {
            iStack_18 = 0;
          }
          else if (((iVar8 == 1) && ((uStack_c & 0x1f) == 0)) && ((uStack_8 & 0xf) == 0)) {
            iStack_18 = 2;
          }
        }
        if (((ulong)*(ushort *)(iVar10 + 0x1a) & 0x3ff) >> 4 != (long)iStack_18) {
          uVar1 = *(ushort *)(iVar10 + 0x26) >> 7;
          uStack_1c = uStack_1c >> 1;
          uStack_10 = uStack_10 >> 1;
          uStack_c = uStack_c >> 1;
          uStack_8 = uStack_8 >> 1;
        }
        uStack_14 = (uint)uVar1;
        unaff_s6_lo = FUN_0013ec20(param_1,uVar13);
        if ((param_3 != 0) || ((param_2 & 0x400) != 0)) {
          iVar8 = FUN_0013f950(&uStack_20,unaff_s6_lo,param_2,param_3);
          iVar15 = iVar15 + iVar8;
          param_3 = param_3 + iVar8 * 0x10;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(byte *)(iVar10 + 0x11));
    }
  }
  if ((*(short *)(iVar10 + 0xe) != 0) && ((param_2 & 0x100) == 0)) {
    iVar8 = 2;
    uVar9 = ((ulong)*(byte *)(iVar10 + 0x1e) & 0x7f) >> 3;
    iStack_18 = (int)uVar9;
    uVar13 = ((uint)((ulong)*(undefined8 *)(iVar10 + 0x18) >> 0x20) & 0x7ffff) >> 5;
    if (uVar9 == 2) {
      uVar1 = *(ushort *)(iVar10 + 0x2c);
    }
    else {
      iVar8 = 4;
      uVar1 = *(ushort *)(iVar10 + 0x2c);
    }
    iVar2 = *(int *)(iVar10 + 0x2c);
    iVar4 = FUN_0013eb50(param_1,0);
    uVar12 = 0;
    lVar7 = FUN_0013ebd0(param_1);
    if (lVar7 != 0) {
      iVar14 = 0;
      iVar16 = 0;
      iVar17 = 0;
      do {
        uVar9 = ((ulong)*(ushort *)(iVar10 + 0x1a) & 0x3ff) >> 4;
        if (uVar9 == 0x14) {
          uVar11 = (int)(((ulong)uVar1 & 0xfff) >> 6) + uVar12;
          uVar6 = (int)(((long)iVar2 & 0x3fffffU) >> 0xc) + (uVar11 & 0xfffffffe);
          uStack_10 = uVar6 & 0xf;
          uStack_14 = (uVar11 & 1) << 3;
          uStack_1c = 1;
          uStack_c = 8;
          uStack_20 = param_5 + uVar13 + iVar8 * (uVar6 >> 4);
          uStack_8 = 2;
          unaff_s6_lo = iVar4 + iVar8 * iVar14;
        }
        else if (uVar9 == 0x13) {
          uStack_14 = 0;
          uStack_20 = param_5 + uVar13 + iVar16;
          uStack_10 = 0;
          uStack_1c = 1;
          uStack_c = 0x10;
          uStack_8 = 0x10;
          unaff_s6_lo = iVar4 + iVar8 * iVar17;
        }
        if ((param_3 != 0) || ((param_2 & 0x400) != 0)) {
          iVar5 = FUN_0013f950(&uStack_20,unaff_s6_lo,param_2,param_3);
          iVar15 = iVar15 + iVar5;
          param_3 = param_3 + iVar5 * 0x10;
        }
        iVar14 = iVar14 + 0x10;
        iVar16 = iVar16 + iVar8;
        iVar17 = iVar17 + 0x100;
        uVar12 = uVar12 + 1;
        uVar6 = FUN_0013ebd0(param_1);
      } while (uVar12 < uVar6);
    }
  }
  return iVar15;
}

// 0x0013f950  size 0x4bc
int FUN_0013f950(uint *param_1,int param_2,ulong param_3,uint *param_4)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar16 = 0;
  uVar15 = 0;
  uVar13 = 1;
  iVar12 = 0;
  cVar2 = FUN_0013dbb0(param_1[2]);
  if (cVar2 == '\x04') {
    uVar13 = param_1[5] >> 1;
  }
  else if (cVar2 == '\x05') {
    uVar13 = param_1[5];
  }
  else if (cVar2 == '\x01') {
    uVar13 = param_1[5] << 1;
  }
  else if (cVar2 == '\x02') {
    uVar13 = param_1[5] * 3;
  }
  else if (cVar2 == '\x03') {
    uVar13 = param_1[5] << 2;
  }
  iVar7 = 0x7ffc0 / (int)uVar13;
  uVar14 = (uint)((param_3 & 1) != 0);
  bVar1 = (param_3 & 2) != 0;
  if ((param_3 & 4) != 0) {
    uVar16 = 0x11000000;
  }
  if ((param_3 & 0x10) != 0) {
    uVar16 = 0x13000000;
  }
  if ((param_3 & 0x40) != 0) {
    uVar16 = 0x10000000;
  }
  if ((param_3 & 8) != 0) {
    uVar15 = 0x11000000;
  }
  if ((param_3 & 0x20) != 0) {
    uVar15 = 0x13000000;
  }
  if ((param_3 & 0x80) != 0) {
    uVar15 = 0x10000000;
  }
  uVar11 = param_1[6];
  uVar6 = 0;
  if (uVar11 != 0) {
    do {
      if ((param_3 & 0x400) == 0) {
        if ((param_4 < &DAT_70000000) || ((uint *)0x70004000 < param_4)) {
          puVar3 = param_4 + iVar12 * 4;
        }
        else {
          puVar3 = param_4;
        }
      }
      else {
        puVar3 = (uint *)0x0;
      }
      if (uVar11 < uVar6 + iVar7) {
        iVar7 = uVar11 - uVar6;
      }
      uVar11 = uVar13 * iVar7 + 0xf >> 4;
      if ((param_3 & 0x400) == 0) {
        iVar5 = 2;
        *puVar3 = uVar14 + 6 | 0x10000000;
        puVar3[1] = 0;
        puVar3[2] = uVar16;
        puVar3[3] = uVar14 + 6 | 0x50000000;
        *(ulong *)(puVar3 + 4) = CONCAT44(0x10000000,uVar14 + 4);
        puVar3[6] = 0xe;
        puVar3[7] = 0;
        if (uVar14 != 0) {
          iVar5 = 3;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0x3f;
          puVar3[0xb] = 0;
        }
        puVar10 = puVar3 + (iVar5 + 2) * 4;
        puVar9 = puVar3 + (iVar5 + 3) * 4;
        *(ulong *)(puVar3 + iVar5 * 4) =
             (ulong)param_1[2] << 0x38 | (ulong)*param_1 << 0x20 | (ulong)param_1[1] << 0x30;
        *(ulong *)((int)(puVar3 + iVar5 * 4) + 8) = 0x50;
        iVar4 = iVar5 + 6;
        puVar8 = puVar3 + (iVar5 + 5) * 4;
        *(ulong *)(puVar3 + (iVar5 + 1) * 4) =
             (ulong)param_1[3] << 0x20 | (ulong)(param_1[4] + uVar6) << 0x30;
        *(ulong *)((int)(puVar3 + (iVar5 + 1) * 4) + 8) = 0x51;
        *(ulong *)puVar10 = CONCAT44(iVar7,param_1[5]);
        puVar10[2] = 0x52;
        puVar10[3] = 0;
        puVar9[0] = 0;
        puVar9[1] = 0;
        puVar9[2] = 0x53;
        puVar9[3] = 0;
        *(ulong *)(puVar3 + (iVar5 + 4) * 4) =
             (long)(int)uVar11 | (ulong)((bVar1 ^ 1) << 0xf) | 0x800000000000000;
        *(ulong *)((int)(puVar3 + (iVar5 + 4) * 4) + 8) = 0;
        *puVar8 = uVar11 | 0x30000000;
        puVar8[1] = param_2 + uVar13 * uVar6 & 0xfffffff;
        puVar8[2] = 0;
        puVar8[3] = uVar11 | 0x50000000;
        if (bVar1) {
          puVar10 = puVar3 + iVar4 * 4;
          puVar9 = puVar3 + (iVar5 + 7) * 4;
          *puVar10 = (uint)&DAT_10000002;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar8 = puVar3 + (iVar5 + 8) * 4;
          iVar4 = iVar5 + 9;
          puVar10[3] = 0x50000002;
          puVar9[0] = 0x8001;
          puVar9[1] = 0x10000000;
          puVar9[2] = 0xe;
          puVar9[3] = 0;
          puVar8[0] = 0;
          puVar8[1] = 0;
          puVar8[2] = 0x3f;
          puVar8[3] = 0;
        }
        if (uVar15 != 0) {
          puVar3 = puVar3 + iVar4 * 4;
          iVar4 = iVar4 + 1;
          *puVar3 = 0x10000000;
          puVar3[1] = 0;
          puVar3[2] = uVar15;
          puVar3[3] = 0;
        }
      }
      else {
        iVar4 = 0xd;
      }
      uVar6 = uVar6 + iVar7;
      iGpffff895c = iGpffff895c + uVar11 + iVar4;
      uVar11 = param_1[6];
      iVar12 = iVar12 + iVar4;
    } while (uVar6 < uVar11);
  }
  return iVar12;
}

// 0x0013fe10  size 0x104
int FUN_0013fe10(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0x14) {
    iVar1 = (param_2 + 0x7fU >> 7) * (param_3 + 0x7fU >> 7);
  }
  else if (param_1 == 0x13) {
    iVar1 = (param_2 + 0x7fU >> 7) * (param_3 + 0x3fU >> 6);
  }
  else if ((((param_1 == 0x3a) || (param_1 == 0x32)) || (param_1 == 10)) || (param_1 == 2)) {
    iVar1 = (param_2 + 0x3fU >> 6) * (param_3 + 0x3fU >> 6);
  }
  else {
    if (((((param_1 != 0x31) && (param_1 != 0x30)) &&
         ((param_1 != 1 && ((param_1 != 0 && (param_1 != 0x2c)))))) && (param_1 != 0x24)) &&
       (param_1 != 0x1b)) {
      return 0;
    }
    iVar1 = (param_2 + 0x3fU >> 6) * (param_3 + 0x1fU >> 5);
  }
  return iVar1 << 5;
}

// 0x0013ff20  size 0x100
int FUN_0013ff20(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0x14) {
    iVar1 = (param_2 + 0x7fU >> 7) * (param_3 + 0x7fU >> 7);
  }
  else if (param_1 == 0x13) {
    iVar1 = (param_2 + 0x7fU >> 7) * (param_3 + 0x3fU >> 6);
  }
  else if ((((param_1 == 0x3a) || (param_1 == 0x32)) || (param_1 == 10)) || (param_1 == 2)) {
    iVar1 = (param_2 + 0x3fU >> 6) * (param_3 + 0x3fU >> 6);
  }
  else if (((((param_1 == 0x31) || (param_1 == 0x30)) ||
            ((param_1 == 1 || ((param_1 == 0 || (param_1 == 0x2c)))))) || (param_1 == 0x24)) ||
          (param_1 == 0x1b)) {
    iVar1 = (param_2 + 0x3fU >> 6) * (param_3 + 0x1fU >> 5);
  }
  return iVar1;
}

