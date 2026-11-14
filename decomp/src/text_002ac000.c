// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002ac000 - 0x002b0000
#include "ghidra_types.h"

// 0x002ac030  size 0x264
void FUN_002ac030(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar8 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x6c);
  }
  else {
    *(undefined4 *)(iGpffff8d68 + 0x5a0) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x5e8) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x60c) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x634) = 0;
    *(undefined4 *)(iGpffff8d68 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0x9dc) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 2;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x9fc) = 0;
    if (*(int *)(param_1 + 0x604) < 1) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(&DAT_0032ef20 + *(int *)(param_1 + 8) * 4);
    do {
      lVar5 = FUN_0029f130(uVar6);
      if (lVar5 == 0) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & ~(1 << (uVar6 & 0x1f));
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x20);
    if (*(int *)(param_1 + 8) == 0) {
      uVar6 = 0;
      do {
        lVar5 = FUN_0029f130(uVar6);
        if (lVar5 == 1) {
          *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 1 << (uVar6 & 0x1f);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 8);
    }
    uVar6 = 0x15;
    do {
      sVar2 = FUN_002a17d0(uVar6);
      lVar5 = (long)sVar2;
      sVar3 = FUN_002a1690(uVar6);
      iVar8 = 0;
      if (lVar5 <= sVar3) {
        iVar7 = (int)sVar2 << 1;
        do {
          iVar4 = FUN_001c1890(0);
          iVar4 = iVar4 + iVar7;
          lVar5 = (long)((int)lVar5 + 1);
          iVar7 = iVar7 + 2;
          iVar8 = iVar8 + *(short *)(iVar4 + 0x1420);
        } while (lVar5 <= sVar3);
      }
      if (iVar8 == 0) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & ~(1 << (uVar6 & 0x1f));
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0x6c);
  }
  FUN_001f8640(param_1 + 0xc,0,2,0x1f,1,uVar1);
  if (*(int *)(param_1 + 8) == 3) {
    *(undefined4 *)(param_1 + 0xa24) = 4;
  }
  else if (*(int *)(param_1 + 0xc) == 0x1f) {
    *(undefined4 *)(param_1 + 0xa24) = 0xf;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = 6;
  }
  *(uint *)(iGpffff8d68 + 0x28) = *(uint *)(iGpffff8d68 + 0x28) | 0x18000;
  return;
}

// 0x002ac2a0  size 0xc4
void FUN_002ac2a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(iRam0036f458 + 0x5a0) = 0;
    *(undefined4 *)(iRam0036f458 + 0x5e8) = 0;
    *(undefined4 *)(iRam0036f458 + 0x60c) = 0;
    *(undefined4 *)(iRam0036f458 + 0x634) = 0;
    *(undefined4 *)(iRam0036f458 + 0x644) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_001f8640(param_1 + 8,0,2,5,1,0);
  if (*(int *)(param_1 + 8) == 4) {
    *(undefined4 *)(param_1 + 0xa24) = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0xa24) = 3;
  }
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x18000;
  return;
}

// 0x002ac370  size 0xe8
void FUN_002ac370(int param_1)

{
  long lVar1;
  
  *(undefined4 *)(iRam0036f458 + 0x5a0) = 0;
  *(undefined4 *)(iRam0036f458 + 0x5e8) = 0;
  *(undefined4 *)(iRam0036f458 + 0x60c) = 0;
  *(undefined4 *)(iRam0036f458 + 0x634) = 0;
  *(undefined4 *)(iRam0036f458 + 0x644) = 0;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  lVar1 = FUN_001f7ee0(0xffffffffffffffff,0);
  if (lVar1 == 0x11) {
    FUN_001f8640(param_1 + 4,0,2,2,1,6);
    *(undefined4 *)(param_1 + 0xa20) = 0;
  }
  else {
    FUN_001f8640(param_1 + 4,0,2,2,1,0);
    *(undefined4 *)(param_1 + 0xa20) = 0;
  }
  *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(&DAT_0032ef08 + *(int *)(param_1 + 4) * 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1c000;
  return;
}

// 0x002ac460  size 0x1a8
void FUN_002ac460(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(iRam0036f458 + 0x34)) {
  case 1:
    *(undefined4 *)(iRam0036f458 + 0x598) = 0;
    break;
  case 2:
    *(undefined4 *)(iRam0036f458 + 0x5dc) = 0;
    break;
  case 3:
    *(undefined4 *)(iRam0036f458 + 0x5fc) = 0;
    break;
  case 4:
    *(undefined4 *)(iRam0036f458 + 0x618) = 0;
  }
  iVar2 = FUN_001c1890(0);
  iVar3 = FUN_002d3ba0(0);
  iVar4 = iRam0036f458;
  iVar5 = 0;
  sVar1 = *(short *)(iVar2 + iVar3 * 2 + 0x13ee);
  *(undefined4 *)(iRam0036f458 + 0x538) = 2;
  *(int *)(iVar4 + 0x53c) = (int)sVar1;
  *(undefined4 *)(iRam0036f458 + 0x544) = 0xfffffffe;
  *(undefined4 *)(iRam0036f458 + 0x594) = 0;
  iVar4 = iRam0036f458 + 0x534;
  do {
    *(undefined2 *)(iVar4 + 0x14) = 0x162;
    iVar5 = iVar5 + 7;
    *(undefined2 *)(iVar4 + 0x16) = 0x162;
    *(undefined2 *)(iVar4 + 0x18) = 0x162;
    *(undefined2 *)(iVar4 + 0x1a) = 0x162;
    *(undefined2 *)(iVar4 + 0x1c) = 0x162;
    *(undefined2 *)(iVar4 + 0x1e) = 0x162;
    *(undefined2 *)(iVar4 + 0x20) = 0x162;
    iVar4 = iVar4 + 0xe;
  } while (iVar5 < 0x15);
  *(undefined4 *)(iRam0036f458 + 0x5a0) = 1;
  *(undefined4 *)(iRam0036f458 + 0x5e8) = 1;
  *(undefined4 *)(iRam0036f458 + 0x60c) = 1;
  *(undefined4 *)(iRam0036f458 + 0x634) = 1;
  *(undefined4 *)(iRam0036f458 + 0x644) = 1;
  piVar6 = (int *)param_1;
  if (piVar6[0x181] == 0) {
    FUN_001f8640(param_1,0,2,0,1,0);
  }
  else {
    FUN_001f8640(param_1,0,2,1,1,0);
  }
  piVar6[0x288] = -1;
  piVar6[0x289] = *(int *)(&DAT_0036ee48 + *piVar6 * 4);
  piVar6[0x276] = 0;
  piVar6[1] = 0;
  piVar6[0x18] = 0;
  piVar6[0x27c] = 0;
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x18000;
  return;
}

