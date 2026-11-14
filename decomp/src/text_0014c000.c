// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0014c000 - 0x00150000
#include "ghidra_types.h"

// 0x0014c060  size 0x34
void Arc_Shutdown(void)

{
  if (iRam0036f0c4 != 0) {
    Mem_Free();
    iRam0036f0c4 = 0;
  }
  File_Shutdown();
  return;
}

// 0x0014c0a0  size 0x1e8
/* BUILD.TOC / BUILD.DAT, OPMOV/GLOGO movies */

void Arc_Init(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined4 uStack_14;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  File_Init(param_1,param_2,0x7fe6d);
  lVar3 = File_GetDiscType(0);
  iRam0036f0bc = (int)lVar3;
  if (lVar3 == 0) {
    iRam0036f0bc = 0;
  }
  iRam0036f0c4 = Mem_AllocAligned(DAT_0030a8c0 * 0x14 + 0x80fU & 0xfffff800,0x40,uRam0036f0b8);
  if (iRam0036f0bc != 0) {
    lVar3 = File_ReadCdFile(0x3622e0,auStack_4,&iStack_8,0,0);
    if (lVar3 == 0) {
      iRam0036f0bc = 0;
    }
    else {
      lVar3 = File_ReadCdFile(0x3622f0,&uStack_c,auStack_10,0,0);
      if (lVar3 == 0) {
        iRam0036f0bc = 0;
      }
    }
    if ((iRam0036f0bc != 0) && (iStack_8 != DAT_0030a8c0 * 0x14 + 0x10)) {
      iRam0036f0bc = 0;
    }
    if (iRam0036f0bc != 0) {
      File_OpenCdFile(0x3622e0,iRam0036f0c4);
    }
    if (iRam0036f0bc != 0) {
      uRam0036f0c0 = uStack_c;
    }
  }
  if ((iRam0036f0bc != 0) && (lVar3 = FUN_00132590(iRam0036f0c4,0x30a8c0,0x10), lVar3 != 0)) {
    iRam0036f0bc = 0;
  }
  if ((iRam0036f0bc != 0) &&
     (uStack_14 = 0, PTR_s__MOV_MV1_OPMOV_PSS_1_0030a8d4 != (undefined *)0x0)) {
    piVar4 = &DAT_0030a8d0;
    do {
      iVar2 = *piVar4;
      lVar3 = File_ReadCdFile(piVar4[1],&uStack_14,0,0,0);
      if (lVar3 != 0) {
        *(undefined4 *)(iRam0036f0c4 + iVar2 * 0x14 + 0x10) = uStack_14;
      }
      piVar1 = piVar4 + 3;
      piVar4 = piVar4 + 2;
    } while (*piVar1 != 0);
  }
  return;
}

// 0x0014c290  size 0x24
void Arc_CloseHost(void)

{
  File_CloseHostHandles();
  FUN_00137310();
  return;
}

// 0x0014c2c0  size 0x30
void Arc_SetHeap(undefined4 param_1)

{
  File_SetHeap();
  File_ResetHostHandles();
  uRam0036f0b8 = param_1;
  return;
}

// 0x0014c2f0  size 0x74
int Anim_GetFrameData(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x2c);
  iVar4 = *(int *)(iVar1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x1e0) * 0x10 + param_1;
  *(ushort *)(iVar5 + 0x1f0) =
       *(ushort *)(iVar5 + 0x1f0) & 0xc000 |
       (ushort)((*(ulong *)(param_1 + 0x60) & 0x7ffffffffffff) >> 0x25);
  *(uint *)(*(int *)(param_1 + 0x1e4) * 0x10 + param_1 + 500) =
       iVar3 * iVar2 + iVar1 + iVar4 & 0xfffffff;
  return param_1 + 0x1e0;
}

// 0x0014c370  size 0x64
int Anim_GetKeyData(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(iVar1 + 0x28);
  iVar3 = *(int *)(iVar1 + 0x20);
  iVar4 = *(int *)(param_1 + 0xe0) * 0x10 + param_1;
  *(ushort *)(iVar4 + 0xf0) =
       *(ushort *)(iVar4 + 0xf0) & 0xc000 | *(ushort *)(*(int *)(param_1 + 8) + 0x18) & 0x3fff;
  *(uint *)(*(int *)(param_1 + 0xe4) * 0x10 + param_1 + 0xf4) =
       iVar2 * param_2 + iVar1 + iVar3 & 0xfffffff;
  return param_1 + 0xe0;
}

// 0x0014c3e0  size 0x280
void Tex_SetupFromHeader(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  Tex_OffsetTbp(param_1 + 0x48);
  Tex_SetFilter(param_1 + 0x48,param_4,0,0,param_5,param_6);
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_18 = (undefined4)(((ulong)*(ushort *)(param_1 + 0x62) & 0x3ff) >> 4);
  uStack_c = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10);
  uStack_8 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14);
  uStack_20 = *(ushort *)(*(int *)(param_1 + 8) + 0x18) & 0x3fff;
  uStack_1c = Tex_GetBufferWidth(uStack_18,uStack_c);
  uVar1 = Tex_SwizzleBlocks(&uStack_20,
                            *(int *)(param_1 + 0x40) + *(int *)(*(int *)(param_1 + 0x40) + 0x20),
                            0x12,param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  uVar3 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar2 = param_1;
    do {
      if (*(long *)(iVar2 + 0xf8) == 0x50) {
        *(uint *)(param_1 + 0xe0) = uVar3;
      }
      if ((*(uint *)(iVar2 + 0xf0) & 0xf0000000) == 0x30000000) {
        *(uint *)(param_1 + 0xe4) = uVar3;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0xe8));
  }
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x2c) == 0) {
    return;
  }
  uStack_1c = 1;
  uStack_20 = ((uint)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) & 0x7ffff) >> 5;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_18 = (undefined4)(((ulong)*(byte *)(param_1 + 0x66) & 0x7f) >> 3);
  if (**(int **)(param_1 + 0x40) == 5) {
    uStack_c = 0x10;
    uStack_8 = 0x10;
  }
  else {
    if (**(int **)(param_1 + 0x40) != 4) {
      iVar2 = *(int *)(param_1 + 0x40);
      goto LAB_0014c5a4;
    }
    uStack_c = 8;
    uStack_8 = 2;
  }
  iVar2 = *(int *)(param_1 + 0x40);
LAB_0014c5a4:
  uVar1 = Tex_SwizzleBlocks(&uStack_20,iVar2 + *(int *)(iVar2 + 0x24),0x12,param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1e8) = uVar1;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    iVar2 = param_1;
    do {
      if (*(long *)(iVar2 + 0x1f8) == 0x50) {
        *(uint *)(param_1 + 0x1e0) = uVar3;
      }
      if ((*(uint *)(iVar2 + 0x1f0) & 0xf0000000) == 0x30000000) {
        *(uint *)(param_1 + 0x1e4) = uVar3;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0x1e8));
  }
  return;
}

// 0x0014c660  size 0x210
void Tex_InitDescriptor(undefined8 param_1,ushort param_2,undefined2 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  *puVar3 = 0;
  puVar3[1] = 1;
  puVar3[2] = puVar3 + 0x12;
  puVar3[3] = 0;
  *(undefined8 *)(puVar3 + 4) = 0x3000d;
  *(undefined8 *)(puVar3 + 6) = 0x44;
  puVar3[8] = 0x80;
  puVar3[9] = 0x80;
  puVar3[10] = 0x80;
  puVar3[0xb] = 0x80;
  *(ushort *)(puVar3 + 0xc) = param_2 & 0xff;
  *(undefined2 *)((int)puVar3 + 0x32) = param_3;
  puVar3[0xd] = 0x116;
  puVar3[0x10] = param_4;
  puVar3[0x12] = 1;
  *(undefined2 *)(puVar3 + 0x13) = 0;
  *(undefined2 *)((int)puVar3 + 0x4e) = 0;
  *(short *)(puVar3 + 0x14) = (short)*(undefined4 *)(puVar3[0x10] + 0x10);
  *(short *)((int)puVar3 + 0x52) = (short)*(undefined4 *)(puVar3[0x10] + 0x14);
  puVar3[0x15] = (uint)(*(int *)(puVar3[0x10] + 0x2c) != 0);
  puVar3[0x16] = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x1a) = 0;
  *(undefined8 *)(puVar3 + 0x1c) = 0;
  *(undefined8 *)(puVar3 + 0x1e) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x22) = 0;
  *(undefined8 *)(puVar3 + 0x24) = 0;
  *(undefined8 *)(puVar3 + 0x26) = 0;
  *(ulong *)(puVar3 + 0x28) =
       (ulong)*(ushort *)((int)puVar3 + 0x4e) << 0x18 |
       (ulong)*(ushort *)(puVar3 + 0x13) << 4 | 10 |
       (long)(int)((uint)*(ushort *)(puVar3 + 0x13) + (uint)*(ushort *)(puVar3 + 0x14) + -1) << 0xe
       | (long)(int)((uint)*(ushort *)((int)puVar3 + 0x4e) + (uint)*(ushort *)((int)puVar3 + 0x52) +
                    -1) << 0x22;
  puVar3[0x2a] = 1;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  uVar2 = Tex_GetPsmInfo(*(undefined1 *)puVar3[0x10]);
  *(ushort *)((int)puVar3 + 0x62) = *(ushort *)((int)puVar3 + 0x62) & 0xfc0f | (uVar2 & 0x3f) << 4;
  bVar1 = Tex_GetPsmInfo(*(undefined1 *)(puVar3[0x10] + 4));
  *(byte *)((int)puVar3 + 0x66) = *(byte *)((int)puVar3 + 0x66) & 0x87 | (bVar1 & 0xf) << 3;
  *(ulong *)(puVar3 + 0x32) =
       (ulong)(*(int *)(puVar3[0x10] + 8) - 1) << 0xe | 10 |
       (ulong)(*(int *)(puVar3[0x10] + 0xc) - 1) << 0x22;
  *(undefined8 *)(puVar3 + 0x34) = 0;
  *(ulong *)(puVar3 + 0x36) =
       (ulong)(uint)(*(int *)(puVar3[0x10] + 8) << 4) |
       (ulong)(uint)(*(int *)(puVar3[0x10] + 0xc) << 4) << 0x10;
  Tex_SetupFromHeader(param_1,0,0,0x50010,0,0x80);
  return;
}

