// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00150000 - 0x00154000
#include "ghidra_types.h"

// 0x001505c0  size 0x36c
void FUN_001505c0(int param_1,undefined8 param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  uVar4 = 0;
  puVar3 = (undefined8 *)0x0;
  puVar6 = (undefined4 *)0x0;
  switch(param_2) {
  case 0:
    uVar4 = 1;
    break;
  case 1:
    uVar4 = 2;
    puVar3 = (undefined8 *)(param_1 + 0x100);
    break;
  case 2:
    uVar4 = 8;
    puVar6 = (undefined4 *)(param_1 + 0x7c0);
    break;
  case 3:
    uVar4 = 0x10;
    puVar6 = (undefined4 *)(param_1 + 0x1290);
    break;
  case 4:
    uVar4 = 0x20;
    puVar6 = (undefined4 *)(param_1 + 0x1d60);
    break;
  case 5:
    uVar4 = 0x40;
    puVar6 = (undefined4 *)(param_1 + 0x2830);
    break;
  case 6:
    uVar4 = 0x80;
    puVar6 = (undefined4 *)(param_1 + 0x3300);
    break;
  case 7:
    uVar4 = 0x2000;
    puVar3 = (undefined8 *)(param_1 + 0x73e0);
    break;
  case 8:
    uVar4 = 0x4000;
    puVar3 = (undefined8 *)(param_1 + 0x7740);
    break;
  case 9:
    uVar4 = 0x8000;
    puVar3 = (undefined8 *)(param_1 + 0x7b90);
    break;
  case 10:
    uVar4 = 0x10000;
    puVar3 = (undefined8 *)(param_1 + 0x7ef0);
  }
  if (param_3 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~uVar4;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar4;
    if (puVar3 != (undefined8 *)0x0) {
      uVar4 = param_4[0xf];
      uVar2 = param_4[0xe];
      uVar1 = param_4[0xd];
      *(byte *)(puVar3 + 0x6a) = *(byte *)(puVar3 + 0x6a) & 0xfe | (byte)param_4[0xc] & 1;
      *(byte *)(puVar3 + 0x6a) = *(byte *)(puVar3 + 0x6a) & 0xf1 | (byte)((uVar1 & 7) << 1);
      *(ushort *)(puVar3 + 0x6a) = *(ushort *)(puVar3 + 0x6a) & 0xf00f | (ushort)(byte)uVar2 << 4;
      *(byte *)((int)puVar3 + 0x351) =
           *(byte *)((int)puVar3 + 0x351) & 0xcf | (byte)((uVar4 & 3) << 4);
      uVar4 = param_4[0x11];
      *(byte *)((int)puVar3 + 0x351) =
           *(byte *)((int)puVar3 + 0x351) & 0xbf | (byte)((param_4[0x10] & 1) << 6);
      *(byte *)((int)puVar3 + 0x351) =
           *(byte *)((int)puVar3 + 0x351) & 0x7f | (byte)((uVar4 & 1) << 7);
      uVar5 = *(undefined8 *)(param_4 + 10);
      *(byte *)(puVar3 + 8) = *(byte *)(puVar3 + 8) & 0xbf | (byte)((param_4[8] & 1) << 6);
      *puVar3 = uVar5;
      uVar4 = *param_4;
      puVar3[6] = (long)(int)(uVar4 >> 0x18) << 0x18 |
                  ((long)(int)uVar4 & 0xffU) << 0x10 |
                  (long)(int)(uVar4 >> 0x10) & 0xffU | ((long)(int)(uVar4 >> 8) & 0xffU) << 8 |
                  0x100000000;
      puVar3[7] = 1;
    }
  }
  if ((param_3 != 0) && (puVar6 != (undefined4 *)0x0)) {
    if (param_4[1] == 0) {
      FUN_00148ea0(puVar6 + 4,param_4[2],*param_4);
      *(byte *)(puVar6 + 0xd) = *(byte *)(puVar6 + 0xd) & 0xe7 | (byte)((param_4[3] & 3) << 3);
      *(byte *)(puVar6 + 0xd) = *(byte *)(puVar6 + 0xd) & 0xfb | (byte)((param_4[4] & 1) << 2);
      *(char *)(puVar6 + 0x14) = (char)param_4[5];
      *(char *)(puVar6 + 0x15) = (char)param_4[6];
      *(byte *)((int)puVar6 + 0x51) =
           *(byte *)((int)puVar6 + 0x51) & 0x7f | (byte)((param_4[7] & 1) << 7);
      *puVar6 = 0xac;
    }
    else {
      FUN_00149670(puVar6 + 4,param_4[2],*param_4);
      *(byte *)(puVar6 + 0xd) = *(byte *)(puVar6 + 0xd) & 0xe7 | (byte)((param_4[3] & 3) << 3);
      *(byte *)(puVar6 + 0xd) = *(byte *)(puVar6 + 0xd) & 0xfb | (byte)((param_4[4] & 1) << 2);
      *(char *)(puVar6 + 0x14) = (char)param_4[5];
      *(char *)(puVar6 + 0x15) = (char)param_4[6];
      *(byte *)((int)puVar6 + 0x51) =
           *(byte *)((int)puVar6 + 0x51) & 0x7f | (byte)((param_4[7] & 1) << 7);
      *puVar6 = 0x59;
    }
  }
  return;
}