// 0x002ac610  size 0xc4
void FUN_002ac610(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(iRam0036f458 + 0x5a0) = 0;
  *(undefined4 *)(iRam0036f458 + 0x5e8) = 0;
  *(undefined4 *)(iRam0036f458 + 0x60c) = 0;
  *(undefined4 *)(iRam0036f458 + 0x634) = 0;
  *(undefined4 *)(iRam0036f458 + 0x644) = 0;
  iVar2 = FUN_001c1890(0);
  iVar3 = FUN_002d3ba0(0);
  iVar4 = iRam0036f458;
  iVar5 = 0;
  sVar1 = *(short *)(iVar2 + iVar3 * 2 + 0x13ee);
  *(undefined4 *)(iRam0036f458 + 0x538) = 2;
  *(int *)(iVar4 + 0x53c) = (int)sVar1;
  *(undefined4 *)(iRam0036f458 + 0x544) = 0xfffffffe;
  *(undefined4 *)(iRam0036f458 + 0x594) = 0;
  iVar4 = iRam0036f458 + 0x534;
  do {
    *(undefined2 *)(iVar4 + 0x14) = 0x162;
    iVar5 = iVar5 + 7;
    *(undefined2 *)(iVar4 + 0x16) = 0x162;
    *(undefined2 *)(iVar4 + 0x18) = 0x162;
    *(undefined2 *)(iVar4 + 0x1a) = 0x162;
    *(undefined2 *)(iVar4 + 0x1c) = 0x162;
    *(undefined2 *)(iVar4 + 0x1e) = 0x162;
    *(undefined2 *)(iVar4 + 0x20) = 0x162;
    iVar4 = iVar4 + 0xe;
  } while (iVar5 < 0x15);
  return;
}

// 0x002ac6e0  size 0x1d4
void FUN_002ac6e0(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar3 = FUN_001fb170(param_1 + 0xa00);
  if (lVar3 != 0) {
    (*(code *)(&PTR_FUN_0032ee90)[*(int *)(param_1 + 0xa04)])(param_1);
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
    if (uVar5 == 0x10) {
      if (*(int *)(param_1 + 0xa24) == -2) {
        FUN_001fb290(8);
        uVar1 = *(undefined4 *)(param_1 + 0xa24);
      }
      else {
        FUN_001fb290(5);
        uVar1 = *(undefined4 *)(param_1 + 0xa24);
      }
      FUN_002a8ff0(param_1,uVar1);
    }
    else if (uVar5 == 0x20) {
      FUN_001fb290(6);
      if (*(int *)(param_1 + 0xa20) == 0xf) {
        iVar6 = 0;
        iVar7 = param_1;
        do {
          iVar8 = *(int *)(iVar7 + 0x20);
          if (iVar8 == -1) {
            uVar4 = FUN_001c1890(0);
            FUN_001b7d60(uVar4,iVar6);
          }
          else {
            bVar2 = 0x1d < iVar8;
            if (bVar2) {
              iVar8 = iVar8 + -0x1e;
            }
            uVar4 = FUN_001c1890(0);
            FUN_001b7da0(uVar4,iVar6,bVar2,(short)iVar8);
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar6 < 0x10);
      }
      FUN_002a8ff0(param_1,*(undefined4 *)(param_1 + 0xa20));
    }
    FUN_001fb240(param_1 + 0xa00);
  }
  return;
}

// 0x002ac8c0  size 0x170
void FUN_002ac8c0(undefined4 *param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(iGpffff8d68 + 0x5a0) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x5e8) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x60c) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x634) = 1;
  *(undefined4 *)(iGpffff8d68 + 0x644) = 1;
  iVar3 = FUN_001c1890(0);
  iVar4 = FUN_002d3ba0(0);
  sVar1 = *(short *)(iVar3 + iVar4 * 2 + 0x13ee);
  *(undefined4 *)(iGpffff8d68 + 0x538) = 2;
  *(int *)(iGpffff8d68 + 0x53c) = (int)sVar1;
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
  param_1[0x280] = 0xffffffff;
  iVar3 = 0;
  param_1[0x281] = 0;
  param_1[0x282] = 0;
  param_1[0x284] = 1;
  param_1[0x287] = 0;
  param_1[0x285] = 1;
  param_1[0x283] = 1;
  param_1[0x286] = 0;
  *param_1 = 0;
  param_1[0x288] = 0xffffffff;
  param_1[0x289] = 0;
  param_1[0x181] = 0;
  param_1[1] = 0;
  do {
    iVar4 = FUN_001c1890(0);
    cVar2 = FUN_001b3110(iVar4 + 0xd82c,iVar3);
    if (cVar2 == '\x02') {
      param_1[param_1[0x181] + 0x182] = iVar3;
      param_1[0x181] = param_1[0x181] + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1e);
  return;
}

// 0x002aca40  size 0x58
undefined4 FUN_002aca40(int *param_1)

{
  if (param_1[0xe] == 0) {
    switch(param_1[3]) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      if (*param_1 != param_1[10]) {
        return 1;
      }
    }
  }
  return 0;
}

// 0x002acaa0  size 0x320
void FUN_002acaa0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_3 == 0) {
    iVar5 = 0;
    do {
      iVar6 = iVar5;
      puVar4 = param_2 + iVar6;
      puVar3 = param_1 + iVar6;
      iVar5 = iVar6 + 7;
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3[4] = puVar4[4];
      puVar3[5] = puVar4[5];
      puVar3[6] = puVar4[6];
    } while (iVar5 < 0x10);
    param_1[iVar5] = param_2[iVar5];
    iVar5 = 0;
    param_1[iVar6 + 8] = param_2[iVar6 + 8];
    do {
      iVar5 = iVar5 + 3;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      param_2 = param_2 + 0xc;
      param_1 = param_1 + 0xc;
    } while (iVar5 < 9);
  }
  else {
    switch(param_3) {
    case 2:
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      break;
    case 3:
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      break;
    case 4:
      param_1[0xe] = param_2[0xe];
      param_1[0x15] = param_2[0x15];
      param_1[0xf] = param_2[0xf];
      break;
    case 5:
      if (*(float *)(param_2 + 0x18) == 0.0) {
        uVar1 = FUN_001c1890(0);
        uVar1 = FUN_001bc3f0(uVar1);
        uVar2 = FUN_001d20f0(uVar1);
        iVar5 = FUN_00205570(uVar2);
        iVar7 = 0;
        iVar6 = 0;
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar5 + 0x240);
        do {
          uVar1 = FUN_001c1890(0);
          uVar1 = FUN_001bc3f0(uVar1);
          uVar2 = FUN_001d20f0(uVar1);
          iVar5 = FUN_00205570(uVar2);
          if (iVar7 < *(int *)(iVar5 + 0x1ac)) {
            uVar1 = FUN_001c1890(0);
            uVar1 = FUN_001bc3f0(uVar1);
            uVar2 = FUN_001d20f0(uVar1);
            iVar5 = FUN_00205570(uVar2);
            *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar5 + iVar6 + 0x1b4);
          }
          else {
            *(undefined4 *)(param_1 + 0x1c) = 0xc47a0000;
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 4;
          param_1 = param_1 + 4;
        } while (iVar7 < 8);
      }
      else {
        *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18);
        iVar5 = 0;
        do {
          uVar1 = FUN_001c1890(0);
          uVar1 = FUN_001bc3f0(uVar1);
          uVar2 = FUN_001d20f0(uVar1);
          iVar6 = FUN_00205570(uVar2);
          if (iVar5 < *(int *)(iVar6 + 0x1ac)) {
            *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
          }
          else {
            *(undefined4 *)(param_1 + 0x1c) = 0xc47a0000;
          }
          iVar5 = iVar5 + 1;
          param_2 = param_2 + 4;
          param_1 = param_1 + 4;
        } while (iVar5 < 8);
      }
      break;
    case 6:
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[0x10] = param_2[0x10];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x13] = param_2[0x13];
      break;
    case 7:
      param_1[0x14] = param_2[0x14];
      break;
    case 8:
      param_1[0x16] = param_2[0x16];
    }
  }
  return;
}

