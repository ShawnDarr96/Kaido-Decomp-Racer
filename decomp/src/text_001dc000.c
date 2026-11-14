// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001dc000 - 0x001e0000
#include "ghidra_types.h"

// 0x001dc180  size 0xc
undefined4 FUN_001dc180(void)

{
  return *puRam0036f390;
}

// 0x001dc190  size 0xc
undefined4 FUN_001dc190(void)

{
  return *(undefined4 *)(iRam0036f390 + 0xc);
}

// 0x001dc1a0  size 0xc
void FUN_001dc1a0(undefined1 param_1)

{
  *(undefined1 *)(iRam0036f390 + 8) = param_1;
  return;
}

// 0x001dc1b0  size 0x18
undefined1 FUN_001dc1b0(void)

{
  undefined1 uVar1;
  
  if (iRam0036f390 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = *(undefined1 *)(iRam0036f390 + 8);
  }
  return uVar1;
}

// 0x001dc1d0  size 0x30
undefined4 FUN_001dc1d0(void)

{
  undefined4 uVar1;
  
  if ((iRam0036f390 == 0) || ((*(uint *)(iRam0036f390 + 4) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// 0x001dc200  size 0x1c
undefined4 FUN_001dc200(char param_1)

{
  return *(undefined4 *)(param_1 * 4 + iRam0036f390 + 0x1c);
}

// 0x001dc220  size 0x1c
undefined4 FUN_001dc220(char param_1)

{
  return *(undefined4 *)(param_1 * 4 + iRam0036f390 + 0x40);
}

// 0x001dc240  size 0x1c
undefined4 FUN_001dc240(char param_1)

{
  return *(undefined4 *)(param_1 * 4 + iRam0036f390 + 0x34);
}

// 0x001dc260  size 0x1c
undefined4 FUN_001dc260(char param_1)

{
  return *(undefined4 *)(param_1 * 4 + iRam0036f390 + 0x28);
}

// 0x001dc280  size 0x8
undefined4 FUN_001dc280(void)

{
  return uRam0036f390;
}

// 0x001dc290  size 0xc
undefined4 FUN_001dc290(void)

{
  return *(undefined4 *)(iRam0036f390 + 4);
}

// 0x001dc2a0  size 0x10
void FUN_001dc2a0(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}

// 0x001dc2b0  size 0xfc
void FUN_001dc2b0(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  
  FUN_001de2f0();
  cVar1 = FUN_001777b0();
  puVar4 = (uint *)param_1;
  if (cVar1 != '\b') {
    if ((puVar4[1] & 1) == 0) {
      uVar2 = puVar4[1];
    }
    else {
      FUN_001e10f0(param_1);
      uVar2 = puVar4[1];
    }
    if ((uVar2 & 2) == 0) {
      uVar2 = puVar4[1];
    }
    else {
      FUN_001e0610(param_1);
      uVar2 = puVar4[1];
    }
    if ((uVar2 & 4) != 0) {
      FUN_001df7d0(param_1);
    }
  }
  lVar3 = FUN_001e8f20();
  if ((lVar3 == 36000) && (lVar3 = thunk_FUN_001e8fc0(), lVar3 != 0)) {
    if (*piRam0036f390 == 0) {
      *puVar4 = *puVar4 | 0x10;
      uVar2 = FUN_00176fa0();
      *puVar4 = *puVar4 | uVar2;
    }
  }
  else {
    FUN_001de7f0(param_1);
  }
  return;
}

// 0x001dc3b0  size 0x104
void FUN_001dc3b0(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  
  if (iRam0036f390 == 0) {
    cVar4 = '\x03';
  }
  else {
    cVar4 = *(char *)(iRam0036f390 + 8);
  }
  if (cVar4 == '\0') {
    FUN_001eb140(0x10f);
    FUN_001e9120(0x100);
    lVar3 = FUN_001e90f0();
    iVar1 = iRam0036f390;
    if (lVar3 == 1) {
      if ((*(uint *)(iRam0036f390 + 4) & 2) == 0) {
        uVar2 = *(uint *)(iRam0036f390 + 4);
      }
      else {
        FUN_001e0d10(iRam0036f390);
        uVar2 = *(uint *)(iVar1 + 4);
      }
      if ((uVar2 & 4) != 0) {
        FUN_001dfec0(iVar1);
      }
      *(undefined4 *)(iRam0036f390 + 0xc) = 0;
      *(undefined1 *)(iRam0036f390 + 8) = 3;
      FUN_001eb140(0x47f);
      FUN_001eb140(0xff);
    }
  }
  else {
    if (iRam0036f390 == 0) {
      cVar4 = '\x03';
    }
    else {
      cVar4 = *(char *)(iRam0036f390 + 8);
    }
    if (cVar4 == '\x03') {
      *(int *)(iRam0036f390 + 0xc) = *(int *)(iRam0036f390 + 0xc) + 1;
    }
  }
  return;
}

// 0x001dc4c0  size 0x624
void FUN_001dc4c0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  char cVar13;
  
  if (puRam0036f390 == (uint *)0x0) {
    cVar4 = '\x03';
  }
  else {
    cVar4 = (char)puRam0036f390[2];
  }
  if (cVar4 == '\0') {
    FUN_001eb140(0x10f);
    FUN_001e9120(0x100);
    lVar5 = FUN_001e90f0();
    puVar12 = puRam0036f390;
    if (lVar5 == 1) {
      if ((puRam0036f390[1] & 2) == 0) {
        uVar11 = puRam0036f390[1];
      }
      else {
        FUN_001e0d10(puRam0036f390);
        uVar11 = puVar12[1];
      }
      if ((uVar11 & 4) != 0) {
        FUN_001dfec0(puVar12);
      }
      puRam0036f390[3] = 0xb4;
      *(undefined1 *)(puRam0036f390 + 2) = 1;
    }
  }
  else {
    if (puRam0036f390 == (uint *)0x0) {
      cVar4 = '\x03';
    }
    else {
      cVar4 = (char)puRam0036f390[2];
    }
    if (cVar4 == '\x01') {
      puVar12 = puRam0036f390 + 3;
      if ((int)puRam0036f390[3] < 1) {
        *puVar12 = 300;
        *(undefined1 *)(puRam0036f390 + 2) = 2;
        FUN_001eb140(0x20f);
        FUN_001eb140(0x40c);
        FUN_001e9120(0x400);
      }
      else {
        *puVar12 = *puVar12 - 1;
        cVar4 = FUN_00177780();
        if (cVar4 == '\x01') {
          if (puRam0036f390[3] == 0x70) {
            FUN_001eb140(0x2003);
          }
          else if (puRam0036f390[3] == 0x66) {
            FUN_001eb140(0x200c);
          }
        }
      }
    }
    else {
      if (puRam0036f390 == (uint *)0x0) {
        cVar4 = '\x03';
      }
      else {
        cVar4 = (char)puRam0036f390[2];
      }
      if (cVar4 == '\x02') {
        puVar12 = puRam0036f390 + 3;
        if ((int)puRam0036f390[3] < 1) {
          *puVar12 = 0;
          *(undefined1 *)(puRam0036f390 + 2) = 3;
          FUN_001eb140(0x8f);
          FUN_001e9120(0x200);
        }
        else {
          *puVar12 = *puVar12 - 1;
        }
      }
      else {
        if (puRam0036f390 == (uint *)0x0) {
          cVar4 = '\x03';
        }
        else {
          cVar4 = (char)puRam0036f390[2];
        }
        cVar13 = '\x03';
        if (cVar4 == '\x03') {
          puRam0036f390[3] = puRam0036f390[3] + 1;
          FUN_001dc2b0(puRam0036f390);
          if (*puRam0036f390 != 0) {
            if ((*puRam0036f390 & 0x410) == 0) {
              FUN_00177d30();
              puRam0036f390[3] = 0x78;
              *(undefined1 *)(puRam0036f390 + 2) = 4;
              FUN_001eb140(0x40f);
              FUN_001e9120(0x100);
              FUN_001e9120(0x800);
            }
            else {
              puRam0036f390[3] = 0;
              *(undefined1 *)(puRam0036f390 + 2) = 6;
            }
            FUN_001de770(puRam0036f390);
          }
        }
        else {
          if (puRam0036f390 != (uint *)0x0) {
            cVar13 = (char)puRam0036f390[2];
          }
          if (cVar13 == '\x04') {
            puVar12 = puRam0036f390 + 3;
            if ((int)puRam0036f390[3] < 1) {
              *puVar12 = 0;
              *(undefined1 *)(puRam0036f390 + 2) = 6;
            }
            else {
              *puVar12 = *puVar12 - 1;
            }
          }
          else {
            if (puRam0036f390 == (uint *)0x0) {
              cVar4 = '\x03';
            }
            else {
              cVar4 = (char)puRam0036f390[2];
            }
            if (cVar4 != '\x06') {
              if (puRam0036f390 == (uint *)0x0) {
                cVar4 = '\x03';
              }
              else {
                cVar4 = (char)puRam0036f390[2];
              }
              if (cVar4 != '\x05') {
                return;
              }
            }
            cVar4 = FUN_0017e8d0();
            if (cVar4 == '\x05') {
              FUN_001e9120(0x10);
              *(undefined4 *)(iRam0036f804 + 0x29c) = 1;
            }
            else {
              *(undefined1 *)(puRam0036f390 + 2) = 5;
              lVar5 = thunk_FUN_001e8fc0();
              if (lVar5 == 0) {
                cVar4 = FUN_0017e8d0();
                if (cVar4 == '\x01') {
                  cVar4 = FUN_0017e890();
                  if (cVar4 == '\x05') {
                    if ((puRam0036f390[1] & 2) != 0) {
                      if (puRam0036f390[4] == 0) {
                        puRam0036f390[4] = *(uint *)(puRam0036f390[0xd] + 0x8a0);
                      }
                      else if ((int)puRam0036f390[4] < (int)*(uint *)(puRam0036f390[0xd] + 0x8a0)) {
                        puRam0036f390[4] = *(uint *)(puRam0036f390[0xd] + 0x8a0);
                      }
                    }
                    if ((puRam0036f390[1] & 4) != 0) {
                      if (puRam0036f390[5] == 0) {
                        puRam0036f390[5] = *(uint *)(puRam0036f390[0x10] + 0x4b8);
                      }
                      else if ((int)*(uint *)(puRam0036f390[0x10] + 0x4b8) < (int)puRam0036f390[5])
                      {
                        puRam0036f390[5] = *(uint *)(puRam0036f390[0x10] + 0x4b8);
                      }
                    }
                  }
                  else {
                    cVar4 = FUN_0017e890();
                    if (cVar4 == '\0') {
                      FUN_001dbfe0();
                    }
                  }
                  uVar9 = FUN_001c1890(0);
                  FUN_001b6850(uVar9);
                }
                else {
                  cVar4 = FUN_0017e8d0();
                  if (cVar4 == '\x02') {
                    if ((*puRam0036f390 & 0x410) == 0) {
                      iVar1 = *piRam0036f34c;
                      uVar11 = puRam0036f390[0x10];
                      FUN_00176da0();
                      FUN_0017def0();
                      *puRam0036f390 = *puRam0036f390 | 0x40000;
                      uVar2 = *(undefined4 *)(uVar11 + 0x4b8);
                      uVar9 = FUN_00176da0();
                      uVar6 = FUN_00178390();
                      uVar7 = FUN_0017e8d0();
                      uVar8 = FUN_0017e890();
                      FUN_00176960(uVar9,uVar6,iVar1 + 0x1d8,uVar2,0,uVar7,uVar8,0);
                    }
                  }
                  else {
                    cVar4 = FUN_0017e8d0();
                    if ((cVar4 == '\x03') && ((*puRam0036f390 & 0x410) == 0)) {
                      uVar11 = puRam0036f390[0xd];
                      iVar1 = *piRam0036f34c;
                      uVar3 = puRam0036f390[0x10];
                      FUN_00176da0();
                      FUN_0017db80();
                      *puRam0036f390 = *puRam0036f390 | 0x40000;
                      uVar2 = *(undefined4 *)(uVar3 + 0x4b8);
                      uVar9 = FUN_00176da0();
                      uVar6 = FUN_00178390();
                      uVar7 = FUN_001e0530(uVar11);
                      uVar8 = FUN_0017e8d0();
                      uVar10 = FUN_0017e890();
                      FUN_00176960(uVar9,uVar6,iVar1 + 0x1d8,uVar2,uVar7,uVar8,uVar10,0);
                    }
                  }
                }
                FUN_00176fc0(*puRam0036f390);
              }
              FUN_001e9120(0x40);
              FUN_001e9120(0x100);
            }
          }
        }
      }
    }
  }
  return;
}

// 0x001dcaf0  size 0xdc
void FUN_001dcaf0(void)

{
  int iVar1;
  int iVar2;
  
  if (iGpffff8ca0 != 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(iGpffff8ca0 + iVar1 + 0x28) != 0) {
        FUN_00100290();
      }
      if (*(int *)(iGpffff8ca0 + iVar1 + 0x34) != 0) {
        FUN_00100290();
      }
      if (*(int *)(iGpffff8ca0 + iVar1 + 0x40) != 0) {
        FUN_00100290();
      }
      if (*(int *)(iGpffff8ca0 + iVar1 + 0x1c) != 0) {
        FUN_00100290();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < 3);
    if (iGpffff8ca0 != 0) {
      FUN_00100290();
      iGpffff8ca0 = 0;
    }
  }
  return;
}

// 0x001dcbd0  size 0x1c
void FUN_001dcbd0(int param_1,int param_2)

{
  FUN_0017d9e0(1,*(undefined4 *)(param_2 * 0xc + param_1 + 4));
  return;
}

// 0x001dcbf0  size 0x40
void FUN_001dcbf0(int param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_2 * 0xc + param_1 + -8);
  }
  FUN_0017d9e0(1,*(int *)((int)param_2 * 0xc + param_1 + 4) - iVar1);
  return;
}

