// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001a4000 - 0x001a8000
#include "ghidra_types.h"

// 0x001a4760  size 0x3ec
void FUN_001a4760(void)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iStack_30;
  int iStack_20;
  uint uStack_10;
  
  uVar9 = 0;
  puVar7 = &DAT_00317500;
  do {
    iVar5 = ((uint)(byte)puVar7[2] * 0x18 - (uint)(byte)puVar7[2]) * 0x40;
    if (*(int *)(iVar5 + 0x431684) != 0) {
      FUN_00184b20(iVar5 + 0x431100,*puVar7,puVar7[1]);
    }
    uVar9 = uVar9 + 1;
    puVar7 = puVar7 + 3;
  } while (uVar9 < 6);
  uVar9 = 0;
  uStack_10 = 0;
  if (uRam004305c4 != 0) {
    iStack_20 = 0;
    iStack_30 = 0;
    do {
      puVar3 = (undefined4 *)(iRam00430640 + iStack_20);
      puVar4 = (uint *)(iRam004305c8 + iStack_30);
      bVar1 = false;
      if (((*puVar4 & 2) == 0) && ((*puVar4 & 4) != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        uVar12 = 0;
        *puVar3 = puVar4;
        *(undefined4 *)puVar3[1] = 0;
        uVar13 = 0;
        if (uRam004305cc != 0) {
          iVar14 = 0;
          iVar5 = 0;
          do {
            puVar8 = (uint *)(iRam004305d0 + iVar14);
            uVar11 = *puVar8;
            bVar1 = false;
            if (((uVar11 & 2) == 0) && ((uVar11 & 4) != 0)) {
              bVar1 = true;
            }
            if (((bVar1) && ((short)puVar4[2] == (short)puVar8[2])) && ((uVar11 & 0x10) != 0)) {
              puVar8[0x10] = 0;
              uVar11 = 0;
              puVar7 = &DAT_00317500;
              do {
                iVar6 = ((uint)(byte)puVar7[2] * 0x18 - (uint)(byte)puVar7[2]) * 0x40;
                iVar10 = iVar6 + 0x431100;
                if (*(int *)(iVar6 + 0x431684) != 0) {
                  if (iRam0036f1f8 == 1) {
                    lVar2 = FUN_00142ff0(iVar10,iVar6 + 0x4313c0,puVar8 + 8);
                    if (lVar2 != 0) {
                      iVar6 = FUN_00134630(*(undefined4 *)(iRam004305bc + 0xc),
                                           (uint)(ushort)puVar8[2] * 2 + 0xb,0);
                      lVar2 = FUN_0019e0a0(iVar10,iVar6 + (*(ushort *)((int)puVar8 + 10) + 1) * 0x50
                                                  + 0x10);
                      if (lVar2 != 0) {
                        puVar8[0x10] = puVar8[0x10] | 1 << ((byte)puVar7[2] & 0x1f);
                      }
                    }
                  }
                  else {
                    lVar2 = FUN_00142ff0(iVar10,iVar6 + 0x4313c0,puVar8 + 8);
                    if (lVar2 != 0) {
                      puVar8[0x10] = puVar8[0x10] | 1 << ((byte)puVar7[2] & 0x1f);
                    }
                  }
                }
                uVar11 = uVar11 + 1;
                puVar7 = puVar7 + 3;
              } while (uVar11 < 6);
              if (puVar8[0x10] != 0) {
                uVar12 = uVar12 + 1;
                *(uint **)(puVar3[1] + iVar5) = puVar8;
                iVar5 = iVar5 + 4;
              }
            }
            uVar13 = uVar13 + 1;
            iVar14 = iVar14 + 0x50;
          } while (uVar13 < uRam004305cc);
        }
        if (uVar12 != 0) {
          if (uVar12 < uRam004305cc) {
            iVar5 = uVar12 << 2;
            do {
              uVar12 = uVar12 + 1;
              *(undefined4 *)(puVar3[1] + iVar5) = 0;
              iVar5 = iVar5 + 4;
            } while (uVar12 < uRam004305cc);
          }
          uVar9 = uVar9 + 1;
          iStack_20 = iStack_20 + 8;
        }
      }
      iStack_30 = iStack_30 + 0x74;
      uStack_10 = uStack_10 + 1;
    } while (uStack_10 < uRam004305c4);
  }
  if (uVar9 < uRam004305c4) {
    iVar5 = uVar9 << 3;
    do {
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iRam00430640 + iVar5) = 0;
      iVar5 = iVar5 + 8;
    } while (uVar9 < uRam004305c4);
  }
  return;
}

// 0x001a4b60  size 0xc8
void FUN_001a4b60(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = iRam00430640;
  if (uRam004305c4 != 0) {
    do {
      if (*(int *)(iVar2 + 4) != 0) {
        FUN_00100290();
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 8;
    } while (uVar1 < uRam004305c4);
  }
  if (iRam00430640 != 0) {
    FUN_00100290();
    iRam00430640 = 0;
  }
  if (iRam00430660 != 0) {
    FUN_00100290();
    iRam00430660 = 0;
  }
  FUN_00135030(0x430644);
  FUN_001a0860();
  return;
}

// 0x001a4c30  size 0x290
undefined8
FUN_001a4c30(undefined8 param_1,int param_2,undefined8 param_3,char *param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar5 = FUN_001a0bd0();
  iRam00430640 = FUN_00100680(uRam004305c4 << 3,param_1);
  uVar9 = 0;
  iVar10 = iRam00430640;
  if (uRam004305c4 != 0) {
    do {
      uVar3 = FUN_00100680(iRam004305cc << 2,param_1);
      *(undefined4 *)(iVar10 + 4) = uVar3;
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 8;
    } while (uVar9 < uRam004305c4);
  }
  pcRam0043064c = FUN_001a23c0;
  uRam00430650 = 0x430640;
  FUN_00135040(0x430644);
  uRam00430654 = 0;
  uRam00430658 = 0;
  uRam0043065c = 0;
  uVar6 = FUN_00100480(0x200,0x80,param_1);
  uRam00430660 = (undefined4)uVar6;
  FUN_001325d0(uVar6,0,0x200);
  uRam00430668 = 1;
  uRam0043067c = 0;
  uRam004306c0 = 0;
  uRam004306c1 = 1;
  uRam004306c2 = 2;
  if (*param_4 == '\0') {
    uVar9 = 0;
    uVar8 = 8;
  }
  else {
    uVar9 = 8;
    uVar8 = 0x1a;
  }
  uRam00430674 = param_7;
  uRam00430678 = param_8;
  if (uVar9 < uVar8) {
    pbVar7 = &DAT_00317490 + uVar9 * 4;
    do {
      bVar1 = pbVar7[1];
      iVar10 = param_2 + (uint)pbVar7[3] * 0x14;
      iVar4 = *(int *)(iGpffff8b0c + (uint)*pbVar7 * 4 + 0x14) + (uint)pbVar7[2] * 0x60;
      if (bVar1 < 0xe) {
        *(undefined4 *)(((uint)bVar1 * 0x18 - (uint)bVar1) * 0x40 + 0x4311c0) =
             *(undefined4 *)(iVar10 + 0x30);
      }
      uVar9 = uVar9 + 1;
      pbVar7 = pbVar7 + 4;
      *(undefined4 *)(iVar4 + 0xa8) = *(undefined4 *)(iVar10 + 0x2c);
      uVar2 = *(uint *)(iVar10 + 0x34);
      *(uint *)(iVar4 + 0xb4) = (uVar2 & 0xff0000) >> 0x10 | (uVar2 & 0xff) << 0x10 | uVar2 & 0xff00
      ;
      *(undefined4 *)(iVar4 + 0xac) = *(undefined4 *)(iVar10 + 0x38);
      *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar10 + 0x3c);
    } while ((int)uVar9 < (int)uVar8);
  }
  return uVar5;
}