// 0x0014c870  size 0xe8
void Anim_GetFrameIndices(int param_1,int param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x40);
  iVar1 = (int)(uint)*(ushort *)(iVar2 + 8) / iVar3;
  iVar4 = *(int *)(param_1 + 0x44);
  uVar5 = (uint)*(ushort *)(iVar2 + 4) + iVar3 * (param_2 % iVar1);
  uVar6 = (uint)*(ushort *)(iVar2 + 6) + iVar4 * (param_2 / iVar1);
  *param_3 = (ulong)((iVar4 + uVar6) - 1) << 0x22 |
             (ulong)uVar6 << 0x18 | (ulong)uVar5 << 4 | 10 | (ulong)((iVar3 + uVar5) - 1) << 0xe;
  *param_4 = (ulong)(uVar5 * 0x10) | (ulong)(uVar6 * 0x10) << 0x10;
  *param_5 = (ulong)(uVar5 * 0x10 + iVar3 * 0x10) | (ulong)(uVar6 * 0x10 + iVar4 * 0x10) << 0x10;
  return;
}

// 0x0014c960  size 0x60
void Tex_InitDescriptorSimple
               (undefined4 *param_1,ushort param_2,undefined2 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = param_6;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0x3000d;
  *(undefined8 *)(param_1 + 6) = 0x44;
  param_1[8] = 0x80;
  param_1[9] = 0x80;
  param_1[10] = 0x80;
  param_1[0xb] = 0x80;
  *(ushort *)(param_1 + 0xc) = param_2 & 0xff;
  *(undefined2 *)((int)param_1 + 0x32) = param_3;
  param_1[0xd] = 0x116;
  param_1[0x10] = param_4;
  param_1[0x11] = param_5;
  param_1[0x12] = 0;
  return;
}

// 0x0014c9c0  size 0x8
void Xvi_Shutdown(void)

{
  return;
}

// 0x0014c9d0  size 0x18
/* XVI_IOP.IRX */

void Xvi_LoadIop(void)

{
  Iop_LoadModule(0x362300,0,0,0);
  return;
}

// 0x0014c9f0  size 0x11c
undefined4
maybe_Light_ComputeDirectional
          (undefined4 param_1,undefined4 param_2,undefined1 (*param_3) [16],
          undefined1 (*param_4) [16])

