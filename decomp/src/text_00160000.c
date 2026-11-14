// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00160000 - 0x00164000
#include "ghidra_types.h"

// 0x001602e0  size 0x514
void PhysPair_SphereBoxSat(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  uVar4 = PhysShape_GetBody(*param_1);
  uVar5 = PhysShape_GetBody(param_1[1]);
  Vec3_Scale(param_1[0x14],auStack_10,param_1 + 0x10);
  bVar1 = false;
  uStack_14 = 0x3f800000;
  while( true ) {
    uVar9 = 0;
    uStack_24 = 0x3f800000;
    fVar14 = 100000.0;
    piVar11 = (int *)uVar4;
    fVar15 = 0.0;
    lVar6 = (**(code **)(*piVar11 + 0x44))(uVar4);
    if (lVar6 != 0) {
      do {
        uVar7 = (**(code **)(*piVar11 + 0x4c))(uVar4,uVar9);
        uVar7 = (**(code **)(*piVar11 + 0x38))(uVar4,uVar7);
        Vec3_Add(auStack_40,uVar7,auStack_10);
        uVar7 = (**(code **)(*piVar11 + 0x50))(uVar4,uVar9);
        uVar7 = (**(code **)(*piVar11 + 0x38))(uVar4,uVar7);
        Vec3_Add(auStack_50,uVar7,auStack_10);
        piVar10 = (int *)uVar5;
        lVar6 = (**(code **)(*piVar10 + 0x24))(uVar5,auStack_60,auStack_40,auStack_50);
        if (lVar6 != 0) {
          uVar8 = 0;
          lVar6 = (**(code **)(*piVar10 + 0x44))(uVar5);
          if (lVar6 != 0) {
            do {
              uVar7 = (**(code **)(*piVar10 + 0x4c))(uVar5,uVar8);
              puVar2 = (undefined4 *)(**(code **)(*piVar10 + 0x38))(uVar5,uVar7);
              uStack_70 = *puVar2;
              uStack_6c = puVar2[1];
              uStack_68 = puVar2[2];
              uStack_64 = puVar2[3];
              uVar7 = (**(code **)(*piVar10 + 0x50))(uVar5,uVar8);
              puVar2 = (undefined4 *)(**(code **)(*piVar10 + 0x38))(uVar5,uVar7);
              uStack_80 = *puVar2;
              uStack_7c = puVar2[1];
              uStack_78 = puVar2[2];
              uStack_74 = puVar2[3];
              lVar6 = (**(code **)(*piVar11 + 0x24))(uVar4,auStack_60,&uStack_70,&uStack_80);
              if (lVar6 != 0) {
                Vec3_Sub(auStack_90,auStack_50,auStack_40);
                Vec3_Sub(auStack_a0,&uStack_80,&uStack_70);
                phys_sub_00163800(&fStack_b0,auStack_90,auStack_a0);
                if (fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac != 0.0) {
                  phys_sub_00163bc0(&fStack_b0);
                  uVar7 = (**(code **)(*piVar10 + 0x48))(uVar5,uVar8);
                  fVar12 = (float)Vec3_Dot(&fStack_b0,uVar7);
                  if (0.0 < fVar12) {
                    Vec3_Scale(0xbf800000,&fStack_c0,&fStack_b0);
                    fStack_b0 = fStack_c0;
                    fStack_ac = fStack_bc;
                    fStack_a8 = fStack_b8;
                    uStack_a4 = uStack_b4;
                  }
                  Vec3_Sub(auStack_d0,&uStack_70,auStack_40);
                  fVar12 = (float)Vec3_Dot(auStack_d0,&fStack_b0);
                  uVar7 = newlib_sub_0012f600(fVar12);
                  lVar6 = msl_sub_00100960(uVar7,0x3f50624dd2f1a9fc);
                  if (((lVar6 == 0) &&
                      (fVar13 = (float)Vec3_Dot(param_1 + 0x18,&fStack_b0), 0.0 < fVar13)) &&
                     (fVar13 = fVar12 / fVar13, fVar13 < fVar14)) {
                    fStack_30 = fStack_b0;
                    fStack_2c = fStack_ac;
                    fStack_28 = fStack_a8;
                    uStack_24 = uStack_a4;
                    phys_sub_001637a0((fStack_58 + fStack_54) / 2.0,&uStack_e0,&uStack_70,&uStack_80
                                     );
                    uStack_20 = uStack_e0;
                    uStack_1c = uStack_dc;
                    uStack_18 = uStack_d8;
                    uStack_14 = uStack_d4;
                    fVar14 = fVar13;
                    fVar15 = fVar12;
                  }
                }
              }
              uVar8 = uVar8 + 1;
              uVar3 = (**(code **)(*piVar10 + 0x44))(uVar5);
            } while (uVar8 < uVar3);
          }
        }
        uVar9 = uVar9 + 1;
        uVar8 = (**(code **)(*piVar11 + 0x44))(uVar4);
      } while (uVar9 < uVar8);
    }
    if (fVar15 <= 0.0) break;
    bVar1 = true;
    Vec3_Scale(fVar15,auStack_f0,&fStack_30);
    Vec3_AddInPlace(auStack_10,auStack_f0);
  }
  if (bVar1) {
    fVar14 = (float)Vec3_Length(auStack_10);
    Vec3_Scale(1.0 / fVar14,auStack_100,auStack_10);
    PhysContact_Fill(fVar14,0,param_1 + 8,&uStack_20,auStack_100);
  }
  return;
}

// 0x00160800  size 0xa4
void PhysPair_RunSphereBox(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  PhysPair_SphereSphereContacts();
  puVar2 = (undefined4 *)param_1;
  Vec3_ScaleInPlace(0xbf800000,puVar2 + 0x18);
  PhysContact_FlipNormal(puVar2 + 8);
  uVar1 = *puVar2;
  *puVar2 = puVar2[1];
  puVar2[1] = uVar1;
  uVar1 = puVar2[3];
  puVar2[3] = puVar2[5];
  puVar2[5] = uVar1;
  PhysPair_SphereSphereContacts(param_1);
  Vec3_ScaleInPlace(0xbf800000,puVar2 + 0x18);
  PhysContact_FlipNormal(puVar2 + 8);
  uVar1 = *puVar2;
  *puVar2 = puVar2[1];
  puVar2[1] = uVar1;
  uVar1 = puVar2[3];
  puVar2[3] = puVar2[5];
  puVar2[5] = uVar1;
  PhysPair_SphereBoxSat(param_1);
  return;
}

// 0x001608b0  size 0x188
void PhysPair_SphereTriangle(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
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
  
  uVar1 = PhysShape_GetBody(*param_1);
  uVar2 = PhysShape_GetBody(param_1[1]);
  uVar3 = PhysShape_GetCenter(uVar1);
  uVar4 = PhysShape_GetCenter(uVar2);
  Vec3_Sub(&fStack_10,uVar3,uVar4);
  fVar7 = fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c;
  fVar5 = (float)PhysShape_GetType(uVar1);
  fVar6 = (float)PhysShape_GetType(uVar2);
  fVar5 = fVar5 + fVar6;
  if (fVar7 <= fVar5 * fVar5) {
    fVar7 = SQRT(fVar7);
    uStack_14 = 0x3f800000;
    if (fVar7 < 0.001) {
      uStack_18 = 0x3f800000;
      uStack_20 = 0;
      uStack_1c = 0;
    }
    else {
      Vec3_Scale(1.0 / fVar7,&uStack_30,&fStack_10);
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      uStack_18 = uStack_28;
      uStack_14 = uStack_24;
    }
    uVar1 = PhysShape_GetCenter(uVar1);
    uVar2 = PhysShape_GetCenter(uVar2);
    Vec3_Add(auStack_50,uVar1,uVar2);
    Vec3_Scale(0x3f000000,auStack_40,auStack_50);
    PhysContact_Fill(fVar5 - fVar7,0,param_1 + 8,auStack_40,&uStack_20);
  }
  return;
}

// 0x00160a40  size 0x9c
void PhysPair_RunBoxPlane(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  PhysPair_BoxPlaneContactsEx();
  puVar2 = (undefined4 *)param_1;
  PhysContact_FlipNormal(puVar2 + 8);
  uVar1 = *puVar2;
  *puVar2 = puVar2[1];
  puVar2[1] = uVar1;
  uVar1 = puVar2[3];
  puVar2[3] = puVar2[5];
  puVar2[5] = uVar1;
  uVar1 = puVar2[2];
  puVar2[2] = puVar2[4];
  puVar2[4] = uVar1;
  PhysPair_BoxPlaneContactsEx(param_1);
  PhysContact_FlipNormal(puVar2 + 8);
  uVar1 = *puVar2;
  *puVar2 = puVar2[1];
  puVar2[1] = uVar1;
  uVar1 = puVar2[3];
  puVar2[3] = puVar2[5];
  puVar2[5] = uVar1;
  uVar1 = puVar2[2];
  puVar2[2] = puVar2[4];
  puVar2[4] = uVar1;
  return;
}