// 0x002acdc0  size 0x42c
void FUN_002acdc0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = (int *)param_1;
  iVar2 = piVar5[3];
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
  if (uVar6 == 0x1000) {
    if (piVar5[0xe] == 0) {
      switch(iVar2) {
      default:
        goto switchD_002ad01c_caseD_0;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        if (*piVar5 == piVar5[10]) goto switchD_002ad01c_caseD_0;
        bVar1 = true;
      }
    }
    else {
switchD_002ad01c_caseD_0:
      bVar1 = false;
    }
    if (bVar1) {
      if (piVar5[0xf] == 2) {
        FUN_001fb290(5);
        piVar5[0xf] = 3;
      }
      else if (piVar5[0xf] == 5) {
        FUN_001fb290();
        piVar5[0xf] = 0;
      }
    }
  }
  else if (uVar6 == 0x10) {
    FUN_001fb290(5);
    if (piVar5[0xf] == 2) {
      piVar5[0xf] = 3;
    }
    else {
      switch(iVar2) {
      case 0:
        piVar5[4] = *piVar5 + 1;
        piVar5[1] = 0;
        piVar5[0x10] = 1;
        uVar4 = FUN_001c1890(0);
        iVar2 = FUN_001bc3f0(uVar4);
        FUN_002acaa0(piVar5 + 0x32,iVar2 + 0x14,*piVar5 + 1);
        break;
      case 1:
        piVar5[4] = *piVar5 + 5;
        piVar5[1] = 0;
        piVar5[0x10] = 1;
        uVar4 = FUN_001c1890(0);
        iVar2 = FUN_001bc3f0(uVar4);
        FUN_002acaa0(piVar5 + 0x32,iVar2 + 0x14,*piVar5 + 5);
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        if (*piVar5 == piVar5[10]) {
          if (piVar5[0xb] == 2) {
            FUN_002acaa0(piVar5 + 0x32,piVar5 + 0x41,iVar2);
          }
          else {
            if (piVar5[0xb] == 0) {
              uVar4 = FUN_001c1890(0);
              iVar3 = FUN_001bc3f0(uVar4);
              FUN_002acaa0(iVar3 + 0x14,piVar5 + 0x32,iVar2);
            }
            if (iVar2 < 5) {
              piVar5[1] = iVar2 + -1;
              piVar5[0x10] = 1;
              piVar5[4] = 0;
            }
            else {
              piVar5[1] = iVar2 + -5;
              piVar5[0x10] = 1;
              piVar5[4] = 1;
            }
          }
        }
        else if ((iVar2 != 8) && ((iVar2 != 4 || (*piVar5 != 2)))) {
          if (piVar5[0xe] == 0) {
            FUN_002acaa0(piVar5 + 0x23,piVar5 + 0x32,iVar2);
            iVar2 = piVar5[0xe];
          }
          else {
            iVar2 = piVar5[0xe];
          }
          piVar5[0xe] = iVar2 != 0 ^ 1;
        }
      }
    }
  }
  else {
    if (uVar6 != 0x20) {
      iVar2 = piVar5[10];
      goto LAB_002ad078;
    }
    FUN_001fb290(6);
    if (piVar5[0xf] == 2) {
      piVar5[0xf] = 3;
    }
    else if (piVar5[0xe] == 1) {
      piVar5[0xe] = 0;
      FUN_002acaa0(piVar5 + 0x32,piVar5 + 0x23,iVar2);
    }
    else {
      switch(iVar2) {
      case 0:
        FUN_001fd070(0x28);
        break;
      case 1:
        piVar5[4] = 0;
        piVar5[1] = 0;
        piVar5[0x10] = 1;
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        *piVar5 = piVar5[10];
        piVar5[0xb] = 1;
      }
    }
  }
  iVar2 = piVar5[10];
LAB_002ad078:
  if (((iVar2 != -1) && (piVar5[0xf] == 5)) && (piVar5[0xe] == 0)) {
    FUN_001f8640(param_1,0,2,iVar2,1,piVar5[0xc]);
    if (*piVar5 == piVar5[10]) {
      FUN_001f8640(piVar5 + 0xb,0,8,2,1,0);
    }
    else {
      piVar5[0xb] = 0;
    }
  }
  return;
}

// 0x002ad1f0  size 0x64
void FUN_002ad1f0(int *param_1)

{
  int iStack_4;
  
  param_1[10] = 1;
  param_1[0xc] = 0;
  if (*param_1 == 0) {
    iStack_4 = (int)*(char *)((int)param_1 + 0xde);
    FUN_001f8640(&iStack_4,0,8,1,1,0);
    *(char *)((int)param_1 + 0xde) = (char)iStack_4;
  }
  return;
}

// 0x002ad260  size 0xac
void FUN_002ad260(int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iStack_8;
  int *piStack_4;
  
  param_1[10] = 1;
  param_1[0xc] = 0;
  if (param_1[0xe] == 1) {
    ppiVar2 = (int **)0x4;
    ppiVar3 = &piStack_4;
    ppiVar1 = ppiVar3;
    while (ppiVar1 != (int **)0x0) {
      *(undefined1 *)ppiVar3 = 0;
      ppiVar3 = (int **)((int)ppiVar3 + 1);
      ppiVar2 = (int **)((int)ppiVar2 + -1);
      ppiVar1 = ppiVar2;
    }
    piStack_4 = param_1 + 0x37;
    iStack_8 = (int)(char)*(&piStack_4)[*param_1];
    FUN_001f8570(&iStack_8,0,8,1,0,10);
    *(char *)(param_1 + 0x37) = (char)iStack_8;
  }
  return;
}

// 0x002ad310  size 0x354
void FUN_002ad310(int *param_1)