// 0x001a4ed0  size 0x78
long FUN_001a4ed0(long param_1,short param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (int)param_1 + 4;
    if (iVar1 != 0) {
      *(undefined **)((int)param_1 + 4) = &DAT_0036e128;
      FUN_00132400(iVar1,0);
    }
    if (0 < param_2) {
      thunk_FUN_00100290(param_1);
    }
  }
  return param_1;
}

// 0x001a4f50  size 0x90
void FUN_001a4f50(uint *param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((*param_1 & 1) != 0) {
    if ((*param_1 & 2) != 0) {
      bVar1 = true;
      goto LAB_001a4f84;
    }
    lVar2 = FUN_00136920(param_1[1]);
    if (lVar2 != 0) {
      bVar1 = true;
      *param_1 = *param_1 | 2;
      goto LAB_001a4f84;
    }
  }
  bVar1 = false;
LAB_001a4f84:
  if (bVar1) {
    *param_1 = *param_1 | param_2 & 0xc;
  }
  return;
}

// 0x001a4fe0  size 0x68
undefined4 FUN_001a4fe0(uint *param_1)

{
  long lVar1;
  
  if ((*param_1 & 1) != 0) {
    if ((*param_1 & 2) != 0) {
      return 1;
    }
    lVar1 = FUN_00136920(param_1[1]);
    if (lVar1 != 0) {
      *param_1 = *param_1 | 2;
      return 1;
    }
  }
  return 0;
}

// 0x001a5050  size 0xc
int FUN_001a5050(int param_1)

{
  return param_1 + *(int *)(param_1 + 8);
}

// 0x001a5060  size 0xc
void FUN_001a5060(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[2] = param_2;
  return;
}

// 0x001a5070  size 0x54
int * FUN_001a5070(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  while( true ) {
    if (piVar1 == (int *)param_1[1]) {
      return (int *)0x0;
    }
    if ((param_2 == *piVar1) && (piVar1[4] + piVar1[5] == 0)) break;
    piVar1 = (int *)((int)piVar1 + piVar1[1]);
  }
  return piVar1;
}

// 0x001a50d0  size 0x5c
int * FUN_001a50d0(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  if (param_4 == (int *)0x0) {
    param_4 = (int *)*param_1;
  }
  while( true ) {
    if (param_4 == (int *)param_1[1]) {
      return (int *)0x0;
    }
    if (((param_2 == *param_4) && (param_3 == param_4[3])) && (param_4[9] == 0)) break;
    param_4 = (int *)((int)param_4 + param_4[1]);
  }
  return param_4;
}

// 0x001a5130  size 0x8
void FUN_001a5130(void)

{
  return;
}

// 0x001a5140  size 0xc
void FUN_001a5140(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 0x001a5150  size 0x2e8
void FUN_001a5150(int param_1,uint *param_2,long param_3,long param_4,long param_5,uint param_6,
                 int param_7,undefined4 *param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_00144b80(param_2 + 2,0,0);
    param_2[6] = 0;
    return;
  }
  FUN_0013da70(param_3);
  uVar7 = 0;
  iVar8 = (int)param_3;
  if (param_7 == 0) {
    uVar5 = (uint)*(ushort *)(iVar8 + 6);
    uVar7 = (uint)*(ushort *)(iVar8 + 6);
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    if (*(short *)(iVar8 + 6) != 0) {
      do {
        uVar7 = uVar2;
        iVar3 = FUN_0013d9e0(param_3,uVar6);
        if (*(ushort *)(iVar3 + 0x2e) >> 6 != 0) {
          uVar7 = uVar7 + 1;
        }
        uVar5 = (uint)*(ushort *)(iVar8 + 6);
        uVar6 = uVar6 + 1;
        uVar2 = uVar7;
      } while (uVar6 < uVar5);
    }
  }
  *param_2 = uVar5;
  param_2[1] = param_6;
  iVar8 = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = iVar8 + *param_2 * 0x80;
  param_2[6] = *(int *)(param_1 + 0x20) + iVar8;
  if (param_5 == 0) {
    FUN_00144b80(param_2 + 2,0,0);
    uVar7 = *param_2;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = iVar8 + uVar7 * 0x200;
    FUN_00144b80(param_2 + 2,*(int *)(param_1 + 0x20) + iVar8,uVar7 << 5);
    uVar7 = *param_2;
  }
  uVar5 = 0;
  if (uVar7 != 0) {
    iVar8 = 0;
    puVar9 = param_8;
    do {
      uVar4 = FUN_0013d9e0(param_3,uVar5);
      bVar1 = param_4 == 0;
      if ((param_5 != 0) && ((param_7 == 0 || (*(ushort *)((int)(uint *)uVar4 + 0x2e) >> 6 == 1))))
      {
        if (param_4 != 0) {
          uVar7 = *(uint *)uVar4;
          iVar3 = *(int *)(param_1 + 0x1c);
          *(uint *)(param_1 + 0x1c) = iVar3 + (uVar7 + 0xf & 0xfffffff0);
          uVar4 = FUN_00132560(*(int *)(param_1 + 0x20) + iVar3,uVar4,uVar7 >> 4);
        }
        bVar1 = true;
        FUN_001580a0(param_2 + 2,uVar4,param_2[1],param_2[1]);
      }
      FUN_00158290(param_2[6] + iVar8,uVar4,param_5,param_2[1],param_2[1],0x11110,0,0);
      if (param_5 != 0) {
        *(int *)(param_2[6] + iVar8 + 0x6c) = (int)uVar4;
      }
      if ((param_8 != (undefined4 *)0x0) && (bVar1)) {
        *puVar9 = (int)uVar4;
      }
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x80;
      puVar9 = puVar9 + 1;
    } while (uVar5 < *param_2);
  }
  return;
}

// 0x001a5440  size 0xec
void FUN_001a5440(undefined8 param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uStack_4;
  
  if (param_2 != 0) {
    puVar2 = (uint *)param_2;
    if ((*puVar2 & 0x10) == 0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = puVar2 + 0x14;
    }
    if (puVar1 != (uint *)0x0) {
      *puVar2 = *puVar2 | 0x20;
      *puVar2 = *puVar2 & 0xffffffbf;
      if (param_2 == 0) {
        puVar1 = (uint *)0x0;
      }
      else {
        if ((*puVar2 & 0x10) == 0) {
          puVar2 = (uint *)0x0;
        }
        else {
          puVar2 = puVar2 + 0x14;
        }
        if (puVar2 == (uint *)0x0) {
          puVar1 = (uint *)0x0;
        }
        else {
          puVar1 = puVar2 + 0xc;
          uStack_4 = puVar2[3];
        }
      }
      for (; uStack_4 != 0; uStack_4 = uStack_4 - 1) {
        *puVar1 = *puVar1 | 0x80000;
        puVar1 = puVar1 + (puVar1[0x1e] + 1) * 4 + 0x28;
      }
    }
  }
  return;
}

// 0x001a5530  size 0x318
/* WARNING: Removing unreachable block (ram,0x001a57bc) */
/* WARNING: Removing unreachable block (ram,0x001a5600) */
/* WARNING: Removing unreachable block (ram,0x001a56d4) */
/* WARNING: Removing unreachable block (ram,0x001a5644) */
/* WARNING: Removing unreachable block (ram,0x001a575c) */
/* WARNING: Removing unreachable block (ram,0x001a5688) */
/* WARNING: Removing unreachable block (ram,0x001a5718) */

