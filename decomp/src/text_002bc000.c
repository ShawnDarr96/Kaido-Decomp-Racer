// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002bc000 - 0x002c0000
#include "ghidra_types.h"

// 0x002bc0b0  size 0x58
undefined4 FUN_002bc0b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x4c) != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x18;
  } while (iVar2 < 0xc);
  if ((iRam0036f7e4 == 0) || (*(int *)(iRam0036f7e4 + 4) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002bc110  size 0x20
undefined2 FUN_002bc110(int param_1)

{
  return *(undefined2 *)(*(int *)(iRam0036f7e4 + 8) + param_1 * 0xc);
}

// 0x002bc130  size 0x1c
int FUN_002bc130(int param_1)

{
  return *(int *)(iRam0036f7e4 + 8) + param_1 * 0xc;
}

// 0x002bc150  size 0x50
bool FUN_002bc150(long param_1)

{
  int iVar1;
  
  if (0xb < param_1) {
    iVar1 = FUN_0017bf40();
    *(undefined2 *)(iVar1 + (int)param_1 * 0x858 + -0x5bac) = 0;
  }
  return 0xb < param_1;
}

// 0x002bc1a0  size 0x50
bool FUN_002bc1a0(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 < 0xc) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_0017bf40();
    bVar1 = *(short *)(iVar2 + (int)param_1 * 0x858 + -0x5bac) != 0;
  }
  return bVar1;
}

// 0x002bc1f0  size 0x8
undefined4 FUN_002bc1f0(void)

{
  return uRam0036f7e0;
}

// 0x002bc200  size 0x1ec
void FUN_002bc200(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (iRam0036f7e4 != 0) {
    if (*(int *)(iRam0036f7e4 + 8) != 0) {
      FUN_00100290();
      *(undefined4 *)(iRam0036f7e4 + 8) = 0;
    }
    if (iRam0036f7e4 != 0) {
      FUN_00100290();
      iRam0036f7e4 = 0;
    }
  }
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iRam0036f7e0 + iVar2;
    FUN_002b1820(iVar1 + 0x158);
    FUN_002afbd0(iVar1 + 0x1ec);
    if (*(int *)(iVar1 + 0x2d8) != 0) {
      FUN_00100290();
      *(undefined4 *)(iVar1 + 0x2d8) = 0;
    }
    *(undefined4 *)(iVar1 + 0x2dc) = 0;
    *(undefined4 *)(iVar1 + 0x2e0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2e4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2e8) = 0;
    *(undefined4 *)(iVar1 + 0x1e8) = 0;
    *(undefined4 *)(iVar1 + 0x2d0) = 0;
    *(undefined4 *)(iVar1 + 0x2ec) = 0;
    *(undefined4 *)(iVar1 + 0x2f0) = 0;
    *(undefined4 *)(iVar1 + 0x2fc) = 0;
    *(undefined4 *)(iVar1 + 0x2f4) = 0;
    FUN_001325d0(iVar1 + 0x300,0,0xc00);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x2f8) = 0;
    iVar2 = iVar2 + 0xda8;
  } while (iVar3 < 8);
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iRam0036f7e0 + iVar2;
    FUN_002b1820(iVar1 + 0x6e98);
    FUN_002afbd0(iVar1 + 0x6f2c);
    if (*(int *)(iVar1 + 0x7018) != 0) {
      FUN_00100290();
      *(undefined4 *)(iVar1 + 0x7018) = 0;
    }
    *(undefined4 *)(iVar1 + 0x701c) = 0;
    *(undefined4 *)(iVar1 + 0x7020) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7024) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7028) = 0;
    *(undefined4 *)(iVar1 + 0x6f28) = 0;
    *(undefined4 *)(iVar1 + 0x7010) = 0;
    *(undefined4 *)(iVar1 + 0x702c) = 0;
    *(undefined4 *)(iVar1 + 0x7030) = 0;
    *(undefined4 *)(iVar1 + 0x703c) = 0;
    *(undefined4 *)(iVar1 + 0x7034) = 0;
    FUN_001325d0(iVar1 + 0x7040,0,0xc00);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x7038) = 0;
    iVar2 = iVar2 + 0xda8;
  } while (iVar3 < 2);
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iRam0036f7e0 + iVar2;
    if (*(int *)(iVar1 + 0x3c) != 0) {
      FUN_00100290();
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x44) = 0xffffffff;
    iVar2 = iVar2 + 0x18;
    *(undefined4 *)(iVar1 + 0x48) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  } while (iVar3 < 0xc);
  if (iRam0036f7e0 != 0) {
    FUN_00100290();
    iRam0036f7e0 = 0;
  }
  return;
}

// 0x002bc3f0  size 0x33c
void FUN_002bc3f0(undefined8 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = FUN_00100680(0x8a08,param_1);
  iRam0036f7e0 = (int)uVar3;
  FUN_001325d0(uVar3,0,0x8a08);
  *(undefined4 *)(iRam0036f7e0 + 8) = 0;
  uVar8 = 0;
  iVar7 = 0;
  *(undefined4 *)(iRam0036f7e0 + 0xc) = 1;
  *(int *)(iRam0036f7e0 + 0x30) = (int)param_1;
  *(undefined4 *)(iRam0036f7e0 + 0x34) = param_2;
  *(undefined4 *)(iRam0036f7e0 + 0x89e8) = 0;
  *(undefined2 *)(iRam0036f7e0 + 0x89f4) = 0x96;
  *(undefined2 *)(iRam0036f7e0 + 0x89f0) = 0;
  *(undefined2 *)(iRam0036f7e0 + 0x89f2) = 0x400;
  *(undefined4 *)(iRam0036f7e0 + 0x89ec) = 4;
  *(undefined1 *)(iRam0036f7e0 + 0x89f6) = 0;
  do {
    iVar4 = iRam0036f7e0 + iVar7;
    *(int *)(iVar4 + 0x38) = (int)param_1;
    *(undefined4 *)(iVar4 + 0x3c) = 0;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    *(undefined4 *)(iVar4 + 0x44) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x48) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    iVar4 = *(int *)(iRam0036f7e0 + iVar7 + 0x3c);
    if (iVar4 != 0) {
      FUN_001325d0(iVar4,0,*(undefined4 *)(iRam0036f7e0 + iVar7 + 0x40));
    }
    if (((int)(param_3 & 0xffff) >> (uVar8 & 0x1f) & 1U) != 0) {
      iVar5 = iRam0036f0c4 + (uVar8 + 0x17ff) * 0x14;
      iVar4 = *(int *)(iVar5 + 0x20);
      iVar6 = iRam0036f7e0 + iVar7;
      if (iVar4 == 0) {
        uVar1 = *(uint *)(iVar5 + 0x18);
      }
      else {
        uVar1 = iVar4 + 0x7ffU >> 0xb;
      }
      if (*(int *)(iVar6 + 0x3c) != 0) {
        FUN_00100290();
        *(undefined4 *)(iVar6 + 0x3c) = 0;
      }
      *(undefined4 *)(iVar6 + 0x40) = 0;
      *(undefined4 *)(iVar6 + 0x44) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x48) = 0xffffffff;
      *(undefined4 *)(iVar6 + 0x4c) = 0;
      uVar2 = FUN_00100680(uVar1 << 0xb,*(undefined4 *)(iVar6 + 0x38));
      *(undefined4 *)(iVar6 + 0x3c) = uVar2;
      if (*(int *)(iVar6 + 0x3c) != 0) {
        *(uint *)(iVar6 + 0x40) = uVar1 << 0xb;
        *(undefined4 *)(iVar6 + 0x44) = 0;
      }
      if (*(int *)(iVar6 + 0x3c) != 0) {
        uVar2 = FUN_0014bf00(uVar8 + 0x17ff,*(int *)(iVar6 + 0x3c),0x2ae450,
                             (undefined4 *)(iVar6 + 0x38),0,0);
        *(undefined4 *)(iVar6 + 0x48) = uVar2;
        *(undefined4 *)(iVar6 + 0x4c) = 1;
      }
    }
    uVar8 = uVar8 + 1;
    iVar7 = iVar7 + 0x18;
  } while ((int)uVar8 < 0xc);
  iVar4 = 0;
  iVar7 = 0;
  do {
    FUN_002bc9e0(iRam0036f7e0 + iVar7 + 0x158,param_1,param_1);
    iVar4 = iVar4 + 1;
    iVar7 = iVar7 + 0xda8;
  } while (iVar4 < 8);
  iVar4 = 0;
  iVar7 = 0;
  do {
    FUN_002bc9e0(iRam0036f7e0 + iVar7 + 0x6e98,0x430750,param_1);
    iVar4 = iVar4 + 1;
    iVar7 = iVar7 + 0xda8;
  } while (iVar4 < 2);
  if ((param_3 & 0xffff) == 0xffff) {
    if (*(int *)(iRam0036f0c4 + 0x1e0fc) == 0) {
      uVar8 = *(uint *)(iRam0036f0c4 + 0x1e0f4);
    }
    else {
      uVar8 = *(int *)(iRam0036f0c4 + 0x1e0fc) + 0x7ffU >> 0xb;
    }
    puRam0036f7e4 = (undefined4 *)FUN_00100680(0xc,param_1);
    uVar2 = FUN_00100680(uVar8 << 0xb,param_1);
    puRam0036f7e4[2] = uVar2;
    uVar2 = FUN_0014bf00(0x180b,puRam0036f7e4[2],0x2ae560,puRam0036f7e4,0,0);
    *puRam0036f7e4 = uVar2;
    puRam0036f7e4[1] = 1;
  }
  return;
}

