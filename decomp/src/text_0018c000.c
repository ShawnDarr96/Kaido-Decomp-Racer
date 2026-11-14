// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0018c000 - 0x00190000
#include "ghidra_types.h"

// 0x0018c310  size 0xec
long Road_PointInCell(short *param_1,int param_2,undefined8 param_3)

{
  short sVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = param_1[1];
  if (param_2 == -1) {
    lVar4 = (long)*param_1;
    lVar5 = 0;
  }
  else {
    lVar5 = (long)(param_2 + -4);
    if (lVar5 < 1) {
      lVar5 = 0;
      sVar1 = *param_1;
    }
    else {
      sVar1 = *param_1;
    }
    lVar4 = (long)(param_2 + 4);
    if ((long)sVar1 <= (long)(param_2 + 4)) {
      lVar4 = (long)sVar1;
    }
  }
  iVar6 = (int)param_1 + (int)lVar5 * 0x1c + *(int *)(param_1 + 0x22);
  while( true ) {
    if (lVar4 <= lVar5) {
      return -1;
    }
    lVar3 = Road_PointInTriangle(iVar6,(int)param_1 + (uint)uVar2,param_3);
    if (lVar3 != 0) break;
    lVar5 = (long)((int)lVar5 + 1);
    iVar6 = iVar6 + 0x1c;
  }
  return lVar5;
}

// 0x0018c400  size 0x3d4
/* WARNING: Removing unreachable block (ram,0x0018c504) */