{
  ulong uVar1;
  undefined4 in_vc1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar5 = _lqc2(param_4[0xc]);
  auVar2 = _lqc2(*param_4);
  auVar3 = _lqc2(param_4[1]);
  auVar4 = _lqc2(param_4[2]);
  _vmulabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar5 = _vmaddbc(auVar4,auVar5);
  auVar2 = _lqc2(param_4[4]);
  auVar3 = _lqc2(param_4[5]);
  auVar4 = _lqc2(param_4[6]);
  _vmulabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar6 = _vmaddbc(auVar4,auVar5);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(in_vc1);
  if ((uVar1 & 0xe0) == 0xe0) {
    auVar2 = _vmul(in_vf0,in_vf0);
    auVar2 = _vftoi0(auVar2);
    auVar2 = _sqc2(auVar2);
    *param_3 = auVar2;
    return 0;
  }
  auVar11 = _qmtc2(param_2);
  auVar7 = _vadd(auVar6,auVar6);
  auVar8 = _vmulbc(auVar7,auVar5);
  auVar9 = _vmulbc(auVar7,auVar5);
  auVar10 = _vmulbc(auVar7,auVar5);
  auVar5 = _vmulbc(auVar6,auVar11);
  auVar6 = _vsub(auVar2,auVar8);
  auVar7 = _vsub(auVar3,auVar9);
  auVar4 = _vsub(auVar4,auVar10);
  auVar3 = _vminibc(auVar5,in_vf0);
  auVar2 = _lqc2(param_4[0xd]);
  auVar3 = _vmaxbc(auVar3,in_vf0);
  _vmulabc(auVar6,auVar2);
  _vmaddabc(auVar7,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  auVar2 = _vmul(auVar2,auVar3);
  auVar2 = _vmaxbc(auVar2,in_vf0);
  auVar2 = _vminibc(auVar2,in_vf0);
  auVar2 = _vmul(auVar2,auVar2);
  auVar2 = _vmul(auVar2,auVar2);
  auVar2 = _vmul(auVar2,auVar2);
  auVar2 = _vmul(auVar2,auVar2);
  auVar5 = _vmul(auVar2,auVar2);
  auVar2 = _lqc2(param_4[8]);
  auVar3 = _lqc2(param_4[9]);
  auVar4 = _lqc2(param_4[10]);
  _vmulabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar2 = _qmtc2(param_1);
  _vmaddabc(auVar4,auVar5);
  auVar3 = _vmaddbc(in_vf0,auVar5);
  auVar3 = _vmulbc(auVar3,auVar2);
  auVar2 = _vminibc(auVar3,auVar2);
  auVar2 = _vftoi0(auVar2);
  auVar2 = _sqc2(auVar2);
  *param_3 = auVar2;
  return 1;
}

// 0x0014cb10  size 0x64
bool maybe_Light_IsNonZero(undefined1 (*param_1) [16])

{
  bool bVar1;
  ulong uVar2;
  undefined4 in_vc1;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  auVar3 = _lqc2(*param_1);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vmul(auVar3,auVar3);
  auVar3 = _vmulbc(in_vf0,in_vf0);
  auVar4 = _vaddbc(auVar4,auVar4);
  auVar4 = _vsubbc(auVar5,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar2 = _cfc2(in_vc1);
  bVar1 = (uVar2 & 0x80) != 0x80;
  if (bVar1) {
    _vsqrt(auVar4);
    uVar6 = _vwaitq();
    auVar3 = _vsubq(auVar3,in_vf0,uVar6);
  }
  auVar3 = _sqc2(auVar3);
  *param_1 = auVar3;
  return bVar1;
}

// 0x0014cb80  size 0x2e8
void maybe_Light_ApplyToVertices
               (undefined8 param_1,int param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  if ((long)param_3 < 0) {
    fVar8 = (float)(param_3 & 0xffffffff);
  }
  else {
    fVar8 = (float)(int)param_3;
  }
  if ((long)param_4 < 0) {
    fVar9 = (float)(param_4 & 0xffffffff);
  }
  else {
    fVar9 = (float)(int)param_4;
  }
  uVar10 = 0xbf800000;
  puVar1 = (undefined4 *)Light_GetIntensity(auStack_20,1);
  *puVar1 = uVar10;
  vu0math_sub_00132b10(0x3f800000,auStack_10,(int)param_5 + 0x40);
  iVar2 = Light_GetAmbient(param_5);
  vu0math_sub_00132c20(auStack_e0,iVar2 + 0x80);
  uVar10 = 0;
  uVar4 = Light_GetDirection(auStack_e0,3);
  puVar1 = (undefined4 *)Light_GetIntensity(uVar4,2);
  *puVar1 = uVar10;
  uVar4 = Light_GetDirection(auStack_e0,3);
  puVar1 = (undefined4 *)Light_GetIntensity(uVar4,1);
  *puVar1 = uVar10;
  uVar4 = Light_GetDirection(auStack_e0,3);
  puVar1 = (undefined4 *)Light_GetIntensity(uVar4,0);
  *puVar1 = uVar10;
  vu0math_sub_00132cd0(auStack_e0,auStack_e0);
  uVar4 = Light_GetDirMatrix(param_1);
  vu0math_sub_00132c20(auStack_a0,uVar4);
  uVar4 = Light_GetColorMatrix(param_1);
  vu0math_sub_00132c20(auStack_60,uVar4);
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      uVar10 = 0xbf800000;
      puVar1 = (undefined4 *)Light_GetIntensity(auStack_20,0);
      *puVar1 = uVar10;
      pfVar3 = (float *)Light_GetIntensity(auStack_20,1);
      uVar7 = 0;
      *pfVar3 = *pfVar3 + 1.0 / ((fVar9 - 1.0) / 2.0 + 1.0);
      if (param_3 != 0) {
        do {
          pfVar3 = (float *)Light_GetIntensity(auStack_20,0);
          *pfVar3 = *pfVar3 + 1.0 / ((fVar8 - 1.0) / 2.0 + 1.0);
          lVar5 = maybe_Light_IsNonZero(auStack_20);
          if (lVar5 == 1) {
            maybe_Light_ComputeDirectional(0x437f0000,0x461c4000,auStack_f0,auStack_e0);
            Color_ToRgb5551(param_2,auStack_f0);
          }
          else {
            Color_SetRgb5551(param_2,0);
          }
          param_2 = param_2 + 2;
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (uVar7 < param_3);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < param_4);
  }
  return;
}

// 0x0014ce70  size 0x38
void Color_ToRgb5551(ushort *param_1,uint *param_2)

{
  *param_1 = (ushort)((param_2[2] & 0xf8) << 7) |
             (ushort)((int)(*param_2 & 0xf8) >> 3) | (ushort)((param_2[1] & 0xf8) << 2) | 0x8000;
  return;
}

// 0x0014ceb0  size 0xc
void Color_SetRgb5551(ushort *param_1,ushort param_2)

{
  *param_1 = param_2 | 0x8000;
  return;
}

// 0x0014cec0  size 0x8
int Light_GetColorMatrix(int param_1)

{
  return param_1 + 0xb0;
}

// 0x0014ced0  size 0x8
int Light_GetDirMatrix(int param_1)

{
  return param_1 + 0x130;
}

// 0x0014cee0  size 0xc
int Light_GetDirection(int param_1,int param_2)

{
  return param_1 + param_2 * 0x10;
}

// 0x0014cef0  size 0x8
int Light_GetAmbient(int param_1)

{
  return param_1 + 0x100;
}

// 0x0014cf00  size 0xc
int Light_GetIntensity(int param_1,int param_2)

{
  return param_1 + param_2 * 4;
}

// 0x0014cf10  size 0x2e8
void maybe_Light_ApplyToVerticesAlt
               (undefined8 param_1,int param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  if ((long)param_3 < 0) {
    fVar8 = (float)(param_3 & 0xffffffff);
  }
  else {
    fVar8 = (float)(int)param_3;
  }
  if ((long)param_4 < 0) {
    fVar9 = (float)(param_4 & 0xffffffff);
  }
  else {
    fVar9 = (float)(int)param_4;
  }
  uVar10 = 0xbf800000;
  puVar1 = (undefined4 *)Light_GetIntensity(auStack_20,1);
  *puVar1 = uVar10;
  vu0math_sub_00132b10(0x3f800000,auStack_10,(int)param_5 + 0x40);
  iVar2 = Light_GetAmbient(param_5);
  vu0math_sub_00132c20(auStack_e0,iVar2 + 0x80);
  uVar10 = 0;
  uVar4 = Light_GetDirection(auStack_e0,3);
  puVar1 = (undefined4 *)Light_GetIntensity(uVar4,2);
  *puVar1 = uVar10;
  uVar4 = Light_GetDirection(auStack_e0,3);
  puVar1 = (undefined4 *)Light_GetIntensity(uVar4,1);
  *puVar1 = uVar10;
  uVar4 = Light_GetDirection(auStack_e0,3);
  puVar1 = (undefined4 *)Light_GetIntensity(uVar4,0);
  *puVar1 = uVar10;
  vu0math_sub_00132cd0(auStack_e0,auStack_e0);
  uVar4 = Light_GetDirMatrix(param_1);
  vu0math_sub_00132c20(auStack_a0,uVar4);
  uVar4 = Light_GetColorMatrix(param_1);
  vu0math_sub_00132c20(auStack_60,uVar4);
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      uVar10 = 0xbf800000;
      puVar1 = (undefined4 *)Light_GetIntensity(auStack_20,0);
      *puVar1 = uVar10;
      pfVar3 = (float *)Light_GetIntensity(auStack_20,1);
      uVar7 = 0;
      *pfVar3 = *pfVar3 + 1.0 / ((fVar9 - 1.0) / 2.0 + 1.0);
      if (param_3 != 0) {
        do {
          pfVar3 = (float *)Light_GetIntensity(auStack_20,0);
          *pfVar3 = *pfVar3 + 1.0 / ((fVar8 - 1.0) / 2.0 + 1.0);
          lVar5 = maybe_Light_IsNonZero(auStack_20);
          if (lVar5 == 1) {
            maybe_Light_ComputeDirectional(0x437f0000,0x461c4000,auStack_f0,auStack_e0);
            Color_PackRgba(param_2,auStack_f0);
          }
          else {
            Color_SetPacked(param_2,0);
          }
          param_2 = param_2 + 4;
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (uVar7 < param_3);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < param_4);
  }
  return;
}

// 0x0014d200  size 0x2c
void Color_PackRgba(uint *param_1,uint *param_2)

{
  *param_1 = (uint)(byte)param_2[2] << 0x10 | *param_2 | (uint)(byte)param_2[1] << 8 | 0x80000000;
  return;
}

// 0x0014d230  size 0x8
void Color_SetPacked(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0x0014d240  size 0x58
/* 14 callers */

void Light_UpdateMatrices(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  vu0math_sub_001337f0(iVar1 + 0x130,iVar1 + 0x50,iVar1 + 0x60,iVar1 + 0x70);
  vu0math_sub_00133780(iVar1 + 0xb0,iVar1 + 0x80,iVar1 + 0x90,iVar1 + 0xa0,param_1);
  vu0math_sub_00132c20(iVar1 + 0xf0,iVar1 + 0x10);
  return;
}

// 0x0014d2a0  size 0x424
/* 13 callers */

void Model_Relocate(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  
  uVar6 = param_1 + 0x30 + *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  piVar12 = (int *)(param_1 + 0x30);
  uVar3 = uVar6 + (*(int *)(param_1 + 0x20) + -1) * 0x30;
  puVar5 = (uint *)(uVar3 + 0x30);
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      piVar9 = piVar12;
      do {
        *piVar9 = (int)puVar5;
        iVar8 = 0x50;
        if ((*puVar5 & 0x10) != 0) {
          if ((*puVar5 & 0x10) == 0) {
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = puVar5 + 0x14;
          }
          uVar10 = puVar7[3];
          puVar7 = puVar7 + 0xc;
          do {
            uVar10 = uVar10 - 1;
            iVar8 = iVar8 + (puVar7[0x1e] + 1) * 0x10 + 0xa0;
            puVar7 = puVar7 + (puVar7[0x1e] + 1) * 4 + 0x28;
          } while (uVar10 != 0);
          iVar8 = iVar8 + 0x30;
        }
        uVar4 = uVar4 + 1;
        puVar5 = (uint *)((int)puVar5 + iVar8);
        piVar9 = piVar9 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x24));
    }
    if (uVar6 <= uVar3) {
      uVar4 = (uVar3 - uVar6) + 0x30;
      if (8 < (int)uVar4 / 0x30) {
        bVar2 = false;
        bVar1 = false;
        if ((uVar6 <= uVar3) && (uVar3 != 0xffffffff)) {
          bVar1 = true;
        }
        if (bVar1) {
          bVar1 = true;
          if (((uVar3 - uVar6 & 0x80000000) == 0) && ((uVar4 & 0x80000000) != 0)) {
            bVar1 = false;
          }
          if (bVar1) {
            bVar2 = true;
          }
        }
        if (bVar2) {
          do {
            *(int **)(uVar6 + 0x14) = piVar12;
            *(uint **)(uVar6 + 0x24) = puVar5;
            *(int **)(uVar6 + 0x44) = piVar12;
            *(uint **)(uVar6 + 0x54) = puVar5;
            *(int **)(uVar6 + 0x74) = piVar12;
            *(uint **)(uVar6 + 0x84) = puVar5;
            *(int **)(uVar6 + 0xa4) = piVar12;
            *(uint **)(uVar6 + 0xb4) = puVar5;
            *(int **)(uVar6 + 0xd4) = piVar12;
            *(uint **)(uVar6 + 0xe4) = puVar5;
            *(int **)(uVar6 + 0x104) = piVar12;
            *(uint **)(uVar6 + 0x114) = puVar5;
            *(int **)(uVar6 + 0x134) = piVar12;
            *(uint **)(uVar6 + 0x144) = puVar5;
            *(int **)(uVar6 + 0x164) = piVar12;
            *(uint **)(uVar6 + 0x174) = puVar5;
            uVar6 = uVar6 + 0x180;
          } while (uVar6 <= uVar3 - 0x180);
        }
      }
      for (; uVar6 <= uVar3; uVar6 = uVar6 + 0x30) {
        *(int **)(uVar6 + 0x14) = piVar12;
        *(uint **)(uVar6 + 0x24) = puVar5;
      }
    }
    uVar6 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      do {
        puVar5 = (uint *)*piVar12;
        if ((*puVar5 & 0x10) == 0) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = puVar5 + 0x14;
        }
        if ((puVar7 != (uint *)0x0) && ((puVar5[2] & 0x80000000) == 0)) {
          puVar11 = puVar7 + 0xc;
          *puVar5 = *puVar5 | 0x80000000;
          *puVar5 = *puVar5 & 0xffffff9f;
          uVar3 = 0;
          if (puVar7[3] != 0) {
            do {
              if ((*puVar11 & 2) != 0) {
                *puVar11 = *puVar11 & 0xfffffffb;
              }
              uVar4 = *puVar11;
              if ((uVar4 & 0x100) == 0) {
                if ((uVar4 & 0x40) != 0) {
                  *puVar11 = *puVar11 | 1;
                }
              }
              else {
                *puVar11 = uVar4 & 0xfffffffa;
                *puVar11 = *puVar11 | 0x40;
                puVar5[2] = puVar5[2] | 2;
              }
              if ((*puVar11 & 0x80000) == 0) {
                if ((*puVar11 & 0x10) == 0) {
                  *puVar5 = *puVar5 | 0x20;
                }
                else {
                  *puVar5 = *puVar5 | 0x40;
                }
              }
              else {
                *puVar5 = *puVar5 | 0x20;
              }
              if ((*puVar11 & 0x80) != 0) {
                *(ushort *)(puVar11 + 0x16) = (ushort)puVar11[0x16] & 0xf00f | 0x400;
              }
              if ((*puVar11 & 0x10000) != 0) {
                puVar11[0x12] = 0x18;
                puVar11[0x13] = 0;
              }
              uVar4 = *puVar11;
              if ((((uVar4 & 0x1040) == 0) || ((uVar4 & 0x20) == 0)) && ((uVar4 & 0x100) == 0)) {
                puVar11[0x1b] = 0;
              }
              else {
                puVar11[0x1b] = 1;
              }
              uVar3 = uVar3 + 1;
              puVar11 = puVar11 + (puVar11[0x1e] + 1) * 4 + 0x28;
            } while (uVar3 < puVar7[3]);
          }
        }
        uVar6 = uVar6 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x24));
    }
  }
  return;
}

// 0x0014d6e0  size 0x2c
/* 11 callers */

