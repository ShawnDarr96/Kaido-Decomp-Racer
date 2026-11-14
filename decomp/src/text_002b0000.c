// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002b0000 - 0x002b4000
#include "ghidra_types.h"

// 0x002b02c0  size 0x250
void script_sub_002b02c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x24) != -1) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x24);
    maybe_Mem_CopyQwords(param_1 + 0x30,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
    maybe_Mem_CopyQwords(param_1 + 0x34,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
    maybe_Mem_CopyQwords(param_1 + 0x38,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
    maybe_Mem_CopyQwords(param_1 + 0x3c,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
    iVar7 = (*(int *)(param_1 + 0x3c) + 1) * 4;
    uVar2 = Mem_Alloc16(iVar7,*(undefined4 *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    maybe_Mem_CopyQwords
              (*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),
               iVar7);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar7;
    piVar1 = *(int **)(param_1 + 0x40);
    uVar3 = 0;
    if (*piVar1 == -1) {
      iVar7 = 0;
      do {
        uVar3 = uVar3 + 1;
        iVar7 = iVar7 + 4;
        if (*(uint *)(param_1 + 0x3c) < uVar3) {
          *(undefined4 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x44) = 0;
          return;
        }
      } while (*(int *)((int)piVar1 + iVar7) == -1);
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    if (uVar3 < uVar4) {
      uVar6 = uVar3 + 1;
    }
    else {
      uVar6 = uVar3;
    }
    iVar5 = uVar6 * 4;
    iVar7 = piVar1[uVar6];
    while (iVar7 == -1) {
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      if (uVar4 < uVar6) break;
      iVar7 = *(int *)((int)piVar1 + iVar5);
    }
    if ((uVar3 == uVar4) || (uVar6 == uVar4 + 1)) {
      if (*(int *)(param_1 + 0x20) == -1) {
        *(int *)(param_1 + 0x48) =
             *(int *)(param_1 + 0x1c) - (*(int *)(param_1 + 0x24) + piVar1[uVar3]);
      }
      else {
        *(int *)(param_1 + 0x48) =
             *(int *)(param_1 + 0x20) - (*(int *)(param_1 + 0x24) + piVar1[uVar3]);
      }
    }
    else {
      *(int *)(param_1 + 0x48) = piVar1[uVar6] - piVar1[uVar3];
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c) + 6;
  }
  return;
}

// 0x002b0510  size 0x140
void script_sub_002b0510(int param_1)

{
  maybe_Mem_CopyQwords(param_1 + 0x10,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(param_1 + 0x14,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(param_1 + 0x18,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(param_1 + 0x1c,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(param_1 + 0x20,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(param_1 + 0x24,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(param_1 + 0x28,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(param_1 + 0x2c,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c),4);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 4;
  return;
}

// 0x002b0650  size 0x140
void script_sub_002b0650(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  maybe_Mem_CopyQwords(param_1,*(int *)(iVar1 + 100) + *(int *)(iVar1 + 0x6c),4);
  *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(iVar1 + 4,*(int *)(iVar1 + 100) + *(int *)(iVar1 + 0x6c),4);
  *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(iVar1 + 8,*(int *)(iVar1 + 100) + *(int *)(iVar1 + 0x6c),4);
  *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 4;
  maybe_Mem_CopyQwords(iVar1 + 0xc,*(int *)(iVar1 + 100) + *(int *)(iVar1 + 0x6c),2);
  *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 2;
  maybe_Mem_CopyQwords(iVar1 + 0xe,*(int *)(iVar1 + 100) + *(int *)(iVar1 + 0x6c),1);
  *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
  maybe_Mem_CopyQwords(iVar1 + 0xf,*(int *)(iVar1 + 100) + *(int *)(iVar1 + 0x6c),1);
  *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
  script_sub_002b0510(param_1);
  script_sub_002b02c0(param_1);
  if (*(int *)(iVar1 + 0x44) == 0) {
    *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 100) + 0x4a;
    *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x6c) + -0x4a;
  }
  else {
    *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x44);
    *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x48) + -6;
  }
  *(undefined4 *)(iVar1 + 0x58) = 0;
  return;
}

// 0x002b0790  size 0x2f0
undefined4 script_sub_002b0790(undefined8 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  char acStack_10 [12];
  int iStack_4;
  
  iStack_4 = 0;
  iVar7 = (int)param_1;
  if ((*param_2 == 0) && (*(int *)(iVar7 + 0x78) != 0)) {
    iVar4 = *(int *)(iVar7 + 0x6c) + *(int *)(iVar7 + 100);
    *(byte *)(iVar4 + -1) = *(byte *)(iVar4 + -1) | 0x80;
  }
  else {
    menuscr_sub_002afef0(param_1,*param_2,acStack_10,&iStack_4);
    if (iStack_4 == 0) {
      return 0;
    }
  }
  if ((char)param_2[2] != *(char *)(iVar7 + 0x7c)) {
    acStack_10[iStack_4] = (char)param_2[2];
    iStack_4 = iStack_4 + 1;
  }
  bVar6 = *(byte *)(param_2 + 2);
  if (bVar6 < 0xf0) {
    bVar6 = bVar6 & 0xf0;
    acStack_10[iStack_4] = *(char *)((int)param_2 + 9);
    if ((((bVar6 == 0x90) || (bVar6 == 0xa0)) || (bVar6 == 0xb0)) ||
       (iVar4 = iStack_4 + 1, bVar6 == 0xe0)) {
      acStack_10[iStack_4 + 1] = *(char *)((int)param_2 + 10);
      iVar4 = iStack_4 + 2;
    }
  }
  else {
    if (bVar6 != 0xff) {
      return 0;
    }
    acStack_10[iStack_4] = *(char *)((int)param_2 + 9);
    acStack_10[iStack_4 + 1] = *(char *)((int)param_2 + 10);
    iVar4 = iStack_4 + 2;
    if (*(char *)((int)param_2 + 9) == 'Q') {
      acStack_10[iStack_4 + 2] = (char)((uint)param_2[1] >> 0x10);
      acStack_10[iStack_4 + 3] = (char)((uint)param_2[1] >> 8);
      acStack_10[iStack_4 + 4] = (char)param_2[1];
      iVar4 = iStack_4 + 5;
    }
  }
  iStack_4 = iVar4;
  iVar2 = iStack_4;
  iVar4 = *(int *)(iVar7 + 0x6c);
  uVar5 = *(uint *)(iVar7 + 0x68);
  bVar1 = false;
  if ((uVar5 < (uint)(iVar4 + iStack_4)) && (bVar1 = true, uVar5 < (uint)(iVar4 + iStack_4))) {
    do {
      if (*(int *)(iVar7 + 100) != 0) {
        uVar3 = Mem_Realloc(*(int *)(iVar7 + 100),uVar5 << 1,*(undefined4 *)(iVar7 + 0x60));
        *(undefined4 *)(iVar7 + 100) = uVar3;
        if (*(int *)(iVar7 + 100) != 0) {
          *(uint *)(iVar7 + 0x68) = uVar5 << 1;
          uVar5 = *(int *)(iVar7 + 0x68) - 1;
          if (*(uint *)(iVar7 + 0x6c) <= uVar5) {
            uVar5 = *(uint *)(iVar7 + 0x6c);
          }
          *(uint *)(iVar7 + 0x6c) = uVar5;
        }
      }
      iVar4 = *(int *)(iVar7 + 0x6c);
      uVar5 = *(uint *)(iVar7 + 0x68);
    } while (uVar5 < (uint)(iVar4 + iVar2));
  }
  maybe_Mem_CopyQwords(*(int *)(iVar7 + 100) + iVar4,acStack_10,iVar2);
  *(int *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0x6c) + iVar2;
  if (bVar1) {
    *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 100);
  }
  bVar6 = *(byte *)(param_2 + 2);
  if (((bVar6 == 0xff) || ((bVar6 & 0xf0) == 0xb0)) || (bVar6 == *(byte *)(iVar7 + 0x7c))) {
    *(undefined4 *)(iVar7 + 0x78) = 0;
  }
  else {
    *(undefined4 *)(iVar7 + 0x78) = 1;
  }
  *(char *)(iVar7 + 0x7c) = (char)param_2[2];
  return 1;
}

// 0x002b0a80  size 0xe4
undefined4 script_sub_002b0a80(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  do {
    while( true ) {
      lVar2 = menuscr_sub_002affd0(param_1,param_2);
      if (lVar2 == 0) {
        return 0;
      }
      piVar4 = (int *)param_2;
      bVar1 = *(byte *)(piVar4 + 2);
      iVar3 = iVar3 + *piVar4;
      if (bVar1 == 0xff) break;
      if (((bVar1 & 0xf0) != 0xe0) &&
         ((param_3 != 0 ||
          (((bVar1 & 0xe) == 0 && (((bVar1 & 0xf0) != 0xc0 || (*(byte *)((int)piVar4 + 9) < 0x10))))
          )))) goto LAB_002b0b18;
    }
  } while ((*(char *)((int)piVar4 + 9) != '/') || (*(char *)((int)piVar4 + 10) != '\0'));
LAB_002b0b18:
  *piVar4 = iVar3;
  return 1;
}

// 0x002b0b70  size 0x1a4
void script_sub_002b0b70(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_10 [12];
  int iStack_4;
  
  script_sub_002b1820();
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 100) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar7 + 100) = 0;
  }
  *(undefined4 *)(iVar7 + 0x68) = 0;
  *(undefined4 *)(iVar7 + 0x6c) = 0xffffffff;
  *(undefined4 *)(iVar7 + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar7 + 0x74) = 0;
  uVar2 = Mem_Alloc16(param_2,*(undefined4 *)(iVar7 + 0x60));
  *(undefined4 *)(iVar7 + 100) = uVar2;
  if (*(int *)(iVar7 + 100) != 0) {
    *(int *)(iVar7 + 0x68) = (int)param_2;
    *(undefined4 *)(iVar7 + 0x6c) = 0;
  }
  lVar3 = menuscr_sub_002afef0(param_1,0,auStack_10,&iStack_4);
  if (lVar3 != 0) {
    auStack_10[iStack_4] = 0xff;
    auStack_10[iStack_4 + 1] = 0x2f;
    iVar6 = iStack_4 + 3;
    iVar5 = iStack_4 + 2;
    iStack_4 = iVar6;
    auStack_10[iVar5] = 0;
    iVar5 = *(int *)(iVar7 + 0x6c);
    uVar4 = *(uint *)(iVar7 + 0x68);
    bVar1 = false;
    if ((uVar4 < (uint)(iVar5 + iVar6)) && (bVar1 = true, uVar4 < (uint)(iVar5 + iVar6))) {
      do {
        if (*(int *)(iVar7 + 100) != 0) {
          uVar2 = Mem_Realloc(*(int *)(iVar7 + 100),uVar4 << 1,*(undefined4 *)(iVar7 + 0x60));
          *(undefined4 *)(iVar7 + 100) = uVar2;
          if (*(int *)(iVar7 + 100) != 0) {
            *(uint *)(iVar7 + 0x68) = uVar4 << 1;
            uVar4 = *(int *)(iVar7 + 0x68) - 1;
            if (*(uint *)(iVar7 + 0x6c) <= uVar4) {
              uVar4 = *(uint *)(iVar7 + 0x6c);
            }
            *(uint *)(iVar7 + 0x6c) = uVar4;
          }
        }
        iVar5 = *(int *)(iVar7 + 0x6c);
        uVar4 = *(uint *)(iVar7 + 0x68);
      } while (uVar4 < (uint)(iVar5 + iVar6));
    }
    maybe_Mem_CopyQwords(*(int *)(iVar7 + 100) + iVar5,auStack_10,iVar6);
    *(int *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0x6c) + iVar6;
    if (bVar1) {
      *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 100);
    }
    *(undefined1 *)(iVar7 + 0x7c) = 0;
  }
  *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 100);
  *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(iVar7 + 0x6c);
  *(undefined4 *)(iVar7 + 0x58) = 0;
  return;
}