// 0x002bc730  size 0x160
/* WARNING: Removing unreachable block (ram,0x002bc7b0) */

void FUN_002bc730(int param_1,int param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  
  if ((-1 < param_2) && (puVar3 = *(undefined2 **)(param_1 + 0x1a4), puVar3 != (undefined2 *)0x0)) {
    if (param_2 == 0) {
      if (*(int *)(puVar3 + 4) != 0) {
        *(undefined4 *)(*(int *)(puVar3 + 4) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(puVar3 + 4);
    }
    else {
      iVar4 = 0;
      puVar5 = puVar3;
      if (0 < param_2) {
        puVar2 = puVar3;
        if (8 < param_2) {
          bVar1 = false;
          if ((-1 < param_2) && (param_2 < 0x7fffffff)) {
            bVar1 = true;
          }
          if (bVar1) {
            do {
              iVar4 = iVar4 + 8;
              puVar5 = *(undefined2 **)
                        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(puVar3 + 4) + 8) + 8)
                                                   + 8) + 8) + 8) + 8);
              puVar3 = *(undefined2 **)(puVar5 + 4);
              puVar2 = puVar3;
            } while (iVar4 < param_2 + -8);
          }
        }
        for (; puVar3 = puVar2, iVar4 < param_2; iVar4 = iVar4 + 1) {
          puVar2 = *(undefined2 **)(puVar3 + 4);
          puVar5 = puVar3;
        }
      }
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar3 + 4);
      if (*(int *)(puVar3 + 4) != 0) {
        *(undefined4 *)(*(int *)(puVar3 + 4) + 4) = *(undefined4 *)(puVar3 + 2);
      }
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
  }
  return;
}

// 0x002bc8a0  size 0x130
void FUN_002bc8a0(int param_1,short param_2,short param_3)

{
  short *psVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  iVar5 = 0;
  iVar4 = param_1;
  do {
    if (*(short *)(iVar4 + 0x1aa) < 1) {
      bVar2 = iVar5 < 0;
      goto LAB_002bc8d4;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xc;
  } while (iVar5 < 0x100);
  iVar5 = -1;
  bVar2 = true;
LAB_002bc8d4:
  if (((!bVar2) && (0 < param_3)) && ((int)param_2 + (int)param_3 < 0x401)) {
    psVar1 = *(short **)(param_1 + 0x1a4);
    iVar4 = param_1 + iVar5 * 0xc;
    iVar5 = iVar4 + 0x1a8;
    *(short *)(iVar4 + 0x1a8) = param_2;
    *(short *)(iVar4 + 0x1aa) = param_3;
    if (*(int *)(param_1 + 0x1a4) == 0) {
      *(undefined4 *)(iVar4 + 0x1ac) = 0;
      *(undefined4 *)(iVar4 + 0x1b0) = 0;
      *(int *)(param_1 + 0x1a4) = iVar5;
    }
    else if (param_2 < *psVar1) {
      *(undefined4 *)(iVar4 + 0x1ac) = 0;
      *(undefined4 *)(iVar4 + 0x1b0) = *(undefined4 *)(param_1 + 0x1a4);
      *(int *)(*(int *)(iVar4 + 0x1b0) + 4) = iVar5;
      *(int *)(param_1 + 0x1a4) = iVar5;
    }
    else {
      psVar3 = psVar1;
      while ((psVar6 = psVar1, psVar6 != (short *)0x0 && (*psVar6 < param_2))) {
        psVar3 = psVar6;
        psVar1 = *(short **)(psVar6 + 4);
      }
      *(short **)(iVar4 + 0x1ac) = psVar3;
      *(undefined4 *)(iVar4 + 0x1b0) = *(undefined4 *)(psVar3 + 4);
      *(int *)(psVar3 + 4) = iVar5;
      if (*(int *)(iVar4 + 0x1b0) != 0) {
        *(int *)(*(int *)(iVar4 + 0x1b0) + 4) = iVar5;
      }
    }
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  }
  return;
}

// 0x002bc9e0  size 0x114
void FUN_002bc9e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_002b19d0();
  FUN_001325d0(param_1 + 0x94,0,0x10);
  FUN_001325d0(param_1 + 0xa4,0,0x40);
  FUN_001325d0(param_1 + 0xe4,0,0x18);
  FUN_001325d0(param_1 + 0xfc,0,0x18);
  FUN_001325d0(param_1 + 0x114,0,0x18);
  FUN_001325d0(param_1 + 300,0,0x18);
  *(undefined4 *)(param_1 + 0x148) = param_2;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  FUN_001325d0(param_1 + 0x168,0,0x10);
  *(undefined4 *)(param_1 + 0x14c) = param_2;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x17c) = param_3;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  FUN_001325d0(param_1 + 0x1a8,0,0xc00);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  return;
}

// 0x002bcb00  size 0x1d4
void FUN_002bcb00(int param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  iVar1 = *piGpffff8c5c;
  uVar8 = 0;
  cVar2 = FUN_0017e8d0();
  if (cVar2 == '\x01') {
    uVar3 = FUN_001dc290();
    if ((uVar3 & 4) != 0) {
      uVar9 = FUN_001dc220(0);
      uVar9 = FUN_001dccc0(uVar9);
    }
    uVar3 = FUN_001dc290();
    if ((uVar3 & 2) != 0) {
      uVar8 = FUN_001dc240(0);
      uVar8 = FUN_001e0530(uVar8);
    }
    uVar4 = FUN_00176da0();
    uVar5 = FUN_00178390();
    uVar6 = FUN_0017e8d0();
    uVar7 = FUN_0017e890();
    FUN_00176960(uVar4,uVar5,iVar1 + 0x1d8,uVar9,uVar8,uVar6,uVar7,0);
  }
  thunk_FUN_00172660();
  cVar2 = FUN_0017e8d0();
  if (cVar2 == '\x03') {
    if (iGpffff9100 == 0) {
      FUN_002dbf20(param_1 + 0x40c,2);
    }
    else {
      FUN_002dbf20(param_1 + 0x40c,2,5);
    }
  }
  else if (cVar2 == '\x02') {
    if (iGpffff9100 == 0) {
      FUN_002dbf20(param_1 + 0x40c,2,2);
    }
    else {
      FUN_002dbf20(param_1 + 0x40c,2,4);
    }
  }
  else {
    FUN_002dbf20(param_1 + 0x40c,2,1);
  }
  FUN_002d8f50(0x2d9590,0x2d9780,0x2d8f70);
  *(undefined4 *)(param_1 + 0xb88) = 0;
  FUN_002dbc70(param_1 + 0x40c);
  FUN_002dbb80(param_1 + 0x40c);
  return;
}