undefined4 Model_GetTexture(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x24)) {
    uVar1 = *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0014d710  size 0x38
int Model_GetNode(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x20)) {
    iVar1 = param_1 + 0x30 + *(int *)(param_1 + 0x2c) + param_2 * 0x30;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

// 0x0014d750  size 0xf0
void Model_BuildNodeMatrices(int param_1,undefined8 param_2,uint *param_3)

{
  uint auStack_40 [5];
  uint uStack_2c;
  uint uStack_18;
  
  do {
    maybe_Vu0_UnitMatrix(auStack_40);
    auStack_40[0] = param_3[0x10];
    uStack_2c = param_3[0x11];
    uStack_18 = param_3[0x12];
    maybe_Vu0_RotMatrixZ(param_3[0xc],auStack_40,auStack_40);
    maybe_Vu0_RotMatrixY(param_3[0xd],auStack_40,auStack_40);
    maybe_Vu0_RotMatrixX(param_3[0xe],auStack_40,auStack_40);
    vu0math_sub_00132d20(auStack_40,auStack_40,param_3 + 8);
    vu0math_sub_00132ba0(param_2,auStack_40,param_2);
    if ((*param_3 & 1) == 0) {
      param_3 = (uint *)0x0;
    }
    else {
      param_3 = *(uint **)(*(int *)(param_1 + 0x14) + (uint)(ushort)param_3[4] * 4);
    }
  } while (param_3 != (uint *)0x0);
  return;
}

// 0x0014d840  size 0x58
int Model_GetHeaderSize(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0x50;
  if ((*param_1 & 0x10) != 0) {
    if ((*param_1 & 0x10) == 0) {
      param_1 = (uint *)0x0;
    }
    else {
      param_1 = param_1 + 0x14;
    }
    uVar2 = param_1[3];
    param_1 = param_1 + 0xc;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = iVar1 + (param_1[0x1e] + 1) * 0x10 + 0xa0;
      param_1 = param_1 + (param_1[0x1e] + 1) * 4 + 0x28;
    } while (uVar2 != 0);
    iVar1 = iVar1 + 0x30;
  }
  return iVar1;
}

// 0x0014d8a0  size 0x40
/* 0x30000008 = VIF NOP */

void Model_SkipNops(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x30);
  while (iVar1 == 0x30000008) {
    piVar2 = piVar2 + 4;
    iVar1 = *piVar2;
  }
  return;
}

// 0x0014d8e0  size 0x1d4
int MovieSnd_SendSpan(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                     int param_5,undefined8 param_6,int param_7,undefined8 param_8,int param_9)

{
  int iVar1;
  
  if (param_3 + param_5 < param_7 + param_9) {
    iVar1 = (param_7 + param_9) - (param_3 + param_5);
    if (iVar1 < param_9) {
      param_9 = param_9 - iVar1;
    }
    else {
      param_7 = param_7 - (iVar1 - param_9);
      param_9 = 0;
    }
  }
  if (param_7 < param_3) {
    iVar1 = param_3 - param_7;
    if (param_9 < iVar1) {
      if (param_7 != 0) {
        Sif_SendDma(param_2,param_6,param_7,0);
      }
      if (param_9 != 0) {
        Sif_SendDma((int)param_2 + param_7,param_8,param_9,0);
      }
    }
    else {
      if (param_7 != 0) {
        Sif_SendDma(param_2,param_6,param_7,0);
      }
      if (iVar1 != 0) {
        Sif_SendDma((int)param_2 + param_7,param_8,iVar1,0);
      }
      if (param_9 - iVar1 != 0) {
        Sif_SendDma(param_4,((int)param_8 + param_3) - param_7,param_9 - iVar1,0);
      }
    }
  }
  else {
    if (param_3 != 0) {
      Sif_SendDma(param_2,param_6,param_3,0);
    }
    if (param_7 - param_3 != 0) {
      Sif_SendDma(param_4,(int)param_6 + param_3,param_7 - param_3,0);
    }
    if (param_9 != 0) {
      Sif_SendDma(((int)param_4 + param_7) - param_3,param_8,param_9,0);
    }
  }
  return param_7 + param_9;
}

// 0x0014dac0  size 0xcc
void MovieSnd_GetSpans(int param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5,
                      int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = (((param_6 + iVar1) - iVar2) + -0x400) % iVar1;
  if ((param_6 - iVar2 < 0) || (0x3ff < param_6 - iVar2)) {
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x3ff;
    }
    iVar3 = (iVar3 >> 10) * 0x400;
    if (iVar1 - iVar2 < iVar3) {
      *param_2 = *(int *)(param_1 + 0x10) + iVar2;
      *param_3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x20);
      *param_4 = *(undefined4 *)(param_1 + 0x10);
      *param_5 = iVar3 - (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x20));
    }
    else {
      *param_2 = *(int *)(param_1 + 0x10) + iVar2;
      *param_3 = iVar3;
      *param_4 = 0;
      *param_5 = 0;
    }
  }
  else {
    *param_2 = *(int *)(param_1 + 0x10);
    *param_3 = 0;
    *param_4 = *(undefined4 *)(param_1 + 0x10);
    *param_5 = 0;
  }
  return;
}

// 0x0014db90  size 0x20c
void MovieSnd_Feed(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  puVar5 = (undefined4 *)param_1;
  iVar8 = puVar5[6];
  uVar7 = 0;
  if (iVar8 == 3) {
    return;
  }
  if (iVar8 == 2) {
    uVar3 = Rpc_SetBlocking(puVar5[1],1);
    uVar2 = IopSnd_Command(0x102,0,0);
    MovieSnd_GetSpans(param_1,&iStack_4,&iStack_c,&uStack_8,&iStack_10,
                      (uVar2 & 0xffffff) - puVar5[4]);
    Rpc_SetBlocking(puVar5[1],uVar3);
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 == 0) {
        return;
      }
      uVar1 = *puVar5;
      goto LAB_0014dc84;
    }
    iStack_4 = puVar5[4] + (int)puVar5[7] % (int)puVar5[3];
    iStack_c = puVar5[3] - puVar5[7];
    if (iStack_c < 1) {
      iStack_c = 0;
    }
    uStack_8 = 0;
    iStack_10 = 0;
  }
  uVar1 = *puVar5;
LAB_0014dc84:
  RingBuf_GetSpans(uVar1,&iStack_14,&iStack_18,&iStack_1c,&iStack_20);
  iVar8 = iStack_14 + (iStack_18 + (iStack_1c - iStack_20)) % iStack_18;
  if (iStack_20 < 0) {
    iStack_20 = iStack_20 + 0x3ff;
  }
  iVar4 = (iStack_20 >> 10) * 0x400;
  iVar6 = (iStack_14 + iStack_18) - iVar8;
  if (iVar4 < iVar6) {
    iVar6 = iVar4;
  }
  if ((0x3ff < iStack_c + iStack_10) && (0x3ff < iVar4)) {
    FlushCache(0);
    uVar7 = MovieSnd_SendSpan(param_1,iStack_4,iStack_c,uStack_8,iStack_10,iVar8,iVar6,iStack_14);
  }
  RingBuf_Consume(*puVar5,uVar7);
  puVar5[7] = puVar5[7] + (int)uVar7;
  puVar5[8] = (puVar5[8] + (int)uVar7) % (int)puVar5[3];
  return;
}

