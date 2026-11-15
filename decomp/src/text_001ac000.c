// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001ac000 - 0x001b0000
#include "ghidra_types.h"

// 0x001ac440  size 0x2bc
void WheelAsset_Setup(int param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  
  uVar2 = uRam0036f2e0;
  uVar10 = uRam0036f2dc;
  lVar11 = 0;
  iVar12 = iRam0036f2ec + iRam0036f2c0;
  if (uRam0036f2dc <= uRam0036f2e0) {
    uVar7 = uRam0036f2e0 - 8;
    uVar3 = uRam0036f2dc;
    if (8 < (uRam0036f2e0 - uRam0036f2dc) + 1) {
      bVar9 = false;
      bVar8 = false;
      bVar1 = false;
      if ((uRam0036f2dc <= uRam0036f2e0) && (uRam0036f2e0 != 0xffffffff)) {
        bVar1 = true;
      }
      if ((bVar1) && (uRam0036f2e0 - uRam0036f2dc != -1)) {
        bVar8 = true;
      }
      if ((bVar8) && (uRam0036f2e0 - uRam0036f2dc <= (uRam0036f2e0 - uRam0036f2dc) + 1)) {
        bVar9 = true;
      }
      if (bVar9) {
        iVar6 = param_1 + uRam0036f2dc * 4;
        do {
          *(undefined4 *)(iVar6 + 0x4c) = 0;
          uVar3 = uVar3 + 8;
          *(undefined4 *)(iVar6 + 0x50) = 0;
          *(undefined4 *)(iVar6 + 0x54) = 0;
          *(undefined4 *)(iVar6 + 0x58) = 0;
          *(undefined4 *)(iVar6 + 0x5c) = 0;
          *(undefined4 *)(iVar6 + 0x60) = 0;
          *(undefined4 *)(iVar6 + 100) = 0;
          *(undefined4 *)(iVar6 + 0x68) = 0;
          iVar6 = iVar6 + 0x20;
        } while (uVar3 <= uVar7);
      }
    }
    if (uVar3 <= uVar2) {
      iVar6 = param_1 + uVar3 * 4;
      do {
        uVar3 = uVar3 + 1;
        *(undefined4 *)(iVar6 + 0x4c) = 0;
        iVar6 = iVar6 + 4;
      } while (uVar3 <= uVar2);
    }
  }
  if ((cRam00436478 == '\x02') && (lVar5 = Course_GetField_24(param_1), lVar5 == 0)) {
    lVar11 = 1;
  }
  if (uVar10 <= uVar2) {
    iVar6 = param_1 + uVar10 * 4;
    do {
      uVar4 = Gut_PackGetEntry(param_2,0,0);
      Model_Relocate(uVar4);
      lVar5 = Res_GetModelSize(param_1,uVar4,uVar10);
      if (lVar11 != 0) {
        lVar5 = Res_CopyModel(param_1,lVar5);
      }
      if (lVar5 != 0) {
        CarAsset_ApplyDecals(param_1,lVar5,param_1 + 0x2c,0,1);
        Res_Release(param_1,lVar5);
      }
      uVar10 = uVar10 + 1;
      *(int *)(iVar6 + 0x4c) = (int)lVar5;
      iVar6 = iVar6 + 4;
    } while (uVar10 <= uVar2);
  }
  uVar10 = 0;
  iVar6 = param_1;
  do {
    WheelAsset_Relocate(param_1,uVar10 & 0xff,iVar6 + 0x3c);
    uVar10 = uVar10 + 1;
    iVar6 = iVar6 + 8;
  } while (uVar10 < 2);
  uVar4 = Gut_PackGetEntry(param_2,1,1);
  Res_UploadTexture(param_1,param_1 + 0x5c,uVar4,lVar11,1,iVar12,0,0);
  return;
}

// 0x001ac700  size 0x80
void WheelAsset_OnLoaded(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  long lVar1;
  
  Course_ClearCount(param_4);
  if ((cRam00436478 != '\x02') && (lVar1 = Course_GetField_24(param_4), lVar1 == 0)) {
    Arena_Alloc(param_4,param_3);
  }
  WheelAsset_Setup(param_4,param_2);
  *(undefined4 *)((int)param_4 + 8) = 0;
  return;
}

// 0x001ac780  size 0xdc
void WheelAsset_Load(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = 0;
  lVar3 = Course_GetField_24();
  if (lVar3 != 0) {
    iVar2 = Course_GetField_24(param_1);
    iVar2 = *(int *)(iVar2 + 0x20);
  }
  iVar4 = (int)param_1;
  if (cRam00436478 == '\x02') {
    uVar1 = uRam0043647c;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
  }
  *(undefined4 *)(iVar4 + 8) = 1;
  if (iVar2 == 0) {
    Arc_LoadFileEx((uint)(cRam00436478 != '\0') + *(int *)(iVar4 + 0xc) * 2 + 0x6a0,uVar1,0x1ac700,
                   param_1,0,0);
  }
  else {
    Arc_LoadFile((uint)(cRam00436478 != '\0') + *(int *)(iVar4 + 0xc) * 2 + 0x6a0,iVar2,0x1ac700,
                 param_1);
  }
  return;
}

// 0x001ac860  size 0x48
void WheelAsset_SetColor(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  maybe_Mem_CopyQwords((int)param_1 + 0x2c,param_3,0x20);
  maybe_Course_GetItemB(param_1);
  *(undefined4 *)((int)param_1 + 0xc) = param_2;
  return;
}

// 0x001ac8b0  size 0x34
void WheelAsset_ClearParams(undefined8 param_1)

{
  Mem_Set16(param_1,0,0x20);
  CarAsset_SetDefaultParams(param_1);
  return;
}