void FUN_001a5530(undefined8 param_1,long param_2,uint param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uStack_4;
  
  pbVar4 = (byte *)param_6;
  pbVar3 = (byte *)param_5;
  uVar5 = 0;
  if (param_2 != 0) {
    if (param_2 == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      if ((*(uint *)param_2 & 0x10) == 0) {
        puVar1 = (uint *)0x0;
      }
      else {
        puVar1 = (uint *)param_2 + 0x14;
      }
      if (puVar1 == (uint *)0x0) {
        puVar2 = (uint *)0x0;
      }
      else {
        puVar2 = puVar1 + 0xc;
        uStack_4 = puVar1[3];
      }
    }
    if ((puVar2 != (uint *)0x0) && (uStack_4 != 0)) {
      do {
        if ((param_3 == 0xffffffff) || ((puVar2[1] & param_3) != 0)) {
          if (param_5 != 0) {
            puVar2[4] = (uint)((float)*pbVar3 / 255.0);
            puVar2[5] = (uint)((float)pbVar3[1] / 255.0);
            puVar2[6] = (uint)((float)pbVar3[2] / 255.0);
          }
          if (param_6 != 0) {
            puVar2[8] = (uint)((float)*pbVar4 / 255.0);
            puVar2[9] = (uint)((float)pbVar4[1] / 255.0);
            puVar2[10] = (uint)((float)pbVar4[2] / 255.0);
          }
          if ((param_7 != 0) && ((param_4 == 0 || ((*puVar2 & 0x100) != 0)))) {
            puVar2[0x1a] = (uint)((float)*(byte *)param_7 / 255.0);
          }
          if ((param_8 != 0) && ((param_4 == 0 || ((*puVar2 & 0x100) != 0)))) {
            puVar2[0xb] = (uint)((float)(int)(0xff - (uint)*(byte *)param_8) / 255.0);
          }
        }
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + (puVar2[0x1e] + 1) * 4 + 0x28;
      } while (uVar5 < uStack_4);
    }
  }
  return;
}

// 0x001a5850  size 0x58
uint * FUN_001a5850(undefined8 param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_2 == 0) {
    puVar1 = (uint *)0x0;
  }
  else {
    if ((*(uint *)param_2 & 0x10) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)param_2 + 0x14;
    }
    if (puVar2 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = puVar2 + 0xc;
      if (param_3 != 0) {
        *(uint *)param_3 = puVar2[3];
      }
    }
  }
  return puVar1;
}

// 0x001a58b0  size 0x98
int FUN_001a58b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_0014d6e0(param_2,0);
  uVar3 = 0;
  if (*(int *)((int)param_2 + 0x24) != 0) {
    do {
      if (param_3 == *(int *)(iVar1 + 4)) {
        return iVar1;
      }
      iVar2 = FUN_0014d840(iVar1);
      iVar1 = iVar1 + iVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)param_2 + 0x24));
  }
  return 0;
}

// 0x001a5950  size 0x60
void FUN_001a5950(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_0014d840(param_2);
  iVar1 = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = iVar1 + (uVar2 + 0xf & 0xfffffff0);
  FUN_00132560(*(int *)(param_1 + 0x20) + iVar1,param_2,uVar2 >> 4);
  return;
}

// 0x001a59b0  size 0x24
int FUN_001a59b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = iVar1 + (param_2 + 0xfU & 0xfffffff0);
  return *(int *)(param_1 + 0x20) + iVar1;
}

// 0x001a59e0  size 0x8
void FUN_001a59e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

// 0x001a59f0  size 0x8
undefined4 FUN_001a59f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}

// 0x001a5a00  size 0x40
void FUN_001a5a00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  return;
}

// 0x001a5a40  size 0x28
void FUN_001a5a40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

// 0x001a5a70  size 0x8
void FUN_001a5a70(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 0x001a5a80  size 0x20
void FUN_001a5a80(int param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = param_3 & 0xfffffff | 0x20000000;
  return;
}

// 0x001a5aa0  size 0x30
void FUN_001a5aa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}

// 0x001a5ad0  size 0x50
undefined4 FUN_001a5ad0(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    cVar1 = FUN_001543c0(uVar2);
    if (cVar1 != '\0') {
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return 1;
}

// 0x001a5b30  size 0x54
bool FUN_001a5b30(void)

{
  int iVar1;
  
  FUN_00138bf0((int)register0x000001c0 + -0x7730);
  iVar1 = iRam00386628;
  FUN_00138ba0((int)register0x000001c0 + -0x7730,0);
  if (iVar1 != 0) {
    FUN_001368c0();
  }
  return iVar1 == 0;
}

// 0x001a5b90  size 0xe8
void FUN_001a5b90(byte param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  bVar1 = param_1;
  do {
    bGpffff8bb8 = bVar1;
    iVar4 = (uint)bGpffff8bb8 * 0x20;
    FUN_00135050();
    FUN_001a98f0(*(undefined1 *)(iVar4 + 0x3179f4),*(undefined4 *)(&DAT_003179fc + iVar4));
    FUN_001a9420(iVar4 + 0x3179e0);
    FUN_0014bac0(*(undefined4 *)(iVar4 + 0x3179f8));
    FUN_0014b860(0x1a5b30);
    FUN_0014b850(0x1a5ad0);
    do {
      FUN_001a9210();
      lVar2 = FUN_0014b8c0();
      thunk_FUN_001349a0();
      FUN_00135050();
      FUN_00137460();
      FUN_00140350();
      iGpffff8b70 = iGpffff8b70 + 1;
      uVar3 = FUN_00191420();
      FUN_001919c0(uVar3);
      FUN_00157990();
    } while (lVar2 == 0);
    bVar1 = FUN_0014b870();
    FUN_001a93d0();
  } while (bVar1 != 6);
  return;
}

// 0x001a5c80  size 0x90
void FUN_001a5c80(void)

{
  FUN_0017be20();
  FUN_001a8ff0();
  FUN_001a9a10();
  thunk_FUN_0013ace0();
  FUN_00191dd0();
  FUN_00157b20();
  FUN_0014c9c0();
  FUN_0020a690();
  FUN_0014be10();
  FUN_00141430();
  FUN_00137620();
  FUN_00135b60();
  FUN_0014c060();
  FUN_0014c290();
  FUN_00100690(0x430750);
  return;
}

// 0x001a5d10  size 0x26c
void FUN_001a5d10(void)

{
  undefined8 uVar1;
  
  FUN_0013c1f0(0x3636e0,0);
  FUN_00134b60();
  iGpffff8bb4 = 5;
  uVar1 = GetThreadId();
  ChangeThreadPriority(uVar1,5);
  FUN_001006f0(0x430750,0x1a80000,0);
  FUN_00121c80(0);
  FUN_00122948(2);
  FUN_0013c1b0(0x363700,0,0,0);
  FUN_0013c1b0(0x363720,0,0,0);
  FUN_0013c1b0(0x363740,0,0,0);
  FUN_0013c1b0(0x363760,0,0,0);
  FUN_0013c1b0(0x363780,0,0,0);
  FUN_0013c1b0(0x363780,0,0,0);
  FUN_0013c1b0(0x3637a0,0,0,0);
  FUN_0013c1b0(0x3637c0,0,0,0);
  FUN_0013c1b0(0x3637e0,0,0,0);
  FUN_0013c1b0(0x363800,0,0,0);
  FUN_0013c1b0(0x363820,0,0,0);
  FUN_0013c1b0(0x363840,0,0,0);
  FUN_0013c1b0(0x363860,0,0,0);
  FUN_0014c2c0(0x430750);
  FUN_0014c0a0(iGpffff8bb4 + 1,iGpffff8bb4 + -1);
  FUN_00135b90(0x50,5);
  FUN_00137680(0x430750);
  FUN_00141530();
  FUN_0014be30(0x430750);
  FUN_0020a6d0(0x430750);
  FUN_001339a0(0);
  FUN_0014c9d0();
  FUN_00157bb0(0x430750,0x20,iGpffff8bb4 + -1);
  FUN_00192050(0x430750);
  FUN_0014f110();
  FUN_001a9a40(0x430750);
  FUN_0017be80(0x430750);
  FUN_001a9020(0x430750);
  return;
}

// 0x001a5f80  size 0x94
void FUN_001a5f80(undefined4 *param_1)

{
  param_1[0x14] = 0xbf13cd36;
  param_1[0x15] = 0xbf13cd36;
  param_1[0x16] = 0xbf13cd36;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3f13cd36;
  param_1[0x19] = 0xbf13cd36;
  param_1[0x1a] = 0xbf13cd36;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f000000;
  param_1[0x22] = 0x3f000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3f000000;
  param_1[0x25] = 0x3f800000;
  param_1[0x26] = 0x3f000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0x3f000000;
  param_1[0x29] = 0x3f000000;
  param_1[0x2a] = 0x3f800000;
  param_1[0x2b] = 0;
  *param_1 = 0x3e99999a;
  param_1[1] = 0x3e99999a;
  param_1[2] = 0x3e99999a;
  param_1[3] = 0x3f800000;
  FUN_0014d240();
  return;
}

// 0x001a6020  size 0x8
void FUN_001a6020(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x170) = param_2;
  return;
}

