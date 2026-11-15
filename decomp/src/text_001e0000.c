// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001e0000 - 0x001e4000
#include "ghidra_types.h"

// 0x001e0430  size 0x48
int maybe_RaceProg_CountC(int param_1,int param_2)

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
int maybe_RaceProg_CountD(int param_1,int param_2)

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
undefined4 RaceProg_GetSplit(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x1c + param_1 + 0x100);
}

// 0x001e04f0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceProg_Set_10(undefined4 param_1)

{
  *(undefined4 *)(_g_RaceProg + 0x10) = param_1;
  return;
}

// 0x001e0500  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceProg_Get_10(void)

{
  return *(undefined4 *)(_g_RaceProg + 0x10);
}

// 0x001e0510  size 0x8
undefined4 SpGauge_GetMax(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8a8);
}

// 0x001e0520  size 0x8
undefined4 SpGauge_GetDrain(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8a4);
}

// 0x001e0530  size 0x8
/* 7 callers */

undefined4 SpGauge_GetValue(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8a0);
}

// 0x001e0540  size 0xc0
undefined4 SpGauge_Update(int param_1)

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
undefined4 Race_GetField_8b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8b4);
}

// 0x001e0610  size 0x6f0
void SpGauge_UpdateAll(undefined8 param_1)

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
  lVar8 = GameState_GetRacerCount();
  if (0 < lVar8) {
    do {
      uVar9 = RaceCar_Get(iVar13);
      iVar1 = RaceProg_GetArray_34((char)iVar13);
      iVar2 = RaceCar_GetIndex(uVar9);
      if ((*(uint *)(iVar2 + 4) & 0x20) == 0) {
        puVar3 = (undefined1 *)RaceCar_GetTracker(uVar9);
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
            iVar16 = RaceCar_GetCheckpoint(uVar9);
            if ((iVar16 < iVar4) || (iVar16 = RaceCar_GetCheckpoint(uVar9), iVar6 <= iVar16)) {
              if ((*(uint *)(iVar2 + 0x10c) & 1) != 0) {
                lVar8 = GameState_Get_40();
                if (lVar8 == 0) {
                  iVar4 = RaceCar_GetCheckpoint(uVar9);
                  if (iVar6 <= iVar4) {
                    *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 2;
                  }
                }
                else {
                  iVar6 = RaceCar_GetCheckpoint(uVar9);
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
                  Flags_Set(param_1,0x242);
                }
              }
            }
            else {
              uVar11 = *(uint *)(iVar2 + 0x10c);
              if ((uVar11 & 1) == 0) {
                iVar2 = iVar1 + iVar12 * 0x1c;
                *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 1;
                LapTime_Reset(iVar1);
                break;
              }
LAB_001e09b8:
              if (*(int *)(iVar2 + 0x108) < 1) {
                *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 4;
                *(undefined4 *)(iVar1 + 0x8ac) = 0;
                if ((*(int *)(iVar2 + 0x100) + *(int *)(iVar2 + 0x104) < *(int *)(iVar2 + 0x110)) &&
                   (iVar13 == 0)) {
                  Flags_Set(param_1,0x242);
                }
              }
              else if ((uStack_10 & 0x20) == 0) {
                if (((uVar11 & 0xe) == 0) && ((uVar11 & 1) != 0)) {
                  uStack_94 = 0x3f800000;
                  uStack_84 = 0x3f800000;
                  uVar14 = RaceCar_GetSpeedKmh(uVar9);
                  RaceRule_PlaceCheckpoint(uVar14,&uStack_f0,uStack_6a,uStack_68,uVar7,0,0);
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
                  iVar6 = RaceProg_UpdateGapMeter(iVar1,iVar13,iVar12);
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
                  Flags_Set(param_1,0x242);
                }
              }
            }
          }
          iVar12 = iVar12 + 1;
          iVar2 = iVar2 + 0x1c;
        } while (iVar12 < 0x46);
        uVar10 = RaceCar_GetFlags(uVar9);
        if ((uVar10 & 0x100) != 0) {
          fVar15 = (float)RaceCar_GetSpeedPerMinute(uVar9);
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
      iVar1 = GameState_GetRacerCount();
    } while (iVar13 < iVar1);
  }
  return;
}

