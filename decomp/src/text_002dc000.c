// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002dc000 - 0x002e0000
#include "ghidra_types.h"

// 0x002dc6d0  size 0x54
void FUN_002dc6d0(int param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_002dd200(param_1,param_2);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x4c;
  } while (uVar1 < 3);
  return;
}

// 0x002dc730  size 0x20c
void FUN_002dc730(undefined4 *param_1,byte param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  param_1[0x39] = param_3;
  param_1[0x3a] = 0xffffffff;
  param_1[0x3b] = 0xffffffff;
  puVar2 = param_1;
  do {
    FUN_002dd160(puVar2);
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x13;
  } while (uVar3 < 3);
  uVar1 = (*pcRam0036f8ac)(0xc4);
  *param_1 = uVar1;
  uVar1 = (*pcRam0036f8a8)(0x21c);
  param_1[0xd] = uVar1;
  uVar1 = (*pcRam0036f8a8)(0x21d);
  param_1[0xe] = uVar1;
  uVar1 = (*pcRam0036f8ac)(0xbf);
  param_1[0x13] = uVar1;
  uVar1 = (*pcRam0036f8a8)(0x215);
  param_1[0x20] = uVar1;
  uVar1 = (*pcRam0036f8a8)(0x216);
  param_1[0x21] = uVar1;
  if (8 < param_2) {
    uVar1 = (*pcRam0036f8ac)(0xbc);
    *param_1 = uVar1;
    uVar1 = (*pcRam0036f8a8)(0x100);
    param_1[0xf] = uVar1;
    param_1[0x11] = 0xd;
    uVar1 = (*pcRam0036f8a8)(0x101);
    param_1[0xd] = uVar1;
    uVar1 = (*pcRam0036f8a8)(0x102);
    param_1[0xe] = uVar1;
    param_1[4] = 0x15;
    uVar1 = (*pcRam0036f8b0)(0x2c);
    param_1[5] = uVar1;
  }
  switch(param_2) {
  case 5:
  case 6:
  case 9:
  case 10:
    uVar1 = (*pcRam0036f8ac)(0xc0);
    param_1[0x26] = uVar1;
    uVar1 = (*pcRam0036f8a8)(0x217);
    param_1[0x33] = uVar1;
    uVar1 = (*pcRam0036f8a8)(0x218);
    param_1[0x34] = uVar1;
    break;
  case 7:
  case 0xb:
    uVar1 = (*pcRam0036f8ac)(0xc2);
    param_1[0x26] = uVar1;
    uVar1 = (*pcRam0036f8a8)(0x219);
    param_1[0x33] = uVar1;
    uVar1 = (*pcRam0036f8a8)(0x21a);
    param_1[0x34] = uVar1;
    break;
  case 8:
  case 0xc:
    uVar1 = (*pcRam0036f8ac)(0xc3);
    param_1[0x26] = uVar1;
    uVar1 = (*pcRam0036f8a8)(0x227);
    param_1[0x33] = uVar1;
    uVar1 = (*pcRam0036f8a8)(0x228);
    param_1[0x34] = uVar1;
  }
  return;
}

// 0x002dc940  size 0x180
void FUN_002dc940(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == '\x03') {
    uVar1 = (*pcGpffff91bc)(0xbb);
    *param_1 = uVar1;
    uVar1 = (*pcGpffff91b8)(0xfd);
    param_1[0xf] = uVar1;
    param_1[0x11] = 0xd;
    param_1[0x12] = 0x12;
    uVar1 = (*pcGpffff91b8)(0xfe);
    param_1[0xd] = uVar1;
    uVar1 = (*pcGpffff91b8)(0xff);
    param_1[0xe] = uVar1;
    param_1[4] = 0x1b;
    uVar1 = (*pcGpffff91c0)(1);
    param_1[5] = uVar1;
    param_1[7] = 0x1d;
    uVar1 = (*pcGpffff91c0)(2);
    param_1[8] = uVar1;
  }
  else if (param_2 == '\x01') {
    uVar1 = (*pcGpffff91bc)(0xbc);
    *param_1 = uVar1;
    uVar1 = (*pcGpffff91b8)(0x100);
    param_1[0xf] = uVar1;
    param_1[0x11] = 0xd;
    uVar1 = (*pcGpffff91b8)(0x101);
    param_1[0xd] = uVar1;
    uVar1 = (*pcGpffff91b8)(0x102);
    param_1[0xe] = uVar1;
    param_1[4] = 0x15;
    uVar1 = (*pcGpffff91c0)(0x2c);
    param_1[5] = uVar1;
  }
  else if (param_2 == '\0') {
    uVar1 = (*pcGpffff91bc)(0xbd);
    *param_1 = uVar1;
    uVar1 = (*pcGpffff91b8)(0x103);
    param_1[0xf] = uVar1;
    uVar1 = (*pcGpffff91b8)(0x104);
    param_1[0x10] = uVar1;
    uVar1 = (*pcGpffff91b8)(0x105);
    param_1[0xd] = uVar1;
    uVar1 = (*pcGpffff91b8)(0x106);
    param_1[0xe] = uVar1;
    param_1[1] = 0x14;
  }
  return;
}

// 0x002dcac0  size 0x15c
void FUN_002dcac0(undefined4 *param_1,ulong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar2 = 0x39;
  puVar3 = param_1 + 0x3c;
  puVar4 = param_1;
  do {
    iVar2 = iVar2 + -1;
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  uVar5 = param_2 & 0xff;
  param_1[0x75] = param_1[0x39];
  param_1[0x76] = param_1[0x3a];
  param_1[0x77] = param_1[0x3b];
  if ((uVar5 < 4) || (0xd < uVar5)) {
    uVar1 = *(undefined1 *)((int)param_1 + 0x1e1);
    uVar6 = 0;
    puVar4 = param_1;
    do {
      FUN_002dd160(puVar4);
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 0x13;
    } while (uVar6 < 3);
    param_1[0x39] = (int)param_3;
    if (uVar5 == 3) {
      param_1[0x3a] = 0x1c;
      param_1[0x3b] = 0x1e;
    }
    else if (uVar5 == 1) {
      param_1[0x3a] = 0x16;
      param_1[0x3b] = 0x17;
    }
    else if (uVar5 == 0) {
      param_1[0x3a] = 0x13;
      param_1[0x3b] = 0x14;
    }
    FUN_002dc940(param_1,param_2,uVar1);
  }
  else {
    FUN_002dc730(param_1,param_2,param_3);
  }
  return;
}

// 0x002dcc20  size 0x10
void FUN_002dcc20(int param_1)

{
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  FUN_002dc6d0(param_1 + 0xf0);
  return;
}

// 0x002dcc30  size 0x10
bool FUN_002dcc30(int param_1)

{
  return *(char *)(param_1 + 0x1e0) != -1;
}

// 0x002dcc40  size 0x108
void FUN_002dcc40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1 + 0x1e0);
  if (cVar1 == -1) {
    uVar2 = *(undefined4 *)(param_1 + 0x1e4);
  }
  else {
    if (cVar1 == '\0') {
      uVar4 = 0;
      iVar3 = param_1;
      do {
        FUN_002dd350(iVar3,0xffffffffffffffff);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x4c;
      } while (uVar4 < 3);
      FUN_002dbf30(param_1,*(undefined1 *)(param_1 + 0x1e1),*(undefined1 *)(param_1 + 0x1e2));
      return;
    }
    if (cVar1 == '\x01') {
      uVar4 = 0;
      iVar3 = param_1 + 0xf0;
      do {
        FUN_002dd350(iVar3,0xffffffffffffffff);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x4c;
      } while (uVar4 < 3);
      FUN_002dbf30(param_1 + 0xf0,*(undefined1 *)(param_1 + 0x1e1),*(undefined1 *)(param_1 + 0x1e2))
      ;
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1e4);
  }
  uVar4 = 0;
  iVar3 = param_1;
  do {
    FUN_002dd350(iVar3,uVar2);
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x4c;
  } while (uVar4 < 3);
  FUN_002dbf30(param_1,*(undefined1 *)(param_1 + 0x1e1),*(undefined1 *)(param_1 + 0x1e2));
  return;
}

