// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00198000 - 0x0019c000
#include "ghidra_types.h"

// 0x00198010  size 0x84
void SceneObj_DestroyAll(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    lVar1 = SceneObj_Next(uVar3 & 0xff,0);
    while (lVar1 != 0) {
      *(uint *)lVar1 = *(uint *)lVar1 & 0xfffffff3;
      uVar2 = Chunk_GetData();
      lVar1 = SceneObj_Next(uVar3 & 0xff,uVar2);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  uRam00430588 = 0;
  return;
}

// 0x001980a0  size 0x84
void SceneObj_ResetAll(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    lVar1 = SceneObj_Next(uVar3 & 0xff,0);
    while (lVar1 != 0) {
      iRam00430588 = iRam00430588 + 1;
      uVar2 = Chunk_GetData(lVar1);
      lVar1 = SceneObj_Next(uVar3 & 0xff,uVar2);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  return;
}

// 0x00198130  size 0x7c
long SceneObj_CreateEffect(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar2 = SceneObj_AllocFromPool(2);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = ResPool_Load(6,param_1,0);
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      puVar4 = (undefined4 *)lVar2;
      puVar4[0x10] = (int)lVar3;
      *puVar4 = 1;
      uVar1 = Asset_LoadCourseTex(puVar4[0x10],param_1);
      puVar4[1] = uVar1;
    }
  }
  return lVar2;
}

// 0x001981b0  size 0xb8
long SceneObj_CreateModel(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 auStack_4 [4];
  
  DriverAsset_ClearFlag(auStack_4);
  lVar2 = SceneObj_AllocFromPool(1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = ResPool_Load(0,0,auStack_4);
    if ((lVar3 == 0) || (lVar4 = ResPool_Load(5,param_1,0), lVar4 == 0)) {
      lVar2 = 0;
    }
    else {
      puVar5 = (undefined4 *)lVar2;
      puVar5[0x10] = (int)lVar3;
      puVar5[0x11] = (int)lVar4;
      *puVar5 = 1;
      uVar1 = DriverAsset_Load(puVar5[0x10]);
      puVar5[1] = uVar1;
      uVar1 = Asset_LoadEnv(puVar5[0x11],param_1);
      puVar5[1] = uVar1;
    }
  }
  return lVar2;
}

// 0x00198270  size 0x244
/* WARNING: Removing unreachable block (ram,0x00198348) */

long SceneObj_CreateCar(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  lVar11 = 0;
  lVar9 = 0;
  lVar8 = 0;
  lVar7 = 0;
  lVar6 = 0;
  lVar2 = SceneObj_AllocFromPool(0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    iVar10 = (int)param_1;
    lVar3 = ResPool_Load(0,*(undefined4 *)(iVar10 + 4),iVar10 + 8);
    if ((((lVar3 == 0) ||
         (lVar9 = ResPool_Load(1,*(undefined4 *)(iVar10 + 0xc),iVar10 + 0x10), lVar9 == 0)) ||
        (lVar8 = ResPool_Load(2,*(undefined4 *)(iVar10 + 0x60),iVar10 + 100), lVar8 == 0)) ||
       (((lVar7 = ResPool_Load(3,*(undefined4 *)(iVar10 + 0x70),iVar10 + 0x74), lVar7 == 0 ||
         (lVar6 = ResPool_Load(3,*(undefined4 *)(iVar10 + 0xb8),iVar10 + 0xbc), lVar6 == 0)) ||
        ((lVar11 = ResPool_Load(4,*(undefined4 *)(iVar10 + 0x94),iVar10 + 0x98), lVar11 == 0 ||
         (lVar4 = ResPool_Load(4,*(undefined4 *)(iVar10 + 0xdc),iVar10 + 0xe0), lVar4 == 0)))))) {
      if (lVar3 != 0) {
        course_leaf_sub_001a5a00(lVar3);
      }
      if (lVar9 != 0) {
        course_leaf_sub_001a5a00(lVar9);
      }
      if (lVar8 != 0) {
        course_leaf_sub_001a5a00(lVar8);
      }
      if (lVar7 != 0) {
        course_leaf_sub_001a5a00(lVar7);
      }
      if (lVar6 != 0) {
        course_leaf_sub_001a5a00(lVar6);
      }
      if (lVar11 != 0) {
        course_leaf_sub_001a5a00(lVar11);
      }
      lVar2 = 0;
    }
    else {
      puVar5 = (undefined4 *)lVar2;
      puVar5[0x140] = (int)lVar3;
      puVar5[0x141] = (int)lVar9;
      puVar5[0x14a] = (int)lVar8;
      puVar5[0x142] = (int)lVar7;
      puVar5[0x143] = (int)lVar6;
      puVar5[0x144] = (int)lVar11;
      puVar5[0x145] = (int)lVar4;
      maybe_Mem_CopyQwords(puVar5 + 3,param_1,0x100);
      *puVar5 = 1;
      uVar1 = DriverAsset_Load(puVar5[0x140]);
      puVar5[1] = uVar1;
      uVar1 = Asset_LoadCarParts(puVar5[0x14a]);
      puVar5[1] = uVar1;
      uVar1 = WheelAsset_Load(puVar5[0x142]);
      puVar5[1] = uVar1;
      uVar1 = WheelAsset_Load(puVar5[0x143]);
      puVar5[1] = uVar1;
      uVar1 = CarAsset_LoadBody(puVar5[0x144]);
      puVar5[1] = uVar1;
      uVar1 = CarAsset_LoadBody(puVar5[0x145]);
      puVar5[1] = uVar1;
      uVar1 = CarAsset_Load(puVar5[0x141]);
      puVar5[1] = uVar1;
      CarModel_ResetState(puVar5 + 0x44);
    }
  }
  return lVar2;
}

// 0x001984c0  size 0x150
uint * SceneObj_Next(char param_1,uint *param_2)

{
  bool bVar1;
  uint *puVar2;
  
  puVar2 = (uint *)0x0;
  if (param_2 == (uint *)0x0) {
    if (param_1 == '\x02') {
      param_2 = puRam00430584;
    }
    else if (param_1 == '\x01') {
      param_2 = puRam0043057c;
    }
    else if (param_1 == '\0') {
      param_2 = puRam00430574;
    }
  }
  if (param_1 == '\x02') {
    puVar2 = puRam00430584 + iRam00430580 * 0x12;
  }
  else if (param_1 == '\x01') {
    puVar2 = puRam0043057c + iRam00430578 * 0x14;
  }
  else {
    if (param_1 != '\0') {
      bVar1 = false;
      goto LAB_00198568;
    }
    puVar2 = puRam00430574 + iRam00430570 * 0x14c;
  }
  bVar1 = param_2 < puVar2;
LAB_00198568:
  if (bVar1) {
    do {
      if ((*param_2 & 0xc) != 0) {
        return param_2;
      }
      param_2 = (uint *)Chunk_GetData(param_2);
    } while (param_2 < puVar2);
  }
  return (uint *)0x0;
}

// 0x00198610  size 0xd0
int * SceneObj_AllocFromPool(char param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)0x0;
  iVar4 = 0;
  iVar3 = 0;
  if (param_1 == '\x02') {
    iVar3 = iRam00430580;
    piVar2 = piRam00430584;
  }
  else if (param_1 == '\x01') {
    iVar3 = iRam00430578;
    piVar2 = piRam0043057c;
  }
  else {
    if (param_1 != '\0') {
      bVar1 = false;
      goto LAB_00198690;
    }
    iVar3 = iRam00430570;
    piVar2 = piRam00430574;
  }
  bVar1 = 0 < iVar3;
