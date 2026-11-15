// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00150000 - 0x00154000
#include "ghidra_types.h"

// 0x001505c0  size 0x36c
void Sprite_SetupAlpha(int param_1,ulong param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  uVar4 = 0;
  puVar3 = (undefined8 *)0x0;
  puVar6 = (undefined4 *)0x0;
  if (param_2 < 0xb) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_2) {
    case 0:
      uVar4 = 1;
      break;
    case 1:
      uVar4 = 2;
      puVar3 = (undefined8 *)(param_1 + 0x100);
      break;
    case 2:
      uVar4 = 8;
      puVar6 = (undefined4 *)(param_1 + 0x7c0);
      break;
    case 3:
      uVar4 = 0x10;
      puVar6 = (undefined4 *)(param_1 + 0x1290);
      break;
    case 4:
      uVar4 = 0x20;
      puVar6 = (undefined4 *)(param_1 + 0x1d60);
      break;
    case 5:
      uVar4 = 0x40;
      puVar6 = (undefined4 *)(param_1 + 0x2830);
      break;
    case 6:
      uVar4 = 0x80;
      puVar6 = (undefined4 *)(param_1 + 0x3300);
      break;
    case 7:
      uVar4 = 0x2000;
      puVar3 = (undefined8 *)(param_1 + 0x73e0);
      break;
    case 8:
      uVar4 = 0x4000;
      puVar3 = (undefined8 *)(param_1 + 0x7740);
      break;
    case 9:
      uVar4 = 0x8000;
      puVar3 = (undefined8 *)(param_1 + 0x7b90);
      break;
    case 10:
      uVar4 = 0x10000;
      puVar3 = (undefined8 *)(param_1 + 0x7ef0);
    }
  }
  if (param_3 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~uVar4;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar4;
    if (puVar3 != (undefined8 *)0x0) {
      uVar4 = param_4[0xf];
      uVar2 = param_4[0xe];
      uVar1 = param_4[0xd];
      *(byte *)(puVar3 + 0x6a) = *(byte *)(puVar3 + 0x6a) & 0xfe | (byte)param_4[0xc] & 1;
      *(byte *)(puVar3 + 0x6a) = *(byte *)(puVar3 + 0x6a) & 0xf1 | (byte)((uVar1 & 7) << 1);
      *(ushort *)(puVar3 + 0x6a) = *(ushort *)(puVar3 + 0x6a) & 0xf00f | (ushort)(byte)uVar2 << 4;
      *(byte *)((int)puVar3 + 0x351) =
           *(byte *)((int)puVar3 + 0x351) & 0xcf | (byte)((uVar4 & 3) << 4);
      uVar4 = param_4[0x11];
      *(byte *)((int)puVar3 + 0x351) =
           *(byte *)((int)puVar3 + 0x351) & 0xbf | (byte)((param_4[0x10] & 1) << 6);
      *(byte *)((int)puVar3 + 0x351) =
           *(byte *)((int)puVar3 + 0x351) & 0x7f | (byte)((uVar4 & 1) << 7);
      uVar5 = *(undefined8 *)(param_4 + 10);
      *(byte *)(puVar3 + 8) = *(byte *)(puVar3 + 8) & 0xbf | (byte)((param_4[8] & 1) << 6);
      *puVar3 = uVar5;
      uVar4 = *param_4;
      puVar3[6] = (long)(int)(uVar4 >> 0x18) << 0x18 |
                  ((long)(int)uVar4 & 0xffU) << 0x10 |
                  (long)(int)(uVar4 >> 0x10) & 0xffU | ((long)(int)(uVar4 >> 8) & 0xffU) << 8 |
                  0x100000000;
      puVar3[7] = 1;
    }
  }
  if ((param_3 != 0) && (puVar6 != (undefined4 *)0x0)) {
    if (param_4[1] == 0) {
      maybe_Gs_SetAlphaTest(puVar6 + 4,param_4[2],*param_4);
      *(byte *)(puVar6 + 0xd) = *(byte *)(puVar6 + 0xd) & 0xe7 | (byte)((param_4[3] & 3) << 3);
      *(byte *)(puVar6 + 0xd) = *(byte *)(puVar6 + 0xd) & 0xfb | (byte)((param_4[4] & 1) << 2);
      *(char *)(puVar6 + 0x14) = (char)param_4[5];
      *(char *)(puVar6 + 0x15) = (char)param_4[6];
      *(byte *)((int)puVar6 + 0x51) =
           *(byte *)((int)puVar6 + 0x51) & 0x7f | (byte)((param_4[7] & 1) << 7);
      *puVar6 = 0xac;
    }
    else {
      maybe_Gs_SetBlend(puVar6 + 4,param_4[2],*param_4);
      *(byte *)(puVar6 + 0xd) = *(byte *)(puVar6 + 0xd) & 0xe7 | (byte)((param_4[3] & 3) << 3);
      *(byte *)(puVar6 + 0xd) = *(byte *)(puVar6 + 0xd) & 0xfb | (byte)((param_4[4] & 1) << 2);
      *(char *)(puVar6 + 0x14) = (char)param_4[5];
      *(char *)(puVar6 + 0x15) = (char)param_4[6];
      *(byte *)((int)puVar6 + 0x51) =
           *(byte *)((int)puVar6 + 0x51) & 0x7f | (byte)((param_4[7] & 1) << 7);
      *puVar6 = 0x59;
    }
  }
  return;
}