// 0x001dcc30  size 0x18
undefined4 FUN_001dcc30(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0xc + param_1 + 4);
}

// 0x001dcc50  size 0xc
void FUN_001dcc50(undefined4 param_1)

{
  *(undefined4 *)(iGpffff8ca0 + 0x14) = param_1;
  return;
}

// 0x001dcc60  size 0xc
undefined4 FUN_001dcc60(void)

{
  return *(undefined4 *)(iGpffff8ca0 + 0x14);
}

// 0x001dcc70  size 0x50
void FUN_001dcc70(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 0x4b8) == 0) {
    FUN_0017d9e0(0,*(undefined4 *)(param_1 + 0x4b0),param_2,param_3,param_4);
  }
  else {
    FUN_0017d9e0(1,*(int *)(param_1 + 0x4b8),param_2,param_3,param_4);
  }
  return;
}

// 0x001dccc0  size 0x8
undefined4 FUN_001dccc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4b8);
}

// 0x001dccd0  size 0x8
undefined4 FUN_001dccd0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4b0);
}

// 0x001dcce0  size 0x24
void FUN_001dcce0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0xffffffff;
  return;
}

// 0x001dcd10  size 0xc
void FUN_001dcd10(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 0x001dcd20  size 0xa0
void FUN_001dcd20(int *param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = FUN_00176fd0();
  *param_1 = *param_1 - ((int)param_2 * iVar1) / 100;
  if (param_3 == 0) {
    if (*param_1 < 0) {
      *param_1 = 0;
    }
  }
  else if ((param_2 != 0) && (*param_1 < 1)) {
    *param_1 = 1;
  }
  return;
}

// 0x001dcdc0  size 0x8
undefined4 FUN_001dcdc0(undefined4 *param_1)

{
  return *param_1;
}

// 0x001dcdd0  size 0x8
int FUN_001dcdd0(int param_1)

{
  return param_1 + 0x14;
}

// 0x001dcde0  size 0x5c4
void FUN_001dcde0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  
  iGpffff8ca0 = 0;
  sVar10 = (short)param_1;
  if ((param_2 & 1) != 0) {
    uVar2 = FUN_00100680(0x4c,param_3);
    iGpffff8ca0 = (int)uVar2;
    FUN_001325d0(uVar2,0,0x4c);
    FUN_001dd3b0(param_1,param_3);
    lVar9 = (long)sVar10;
    *(uint *)(iGpffff8ca0 + 4) = *(uint *)(iGpffff8ca0 + 4) | 1;
    if (lVar9 == 1) {
      *(uint *)(iGpffff8ca0 + 4) = *(uint *)(iGpffff8ca0 + 4) | 0x80;
    }
    lVar8 = 0;
    if (0 < lVar9) {
      iVar7 = 0;
      do {
        uVar1 = FUN_00100680(8,param_3);
        *(undefined4 *)(iGpffff8ca0 + iVar7 + 0x28) = uVar1;
        FUN_001325d0(*(undefined4 *)(iGpffff8ca0 + iVar7 + 0x28),0,8);
        if (lVar8 == 0) {
          puVar4 = *(undefined4 **)(iGpffff8ca0 + iVar7 + 0x28);
          *puVar4 = param_4;
          puVar4[1] = param_4;
        }
        else {
          puVar4 = *(undefined4 **)(iGpffff8ca0 + iVar7 + 0x28);
          *puVar4 = 5000000;
          puVar4[1] = 5000000;
        }
        lVar8 = (long)((int)lVar8 + 1);
        iVar7 = iVar7 + 4;
      } while (lVar8 < lVar9);
    }
  }
  if ((param_2 & 2) != 0) {
    if (iGpffff8ca0 == 0) {
      uVar2 = FUN_00100680(0x4c,param_3);
      iGpffff8ca0 = (int)uVar2;
      FUN_001325d0(uVar2,0,0x4c);
      FUN_001dd3b0(param_1,param_3);
    }
    lVar9 = 0;
    *(uint *)(iGpffff8ca0 + 4) = *(uint *)(iGpffff8ca0 + 4) | 2;
    if (0 < (long)sVar10) {
      iVar7 = 0;
      do {
        uVar1 = FUN_00100680(0x8b8,param_3);
        *(undefined4 *)(iGpffff8ca0 + iVar7 + 0x34) = uVar1;
        FUN_001325d0(*(undefined4 *)(iGpffff8ca0 + iVar7 + 0x34),0,0x8b8);
        iVar5 = 0;
        puVar4 = *(undefined4 **)(iGpffff8ca0 + iVar7 + 0x34);
        puVar4[0x228] = 0;
        puVar4[0x22b] = 0;
        puVar4[0x22c] = 0xffffffff;
        puVar4[0x22d] = 0;
        puVar4[0x229] = 0;
        puVar4[0x22a] = 0;
        puVar3 = puVar4;
        do {
          puVar3[0x3e] = 0xffffffff;
          puVar3[0x40] = 0;
          iVar5 = iVar5 + 8;
          puVar3[0x41] = 0;
          puVar3[0x42] = 0;
          puVar3[0x43] = 0;
          puVar3[0x44] = 0;
          puVar3[0x3f] = 0xffffffff;
          puVar3[0x45] = 0xffffffff;
          puVar3[0x47] = 0;
          puVar3[0x48] = 0;
          puVar3[0x49] = 0;
          puVar3[0x4a] = 0;
          puVar3[0x4b] = 0;
          puVar3[0x46] = 0xffffffff;
          puVar3[0x4c] = 0xffffffff;
          puVar3[0x4e] = 0;
          puVar3[0x4f] = 0;
          puVar3[0x50] = 0;
          puVar3[0x51] = 0;
          puVar3[0x52] = 0;
          puVar3[0x4d] = 0xffffffff;
          puVar3[0x53] = 0xffffffff;
          puVar3[0x55] = 0;
          puVar3[0x56] = 0;
          puVar3[0x57] = 0;
          puVar3[0x58] = 0;
          puVar3[0x59] = 0;
          puVar3[0x54] = 0xffffffff;
          puVar3[0x5a] = 0xffffffff;
          puVar3[0x5c] = 0;
          puVar3[0x5d] = 0;
          puVar3[0x5e] = 0;
          puVar3[0x5f] = 0;
          puVar3[0x60] = 0;
          puVar3[0x5b] = 0xffffffff;
          puVar3[0x61] = 0xffffffff;
          puVar3[99] = 0;
          puVar3[100] = 0;
          puVar3[0x65] = 0;
          puVar3[0x66] = 0;
          puVar3[0x67] = 0;
          puVar3[0x62] = 0xffffffff;
          puVar3[0x68] = 0xffffffff;
          puVar3[0x6a] = 0;
          puVar3[0x6b] = 0;
          puVar3[0x6c] = 0;
          puVar3[0x6d] = 0;
          puVar3[0x6e] = 0;
          puVar3[0x69] = 0xffffffff;
          puVar3[0x6f] = 0xffffffff;
          puVar3[0x71] = 0;
          puVar3[0x72] = 0;
          puVar3[0x73] = 0;
          puVar3[0x74] = 0;
          puVar3[0x75] = 0;
          puVar3[0x70] = 0xffffffff;
          puVar3 = puVar3 + 0x38;
        } while (iVar5 < 0x3e);
        lVar9 = (long)((int)lVar9 + 1);
        iVar7 = iVar7 + 4;
        puVar4[iVar5 * 7 + 0x3e] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x40] = 0;
        puVar4[iVar5 * 7 + 0x41] = 0;
        puVar4[iVar5 * 7 + 0x42] = 0;
        puVar4[iVar5 * 7 + 0x43] = 0;
        puVar4[iVar5 * 7 + 0x44] = 0;
        puVar4[iVar5 * 7 + 0x3f] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x45] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x47] = 0;
        puVar4[iVar5 * 7 + 0x48] = 0;
        puVar4[iVar5 * 7 + 0x49] = 0;
        puVar4[iVar5 * 7 + 0x4a] = 0;
        puVar4[iVar5 * 7 + 0x4b] = 0;
        puVar4[iVar5 * 7 + 0x46] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x4c] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x4e] = 0;
        puVar4[iVar5 * 7 + 0x4f] = 0;
        puVar4[iVar5 * 7 + 0x50] = 0;
        puVar4[iVar5 * 7 + 0x51] = 0;
        puVar4[iVar5 * 7 + 0x52] = 0;
        puVar4[iVar5 * 7 + 0x4d] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x53] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x55] = 0;
        puVar4[iVar5 * 7 + 0x56] = 0;
        puVar4[iVar5 * 7 + 0x57] = 0;
        puVar4[iVar5 * 7 + 0x58] = 0;
        puVar4[iVar5 * 7 + 0x59] = 0;
        puVar4[iVar5 * 7 + 0x54] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x5a] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x5c] = 0;
        puVar4[iVar5 * 7 + 0x5d] = 0;
        puVar4[iVar5 * 7 + 0x5e] = 0;
        puVar4[iVar5 * 7 + 0x5f] = 0;
        puVar4[iVar5 * 7 + 0x60] = 0;
        puVar4[iVar5 * 7 + 0x5b] = 0xffffffff;
        puVar4[iVar5 * 7 + 0x61] = 0xffffffff;
        puVar4[iVar5 * 7 + 99] = 0;
        puVar4[iVar5 * 7 + 100] = 0;
        puVar4[iVar5 * 7 + 0x65] = 0;
        puVar4[iVar5 * 7 + 0x66] = 0;
        puVar4[iVar5 * 7 + 0x67] = 0;
        puVar4[iVar5 * 7 + 0x62] = 0xffffffff;
        puVar4[1] = 0;
        *puVar4 = 0;
      } while (lVar9 < sVar10);
    }
  }
  if ((param_2 & 4) != 0) {
    if (iGpffff8ca0 == 0) {
      uVar2 = FUN_00100680(0x4c,param_3);
      iGpffff8ca0 = (int)uVar2;
      FUN_001325d0(uVar2,0,0x4c);
      FUN_001dd3b0(param_1,param_3);
    }
    lVar9 = 0;
    *(uint *)(iGpffff8ca0 + 4) = *(uint *)(iGpffff8ca0 + 4) | 4;
    if (0 < (long)sVar10) {
      iVar7 = 0;
      do {
        uVar1 = FUN_00100680(0x4c0,param_3);
        *(undefined4 *)(iGpffff8ca0 + iVar7 + 0x40) = uVar1;
        FUN_001325d0(*(undefined4 *)(iGpffff8ca0 + iVar7 + 0x40),0,0x4c0);
        iVar5 = 0;
        puVar4 = *(undefined4 **)(iGpffff8ca0 + iVar7 + 0x40);
        puVar4[300] = 0;
        puVar4[0x12d] = 0xffffffff;
        puVar4[0x12e] = 0;
        puVar4[0x12f] = 0;
        do {
          iVar6 = 0;
          puVar3 = puVar4;
          do {
            *puVar3 = 0xffffffff;
            puVar3[1] = 0;
            iVar6 = iVar6 + 5;
            puVar3[2] = 0;
            puVar3[3] = 0xffffffff;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0xffffffff;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3[9] = 0xffffffff;
            puVar3[10] = 0;
            puVar3[0xb] = 0;
            puVar3[0xc] = 0xffffffff;
            puVar3[0xd] = 0;
            puVar3[0xe] = 0;
            puVar3 = puVar3 + 0xf;
          } while (iVar6 < 10);
          iVar5 = iVar5 + 1;
          puVar4 = puVar4 + 0x1e;
        } while (iVar5 < 10);
        lVar9 = (long)((int)lVar9 + 1);
        iVar7 = iVar7 + 4;
      } while (lVar9 < sVar10);
    }
  }
  if ((param_2 & 8) != 0) {
    *(uint *)(iGpffff8ca0 + 4) = *(uint *)(iGpffff8ca0 + 4) | 8;
  }
  if ((param_2 & 0x10) != 0) {
    *(uint *)(iGpffff8ca0 + 4) = *(uint *)(iGpffff8ca0 + 4) | 0x10;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(iGpffff8ca0 + 4) = *(uint *)(iGpffff8ca0 + 4) | 0x40;
  }
  if (iGpffff8ca0 == 0) {
    uVar2 = FUN_00100680(0x4c,param_3);
    iGpffff8ca0 = (int)uVar2;
    FUN_001325d0(uVar2,0,0x4c);
    FUN_001dd3b0(param_1,param_3);
  }
  return;
}