// 0x002dcd50  size 0x368
bool FUN_002dcd50(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  
  cVar1 = (char)param_1[0x78];
  if (cVar1 != -1) {
    if (cVar1 == '\0') {
      bVar3 = false;
      uVar6 = 0;
      piVar5 = param_1;
      do {
        if (*piVar5 == 0) {
          bVar4 = 0;
        }
        else {
          if (*(int *)(*piVar5 + 0x32c) == 1) {
            FUN_001ecd80();
          }
          if (*(int *)(*piVar5 + 0x340) == 1) {
            FUN_001ecd80(*piVar5,2);
          }
          if (*(int *)(*piVar5 + 0x318) == 1) {
            FUN_001ecd80(*piVar5,0);
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
          }
        }
        bVar3 = (bool)(bVar3 | bVar4);
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 0x13;
      } while (uVar6 < 3);
      if (!bVar3) {
        *(undefined1 *)(param_1 + 0x78) = 0xff;
      }
      goto LAB_002dcfb0;
    }
    if (cVar1 == '\x01') {
      bVar3 = false;
      uVar6 = 0;
      piVar5 = param_1 + 0x3c;
      do {
        if (*piVar5 == 0) {
          bVar4 = 0;
        }
        else {
          if (*(int *)(*piVar5 + 0x32c) == 1) {
            FUN_001ecd80();
          }
          if (*(int *)(*piVar5 + 0x340) == 1) {
            FUN_001ecd80(*piVar5,2);
          }
          if (*(int *)(*piVar5 + 0x318) == 1) {
            FUN_001ecd80(*piVar5,0);
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
          }
        }
        bVar3 = (bool)(bVar3 | bVar4);
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 0x13;
      } while (uVar6 < 3);
      if (!bVar3) {
        bVar3 = false;
        uVar6 = 0;
        piVar5 = param_1;
        do {
          iVar2 = *piVar5;
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 0x13;
          bVar3 = (bool)(bVar3 | iVar2 != 0);
        } while (uVar6 < 3);
        if (bVar3) {
          DAT_003420f0 = 0;
          DAT_003420f4 = 0xffffffff;
          *(undefined1 *)(param_1 + 0x78) = 0;
          FUN_002dc6d0(param_1,(char)param_1[0x78]);
        }
        else {
          *(undefined1 *)(param_1 + 0x78) = 0xff;
        }
        uVar6 = 0;
        piVar5 = param_1;
        do {
          if (*piVar5 != 0) {
            if (*(int *)(*piVar5 + 0x32c) == 1) {
              FUN_001ecd80();
            }
            if (*(int *)(*piVar5 + 0x340) == 1) {
              FUN_001ecd80(*piVar5,2);
            }
            if (*(int *)(*piVar5 + 0x318) == 1) {
              FUN_001ecd80(*piVar5,0);
            }
          }
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 0x13;
        } while (uVar6 < 3);
      }
      goto LAB_002dcfb0;
    }
  }
  uVar6 = 0;
  piVar5 = param_1;
  do {
    if (*piVar5 != 0) {
      if (*(int *)(*piVar5 + 0x32c) == 1) {
        FUN_001ecd80();
      }
      if (*(int *)(*piVar5 + 0x340) == 1) {
        FUN_001ecd80(*piVar5,2);
      }
      if (*(int *)(*piVar5 + 0x318) == 1) {
        FUN_001ecd80(*piVar5,0);
      }
    }
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 0x13;
  } while (uVar6 < 3);
LAB_002dcfb0:
  return (char)param_1[0x78] != -1;
}

// 0x002dd0c0  size 0xa0
void FUN_002dd0c0(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_002dd160(iVar1);
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x4c;
  } while (uVar2 < 3);
  uVar2 = 0;
  iVar1 = param_1 + 0xf0;
  do {
    FUN_002dd160(iVar1);
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x4c;
  } while (uVar2 < 3);
  *(undefined1 *)(param_1 + 0x1e0) = 0xff;
  *(undefined1 *)(param_1 + 0x1e1) = param_2;
  *(undefined1 *)(param_1 + 0x1e2) = param_3;
  return;
}

// 0x002dd160  size 0xa0
void FUN_002dd160(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  uVar1 = 0;
  puVar2 = param_1;
  do {
    uVar1 = uVar1 + 1;
    puVar2[0xf] = 0;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 2);
  uVar1 = 0;
  puVar2 = param_1;
  do {
    uVar1 = uVar1 + 1;
    puVar2[0xd] = 0;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 2);
  uVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[1] = 0xffffffff;
    uVar1 = uVar1 + 1;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0;
    puVar2 = puVar2 + 3;
  } while (uVar1 < 4);
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
    param_1[0x11] = 0xffffffff;
    param_1 = param_1 + 1;
  } while (uVar1 < 2);
  return;
}

// 0x002dd200  size 0x150
void FUN_002dd200(int *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    if (((-1 < (long)param_2) && (param_2 < 2)) && (iVar1 = param_1[(int)param_2 + 0xd], iVar1 != 0)
       ) {
      *(undefined4 *)(iVar5 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x31c) = 0;
      *(undefined4 *)(iVar5 + 0x30c) = 0;
      if (*(int *)(iVar5 + 0x31c) == 0) {
        *(undefined4 *)(iVar5 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x318) = 1;
      }
      *(undefined4 *)(iVar5 + 0x30c) = 0;
      if (*(int *)(iVar5 + 0x31c) == 0) {
        *(undefined4 *)(iVar5 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x318) = 1;
      }
      *(undefined4 *)(iVar5 + 0x314) = 0;
      *(int *)(iVar5 + 0x31c) = iVar1;
      *(undefined4 *)(iVar5 + 0x318) = 1;
    }
    uVar7 = 0;
    iVar5 = 0;
    piVar6 = param_1;
    do {
      iVar1 = piVar6[0xf];
      if (iVar1 != 0) {
        iVar2 = *param_1 + iVar5;
        piVar4 = (int *)(iVar2 + 0x330);
        if (*(int *)(iVar2 + 0x330) == 0) {
          *(undefined4 *)(iVar2 + 0x324) = 0xffffffff;
          *piVar4 = 0;
          *(undefined4 *)(iVar2 + 800) = 0;
          if (*piVar4 == 0) {
            *(undefined4 *)(iVar2 + 0x32c) = 0;
          }
          else {
            *(undefined4 *)(iVar2 + 0x32c) = 1;
          }
          puVar3 = (undefined4 *)(iVar2 + 0x32c);
          *(undefined4 *)(iVar2 + 800) = 0;
          if (*piVar4 == 0) {
            *puVar3 = 0;
          }
          else {
            *puVar3 = 1;
          }
          *(undefined4 *)(iVar2 + 0x328) = 1;
          *piVar4 = iVar1;
          *puVar3 = 1;
        }
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + 0x14;
    } while (uVar7 < 2);
  }
  return;
}