// 0x001ac8f0  size 0x8a8
void CarAsset_ApplyDecals(undefined8 param_1,long param_2,float *param_3,long param_4,long param_5)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  ushort *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_4;
  
  if (param_2 != 0) {
    puVar8 = (uint *)param_2;
    if ((*puVar8 & 0x10) == 0) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = puVar8 + 0x14;
    }
    if (puVar6 != (uint *)0x0) {
      if ((*puVar8 & 0x10) == 0) {
        puVar8 = (uint *)0x0;
      }
      else {
        puVar8 = puVar8 + 0x14;
      }
      iVar4 = Res_GetSubResource(param_1,param_2,&uStack_4);
      uVar13 = 0;
      fVar16 = param_3[3];
      fVar26 = *param_3;
      fVar27 = param_3[2];
      fVar29 = param_3[1] * 1000.0;
      fStack_20 = DAT_00318010;
      fStack_1c = DAT_00318014;
      fStack_18 = DAT_00318018;
      fStack_30 = DAT_00318020;
      fStack_2c = DAT_00318024;
      fStack_28 = DAT_00318028;
      if (uStack_4 != 0) {
        fVar24 = fVar26 * 2.54;
        fVar25 = fVar24 - 8.0;
        fVar22 = fVar24 - 2.0;
        fVar23 = fVar24 + 4.0;
        do {
          fStack_40 = DAT_00318030;
          fStack_3c = DAT_00318034;
          fStack_38 = DAT_00318038;
          fStack_50 = DAT_00318040;
          fStack_4c = DAT_00318044;
          fStack_48 = DAT_00318048;
          puVar5 = (ushort *)Model_SkipNops(iVar4 + 0x70);
          uVar12 = 0;
          if (*(int *)(iVar4 + 0x74) != 0) {
            fVar21 = ((fVar29 - 135.0) / 2.0) / 1000.0;
            fVar17 = fVar25 / 17.4;
            fVar18 = fVar25 / 25.02;
            fVar19 = (((fVar27 - 4.0) / 2.0) * 2.54) / 100.0;
            fVar28 = fVar24 + (((fVar29 / 10.0) * fVar16 * 100.0) / 100.0) * 2.0;
            fVar20 = fVar28 - 4.0;
            fVar15 = fVar23 / 37.02;
            fVar14 = fVar23 / 29.4;
            do {
              iVar2 = *(int *)(puVar5 + 6);
              pfVar10 = (float *)(puVar5 + 0x20);
              pfVar11 = pfVar10 + iVar2 * 3;
              pfVar9 = pfVar11 + iVar2 * 2 + 2;
              if (*(ushort *)pfVar11 == 0x8004) {
                pfVar9 = pfVar11 + 1;
              }
              uVar7 = 0;
              if (iVar2 != 0) {
                do {
                  uVar1 = *(ushort *)((int)pfVar9 + 6);
                  fVar30 = pfVar10[1];
                  fVar31 = pfVar10[2];
                  fVar32 = *pfVar10;
                  if (uVar1 != 0x7fff) {
                    if ((uVar1 & 0x4000) != 0) {
                      if (param_4 == 0) {
                        fVar31 = fVar31 - fVar21;
                      }
                      else {
                        fVar31 = fVar31 + fVar21;
                      }
                    }
                    if ((uVar1 & 0x2000) != 0) {
                      fVar31 = fVar31 * (fVar29 / 135.0);
                    }
                    if ((uVar1 & 0x1000) != 0) {
                      if (param_4 == 0) {
                        fVar31 = fVar31 - fVar19;
                      }
                      else {
                        fVar31 = fVar31 + fVar19;
                      }
                    }
                    if ((uVar1 & 0x800) != 0) {
                      fVar31 = fVar31 * (fVar27 / 4.0);
                    }
                    if ((uVar1 & 0x400) != 0) {
                      fVar3 = fVar28 / 50.57;
                      if (param_5 != 0) {
                        fVar3 = fVar28 / 42.95;
                      }
                      fVar32 = fVar32 * fVar3;
                      if (param_5 == 0) {
                        fVar30 = fVar30 * (fVar28 / 50.57);
                      }
                      else {
                        fVar30 = fVar30 * (fVar28 / 42.95);
                      }
                    }
                    if ((uVar1 & 0x200) != 0) {
                      fVar3 = fVar20 / 38.95;
                      if (param_5 == 0) {
                        fVar3 = fVar20 / 46.57;
                      }
                      fVar32 = fVar32 * fVar3;
                      if (param_5 == 0) {
                        fVar30 = fVar30 * (fVar20 / 46.57);
                      }
                      else {
                        fVar30 = fVar30 * (fVar20 / 38.95);
                      }
                    }
                    if ((uVar1 & 0x100) != 0) {
                      fVar3 = fVar18;
                      if (param_5 != 0) {
                        fVar3 = fVar17;
                      }
                      fVar32 = fVar32 * fVar3;
                      if (param_5 == 0) {
                        fVar30 = fVar30 * fVar18;
                      }
                      else {
                        fVar30 = fVar30 * fVar17;
                      }
                    }
                    if ((uVar1 & 0x80) != 0) {
                      fVar3 = fVar22 / 31.02;
                      if (param_5 != 0) {
                        fVar3 = fVar22 / 23.4;
                      }
                      fVar32 = fVar32 * fVar3;
                      if (param_5 == 0) {
                        fVar30 = fVar30 * (fVar22 / 31.02);
                      }
                      else {
                        fVar30 = fVar30 * (fVar22 / 23.4);
                      }
                    }
                    if ((uVar1 & 0x40) != 0) {
                      fVar3 = fVar26 / 13.0;
                      if (param_5 != 0) {
                        fVar3 = fVar26 / 10.0;
                      }
                      fVar32 = fVar32 * fVar3;
                      if (param_5 == 0) {
                        fVar30 = fVar30 * (fVar26 / 13.0);
                      }
                      else {
                        fVar30 = fVar30 * (fVar26 / 10.0);
                      }
                    }
                    if ((uVar1 & 0x20) != 0) {
                      fVar3 = fVar15;
                      if (param_5 != 0) {
                        fVar3 = fVar14;
                      }
                      fVar32 = fVar32 * fVar3;
                      if (param_5 == 0) {
                        fVar30 = fVar30 * fVar15;
                      }
                      else {
                        fVar30 = fVar30 * fVar14;
                      }
                    }
                    *pfVar10 = fVar32;
                    pfVar10[1] = fVar30;
                    pfVar10[2] = fVar31;
                    *(ushort *)((int)pfVar9 + 6) = 0x7fff;
                  }
                  pfVar10 = pfVar10 + 3;
                  pfVar9 = pfVar9 + 2;
                  if (fVar32 < fStack_40) {
                    fStack_40 = fVar32;
                  }
                  if (fVar30 < fStack_3c) {
                    fStack_3c = fVar30;
                  }
                  if (fVar31 < fStack_38) {
                    fStack_38 = fVar31;
                  }
                  if (fStack_50 < fVar32) {
                    fStack_50 = fVar32;
                  }
                  else {
                  }
                  if (fStack_4c < fVar30) {
                    fStack_4c = fVar30;
                  }
                  else {
                  }
                  if (fVar31 <= fStack_48) {
                    fVar31 = fStack_48;
                  }
                  uVar7 = uVar7 + 1;
                  fStack_48 = fVar31;
                } while (uVar7 < *(uint *)(puVar5 + 6));
              }
              uVar12 = uVar12 + 1;
              puVar5 = puVar5 + (*puVar5 + 1) * 8;
            } while (uVar12 < *(uint *)(iVar4 + 0x74));
          }
          *(float *)(iVar4 + 0x80) = fStack_40;
          *(float *)(iVar4 + 0x84) = fStack_3c;
          *(float *)(iVar4 + 0x88) = fStack_38;
          *(float *)(iVar4 + 0x90) = fStack_50;
          *(float *)(iVar4 + 0x94) = fStack_4c;
          *(float *)(iVar4 + 0x98) = fStack_48;
          if (fStack_40 < fStack_20) {
            fStack_20 = fStack_40;
          }
          if (fStack_3c < fStack_1c) {
            fStack_1c = fStack_3c;
          }
          if (fStack_38 < fStack_18) {
            fStack_18 = fStack_38;
          }
          if (fStack_30 < fStack_50) {
            fStack_30 = fStack_50;
          }
          if (fStack_2c < fStack_4c) {
            fStack_2c = fStack_4c;
          }
          if (fStack_28 < fStack_48) {
            fStack_28 = fStack_48;
          }
          uVar13 = uVar13 + 1;
          iVar4 = iVar4 + (*(int *)(iVar4 + 0x78) + 1) * 0x10 + 0xa0;
        } while (uVar13 < uStack_4);
      }
      if (puVar8 != (uint *)0x0) {
        puVar8[4] = (uint)fStack_20;
        puVar8[5] = (uint)fStack_1c;
        puVar8[6] = (uint)fStack_18;
        puVar8[8] = (uint)fStack_30;
        puVar8[9] = (uint)fStack_2c;
        puVar8[10] = (uint)fStack_28;
      }
    }
  }
  return;
}

// 0x001ad1a0  size 0x498
/* WARNING: Removing unreachable block (ram,0x001ad4e4) */
/* WARNING: Removing unreachable block (ram,0x001ad394) */
/* WARNING: Removing unreachable block (ram,0x001ad43c) */
/* WARNING: Removing unreachable block (ram,0x001ad3c8) */
/* WARNING: Removing unreachable block (ram,0x001ad470) */
/* WARNING: Removing unreachable block (ram,0x001ad518) */

void CarAsset_ApplyLivery
               (float param_1,float param_2,undefined8 param_3,long param_4,float *param_5,
               long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_8 [4];
  uint uStack_4;
  
  if (param_4 != 0) {
    if ((*(uint *)param_4 & 0x10) == 0) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = (uint *)param_4 + 0x14;
    }
    if ((puVar7 != (uint *)0x0) && (param_6 != 0)) {
      if ((*(uint *)param_6 & 0x10) == 0) {
        puVar7 = (uint *)0x0;
      }
      else {
        puVar7 = (uint *)param_6 + 0x14;
      }
      if (puVar7 != (uint *)0x0) {
        iVar3 = Res_GetSubResource(param_3,param_4,&uStack_4);
        iVar4 = Res_GetSubResource(param_3,param_6,auStack_8);
        uVar14 = 0;
        fVar16 = (*param_5 - param_1) / (param_2 - param_1);
        if (uStack_4 != 0) {
          fVar17 = 1.0 - fVar16;
          do {
            puVar5 = (ushort *)Model_SkipNops(iVar3 + 0x70);
            puVar6 = (ushort *)Model_SkipNops(iVar4 + 0x70);
            uVar13 = 0;
            if (*(int *)(iVar3 + 0x74) != 0) {
              do {
                iVar1 = *(int *)(puVar5 + 6);
                pfVar12 = (float *)(puVar5 + 0x20);
                pfVar11 = (float *)(puVar6 + 0x20);
                pfVar9 = pfVar12 + iVar1 * 3;
                pfVar10 = pfVar9 + iVar1 * 2 + 2;
                iVar2 = *(int *)(puVar6 + 6) * 5 + 2;
                if (*(ushort *)pfVar9 == 0x8004) {
                  pfVar10 = pfVar9 + 1;
                  iVar2 = *(int *)(puVar6 + 6) * 3 + 1;
                }
                pfVar9 = pfVar11 + iVar2;
                uVar8 = 0;
                if (iVar1 != 0) {
                  do {
                    *pfVar12 = *pfVar12 * fVar17 + *pfVar11 * fVar16;
                    pfVar12[1] = pfVar12[1] * fVar17 + pfVar11[1] * fVar16;
                    pfVar12[2] = pfVar12[2] * fVar17 + pfVar11[2] * fVar16;
                    fVar15 = (float)*(ushort *)pfVar10 * fVar17 + (float)*(ushort *)pfVar9 * fVar16;
                    if (2.1474836e+09 <= fVar15) {
                      fVar15 = fVar15 - 2.1474836e+09;
                    }
                    *(ushort *)pfVar10 = (ushort)(int)fVar15;
                    fVar15 = (float)*(ushort *)((int)pfVar10 + 2) * fVar17 +
                             (float)*(ushort *)((int)pfVar9 + 2) * fVar16;
                    if (2.1474836e+09 <= fVar15) {
                      fVar15 = fVar15 - 2.1474836e+09;
                    }
                    *(ushort *)((int)pfVar10 + 2) = (ushort)(int)fVar15;
                    fVar15 = (float)*(ushort *)(pfVar10 + 1) * fVar17 +
                             (float)*(ushort *)(pfVar9 + 1) * fVar16;
                    if (2.1474836e+09 <= fVar15) {
                      fVar15 = fVar15 - 2.1474836e+09;
                    }
                    *(ushort *)(pfVar10 + 1) = (ushort)(int)fVar15;
                    uVar8 = uVar8 + 1;
                    pfVar12 = pfVar12 + 3;
                    pfVar11 = pfVar11 + 3;
                    pfVar10 = pfVar10 + 2;
                    pfVar9 = pfVar9 + 2;
                  } while (uVar8 < *(uint *)(puVar5 + 6));
                }
                uVar13 = uVar13 + 1;
                puVar5 = puVar5 + (*puVar5 + 1) * 8;
                puVar6 = puVar6 + (*puVar6 + 1) * 8;
              } while (uVar13 < *(uint *)(iVar3 + 0x74));
            }
            uVar14 = uVar14 + 1;
            iVar3 = iVar3 + (*(int *)(iVar3 + 0x78) + 1) * 0x10 + 0xa0;
            iVar4 = iVar4 + (*(int *)(iVar4 + 0x78) + 1) * 0x10 + 0xa0;
          } while (uVar14 < uStack_4);
        }
      }
    }
  }
  return;
}