{
  int **ppiVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int **ppiVar5;
  undefined8 uVar6;
  long lVar7;
  int **ppiVar8;
  undefined8 uVar9;
  int *piStack_20;
  int iStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_4;
  
  param_1[10] = 6;
  param_1[0xc] = 1 << (param_1[10] & 0x1fU);
  uVar6 = FUN_001c1890(0);
  uVar6 = FUN_001bbaa0(uVar6,7);
  sVar3 = FUN_001d3970(uVar6);
  cVar2 = FUN_001f7d30(0xffffffffffffffff,0);
  if (cVar2 == '\x04') {
    param_1[0xc] = param_1[0xc] | 3;
    uVar6 = FUN_001c1890(0);
    iVar4 = FUN_001bc3f0(uVar6);
    lVar7 = FUN_001d23c0(iVar4 + 0x14,7);
    if (0 < lVar7) {
      if (sVar3 == 0x6e) {
        param_1[0xc] = param_1[0xc] | 0x3c;
      }
      else if (sVar3 == 0x6b) {
        param_1[0xc] = param_1[0xc] | 0x3c;
      }
      else if (sVar3 == 0x67) {
        param_1[0xc] = param_1[0xc] | 0xc;
      }
    }
  }
  else if (((cVar2 == '\x03') || (cVar2 == '\x02')) || (cVar2 == '\x01')) {
    param_1[0xc] = param_1[0xc] | 2;
    uVar6 = FUN_001c1890(0);
    iVar4 = FUN_001bc3f0(uVar6);
    lVar7 = FUN_001d23c0(iVar4 + 0x14,7);
    if (0 < lVar7) {
      if (sVar3 == 0x6e) {
        param_1[0xc] = param_1[0xc] | 0x28;
      }
      else if (sVar3 == 0x6b) {
        param_1[0xc] = param_1[0xc] | 0x28;
      }
      else if (sVar3 == 0x67) {
        param_1[0xc] = param_1[0xc] | 8;
      }
    }
  }
  else {
    if (cVar2 != '\0') {
      iVar4 = param_1[0xe];
      goto LAB_002ad534;
    }
    param_1[0xc] = param_1[0xc] | 1;
    uVar6 = FUN_001c1890(0);
    iVar4 = FUN_001bc3f0(uVar6);
    lVar7 = FUN_001d23c0(iVar4 + 0x14,7);
    if ((0 < lVar7) && (sVar3 != 0x6e)) {
      if (sVar3 == 0x6b) {
        param_1[0xc] = param_1[0xc] | 0x14;
      }
      else if (sVar3 == 0x67) {
        param_1[0xc] = param_1[0xc] | 4;
      }
    }
  }
  iVar4 = param_1[0xe];
LAB_002ad534:
  if (iVar4 == 1) {
    uVar9 = 0;
    uVar6 = FUN_001c1890(0);
    iVar4 = FUN_001bc3f0(uVar6);
    lVar7 = FUN_001d23c0(iVar4 + 0x14,7);
    if (lVar7 == 3) {
      uVar9 = 0xfffffffffffffffb;
      uVar6 = 5;
    }
    else if (lVar7 == 2) {
      uVar9 = 0xfffffffffffffffd;
      uVar6 = 3;
    }
    else {
      uVar6 = 0;
      if (lVar7 == 1) {
        uVar9 = 0xfffffffffffffffe;
        uVar6 = 2;
      }
    }
    ppiVar5 = (int **)0x18;
    ppiVar8 = &piStack_20;
    ppiVar1 = ppiVar8;
    while (ppiVar1 != (int **)0x0) {
      *(undefined1 *)ppiVar8 = 0;
      ppiVar8 = (int **)((int)ppiVar8 + 1);
      ppiVar5 = (int **)((int)ppiVar5 + -1);
      ppiVar1 = ppiVar5;
    }
    iStack_1c = (int)param_1 + 0xc9;
    piStack_20 = param_1 + 0x32;
    iStack_14 = (int)param_1 + 0xda;
    piStack_18 = param_1 + 0x36;
    iStack_c = (int)param_1 + 0xdb;
    iStack_10 = (int)param_1 + 0xd9;
    iStack_4 = (int)(char)*(&piStack_20)[*param_1];
    FUN_001f8570(&iStack_4,0,8,1,uVar9,uVar6);
    *(char *)(&piStack_20)[*param_1] = (char)iStack_4;
  }
  return;
}

// 0x002ad670  size 0x19c
void FUN_002ad670(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar5 = 0;
  param_1[10] = 7;
  param_1[0xc] = 0xc0;
  uVar4 = FUN_001c1890(0);
  uVar4 = FUN_001bc3f0(uVar4);
  uVar2 = FUN_001d20f0(uVar4);
  iVar3 = FUN_00205570(uVar2);
  if (*(int *)(iVar3 + 0x1ac) < 1) {
    iVar3 = param_1[0xe];
  }
  else {
    do {
      uVar1 = uVar5 & 0x1f;
      uVar5 = uVar5 + 1;
      param_1[0xc] = param_1[0xc] | 1 << uVar1;
      uVar4 = FUN_001c1890(0);
      uVar4 = FUN_001bc3f0(uVar4);
      uVar2 = FUN_001d20f0(uVar4);
      iVar3 = FUN_00205570(uVar2);
    } while ((int)uVar5 < *(int *)(iVar3 + 0x1ac));
    iVar3 = param_1[0xe];
  }
  if (iVar3 == 1) {
    iVar3 = *(int *)(&DAT_0032ef70 + *param_1 * 4);
    fVar6 = (float)param_1[iVar3 * 2 + 0x11];
    fVar7 = (float)param_1[iVar3 * 2 + 0x12];
    param_1 = param_1 + iVar3 + 0x38;
    FUN_001f8470((fVar7 - fVar6) / 16.0,fVar6,fVar7,param_1,0,8);
    FUN_001f8470(0x3c23d70a,fVar6,fVar7,param_1,0,0x20);
    FUN_001f8470(0x3a83126f,fVar6,fVar7,param_1,0,0x80);
  }
  return;
}

// 0x002ad810  size 0x1d0
void FUN_002ad810(int *param_1)

{
  char cVar1;
  int iVar2;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  param_1[10] = 4;
  param_1[0xc] = 1 << (param_1[10] & 0x1fU);
  param_1[0xc] = param_1[0xc] | 2;
  param_1[0xc] = param_1[0xc] | 1;
  cVar1 = FUN_001f7d30(0xffffffffffffffff,0);
  if (cVar1 == '\x04') {
    param_1[0xc] = param_1[0xc] | 4;
    param_1[0xc] = param_1[0xc] | 8;
  }
  if (*(char *)((int)param_1 + 0xd7) == -1) {
    param_1[0xc] = param_1[0xc] & 0xfffffff7;
  }
  if (param_1[0xe] == 1) {
    iVar2 = *param_1;
    if (iVar2 == 3) {
      iStack_c = (int)*(char *)((int)param_1 + 0xd7);
      FUN_001f8570(&iStack_c,0,8,1,0,0x14);
      *(char *)((int)param_1 + 0xd7) = (char)iStack_c;
    }
    else if (iVar2 == 1) {
      iStack_8 = (int)*(char *)((int)param_1 + 0xdd);
      FUN_001f8570(&iStack_8,0,8,1,0xfffffffffffffffb,5);
      *(char *)((int)param_1 + 0xdd) = (char)iStack_8;
    }
    else {
      if (iVar2 != 0) {
        iVar2 = *param_1;
        goto LAB_002ad938;
      }
      iStack_4 = (int)*(char *)((int)param_1 + 0xd6);
      FUN_001f8570(&iStack_4,0,8,1,0xffffffffffffffce,0x32);
      *(char *)((int)param_1 + 0xd6) = (char)iStack_4;
    }
  }
  iVar2 = *param_1;
LAB_002ad938:
  if (iVar2 == 2) {
    iStack_10 = 0;
    FUN_001f8640(&iStack_10,0,4,1,1,0);
    if (iStack_10 == 1) {
      if (*(char *)((int)param_1 + 0xd7) == -1) {
        *(undefined1 *)((int)param_1 + 0xd7) = 10;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd7) = 0xff;
      }
    }
  }
  return;
}

