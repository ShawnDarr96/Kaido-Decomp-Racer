// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001cc000 - 0x001d0000
#include "ghidra_types.h"

// 0x001cc8e0  size 0x124
void FUN_001cc8e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16c8) = 0;
  *(undefined4 *)(param_1 + 0x16c4) = 0;
  *(undefined4 *)(param_1 + 0x16c0) = 0;
  *(undefined4 *)(param_1 + 0x16d8) = 0;
  *(undefined4 *)(param_1 + 0x16d4) = 0;
  *(undefined4 *)(param_1 + 0x16d0) = 0;
  *(undefined4 *)(param_1 + 0x16e8) = 0;
  *(undefined4 *)(param_1 + 0x16e4) = 0;
  *(undefined4 *)(param_1 + 0x16e0) = 0;
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  *(undefined4 *)(param_1 + 0x16f0) = 0;
  *(undefined4 *)(param_1 + 0x1708) = 0;
  *(undefined4 *)(param_1 + 0x1704) = 0;
  *(undefined4 *)(param_1 + 0x1700) = 0;
  *(float *)(param_1 + 0x1710) = (*(float *)(param_1 + 0xd64) * 180.0) / 3.1415927;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  *(undefined4 *)(param_1 + 0x1718) = 0;
  *(undefined4 *)(param_1 + 0x171c) = 0;
  *(undefined4 *)(param_1 + 0x1720) = 0;
  *(undefined4 *)(param_1 + 0x1724) = 0;
  *(undefined4 *)(param_1 + 0x1728) = 0;
  *(undefined4 *)(param_1 + 0x172c) = 0;
  *(undefined4 *)(param_1 + 0x1730) = 0;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  *(undefined4 *)(param_1 + 0x1738) = 0;
  *(undefined4 *)(param_1 + 0x173c) = 0;
  *(undefined4 *)(param_1 + 0x1740) = 0;
  *(undefined4 *)(param_1 + 0x1744) = 0;
  *(undefined4 *)(param_1 + 0x1748) = 0;
  *(undefined4 *)(param_1 + 0x174c) = 0;
  *(undefined4 *)(param_1 + 0x1750) = 0;
  *(undefined4 *)(param_1 + 0x1754) = 0;
  *(undefined4 *)(param_1 + 0x1758) = 0;
  *(undefined4 *)(param_1 + 0x175c) = 0;
  *(undefined4 *)(param_1 + 0x1760) = 0;
  *(undefined4 *)(param_1 + 0x1764) = 0;
  *(undefined4 *)(param_1 + 0x1768) = 0;
  *(undefined4 *)(param_1 + 0x176c) = 0;
  *(undefined4 *)(param_1 + 6000) = 0;
  *(undefined4 *)(param_1 + 0x1774) = 0;
  *(undefined4 *)(param_1 + 0x1778) = 0;
  *(undefined4 *)(param_1 + 0x177c) = 0;
  *(undefined4 *)(param_1 + 0x1780) = 0;
  *(undefined4 *)(param_1 + 0x1788) = 0;
  *(undefined4 *)(param_1 + 0x178c) = 0;
  *(undefined4 *)(param_1 + 0x1798) = 0;
  *(undefined4 *)(param_1 + 0x179c) = 0;
  *(undefined4 *)(param_1 + 0x17a0) = 0;
  *(undefined4 *)(param_1 + 0x1784) = *(undefined4 *)(param_1 + 0x1780);
  *(undefined4 *)(param_1 + 0x1790) = 0;
  *(undefined4 *)(param_1 + 0x1794) = 0;
  *(undefined4 *)(param_1 + 0x17a4) = 0;
  *(undefined4 *)(param_1 + 0x17a8) = 0;
  *(undefined4 *)(param_1 + 0x17ac) = 0;
  *(undefined4 *)(param_1 + 0x17b0) = 0;
  *(undefined4 *)(param_1 + 0x17b4) = 0;
  *(undefined2 *)(param_1 + 0x17b8) = 0;
  *(undefined4 *)(param_1 + 0x17bc) = 0;
  *(undefined4 *)(param_1 + 0x17c0) = 0;
  return;
}