// 0x001dd3b0  size 0x1c4
void FUN_001dd3b0(short param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = 0;
  puGpffff8ca0[10] = 0;
  puGpffff8ca0[0xd] = 0;
  puGpffff8ca0[0x10] = 0;
  *(undefined1 *)(puGpffff8ca0 + 6) = 0xff;
  puGpffff8ca0[0xb] = 0;
  puGpffff8ca0[0xe] = 0;
  puGpffff8ca0[0x11] = 0;
  *(undefined1 *)((int)puGpffff8ca0 + 0x19) = 0xff;
  puGpffff8ca0[0xc] = 0;
  puGpffff8ca0[0xf] = 0;
  puGpffff8ca0[0x12] = 0;
  *(undefined1 *)((int)puGpffff8ca0 + 0x1a) = 0xff;
  if (0 < (long)param_1) {
    iVar6 = 0;
    do {
      uVar2 = FUN_00100680(0x30,param_2);
      *(undefined4 *)((int)puGpffff8ca0 + iVar6 + 0x1c) = uVar2;
      FUN_001325d0(*(undefined4 *)((int)puGpffff8ca0 + iVar6 + 0x1c),0,0x30);
      puVar1 = *(undefined4 **)((int)puGpffff8ca0 + iVar6 + 0x1c);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
      puVar1[8] = 0;
      *(undefined1 *)(puVar1 + 9) = 0;
      puVar1[10] = 0;
      lVar5 = FUN_001834d0();
      if (lVar5 != 0) {
        uVar3 = FUN_0017e6e0();
        uVar4 = FUN_0017e720();
        puVar1[6] = (&PTR_DAT_0031bd90)[(uVar3 & 0xff) + (uVar4 & 0xff) * 2];
      }
      lVar7 = (long)((int)lVar7 + 1);
      puVar1[3] = 0;
      puVar1[4] = 0;
      iVar6 = iVar6 + 4;
    } while (lVar7 < param_1);
  }
  *puGpffff8ca0 = 0;
  puGpffff8ca0[1] = 0;
  *(undefined1 *)(puGpffff8ca0 + 2) = 0;
  puGpffff8ca0[3] = 0;
  puGpffff8ca0[5] = 0;
  puGpffff8ca0[4] = 0;
  *(undefined1 *)((int)puGpffff8ca0 + 0x1b) = 0;
  return;
}