// 0x002dd350  size 0x108
void FUN_002dd350(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 auStack_40 [20];
  int iStack_2c;
  
  if (*param_1 != 0) {
    uVar4 = 0;
    piVar3 = param_1;
    do {
      if ((-1 < piVar3[1]) && (iVar1 = piVar3[2], -1 < iVar1)) {
        iVar2 = piVar3[3];
        FUN_001ede20(*param_1,auStack_40);
        iStack_2c = iVar2;
        FUN_001f1350(auStack_40,iVar1);
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar4 < 4);
    uVar4 = 0;
    piVar3 = param_1;
    do {
      if ((-1 < piVar3[0x11]) && (uVar4 == param_2)) {
        FUN_002dd640(*param_1,piVar3[0x11],1,0);
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < 2);
    FUN_001eda40(0x3f800000,*param_1);
  }
  return;
}

// 0x002dd460  size 0x90
int FUN_002dd460(int param_1,int param_2)

{
  uint uVar1;
  
  if ((((((param_2 == 0x22) || (param_2 == 0x21)) || (param_2 == 0x20)) ||
       ((param_2 == 0x1f || (param_2 == 0x11)))) ||
      ((param_2 == 0x10 || ((param_2 == 0xf || (param_2 == 0xe)))))) || (param_2 == 0xd)) {
    uVar1 = (uint)*(byte *)(param_1 + 0x34);
  }
  else if (param_2 == 4) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  else {
    uVar1 = 1;
  }
  return 1 - uVar1;
}

// 0x002dd4f0  size 0x34
undefined8 FUN_002dd4f0(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x26) {
                    /* WARNING: Could not recover jumptable at 0x002dd510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00368170)[(int)param_1])();
    return uVar1;
  }
  return 0;
}

// 0x002dd550  size 0xe4
void FUN_002dd550(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    iVar1 = 0;
    if (0 < DAT_0034211c) {
      puVar2 = &DAT_00342100;
      do {
        FUN_001eeb00(0,DAT_00342118,*(undefined4 *)(puVar2 + 0x20),8);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 4;
      } while (iVar1 < DAT_0034211c);
    }
  }
  else {
    iVar1 = 0;
    if (0 < DAT_0034211c) {
      puVar2 = &DAT_00342100;
      do {
        FUN_001eeb00(0x3f800000,DAT_00342118,*(undefined4 *)(puVar2 + 0x20),8);
        FUN_001ecd80(DAT_00342118,0x13 - iVar1);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 4;
      } while (iVar1 < DAT_0034211c);
    }
  }
  return;
}

// 0x002dd640  size 0x13c
void FUN_002dd640(int param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    uVar3 = 0x16;
    iVar2 = 0x17;
  }
  else {
    uVar3 = 0x14;
    iVar2 = 0x15;
  }
  iVar1 = (int)param_4;
  if ((&DAT_003420f0)[iVar1 * 2] == param_1) {
    if (param_2 != (&DAT_003420f4)[iVar1 * 2]) {
      FUN_001fe850(0,param_1,param_2,param_3);
      FUN_001fe850(1,param_1,(&DAT_003420f4)[iVar1 * 2],1,0);
      (&DAT_003420f4)[iVar1 * 2] = param_2;
    }
  }
  else {
    (&DAT_003420f0)[iVar1 * 2] = param_1;
    (&DAT_003420f4)[iVar1 * 2] = param_2;
    FUN_001fe850(0,param_1,param_2,param_3);
  }
  if (*(int *)(iVar2 * 0x14 + param_1 + 0x318) == 1) {
    FUN_001ecd80(param_1,iVar2);
  }
  else {
    FUN_001ecd80(param_1,uVar3);
  }
  return;
}

// 0x002dd780  size 0x84
/* WARNING: Removing unreachable block (ram,0x002dd7c4) */

void FUN_002dd780(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
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
  FUN_001ede20(param_1,auStack_a0,param_2);
  uStack_8c = param_3;
  FUN_001f1390(auStack_a0,param_4,&uStack_20);
  return;
}

// 0x002dd810  size 0x78
/* WARNING: Removing unreachable block (ram,0x002dd850) */

void FUN_002dd810(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
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
  FUN_001ede20(param_1,auStack_a0,param_2);
  FUN_001f1390(auStack_a0,param_3,&uStack_28);
  return;
}

// 0x002dd890  size 0x1e0
undefined8 FUN_002dd890(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(uint *)(param_1 + 0x1c) = (uint)*(ushort *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(char *)(param_1 + 0x10) = (char)*(undefined4 *)(param_1 + 0x18);
  *(char *)(param_1 + 0x11) = (char)((uint)*(undefined4 *)(param_1 + 0x18) >> 8);
  *(char *)(param_1 + 0x12) = (char)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10);
  *(char *)(param_1 + 0x13) = (char)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x18);
  *(char *)(param_1 + 0x14) = (char)*(undefined4 *)(param_1 + 0x1c);
  *(char *)(param_1 + 0x15) = (char)((uint)*(undefined4 *)(param_1 + 0x1c) >> 8);
  *(char *)(param_1 + 0x16) = (char)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10);
  *(char *)(param_1 + 0x17) = (char)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x18);
  uVar1 = ~((((uint)CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)) +
              (uint)CONCAT11(*(undefined1 *)(param_1 + 0x12),*(undefined1 *)(param_1 + 0x13)) &
             0xffff) + (uint)CONCAT11(*(undefined1 *)(param_1 + 0x14),
                                      *(undefined1 *)(param_1 + 0x15)) & 0xffff) +
            (uint)CONCAT11(*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x17)) & 0xffff
           ) & 0xffff;
  *(char *)(param_1 + 0x16) = (char)(uVar1 >> 8);
  *(char *)(param_1 + 0x17) = (char)uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x11) * 0x100;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x12) * 0x10000;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x13) * 0x1000000
  ;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x15) * 0x100;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x16) * 0x10000;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x17) * 0x1000000
  ;
  return 0;
}

// 0x002dda70  size 0x158
void FUN_002dda70(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  uVar7 = 0;
  iVar4 = 0;
  iVar5 = param_1;
  do {
    iVar3 = param_1 + iVar4;
    uVar7 = uVar7 + 1;
    iVar4 = iVar4 + 6;
    *(byte *)(iVar3 + 0x228) = (byte)*(undefined4 *)(iVar5 + 0x18) & 0x1f;
    *(byte *)(iVar3 + 0x229) = (byte)(*(uint *)(iVar5 + 0x18) >> 5) & 0x1f;
    *(byte *)(iVar3 + 0x22a) = (byte)(*(uint *)(iVar5 + 0x18) >> 10) & 0x1f;
    *(byte *)(iVar3 + 0x22b) = (byte)(*(uint *)(iVar5 + 0x18) >> 0xf) & 0x1f;
    *(byte *)(iVar3 + 0x22c) = (byte)(*(uint *)(iVar5 + 0x18) >> 0x14) & 0x1f;
    puVar1 = (undefined4 *)(iVar5 + 0x18);
    iVar5 = iVar5 + 4;
    *(byte *)(iVar3 + 0x22d) = (byte)((uint)*puVar1 >> 0x19) & 0x1f;
  } while (uVar7 < 2);
  uVar7 = 0;
  *(byte *)(param_1 + 0x234) =
       (byte)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x1e) |
       (byte)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x1c) & 0xc;
  do {
    cVar2 = *(char *)(param_1 + uVar7 + 0x228);
    pcVar6 = (char *)(param_1 + uVar7 + 0x228);
    if (cVar2 < '\b') {
      *pcVar6 = cVar2 + '2';
    }
    else if ((cVar2 < '\b') || ('\x0f' < cVar2)) {
      if ((cVar2 < '\x10') || ('\x14' < cVar2)) {
        if (('\x14' < cVar2) && (cVar2 < ' ')) {
          *pcVar6 = *pcVar6 + ';';
        }
      }
      else {
        *pcVar6 = *pcVar6 + ':';
      }
    }
    else {
      *pcVar6 = *pcVar6 + '9';
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xd);
  return;
}