// 0x002ad9e0  size 0xe8
void FUN_002ad9e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_20 [2];
  int *piStack_18;
  int iStack_14;
  int iStack_4;
  
  param_1[10] = 4;
  param_1[0xc] = 0;
  if (param_1[0xe] == 1) {
    if (*param_1 < 2) {
      uVar4 = 0xfffffffffffffffb;
      uVar5 = 5;
    }
    else {
      uVar4 = 0xfffffffffffffff6;
      uVar5 = 0;
    }
    piVar2 = (int *)0x10;
    piVar3 = aiStack_20;
    piVar1 = piVar3;
    while (piVar1 != (int *)0x0) {
      *(undefined1 *)piVar3 = 0;
      piVar3 = (int *)((int)piVar3 + 1);
      piVar2 = (int *)((int)piVar2 + -1);
      piVar1 = piVar2;
    }
    aiStack_20[1] = (int)param_1 + 0xcb;
    aiStack_20[0] = (int)param_1 + 0xca;
    iStack_14 = (int)param_1 + 0xcd;
    piStack_18 = param_1 + 0x33;
    iStack_4 = (int)*(char *)aiStack_20[*param_1];
    FUN_001f8570(&iStack_4,0,8,1,uVar4,uVar5);
    *(char *)aiStack_20[*param_1] = (char)iStack_4;
  }
  return;
}

// 0x002adad0  size 0x184
void FUN_002adad0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int aiStack_30 [2];
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_4;
  
  param_1[10] = 8;
  param_1[0xc] = 0;
  if (param_1[0xe] == 1) {
    uVar5 = FUN_001c1890(0);
    iVar2 = FUN_001bc3f0(uVar5);
    lVar6 = FUN_001d23c0(iVar2 + 0x14,8);
    if ((lVar6 == 5) && (*param_1 - 6U < 2)) {
      iVar2 = -6;
      uVar5 = 6;
    }
    else {
      uVar5 = FUN_001c1890(0);
      iVar2 = FUN_001bc3f0(uVar5);
      iVar2 = FUN_001d23c0(iVar2 + 0x14,8);
      iVar2 = -iVar2;
      uVar5 = FUN_001c1890(0);
      iVar4 = FUN_001bc3f0(uVar5);
      uVar5 = FUN_001d23c0(iVar4 + 0x14,8);
    }
    piVar3 = (int *)0x20;
    piVar7 = aiStack_30;
    piVar1 = piVar7;
    while (piVar1 != (int *)0x0) {
      *(undefined1 *)piVar7 = 0;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar3 = (int *)((int)piVar3 + -1);
      piVar1 = piVar3;
    }
    aiStack_30[0] = (int)param_1 + 0xce;
    aiStack_30[1] = (int)param_1 + 0xcf;
    piStack_28 = param_1 + 0x34;
    iStack_24 = (int)param_1 + 0xd1;
    iStack_20 = (int)param_1 + 0xd2;
    iStack_1c = (int)param_1 + 0xd3;
    piStack_18 = param_1 + 0x35;
    iStack_14 = (int)param_1 + 0xd5;
    iStack_4 = (int)*(char *)aiStack_30[*param_1];
    FUN_001f8570(&iStack_4,0,8,1,iVar2,uVar5);
    *(char *)aiStack_30[*param_1] = (char)iStack_4;
  }
  return;
}

// 0x002adc60  size 0xfc
void FUN_002adc60(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x30) = 0xc;
  uVar3 = FUN_001c1890(0);
  iVar2 = FUN_001bc3f0(uVar3);
  lVar4 = FUN_001d23c0(iVar2 + 0x14,5);
  if (0 < lVar4) {
    uVar3 = FUN_001c1890(0);
    uVar3 = FUN_001bc3f0(uVar3);
    sVar1 = FUN_001d20f0(uVar3);
    if ((((sVar1 != 0x39) && (sVar1 != 0x38)) && (sVar1 != 10)) && (sVar1 != 9)) {
      *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | 1;
    }
  }
  uVar3 = FUN_001c1890(0);
  iVar2 = FUN_001bc3f0(uVar3);
  lVar4 = FUN_001d23c0(iVar2 + 0x14,7);
  if (0 < lVar4) {
    *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | 2;
  }
  FUN_001f8640(param_1,0,2,3,1,*(undefined4 *)(iVar5 + 0x30));
  return;
}

// 0x002add60  size 0xe4
void FUN_002add60(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x30) = 1;
  uVar3 = FUN_001c1890(0);
  iVar2 = FUN_001bc3f0(uVar3);
  lVar4 = FUN_001d23c0(iVar2 + 0x14,8);
  if (0 < lVar4) {
    *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | 6;
  }
  uVar3 = FUN_001c1890(0);
  iVar2 = FUN_001bc3f0(uVar3);
  lVar4 = FUN_001d23c0(iVar2 + 0x14,9);
  if (0 < lVar4) {
    *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | 8;
  }
  cVar1 = FUN_001f7d30(0xffffffffffffffff,0);
  if (cVar1 == '\x04') {
    *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | 8;
  }
  *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | 8;
  FUN_001f8640(param_1,0,2,3,1,*(undefined4 *)(iVar5 + 0x30));
  return;
}

// 0x002ade60  size 0x98
void FUN_002ade60(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  lVar1 = FUN_001fb170(puVar2 + 2);
  if (lVar1 != 0) {
    if (puVar2[0x10] == 1) {
      puVar2[0x10] = 0;
      *puVar2 = puVar2[1];
    }
    if (puVar2[0xf] == 5) {
      (*(code *)(&PTR_FUN_0032ef40)[puVar2[3]])(param_1);
    }
    FUN_002acdc0(param_1);
    FUN_001fb240(puVar2 + 2);
  }
  return;
}

