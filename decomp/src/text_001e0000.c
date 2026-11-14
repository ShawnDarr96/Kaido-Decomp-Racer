// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001e0000 - 0x001e4000
#include "ghidra_types.h"

// 0x001e0430  size 0x48
int FUN_001e0430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0xf8) == -1) {
      return iVar1;
    }
    if (*(int *)(param_1 + 0xfc) == param_2) {
      iVar1 = iVar1 + *(int *)(param_1 + 0x110);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x1c;
  } while (iVar2 < 0x46);
  return iVar1;
}

// 0x001e0480  size 0x50
int FUN_001e0480(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0xf8) == -1) {
      return iVar1;
    }
    if (*(int *)(param_1 + 0xfc) == param_2) {
      iVar1 = iVar1 + *(int *)(param_1 + 0x100) + *(int *)(param_1 + 0x104);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x1c;
  } while (iVar2 < 0x46);
  return iVar1;
}

// 0x001e04d0  size 0x18
undefined4 FUN_001e04d0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x1c + param_1 + 0x100);
}

// 0x001e04f0  size 0xc
void FUN_001e04f0(undefined4 param_1)

{
  *(undefined4 *)(iRam0036f390 + 0x10) = param_1;
  return;
}

// 0x001e0500  size 0xc
undefined4 FUN_001e0500(void)

{
  return *(undefined4 *)(iRam0036f390 + 0x10);
}

// 0x001e0510  size 0x8
undefined4 FUN_001e0510(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8a8);
}

// 0x001e0520  size 0x8
undefined4 FUN_001e0520(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8a4);
}

// 0x001e0530  size 0x8
undefined4 FUN_001e0530(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8a0);
}

// 0x001e0540  size 0xc0
undefined4 FUN_001e0540(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x8b0) == -1) {
    uVar1 = *(undefined4 *)(param_1 + 0x110);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x8b0) * 0x1c + param_1;
    if ((*(uint *)(iVar3 + 0x10c) & 0xe) == 0) {
      uVar1 = *(undefined4 *)(iVar3 + 0x110);
    }
    else {
      lVar2 = GameState_Get_40();
      if (lVar2 == 0) {
        param_1 = (*(int *)(param_1 + 0x8b0) + 1) * 0x1c + param_1;
        if (*(int *)(param_1 + 0xf8) == -1) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 0x110);
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x8b0) + -1;
        if (iVar3 < 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(iVar3 * 0x1c + param_1 + 0x110);
        }
      }
    }
  }
  return uVar1;
}

// 0x001e0600  size 0x8
undefined4 FUN_001e0600(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8b4);
}

// 0x001e0610  size 0x6f0
void FUN_001e0610(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  int iVar16;
  undefined2 uStack_128;
  undefined2 uStack_110;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
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
  undefined4 uStack_b0;
  undefined2 uStack_ac;
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
  undefined1 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
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
  undefined1 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  uVar7 = GameState_Get_40();
  iVar13 = 0;
  lVar8 = GameState_GetMoneyTotal2();
  if (0 < lVar8) {
    do {
      uVar9 = FUN_001ca6b0(iVar13);
      iVar1 = FUN_001dc240((char)iVar13);
      iVar2 = FUN_001ca770(uVar9);
      if ((*(uint *)(iVar2 + 4) & 0x20) == 0) {
        puVar3 = (undefined1 *)FUN_001ca760(uVar9);
        uStack_70 = *puVar3;
        uStack_30 = *(undefined4 *)(puVar3 + 0x40);
        uStack_6e = *(undefined2 *)(puVar3 + 2);
        uStack_2c = *(undefined4 *)(puVar3 + 0x44);
        uStack_6c = *(undefined2 *)(puVar3 + 4);
        iVar12 = 0;
        uStack_6a = *(undefined2 *)(puVar3 + 6);
        uStack_68 = *(undefined2 *)(puVar3 + 8);
        uStack_66 = *(undefined2 *)(puVar3 + 10);
        uStack_64 = *(undefined4 *)(puVar3 + 0xc);
        uStack_60 = *(undefined4 *)(puVar3 + 0x10);
        uStack_5c = *(undefined4 *)(puVar3 + 0x14);
        uStack_58 = *(undefined4 *)(puVar3 + 0x18);
        uStack_54 = *(undefined4 *)(puVar3 + 0x1c);
        uStack_50 = *(undefined4 *)(puVar3 + 0x20);
        uStack_4c = *(undefined4 *)(puVar3 + 0x24);
        uStack_48 = *(undefined4 *)(puVar3 + 0x28);
        uStack_44 = *(undefined4 *)(puVar3 + 0x2c);
        uStack_40 = *(undefined4 *)(puVar3 + 0x30);
        uStack_3c = *(undefined4 *)(puVar3 + 0x34);
        uStack_38 = *(undefined4 *)(puVar3 + 0x38);
        uStack_34 = *(undefined4 *)(puVar3 + 0x3c);
        uStack_28 = puVar3[0x48];
        uStack_20 = *(undefined4 *)(puVar3 + 0x50);
        uStack_1c = *(undefined4 *)(puVar3 + 0x54);
        uStack_18 = *(undefined4 *)(puVar3 + 0x58);
        uStack_14 = *(undefined4 *)(puVar3 + 0x5c);
        uStack_10 = *(uint *)(puVar3 + 0x60);
        uStack_c = *(undefined4 *)(puVar3 + 100);
        iVar2 = iVar1;
        do {
          iVar6 = *(int *)(iVar2 + 0xf8);
          if (iVar6 == -1) break;
          if ((*(uint *)(iVar2 + 0x10c) & 0xe) == 0) {
            iVar4 = GameState_Get_44();
            puVar5 = (undefined4 *)(*(int *)(iVar4 + 0x24) + iVar6 * 0x14);
            iVar16 = puVar5[1];
            uStack_110 = (undefined2)*puVar5;
            iVar4 = GameState_GetArray_3a78(uStack_110);
            iVar6 = *(int *)(iVar2 + 0xf8);
            iVar4 = iVar16 * 0x20 + iVar4;
            iVar16 = GameState_Get_44();
            iVar6 = *(int *)(iVar16 + 0x24) + iVar6 * 0x14;
            iVar16 = *(int *)(iVar6 + 0xc);
            uStack_128 = (undefined2)*(undefined4 *)(iVar6 + 8);
            iVar6 = GameState_GetArray_3a78(uStack_128);
            iVar6 = iVar16 * 0x20 + iVar6;
            iVar16 = FUN_001ca6f0(uVar9);
            if ((iVar16 < iVar4) || (iVar16 = FUN_001ca6f0(uVar9), iVar6 <= iVar16)) {
              if ((*(uint *)(iVar2 + 0x10c) & 1) != 0) {
                lVar8 = GameState_Get_40();
                if (lVar8 == 0) {
                  iVar4 = FUN_001ca6f0(uVar9);
                  if (iVar6 <= iVar4) {
                    *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 2;
                  }
                }
                else {
                  iVar6 = FUN_001ca6f0(uVar9);
                  if (iVar6 < iVar4) {
                    *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 2;
                  }
                }
                uVar11 = *(uint *)(iVar2 + 0x10c);
                if ((uVar11 & 2) == 0) goto LAB_001e09b8;
                if (*(int *)(iVar2 + 0x100) < 1000) {
                  *(undefined4 *)(iVar1 + 0x8ac) = 0;
                }
                else {
                  if (*(int *)(iVar1 + 0x8ac) < 0x46) {
                    *(int *)(iVar1 + 0x8ac) = *(int *)(iVar1 + 0x8ac) + 1;
                    if (*(int *)(iVar1 + 0x8b4) < *(int *)(iVar1 + 0x8ac)) {
                      *(int *)(iVar1 + 0x8b4) = *(int *)(iVar1 + 0x8ac);
                    }
                  }
                  *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 0x10;
                  iVar6 = *(int *)(iVar1 + 0x8ac);
                  iVar4 = 0;
                  if (iVar6 == 2) {
                    iVar4 = 1000;
                  }
                  else if (iVar6 == 3) {
                    iVar4 = 0x5dc;
                  }
                  else if (iVar6 == 4) {
                    iVar4 = 2000;
                  }
                  else if (4 < iVar6) {
                    iVar4 = 3000;
                  }
                  *(int *)(iVar2 + 0x104) = iVar4 + 1000;
                  *(int *)(iVar1 + 0x8a8) = *(int *)(iVar1 + 0x8a8) + *(int *)(iVar2 + 0x104);
                }
                if ((*(int *)(iVar2 + 0x100) + *(int *)(iVar2 + 0x104) < *(int *)(iVar2 + 0x110)) &&
                   (iVar13 == 0)) {
                  FUN_001dc2a0(param_1,0x242);
                }
              }
            }
            else {
              uVar11 = *(uint *)(iVar2 + 0x10c);
              if ((uVar11 & 1) == 0) {
                iVar2 = iVar1 + iVar12 * 0x1c;
                *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 1;
                FUN_001dcd10(iVar1);
                break;
              }
LAB_001e09b8:
              if (*(int *)(iVar2 + 0x108) < 1) {
                *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 4;
                *(undefined4 *)(iVar1 + 0x8ac) = 0;
                if ((*(int *)(iVar2 + 0x100) + *(int *)(iVar2 + 0x104) < *(int *)(iVar2 + 0x110)) &&
                   (iVar13 == 0)) {
                  FUN_001dc2a0(param_1,0x242);
                }
              }
              else if ((uStack_10 & 0x20) == 0) {
                if (((uVar11 & 0xe) == 0) && ((uVar11 & 1) != 0)) {
                  uStack_94 = 0x3f800000;
                  uStack_84 = 0x3f800000;
                  uVar14 = FUN_001ca7c0(uVar9);
                  FUN_001dd580(uVar14,&uStack_f0,uStack_6a,uStack_68,uVar7,0,0);
                  uStack_b0 = uStack_f0;
                  uStack_80 = uStack_c0;
                  uStack_ac = uStack_ec;
                  uStack_7c = uStack_bc;
                  uStack_a0 = uStack_e0;
                  uStack_9c = uStack_dc;
                  uStack_98 = uStack_d8;
                  uStack_94 = uStack_d4;
                  uStack_78 = uStack_b8;
                  uStack_90 = uStack_d0;
                  uStack_8c = uStack_cc;
                  uStack_88 = uStack_c8;
                  uStack_84 = uStack_c4;
                  iVar6 = FUN_001dffd0(iVar1,iVar13,iVar12);
                  *(int *)(iVar1 + 0x8a8) = *(int *)(iVar1 + 0x8a8) + iVar6;
                  *(int *)(iVar2 + 0x108) = *(int *)(iVar2 + 0x108) + -1;
                  *(int *)(iVar1 + 0x8b0) = iVar12;
                }
              }
              else {
                *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 8;
                *(int *)(iVar1 + 0x8a8) = *(int *)(iVar1 + 0x8a8) - *(int *)(iVar2 + 0x100);
                if (*(int *)(iVar1 + 0x8a8) < 0) {
                  *(undefined4 *)(iVar1 + 0x8a8) = 0;
                }
                *(undefined4 *)(iVar2 + 0x100) = 0;
                *(undefined4 *)(iVar1 + 0x8ac) = 0;
                if ((*(int *)(iVar2 + 0x100) + *(int *)(iVar2 + 0x104) < *(int *)(iVar2 + 0x110)) &&
                   (iVar13 == 0)) {
                  FUN_001dc2a0(param_1,0x242);
                }
              }
            }
          }
          iVar12 = iVar12 + 1;
          iVar2 = iVar2 + 0x1c;
        } while (iVar12 < 0x46);
        uVar10 = FUN_001ca730(uVar9);
        if ((uVar10 & 0x100) != 0) {
          fVar15 = (float)FUN_001ca780(uVar9);
          iVar2 = ((int)(fVar15 * 100.0) / 10) * 10;
          if (iVar2 < 10) {
            iVar2 = 10;
          }
          *(int *)(iVar1 + 0x8a4) = *(int *)(iVar1 + 0x8a4) + iVar2;
        }
        if (*(int *)(iVar1 + 0x8a8) < *(int *)(iVar1 + 0x8a4)) {
          *(int *)(iVar1 + 0x8a4) = *(int *)(iVar1 + 0x8a8);
        }
        *(int *)(iVar1 + 0x8a0) = *(int *)(iVar1 + 0x8a8) - *(int *)(iVar1 + 0x8a4);
      }
      iVar13 = iVar13 + 1;
      iVar1 = GameState_GetMoneyTotal2();
    } while (iVar13 < iVar1);
  }
  return;
}