bool Road_PointInTriangle(int param_1,int param_2,float *param_3)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  
  bVar2 = 1;
  if ((param_3[1] <= *(float *)(param_1 + 0x14) + 9.0) &&
     (*(float *)(param_1 + 0x14) + -5.0 <= param_3[1])) {
    bVar2 = 0;
  }
  if ((bool)(bVar2 ^ 1)) {
    fVar17 = 0.0;
    fVar18 = 0.0;
    if (*(short *)(param_1 + 0x12) == -1) {
      uVar16 = 3;
    }
    else {
      uVar16 = 4;
    }
    iVar12 = 0;
    if (uVar16 != 0) {
      if ((8 < uVar16) && (uVar16 < 0x7fffffff)) {
        iVar11 = param_1;
        do {
          iVar12 = iVar12 + 8;
          pfVar9 = (float *)(param_2 + (uint)*(ushort *)(iVar11 + 0xc) * 8);
          pfVar8 = (float *)(param_2 + (uint)*(ushort *)(iVar11 + 0xe) * 8);
          pfVar5 = (float *)(param_2 + (uint)*(ushort *)(iVar11 + 0x10) * 8);
          pfVar4 = (float *)(param_2 + (uint)*(ushort *)(iVar11 + 0x12) * 8);
          pfVar15 = (float *)(param_2 + (uint)*(ushort *)(iVar11 + 0x14) * 8);
          pfVar14 = (float *)(param_2 + (uint)*(ushort *)(iVar11 + 0x16) * 8);
          pfVar13 = (float *)(param_2 + (uint)*(ushort *)(iVar11 + 0x18) * 8);
          puVar1 = (ushort *)(iVar11 + 0x1a);
          iVar11 = iVar11 + 0x10;
          pfVar6 = (float *)(param_2 + (uint)*puVar1 * 8);
          fVar17 = fVar17 + *pfVar9 + *pfVar8 + *pfVar5 + *pfVar4 + *pfVar15 + *pfVar14 + *pfVar13 +
                   *pfVar6;
          fVar18 = fVar18 + pfVar9[1] + pfVar8[1] + pfVar5[1] + pfVar4[1] + pfVar15[1] + pfVar14[1]
                   + pfVar13[1] + pfVar6[1];
        } while (iVar12 < (int)(uVar16 - 8));
      }
      if (iVar12 < (int)uVar16) {
        iVar11 = param_1 + iVar12 * 2;
        do {
          puVar1 = (ushort *)(iVar11 + 0xc);
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 2;
          pfVar4 = (float *)(param_2 + (uint)*puVar1 * 8);
          fVar17 = fVar17 + *pfVar4;
          fVar18 = fVar18 + pfVar4[1];
        } while (iVar12 < (int)uVar16);
      }
    }
    fVar17 = (float)fabsf(fVar17 / (float)uVar16 - *param_3);
    fVar18 = (float)fabsf(fVar18 / (float)uVar16 - param_3[2]);
    if (((250.0 < fVar17) || (250.0 < fVar18)) || (62500.0 < fVar17 * fVar17 + fVar18 * fVar18)) {
      bVar3 = false;
    }
    else {
      uVar10 = 0;
      if (uVar16 != 0) {
        iVar12 = param_1;
        do {
          uVar7 = uVar10 + 1;
          pfVar5 = (float *)(param_2 + (uint)*(ushort *)(iVar12 + 0xc) * 8);
          pfVar4 = (float *)(param_2 +
                            (uint)*(ushort *)(param_1 + ((int)uVar7 % (int)uVar16) * 2 + 0xc) * 8);
          if (0.001 < (pfVar5[1] - param_3[2]) * (*pfVar4 - *param_3) -
                      (*pfVar5 - *param_3) * (pfVar4[1] - param_3[2])) break;
          iVar12 = iVar12 + 2;
          uVar10 = uVar7;
        } while ((int)uVar7 < (int)uVar16);
      }
      bVar3 = uVar10 == uVar16;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// 0x0018c7e0  size 0x6b8
void ScreenFx_Draw(uint *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_s1_lo;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_860 [20];
  undefined4 uStack_84c;
  undefined1 auStack_820 [128];
  uint auStack_7a0 [170];
  undefined8 uStack_4f8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined1 auStack_490 [20];
  undefined4 uStack_47c;
  undefined1 auStack_450 [20];
  undefined4 uStack_43c;
  undefined1 auStack_410 [128];
  uint auStack_390 [170];
  undefined8 uStack_e8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  if ((iRam0036f1f8 == 0) && (param_1[3] == 2)) {
    return;
  }
  uVar8 = param_1[3];
  uVar9 = 0x431c80;
  if (uVar8 != 2) {
    if (uVar8 == 1) {
      uVar9 = 0x4316c0;
    }
    else {
      if (uVar8 == 0) {
        unaff_s1_lo = 0x431100;
      }
      uVar9 = unaff_s1_lo;
    }
  }
  if (*param_1 == 0) {
    return;
  }
  if (uVar8 < 2) {
    Pkt_Init(auStack_40,1,2,0);
    uStack_2c = 0x433940;
    Pkt_SubmitToChain(auStack_40,8);
    Pkt_End(auStack_40);
    Pkt_Submit(auStack_40,0);
    Pkt_Init(auStack_80,1,2,0);
    uStack_6c = 0x431100;
    Pkt_SubmitToChain(auStack_80,8);
    Gfx_SetupRenderTargetEx(0x431100,auStack_410,0,0);
    TexSlot_Set(0,1,auStack_410);
    Obj_Reset(auStack_390,4,0xffffffffffffffff);
    uStack_e8 = 0x31001;
    Obj_SetVisible(auStack_390,1,0,0);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_b0 = 0x3dcccccd;
    uStack_ac = 0x3dcccccd;
    auStack_390[0] = auStack_390[0] | 4;
    Pkt_AddPrimitives(auStack_80,auStack_390,1);
    Pkt_Submit(auStack_80,0);
  }
  Pkt_Init(auStack_450,1,2,0);
  uStack_43c = uVar9;
  Pkt_SubmitToChain(auStack_450,8);
  Pkt_End(auStack_450);
  Pkt_Submit(auStack_450,0);
  Pkt_Init(auStack_490,1,2,0);
  uStack_47c = uVar9;
  Pkt_SubmitToChain(auStack_490,8);
  Gfx_SetupRenderTargetEx(0x433940,auStack_820,0,0);
  TexSlot_Set(0,1,auStack_820);
  Obj_Reset(auStack_7a0,4,0xffffffffffffffff);
  uStack_4f8 = 0x31001;
  Obj_SetVisible(auStack_7a0,1,0,0);
  uStack_4c0 = 0;
  uStack_4bc = 0;
  uStack_4b0 = 0;
  uStack_4ac = 0;
  auStack_7a0[0] = auStack_7a0[0] | 4;
  Pkt_AddPrimitives(auStack_490,auStack_7a0,1);
  Pkt_Submit(auStack_490,0);
  Pkt_Init(auStack_860,1,2,0);
  uStack_84c = 0x431100;
  Pkt_SubmitToChain(auStack_860,8);
  Pkt_AddRef(auStack_860,0x304f90);
  puVar1 = (undefined8 *)Pkt_AllocDmaRef(auStack_860,4,0,0x50000004);
  *puVar1 = 0x1000000000008003;
  puVar1[1] = 0xe;
  puVar1[2] = 0x31001;
  puVar1[3] = 0x47;
  puVar1[4] = 0x44;
  puVar1[5] = 0x42;
  uVar8 = param_1[3];
  if (uVar8 == 2) {
    puVar1[6] = 0xac160fc00a;
    puVar1[7] = 8;
  }
  else if (uVar8 == 1) {
    puVar1[6] = 0x54000fc00a;
    puVar1[7] = 8;
  }
  else if (uVar8 == 0) {
    puVar1[6] = 0xac000fc00a;
    puVar1[7] = 8;
  }
  puVar1 = (undefined8 *)Pkt_AllocDmaRef(auStack_860,0x13,0,0x6c130000);
  *puVar1 = 0x30aec00000008012;
  puVar1[1] = 0x531;
  *(uint *)(puVar1 + 2) = *param_1;
  uVar8 = param_1[3];
  if (uVar8 == 2) {
    *(undefined4 *)((int)puVar1 + 0x14) = 0x42e00000;
  }
  else if (uVar8 == 1) {
    *(undefined4 *)((int)puVar1 + 0x14) = 0xc2e00000;
  }
  else {
    if (uVar8 != 0) {
      iVar6 = 0;
      goto LAB_0018cb1c;
    }
    *(undefined4 *)((int)puVar1 + 0x14) = 0;
  }
  iVar6 = 0;
LAB_0018cb1c:
  do {
    vu0math_sub_00132ae0(puVar1 + 4,param_1 + (0x10 - iVar6) * 4 + 0x10);
    iVar6 = iVar6 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar6 < 0x11);
  puVar2 = (undefined4 *)Pkt_AllocDmaRef(auStack_860,0x66,0,0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0x6c640013;
  uVar8 = 0;
  if (*param_1 != 0) {
    puVar7 = puVar2;
    do {
      uVar4 = 0;
      uVar5 = 0;
      puVar3 = param_1;
      do {
        if (puVar3[0x54] == 1) {
          if (uVar8 == uVar4) goto LAB_0018cbc8;
          uVar4 = uVar4 + 1;
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 0x10;
      } while (uVar5 < 0x32);
      uVar5 = 0xffffffff;
LAB_0018cbc8:
      if (uVar5 == 0xffffffff) break;
      vu0math_sub_00132ae0(puVar7 + 4,param_1 + uVar5 * 0x10 + 0x5c);
      vu0math_sub_00132ae0(puVar7 + 0xcc,param_1 + uVar5 * 0x10 + 0x60);
      if ((int)param_1[uVar5 * 0x10 + 0x55] < 5) {
        if (param_1[uVar5 * 0x10 + 0x57] == 2) {
          puVar7[6] = param_1[uVar5 * 0x10 + 0x58];
        }
        else {
          puVar7[6] = (float)param_1[uVar5 * 0x10 + 0x58] * (float)(int)param_1[uVar5 * 0x10 + 0x55]
                      * 0.2;
        }
      }
      else if (param_1[uVar5 * 0x10 + 0x57] == 1) {
        uVar9 = vu0math_sub_00132ab0(param_1 + uVar5 * 0x10 + 0x60,param_1 + uVar5 * 0x10 + 0x60);
        fVar10 = (float)Vu0_Sqrt(uVar9);
        if (200.0 < fVar10) {
          fVar10 = 200.0;
        }
        puVar7[6] = (float)param_1[uVar5 * 0x10 + 0x58] * (1.0 - fVar10 * 0.003);
      }
      else {
        puVar7[6] = param_1[uVar5 * 0x10 + 0x58];
      }
      puVar7[7] = param_1[uVar5 * 0x10 + 0x56];
      if (param_1[uVar5 * 0x10 + 0x57] == 2) {
        puVar7[0xcf] = 1.0 - (float)(int)param_1[uVar5 * 0x10 + 0x55] * 0.06666667;
      }
      else {
        puVar7[0xcf] = 0x3f800000;
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 4;
    } while (uVar8 < *param_1);
  }
  puVar2[0x194] = 0;
  puVar2[0x195] = 0;
  puVar2[0x196] = 0x13000000;
  puVar2[0x197] = 0x15000000;
  Pkt_Submit(auStack_860,0);
  return;
}

// 0x0018cea0  size 0x2d0
void Weather_UpdateDrop(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  float fStack_c;
  
  iVar7 = param_1 + param_2 * 0x40;
  if (*(int *)(iVar7 + 0x15c) == 2) {
    return;
  }
  puVar4 = (undefined4 *)0x10;
  puVar8 = &uStack_10;
  puVar1 = puVar8;
  while (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + -1);
    puVar1 = puVar4;
  }
  uStack_10 = 0;
  puVar5 = (undefined1 *)0x10;
  fStack_c = *(float *)(iVar7 + 0x160) * 0.12;
  puVar9 = auStack_20;
  puVar2 = puVar9;
  while (puVar2 != (undefined1 *)0x0) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    puVar5 = puVar5 + -1;
    puVar2 = puVar5;
  }
  pfVar6 = (float *)0x10;
  pfVar10 = &fStack_30;
  pfVar3 = pfVar10;
  while (pfVar3 != (float *)0x0) {
    *(undefined1 *)pfVar10 = 0;
    pfVar10 = (float *)((int)pfVar10 + 1);
    pfVar6 = (float *)((int)pfVar6 + -1);
    pfVar3 = pfVar6;
  }
  if (*(int *)(param_1 + 8) == 1) {
    vu0math_sub_00132b50(auStack_20,iVar7 + 0x170,param_1 + 0x20);
    vu0math_sub_001328b0(auStack_20,auStack_20);
    vu0math_sub_00132b10(*(undefined4 *)(param_1 + 0x14),auStack_20,auStack_20);
    vu0math_sub_00132b70(&fStack_30,auStack_20,&uStack_10);
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      iVar11 = *(int *)(iVar7 + 0x15c);
      goto LAB_0018cfe0;
    }
    vu0math_sub_00132b70(&fStack_30,param_1 + 0x20,&uStack_10);
  }
  iVar11 = *(int *)(iVar7 + 0x15c);
LAB_0018cfe0:
  if (iVar11 == 1) {
    vu0math_sub_00132b70(iVar7 + 0x180,iVar7 + 0x180,&fStack_30);
    fVar12 = (float)vu0math_sub_00132ab0(iVar7 + 0x180,iVar7 + 0x180);
    if (fVar12 < 0.25) {
      *(undefined4 *)(iVar7 + 0x180) = 0;
      *(undefined4 *)(iVar7 + 0x184) = 0;
      *(undefined4 *)(iVar7 + 0x15c) = 0;
    }
    else {
      puVar5 = (undefined1 *)0x10;
      puVar9 = auStack_50;
      puVar2 = puVar9;
      while (puVar2 != (undefined1 *)0x0) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
        puVar5 = puVar5 + -1;
        puVar2 = puVar5;
      }
      vu0math_sub_001328b0(auStack_50,iVar7 + 0x180);
      iVar11 = 0;
      do {
        fVar12 = (float)vu0math_sub_00132ab0(auStack_50,param_1 + 0x40);
        if (0.9 < fVar12) goto LAB_0018d0f8;
        iVar11 = iVar11 + 1;
        param_1 = param_1 + 0x10;
      } while (iVar11 < 0x10);
      iVar11 = 0;
LAB_0018d0f8:
      *(int *)(iVar7 + 0x158) = iVar11;
      puVar5 = (undefined1 *)0x10;
      puVar9 = auStack_40;
      puVar2 = puVar9;
      while (puVar2 != (undefined1 *)0x0) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
        puVar5 = puVar5 + -1;
        puVar2 = puVar5;
      }
      vu0math_sub_001328b0(auStack_40,iVar7 + 0x180);
      vu0math_sub_00132b10(0x3f000000,auStack_40,auStack_40);
      vu0math_sub_00132b50(iVar7 + 0x180,iVar7 + 0x180,auStack_40);
    }
  }
  else {
    *(undefined4 *)(iVar7 + 0x180) = 0;
    *(undefined4 *)(iVar7 + 0x184) = 0;
    if (0.64000005 < fStack_30 * fStack_30 + fStack_2c * fStack_2c) {
      *(undefined4 *)(iVar7 + 0x15c) = 1;
    }
  }
  return;
}

