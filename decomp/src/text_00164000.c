// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00164000 - 0x00168000
#include "ghidra_types.h"

// 0x00164120  size 0xec
void PhysBody_UpdateWorldInertia(int param_1)

{
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  Quat_ToMat33Normalized(param_1 + 0xe0,param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x10c);
  Mat34_Identity(&fStack_40);
  fStack_40 = *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0x170);
  fStack_3c = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0x170);
  fStack_38 = *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x170);
  fStack_30 = *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0x174);
  fStack_2c = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0x174);
  fStack_28 = *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0x174);
  fStack_20 = *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0x178);
  fStack_1c = *(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0x178);
  fStack_18 = *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x178);
  Mat44_MulVec4(param_1 + 0x1a0,param_1 + 0xe0,&fStack_40);
  return;
}

// 0x00164210  size 0x8
int PhysBody_GetUserBlock(int param_1)

{
  return param_1 + 0x1e0;
}

// 0x00164220  size 0x3c
void PhysBody_SetMass(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x1e0) = *param_2;
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  Vec3_Scale(*(undefined4 *)(param_1 + 4),&uStack_10);
  *(undefined4 *)(param_1 + 0x1f0) = uStack_10;
  *(undefined4 *)(param_1 + 500) = uStack_c;
  *(undefined4 *)(param_1 + 0x1f8) = uStack_8;
  *(undefined4 *)(param_1 + 0x1fc) = uStack_4;
  return;
}

// 0x00164260  size 0x8
undefined1 PhysBody_Nop(undefined1 *param_1)

{
  return *param_1;
}

// 0x00164270  size 0xe8
float PhysBody_PointVelocity
                (float param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  Vec3_Sub(auStack_20,param_3,param_2 + 0x10);
  Vec3_Cross(auStack_30,param_2 + 0x60,auStack_20);
  Vec3_Add(auStack_10,param_2 + 0x20,auStack_30);
  fVar1 = (float)Vec3_Dot(auStack_10,param_4);
  fVar2 = (float)Vec3_Dot(param_5,param_4);
  fVar2 = SQRT(fVar2 * 2.0 * param_1 * fVar2 * param_1);
  if ((fVar1 < 0.0) || (fVar2 < fVar1)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = fVar2 * *(float *)(param_2 + 0x200);
  }
  return fVar2;
}

// 0x00164360  size 0x270
void PhysBody_ApplyImpulseAtPoint
               (float param_1,float param_2,undefined8 param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  Vec3_Sub(auStack_40,param_5,param_4 + 0x10);
  Vec3_Cross(auStack_50,param_4 + 0x60,auStack_40);
  Vec3_Add(&fStack_10,param_4 + 0x20,auStack_50);
  puVar1 = (undefined4 *)param_3;
  if (fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c == 0.0) {
    *puVar1 = DAT_003625e0;
    puVar1[1] = DAT_003625e4;
    puVar1[2] = DAT_003625e8;
    puVar1[3] = DAT_003625ec;
  }
  else {
    Vec3_Cross(&fStack_20,param_6,&fStack_10);
    Vec3_Cross(&fStack_30,param_6,&fStack_20);
    fStack_20 = fStack_30;
    fStack_1c = fStack_2c;
    fStack_18 = fStack_28;
    uStack_14 = uStack_24;
    if (0.01 < fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c) {
      Vec3_Normalize(&fStack_20);
      param_1 = param_1 * param_2;
      Vec3_Sub(auStack_b0,param_5,param_4 + 0x10);
      Vec3_Cross(auStack_c0,param_4 + 0x60,auStack_b0);
      Vec3_Add(auStack_60,param_4 + 0x20,auStack_c0);
      fVar2 = (float)Vec3_Dot(auStack_60,&fStack_20);
      fVar3 = 0.0;
      if (0.0 <= -fVar2) {
        Vec3_Sub(auStack_70,param_5,param_4 + 0x10);
        Vec3_Cross(&uStack_80,auStack_70,&fStack_20);
        Mat33_MulVec3B(&uStack_a0,param_4 + 0x1a0,&uStack_80);
        uStack_80 = uStack_a0;
        uStack_7c = uStack_9c;
        uStack_78 = uStack_98;
        uStack_74 = uStack_94;
        Vec3_Cross(auStack_90,&uStack_80,auStack_70);
        fVar3 = (float)Vec3_Dot(auStack_90,&fStack_20);
        fVar3 = 1.0 / (*(float *)(param_4 + 8) + fVar3);
        *(float *)(param_4 + 0x200) = fVar3;
        fVar3 = -fVar2 * fVar3;
      }
      if (fVar3 < param_1) {
        param_1 = fVar3;
      }
      Vec3_Scale(param_1,param_3,&fStack_20);
    }
    else {
      *puVar1 = DAT_003625e0;
      puVar1[1] = DAT_003625e4;
      puVar1[2] = DAT_003625e8;
      puVar1[3] = DAT_003625ec;
    }
  }
  return;
}

// 0x001645d0  size 0x214
float PhysBody_ApplyImpulsePair(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
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
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  Vec3_Sub(auStack_e0,param_2,param_1 + 0x10);
  Vec3_Cross(auStack_f0,param_1 + 0x60,auStack_e0);
  Vec3_Add(auStack_10,param_1 + 0x20,auStack_f0);
  Vec3_Sub(auStack_100,param_2,param_4 + 0x10);
  Vec3_Cross(auStack_110,param_4 + 0x60,auStack_100);
  Vec3_Add(auStack_20,param_4 + 0x20,auStack_110);
  Vec3_Sub(auStack_30,auStack_10,auStack_20);
  fVar1 = (float)Vec3_Dot(auStack_30,param_3);
  fVar1 = -fVar1;
  fVar2 = 0.0;
  if (0.0 < fVar1) {
    uStack_34 = 0x3f800000;
    if (*param_1 != '\x01') {
      Vec3_Sub(auStack_50,param_2,param_1 + 0x10);
      Vec3_Cross(&uStack_80,auStack_50,param_3);
      uStack_40 = uStack_80;
      uStack_3c = uStack_7c;
      uStack_38 = uStack_78;
      uStack_34 = uStack_74;
      Mat33_MulVec3B(&uStack_90,param_1 + 0x1a0,&uStack_40);
      uStack_40 = uStack_90;
      uStack_3c = uStack_8c;
      uStack_38 = uStack_88;
      uStack_34 = uStack_84;
      Vec3_Cross(&uStack_a0,&uStack_40,auStack_50);
      uStack_40 = uStack_a0;
      uStack_3c = uStack_9c;
      uStack_38 = uStack_98;
      uStack_34 = uStack_94;
    }
    uStack_54 = 0x3f800000;
    if (*param_4 != '\x01') {
      Vec3_Sub(auStack_70,param_2,param_4 + 0x10);
      Vec3_Cross(&uStack_b0,auStack_70,param_3);
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      Mat33_MulVec3B(&uStack_c0,param_4 + 0x1a0,&uStack_60);
      uStack_60 = uStack_c0;
      uStack_5c = uStack_bc;
      uStack_58 = uStack_b8;
      uStack_54 = uStack_b4;
      Vec3_Cross(&uStack_d0,&uStack_60,auStack_70);
      uStack_60 = uStack_d0;
      uStack_5c = uStack_cc;
      uStack_58 = uStack_c8;
      uStack_54 = uStack_c4;
    }
    Vec3_AddInPlace(&uStack_40,&uStack_60);
    fVar3 = *(float *)(param_4 + 8);
    fVar2 = (float)Vec3_Dot(&uStack_40,param_3);
    fVar2 = 1.0 / (*(float *)(param_1 + 8) + fVar2 + fVar3);
    *(float *)(param_1 + 0x200) = fVar2;
    fVar2 = fVar1 * fVar2;
  }
  return fVar2;
}

// 0x001647f0  size 0x108
float PhysBody_VelocityAtPoint(int param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  Vec3_Sub(auStack_60,param_2,param_1 + 0x10);
  Vec3_Cross(auStack_70,param_1 + 0x60,auStack_60);
  Vec3_Add(auStack_10,param_1 + 0x20,auStack_70);
  fVar1 = (float)Vec3_Dot(auStack_10,param_3);
  fVar2 = 0.0;
  if (0.0 <= -fVar1) {
    Vec3_Sub(auStack_20,param_2,param_1 + 0x10);
    Vec3_Cross(&uStack_30,auStack_20,param_3);
    Mat33_MulVec3B(&uStack_50,param_1 + 0x1a0,&uStack_30);
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    Vec3_Cross(auStack_40,&uStack_30,auStack_20);
    fVar2 = (float)Vec3_Dot(auStack_40,param_3);
    fVar2 = 1.0 / (*(float *)(param_1 + 8) + fVar2);
    *(float *)(param_1 + 0x200) = fVar2;
    fVar2 = -fVar1 * fVar2;
  }
  return fVar2;
}

// 0x00164900  size 0x110
float PhysBody_RelativeVelocity(float param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  Vec3_Sub(auStack_10,param_3,param_2 + 0x10);
  Vec3_Cross(&uStack_20,auStack_10,param_4);
  Mat33_MulVec3B(&uStack_40,param_2 + 0x1a0,&uStack_20);
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uStack_18 = uStack_38;
  uStack_14 = uStack_34;
  Vec3_Cross(auStack_30,&uStack_20,auStack_10);
  Vec3_Sub(auStack_70,param_3,param_2 + 0x10);
  Vec3_Cross(auStack_80,param_2 + 0x60,auStack_70);
  Vec3_Add(&fStack_60,param_2 + 0x20,auStack_80);
  fStack_50 = -fStack_60;
  fStack_4c = -fStack_5c;
  fStack_48 = -fStack_58;
  fVar1 = (float)Vec3_Dot(&fStack_50,param_4);
  fVar2 = (float)Vec3_Dot(auStack_30,param_4);
  return fVar1 / (param_1 * (*(float *)(param_2 + 8) + fVar2));
}