LAB_00198690:
  if (bVar1) {
    do {
      if (*piVar2 == 0) {
        return piVar2;
      }
      piVar2 = (int *)Chunk_GetData(piVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return (int *)0x0;
}

// 0x001986e0  size 0xc
void SceneObj_SetGlobalFlags(undefined4 param_1)

{
  uRam0036f284 = param_1;
  uRam0036f2ec = param_1;
  return;
}

// 0x001986f0  size 0x180
void View_DrawBackground(uint param_1,long param_2,long param_3)

{
  int iVar1;
  uint auStack_350 [172];
  ulong uStack_a0;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_40 [20];
  undefined1 *puStack_2c;
  
  iVar1 = (param_1 & 0xff) * 0x5c0;
  Camera_Init(&g_Views + iVar1);
  Pkt_Init(auStack_40,1,2,0);
  puStack_2c = &g_Views + iVar1;
  Pkt_SubmitToChain(auStack_40,0);
  Pkt_End(auStack_40);
  TexSlot_Set(0,1,0x430470);
  Obj_Reset(auStack_350,4,0xffffffffffffffff);
  uStack_a0 = param_2 << 0x20 | 0x29;
  auStack_350[0] = auStack_350[0] | 2;
  Obj_SetVisible(auStack_350,1,0,0);
  if (param_3 != 0) {
    auStack_350[0] = auStack_350[0] | 0x200;
  }
  fStack_4c = (float)*(uint *)(iVar1 + 0x431174);
  fStack_50 = (float)*(uint *)(iVar1 + 0x431170);
  Pkt_AddPrimitives(auStack_40,auStack_350,1);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x00198870  size 0x264
void Course_DrawShadowedMeshes(long param_1)

{
  undefined8 uVar1;
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
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  
  uStack_180 = uRam00436180;
  uStack_17c = uRam00436184;
  uStack_178 = uRam00436188;
  uStack_174 = uRam0043618c;
  uStack_120 = uRam004361e0;
  uStack_11c = uRam004361e4;
  uStack_118 = uRam004361e8;
  uStack_114 = uRam004361ec;
  uStack_c0 = uRam00436240;
  uStack_bc = uRam00436244;
  uStack_b8 = uRam00436248;
  uStack_b4 = uRam0043624c;
  uStack_170 = uRam00436190;
  uStack_16c = uRam00436194;
  uStack_168 = uRam00436198;
  uStack_164 = uRam0043619c;
  uStack_110 = uRam004361f0;
  uStack_10c = uRam004361f4;
  uStack_108 = uRam004361f8;
  uStack_104 = uRam004361fc;
  uStack_b0 = uRam00436250;
  uStack_ac = uRam00436254;
  uStack_a8 = uRam00436258;
  uStack_a4 = uRam0043625c;
  uStack_a0 = uRam00436260;
  uStack_9c = uRam00436264;
  uStack_98 = uRam00436268;
  uStack_94 = uRam0043626c;
  uStack_160 = uRam004361a0;
  uStack_15c = uRam004361a4;
  uStack_158 = uRam004361a8;
  uStack_154 = uRam004361ac;
  uStack_90 = uRam00436270;
  uStack_8c = uRam00436274;
  uStack_88 = uRam00436278;
  uStack_84 = uRam0043627c;
  uStack_80 = uRam00436280;
  uStack_7c = uRam00436284;
  uStack_78 = uRam00436288;
  uStack_74 = uRam0043628c;
  uStack_70 = uRam00436290;
  uStack_6c = uRam00436294;
  uStack_68 = uRam00436298;
  uStack_64 = uRam0043629c;
  uStack_60 = uRam004362a0;
  uStack_5c = uRam004362a4;
  uStack_58 = uRam004362a8;
  uStack_54 = uRam004362ac;
  uStack_150 = uRam004361b0;
  uStack_14c = uRam004361b4;
  uStack_148 = uRam004361b8;
  uStack_144 = uRam004361bc;
  uStack_100 = uRam00436200;
  uStack_fc = uRam00436204;
  uStack_f8 = uRam00436208;
  uStack_f4 = uRam0043620c;
  uStack_50 = uRam004362b0;
  uStack_4c = uRam004362b4;
  uStack_48 = uRam004362b8;
  uStack_44 = uRam004362bc;
  uStack_140 = uRam004361c0;
  uStack_13c = uRam004361c4;
  uStack_138 = uRam004361c8;
  uStack_134 = uRam004361cc;
  uStack_f0 = uRam00436210;
  uStack_ec = uRam00436214;
  uStack_e8 = uRam00436218;
  uStack_e4 = uRam0043621c;
  uStack_40 = uRam004362c0;
  uStack_3c = uRam004362c4;
  uStack_38 = uRam004362c8;
  uStack_34 = uRam004362cc;
  uStack_130 = uRam004361d0;
  uStack_12c = uRam004361d4;
  uStack_128 = uRam004361d8;
  uStack_124 = uRam004361dc;
  uStack_e0 = uRam00436220;
  uStack_dc = uRam00436224;
  uStack_d8 = uRam00436228;
  uStack_d4 = uRam0043622c;
  uStack_30 = uRam004362d0;
  uStack_2c = uRam004362d4;
  uStack_28 = uRam004362d8;
  uStack_24 = uRam004362dc;
  uStack_d0 = uRam00436230;
  uStack_cc = uRam00436234;
  uStack_c8 = uRam00436238;
  uStack_c4 = uRam0043623c;
  uStack_20 = uRam004362e0;
  uStack_1c = uRam004362e4;
  uStack_18 = uRam004362e8;
  uStack_14 = uRam004362ec;
  uStack_10 = uRam004362f0;
  if (param_1 != 0) {
    sceVu0MulVector(&uStack_180,0x436180,param_1);
    sceVu0MulVector(&uStack_100,0x436200,param_1);
    sceVu0CopyVector(&uStack_120,0x4361d0);
    sceVu0CopyVector(&uStack_110,0x4361d0);
    sceVu0ScaleVector(0,&uStack_f0,0x436200);
    sceVu0ScaleVector(0,&uStack_e0,0x436200);
  }
  Camera_Init(0x431100);
  Light_UpdateMatrices(&uStack_180);
  if (iRam00430468 == 0) {
    uVar1 = Tex_GetImageData(uRam00430464,0);
    maybe_Light_ApplyToVertices(&uStack_180,uVar1,uRam00430478,uRam0043047a,0x431100);
  }
  else {
    uVar1 = Tex_GetImageData(uRam00430464,0);
    maybe_Light_ApplyToVerticesAlt(&uStack_180,uVar1,uRam00430478,uRam0043047a,0x431100);
  }
  return;
}

// 0x00198ae0  size 0x24c
void Course_DrawLitMeshes(long param_1)

{
  undefined8 uVar1;
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
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  
  uStack_180 = uRam00436180;
  uStack_17c = uRam00436184;
  uStack_178 = uRam00436188;
  uStack_174 = uRam0043618c;
  uStack_120 = uRam004361e0;
  uStack_11c = uRam004361e4;
  uStack_118 = uRam004361e8;
  uStack_114 = uRam004361ec;
  uStack_c0 = uRam00436240;
  uStack_bc = uRam00436244;
  uStack_b8 = uRam00436248;
  uStack_b4 = uRam0043624c;
  uStack_170 = uRam00436190;
  uStack_16c = uRam00436194;
  uStack_168 = uRam00436198;
  uStack_164 = uRam0043619c;
  uStack_110 = uRam004361f0;
  uStack_10c = uRam004361f4;
  uStack_108 = uRam004361f8;
  uStack_104 = uRam004361fc;
  uStack_b0 = uRam00436250;
  uStack_ac = uRam00436254;
  uStack_a8 = uRam00436258;
  uStack_a4 = uRam0043625c;
  uStack_a0 = uRam00436260;
  uStack_9c = uRam00436264;
  uStack_98 = uRam00436268;
  uStack_94 = uRam0043626c;
  uStack_160 = uRam004361a0;
  uStack_15c = uRam004361a4;
  uStack_158 = uRam004361a8;
  uStack_154 = uRam004361ac;
  uStack_90 = uRam00436270;
  uStack_8c = uRam00436274;
  uStack_88 = uRam00436278;
  uStack_84 = uRam0043627c;
  uStack_80 = uRam00436280;
  uStack_7c = uRam00436284;
  uStack_78 = uRam00436288;
  uStack_74 = uRam0043628c;
  uStack_70 = uRam00436290;
  uStack_6c = uRam00436294;
  uStack_68 = uRam00436298;
  uStack_64 = uRam0043629c;
  uStack_60 = uRam004362a0;
  uStack_5c = uRam004362a4;
  uStack_58 = uRam004362a8;
  uStack_54 = uRam004362ac;
  uStack_150 = uRam004361b0;
  uStack_14c = uRam004361b4;
  uStack_148 = uRam004361b8;
  uStack_144 = uRam004361bc;
  uStack_100 = uRam00436200;
  uStack_fc = uRam00436204;
  uStack_f8 = uRam00436208;
  uStack_f4 = uRam0043620c;
  uStack_50 = uRam004362b0;
  uStack_4c = uRam004362b4;
  uStack_48 = uRam004362b8;
  uStack_44 = uRam004362bc;
  uStack_140 = uRam004361c0;
  uStack_13c = uRam004361c4;
  uStack_138 = uRam004361c8;
  uStack_134 = uRam004361cc;
  uStack_f0 = uRam00436210;
  uStack_ec = uRam00436214;
  uStack_e8 = uRam00436218;
  uStack_e4 = uRam0043621c;
  uStack_40 = uRam004362c0;
  uStack_3c = uRam004362c4;
  uStack_38 = uRam004362c8;
  uStack_34 = uRam004362cc;
  uStack_130 = uRam004361d0;
  uStack_12c = uRam004361d4;
  uStack_128 = uRam004361d8;
  uStack_124 = uRam004361dc;
  uStack_e0 = uRam00436220;
  uStack_dc = uRam00436224;
  uStack_d8 = uRam00436228;
  uStack_d4 = uRam0043622c;
  uStack_30 = uRam004362d0;
  uStack_2c = uRam004362d4;
  uStack_28 = uRam004362d8;
  uStack_24 = uRam004362dc;
  uStack_d0 = uRam00436230;
  uStack_cc = uRam00436234;
  uStack_c8 = uRam00436238;
  uStack_c4 = uRam0043623c;
  uStack_20 = uRam004362e0;
  uStack_1c = uRam004362e4;
  uStack_18 = uRam004362e8;
  uStack_14 = uRam004362ec;
  uStack_10 = uRam004362f0;
  if (param_1 != 0) {
    sceVu0MulVector(&uStack_180,0x436180,param_1);
    sceVu0MulVector(&uStack_100,0x436200,param_1);
    sceVu0MulVector(&uStack_f0,0x436210,param_1);
    sceVu0MulVector(&uStack_e0,0x436220,param_1);
  }
  Camera_Init(0x431100);
  Light_UpdateMatrices(&uStack_180);
  if (iRam00430468 == 0) {
    uVar1 = Tex_GetImageData(uRam00430464,0);
    maybe_Light_ApplyToVertices(&uStack_180,uVar1,uRam00430478,uRam0043047a,0x431100);
  }
  else {
    uVar1 = Tex_GetImageData(uRam00430464,0);
    maybe_Light_ApplyToVerticesAlt(&uStack_180,uVar1,uRam00430478,uRam0043047a,0x431100);
  }
  return;
}

// 0x00198d30  size 0xc0
void Course_FreeModels(void)

{
  if (iRam00430574 != 0) {
    Mem_Free();
  }
  uRam00430570 = 0;
  iRam00430574 = 0;
  if (iRam0043057c != 0) {
    Mem_Free();
  }
  uRam00430578 = 0;
  iRam0043057c = 0;
  if (iRam00430584 != 0) {
    Mem_Free();
  }
  uRam00430580 = 0;
  iRam00430584 = 0;
  if (iRam00430464 != 0) {
    Mem_Free();
    iRam00430464 = 0;
  }
  Asset_FreeCourseCommon();
  return;
}

// 0x00198df0  size 0x3b8
void Course_LoadModels(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  iVar3 = (int)param_2;
  uRam00430460 = *(undefined1 *)(iVar3 + 0x1c);
  cVar1 = *(char *)(iVar3 + 0x1c);
  uVar7 = 0x80;
  if (cVar1 != '\0') {
    uVar7 = 0x40;
  }
  if (cVar1 == '\0') {
    uVar9 = 0x432dc0;
  }
  else {
    uVar9 = 0x432800;
  }
  uRam00430468 = (uint)(cVar1 == '\0');
  lVar5 = 0;
  iRam00430464 = 0;
  do {
    if (lVar5 != 0) {
      uVar2 = Mem_AllocAligned(lVar5,0x80,param_1);
      iRam00430464 = (int)uVar2;
      Mem_Set16(uVar2,0,lVar5);
    }
    uVar2 = 3;
    if (uRam00430468 == 0) {
      uVar2 = 1;
    }
    lVar5 = Tex_BuildUploadPacket(uVar2,uVar7,uVar7,1,0,0,0x80,iRam00430464);
  } while (iRam00430464 == 0);
  TexSlot_BindSimple(0x430470,iRam00430464,0,iRam0036f284 + iRam0036f2c0,iRam0036f284 + iRam0036f2c0
                     ,0x11110,0,0);
  Gfx_SetupRenderTargetEx(uVar9,0x4304f0,0,0);
  Asset_LoadCourseCommon(param_1,param_2);
  uRam00430570 = *(undefined4 *)(iVar3 + 0x20);
  iRam00430574 = Mem_Alloc16(*(int *)(iVar3 + 0x20) * 0x530,param_1);
  uVar8 = 0;
  if (*(int *)(iVar3 + 0x20) == 0) {
    iRam00430578 = *(int *)(iVar3 + 0xc);
  }
  else {
    iVar6 = 0;
    do {
      iVar4 = iRam00430574 + iVar6;
      Chunk_Init(iVar4,0x530);
      *(undefined4 *)(iVar4 + 0x500) = 0;
      *(undefined4 *)(iVar4 + 0x504) = 0;
      *(undefined4 *)(iVar4 + 0x508) = 0;
      *(undefined4 *)(iVar4 + 0x50c) = 0;
      *(undefined4 *)(iVar4 + 0x518) = 0;
      *(undefined4 *)(iVar4 + 0x51c) = 0;
      *(undefined4 *)(iVar4 + 0x510) = 0;
      *(undefined4 *)(iVar4 + 0x514) = 0;
      *(undefined4 *)(iVar4 + 0x520) = 0;
      *(undefined4 *)(iVar4 + 0x524) = 0;
      *(undefined4 *)(iVar4 + 0x528) = 0;
      CarModel_ResetState(iVar4 + 0x110);
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 0x530;
    } while (uVar8 < *(uint *)(iVar3 + 0x20));
    iRam00430578 = *(int *)(iVar3 + 0xc);
  }
  if (iRam00430578 == 0) {
    iRam00430578 = 0;
    iRam0043057c = 0;
  }
  else {
    iRam0043057c = Mem_Alloc16(*(int *)(iVar3 + 0xc) * 0x50,param_1);
  }
  uVar8 = 0;
  if (*(int *)(iVar3 + 0xc) == 0) {
    iRam00430580 = *(int *)(iVar3 + 0x10);
  }
  else {
    iVar6 = 0;
    do {
      iVar4 = iRam0043057c + iVar6;
      Chunk_Init(iVar4,0x50);
      *(undefined4 *)(iVar4 + 0x44) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x30) = 1;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      iVar6 = iVar6 + 0x50;
    } while (uVar8 < *(uint *)(iVar3 + 0xc));
    iRam00430580 = *(int *)(iVar3 + 0x10);
  }
  if (iRam00430580 == 0) {
    iRam00430580 = 0;
    iRam00430584 = 0;
  }
  else {
    iRam00430584 = Mem_Alloc16(*(int *)(iVar3 + 0x10) * 0x48,param_1);
  }
  uVar8 = 0;
  if (*(int *)(iVar3 + 0x10) != 0) {
    iVar6 = 0;
    do {
      iVar4 = iRam00430584 + iVar6;
      Chunk_Init(iVar4,0x48);
      *(undefined4 *)(iVar4 + 0x40) = 0;
      *(undefined8 *)(iVar4 + 0x10) = 0x48;
      *(undefined4 *)(iVar4 + 0x18) = 0x80808080;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(iVar4 + 0x20) = 0x48;
      *(undefined4 *)(iVar4 + 0x28) = 0x80000000;
      *(undefined8 *)(iVar4 + 0x30) = 0x48;
      *(undefined4 *)(iVar4 + 0x38) = 0x80000000;
      iVar6 = iVar6 + 0x48;
    } while (uVar8 < *(uint *)(iVar3 + 0x10));
  }
  uRam00430588 = 0;
  uRam0043058c = 0;
  return;
}

// 0x001991b0  size 0x1e8
void SceneObj_DrawModel(undefined8 param_1,byte *param_2)

{
  int iVar1;
  uint auStack_350 [170];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_40 [20];
  undefined1 *puStack_2c;
  
  iVar1 = ((uint)*param_2 * 0x18 - (uint)*param_2) * 0x40;
  if (*(int *)(iVar1 + 0x431684) != 0) {
    if (*(int *)(param_2 + 4) != 0) {
      TexSlot_Set(5,1);
    }
    Pkt_Init(auStack_40,1,2,0);
    puStack_2c = &g_Views + iVar1;
    Pkt_SubmitToChain(auStack_40,0);
    Pkt_End(auStack_40);
    Obj_Reset(auStack_350,4,0xffffffffffffffff);
    if (*(long *)(param_2 + 8) != 10) {
      auStack_350[0] = auStack_350[0] | 2;
    }
    uStack_a0 = *(undefined8 *)(param_2 + 8);
    uStack_a8 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_2 + 4) == 0) {
      uStack_88 = *(uint *)(param_2 + 0x18);
    }
    else {
      Obj_SetVisible(auStack_350,1,5,0);
      uStack_88 = *(uint *)(param_2 + 0x18);
    }
    uStack_8c = uStack_88 >> 8 & 0xff;
    uStack_90 = uStack_88 >> 0x10 & 0xff;
    uStack_84 = uStack_88 >> 0x18;
    uStack_88 = uStack_88 & 0xff;
    if (*(int *)(param_2 + 0x1c) != 0) {
      auStack_350[0] = auStack_350[0] | 0x200;
    }
    fStack_4c = (float)*(uint *)(iVar1 + 0x431174);
    fStack_50 = (float)*(uint *)(iVar1 + 0x431170);
    Pkt_AddPrimitives(auStack_40,auStack_350,1);
    Pkt_Submit(auStack_40,0);
  }
  return;
}

// 0x001993a0  size 0x8c
void SceneObj_DrawOpaque(int param_1)

