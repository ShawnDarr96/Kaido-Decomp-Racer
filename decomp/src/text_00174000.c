// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00174000 - 0x00178000
#include "ghidra_types.h"

// 0x001743e0  size 0xe4
void MovieTex_Upload(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auStack_40 [20];
  uint uStack_2c;
  
  uVar1 = param_1[9];
  Pkt_Init(auStack_40,(char)param_1[4],2,0);
  Pkt_SubmitToChain(auStack_40,param_1[5]);
  if (param_1[7] != 0) {
    uStack_2c = param_1[7];
  }
  if ((*param_1 & 2) != 0) {
    Pkt_End(auStack_40);
  }
  Pkt_SetFrame(auStack_40,param_3,param_4,0);
  Pkt_CloseDmaTag(auStack_40,uVar1 + param_2 * 0x10);
  Pkt_SetFrame(auStack_40,0,0,0);
  Pkt_Submit(auStack_40,param_1[6]);
  return;
}

// 0x001744d0  size 0x7f0
void MovieTex_BuildPacket
               (uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uStack_140;
  uint uStack_110;
  uint uStack_b0;
  int iStack_a0;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_40 [64];
  
  uVar3 = param_1[9];
  uVar1 = param_6 + 0xfU >> 4;
  uVar2 = param_7 + 0xfU >> 4;
  if (param_1[7] == 0) {
    Sprite_GetPoolCount((char)param_1[4],&uStack_50);
    Sprite_GetPoolInfo((char)param_1[4],&fStack_60);
  }
  else {
    Gfx_GetViewportSize(param_1[7],&uStack_50);
    uVar7 = param_1[7];
    fStack_60 = *(float *)(uVar7 + 0xd4);
    fStack_5c = *(float *)(uVar7 + 0xd8);
    fStack_58 = *(float *)(uVar7 + 0xdc);
    fStack_54 = *(float *)(uVar7 + 0xe0);
  }
  Pkt_Init(auStack_40,5,(char)param_1[4],uVar3 + param_2 * 0x10);
  Pkt_SubmitToChain(auStack_40,0);
  iStack_a0 = 0;
  if (uVar1 != 0) {
    do {
      uVar15 = 0;
      if (uVar2 != 0) {
        uVar3 = param_4 + iStack_a0 * 0x100;
        do {
          if (param_1[2] < uVar1 - iStack_a0) {
            uStack_110 = param_1[2];
          }
          else {
            uStack_110 = uVar1 - iStack_a0;
          }
          iVar14 = (int)uVar15;
          uVar7 = param_1[3];
          if (uVar2 - iVar14 <= param_1[3]) {
            uVar7 = uVar2 - iVar14;
          }
          if (((*param_1 & 1) != 0) && (uStack_b0 = 0, uStack_110 != 0)) {
            iVar11 = 0;
            do {
              uVar12 = 0;
              if (uVar7 != 0) {
                iVar9 = 0;
                do {
                  uStack_80 = param_1[1];
                  uStack_7c = Tex_GetBufferWidth(0,uStack_110 << 4);
                  uStack_78 = 0;
                  uStack_6c = 0x10;
                  uStack_68 = 0x10;
                  iStack_74 = iVar11;
                  iStack_70 = iVar9;
                  Pkt_AddSwizzledImage
                            (auStack_40,&uStack_80,
                             param_3 + (iVar14 + uVar12 + uVar2 * (iStack_a0 + uStack_b0)) * 0x400);
                  uVar12 = uVar12 + 1;
                  iVar9 = iVar9 + 0x10;
                } while (uVar12 < uVar7);
              }
              uStack_b0 = uStack_b0 + 1;
              iVar11 = iVar11 + 0x10;
            } while (uStack_b0 < uStack_110);
          }
          if ((*param_1 & 2) != 0) {
            iVar11 = uStack_110 * 0x10;
            uVar15 = Tex_GetBufferWidth(0,iVar11);
            uVar12 = param_1[1];
            uVar5 = Bits_HighestSet(iVar11);
            uVar6 = Bits_HighestSet(uVar7 * 0x10);
            fVar16 = fStack_5c;
            uStack_110 = uStack_110 << 8;
            uVar13 = uVar7 << 8;
            if ((int)uVar3 >> 0x1f < 0) {
              fVar18 = (float)uVar3;
            }
            else {
              fVar18 = (float)(int)uVar3;
            }
            fVar18 = fStack_58 * 16.0 + fStack_60 * fVar18 + (float)uStack_50 + 0.0;
            if (fVar18 < 2.1474836e+09) {
              uVar8 = (ulong)(int)fVar18;
            }
            else {
              uVar8 = (long)(int)(fVar18 - 2.1474836e+09) | 0xffffffff80000000;
            }
            fVar18 = fStack_54 * 16.0 +
                     fStack_5c * (float)(uint)(param_5 + iVar14 * 0x100) + (float)uStack_4c + 0.0;
            if (fVar18 < 2.1474836e+09) {
              uVar10 = (ulong)(int)fVar18;
            }
            else {
              uVar10 = (long)(int)(fVar18 - 2.1474836e+09) | 0xffffffff80000000;
            }
            if ((long)uVar8 < 0) {
              fVar18 = (float)(uVar8 & 0xffffffff);
            }
            else {
              fVar18 = (float)(int)uVar8;
            }
            fVar18 = fStack_60 * (float)uStack_110 + fVar18 + 0.0;
            if (fVar18 < 2.1474836e+09) {
              uStack_140 = (uint)fVar18;
            }
            else {
              uStack_140 = (int)(fVar18 - 2.1474836e+09) | 0x80000000;
            }
            puVar4 = (undefined8 *)Pkt_AllocVif(auStack_40,0,0);
            *puVar4 = 0;
            puVar4[1] = 0x3f;
            puVar4[2] = 0x114;
            puVar4[3] = 0;
            puVar4[4] = 0x30000;
            puVar4[5] = 0x47;
            puVar4[6] = 10;
            puVar4[7] = 0x42;
            puVar4[8] = (uVar6 & 0xffffffff) << 0x1e |
                        (ulong)uVar12 | (uVar15 & 0xffffffff) << 0xe | (uVar5 & 0xffffffff) << 0x1a
                        | 0xc00000000;
            puVar4[9] = 6;
            puVar4[10] = 0;
            puVar4[0xb] = 0x14;
            puVar4[0xc] = 0x808080;
            puVar4[0xd] = 1;
            puVar4[0xe] = (ulong)(iVar11 - 1) << 0xe | 10 | (ulong)(uVar7 * 0x10 - 1) << 0x22;
            puVar4[0xf] = 8;
            uVar15 = (uVar10 & 0xffffffff) << 0x10;
            puVar4[0x10] = 0;
            puVar4[0x11] = 3;
            puVar4[0x12] = uVar8 & 0xffffffff | uVar15;
            puVar4[0x13] = 4;
            puVar4[0x14] = (ulong)uStack_110;
            puVar4[0x15] = 3;
            puVar4[0x16] = uStack_140 | uVar15;
            puVar4[0x17] = 4;
            puVar4[0x18] = (ulong)uVar13 << 0x10;
            puVar4[0x19] = 3;
            if ((int)uVar13 < 0) {
              fVar18 = (float)((uVar7 & 0xffffff) << 7);
              fVar18 = fVar18 + fVar18;
            }
            else {
              fVar18 = (float)(int)uVar13;
            }
            if ((long)uVar10 < 0) {
              fVar17 = (float)(uVar10 & 0xffffffff);
            }
            else {
              fVar17 = (float)(int)uVar10;
            }
            fVar16 = fVar16 * fVar18 + fVar17 + 0.0;
            if (fVar16 < 2.1474836e+09) {
              uVar15 = (ulong)(int)fVar16;
            }
            else {
              uVar15 = (long)(int)(fVar16 - 2.1474836e+09) | 0xffffffff80000000;
            }
            uVar15 = (uVar15 & 0xffffffff) << 0x10;
            puVar4[0x1a] = uVar8 & 0xffffffff | uVar15;
            puVar4[0x1b] = 4;
            puVar4[0x1c] = (ulong)uStack_110 | (ulong)uVar13 << 0x10;
            puVar4[0x1d] = 3;
            puVar4[0x1e] = uStack_140 | uVar15;
            puVar4[0x1f] = 4;
            Pkt_AddGifTag(auStack_40,0x10,0x13000000);
          }
          uVar15 = (ulong)(int)(iVar14 + param_1[3]);
        } while (uVar15 < uVar2);
      }
      iStack_a0 = iStack_a0 + param_1[2];
    } while ((ulong)(long)iStack_a0 < (ulong)uVar1);
  }
  Pkt_Submit(auStack_40,0);
  return;
}

// 0x00174cd0  size 0x40
void MovieTex_Reset(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar1 + 8) = 0;
      iVar1 = iVar1 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  return;
}