// 0x00150930  size 0xb10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Sprite_Draw(undefined4 *param_1,long param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piStack_a0;
  int *piStack_90;
  int *piStack_80;
  int *piStack_70;
  
  iVar6 = (int)param_2 * 0x70;
  bVar1 = param_2 != 1;
  iVar4 = param_4 * *(int *)(iVar6 + 0x38800c);
  iVar2 = param_4 * *(int *)(iVar6 + 0x388010);
  iVar5 = param_4 * *(int *)(iVar6 + 0x388014);
  iVar3 = param_4 * *(int *)(iVar6 + 0x388018);
  param_4 = param_4 * *(int *)(iVar6 + 0x38801c);
  param_3 = param_3 * 4;
  iVar7 = param_3 + iVar6 + 0x387fc0;
  *param_1 = *(undefined4 *)(iVar6 + 0x387fc0);
  param_1[1] = 0;
  Gs_BuildClearPacket(param_1 + 4,*(undefined4 *)(iVar7 + 4),
                      *(undefined4 *)(&s_Sprite_Draw_4 + iVar6),
                      *(undefined4 *)(&s_Sprite_Draw_1 + iVar6),0,*(undefined4 *)(iVar7 + 0xc),
                      *(undefined4 *)(iVar6 + 0x387fd8),bVar1);
  maybe_Gs_BuildSpritePacket
            (param_1 + 0x40,!bVar1,1,0,3,0,*(undefined4 *)(&s_Sprite_Draw_2 + iVar6),
             *(undefined4 *)(&s_Sprite_Draw_3 + iVar6));
  maybe_Gs_BuildSpritePacket
            (param_1 + 0x118,!bVar1,1,0,3,0,*(undefined4 *)(&s_Sprite_Draw_2 + iVar6),
             *(undefined4 *)(&s_Sprite_Draw_3 + iVar6));
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _s_Sprite_Draw_3) {
    maybe_Gs_BuildRectPacket
              (param_1 + 500,iVar4,*(int *)(param_3 + 0x387fc4) << 5,_s_Sprite_Draw_4,
               _s_Sprite_Draw_1,_s_Sprite_Draw_5,_s_Sprite_Draw_6,_s_Sprite_Draw_2);
    param_1[0x1f0] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 500,iVar4,*(int *)(param_3 + 0x387fc4) << 5,_s_Sprite_Draw_4,
               _s_Sprite_Draw_1,_s_Sprite_Draw_5,_s_Sprite_Draw_6,_s_Sprite_Draw_2);
    param_1[0x1f0] = 0x59;
  }
  piStack_70 = (int *)(param_3 + 0x387fc4);
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _g_ViewShared6) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0x4a8,iVar2,*(int *)(&g_ViewShared1 + param_3) << 5,_s_Sprite_Draw_7,
               _g_ViewShared3,_s_Sprite_Draw_8,_s_Sprite_Draw_9,_g_ViewShared5);
    param_1[0x4a4] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0x4a8,iVar2,*(int *)(&g_ViewShared1 + param_3) << 5,_s_Sprite_Draw_7,
               _g_ViewShared3,_s_Sprite_Draw_8,_s_Sprite_Draw_9,_g_ViewShared5);
    param_1[0x4a4] = 0x59;
  }
  piStack_80 = (int *)(&g_ViewShared1 + param_3);
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _s_Sprite_Draw_12) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0x75c,iVar5,*(int *)(param_3 + 0x3880a4) << 5,_s_Sprite_Draw_13,
               _s_Sprite_Draw_10,_s_Sprite_Draw_14,_s_Sprite_Draw_15,_s_Sprite_Draw_11);
    param_1[0x758] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0x75c,iVar5,*(int *)(param_3 + 0x3880a4) << 5,_s_Sprite_Draw_13,
               _s_Sprite_Draw_10,_s_Sprite_Draw_14,_s_Sprite_Draw_15,_s_Sprite_Draw_11);
    param_1[0x758] = 0x59;
  }
  piStack_90 = (int *)(param_3 + 0x3880a4);
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _s_Sprite_Draw_18) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0xa10,iVar3,*(int *)(&s_Gfx_SetDisplayParam_1 + param_3) << 5,
               _s_Sprite_Draw_19,_s_Sprite_Draw_16,_s_Sprite_Draw_20,_s_Sprite_Draw_21,
               _s_Sprite_Draw_17);
    param_1[0xa0c] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0xa10,iVar3,*(int *)(&s_Gfx_SetDisplayParam_1 + param_3) << 5,
               _s_Sprite_Draw_19,_s_Sprite_Draw_16,_s_Sprite_Draw_20,_s_Sprite_Draw_21,
               _s_Sprite_Draw_17);
    param_1[0xa0c] = 0x59;
  }
  piStack_a0 = (int *)(&s_Gfx_SetDisplayParam_1 + param_3);
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _g_SpriteShared3) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0xcc4,param_4,*(int *)(param_3 + 0x388184) << 5,_s_Sprite_Draw_22,
               _g_SpriteShared1,_s_Sprite_Draw_23,_s_Sprite_Draw_24,_g_SpriteShared2);
    param_1[0xcc0] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0xcc4,param_4,*(int *)(param_3 + 0x388184) << 5,_s_Sprite_Draw_22,
               _g_SpriteShared1,_s_Sprite_Draw_23,_s_Sprite_Draw_24,_g_SpriteShared2);
    param_1[0xcc0] = 0x59;
  }
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _s_Sprite_Draw_3) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0xf78,iVar4,*piStack_70 << 5,_s_Sprite_Draw_4,_s_Sprite_Draw_1,
               _s_Sprite_Draw_5,_s_Sprite_Draw_6,_s_Sprite_Draw_2);
    param_1[0xf74] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0xf78,iVar4,*piStack_70 << 5,_s_Sprite_Draw_4,_s_Sprite_Draw_1,
               _s_Sprite_Draw_5,_s_Sprite_Draw_6,_s_Sprite_Draw_2);
    param_1[0xf74] = 0x59;
  }
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _g_ViewShared6) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0x122c,iVar2,*piStack_80 << 5,_s_Sprite_Draw_7,_g_ViewShared3,
               _s_Sprite_Draw_8,_s_Sprite_Draw_9,_g_ViewShared5);
    param_1[0x1228] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0x122c,iVar2,*piStack_80 << 5,_s_Sprite_Draw_7,_g_ViewShared3,
               _s_Sprite_Draw_8,_s_Sprite_Draw_9,_g_ViewShared5);
    param_1[0x1228] = 0x59;
  }
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _s_Sprite_Draw_12) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0x14e0,iVar5,*piStack_90 << 5,_s_Sprite_Draw_13,_s_Sprite_Draw_10,
               _s_Sprite_Draw_14,_s_Sprite_Draw_15,_s_Sprite_Draw_11);
    param_1[0x14dc] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0x14e0,iVar5,*piStack_90 << 5,_s_Sprite_Draw_13,_s_Sprite_Draw_10,
               _s_Sprite_Draw_14,_s_Sprite_Draw_15,_s_Sprite_Draw_11);
    param_1[0x14dc] = 0x59;
  }
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _s_Sprite_Draw_18) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0x1794,iVar3,*piStack_a0 << 5,_s_Sprite_Draw_19,_s_Sprite_Draw_16,
               _s_Sprite_Draw_20,_s_Sprite_Draw_21,_s_Sprite_Draw_17);
    param_1[0x1790] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0x1794,iVar3,*piStack_a0 << 5,_s_Sprite_Draw_19,_s_Sprite_Draw_16,
               _s_Sprite_Draw_20,_s_Sprite_Draw_21,_s_Sprite_Draw_17);
    param_1[0x1790] = 0x59;
  }
  if (*(uint *)(&s_Sprite_Draw_3 + iVar6) < _g_SpriteShared3) {
    maybe_Gs_BuildRectPacket
              (param_1 + 0x1a48,param_4,*(int *)(param_3 + 0x388184) << 5,_s_Sprite_Draw_22,
               _g_SpriteShared1,_s_Sprite_Draw_23,_s_Sprite_Draw_24,_g_SpriteShared2);
    param_1[0x1a44] = 0xac;
  }
  else {
    maybe_Gs_BuildBlendRect
              (param_1 + 0x1a48,param_4,*(int *)(param_3 + 0x388184) << 5,_s_Sprite_Draw_22,
               _g_SpriteShared1,_s_Sprite_Draw_23,_s_Sprite_Draw_24,_g_SpriteShared2);
    param_1[0x1a44] = 0x59;
  }
  maybe_Gs_BuildSpritePacket
            (param_1 + 0x1cf8,!bVar1,1,0,3,0xffffffff80808080,
             *(undefined4 *)(&s_Sprite_Draw_2 + iVar6),*(undefined4 *)(&s_Sprite_Draw_3 + iVar6));
  maybe_Gs_BuildSpritePacket
            (param_1 + 0x1dd0,!bVar1,1,0,3,0xffffffff80808080,
             *(undefined4 *)(&s_Sprite_Draw_2 + iVar6),*(undefined4 *)(&s_Sprite_Draw_3 + iVar6));
  Gs_BuildClearPacket(param_1 + 0x1ea8,*(undefined4 *)(iVar7 + 4),
                      *(undefined4 *)(&s_Sprite_Draw_4 + iVar6),
                      *(undefined4 *)(&s_Sprite_Draw_1 + iVar6),0,*(undefined4 *)(iVar7 + 0xc),
                      *(undefined4 *)(iVar6 + 0x387fd8),bVar1);
  maybe_Gs_BuildSpritePacket
            (param_1 + 0x1ee4,!bVar1,1,0,3,0xffffffff80808080,
             *(undefined4 *)(&s_Sprite_Draw_2 + iVar6),*(undefined4 *)(&s_Sprite_Draw_3 + iVar6));
  maybe_Gs_BuildSpritePacket
            (param_1 + 0x1fbc,!bVar1,1,0,3,0xffffffff80808080,
             *(undefined4 *)(&s_Sprite_Draw_2 + iVar6),*(undefined4 *)(&s_Sprite_Draw_3 + iVar6));
  return;
}