// 0x001dd580  size 0x62c
void FUN_001dd580(float param_1,undefined4 *param_2,ushort param_3,int param_4,long param_5,
                 short param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float unaff_f20;
  float fVar9;
  float unaff_f22;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [2];
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
  undefined2 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar4 = 0;
  uStack_24 = 0x3f800000;
  fVar9 = 0.0;
  uStack_14 = 0x3f800000;
  uStack_44 = 0x3f800000;
  uStack_54 = 0x3f800000;
  uStack_64 = 0x3f800000;
  fVar8 = 0.0;
  if (cGpffff8b44 != '\x02') {
    FUN_001da8a0(&uStack_40);
    *param_2 = uStack_40;
    *(undefined2 *)(param_2 + 1) = uStack_3c;
    param_2[4] = uStack_30;
    param_2[5] = uStack_2c;
    param_2[6] = uStack_28;
    param_2[7] = uStack_24;
    param_2[8] = uStack_20;
    param_2[9] = uStack_1c;
    param_2[10] = uStack_18;
    param_2[0xb] = uStack_14;
    param_2[0xc] = fStack_10;
    param_2[0xd] = fStack_c;
    param_2[0xe] = fStack_8;
    return;
  }
  if (param_1 != 0.0) {
    fVar7 = ((param_1 * 1000.0) / 216000.0) * 60.0 * 0.5;
    unaff_f22 = fVar7 * 2.0;
    iVar4 = (int)(fVar7 / 2.5);
  }
  if (param_5 == 0) {
    iVar4 = (param_4 + 2) - iVar4;
    lVar6 = (long)(short)param_3;
    iVar2 = 0;
    lVar3 = (long)**(short **)(piGpffff8b40[1] + (uint)param_3 * 4);
    fVar7 = 0.0;
    do {
      lVar5 = (long)iVar4;
      uStack_54 = uStack_44;
      if (lVar3 <= lVar5) {
        if (*piGpffff8b40 <= (short)lVar6 + 1) goto LAB_001dd838;
        uVar1 = (int)lVar6 + 1;
        lVar5 = (long)(iVar4 - (int)lVar3);
        lVar6 = (long)(short)uVar1;
        lVar3 = (long)**(short **)(piGpffff8b40[1] + (uVar1 & 0xffff) * 4);
      }
      FUN_001d7dc0(auStack_b0,3,lVar6,(short)lVar5);
      uStack_50 = auStack_b0[0];
      uStack_48 = uStack_a8;
      uStack_44 = uStack_a4;
      uStack_4c = 0;
      if (iVar2 != 0) {
        FUN_00163b40(&uStack_c0,&uStack_50,&uStack_60);
        uStack_70 = uStack_c0;
        uStack_6c = uStack_bc;
        uStack_68 = uStack_b8;
        uStack_64 = uStack_b4;
        unaff_f20 = (float)FUN_00120dc0(uStack_b8,uStack_c0);
        if (iVar2 == 1) {
          fVar7 = unaff_f20;
        }
        fVar8 = fVar8 + (unaff_f20 - fVar7);
        fVar7 = (float)FUN_001dac80(&uStack_70);
        fVar9 = fVar9 + fVar7;
        if ((param_1 != 0.0) && (unaff_f22 < fVar9)) goto LAB_001dd838;
      }
      if ((param_1 == 0.0) && ((param_7 <= lVar5 && ((short)lVar6 == param_6)))) goto LAB_001dd838;
      iVar4 = (int)lVar5 + 1;
      iVar2 = iVar2 + 1;
      uStack_60 = uStack_50;
      uStack_5c = uStack_4c;
      uStack_58 = uStack_48;
      fVar7 = unaff_f20;
    } while( true );
  }
  lVar6 = (long)(short)param_3;
  iVar4 = param_4 + -1 + iVar4;
  iVar2 = 0;
  fVar7 = 0.0;
  do {
    lVar5 = (long)iVar4;
    uStack_54 = uStack_44;
    if (lVar5 < 1) {
      if ((short)lVar6 + -1 < 0) {
        FUN_001d7dc0(&uStack_80,3,lVar6,(short)iVar4);
        uStack_50 = uStack_80;
        uStack_4c = uStack_7c;
        uStack_48 = uStack_78;
        uStack_44 = uStack_74;
LAB_001dd838:
        uStack_3c = (undefined2)lVar6;
        uStack_40 = (undefined4)lVar5;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uStack_28 = uStack_48;
        uStack_24 = uStack_44;
        fStack_10 = fVar9;
        fStack_c = (float)FUN_001dad00((fVar8 * 180.0) / 3.1415927);
        fVar8 = (float)FUN_00120a68(fStack_c);
        if (1.0 < fVar8) {
          fStack_8 = (fStack_10 * 360.0) / (fStack_c * 2.0 * 3.1415927);
          if ((300.0 < fStack_8) || (fStack_8 < -300.0)) {
            fStack_8 = 1000.0;
          }
        }
        else {
          fStack_8 = 1000.0;
        }
        *param_2 = uStack_40;
        *(undefined2 *)(param_2 + 1) = uStack_3c;
        param_2[4] = uStack_30;
        param_2[5] = uStack_2c;
        param_2[6] = uStack_28;
        param_2[7] = uStack_24;
        param_2[8] = uStack_20;
        param_2[9] = uStack_1c;
        param_2[10] = uStack_18;
        param_2[0xb] = uStack_14;
        param_2[0xc] = fStack_10;
        param_2[0xd] = fStack_c;
        param_2[0xe] = fStack_8;
        return;
      }
      uVar1 = (int)lVar6 - 1;
      lVar6 = (long)(short)uVar1;
      lVar5 = (long)(iVar4 + **(short **)(piGpffff8b40[1] + (uVar1 & 0xffff) * 4) + -1);
    }
    FUN_001d7dc0(auStack_90,3,lVar6,(short)lVar5);
    uStack_50 = auStack_90[0];
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_4c = 0;
    if (iVar2 != 0) {
      FUN_00163b40(&uStack_a0,&uStack_50,&uStack_60);
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      unaff_f20 = (float)FUN_00120dc0(uStack_98,uStack_a0);
      if (iVar2 == 1) {
        fVar7 = unaff_f20;
      }
      fVar8 = fVar8 + (unaff_f20 - fVar7);
      fVar7 = (float)FUN_001dac80(&uStack_70);
      fVar9 = fVar9 + fVar7;
      if ((param_1 != 0.0) && (unaff_f22 < fVar9)) goto LAB_001dd838;
    }
    if ((param_1 == 0.0) && ((lVar5 <= param_7 && ((short)lVar6 == param_6)))) goto LAB_001dd838;
    iVar4 = (int)lVar5 + -1;
    iVar2 = iVar2 + 1;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    uStack_58 = uStack_48;
    fVar7 = unaff_f20;
  } while( true );
}

// 0x001ddbc0  size 0x1d4
undefined4 FUN_001ddbc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined2 uStack_30;
  undefined2 uStack_20;
  
  lVar8 = FUN_00177700();
  uVar11 = 0;
  if (lVar8 != 0) {
    uVar3 = FUN_001777a0();
    iVar14 = (int)lVar8;
    iVar1 = *(int *)(iVar14 + 0x24);
    piVar9 = (int *)(iVar14 + (uVar3 & 0xff) * 0x10);
    if ((param_2 < *(int *)(iVar14 + 0x20)) && (param_1 < *piVar9)) {
      puVar10 = (undefined4 *)(piVar9[1] + param_1 * 0x10);
      puVar4 = (undefined4 *)(piVar9[3] + param_1 * 0x10);
      iVar14 = puVar10[1];
      uVar12 = *puVar4;
      iVar13 = puVar4[1];
      uStack_20 = (undefined2)*puVar10;
      iVar5 = FUN_00177470(uStack_20);
      uStack_30 = (undefined2)uVar12;
      iVar5 = iVar14 * 0x20 + iVar5;
      iVar6 = FUN_00177470(uStack_30);
      puVar4 = (undefined4 *)(iVar1 + param_2 * 0x14);
      uVar12 = *puVar4;
      iVar1 = puVar4[1];
      uVar2 = puVar4[2];
      iVar14 = puVar4[3];
      iVar6 = iVar13 * 0x20 + iVar6;
      lVar8 = FUN_00177750();
      if (lVar8 == 0) {
        iVar13 = FUN_00177470((short)uVar12);
        iVar7 = FUN_00177470((short)uVar2);
        if ((iVar5 < iVar1 * 0x20 + iVar13) && (iVar14 * 0x20 + iVar7 < iVar6)) {
          uVar11 = 1;
        }
      }
      else {
        iVar13 = FUN_00177470((short)uVar12);
        iVar7 = FUN_00177470((short)uVar2);
        if ((iVar14 * 0x20 + iVar7 < iVar5) && (iVar6 < iVar1 * 0x20 + iVar13)) {
          uVar11 = 1;
        }
      }
    }
  }
  return uVar11;
}

// 0x001ddda0  size 0xa0
void FUN_001ddda0(int param_1,short *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = *piGpffff8b40;
  *param_2 = -1;
  *param_3 = 0xffff;
  if (param_1 < 0) {
    param_1 = 0;
  }
  lVar4 = 0;
  if (0 < (long)iVar1) {
    do {
      iVar3 = (int)**(short **)(piGpffff8b40[1] + ((uint)lVar4 & 0xffff) * 4);
      param_1 = param_1 + iVar3 * -0x20;
      if (param_1 < 0) {
        param_1 = param_1 + iVar3 * 0x20;
        *param_2 = (short)lVar4;
        uVar2 = (undefined2)(param_1 >> 5);
        if (param_1 < 0) {
          uVar2 = (undefined2)(param_1 + 0x1f >> 5);
        }
        *param_3 = uVar2;
        return;
      }
      lVar4 = (long)(short)((short)lVar4 + 1);
    } while (lVar4 < iVar1);
  }
  return;
}

// 0x001dde40  size 0x34
int FUN_001dde40(undefined2 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00177470(param_1);
  return param_2 * 0x20 + iVar1;
}

// 0x001dde80  size 0x30
int FUN_001dde80(undefined2 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00177470(param_1);
  return param_2 + iVar1;
}