// 0x00174d10  size 0x8c
void MovieTex_Free(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar2 = 0;
    do {
      DmaBuf_Free(*(int *)(param_1 + 0x24) + iVar2);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
    iVar2 = *(int *)(param_1 + 0x24);
  }
  if (iVar2 != 0) {
    Mem_Free();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// 0x00174da0  size 0x19c
undefined4 MovieTex_Init(uint *param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  *param_1 = param_3[2];
  param_1[1] = param_3[4];
  param_1[2] = param_3[5];
  param_1[3] = param_3[6];
  *(char *)(param_1 + 4) = (char)param_3[7];
  param_1[5] = param_3[9];
  param_1[6] = param_3[10];
  param_1[7] = param_3[8];
  param_1[8] = param_3[3];
  param_1[9] = 0;
  uVar3 = Mem_Alloc16(param_1[8] << 4);
  param_1[9] = uVar3;
  uVar3 = 0;
  if (param_1[8] != 0) {
    iVar7 = 0;
    do {
      uVar6 = *param_3 + 0xfU >> 4;
      uVar4 = param_3[1] + 0xfU >> 4;
      uVar1 = param_1[3];
      uVar2 = param_1[2];
      iVar5 = 1;
      if ((*param_1 & 1) != 0) {
        iVar5 = uVar4 * uVar6 * 0xe + 1;
      }
      if ((*param_1 & 2) != 0) {
        iVar5 = iVar5 + ((int)(uVar1 * ((int)(uVar4 + uVar1 + -1) / (int)uVar1)) / (int)uVar1) *
                        ((int)(uVar2 * ((int)(uVar6 + uVar2 + -1) / (int)uVar2)) / (int)uVar2) *
                        0x11;
      }
      DmaBuf_Alloc(param_1[9] + iVar7,param_2,iVar5);
      uVar3 = uVar3 + 1;
      iVar7 = iVar7 + 0x10;
    } while (uVar3 < param_1[8]);
  }
  return 1;
}

// 0x00174f40  size 0xeb8
/* WARNING: Removing unreachable block (ram,0x00175a28) */

void maybe_SaveData_Serialize(int *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iStack_9e0;
  undefined2 uStack_9c0;
  undefined2 uStack_9be;
  undefined1 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined1 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined1 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined2 uStack_988;
  undefined2 uStack_986;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 auStack_97c [23];
  undefined4 auStack_920 [23];
  undefined4 auStack_8c4 [33];
  short sStack_840;
  short sStack_83e;
  char cStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined1 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined1 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined2 uStack_808;
  undefined2 uStack_806;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 auStack_7fc [23];
  undefined4 auStack_7a0 [23];
  undefined4 auStack_744 [16];
  int iStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined2 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  int iStack_6cc;
  undefined4 uStack_6c8;
  undefined2 uStack_6c0;
  short sStack_6be;
  undefined1 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined1 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined1 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined2 uStack_688;
  undefined2 uStack_686;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 auStack_67c [23];
  undefined4 auStack_620 [23];
  undefined4 auStack_5c4 [16];
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined2 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  short sStack_540;
  short sStack_53e;
  char cStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined1 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined1 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined2 uStack_508;
  undefined2 uStack_506;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 auStack_4fc [23];
  undefined4 auStack_4a0 [23];
  undefined4 auStack_444 [16];
  int iStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined2 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  int aiStack_3cc [11];
  undefined2 uStack_3a0;
  short sStack_39e;
  undefined1 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined1 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined1 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined2 uStack_368;
  undefined2 uStack_366;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 auStack_35c [23];
  undefined4 auStack_300 [23];
  undefined4 auStack_2a4 [16];
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined2 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  short sStack_220;
  short sStack_21e;
  char cStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined1 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 auStack_1dc [23];
  undefined4 auStack_180 [23];
  undefined4 auStack_124 [16];
  int iStack_e4;
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
  undefined2 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int aiStack_a0 [3];
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    RivalDb_Copy(&uStack_9c0,(short)param_3);
    puVar6 = auStack_97c;
    puVar5 = auStack_1dc;
    iVar17 = 0x17;
    uStack_210 = uStack_9b0;
    uStack_208 = uStack_9a8;
    cStack_21c = uStack_9bc;
    uStack_204 = uStack_9a4;
    uStack_218 = uStack_9b8;
    uStack_214 = uStack_9b4;
    uStack_1f8 = uStack_998;
    sStack_220 = uStack_9c0;
    sStack_21e = uStack_9be;
    uStack_20c = uStack_9ac;
    uStack_200 = uStack_9a0;
    uStack_1fc = uStack_99c;
    uStack_1e4 = uStack_984;
    uStack_1f4 = uStack_994;
    uStack_1f0 = uStack_990;
    uStack_1ec = uStack_98c;
    uStack_1e8 = uStack_988;
    uStack_1e6 = uStack_986;
    uStack_1e0 = uStack_980;
    do {
      iVar17 = iVar17 + -1;
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (0 < iVar17);
    puVar6 = auStack_920;
    puVar5 = auStack_180;
    iVar17 = 0x17;
    do {
      iVar17 = iVar17 + -1;
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (0 < iVar17);
    puVar6 = auStack_8c4;
    puVar5 = auStack_124;
    iVar17 = 8;
    do {
      iVar17 = iVar17 + -1;
      uVar1 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar1;
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
    } while (0 < iVar17);
    uStack_90 = uStack_9b0;
    aiStack_a0[2] = 0xffffffff;
    uStack_93 = 2;
    uStack_8c = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    aiStack_a0[1] = param_3;
    iStack_20 = param_3;
    aiStack_a0[0] = 1;
    uStack_44 = 0;
    uStack_43 = 2;
    uStack_2f = 2;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0xffffffff;
    uStack_34 = 0xffffffff;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_88 = 0xffffffff;
    uStack_84 = 0xffffffff;
    uStack_80 = 0;
    uStack_7f = 2;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0xffffffff;
    uStack_70 = 0xffffffff;
    uStack_6c = 0;
    uStack_6b = 2;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0xffffffff;
    uStack_5c = 0xffffffff;
    uStack_58 = 0;
    uStack_57 = 2;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_94 = 0;
  }
  else {
    iVar17 = 0;
    iStack_9e0 = -1;
    aiStack_3cc[3] = 0xffffffff;
    iVar18 = 0;
    aiStack_3cc[4] = 0xffffffff;
    aiStack_3cc[5] = 0xffffffff;
    aiStack_3cc[6] = 0xffffffff;
    aiStack_3cc[7] = 0xffffffff;
    aiStack_3cc[8] = 0xffffffff;
    do {
      RivalDb_Copy(&sStack_540,(short)iVar18);
      puVar6 = auStack_4fc;
      sStack_220 = sStack_540;
      uStack_208 = uStack_528;
      puVar5 = auStack_1dc;
      sStack_21e = sStack_53e;
      uStack_204 = uStack_524;
      cStack_21c = cStack_53c;
      iVar3 = 0x17;
      uStack_218 = uStack_538;
      uStack_214 = uStack_534;
      uStack_210 = uStack_530;
      uStack_20c = uStack_52c;
      uStack_200 = uStack_520;
      uStack_1fc = uStack_51c;
      uStack_1f8 = uStack_518;
      uStack_1f4 = uStack_514;
      uStack_1f0 = uStack_510;
      uStack_1ec = uStack_50c;
      uStack_1e8 = uStack_508;
      uStack_1e6 = uStack_506;
      uStack_1e4 = uStack_504;
      uStack_1e0 = uStack_500;
      do {
        iVar3 = iVar3 + -1;
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (0 < iVar3);
      iVar3 = 0x17;
      puVar6 = auStack_4a0;
      puVar5 = auStack_180;
      do {
        iVar3 = iVar3 + -1;
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (0 < iVar3);
      iVar3 = 8;
      puVar6 = auStack_444;
      puVar5 = auStack_124;
      do {
        iVar3 = iVar3 + -1;
        uVar1 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar6 = puVar6 + 2;
        puVar5 = puVar5 + 2;
      } while (0 < iVar3);
      uStack_d8 = uStack_3f8;
      uStack_e0 = uStack_400;
      uStack_d4 = uStack_3f4;
      uStack_dc = uStack_3fc;
      uStack_d0 = uStack_3f0;
      uStack_cc = uStack_3ec;
      iStack_e4 = iStack_404;
      uStack_b8 = uStack_3d8;
      uStack_b4 = uStack_3d4;
      uStack_b0 = uStack_3d0;
      iStack_ac = aiStack_3cc[0];
      uStack_a8 = aiStack_3cc[1];
      uStack_c8 = uStack_3e8;
      uStack_c4 = uStack_3e4;
      uStack_c0 = uStack_3e0;
      uStack_bc = uStack_3dc;
      if (sStack_53e == -1) break;
      if ((long)param_3 == (long)sStack_540) {
        if (cStack_53c != '\x01') {
          iVar3 = 0;
          piVar16 = aiStack_3cc + 3;
LAB_00175290:
          if (*piVar16 == -1) {
            iVar17 = iVar17 + 1;
            aiStack_3cc[iVar3 + 3] = iVar18;
          }
          else {
            RivalDb_Copy(&uStack_6c0,(short)*piVar16);
            puVar6 = auStack_67c;
            uStack_3a0 = uStack_6c0;
            uStack_388 = uStack_6a8;
            puVar5 = auStack_35c;
            sStack_39e = sStack_6be;
            uStack_384 = uStack_6a4;
            uStack_39c = uStack_6bc;
            iVar4 = 0x17;
            uStack_398 = uStack_6b8;
            uStack_394 = uStack_6b4;
            uStack_390 = uStack_6b0;
            uStack_38c = uStack_6ac;
            uStack_380 = uStack_6a0;
            uStack_37c = uStack_69c;
            uStack_378 = uStack_698;
            uStack_374 = uStack_694;
            uStack_370 = uStack_690;
            uStack_36c = uStack_68c;
            uStack_368 = uStack_688;
            uStack_366 = uStack_686;
            uStack_364 = uStack_684;
            uStack_360 = uStack_680;
            do {
              iVar4 = iVar4 + -1;
              *puVar5 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar5 = puVar5 + 1;
            } while (0 < iVar4);
            iVar4 = 0x17;
            puVar6 = auStack_620;
            puVar5 = auStack_300;
            do {
              iVar4 = iVar4 + -1;
              *puVar5 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar5 = puVar5 + 1;
            } while (0 < iVar4);
            iVar4 = 8;
            puVar6 = auStack_5c4;
            puVar5 = auStack_2a4;
            do {
              iVar4 = iVar4 + -1;
              uVar1 = puVar6[1];
              *puVar5 = *puVar6;
              puVar5[1] = uVar1;
              puVar6 = puVar6 + 2;
              puVar5 = puVar5 + 2;
            } while (0 < iVar4);
            uStack_258 = uStack_578;
            uStack_254 = uStack_574;
            uStack_250 = uStack_570;
            uStack_24c = uStack_56c;
            uStack_260 = uStack_580;
            uStack_25c = uStack_57c;
            uStack_248 = uStack_568;
            uStack_244 = uStack_564;
            uStack_240 = uStack_560;
            uStack_264 = uStack_584;
            uStack_238 = uStack_558;
            uStack_234 = uStack_554;
            uStack_230 = uStack_550;
            uStack_22c = uStack_54c;
            uStack_228 = uStack_548;
            uStack_23c = uStack_55c;
            if (sStack_6be <= sStack_21e) goto code_r0x0017552c;
            iVar4 = 5;
            if (iVar3 < 5) {
              if (8 < (int)(5U - iVar3)) {
                bVar2 = false;
                bVar11 = false;
                bVar12 = false;
                if ((iVar3 < 6) && (-0x80000000 < iVar3)) {
                  bVar12 = true;
                }
                if ((bVar12) && (iVar3 != -0x80000000)) {
                  bVar11 = true;
                }
                if (bVar11) {
                  bVar12 = true;
                  if (((-iVar3 & 0x80000000U) == 0) && ((5U - iVar3 & 0x80000000) != 0)) {
                    bVar12 = false;
                  }
                  if (bVar12) {
                    bVar2 = true;
                  }
                }
                if (bVar2) {
                  piVar15 = aiStack_3cc + 8;
                  piVar14 = aiStack_3cc + 7;
                  piVar13 = aiStack_3cc + 6;
                  piVar10 = aiStack_3cc + 5;
                  piVar9 = aiStack_3cc + 4;
                  piVar8 = aiStack_3cc + 3;
                  piVar7 = aiStack_3cc + 2;
                  piVar16 = aiStack_3cc + 1;
                  do {
                    iVar4 = iVar4 + -8;
                    *piVar15 = piVar15[-1];
                    piVar15 = piVar15 + -8;
                    *piVar14 = piVar14[-1];
                    piVar14 = piVar14 + -8;
                    *piVar13 = piVar13[-1];
                    piVar13 = piVar13 + -8;
                    *piVar10 = piVar10[-1];
                    piVar10 = piVar10 + -8;
                    *piVar9 = piVar9[-1];
                    piVar9 = piVar9 + -8;
                    *piVar8 = piVar8[-1];
                    piVar8 = piVar8 + -8;
                    *piVar7 = piVar7[-1];
                    piVar7 = piVar7 + -8;
                    *piVar16 = piVar16[-1];
                    piVar16 = piVar16 + -8;
                  } while (iVar3 + 8 < iVar4);
                }
              }
              if (iVar3 < iVar4) {
                piVar16 = aiStack_3cc + iVar4 + 3;
                do {
                  iVar4 = iVar4 + -1;
                  *piVar16 = piVar16[-1];
                  piVar16 = piVar16 + -1;
                } while (iVar3 < iVar4);
              }
            }
            iVar17 = iVar17 + 1;
            aiStack_3cc[iVar3 + 3] = iVar18;
          }
          goto LAB_00175550;
        }
        iStack_9e0 = iVar18;
      }
      else if (iVar17 != 0) break;
LAB_00175550:
      iVar18 = iVar18 + 1;
    } while (iVar18 < 500);
    uStack_94 = 0;
    aiStack_a0[1] = 0xffffffff;
    aiStack_a0[2] = 0xffffffff;
    uStack_93 = 2;
    uStack_90 = 0;
    piVar16 = aiStack_a0;
    uStack_8c = 0;
    uStack_24 = 0;
    uStack_2f = 2;
    uStack_38 = 0xffffffff;
    uStack_34 = 0xffffffff;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_88 = 0xffffffff;
    uStack_84 = 0xffffffff;
    uStack_80 = 0;
    uStack_7f = 2;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0xffffffff;
    uStack_70 = 0xffffffff;
    uStack_6c = 0;
    uStack_6b = 2;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0xffffffff;
    uStack_5c = 0xffffffff;
    uStack_58 = 0;
    uStack_57 = 2;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    uStack_44 = 0;
    uStack_43 = 2;
    uStack_40 = 0;
    uStack_3c = 0;
    if (iStack_9e0 == -1) {
      aiStack_a0[0] = iVar17;
    }
    else {
      aiStack_a0[0] = iVar17 + 1;
      aiStack_3cc[iVar17 + 3] = iStack_9e0;
    }
    iVar18 = 0;
    iVar17 = 0;
    iStack_20 = aiStack_3cc[3];
    uStack_1c = aiStack_3cc[4];
    uStack_18 = aiStack_3cc[5];
    uStack_14 = aiStack_3cc[6];
    uStack_10 = aiStack_3cc[7];
    uStack_c = aiStack_3cc[8];
    do {
      iVar3 = aiStack_3cc[iVar18 + 3];
      if (iVar3 == -1) break;
      RivalDb_Copy(&sStack_840,(short)iVar3);
      puVar6 = auStack_7fc;
      sStack_220 = sStack_840;
      uStack_208 = uStack_828;
      sStack_21e = sStack_83e;
      uStack_204 = uStack_824;
      iVar3 = 0x17;
      puVar5 = auStack_1dc;
      cStack_21c = cStack_83c;
      uStack_218 = uStack_838;
      uStack_214 = uStack_834;
      uStack_210 = uStack_830;
      uStack_20c = uStack_82c;
      uStack_200 = uStack_820;
      uStack_1fc = uStack_81c;
      uStack_1f8 = uStack_818;
      uStack_1f4 = uStack_814;
      uStack_1f0 = uStack_810;
      uStack_1ec = uStack_80c;
      uStack_1e8 = uStack_808;
      uStack_1e6 = uStack_806;
      uStack_1e4 = uStack_804;
      uStack_1e0 = uStack_800;
      do {
        iVar3 = iVar3 + -1;
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (0 < iVar3);
      iVar3 = 0x17;
      puVar6 = auStack_7a0;
      puVar5 = auStack_180;
      do {
        iVar3 = iVar3 + -1;
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (0 < iVar3);
      iVar3 = 8;
      puVar6 = auStack_744;
      puVar5 = auStack_124;
      do {
        iVar3 = iVar3 + -1;
        uVar1 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar6 = puVar6 + 2;
        puVar5 = puVar5 + 2;
      } while (0 < iVar3);
      uStack_d8 = uStack_6f8;
      uStack_d4 = uStack_6f4;
      piVar16[1] = aiStack_3cc[iVar18 + 3];
      uStack_d0 = uStack_6f0;
      uStack_cc = uStack_6ec;
      uStack_e0 = uStack_700;
      uStack_dc = uStack_6fc;
      uStack_c8 = uStack_6e8;
      uStack_c4 = uStack_6e4;
      uStack_c0 = uStack_6e0;
      uStack_bc = uStack_6dc;
      iStack_e4 = iStack_704;
      uStack_b8 = uStack_6d8;
      uStack_b4 = uStack_6d4;
      uStack_b0 = uStack_6d0;
      iStack_ac = iStack_6cc;
      uStack_a8 = uStack_6c8;
      iVar3 = iVar18;
      if (iStack_704 != 0) {
        iVar3 = iVar18 + 1;
        piVar16[2] = aiStack_3cc[iVar18 + 4];
      }
      iVar17 = iVar17 + 1;
      iVar18 = iVar3 + 1;
      piVar16 = piVar16 + 5;
    } while (iVar17 < 6);
  }
  piVar16 = aiStack_a0;
  iVar17 = 0x13;
  do {
    iVar17 = iVar17 + -1;
    iVar18 = piVar16[1];
    *param_1 = *piVar16;
    param_1[1] = iVar18;
    piVar16 = piVar16 + 2;
    param_1 = param_1 + 2;
  } while (0 < iVar17);
  return;
code_r0x0017552c:
  iVar3 = iVar3 + 1;
  piVar16 = piVar16 + 1;
  if (5 < iVar3) goto LAB_00175550;
  goto LAB_00175290;
}

// 0x00175e10  size 0x850
void maybe_RaceSetup_BuildCarEntry(undefined4 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined1 auStack_540 [24];
  undefined1 auStack_528 [16];
  undefined1 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined1 uStack_504;
  undefined4 uStack_500;
  undefined4 auStack_4fc [16];
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 auStack_3f4 [16];
  undefined4 auStack_3b4 [16];
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
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
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 auStack_21c [32];
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined1 uStack_16f;
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
  undefined4 auStack_c4 [24];
  undefined4 auStack_64 [25];
  
  uVar2 = *(undefined2 *)((int)param_2 + 0xc);
  uVar6 = CarRec_GetPartData(param_2,0);
  uVar4 = CarDb_GetModelIndex(uVar2);
  *param_1 = uVar4;
  puVar5 = (undefined2 *)CarRec_GetPartSlot(param_2,0xf);
  sVar3 = PartDb_GetInfo(*puVar5);
  lVar7 = CarRec_GetPartData(param_2,0xf);
  if (sVar3 == 0x9d) {
    unaff_s2 = 4;
  }
  else if (sVar3 == 0x98) {
    unaff_s2 = 3;
  }
  else if (sVar3 == 0x93) {
    unaff_s2 = 2;
  }
  else if (sVar3 == 0x8d) {
    if (lVar7 < 1) {
      unaff_s2 = 0;
    }
    else {
      unaff_s2 = 1;
    }
  }
  puVar5 = (undefined2 *)CarRec_GetPartSlot(param_2,0x10);
  sVar3 = PartDb_GetInfo(*puVar5);
  lVar8 = CarRec_GetPartData(param_2,0x10);
  if (sVar3 == 0x9d) {
    unaff_s1 = 4;
  }
  else if (sVar3 == 0x98) {
    unaff_s1 = 3;
  }
  else if (sVar3 == 0x93) {
    unaff_s1 = 2;
  }
  else if (sVar3 == 0x8d) {
    if (lVar8 < 1) {
      unaff_s1 = 0;
    }
    else {
      unaff_s1 = 1;
    }
  }
  CarDb_BuildSpec(auStack_540,uVar2,uVar6,unaff_s2,lVar7,unaff_s1,lVar8);
  puVar11 = auStack_540;
  puVar10 = param_1 + 1;
  iVar9 = 0xc;
  do {
    iVar9 = iVar9 + -1;
    uVar1 = puVar11[1];
    *(undefined1 *)puVar10 = *puVar11;
    puVar11 = puVar11 + 2;
    *(undefined1 *)((int)puVar10 + 1) = uVar1;
    puVar10 = (undefined4 *)((int)puVar10 + 2);
  } while (0 < iVar9);
  puVar11 = auStack_528;
  puVar10 = param_1 + 7;
  iVar9 = 8;
  do {
    iVar9 = iVar9 + -1;
    uVar1 = puVar11[1];
    *(undefined1 *)puVar10 = *puVar11;
    puVar11 = puVar11 + 2;
    *(undefined1 *)((int)puVar10 + 1) = uVar1;
    puVar10 = (undefined4 *)((int)puVar10 + 2);
  } while (0 < iVar9);
  puVar12 = auStack_4fc;
  puVar10 = param_1 + 0x12;
  iVar9 = 8;
  *(undefined1 *)(param_1 + 0xb) = uStack_518;
  param_1[0xc] = uStack_514;
  param_1[0xd] = uStack_510;
  param_1[0xe] = uStack_50c;
  param_1[0xf] = uStack_508;
  *(undefined1 *)(param_1 + 0x10) = uStack_504;
  param_1[0x11] = uStack_500;
  do {
    iVar9 = iVar9 + -1;
    uVar4 = puVar12[1];
    *puVar10 = *puVar12;
    puVar12 = puVar12 + 2;
    puVar10[1] = uVar4;
    puVar10 = puVar10 + 2;
  } while (0 < iVar9);
  puVar12 = auStack_3f4;
  puVar10 = param_1 + 0x53;
  iVar9 = 8;
  param_1[0x22] = uStack_4bc;
  param_1[0x23] = uStack_4b8;
  param_1[0x24] = uStack_4b4;
  param_1[0x25] = uStack_4b0;
  param_1[0x26] = uStack_4ac;
  param_1[0x28] = uStack_4a0;
  param_1[0x29] = uStack_49c;
  param_1[0x2a] = uStack_498;
  param_1[0x2b] = uStack_494;
  param_1[0x2c] = uStack_490;
  param_1[0x30] = uStack_480;
  param_1[0x31] = uStack_47c;
  param_1[0x32] = uStack_478;
  param_1[0x33] = uStack_474;
  param_1[0x34] = uStack_470;
  param_1[0x35] = uStack_46c;
  param_1[0x36] = uStack_468;
  param_1[0x37] = uStack_464;
  param_1[0x38] = uStack_460;
  param_1[0x39] = uStack_45c;
  param_1[0x3a] = uStack_458;
  param_1[0x3b] = uStack_454;
  param_1[0x3c] = uStack_450;
  param_1[0x3d] = uStack_44c;
  param_1[0x3e] = uStack_448;
  param_1[0x3f] = uStack_444;
  param_1[0x40] = uStack_440;
  param_1[0x44] = uStack_430;
  param_1[0x45] = uStack_42c;
  param_1[0x46] = uStack_428;
  param_1[0x47] = uStack_424;
  param_1[0x48] = uStack_420;
  param_1[0x49] = uStack_41c;
  param_1[0x4a] = uStack_418;
  param_1[0x4b] = uStack_414;
  param_1[0x4c] = uStack_410;
  param_1[0x4d] = uStack_40c;
  param_1[0x4e] = uStack_408;
  param_1[0x4f] = uStack_404;
  param_1[0x50] = uStack_400;
  param_1[0x51] = uStack_3fc;
  param_1[0x52] = uStack_3f8;
  do {
    iVar9 = iVar9 + -1;
    uVar4 = puVar12[1];
    *puVar10 = *puVar12;
    puVar12 = puVar12 + 2;
    puVar10[1] = uVar4;
    puVar10 = puVar10 + 2;
  } while (0 < iVar9);
  puVar12 = auStack_3b4;
  puVar10 = param_1 + 99;
  iVar9 = 8;
  do {
    iVar9 = iVar9 + -1;
    uVar4 = puVar12[1];
    *puVar10 = *puVar12;
    puVar12 = puVar12 + 2;
    puVar10[1] = uVar4;
    puVar10 = puVar10 + 2;
  } while (0 < iVar9);
  puVar12 = auStack_21c;
  puVar10 = param_1 + 0xc9;
  iVar9 = 0x10;
  param_1[0x73] = uStack_374;
  param_1[0x74] = uStack_370;
  param_1[0x75] = uStack_36c;
  param_1[0x76] = uStack_368;
  param_1[0x77] = uStack_364;
  param_1[0x78] = uStack_360;
  param_1[0x79] = uStack_35c;
  param_1[0x7a] = uStack_358;
  param_1[0x7b] = uStack_354;
  param_1[0x7c] = uStack_350;
  param_1[0x7d] = uStack_34c;
  param_1[0x7e] = uStack_348;
  param_1[0x7f] = uStack_344;
  param_1[0x80] = uStack_340;
  param_1[0x81] = uStack_33c;
  param_1[0x82] = uStack_338;
  param_1[0x83] = uStack_334;
  param_1[0x84] = uStack_330;
  param_1[0x85] = uStack_32c;
  param_1[0x86] = uStack_328;
  param_1[0x87] = uStack_324;
  param_1[0x88] = uStack_320;
  param_1[0x89] = uStack_31c;
  param_1[0x8a] = uStack_318;
  param_1[0x8b] = uStack_314;
  param_1[0x8c] = uStack_310;
  param_1[0x8d] = uStack_30c;
  param_1[0x8e] = uStack_308;
  param_1[0x8f] = uStack_304;
  param_1[0x90] = uStack_300;
  param_1[0x91] = uStack_2fc;
  param_1[0x92] = uStack_2f8;
  param_1[0x93] = uStack_2f4;
  param_1[0x94] = uStack_2f0;
  param_1[0x95] = uStack_2ec;
  param_1[0x96] = uStack_2e8;
  param_1[0x97] = uStack_2e4;
  param_1[0x98] = uStack_2e0;
  param_1[0x99] = uStack_2dc;
  param_1[0x9a] = uStack_2d8;
  param_1[0x9b] = uStack_2d4;
  param_1[0x9c] = uStack_2d0;
  param_1[0x9d] = uStack_2cc;
  param_1[0x9e] = uStack_2c8;
  param_1[0x9f] = uStack_2c4;
  param_1[0xa0] = uStack_2c0;
  param_1[0xa1] = uStack_2bc;
  param_1[0xa2] = uStack_2b8;
  param_1[0xa3] = uStack_2b4;
  param_1[0xa4] = uStack_2b0;
  param_1[0xa5] = uStack_2ac;
  param_1[0xa6] = uStack_2a8;
  param_1[0xa7] = uStack_2a4;
  param_1[0xa8] = uStack_2a0;
  param_1[0xa9] = uStack_29c;
  param_1[0xaa] = uStack_298;
  param_1[0xab] = uStack_294;
  param_1[0xac] = uStack_290;
  param_1[0xad] = uStack_28c;
  param_1[0xae] = uStack_288;
  param_1[0xaf] = uStack_284;
  param_1[0xb0] = uStack_280;
  param_1[0xb1] = uStack_27c;
  param_1[0xb2] = uStack_278;
  param_1[0xb3] = uStack_274;
  param_1[0xb4] = uStack_270;
  param_1[0xb5] = uStack_26c;
  param_1[0xb6] = uStack_268;
  param_1[0xb7] = uStack_264;
  param_1[0xb8] = uStack_260;
  param_1[0xb9] = uStack_25c;
  param_1[0xba] = uStack_258;
  param_1[0xbb] = uStack_254;
  param_1[0xbc] = uStack_250;
  param_1[0xbd] = uStack_24c;
  param_1[0xbe] = uStack_248;
  param_1[0xbf] = uStack_244;
  param_1[0xc0] = uStack_240;
  param_1[0xc1] = uStack_23c;
  param_1[0xc2] = uStack_238;
  param_1[0xc3] = uStack_234;
  param_1[0xc4] = uStack_230;
  param_1[0xc5] = uStack_22c;
  param_1[0xc6] = uStack_228;
  param_1[199] = uStack_224;
  param_1[200] = uStack_220;
  do {
    iVar9 = iVar9 + -1;
    uVar4 = puVar12[1];
    *puVar10 = *puVar12;
    puVar12 = puVar12 + 2;
    puVar10[1] = uVar4;
    puVar10 = puVar10 + 2;
  } while (0 < iVar9);
  puVar12 = auStack_c4;
  puVar10 = param_1 + 0x11f;
  iVar9 = 0xc;
  param_1[0xe9] = uStack_19c;
  param_1[0xea] = uStack_198;
  param_1[0xeb] = uStack_194;
  param_1[0xec] = uStack_190;
  param_1[0xed] = uStack_18c;
  param_1[0xee] = uStack_188;
  param_1[0xef] = uStack_184;
  param_1[0xf0] = uStack_180;
  param_1[0xf1] = uStack_17c;
  param_1[0xf2] = uStack_178;
  param_1[0xf3] = uStack_174;
  *(undefined1 *)(param_1 + 0xf4) = uStack_170;
  *(undefined1 *)((int)param_1 + 0x3d1) = uStack_16f;
  param_1[0xf5] = uStack_16c;
  param_1[0xf6] = uStack_168;
  param_1[0xf7] = uStack_164;
  param_1[0xf8] = uStack_160;
  param_1[0xf9] = uStack_15c;
  param_1[0xfa] = uStack_158;
  param_1[0xfb] = uStack_154;
  param_1[0xfc] = uStack_150;
  param_1[0xfd] = uStack_14c;
  param_1[0xfe] = uStack_148;
  param_1[0xff] = uStack_144;
  param_1[0x100] = uStack_140;
  param_1[0x101] = uStack_13c;
  param_1[0x102] = uStack_138;
  param_1[0x103] = uStack_134;
  param_1[0x104] = uStack_130;
  param_1[0x105] = uStack_12c;
  param_1[0x106] = uStack_128;
  param_1[0x107] = uStack_124;
  param_1[0x108] = uStack_120;
  param_1[0x109] = uStack_11c;
  param_1[0x10a] = uStack_118;
  param_1[0x10b] = uStack_114;
  param_1[0x10c] = uStack_110;
  param_1[0x10d] = uStack_10c;
  param_1[0x10e] = uStack_108;
  param_1[0x10f] = uStack_104;
  param_1[0x110] = uStack_100;
  param_1[0x111] = uStack_fc;
  param_1[0x112] = uStack_f8;
  param_1[0x113] = uStack_f4;
  param_1[0x114] = uStack_f0;
  param_1[0x115] = uStack_ec;
  param_1[0x116] = uStack_e8;
  param_1[0x117] = uStack_e4;
  param_1[0x118] = uStack_e0;
  param_1[0x119] = uStack_dc;
  param_1[0x11a] = uStack_d8;
  param_1[0x11b] = uStack_d4;
  param_1[0x11c] = uStack_d0;
  param_1[0x11d] = uStack_cc;
  param_1[0x11e] = uStack_c8;
  do {
    iVar9 = iVar9 + -1;
    uVar4 = puVar12[1];
    *puVar10 = *puVar12;
    puVar12 = puVar12 + 2;
    puVar10[1] = uVar4;
    puVar10 = puVar10 + 2;
  } while (0 < iVar9);
  param_1 = param_1 + 0x137;
  puVar10 = auStack_64;
  iVar9 = 0xc;
  do {
    iVar9 = iVar9 + -1;
    uVar4 = puVar10[1];
    *param_1 = *puVar10;
    puVar10 = puVar10 + 2;
    param_1[1] = uVar4;
    param_1 = param_1 + 2;
  } while (0 < iVar9);
  return;
}

// 0x00176660  size 0x108
undefined4 RaceEntry_SetName(long param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  bVar2 = false;
  iVar4 = (int)param_1;
  if (((((param_1 != 0) && (*(int *)(iVar4 + 0x40c) != 0)) && (*(char *)(iVar4 + 0x28) == *param_2))
      && ((*(char *)(iVar4 + 0x29) == param_2[1] &&
          (*(int *)(iVar4 + 0x34) == *(int *)(param_2 + 0xc))))) &&
     ((*(int *)(iVar4 + 0x38) == *(int *)(param_2 + 0x10) &&
      ((*(char *)(iVar4 + 0x2a) == param_2[2] && (*(char *)(iVar4 + 0x37c) == param_2[0x354])))))) {
    bVar2 = true;
  }
  if ((bVar2) &&
     ((cVar1 = RaceCtx_GetMode(), cVar1 == '\x02' || (cVar1 = RaceCtx_GetMode(), cVar1 == '\x03'))))
  {
    memcpy(*(int *)(iRam0036f34c + 4) + 0x1d8,iVar4 + 0x40c,0x69784);
    uVar3 = 1;
  }
  return uVar3;
}

// 0x00176770  size 0x170
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 RaceEntry_SetCar(long param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 auStack_bc [47];
  
  uVar6 = 0;
  bVar2 = false;
  iVar7 = (int)param_1;
  if (((((param_1 != 0) && (*(int *)(iVar7 + 0x40c) != 0)) && (*(char *)(iVar7 + 0x28) == *param_2))
      && ((*(char *)(iVar7 + 0x29) == param_2[1] &&
          (*(int *)(iVar7 + 0x34) == *(int *)(param_2 + 0xc))))) &&
     ((*(int *)(iVar7 + 0x38) == *(int *)(param_2 + 0x10) &&
      ((*(char *)(iVar7 + 0x2a) == param_2[2] && (*(char *)(iVar7 + 0x37c) == param_2[0x354])))))) {
    bVar2 = true;
  }
  if ((bVar2) &&
     ((cVar1 = RaceCtx_GetMode(), cVar1 == '\x02' || (cVar1 = RaceCtx_GetMode(), cVar1 == '\x03'))))
  {
    auStack_d0[0] = *(undefined1 *)(iVar7 + 0x118);
    puVar5 = (undefined4 *)(iVar7 + 300);
    puVar4 = auStack_bc;
    iVar3 = 0x17;
    uStack_c8 = *(undefined1 *)(iVar7 + 0x120);
    uStack_c7 = *(undefined1 *)(iVar7 + 0x121);
    uStack_c4 = *(undefined4 *)(iVar7 + 0x124);
    uStack_c0 = *(undefined4 *)(iVar7 + 0x128);
    do {
      iVar3 = iVar3 + -1;
      uVar6 = puVar5[1];
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 2;
      puVar4[1] = uVar6;
      puVar4 = puVar4 + 2;
    } while (0 < iVar3);
    uStack_cc = 0x1c1;
    *(undefined1 *)(iVar7 + 0x121) = 1;
    PlayerRecord_Copy(1,auStack_d0);
    uVar6 = 1;
    *(undefined4 *)(_g_GameState + 0xe0) = 2;
  }
  return uVar6;
}

// 0x001768e0  size 0x80
undefined4 RaceEntry_Matches(long param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (((((param_1 != 0) && (iVar2 = (int)param_1, *(int *)(iVar2 + 0x40c) != 0)) &&
       (*(char *)(iVar2 + 0x28) == *param_2)) &&
      ((*(char *)(iVar2 + 0x29) == param_2[1] && (*(int *)(iVar2 + 0x34) == *(int *)(param_2 + 0xc))
       ))) && ((*(int *)(iVar2 + 0x38) == *(int *)(param_2 + 0x10) &&
               ((*(char *)(iVar2 + 0x2a) == param_2[2] &&
                (*(char *)(iVar2 + 0x37c) == param_2[0x354])))))) {
    uVar1 = 1;
  }
  return uVar1;
}

// 0x00176960  size 0x440
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
RaceEntry_Create(long param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5,
                undefined1 param_6,undefined1 param_7,long param_8)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar5 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar6 = (undefined1 *)param_2;
    puVar4 = (undefined4 *)(puVar6 + 0x4c);
    puVar7 = (undefined1 *)param_1;
    puVar3 = (undefined4 *)(puVar7 + 0x74);
    iVar2 = 0xf;
    puVar7[0x28] = *puVar6;
    puVar7[0x29] = puVar6[1];
    puVar7[0x2a] = puVar6[2];
    puVar7[0x2b] = puVar6[3];
    puVar7[0x2c] = puVar6[4];
    *(undefined4 *)(puVar7 + 0x30) = *(undefined4 *)(puVar6 + 8);
    *(undefined4 *)(puVar7 + 0x34) = *(undefined4 *)(puVar6 + 0xc);
    *(undefined4 *)(puVar7 + 0x38) = *(undefined4 *)(puVar6 + 0x10);
    *(undefined4 *)(puVar7 + 0x3c) = *(undefined4 *)(puVar6 + 0x14);
    uVar10 = *(undefined4 *)(puVar6 + 0x1c);
    uVar8 = *(undefined4 *)(puVar6 + 0x20);
    uVar9 = *(undefined4 *)(puVar6 + 0x24);
    *(undefined4 *)(puVar7 + 0x40) = *(undefined4 *)(puVar6 + 0x18);
    *(undefined4 *)(puVar7 + 0x44) = uVar10;
    *(undefined4 *)(puVar7 + 0x48) = uVar8;
    *(undefined4 *)(puVar7 + 0x4c) = uVar9;
    uVar10 = *(undefined4 *)(puVar6 + 0x2c);
    uVar8 = *(undefined4 *)(puVar6 + 0x30);
    uVar9 = *(undefined4 *)(puVar6 + 0x34);
    *(undefined4 *)(puVar7 + 0x50) = *(undefined4 *)(puVar6 + 0x28);
    *(undefined4 *)(puVar7 + 0x54) = uVar10;
    *(undefined4 *)(puVar7 + 0x58) = uVar8;
    *(undefined4 *)(puVar7 + 0x5c) = uVar9;
    uVar8 = *(undefined4 *)(puVar6 + 0x3c);
    *(undefined4 *)(puVar7 + 0x60) = *(undefined4 *)(puVar6 + 0x38);
    *(undefined4 *)(puVar7 + 100) = uVar8;
    *(undefined4 *)(puVar7 + 0x68) = *(undefined4 *)(puVar6 + 0x40);
    *(undefined4 *)(puVar7 + 0x6c) = *(undefined4 *)(puVar6 + 0x44);
    *(undefined4 *)(puVar7 + 0x70) = *(undefined4 *)(puVar6 + 0x48);
    do {
      iVar2 = iVar2 + -1;
      uVar8 = puVar4[1];
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 2;
      puVar3[1] = uVar8;
      puVar3 = puVar3 + 2;
    } while (0 < iVar2);
    puVar4 = (undefined4 *)(puVar6 + 0xf0);
    puVar3 = (undefined4 *)(puVar7 + 0x118);
    iVar2 = 0x99;
    *(undefined4 *)(puVar7 + 0xec) = *(undefined4 *)(puVar6 + 0xc4);
    uVar10 = *(undefined4 *)(puVar6 + 0xcc);
    uVar8 = *(undefined4 *)(puVar6 + 0xd0);
    uVar9 = *(undefined4 *)(puVar6 + 0xd4);
    *(undefined4 *)(puVar7 + 0xf0) = *(undefined4 *)(puVar6 + 200);
    *(undefined4 *)(puVar7 + 0xf4) = uVar10;
    *(undefined4 *)(puVar7 + 0xf8) = uVar8;
    *(undefined4 *)(puVar7 + 0xfc) = uVar9;
    uVar8 = *(undefined4 *)(puVar6 + 0xdc);
    *(undefined4 *)(puVar7 + 0x100) = *(undefined4 *)(puVar6 + 0xd8);
    *(undefined4 *)(puVar7 + 0x104) = uVar8;
    *(undefined4 *)(puVar7 + 0x108) = *(undefined4 *)(puVar6 + 0xe0);
    *(undefined4 *)(puVar7 + 0x10c) = *(undefined4 *)(puVar6 + 0xe4);
    *(undefined4 *)(puVar7 + 0x110) = *(undefined4 *)(puVar6 + 0xe8);
    *(undefined4 *)(puVar7 + 0x114) = *(undefined4 *)(puVar6 + 0xec);
    do {
      iVar2 = iVar2 + -1;
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (0 < iVar2);
    puVar7[0x37c] = puVar6[0x354];
    *(undefined4 *)(puVar7 + 0x380) = *(undefined4 *)(puVar6 + 0x358);
    *(undefined4 *)(puVar7 + 900) = *(undefined4 *)(puVar6 + 0x35c);
    *(undefined4 *)(puVar7 + 0x388) = *(undefined4 *)(puVar6 + 0x360);
    uVar10 = *(undefined4 *)(puVar6 + 0x368);
    uVar8 = *(undefined4 *)(puVar6 + 0x36c);
    uVar9 = *(undefined4 *)(puVar6 + 0x370);
    *(undefined4 *)(puVar7 + 0x38c) = *(undefined4 *)(puVar6 + 0x364);
    *(undefined4 *)(puVar7 + 0x390) = uVar10;
    *(undefined4 *)(puVar7 + 0x394) = uVar8;
    *(undefined4 *)(puVar7 + 0x398) = uVar9;
    uVar10 = *(undefined4 *)(puVar6 + 0x378);
    uVar8 = *(undefined4 *)(puVar6 + 0x37c);
    uVar9 = *(undefined4 *)(puVar6 + 0x380);
    *(undefined4 *)(puVar7 + 0x39c) = *(undefined4 *)(puVar6 + 0x374);
    *(undefined4 *)(puVar7 + 0x3a0) = uVar10;
    *(undefined4 *)(puVar7 + 0x3a4) = uVar8;
    *(undefined4 *)(puVar7 + 0x3a8) = uVar9;
    uVar8 = *(undefined4 *)(puVar6 + 0x388);
    uVar9 = *(undefined4 *)(puVar6 + 0x38c);
    *(undefined4 *)(puVar7 + 0x3ac) = *(undefined4 *)(puVar6 + 900);
    *(undefined4 *)(puVar7 + 0x3b0) = uVar8;
    *(undefined4 *)(puVar7 + 0x3b4) = uVar9;
    uVar8 = *(undefined4 *)(puVar6 + 0x394);
    *(undefined4 *)(puVar7 + 0x3b8) = *(undefined4 *)(puVar6 + 0x390);
    *(undefined4 *)(puVar7 + 0x3bc) = uVar8;
    uVar8 = *(undefined4 *)(puVar6 + 0x39c);
    uVar9 = *(undefined4 *)(puVar6 + 0x3a0);
    *(undefined4 *)(puVar7 + 0x3c0) = *(undefined4 *)(puVar6 + 0x398);
    *(undefined4 *)(puVar7 + 0x3c4) = uVar8;
    *(undefined4 *)(puVar7 + 0x3c8) = uVar9;
    uVar10 = *(undefined4 *)(puVar6 + 0x3a8);
    uVar8 = *(undefined4 *)(puVar6 + 0x3ac);
    uVar9 = *(undefined4 *)(puVar6 + 0x3b0);
    *(undefined4 *)(puVar7 + 0x3cc) = *(undefined4 *)(puVar6 + 0x3a4);
    *(undefined4 *)(puVar7 + 0x3d0) = uVar10;
    *(undefined4 *)(puVar7 + 0x3d4) = uVar8;
    *(undefined4 *)(puVar7 + 0x3d8) = uVar9;
    uVar10 = *(undefined4 *)(puVar6 + 0x3b8);
    uVar8 = *(undefined4 *)(puVar6 + 0x3bc);
    uVar9 = *(undefined4 *)(puVar6 + 0x3c0);
    *(undefined4 *)(puVar7 + 0x3dc) = *(undefined4 *)(puVar6 + 0x3b4);
    *(undefined4 *)(puVar7 + 0x3e0) = uVar10;
    *(undefined4 *)(puVar7 + 0x3e4) = uVar8;
    *(undefined4 *)(puVar7 + 1000) = uVar9;
    uVar8 = *(undefined4 *)(puVar6 + 0x3c8);
    uVar9 = *(undefined4 *)(puVar6 + 0x3cc);
    *(undefined4 *)(puVar7 + 0x3ec) = *(undefined4 *)(puVar6 + 0x3c4);
    *(undefined4 *)(puVar7 + 0x3f0) = uVar8;
    *(undefined4 *)(puVar7 + 0x3f4) = uVar9;
    uVar8 = *(undefined4 *)(puVar6 + 0x3d4);
    uVar9 = *(undefined4 *)(puVar6 + 0x3d8);
    *(undefined4 *)(puVar7 + 0x3f8) = *(undefined4 *)(puVar6 + 0x3d0);
    *(undefined4 *)(puVar7 + 0x3fc) = uVar8;
    *(undefined4 *)(puVar7 + 0x400) = uVar9;
    puVar7[0x404] = puVar6[0x3dc];
    *(undefined4 *)(puVar7 + 0x408) = *(undefined4 *)(puVar6 + 0x3ac8);
    *(int *)(puVar7 + 0x10) = (int)*(short *)(puVar7 + 0x124);
    *(undefined4 *)(puVar7 + 0x18) =
         *(undefined4 *)(_g_GameState + (char)puVar7[0x121] * 0x540 + 0x3e0);
    *(int *)(puVar7 + 0x14) = (int)(char)puVar6[0x40c];
    *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(puVar7 + *(int *)(puVar7 + 0xec) * 0x14 + 0x74)
    ;
    *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(puVar7 + *(int *)(puVar7 + 0xec) * 0x14 + 0x78)
    ;
    *puVar7 = puVar7[0x28];
    puVar7[0xc] = param_6;
    puVar7[0xd] = param_7;
    *(undefined4 *)(puVar7 + 4) = param_4;
    *(undefined4 *)(puVar7 + 8) = param_5;
    uVar1 = Profile_Get(0);
    uVar8 = Profile_GetDayClamped(uVar1);
    *(undefined4 *)(puVar7 + 0x24) = uVar8;
    if (*(int *)(puVar7 + 0x108) == 2) {
      if (param_8 != 0) {
        uVar8 = *(undefined4 *)(puVar6 + 0xf4);
        puVar4 = (undefined4 *)(puVar6 + 0x1d0);
        puVar3 = (undefined4 *)(puVar7 + 300);
        iVar2 = 0x17;
        *(int *)(puVar7 + 0x10) = (int)*(short *)(puVar6 + 0x1c8);
        puVar7[0x118] = puVar6[0x1bc];
        *(undefined4 *)(puVar7 + 0x11c) = *(undefined4 *)(puVar6 + 0x1c0);
        puVar7[0x120] = puVar6[0x1c4];
        puVar7[0x121] = puVar6[0x1c5];
        uVar9 = *(undefined4 *)(puVar6 + 0x1cc);
        *(undefined4 *)(puVar7 + 0x124) = *(undefined4 *)(puVar6 + 0x1c8);
        *(undefined4 *)(puVar7 + 0x128) = uVar9;
        do {
          iVar2 = iVar2 + -1;
          uVar9 = puVar4[1];
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 2;
          puVar3[1] = uVar9;
          puVar3 = puVar3 + 2;
        } while (0 < iVar2);
        *(undefined4 *)(puVar7 + 0x11c) = uVar8;
      }
      if ((*(uint *)(puVar7 + 0x1e8) & 0x60) != 0) {
        *(undefined4 *)(puVar7 + 0x108) = 1;
        CarRec_Init(puVar7 + 0x1e4);
      }
    }
    if (param_3 != 0) {
      memcpy(puVar7 + 0x40c,param_3,0x69784);
      uVar5 = 1;
    }
  }
  return uVar5;
}

// 0x00176da0  size 0x18
undefined4 Replay_GetHeader(void)

{
  undefined4 uVar1;
  
  if (puRam0036f1ac == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puRam0036f1ac;
  }
  return uVar1;
}

// 0x00176dc0  size 0x8
undefined4 maybe_Replay_GetSize(void)

{
  return uRam0036f1ac;
}

// 0x00176dd0  size 0x40
void Replay_Free(void)

{
  if (piRam0036f1ac != (int *)0x0) {
    if (*piRam0036f1ac != 0) {
      Mem_Free();
    }
    Mem_Free(piRam0036f1ac);
    piRam0036f1ac = (int *)0x0;
  }
  return;
}

// 0x00176e10  size 0x80
void Replay_Alloc(undefined8 param_1)

{
  int iVar1;
  
  if (piRam0036f1ac != (int *)0x0) {
    Mem_Free();
  }
  piRam0036f1ac = (int *)Mem_Alloc16(4,param_1);
  iVar1 = Mem_Alloc16(0x69b90,param_1);
  *piRam0036f1ac = iVar1;
  iVar1 = *piRam0036f1ac;
  *(undefined1 *)(iVar1 + 0xc) = 9;
  *(undefined1 *)(iVar1 + 0xd) = 0x13;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x40c) = 0;
  return;
}

// 0x00176e90  size 0x20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_GetVec3d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(_g_GameState + 0x3d4);
  uVar2 = *(undefined4 *)(_g_GameState + 0x3d8);
  *param_1 = *(undefined4 *)(_g_GameState + 0x3d0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

// 0x00176eb0  size 0x40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Color_Unpack(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uStack_10;
  
  iVar1 = _g_GameState;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uStack_10 = (undefined1)*param_1;
  *(undefined1 *)(_g_GameState + 0x3c4) = uStack_10;
  *(undefined4 *)(iVar1 + 0x3c8) = uVar2;
  *(undefined4 *)(iVar1 + 0x3cc) = uVar3;
  return;
}

// 0x00176ef0  size 0x20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_GetVec3c4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(_g_GameState + 0x3c8);
  uVar2 = *(undefined4 *)(_g_GameState + 0x3cc);
  *param_1 = *(undefined4 *)(_g_GameState + 0x3c4);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

// 0x00176f10  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_GetReplayValue(void)

{
  return **(undefined4 **)(_g_GameState + 0x3acc);
}

// 0x00176f20  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_GetGhostValue(void)

{
  return **(undefined4 **)(_g_GameState + 0x3ad0);
}

// 0x00176f30  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_3acc(void)

{
  return *(undefined4 *)(_g_GameState + 0x3acc);
}

// 0x00176f40  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_3ad0(void)

{
  return *(undefined4 *)(_g_GameState + 0x3ad0);
}

// 0x00176f50  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_364(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x364) = param_1;
  return;
}

// 0x00176f60  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_390(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x390) = param_1;
  return;
}

// 0x00176f70  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_364(void)

{
  return *(undefined4 *)(_g_GameState + 0x364);
}

// 0x00176f80  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_390(void)

{
  return *(undefined4 *)(_g_GameState + 0x390);
}

// 0x00176f90  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_360(void)

{
  return *(undefined4 *)(_g_GameState + 0x360);
}

// 0x00176fa0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_35c(void)

{
  return *(undefined4 *)(_g_GameState + 0x35c);
}

// 0x00176fb0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_360(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x360) = param_1;
  return;
}

// 0x00176fc0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_35c(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x35c) = param_1;
  return;
}

// 0x00176fd0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_3a0(void)

{
  return *(undefined4 *)(_g_GameState + 0x3a0);
}

// 0x00176fe0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_3a0(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x3a0) = param_1;
  return;
}