// 0x00151440  size 0x140
void Rect_Setup(float param_1,float param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17)

{
  undefined4 uVar1;
  
  *param_3 = param_4;
  param_3[1] = param_5;
  param_3[2] = param_6;
  param_3[3] = param_7;
  param_3[4] = param_8;
  param_3[5] = param_9;
  param_3[6] = param_10;
  param_3[7] = param_11;
  param_3[8] = param_12;
  uVar1 = Tex_GetBufferWidth(param_3[5],param_3[7]);
  param_3[9] = uVar1;
  uVar1 = Bits_HighestSet(param_3[7]);
  param_3[10] = uVar1;
  uVar1 = Bits_HighestSet(param_3[8]);
  param_3[0xb] = uVar1;
  uVar1 = 1;
  if ((param_3[5] != 10) && (param_3[5] != 2)) {
    uVar1 = 0;
  }
  param_3[0xc] = uVar1;
  *(undefined8 *)(param_3 + 0xe) = 0x617425317065342;
  *(undefined8 *)(param_3 + 0x10) = 0x7160352460712435;
  param_3[0x12] = param_13;
  param_3[0x13] = param_14;
  param_3[0x14] = param_14;
  param_3[0x15] = param_15;
  param_3[0x16] = param_16;
  param_3[0x17] = param_17;
  param_3[0x18] = param_1;
  param_3[0x19] = param_2;
  param_3[0x1a] = -(param_1 / 2.0);
  param_3[0x1b] = -(param_2 / 2.0);
  return;
}

// 0x00151580  size 0x3b8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Rect_SetupTexture(undefined4 *param_1,ulong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 & 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0xd] - param_1[0xb];
  }
  uVar1 = Tex_GetBlockCount(*param_1,param_1[10],param_1[0xb] + iVar2);
  iVar2 = Tex_GetBlockCount(param_1[1],param_1[10],param_1[0xb] + iVar2);
  iVar4 = (int)uVar1 * 2;
  iVar3 = 0x200 - (int)uVar1;
  _g_GfxShared1 = 4;
  if ((param_2 & 2) == 0) {
    _g_GfxShared1 = 0;
  }
  _g_RectShared1 = 1;
  _g_RectShared2 = 0;
  _g_RectShared3 = 1;
  if (param_3 != 0) {
    _g_RectShared3 = param_3;
  }
  _g_RectShared4 = (iVar4 + iVar2) * 0x20;
  _g_RectShared5 = iVar3 * 0x20;
  Rect_Setup((float)(int)param_1[4] / (float)(int)param_1[2],
             (float)(int)param_1[5] / (float)(int)param_1[3],0x387fc0,4,0,uVar1,iVar4,iVar4,*param_1
             ,param_1[1]);
  Rect_Setup((float)(int)param_1[6] / (float)(int)param_1[2],
             (float)(int)param_1[7] / (float)(int)param_1[3],0x388030,0,0,uVar1,iVar4,iVar4,*param_1
             ,param_1[1]);
  Rect_Setup((float)(int)param_1[8] / (float)(int)param_1[2],
             (float)(int)param_1[9] / (float)(int)param_1[3],0x3880a0,4,0,uVar1,iVar4,iVar4,*param_1
             ,param_1[1]);
  Rect_Setup((float)(int)param_1[10] / (float)(int)param_1[2],
             (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388110,0,iVar3,iVar3,iVar4,iVar4,
             *param_1,param_1[1]);
  Rect_Setup((float)(int)param_1[10] / (float)(int)param_1[2],
             (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388180,0,0,uVar1,iVar4,iVar4,
             *param_1,param_1[1]);
  return;
}

// 0x00151940  size 0x454
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Rect_SetupTiled(int *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iStack_58;
  int iStack_54;
  
  if ((param_2 & 8) == 0) {
    iVar4 = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = param_1[0xd] - param_1[0xb];
    iVar5 = param_1[0xf] - param_1[3];
  }
  uVar2 = Tex_GetBlockCount(*param_1,param_1[10],param_1[0xb] + iVar4);
  iVar1 = Tex_GetBlockCount(*param_1,param_1[2],param_1[3] + iVar5);
  uVar3 = Tex_GetBlockCount(param_1[1],param_1[2],param_1[3] + iVar5);
  iStack_54 = iVar1 + (int)uVar3;
  _g_RectShared4 = (int)uVar2;
  iStack_58 = iStack_54 + _g_RectShared4;
  iVar5 = 0x200 - _g_RectShared4;
  _g_RectShared4 = iStack_58 + _g_RectShared4;
  iVar4 = iVar1;
  if ((((param_2 & 4) != 0) && (*param_1 == 0)) && (param_1[1] == 0x3a)) {
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    iStack_58 = iVar1 + (int)uVar2;
    _g_RectShared4 = iStack_58 + (int)uVar2;
    iStack_54 = iVar1;
    iVar4 = iStack_58;
  }
  _g_RectShared1 = 1;
  _g_RectShared2 = 1;
  _g_GfxShared1 = 0;
  _g_RectShared3 = 1;
  if (param_3 < 2) {
    _g_RectShared3 = param_3;
  }
  _g_RectShared5 = iVar5 * 0x20;
  _g_RectShared4 = _g_RectShared4 << 5;
  Rect_Setup((float)param_1[4] / (float)param_1[2],(float)param_1[5] / (float)param_1[3],0x387fc0,4,
             0,0,iVar1,iVar4,*param_1,param_1[1]);
  Rect_Setup((float)param_1[6] / (float)param_1[2],(float)param_1[7] / (float)param_1[3],0x388030,0,
             0,0,iVar1,iVar4,*param_1,param_1[1]);
  Rect_Setup((float)param_1[8] / (float)param_1[2],(float)param_1[9] / (float)param_1[3],0x3880a0,
             0x204,iStack_54,iStack_58,iVar1,iVar4,*param_1,param_1[1]);
  Rect_Setup((float)param_1[10] / (float)param_1[2],(float)param_1[0xb] / (float)param_1[3],0x388110
             ,0,iVar5,iVar5,iVar1,iVar1,*param_1,param_1[1]);
  Rect_Setup((float)param_1[10] / (float)param_1[2],(float)param_1[0xb] / (float)param_1[3],0x388180
             ,0,iStack_54,iStack_58,iVar1,iVar1,*param_1,param_1[1]);
  return;
}

// 0x00151da0  size 0x3ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Rect_SetupScaled(undefined4 *param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 & 8) == 0) {
    iVar2 = 0;
    iVar4 = 0;
  }
  else {
    iVar2 = param_1[0xd] - param_1[0xb];
    iVar4 = param_1[0xf] - param_1[3];
  }
  uVar1 = Tex_GetBlockCount(*param_1,param_1[10],param_1[0xb] + iVar2);
  iVar2 = Tex_GetBlockCount(*param_1,param_1[2],param_1[3] + iVar4);
  iVar4 = Tex_GetBlockCount(param_1[1],param_1[2],param_1[3] + iVar4);
  iVar2 = (int)uVar1 + iVar2;
  _g_GfxShared1 = 0;
  iVar3 = 0x200 - (int)uVar1;
  _g_RectShared1 = 1;
  _g_RectShared2 = 1;
  _g_RectShared3 = 1;
  if (param_3 < 2) {
    _g_RectShared3 = param_3;
  }
  _g_RectShared4 = (iVar2 + iVar4) * 0x20;
  _g_RectShared5 = iVar3 * 0x20;
  Rect_Setup((float)(int)param_1[4] / (float)(int)param_1[2],
             (float)(int)param_1[5] / (float)(int)param_1[3],0x387fc0,4,uVar1,uVar1,iVar2,iVar2,
             *param_1,param_1[1]);
  Rect_Setup((float)(int)param_1[6] / (float)(int)param_1[2],
             (float)(int)param_1[7] / (float)(int)param_1[3],0x388030,0,uVar1,uVar1,iVar2,iVar2,
             *param_1,param_1[1]);
  Rect_Setup((float)(int)param_1[8] / (float)(int)param_1[2],
             (float)(int)param_1[9] / (float)(int)param_1[3],0x3880a0,4,uVar1,uVar1,iVar2,iVar2,
             *param_1,param_1[1]);
  Rect_Setup((float)(int)param_1[10] / (float)(int)param_1[2],
             (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388110,0,iVar3,iVar3,iVar2,iVar2,
             *param_1,param_1[1]);
  Rect_Setup((float)(int)param_1[10] / (float)(int)param_1[2],
             (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388180,0x200,0,0,iVar2,iVar2,
             *param_1,param_1[1]);
  return;
}

// 0x00152190  size 0x3bc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Rect_SetupMasked(undefined4 *param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 & 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0xd] - param_1[0xb];
  }
  uVar1 = Tex_GetBlockCount(*param_1,param_1[10],param_1[0xb] + iVar2);
  iVar2 = Tex_GetBlockCount(param_1[1],param_1[10],param_1[0xb] + iVar2);
  iVar4 = (int)uVar1 * 2;
  _g_GfxShared1 = 0;
  iVar3 = 0x200 - (int)uVar1;
  _g_RectShared1 = 1;
  _g_RectShared2 = 1;
  _g_RectShared3 = 1;
  if (param_3 < 2) {
    _g_RectShared3 = param_3;
  }
  _g_RectShared4 = (iVar4 + iVar2) * 0x20;
  _g_RectShared5 = iVar3 * 0x20;
  Rect_Setup((float)(int)param_1[4] / (float)(int)param_1[2],
             (float)(int)param_1[5] / (float)(int)param_1[3],0x387fc0,4,0,uVar1,iVar4,iVar4,*param_1
             ,param_1[1]);
  Rect_Setup((float)(int)param_1[6] / (float)(int)param_1[2],
             (float)(int)param_1[7] / (float)(int)param_1[3],0x388030,0,0,uVar1,iVar4,iVar4,*param_1
             ,param_1[1]);
  Rect_Setup((float)(int)param_1[8] / (float)(int)param_1[2],
             (float)(int)param_1[9] / (float)(int)param_1[3],0x3880a0,4,0,uVar1,iVar4,iVar4,*param_1
             ,param_1[1]);
  Rect_Setup((float)(int)param_1[10] / (float)(int)param_1[2],
             (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388110,0,iVar3,iVar3,iVar4,iVar4,
             *param_1,param_1[1]);
  Rect_Setup((float)(int)param_1[10] / (float)(int)param_1[2],
             (float)(int)param_1[0xb] / (float)(int)param_1[3],0x388180,0,0,uVar1,iVar4,iVar4,
             *param_1,param_1[1]);
  return;
}