// 0x00150930  size 0xb10
void FUN_00150930(undefined4 *param_1,long param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piStack_a0;
  int *piStack_90;
  int *piStack_80;
  int *piStack_70;
  
  iVar6 = (int)param_2 * 0x70;
  bVar1 = param_2 != 1;
  iVar4 = param_4 * *(int *)(iVar6 + 0x38800c);
  iVar2 = param_4 * *(int *)(iVar6 + 0x388010);
  iVar5 = param_4 * *(int *)(iVar6 + 0x388014);
  iVar3 = param_4 * *(int *)(iVar6 + 0x388018);
  param_4 = param_4 * *(int *)(iVar6 + 0x38801c);
  param_3 = param_3 * 4;
  iVar7 = param_3 + iVar6 + 0x387fc0;
  *param_1 = *(undefined4 *)(iVar6 + 0x387fc0);
  param_1[1] = 0;
  FUN_00149a80(param_1 + 4,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar6 + 0x387fe4),
               *(undefined4 *)(iVar6 + 0x387fd4),0,*(undefined4 *)(iVar7 + 0xc),
               *(undefined4 *)(iVar6 + 0x387fd8),bVar1);
  FUN_00148bb0(param_1 + 0x40,!bVar1,1,0,3,0,*(undefined4 *)(iVar6 + 0x387fdc),
               *(undefined4 *)(iVar6 + 0x387fe0));
  FUN_00148bb0(param_1 + 0x118,!bVar1,1,0,3,0,*(undefined4 *)(iVar6 + 0x387fdc),
               *(undefined4 *)(iVar6 + 0x387fe0));
  if (*(uint *)(iVar6 + 0x387fe0) < uRam00387fe0) {
    FUN_001490a0(param_1 + 500,iVar4,*(int *)(param_3 + 0x387fc4) << 5,uRam00387fe4,uRam00387fd4,
                 uRam00387fe8,uRam00387fec,uRam00387fdc);
    param_1[0x1f0] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 500,iVar4,*(int *)(param_3 + 0x387fc4) << 5,uRam00387fe4,uRam00387fd4,
                 uRam00387fe8,uRam00387fec,uRam00387fdc);
    param_1[0x1f0] = 0x59;
  }
  piStack_70 = (int *)(param_3 + 0x387fc4);
  if (*(uint *)(iVar6 + 0x387fe0) < uRam00388050) {
    FUN_001490a0(param_1 + 0x4a8,iVar2,*(int *)(param_3 + 0x388034) << 5,uRam00388054,uRam00388044,
                 uRam00388058,uRam0038805c,uRam0038804c);
    param_1[0x4a4] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0x4a8,iVar2,*(int *)(param_3 + 0x388034) << 5,uRam00388054,uRam00388044,
                 uRam00388058,uRam0038805c,uRam0038804c);
    param_1[0x4a4] = 0x59;
  }
  piStack_80 = (int *)(param_3 + 0x388034);
  if (*(uint *)(iVar6 + 0x387fe0) < uRam003880c0) {
    FUN_001490a0(param_1 + 0x75c,iVar5,*(int *)(param_3 + 0x3880a4) << 5,uRam003880c4,uRam003880b4,
                 uRam003880c8,uRam003880cc,uRam003880bc);
    param_1[0x758] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0x75c,iVar5,*(int *)(param_3 + 0x3880a4) << 5,uRam003880c4,uRam003880b4,
                 uRam003880c8,uRam003880cc,uRam003880bc);
    param_1[0x758] = 0x59;
  }
  piStack_90 = (int *)(param_3 + 0x3880a4);
  if (*(uint *)(iVar6 + 0x387fe0) < uRam00388130) {
    FUN_001490a0(param_1 + 0xa10,iVar3,*(int *)(param_3 + 0x388114) << 5,uRam00388134,uRam00388124,
                 uRam00388138,uRam0038813c,uRam0038812c);
    param_1[0xa0c] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0xa10,iVar3,*(int *)(param_3 + 0x388114) << 5,uRam00388134,uRam00388124,
                 uRam00388138,uRam0038813c,uRam0038812c);
    param_1[0xa0c] = 0x59;
  }
  piStack_a0 = (int *)(param_3 + 0x388114);
  if (*(uint *)(iVar6 + 0x387fe0) < uRam003881a0) {
    FUN_001490a0(param_1 + 0xcc4,param_4,*(int *)(param_3 + 0x388184) << 5,uRam003881a4,uRam00388194
                 ,uRam003881a8,uRam003881ac,uRam0038819c);
    param_1[0xcc0] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0xcc4,param_4,*(int *)(param_3 + 0x388184) << 5,uRam003881a4,uRam00388194
                 ,uRam003881a8,uRam003881ac,uRam0038819c);
    param_1[0xcc0] = 0x59;
  }
  if (*(uint *)(iVar6 + 0x387fe0) < uRam00387fe0) {
    FUN_001490a0(param_1 + 0xf78,iVar4,*piStack_70 << 5,uRam00387fe4,uRam00387fd4,uRam00387fe8,
                 uRam00387fec,uRam00387fdc);
    param_1[0xf74] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0xf78,iVar4,*piStack_70 << 5,uRam00387fe4,uRam00387fd4,uRam00387fe8,
                 uRam00387fec,uRam00387fdc);
    param_1[0xf74] = 0x59;
  }
  if (*(uint *)(iVar6 + 0x387fe0) < uRam00388050) {
    FUN_001490a0(param_1 + 0x122c,iVar2,*piStack_80 << 5,uRam00388054,uRam00388044,uRam00388058,
                 uRam0038805c,uRam0038804c);
    param_1[0x1228] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0x122c,iVar2,*piStack_80 << 5,uRam00388054,uRam00388044,uRam00388058,
                 uRam0038805c,uRam0038804c);
    param_1[0x1228] = 0x59;
  }
  if (*(uint *)(iVar6 + 0x387fe0) < uRam003880c0) {
    FUN_001490a0(param_1 + 0x14e0,iVar5,*piStack_90 << 5,uRam003880c4,uRam003880b4,uRam003880c8,
                 uRam003880cc,uRam003880bc);
    param_1[0x14dc] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0x14e0,iVar5,*piStack_90 << 5,uRam003880c4,uRam003880b4,uRam003880c8,
                 uRam003880cc,uRam003880bc);
    param_1[0x14dc] = 0x59;
  }
  if (*(uint *)(iVar6 + 0x387fe0) < uRam00388130) {
    FUN_001490a0(param_1 + 0x1794,iVar3,*piStack_a0 << 5,uRam00388134,uRam00388124,uRam00388138,
                 uRam0038813c,uRam0038812c);
    param_1[0x1790] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0x1794,iVar3,*piStack_a0 << 5,uRam00388134,uRam00388124,uRam00388138,
                 uRam0038813c,uRam0038812c);
    param_1[0x1790] = 0x59;
  }
  if (*(uint *)(iVar6 + 0x387fe0) < uRam003881a0) {
    FUN_001490a0(param_1 + 0x1a48,param_4,*(int *)(param_3 + 0x388184) << 5,uRam003881a4,
                 uRam00388194,uRam003881a8,uRam003881ac,uRam0038819c);
    param_1[0x1a44] = 0xac;
  }
  else {
    FUN_001497f0(param_1 + 0x1a48,param_4,*(int *)(param_3 + 0x388184) << 5,uRam003881a4,
                 uRam00388194,uRam003881a8,uRam003881ac,uRam0038819c);
    param_1[0x1a44] = 0x59;
  }
  FUN_00148bb0(param_1 + 0x1cf8,!bVar1,1,0,3,0xffffffff80808080,*(undefined4 *)(iVar6 + 0x387fdc),
               *(undefined4 *)(iVar6 + 0x387fe0));
  FUN_00148bb0(param_1 + 0x1dd0,!bVar1,1,0,3,0xffffffff80808080,*(undefined4 *)(iVar6 + 0x387fdc),
               *(undefined4 *)(iVar6 + 0x387fe0));
  FUN_00149a80(param_1 + 0x1ea8,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar6 + 0x387fe4),
               *(undefined4 *)(iVar6 + 0x387fd4),0,*(undefined4 *)(iVar7 + 0xc),
               *(undefined4 *)(iVar6 + 0x387fd8),bVar1);
  FUN_00148bb0(param_1 + 0x1ee4,!bVar1,1,0,3,0xffffffff80808080,*(undefined4 *)(iVar6 + 0x387fdc),
               *(undefined4 *)(iVar6 + 0x387fe0));
  FUN_00148bb0(param_1 + 0x1fbc,!bVar1,1,0,3,0xffffffff80808080,*(undefined4 *)(iVar6 + 0x387fdc),
               *(undefined4 *)(iVar6 + 0x387fe0));
  return;
}