// 0x002bcce0  size 0x11c
int FUN_002bcce0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3[2] + param_3[1] * 1000 + *param_3 * 60000;
  iVar2 = param_2[2] + param_2[1] * 1000 + *param_2 * 60000;
  if (iVar1 < iVar2) {
    iVar3 = iVar2 - iVar1;
    param_1[3] = 1;
  }
  else if (iVar2 < iVar1) {
    iVar3 = iVar1 - iVar2;
    param_1[3] = -1;
  }
  else {
    param_1[3] = 0;
    iVar3 = 0;
  }
  *param_1 = iVar3 / 60000;
  param_1[1] = (iVar3 / 1000) % 0x3c;
  param_1[2] = iVar3 % 1000;
  return iVar2 - iVar1;
}

// 0x002bce00  size 0x4d0
void FUN_002bce00(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = 2;
  if (*(int *)(param_1 + 0x31c) == 0) {
    uVar4 = 0;
  }
  uVar4 = *(int *)(param_1 + 0x318) != 0 | uVar4;
  iVar7 = (int)(char)(&DAT_0032f535)[(uint)bGpffff9120 * 6];
  iVar1 = *(int *)(&DAT_0032f1c4 + iVar7 * 8);
  if ((param_1[0x48] != '\x02') && (param_1[0x48] != '\x04')) {
    if (*param_1 == '\x01') {
      if (*(float *)(param_1 + 0x94) == 1.0) {
        if (*piGpffff8d78 != 1) {
          *piGpffff8d78 = 1;
        }
      }
      else if (*piGpffff8d78 == 1) {
        *piGpffff8d78 = 0;
      }
    }
    uVar6 = piGpffff8d78[2];
    if ((piGpffff8d78[4] & uVar6) == 0) {
      uVar6 = 0x100000;
    }
    else if (uVar6 == 0x80000) {
      uVar6 = 0x80000;
    }
    else if (*piGpffff8d78 != 1) {
      uVar6 = 0x100000;
    }
    if (uVar6 == 0x20) {
      if (*(int *)(param_1 + 800) == 0) {
        param_1[800] = '\x01';
        param_1[0x321] = '\0';
        param_1[0x322] = '\0';
        param_1[0x323] = '\0';
        param_1[0x48] = '\x02';
      }
      else {
        param_1[0x48] = '\x05';
      }
    }
    else if (uVar6 == 0x10) {
      if (*(int *)(param_1 + 800) == 0) {
        param_1[800] = '\x01';
        param_1[0x321] = '\0';
        param_1[0x322] = '\0';
        param_1[0x323] = '\0';
        param_1[0x48] = '\x02';
      }
      else {
        FUN_002062d0(5,0x60);
        switch((&PTR_DAT_0032f1c0)[iVar7 * 2][*(int *)(param_1 + 0x324) * 0x14]) {
        case 0:
          param_1[0x340] = '\x01';
          break;
        case 1:
          *piGpffff8d78 = 0;
          param_1[0x340] = '\x02';
          break;
        case 2:
          param_1[0x340] = '\x03';
          uGpffff9100 = 0;
          break;
        case 3:
          param_1[0x340] = '\x04';
          uGpffff9100 = 1;
          break;
        case 4:
          param_1[0x324] = '\0';
          param_1[0x325] = '\0';
          param_1[0x326] = '\0';
          param_1[0x327] = '\0';
          param_1[0x340] = '\x06';
          *piGpffff8d78 = 0;
          break;
        case 5:
          param_1[0x340] = '\a';
        }
        *param_1 = '\a';
        param_1[0x24] = '\x04';
        param_1[0x48] = '\x04';
      }
    }
    else if (uVar6 == 2) {
      if (*(int *)(param_1 + 800) != 0) {
        iVar2 = *(int *)(param_1 + 0x324);
        *(int *)(param_1 + 0x324) = iVar2 + 1;
        uVar6 = *(uint *)(param_1 + 0x324);
        if ((int)uVar6 < 0) {
          uVar6 = iVar1 - 1;
        }
        else if (iVar1 - 1U < uVar6) {
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x324) = uVar6;
        iVar3 = *(int *)(param_1 + 0x324);
        if ((uVar4 & *(uint *)((&PTR_DAT_0032f1c0)[iVar7 * 2] + iVar3 * 0x14 + 4)) != 0) {
          do {
            *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
            uVar6 = *(uint *)(param_1 + 0x324);
            uVar5 = iVar1 - 1U;
            if ((-1 < (int)uVar6) && (uVar5 = uVar6, iVar1 - 1U < uVar6)) {
              uVar5 = 0;
            }
            *(uint *)(param_1 + 0x324) = uVar5;
            iVar3 = *(int *)(param_1 + 0x324);
          } while ((uVar4 & *(uint *)((&PTR_DAT_0032f1c0)[iVar7 * 2] + iVar3 * 0x14 + 4)) != 0);
        }
        if (iVar2 == iVar3) {
          FUN_002062d0(8,0x60);
        }
        else {
          FUN_002062d0(7,0x60);
        }
      }
    }
    else if ((uVar6 == 1) && (*(int *)(param_1 + 800) != 0)) {
      iVar2 = *(int *)(param_1 + 0x324);
      *(int *)(param_1 + 0x324) = iVar2 + -1;
      uVar6 = *(uint *)(param_1 + 0x324);
      if ((int)uVar6 < 0) {
        uVar6 = iVar1 - 1;
      }
      else if (iVar1 - 1U < uVar6) {
        uVar6 = 0;
      }
      *(uint *)(param_1 + 0x324) = uVar6;
      iVar3 = *(int *)(param_1 + 0x324);
      if ((uVar4 & *(uint *)((&PTR_DAT_0032f1c0)[iVar7 * 2] + iVar3 * 0x14 + 4)) != 0) {
        do {
          *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + -1;
          uVar6 = *(uint *)(param_1 + 0x324);
          uVar5 = iVar1 - 1U;
          if ((-1 < (int)uVar6) && (uVar5 = uVar6, iVar1 - 1U < uVar6)) {
            uVar5 = 0;
          }
          *(uint *)(param_1 + 0x324) = uVar5;
          iVar3 = *(int *)(param_1 + 0x324);
        } while ((uVar4 & *(uint *)((&PTR_DAT_0032f1c0)[iVar7 * 2] + iVar3 * 0x14 + 4)) != 0);
      }
      if (iVar2 == iVar3) {
        FUN_002062d0(8,0x60);
      }
      else {
        FUN_002062d0(7,0x60);
      }
    }
  }
  return;
}

