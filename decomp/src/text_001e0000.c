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
void RaceProg_Set_10(uint param_1)

{
  g_RaceProg->unk_10 = param_1;
  return;
}

// 0x001e0500  size 0xc
uint RaceProg_Get_10(void)

{
  return g_RaceProg->unk_10;
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
  RaceCar *pRVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int index;
  undefined4 uVar13;
  float fVar14;
  int iVar15;
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
  
  uVar8 = GameState_Get_40();
  index = 0;
  lVar9 = GameState_GetRacerCount();
  if (0 < lVar9) {
    do {
      pRVar1 = RaceCar_Get(index);
      iVar2 = RaceProg_GetArray_34((char)index);
      iVar3 = RaceCar_GetIndex(pRVar1);
      if ((*(uint *)(iVar3 + 4) & 0x20) == 0) {
        puVar4 = (undefined1 *)RaceCar_GetTracker(pRVar1);
        uStack_70 = *puVar4;
        uStack_30 = *(undefined4 *)(puVar4 + 0x40);
        uStack_6e = *(undefined2 *)(puVar4 + 2);
        uStack_2c = *(undefined4 *)(puVar4 + 0x44);
        uStack_6c = *(undefined2 *)(puVar4 + 4);
        iVar12 = 0;
        uStack_6a = *(undefined2 *)(puVar4 + 6);
        uStack_68 = *(undefined2 *)(puVar4 + 8);
        uStack_66 = *(undefined2 *)(puVar4 + 10);
        uStack_64 = *(undefined4 *)(puVar4 + 0xc);
        uStack_60 = *(undefined4 *)(puVar4 + 0x10);
        uStack_5c = *(undefined4 *)(puVar4 + 0x14);
        uStack_58 = *(undefined4 *)(puVar4 + 0x18);
        uStack_54 = *(undefined4 *)(puVar4 + 0x1c);
        uStack_50 = *(undefined4 *)(puVar4 + 0x20);
        uStack_4c = *(undefined4 *)(puVar4 + 0x24);
        uStack_48 = *(undefined4 *)(puVar4 + 0x28);
        uStack_44 = *(undefined4 *)(puVar4 + 0x2c);
        uStack_40 = *(undefined4 *)(puVar4 + 0x30);
        uStack_3c = *(undefined4 *)(puVar4 + 0x34);
        uStack_38 = *(undefined4 *)(puVar4 + 0x38);
        uStack_34 = *(undefined4 *)(puVar4 + 0x3c);
        uStack_28 = puVar4[0x48];
        uStack_20 = *(undefined4 *)(puVar4 + 0x50);
        uStack_1c = *(undefined4 *)(puVar4 + 0x54);
        uStack_18 = *(undefined4 *)(puVar4 + 0x58);
        uStack_14 = *(undefined4 *)(puVar4 + 0x5c);
        uStack_10 = *(uint *)(puVar4 + 0x60);
        uStack_c = *(undefined4 *)(puVar4 + 100);
        iVar3 = iVar2;
        do {
          iVar7 = *(int *)(iVar3 + 0xf8);
          if (iVar7 == -1) break;
          if ((*(uint *)(iVar3 + 0x10c) & 0xe) == 0) {
            iVar5 = GameState_Get_44();
            puVar6 = (undefined4 *)(*(int *)(iVar5 + 0x24) + iVar7 * 0x14);
            iVar15 = puVar6[1];
            uStack_110 = (undefined2)*puVar6;
            iVar5 = GameState_GetArray_3a78(uStack_110);
            iVar7 = *(int *)(iVar3 + 0xf8);
            iVar5 = iVar15 * 0x20 + iVar5;
            iVar15 = GameState_Get_44();
            iVar7 = *(int *)(iVar15 + 0x24) + iVar7 * 0x14;
            iVar15 = *(int *)(iVar7 + 0xc);
            uStack_128 = (undefined2)*(undefined4 *)(iVar7 + 8);
            iVar7 = GameState_GetArray_3a78(uStack_128);
            iVar7 = iVar15 * 0x20 + iVar7;
            iVar15 = RaceCar_GetCheckpoint(pRVar1);
            if ((iVar15 < iVar5) || (iVar15 = RaceCar_GetCheckpoint(pRVar1), iVar7 <= iVar15)) {
              if ((*(uint *)(iVar3 + 0x10c) & 1) != 0) {
                lVar9 = GameState_Get_40();
                if (lVar9 == 0) {
                  iVar5 = RaceCar_GetCheckpoint(pRVar1);
                  if (iVar7 <= iVar5) {
                    *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | 2;
                  }
                }
                else {
                  iVar7 = RaceCar_GetCheckpoint(pRVar1);
                  if (iVar7 < iVar5) {
                    *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | 2;
                  }
                }
                uVar11 = *(uint *)(iVar3 + 0x10c);
                if ((uVar11 & 2) == 0) goto LAB_001e09b8;
                if (*(int *)(iVar3 + 0x100) < 1000) {
                  *(undefined4 *)(iVar2 + 0x8ac) = 0;
                }
                else {
                  if (*(int *)(iVar2 + 0x8ac) < 0x46) {
                    *(int *)(iVar2 + 0x8ac) = *(int *)(iVar2 + 0x8ac) + 1;
                    if (*(int *)(iVar2 + 0x8b4) < *(int *)(iVar2 + 0x8ac)) {
                      *(int *)(iVar2 + 0x8b4) = *(int *)(iVar2 + 0x8ac);
                    }
                  }
                  *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | 0x10;
                  iVar7 = *(int *)(iVar2 + 0x8ac);
                  iVar5 = 0;
                  if (iVar7 == 2) {
                    iVar5 = 1000;
                  }
                  else if (iVar7 == 3) {
                    iVar5 = 0x5dc;
                  }
                  else if (iVar7 == 4) {
                    iVar5 = 2000;
                  }
                  else if (4 < iVar7) {
                    iVar5 = 3000;
                  }
                  *(int *)(iVar3 + 0x104) = iVar5 + 1000;
                  *(int *)(iVar2 + 0x8a8) = *(int *)(iVar2 + 0x8a8) + *(int *)(iVar3 + 0x104);
                }
                if ((*(int *)(iVar3 + 0x100) + *(int *)(iVar3 + 0x104) < *(int *)(iVar3 + 0x110)) &&
                   (index == 0)) {
                  Flags_Set(param_1,0x242);
                }
              }
            }
            else {
              uVar11 = *(uint *)(iVar3 + 0x10c);
              if ((uVar11 & 1) == 0) {
                iVar3 = iVar2 + iVar12 * 0x1c;
                *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | 1;
                LapTime_Reset(iVar2);
                break;
              }
LAB_001e09b8:
              if (*(int *)(iVar3 + 0x108) < 1) {
                *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | 4;
                *(undefined4 *)(iVar2 + 0x8ac) = 0;
                if ((*(int *)(iVar3 + 0x100) + *(int *)(iVar3 + 0x104) < *(int *)(iVar3 + 0x110)) &&
                   (index == 0)) {
                  Flags_Set(param_1,0x242);
                }
              }
              else if ((uStack_10 & 0x20) == 0) {
                if (((uVar11 & 0xe) == 0) && ((uVar11 & 1) != 0)) {
                  uStack_94 = 0x3f800000;
                  uStack_84 = 0x3f800000;
                  uVar13 = RaceCar_GetSpeedKmh(pRVar1);
                  RaceRule_PlaceCheckpoint(uVar13,&uStack_f0,uStack_6a,uStack_68,uVar8,0,0);
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
                  iVar7 = RaceProg_UpdateGapMeter(iVar2,index,iVar12);
                  *(int *)(iVar2 + 0x8a8) = *(int *)(iVar2 + 0x8a8) + iVar7;
                  *(int *)(iVar3 + 0x108) = *(int *)(iVar3 + 0x108) + -1;
                  *(int *)(iVar2 + 0x8b0) = iVar12;
                }
              }
              else {
                *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | 8;
                *(int *)(iVar2 + 0x8a8) = *(int *)(iVar2 + 0x8a8) - *(int *)(iVar3 + 0x100);
                if (*(int *)(iVar2 + 0x8a8) < 0) {
                  *(undefined4 *)(iVar2 + 0x8a8) = 0;
                }
                *(undefined4 *)(iVar3 + 0x100) = 0;
                *(undefined4 *)(iVar2 + 0x8ac) = 0;
                if ((*(int *)(iVar3 + 0x100) + *(int *)(iVar3 + 0x104) < *(int *)(iVar3 + 0x110)) &&
                   (index == 0)) {
                  Flags_Set(param_1,0x242);
                }
              }
            }
          }
          iVar12 = iVar12 + 1;
          iVar3 = iVar3 + 0x1c;
        } while (iVar12 < 0x46);
        uVar10 = RaceCar_GetFlags(pRVar1);
        if ((uVar10 & 0x100) != 0) {
          fVar14 = (float)RaceCar_GetSpeedPerMinute(pRVar1);
          iVar3 = ((int)(fVar14 * 100.0) / 10) * 10;
          if (iVar3 < 10) {
            iVar3 = 10;
          }
          *(int *)(iVar2 + 0x8a4) = *(int *)(iVar2 + 0x8a4) + iVar3;
        }
        if (*(int *)(iVar2 + 0x8a8) < *(int *)(iVar2 + 0x8a4)) {
          *(int *)(iVar2 + 0x8a4) = *(int *)(iVar2 + 0x8a8);
        }
        *(int *)(iVar2 + 0x8a0) = *(int *)(iVar2 + 0x8a8) - *(int *)(iVar2 + 0x8a4);
      }
      index = index + 1;
      iVar2 = GameState_GetRacerCount();
    } while (index < iVar2);
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
void RaceProg_ComputeDistance(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  RaceEntrySetup *pRVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined2 uStack_50;
  undefined2 uStack_40;
  undefined2 uStack_20;
  undefined2 uStack_18;
  
  iVar12 = 0;
  iVar9 = 0;
  iVar8 = param_1;
  do {
    LapTime_Clear(iVar8 + 0xf8);
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0x1c;
  } while (iVar9 < 0x46);
  uVar1 = GameState_Get_0();
  puVar11 = (undefined4 *)(&PTR_DAT_0031c270)[uVar1 & 0xff];
  iVar9 = GameState_Get_44();
  puVar10 = *(undefined4 **)(iVar9 + 0x24);
  iVar8 = *(int *)(iVar9 + 0x20);
  uVar1 = GameState_Get_1();
  iVar9 = iVar9 + (uVar1 & 0xff) * 0x10;
  iVar17 = *(int *)(iVar9 + 4);
  iVar13 = *(int *)(iVar9 + 0xc);
  iVar9 = GameState_Get_c();
  puVar2 = (undefined4 *)(iVar17 + iVar9 * 0x10);
  uVar15 = *puVar2;
  iVar17 = puVar2[1];
  iVar9 = GameState_Get_10();
  puVar2 = (undefined4 *)(iVar13 + iVar9 * 0x10);
  uVar16 = *puVar2;
  iVar9 = puVar2[1];
  GameState_Get_394();
  pRVar3 = GameState_Elem_f0_xcc(param_2);
  GameState_Elem_3e0_x540((int)(char)pRVar3->unk_09);
  lVar6 = GameState_Get_40();
  uStack_40 = (undefined2)uVar15;
  uStack_50 = (undefined2)uVar16;
  if (lVar6 == 0) {
    iVar13 = GameState_GetArray_3a78(uStack_40);
    iVar13 = iVar17 * 0x20 + iVar13;
    iVar4 = GameState_GetArray_3a78(uStack_50);
    iVar4 = iVar9 * 0x20 + iVar4;
  }
  else {
    iVar13 = GameState_GetArray_3a78(uStack_50);
    iVar13 = iVar9 * 0x20 + iVar13;
    iVar4 = GameState_GetArray_3a78(uStack_40);
    iVar4 = iVar17 * 0x20 + iVar4;
  }
  iVar9 = 0;
  if (0 < iVar8) {
    iVar17 = param_1;
    do {
      iVar18 = puVar10[1];
      uVar15 = puVar10[2];
      iVar14 = puVar10[3];
      uStack_20 = (undefined2)*puVar10;
      iVar5 = GameState_GetArray_3a78(uStack_20);
      uStack_18 = (undefined2)uVar15;
      iVar5 = iVar18 * 0x20 + iVar5;
      iVar18 = GameState_GetArray_3a78(uStack_18);
      iVar18 = iVar14 * 0x20 + iVar18;
      if ((((iVar13 < iVar5) && (iVar5 < iVar4)) && (iVar13 < iVar18)) && (iVar18 < iVar4)) {
        *(int *)(iVar17 + 0xf8) = iVar9;
        uVar7 = RaceProg_Get_4();
        if ((uVar7 & 0x40) == 0) {
          *(undefined4 *)(iVar17 + 0x110) = 0;
        }
        else {
          *(undefined4 *)(iVar17 + 0x110) = *puVar11;
        }
        iVar18 = ((iVar18 - iVar5) * 0x32) / 100;
        iVar5 = iVar18 % 0x3c;
        iVar18 = iVar18 - iVar5;
        if (0x1e < iVar5) {
          iVar18 = iVar18 + 0x3c;
        }
        *(int *)(iVar17 + 0x108) = iVar18;
        iVar5 = 0;
        do {
          lVar6 = Checkpoint_Update(iVar5,iVar9);
          if (lVar6 != 0) {
            *(int *)(iVar17 + 0xfc) = iVar5;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 10);
        iVar17 = iVar17 + 0x1c;
        iVar12 = iVar12 + 1;
      }
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 5;
      puVar11 = puVar11 + 1;
    } while (iVar9 < iVar8);
  }
  lVar6 = GameState_Get_40();
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x8b0) = 0;
  }
  else {
    *(int *)(param_1 + 0x8b0) = iVar12 + -1;
  }
  return;
}

// 0x001e10f0  size 0x7c0
void RaceProg_DetectCollisions(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  RaceCar *pRVar7;
  int iVar8;
  int iVar9;
  RaceCar *pRVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  char cVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_b0;
  int iStack_90;
  int aiStack_10 [4];
  
  cVar6 = GameState_GetRacerCount();
  piVar15 = (int *)0xc;
  piVar16 = aiStack_10;
  piVar5 = piVar16;
  while (piVar5 != (int *)0x0) {
    *(undefined1 *)piVar16 = 0;
    piVar16 = (int *)((int)piVar16 + 1);
    piVar15 = (int *)((int)piVar15 + -1);
    piVar5 = piVar15;
  }
  iStack_90 = -1;
  fVar21 = 0.0;
  if (((*(uint *)(param_1 + 4) & 0x80) == 0) && (cVar18 = '\0', '\0' < cVar6)) {
    do {
      pRVar7 = RaceCar_Get((int)cVar18);
      iVar8 = RaceCar_GetIndex(pRVar7);
      if ((*(uint *)(iVar8 + 4) & 0x60) == 0) {
        fVar20 = (float)RaceCar_GetPosition(pRVar7);
        if (fVar21 < fVar20) {
          fVar21 = fVar20;
          iStack_90 = (int)cVar18;
        }
        cVar17 = '\0';
        if ('\0' < cVar6) {
          piVar16 = aiStack_10;
          iVar9 = param_1;
          do {
            if (cVar18 != cVar17) {
              pRVar7 = RaceCar_Get((int)cVar17);
              iVar11 = RaceCar_GetIndex(pRVar7);
              uVar2 = *(uint *)(iVar11 + 4);
              if (((uVar2 & 0x60) == 0) &&
                 ((((uVar3 = *(uint *)(iVar8 + 4), (uVar3 & 1) != 0 && ((uVar2 & 2) != 0)) ||
                   (((uVar3 & 2) != 0 && ((uVar2 & 1) != 0)))) ||
                  ((((uVar3 & 9) != 0 && ((uVar2 & 0x11) != 0)) ||
                   (((uVar3 & 0x11) != 0 && ((uVar2 & 9) != 0)))))))) {
                fVar19 = (float)RaceCar_GetPosition(pRVar7);
                if (10.0 < fVar20 - fVar19) {
                  fVar19 = (fVar20 - fVar19) / 10.0;
                  uVar1 = *(undefined4 *)(iVar9 + 0x28);
                  *piVar16 = 1;
                  if (1.0 <= fVar19) {
                    LapTime_GetLapCount(uVar1,(int)((fVar19 * fVar19 + 4.0) * 100.0),0);
                  }
                }
              }
            }
            cVar17 = cVar17 + '\x01';
            iVar9 = iVar9 + 4;
            piVar16 = piVar16 + 1;
          } while (cVar17 < cVar6);
        }
      }
      cVar18 = cVar18 + '\x01';
    } while (cVar18 < cVar6);
  }
  cVar18 = '\0';
  if ('\0' < cVar6) {
    piVar16 = aiStack_10;
    iVar8 = param_1;
    do {
      uStack_b0 = 0;
      pRVar7 = RaceCar_Get((int)cVar18);
      iVar9 = RaceCar_GetIndex(pRVar7);
      bVar4 = true;
      cVar17 = '\0';
      if ('\0' < cVar6) {
        piVar15 = aiStack_10;
        do {
          if ((long)cVar17 != CONCAT44((int)((ulong)(long)cVar18 >> 0x20),(int)cVar18)) {
            pRVar10 = RaceCar_Get((int)cVar17);
            iVar11 = RaceCar_GetIndex(pRVar10);
            uVar2 = *(uint *)(iVar9 + 4);
            if ((((((uVar2 & 1) != 0) && ((*(uint *)(iVar11 + 4) & 2) != 0)) ||
                 (((uVar2 & 2) != 0 && ((*(uint *)(iVar11 + 4) & 1) != 0)))) ||
                ((((uVar2 & 9) != 0 && ((*(uint *)(iVar11 + 4) & 0x11) != 0)) ||
                 (((uVar2 & 0x11) != 0 && ((*(uint *)(iVar11 + 4) & 9) != 0)))))) && (*piVar15 == 0)
               ) {
              bVar4 = false;
              break;
            }
          }
          cVar17 = cVar17 + '\x01';
          piVar15 = piVar15 + 1;
        } while (cVar17 < cVar6);
      }
      if (((bVar4) && (*piVar16 == 0)) && (cVar17 = GameState_Get_354_7050(), cVar17 == '\0')) {
        uStack_b0 = 1;
      }
      uVar1 = *(undefined4 *)(iVar8 + 0x28);
      fVar21 = 0.0;
      lVar13 = Raceprog_Nop(uVar1);
      if (lVar13 != 0) {
        iVar11 = RaceCar_GetTracker(pRVar7);
        uVar2 = *(uint *)(iVar11 + 0x60);
        fVar20 = (float)RaceCar_GetSpeedKmh(pRVar7);
        uVar3 = pRVar7->unk_0158;
        uVar12 = PhysBody_FindShapeWithFlags(uVar3,0xffffffffff000000);
        if ((fVar20 <= 10.0) || ((uVar2 & 0x20) == 0)) {
          if (((10.0 < fVar20) &&
              (((uVar2 & 0x10) != 0 && (lVar13 = Raceprog_Nop(uVar1), 0x1312d0 < lVar13)))) &&
             ((long)iStack_90 != (long)cVar18)) {
            uVar12 = PhysBody_FindShapeWithFlags(uVar3,0xffffff);
            fVar21 = (float)PhysWorld_GetFirstBody(uVar12);
            fVar21 = fVar21 * 10.0;
            if (200000.0 < fVar21) {
              fVar21 = 200000.0;
            }
          }
        }
        else {
          fVar21 = (float)PhysWorld_GetFirstBody(uVar12);
          fVar21 = fVar21 * 120.0;
          if (250000.0 < fVar21) {
            fVar21 = 250000.0;
          }
        }
        if ((*(uint *)(iVar9 + 4) & 2) != 0) {
          fVar21 = fVar21 * 0.333;
        }
        if ((int)fVar21 != 0) {
          LapTime_GetLapCount(uVar1,(int)fVar21,uStack_b0);
        }
      }
      cVar18 = cVar18 + '\x01';
      piVar16 = piVar16 + 1;
      iVar8 = iVar8 + 4;
    } while (cVar18 < cVar6);
  }
  cVar18 = '\0';
  if ('\0' < cVar6) {
    do {
      lVar13 = Raceprog_Nop(*(undefined4 *)(param_1 + 0x28));
      if (lVar13 == 0) {
        pRVar7 = RaceCar_Get((int)cVar18);
        RaceCar_GetIndex(pRVar7);
        uVar14 = RaceCar_GetFlags(pRVar7);
        if ((uVar14 & 0x800) == 0) {
          if (cVar18 == '\x02') {
            maybe_RaceScene_AddHandler(0x1008);
          }
          else if (cVar18 == '\x01') {
            lVar13 = GameState_GetPlayerCount();
            if (lVar13 == 2) {
              maybe_RaceScene_AddHandler(0x1002);
              maybe_RaceScene_AddHandler(0x402);
            }
            else {
              maybe_RaceScene_AddHandler(0x1004);
            }
          }
          else if (cVar18 == '\0') {
            maybe_RaceScene_AddHandler(0x1001);
            maybe_RaceScene_AddHandler(0x401);
          }
        }
      }
      cVar18 = cVar18 + '\x01';
      param_1 = param_1 + 4;
    } while (cVar18 < cVar6);
  }
  return;
}

// 0x001e18d0  size 0x104
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
      Flags_Set(g_RaceProg,0x402);
    }
    else {
      Flags_Set(g_RaceProg,0x401);
    }
  }
  else {
    cVar1 = GameState_Get_354();
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)RaceProg_GetArray_28(0);
      *puVar2 = 0;
    }
    Flags_Set(g_RaceProg,0x402);
  }
  RaceProg_Set_8(5);
  return;
}