// 0x0014dda0  size 0x128
void MovieSnd_Start(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = Rpc_SetBlocking(*(undefined4 *)(param_1 + 4),1);
  IopSnd_Command(0x101,0,2,0,0,0);
  IopSnd_Command(0x10d,0xf80,0);
  IopSnd_Command(0x10d,0x1080,0);
  Sif_SendDma(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0x800,1);
  iVar4 = *(int *)(param_1 + 0x10);
  for (iVar3 = *(int *)(param_1 + 0xc); iVar3 != 0; iVar3 = iVar3 - iVar2) {
    iVar2 = iVar3;
    if (0x800 < iVar3) {
      iVar2 = 0x800;
    }
    Sif_SendDma(iVar4,*(undefined4 *)(param_1 + 0x14),iVar2,1);
    iVar4 = iVar4 + iVar2;
  }
  IopSnd_Command(0x103,0,0,*(undefined4 *)(param_1 + 0x10),0x4000,0x800);
  IopSnd_Command(0x104,0,1);
  Rpc_SetBlocking(*(undefined4 *)(param_1 + 4),uVar1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 0x0014ded0  size 0xbc
void MovieSnd_Init(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = 0x42d824;
  param_1[2] = *param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[3] = param_3[1] * 0x30;
  iVar2 = param_1[3];
  if (iVar2 < 0x800) {
    iVar2 = 0x800;
  }
  uVar1 = loadfile_sub_00118a30(iVar2);
  param_1[4] = uVar1;
  uVar1 = Mem_AllocAligned(0x800,0x40,param_4);
  param_1[5] = uVar1;
  Mem_Set16(param_1[5],0,0x800);
  FlushCache(0);
  return;
}

// 0x0014df90  size 0x19c
void MovieVid_Present(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_1;
  lVar4 = Movie_GetUserData(*(undefined4 *)(iVar6 + 0x28));
  lVar5 = 1;
  if (lVar4 == 0) {
    lVar5 = 2;
  }
  *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + *(int *)(iVar6 + 0x30);
  iVar7 = 0;
  iVar1 = *(int *)(iVar6 + 0x34);
  while (10000 < iVar1) {
    *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + -10000;
    iVar7 = iVar7 + 1;
    iVar1 = *(int *)(iVar6 + 0x34);
  }
  iVar7 = *(int *)(iVar6 + 0x2c) + iVar7;
  if (iVar7 < 0) {
    *(undefined4 *)(iVar6 + 0x2c) = 0;
  }
  else {
    if (10 < iVar7) {
      iVar7 = 10;
    }
    *(int *)(iVar6 + 0x2c) = iVar7;
  }
  lVar4 = Movie_GetReadyCount(*(undefined4 *)(iVar6 + 0x28));
  if ((lVar5 <= lVar4) && (1 < *(int *)(iVar6 + 0x2c))) {
    Movie_ReleaseFrame(*(undefined4 *)(iVar6 + 0x28));
    *(undefined4 *)(iVar6 + 0x2c) = 0;
    *(undefined4 *)(iVar6 + 0x3c) = 0xffffffff;
  }
  if ((*(int *)(iVar6 + 0x3c) < 0) &&
     (lVar5 = Movie_GetReadyCount(*(undefined4 *)(iVar6 + 0x28)), lVar5 != 0)) {
    iVar1 = Movie_GetBufferSize(*(undefined4 *)(iVar6 + 0x28));
    iVar7 = Movie_GetReadyCount(*(undefined4 *)(iVar6 + 0x28));
    iVar2 = Movie_GetBufferCount(*(undefined4 *)(iVar6 + 0x28));
    iVar3 = Movie_GetBufferCount(*(undefined4 *)(iVar6 + 0x28));
    *(int *)(iVar6 + 0x3c) = (iVar2 + (iVar1 - iVar7)) % iVar3;
  }
  if ((param_2 != 0) && (-1 < *(int *)(iVar6 + 0x3c))) {
    MovieTex_Upload(param_1,*(int *)(iVar6 + 0x3c),param_3,param_4);
  }
  return;
}

// 0x0014e130  size 0x94
void MovieVid_Init(int param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = param_3[4];
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = 3;
  uStack_24 = param_3[4];
  uStack_20 = param_3[5];
  uStack_1c = param_3[6];
  uStack_18 = param_3[7];
  uStack_14 = *(undefined1 *)(param_3 + 8);
  uStack_10 = param_3[9];
  uStack_c = param_3[10];
  uStack_8 = param_3[0xb];
  MovieTex_Init(param_1,param_4,&uStack_30);
  return;
}

// 0x0014e1d0  size 0x3a8
uint MoviePlayer_Thread(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  do {
    do {
      if ((puRam0036f0c8[0x5b] < 5) || ((*puRam0036f0c8 & 0x20) != 0)) {
        puRam0036f0c8[0x55] = 2;
        lVar8 = Movie_FeedData(puRam0036f0c8);
        while (lVar8 == 0) {
          maybe_Movie_iSuspendSelf(puRam0036f0c8);
          lVar8 = Movie_FeedData(puRam0036f0c8);
        }
        if ((*puRam0036f0c8 & 0x80) == 0) {
          lVar8 = Movie_IsEnd();
          while (lVar8 != 0) {
            maybe_Movie_iSuspendSelf(puRam0036f0c8);
            lVar8 = Movie_IsEnd(puRam0036f0c8);
          }
        }
        puRam0036f0c8[0x55] = 3;
        if ((*puRam0036f0c8 & 0x20) == 0) {
          do {
            maybe_Movie_iSuspendSelf();
          } while ((*puRam0036f0c8 & 0x20) == 0);
          uVar7 = *puRam0036f0c8;
        }
        else {
          uVar7 = *puRam0036f0c8;
        }
        if ((uVar7 & 0x10) == 0) {
          uVar7 = puRam0036f0c8[0x5c];
        }
        else {
          uVar7 = 0;
        }
        return uVar7;
      }
      puVar11 = puRam0036f0c8 + 0x1b;
      lVar8 = Stream_GetReadPtr(puVar11,&uStack_c);
      lVar9 = Stream_GetSize(puVar11);
      if ((puRam0036f0c8[0x5a] != 0) && (lVar9 <= lVar8)) {
        uVar10 = CdStream_ReadSector(uStack_c,lVar9);
        Stream_Advance(puVar11,uVar10);
        puRam0036f0c8[0x5a] = puRam0036f0c8[0x5a] - (int)uVar10;
      }
      maybe_Movie_iSuspendSelf(puRam0036f0c8);
      iVar6 = Movie_Demux(puRam0036f0c8);
      puRam0036f0c8[0x5b] = puRam0036f0c8[0x5b] - iVar6;
    } while (puRam0036f0c8[0x5d] != 0);
    bVar2 = false;
    bVar3 = false;
    if ((puRam0036f0c8[0x57] & 1) == 0) {
      bVar2 = true;
    }
    else {
      lVar8 = Movie_IsBufferFull(puRam0036f0c8 + 0x20);
      if (lVar8 != 0) {
        bVar2 = true;
      }
    }
    puVar11 = puRam0036f0c8;
    if ((puRam0036f0c8[0x57] & 2) == 0) {
LAB_0014e304:
      bVar3 = true;
    }
    else {
      lVar8 = RingBuf_GetFree(puRam0036f0c8[0x7a]);
      if (lVar8 == 0) {
        bVar1 = false;
      }
      else {
        if (puVar11[0x81] == 0) {
          puVar11[0x80] = 1;
        }
        bVar1 = (int)puVar11[0x7d] <= (int)puVar11[0x81];
      }
      if (bVar1) goto LAB_0014e304;
    }
    if ((bVar2) && (bVar3)) {
      if ((puRam0036f0c8[0x57] & 1) != 0) {
        Movie_IsFrameReady(puRam0036f0c8,&uStack_4,&uStack_8);
        uVar5 = uStack_4;
        uVar4 = uStack_8;
        puVar11 = puRam0036f0c8;
        puVar12 = puRam0036f0c8 + 0x67;
        iVar6 = 0;
        if (0 < (int)puRam0036f0c8[0x75]) {
          do {
            uVar10 = Movie_GetFrameBuffer(puVar11[0x71],iVar6);
            MovieTex_BuildPacket(puVar12,iVar6,uVar10,0,0,uVar5,uVar4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)puVar11[0x75]);
        }
        puRam0036f0c8[0x66] = 1;
      }
      puVar11 = puRam0036f0c8;
      if ((puRam0036f0c8[0x57] & 2) != 0) {
        uVar10 = Rpc_SetBlocking(puRam0036f0c8[0x7b],1);
        IopSnd_Command(0x10d,0xf80,puVar11[0x7c]);
        IopSnd_Command(0x10d,0x1080,puVar11[0x7c]);
        uVar7 = puVar11[0x7d];
        if ((int)uVar7 < 0) {
          uVar7 = uVar7 + 0x3ff;
        }
        IopSnd_Command(0x101,0,0x13,puVar11[0x7e],((int)uVar7 >> 10) << 10,
                       puVar11[0x7e] + puVar11[0x83]);
        Rpc_SetBlocking(puVar11[0x7b],uVar10);
        puVar11[0x80] = 2;
        puRam0036f0c8[0x79] = 1;
      }
      puRam0036f0c8[0x5d] = 1;
    }
  } while( true );
}

// 0x0014e6e0  size 0x4c4
/* WARNING: Removing unreachable block (ram,0x0014e820) */

void MoviePlayer_Setup(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  *(undefined4 *)(iRam0036f0c8 + 0x148) = 0;
  *(undefined4 *)(iRam0036f0c8 + 0x14c) = 0;
  *(undefined4 *)(iRam0036f0c8 + 400) = param_1[1];
  *(undefined4 *)(iRam0036f0c8 + 0x1dc) = param_1[2];
  iVar1 = *(int *)(iRam0036f0c8 + 0x148);
  while (iVar1 == 0) {
    if (*(int *)(iRam0036f0c8 + 0x14c) != 0) {
      uVar2 = Mem_AllocAligned(*(int *)(iRam0036f0c8 + 0x14c),0x40,param_2);
      *(undefined4 *)(iRam0036f0c8 + 0x148) = uVar2;
      *(undefined4 *)(iRam0036f0c8 + 0x14c) = 0;
    }
    iVar1 = param_1[5] * param_1[6] * 9;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 >> 1;
    iStack_24 = iVar1 + 0x2800;
    if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
      iStack_28 = 0;
    }
    else {
      iStack_28 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
    }
    iVar3 = iVar1 + 0x283f;
    if (iVar3 < 0) {
      iVar3 = iVar1 + 0x287e;
    }
    *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + (iVar3 >> 6) * 0x40;
    uStack_1c = 0x10000;
    if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
      iStack_20 = 0;
    }
    else {
      iStack_20 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
    }
    *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + 0x10000;
    iStack_5c = param_1[3];
    iStack_58 = param_1[4];
    if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
      iStack_60 = 0;
    }
    else {
      iStack_60 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
    }
    iVar1 = iStack_5c * iStack_58 + 0x3f;
    if (iVar1 < 0) {
      iVar1 = iStack_5c * iStack_58 + 0x7e;
    }
    *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + (iVar1 >> 6) * 0x40;
    if (*(int *)(iRam0036f0c8 + 400) != 0) {
      iStack_50 = param_1[7];
      if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
        iStack_54 = 0;
      }
      else {
        iStack_54 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
      }
      iVar1 = iStack_50 * 0x18 + 0x3f;
      if (iVar1 < 0) {
        iVar1 = iStack_50 * 0x18 + 0x7e;
      }
      *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + (iVar1 >> 6) * 0x40;
    }
    if (*(int *)(iRam0036f0c8 + 400) != 0) {
      iStack_44 = param_1[8];
      if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
        iStack_4c = 0;
      }
      else {
        iStack_4c = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
      }
      iVar1 = iStack_44 * 0x800 + 0x3f;
      if (iVar1 < 0) {
        iVar1 = iStack_44 * 0x800 + 0x7e;
      }
      *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + (iVar1 >> 6) * 0x40;
      if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
        iStack_48 = 0;
      }
      else {
        iStack_48 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
      }
      iVar1 = iStack_44 * 0x10 + 0x4f;
      if (iVar1 < 0) {
        iVar1 = iStack_44 * 0x10 + 0x8e;
      }
      *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + (iVar1 >> 6) * 0x40;
    }
    if (*(int *)(iRam0036f0c8 + 400) != 0) {
      iStack_3c = param_1[9];
      if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
        iStack_40 = 0;
      }
      else {
        iStack_40 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
      }
      iVar1 = iStack_3c * param_1[5] * param_1[6] * 4;
      iVar3 = iVar1 + 0x3f;
      if (iVar3 < 0) {
        iVar3 = iVar1 + 0x7e;
      }
      *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + (iVar3 >> 6) * 0x40;
      uStack_38 = param_1[5];
      uStack_34 = param_1[6];
    }
    if (*(int *)(iRam0036f0c8 + 0x1dc) != 0) {
      iStack_2c = param_1[0x12];
      if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
        iStack_30 = 0;
      }
      else {
        iStack_30 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
      }
      iVar1 = iStack_2c * 0x60 + 0x3f;
      if (iVar1 < 0) {
        iVar1 = iStack_2c * 0x60 + 0x7e;
      }
      *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + (iVar1 >> 6) * 0x40;
    }
    if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
    }
    *(int *)(iRam0036f0c8 + 0x178) = iVar1;
    *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + 0x10000;
    if (*(int *)(iRam0036f0c8 + 0x148) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iRam0036f0c8 + 0x148) + *(int *)(iRam0036f0c8 + 0x14c);
    }
    *(int *)(iRam0036f0c8 + 0x184) = iVar1;
    *(int *)(iRam0036f0c8 + 0x14c) = *(int *)(iRam0036f0c8 + 0x14c) + 0x4000;
    iVar1 = *(int *)(iRam0036f0c8 + 0x148);
  }
  uStack_14 = *(undefined4 *)(iRam0036f0c8 + 400);
  uStack_10 = *(undefined4 *)(iRam0036f0c8 + 0x1dc);
  *(undefined4 *)(iRam0036f0c8 + 0x150) = *param_1;
  uStack_18 = *(undefined4 *)(iRam0036f0c8 + 0x150);
  Movie_Open(iRam0036f0c8,&iStack_60);
  return;
}