// 0x001ad640  size 0x8c
void CarAsset_SetDefaultParams(undefined4 *param_1)

{
  uint uVar1;
  
  Mem_Set16(param_1,0,0x20);
  *param_1 = 0x41200000;
  uVar1 = 0;
  param_1[1] = 0x43070000;
  param_1[2] = 0x40800000;
  param_1[3] = 0x42820000;
  do {
    *(undefined1 *)(param_1 + 4) = 0x80;
    uVar1 = uVar1 + 1;
    *(undefined1 *)((int)param_1 + 0x11) = 0x80;
    *(undefined1 *)((int)param_1 + 0x12) = 0x80;
    *(undefined1 *)((int)param_1 + 0x13) = 0x80;
    *(undefined1 *)(param_1 + 5) = 0x80;
    *(undefined1 *)((int)param_1 + 0x15) = 0x80;
    *(undefined1 *)((int)param_1 + 0x16) = 0xfe;
    *(undefined1 *)((int)param_1 + 0x17) = 0xff;
    param_1 = param_1 + 2;
  } while (uVar1 < 2);
  return;
}

// 0x001ad6d0  size 0x16c
void CarAsset_SelectLod(undefined8 param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uStack_4;
  
  iVar6 = (int)param_1;
  if (uRam0036f2d4 <= uRam0036f2d8) {
    iVar8 = iVar6 + uRam0036f2d4 * 100;
    uVar7 = uRam0036f2d4;
    do {
      uVar5 = 0;
      piVar3 = &DAT_00317ff0;
      do {
        iVar1 = *(int *)(iVar8 + *piVar3 * 4 + 0x98);
        uVar4 = 0;
        if (((iVar1 != 0) &&
            (puVar2 = (uint *)Res_GetSubResource(param_1,iVar1,&uStack_4), puVar2 != (uint *)0x0))
           && (uStack_4 != 0)) {
          do {
            if ((puVar2[1] & 0x7c0) != 0) {
              if (((*(int *)(iVar6 + 0x30) == 0) || ((puVar2[1] & 0x40) == 0)) && (param_2 != 0)) {
                *puVar2 = *puVar2 | 0x2000;
              }
              else {
                *puVar2 = *puVar2 & 0xffffdfff;
              }
            }
            uVar4 = uVar4 + 1;
            puVar2 = puVar2 + (puVar2[0x1e] + 1) * 4 + 0x28;
          } while (uVar4 < uStack_4);
        }
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar5 < 7);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 100;
    } while (uVar7 <= uRam0036f2d8);
  }
  *(int *)(iVar6 + 0x2c) = (int)param_2;
  return;
}

// 0x001ad840  size 0x1f8
void CarAsset_RelocatePart(undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  
  uVar5 = 0;
  if (param_2 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2) {
    case 0:
      uVar5 = 0x440;
      break;
    case 1:
      uVar5 = 0x200;
      break;
    case 2:
      uVar5 = 0x100;
      break;
    case 3:
      uVar5 = 0x80;
      break;
    case 4:
      uVar5 = 0x40;
      break;
    case 5:
      uVar5 = 0x20;
    }
  }
  puVar6 = (undefined1 *)param_3;
  iVar8 = (int)param_1;
  iVar2 = (uint)param_2 * 8 + iVar8;
  *(undefined1 *)(iVar2 + 0x4c) = *puVar6;
  *(undefined1 *)(iVar2 + 0x4d) = puVar6[1];
  *(undefined1 *)(iVar2 + 0x4e) = puVar6[2];
  *(undefined1 *)(iVar2 + 0x4f) = puVar6[3];
  *(undefined1 *)(iVar2 + 0x50) = puVar6[4];
  *(undefined1 *)(iVar2 + 0x51) = puVar6[5];
  *(undefined1 *)(iVar2 + 0x52) = puVar6[6];
  *(undefined1 *)(iVar2 + 0x53) = puVar6[7];
  if ((((param_2 != 4) || (*(int *)(iVar8 + 0x30) != 0)) &&
      ((param_2 != 5 || (*(int *)(iVar8 + 0x34) != 0)))) && (uRam0036f2d4 <= uRam0036f2d8)) {
    iVar8 = iVar8 + uRam0036f2d4 * 100;
    uVar7 = uRam0036f2d4;
    do {
      uVar4 = 0;
      piVar3 = &DAT_00317fd0;
      do {
        uVar1 = *(undefined4 *)(iVar8 + *piVar3 * 4 + 0x98);
        if (param_2 == 5) {
          Res_Relocate(param_1,uVar1,uVar5,0,param_3,puVar6 + 3,puVar6 + 6,puVar6 + 7);
        }
        else {
          Res_Relocate(param_1,uVar1,uVar5,0,param_3,puVar6 + 3,puVar6 + 6,0);
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar4 < 8);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 100;
    } while (uVar7 <= uRam0036f2d8);
  }
  return;
}

// 0x001ada40  size 0xa0
void CarAsset_SetPaintColor(undefined8 param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = ((uint)param_2 & 0xff) + (int)param_1;
  if (param_3 != *(char *)(iVar2 + 0x3c)) {
    *(char *)(iVar2 + 0x3c) = param_3;
    uVar1 = uRam0036f2d8;
    for (uVar3 = uRam0036f2d4; uVar3 <= uVar1; uVar3 = uVar3 + 1) {
      CarAsset_UploadPalette(param_1,uVar3,param_2);
    }
  }
  return;
}

// 0x001adae0  size 0x9c
void CarAsset_SetAero(undefined8 param_1,undefined1 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined1 *)((int)param_1 + 0x3b) = param_2;
  uVar1 = uRam0036f2d8;
  if (uRam0036f2d4 <= uRam0036f2d8) {
    iVar3 = (int)param_1 + uRam0036f2d4 * 4;
    uVar4 = uRam0036f2d4;
    do {
      uVar2 = Gut_PackGetEntry(*(undefined4 *)(iVar3 + 0x80),0,0);
      CarAsset_InstallPart(param_1,uVar4,uVar2,0,0x12,0x12);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 <= uVar1);
  }
  return;
}

// 0x001adb80  size 0xbc
void CarAsset_SetSpoiler(int param_1,undefined1 param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0x3a) = param_2;
  uVar3 = uRam0036f2d8;
  if (uRam0036f2d4 <= uRam0036f2d8) {
    iVar2 = param_1 + uRam0036f2d4 * 4;
    uVar4 = uRam0036f2d4;
    do {
      uVar1 = Gut_PackGetEntry(*(undefined4 *)(iVar2 + 0x80),0,0);
      CarAsset_InstallPart(param_1,uVar4,uVar1,0,0x14,0x14);
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar4 <= uVar3);
  }
  uVar3 = 0;
  iVar2 = param_1;
  do {
    CarAsset_RelocatePart(param_1,uVar3 & 0xff,iVar2 + 0x4c);
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 8;
  } while (uVar3 < 4);
  return;
}

// 0x001adc40  size 0xb4
void CarAsset_SetBodyKit(undefined8 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined1 *)((int)param_1 + 0x39) = param_2;
  uVar2 = uRam0036f2d8;
  if (uRam0036f2d4 <= uRam0036f2d8) {
    iVar5 = (int)param_1 + uRam0036f2d4 * 4;
    uVar4 = uRam0036f2d4;
    do {
      uVar1 = *(undefined4 *)(iVar5 + 0x80);
      CarAsset_UploadPaletteDefault(param_1,uVar4);
      uVar3 = Gut_PackGetEntry(uVar1,0,0);
      CarAsset_InstallPart(param_1,uVar4,uVar3,0,4,5);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 <= uVar2);
  }
  return;
}