// 0x001cca10  size 0x78
float FUN_001cca10(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = 0;
  fVar3 = 0.0;
  do {
    fVar2 = (float)FUN_001cca90(param_1,iVar1);
    if (fVar3 < fVar2) {
      fVar3 = (float)FUN_001cca90(param_1,iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return fVar3;
}

// 0x001cca90  size 0x174
float FUN_001cca90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
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
  
  iVar2 = param_1 + param_2 * 0x140;
  if (*(char *)(iVar2 + 0x1c1) == '\0') {
    fVar4 = 0.0;
  }
  else if ((*(float *)(param_1 + 0x40) * 3.6 <= 3.0) ||
          (fVar4 = (float)fabsf(*(undefined4 *)(iVar2 + 0x290)), fVar4 <= 0.34906587)) {
    uStack_4 = 0x3f800000;
    iVar1 = *(int *)(param_2 * 4 + param_1 + 0x7c0);
    Vec3_Scale(*(undefined4 *)(iVar2 + 0x28c),auStack_40,iVar2 + 0x230);
    Vec3_Scale(*(undefined4 *)(iVar1 + 0x34),auStack_30,auStack_40);
    phys_sub_00164eb0(auStack_50,*(undefined4 *)(param_1 + 0x154),iVar2 + 0x1f0);
    Vec3_Sub(&uStack_20,auStack_30,auStack_50);
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    uStack_8 = uStack_18;
    uStack_4 = uStack_14;
    uVar3 = Vec3_Dot(&uStack_10,&uStack_10);
    fVar4 = (float)vu0math_sub_00133650(uVar3);
    if ((fVar4 <= 3.3333333) || (fVar4 = (float)fabsf(*(undefined4 *)(iVar2 + 0x294)), fVar4 <= 0.2)
       ) {
      fVar4 = 0.0;
    }
  }
  return fVar4;
}

// 0x001ccc10  size 0xac8
void FUN_001ccc10(float param_1,int *param_2,ushort param_3,int param_4,undefined1 param_5,
                 long param_6,ulong param_7)

{
  short sVar1;
  short *psVar2;
  undefined1 auVar3 [16];
  undefined1 in_zero_qw [16];
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_v0_udw;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  long lVar16;
  int *piVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float afStack_f0 [4];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  piVar17 = param_2 + 0x4d8;
  uStack_4 = 0x3f800000;
  lVar16 = GameState_Get_40();
  if (lVar16 == 0) {
    if (param_6 == 0) {
      lVar16 = 1;
    }
    else {
      lVar16 = 0;
    }
  }
  else if (param_6 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 1;
  }
  *(ushort *)((int)param_2 + 0x1366) = param_3;
  *(short *)(param_2 + 0x4da) = (short)param_4;
  *(undefined2 *)((int)param_2 + 0x136a) = 0;
  *(undefined1 *)piVar17 = 0;
  FUN_001882c0(piVar17,0x36f230,0x36f238);
  fStack_8 = (float)param_2[0x4de];
  fStack_10 = (float)param_2[0x4dc];
  fStack_c = (float)param_2[0x4dd] + 0.1;
  FUN_00188b50(0x3f800000,0x36f230,auStack_30,*(undefined2 *)((int)param_2 + 0x1366),param_2[0x4db],
               *(undefined2 *)((int)param_2 + 0x136a),lVar16);
  vu0math_sub_00132b50(&fStack_50,auStack_30,param_2 + 0x4dc);
  vu0math_sub_00132b50(param_2 + 0x4ec,auStack_30,param_2 + 0x4dc);
  vu0math_sub_001328b0(param_2 + 0x4ec,param_2 + 0x4ec);
  piVar5 = param_2 + 0x4ee;
  uVar18 = vu0math_sub_00133650
                     ((float)param_2[0x4ec] * (float)param_2[0x4ec] +
                      (float)param_2[0x4ee] * (float)param_2[0x4ee]);
  uStack_40 = atan2f(param_2[0x4ed],uVar18);
  if (lVar16 == 0) {
    uVar18 = atan2f(param_2[0x4ec],*piVar5);
    uVar8 = newlib_sub_0012f600(uVar18);
    uVar8 = __subdf3(uVar8,0x3ff921fb54442d18);
    lVar16 = msl_sub_00100940(uVar8,0x400921fb54442d18);
    if (lVar16 == 0) {
      uVar18 = atan2f(param_2[0x4ec],*piVar5);
      uVar8 = newlib_sub_0012f600(uVar18);
      uVar8 = __subdf3(uVar8,0x3ff921fb54442d18);
      auVar15._8_8_ = in_v0_udw;
      auVar15._0_8_ = 0xc00921fb54442d18;
      auVar15 = _pcpyld(in_zero_qw,auVar15);
      lVar16 = msl_sub_00100960(uVar8,auVar15._0_8_);
      if (lVar16 == 0) {
        uVar18 = atan2f(param_2[0x4ec],*piVar5);
        uVar8 = newlib_sub_0012f600(uVar18);
        uVar8 = __subdf3(uVar8,0x3ff921fb54442d18);
      }
      else {
        uVar18 = atan2f(param_2[0x4ec],*piVar5);
        uVar8 = newlib_sub_0012f600(uVar18);
        uVar8 = __subdf3(uVar8,0x3ff921fb54442d18);
        uVar8 = __adddf3(0x401921fb54442d18,uVar8);
      }
    }
    else {
      uVar18 = atan2f(param_2[0x4ec],*piVar5);
      uVar8 = newlib_sub_0012f600(uVar18);
      uVar8 = __subdf3(uVar8,0x3ff921fb54442d18);
      uVar8 = __subdf3(uVar8,0x401921fb54442d18);
    }
    uStack_3c = maybe___extendsfdf2(uVar8);
  }
  else {
    uVar18 = atan2f(param_2[0x4ec],*piVar5);
    uVar8 = newlib_sub_0012f600(uVar18);
    uVar8 = __adddf3(0x3ff921fb54442d18,uVar8);
    lVar16 = msl_sub_00100940(uVar8,0x400921fb54442d18);
    if (lVar16 == 0) {
      uVar18 = atan2f(param_2[0x4ec],*piVar5);
      uVar8 = newlib_sub_0012f600(uVar18);
      uVar8 = __adddf3(0x3ff921fb54442d18,uVar8);
      auVar3._8_8_ = in_v0_udw;
      auVar3._0_8_ = 0xc00921fb54442d18;
      auVar15 = _pcpyld(in_zero_qw,auVar3);
      lVar16 = msl_sub_00100960(uVar8,auVar15._0_8_);
      if (lVar16 == 0) {
        uVar18 = atan2f(param_2[0x4ec],*piVar5);
        uVar8 = newlib_sub_0012f600(uVar18);
        uVar8 = __adddf3(0x3ff921fb54442d18,uVar8);
      }
      else {
        uVar18 = atan2f(param_2[0x4ec],*piVar5);
        uVar8 = newlib_sub_0012f600(uVar18);
        uVar8 = __adddf3(0x3ff921fb54442d18,uVar8);
        uVar8 = __adddf3(0x401921fb54442d18,uVar8);
      }
    }
    else {
      uVar18 = atan2f(param_2[0x4ec],*piVar5);
      uVar8 = newlib_sub_0012f600(uVar18);
      uVar8 = __adddf3(0x3ff921fb54442d18,uVar8);
      uVar8 = __subdf3(uVar8,0x401921fb54442d18);
    }
    uStack_3c = maybe___extendsfdf2(uVar8);
  }
  uStack_38 = 0;
  uStack_118 = 0;
  uStack_11c = uStack_3c;
  uStack_120 = uStack_40;
  phys_sub_00162970(&uStack_110,&uStack_120);
  uStack_20 = uStack_110;
  uStack_1c = uStack_10c;
  uStack_18 = uStack_108;
  uStack_14 = uStack_104;
  phys_sub_001651b0(param_2[0x55],&fStack_10);
  Car_SyncFromRigidBody(param_2);
  phys_sub_00162830(param_2[0x56]);
  phys_sub_00165050(param_2[0x55],&uStack_20);
  Car_SyncFromRigidBody(param_2);
  phys_sub_00162830(param_2[0x56]);
  uVar9 = phys_sub_001651a0(param_2[0x55]);
  pfVar4 = (float *)uVar9;
  uVar8 = phys_sub_00165040(param_2[0x55]);
  phys_sub_00162930(auStack_60,uVar8);
  vu0math_sub_00132ae0(param_2 + 0x4dc,uVar9);
  uStack_64 = 0x3f800000;
  uStack_74 = 0x3f800000;
  fVar19 = (param_1 * 1000.0) / 3600.0;
  fStack_80 = fStack_50;
  fStack_7c = fStack_4c;
  fStack_78 = fStack_48;
  phys_sub_00163bc0(&fStack_80);
  fStack_6c = fStack_7c * fVar19;
  fStack_70 = fStack_80 * fVar19;
  fStack_68 = fStack_78 * fVar19;
  phys_sub_00164f60(param_2[0x55],&fStack_70);
  iVar10 = 0;
  piVar5 = param_2;
  do {
    iVar10 = iVar10 + 1;
    *(char *)(piVar5 + 0x4f4) = (char)*piVar17;
    iVar12 = param_2[0x4d9];
    *(undefined2 *)((int)piVar5 + 0x13d2) = *(undefined2 *)((int)param_2 + 0x1362);
    *(short *)(piVar5 + 0x4f5) = (short)iVar12;
    iVar12 = param_2[0x4da];
    *(undefined2 *)((int)piVar5 + 0x13d6) = *(undefined2 *)((int)param_2 + 0x1366);
    *(short *)(piVar5 + 0x4f6) = (short)iVar12;
    *(undefined2 *)((int)piVar5 + 0x13da) = *(undefined2 *)((int)param_2 + 0x136a);
    piVar5[0x4f7] = param_2[0x4db];
    iVar12 = param_2[0x4dd];
    iVar13 = param_2[0x4de];
    iVar14 = param_2[0x4df];
    piVar5[0x4f8] = param_2[0x4dc];
    piVar5[0x4f9] = iVar12;
    piVar5[0x4fa] = iVar13;
    piVar5[0x4fb] = iVar14;
    iVar12 = param_2[0x4e1];
    iVar13 = param_2[0x4e2];
    iVar14 = param_2[0x4e3];
    piVar5[0x4fc] = param_2[0x4e0];
    piVar5[0x4fd] = iVar12;
    piVar5[0x4fe] = iVar13;
    piVar5[0x4ff] = iVar14;
    iVar12 = param_2[0x4e5];
    iVar13 = param_2[0x4e6];
    iVar14 = param_2[0x4e7];
    piVar5[0x500] = param_2[0x4e4];
    piVar5[0x501] = iVar12;
    piVar5[0x502] = iVar13;
    piVar5[0x503] = iVar14;
    piVar5[0x504] = param_2[0x4e8];
    piVar5[0x505] = param_2[0x4e9];
    *(char *)(piVar5 + 0x506) = (char)param_2[0x4ea];
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x4ec);
    piVar5[0x508] = auVar15._0_4_;
    piVar5[0x509] = auVar15._4_4_;
    piVar5[0x50a] = auVar15._8_4_;
    piVar5[0x50b] = auVar15._12_4_;
    piVar5[0x50c] = param_2[0x4f0];
    piVar5[0x50d] = param_2[0x4f1];
    *(char *)(piVar5 + 0x4f4) = (char)iVar10;
    piVar5 = piVar5 + 0x1c;
  } while (iVar10 < 4);
  uStack_84 = 0x3f800000;
  uStack_94 = 0x3f800000;
  uStack_a4 = 0x3f800000;
  uStack_b4 = 0x3f800000;
  afStack_f0[0] = DAT_003191c0;
  fVar20 = 0.0;
  afStack_f0[1] = (float)DAT_003191c4;
  afStack_f0[2] = (float)DAT_003191c8;
  afStack_f0[3] = (float)DAT_003191cc;
  uStack_e0 = DAT_003191d0;
  uStack_dc = DAT_003191d4;
  uStack_d8 = DAT_003191d8;
  uStack_d4 = DAT_003191dc;
  uStack_d0 = DAT_003191e0;
  uStack_cc = DAT_003191e4;
  uStack_c8 = DAT_003191e8;
  uStack_c4 = DAT_003191ec;
  psVar2 = *(short **)(*(int *)(iRam0036f230 + 4) + (uint)param_3 * 4);
  sVar1 = *psVar2;
  pfVar6 = (float *)(psVar2 + param_4 * 0x10 + 0x3e);
  pfVar11 = (float *)(psVar2 + sVar1 * 0x10 + param_4 * 6 + 0x3e);
  fVar19 = *pfVar11;
  fStack_ac = pfVar11[1];
  fStack_a8 = pfVar11[2];
  pfVar11 = (float *)(psVar2 + sVar1 * 0x14 + sVar1 * 2 + param_4 * 6 + 0x3e);
  fStack_90 = *pfVar11;
  fStack_b0 = fVar19 - *pfVar6;
  fStack_bc = pfVar11[1];
  fStack_b8 = pfVar11[2];
  fStack_c0 = fStack_90 - *pfVar6;
  fStack_a0 = fVar19 - fStack_90;
  fStack_8c = fStack_bc - fStack_ac;
  fStack_88 = fStack_b8 - fStack_a8;
  fStack_9c = fStack_ac - fStack_bc;
  fStack_90 = fStack_90 - fVar19;
  fStack_bc = fStack_bc - pfVar6[1];
  fStack_ac = fStack_ac - pfVar6[1];
  fStack_98 = fStack_a8 - fStack_b8;
  fStack_a8 = fStack_a8 - pfVar6[2];
  fStack_b8 = fStack_b8 - pfVar6[2];
  FUN_001dac80(&fStack_90);
  phys_sub_00163bc0(&fStack_90);
  phys_sub_00163bc0(&fStack_a0);
  phys_sub_00163bc0(&fStack_c0);
  phys_sub_00163bc0(&fStack_b0);
  switch(param_5) {
  case 1:
    fVar20 = 1.5;
    goto LAB_001cd4e8;
  case 2:
    fVar20 = 1.5;
    break;
  case 3:
    fVar20 = 3.0;
    break;
  case 4:
    fVar20 = 3.0;
    break;
  case 5:
    fVar20 = 4.5;
    break;
  case 6:
    fVar20 = 4.5;
    break;
  case 7:
  case 8:
    uVar7 = Race_GetCourseVariant();
    fVar20 = afStack_f0[uVar7 & 0xff];
  }
LAB_001cd4e8:
  switch(param_5) {
  default:
    fStack_10 = 0.0;
    fStack_c = 0.0;
    fStack_8 = 0.0;
    break;
  case 1:
  case 3:
  case 5:
  case 8:
    fStack_c = fStack_ac * fVar20;
    fStack_10 = fStack_b0 * fVar20;
    fStack_8 = fStack_a8 * fVar20;
    break;
  case 2:
  case 4:
  case 6:
  case 7:
    fStack_c = fStack_bc * fVar20;
    fStack_10 = fStack_c0 * fVar20;
    fStack_8 = fStack_b8 * fVar20;
  }
  fStack_10 = *pfVar4 + fStack_10;
  fStack_c = pfVar4[1] + fStack_c;
  fStack_8 = pfVar4[2] + fStack_8;
  phys_sub_001651b0(param_2[0x55],&fStack_10);
  Car_SyncFromRigidBody(param_2);
  phys_sub_00162830(param_2[0x56]);
  vu0math_sub_00132ae0(param_2 + 0x4dc,&fStack_10);
  iVar10 = 0;
  piVar5 = param_2;
  do {
    iVar10 = iVar10 + 1;
    *(char *)(piVar5 + 0x4f4) = (char)*piVar17;
    iVar12 = param_2[0x4d9];
    *(undefined2 *)((int)piVar5 + 0x13d2) = *(undefined2 *)((int)param_2 + 0x1362);
    *(short *)(piVar5 + 0x4f5) = (short)iVar12;
    iVar12 = param_2[0x4da];
    *(undefined2 *)((int)piVar5 + 0x13d6) = *(undefined2 *)((int)param_2 + 0x1366);
    *(short *)(piVar5 + 0x4f6) = (short)iVar12;
    *(undefined2 *)((int)piVar5 + 0x13da) = *(undefined2 *)((int)param_2 + 0x136a);
    piVar5[0x4f7] = param_2[0x4db];
    iVar12 = param_2[0x4dd];
    iVar13 = param_2[0x4de];
    iVar14 = param_2[0x4df];
    piVar5[0x4f8] = param_2[0x4dc];
    piVar5[0x4f9] = iVar12;
    piVar5[0x4fa] = iVar13;
    piVar5[0x4fb] = iVar14;
    iVar12 = param_2[0x4e1];
    iVar13 = param_2[0x4e2];
    iVar14 = param_2[0x4e3];
    piVar5[0x4fc] = param_2[0x4e0];
    piVar5[0x4fd] = iVar12;
    piVar5[0x4fe] = iVar13;
    piVar5[0x4ff] = iVar14;
    iVar12 = param_2[0x4e5];
    iVar13 = param_2[0x4e6];
    iVar14 = param_2[0x4e7];
    piVar5[0x500] = param_2[0x4e4];
    piVar5[0x501] = iVar12;
    piVar5[0x502] = iVar13;
    piVar5[0x503] = iVar14;
    piVar5[0x504] = param_2[0x4e8];
    piVar5[0x505] = param_2[0x4e9];
    *(char *)(piVar5 + 0x506) = (char)param_2[0x4ea];
    iVar12 = param_2[0x4ed];
    iVar13 = param_2[0x4ee];
    iVar14 = param_2[0x4ef];
    piVar5[0x508] = param_2[0x4ec];
    piVar5[0x509] = iVar12;
    piVar5[0x50a] = iVar13;
    piVar5[0x50b] = iVar14;
    piVar5[0x50c] = param_2[0x4f0];
    piVar5[0x50d] = param_2[0x4f1];
    *(char *)(piVar5 + 0x4f4) = (char)iVar10;
    piVar5 = piVar5 + 0x1c;
  } while (iVar10 < 4);
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  phys_sub_00164d90(param_2[0x55],&uStack_100);
  if ((param_7 & 0x20) == 0) {
    iVar10 = 0;
    do {
      (**(code **)(*param_2 + 0x38))(0x3c888889,param_2);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x3c);
  }
  return;
}

// 0x001cd6e0  size 0x450
void FUN_001cd6e0(void)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  undefined2 uStack_20;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  iVar5 = Course_GetCurrentId();
  puVar1 = (&PTR_DAT_00326710)[iVar5];
  iVar5 = GameState_GetMoneyTotal3();
  uVar13 = 0;
  bVar3 = false;
  if (puVar1 == (undefined *)0x0) {
    iVar9 = 0;
    if (0 < iVar5) {
      iVar12 = 0;
      iVar7 = 5;
      do {
        FUN_001ccc10(0,*(int *)((int)piGpffff8c68 + iVar12),0,iVar7,0,1,
                     *(undefined4 *)(*(int *)(*(int *)((int)piGpffff8c68 + iVar12) + 0x17dc) + 4));
        FUN_001cba60(*(undefined4 *)((int)piGpffff8c68 + iVar12));
        iVar9 = iVar9 + 1;
        iVar12 = iVar12 + 4;
        iVar7 = iVar7 + 2;
      } while (iVar9 < iVar5);
    }
  }
  else {
    uVar6 = GameState_Get_1();
    iVar9 = *(int *)(puVar1 + (uVar6 & 0xff) * 0x10 + 4);
    iVar7 = GameState_Get_c();
    puVar8 = (undefined4 *)(iVar9 + iVar7 * 0x10);
    uStack_20 = (undefined2)*puVar8;
    iVar9 = FUN_001dde40(uStack_20,puVar8[1]);
    bVar2 = true;
    if ((iVar5 != 1) && (bVar2 = bVar3, iVar5 == 2)) {
      cVar4 = GameState_Get_354_7050();
      if ((cVar4 == '\x04') || (cVar4 = GameState_Get_354_7050(), cVar4 == '\x05')) {
        bVar2 = true;
      }
      else if ((*(char *)(*(int *)(*piGpffff8c68 + 0x17dc) + 8) == '\0') &&
              (*(char *)(*(int *)(piGpffff8c68[1] + 0x17dc) + 8) == '\0')) {
        bVar2 = true;
      }
    }
    uVar6 = 0;
    if (0 < iVar5) {
      iVar7 = 0;
      do {
        uVar14 = 0;
        iVar12 = *(int *)(*(int *)((int)piGpffff8c68 + iVar7) + 0x17dc);
        iVar15 = 0;
        if ((*(uint *)(iVar12 + 4) & 1) == 0) {
          if ((*(uint *)(iVar12 + 4) & 2) != 0) {
            uVar16 = (long)*(char *)(iVar12 + 8);
            if ((long)*(char *)(iVar12 + 8) == 0xffffffffffffffff) {
              uVar16 = uVar13;
            }
            if (bVar2) {
              uVar14 = 0;
            }
            else {
              lVar10 = GameState_Get_40();
              if (lVar10 == 0) {
                uVar11 = uVar16 & 1;
                if (((long)uVar16 < 0) && (uVar11 != 0)) {
                  uVar11 = (ulong)((int)uVar11 + -2);
                }
                if (uVar11 == 0) {
                  uVar14 = 7;
                }
                else {
                  uVar14 = 8;
                }
              }
              else {
                uVar11 = uVar16 & 1;
                if (((long)uVar16 < 0) && (uVar11 != 0)) {
                  uVar11 = (ulong)((int)uVar11 + -2);
                }
                if (uVar11 == 0) {
                  uVar14 = 8;
                }
                else {
                  uVar14 = 7;
                }
              }
            }
            cVar4 = GameState_Get_354_7050();
            if ((cVar4 == '\0') && (iVar5 == 2)) {
              uVar16 = 0;
            }
            uVar13 = (ulong)((int)uVar13 + 1);
            iVar15 = (int)uVar16 * 2 + 3;
          }
        }
        else {
          uVar16 = (long)*(char *)(iVar12 + 8);
          if ((long)*(char *)(iVar12 + 8) == 0xffffffffffffffff) {
            uVar16 = uVar13;
          }
          if (bVar2) {
            uVar14 = 0;
          }
          else {
            lVar10 = GameState_Get_40();
            if (lVar10 == 0) {
              uVar11 = uVar16 & 1;
              if (((long)uVar16 < 0) && (uVar11 != 0)) {
                uVar11 = (ulong)((int)uVar11 + -2);
              }
              if (uVar11 == 0) {
                uVar14 = 7;
              }
              else {
                uVar14 = 8;
              }
            }
            else {
              uVar11 = uVar16 & 1;
              if (((long)uVar16 < 0) && (uVar11 != 0)) {
                uVar11 = (ulong)((int)uVar11 + -2);
              }
              if (uVar11 == 0) {
                uVar14 = 8;
              }
              else {
                uVar14 = 7;
              }
            }
          }
          cVar4 = GameState_Get_354_7050();
          if ((cVar4 == '\0') && (iVar5 == 2)) {
            uVar16 = 0;
          }
          else {
            cVar4 = RaceCtx_GetMode();
            if (cVar4 == '\x04') {
              uVar16 = 0;
            }
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          iVar15 = (int)uVar16 * 2 + 3;
        }
        lVar10 = GameState_Get_40();
        if (lVar10 == 0) {
          iVar15 = iVar15 * -0x20;
        }
        else {
          iVar15 = iVar15 * 0x20;
        }
        FUN_001ddda0(iVar9 + iVar15,&uStack_2,&uStack_4);
        FUN_001ccc10(0,*(undefined4 *)((int)piGpffff8c68 + iVar7),uStack_2,uStack_4,uVar14,1,
                     *(undefined4 *)(iVar12 + 4));
        FUN_001cba60(*(undefined4 *)((int)piGpffff8c68 + iVar7));
        if ((iRam004301b0 == 0) || (uRam004301ac <= uVar6)) {
          iVar12 = 0;
        }
        else {
          iVar12 = iRam004301b0 + uVar6 * 0xb900;
        }
        MotionBlur_Advance(iVar12);
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 4;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// 0x001cdb30  size 0x90
long FUN_001cdb30(long param_1,short param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = &DAT_0036e5d0;
    if (puVar1 != (undefined4 *)0xfffff410) {
      maybe_std_string_dtor(puVar1 + 0x302,0xffffffffffffffff);
      maybe_std_string_dtor(puVar1 + 0x2ff,0xffffffffffffffff);
      maybe_std_string_dtor(puVar1 + 0x2fc,0xffffffffffffffff);
    }
    Car_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001cdbc0  size 0x84
void FUN_001cdbc0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    piVar1 = *(int **)(iRam0036f358 + iVar2);
    if (piVar1 != (int *)0x0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1,1);
      }
      *(undefined4 *)(iRam0036f358 + iVar2) = 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 7);
  Mem_Free(iRam0036f358);
  return;
}

// 0x001cdc50  size 0x74
void FUN_001cdc50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = GameState_GetMoneyTotal3();
  iVar2 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      FUN_001cde10(*(undefined4 *)(iGpffff8c68 + iVar3),iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < iVar1);
  }
  return;
}

// 0x001cdcd0  size 0x138
void FUN_001cdcd0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar2 = Mem_Alloc16(0x1c,param_1);
  puGpffff8c68 = (undefined4 *)uVar2;
  Mem_Set16(uVar2,0,0x1c);
  iVar1 = GameState_GetMoneyTotal3();
  iVar6 = 0;
  *puGpffff8c68 = 0;
  puGpffff8c68[1] = 0;
  puGpffff8c68[2] = 0;
  puGpffff8c68[3] = 0;
  puGpffff8c68[4] = 0;
  puGpffff8c68[5] = 0;
  puGpffff8c68[6] = 0;
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      lVar3 = maybe_operator_new_arr(0x17e0);
      puVar5 = (undefined4 *)lVar3;
      if (lVar3 != 0) {
        Car_ctor(lVar3);
        *puVar5 = &DAT_0036e5d0;
        CarSpec_ctor(puVar5 + 0x2fc);
        puVar5[0x5af] = 0x3f800000;
        puVar5[0x5b3] = 0x3f800000;
        puVar5[0x5b7] = 0x3f800000;
        puVar5[0x5bb] = 0x3f800000;
        puVar5[0x5bf] = 0x3f800000;
        puVar5[0x5c3] = 0x3f800000;
      }
      *(undefined4 **)((int)puGpffff8c68 + iVar4) = puVar5;
      FUN_001ce4d0(*(undefined4 *)((int)puGpffff8c68 + iVar4),iVar6);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < iVar1);
  }
  return;
}