// 0x0018d170  size 0x548
/* 50 slots, rand() threshold */

void Weather_SpawnDrops(uint *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar2 = maybe_rand();
  if ((float)iVar2 / 2.1474836e+09 < (float)param_1[6]) {
    uVar8 = 0;
    puVar4 = param_1;
    do {
      if (puVar4[0x54] == 0) goto LAB_0018d1f4;
      uVar8 = uVar8 + 1;
      puVar4 = puVar4 + 0x10;
    } while (uVar8 < 0x32);
    uVar8 = 0xffffffff;
LAB_0018d1f4:
    if (uVar8 != 0xffffffff) {
      Weather_ResetDrop(param_1);
    }
  }
  uVar8 = 0;
  puVar4 = param_1;
  do {
    if (puVar4[0x54] != 0) {
      if ((puVar4[0x57] == 0) && (0x3c < (int)puVar4[0x55])) {
        iVar2 = maybe_rand();
        if ((float)iVar2 / 2.1474836e+09 < 0.003) {
          puVar4[0x57] = 2;
          puVar4[0x55] = 0;
        }
      }
      else if ((puVar4[0x57] == 2) && (0xe < (int)puVar4[0x55])) {
        puVar4[0x54] = 0;
        goto LAB_0018d4b8;
      }
      if (iGpffff8b08 == 0) {
        if (((284.0 < (float)puVar4[0x5d]) || ((float)puVar4[0x5d] < -284.0)) ||
           ((380.0 < (float)puVar4[0x5c] || ((float)puVar4[0x5c] < -380.0)))) {
          puVar4[0x54] = 0;
        }
        else {
LAB_0018d338:
          puVar3 = (undefined1 *)0x10;
          puVar5 = auStack_10;
          puVar1 = puVar5;
          while (puVar1 != (undefined1 *)0x0) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + -1;
            puVar1 = puVar3;
          }
          if ((((param_1[1] != 0) && ((uVar8 & 1) != 0)) ||
              ((param_1[1] == 0 && ((uVar8 & 1) == 0)))) && (uVar6 = uVar8 + 1, uVar6 < 0x32)) {
            puVar9 = param_1 + uVar6 * 0x10;
            do {
              if (puVar9[0x54] != 0) {
                vu0math_sub_00132b50(auStack_10,puVar4 + 0x5c,puVar9 + 0x5c);
                fVar10 = (float)vu0math_sub_00132ab0(auStack_10,auStack_10);
                fVar11 = (float)puVar4[0x58] * (float)puVar4[0x58] +
                         (float)puVar9[0x58] * (float)puVar9[0x58];
                if (fVar10 < fVar11 * 1.5) {
                  vu0math_sub_00132a60
                            (0x3f000000,param_1 + uVar6 * 0x10 + 0x5c,puVar4 + 0x5c,
                             param_1 + uVar6 * 0x10 + 0x5c);
                  vu0math_sub_00132a60
                            (0x3f000000,param_1 + uVar6 * 0x10 + 0x60,puVar4 + 0x60,
                             param_1 + uVar6 * 0x10 + 0x60);
                  puVar4[0x54] = 0;
                  fVar10 = (float)Vu0_Sqrt(fVar11);
                  param_1[uVar6 * 0x10 + 0x58] = (uint)fVar10;
                  if (8.0 < fVar10) {
                    param_1[uVar6 * 0x10 + 0x58] = 0x41000000;
                  }
                  if (puVar4[0x57] == 1) {
                    param_1[uVar6 * 0x10 + 0x57] = 1;
                  }
                  break;
                }
              }
              uVar6 = uVar6 + 1;
              puVar9 = puVar9 + 0x10;
            } while (uVar6 < 0x32);
          }
          if ((puVar4[0x54] != 0) && (puVar4[0x55] = puVar4[0x55] + 1, 5 < (int)puVar4[0x55])) {
            puVar3 = (undefined1 *)0x10;
            puVar5 = auStack_20;
            puVar1 = puVar5;
            while (puVar1 != (undefined1 *)0x0) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
              puVar3 = puVar3 + -1;
              puVar1 = puVar3;
            }
            vu0math_sub_00132b10(0x3cf5c28f,auStack_20,puVar4 + 0x60);
            vu0math_sub_00132b70(puVar4 + 0x5c,puVar4 + 0x5c,auStack_20);
          }
        }
      }
      else {
        if (((((float)puVar4[0x5d] <= 172.0) && (-172.0 <= (float)puVar4[0x5d])) &&
            ((float)puVar4[0x5c] <= 380.0)) && (-380.0 <= (float)puVar4[0x5c])) goto LAB_0018d338;
        puVar4[0x54] = 0;
      }
    }