// 0x001e0d10  size 0x68
void FUN_001e0d10(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = GameState_GetMoneyTotal2();
  if (0 < lVar2) {
    do {
      uVar3 = FUN_001dc240((char)iVar4);
      FUN_001e0d80(uVar3,iVar4);
      iVar4 = iVar4 + 1;
      iVar1 = GameState_GetMoneyTotal2();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001e0d80  size 0x364
void FUN_001e0d80(int param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined2 uStack_50;
  undefined2 uStack_40;
  undefined2 uStack_20;
  undefined2 uStack_18;
  
  iVar11 = 0;
  iVar8 = 0;
  iVar7 = param_1;
  do {
    FUN_001dcce0(iVar7 + 0xf8);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 0x1c;
  } while (iVar8 < 0x46);
  uVar1 = FUN_001777b0();
  puVar10 = (undefined4 *)(&PTR_DAT_0031c270)[uVar1 & 0xff];
  iVar8 = GameState_Get_44();
  puVar9 = *(undefined4 **)(iVar8 + 0x24);
  iVar7 = *(int *)(iVar8 + 0x20);
  uVar1 = GameState_Get_1();
  iVar8 = iVar8 + (uVar1 & 0xff) * 0x10;
  iVar16 = *(int *)(iVar8 + 4);
  iVar12 = *(int *)(iVar8 + 0xc);
  iVar8 = GameState_Get_c();
  puVar2 = (undefined4 *)(iVar16 + iVar8 * 0x10);
  uVar14 = *puVar2;
  iVar16 = puVar2[1];
  iVar8 = GameState_Get_10();
  puVar2 = (undefined4 *)(iVar12 + iVar8 * 0x10);
  uVar15 = *puVar2;
  iVar12 = puVar2[1];
  GameState_Get_394();
  iVar8 = GameState_Elem_f0_xcc(param_2);
  GameState_Elem_3e0_x540(*(undefined1 *)(iVar8 + 9));
  lVar5 = GameState_Get_40();
  uStack_40 = (undefined2)uVar14;
  uStack_50 = (undefined2)uVar15;
  if (lVar5 == 0) {
    iVar8 = GameState_GetArray_3a78(uStack_40);
    iVar8 = iVar16 * 0x20 + iVar8;
    iVar3 = GameState_GetArray_3a78(uStack_50);
    iVar3 = iVar12 * 0x20 + iVar3;
  }
  else {
    iVar8 = GameState_GetArray_3a78(uStack_50);
    iVar8 = iVar12 * 0x20 + iVar8;
    iVar3 = GameState_GetArray_3a78(uStack_40);
    iVar3 = iVar16 * 0x20 + iVar3;
  }
  iVar12 = 0;
  if (0 < iVar7) {
    iVar16 = param_1;
    do {
      iVar17 = puVar9[1];
      uVar14 = puVar9[2];
      iVar13 = puVar9[3];
      uStack_20 = (undefined2)*puVar9;
      iVar4 = GameState_GetArray_3a78(uStack_20);
      uStack_18 = (undefined2)uVar14;
      iVar4 = iVar17 * 0x20 + iVar4;
      iVar17 = GameState_GetArray_3a78(uStack_18);
      iVar17 = iVar13 * 0x20 + iVar17;
      if ((((iVar8 < iVar4) && (iVar4 < iVar3)) && (iVar8 < iVar17)) && (iVar17 < iVar3)) {
        *(int *)(iVar16 + 0xf8) = iVar12;
        uVar6 = FUN_001dc290();
        if ((uVar6 & 0x40) == 0) {
          *(undefined4 *)(iVar16 + 0x110) = 0;
        }
        else {
          *(undefined4 *)(iVar16 + 0x110) = *puVar10;
        }
        iVar17 = ((iVar17 - iVar4) * 0x32) / 100;
        iVar4 = iVar17 % 0x3c;
        iVar17 = iVar17 - iVar4;
        if (0x1e < iVar4) {
          iVar17 = iVar17 + 0x3c;
        }
        *(int *)(iVar16 + 0x108) = iVar17;
        iVar4 = 0;
        do {
          lVar5 = FUN_001ddbc0(iVar4,iVar12);
          if (lVar5 != 0) {
            *(int *)(iVar16 + 0xfc) = iVar4;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 10);
        iVar16 = iVar16 + 0x1c;
        iVar11 = iVar11 + 1;
      }
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 5;
      puVar10 = puVar10 + 1;
    } while (iVar12 < iVar7);
  }
  lVar5 = GameState_Get_40();
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x8b0) = 0;
  }
  else {
    *(int *)(param_1 + 0x8b0) = iVar11 + -1;
  }
  return;
}

// 0x001e10f0  size 0x7c0
void FUN_001e10f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  char cVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_b0;
  int iStack_90;
  int aiStack_10 [4];
  
  cVar7 = GameState_GetMoneyTotal2();
  piVar14 = (int *)0xc;
  piVar15 = aiStack_10;
  piVar6 = piVar15;
  while (piVar6 != (int *)0x0) {
    *(undefined1 *)piVar15 = 0;
    piVar15 = (int *)((int)piVar15 + 1);
    piVar14 = (int *)((int)piVar14 + -1);
    piVar6 = piVar14;
  }
  iStack_90 = -1;
  fVar21 = 0.0;
  if (((*(uint *)(param_1 + 4) & 0x80) == 0) && (cVar18 = '\0', '\0' < cVar7)) {
    do {
      uVar11 = FUN_001ca6b0(cVar18);
      iVar8 = FUN_001ca770(uVar11);
      if ((*(uint *)(iVar8 + 4) & 0x60) == 0) {
        fVar20 = (float)FUN_001ca6e0(uVar11);
        if (fVar21 < fVar20) {
          iStack_90 = (int)cVar18;
          fVar21 = fVar20;
        }
        cVar17 = '\0';
        if ('\0' < cVar7) {
          piVar15 = aiStack_10;
          iVar16 = param_1;
          do {
            if (cVar18 != cVar17) {
              uVar11 = FUN_001ca6b0();
              iVar9 = FUN_001ca770(uVar11);
              uVar3 = *(uint *)(iVar9 + 4);
              if (((uVar3 & 0x60) == 0) &&
                 ((((uVar1 = *(uint *)(iVar8 + 4), (uVar1 & 1) != 0 && ((uVar3 & 2) != 0)) ||
                   (((uVar1 & 2) != 0 && ((uVar3 & 1) != 0)))) ||
                  ((((uVar1 & 9) != 0 && ((uVar3 & 0x11) != 0)) ||
                   (((uVar1 & 0x11) != 0 && ((uVar3 & 9) != 0)))))))) {
                fVar19 = (float)FUN_001ca6e0(uVar11);
                if (10.0 < fVar20 - fVar19) {
                  fVar19 = (fVar20 - fVar19) / 10.0;
                  uVar2 = *(undefined4 *)(iVar16 + 0x28);
                  *piVar15 = 1;
                  if (1.0 <= fVar19) {
                    FUN_001dcd20(uVar2,(int)((fVar19 * fVar19 + 4.0) * 100.0),0);
                  }
                }
              }
            }
            cVar17 = cVar17 + '\x01';
            iVar16 = iVar16 + 4;
            piVar15 = piVar15 + 1;
          } while (cVar17 < cVar7);
        }
      }
      cVar18 = cVar18 + '\x01';
    } while (cVar18 < cVar7);
  }
  cVar18 = '\0';
  if ('\0' < cVar7) {
    piVar15 = aiStack_10;
    iVar8 = param_1;
    do {
      uStack_b0 = 0;
      uVar11 = FUN_001ca6b0(cVar18);
      iVar16 = (int)uVar11;
      iVar9 = FUN_001ca770(uVar11);
      bVar5 = true;
      cVar17 = '\0';
      if ('\0' < cVar7) {
        piVar14 = aiStack_10;
        do {
          if ((long)cVar17 != CONCAT44((int)((ulong)(long)cVar18 >> 0x20),(int)cVar18)) {
            uVar11 = FUN_001ca6b0();
            iVar10 = FUN_001ca770(uVar11);
            uVar3 = *(uint *)(iVar9 + 4);
            if ((((((uVar3 & 1) != 0) && ((*(uint *)(iVar10 + 4) & 2) != 0)) ||
                 (((uVar3 & 2) != 0 && ((*(uint *)(iVar10 + 4) & 1) != 0)))) ||
                ((((uVar3 & 9) != 0 && ((*(uint *)(iVar10 + 4) & 0x11) != 0)) ||
                 (((uVar3 & 0x11) != 0 && ((*(uint *)(iVar10 + 4) & 9) != 0)))))) && (*piVar14 == 0)
               ) {
              bVar5 = false;
              break;
            }
          }
          cVar17 = cVar17 + '\x01';
          piVar14 = piVar14 + 1;
        } while (cVar17 < cVar7);
      }
      if (((bVar5) && (*piVar15 == 0)) && (cVar17 = GameState_Get_354_7050(), cVar17 == '\0')) {
        uStack_b0 = 1;
      }
      uVar2 = *(undefined4 *)(iVar8 + 0x28);
      fVar21 = 0.0;
      lVar12 = FUN_001dcdc0(uVar2);
      if (lVar12 != 0) {
        iVar10 = FUN_001ca760(iVar16);
        uVar3 = *(uint *)(iVar10 + 0x60);
        fVar20 = (float)FUN_001ca7c0(iVar16);
        uVar4 = *(undefined4 *)(iVar16 + 0x158);
        uVar11 = phys_sub_00162430(uVar4,0xffffffffff000000);
        if ((fVar20 <= 10.0) || ((uVar3 & 0x20) == 0)) {
          if (((10.0 < fVar20) &&
              (((uVar3 & 0x10) != 0 && (lVar12 = FUN_001dcdc0(uVar2), 0x1312d0 < lVar12)))) &&
             ((long)iStack_90 != (long)cVar18)) {
            uVar11 = phys_sub_00162430(uVar4,0xffffff);
            fVar21 = (float)PhysWorld_GetFirstBody(uVar11);
            fVar21 = fVar21 * 10.0;
            if (200000.0 < fVar21) {
              fVar21 = 200000.0;
            }
          }
        }
        else {
          fVar21 = (float)PhysWorld_GetFirstBody(uVar11);
          fVar21 = fVar21 * 120.0;
          if (250000.0 < fVar21) {
            fVar21 = 250000.0;
          }
        }
        if ((*(uint *)(iVar9 + 4) & 2) != 0) {
          fVar21 = fVar21 * 0.333;
        }
        if ((int)fVar21 != 0) {
          FUN_001dcd20(uVar2,(int)fVar21,uStack_b0);
        }
      }
      cVar18 = cVar18 + '\x01';
      piVar15 = piVar15 + 1;
      iVar8 = iVar8 + 4;
    } while (cVar18 < cVar7);
  }
  cVar18 = '\0';
  if ('\0' < cVar7) {
    do {
      lVar12 = FUN_001dcdc0(*(undefined4 *)(param_1 + 0x28));
      if (lVar12 == 0) {
        uVar11 = FUN_001ca6b0(cVar18);
        FUN_001ca770(uVar11);
        uVar13 = FUN_001ca730(uVar11);
        if ((uVar13 & 0x800) == 0) {
          if (cVar18 == '\x02') {
            FUN_001eb140(0x1008);
          }
          else if (cVar18 == '\x01') {
            lVar12 = GameState_Get_e0();
            if (lVar12 == 2) {
              FUN_001eb140(0x1002);
              FUN_001eb140(0x402);
            }
            else {
              FUN_001eb140(0x1004);
            }
          }
          else if (cVar18 == '\0') {
            FUN_001eb140(0x1001);
            FUN_001eb140(0x401);
          }
        }
      }
      cVar18 = cVar18 + '\x01';
      param_1 = param_1 + 4;
    } while (cVar18 < cVar7);
  }
  return;
}

// 0x001e18d0  size 0x104
void FUN_001e18d0(void)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  RaceResult_Clear(&iStack_20);
  cVar1 = RaceCtx_Get_8();
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    GameState_GetCurrentRecord(&iStack_40);
    iStack_20 = iStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_17 = uStack_37;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
  }
  if (iStack_20 == -1) {
    lVar3 = FUN_001e8fe0();
    if (lVar3 == 0) {
      FUN_001dc2a0(uGpffff8ca0,0x402);
    }
    else {
      FUN_001dc2a0(uGpffff8ca0,0x401);
    }
  }
  else {
    cVar1 = GameState_Get_354();
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)FUN_001dc260(0);
      *puVar2 = 0;
    }
    FUN_001dc2a0(uGpffff8ca0,0x402);
  }
  FUN_001dc1a0(5);
  return;
}