// 0x00151440  size 0x140
void FUN_00151440(float param_1,float param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17)

{
  undefined4 uVar1;
  
  *param_3 = param_4;
  param_3[1] = param_5;
  param_3[2] = param_6;
  param_3[3] = param_7;
  param_3[4] = param_8;
  param_3[5] = param_9;
  param_3[6] = param_10;
  param_3[7] = param_11;
  param_3[8] = param_12;
  uVar1 = FUN_00140070(param_3[5],param_3[7]);
  param_3[9] = uVar1;
  uVar1 = FUN_00140020(param_3[7]);
  param_3[10] = uVar1;
  uVar1 = FUN_00140020(param_3[8]);
  param_3[0xb] = uVar1;
  uVar1 = 1;
  if ((param_3[5] != 10) && (param_3[5] != 2)) {
    uVar1 = 0;
  }
  param_3[0xc] = uVar1;
  *(undefined8 *)(param_3 + 0xe) = 0x617425317065342;
  *(undefined8 *)(param_3 + 0x10) = 0x7160352460712435;
  param_3[0x12] = param_13;
  param_3[0x13] = param_14;
  param_3[0x14] = param_14;
  param_3[0x15] = param_15;
  param_3[0x16] = param_16;
  param_3[0x17] = param_17;
  param_3[0x18] = param_1;
  param_3[0x19] = param_2;
  param_3[0x1a] = -(param_1 / 2.0);
  param_3[0x1b] = -(param_2 / 2.0);
  return;
}