// 0x001cde10  size 0x164
void FUN_001cde10(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_210 [52];
  undefined1 auStack_140 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [48];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  
  GameState_CopyPlayerRecord(auStack_210);
  puVar8 = auStack_210;
  puVar7 = &uStack_d0;
  iVar5 = 0x33;
  do {
    iVar5 = iVar5 + -1;
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (0 < iVar5);
  if ((uStack_cc & 0x20) == 0) {
    FUN_001cdf80(param_1,param_2);
    (**(code **)(*(int *)param_1 + 0x38))(0x3c888889,param_1);
    FUN_001cee10(param_1);
    if (((uStack_cc & 0x100) == 0) &&
       (((uStack_cc & 0x60) == 0 || (lVar3 = GameState_Get_ec(), lVar3 != 0)))) {
      FUN_001ca810(param_1,param_2);
    }
    FUN_001cba60(param_1);
  }
  else {
    puVar2 = (undefined1 *)0x10;
    puVar6 = auStack_120;
    puVar1 = puVar6;
    while (puVar1 != (undefined1 *)0x0) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + -1;
      puVar1 = puVar2;
    }
    uVar4 = FUN_001e8f30();
    Course_GetStartTransform(uVar4,auStack_110,auStack_120,0);
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    uStack_128 = uStack_d8;
    phys_sub_00163340(auStack_140,auStack_110);
    FUN_001ced30(param_1,&uStack_130,auStack_140);
    FUN_001cb190(param_1);
  }
  return;
}

// 0x001cdf80  size 0x548
void FUN_001cdf80(undefined8 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  
  bVar3 = false;
  if (iRam0036f34c == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(param_2 * 4 + iRam0036f34c + 8);
  }
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  piVar5 = (int *)param_1;
  if ((piVar5[0x5f6] & 1U) != 0) {
    (**(code **)(*piVar5 + 0x10))(0,0x3c888889,param_1,0,0);
    (**(code **)(*piVar5 + 0x2c))(0x3f800000,param_1);
    (**(code **)(*piVar5 + 0x34))(0,param_1);
    (**(code **)(*piVar5 + 0x30))(0x3f800000,param_1);
    piVar5[0x5f6] = piVar5[0x5f6] | 0x4000;
    goto LAB_001ce1b8;
  }
  if ((piVar5[0x5f6] & 2U) != 0) {
    bVar3 = true;
    (**(code **)(*piVar5 + 0x10))(0,0x3c888889,param_1,0,0);
    (**(code **)(*piVar5 + 0x2c))(0x3f800000,param_1);
    piVar5[0x5f6] = piVar5[0x5f6] | 0x4000;
    (**(code **)(*piVar5 + 0x34))(*puVar4,param_1);
    (**(code **)(*piVar5 + 0x30))(0x3f800000,param_1);
    goto LAB_001ce1b8;
  }
  cVar1 = *(char *)(puVar4 + 5);
  if (cVar1 == '\x02') {
    (**(code **)(*piVar5 + 0x24))(puVar4[2],0x3c888889,param_1);
    if ((char)piVar5[0x223] == '\x01') {
      *(undefined1 *)(piVar5 + 0x223) = 0;
    }
LAB_001ce0d0:
    iVar6 = *piVar5;
  }
  else {
    if (cVar1 == '\x01') {
      bVar3 = true;
      (**(code **)(*piVar5 + 0x24))(puVar4[2],0x3c888889,param_1);
      if ((char)piVar5[0x223] == '\x01') {
        *(undefined1 *)(piVar5 + 0x223) = 0;
      }
      goto LAB_001ce0d0;
    }
    if (cVar1 == '\0') {
      bVar3 = true;
      (**(code **)(*piVar5 + 0x10))
                (puVar4[2],0x3c888889,param_1,(puVar4[4] & 0x10) != 0,(puVar4[4] & 0x20) != 0);
      if ((char)piVar5[0x223] == '\0') {
        *(undefined1 *)(piVar5 + 0x223) = 1;
      }
      goto LAB_001ce0d0;
    }
    iVar6 = *piVar5;
  }
  (**(code **)(iVar6 + 0x2c))(puVar4[1],param_1);
  if ((float)puVar4[1] == 0.0) {
    piVar5[0x5f6] = piVar5[0x5f6] & 0xffffbfff;
  }
  else {
    piVar5[0x5f6] = piVar5[0x5f6] | 0x4000;
  }
  (**(code **)(*piVar5 + 0x34))(*puVar4,param_1);
  (**(code **)(*piVar5 + 0x30))(puVar4[3],param_1);
  if ((puVar4[4] & 0x200) == 0) {
    (**(code **)(*piVar5 + 0x1c))(0x3c888889,param_1,0);
    cVar1 = *(char *)((int)piVar5 + 0x811);
  }
  else {
    (**(code **)(*piVar5 + 0x1c))(0x3c888889,param_1,1);
    cVar1 = *(char *)((int)piVar5 + 0x811);
  }
  if (cVar1 == '\0') {
    if ((puVar4[4] & 1) == 0) {
      if ((puVar4[4] & 2) != 0) {
        Car_RequestShiftDown(param_1);
      }
    }
    else {
      Car_RequestShiftUp(param_1);
    }
  }
LAB_001ce1b8:
  if (bVar3) {
    uVar2 = puVar4[4];
    if ((uVar2 & 0x2000) == 0) {
      if ((uVar2 & 0x800) == 0) {
        if ((uVar2 & 0x1000) != 0) {
          if ((piVar5[0x5f6] & 0x2000U) == 0) {
            piVar5[0x5f6] = piVar5[0x5f6] & 0xffffefff;
            piVar5[0x5f6] = piVar5[0x5f6] | 0x2000;
          }
          else {
            piVar5[0x5f6] = piVar5[0x5f6] & 0xffffdfff;
          }
        }
      }
      else if ((piVar5[0x5f6] & 0x1000U) == 0) {
        piVar5[0x5f6] = piVar5[0x5f6] & 0xffffdfff;
        piVar5[0x5f6] = piVar5[0x5f6] | 0x1000;
      }
      else {
        piVar5[0x5f6] = piVar5[0x5f6] & 0xffffefff;
      }
    }
    else {
      uVar2 = piVar5[0x5f6];
      if (((uVar2 & 0x2000) == 0) || ((uVar2 & 0x1000) == 0)) {
        piVar5[0x5f6] = piVar5[0x5f6] | 0x3000;
      }
      else {
        piVar5[0x5f6] = uVar2 & 0xffffcfff;
      }
    }
    if ((puVar4[4] & 0x800000) != 0) {
      uVar2 = piVar5[0x5f6];
      if (((uVar2 & 8) == 0) || ((uVar2 & 0x10) == 0)) {
        piVar5[0x5f6] = piVar5[0x5f6] | 8;
        piVar5[0x5f6] = piVar5[0x5f6] | 0x20;
      }
      else {
        piVar5[0x5f6] = uVar2 & 0xfffffff7;
        if ((puVar4[4] & 0x100) == 0) {
          piVar5[0x5f6] = piVar5[0x5f6] | 0x40;
        }
      }
    }
    if ((puVar4[4] & 0x100) == 0) {
      uVar2 = piVar5[0x5f6];
      if (((uVar2 & 0x80) != 0) && ((uVar2 & 0x10) != 0)) {
        piVar5[0x5f6] = uVar2 & 0xffffff7f;
        if ((piVar5[0x5f6] & 8U) == 0) {
          piVar5[0x5f6] = piVar5[0x5f6] | 0x40;
        }
      }
    }
    else {
      piVar5[0x5f6] = piVar5[0x5f6] | 0x80;
      if ((piVar5[0x5f6] & 0x10U) == 0) {
        piVar5[0x5f6] = piVar5[0x5f6] | 0x20;
      }
    }
  }
  return;
}