// 0x001e0d10  size 0x68
void RaceProg_UpdateDistances(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = GameState_GetRacerCount();
  if (0 < lVar2) {
    do {
      uVar3 = RaceProg_GetArray_34((char)iVar4);
      RaceProg_ComputeDistance(uVar3,iVar4);
      iVar4 = iVar4 + 1;
      iVar1 = GameState_GetRacerCount();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001e0d80  size 0x364
void RaceProg_ComputeDistance(int param_1,undefined8 param_2)

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
    LapTime_Clear(iVar7 + 0xf8);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 0x1c;
  } while (iVar8 < 0x46);
  uVar1 = GameState_Get_0();
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
        uVar6 = RaceProg_Get_4();
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
          lVar5 = Checkpoint_Update(iVar4,iVar12);
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
void RaceProg_DetectCollisions(int param_1)

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
  
  cVar7 = GameState_GetRacerCount();
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
      uVar11 = RaceCar_Get(cVar18);
      iVar8 = RaceCar_GetIndex(uVar11);
      if ((*(uint *)(iVar8 + 4) & 0x60) == 0) {
        fVar20 = (float)RaceCar_GetPosition(uVar11);
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
              uVar11 = RaceCar_Get();
              iVar9 = RaceCar_GetIndex(uVar11);
              uVar3 = *(uint *)(iVar9 + 4);
              if (((uVar3 & 0x60) == 0) &&
                 ((((uVar1 = *(uint *)(iVar8 + 4), (uVar1 & 1) != 0 && ((uVar3 & 2) != 0)) ||
                   (((uVar1 & 2) != 0 && ((uVar3 & 1) != 0)))) ||
                  ((((uVar1 & 9) != 0 && ((uVar3 & 0x11) != 0)) ||
                   (((uVar1 & 0x11) != 0 && ((uVar3 & 9) != 0)))))))) {
                fVar19 = (float)RaceCar_GetPosition(uVar11);
                if (10.0 < fVar20 - fVar19) {
                  fVar19 = (fVar20 - fVar19) / 10.0;
                  uVar2 = *(undefined4 *)(iVar16 + 0x28);
                  *piVar15 = 1;
                  if (1.0 <= fVar19) {
                    LapTime_GetLapCount(uVar2,(int)((fVar19 * fVar19 + 4.0) * 100.0),0);
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
      uVar11 = RaceCar_Get(cVar18);
      iVar16 = (int)uVar11;
      iVar9 = RaceCar_GetIndex(uVar11);
      bVar5 = true;
      cVar17 = '\0';
      if ('\0' < cVar7) {
        piVar14 = aiStack_10;
        do {
          if ((long)cVar17 != CONCAT44((int)((ulong)(long)cVar18 >> 0x20),(int)cVar18)) {
            uVar11 = RaceCar_Get();
            iVar10 = RaceCar_GetIndex(uVar11);
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
      lVar12 = Raceprog_Nop(uVar2);
      if (lVar12 != 0) {
        iVar10 = RaceCar_GetTracker(iVar16);
        uVar3 = *(uint *)(iVar10 + 0x60);
        fVar20 = (float)RaceCar_GetSpeedKmh(iVar16);
        uVar4 = *(undefined4 *)(iVar16 + 0x158);
        uVar11 = PhysBody_FindShapeWithFlags(uVar4,0xffffffffff000000);
        if ((fVar20 <= 10.0) || ((uVar3 & 0x20) == 0)) {
          if (((10.0 < fVar20) &&
              (((uVar3 & 0x10) != 0 && (lVar12 = Raceprog_Nop(uVar2), 0x1312d0 < lVar12)))) &&
             ((long)iStack_90 != (long)cVar18)) {
            uVar11 = PhysBody_FindShapeWithFlags(uVar4,0xffffff);
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
          LapTime_GetLapCount(uVar2,(int)fVar21,uStack_b0);
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
      lVar12 = Raceprog_Nop(*(undefined4 *)(param_1 + 0x28));
      if (lVar12 == 0) {
        uVar11 = RaceCar_Get(cVar18);
        RaceCar_GetIndex(uVar11);
        uVar13 = RaceCar_GetFlags(uVar11);
        if ((uVar13 & 0x800) == 0) {
          if (cVar18 == '\x02') {
            RaceScene_GetMode(0x1008);
          }
          else if (cVar18 == '\x01') {
            lVar12 = GameState_GetPlayerCount();
            if (lVar12 == 2) {
              RaceScene_GetMode(0x1002);
              RaceScene_GetMode(0x402);
            }
            else {
              RaceScene_GetMode(0x1004);
            }
          }
          else if (cVar18 == '\0') {
            RaceScene_GetMode(0x1001);
            RaceScene_GetMode(0x401);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Race_InitFrame(void)

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
    lVar3 = RaceScene_IsActive();
    if (lVar3 == 0) {
      Flags_Set(_g_RaceProg,0x402);
    }
    else {
      Flags_Set(_g_RaceProg,0x401);
    }
  }
  else {
    cVar1 = GameState_Get_354();
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)RaceProg_GetArray_28(0);
      *puVar2 = 0;
    }
    Flags_Set(_g_RaceProg,0x402);
  }
  RaceProg_Set_8(5);
  return;
}

// 0x001e19e0  size 0x2d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceCam_UpdateIntro(undefined4 *param_1)

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
  if ((*_g_Loading & 2) == 0) {
    lVar6 = RaceScene_IsPaused();
    if (lVar6 != 0) {
      *param_1 = 5;
    }
    lVar6 = RaceScene_IsReplay();
    if ((lVar6 != 0) && (param_1[2] == 0)) {
      param_1[2] = 1;
      Fade_ToBlack();
    }
    cVar4 = RaceCtx_Get_8();
    if (cVar4 == '\r') {
      uVar10 = 0;
      do {
        uVar1 = _g_Loading[(uVar10 & 0xff) + 5];
        Cam_Update(uVar1);
        if (*(int *)(uVar1 + 0x500) != 0) {
          bVar3 = true;
        }
        uVar7 = RaceCar_GetFlags(*(undefined4 *)(uVar1 + 0x7b0));
        if ((uVar7 & 0x800) != 0) {
          bVar2 = true;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 2);
      uVar10 = _g_Loading[5];
      uVar1 = _g_Loading[6];
      uVar8 = Cam_GetTargetBodyA(uVar10);
      uVar9 = Cam_GetTargetBodyA(uVar1);
      uVar8 = RaceCar_Get(uVar8);
      uVar9 = RaceCar_Get(uVar9);
      if ((bVar2) && (param_1[1] != 0)) {
        sceVu0CopyVector(uVar10 + 0x4d0,uVar1 + 0x4d0);
        param_1[1] = param_1[1] + -1;
      }
      if (bVar3) {
        if ((bVar2) && (param_1[1] == 0)) {
          fVar11 = (float)RaceCar_GetPosition(uVar8);
          fVar12 = (float)RaceCar_GetPosition(uVar9);
          if (fVar12 < fVar11) {
            uVar10 = _g_Loading[5];
            _g_Loading[5] = _g_Loading[6];
            _g_Loading[6] = uVar10;
          }
        }
        else {
          fVar11 = (float)RaceCar_GetPosition(uVar8);
          fVar12 = (float)RaceCar_GetPosition(uVar9);
          if (fVar11 < fVar12) {
            uVar10 = _g_Loading[5];
            _g_Loading[5] = _g_Loading[6];
            _g_Loading[6] = uVar10;
          }
        }
      }
    }
    else {
      uVar10 = _g_Loading[5];
      cVar4 = RaceCtx_GetMode();
      if (cVar4 != '\x06') {
        if (iRam0036f34c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iRam0036f34c + 8);
        }
        if ((*(uint *)(iVar5 + 0x10) & 0x40) != 0) {
          Cam_NextMode(uVar10);
        }
      }
      Cam_Update(uVar10);
    }
    if (*(int *)(iRam0036f3b0 + 0xc) != 0) {
      iVar5 = *(int *)(*(int *)(iRam0036f3b0 + 0xc) + 0x14);
      lVar6 = Cam_IsIdle(_g_Loading[5]);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceCam_UpdateFinish(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = RaceScene_IsFlag8000();
  if (lVar6 == 0) {
    return;
  }
  cVar3 = RaceCtx_Get_8();
  uVar7 = 0;
  uRam0036f1f8 = (uint)(cVar3 == '\r');
  do {
    iVar1 = *(int *)(_g_Loading + (uVar7 & 0xff) * 4 + 0x14);
    uVar4 = RaceCar_Get(uVar7);
    *(undefined4 *)(iVar1 + 0x7b0) = uVar4;
    uVar4 = RaceCar_Get(uVar7);
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
  if (uRam0036f1f8 == 0) {
    iVar1 = *(int *)(_g_Loading + 0x14);
    lVar6 = RaceScene_IsFlag10();
    if ((lVar6 == 0) && (cVar3 = RaceCtx_GetMode(), cVar3 != '\x06')) {
      if (iRam0046a590 == 0) {
        Cam_SetMode(iVar1,8);
      }
      else {
        Cam_SetMode(iVar1,7);
        uVar4 = RaceCar_Get(1);
        *(undefined4 *)(iVar1 + 0x7b0) = uVar4;
        uVar4 = RaceCar_Get(1);
        *(undefined4 *)(iVar1 + 0x7b4) = uVar4;
      }
    }
    else {
      Cam_SetMode(iVar1,3);
    }
  }
  else {
    lVar6 = RaceScene_IsFlag10();
    if (lVar6 == 0) {
      uVar7 = 0;
      do {
        Cam_SetMode(*(undefined4 *)(_g_Loading + (uVar7 & 0xff) * 4 + 0x14),0);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 2);
      uVar7 = 0;
      goto LAB_001e1e3c;
    }
    Cam_SetMode(*(undefined4 *)(_g_Loading + 0x14),3);
    Cam_SetMode(*(undefined4 *)(_g_Loading + 0x18),3);
    uRam0036f1f8 = 0;
  }
  uVar7 = 0;
LAB_001e1e3c:
  do {
    Cam_Update(*(undefined4 *)(_g_Loading + (uVar7 & 0xff) * 4 + 0x14));
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  lVar6 = Misc_Nop();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceCam_Task(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  uVar4 = 0;
  do {
    Cam_ResetTimer(_g_Loading[(uVar4 & 0xff) + 5]);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  puVar6 = (uint *)param_1;
  if (*puVar6 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(*puVar6) {
    case 0:
      RaceCam_UpdateFinish(param_1);
      uVar4 = 0;
      goto LAB_001e210c;
    case 1:
      lVar3 = RaceScene_IsRunning();
      if (lVar3 != 0) {
        *(undefined4 *)(_g_Loading[5] + 0x500) = 1;
        *(undefined4 *)(_g_Loading[6] + 0x500) = 1;
        lVar3 = RaceScene_IsFlag10();
        uVar4 = 4;
        if (lVar3 == 0) {
          uVar4 = 3;
        }
        *puVar6 = uVar4;
      }
      break;
    case 2:
      iVar5 = 2;
      if (uRam0036f1f8 == 0) {
        iVar5 = 1;
      }
      uVar4 = 0;
      if (iVar5 != 0) {
        do {
          Cam_Update(_g_Loading[(uVar4 & 0xff) + 5]);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < iVar5);
      }
      if ((*_g_Loading & 1) == 0) {
        *puVar6 = 3;
      }
      break;
    case 3:
      if (uRam0036f1f8 == 0) {
        if ((*_g_Loading & 2) == 0) {
          lVar3 = RaceScene_IsPaused();
          if (lVar3 != 0) {
            *puVar6 = 5;
          }
          uVar4 = _g_Loading[5];
          if (iRam0036f34c == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(iRam0036f34c + 8);
          }
          if ((*(uint *)(iVar5 + 0x10) & 0x80) == 0) {
            *(uint *)(uVar4 + 0x7c0) = *(uint *)(uVar4 + 0x7c0) & 0xfffffffe;
          }
          else {
            *(uint *)(uVar4 + 0x7c0) = *(uint *)(uVar4 + 0x7c0) | 1;
          }
          if ((*(uint *)(iVar5 + 0x10) & 0x40) != 0) {
            Cam_NextMode(uVar4);
          }
          Cam_Update(uVar4);
        }
        else {
          *puVar6 = 6;
        }
      }
      else if ((*_g_Loading & 2) == 0) {
        lVar3 = RaceScene_IsPaused();
        if (lVar3 != 0) {
          *puVar6 = 5;
        }
        uVar4 = _g_Loading[6];
        uVar1 = _g_Loading[5];
        if (iRam0036f34c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iRam0036f34c + 8);
        }
        if ((*(uint *)(iVar5 + 0x10) & 0x80) == 0) {
          *(uint *)(uVar1 + 0x7c0) = *(uint *)(uVar1 + 0x7c0) & 0xfffffffe;
        }
        else {
          *(uint *)(uVar1 + 0x7c0) = *(uint *)(uVar1 + 0x7c0) | 1;
        }
        if (iRam0036f34c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iRam0036f34c + 0xc);
        }
        if ((*(uint *)(iVar5 + 0x10) & 0x80) == 0) {
          *(uint *)(uVar4 + 0x7c0) = *(uint *)(uVar4 + 0x7c0) & 0xfffffffe;
        }
        else {
          *(uint *)(uVar4 + 0x7c0) = *(uint *)(uVar4 + 0x7c0) | 1;
        }
        Cam_Update();
        Cam_Update(uVar4);
      }
      else {
        *puVar6 = 6;
      }
      break;
    case 4:
      RaceCam_UpdateIntro(param_1);
      break;
    case 5:
      lVar3 = RaceScene_IsPaused();
      if (lVar3 == 0) {
        puVar6[2] = 0;
        lVar3 = RaceScene_IsFlag10();
        if (lVar3 == 0) {
          *puVar6 = 3;
          if ((*_g_Loading & 2) == 0) {
            lVar3 = RaceScene_IsPaused();
            if (lVar3 != 0) {
              *puVar6 = 5;
            }
            uVar4 = _g_Loading[5];
            if (iRam0036f34c == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(iRam0036f34c + 8);
            }
            if ((*(uint *)(iVar5 + 0x10) & 0x80) == 0) {
              *(uint *)(uVar4 + 0x7c0) = *(uint *)(uVar4 + 0x7c0) & 0xfffffffe;
            }
            else {
              *(uint *)(uVar4 + 0x7c0) = *(uint *)(uVar4 + 0x7c0) | 1;
            }
            if ((*(uint *)(iVar5 + 0x10) & 0x40) != 0) {
              Cam_NextMode(uVar4);
            }
            Cam_Update(uVar4);
          }
          else {
            *puVar6 = 6;
          }
        }
        else {
          *puVar6 = 4;
          RaceCam_UpdateIntro(param_1);
        }
      }
      break;
    case 6:
      *_g_Loading = *_g_Loading & 0xfffffffd;
      cVar2 = RaceCtx_Get_8();
      uRam0036f1f8 = (uint)(cVar2 == '\r');
      puVar6[2] = 0;
      *puVar6 = 0;
    }
  }
  uVar4 = 0;
LAB_001e210c:
  do {
    Cam_NopB(_g_Loading[(uVar4 & 0xff) + 5]);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  return;
}

// 0x001e2390  size 0x8c
void RaceTask_BeginLoading(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  Loading_Begin(0x430750);
  cVar2 = RaceCtx_Get_8();
  uRam0036f1f8 = (uint)(cVar2 == '\r');
  uVar3 = GameState_Get_0();
  uVar4 = GameState_Get_1();
  uVar3 = func_0x00185310(uVar3,uVar4);
  Loading_LoadScreenImage(uVar3);
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x1e2370;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceCam_UpdateReplay(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
  
  iVar1 = *(int *)(_g_Loading + 0x14);
  iVar10 = *(int *)(_g_Loading + 0x18);
  if (((param_1[6] & 1U) == 0) && ((param_1[6] & 2U) == 0)) {
    CourseStream_LoadSky();
    param_1[6] = param_1[6] | 2;
    param_1[6] = param_1[6] | 1;
  }
  uVar27 = param_1[6];
  if (((uVar27 & 1) == 0) && ((uVar27 & 4) == 0)) {
    param_1[6] = uVar27 | 0x20;
    param_1[6] = param_1[6] | 8;
    if (iRam0036f1f8 == 0) {
      CourseStream_RequestTextures(fRam004311a4,0,iVar1 + 0x420,0);
      CourseStream_RequestLod(fRam004311a4,fRam004311a4 + 200.0,0,iVar1 + 0x420,0);
    }
    else {
      CourseStream_RequestTextures(0x43fa0000,0,iVar1 + 0x420,0);
      CourseStream_RequestLod(0x43fa0000,0x442f0000,0,iVar1 + 0x420,0);
      CourseStream_RequestTextures(0x43fa0000,1,iVar10 + 0x420,0);
      CourseStream_RequestLod(0x43fa0000,0x442f0000,1,iVar10 + 0x420,0);
    }
    param_1[6] = param_1[6] & 0xffffffdf;
    param_1[6] = param_1[6] & 0xfffffff7;
    param_1[6] = param_1[6] | 4;
    param_1[6] = param_1[6] | 1;
    param_1[6] = param_1[6] | 8;
  }
  if ((cRam0036f23c == '\x02') && (cRam0036f234 == '\x02')) {
    RaceScene_SetFlagB4();
  }
  lVar13 = RaceScene_IsFlag8000();
  if (lVar13 != 0) {
    if ((param_1[6] & 1U) != 0) {
      Sema_Wait(0x36efc0);
      iVar18 = iRam00386628;
      Sema_Signal(0x36efc0,0);
      if (iVar18 == 0) {
        param_1[6] = param_1[6] & 0xfffffffe;
      }
    }
    if ((param_1[6] & 7U) == 6) {
      lVar13 = RaceScene_IsFlag2();
      if (lVar13 == 0) {
        RaceScene_SetFlagB2();
      }
      lVar13 = RaceScene_IsRunning();
      if ((lVar13 == 1) && (lVar13 = RaceScene_IsReplay(), lVar13 == 0)) {
        Loading_Update();
        if (iRam0036f1f8 == 0) {
          lVar13 = RaceScene_IsFlag10();
          if (lVar13 == 0) {
            CourseStream_RequestTextures(fRam004311a4,0,iVar1 + 0x420,0);
            CourseStream_RequestLod(0x42c80000,fRam004311a4 + 50.0,0,iVar1 + 0x420,0);
          }
          else {
            Cam_UpdateShake(*(undefined4 *)(_g_Loading + 0x14),auStack_10);
            CourseStream_RequestTextures(fRam004311a4,0,iVar1 + 0x420,auStack_10);
            CourseStream_RequestLod(0x42c80000,fRam004311a4 + 50.0,0,iVar1 + 0x420,auStack_10);
          }
        }
        else {
          CourseStream_RequestTextures(fRam00431764,0,iVar1 + 0x420,iVar10 + 0x420);
          CourseStream_RequestBlock
                    (0x42960000,fRam00431764 + 50.0,0x42960000,fRam00431d24 + 50.0,0,1);
        }
        iStack_a40 = 0;
        piStack_aa0 = param_1;
        do {
          lVar13 = RaceCar_Get(iStack_a40);
          GameState_CopyPlayerRecord(auStack_a10,iStack_a40);
          puVar6 = auStack_a10;
          puVar19 = &uStack_e0;
          iVar18 = 0x33;
          do {
            iVar18 = iVar18 + -1;
            *puVar19 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar19 = puVar19 + 1;
          } while (0 < iVar18);
          if (((((((uStack_dc & 0x60) == 0) || (lVar14 = GameState_Get_ec(), lVar14 != 0)) &&
                (((uStack_dc & 0x20) == 0 || (lVar14 = RaceScene_IsFlag400(), lVar14 != 0)))) &&
               (((uStack_dc & 0x40) == 0 || (lVar14 = RaceScene_IsFlag1000(), lVar14 != 0)))) &&
              (((uStack_dc & 0x100) == 0 || (bVar5 = RaceProg_Get(), 2 < bVar5)))) &&
             ((uStack_a50 = 0xc, lVar13 != 0 && (piStack_aa0[7] != 0)))) {
            Race_SetupCars(param_1,piStack_aa0[7] + 0x110,lVar13,iStack_a40);
            iVar18 = (int)lVar13;
            if ((iStack_a40 == 0) && (lVar14 = RaceScene_IsFlag800(), lVar14 != 0)) {
              puVar11 = (undefined1 *)0x10;
              puVar20 = auStack_f0;
              puVar3 = puVar20;
              while (puVar3 != (undefined1 *)0x0) {
                *puVar20 = 0;
                puVar20 = puVar20 + 1;
                puVar11 = puVar11 + -1;
                puVar3 = puVar11;
              }
              iVar24 = 0;
              puVar19 = auStack_100;
              do {
                iVar7 = RaceCar_GetWheelFx(lVar13,iVar24);
                *puVar19 = *(undefined4 *)(iVar7 + 0x14);
                sceVu0AddVector(auStack_f0,auStack_f0,iVar7 + 0x20);
                iVar24 = iVar24 + 1;
                puVar19 = puVar19 + 1;
              } while (iVar24 < 4);
              sceVu0ScaleVector(0x3e800000,auStack_f0,auStack_f0);
              uStack_e4 = 0x3f800000;
              uVar15 = RaceScene_Get_40();
              Course_TransformStartPoint(uVar15,iVar18 + 0xe0,auStack_f0,auStack_100);
            }
            if (iRam0036f1f8 == 0) {
              if ((iStack_a40 == 0) && (lVar14 = Cam_IsIdle(iVar1), lVar14 != 0)) {
                uStack_140 = *(undefined4 *)(iVar18 + 0xe0);
                uStack_13c = *(undefined4 *)(iVar18 + 0xe4);
                uStack_138 = *(undefined4 *)(iVar18 + 0xe8);
                uStack_134 = *(undefined4 *)(iVar18 + 0xec);
                uStack_130 = *(undefined4 *)(iVar18 + 0xf0);
                uStack_12c = *(undefined4 *)(iVar18 + 0xf4);
                uStack_128 = *(undefined4 *)(iVar18 + 0xf8);
                uStack_124 = *(undefined4 *)(iVar18 + 0xfc);
                uStack_120 = *(undefined4 *)(iVar18 + 0x100);
                uStack_11c = *(undefined4 *)(iVar18 + 0x104);
                uStack_118 = *(undefined4 *)(iVar18 + 0x108);
                uStack_114 = *(undefined4 *)(iVar18 + 0x10c);
                uStack_110 = *(undefined4 *)(iVar18 + 0x110);
                uStack_10c = *(undefined4 *)(iVar18 + 0x114);
                uStack_108 = *(undefined4 *)(iVar18 + 0x118);
                uStack_104 = *(undefined4 *)(iVar18 + 0x11c);
                iVar18 = piStack_aa0[7];
                sceVu0CopyVector(iVar18 + 0x120,&uStack_140);
                sceVu0CopyVector(iVar18 + 0x130,&uStack_130);
                sceVu0CopyVector(iVar18 + 0x140,&uStack_120);
                sceVu0CopyVector(iVar18 + 0x150,&uStack_110);
                goto LAB_001e311c;
              }
            }
            else {
              if ((iStack_a40 == 0) && (lVar14 = Cam_IsIdle(iVar1), lVar14 != 0)) {
                uStack_a50 = 8;
              }
              if ((iStack_a40 == 1) && (lVar14 = Cam_IsIdle(iVar10), lVar14 != 0)) {
                uStack_a50 = uStack_a50 & 0xfffffff7;
              }
            }
            lVar14 = AsyncRes_IsReady(piStack_aa0[7]);
            if (lVar14 != 0) {
              lVar14 = RaceScene_IsFlag400();
              if ((lVar14 == 0) || ((uStack_dc & 0x20) == 0)) {
                puVar11 = (undefined1 *)0x10;
                puVar20 = auStack_360;
                puVar3 = puVar20;
                while (puVar3 != (undefined1 *)0x0) {
                  *puVar20 = 0;
                  puVar20 = puVar20 + 1;
                  puVar11 = puVar11 + -1;
                  puVar3 = puVar11;
                }
                uStack_3a0 = *(undefined4 *)(iVar18 + 0xe0);
                iVar24 = piStack_aa0[7];
                iVar7 = iVar24 + 0x110;
                uStack_39c = *(undefined4 *)(iVar18 + 0xe4);
                uStack_398 = *(undefined4 *)(iVar18 + 0xe8);
                uStack_394 = *(undefined4 *)(iVar18 + 0xec);
                uStack_390 = *(undefined4 *)(iVar18 + 0xf0);
                uStack_38c = *(undefined4 *)(iVar18 + 0xf4);
                uStack_388 = *(undefined4 *)(iVar18 + 0xf8);
                uStack_384 = *(undefined4 *)(iVar18 + 0xfc);
                uStack_380 = *(undefined4 *)(iVar18 + 0x100);
                uStack_37c = *(undefined4 *)(iVar18 + 0x104);
                uStack_378 = *(undefined4 *)(iVar18 + 0x108);
                uStack_374 = *(undefined4 *)(iVar18 + 0x10c);
                uStack_3b0 = *(undefined4 *)(iVar18 + 0x110);
                uStack_3ac = *(undefined4 *)(iVar18 + 0x114);
                uStack_3a8 = *(undefined4 *)(iVar18 + 0x118);
                uStack_364 = *(undefined4 *)(iVar18 + 0x11c);
                uStack_370 = uStack_3b0;
                uStack_36c = uStack_3ac;
                uStack_368 = uStack_3a8;
                sceVu0CopyVector(iVar24 + 0x120,&uStack_3a0);
                sceVu0CopyVector(iVar24 + 0x130,&uStack_390);
                sceVu0CopyVector(iVar24 + 0x140,&uStack_380);
                sceVu0CopyVector(iVar24 + 0x150,&uStack_370);
                uVar27 = 0;
                iStack_ab0 = 0;
                iStack_ae0 = iVar7;
                iStack_ad0 = iVar7;
                iStack_ac0 = iVar7;
                do {
                  uVar28 = 0;
                  iStack_af0 = iStack_ad0;
                  iVar8 = iStack_ac0;
                  iVar23 = iStack_ae0;
                  do {
                    maybe_Vu0_UnitMatrix(auStack_3f0);
                    uVar26 = (1 - uVar28) + iStack_ab0;
                    maybe_Vu0_UnitMatrix(auStack_430);
                    if (uVar28 == 1) {
                      maybe_Vu0_RotMatrixY(0x40490fdb,auStack_430,auStack_430);
                    }
                    iVar21 = iVar18 + uVar26 * 0x140;
                    maybe_Vu0_RotMatrixX(*(undefined4 *)(iVar21 + 0x1d0),auStack_430,auStack_430);
                    sceVu0MulMatrix(iVar8 + 0x1a0,auStack_3f0,auStack_430);
                    maybe_Vu0_UnitMatrix(auStack_3f0);
                    Mat34_Identity(auStack_4b0);
                    Quat_ToMat33(auStack_4b0,iVar21 + 0x1e0);
                    sceVu0CopyVector(auStack_470,auStack_4b0);
                    sceVu0CopyVector(auStack_460,auStack_4a0);
                    sceVu0CopyVector(auStack_450,auStack_490);
                    sceVu0CopyVector(auStack_440,auStack_480);
                    sceVu0MulMatrix(auStack_3f0,auStack_470,auStack_3f0);
                    maybe_Vu0_UnitMatrix(auStack_4f0);
                    fVar33 = *(float *)(iVar21 + 0x1d8);
                    if (uVar26 < 2) {
                      fVar31 = *(float *)(iVar18 + 0x148);
                    }
                    else {
                      fVar31 = 0.0;
                    }
                    maybe_Vu0_RotMatrixY(fVar33 + fVar31,auStack_4f0,auStack_4f0);
                    maybe_Vu0_RotMatrixY(fVar33,auStack_4f0,auStack_4f0);
                    sceVu0MulMatrix(auStack_3f0,auStack_4f0,auStack_3f0);
                    maybe_Vu0_UnitMatrix(auStack_530);
                    if (uVar27 == 0) {
                      maybe_Vu0_RotMatrixX(0x3dd67751,auStack_530,auStack_530);
                    }
                    sceVu0MulMatrix(auStack_3f0,auStack_530,auStack_3f0);
                    iVar21 = iVar18 + uVar26 * 0x140;
                    iVar29 = *(int *)(iVar18 + 0x120) + uVar26 * 0x60;
                    uStack_548 = *(undefined4 *)(iVar29 + 0x3a8);
                    uStack_550 = *(undefined4 *)(iVar29 + 0x3a0);
                    fStack_54c = *(float *)(iVar29 + 0x3a4) + *(float *)(iVar21 + 0x1b0);
                    sceVu0CopyVector(auStack_540,&uStack_550);
                    sceVu0TransMatrix(iVar8 + 0xa0,auStack_3f0,auStack_540);
                    iVar29 = RaceCar_GetWheelFx(lVar13,uVar26);
                    sceVu0CopyVector(iStack_af0 + 0x60,iVar29 + 0x10);
                    sceVu0AddVector(auStack_360,auStack_360,iVar29 + 0x20);
                    fVar32 = *(float *)(iVar18 + 0xcc8);
                    fVar31 = *(float *)(iVar21 + 0x270);
                    fVar33 = fVar32;
                    if (fVar32 <= fVar31) {
                      fVar33 = fVar31;
                      if (*(float *)(iVar18 + 0xcc4) < fVar31) {
                        fVar33 = *(float *)(iVar18 + 0xcc4);
                      }
                    }
                    *(float *)(iVar23 + 0x2c0) =
                         (fVar33 - fVar32) / (*(float *)(iVar18 + 0xcc4) - fVar32);
                    fVar33 = (float)fabsf(*(undefined4 *)(iVar18 + uVar26 * 0x140 + 0x28c));
                    *(float *)(iVar23 + 0x2d0) = fVar33;
                    if (fVar33 <= 31.415926) {
                      if (15.707963 < fVar33) {
                        *(undefined1 *)(iVar7 + uVar28 + 0x300) = 1;
                      }
                      else {
                        *(undefined1 *)(iVar7 + uVar28 + 0x300) = 0;
                      }
                    }
                    else {
                      *(undefined1 *)(iVar7 + uVar28 + 0x300) = 2;
                    }
                    uVar28 = uVar28 + 1;
                    iVar8 = iVar8 + 0x40;
                    iStack_af0 = iStack_af0 + 0x10;
                    iVar23 = iVar23 + 4;
                  } while (uVar28 < 2);
                  uVar27 = uVar27 + 1;
                  iStack_ab0 = iStack_ab0 + 2;
                  iStack_ac0 = iStack_ac0 + 0x80;
                  iStack_ad0 = iStack_ad0 + 0x20;
                  iStack_ae0 = iStack_ae0 + 8;
                  iVar7 = iVar7 + 2;
                } while (uVar27 < 2);
                sceVu0ScaleVector(0x3e800000,iVar24 + 0x160,auStack_360);
                *(undefined4 *)(iVar24 + 0x16c) = 0x3f800000;
                cVar4 = GameState_Get_3();
                if (cVar4 == '\x01') {
                  iVar18 = RaceCar_Get(iStack_a40);
                  uVar15 = PhysBody_GetWorldMatrix(*(undefined4 *)(iVar18 + 0x154));
                  fVar33 = 0.0;
                  uStack_560 = DAT_0031c330;
                  uStack_55c = DAT_0031c334;
                  uStack_558 = DAT_0031c338;
                  uStack_554 = DAT_0031c33c;
                  maybe_Vu0_SetUnitW(iVar24 + 0x3b0);
                  maybe_Vu0_SetUnitW(iVar24 + 0x3c0);
                  iVar18 = 0;
                  piVar22 = param_1;
                  do {
                    if (iStack_a40 != iVar18) {
                      lVar14 = RaceCar_Get(iVar18);
                      iVar7 = GameState_Elem_f0_xcc(iVar18);
                      if ((lVar14 != 0) && ((*(uint *)(iVar7 + 4) & 0x20) == 0)) {
                        uVar17 = RaceCar_GetFlags(lVar14);
                        if ((uVar17 & 8) == 0) {
                          uVar17 = RaceCar_GetFlags(lVar14);
                          if ((uVar17 & 0x80) == 0) goto LAB_001e3fb8;
                        }
                        uVar17 = RaceCar_GetFlags(lVar14);
                        if ((uVar17 & 0x10) != 0) {
                          iVar7 = (int)lVar14;
                          uStack_5c0 = *(undefined4 *)(iVar7 + 0xe0);
                          uStack_5bc = *(undefined4 *)(iVar7 + 0xe4);
                          uStack_5b8 = *(undefined4 *)(iVar7 + 0xe8);
                          uStack_5b4 = *(undefined4 *)(iVar7 + 0xec);
                          uStack_5b0 = *(undefined4 *)(iVar7 + 0xf0);
                          uStack_5ac = *(undefined4 *)(iVar7 + 0xf4);
                          uStack_5a8 = *(undefined4 *)(iVar7 + 0xf8);
                          uStack_5a4 = *(undefined4 *)(iVar7 + 0xfc);
                          uStack_5a0 = *(undefined4 *)(iVar7 + 0x100);
                          uStack_59c = *(undefined4 *)(iVar7 + 0x104);
                          uStack_598 = *(undefined4 *)(iVar7 + 0x108);
                          uStack_594 = *(undefined4 *)(iVar7 + 0x10c);
                          uStack_5d0 = *(undefined4 *)(iVar7 + 0x110);
                          uStack_5cc = *(undefined4 *)(iVar7 + 0x114);
                          uStack_5c8 = *(undefined4 *)(iVar7 + 0x118);
                          uStack_584 = *(undefined4 *)(iVar7 + 0x11c);
                          uStack_590 = uStack_5d0;
                          uStack_58c = uStack_5cc;
                          uStack_588 = uStack_5c8;
                          fVar31 = (float)Vu0_Vec3Distance(auStack_580,uVar15,&uStack_5d0);
                          fVar31 = fVar31 / 5.0;
                          if (fVar31 < 1.0) {
                            fVar31 = 1.0;
                          }
                          fVar32 = (float)sceVu0InnerProduct(auStack_580,&uStack_5c0);
                          fVar31 = (fVar32 * fVar32 * fVar32) / fVar31;
                          if (fVar33 < fVar31) {
                            if ((*(uint *)(piVar22[7] + 0x110) & 8) != 0) {
                              fVar31 = fVar31 * 1.2;
                            }
                            sceVu0ScaleVector(0x3f800000,auStack_570,auStack_580);
                            fVar33 = fVar31;
                          }
                        }
                      }
                    }
LAB_001e3fb8:
                    iVar18 = iVar18 + 1;
                    piVar22 = piVar22 + 1;
                  } while (iVar18 < 3);
                  sceVu0ScaleVector(fVar33,iVar24 + 0x3b0,&uStack_560);
                  *(undefined4 *)(iVar24 + 0x3bc) = 0;
                  sceVu0CopyVector(iVar24 + 0x3c0,auStack_570);
                  *(undefined4 *)(iVar24 + 0x3cc) = 0x3f800000;
                }
                else {
                  sceVu0CopyVector(iVar24 + 0x3b0,0x436220);
                  sceVu0MulVector(iVar24 + 0x3b0,iVar24 + 0x3b0,iVar24 + 0x160);
                  *(undefined4 *)(iVar24 + 0x3c0) = 0;
                  *(undefined4 *)(iVar24 + 0x3c4) = 0xbf800000;
                  *(undefined4 *)(iVar24 + 0x3c8) = 0;
                  *(undefined4 *)(iVar24 + 0x3cc) = 0x3f800000;
                }
              }
              else {
                puVar6 = (undefined4 *)0x10;
                puVar19 = &uStack_150;
                puVar2 = puVar19;
                while (puVar2 != (undefined4 *)0x0) {
                  *(undefined1 *)puVar19 = 0;
                  puVar19 = (undefined4 *)((int)puVar19 + 1);
                  puVar6 = (undefined4 *)((int)puVar6 + -1);
                  puVar2 = puVar6;
                }
                iVar24 = piStack_aa0[7];
                iVar7 = iVar24 + 0x110;
                lVar14 = RaceScene_IsPaused();
                if (lVar14 == 0) {
                  uVar15 = RaceScene_Get_40();
                  lVar14 = Course_GetStartTransform(uVar15,auStack_1a0,&uStack_150,auStack_160);
                }
                else {
                  iVar8 = RaceScene_Get_40();
                  lVar14 = Course_GetStartTransform(iVar8 + -1,auStack_1a0,&uStack_150,auStack_160);
                }
                sceVu0CopyVector(iVar24 + 0x120,auStack_1a0);
                sceVu0CopyVector(iVar24 + 0x130,auStack_190);
                sceVu0CopyVector(iVar24 + 0x140,auStack_180);
                sceVu0CopyVector(iVar24 + 0x150,&uStack_170);
                *(undefined4 *)(iVar24 + 0x160) = uStack_150;
                *(undefined4 *)(iVar24 + 0x164) = uStack_14c;
                *(undefined4 *)(iVar24 + 0x168) = uStack_148;
                *(undefined4 *)(iVar24 + 0x16c) = uStack_144;
                uStack_1b0 = uStack_170;
                uStack_1ac = uStack_16c;
                uStack_1a8 = uStack_168;
                lVar16 = RaceScene_IsPaused();
                if (lVar16 == 0) {
                  if ((lVar14 == 0) || (lVar14 = RaceScene_Get_40(), lVar14 == 0)) {
                    fVar33 = 0.0;
                  }
                  else {
                    fVar33 = *(float *)(iVar18 + 0x1788);
                  }
                  fVar33 = (((fVar33 * 1000.0) / 216000.0) /
                           ((*(float *)(iVar18 + 0xda4) + *(float *)(iVar18 + 0xeb4)) * 0.5 *
                           6.2831855)) * 6.2831855;
                  *(float *)(iVar18 + 0x1794) = fVar33;
                  *(float *)(iVar18 + 0x1790) = *(float *)(iVar18 + 0x1790) + fVar33;
                  while( true ) {
                    while (3.1415927 < *(float *)(iVar18 + 0x1790)) {
                      *(float *)(iVar18 + 0x1790) = *(float *)(iVar18 + 0x1790) - 6.2831855;
                    }
                    if (-3.1415927 <= *(float *)(iVar18 + 0x1790)) break;
                    *(float *)(iVar18 + 0x1790) = *(float *)(iVar18 + 0x1790) + 6.2831855;
                  }
                }
                uStack_a60 = 0;
                iVar8 = 0;
                iStack_b20 = iVar7;
                iStack_b10 = iVar7;
                iStack_b00 = iVar7;
                do {
                  uVar27 = 0;
                  iVar23 = iStack_b00;
                  iVar21 = iStack_b10;
                  iVar29 = iStack_b20;
                  do {
                    maybe_Vu0_UnitMatrix(auStack_1f0);
                    iVar25 = (1 - uVar27) + iVar8;
                    maybe_Vu0_UnitMatrix(auStack_230);
                    if (uVar27 == 1) {
                      maybe_Vu0_RotMatrixY(0x40490fdb,auStack_230,auStack_230);
                    }
                    maybe_Vu0_RotMatrixX(*(undefined4 *)(iVar18 + 0x1790),auStack_230,auStack_230);
                    sceVu0MulMatrix(iVar23 + 0x1a0,auStack_1f0,auStack_230);
                    maybe_Vu0_UnitMatrix(auStack_1f0);
                    Mat34_Identity(auStack_2b0);
                    iVar30 = iVar18 + iVar25 * 0x140;
                    Quat_ToMat33(auStack_2b0,iVar30 + 0x1e0);
                    sceVu0CopyVector(auStack_270,auStack_2b0);
                    sceVu0CopyVector(auStack_260,auStack_2a0);
                    sceVu0CopyVector(auStack_250,auStack_290);
                    sceVu0CopyVector(auStack_240,auStack_280);
                    sceVu0MulMatrix(auStack_1f0,auStack_270,auStack_1f0);
                    maybe_Vu0_UnitMatrix(auStack_2f0);
                    if (iVar25 == 3) {
LAB_001e2e10:
                      fVar33 = -*(float *)(*(int *)(iVar18 + 0x120) + 0x360);
                    }
                    else if (iVar25 == 2) {
                      fVar33 = *(float *)(*(int *)(iVar18 + 0x120) + 0x360);
                    }
                    else if (iVar25 == 1) {
                      fVar33 = -*(float *)(*(int *)(iVar18 + 0x120) + 0x250);
                    }
                    else {
                      if (iVar25 != 0) goto LAB_001e2e10;
                      fVar33 = *(float *)(*(int *)(iVar18 + 0x120) + 0x250);
                    }
                    maybe_Vu0_RotMatrixY(fVar33,auStack_2f0,auStack_2f0);
                    sceVu0MulMatrix(auStack_1f0,auStack_2f0,auStack_1f0);
                    iVar9 = *(int *)(iVar18 + 0x120) + iVar25 * 0x60;
                    uStack_308 = *(undefined4 *)(iVar9 + 0x3a8);
                    uStack_310 = *(undefined4 *)(iVar9 + 0x3a0);
                    fStack_30c = *(float *)(iVar9 + 0x3a4) + *(float *)(iVar30 + 0x1b0);
                    sceVu0CopyVector(auStack_300,&uStack_310);
                    sceVu0TransMatrix(iVar23 + 0xa0,auStack_1f0,auStack_300);
                    uStack_314 = 0x3f800000;
                    uStack_320 = *(undefined4 *)(iVar23 + 0xd0);
                    uStack_324 = 0x3f800000;
                    uStack_31c = *(undefined4 *)(iVar23 + 0xd4);
                    uStack_318 = *(undefined4 *)(iVar23 + 0xd8);
                    Mat33_MulVec3(&uStack_a20,auStack_1a0,&uStack_320);
                    uStack_330 = uStack_a20;
                    uStack_32c = uStack_a1c;
                    uStack_328 = uStack_a18;
                    uStack_324 = uStack_a14;
                    *(undefined4 *)(iVar21 + 0x60) = uStack_a20;
                    *(undefined4 *)(iVar21 + 100) = auStack_160[iVar25];
                    *(undefined4 *)(iVar21 + 0x68) = uStack_a18;
                    fVar33 = (float)fabsf(*(float *)(iVar18 + 0x1794) * 60.0);
                    *(float *)(iVar29 + 0x2d0) = fVar33;
                    if (fVar33 <= 31.415926) {
                      if (15.707963 < fVar33) {
                        *(undefined1 *)(iVar7 + uVar27 + 0x300) = 1;
                      }
                      else {
                        *(undefined1 *)(iVar7 + uVar27 + 0x300) = 0;
                      }
                    }
                    else {
                      *(undefined1 *)(iVar7 + uVar27 + 0x300) = 2;
                    }
                    uVar27 = uVar27 + 1;
                    iVar23 = iVar23 + 0x40;
                    iVar21 = iVar21 + 0x10;
                    iVar29 = iVar29 + 4;
                  } while (uVar27 < 2);
                  iVar8 = iVar8 + 2;
                  iStack_b00 = iStack_b00 + 0x80;
                  iStack_b10 = iStack_b10 + 0x20;
                  iStack_b20 = iStack_b20 + 8;
                  uStack_a60 = uStack_a60 + 1;
                  iVar7 = iVar7 + 2;
                } while (uStack_a60 < 2);
                cVar4 = GameState_Get_3();
                if (cVar4 == '\x01') {
                  uStack_340 = DAT_0031c320;
                  uStack_33c = DAT_0031c324;
                  uStack_338 = DAT_0031c328;
                  uStack_334 = DAT_0031c32c;
                  sceVu0ScaleVector(0,iVar24 + 0x3b0,&uStack_340);
                  *(undefined4 *)(iVar24 + 0x3bc) = 0;
                  sceVu0CopyVector(iVar24 + 0x3c0,auStack_350);
                  *(undefined4 *)(iVar24 + 0x3cc) = 0x3f800000;
                }
                else {
                  sceVu0CopyVector(iVar24 + 0x3b0,0x436220);
                  sceVu0MulVector(iVar24 + 0x3b0,iVar24 + 0x3b0,iVar24 + 0x160);
                  *(undefined4 *)(iVar24 + 0x3c0) = 0;
                  *(undefined4 *)(iVar24 + 0x3c4) = 0xbf800000;
                  *(undefined4 *)(iVar24 + 0x3c8) = 0;
                  *(undefined4 *)(iVar24 + 0x3cc) = 0x3f800000;
                }
                AsyncRes_Poll(piStack_aa0[7],uStack_a50);
              }
              iVar18 = piStack_aa0[7];
              cVar4 = GameState_Get_3();
              if ((cVar4 == '\0') && (cVar4 = GameState_Get_2(), cVar4 == '\0')) {
                *(undefined4 *)(iVar18 + 0x49c) = 1;
              }
              else {
                *(undefined4 *)(iVar18 + 0x49c) = 0;
              }
              iVar18 = RaceCar_GetTracker(lVar13);
              lVar14 = (long)*(short *)(iVar18 + 6);
              iVar18 = RaceCar_GetTracker(lVar13);
              lVar13 = (long)*(short *)(iVar18 + 8);
              if (0 < lVar14) {
                do {
                  uVar27 = (int)lVar14 - 1;
                  lVar14 = (long)(int)uVar27;
                  lVar13 = (long)((int)lVar13 +
                                 (int)**(short **)
                                        (*(int *)(_g_RoadData + 4) + (uVar27 & 0xffff) * 4));
                } while (0 < lVar14);
              }
              iVar18 = piStack_aa0[7];
              uVar12 = CourseStream_FindBlock(iVar18 + 0x4b0,3,iVar18 + 0x150,lVar13,0xd);
              *(undefined4 *)(iVar18 + 0x4a4) = uVar12;
              AsyncRes_Poll(piStack_aa0[7],uStack_a50);
            }
          }
LAB_001e311c:
          puVar19 = puRam004305b4;
          piStack_aa0 = piStack_aa0 + 1;
          iStack_a40 = iStack_a40 + 1;
        } while (iStack_a40 < 3);
        sceVu0ScaleVector(0xbf800000,0x4361d0,puRam004305b4 + 4);
        uRam004361dc = 0x3f800000;
        fRam00436200 = (float)((uint)puVar19[9] >> 0x10 & 0xff) / 128.0;
        fRam00436204 = (float)((uint)puVar19[9] >> 8 & 0xff) / 128.0;
        fRam00436208 = (float)*(byte *)(puVar19 + 9) / 128.0;
        cVar4 = GameState_Get_3();
        if (cVar4 == '\x01') {
          uRam004361e4 = 0xbf800000;
          uRam004361e0 = 0;
          uRam004361ec = 0x3f800000;
          uRam004361e8 = 0;
          fRam00436210 = (float)((uint)puVar19[10] >> 0x10 & 0xff) / 128.0;
          fRam00436214 = (float)((uint)puVar19[10] >> 8 & 0xff) / 128.0;
          fRam00436218 = (float)*(byte *)(puVar19 + 10) / 128.0;
        }
        else {
          sceVu0ScaleVector(0x3f800000,0x4361e0,puVar19 + 4);
          fRam00436210 = 0.0;
          fRam00436214 = 0.0;
          fRam00436218 = 0.0;
        }
        uRam004361f0 = 0;
        uRam004361f4 = 0x3f800000;
        uRam004361fc = 0x3f800000;
        uRam004361f8 = 0;
        fRam00436220 = (float)((uint)puVar19[10] >> 0x10 & 0xff) / 128.0;
        fRam00436224 = (float)((uint)puVar19[10] >> 8 & 0xff) / 128.0;
        fRam00436228 = (float)*(byte *)(puVar19 + 10) / 128.0;
        fRam00436180 = (float)((uint)puVar19[8] >> 0x10 & 0xff) / 128.0;
        fRam00436184 = (float)((uint)puVar19[8] >> 8 & 0xff) / 128.0;
        fRam00436188 = (float)*(byte *)(puVar19 + 8) / 128.0;
        SceneObj_ResetAll();
        bVar5 = GameState_Get_2();
        if (bVar5 < 6) {
                    /* WARNING: Switch is manually overridden */
          switch(bVar5) {
          case 1:
            cVar4 = GameState_Get_0();
            if (cVar4 != '\x04') {
              SceneObj_DestroyList(0,0);
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
        }
        RaceCam_UpdateFree(param_1);
        Course_Render(1);
        puVar19 = puRam004305b4;
        iVar10 = Cam_GetTargetBodyB(*(undefined4 *)(_g_Loading + 0x14));
        iVar10 = param_1[iVar10 + 7];
        lVar13 = RaceScene_IsFlag10();
        if (lVar13 == 0) {
          if ((iRam0036f1f8 == 1) || (cVar4 = GameState_Get_3(), cVar4 == '\x01')) {
            if (param_1[5] == 0) {
              uStack_940 = DAT_0031c340;
              uStack_93c = DAT_0031c344;
              uStack_938 = DAT_0031c348;
              uStack_934 = DAT_0031c34c;
              sceVu0CopyVector(auStack_930,0x4361d0);
              sceVu0OuterProduct(0x4361d0,0x431150,0x431140);
              param_1[5] = 1;
              Course_DrawShadowedMeshes(&uStack_940);
              sceVu0CopyVector(0x4361d0,auStack_930);
            }
          }
          else {
            Course_DrawShadowedMeshes(iVar10 + 0x160);
          }
          uVar12 = *puVar19;
        }
        else {
          Course_DrawShadowedMeshes(iVar10 + 0x160);
          uVar12 = *puVar19;
        }
        View_DrawBackground(4,uVar12,0);
        SceneObj_DestroyList(1,0);
        SceneObj_DestroyAll();
        Course_DrawReflectionPlane();
        RaceScene_Draw();
        if (*param_1 == 0) {
          cVar4 = GameState_Get_2();
          if ((cVar4 == '\x01') || (cVar4 = GameState_Get_2(), cVar4 == '\x04')) {
            lVar13 = RaceScene_IsFlag10();
            if (lVar13 == 0) {
              lVar13 = Cam_IsIdle(iVar1);
              if ((lVar13 != 0) && (ScreenFx_Draw(param_1 + 0x388), iRam0036f1f8 == 1)) {
                ScreenFx_Draw(param_1 + 0x6fc);
              }
            }
            else if (param_1[1] != 0) {
              if ((char)param_1[2] == '\x01') {
                ScreenFx_Draw(param_1 + 0x14);
              }
              else if ((char)param_1[2] == '\0') {
                ScreenFx_Draw(param_1 + 0x388);
              }
            }
          }
        }
        else {
          lVar13 = RaceScene_IsFlag10();
          if (lVar13 != 0) {
            iRam0036f3b4 = iRam0036f3b4 + 1;
            Weather_Draw(param_1[3]);
          }
        }
        if (*(int *)(*(int *)(_g_Loading + 0x14) + 0x7c8) != 0) {
          sceVu0CopyVector(0x46a060,param_1[7] + 0x150);
          uRam0046a028 = 8;
        }
        maybe_ReplayCam_Update();
      }
    }
  }
  return;
}