// 0x00151580  size 0x3b8
void FUN_00151580(undefined4 *param_1,ulong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 & 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0xd] - param_1[0xb];
  }
  uVar1 = FUN_0013ff20(*param_1,param_1[10],param_1[0xb] + iVar2);
  iVar2 = FUN_0013ff20(param_1[1],param_1[10],param_1[0xb] + iVar2);
  iVar4 = (int)uVar1 * 2;
  iVar3 = 0x200 - (int)uVar1;
  uRam00387fa4 = 4;
  if ((param_2 & 2) == 0) {
    uRam00387fa4 = 0;
  }
  uRam00387fac = 1;
  uRam00387fb0 = 0;
  iRam00387fb4 = 1;
  if (param_3 != 0) {
    iRam00387fb4 = param_3;
  }
  iRam00387fb8 = (iVar4 + iVar2) * 0x20;
  iRam00387fbc = iVar3 * 0x20;
  FUN_00151440((float)(int)param_1[4] / (float)(int)param_1[2],
               (float)(int)param_1[5] / (float)(int)param_1[3],0x387fc0,4,0,uVar1,iVar4,iVar4,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[6] / (float)(int)param_1[2],
               (float)(int)param_1[7] / (float)(int)param_1[3],0x388030,0,0,uVar1,iVar4,iVar4,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[8] / (float)(int)param_1[2],
               (float)(int)param_1[9] / (float)(int)param_1[3],0x3880a0,4,0,uVar1,iVar4,iVar4,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[10] / (float)(int)param_1[2],
               (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388110,0,iVar3,iVar3,iVar4,iVar4,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[10] / (float)(int)param_1[2],
               (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388180,0,0,uVar1,iVar4,iVar4,
               *param_1,param_1[1]);
  return;
}

// 0x00151940  size 0x454
void FUN_00151940(int *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iStack_58;
  int iStack_54;
  
  if ((param_2 & 8) == 0) {
    iVar4 = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = param_1[0xd] - param_1[0xb];
    iVar5 = param_1[0xf] - param_1[3];
  }
  uVar2 = FUN_0013ff20(*param_1,param_1[10],param_1[0xb] + iVar4);
  iVar1 = FUN_0013ff20(*param_1,param_1[2],param_1[3] + iVar5);
  uVar3 = FUN_0013ff20(param_1[1],param_1[2],param_1[3] + iVar5);
  iStack_54 = iVar1 + (int)uVar3;
  iRam00387fb8 = (int)uVar2;
  iStack_58 = iStack_54 + iRam00387fb8;
  iVar5 = 0x200 - iRam00387fb8;
  iRam00387fb8 = iStack_58 + iRam00387fb8;
  iVar4 = iVar1;
  if ((((param_2 & 4) != 0) && (*param_1 == 0)) && (param_1[1] == 0x3a)) {
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    iStack_58 = iVar1 + (int)uVar2;
    iRam00387fb8 = iStack_58 + (int)uVar2;
    iStack_54 = iVar1;
    iVar4 = iStack_58;
  }
  uRam00387fac = 1;
  uRam00387fb0 = 1;
  uRam00387fa4 = 0;
  uRam00387fb4 = 1;
  if (param_3 < 2) {
    uRam00387fb4 = param_3;
  }
  iRam00387fbc = iVar5 * 0x20;
  iRam00387fb8 = iRam00387fb8 << 5;
  FUN_00151440((float)param_1[4] / (float)param_1[2],(float)param_1[5] / (float)param_1[3],0x387fc0,
               4,0,0,iVar1,iVar4,*param_1,param_1[1]);
  FUN_00151440((float)param_1[6] / (float)param_1[2],(float)param_1[7] / (float)param_1[3],0x388030,
               0,0,0,iVar1,iVar4,*param_1,param_1[1]);
  FUN_00151440((float)param_1[8] / (float)param_1[2],(float)param_1[9] / (float)param_1[3],0x3880a0,
               0x204,iStack_54,iStack_58,iVar1,iVar4,*param_1,param_1[1]);
  FUN_00151440((float)param_1[10] / (float)param_1[2],(float)param_1[0xb] / (float)param_1[3],
               0x388110,0,iVar5,iVar5,iVar1,iVar1,*param_1,param_1[1]);
  FUN_00151440((float)param_1[10] / (float)param_1[2],(float)param_1[0xb] / (float)param_1[3],
               0x388180,0,iStack_54,iStack_58,iVar1,iVar1,*param_1,param_1[1]);
  return;
}

// 0x00151da0  size 0x3ec
void FUN_00151da0(undefined4 *param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 & 8) == 0) {
    iVar2 = 0;
    iVar4 = 0;
  }
  else {
    iVar2 = param_1[0xd] - param_1[0xb];
    iVar4 = param_1[0xf] - param_1[3];
  }
  uVar1 = FUN_0013ff20(*param_1,param_1[10],param_1[0xb] + iVar2);
  iVar2 = FUN_0013ff20(*param_1,param_1[2],param_1[3] + iVar4);
  iVar4 = FUN_0013ff20(param_1[1],param_1[2],param_1[3] + iVar4);
  iVar2 = (int)uVar1 + iVar2;
  uRam00387fa4 = 0;
  iVar3 = 0x200 - (int)uVar1;
  uRam00387fac = 1;
  uRam00387fb0 = 1;
  uRam00387fb4 = 1;
  if (param_3 < 2) {
    uRam00387fb4 = param_3;
  }
  iRam00387fb8 = (iVar2 + iVar4) * 0x20;
  iRam00387fbc = iVar3 * 0x20;
  FUN_00151440((float)(int)param_1[4] / (float)(int)param_1[2],
               (float)(int)param_1[5] / (float)(int)param_1[3],0x387fc0,4,uVar1,uVar1,iVar2,iVar2,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[6] / (float)(int)param_1[2],
               (float)(int)param_1[7] / (float)(int)param_1[3],0x388030,0,uVar1,uVar1,iVar2,iVar2,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[8] / (float)(int)param_1[2],
               (float)(int)param_1[9] / (float)(int)param_1[3],0x3880a0,4,uVar1,uVar1,iVar2,iVar2,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[10] / (float)(int)param_1[2],
               (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388110,0,iVar3,iVar3,iVar2,iVar2,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[10] / (float)(int)param_1[2],
               (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388180,0x200,0,0,iVar2,iVar2,
               *param_1,param_1[1]);
  return;
}

// 0x00152190  size 0x3bc
void FUN_00152190(undefined4 *param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 & 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0xd] - param_1[0xb];
  }
  uVar1 = FUN_0013ff20(*param_1,param_1[10],param_1[0xb] + iVar2);
  iVar2 = FUN_0013ff20(param_1[1],param_1[10],param_1[0xb] + iVar2);
  iVar4 = (int)uVar1 * 2;
  uRam00387fa4 = 0;
  iVar3 = 0x200 - (int)uVar1;
  uRam00387fac = 1;
  uRam00387fb0 = 1;
  uRam00387fb4 = 1;
  if (param_3 < 2) {
    uRam00387fb4 = param_3;
  }
  iRam00387fb8 = (iVar4 + iVar2) * 0x20;
  iRam00387fbc = iVar3 * 0x20;
  FUN_00151440((float)(int)param_1[4] / (float)(int)param_1[2],
               (float)(int)param_1[5] / (float)(int)param_1[3],0x387fc0,4,0,uVar1,iVar4,iVar4,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[6] / (float)(int)param_1[2],
               (float)(int)param_1[7] / (float)(int)param_1[3],0x388030,0,0,uVar1,iVar4,iVar4,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[8] / (float)(int)param_1[2],
               (float)(int)param_1[9] / (float)(int)param_1[3],0x3880a0,4,0,uVar1,iVar4,iVar4,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[10] / (float)(int)param_1[2],
               (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388110,0,iVar3,iVar3,iVar4,iVar4,
               *param_1,param_1[1]);
  FUN_00151440((float)(int)param_1[10] / (float)(int)param_1[2],
               (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388180,0,0,uVar1,iVar4,iVar4,
               *param_1,param_1[1]);
  return;
}

// 0x00152550  size 0x108
void FUN_00152550(void)

{
  uRam0042d640 = 0x3e99999a;
  uRam0042d644 = 0x3e99999a;
  uRam0042d648 = 0x3e99999a;
  uRam0042d690 = 0;
  uRam0042d64c = 0x3f800000;
  uRam0042d694 = 0xc1a00000;
  uRam0042d698 = 0xc1200000;
  uRam0042d69c = 0;
  uRam0042d6a0 = 0xc1200000;
  uRam0042d6a4 = 0xc1a00000;
  uRam0042d6a8 = 0xc1200000;
  uRam0042d6b0 = 0;
  uRam0042d6ac = 0;
  uRam0042d6b4 = 0xc1a00000;
  uRam0042d6b8 = 0x41200000;
  uRam0042d6bc = 0;
  uRam0042d6c0 = 0x3f400000;
  uRam0042d6c4 = 0x3f400000;
  uRam0042d6c8 = 0x3f400000;
  uRam0042d6cc = 0;
  uRam0042d6d0 = 0;
  uRam0042d6d4 = 0;
  uRam0042d6d8 = 0;
  uRam0042d6dc = 0;
  uRam0042d6e0 = 0x3f400000;
  uRam0042d6e4 = 0x3f400000;
  uRam0042d6e8 = 0x3f400000;
  uRam0042d6ec = 0;
  FUN_0014d240(0x42d640);
  return;
}

// 0x00152660  size 0x3f0
void FUN_00152660(void)

{
  int iVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
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
  
  uStack_4c = uRam00388050;
  uStack_60 = uRam00388034;
  uStack_5c = uRam00388044;
  uStack_58 = uRam0038803c;
  iStack_54 = iRam00388048;
  uStack_50 = uRam0038804c;
  uStack_48 = uRam00388080;
  uStack_40 = 0x3f800000;
  fStack_44 = ((float)uRam0038804c * 1.9209821) / 2.0;
  if (iRam00387fa8 == 2) {
    fStack_3c = ((float)uRam00388050 / (float)uRam0038804c) / 0.75;
  }
  else {
    fStack_3c = ((((float)uRam00388050 / (float)uRam0038804c) / 0.75) * 625.0) / 525.0;
  }
  if (iRam00388048 == 0x30) {
    uStack_38 = 0x41a00000;
    uStack_34 = 0x4b742400;
  }
  else {
    uStack_38 = 0x3f800000;
    uStack_34 = 0x477de800;
  }
  uStack_24 = 1;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_14 = uRam00388090;
  uStack_20 = 0;
  uStack_10 = uRam00388094;
  uStack_1c = 0;
  uStack_c = uRam00388098;
  uStack_18 = 0;
  uStack_8 = uRam0038809c;
  FUN_00144960(0x42d0c0,&uStack_60);
  FUN_001448b0(0x42d0c0);
  uRam0042d160 = 0x3f000000;
  uRam0042d164 = 0x43fa0000;
  uRam0042d0cc = 0x3f800000;
  uRam0042d0dc = 0x3f800000;
  uRam0042d0c8 = 0x41500000;
  uRam0042d0e4 = 0x3f800000;
  uRam0042d0ec = 0x3f800000;
  uRam0042d0c4 = 0x3e4ccccd;
  uRam0042d0d4 = 0x3e4ccccd;
  iVar1 = iRam0036ef90 * 0x28c80 + (uRam0036ef94 & 1) * 0x51900 + 0x388200;
  uRam0042d0c0 = 0;
  uRam0042d0d0 = 0;
  uRam0042d0d8 = 0;
  uRam0042d0e0 = 0;
  uRam0042d0e8 = 0;
  uRam0042d0f0 = 0;
  uRam0042d120 = *(ushort *)(iVar1 + 0xfd40) & 0x1ff;
  uRam0042d560 = uRam0042d560 & 0xfe00 | (ushort)uRam0042d120;
  uRam0042d5a0 = uRam0042d5a0 & 0xfe00 | (ushort)uRam0042d120;
  uRam0042d128 = *(ushort *)(iVar1 + 0xfd50) & 0x1ff;
  uRam0042d570 = uRam0042d570 & 0xfe00 | (ushort)uRam0042d128;
  uRam0042d5b0 = uRam0042d5b0 & 0xfe00 | (ushort)uRam0042d128;
  FUN_001448b0(0x42d0c0);
  FUN_001445d0(0x42d0c0);
  return;
}

// 0x00152a50  size 0x70
void FUN_00152a50(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  FUN_001466b0(auStack_40,param_2,2,0);
  uStack_2c = param_1;
  FUN_001465c0(auStack_40,param_3);
  FUN_00145d70(auStack_40);
  FUN_00145c50(auStack_40);
  FUN_00145d70(auStack_40);
  FUN_00146570(auStack_40,0);
  return;
}

// 0x00152ac0  size 0x60
void FUN_00152ac0(int param_1,undefined4 *param_2)

{
  param_1 = param_1 * 0x70;
  *param_2 = *(undefined4 *)(param_1 + 0x388020);
  param_2[1] = *(undefined4 *)(param_1 + 0x388024);
  param_2[2] = *(undefined4 *)(param_1 + 0x388028);
  param_2[3] = *(undefined4 *)(param_1 + 0x38802c);
  return;
}

// 0x00152b20  size 0xc0
void FUN_00152b20(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x8280 + iGpffff88a0 * 0x28c80 + (uGpffff88a4 & 1) * 0x51900 + 0x388200;
  *param_2 = (uint)*(ushort *)(iVar1 + 0x50);
  param_2[1] = (uint)*(ushort *)(iVar1 + 0x54);
  param_2[2] = (((*(ushort *)(iVar1 + 0x62) & 0x7ff) - (*(ushort *)(iVar1 + 0x60) & 0x7ff)) + 1) *
               0x10;
  param_2[3] = (((*(ushort *)(iVar1 + 0x66) & 0x7ff) - (*(ushort *)(iVar1 + 100) & 0x7ff)) + 1) *
               0x10;
  return;
}

// 0x00152bf0  size 0x528
void FUN_00152bf0(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  uint auStack_40 [5];
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_8;
  
  uVar6 = iGpffff88a4 + 1U & 1;
  uVar1 = iGpffff88a0 + 1U & 1;
  if ((uRam00387fa4 & 1) == 0) {
    uRam00387fa4 = uRam00387fa4 & 0xfffffffd;
  }
  else {
    FUN_00153350(0x42d7b0,1);
    uRam00387fa4 = uRam00387fa4 & 0xfffffffe | 2;
  }
  uVar10 = 0;
  puVar7 = (uint *)0x42b400;
  iVar9 = uVar1 * 0x28c80 + uVar6 * 0x51900 + 0x388200;
  do {
    uVar8 = 0;
    puVar5 = puVar7;
    do {
      FUN_001505c0(iVar9,uVar8,(*puVar7 & 1 << (uVar8 & 0x1f)) != 0,puVar5 + 2);
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 0x12;
    } while (uVar8 < 0xb);
    uVar10 = uVar10 + 1;
    iVar9 = iVar9 + 0x8280;
    puVar7 = puVar7 + 200;
  } while (uVar10 < 5);
  uVar10 = 0;
  puVar7 = auStack_40;
  uRam00387fa2 = uRam00387fa1;
  iVar4 = uVar6 * 0x690;
  iVar9 = iVar4 + 0x42c3a0;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    uVar11 = 0;
    puVar7[2] = 0;
    uVar8 = FUN_00144e50(uVar10 & 0xff,puVar7 + 1);
    *puVar7 = uVar8;
    if ((((uVar10 == 3) && ((uRam00387fa4 & 0x10) != 0)) ||
        ((uVar10 == 4 && ((uRam00387fa4 & 0x20) != 0)))) && (puStack_28 != (undefined4 *)0x0)) {
      uVar8 = *puVar7;
      if (uVar8 != 0) {
        *puStack_28 = 0x20000000;
        puStack_28[1] = uVar8 & 0xfffffff;
        puStack_28[2] = 0;
        puStack_28[3] = 0;
        uStack_24 = puVar7[1];
      }
      *puVar7 = (uint)puStack_28;
      puVar7[1] = uStack_24;
    }
    if ((uVar10 == 2) && (*(int *)(uVar6 * 4 + 0x387fc4) == *(int *)(uVar6 * 4 + 0x3880a4))) {
      uVar11 = 1;
    }
    if ((uVar10 != 2) || ((uRam00387fa4 & 0x30) == 0)) {
      uVar8 = FUN_0014f450(iVar9,uVar10,uVar6,uVar1,*puVar7,puVar7[1],uVar11);
      puVar7[2] = uVar8;
    }
    if (uVar10 == 1) {
      iVar3 = *(int *)(iVar4 + 0x42c3a4);
      uVar8 = iVar4 + 0x42c3b0;
      if ((iVar3 == 0) || (*(int *)(iVar4 + 0x42c4f4) == 0)) {
        if (iVar3 == 0) {
          if (*(int *)(iVar4 + 0x42c4f4) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = iVar4 + 0x42c500U;
          }
        }
      }
      else {
        iVar3 = iVar4 + 0x42c3a0 + iVar3 * 0x10;
        *(undefined4 *)(iVar3 + 0x10) = 0x20000000;
        *(uint *)(iVar3 + 0x14) = iVar4 + 0x42c500U;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
      }
      puVar7[2] = uVar8;
    }
    if (uVar10 == 4) {
      iVar3 = *(int *)(iVar4 + 0x42c794);
      uVar8 = iVar4 + 0x42c7a0;
      if ((iVar3 == 0) || (*(int *)(iVar4 + 0x42c8e4) == 0)) {
        if (iVar3 == 0) {
          if (*(int *)(iVar4 + 0x42c8e4) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = iVar4 + 0x42c8f0U;
          }
        }
      }
      else {
        iVar3 = iVar4 + 0x42c790 + iVar3 * 0x10;
        *(undefined4 *)(iVar3 + 0x10) = 0x20000000;
        *(uint *)(iVar3 + 0x14) = iVar4 + 0x42c8f0U;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
      }
      puVar7[2] = uVar8;
    }
    uVar10 = uVar10 + 1;
    puVar7 = puVar7 + 3;
    iVar9 = iVar9 + 0x150;
  } while (uVar10 < 5);
  FlushCache(0);
  FUN_00134ab0(0,0);
  FUN_00134a20(uStack_2c,uStack_20);
  uGpffff889c = uStack_8;
  uVar6 = 0;
  do {
    piVar2 = (int *)((uVar6 & 0xff) * 0x10 + 0x387f50);
    *piVar2 = *piVar2 + 1;
    FUN_00144fd0();
    uVar6 = uVar6 + 1;
  } while (uVar6 < 5);
  iGpffff89dc = iGpffff89dc + 1;
  FlushCache(0);
  return;
}