// 0x001ce4d0  size 0x268
void FUN_001ce4d0(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint auStack_1a0 [52];
  uint auStack_d0 [2];
  undefined1 uStack_c7;
  int iStack_c0;
  
  GameState_CopyPlayerRecord(auStack_1a0);
  puVar9 = auStack_1a0;
  puVar8 = auStack_d0;
  iVar6 = 0x33;
  do {
    iVar6 = iVar6 + -1;
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (0 < iVar6);
  *(undefined4 *)(param_1 + 0x17d8) = 0;
  if ((auStack_d0[1] & 0x40) != 0) {
    *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 0x400;
  }
  *(undefined4 *)(param_1 + 0x17d0) = 0;
  *(undefined4 *)(param_1 + 0x17d4) = 0;
  uVar2 = GameState_Elem_f0_xcc(param_2);
  *(undefined4 *)(param_1 + 0x17dc) = uVar2;
  *(undefined4 *)(param_1 + 0xbe0) = 0;
  *(undefined4 *)(param_1 + 0xbe4) = 0;
  *(undefined4 *)(param_1 + 0xbe8) = 0;
  *(undefined4 *)(param_1 + 0xbec) = 0;
  uVar3 = GameState_Elem_3e0_x540(uStack_c7);
  FUN_001ceef0(uVar3,param_1 + 0xbf0,auStack_d0,1);
  Car_Reset(param_1,param_1 + 0xbf0,1,7);
  uVar4 = PhysContact_GetBodyB(*(int *)(param_1 + 0x158) + 0x10);
  uVar10 = 0;
  *(int *)(param_1 + 0xae0) = param_1 + 0x1360;
  iVar6 = param_1;
  do {
    iVar7 = param_1 + uVar10 * 0x70;
    *(char *)(iVar7 + 0x13d0) = (char)uVar10 + '\x01';
    *(int *)(iVar6 + 0x1c4) = iVar7 + 0x13d0;
    (**(code **)(*(int *)uVar4 + 0x58))(uVar4,uVar10);
    uVar10 = uVar10 + 1;
    iVar6 = iVar6 + 0x140;
  } while (uVar10 < 4);
  *(undefined1 *)(param_1 + 0x9a8) = 1;
  cVar1 = FUN_001d2200(auStack_d0,0x14);
  if (cVar1 == '\0') {
    Car_SetHandbrake(0,param_1,0);
  }
  else {
    iVar6 = FUN_001d2200(auStack_d0,0x14);
    Car_SetHandbrake((float)iVar6 * 0.05 + -1.0,param_1,1);
  }
  cVar1 = FUN_001d2200(auStack_d0,0x16);
  *(bool *)(param_1 + 0x892) = cVar1 != '\0';
  *(undefined1 *)(param_1 + 0x890) = 1;
  lVar5 = FUN_001d2280(auStack_d0,0);
  if ((lVar5 < 3) && (*(int *)((int)uVar3 + 0x8c) != 2)) {
    *(undefined1 *)(param_1 + 0x8f0) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x8f0) = 1;
  }
  *(uint *)(param_1 + 0x884) = *(uint *)(param_1 + 0x884) | 2;
  *(bool *)(param_1 + 0x811) = iStack_c0 != 0;
  FUN_001ce740(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x88c) = 1;
  FUN_001cc8e0(param_1);
  return;
}