// 0x00152550  size 0x108
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Light_SetDefaults(void)

{
  _s_Light_SetDefaults_1 = 0x3e99999a;
  _s_Light_SetDefaults_2 = 0x3e99999a;
  _s_Light_SetDefaults_3 = 0x3e99999a;
  _s_Light_SetDefaults_5 = 0;
  _s_Light_SetDefaults_4 = 0x3f800000;
  _s_Light_SetDefaults_6 = 0xc1a00000;
  _s_Light_SetDefaults_7 = 0xc1200000;
  _s_Light_SetDefaults_8 = 0;
  _s_Light_SetDefaults_9 = 0xc1200000;
  _s_Light_SetDefaults_10 = 0xc1a00000;
  _s_Light_SetDefaults_11 = 0xc1200000;
  _s_Light_SetDefaults_13 = 0;
  _s_Light_SetDefaults_12 = 0;
  _s_Light_SetDefaults_14 = 0xc1a00000;
  _s_Light_SetDefaults_15 = 0x41200000;
  _s_Light_SetDefaults_16 = 0;
  _s_Light_SetDefaults_17 = 0x3f400000;
  _s_Light_SetDefaults_18 = 0x3f400000;
  _s_Light_SetDefaults_19 = 0x3f400000;
  _s_Light_SetDefaults_20 = 0;
  _s_Light_SetDefaults_21 = 0;
  _s_Light_SetDefaults_22 = 0;
  _s_Light_SetDefaults_23 = 0;
  _s_Light_SetDefaults_24 = 0;
  _s_Light_SetDefaults_25 = 0x3f400000;
  _s_Light_SetDefaults_26 = 0x3f400000;
  _s_Light_SetDefaults_27 = 0x3f400000;
  _s_Light_SetDefaults_28 = 0;
  Light_UpdateMatrices(0x42d640);
  return;
}

// 0x00152660  size 0x3f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Camera_SetupDefault(void)

{
  int iVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
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
  
  uStack_4c = _g_ViewShared6;
  uStack_60 = _g_ViewShared1;
  uStack_5c = _g_ViewShared3;
  uStack_58 = _g_ViewShared2;
  iStack_54 = _g_ViewShared4;
  uStack_50 = _g_ViewShared5;
  uStack_48 = _s_Camera_SetupDefault_1;
  uStack_40 = 0x3f800000;
  fStack_44 = ((float)_g_ViewShared5 * 1.9209821) / 2.0;
  if (_g_GfxShared2 == 2) {
    fStack_3c = ((float)_g_ViewShared6 / (float)_g_ViewShared5) / 0.75;
  }
  else {
    fStack_3c = ((((float)_g_ViewShared6 / (float)_g_ViewShared5) / 0.75) * 625.0) / 525.0;
  }
  if (_g_ViewShared4 == 0x30) {
    uStack_38 = 0x41a00000;
    uStack_34 = 0x4b742400;
  }
  else {
    uStack_38 = 0x3f800000;
    uStack_34 = 0x477de800;
  }
  uStack_24 = 1;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_14 = _g_ViewShared7;
  uStack_20 = 0;
  uStack_10 = _g_ViewShared8;
  uStack_1c = 0;
  uStack_c = _s_Camera_SetupDefault_2;
  uStack_18 = 0;
  uStack_8 = _s_Camera_SetupDefault_3;
  Gfx_CopyRenderTarget(0x42d0c0,&uStack_60);
  Gfx_ClearRenderTarget(0x42d0c0);
  _s_Camera_SetupDefault_19 = 0x3f000000;
  _s_Camera_SetupDefault_20 = 0x43fa0000;
  _s_Camera_SetupDefault_7 = 0x3f800000;
  _s_Camera_SetupDefault_11 = 0x3f800000;
  _s_Camera_SetupDefault_6 = 0x41500000;
  _s_Camera_SetupDefault_13 = 0x3f800000;
  _s_Camera_SetupDefault_15 = 0x3f800000;
  _s_Camera_SetupDefault_5 = 0x3e4ccccd;
  _s_Camera_SetupDefault_9 = 0x3e4ccccd;
  iVar1 = _g_PktShared1 * 0x28c80 + (_g_PktShared2 & 1) * 0x51900 + 0x388200;
  _s_Camera_SetupDefault_4 = 0;
  _s_Camera_SetupDefault_8 = 0;
  _s_Camera_SetupDefault_10 = 0;
  _s_Camera_SetupDefault_12 = 0;
  _s_Camera_SetupDefault_14 = 0;
  _s_Camera_SetupDefault_16 = 0;
  _s_Camera_SetupDefault_17 = *(ushort *)(iVar1 + 0xfd40) & 0x1ff;
  _s_Camera_SetupDefault_21 = _s_Camera_SetupDefault_21 & 0xfe00 | (ushort)_s_Camera_SetupDefault_17
  ;
  _s_Camera_SetupDefault_23 = _s_Camera_SetupDefault_23 & 0xfe00 | (ushort)_s_Camera_SetupDefault_17
  ;
  _s_Camera_SetupDefault_18 = *(ushort *)(iVar1 + 0xfd50) & 0x1ff;
  _s_Camera_SetupDefault_22 = _s_Camera_SetupDefault_22 & 0xfe00 | (ushort)_s_Camera_SetupDefault_18
  ;
  _s_Camera_SetupDefault_24 = _s_Camera_SetupDefault_24 & 0xfe00 | (ushort)_s_Camera_SetupDefault_18
  ;
  Gfx_ClearRenderTarget(0x42d0c0);
  Camera_Init(0x42d0c0);
  return;
}