// 0x00164a10  size 0x22c
void PhysBody_EffectiveMass(int param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = 0x3f800000;
  uStack_1c = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  Vec3_Sub(auStack_40,param_3,param_1 + 0x10);
  Vec3_Scale(*(undefined4 *)(param_1 + 8),auStack_50,&uStack_10);
  Vec3_Cross(&fStack_60,auStack_40,&uStack_10);
  fStack_60 = fStack_60 * *(float *)(param_1 + 0x170);
  fStack_5c = fStack_5c * *(float *)(param_1 + 0x174);
  fStack_58 = fStack_58 * *(float *)(param_1 + 0x178);
  Vec3_Cross(&fStack_e0,&fStack_60,auStack_40);
  fStack_60 = fStack_e0;
  fStack_5c = (float)uStack_dc;
  fStack_58 = (float)uStack_d8;
  uStack_54 = uStack_d4;
  Vec3_Add(auStack_70,auStack_50,&fStack_60);
  fVar1 = (float)Vec3_Dot(auStack_70,&uStack_10);
  *param_2 = 1.0 / fVar1;
  Vec3_Scale(*(undefined4 *)(param_1 + 8),auStack_80,&uStack_20);
  Vec3_Cross(&fStack_90,auStack_40,&uStack_20);
  fStack_90 = fStack_90 * *(float *)(param_1 + 0x170);
  fStack_8c = fStack_8c * *(float *)(param_1 + 0x174);
  fStack_88 = fStack_88 * *(float *)(param_1 + 0x178);
  Vec3_Cross(&fStack_f0,&fStack_90,auStack_40);
  fStack_90 = fStack_f0;
  fStack_8c = (float)uStack_ec;
  fStack_88 = (float)uStack_e8;
  uStack_84 = uStack_e4;
  Vec3_Add(auStack_a0,auStack_80,&fStack_90);
  fVar1 = (float)Vec3_Dot(auStack_a0,&uStack_20);
  param_2[1] = 1.0 / fVar1;
  Vec3_Scale(*(undefined4 *)(param_1 + 8),auStack_b0,&uStack_30);
  Vec3_Cross(&fStack_c0,auStack_40,&uStack_30);
  fStack_c0 = fStack_c0 * *(float *)(param_1 + 0x170);
  fStack_bc = fStack_bc * *(float *)(param_1 + 0x174);
  fStack_b8 = fStack_b8 * *(float *)(param_1 + 0x178);
  Vec3_Cross(&fStack_100,&fStack_c0,auStack_40);
  fStack_c0 = fStack_100;
  fStack_bc = (float)uStack_fc;
  fStack_b8 = (float)uStack_f8;
  uStack_b4 = uStack_f4;
  Vec3_Add(auStack_d0,auStack_b0,&fStack_c0);
  fVar1 = (float)Vec3_Dot(auStack_d0,&uStack_30);
  param_2[2] = 1.0 / fVar1;
  return;
}

// 0x00164c40  size 0x8
/* +0x120 */

int PhysBody_GetTransform(int param_1)

{
  return param_1 + 0x120;
}

// 0x00164c50  size 0x8
/* +0xe0 */

int PhysBody_GetOrientation(int param_1)

{
  return param_1 + 0xe0;
}

// 0x00164c60  size 0x58
void PhysBody_AddTorqueAtPoint(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  Vec3_Sub(auStack_10,param_3,param_1 + 0x10);
  Vec3_Cross(auStack_20,auStack_10,param_2);
  Vec3_AddInPlace(param_1 + 0x80,auStack_20);
  return;
}

// 0x00164cc0  size 0x64
void PhysBody_AddForceAtPoint(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  Vec3_Sub(auStack_10,param_3,param_1 + 0x10);
  Vec3_Cross(auStack_20,auStack_10,param_2);
  Vec3_AddInPlace(param_1 + 0x80,auStack_20);
  Vec3_AddInPlace(param_1 + 0x40,param_2);
  return;
}

// 0x00164d30  size 0x8
/* +0x80 */

int PhysBody_GetForce(int param_1)

{
  return param_1 + 0x80;
}

// 0x00164d40  size 0x8
void PhysBody_AddForce(int param_1,float *param_2)

{
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + *param_2;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + param_2[1];
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + param_2[2];
  return;
}

// 0x00164d50  size 0x8
/* +0x40 */

int PhysBody_GetTorque(int param_1)

{
  return param_1 + 0x40;
}

// 0x00164d60  size 0x8
void PhysBody_AddTorque(int param_1,float *param_2)

{
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + *param_2;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + param_2[1];
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + param_2[2];
  return;
}

// 0x00164d70  size 0x8
void PhysBody_SetGravityScale(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x70) = param_1;
  return;
}

// 0x00164d80  size 0x8
/* +0x60 */

int PhysBody_GetAngularVelocity(int param_1)

{
  return param_1 + 0x60;
}

// 0x00164d90  size 0x114
void PhysBody_ClampAngularVelocity(int param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3f800000;
  uStack_14 = 0x3f800000;
  Mat33_MulVec3Transposed(&fStack_30,param_1 + 0xe0,param_2);
  fStack_10 = fStack_30;
  fStack_c = fStack_2c;
  fStack_8 = fStack_28;
  uStack_4 = uStack_24;
  fStack_20 = *(float *)(param_1 + 0x160) * fStack_30;
  fStack_1c = *(float *)(param_1 + 0x164) * fStack_2c;
  fStack_18 = *(float *)(param_1 + 0x168) * fStack_28;
  Mat33_MulVec3B(&uStack_40,param_1 + 0xe0,&fStack_20);
  *(undefined4 *)(param_1 + 400) = uStack_40;
  *(undefined4 *)(param_1 + 0x194) = uStack_3c;
  *(undefined4 *)(param_1 + 0x198) = uStack_38;
  *(undefined4 *)(param_1 + 0x19c) = uStack_34;
  Mat33_MulVec3B(&uStack_50,param_1 + 0x1a0,param_1 + 400);
  *(undefined4 *)(param_1 + 0x60) = uStack_50;
  *(undefined4 *)(param_1 + 100) = uStack_4c;
  *(undefined4 *)(param_1 + 0x68) = uStack_48;
  *(undefined4 *)(param_1 + 0x6c) = uStack_44;
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x68) +
          *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x60) +
          *(float *)(param_1 + 100) * *(float *)(param_1 + 100);
  if (fVar1 * fVar1 < fVar2) {
    fVar1 = fVar1 / SQRT(fVar2);
    Vec3_ScaleInPlace(fVar1,param_1 + 400);
    Vec3_ScaleInPlace(fVar1,param_1 + 0x60);
  }
  return;
}

// 0x00164eb0  size 0x5c
void PhysBody_PointVelocityWorld(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  Vec3_Sub(auStack_10,param_3,param_2 + 0x10);
  Vec3_Cross(auStack_20,param_2 + 0x60,auStack_10);
  Vec3_Add(param_1,param_2 + 0x20,auStack_20);
  return;
}

// 0x00164f10  size 0x18
undefined4 PhysBody_GetSleepTimer(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00164f30  size 0xc
void PhysBody_SetSleepTimer(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  return;
}

// 0x00164f40  size 0x8
/* +0xa0 */

int PhysBody_GetLinearVelocity(int param_1)

{
  return param_1 + 0xa0;
}

// 0x00164f50  size 0x8
/* +0x20 */

int PhysBody_GetPositionPtr(int param_1)

{
  return param_1 + 0x20;
}

// 0x00164f60  size 0xd4
void PhysBody_UpdateMomentum(int param_1)

{
  undefined4 uVar1;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  Vec3_Scale(*(undefined4 *)(param_1 + 4),&uStack_10);
  *(undefined4 *)(param_1 + 0xb0) = uStack_10;
  *(undefined4 *)(param_1 + 0xb4) = uStack_c;
  *(undefined4 *)(param_1 + 0xb8) = uStack_8;
  *(undefined4 *)(param_1 + 0xbc) = uStack_4;
  Vec3_Scale(*(undefined4 *)(param_1 + 8),&uStack_20,param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x20) = uStack_20;
  *(undefined4 *)(param_1 + 0x24) = uStack_1c;
  *(undefined4 *)(param_1 + 0x28) = uStack_18;
  *(undefined4 *)(param_1 + 0x2c) = uStack_14;
  uVar1 = Vec3_Length(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  Vec3_Scale(1.0 / *(float *)(param_1 + 0xa0),&uStack_30,param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x90) = uStack_30;
  *(undefined4 *)(param_1 + 0x94) = uStack_2c;
  *(undefined4 *)(param_1 + 0x98) = uStack_28;
  *(undefined4 *)(param_1 + 0x9c) = uStack_24;
  if (*(float *)(param_1 + 0x30) < *(float *)(param_1 + 0xa0)) {
    Vec3_ScaleCopy(&uStack_40,param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x20) = uStack_40;
    *(undefined4 *)(param_1 + 0x24) = uStack_3c;
    *(undefined4 *)(param_1 + 0x28) = uStack_38;
    *(undefined4 *)(param_1 + 0x2c) = uStack_34;
    Vec3_Scale(*(undefined4 *)(param_1 + 4),&uStack_50,param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xb0) = uStack_50;
    *(undefined4 *)(param_1 + 0xb4) = uStack_4c;
    *(undefined4 *)(param_1 + 0xb8) = uStack_48;
    *(undefined4 *)(param_1 + 0xbc) = uStack_44;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x30);
  }
  return;
}

// 0x00165040  size 0x8
/* +0x50 */

int PhysBody_GetRotation(int param_1)

{
  return param_1 + 0x50;
}

// 0x00165050  size 0xc0
void PhysBody_SetRotation(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x50) = *param_2;
  *(undefined4 *)(iVar1 + 0x54) = param_2[1];
  *(undefined4 *)(iVar1 + 0x58) = param_2[2];
  *(undefined4 *)(iVar1 + 0x5c) = param_2[3];
  Quat_Normalize(iVar1 + 0x50);
  PhysBody_UpdateWorldInertia(param_1);
  uStack_20 = *(undefined4 *)(iVar1 + 0x110);
  uStack_1c = *(undefined4 *)(iVar1 + 0x114);
  uStack_18 = *(undefined4 *)(iVar1 + 0x118);
  *(undefined4 *)(iVar1 + 0x10) = uStack_20;
  *(undefined4 *)(iVar1 + 0x14) = uStack_1c;
  *(undefined4 *)(iVar1 + 0x18) = uStack_18;
  *(undefined4 *)(iVar1 + 0x1c) = uStack_14;
  Mat33_MulVec3B(auStack_10,iVar1 + 0xe0,iVar1 + 0xc0);
  Vec3_Sub(&uStack_30,iVar1 + 0x10,auStack_10);
  *(undefined4 *)(iVar1 + 0xd0) = uStack_30;
  *(undefined4 *)(iVar1 + 0xd4) = uStack_2c;
  *(undefined4 *)(iVar1 + 0xd8) = uStack_28;
  *(undefined4 *)(iVar1 + 0xdc) = uStack_24;
  *(undefined4 *)(iVar1 + 0x150) = *(undefined4 *)(iVar1 + 0xd0);
  *(undefined4 *)(iVar1 + 0x154) = *(undefined4 *)(iVar1 + 0xd4);
  *(undefined4 *)(iVar1 + 0x158) = *(undefined4 *)(iVar1 + 0xd8);
  *(undefined4 *)(iVar1 + 0x15c) = 0x3f800000;
  return;
}

// 0x00165110  size 0x8
int PhysBody_GetLocalCenter(int param_1)

{
  return param_1 + 0x10;
}

// 0x00165120  size 0x74
void PhysBody_SetTransformFrom(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xc0) = *param_2;
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  Mat33_MulVec3B(auStack_10,param_1 + 0xe0,param_1 + 0xc0);
  Vec3_Add(auStack_20,param_1 + 0xd0,auStack_10);
  Mat33_Copy(param_1 + 0xe0,auStack_20);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x1c) = uStack_24;
  return;
}

// 0x001651a0  size 0x8
/* +0xd0; 14 callers */