// 0x0014ebb0  size 0x94
void MoviePlayer_Update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(uint *)(iGpffff89d8 + 0x15c) & 2) != 0) {
    MovieSnd_Feed(iGpffff89d8 + 0x1e8);
  }
  if (((*(uint *)(iGpffff89d8 + 0x15c) & 1) != 0) && (*(int *)(iGpffff89d8 + 0x198) != 0)) {
    MovieVid_Present(iGpffff89d8 + 0x19c,param_1,param_2,param_3);
  }
  return;
}

// 0x0014ec50  size 0x78
bool MoviePlayer_Close(void)

{
  bool bVar1;
  
  bVar1 = *(int *)(iGpffff89d8 + 0x154) == 4;
  if (bVar1) {
    Thread_Terminate(iGpffff89d8 + 0x188);
    Thread_Delete(iGpffff89d8 + 0x188);
    Thread_Terminate(iGpffff89d8 + 0x17c);
    Thread_Delete(iGpffff89d8 + 0x17c);
    Movie_Close(iGpffff89d8);
    CdStream_Close();
    *(undefined4 *)(iGpffff89d8 + 0x154) = 0;
  }
  return bVar1;
}

// 0x0014ecd0  size 0x6c
undefined4 MoviePlayer_IsFinished(void)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(iGpffff89d8 + 0x154) == 1) {
    lVar2 = Movie_GetFrameCount();
    if ((lVar2 < 0xb) || (*(int *)(iGpffff89d8 + 0x174) != 1)) {
      uVar1 = 0;
    }
    else {
      Movie_RequestStop();
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0014ed40  size 0x250
undefined4 MoviePlayer_Open(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(iGpffff89d8 + 0x154) == 0) {
    Sema_Wait((int)register0x000001c0 + -0x7730);
    iVar1 = iRam00386628;
    Sema_Signal((int)register0x000001c0 + -0x7730,0);
    if (iVar1 == 0) {
      *(undefined4 *)(iGpffff89d8 + 0x158) = *param_1;
      *(undefined4 *)(iGpffff89d8 + 0x15c) = param_1[3];
      *(undefined4 *)(iGpffff89d8 + 0x160) = param_1[1];
      *(undefined4 *)(iGpffff89d8 + 0x164) = param_1[2];
      *(undefined4 *)(iGpffff89d8 + 0x168) = 0;
      *(undefined4 *)(iGpffff89d8 + 0x16c) = 0;
      *(undefined4 *)(iGpffff89d8 + 0x170) = param_2;
      *(undefined4 *)(iGpffff89d8 + 0x174) = 0;
      *(undefined4 *)(iGpffff89d8 + 0x198) = 0;
      *(undefined4 *)(iGpffff89d8 + 0x1e4) = 0;
      if ((*(int *)(iGpffff89d8 + 400) != 0) && ((*(uint *)(iGpffff89d8 + 0x15c) & 1) != 0)) {
        *(undefined4 *)(iGpffff89d8 + 0x194) = 1;
        *(undefined4 *)(iGpffff89d8 + 0x1c8) = 0xffffffff;
        *(undefined4 *)(iGpffff89d8 + 0x1d8) = 0xffffffff;
        if (iRam00387fa8 == 2) {
          if ((*(uint *)(iGpffff89d8 + 0x15c) & 4) == 0) {
            *(undefined4 *)(iGpffff89d8 + 0x1cc) = 10000;
          }
          else {
            *(undefined4 *)(iGpffff89d8 + 0x1cc) = 0x2ed4;
          }
        }
        else if ((*(uint *)(iGpffff89d8 + 0x15c) & 4) == 0) {
          *(undefined4 *)(iGpffff89d8 + 0x1cc) = 0x2ed4;
        }
        else {
          *(undefined4 *)(iGpffff89d8 + 0x1cc) = 10000;
        }
        MovieTex_Reset();
      }
      if ((*(int *)(iGpffff89d8 + 0x1dc) != 0) && ((*(uint *)(iGpffff89d8 + 0x15c) & 2) != 0)) {
        *(undefined4 *)(iGpffff89d8 + 0x1e0) = 1;
        MovieSnd_Start(iGpffff89d8 + 0x1e8);
      }
      *(undefined4 *)(iGpffff89d8 + 0x168) = *(undefined4 *)(iGpffff89d8 + 0x164);
      *(undefined4 *)(iGpffff89d8 + 0x16c) = *(undefined4 *)(iGpffff89d8 + 0x164);
      uStack_10 = *(undefined4 *)(iGpffff89d8 + 0x158);
      uStack_c = *(undefined4 *)(iGpffff89d8 + 0x160);
      uStack_8 = *(undefined4 *)(iGpffff89d8 + 0x164);
      CdStream_Open(&uStack_10);
      Movie_Start(iGpffff89d8,*(undefined4 *)(iGpffff89d8 + 0x194),
                  *(undefined4 *)(iGpffff89d8 + 0x1e0),0);
      Thread_Create(iGpffff89d8 + 0x17c,*(undefined4 *)(iGpffff89d8 + 0x150),0x14e590,
                    *(undefined4 *)(iGpffff89d8 + 0x178),0x10000,0);
      Thread_Start(iGpffff89d8 + 0x17c);
      Thread_Create(iGpffff89d8 + 0x188,*(undefined4 *)(iGpffff89d8 + 0x150),0x14e580,
                    *(undefined4 *)(iGpffff89d8 + 0x184),0x4000,0);
      Thread_Start(iGpffff89d8 + 0x188);
      uVar2 = 1;
      *(undefined4 *)(iGpffff89d8 + 0x154) = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// 0x0014ef90  size 0x9c
void MoviePlayer_Free(void)

{
  int iVar1;
  
  iVar1 = iGpffff89d8;
  if (*(int *)(iGpffff89d8 + 0x1dc) != 0) {
    if (*(int *)(iGpffff89d8 + 0x1fc) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar1 + 0x1fc) = 0;
    }
    loadfile_sub_00118b98(*(undefined4 *)(iVar1 + 0x1f8));
  }
  if (*(int *)(iGpffff89d8 + 400) != 0) {
    MovieTex_Free(iGpffff89d8 + 0x19c);
  }
  Movie_StopDma(iGpffff89d8);
  if (*(int *)(iGpffff89d8 + 0x148) != 0) {
    Mem_Free();
    *(undefined4 *)(iGpffff89d8 + 0x148) = 0;
  }
  *(undefined4 *)(iGpffff89d8 + 0x14c) = 0;
  Mem_Free(iGpffff89d8);
  return;
}

// 0x0014f030  size 0xd0
void MoviePlayer_Create(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = maybe_operator_new_arr_heap(0x210);
  iGpffff89d8 = (int)uVar1;
  Mem_Set16(uVar1,0,0x210);
  MoviePlayer_Setup(param_1,param_2);
  *(undefined4 *)(iGpffff89d8 + 0x154) = 0;
  *(undefined4 *)(iGpffff89d8 + 0x194) = 0;
  *(undefined4 *)(iGpffff89d8 + 0x198) = 0;
  *(undefined4 *)(iGpffff89d8 + 0x1e0) = 0;
  *(undefined4 *)(iGpffff89d8 + 0x1e4) = 0;
  if (*(int *)(iGpffff89d8 + 400) != 0) {
    MovieVid_Init(iGpffff89d8 + 0x19c,iGpffff89d8 + 0x80,(int)param_1 + 0x14,param_2);
  }
  if (*(int *)(iGpffff89d8 + 0x1dc) != 0) {
    MovieSnd_Init(iGpffff89d8 + 0x1e8,iGpffff89d8 + 0x100,(int)param_1 + 0x44,param_2);
  }
  return;
}

// 0x0014f110  size 0x8
void Movie_Init(void)

{
  uGpffff89d8 = 0;
  libmpeg_sub_0010f578();
  return;
}

// 0x0014f120  size 0x30
/* 9 callers */

void Obj_SetTexture(int param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  if (param_4 != 0) {
    maybe_Mem_CopyQwords(param_1 + 0x80,param_4,0x20);
  }
  return;
}

// 0x0014f150  size 0x18
void Obj_SetBlend(int param_1,undefined1 param_2,undefined2 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 9) = param_2;
  *(undefined2 *)(param_1 + 10) = param_3;
  *(undefined8 *)(param_1 + 0x70) = param_4;
  return;
}

// 0x0014f170  size 0x58
void Obj_Init(undefined2 *param_1)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  maybe_Vu0_UnitMatrix(param_1 + 8);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

// 0x0014f1d0  size 0x1c
void Obj_SetMatrixDirty(uint *param_1,undefined8 param_2)

{
  *param_1 = *param_1 | 0x20;
  FUN_00132560(param_1 + 0x44,param_2,param_1[2]);
  return;
}

// 0x0014f1f0  size 0x10
void Obj_CopyParams(int param_1,undefined8 param_2)

{
  FUN_00132560(param_1 + 0x10,param_2,*(undefined4 *)(param_1 + 8));
  return;
}

// 0x0014f200  size 0xc0
void Obj_SetType(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    *(undefined4 *)(param_1 + 8) = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 8) = 3;
    break;
  case 3:
  case 4:
    *(undefined4 *)(param_1 + 8) = 4;
    break;
  case 5:
  case 6:
    *(undefined4 *)(param_1 + 8) = param_3;
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar2 = uVar3 * 0x10 + param_1;
      iVar1 = uVar3 * 8 + param_1;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x11c) = 0;
      *(undefined4 *)(iVar2 + 0x118) = 0;
      *(undefined4 *)(iVar2 + 0x114) = 0;
      *(undefined4 *)(iVar2 + 0x110) = 0;
      *(undefined4 *)(iVar1 + 0x214) = 0;
      *(undefined4 *)(iVar1 + 0x210) = 0;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return;
}