// 0x002bd2d0  size 0x834
void FUN_002bd2d0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_350 [20];
  undefined4 uStack_33c;
  int iStack_338;
  undefined1 auStack_310 [576];
  undefined1 auStack_d0 [20];
  undefined4 uStack_bc;
  int iStack_b8;
  undefined1 auStack_90 [20];
  undefined4 uStack_7c;
  int iStack_78;
  undefined1 auStack_50 [20];
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_18;
  ushort uStack_14;
  char acStack_10 [16];
  
  uVar9 = 2;
  iVar2 = *(int *)(param_1 + 0x318);
  if (*(int *)(param_1 + 0x31c) == 0) {
    uVar9 = 0;
  }
  iVar10 = (int)(char)(&DAT_0032f535)[(uint)bGpffff9120 * 6];
  uVar3 = *(uint *)(&DAT_0032f1c4 + iVar10 * 8);
  uVar13 = 0;
  if (uVar3 != 0) {
    iVar12 = 0;
    do {
      uVar11 = 3;
      pbVar8 = (&PTR_DAT_0032f1c0)[iVar10 * 2] + iVar12;
      bVar1 = *pbVar8;
      if (((iVar2 != 0 | uVar9) & *(uint *)(pbVar8 + 4)) == 0) {
        uVar11 = 0;
      }
      if ((*(int *)(pbVar8 + 0xc) != -1) && (bVar1 + 0x57 != -1)) {
        FUN_001ede20(*(undefined4 *)(param_1 + 0x28),auStack_50);
        iStack_38 = (int)((float)iStack_38 * *(float *)(param_1 + 0x94));
        uStack_3c = uVar11;
        FUN_001f1350(auStack_50,bVar1 + 0x57);
      }
      uVar13 = uVar13 + 1;
      iVar12 = iVar12 + 0x14;
    } while (uVar13 < uVar3);
  }
  iVar2 = *(int *)(param_1 + 0x3b8);
  if ((*(int *)(param_1 + 0x3b4) != -1) && (iVar2 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 0x28),auStack_90);
    uStack_7c = 0;
    iStack_78 = (int)((float)iStack_78 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_90,iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x3bc);
  uVar11 = *(undefined4 *)(param_1 + 0x2c);
  iVar12 = *(int *)(param_1 + 0x3c0);
  if ((iVar2 != -1) && (iVar12 != -1)) {
    if (*(int *)(param_1 + 0x318) != 0) {
      FUN_001ede20(*(undefined4 *)(param_1 + 0x28),auStack_350,iVar2);
      uStack_33c = 0;
      iStack_338 = (int)((float)iStack_338 * *(float *)(param_1 + 0x94));
      FUN_00200ff0(uVar11,iVar2,0,iVar12,0x30,0x30,0x30,0x30);
      cVar4 = *(char *)(param_1 + 0x48);
      goto LAB_002bd944;
    }
    pcVar6 = (char *)FUN_00177070(0);
    FUN_002bdb10(&uStack_18);
    if (*pcVar6 == '\x01') {
      uStack_18 = uStack_18 & 0xfffffffd | 2;
    }
    else if (*pcVar6 == '\0') {
      uStack_18 = uStack_18 & 0xfffffffd;
    }
    cVar4 = FUN_0017e6e0();
    uStack_18._0_1_ = (byte)uStack_18 & 0xfb | (cVar4 != '\0') << 2;
    cVar4 = FUN_0017e760();
    uStack_18._0_1_ = (byte)uStack_18 & 0xf7 | (cVar4 != '\0') << 3;
    iVar7 = FUN_001dc200(0);
    uStack_18 = CONCAT31(uStack_18._1_3_,(byte)uStack_18 & 0xef | (*(int *)(iVar7 + 0xc) != 0) << 4)
    ;
    uVar5 = FUN_0017e680();
    switch(uVar5) {
    case 0:
      uStack_14 = uStack_14 & 0xfffc;
      break;
    case 1:
    case 2:
      uStack_14 = uStack_14 & 0xfffc | 1;
      break;
    case 3:
      uStack_14 = uStack_14 & 0xfffc | 2;
      break;
    case 4:
    case 5:
      uStack_14 = uStack_14 & 0xfffc | 3;
    }
    uVar5 = FUN_0017e720();
    switch(uVar5) {
    case 0:
      uStack_14 = (ushort)((byte)uStack_14 & 0x83);
      break;
    case 1:
      uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 4);
      break;
    case 2:
      uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 8);
      break;
    case 3:
      uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0xc);
      break;
    case 4:
      uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0x10);
      break;
    case 5:
      uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0x14);
      break;
    case 6:
      uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0x18);
      break;
    case 7:
      uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0x1c);
    }
    uStack_14 = uStack_14 & 0x7f | *(short *)(pcVar6 + 0xc) << 7;
    cVar4 = FUN_00177050();
    if (cVar4 == '\x02') {
      uStack_18 = uStack_18 & 0xfffffffe;
      uStack_18 = CONCAT22(uStack_18._2_2_,
                           (ushort)uStack_18 & 0xf01f |
                           (ushort)((*(uint *)(param_1 + 0x1e4) & 0x7f) << 5));
      uVar9 = uStack_18 & 0xfffc0fff | (*(uint *)(param_1 + 0x1e8) & 0x3f) << 0xc;
      uStack_18._2_2_ = (ushort)(uVar9 >> 0x10);
      uStack_18._0_2_ = (ushort)uVar9;
      uStack_18 = CONCAT22(uStack_18._2_2_ & 0xf003 |
                           (ushort)((*(uint *)(param_1 + 0x1ec) & 0x3ff) << 2),(ushort)uStack_18);
    }
    else if (cVar4 == '\x01') {
      uStack_18 = uStack_18 & 0xf000001e | 1 | (*(uint *)(param_1 + 0x150) & 0x7fffff) << 5;
    }
    FUN_002dddc0(auStack_310,&uStack_18,acStack_10);
    uVar9 = 0;
    pcVar6 = acStack_10;
    do {
      cVar4 = *pcVar6;
      if (cVar4 < 'A') {
        *pcVar6 = cVar4 + -0x32;
      }
      else if (cVar4 < 'J') {
        *pcVar6 = *pcVar6 + -0x39;
      }
      else if (cVar4 < 'P') {
        *pcVar6 = *pcVar6 + -0x3a;
      }
      else {
        *pcVar6 = *pcVar6 + -0x3b;
      }
      uVar9 = uVar9 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar9 < 0xd);
    FUN_00200ff0(uVar11,iVar2,0,iVar12,acStack_10[0] + 0x10,acStack_10[1] + 0x10,
                 acStack_10[2] + 0x10,acStack_10[3] + 0x10);
  }
  cVar4 = *(char *)(param_1 + 0x48);
LAB_002bd944:
  if (cVar4 == '\x03') {
    *(undefined4 *)(param_1 + 0x348) =
         *(undefined4 *)((&PTR_DAT_0032f1c0)[iVar10 * 2] + *(int *)(param_1 + 0x324) * 0x14 + 0x10);
    if ((((&DAT_0032f535)[(uint)bGpffff9120 * 6] == '\x05') &&
        (cVar4 = FUN_00177050(), cVar4 == '\x01')) && (*(int *)(param_1 + 0x348) == 99)) {
      *(undefined4 *)(param_1 + 0x348) = 100;
    }
    iVar2 = *(int *)(param_1 + 0x348);
    if ((*(int *)(param_1 + 0x344) != -1) && (iVar2 != -1)) {
      FUN_001ede20(*(undefined4 *)(param_1 + 0x4c),auStack_d0);
      uStack_bc = 0;
      iStack_b8 = (int)((float)iStack_b8 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_d0,iVar2);
    }
  }
  return;
}