// 0x002adf00  size 0x3a4
void FUN_002adf00(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  puVar7 = (undefined4 *)param_1;
  puVar7[2] = 0xffffffff;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[6] = 1;
  puVar7[9] = 0;
  puVar7[7] = 1;
  puVar7[5] = 1;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0xffffffff;
  puVar7[0xe] = 0;
  puVar7[0xf] = 5;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[0xc] = 0;
  puVar7[0x10] = 1;
  uVar5 = FUN_001c1890(0);
  uVar5 = FUN_001bc3f0(uVar5);
  uVar5 = FUN_001d20f0(uVar5);
  FUN_001d4240(puVar7 + 0x41,uVar5,0xffffffffffffffff);
  uVar5 = FUN_001c1890(0);
  uVar5 = FUN_001bc3f0(uVar5);
  uVar2 = FUN_001d20f0(uVar5);
  iVar3 = FUN_00205570(uVar2);
  puVar7[0x47] = *(undefined4 *)(iVar3 + 0x240);
  puVar7[0x11] = 0x40200000;
  puVar7[0x12] = 0x40fff7cf;
  uVar5 = FUN_001c1890(0);
  uVar5 = FUN_001bc3f0(uVar5);
  uVar2 = FUN_001d20f0(uVar5);
  iVar4 = FUN_00205570(uVar2);
  iVar3 = 0;
  if (0 < *(int *)(iVar4 + 0x1ac)) {
    do {
      uVar5 = FUN_001c1890(0);
      uVar5 = FUN_001bc3f0(uVar5);
      uVar2 = FUN_001d20f0(uVar5);
      iVar4 = FUN_00205570(uVar2);
      iVar8 = iVar3 + 1;
      puVar7[iVar3 + 0x48] = *(undefined4 *)(iVar4 + (iVar3 + 1) * 4 + 0x1b0);
      uVar5 = FUN_001c1890(0);
      uVar5 = FUN_001bc3f0(uVar5);
      uVar2 = FUN_001d20f0(uVar5);
      iVar4 = FUN_00205570(uVar2);
      iVar3 = iVar8;
    } while (iVar8 < *(int *)(iVar4 + 0x1ac));
  }
  iVar4 = 0;
  uVar5 = FUN_001c1890(0);
  uVar5 = FUN_001bc3f0(uVar5);
  uVar2 = FUN_001d20f0(uVar5);
  iVar3 = FUN_00205570(uVar2);
  if (0 < *(int *)(iVar3 + 0x1ac)) {
    do {
      iVar3 = iVar4 + 1;
      if (iVar3 == 1) {
        fVar10 = (float)puVar7[0x48] * 1.125;
      }
      else {
        fVar10 = (float)puVar7[iVar4 + 0x48] +
                 ((float)puVar7[iVar4 + 0x47] - (float)puVar7[iVar4 + 0x48]) / 3.0;
      }
      uVar5 = FUN_001c1890(0);
      uVar5 = FUN_001bc3f0(uVar5);
      uVar2 = FUN_001d20f0(uVar5);
      iVar8 = FUN_00205570(uVar2);
      if (iVar4 == *(int *)(iVar8 + 0x1ac) + -1) {
        fVar9 = (float)puVar7[iVar4 + 0x48] * 0.875;
      }
      else {
        fVar9 = (float)puVar7[iVar4 + 0x48] -
                ((float)puVar7[iVar4 + 0x48] - (float)puVar7[iVar4 + 0x49]) / 3.0;
      }
      puVar7[iVar3 * 2 + 0x11] = fVar9;
      iVar4 = iVar4 + 1;
      puVar7[iVar3 * 2 + 0x12] = fVar10;
      uVar5 = FUN_001c1890(0);
      uVar5 = FUN_001bc3f0(uVar5);
      uVar2 = FUN_001d20f0(uVar5);
      iVar3 = FUN_00205570(uVar2);
    } while (iVar4 < *(int *)(iVar3 + 0x1ac));
  }
  puVar7[10] = 0xffffffff;
  puVar7[0xc] = 1;
  uVar5 = FUN_001c1890(0);
  iVar3 = FUN_001bc3f0(uVar5);
  lVar6 = FUN_001d23c0(iVar3 + 0x14,8);
  if (0 < lVar6) {
    puVar7[0xc] = puVar7[0xc] | 6;
  }
  uVar5 = FUN_001c1890(0);
  iVar3 = FUN_001bc3f0(uVar5);
  lVar6 = FUN_001d23c0(iVar3 + 0x14,9);
  if (0 < lVar6) {
    puVar7[0xc] = puVar7[0xc] | 8;
  }
  cVar1 = FUN_001f7d30(0xffffffffffffffff,0);
  if (cVar1 == '\x04') {
    puVar7[0xc] = puVar7[0xc] | 8;
  }
  puVar7[0xc] = puVar7[0xc] | 8;
  FUN_001f8640(param_1,0,2,3,1,puVar7[0xc]);
  return;
}

// 0x002ae2c0  size 0xfc
void FUN_002ae2c0(undefined8 param_1)

{
  uint uVar1;
  
  FUN_001f8640(param_1,0,2,3,1,((int *)param_1)[1]);
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
    FUN_001fb290(5);
    FUN_001fd070(*(undefined4 *)(*(int *)param_1 * 4 + 0x32ef90));
  }
  else if (uVar1 == 0x20) {
    FUN_001fb290(6);
    FUN_001fd070(0xd);
  }
  *(uint *)(iRam0036f458 + 0x28) = *(uint *)(iRam0036f458 + 0x28) | 0x1c000;
  return;
}

// 0x002ae3c0  size 0x88
void FUN_002ae3c0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(iRam0036f458 + 0x24);
  if (iVar1 == 0x22) {
    *param_1 = 3;
  }
  else if (iVar1 == 0x1c) {
    *param_1 = 2;
  }
  else if (iVar1 == 3) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  uVar2 = FUN_001c1890(0);
  lVar3 = FUN_001b89d0(uVar2);
  if (lVar3 == 0) {
    param_1[1] = 1;
  }
  else {
    param_1[1] = 0;
  }
  return;
}

// 0x002ae470  size 0x34
void FUN_002ae470(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_1 == *(int *)(param_4 + 0x10)) {
    *(undefined4 *)(param_4 + 0x14) = 0;
    FUN_002bb990(uRam0036f7e0);
  }
  return;
}

// 0x002ae4b0  size 0x4c
void FUN_002ae4b0(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (int)param_4;
  if (param_1 == *(int *)(iVar1 + 200)) {
    *(undefined4 *)(iVar1 + 0xb0) = param_3;
    FUN_002afb80(param_4);
    *(undefined4 *)(iVar1 + 0xcc) = 0;
    FUN_002bb990(uRam0036f7e0);
  }
  return;
}

// 0x002ae500  size 0x58
void FUN_002ae500(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (int)param_4;
  if (param_1 == *(int *)(iVar1 + 0x70)) {
    *(undefined4 *)(iVar1 + 0x4c) = param_3;
    FUN_002b0650(param_4);
    FUN_002b0d20(param_4,0);
    *(undefined4 *)(iVar1 + 0x74) = 0;
    FUN_002bb990(uRam0036f7e0);
  }
  return;
}

// 0x002ae580  size 0x21c
void FUN_002ae580(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x30) != -1) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x30);
    FUN_00132600(param_1 + 0x98,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x9c,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0xa0,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0xa4,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    iVar2 = (*(int *)(param_1 + 0xa4) + 1) * 4;
    uVar1 = FUN_00100680(iVar2,*(undefined4 *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xa8) = uVar1;
    FUN_00132600(*(undefined4 *)(param_1 + 0xa8),*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4)
                 ,iVar2);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar2;
    uVar1 = FUN_00100680((*(int *)(param_1 + 0xa4) + 1) * 8,*(undefined4 *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xac) = uVar1;
    uVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    do {
      *(int *)(param_1 + 0xc4) =
           *(int *)(param_1 + 0x30) + *(int *)(*(int *)(param_1 + 0xa8) + iVar3);
      FUN_00132600(*(int *)(param_1 + 0xac) + iVar2,
                   *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
      FUN_00132600(*(int *)(param_1 + 0xac) + iVar2 + 4,
                   *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
      FUN_00132600(*(int *)(param_1 + 0xac) + iVar2 + 6,
                   *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
      FUN_00132600(*(int *)(param_1 + 0xac) + iVar2 + 7,
                   *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
      iVar2 = iVar2 + 8;
    } while (uVar4 <= *(uint *)(param_1 + 0xa4));
  }
  return;
}

// 0x002ae7a0  size 0x7b8
void FUN_002ae7a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x2c) != -1) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x2c);
    FUN_00132600(param_1 + 0x80,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x84,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x88,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x8c,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    iVar4 = (*(int *)(param_1 + 0x8c) + 1) * 4;
    uVar2 = FUN_00100680(iVar4,*(undefined4 *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    FUN_00132600(*(undefined4 *)(param_1 + 0x90),*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4)
                 ,iVar4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar4;
    iVar4 = (*(int *)(param_1 + 0x8c) + 1) * 0x2a;
    lVar3 = FUN_00100680(iVar4,*(undefined4 *)(param_1 + 0xb4));
    if (lVar3 != 0) {
      FUN_001325d0(lVar3,0,iVar4);
    }
    *(int *)(param_1 + 0x94) = (int)lVar3;
    uVar6 = 0;
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x90) + iVar5);
      if (iVar1 != -1) {
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x2c) + iVar1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 2,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 3,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 4,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 5,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 6,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 7,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 8,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 9,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 10,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0xb,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0xc,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0xd,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0xe,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0xf,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x10,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x11,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x12,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x14,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x16,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x17,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x18,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x19,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x1a,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x1b,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x1c,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x1d,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x1e,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x1f,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x20,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x22,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x24,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x26,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x28,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x94) + iVar4 + 0x29,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x2a;
    } while (uVar6 <= *(uint *)(param_1 + 0x8c));
  }
  return;
}

