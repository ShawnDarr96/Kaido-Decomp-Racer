// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0028c000 - 0x00290000
#include "ghidra_types.h"

// 0x0028c4b0  size 0x4c
void FUN_0028c4b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 != 0) {
    *param_1 = 1;
  }
  FUN_001f8640(param_1,0,2,1,1,0);
  return;
}

// 0x0028c730  size 0x90
void FUN_0028c730(undefined4 *param_1)

{
  int iVar1;
  
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1c000;
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 == 0) {
    param_1[0x19d] = *param_1;
  }
  else if (param_1[3] == 1) {
    param_1[param_1[0x19d] + 1] = *param_1;
    *param_1 = param_1[0x19d];
  }
  FUN_001f8640(param_1,0,8,1,1,0);
  return;
}

// 0x0028c7d0  size 0x60
void FUN_0028c7d0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_001fb170(iVar2 + 0xc);
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032e780)[*(int *)(iVar2 + 0x10)])(param_1);
    FUN_0028b7e0(param_1);
    FUN_001fb240(iVar2 + 0xc);
  }
  return;
}

// 0x0028c830  size 0x74
void FUN_0028c830(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001c1890(0);
  puVar2 = (undefined4 *)param_1;
  puVar2[0x1a0] = uVar1;
  FUN_0028b6b0(param_1);
  puVar2[3] = 0xffffffff;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[7] = 1;
  puVar2[10] = 0;
  puVar2[8] = 1;
  puVar2[6] = 1;
  puVar2[9] = 0;
  *puVar2 = 0;
  puVar2[0x19d] = 0;
  puVar2[0x19e] = 0;
  puVar2[1] = 0;
  puVar2[0x19f] = 0;
  puVar2[2] = 0;
  return;
}

// 0x0028c8b0  size 0xa8
undefined4 FUN_0028c8b0(int param_1)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  uint uVar6;
  char acStack_10 [16];
  
  iVar4 = 0;
  pcVar3 = acStack_10;
  do {
    cVar2 = *(char *)(param_1 + iVar4);
    if (cVar2 == '\0') break;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    iVar4 = iVar4 + 1;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (iVar4 < 0xb);
  uVar6 = 0;
  ppuVar5 = &PTR_DAT_0032e810;
  do {
    lVar1 = FUN_0012b0d8(acStack_10,*ppuVar5);
    if (lVar1 == 0) {
      return 0;
    }
    uVar6 = uVar6 + 2;
    ppuVar5 = ppuVar5 + 2;
  } while (uVar6 < 3);
  return 1;
}

// 0x0028c960  size 0x15c
void FUN_0028c960(int param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 < 0) {
    if (param_2 == -1) {
      FUN_001fd070(0x16);
    }
    else if (param_2 == -2) {
      uVar3 = 0;
      *(undefined4 *)(iGpffff8d68 + 0x538) = 0;
      *(undefined4 *)(iGpffff8d68 + 0x53c) = 0;
      lVar1 = FUN_0012b0d8(param_1 + 0x38,0x366bc8);
      if (lVar1 == 0) {
        uVar3 = 0x10;
      }
      lVar1 = FUN_0012b0d8(param_1 + 0x38,0x366bd0);
      if (lVar1 == 0) {
        uVar3 = 0x20;
      }
      lVar1 = FUN_0012b0d8(param_1 + 0x38,0x366bd8);
      if (lVar1 == 0) {
        uVar3 = 0x20;
      }
      lVar1 = FUN_0012b0d8(param_1 + 0x38,0x366be8);
      if (lVar1 == 0) {
        uVar3 = 0x40;
      }
      uVar2 = FUN_001c1890(0);
      FUN_001b2e70(uVar2,param_1 + 0x38);
      uVar2 = FUN_001c1890(0);
      FUN_001be7c0(uVar2,uVar3);
      FUN_001c1a10();
      iGpffff8bc4 = *(byte *)(iGpffff8ae4 + 0x15) + 7;
      FUN_0017e860(0);
      FUN_001fd070(0xfffffffffffffffd);
    }
    else if (param_2 == -3) {
      FUN_001c1a10();
      FUN_001fb2a0();
    }
  }
  else {
    *(int *)(param_1 + 0x20) = (int)param_2;
  }
  return;
}

// 0x0028cac0  size 0x58
void FUN_0028cac0(undefined8 param_1)

{
  char cVar1;
  int *piVar2;
  
  FUN_001f8640(param_1,0,2,1,0,0);
  piVar2 = (int *)param_1;
  cVar1 = -2;
  if (*piVar2 != 0) {
    cVar1 = '\x01';
  }
  piVar2[4] = (int)cVar1;
  piVar2[5] = 1;
  return;
}