// 0x00160ae0  size 0x5a8
void PhysPair_BoxPlaneContactsEx(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar11 = 0;
  iVar10 = 0;
  fVar15 = (float)param_1[0x15];
  do {
    iVar5 = param_1[4] + iVar11;
    iVar4 = param_1[5] + iVar11;
    pfVar9 = (float *)(iVar5 + 0x50);
    pfVar8 = (float *)(iVar4 + 0x50);
    if (((*(uint *)(iVar5 + 0x60) & *(uint *)(iVar4 + 0x60)) == 0) &&
       (uVar6 = *(uint *)(iVar5 + 0x60) & ~*(uint *)(iVar4 + 0x60), uVar6 != 0)) {
      uVar7 = 0;
      if ((uVar6 & 1) == 0) {
        if ((uVar6 & 2) != 0) {
          fVar14 = *(float *)(iVar5 + 0x58);
          fVar13 = *pfVar8 - *pfVar9;
          fVar12 = -(*pfVar9 + 1.0);
          fVar16 = *(float *)(iVar4 + 0x58);
          if (fVar12 < fVar15 * fVar13) {
            fVar12 = fVar12 / fVar13;
            fVar13 = (float)fabsf(fVar12 * (*(float *)(iVar4 + 0x54) - *(float *)(iVar5 + 0x54)) +
                                  *(float *)(iVar5 + 0x54) + 0.0);
            if ((fVar13 < 1.0) &&
               (fVar13 = (float)fabsf(fVar12 * (fVar16 - fVar14) + fVar14 + 0.0), fVar13 < 1.0)) {
              uVar7 = 3;
              fVar15 = fVar12;
            }
          }
        }
      }
      else {
        fVar14 = *(float *)(iVar5 + 0x58);
        fVar12 = *pfVar9 - 1.0;
        fVar13 = *pfVar9 - *pfVar8;
        fVar16 = *(float *)(iVar4 + 0x58);
        if (fVar12 < fVar15 * fVar13) {
          fVar12 = fVar12 / fVar13;
          fVar13 = (float)fabsf(fVar12 * (*(float *)(iVar4 + 0x54) - *(float *)(iVar5 + 0x54)) +
                                *(float *)(iVar5 + 0x54) + 0.0);
          if ((fVar13 < 1.0) &&
             (fVar13 = (float)fabsf(fVar12 * (fVar16 - fVar14) + fVar14 + 0.0), fVar13 < 1.0)) {
            fVar15 = fVar12;
          }
        }
      }
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 8) != 0) {
          fVar14 = *(float *)(iVar5 + 0x58);
          fVar13 = *(float *)(iVar4 + 0x54) - *(float *)(iVar5 + 0x54);
          fVar12 = -(*(float *)(iVar5 + 0x54) + 1.0);
          fVar16 = *(float *)(iVar4 + 0x58);
          if (fVar12 < fVar15 * fVar13) {
            fVar12 = fVar12 / fVar13;
            fVar13 = (float)fabsf(fVar12 * (*pfVar8 - *pfVar9) + *pfVar9 + 0.0);
            if ((fVar13 < 1.0) &&
               (fVar13 = (float)fabsf(fVar12 * (fVar16 - fVar14) + fVar14 + 0.0), fVar13 < 1.0)) {
              uVar7 = 4;
              fVar15 = fVar12;
            }
          }
        }
      }
      else {
        fVar14 = *(float *)(iVar5 + 0x58);
        fVar12 = *(float *)(iVar5 + 0x54) - 1.0;
        fVar13 = *(float *)(iVar5 + 0x54) - *(float *)(iVar4 + 0x54);
        fVar16 = *(float *)(iVar4 + 0x58);
        if (fVar12 < fVar15 * fVar13) {
          fVar12 = fVar12 / fVar13;
          fVar13 = (float)fabsf(fVar12 * (*pfVar8 - *pfVar9) + *pfVar9 + 0.0);
          if ((fVar13 < 1.0) &&
             (fVar13 = (float)fabsf(fVar12 * (fVar16 - fVar14) + fVar14 + 0.0), fVar13 < 1.0)) {
            uVar7 = 1;
            fVar15 = fVar12;
          }
        }
      }
      if ((uVar6 & 0x10) == 0) {
        if ((uVar6 & 0x20) != 0) {
          fVar14 = *(float *)(iVar5 + 0x54);
          fVar13 = *(float *)(iVar4 + 0x58) - *(float *)(iVar5 + 0x58);
          fVar12 = -(*(float *)(iVar5 + 0x58) + 1.0);
          fVar16 = *(float *)(iVar4 + 0x54);
          if (fVar12 < fVar15 * fVar13) {
            fVar12 = fVar12 / fVar13;
            fVar13 = (float)fabsf(fVar12 * (*pfVar8 - *pfVar9) + *pfVar9 + 0.0);
            if ((fVar13 < 1.0) &&
               (fVar13 = (float)fabsf(fVar12 * (fVar16 - fVar14) + fVar14 + 0.0), fVar13 < 1.0)) {
              uVar7 = 5;
              fVar15 = fVar12;
            }
          }
        }
      }
      else {
        fVar14 = *(float *)(iVar5 + 0x54);
        fVar13 = *(float *)(iVar5 + 0x58) - *(float *)(iVar4 + 0x58);
        fVar12 = *(float *)(iVar5 + 0x58) - 1.0;
        fVar16 = *(float *)(iVar4 + 0x54);
        if (fVar12 < fVar15 * fVar13) {
          fVar12 = fVar12 / fVar13;
          fVar13 = (float)fabsf(fVar12 * (*pfVar8 - *pfVar9) + *pfVar9 + 0.0);
          if ((fVar13 < 1.0) &&
             (fVar13 = (float)fabsf(fVar12 * (fVar16 - fVar14) + fVar14 + 0.0), fVar13 < 1.0)) {
            uVar7 = 2;
            fVar15 = fVar12;
          }
        }
      }
      if (fVar15 < (float)param_1[0x15]) {
        uVar1 = PhysContact_GetBodyB(*param_1);
        uVar2 = PhysContact_GetBodyB(param_1[1]);
        uVar3 = (**(code **)(*(int *)uVar1 + 0x38))(uVar1,iVar10);
        iVar4 = (**(code **)(*(int *)uVar2 + 0x40))(uVar2,uVar7);
        uVar1 = (**(code **)(*(int *)uVar1 + 0x38))(uVar1,iVar10);
        fVar12 = (float)PhysBox_PlaneDistance(uVar2,uVar7,uVar1);
        PhysContact_Fill(-fVar12,fVar15,param_1 + 8,uVar3,iVar4 + 0x10);
      }
    }
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + 0x20;
  } while (iVar10 < 8);
  return;
}

// 0x00161090  size 0x98
void PhysPair_RunBoxMesh(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  PhysContact_FlipNormal(puVar2 + 8);
  uVar1 = *puVar2;
  *puVar2 = puVar2[1];
  puVar2[1] = uVar1;
  uVar1 = puVar2[3];
  puVar2[3] = puVar2[5];
  puVar2[5] = uVar1;
  uVar1 = puVar2[2];
  puVar2[2] = puVar2[4];
  puVar2[4] = uVar1;
  PhysPair_BoxMeshContacts(param_1);
  PhysContact_FlipNormal(puVar2 + 8);
  uVar1 = *puVar2;
  *puVar2 = puVar2[1];
  puVar2[1] = uVar1;
  uVar1 = puVar2[3];
  puVar2[3] = puVar2[5];
  puVar2[5] = uVar1;
  uVar1 = puVar2[2];
  puVar2[2] = puVar2[4];
  puVar2[4] = uVar1;
  return;
}

// 0x00161130  size 0x384
void PhysPair_BoxMeshContacts(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float *pfVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_330 [16];
  float afStack_320 [200];
  
  uVar6 = PhysShape_GetOwner(*param_1);
  uVar7 = PhysShape_GetBody(*param_1);
  uVar8 = PhysShape_GetOwner(param_1[1]);
  uVar9 = PhysShape_GetBody(param_1[1]);
  piVar16 = (int *)uVar8;
  uVar14 = 0;
  lVar10 = (**(code **)(*piVar16 + 0x3c))(uVar8);
  piVar15 = (int *)uVar9;
  if (lVar10 != 0) {
    pfVar13 = afStack_320;
    do {
      uVar11 = PhysShape_GetCenter(uVar6);
      iVar2 = (**(code **)(*piVar16 + 0x40))(uVar8,uVar14);
      fVar17 = (float)Vec3_Dot(uVar11,iVar2 + 0x10);
      pfVar3 = (float *)(**(code **)(*piVar16 + 0x40))(uVar8,uVar14);
      fVar18 = *pfVar3;
      fVar19 = (float)PhysShape_GetType(uVar6);
      *pfVar13 = (fVar17 - fVar18) - fVar19;
      uVar11 = PhysShape_GetCenter(uVar7);
      iVar2 = (**(code **)(*piVar15 + 0x40))(uVar9,uVar14);
      fVar17 = (float)Vec3_Dot(uVar11,iVar2 + 0x10);
      pfVar3 = (float *)(**(code **)(*piVar15 + 0x40))(uVar9,uVar14);
      fVar18 = *pfVar3;
      fVar19 = (float)PhysShape_GetType(uVar7);
      pfVar13[1] = (fVar17 - fVar18) - fVar19;
      if ((0.0 < *pfVar13) && (0.0 < pfVar13[1])) {
        return;
      }
      pfVar13 = pfVar13 + 2;
      uVar14 = uVar14 + 1;
      uVar4 = (**(code **)(*piVar16 + 0x3c))(uVar8);
    } while (uVar14 < uVar4);
  }
  uVar14 = 0;
  lVar10 = (**(code **)(*piVar16 + 0x3c))(uVar8);
  if (lVar10 != 0) {
    pfVar13 = afStack_320;
    do {
      if ((pfVar13[1] <= 0.0) && (fVar17 = (float)fabsf(*pfVar13 - pfVar13[1]), 1e-05 <= fVar17)) {
        bVar1 = true;
        uVar4 = 0;
        fVar17 = *pfVar13 / (*pfVar13 - pfVar13[1]);
        lVar10 = (**(code **)(*piVar16 + 0x3c))(uVar8);
        if (lVar10 != 0) {
          do {
            if ((uVar14 != uVar4) &&
               (fVar18 = (float)phys_sub_00163780(fVar17,*pfVar13,pfVar13[1]), 0.0 < fVar18)) {
              bVar1 = false;
            }
            uVar4 = uVar4 + 1;
            uVar5 = (**(code **)(*piVar16 + 0x3c))(uVar8);
          } while (uVar4 < uVar5);
        }
        if ((((bVar1) && (fVar17 < 1.0)) && (fVar17 < (float)param_1[0x15])) && (-1.0 < fVar17)) {
          uVar11 = PhysShape_GetCenter(uVar6);
          uVar12 = PhysShape_GetCenter(uVar7);
          phys_sub_001637a0(fVar17,auStack_330,uVar11,uVar12);
          iVar2 = (**(code **)(*piVar15 + 0x40))(uVar9,uVar14);
          PhysContact_Fill(-pfVar13[1],fVar17,param_1 + 8,auStack_330,iVar2 + 0x10);
        }
      }
      pfVar13 = pfVar13 + 2;
      uVar14 = uVar14 + 1;
      uVar4 = (**(code **)(*piVar16 + 0x3c))(uVar8);
    } while (uVar14 < uVar4);
  }
  return;
}