// 0x001a6030  size 0x60
void FUN_001a6030(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = *(undefined4 *)(iRam0036f0c4 + *(int *)(&DAT_00317a80 + param_2 * 8) * 0x14 + 0x10);
  param_1[2] = *(undefined4 *)(iRam0036f0c4 + *(int *)(&DAT_00317a80 + param_2 * 8) * 0x14 + 0x14);
  param_1[3] = *(undefined4 *)(&DAT_00317a84 + param_2 * 8);
  return;
}

// 0x001a6090  size 0x70
long FUN_001a6090(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e580;
    if (param_1 != 0) {
      *(undefined4 *)param_1 = &DAT_0036e5a0;
      FUN_00132320(param_1,0);
    }
    if (0 < param_2) {
      thunk_FUN_00100290(param_1);
    }
  }
  return param_1;
}

// 0x001a6110  size 0x188
void FUN_001a6110(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uStack_50 = DAT_00317ef0;
  uStack_4c = DAT_00317ef4;
  uStack_48 = DAT_00317ef8;
  uStack_44 = DAT_00317efc;
  uVar1 = FUN_001338b0(0xc0490fdb,0x40490fdb);
  uVar2 = FUN_001338b0(0,0x40490fdb);
  FUN_00133090(auStack_40);
  FUN_00132f40(uVar1,auStack_40,auStack_40);
  FUN_00132e60(uVar2,auStack_40,auStack_40);
  FUN_00132ba0(auStack_40,param_1,auStack_40);
  uVar1 = FUN_001338b0(-*(float *)(param_2 + 0x1c) * 0.5,*(float *)(param_2 + 0x1c) * 0.5);
  FUN_00132d50(auStack_60,auStack_40,&uStack_50);
  FUN_00132b10(uVar1,auStack_70,auStack_60);
  FUN_00132b70(param_3,param_3,auStack_70);
  *(undefined4 *)((int)param_3 + 0xc) = 0x3f800000;
  fVar3 = (float)FUN_001338b0(-*(float *)(param_2 + 0x18));
  FUN_00132b10((*(float *)(param_2 + 0x14) + fVar3) * 0.016666668,param_4,auStack_60);
  return;
}

// 0x001a62a0  size 0x174
void FUN_001a62a0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uStack_50 = DAT_00317ee0;
  uStack_4c = DAT_00317ee4;
  uStack_48 = DAT_00317ee8;
  uStack_44 = DAT_00317eec;
  uVar1 = FUN_001338b0(0xc0490fdb,0x40490fdb);
  uVar2 = FUN_001338b0(0,0x40490fdb);
  FUN_00133090(auStack_40);
  FUN_00132f40(uVar1,auStack_40,auStack_40);
  FUN_00132e60(uVar2,auStack_40,auStack_40);
  FUN_00132ba0(auStack_40,param_1,auStack_40);
  FUN_00132d50(auStack_60,auStack_40,&uStack_50);
  FUN_00132b10(*(float *)(param_2 + 0x1c) * 0.5,auStack_70,auStack_60);
  FUN_00132b70(param_3,param_3,auStack_70);
  *(undefined4 *)((int)param_3 + 0xc) = 0x3f800000;
  fVar3 = (float)FUN_001338b0(-*(float *)(param_2 + 0x18));
  FUN_00132b10((*(float *)(param_2 + 0x14) + fVar3) * 0.016666668,param_4,auStack_60);
  return;
}

// 0x001a6420  size 0xf0
void FUN_001a6420(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  float fVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = DAT_00317edc;
  uStack_10 = *param_5;
  uStack_c = param_5[1];
  uStack_8 = param_5[2];
  FUN_001338b0(-*(float *)(param_2 + 0x10));
  FUN_001338b0(0xc0490fdb,0x40490fdb);
  FUN_001328b0(&uStack_10,&uStack_10);
  fVar1 = (float)FUN_001338b0(-*(float *)(param_2 + 0x18));
  FUN_00132b10((*(float *)(param_2 + 0x14) + fVar1) * 0.016666668,param_4,&uStack_10);
  return;
}

// 0x001a6510  size 0xe4
void FUN_001a6510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar1 = (int)param_2;
  uStack_10 = FUN_001338b0(-*(float *)(iVar1 + 0x1c) * 0.5,*(float *)(iVar1 + 0x1c) * 0.5);
  uStack_c = FUN_001338b0(-*(float *)(iVar1 + 0x1c) * 0.5,*(float *)(iVar1 + 0x1c) * 0.5);
  uStack_8 = FUN_001338b0(-*(float *)(iVar1 + 0x1c) * 0.5,*(float *)(iVar1 + 0x1c) * 0.5);
  FUN_00132b70(param_3,param_3,&uStack_10);
  *(undefined4 *)((int)param_3 + 0xc) = 0x3f800000;
  FUN_001a6420(param_1,param_2,param_3,param_4,&uStack_10,param_5);
  return;
}