{
  bool bVar1;
  undefined4 uStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((iRam00433344 == 0) || (iRam0043058c == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uStack_20 = 5;
  if (!bVar1) {
    uStack_20 = 4;
  }
  iStack_1c = *(int *)(*(int *)(param_1 + 0x40) + 0x44);
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_10 = 0x30000;
  uStack_8 = *(undefined4 *)(param_1 + 0x18);
  uStack_4 = 0;
  *(undefined4 *)(iStack_1c + 0x60) = 0;
  SceneObj_DrawModel(param_1,&uStack_20);
  return;
}

// 0x00199430  size 0x90
void SceneObj_DrawTranslucent(int param_1)

{
  bool bVar1;
  undefined4 uStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((iRam00433344 == 0) || (iRam0043058c == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uStack_20 = 5;
  if (!bVar1) {
    uStack_20 = 4;
  }
  iStack_1c = *(int *)(*(int *)(param_1 + 0x40) + 0x44);
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_10 = 0x30000;
  uStack_8 = *(undefined4 *)(param_1 + 0x18);
  uStack_4 = 1;
  *(undefined4 *)(iStack_1c + 0x60) = 0;
  SceneObj_DrawModel(param_1,&uStack_20);
  return;
}

// 0x001994c0  size 0x60
void SceneObj_Release(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  course_leaf_sub_001a5a00(*(undefined4 *)(iVar1 + 0x40));
  Chunk_Init(param_1,0x48);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined8 *)(iVar1 + 0x10) = 0x48;
  *(undefined4 *)(iVar1 + 0x18) = 0x80808080;
  *(undefined8 *)(iVar1 + 0x20) = 0x48;
  *(undefined4 *)(iVar1 + 0x28) = 0x80000000;
  *(undefined8 *)(iVar1 + 0x30) = 0x48;
  *(undefined4 *)(iVar1 + 0x38) = 0x80000000;
  return;
}

// 0x00199520  size 0x2c
void SceneObj_SetDefaultColor(undefined8 *param_1)

{
  *param_1 = 0x48;
  *(undefined4 *)(param_1 + 1) = 0x80808080;
  param_1[2] = 0x48;
  *(undefined4 *)(param_1 + 3) = 0x80000000;
  param_1[4] = 0x48;
  *(undefined4 *)(param_1 + 5) = 0x80000000;
  return;
}

// 0x00199550  size 0x1d0
void SceneObj_BuildMatrix(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_240 [192];
  undefined1 auStack_180 [384];
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) * 4 + *(int *)(param_1 + 0x44) + 0x3c);
  iVar4 = ((uint)(byte)param_2[4] * 0x18 - (uint)(byte)param_2[4]) * 0x40;
  iVar3 = *(int *)(param_1 + 0x44) + *(int *)(param_2 + 0x10) * 0x1c;
  if ((*(int *)(iVar4 + 0x431684) != 0) && (iVar1 != 0)) {
    Cam_SetupViewport(&g_Views + iVar4,0,*param_2);
    Light_UpdateMatrices(0x436180);
    Layer_Reset(auStack_240,&g_Views + iVar4,0x436180,*(undefined4 *)(param_2 + 8),
                *(undefined4 *)(param_2 + 0xc));
    maybe_Vu0_UnitMatrix(auStack_180);
    maybe_Vu0_RotMatrixZ(*(undefined4 *)(param_1 + 0x10),auStack_180,auStack_180);
    maybe_Vu0_RotMatrixY(*(undefined4 *)(param_1 + 0x14),auStack_180,auStack_180);
    maybe_Vu0_RotMatrixX(*(undefined4 *)(param_1 + 0x18),auStack_180,auStack_180);
    sceVu0TransMatrix(auStack_180,auStack_180,param_1 + 0x20);
    Layer_Open(auStack_240,0);
    Layer_Open(auStack_240,1);
    iVar4 = *(int *)(iVar3 + 0x68);
    if (iVar4 != 0) {
      TexSlot_Set(0,iVar4,*(undefined4 *)(iVar3 + 0x80));
      Pkt_Flush(auStack_240,iVar3 + 0x70);
    }
    if (*(int *)(iVar3 + 0x19c) != 0) {
      TexSlot_Set(iVar4 != 0,*(int *)(iVar3 + 0x19c),*(undefined4 *)(iVar3 + 0x1b4));
    }
    uVar2 = Model_GetNode(iVar1,0);
    maybe_Layer_Draw(auStack_240,uVar2);
    Layer_Close(auStack_240,0);
    Layer_Close(auStack_240,1);
  }
  return;
}

// 0x00199720  size 0x14c
void SceneObj_DrawShadowCaster(undefined8 param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_20 = 5;
  uStack_1c = 0;
  uStack_14 = 1;
  uStack_18 = 0;
  iStack_10 = 6;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x30) != 0) {
    View_DrawFadeSprite(0,1);
  }
  uStack_14 = 1;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  iStack_10 = 0;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  if (*(int *)(iVar1 + 0x30) != 0) {
    View_DrawFullscreen(0,3,0xffffffff80808080);
  }
  uStack_14 = 1;
  iStack_10 = 1;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  uStack_20 = 0;
  uStack_14 = 1;
  uStack_1c = 0;
  uStack_18 = 0;
  iStack_10 = *(int *)(iVar1 + 0x34) + 2;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  uStack_14 = 1;
  uStack_1c = 0;
  iStack_10 = 5;
  uStack_18 = 0;
  uStack_20 = 0;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  return;
}

// 0x00199870  size 0x1a0
void SceneObj_DrawShadow(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  if ((iRam00433344 == 0) || (iRam0043058c == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar2 = 5;
  if (!bVar1) {
    uVar2 = 4;
  }
  uStack_20 = 3;
  uStack_14 = 6;
  uStack_18 = 0;
  iStack_10 = 0;
  uStack_1c = uVar2;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  uStack_20 = 3;
  uStack_14 = 6;
  uStack_18 = 0;
  iStack_10 = 1;
  uStack_1c = uVar2;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  uStack_20 = 3;
  uStack_18 = 0;
  uStack_14 = 6;
  iStack_10 = *(int *)((int)param_1 + 0x34) + 2;
  uStack_1c = uVar2;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  uStack_20 = 3;
  uStack_14 = 6;
  iStack_10 = 6;
  uStack_18 = 0;
  uStack_1c = uVar2;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  uStack_20 = 1;
  uStack_18 = 0;
  uStack_1c = 3;
  uStack_14 = 4;
  iStack_10 = 7;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  uStack_18 = 0;
  uStack_20 = 1;
  uStack_1c = 3;
  uStack_14 = 4;
  iStack_10 = *(int *)((int)param_1 + 0x34) + 8;
  SceneObj_BuildMatrix(param_1,&uStack_20);
  return;
}

// 0x00199a10  size 0x70
void CarModel_Release(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  course_leaf_sub_001a5a00(*(undefined4 *)(iVar1 + 0x40));
  course_leaf_sub_001a5a00(*(undefined4 *)(iVar1 + 0x44));
  Chunk_Init(param_1,0x50);
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x30) = 1;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  return;
}

// 0x00199a80  size 0x34
void CarModel_Clear(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  param_1[8] = 1;
  param_1[9] = 0;
  return;
}

// 0x00199ac0  size 0x260
undefined4
CarModel_ProjectShadow
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  puVar2 = (undefined1 *)0x10;
  puVar3 = auStack_10;
  puVar1 = puVar3;
  while (puVar1 != (undefined1 *)0x0) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + -1;
    puVar1 = puVar2;
  }
  uVar7 = 0;
  iVar5 = param_5;
  do {
    uVar6 = 0;
    iVar4 = iVar5;
    do {
      sceVu0AddVector(auStack_10,auStack_10,iVar4);
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar6 < 2);
    uVar7 = uVar7 + 1;
    iVar5 = iVar5 + 0x20;
  } while (uVar7 < 2);
  if (cRam00430460 == '\x02') {
    sceVu0Normalize(&uStack_70,param_6);
    fStack_6c = fStack_6c - 1.0;
    sceVu0Normalize(&uStack_70,&uStack_70);
  }
  else {
    uStack_70 = 0;
    fStack_6c = -1.0;
    uStack_68 = 0;
    uStack_64 = 0x3f800000;
  }
  sceVu0SubVector(auStack_20,param_5 + 0x20,param_5);
  sceVu0SubVector(&uStack_30,param_5 + 0x10,param_5 + 0x20);
  sceVu0SubVector(auStack_40,param_5 + 0x30,param_5 + 0x10);
  sceVu0OuterProduct(auStack_50,auStack_20,&uStack_30);
  sceVu0Normalize(auStack_50,auStack_50);
  sceVu0OuterProduct(auStack_60,auStack_40,&uStack_30);
  sceVu0Normalize(auStack_60,auStack_60);
  sceVu0AddVector(auStack_20,auStack_50,auStack_60);
  sceVu0Normalize(&uStack_30,auStack_20);
  maybe_Camera_ClampAngles(uStack_30,uStack_2c,uStack_28,param_4,&uStack_70,0);
  iVar5 = (int)param_4;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  sceVu0ScaleVector(param_1,auStack_20,&uStack_30);
  sceVu0TransMatrix(param_4,param_4,auStack_20);
  sceVu0SubVector(auStack_20,param_7,param_5);
  uVar8 = sceVu0InnerProduct(&uStack_30,auStack_20);
  maybe_Vu0_UnitMatrix(param_3);
  sceVu0ScaleVector(0x3e800000,auStack_10,auStack_10);
  sceVu0TransMatrix(param_4,param_4,auStack_10);
  return uVar8;
}