// 0x002ddbd0  size 0x1e8
void FUN_002ddbd0(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar6 = 0;
  iVar7 = 0;
  uVar4 = 0;
  uVar5 = 0;
  iVar8 = 1;
  pbVar2 = param_1 + 4;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)*param_1;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)param_1[1] * 0x100;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)param_1[2] * 0x10000;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uint)param_1[3] * 0x1000000;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)param_1[4];
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)param_1[5] * 0x100;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)param_1[6] * 0x10000;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)param_1[7] * 0x1000000;
  param_1[0x20] = 99;
  param_1[0x21] = 0x51;
  param_1[0x22] = 0xe1;
  param_1[0x23] = 0xb7;
  do {
    iVar8 = iVar8 + 8;
    *(int *)(pbVar2 + 0x20) = *(int *)(pbVar2 + 0x1c) + -0x61c88647;
    *(int *)(pbVar2 + 0x24) = *(int *)(pbVar2 + 0x20) + -0x61c88647;
    *(int *)(pbVar2 + 0x28) = *(int *)(pbVar2 + 0x24) + -0x61c88647;
    *(int *)(pbVar2 + 0x2c) = *(int *)(pbVar2 + 0x28) + -0x61c88647;
    *(int *)(pbVar2 + 0x30) = *(int *)(pbVar2 + 0x2c) + -0x61c88647;
    *(int *)(pbVar2 + 0x34) = *(int *)(pbVar2 + 0x30) + -0x61c88647;
    *(int *)(pbVar2 + 0x38) = *(int *)(pbVar2 + 0x34) + -0x61c88647;
    *(int *)(pbVar2 + 0x3c) = *(int *)(pbVar2 + 0x38) + -0x61c88647;
    pbVar2 = pbVar2 + 0x20;
  } while (iVar8 < 0x7a);
  iVar3 = 0x186;
  *(int *)(param_1 + iVar8 * 4 + 0x20) = *(int *)(param_1 + iVar8 * 4 + 0x1c) + -0x61c88647;
  do {
    uVar5 = uVar4 + *(int *)(param_1 + iVar7 * 4 + 0x20) + uVar5;
    uVar5 = uVar5 * 8 | uVar5 >> 0x1d;
    *(uint *)(param_1 + iVar7 * 4 + 0x20) = uVar5;
    uVar1 = uVar5 + uVar4 & 0x1f;
    uVar4 = uVar4 + *(int *)(param_1 + uVar6 * 4 + 8) + uVar5;
    uVar4 = uVar4 << uVar1 | uVar4 >> (0x20 - uVar1 & 0x1f);
    *(uint *)(param_1 + uVar6 * 4 + 8) = uVar4;
    iVar7 = (iVar7 + 1) % 0x82;
    uVar1 = uVar6 + 1;
    uVar6 = uVar1 & 1;
    if (((int)uVar1 < 0) && (uVar6 != 0)) {
      uVar6 = uVar6 - 2;
    }
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  return;
}

// 0x002dddc0  size 0x190
void FUN_002dddc0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  FUN_002ddf50();
  lVar1 = FUN_002dd890(param_1,param_2);
  if (lVar1 < 0) {
    printf(0x368210);
  }
  else {
    FUN_002ddbd0(param_1);
    iVar6 = (int)param_1;
    iVar2 = 1;
    *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0x20);
    *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + *(int *)(iVar6 + 0x24);
    iVar5 = iVar6;
    do {
      iVar2 = iVar2 + 1;
      *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) ^ *(uint *)(iVar6 + 0x1c);
      uVar3 = *(uint *)(iVar6 + 0x1c) & 0x1f;
      *(uint *)(iVar6 + 0x18) =
           *(int *)(iVar5 + 0x28) +
           (*(uint *)(iVar6 + 0x18) << uVar3 | *(uint *)(iVar6 + 0x18) >> (0x20 - uVar3 & 0x1f));
      *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) ^ *(uint *)(iVar6 + 0x18);
      uVar3 = *(uint *)(iVar6 + 0x18) & 0x1f;
      *(uint *)(iVar6 + 0x1c) =
           *(int *)(iVar5 + 0x2c) +
           (*(uint *)(iVar6 + 0x1c) << uVar3 | *(uint *)(iVar6 + 0x1c) >> (0x20 - uVar3 & 0x1f));
      iVar5 = iVar5 + 8;
    } while (iVar2 < 0x41);
    FUN_002dda70(param_1);
    iVar5 = 0;
    do {
      puVar4 = (undefined1 *)(param_3 + iVar5);
      iVar2 = iVar6 + iVar5;
      *puVar4 = 0;
      iVar5 = iVar5 + 6;
      *puVar4 = *(undefined1 *)(iVar2 + 0x228);
      puVar4[1] = 0;
      puVar4[1] = *(undefined1 *)(iVar2 + 0x229);
      puVar4[2] = 0;
      puVar4[2] = *(undefined1 *)(iVar2 + 0x22a);
      puVar4[3] = 0;
      puVar4[3] = *(undefined1 *)(iVar2 + 0x22b);
      puVar4[4] = 0;
      puVar4[4] = *(undefined1 *)(iVar2 + 0x22c);
      puVar4[5] = 0;
      puVar4[5] = *(undefined1 *)(iVar2 + 0x22d);
    } while (iVar5 < 7);
    *(undefined1 *)(param_3 + iVar5) = 0;
    *(undefined1 *)(param_3 + iVar5) = *(undefined1 *)(iVar5 + iVar6 + 0x228);
  }
  return;
}

// 0x002ddf50  size 0x7c
void FUN_002ddf50(undefined1 *param_1)

{
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x235] = 0;
  *param_1 = 0x70;
  param_1[1] = 0x72;
  param_1[2] = 0x6a;
  param_1[3] = 0x50;
  param_1[4] = 0x53;
  param_1[5] = 0x32;
  param_1[6] = 0x54;
  param_1[7] = 0x42;
  param_1[0x235] = 0;
  return;
}