// 0x002bdb10  size 0xc
void FUN_002bdb10(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 0x002bdb20  size 0x984
void FUN_002bdb20(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_540 [20];
  undefined4 uStack_52c;
  int iStack_528;
  undefined1 auStack_500 [20];
  undefined4 uStack_4ec;
  int iStack_4e8;
  undefined1 auStack_4c0 [20];
  undefined4 uStack_4ac;
  int iStack_4a8;
  undefined1 auStack_480 [20];
  undefined4 uStack_46c;
  int iStack_468;
  undefined1 auStack_440 [20];
  undefined4 uStack_42c;
  int iStack_428;
  undefined1 auStack_400 [20];
  undefined4 uStack_3ec;
  int iStack_3e8;
  undefined1 auStack_3c0 [20];
  undefined4 uStack_3ac;
  int iStack_3a8;
  undefined1 auStack_380 [20];
  undefined4 uStack_36c;
  int iStack_368;
  undefined1 auStack_340 [20];
  undefined4 uStack_32c;
  int iStack_328;
  undefined1 auStack_300 [20];
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined1 auStack_2c0 [20];
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined1 auStack_280 [20];
  undefined4 uStack_26c;
  int iStack_268;
  undefined1 auStack_240 [20];
  undefined4 uStack_22c;
  int iStack_228;
  undefined1 auStack_200 [20];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined1 auStack_1c0 [20];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  int iStack_168;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  cVar2 = FUN_00177050();
  if (cVar2 == '\x02') {
    if (*(int *)(param_1 + 0x318) == 0) {
      if (*(int *)(param_1 + 0x364) == -1) {
        iVar5 = *(int *)(param_1 + 900);
      }
      else {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_400);
        uStack_3ec = 0;
        iStack_3e8 = (int)((float)iStack_3e8 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_400,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8)
                     ,*(undefined4 *)(param_1 + 0x1ec));
        iVar5 = *(int *)(param_1 + 900);
      }
      if (iVar5 != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_440);
        uStack_42c = 4;
        iStack_428 = (int)((float)iStack_428 * *(float *)(param_1 + 0x94));
        if (*(int *)(param_1 + 0x274) < 1) {
          if (*(int *)(param_1 + 0x274) < 0) {
            FUN_001f1400(auStack_440,4,*(undefined4 *)(param_1 + 0x268),
                         *(undefined4 *)(param_1 + 0x26c),*(undefined4 *)(param_1 + 0x270));
          }
          else {
            FUN_001f1400(auStack_440,5,*(undefined4 *)(param_1 + 0x268),
                         *(undefined4 *)(param_1 + 0x26c),*(undefined4 *)(param_1 + 0x270));
          }
        }
        else {
          FUN_001f1400(auStack_440,3,*(undefined4 *)(param_1 + 0x268),
                       *(undefined4 *)(param_1 + 0x26c),*(undefined4 *)(param_1 + 0x270));
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x364) == -1) {
        iVar5 = *(int *)(param_1 + 900);
      }
      else {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_380);
        uStack_36c = 0;
        iStack_368 = (int)((float)iStack_368 * *(float *)(param_1 + 0x94));
        FUN_001f1350(auStack_380,0xc);
        iVar5 = *(int *)(param_1 + 900);
      }
      if (iVar5 != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_3c0);
        uStack_3ac = 0;
        iStack_3a8 = (int)((float)iStack_3a8 * *(float *)(param_1 + 0x94));
        FUN_001f1350(auStack_3c0,0xb);
      }
    }
    uVar6 = 0;
    iVar5 = param_1;
    iVar4 = param_1;
    do {
      if (*(int *)(param_1 + 0x318) == 0) {
        if (*(int *)(param_1 + 0x3a4) + uVar6 != -1) {
          FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_500);
          uStack_4ec = 0;
          iStack_4e8 = (int)((float)iStack_4e8 * *(float *)(param_1 + 0x94));
          FUN_001f1400(auStack_500,2,*(undefined4 *)(iVar5 + 0x1f0),*(undefined4 *)(iVar5 + 500),
                       *(undefined4 *)(iVar5 + 0x1f8));
        }
        if (*(int *)(param_1 + 0x3ac) + uVar6 != -1) {
          FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_540);
          uStack_52c = 4;
          iStack_528 = (int)((float)iStack_528 * *(float *)(param_1 + 0x94));
          if (*(int *)(iVar4 + 0x284) < 1) {
            if (*(int *)(iVar4 + 0x284) < 0) {
              FUN_001f1400(auStack_540,4,*(undefined4 *)(iVar4 + 0x278),
                           *(undefined4 *)(iVar4 + 0x27c),*(undefined4 *)(iVar4 + 0x280));
            }
            else {
              FUN_001f1400(auStack_540,5,*(undefined4 *)(iVar4 + 0x278),
                           *(undefined4 *)(iVar4 + 0x27c),*(undefined4 *)(iVar4 + 0x280));
            }
          }
          else {
            FUN_001f1400(auStack_540,3,*(undefined4 *)(iVar4 + 0x278),*(undefined4 *)(iVar4 + 0x27c)
                         ,*(undefined4 *)(iVar4 + 0x280));
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0x3a4) + uVar6 != -1) {
          FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_480);
          uStack_46c = 0;
          iStack_468 = (int)((float)iStack_468 * *(float *)(param_1 + 0x94));
          FUN_001f1350(auStack_480,0xc);
        }
        if (*(int *)(param_1 + 0x3ac) + uVar6 != -1) {
          FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_4c0);
          uStack_4ac = 0;
          iStack_4a8 = (int)((float)iStack_4a8 * *(float *)(param_1 + 0x94));
          FUN_001f1350(auStack_4c0,0xb);
        }
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0xc;
      iVar4 = iVar4 + 0x10;
    } while (uVar6 < 9);
    return;
  }
  if (cVar2 != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0x318) == 0) {
    iVar5 = *(int *)(param_1 + 0x150);
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_180,*(undefined4 *)(param_1 + 0x364));
    uStack_16c = 0;
    iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
    if (iVar5 < 0) {
      FUN_001f1400(auStack_180,7,-iVar5);
      uVar1 = *(undefined4 *)(param_1 + 4);
    }
    else {
      FUN_001f1400(auStack_180,6,iVar5);
      uVar1 = *(undefined4 *)(param_1 + 4);
    }
    iVar5 = *(int *)(param_1 + 0x1a8);
    FUN_001ede20(uVar1,auStack_1c0,*(undefined4 *)(param_1 + 900));
    uStack_1ac = 4;
    iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
    if (iVar5 < 1) {
      if (iVar5 < 0) {
        FUN_001f1400(auStack_1c0,9,-iVar5);
      }
      else {
        FUN_001f1400(auStack_1c0,10,iVar5);
      }
      iVar5 = *(int *)(param_1 + 0x38c);
    }
    else {
      FUN_001f1400(auStack_1c0,8,iVar5);
      iVar5 = *(int *)(param_1 + 0x38c);
    }
    iVar4 = *(int *)(param_1 + 0x390);
    if ((iVar5 != -1) && (iVar4 != -1)) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_200);
      uStack_1ec = 4;
      iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_200,iVar4);
    }
    iVar5 = *(int *)(param_1 + 0x1a4);
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_240,*(undefined4 *)(param_1 + 0x394));
    uStack_22c = 5;
    iStack_228 = (int)((float)iStack_228 * *(float *)(param_1 + 0x94));
    if (-1 < iVar5) {
      FUN_001f1400(auStack_240,6,iVar5);
      uVar1 = *(undefined4 *)(param_1 + 4);
      goto LAB_002bdc40;
    }
    FUN_001f1400(auStack_240,7,-iVar5);
  }
  else {
    if (*(int *)(param_1 + 0x364) == -1) {
      iVar5 = *(int *)(param_1 + 900);
    }
    else {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_80,0xc);
      iVar5 = *(int *)(param_1 + 900);
    }
    if (iVar5 == -1) {
      iVar5 = *(int *)(param_1 + 0x38c);
    }
    else {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_c0);
      uStack_ac = 0;
      iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_c0,0xb);
      iVar5 = *(int *)(param_1 + 0x38c);
    }
    iVar4 = *(int *)(param_1 + 0x390);
    if ((iVar5 != -1) && (iVar4 != -1)) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_100);
      uStack_ec = 4;
      iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_100,iVar4);
    }
    if (*(int *)(param_1 + 0x394) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_140);
      uStack_12c = 5;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_140,0xb);
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
LAB_002bdc40:
  uVar6 = 0;
  do {
    FUN_001ede20(uVar1,auStack_40,*(int *)(param_1 + 0x39c) + uVar6);
    uStack_2c = 4;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    FUN_001f1400(auStack_40,1,0,uVar6 + 1);
    if (*(int *)(iGpffff9114 + 0x298) == 0) {
      uVar3 = 8 - uVar6;
    }
    else {
      uVar3 = uVar6;
    }
    if (*(int *)(param_1 + 0x318) == 0) {
      iVar4 = param_1 + uVar3 * 4;
      iVar5 = *(int *)(iVar4 + 0x154);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_300,*(int *)(param_1 + 0x3a4) + uVar6);
      uStack_2ec = 0;
      iStack_2e8 = (int)((float)iStack_2e8 * *(float *)(param_1 + 0x94));
      if (iVar5 < 0) {
        FUN_001f1400(auStack_300,7,-iVar5);
        iVar5 = *(int *)(param_1 + 0x3ac);
      }
      else {
        FUN_001f1400(auStack_300,6,iVar5);
        iVar5 = *(int *)(param_1 + 0x3ac);
      }
      iVar4 = *(int *)(iVar4 + 0x1ac);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_340,iVar5 + uVar6);
      uStack_32c = 4;
      iStack_328 = (int)((float)iStack_328 * *(float *)(param_1 + 0x94));
      if (iVar4 < 1) {
        if (iVar4 < 0) {
          FUN_001f1400(auStack_340,9,-iVar4);
        }
        else {
          FUN_001f1400(auStack_340,10,iVar4);
        }
      }
      else {
        FUN_001f1400(auStack_340,8,iVar4);
      }
    }
    else {
      if (*(int *)(param_1 + 0x3a4) + uVar6 == -1) {
        iVar5 = *(int *)(param_1 + 0x3ac);
      }
      else {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_280);
        uStack_26c = 0;
        iStack_268 = (int)((float)iStack_268 * *(float *)(param_1 + 0x94));
        FUN_001f1350(auStack_280,0xc);
        iVar5 = *(int *)(param_1 + 0x3ac);
      }
      if (iVar5 + uVar6 != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_2c0);
        uStack_2ac = 0;
        iStack_2a8 = (int)((float)iStack_2a8 * *(float *)(param_1 + 0x94));
        FUN_001f1350(auStack_2c0,0xb);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 9);
  return;
}