// 0x00176ff0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_39c(void)

{
  return *(undefined4 *)(_g_GameState + 0x39c);
}

// 0x00177000  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_39c(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x39c) = param_1;
  return;
}

// 0x00177010  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_398(void)

{
  return *(undefined4 *)(_g_GameState + 0x398);
}

// 0x00177020  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_398(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x398) = param_1;
  return;
}

// 0x00177030  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_354(undefined1 param_1)

{
  *(undefined1 *)(_g_GameState + 0x354) = param_1;
  return;
}

// 0x00177040  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 GameState_Get_354(void)

{
  return *(undefined1 *)(_g_GameState + 0x354);
}

// 0x00177050  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 GameState_Get_354_7050(void)

{
  return *(undefined1 *)(_g_GameState + 0x354);
}

// 0x00177060  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameState_Ptr_354(void)

{
  return _g_GameState + 0x354;
}

// 0x00177070  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameState_Elem_f0_xcc(int param_1)

{
  return _g_GameState + param_1 * 0xcc + 0xf0;
}

// 0x001770a0  size 0x48
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0xcc bytes each at +0xf0 */

void GameState_CopyPlayerRecord(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x33;
  puVar1 = (undefined4 *)(param_2 * 0xcc + _g_GameState + 0xf0);
  do {
    iVar2 = iVar2 + -1;
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar2);
  return;
}