// 0x00153130  size 0x128
void FUN_00153130(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  if (param_1 == '\x03') {
    uStack_3c = 1;
    uStack_34 = 1;
    uStack_30 = 1;
    uStack_2c = 1;
    uStack_28 = 0;
    iStack_38 = iRam00388114;
    uStack_20 = 0;
    uStack_40 = param_5;
    uStack_24 = param_2;
  }
  else if (param_1 == '\x02') {
    iStack_38 = iRam00388114;
    iStack_1c = iRam00388114 << 5;
    uStack_3c = 1;
    uStack_34 = 1;
    uStack_30 = 1;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_c = (uint)(cRam00387fa0 != '\x01');
    uStack_20 = 1;
    uStack_18 = 1;
    uStack_40 = param_5;
    uStack_24 = param_2;
    uStack_14 = param_3;
    uStack_10 = param_4;
  }
  else if (param_1 == '\x01') {
    uStack_40 = 1;
    uStack_3c = 0;
    uStack_34 = 1;
    uStack_30 = 1;
    uStack_28 = 1;
    uStack_2c = 0;
    uStack_20 = 0;
    iStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_24 = param_2;
  }
  else if (param_1 == '\0') {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_34 = 0;
    uStack_20 = 0;
  }
  cRam00387fa1 = param_1;
  FUN_00134cf0(&uStack_40);
  return;
}