// 0x001a6600  size 0x1a8
void FUN_001a6600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float afStack_20 [6];
  float afStack_8 [2];
  
  afStack_8[0] = DAT_0036e830;
  afStack_8[1] = (float)DAT_0036e834;
  fVar2 = (float)FUN_001338b0(0,0x43580000);
  if (fVar2 < 2.1474836e+09) {
    uVar3 = (uint)fVar2;
  }
  else {
    uVar3 = (int)(fVar2 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = (int)uVar3 % 6;
  iVar1 = (int)param_2;
  afStack_20[(int)uVar3 % 3] = *(float *)(iVar1 + 0x1c) * 0.5 * afStack_8[uVar3 / 3];
  fVar2 = (float)FUN_001338b0(-*(float *)(iVar1 + 0x1c) * 0.5,*(float *)(iVar1 + 0x1c) * 0.5);
  afStack_20[(int)(uVar3 + 1) % 3] = fVar2;
  fVar2 = (float)FUN_001338b0(-*(float *)(iVar1 + 0x1c) * 0.5,*(float *)(iVar1 + 0x1c) * 0.5);
  afStack_20[(int)(uVar3 + 2) % 3] = fVar2;
  FUN_00132b70(param_3,param_3,afStack_20);
  *(undefined4 *)((int)param_3 + 0xc) = 0x3f800000;
  FUN_001a6420(param_1,param_2,param_3,param_4,afStack_20,param_5);
  return;
}

// 0x001a67b0  size 0x1e8
void FUN_001a67b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float afStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float afStack_10 [4];
  
  afStack_30[1] = (float)DAT_00317eb4;
  afStack_30[0] = DAT_00317eb0;
  afStack_30[2] = (float)DAT_00317eb8;
  afStack_30[3] = (float)DAT_00317ebc;
  uStack_20 = DAT_00317ec0;
  uStack_1c = DAT_00317ec4;
  uStack_18 = DAT_00317ec8;
  uStack_14 = DAT_00317ecc;
  fVar2 = (float)FUN_001338b0(0,0x43100000);
  if (fVar2 < 2.1474836e+09) {
    uVar3 = (uint)fVar2;
  }
  else {
    uVar3 = (int)(fVar2 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = (int)uVar3 % 0xc;
  iVar1 = (int)param_2;
  fVar2 = afStack_30[(uVar3 / 3) * 2 + 1];
  afStack_10[(int)uVar3 % 3] = *(float *)(iVar1 + 0x1c) * 0.5 * afStack_30[(uVar3 / 3) * 2];
  afStack_10[(int)(uVar3 + 1) % 3] = *(float *)(iVar1 + 0x1c) * 0.5 * fVar2;
  fVar2 = (float)FUN_001338b0(-*(float *)(iVar1 + 0x1c) * 0.5,*(float *)(iVar1 + 0x1c) * 0.5);
  afStack_10[(int)(uVar3 + 2) % 3] = fVar2;
  FUN_00132b70(param_3,param_3,afStack_10);
  *(undefined4 *)((int)param_3 + 0xc) = 0x3f800000;
  FUN_001a6420(param_1,param_2,param_3,param_4,afStack_10,param_5);
  return;
}

// 0x001a69a0  size 0x1ac
void FUN_001a69a0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uStack_50 = DAT_00317ea0;
  uStack_4c = DAT_00317ea4;
  uStack_48 = DAT_00317ea8;
  uStack_44 = DAT_00317eac;
  fVar1 = (float)FUN_001338b0(-*(float *)(param_2 + 0x10));
  fVar1 = (*(float *)(param_2 + 0xc) + fVar1) * 3.1415927 * 0.005555555;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (3.1415927 < fVar1) {
    fVar1 = 3.1415927;
  }
  uVar2 = FUN_001338b0(0xc0490fdb,0x40490fdb);
  FUN_00133090(auStack_40);
  FUN_00132f40(fVar1,auStack_40,auStack_40);
  FUN_00132e60(uVar2,auStack_40,auStack_40);
  if (param_5 == 0) {
    FUN_00132ba0(auStack_40,param_1,auStack_40);
  }
  FUN_00132d50(auStack_60,auStack_40,&uStack_50);
  fVar1 = (float)FUN_001338b0(-*(float *)(param_2 + 0x18));
  FUN_00132b10((*(float *)(param_2 + 0x14) + fVar1) * 0.016666668,param_4,auStack_60);
  return;
}

// 0x001a6b50  size 0x170
void FUN_001a6b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  fStack_10 = DAT_00317e90;
  fStack_c = DAT_00317e94;
  fStack_8 = (float)DAT_00317e98;
  uStack_4 = DAT_00317e9c;
  uVar2 = FUN_001338b0(0xc0490fdb,0x40490fdb);
  fVar3 = (float)FUN_001338b0(-*(float *)((int)param_2 + 0x1c));
  fVar4 = (float)FUN_00120990(uVar2);
  fStack_10 = fVar3 * fVar4 * 0.5;
  fVar4 = (float)FUN_00120c30(uVar2);
  fStack_8 = fVar3 * fVar4 * 0.5;
  if (param_5 == 0) {
    FUN_00132d50(&fStack_10,param_1,&fStack_10);
  }
  pfVar1 = (float *)param_3;
  *pfVar1 = *pfVar1 + fStack_10;
  pfVar1[1] = pfVar1[1] + fStack_c;
  pfVar1[2] = pfVar1[2] + fStack_8;
  FUN_001a69a0(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 0x001a6cc0  size 0x160
void FUN_001a6cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  fStack_10 = DAT_00317e80;
  fStack_c = DAT_00317e84;
  fStack_8 = (float)DAT_00317e88;
  uStack_4 = DAT_00317e8c;
  uVar2 = FUN_001338b0(0xc0490fdb,0x40490fdb);
  fVar3 = (float)FUN_00120990(uVar2);
  fStack_10 = *(float *)((int)param_2 + 0x1c) * fVar3 * 0.5;
  fVar3 = (float)FUN_00120c30(uVar2);
  fStack_8 = *(float *)((int)param_2 + 0x1c) * fVar3 * 0.5;
  if (param_5 == 0) {
    FUN_00132d50(&fStack_10,param_1,&fStack_10);
  }
  pfVar1 = (float *)param_3;
  *pfVar1 = *pfVar1 + fStack_10;
  pfVar1[1] = pfVar1[1] + fStack_c;
  pfVar1[2] = pfVar1[2] + fStack_8;
  FUN_001a69a0(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 0x001a6e20  size 0x1ac
void FUN_001a6e20(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uStack_50 = DAT_00317e70;
  uStack_4c = DAT_00317e74;
  uStack_48 = DAT_00317e78;
  uStack_44 = DAT_00317e7c;
  fVar1 = (float)FUN_001338b0(-*(float *)(param_2 + 0x10));
  fVar1 = (*(float *)(param_2 + 0xc) + fVar1) * 3.1415927 * 0.005555555;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (3.1415927 < fVar1) {
    fVar1 = 3.1415927;
  }
  uVar2 = FUN_001338b0(0xc0490fdb,0x40490fdb);
  FUN_00133090(auStack_40);
  FUN_00132f40(fVar1,auStack_40,auStack_40);
  FUN_00132e60(uVar2,auStack_40,auStack_40);
  if (param_5 == 0) {
    FUN_00132ba0(auStack_40,param_1,auStack_40);
  }
  FUN_00132d50(auStack_60,auStack_40,&uStack_50);
  fVar1 = (float)FUN_001338b0(-*(float *)(param_2 + 0x18));
  FUN_00132b10((*(float *)(param_2 + 0x14) + fVar1) * 0.016666668,param_4,auStack_60);
  return;
}

// 0x001a6fd0  size 0x138
void FUN_001a6fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  float *pfVar1;
  float fVar2;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  fStack_10 = DAT_00317e60;
  fStack_c = DAT_00317e64;
  fStack_8 = (float)DAT_00317e68;
  uStack_4 = DAT_00317e6c;
  fVar2 = *(float *)((int)param_2 + 0x1c);
  fStack_10 = (float)FUN_001338b0(-fVar2 * 0.5,fVar2 * 0.5);
  fVar2 = *(float *)((int)param_2 + 0x1c);
  fStack_8 = (float)FUN_001338b0(-fVar2 * 0.5,fVar2 * 0.5);
  if (param_5 == 0) {
    FUN_00132d50(&fStack_10,param_1,&fStack_10);
  }
  pfVar1 = (float *)param_3;
  *pfVar1 = *pfVar1 + fStack_10;
  pfVar1[1] = pfVar1[1] + fStack_c;
  pfVar1[2] = pfVar1[2] + fStack_8;
  FUN_001a6e20(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 0x001a7110  size 0x1ac
void FUN_001a7110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float afStack_20 [6];
  float afStack_8 [2];
  
  afStack_20[0] = DAT_00317e50;
  afStack_8[0] = fGpffff8138;
  afStack_20[1] = DAT_00317e54;
  afStack_20[2] = DAT_00317e58;
  afStack_8[1] = (float)uGpffff813c;
  afStack_20[3] = (float)DAT_00317e5c;
  fVar3 = (float)FUN_001338b0(0,0x42c80000);
  if (2.1474836e+09 <= fVar3) {
    fVar3 = fVar3 - 2.1474836e+09;
  }
  uVar2 = (int)fVar3 & 3;
  afStack_20[((int)fVar3 & 1U) * 2] = *(float *)((int)param_2 + 0x1c) * 0.5 * afStack_8[uVar2 >> 1];
  fVar3 = *(float *)((int)param_2 + 0x1c);
  fVar3 = (float)FUN_001338b0(-fVar3 * 0.5,fVar3 * 0.5);
  afStack_20[(uVar2 + 1 & 1) * 2] = fVar3;
  if (param_5 == 0) {
    FUN_00132d50(afStack_20,param_1,afStack_20);
  }
  pfVar1 = (float *)param_3;
  *pfVar1 = *pfVar1 + afStack_20[0];
  pfVar1[1] = pfVar1[1] + afStack_20[1];
  pfVar1[2] = pfVar1[2] + afStack_20[2];
  FUN_001a6e20(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 0x001a72c0  size 0x1b0
void FUN_001a72c0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uStack_50 = DAT_00317e40;
  uStack_4c = DAT_00317e44;
  uStack_48 = DAT_00317e48;
  uStack_44 = DAT_00317e4c;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  fVar1 = (float)FUN_001338b0(-*(float *)(param_2 + 0x10));
  fVar1 = (*(float *)(param_2 + 0xc) + fVar1) * 3.1415927 * 0.005555555;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (3.1415927 < fVar1) {
    fVar1 = 3.1415927;
  }
  uVar2 = FUN_001338b0(0xc0490fdb,0x40490fdb);
  FUN_00133090(auStack_40);
  FUN_00132f40(fVar1,auStack_40,auStack_40);
  FUN_00132e60(uVar2,auStack_40,auStack_40);
  if (param_5 == 0) {
    FUN_00132ba0(auStack_40,param_1,auStack_40);
  }
  FUN_00132d50(auStack_60,auStack_40,&uStack_50);
  fVar1 = (float)FUN_001338b0(-*(float *)(param_2 + 0x18));
  FUN_00132b10((*(float *)(param_2 + 0x14) + fVar1) * 0.016666668,param_4,auStack_60);
  return;
}

// 0x001a7470  size 0x2e8
/* WARNING: Removing unreachable block (ram,0x001a7660) */
/* WARNING: Removing unreachable block (ram,0x001a7690) */

void FUN_001a7470(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  float *pfVar1;
  code *pcVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_70 [5];
  byte bStack_5b;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar7 = 7;
  pfVar1 = *(float **)(*(int *)(param_1 + 0x9c) + 0x24);
  pfVar8 = afStack_70;
  pfVar9 = pfVar1;
  do {
    fVar4 = pfVar9[1];
    fVar5 = pfVar9[2];
    fVar6 = pfVar9[3];
    iVar7 = iVar7 + -1;
    *pfVar8 = *pfVar9;
    pfVar8[1] = fVar4;
    pfVar8[2] = fVar5;
    pfVar8[3] = fVar6;
    pfVar9 = pfVar9 + 4;
    pfVar8 = pfVar8 + 4;
  } while (0 < iVar7);
  fStack_a0 = pfVar1[0x1c];
  fStack_9c = pfVar1[0x1d];
  fStack_98 = pfVar1[0x1e];
  fStack_94 = pfVar1[0x1f];
  fStack_90 = pfVar1[0x20];
  fStack_8c = pfVar1[0x21];
  fStack_88 = pfVar1[0x22];
  fStack_84 = pfVar1[0x23];
  pcVar2 = (code *)(&PTR_FUN_00317dd0)[((uint)fStack_a0 & 0xff) * 3 + ((uint)fStack_a0 >> 8 & 0xff)]
  ;
  fStack_80 = pfVar1[0x24];
  fStack_7c = pfVar1[0x25];
  fStack_78 = pfVar1[0x26];
  *(undefined4 *)(param_1 + 8) = 1;
  if (param_4 == 0) {
    FUN_00132ae0(param_1 + 0x20);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_3,&fStack_a0,param_1 + 0x20,param_1 + 0x40,param_4);
  }
  *(undefined4 *)(param_1 + 0x50) = uStack_58;
  *(undefined4 *)(param_1 + 0x54) = uStack_54;
  *(undefined4 *)(param_1 + 0x58) = uStack_50;
  *(undefined4 *)(param_1 + 0x5c) = uStack_4c;
  fVar4 = (float)FUN_001338b0(-afStack_70[4]);
  *(float *)(param_1 + 0xc) = afStack_70[3] + fVar4;
  fVar4 = (float)FUN_001338b0(-afStack_70[2]);
  *(float *)(param_1 + 0x18) = afStack_70[1] + fVar4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fVar4 = (float)FUN_001338b0(-fStack_78);
  *(int *)(param_1 + 0x10) = (int)(fStack_7c + fVar4);
  fVar4 = (float)FUN_001338b0(0,0x43800000);
  if (2.1474836e+09 <= fVar4) {
    fVar4 = fVar4 - 2.1474836e+09;
  }
  *(char *)(param_1 + 0x60) = (char)(int)fVar4;
  fVar4 = (float)FUN_001338b0(-(float)bStack_5b,(float)bStack_5b);
  *(char *)(param_1 + 0x61) = (char)(int)fVar4;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x24) + 0xb8);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x24) + 0xb4);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x24) + 0xb0);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x24) + 0xbc);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x24) + 0xc0);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  return;
}