// 0x002be4b0  size 0x5a4
void FUN_002be4b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_380 [20];
  undefined4 uStack_36c;
  int iStack_368;
  undefined1 auStack_340 [20];
  undefined4 uStack_32c;
  int iStack_328;
  undefined1 auStack_300 [20];
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined1 auStack_2c0 [20];
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined1 auStack_280 [20];
  undefined4 uStack_26c;
  int iStack_268;
  undefined1 auStack_240 [20];
  undefined4 uStack_22c;
  int iStack_228;
  undefined1 auStack_200 [20];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined1 auStack_1c0 [20];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  int iStack_168;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  cVar1 = FUN_00177050();
  if (cVar1 != '\x03') {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') {
        return;
      }
      iVar2 = *(int *)(param_1 + 0xa0);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_40,*(undefined4 *)(param_1 + 0x354));
      uStack_2c = 0;
      iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
      if (iVar2 < 0) {
        FUN_001f1400(auStack_40,7,-iVar2);
        iVar2 = *(int *)(param_1 + 0x318);
      }
      else {
        FUN_001f1400(auStack_40,6,iVar2);
        iVar2 = *(int *)(param_1 + 0x318);
      }
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x150);
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_c0,*(undefined4 *)(param_1 + 0x364));
        uStack_ac = 0;
        iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
        if (iVar2 < 0) {
          FUN_001f1400(auStack_c0,7,-iVar2);
          return;
        }
        FUN_001f1400(auStack_c0,6,iVar2);
        return;
      }
      if (*(int *)(param_1 + 0x364) == -1) {
        return;
      }
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_80,0xc);
      return;
    }
    if (((*(int *)(param_1 + 0xcc) == 0) && (*(int *)(param_1 + 0xd0) == 0)) &&
       (*(int *)(param_1 + 0xd4) == 0)) {
      if (*(int *)(param_1 + 0x354) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_100);
        uStack_ec = 0;
        iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
        FUN_001f1350(auStack_100,0xb);
        iVar2 = *(int *)(param_1 + 0x318);
        goto LAB_002be668;
      }
    }
    else if (*(int *)(param_1 + 0x354) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_140);
      uStack_12c = 0;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      FUN_001f1400(auStack_140,2,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),
                   *(undefined4 *)(param_1 + 0xd4));
    }
    iVar2 = *(int *)(param_1 + 0x318);
LAB_002be668:
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x364) == -1) {
        return;
      }
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_180);
      uStack_16c = 0;
      iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_180,0xc);
      return;
    }
    if (*(int *)(param_1 + 0x364) == -1) {
      return;
    }
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_1c0);
    uStack_1ac = 0;
    iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
    FUN_001f1400(auStack_1c0,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                 *(undefined4 *)(param_1 + 0x1ec));
    return;
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_200,*(undefined4 *)(param_1 + 0x354));
  uStack_1ec = 0;
  iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
  if (iVar2 < 0) {
    FUN_001f1400(auStack_200,7,-iVar2);
    iVar2 = *(int *)(param_1 + 0x318);
  }
  else {
    FUN_001f1400(auStack_200,6,iVar2);
    iVar2 = *(int *)(param_1 + 0x318);
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x150);
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_280,*(undefined4 *)(param_1 + 0x364));
    uStack_26c = 0;
    iStack_268 = (int)((float)iStack_268 * *(float *)(param_1 + 0x94));
    if (iVar2 < 0) {
      FUN_001f1400(auStack_280,7,-iVar2);
      goto LAB_002be7b8;
    }
    FUN_001f1400(auStack_280,6,iVar2);
    iVar2 = *(int *)(param_1 + 0xcc);
  }
  else {
    if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_240);
      uStack_22c = 0;
      iStack_228 = (int)((float)iStack_228 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_240,0xc);
    }
LAB_002be7b8:
    iVar2 = *(int *)(param_1 + 0xcc);
  }
  if (((iVar2 == 0) && (*(int *)(param_1 + 0xd0) == 0)) && (*(int *)(param_1 + 0xd4) == 0)) {
    if (*(int *)(param_1 + 0x374) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_2c0);
      uStack_2ac = 0;
      iStack_2a8 = (int)((float)iStack_2a8 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_2c0,0xb);
      iVar2 = *(int *)(param_1 + 0x318);
      goto LAB_002be884;
    }
  }
  else if (*(int *)(param_1 + 0x374) != -1) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_300);
    uStack_2ec = 0;
    iStack_2e8 = (int)((float)iStack_2e8 * *(float *)(param_1 + 0x94));
    FUN_001f1400(auStack_300,2,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),
                 *(undefined4 *)(param_1 + 0xd4));
  }
  iVar2 = *(int *)(param_1 + 0x318);
LAB_002be884:
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 900) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_380);
      uStack_36c = 0;
      iStack_368 = (int)((float)iStack_368 * *(float *)(param_1 + 0x94));
      FUN_001f1400(auStack_380,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                   *(undefined4 *)(param_1 + 0x1ec));
    }
  }
  else if (*(int *)(param_1 + 900) != -1) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_340);
    uStack_32c = 0;
    iStack_328 = (int)((float)iStack_328 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_340,0xc);
  }
  return;
}