// 0x00199d20  size 0x458
undefined4
CarModel_ComputeShadowQuad
          (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          uint param_6,long param_7,long param_8)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_180 [16];
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
  undefined1 auStack_130 [8];
  float fStack_128;
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [48];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [48];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  fVar5 = 1.0;
  uStack_4c = DAT_003128f4;
  uStack_48 = DAT_003128f8;
  uStack_44 = DAT_003128fc;
  if (param_7 == 0) {
    uStack_50 = 0x3f800000;
  }
  else {
    uStack_50 = 0xbf800000;
  }
  sceVu0CopyMatrix(auStack_40,param_4);
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  sceVu0ApplyMatrix(auStack_60,auStack_40,&uStack_50);
  fVar4 = (float)sceVu0InnerProduct(auStack_60,param_3 + 0x40);
  uVar2 = 0;
  if (param_6 != 0) {
    if (8 < param_6) {
      do {
        uVar2 = uVar2 + 8;
        fVar5 = fVar5 * fVar4 * fVar4 * fVar4 * fVar4 * fVar4 * fVar4 * fVar4 * fVar4;
      } while (uVar2 < param_6 - 8);
    }
    for (; uVar2 < param_6; uVar2 = uVar2 + 1) {
      fVar5 = fVar5 * fVar4;
    }
  }
  if (fVar5 <= 0.0) {
    uVar1 = 0;
  }
  else {
    sceVu0MulMatrix(auStack_a0,param_3 + 0x180,param_4);
    sceVu0ApplyMatrix(auStack_130,auStack_a0,param_5);
    fVar4 = (((float)*(int *)(param_3 + 0x80) *
             ((fStack_128 * 10.0 + *(float *)(param_3 + 0xa4) + 0.0) / *(float *)(param_3 + 0xa4)) *
             1.9209821) / 2.0) / *(float *)(param_3 + 0x8c);
    if (fVar4 < 1.0) {
      fVar4 = 1.0;
    }
    sceVu0Normalize(auStack_140,auStack_130);
    sceVu0ScaleVector(0x3f000000,auStack_140,auStack_140);
    sceVu0SubVector(auStack_130,auStack_130,auStack_140);
    maybe_Vu0_UnitMatrix(auStack_e0);
    if (param_8 == 0) {
      sceVu0MulMatrix(auStack_a0,param_4,param_2);
      sceVu0MulMatrix(auStack_a0,param_3 + 0x180,auStack_a0);
      sceVu0Normalize(auStack_180,&uStack_70);
      sceVu0InversMatrix(auStack_a0,auStack_a0);
      uStack_68 = 0;
      uStack_6c = 0;
      uStack_70 = 0;
      sceVu0ScaleVector(0xbf000000,auStack_180,auStack_180);
      sceVu0ApplyMatrix(auStack_180,auStack_a0,auStack_180);
      sceVu0TransMatrix(param_2,param_2,auStack_180);
    }
    else {
      uStack_150 = DAT_00312900;
      uStack_14c = DAT_00312904;
      uStack_148 = DAT_00312908;
      uStack_144 = DAT_0031290c;
      uStack_160 = DAT_00312910;
      uStack_168 = DAT_00312928;
      uStack_15c = DAT_00312914;
      uStack_158 = DAT_00312918;
      uStack_154 = DAT_0031291c;
      uStack_170 = DAT_00312920;
      uStack_16c = DAT_00312924;
      uStack_164 = DAT_0031292c;
      if (param_7 == 0) {
        if (*(int *)(param_3 + 0xb0) == 0) {
          sceVu0ViewScreenMatrix(auStack_e0,&uStack_150,&uStack_160,auStack_130);
        }
        else {
          sceVu0ViewScreenMatrix(auStack_e0,&uStack_150,&uStack_170,auStack_130);
        }
      }
      else if (*(int *)(param_3 + 0xb0) == 0) {
        sceVu0ViewScreenMatrix(auStack_e0,&uStack_150,&uStack_170,auStack_130);
      }
      else {
        sceVu0ViewScreenMatrix(auStack_e0,&uStack_150,&uStack_160,auStack_130);
      }
      sceVu0TransMatrix(auStack_e0,auStack_e0,auStack_130);
      sceVu0InversMatrix(auStack_120,param_3 + 0x180);
      sceVu0MulMatrix(param_4,auStack_120,auStack_e0);
      maybe_Vu0_UnitMatrix(param_2);
      pfVar3 = (float *)param_2;
      *pfVar3 = fVar5;
      pfVar3[5] = fVar5 * fVar4;
      pfVar3[10] = fVar5 * fVar4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// 0x0019a180  size 0xdc
uint CarModel_ComputeLod(float param_1,undefined8 param_2,int param_3,undefined8 param_4,
                        uint param_5,float *param_6)

{
  uint uVar1;
  undefined1 auStack_40 [56];
  float fStack_8;
  
  maybe_Vu0_UnitMatrix(auStack_40);
  sceVu0MulMatrix(auStack_40,auStack_40,param_4);
  sceVu0MulMatrix(auStack_40,param_3 + 0x180,auStack_40);
  if (0.0 < fStack_8) {
    uVar1 = 0;
    for (; (uVar1 < param_5 && (*(float *)(param_3 + 0x8c) / fStack_8 < *param_6));
        param_6 = param_6 + 1) {
      uVar1 = uVar1 + 1;
    }
  }
  else {
    uVar1 = param_5;
    if (-param_1 < fStack_8) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

// 0x0019a260  size 0x638
/* WARNING: Type propagation algorithm not settling */

void CarModel_DrawBody(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uStack_b0;
  int iStack_a0;
  int iStack_90;
  int iStack_80;
  uint uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  iVar8 = (int)param_2;
  puVar7 = (undefined4 *)(iVar8 + 0x100);
  iVar6 = iVar8 + 0xc0;
  bVar1 = *(int *)(iVar8 + 0x240) == 0;
  if (iRam00436354 != 0) {
    Pkt_Flush(iVar8 + 0x44,0x43635c);
  }
  TexSlot_Set(0,iRam00436354,uRam0043636c);
  uVar11 = 0;
  iStack_80 = 0;
  iVar5 = 0;
  iVar9 = (int)param_1;
  iStack_90 = iVar9;
  do {
    puVar10 = (uint *)(*(int *)(iVar9 + 0x504) + iStack_80 + 0x5a0);
    switch(uVar11) {
    case 0:
      uVar4 = *(uint *)(iVar9 + 0x110) & 4;
      break;
    case 1:
      uVar4 = *(uint *)(iVar9 + 0x110) & 8;
      break;
    case 2:
      uVar4 = *(uint *)(iVar9 + 0x110) & 0x10;
      break;
    case 3:
      uVar4 = *(uint *)(iVar9 + 0x110) & 9;
      break;
    case 4:
      uVar4 = *(uint *)(iVar9 + 0x110) & 10;
      break;
    case 5:
      uVar4 = *(uint *)(iVar9 + 0x110) & 4;
      break;
    case 6:
      uVar4 = *(uint *)(iVar9 + 0x110) & 0x20;
      break;
    default:
      goto switchD_0019a314_default;
    }
    if (uVar4 != 0) {
switchD_0019a314_default:
      uStack_70 = 0;
      iStack_a0 = iStack_90;
      do {
        sceVu0CopyMatrix(auStack_40,iVar6);
        if ((*puVar10 & 1) != 0) {
          if (*(int *)(iVar9 + 0x3f8) == 1) {
            puVar12 = puVar10 + 4;
            if ((cRam00430460 == '\x02') ||
               ((cRam00430460 == '\0' && (*(int *)(iVar8 + 0x458) != 0)))) {
              if (*(int *)(iVar8 + 0x240) == 0) {
                uStack_60 = *(undefined4 *)(iVar5 + *(int *)(iVar9 + 0x500) + 0x30);
              }
              else {
                uStack_60 = *(undefined4 *)(iVar5 + *(int *)(iVar9 + 0x500) + 0x4c);
              }
              iVar2 = *(int *)(iVar8 + 0x240);
            }
            else {
              uStack_60 = *(undefined4 *)(iVar5 + *(int *)(iVar9 + 0x500) + 0x30);
              iVar2 = *(int *)(iVar8 + 0x240);
            }
            if (iVar2 == 0) {
              maybe_Vu0_UnitMatrix(iVar6);
              sceVu0MulMatrix(iVar6,iVar9 + 0x120,iVar6);
              iVar2 = *(int *)(iVar8 + 0x240);
            }
            else {
              iVar2 = *(int *)(iVar8 + 0x240);
            }
            if (iVar2 != 0) {
              maybe_Vu0_UnitMatrix(puVar7);
              sceVu0TransMatrix(puVar7,puVar7,puVar12);
            }
            if (uVar11 - 5 < 2) {
              lVar3 = CarModel_ComputeShadowQuad
                                (param_1,puVar7,*(undefined4 *)(iVar8 + 0x244),iVar6,puVar12,1,0,
                                 bVar1);
            }
            else {
              lVar3 = CarModel_ComputeShadowQuad
                                (param_1,puVar7,*(undefined4 *)(iVar8 + 0x244),iVar6,puVar12,3,1,
                                 bVar1);
            }
            if (lVar3 == 0) {
              uVar13 = *puVar7;
            }
            else {
              Model_UpdateNodeMatrix(param_2,uStack_60);
              uVar13 = *puVar7;
            }
            *(undefined4 *)(iStack_a0 + 0x414) = uVar13;
          }
          else {
            if ((cRam00430460 == '\x02') ||
               ((cRam00430460 == '\0' && (*(int *)(iVar8 + 0x458) != 0)))) {
              if (*(int *)(iVar8 + 0x240) == 0) {
                uStack_b0 = *(undefined4 *)(iVar5 + *(int *)(iVar9 + 0x500) + 0x30);
              }
              else {
                uStack_b0 = *(undefined4 *)(iVar5 + *(int *)(iVar9 + 0x500) + 0x4c);
              }
              iVar2 = *(int *)(iVar8 + 0x240);
            }
            else {
              uStack_b0 = *(undefined4 *)(iVar5 + *(int *)(iVar9 + 0x500) + 0x30);
              iVar2 = *(int *)(iVar8 + 0x240);
            }
            if (iVar2 == 0) {
              maybe_Vu0_UnitMatrix(iVar6);
              sceVu0TransMatrix(iVar6,iVar6,
                                *(int *)(*(int *)(iVar9 + 0x504) + *(int *)(iVar8 + 0x458) * 100 +
                                        0x98) + 0x20);
              sceVu0MulMatrix(iVar6,iVar9 + 0x120,iVar6);
            }
            if (uVar11 - 5 < 2) {
              lVar3 = CarModel_ComputeShadowQuad
                                (param_1,puVar7,*(undefined4 *)(iVar8 + 0x244),iVar6,puVar10 + 4,1,0
                                 ,bVar1);
            }
            else {
              lVar3 = CarModel_ComputeShadowQuad
                                (param_1,puVar7,*(undefined4 *)(iVar8 + 0x244),iVar6,puVar10 + 4,3,1
                                 ,bVar1);
            }
            if (lVar3 != 0) {
              if (*(int *)(iVar8 + 0x240) != 0) {
                sceVu0TransMatrix(puVar7,puVar7,
                                  *(int *)(*(int *)(iVar9 + 0x504) + *(int *)(iVar8 + 0x458) * 100 +
                                          0x98) + 0x20);
              }
              Model_UpdateNodeMatrix(param_2,uStack_b0);
            }
          }
        }
        if ((*(int *)(iVar8 + 0x240) == 0) && (*(int *)(iVar9 + 0x490) != 0)) {
          uStack_50 = DAT_003128e0;
          uStack_4c = DAT_003128e4;
          uStack_48 = DAT_003128e8;
          uStack_44 = DAT_003128ec;
          if ((*puVar10 & 2) == 0) {
            uVar4 = *puVar10;
          }
          else {
            uVar13 = *(undefined4 *)(iVar5 + *(int *)(iVar9 + 0x500) + 0x68);
            maybe_Vu0_UnitMatrix(puVar7);
            sceVu0TransMatrix(puVar7,puVar7,puVar10 + 8);
            sceVu0CopyMatrix(iVar6,iVar9 + 0x120);
            *(undefined4 *)(iVar8 + 0xf0) = 0;
            *(undefined4 *)(iVar8 + 0xf4) = *(undefined4 *)(iVar8 + 0x460);
            *(undefined4 *)(iVar8 + 0xf8) = 0;
            sceVu0MulMatrix(iVar6,iVar8 + 0x470,iVar6);
            sceVu0TransMatrix(iVar6,iVar6,&uStack_50);
            Model_UpdateNodeMatrix(param_2,uVar13);
            uVar4 = *puVar10;
          }
          if ((uVar4 & 4) != 0) {
            uVar13 = *(undefined4 *)(iVar5 + *(int *)(iVar9 + 0x500) + 0x84);
            maybe_Vu0_UnitMatrix(puVar7);
            sceVu0TransMatrix(puVar7,puVar7,puVar10 + 0xc);
            sceVu0CopyMatrix(iVar6,iVar9 + 0x120);
            *(undefined4 *)(iVar8 + 0xf0) = 0;
            *(undefined4 *)(iVar8 + 0xf4) = *(undefined4 *)(iVar8 + 0x460);
            *(undefined4 *)(iVar8 + 0xf8) = 0;
            sceVu0MulMatrix(iVar6,iVar8 + 0x470,iVar6);
            sceVu0TransMatrix(iVar6,iVar6,&uStack_50);
            Model_UpdateNodeMatrix(param_2,uVar13);
          }
        }
        sceVu0CopyMatrix(iVar6,auStack_40);
        iStack_a0 = iStack_a0 + 4;
        uStack_70 = uStack_70 + 1;
        puVar10 = puVar10 + 0x10;
      } while (uStack_70 < 4);
    }
    uVar11 = uVar11 + 1;
    iStack_80 = iStack_80 + 0x100;
    iStack_90 = iStack_90 + 0x10;
    iVar5 = iVar5 + 4;
    if (6 < uVar11) {
      return;
    }
  } while( true );
}

// 0x0019a8a0  size 0x6ac
void CarModel_DrawParts(int param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float in_f21;
  float unaff_f20;
  int iStack_c0;
  int iStack_b0;
  int iStack_a0;
  int iStack_90;
  int iStack_80;
  int iStack_70;
  int iStack_60;
  undefined1 auStack_10 [16];
  
  iVar12 = (int)param_2;
  if (cRam00430460 == '\x02') {
    Vu0_Vec3Distance(auStack_10,param_1 + 0x150,*(undefined4 *)(iVar12 + 0x244));
    in_f21 = (float)sceVu0InnerProduct(param_1 + 0x120,auStack_10);
    unaff_f20 = (float)sceVu0InnerProduct(param_1 + 0x140,auStack_10);
  }
  if (iRam00436450 != 0) {
    Pkt_Flush(param_2,0x436458);
  }
  uVar13 = 0;
  iVar14 = 0;
  iStack_70 = 0;
  iStack_90 = 0;
  iVar9 = param_1;
  iStack_a0 = param_1;
  iStack_80 = param_1;
  iStack_60 = param_1;
  do {
    if (*(int *)(*(int *)(iVar9 + 0x510) + 0x7c) == 0) {
      iVar16 = *(int *)(iVar9 + 0x508);
    }
    else {
      Pkt_Flush(param_2,*(int *)(iVar9 + 0x510) + 0x84);
      iVar16 = *(int *)(iVar9 + 0x508);
    }
    if (*(int *)(iVar16 + 0x5c) != 0) {
      Pkt_Flush(param_2,iVar16 + 100);
    }
    uVar11 = 0;
    iVar10 = iVar12 + 0x100;
    iStack_b0 = 0;
    iStack_c0 = 0;
    iVar16 = iStack_60;
    iVar15 = iStack_a0;
    do {
      iVar4 = iVar16 + 0x1b0;
      iVar6 = *(int *)(param_1 + 0x504);
      bVar1 = *(byte *)(iStack_80 + uVar11 + 0x410);
      if (*(int *)(param_1 + 0x4a0) == 0) {
LAB_0019aa5c:
        maybe_Vu0_UnitMatrix(iVar10);
        if (*(int *)(iVar12 + 0x240) == 0) {
          sceVu0CopyMatrix(iVar12 + 0xc0,param_1 + 0x120);
        }
        if ((cRam00430460 == '\x02') || (*(int *)(param_1 + 0x498) != 0)) {
          sceVu0MulMatrix(iVar10,iVar10,iVar4);
          iVar6 = *(int *)(param_1 + 0x504);
        }
        else {
          sceVu0TransMatrix(iVar10,iVar10,iVar6 + iStack_70 + iStack_b0 + 0x510);
          iVar6 = *(int *)(param_1 + 0x504);
        }
        uVar2 = CarModel_ComputeLod(*(undefined4 *)(iVar6 + 0xcb0),param_1,
                                    *(undefined4 *)(iVar12 + 0x244),param_1 + 0x120,4,0x3128a0);
        *(undefined4 *)(iVar12 + 0x45c) = uVar2;
        if (iRam00436450 == 0) {
          iVar6 = *(int *)(param_1 + 0x528);
        }
        else {
          TexSlot_Set(0,iRam00436450,uRam00436468);
          iVar6 = *(int *)(param_1 + 0x528);
        }
        if ((*(int *)(iVar14 + iVar6 + 0x38) != 0) && (*(uint *)(iVar12 + 0x45c) < 3)) {
          Model_UpdateNodeMatrix(param_2,*(undefined4 *)(iStack_90 + iVar6 + iStack_c0 + 0x40));
        }
        if ((cRam00430460 == '\x02') || (*(int *)(param_1 + 0x498) != 0)) {
          sceVu0MulMatrix(iVar10,iVar4,iVar16 + 0x2b0);
          iVar6 = *(int *)(param_1 + 0x528);
        }
        else {
          sceVu0MulMatrix(iVar10,iVar10,iVar4);
          iVar6 = *(int *)(param_1 + 0x528);
        }
        if ((*(int *)(iVar14 + iVar6 + 0x38) != 0) && (*(uint *)(iVar12 + 0x45c) < 3)) {
          Model_UpdateNodeMatrix(param_2,*(undefined4 *)(iVar14 + iVar6 + 0x50));
        }
        iVar6 = iVar14 + *(int *)(param_1 + 0x528);
        if (*(int *)(iVar6 + 0x38) == 0) {
LAB_0019ab88:
          iVar6 = *(int *)(iVar15 + 0x400);
        }
        else {
          uVar2 = *(undefined4 *)(iVar6 + 0x58);
          *(undefined4 *)(*(int *)(iVar6 + 0x60) + 0x2c) = *(undefined4 *)(iVar15 + 0x3d0);
          if (2 < *(uint *)(iVar12 + 0x45c)) goto LAB_0019ab88;
          Model_UpdateNodeMatrix(param_2,uVar2);
          iVar6 = *(int *)(iVar15 + 0x400);
        }
        if (iVar6 != 0) {
          iVar6 = *(int *)(*(int *)(iVar9 + 0x508) + 0x5c);
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar12 + 0x240);
          }
          else {
            TexSlot_Set(0,iVar6,*(undefined4 *)(*(int *)(iVar9 + 0x508) + 0x74));
            iVar6 = *(int *)(iVar12 + 0x240);
          }
          if (iVar6 == 0) {
            if (*(byte *)(param_1 + 0x4e1) < 4) {
              *(uint *)(iVar12 + 0x45c) = (uint)*(byte *)(param_1 + 0x4e1);
            }
          }
          else if (*(byte *)(param_1 + 0x4e4) < 4) {
            *(uint *)(iVar12 + 0x45c) = (uint)*(byte *)(param_1 + 0x4e4);
          }
          uVar5 = uRam0036f2dc;
          if (uRam0036f2dc <= *(uint *)(iVar12 + 0x45c)) {
            uVar5 = *(uint *)(iVar12 + 0x45c);
          }
          uVar3 = uRam0036f2e0;
          if (uVar5 <= uRam0036f2e0) {
            uVar3 = uVar5;
          }
          *(uint *)(iVar12 + 0x45c) = uVar3;
          if (*(int *)(iVar12 + 0x45c) == 0) {
            *(int *)(iVar12 + 0xa4) = iVar12 + 0x3d8;
            *(undefined4 *)(iVar12 + 0xa8) = 1;
            if (*(int *)(iVar12 + 0x94) == 0) {
              iVar6 = *(int *)(iVar12 + 0x98);
            }
            else {
              maybe_Model_DrawSimple(param_2,0);
              iVar6 = *(int *)(iVar12 + 0x98);
            }
            if (iVar6 == 0) goto LAB_0019ac08;
            maybe_Model_DrawSimple(param_2,1);
            iVar6 = *(int *)(iVar12 + 0x45c);
          }
          else {
LAB_0019ac08:
            iVar6 = *(int *)(iVar12 + 0x45c);
          }
          Model_UpdateNodeMatrix
                    (param_2,*(undefined4 *)(*(int *)(iVar9 + 0x508) + iVar6 * 4 + 0x4c));
        }
        if (*(int *)(iVar15 + 0x400) != 0) {
          iVar6 = *(int *)(*(int *)(iVar9 + 0x510) + 0x7c);
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar12 + 0x240);
          }
          else {
            TexSlot_Set(0,iVar6,*(undefined4 *)(*(int *)(iVar9 + 0x510) + 0x94));
            iVar6 = *(int *)(iVar12 + 0x240);
          }
          if (iVar6 == 0) {
            if (*(byte *)(param_1 + 0x4e2) < 4) {
              *(uint *)(iVar12 + 0x45c) = (uint)*(byte *)(param_1 + 0x4e2);
            }
          }
          else if (*(byte *)(param_1 + 0x4e5) < 4) {
            *(uint *)(iVar12 + 0x45c) = (uint)*(byte *)(param_1 + 0x4e5);
          }
          uVar5 = uRam0036f2e4;
          if (uRam0036f2e4 <= *(uint *)(iVar12 + 0x45c)) {
            uVar5 = *(uint *)(iVar12 + 0x45c);
          }
          uVar3 = uRam0036f2e8;
          if (uVar5 <= uRam0036f2e8) {
            uVar3 = uVar5;
          }
          *(uint *)(iVar12 + 0x45c) = uVar3;
          if (*(int *)(iVar12 + 0x45c) == 0) {
            *(int *)(iVar12 + 0xa4) = iVar12 + 0x3d8;
            *(undefined4 *)(iVar12 + 0xa8) = 0;
            if (*(int *)(iVar12 + 0x94) == 0) {
              iVar6 = *(int *)(iVar12 + 0x98);
            }
            else {
              maybe_Model_DrawSimple(param_2,0);
              iVar6 = *(int *)(iVar12 + 0x98);
            }
            if (iVar6 == 0) goto LAB_0019aca4;
            maybe_Model_DrawSimple(param_2,1);
            iVar6 = *(int *)(iVar12 + 0x45c);
          }
          else {
LAB_0019aca4:
            iVar6 = *(int *)(iVar12 + 0x45c);
          }
          Model_UpdateNodeMatrix
                    (param_2,*(undefined4 *)
                              (*(int *)(iVar9 + 0x510) + iVar6 * 0xc + (uint)bVar1 * 4 + 0x4c));
        }
      }
      else {
        bVar7 = true;
        bVar8 = bVar7;
        if ((uVar13 == 0) && (0.0 < in_f21)) {
          bVar8 = false;
        }
        if ((uVar13 == 1) && (in_f21 < 0.0)) {
          bVar8 = false;
        }
        if ((uVar11 == 0) && (unaff_f20 < -0.1)) {
          bVar7 = false;
        }
        if ((uVar11 == 1) && (0.1 < unaff_f20)) {
          bVar7 = false;
        }
        if ((bVar8) || (bVar7)) goto LAB_0019aa5c;
      }
      uVar11 = uVar11 + 1;
      iVar16 = iVar16 + 0x40;
      iStack_b0 = iStack_b0 + 0x10;
      iStack_c0 = iStack_c0 + 4;
      iVar15 = iVar15 + 4;
    } while (uVar11 < 2);
    uVar13 = uVar13 + 1;
    iVar9 = iVar9 + 4;
    iStack_60 = iStack_60 + 0x80;
    iStack_70 = iStack_70 + 0x20;
    iStack_80 = iStack_80 + 2;
    iStack_90 = iStack_90 + 8;
    iStack_a0 = iStack_a0 + 8;
    iVar14 = iVar14 + 4;
    if (1 < uVar13) {
      return;
    }
  } while( true );
}