// 0x001770f0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_3a48(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x3a48) = param_1;
  return;
}

// 0x00177100  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_3a48(void)

{
  return *(undefined4 *)(_g_GameState + 0x3a48);
}

// 0x00177110  size 0x3c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x100 bytes each at +0x28a0 */

void GameState_CopyCourseRecord(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0x20;
  puVar3 = (undefined4 *)(param_2 * 0x100 + _g_GameState + 0x28a0);
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    puVar3 = puVar3 + 2;
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
  } while (0 < iVar2);
  return;
}

// 0x00177150  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameState_Ptr_3a04(void)

{
  return _g_GameState + 0x3a04;
}

// 0x00177160  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameState_Elem_2fa0_x17c(int param_1)

{
  return _g_GameState + param_1 * 0x17c + 0x2fa0;
}

// 0x00177190  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameState_Elem_28a0_x100(int param_1)

{
  return _g_GameState + param_1 * 0x100 + 0x28a0;
}

// 0x001771b0  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameState_Elem_3e0_x540(int param_1)

{
  return _g_GameState + param_1 * 0x540 + 0x3e0;
}

// 0x001771e0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_ec(void)

{
  return *(undefined4 *)(_g_GameState + 0xec);
}

// 0x001771f0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_e4(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0xe4) = param_1;
  return;
}