// 0x002bea60  size 0x930
void FUN_002bea60(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_500 [20];
  undefined4 uStack_4ec;
  int iStack_4e8;
  undefined1 auStack_4c0 [20];
  undefined4 uStack_4ac;
  int iStack_4a8;
  undefined1 auStack_480 [20];
  undefined4 uStack_46c;
  int iStack_468;
  undefined1 auStack_440 [20];
  undefined4 uStack_42c;
  int iStack_428;
  undefined1 auStack_400 [20];
  undefined4 uStack_3ec;
  int iStack_3e8;
  undefined1 auStack_3c0 [20];
  undefined4 uStack_3ac;
  int iStack_3a8;
  undefined1 auStack_380 [20];
  undefined4 uStack_36c;
  int iStack_368;
  undefined1 auStack_340 [20];
  undefined4 uStack_32c;
  int iStack_328;
  undefined1 auStack_300 [20];
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined1 auStack_2c0 [20];
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined1 auStack_280 [20];
  undefined4 uStack_26c;
  int iStack_268;
  undefined1 auStack_240 [20];
  undefined4 uStack_22c;
  int iStack_228;
  undefined1 auStack_200 [20];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined1 auStack_1c0 [20];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  int iStack_168;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_00177050();
  switch(uVar2) {
  case 0:
  case 4:
  case 5:
    uVar5 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar5 = 7;
    }
    FUN_001eea30(uVar1,0x1e,0x16,uVar5);
    if (*(int *)(param_1 + 0x318) == 0) {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_c0);
        uStack_ac = 0;
        iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_c0,2,*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                     *(undefined4 *)(param_1 + 0x1e0));
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_80,0xc);
    }
    break;
  case 1:
    uVar5 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar5 = 7;
    }
    FUN_001eea30(uVar1,0x24,0x16,uVar5);
    iVar7 = *(int *)(param_1 + 0x330);
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_100,*(undefined4 *)(param_1 + 0x354));
    uStack_ec = 0;
    iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
    if (iVar7 < 0) {
      FUN_001f1400(auStack_100,7,-iVar7);
      iVar7 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001f1400(auStack_100,6,iVar7);
      iVar7 = *(int *)(param_1 + 0x318);
    }
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 0x150);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_180,*(undefined4 *)(param_1 + 0x364));
      uStack_16c = 0;
      iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
      if (iVar7 < 0) {
        FUN_001f1400(auStack_180,7,-iVar7);
      }
      else {
        FUN_001f1400(auStack_180,6,iVar7);
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_140);
      uStack_12c = 0;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_140,0xc);
    }
    break;
  case 2:
    uVar5 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar5 = 7;
    }
    FUN_001eea30(uVar1,0x24,0x16,uVar5);
    if (*(int *)(param_1 + 0x354) == -1) {
      iVar7 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_1c0);
      uStack_1ac = 0;
      iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
      FUN_001f1400(auStack_1c0,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                   *(undefined4 *)(param_1 + 0x33c));
      iVar7 = *(int *)(param_1 + 0x318);
    }
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_240);
        uStack_22c = 0;
        iStack_228 = (int)((float)iStack_228 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_240,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8)
                     ,*(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_200);
      uStack_1ec = 0;
      iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_200,0xc);
    }
    break;
  case 3:
    uVar5 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar5 = 7;
    }
    FUN_001eea30(uVar1,0x25,0x16,uVar5);
    iVar7 = *(int *)(param_1 + 0x330);
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_340,*(undefined4 *)(param_1 + 0x354));
    uStack_32c = 0;
    iStack_328 = (int)((float)iStack_328 * *(float *)(param_1 + 0x94));
    if (iVar7 < 0) {
      FUN_001f1400(auStack_340,7,-iVar7);
      iVar7 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001f1400(auStack_340,6,iVar7);
      iVar7 = *(int *)(param_1 + 0x318);
    }
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 0x150);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_3c0,*(undefined4 *)(param_1 + 0x364));
      uStack_3ac = 0;
      iStack_3a8 = (int)((float)iStack_3a8 * *(float *)(param_1 + 0x94));
      if (iVar7 < 0) {
        FUN_001f1400(auStack_3c0,7,-iVar7);
        goto LAB_002beeec;
      }
      FUN_001f1400(auStack_3c0,6,iVar7);
      iVar7 = *(int *)(param_1 + 0x374);
    }
    else {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_380);
        uStack_36c = 0;
        iStack_368 = (int)((float)iStack_368 * *(float *)(param_1 + 0x94));
        FUN_001f1350(auStack_380,0xc);
      }
LAB_002beeec:
      iVar7 = *(int *)(param_1 + 0x374);
    }
    if (iVar7 == -1) {
      iVar7 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_400);
      uStack_3ec = 0;
      iStack_3e8 = (int)((float)iStack_3e8 * *(float *)(param_1 + 0x94));
      FUN_001f1400(auStack_400,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                   *(undefined4 *)(param_1 + 0x33c));
      iVar7 = *(int *)(param_1 + 0x318);
    }
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 900) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_480);
        uStack_46c = 0;
        iStack_468 = (int)((float)iStack_468 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_480,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8)
                     ,*(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if (*(int *)(param_1 + 900) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_440);
      uStack_42c = 0;
      iStack_428 = (int)((float)iStack_428 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_440,0xc);
    }
    break;
  case 6:
    uVar5 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar5 = 7;
    }
    FUN_001eea30(uVar1,0x24,0x16,uVar5);
    if (*(int *)(param_1 + 0x354) == -1) {
      iVar7 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_280);
      uStack_26c = 0;
      iStack_268 = (int)((float)iStack_268 * *(float *)(param_1 + 0x94));
      FUN_001f1400(auStack_280,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                   *(undefined4 *)(param_1 + 0x33c));
      iVar7 = *(int *)(param_1 + 0x318);
    }
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_300);
        uStack_2ec = 0;
        iStack_2e8 = (int)((float)iStack_2e8 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_300,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8)
                     ,*(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_2c0);
      uStack_2ac = 0;
      iStack_2a8 = (int)((float)iStack_2a8 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_2c0,0xc);
    }
    break;
  case 7:
    uVar5 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar5 = 7;
    }
    FUN_001eea30(uVar1,0x28,0x16,uVar5);
    uVar1 = *(undefined4 *)(param_1 + 4);
    FUN_001dc240(0);
    uVar6 = 0;
    do {
      FUN_001ede20(uVar1,auStack_40,*(int *)(param_1 + 0x39c) + uVar6);
      uStack_2c = 4;
      iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
      if (*(int *)(iGpffff9114 + 0x298) == 0) {
        uVar4 = 8 - uVar6;
      }
      else {
        uVar4 = uVar6;
      }
      iVar7 = param_1 + uVar4 * 4;
      if (*(int *)(iVar7 + 0x17c) == 0) {
        return;
      }
      FUN_001f1400(auStack_40,1,0,uVar6 + 1);
      iVar3 = *(int *)(iVar7 + 0x17c);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_4c0,*(int *)(param_1 + 0x3a4) + uVar6);
      uStack_4ac = 0;
      iStack_4a8 = (int)((float)iStack_4a8 * *(float *)(param_1 + 0x94));
      if (iVar3 < 0) {
        FUN_001f1400(auStack_4c0,7,-iVar3);
        iVar3 = *(int *)(param_1 + 0x3ac);
      }
      else {
        FUN_001f1400(auStack_4c0,6,iVar3);
        iVar3 = *(int *)(param_1 + 0x3ac);
      }
      iVar7 = *(int *)(iVar7 + 0x154);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_500,iVar3 + uVar6);
      uStack_4ec = 0;
      iStack_4e8 = (int)((float)iStack_4e8 * *(float *)(param_1 + 0x94));
      if (iVar7 < 0) {
        FUN_001f1400(auStack_500,7,-iVar7);
      }
      else {
        FUN_001f1400(auStack_500,6,iVar7);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 9);
  }
  return;
}