// 0x00152a50  size 0x70
void Pkt_SubmitImmediate(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  
  Pkt_Init(auStack_40,param_2,2,0);
  uStack_2c = param_1;
  Pkt_SubmitToChain(auStack_40,param_3);
  Pkt_End(auStack_40);
  Pkt_Begin(auStack_40);
  Pkt_End(auStack_40);
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x00152ac0  size 0x60
void Sprite_GetPoolInfo(int param_1,undefined4 *param_2)

{
  param_1 = param_1 * 0x70;
  *param_2 = *(undefined4 *)(param_1 + 0x388020);
  param_2[1] = *(undefined4 *)(param_1 + 0x388024);
  param_2[2] = *(undefined4 *)(param_1 + 0x388028);
  param_2[3] = *(undefined4 *)(param_1 + 0x38802c);
  return;
}

// 0x00152b20  size 0xc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Sprite_GetPoolCount(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x8280 + _g_PktShared1 * 0x28c80 + (_g_PktShared2 & 1) * 0x51900 + 0x388200;
  *param_2 = (uint)*(ushort *)(iVar1 + 0x50);
  param_2[1] = (uint)*(ushort *)(iVar1 + 0x54);
  param_2[2] = (((*(ushort *)(iVar1 + 0x62) & 0x7ff) - (*(ushort *)(iVar1 + 0x60) & 0x7ff)) + 1) *
               0x10;
  param_2[3] = (((*(ushort *)(iVar1 + 0x66) & 0x7ff) - (*(ushort *)(iVar1 + 100) & 0x7ff)) + 1) *
               0x10;
  return;
}

// 0x00152bf0  size 0x518
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* flips sprite pools, kicks DMA chains */

void Gfx_EndFrame(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  uint auStack_40 [5];
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_8;
  
  uVar5 = _g_PktShared2 + 1U & 1;
  uVar1 = _g_PktShared1 + 1U & 1;
  if ((_g_GfxShared1 & 1) == 0) {
    _g_GfxShared1 = _g_GfxShared1 & 0xfffffffd;
  }
  else {
    Gfx_ApplyVideoSettings(0x42d7b0,1);
    _g_GfxShared1 = _g_GfxShared1 & 0xfffffffe | 2;
  }
  uVar9 = 0;
  puVar6 = (uint *)&s_Gfx_SetFade_1;
  iVar8 = uVar1 * 0x28c80 + uVar5 * 0x51900 + 0x388200;
  do {
    uVar7 = 0;
    puVar4 = puVar6;
    do {
      Sprite_SetupAlpha(iVar8,uVar7,(*puVar6 & 1 << (uVar7 & 0x1f)) != 0,puVar4 + 2);
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 0x12;
    } while (uVar7 < 0xb);
    uVar9 = uVar9 + 1;
    iVar8 = iVar8 + 0x8280;
    puVar6 = puVar6 + 200;
  } while (uVar9 < 5);
  uVar9 = 0;
  puVar6 = auStack_40;
  s_GfxVar12 = s_GfxVar11;
  iVar3 = uVar5 * 0x690;
  iVar8 = iVar3 + 0x42c3a0;
  do {
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar10 = 0;
    puVar6[2] = 0;
    uVar7 = DmaChain_Begin(uVar9 & 0xff,puVar6 + 1);
    *puVar6 = uVar7;
    if ((((uVar9 == 3) && ((_g_GfxShared1 & 0x10) != 0)) ||
        ((uVar9 == 4 && ((_g_GfxShared1 & 0x20) != 0)))) && (puStack_28 != (undefined4 *)0x0)) {
      uVar7 = *puVar6;
      if (uVar7 != 0) {
        *puStack_28 = 0x20000000;
        puStack_28[1] = uVar7 & 0xfffffff;
        puStack_28[2] = 0;
        puStack_28[3] = 0;
        uStack_24 = puVar6[1];
      }
      *puVar6 = (uint)puStack_28;
      puVar6[1] = uStack_24;
    }
    if ((uVar9 == 2) && (*(int *)(uVar5 * 4 + 0x387fc4) == *(int *)(uVar5 * 4 + 0x3880a4))) {
      uVar10 = 1;
    }
    if ((uVar9 != 2) || ((_g_GfxShared1 & 0x30) == 0)) {
      uVar7 = Sprite_Alloc(iVar8,uVar9,uVar5,uVar1,*puVar6,puVar6[1],uVar10);
      puVar6[2] = uVar7;
    }
    if (uVar9 == 1) {
      iVar2 = *(int *)(iVar3 + 0x42c3a4);
      uVar7 = iVar3 + 0x42c3b0;
      if ((iVar2 == 0) || (*(int *)(iVar3 + 0x42c4f4) == 0)) {
        if (iVar2 == 0) {
          if (*(int *)(iVar3 + 0x42c4f4) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = iVar3 + 0x42c500U;
          }
        }
      }
      else {
        iVar2 = iVar3 + 0x42c3a0 + iVar2 * 0x10;
        *(undefined4 *)(iVar2 + 0x10) = 0x20000000;
        *(uint *)(iVar2 + 0x14) = iVar3 + 0x42c500U;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
      }
      puVar6[2] = uVar7;
    }
    if (uVar9 == 4) {
      iVar2 = *(int *)(iVar3 + 0x42c794);
      uVar7 = iVar3 + 0x42c7a0;
      if ((iVar2 == 0) || (*(int *)(iVar3 + 0x42c8e4) == 0)) {
        if (iVar2 == 0) {
          if (*(int *)(iVar3 + 0x42c8e4) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = iVar3 + 0x42c8f0U;
          }
        }
      }
      else {
        iVar2 = iVar3 + 0x42c790 + iVar2 * 0x10;
        *(undefined4 *)(iVar2 + 0x10) = 0x20000000;
        *(uint *)(iVar2 + 0x14) = iVar3 + 0x42c8f0U;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
      }
      puVar6[2] = uVar7;
    }
    uVar9 = uVar9 + 1;
    puVar6 = puVar6 + 3;
    iVar8 = iVar8 + 0x150;
  } while (uVar9 < 5);
  FlushCache(0);
  Gfx_SyncPath(0,0);
  maybe_Gfx_KickVif1Dma(uStack_2c,uStack_20);
  _s_GfxVar1 = uStack_8;
  uVar5 = 0;
  do {
    *(int *)(&s_DmaChainVar2 + (uVar5 & 0xff) * 0x10) =
         *(int *)(&s_DmaChainVar2 + (uVar5 & 0xff) * 0x10) + 1;
    DmaChain_End();
    uVar5 = uVar5 + 1;
  } while (uVar5 < 5);
  _g_ProfileShared1 = _g_ProfileShared1 + 1;
  FlushCache(0);
  return;
}