// 0x001e19e0  size 0x2d4
void FUN_001e19e0(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  bVar3 = false;
  bVar2 = false;
  if ((*puGpffff8b0c & 2) == 0) {
    lVar6 = FUN_001e9010();
    if (lVar6 != 0) {
      *param_1 = 5;
    }
    lVar6 = FUN_001e9090();
    if ((lVar6 != 0) && (param_1[2] == 0)) {
      param_1[2] = 1;
      Fade_ToBlack();
    }
    cVar4 = RaceCtx_Get_8();
    if (cVar4 == '\r') {
      uVar10 = 0;
      do {
        uVar1 = puGpffff8b0c[(uVar10 & 0xff) + 5];
        Cam_Update(uVar1);
        if (*(int *)(uVar1 + 0x500) != 0) {
          bVar3 = true;
        }
        uVar7 = FUN_001ca730(*(undefined4 *)(uVar1 + 0x7b0));
        if ((uVar7 & 0x800) != 0) {
          bVar2 = true;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 2);
      uVar10 = puGpffff8b0c[5];
      uVar1 = puGpffff8b0c[6];
      uVar8 = Cam_GetTargetBodyA(uVar10);
      uVar9 = Cam_GetTargetBodyA(uVar1);
      uVar8 = FUN_001ca6b0(uVar8);
      uVar9 = FUN_001ca6b0(uVar9);
      if ((bVar2) && (param_1[1] != 0)) {
        vu0math_sub_00132ae0(uVar10 + 0x4d0,uVar1 + 0x4d0);
        param_1[1] = param_1[1] + -1;
      }
      if (bVar3) {
        if ((bVar2) && (param_1[1] == 0)) {
          fVar11 = (float)FUN_001ca6e0(uVar8);
          fVar12 = (float)FUN_001ca6e0(uVar9);
          if (fVar12 < fVar11) {
            uVar10 = puGpffff8b0c[5];
            puGpffff8b0c[5] = puGpffff8b0c[6];
            puGpffff8b0c[6] = uVar10;
          }
        }
        else {
          fVar11 = (float)FUN_001ca6e0(uVar8);
          fVar12 = (float)FUN_001ca6e0(uVar9);
          if (fVar11 < fVar12) {
            uVar10 = puGpffff8b0c[5];
            puGpffff8b0c[5] = puGpffff8b0c[6];
            puGpffff8b0c[6] = uVar10;
          }
        }
      }
    }
    else {
      uVar10 = puGpffff8b0c[5];
      cVar4 = RaceCtx_GetMode();
      if (cVar4 != '\x06') {
        if (iGpffff8c5c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iGpffff8c5c + 8);
        }
        if ((*(uint *)(iVar5 + 0x10) & 0x40) != 0) {
          Cam_NextMode(uVar10);
        }
      }
      Cam_Update(uVar10);
    }
    if (*(int *)(iGpffff8cc0 + 0xc) != 0) {
      iVar5 = *(int *)(*(int *)(iGpffff8cc0 + 0xc) + 0x14);
      lVar6 = Cam_IsIdle(puGpffff8b0c[5]);
      if (lVar6 == 0) {
        *(undefined4 *)(iVar5 + 4) = 0;
        *(undefined1 *)(iVar5 + 8) = 1;
      }
      else {
        *(undefined4 *)(iVar5 + 4) = 1;
        *(undefined1 *)(iVar5 + 8) = 0;
      }
    }
  }
  else {
    *param_1 = 6;
  }
  return;
}