// 0x00177200  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_e0(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0xe0) = param_1;
  return;
}

// 0x00177210  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* e0 + e4 */

int GameState_GetRacerCount(void)

{
  return *(int *)(_g_GameState + 0xe0) + *(int *)(_g_GameState + 0xe4);
}

// 0x00177230  size 0x1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* e0 + e4 + e8 */

int GameState_GetTotalCarCount(void)

{
  return *(int *)(_g_GameState + 0xe0) +
         *(int *)(_g_GameState + 0xe8) + *(int *)(_g_GameState + 0xe4);
}

// 0x00177250  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* +0xe8 */

undefined4 GameState_GetTrafficCount(void)

{
  return *(undefined4 *)(_g_GameState + 0xe8);
}

// 0x00177260  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* +0xe4 */

undefined4 GameState_GetRivalCount(void)

{
  return *(undefined4 *)(_g_GameState + 0xe4);
}

// 0x00177270  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* +0xe0 */

undefined4 GameState_GetPlayerCount(void)

{
  return *(undefined4 *)(_g_GameState + 0xe0);
}

// 0x00177280  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_UpdateTimestamp(void)

{
  undefined4 uVar1;
  
  uVar1 = GameState_ComputeTimestamp();
  *(undefined4 *)(_g_GameState + 0x14) = uVar1;
  return;
}