// 0x001ddeb0  size 0x440
float FUN_001ddeb0(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uStack_f0;
  int iStack_ec;
  uint uStack_e8;
  int iStack_e4;
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
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_f0._0_2_ = (undefined2)param_1;
  iStack_e4 = (int)((ulong)param_2 >> 0x20);
  iStack_ec = (int)((ulong)param_1 >> 0x20);
  iVar3 = FUN_00177470((undefined2)uStack_f0);
  uStack_e8._0_2_ = (undefined2)param_2;
  iVar3 = iStack_ec * 0x20 + iVar3;
  iVar4 = FUN_00177470((undefined2)uStack_e8);
  iVar4 = iStack_e4 * 0x20 + iVar4;
  fVar9 = 0.0;
  uStack_f0 = (uint)param_1;
  uStack_e8 = (uint)param_2;
  if (iVar4 < iVar3) {
    uVar2 = uStack_f0;
    iVar3 = iStack_ec;
  }
  else {
    if (iVar4 <= iVar3) {
      return 0.0;
    }
    uVar2 = uStack_e8;
    uStack_e8 = uStack_f0;
    iVar3 = iStack_e4;
    iStack_e4 = iStack_ec;
  }
  sVar5 = (short)uStack_e8;
  if (uStack_e8 == uVar2) {
    FUN_001d7100(&uStack_40,3,sVar5,(short)iStack_e4);
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    for (; iStack_e4 <= iVar3; iStack_e4 = iStack_e4 + 1) {
      FUN_001d7100(&uStack_50,3,sVar5,(short)iStack_e4);
      uStack_10 = uStack_50;
      uStack_c = uStack_4c;
      uStack_8 = uStack_48;
      uStack_4 = uStack_44;
      fVar7 = (float)FUN_00132900(auStack_30,&uStack_10,&uStack_20);
      fVar9 = fVar9 + fVar7;
      uStack_20 = uStack_10;
      uStack_1c = uStack_c;
      uStack_18 = uStack_8;
      uStack_14 = uStack_4;
    }
  }
  else {
    sVar1 = **(short **)(*(int *)(iGpffff8b40 + 4) + (uStack_e8 & 0xffff) * 4);
    iVar4 = (int)sVar1;
    if ((long)sVar1 < 0) {
      iVar4 = iVar4 + 1;
    }
    if (iStack_e4 < iVar4 >> 1) {
      fVar7 = 0.0;
      FUN_001d7100(&uStack_60,3,sVar5,0);
      iVar4 = 1;
      uStack_20 = uStack_60;
      uStack_1c = uStack_5c;
      uStack_18 = uStack_58;
      uStack_14 = uStack_54;
      if (1 < iStack_e4) {
        do {
          FUN_001d7100(&uStack_70,3,sVar5,(short)iVar4);
          uStack_10 = uStack_70;
          uStack_c = uStack_6c;
          uStack_8 = uStack_68;
          uStack_4 = uStack_64;
          fVar9 = (float)FUN_00132900(auStack_30,&uStack_10,&uStack_20);
          iVar4 = iVar4 + 1;
          fVar7 = fVar7 + fVar9;
          uStack_20 = uStack_10;
          uStack_1c = uStack_c;
          uStack_18 = uStack_8;
          uStack_14 = uStack_4;
        } while (iVar4 < iStack_e4);
      }
      fVar9 = (float)FUN_00177490(uStack_e8);
      fVar9 = fVar9 - fVar7;
    }
    else {
      FUN_001d7100(&uStack_80,3,sVar5,(short)iStack_e4);
      uStack_20 = uStack_80;
      uStack_1c = uStack_7c;
      uStack_18 = uStack_78;
      uStack_14 = uStack_74;
      while (iStack_e4 = iStack_e4 + 1, (long)iStack_e4 < (long)sVar1) {
        FUN_001d7100(&uStack_90,3,sVar5,(short)iStack_e4);
        uStack_10 = uStack_90;
        uStack_c = uStack_8c;
        uStack_8 = uStack_88;
        uStack_4 = uStack_84;
        fVar7 = (float)FUN_00132900(auStack_30,&uStack_10,&uStack_20);
        fVar9 = fVar9 + fVar7;
        uStack_20 = uStack_10;
        uStack_1c = uStack_c;
        uStack_18 = uStack_8;
        uStack_14 = uStack_4;
      }
      FUN_001d7100(&uStack_a0,3,sVar5 + 1,0);
      uStack_10 = uStack_a0;
      uStack_c = uStack_9c;
      uStack_8 = uStack_98;
      uStack_4 = uStack_94;
      fVar7 = (float)FUN_00132900(auStack_30,&uStack_10,&uStack_20);
      fVar9 = fVar9 + fVar7;
    }
    sVar5 = **(short **)(*(int *)(iGpffff8b40 + 4) + (uVar2 & 0xffff) * 4);
    iVar4 = (int)sVar5;
    if ((long)sVar5 < 0) {
      iVar4 = iVar4 + 1;
    }
    uVar6 = (undefined2)uVar2;
    if (iVar4 >> 1 < iVar3) {
      fVar7 = 0.0;
      FUN_001d7100(&uStack_b0,3,uVar6,(short)iVar3);
      uStack_20 = uStack_b0;
      uStack_1c = uStack_ac;
      uStack_18 = uStack_a8;
      uStack_14 = uStack_a4;
      while (iVar3 = iVar3 + 1, (long)iVar3 < (long)sVar5) {
        FUN_001d7100(&uStack_c0,3,uVar6,(short)iVar3);
        uStack_10 = uStack_c0;
        uStack_c = uStack_bc;
        uStack_8 = uStack_b8;
        uStack_4 = uStack_b4;
        fVar8 = (float)FUN_00132900(auStack_30,&uStack_10,&uStack_20);
        fVar7 = fVar7 + fVar8;
        uStack_20 = uStack_10;
        uStack_1c = uStack_c;
        uStack_18 = uStack_8;
        uStack_14 = uStack_4;
      }
      fVar8 = (float)FUN_00177490(uVar2);
      fVar9 = fVar9 + (fVar8 - fVar7);
    }
    else {
      FUN_001d7100(&uStack_d0,3,uVar6,0);
      iVar4 = 1;
      uStack_20 = uStack_d0;
      uStack_1c = uStack_cc;
      uStack_18 = uStack_c8;
      uStack_14 = uStack_c4;
      if (0 < iVar3) {
        do {
          FUN_001d7100(&uStack_e0,3,uVar6,(short)iVar4);
          uStack_10 = uStack_e0;
          uStack_c = uStack_dc;
          uStack_8 = uStack_d8;
          uStack_4 = uStack_d4;
          fVar7 = (float)FUN_00132900(auStack_30,&uStack_10,&uStack_20);
          iVar4 = iVar4 + 1;
          fVar9 = fVar9 + fVar7;
          uStack_20 = uStack_10;
          uStack_1c = uStack_c;
          uStack_18 = uStack_8;
          uStack_14 = uStack_4;
        } while (iVar4 <= iVar3);
      }
    }
    while (uStack_e8 = uStack_e8 + 1, (int)uStack_e8 < (int)uVar2) {
      fVar7 = (float)FUN_00177490(uStack_e8);
      fVar9 = fVar9 + fVar7;
    }
  }
  return fVar9;
}

// 0x001de2f0  size 0x47c
void FUN_001de2f0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  
  iVar4 = FUN_00177210();
  iVar16 = 0;
  if (0 < iVar4) {
    do {
      uVar9 = FUN_001dc200((char)iVar16);
      uVar10 = FUN_001ca6b0(iVar16);
      fVar18 = (float)FUN_001ca7c0(uVar10);
      iVar5 = FUN_001ca760(uVar10);
      uVar1 = *(uint *)(iVar5 + 0x60);
      puVar8 = (undefined4 *)uVar9;
      if ((uVar1 & 0x20) != 0) {
        puVar8[3] = puVar8[3] + 1;
      }
      if ((uVar1 & 0x10) != 0) {
        puVar8[4] = puVar8[4] + 1;
      }
      iVar5 = FUN_001dc190();
      fVar17 = (float)puVar8[1];
      fVar20 = fVar18 + 0.0;
      iVar6 = FUN_001dc190();
      puVar8[1] = (fVar17 * (float)(iVar5 + -1) + fVar20) / (float)iVar6;
      if ((float)puVar8[2] < fVar18) {
        puVar8[2] = fVar18;
      }
      uVar19 = FUN_001ca6e0(uVar10);
      *puVar8 = uVar19;
      uVar11 = FUN_001ca730(uVar10);
      if ((uVar11 & 0x100) == 0) {
        piVar7 = (int *)FUN_001dcdd0(uVar9);
        if (piVar7[1] != 0) {
          lVar12 = FUN_00177750();
          iVar5 = FUN_001ca6f0(uVar10);
          fVar18 = (float)FUN_001ca7c0(uVar10);
          fVar18 = (fVar18 * fVar18 * 0.004) / 0.078125;
          if (lVar12 == 0) {
            fVar18 = (float)iVar5 + fVar18;
          }
          else {
            fVar18 = (float)iVar5 - fVar18;
          }
          iVar5 = (int)fVar18;
          lVar12 = FUN_00177750();
          if (lVar12 == 0) {
            iVar6 = *piVar7;
            if ((iVar6 != 0) && (iVar5 < iVar6)) {
              iVar5 = iVar6;
            }
            *(undefined1 *)(piVar7 + 2) = 0;
            cVar15 = '\0';
            piVar7[3] = 0;
            iVar6 = 0;
            *(undefined1 *)(piVar7 + 4) = 0;
            piVar7[5] = 0;
            piVar14 = piVar7;
            while( true ) {
              piVar13 = (int *)(piVar7[1] + iVar6);
              iVar2 = *piVar13;
              iVar3 = piVar13[1];
              if (iVar2 == -1) break;
              if ((iVar2 <= iVar5) && (iVar5 <= iVar3)) {
                *(char *)(piVar14 + 2) = (char)piVar13[2];
                cVar15 = cVar15 + '\x01';
                piVar14[3] = (int)((float)(iVar5 - iVar2) / (float)(iVar3 - iVar2));
                piVar14 = piVar14 + 2;
                if ('\x01' < cVar15) break;
              }
              iVar6 = iVar6 + 0xc;
            }
          }
          else {
            iVar6 = *piVar7;
            if ((iVar6 != 0) && (iVar6 < iVar5)) {
              iVar5 = iVar6;
            }
            *(undefined1 *)(piVar7 + 2) = 0;
            cVar15 = '\0';
            piVar7[3] = 0;
            iVar6 = 0;
            *(undefined1 *)(piVar7 + 4) = 0;
            piVar7[5] = 0;
            piVar14 = piVar7;
            while( true ) {
              piVar13 = (int *)(piVar7[1] + iVar6);
              iVar2 = *piVar13;
              iVar3 = piVar13[1];
              if (iVar2 == -1) break;
              if ((iVar5 <= iVar2) && (iVar3 <= iVar5)) {
                *(char *)(piVar14 + 2) = (char)piVar13[2];
                cVar15 = cVar15 + '\x01';
                piVar14[3] = (int)((float)(iVar2 - iVar5) / (float)(iVar2 - iVar3));
                piVar14 = piVar14 + 2;
                if ('\x01' < cVar15) break;
              }
              iVar6 = iVar6 + 0xc;
            }
          }
          *piVar7 = iVar5;
        }
      }
      else {
        puVar8 = (undefined4 *)FUN_001dcdd0(uVar9);
        *(undefined1 *)(puVar8 + 2) = 0;
        puVar8[3] = 0;
        *(undefined1 *)(puVar8 + 4) = 0;
        puVar8[5] = 0;
        *puVar8 = 0;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar4);
  }
  return;
}