// 0x001add00  size 0x1bc
void CarAsset_SetWheelType(int param_1,undefined1 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0xc) != 0x11d) {
    *(undefined1 *)(param_1 + 0x38) = param_2;
    uVar5 = uRam0036f2d8;
    if (uRam0036f2d4 <= uRam0036f2d8) {
      iVar3 = param_1 + uRam0036f2d4 * 4;
      uVar2 = uRam0036f2d4;
      do {
        uVar1 = Gut_PackGetEntry(*(undefined4 *)(iVar3 + 0x80),0,0);
        CarAsset_InstallPart(param_1,uVar2,uVar1,0,3,3);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 <= uVar5);
    }
    uVar5 = uRam0036f2d8;
    uVar2 = uRam0036f2d4 + 1;
    if (uVar2 <= uRam0036f2d8) {
      iVar3 = param_1 + uVar2 * 100;
      do {
        if (uVar2 == 2) {
          *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(param_1 + uRam0036f2d4 * 100 + 0xa4);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 100;
      } while (uVar2 <= uVar5);
    }
    uVar1 = Gut_PackGetEntry(*(undefined4 *)(uRam0036f2d4 * 4 + param_1 + 0x80),0,0);
    uVar5 = 0;
    iVar3 = param_1;
    do {
      if (*(byte *)(param_1 + 0x38) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)(*(byte *)(param_1 + 0x38) >> 1);
      }
      uVar4 = 1 << (uVar5 & 0x1f);
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & ~uVar4;
      CarAsset_CopyPartModel(param_1,iVar3 + 0x550,uVar1,uVar5 + uVar2 * 4 + 0x25,uVar4,0);
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar5 < 4);
  }
  return;
}

// 0x001adec0  size 0x8
void CarAsset_SetUserData(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}

// 0x001aded0  size 0x44
uint CarAsset_GetPartVariant(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (cRam00436478 == '\x01') {
    if (param_2 != 1) {
      param_2 = 4;
    }
  }
  else {
    uVar1 = uRam0036f2d4;
    if (uRam0036f2d4 <= param_2) {
      uVar1 = param_2;
    }
    param_2 = uRam0036f2d8;
    if (uVar1 <= uRam0036f2d8) {
      param_2 = uVar1;
    }
  }
  return param_2;
}

// 0x001adf20  size 0x134
void CarAsset_UploadPaletteDefault(int param_1,int param_2)

{
  int iVar1;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_10 [4];
  
  aiStack_10[0] = DAT_00317fc0;
  aiStack_10[1] = DAT_00317fc4;
  aiStack_10[2] = DAT_00317fc8;
  aiStack_10[3] = DAT_00317fcc;
  if ((param_2 != 4) && (*(byte *)(param_1 + 0x39) != 0)) {
    iVar1 = *(int *)(param_2 * 4 + param_1 + 0x4f8);
    if ((iVar1 != 0) && (*(int *)(param_2 * 100 + param_1 + 0xa8) != 0)) {
      iStack_2c = aiStack_10[param_2];
      iStack_40 = DAT_00317fb0 / iStack_2c;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_28 = 0;
      iStack_3c = DAT_00317fb4 / iStack_2c;
      iStack_30 = DAT_00317fb8 / iStack_2c;
      iStack_2c = DAT_00317fbc / iStack_2c;
      uStack_24 = 0xf0;
      uStack_20 = 0x10;
      Tex_BuildClutPacket(iVar1,*(undefined4 *)
                                 ((param_2 + (*(byte *)(param_1 + 0x39) - 1) * 4) * 0x80 +
                                  iRam004363dc + 0x6c),&iStack_40);
    }
  }
  return;
}

// 0x001ae060  size 0x1a0
void CarAsset_UploadPalette(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  uVar2 = param_3 & 0xff;
  uVar3 = (uint)*(byte *)(uVar2 + param_1 + 0x3c);
  if ((uVar3 != 0xff) && ((uRam00436370 <= uVar3 || (uRam0043638c <= uVar3)))) {
    uVar3 = 0;
  }
  if (param_2 == 0) {
    uVar1 = 0;
    if (uVar3 != 0xff) {
      uVar1 = *(undefined4 *)(uVar3 * 0x80 + iRam00436388 + 0x6c);
    }
    if (*(int *)(param_1 + 0x4e4) != 0) {
      uStack_28 = 0;
      uStack_24 = 0;
      iStack_30 = (param_3 & 1) << 7;
      uStack_18 = 0;
      iStack_14 = (param_3 & 0xff) << 4;
      iStack_2c = (uVar2 >> 1) << 5;
      uStack_20 = 0x80;
      uStack_1c = 0x20;
      uStack_10 = 0x10;
      Tex_BuildClutPacket(*(int *)(param_1 + 0x4e4),uVar1,&iStack_30);
    }
  }
  if (param_2 == 1) {
    uVar1 = 0;
    if (uVar3 != 0xff) {
      uVar1 = *(undefined4 *)(uVar3 * 0x80 + iRam004363a4 + 0x6c);
    }
    if (*(int *)(param_1 + 0x4e8) != 0) {
      iStack_2c = (uVar2 >> 1) << 4;
      uStack_28 = 0;
      uStack_24 = 0;
      iStack_30 = (param_3 & 1) << 6;
      uStack_18 = 0;
      iStack_14 = (param_3 & 0xff) << 4;
      uStack_20 = 0x40;
      uStack_1c = 0x10;
      uStack_10 = 0x10;
      Tex_BuildClutPacket(*(int *)(param_1 + 0x4e8),uVar1,&iStack_30);
    }
  }
  return;
}