// 0x00153118  size 0x10
/* follows Gfx_EndFrame; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void Gfx_EndFrame_Orphan1(void)

{
  return;
}

// 0x00153130  size 0x128
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gfx_SetDisplayParam(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  if (param_1 == '\x03') {
    uStack_3c = 1;
    uStack_34 = 1;
    uStack_30 = 1;
    uStack_2c = 1;
    uStack_28 = 0;
    iStack_38 = _s_Gfx_SetDisplayParam_1;
    uStack_20 = 0;
    uStack_40 = param_5;
    uStack_24 = param_2;
  }
  else if (param_1 == '\x02') {
    iStack_38 = _s_Gfx_SetDisplayParam_1;
    iStack_1c = _s_Gfx_SetDisplayParam_1 << 5;
    uStack_3c = 1;
    uStack_34 = 1;
    uStack_30 = 1;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_c = (uint)(s_GfxVar10 != '\x01');
    uStack_20 = 1;
    uStack_18 = 1;
    uStack_40 = param_5;
    uStack_24 = param_2;
    uStack_14 = param_3;
    uStack_10 = param_4;
  }
  else if (param_1 == '\x01') {
    uStack_40 = 1;
    uStack_3c = 0;
    uStack_34 = 1;
    uStack_30 = 1;
    uStack_28 = 1;
    uStack_2c = 0;
    uStack_20 = 0;
    iStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_24 = param_2;
  }
  else if (param_1 == '\0') {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_34 = 0;
    uStack_20 = 0;
  }
  s_GfxVar11 = param_1;
  maybe_Gfx_BuildDisplayEnv(&uStack_40);
  return;
}

// 0x00153260  size 0xc8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gfx_SetFade(int param_1,uint param_2,long param_3,long param_4)

{
  uint *puVar1;
  
  if (param_1 == 5) {
    _s_Gfx_SetFade_1 = 0;
    _s_Gfx_SetFade_2 = 0;
    _s_Gfx_SetFade_3 = 0;
    _s_Gfx_SetFade_4 = 0;
    _s_Gfx_SetFade_5 = 0;
  }
  else {
    puVar1 = (uint *)(&s_Gfx_SetFade_1 + param_1 * 800);
    if (param_3 == 0) {
      *puVar1 = *puVar1 & ~(1 << (param_2 & 0x1f));
    }
    else {
      *puVar1 = *puVar1 | 1 << (param_2 & 0x1f);
      if (param_4 != 0) {
        Mem_Copy32(puVar1 + param_2 * 0x12 + 2,param_4,0x12);
      }
    }
  }
  return;
}

// 0x00153330  size 0x10
void Gfx_AddEndFrameCallback(undefined8 param_1)

{
  maybe_List_Append(0x42d7e0,param_1);
  return;
}

// 0x00153340  size 0x10
void Gfx_RemoveEndFrameCallback(undefined8 param_1)

{
  maybe_List_Remove(0x42d7e0,param_1);
  return;
}

// 0x00153350  size 0x594
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gfx_ApplyVideoSettings(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  uint uStack_bc;
  undefined4 auStack_90 [4];
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 auStack_60 [4];
  undefined4 auStack_50 [4];
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
  
  if (param_2 == 0) {
    maybe_Mem_CopyQwords(0x42d7b0,param_1,0x14);
    _g_GfxShared1 = _g_GfxShared1 | 1;
  }
  else {
    pcVar9 = (char *)param_1;
    auStack_50[1] = DAT_0030ac14;
    auStack_50[0] = DAT_0030ac10;
    auStack_50[3] = DAT_0030ac1c;
    auStack_50[2] = DAT_0030ac18;
    auStack_60[1] = DAT_0030ac24;
    uStack_40 = auStack_50[(byte)pcVar9[2]];
    auStack_60[0] = DAT_0030ac20;
    auStack_60[3] = DAT_0030ac2c;
    auStack_60[2] = DAT_0030ac28;
    auStack_80[0] = DAT_0030ac30;
    uStack_3c = auStack_60[(byte)pcVar9[3]];
    auStack_80[1] = DAT_0030ac34;
    auStack_80[3] = DAT_0030ac3c;
    auStack_80[2] = DAT_0030ac38;
    auStack_90[1] = DAT_0030ac54;
    uStack_70 = DAT_0030ac40;
    uStack_38 = auStack_80[(byte)pcVar9[4]];
    auStack_90[0] = DAT_0030ac50;
    auStack_90[2] = DAT_0030ac58;
    auStack_90[3] = DAT_0030ac5c;
    uStack_34 = auStack_90[(byte)pcVar9[5]];
    uStack_30 = auStack_80[(byte)pcVar9[6]];
    uStack_28 = auStack_80[(byte)pcVar9[6]];
    uStack_2c = auStack_90[(byte)pcVar9[7]];
    uStack_24 = auStack_90[(byte)pcVar9[7]];
    uStack_20 = auStack_80[(byte)pcVar9[8]];
    uStack_1c = auStack_90[(byte)pcVar9[9]];
    uStack_18 = auStack_80[(byte)pcVar9[10]];
    uStack_14 = auStack_90[(byte)pcVar9[0xb]];
    uStack_10 = auStack_80[(byte)pcVar9[10]];
    uStack_c = auStack_90[(byte)pcVar9[0xb] | 1];
    uStack_8 = auStack_80[(byte)pcVar9[4]];
    uStack_4 = auStack_90[(byte)pcVar9[5] | 1];
    s_GfxVar10 = pcVar9[1];
    s_GfxVar11 = 0;
    _g_GfxShared2 = 2;
    if (*pcVar9 != '\0') {
      _g_GfxShared2 = 3;
    }
    _g_GfxShared1 = 0;
    cVar1 = pcVar9[1];
    if (cVar1 == '\x04') {
      iVar10 = *(int *)(pcVar9 + 0x10);
      Rect_SetupMasked(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),iVar10);
      _g_GfxShared1 = 0;
      _g_RectShared1 = 0;
      _g_RectShared2 = 1;
      _g_RectShared3 = 1;
      if (iVar10 != 0) {
        _g_RectShared3 = iVar10;
      }
    }
    else if (cVar1 == '\x03') {
      Rect_SetupTexture(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),*(undefined4 *)(pcVar9 + 0x10));
    }
    else if (cVar1 == '\x02') {
      Rect_SetupTiled(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),*(undefined4 *)(pcVar9 + 0x10));
    }
    else if (cVar1 == '\x01') {
      Rect_SetupScaled(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),*(undefined4 *)(pcVar9 + 0x10));
    }
    else if (cVar1 == '\0') {
      Rect_SetupMasked(&uStack_40,*(undefined4 *)(pcVar9 + 0xc),*(undefined4 *)(pcVar9 + 0x10));
    }
    uVar8 = 0;
    iVar10 = 0x388200;
    do {
      uVar7 = 0;
      iVar6 = 0;
      do {
        iVar5 = iVar10 + iVar6;
        Sprite_Draw(iVar5,0,uVar8,uVar7);
        Sprite_Draw(iVar5 + 0x8280,1,uVar8,uVar7);
        Sprite_Draw(iVar5 + 0x10500,2,uVar8,uVar7);
        Sprite_Draw(iVar5 + 0x18780,3,uVar8,uVar7);
        Sprite_Draw(iVar5 + 0x20a00,4,uVar8,uVar7);
        iVar3 = _g_SpriteShared3;
        iVar2 = _g_SpriteShared2;
        iVar5 = _g_GfxShared2;
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x28c80;
      } while (uVar7 < 2);
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + 0x51900;
    } while (uVar8 < 2);
    iVar10 = 0x388180;
    uVar8 = 0;
    piVar4 = &iStack_d0;
    iStack_d0 = _g_GfxShared2;
    uStack_c4 = _g_SpriteShared1;
    uStack_cc = _g_RectShared1;
    uStack_c8 = _g_RectShared2;
    iStack_c0 = _g_RectShared3;
    uStack_bc = (uint)((_g_GfxShared1 & 4) != 0);
    do {
      piVar4[6] = *(int *)(iVar10 + 4);
      piVar4[7] = 0;
      if (iVar5 == 3) {
        piVar4[8] = 0x20;
      }
      else {
        piVar4[8] = 0;
      }
      piVar4[9] = iVar2;
      uVar8 = uVar8 + 1;
      piVar4[10] = iVar3;
      iVar10 = iVar10 + 4;
      piVar4 = piVar4 + 5;
    } while (uVar8 < 2);
    Gfx_SetVideoMode((*(uint *)(pcVar9 + 0xc) & 1) == 0,&iStack_d0);
    Camera_SetupDefault();
    Light_SetDefaults();
    _g_ProfileShared1 = 0;
    Gfx_SetFade(5,0,0,0);
    Gfx_SetDisplayParam(0,0,0,0,0);
    s_GfxVar12 = 0;
    for (iVar10 = _s_Gfx_ApplyVideoSettings_1; iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
      (**(code **)(iVar10 + 8))(*(undefined4 *)(iVar10 + 0xc));
    }
  }
  return;
}

// 0x001538f0  size 0x2c
void Gfx_ShutdownAll(void)

{
  DmaChain_DestroyAll();
  TexSlot_Shutdown();
  Gfx_Shutdown();
  return;
}

// 0x00153920  size 0x38
undefined4 Gfx_InitAll(undefined8 param_1)

{
  DmaChain_SetHeap();
  TexSlot_SetHeap(param_1);
  Gfx_ResetState();
  return 1;
}

// 0x00153960  size 0x60
long Gfx_EndFrameCallbackList_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e178;
    maybe_List_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001539c0  size 0x8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x304;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar2 + 0x42db10) = param_4;
  }
  return bVar1;
}

// 0x00153a50  size 0x34
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* follows Snd_QueueCmd4; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void Snd_QueueCmd4_Orphan1(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _s_SndVar5 = 0;
  _s_SndVar6 = 0;
  if (*(int *)(param_3 + 0x18) == 0) {
    *param_3 = 8;
  }
  else {
    *param_3 = 9;
  }
  return;
}

// 0x00153a90  size 0x64
void Snd_StreamPosCallback(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  DisableIntc(1);
  IopStrm_AddPosition(*(undefined4 *)(param_4 + 4),param_3);
  if (*param_4 == '\x01') {
    *param_4 = '\x04';
  }
  EnableIntc(1);
  return;
}

// 0x00153b00  size 0x138
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_StreamLoadChunk(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1 = param_1 * 0x28;
  uVar3 = *(int *)(param_1 + 0x42dab8) - *(int *)(param_1 + 0x42dabc);
  if ((&s_Snd_LoadSystemBanks_1)[param_1] == '\x03') {
    (&s_Snd_LoadSystemBanks_1)[param_1] = 1;
  }
  Sema_Wait(0x36efc0);
  iVar1 = _g_FileShared2;
  Sema_Signal(0x36efc0,0);
  if (param_3 <= 0x100U - iVar1) {
    for (uVar5 = 0; (uVar3 != 0 && (uVar5 < param_3)); uVar5 = uVar5 + 1) {
      uVar4 = param_2[1];
      if (uVar3 < (uint)param_2[1]) {
        uVar4 = uVar3;
      }
      uVar2 = Arc_LoadFileEx(0x1fd1,*param_2,0x153a90,&s_Snd_LoadSystemBanks_1 + param_1,
                             *(undefined4 *)(param_1 + 0x42dab4),uVar4);
      *(undefined4 *)(param_1 + 0x42dacc) = uVar2;
      uVar3 = uVar3 - uVar4;
      param_2 = param_2 + 2;
      *(uint *)(param_1 + 0x42dab4) = *(int *)(param_1 + 0x42dab4) + uVar4;
      *(uint *)(param_1 + 0x42dabc) = *(int *)(param_1 + 0x42dabc) + uVar4;
    }
  }
  return;
}

// 0x00153c40  size 0x8
/* follows Snd_StreamLoadChunk; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Snd_StreamLoadChunk_Orphan1(void)

{
  return;
}

// 0x00153c50  size 0x1d0
void Snd_StreamFill(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int aiStack_10 [4];
  
  iVar11 = param_1 * 0x28;
  iVar8 = param_1 * 0x1c;
  iVar1 = *(int *)(&DAT_0042da70 + iVar8);
  uVar6 = iVar1 * *(int *)(&DAT_0042da74 + iVar8);
  iVar2 = *(int *)(&DAT_0042da7c + iVar8);
  iVar13 = 0;
  uVar12 = 0;
  if (param_3 != 0) {
    if (8 < param_3) {
      do {
        uVar12 = uVar12 + 8;
        *(int *)(&DAT_0042dac4 + iVar11) = *(int *)(&DAT_0042dac4 + iVar11) + *(int *)(param_2 + 4);
        *(int *)(&DAT_0042dac4 + iVar11) =
             *(int *)(&DAT_0042dac4 + iVar11) + *(int *)(param_2 + 0xc);
        *(int *)(&DAT_0042dac4 + iVar11) =
             *(int *)(&DAT_0042dac4 + iVar11) + *(int *)(param_2 + 0x14);
        *(int *)(&DAT_0042dac4 + iVar11) =
             *(int *)(&DAT_0042dac4 + iVar11) + *(int *)(param_2 + 0x1c);
        *(int *)(&DAT_0042dac4 + iVar11) =
             *(int *)(&DAT_0042dac4 + iVar11) + *(int *)(param_2 + 0x24);
        *(int *)(&DAT_0042dac4 + iVar11) =
             *(int *)(&DAT_0042dac4 + iVar11) + *(int *)(param_2 + 0x2c);
        *(int *)(&DAT_0042dac4 + iVar11) =
             *(int *)(&DAT_0042dac4 + iVar11) + *(int *)(param_2 + 0x34);
        piVar9 = (int *)(param_2 + 0x3c);
        param_2 = param_2 + 0x40;
        *(int *)(&DAT_0042dac4 + iVar11) = *(int *)(&DAT_0042dac4 + iVar11) + *piVar9;
      } while (uVar12 < param_3 - 8);
    }
    for (; uVar12 < param_3; uVar12 = uVar12 + 1) {
      piVar9 = (int *)(param_2 + 4);
      param_2 = param_2 + 8;
      *(int *)(&DAT_0042dac4 + iVar11) = *(int *)(&DAT_0042dac4 + iVar11) + *piVar9;
    }
  }
  uVar12 = *(uint *)(&DAT_0042dac4 + iVar11);
  if (uVar6 < uVar12) {
    piVar9 = aiStack_10;
    do {
      iVar3 = *(int *)(&DAT_0042da70 + iVar8);
      uVar10 = iVar1 * iVar2 - *(int *)(&DAT_0042dac8 + iVar11) * iVar3;
      if (uVar12 <= uVar10) {
        uVar10 = uVar12;
      }
      iVar7 = ((int)uVar10 / iVar3) * iVar3;
      iVar4 = *(int *)(&DAT_0042da78 + iVar8);
      *(int *)(&DAT_0042dac4 + iVar11) = *(int *)(&DAT_0042dac4 + iVar11) - iVar7;
      *piVar9 = iVar4 + *(int *)(&DAT_0042dac8 + iVar11) * iVar3;
      iVar4 = *(int *)(&DAT_0042dac8 + iVar11);
      iVar5 = *(int *)(&DAT_0042da7c + iVar8);
      piVar9[1] = iVar7;
      piVar9 = piVar9 + 2;
      *(int *)(&DAT_0042dac8 + iVar11) = (iVar4 + (int)uVar10 / iVar3) % iVar5;
      uVar12 = *(uint *)(&DAT_0042dac4 + iVar11);
      iVar13 = iVar13 + 1;
    } while (uVar6 < uVar12);
  }
  if (iVar13 != 0) {
    Snd_StreamLoadChunk(param_1,aiStack_10,iVar13);
  }
  return;
}

// 0x00153e24  size 0x4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* follows Snd_StreamFill; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void Snd_StreamFill_Orphan1(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _s_SndVar5 = 0;
  _s_SndVar6 = 0;
  *param_3 = 3;
  return;
}

// 0x00153e30  size 0x1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* follows Snd_StreamFill; no call, branch, pointer or constant reference (exception landing pad or
   dead code) */