// 0x0019af50  size 0xe64
/* WARNING: Type propagation algorithm not settling */

undefined4 CarModel_DrawWheels(int param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  int iStack_100;
  int iStack_f0;
  int iStack_e0;
  int iStack_d0;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [64];
  undefined8 uStack_10;
  undefined *puStack_8;
  
  iVar13 = (int)param_2;
  iVar12 = iVar13 + 0x100;
  iVar9 = iVar13 + 0xc0;
  uVar19 = CarModel_ProjectShadow
                     (0x3c23d70a,param_1,iVar12,iVar13 + 0x470,param_1 + 0x170,0x3128b0,
                      param_1 + 0x150);
  *(undefined4 *)(iVar13 + 0x460) = uVar19;
  puVar11 = *(uint **)(*(int *)(iVar13 + 0x458) * 100 + *(int *)(param_1 + 0x504) + 0xe4);
  if ((*puVar11 & 0x10) == 0) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = puVar11 + 0x14;
  }
  sceVu0MulMatrix(auStack_50,*(int *)(iVar13 + 0x244) + 0x2c0,param_1 + 0x120);
  lVar5 = Vu0_TransformPointPersp(*(undefined4 *)(iVar13 + 0x244),auStack_50,puVar11 + 4);
  if (lVar5 == 0) {
    uVar19 = 0;
  }
  else {
    if (*(int *)(iVar13 + 0x240) == 0) {
      iVar7 = *(int *)(iVar13 + 0x458) * 100 + *(int *)(param_1 + 0x504);
      puVar11 = *(uint **)(iVar7 + 0xf8);
      puVar1 = *(uint **)(iVar7 + 0xf4);
      if ((cRam00430460 != '\x02') && (*(int *)(param_1 + 0x498) == 0)) {
        uVar15 = 0;
        iStack_e0 = 0;
        iStack_f0 = param_1;
        iStack_d0 = param_1;
        do {
          uVar16 = 0;
          iStack_100 = 0;
          iVar7 = iStack_d0;
          do {
            maybe_Vu0_SetUnitW(iVar7 + 0x170);
            sceVu0ApplyMatrix(iVar7 + 0x170,iVar9,
                              *(int *)(param_1 + 0x504) + iStack_e0 + iStack_100 + 0x510);
            uVar6 = uRam0036f2dc;
            if (uRam0036f2dc == 0) {
              uVar6 = 0;
            }
            uVar2 = uRam0036f2e0;
            if (uVar6 <= uRam0036f2e0) {
              uVar2 = uVar6;
            }
            puVar3 = *(uint **)(*(int *)(iStack_f0 + 0x508) + uVar2 * 4 + 0x4c);
            if ((*puVar3 & 0x10) == 0) {
              puVar3 = (uint *)0x0;
            }
            else {
              puVar3 = puVar3 + 0x14;
            }
            uVar16 = uVar16 + 1;
            iStack_100 = iStack_100 + 0x10;
            *(float *)(iVar7 + 0x174) =
                 *(float *)(iVar7 + 0x174) - ((float)puVar3[9] - (float)puVar3[5]) / 2.0;
            iVar7 = iVar7 + 0x10;
          } while (uVar16 < 2);
          uVar15 = uVar15 + 1;
          iStack_d0 = iStack_d0 + 0x20;
          iStack_e0 = iStack_e0 + 0x20;
          iStack_f0 = iStack_f0 + 4;
        } while (uVar15 < 2);
      }
      if ((puVar11 != (uint *)0x0) && (*(int *)(param_1 + 0x49c) == 1)) {
        sceVu0CopyMatrix(iVar9,param_1 + 0x120);
        uVar19 = CarModel_ProjectShadow
                           (0x3c23d70a,param_1,iVar12,iVar13 + 0x4c0,param_1 + 0x170,
                            *(int *)(iVar13 + 0x3d0) + 0x50,iVar13 + 0xf0);
        *(undefined4 *)(iVar13 + 0x4b0) = uVar19;
        *(undefined4 *)(iVar13 + 0xf0) = 0;
        *(undefined4 *)(iVar13 + 0xf4) = *(undefined4 *)(iVar13 + 0x4b0);
        *(undefined4 *)(iVar13 + 0xf8) = 0;
        sceVu0MulMatrix(iVar9,iVar13 + 0x4c0,iVar9);
        fVar20 = *(float *)(param_1 + 0x160);
        fVar21 = *(float *)(param_1 + 0x164);
        fVar18 = *(float *)(param_1 + 0x168);
        *puVar11 = *puVar11 | 0x20;
        *puVar11 = *puVar11 & 0xffffffbf;
        if ((*puVar11 & 0x10) == 0) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = puVar11 + 0x14;
        }
        if (puVar3 == (uint *)0x0) {
          uVar15 = 0;
          puVar8 = (uint *)0x0;
        }
        else {
          puVar8 = puVar3 + 0xc;
          uVar15 = puVar3[3];
        }
        if (uVar15 == 0) {
          iVar7 = *(int *)(iVar13 + 0x3d0);
        }
        else {
          do {
            uVar15 = uVar15 - 1;
            *puVar8 = *puVar8 | 0x80000;
            *puVar8 = *puVar8 | 0x400;
            puVar8[0x16] = 0x51001;
            puVar8[0x17] = 0;
            puVar8[0xb] = 0x3f800000;
            puVar8 = puVar8 + (puVar8[0x1e] + 1) * 4 + 0x28;
          } while (uVar15 != 0);
          iVar7 = *(int *)(iVar13 + 0x3d0);
        }
        *(float *)(iVar7 + 0xc) = (fVar18 + fVar20 + fVar21) / 3.0;
        Light_UpdateMatrices(*(undefined4 *)(iVar13 + 0x3d0));
        Model_UpdateNodeMatrix(param_2,puVar11);
        *(undefined4 *)(*(int *)(iVar13 + 0x3d0) + 0xc) = 0x3f800000;
        Light_UpdateMatrices(*(undefined4 *)(iVar13 + 0x3d0));
      }
      if ((((puVar11 != (uint *)0x0) && (iVar7 = *(int *)(param_1 + 0x4a4), iVar7 != 0)) &&
          (uVar15 = 0, iVar7 != 0)) && (iVar7 != 0)) {
        iVar7 = param_1;
        do {
          sceVu0CopyMatrix(iVar9,param_1 + 0x120);
          sceVu0SubVector(auStack_60,iVar13 + 0xf0,iVar7 + 0x4b0);
          sceVu0CopyMatrix(iVar9,param_1 + 0x120);
          uVar19 = CarModel_ProjectShadow
                             (0x3c23d70a,param_1,iVar12,iVar13 + 0x4c0,param_1 + 0x170,auStack_60,
                              iVar13 + 0xf0);
          *(undefined4 *)(iVar13 + 0x4b0) = uVar19;
          *(undefined4 *)(iVar13 + 0xf0) = 0;
          *(undefined4 *)(iVar13 + 0xf4) = *(undefined4 *)(iVar13 + 0x4b0);
          *(undefined4 *)(iVar13 + 0xf8) = 0;
          sceVu0MulMatrix(iVar9,iVar13 + 0x4c0,iVar9);
          fVar18 = (float)maybe_sceVu0InterVectorDist(auStack_60,iVar7 + 0x4b0,iVar13 + 0xf0);
          fVar18 = 30.0 - fVar18;
          if (fVar18 < 0.0) {
            fVar18 = 0.0;
          }
          *puVar11 = *puVar11 | 0x20;
          *puVar11 = *puVar11 & 0xffffffbf;
          if ((*puVar11 & 0x10) == 0) {
            puVar3 = (uint *)0x0;
          }
          else {
            puVar3 = puVar11 + 0x14;
          }
          if (puVar3 == (uint *)0x0) {
            uVar16 = 0;
            puVar8 = (uint *)0x0;
          }
          else {
            puVar8 = puVar3 + 0xc;
            uVar16 = puVar3[3];
          }
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar8 = *puVar8 | 0x80000;
            *puVar8 = *puVar8 | 0x400;
            puVar8[0x16] = 0x51001;
            puVar8[0x17] = 0;
            puVar8[0xb] = (uint)(fVar18 / 30.0);
            puVar8 = puVar8 + (puVar8[0x1e] + 1) * 4 + 0x28;
          }
          Model_UpdateNodeMatrix(param_2,puVar11);
          uVar15 = uVar15 + 1;
          iVar7 = iVar7 + 0x10;
        } while (uVar15 < *(uint *)(param_1 + 0x4a4));
      }
      if (puVar1 != (uint *)0x0) {
        sceVu0CopyMatrix(iVar9,param_1 + 0x120);
        *(undefined4 *)(iVar13 + 0xf0) = 0;
        *(undefined4 *)(iVar13 + 0xf4) = *(undefined4 *)(iVar13 + 0x460);
        *(undefined4 *)(iVar13 + 0xf8) = 0;
        sceVu0MulMatrix(iVar9,iVar13 + 0x470,iVar9);
        *puVar1 = *puVar1 | 0x20;
        *puVar1 = *puVar1 & 0xffffffbf;
        if ((*puVar1 & 0x10) == 0) {
          puVar11 = (uint *)0x0;
        }
        else {
          puVar11 = puVar1 + 0x14;
        }
        if (puVar11 == (uint *)0x0) {
          uVar15 = 0;
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = puVar11 + 0xc;
          uVar15 = puVar11[3];
        }
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar3 = *puVar3 | 0x80000;
          puVar3[0x16] = 0x51001;
          puVar3[0x17] = 0;
          puVar3 = puVar3 + (puVar3[0x1e] + 1) * 4 + 0x28;
        }
        Model_UpdateNodeMatrix(param_2,puVar1);
      }
    }
    if (cRam00430460 == '\x02') {
      uStack_10 = DAT_003128c0;
      puStack_8 = PTR_Pkt_Flush_Wrap_003128c8;
    }
    else {
      uStack_10 = DAT_003128d0;
      puStack_8 = PTR_Pkt_AppendData_Wrap_003128d8;
    }
    iVar7 = *(int *)(param_1 + 0x504) + *(int *)(iVar13 + 0x458) * 0x1c;
    puVar17 = (undefined4 *)(iVar7 + 0x2b4);
    piVar14 = (int *)(iVar7 + 0x340);
    cVar10 = *(int *)(iVar7 + 0x2b4) != 0;
    if ((bool)cVar10) {
      TexSlot_Set(0,*(int *)(iVar7 + 0x2b4),*(undefined4 *)(iVar7 + 0x2cc));
      __ptmf_scall(param_2,1,iVar7 + 700);
    }
    if (*piVar14 != 0) {
      TexSlot_Set(cVar10,*piVar14,*(undefined4 *)(iVar7 + 0x358));
      __ptmf_scall(param_2,0,iVar7 + 0x348);
      cVar10 = cVar10 + '\x01';
    }
    if (*(int *)(iVar7 + 0x3cc) != 0) {
      TexSlot_Set(cVar10,*(int *)(iVar7 + 0x3cc),*(undefined4 *)(iVar7 + 0x3e4));
      __ptmf_scall(param_2,0,iVar7 + 0x3d4);
      cVar10 = cVar10 + '\x01';
    }
    if (*(int *)(iVar7 + 0x458) == 0) {
      uVar15 = *(uint *)(iVar13 + 0x458);
    }
    else {
      TexSlot_Set(cVar10,*(int *)(iVar7 + 0x458),*(undefined4 *)(iVar7 + 0x470));
      __ptmf_scall(param_2,1,iVar7 + 0x460);
      uVar15 = *(uint *)(iVar13 + 0x458);
    }
    if (uVar15 < 2) {
      iVar7 = *(int *)(iVar13 + 0x458);
    }
    else {
      puVar17 = (undefined4 *)(*(int *)(param_1 + 0x504) + 0x2d0);
      __ptmf_scall(param_2,1,*(int *)(param_1 + 0x504) + 0x2d8);
      iVar7 = *(int *)(iVar13 + 0x458);
    }
    if (iVar7 - 2U < 2) {
      piVar14 = (int *)(*(int *)(param_1 + 0x504) + 0x35c);
      __ptmf_scall(param_2,0,*(int *)(param_1 + 0x504) + 0x364);
      iVar7 = *(int *)(param_1 + 0x3f8);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x3f8);
    }
    if (iVar7 == 0) {
      iVar7 = *(int *)(*(int *)(iVar13 + 0x458) * 100 + *(int *)(param_1 + 0x504) + 0x98);
      if (*(int *)(iVar13 + 0x240) == 0) {
        maybe_Vu0_UnitMatrix(iVar9);
        if (cRam00430460 != '\x02') {
          sceVu0TransMatrix(iVar9,iVar9,iVar7 + 0x20);
        }
        sceVu0MulMatrix(iVar9,param_1 + 0x120,iVar9);
      }
      else if (cRam00430460 != '\x02') {
        maybe_Vu0_UnitMatrix(auStack_a0);
        sceVu0TransMatrix(auStack_a0,auStack_a0,iVar7 + 0x20);
        sceVu0MulMatrix(iVar9,iVar9,auStack_a0);
      }
    }
    else if (*(int *)(iVar13 + 0x240) == 0) {
      maybe_Vu0_UnitMatrix(iVar9);
      sceVu0MulMatrix(iVar9,param_1 + 0x120,iVar9);
    }
    *(int *)(iVar13 + 0xa4) = iVar13 + 0x3d8;
    *(undefined4 *)(iVar13 + 0xa8) = 1;
    if (*(int *)(iVar13 + 0x94) == 0) {
      iVar9 = *(int *)(iVar13 + 0x98);
    }
    else {
      maybe_Model_DrawSimple(param_2,0);
      iVar9 = *(int *)(iVar13 + 0x98);
    }
    if (iVar9 != 0) {
      maybe_Model_DrawSimple(param_2,1);
    }
    uVar15 = 0;
    iVar7 = 0;
    iVar9 = param_1;
    do {
      puVar11 = *(uint **)(*(int *)(param_1 + 0x504) + *(int *)(iVar13 + 0x458) * 100 + iVar7 + 0x98
                          );
      if (((puVar11 != (uint *)0x0) && ((*puVar11 & 0x10) != 0)) &&
         ((cRam00430460 != '\x02' ||
          ((uVar15 != 3 ||
           (fVar18 = (float)sceVu0InnerProduct(param_1 + 0x120,*(int *)(iVar13 + 0x244) + 0x40),
           0.0 <= fVar18)))))) {
        if (1 < *(uint *)(iVar13 + 0x458)) {
          if ((uVar15 < 7) || (0x10 < uVar15)) {
            iVar4 = *(int *)(param_1 + 0x504) + *(uint *)(iVar13 + 0x458) * 0x1c;
            TexSlot_Set(0,*(undefined4 *)(iVar4 + 0x3cc),*(undefined4 *)(iVar4 + 0x3e4));
          }
          else {
            TexSlot_Set(0,*puVar17,puVar17[6]);
          }
        }
        switch(uVar15) {
        case 7:
          uVar16 = *(uint *)(param_1 + 0x110) & 4;
          break;
        case 8:
          uVar16 = *(uint *)(param_1 + 0x110) & 8;
          break;
        case 9:
          uVar16 = *(uint *)(param_1 + 0x110) & 0x10;
          break;
        case 10:
          uVar16 = *(uint *)(param_1 + 0x110) & 9;
          break;
        case 0xb:
          uVar16 = *(uint *)(param_1 + 0x110) & 10;
          break;
        case 0xc:
          uVar16 = *(uint *)(param_1 + 0x110) & 4;
          break;
        case 0xd:
          uVar16 = *(uint *)(param_1 + 0x110) & 0x20;
          break;
        case 0xe:
          uVar16 = *(uint *)(param_1 + 0x110) & 0x40;
          break;
        case 0xf:
          uVar16 = *(uint *)(param_1 + 0x110) & 0x80;
          break;
        case 0x10:
          uVar16 = *(uint *)(param_1 + 0x110) & 0x100;
          break;
        default:
          goto switchD_0019b78c_default;
        }
        if (uVar16 != 0) {
switchD_0019b78c_default:
          if (((uVar15 != 0x11) && (uVar15 != 0x17)) && (uVar15 != 0x18)) {
            if ((uVar15 - 0xf < 2) &&
               (iVar4 = *(int *)(*(int *)(param_1 + 0x504) + *(int *)(iVar13 + 0x458) * 8 + iVar7 +
                                0x250), iVar4 != 0)) {
              *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(iVar9 + 0x3b4);
            }
            maybe_Vu0_UnitMatrix(iVar12);
            if (uVar15 == 0x15) {
              *(int *)(iVar13 + 0xa4) = iVar13 + 0x3d8;
              *(undefined4 *)(iVar13 + 0xa8) = 0;
              if (*(int *)(iVar13 + 0x94) != 0) {
                maybe_Model_DrawSimple(param_2,0);
              }
              if (*(int *)(iVar13 + 0x98) != 0) {
                maybe_Model_DrawSimple(param_2,1);
              }
            }
            else if (uVar15 == 6) {
              maybe_Vu0_RotMatrixZ(puVar11[0xc],iVar12,iVar12);
              maybe_Vu0_RotMatrixY(puVar11[0xd],iVar12,iVar12);
              maybe_Vu0_RotMatrixX(puVar11[0xe],iVar12,iVar12);
              maybe_sceVu0ScaleVectorXYZ(*(undefined4 *)(param_1 + 0x48c),auStack_c0,puVar11 + 8);
              sceVu0TransMatrix(iVar12,iVar12,auStack_c0);
            }
            else if ((uVar15 == 2) || (uVar15 == 1)) {
              maybe_sceVu0ScaleVectorXYZ(*(undefined4 *)(param_1 + 0x484),&uStack_b0,puVar11 + 0xc);
              maybe_Vu0_RotMatrixZ(uStack_b0,iVar12,iVar12);
              maybe_Vu0_RotMatrixY(uStack_ac,iVar12,iVar12);
              maybe_Vu0_RotMatrixX(uStack_a8,iVar12,iVar12);
              sceVu0TransMatrix(iVar12,iVar12,puVar11 + 8);
            }
            else {
              maybe_Vu0_RotMatrixZ(puVar11[0xc],iVar12,iVar12);
              maybe_Vu0_RotMatrixY(puVar11[0xd],iVar12,iVar12);
              maybe_Vu0_RotMatrixX(puVar11[0xe],iVar12,iVar12);
              sceVu0TransMatrix(iVar12,iVar12,puVar11 + 8);
            }
            Model_UpdateNodeMatrix(param_2,puVar11);
          }
        }
      }
      uVar15 = uVar15 + 1;
      iVar7 = iVar7 + 4;
      iVar9 = iVar9 + 4;
    } while (uVar15 < 0x19);
    if (*(int *)(param_1 + 0x494) == 1) {
      if (*(int *)(iVar13 + 0x458) - 2U < 2) {
        TexSlot_Set(1,*piVar14,piVar14[6]);
        iVar9 = *(int *)(iVar13 + 0x458);
      }
      else {
        iVar9 = *(int *)(iVar13 + 0x458);
      }
      puVar11 = *(uint **)(iVar9 * 100 + *(int *)(param_1 + 0x504) + 0xdc);
      if ((puVar11 != (uint *)0x0) && ((*puVar11 & 0x10) != 0)) {
        maybe_Vu0_UnitMatrix(iVar12);
        Model_UpdateNodeMatrix(param_2,puVar11);
      }
    }
    uVar19 = 1;
  }
  return uVar19;
}