// 0x001614c0  size 0x9c
void PhysPair_RunSphereMesh(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  PhysPair_SphereMeshContacts();
  puVar2 = (undefined4 *)param_1;
  PhysContact_FlipNormal(puVar2 + 8);
  uVar1 = *puVar2;
  *puVar2 = puVar2[1];
  puVar2[1] = uVar1;
  uVar1 = puVar2[3];
  puVar2[3] = puVar2[5];
  puVar2[5] = uVar1;
  uVar1 = puVar2[2];
  puVar2[2] = puVar2[4];
  puVar2[4] = uVar1;
  PhysPair_SphereMeshContacts(param_1);
  PhysContact_FlipNormal(puVar2 + 8);
  uVar1 = *puVar2;
  *puVar2 = puVar2[1];
  puVar2[1] = uVar1;
  uVar1 = puVar2[3];
  puVar2[3] = puVar2[5];
  puVar2[5] = uVar1;
  uVar1 = puVar2[2];
  puVar2[2] = puVar2[4];
  puVar2[4] = uVar1;
  return;
}

// 0x00161560  size 0x430
void PhysPair_SphereMeshContacts(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  float *pfVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_350 [16];
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  float afStack_320 [200];
  
  uVar9 = PhysShape_GetOwner(*param_1);
  piVar3 = (int *)PhysShape_GetBody(*param_1);
  uVar10 = PhysShape_GetOwner(param_1[1]);
  uVar11 = PhysShape_GetBody(param_1[1]);
  piVar17 = (int *)uVar9;
  uVar18 = 0;
  lVar12 = (**(code **)(*piVar17 + 0x34))(uVar9);
  if (lVar12 != 0) {
    do {
      puVar4 = (undefined4 *)(**(code **)(*piVar17 + 0x38))(uVar9,uVar18);
      uStack_330 = *puVar4;
      uStack_32c = puVar4[1];
      uStack_328 = puVar4[2];
      uStack_324 = puVar4[3];
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3,uVar18);
      uStack_340 = *puVar4;
      bVar2 = false;
      uStack_33c = puVar4[1];
      uStack_338 = puVar4[2];
      uStack_334 = puVar4[3];
      piVar16 = (int *)uVar10;
      uVar14 = 0;
      lVar12 = (**(code **)(*piVar16 + 0x3c))(uVar10);
      piVar15 = (int *)uVar11;
      if (lVar12 != 0) {
        pfVar13 = afStack_320;
        do {
          iVar6 = (**(code **)(*piVar16 + 0x40))(uVar10,uVar14);
          fVar20 = (float)Vec3_Dot(&uStack_330,iVar6 + 0x10);
          pfVar7 = (float *)(**(code **)(*piVar16 + 0x40))(uVar10,uVar14);
          pcVar1 = *(code **)(*piVar15 + 0x40);
          *pfVar13 = fVar20 - *pfVar7;
          iVar6 = (*pcVar1)(uVar11,uVar14);
          fVar20 = (float)Vec3_Dot(&uStack_340,iVar6 + 0x10);
          pfVar7 = (float *)(**(code **)(*piVar15 + 0x40))(uVar11,uVar14);
          pfVar13[1] = fVar20 - *pfVar7;
          if ((0.0 < *pfVar13) && (0.0 < pfVar13[1])) {
            bVar2 = true;
            break;
          }
          pfVar13 = pfVar13 + 2;
          uVar14 = uVar14 + 1;
          uVar8 = (**(code **)(*piVar16 + 0x3c))(uVar10);
        } while (uVar14 < uVar8);
      }
      if (!bVar2) {
        uVar14 = 0;
        lVar12 = (**(code **)(*piVar16 + 0x3c))(uVar10);
        if (lVar12 != 0) {
          pfVar13 = afStack_320;
          do {
            if ((pfVar13[1] <= 0.0) &&
               (fVar20 = (float)fabsf(*pfVar13 - pfVar13[1]), 1e-05 <= fVar20)) {
              bVar2 = true;
              uVar8 = 0;
              fVar20 = *pfVar13 / (*pfVar13 - pfVar13[1]);
              lVar12 = (**(code **)(*piVar16 + 0x3c))(uVar10);
              if (lVar12 != 0) {
                do {
                  if ((uVar14 != uVar8) &&
                     (fVar19 = (float)phys_sub_00163780(fVar20,*pfVar13,pfVar13[1]), 0.0 < fVar19))
                  {
                    bVar2 = false;
                  }
                  uVar8 = uVar8 + 1;
                  uVar5 = (**(code **)(*piVar16 + 0x3c))(uVar10);
                } while (uVar8 < uVar5);
              }
              if ((((bVar2) && (fVar20 < 1.0)) && (fVar20 < (float)param_1[0x15])) &&
                 (-1.0 < fVar20)) {
                phys_sub_001637a0(fVar20,auStack_350,&uStack_330,&uStack_340);
                iVar6 = (**(code **)(*piVar15 + 0x40))(uVar11,uVar14);
                PhysContact_Fill(-pfVar13[1],fVar20,param_1 + 8,auStack_350,iVar6 + 0x10);
              }
            }
            pfVar13 = pfVar13 + 2;
            uVar14 = uVar14 + 1;
            uVar8 = (**(code **)(*piVar16 + 0x3c))(uVar10);
          } while (uVar14 < uVar8);
        }
      }
      uVar18 = uVar18 + 1;
      uVar14 = (**(code **)(*piVar17 + 0x34))(uVar9);
    } while (uVar18 < uVar14);
  }
  return;
}

// 0x001619a0  size 0x210
void PhysPair_PointMeshContacts(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar1 = PhysShape_GetOwner(*param_1);
  uVar2 = PhysShape_GetBody(*param_1);
  uVar3 = PhysShape_GetOwner(param_1[1]);
  uVar4 = PhysShape_GetBody(param_1[1]);
  if ((0.0 <= (float)param_1[0x16]) && ((float)param_1[0x16] <= (float)param_1[0x15])) {
    uVar5 = PhysShape_GetCenter(uVar3);
    uVar6 = PhysShape_GetCenter(uVar1);
    Vec3_Sub(auStack_10,uVar5,uVar6);
    uVar5 = PhysShape_GetCenter(uVar4);
    uVar6 = PhysShape_GetCenter(uVar2);
    Vec3_Sub(auStack_20,uVar5,uVar6);
    Vec3_Sub(auStack_30,auStack_20,auStack_10);
    uVar8 = param_1[0x16];
    uVar1 = PhysShape_GetCenter(uVar1);
    uVar2 = PhysShape_GetCenter(uVar2);
    phys_sub_001637a0(uVar8,auStack_40,uVar1,uVar2);
    uVar8 = param_1[0x16];
    uVar1 = PhysShape_GetCenter(uVar3);
    uVar2 = PhysShape_GetCenter(uVar4);
    phys_sub_001637a0(uVar8,auStack_50,uVar1,uVar2);
    Vec3_Sub(&fStack_60,auStack_40,auStack_50);
    if (fStack_58 * fStack_58 + fStack_60 * fStack_60 + fStack_5c * fStack_5c == 0.0) {
      fStack_60 = 0.0;
      fStack_5c = 1.0;
      fStack_58 = 0.0;
    }
    phys_sub_00163bc0(&fStack_60);
    fVar9 = (float)param_1[0x16];
    fVar7 = (float)Vec3_Length(auStack_30);
    Vec3_Add(auStack_80,auStack_40,auStack_50);
    Vec3_Scale(0x3f000000,auStack_70,auStack_80);
    PhysContact_Fill(fVar7 * (1.0 - fVar9),param_1[0x16],param_1 + 8,auStack_70,&fStack_60);
  }
  return;
}

// 0x00161bb0  size 0x164
/* WARNING: Removing unreachable block (ram,0x00161c58) */