// 0x002b0d20  size 0x238
undefined4 script_sub_002b0d20(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_10 [8];
  byte bStack_8;
  char cStack_7;
  char cStack_6;
  
  do {
    lVar3 = menuscr_sub_002affd0(param_1,auStack_10);
    if (lVar3 == 0) {
      return 0;
    }
    iVar6 = (int)param_1;
    if (((bStack_8 & 0xf0) == 0xb0) && (cStack_7 == '\a')) {
      uVar4 = bStack_8 & 0xf;
      if (param_2 == 0) {
        *(char *)(iVar6 + uVar4 + 0x7e) =
             (char)((int)((int)*(char *)(iVar6 + 0x7d) *
                         (*(byte *)(*(int *)(iVar6 + 0x50) + *(int *)(iVar6 + 0x58) + -1) & 0x7f)) /
                   0x7f);
        iVar5 = *(int *)(iVar6 + 0x50) + *(int *)(iVar6 + 0x58);
        *(byte *)(iVar5 + -1) = *(byte *)(iVar6 + uVar4 + 0x7e) | *(byte *)(iVar5 + -1) & 0x80;
      }
      else {
        cVar1 = *(char *)((int)param_2 + uVar4);
        if ((-1 < cVar1) && (cVar1 <= '\x7f')) {
          *(char *)(iVar6 + uVar4 + 0x7e) =
               (char)((int)((*(byte *)(*(int *)(iVar6 + 0x50) + *(int *)(iVar6 + 0x58) + -1) & 0x7f)
                           * (int)cVar1) / 0x7f);
          iVar5 = *(int *)(iVar6 + 0x50) + *(int *)(iVar6 + 0x58);
          *(byte *)(iVar5 + -1) = *(byte *)(iVar6 + uVar4 + 0x7e) | *(byte *)(iVar5 + -1) & 0x80;
        }
      }
    }
    if ((((bStack_8 & 0xf0) != 0xb0) || (cStack_7 != 'c')) || (bVar2 = true, cStack_6 != '\x01')) {
      bVar2 = false;
    }
    if (!bVar2) {
      if (((bStack_8 == 0xff) && (cStack_7 == '/')) && (cStack_6 == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
  } while (!bVar2);
  *(undefined4 *)(iVar6 + 0x58) = 0;
  *(undefined4 *)(iVar6 + 0x6c) = 0;
  *(undefined1 *)(iVar6 + 0x7c) = 0;
  *(undefined4 *)(iVar6 + 0x78) = 0;
  return 1;
}

// 0x002b0f60  size 0x350
undefined4 script_sub_002b0f60(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_10 [12];
  int iStack_4;
  
  iStack_4 = 0;
  lVar4 = menuscr_sub_002afef0(param_1,param_2,auStack_10,&iStack_4);
  iVar7 = (int)param_1;
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    auStack_10[iStack_4] = 0xb0;
    auStack_10[iStack_4 + 1] = 99;
    iVar8 = iStack_4 + 3;
    iVar6 = iStack_4 + 2;
    iStack_4 = iVar8;
    auStack_10[iVar6] = 1;
    iVar6 = *(int *)(iVar7 + 0x6c);
    uVar5 = *(uint *)(iVar7 + 0x68);
    bVar1 = false;
    if ((uVar5 < (uint)(iVar6 + iVar8)) && (bVar1 = true, uVar5 < (uint)(iVar6 + iVar8))) {
      do {
        if (*(int *)(iVar7 + 100) != 0) {
          uVar2 = Mem_Realloc(*(int *)(iVar7 + 100),uVar5 << 1,*(undefined4 *)(iVar7 + 0x60));
          *(undefined4 *)(iVar7 + 100) = uVar2;
          if (*(int *)(iVar7 + 100) != 0) {
            *(uint *)(iVar7 + 0x68) = uVar5 << 1;
            uVar5 = *(int *)(iVar7 + 0x68) - 1;
            if (*(uint *)(iVar7 + 0x6c) <= uVar5) {
              uVar5 = *(uint *)(iVar7 + 0x6c);
            }
            *(uint *)(iVar7 + 0x6c) = uVar5;
          }
        }
        iVar6 = *(int *)(iVar7 + 0x6c);
        uVar5 = *(uint *)(iVar7 + 0x68);
      } while (uVar5 < (uint)(iVar6 + iVar8));
    }
    maybe_Mem_CopyQwords(*(int *)(iVar7 + 100) + iVar6,auStack_10,iVar8);
    *(int *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0x6c) + iVar8;
    if (bVar1) {
      *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 100);
    }
    menuscr_sub_002afef0(param_1,1,auStack_10,&iStack_4);
    auStack_10[iStack_4] = 0xb0;
    auStack_10[iStack_4 + 1] = 6;
    iVar8 = iStack_4 + 3;
    iVar6 = iStack_4 + 2;
    iStack_4 = iVar8;
    auStack_10[iVar6] = 0;
    iVar6 = *(int *)(iVar7 + 0x6c);
    uVar5 = *(uint *)(iVar7 + 0x68);
    bVar1 = false;
    if ((uVar5 < (uint)(iVar6 + iVar8)) && (bVar1 = true, uVar5 < (uint)(iVar6 + iVar8))) {
      do {
        if (*(int *)(iVar7 + 100) != 0) {
          uVar2 = Mem_Realloc(*(int *)(iVar7 + 100),uVar5 << 1,*(undefined4 *)(iVar7 + 0x60));
          *(undefined4 *)(iVar7 + 100) = uVar2;
          if (*(int *)(iVar7 + 100) != 0) {
            *(uint *)(iVar7 + 0x68) = uVar5 << 1;
            uVar5 = *(int *)(iVar7 + 0x68) - 1;
            if (*(uint *)(iVar7 + 0x6c) <= uVar5) {
              uVar5 = *(uint *)(iVar7 + 0x6c);
            }
            *(uint *)(iVar7 + 0x6c) = uVar5;
          }
        }
        iVar6 = *(int *)(iVar7 + 0x6c);
        uVar5 = *(uint *)(iVar7 + 0x68);
      } while (uVar5 < (uint)(iVar6 + iVar8));
    }
    maybe_Mem_CopyQwords(*(int *)(iVar7 + 100) + iVar6,auStack_10,iVar8);
    *(int *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0x6c) + iVar8;
    if (bVar1) {
      *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 100);
    }
    uVar2 = 2;
    menuscr_sub_002afef0(param_1,1,auStack_10,&iStack_4);
    auStack_10[iStack_4] = 0xb0;
    auStack_10[iStack_4 + 1] = 0x26;
    iVar8 = iStack_4 + 3;
    iVar6 = iStack_4 + 2;
    iStack_4 = iVar8;
    auStack_10[iVar6] = 0;
    iVar6 = *(int *)(iVar7 + 0x6c);
    uVar5 = *(uint *)(iVar7 + 0x68);
    bVar1 = false;
    if ((uVar5 < (uint)(iVar6 + iVar8)) && (bVar1 = true, uVar5 < (uint)(iVar6 + iVar8))) {
      do {
        if (*(int *)(iVar7 + 100) != 0) {
          uVar3 = Mem_Realloc(*(int *)(iVar7 + 100),uVar5 << 1,*(undefined4 *)(iVar7 + 0x60));
          *(undefined4 *)(iVar7 + 100) = uVar3;
          if (*(int *)(iVar7 + 100) != 0) {
            *(uint *)(iVar7 + 0x68) = uVar5 << 1;
            uVar5 = *(int *)(iVar7 + 0x68) - 1;
            if (*(uint *)(iVar7 + 0x6c) <= uVar5) {
              uVar5 = *(uint *)(iVar7 + 0x6c);
            }
            *(uint *)(iVar7 + 0x6c) = uVar5;
          }
        }
        iVar6 = *(int *)(iVar7 + 0x6c);
        uVar5 = *(uint *)(iVar7 + 0x68);
      } while (uVar5 < (uint)(iVar6 + iVar8));
    }
    maybe_Mem_CopyQwords(*(int *)(iVar7 + 100) + iVar6,auStack_10,iVar8);
    *(int *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0x6c) + iVar8;
    if (bVar1) {
      *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 100);
    }
    *(undefined1 *)(iVar7 + 0x7c) = 0;
  }
  *(undefined4 *)(iVar7 + 0x78) = 0;
  return uVar2;
}