int PhysBody_GetWorldMatrix(int param_1)

{
  return param_1 + 0xd0;
}

// 0x001651b0  size 0xa0
void PhysBody_LocalToWorld(int param_1,undefined8 param_2)

{
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  Mat33_Copy(param_1 + 0x120);
  uStack_20 = *(undefined4 *)(param_1 + 0x150);
  uStack_1c = *(undefined4 *)(param_1 + 0x154);
  uStack_18 = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0xd0) = uStack_20;
  *(undefined4 *)(param_1 + 0xd4) = uStack_1c;
  *(undefined4 *)(param_1 + 0xd8) = uStack_18;
  *(undefined4 *)(param_1 + 0xdc) = uStack_14;
  Mat33_MulVec3B(auStack_10,param_1 + 0xe0,param_1 + 0xc0);
  Vec3_Add(auStack_30,param_2,auStack_10);
  Mat33_Copy(param_1 + 0xe0,auStack_30);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x1c) = uStack_34;
  return;
}

// 0x00165250  size 0x8
/* +0x10 */

int PhysBody_GetCenterOfMass(int param_1)

{
  return param_1 + 0x10;
}

// 0x00165260  size 0x98
void PhysBody_WorldToLocal(int param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  Mat33_Copy(param_1 + 0xe0);
  uStack_20 = *(undefined4 *)(param_1 + 0x110);
  uStack_1c = *(undefined4 *)(param_1 + 0x114);
  uStack_18 = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x10) = uStack_20;
  *(undefined4 *)(param_1 + 0x14) = uStack_1c;
  *(undefined4 *)(param_1 + 0x18) = uStack_18;
  *(undefined4 *)(param_1 + 0x1c) = uStack_14;
  Mat33_MulVec3B(auStack_10,param_1 + 0xe0,param_1 + 0xc0);
  Vec3_Sub(&uStack_30,param_1 + 0x10,auStack_10);
  *(undefined4 *)(param_1 + 0xd0) = uStack_30;
  *(undefined4 *)(param_1 + 0xd4) = uStack_2c;
  *(undefined4 *)(param_1 + 0xd8) = uStack_28;
  *(undefined4 *)(param_1 + 0xdc) = uStack_24;
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
  return;
}

// 0x00165300  size 0x8
int PhysBody_GetExtraData(int param_1)

{
  return param_1 + 400;
}

// 0x00165310  size 0xc
void PhysBody_SetLinearVelocity(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 400) = *param_2;
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  *(undefined4 *)(param_1 + 0x198) = uVar2;
  *(undefined4 *)(param_1 + 0x19c) = uVar3;
  return;
}

// 0x00165320  size 0x54
void PhysBody_SetInertia(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x160) = *param_2;
  *(undefined4 *)(param_1 + 0x164) = param_2[1];
  *(undefined4 *)(param_1 + 0x168) = param_2[2];
  *(float *)(param_1 + 0x170) = 1.0 / *(float *)(param_1 + 0x160);
  *(float *)(param_1 + 0x174) = 1.0 / *(float *)(param_1 + 0x164);
  *(float *)(param_1 + 0x178) = 1.0 / *(float *)(param_1 + 0x168);
  PhysBody_UpdateWorldInertia();
  return;
}