// 0x002ddfd0  size 0x254
void FUN_002ddfd0(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_300 [52];
  undefined1 uStack_230;
  undefined1 uStack_22f;
  char cStack_22e;
  undefined1 uStack_22d;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined1 auStack_1e0 [4];
  undefined4 uStack_1dc;
  undefined1 uStack_1d8;
  undefined4 auStack_110 [52];
  undefined1 auStack_40 [12];
  byte bStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Career_BeginNew();
  uVar1 = FUN_002093c0((int)param_2 + ((uint)param_1 & 0xff) * 3);
  memcpy(auStack_40,uVar1,0x38);
  GameState_StartRace(1,param_1,param_2,0);
  RaceCtx_Set_8(0);
  uVar1 = FUN_001c1890(0);
  FUN_001bc410(auStack_300,uVar1);
  puVar4 = auStack_300;
  puVar3 = auStack_110;
  iVar2 = 0x33;
  do {
    iVar2 = iVar2 + -1;
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  FUN_001d3120(auStack_110,auStack_1e0);
  auStack_1e0[0] = 1;
  uStack_1dc = 0x89;
  uStack_1d8 = 0;
  FUN_001d2180(auStack_1e0,param_4);
  PlayerRecord_Copy(0,auStack_1e0);
  GameState_Set_e0(1);
  if (bStack_34 - 2 < 2) {
    if (param_3 == '\0') {
      GameState_Set_364(iStack_18 * 1000);
    }
    else {
      GameState_Set_364(iStack_14 * 1000);
    }
  }
  if ((bStack_34 == 1) || (bStack_34 == 3)) {
    if (param_3 == '\0') {
      GameState_Set_390(uStack_28);
    }
    else {
      GameState_Set_390(uStack_24);
    }
  }
  if (bStack_34 == 3) {
    GameState_Set_354();
  }
  else if (bStack_34 == 1) {
    GameState_Set_354();
  }
  else if (bStack_34 == 2) {
    GameState_Set_354();
  }
  RaceParams_SetDefaults(&uStack_230);
  uStack_230 = (undefined1)param_1;
  uStack_22f = FUN_001bff70(param_1,uStack_30,uStack_2c,&uStack_4,&uStack_8);
  uStack_22d = 0;
  uStack_228 = 0;
  uStack_224 = uStack_4;
  uStack_220 = uStack_8;
  cStack_22e = param_3;
  GameState_SaveHeader(&uStack_230);
  RaceSetup_Prepare();
  return;
}

// 0x002de230  size 0x21c
void FUN_002de230(undefined8 param_1,int param_2,int param_3,char param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  undefined4 auStack_2f0 [52];
  undefined1 uStack_220;
  undefined1 uStack_21f;
  char cStack_21e;
  undefined1 uStack_21d;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined1 auStack_1d0 [4];
  undefined4 uStack_1cc;
  undefined1 uStack_1c8;
  undefined4 auStack_100 [52];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Career_BeginNew();
  piVar1 = (int *)FUN_002093a0(param_1,param_2 + param_3 * 10);
  while( true ) {
    iStack_310 = *piVar1;
    iStack_30c = piVar1[1];
    iStack_308 = piVar1[2];
    iStack_304 = piVar1[3];
    iStack_300 = piVar1[4];
    iStack_2fc = piVar1[5];
    iStack_2f8 = piVar1[6];
    iStack_2f4 = piVar1[7];
    if ((iStack_310 == -1) || ((iStack_30c == param_3 && (iStack_310 == param_2)))) break;
    piVar1 = piVar1 + 8;
  }
  memcpy(auStack_30,&iStack_310,0x20);
  GameState_StartRace(0,param_1,param_2,param_3);
  RaceCtx_Set_8(0);
  uVar2 = FUN_001c1890(0);
  FUN_001bc410(auStack_2f0,uVar2);
  puVar5 = auStack_2f0;
  puVar4 = auStack_100;
  iVar3 = 0x33;
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (0 < iVar3);
  FUN_001d3120(auStack_100,auStack_1d0);
  auStack_1d0[0] = 1;
  uStack_1cc = 0x89;
  uStack_1c8 = 0;
  FUN_001d2180(auStack_1d0,param_5);
  PlayerRecord_Copy(0,auStack_1d0);
  GameState_Set_e0(1);
  GameState_Set_354(1);
  if (param_4 == '\0') {
    GameState_Set_390(uStack_20);
  }
  else {
    GameState_Set_390(uStack_1c);
  }
  RaceParams_SetDefaults(&uStack_220);
  uStack_220 = (undefined1)param_1;
  uStack_21f = FUN_001bff70(param_1,uStack_28,uStack_24,&uStack_4,&uStack_8);
  uStack_21d = 0;
  uStack_218 = 0;
  uStack_214 = uStack_4;
  uStack_210 = uStack_8;
  cStack_21e = param_4;
  GameState_SaveHeader(&uStack_220);
  RaceSetup_Prepare();
  return;
}

// 0x002de450  size 0xe8
void FUN_002de450(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar3 = 0;
  auStack_30[0] = DAT_003424e0;
  auStack_30[1] = DAT_003424e4;
  auStack_30[2] = DAT_003424e8;
  auStack_30[3] = DAT_003424ec;
  uStack_20 = DAT_003424f0;
  uStack_1c = DAT_003424f4;
  uStack_18 = DAT_003424f8;
  uStack_14 = DAT_003424fc;
  uStack_10 = DAT_00342500;
  uStack_c = DAT_00342504;
  uStack_8 = DAT_00342508;
  iVar2 = param_1;
  do {
    pcVar1 = (char *)(param_1 + iVar3);
    iVar3 = iVar3 + 3;
    *(short *)(iVar2 + 0x12) = (short)auStack_30[*pcVar1];
    *(short *)(iVar2 + 0x14) = (short)auStack_30[pcVar1[1]];
    *(short *)(iVar2 + 0x16) = (short)auStack_30[pcVar1[2]];
    iVar2 = iVar2 + 6;
  } while (iVar3 < 9);
  return;
}

// 0x002de540  size 0x8c
void FUN_002de540(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar4 = param_1;
  iVar3 = param_1;
  iVar2 = param_1;
  do {
    iVar5 = 0;
    *(undefined1 *)(param_1 + iVar6) = 0;
    ((undefined1 *)(param_1 + iVar6))[9] = 0;
    *(undefined2 *)(iVar4 + 0x12) = 2;
    iVar1 = iVar3;
    do {
      *(undefined1 *)(iVar1 + 0x24) = 7;
      *(undefined1 *)(iVar1 + 0x25) = 7;
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar1 + 0x26) = 7;
      *(undefined1 *)(iVar1 + 0x27) = 7;
      *(undefined1 *)(iVar1 + 0x28) = 7;
      *(undefined1 *)(iVar1 + 0x29) = 7;
      *(undefined1 *)(iVar1 + 0x2a) = 7;
      *(undefined1 *)(iVar1 + 0x2b) = 7;
      iVar1 = iVar1 + 8;
    } while (iVar5 < 10);
    *(undefined1 *)(iVar2 + 0x2f4) = 7;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar2 + 0x2f5) = 7;
    *(undefined1 *)(iVar2 + 0x2f6) = 7;
    iVar4 = iVar4 + 2;
    iVar3 = iVar3 + 0x50;
    iVar2 = iVar2 + 3;
  } while (iVar6 < 9);
  return;
}

// 0x002de5d0  size 0x2c
char FUN_002de5d0(int param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = *(char *)((param_2 & 0xff) + param_1 + 0xd84a);
  if ('\t' < cVar1) {
    cVar1 = '\t';
  }
  return cVar1;
}

// 0x002de600  size 0x1cc
bool FUN_002de600(undefined8 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = 1;
  lVar3 = FUN_001c0ed0(param_1,6);
  if (lVar3 == 0) {
    lVar3 = FUN_001c0ed0(param_1,7);
    if ((lVar3 == 0) && (lVar3 = FUN_001c0ed0(param_1,4), lVar3 == 0)) {
      lVar3 = FUN_001c0ed0(param_1,2);
      if ((lVar3 == 0) && (lVar3 = FUN_001c0ed0(param_1,3), lVar3 == 0)) {
        lVar3 = FUN_001c0ed0(param_1,5);
        if ((lVar3 == 0) && (lVar3 = FUN_001c0ed0(param_1,0), lVar3 == 0)) {
          iVar2 = 2;
        }
        else {
          iVar2 = 4;
        }
      }
      else {
        iVar2 = 6;
      }
    }
    else {
      iVar2 = 8;
    }
  }
  else {
    iVar2 = 0xb;
  }
  param_2 = param_2 & 0xff;
  iVar7 = 0;
  iVar10 = (int)param_1;
  iVar5 = iVar10 + param_2 * 0x50;
  do {
    iVar8 = 0;
    iVar6 = 0;
    pcVar4 = (char *)(iVar5 + 0xd86e);
    do {
      if ((*pcVar4 == '\0') && (iVar8 = iVar8 + 1, 2 < iVar8)) break;
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 1;
    } while (iVar6 < 8);
    if (iVar8 < 3) break;
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + 1;
    iVar5 = iVar5 + 8;
  } while (iVar7 < 10);
  *(char *)(param_2 + iVar10 + 0xd853) = (char)iVar9 + -1;
  if (iVar9 <= iVar2) {
    iVar2 = iVar9;
  }
  pcVar4 = (char *)(param_2 + iVar10 + 0xd84a);
  cVar1 = *pcVar4;
  *pcVar4 = (char)iVar2 + -1;
  return (long)cVar1 < (long)(iVar2 + -1);
}

// 0x002de7d0  size 0x88
void FUN_002de7d0(int param_1,uint param_2,int param_3,long param_4)

{
  if (param_4 == 0) {
    param_1 = (param_2 & 0xff) * 2 + param_1;
    *(short *)(param_1 + 0xd85c) =
         *(short *)(param_1 + 0xd85c) - *(short *)(&DAT_00342310 + param_3 * 4);
  }
  else {
    param_1 = (param_2 & 0xff) * 2 + param_1;
    *(short *)(param_1 + 0xd85c) =
         *(short *)(param_1 + 0xd85c) - *(short *)(&DAT_00342340 + (param_2 & 0xff) * 4);
  }
  return;
}

// 0x002de860  size 0x7c
int FUN_002de860(int param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = (int)*(short *)((param_3 & 0xff) * 2 + param_1 + 0xd85c) /
            *(int *)(&DAT_00342310 + param_4 * 4);
  }
  else {
    iVar1 = (int)*(short *)((param_3 & 0xff) * 2 + param_1 + 0xd85c) /
            *(int *)(&DAT_00342340 + (param_3 & 0xff) * 4);
  }
  return iVar1;
}