// 0x001a7770  size 0x128
void FUN_001a7770(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  
  iVar2 = (int)param_1;
  fVar4 = *(float *)(iVar2 + 0x118);
  if (fVar4 < 2.1474836e+09) {
    uVar5 = (uint)fVar4;
  }
  else {
    uVar5 = (int)(fVar4 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    do {
      iVar1 = iRam004307ac;
      if (iRam004307a8 < 1) {
        if (iRam004307a8 == 0) {
          *(undefined4 *)(iVar2 + 0x118) = 0;
          return;
        }
        FUN_00129628(0x3638d0);
        return;
      }
      FUN_001321c0(0x4307a0,iRam004307ac);
      FUN_00132250(param_1,iVar1);
      *(int *)(iVar1 + 0x9c) = iVar2;
      FUN_001a7470(iVar1,iVar2 + 0xc0,iVar2 + 0xd0,*(undefined4 *)(iVar2 + 0x114));
      uVar3 = uVar3 + 1;
      *(float *)(iVar2 + 0x118) = *(float *)(iVar2 + 0x118) - 1.0;
      *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 2;
    } while (uVar3 < uVar5);
  }
  return;
}

// 0x001a78a0  size 0x194
void FUN_001a78a0(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined2 uStack_210;
  undefined1 uStack_20e;
  undefined4 uStack_204;
  undefined1 auStack_200 [64];
  undefined1 auStack_1c0 [16];
  undefined4 uStack_1b0;
  undefined1 auStack_160 [352];
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    uVar3 = 0;
    puVar2 = &DAT_00317e20;
    do {
      uVar1 = (uint)(byte)puVar2[2];
      uVar3 = uVar3 + 1;
      if (((uVar1 != 4) && (uVar1 != 3)) && (*(int *)(uVar1 * 0x5c0 + 0x431684) == 1)) {
        thunk_FUN_001466e0(auStack_160,uVar1 * 0x5c0 + 0x431100,0x436180,*puVar2,puVar2[1]);
        FUN_0014f170(&uStack_210);
        uStack_210 = *(undefined2 *)(*(int *)(param_1 + 0x24) + 200);
        uStack_20e = *(undefined1 *)(*(int *)(param_1 + 0x24) + 0xca);
        if (*(int *)(param_1 + 0x138) != -1) {
          FUN_0014f150(&uStack_210,5,*(int *)(param_1 + 0x138),0);
        }
        uStack_204 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xac);
        FUN_00132ae0(auStack_1c0,param_1 + 0xc0);
        FUN_00132c20(auStack_200,param_1 + 0xd0);
        uStack_1b0 = 0x3f800000;
        FUN_0014f120(&uStack_210,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb0),
                     param_1 + 0x90);
        FUN_0014a800(auStack_160,&uStack_210);
      }
      puVar2 = puVar2 + 3;
    } while (uVar3 < 6);
  }
  return;
}