// 0x0028cb20  size 0x388
void FUN_0028cb20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  *param_1 = 0;
  uVar8 = 0;
  iVar2 = param_1[9];
  param_1[9] = 0;
  if ((iVar2 != 0) && (param_1[3] == 10)) {
    param_1[3] = 9;
    *(undefined1 *)((int)param_1 + 0x41) = 0;
  }
  uVar6 = 0;
  pcVar5 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0 + param_1[1];
  do {
    if (*pcVar5 != '\0') {
      uVar8 = uVar8 | 1 << (uVar6 & 0x1f);
    }
    uVar6 = uVar6 + 1;
    pcVar5 = pcVar5 + 0xd;
  } while ((int)uVar6 < 6);
  uVar6 = 0;
  pcVar5 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0 + param_1[2] * 0xd;
  do {
    if (*pcVar5 != '\0') {
      uVar7 = uVar7 | 1 << (uVar6 & 0x1f);
    }
    uVar6 = uVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while ((int)uVar6 < 0xd);
  FUN_001f8640(param_1 + 1,0,8,0xc,1,uVar7);
  FUN_001f8640(param_1 + 2,0,2,5,1,uVar8);
  param_1[4] = 0xfffffffc;
  param_1[5] = 0xfffffffc;
  uVar7 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar7) == 0) {
    uVar7 = 0x100000;
  }
  else if (uVar7 == 0x80000) {
    uVar7 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar7 = 0x100000;
  }
  if (uVar7 == 0x10) {
    cVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_0032e7b0[param_1[2] * 0xd + param_1[1]];
    if (cVar1 == '>') {
      bVar3 = false;
      cVar1 = *(char *)(param_1 + 0xe);
      iVar2 = 0;
      while (cVar1 != '\0') {
        if (*(char *)((int)param_1 + iVar2 + 0x38) != ' ') {
          bVar3 = true;
          break;
        }
        cVar1 = *(char *)((int)param_1 + iVar2 + 0x39);
        iVar2 = iVar2 + 1;
      }
      lVar4 = FUN_0028c8b0(param_1 + 0xe);
      if (lVar4 == 0) {
        bVar3 = false;
      }
      if (!bVar3) {
        *(undefined1 *)(param_1 + 0xe) = 0x4b;
        *(undefined1 *)((int)param_1 + 0x39) = 0x61;
        *(undefined1 *)((int)param_1 + 0x3a) = 0x69;
        *(undefined1 *)((int)param_1 + 0x3b) = 100;
        *(undefined1 *)(param_1 + 0xf) = 0x6f;
        *(undefined1 *)((int)param_1 + 0x3d) = 0x5f;
        *(undefined1 *)((int)param_1 + 0x3e) = 0x54;
        *(undefined1 *)((int)param_1 + 0x3f) = 0x61;
        *(undefined1 *)(param_1 + 0x10) = 0x72;
        *(undefined1 *)((int)param_1 + 0x41) = 0x6f;
        *(undefined1 *)((int)param_1 + 0x42) = 0;
        param_1[3] = 10;
        param_1[1] = 1;
        param_1[2] = 3;
      }
      param_1[8] = 2;
    }
    else if (cVar1 == '<') {
      iVar2 = param_1[3];
      if (0 < iVar2) {
        param_1[3] = iVar2 + -1;
        *(undefined1 *)((int)param_1 + iVar2 + 0x37) = 0;
      }
    }
    else {
      iVar2 = param_1[3];
      if (iVar2 < 9) {
        param_1[3] = iVar2 + 1;
        *(char *)((int)param_1 + iVar2 + 0x38) = cVar1;
        *(undefined1 *)((int)param_1 + param_1[3] + 0x38) = 0;
      }
      else {
        param_1[3] = 10;
        *(char *)((int)param_1 + 0x41) = cVar1;
        *(undefined1 *)((int)param_1 + 0x42) = 0;
        param_1[8] = 2;
      }
    }
  }
  else if (uVar7 == 0x20) {
    iVar2 = param_1[3];
    if (iVar2 == 0) {
      param_1[8] = 0;
    }
    else {
      param_1[3] = iVar2 + -1;
      *(undefined1 *)((int)param_1 + iVar2 + 0x37) = 0;
    }
  }
  else if (uVar7 == 0x40) {
    FUN_001fb290(5);
    param_1[1] = 1;
    param_1[2] = 5;
  }
  return;
}

// 0x0028ceb0  size 0xa8
void FUN_0028ceb0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int *piVar5;
  
  uVar2 = FUN_001c1890(0);
  lVar3 = FUN_001c1820(uVar2);
  piVar5 = (int *)param_1;
  if (lVar3 == 0) {
    FUN_001f8640(param_1,0,2,1,1,2);
    iVar1 = *piVar5;
  }
  else {
    FUN_001f8640(param_1,0,2,1,1,0);
    iVar1 = *piVar5;
  }
  cVar4 = '\x01';
  if (iVar1 != 1) {
    cVar4 = -3;
  }
  piVar5[4] = (int)cVar4;
  piVar5[5] = -1;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *(undefined1 *)(piVar5 + 0xe) = 0;
  return;
}

// 0x0028cf70  size 0x100
void FUN_0028cf70(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  lVar1 = FUN_001fb170(iVar3 + 0x18);
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032e800)[*(int *)(iVar3 + 0x1c)])(param_1);
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
    if (uVar2 == 0x10) {
      FUN_001fb290(5);
      FUN_0028c960(param_1,*(undefined4 *)(iVar3 + 0x10));
    }
    else if (uVar2 == 0x20) {
      FUN_001fb290(6);
      FUN_0028c960(param_1,*(undefined4 *)(iVar3 + 0x14));
    }
    FUN_001fb240(iVar3 + 0x18);
  }
  return;
}

// 0x0028d070  size 0x68
void FUN_0028d070(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 1;
  param_1[0xd] = 0;
  param_1[0xb] = 1;
  param_1[9] = 1;
  param_1[0xc] = 0;
  uVar1 = FUN_001c1890(0);
  lVar2 = FUN_001c1820(uVar1);
  if (lVar2 == 0) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}

// 0x0028d0f0  size 0x1dc
void FUN_0028d0f0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  lVar1 = FUN_001fb170(piVar3 + 1);
  if (lVar1 != 0) {
    if (piVar3[2] == 0) {
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
      if (uVar2 == 0x10) {
        FUN_001fb290(5);
        if (*piVar3 == 1) {
          FUN_001fb2a0();
          FUN_001c1a10();
        }
        else {
          *piVar3 = 0;
          piVar3[3] = 1;
        }
      }
      else if (uVar2 == 0x20) {
        FUN_001fb290(6);
        FUN_001fb2a0();
      }
    }
    else {
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
      if (uVar2 == 0x10) {
        FUN_001fb290(5);
        if (*piVar3 == 1) {
          FUN_001fd070(0x16);
        }
        else {
          FUN_001fd070(0x19);
        }
      }
      else if (uVar2 == 0x20) {
        FUN_001fb290(6);
        *piVar3 = 1;
        piVar3[3] = 0;
      }
    }
    FUN_001f8640(param_1,0,2,1,1,0);
    FUN_001fb240(piVar3 + 1);
  }
  return;
}