void PhysWorld_SolveIslands(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = phys_sub_00158650(0x42f3c0);
  iVar9 = 0;
  do {
    bVar3 = true;
    bVar2 = true;
    iVar8 = 0;
    do {
      iVar7 = (int)param_1;
      if (bVar3) {
        lVar5 = (*pcRam0036f16c)(uVar4,iVar7 + 0x10,*(undefined4 *)(iVar7 + 0xdc));
        if (lVar5 != 0) {
          PhysWorld_SolveIsland(param_1,uVar4);
        }
        bVar3 = false;
      }
      if (bVar2) {
        uVar6 = PhysShape_GetBody(iVar7 + 0x10);
        lVar5 = (*pcRam0036f170)(uVar4,uVar6,*(undefined4 *)(iVar7 + 0xdc));
        if (lVar5 == 0) {
          bVar2 = false;
        }
        else {
          PhysWorld_SolveIsland(param_1,uVar4);
          bVar2 = false;
        }
      }
      bVar1 = iVar8 != 0;
      iVar8 = iVar8 + -1;
    } while (bVar1);
    bVar2 = iVar9 != 0;
    iVar9 = iVar9 + -1;
  } while (bVar2);
  return;
}

// 0x00161d20  size 0x57c
void PhysWorld_SolveIsland(int param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (uint *)phys_sub_00158640(0x42f3c0);
  uVar11 = 0;
  puVar12 = (uint *)0x0;
  fVar19 = 0.01;
  uVar13 = 0;
  if (param_3 != 0) {
    puVar9 = puVar1;
    do {
      if (fVar19 < (float)param_2[0xc]) {
        fVar19 = (float)param_2[0xc];
        puVar12 = param_2;
      }
      uVar6 = 0;
      if (uVar11 != 0) {
        puVar10 = puVar1;
        do {
          if (param_2[0xe] == puVar10[0xe]) {
            Vec3_AddInPlace(puVar10,param_2);
            Vec3_ScaleInPlace(0x3f000000,puVar10);
            goto LAB_00161e50;
          }
          uVar6 = uVar6 + 1;
          puVar10 = puVar10 + 0x10;
        } while (uVar6 < uVar11);
      }
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar11 = uVar11 + 1;
      *puVar9 = *param_2;
      puVar9[1] = uVar6;
      puVar9[2] = uVar7;
      puVar9[3] = uVar8;
      uVar6 = param_2[5];
      uVar7 = param_2[6];
      uVar8 = param_2[7];
      puVar9[4] = param_2[4];
      puVar9[5] = uVar6;
      puVar9[6] = uVar7;
      puVar9[7] = uVar8;
      uVar6 = param_2[9];
      uVar7 = param_2[10];
      uVar8 = param_2[0xb];
      puVar9[8] = param_2[8];
      puVar9[9] = uVar6;
      puVar9[10] = uVar7;
      puVar9[0xb] = uVar8;
      puVar9[0xc] = param_2[0xc];
      puVar9[0xd] = param_2[0xd];
      puVar9[0xe] = param_2[0xe];
      puVar9[0xf] = param_2[0xf];
      puVar9 = puVar9 + 0x10;
LAB_00161e50:
      uVar13 = uVar13 + 1;
      param_2 = param_2 + 0x10;
    } while (uVar13 < param_3);
  }
  if ((puVar12 != (uint *)0x0) && ((puVar12[0xd] & 0x7000000 & *(uint *)(param_1 + 0xe8)) != 0)) {
    Vec3_Scale(fVar19,auStack_50,puVar12 + 8);
    puVar2 = (undefined4 *)phys_sub_00165250(*(undefined4 *)(param_1 + 4));
    uStack_90 = *puVar2;
    uStack_8c = puVar2[1];
    uStack_88 = puVar2[2];
    uStack_84 = puVar2[3];
    Vec3_AddInPlace(&uStack_90,auStack_50);
    phys_sub_00165260(*(undefined4 *)(param_1 + 4),&uStack_90);
    PhysContact_Apply(param_1 + 0x10,auStack_50);
    Vec3_AddInPlace(param_1 + 0x100,auStack_50);
    *(undefined1 *)(param_1 + 0xf6) = 0;
  }
  pfVar3 = (float *)phys_sub_00164f40(*(undefined4 *)(param_1 + 4));
  fVar19 = *pfVar3;
  uVar13 = 0;
  if (uVar11 != 0) {
    do {
      uVar6 = puVar1[0xd];
      uVar7 = uVar6 & 0x7000000;
      if (((uVar7 & *(uint *)(param_1 + 0xe4)) != 0) &&
         (fVar14 = (float)phys_sub_001647f0(*(undefined4 *)(param_1 + 4),puVar1,puVar1 + 8),
         0.0 < fVar14)) {
        uVar18 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x200);
        fVar15 = (float)phys_sub_0015c100(*(undefined4 *)(param_1 + 8));
        fVar16 = (float)phys_sub_0015d2f0(uVar7);
        fVar15 = (fVar15 + fVar16) * 0.5;
        if (0.0 <= fVar15) {
          if (1.0 < fVar15) {
            fVar15 = 1.0;
          }
        }
        else {
          fVar15 = 0.0;
        }
        fVar20 = fVar14 * (fVar15 + 1.0);
        fVar15 = (float)phys_sub_0015c110(*(undefined4 *)(param_1 + 8));
        fVar16 = (float)phys_sub_0015d270(uVar7);
        fVar15 = fVar15 + fVar16;
        uStack_10 = 0;
        uStack_c = 0;
        uStack_8 = 0;
        Vec3_Scale(fVar20,&uStack_20,puVar1 + 8);
        if (4.167 < fVar19) {
          if ((uVar6 & 0x4000000) != 0xffffffff) {
            uVar17 = phys_sub_0015d2b0(uVar7);
            Vec3_Scale(uVar17,&uStack_60,&uStack_20);
            uStack_10 = uStack_60;
            uStack_c = uStack_5c;
            uStack_8 = uStack_58;
            uStack_4 = uStack_54;
          }
          if (0.0 < fVar15) {
            phys_sub_00164360(fVar20,fVar15,auStack_30,*(undefined4 *)(param_1 + 4),puVar1,
                              puVar1 + 8);
            uVar17 = phys_sub_0015d230(uVar7);
            Vec3_AddInPlace(&uStack_20,auStack_30);
            Vec3_Scale(uVar17,auStack_70,auStack_30);
            Vec3_AddInPlace(&uStack_10,auStack_70);
          }
        }
        else {
          uStack_10 = uStack_20;
          uStack_c = uStack_1c;
          uStack_8 = uStack_18;
          uStack_4 = uStack_14;
        }
        phys_sub_00164d60(*(undefined4 *)(param_1 + 4),&uStack_20);
        phys_sub_00164c60(*(undefined4 *)(param_1 + 4),&uStack_10,puVar1);
        phys_sub_00163f80(0x3f800000,*(undefined4 *)(param_1 + 4));
        fVar15 = 0.0;
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x200) = uVar18;
        if ((uVar6 & 0x4000000) == 0) {
          if (puVar12 == (uint *)0x0) {
            Vec3_Scale(0xc11ccccd,auStack_40,puVar1 + 8);
            fVar15 = (float)phys_sub_00164270(uRam0042f3c8,*(undefined4 *)(param_1 + 4),puVar1,
                                              puVar1 + 8,auStack_40);
          }
        }
        else {
          uVar5 = phys_sub_00164210(*(undefined4 *)(param_1 + 4));
          fVar15 = (float)phys_sub_00164270(uRam0042f3c8,*(undefined4 *)(param_1 + 4),puVar1,
                                            puVar1 + 8,uVar5);
        }
        if (fVar15 != 0.0) {
          Vec3_Scale(fVar15,&uStack_80,puVar1 + 8);
          uStack_10 = uStack_80;
          uStack_c = uStack_7c;
          uStack_8 = uStack_78;
          uStack_4 = uStack_74;
          phys_sub_00164cc0(*(undefined4 *)(param_1 + 4),&uStack_10,puVar1);
          phys_sub_00163f80(0x3f800000,*(undefined4 *)(param_1 + 4));
        }
        lVar4 = PhysWorld_AllocContact(0x42f3c0);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          *(undefined4 *)((int)lVar4 + 0x44) = *(undefined4 *)(param_1 + 0xd4);
          *(int *)(param_1 + 0xd4) = (int)lVar4;
        }
        if (lVar4 != 0) {
          puVar9 = (uint *)lVar4;
          *puVar9 = puVar1[0xd] & 0x80ffffff;
          puVar9[1] = puVar1[0xd];
          puVar9[0x10] = (uint)fVar14;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar9[4] = *puVar1;
          puVar9[5] = uVar6;
          puVar9[6] = uVar7;
          puVar9[7] = uVar8;
          uVar6 = puVar1[5];
          uVar7 = puVar1[6];
          uVar8 = puVar1[7];
          puVar9[8] = puVar1[4];
          puVar9[9] = uVar6;
          puVar9[10] = uVar7;
          puVar9[0xb] = uVar8;
          uVar6 = puVar1[9];
          uVar7 = puVar1[10];
          uVar8 = puVar1[0xb];
          puVar9[0xc] = puVar1[8];
          puVar9[0xd] = uVar6;
          puVar9[0xe] = uVar7;
          puVar9[0xf] = uVar8;
        }
      }
      uVar13 = uVar13 + 1;
      puVar1 = puVar1 + 0x10;
    } while (uVar13 < uVar11);
  }
  return;
}

// 0x001622b0  size 0x8
void PhysBody_SetMaterial(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc0) = param_1;
  return;
}

// 0x001622c0  size 0xc
void phys_sub_001622c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  return;
}

// 0x001622d0  size 0x14
void phys_sub_001622d0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & ~param_2;
  return;
}

// 0x001622f0  size 0x10
void phys_sub_001622f0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | param_2;
  return;
}

// 0x00162300  size 0x14
void phys_sub_00162300(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) & ~param_2;
  return;
}