// 0x001ae200  size 0xec
undefined4
CarAsset_CopyPartModel
          (undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,uint param_5
          ,long param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  Model_Relocate(param_3);
  lVar3 = Res_GetModelSize(param_1,param_3,param_4);
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    uVar2 = 0;
    param_2[2] = 0;
    param_2[3] = 0x3f800000;
  }
  else {
    *(uint *)((int)param_1 + 0x7c) = *(uint *)((int)param_1 + 0x7c) | param_5;
    iVar1 = (int)lVar3;
    if (param_6 == 0) {
      *param_2 = *(undefined4 *)(iVar1 + 0x20);
      param_2[1] = *(undefined4 *)(iVar1 + 0x24);
      param_2[2] = *(undefined4 *)(iVar1 + 0x28);
      param_2[3] = 0x3f800000;
    }
    else {
      *param_2 = *(undefined4 *)(iVar1 + 0x30);
      param_2[1] = *(undefined4 *)(iVar1 + 0x34);
      param_2[2] = *(undefined4 *)(iVar1 + 0x38);
      param_2[3] = 0x3f800000;
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 0x001ae2f0  size 0x280
void CarAsset_InstallPart
               (undefined8 param_1,int param_2,undefined8 param_3,long param_4,uint param_5,
               uint param_6)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  Model_Relocate(param_3);
  if (param_5 <= param_6) {
    iVar8 = (int)param_1;
    iVar5 = iVar8 + param_2 * 100 + param_5 * 4;
    do {
      lVar3 = 0;
      iVar4 = -1;
      bVar1 = false;
      lVar7 = 0;
      iVar6 = 0;
      if (param_5 < 0x19) {
                    /* WARNING: Switch is manually overridden */
        switch(param_5) {
        case 0:
          iVar4 = 0;
          bVar1 = true;
          break;
        case 1:
        case 2:
          iVar4 = param_5 + 3;
          break;
        case 3:
          if (*(int *)(iVar8 + 0xc) == 0x11d) {
            *(undefined1 *)(iVar8 + 0x38) = 0;
          }
          uVar2 = 0;
          if (*(byte *)(iVar8 + 0x38) != 0) {
            uVar2 = (uint)(*(byte *)(iVar8 + 0x38) >> 1);
          }
          iVar4 = uVar2 + 8;
          break;
        case 4:
          iVar4 = *(byte *)(iVar8 + 0x39) + 0xe;
          break;
        case 5:
          iVar4 = *(byte *)(iVar8 + 0x39) + 0x13;
          break;
        case 6:
          iVar4 = 0x24;
          break;
        default:
          iVar4 = param_5 + 0x11;
          break;
        case 0xc:
        case 0xd:
          iVar4 = param_5 + 0x11;
          break;
        case 0xe:
          iVar4 = 0x1f;
          break;
        case 0xf:
        case 0x10:
          iVar4 = param_5 + 0x11;
          break;
        case 0x11:
          iVar4 = 0xd;
          break;
        case 0x12:
          if (*(byte *)(iVar8 + 0x3b) != 0) {
            iVar4 = 7;
            lVar7 = 0x36e840;
            iVar6 = (*(byte *)(iVar8 + 0x3b) - 1) * 3 + 0x317f98;
          }
          break;
        case 0x13:
          iVar4 = 1;
          break;
        case 0x14:
          if (*(char *)(iVar8 + 0x3a) == '\x01') {
            iVar4 = 6;
          }
          break;
        case 0x15:
          iVar4 = 2;
          break;
        case 0x16:
          iVar4 = 3;
          break;
        case 0x17:
          iVar4 = param_5 + 0xb;
        }
      }
      if (iVar4 != -1) {
        lVar3 = Res_GetModelSize(param_1,param_3);
      }
      if (((lVar3 != 0) && ((*(uint *)lVar3 & 0x10) == 0)) && (!bVar1)) {
        lVar3 = 0;
      }
      if ((lVar3 != 0) && (param_4 != 0)) {
        lVar3 = Res_CopyModel(param_1);
      }
      *(int *)(iVar5 + 0x98) = (int)lVar3;
      if ((lVar7 != 0) || (iVar6 != 0)) {
        Res_Relocate(param_1,lVar3,0xffffffffffffffff,0,lVar7,iVar6,0,0);
      }
      param_5 = param_5 + 1;
      iVar5 = iVar5 + 4;
    } while (param_5 <= param_6);
  }
  return;
}

// 0x001ae570  size 0x8a8
void CarAsset_Build(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  int iStack_30;
  int iStack_20;
  undefined4 uStack_4;
  
  uVar15 = 0;
  uVar11 = 0;
  uStack_4 = 0;
  iVar16 = iRam0036f2ec + iRam0036f2c0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar13 = param_1;
  iVar10 = param_1;
  iVar9 = param_1;
  do {
    Res_UploadTexture(param_1,iVar10 + 0x2b4,0,0,0,0,0,0);
    Res_UploadTexture(param_1,iVar10 + 0x340,0,0,0,0,0,0);
    Res_UploadTexture(param_1,iVar10 + 0x3cc,0,0,0,0,0,0);
    Res_UploadTexture(param_1,iVar10 + 0x458,0,0,0,0,0,0);
    *(undefined4 *)(iVar9 + 0x4e4) = 0;
    uVar7 = 0;
    *(undefined4 *)(iVar9 + 0x4f8) = 0;
    iVar6 = iVar13;
    do {
      *(undefined4 *)(iVar6 + 0x98) = 0;
      *(undefined4 *)(iVar6 + 0x9c) = 0;
      uVar7 = uVar7 + 5;
      *(undefined4 *)(iVar6 + 0xa0) = 0;
      *(undefined4 *)(iVar6 + 0xa4) = 0;
      *(undefined4 *)(iVar6 + 0xa8) = 0;
      iVar6 = iVar6 + 0x14;
    } while (uVar7 < 0x19);
    uVar11 = uVar11 + 1;
    iVar10 = iVar10 + 0x1c;
    iVar9 = iVar9 + 4;
    iVar13 = iVar13 + 100;
  } while (uVar11 < 5);
  uVar3 = Gut_PackGetEntry(*(undefined4 *)(uRam0036f2d4 * 4 + param_1 + 0x80),0,0);
  uVar11 = uRam0036f2d4;
  uVar7 = uRam0036f2d8;
  if ((cRam00436478 == '\x02') &&
     (lVar4 = Course_GetField_24(param_1), uVar11 = uRam0036f2d4, uVar7 = uRam0036f2d8, lVar4 == 0))
  {
    uVar15 = 1;
    uStack_4 = 1;
  }
  for (; uVar12 = uRam0036f2d8, uVar11 <= uRam0036f2d8; uVar11 = uVar11 + 1) {
    iVar13 = param_1 + uVar11 * 4;
    uVar1 = *(undefined4 *)(iVar13 + 0x80);
    if ((cRam00436478 != '\x01') || ((uRam0036f2d8 = uVar7, uVar11 != 0 && (1 < uVar11 - 2)))) {
      uRam0036f2d8 = uVar7;
      uVar5 = Gut_PackGetEntry(uVar1,0,0);
      CarAsset_InstallPart(param_1,uVar11,uVar5,uStack_4,0,0x18);
      uVar5 = Gut_PackGetEntry(uVar1,1,1);
      iVar10 = param_1 + uVar11 * 0x1c;
      Res_UploadTexture(param_1,iVar10 + 0x2b4,uVar5,uVar15,1,iVar16,0,0);
      uVar5 = Gut_PackGetEntry(uVar1,2,1);
      Res_UploadTexture(param_1,iVar10 + 0x340,uVar5,uVar15,1,iVar16,0,iVar13 + 0x4e4);
      uVar7 = 0;
      do {
        CarAsset_UploadPalette(param_1,uVar11,uVar7 & 0xff);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x10);
      lVar4 = Gut_PackGetEntry(uVar1,3,1);
      if ((uVar11 == 4) || (lVar4 == 0)) {
        Res_UploadTexture(param_1,iVar10 + 0x3cc,lVar4,uVar15,1,iVar16,0,0);
      }
      else {
        Res_UploadTexture(param_1,iVar10 + 0x3cc,lVar4,uVar15,1,iVar16,0,iVar13 + 0x4f8);
      }
      CarAsset_UploadPaletteDefault(param_1,uVar11);
      uVar5 = Gut_PackGetEntry(uVar1,4,1);
      Res_UploadTexture(param_1,iVar10 + 0x458,uVar5,uVar15,1,iVar16,0,0);
    }
    uVar7 = uRam0036f2d8;
    uRam0036f2d8 = uVar12;
  }
  uVar11 = uRam0036f2d4 + 1;
  uRam0036f2d8 = uVar7;
  if (uVar11 <= uVar7) {
    do {
      if ((cRam00436478 != '\x01') || ((uVar11 != 0 && (1 < uVar11 - 2)))) {
        if (uVar11 - 2 < 2) {
          *(undefined4 *)(param_1 + uVar11 * 100 + 0xa4) = *(undefined4 *)(param_1 + 0x108);
        }
        if (uVar11 - 2 < 2) {
          *(undefined4 *)(param_1 + uVar11 * 100 + 0xdc) = *(undefined4 *)(param_1 + 0x140);
        }
        if (1 < uVar11) {
          uVar12 = 7;
          iVar10 = param_1 + uVar11 * 100 + 0x1c;
          iVar13 = param_1 + 0x1c;
          do {
            uVar12 = uVar12 + 5;
            *(undefined4 *)(iVar10 + 0x98) = *(undefined4 *)(iVar13 + 0xfc);
            *(undefined4 *)(iVar10 + 0x9c) = *(undefined4 *)(iVar13 + 0x100);
            *(undefined4 *)(iVar10 + 0xa0) = *(undefined4 *)(iVar13 + 0x104);
            *(undefined4 *)(iVar10 + 0xa4) = *(undefined4 *)(iVar13 + 0x108);
            *(undefined4 *)(iVar10 + 0xa8) = *(undefined4 *)(iVar13 + 0x10c);
            iVar13 = iVar13 + 0x14;
            iVar10 = iVar10 + 0x14;
          } while (uVar12 < 0x11);
        }
        if (1 < uVar11) {
          iVar13 = param_1 + uVar11 * 100;
          *(undefined4 *)(iVar13 + 0xf4) = *(undefined4 *)(param_1 + 0x158);
          *(undefined4 *)(iVar13 + 0xf8) = *(undefined4 *)(param_1 + 0x15c);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 <= uVar7);
  }
  uVar11 = 0;
  iStack_20 = 0;
  iStack_30 = param_1;
  do {
    uVar7 = 0;
    iVar13 = iStack_30;
    do {
      uVar14 = 0;
      uVar12 = 0;
      iVar10 = iVar13;
      iVar9 = iStack_20;
      do {
        lVar4 = CarAsset_CopyPartModel(param_1,iVar10 + 0x5b0,uVar3,iVar9 + 0x39 + uVar7,0,0);
        if (lVar4 != 0) {
          uVar14 = uVar14 | 1 << (uVar12 & 0x1f);
        }
        uVar12 = uVar12 + 1;
        iVar9 = iVar9 + 4;
        iVar10 = iVar10 + 0x10;
      } while (uVar12 < 3);
      uVar7 = uVar7 + 1;
      *(uint *)(iVar13 + 0x5a0) = uVar14;
      iVar13 = iVar13 + 0x40;
    } while (uVar7 < 4);
    uVar11 = uVar11 + 1;
    iStack_20 = iStack_20 + 0xc;
    iStack_30 = iStack_30 + 0x100;
  } while (uVar11 < 7);
  uVar11 = 0;
  iVar13 = param_1;
  do {
    CarAsset_RelocatePart(param_1,uVar11 & 0xff,iVar13 + 0x4c);
    uVar11 = uVar11 + 1;
    iVar13 = iVar13 + 8;
  } while (uVar11 < 6);
  CarAsset_SelectLod(param_1,*(undefined4 *)(param_1 + 0x2c));
  if (uRam0036f2d4 <= uRam0036f2d8) {
    iVar10 = param_1 + uRam0036f2d4 * 8;
    iVar13 = param_1 + uRam0036f2d4 * 100;
    uVar11 = uRam0036f2d4;
    do {
      uVar7 = 0;
      iVar9 = iVar10;
      iVar16 = iVar13;
      do {
        if (*(int *)(iVar16 + 0xd4) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = Res_GetSubResource(param_1,*(int *)(iVar16 + 0xd4),0);
        }
        *(undefined4 *)(iVar9 + 0x28c) = uVar1;
        uVar7 = uVar7 + 1;
        iVar16 = iVar16 + 4;
        iVar9 = iVar9 + 4;
      } while (uVar7 < 2);
      uVar11 = uVar11 + 1;
      iVar13 = iVar13 + 100;
      iVar10 = iVar10 + 8;
    } while (uVar11 <= uRam0036f2d8);
  }
  uVar11 = 0;
  iVar10 = 0x8d;
  iVar13 = param_1;
  do {
    uVar7 = 0;
    iVar9 = iVar13;
    do {
      CarAsset_CopyPartModel(param_1,iVar9 + 0x510,uVar3,uVar7 + iVar10,0,0);
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 0x10;
    } while (uVar7 < 2);
    uVar11 = uVar11 + 1;
    iVar10 = iVar10 + 2;
    iVar13 = iVar13 + 0x20;
  } while (uVar11 < 2);
  uVar11 = 0;
  iVar13 = param_1;
  do {
    if (*(byte *)(param_1 + 0x38) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)(*(byte *)(param_1 + 0x38) >> 1);
    }
    CarAsset_CopyPartModel
              (param_1,iVar13 + 0x550,uVar3,uVar11 + uVar7 * 4 + 0x25,1 << (uVar11 & 0x1f),0);
    uVar11 = uVar11 + 1;
    iVar13 = iVar13 + 0x10;
  } while (uVar11 < 4);
  lVar4 = Res_GetModelSize(param_1,uVar3,0xf);
  if (lVar4 != 0) {
    puVar2 = (uint *)lVar4;
    if ((*puVar2 & 0x10) == 0) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = puVar2 + 0x14;
    }
    if (puVar8 != (uint *)0x0) {
      *(float *)(param_1 + 0x590) = (float)puVar2[8] + ((float)puVar8[4] + (float)puVar8[8]) / 2.0;
      *(float *)(param_1 + 0x594) = (float)puVar2[9] + ((float)puVar8[5] + (float)puVar8[9]) / 2.0;
      *(float *)(param_1 + 0x598) = (float)puVar2[10] + ((float)puVar8[6] + (float)puVar8[10]) / 2.0
      ;
      *(undefined4 *)(param_1 + 0x59c) = 0x3f800000;
    }
  }
  puVar2 = *(uint **)(uRam0036f2d4 * 100 + param_1 + 0xe4);
  if ((*puVar2 & 0x10) == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = puVar2 + 0x14;
  }
  *(float *)(param_1 + 0xca0) = ((float)puVar2[4] + (float)puVar2[8]) / 2.0;
  *(float *)(param_1 + 0xca4) = ((float)puVar2[5] + (float)puVar2[9]) / 2.0;
  *(float *)(param_1 + 0xca8) = ((float)puVar2[6] + (float)puVar2[10]) / 2.0;
  *(undefined4 *)(param_1 + 0xcac) = 0x3f800000;
  puVar2 = *(uint **)(uRam0036f2d4 * 100 + param_1 + 0xe4);
  if ((*puVar2 & 0x10) == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = puVar2 + 0x14;
  }
  *(float *)(param_1 + 0xcb0) = ((float)puVar2[10] - (float)puVar2[6]) * 1.1;
  return;
}

// 0x001aee30  size 0x74
void CarAsset_OnLoaded(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  Course_ClearCount(param_4);
  if ((cRam00436478 != '\x02') && (lVar1 = Course_GetField_24(param_4), lVar1 == 0)) {
    Arena_Alloc(param_4,*(undefined4 *)((int)param_4 + 0x94));
  }
  CarAsset_Build(param_4,param_2);
  *(undefined4 *)((int)param_4 + 8) = 0;
  return;
}

// 0x001aeeb0  size 0x1d0
undefined8 CarAsset_Load(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 unaff_s8;
  
  iVar1 = 0;
  lVar3 = Course_GetField_24();
  if (lVar3 != 0) {
    iVar1 = Course_GetField_24(param_1);
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  iVar9 = (int)param_1;
  if (cRam00436478 == '\x02') {
    iVar4 = iRam0043647c;
  }
  else {
    iVar4 = *(int *)(iVar9 + 0x20);
  }
  iVar10 = 0;
  *(undefined4 *)(iVar9 + 8) = 1;
  iVar6 = iRam0036f2d4;
  iVar2 = *(int *)(iVar9 + 0xc) * 5;
  uVar11 = iRam0036f2d8 + iVar2;
  uVar7 = iRam0036f2d4 + iVar2;
  *(undefined4 *)(iVar9 + 0x94) = 0;
  for (; uVar7 <= uVar11; uVar7 = uVar7 + 1) {
    if ((cRam00436478 != '\x01') || ((iVar6 != 0 && (1 < iVar6 - 2U)))) {
      iVar2 = Arc_GetFileSize(uVar7 + 0xff,uVar7 + 0xff,1);
      if (iVar1 == 0) {
        if (uVar7 == uVar11) {
          uVar5 = 0x1aee30;
        }
        else {
          uVar5 = 0;
        }
        unaff_s8 = Arc_LoadFileEx(uVar7 + 0xff,iVar4,uVar5,param_1,0,0);
        iVar8 = iVar4 + iVar2;
      }
      else {
        if (uVar7 == uVar11) {
          uVar5 = 0x1aee30;
        }
        else {
          uVar5 = 0;
        }
        unaff_s8 = Arc_LoadFile(uVar7 + 0xff,iVar1,uVar5,param_1);
        iVar8 = iVar4;
        iVar4 = iVar1;
        iVar1 = iVar1 + iVar2;
      }
      *(int *)(iVar9 + (iRam0036f2d4 + iVar10) * 4 + 0x80) = iVar4;
      *(int *)(iVar9 + 0x94) = *(int *)(iVar9 + 0x94) + iVar2;
      iVar4 = iVar8;
    }
    iVar10 = iVar10 + 1;
    iVar6 = iVar6 + 1;
  }
  return unaff_s8;
}

// 0x001af080  size 0x14c
void DriverAsset_Clear(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  Mem_Set16(param_1,0,0x50);
  puVar3 = (undefined4 *)param_1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 1;
  *(undefined1 *)(puVar3 + 3) = 0;
  *(undefined1 *)((int)puVar3 + 0xd) = 0;
  *(undefined1 *)((int)puVar3 + 0xe) = 0;
  *(undefined1 *)((int)puVar3 + 0xf) = 0;
  uVar1 = 0;
  do {
    *(undefined1 *)((int)puVar3 + uVar1 + 0x10) = 0;
    uVar2 = uVar1 + 8;
    *(undefined1 *)((int)puVar3 + uVar1 + 0x11) = 0;
    *(undefined1 *)((int)puVar3 + uVar1 + 0x12) = 0;
    *(undefined1 *)((int)puVar3 + uVar1 + 0x13) = 0;
    *(undefined1 *)((int)puVar3 + uVar1 + 0x14) = 0;
    *(undefined1 *)((int)puVar3 + uVar1 + 0x15) = 0;
    *(undefined1 *)((int)puVar3 + uVar1 + 0x16) = 0;
    *(undefined1 *)((int)puVar3 + uVar1 + 0x17) = 0;
    uVar1 = uVar2;
  } while (uVar2 < 0x10);
  *(undefined1 *)((int)puVar3 + 0x22) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x21) = 0x80;
  *(undefined1 *)(puVar3 + 8) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x25) = 0x80;
  *(undefined1 *)(puVar3 + 9) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x23) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x26) = 0xfe;
  *(undefined1 *)((int)puVar3 + 0x27) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x2a) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x29) = 0x80;
  *(undefined1 *)(puVar3 + 10) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x2d) = 0x80;
  *(undefined1 *)(puVar3 + 0xb) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x2b) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x2e) = 0xfe;
  *(undefined1 *)((int)puVar3 + 0x2f) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x32) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x31) = 0x80;
  *(undefined1 *)(puVar3 + 0xc) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x35) = 0x80;
  *(undefined1 *)(puVar3 + 0xd) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x33) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x36) = 0xfe;
  *(undefined1 *)((int)puVar3 + 0x37) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x3a) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x39) = 0x80;
  *(undefined1 *)(puVar3 + 0xe) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x3d) = 0x80;
  *(undefined1 *)(puVar3 + 0xf) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x3b) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x3e) = 0xfe;
  *(undefined1 *)((int)puVar3 + 0x3f) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x42) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x41) = 0x80;
  *(undefined1 *)(puVar3 + 0x10) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x45) = 0x80;
  *(undefined1 *)(puVar3 + 0x11) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x43) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x46) = 0xfe;
  *(undefined1 *)((int)puVar3 + 0x47) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x4a) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x49) = 0x80;
  *(undefined1 *)(puVar3 + 0x12) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x4d) = 0x80;
  *(undefined1 *)(puVar3 + 0x13) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x4b) = 0x80;
  *(undefined1 *)((int)puVar3 + 0x4e) = 0xfe;
  *(undefined1 *)((int)puVar3 + 0x4f) = 0xff;
  return;
}