// 0x00165380  size 0x8
undefined4 PhysBody_GetInvMass(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0x00165390  size 0x8
undefined4 PhysBody_GetMass(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0x001653a0  size 0x5c
void PhysBody_SetMassAndInertia(float param_1,char *param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(float *)(param_2 + 4) = param_1;
  *(float *)(param_2 + 8) = 1.0 / param_1;
  if (*param_2 != '\0') {
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
  }
  Vec3_Scale(*(undefined4 *)(param_2 + 4),&uStack_10,param_2 + 0x1e0);
  *(undefined4 *)(param_2 + 0x1f0) = uStack_10;
  *(undefined4 *)(param_2 + 500) = uStack_c;
  *(undefined4 *)(param_2 + 0x1f8) = uStack_8;
  *(undefined4 *)(param_2 + 0x1fc) = uStack_4;
  return;
}

// 0x00165400  size 0x47c
void PhysBody_Reset(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
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
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
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
  
  pcVar3 = (char *)param_1;
  *pcVar3 = '\0';
  pcVar3[0x30] = '#';
  pcVar3[0x31] = -0x10;
  pcVar3[0x32] = '\x7f';
  pcVar3[0x33] = '\x7f';
  pcVar3[0x48] = '\0';
  pcVar3[0x49] = '\0';
  pcVar3[0x4a] = '\0';
  pcVar3[0x4b] = '\0';
  pcVar3[0x44] = '\0';
  pcVar3[0x45] = '\0';
  pcVar3[0x46] = '\0';
  pcVar3[0x47] = '\0';
  pcVar3[0x40] = '\0';
  pcVar3[0x41] = '\0';
  pcVar3[0x42] = '\0';
  pcVar3[0x43] = '\0';
  pcVar3[0xa4] = '\0';
  pcVar3[0xa5] = '\0';
  pcVar3[0xa6] = '\0';
  pcVar3[0xa7] = '\0';
  pcVar3[0xa0] = '\0';
  pcVar3[0xa1] = '\0';
  pcVar3[0xa2] = '\0';
  pcVar3[0xa3] = '\0';
  pcVar3[0xb8] = '\0';
  pcVar3[0xb9] = '\0';
  pcVar3[0xba] = '\0';
  pcVar3[0xbb] = '\0';
  pcVar3[0xb4] = '\0';
  pcVar3[0xb5] = '\0';
  pcVar3[0xb6] = '\0';
  pcVar3[0xb7] = '\0';
  pcVar3[0xb0] = '\0';
  pcVar3[0xb1] = '\0';
  pcVar3[0xb2] = '\0';
  pcVar3[0xb3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = -0x80;
  pcVar3[7] = '?';
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = -0x80;
  pcVar3[0xb] = '?';
  if (*pcVar3 != '\0') {
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
  }
  Vec3_Scale(*(undefined4 *)(pcVar3 + 4),&uStack_20,pcVar3 + 0x1e0);
  *(undefined4 *)(pcVar3 + 0x1f0) = uStack_20;
  *(undefined4 *)(pcVar3 + 500) = uStack_1c;
  *(undefined4 *)(pcVar3 + 0x1f8) = uStack_18;
  *(undefined4 *)(pcVar3 + 0x1fc) = uStack_14;
  uStack_c = 0xc11ccccd;
  uStack_10 = 0;
  uStack_8 = 0;
  pcVar3[0x1e0] = '\0';
  pcVar3[0x1e1] = '\0';
  pcVar3[0x1e2] = '\0';
  pcVar3[0x1e3] = '\0';
  pcVar3[0x1e4] = -0x33;
  pcVar3[0x1e5] = -0x34;
  pcVar3[0x1e6] = '\x1c';
  pcVar3[0x1e7] = -0x3f;
  pcVar3[0x1e8] = '\0';
  pcVar3[0x1e9] = '\0';
  pcVar3[0x1ea] = '\0';
  pcVar3[0x1eb] = '\0';
  *(undefined4 *)(pcVar3 + 0x1ec) = uStack_4;
  Vec3_Scale(*(undefined4 *)(pcVar3 + 4),&uStack_30,&uStack_10);
  *(undefined4 *)(pcVar3 + 0x1f0) = uStack_30;
  *(undefined4 *)(pcVar3 + 500) = uStack_2c;
  *(undefined4 *)(pcVar3 + 0x1f8) = uStack_28;
  *(undefined4 *)(pcVar3 + 0x1fc) = uStack_24;
  Vec3_Scale(*(undefined4 *)(pcVar3 + 4),&uStack_40,0x3625e0);
  *(undefined4 *)(pcVar3 + 0xb0) = uStack_40;
  *(undefined4 *)(pcVar3 + 0xb4) = uStack_3c;
  *(undefined4 *)(pcVar3 + 0xb8) = uStack_38;
  *(undefined4 *)(pcVar3 + 0xbc) = uStack_34;
  Vec3_Scale(*(undefined4 *)(pcVar3 + 8),&uStack_c0,pcVar3 + 0xb0);
  *(undefined4 *)(pcVar3 + 0x20) = uStack_c0;
  *(undefined4 *)(pcVar3 + 0x24) = uStack_bc;
  *(undefined4 *)(pcVar3 + 0x28) = uStack_b8;
  *(undefined4 *)(pcVar3 + 0x2c) = uStack_b4;
  uVar5 = Vec3_Length(pcVar3 + 0x20);
  *(undefined4 *)(pcVar3 + 0xa0) = uVar5;
  Vec3_Scale(1.0 / *(float *)(pcVar3 + 0xa0),&uStack_d0,pcVar3 + 0x20);
  *(undefined4 *)(pcVar3 + 0x90) = uStack_d0;
  *(undefined4 *)(pcVar3 + 0x94) = uStack_cc;
  *(undefined4 *)(pcVar3 + 0x98) = uStack_c8;
  *(undefined4 *)(pcVar3 + 0x9c) = uStack_c4;
  if (*(float *)(pcVar3 + 0x30) < *(float *)(pcVar3 + 0xa0)) {
    Vec3_ScaleCopy(&uStack_e0,pcVar3 + 0x90);
    *(undefined4 *)(pcVar3 + 0x20) = uStack_e0;
    *(undefined4 *)(pcVar3 + 0x24) = uStack_dc;
    *(undefined4 *)(pcVar3 + 0x28) = uStack_d8;
    *(undefined4 *)(pcVar3 + 0x2c) = uStack_d4;
    Vec3_Scale(*(undefined4 *)(pcVar3 + 4),&uStack_f0,pcVar3 + 0x20);
    *(undefined4 *)(pcVar3 + 0xb0) = uStack_f0;
    *(undefined4 *)(pcVar3 + 0xb4) = uStack_ec;
    *(undefined4 *)(pcVar3 + 0xb8) = uStack_e8;
    *(undefined4 *)(pcVar3 + 0xbc) = uStack_e4;
    *(undefined4 *)(pcVar3 + 0xa0) = *(undefined4 *)(pcVar3 + 0x30);
  }
  pcVar3[0x70] = '#';
  pcVar3[0x71] = -0x10;
  pcVar3[0x72] = '\x7f';
  pcVar3[0x73] = '\x7f';
  pcVar3[0x88] = '\0';
  pcVar3[0x89] = '\0';
  pcVar3[0x8a] = '\0';
  pcVar3[0x8b] = '\0';
  pcVar3[0x84] = '\0';
  pcVar3[0x85] = '\0';
  pcVar3[0x86] = '\0';
  pcVar3[0x87] = '\0';
  pcVar3[0x80] = '\0';
  pcVar3[0x81] = '\0';
  pcVar3[0x82] = '\0';
  pcVar3[0x83] = '\0';
  pcVar3[0x180] = '\0';
  pcVar3[0x181] = '\0';
  pcVar3[0x182] = '\0';
  pcVar3[0x183] = '\0';
  pcVar3[200] = '\0';
  pcVar3[0xc9] = '\0';
  pcVar3[0xca] = '\0';
  pcVar3[0xcb] = '\0';
  pcVar3[0xc4] = '\0';
  pcVar3[0xc5] = '\0';
  pcVar3[0xc6] = '\0';
  pcVar3[199] = '\0';
  pcVar3[0xc0] = '\0';
  pcVar3[0xc1] = '\0';
  pcVar3[0xc2] = '\0';
  pcVar3[0xc3] = '\0';
  pcVar3[0x198] = '\0';
  pcVar3[0x199] = '\0';
  pcVar3[0x19a] = '\0';
  pcVar3[0x19b] = '\0';
  pcVar3[0x194] = '\0';
  pcVar3[0x195] = '\0';
  pcVar3[0x196] = '\0';
  pcVar3[0x197] = '\0';
  pcVar3[400] = '\0';
  pcVar3[0x191] = '\0';
  pcVar3[0x192] = '\0';
  pcVar3[0x193] = '\0';
  Mat34_Identity(pcVar3 + 0xe0);
  pcVar3[0x160] = -0x33;
  pcVar3[0x161] = -0x34;
  pcVar3[0x162] = -0x34;
  pcVar3[0x163] = '>';
  pcVar3[0x164] = -0x33;
  pcVar3[0x165] = -0x34;
  pcVar3[0x166] = -0x34;
  pcVar3[0x167] = '>';
  pcVar3[0x168] = -0x33;
  pcVar3[0x169] = -0x34;
  pcVar3[0x16a] = -0x34;
  pcVar3[0x16b] = '>';
  *(float *)(pcVar3 + 0x170) = 1.0 / *(float *)(pcVar3 + 0x160);
  *(float *)(pcVar3 + 0x174) = 1.0 / *(float *)(pcVar3 + 0x164);
  *(float *)(pcVar3 + 0x178) = 1.0 / *(float *)(pcVar3 + 0x168);
  PhysBody_UpdateWorldInertia(param_1);
  uVar2 = DAT_003625ec;
  uVar1 = DAT_003625e8;
  uVar5 = DAT_003625e4;
  *(undefined4 *)(pcVar3 + 0xc0) = DAT_003625e0;
  *(undefined4 *)(pcVar3 + 0xc4) = uVar5;
  *(undefined4 *)(pcVar3 + 200) = uVar1;
  *(undefined4 *)(pcVar3 + 0xcc) = uVar2;
  Mat33_MulVec3B(auStack_50,pcVar3 + 0xe0,pcVar3 + 0xc0);
  Vec3_Add(auStack_60,pcVar3 + 0xd0,auStack_50);
  Mat33_Copy(pcVar3 + 0xe0,auStack_60);
  uStack_70 = *(undefined4 *)(pcVar3 + 0x110);
  uStack_6c = *(undefined4 *)(pcVar3 + 0x114);
  uStack_68 = *(undefined4 *)(pcVar3 + 0x118);
  *(undefined4 *)(pcVar3 + 0x10) = uStack_70;
  *(undefined4 *)(pcVar3 + 0x14) = uStack_6c;
  *(undefined4 *)(pcVar3 + 0x18) = uStack_68;
  *(undefined4 *)(pcVar3 + 0x1c) = uStack_64;
  Mat33_Copy(pcVar3 + 0xe0,0x3625e0);
  uStack_110 = *(undefined4 *)(pcVar3 + 0x110);
  uStack_10c = *(undefined4 *)(pcVar3 + 0x114);
  uStack_108 = *(undefined4 *)(pcVar3 + 0x118);
  *(undefined4 *)(pcVar3 + 0x10) = uStack_110;
  *(undefined4 *)(pcVar3 + 0x14) = uStack_10c;
  *(undefined4 *)(pcVar3 + 0x18) = uStack_108;
  *(undefined4 *)(pcVar3 + 0x1c) = uStack_104;
  Mat33_MulVec3B(auStack_100,pcVar3 + 0xe0,pcVar3 + 0xc0);
  Vec3_Sub(&uStack_120,pcVar3 + 0x10,auStack_100);
  uStack_124 = 0x3f800000;
  *(undefined4 *)(pcVar3 + 0xd0) = uStack_120;
  *(undefined4 *)(pcVar3 + 0xd4) = uStack_11c;
  *(undefined4 *)(pcVar3 + 0xd8) = uStack_118;
  *(undefined4 *)(pcVar3 + 0xdc) = uStack_114;
  uStack_130 = *(undefined4 *)(pcVar3 + 0xd0);
  uStack_12c = *(undefined4 *)(pcVar3 + 0xd4);
  uStack_128 = *(undefined4 *)(pcVar3 + 0xd8);
  *(undefined4 *)(pcVar3 + 0x150) = uStack_130;
  *(undefined4 *)(pcVar3 + 0x154) = uStack_12c;
  *(undefined4 *)(pcVar3 + 0x158) = uStack_128;
  pcVar3[0x15c] = '\0';
  pcVar3[0x15d] = '\0';
  pcVar3[0x15e] = -0x80;
  pcVar3[0x15f] = '?';
  *(undefined4 *)(pcVar3 + 0x50) = DAT_003624d0;
  *(undefined4 *)(pcVar3 + 0x54) = DAT_003624d4;
  *(undefined4 *)(pcVar3 + 0x58) = DAT_003624d8;
  *(undefined4 *)(pcVar3 + 0x5c) = DAT_003624dc;
  Quat_Normalize(pcVar3 + 0x50);
  PhysBody_UpdateWorldInertia(param_1);
  uStack_150 = *(undefined4 *)(pcVar3 + 0x110);
  uStack_14c = *(undefined4 *)(pcVar3 + 0x114);
  uStack_148 = *(undefined4 *)(pcVar3 + 0x118);
  *(undefined4 *)(pcVar3 + 0x10) = uStack_150;
  *(undefined4 *)(pcVar3 + 0x14) = uStack_14c;
  *(undefined4 *)(pcVar3 + 0x18) = uStack_148;
  *(undefined4 *)(pcVar3 + 0x1c) = uStack_144;
  Mat33_MulVec3B(auStack_140,pcVar3 + 0xe0,pcVar3 + 0xc0);
  Vec3_Sub(&uStack_160,pcVar3 + 0x10,auStack_140);
  uStack_164 = 0x3f800000;
  uStack_74 = 0x3f800000;
  *(undefined4 *)(pcVar3 + 0xd0) = uStack_160;
  *(undefined4 *)(pcVar3 + 0xd4) = uStack_15c;
  *(undefined4 *)(pcVar3 + 0xd8) = uStack_158;
  *(undefined4 *)(pcVar3 + 0xdc) = uStack_154;
  uStack_170 = *(undefined4 *)(pcVar3 + 0xd0);
  uStack_16c = *(undefined4 *)(pcVar3 + 0xd4);
  uStack_168 = *(undefined4 *)(pcVar3 + 0xd8);
  *(undefined4 *)(pcVar3 + 0x150) = uStack_170;
  *(undefined4 *)(pcVar3 + 0x154) = uStack_16c;
  *(undefined4 *)(pcVar3 + 0x158) = uStack_168;
  pcVar3[0x15c] = '\0';
  pcVar3[0x15d] = '\0';
  pcVar3[0x15e] = -0x80;
  pcVar3[0x15f] = '?';
  uStack_84 = 0x3f800000;
  Mat33_MulVec3Transposed(&fStack_a0,pcVar3 + 0xe0,0x3625e0);
  fStack_80 = fStack_a0;
  fStack_7c = fStack_9c;
  fStack_78 = fStack_98;
  uStack_74 = uStack_94;
  fStack_90 = *(float *)(pcVar3 + 0x160) * fStack_a0;
  fStack_8c = *(float *)(pcVar3 + 0x164) * fStack_9c;
  fStack_88 = *(float *)(pcVar3 + 0x168) * fStack_98;
  Mat33_MulVec3B(&uStack_b0,pcVar3 + 0xe0,&fStack_90);
  *(undefined4 *)(pcVar3 + 400) = uStack_b0;
  *(undefined4 *)(pcVar3 + 0x194) = uStack_ac;
  *(undefined4 *)(pcVar3 + 0x198) = uStack_a8;
  *(undefined4 *)(pcVar3 + 0x19c) = uStack_a4;
  Mat33_MulVec3B(&uStack_180,pcVar3 + 0x1a0,pcVar3 + 400);
  *(undefined4 *)(pcVar3 + 0x60) = uStack_180;
  *(undefined4 *)(pcVar3 + 100) = uStack_17c;
  *(undefined4 *)(pcVar3 + 0x68) = uStack_178;
  *(undefined4 *)(pcVar3 + 0x6c) = uStack_174;
  fVar4 = *(float *)(pcVar3 + 0x70);
  fVar6 = *(float *)(pcVar3 + 0x68) * *(float *)(pcVar3 + 0x68) +
          *(float *)(pcVar3 + 0x60) * *(float *)(pcVar3 + 0x60) +
          *(float *)(pcVar3 + 100) * *(float *)(pcVar3 + 100);
  if (fVar4 * fVar4 < fVar6) {
    fVar4 = fVar4 / SQRT(fVar6);
    Vec3_ScaleInPlace(fVar4,pcVar3 + 400);
    Vec3_ScaleInPlace(fVar4,pcVar3 + 0x60);
  }
  return;
}

// 0x00165880  size 0x44
long maybe_CarSpec_dtor(long param_1,short param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
    Mem_Free();
  }
  return param_1;
}

// 0x001658d0  size 0x64
undefined8 maybe_Car_InitMatrices(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x17c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x19c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x1ec) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x1fc) = 0x3f800000;
  PhysBody_Reset();
  return param_1;
}

// 0x00165940  size 0x138
/* cubic curve of tan(slip angle) */

float Tire_LateralForceFromSlip(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((1.5707964 < param_1) || (param_1 < -1.5707964)) {
    param_1 = param_1 * -1.0;
  }
  fVar1 = (float)tanf(param_1);
  fVar4 = *(float *)(param_2 + 0x10) * 0.5;
  fVar2 = (float)fabsf(fVar1);
  fVar3 = 3.0;
  if (fVar2 < (*(float *)(param_2 + 8) * 3.0) / fVar4) {
    fVar3 = fVar2 * (fVar4 / *(float *)(param_2 + 8));
  }
  fVar2 = fVar3 * fVar3 * fVar3;
  fVar3 = (fVar2 * 0.055555556 + (fVar3 * 0.16666667 - fVar3 * fVar3 * 0.16666667)) -
          fVar2 * fVar3 * 0.0061728396;
  if (fVar1 < 0.0) {
    fVar3 = fVar3 * -1.0;
  }
  return fVar3;
}

// 0x00165a80  size 0x260
/* golden-section search (0.618) */