// 0x0014f2c0  size 0x34
/* 19 callers */

void Obj_SetVisible(uint *param_1,long param_2,undefined1 param_3,undefined2 param_4)

{
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xfffffffe;
  }
  else {
    *param_1 = *param_1 | 1;
    *(undefined1 *)((int)param_1 + 0x291) = param_3;
    *(undefined2 *)((int)param_1 + 0x292) = param_4;
  }
  return;
}

// 0x0014f300  size 0xa4
/* to [-pi, pi] */

float Angle_Wrap(float param_1,uint *param_2)

{
  *param_2 = *param_2 | 8;
  for (; 3.1415927 < param_1; param_1 = param_1 - 6.2831855) {
  }
  for (; param_1 < -3.1415927; param_1 = param_1 + 6.2831855) {
  }
  param_2[0xa8] = (uint)param_1;
  return param_1;
}

// 0x0014f3b0  size 0xa0
/* 30 callers */

void Obj_Reset(undefined4 *param_1)

{
  Obj_SetType();
  *param_1 = 0x40;
  *(undefined1 *)((int)param_1 + 0x291) = 0;
  *(undefined2 *)((int)param_1 + 0x292) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0x30000;
  *(undefined8 *)(param_1 + 0xac) = 0x44;
  param_1[0xb0] = 0x80;
  param_1[0xb1] = 0x80;
  param_1[0xb2] = 0x80;
  param_1[0xb3] = 0x80;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  return;
}

// 0x0014f450  size 0x1d4
/* pools at 0x388200 */

int * Sprite_Alloc(undefined8 param_1,ulong param_2,int param_3,int param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  
  puVar7 = (uint *)((int)param_2 * 0x8280 + param_4 * 0x28c80 + param_3 * 0x51900 + 0x388200);
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  piVar8 = (int *)param_1;
  *piVar8 = 0;
  piVar8[1] = 0;
  piVar8[2] = 0;
  if (((uVar1 | uVar2) & 0x7ffe) != 0) {
    Sprite_BuildPacket(param_1,puVar7,param_2,param_7);
  }
  if ((((uVar1 | uVar2) & 0x18000) == 0) && (param_6 == 0)) {
    iVar4 = piVar8[1];
  }
  else {
    Sprite_SetupBlend(param_1,puVar7,param_2,param_5,param_6);
    iVar4 = piVar8[1];
  }
  if (iVar4 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar6 = *piVar8;
    if (iVar6 != iVar4) {
      *(ulong *)(piVar8 + iVar6 * 4 + 4) = (ulong)(uint)piVar8[2] | 0x1000000000008000;
      (piVar8 + iVar6 * 4 + 6)[0] = 0xe;
      (piVar8 + iVar6 * 4 + 6)[1] = 0;
      *piVar8 = piVar8[1];
      piVar8[2] = 0;
    }
    iVar4 = piVar8[1];
    iVar6 = 0x13000000;
    iVar5 = 0x6000000;
    if (1 < param_2) {
      iVar6 = 0;
      iVar5 = 0;
    }
    piVar3 = piVar8 + 4;
    piVar8[iVar4 * 4 + 4] = 0x70000000;
    piVar8[iVar4 * 4 + 5] = 0;
    piVar8[iVar4 * 4 + 6] = iVar6;
    piVar8[iVar4 * 4 + 7] = iVar5;
  }
  return piVar3;
}

// 0x0014f630  size 0x370
void Sprite_SetupBlend(int *param_1,uint *param_2,ulong param_3,uint param_4,long param_5)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *param_2 | param_2[1];
  bVar2 = 1 < param_3;
  if (((uVar3 & 0x18000) != 0) || (param_5 != 0)) {
    iVar1 = param_1[1];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar5 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar2) {
        iVar5 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar5;
      if (bVar2) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    iVar5 = 0x5000000f;
    if (bVar2) {
      iVar5 = 0;
    }
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = 0x3000000f;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x1ea8) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    param_1[iVar1 * 4 + 7] = iVar5;
    param_1[2] = param_1[2] + 0xf;
  }
  if (param_5 != 0) {
    iVar1 = param_1[1];
    iVar5 = param_1[1];
    param_1[1] = iVar5 + 1;
    param_1[iVar5 * 4 + 4] = 0x20000000;
    param_1[iVar5 * 4 + 5] = param_4 & 0xfffffff;
    param_1[iVar5 * 4 + 6] = 0;
    param_1[iVar5 * 4 + 7] = 0;
    *(undefined4 *)param_5 = 0x20000000;
    ((undefined4 *)param_5)[1] = (uint)(param_1 + param_1[1] * 4 + 4) & 0xfffffff;
    if (iVar1 != 0) {
      iVar1 = *param_1;
      if (iVar1 != param_1[1]) {
        *(ulong *)(param_1 + iVar1 * 4 + 4) = (ulong)(uint)param_1[2] | 0x1000000000008000;
        (param_1 + iVar1 * 4 + 6)[0] = 0xe;
        (param_1 + iVar1 * 4 + 6)[1] = 0;
        *param_1 = param_1[1];
        param_1[2] = 0;
      }
      iVar1 = param_1[1];
      iVar5 = 0x13000000;
      iVar4 = 0x6000000;
      if (bVar2) {
        iVar5 = 0;
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 4] = 0x70000000;
      param_1[iVar1 * 4 + 5] = 0;
      param_1[iVar1 * 4 + 6] = iVar5;
      param_1[iVar1 * 4 + 7] = iVar4;
    }
  }
  if ((uVar3 & 0x8000) != 0) {
    iVar1 = param_1[1];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar5 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar2) {
        iVar5 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar5;
      if (bVar2) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    iVar5 = 0x50000036;
    if (bVar2) {
      iVar5 = 0;
    }
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = 0x30000036;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x1ee4) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    param_1[iVar1 * 4 + 7] = iVar5;
    param_1[2] = param_1[2] + 0x36;
  }
  if ((uVar3 & 0x10000) != 0) {
    iVar1 = param_1[1];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar5 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar2) {
        iVar5 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar5;
      if (bVar2) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    iVar5 = 0x50000036;
    if (bVar2) {
      iVar5 = 0;
    }
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = 0x30000036;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x1fbc) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    param_1[iVar1 * 4 + 7] = iVar5;
    param_1[2] = param_1[2] + 0x36;
  }
  return;
}