void Snd_StreamFill_Orphan2(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _s_SndVar5 = 0;
  _s_SndVar6 = 0;
  *param_3 = 3;
  return;
}

// 0x00153e50  size 0x174
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_StreamPlayAll(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar6 = 0;
  uVar5 = 0;
  iVar3 = (int)param_1 * 0x28;
  uVar1 = *(uint *)(iVar3 + 0x42dab0);
  iVar2 = _s_SndVar27 + uVar1 * 0x50;
  if (uVar1 != 0) {
    if (8 < uVar1) {
      iVar4 = _s_SndVar27;
      do {
        uVar5 = uVar5 + 8;
        iVar6 = iVar6 + *(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 0x6c) + *(int *)(iVar4 + 0xbc) +
                *(int *)(iVar4 + 0x10c) + *(int *)(iVar4 + 0x15c) + *(int *)(iVar4 + 0x1ac) +
                *(int *)(iVar4 + 0x1fc) + *(int *)(iVar4 + 0x24c);
        iVar4 = iVar4 + 0x280;
      } while (uVar5 < uVar1 - 8);
    }
    if (uVar5 < uVar1) {
      iVar4 = _s_SndVar27 + uVar5 * 0x50;
      do {
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + *(int *)(iVar4 + 0x1c);
        iVar4 = iVar4 + 0x50;
      } while (uVar5 < uVar1);
    }
  }
  uStack_10 = *(undefined4 *)(iVar2 + 0x10);
  uStack_c = *(undefined4 *)(iVar2 + 0x14);
  uStack_8 = *(undefined4 *)(iVar2 + 0x1c);
  (&s_Snd_LoadSystemBanks_1)[iVar3] = 1;
  *(int *)(iVar3 + 0x42dab4) = iVar6;
  *(undefined4 *)(iVar3 + 0x42dab8) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar3 + 0x42dabc) = 0;
  *(undefined4 *)(&DAT_0042dac4 + iVar3) = 0;
  *(undefined4 *)(&DAT_0042dac8 + iVar3) = 0;
  DisableIntc();
  _s_SndVar5 = Snd_StreamFill_Orphan2;
  _s_SndVar6 = &s_Snd_LoadSystemBanks_1 + iVar3;
  IopStrm_Play(param_1,&uStack_10);
  EnableIntc(1);
  return;
}