// 0x002aef60  size 0x2ac
void FUN_002aef60(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x28) != -1) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x28);
    FUN_00132600(param_1 + 0x68,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x6c,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x70,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x74,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    iVar3 = (*(int *)(param_1 + 0x74) + 1) * 4;
    uVar1 = FUN_00100680(iVar3,*(undefined4 *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    FUN_00132600(*(undefined4 *)(param_1 + 0x78),*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4)
                 ,iVar3);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar3;
    iVar3 = (*(int *)(param_1 + 0x74) + 1) * 8;
    lVar2 = FUN_00100680(iVar3,*(undefined4 *)(param_1 + 0xb4));
    if (lVar2 != 0) {
      FUN_001325d0(lVar2,0,iVar3);
    }
    *(int *)(param_1 + 0x7c) = (int)lVar2;
    uVar6 = 0;
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x78) + iVar5);
      if (iVar4 != -1) {
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x28) + iVar4;
        FUN_00132600(*(int *)(param_1 + 0x7c) + iVar3,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x7c) + iVar3 + 1,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x7c) + iVar3 + 2,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 0x7c) + iVar3 + 3,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        iVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x7c) + iVar3 + 3) * 2;
        uVar1 = FUN_00100680(iVar4,*(undefined4 *)(param_1 + 0xb4));
        *(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar3 + 4) = uVar1;
        FUN_00132600(*(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar3 + 4),
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),iVar4);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar4;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 8;
    } while (uVar6 <= *(uint *)(param_1 + 0x74));
  }
  return;
}

// 0x002af210  size 0x6b0
void FUN_002af210(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x24) != -1) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x24);
    FUN_00132600(param_1 + 0x50,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x54,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x58,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    FUN_00132600(param_1 + 0x5c,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
    iVar3 = (*(int *)(param_1 + 0x5c) + 1) * 4;
    uVar1 = FUN_00100680(iVar3,*(undefined4 *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    FUN_00132600(*(undefined4 *)(param_1 + 0x60),*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4)
                 ,iVar3);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar3;
    iVar3 = (*(int *)(param_1 + 0x5c) + 1) * 0x28;
    lVar2 = FUN_00100680(iVar3,*(undefined4 *)(param_1 + 0xb4));
    if (lVar2 != 0) {
      FUN_001325d0(lVar2,0,iVar3);
    }
    *(int *)(param_1 + 100) = (int)lVar2;
    uVar6 = 0;
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x60) + iVar5);
      if (iVar4 != -1) {
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x24) + iVar4;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 4,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 5,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 6,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 7,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 8,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 9,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 10,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0xb,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0xc,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0xd,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0xe,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0xf,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x10,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x11,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x12,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x13,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x14,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x16,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x18,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x1a,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x1c,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x1e,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),2);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 2;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x20,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x21,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x22,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        FUN_00132600(*(int *)(param_1 + 100) + iVar3 + 0x23,
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),1);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        iVar4 = (uint)*(byte *)(*(int *)(param_1 + 100) + iVar3 + 4) * 0x14;
        uVar1 = FUN_00100680(iVar4,*(undefined4 *)(param_1 + 0xb4));
        *(undefined4 *)(*(int *)(param_1 + 100) + iVar3 + 0x24) = uVar1;
        FUN_00132600(*(undefined4 *)(*(int *)(param_1 + 100) + iVar3 + 0x24),
                     *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),iVar4);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar4;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 0x28;
    } while (uVar6 <= *(uint *)(param_1 + 0x5c));
  }
  return;
}

// 0x002af8c0  size 0x1bc
void FUN_002af8c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0x10;
  FUN_00132600(param_1 + 0x10,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x14,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x18,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x1c,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x20,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x24,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x28,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x2c,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x30,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x34,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),4);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 4;
  FUN_00132600(param_1 + 0x38,*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4),0x18);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 0x18;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x20);
  return;
}

// 0x002afa80  size 0xf8
void FUN_002afa80(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  FUN_00132600(param_1,*(int *)(iVar1 + 0xbc) + *(int *)(iVar1 + 0xc4),4);
  *(int *)(iVar1 + 0xc4) = *(int *)(iVar1 + 0xc4) + 4;
  FUN_00132600(iVar1 + 4,*(int *)(iVar1 + 0xbc) + *(int *)(iVar1 + 0xc4),4);
  *(int *)(iVar1 + 0xc4) = *(int *)(iVar1 + 0xc4) + 4;
  FUN_00132600(iVar1 + 8,*(int *)(iVar1 + 0xbc) + *(int *)(iVar1 + 0xc4),4);
  *(int *)(iVar1 + 0xc4) = *(int *)(iVar1 + 0xc4) + 4;
  FUN_00132600(iVar1 + 0xc,*(int *)(iVar1 + 0xbc) + *(int *)(iVar1 + 0xc4),2);
  *(int *)(iVar1 + 0xc4) = *(int *)(iVar1 + 0xc4) + 2;
  FUN_00132600(iVar1 + 0xe,*(int *)(iVar1 + 0xbc) + *(int *)(iVar1 + 0xc4),1);
  *(int *)(iVar1 + 0xc4) = *(int *)(iVar1 + 0xc4) + 1;
  FUN_00132600(iVar1 + 0xf,*(int *)(iVar1 + 0xbc) + *(int *)(iVar1 + 0xc4),1);
  *(int *)(iVar1 + 0xc4) = *(int *)(iVar1 + 0xc4) + 1;
  return;
}

// 0x002afb80  size 0x4c
void FUN_002afb80(undefined8 param_1)

{
  FUN_002afa80();
  FUN_002af8c0(param_1);
  FUN_002ae580(param_1);
  FUN_002ae7a0(param_1);
  FUN_002aef60(param_1);
  FUN_002af210(param_1);
  return;
}