// 0x001a7a40  size 0x114
void FUN_001a7a40(int param_1,undefined4 param_2,undefined4 *param_3,long param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x24) = *param_3;
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
    FUN_00133090(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x138) = param_3[1];
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc4);
    *(undefined4 *)(param_1 + 0x120) = uVar1;
    *(undefined4 *)(param_1 + 0x11c) = uVar1;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x74);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x78);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x24);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x34);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xac);
    FUN_00132ae0(param_1 + 0x40,*(int *)(param_1 + 0x24) + 0x40);
    FUN_00132ae0(param_1 + 0x50,*(int *)(param_1 + 0x24) + 0x50);
    FUN_00132ae0(param_1 + 0x30,*(int *)(param_1 + 0x24) + 0x60);
    *(undefined4 *)(param_1 + 0x80) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x84) = 0x3e99999a;
  }
  return;
}

// 0x001a7b60  size 0x114
void FUN_001a7b60(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0x11c) == 0) || (*(int *)(param_1 + 0x120) == 0)) {
    fVar4 = (float)FUN_001338b0(-*(float *)(param_1 + 0x128));
    fVar4 = *(float *)(param_1 + 0x124) + fVar4;
  }
  else {
    while( true ) {
      pfVar1 = *(float **)(param_1 + 0x120);
      fVar4 = *pfVar1;
      if ((*(float *)(param_1 + 0x88) <= fVar4) || (fVar4 < 0.0)) break;
      *(float **)(param_1 + 0x11c) = pfVar1;
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 8;
    }
    if (0.0 <= fVar4) {
      fVar3 = **(float **)(param_1 + 0x11c);
      if (fVar4 != fVar3) {
        fVar2 = (*(float **)(param_1 + 0x11c))[1];
        fVar4 = ((*(float *)(param_1 + 0x88) - fVar3) / (fVar4 - fVar3)) * (pfVar1[1] - fVar2) +
                fVar2 + 0.0;
        goto LAB_001a7c20;
      }
    }
    fVar4 = *(float *)(*(int *)(param_1 + 0x11c) + 4);
  }
LAB_001a7c20:
  *(float *)(param_1 + 0x118) = fVar4 * 0.016666668 + *(float *)(param_1 + 0x118) + 0.0;
  return;
}

// 0x001a7c80  size 0x130
void FUN_001a7c80(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x90) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x94) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x98) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  if (iRam004308d0 != 0) {
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (*(float *)(iVar1 + 0x20) < *(float *)(param_1 + 0x90)) {
        *(float *)(param_1 + 0x90) = *(float *)(iVar1 + 0x20);
      }
      if (*(float *)(iVar1 + 0x24) < *(float *)(param_1 + 0x94)) {
        *(float *)(param_1 + 0x94) = *(float *)(iVar1 + 0x24);
      }
      if (*(float *)(iVar1 + 0x28) < *(float *)(param_1 + 0x98)) {
        *(float *)(param_1 + 0x98) = *(float *)(iVar1 + 0x28);
      }
      if (*(float *)(param_1 + 0xa0) < *(float *)(iVar1 + 0x20)) {
        *(float *)(param_1 + 0xa0) = *(float *)(iVar1 + 0x20);
      }
      if (*(float *)(param_1 + 0xa4) < *(float *)(iVar1 + 0x24)) {
        *(float *)(param_1 + 0xa4) = *(float *)(iVar1 + 0x24);
      }
      if (*(float *)(param_1 + 0xa8) < *(float *)(iVar1 + 0x28)) {
        *(float *)(param_1 + 0xa8) = *(float *)(iVar1 + 0x28);
      }
    }
  }
  return;
}

// 0x001a7db0  size 0x968
/* WARNING: Removing unreachable block (ram,0x001a8414) */
/* WARNING: Removing unreachable block (ram,0x001a859c) */
/* WARNING: Removing unreachable block (ram,0x001a8444) */
/* WARNING: Removing unreachable block (ram,0x001a8488) */