// 0x002b12b0  size 0x24c
long script_sub_002b12b0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_10 [12];
  int iStack_4;
  
  iStack_4 = 0;
  lVar3 = menuscr_sub_002afef0(param_1,param_2,auStack_10,&iStack_4);
  iVar8 = (int)param_1;
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    auStack_10[iStack_4] = 0xb0;
    auStack_10[iStack_4 + 1] = 99;
    iVar7 = iStack_4 + 3;
    iVar5 = iStack_4 + 2;
    iStack_4 = iVar7;
    auStack_10[iVar5] = 0;
    iVar5 = *(int *)(iVar8 + 0x6c);
    uVar4 = *(uint *)(iVar8 + 0x68);
    bVar1 = false;
    if ((uVar4 < (uint)(iVar5 + iVar7)) && (bVar1 = true, uVar4 < (uint)(iVar5 + iVar7))) {
      do {
        if (*(int *)(iVar8 + 100) != 0) {
          uVar2 = Mem_Realloc(*(int *)(iVar8 + 100),uVar4 << 1,*(undefined4 *)(iVar8 + 0x60));
          *(undefined4 *)(iVar8 + 100) = uVar2;
          if (*(int *)(iVar8 + 100) != 0) {
            *(uint *)(iVar8 + 0x68) = uVar4 << 1;
            uVar4 = *(int *)(iVar8 + 0x68) - 1;
            if (*(uint *)(iVar8 + 0x6c) <= uVar4) {
              uVar4 = *(uint *)(iVar8 + 0x6c);
            }
            *(uint *)(iVar8 + 0x6c) = uVar4;
          }
        }
        iVar5 = *(int *)(iVar8 + 0x6c);
        uVar4 = *(uint *)(iVar8 + 0x68);
      } while (uVar4 < (uint)(iVar5 + iVar7));
    }
    maybe_Mem_CopyQwords(*(int *)(iVar8 + 100) + iVar5,auStack_10,iVar7);
    *(int *)(iVar8 + 0x6c) = *(int *)(iVar8 + 0x6c) + iVar7;
    if (bVar1) {
      *(undefined4 *)(iVar8 + 0x50) = *(undefined4 *)(iVar8 + 100);
    }
    lVar3 = 1;
    menuscr_sub_002afef0(param_1,1,auStack_10,&iStack_4);
    auStack_10[iStack_4] = 0xb0;
    auStack_10[iStack_4 + 1] = 6;
    iVar7 = iStack_4 + 3;
    iVar5 = iStack_4 + 2;
    iStack_4 = iVar7;
    auStack_10[iVar5] = 0;
    iVar5 = *(int *)(iVar8 + 0x6c);
    uVar4 = *(uint *)(iVar8 + 0x68);
    lVar6 = 0;
    if ((uVar4 < (uint)(iVar5 + iVar7)) && (lVar6 = lVar3, uVar4 < (uint)(iVar5 + iVar7))) {
      do {
        if (*(int *)(iVar8 + 100) != 0) {
          uVar2 = Mem_Realloc(*(int *)(iVar8 + 100),uVar4 << 1,*(undefined4 *)(iVar8 + 0x60));
          *(undefined4 *)(iVar8 + 100) = uVar2;
          if (*(int *)(iVar8 + 100) != 0) {
            *(uint *)(iVar8 + 0x68) = uVar4 << 1;
            uVar4 = *(int *)(iVar8 + 0x68) - 1;
            if (*(uint *)(iVar8 + 0x6c) <= uVar4) {
              uVar4 = *(uint *)(iVar8 + 0x6c);
            }
            *(uint *)(iVar8 + 0x6c) = uVar4;
          }
        }
        iVar5 = *(int *)(iVar8 + 0x6c);
        uVar4 = *(uint *)(iVar8 + 0x68);
      } while (uVar4 < (uint)(iVar5 + iVar7));
    }
    maybe_Mem_CopyQwords(*(int *)(iVar8 + 100) + iVar5,auStack_10,iVar7);
    *(int *)(iVar8 + 0x6c) = *(int *)(iVar8 + 0x6c) + iVar7;
    if (lVar6 != 0) {
      *(undefined4 *)(iVar8 + 0x50) = *(undefined4 *)(iVar8 + 100);
    }
    *(undefined1 *)(iVar8 + 0x7c) = 0;
  }
  *(undefined4 *)(iVar8 + 0x78) = 0;
  return lVar3;
}