// 0x001de770  size 0x74
void FUN_001de770(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00177210();
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_001dc200((char)iVar4);
      iVar3 = FUN_001dcdd0(uVar2);
      *(undefined1 *)(iVar3 + 8) = 0;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined1 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001de7f0  size 0x168
void FUN_001de7f0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  uVar4 = FUN_00177040();
  switch(uVar4) {
  case 0:
    FUN_001df100(param_1);
    break;
  case 1:
    FUN_001deec0(param_1);
    break;
  case 2:
    FUN_001deaf0(param_1);
    break;
  case 3:
    FUN_001de960(param_1);
    break;
  case 4:
  case 5:
    FUN_001df560(param_1);
    break;
  case 6:
    uVar1 = FUN_001dc260(0);
    lVar2 = FUN_001dcdc0(uVar1);
    if (lVar2 < 1) {
      FUN_001dc2a0(param_1,0x22);
    }
    iVar5 = FUN_001dc220(0);
    if ((*(int *)(iVar5 + 0x4b8) != 0) && (lVar2 = FUN_00176f70(), lVar2 != 0)) {
      iVar5 = *(int *)(iVar5 + 0x4b8);
      iVar3 = FUN_00176f70();
      if (iVar5 < iVar3) {
        FUN_001dc2a0(param_1,0x81);
      }
      else {
        FUN_001dc2a0(param_1,0x82);
      }
    }
    break;
  case 7:
    iVar5 = FUN_001dc220(0);
    FUN_001dc240(0);
    if (*(int *)(iVar5 + 0x4b8) != 0) {
      FUN_001dc2a0(param_1,0x41);
    }
  }
  return;
}

// 0x001de960  size 0x188
void FUN_001de960(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = FUN_001dc240(0);
  iVar2 = FUN_001dc220(0);
  if (*(int *)(iVar2 + 0x4b8) != 0) {
    lVar4 = FUN_00176f80();
    if ((lVar4 == 0) || (lVar4 = FUN_00176f70(), lVar4 == 0)) {
      lVar4 = FUN_00176f80();
      if ((lVar4 == 0) && (lVar4 = FUN_00176f70(), lVar4 != 0)) {
        iVar1 = *(int *)(iVar2 + 0x4b8);
        iVar2 = FUN_00176f70();
        if (iVar1 < iVar2) {
          FUN_001dc2a0(param_1,0x81);
        }
        else {
          FUN_001dc2a0(param_1,0x242);
        }
      }
      else {
        lVar4 = FUN_00176f80();
        if ((lVar4 == 0) || (lVar4 = FUN_00176f70(), lVar4 != 0)) {
          FUN_001dc2a0(param_1,0x88);
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x8a0);
          iVar2 = FUN_00176f80();
          if (iVar1 < iVar2) {
            FUN_001dc2a0(param_1,0x242);
          }
          else {
            FUN_001dc2a0(param_1,0x41);
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x8a0);
      iVar3 = FUN_00176f80();
      if ((iVar1 < iVar3) ||
         (iVar1 = *(int *)(iVar2 + 0x4b8), iVar2 = FUN_00176f70(), iVar2 <= iVar1)) {
        FUN_001dc2a0(param_1,0x242);
      }
      else {
        FUN_001dc2a0(param_1,0xc1);
      }
    }
  }
  return;
}

// 0x001deaf0  size 0x3d0
void FUN_001deaf0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = FUN_00177210();
  if (lVar5 == 1) {
    iVar2 = FUN_001dc220(0);
    if (*(int *)(iVar2 + 0x4b8) != 0) {
      lVar5 = FUN_00176f70();
      if (lVar5 == 0) {
        FUN_001dc2a0(param_1,0x89);
      }
      else {
        iVar3 = FUN_00176f70();
        if (*(int *)(iVar2 + 0x4b8) < iVar3) {
          FUN_001dc2a0(param_1,0x89);
        }
        else {
          FUN_001dc2a0(param_1,0x8a);
        }
      }
    }
  }
  else {
    lVar5 = FUN_00177210();
    if (lVar5 == 2) {
      iVar2 = FUN_001dc220(0);
      iVar3 = FUN_001dc220(1);
      cVar1 = FUN_0017e8d0();
      if (cVar1 == '\x04') {
        iVar2 = *(int *)(iVar2 + 0x4b8);
        if ((iVar2 == 0) || (iVar4 = *(int *)(iVar3 + 0x4b8), iVar4 == 0)) {
          if ((iVar2 == 0) || (*(int *)(iVar3 + 0x4b8) != 0)) {
            if ((iVar2 == 0) && (*(int *)(iVar3 + 0x4b8) != 0)) {
              FUN_001dc2a0(param_1,0x8a);
            }
          }
          else {
            FUN_001dc2a0(param_1,0x89);
          }
        }
        else if (iVar2 < iVar4) {
          FUN_001dc2a0(param_1,0x89);
        }
        else if (iVar2 == iVar4) {
          FUN_001dc2a0(param_1,0x8c);
        }
        else {
          FUN_001dc2a0(param_1,0x8a);
        }
      }
      else {
        cVar1 = FUN_0017e8d0();
        if ((cVar1 == '\x02') || (cVar1 = FUN_0017e8d0(), cVar1 == '\x03')) {
          if (*(int *)(iVar2 + 0x4b8) != 0) {
            FUN_001dc2a0(param_1,0x88);
          }
        }
        else if (*(int *)(iVar2 + 0x4b8) != 0) {
          lVar5 = FUN_00176f70();
          if (lVar5 == 0) {
            iVar2 = *(int *)(iVar2 + 0x4b8);
            if ((iVar2 == 0) || (iVar4 = *(int *)(iVar3 + 0x4b8), iVar4 == 0)) {
              if ((iVar2 == 0) || (*(int *)(iVar3 + 0x4b8) != 0)) {
                if ((iVar2 == 0) && (*(int *)(iVar3 + 0x4b8) != 0)) {
                  FUN_001dc2a0(param_1,0x8a);
                }
              }
              else {
                FUN_001dc2a0(param_1,0x89);
              }
            }
            else if (iVar2 < iVar4) {
              FUN_001dc2a0(param_1,0x89);
            }
            else if (iVar2 == iVar4) {
              FUN_001dc2a0(param_1,0x8c);
            }
            else {
              FUN_001dc2a0(param_1,0x8a);
            }
          }
          else {
            iVar3 = FUN_00176f70();
            if (*(int *)(iVar2 + 0x4b8) < iVar3) {
              FUN_001dc2a0(param_1,0x89);
            }
            else {
              FUN_001dc2a0(param_1,0x8a);
            }
          }
        }
      }
    }
    else {
      lVar5 = FUN_00177210();
      if (lVar5 == 3) {
        iVar2 = FUN_001dc220(0);
        iVar3 = FUN_001dc220(1);
        iVar4 = FUN_001dc220(2);
        iVar2 = *(int *)(iVar2 + 0x4b8);
        if (((iVar2 != 0) && (iVar3 = *(int *)(iVar3 + 0x4b8), iVar3 != 0)) &&
           (iVar4 = *(int *)(iVar4 + 0x4b8), iVar4 != 0)) {
          if ((iVar2 < iVar3) && (iVar2 < iVar4)) {
            FUN_001dc2a0(param_1,0x89);
          }
          else if ((iVar2 == iVar3) && (iVar2 == iVar4)) {
            FUN_001dc2a0(param_1,0x8c);
          }
          else {
            FUN_001dc2a0(param_1,0x8a);
          }
        }
      }
    }
  }
  return;
}