// 0x001ce740  size 0x5dc
void FUN_001ce740(int param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_f21;
  float unaff_f20;
  float in_f23;
  float unaff_f22;
  uint auStack_2c0 [52];
  float afStack_1f0 [24];
  float afStack_190 [4];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float afStack_170 [4];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  float afStack_150 [4];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float afStack_130 [24];
  uint auStack_d0 [52];
  
  GameState_CopyPlayerRecord(auStack_2c0);
  puVar6 = auStack_2c0;
  puVar5 = auStack_d0;
  iVar4 = 0x33;
  do {
    iVar4 = iVar4 + -1;
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar4);
  pfVar7 = afStack_130;
  pfVar9 = (float *)&DAT_003190a0;
  iVar4 = 0xc;
  do {
    iVar4 = iVar4 + -1;
    fVar12 = pfVar9[1];
    *pfVar7 = *pfVar9;
    pfVar7[1] = fVar12;
    pfVar9 = pfVar9 + 2;
    pfVar7 = pfVar7 + 2;
  } while (0 < iVar4);
  pfVar9 = (float *)&DAT_00319160;
  pfVar7 = afStack_1f0;
  iVar4 = 0xc;
  afStack_150[1] = (float)DAT_00319104;
  afStack_150[0] = DAT_00319100;
  afStack_150[3] = (float)DAT_0031910c;
  afStack_150[2] = (float)DAT_00319108;
  uStack_13c = DAT_00319114;
  uStack_140 = DAT_00319110;
  uStack_138 = DAT_00319118;
  afStack_170[0] = DAT_00319120;
  afStack_170[1] = (float)DAT_00319124;
  uStack_160 = DAT_00319130;
  afStack_170[2] = (float)DAT_00319128;
  afStack_170[3] = (float)DAT_0031912c;
  afStack_190[0] = DAT_00319140;
  uStack_15c = DAT_00319134;
  uStack_180 = DAT_00319150;
  uStack_158 = DAT_00319138;
  afStack_190[1] = (float)DAT_00319144;
  afStack_190[2] = (float)DAT_00319148;
  afStack_190[3] = (float)DAT_0031914c;
  uStack_17c = DAT_00319154;
  do {
    iVar4 = iVar4 + -1;
    fVar12 = pfVar9[1];
    *pfVar7 = *pfVar9;
    pfVar7[1] = fVar12;
    pfVar9 = pfVar9 + 2;
    pfVar7 = pfVar7 + 2;
  } while (0 < iVar4);
  bVar1 = false;
  if (param_3 == 0) {
    if (((auStack_d0[1] & 2) == 0) || ((auStack_d0[1] & 0x100) == 0)) {
      *(undefined4 *)(param_1 + 0x8e0) = 1;
      uVar2 = GameState_Get_2();
    }
    else {
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x8e0) = 1;
    }
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x8e0) = 1;
  }
  uVar2 = uVar2 & 0xff;
  iVar4 = 0;
  do {
    if (param_3 == 0) {
      if (iVar4 == 0) {
        uVar11 = FUN_001d2240(auStack_d0,0xf);
      }
      else {
        uVar11 = FUN_001d2240(auStack_d0,0x10);
      }
      iVar8 = FUN_001d3540(uVar11);
    }
    else {
      uVar11 = 0x93;
      iVar8 = 5;
    }
    sVar3 = (short)uVar11;
    if (sVar3 == 0x9d) {
      unaff_f22 = afStack_130[uVar2 * 4 + 3];
      in_f23 = afStack_1f0[uVar2 * 4 + 3];
      in_f21 = (float)(iVar8 + -1) / 4.0;
    }
    else if (sVar3 == 0x98) {
      in_f21 = (float)(iVar8 + -1) / 4.0;
      in_f23 = afStack_1f0[uVar2 * 4 + 2];
      unaff_f22 = afStack_130[uVar2 * 4 + 2];
    }
    else if (sVar3 == 0x93) {
      in_f23 = afStack_1f0[uVar2 * 4 + 1];
      unaff_f22 = afStack_130[uVar2 * 4 + 1];
      if (((uVar2 == 1) || (uVar2 == 2)) || (uVar2 - 4 < 2)) {
        bVar1 = true;
      }
      in_f21 = (float)(iVar8 + -1) / 4.0;
    }
    else if (sVar3 == 0x8d) {
      in_f23 = afStack_1f0[uVar2 * 4];
      unaff_f22 = afStack_130[uVar2 * 4];
      if (((uVar2 == 1) || (uVar2 == 2)) || (uVar2 - 4 < 2)) {
        bVar1 = true;
      }
      in_f21 = (float)iVar8 / 5.0;
    }
    if (bVar1) {
      unaff_f20 = in_f21 * 0.3;
    }
    if (iVar4 == 0) {
      iVar10 = 0;
      pfVar9 = afStack_150;
      pfVar7 = afStack_170;
      fVar12 = afStack_190[uVar2];
      iVar8 = param_1;
      do {
        if (iVar10 < 7) {
          fVar13 = *pfVar7;
          fVar14 = *pfVar9;
          *(undefined4 *)(iVar8 + 0x1590) = 0;
          *(float *)(iVar8 + 0x1594) = fVar12 * fVar13;
          fVar14 = ((1.0 - (1.0 - unaff_f22) * 0.2) - unaff_f20) * fVar14;
          *(undefined4 *)(iVar8 + 0x1598) = 0;
          *(float *)(iVar8 + 0x159c) = fVar14;
          *(float *)(iVar8 + 0x15a0) = fVar14 + in_f23;
          *(int *)(param_1 + iVar10 * 4 + 0x9ac) = iVar8 + 0x1590;
        }
        else {
          *(int *)(param_1 + iVar10 * 4 + 0x9ac) = param_1 + 0x1590;
        }
        iVar10 = iVar10 + 1;
        pfVar9 = pfVar9 + 1;
        pfVar7 = pfVar7 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar10 < 0x20);
    }
    else {
      iVar10 = 0;
      pfVar9 = afStack_150;
      pfVar7 = afStack_170;
      fVar12 = afStack_190[uVar2];
      iVar8 = param_1;
      do {
        if (iVar10 < 7) {
          fVar13 = *pfVar7;
          fVar14 = *pfVar9;
          *(undefined4 *)(iVar8 + 0x161c) = 0;
          *(float *)(iVar8 + 0x1620) = fVar12 * fVar13;
          fVar14 = ((1.0 - (1.0 - unaff_f22) * 0.2) - unaff_f20) * fVar14;
          *(undefined4 *)(iVar8 + 0x1624) = 0;
          *(float *)(iVar8 + 0x1628) = fVar14;
          *(float *)(iVar8 + 0x162c) = fVar14 + in_f23;
          *(int *)(param_1 + iVar10 * 4 + 0xa2c) = iVar8 + 0x161c;
        }
        else {
          *(int *)(param_1 + iVar10 * 4 + 0xa2c) = param_1 + 0x161c;
        }
        iVar10 = iVar10 + 1;
        pfVar9 = pfVar9 + 1;
        pfVar7 = pfVar7 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar10 < 0x20);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}

// 0x001ced30  size 0xdc
void FUN_001ced30(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
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
  
  uStack_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_4 = param_2[3];
  iVar2 = (int)param_1;
  uStack_20 = *param_3;
  uStack_1c = param_3[1];
  uStack_18 = param_3[2];
  uStack_14 = param_3[3];
  uStack_24 = 0x3f800000;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  uStack_8 = uStack_28;
  phys_sub_001651b0(*(undefined4 *)(iVar2 + 0x154),&uStack_30);
  Car_SyncFromRigidBody(param_1);
  phys_sub_00162830(*(undefined4 *)(iVar2 + 0x158));
  phys_sub_00165050(*(undefined4 *)(iVar2 + 0x154),&uStack_20);
  Car_SyncFromRigidBody(param_1);
  phys_sub_00162830(*(undefined4 *)(iVar2 + 0x158));
  *(undefined4 *)(iVar2 + 0x1370) = uStack_10;
  *(undefined4 *)(iVar2 + 0x1374) = uStack_c;
  *(undefined4 *)(iVar2 + 0x1378) = uStack_8;
  *(undefined4 *)(iVar2 + 0x137c) = uStack_4;
  thunk_FUN_00188370(iVar2 + 0x1360,(int)register0x000001c0 + -0x74c0,
                     (int)register0x000001c0 + -0x74b8);
  *(undefined4 *)(iVar2 + 0x17d4) = *(undefined4 *)(iVar2 + 0x17d0);
  uVar1 = FUN_001dde80(*(undefined2 *)(iVar2 + 0x1366),*(undefined4 *)(iVar2 + 0x136c));
  *(undefined4 *)(iVar2 + 0x17d0) = uVar1;
  return;
}

// 0x001cee10  size 0xd8
void FUN_001cee10(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = phys_sub_001651a0(*(undefined4 *)(param_1 + 0x154));
  vu0math_sub_00132ae0(param_1 + 0x1370,uVar2);
  thunk_FUN_00188370(param_1 + 0x1360,(int)register0x000001c0 + -0x74c0,
                     (int)register0x000001c0 + -0x74b8);
  iVar3 = 0;
  iVar4 = param_1;
  iVar5 = param_1;
  do {
    vu0math_sub_00132ae0(iVar5 + 0x13e0,iVar4 + 0x1f0);
    thunk_FUN_00188370(iVar5 + 0x13d0,(int)register0x000001c0 + -0x74c0,
                       (int)register0x000001c0 + -0x74b8);
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 0x70;
    iVar4 = iVar4 + 0x140;
  } while (iVar3 < 4);
  *(undefined4 *)(param_1 + 0x17d4) = *(undefined4 *)(param_1 + 0x17d0);
  uVar1 = FUN_001dde80(*(undefined2 *)(param_1 + 0x1366),*(undefined4 *)(param_1 + 0x136c));
  *(undefined4 *)(param_1 + 0x17d0) = uVar1;
  return;
}

// 0x001ceef0  size 0x960
void FUN_001ceef0(int param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 auStack_180 [24];
  float afStack_120 [24];
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
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
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
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
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar14 = 0;
  iVar7 = param_1 + 0xa0;
  iVar5 = param_1 + 0x310;
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_2 + 0x520) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0x6e0) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_2 + 0x6e4) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_2 + 0x6dc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_2 + 0x6d8) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x710) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_2 + 0x714) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_2 + 0x718) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 0x720) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_2 + 0x724) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_2 + 0x728) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_2 + 0x730) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_2 + 0x734) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_2 + 0x16c) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_2 + 0x17c) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_2 + 0x218) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(param_2 + 0x21c) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_2 + 0x24c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_2 + 0x250) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_2 + 0x284) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_2 + 0x288) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_2 + 0x214) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_2 + 0x328) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_2 + 0x32c) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_2 + 0x35c) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_2 + 0x360) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_2 + 0x394) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_2 + 0x398) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_2 + 0x39c) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_2 + 0x324) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_2 + 0x2c0) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(param_2 + 0x6e8) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(param_2 + 0x6ec) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_2 + 0x6f0) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(param_2 + 0x6f8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_2 + 0x1f8) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_2 + 0x1fc) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_2 + 0x280) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_2 + 0x6f4) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_2 + 0x6fc) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_2 + 0x700) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(param_2 + 0x704) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_2 + 0x70c) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(param_2 + 0x308) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_2 + 0x30c) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_2 + 0x390) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_2 + 0x708) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(param_2 + 0x74c) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(param_2 + 0x750) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(param_2 + 0x754) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(param_2 + 0x758) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(param_2 + 0x75c) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(param_2 + 0x760) = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x30c);
  iVar13 = iVar7;
  iVar10 = param_2;
  do {
    uVar14 = uVar14 + 1;
    *(undefined4 *)(iVar10 + 0x144) = *(undefined4 *)(iVar13 + 0x18c);
    iVar13 = iVar13 + 4;
    iVar10 = iVar10 + 4;
  } while (uVar14 < 8);
  uVar14 = 0;
  *(undefined4 *)(param_2 + 0x524) = *(undefined4 *)(param_1 + 0x24c);
  iVar13 = param_2;
  do {
    fVar15 = *(float *)(iVar7 + 0x1b0);
    if (fVar15 < 0.0) {
      *(float *)(iVar13 + 0x5c4) = -fVar15;
    }
    else {
      *(float *)(iVar13 + 0x5c4) = fVar15;
    }
    uVar14 = uVar14 + 1;
    *(undefined4 *)(iVar13 + 0x5e8) = *(undefined4 *)(iVar7 + 0x1d4);
    *(undefined4 *)(iVar13 + 0x60c) = *(undefined4 *)(iVar7 + 0x1f8);
    *(undefined4 *)(iVar13 + 0x690) = *(undefined4 *)(iVar7 + 0x21c);
    iVar7 = iVar7 + 4;
    iVar13 = iVar13 + 4;
  } while (uVar14 < 9);
  uVar14 = 0;
  *(undefined4 *)(param_2 + 0x630) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(param_2 + 0x634) = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined4 *)(param_2 + 0x638) = *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(param_2 + 0x68c) = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)(param_2 + 0x528) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(param_2 + 0x52c) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(param_2 + 0x530) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(param_2 + 0x5bc) = *(undefined4 *)(param_1 + 800);
  iVar13 = iVar5;
  iVar10 = param_2;
  do {
    uVar14 = uVar14 + 1;
    *(undefined4 *)(iVar10 + 0x53c) = *(undefined4 *)(iVar13 + 0x14);
    iVar13 = iVar13 + 4;
    iVar10 = iVar10 + 4;
  } while (uVar14 < 0x20);
  iVar13 = 0;
  if (0 < (int)(*(float *)(param_2 + 0x530) / 400.0)) {
    iVar10 = param_2;
    do {
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar10 + 0x53c) = *(undefined4 *)(iVar5 + 0x14);
      iVar5 = iVar5 + 4;
      iVar10 = iVar10 + 4;
    } while (iVar13 < (int)(*(float *)(param_2 + 0x530) / 400.0));
  }
  *(undefined4 *)(param_2 + 0x63c) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(param_2 + 0x640) = *(undefined4 *)(param_1 + 0x3a8);
  *(undefined4 *)(param_2 + 0x644) = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(param_2 + 0x648) = *(undefined4 *)(param_1 + 0x3b0);
  *(bool *)(param_2 + 0x674) = *(int *)(param_1 + 0x3b4) != 0;
  *(undefined4 *)(param_2 + 0x680) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(param_2 + 0x684) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(param_2 + 0x688) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(param_2 + 0x67c) = *(undefined4 *)(param_1 + 0x3c4);
  *(bool *)(param_2 + 0x675) = *(int *)(param_1 + 0x3c8) != 0;
  *(undefined4 *)(param_2 + 0x678) = *(undefined4 *)(param_1 + 0x3cc);
  uStack_50 = *(undefined4 *)(param_1 + 0x3d8);
  uStack_40 = *(undefined4 *)(param_1 + 1000);
  uStack_4c = *(undefined4 *)(param_1 + 0x3dc);
  uStack_3c = *(undefined4 *)(param_1 + 0x3ec);
  uStack_48 = *(undefined4 *)(param_1 + 0x3e0);
  uStack_38 = *(undefined4 *)(param_1 + 0x3f0);
  uStack_44 = *(undefined4 *)(param_1 + 0x3e4);
  uStack_34 = *(undefined4 *)(param_1 + 0x3f4);
  uStack_30 = *(undefined4 *)(param_1 + 0x3f8);
  uStack_2c = *(undefined4 *)(param_1 + 0x3fc);
  fStack_28 = *(float *)(param_1 + 0x400) + (*(float *)(param_1 + 0x41c) - 13.0) * 0.25 + 6.0;
  uStack_24 = *(undefined4 *)(param_1 + 0x404);
  uStack_20 = *(undefined4 *)(param_1 + 0x408);
  uStack_1c = *(undefined4 *)(param_1 + 0x40c);
  uStack_18 = *(undefined4 *)(param_1 + 0x410);
  uStack_14 = *(undefined4 *)(param_1 + 0x414);
  uStack_10 = *(undefined4 *)(param_1 + 0x418);
  CarSpec_SetupAxle(param_2,&uStack_50,1);
  uStack_a0 = *(undefined4 *)(param_1 + 0x42c);
  uStack_90 = *(undefined4 *)(param_1 + 0x43c);
  uStack_9c = *(undefined4 *)(param_1 + 0x430);
  uStack_8c = *(undefined4 *)(param_1 + 0x440);
  uStack_98 = *(undefined4 *)(param_1 + 0x434);
  uStack_88 = *(undefined4 *)(param_1 + 0x444);
  uStack_94 = *(undefined4 *)(param_1 + 0x438);
  uStack_84 = *(undefined4 *)(param_1 + 0x448);
  uStack_80 = *(undefined4 *)(param_1 + 0x44c);
  uStack_7c = *(undefined4 *)(param_1 + 0x450);
  fStack_78 = *(float *)(param_1 + 0x454) + (*(float *)(param_1 + 0x470) - 13.0) * 0.25 + 6.0;
  uStack_74 = *(undefined4 *)(param_1 + 0x458);
  uStack_70 = *(undefined4 *)(param_1 + 0x45c);
  uStack_6c = *(undefined4 *)(param_1 + 0x460);
  uStack_68 = *(undefined4 *)(param_1 + 0x464);
  uStack_64 = *(undefined4 *)(param_1 + 0x468);
  uStack_60 = *(undefined4 *)(param_1 + 0x46c);
  CarSpec_SetupAxle(param_2,&uStack_a0,0);
  uVar14 = 0;
  puVar1 = (&PTR_DAT_00318d40)[*(int *)(param_2 + 0xe0)];
  *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(puVar1 + 8);
  puVar6 = puVar1;
  iVar13 = param_2;
  do {
    uVar14 = uVar14 + 1;
    *(undefined4 *)(iVar13 + 0xf0) = *(undefined4 *)(puVar6 + 0xc);
    puVar6 = puVar6 + 4;
    iVar13 = iVar13 + 4;
  } while (uVar14 < 0x10);
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(puVar1 + 0x4c);
  *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(puVar1 + 0x50);
  FUN_001cf860(param_2,param_3,param_1 + 4);
  FUN_001d15a0(param_2,param_3);
  if (param_4 != 0) {
    fVar16 = *(float *)((int)param_3 + 200);
    fVar15 = *(float *)(param_2 + 0x5bc);
    pfVar11 = (float *)&DAT_00318d60;
    uVar18 = *(undefined4 *)(param_2 + 0x638);
    pfVar8 = afStack_120;
    iVar13 = 0xb;
    do {
      iVar13 = iVar13 + -1;
      fVar2 = pfVar11[1];
      *pfVar8 = *pfVar11;
      pfVar8[1] = fVar2;
      pfVar11 = pfVar11 + 2;
      pfVar8 = pfVar8 + 2;
    } while (0 < iVar13);
    puVar9 = auStack_180;
    puVar12 = &DAT_00318dc0;
    iVar13 = 0xb;
    do {
      iVar13 = iVar13 + -1;
      uVar17 = puVar12[1];
      *puVar9 = *puVar12;
      puVar9[1] = uVar17;
      puVar12 = puVar12 + 2;
      puVar9 = puVar9 + 2;
    } while (0 < iVar13);
    if (1.0 <= fVar16) {
      if (100.0 < fVar16) {
        fVar16 = 100.0;
      }
      uVar17 = auStack_180[(int)fVar16 / 5];
      *(float *)(param_2 + 0x5bc) = (fVar15 + 0.0) - fVar15 * afStack_120[(int)fVar16 / 5];
      uVar3 = newlib_sub_0012f600(uVar17);
      uVar3 = __subdf3(0x3ff0000000000000,uVar3);
      uVar4 = newlib_sub_0012f600(uVar18);
      uVar3 = __muldf3(uVar4,uVar3);
      uVar3 = __muldf3(0x3fd99999a0000000,uVar3);
      uVar4 = newlib_sub_0012f600(uVar18);
      uVar3 = __subdf3(uVar4,uVar3);
      uVar18 = maybe___extendsfdf2(uVar3);
      *(undefined4 *)(param_2 + 0x638) = uVar18;
    }
  }
  if ((*(uint *)((int)param_3 + 4) & 2) != 0) {
    *(undefined4 *)(param_2 + 0xd4) = 0x479c4000;
  }
  uVar14 = 0;
  uStack_ac = *(undefined4 *)(param_2 + 0x6f8);
  fStack_a8 = -*(float *)(param_2 + 0x2c) * 0.5;
  fStack_b0 = *(float *)(param_2 + 0x28) * 0.5;
  *(float *)(param_2 + 0x180) = fStack_b0;
  *(undefined4 *)(param_2 + 0x184) = uStack_ac;
  *(float *)(param_2 + 0x188) = fStack_a8;
  *(undefined4 *)(param_2 + 0x18c) = uStack_a4;
  uStack_bc = *(undefined4 *)(param_2 + 0x70c);
  fStack_b8 = -*(float *)(param_2 + 0x30) * 0.5;
  fStack_c0 = -*(float *)(param_2 + 0x28) * 0.5;
  *(float *)(param_2 + 0x290) = fStack_c0;
  *(undefined4 *)(param_2 + 0x294) = uStack_bc;
  *(float *)(param_2 + 0x298) = fStack_b8;
  *(undefined4 *)(param_2 + 0x29c) = uStack_b4;
  *(undefined4 *)(param_2 + 0x740) = *(undefined4 *)(param_2 + 0x6d8);
  *(undefined4 *)(param_2 + 0x744) = *(undefined4 *)(param_2 + 0x6e0);
  *(undefined4 *)(param_2 + 0x748) = *(undefined4 *)(param_2 + 0x6e4);
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(param_2 + 0xc4);
  iVar13 = param_2;
  do {
    uVar14 = uVar14 + 1;
    *(undefined4 *)(iVar13 + 0x64c) = *(undefined4 *)(iVar13 + 0x5c4);
    iVar13 = iVar13 + 4;
  } while (uVar14 < 9);
  *(undefined4 *)(param_2 + 0x5c0) = *(undefined4 *)(param_2 + 0x5bc);
  *(undefined4 *)(param_2 + 0x670) = *(undefined4 *)(param_2 + 0x630);
  CarSpec_ConvertUnits(param_2);
  CarSpec_Finalize(param_2);
  return;
}