LAB_0018d4b8:
    uVar8 = uVar8 + 1;
    puVar4 = puVar4 + 0x10;
    if (0x31 < uVar8) {
      *param_1 = 0;
      uVar8 = 0;
      puVar4 = param_1;
      do {
        if (puVar4[0x54] != 0) {
          *param_1 = *param_1 + 1;
        }
        uVar8 = uVar8 + 1;
        puVar4 = puVar4 + 0x10;
      } while (uVar8 < 0x32);
      uVar8 = 0;
      if (*param_1 != 0) {
        do {
          uVar7 = 0;
          uVar6 = 0;
          puVar4 = param_1;
          do {
            if (puVar4[0x54] == 1) {
              if (uVar8 == uVar7) goto LAB_0018d540;
              uVar7 = uVar7 + 1;
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 0x10;
          } while (uVar6 < 0x32);
          uVar6 = 0xffffffff;
LAB_0018d540:
          if (5 < (int)param_1[uVar6 * 0x10 + 0x55]) {
            Weather_UpdateDrop(param_1);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *param_1);
      }
      param_1[1] = param_1[1] + 1;
      param_1[1] = param_1[1] & 1;
      return;
    }
  } while( true );
}

// 0x0018d6d0  size 0x19c
void Weather_ResetDrop(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2 * 0x40 + param_1;
  *(undefined4 *)(iVar3 + 0x15c) = 0;
  *(undefined4 *)(iVar3 + 0x150) = 1;
  iVar1 = maybe_rand();
  *(float *)(iVar3 + 0x170) = ((float)iVar1 / 2.1474836e+09 - 0.5) * 640.0;
  if (iGpffff8b08 == 0) {
    iVar1 = maybe_rand();
    *(float *)(iVar3 + 0x174) = ((float)iVar1 / 2.1474836e+09 - 0.5) * 448.0;
  }
  else {
    iVar1 = maybe_rand();
    *(float *)(iVar3 + 0x174) = ((float)iVar1 / 2.1474836e+09 - 0.5) * 224.0;
  }
  param_1 = param_1 + param_2 * 0x40;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  iVar1 = maybe_rand();
  *(float *)(param_1 + 0x160) = (((float)iVar1 / 2.1474836e+09) * 0.6 + 0.8) * 5.0;
  uVar2 = maybe_rand();
  *(uint *)(param_1 + 0x158) = uVar2 & 0xf;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  return;
}