// 0x0028d2d0  size 0xa0
void FUN_0028d2d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(iGpffff8d68 + 0x24);
  if ((iVar1 != 0xe) && (iVar1 != 0xd)) {
    if (iVar1 != 0x19) {
      return;
    }
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1[2] = 1;
    param_1[3] = 1;
    param_1[5] = 1;
    param_1[8] = 0;
    param_1[6] = 1;
    param_1[4] = 1;
    param_1[7] = 0;
  }
  *param_1 = 1;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 1;
  param_1[8] = 0;
  param_1[6] = 1;
  param_1[4] = 1;
  param_1[7] = 0;
  FUN_001c1980();
  return;
}

// 0x0028d3f0  size 0x118
void FUN_0028d3f0(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  
  FUN_001f8640(param_1,0,2,8,1,0);
  piVar2 = (int *)param_1;
  piVar2[1] = *(int *)(&DAT_0032e820 + *piVar2 * 4);
  uVar1 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar1) == 0) {
    uVar1 = 0x100000;
  }
  else if (uVar1 == 0x80000) {
    uVar1 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar1 = 0x100000;
  }
  if (uVar1 == 0x10) {
    FUN_001fb290(5);
    FUN_001fd070(*(undefined4 *)(&DAT_0032e820 + *piVar2 * 4));
  }
  else if (uVar1 == 0x20) {
    FUN_001fb290(6);
    FUN_001fb2a0();
  }
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

// 0x0028d510  size 0x1e0
void FUN_0028d510(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(iGpffff8d68 + 0x24);
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
  iVar3 = FUN_001c1890(0);
  iVar4 = FUN_002d3ba0(0);
  iVar5 = 0;
  sVar1 = *(short *)(iVar3 + iVar4 * 2 + 0x13ee);
  *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
  *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
  *(undefined4 *)(iGpffff8d68 + 0x544) = 0xfffffffe;
  *(undefined4 *)(iGpffff8d68 + 0x594) = 0;
  iVar3 = iGpffff8d68 + 0x534;
  do {
    *(undefined2 *)(iVar3 + 0x14) = 0x162;
    iVar5 = iVar5 + 7;
    *(undefined2 *)(iVar3 + 0x16) = 0x162;
    *(undefined2 *)(iVar3 + 0x18) = 0x162;
    *(undefined2 *)(iVar3 + 0x1a) = 0x162;
    *(undefined2 *)(iVar3 + 0x1c) = 0x162;
    *(undefined2 *)(iVar3 + 0x1e) = 0x162;
    *(undefined2 *)(iVar3 + 0x20) = 0x162;
    iVar3 = iVar3 + 0xe;
  } while (iVar5 < 0x15);
  *param_1 = 0;
  if (iVar2 == 0xf) {
    *param_1 = 8;
  }
  else if (iVar2 == 0x12) {
    *param_1 = 7;
  }
  else if (iVar2 == 0x10) {
    *param_1 = 6;
  }
  else if (iVar2 == 0x14) {
    *param_1 = 5;
  }
  else if (iVar2 == 0x13) {
    *param_1 = 4;
  }
  else if (iVar2 == 0x11) {
    *param_1 = 3;
  }
  else if (iVar2 == 8) {
    *param_1 = 2;
  }
  else if (iVar2 == 0x28) {
    *param_1 = 1;
  }
  else if (iVar2 == 0x1f) {
    *param_1 = 0;
  }
  return;
}