// 0x00153260  size 0xc8
void FUN_00153260(int param_1,uint param_2,long param_3,long param_4)

{
  uint *puVar1;
  
  if (param_1 == 5) {
    uRam0042b400 = 0;
    uRam0042b720 = 0;
    uRam0042ba40 = 0;
    uRam0042bd60 = 0;
    uRam0042c080 = 0;
  }
  else {
    puVar1 = (uint *)(param_1 * 800 + 0x42b400);
    if (param_3 == 0) {
      *puVar1 = *puVar1 & ~(1 << (param_2 & 0x1f));
    }
    else {
      *puVar1 = *puVar1 | 1 << (param_2 & 0x1f);
      if (param_4 != 0) {
        FUN_00132500(puVar1 + param_2 * 0x12 + 2,param_4,0x12);
      }
    }
  }
  return;
}

// 0x00153330  size 0x10
void FUN_00153330(undefined8 param_1)

{
  FUN_001321c0(0x42d7e0,param_1);
  return;
}

// 0x00153340  size 0x10
void FUN_00153340(undefined8 param_1)

{
  FUN_00132250(0x42d7e0,param_1);
  return;
}

// 0x00153350  size 0x594
void FUN_00153350(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  uint uStack_bc;
  undefined4 auStack_90 [4];
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 auStack_60 [4];
  undefined4 auStack_50 [4];
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
  
  if (param_2 == 0) {
    maybe_Mem_CopyQwords(0x42d7b0,param_1,0x14);
    uRam00387fa4 = uRam00387fa4 | 1;
  }
  else {
    pcVar9 = (char *)param_1;
    auStack_50[1] = DAT_0030ac14;
    auStack_50[0] = DAT_0030ac10;
    auStack_50[3] = DAT_0030ac1c;
    auStack_50[2] = DAT_0030ac18;
    auStack_60[1] = DAT_0030ac24;
    uStack_40 = auStack_50[(byte)pcVar9[2]];
    auStack_60[0] = DAT_0030ac20;
    auStack_60[3] = DAT_0030ac2c;
    auStack_60[2] = DAT_0030ac28;
    auStack_80[0] = DAT_0030ac30;
    uStack_3c = auStack_60[(byte)pcVar9[3]];
    auStack_80[1] = DAT_0030ac34;
    auStack_80[3] = DAT_0030ac3c;
    auStack_80[2] = DAT_0030ac38;
    auStack_90[1] = DAT_0030ac54;
    uStack_70 = DAT_0030ac40;
    uStack_38 = auStack_80[(byte)pcVar9[4]];
    auStack_90[0] = DAT_0030ac50;
    auStack_90[2] = DAT_0030ac58;
    auStack_90[3] = DAT_0030ac5c;
    uStack_34 = auStack_90[(byte)pcVar9[5]];
    uStack_30 = auStack_80[(byte)pcVar9[6]];
    uStack_28 = auStack_80[(byte)pcVar9[6]];
    uStack_2c = auStack_90[(byte)pcVar9[7]];
    uStack_24 = auStack_90[(byte)pcVar9[7]];
    uStack_20 = auStack_80[(byte)pcVar9[8]];
    uStack_1c = auStack_90[(byte)pcVar9[9]];
    uStack_18 = auStack_80[(byte)pcVar9[10]];
    uStack_14 = auStack_90[(byte)pcVar9[0xb]];
    uStack_10 = auStack_80[(byte)pcVar9[10]];
    uStack_c = auStack_90[(byte)pcVar9[0xb] | 1];
    uStack_8 = auStack_80[(byte)pcVar9[4]];
    uStack_4 = auStack_90[(byte)pcVar9[5] | 1];
    cRam00387fa0 = pcVar9[1];
    uRam00387fa1 = 0;
    iRam00387fa8 = 2;
    if (*pcVar9 != '\0') {
      iRam00387fa8 = 3;
    }
    uRam00387fa4 = 0;
    cVar1 = pcVar9[1];
    if (cVar1 == '\x04') {
      iVar10 = *(int *)(pcVar9 + 0x10);
      FUN_00152190(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),iVar10);
      uRam00387fa4 = 0;
      uRam00387fac = 0;
      uRam00387fb0 = 1;
      iRam00387fb4 = 1;
      if (iVar10 != 0) {
        iRam00387fb4 = iVar10;
      }
    }
    else if (cVar1 == '\x03') {
      FUN_00151580(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),*(undefined4 *)(pcVar9 + 0x10));
    }
    else if (cVar1 == '\x02') {
      FUN_00151940(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),*(undefined4 *)(pcVar9 + 0x10));
    }
    else if (cVar1 == '\x01') {
      FUN_00151da0(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),*(undefined4 *)(pcVar9 + 0x10));
    }
    else if (cVar1 == '\0') {
      FUN_00152190(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),*(undefined4 *)(pcVar9 + 0x10));
    }
    uVar8 = 0;
    iVar10 = 0x388200;
    do {
      uVar7 = 0;
      iVar6 = 0;
      do {
        iVar5 = iVar10 + iVar6;
        FUN_00150930(iVar5,0,uVar8,uVar7);
        FUN_00150930(iVar5 + 0x8280,1,uVar8,uVar7);
        FUN_00150930(iVar5 + 0x10500,2,uVar8,uVar7);
        FUN_00150930(iVar5 + 0x18780,3,uVar8,uVar7);
        FUN_00150930(iVar5 + 0x20a00,4,uVar8,uVar7);
        iVar3 = iRam003881a0;
        iVar2 = iRam0038819c;
        iVar5 = iRam00387fa8;
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x28c80;
      } while (uVar7 < 2);
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + 0x51900;
    } while (uVar8 < 2);
    iVar10 = 0x388180;
    uVar8 = 0;
    piVar4 = &iStack_d0;
    iStack_d0 = iRam00387fa8;
    uStack_c4 = uRam00388194;
    uStack_cc = uRam00387fac;
    uStack_c8 = uRam00387fb0;
    iStack_c0 = iRam00387fb4;
    uStack_bc = (uint)((uRam00387fa4 & 4) != 0);
    do {
      piVar4[6] = *(int *)(iVar10 + 4);
      piVar4[7] = 0;
      if (iVar5 == 3) {
        piVar4[8] = 0x20;
      }
      else {
        piVar4[8] = 0;
      }
      piVar4[9] = iVar2;
      uVar8 = uVar8 + 1;
      piVar4[10] = iVar3;
      iVar10 = iVar10 + 4;
      piVar4 = piVar4 + 5;
    } while (uVar8 < 2);
    FUN_00135420((*(uint *)(pcVar9 + 0xc) & 1) == 0,&iStack_d0);
    FUN_00152660();
    FUN_00152550();
    uGpffff89dc = 0;
    FUN_00153260(5,0,0,0);
    FUN_00153130(0,0,0,0,0);
    uRam00387fa2 = 0;
    for (iVar10 = iRam0042d7ec; iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
      (**(code **)(iVar10 + 8))(*(undefined4 *)(iVar10 + 0xc));
    }
  }
  return;
}