// 0x00162320  size 0x10
void phys_sub_00162320(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | param_2;
  return;
}

// 0x00162330  size 0x14
void phys_sub_00162330(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & ~param_2;
  return;
}

// 0x00162350  size 0x5c
void phys_sub_00162350(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)param_1 + 0xdc);
  uVar2 = param_2 & uVar1;
  if ((uVar2 != 0) && (*(uint *)((int)param_1 + 0xdc) = uVar1 & ~param_2, (uVar2 & 0xffffff) != 0))
  {
    PhysWorld_BuildPairs(0x42f3c0,param_1);
  }
  return;
}

// 0x001623b0  size 0x5c
void phys_sub_001623b0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)param_1 + 0xdc);
  uVar2 = param_2 & ~uVar1;
  if ((uVar2 != 0) && (*(uint *)((int)param_1 + 0xdc) = uVar1 | param_2, (uVar2 & 0xffffff) != 0)) {
    PhysWorld_CollideBroadphase(0x42f3c0,param_1);
  }
  return;
}

// 0x00162410  size 0x8
void PhysBody_SetUserData(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xec) = param_2;
  return;
}

// 0x00162420  size 0x8
undefined4 PhysBody_GetUserData(int param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}

// 0x00162430  size 0x38
void phys_sub_00162430(int param_1,uint param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0xd4); (iVar1 != 0 && ((*(uint *)(iVar1 + 4) & param_2) == 0));
      iVar1 = *(int *)(iVar1 + 0x44)) {
  }
  return;
}

// 0x00162470  size 0x40
long phys_sub_00162470(int param_1)

{
  long lVar1;
  
  lVar1 = PhysWorld_AllocContact(0x42f3c0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    *(undefined4 *)((int)lVar1 + 0x44) = *(undefined4 *)(param_1 + 0xd4);
    *(int *)(param_1 + 0xd4) = (int)lVar1;
  }
  return lVar1;
}

// 0x001624b0  size 0x44
void PhysBody_Unlink(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 200) == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0xc4);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 200) + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc4) + 200) = *(undefined4 *)(param_1 + 200);
  }
  return;
}

// 0x00162500  size 0x24
void PhysBody_LinkFront(int param_1,int *param_2)

{
  if (*param_2 != 0) {
    *(int *)(*param_2 + 200) = param_1;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(int *)(param_1 + 0xc4) = *param_2;
  *param_2 = param_1;
  return;
}

// 0x00162530  size 0x88
void phys_sub_00162530(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)phys_sub_00165250(*(undefined4 *)(param_1 + 4));
  uStack_10 = *puVar1;
  uStack_c = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_4 = puVar1[3];
  Vec3_AddInPlace(&uStack_10,param_2);
  phys_sub_00165260(*(undefined4 *)(param_1 + 4),&uStack_10);
  PhysContact_Apply(param_1 + 0x10,param_2);
  Vec3_AddInPlace(param_1 + 0x100,param_2);
  *(undefined1 *)(param_1 + 0xf6) = 0;
  return;
}

// 0x001625c0  size 0x110
void phys_sub_001625c0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3f800000;
  uVar1 = phys_sub_00165250(*(undefined4 *)(param_1 + 4));
  Vec3_Sub(auStack_30,param_2,uVar1);
  phys_sub_00163800(&uStack_20,auStack_30,param_3);
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  uStack_8 = uStack_18;
  uStack_4 = uStack_14;
  Vec3_AddInPlace(param_1 + 0x90,&uStack_10);
  fVar3 = (float)fabsf(*(undefined4 *)(param_1 + 0x80));
  puVar2 = (undefined4 *)param_3;
  fVar4 = (float)fabsf(*puVar2);
  if (fVar3 < fVar4) {
    *(undefined4 *)(param_1 + 0x80) = *puVar2;
  }
  fVar3 = (float)fabsf(*(undefined4 *)(param_1 + 0x84));
  fVar4 = (float)fabsf(puVar2[1]);
  if (fVar3 < fVar4) {
    *(undefined4 *)(param_1 + 0x84) = puVar2[1];
  }
  fVar3 = (float)fabsf(*(undefined4 *)(param_1 + 0x88));
  fVar4 = (float)fabsf(puVar2[2]);
  if (fVar3 < fVar4) {
    *(undefined4 *)(param_1 + 0x88) = puVar2[2];
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  return;
}

// 0x001626d0  size 0x68
long phys_sub_001626d0(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = &DAT_0036e268;
    puVar1[0x3c] = 0;
    phys_sub_00159db0(puVar1 + 4,0xffffffffffffffff);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00162740  size 0xe4
void PhysBody_Init(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = (int)param_3;
  uVar4 = phys_sub_00164c40(*(undefined4 *)(param_1 + 4));
  PhysShape_Init(param_1 + 0x10,param_3,uVar4,param_5);
  *(undefined4 *)(param_1 + 0xd8) = param_4;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_1 + 0x80) = DAT_003625e0;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_1 + 0x90) = DAT_003625e0;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  uVar3 = DAT_003625ec;
  uVar2 = DAT_003625e8;
  uVar1 = DAT_003625e4;
  *(undefined4 *)(param_1 + 0x100) = DAT_003625e0;
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}

// 0x00162830  size 0x3c
void phys_sub_00162830(int param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xf7) = 1;
  uVar1 = phys_sub_00164c40(*(undefined4 *)(param_1 + 4));
  PhysContact_Process(param_1 + 0x10,uVar1);
  return;
}

// 0x00162870  size 0xb4
void phys_sub_00162870(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar1 = (float)maybe_asinf(param_2[8]);
  uVar2 = sinf(-fVar1);
  fVar3 = (float)fabsf(uVar2);
  if (0.0005 < fVar3) {
    uVar2 = atan2f(param_2[9],param_2[10]);
    uVar4 = atan2f(param_2[4],*param_2);
    *param_1 = uVar2;
  }
  else {
    uVar2 = 0;
    uVar4 = atan2f(-(float)param_2[1],param_2[5]);
    *param_1 = uVar2;
  }
  param_1[1] = -fVar1;
  param_1[2] = uVar4;
  return;
}

// 0x00162930  size 0x34
void phys_sub_00162930(undefined8 param_1)

{
  undefined1 auStack_40 [64];
  
  phys_sub_00162fb0(auStack_40);
  phys_sub_00162870(param_1,auStack_40);
  return;
}

// 0x00162970  size 0x7c
void phys_sub_00162970(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  phys_sub_001635f0(*param_2,auStack_10,0);
  phys_sub_001635f0(param_2[1],auStack_20,1);
  phys_sub_001635f0(param_2[2],auStack_30,2);
  phys_sub_00163140(auStack_40,auStack_30,auStack_20);
  phys_sub_00163140(param_1,auStack_40,auStack_10);
  return;
}

// 0x001629f0  size 0x344
void phys_sub_001629f0(float *param_1,float *param_2,float *param_3)

{
  *param_1 = param_3[0xc] * param_2[3] +
             param_3[8] * param_2[2] + *param_3 * *param_2 + param_3[4] * param_2[1];
  param_1[1] = param_3[0xd] * param_2[3] +
               param_3[9] * param_2[2] + param_3[1] * *param_2 + param_3[5] * param_2[1];
  param_1[2] = param_3[0xe] * param_2[3] +
               param_3[10] * param_2[2] + param_3[2] * *param_2 + param_3[6] * param_2[1];
  param_1[3] = param_3[0xf] * param_2[3] +
               param_3[0xb] * param_2[2] + param_3[3] * *param_2 + param_3[7] * param_2[1];
  param_1[4] = param_3[0xc] * param_2[7] +
               param_3[8] * param_2[6] + *param_3 * param_2[4] + param_3[4] * param_2[5];
  param_1[5] = param_3[0xd] * param_2[7] +
               param_3[9] * param_2[6] + param_3[1] * param_2[4] + param_3[5] * param_2[5];
  param_1[6] = param_3[0xe] * param_2[7] +
               param_3[10] * param_2[6] + param_3[2] * param_2[4] + param_3[6] * param_2[5];
  param_1[7] = param_3[0xf] * param_2[7] +
               param_3[0xb] * param_2[6] + param_3[3] * param_2[4] + param_3[7] * param_2[5];
  param_1[8] = param_3[0xc] * param_2[0xb] +
               param_3[8] * param_2[10] + *param_3 * param_2[8] + param_3[4] * param_2[9];
  param_1[9] = param_3[0xd] * param_2[0xb] +
               param_3[9] * param_2[10] + param_3[1] * param_2[8] + param_3[5] * param_2[9];
  param_1[10] = param_3[0xe] * param_2[0xb] +
                param_3[10] * param_2[10] + param_3[2] * param_2[8] + param_3[6] * param_2[9];
  param_1[0xb] = param_3[0xf] * param_2[0xb] +
                 param_3[0xb] * param_2[10] + param_3[3] * param_2[8] + param_3[7] * param_2[9];
  param_1[0xc] = param_3[0xc] * param_2[0xf] +
                 param_3[8] * param_2[0xe] + *param_3 * param_2[0xc] + param_3[4] * param_2[0xd];
  param_1[0xd] = param_3[0xd] * param_2[0xf] +
                 param_3[9] * param_2[0xe] + param_3[1] * param_2[0xc] + param_3[5] * param_2[0xd];
  param_1[0xe] = param_3[0xe] * param_2[0xf] +
                 param_3[10] * param_2[0xe] + param_3[2] * param_2[0xc] + param_3[6] * param_2[0xd];
  param_1[0xf] = param_3[0xf] * param_2[0xf] +
                 param_3[0xb] * param_2[0xe] + param_3[3] * param_2[0xc] + param_3[7] * param_2[0xd]
  ;
  return;
}