// 0x0028d6f0  size 0x260
undefined4 FUN_0028d6f0(void)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar2 = FUN_001c1890(0);
  cVar1 = FUN_001c1700(uVar2);
  if ((cVar1 == '\0') && (uVar3 = FUN_001bdd00(uVar2), (uVar3 & 0x4000) == 0)) {
    FUN_001bdd10(uVar2,0x4000);
    uGpffff8bc4 = 0x11;
    FUN_0017e860(2);
    uVar4 = 1;
  }
  else {
    cVar1 = FUN_001c1700(uVar2);
    if ((cVar1 == '\x05') && (uVar3 = FUN_001bdd00(uVar2), (uVar3 & 0x8000) == 0)) {
      FUN_001bdd10(uVar2,0x8000);
      uGpffff8bc4 = 0x15;
      FUN_0017e860(2);
      uVar4 = 1;
    }
    else {
      cVar1 = FUN_001c1700(uVar2);
      if ((cVar1 == '\x03') && (uVar3 = FUN_001bdd00(uVar2), (uVar3 & 0x10000) == 0)) {
        FUN_001bdd10(uVar2);
        uGpffff8bc4 = 0x13;
        FUN_0017e860(2);
        uVar4 = 1;
      }
      else {
        cVar1 = FUN_001c1700(uVar2);
        if ((cVar1 == '\x02') && (uVar3 = FUN_001bdd00(uVar2), (uVar3 & 0x20000) == 0)) {
          FUN_001bdd10(uVar2);
          uGpffff8bc4 = 0x12;
          FUN_0017e860(2);
          uVar4 = 1;
        }
        else {
          cVar1 = FUN_001c1700(uVar2);
          if ((cVar1 == '\x04') && (uVar3 = FUN_001bdd00(uVar2), (uVar3 & 0x40000) == 0)) {
            FUN_001bdd10(uVar2);
            uGpffff8bc4 = 0x14;
            FUN_0017e860(2);
            uVar4 = 1;
          }
          else {
            cVar1 = FUN_001c1700(uVar2);
            if ((cVar1 == '\a') && (uVar3 = FUN_001bdd00(uVar2), (uVar3 & 0x80000) == 0)) {
              FUN_001bdd10(uVar2);
              uGpffff8bc4 = 0x17;
              FUN_0017e860(2);
              uVar4 = 1;
            }
            else {
              cVar1 = FUN_001c1700(uVar2);
              if ((cVar1 == '\x06') && (uVar3 = FUN_001bdd00(uVar2), (uVar3 & 0x100000) == 0)) {
                FUN_001bdd10(uVar2);
                uGpffff8bc4 = 0x16;
                FUN_0017e860(2);
                uVar4 = 1;
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}

// 0x0028d960  size 0x2fc
void FUN_0028d960(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
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
  if (uVar6 == 0x10) {
    FUN_0020edb0(5,0xffff);
    FUN_001fb290(5);
    lVar4 = FUN_0028d6f0();
    if (lVar4 == 1) {
      FUN_001fd070(0xfffffffffffffffd);
    }
    else {
      FUN_001fd070(0x1b);
    }
  }
  else if (uVar6 == 0x20) {
    FUN_0020edb0(5,0xffff);
    FUN_001fb2a0();
    FUN_001fb290(6);
  }
  uVar3 = FUN_001f68b0(1);
  lVar4 = FUN_001f8640(param_1,0,2,uVar3,1,0);
  puVar7 = (undefined4 *)param_1;
  if (lVar4 == 1) {
    uVar3 = FUN_001f6a70(*puVar7);
    uVar3 = FUN_001f67f0(uVar3,0);
    FUN_0020edb0(10,uVar3);
    puVar7[2] = 0;
  }
  else {
    puVar7[2] = puVar7[2] + 1;
    if (puVar7[2] == 0xb4) {
      uVar3 = FUN_001f6a70(*puVar7);
      uVar3 = FUN_001f67f0(uVar3,1);
      FUN_0020edb0(10,uVar3);
    }
    else if (puVar7[2] == 0x168) {
      puVar7[2] = 0;
      uVar3 = FUN_001f6a70(*puVar7);
      uVar3 = FUN_001f67f0(uVar3,0);
      FUN_0020edb0(10,uVar3);
    }
  }
  iVar2 = FUN_001f68b0(1);
  FUN_001f8300(puVar7 + 3,puVar7 + 1,iVar2 + 1,4,0,2);
  uVar3 = FUN_001f6a70(*puVar7);
  FUN_0017e830(uVar3);
  uVar1 = FUN_001f6a70(*puVar7);
  *(undefined1 *)(iGpffff8d68 + 0x620) = uVar1;
  *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
  *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar1;
  switch(uVar1) {
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
  uVar3 = FUN_001c1890(0);
  uVar5 = FUN_001f6a70(*puVar7);
  FUN_001c16f0(uVar3,uVar5);
  return;
}

// 0x0028dc60  size 0x180
void FUN_0028dc60(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  param_1[3] = 0;
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001c1700(uVar3);
  iVar2 = FUN_001f69f0(uVar3);
  *param_1 = iVar2;
  if (*param_1 < 4) {
    param_1[1] = *param_1;
  }
  else {
    param_1[1] = 0;
  }
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001c1700(uVar3);
  FUN_0017e830(uVar3);
  uVar3 = FUN_001c1890(0);
  uVar1 = FUN_001c1700(uVar3);
  *(undefined1 *)(iGpffff8d68 + 0x620) = uVar1;
  *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
  *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar1;
  switch(uVar1) {
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
  FUN_0020ee40(0x1c,0x1c,0x14,0);
  uVar3 = FUN_001c1890(0);
  uVar3 = FUN_001c1700(uVar3);
  uVar3 = FUN_001f67f0(uVar3,0);
  FUN_0020edb0(10,uVar3);
  param_1[2] = 0;
  return;
}

// 0x0028dde0  size 0x84
void FUN_0028dde0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(iGpffff8d68 + 0x24);
  if (iVar1 == 10) {
    *param_1 = 7;
  }
  else if (iVar1 == 0x15) {
    *param_1 = 6;
  }
  else if (iVar1 == 0x1a) {
    *param_1 = 5;
  }
  else if (iVar1 == 0x27) {
    *param_1 = 3;
  }
  else if (iVar1 == 0xc) {
    *param_1 = 2;
  }
  else if (iVar1 == 1) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}

// 0x0028de70  size 0x250
void FUN_0028de70(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
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
  if (uVar3 == 0x10) {
    if (param_1[1] == -2) {
      FUN_001fb290(8);
      iVar1 = param_1[1];
    }
    else {
      if (param_1[0xb] == 7) {
        FUN_001fb290(0xc);
        uVar2 = FUN_001c1890(0);
        FUN_001bca50(uVar2,param_1[9],0);
      }
      else {
        FUN_001fb290(5);
      }
      iVar1 = param_1[1];
    }
    if (-1 < iVar1) {
      param_1[0xc] = iVar1;
      return;
    }
    if (iVar1 != -1) {
      return;
    }
    if (*(int *)(&DAT_0032e870 + param_1[3] * 4) == -1) {
      FUN_001fd070(0xe);
      return;
    }
    FUN_001fd070();
    return;
  }
  if (uVar3 != 0x20) {
    return;
  }
  if (*param_1 == -2) {
    FUN_001fb290(8);
  }
  else if (*param_1 == -3) {
    if (param_1[3] == 7) {
      FUN_001fb290(8);
      iVar1 = *param_1;
      goto LAB_0028df54;
    }
    FUN_001fb290(6);
    param_1[3] = 7;
  }
  else if (param_1[0xb] == 7) {
    FUN_001fb290(0xc);
    uVar2 = FUN_001c1890(0);
    FUN_001bca50(uVar2,param_1[9],0);
  }
  else {
    FUN_001fb290(6);
  }
  iVar1 = *param_1;
LAB_0028df54:
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      if (*(int *)(&DAT_0032e870 + param_1[3] * 4) == -1) {
        FUN_001fd070(0xe);
      }
      else {
        FUN_001fd070();
      }
    }
  }
  else {
    param_1[0xc] = iVar1;
  }
  return;
}

// 0x0028e560  size 0x80
void FUN_0028e560(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_001c1890(0);
  lVar2 = FUN_001b89d0(uVar1);
  if (0 < lVar2) {
    *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1c000;
  }
  *param_1 = 0xfffffffd;
  param_1[1] = 0xffffffff;
  FUN_001f8640(param_1 + 3,0,2,7,1,param_1[4]);
  return;
}

// 0x0028e5e0  size 0x44
void FUN_0028e5e0(void)

{
  undefined8 uVar1;
  
  if (*(int *)(iRam0036f458 + 0x20) == 0xe) {
    uVar1 = FUN_001c1890(0);
    FUN_001bcb10(uVar1);
  }
  return;
}

// 0x0028e630  size 0x60
void FUN_0028e630(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_001fb170(iVar2 + 0x28);
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032e850)[*(int *)(iVar2 + 0x2c)])(param_1);
    FUN_0028de70(param_1);
    FUN_001fb240(iVar2 + 0x28);
  }
  return;
}

// 0x0028e690  size 0x3e0
void FUN_0028e690(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  *(undefined1 *)(iRam0036f458 + 0x620) = 1;
  *(undefined4 *)(iRam0036f458 + 0x624) = 0xffffffff;
  *(undefined4 *)(iRam0036f458 + 0x628) = 0xffffffff;
  *(undefined1 *)(iRam0036f458 + 0x5ac) = 1;
  *(undefined1 *)(iRam0036f458 + 0x640) = 0;
  FUN_0028dde0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x2000;
  if (*(int *)(iRam0036f458 + 0x24) == 0xe) {
    uVar6 = FUN_001c1890(0);
    iVar3 = FUN_001c1820(uVar6);
    if (iVar3 % 0xf == 0) {
      uVar6 = FUN_001c1890(0);
      lVar7 = FUN_001b86a0(uVar6);
      if (lVar7 != 0) {
        uVar8 = 6;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20;
      }
    }
    uVar6 = FUN_001c1890(0);
    lVar7 = FUN_001b3c00(uVar6);
    if (lVar7 == 1) {
      uVar8 = 5;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
    }
    uVar6 = FUN_001c1890(0);
    lVar7 = FUN_001b3c80(uVar6);
    if (lVar7 == 1) {
      uVar8 = 4;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
    uVar6 = FUN_001c1890(0);
    lVar7 = FUN_001c1820(uVar6);
    if (lVar7 == 2) {
      uVar8 = 3;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    }
  }
  cVar2 = FUN_0017e8d0();
  if (cVar2 == '\a') {
    cVar2 = FUN_0017e870();
    if (cVar2 == '\x03') {
      uVar6 = FUN_0017e850();
      uVar4 = FUN_001f69f0(uVar6);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      uVar6 = FUN_001c1890(0);
      iVar3 = FUN_001c1820(uVar6);
      if (iVar3 % 0xf == 0) {
        uVar6 = FUN_001c1890(0);
        lVar7 = FUN_001b86a0(uVar6);
        if (lVar7 != 0) {
          uVar8 = 6;
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20;
        }
      }
      uVar6 = FUN_001c1890(0);
      lVar7 = FUN_001b3c00(uVar6);
      if (lVar7 == 1) {
        uVar8 = 5;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
      }
      uVar6 = FUN_001c1890(0);
      lVar7 = FUN_001b3c80(uVar6);
      if (lVar7 == 1) {
        uVar8 = 4;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      }
      uVar6 = FUN_001c1890(0);
      lVar7 = FUN_001c1820(uVar6);
      if (lVar7 == 2) {
        uVar8 = 3;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
      }
      if (*(int *)(param_1 + 0x20) != 7) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
        *(undefined4 *)(param_1 + 0x24) =
             *(undefined4 *)(&DAT_0032e890 + *(int *)(param_1 + 0x20) * 4);
        uVar8 = 7;
      }
    }
    else if (cVar2 == '\x01') {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
      uVar8 = 2;
    }
    else if (cVar2 == '\0') {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      uVar8 = 1;
    }
    FUN_0017e860(6);
    FUN_0017e8c0(1);
  }
  bVar1 = false;
  iVar3 = 0;
  do {
    iVar5 = FUN_001c1890(0);
    cVar2 = FUN_001b3110(iVar5 + 0xd82c,iVar3);
    if (cVar2 != '\0') {
      bVar1 = true;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  uVar6 = FUN_001c1890(0);
  lVar7 = FUN_001b89d0(uVar6);
  if (lVar7 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xa2;
  }
  else {
    iVar3 = FUN_001c1890(0);
    if ((*(uint *)(iVar3 + 0x272c) & 0x200000) == 0) {
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x10) = 0xbf;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0xb7;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0xff;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

// 0x0028ea70  size 0x220
void FUN_0028ea70(int *param_1)

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
  if (uVar2 == 0x10) {
    if (param_1[1] == -2) {
      FUN_001fb290(8);
      iVar1 = param_1[1];
    }
    else {
      FUN_001fb290(5);
      iVar1 = param_1[1];
    }
    if (iVar1 < 0) {
      if (iVar1 == -1) {
        if (param_1[0xb] == 2) {
          FUN_001fd070(0xd);
          iVar1 = param_1[2];
        }
        else {
          iVar1 = param_1[2];
        }
        if (*(int *)(&DAT_0032e870 + iVar1 * 4) == -1) {
          param_1[0xc] = 2;
        }
        else {
          FUN_001fd070();
        }
      }
    }
    else {
      param_1[0xc] = iVar1;
    }
  }
  else if (uVar2 == 0x20) {
    if (*param_1 == -2) {
      FUN_001fb290(8);
      iVar1 = *param_1;
    }
    else {
      if (*param_1 == -3) {
        if (param_1[2] == 7) {
          FUN_001fb290(8);
        }
        else {
          FUN_001fb290(6);
          param_1[2] = 7;
        }
      }
      else {
        FUN_001fb290(6);
      }
      iVar1 = *param_1;
    }
    if (iVar1 < 0) {
      if (iVar1 == -1) {
        if (param_1[0xb] == 2) {
          FUN_001fd070(0xd);
          iVar1 = param_1[2];
        }
        else {
          iVar1 = param_1[2];
        }
        if (*(int *)(&DAT_0032e870 + iVar1 * 4) == -1) {
          param_1[0xc] = 2;
        }
        else {
          FUN_001fd070();
        }
      }
    }
    else {
      param_1[0xc] = iVar1;
    }
  }
  return;
}

// 0x0028ec90  size 0x168
void FUN_0028ec90(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_ca0 [404];
  int aiStack_650 [404];
  
  uVar2 = FUN_001c1890(0);
  FUN_001bea90(aiStack_ca0,uVar2);
  piVar5 = aiStack_ca0;
  piVar4 = aiStack_650;
  iVar3 = 0xca;
  do {
    iVar3 = iVar3 + -1;
    iVar1 = piVar5[1];
    *piVar4 = *piVar5;
    piVar4[1] = iVar1;
    piVar5 = piVar5 + 2;
    piVar4 = piVar4 + 2;
  } while (0 < iVar3);
  iVar3 = param_1[0xd];
  param_1[0xd] = 0;
  if (iVar3 != 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[8] = 0;
    param_1[7] = 0;
    iVar3 = param_1[7];
    while ((iVar3 < 200 && (aiStack_650[iVar3 * 2 + 1] != -1))) {
      param_1[7] = param_1[7] + 1;
      iVar3 = param_1[7];
    }
    param_1[9] = 0;
    iVar3 = param_1[7] + -6;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    param_1[7] = iVar3;
  }
  iVar3 = param_1[8];
  FUN_001f8640(param_1 + 8,0,2,param_1[7],0,0);
  if (iVar3 < (int)param_1[8]) {
    param_1[9] = 1;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
  }
  else if ((int)param_1[8] < iVar3) {
    param_1[9] = 2;
    *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x400000;
  }
  return;
}

// 0x0028ef30  size 0x58
void FUN_0028ef30(undefined4 *param_1)

{
  *param_1 = 0xfffffffd;
  param_1[1] = 0xffffffff;
  FUN_001f8640(param_1 + 2,0,2,7,1,param_1[4]);
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  return;
}

// 0x0028ef90  size 0x44
void FUN_0028ef90(void)

{
  undefined8 uVar1;
  
  if (*(int *)(iGpffff8d68 + 0x20) == 0xd) {
    uVar1 = FUN_001c1890(0);
    FUN_001bcb10(uVar1);
  }
  return;
}

// 0x0028efe0  size 0x60
void FUN_0028efe0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_001fb170(iVar2 + 0x28);
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032e8b0)[*(int *)(iVar2 + 0x2c)])(param_1);
    FUN_0028ea70(param_1);
    FUN_001fb240(iVar2 + 0x28);
  }
  return;
}

// 0x0028f040  size 0x120
void FUN_0028f040(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(iGpffff8d68 + 0x620) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
  *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
  *(undefined1 *)(iGpffff8d68 + 0x5ac) = 1;
  *(undefined1 *)(iGpffff8d68 + 0x640) = 0;
  FUN_0028dde0(param_1 + 8);
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x2000;
  uVar2 = FUN_001c1890(0);
  lVar3 = FUN_001c1820(uVar2);
  if ((lVar3 == 1) && (*(int *)(iGpffff8d68 + 0x24) == 0xd)) {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar1 = FUN_001c1890(0);
  if ((*(uint *)(iVar1 + 0x272c) & 0x200000) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xb5;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0xf5;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 0x0028f160  size 0x1b8
void FUN_0028f160(int param_1)

{
  int iVar1;
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
  if (uVar3 == 0x20) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 4) == 0) {
      FUN_0020edb0(5,0xffff);
      iVar2 = *(int *)(param_1 + 4);
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
    }
    if (iVar2 == 2) {
      FUN_001f8ca0(iGpffff8d68 + 0x654);
    }
    if (iVar1 < 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        FUN_001fd070(*(undefined4 *)(iGpffff8d68 + 0x24));
      }
      else {
        FUN_001fd070(0xb);
      }
    }
    else {
      *(int *)(param_1 + 8) = iVar1;
    }
    FUN_001fb290(6);
  }
  else if (uVar3 == 0x10) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 4) == 0) {
      FUN_0020edb0(5,0xffff);
      iVar2 = *(int *)(param_1 + 4);
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
    }
    if (iVar2 == 2) {
      FUN_001f8ca0(iGpffff8d68 + 0x654);
    }
    if (iVar1 < 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        FUN_001fd070(*(undefined4 *)(iGpffff8d68 + 0x24));
      }
      else {
        FUN_001fd070(0xb);
      }
    }
    else {
      *(int *)(param_1 + 8) = iVar1;
    }
    FUN_001fb290(5);
  }
  return;
}