// 0x002bf390  size 0x60c
void FUN_002bf390(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_380 [20];
  undefined4 uStack_36c;
  int iStack_368;
  undefined1 auStack_340 [20];
  undefined4 uStack_32c;
  int iStack_328;
  undefined1 auStack_300 [20];
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined1 auStack_2c0 [20];
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined1 auStack_280 [20];
  undefined4 uStack_26c;
  int iStack_268;
  undefined1 auStack_240 [20];
  undefined4 uStack_22c;
  int iStack_228;
  undefined1 auStack_200 [20];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined1 auStack_1c0 [20];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  int iStack_168;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_00177050();
  switch(uVar2) {
  case 0:
  case 4:
  case 5:
    uVar4 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar4 = 9;
    }
    FUN_001eea30(uVar1,0x1e,0x16,uVar4);
    if (*(int *)(param_1 + 0x318) == 0) {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_200);
        uStack_1ec = 0;
        iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_200,2,*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc)
                     ,*(undefined4 *)(param_1 + 0x1e0));
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_1c0);
      uStack_1ac = 0;
      iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_1c0,0xc);
    }
    break;
  case 1:
    uVar4 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar4 = 9;
    }
    FUN_001eea30(uVar1,0x24,0x16,uVar4);
    iVar3 = *(int *)(param_1 + 0x330);
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_40,*(undefined4 *)(param_1 + 0x354));
    uStack_2c = 0;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    if (iVar3 < 0) {
      FUN_001f1400(auStack_40,7,-iVar3);
      iVar3 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001f1400(auStack_40,6,iVar3);
      iVar3 = *(int *)(param_1 + 0x318);
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x150);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_c0,*(undefined4 *)(param_1 + 0x364));
      uStack_ac = 0;
      iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
      if (iVar3 < 0) {
        FUN_001f1400(auStack_c0,7,-iVar3);
      }
      else {
        FUN_001f1400(auStack_c0,6,iVar3);
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_80,0xc);
    }
    break;
  case 2:
    uVar4 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar4 = 9;
    }
    FUN_001eea30(uVar1,0x24,0x16,uVar4);
    if (*(int *)(param_1 + 0x354) == -1) {
      iVar3 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_100);
      uStack_ec = 0;
      iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
      FUN_001f1400(auStack_100,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                   *(undefined4 *)(param_1 + 0x33c));
      iVar3 = *(int *)(param_1 + 0x318);
    }
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_180);
        uStack_16c = 0;
        iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_180,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8)
                     ,*(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_140);
      uStack_12c = 0;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_140,0xc);
    }
    break;
  case 3:
    uVar4 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar4 = 9;
    }
    FUN_001eea30(uVar1,0x25,0x16,uVar4);
    iVar3 = *(int *)(param_1 + 0x330);
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_240,*(undefined4 *)(param_1 + 0x354));
    uStack_22c = 0;
    iStack_228 = (int)((float)iStack_228 * *(float *)(param_1 + 0x94));
    if (iVar3 < 0) {
      FUN_001f1400(auStack_240,7,-iVar3);
      iVar3 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001f1400(auStack_240,6,iVar3);
      iVar3 = *(int *)(param_1 + 0x318);
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x150);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_2c0,*(undefined4 *)(param_1 + 0x364));
      uStack_2ac = 0;
      iStack_2a8 = (int)((float)iStack_2a8 * *(float *)(param_1 + 0x94));
      if (iVar3 < 0) {
        FUN_001f1400(auStack_2c0,7,-iVar3);
        goto LAB_002bf718;
      }
      FUN_001f1400(auStack_2c0,6,iVar3);
      iVar3 = *(int *)(param_1 + 0x374);
    }
    else {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_280);
        uStack_26c = 0;
        iStack_268 = (int)((float)iStack_268 * *(float *)(param_1 + 0x94));
        FUN_001f1350(auStack_280,0xc);
      }
LAB_002bf718:
      iVar3 = *(int *)(param_1 + 0x374);
    }
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_300);
      uStack_2ec = 0;
      iStack_2e8 = (int)((float)iStack_2e8 * *(float *)(param_1 + 0x94));
      FUN_001f1400(auStack_300,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                   *(undefined4 *)(param_1 + 0x33c));
      iVar3 = *(int *)(param_1 + 0x318);
    }
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 900) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_380);
        uStack_36c = 0;
        iStack_368 = (int)((float)iStack_368 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_380,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8)
                     ,*(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if (*(int *)(param_1 + 900) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_340);
      uStack_32c = 0;
      iStack_328 = (int)((float)iStack_328 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_340,0xc);
    }
  }
  return;
}

// 0x002bf9a0  size 0x314
void FUN_002bf9a0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  int iStack_168;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar3 = FUN_002df230();
  switch(uVar3) {
  case 0:
    unaff_s0 = 7;
    break;
  case 1:
    unaff_s0 = 8;
    break;
  case 2:
    unaff_s0 = 0xb;
    break;
  case 3:
    unaff_s0 = 10;
    break;
  case 4:
    unaff_s0 = 9;
    break;
  case 5:
    unaff_s0 = 0xd;
    break;
  case 6:
    unaff_s0 = 0xe;
  }
  FUN_001eea30(uVar1,0x25,0x16,unaff_s0);
  cVar2 = FUN_00177050();
  if (cVar2 == '\x02') {
    if (*(int *)(param_1 + 0x354) == -1) {
      iVar4 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_100);
      uStack_ec = 0;
      iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
      FUN_001f1400(auStack_100,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                   *(undefined4 *)(param_1 + 0x33c));
      iVar4 = *(int *)(param_1 + 0x318);
    }
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_180);
        uStack_16c = 0;
        iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_180,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8)
                     ,*(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_140);
      uStack_12c = 0;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_140,0xc);
    }
  }
  else if (cVar2 == '\x01') {
    iVar4 = *(int *)(param_1 + 0x330);
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_40,*(undefined4 *)(param_1 + 0x354));
    uStack_2c = 0;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    if (iVar4 < 0) {
      FUN_001f1400(auStack_40,7,-iVar4);
      iVar4 = *(int *)(param_1 + 0x318);
    }
    else {
      FUN_001f1400(auStack_40,6,iVar4);
      iVar4 = *(int *)(param_1 + 0x318);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x150);
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_c0,*(undefined4 *)(param_1 + 0x364));
      uStack_ac = 0;
      iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
      if (iVar4 < 0) {
        FUN_001f1400(auStack_c0,7,-iVar4);
      }
      else {
        FUN_001f1400(auStack_c0,6,iVar4);
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_80,0xc);
    }
  }
  return;
}

// 0x002bfcc0  size 0x1d4
void FUN_002bfcc0(int param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  switch((&DAT_0032f535)[(uint)bGpffff9120 * 6]) {
  case 0:
    FUN_002bf9a0();
    break;
  case 1:
    FUN_002bf390();
    break;
  case 2:
    FUN_002bea60();
    break;
  case 3:
    FUN_002be4b0();
    break;
  case 4:
    uVar1 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      uVar1 = 9;
    }
    FUN_001eea30(*(undefined4 *)(param_1 + 4),0x1e,0x16,uVar1);
    if (*(int *)(param_1 + 0x318) == 0) {
      if (*(int *)(param_1 + 0x364) != -1) {
        FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
        uStack_6c = 0;
        iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
        FUN_001f1400(auStack_80,2,*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                     *(undefined4 *)(param_1 + 0x1e0));
      }
    }
    else if (*(int *)(param_1 + 0x364) != -1) {
      FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_40);
      uStack_2c = 0;
      iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
      FUN_001f1350(auStack_40,0xc);
    }
    break;
  case 5:
    FUN_002bdb20();
    break;
  case 6:
    if (*(int *)(param_1 + 0x32c) == 0) {
      uVar1 = 7;
      if (*(int *)(param_1 + 0x328) == 0) {
        uVar1 = 8;
      }
      FUN_001eea30(*(undefined4 *)(param_1 + 4),0x19,0x16,uVar1);
    }
    else {
      FUN_001eea30(*(undefined4 *)(param_1 + 4),0x19,0x16,9);
    }
  }
  return;
}

// 0x002bfea0  size 0x2b8
void FUN_002bfea0(int param_1)

{
  int iVar1;
  undefined1 auStack_200 [20];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined1 auStack_1c0 [20];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  int iStack_168;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = *(int *)(param_1 + 0x350);
  if ((*(int *)(param_1 + 0x34c) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_40);
    uStack_2c = 4;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_40,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x358);
  if ((*(int *)(param_1 + 0x354) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
    uStack_6c = 0;
    iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_80,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x360);
  if ((*(int *)(param_1 + 0x35c) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_c0);
    uStack_ac = 4;
    iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_c0,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x368);
  if ((*(int *)(param_1 + 0x364) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_100);
    uStack_ec = 0;
    iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_100,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x370);
  if ((*(int *)(param_1 + 0x36c) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_140);
    uStack_12c = 4;
    iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_140,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x378);
  if ((*(int *)(param_1 + 0x374) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_180);
    uStack_16c = 0;
    iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_180,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x380);
  if ((*(int *)(param_1 + 0x37c) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_1c0);
    uStack_1ac = 4;
    iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_1c0,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x388);
  if ((*(int *)(param_1 + 900) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_200);
    uStack_1ec = 0;
    iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_200,iVar1);
  }
  return;
}