// 0x002b1500  size 0x174
undefined8 script_sub_002b1500(undefined8 param_1,undefined8 param_2,byte param_3,short param_4)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte abStack_10 [12];
  int iStack_4;
  
  if ((-1 < param_4) && (param_4 < 0x4000)) {
    iStack_4 = 0;
    lVar3 = menuscr_sub_002afef0(param_1,param_2,abStack_10,&iStack_4);
    iVar7 = (int)param_1;
    if (lVar3 != 0) {
      abStack_10[iStack_4] = param_3 & 0xf | 0xe0;
      abStack_10[iStack_4 + 1] = (byte)(param_4 >> 7) & 0x7f;
      iVar6 = iStack_4 + 3;
      iVar5 = iStack_4 + 2;
      iStack_4 = iVar6;
      abStack_10[iVar5] = (byte)param_4 & 0x7f;
      iVar5 = *(int *)(iVar7 + 0x6c);
      uVar4 = *(uint *)(iVar7 + 0x68);
      bVar1 = false;
      if ((uVar4 < (uint)(iVar5 + iVar6)) && (bVar1 = true, uVar4 < (uint)(iVar5 + iVar6))) {
        do {
          if (*(int *)(iVar7 + 100) != 0) {
            uVar2 = Mem_Realloc(*(int *)(iVar7 + 100),uVar4 << 1,*(undefined4 *)(iVar7 + 0x60));
            *(undefined4 *)(iVar7 + 100) = uVar2;
            if (*(int *)(iVar7 + 100) != 0) {
              *(uint *)(iVar7 + 0x68) = uVar4 << 1;
              uVar4 = *(int *)(iVar7 + 0x68) - 1;
              if (*(uint *)(iVar7 + 0x6c) <= uVar4) {
                uVar4 = *(uint *)(iVar7 + 0x6c);
              }
              *(uint *)(iVar7 + 0x6c) = uVar4;
            }
          }
          iVar5 = *(int *)(iVar7 + 0x6c);
          uVar4 = *(uint *)(iVar7 + 0x68);
        } while (uVar4 < (uint)(iVar5 + iVar6));
      }
      maybe_Mem_CopyQwords(*(int *)(iVar7 + 100) + iVar5,abStack_10,iVar6);
      *(int *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0x6c) + iVar6;
      if (bVar1) {
        *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 100);
      }
      *(undefined1 *)(iVar7 + 0x7c) = 0;
    }
    *(undefined4 *)(iVar7 + 0x78) = 0;
  }
  return 0;
}