// 0x0028f320  size 0x3e4
void FUN_0028f320(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_10 [4];
  
  iVar8 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x34);
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 1;
      *(undefined4 *)(param_1 + 0x58) = 1;
      uVar6 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
      cVar2 = FUN_00182c40(uVar6,*(undefined1 *)(param_1 + 0x30));
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x40) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x3c) = 9;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      cVar2 = *(char *)(param_1 + 0x30);
      uVar6 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
      cVar3 = FUN_00182c40(uVar6,*(undefined1 *)(param_1 + 0x30));
      if (cVar2 == cVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 1;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x40);
      uVar1 = *(undefined4 *)(param_1 + 0x3c);
      uVar4 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
      *(undefined1 *)(iGpffff8d68 + 0x620) = uVar4;
      *(undefined4 *)(iGpffff8d68 + 0x624) = 0xffffffff;
      *(undefined4 *)(iGpffff8d68 + 0x628) = 0xffffffff;
      *(undefined1 *)(iGpffff8d68 + 0x5ac) = uVar4;
      switch(uVar4) {
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
      *(undefined4 *)(iGpffff8d68 + 0x624) = uVar1;
      *(undefined4 *)(iGpffff8d68 + 0x628) = uVar5;
    }
    uVar6 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
    FUN_001f6720(afStack_10,uVar6,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    *(int *)(param_1 + 0x50) = (int)(afStack_10[0] * 1000.0);
    FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    iVar8 = *(int *)(param_1 + 0x34);
  }
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0x40);
    iVar9 = *(int *)(param_1 + 0x3c);
  }
  else {
    iVar9 = iVar8 + -1;
    if (((*(int *)(param_1 + 0x60) != 0) && (*(int *)(param_1 + 0x30) == 0)) ||
       ((*(int *)(param_1 + 0x60) == 0 && (*(int *)(param_1 + 0x30) == 1)))) {
      iVar9 = 9 - iVar9;
      iVar8 = 9 - iVar8;
    }
  }
  uVar6 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
  FUN_001f6720(&fStack_20,uVar6,iVar9,iVar8);
  *(int *)(param_1 + 0x48) = (int)(fStack_20 * 1000.0);
  uVar5 = FUN_00124aa0((int)((fStack_1c - fStack_18) * 1000.0));
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar7 = piGpffff8d78[2];
  if ((piGpffff8d78[4] & uVar7) == 0) {
    uVar7 = 0x100000;
  }
  else if (uVar7 == 0x80000) {
    uVar7 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar7 = 0x100000;
  }
  if (uVar7 == 8) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) + 1) % 10;
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 4;
    }
    *(undefined1 *)(param_1 + 0x20) = 3;
    FUN_001fb290(7);
  }
  else if (uVar7 == 4) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) + 9) % 10;
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 4;
    }
    *(undefined1 *)(param_1 + 0x20) = 4;
    FUN_001fb290(7);
  }
  return;
}