// 0x0018d870  size 0x1c8
void Weather_Update(uint param_1,uint *param_2,ulong param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (iGpffff8b08 == 0) {
    param_2[3] = 0;
  }
  else {
    param_2[3] = param_4;
  }
  uVar3 = 0;
  param_2[4] = 0x3ec90fdb;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[8] = 0;
  param_2[9] = 0x43fa0000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  puVar2 = param_2;
  do {
    uVar4 = cosf((float)param_2[4] * (float)uVar3);
    puVar2[0x10] = uVar4;
    uVar4 = sinf((float)param_2[4] * (float)uVar3);
    puVar2[0x11] = uVar4;
    uVar3 = uVar3 + 1;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x10);
  vu0math_sub_00132ae0(param_2 + 0x50,param_2 + 0x10);
  *param_2 = (uint)param_3;
  param_2[6] = param_1;
  if (0x32 < param_3) {
    *param_2 = 0x32;
  }
  iVar1 = 0;
  puVar2 = param_2;
  do {
    puVar2[0x54] = 0;
    iVar1 = iVar1 + 8;
    puVar2[100] = 0;
    puVar2[0x74] = 0;
    puVar2[0x84] = 0;
    puVar2[0x94] = 0;
    puVar2[0xa4] = 0;
    puVar2[0xb4] = 0;
    puVar2[0xc4] = 0;
    puVar2 = puVar2 + 0x80;
  } while (iVar1 < 0x2a);
  param_2[iVar1 * 0x10 + 0x54] = 0;
  param_2[iVar1 * 0x10 + 100] = 0;
  uVar3 = 0;
  if (*param_2 != 0) {
    do {
      Weather_ResetDrop(param_2,uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_2);
  }
  return;
}

// 0x0018da40  size 0x778
void Weather_Draw(float param_1,uint param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_890 [8];
  uint uStack_888;
  uint uStack_884;
  undefined1 auStack_880 [8];
  uint uStack_878;
  uint uStack_874;
  undefined1 auStack_870 [20];
  undefined4 uStack_85c;
  undefined1 auStack_830 [128];
  uint auStack_7b0 [170];
  undefined8 uStack_508;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 auStack_4a0 [20];
  undefined4 uStack_48c;
  undefined1 auStack_460 [20];
  undefined4 uStack_44c;
  undefined1 auStack_420 [128];
  uint auStack_3a0 [170];
  undefined8 uStack_f8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_90 [20];
  undefined4 uStack_7c;
  undefined1 auStack_50 [20];
  undefined4 uStack_3c;
  float fStack_8;
  float fStack_4;
  
  Pkt_Init(auStack_50,1,2,0);
  uStack_3c = 0x433940;
  Pkt_SubmitToChain(auStack_50,8);
  Pkt_End(auStack_50);
  Pkt_Submit(auStack_50,0);
  Pkt_Init(auStack_90,1,2,0);
  uStack_7c = 0x431100;
  Pkt_SubmitToChain(auStack_90,8);
  Gfx_SetupRenderTargetEx(0x431100,auStack_420,0,0);
  TexSlot_Set(0,1,auStack_420);
  Obj_Reset(auStack_3a0,4,0xffffffffffffffff);
  uStack_f8 = 0x31001;
  Obj_SetVisible(auStack_3a0,1,0,0);
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_c0 = 0x3f000000;
  uStack_bc = 0x3f000000;
  auStack_3a0[0] = auStack_3a0[0] | 4;
  Pkt_AddPrimitives(auStack_90,auStack_3a0,1);
  Pkt_Submit(auStack_90,0);
  Pkt_Init(auStack_460,1,2,0);
  uStack_44c = 0x431100;
  Pkt_SubmitToChain(auStack_460,8);
  Pkt_End(auStack_460);
  Pkt_Submit(auStack_460,0);
  Pkt_Init(auStack_4a0,1,2,0);
  uStack_48c = 0x431100;
  Pkt_SubmitToChain(auStack_4a0,8);
  Gfx_SetupRenderTargetEx(0x433940,auStack_830,0,0);
  TexSlot_Set(0,1,auStack_830);
  Obj_Reset(auStack_7b0,4,0xffffffffffffffff);
  uStack_508 = 0x31001;
  auStack_7b0[0] = auStack_7b0[0] | 2;
  Obj_SetVisible(auStack_7b0,1,0,0);
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4c0 = 0;
  uStack_4bc = 0;
  auStack_7b0[0] = auStack_7b0[0] | 4;
  Pkt_AddPrimitives(auStack_4a0,auStack_7b0,1);
  Pkt_Submit(auStack_4a0,0);
  Pkt_Init(auStack_870,1,2,0);
  uStack_85c = 0x42d0c0;
  Pkt_SubmitToChain(auStack_870,8);
  Pkt_AddRef(auStack_870,0x3014c0);
  puVar1 = (undefined8 *)Pkt_AllocDmaRef(auStack_870,4,0,0x50000004);
  *puVar1 = 0x1000000000008003;
  puVar1[1] = 0xe;
  Gfx_GetViewportSize(0x431100,auStack_880);
  lVar4 = newlib_sub_0012f390(((float)uStack_878 / 16.0) / 2.0);
  lVar5 = newlib_sub_0012f390(((float)uStack_874 / 16.0) / 2.0);
  puVar1[2] = lVar4 << 0xe | 10U | lVar5 << 0x22;
  puVar1[3] = 8;
  puVar1[4] = 0x31001;
  puVar1[5] = 0x47;
  puVar1[6] = 0x44;
  puVar1[7] = 0x42;
  pfVar2 = (float *)Pkt_AllocDmaRef(auStack_870,10,0,0x6c0a0000);
  Gfx_GetViewportSize(0x431100,auStack_890);
  *pfVar2 = ((float)uStack_888 / 16.0) * 0.5 - 1.0;
  pfVar2[1] = ((float)uStack_884 / 16.0) * 0.5 - 1.0;
  iVar9 = 0;
  puVar7 = &DAT_0030ba50;
  pfVar2[2] = (4096.0 - (float)uStack_884 / 16.0) / 2.0;
  pfVar2[3] = param_1 * 128.0;
  pfVar2[4] = 4.5929e-41;
  pfVar2[5] = 1.2714736e-09;
  pfVar2[6] = 1.46155e-42;
  pfVar2[7] = 0.0;
  do {
    vu0math_sub_00132ae0(pfVar2 + 8,puVar7);
    iVar9 = iVar9 + 1;
    puVar7 = puVar7 + 0x10;
    pfVar2 = pfVar2 + 4;
  } while (iVar9 < 8);
  puVar3 = (undefined4 *)Pkt_AllocDmaRef(auStack_870,0x193,0,0);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0x6cc8000a;
  puVar3[0x324] = 0;
  puVar3[0x325] = 0;
  iVar11 = 0;
  puVar3[0x326] = 0;
  puVar10 = &DAT_0030bad0;
  puVar3[0x327] = 0x6cc800d2;
  iVar9 = (param_2 & 0xff) << 1;
  puVar8 = puVar3;
  do {
    puVar8[4] = *puVar10;
    fVar12 = (float)puVar10[1] - (float)iVar9;
    puVar8[5] = fVar12;
    if (fVar12 < -20.0) {
      puVar8[5] = fVar12 + 512.0;
    }
    puVar8[0x328] = puVar10[400];
    fVar12 = (float)puVar10[0x191] - (float)iVar9;
    puVar8[0x329] = fVar12;
    if (fVar12 < -20.0) {
      puVar8[0x329] = fVar12 + 512.0;
    }
    uVar6 = Math_FloatToFixed22(((float)iVar11 / 200.0) * 65536.0 +
                                ((float)(param_2 & 0x1ff) * 65536.0) / 512.0 + 0.0);
    Math_SinCosTable(uVar6,&fStack_8,&fStack_4);
    iVar11 = iVar11 + 1;
    puVar10 = puVar10 + 2;
    fVar12 = fStack_4 * 20.0 * 0.2;
    puVar8[0x32a] = fVar12;
    puVar8[6] = fVar12;
    fVar12 = fStack_8 * 20.0 * 0.2;
    puVar8[0x32b] = fVar12;
    puVar8[7] = fVar12;
    puVar8 = puVar8 + 4;
  } while (iVar11 < 200);
  puVar3[0x648] = 0;
  puVar3[0x649] = 0;
  puVar3[0x64a] = 0x13000000;
  puVar3[0x64b] = 0x15000000;
  Pkt_Submit(auStack_870,0);
  return;
}

// 0x0018e1c0  size 0xc8
undefined8 SndCh_Play(int *param_1,byte param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iStack_20;
  undefined1 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  uVar3 = (uint)param_2;
  if (uVar3 == DAT_0036e79c) {
    uVar2 = 1;
  }
  else {
    puVar1 = (uint *)(**(code **)(*param_1 + 0xc))();
    *puVar1 = uVar3;
    puVar1[5] = 0;
    puVar1[4] = 0;
    DAT_0036e79c = param_2;
    if (uVar3 == 0xff) {
      uVar2 = 1;
    }
    else {
      iStack_20 = param_1[1];
      uStack_18 = *puVar1;
      uStack_14 = puVar1[1];
      uStack_10 = puVar1[2];
      uStack_c = puVar1[3];
      uStack_8 = puVar1[4];
      uStack_4 = puVar1[5];
      uStack_1c = 0x13;
      uVar2 = SndMgr_PostEvent(uRam0036f254,&iStack_20);
    }
  }
  return uVar2;
}

// 0x0018e290  size 0x80
void SndCh_Stop(int *param_1)

{
  undefined4 *puVar1;
  int iStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  puVar1[5] = 0;
  puVar1[4] = 0;
  iStack_20 = param_1[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 0x11;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018e310  size 0xc0
undefined8 SndCh_SetVolume(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iStack_20;
  undefined1 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  piVar3 = (int *)param_1;
  (**(code **)(*piVar3 + 0x20))(param_1,param_3);
  if (DAT_0036e79c == -1) {
    uVar2 = 1;
  }
  else {
    puVar1 = (uint *)(**(code **)(*piVar3 + 0xc))(param_1);
    puVar1[5] = 1;
    puVar1[4] = 1;
    *puVar1 = param_2 & 0xff;
    iStack_20 = piVar3[1];
    uStack_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    uStack_8 = puVar1[4];
    uStack_4 = puVar1[5];
    uStack_1c = 0xd;
    uVar2 = SndMgr_PostEvent(uRam0036f254,&iStack_20);
  }
  return uVar2;
}

// 0x0018e3d0  size 0xa8
long snd_sub_0018e3d0(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = &DAT_0036e300;
    puVar1[0xe] = &DAT_0036e334;
    if (param_1 != 0) {
      *puVar1 = &DAT_0036e380;
      puVar1[0xe] = &DAT_0036e3b4;
      if (puVar1 != (undefined4 *)0xffffffc8) {
        puVar1[0xe] = &DAT_0036e4c0;
      }
      if (param_1 != 0) {
        *puVar1 = &DAT_0036e440;
      }
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x0018e480  size 0x80
ulong snd_sub_0018e480(int *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  iStack_20 = param_1[0x10];
  uStack_18 = 0xffffffff;
  uStack_14 = 0x3fff;
  uStack_10 = 0x3f;
  uStack_1c = 0x19;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  uVar2 = SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return uVar1 & 1 & uVar2;
}

// 0x0018e500  size 0x80
ulong snd_sub_0018e500(int *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  iStack_20 = param_1[0x10];
  uStack_18 = 0xffffffff;
  uStack_14 = 0x3fff;
  uStack_10 = 0x3f;
  uStack_1c = 0x18;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  uVar2 = SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return uVar1 & 1 & uVar2;
}

// 0x0018e580  size 0x78
byte SndCh_IsPlaying(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = Snd_IsBusy(*(undefined4 *)(param_1 + 0x40));
  bVar2 = 0;
  bVar1 = false;
  if ((*(char *)(iRam0036f254 + 0x400) == '\0') && (*(char *)(iRam0036f258 + 0x200) == '\0')) {
    bVar1 = true;
  }
  if ((bVar1) && (cVar3 == '\0')) {
    bVar2 = 1;
  }
  return bVar2 ^ 1;
}

// 0x0018e600  size 0xa4
void snd_sub_0018e600(int *param_1,uint param_2)

{
  uint *puVar1;
  int iStack_20;
  undefined1 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  puVar1 = (uint *)(**(code **)(*param_1 + 0xc))();
  param_2 = param_2 & 0xff;
  if (0x26 < param_2) {
    param_2 = param_2 - 0x27;
  }
  *puVar1 = param_2;
  puVar1[4] = 0;
  DAT_0036e79c = 0xff;
  iStack_20 = param_1[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 0xb;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018e6b0  size 0x90
void snd_sub_0018e6b0(int *param_1,short param_2)

{
  undefined4 *puVar1;
  int iStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  puVar1[1] = (int)param_2;
  iStack_20 = param_1[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 0xc;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018e740  size 0x9c
void snd_sub_0018e740(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_18;
  
  piVar2 = (int *)param_1;
  if (param_2 == 0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
    uStack_20 = (undefined1)*puVar1;
    uStack_1c = (undefined2)puVar1[1];
    uStack_18 = (undefined1)puVar1[2];
    (**(code **)(*piVar2 + 0x10))(param_1,uStack_20,uStack_1c,uStack_18,puVar1[4]);
  }
  else {
    (**(code **)(*piVar2 + 0x1c))();
  }
  return;
}

// 0x0018e7e0  size 0x80
void snd_sub_0018e7e0(int *param_1)

{
  undefined4 *puVar1;
  int iStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  puVar1[5] = 0;
  puVar1[4] = 0;
  iStack_20 = param_1[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 9;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018e860  size 0xc0
void snd_sub_0018e860(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint *puVar1;
  int *piVar2;
  int iStack_20;
  undefined1 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  piVar2 = (int *)param_1;
  (**(code **)(*piVar2 + 0x20))(param_1,param_3);
  puVar1 = (uint *)(**(code **)(*piVar2 + 0xc))(param_1);
  param_2 = param_2 & 0xff;
  puVar1[5] = 1;
  puVar1[4] = 1;
  if (param_2 < 0x27) {
    *puVar1 = param_2;
  }
  else {
    *puVar1 = param_2 - 0x27;
  }
  iStack_20 = piVar2[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 5;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018e920  size 0x8c
long snd_sub_0018e920(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = &DAT_0036e380;
    puVar1[0xe] = &DAT_0036e3b4;
    if (puVar1 != (undefined4 *)0xffffffc8) {
      puVar1[0xe] = &DAT_0036e4c0;
    }
    if (param_1 != 0) {
      *puVar1 = &DAT_0036e440;
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x0018e9b0  size 0x44
bool SndCh_IsStreamPlaying(int param_1)

{
  char cVar1;
  
  cVar1 = Snd_StreamGetState(*(undefined4 *)(param_1 + 4));
  return *(int *)(param_1 + 0x1c) != 0 && cVar1 != '\0';
}

// 0x0018ea30  size 0x90
void snd_sub_0018ea30(int *param_1,short param_2)

{
  undefined4 *puVar1;
  int iStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  puVar1[1] = (int)param_2;
  iStack_20 = param_1[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 3;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018eac0  size 0x84
void snd_sub_0018eac0(int *param_1)

{
  undefined4 *puVar1;
  int iStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  iStack_20 = param_1[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 2;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018eb50  size 0x88
void snd_sub_0018eb50(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  puVar1[3] = param_2;
  iStack_20 = param_1[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 4;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018ebe0  size 0x114
/* WARNING: Removing unreachable block (ram,0x0018ecc8) */

void snd_sub_0018ebe0(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iStack_20;
  undefined1 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  piVar3 = (int *)param_1;
  (**(code **)(*piVar3 + 0x20))(param_1,param_3);
  puVar1 = (uint *)(**(code **)(*piVar3 + 0xc))(param_1);
  param_2 = param_2 & 0xff;
  puVar1[5] = 1;
  puVar1[4] = param_5;
  puVar1[3] = 0;
  iVar2 = Snd_GetBankCount();
  if (iVar2 - 1U < param_2) {
    param_2 = 0;
  }
  *puVar1 = param_2;
  puVar1[2] = param_4 & 0xff;
  iStack_20 = piVar3[1];
  uStack_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  uStack_8 = puVar1[4];
  uStack_4 = puVar1[5];
  uStack_1c = 1;
  SndMgr_PostEvent(uRam0036f254,&iStack_20);
  return;
}

// 0x0018ed30  size 0x38
undefined4 snd_sub_0018ed30(int *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(*param_1 + 0xc))();
  *puVar1 = param_2 & 0xff;
  return 1;
}

// 0x0018edb0  size 0x7c
void snd_sub_0018edb0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined1 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_18;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)param_1 + 0xc))();
  uStack_20 = (undefined1)*puVar1;
  uStack_1c = (undefined2)puVar1[1];
  uStack_18 = (undefined1)puVar1[2];
  (**(code **)(*(int *)param_1 + 0x10))(param_1,uStack_20,uStack_1c,uStack_18,puVar1[4]);
  return;
}

// 0x0018ee60  size 0x8
void SndCh_SetMidiPort(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// 0x0018ee70  size 0x104
undefined4 SndCh_NoteOn(int param_1,uint param_2,byte param_3,short param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = (int)param_4 + *(int *)(*(int *)(param_1 + 0x10) + 4);
  uVar4 = (undefined1)param_2;
  if (iVar3 < 0) {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0xc) = uVar4;
  }
  else {
    if (0x3fff < iVar3) {
      iVar3 = 0x3fff;
    }
    uVar2 = (ushort)iVar3;
    *(undefined1 *)(param_1 + 0xc) = uVar4;
  }
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar3 + 8) = 0xfd;
  *(undefined1 *)(iVar3 + 9) = 2;
  *(byte *)(iVar3 + 10) = param_3;
  *(undefined1 *)(iVar3 + 0xb) = param_5;
  *(undefined1 *)(iVar3 + 0xc) = uVar4;
  *(byte *)(iVar3 + 0xd) = (byte)uVar2 & 0x7f;
  *(char *)(iVar3 + 0xe) = (char)((short)(uVar2 & 0x3f80) >> 7);
  puVar1 = *(undefined4 **)(param_1 + 4);
  Midi_IsReady(puVar1[1],*puVar1,puVar1 + 2);
  return 1;
}

// 0x0018ef80  size 0xec
undefined4 SndCh_NoteOff(int param_1,uint param_2,byte param_3,uint param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = (param_4 & 0xff) + (int)*(char *)(*(int *)(param_1 + 0x10) + 1);
  uVar4 = (undefined1)param_2;
  if (iVar3 < 0) {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0xc) = uVar4;
  }
  else {
    if (0x7f < iVar3) {
      iVar3 = 0x7f;
    }
    uVar2 = (undefined1)iVar3;
    *(undefined1 *)(param_1 + 0xc) = uVar4;
  }
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar3 + 8) = 0xfd;
  *(undefined1 *)(iVar3 + 9) = 1;
  *(byte *)(iVar3 + 10) = param_3;
  *(undefined1 *)(iVar3 + 0xb) = param_5;
  *(undefined1 *)(iVar3 + 0xc) = uVar4;
  *(undefined1 *)(iVar3 + 0xd) = uVar2;
  *(undefined1 *)(iVar3 + 0xe) = 0;
  puVar1 = *(undefined4 **)(param_1 + 4);
  Midi_IsReady(puVar1[1],*puVar1,puVar1 + 2);
  return 1;
}

// 0x0018f070  size 0x110
/* WARNING: Removing unreachable block (ram,0x0018f0ec) */

undefined4
SndCh_ControlChange(int param_1,uint param_2,byte param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = ((param_4 & 0xff) * (uint)**(byte **)(param_1 + 0x10)) / 0x7f;
  if (0x7f < uVar3) {
    uVar3 = 0x7f;
  }
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 8) = 0xfd;
  *(undefined1 *)(iVar1 + 9) = 0;
  *(byte *)(iVar1 + 10) = param_3;
  *(undefined1 *)(iVar1 + 0xb) = param_5;
  *(char *)(iVar1 + 0xc) = (char)param_2;
  *(char *)(iVar1 + 0xd) = (char)uVar3;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  puVar2 = *(undefined4 **)(param_1 + 4);
  Midi_IsReady(puVar2[1],*puVar2,puVar2 + 2);
  return 1;
}

// 0x0018f180  size 0x210
/* WARNING: Removing unreachable block (ram,0x0018f27c) */

undefined4
snd_sub_0018f180(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5,
                uint param_6,short param_7)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar7 = (int *)param_1;
  pbVar2 = (byte *)piVar7[4];
  iVar5 = (int)param_7 + *(int *)(pbVar2 + 4);
  if (iVar5 < 0) {
    sVar4 = 0;
    bVar1 = pbVar2[1];
  }
  else {
    if (0x3fff < iVar5) {
      iVar5 = 0x3fff;
    }
    sVar4 = (short)iVar5;
    bVar1 = pbVar2[1];
  }
  uVar6 = (param_6 & 0xff) + (int)(char)bVar1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else {
    if (0x7f < (int)uVar6) {
      uVar6 = 0x7f;
    }
    uVar6 = uVar6 & 0xff;
  }
  uVar8 = ((param_4 & 0xff) * (uint)*pbVar2) / 0x7f;
  if (0x7f < uVar8) {
    uVar8 = 0x7f;
  }
  *(char *)(piVar7 + 3) = (char)param_2;
  *(char *)((int)piVar7 + 0xd) = (char)param_3;
  Midi_SendMessage(((undefined4 *)piVar7[1])[1],*(undefined4 *)piVar7[1],
                   param_3 & 0xff | 0xc0 | ((uint)param_2 & 0x7f) << 8);
  iVar5 = piVar7[1];
  *(undefined1 *)(iVar5 + 8) = 0xfd;
  *(undefined1 *)(iVar5 + 9) = 0x10;
  *(char *)(iVar5 + 10) = (char)param_3;
  *(char *)(iVar5 + 0xb) = (char)param_5;
  *(char *)(iVar5 + 0xc) = (char)param_2;
  *(char *)(iVar5 + 0xd) = (char)uVar8;
  *(undefined1 *)(iVar5 + 0xe) = 0;
  puVar3 = (undefined4 *)piVar7[1];
  Midi_IsReady(puVar3[1],*puVar3,puVar3 + 2);
  if (uVar6 != 0x40) {
    (**(code **)(*piVar7 + 0x30))(param_1,param_2,param_3,uVar6,param_5);
  }
  if (sVar4 != 0) {
    (**(code **)(*piVar7 + 0x34))(param_1,param_2,param_3,sVar4,param_5);
  }
  return 1;
}

// 0x0018f390  size 0xe8
/* WARNING: Removing unreachable block (ram,0x0018f3f8) */

undefined4 snd_sub_0018f390(int param_1,uint param_2,byte param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = ((param_4 & 0xff) * (uint)**(byte **)(param_1 + 0x10)) / 0x7f;
  if (0x7f < uVar1) {
    uVar1 = 0x7f;
  }
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uVar1 & 0x7f) << 0x10 | (param_3 | 0xb0) | 0x700);
  return 1;
}

// 0x0018f480  size 0xd8
undefined4 snd_sub_0018f480(int param_1,uint param_2,byte param_3,short param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)param_4 + *(int *)(*(int *)(param_1 + 0x10) + 4);
  if (iVar2 < 0) {
    sVar1 = 0;
    *(char *)(param_1 + 0xc) = (char)param_2;
  }
  else {
    if (0x3fff < iVar2) {
      iVar2 = 0x3fff;
    }
    sVar1 = (short)iVar2;
    *(char *)(param_1 + 0xc) = (char)param_2;
  }
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (((int)sVar1 + 0x2000U & 0x3f80) >> 7) << 0x10 |
                   (uint)(param_3 | 0xe0) | ((int)sVar1 + 0x2000U & 0x7f) << 8);
  return 1;
}

// 0x0018f560  size 0xc0
undefined4 snd_sub_0018f560(int param_1,uint param_2,byte param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (param_4 & 0xff) + (int)*(char *)(*(int *)(param_1 + 0x10) + 1);
  if ((int)uVar1 < 0) {
    uVar1 = 0;
    *(char *)(param_1 + 0xc) = (char)param_2;
  }
  else {
    if (0x7f < (int)uVar1) {
      uVar1 = 0x7f;
    }
    *(char *)(param_1 + 0xc) = (char)param_2;
  }
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uVar1 & 0x7f) << 0x10 | (param_3 | 0xb0) | 0xa00);
  return 1;
}

// 0x0018f620  size 0xe8
/* WARNING: Removing unreachable block (ram,0x0018f688) */

undefined4 snd_sub_0018f620(int param_1,uint param_2,byte param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = ((param_4 & 0xff) * (uint)**(byte **)(param_1 + 0x10)) / 0x7f;
  if (0x7f < uVar1) {
    uVar1 = 0x7f;
  }
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uVar1 & 0x7f) << 0x10 | (param_3 | 0xb0) | 0xb00);
  return 1;
}

// 0x0018f710  size 0x214
/* WARNING: Removing unreachable block (ram,0x0018f810) */

undefined4
snd_sub_0018f710(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5,
                uint param_6,short param_7)

{
  byte bVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  piVar6 = (int *)param_1;
  pbVar2 = (byte *)piVar6[4];
  iVar4 = (int)param_7 + *(int *)(pbVar2 + 4);
  if (iVar4 < 0) {
    sVar3 = 0;
    bVar1 = pbVar2[1];
  }
  else {
    if (0x3fff < iVar4) {
      iVar4 = 0x3fff;
    }
    sVar3 = (short)iVar4;
    bVar1 = pbVar2[1];
  }
  uVar5 = (param_6 & 0xff) + (int)(char)bVar1;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else {
    if (0x7f < (int)uVar5) {
      uVar5 = 0x7f;
    }
    uVar5 = uVar5 & 0xff;
  }
  uVar7 = ((param_4 & 0xff) * (uint)*pbVar2) / 0x7f;
  if (0x7f < uVar7) {
    uVar7 = 0x7f;
  }
  *(char *)(piVar6 + 3) = (char)param_2;
  *(char *)((int)piVar6 + 0xd) = (char)param_3;
  Midi_SendMessage(((undefined4 *)piVar6[1])[1],*(undefined4 *)piVar6[1],
                   param_3 & 0xff | 0xc0 | ((uint)param_2 & 0x7f) << 8);
  Midi_SendMessage(((undefined4 *)piVar6[1])[1],*(undefined4 *)piVar6[1],
                   (uVar7 & 0x7f) << 0x10 | param_3 & 0xff | 0x90 | ((uint)param_5 & 0x7f) << 8);
  if (uVar5 != 0x40) {
    (**(code **)(*piVar6 + 0x30))(param_1,param_2,param_3,uVar5,param_5);
  }
  if (sVar3 != 0) {
    (**(code **)(*piVar6 + 0x34))(param_1,param_2,param_3,sVar3,param_5);
  }
  return 1;
}

// 0x0018f930  size 0x60
long snd_sub_0018f930(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e480;
    if (param_1 != 0) {
      *(undefined4 *)param_1 = &DAT_0036e4c0;
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x0018f990  size 0x54
void snd_sub_0018f990(int param_1)

{
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_20 = *(undefined4 *)(param_1 + 8);
  uStack_14 = 0x3fff;
  uStack_18 = 0xffffffff;
  uStack_10 = 0x3f;
  uStack_1c = 0x19;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  SndMgr_PostEvent(uGpffff8b64,&uStack_20);
  return;
}

// 0x0018f9f0  size 0x54
void snd_sub_0018f9f0(int param_1)

{
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_20 = *(undefined4 *)(param_1 + 8);
  uStack_14 = 0x3fff;
  uStack_18 = 0xffffffff;
  uStack_10 = 0x3f;
  uStack_1c = 0x18;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  SndMgr_PostEvent(uGpffff8b64,&uStack_20);
  return;
}

// 0x0018fa50  size 0x94
bool snd_sub_0018fa50(int param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(char *)(iGpffff8b68 + 0x201);
  do {
    if ((long)((int)*(char *)(iGpffff8b68 + 0x201) + (int)*(char *)(iGpffff8b68 + 0x200)) <=
        (long)uVar5) {
      bVar1 = false;
LAB_0018fab4:
      bVar3 = true;
      if (!bVar1) {
        cVar2 = Snd_IsBusy();
        bVar3 = cVar2 != '\0';
      }
      return bVar3;
    }
    iVar4 = (int)(uVar5 & 0x1f);
    if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
      iVar4 = iVar4 + -0x20;
    }
    if (*(int *)(param_1 + 8) == *(int *)(iGpffff8b68 + iVar4 * 0x10)) {
      bVar1 = true;
      goto LAB_0018fab4;
    }
    uVar5 = (ulong)((int)uVar5 + 1);
  } while( true );
}

// 0x0018faf0  size 0x94
undefined8
snd_sub_0018faf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_5 == 0) {
    if (*(char *)(iGpffff8b68 + 0x200) < ' ') {
      uVar3 = (int)*(char *)(iGpffff8b68 + 0x201) + (int)*(char *)(iGpffff8b68 + 0x200);
      uVar1 = uVar3 & 0x1f;
      if (((int)uVar3 < 0) && (uVar1 != 0)) {
        uVar1 = uVar1 - 0x20;
      }
      puVar4 = (undefined4 *)(iGpffff8b68 + uVar1 * 0x10);
      uVar2 = 1;
      *puVar4 = *(undefined4 *)(param_1 + 8);
      puVar4[1] = param_2;
      puVar4[2] = param_3;
      puVar4[3] = param_4;
      *(char *)(iGpffff8b68 + 0x200) = *(char *)(iGpffff8b68 + 0x200) + '\x01';
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = Snd_PlayStreamEx(*(undefined4 *)(param_1 + 8));
  }
  return uVar2;
}

// 0x0018fb90  size 0x4c
undefined4 snd_sub_0018fb90(int param_1,byte param_2,uint param_3)

{
  *(char *)(param_1 + 0xc) = (char)param_3;
  *(byte *)(param_1 + 0xd) = param_2;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_2 | 0xc0) | (param_3 & 0x7f) << 8);
  return 1;
}

// 0x0018fbe0  size 0xd8
undefined4 snd_sub_0018fbe0(int param_1,uint param_2,byte param_3,ushort param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 8) = 0xfd;
  *(undefined1 *)(iVar1 + 9) = 2;
  *(byte *)(iVar1 + 10) = param_3;
  *(undefined1 *)(iVar1 + 0xb) = param_5;
  *(char *)(iVar1 + 0xc) = (char)param_2;
  *(byte *)(iVar1 + 0xd) = (byte)param_4 & 0x7f;
  *(char *)(iVar1 + 0xe) = (char)((short)(param_4 & 0x3f80) >> 7);
  puVar2 = *(undefined4 **)(param_1 + 4);
  Midi_IsReady(puVar2[1],*puVar2,puVar2 + 2);
  return 1;
}