// 0x00153fd0  size 0x24c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_StreamUpdate(void)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uStack_8;
  int iStack_4;
  
  uVar7 = 0;
  puVar6 = &s_SndVar1;
  puVar5 = puVar6;
  do {
    pbVar8 = puVar6 + 0x298;
    lVar3 = Rpc_GetPendingCount(0x42d824);
    if (lVar3 == 0) {
      return;
    }
    bVar1 = *pbVar8;
    if (bVar1 < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar1) {
      case 2:
        Snd_StreamPlayAll(*(undefined4 *)(puVar6 + 0x29c));
        break;
      case 3:
        uStack_8 = *(undefined4 *)(puVar5 + 0x268);
        iStack_4 = *(int *)(puVar5 + 0x260) * *(int *)(puVar5 + 0x26c);
        Snd_StreamFill(*(undefined4 *)(puVar6 + 0x29c),&uStack_8,1);
        break;
      case 4:
        iVar4 = *(int *)(puVar6 + 0x29c);
        IopStrm_Flush(*(undefined4 *)(&s_Snd_LoadSystemBanks_2 + iVar4 * 0x28));
        (&s_Snd_LoadSystemBanks_1)[iVar4 * 0x28] = 5;
        break;
      case 6:
        iVar4 = *(int *)(puVar6 + 0x29c) * 0x28;
        DisableIntc(1);
        _s_SndVar5 = Snd_QueueCmd4_Orphan1;
        _s_SndVar6 = &s_Snd_LoadSystemBanks_1 + iVar4;
        IopStrm_Stop(*(undefined4 *)(&s_Snd_LoadSystemBanks_2 + iVar4),
                     *(undefined4 *)(&s_Snd_LoadSystemBanks_3 + iVar4));
        (&s_Snd_LoadSystemBanks_1)[iVar4] = 7;
        EnableIntc(1);
        break;
      case 8:
        if (*(int *)(puVar6 + 0x2b0) == 1) {
          IopStrm_IsStopped(*(undefined4 *)(puVar6 + 0x29c));
          *pbVar8 = 9;
        }
        break;
      case 9:
        if ((bVar1 == 9) && (*(int *)(puVar6 + 0x2b0) == 0)) {
          *pbVar8 = 10;
        }
        else {
          cVar2 = IopStrm_GetState(*(undefined4 *)(puVar6 + 0x29c));
          if (cVar2 == '\0') {
            lVar3 = File_IsBusy(*(undefined4 *)(puVar6 + 700));
            if (lVar3 != 0) {
              *pbVar8 = 0;
            }
          }
          else if (*pbVar8 == 10) {
            IopStrm_IsPlaying(*(undefined4 *)(puVar6 + 0x29c));
          }
        }
      }
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 0x28;
    puVar5 = puVar5 + 0x1c;
  } while (uVar7 < 2);
  uVar7 = 0;
  puVar5 = &s_SndVar1;
  do {
    DisableIntc(1);
    if ((puVar5[0x298] == '\x05') &&
       (lVar3 = IopStrm_WaitIdle(*(undefined4 *)(puVar5 + 0x29c)), lVar3 != 0)) {
      puVar5[0x298] = '\x06';
    }
    EnableIntc(1);
    uVar7 = uVar7 + 1;
    puVar5 = puVar5 + 0x28;
  } while (uVar7 < 2);
  return;
}