// 0x00162d40  size 0x84
void phys_sub_00162d40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[4];
  param_1[2] = param_2[8];
  param_1[3] = param_2[0xc];
  param_1[4] = param_2[1];
  param_1[5] = param_2[5];
  param_1[6] = param_2[9];
  param_1[7] = param_2[0xd];
  param_1[8] = param_2[2];
  param_1[9] = param_2[6];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xe];
  param_1[0xc] = param_2[3];
  param_1[0xd] = param_2[7];
  param_1[0xe] = param_2[0xb];
  param_1[0xf] = param_2[0xf];
  return;
}

// 0x00162dd0  size 0x9c
void phys_sub_00162dd0(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  phys_sub_00162d40(&fStack_40);
  fVar3 = param_3[1];
  fVar1 = *param_3;
  fVar2 = param_3[2];
  *param_1 = fVar2 * fStack_20 + fVar1 * fStack_40 + fVar3 * fStack_30;
  param_1[1] = fVar2 * fStack_1c + fVar1 * fStack_3c + fVar3 * fStack_2c;
  param_1[2] = fVar2 * fStack_18 + fVar1 * fStack_38 + fVar3 * fStack_28;
  param_1[3] = 1.0;
  return;
}

// 0x00162e70  size 0x84
void Mat33_MulVec3(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = param_3[1];
  fVar5 = param_2[5];
  fVar9 = *param_3;
  fVar8 = param_2[1];
  fVar10 = param_3[2];
  fVar7 = param_2[9];
  fVar6 = param_2[0xd];
  fVar1 = param_2[6];
  fVar4 = param_2[2];
  fVar3 = param_2[10];
  fVar2 = param_2[0xe];
  *param_1 = param_2[0xc] + fVar10 * param_2[8] + fVar9 * *param_2 + fVar11 * param_2[4];
  param_1[1] = fVar6 + fVar10 * fVar7 + fVar9 * fVar8 + fVar11 * fVar5;
  param_1[2] = fVar2 + fVar10 * fVar3 + fVar9 * fVar4 + fVar11 * fVar1;
  param_1[3] = 1.0;
  return;
}

// 0x00162f00  size 0x6c
void phys_sub_00162f00(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = param_3[1];
  fVar3 = param_2[5];
  fVar7 = *param_3;
  fVar6 = param_2[1];
  fVar8 = param_3[2];
  fVar5 = param_2[9];
  fVar1 = param_2[6];
  fVar2 = param_2[2];
  fVar4 = param_2[10];
  *param_1 = fVar8 * param_2[8] + fVar7 * *param_2 + fVar9 * param_2[4];
  param_1[1] = fVar8 * fVar5 + fVar7 * fVar6 + fVar9 * fVar3;
  param_1[2] = fVar8 * fVar4 + fVar7 * fVar2 + fVar9 * fVar1;
  param_1[3] = 1.0;
  return;
}

// 0x00162f70  size 0x38
void phys_sub_00162f70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}

// 0x00162fb0  size 0x30
void phys_sub_00162fb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  phys_sub_00162fe0();
  uVar3 = DAT_003625cc;
  uVar2 = DAT_003625c8;
  uVar1 = DAT_003625c4;
  *(undefined4 *)(param_1 + 0x30) = DAT_003625c0;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  return;
}

// 0x00162fe0  size 0xdc
void phys_sub_00162fe0(float *param_1,undefined8 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = (float)phys_sub_001632b0(param_2);
  pfVar1 = (float *)param_2;
  fVar7 = *pfVar1;
  fVar2 = 2.0 / fVar2;
  fVar8 = pfVar1[1];
  fVar3 = pfVar1[3];
  fVar4 = fVar8 * fVar2;
  fVar9 = fVar3 * fVar7 * fVar2;
  fVar5 = pfVar1[2] * fVar2;
  fVar6 = fVar7 * fVar7 * fVar2;
  fVar2 = pfVar1[2] * fVar5;
  *param_1 = 1.0 - (fVar8 * fVar4 + fVar2);
  param_1[1] = fVar7 * fVar4 + fVar3 * fVar5;
  param_1[2] = fVar7 * fVar5 - fVar3 * fVar4;
  param_1[4] = fVar7 * fVar4 - fVar3 * fVar5;
  param_1[5] = 1.0 - (fVar6 + fVar2);
  param_1[6] = fVar8 * fVar5 + fVar9;
  param_1[8] = fVar7 * fVar5 + fVar3 * fVar4;
  param_1[9] = fVar8 * fVar5 - fVar9;
  param_1[10] = 1.0 - (fVar6 + fVar8 * fVar4);
  return;
}

// 0x001630c0  size 0x34
/* 11 callers */

void Mat34_Identity(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_0036259c;
  uVar2 = DAT_00362598;
  uVar1 = DAT_00362594;
  *param_1 = DAT_00362590;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar3 = DAT_003625ac;
  uVar2 = DAT_003625a8;
  uVar1 = DAT_003625a4;
  param_1[4] = DAT_003625a0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar3 = DAT_003625bc;
  uVar2 = DAT_003625b8;
  uVar1 = DAT_003625b4;
  param_1[8] = DAT_003625b0;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar3 = DAT_003625cc;
  uVar2 = DAT_003625c8;
  uVar1 = DAT_003625c4;
  param_1[0xc] = DAT_003625c0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 0x00163100  size 0x34
void phys_sub_00163100(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar3 = param_3[2];
  fVar2 = param_3[3];
  *param_2 = *param_3 * param_1;
  param_2[1] = fVar1 * param_1;
  param_2[2] = fVar3 * param_1;
  param_2[3] = fVar2 * param_1;
  return;
}

// 0x00163140  size 0x74
void phys_sub_00163140(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *param_2;
  fVar5 = param_3[3];
  fVar7 = *param_3;
  fVar6 = param_2[3];
  fVar1 = param_3[2];
  fVar4 = param_2[1];
  fVar3 = param_3[1];
  fVar2 = param_2[2];
  *param_1 = (fVar4 * fVar1 + fVar6 * fVar7 + fVar8 * fVar5) - fVar2 * fVar3;
  param_1[1] = (fVar2 * fVar7 + fVar6 * fVar3 + fVar4 * fVar5) - fVar8 * fVar1;
  param_1[2] = (fVar8 * fVar3 + fVar6 * fVar1 + fVar2 * fVar5) - fVar4 * fVar7;
  param_1[3] = ((fVar6 * fVar5 - fVar8 * fVar7) - fVar4 * fVar3) - fVar2 * fVar1;
  return;
}

// 0x001631c0  size 0x44
void phys_sub_001631c0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_2[1];
  fVar1 = param_3[1];
  fVar5 = param_2[2];
  fVar2 = param_3[2];
  fVar6 = param_2[3];
  fVar4 = param_3[3];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar3 + fVar1;
  param_1[2] = fVar5 + fVar2;
  param_1[3] = fVar6 + fVar4;
  return;
}

// 0x00163210  size 0x98
void phys_sub_00163210(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[3];
  fVar9 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar6 = param_3[1];
  fVar5 = ((fVar1 * fVar1 - fVar9 * fVar9) - fVar7 * fVar7) - fVar8 * fVar8;
  fVar3 = *param_3;
  fVar4 = param_3[2];
  fVar1 = fVar1 * 2.0;
  fVar2 = (fVar4 * fVar8 + fVar3 * fVar9 + fVar6 * fVar7) * 2.0;
  *param_1 = fVar1 * (fVar7 * fVar4 - fVar8 * fVar6) + fVar5 * fVar3 + fVar2 * fVar9;
  param_1[1] = fVar1 * (fVar8 * fVar3 - fVar9 * fVar4) + fVar5 * fVar6 + fVar2 * fVar7;
  param_1[2] = fVar1 * (fVar9 * fVar6 - fVar7 * fVar3) + fVar5 * fVar4 + fVar2 * fVar8;
  return;
}

// 0x001632b0  size 0x24
float phys_sub_001632b0(float *param_1)

{
  return param_1[3] * param_1[3] +
         param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
}

// 0x001632e0  size 0x60
void phys_sub_001632e0(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1[3];
  fVar1 = 1.0 / SQRT(param_1[2] * param_1[2] +
                     param_1[1] * param_1[1] + fVar2 * fVar2 + *param_1 * *param_1);
  param_1[3] = fVar2 * fVar1;
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  param_1[2] = param_1[2] * fVar1;
  return;
}