// 0x002de8e0  size 0x5c
undefined1 FUN_002de8e0(int param_1,long param_2,int param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined1 *)(param_3 + param_5 * 8 + (param_4 & 0xff) * 0x50 + param_1 + 0xd86e);
  }
  else {
    uVar1 = *(undefined1 *)(param_5 + (param_4 & 0xff) * 3 + param_1 + 0xdb3e);
  }
  return uVar1;
}

// 0x002de940  size 0x188
undefined4
FUN_002de940(undefined8 param_1,char param_2,long param_3,int param_4,undefined8 param_5,int param_6
            )

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_2 == '\0') {
    if (param_3 == 0) {
      FUN_001bdd10(param_1,0x400);
      FUN_001c1620(param_1,5);
    }
    else {
      FUN_001bdd10(param_1,0x800);
      FUN_001c1620(param_1,8);
    }
  }
  else if (param_3 == 0) {
    FUN_001c1620(param_1,0xfffffffffffffffd);
  }
  else {
    FUN_001c1620(param_1,0xfffffffffffffffb);
  }
  if (param_3 == 0) {
    pcVar3 = (char *)(param_4 + param_6 * 8 + ((uint)param_5 & 0xff) * 0x50 + (int)param_1 + 0xd86e)
    ;
    cVar1 = *pcVar3;
    if ((cVar1 == '\a') || (param_2 < cVar1)) {
      *pcVar3 = param_2;
      lVar2 = FUN_002de600(param_1,param_5);
      if (lVar2 != 0) {
        uVar4 = 1;
      }
    }
  }
  else {
    pcVar3 = (char *)(param_6 + ((uint)param_5 & 0xff) * 3 + (int)param_1 + 0xdb3e);
    if (*pcVar3 == '\a') {
      *pcVar3 = param_2;
    }
    else if (param_2 < *pcVar3) {
      *pcVar3 = param_2;
    }
  }
  return uVar4;
}