// 0x0018fcc0  size 0xc4
undefined4
snd_sub_0018fcc0(int param_1,uint param_2,byte param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 8) = 0xfd;
  *(undefined1 *)(iVar1 + 9) = 1;
  *(byte *)(iVar1 + 10) = param_3;
  *(undefined1 *)(iVar1 + 0xb) = param_5;
  *(char *)(iVar1 + 0xc) = (char)param_2;
  *(undefined1 *)(iVar1 + 0xd) = param_4;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  puVar2 = *(undefined4 **)(param_1 + 4);
  Midi_IsReady(puVar2[1],*puVar2,puVar2 + 2);
  return 1;
}

// 0x0018fd90  size 0xc0
undefined4
snd_sub_0018fd90(int param_1,uint param_2,byte param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 8) = 0xfd;
  *(undefined1 *)(iVar1 + 9) = 0;
  *(byte *)(iVar1 + 10) = param_3;
  *(undefined1 *)(iVar1 + 0xb) = param_5;
  *(char *)(iVar1 + 0xc) = (char)param_2;
  *(undefined1 *)(iVar1 + 0xd) = param_4;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  puVar2 = *(undefined4 **)(param_1 + 4);
  Midi_IsReady(puVar2[1],*puVar2,puVar2 + 2);
  return 1;
}