undefined4 Tire_FindPeakSlipRatio(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = 1.0;
  fVar11 = 0.0;
  fVar2 = 0.38192397;
  iVar4 = (int)param_1;
  if (0.0 < *param_2) {
    Tire_ForceAtSlip(0x3f800000);
    fVar5 = (float)Tire_ForceAtSlip(0x3ec38b8a,param_1);
    fVar6 = (float)Tire_ForceAtSlip(0x3f1e353f,param_1);
    uVar3 = 0;
    fVar8 = 0.618;
    do {
      fVar7 = fVar6;
      if (fVar7 < fVar5) {
        fVar9 = (fVar8 - fVar11) * 0.618 * 0.618 + fVar11 + 0.0;
        fVar7 = (float)Tire_ForceAtSlip(fVar9,param_1);
        fVar10 = fVar2;
        fVar1 = fVar8;
        fVar6 = fVar5;
      }
      else {
        fVar10 = (fVar1 - fVar2) * 0.618 + fVar2 + 0.0;
        fVar6 = (float)Tire_ForceAtSlip(fVar10,param_1);
        fVar9 = fVar8;
        fVar11 = fVar2;
      }
      uVar3 = uVar3 + 1;
      fVar2 = fVar9;
      fVar8 = fVar10;
      fVar5 = fVar7;
    } while (uVar3 < 0x14);
    *param_2 = fVar7;
    *(float *)(iVar4 + 0x34) = fVar7;
    *(float *)(iVar4 + 0x30) = fVar9;
  }
  else {
    Tire_ForceAtSlip(0xbf800000);
    fVar5 = (float)Tire_ForceAtSlip(0xbec38b8a,param_1);
    fVar6 = (float)Tire_ForceAtSlip(0xbf1e353f,param_1);
    uVar3 = 0;
    fVar8 = 0.618;
    do {
      fVar7 = fVar6;
      if (fVar5 < fVar7) {
        fVar9 = (fVar8 - fVar11) * 0.618 * 0.618 + fVar11 + 0.0;
        fVar7 = (float)Tire_ForceAtSlip(-fVar9,param_1);
        fVar10 = fVar2;
        fVar1 = fVar8;
        fVar6 = fVar5;
      }
      else {
        fVar10 = (fVar1 - fVar2) * 0.618 + fVar2 + 0.0;
        fVar6 = (float)Tire_ForceAtSlip(-fVar10,param_1);
        fVar9 = fVar8;
        fVar11 = fVar2;
      }
      uVar3 = uVar3 + 1;
      fVar2 = fVar9;
      fVar8 = fVar10;
      fVar5 = fVar7;
    } while (uVar3 < 0x14);
    *param_2 = fVar7;
    *(float *)(iVar4 + 0x34) = fVar7;
    *(float *)(iVar4 + 0x30) = -fVar9;
  }
  return *(undefined4 *)(iVar4 + 0x30);
}

// 0x00165cf0  size 0x1f4
float Tire_LongitudinalForce(float param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_4;
  
  fStack_4 = param_1;
  fVar3 = (float)Tire_FindPeakSlipRatio(param_2,&fStack_4);
  fVar7 = 0.0;
  fVar5 = 0.001;
  iVar2 = (int)param_2;
  if (0.0 <= param_1) {
    if (fStack_4 < param_1) {
      *(undefined1 *)(iVar2 + 0x38) = 1;
      return fVar3;
    }
    fVar3 = (float)fabsf(*(undefined4 *)(iVar2 + 0x28));
    if (1.4137167 < fVar3) {
      fVar7 = 0.99;
      fVar5 = 0.96;
    }
  }
  else if (param_1 < fStack_4) {
    *(undefined1 *)(iVar2 + 0x38) = 1;
    return fVar3;
  }
  *(undefined1 *)(iVar2 + 0x38) = 0;
  fVar3 = (float)Tire_ForceAtSlip(fVar7,param_2);
  fVar3 = fVar3 - param_1;
  fVar4 = (float)Tire_ForceAtSlip(fVar5,param_2);
  iVar2 = 99;
  fVar4 = fVar4 - param_1;
  while( true ) {
    fVar6 = fVar5;
    fVar5 = (float)fabsf(fVar7 - fVar6);
    if (fVar5 < 1e-06) {
      return fVar6;
    }
    fVar5 = (float)fabsf(fVar3 - fVar4);
    if (fVar5 < 1e-06) break;
    fVar5 = fVar6 - fVar4 / ((fVar4 - fVar3) / (fVar6 - fVar7));
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    if (fVar5 < -1.0) {
      fVar5 = -1.0;
    }
    fVar7 = (float)Tire_ForceAtSlip(param_2);
    bVar1 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    fVar3 = fVar4;
    fVar4 = fVar7 - param_1;
    fVar7 = fVar6;
    if (bVar1) {
      return fVar5;
    }
  }
  return fVar6;
}

// 0x00165ef0  size 0x2c8
float Tire_CombinedForce(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((1.5707964 < param_1) || (param_1 < -1.5707964)) {
    param_1 = param_1 * -1.0;
  }
  fVar1 = (float)tanf(param_1);
  fVar4 = 0.0;
  fVar2 = 1.0 - param_2 * *(float *)(*(int *)(param_4 + 4) + 8);
  if (0.0 <= param_2) {
    fVar6 = *(float *)(param_4 + 0x20);
    fVar3 = 1.0 - param_2;
    fVar7 = fVar3 * fVar6 * fVar1;
    fVar7 = SQRT(param_2 * param_2 + fVar7 * fVar7 + 0.0);
    fVar5 = 1.0 - *(float *)(param_4 + 0x1c) * fVar7;
    if (0.0 < fVar5) {
      if (0.001 <= fVar7) {
        fVar4 = fVar5 * fVar5 * fVar3 * *(float *)(param_4 + 0x10) * fVar1 +
                ((fVar3 * fVar1 * fVar6 * fVar2 * 6.0 * *(float *)(param_4 + 0xc)) / fVar7) *
                (0.16666667 - fVar5 * fVar5 * (0.5 - fVar5 / 3.0)) + 0.0;
      }
    }
    else {
      fVar4 = (fVar3 * fVar1 * fVar6 * fVar2 * *(float *)(param_4 + 0xc)) / fVar7;
    }
  }
  else {
    fVar7 = param_2 + 1.0;
    fVar3 = *(float *)(param_4 + 0x20);
    fVar4 = SQRT(param_2 * param_2 + fVar3 * fVar1 * fVar3 * fVar1 + 0.0);
    if (0.001 <= fVar7) {
      fVar5 = 1.0 - (*(float *)(param_4 + 0x1c) * fVar4) / fVar7;
      if (0.0 < fVar5) {
        fVar4 = fVar5 * fVar5 * ((*(float *)(param_4 + 0x10) * fVar1) / fVar7) +
                ((fVar1 * fVar3 * fVar2 * 6.0 * *(float *)(param_4 + 0xc)) / fVar4) *
                (0.16666667 - fVar5 * fVar5 * (0.5 - fVar5 / 3.0)) + 0.0;
      }
      else {
        fVar4 = (fVar1 * fVar3 * fVar2 * *(float *)(param_4 + 0xc)) / fVar4;
      }
    }
    else {
      fVar4 = (fVar1 * fVar3 * fVar2 * *(float *)(param_4 + 0xc)) / fVar4;
    }
  }
  return *(float *)(param_4 + 0x10) * 0.2 * param_3 + fVar4 + 0.0;
}

// 0x001661c0  size 0x228
float Tire_ForceAtSlip(float param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar3 = (float)param_2[9] * (1.0 - param_1);
    fVar2 = SQRT(param_1 * param_1 + fVar3 * fVar3 + 0.0);
    fVar4 = 1.0 - param_1 * *(float *)(*param_2 + 8);
    fVar3 = 1.0 - (float)param_2[6] * fVar2;
    if (0.0 < fVar3) {
      if (0.001 <= fVar2) {
        fVar1 = fVar3 * fVar3 * (float)param_2[5] * param_1 +
                ((param_1 * fVar4 * 6.0 * (float)param_2[2]) / fVar2) *
                (0.16666667 - fVar3 * fVar3 * (0.5 - fVar3 / 3.0)) + 0.0;
      }
    }
    else {
      fVar1 = (param_1 * fVar4 * (float)param_2[2]) / fVar2;
    }
  }
  else {
    fVar4 = param_1 + 1.0;
    fVar1 = SQRT(param_1 * param_1 + (float)param_2[9] * (float)param_2[9] + 0.0);
    fVar3 = param_1 * *(float *)(*param_2 + 8) + 1.0;
    if (0.001 <= fVar4) {
      fVar2 = 1.0 - ((float)param_2[6] * fVar1) / fVar4;
      if (0.0 < fVar2) {
        fVar1 = fVar2 * fVar2 * (((float)param_2[5] * param_1) / fVar4) +
                ((param_1 * fVar3 * 6.0 * (float)param_2[2]) / fVar1) *
                (0.16666667 - fVar2 * fVar2 * (0.5 - fVar2 / 3.0)) + 0.0;
      }
      else {
        fVar1 = (param_1 * fVar3 * (float)param_2[2]) / fVar1;
      }
    }
    else {
      fVar1 = (-fVar3 * (float)param_2[2]) / fVar1;
    }
  }
  return fVar1;
}

// 0x001663f0  size 0x174
void Tire_SetupLoad(float param_1,float param_2,float param_3,int *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  param_4[2] = (int)(param_1 * param_2);
  param_4[3] = (int)((float)param_4[2] * 1.05);
  *param_4 = param_5 + 0x10;
  pfVar1 = (float *)*param_4;
  fVar2 = pfVar1[3];
  fVar3 = param_1;
  if (fVar2 < param_1) {
    fVar3 = (param_1 - fVar2) * 0.2 + fVar2 + 0.0;
  }
  fVar2 = (*pfVar1 + 0.0) - pfVar1[1] * fVar3;
  if (fVar2 <= 0.0) {
    fVar2 = 0.001;
  }
  param_4[5] = (int)(fVar3 * fVar2);
  param_4[1] = param_5 + 0x20;
  pfVar1 = (float *)param_4[1];
  fVar3 = pfVar1[3];
  if (fVar3 < param_1) {
    param_1 = (param_1 - fVar3) * 0.2 + fVar3 + 0.0;
  }
  fVar3 = (*pfVar1 + 0.0) - pfVar1[1] * param_1;
  if (fVar3 <= 0.0) {
    fVar3 = 0.001;
  }
  param_4[4] = (int)(param_3 * param_1 * fVar3);
  param_4[6] = (int)((float)param_4[5] / ((float)param_4[2] * 3.0));
  param_4[7] = (int)((float)param_4[5] / ((float)param_4[3] * 3.0));
  param_4[8] = (int)((float)param_4[4] / (float)param_4[5]);
  return;
}