// 0x001cf860  size 0x1d34
/* WARNING: Removing unreachable block (ram,0x001cfe2c) */

void FUN_001cf860(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint unaff_s2_lo;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_f20;
  float fVar24;
  float fVar25;
  float afStack_320 [32];
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  float afStack_280 [4];
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  float afStack_260 [4];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  float afStack_240 [4];
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  float afStack_220 [4];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float afStack_200 [4];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  float afStack_1e0 [4];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  float afStack_1c0 [4];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  float afStack_1a0 [4];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  float afStack_180 [4];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  float afStack_160 [4];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float afStack_140 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float afStack_120 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float afStack_100 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float afStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float afStack_c0 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float afStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float afStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float afStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float afStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  cVar1 = *(char *)(param_3 + 0x44);
  fVar25 = 0.0;
  fVar23 = 0.0;
  afStack_30[0] = DAT_00318e20;
  afStack_30[1] = (float)DAT_00318e24;
  afStack_30[2] = (float)DAT_00318e28;
  afStack_30[3] = (float)DAT_00318e2c;
  uStack_20 = DAT_00318e30;
  uStack_1c = DAT_00318e34;
  uStack_18 = DAT_00318e38;
  uStack_14 = DAT_00318e3c;
  uStack_10 = DAT_00318e40;
  uStack_c = DAT_00318e44;
  uStack_8 = DAT_00318e48;
  if (cVar1 == '\0') {
    fVar24 = 0.8;
  }
  else if (cVar1 == '\x01') {
    fVar24 = 1.0;
  }
  else if (cVar1 == '\x02') {
    fVar24 = 1.4;
  }
  else if (cVar1 == '\x03') {
    fVar24 = 1.15;
  }
  else if (cVar1 == '\x04') {
    fVar24 = 1.55;
  }
  else if (cVar1 == '\x05') {
    fVar24 = 1.55;
  }
  else if (cVar1 == '\x06') {
    fVar24 = 1.8;
  }
  else if (cVar1 == '\b') {
    fVar24 = 1.8;
  }
  else if (cVar1 == '\a') {
    fVar24 = 1.0;
  }
  else {
    fVar24 = 2.0;
  }
  lVar6 = FUN_001d2280(param_2,0);
  iVar17 = (int)lVar6;
  if (0 < lVar6) {
    if (*(char *)(param_3 + 0x45) == '\0') {
      fVar24 = fVar24 * afStack_30[iVar17];
    }
    else {
      fVar24 = fVar24 * afStack_30[iVar17] * 0.5;
    }
    fVar25 = fVar24 + 0.0;
    if (lVar6 < 6) {
      if (2 < lVar6) {
        *(float *)(param_1 + 0x68c) = *(float *)(param_1 + 0x68c) + 100.0;
      }
    }
    else {
      *(float *)(param_1 + 0x68c) = *(float *)(param_1 + 0x68c) + 150.0;
    }
    *(float *)(param_1 + 0x63c) =
         (*(float *)(param_1 + 0x63c) + 0.0) -
         *(float *)(param_1 + 0x63c) * 0.5 * ((float)iVar17 / 8.0);
  }
  fVar24 = *(float *)(param_1 + 0x60) * 3.5;
  lVar6 = FUN_001d2280(param_2,2);
  iVar16 = (int)lVar6;
  if (0 < lVar6) {
    fVar24 = fVar24 - (fVar24 * (100.0 - (float)(iVar16 * iVar16))) / 100.0;
    afStack_60[0] = DAT_00318e50;
    afStack_60[1] = (float)DAT_00318e54;
    afStack_60[2] = (float)DAT_00318e58;
    afStack_60[3] = (float)DAT_00318e5c;
    uStack_50 = DAT_00318e60;
    uStack_4c = DAT_00318e64;
    uStack_48 = DAT_00318e68;
    uStack_44 = DAT_00318e6c;
    uStack_40 = DAT_00318e70;
    uStack_3c = DAT_00318e74;
    fVar25 = (fVar25 + 0.0) - fVar24 * 0.35;
    fVar23 = (fVar23 + 0.0) - fVar24 * 0.65;
    *(float *)(param_1 + 0x684) = *(float *)(param_1 + 0x684) * afStack_60[iVar16];
  }
  lVar6 = FUN_001d2280(param_2,1);
  if (0 < lVar6) {
    fVar25 = (float)(int)lVar6 * 0.5 + fVar25 + 0.0;
  }
  iVar5 = FUN_001d2280(param_2,3);
  afStack_80[0] = DAT_00318e80;
  afStack_80[1] = (float)DAT_00318e84;
  afStack_80[2] = (float)DAT_00318e88;
  afStack_80[3] = (float)DAT_00318e8c;
  uStack_70 = DAT_00318e90;
  uStack_6c = DAT_00318e94;
  uStack_68 = DAT_00318e98;
  uStack_64 = DAT_00318e9c;
  lVar7 = FUN_001d2280(param_2,4);
  if (0 < lVar7) {
    fVar25 = fVar25 + afStack_80[(int)lVar7];
  }
  lVar8 = FUN_001d2280(param_2,5);
  if (0 < lVar8) {
    uVar14 = 0;
    afStack_a0[1] = (float)DAT_00318ea4;
    afStack_a0[0] = DAT_00318ea0;
    afStack_a0[3] = (float)DAT_00318eac;
    afStack_a0[2] = (float)DAT_00318ea8;
    uStack_8c = DAT_00318eb4;
    uStack_90 = DAT_00318eb0;
    afStack_c0[0] = DAT_00318ec0;
    uStack_88 = DAT_00318eb8;
    afStack_c0[1] = (float)DAT_00318ec4;
    iVar12 = (int)lVar8;
    uStack_b0 = DAT_00318ed0;
    afStack_c0[2] = (float)DAT_00318ec8;
    afStack_c0[3] = (float)DAT_00318ecc;
    uStack_ac = DAT_00318ed4;
    fVar24 = afStack_a0[iVar12];
    uStack_a8 = DAT_00318ed8;
    iVar11 = param_1;
    do {
      uVar14 = uVar14 + 1;
      *(float *)(iVar11 + 0x5e8) = *(float *)(iVar11 + 0x5e8) + fVar24;
      iVar11 = iVar11 + 4;
    } while (uVar14 < 9);
    uVar14 = 1;
    *(float *)(param_1 + 0x638) = *(float *)(param_1 + 0x638) + afStack_c0[iVar12];
    afStack_e0[2] = (float)DAT_00318ee8;
    uStack_d0 = DAT_00318ef0;
    afStack_e0[3] = (float)DAT_00318eec;
    afStack_e0[0] = DAT_00318ee0;
    afStack_e0[1] = (float)DAT_00318ee4;
    uStack_cc = DAT_00318ef4;
    uStack_c8 = DAT_00318ef8;
    uStack_c4 = DAT_00318efc;
    fVar25 = ((float)*(int *)(param_1 + 0x524) / 5.0) * afStack_e0[iVar12] + fVar25 + 0.0;
    iVar11 = param_1;
    do {
      uVar9 = uVar14 >> 3;
      uVar14 = uVar14 + 1;
      *(float *)(iVar11 + 0x5ec) =
           (*(float *)(iVar11 + 0x5ec) + 0.0) -
           *(float *)(iVar11 + 0x5ec) * 0.9 * ((float)iVar12 / 5.0) * (float)(uVar9 + 1);
      iVar11 = iVar11 + 4;
    } while (uVar14 < 9);
  }
  lVar8 = FUN_001d2280(param_2,6);
  if (0 < lVar8) {
    uVar14 = 0;
    afStack_100[0] = DAT_00318f00;
    afStack_100[1] = (float)DAT_00318f04;
    afStack_100[2] = (float)DAT_00318f08;
    afStack_100[3] = (float)DAT_00318f0c;
    iVar12 = (int)lVar8;
    uStack_f0 = DAT_00318f10;
    uStack_ec = DAT_00318f14;
    uStack_e8 = DAT_00318f18;
    fVar24 = afStack_100[iVar12];
    iVar11 = param_1;
    do {
      uVar14 = uVar14 + 1;
      *(float *)(iVar11 + 0x60c) = *(float *)(iVar11 + 0x60c) + fVar24;
      iVar11 = iVar11 + 4;
    } while (uVar14 < 9);
    afStack_120[0] = DAT_00318f20;
    afStack_120[1] = (float)DAT_00318f24;
    afStack_120[2] = (float)DAT_00318f28;
    afStack_120[3] = (float)DAT_00318f2c;
    uStack_104 = DAT_00318f3c;
    uStack_110 = DAT_00318f30;
    uStack_10c = DAT_00318f34;
    uStack_108 = DAT_00318f38;
    fVar25 = ((float)*(int *)(param_1 + 0x524) / 5.0) * afStack_120[iVar12] + fVar25 + 0.0;
    *(float *)(param_1 + 0x648) =
         (*(float *)(param_1 + 0x648) + 0.0) -
         *(float *)(param_1 + 0x648) * 0.5 * ((float)iVar12 / 5.0);
  }
  FUN_001d2280(param_2,7);
  afStack_140[0] = DAT_00318f40;
  afStack_140[1] = (float)DAT_00318f44;
  afStack_140[2] = (float)DAT_00318f48;
  afStack_140[3] = (float)DAT_00318f4c;
  uStack_130 = DAT_00318f50;
  uStack_12c = DAT_00318f54;
  uStack_128 = DAT_00318f58;
  uStack_124 = DAT_00318f5c;
  lVar8 = FUN_001d2280(param_2,8);
  if (0 < lVar8) {
    fVar25 = fVar25 - afStack_140[(int)lVar8] * 0.5;
    fVar23 = fVar23 - afStack_140[(int)lVar8] * 0.5;
    fVar24 = (float)(int)lVar8 * 0.1 + 1.0;
    *(float *)(param_1 + 0x6e8) = *(float *)(param_1 + 0x6e8) * fVar24;
    *(float *)(param_1 + 0x6fc) = *(float *)(param_1 + 0x6fc) * fVar24;
  }
  afStack_160[0] = DAT_00318f60;
  afStack_160[1] = (float)DAT_00318f64;
  afStack_160[2] = (float)DAT_00318f68;
  afStack_160[3] = (float)DAT_00318f6c;
  uStack_150 = DAT_00318f70;
  uStack_14c = DAT_00318f74;
  uStack_148 = DAT_00318f78;
  lVar8 = FUN_001d2280(param_2,9);
  uVar4 = DAT_00318fd8;
  uVar3 = DAT_00318fd4;
  if (0 < lVar8) {
    iVar11 = (int)lVar8;
    afStack_180[1] = (float)DAT_00318f84;
    afStack_180[0] = DAT_00318f80;
    afStack_180[3] = (float)DAT_00318f8c;
    afStack_180[2] = (float)DAT_00318f88;
    uStack_16c = DAT_00318f94;
    uStack_170 = DAT_00318f90;
    uStack_168 = DAT_00318f98;
    fVar22 = afStack_180[iVar11];
    afStack_1a0[0] = DAT_00318fa0;
    afStack_1a0[1] = (float)DAT_00318fa4;
    afStack_1a0[2] = (float)DAT_00318fa8;
    uStack_190 = DAT_00318fb0;
    afStack_1a0[3] = (float)DAT_00318fac;
    afStack_1c0[0] = DAT_00318fc0;
    uStack_18c = DAT_00318fb4;
    uStack_1b0 = DAT_00318fd0;
    uStack_188 = DAT_00318fb8;
    fVar20 = afStack_1a0[iVar11];
    afStack_1c0[1] = (float)DAT_00318fc4;
    afStack_1c0[2] = (float)DAT_00318fc8;
    afStack_1c0[3] = (float)DAT_00318fcc;
    *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) * fVar22;
    fVar24 = afStack_160[iVar11];
    uStack_1a8 = uVar4;
    uStack_1ac = uVar3;
    fVar21 = afStack_1c0[iVar11];
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) * fVar22;
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) / fVar22;
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xd0) / fVar22;
    *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd4) / fVar20;
    *(float *)(param_1 + 0x164) = *(float *)(param_1 + 0x164) + fVar21;
    uStack_1e8 = DAT_00319018;
    uStack_1f0 = DAT_00319010;
    afStack_200[3] = (float)DAT_0031900c;
    afStack_1e0[0] = DAT_00318fe0;
    afStack_1e0[2] = (float)DAT_00318fe8;
    afStack_1e0[1] = (float)DAT_00318fe4;
    afStack_1e0[3] = (float)DAT_00318fec;
    uStack_1c8 = DAT_00318ff8;
    uStack_1d0 = DAT_00318ff0;
    uStack_1cc = DAT_00318ff4;
    afStack_200[1] = (float)DAT_00319004;
    afStack_200[0] = DAT_00319000;
    uStack_1ec = DAT_00319014;
    afStack_200[2] = (float)DAT_00319008;
    *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd4) + afStack_1e0[iVar11];
    *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) + afStack_200[iVar11];
    *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) + fVar24 * 0.5;
    *(float *)(param_1 + 0x2d0) = *(float *)(param_1 + 0x2d0) + fVar24 * 0.5;
    *(float *)(param_1 + 0x248) =
         *(float *)(param_1 + 0x1b4) *
         (*(float *)(param_1 + 0x1c0) + 10.0) * *(float *)(param_1 + 0x1b4) * 0.5;
    *(float *)(param_1 + 0x358) =
         *(float *)(param_1 + 0x2c4) *
         (*(float *)(param_1 + 0x2d0) + 10.0) * *(float *)(param_1 + 0x2c4) * 0.5;
  }
  lVar8 = FUN_001d2280(param_2,0xd);
  if (lVar8 != 0) {
    *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) - 3.0;
    *(float *)(param_1 + 0x248) =
         *(float *)(param_1 + 0x1b4) *
         (*(float *)(param_1 + 0x1c0) + 10.0) * *(float *)(param_1 + 0x1b4) * 0.5;
  }
  lVar8 = FUN_001d2280(param_2,0xe);
  if (lVar8 != 0) {
    *(float *)(param_1 + 0x358) =
         *(float *)(param_1 + 0x2c4) *
         (*(float *)(param_1 + 0x2d0) + 10.0) * *(float *)(param_1 + 0x2c4) * 0.5;
    *(float *)(param_1 + 0x2d0) = *(float *)(param_1 + 0x2d0) - 3.0;
  }
  afStack_220[0] = DAT_00319020;
  afStack_220[1] = (float)DAT_00319024;
  afStack_220[2] = (float)DAT_00319028;
  afStack_220[3] = (float)DAT_0031902c;
  uStack_210 = DAT_00319030;
  uStack_20c = DAT_00319034;
  uStack_208 = DAT_00319038;
  uStack_204 = DAT_0031903c;
  lVar8 = FUN_001d2280(param_2,10);
  if (0 < lVar8) {
    afStack_240[0] = DAT_00319040;
    afStack_240[1] = (float)DAT_00319044;
    afStack_240[2] = (float)DAT_00319048;
    afStack_240[3] = (float)DAT_0031904c;
    uStack_22c = DAT_00319054;
    uStack_230 = DAT_00319050;
    uStack_228 = DAT_00319058;
    fVar24 = afStack_220[(int)lVar8];
    *(float *)(param_1 + 0x758) = *(float *)(param_1 + 0x758) + afStack_240[(int)lVar8];
    fVar20 = (*(float *)(param_1 + 0x28) * 0.5 + *(float *)(param_1 + 0x80)) /
             *(float *)(param_1 + 0x28);
    fVar24 = *(float *)(param_1 + 0x24) * fVar24;
    fVar25 = (1.0 - fVar20) * fVar24 + fVar25 + 0.0;
    fVar23 = fVar20 * fVar24 + fVar23 + 0.0;
  }
  afStack_260[0] = DAT_00319060;
  afStack_260[1] = (float)DAT_00319064;
  afStack_260[2] = (float)DAT_00319068;
  afStack_260[3] = (float)DAT_0031906c;
  uStack_250 = DAT_00319070;
  uStack_24c = DAT_00319074;
  uStack_248 = DAT_00319078;
  uStack_244 = DAT_0031907c;
  lVar8 = FUN_001d2280(param_2,0xb);
  if (0 < lVar8) {
    afStack_280[0] = DAT_00319080;
    afStack_280[1] = (float)DAT_00319084;
    afStack_280[2] = (float)DAT_00319088;
    afStack_280[3] = (float)DAT_0031908c;
    uStack_270 = DAT_00319090;
    uStack_26c = DAT_00319094;
    uStack_268 = DAT_00319098;
    fVar24 = afStack_260[(int)lVar8];
    *(float *)(param_1 + 0x758) = *(float *)(param_1 + 0x758) - afStack_280[(int)lVar8];
    fVar20 = (*(float *)(param_1 + 0x28) * 0.5 + *(float *)(param_1 + 0x80)) /
             *(float *)(param_1 + 0x28);
    fVar24 = *(float *)(param_1 + 0x24) * fVar24;
    fVar25 = (fVar25 + 0.0) - fVar20 * fVar24;
    fVar23 = (fVar23 + 0.0) - (1.0 - fVar20) * fVar24;
  }
  lVar8 = FUN_001d2280(param_2,0x12);
  if (0 < lVar8) {
    if (*(int *)(param_3 + 0x94) == 0) {
      fVar23 = fVar23 + 5.0;
    }
    else {
      fVar23 = fVar23 - 3.0;
    }
    *(float *)(param_1 + 0x6d8) = *(float *)(param_1 + 0x6d8) * 0.975;
    *(float *)(param_1 + 0x6e4) = *(float *)(param_1 + 0x6e4) + 108.255104;
  }
  lVar8 = FUN_001d2280(param_2,0x11);
  if (0 < lVar8) {
    fVar25 = fVar25 - 8.0;
    *(float *)(param_1 + 0x6d8) = *(float *)(param_1 + 0x6d8) * 0.975;
    *(float *)(param_1 + 0x6e0) = *(float *)(param_1 + 0x6e0) + 32.47653;
  }
  if ('\0' < *(char *)((int)param_2 + 0xc4)) {
    sVar2 = *(short *)((int)param_2 + 0xc);
    fVar24 = 0.0;
    if (sVar2 == 199) {
      fVar24 = 0.06;
      fVar20 = *(float *)(param_1 + 0x2c);
    }
    else {
      if (sVar2 == 0xd6) {
        fVar24 = 0.05;
      }
      else if (sVar2 == 0xc9) {
        fVar24 = 0.045;
      }
      fVar20 = *(float *)(param_1 + 0x2c);
    }
    *(float *)(param_1 + 0x2c) = fVar20 + fVar24;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar24;
    fVar20 = (*(float *)(param_1 + 0x28) * 0.5 + *(float *)(param_1 + 0x80)) /
             *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x6d8) = *(float *)(param_1 + 0x6d8) * 0.925;
    fVar24 = *(float *)(param_1 + 0x24) * 0.02;
    fVar25 = fVar24 * (1.0 - fVar20) + fVar25 + 0.0;
    fVar23 = fVar24 * fVar20 + fVar23 + 0.0;
    lVar8 = FUN_001d2280(param_2,0x12);
    if (lVar8 < 1) {
      *(float *)(param_1 + 0x6e0) = *(float *)(param_1 + 0x6e0) + 32.47653;
      *(float *)(param_1 + 0x6e4) = *(float *)(param_1 + 0x6e4) + 32.47653;
    }
    else {
      *(float *)(param_1 + 0x6e0) = *(float *)(param_1 + 0x6e0) + 32.47653;
      *(float *)(param_1 + 0x6e4) = *(float *)(param_1 + 0x6e4) + 16.238264;
    }
  }
  fVar24 = *(float *)(param_1 + 0x24);
  uVar14 = 0;
  fVar23 = fVar24 + fVar25 + fVar23;
  *(float *)(param_1 + 0x24) = fVar23;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * (fVar23 / fVar24);
  iVar11 = param_1;
  do {
    if (1.0 < *(float *)(iVar11 + 0x60c)) {
      *(undefined4 *)(iVar11 + 0x60c) = 0x3f800000;
    }
    uVar14 = uVar14 + 1;
    iVar11 = iVar11 + 4;
  } while (uVar14 < 9);
  if (1.0 < *(float *)(param_1 + 0x758)) {
    *(undefined4 *)(param_1 + 0x758) = 0x3f800000;
  }
  iVar11 = 0;
  iVar18 = 0;
  fVar24 = 0.0;
  iVar12 = iVar17 * 100;
  fVar21 = *(float *)(param_1 + 0x5bc);
  fVar25 = *(float *)(param_1 + 0x530);
  fVar20 = 0.0;
  fVar23 = 0.0;
  iVar10 = iVar16 * 100;
  iStack_2a0 = iVar12 / 5 + (iVar12 >> 0x1f) + ((iVar17 * 0x19 & 0x3fffffffU) >> 0x1d);
  iStack_29c = iVar10 / 5 + (iVar10 >> 0x1f) + ((iVar16 * 0x19 & 0x3fffffffU) >> 0x1d);
  iStack_298 = (iVar5 * 100) / 5;
  iStack_294 = ((int)lVar7 * 100) / 5;
  iVar17 = 0;
  piVar15 = &iStack_2a0;
  iStack_290 = ((int)lVar6 * 100) / 5;
  do {
    if (100 < *piVar15) {
      *piVar15 = 100;
    }
    iVar17 = iVar17 + 1;
    piVar15 = piVar15 + 1;
  } while (iVar17 < 5);
  if ((iStack_298 != 0) || (iVar17 = 0, iStack_2a0 != 0)) {
    fVar24 = 0.0;
    if (iStack_2a0 < iStack_298) {
      fVar24 = (float)(iStack_298 - iStack_2a0) / 100.0;
    }
    else if (iStack_298 < iStack_2a0) {
      fVar24 = (float)(iStack_2a0 - iStack_298) / 100.0;
    }
    fVar20 = 0.0;
    if (fVar24 < 0.0) {
      if (fVar24 < -0.15) {
        fVar20 = (fVar24 - -0.15) / 0.85;
      }
    }
    else if (0.15 < fVar24) {
      fVar20 = (fVar24 - 0.15) / 0.85;
    }
    iVar11 = iStack_2a0 - iStack_298;
    iVar18 = 1;
    fVar24 = 0.025 - fVar20 * 0.025;
    fVar20 = fVar24 + 1.0;
    fVar24 = 0.0 - fVar24 * fVar21;
    iVar17 = iStack_2a0;
  }
  if ((iStack_29c != 0) || (iVar17 != 0)) {
    if (iVar12 < 0) {
      iVar12 = iVar12 + 7;
    }
    iVar12 = iVar12 >> 3;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 7;
    }
    iVar10 = iVar10 >> 3;
    fVar23 = 0.0;
    if (iVar12 < iVar10) {
      fVar23 = (float)(iVar10 - iVar12) / 100.0;
    }
    else if (iVar10 < iVar12) {
      fVar23 = (float)(iVar12 - iVar10) / 100.0;
    }
    fVar22 = 0.0;
    if (fVar23 < 0.0) {
      if (fVar23 < -0.15) {
        fVar22 = (fVar23 - -0.15) / 0.85;
      }
    }
    else if (0.15 < fVar23) {
      fVar22 = (fVar23 - 0.15) / 0.85;
    }
    fVar23 = (float)fabsf(fVar22);
    iVar18 = iVar18 + 1;
    iVar11 = iVar11 + (iVar10 - iVar12);
    fVar22 = 0.035 - fVar23 * 0.035;
    fVar23 = fVar22 + 1.0;
    fVar24 = (fVar24 + 0.0) - fVar22 * fVar21;
  }
  if ((iStack_294 != 0) || (iVar17 = 0, iStack_2a0 != 0)) {
    fVar22 = 0.0;
    if ((iStack_294 <= iStack_2a0) && (iStack_294 < iStack_2a0)) {
      fVar22 = (float)(iStack_2a0 - iStack_294) / 100.0;
    }
    if (fVar22 < 0.0) {
      if (fVar22 < -0.15) {
        fVar22 = (fVar22 - -0.15) / 0.85;
      }
      else {
        fVar22 = 0.0;
      }
    }
    else if (0.15 < fVar22) {
      fVar22 = (fVar22 - 0.15) / 0.85;
    }
    else {
      fVar22 = 0.0;
    }
    iVar18 = iVar18 + 1;
    iVar11 = iVar11 + (iStack_294 - iStack_2a0);
    fVar24 = fVar22 * 0.02 * fVar21 + fVar24 + 0.0;
    iVar17 = iStack_2a0;
  }
  if ((*(char *)(param_3 + 0x45) != '\0') && ((iStack_290 != 0 || (iVar17 != 0)))) {
    fVar22 = 0.0;
    if (iVar17 < iStack_290) {
      fVar22 = (float)(iStack_290 - iVar17) / 100.0;
    }
    else if (iStack_290 < iVar17) {
      fVar22 = (float)(iVar17 - iStack_290) / 100.0;
    }
    fVar19 = 0.0;
    if (fVar22 < 0.0) {
      if (fVar22 < -0.15) {
        fVar19 = (fVar22 - -0.15) / 0.85;
      }
    }
    else if (0.15 < fVar22) {
      fVar19 = (fVar22 - 0.15) / 0.85;
    }
    iVar18 = iVar18 + 1;
    iVar11 = iVar11 + (iStack_290 - iVar17);
    fVar24 = (fVar24 + 0.0) - (0.035 - fVar19 * 0.035) * fVar21;
  }
  *(float *)(param_1 + 0x5bc) = fVar21 - fVar24;
  if (iVar11 != 0) {
    iVar11 = iVar11 / iVar18;
    uVar14 = 0;
    pfVar13 = afStack_320;
    iVar17 = param_1;
    do {
      fVar24 = *(float *)(iVar17 + 0x53c);
      *pfVar13 = fVar24;
      if (fVar24 == 1.0) {
        unaff_f20 = (float)(int)uVar14 * (*(float *)(param_1 + 0x528) / 32.0);
        unaff_s2_lo = uVar14;
      }
      uVar14 = uVar14 + 1;
      *(undefined4 *)(iVar17 + 0x53c) = 0x3649539c;
      iVar17 = iVar17 + 4;
      pfVar13 = pfVar13 + 1;
    } while (uVar14 < 0x20);
    if (iVar11 < 0x65) {
      if (iVar11 < -100) {
        iVar11 = -100;
      }
    }
    else {
      iVar11 = 100;
    }
    fVar24 = unaff_f20;
    if (0 < iVar11) {
      fVar24 = fVar25 - unaff_f20;
    }
    fVar21 = *(float *)(param_1 + 0x528) / 32.0;
    uVar14 = unaff_s2_lo + (int)(((fVar24 * 0.2 * (float)iVar11) / 100.0) / fVar21);
    fVar21 = (float)(int)uVar14 * fVar21;
    if ((int)uVar14 < 0) {
      uVar14 = 0;
    }
    else if (0x1f < uVar14) {
      uVar14 = 0x1f;
    }
    iVar17 = 0;
    iVar16 = 0;
    if (0 < (int)uVar14) {
      iVar5 = param_1;
      do {
        fVar22 = *(float *)(param_1 + 0x528) / 32.0;
        fVar24 = (float)iVar16 * fVar22 * (unaff_f20 / fVar21);
        iVar12 = (int)(fVar24 / fVar22);
        iVar11 = (int)fVar24 % (int)fVar22;
        if (iVar11 == 0) {
          fVar24 = afStack_320[iVar12];
        }
        else {
          fVar24 = ((float)iVar11 / fVar22) * (afStack_320[iVar12 + 1] - afStack_320[iVar12]) +
                   afStack_320[iVar12] + 0.0;
        }
        iVar16 = iVar16 + 1;
        *(float *)(iVar5 + 0x53c) = fVar24;
        iVar5 = iVar5 + 4;
      } while (iVar16 < (int)uVar14);
    }
    uVar9 = uVar14 + 1;
    if (uVar9 < 0x20) {
      iVar16 = param_1 + uVar9 * 4;
      do {
        fVar22 = *(float *)(param_1 + 0x528) / 32.0;
        fVar24 = (float)(int)(unaff_s2_lo + 1) * fVar22 +
                 (float)iVar17 * fVar22 * ((fVar25 - unaff_f20) / (fVar25 - fVar21));
        iVar11 = (int)(fVar24 / fVar22);
        iVar5 = (int)fVar24 % (int)fVar22;
        if (iVar5 == 0) {
          fVar24 = afStack_320[iVar11];
        }
        else {
          fVar24 = ((float)iVar5 / fVar22) * (afStack_320[iVar11 + 1] - afStack_320[iVar11]) +
                   afStack_320[iVar11] + 0.0;
        }
        uVar9 = uVar9 + 1;
        *(float *)(iVar16 + 0x53c) = fVar24;
        iVar17 = iVar17 + 1;
        iVar16 = iVar16 + 4;
      } while (uVar9 < 0x20);
    }
    *(undefined4 *)(uVar14 * 4 + param_1 + 0x53c) = 0x3f800000;
  }
  uVar14 = 1;
  iVar17 = param_1;
  do {
    if (*(float *)(iVar17 + 0x540) == 1.0) {
      uVar9 = uVar14;
      break;
    }
    uVar14 = uVar14 + 1;
    uVar9 = 0;
    iVar17 = iVar17 + 4;
  } while (uVar14 < 0x20);
  if (1.0 < fVar20) {
    iVar16 = 0x1f;
    iVar17 = param_1 + 0x7c;
    do {
      if (iVar16 < (int)uVar9) {
        fVar24 = *(float *)(iVar17 + 0x540) * 0.975;
        if (*(float *)(iVar17 + 0x53c) < fVar24) {
          if (*(float *)(iVar17 + 0x53c) * fVar20 < fVar24) {
            *(float *)(iVar17 + 0x53c) = *(float *)(iVar17 + 0x53c) * fVar20;
          }
          else {
            *(float *)(iVar17 + 0x53c) = fVar24;
          }
        }
      }
      iVar16 = iVar16 + -1;
      iVar17 = iVar17 + -4;
    } while (-1 < iVar16);
  }
  if (1.0 < fVar23) {
    uVar14 = 0;
    iVar17 = param_1;
    do {
      if ((int)uVar9 < (int)uVar14) {
        fVar24 = *(float *)(iVar17 + 0x538) * 0.975;
        if (*(float *)(iVar17 + 0x53c) < fVar24) {
          if (*(float *)(iVar17 + 0x53c) * fVar23 < fVar24) {
            *(float *)(iVar17 + 0x53c) = *(float *)(iVar17 + 0x53c) * fVar23;
          }
          else {
            *(float *)(iVar17 + 0x53c) = fVar24;
          }
        }
      }
      uVar14 = uVar14 + 1;
      iVar17 = iVar17 + 4;
    } while (uVar14 < 0x20);
  }
  uVar14 = 0;
  iVar17 = param_1;
  do {
    if (fVar25 / (*(float *)(param_1 + 0x528) / 32.0) <= (float)(int)uVar14) {
      *(undefined4 *)(iVar17 + 0x53c) = 0x3649539c;
    }
    uVar14 = uVar14 + 1;
    iVar17 = iVar17 + 4;
  } while (uVar14 < 0x20);
  return;
}