// 0x0028f710  size 0x74
void FUN_0028f710(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[3] = 0;
  if (iVar1 != 0) {
    param_1[0x15] = 2;
    param_1[0x16] = 0;
    if (*param_1 == 0) {
      param_1[0xc] = 0;
    }
  }
  FUN_001f8640(param_1 + 0xc,0,2,1,0,0);
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  return;
}

// 0x0028f790  size 0x220
void FUN_0028f790(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    FUN_0020ee40(0x1c,0x1c,0x14,0);
    uVar4 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
    uVar4 = FUN_001f67f0(uVar4,0);
    FUN_0020edb0(10,uVar4);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  lVar3 = FUN_001f8640(param_1 + 0x2c,0,2,*(int *)(param_1 + 0x24) + -1,1,0);
  if (lVar3 == 1) {
    uVar4 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
    uVar4 = FUN_001f67f0(uVar4,0);
    FUN_0020edb0(10,uVar4);
    *(undefined4 *)(param_1 + 100) = 0;
LAB_0028f828:
    iVar5 = *(int *)(param_1 + 0x24);
  }
  else {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (*(int *)(param_1 + 100) != 0xb4) {
      if (*(int *)(param_1 + 100) == 0x168) {
        *(undefined4 *)(param_1 + 100) = 0;
        uVar4 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
        uVar4 = FUN_001f67f0(uVar4,0);
        FUN_0020edb0(10,uVar4);
      }
      goto LAB_0028f828;
    }
    uVar4 = FUN_001f6a70(*(undefined4 *)(param_1 + 0x2c));
    uVar4 = FUN_001f67f0(uVar4,1);
    FUN_0020edb0(10,uVar4);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  if (4 < iVar5) {
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == (iVar1 + 1) % iVar5) {
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
      if (uVar6 == 1) {
        *(int *)(param_1 + 0x28) = iVar1;
        *(undefined1 *)(param_1 + 0x20) = 2;
        goto LAB_0028f8e0;
      }
    }
    if (iVar1 == (iVar2 + 4) % iVar5) {
      *(int *)(param_1 + 0x28) = (iVar2 + 1) % iVar5;
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
LAB_0028f8e0:
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x1c000;
  return;
}

// 0x0028f9c0  size 0x5c
void FUN_0028f9c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_001fb170();
  if (lVar1 != 0) {
    (*(code *)(&PTR_FUN_0032e8c0)[*(int *)((int)param_1 + 4)])(param_1);
    FUN_0028f160(param_1);
    FUN_001fb240(param_1);
  }
  return;
}

// 0x0028fa20  size 0x2a4
void FUN_0028fa20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_10 [4];
  
  param_1[0xb] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  iVar2 = FUN_001f68b0(1);
  param_1[9] = iVar2 + 1;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1[0xd];
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  if (*(int *)(iGpffff8d68 + 0x24) == 0xb) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 1;
    param_1[7] = 0;
    param_1[5] = 1;
    param_1[3] = 1;
    param_1[6] = 0;
    param_1[0x17] = 1;
  }
  else {
    *param_1 = 0xffffffff;
    param_1[1] = 2;
    param_1[2] = 2;
    param_1[4] = 1;
    param_1[7] = 0;
    param_1[5] = 1;
    param_1[3] = 1;
    param_1[6] = 0;
    param_1[0x17] = 0;
    iVar2 = iGpffff8d68 + 0x614;
    uVar3 = FUN_001f92e0(iVar2);
    param_1[0xf] = uVar3;
    uVar3 = FUN_001f92d0(iVar2);
    param_1[0x10] = uVar3;
    uVar3 = FUN_001f69f0(*(undefined1 *)(iGpffff8d68 + 0x620));
    param_1[0xb] = uVar3;
    if ((int)param_1[0xf] < (int)param_1[0x10]) {
      cVar1 = FUN_00182c40(*(undefined1 *)(iGpffff8d68 + 0x620),0);
      if (cVar1 == '\0') {
        param_1[0xc] = 0;
      }
      else {
        param_1[0x18] = 1;
        param_1[0xc] = 1;
      }
    }
    else {
      cVar1 = FUN_00182c40(*(undefined1 *)(iGpffff8d68 + 0x620),0);
      if (cVar1 == '\0') {
        param_1[0xc] = 1;
      }
      else {
        param_1[0x18] = 1;
        param_1[0xc] = 0;
      }
    }
    uVar4 = FUN_001f6a70(param_1[0xb]);
    FUN_001f6720(afStack_10,uVar4,param_1[0xf],param_1[0x10]);
    param_1[0x14] = (int)(afStack_10[0] * 1000.0);
    iVar2 = param_1[0xd];
    if (iVar2 == 0) {
      iVar5 = param_1[0xf];
      iVar2 = param_1[0x10];
    }
    else {
      iVar5 = iVar2 + -1;
      if (((param_1[0x18] != 0) && (param_1[0xc] == 0)) ||
         ((param_1[0x18] == 0 && (param_1[0xc] == 1)))) {
        iVar5 = 9 - iVar5;
        iVar2 = 9 - iVar2;
      }
    }
    uVar4 = FUN_001f6a70(param_1[0xb]);
    FUN_001f6720(&fStack_20,uVar4,iVar5,iVar2);
    param_1[0x12] = (int)(fStack_20 * 1000.0);
    uVar3 = FUN_00124aa0((int)((fStack_1c - fStack_18) * 1000.0));
    param_1[0x13] = uVar3;
  }
  FUN_001f8cd0(iGpffff8d68 + 0x654,0x123,0);
  return;
}