// 0x00166570  size 0x174
float Car_GetSurfaceGrip(int param_1,ulong param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (float)fabsf(*(undefined4 *)(param_1 + 400));
  if (5.0 <= fVar3) {
    fVar3 = 0.0;
    if (*(char *)(param_1 + 0x9a8) != '\0') {
      uVar2 = (uint)*(byte *)((int)param_2 * 0x140 + param_1 + 0x1c8);
      if (param_2 < 2) {
        iVar1 = *(int *)(uVar2 * 4 + param_1 + 0x9ac);
      }
      else {
        iVar1 = *(int *)(uVar2 * 4 + param_1 + 0xa2c);
      }
      if (iVar1 != 0) {
        fVar3 = *(float *)(iVar1 + 8);
      }
    }
    fVar4 = 0.0;
    if (0.0 < fVar3) {
      fVar6 = *param_3 * (fVar3 + 2.93) + fVar3 + 0.0;
      fVar4 = (float)maybe_floorf(fVar6);
      fVar7 = param_3[2] * (fVar3 + 1.71) + fVar3 + 0.0;
      fVar5 = (float)maybe_floorf(fVar7);
      fVar4 = (float)fabsf(((fVar6 - fVar4) + (fVar7 - fVar5)) * 0.5);
      fVar4 = fVar3 * (3.0 - fVar4 * 2.0) * fVar4 * fVar4;
    }
  }
  else {
    fVar4 = 0.0;
  }
  return fVar4;
}

// 0x001666f0  size 0x274
/* gear at +0x814 (-1 = reverse) */

void Car_UpdateGearRatio(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (*(char *)(iVar1 + 0x674) == '\0') {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x814);
  if (iVar2 == -1) {
    fVar3 = *(float *)(param_1 + 300);
    fVar5 = *(float *)(param_1 + 0x820) * fVar3;
  }
  else if (iVar2 == 0) {
    fVar5 = *(float *)(param_1 + 0x128);
    fVar3 = fVar5;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x128);
    fVar3 = fVar5;
    if ((iVar2 != 1) && (*(float *)(param_1 + 0x824) != 0.0)) {
      fVar3 = 0.0;
    }
    if (((*(int *)(param_1 + 0x818) != 0) && (*(float *)(param_1 + 0x820) < 1.0)) ||
       (*(char *)(param_1 + 0x810) != '\0')) {
      fVar5 = 0.0;
    }
  }
  fVar4 = *(float *)(iVar1 + 0x680) * (*(float *)(param_1 + 0x7fc) / *(float *)(iVar1 + 0x68c));
  if (fVar3 != 0.0) {
    fVar5 = fVar4 * fVar5;
    if (1.0 <= fVar5) {
      if (fVar5 <= *(float *)(iVar1 + 0x684)) goto LAB_001667ec;
      *(float *)(param_1 + 0xac0) = *(float *)(iVar1 + 0x684);
    }
    else {
      fVar5 = 1.0;
LAB_001667ec:
      *(float *)(param_1 + 0xac0) = fVar5;
    }
    fVar5 = *(float *)(iVar1 + 0x684);
    goto LAB_001667f4;
  }
  fVar5 = fVar4 * fVar5;
  if (0.6 <= fVar5) {
    if (fVar5 <= *(float *)(iVar1 + 0x684)) goto LAB_00166940;
    *(float *)(param_1 + 0xac0) = *(float *)(iVar1 + 0x684);
  }
  else {
    fVar5 = 0.6;
LAB_00166940:
    *(float *)(param_1 + 0xac0) = fVar5;
  }
  fVar5 = *(float *)(iVar1 + 0x684);
LAB_001667f4:
  *(float *)(param_1 + 0xac8) =
       1.0 - *(float *)(iVar1 + 0x67c) * ((fVar5 - *(float *)(param_1 + 0xac0)) / (fVar5 - 0.6));
  *(undefined1 *)(param_1 + 0xacc) = 0;
  if (*(char *)(iVar1 + 0x675) == '\0') {
    *(bool *)(param_1 + 0xac4) =
         *(float *)(iVar1 + 0x684) * *(float *)(iVar1 + 0x688) < (fVar4 - 1.0) * (1.0 - fVar3) * 1.6
    ;
    if ((*(int *)(param_1 + 0x814) < *(int *)(param_1 + 0x818)) &&
       (*(float *)(param_1 + 0x128) == 0.0)) {
      *(undefined1 *)(param_1 + 0xac4) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xac8) = 0x3f800000;
    fVar3 = *(float *)(iVar1 + 0x684) * 0.9;
    if (*(float *)(param_1 + 0xac0) < fVar3) {
      *(float *)(param_1 + 0xac0) = fVar3;
      *(undefined1 *)(param_1 + 0xacc) = 1;
    }
  }
  return;
}

// 0x00166970  size 0x38
void maybe_Car_ClampThrottle(float param_1,int param_2)

{
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x128) = param_1;
  return;
}

// 0x001669b0  size 0x38
void maybe_Car_ClampBrake(float param_1,int param_2)

{
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x134) = param_1;
  return;
}

// 0x001669f0  size 0x38
void maybe_Car_ClampClutch(float param_1,int param_2)

{
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x130) = param_1;
  return;
}

// 0x00166a30  size 0x98
void maybe_Car_ClampSteer(float param_1,float param_2,int param_3)

{
  float fVar1;
  
  if (-1.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = -1.0;
  }
  fVar1 = (*(float *)(param_3 + 0x124) + 0.0) -
          param_2 * (*(float *)(param_3 + 0x124) - param_1) *
                    *(float *)(*(int *)(param_3 + 0x120) + 0x16c);
  *(float *)(param_3 + 0x124) = fVar1;
  if (-1.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = -1.0;
  }
  *(float *)(param_3 + 0x124) = fVar1;
  return;
}

// 0x00166ad0  size 0x1b0
/* steering input, sin curve */

void Car_UpdateFrontTires(float param_1,undefined8 param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (-1.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = -1.0;
  }
  if (param_1 < 0.0) {
    fVar2 = (float)sinf(param_1 * 1.5707964);
    fVar2 = fVar2 + -1.0;
  }
  else {
    fVar2 = (float)sinf(param_1 * 1.5707964);
    fVar2 = 1.0 - fVar2;
  }
  piVar1 = (int *)param_2;
  fVar6 = ((float)piVar1[0xa4] + (float)piVar1[0xf4]) * 0.5;
  Tire_SetupLoad(((float)piVar1[0xa8] + (float)piVar1[0xf8]) * 0.5,0x3f800000,
                 *(undefined4 *)(piVar1[0x48] + 0x214),piVar1 + 0x2b9,piVar1[0x48] + 0x180);
  iVar3 = Tire_LateralForceFromSlip(fVar6,piVar1 + 0x2b9);
  piVar1[0x2d7] = iVar3;
  fVar6 = 1.0;
  fVar4 = (float)(**(code **)(*piVar1 + 0x58))(param_2);
  fVar5 = (float)(**(code **)(*piVar1 + 0x5c))(param_2);
  if (1.0 < fVar4) {
    fVar6 = fVar4;
  }
  if (fVar6 < fVar5) {
    fVar6 = fVar5;
  }
  fVar2 = fVar2 * fVar6;
  piVar1[0x49] = (int)fVar2;
  if (-1.2 <= fVar2) {
    if (1.2 < fVar2) {
      fVar2 = 1.2;
    }
  }
  else {
    fVar2 = -1.2;
  }
  piVar1[0x49] = (int)fVar2;
  return;
}

// 0x00166c80  size 0x54
void maybe_Car_SetThrottleInput(float param_1,int param_2,long param_3)

{
  float fVar1;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x134) = 0;
  }
  else {
    fVar1 = *(float *)(*(int *)(param_2 + 0x120) + 0xb0) * param_1 +
            *(float *)(param_2 + 0x134) + 0.0;
    *(float *)(param_2 + 0x134) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_2 + 0x134) = 0x3f800000;
    }
  }
  return;
}

// 0x00166ce0  size 0x54
void maybe_Car_SetBrakeInput(float param_1,int param_2,long param_3)

{
  float fVar1;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 300) = 0;
  }
  else {
    fVar1 = *(float *)(*(int *)(param_2 + 0x120) + 0x520) * param_1 +
            *(float *)(param_2 + 300) + 0.0;
    *(float *)(param_2 + 300) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_2 + 300) = 0x3f800000;
    }
  }
  return;
}

// 0x00166d40  size 0x60
void maybe_Car_SetHandbrakeInput(float param_1,int param_2,long param_3)

{
  float fVar1;
  
  if ((param_3 == 0) || (*(int *)(param_2 + 0x814) < 0)) {
    *(undefined4 *)(param_2 + 0x128) = 0;
  }
  else {
    fVar1 = *(float *)(*(int *)(param_2 + 0x120) + 0x520) * param_1 +
            *(float *)(param_2 + 0x128) + 0.0;
    *(float *)(param_2 + 0x128) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_2 + 0x128) = 0x3f800000;
    }
  }
  return;
}

// 0x00166da0  size 0x54
void maybe_Car_SetClutchInput(float param_1,int param_2,long param_3)

{
  float fVar1;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x130) = 0;
  }
  else {
    fVar1 = *(float *)(*(int *)(param_2 + 0x120) + 0xb0) * param_1 +
            *(float *)(param_2 + 0x130) + 0.0;
    *(float *)(param_2 + 0x130) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_2 + 0x130) = 0x3f800000;
    }
  }
  return;
}

// 0x00166e00  size 0x250
void Car_UpdateRearTires(float param_1,float param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_3 + 0x120);
  fVar3 = *(float *)(iVar1 + 0x16c) * param_2;
  param_2 = *(float *)(iVar1 + 0x170) * param_2;
  fVar4 = param_2 / fVar3;
  fVar5 = (*(float *)(param_3 + 0x290) + *(float *)(param_3 + 0x3d0)) * 0.5;
  Tire_SetupLoad((*(float *)(param_3 + 0x2a0) + *(float *)(param_3 + 0x3e0)) * 0.5,0x3f800000,
                 *(undefined4 *)(iVar1 + 0x214),param_3 + 0xae4,iVar1 + 0x180);
  uVar2 = Tire_LateralForceFromSlip(fVar5,param_3 + 0xae4);
  *(undefined4 *)(param_3 + 0xb5c) = uVar2;
  if (param_4 != 0) {
    param_1 = -1.0;
  }
  if (param_5 != 0) {
    param_1 = 1.0;
  }
  fVar5 = *(float *)(param_3 + 0x124);
  param_1 = param_1 - fVar5;
  if (0.0 < param_1) {
    if (fVar5 < 0.0) {
      fVar3 = param_2;
    }
    else if (2.0 < *(float *)(param_3 + 0xb5c)) {
      fVar5 = *(float *)(param_3 + 0xb5c) / 20.0 + 1.0;
      if (0.0 <= fVar5) {
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
      }
      else {
        fVar4 = 0.0;
      }
      fVar3 = fVar3 * fVar4;
    }
    if (fVar3 < param_1) {
      param_1 = fVar3;
    }
  }
  else {
    if (0.0 < fVar5) {
      fVar3 = param_2;
    }
    else if (*(float *)(param_3 + 0xb5c) < -2.0) {
      fVar5 = -*(float *)(param_3 + 0xb5c) / 20.0 + 1.0;
      if (0.0 <= fVar5) {
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
      }
      else {
        fVar4 = 0.0;
      }
      fVar3 = fVar3 * fVar4;
    }
    if (param_1 < -fVar3) {
      param_1 = -fVar3;
    }
  }
  param_1 = *(float *)(param_3 + 0x124) + param_1;
  *(float *)(param_3 + 0x124) = param_1;
  if (-1.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = -1.0;
  }
  *(float *)(param_3 + 0x124) = param_1;
  return;
}