// 0x002afbd0  size 0x230
void FUN_002afbd0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 100) != 0) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(iVar1 + 100) + iVar2 + 0x24) != 0) {
        FUN_00100290();
        *(undefined4 *)(*(int *)(iVar1 + 100) + iVar2 + 0x24) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (uVar3 <= *(uint *)(iVar1 + 0x5c));
    if (*(int *)(iVar1 + 100) != 0) {
      FUN_00100290();
      *(undefined4 *)(iVar1 + 100) = 0;
    }
  }
  if (*(int *)(iVar1 + 0x60) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  if (*(int *)(iVar1 + 0x7c) != 0) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(iVar1 + 0x7c) + iVar2 + 4) != 0) {
        FUN_00100290();
        *(undefined4 *)(*(int *)(iVar1 + 0x7c) + iVar2 + 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (uVar3 <= *(uint *)(iVar1 + 0x74));
    if (*(int *)(iVar1 + 0x7c) != 0) {
      FUN_00100290();
      *(undefined4 *)(iVar1 + 0x7c) = 0;
    }
  }
  if (*(int *)(iVar1 + 0x78) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar1 + 0x78) = 0;
  }
  if (*(int *)(iVar1 + 0x94) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar1 + 0x94) = 0;
  }
  if (*(int *)(iVar1 + 0x90) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar1 + 0x90) = 0;
  }
  if (*(int *)(iVar1 + 0xac) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar1 + 0xac) = 0;
  }
  if (*(int *)(iVar1 + 0xa8) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar1 + 0xa8) = 0;
  }
  if (*(int *)(iVar1 + 0xbc) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar1 + 0xbc) = 0;
  }
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 200) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xcc) = 0;
  FUN_001325d0(param_1,0,0x10);
  FUN_001325d0(iVar1 + 0x10,0,0x40);
  FUN_001325d0(iVar1 + 0x50,0,0x18);
  FUN_001325d0(iVar1 + 0x68,0,0x18);
  FUN_001325d0(iVar1 + 0x80,0,0x18);
  FUN_001325d0(iVar1 + 0x98,0,0x18);
  FUN_001325d0(iVar1 + 0xd4,0,0x10);
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  return;
}

// 0x002afe00  size 0xf0
void FUN_002afe00(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_002afbd0();
  iVar3 = (param_2 + 0x1ca6) * 0x14 + iGpffff89d4;
  iVar4 = *(int *)(iVar3 + 0x20);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(iVar3 + 0x18);
  }
  else {
    uVar1 = iVar4 + 0x7ffU >> 0xb;
  }
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0xbc) != 0) {
    FUN_00100290();
    *(undefined4 *)(iVar4 + 0xbc) = 0;
  }
  *(undefined4 *)(iVar4 + 0xc0) = 0;
  *(undefined4 *)(iVar4 + 0xc4) = 0xffffffff;
  *(undefined4 *)(iVar4 + 200) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0xcc) = 0;
  uVar2 = FUN_00100680(uVar1 << 0xb,*(undefined4 *)(iVar4 + 0xb8));
  *(undefined4 *)(iVar4 + 0xbc) = uVar2;
  if (*(int *)(iVar4 + 0xbc) != 0) {
    *(uint *)(iVar4 + 0xc0) = uVar1 << 0xb;
    *(undefined4 *)(iVar4 + 0xc4) = 0;
  }
  if (*(int *)(iVar4 + 0xbc) != 0) {
    uVar2 = FUN_0014bf00(param_2 + 0x1ca6,*(int *)(iVar4 + 0xbc),0x2ae4b0,param_1,0,0);
    *(undefined4 *)(iVar4 + 200) = uVar2;
    *(undefined4 *)(iVar4 + 0xcc) = 1;
  }
  return;
}

// 0x002afef0  size 0xd8
undefined4 FUN_002afef0(undefined8 param_1,ulong param_2,byte *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)param_2;
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_3 = bVar2;
    uVar1 = 1;
    *param_4 = 1;
  }
  else if (param_2 < 0x4000) {
    *param_3 = (byte)(uVar3 >> 7) | 0x80;
    param_3[1] = bVar2 & 0x7f;
    uVar1 = 1;
    *param_4 = 2;
  }
  else if (param_2 < 0x200000) {
    *param_3 = (byte)(uVar3 >> 0xe) | 0x80;
    param_3[1] = (byte)(uVar3 >> 7) | 0x80;
    param_3[2] = bVar2 & 0x7f;
    uVar1 = 1;
    *param_4 = 3;
  }
  else if (param_2 < 0x10000000) {
    *param_3 = (byte)(uVar3 >> 0x15) | 0x80;
    param_3[1] = (byte)(uVar3 >> 0xe) | 0x80;
    param_3[2] = (byte)(uVar3 >> 7) | 0x80;
    param_3[3] = bVar2 & 0x7f;
    *param_4 = 4;
    uVar1 = 1;
  }
  else {
    *param_4 = 0;
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002affd0  size 0x2e8
undefined4 FUN_002affd0(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *param_2 = 0;
    for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
      pbVar6 = (byte *)(iVar1 + iVar2 + iVar5);
      *param_2 = *param_2 << 7;
      *param_2 = *param_2 | *pbVar6 & 0x7f;
      if ((*pbVar6 & 0x80) == 0) {
        iVar5 = iVar5 + 1;
        bVar3 = true;
        goto LAB_002b0040;
      }
    }
    iVar5 = 0;
    bVar3 = false;
LAB_002b0040:
    if (!bVar3) {
      return 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  }
  else {
    *param_2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = iVar1 + 1;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(*(int *)(param_1 + 0x50) + iVar1);
  bVar4 = (byte)param_2[2];
  if (0xef < bVar4) {
    if (bVar4 != 0xff) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar1 + 1;
    *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(*(int *)(param_1 + 0x50) + iVar1);
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar1 + 1;
    *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)(*(int *)(param_1 + 0x50) + iVar1);
    if (*(char *)((int)param_2 + 9) == 'Q') {
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      param_2[1] = (uint)*(byte *)(*(int *)(param_1 + 0x50) + iVar1) << 0x10;
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      param_2[1] = param_2[1] | (uint)*(byte *)(*(int *)(param_1 + 0x50) + iVar1) << 8;
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      param_2[1] = param_2[1] | (uint)*(byte *)(*(int *)(param_1 + 0x50) + iVar1);
    }
    else {
      param_2[1] = 0;
    }
    *(undefined1 *)(param_1 + 0x7c) = 0;
    goto LAB_002b0240;
  }
  bVar3 = bVar4 < 0x80;
  if (bVar3) {
    *(byte *)((int)param_2 + 9) = bVar4;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x7c);
  }
  bVar4 = (byte)param_2[2] & 0xf0;
  if ((((bVar4 == 0xe0) || (bVar4 == 0xb0)) || (bVar4 == 0xa0)) || (bVar4 == 0x90)) {
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)(*(int *)(param_1 + 0x50) + iVar1);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(*(int *)(param_1 + 0x50) + iVar1);
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)(*(int *)(param_1 + 0x50) + iVar1);
    }
    *(byte *)((int)param_2 + 10) = *(byte *)((int)param_2 + 10) & 0x7f;
LAB_002b0170:
    param_2[1] = 0;
  }
  else {
    if (((bVar4 == 0xd0) || (bVar4 == 0xc0)) || (bVar4 == 0x80)) {
      if (!bVar3) {
        iVar1 = *(int *)(param_1 + 0x58);
        *(int *)(param_1 + 0x58) = iVar1 + 1;
        *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(*(int *)(param_1 + 0x50) + iVar1);
      }
      *(byte *)((int)param_2 + 9) = *(byte *)((int)param_2 + 9) & 0x7f;
      goto LAB_002b0170;
    }
    param_2[1] = 0;
  }
  *(char *)(param_1 + 0x7c) = (char)param_2[2];
LAB_002b0240:
  if ((byte)param_2[2] < 0xf0) {
    *(uint *)(param_1 + 0x78) =
         (uint)((*(byte *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x50) + -1) & 0x80) != 0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return 1;
}