// 0x001772b0  size 0x1b8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_ApplyGarage(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (*(int *)(_g_GameState + 0x44) != 0) {
    iVar6 = *(int *)(_g_GameState + 0xc);
    iVar3 = *(int *)(_g_GameState + 0x44) + (uint)*(byte *)(_g_GameState + 1) * 0x10;
    iVar5 = iVar6 * 0x10;
    iVar7 = *(int *)(iVar3 + 0xc);
    puVar4 = (undefined8 *)(*(int *)(iVar3 + 4) + iVar5);
    uVar2 = *puVar4;
    uVar1 = *puVar4;
    if (*(int *)(_g_GameState + 0x40) == 0) {
      if (iVar6 <= *(int *)(_g_GameState + 0x10)) {
        iVar3 = 0;
        puVar4 = (undefined8 *)(iVar7 + iVar5);
        do {
          uVar8 = Checkpoint_BuildGate(uVar2,*puVar4);
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 2;
          *(undefined4 *)(_g_GameState + iVar3 + 0x18) = uVar8;
          iVar3 = iVar3 + 4;
        } while (iVar6 <= *(int *)(_g_GameState + 0x10));
      }
    }
    else if (*(int *)(_g_GameState + 0x10) <= iVar6) {
      iVar3 = 0;
      puVar4 = (undefined8 *)(iVar7 + iVar5);
      do {
        uVar8 = Checkpoint_BuildGate(uVar1,*puVar4);
        iVar6 = iVar6 + -1;
        puVar4 = puVar4 + -2;
        *(undefined4 *)(_g_GameState + iVar3 + 0x18) = uVar8;
        iVar3 = iVar3 + 4;
      } while (*(int *)(_g_GameState + 0x10) <= iVar6);
    }
  }
  return;
}