// 0x00167050  size 0x30
undefined4 maybe_Car_GetNitroScale(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (*(char *)(param_1 + 0x88d) != '\0') {
    uVar1 = 0x3f99999a;
  }
  return uVar1;
}

// 0x00167080  size 0x38
float maybe_Car_GetBoostScale(int param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (0.5 < *(float *)(param_1 + 0x130)) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x120) + 0x17c) + 1.0;
  }
  return fVar1;
}

// 0x001670c0  size 0x4bc
void Car_Init(int *param_1,int param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  memset(param_1 + 0x6c,0,0x500);
  uVar4 = 0;
  *(undefined1 *)(param_1 + 600) = 1;
  param_1[0x48] = param_2;
  piVar3 = param_1;
  do {
    if (uVar4 < 2) {
      piVar3[0x1f0] = param_1[0x48] + 0x180;
      piVar3[0x1ec] = (int)(param_1 + 0x1ac);
    }
    else {
      piVar3[0x1f0] = param_1[0x48] + 0x290;
      piVar3[0x1ec] = (int)(param_1 + 0x1cc);
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 4);
  iVar1 = param_1[0x48];
  param_1[0x11] =
       (int)((*(float *)(iVar1 + 0x1c0) + *(float *)(iVar1 + 0x2d0)) * 2.0 +
            *(float *)(iVar1 + 0x24) + 0.0);
  PhysBody_SetMassAndInertia(param_1[0x11],param_1[0x55]);
  PhysBody_SetInertia(param_1[0x55],param_1[0x48] + 0x70);
  PhysBody_SetTransformFrom(param_1[0x55],param_1[0x48] + 0x90);
  PhysBody_SetSleepTimer(param_1[0x55],0x362600);
  PhysBody_SetGravityScale(0x40800000,param_1[0x55]);
  uStack_10 = 0;
  uStack_8 = 0;
  uStack_c = 0xc11ccccd;
  PhysBody_SetMass(param_1[0x55],&uStack_10);
  Phys_RemoveBody(param_1[0x56]);
  param_1[0x56] = 0;
  piVar3 = (int *)param_1[0x57];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3,1);
  }
  param_1[0x57] = 0;
  lVar2 = maybe_operator_new_arr(0x1d0);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = PhysBox_Init(lVar2,param_1[0x48] + 0x710,param_1[0x48] + 0x720);
  }
  param_1[0x57] = iVar1;
  PhysPair_SetShapeA(*(undefined4 *)(param_1[0x48] + 0x730),param_1[0x57]);
  PhysPair_SetShapeB(*(undefined4 *)(param_1[0x48] + 0x734),param_1[0x57]);
  PhysPair_SetBodyA(*(undefined4 *)(param_1[0x48] + 0x730),param_1[0x57]);
  PhysPair_SetBodyB(*(undefined4 *)(param_1[0x48] + 0x734),param_1[0x57]);
  iVar1 = Phys_AddBody(param_1[0x55],param_1[0x57],param_3);
  param_1[0x56] = iVar1;
  uStack_20 = 0x3f800000;
  uStack_1c = 0x3e800000;
  uStack_18 = 0x3f800000;
  PhysBody_SetVelocity(param_1[0x56],&uStack_20);
  PhysBody_SetMaterial(0x3e4ccccd,param_1[0x56]);
  PhysBody_TestCollideMask(param_1[0x56],0xffffffffffffffff);
  PhysBody_ClearGroupMask(param_1[0x56],0xffffffffffffffff);
  PhysBody_ClearCollideMask(param_1[0x56],0xffffffffffffffff);
  PhysBody_ClearFlags(param_1[0x56],0xffffffffffffffff);
  param_3 = param_3 | 0x7000000;
  PhysBody_TestGroupMask(param_1[0x56],param_3);
  PhysBody_SetGroupMask(param_1[0x56],param_3);
  PhysBody_SetCollideMask(param_1[0x56],param_3);
  PhysBody_ClearFlags(param_1[0x56],0x1000000);
  *(undefined1 *)(param_1 + 0x2dd) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  memset(param_1 + 0x6c,0,0x500);
  memset(param_1 + 0x1ac,0,0x80);
  memset(param_1 + 0x1cc,0,0x80);
  memset(param_1 + 0x1fb,0,0x80);
  param_1[0x9e] = 0x3f800000;
  param_1[0xab] = 0;
  param_1[0xee] = 0x3f800000;
  param_1[0xfb] = 0;
  param_1[0x13e] = 0x3f800000;
  param_1[0x14b] = 0;
  param_1[0x18e] = 0x3f800000;
  param_1[0x19b] = 0;
  param_1[0x1c4] = *(int *)(param_1[0x48] + 0x20c);
  param_1[0x1e4] = *(int *)(param_1[0x48] + 0x31c);
  iVar1 = param_1[0x48];
  fVar6 = *(float *)(iVar1 + 0x210);
  fVar5 = *(float *)(iVar1 + 800);
  param_1[0x2b4] = (int)((float)param_1[0x11] * 9.8 * *(float *)(iVar1 + 0x75c));
  param_1[0x2b5] = (int)((float)param_1[0x11] * 9.8 * *(float *)(param_1[0x48] + 0x760));
  fVar5 = 1.0 - (float)param_1[0x11] * 0.25 * (fVar6 + fVar5) * 0.5;
  param_1[0x2b6] =
       (int)(*(float *)(param_2 + 0x75c) /
            (fVar5 * ((float)param_1[0x1c4] + (float)param_1[0x1e4]) * 0.5));
  param_1[0x2b7] =
       (int)(*(float *)(param_2 + 0x760) /
            (fVar5 * ((float)param_1[0x1c4] + (float)param_1[0x1e4]) * 0.5));
  fVar5 = (float)param_1[0x2b6];
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  param_1[0x2b6] = (int)fVar5;
  fVar5 = (float)param_1[0x2b7];
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  param_1[0x2b7] = (int)fVar5;
  Car_UpdateAutoShift(param_1);
  Car_SyncFromRigidBody(param_1);
  Car_UpdateWheelTransforms(param_1);
  param_1[0x222] = *(int *)(param_2 + 0xdc);
  param_1[0x1c5] = *(int *)(param_2 + 0xe4);
  param_1[0x1e5] = (int)(1.0 - *(float *)(param_2 + 0xe4));
  param_1[0x2ae] = (int)((1.0 - *(float *)(param_2 + 0x758)) * 0.5 + 1.0);
  param_1[0x2af] = (int)(1.0 - (1.0 - *(float *)(param_2 + 0x758)) * 0.25);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

// 0x00167580  size 0x4d8
void Car_Reset(int *param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  Car_Clear();
  uVar4 = 0;
  *(undefined1 *)(param_1 + 600) = 1;
  param_1[0x48] = param_2;
  piVar3 = param_1;
  do {
    if (uVar4 < 2) {
      piVar3[0x1f0] = param_1[0x48] + 0x180;
      piVar3[0x1ec] = (int)(param_1 + 0x1ac);
    }
    else {
      piVar3[0x1f0] = param_1[0x48] + 0x290;
      piVar3[0x1ec] = (int)(param_1 + 0x1cc);
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 4);
  iVar1 = param_1[0x48];
  param_1[0x11] =
       (int)((*(float *)(iVar1 + 0x1c0) + *(float *)(iVar1 + 0x2d0)) * 2.0 +
            *(float *)(iVar1 + 0x24) + 0.0);
  lVar2 = maybe_operator_new_arr(0x210);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = maybe_Car_InitMatrices(lVar2);
  }
  param_1[0x55] = iVar1;
  PhysBody_Reset(param_1[0x55]);
  PhysBody_SetMassAndInertia(param_1[0x11],param_1[0x55]);
  PhysBody_SetInertia(param_1[0x55],param_1[0x48] + 0x70);
  PhysBody_SetTransformFrom(param_1[0x55],param_1[0x48] + 0x90);
  PhysBody_SetSleepTimer(param_1[0x55],0x362600);
  PhysBody_SetGravityScale(0x40800000,param_1[0x55]);
  uStack_10 = 0;
  uStack_8 = 0;
  uStack_c = 0xc11ccccd;
  PhysBody_SetMass(param_1[0x55],&uStack_10);
  lVar2 = maybe_operator_new_arr(0x1d0);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = PhysBox_Init(lVar2,param_1[0x48] + 0x710,param_1[0x48] + 0x720);
  }
  param_1[0x57] = iVar1;
  PhysPair_SetShapeA(*(undefined4 *)(param_1[0x48] + 0x730),param_1[0x57]);
  PhysPair_SetShapeB(*(undefined4 *)(param_1[0x48] + 0x734),param_1[0x57]);
  PhysPair_SetBodyA(*(undefined4 *)(param_1[0x48] + 0x730),param_1[0x57]);
  PhysPair_SetBodyB(*(undefined4 *)(param_1[0x48] + 0x734),param_1[0x57]);
  iVar1 = Phys_AddBody(param_1[0x55],param_1[0x57],param_4);
  param_1[0x56] = iVar1;
  uStack_20 = 0x3f800000;
  uStack_1c = 0x3e800000;
  uStack_18 = 0x3f800000;
  PhysBody_SetVelocity(param_1[0x56],&uStack_20);
  PhysBody_SetMaterial(0x3e4ccccd,param_1[0x56]);
  PhysBody_ClearFlags(param_1[0x56],0x1000000);
  *(undefined1 *)(param_1 + 0x2dd) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  memset(param_1 + 0x6c,0,0x500);
  memset(param_1 + 0x1ac,0,0x80);
  memset(param_1 + 0x1cc,0,0x80);
  memset(param_1 + 0x1fb,0,0x80);
  param_1[0x9e] = 0x3f800000;
  param_1[0xab] = 0;
  param_1[0xee] = 0x3f800000;
  param_1[0xfb] = 0;
  param_1[0x13e] = 0x3f800000;
  param_1[0x14b] = 0;
  param_1[0x18e] = 0x3f800000;
  param_1[0x19b] = 0;
  param_1[0x1c4] = *(int *)(param_1[0x48] + 0x20c);
  param_1[0x1e4] = *(int *)(param_1[0x48] + 0x31c);
  iVar1 = param_1[0x48];
  fVar6 = *(float *)(iVar1 + 0x210);
  fVar5 = *(float *)(iVar1 + 800);
  param_1[0x2b4] = (int)((float)param_1[0x11] * 9.8 * *(float *)(iVar1 + 0x75c));
  param_1[0x2b5] = (int)((float)param_1[0x11] * 9.8 * *(float *)(param_1[0x48] + 0x760));
  fVar5 = 1.0 - (float)param_1[0x11] * 0.25 * (fVar6 + fVar5) * 0.5;
  param_1[0x2b6] =
       (int)(*(float *)(param_2 + 0x75c) /
            (fVar5 * ((float)param_1[0x1c4] + (float)param_1[0x1e4]) * 0.5));
  param_1[0x2b7] =
       (int)(*(float *)(param_2 + 0x760) /
            (fVar5 * ((float)param_1[0x1c4] + (float)param_1[0x1e4]) * 0.5));
  fVar5 = (float)param_1[0x2b6];
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  param_1[0x2b6] = (int)fVar5;
  fVar5 = (float)param_1[0x2b7];
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  param_1[0x2b7] = (int)fVar5;
  *(undefined1 *)((int)param_1 + 0x811) = param_3;
  Car_UpdateAutoShift(param_1);
  Car_SyncFromRigidBody(param_1);
  Car_UpdateWheelTransforms(param_1);
  param_1[0x222] = *(int *)(param_2 + 0xdc);
  param_1[0x1c5] = *(int *)(param_2 + 0xe4);
  param_1[0x1e5] = (int)(1.0 - *(float *)(param_2 + 0xe4));
  param_1[0x2ae] = (int)((1.0 - *(float *)(param_2 + 0x758)) * 0.5 + 1.0);
  param_1[0x2af] = (int)(1.0 - (1.0 - *(float *)(param_2 + 0x758)) * 0.25);
  (**(code **)(*param_1 + 0x48))(param_1);
  if (*(int *)(param_1[0x48] + 0x524) == 1) {
    param_1[0x20e] = *(int *)(param_1[0x48] + 0x650);
    iVar1 = param_1[0x48];
    fVar5 = (float)fabsf((float)param_1[0x20e] * *(float *)(iVar1 + 0x670));
    param_1[0x212] = (int)fVar5;
    fVar5 = fVar5 * (float)param_1[0x211] * fVar5;
    param_1[0x216] = (int)fVar5;
    param_1[0x217] = (int)(fVar5 + (float)param_1[0x218]);
    param_1[0x214] =
         (int)(((float)param_1[0x21a] * 2.0 + (float)param_1[0x217] + 0.0) / (float)param_1[0x219]);
    param_1[0x213] = (int)(*(float *)(iVar1 + 0x610) * *(float *)(iVar1 + 0x638));
  }
  return;
}