// 0x001deec0  size 0x23c
void FUN_001deec0(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  lVar5 = FUN_00176f80();
  if (lVar5 == 0) {
    lVar5 = FUN_00177210();
    if (lVar5 == 1) {
      iVar6 = FUN_001dc220(0);
      if (*(int *)(iVar6 + 0x4b8) != 0) {
        FUN_001dc2a0(param_1,0x41);
      }
    }
    else {
      lVar5 = FUN_00177210();
      if (lVar5 == 2) {
        cVar2 = FUN_0017e8d0();
        if (cVar2 == '\x04') {
          iVar6 = FUN_001dc220(0);
          iVar3 = FUN_001dc220(1);
          iVar4 = FUN_001dc240(0);
          iVar7 = FUN_001dc240(1);
          if ((*(int *)(iVar6 + 0x4b8) != 0) && (*(int *)(iVar3 + 0x4b8) != 0)) {
            if (*(int *)(iVar7 + 0x8a0) < *(int *)(iVar4 + 0x8a0)) {
              FUN_001dc2a0(param_1,0x41);
            }
            else if (*(int *)(iVar4 + 0x8a0) == *(int *)(iVar7 + 0x8a0)) {
              FUN_001dc2a0(param_1,0x44);
            }
            else {
              FUN_001dc2a0(param_1,0x42);
            }
          }
        }
        else {
          iVar6 = FUN_001dc220(0);
          if (*(int *)(iVar6 + 0x4b8) != 0) {
            FUN_001dc2a0(param_1,0x41);
          }
        }
      }
    }
  }
  else {
    bVar1 = false;
    iVar3 = FUN_001dc240(0);
    iVar4 = FUN_001dc220(0);
    iVar7 = 0;
    iVar6 = iVar3;
    do {
      if (*(int *)(iVar6 + 0xf8) == -1) {
LAB_001def94:
        iVar6 = *(int *)(iVar3 + 0x8a0);
        goto LAB_001def98;
      }
      if (((*(uint *)(iVar6 + 0x10c) & 0xe) == 0) && ((*(uint *)(iVar6 + 0x10c) & 1) != 0)) {
        bVar1 = true;
        goto LAB_001def94;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x1c;
    } while (iVar7 < 0x46);
    iVar6 = *(int *)(iVar3 + 0x8a0);
LAB_001def98:
    iVar3 = FUN_00176f80();
    if (iVar6 < iVar3) {
      if (*(int *)(iVar4 + 0x4b8) != 0) {
        FUN_001dc2a0(param_1,0x242);
      }
    }
    else if (!bVar1) {
      FUN_001dc2a0(param_1,0x41);
    }
  }
  return;
}

// 0x001df100  size 0x458
void FUN_001df100(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = FUN_00177210();
  if (lVar5 == 2) {
    uVar6 = FUN_001dc260(0);
    uVar7 = FUN_001dc260(1);
    lVar5 = FUN_001dcdc0(uVar6);
    if ((lVar5 < 1) && (lVar5 = FUN_001dcdc0(uVar7), 0 < lVar5)) {
      FUN_001dc2a0(param_1,0x22);
    }
    else {
      lVar5 = FUN_001dcdc0(uVar6);
      if ((lVar5 < 1) && (lVar5 = FUN_001dcdc0(uVar7), lVar5 < 1)) {
        FUN_001dc2a0(param_1,0x24);
      }
      else {
        lVar5 = FUN_001dcdc0(uVar6);
        if ((lVar5 < 1) || (lVar5 = FUN_001dcdc0(uVar7), 0 < lVar5)) {
          iVar3 = FUN_001dc220(0);
          iVar4 = FUN_001dc220(1);
          iVar3 = *(int *)(iVar3 + 0x4b8);
          if ((iVar3 == 0) || (*(int *)(iVar4 + 0x4b8) != 0)) {
            if ((iVar3 == 0) && (*(int *)(iVar4 + 0x4b8) != 0)) {
              FUN_001dc2a0(param_1,0x82);
            }
            else if ((iVar3 != 0) && (iVar4 = *(int *)(iVar4 + 0x4b8), iVar4 != 0)) {
              if (iVar3 < iVar4) {
                FUN_001dc2a0(param_1,0x81);
              }
              else if (iVar3 == iVar4) {
                FUN_001dc2a0(param_1,0x84);
              }
              else {
                FUN_001dc2a0(param_1,0x82);
              }
            }
          }
          else {
            FUN_001dc2a0(param_1,0x81);
          }
        }
        else {
          FUN_001dc2a0(param_1,0x21);
        }
      }
    }
  }
  else {
    lVar5 = FUN_00177210();
    if (lVar5 == 3) {
      uVar6 = FUN_001dc260(0);
      uVar7 = FUN_001dc260(1);
      uVar8 = FUN_001dc260(2);
      lVar5 = FUN_001dcdc0(uVar7);
      if (((lVar5 < 1) && (lVar5 = FUN_001dcdc0(uVar8), lVar5 < 1)) &&
         (lVar5 = FUN_001dcdc0(uVar6), 0 < lVar5)) {
        FUN_001dc2a0(param_1,0x21);
      }
      else {
        lVar5 = FUN_001dcdc0(uVar7);
        if (((lVar5 < 1) && (lVar5 = FUN_001dcdc0(uVar8), lVar5 < 1)) &&
           (lVar5 = FUN_001dcdc0(uVar6), lVar5 < 1)) {
          FUN_001dc2a0(param_1,0x24);
        }
        else {
          lVar5 = FUN_001dcdc0(uVar6);
          if (lVar5 < 1) {
            FUN_001dc2a0(param_1,0x22);
          }
          else {
            iVar3 = FUN_001dc220(0);
            iVar4 = FUN_001dc220(1);
            iVar2 = FUN_001dc220(2);
            iVar3 = *(int *)(iVar3 + 0x4b8);
            if (iVar3 == 0) {
              if ((*(int *)(iVar4 + 0x4b8) != 0) || (*(int *)(iVar2 + 0x4b8) != 0)) {
                FUN_001dc2a0(param_1,0x82);
              }
            }
            else {
              iVar4 = *(int *)(iVar4 + 0x4b8);
              if ((iVar4 == 0) || (iVar1 = *(int *)(iVar2 + 0x4b8), iVar1 == 0)) {
                if (iVar4 == 0) {
                  iVar4 = *(int *)(iVar2 + 0x4b8);
                  if (iVar4 == 0) {
                    FUN_001dc2a0(param_1,0x81);
                  }
                  else if (iVar3 < iVar4) {
                    FUN_001dc2a0(param_1,0x81);
                  }
                  else if (iVar3 == iVar4) {
                    FUN_001dc2a0(param_1,0x84);
                  }
                  else {
                    FUN_001dc2a0(param_1,0x82);
                  }
                }
                else if (iVar3 < iVar4) {
                  FUN_001dc2a0(param_1,0x81);
                }
                else if (iVar3 == iVar4) {
                  FUN_001dc2a0(param_1,0x84);
                }
                else {
                  FUN_001dc2a0(param_1,0x82);
                }
              }
              else if ((iVar3 < iVar4) && (iVar3 < iVar1)) {
                FUN_001dc2a0(param_1,0x81);
              }
              else if ((iVar3 == iVar4) && (iVar3 == iVar1)) {
                FUN_001dc2a0(param_1,0x84);
              }
              else {
                FUN_001dc2a0(param_1,0x82);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// 0x001df560  size 0x264
void FUN_001df560(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = FUN_00177210();
  if (lVar4 == 2) {
    uVar5 = FUN_001ca6b0(0);
    uVar6 = FUN_001ca6b0(1);
    uVar7 = FUN_001dc290();
    if ((uVar7 & 8) == 0) {
      uVar7 = FUN_001dc290();
      if ((uVar7 & 0x10) != 0) {
        fVar8 = (float)FUN_001ca6e0(uVar5);
        fVar9 = (float)FUN_001ca6e0(uVar6);
        if (fVar8 - fVar9 <= 50.0) {
          fVar8 = (float)FUN_001ca6e0(uVar6);
          fVar9 = (float)FUN_001ca6e0(uVar5);
          if (150.0 < fVar8 - fVar9) {
            FUN_001dc2a0(param_1,0x102);
          }
        }
        else {
          FUN_001dc2a0(param_1,0x101);
        }
      }
    }
    else {
      fVar8 = (float)FUN_001ca6e0(uVar6);
      fVar9 = (float)FUN_001ca6e0(uVar5);
      if (50.0 < fVar8 - fVar9) {
        FUN_001dc2a0(param_1,0x102);
      }
      else {
        fVar8 = (float)FUN_001ca6e0(uVar5);
        fVar9 = (float)FUN_001ca6e0(uVar6);
        if (150.0 < fVar8 - fVar9) {
          FUN_001dc2a0(param_1,0x101);
        }
      }
    }
    iVar2 = FUN_001dc220(0);
    iVar3 = FUN_001dc220(1);
    iVar2 = *(int *)(iVar2 + 0x4b8);
    if ((iVar2 == 0) || (iVar1 = *(int *)(iVar3 + 0x4b8), iVar1 == 0)) {
      if ((iVar2 == 0) && (*(int *)(iVar3 + 0x4b8) != 0)) {
        FUN_001dc2a0(param_1,0x8a);
      }
      else if ((iVar2 != 0) && (*(int *)(iVar3 + 0x4b8) == 0)) {
        FUN_001dc2a0(param_1,0x89);
      }
    }
    else if (iVar2 < iVar1) {
      FUN_001dc2a0(param_1,0x89);
    }
    else if (iVar2 == iVar1) {
      FUN_001dc2a0(param_1,0x8c);
    }
    else {
      FUN_001dc2a0(param_1,0x8a);
    }
  }
  return;
}

// 0x001df7d0  size 0x4ec
void FUN_001df7d0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined2 uStack_10;
  
  lVar6 = FUN_00177700();
  if (lVar6 != 0) {
    uVar2 = FUN_001777a0();
    iVar1 = *(int *)((int)lVar6 + (uVar2 & 0xff) * 0x10 + 0xc);
    iVar11 = 0;
    lVar6 = FUN_00177210();
    if (0 < lVar6) {
      do {
        iVar13 = 0;
        uVar7 = FUN_001ca6b0(iVar11);
        iVar3 = FUN_001ca770(uVar7);
        if ((*(uint *)(iVar3 + 4) & 0x20) == 0) {
          uVar8 = FUN_001dc220((char)iVar11);
          iVar10 = 0;
          iVar3 = 0;
          do {
            iVar12 = (int)uVar8;
            piVar9 = (int *)(iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3);
            iVar5 = *piVar9;
            if (iVar5 == -1) break;
            if ((piVar9[2] & 1U) == 0) {
              puVar4 = (undefined4 *)(iVar1 + iVar5 * 0x10);
              iVar14 = puVar4[1];
              uStack_10 = (undefined2)*puVar4;
              iVar5 = FUN_00177470(uStack_10);
              iVar5 = iVar14 * 0x20 + iVar5;
              if (iVar13 != iVar10) break;
              lVar6 = FUN_00177750();
              if (lVar6 == 0) {
                iVar14 = FUN_001ca6f0(uVar7);
                if (iVar5 <= iVar14) {
                  iVar5 = iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3;
                  *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 1;
                }
              }
              else {
                iVar14 = FUN_001ca6f0(uVar7);
                if (iVar14 < iVar5) {
                  iVar5 = iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3;
                  *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 1;
                }
              }
              if ((*(uint *)(iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3 + 8) & 1) != 0) {
                lVar6 = FUN_001dccd0(uVar8);
                if (lVar6 < 360000) {
                  iVar5 = FUN_001dccd0(uVar8);
                  fVar15 = (float)FUN_00177710(iVar10);
                  fVar16 = (float)FUN_001ca6e0(uVar7);
                  fVar17 = (float)FUN_001ca6d0(uVar7);
                  fVar18 = (float)FUN_001ca6e0(uVar7);
                  *(int *)(iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3 + 4) =
                       (int)((float)(iVar5 * 1000) -
                            (float)(int)(((fVar18 - fVar15) * 1000.0) / (fVar16 - fVar17)));
                }
                else {
                  *(undefined4 *)(iVar12 + *(int *)(iVar12 + 0x4bc) * 0x78 + iVar3 + 4) = 360000000;
                }
                iVar5 = *(int *)(iVar12 + 0x4bc);
                if ((*(uint *)(iVar12 + iVar5 * 0x78 + iVar3 + 8) & 2) != 0) {
                  iVar14 = FUN_00177740();
                  if (iVar5 < iVar14 + -1) {
                    *(int *)(iVar12 + 0x4bc) = *(int *)(iVar12 + 0x4bc) + 1;
                  }
                  else {
                    if (iVar11 == 2) {
                      FUN_001eb140(0x1008);
                    }
                    else if (iVar11 == 1) {
                      lVar6 = FUN_00177270();
                      if (lVar6 == 2) {
                        FUN_001eb140(0x1002);
                        FUN_001eb140(0x402);
                      }
                      else {
                        FUN_001eb140(0x1004);
                      }
                    }
                    else if (iVar11 == 0) {
                      FUN_001eb140(0x1001);
                      FUN_001eb140(0x401);
                    }
                    lVar6 = FUN_001dccd0(uVar8);
                    if (lVar6 < 360000) {
                      iVar5 = FUN_001dccd0(uVar8);
                      fVar15 = (float)FUN_00177730();
                      fVar16 = (float)FUN_001ca6e0(uVar7);
                      fVar17 = (float)FUN_001ca6d0(uVar7);
                      fVar18 = (float)FUN_001ca6e0(uVar7);
                      *(int *)(iVar12 + 0x4b8) =
                           (int)((float)(iVar5 * 1000) -
                                (float)(int)(((fVar18 - fVar15) * 1000.0) / (fVar16 - fVar17)));
                    }
                    else {
                      *(undefined4 *)(iVar12 + 0x4b8) = 360000000;
                    }
                  }
                }
              }
            }
            else {
              iVar13 = iVar13 + 1;
            }
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + 0xc;
          } while (iVar10 < 10);
          if (*(int *)(iVar12 + 0x4b8) == 0) {
            if (*(int *)(iVar12 + 0x4b0) < 360000) {
              *(int *)(iVar12 + 0x4b0) = *(int *)(iVar12 + 0x4b0) + 1;
            }
            else {
              *(undefined4 *)(iVar12 + 0x4b0) = 360000;
            }
          }
        }
        iVar11 = iVar11 + 1;
        iVar3 = FUN_00177210();
      } while (iVar11 < iVar3);
    }
  }
  return;
}

// 0x001dfcd0  size 0x1e0
void FUN_001dfcd0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  lVar4 = FUN_00177750();
  if (lVar4 == 0) {
    iVar1 = FUN_00177770();
    iVar2 = FUN_00177760();
    if (iVar1 <= iVar2) {
      iVar2 = 0;
      piVar6 = param_1;
      do {
        *piVar6 = iVar1;
        iVar3 = FUN_00177760();
        if (iVar1 == iVar3) {
          piVar6[2] = 2;
        }
        iVar3 = 1;
        piVar5 = (int *)((int)param_1 + iVar2 + 0x78);
        do {
          iVar3 = iVar3 + 3;
          *piVar5 = *piVar6;
          piVar5[1] = piVar6[1];
          piVar5[2] = piVar6[2];
          piVar5[0x1e] = *piVar6;
          piVar5[0x1f] = piVar6[1];
          piVar5[0x20] = piVar6[2];
          piVar5[0x3c] = *piVar6;
          piVar5[0x3d] = piVar6[1];
          piVar5[0x3e] = piVar6[2];
          piVar5 = piVar5 + 0x5a;
        } while (iVar3 < 10);
        piVar6 = piVar6 + 3;
        iVar2 = iVar2 + 0xc;
        iVar1 = iVar1 + 1;
        iVar3 = FUN_00177760();
      } while (iVar1 <= iVar3);
    }
  }
  else {
    iVar1 = FUN_00177770();
    iVar2 = FUN_00177760();
    if (iVar2 <= iVar1) {
      iVar2 = 0;
      piVar6 = param_1;
      do {
        *piVar6 = iVar1;
        iVar3 = FUN_00177760();
        if (iVar1 == iVar3) {
          piVar6[2] = 2;
        }
        iVar3 = 1;
        piVar5 = (int *)((int)param_1 + iVar2 + 0x78);
        do {
          iVar3 = iVar3 + 3;
          *piVar5 = *piVar6;
          piVar5[1] = piVar6[1];
          piVar5[2] = piVar6[2];
          piVar5[0x1e] = *piVar6;
          piVar5[0x1f] = piVar6[1];
          piVar5[0x20] = piVar6[2];
          piVar5[0x3c] = *piVar6;
          piVar5[0x3d] = piVar6[1];
          piVar5[0x3e] = piVar6[2];
          piVar5 = piVar5 + 0x5a;
        } while (iVar3 < 10);
        piVar6 = piVar6 + 3;
        iVar2 = iVar2 + 0xc;
        iVar1 = iVar1 + -1;
        iVar3 = FUN_00177760();
      } while (iVar3 <= iVar1);
    }
  }
  return;
}

// 0x001dfec0  size 0x64
void FUN_001dfec0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = FUN_00177210();
  if (0 < lVar2) {
    do {
      uVar3 = FUN_001dc220((char)iVar4);
      FUN_001dfcd0(uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_00177210();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001dff30  size 0x48
void FUN_001dff30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0xf8) == -1) {
      return;
    }
    if (iVar1 < *(int *)(param_1 + 0x100)) {
      iVar1 = *(int *)(param_1 + 0x100);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x1c;
  } while (iVar2 < 0x46);
  return;
}

// 0x001dff80  size 0x50
int FUN_001dff80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0xf8) == -1) {
      return iVar1;
    }
    iVar1 = iVar1 * iVar2;
    iVar2 = iVar2 + 1;
    iVar1 = (*(int *)(param_1 + 0x100) + iVar1) / iVar2;
    param_1 = param_1 + 0x1c;
  } while (iVar2 < 0x46);
  return iVar1;
}

// 0x001dffd0  size 0x458
/* WARNING: Removing unreachable block (ram,0x001e0310) */

void FUN_001dffd0(float param_1,int *param_2,undefined8 param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  
  uVar11 = FUN_001ca6b0(param_3);
  fVar15 = (float)FUN_001ca7c0(uVar11);
  iVar18 = *(int *)((int)uVar11 + 0x6c);
  iVar10 = FUN_00177070(param_3);
  FUN_001771b0(*(undefined1 *)(iVar10 + 9));
  fVar17 = 0.0;
  param_2[param_2[1] + 2] = iVar18;
  if (*param_2 == 0) {
    iVar10 = param_2[1];
    iVar18 = 0;
    if (0 < iVar10) {
      if (8 < iVar10) {
        bVar9 = false;
        if ((-1 < iVar10) && (iVar10 < 0x7fffffff)) {
          bVar9 = true;
        }
        if (bVar9) {
          piVar12 = param_2;
          do {
            pfVar1 = (float *)(piVar12 + 2);
            iVar18 = iVar18 + 8;
            pfVar2 = (float *)(piVar12 + 3);
            pfVar3 = (float *)(piVar12 + 4);
            pfVar4 = (float *)(piVar12 + 5);
            pfVar5 = (float *)(piVar12 + 6);
            pfVar6 = (float *)(piVar12 + 7);
            pfVar7 = (float *)(piVar12 + 8);
            pfVar8 = (float *)(piVar12 + 9);
            piVar12 = piVar12 + 8;
            fVar17 = fVar17 + *pfVar1 + *pfVar2 + *pfVar3 + *pfVar4 + *pfVar5 + *pfVar6 + *pfVar7 +
                     *pfVar8;
          } while (iVar18 < iVar10 + -8);
        }
      }
      iVar10 = param_2[1];
      if (iVar18 < iVar10) {
        piVar12 = param_2 + iVar18;
        do {
          iVar18 = iVar18 + 1;
          fVar17 = fVar17 + (float)piVar12[2];
          piVar12 = piVar12 + 1;
        } while (iVar18 < iVar10);
      }
    }
    fVar17 = fVar17 / (float)(iVar10 + 1);
  }
  else {
    iVar18 = 0;
    iVar13 = param_2[1] + 2;
    iVar10 = param_2[1];
    do {
      iVar14 = iVar10 + 1;
      if (0x3b < iVar14) {
        iVar14 = iVar10 + -0x3b;
      }
      if (0x3b < iVar13) {
        iVar13 = iVar13 + -0x3c;
      }
      iVar18 = iVar18 + 1;
      iVar13 = iVar13 + 1;
      fVar17 = fVar17 + (float)param_2[iVar14 + 2];
      iVar10 = iVar14;
    } while (iVar18 < 0x3c);
    fVar17 = fVar17 / 60.0;
  }
  fVar17 = (float)FUN_001dad00((fVar17 * 180.0) / 3.1415927);
  if (param_1 == 1000.0) {
    fVar16 = 2.0;
  }
  else if (param_1 < 0.0) {
    if (fVar17 < 0.0) {
      fVar16 = 3.0;
    }
    else {
      fVar16 = 1.0;
    }
  }
  else if (0.0 < fVar17) {
    fVar16 = 3.0;
  }
  else {
    fVar16 = 1.0;
  }
  fVar17 = (float)FUN_00120a68(fVar17);
  if (fVar17 <= 45.0) {
    if (fVar17 < 10.0) {
      fVar17 = 0.0;
    }
  }
  else {
    fVar17 = 45.0;
  }
  fVar17 = (float)FUN_00120d18((fVar17 * 3.1415927) / 180.0);
  fVar15 = fVar15 - 10.0;
  if (fVar15 < 0.0) {
    fVar15 = 0.0;
  }
  fVar16 = fVar17 * fVar16 * 1.0 * 10.0;
  if (fVar15 == 0.0) {
    fVar16 = 0.0;
  }
  iVar10 = (int)(((fVar15 * fVar15) / 100.0) * fVar17 * 0.5 + fVar16);
  if (iVar10 < 10) {
    iVar10 = 0;
  }
  if (iVar10 % 10 != 0) {
    iVar10 = iVar10 - iVar10 % 10;
  }
  param_2[param_4 * 7 + 0x40] = param_2[param_4 * 7 + 0x40] + iVar10;
  param_2[1] = param_2[1] + 1;
  if (param_2[1] == 0x3c) {
    param_2[1] = 0;
    *param_2 = 1;
  }
  return;
}