// 0x0028fcd0  size 0x98
void FUN_0028fcd0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x3c) = 2;
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar2 = FUN_001f6ed0(*(undefined4 *)(*(int *)(param_1 + 0x24) * 0xc + param_1 + 0x40));
    iVar1 = FUN_001f0490(uVar2);
    iVar1 = iVar1 + -5;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x34) = iVar1;
  }
  FUN_001f8640(param_1 + 0x30,0,2,*(undefined4 *)(param_1 + 0x34),0,0);
  return;
}

// 0x0028fd70  size 0x84
void FUN_0028fd70(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 3;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar2 = FUN_001f5c50(*(undefined4 *)(param_1 + 0x24));
    iVar1 = FUN_001f0490(uVar2);
    iVar1 = iVar1 + -5;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x34) = iVar1;
  }
  FUN_001f8640(param_1 + 0x30,0,2,*(undefined4 *)(param_1 + 0x34),0,0);
  return;
}

// 0x0028fe00  size 0x298
void FUN_0028fe00(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[3];
  param_1[3] = 0;
  if (iVar1 != 0) {
    param_1[0xf] = 0;
    param_1[10] = param_1[9];
    FUN_001f8cd0(iGpffff8d68 + 0x654,0x122,0);
    if ((param_1[param_1[9] * 3 + 0x11] != -1) && (*param_1 != 2)) {
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    }
  }
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
  if (uVar2 == 8) {
    param_1[10] = param_1[9];
    param_1[9] = (param_1[9] + 1) % 0x14;
    param_1[8] = param_1[9];
    *(undefined1 *)(param_1 + 0xb) = 3;
    FUN_001fb290(7);
    if (param_1[param_1[9] * 3 + 0x11] != -1) {
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    }
  }
  else {
    if (uVar2 != 4) {
      iVar1 = param_1[9];
      goto LAB_0028ff64;
    }
    param_1[10] = param_1[9];
    param_1[9] = (param_1[9] + 0x13) % 0x14;
    param_1[8] = param_1[9];
    *(undefined1 *)(param_1 + 0xb) = 4;
    FUN_001fb290(7);
    if (param_1[param_1[9] * 3 + 0x11] != -1) {
      FUN_001f8ae0(iGpffff8d68 + 0x654,1);
    }
  }
  iVar1 = param_1[9];
LAB_0028ff64:
  if (param_1[iVar1 * 3 + 0x11] == -1) {
    param_1[0xe] = -2;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
  }
  else {
    param_1[0xe] = 2;
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
    iVar1 = param_1[param_1[9] * 3 + 0x10];
    *(undefined4 *)(iGpffff8d68 + 0x538) = 1;
    *(int *)(iGpffff8d68 + 0x53c) = iVar1;
  }
  return;
}