// 0x00167a60  size 0x18
undefined4 Car_GetWheelLoad(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x140 + param_1 + 0x2ac);
}

// 0x00167a80  size 0x2c8
void Car_UpdateWheelContacts(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float afStack_10 [4];
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    *(undefined4 *)(param_1 + 0x3ec) = 0;
    *(undefined4 *)(param_1 + 0x52c) = 0;
    *(undefined4 *)(param_1 + 0x66c) = 0;
  }
  else {
    memset(afStack_10,0,0x10);
    pfVar2 = afStack_10;
    uVar5 = 0;
    iVar3 = param_1;
    iVar4 = param_1;
    do {
      if (*(float *)(iVar4 + 0x2ac) < 1.0) {
        fVar7 = *(float *)(iVar4 + 0x278);
        iVar1 = *(int *)(iVar3 + 0x7c0);
        if (fVar7 < 1.0) {
          if (fVar7 < 0.1) {
            fVar7 = 0.1;
          }
          fVar8 = 1.0;
          if (*(char *)(param_1 + 0x9a8) != '\0') {
            if (uVar5 < 2) {
              iVar6 = *(int *)(param_1 + (uint)*(byte *)(iVar4 + 0x1c8) * 4 + 0x9ac);
            }
            else {
              iVar6 = *(int *)(param_1 + (uint)*(byte *)(iVar4 + 0x1c8) * 4 + 0xa2c);
            }
            if (iVar6 != 0) {
              fVar8 = *(float *)(iVar6 + 0x10);
            }
          }
          *(float *)(iVar4 + 600) = fVar8;
          fVar7 = fVar8 * *(float *)(param_1 + 0x870) * *(float *)(iVar1 + 0xb4) * (1.0 / fVar7) *
                  0.3;
          if (0.0 <= fVar7) {
            if (0.05 < fVar7) {
              fVar7 = 0.05;
            }
          }
          else {
            fVar7 = 0.0;
          }
          if (*(int *)(param_1 + 0x8e0) == 2) {
            fVar7 = fVar7 * 0.3125;
          }
          else if (*(int *)(param_1 + 0x8e0) == 1) {
            fVar7 = fVar7 * 0.15625;
          }
          *pfVar2 = fVar7;
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x140;
      iVar3 = iVar3 + 4;
      pfVar2 = pfVar2 + 1;
    } while (uVar5 < 4);
    uVar5 = 0;
    iVar3 = param_1;
    do {
      fVar7 = *(float *)(iVar3 + 0x2ac) +
              (afStack_10[0] + 0.0 + afStack_10[1] + afStack_10[2] + afStack_10[3]) / 4.0;
      *(float *)(iVar3 + 0x2ac) = fVar7;
      if (1.0 < fVar7) {
        *(undefined4 *)(iVar3 + 0x2ac) = 0x3f800000;
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x140;
    } while (uVar5 < 4);
  }
  uVar5 = 0;
  iVar3 = param_1;
  iVar4 = param_1;
  do {
    iVar1 = *(int *)(iVar4 + 0x7c0);
    iVar6 = *(int *)(iVar4 + 0x7b0);
    fVar7 = *(float *)(iVar3 + 0x2ac) + *(float *)(iVar3 + 0x3ec);
    if (*(char *)(param_1 + 0x961) != '\0') {
      fVar7 = 0.0;
    }
    *(float *)(iVar6 + 0x60) =
         *(float *)(iVar1 + 0x8c) *
         (*(float *)(iVar1 + 0xbc) * (1.0 - *(float *)(param_1 + 0x964)) +
         *(float *)(iVar1 + 0xc0) * *(float *)(param_1 + 0x964));
    if ((*(char *)(param_1 + 0x88f) != '\0') && (1.0 < *(float *)(param_1 + 0x130))) {
      *(float *)(iVar6 + 0x60) = *(float *)(iVar6 + 0x60) * 1.25;
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 8;
    iVar3 = iVar3 + 0x280;
    *(float *)(iVar6 + 0x60) = *(float *)(iVar6 + 0x60) * (1.0 - *(float *)(iVar1 + 0xb8) * fVar7);
  } while (uVar5 < 2);
  return;
}

// 0x00167d50  size 0x31c
void Car_UpdateEngine(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x120);
  fVar6 = *(float *)(iVar2 + 0x848);
  fVar7 = *(float *)(iVar2 + 0x7ec);
  *(undefined4 *)(iVar2 + 0x7e8) = *(undefined4 *)(iVar2 + 0x7e4);
  fVar4 = (float)fabsf(*(float *)(iVar2 + 0x180) / *(float *)(iVar2 + 0x44));
  fVar5 = (float)fabsf(*(undefined4 *)(iVar2 + 400));
  fVar4 = fVar4 / (fVar5 + fVar4);
  if (0.05 <= fVar4) {
    fVar5 = *(float *)(iVar2 + 0xb6c);
    if (fVar4 <= *(float *)(iVar2 + 0xb6c)) {
      fVar5 = fVar4;
    }
  }
  else {
    fVar5 = 0.05;
  }
  *(float *)(iVar2 + 0xb70) = fVar5;
  if (*(int *)(iVar2 + 0x888) == 1) {
    Car_UpdateDiffRear(param_1,0);
    Car_UpdateDiffFront(param_1,2);
  }
  else {
    if (*(int *)(iVar2 + 0x888) == 0) {
      Car_UpdateDiffFront(param_1,0);
      Car_UpdateDiffRear(param_1,2);
      iVar3 = *(int *)(iVar2 + 0x814);
      goto LAB_00167e54;
    }
    Car_UpdateDiffFront(param_1,0);
    Car_UpdateDiffFront(param_1,2);
  }
  iVar3 = *(int *)(iVar2 + 0x814);
LAB_00167e54:
  fVar4 = *(float *)(iVar2 + 0x7e0);
  if (iVar3 == -1) {
    fVar4 = fVar4 * -1.0;
  }
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  if ((iVar3 == 0) || (fVar5 = *(float *)(iVar2 + 0x820), fVar5 == 0.0)) {
    fVar7 = fVar7 + (*(float *)(iVar2 + 0x804) * *(float *)(iVar2 + 0x870)) /
                    (*(float *)(iVar1 + 0x63c) + *(float *)(iVar1 + 0x648));
    *(float *)(iVar2 + 0x7f0) = fVar7;
  }
  else if (fVar5 < 1.0) {
    fVar7 = fVar5 * (fVar6 * fVar4 - *(float *)(iVar2 + 0x7f0)) + *(float *)(iVar2 + 0x7f0) + 0.0;
  }
  else {
    fVar7 = fVar6 * fVar4;
    *(float *)(iVar2 + 0x7f0) = fVar7;
  }
  fVar5 = *(float *)(iVar2 + 0x7f0);
  fVar4 = *(float *)(iVar1 + 0x528) * 0.10471976;
  fVar6 = *(float *)(iVar1 + 0x68c) * *(float *)(iVar1 + 0x528) * 0.10471976;
  if (fVar5 < fVar6) {
    *(float *)(iVar2 + 0x7f0) = fVar6;
  }
  else {
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    *(float *)(iVar2 + 0x7f0) = fVar4;
  }
  *(undefined4 *)(iVar2 + 0x800) = *(undefined4 *)(iVar2 + 0x7fc);
  fVar5 = *(float *)(iVar1 + 0x528);
  fVar4 = *(float *)(iVar1 + 0x68c) * fVar5 * 0.10471976;
  if ((fVar4 <= fVar7) && (fVar4 = fVar5 * 0.10471976, fVar7 <= fVar5 * 0.10471976)) {
    fVar4 = fVar7;
  }
  *(float *)(iVar2 + 0x7fc) = (fVar4 * 9.549296) / fVar5;
  fVar4 = *(float *)(iVar2 + 0x7fc);
  if (*(float *)(iVar1 + 0x68c) <= fVar4) {
    fVar5 = *(float *)(iVar1 + 0x534);
    if (fVar4 <= *(float *)(iVar1 + 0x534)) {
      fVar5 = fVar4;
    }
  }
  else {
    fVar5 = *(float *)(iVar1 + 0x68c);
  }
  *(float *)(iVar2 + 0x7fc) = fVar5;
  fVar5 = fVar5 * *(float *)(iVar1 + 0x528);
  *(float *)(iVar2 + 0x7f4) = fVar5;
  *(float *)(iVar2 + 0x7ec) = fVar5 * 0.10471976;
  *(float *)(iVar2 + 0x7f8) =
       (*(float *)(iVar2 + 0x7f4) * 4.0 + *(float *)(iVar2 + 0x7f8) + 0.0) * 0.2;
  return;
}