// 0x001af1d0  size 0x10
void DriverAsset_SetFace(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x29) = param_2;
  DriverAsset_ApplyFace(param_1,uRam00436340);
  return;
}

// 0x001af1e0  size 0x208
void DriverAsset_ApplyFace(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Model_GetTexture(uRam00436350,*(undefined1 *)(param_1 + 0x29));
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,*(byte *)(param_1 + 0x29) + 4);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,*(byte *)(param_1 + 0x29) + 8);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,*(byte *)(param_1 + 0x29) + 8);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,*(undefined1 *)(param_1 + 0x29));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,*(byte *)(param_1 + 0x29) + 4);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,*(byte *)(param_1 + 0x29) + 0xc);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,*(byte *)(param_1 + 0x29) + 0xc);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,3);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,7);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x13);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x13);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x88);
  uVar1 = Model_GetTexture(uRam00436350,0x14);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x15);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x16);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x16);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x14);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x15);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x16);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = Model_GetTexture(uRam00436350,0x16);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  return;
}

// 0x001af3f0  size 0x1bc
void DriverAsset_Setup(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = Gut_PackGetEntry(param_2,0,0);
  uRam00436350 = (undefined4)uVar1;
  Model_Relocate(uVar1);
  iVar2 = iRam0036f2ec + iRam0036f2c0;
  uVar1 = Gut_PackGetEntry(param_2,1,0);
  Res_UploadTexture(0x436320,0x436354,uVar1,0,1,iVar2,0,0);
  iVar2 = iRam0036f2ec + iRam0036f2c0;
  uVar1 = Gut_PackGetEntry(param_2,2,0);
  Res_UploadTexture(0x436320,0x436370,uVar1,0,0,iVar2,0,0);
  iVar2 = iRam0036f2ec + iRam0036f2c0;
  uVar1 = Gut_PackGetEntry(param_2,3,0);
  Res_UploadTexture(0x436320,0x43638c,uVar1,0,0,iVar2,0,0);
  iVar2 = iRam0036f2ec + iRam0036f2c0;
  uVar1 = Gut_PackGetEntry(param_2,4,0);
  Res_UploadTexture(0x436320,0x4363a8,uVar1,0,0,iVar2,0,0);
  iVar2 = iRam0036f2ec + iRam0036f2c0;
  uVar1 = Gut_PackGetEntry(param_2,5,0);
  Res_UploadTexture(0x436320,0x4363c4,uVar1,0,0,iVar2,0,0);
  uRam0043634c = 1;
  return;
}