// 0x0019bdc0  size 0x1c
void Pkt_AppendData_Wrap(int param_1,uint param_2,undefined8 param_3)

{
  Pkt_AppendData(param_1 + (param_2 & 0xff) * 0x44,param_3);
  return;
}

// 0x0019bde0  size 0x1c
void Pkt_Flush_Wrap(int param_1,uint param_2,undefined8 param_3)

{
  Pkt_Flush(param_1 + (param_2 & 0xff) * 0x44,param_3);
  return;
}

// 0x0019be00  size 0x4d4
void CarModel_SetupLighting(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_10 [16];
  
  *(undefined4 *)(param_2 + 0x240) = param_3;
  uVar5 = uRam0043618c;
  uVar4 = uRam00436188;
  uVar3 = uRam00436184;
  if (cRam00430460 == '\x02') {
    *(undefined4 *)(param_2 + 0x250) = uRam00436180;
    *(undefined4 *)(param_2 + 0x254) = uVar3;
    *(undefined4 *)(param_2 + 600) = uVar4;
    *(undefined4 *)(param_2 + 0x25c) = uVar5;
    uVar17 = uRam004361cc;
    uVar16 = uRam004361c8;
    uVar15 = uRam004361c4;
    uVar14 = uRam004361c0;
    uVar13 = uRam004361bc;
    uVar12 = uRam004361b8;
    uVar11 = uRam004361b4;
    uVar10 = uRam004361b0;
    uVar9 = uRam004361ac;
    uVar8 = uRam004361a8;
    uVar7 = uRam004361a4;
    uVar6 = uRam004361a0;
    uVar5 = uRam0043619c;
    uVar4 = uRam00436198;
    uVar3 = uRam00436194;
    *(undefined4 *)(param_2 + 0x260) = uRam00436190;
    *(undefined4 *)(param_2 + 0x264) = uVar3;
    *(undefined4 *)(param_2 + 0x268) = uVar4;
    *(undefined4 *)(param_2 + 0x26c) = uVar5;
    *(undefined4 *)(param_2 + 0x270) = uVar6;
    *(undefined4 *)(param_2 + 0x274) = uVar7;
    *(undefined4 *)(param_2 + 0x278) = uVar8;
    *(undefined4 *)(param_2 + 0x27c) = uVar9;
    *(undefined4 *)(param_2 + 0x280) = uVar10;
    *(undefined4 *)(param_2 + 0x284) = uVar11;
    *(undefined4 *)(param_2 + 0x288) = uVar12;
    *(undefined4 *)(param_2 + 0x28c) = uVar13;
    *(undefined4 *)(param_2 + 0x290) = uVar14;
    *(undefined4 *)(param_2 + 0x294) = uVar15;
    *(undefined4 *)(param_2 + 0x298) = uVar16;
    *(undefined4 *)(param_2 + 0x29c) = uVar17;
    uVar13 = uRam004361fc;
    uVar12 = uRam004361f8;
    uVar11 = uRam004361f4;
    uVar10 = uRam004361f0;
    uVar9 = uRam004361ec;
    uVar8 = uRam004361e8;
    uVar7 = uRam004361e4;
    uVar6 = uRam004361e0;
    uVar5 = uRam004361dc;
    uVar4 = uRam004361d8;
    uVar3 = uRam004361d4;
    *(undefined4 *)(param_2 + 0x2a0) = uRam004361d0;
    *(undefined4 *)(param_2 + 0x2a4) = uVar3;
    *(undefined4 *)(param_2 + 0x2a8) = uVar4;
    *(undefined4 *)(param_2 + 0x2ac) = uVar5;
    *(undefined4 *)(param_2 + 0x2b0) = uVar6;
    *(undefined4 *)(param_2 + 0x2b4) = uVar7;
    *(undefined4 *)(param_2 + 0x2b8) = uVar8;
    *(undefined4 *)(param_2 + 700) = uVar9;
    *(undefined4 *)(param_2 + 0x2c0) = uVar10;
    *(undefined4 *)(param_2 + 0x2c4) = uVar11;
    *(undefined4 *)(param_2 + 0x2c8) = uVar12;
    *(undefined4 *)(param_2 + 0x2cc) = uVar13;
    uVar13 = uRam0043622c;
    uVar12 = uRam00436228;
    uVar11 = uRam00436224;
    uVar10 = uRam00436220;
    uVar9 = uRam0043621c;
    uVar8 = uRam00436218;
    uVar7 = uRam00436214;
    uVar6 = uRam00436210;
    uVar5 = uRam0043620c;
    uVar4 = uRam00436208;
    uVar3 = uRam00436204;
    *(undefined4 *)(param_2 + 0x2d0) = uRam00436200;
    *(undefined4 *)(param_2 + 0x2d4) = uVar3;
    *(undefined4 *)(param_2 + 0x2d8) = uVar4;
    *(undefined4 *)(param_2 + 0x2dc) = uVar5;
    *(undefined4 *)(param_2 + 0x2e0) = uVar6;
    *(undefined4 *)(param_2 + 0x2e4) = uVar7;
    *(undefined4 *)(param_2 + 0x2e8) = uVar8;
    *(undefined4 *)(param_2 + 0x2ec) = uVar9;
    *(undefined4 *)(param_2 + 0x2f0) = uVar10;
    *(undefined4 *)(param_2 + 0x2f4) = uVar11;
    *(undefined4 *)(param_2 + 0x2f8) = uVar12;
    *(undefined4 *)(param_2 + 0x2fc) = uVar13;
    uVar17 = uRam0043626c;
    uVar16 = uRam00436268;
    uVar15 = uRam00436264;
    uVar14 = uRam00436260;
    uVar13 = uRam0043625c;
    uVar12 = uRam00436258;
    uVar11 = uRam00436254;
    uVar10 = uRam00436250;
    uVar9 = uRam0043624c;
    uVar8 = uRam00436248;
    uVar7 = uRam00436244;
    uVar6 = uRam00436240;
    uVar5 = uRam0043623c;
    uVar4 = uRam00436238;
    uVar3 = uRam00436234;
    *(undefined4 *)(param_2 + 0x300) = uRam00436230;
    *(undefined4 *)(param_2 + 0x304) = uVar3;
    *(undefined4 *)(param_2 + 0x308) = uVar4;
    *(undefined4 *)(param_2 + 0x30c) = uVar5;
    *(undefined4 *)(param_2 + 0x310) = uVar6;
    *(undefined4 *)(param_2 + 0x314) = uVar7;
    *(undefined4 *)(param_2 + 0x318) = uVar8;
    *(undefined4 *)(param_2 + 0x31c) = uVar9;
    *(undefined4 *)(param_2 + 800) = uVar10;
    *(undefined4 *)(param_2 + 0x324) = uVar11;
    *(undefined4 *)(param_2 + 0x328) = uVar12;
    *(undefined4 *)(param_2 + 0x32c) = uVar13;
    *(undefined4 *)(param_2 + 0x330) = uVar14;
    *(undefined4 *)(param_2 + 0x334) = uVar15;
    *(undefined4 *)(param_2 + 0x338) = uVar16;
    *(undefined4 *)(param_2 + 0x33c) = uVar17;
    uVar17 = uRam004362ac;
    uVar16 = uRam004362a8;
    uVar15 = uRam004362a4;
    uVar14 = uRam004362a0;
    uVar13 = uRam0043629c;
    uVar12 = uRam00436298;
    uVar11 = uRam00436294;
    uVar10 = uRam00436290;
    uVar9 = uRam0043628c;
    uVar8 = uRam00436288;
    uVar7 = uRam00436284;
    uVar6 = uRam00436280;
    uVar5 = uRam0043627c;
    uVar4 = uRam00436278;
    uVar3 = uRam00436274;
    *(undefined4 *)(param_2 + 0x340) = uRam00436270;
    *(undefined4 *)(param_2 + 0x344) = uVar3;
    *(undefined4 *)(param_2 + 0x348) = uVar4;
    *(undefined4 *)(param_2 + 0x34c) = uVar5;
    *(undefined4 *)(param_2 + 0x350) = uVar6;
    *(undefined4 *)(param_2 + 0x354) = uVar7;
    *(undefined4 *)(param_2 + 0x358) = uVar8;
    *(undefined4 *)(param_2 + 0x35c) = uVar9;
    *(undefined4 *)(param_2 + 0x360) = uVar10;
    *(undefined4 *)(param_2 + 0x364) = uVar11;
    *(undefined4 *)(param_2 + 0x368) = uVar12;
    *(undefined4 *)(param_2 + 0x36c) = uVar13;
    *(undefined4 *)(param_2 + 0x370) = uVar14;
    *(undefined4 *)(param_2 + 0x374) = uVar15;
    *(undefined4 *)(param_2 + 0x378) = uVar16;
    *(undefined4 *)(param_2 + 0x37c) = uVar17;
    uVar17 = uRam004362ec;
    uVar16 = uRam004362e8;
    uVar15 = uRam004362e4;
    uVar14 = uRam004362e0;
    uVar13 = uRam004362dc;
    uVar12 = uRam004362d8;
    uVar11 = uRam004362d4;
    uVar10 = uRam004362d0;
    uVar9 = uRam004362cc;
    uVar8 = uRam004362c8;
    uVar7 = uRam004362c4;
    uVar6 = uRam004362c0;
    uVar5 = uRam004362bc;
    uVar4 = uRam004362b8;
    uVar3 = uRam004362b4;
    *(undefined4 *)(param_2 + 0x380) = uRam004362b0;
    *(undefined4 *)(param_2 + 900) = uVar3;
    *(undefined4 *)(param_2 + 0x388) = uVar4;
    *(undefined4 *)(param_2 + 0x38c) = uVar5;
    *(undefined4 *)(param_2 + 0x390) = uVar6;
    *(undefined4 *)(param_2 + 0x394) = uVar7;
    *(undefined4 *)(param_2 + 0x398) = uVar8;
    *(undefined4 *)(param_2 + 0x39c) = uVar9;
    *(undefined4 *)(param_2 + 0x3a0) = uVar10;
    *(undefined4 *)(param_2 + 0x3a4) = uVar11;
    *(undefined4 *)(param_2 + 0x3a8) = uVar12;
    *(undefined4 *)(param_2 + 0x3ac) = uVar13;
    *(undefined4 *)(param_2 + 0x3b0) = uVar14;
    *(undefined4 *)(param_2 + 0x3b4) = uVar15;
    *(undefined4 *)(param_2 + 0x3b8) = uVar16;
    *(undefined4 *)(param_2 + 0x3bc) = uVar17;
    *(undefined1 *)(param_2 + 0x3c0) = uRam004362f0;
    sceVu0MulVector(auStack_10,0x436180,param_1 + 0x160);
    sceVu0InterVector(0x3ecccccd,param_2 + 0x250,0x436180,auStack_10);
    sceVu0MulVector(param_2 + 0x2d0,0x436200,param_1 + 0x160);
    sceVu0MulVector(param_2 + 0x2e0,0x436210,param_1 + 0x160);
    sceVu0CopyVector(param_2 + 0x2f0,param_1 + 0x3b0);
    sceVu0CopyVector(param_2 + 0x2c0,param_1 + 0x3c0);
    *(int *)(param_2 + 0x3d0) = param_2 + 0x250;
  }
  else if (cRam00430460 == '\x01') {
    *(undefined4 *)(param_2 + 0x250) = uRam00436180;
    *(undefined4 *)(param_2 + 0x254) = uVar3;
    *(undefined4 *)(param_2 + 600) = uVar4;
    *(undefined4 *)(param_2 + 0x25c) = uVar5;
    uVar17 = uRam004361cc;
    uVar16 = uRam004361c8;
    uVar15 = uRam004361c4;
    uVar14 = uRam004361c0;
    uVar13 = uRam004361bc;
    uVar12 = uRam004361b8;
    uVar11 = uRam004361b4;
    uVar10 = uRam004361b0;
    uVar9 = uRam004361ac;
    uVar8 = uRam004361a8;
    uVar7 = uRam004361a4;
    uVar6 = uRam004361a0;
    uVar5 = uRam0043619c;
    uVar4 = uRam00436198;
    uVar3 = uRam00436194;
    *(undefined4 *)(param_2 + 0x260) = uRam00436190;
    *(undefined4 *)(param_2 + 0x264) = uVar3;
    *(undefined4 *)(param_2 + 0x268) = uVar4;
    *(undefined4 *)(param_2 + 0x26c) = uVar5;
    *(undefined4 *)(param_2 + 0x270) = uVar6;
    *(undefined4 *)(param_2 + 0x274) = uVar7;
    *(undefined4 *)(param_2 + 0x278) = uVar8;
    *(undefined4 *)(param_2 + 0x27c) = uVar9;
    *(undefined4 *)(param_2 + 0x280) = uVar10;
    *(undefined4 *)(param_2 + 0x284) = uVar11;
    *(undefined4 *)(param_2 + 0x288) = uVar12;
    *(undefined4 *)(param_2 + 0x28c) = uVar13;
    *(undefined4 *)(param_2 + 0x290) = uVar14;
    *(undefined4 *)(param_2 + 0x294) = uVar15;
    *(undefined4 *)(param_2 + 0x298) = uVar16;
    *(undefined4 *)(param_2 + 0x29c) = uVar17;
    uVar13 = uRam004361fc;
    uVar12 = uRam004361f8;
    uVar11 = uRam004361f4;
    uVar10 = uRam004361f0;
    uVar9 = uRam004361ec;
    uVar8 = uRam004361e8;
    uVar7 = uRam004361e4;
    uVar6 = uRam004361e0;
    uVar5 = uRam004361dc;
    uVar4 = uRam004361d8;
    uVar3 = uRam004361d4;
    *(undefined4 *)(param_2 + 0x2a0) = uRam004361d0;
    *(undefined4 *)(param_2 + 0x2a4) = uVar3;
    *(undefined4 *)(param_2 + 0x2a8) = uVar4;
    *(undefined4 *)(param_2 + 0x2ac) = uVar5;
    *(undefined4 *)(param_2 + 0x2b0) = uVar6;
    *(undefined4 *)(param_2 + 0x2b4) = uVar7;
    *(undefined4 *)(param_2 + 0x2b8) = uVar8;
    *(undefined4 *)(param_2 + 700) = uVar9;
    *(undefined4 *)(param_2 + 0x2c0) = uVar10;
    *(undefined4 *)(param_2 + 0x2c4) = uVar11;
    *(undefined4 *)(param_2 + 0x2c8) = uVar12;
    *(undefined4 *)(param_2 + 0x2cc) = uVar13;
    uVar13 = uRam0043622c;
    uVar12 = uRam00436228;
    uVar11 = uRam00436224;
    uVar10 = uRam00436220;
    uVar9 = uRam0043621c;
    uVar8 = uRam00436218;
    uVar7 = uRam00436214;
    uVar6 = uRam00436210;
    uVar5 = uRam0043620c;
    uVar4 = uRam00436208;
    uVar3 = uRam00436204;
    *(undefined4 *)(param_2 + 0x2d0) = uRam00436200;
    *(undefined4 *)(param_2 + 0x2d4) = uVar3;
    *(undefined4 *)(param_2 + 0x2d8) = uVar4;
    *(undefined4 *)(param_2 + 0x2dc) = uVar5;
    *(undefined4 *)(param_2 + 0x2e0) = uVar6;
    *(undefined4 *)(param_2 + 0x2e4) = uVar7;
    *(undefined4 *)(param_2 + 0x2e8) = uVar8;
    *(undefined4 *)(param_2 + 0x2ec) = uVar9;
    *(undefined4 *)(param_2 + 0x2f0) = uVar10;
    *(undefined4 *)(param_2 + 0x2f4) = uVar11;
    *(undefined4 *)(param_2 + 0x2f8) = uVar12;
    *(undefined4 *)(param_2 + 0x2fc) = uVar13;
    uVar17 = uRam0043626c;
    uVar16 = uRam00436268;
    uVar15 = uRam00436264;
    uVar14 = uRam00436260;
    uVar13 = uRam0043625c;
    uVar12 = uRam00436258;
    uVar11 = uRam00436254;
    uVar10 = uRam00436250;
    uVar9 = uRam0043624c;
    uVar8 = uRam00436248;
    uVar7 = uRam00436244;
    uVar6 = uRam00436240;
    uVar5 = uRam0043623c;
    uVar4 = uRam00436238;
    uVar3 = uRam00436234;
    *(undefined4 *)(param_2 + 0x300) = uRam00436230;
    *(undefined4 *)(param_2 + 0x304) = uVar3;
    *(undefined4 *)(param_2 + 0x308) = uVar4;
    *(undefined4 *)(param_2 + 0x30c) = uVar5;
    *(undefined4 *)(param_2 + 0x310) = uVar6;
    *(undefined4 *)(param_2 + 0x314) = uVar7;
    *(undefined4 *)(param_2 + 0x318) = uVar8;
    *(undefined4 *)(param_2 + 0x31c) = uVar9;
    *(undefined4 *)(param_2 + 800) = uVar10;
    *(undefined4 *)(param_2 + 0x324) = uVar11;
    *(undefined4 *)(param_2 + 0x328) = uVar12;
    *(undefined4 *)(param_2 + 0x32c) = uVar13;
    *(undefined4 *)(param_2 + 0x330) = uVar14;
    *(undefined4 *)(param_2 + 0x334) = uVar15;
    *(undefined4 *)(param_2 + 0x338) = uVar16;
    *(undefined4 *)(param_2 + 0x33c) = uVar17;
    uVar17 = uRam004362ac;
    uVar16 = uRam004362a8;
    uVar15 = uRam004362a4;
    uVar14 = uRam004362a0;
    uVar13 = uRam0043629c;
    uVar12 = uRam00436298;
    uVar11 = uRam00436294;
    uVar10 = uRam00436290;
    uVar9 = uRam0043628c;
    uVar8 = uRam00436288;
    uVar7 = uRam00436284;
    uVar6 = uRam00436280;
    uVar5 = uRam0043627c;
    uVar4 = uRam00436278;
    uVar3 = uRam00436274;
    *(undefined4 *)(param_2 + 0x340) = uRam00436270;
    *(undefined4 *)(param_2 + 0x344) = uVar3;
    *(undefined4 *)(param_2 + 0x348) = uVar4;
    *(undefined4 *)(param_2 + 0x34c) = uVar5;
    *(undefined4 *)(param_2 + 0x350) = uVar6;
    *(undefined4 *)(param_2 + 0x354) = uVar7;
    *(undefined4 *)(param_2 + 0x358) = uVar8;
    *(undefined4 *)(param_2 + 0x35c) = uVar9;
    *(undefined4 *)(param_2 + 0x360) = uVar10;
    *(undefined4 *)(param_2 + 0x364) = uVar11;
    *(undefined4 *)(param_2 + 0x368) = uVar12;
    *(undefined4 *)(param_2 + 0x36c) = uVar13;
    *(undefined4 *)(param_2 + 0x370) = uVar14;
    *(undefined4 *)(param_2 + 0x374) = uVar15;
    *(undefined4 *)(param_2 + 0x378) = uVar16;
    *(undefined4 *)(param_2 + 0x37c) = uVar17;
    uVar17 = uRam004362ec;
    uVar16 = uRam004362e8;
    uVar15 = uRam004362e4;
    uVar14 = uRam004362e0;
    uVar13 = uRam004362dc;
    uVar12 = uRam004362d8;
    uVar11 = uRam004362d4;
    uVar10 = uRam004362d0;
    uVar9 = uRam004362cc;
    uVar8 = uRam004362c8;
    uVar7 = uRam004362c4;
    uVar6 = uRam004362c0;
    uVar5 = uRam004362bc;
    uVar4 = uRam004362b8;
    uVar3 = uRam004362b4;
    *(undefined4 *)(param_2 + 0x380) = uRam004362b0;
    *(undefined4 *)(param_2 + 900) = uVar3;
    *(undefined4 *)(param_2 + 0x388) = uVar4;
    *(undefined4 *)(param_2 + 0x38c) = uVar5;
    *(undefined4 *)(param_2 + 0x390) = uVar6;
    *(undefined4 *)(param_2 + 0x394) = uVar7;
    *(undefined4 *)(param_2 + 0x398) = uVar8;
    *(undefined4 *)(param_2 + 0x39c) = uVar9;
    *(undefined4 *)(param_2 + 0x3a0) = uVar10;
    *(undefined4 *)(param_2 + 0x3a4) = uVar11;
    *(undefined4 *)(param_2 + 0x3a8) = uVar12;
    *(undefined4 *)(param_2 + 0x3ac) = uVar13;
    *(undefined4 *)(param_2 + 0x3b0) = uVar14;
    *(undefined4 *)(param_2 + 0x3b4) = uVar15;
    *(undefined4 *)(param_2 + 0x3b8) = uVar16;
    *(undefined4 *)(param_2 + 0x3bc) = uVar17;
    *(undefined1 *)(param_2 + 0x3c0) = uRam004362f0;
    sceVu0MulVector(param_2 + 0x250,0x436180,param_1 + 0x160);
    *(int *)(param_2 + 0x3d0) = param_2 + 0x250;
  }
  else {
    *(undefined4 *)(param_2 + 0x3d0) = 0x436180;
    puVar1 = *(undefined4 **)(param_2 + 0x3d0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *(undefined4 *)(param_2 + 0x250) = *puVar1;
    *(undefined4 *)(param_2 + 0x254) = uVar3;
    *(undefined4 *)(param_2 + 600) = uVar4;
    *(undefined4 *)(param_2 + 0x25c) = uVar5;
    uVar15 = puVar1[5];
    uVar16 = puVar1[6];
    uVar17 = puVar1[7];
    uVar11 = puVar1[8];
    uVar12 = puVar1[9];
    uVar13 = puVar1[10];
    uVar14 = puVar1[0xb];
    uVar7 = puVar1[0xc];
    uVar8 = puVar1[0xd];
    uVar9 = puVar1[0xe];
    uVar10 = puVar1[0xf];
    uVar3 = puVar1[0x10];
    uVar4 = puVar1[0x11];
    uVar5 = puVar1[0x12];
    uVar6 = puVar1[0x13];
    *(undefined4 *)(param_2 + 0x260) = puVar1[4];
    *(undefined4 *)(param_2 + 0x264) = uVar15;
    *(undefined4 *)(param_2 + 0x268) = uVar16;
    *(undefined4 *)(param_2 + 0x26c) = uVar17;
    *(undefined4 *)(param_2 + 0x270) = uVar11;
    *(undefined4 *)(param_2 + 0x274) = uVar12;
    *(undefined4 *)(param_2 + 0x278) = uVar13;
    *(undefined4 *)(param_2 + 0x27c) = uVar14;
    *(undefined4 *)(param_2 + 0x280) = uVar7;
    *(undefined4 *)(param_2 + 0x284) = uVar8;
    *(undefined4 *)(param_2 + 0x288) = uVar9;
    *(undefined4 *)(param_2 + 0x28c) = uVar10;
    *(undefined4 *)(param_2 + 0x290) = uVar3;
    *(undefined4 *)(param_2 + 0x294) = uVar4;
    *(undefined4 *)(param_2 + 0x298) = uVar5;
    *(undefined4 *)(param_2 + 0x29c) = uVar6;
    uVar11 = puVar1[0x15];
    uVar12 = puVar1[0x16];
    uVar13 = puVar1[0x17];
    uVar7 = puVar1[0x18];
    uVar8 = puVar1[0x19];
    uVar9 = puVar1[0x1a];
    uVar10 = puVar1[0x1b];
    uVar3 = puVar1[0x1c];
    uVar4 = puVar1[0x1d];
    uVar5 = puVar1[0x1e];
    uVar6 = puVar1[0x1f];
    *(undefined4 *)(param_2 + 0x2a0) = puVar1[0x14];
    *(undefined4 *)(param_2 + 0x2a4) = uVar11;
    *(undefined4 *)(param_2 + 0x2a8) = uVar12;
    *(undefined4 *)(param_2 + 0x2ac) = uVar13;
    *(undefined4 *)(param_2 + 0x2b0) = uVar7;
    *(undefined4 *)(param_2 + 0x2b4) = uVar8;
    *(undefined4 *)(param_2 + 0x2b8) = uVar9;
    *(undefined4 *)(param_2 + 700) = uVar10;
    *(undefined4 *)(param_2 + 0x2c0) = uVar3;
    *(undefined4 *)(param_2 + 0x2c4) = uVar4;
    *(undefined4 *)(param_2 + 0x2c8) = uVar5;
    *(undefined4 *)(param_2 + 0x2cc) = uVar6;
    uVar11 = puVar1[0x21];
    uVar12 = puVar1[0x22];
    uVar13 = puVar1[0x23];
    uVar7 = puVar1[0x24];
    uVar8 = puVar1[0x25];
    uVar9 = puVar1[0x26];
    uVar10 = puVar1[0x27];
    uVar3 = puVar1[0x28];
    uVar4 = puVar1[0x29];
    uVar5 = puVar1[0x2a];
    uVar6 = puVar1[0x2b];
    *(undefined4 *)(param_2 + 0x2d0) = puVar1[0x20];
    *(undefined4 *)(param_2 + 0x2d4) = uVar11;
    *(undefined4 *)(param_2 + 0x2d8) = uVar12;
    *(undefined4 *)(param_2 + 0x2dc) = uVar13;
    *(undefined4 *)(param_2 + 0x2e0) = uVar7;
    *(undefined4 *)(param_2 + 0x2e4) = uVar8;
    *(undefined4 *)(param_2 + 0x2e8) = uVar9;
    *(undefined4 *)(param_2 + 0x2ec) = uVar10;
    *(undefined4 *)(param_2 + 0x2f0) = uVar3;
    *(undefined4 *)(param_2 + 0x2f4) = uVar4;
    *(undefined4 *)(param_2 + 0x2f8) = uVar5;
    *(undefined4 *)(param_2 + 0x2fc) = uVar6;
    uVar15 = puVar1[0x2d];
    uVar16 = puVar1[0x2e];
    uVar17 = puVar1[0x2f];
    uVar11 = puVar1[0x30];
    uVar12 = puVar1[0x31];
    uVar13 = puVar1[0x32];
    uVar14 = puVar1[0x33];
    uVar7 = puVar1[0x34];
    uVar8 = puVar1[0x35];
    uVar9 = puVar1[0x36];
    uVar10 = puVar1[0x37];
    uVar3 = puVar1[0x38];
    uVar4 = puVar1[0x39];
    uVar5 = puVar1[0x3a];
    uVar6 = puVar1[0x3b];
    *(undefined4 *)(param_2 + 0x300) = puVar1[0x2c];
    *(undefined4 *)(param_2 + 0x304) = uVar15;
    *(undefined4 *)(param_2 + 0x308) = uVar16;
    *(undefined4 *)(param_2 + 0x30c) = uVar17;
    *(undefined4 *)(param_2 + 0x310) = uVar11;
    *(undefined4 *)(param_2 + 0x314) = uVar12;
    *(undefined4 *)(param_2 + 0x318) = uVar13;
    *(undefined4 *)(param_2 + 0x31c) = uVar14;
    *(undefined4 *)(param_2 + 800) = uVar7;
    *(undefined4 *)(param_2 + 0x324) = uVar8;
    *(undefined4 *)(param_2 + 0x328) = uVar9;
    *(undefined4 *)(param_2 + 0x32c) = uVar10;
    *(undefined4 *)(param_2 + 0x330) = uVar3;
    *(undefined4 *)(param_2 + 0x334) = uVar4;
    *(undefined4 *)(param_2 + 0x338) = uVar5;
    *(undefined4 *)(param_2 + 0x33c) = uVar6;
    uVar15 = puVar1[0x3d];
    uVar16 = puVar1[0x3e];
    uVar17 = puVar1[0x3f];
    uVar11 = puVar1[0x40];
    uVar12 = puVar1[0x41];
    uVar13 = puVar1[0x42];
    uVar14 = puVar1[0x43];
    uVar7 = puVar1[0x44];
    uVar8 = puVar1[0x45];
    uVar9 = puVar1[0x46];
    uVar10 = puVar1[0x47];
    uVar3 = puVar1[0x48];
    uVar4 = puVar1[0x49];
    uVar5 = puVar1[0x4a];
    uVar6 = puVar1[0x4b];
    *(undefined4 *)(param_2 + 0x340) = puVar1[0x3c];
    *(undefined4 *)(param_2 + 0x344) = uVar15;
    *(undefined4 *)(param_2 + 0x348) = uVar16;
    *(undefined4 *)(param_2 + 0x34c) = uVar17;
    *(undefined4 *)(param_2 + 0x350) = uVar11;
    *(undefined4 *)(param_2 + 0x354) = uVar12;
    *(undefined4 *)(param_2 + 0x358) = uVar13;
    *(undefined4 *)(param_2 + 0x35c) = uVar14;
    *(undefined4 *)(param_2 + 0x360) = uVar7;
    *(undefined4 *)(param_2 + 0x364) = uVar8;
    *(undefined4 *)(param_2 + 0x368) = uVar9;
    *(undefined4 *)(param_2 + 0x36c) = uVar10;
    *(undefined4 *)(param_2 + 0x370) = uVar3;
    *(undefined4 *)(param_2 + 0x374) = uVar4;
    *(undefined4 *)(param_2 + 0x378) = uVar5;
    *(undefined4 *)(param_2 + 0x37c) = uVar6;
    uVar15 = puVar1[0x4d];
    uVar16 = puVar1[0x4e];
    uVar17 = puVar1[0x4f];
    uVar11 = puVar1[0x50];
    uVar12 = puVar1[0x51];
    uVar13 = puVar1[0x52];
    uVar14 = puVar1[0x53];
    uVar7 = puVar1[0x54];
    uVar8 = puVar1[0x55];
    uVar9 = puVar1[0x56];
    uVar10 = puVar1[0x57];
    uVar3 = puVar1[0x58];
    uVar4 = puVar1[0x59];
    uVar5 = puVar1[0x5a];
    uVar6 = puVar1[0x5b];
    *(undefined4 *)(param_2 + 0x380) = puVar1[0x4c];
    *(undefined4 *)(param_2 + 900) = uVar15;
    *(undefined4 *)(param_2 + 0x388) = uVar16;
    *(undefined4 *)(param_2 + 0x38c) = uVar17;
    *(undefined4 *)(param_2 + 0x390) = uVar11;
    *(undefined4 *)(param_2 + 0x394) = uVar12;
    *(undefined4 *)(param_2 + 0x398) = uVar13;
    *(undefined4 *)(param_2 + 0x39c) = uVar14;
    *(undefined4 *)(param_2 + 0x3a0) = uVar7;
    *(undefined4 *)(param_2 + 0x3a4) = uVar8;
    *(undefined4 *)(param_2 + 0x3a8) = uVar9;
    *(undefined4 *)(param_2 + 0x3ac) = uVar10;
    *(undefined4 *)(param_2 + 0x3b0) = uVar3;
    *(undefined4 *)(param_2 + 0x3b4) = uVar4;
    *(undefined4 *)(param_2 + 0x3b8) = uVar5;
    *(undefined4 *)(param_2 + 0x3bc) = uVar6;
    *(undefined1 *)(param_2 + 0x3c0) = *(undefined1 *)(puVar1 + 0x5c);
    *(int *)(param_2 + 0x3d0) = param_2 + 0x250;
  }
  if ((iRam00433344 == 0) || (iRam0043058c == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined4 *)(param_2 + 0x3d4) = 0x432dc0;
  }
  else {
    *(undefined4 *)(param_2 + 0x3d4) = 0x432800;
  }
  Gfx_SetupRenderTargetEx(*(undefined4 *)(param_2 + 0x3d4),param_2 + 0x3d8,0,0);
  return;
}