// 0x001e1cc0  size 0x244
void FUN_001e1cc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = FUN_001e90b0();
  if (lVar6 == 0) {
    return;
  }
  cVar3 = RaceCtx_Get_8();
  uVar7 = 0;
  uGpffff8b08 = (uint)(cVar3 == '\r');
  do {
    iVar1 = *(int *)(iGpffff8b0c + (uVar7 & 0xff) * 4 + 0x14);
    uVar4 = FUN_001ca6b0(uVar7);
    *(undefined4 *)(iVar1 + 0x7b0) = uVar4;
    uVar4 = FUN_001ca6b0(uVar7);
    *(undefined4 *)(iVar1 + 0x7b4) = uVar4;
    piVar5 = (int *)maybe_Options_GetLanguage();
    iVar2 = *piVar5;
    if (iVar2 == 2) {
      *(undefined1 *)(iVar1 + 0x4f9) = 2;
    }
    else if (iVar2 == 1) {
      *(undefined1 *)(iVar1 + 0x4f9) = 1;
    }
    else if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + 0x4f9) = 0;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  if (uGpffff8b08 == 0) {
    iVar1 = *(int *)(iGpffff8b0c + 0x14);
    lVar6 = thunk_FUN_001e8fc0();
    if ((lVar6 == 0) && (cVar3 = RaceCtx_GetMode(), cVar3 != '\x06')) {
      if (iRam0046a590 == 0) {
        Cam_SetMode(iVar1,8);
      }
      else {
        Cam_SetMode(iVar1,7);
        uVar4 = FUN_001ca6b0(1);
        *(undefined4 *)(iVar1 + 0x7b0) = uVar4;
        uVar4 = FUN_001ca6b0(1);
        *(undefined4 *)(iVar1 + 0x7b4) = uVar4;
      }
    }
    else {
      Cam_SetMode(iVar1,3);
    }
  }
  else {
    lVar6 = thunk_FUN_001e8fc0();
    if (lVar6 == 0) {
      uVar7 = 0;
      do {
        Cam_SetMode(*(undefined4 *)(iGpffff8b0c + (uVar7 & 0xff) * 4 + 0x14),0);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 2);
      uVar7 = 0;
      goto LAB_001e1e3c;
    }
    Cam_SetMode(*(undefined4 *)(iGpffff8b0c + 0x14),3);
    Cam_SetMode(*(undefined4 *)(iGpffff8b0c + 0x18),3);
    uGpffff8b08 = 0;
  }
  uVar7 = 0;
LAB_001e1e3c:
  do {
    Cam_Update(*(undefined4 *)(iGpffff8b0c + (uVar7 & 0xff) * 4 + 0x14));
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  lVar6 = FUN_002fd1c0();
  if (lVar6 == 0) {
    param_1[2] = 0;
  }
  else {
    Gfx_SetDisplayParam(0,0,0,0,0);
    param_1[2] = 0;
  }
  param_1[1] = 0xb4;
  *param_1 = 1;
  return;
}

// 0x001e1f10  size 0x45c
void FUN_001e1f10(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar5 = 0;
  do {
    Cam_ResetTimer(puGpffff8b0c[(uVar5 & 0xff) + 5]);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  puVar7 = (undefined4 *)param_1;
  switch(*puVar7) {
  case 0:
    FUN_001e1cc0(param_1);
    uVar5 = 0;
    goto LAB_001e210c;
  case 1:
    lVar3 = FUN_001e90f0();
    if (lVar3 != 0) {
      *(undefined4 *)(puGpffff8b0c[5] + 0x500) = 1;
      *(undefined4 *)(puGpffff8b0c[6] + 0x500) = 1;
      lVar3 = thunk_FUN_001e8fc0();
      uVar4 = 4;
      if (lVar3 == 0) {
        uVar4 = 3;
      }
      *puVar7 = uVar4;
    }
    break;
  case 2:
    iVar6 = 2;
    if (uGpffff8b08 == 0) {
      iVar6 = 1;
    }
    uVar5 = 0;
    if (iVar6 != 0) {
      do {
        Cam_Update(puGpffff8b0c[(uVar5 & 0xff) + 5]);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar6);
    }
    if ((*puGpffff8b0c & 1) == 0) {
      *puVar7 = 3;
    }
    break;
  case 3:
    if (uGpffff8b08 == 0) {
      if ((*puGpffff8b0c & 2) == 0) {
        lVar3 = FUN_001e9010();
        if (lVar3 != 0) {
          *puVar7 = 5;
        }
        uVar5 = puGpffff8b0c[5];
        if (iGpffff8c5c == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iGpffff8c5c + 8);
        }
        if ((*(uint *)(iVar6 + 0x10) & 0x80) == 0) {
          *(uint *)(uVar5 + 0x7c0) = *(uint *)(uVar5 + 0x7c0) & 0xfffffffe;
        }
        else {
          *(uint *)(uVar5 + 0x7c0) = *(uint *)(uVar5 + 0x7c0) | 1;
        }
        if ((*(uint *)(iVar6 + 0x10) & 0x40) != 0) {
          Cam_NextMode(uVar5);
        }
        Cam_Update(uVar5);
      }
      else {
        *puVar7 = 6;
      }
    }
    else if ((*puGpffff8b0c & 2) == 0) {
      lVar3 = FUN_001e9010();
      if (lVar3 != 0) {
        *puVar7 = 5;
      }
      uVar5 = puGpffff8b0c[6];
      uVar1 = puGpffff8b0c[5];
      if (iGpffff8c5c == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iGpffff8c5c + 8);
      }
      if ((*(uint *)(iVar6 + 0x10) & 0x80) == 0) {
        *(uint *)(uVar1 + 0x7c0) = *(uint *)(uVar1 + 0x7c0) & 0xfffffffe;
      }
      else {
        *(uint *)(uVar1 + 0x7c0) = *(uint *)(uVar1 + 0x7c0) | 1;
      }
      if (iGpffff8c5c == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iGpffff8c5c + 0xc);
      }
      if ((*(uint *)(iVar6 + 0x10) & 0x80) == 0) {
        *(uint *)(uVar5 + 0x7c0) = *(uint *)(uVar5 + 0x7c0) & 0xfffffffe;
      }
      else {
        *(uint *)(uVar5 + 0x7c0) = *(uint *)(uVar5 + 0x7c0) | 1;
      }
      Cam_Update();
      Cam_Update(uVar5);
    }
    else {
      *puVar7 = 6;
    }
    break;
  case 4:
    FUN_001e19e0(param_1);
    break;
  case 5:
    lVar3 = FUN_001e9010();
    if (lVar3 == 0) {
      puVar7[2] = 0;
      lVar3 = thunk_FUN_001e8fc0();
      if (lVar3 == 0) {
        *puVar7 = 3;
        if ((*puGpffff8b0c & 2) == 0) {
          lVar3 = FUN_001e9010();
          if (lVar3 != 0) {
            *puVar7 = 5;
          }
          uVar5 = puGpffff8b0c[5];
          if (iGpffff8c5c == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iGpffff8c5c + 8);
          }
          if ((*(uint *)(iVar6 + 0x10) & 0x80) == 0) {
            *(uint *)(uVar5 + 0x7c0) = *(uint *)(uVar5 + 0x7c0) & 0xfffffffe;
          }
          else {
            *(uint *)(uVar5 + 0x7c0) = *(uint *)(uVar5 + 0x7c0) | 1;
          }
          if ((*(uint *)(iVar6 + 0x10) & 0x40) != 0) {
            Cam_NextMode(uVar5);
          }
          Cam_Update(uVar5);
        }
        else {
          *puVar7 = 6;
        }
      }
      else {
        *puVar7 = 4;
        FUN_001e19e0(param_1);
      }
    }
    break;
  case 6:
    *puGpffff8b0c = *puGpffff8b0c & 0xfffffffd;
    cVar2 = RaceCtx_Get_8();
    uGpffff8b08 = (uint)(cVar2 == '\r');
    puVar7[2] = 0;
    *puVar7 = 0;
  }
  uVar5 = 0;
LAB_001e210c:
  do {
    FUN_001848e0(puGpffff8b0c[(uVar5 & 0xff) + 5]);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  return;
}

// 0x001e2420  size 0x1f78
/* WARNING: Removing unreachable block (ram,0x001e345c) */
/* WARNING: Removing unreachable block (ram,0x001e3228) */
/* WARNING: Removing unreachable block (ram,0x001e3350) */
/* WARNING: Removing unreachable block (ram,0x001e3550) */
/* WARNING: Removing unreachable block (ram,0x001e34b0) */
/* WARNING: Removing unreachable block (ram,0x001e33bc) */
/* WARNING: Removing unreachable block (ram,0x001e32b0) */
/* WARNING: Removing unreachable block (ram,0x001e3188) */
/* WARNING: Removing unreachable block (ram,0x001e31dc) */
/* WARNING: Removing unreachable block (ram,0x001e3304) */
/* WARNING: Removing unreachable block (ram,0x001e3410) */
/* WARNING: Removing unreachable block (ram,0x001e3504) */