// 0x001af5b0  size 0x9c
void DriverAsset_OnLoaded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  Course_ClearCount(param_4);
  iVar2 = (int)param_4;
  if (*(int *)(iVar2 + 0x2c) == 0) {
    iVar1 = *(int *)(iVar2 + 0x2c);
  }
  else {
    Course_ClearCount(0x436320);
    Arena_Alloc(0x436320,param_3);
    iVar1 = *(int *)(iVar2 + 0x2c);
  }
  if (iVar1 != 0) {
    DriverAsset_Setup(param_4,param_2);
  }
  DriverAsset_ApplyFace(param_4,param_2);
  *(undefined4 *)(iVar2 + 8) = 0;
  return;
}

// 0x001af650  size 0x9c
void DriverAsset_Load(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)param_1;
  if (iRam00436348 == 0) {
    iRam00436348 = 1;
    *(undefined4 *)(iVar3 + 0x2c) = 1;
    iVar1 = iRam00436340;
  }
  else {
    iVar2 = iRam00436340;
    iVar1 = 0;
  }
  *(undefined4 *)(iVar3 + 8) = 1;
  if (iVar2 == 0) {
    Arc_LoadFileEx(*(int *)(iVar3 + 0xc) + 0xfe,iVar1,0x1af5b0,param_1,0,0);
  }
  else {
    Arc_LoadFile(*(int *)(iVar3 + 0xc) + 0xfe,iVar2,0x1af5b0);
  }
  return;
}

// 0x001af6f0  size 0x30
void DriverAsset_ClearFlag(undefined8 param_1)

{
  Mem_Set16(param_1,0,1);
  *(undefined1 *)param_1 = 0;
  return;
}