// 0x002b1680  size 0x19c
undefined8 script_sub_002b1680(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_10 [12];
  int iStack_4;
  
  if ((0x3971d < param_3) && (param_3 < 0x2dc6c1)) {
    iStack_4 = 0;
    lVar3 = menuscr_sub_002afef0(param_1,param_2,auStack_10,&iStack_4);
    iVar7 = (int)param_1;
    if (lVar3 != 0) {
      auStack_10[iStack_4] = 0xff;
      auStack_10[iStack_4 + 1] = 0x51;
      auStack_10[iStack_4 + 2] = 3;
      auStack_10[iStack_4 + 3] = (char)(param_3 >> 0x10);
      auStack_10[iStack_4 + 4] = (char)(param_3 >> 8);
      auStack_10[iStack_4 + 5] = (char)param_3;
      iVar6 = iStack_4 + 6;
      iVar5 = *(int *)(iVar7 + 0x6c);
      uVar4 = *(uint *)(iVar7 + 0x68);
      bVar1 = false;
      iStack_4 = iVar6;
      if ((uVar4 < (uint)(iVar5 + iVar6)) && (bVar1 = true, uVar4 < (uint)(iVar5 + iVar6))) {
        do {
          if (*(int *)(iVar7 + 100) != 0) {
            uVar2 = Mem_Realloc(*(int *)(iVar7 + 100),uVar4 << 1,*(undefined4 *)(iVar7 + 0x60));
            *(undefined4 *)(iVar7 + 100) = uVar2;
            if (*(int *)(iVar7 + 100) != 0) {
              *(uint *)(iVar7 + 0x68) = uVar4 << 1;
              uVar4 = *(int *)(iVar7 + 0x68) - 1;
              if (*(uint *)(iVar7 + 0x6c) <= uVar4) {
                uVar4 = *(uint *)(iVar7 + 0x6c);
              }
              *(uint *)(iVar7 + 0x6c) = uVar4;
            }
          }
          iVar5 = *(int *)(iVar7 + 0x6c);
          uVar4 = *(uint *)(iVar7 + 0x68);
        } while (uVar4 < (uint)(iVar5 + iVar6));
      }
      maybe_Mem_CopyQwords(*(int *)(iVar7 + 100) + iVar5,auStack_10,iVar6);
      *(int *)(iVar7 + 0x6c) = *(int *)(iVar7 + 0x6c) + iVar6;
      if (bVar1) {
        *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar7 + 100);
      }
      *(undefined1 *)(iVar7 + 0x7c) = 0;
    }
    *(undefined4 *)(iVar7 + 0x78) = 0;
  }
  return 0;
}

// 0x002b1820  size 0xc0
void script_sub_002b1820(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x40) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  Mem_Set16(param_1,0,0x10);
  Mem_Set16(iVar1 + 0x10,0,0x20);
  Mem_Set16(iVar1 + 0x30,0,0x18);
  Mem_Set16(iVar1 + 0x7e,0,0x10);
  if (*(int *)(iVar1 + 100) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar1 + 100) = 0;
  }
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined1 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  return;
}

// 0x002b18e0  size 0xf0
void script_sub_002b18e0(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  script_sub_002b1820();
  iVar3 = (param_2 + 0x1ec2) * 0x14 + iGpffff89d4;
  iVar4 = *(int *)(iVar3 + 0x20);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(iVar3 + 0x18);
  }
  else {
    uVar1 = iVar4 + 0x7ffU >> 0xb;
  }
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 100) != 0) {
    Mem_Free();
    *(undefined4 *)(iVar4 + 100) = 0;
  }
  *(undefined4 *)(iVar4 + 0x68) = 0;
  *(undefined4 *)(iVar4 + 0x6c) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x74) = 0;
  uVar2 = Mem_Alloc16(uVar1 << 0xb,*(undefined4 *)(iVar4 + 0x60));
  *(undefined4 *)(iVar4 + 100) = uVar2;
  if (*(int *)(iVar4 + 100) != 0) {
    *(uint *)(iVar4 + 0x68) = uVar1 << 0xb;
    *(undefined4 *)(iVar4 + 0x6c) = 0;
  }
  if (*(int *)(iVar4 + 100) != 0) {
    uVar2 = Arc_LoadFileEx(param_2 + 0x1ec2,*(int *)(iVar4 + 100),0x2ae500,param_1,0,0);
    *(undefined4 *)(iVar4 + 0x70) = uVar2;
    *(undefined4 *)(iVar4 + 0x74) = 1;
  }
  return;
}