// 0x001e19e0  size 0x2d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceCam_UpdateIntro(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int index;
  RaceCar *pRVar7;
  RaceCar *pRVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  bVar4 = false;
  bVar3 = false;
  if ((g_Loading->flags & 2) == 0) {
    lVar9 = RaceScene_IsPaused();
    if (lVar9 != 0) {
      *param_1 = 5;
    }
    lVar9 = RaceScene_IsReplay();
    if ((lVar9 != 0) && (param_1[2] == 0)) {
      param_1[2] = 1;
      Fade_ToBlack();
    }
    cVar5 = RaceCtx_Get_8();
    if (cVar5 == '\r') {
      uVar11 = 0;
      do {
        puVar1 = g_Loading->workBufs[uVar11 & 0xff];
        Cam_Update(puVar1);
        if (*(int *)(puVar1 + 0x500) != 0) {
          bVar4 = true;
        }
        uVar10 = RaceCar_GetFlags(*(undefined4 *)(puVar1 + 0x7b0));
        if ((uVar10 & 0x800) != 0) {
          bVar3 = true;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < 2);
      puVar1 = g_Loading->workBufs[0];
      puVar2 = g_Loading->workBufs[1];
      iVar6 = Cam_GetTargetBodyA(puVar1);
      index = Cam_GetTargetBodyA(puVar2);
      pRVar7 = RaceCar_Get(iVar6);
      pRVar8 = RaceCar_Get(index);
      if ((bVar3) && (param_1[1] != 0)) {
        sceVu0CopyVector(puVar1 + 0x4d0,puVar2 + 0x4d0);
        param_1[1] = param_1[1] + -1;
      }
      if (bVar4) {
        if ((bVar3) && (param_1[1] == 0)) {
          fVar12 = (float)RaceCar_GetPosition(pRVar7);
          fVar13 = (float)RaceCar_GetPosition(pRVar8);
          if (fVar13 < fVar12) {
            puVar1 = g_Loading->workBufs[0];
            g_Loading->workBufs[0] = g_Loading->workBufs[1];
            g_Loading->workBufs[1] = puVar1;
          }
        }
        else {
          fVar12 = (float)RaceCar_GetPosition(pRVar7);
          fVar13 = (float)RaceCar_GetPosition(pRVar8);
          if (fVar12 < fVar13) {
            puVar1 = g_Loading->workBufs[0];
            g_Loading->workBufs[0] = g_Loading->workBufs[1];
            g_Loading->workBufs[1] = puVar1;
          }
        }
      }
    }
    else {
      puVar1 = g_Loading->workBufs[0];
      cVar5 = RaceCtx_GetMode();
      if (cVar5 != '\x06') {
        if (_g_AiDrivers == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(_g_AiDrivers + 8);
        }
        if ((*(uint *)(iVar6 + 0x10) & 0x40) != 0) {
          Cam_NextMode(puVar1);
        }
      }
      Cam_Update(puVar1);
    }
    if (*(int *)(iRam0036f3b0 + 0xc) != 0) {
      iVar6 = *(int *)(*(int *)(iRam0036f3b0 + 0xc) + 0x14);
      lVar9 = Cam_IsIdle(g_Loading->workBufs[0]);
      if (lVar9 == 0) {
        *(undefined4 *)(iVar6 + 4) = 0;
        *(undefined1 *)(iVar6 + 8) = 1;
      }
      else {
        *(undefined4 *)(iVar6 + 4) = 1;
        *(undefined1 *)(iVar6 + 8) = 0;
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
  undefined *puVar1;
  int iVar2;
  char cVar3;
  RaceCar *pRVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = RaceScene_IsFlag8000();
  if (lVar6 == 0) {
    return;
  }
  cVar3 = RaceCtx_Get_8();
  uVar7 = 0;
  _s_RaceIsReplayMode = (uint)(cVar3 == '\r');
  do {
    puVar1 = g_Loading->workBufs[uVar7 & 0xff];
    pRVar4 = RaceCar_Get(uVar7);
    *(RaceCar **)(puVar1 + 0x7b0) = pRVar4;
    pRVar4 = RaceCar_Get(uVar7);
    *(RaceCar **)(puVar1 + 0x7b4) = pRVar4;
    piVar5 = (int *)maybe_Options_GetLanguage();
    iVar2 = *piVar5;
    if (iVar2 == 2) {
      puVar1[0x4f9] = 2;
    }
    else if (iVar2 == 1) {
      puVar1[0x4f9] = 1;
    }
    else if (iVar2 == 0) {
      puVar1[0x4f9] = 0;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  if (_s_RaceIsReplayMode == 0) {
    puVar1 = g_Loading->workBufs[0];
    lVar6 = RaceScene_IsFlag10();
    if ((lVar6 == 0) && (cVar3 = RaceCtx_GetMode(), cVar3 != '\x06')) {
      if (iRam0046a590 == 0) {
        Cam_SetMode(puVar1,8);
      }
      else {
        Cam_SetMode(puVar1,7);
        pRVar4 = RaceCar_Get(1);
        *(RaceCar **)(puVar1 + 0x7b0) = pRVar4;
        pRVar4 = RaceCar_Get(1);
        *(RaceCar **)(puVar1 + 0x7b4) = pRVar4;
      }
    }
    else {
      Cam_SetMode(puVar1,3);
    }
  }
  else {
    lVar6 = RaceScene_IsFlag10();
    if (lVar6 == 0) {
      uVar7 = 0;
      do {
        Cam_SetMode(g_Loading->workBufs[uVar7 & 0xff],0);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 2);
      uVar7 = 0;
      goto LAB_001e1e3c;
    }
    Cam_SetMode(g_Loading->workBufs[0],3);
    Cam_SetMode(g_Loading->workBufs[1],3);
    _s_RaceIsReplayMode = 0;
  }
  uVar7 = 0;
LAB_001e1e3c:
  do {
    Cam_Update(g_Loading->workBufs[uVar7 & 0xff]);
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
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  uVar5 = 0;
  do {
    Cam_ResetTimer(g_Loading->workBufs[uVar5 & 0xff]);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  puVar7 = (uint *)param_1;
  if (*puVar7 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(*puVar7) {
    case 0:
      RaceCam_UpdateFinish(param_1);
      uVar5 = 0;
      goto LAB_001e210c;
    case 1:
      lVar4 = RaceScene_IsRunning();
      if (lVar4 != 0) {
        *(undefined4 *)(g_Loading->workBufs[0] + 0x500) = 1;
        *(undefined4 *)(g_Loading->workBufs[1] + 0x500) = 1;
        lVar4 = RaceScene_IsFlag10();
        uVar5 = 4;
        if (lVar4 == 0) {
          uVar5 = 3;
        }
        *puVar7 = uVar5;
      }
      break;
    case 2:
      iVar6 = 2;
      if (_s_RaceIsReplayMode == 0) {
        iVar6 = 1;
      }
      uVar5 = 0;
      if (iVar6 != 0) {
        do {
          Cam_Update(g_Loading->workBufs[uVar5 & 0xff]);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar6);
      }
      if ((g_Loading->flags & 1) == 0) {
        *puVar7 = 3;
      }
      break;
    case 3:
      if (_s_RaceIsReplayMode == 0) {
        if ((g_Loading->flags & 2) == 0) {
          lVar4 = RaceScene_IsPaused();
          if (lVar4 != 0) {
            *puVar7 = 5;
          }
          puVar1 = g_Loading->workBufs[0];
          if (_g_AiDrivers == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(_g_AiDrivers + 8);
          }
          if ((*(uint *)(iVar6 + 0x10) & 0x80) == 0) {
            *(uint *)(puVar1 + 0x7c0) = *(uint *)(puVar1 + 0x7c0) & 0xfffffffe;
          }
          else {
            *(uint *)(puVar1 + 0x7c0) = *(uint *)(puVar1 + 0x7c0) | 1;
          }
          if ((*(uint *)(iVar6 + 0x10) & 0x40) != 0) {
            Cam_NextMode(puVar1);
          }
          Cam_Update(puVar1);
        }
        else {
          *puVar7 = 6;
        }
      }
      else if ((g_Loading->flags & 2) == 0) {
        lVar4 = RaceScene_IsPaused();
        if (lVar4 != 0) {
          *puVar7 = 5;
        }
        puVar1 = g_Loading->workBufs[1];
        puVar2 = g_Loading->workBufs[0];
        if (_g_AiDrivers == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(_g_AiDrivers + 8);
        }
        if ((*(uint *)(iVar6 + 0x10) & 0x80) == 0) {
          *(uint *)(puVar2 + 0x7c0) = *(uint *)(puVar2 + 0x7c0) & 0xfffffffe;
        }
        else {
          *(uint *)(puVar2 + 0x7c0) = *(uint *)(puVar2 + 0x7c0) | 1;
        }
        if (_g_AiDrivers == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(_g_AiDrivers + 0xc);
        }
        if ((*(uint *)(iVar6 + 0x10) & 0x80) == 0) {
          *(uint *)(puVar1 + 0x7c0) = *(uint *)(puVar1 + 0x7c0) & 0xfffffffe;
        }
        else {
          *(uint *)(puVar1 + 0x7c0) = *(uint *)(puVar1 + 0x7c0) | 1;
        }
        Cam_Update();
        Cam_Update(puVar1);
      }
      else {
        *puVar7 = 6;
      }
      break;
    case 4:
      RaceCam_UpdateIntro(param_1);
      break;
    case 5:
      lVar4 = RaceScene_IsPaused();
      if (lVar4 == 0) {
        puVar7[2] = 0;
        lVar4 = RaceScene_IsFlag10();
        if (lVar4 == 0) {
          *puVar7 = 3;
          if ((g_Loading->flags & 2) == 0) {
            lVar4 = RaceScene_IsPaused();
            if (lVar4 != 0) {
              *puVar7 = 5;
            }
            puVar1 = g_Loading->workBufs[0];
            if (_g_AiDrivers == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(_g_AiDrivers + 8);
            }
            if ((*(uint *)(iVar6 + 0x10) & 0x80) == 0) {
              *(uint *)(puVar1 + 0x7c0) = *(uint *)(puVar1 + 0x7c0) & 0xfffffffe;
            }
            else {
              *(uint *)(puVar1 + 0x7c0) = *(uint *)(puVar1 + 0x7c0) | 1;
            }
            if ((*(uint *)(iVar6 + 0x10) & 0x40) != 0) {
              Cam_NextMode(puVar1);
            }
            Cam_Update(puVar1);
          }
          else {
            *puVar7 = 6;
          }
        }
        else {
          *puVar7 = 4;
          RaceCam_UpdateIntro(param_1);
        }
      }
      break;
    case 6:
      g_Loading->flags = g_Loading->flags & 0xfffffffd;
      cVar3 = RaceCtx_Get_8();
      _s_RaceIsReplayMode = (uint)(cVar3 == '\r');
      puVar7[2] = 0;
      *puVar7 = 0;
    }
  }
  uVar5 = 0;
LAB_001e210c:
  do {
    Cam_NopB(g_Loading->workBufs[uVar5 & 0xff]);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  return;
}

// 0x001e2390  size 0x8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceTask_BeginLoading(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  Loading_Begin(0x430750);
  cVar2 = RaceCtx_Get_8();
  _s_RaceIsReplayMode = (uint)(cVar2 == '\r');
  uVar3 = GameState_Get_0();
  uVar4 = GameState_Get_1();
  uVar3 = Loading_GetCourseImageIndex(uVar3,uVar4);
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
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  byte bVar7;
  RaceCar *pRVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  RaceCar *pRVar13;
  RaceEntrySetup *pRVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
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
  uint uStack_5d0;
  uint uStack_5cc;
  uint uStack_5c8;
  uint uStack_5c0;
  uint uStack_5bc;
  uint uStack_5b8;
  uint uStack_5b4;
  uint uStack_5b0;
  uint uStack_5ac;
  uint uStack_5a8;
  uint uStack_5a4;
  uint uStack_5a0;
  uint uStack_59c;
  uint uStack_598;
  uint uStack_594;
  uint uStack_590;
  uint uStack_58c;
  uint uStack_588;
  uint uStack_584;
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
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  uint uStack_388;
  uint uStack_384;
  uint uStack_380;
  uint uStack_37c;
  uint uStack_378;
  uint uStack_374;
  uint uStack_370;
  uint uStack_36c;
  uint uStack_368;
  uint uStack_364;
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
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined4 auStack_100 [4];
  undefined1 auStack_f0 [12];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 auStack_10 [16];
  
  puVar1 = g_Loading->workBufs[0];
  puVar2 = g_Loading->workBufs[1];
  if (((param_1[6] & 1U) == 0) && ((param_1[6] & 2U) == 0)) {
    CourseStream_LoadSky();
    param_1[6] = param_1[6] | 2;
    param_1[6] = param_1[6] | 1;
  }
  uVar28 = param_1[6];
  if (((uVar28 & 1) == 0) && ((uVar28 & 4) == 0)) {
    param_1[6] = uVar28 | 0x20;
    param_1[6] = param_1[6] | 8;
    if (_s_RaceIsReplayMode == 0) {
      CourseStream_RequestTextures(fRam004311a4,0,puVar1 + 0x420,0);
      CourseStream_RequestLod(fRam004311a4,fRam004311a4 + 200.0,0,puVar1 + 0x420,0);
    }
    else {
      CourseStream_RequestTextures(0x43fa0000,0,puVar1 + 0x420,0);
      CourseStream_RequestLod(0x43fa0000,0x442f0000,0,puVar1 + 0x420,0);
      CourseStream_RequestTextures(0x43fa0000,1,puVar2 + 0x420,0);
      CourseStream_RequestLod(0x43fa0000,0x442f0000,1,puVar2 + 0x420,0);
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
  lVar16 = RaceScene_IsFlag8000();
  if (lVar16 != 0) {
    if ((param_1[6] & 1U) != 0) {
      Sema_Wait(0x36efc0);
      iVar20 = iRam00386628;
      Sema_Signal(0x36efc0,0);
      if (iVar20 == 0) {
        param_1[6] = param_1[6] & 0xfffffffe;
      }
    }
    if ((param_1[6] & 7U) == 6) {
      lVar16 = RaceScene_IsFlag2();
      if (lVar16 == 0) {
        RaceScene_SetFlagB2();
      }
      lVar16 = RaceScene_IsRunning();
      if ((lVar16 == 1) && (lVar16 = RaceScene_IsReplay(), lVar16 == 0)) {
        Loading_Update();
        if (_s_RaceIsReplayMode == 0) {
          lVar16 = RaceScene_IsFlag10();
          if (lVar16 == 0) {
            CourseStream_RequestTextures(fRam004311a4,0,puVar1 + 0x420,0);
            CourseStream_RequestLod(0x42c80000,fRam004311a4 + 50.0,0,puVar1 + 0x420,0);
          }
          else {
            Cam_UpdateShake(g_Loading->workBufs[0],auStack_10);
            CourseStream_RequestTextures(fRam004311a4,0,puVar1 + 0x420,auStack_10);
            CourseStream_RequestLod(0x42c80000,fRam004311a4 + 50.0,0,puVar1 + 0x420,auStack_10);
          }
        }
        else {
          CourseStream_RequestTextures(fRam00431764,0,puVar1 + 0x420,puVar2 + 0x420);
          CourseStream_RequestBlock
                    (0x42960000,fRam00431764 + 50.0,0x42960000,fRam00431d24 + 50.0,0,1);
        }
        iStack_a40 = 0;
        piStack_aa0 = param_1;
        do {
          pRVar8 = RaceCar_Get(iStack_a40);
          GameState_CopyPlayerRecord(auStack_a10,iStack_a40);
          puVar9 = auStack_a10;
          puVar21 = &uStack_e0;
          iVar20 = 0x33;
          do {
            iVar20 = iVar20 + -1;
            *puVar21 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar21 = puVar21 + 1;
          } while (0 < iVar20);
          if (((((((uStack_dc & 0x60) == 0) || (lVar16 = GameState_Get_ec(), lVar16 != 0)) &&
                (((uStack_dc & 0x20) == 0 || (lVar16 = RaceScene_IsFlag400(), lVar16 != 0)))) &&
               (((uStack_dc & 0x40) == 0 || (lVar16 = RaceScene_IsFlag1000(), lVar16 != 0)))) &&
              (((uStack_dc & 0x100) == 0 || (bVar7 = RaceProg_GetPhase(), 2 < bVar7)))) &&
             ((uStack_a50 = 0xc, pRVar8 != (RaceCar *)0x0 && (piStack_aa0[7] != 0)))) {
            Race_SetupCars(param_1,piStack_aa0[7] + 0x110,pRVar8,iStack_a40);
            if ((iStack_a40 == 0) && (lVar16 = RaceScene_IsFlag800(), lVar16 != 0)) {
              puVar12 = (undefined1 *)0x10;
              puVar22 = auStack_f0;
              puVar5 = puVar22;
              while (puVar5 != (undefined1 *)0x0) {
                *puVar22 = 0;
                puVar22 = puVar22 + 1;
                puVar12 = puVar12 + -1;
                puVar5 = puVar12;
              }
              iVar20 = 0;
              puVar21 = auStack_100;
              do {
                iVar10 = RaceCar_GetWheelFx(pRVar8,iVar20);
                *puVar21 = *(undefined4 *)(iVar10 + 0x14);
                sceVu0AddVector(auStack_f0,auStack_f0,iVar10 + 0x20);
                iVar20 = iVar20 + 1;
                puVar21 = puVar21 + 1;
              } while (iVar20 < 4);
              sceVu0ScaleVector(0x3e800000,auStack_f0,auStack_f0);
              uStack_e4 = 0x3f800000;
              uVar17 = RaceScene_Get_40();
              Course_TransformStartPoint(uVar17,&pRVar8->unk_00e0,auStack_f0,auStack_100);
            }
            if (_s_RaceIsReplayMode == 0) {
              if ((iStack_a40 == 0) && (lVar16 = Cam_IsIdle(puVar1), lVar16 != 0)) {
                uStack_140 = pRVar8->unk_00e0;
                uStack_13c = pRVar8->unk_00e4;
                uStack_138 = pRVar8->unk_00e8;
                uStack_134 = pRVar8->unk_00ec;
                uStack_130 = pRVar8->unk_00f0;
                uStack_12c = pRVar8->unk_00f4;
                uStack_128 = pRVar8->unk_00f8;
                uStack_124 = pRVar8->unk_00fc;
                uStack_120 = pRVar8->unk_0100;
                uStack_11c = pRVar8->unk_0104;
                uStack_118 = pRVar8->unk_0108;
                uStack_114 = pRVar8->unk_010c;
                uStack_110 = pRVar8->unk_0110;
                uStack_10c = pRVar8->unk_0114;
                uStack_108 = pRVar8->unk_0118;
                uStack_104 = pRVar8->unk_011c;
                iVar20 = piStack_aa0[7];
                sceVu0CopyVector(iVar20 + 0x120,&uStack_140);
                sceVu0CopyVector(iVar20 + 0x130,&uStack_130);
                sceVu0CopyVector(iVar20 + 0x140,&uStack_120);
                sceVu0CopyVector(iVar20 + 0x150,&uStack_110);
                goto LAB_001e311c;
              }
            }
            else {
              if ((iStack_a40 == 0) && (lVar16 = Cam_IsIdle(puVar1), lVar16 != 0)) {
                uStack_a50 = 8;
              }
              if ((iStack_a40 == 1) && (lVar16 = Cam_IsIdle(puVar2), lVar16 != 0)) {
                uStack_a50 = uStack_a50 & 0xfffffff7;
              }
            }
            lVar16 = AsyncRes_IsReady(piStack_aa0[7]);
            if (lVar16 != 0) {
              lVar16 = RaceScene_IsFlag400();
              if ((lVar16 == 0) || ((uStack_dc & 0x20) == 0)) {
                puVar12 = (undefined1 *)0x10;
                puVar22 = auStack_360;
                puVar5 = puVar22;
                while (puVar5 != (undefined1 *)0x0) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                  puVar12 = puVar12 + -1;
                  puVar5 = puVar12;
                }
                uStack_3a0 = pRVar8->unk_00e0;
                iVar20 = piStack_aa0[7];
                iVar10 = iVar20 + 0x110;
                uStack_39c = pRVar8->unk_00e4;
                uStack_398 = pRVar8->unk_00e8;
                uStack_394 = pRVar8->unk_00ec;
                uStack_390 = pRVar8->unk_00f0;
                uStack_38c = pRVar8->unk_00f4;
                uStack_388 = pRVar8->unk_00f8;
                uStack_384 = pRVar8->unk_00fc;
                uStack_380 = pRVar8->unk_0100;
                uStack_37c = pRVar8->unk_0104;
                uStack_378 = pRVar8->unk_0108;
                uStack_374 = pRVar8->unk_010c;
                uStack_3b0 = pRVar8->unk_0110;
                uStack_3ac = pRVar8->unk_0114;
                uStack_3a8 = pRVar8->unk_0118;
                uStack_364 = pRVar8->unk_011c;
                uStack_370 = uStack_3b0;
                uStack_36c = uStack_3ac;
                uStack_368 = uStack_3a8;
                sceVu0CopyVector(iVar20 + 0x120,&uStack_3a0);
                sceVu0CopyVector(iVar20 + 0x130,&uStack_390);
                sceVu0CopyVector(iVar20 + 0x140,&uStack_380);
                sceVu0CopyVector(iVar20 + 0x150,&uStack_370);
                uVar28 = 0;
                iStack_ab0 = 0;
                iStack_ae0 = iVar10;
                iStack_ad0 = iVar10;
                iStack_ac0 = iVar10;
                do {
                  uVar29 = 0;
                  iStack_af0 = iStack_ad0;
                  iVar11 = iStack_ac0;
                  iVar25 = iStack_ae0;
                  do {
                    maybe_Vu0_UnitMatrix(auStack_3f0);
                    uVar27 = (1 - uVar29) + iStack_ab0;
                    maybe_Vu0_UnitMatrix(auStack_430);
                    if (uVar29 == 1) {
                      maybe_Vu0_RotMatrixY(0x40490fdb,auStack_430,auStack_430);
                    }
                    maybe_Vu0_RotMatrixX
                              (*(undefined4 *)((int)pRVar8 + uVar27 * 0x140 + 0x1d0),auStack_430,
                               auStack_430);
                    sceVu0MulMatrix(iVar11 + 0x1a0,auStack_3f0,auStack_430);
                    maybe_Vu0_UnitMatrix(auStack_3f0);
                    Mat34_Identity(auStack_4b0);
                    Quat_ToMat33(auStack_4b0,(int)pRVar8 + uVar27 * 0x140 + 0x1e0);
                    sceVu0CopyVector(auStack_470,auStack_4b0);
                    sceVu0CopyVector(auStack_460,auStack_4a0);
                    sceVu0CopyVector(auStack_450,auStack_490);
                    sceVu0CopyVector(auStack_440,auStack_480);
                    sceVu0MulMatrix(auStack_3f0,auStack_470,auStack_3f0);
                    maybe_Vu0_UnitMatrix(auStack_4f0);
                    fVar33 = *(float *)((int)pRVar8 + uVar27 * 0x140 + 0x1d8);
                    if (uVar27 < 2) {
                      fVar31 = (float)pRVar8->unk_0148;
                    }
                    else {
                      fVar31 = 0.0;
                    }
                    maybe_Vu0_RotMatrixY(fVar33 + fVar31,auStack_4f0,auStack_4f0);
                    maybe_Vu0_RotMatrixY(fVar33,auStack_4f0,auStack_4f0);
                    sceVu0MulMatrix(auStack_3f0,auStack_4f0,auStack_3f0);
                    maybe_Vu0_UnitMatrix(auStack_530);
                    if (uVar28 == 0) {
                      maybe_Vu0_RotMatrixX(0x3dd67751,auStack_530,auStack_530);
                    }
                    sceVu0MulMatrix(auStack_3f0,auStack_530,auStack_3f0);
                    puVar3 = pRVar8->maybe_params;
                    uStack_548 = *(undefined4 *)(puVar3 + uVar27 * 0x60 + 0x3a8);
                    uStack_550 = *(undefined4 *)(puVar3 + uVar27 * 0x60 + 0x3a0);
                    fStack_54c = *(float *)(puVar3 + uVar27 * 0x60 + 0x3a4) +
                                 *(float *)((int)pRVar8 + uVar27 * 0x140 + 0x1b0);
                    sceVu0CopyVector(auStack_540,&uStack_550);
                    sceVu0TransMatrix(iVar11 + 0xa0,auStack_3f0,auStack_540);
                    iVar23 = RaceCar_GetWheelFx(pRVar8,uVar27);
                    sceVu0CopyVector(iStack_af0 + 0x60,iVar23 + 0x10);
                    sceVu0AddVector(auStack_360,auStack_360,iVar23 + 0x20);
                    fVar32 = (float)pRVar8->unk_0cc8;
                    fVar31 = *(float *)((int)pRVar8 + uVar27 * 0x140 + 0x270);
                    fVar33 = fVar32;
                    if (fVar32 <= fVar31) {
                      fVar33 = fVar31;
                      if ((float)pRVar8->unk_0cc4 < fVar31) {
                        fVar33 = (float)pRVar8->unk_0cc4;
                      }
                    }
                    *(float *)(iVar25 + 0x2c0) =
                         (fVar33 - fVar32) / ((float)pRVar8->unk_0cc4 - fVar32);
                    fVar33 = (float)fabsf(*(undefined4 *)((int)pRVar8 + uVar27 * 0x140 + 0x28c));
                    *(float *)(iVar25 + 0x2d0) = fVar33;
                    if (fVar33 <= 31.415926) {
                      if (15.707963 < fVar33) {
                        *(undefined1 *)(iVar10 + uVar29 + 0x300) = 1;
                      }
                      else {
                        *(undefined1 *)(iVar10 + uVar29 + 0x300) = 0;
                      }
                    }
                    else {
                      *(undefined1 *)(iVar10 + uVar29 + 0x300) = 2;
                    }
                    uVar29 = uVar29 + 1;
                    iVar11 = iVar11 + 0x40;
                    iStack_af0 = iStack_af0 + 0x10;
                    iVar25 = iVar25 + 4;
                  } while (uVar29 < 2);
                  uVar28 = uVar28 + 1;
                  iStack_ab0 = iStack_ab0 + 2;
                  iStack_ac0 = iStack_ac0 + 0x80;
                  iStack_ad0 = iStack_ad0 + 0x20;
                  iStack_ae0 = iStack_ae0 + 8;
                  iVar10 = iVar10 + 2;
                } while (uVar28 < 2);
                sceVu0ScaleVector(0x3e800000,iVar20 + 0x160,auStack_360);
                *(undefined4 *)(iVar20 + 0x16c) = 0x3f800000;
                cVar6 = GameState_Get_3();
                if (cVar6 == '\x01') {
                  pRVar13 = RaceCar_Get(iStack_a40);
                  uVar17 = PhysBody_GetWorldMatrix(pRVar13->unk_0154);
                  fVar33 = 0.0;
                  uStack_560 = DAT_0031c330;
                  uStack_55c = DAT_0031c334;
                  uStack_558 = DAT_0031c338;
                  uStack_554 = DAT_0031c33c;
                  maybe_Vu0_SetUnitW(iVar20 + 0x3b0);
                  maybe_Vu0_SetUnitW(iVar20 + 0x3c0);
                  iVar10 = 0;
                  piVar24 = param_1;
                  do {
                    if (iStack_a40 != iVar10) {
                      pRVar13 = RaceCar_Get(iVar10);
                      pRVar14 = GameState_Elem_f0_xcc(iVar10);
                      if ((pRVar13 != (RaceCar *)0x0) && ((pRVar14->unk_04 & 0x20) == 0)) {
                        uVar19 = RaceCar_GetFlags(pRVar13);
                        if ((uVar19 & 8) == 0) {
                          uVar19 = RaceCar_GetFlags(pRVar13);
                          if ((uVar19 & 0x80) == 0) goto LAB_001e3fb8;
                        }
                        uVar19 = RaceCar_GetFlags(pRVar13);
                        if ((uVar19 & 0x10) != 0) {
                          uStack_5c0 = pRVar13->unk_00e0;
                          uStack_5bc = pRVar13->unk_00e4;
                          uStack_5b8 = pRVar13->unk_00e8;
                          uStack_5b4 = pRVar13->unk_00ec;
                          uStack_5b0 = pRVar13->unk_00f0;
                          uStack_5ac = pRVar13->unk_00f4;
                          uStack_5a8 = pRVar13->unk_00f8;
                          uStack_5a4 = pRVar13->unk_00fc;
                          uStack_5a0 = pRVar13->unk_0100;
                          uStack_59c = pRVar13->unk_0104;
                          uStack_598 = pRVar13->unk_0108;
                          uStack_594 = pRVar13->unk_010c;
                          uStack_5d0 = pRVar13->unk_0110;
                          uStack_5cc = pRVar13->unk_0114;
                          uStack_5c8 = pRVar13->unk_0118;
                          uStack_584 = pRVar13->unk_011c;
                          uStack_590 = uStack_5d0;
                          uStack_58c = uStack_5cc;
                          uStack_588 = uStack_5c8;
                          fVar31 = (float)Vu0_Vec3Distance(auStack_580,uVar17,&uStack_5d0);
                          fVar31 = fVar31 / 5.0;
                          if (fVar31 < 1.0) {
                            fVar31 = 1.0;
                          }
                          fVar32 = (float)sceVu0InnerProduct(auStack_580,&uStack_5c0);
                          fVar31 = (fVar32 * fVar32 * fVar32) / fVar31;
                          if (fVar33 < fVar31) {
                            if ((*(uint *)(piVar24[7] + 0x110) & 8) != 0) {
                              fVar31 = fVar31 * 1.2;
                            }
                            sceVu0ScaleVector(0x3f800000,auStack_570,auStack_580);
                            fVar33 = fVar31;
                          }
                        }
                      }
                    }
LAB_001e3fb8:
                    iVar10 = iVar10 + 1;
                    piVar24 = piVar24 + 1;
                  } while (iVar10 < 3);
                  sceVu0ScaleVector(fVar33,iVar20 + 0x3b0,&uStack_560);
                  *(undefined4 *)(iVar20 + 0x3bc) = 0;
                  sceVu0CopyVector(iVar20 + 0x3c0,auStack_570);
                  *(undefined4 *)(iVar20 + 0x3cc) = 0x3f800000;
                }
                else {
                  sceVu0CopyVector(iVar20 + 0x3b0,0x436220);
                  sceVu0MulVector(iVar20 + 0x3b0,iVar20 + 0x3b0,iVar20 + 0x160);
                  *(undefined4 *)(iVar20 + 0x3c0) = 0;
                  *(undefined4 *)(iVar20 + 0x3c4) = 0xbf800000;
                  *(undefined4 *)(iVar20 + 0x3c8) = 0;
                  *(undefined4 *)(iVar20 + 0x3cc) = 0x3f800000;
                }
              }
              else {
                puVar9 = (undefined4 *)0x10;
                puVar21 = &uStack_150;
                puVar4 = puVar21;
                while (puVar4 != (undefined4 *)0x0) {
                  *(undefined1 *)puVar21 = 0;
                  puVar21 = (undefined4 *)((int)puVar21 + 1);
                  puVar9 = (undefined4 *)((int)puVar9 + -1);
                  puVar4 = puVar9;
                }
                iVar20 = piStack_aa0[7];
                iVar10 = iVar20 + 0x110;
                lVar16 = RaceScene_IsPaused();
                if (lVar16 == 0) {
                  uVar17 = RaceScene_Get_40();
                  lVar16 = Course_GetStartTransform(uVar17,auStack_1a0,&uStack_150,auStack_160);
                }
                else {
                  iVar11 = RaceScene_Get_40();
                  lVar16 = Course_GetStartTransform(iVar11 + -1,auStack_1a0,&uStack_150,auStack_160)
                  ;
                }
                sceVu0CopyVector(iVar20 + 0x120,auStack_1a0);
                sceVu0CopyVector(iVar20 + 0x130,auStack_190);
                sceVu0CopyVector(iVar20 + 0x140,auStack_180);
                sceVu0CopyVector(iVar20 + 0x150,&uStack_170);
                *(undefined4 *)(iVar20 + 0x160) = uStack_150;
                *(undefined4 *)(iVar20 + 0x164) = uStack_14c;
                *(undefined4 *)(iVar20 + 0x168) = uStack_148;
                *(undefined4 *)(iVar20 + 0x16c) = uStack_144;
                uStack_1b0 = uStack_170;
                uStack_1ac = uStack_16c;
                uStack_1a8 = uStack_168;
                lVar18 = RaceScene_IsPaused();
                if (lVar18 == 0) {
                  if ((lVar16 == 0) || (lVar16 = RaceScene_Get_40(), lVar16 == 0)) {
                    fVar33 = 0.0;
                  }
                  else {
                    fVar33 = (float)pRVar8->unk_1788;
                  }
                  fVar33 = (((fVar33 * 1000.0) / 216000.0) /
                           (((float)pRVar8->unk_0da4 + (float)pRVar8->unk_0eb4) * 0.5 * 6.2831855))
                           * 6.2831855;
                  pRVar8->unk_1794 = (uint)fVar33;
                  pRVar8->unk_1790 = (uint)((float)pRVar8->unk_1790 + fVar33);
                  while( true ) {
                    while (3.1415927 < (float)pRVar8->unk_1790) {
                      pRVar8->unk_1790 = (uint)((float)pRVar8->unk_1790 - 6.2831855);
                    }
                    if (-3.1415927 <= (float)pRVar8->unk_1790) break;
                    pRVar8->unk_1790 = (uint)((float)pRVar8->unk_1790 + 6.2831855);
                  }
                }
                uStack_a60 = 0;
                iVar11 = 0;
                iStack_b20 = iVar10;
                iStack_b10 = iVar10;
                iStack_b00 = iVar10;
                do {
                  uVar28 = 0;
                  iVar25 = iStack_b00;
                  iVar23 = iStack_b10;
                  iVar30 = iStack_b20;
                  do {
                    maybe_Vu0_UnitMatrix(auStack_1f0);
                    iVar26 = (1 - uVar28) + iVar11;
                    maybe_Vu0_UnitMatrix(auStack_230);
                    if (uVar28 == 1) {
                      maybe_Vu0_RotMatrixY(0x40490fdb,auStack_230,auStack_230);
                    }
                    maybe_Vu0_RotMatrixX(pRVar8->unk_1790,auStack_230,auStack_230);
                    sceVu0MulMatrix(iVar25 + 0x1a0,auStack_1f0,auStack_230);
                    maybe_Vu0_UnitMatrix(auStack_1f0);
                    Mat34_Identity(auStack_2b0);
                    Quat_ToMat33(auStack_2b0,(int)pRVar8 + iVar26 * 0x140 + 0x1e0);
                    sceVu0CopyVector(auStack_270,auStack_2b0);
                    sceVu0CopyVector(auStack_260,auStack_2a0);
                    sceVu0CopyVector(auStack_250,auStack_290);
                    sceVu0CopyVector(auStack_240,auStack_280);
                    sceVu0MulMatrix(auStack_1f0,auStack_270,auStack_1f0);
                    maybe_Vu0_UnitMatrix(auStack_2f0);
                    if (iVar26 == 3) {
LAB_001e2e10:
                      fVar33 = -*(float *)(pRVar8->maybe_params + 0x360);
                    }
                    else if (iVar26 == 2) {
                      fVar33 = *(float *)(pRVar8->maybe_params + 0x360);
                    }
                    else if (iVar26 == 1) {
                      fVar33 = -*(float *)(pRVar8->maybe_params + 0x250);
                    }
                    else {
                      if (iVar26 != 0) goto LAB_001e2e10;
                      fVar33 = *(float *)(pRVar8->maybe_params + 0x250);
                    }
                    maybe_Vu0_RotMatrixY(fVar33,auStack_2f0,auStack_2f0);
                    sceVu0MulMatrix(auStack_1f0,auStack_2f0,auStack_1f0);
                    puVar3 = pRVar8->maybe_params;
                    uStack_308 = *(undefined4 *)(puVar3 + iVar26 * 0x60 + 0x3a8);
                    uStack_310 = *(undefined4 *)(puVar3 + iVar26 * 0x60 + 0x3a0);
                    fStack_30c = *(float *)(puVar3 + iVar26 * 0x60 + 0x3a4) +
                                 *(float *)((int)pRVar8 + iVar26 * 0x140 + 0x1b0);
                    sceVu0CopyVector(auStack_300,&uStack_310);
                    sceVu0TransMatrix(iVar25 + 0xa0,auStack_1f0,auStack_300);
                    uStack_314 = 0x3f800000;
                    uStack_320 = *(undefined4 *)(iVar25 + 0xd0);
                    uStack_324 = 0x3f800000;
                    uStack_31c = *(undefined4 *)(iVar25 + 0xd4);
                    uStack_318 = *(undefined4 *)(iVar25 + 0xd8);
                    Mat33_MulVec3(&uStack_a20,auStack_1a0,&uStack_320);
                    uStack_330 = uStack_a20;
                    uStack_32c = uStack_a1c;
                    uStack_328 = uStack_a18;
                    uStack_324 = uStack_a14;
                    *(undefined4 *)(iVar23 + 0x60) = uStack_a20;
                    *(undefined4 *)(iVar23 + 100) = auStack_160[iVar26];
                    *(undefined4 *)(iVar23 + 0x68) = uStack_a18;
                    fVar33 = (float)fabsf((float)pRVar8->unk_1794 * 60.0);
                    *(float *)(iVar30 + 0x2d0) = fVar33;
                    if (fVar33 <= 31.415926) {
                      if (15.707963 < fVar33) {
                        *(undefined1 *)(iVar10 + uVar28 + 0x300) = 1;
                      }
                      else {
                        *(undefined1 *)(iVar10 + uVar28 + 0x300) = 0;
                      }
                    }
                    else {
                      *(undefined1 *)(iVar10 + uVar28 + 0x300) = 2;
                    }
                    uVar28 = uVar28 + 1;
                    iVar25 = iVar25 + 0x40;
                    iVar23 = iVar23 + 0x10;
                    iVar30 = iVar30 + 4;
                  } while (uVar28 < 2);
                  iVar11 = iVar11 + 2;
                  iStack_b00 = iStack_b00 + 0x80;
                  iStack_b10 = iStack_b10 + 0x20;
                  iStack_b20 = iStack_b20 + 8;
                  uStack_a60 = uStack_a60 + 1;
                  iVar10 = iVar10 + 2;
                } while (uStack_a60 < 2);
                cVar6 = GameState_Get_3();
                if (cVar6 == '\x01') {
                  uStack_340 = DAT_0031c320;
                  uStack_33c = DAT_0031c324;
                  uStack_338 = DAT_0031c328;
                  uStack_334 = DAT_0031c32c;
                  sceVu0ScaleVector(0,iVar20 + 0x3b0,&uStack_340);
                  *(undefined4 *)(iVar20 + 0x3bc) = 0;
                  sceVu0CopyVector(iVar20 + 0x3c0,auStack_350);
                  *(undefined4 *)(iVar20 + 0x3cc) = 0x3f800000;
                }
                else {
                  sceVu0CopyVector(iVar20 + 0x3b0,0x436220);
                  sceVu0MulVector(iVar20 + 0x3b0,iVar20 + 0x3b0,iVar20 + 0x160);
                  *(undefined4 *)(iVar20 + 0x3c0) = 0;
                  *(undefined4 *)(iVar20 + 0x3c4) = 0xbf800000;
                  *(undefined4 *)(iVar20 + 0x3c8) = 0;
                  *(undefined4 *)(iVar20 + 0x3cc) = 0x3f800000;
                }
                AsyncRes_Poll(piStack_aa0[7],uStack_a50);
              }
              iVar20 = piStack_aa0[7];
              cVar6 = GameState_Get_3();
              if ((cVar6 == '\0') && (cVar6 = GameState_Get_2(), cVar6 == '\0')) {
                *(undefined4 *)(iVar20 + 0x49c) = 1;
              }
              else {
                *(undefined4 *)(iVar20 + 0x49c) = 0;
              }
              iVar20 = RaceCar_GetTracker(pRVar8);
              lVar18 = (long)*(short *)(iVar20 + 6);
              iVar20 = RaceCar_GetTracker(pRVar8);
              lVar16 = (long)*(short *)(iVar20 + 8);
              if (0 < lVar18) {
                do {
                  uVar28 = (int)lVar18 - 1;
                  lVar18 = (long)(int)uVar28;
                  lVar16 = (long)((int)lVar16 +
                                 (int)**(short **)(g_RoadData->aiLine + (uVar28 & 0xffff) * 4));
                } while (0 < lVar18);
              }
              iVar20 = piStack_aa0[7];
              uVar15 = CourseStream_FindBlock(iVar20 + 0x4b0,3,iVar20 + 0x150,lVar16,0xd);
              *(undefined4 *)(iVar20 + 0x4a4) = uVar15;
              AsyncRes_Poll(piStack_aa0[7],uStack_a50);
            }
          }
LAB_001e311c:
          puVar21 = puRam004305b4;
          piStack_aa0 = piStack_aa0 + 1;
          iStack_a40 = iStack_a40 + 1;
        } while (iStack_a40 < 3);
        sceVu0ScaleVector(0xbf800000,0x4361d0,puRam004305b4 + 4);
        uRam004361dc = 0x3f800000;
        fRam00436200 = (float)((uint)puVar21[9] >> 0x10 & 0xff) / 128.0;
        fRam00436204 = (float)((uint)puVar21[9] >> 8 & 0xff) / 128.0;
        fRam00436208 = (float)*(byte *)(puVar21 + 9) / 128.0;
        cVar6 = GameState_Get_3();
        if (cVar6 == '\x01') {
          uRam004361e4 = 0xbf800000;
          uRam004361e0 = 0;
          uRam004361ec = 0x3f800000;
          uRam004361e8 = 0;
          fRam00436210 = (float)((uint)puVar21[10] >> 0x10 & 0xff) / 128.0;
          fRam00436214 = (float)((uint)puVar21[10] >> 8 & 0xff) / 128.0;
          fRam00436218 = (float)*(byte *)(puVar21 + 10) / 128.0;
        }
        else {
          sceVu0ScaleVector(0x3f800000,0x4361e0,puVar21 + 4);
          fRam00436210 = 0.0;
          fRam00436214 = 0.0;
          fRam00436218 = 0.0;
        }
        uRam004361f0 = 0;
        uRam004361f4 = 0x3f800000;
        uRam004361fc = 0x3f800000;
        uRam004361f8 = 0;
        fRam00436220 = (float)((uint)puVar21[10] >> 0x10 & 0xff) / 128.0;
        fRam00436224 = (float)((uint)puVar21[10] >> 8 & 0xff) / 128.0;
        fRam00436228 = (float)*(byte *)(puVar21 + 10) / 128.0;
        fRam00436180 = (float)((uint)puVar21[8] >> 0x10 & 0xff) / 128.0;
        fRam00436184 = (float)((uint)puVar21[8] >> 8 & 0xff) / 128.0;
        fRam00436188 = (float)*(byte *)(puVar21 + 8) / 128.0;
        SceneObj_ResetAll();
        bVar7 = GameState_Get_2();
        if (bVar7 < 6) {
                    /* WARNING: Switch is manually overridden */
          switch(bVar7) {
          case 1:
            cVar6 = GameState_Get_0();
            if (cVar6 != '\x04') {
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
        puVar21 = puRam004305b4;
        iVar20 = Cam_GetTargetBodyB(g_Loading->workBufs[0]);
        iVar20 = param_1[iVar20 + 7];
        lVar16 = RaceScene_IsFlag10();
        if (lVar16 == 0) {
          if ((_s_RaceIsReplayMode == 1) || (cVar6 = GameState_Get_3(), cVar6 == '\x01')) {
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
            Course_DrawShadowedMeshes(iVar20 + 0x160);
          }
          uVar15 = *puVar21;
        }
        else {
          Course_DrawShadowedMeshes(iVar20 + 0x160);
          uVar15 = *puVar21;
        }
        View_DrawBackground(4,uVar15,0);
        SceneObj_DestroyList(1,0);
        SceneObj_DestroyAll();
        Course_DrawReflectionPlane();
        RaceScene_Draw();
        if (*param_1 == 0) {
          cVar6 = GameState_Get_2();
          if ((cVar6 == '\x01') || (cVar6 = GameState_Get_2(), cVar6 == '\x04')) {
            lVar16 = RaceScene_IsFlag10();
            if (lVar16 == 0) {
              lVar16 = Cam_IsIdle(puVar1);
              if ((lVar16 != 0) && (ScreenFx_Draw(param_1 + 0x388), _s_RaceIsReplayMode == 1)) {
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
          lVar16 = RaceScene_IsFlag10();
          if (lVar16 != 0) {
            iRam0036f3b4 = iRam0036f3b4 + 1;
            Weather_Draw(param_1[3]);
          }
        }
        if (*(int *)(g_Loading->workBufs[0] + 0x7c8) != 0) {
          sceVu0CopyVector(0x46a060,param_1[7] + 0x150);
          uRam0046a028 = 8;
        }
        maybe_ReplayCam_Update();
      }
    }
  }
  return;
}