// 0x001538f0  size 0x2c
void FUN_001538f0(void)

{
  FUN_00145370();
  FUN_00158460();
  FUN_00135660();
  return;
}

// 0x00153920  size 0x38
undefined4 FUN_00153920(undefined8 param_1)

{
  FUN_00145500();
  FUN_00158490(param_1);
  FUN_001356a0();
  return 1;
}

// 0x00153960  size 0x60
long FUN_00153960(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e178;
    FUN_00132320(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001539c0  size 0x8c
bool FUN_001539c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x304;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar2 + 0x42db10) = param_4;
  }
  return bVar1;
}

// 0x00153a90  size 0x64
void FUN_00153a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  DisableIntc(1);
  FUN_0013ceb0(*(undefined4 *)(param_4 + 4),param_3);
  if (*param_4 == '\x01') {
    *param_4 = '\x04';
  }
  EnableIntc(1);
  return;
}

// 0x00153b00  size 0x140
void FUN_00153b00(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1 = param_1 * 0x28;
  uVar3 = *(int *)(param_1 + 0x42dab8) - *(int *)(param_1 + 0x42dabc);
  if (*(char *)(param_1 + 0x42daa8) == '\x03') {
    *(undefined1 *)(param_1 + 0x42daa8) = 1;
  }
  FUN_00138bf0((int)register0x000001c0 + -0x7730);
  iVar1 = iRam00386628;
  FUN_00138ba0((int)register0x000001c0 + -0x7730,0);
  if (param_3 <= 0x100U - iVar1) {
    for (uVar5 = 0; (uVar3 != 0 && (uVar5 < param_3)); uVar5 = uVar5 + 1) {
      uVar4 = param_2[1];
      if (uVar3 < (uint)param_2[1]) {
        uVar4 = uVar3;
      }
      uVar2 = FUN_0014bf00(0x1fd1,*param_2,0x153a90,(undefined1 *)(param_1 + 0x42daa8),
                           *(undefined4 *)(param_1 + 0x42dab4),uVar4);
      *(undefined4 *)(param_1 + 0x42dacc) = uVar2;
      uVar3 = uVar3 - uVar4;
      param_2 = param_2 + 2;
      *(uint *)(param_1 + 0x42dab4) = *(int *)(param_1 + 0x42dab4) + uVar4;
      *(uint *)(param_1 + 0x42dabc) = *(int *)(param_1 + 0x42dabc) + uVar4;
    }
  }
  return;
}