// 0x0014f9a0  size 0xc18
void Sprite_BuildPacket(int *param_1,uint *param_2,ulong param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *param_2 | param_2[1];
  bVar3 = 1 < param_3;
  if ((uVar6 & 0x7ffe) != 0) {
    iVar1 = param_1[1];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar7 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar7;
      if (bVar3) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    iVar7 = 0x5000000f;
    if (bVar3) {
      iVar7 = 0;
    }
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = 0x3000000f;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 4) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    param_1[iVar1 * 4 + 7] = iVar7;
    param_1[2] = param_1[2] + 0xf;
  }
  if ((param_4 == 0) && ((uVar6 & 1) == 0)) {
    if ((uVar6 & 2) == 0) {
      if ((uVar6 & 4) != 0) {
        iVar1 = param_1[1];
        if (*param_1 == iVar1) {
          param_1[1] = iVar1 + 1;
          iVar7 = 0x6008000;
          param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
          if (bVar3) {
            iVar7 = 0;
          }
          param_1[iVar1 * 4 + 5] = 0;
          iVar4 = 0x50000001;
          param_1[iVar1 * 4 + 6] = iVar7;
          if (bVar3) {
            iVar4 = 0;
          }
          param_1[iVar1 * 4 + 7] = iVar4;
          *param_1 = param_1[1];
          param_1[1] = param_1[1] + 1;
        }
        iVar1 = param_1[1];
        iVar7 = 0x50000036;
        if (bVar3) {
          iVar7 = 0;
        }
        param_1[1] = iVar1 + 1;
        param_1[iVar1 * 4 + 4] = 0x30000036;
        param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x118) & 0xfffffff;
        param_1[iVar1 * 4 + 6] = 0;
        param_1[iVar1 * 4 + 7] = iVar7;
        param_1[2] = param_1[2] + 0x36;
      }
    }
    else {
      iVar1 = param_1[1];
      if (*param_1 == iVar1) {
        param_1[1] = iVar1 + 1;
        iVar7 = 0x6008000;
        param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
        if (bVar3) {
          iVar7 = 0;
        }
        param_1[iVar1 * 4 + 5] = 0;
        iVar4 = 0x50000001;
        param_1[iVar1 * 4 + 6] = iVar7;
        if (bVar3) {
          iVar4 = 0;
        }
        param_1[iVar1 * 4 + 7] = iVar4;
        *param_1 = param_1[1];
        param_1[1] = param_1[1] + 1;
      }
      iVar1 = param_1[1];
      iVar7 = 0x50000036;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[1] = iVar1 + 1;
      param_1[iVar1 * 4 + 4] = 0x30000036;
      param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x40) & 0xfffffff;
      param_1[iVar1 * 4 + 6] = 0;
      param_1[iVar1 * 4 + 7] = iVar7;
      param_1[2] = param_1[2] + 0x36;
    }
  }
  if ((uVar6 & 8) == 0) {
    if ((uVar6 & 0x100) != 0) {
      iVar1 = param_1[1];
      uVar2 = param_2[0xf74];
      if (*param_1 == iVar1) {
        param_1[1] = iVar1 + 1;
        iVar7 = 0x6008000;
        param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
        if (bVar3) {
          iVar7 = 0;
        }
        param_1[iVar1 * 4 + 5] = 0;
        iVar4 = 0x50000001;
        param_1[iVar1 * 4 + 6] = iVar7;
        if (bVar3) {
          iVar4 = 0;
        }
        param_1[iVar1 * 4 + 7] = iVar4;
        *param_1 = param_1[1];
        param_1[1] = param_1[1] + 1;
      }
      iVar1 = param_1[1];
      param_1[1] = iVar1 + 1;
      param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
      param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0xf78) & 0xfffffff;
      param_1[iVar1 * 4 + 6] = 0;
      if (bVar3) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar2 | 0x50000000;
      }
      param_1[iVar1 * 4 + 7] = uVar5;
      param_1[2] = param_1[2] + uVar2;
    }
  }
  else {
    iVar1 = param_1[1];
    uVar2 = param_2[0x1f0];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar7 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar7;
      if (bVar3) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 500) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    if (bVar3) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 | 0x50000000;
    }
    param_1[iVar1 * 4 + 7] = uVar5;
    param_1[2] = param_1[2] + uVar2;
  }
  if ((uVar6 & 0x10) == 0) {
    if ((uVar6 & 0x200) != 0) {
      iVar1 = param_1[1];
      uVar2 = param_2[0x1228];
      if (*param_1 == iVar1) {
        param_1[1] = iVar1 + 1;
        iVar7 = 0x6008000;
        param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
        if (bVar3) {
          iVar7 = 0;
        }
        param_1[iVar1 * 4 + 5] = 0;
        iVar4 = 0x50000001;
        param_1[iVar1 * 4 + 6] = iVar7;
        if (bVar3) {
          iVar4 = 0;
        }
        param_1[iVar1 * 4 + 7] = iVar4;
        *param_1 = param_1[1];
        param_1[1] = param_1[1] + 1;
      }
      iVar1 = param_1[1];
      param_1[1] = iVar1 + 1;
      param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
      param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x122c) & 0xfffffff;
      param_1[iVar1 * 4 + 6] = 0;
      if (bVar3) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar2 | 0x50000000;
      }
      param_1[iVar1 * 4 + 7] = uVar5;
      param_1[2] = param_1[2] + uVar2;
    }
  }
  else {
    iVar1 = param_1[1];
    uVar2 = param_2[0x4a4];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar7 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar7;
      if (bVar3) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x4a8) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    if (bVar3) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 | 0x50000000;
    }
    param_1[iVar1 * 4 + 7] = uVar5;
    param_1[2] = param_1[2] + uVar2;
  }
  if ((uVar6 & 0x20) == 0) {
    if ((uVar6 & 0x400) != 0) {
      iVar1 = param_1[1];
      uVar2 = param_2[0x14dc];
      if (*param_1 == iVar1) {
        param_1[1] = iVar1 + 1;
        iVar7 = 0x6008000;
        param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
        if (bVar3) {
          iVar7 = 0;
        }
        param_1[iVar1 * 4 + 5] = 0;
        iVar4 = 0x50000001;
        param_1[iVar1 * 4 + 6] = iVar7;
        if (bVar3) {
          iVar4 = 0;
        }
        param_1[iVar1 * 4 + 7] = iVar4;
        *param_1 = param_1[1];
        param_1[1] = param_1[1] + 1;
      }
      iVar1 = param_1[1];
      param_1[1] = iVar1 + 1;
      param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
      param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x14e0) & 0xfffffff;
      param_1[iVar1 * 4 + 6] = 0;
      if (bVar3) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar2 | 0x50000000;
      }
      param_1[iVar1 * 4 + 7] = uVar5;
      param_1[2] = param_1[2] + uVar2;
    }
  }
  else {
    iVar1 = param_1[1];
    uVar2 = param_2[0x758];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar7 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar7;
      if (bVar3) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x75c) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    if (bVar3) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 | 0x50000000;
    }
    param_1[iVar1 * 4 + 7] = uVar5;
    param_1[2] = param_1[2] + uVar2;
  }
  if ((uVar6 & 0x40) == 0) {
    if ((uVar6 & 0x800) != 0) {
      iVar1 = param_1[1];
      uVar2 = param_2[0x1790];
      if (*param_1 == iVar1) {
        param_1[1] = iVar1 + 1;
        iVar7 = 0x6008000;
        param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
        if (bVar3) {
          iVar7 = 0;
        }
        param_1[iVar1 * 4 + 5] = 0;
        iVar4 = 0x50000001;
        param_1[iVar1 * 4 + 6] = iVar7;
        if (bVar3) {
          iVar4 = 0;
        }
        param_1[iVar1 * 4 + 7] = iVar4;
        *param_1 = param_1[1];
        param_1[1] = param_1[1] + 1;
      }
      iVar1 = param_1[1];
      param_1[1] = iVar1 + 1;
      param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
      param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x1794) & 0xfffffff;
      param_1[iVar1 * 4 + 6] = 0;
      if (bVar3) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar2 | 0x50000000;
      }
      param_1[iVar1 * 4 + 7] = uVar5;
      param_1[2] = param_1[2] + uVar2;
    }
  }
  else {
    iVar1 = param_1[1];
    uVar2 = param_2[0xa0c];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar7 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar7;
      if (bVar3) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0xa10) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    if (bVar3) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 | 0x50000000;
    }
    param_1[iVar1 * 4 + 7] = uVar5;
    param_1[2] = param_1[2] + uVar2;
  }
  if ((uVar6 & 0x80) == 0) {
    if ((uVar6 & 0x1000) != 0) {
      iVar1 = param_1[1];
      uVar2 = param_2[0x1a44];
      if (*param_1 == iVar1) {
        param_1[1] = iVar1 + 1;
        iVar7 = 0x6008000;
        param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
        if (bVar3) {
          iVar7 = 0;
        }
        param_1[iVar1 * 4 + 5] = 0;
        iVar4 = 0x50000001;
        param_1[iVar1 * 4 + 6] = iVar7;
        if (bVar3) {
          iVar4 = 0;
        }
        param_1[iVar1 * 4 + 7] = iVar4;
        *param_1 = param_1[1];
        param_1[1] = param_1[1] + 1;
      }
      iVar1 = param_1[1];
      param_1[1] = iVar1 + 1;
      param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
      param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x1a48) & 0xfffffff;
      param_1[iVar1 * 4 + 6] = 0;
      if (bVar3) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar2 | 0x50000000;
      }
      param_1[iVar1 * 4 + 7] = uVar5;
      param_1[2] = param_1[2] + uVar2;
    }
  }
  else {
    iVar1 = param_1[1];
    uVar2 = param_2[0xcc0];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar7 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar7;
      if (bVar3) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = uVar2 | 0x30000000;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0xcc4) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    if (bVar3) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 | 0x50000000;
    }
    param_1[iVar1 * 4 + 7] = uVar5;
    param_1[2] = param_1[2] + uVar2;
  }
  if ((uVar6 & 0x2000) != 0) {
    iVar1 = param_1[1];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar7 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar7;
      if (bVar3) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    iVar7 = 0x50000036;
    if (bVar3) {
      iVar7 = 0;
    }
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = 0x30000036;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x1cf8) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    param_1[iVar1 * 4 + 7] = iVar7;
    param_1[2] = param_1[2] + 0x36;
  }
  if ((uVar6 & 0x4000) != 0) {
    iVar1 = param_1[1];
    if (*param_1 == iVar1) {
      param_1[1] = iVar1 + 1;
      iVar7 = 0x6008000;
      param_1[iVar1 * 4 + 4] = (int)&DAT_10000001;
      if (bVar3) {
        iVar7 = 0;
      }
      param_1[iVar1 * 4 + 5] = 0;
      iVar4 = 0x50000001;
      param_1[iVar1 * 4 + 6] = iVar7;
      if (bVar3) {
        iVar4 = 0;
      }
      param_1[iVar1 * 4 + 7] = iVar4;
      *param_1 = param_1[1];
      param_1[1] = param_1[1] + 1;
    }
    iVar1 = param_1[1];
    iVar7 = 0x50000036;
    if (bVar3) {
      iVar7 = 0;
    }
    param_1[1] = iVar1 + 1;
    param_1[iVar1 * 4 + 4] = 0x30000036;
    param_1[iVar1 * 4 + 5] = (uint)(param_2 + 0x1dd0) & 0xfffffff;
    param_1[iVar1 * 4 + 6] = 0;
    param_1[iVar1 * 4 + 7] = iVar7;
    param_1[2] = param_1[2] + 0x36;
  }
  return;
}