// 0x00163340  size 0x200
void phys_sub_00163340(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int aiStack_20 [4];
  float afStack_10 [4];
  
  aiStack_20[0] = DAT_0030ae00;
  aiStack_20[1] = DAT_0030ae04;
  aiStack_20[2] = DAT_0030ae08;
  fVar5 = param_2[10] + *param_2 + param_2[5];
  if (fVar5 <= 0.0) {
    uVar3 = (uint)(*param_2 < param_2[5]);
    if (param_2[uVar3 * 5] < param_2[10]) {
      uVar3 = 2;
    }
    iVar1 = aiStack_20[uVar3];
    iVar2 = aiStack_20[iVar1];
    fVar5 = SQRT((param_2[uVar3 * 5] - (param_2[iVar1 * 5] + param_2[iVar2 * 5])) + 1.0);
    afStack_10[uVar3] = fVar5 * 0.5;
    if (fVar5 != 0.0) {
      fVar5 = 0.5 / fVar5;
    }
    param_1[3] = fVar5 * (param_2[iVar1 * 4 + iVar2] - param_2[iVar2 * 4 + iVar1]);
    fVar6 = param_2[uVar3 * 4 + iVar2];
    fVar4 = param_2[iVar2 * 4 + uVar3];
    afStack_10[iVar1] = fVar5 * (param_2[uVar3 * 4 + iVar1] + param_2[iVar1 * 4 + uVar3]);
    afStack_10[iVar2] = fVar5 * (fVar6 + fVar4);
    *param_1 = afStack_10[0];
    param_1[1] = afStack_10[1];
    param_1[2] = afStack_10[2];
  }
  else {
    fVar5 = SQRT(fVar5 + 1.0);
    fVar6 = 0.5 / fVar5;
    param_1[3] = fVar5 * 0.5;
    *param_1 = fVar6 * (param_2[6] - param_2[9]);
    param_1[1] = fVar6 * (param_2[8] - param_2[2]);
    param_1[2] = fVar6 * (param_2[1] - param_2[4]);
  }
  return;
}

// 0x00163540  size 0xa8
void phys_sub_00163540(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_1 == 0.0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 1.0;
  }
  else {
    fVar1 = (float)cosf(param_1 * 0.5);
    fVar2 = (float)sinf(param_1 * 0.5);
    *param_2 = fVar1 * *param_3;
    param_2[1] = fVar1 * param_3[1];
    param_2[2] = fVar1 * param_3[2];
    param_2[3] = fVar2;
  }
  return;
}

// 0x001635f0  size 0xb0
undefined8 phys_sub_001635f0(float param_1,undefined8 param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = cosf(param_1 * 0.5);
  uVar3 = sinf(param_1 * 0.5);
  puVar1 = (undefined4 *)param_2;
  if (param_3 == '\x02') {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = uVar2;
    puVar1[3] = uVar3;
  }
  else if (param_3 == '\x01') {
    *puVar1 = 0;
    puVar1[1] = uVar2;
    puVar1[2] = 0;
    puVar1[3] = uVar3;
  }
  else if (param_3 == '\0') {
    *puVar1 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = uVar3;
  }
  return param_2;
}

// 0x001636a0  size 0x4c
void Phys_TransformDirScaled(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_10 [16];
  
  Vec3_Scale(*(undefined4 *)((int)param_2 + 0x20),auStack_10,param_3);
  phys_sub_00163210(param_1,param_2,auStack_10);
  return;
}

// 0x001636f0  size 0x5c
void Phys_TransformPointScaled(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  Vec3_Scale(*(undefined4 *)((int)param_2 + 0x20),auStack_20,param_3);
  phys_sub_00163210(auStack_10,param_2,auStack_20);
  Vec3_Add(param_1,auStack_10,(int)param_2 + 0x10);
  return;
}

// 0x00163750  size 0x28
float phys_sub_00163750(float *param_1,float *param_2)

{
  return param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
}

// 0x00163780  size 0x18
float phys_sub_00163780(float param_1,float param_2,float param_3)

{
  return (param_2 + 0.0) - param_1 * (param_2 - param_3);
}

// 0x001637a0  size 0x54
void phys_sub_001637a0(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_3[1];
  fVar1 = param_4[1];
  fVar4 = param_3[2];
  fVar2 = param_4[2];
  *param_2 = (*param_3 + 0.0) - (*param_3 - *param_4) * param_1;
  param_2[1] = (fVar3 + 0.0) - (fVar3 - fVar1) * param_1;
  param_2[2] = (fVar4 + 0.0) - (fVar4 - fVar2) * param_1;
  return;
}

// 0x00163800  size 0x40
void phys_sub_00163800(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_2[1];
  fVar3 = param_3[2];
  fVar5 = param_3[1];
  fVar1 = param_2[2];
  fVar6 = *param_3;
  fVar2 = *param_2;
  *param_1 = fVar4 * fVar3 - fVar1 * fVar5;
  param_1[1] = fVar1 * fVar6 - fVar2 * fVar3;
  param_1[2] = fVar2 * fVar5 - fVar4 * fVar6;
  return;
}

// 0x00163840  size 0x34
void Vec4_Scale(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar3 = param_3[2];
  fVar2 = param_3[3];
  *param_2 = *param_3 * param_1;
  param_2[1] = fVar1 * param_1;
  param_2[2] = fVar3 * param_1;
  param_2[3] = fVar2 * param_1;
  return;
}

// 0x00163880  size 0x28
void Vec3_ScaleCopy(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_2 = *param_3 * param_1;
  param_2[1] = fVar1 * param_1;
  param_2[2] = fVar2 * param_1;
  return;
}

// 0x001638b0  size 0x28
/* out = v * s */

void Vec3_Scale(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_2 = *param_3 * param_1;
  param_2[1] = fVar1 * param_1;
  param_2[2] = fVar2 * param_1;
  return;
}

// 0x001638e0  size 0x28
float Vec3_Dot(float *param_1,float *param_2)

{
  return param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
}

// 0x00163910  size 0x44
void Quat_Mul(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_2[1];
  fVar1 = param_3[1];
  fVar5 = param_2[2];
  fVar2 = param_3[2];
  fVar6 = param_2[3];
  fVar4 = param_3[3];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar3 + fVar1;
  param_1[2] = fVar5 + fVar2;
  param_1[3] = fVar6 + fVar4;
  return;
}

// 0x00163960  size 0x34
void phys_sub_00163960(float *param_1,float *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] + param_2[2];
  return;
}

// 0x001639a0  size 0x3c
void Vec4_Sub(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  param_1[3] = fVar5;
  return;
}

// 0x001639e0  size 0x64
void phys_sub_001639e0(float *param_1)

{
  float fVar1;
  
  fVar1 = 1.0 / SQRT(param_1[3] * param_1[3] +
                     param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  param_1[2] = param_1[2] * fVar1;
  param_1[3] = param_1[3] * fVar1;
  return;
}

// 0x00163a50  size 0x34
void phys_sub_00163a50(float param_1,float *param_2)

{
  param_1 = 1.0 / param_1;
  *param_2 = *param_2 * param_1;
  param_2[1] = param_2[1] * param_1;
  param_2[2] = param_2[2] * param_1;
  return;
}

// 0x00163a90  size 0x28
void Vec3_ScaleInPlace(float param_1,float *param_2)

{
  *param_2 = *param_2 * param_1;
  param_2[1] = param_2[1] * param_1;
  param_2[2] = param_2[2] * param_1;
  return;
}

// 0x00163ac0  size 0x34
void phys_sub_00163ac0(float *param_1,float *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - param_2[2];
  return;
}

// 0x00163b00  size 0x34
void Vec3_AddInPlace(float *param_1,float *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] + param_2[2];
  return;
}

// 0x00163b40  size 0x34
void Vec3_Sub(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  return;
}

// 0x00163b80  size 0x34
void Vec3_Add(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  return;
}

// 0x00163bc0  size 0x50
void phys_sub_00163bc0(float *param_1)

{
  float fVar1;
  
  fVar1 = 1.0 / SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  param_1[2] = param_1[2] * fVar1;
  return;
}

// 0x00163c10  size 0x2c
float Vec3_Length(float *param_1)

{
  return SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
}

// 0x00163c40  size 0x334
void phys_sub_00163c40(float param_1,undefined8 param_2)