// 0x002dead0  size 0x5f0
undefined8 FUN_002dead0(char param_1,long param_2,short param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = FUN_00205530(param_3);
  uVar4 = 0;
  if ((param_2 < 0) || (2 < param_2)) {
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x88);
    if (iVar2 == 2) {
      if ((param_1 == '\x06') && ((int)param_2 - 1U < 2)) {
        uVar4 = 1;
      }
    }
    else {
      switch(param_1) {
      case '\0':
        if (param_2 == 2) {
          if (*(float *)(iVar3 + 0x4c) < 300.0) {
            uVar4 = 1;
          }
        }
        else if (param_2 == 1) {
          if (*(byte *)(iVar3 + 0x44) < 3) {
            uVar4 = 1;
          }
        }
        else if (param_2 == 0) {
          if (*(char *)(iVar3 + 0x28) == '\b') {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = 0;
        }
        break;
      case '\x01':
        if (param_2 == 2) {
          if (iVar2 == 0) {
            uVar4 = 1;
          }
        }
        else if (param_2 == 1) {
          cVar1 = *(char *)(iVar3 + 0x44);
          if (((cVar1 == '\x05') || (cVar1 == '\x06')) || (cVar1 == '\b')) {
            uVar4 = 1;
          }
        }
        else if ((param_2 == 0) && (*(char *)(iVar3 + 0x28) == '\x05')) {
          uVar4 = 1;
        }
        break;
      case '\x02':
        if (param_2 == 2) {
          if (*(float *)(iVar3 + 0x4c) == 280.0) {
            uVar4 = 1;
          }
        }
        else if (param_2 == 1) {
          if (40.0 <= *(float *)(iVar3 + 0x54)) {
            uVar4 = 1;
          }
        }
        else if ((param_2 == 0) && (*(char *)(iVar3 + 0x28) == '\x04')) {
          uVar4 = 1;
        }
        break;
      case '\x03':
        if (param_2 == 2) {
          if ((((param_3 == 0x6e) || (param_3 == 0x70)) || (param_3 == 0x72)) ||
             (((((param_3 == 0x74 || (param_3 == 0x76)) ||
                ((param_3 == 0x78 || ((param_3 == 0x7a || (param_3 == 0x7c)))))) ||
               (param_3 == 0xea)) || (param_3 == 0xef)))) {
            uVar4 = 1;
          }
        }
        else if (param_2 == 1) {
          if (*(byte *)(iVar3 + 0x44) - 3 < 2) {
            uVar4 = 1;
          }
        }
        else if ((param_2 == 0) && (*(char *)(iVar3 + 0x28) == '\x06')) {
          uVar4 = 1;
        }
        break;
      case '\x04':
        if (param_2 == 2) {
          if ((((((param_3 == 0xd) || (param_3 == 0xf)) || (param_3 == 0x17)) ||
               ((param_3 == 0x19 || (param_3 == 0x21)))) || (param_3 == 0x23)) || (param_3 == 0xe8))
          {
            uVar4 = 1;
          }
        }
        else if (param_2 == 1) {
          if (300.0 < *(float *)(iVar3 + 0x4c)) {
            uVar4 = 1;
          }
        }
        else if ((param_2 == 0) &&
                ((*(char *)(iVar3 + 0x28) == '\x01' || (*(char *)(iVar3 + 0x28) == '\a')))) {
          uVar4 = 1;
        }
        break;
      case '\x05':
        if (param_2 == 2) {
          if ((((param_3 == 0x84) || (param_3 == 0x86)) ||
              ((param_3 == 0x88 || (((param_3 == 0x89 || (param_3 == 0x8b)) || (param_3 == 0xde)))))
              ) || (((param_3 == 0x46 || (param_3 == 0x48)) ||
                    ((param_3 == 0x4a ||
                     (((param_3 == 0x4c || (param_3 == 0xdc)) ||
                      ((param_3 == 0xdd || (param_3 == 0xe0)))))))))) {
            uVar4 = 1;
          }
        }
        else if (param_2 == 1) {
          if (*(char *)(iVar3 + 0x44) == '\a') {
            uVar4 = 1;
          }
        }
        else if ((param_2 == 0) && (*(char *)(iVar3 + 0x28) == '\x02')) {
          uVar4 = 1;
        }
        break;
      case '\x06':
        if (param_2 == 2) {
          uVar4 = 1;
        }
        else if (param_2 == 1) {
          if (iVar2 == 2) {
            uVar4 = 1;
          }
        }
        else if ((param_2 == 0) &&
                ((((cVar1 = *(char *)(iVar3 + 0x28), cVar1 == '\f' || (cVar1 == '\t')) ||
                  (cVar1 == '\n')) || ((int)cVar1 - 0xdU < 4)))) {
          uVar4 = 1;
        }
        break;
      case '\a':
        if (param_2 == 2) {
          if ((float)*(uint *)(iVar3 + 0x48) < 1000.0) {
            uVar4 = 1;
          }
        }
        else if (param_2 == 1) {
          if (iVar2 == 1) {
            uVar4 = 1;
          }
        }
        else if ((param_2 == 0) && (*(char *)(iVar3 + 0x28) == '\x03')) {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}

// 0x002df0c0  size 0x50
undefined4 FUN_002df0c0(undefined2 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00205530(param_1);
  if (*(int *)(iVar1 + 0x88) == 2) {
    uVar2 = 0xffffffff;
  }
  else if (*(uint *)(iVar1 + 0x2c) < 0x5dd) {
    if (*(uint *)(iVar1 + 0x2c) < 0x44d) {
      uVar2 = 5;
    }
    else {
      uVar2 = 6;
    }
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}

// 0x002df110  size 0x80
undefined4 FUN_002df110(undefined2 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  iVar2 = FUN_00205530(param_1);
  cVar1 = *(char *)(iVar2 + 0x3c);
  if (cVar1 == '\x04') {
    uVar3 = 4;
  }
  else if (((cVar1 == '\x03') || (cVar1 == '\x02')) || (cVar1 == '\x01')) {
    uVar3 = 3;
  }
  else if (cVar1 != '\0') {
    return 2;
  }
  return uVar3;
}

// 0x002df190  size 0x6c
undefined4 FUN_002df190(undefined2 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_00205530(param_1);
  cVar1 = *(char *)(iVar2 + 0x45);
  if (((cVar1 == '\x03') || (cVar1 == '\x02')) || (cVar1 == '\x01')) {
    uVar3 = 1;
  }
  else if (cVar1 != '\0') {
    return 0;
  }
  return uVar3;
}

// 0x002df200  size 0xc
undefined4 GameState_Get_3a4(void)

{
  return *(undefined4 *)(iGpffff8ab8 + 0x3a4);
}

// 0x002df210  size 0xc
undefined4 GameState_Get_3ac(void)

{
  return *(undefined4 *)(iGpffff8ab8 + 0x3ac);
}

// 0x002df220  size 0xc
undefined4 GameState_Get_3a8(void)

{
  return *(undefined4 *)(iGpffff8ab8 + 0x3a8);
}

// 0x002df230  size 0xe8
undefined4 FUN_002df230(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar2 = 5;
  uVar1 = GameState_Get_35c();
  if ((uVar1 & 0x400) == 0) {
    uVar1 = GameState_Get_35c();
    if ((uVar1 & 0x800) == 0) {
      uVar1 = GameState_Get_35c();
      if ((uVar1 & 0x1000) == 0) {
        uVar1 = GameState_Get_35c();
        if ((uVar1 & 0x2000) == 0) {
          uVar1 = GameState_Get_35c();
          if ((uVar1 & 0x4000) == 0) {
            uVar1 = GameState_Get_35c();
            if ((uVar1 & 0x8000) == 0) {
              GameState_Get_35c();
            }
            else {
              uVar2 = 4;
            }
          }
          else {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 6;
  }
  return uVar2;
}

// 0x002df320  size 0x28
bool FUN_002df320(void)

{
  ulong uVar1;
  
  uVar1 = GameState_Get_35c();
  return (uVar1 & 0x20000) != 0;
}

// 0x002df350  size 0xa4
int FUN_002df350(long param_1)

{
  int iVar1;
  int aiStack_20 [4];
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(iGpffff8ab8 + 0x3a4) == 0) {
    iVar1 = FUN_002df9f0(*(undefined4 *)(iGpffff8ab8 + 0x3a8));
  }
  else {
    aiStack_20[0] = DAT_003424c0;
    aiStack_20[1] = DAT_003424c4;
    aiStack_20[2] = DAT_003424c8;
    aiStack_20[3] = DAT_003424cc;
    uStack_10 = DAT_003424d0;
    iStack_c = DAT_003424d4;
    uStack_8 = DAT_003424d8;
    if (param_1 < 5) {
      iVar1 = aiStack_20[(int)param_1];
    }
    else {
      iVar1 = DAT_003424d4;
    }
  }
  return iVar1;
}

// 0x002df400  size 0x168
int FUN_002df400(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = 5;
  iVar2 = *(int *)(iRam0036f1a8 + 0x3b4);
  iVar3 = *(int *)(iRam0036f1a8 + 0x3bc);
  if (iVar2 != 0) {
    iVar5 = iVar2 - *(int *)(iRam0036f1a8 + 0x3b8);
    iVar9 = 0;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    iVar7 = 0;
    do {
      iVar6 = iVar2 - iVar7;
      if (iVar9 != 0) {
        iVar6 = iVar6 - iVar6 % 100;
        iVar1 = iVar6 % 1000;
        iVar8 = 0;
        if (iVar1 < 0x2ef) {
          if (0xfa < iVar1) {
            iVar8 = 500;
          }
        }
        else {
          iVar8 = 1000;
        }
        iVar6 = (iVar6 - iVar1) + iVar8;
      }
      if (iVar6 <= param_1) {
        iVar4 = iVar9;
        break;
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + (iVar5 >> 2);
    } while (iVar9 < 5);
  }
  iVar5 = 5;
  if (iVar3 != 0) {
    iVar9 = iVar3 - *(int *)(iRam0036f1a8 + 0x3c0);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 3;
    }
    iVar6 = 0;
    iVar7 = 0;
    do {
      iVar5 = iVar7;
      if (param_2 <= iVar3 - iVar6) break;
      iVar7 = iVar5 + 1;
      iVar6 = iVar6 + (iVar9 >> 2);
      iVar5 = 5;
    } while (iVar7 < 5);
  }
  if ((iVar3 == 0) || (iVar2 == 0)) {
    if ((iVar3 == 0) && (iVar2 != 0)) {
      iVar5 = iVar4;
    }
    else if ((iVar3 == 0) || (iVar2 != 0)) {
      iVar5 = 0;
    }
  }
  else if (iVar5 <= iVar4) {
    iVar5 = iVar4;
  }
  return iVar5;
}

// 0x002df570  size 0x104
int FUN_002df570(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    sVar1 = *(short *)(param_1 + 0x3c);
    if ((sVar1 != -1) && (sVar1 < 0x1e)) {
      FUN_001b8610(&uStack_60,(char)sVar1);
      uStack_30 = uStack_60;
      uStack_28 = uStack_58;
      uStack_24 = uStack_54;
      uStack_20 = uStack_50;
      uStack_1c = uStack_4c;
      uStack_18 = uStack_48;
      uStack_14 = uStack_44;
      uStack_10 = uStack_40;
      uStack_c = uStack_3c;
      iVar2 = FUN_001b0750(&uStack_30,(short)iVar3);
      iVar4 = iVar4 + iVar2;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 2;
  } while (iVar3 < 0x10);
  return iVar4;
}

// 0x002df680  size 0x88
int FUN_002df680(uint param_1,int param_2,char param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [40];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  uVar1 = FUN_002093c0(param_2 + (param_1 & 0xff) * 3);
  memcpy(auStack_40,uVar1,0x38);
  if (param_3 == '\0') {
    iStack_14 = iStack_18;
    iStack_c = iStack_10;
  }
  iStack_c = iStack_14 - iStack_c;
  if (iStack_c < 0) {
    iStack_c = iStack_c + 3;
  }
  return iStack_14 - param_4 * (iStack_c >> 2);
}

// 0x002df710  size 0xe0
int FUN_002df710(uint param_1,int param_2,char param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_40 [24];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar2 = FUN_002093c0(param_2 + (param_1 & 0xff) * 3);
  memcpy(auStack_40,uVar2,0x38);
  if (param_3 != '\0') {
    iStack_20 = iStack_1c;
    iStack_28 = iStack_24;
  }
  iStack_20 = iStack_28 - iStack_20;
  if (iStack_20 < 0) {
    iStack_20 = iStack_20 + 3;
  }
  iStack_28 = iStack_28 - (int)param_4 * (iStack_20 >> 2);
  if (param_4 != 0) {
    iStack_28 = iStack_28 - iStack_28 % 100;
    iVar1 = iStack_28 % 1000;
    iVar3 = 0;
    if (iVar1 < 0x2ef) {
      if (0xfa < iVar1) {
        iVar3 = 500;
      }
    }
    else {
      iVar3 = 1000;
    }
    iStack_28 = (iStack_28 - iVar1) + iVar3;
  }
  return iStack_28;
}

// 0x002df7f0  size 0x7c
undefined4 FUN_002df7f0(long param_1)

{
  undefined4 uVar1;
  undefined4 auStack_20 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auStack_20[0] = DAT_003424c0;
  auStack_20[1] = DAT_003424c4;
  auStack_20[2] = DAT_003424c8;
  auStack_20[3] = DAT_003424cc;
  uStack_10 = DAT_003424d0;
  uStack_c = DAT_003424d4;
  uStack_8 = DAT_003424d8;
  if (param_1 < 5) {
    uVar1 = auStack_20[(int)param_1];
  }
  else {
    uVar1 = DAT_003424d4;
  }
  return uVar1;
}

// 0x002df870  size 0x17c
int FUN_002df870(undefined8 param_1,int param_2,int param_3,char param_4,long param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [16];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar2 = (int *)FUN_002093a0(param_1,param_2 + param_3 * 10);
  while( true ) {
    iStack_40 = *piVar2;
    iStack_3c = piVar2[1];
    iStack_38 = piVar2[2];
    iStack_34 = piVar2[3];
    iStack_30 = piVar2[4];
    iStack_2c = piVar2[5];
    iStack_28 = piVar2[6];
    iStack_24 = piVar2[7];
    if ((iStack_40 == -1) || ((iStack_3c == param_3 && (iStack_40 == param_2)))) break;
    piVar2 = piVar2 + 8;
  }
  memcpy(auStack_20,&iStack_40,0x20);
  if (param_4 != '\0') {
    iStack_8 = iStack_4;
    iStack_10 = iStack_c;
  }
  iStack_8 = iStack_10 - iStack_8;
  if (iStack_8 < 0) {
    iStack_8 = iStack_8 + 3;
  }
  iStack_10 = iStack_10 - (int)param_5 * (iStack_8 >> 2);
  if (param_5 != 0) {
    iStack_10 = iStack_10 - iStack_10 % 100;
    iVar1 = iStack_10 % 1000;
    iVar3 = 0;
    if (iVar1 < 0x2ef) {
      if (0xfa < iVar1) {
        iVar3 = 500;
      }
    }
    else {
      iVar3 = 1000;
    }
    iStack_10 = (iStack_10 - iVar1) + iVar3;
  }
  return iStack_10;
}

// 0x002df9f0  size 0x478
undefined4 FUN_002df9f0(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined1 uStack00000000;
  undefined4 *apuStack_170 [4];
  undefined4 *puStack_160;
  undefined4 *puStack_15c;
  undefined4 *puStack_158;
  undefined4 *puStack_154;
  undefined4 *puStack_150;
  undefined4 *puStack_14c;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppuVar3 = apuStack_170;
  uVar1 = 0;
  uStack_1c = DAT_00342384;
  uStack_20 = DAT_00342380;
  uStack_14 = DAT_0034238c;
  uStack_18 = DAT_00342388;
  uStack_c = DAT_00342394;
  uStack_10 = DAT_00342390;
  uStack_8 = DAT_00342398;
  uStack_4 = DAT_0034239c;
  uStack_40 = DAT_003423a0;
  uStack_34 = DAT_003423ac;
  uStack_3c = DAT_003423a4;
  uStack_38 = DAT_003423a8;
  uStack_28 = DAT_003423b8;
  uStack_30 = DAT_003423b0;
  uStack_58 = DAT_003423c8;
  uStack_2c = DAT_003423b4;
  uStack_48 = DAT_003423d8;
  uStack_24 = DAT_003423bc;
  uStack_60 = DAT_003423c0;
  uStack_5c = DAT_003423c4;
  uStack_54 = DAT_003423cc;
  uStack_50 = DAT_003423d0;
  uStack_4c = DAT_003423d4;
  uStack_80 = DAT_003423e0;
  uStack_44 = DAT_003423dc;
  uStack_78 = DAT_003423e8;
  uStack_7c = DAT_003423e4;
  uStack_70 = DAT_003423f0;
  uStack_74 = DAT_003423ec;
  uStack_68 = DAT_003423f8;
  uStack_6c = DAT_003423f4;
  uStack_a0 = DAT_00342400;
  uStack_64 = DAT_003423fc;
  uStack_98 = DAT_00342408;
  uStack_9c = DAT_00342404;
  uStack_90 = DAT_00342410;
  uStack_94 = DAT_0034240c;
  uStack_88 = DAT_00342418;
  uStack_8c = DAT_00342414;
  uStack_c0 = DAT_00342420;
  uStack_84 = DAT_0034241c;
  uStack_b8 = DAT_00342428;
  uStack_bc = DAT_00342424;
  uStack_b0 = DAT_00342430;
  uStack_b4 = DAT_0034242c;
  uStack_a8 = DAT_00342438;
  uStack_ac = DAT_00342434;
  uStack_e0 = DAT_00342440;
  uStack_a4 = DAT_0034243c;
  uStack_d8 = DAT_00342448;
  uStack_dc = DAT_00342444;
  uStack_d0 = DAT_00342450;
  uStack_d4 = DAT_0034244c;
  uStack_c8 = DAT_00342458;
  uStack_cc = DAT_00342454;
  uStack_100 = DAT_00342460;
  uStack_c4 = DAT_0034245c;
  uStack_f8 = DAT_00342468;
  uStack_fc = DAT_00342464;
  uStack_f0 = DAT_00342470;
  uStack_f4 = DAT_0034246c;
  uStack_e8 = DAT_00342478;
  uStack_ec = DAT_00342474;
  uStack_120 = DAT_00342480;
  uStack_e4 = DAT_0034247c;
  uStack_118 = DAT_00342488;
  uStack_11c = DAT_00342484;
  uStack_110 = DAT_00342490;
  uStack_114 = DAT_0034248c;
  uStack_108 = DAT_00342498;
  uStack_10c = DAT_00342494;
  uStack_140 = DAT_003424a0;
  uStack_104 = DAT_0034249c;
  uStack_138 = DAT_003424a8;
  uStack_13c = DAT_003424a4;
  uStack_130 = DAT_003424b0;
  uStack_134 = DAT_003424ac;
  uStack_128 = DAT_003424b8;
  uStack_12c = DAT_003424b4;
  iVar2 = 0x28;
  uStack_124 = DAT_003424bc;
  if (&uStack00000000 != (undefined1 *)0x170) {
    do {
      *(undefined1 *)ppuVar3 = 0;
      iVar2 = iVar2 + -1;
      ppuVar3 = (undefined4 **)((int)ppuVar3 + 1);
    } while (iVar2 != 0);
  }
  apuStack_170[0] = &uStack_20;
  apuStack_170[1] = &uStack_40;
  apuStack_170[2] = &uStack_60;
  apuStack_170[3] = &uStack_80;
  puStack_160 = &uStack_a0;
  puStack_15c = &uStack_c0;
  puStack_158 = &uStack_e0;
  puStack_154 = &uStack_100;
  puStack_150 = &uStack_120;
  puStack_14c = &uStack_140;
  if (param_1 < 10) {
    if (param_2 < 5) {
      uVar1 = apuStack_170[(int)param_1][(int)param_2];
    }
    else {
      uVar1 = apuStack_170[(int)param_1][5];
    }
  }
  return uVar1;
}

// 0x002dfe70  size 0x60
void FUN_002dfe70(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_40 [16];
  
  uVar2 = FUN_002093c0(param_2);
  memcpy(auStack_40,uVar2,0x38);
  puVar4 = auStack_40;
  iVar3 = 7;
  do {
    iVar3 = iVar3 + -1;
    uVar1 = puVar4[1];
    *param_1 = *puVar4;
    puVar4 = puVar4 + 2;
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
  } while (0 < iVar3);
  return;
}

// 0x002dfed0  size 0x54
int FUN_002dfed0(undefined8 param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  
  param_3 = param_3 + (param_2 & 0xff) * 3;
  uVar1 = FUN_002093c0(param_3);
  memcpy(param_1,uVar1,0x38);
  return param_3;
}

// 0x002dff30  size 0x100
int FUN_002dff30(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_s0_lo;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar1 = (int *)FUN_002093a0(param_2,param_3 + param_4 * 10);
  iVar2 = 0;
  while( true ) {
    iStack_20 = *piVar1;
    iStack_1c = piVar1[1];
    iStack_18 = piVar1[2];
    iStack_14 = piVar1[3];
    iStack_10 = piVar1[4];
    iStack_c = piVar1[5];
    iStack_8 = piVar1[6];
    iStack_4 = piVar1[7];
    iVar3 = unaff_s0_lo;
    if ((iStack_20 == -1) || ((iStack_1c == param_4 && (iVar3 = iVar2, iStack_20 == param_3))))
    break;
    piVar1 = piVar1 + 8;
    iVar2 = iVar2 + 1;
  }
  memcpy(param_1,&iStack_20,0x20);
  return iVar3;
}