// 0x00153c50  size 0x1d4
void FUN_00153c50(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int aiStack_10 [4];
  
  iVar11 = param_1 * 0x28;
  iVar8 = param_1 * 0x1c;
  iVar1 = *(int *)(iVar8 + 0x42da70);
  uVar5 = iVar1 * *(int *)(iVar8 + 0x42da74);
  iVar2 = *(int *)(iVar8 + 0x42da7c);
  iVar13 = 0;
  uVar12 = 0;
  if (param_3 != 0) {
    if (8 < param_3) {
      do {
        uVar12 = uVar12 + 8;
        *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *(int *)(param_2 + 4);
        *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *(int *)(param_2 + 0xc);
        *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *(int *)(param_2 + 0x14);
        *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *(int *)(param_2 + 0x1c);
        *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *(int *)(param_2 + 0x24);
        *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *(int *)(param_2 + 0x2c);
        *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *(int *)(param_2 + 0x34);
        piVar9 = (int *)(param_2 + 0x3c);
        param_2 = param_2 + 0x40;
        *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *piVar9;
      } while (uVar12 < param_3 - 8);
    }
    for (; uVar12 < param_3; uVar12 = uVar12 + 1) {
      piVar9 = (int *)(param_2 + 4);
      param_2 = param_2 + 8;
      *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) + *piVar9;
    }
  }
  uVar12 = *(uint *)(iVar11 + 0x42dac4);
  if (uVar5 < uVar12) {
    piVar9 = aiStack_10;
    do {
      iVar3 = *(int *)(iVar8 + 0x42da70);
      iVar6 = *(int *)(iVar11 + 0x42dac8) * iVar3;
      uVar10 = iVar1 * iVar2 - iVar6;
      if (uVar12 <= uVar10) {
        uVar10 = uVar12;
      }
      iVar7 = ((int)uVar10 / iVar3) * iVar3;
      iVar4 = *(int *)(iVar8 + 0x42da78);
      *(int *)(iVar11 + 0x42dac4) = *(int *)(iVar11 + 0x42dac4) - iVar7;
      *piVar9 = iVar4 + iVar6;
      iVar6 = *(int *)(iVar11 + 0x42dac8);
      iVar4 = *(int *)(iVar8 + 0x42da7c);
      piVar9[1] = iVar7;
      piVar9 = piVar9 + 2;
      *(int *)(iVar11 + 0x42dac8) = (iVar6 + (int)uVar10 / iVar3) % iVar4;
      uVar12 = *(uint *)(iVar11 + 0x42dac4);
      iVar13 = iVar13 + 1;
    } while (uVar5 < uVar12);
  }
  if (iVar13 != 0) {
    FUN_00153b00(param_1,aiStack_10,iVar13);
  }
  return;
}

// 0x00153e50  size 0x174
void FUN_00153e50(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar6 = 0;
  uVar5 = 0;
  iVar3 = (int)param_1 * 0x28;
  uVar1 = *(uint *)(iVar3 + 0x42dab0);
  iVar2 = iRam0042daf8 + uVar1 * 0x50;
  if (uVar1 != 0) {
    if (8 < uVar1) {
      iVar4 = iRam0042daf8;
      do {
        uVar5 = uVar5 + 8;
        iVar6 = iVar6 + *(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 0x6c) + *(int *)(iVar4 + 0xbc) +
                *(int *)(iVar4 + 0x10c) + *(int *)(iVar4 + 0x15c) + *(int *)(iVar4 + 0x1ac) +
                *(int *)(iVar4 + 0x1fc) + *(int *)(iVar4 + 0x24c);
        iVar4 = iVar4 + 0x280;
      } while (uVar5 < uVar1 - 8);
    }
    if (uVar5 < uVar1) {
      iVar4 = iRam0042daf8 + uVar5 * 0x50;
      do {
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + *(int *)(iVar4 + 0x1c);
        iVar4 = iVar4 + 0x50;
      } while (uVar5 < uVar1);
    }
  }
  uStack_10 = *(undefined4 *)(iVar2 + 0x10);
  uStack_c = *(undefined4 *)(iVar2 + 0x14);
  uStack_8 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined1 *)(iVar3 + 0x42daa8) = 1;
  *(int *)(iVar3 + 0x42dab4) = iVar6;
  *(undefined4 *)(iVar3 + 0x42dab8) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar3 + 0x42dabc) = 0;
  *(undefined4 *)(iVar3 + 0x42dac4) = 0;
  *(undefined4 *)(iVar3 + 0x42dac8) = 0;
  DisableIntc();
  puRam0042d854 = &LAB_00153e30;
  puRam0042d858 = (undefined1 *)(iVar3 + 0x42daa8);
  FUN_0013cf10(param_1,&uStack_10);
  EnableIntc(1);
  return;
}

// 0x00153fd0  size 0x274
void FUN_00153fd0(void)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uStack_8;
  int iStack_4;
  
  uVar6 = 0;
  iVar5 = 0x42d810;
  iVar4 = iVar5;
  do {
    pcVar7 = (char *)(iVar5 + 0x298);
    lVar2 = FUN_0013bd10(0x42d824);
    if (lVar2 == 0) {
      return;
    }
    switch(*pcVar7) {
    case '\x02':
      FUN_00153e50(*(undefined4 *)(iVar5 + 0x29c));
      break;
    case '\x03':
      uStack_8 = *(undefined4 *)(iVar4 + 0x268);
      iStack_4 = *(int *)(iVar4 + 0x260) * *(int *)(iVar4 + 0x26c);
      FUN_00153c50(*(undefined4 *)(iVar5 + 0x29c),&uStack_8,1);
      break;
    case '\x04':
      iVar3 = *(int *)(iVar5 + 0x29c) * 0x28;
      FUN_0013ce30(*(undefined4 *)(iVar3 + 0x42daac));
      *(undefined1 *)(iVar3 + 0x42daa8) = 5;
      break;
    case '\x06':
      iVar3 = *(int *)(iVar5 + 0x29c) * 0x28;
      DisableIntc(1);
      puRam0042d854 = &LAB_00153a50;
      puRam0042d858 = (undefined1 *)(iVar3 + 0x42daa8);
      FUN_0013cd10(*(undefined4 *)(iVar3 + 0x42daac),*(undefined4 *)(iVar3 + 0x42dac0));
      *(undefined1 *)(iVar3 + 0x42daa8) = 7;
      EnableIntc(1);
      break;
    case '\b':
      if (*(int *)(iVar5 + 0x2b0) == 1) {
        FUN_0013cc80(*(undefined4 *)(iVar5 + 0x29c));
        *pcVar7 = '\t';
      }
      break;
    case '\t':
    case '\n':
      if ((*pcVar7 == '\t') && (*(int *)(iVar5 + 0x2b0) == 0)) {
        *pcVar7 = '\n';
      }
      else {
        cVar1 = FUN_0013cd70(*(undefined4 *)(iVar5 + 0x29c));
        if (cVar1 == '\0') {
          lVar2 = FUN_00136920(*(undefined4 *)(iVar5 + 700));
          if (lVar2 != 0) {
            *pcVar7 = '\0';
          }
        }
        else if (*pcVar7 == '\n') {
          FUN_0013cb20(*(undefined4 *)(iVar5 + 0x29c));
        }
      }
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 0x28;
    iVar4 = iVar4 + 0x1c;
  } while (uVar6 < 2);
  uVar6 = 0;
  iVar4 = 0x42d810;
  do {
    DisableIntc(1);
    if ((*(char *)(iVar4 + 0x298) == '\x05') &&
       (lVar2 = FUN_0013cdc0(*(undefined4 *)(iVar4 + 0x29c)), lVar2 != 0)) {
      *(char *)(iVar4 + 0x298) = '\x06';
    }
    EnableIntc(1);
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 0x28;
  } while (uVar6 < 2);
  return;
}