{
  char *pcVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
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
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  pcVar1 = (char *)param_2;
  if (*pcVar1 == '\0') {
    Vec3_Scale(auStack_30,pcVar1 + 0x80);
    Vec3_AddInPlace(pcVar1 + 400,auStack_30);
    if (0.0 < *(float *)(pcVar1 + 0x180)) {
      Vec3_ScaleInPlace(1.0 - *(float *)(pcVar1 + 0x180) * param_1,pcVar1 + 400);
    }
    pcVar1[0x88] = '\0';
    pcVar1[0x89] = '\0';
    pcVar1[0x8a] = '\0';
    pcVar1[0x8b] = '\0';
    pcVar1[0x84] = '\0';
    pcVar1[0x85] = '\0';
    pcVar1[0x86] = '\0';
    pcVar1[0x87] = '\0';
    pcVar1[0x80] = '\0';
    pcVar1[0x81] = '\0';
    pcVar1[0x82] = '\0';
    pcVar1[0x83] = '\0';
    phys_sub_00162f00(&uStack_70,pcVar1 + 0x1a0,pcVar1 + 400);
    *(undefined4 *)(pcVar1 + 0x60) = uStack_70;
    *(undefined4 *)(pcVar1 + 100) = uStack_6c;
    *(undefined4 *)(pcVar1 + 0x68) = uStack_68;
    *(undefined4 *)(pcVar1 + 0x6c) = uStack_64;
    fVar2 = *(float *)(pcVar1 + 0x70);
    fVar4 = *(float *)(pcVar1 + 0x68) * *(float *)(pcVar1 + 0x68) +
            *(float *)(pcVar1 + 0x60) * *(float *)(pcVar1 + 0x60) +
            *(float *)(pcVar1 + 100) * *(float *)(pcVar1 + 100);
    if (fVar2 * fVar2 < fVar4) {
      fVar2 = fVar2 / SQRT(fVar4);
      Vec3_ScaleInPlace(fVar2,pcVar1 + 400);
      Vec3_ScaleInPlace(fVar2,pcVar1 + 0x60);
    }
    fVar2 = (float)Vec3_Length(pcVar1 + 0x60);
    if (0.0 < fVar2) {
      Vec3_Scale(1.0 / fVar2,auStack_10,pcVar1 + 0x60);
      phys_sub_00163540(fVar2 * param_1,auStack_20,auStack_10);
      phys_sub_00163140(&uStack_40,auStack_20,pcVar1 + 0x50);
      *(undefined4 *)(pcVar1 + 0x50) = uStack_40;
      *(undefined4 *)(pcVar1 + 0x54) = uStack_3c;
      *(undefined4 *)(pcVar1 + 0x58) = uStack_38;
      *(undefined4 *)(pcVar1 + 0x5c) = uStack_34;
      phys_sub_001632e0(pcVar1 + 0x50);
      phys_sub_00164120(param_2);
    }
    Vec3_AddInPlace(pcVar1 + 0x40,pcVar1 + 0x1f0);
    Vec3_Scale(param_1,auStack_50,pcVar1 + 0x40);
    Vec3_AddInPlace(pcVar1 + 0xb0,auStack_50);
    if (0.0 < *(float *)(pcVar1 + 0xa4)) {
      Vec3_ScaleInPlace(1.0 - *(float *)(pcVar1 + 0xa4) * param_1,pcVar1 + 0xb0);
    }
    pcVar1[0x48] = '\0';
    pcVar1[0x49] = '\0';
    pcVar1[0x4a] = '\0';
    pcVar1[0x4b] = '\0';
    pcVar1[0x44] = '\0';
    pcVar1[0x45] = '\0';
    pcVar1[0x46] = '\0';
    pcVar1[0x47] = '\0';
    pcVar1[0x40] = '\0';
    pcVar1[0x41] = '\0';
    pcVar1[0x42] = '\0';
    pcVar1[0x43] = '\0';
    Vec3_Scale(*(undefined4 *)(pcVar1 + 8),&uStack_80,pcVar1 + 0xb0);
    *(undefined4 *)(pcVar1 + 0x20) = uStack_80;
    *(undefined4 *)(pcVar1 + 0x24) = uStack_7c;
    *(undefined4 *)(pcVar1 + 0x28) = uStack_78;
    *(undefined4 *)(pcVar1 + 0x2c) = uStack_74;
    uVar3 = Vec3_Length(pcVar1 + 0x20);
    *(undefined4 *)(pcVar1 + 0xa0) = uVar3;
    Vec3_Scale(1.0 / *(float *)(pcVar1 + 0xa0),&uStack_90,pcVar1 + 0x20);
    *(undefined4 *)(pcVar1 + 0x90) = uStack_90;
    *(undefined4 *)(pcVar1 + 0x94) = uStack_8c;
    *(undefined4 *)(pcVar1 + 0x98) = uStack_88;
    *(undefined4 *)(pcVar1 + 0x9c) = uStack_84;
    if (*(float *)(pcVar1 + 0x30) < *(float *)(pcVar1 + 0xa0)) {
      Vec3_ScaleCopy(&uStack_a0,pcVar1 + 0x90);
      *(undefined4 *)(pcVar1 + 0x20) = uStack_a0;
      *(undefined4 *)(pcVar1 + 0x24) = uStack_9c;
      *(undefined4 *)(pcVar1 + 0x28) = uStack_98;
      *(undefined4 *)(pcVar1 + 0x2c) = uStack_94;
      Vec3_Scale(*(undefined4 *)(pcVar1 + 4),&uStack_b0,pcVar1 + 0x20);
      *(undefined4 *)(pcVar1 + 0xb0) = uStack_b0;
      *(undefined4 *)(pcVar1 + 0xb4) = uStack_ac;
      *(undefined4 *)(pcVar1 + 0xb8) = uStack_a8;
      *(undefined4 *)(pcVar1 + 0xbc) = uStack_a4;
      *(undefined4 *)(pcVar1 + 0xa0) = *(undefined4 *)(pcVar1 + 0x30);
    }
    Vec3_Scale(param_1,auStack_60,pcVar1 + 0x20);
    phys_sub_00163960(pcVar1 + 0x110,auStack_60);
    uStack_d0 = *(undefined4 *)(pcVar1 + 0x110);
    uStack_cc = *(undefined4 *)(pcVar1 + 0x114);
    uStack_c8 = *(undefined4 *)(pcVar1 + 0x118);
    *(undefined4 *)(pcVar1 + 0x10) = uStack_d0;
    *(undefined4 *)(pcVar1 + 0x14) = uStack_cc;
    *(undefined4 *)(pcVar1 + 0x18) = uStack_c8;
    *(undefined4 *)(pcVar1 + 0x1c) = uStack_c4;
    phys_sub_00162f00(auStack_c0,pcVar1 + 0xe0,pcVar1 + 0xc0);
    Vec3_Sub(&uStack_e0,pcVar1 + 0x10,auStack_c0);
    *(undefined4 *)(pcVar1 + 0xd0) = uStack_e0;
    *(undefined4 *)(pcVar1 + 0xd4) = uStack_dc;
    *(undefined4 *)(pcVar1 + 0xd8) = uStack_d8;
    *(undefined4 *)(pcVar1 + 0xdc) = uStack_d4;
    *(undefined4 *)(pcVar1 + 0x150) = *(undefined4 *)(pcVar1 + 0xd0);
    *(undefined4 *)(pcVar1 + 0x154) = *(undefined4 *)(pcVar1 + 0xd4);
    *(undefined4 *)(pcVar1 + 0x158) = *(undefined4 *)(pcVar1 + 0xd8);
    pcVar1[0x15c] = '\0';
    pcVar1[0x15d] = '\0';
    pcVar1[0x15e] = -0x80;
    pcVar1[0x15f] = '?';
  }
  return;
}

// 0x00163f80  size 0x1a0
void phys_sub_00163f80(undefined4 param_1,char *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
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
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  if (*param_2 == '\0') {
    Vec3_Scale(auStack_10,param_2 + 0x80);
    Vec3_AddInPlace(param_2 + 400,auStack_10);
    param_2[0x88] = '\0';
    param_2[0x89] = '\0';
    param_2[0x8a] = '\0';
    param_2[0x8b] = '\0';
    param_2[0x84] = '\0';
    param_2[0x85] = '\0';
    param_2[0x86] = '\0';
    param_2[0x87] = '\0';
    param_2[0x80] = '\0';
    param_2[0x81] = '\0';
    param_2[0x82] = '\0';
    param_2[0x83] = '\0';
    phys_sub_00162f00(&uStack_30,param_2 + 0x1a0,param_2 + 400);
    *(undefined4 *)(param_2 + 0x60) = uStack_30;
    *(undefined4 *)(param_2 + 100) = uStack_2c;
    *(undefined4 *)(param_2 + 0x68) = uStack_28;
    *(undefined4 *)(param_2 + 0x6c) = uStack_24;
    fVar1 = *(float *)(param_2 + 0x70);
    fVar3 = *(float *)(param_2 + 0x68) * *(float *)(param_2 + 0x68) +
            *(float *)(param_2 + 0x60) * *(float *)(param_2 + 0x60) +
            *(float *)(param_2 + 100) * *(float *)(param_2 + 100);
    if (fVar1 * fVar1 < fVar3) {
      fVar1 = fVar1 / SQRT(fVar3);
      Vec3_ScaleInPlace(fVar1,param_2 + 400);
      Vec3_ScaleInPlace(fVar1,param_2 + 0x60);
    }
    Vec3_Scale(param_1,auStack_20,param_2 + 0x40);
    Vec3_AddInPlace(param_2 + 0xb0,auStack_20);
    param_2[0x48] = '\0';
    param_2[0x49] = '\0';
    param_2[0x4a] = '\0';
    param_2[0x4b] = '\0';
    param_2[0x44] = '\0';
    param_2[0x45] = '\0';
    param_2[0x46] = '\0';
    param_2[0x47] = '\0';
    param_2[0x40] = '\0';
    param_2[0x41] = '\0';
    param_2[0x42] = '\0';
    param_2[0x43] = '\0';
    Vec3_Scale(*(undefined4 *)(param_2 + 8),&uStack_40,param_2 + 0xb0);
    *(undefined4 *)(param_2 + 0x20) = uStack_40;
    *(undefined4 *)(param_2 + 0x24) = uStack_3c;
    *(undefined4 *)(param_2 + 0x28) = uStack_38;
    *(undefined4 *)(param_2 + 0x2c) = uStack_34;
    uVar2 = Vec3_Length(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0xa0) = uVar2;
    Vec3_Scale(1.0 / *(float *)(param_2 + 0xa0),&uStack_50,param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x90) = uStack_50;
    *(undefined4 *)(param_2 + 0x94) = uStack_4c;
    *(undefined4 *)(param_2 + 0x98) = uStack_48;
    *(undefined4 *)(param_2 + 0x9c) = uStack_44;
    if (*(float *)(param_2 + 0x30) < *(float *)(param_2 + 0xa0)) {
      Vec3_ScaleCopy(&uStack_60,param_2 + 0x90);
      *(undefined4 *)(param_2 + 0x20) = uStack_60;
      *(undefined4 *)(param_2 + 0x24) = uStack_5c;
      *(undefined4 *)(param_2 + 0x28) = uStack_58;
      *(undefined4 *)(param_2 + 0x2c) = uStack_54;
      Vec3_Scale(*(undefined4 *)(param_2 + 4),&uStack_70,param_2 + 0x20);
      *(undefined4 *)(param_2 + 0xb0) = uStack_70;
      *(undefined4 *)(param_2 + 0xb4) = uStack_6c;
      *(undefined4 *)(param_2 + 0xb8) = uStack_68;
      *(undefined4 *)(param_2 + 0xbc) = uStack_64;
      *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x30);
    }
  }
  return;
}