// 0x0018fe50  size 0xb8
undefined4 snd_sub_0018fe50(int param_1,uint param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 8) = 0xfd;
  *(undefined1 *)(iVar1 + 9) = 0x10;
  *(byte *)(iVar1 + 10) = param_3;
  *(undefined1 *)(iVar1 + 0xb) = param_4;
  *(char *)(iVar1 + 0xc) = (char)param_2;
  *(undefined1 *)(iVar1 + 0xd) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  puVar2 = *(undefined4 **)(param_1 + 4);
  Midi_IsReady(puVar2[1],*puVar2,puVar2 + 2);
  return 1;
}

// 0x0018ff10  size 0x148
undefined4
snd_sub_0018ff10(undefined8 param_1,undefined8 param_2,uint param_3,undefined1 param_4,
                undefined8 param_5,ulong param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  *(char *)(piVar3 + 3) = (char)param_2;
  *(char *)((int)piVar3 + 0xd) = (char)param_3;
  Midi_SendMessage(((undefined4 *)piVar3[1])[1],*(undefined4 *)piVar3[1],
                   param_3 & 0xff | 0xc0 | ((uint)param_2 & 0x7f) << 8);
  iVar1 = piVar3[1];
  *(undefined1 *)(iVar1 + 8) = 0xfd;
  *(undefined1 *)(iVar1 + 9) = 0x10;
  *(char *)(iVar1 + 10) = (char)param_3;
  *(char *)(iVar1 + 0xb) = (char)param_5;
  *(char *)(iVar1 + 0xc) = (char)param_2;
  *(undefined1 *)(iVar1 + 0xd) = param_4;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  puVar2 = (undefined4 *)piVar3[1];
  Midi_IsReady(puVar2[1],*puVar2,puVar2 + 2);
  if ((param_6 & 0xff) != 0x40) {
    (**(code **)(*piVar3 + 0x30))(param_1,param_2,param_3,param_6,param_5);
  }
  if ((short)param_7 != 0) {
    (**(code **)(*piVar3 + 0x34))(param_1,param_2,param_3,param_7,param_5);
  }
  return 1;
}