// 0x001af720  size 0x17c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Rival_CountActive(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  if ((iVar1 == -1) && (*(int *)(param_1 + 0x44) == -1)) {
    uVar2 = 2;
  }
  else if ((iVar1 != -1) && (*(int *)(param_1 + 0x44) == -1)) {
    iVar5 = 0;
    iVar4 = 0;
    iVar3 = *_g_Profiles;
    do {
      if (*(int *)(iVar3 + 0x2b14) != -1) {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x28);
    if (iVar1 <= iVar5) {
      uVar2 = 1;
    }
  }
  if ((iVar1 == -1) && (*(int *)(param_1 + 0x44) != -1)) {
    iVar5 = 0;
    iVar4 = 0;
    iVar3 = *_g_Profiles;
    do {
      if (*(int *)(iVar3 + 0x2a74) != -1) {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x14);
    if (*(int *)(param_1 + 0x44) <= iVar5) {
      uVar2 = 1;
    }
  }
  if ((iVar1 != -1) && (*(int *)(param_1 + 0x44) != -1)) {
    iVar6 = 0;
    iVar5 = 0;
    iVar3 = *_g_Profiles;
    iVar4 = iVar3;
    do {
      if (*(int *)(iVar4 + 0x2a74) != -1) {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 0x14);
    if (*(int *)(param_1 + 0x44) <= iVar6) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        if (*(int *)(iVar3 + 0x2b14) != -1) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 0x28);
      if (iVar1 <= iVar5) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

// 0x001af8a0  size 0x36c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Rival_PickEncounter(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  iVar2 = *_g_Profiles;
  sVar1 = *(short *)(iVar2 + 0x5308);
  iVar3 = (*(int *)(iVar2 + 0x2bd4) * 100) / 5000000;
  if (sVar1 < 0xfb) {
    if ((sVar1 < 0x97) || (0xfa < sVar1)) {
      if ((sVar1 < 0x65) || (0x96 < sVar1)) {
        if ((sVar1 < 0x33) || (100 < sVar1)) {
          iVar4 = 1;
        }
        else {
          iVar4 = 2;
        }
      }
      else {
        iVar4 = 3;
      }
    }
    else {
      iVar4 = 4;
    }
  }
  else {
    iVar4 = 5;
  }
  fVar6 = *(float *)(iVar2 + 0x2bb4);
  if (fVar6 <= 70.0) {
    if ((fVar6 <= 50.0) || (70.0 < fVar6)) {
      if ((fVar6 <= 40.0) || (50.0 < fVar6)) {
        if ((fVar6 <= 30.0) || (40.0 < fVar6)) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
      }
      else {
        iVar4 = iVar4 + 3;
      }
    }
    else {
      iVar4 = iVar4 + 4;
    }
  }
  else {
    iVar4 = iVar4 + 5;
  }
  fVar6 = *(float *)(iVar2 + 0x2bb8);
  if (fVar6 <= 150.0) {
    if ((fVar6 <= 140.0) || (150.0 < fVar6)) {
      if ((fVar6 <= 130.0) || (140.0 < fVar6)) {
        if ((fVar6 <= 120.0) || (130.0 < fVar6)) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
      }
      else {
        iVar4 = iVar4 + 3;
      }
    }
    else {
      iVar4 = iVar4 + 4;
    }
  }
  else {
    iVar4 = iVar4 + 5;
  }
  iVar2 = *(int *)(iVar2 + 0x2bc4);
  if (iVar2 < 0xe75) {
    if ((iVar2 < 0xdad) || (0xe74 < iVar2)) {
      if ((iVar2 < 0xbb9) || (0xdac < iVar2)) {
        if ((iVar2 < 0x9c5) || (3000 < iVar2)) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
      }
      else {
        iVar4 = iVar4 + 3;
      }
    }
    else {
      iVar4 = iVar4 + 4;
    }
  }
  else {
    iVar4 = iVar4 + 5;
  }
  if (iVar3 < 0x47) {
    if ((iVar3 < 0x3d) || (0x46 < iVar3)) {
      if ((iVar3 < 0x29) || (0x3c < iVar3)) {
        if ((iVar3 < 0x15) || (0x28 < iVar3)) {
          uVar5 = iVar4 + 1;
        }
        else {
          uVar5 = iVar4 + 2;
        }
      }
      else {
        uVar5 = iVar4 + 3;
      }
    }
    else {
      uVar5 = iVar4 + 4;
    }
  }
  else {
    uVar5 = iVar4 + 5;
  }
  if (uVar5 < 0x1a) {
    if (uVar5 < 5) {
      uVar5 = 5;
    }
  }
  else {
    uVar5 = 0x19;
  }
  return uVar5;
}

// 0x001afc10  size 0x864
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Rival_BuildEncounterList(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined2 uStack_4c0;
  short sStack_4be;
  byte bStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined1 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined1 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined2 uStack_488;
  undefined2 uStack_486;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 auStack_47c [23];
  undefined4 auStack_420 [23];
  undefined4 auStack_3c4 [16];
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined2 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined2 uStack_340;
  short sStack_33e;
  byte bStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined1 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined2 uStack_308;
  undefined2 uStack_306;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 auStack_2fc [23];
  undefined4 auStack_2a0 [23];
  undefined4 auStack_244 [16];
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined2 uStack_1c0;
  short sStack_1be;
  byte bStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 auStack_17c [23];
  undefined4 auStack_120 [23];
  undefined4 auStack_c4 [16];
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
  undefined2 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int aiStack_40 [4];
  int iStack_30;
  int iStack_24;
  int iStack_1c;
  
  iVar6 = 0;
  piVar4 = aiStack_40;
  iVar8 = 0;
  iVar10 = *_g_Profiles;
  iVar1 = *(int *)(iVar10 + 0x2bd8);
  do {
    *piVar4 = 0;
    iVar6 = iVar6 + 6;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4 = piVar4 + 6;
  } while (iVar6 < 7);
  iVar11 = 0;
  aiStack_40[iVar6] = 0;
  do {
    uVar3 = GameDb_GetRival((short)iVar11);
    memcpy(&uStack_4c0,uVar3,0x17c);
    puVar7 = auStack_47c;
    uStack_340 = uStack_4c0;
    uStack_338 = uStack_4b8;
    uStack_328 = uStack_4a8;
    puVar5 = auStack_2fc;
    uStack_324 = uStack_4a4;
    uStack_334 = uStack_4b4;
    uStack_330 = uStack_4b0;
    sStack_33e = sStack_4be;
    bStack_33c = bStack_4bc;
    iVar6 = 0x17;
    uStack_32c = uStack_4ac;
    uStack_320 = uStack_4a0;
    uStack_31c = uStack_49c;
    uStack_318 = uStack_498;
    uStack_314 = uStack_494;
    uStack_310 = uStack_490;
    uStack_30c = uStack_48c;
    uStack_308 = uStack_488;
    uStack_306 = uStack_486;
    uStack_304 = uStack_484;
    uStack_300 = uStack_480;
    do {
      iVar6 = iVar6 + -1;
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (0 < iVar6);
    iVar6 = 0x17;
    puVar7 = auStack_420;
    puVar5 = auStack_2a0;
    do {
      iVar6 = iVar6 + -1;
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (0 < iVar6);
    iVar6 = 8;
    puVar7 = auStack_3c4;
    puVar5 = auStack_244;
    do {
      iVar6 = iVar6 + -1;
      uVar2 = puVar7[1];
      *puVar5 = *puVar7;
      puVar5[1] = uVar2;
      puVar7 = puVar7 + 2;
      puVar5 = puVar5 + 2;
    } while (0 < iVar6);
    uStack_1f0 = uStack_370;
    uStack_200 = uStack_380;
    uStack_1fc = uStack_37c;
    uStack_1f8 = uStack_378;
    uStack_1f4 = uStack_374;
    uStack_1ec = uStack_36c;
    uStack_1e8 = uStack_368;
    uStack_1e4 = uStack_364;
    uStack_1e0 = uStack_360;
    uStack_1dc = uStack_35c;
    uStack_204 = uStack_384;
    uStack_1d8 = uStack_358;
    uStack_1d4 = uStack_354;
    uStack_1d0 = uStack_350;
    uStack_1cc = uStack_34c;
    uStack_1c0 = uStack_4c0;
    uStack_1c8 = uStack_348;
    sStack_1be = sStack_4be;
    bStack_1bc = bStack_4bc;
    uStack_1b8 = uStack_4b8;
    uStack_1b4 = uStack_4b4;
    uStack_1a8 = uStack_4a8;
    puVar7 = auStack_2fc;
    uStack_1b0 = uStack_4b0;
    uStack_1a4 = uStack_4a4;
    uStack_1ac = uStack_4ac;
    iVar6 = 0x17;
    uStack_1a0 = uStack_4a0;
    uStack_19c = uStack_49c;
    puVar5 = auStack_17c;
    uStack_198 = uStack_498;
    uStack_194 = uStack_494;
    uStack_190 = uStack_490;
    uStack_18c = uStack_48c;
    uStack_188 = uStack_488;
    uStack_186 = uStack_486;
    uStack_184 = uStack_484;
    uStack_180 = uStack_480;
    do {
      iVar6 = iVar6 + -1;
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (0 < iVar6);
    iVar6 = 0x17;
    puVar7 = auStack_2a0;
    puVar5 = auStack_120;
    do {
      iVar6 = iVar6 + -1;
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (0 < iVar6);
    iVar6 = 8;
    puVar7 = auStack_244;
    puVar5 = auStack_c4;
    do {
      iVar6 = iVar6 + -1;
      uVar2 = puVar7[1];
      *puVar5 = *puVar7;
      puVar5[1] = uVar2;
      puVar7 = puVar7 + 2;
      puVar5 = puVar5 + 2;
    } while (0 < iVar6);
    uStack_78 = uStack_378;
    uStack_74 = uStack_374;
    uStack_70 = uStack_370;
    uStack_6c = uStack_36c;
    uStack_80 = uStack_380;
    uStack_7c = uStack_37c;
    uStack_68 = uStack_368;
    uStack_64 = uStack_364;
    uStack_60 = uStack_360;
    uStack_84 = uStack_384;
    uStack_58 = uStack_358;
    uStack_54 = uStack_354;
    uStack_50 = uStack_350;
    uStack_4c = uStack_34c;
    uStack_48 = uStack_348;
    uStack_5c = uStack_35c;
    if (sStack_4be == -1) break;
    if (0 < *(short *)(iVar10 + 0x3fc4)) {
      aiStack_40[bStack_4bc] = aiStack_40[bStack_4bc] + 1;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 2;
  } while (iVar11 < 500);
  if (iStack_1c < 7) {
    if ((iStack_1c < 4) || (6 < iStack_1c)) {
      if ((iStack_1c < 2) || (3 < iStack_1c)) {
        if (iStack_1c == 1) {
          iVar8 = 1;
        }
      }
      else {
        iVar8 = 2;
      }
    }
    else {
      iVar8 = 3;
    }
  }
  else {
    iVar8 = 4;
  }
  if (aiStack_40[3] < 0x33) {
    if ((aiStack_40[3] < 0x1d) || (0x32 < aiStack_40[3])) {
      if ((aiStack_40[3] < 0xb) || (0x1c < aiStack_40[3])) {
        if ((0 < aiStack_40[3]) && (aiStack_40[3] < 0xb)) {
          iVar8 = iVar8 + 1;
        }
      }
      else {
        iVar8 = iVar8 + 2;
      }
    }
    else {
      iVar8 = iVar8 + 3;
    }
  }
  else {
    iVar8 = iVar8 + 4;
  }
  if (iStack_24 < 0x10) {
    if ((iStack_24 < 0xd) || (0xf < iStack_24)) {
      if ((iStack_24 < 4) || (0xc < iStack_24)) {
        if ((0 < iStack_24) && (iStack_24 < 4)) {
          iVar8 = iVar8 + 1;
        }
      }
      else {
        iVar8 = iVar8 + 2;
      }
    }
    else {
      iVar8 = iVar8 + 3;
    }
  }
  else {
    iVar8 = iVar8 + 4;
  }
  if (aiStack_40[3] < 0x20) {
    if ((aiStack_40[3] < 0x14) || (0x1f < aiStack_40[3])) {
      if ((aiStack_40[3] < 6) || (0x13 < aiStack_40[3])) {
        if ((0 < aiStack_40[3]) && (aiStack_40[3] < 6)) {
          iVar8 = iVar8 + 1;
        }
      }
      else {
        iVar8 = iVar8 + 2;
      }
    }
    else {
      iVar8 = iVar8 + 3;
    }
  }
  else {
    iVar8 = iVar8 + 4;
  }
  if (iStack_30 < 0x11) {
    if ((iStack_30 < 0xd) || (0x10 < iStack_30)) {
      if ((iStack_30 < 6) || (0xc < iStack_30)) {
        if ((0 < iStack_30) && (iStack_30 < 6)) {
          iVar8 = iVar8 + 1;
        }
      }
      else {
        iVar8 = iVar8 + 2;
      }
    }
    else {
      iVar8 = iVar8 + 3;
    }
  }
  else {
    iVar8 = iVar8 + 4;
  }
  if (iVar1 < 0xd) {
    if ((iVar1 < 10) || (0xc < iVar1)) {
      if ((iVar1 < 7) || (9 < iVar1)) {
        if ((iVar1 < 4) || (6 < iVar1)) {
          uVar9 = iVar8 + 1;
        }
        else {
          uVar9 = iVar8 + 2;
        }
      }
      else {
        uVar9 = iVar8 + 3;
      }
    }
    else {
      uVar9 = iVar8 + 4;
    }
  }
  else {
    uVar9 = iVar8 + 5;
  }
  if (uVar9 < 0x1a) {
    if (uVar9 == 0) {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 0x19;
  }
  return uVar9;
}