// 0x00177470  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_GetArray_3a78(int param_1)

{
  return *(undefined4 *)(param_1 * 4 + _g_GameState + 0x3a78);
}

// 0x00177490  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_GetArray_3a50(int param_1)

{
  return *(undefined4 *)(param_1 * 4 + _g_GameState + 0x3a50);
}

// 0x001774b0  size 0x240
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_SetupStartGrid(void)

{
  short sVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined4 auStack_80 [2];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 auStack_60 [2];
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
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uVar6 = 0;
  if (0 < *_g_RoadData) {
    iVar4 = 0;
    do {
      sVar1 = (short)uVar6;
      fVar8 = 0.0;
      lVar3 = (long)**(short **)(_g_RoadData[1] + (uVar6 & 0xffff) * 4);
      AiLine_GetDirection(&uStack_40,3,sVar1,0);
      lVar5 = 1;
      uStack_10 = uStack_40;
      uStack_c = uStack_3c;
      uStack_8 = uStack_38;
      uStack_4 = uStack_34;
      if (1 < lVar3) {
        do {
          AiLine_GetDirection(&uStack_50,3,sVar1,(short)lVar5);
          uStack_20 = uStack_50;
          uStack_1c = uStack_4c;
          uStack_18 = uStack_48;
          uStack_14 = uStack_44;
          Vec3_Sub(auStack_60,&uStack_20,&uStack_10);
          uStack_30 = auStack_60[0];
          uStack_28 = uStack_58;
          uStack_24 = uStack_54;
          uStack_2c = 0;
          fVar7 = (float)Vec3_LengthB(&uStack_30);
          lVar5 = (long)((int)lVar5 + 1);
          fVar8 = fVar8 + fVar7;
          uStack_10 = uStack_20;
          uStack_c = uStack_1c;
          uStack_8 = uStack_18;
          uStack_4 = uStack_14;
        } while (lVar5 < lVar3);
      }
      if ((int)uVar6 < *_g_RoadData + -1) {
        AiLine_GetDirection(&uStack_70,3,sVar1 + 1,0);
        uStack_20 = uStack_70;
        uStack_1c = uStack_6c;
        uStack_18 = uStack_68;
        uStack_14 = uStack_64;
        Vec3_Sub(auStack_80,&uStack_20,&uStack_10);
        uStack_30 = auStack_80[0];
        uStack_28 = uStack_78;
        uStack_24 = uStack_74;
        uStack_2c = 0;
        fVar7 = (float)Vec3_LengthB(&uStack_30);
        fVar8 = fVar8 + fVar7;
      }
      uVar6 = uVar6 + 1;
      *(float *)(_g_GameState + iVar4 + 0x3a50) = fVar8;
      iVar4 = iVar4 + 4;
    } while ((int)uVar6 < *_g_RoadData);
  }
  iVar4 = 0;
  *(undefined4 *)(_g_GameState + 0x3a78) = 0;
  lVar3 = 0;
  if (0 < *_g_RoadData) {
    iVar2 = 0;
    do {
      uVar6 = (uint)lVar3;
      lVar3 = (long)(short)((short)lVar3 + 1);
      *(int *)(_g_GameState + iVar2 + 0x3aa0) =
           (int)**(short **)(_g_RoadData[1] + (uVar6 & 0xffff) * 4);
      iVar4 = iVar4 + *(int *)(_g_GameState + iVar2 + 0x3aa0) * 0x20;
      *(int *)(_g_GameState + iVar2 + 0x3a7c) = iVar4;
      iVar2 = iVar2 + 4;
    } while (lVar3 < *_g_RoadData);
  }
  return;
}

// 0x00177700  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_44(void)

{
  return *(undefined4 *)(_g_GameState + 0x44);
}

// 0x00177710  size 0x14
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_GetArray_18(int param_1)

{
  return *(undefined4 *)(param_1 * 4 + _g_GameState + 0x18);
}

// 0x00177730  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_14(void)

{
  return *(undefined4 *)(_g_GameState + 0x14);
}

// 0x00177740  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_8(void)

{
  return *(undefined4 *)(_g_GameState + 8);
}

// 0x00177750  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_40(void)

{
  return *(undefined4 *)(_g_GameState + 0x40);
}

// 0x00177760  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_10(void)

{
  return *(undefined4 *)(_g_GameState + 0x10);
}

// 0x00177770  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_c(void)

{
  return *(undefined4 *)(_g_GameState + 0xc);
}

// 0x00177780  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 GameState_Get_3(void)

{
  return *(undefined1 *)(_g_GameState + 3);
}

// 0x00177790  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 GameState_Get_2(void)

{
  return *(undefined1 *)(_g_GameState + 2);
}

// 0x001777a0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 GameState_Get_1(void)

{
  return *(undefined1 *)(_g_GameState + 1);
}

// 0x001777b0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 GameState_Get_0(void)

{
  return *_g_GameState;
}

// 0x001777c0  size 0xe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_SaveHeader(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
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
  
  puVar2 = _g_GameState;
  puVar4 = &uStack_50;
  iVar3 = 9;
  do {
    iVar3 = iVar3 + -1;
    uVar1 = param_1[1];
    *puVar4 = *param_1;
    puVar4[1] = uVar1;
    param_1 = param_1 + 2;
    puVar4 = puVar4 + 2;
  } while (0 < iVar3);
  *_g_GameState = (undefined1)uStack_50;
  puVar2[1] = uStack_50._1_1_;
  puVar2[2] = uStack_50._2_1_;
  puVar2[3] = uStack_50._3_1_;
  puVar2[4] = auStack_4c[0];
  *(undefined4 *)(puVar2 + 8) = uStack_48;
  *(undefined4 *)(puVar2 + 0xc) = uStack_44;
  *(undefined4 *)(puVar2 + 0x10) = uStack_40;
  *(undefined4 *)(puVar2 + 0x14) = uStack_3c;
  *(undefined4 *)(puVar2 + 0x18) = uStack_38;
  *(undefined4 *)(puVar2 + 0x1c) = uStack_34;
  *(undefined4 *)(puVar2 + 0x20) = uStack_30;
  *(undefined4 *)(puVar2 + 0x24) = uStack_2c;
  *(undefined4 *)(puVar2 + 0x28) = uStack_28;
  *(undefined4 *)(puVar2 + 0x2c) = uStack_24;
  *(undefined4 *)(puVar2 + 0x30) = uStack_20;
  *(undefined4 *)(puVar2 + 0x34) = uStack_1c;
  *(undefined4 *)(puVar2 + 0x38) = uStack_18;
  *(undefined4 *)(puVar2 + 0x3c) = uStack_14;
  *(undefined4 *)(puVar2 + 0x40) = uStack_10;
  *(undefined4 *)(puVar2 + 0x44) = uStack_c;
  return;
}

// 0x001778a0  size 0x30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_LoadHeader(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 9;
  puVar3 = _g_GameState;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    puVar3 = puVar3 + 2;
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
  } while (0 < iVar2);
  return;
}

// 0x001778d0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_48(void)

{
  return *(undefined4 *)(_g_GameState + 0x48);
}

// 0x001778e0  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_c4(void)

{
  return *(undefined4 *)(_g_GameState + 0xc4);
}

// 0x001778f0  size 0x40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_GetRecord(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = param_2 * 0x14 + _g_GameState;
  uVar4 = *(undefined4 *)(iVar1 + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0x54);
  uVar3 = *(undefined4 *)(iVar1 + 0x58);
  *param_1 = *(undefined4 *)(iVar1 + 0x4c);
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = *(undefined4 *)(iVar1 + 0x5c);
  return;
}

// 0x00177930  size 0x44
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_GetCurrentRecord(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(_g_GameState + 0xc4) * 0x14 + _g_GameState;
  uVar4 = *(undefined4 *)(iVar1 + 0x50);
  uVar2 = *(undefined4 *)(iVar1 + 0x54);
  uVar3 = *(undefined4 *)(iVar1 + 0x58);
  *param_1 = *(undefined4 *)(iVar1 + 0x4c);
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = *(undefined4 *)(iVar1 + 0x5c);
  return;
}