void FUN_001a7db0(undefined8 param_1)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [48];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x114) != 0) {
    FUN_00133020(auStack_40,iVar4 + 0xd0);
    uStack_4 = 0x3f800000;
    uStack_8 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    if (*(int *)(*(int *)(iVar4 + 0x24) + 0x9c) == 0) {
      iVar3 = *(int *)(iVar4 + 0x24);
    }
    else {
      FUN_00132d50(auStack_50,auStack_40,iVar4 + 0x40);
      iVar3 = *(int *)(iVar4 + 0x24);
    }
    if (*(int *)(iVar3 + 0xa0) != 0) {
      FUN_00132d50(auStack_60,auStack_40,iVar4 + 0x30);
    }
  }
  FUN_001a7c80(param_1);
  if (iRam004308d0 == 0) {
    *(float *)(iVar4 + 0x88) = *(float *)(iVar4 + 0x88) + 1.0;
    *(undefined4 *)(iVar4 + 0xb0) = uRam004308c8;
    *(int *)(iVar4 + 0xb0) = *(int *)(iVar4 + 0xb0) + iRam004308d4 * 0x30;
    *(undefined4 *)(iVar4 + 0xb4) = 0;
    if (*(int *)(iVar4 + 0xc) != 0) {
      iVar3 = *(int *)(iVar4 + 0xc);
      do {
        uStack_70 = DAT_00317e10;
        uStack_6c = DAT_00317e14;
        uStack_68 = DAT_00317e18;
        uStack_64 = DAT_00317e1c;
        if (*(int *)(iVar3 + 8) == 0) {
          FUN_00129628(0x3638e0);
        }
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
        FUN_00132ae0(iVar3 + 0x30,iVar3 + 0x20);
        if (*(int *)(iVar3 + 0x10) < *(int *)(iVar3 + 0x14)) {
          iVar10 = *(int *)(iVar3 + 4);
          *(undefined4 *)(iVar3 + 8) = 0;
          FUN_001321c0(*(undefined4 *)(iVar3 + 0x9c),iVar3);
          FUN_00132250(0x4307a0,iVar3);
          *(int *)(iVar4 + 0x8c) = *(int *)(iVar4 + 0x8c) + -1;
        }
        else {
          *(char *)(iVar3 + 0x60) = *(char *)(iVar3 + 0x60) + *(char *)(iVar3 + 0x61);
          if (*(int *)(*(int *)(iVar4 + 0x24) + 0x9c) != 0) {
            if (*(int *)(iVar4 + 0x114) == 0) {
              FUN_00132b10(*(undefined4 *)(iVar4 + 0x4c),auStack_80,iVar4 + 0x40);
            }
            else {
              FUN_00132b10(*(undefined4 *)(iVar4 + 0x4c),auStack_80,auStack_50);
            }
            FUN_00132b70(&uStack_70,&uStack_70,auStack_80);
          }
          if (*(int *)(*(int *)(iVar4 + 0x24) + 0xa4) != 0) {
            FUN_00132b50(auStack_90,iVar3 + 0x20,iVar4 + 0x50);
            fVar11 = (float)FUN_00132ab0(auStack_90,auStack_90);
            fVar11 = SQRT(fVar11);
            fVar11 = fVar11 * fVar11 * fVar11;
            if (fVar11 == 0.0) {
              fVar11 = 0.0001;
            }
            fVar11 = *(float *)(iVar4 + 0x5c) / (fVar11 * *(float *)(iVar3 + 0x18));
            if (1.0 < fVar11) {
              fVar11 = 1.0;
            }
            if (fVar11 < -1.0) {
              fVar11 = -1.0;
            }
            FUN_00132b10(fVar11,auStack_90,auStack_90);
            FUN_00132b70(&uStack_70,&uStack_70,auStack_90);
          }
          if (*(int *)(*(int *)(iVar4 + 0x24) + 0xa0) != 0) {
            fVar11 = *(float *)(iVar4 + 0x3c) / *(float *)(iVar3 + 0x18);
            if (0.05 < fVar11) {
              fVar11 = 0.05;
            }
            if (*(int *)(iVar4 + 0x114) == 0) {
              FUN_00132b10(fVar11,auStack_a0,iVar4 + 0x30);
            }
            else {
              FUN_00132b10(fVar11,auStack_a0,auStack_60);
            }
            FUN_00132b70(&uStack_70,&uStack_70,auStack_a0);
          }
          if (*(int *)(*(int *)(iVar4 + 0x24) + 0xa8) != 0) {
            fVar11 = (float)FUN_00132ab0(iVar3 + 0x40,iVar3 + 0x40);
            fVar11 = SQRT(fVar11);
            fVar9 = (float)FUN_001338b0(-*(float *)(iVar4 + 0x84));
            fVar9 = *(float *)(iVar4 + 0x80) + fVar9;
            if (fVar11 != 0.0) {
              if (fVar9 < 0.0) {
                fVar9 = 0.0;
              }
              fVar9 = (fVar9 * fVar11) / *(float *)(iVar3 + 0x18);
              if (fVar11 < fVar9) {
                fVar9 = fVar11;
              }
              FUN_00132b10(-fVar9 / fVar11,auStack_b0,iVar3 + 0x40);
              FUN_00132b70(&uStack_70,&uStack_70,auStack_b0);
            }
          }
          FUN_00132b70(iVar3 + 0x40,iVar3 + 0x40,&uStack_70);
          FUN_00132b70(iVar3 + 0x20,iVar3 + 0x20,iVar3 + 0x40);
          *(undefined4 *)(iVar3 + 0x2c) = 0x3f800000;
          *(undefined4 *)(iVar3 + 0x4c) = 0x3f800000;
          if (*(float *)(iVar3 + 0x20) < *(float *)(iVar4 + 0x90)) {
            *(float *)(iVar4 + 0x90) = *(float *)(iVar3 + 0x20);
          }
          if (*(float *)(iVar3 + 0x24) < *(float *)(iVar4 + 0x94)) {
            *(float *)(iVar4 + 0x94) = *(float *)(iVar3 + 0x24);
          }
          if (*(float *)(iVar3 + 0x28) < *(float *)(iVar4 + 0x98)) {
            *(float *)(iVar4 + 0x98) = *(float *)(iVar3 + 0x28);
          }
          if (*(float *)(iVar4 + 0xa0) < *(float *)(iVar3 + 0x20)) {
            *(float *)(iVar4 + 0xa0) = *(float *)(iVar3 + 0x20);
          }
          if (*(float *)(iVar4 + 0xa4) < *(float *)(iVar3 + 0x24)) {
            *(float *)(iVar4 + 0xa4) = *(float *)(iVar3 + 0x24);
          }
          if (*(float *)(iVar4 + 0xa8) < *(float *)(iVar3 + 0x28)) {
            *(float *)(iVar4 + 0xa8) = *(float *)(iVar3 + 0x28);
          }
          piVar7 = (int *)(iVar3 + 0x74);
          piVar6 = (int *)(iVar3 + 100);
          uVar5 = 0;
          do {
            iVar10 = *(int *)(iVar3 + 0x14);
            if ((*piVar7 != 0) && (*piVar6 != 0)) {
              while( true ) {
                pfVar2 = (float *)*piVar7;
                fVar11 = *pfVar2;
                if (((float)iVar10 <= fVar11) || (fVar11 < 0.0)) break;
                *piVar6 = (int)pfVar2;
                *piVar7 = *piVar7 + 8;
              }
              if (0.0 <= fVar11) {
                fVar9 = *(float *)*piVar6;
                if (fVar11 == fVar9) goto LAB_001a8580;
                bVar1 = *(byte *)((float *)*piVar6 + 1);
                fVar11 = (((float)*(byte *)(pfVar2 + 1) - (float)bVar1) / (fVar11 - fVar9)) *
                         ((float)iVar10 - fVar9) + (float)bVar1 + 0.0;
              }
              else {
LAB_001a8580:
                fVar11 = (float)*(byte *)(*piVar6 + 4);
              }
              if (fVar11 < 0.0) {
                fVar11 = 0.0;
              }
              if (uVar5 == 3) {
                *(float *)(iVar3 + 0x5c) = fVar11 * *(float *)(iVar4 + 300) * 0.0039215684;
              }
              else {
                *(float *)(uVar5 * 4 + iVar3 + 0x50) = fVar11;
              }
            }
            uVar5 = uVar5 + 1;
            piVar7 = piVar7 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar5 < 4);
          if ((*(int *)(iVar3 + 0x84) != 0) && (*(int *)(iVar3 + 0x88) != 0)) {
            while( true ) {
              pfVar2 = *(float **)(iVar3 + 0x88);
              fVar11 = *pfVar2;
              if (((float)*(int *)(iVar3 + 0x14) <= fVar11) || (fVar11 < 0.0)) break;
              *(float **)(iVar3 + 0x84) = pfVar2;
              *(int *)(iVar3 + 0x88) = *(int *)(iVar3 + 0x88) + 8;
            }
            if (0.0 <= fVar11) {
              fVar9 = **(float **)(iVar3 + 0x84);
              if (fVar11 != fVar9) {
                fVar8 = (*(float **)(iVar3 + 0x84))[1];
                *(float *)(iVar3 + 0xc) =
                     (((float)*(int *)(iVar3 + 0x14) - fVar9) / (fVar11 - fVar9)) *
                     (pfVar2[1] - fVar8) + fVar8 + 0.0;
                goto LAB_001a8620;
              }
            }
            *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(*(int *)(iVar3 + 0x84) + 4);
          }
LAB_001a8620:
          FUN_00132ae0(*(int *)(iVar4 + 0xb0) + *(int *)(iVar4 + 0xb4) * 0x30,iVar3 + 0x20);
          *(undefined4 *)(*(int *)(iVar4 + 0xb0) + *(int *)(iVar4 + 0xb4) * 0x30 + 0xc) =
               *(undefined4 *)(iVar3 + 0xc);
          FUN_00132ae0(*(int *)(iVar4 + 0xb0) + *(int *)(iVar4 + 0xb4) * 0x30 + 0x10,iVar3 + 0x50);
          *(undefined4 *)(*(int *)(iVar4 + 0xb0) + *(int *)(iVar4 + 0xb4) * 0x30 + 0x20) =
               *(undefined4 *)((uint)*(byte *)(iVar3 + 0x60) * 4 + 0x4308e0);
          *(undefined4 *)(*(int *)(iVar4 + 0xb0) + *(int *)(iVar4 + 0xb4) * 0x30 + 0x24) =
               *(undefined4 *)((uint)*(byte *)(iVar3 + 0x60) * 4 + 0x430ce0);
          *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + 1;
          iVar10 = *(int *)(iVar3 + 4);
        }
        iVar3 = iVar10;
      } while (iVar10 != 0);
    }
    iRam004308d4 = iRam004308d4 + *(int *)(iVar4 + 0xb4);
  }
  return;
}