// 0x002b19d0  size 0xb0
void script_sub_002b19d0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  Mem_Set16(param_1,0,0x10);
  iVar1 = (int)param_1;
  Mem_Set16(iVar1 + 0x10,0,0x20);
  Mem_Set16(iVar1 + 0x30,0,0x18);
  Mem_Set16(iVar1 + 0x7e,0,0x10);
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = param_2;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined1 *)(iVar1 + 0x7c) = 0;
  *(undefined1 *)(iVar1 + 0x7d) = 100;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x60) = param_2;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  return;
}

// 0x002b1a80  size 0x968
undefined4 script_sub_002b1a80(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  int aiStack_40 [9];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int aiStack_10 [3];
  undefined1 uStack_1;
  
  iVar13 = 0;
  iVar12 = 0;
  piVar15 = aiStack_40;
  iStack_14 = 0;
  iStack_18 = 0;
  iStack_1c = 0;
  iVar5 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  iVar10 = *(int *)(iVar5 + 0x6ff0);
  puVar16 = (undefined4 *)(iVar5 + 0x6fe4);
  iVar11 = param_1;
  piVar14 = piVar15;
  do {
    bVar4 = false;
    if (0 < *(int *)(iVar11 + 0x2f0)) {
      bVar3 = true;
      bVar1 = *(int *)(iVar11 + 0x1cc) != 0;
      bVar2 = true;
      if (!bVar1) {
        bVar1 = *(int *)(iVar11 + 0x1e8) != 0;
      }
      if (!bVar1) {
        bVar1 = *(int *)(iVar11 + 0x2b8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar11 + 0x2d0) != 0;
        }
        if (!bVar1) {
          bVar2 = false;
        }
      }
      if (!bVar2) {
        bVar1 = *(int *)(iVar11 + 0x2e8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar11 + 0x2ec) != 0;
        }
        if (!bVar1) {
          bVar3 = false;
        }
      }
      if (!bVar3) {
        bVar4 = true;
      }
    }
    if (bVar4) {
      if ((*(int *)(iVar11 + 0x2f4) < 1) || (*(char *)(iVar11 + 0x1d5) < '\x01')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *piVar14 = iVar11 + 0x284;
      iVar13 = iVar13 + *(int *)(*piVar14 + 0xc) + 1;
      iStack_14 = iVar13;
    }
    else {
      *piVar14 = 0;
    }
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 0xda8;
    piVar14 = piVar14 + 1;
  } while (iVar12 < 8);
  iStack_14 = iVar13 + -1;
  *(int *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x700c) = iVar10;
  aiStack_10[2] = 0x53434549;
  aiStack_10[1] = 0x56616769;
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  uVar7 = *(uint *)(iVar5 + 0x6fec);
  if (uVar7 < iVar11 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar16);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
          uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
            uVar7 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar7;
        }
      }
      iVar11 = *(int *)(iVar5 + 0x6ff0);
      uVar7 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar7 < iVar11 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar11,aiStack_10 + 2,4);
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  uVar7 = *(uint *)(iVar5 + 0x6fec);
  if (uVar7 < iVar11 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar16);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
          uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
            uVar7 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar7;
        }
      }
      iVar11 = *(int *)(iVar5 + 0x6ff0);
      uVar7 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar7 < iVar11 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar11,aiStack_10 + 1,4);
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  uVar7 = *(uint *)(iVar5 + 0x6fec);
  if (uVar7 < iVar11 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar16);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
          uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
            uVar7 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar7;
        }
      }
      iVar11 = *(int *)(iVar5 + 0x6ff0);
      uVar7 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar7 < iVar11 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar11,&iStack_14,4);
  iVar11 = 0;
  uVar7 = 0;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  piVar14 = piVar15;
  do {
    if (*piVar14 != 0) {
      uVar17 = 0;
      do {
        iStack_18 = (iStack_14 + 1) * 4 + 0x10 + (iVar11 + uVar17) * 8;
        iVar12 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar12 + 4U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar16);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar12 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar12 + 4U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,&iStack_18,4);
        uVar17 = uVar17 + 1;
        iVar12 = *piVar14;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
      } while (uVar17 <= *(uint *)(iVar12 + 0xc));
      iVar11 = iVar11 + *(uint *)(iVar12 + 0xc) + 1;
    }
    uVar7 = uVar7 + 1;
    piVar14 = piVar14 + 1;
  } while (uVar7 < 8);
  iVar11 = 0;
  uVar7 = 0;
  do {
    iVar12 = *piVar15;
    if (iVar12 != 0) {
      uVar17 = 0;
      iVar13 = 0;
      do {
        iStack_1c = iVar11 + *(int *)(*(int *)(iVar12 + 0x14) + iVar13);
        iVar12 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar12 + 4U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar16);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar12 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar12 + 4U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,&iStack_1c,4);
        iVar12 = *piVar15;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
        iVar12 = *(int *)(iVar12 + 0x14);
        iVar9 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar9 + 2U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar16);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar9 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar9 + 2U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar9,iVar12 + iVar13 + 4,2);
        iVar12 = *piVar15;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
        iVar12 = *(int *)(iVar12 + 0x14);
        iVar9 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar9 + 1U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar16);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar9 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar9 + 1U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar9,iVar12 + iVar13 + 6,1);
        iVar12 = *piVar15;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
        iVar12 = *(int *)(iVar12 + 0x14);
        iVar9 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar9 + 1U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar16);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar9 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar9 + 1U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar9,iVar12 + iVar13 + 7,1);
        uVar17 = uVar17 + 1;
        iVar12 = *piVar15;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
        iVar13 = iVar13 + 8;
      } while (uVar17 <= *(uint *)(iVar12 + 0xc));
      iVar11 = iVar11 + *(int *)(param_1 + 700);
    }
    uVar7 = uVar7 + 1;
    piVar15 = piVar15 + 1;
    param_1 = param_1 + 0xda8;
  } while (uVar7 < 8);
  uStack_1 = 0xff;
  uVar7 = *(uint *)(iVar5 + 0x6ff0) & 0xf;
  if (uVar7 != 0) {
    iVar11 = 0x10 - uVar7;
    iVar12 = 0;
    if (0 < iVar11) {
      do {
        iVar13 = *(int *)(iVar5 + 0x6ff0);
        uVar7 = *(uint *)(iVar5 + 0x6fec);
        if (uVar7 < iVar13 + 1U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar16);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
                uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
                  uVar7 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar7;
              }
            }
            iVar13 = *(int *)(iVar5 + 0x6ff0);
            uVar7 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar7 < iVar13 + 1U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,&uStack_1,1);
        iVar12 = iVar12 + 1;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
      } while (iVar12 < iVar11);
    }
  }
  iVar11 = *(int *)(iVar5 + 0x6ff0);
  aiStack_10[0] = iVar11 - iVar10;
  *(int *)(iVar5 + 0x6ff0) = iVar10 + 8;
  iVar10 = *(int *)(iVar5 + 0x6ff0);
  uVar7 = *(uint *)(iVar5 + 0x6fec);
  if (uVar7 < iVar10 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar7 << 1,*puVar16);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar7 << 1;
          uVar7 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar7) {
            uVar7 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar7;
        }
      }
      iVar10 = *(int *)(iVar5 + 0x6ff0);
      uVar7 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar7 < iVar10 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,aiStack_10,4);
  *(int *)(iVar5 + 0x6ff0) = iVar11;
  return 1;
}