void FUN_001e2420(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iStack_b20;
  int iStack_b10;
  int iStack_b00;
  int iStack_af0;
  int iStack_ae0;
  int iStack_ad0;
  int iStack_ac0;
  int iStack_ab0;
  int *piStack_aa0;
  uint uStack_a60;
  uint uStack_a50;
  int iStack_a40;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 auStack_a10 [52];
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined1 auStack_930 [16];
  uint auStack_920 [170];
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  float fStack_620;
  float fStack_61c;
  undefined1 auStack_610 [20];
  undefined4 uStack_5fc;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined1 auStack_580 [16];
  undefined1 auStack_570 [16];
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  float fStack_54c;
  undefined4 uStack_548;
  undefined1 auStack_540 [16];
  undefined1 auStack_530 [64];
  undefined1 auStack_4f0 [64];
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [16];
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [16];
  undefined1 auStack_460 [16];
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [16];
  undefined1 auStack_430 [64];
  undefined1 auStack_3f0 [64];
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [16];
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  float fStack_30c;
  undefined4 uStack_308;
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [64];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [64];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 auStack_160 [4];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
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
  undefined4 auStack_100 [4];
  undefined1 auStack_f0 [12];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 auStack_10 [16];
  
  iVar1 = *(int *)(iRam0036f1fc + 0x14);
  iVar11 = *(int *)(iRam0036f1fc + 0x18);
  if (((param_1[6] & 1U) == 0) && ((param_1[6] & 2U) == 0)) {
    FUN_001a0670();
    param_1[6] = param_1[6] | 2;
    param_1[6] = param_1[6] | 1;
  }
  uVar28 = param_1[6];
  if (((uVar28 & 1) == 0) && ((uVar28 & 4) == 0)) {
    param_1[6] = uVar28 | 0x20;
    param_1[6] = param_1[6] | 8;
    if (iRam0036f1f8 == 0) {
      FUN_0019fbd0(fRam004311a4,0,iVar1 + 0x420,0);
      FUN_0019f250(fRam004311a4,fRam004311a4 + 200.0,0,iVar1 + 0x420,0);
    }
    else {
      FUN_0019fbd0(0x43fa0000,0,iVar1 + 0x420,0);
      FUN_0019f250(0x43fa0000,0x442f0000,0,iVar1 + 0x420,0);
      FUN_0019fbd0(0x43fa0000,1,iVar11 + 0x420,0);
      FUN_0019f250(0x43fa0000,0x442f0000,1,iVar11 + 0x420,0);
    }
    param_1[6] = param_1[6] & 0xffffffdf;
    param_1[6] = param_1[6] & 0xfffffff7;
    param_1[6] = param_1[6] | 4;
    param_1[6] = param_1[6] | 1;
    param_1[6] = param_1[6] | 8;
  }
  if ((cRam0036f23c == '\x02') && (cRam0036f234 == '\x02')) {
    FUN_001e9030();
  }
  lVar14 = FUN_001e90b0();
  if (lVar14 != 0) {
    if ((param_1[6] & 1U) != 0) {
      Sema_Wait(0x36efc0);
      iVar19 = iRam00386628;
      Sema_Signal(0x36efc0,0);
      if (iVar19 == 0) {
        param_1[6] = param_1[6] & 0xfffffffe;
      }
    }
    if ((param_1[6] & 7U) == 6) {
      lVar14 = FUN_001e9050();
      if (lVar14 == 0) {
        FUN_001e9070();
      }
      lVar14 = FUN_001e90f0();
      if ((lVar14 == 1) && (lVar14 = FUN_001e9090(), lVar14 == 0)) {
        Loading_Update();
        if (iRam0036f1f8 == 0) {
          lVar14 = thunk_FUN_001e8fc0();
          if (lVar14 == 0) {
            FUN_0019fbd0(fRam004311a4,0,iVar1 + 0x420,0);
            FUN_0019f250(0x42c80000,fRam004311a4 + 50.0,0,iVar1 + 0x420,0);
          }
          else {
            Cam_UpdateShake(*(undefined4 *)(iRam0036f1fc + 0x14),auStack_10);
            FUN_0019fbd0(fRam004311a4,0,iVar1 + 0x420,auStack_10);
            FUN_0019f250(0x42c80000,fRam004311a4 + 50.0,0,iVar1 + 0x420,auStack_10);
          }
        }
        else {
          FUN_0019fbd0(fRam00431764,0,iVar1 + 0x420,iVar11 + 0x420);
          FUN_0019d120(0x42960000,fRam00431764 + 50.0,0x42960000,fRam00431d24 + 50.0,0,1);
        }
        iStack_a40 = 0;
        piStack_aa0 = param_1;
        do {
          lVar14 = FUN_001ca6b0(iStack_a40);
          GameState_CopyPlayerRecord(auStack_a10,iStack_a40);
          puVar7 = auStack_a10;
          puVar20 = &uStack_e0;
          iVar19 = 0x33;
          do {
            iVar19 = iVar19 + -1;
            *puVar20 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar20 = puVar20 + 1;
          } while (0 < iVar19);
          if (((((((uStack_dc & 0x60) == 0) || (lVar15 = GameState_Get_ec(), lVar15 != 0)) &&
                (((uStack_dc & 0x20) == 0 || (lVar15 = FUN_001e8f60(), lVar15 != 0)))) &&
               (((uStack_dc & 0x40) == 0 || (lVar15 = FUN_001e8f40(), lVar15 != 0)))) &&
              (((uStack_dc & 0x100) == 0 || (bVar6 = FUN_001dc1b0(), 2 < bVar6)))) &&
             ((uStack_a50 = 0xc, lVar14 != 0 && (piStack_aa0[7] != 0)))) {
            FUN_001e48a0(param_1,piStack_aa0[7] + 0x110,lVar14,iStack_a40);
            iVar19 = (int)lVar14;
            if ((iStack_a40 == 0) && (lVar15 = FUN_001e8fa0(), lVar15 != 0)) {
              puVar12 = (undefined1 *)0x10;
              puVar21 = auStack_f0;
              puVar3 = puVar21;
              while (puVar3 != (undefined1 *)0x0) {
                *puVar21 = 0;
                puVar21 = puVar21 + 1;
                puVar12 = puVar12 + -1;
                puVar3 = puVar12;
              }
              iVar25 = 0;
              puVar20 = auStack_100;
              do {
                iVar8 = FUN_001ca740(lVar14,iVar25);
                *puVar20 = *(undefined4 *)(iVar8 + 0x14);
                vu0math_sub_00132b70(auStack_f0,auStack_f0,iVar8 + 0x20);
                iVar25 = iVar25 + 1;
                puVar20 = puVar20 + 1;
              } while (iVar25 < 4);
              vu0math_sub_00132b10(0x3e800000,auStack_f0,auStack_f0);
              uStack_e4 = 0x3f800000;
              uVar16 = FUN_001e8f30();
              Course_TransformStartPoint(uVar16,iVar19 + 0xe0,auStack_f0,auStack_100);
            }
            if (iRam0036f1f8 == 0) {
              if ((iStack_a40 == 0) && (lVar15 = Cam_IsIdle(iVar1), lVar15 != 0)) {
                uStack_140 = *(undefined4 *)(iVar19 + 0xe0);
                uStack_13c = *(undefined4 *)(iVar19 + 0xe4);
                uStack_138 = *(undefined4 *)(iVar19 + 0xe8);
                uStack_134 = *(undefined4 *)(iVar19 + 0xec);
                uStack_130 = *(undefined4 *)(iVar19 + 0xf0);
                uStack_12c = *(undefined4 *)(iVar19 + 0xf4);
                uStack_128 = *(undefined4 *)(iVar19 + 0xf8);
                uStack_124 = *(undefined4 *)(iVar19 + 0xfc);
                uStack_120 = *(undefined4 *)(iVar19 + 0x100);
                uStack_11c = *(undefined4 *)(iVar19 + 0x104);
                uStack_118 = *(undefined4 *)(iVar19 + 0x108);
                uStack_114 = *(undefined4 *)(iVar19 + 0x10c);
                uStack_110 = *(undefined4 *)(iVar19 + 0x110);
                uStack_10c = *(undefined4 *)(iVar19 + 0x114);
                uStack_108 = *(undefined4 *)(iVar19 + 0x118);
                uStack_104 = *(undefined4 *)(iVar19 + 0x11c);
                iVar19 = piStack_aa0[7];
                vu0math_sub_00132ae0(iVar19 + 0x120,&uStack_140);
                vu0math_sub_00132ae0(iVar19 + 0x130,&uStack_130);
                vu0math_sub_00132ae0(iVar19 + 0x140,&uStack_120);
                vu0math_sub_00132ae0(iVar19 + 0x150,&uStack_110);
                goto LAB_001e311c;
              }
            }
            else {
              if ((iStack_a40 == 0) && (lVar15 = Cam_IsIdle(iVar1), lVar15 != 0)) {
                uStack_a50 = 8;
              }
              if ((iStack_a40 == 1) && (lVar15 = Cam_IsIdle(iVar11), lVar15 != 0)) {
                uStack_a50 = uStack_a50 & 0xfffffff7;
              }
            }
            lVar15 = FUN_001a4fe0(piStack_aa0[7]);
            if (lVar15 != 0) {
              lVar15 = FUN_001e8f60();
              if ((lVar15 == 0) || ((uStack_dc & 0x20) == 0)) {
                puVar12 = (undefined1 *)0x10;
                puVar21 = auStack_360;
                puVar3 = puVar21;
                while (puVar3 != (undefined1 *)0x0) {
                  *puVar21 = 0;
                  puVar21 = puVar21 + 1;
                  puVar12 = puVar12 + -1;
                  puVar3 = puVar12;
                }
                uStack_3a0 = *(undefined4 *)(iVar19 + 0xe0);
                iVar25 = piStack_aa0[7];
                iVar8 = iVar25 + 0x110;
                uStack_39c = *(undefined4 *)(iVar19 + 0xe4);
                uStack_398 = *(undefined4 *)(iVar19 + 0xe8);
                uStack_394 = *(undefined4 *)(iVar19 + 0xec);
                uStack_390 = *(undefined4 *)(iVar19 + 0xf0);
                uStack_38c = *(undefined4 *)(iVar19 + 0xf4);
                uStack_388 = *(undefined4 *)(iVar19 + 0xf8);
                uStack_384 = *(undefined4 *)(iVar19 + 0xfc);
                uStack_380 = *(undefined4 *)(iVar19 + 0x100);
                uStack_37c = *(undefined4 *)(iVar19 + 0x104);
                uStack_378 = *(undefined4 *)(iVar19 + 0x108);
                uStack_374 = *(undefined4 *)(iVar19 + 0x10c);
                uStack_3b0 = *(undefined4 *)(iVar19 + 0x110);
                uStack_3ac = *(undefined4 *)(iVar19 + 0x114);
                uStack_3a8 = *(undefined4 *)(iVar19 + 0x118);
                uStack_364 = *(undefined4 *)(iVar19 + 0x11c);
                uStack_370 = uStack_3b0;
                uStack_36c = uStack_3ac;
                uStack_368 = uStack_3a8;
                vu0math_sub_00132ae0(iVar25 + 0x120,&uStack_3a0);
                vu0math_sub_00132ae0(iVar25 + 0x130,&uStack_390);
                vu0math_sub_00132ae0(iVar25 + 0x140,&uStack_380);
                vu0math_sub_00132ae0(iVar25 + 0x150,&uStack_370);
                uVar28 = 0;
                iStack_ab0 = 0;
                iStack_ae0 = iVar8;
                iStack_ad0 = iVar8;
                iStack_ac0 = iVar8;
                do {
                  uVar29 = 0;
                  iStack_af0 = iStack_ad0;
                  iVar9 = iStack_ac0;
                  iVar24 = iStack_ae0;
                  do {
                    maybe_Vu0_UnitMatrix(auStack_3f0);
                    uVar27 = (1 - uVar29) + iStack_ab0;
                    maybe_Vu0_UnitMatrix(auStack_430);
                    if (uVar29 == 1) {
                      maybe_Vu0_RotMatrixY(0x40490fdb,auStack_430,auStack_430);
                    }
                    iVar22 = iVar19 + uVar27 * 0x140;
                    maybe_Vu0_RotMatrixX(*(undefined4 *)(iVar22 + 0x1d0),auStack_430,auStack_430);
                    vu0math_sub_00132ba0(iVar9 + 0x1a0,auStack_3f0,auStack_430);
                    maybe_Vu0_UnitMatrix(auStack_3f0);
                    Mat34_Identity(auStack_4b0);
                    phys_sub_00162fb0(auStack_4b0,iVar22 + 0x1e0);
                    vu0math_sub_00132ae0(auStack_470,auStack_4b0);
                    vu0math_sub_00132ae0(auStack_460,auStack_4a0);
                    vu0math_sub_00132ae0(auStack_450,auStack_490);
                    vu0math_sub_00132ae0(auStack_440,auStack_480);
                    vu0math_sub_00132ba0(auStack_3f0,auStack_470,auStack_3f0);
                    maybe_Vu0_UnitMatrix(auStack_4f0);
                    fVar34 = *(float *)(iVar22 + 0x1d8);
                    if (uVar27 < 2) {
                      fVar32 = *(float *)(iVar19 + 0x148);
                    }
                    else {
                      fVar32 = 0.0;
                    }
                    maybe_Vu0_RotMatrixY(fVar34 + fVar32,auStack_4f0,auStack_4f0);
                    maybe_Vu0_RotMatrixY(fVar34,auStack_4f0,auStack_4f0);
                    vu0math_sub_00132ba0(auStack_3f0,auStack_4f0,auStack_3f0);
                    maybe_Vu0_UnitMatrix(auStack_530);
                    if (uVar28 == 0) {
                      maybe_Vu0_RotMatrixX(0x3dd67751,auStack_530,auStack_530);
                    }
                    vu0math_sub_00132ba0(auStack_3f0,auStack_530,auStack_3f0);
                    iVar22 = iVar19 + uVar27 * 0x140;
                    iVar30 = *(int *)(iVar19 + 0x120) + uVar27 * 0x60;
                    uStack_548 = *(undefined4 *)(iVar30 + 0x3a8);
                    uStack_550 = *(undefined4 *)(iVar30 + 0x3a0);
                    fStack_54c = *(float *)(iVar30 + 0x3a4) + *(float *)(iVar22 + 0x1b0);
                    vu0math_sub_00132ae0(auStack_540,&uStack_550);
                    vu0math_sub_00132d20(iVar9 + 0xa0,auStack_3f0,auStack_540);
                    iVar30 = FUN_001ca740(lVar14,uVar27);
                    vu0math_sub_00132ae0(iStack_af0 + 0x60,iVar30 + 0x10);
                    vu0math_sub_00132b70(auStack_360,auStack_360,iVar30 + 0x20);
                    fVar33 = *(float *)(iVar19 + 0xcc8);
                    fVar32 = *(float *)(iVar22 + 0x270);
                    fVar34 = fVar33;
                    if (fVar33 <= fVar32) {
                      fVar34 = fVar32;
                      if (*(float *)(iVar19 + 0xcc4) < fVar32) {
                        fVar34 = *(float *)(iVar19 + 0xcc4);
                      }
                    }
                    *(float *)(iVar24 + 0x2c0) =
                         (fVar34 - fVar33) / (*(float *)(iVar19 + 0xcc4) - fVar33);
                    fVar34 = (float)fabsf(*(undefined4 *)(iVar19 + uVar27 * 0x140 + 0x28c));
                    *(float *)(iVar24 + 0x2d0) = fVar34;
                    if (fVar34 <= 31.415926) {
                      if (15.707963 < fVar34) {
                        *(undefined1 *)(iVar8 + uVar29 + 0x300) = 1;
                      }
                      else {
                        *(undefined1 *)(iVar8 + uVar29 + 0x300) = 0;
                      }
                    }
                    else {
                      *(undefined1 *)(iVar8 + uVar29 + 0x300) = 2;
                    }
                    uVar29 = uVar29 + 1;
                    iVar9 = iVar9 + 0x40;
                    iStack_af0 = iStack_af0 + 0x10;
                    iVar24 = iVar24 + 4;
                  } while (uVar29 < 2);
                  uVar28 = uVar28 + 1;
                  iStack_ab0 = iStack_ab0 + 2;
                  iStack_ac0 = iStack_ac0 + 0x80;
                  iStack_ad0 = iStack_ad0 + 0x20;
                  iStack_ae0 = iStack_ae0 + 8;
                  iVar8 = iVar8 + 2;
                } while (uVar28 < 2);
                vu0math_sub_00132b10(0x3e800000,iVar25 + 0x160,auStack_360);
                *(undefined4 *)(iVar25 + 0x16c) = 0x3f800000;
                cVar4 = GameState_Get_3();
                if (cVar4 == '\x01') {
                  iVar19 = FUN_001ca6b0(iStack_a40);
                  uVar16 = phys_sub_001651a0(*(undefined4 *)(iVar19 + 0x154));
                  fVar34 = 0.0;
                  uStack_560 = DAT_0031c330;
                  uStack_55c = DAT_0031c334;
                  uStack_558 = DAT_0031c338;
                  uStack_554 = DAT_0031c33c;
                  vu0math_sub_00132b90(iVar25 + 0x3b0);
                  vu0math_sub_00132b90(iVar25 + 0x3c0);
                  iVar19 = 0;
                  piVar23 = param_1;
                  do {
                    if (iStack_a40 != iVar19) {
                      lVar15 = FUN_001ca6b0(iVar19);
                      iVar8 = GameState_Elem_f0_xcc(iVar19);
                      if ((lVar15 != 0) && ((*(uint *)(iVar8 + 4) & 0x20) == 0)) {
                        uVar18 = FUN_001ca730(lVar15);
                        if ((uVar18 & 8) == 0) {
                          uVar18 = FUN_001ca730(lVar15);
                          if ((uVar18 & 0x80) == 0) goto LAB_001e3fb8;
                        }
                        uVar18 = FUN_001ca730(lVar15);
                        if ((uVar18 & 0x10) != 0) {
                          iVar8 = (int)lVar15;
                          uStack_5c0 = *(undefined4 *)(iVar8 + 0xe0);
                          uStack_5bc = *(undefined4 *)(iVar8 + 0xe4);
                          uStack_5b8 = *(undefined4 *)(iVar8 + 0xe8);
                          uStack_5b4 = *(undefined4 *)(iVar8 + 0xec);
                          uStack_5b0 = *(undefined4 *)(iVar8 + 0xf0);
                          uStack_5ac = *(undefined4 *)(iVar8 + 0xf4);
                          uStack_5a8 = *(undefined4 *)(iVar8 + 0xf8);
                          uStack_5a4 = *(undefined4 *)(iVar8 + 0xfc);
                          uStack_5a0 = *(undefined4 *)(iVar8 + 0x100);
                          uStack_59c = *(undefined4 *)(iVar8 + 0x104);
                          uStack_598 = *(undefined4 *)(iVar8 + 0x108);
                          uStack_594 = *(undefined4 *)(iVar8 + 0x10c);
                          uStack_5d0 = *(undefined4 *)(iVar8 + 0x110);
                          uStack_5cc = *(undefined4 *)(iVar8 + 0x114);
                          uStack_5c8 = *(undefined4 *)(iVar8 + 0x118);
                          uStack_584 = *(undefined4 *)(iVar8 + 0x11c);
                          uStack_590 = uStack_5d0;
                          uStack_58c = uStack_5cc;
                          uStack_588 = uStack_5c8;
                          fVar32 = (float)Vu0_Vec3Distance(auStack_580,uVar16,&uStack_5d0);
                          fVar32 = fVar32 / 5.0;
                          if (fVar32 < 1.0) {
                            fVar32 = 1.0;
                          }
                          fVar33 = (float)vu0math_sub_00132ab0(auStack_580,&uStack_5c0);
                          fVar32 = (fVar33 * fVar33 * fVar33) / fVar32;
                          if (fVar34 < fVar32) {
                            if ((*(uint *)(piVar23[7] + 0x110) & 8) != 0) {
                              fVar32 = fVar32 * 1.2;
                            }
                            vu0math_sub_00132b10(0x3f800000,auStack_570,auStack_580);
                            fVar34 = fVar32;
                          }
                        }
                      }
                    }
LAB_001e3fb8:
                    iVar19 = iVar19 + 1;
                    piVar23 = piVar23 + 1;
                  } while (iVar19 < 3);
                  vu0math_sub_00132b10(fVar34,iVar25 + 0x3b0,&uStack_560);
                  *(undefined4 *)(iVar25 + 0x3bc) = 0;
                  vu0math_sub_00132ae0(iVar25 + 0x3c0,auStack_570);
                  *(undefined4 *)(iVar25 + 0x3cc) = 0x3f800000;
                }
                else {
                  vu0math_sub_00132ae0(iVar25 + 0x3b0,0x436220);
                  vu0math_sub_00132b30(iVar25 + 0x3b0,iVar25 + 0x3b0,iVar25 + 0x160);
                  *(undefined4 *)(iVar25 + 0x3c0) = 0;
                  *(undefined4 *)(iVar25 + 0x3c4) = 0xbf800000;
                  *(undefined4 *)(iVar25 + 0x3c8) = 0;
                  *(undefined4 *)(iVar25 + 0x3cc) = 0x3f800000;
                }
              }
              else {
                puVar7 = (undefined4 *)0x10;
                puVar20 = &uStack_150;
                puVar2 = puVar20;
                while (puVar2 != (undefined4 *)0x0) {
                  *(undefined1 *)puVar20 = 0;
                  puVar20 = (undefined4 *)((int)puVar20 + 1);
                  puVar7 = (undefined4 *)((int)puVar7 + -1);
                  puVar2 = puVar7;
                }
                iVar25 = piStack_aa0[7];
                iVar8 = iVar25 + 0x110;
                lVar15 = FUN_001e9010();
                if (lVar15 == 0) {
                  uVar16 = FUN_001e8f30();
                  lVar15 = Course_GetStartTransform(uVar16,auStack_1a0,&uStack_150,auStack_160);
                }
                else {
                  iVar9 = FUN_001e8f30();
                  lVar15 = Course_GetStartTransform(iVar9 + -1,auStack_1a0,&uStack_150,auStack_160);
                }
                vu0math_sub_00132ae0(iVar25 + 0x120,auStack_1a0);
                vu0math_sub_00132ae0(iVar25 + 0x130,auStack_190);
                vu0math_sub_00132ae0(iVar25 + 0x140,auStack_180);
                vu0math_sub_00132ae0(iVar25 + 0x150,&uStack_170);
                *(undefined4 *)(iVar25 + 0x160) = uStack_150;
                *(undefined4 *)(iVar25 + 0x164) = uStack_14c;
                *(undefined4 *)(iVar25 + 0x168) = uStack_148;
                *(undefined4 *)(iVar25 + 0x16c) = uStack_144;
                uStack_1b0 = uStack_170;
                uStack_1ac = uStack_16c;
                uStack_1a8 = uStack_168;
                lVar17 = FUN_001e9010();
                if (lVar17 == 0) {
                  if ((lVar15 == 0) || (lVar15 = FUN_001e8f30(), lVar15 == 0)) {
                    fVar34 = 0.0;
                  }
                  else {
                    fVar34 = *(float *)(iVar19 + 0x1788);
                  }
                  fVar34 = (((fVar34 * 1000.0) / 216000.0) /
                           ((*(float *)(iVar19 + 0xda4) + *(float *)(iVar19 + 0xeb4)) * 0.5 *
                           6.2831855)) * 6.2831855;
                  *(float *)(iVar19 + 0x1794) = fVar34;
                  *(float *)(iVar19 + 0x1790) = *(float *)(iVar19 + 0x1790) + fVar34;
                  while( true ) {
                    while (3.1415927 < *(float *)(iVar19 + 0x1790)) {
                      *(float *)(iVar19 + 0x1790) = *(float *)(iVar19 + 0x1790) - 6.2831855;
                    }
                    if (-3.1415927 <= *(float *)(iVar19 + 0x1790)) break;
                    *(float *)(iVar19 + 0x1790) = *(float *)(iVar19 + 0x1790) + 6.2831855;
                  }
                }
                uStack_a60 = 0;
                iVar9 = 0;
                iStack_b20 = iVar8;
                iStack_b10 = iVar8;
                iStack_b00 = iVar8;
                do {
                  uVar28 = 0;
                  iVar24 = iStack_b00;
                  iVar22 = iStack_b10;
                  iVar30 = iStack_b20;
                  do {
                    maybe_Vu0_UnitMatrix(auStack_1f0);
                    iVar26 = (1 - uVar28) + iVar9;
                    maybe_Vu0_UnitMatrix(auStack_230);
                    if (uVar28 == 1) {
                      maybe_Vu0_RotMatrixY(0x40490fdb,auStack_230,auStack_230);
                    }
                    maybe_Vu0_RotMatrixX(*(undefined4 *)(iVar19 + 0x1790),auStack_230,auStack_230);
                    vu0math_sub_00132ba0(iVar24 + 0x1a0,auStack_1f0,auStack_230);
                    maybe_Vu0_UnitMatrix(auStack_1f0);
                    Mat34_Identity(auStack_2b0);
                    iVar31 = iVar19 + iVar26 * 0x140;
                    phys_sub_00162fb0(auStack_2b0,iVar31 + 0x1e0);
                    vu0math_sub_00132ae0(auStack_270,auStack_2b0);
                    vu0math_sub_00132ae0(auStack_260,auStack_2a0);
                    vu0math_sub_00132ae0(auStack_250,auStack_290);
                    vu0math_sub_00132ae0(auStack_240,auStack_280);
                    vu0math_sub_00132ba0(auStack_1f0,auStack_270,auStack_1f0);
                    maybe_Vu0_UnitMatrix(auStack_2f0);
                    if (iVar26 == 3) {
LAB_001e2e10:
                      fVar34 = -*(float *)(*(int *)(iVar19 + 0x120) + 0x360);
                    }
                    else if (iVar26 == 2) {
                      fVar34 = *(float *)(*(int *)(iVar19 + 0x120) + 0x360);
                    }
                    else if (iVar26 == 1) {
                      fVar34 = -*(float *)(*(int *)(iVar19 + 0x120) + 0x250);
                    }
                    else {
                      if (iVar26 != 0) goto LAB_001e2e10;
                      fVar34 = *(float *)(*(int *)(iVar19 + 0x120) + 0x250);
                    }
                    maybe_Vu0_RotMatrixY(fVar34,auStack_2f0,auStack_2f0);
                    vu0math_sub_00132ba0(auStack_1f0,auStack_2f0,auStack_1f0);
                    iVar10 = *(int *)(iVar19 + 0x120) + iVar26 * 0x60;
                    uStack_308 = *(undefined4 *)(iVar10 + 0x3a8);
                    uStack_310 = *(undefined4 *)(iVar10 + 0x3a0);
                    fStack_30c = *(float *)(iVar10 + 0x3a4) + *(float *)(iVar31 + 0x1b0);
                    vu0math_sub_00132ae0(auStack_300,&uStack_310);
                    vu0math_sub_00132d20(iVar24 + 0xa0,auStack_1f0,auStack_300);
                    uStack_314 = 0x3f800000;
                    uStack_320 = *(undefined4 *)(iVar24 + 0xd0);
                    uStack_324 = 0x3f800000;
                    uStack_31c = *(undefined4 *)(iVar24 + 0xd4);
                    uStack_318 = *(undefined4 *)(iVar24 + 0xd8);
                    Mat33_MulVec3(&uStack_a20,auStack_1a0,&uStack_320);
                    uStack_330 = uStack_a20;
                    uStack_32c = uStack_a1c;
                    uStack_328 = uStack_a18;
                    uStack_324 = uStack_a14;
                    *(undefined4 *)(iVar22 + 0x60) = uStack_a20;
                    *(undefined4 *)(iVar22 + 100) = auStack_160[iVar26];
                    *(undefined4 *)(iVar22 + 0x68) = uStack_a18;
                    fVar34 = (float)fabsf(*(float *)(iVar19 + 0x1794) * 60.0);
                    *(float *)(iVar30 + 0x2d0) = fVar34;
                    if (fVar34 <= 31.415926) {
                      if (15.707963 < fVar34) {
                        *(undefined1 *)(iVar8 + uVar28 + 0x300) = 1;
                      }
                      else {
                        *(undefined1 *)(iVar8 + uVar28 + 0x300) = 0;
                      }
                    }
                    else {
                      *(undefined1 *)(iVar8 + uVar28 + 0x300) = 2;
                    }
                    uVar28 = uVar28 + 1;
                    iVar24 = iVar24 + 0x40;
                    iVar22 = iVar22 + 0x10;
                    iVar30 = iVar30 + 4;
                  } while (uVar28 < 2);
                  iVar9 = iVar9 + 2;
                  iStack_b00 = iStack_b00 + 0x80;
                  iStack_b10 = iStack_b10 + 0x20;
                  iStack_b20 = iStack_b20 + 8;
                  uStack_a60 = uStack_a60 + 1;
                  iVar8 = iVar8 + 2;
                } while (uStack_a60 < 2);
                cVar4 = GameState_Get_3();
                if (cVar4 == '\x01') {
                  uStack_340 = DAT_0031c320;
                  uStack_33c = DAT_0031c324;
                  uStack_338 = DAT_0031c328;
                  uStack_334 = DAT_0031c32c;
                  vu0math_sub_00132b10(0,iVar25 + 0x3b0,&uStack_340);
                  *(undefined4 *)(iVar25 + 0x3bc) = 0;
                  vu0math_sub_00132ae0(iVar25 + 0x3c0,auStack_350);
                  *(undefined4 *)(iVar25 + 0x3cc) = 0x3f800000;
                }
                else {
                  vu0math_sub_00132ae0(iVar25 + 0x3b0,0x436220);
                  vu0math_sub_00132b30(iVar25 + 0x3b0,iVar25 + 0x3b0,iVar25 + 0x160);
                  *(undefined4 *)(iVar25 + 0x3c0) = 0;
                  *(undefined4 *)(iVar25 + 0x3c4) = 0xbf800000;
                  *(undefined4 *)(iVar25 + 0x3c8) = 0;
                  *(undefined4 *)(iVar25 + 0x3cc) = 0x3f800000;
                }
                FUN_001a4f50(piStack_aa0[7],uStack_a50);
              }
              iVar19 = piStack_aa0[7];
              cVar4 = GameState_Get_3();
              if ((cVar4 == '\0') && (cVar4 = GameState_Get_2(), cVar4 == '\0')) {
                *(undefined4 *)(iVar19 + 0x49c) = 1;
              }
              else {
                *(undefined4 *)(iVar19 + 0x49c) = 0;
              }
              iVar19 = FUN_001ca760(lVar14);
              lVar15 = (long)*(short *)(iVar19 + 6);
              iVar19 = FUN_001ca760(lVar14);
              lVar14 = (long)*(short *)(iVar19 + 8);
              if (0 < lVar15) {
                do {
                  uVar28 = (int)lVar15 - 1;
                  lVar15 = (long)(int)uVar28;
                  lVar14 = (long)((int)lVar14 +
                                 (int)**(short **)
                                        (*(int *)(iRam0036f230 + 4) + (uVar28 & 0xffff) * 4));
                } while (0 < lVar15);
              }
              iVar19 = piStack_aa0[7];
              uVar13 = FUN_0019dd50(iVar19 + 0x4b0,3,iVar19 + 0x150,lVar14,0xd);
              *(undefined4 *)(iVar19 + 0x4a4) = uVar13;
              FUN_001a4f50(piStack_aa0[7],uStack_a50);
            }
          }
LAB_001e311c:
          puVar20 = puRam004305b4;
          piStack_aa0 = piStack_aa0 + 1;
          iStack_a40 = iStack_a40 + 1;
        } while (iStack_a40 < 3);
        vu0math_sub_00132b10(0xbf800000,0x4361d0,puRam004305b4 + 4);
        uRam004361dc = 0x3f800000;
        fRam00436200 = (float)((uint)puVar20[9] >> 0x10 & 0xff) / 128.0;
        fRam00436204 = (float)((uint)puVar20[9] >> 8 & 0xff) / 128.0;
        fRam00436208 = (float)*(byte *)(puVar20 + 9) / 128.0;
        cVar4 = GameState_Get_3();
        if (cVar4 == '\x01') {
          uRam004361e4 = 0xbf800000;
          uRam004361e0 = 0;
          uRam004361ec = 0x3f800000;
          uRam004361e8 = 0;
          fRam00436210 = (float)((uint)puVar20[10] >> 0x10 & 0xff) / 128.0;
          fRam00436214 = (float)((uint)puVar20[10] >> 8 & 0xff) / 128.0;
          fRam00436218 = (float)*(byte *)(puVar20 + 10) / 128.0;
        }
        else {
          vu0math_sub_00132b10(0x3f800000,0x4361e0,puVar20 + 4);
          fRam00436210 = 0.0;
          fRam00436214 = 0.0;
          fRam00436218 = 0.0;
        }
        uRam004361f0 = 0;
        uRam004361f4 = 0x3f800000;
        uRam004361fc = 0x3f800000;
        uRam004361f8 = 0;
        fRam00436220 = (float)((uint)puVar20[10] >> 0x10 & 0xff) / 128.0;
        fRam00436224 = (float)((uint)puVar20[10] >> 8 & 0xff) / 128.0;
        fRam00436228 = (float)*(byte *)(puVar20 + 10) / 128.0;
        fRam00436180 = (float)((uint)puVar20[8] >> 0x10 & 0xff) / 128.0;
        fRam00436184 = (float)((uint)puVar20[8] >> 8 & 0xff) / 128.0;
        fRam00436188 = (float)*(byte *)(puVar20 + 8) / 128.0;
        FUN_001980a0();
        uVar5 = GameState_Get_2();
        switch(uVar5) {
        case 1:
        case 3:
        case 4:
          cVar4 = FUN_001777b0();
          if (cVar4 != '\x04') {
            FUN_00197e80(0,0);
            Pkt_Init(auStack_610,1,2,0);
            uStack_5fc = 0x432240;
            Pkt_SubmitToChain(auStack_610,0);
            Pkt_End(auStack_610);
            Obj_Reset(auStack_920,4,0xffffffffffffffff);
            uStack_670 = 0x42;
            uStack_660 = 0x70;
            uStack_678 = 0x3f001;
            uStack_65c = 0x70;
            uStack_654 = 0x80;
            auStack_920[0] = auStack_920[0] | 2;
            uStack_658 = 0x70;
            fStack_61c = (float)uRam004322b4;
            fStack_620 = (float)uRam004322b0;
            Pkt_AddPrimitives(auStack_610,auStack_920,1);
            Pkt_Submit(auStack_610,0);
          }
        }
        FUN_001e43b0(param_1);
        FUN_001a3820(1);
        puVar20 = puRam004305b4;
        iVar11 = Cam_GetTargetBodyB(*(undefined4 *)(iRam0036f1fc + 0x14));
        iVar11 = param_1[iVar11 + 7];
        lVar14 = thunk_FUN_001e8fc0();
        if (lVar14 == 0) {
          if ((iRam0036f1f8 == 1) || (cVar4 = GameState_Get_3(), cVar4 == '\x01')) {
            if (param_1[5] == 0) {
              uStack_940 = DAT_0031c340;
              uStack_93c = DAT_0031c344;
              uStack_938 = DAT_0031c348;
              uStack_934 = DAT_0031c34c;
              vu0math_sub_00132ae0(auStack_930,0x4361d0);
              vu0math_sub_00132a90(0x4361d0,0x431150,0x431140);
              param_1[5] = 1;
              FUN_00198870(&uStack_940);
              vu0math_sub_00132ae0(0x4361d0,auStack_930);
            }
          }
          else {
            FUN_00198870(iVar11 + 0x160);
          }
          uVar13 = *puVar20;
        }
        else {
          FUN_00198870(iVar11 + 0x160);
          uVar13 = *puVar20;
        }
        FUN_001986f0(4,uVar13,0);
        FUN_00197e80(1,0);
        FUN_00198010();
        FUN_001a2580();
        FUN_001c5700();
        if (*param_1 == 0) {
          cVar4 = GameState_Get_2();
          if ((cVar4 == '\x01') || (cVar4 = GameState_Get_2(), cVar4 == '\x04')) {
            lVar14 = thunk_FUN_001e8fc0();
            if (lVar14 == 0) {
              lVar14 = Cam_IsIdle(iVar1);
              if ((lVar14 != 0) && (FUN_0018c7e0(param_1 + 0x388), iRam0036f1f8 == 1)) {
                FUN_0018c7e0(param_1 + 0x6fc);
              }
            }
            else if (param_1[1] != 0) {
              if ((char)param_1[2] == '\x01') {
                FUN_0018c7e0(param_1 + 0x14);
              }
              else if ((char)param_1[2] == '\0') {
                FUN_0018c7e0(param_1 + 0x388);
              }
            }
          }
        }
        else {
          lVar14 = thunk_FUN_001e8fc0();
          if (lVar14 != 0) {
            iRam0036f3b4 = iRam0036f3b4 + 1;
            FUN_0018da40(param_1[3]);
          }
        }
        if (*(int *)(*(int *)(iRam0036f1fc + 0x14) + 0x7c8) != 0) {
          vu0math_sub_00132ae0(0x46a060,param_1[7] + 0x150);
          uRam0046a028 = 8;
        }
        FUN_002d3430();
      }
    }
  }
  return;
}