// 0x00177980  size 0xa8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_SaveRecords(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_a0 [31];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar2 = _g_GameState;
  puVar4 = auStack_a0;
  iVar3 = 0x13;
  do {
    iVar3 = iVar3 + -1;
    uVar1 = param_1[1];
    *puVar4 = *param_1;
    puVar4[1] = uVar1;
    param_1 = param_1 + 2;
    puVar4 = puVar4 + 2;
  } while (0 < iVar3);
  puVar5 = auStack_a0 + 1;
  iVar3 = 0xf;
  *(undefined4 *)(_g_GameState + 0x48) = auStack_a0[0];
  puVar4 = (undefined4 *)(iVar2 + 0x4c);
  do {
    iVar3 = iVar3 + -1;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    puVar5 = puVar5 + 2;
    puVar4 = puVar4 + 2;
  } while (0 < iVar3);
  *(undefined4 *)(iVar2 + 0xc4) = uStack_24;
  *(undefined4 *)(iVar2 + 200) = uStack_20;
  *(undefined4 *)(iVar2 + 0xcc) = uStack_1c;
  *(undefined4 *)(iVar2 + 0xd0) = uStack_18;
  *(undefined4 *)(iVar2 + 0xd4) = uStack_14;
  *(undefined4 *)(iVar2 + 0xd8) = uStack_10;
  *(undefined4 *)(iVar2 + 0xdc) = uStack_c;
  return;
}

// 0x00177a30  size 0x20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_GetCurrentRecordValue(void)

{
  return *(undefined4 *)(*(int *)(_g_GameState + 0xc4) * 0x14 + _g_GameState + 0x4c);
}

// 0x00177a50  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameState_Ptr_48(void)

{
  return _g_GameState + 0x48;
}

// 0x00177a60  size 0x34
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_LoadRecords(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0x13;
  puVar3 = (undefined4 *)(_g_GameState + 0x48);
  do {
    iVar2 = iVar2 + -1;
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    puVar3 = puVar3 + 2;
    param_1[1] = uVar1;
    param_1 = param_1 + 2;
  } while (0 < iVar2);
  return;
}

// 0x00177aa0  size 0x28c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_NewGame(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = _g_GameState;
  iVar2 = 0;
  _g_GameState[0x354] = 8;
  puVar3 = puVar4 + 0x354;
  *(undefined4 *)(puVar4 + 0x35c) = 0;
  *(undefined4 *)(puVar4 + 0x360) = 0;
  *(undefined4 *)(puVar4 + 0x358) = 0;
  puVar4[0x3dc] = 0xff;
  *(undefined4 *)(puVar4 + 0x364) = 0;
  do {
    *(undefined4 *)(puVar3 + 0x14) = 0;
    iVar2 = iVar2 + 5;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(undefined4 *)(puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 0x20) = 0;
    *(undefined4 *)(puVar3 + 0x24) = 0;
    puVar3 = puVar3 + 0x14;
  } while (iVar2 < 10);
  *(undefined4 *)(puVar4 + 0x390) = 0;
  *(undefined4 *)(puVar4 + 0x394) = 0;
  *(undefined4 *)(puVar4 + 0x398) = 5000000;
  *(undefined4 *)(puVar4 + 0x39c) = 5000000;
  *(undefined4 *)(puVar4 + 0x3a0) = 100;
  *(undefined4 *)(puVar4 + 0x3a4) = 0;
  *(undefined4 *)(puVar4 + 0x3b0) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x3bc) = 0;
  *(undefined4 *)(puVar4 + 0x3c0) = 0;
  *(undefined4 *)(puVar4 + 0x3b4) = 0;
  *(undefined4 *)(puVar4 + 0x3b8) = 0;
  *(undefined4 *)(puVar4 + 0x3ac) = 0;
  RaceSlot_Clear(puVar4 + 0x3c4);
  RaceSlot_Clear(puVar4 + 0x3d0);
  puVar4 = _g_GameState;
  iVar2 = 0;
  *(undefined4 *)(_g_GameState + 0x48) = 0;
  *(undefined4 *)(puVar4 + 0xc4) = 0;
  *(undefined4 *)(puVar4 + 0x4c) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
  puVar4[0x54] = 0;
  puVar4[0x55] = 2;
  *(undefined4 *)(puVar4 + 0x58) = 0;
  *(undefined4 *)(puVar4 + 0x5c) = 0;
  *(undefined4 *)(puVar4 + 200) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
  *(undefined4 *)(puVar4 + 100) = 0xffffffff;
  puVar4[0x68] = 0;
  puVar4[0x69] = 2;
  *(undefined4 *)(puVar4 + 0x6c) = 0;
  *(undefined4 *)(puVar4 + 0x70) = 0;
  *(undefined4 *)(puVar4 + 0xcc) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x74) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
  puVar4[0x7c] = 0;
  puVar4[0x7d] = 2;
  *(undefined4 *)(puVar4 + 0x80) = 0;
  *(undefined4 *)(puVar4 + 0x84) = 0;
  *(undefined4 *)(puVar4 + 0xd0) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x88) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x8c) = 0xffffffff;
  puVar4[0x90] = 0;
  puVar4[0x91] = 2;
  *(undefined4 *)(puVar4 + 0x94) = 0;
  *(undefined4 *)(puVar4 + 0x98) = 0;
  *(undefined4 *)(puVar4 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x9c) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
  puVar4[0xa4] = 0;
  puVar4[0xa5] = 2;
  *(undefined4 *)(puVar4 + 0xa8) = 0;
  *(undefined4 *)(puVar4 + 0xac) = 0;
  *(undefined4 *)(puVar4 + 0xd8) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0xb0) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0xb4) = 0xffffffff;
  puVar4[0xb8] = 0;
  puVar4[0xb9] = 2;
  *(undefined4 *)(puVar4 + 0xbc) = 0;
  *(undefined4 *)(puVar4 + 0xc0) = 0;
  *(undefined4 *)(puVar4 + 0xdc) = 0xffffffff;
  puVar4 = _g_GameState;
  *(undefined4 *)(_g_GameState + 0xe0) = 0;
  puVar3 = puVar4 + 0xe0;
  *(undefined4 *)(puVar4 + 0xe4) = 0;
  *(undefined4 *)(puVar4 + 0xe8) = 0;
  *(undefined4 *)(puVar4 + 0xec) = 1;
  do {
    CarRec_Init(puVar3 + 0x10);
    puVar4 = _g_GameState;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0xcc;
  } while (iVar2 < 3);
  iVar2 = 0;
  *_g_GameState = 10;
  puVar4[1] = 1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x10) = 0xffffffff;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0x40) = 0;
  *(undefined4 *)(_g_GameState + 0x3ac8) = 0xffffffff;
  puVar4 = _g_GameState;
  *(undefined4 *)(_g_GameState + 0x3a48) = 0xffffffff;
  puVar4 = puVar4 + 0x3e0;
  do {
    Opponent_Clear(puVar4 + 0x2bc0);
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 0x17c;
  } while (iVar2 < 7);
  cVar1 = RaceCtx_GetMode();
  if (cVar1 != '\x02') {
    cVar1 = RaceCtx_GetMode();
    if (cVar1 != '\x03') {
      iVar2 = Options_Get_10();
      goto LAB_00177cd0;
    }
  }
  iVar2 = iRam0036f1ec;
LAB_00177cd0:
  if (iVar2 == 0) {
    *(undefined4 *)(_g_GameState + 0xec) = 0;
  }
  else {
    *(undefined4 *)(_g_GameState + 0xec) = 1;
  }
  return;
}

// 0x00177d30  size 0x20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_MarkGhostDirty(void)

{
  if (*(int *)(_g_GameState + 0x3ad0) != 0) {
    *(undefined4 *)(*(int *)(_g_GameState + 0x3ad0) + 4) = 1;
  }
  return;
}

// 0x00177d50  size 0x24
void RaceResult_Clear(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 0x00177d80  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Set_394(undefined4 param_1)

{
  *(undefined4 *)(_g_GameState + 0x394) = param_1;
  return;
}

// 0x00177d90  size 0xc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 GameState_Get_394(void)

{
  return *(undefined4 *)(_g_GameState + 0x394);
}

// 0x00177da0  size 0x178
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_StartRace(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar1 = _g_GameState;
  *(undefined4 *)(_g_GameState + 0x3a4) = 0;
  *(undefined4 *)(iVar1 + 0x3b0) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x3bc) = 0;
  *(undefined4 *)(iVar1 + 0x3c0) = 0;
  *(undefined4 *)(iVar1 + 0x3b4) = 0;
  *(undefined4 *)(iVar1 + 0x3b8) = 0;
  *(undefined4 *)(iVar1 + 0x3ac) = 0;
  *(int *)(_g_GameState + 0x3a4) = (int)param_1;
  *(undefined4 *)(_g_GameState + 0x3a8) = param_3;
  *(undefined4 *)(_g_GameState + 0x3ac) = param_4;
  if (param_1 == 0) {
    uVar3 = password_step_sub_002dff30(auStack_60);
    *(undefined4 *)(_g_GameState + 0x3b0) = uVar3;
    cVar2 = Race_GetTimeOfDay();
    if (cVar2 == '\0') {
      *(undefined4 *)(_g_GameState + 0x3b4) = uStack_50;
      *(undefined4 *)(_g_GameState + 0x3b8) = uStack_48;
    }
    else {
      *(undefined4 *)(_g_GameState + 0x3b4) = uStack_4c;
      *(undefined4 *)(_g_GameState + 0x3b8) = uStack_44;
    }
  }
  else {
    uVar3 = password_step_sub_002dfed0(auStack_40);
    *(undefined4 *)(_g_GameState + 0x3b0) = uVar3;
    cVar2 = Race_GetTimeOfDay();
    if (cVar2 == '\0') {
      *(int *)(_g_GameState + 0x3bc) = iStack_18 * 1000;
      *(int *)(_g_GameState + 0x3c0) = iStack_10 * 1000;
      *(undefined4 *)(_g_GameState + 0x3b4) = uStack_28;
      *(undefined4 *)(_g_GameState + 0x3b8) = uStack_20;
    }
    else {
      *(int *)(_g_GameState + 0x3bc) = iStack_14 * 1000;
      *(int *)(_g_GameState + 0x3c0) = iStack_c * 1000;
      *(undefined4 *)(_g_GameState + 0x3b4) = uStack_24;
      *(undefined4 *)(_g_GameState + 0x3b8) = uStack_1c;
    }
  }
  return;
}

// 0x00177f20  size 0x34
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_FreeReplay(void)

{
  if (*(int *)(_g_GameState + 0x3acc) != 0) {
    Mem_Free();
    *(undefined4 *)(_g_GameState + 0x3acc) = 0;
  }
  return;
}

// 0x00177f60  size 0x34
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_FreeGhost(void)

{
  if (*(int *)(_g_GameState + 0x3ad0) != 0) {
    Mem_Free();
    *(undefined4 *)(_g_GameState + 0x3ad0) = 0;
  }
  return;
}

// 0x00177fa0  size 0x64
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameState_Free(void)

{
  if (_g_GameState != 0) {
    if (*(int *)(_g_GameState + 0x3acc) != 0) {
      Mem_Free();
      *(undefined4 *)(_g_GameState + 0x3acc) = 0;
    }
    if (*(int *)(_g_GameState + 0x3ad0) != 0) {
      Mem_Free();
      *(undefined4 *)(_g_GameState + 0x3ad0) = 0;
    }
    Mem_Free(_g_GameState);
  }
  return;
}