// 0x002b23f0  size 0x1c98
undefined4 script_sub_002b23f0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  short *psVar16;
  uint *puVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  int iVar21;
  int *piVar22;
  int iStack_c0;
  int iStack_b0;
  int iStack_a0;
  uint uStack_90;
  uint auStack_80 [8];
  int aiStack_60 [8];
  int aiStack_40 [10];
  int iStack_18;
  int iStack_14;
  int aiStack_10 [3];
  short sStack_4;
  undefined1 uStack_1;
  
  iVar14 = 0;
  iVar13 = 0;
  piVar19 = aiStack_40;
  piVar18 = aiStack_60;
  iStack_14 = 0;
  iStack_18 = 0;
  sStack_4 = 0;
  iVar5 = param_1 + *(int *)(param_1 + 0x89e8) * 0xda8;
  puVar20 = (undefined4 *)(iVar5 + 0x6fe4);
  iVar10 = *(int *)(iVar5 + 0x6ff0);
  iVar12 = param_1;
  piVar22 = piVar19;
  piVar7 = piVar18;
  do {
    bVar4 = false;
    if (0 < *(int *)(iVar12 + 0x2f0)) {
      bVar3 = true;
      bVar1 = *(int *)(iVar12 + 0x1cc) != 0;
      bVar2 = true;
      if (!bVar1) {
        bVar1 = *(int *)(iVar12 + 0x1e8) != 0;
      }
      if (!bVar1) {
        bVar1 = *(int *)(iVar12 + 0x2b8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar12 + 0x2d0) != 0;
        }
        if (!bVar1) {
          bVar2 = false;
        }
      }
      if (!bVar2) {
        bVar1 = *(int *)(iVar12 + 0x2e8) != 0;
        if (!bVar1) {
          bVar1 = *(int *)(iVar12 + 0x2ec) != 0;
        }
        if (!bVar1) {
          bVar3 = false;
        }
      }
      if (!bVar3) {
        bVar4 = true;
      }
    }
    if (bVar4) {
      if ((*(int *)(iVar12 + 0x2f4) < 1) || (*(char *)(iVar12 + 0x1d5) < '\x01')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *piVar22 = iVar12 + 0x26c;
      *piVar7 = iVar12 + 0x284;
      iVar14 = iVar14 + *(int *)(*piVar22 + 0xc) + 1;
      iStack_14 = iVar14;
    }
    else {
      *piVar22 = 0;
      *piVar7 = 0;
    }
    iVar13 = iVar13 + 1;
    iVar12 = iVar12 + 0xda8;
    piVar22 = piVar22 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar13 < 8);
  iStack_14 = iVar14 + -1;
  *(int *)(param_1 + *(int *)(param_1 + 0x89e8) * 0xda8 + 0x7008) = iVar10;
  aiStack_10[2] = 0x53434549;
  aiStack_10[1] = 0x536d706c;
  iVar12 = *(int *)(iVar5 + 0x6ff0);
  uVar8 = *(uint *)(iVar5 + 0x6fec);
  if (uVar8 < iVar12 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar20);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
          uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
            uVar8 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar8;
        }
      }
      iVar12 = *(int *)(iVar5 + 0x6ff0);
      uVar8 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar8 < iVar12 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,aiStack_10 + 2,4);
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  iVar12 = *(int *)(iVar5 + 0x6ff0);
  uVar8 = *(uint *)(iVar5 + 0x6fec);
  if (uVar8 < iVar12 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar20);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
          uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
            uVar8 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar8;
        }
      }
      iVar12 = *(int *)(iVar5 + 0x6ff0);
      uVar8 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar8 < iVar12 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,aiStack_10 + 1,4);
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  iVar12 = *(int *)(iVar5 + 0x6ff0);
  uVar8 = *(uint *)(iVar5 + 0x6fec);
  if (uVar8 < iVar12 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar20);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
          uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
            uVar8 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar8;
        }
      }
      iVar12 = *(int *)(iVar5 + 0x6ff0);
      uVar8 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar8 < iVar12 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar12,&iStack_14,4);
  puVar17 = auStack_80;
  iVar12 = 0;
  iVar13 = 0;
  *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
  piVar22 = piVar19;
  puVar15 = puVar17;
  do {
    iVar14 = *piVar22;
    if (iVar14 != 0) {
      *puVar15 = 0;
      iVar21 = 0;
      uStack_90 = 0;
      iStack_b0 = 0;
      do {
        if (*(int *)(*(int *)(iVar14 + 0x10) + iStack_b0) == -1) {
          iStack_18 = -1;
        }
        else {
          iVar14 = iVar12 + iVar21;
          iVar21 = iVar21 + 1;
          iVar11 = iStack_14 + 1;
          *puVar15 = *puVar15 + 1;
          iStack_18 = iVar11 * 4 + 0x10 + iVar14 * 0x2a;
        }
        iVar14 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar14 + 4U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar20);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar14 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar14 + 4U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar14,&iStack_18,4);
        iVar14 = *piVar22;
        iStack_b0 = iStack_b0 + 4;
        uStack_90 = uStack_90 + 1;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 4;
      } while (uStack_90 <= *(uint *)(iVar14 + 0xc));
      iVar12 = iVar12 + iVar21;
    }
    iVar13 = iVar13 + 1;
    piVar22 = piVar22 + 1;
    puVar15 = puVar15 + 1;
  } while (iVar13 < 8);
  iStack_c0 = 0;
  iVar12 = 0;
  do {
    iVar13 = *piVar19;
    if (iVar13 != 0) {
      uVar8 = 0;
      iVar14 = 0;
      iStack_a0 = 0;
      do {
        if (*(int *)(*(int *)(iVar13 + 0x10) + iVar14) != -1) {
          psVar16 = (short *)(*(int *)(iVar13 + 0x14) + iStack_a0);
          sStack_4 = *psVar16;
          if (sStack_4 != -1) {
            sStack_4 = sStack_4 + (short)iStack_c0;
          }
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,&sStack_4,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 1,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 3,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 2,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 5,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 3,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 7,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 4,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 9,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 5,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0xb,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 6,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0xd,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 7,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0xf,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 8,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0x11,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 9,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 10,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0xb,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0x17,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0xc,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0x19,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0xd,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0x1b,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0xe,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0x1d,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0xf,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0x1f,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0x10,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0x11,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0x12,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 2U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 2U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0x13,2);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 2;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,psVar16 + 0x14,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
          iVar13 = *(int *)(iVar5 + 0x6ff0);
          uVar9 = *(uint *)(iVar5 + 0x6fec);
          if (uVar9 < iVar13 + 1U) {
            do {
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar9 << 1,*puVar20);
                *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
                if (*(int *)(iVar5 + 0x6fe8) != 0) {
                  *(uint *)(iVar5 + 0x6fec) = uVar9 << 1;
                  uVar9 = *(int *)(iVar5 + 0x6fec) - 1;
                  if (*(uint *)(iVar5 + 0x6ff0) <= uVar9) {
                    uVar9 = *(uint *)(iVar5 + 0x6ff0);
                  }
                  *(uint *)(iVar5 + 0x6ff0) = uVar9;
                }
              }
              iVar13 = *(int *)(iVar5 + 0x6ff0);
              uVar9 = *(uint *)(iVar5 + 0x6fec);
            } while (uVar9 < iVar13 + 1U);
          }
          maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar13,(int)psVar16 + 0x29,1);
          *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
        }
        uVar8 = uVar8 + 1;
        iVar13 = *piVar19;
        iStack_a0 = iStack_a0 + 0x2a;
        iVar14 = iVar14 + 4;
      } while (uVar8 <= *(uint *)(iVar13 + 0xc));
      uVar8 = *(int *)(*piVar18 + 0xc) + 1;
      if (*puVar17 <= uVar8) {
        uVar8 = *puVar17;
      }
      iStack_c0 = iStack_c0 + uVar8;
    }
    iVar12 = iVar12 + 1;
    piVar19 = piVar19 + 1;
    piVar18 = piVar18 + 1;
    puVar17 = puVar17 + 1;
  } while (iVar12 < 8);
  uStack_1 = 0xff;
  uVar8 = *(uint *)(iVar5 + 0x6ff0) & 0xf;
  if (uVar8 != 0) {
    iVar12 = 0x10 - uVar8;
    iVar13 = 0;
    if (0 < iVar12) {
      do {
        iVar14 = *(int *)(iVar5 + 0x6ff0);
        uVar8 = *(uint *)(iVar5 + 0x6fec);
        if (uVar8 < iVar14 + 1U) {
          do {
            if (*(int *)(iVar5 + 0x6fe8) != 0) {
              uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar20);
              *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
              if (*(int *)(iVar5 + 0x6fe8) != 0) {
                *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
                uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
                if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
                  uVar8 = *(uint *)(iVar5 + 0x6ff0);
                }
                *(uint *)(iVar5 + 0x6ff0) = uVar8;
              }
            }
            iVar14 = *(int *)(iVar5 + 0x6ff0);
            uVar8 = *(uint *)(iVar5 + 0x6fec);
          } while (uVar8 < iVar14 + 1U);
        }
        maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar14,&uStack_1,1);
        iVar13 = iVar13 + 1;
        *(int *)(iVar5 + 0x6ff0) = *(int *)(iVar5 + 0x6ff0) + 1;
      } while (iVar13 < iVar12);
    }
  }
  iVar12 = *(int *)(iVar5 + 0x6ff0);
  aiStack_10[0] = iVar12 - iVar10;
  *(int *)(iVar5 + 0x6ff0) = iVar10 + 8;
  iVar10 = *(int *)(iVar5 + 0x6ff0);
  uVar8 = *(uint *)(iVar5 + 0x6fec);
  if (uVar8 < iVar10 + 4U) {
    do {
      if (*(int *)(iVar5 + 0x6fe8) != 0) {
        uVar6 = Mem_Realloc(*(int *)(iVar5 + 0x6fe8),uVar8 << 1,*puVar20);
        *(undefined4 *)(iVar5 + 0x6fe8) = uVar6;
        if (*(int *)(iVar5 + 0x6fe8) != 0) {
          *(uint *)(iVar5 + 0x6fec) = uVar8 << 1;
          uVar8 = *(int *)(iVar5 + 0x6fec) - 1;
          if (*(uint *)(iVar5 + 0x6ff0) <= uVar8) {
            uVar8 = *(uint *)(iVar5 + 0x6ff0);
          }
          *(uint *)(iVar5 + 0x6ff0) = uVar8;
        }
      }
      iVar10 = *(int *)(iVar5 + 0x6ff0);
      uVar8 = *(uint *)(iVar5 + 0x6fec);
    } while (uVar8 < iVar10 + 4U);
  }
  maybe_Mem_CopyQwords(*(int *)(iVar5 + 0x6fe8) + iVar10,aiStack_10,4);
  *(int *)(iVar5 + 0x6ff0) = iVar12;
  return 1;
}

