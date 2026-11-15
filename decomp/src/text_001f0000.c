// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001f0000 - 0x001f4000
#include "ghidra_types.h"

// 0x001f0490  size 0x5c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int UiText_CountLinesById(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (param_1 == -1) {
    psVar3 = &DAT_0036e864;
  }
  else {
    psVar3 = (short *)(_g_Fonts + *(int *)(_g_LocalizedText + param_1 * 4) * 2);
  }
  iVar2 = 1;
  while( true ) {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
    if (sVar1 == -1) break;
    if (sVar1 == -2) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

// 0x001f04f0  size 0xbc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 UiText_CompareById(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  if (param_1 == -1) {
    puVar4 = &DAT_0036e864;
  }
  else {
    puVar4 = (ushort *)(_g_Fonts + *(int *)(_g_LocalizedText + param_1 * 4) * 2);
  }
  if (param_2 == -1) {
    puVar3 = &DAT_0036e864;
  }
  else {
    puVar3 = (ushort *)(_g_Fonts + *(int *)(_g_LocalizedText + param_2 * 4) * 2);
  }
  while( true ) {
    uVar1 = *puVar4;
    uVar2 = *puVar3;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    if ((uVar1 == 0xffff) && (uVar2 == 0xffff)) {
      return 0;
    }
    if (uVar1 == 0xffff) {
      return 0xffffffff;
    }
    if (uVar2 == 0xffff) break;
    if (uVar1 < uVar2) {
      return 0xffffffff;
    }
    if (uVar2 < uVar1) {
      return 1;
    }
  }
  return 1;
}

// 0x001f05b0  size 0x44
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UiRes_FreeFonts(void)

{
  if (_g_Fonts != 0) {
    Mem_Free();
    _g_Fonts = 0;
  }
  if (_g_LocalizedText != 0) {
    Mem_Free();
    _g_LocalizedText = 0;
  }
  return;
}

// 0x001f06b0  size 0x60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* language offset at +0x15 */

void UiRes_LoadLocalized(int param_1)

{
  uint uVar1;
  
  param_1 = param_1 + (uint)g_RaceCtx->language;
  uVar1 = g_ArcToc->entries[param_1].unpackedSize;
  if (uVar1 == 0) {
    uVar1 = g_ArcToc->entries[param_1].sectorCount;
  }
  else {
    uVar1 = uVar1 + 0x7ff >> 0xb;
  }
  iRam0036f40c = uVar1 << 0xb;
  Arc_LoadFileEx(param_1,_g_Fonts,0x1f0600,0,0,0);
  return;
}

// 0x001f0710  size 0x50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UiRes_AllocFonts(undefined8 param_1,undefined4 param_2,int param_3)

{
  iRam0036f408 = param_3;
  uRam0036f40c = param_2;
  _g_LocalizedText = Mem_AllocAligned(param_3 << 2,0x40,param_1);
  _g_Fonts = Mem_AllocAligned(uRam0036f40c,0x40,param_1);
  return;
}

// 0x001f0760  size 0xb4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UiRes_LoadLocalizedAlloc(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_2 = param_2 + (uint)g_RaceCtx->language;
  iRam0036f408 = param_3;
  _g_LocalizedText = Mem_AllocAligned(param_3 << 2,0x40,param_1);
  uVar1 = g_ArcToc->entries[param_2].unpackedSize;
  if (uVar1 == 0) {
    uVar1 = g_ArcToc->entries[param_2].sectorCount;
  }
  else {
    uVar1 = uVar1 + 0x7ff >> 0xb;
  }
  iRam0036f40c = uVar1 << 0xb;
  uVar2 = Mem_AllocAligned(iRam0036f40c,0x40,param_1);
  _g_Fonts = (undefined4)uVar2;
  Arc_LoadFileEx(param_2,uVar2,0x1f0600,0,0,0);
  return;
}

// 0x001f0820  size 0x12c
void UiRes_LoadCommon(undefined8 param_1)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = g_ArcToc->entries[0x188c].unpackedSize;
  if (uVar3 == 0) {
    uVar3 = g_ArcToc->entries[0x188c].sectorCount;
  }
  else {
    uVar3 = uVar3 + 0x7ff >> 0xb;
  }
  uVar4 = Mem_AllocAligned(uVar3 << 0xb,0x40,param_1);
  psRam0036f3fc = (short *)uVar4;
  Arc_LoadFileEx(0x188c,uVar4,0,0,0,0);
  File_AbortAll();
  psVar1 = psRam0036f3fc;
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = 0x467830;
  iVar6 = 0;
  iVar5 = *psRam0036f3fc + 1;
  do {
    if (*(int *)(iVar7 + 0xa0) != 0) {
      *(int *)(iVar7 + 0xbc) = iVar5;
      *(short **)(iVar7 + 0xb8) = psVar1 + iVar6 + 1;
    }
    psVar2 = psRam0036f3fc;
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + iVar5;
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + 0xc0;
  } while (iVar8 < 3);
  iVar7 = 0;
  iVar6 = 0x467a70;
  iVar9 = iVar9 * iVar5;
  do {
    if (*(int *)(iVar6 + 0x330) != 0) {
      *(int *)(iVar6 + 0x338) = iVar5;
      *(short **)(iVar6 + 0x334) = psVar2 + iVar9 + 1;
    }
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + iVar5;
    iVar6 = iVar6 + 0x340;
  } while (iVar7 < 2);
  return;
}

// 0x001f0950  size 0x240
void UiRes_LoadIcons(undefined8 param_1,uint param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = (param_2 & 0xff) - 3;
  if (param_3 != 0) {
    iVar3 = *(int *)(&DAT_00326860 + (param_2 & 0xff) * 4);
    if (iVar3 != -1) {
      if (iVar3 != -1) {
        uVar2 = g_ArcToc->entries[iVar3].unpackedSize;
        if (uVar2 == 0) {
          uVar2 = g_ArcToc->entries[iVar3].sectorCount;
        }
        else {
          uVar2 = uVar2 + 0x7ff >> 0xb;
        }
        iVar4 = iVar5 * 0x340;
        piVar6 = (int *)(iVar4 + 0x467da0);
        iVar3 = Mem_AllocAligned(uVar2 << 0xb,0x40,param_1);
        *piVar6 = iVar3;
        Arc_LoadFileEx(*(int *)(&DAT_00326860 + (param_2 & 0xff) * 4),*piVar6,0,0,0,0);
        File_AbortAll();
        uVar1 = uRam0036f2c0;
        if (*piVar6 != 0) {
          Tex_InitDescriptor(iVar4 + 0x467ac0,2,*(undefined2 *)(iVar4 + 0x467af2));
          Tex_SetupFromHeader(iVar4 + 0x467ac0,uVar1,uVar1,0x50010,0,0x80);
          *(uint *)(iVar4 + 0x467ac0) = *(uint *)(iVar4 + 0x467ac0) | 2;
          *(undefined4 *)(iVar4 + 0x467af4) = 0x156;
          *(undefined8 *)(iVar4 + 0x467ad8) = 0x44;
        }
      }
      iVar5 = iVar5 * 0x340;
      Tex_InitDescriptor(iVar5 + 0x467ac0,2,*(undefined2 *)(iVar5 + 0x467af2),
                         *(undefined4 *)(iVar5 + 0x467da0));
      *(uint *)(iVar5 + 0x467ac0) = *(uint *)(iVar5 + 0x467ac0) | 2;
      *(undefined4 *)(iVar5 + 0x467af4) = 0x156;
      *(undefined8 *)(iVar5 + 0x467ad8) = 0x44;
      return;
    }
  }
  *(undefined4 *)(iVar5 * 0x340 + 0x467da0) = 0;
  return;
}

// 0x001f0b90  size 0x268
void UiRes_LoadTextures(undefined8 param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  param_2 = param_2 & 0xff;
  if (param_3 != 0) {
    iVar2 = *(int *)(&DAT_00326860 + param_2 * 4);
    if (iVar2 != -1) {
      uVar1 = g_ArcToc->entries[iVar2].unpackedSize;
      if (uVar1 == 0) {
        uVar1 = g_ArcToc->entries[iVar2].sectorCount;
      }
      else {
        uVar1 = uVar1 + 0x7ff >> 0xb;
      }
      iVar4 = param_2 * 0xc0;
      piVar6 = (int *)(iVar4 + 0x4678d0);
      iVar2 = Mem_AllocAligned(uVar1 << 0xb,0x40,param_1);
      *piVar6 = iVar2;
      Arc_LoadFileEx(*(int *)(&DAT_00326860 + param_2 * 4),*piVar6,0,0,0,0);
      File_AbortAll();
      Tex_Relocate(*piVar6);
      iVar2 = Tex_UploadAll(*piVar6,0x412,0,0,0);
      DmaBuf_Alloc(iVar4 + 0x4678d8,param_1,iVar2 + 1);
      puVar5 = (undefined4 *)(iVar4 + 0x4678d4);
      uVar3 = Mem_Alloc16((uint)*(ushort *)(*piVar6 + 6) << 7,param_1);
      *puVar5 = uVar3;
      uVar3 = uRam0036f2c0;
      if (*piVar6 != 0) {
        *(undefined4 *)(iVar4 + 0x4678e0) = 0;
        Pkt_AddTextureUploadAll(iVar4 + 0x4678d8,*(undefined4 *)(iVar4 + 0x4678d0),uVar3,uVar3);
        TexSlot_Bind(*puVar5,*(undefined4 *)(iVar4 + 0x4678d0),1,uVar3,uVar3,0x50010,0,0);
      }
      Tex_InitDescriptorSimple
                (iVar4 + 0x467880,2,0,*(undefined4 *)(&DAT_00326880 + param_2 * 8),
                 *(undefined4 *)(&DAT_00326884 + param_2 * 8),*puVar5);
      *(uint *)(iVar4 + 0x467880) = *(uint *)(iVar4 + 0x467880) | 2;
      *(undefined4 *)(iVar4 + 0x4678b4) = 0x156;
      *(undefined8 *)(iVar4 + 0x467898) = 0x44;
      return;
    }
  }
  *(undefined4 *)(param_2 * 0xc0 + 0x4678d0) = 0;
  return;
}

// 0x001f0e00  size 0x364
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UiText_DrawString(undefined8 param_1,short *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  short *psVar8;
  int unaff_s0_lo;
  int unaff_s1_lo;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_s6_lo;
  int unaff_s7_lo;
  undefined4 uStack_14;
  undefined4 uStack_10;
  short *psStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar10 = 1;
  piVar7 = (int *)param_1;
  bVar1 = *(byte *)(piVar7 + 7);
  psVar8 = param_2;
  while( true ) {
    sVar2 = *psVar8;
    psVar8 = psVar8 + 1;
    if (sVar2 == -1) break;
    if (sVar2 == -2) {
      iVar10 = iVar10 + 1;
    }
  }
  iVar9 = 0;
  if (piVar7[9] == 1) {
    iVar6 = piVar7[0xc];
    unaff_s6_lo = piVar7[10];
    unaff_s7_lo = piVar7[0xb] + -0x280;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    unaff_s1_lo = iVar6 >> 1;
    iVar6 = piVar7[0xd] + -0x1c0;
    unaff_s0_lo = iVar6 >> 1;
    if (iVar6 < 0) {
      unaff_s0_lo = piVar7[0xd] + -0x1bf >> 1;
    }
  }
  psStack_c = param_2;
  if (bVar1 < 3) {
    iVar6 = ((uint)bVar1 * 2 + (uint)bVar1) * 0x40;
    iVar11 = iVar6 + 0x467830;
    if (*(int *)(iVar6 + 0x4678d0) != 0) {
      Pkt_Init(iVar11,2,2,0);
      Pkt_SubmitToChain(iVar11,(*_s_RaceUiSpriteCursor + -2) - *piVar7);
      Pkt_Flush(iVar11,iVar6 + 0x4678d8);
      if (piVar7[9] != 0) {
        Pkt_SetScissor(iVar11,unaff_s6_lo,unaff_s7_lo,unaff_s1_lo,unaff_s0_lo,0);
      }
      *(int *)(iVar6 + 0x46788c) = piVar7[5];
      uVar3 = *(undefined4 *)(iVar6 + 0x4678c4);
      do {
        uVar4 = UiModel_FindSkinned(iVar11,psStack_c);
        UiText_MeasureLine(&uStack_4,&uStack_10,param_1,uVar4,&psStack_c);
        UiText_SetColor(&uStack_8,param_1,iVar9,iVar10,uVar3);
        iVar9 = iVar9 + 1;
        lVar5 = UiModel_DrawSkinned(uStack_10,iVar11,uStack_4,uStack_8,piVar7[6],&psStack_c);
      } while (lVar5 == 0);
      if (piVar7[9] == 1) {
        Pkt_SetScissor(iVar11,0,0,0,0,0);
      }
      Pkt_Submit(iVar11,0);
    }
  }
  else {
    iVar6 = (bVar1 - 3) * 0x340;
    iVar11 = iVar6 + 0x467a70;
    if (*(int *)(iVar6 + 0x467da0) != 0) {
      Pkt_Init(iVar11,2,2,0);
      Pkt_SubmitToChain(iVar11,(*_s_RaceUiSpriteCursor + -2) - *piVar7);
      if (piVar7[9] != 0) {
        Pkt_SetScissor(iVar11,unaff_s6_lo,unaff_s7_lo,unaff_s1_lo,unaff_s0_lo,0);
      }
      *(int *)(iVar6 + 0x467acc) = piVar7[5];
      uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x467b00) + 0xc);
      do {
        uVar4 = UiModel_FindStatic(iVar11,psStack_c);
        UiText_MeasureLine(&uStack_4,&uStack_14,param_1,uVar4,&psStack_c);
        UiText_SetColor(&uStack_8,param_1,iVar9,iVar10,uVar3);
        iVar9 = iVar9 + 1;
        lVar5 = UiModel_DrawStatic(uStack_14,iVar11,uStack_4,uStack_8,piVar7[6],&psStack_c);
      } while (lVar5 == 0);
      if (piVar7[9] == 1) {
        Pkt_SetScissor(iVar11,0,0,0,0,0);
      }
      Pkt_Submit(iVar11,0);
    }
  }
  return;
}

// 0x001f1170  size 0x130
void UiText_CountLines(short *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    bVar2 = param_2[iVar3];
    if ((bVar2 < 0x30) || (0x39 < bVar2)) {
      if ((bVar2 < 0x61) || (0x7a < bVar2)) {
        if ((bVar2 < 0x41) || (0x5a < bVar2)) {
          if (bVar2 == 0x2e) {
            *param_1 = 0x17;
          }
          else if (bVar2 == 0x40) {
            *param_1 = 0x1f;
          }
          else if (bVar2 == 0x5f) {
            *param_1 = 0x23;
          }
          else if (bVar2 == 0x2d) {
            *param_1 = 0x16;
          }
          else {
            *param_1 = 0;
          }
        }
        else {
          *param_1 = bVar2 - 0x1c;
        }
      }
      else {
        *param_1 = bVar2 - 0x22;
      }
    }
    else {
      *param_1 = bVar2 - 0x2f;
    }
    param_1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    cVar1 = param_2[iVar3];
  }
  *param_1 = -1;
  return;
}

// 0x001f12c0  size 0x84
/* "%s@kaido.battle" */

void UiText_DrawPlayerName(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [64];
  
  if (param_3 == 1) {
    sprintf(auStack_40,0x365070,param_2);
    UiText_CountLines(0x4680f0,auStack_40);
    UiText_DrawString(param_1,0x4680f0);
  }
  else {
    UiText_CountLines(0x4680f0);
    UiText_DrawString(param_1,0x4680f0);
  }
  return;
}

// 0x001f1350  size 0x34
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 30 callers */

void UiText_DrawById(undefined8 param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 == -1) {
    puVar1 = &DAT_0036e864;
  }
  else {
    puVar1 = (undefined2 *)(_g_Fonts + *(int *)(_g_LocalizedText + param_2 * 4) * 2);
  }
  UiText_DrawString(param_1,puVar1);
  return;
}

// 0x001f1390  size 0x68
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UiText_DrawRivalName(undefined8 param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 == -1) {
    puVar1 = &DAT_0036e864;
  }
  else {
    puVar1 = (undefined2 *)(_g_Fonts + *(int *)(_g_LocalizedText + param_2 * 4) * 2);
  }
  UiText_FormatRivalInfo(0x4680f0,puVar1);
  UiText_DrawString(param_1,0x4680f0);
  return;
}

// 0x001f1400  size 0xb0
/* WARNING: Removing unreachable block (ram,0x001f1434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UiText_DrawRivalInfo
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (param_2 == -1) {
    puVar1 = &DAT_0036e864;
  }
  else {
    puVar1 = (undefined2 *)(_g_Fonts + *(int *)(_g_LocalizedText + param_2 * 4) * 2);
  }
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  UiText_FormatRivalInfo(0x4680f0,puVar1,&uStack_30);
  UiText_DrawString(param_1,0x4680f0);
  return;
}

// 0x001f14b0  size 0x134
void UiRes_UploadFonts(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0x467830;
  do {
    if (*(int *)(iVar1 + 0xa0) != 0) {
      *(undefined4 *)(iVar1 + 0xb0) = 0;
      Pkt_AddTextureUploadAll(iVar1 + 0xa8,*(undefined4 *)(iVar1 + 0xa0),param_1,param_2);
      TexSlot_Bind(*(undefined4 *)(iVar1 + 0xa4),*(undefined4 *)(iVar1 + 0xa0),1,param_1,param_2,
                   0x50010,0,0);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0xc0;
  } while (iVar2 < 3);
  iVar2 = 0;
  iVar1 = 0x467a70;
  do {
    if (*(int *)(iVar1 + 0x330) != 0) {
      Tex_InitDescriptor(iVar1 + 0x50,2,*(undefined2 *)(iVar1 + 0x82));
      Tex_SetupFromHeader(iVar1 + 0x50,param_1,param_2,0x50010,0,0x80);
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 2;
      *(undefined4 *)(iVar1 + 0x84) = 0x156;
      *(undefined8 *)(iVar1 + 0x68) = 0x44;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x340;
  } while (iVar2 < 2);
  return;
}

// 0x001f15f0  size 0x118
void UiRes_FreeAll(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = (uVar3 & 0xff) * 0xc0;
    if (*(int *)(iVar1 + 0x4678d0) != 0) {
      if (*(int *)(iVar1 + 0x4678d0) != 0) {
        Mem_Free();
        *(undefined4 *)(iVar1 + 0x4678d0) = 0;
      }
      DmaBuf_Free(iVar1 + 0x4678d8);
      if (*(int *)(iVar1 + 0x4678d4) != 0) {
        Mem_Free();
        *(undefined4 *)(iVar1 + 0x4678d4) = 0;
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  uVar3 = 3;
  do {
    iVar2 = ((uVar3 & 0xff) - 3) * 0x340;
    iVar1 = *(int *)(iVar2 + 0x467da0);
    if ((iVar1 != 0) && (iVar1 != 0)) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x467da0) = 0;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 5);
  if (iRam0036f3fc != 0) {
    Mem_Free();
    iRam0036f3fc = 0;
  }
  return;
}

// 0x001f1710  size 0xb8
void UiRes_LoadAll(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  uRam004678d0 = 0;
  uRam00467990 = 0;
  uRam00467a50 = 0;
  uRam00467da0 = 0;
  uRam004680e0 = 0;
  do {
    UiRes_LoadTextures(param_1,uVar1 & 0xff,param_2);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 3);
  uVar1 = 3;
  do {
    UiRes_LoadIcons(param_1,uVar1 & 0xff,param_3);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 5);
  UiRes_LoadCommon(param_1);
  return;
}

// 0x001f17d0  size 0xb4
int UiModel_FindStatic(int param_1,ushort *param_2)

{
  int iVar1;
  uint in_t4_lo;
  ushort *puVar2;
  
  iVar1 = 0;
  puVar2 = param_2;
  while( true ) {
    if (*(short *)(param_1 + 0x80) == 2) {
      in_t4_lo = (uint)*puVar2;
      puVar2 = puVar2 + 1;
    }
    else if (*(short *)(param_1 + 0x80) == 1) {
      in_t4_lo = (uint)(byte)*param_2;
      param_2 = (ushort *)((int)param_2 + 1);
    }
    if ((in_t4_lo == 0xffff) || (in_t4_lo == 0xfffe)) break;
    if (in_t4_lo - 0xfffc < 2) {
      puVar2 = puVar2 + 1;
    }
    else if (in_t4_lo < *(uint *)(param_1 + 0x338)) {
      iVar1 = iVar1 + *(short *)(*(int *)(param_1 + 0x334) + in_t4_lo * 2);
    }
    else {
      iVar1 = iVar1 + *(int *)(*(int *)(param_1 + 0x90) + 8);
    }
  }
  return iVar1;
}

// 0x001f1890  size 0x35c
undefined4
UiModel_DrawStatic(float param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5,
                  undefined4 *param_6)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint unaff_s0_lo;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  
  puVar5 = (ushort *)*param_6;
  fVar8 = (float)param_3;
  iVar6 = (int)param_2;
  *(undefined4 *)(iVar6 + 0x70) = 0x80;
  *(undefined4 *)(iVar6 + 0x74) = 0x80;
  *(undefined4 *)(iVar6 + 0x78) = 0x80;
  *(uint *)(iVar6 + 0x7c) = param_5 & 0xff;
  if (*(int *)(*(int *)(iVar6 + 0x58) + 0x60) == 0) {
    Pkt_AddMicroProgram(param_2);
  }
  Model_CopyStaticPacket(param_2,iVar6 + 0x50);
  Pkt_AddTextureRegs(param_2,iVar6 + 0x50);
  Pkt_Close(param_2);
  puVar4 = puVar5;
  do {
    sVar1 = *(short *)(iVar6 + 0x80);
    while( true ) {
      if (sVar1 == 2) {
        unaff_s0_lo = (uint)*puVar4;
        puVar4 = puVar4 + 1;
      }
      else if (sVar1 == 1) {
        unaff_s0_lo = (uint)(byte)*puVar5;
        puVar5 = (ushort *)((int)puVar5 + 1);
      }
      if (unaff_s0_lo == 0xffff) {
        return 1;
      }
      if (unaff_s0_lo == 0xfffe) {
        if (sVar1 == 2) {
          *param_6 = puVar4;
        }
        else if (sVar1 == 1) {
          *param_6 = puVar5;
        }
        return 0;
      }
      if (unaff_s0_lo != 0xfffd) break;
      *(uint *)(iVar6 + 0x5c) = (uint)*puVar4;
      puVar4 = puVar4 + 1;
      Model_CopyStaticPacket(param_2,iVar6 + 0x50);
      Pkt_AddTextureRegs(param_2,iVar6 + 0x50);
      sVar1 = *(short *)(iVar6 + 0x80);
    }
    if (unaff_s0_lo == 0xfffc) {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar3 = uVar2 * param_5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x7f;
      }
      uVar7 = iVar3 >> 7;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      else if (0x80 < (int)uVar7) {
        uVar7 = 0x80;
      }
      *(undefined4 *)(iVar6 + 0x70) = 0x80;
      *(undefined4 *)(iVar6 + 0x74) = 0x80;
      *(undefined4 *)(iVar6 + 0x78) = 0x80;
      *(uint *)(iVar6 + 0x7c) = uVar7 & 0xff;
      *(uint *)(iVar6 + 0x50) = *(uint *)(iVar6 + 0x50) | 2;
      *(undefined4 *)(iVar6 + 0x84) = 0x156;
      Model_CopyStaticPacket(param_2,iVar6 + 0x50);
      Pkt_AddTextureRegs(param_2,iVar6 + 0x50);
    }
    else {
      unaff_s0_lo = unaff_s0_lo - *(ushort *)(iVar6 + 0x82);
      if (fVar8 < 2.1474836e+09) {
        uVar7 = (uint)fVar8;
      }
      else {
        uVar7 = (int)(fVar8 - 2.1474836e+09) | 0x80000000;
      }
      maybe_Model_BuildPacket(param_2,iVar6 + 0x50,uVar7,param_4,unaff_s0_lo);
      if (unaff_s0_lo < *(uint *)(iVar6 + 0x338)) {
        fVar8 = fVar8 + param_1 + (float)(int)*(short *)(*(int *)(iVar6 + 0x334) + unaff_s0_lo * 2);
      }
      else {
        fVar8 = fVar8 + (float)*(uint *)(*(int *)(iVar6 + 0x90) + 8) + param_1;
      }
    }
  } while( true );
}

// 0x001f1bf0  size 0xb0
int UiModel_FindSkinned(int param_1,ushort *param_2)

{
  int iVar1;
  uint in_t4_lo;
  ushort *puVar2;
  
  iVar1 = 0;
  puVar2 = param_2;
  while( true ) {
    if (*(short *)(param_1 + 0x80) == 2) {
      in_t4_lo = (uint)*puVar2;
      puVar2 = puVar2 + 1;
    }
    else if (*(short *)(param_1 + 0x80) == 1) {
      in_t4_lo = (uint)(byte)*param_2;
      param_2 = (ushort *)((int)param_2 + 1);
    }
    if ((in_t4_lo == 0xffff) || (in_t4_lo == 0xfffe)) break;
    if (in_t4_lo - 0xfffc < 2) {
      puVar2 = puVar2 + 1;
    }
    else if (in_t4_lo < *(uint *)(param_1 + 0xbc)) {
      iVar1 = iVar1 + *(short *)(*(int *)(param_1 + 0xb8) + in_t4_lo * 2);
    }
    else {
      iVar1 = iVar1 + *(int *)(param_1 + 0x90);
    }
  }
  return iVar1;
}

// 0x001f1cb0  size 0x330
undefined4
UiModel_DrawSkinned(float param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5,
                   undefined4 *param_6)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint unaff_s0_lo;
  undefined4 uVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  
  puVar6 = (ushort *)*param_6;
  fVar9 = (float)param_3;
  iVar7 = (int)param_2;
  *(undefined4 *)(iVar7 + 0x70) = 0x80;
  *(undefined4 *)(iVar7 + 0x74) = 0x80;
  *(undefined4 *)(iVar7 + 0x78) = 0x80;
  *(uint *)(iVar7 + 0x7c) = param_5 & 0xff;
  if (*(int *)(*(int *)(iVar7 + 0x58) + 0x60) == 0) {
    Pkt_AddMicroProgram(param_2);
  }
  Pkt_AddTextureRegs(param_2,iVar7 + 0x50);
  Pkt_Close(param_2);
  Model_BeginPacket(param_2);
  puVar5 = puVar6;
LAB_001f1da8:
  sVar1 = *(short *)(iVar7 + 0x80);
  do {
    if (sVar1 == 2) {
      unaff_s0_lo = (uint)*puVar5;
      puVar5 = puVar5 + 1;
    }
    else if (sVar1 == 1) {
      unaff_s0_lo = (uint)(byte)*puVar6;
      puVar6 = (ushort *)((int)puVar6 + 1);
    }
    if (unaff_s0_lo == 0xffff) {
      uVar4 = 1;
LAB_001f1e74:
      Model_PatchPacket(param_2);
      return uVar4;
    }
    if (unaff_s0_lo == 0xfffe) {
      if (sVar1 == 2) {
        *param_6 = puVar5;
      }
      else if (sVar1 == 1) {
        *param_6 = puVar6;
      }
      uVar4 = 0;
      goto LAB_001f1e74;
    }
    if (unaff_s0_lo != 0xfffd) break;
    *(uint *)(iVar7 + 0x5c) = (uint)*puVar5;
    puVar5 = puVar5 + 1;
    Model_FinishPacket(param_2,iVar7 + 0x50);
    sVar1 = *(short *)(iVar7 + 0x80);
  } while( true );
  if (unaff_s0_lo == 0xfffc) {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    iVar3 = uVar2 * param_5;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    uVar8 = iVar3 >> 7;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    else if (0x80 < (int)uVar8) {
      uVar8 = 0x80;
    }
    *(undefined4 *)(iVar7 + 0x70) = 0x80;
    *(undefined4 *)(iVar7 + 0x74) = 0x80;
    *(undefined4 *)(iVar7 + 0x78) = 0x80;
    *(uint *)(iVar7 + 0x7c) = uVar8 & 0xff;
    Model_FinishPacket(param_2,iVar7 + 0x50);
  }
  else {
    unaff_s0_lo = unaff_s0_lo - *(ushort *)(iVar7 + 0x82);
    if (unaff_s0_lo < *(uint *)(iVar7 + 0xbc)) {
      if (fVar9 < 2.1474836e+09) {
        uVar8 = (uint)fVar9;
      }
      else {
        uVar8 = (int)(fVar9 - 2.1474836e+09) | 0x80000000;
      }
      maybe_Model_BuildSkinnedPacket(param_2,iVar7 + 0x50,uVar8,param_4,unaff_s0_lo);
      fVar9 = fVar9 + param_1 + (float)(int)*(short *)(*(int *)(iVar7 + 0xb8) + unaff_s0_lo * 2);
    }
    else {
      fVar9 = fVar9 + (float)*(uint *)(iVar7 + 0x90) + param_1;
    }
  }
  goto LAB_001f1da8;
}

// 0x001f1ff0  size 0x2c4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Demo_EvalCameraPath(uint param_1,undefined8 param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  short sStack_72;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
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
  ushort uStack_4;
  short sStack_2;
  
  sStack_72 = (short)(param_1 >> 0x10);
  psVar2 = *(short **)(*(int *)(_g_RoadData + 4) + (param_1 & 0xffff) * 4);
  sVar1 = *psVar2;
  psVar3 = psVar2 + sVar1 * 0x10 + sStack_72 * 6 + 0x3e;
  uStack_20 = *(undefined4 *)psVar3;
  psVar2 = psVar2 + sVar1 * 0x14 + sVar1 * 2 + sStack_72 * 6 + 0x3e;
  uStack_1c = *(undefined4 *)(psVar3 + 2);
  uStack_18 = *(undefined4 *)(psVar3 + 4);
  uStack_14 = 0x3f800000;
  uStack_30 = *(undefined4 *)psVar2;
  uStack_2c = *(undefined4 *)(psVar2 + 2);
  uStack_28 = *(undefined4 *)(psVar2 + 4);
  uStack_24 = 0x3f800000;
  sceVu0SubVector(auStack_40,&uStack_30,&uStack_20);
  sceVu0SubVector(auStack_50,param_2,&uStack_20);
  fVar4 = (float)sceVu0InnerProduct(auStack_40,auStack_50);
  fVar5 = (float)sceVu0InnerProduct(auStack_40,auStack_40);
  sceVu0ScaleVector(fVar4 / fVar5,auStack_60,auStack_40);
  sceVu0AddVector(auStack_60,&uStack_20,auStack_60);
  Demo_GetRoadPoint(&uStack_4,param_1,1);
  psVar2 = *(short **)(*(int *)(_g_RoadData + 4) + (uint)uStack_4 * 4);
  sVar1 = *psVar2;
  psVar3 = psVar2 + sVar1 * 0x10 + sStack_2 * 6 + 0x3e;
  uStack_20 = *(undefined4 *)psVar3;
  psVar2 = psVar2 + sVar1 * 0x14 + sVar1 * 2 + sStack_2 * 6 + 0x3e;
  uStack_1c = *(undefined4 *)(psVar3 + 2);
  uStack_18 = *(undefined4 *)(psVar3 + 4);
  uStack_14 = 0x3f800000;
  uStack_30 = *(undefined4 *)psVar2;
  uStack_2c = *(undefined4 *)(psVar2 + 2);
  uStack_28 = *(undefined4 *)(psVar2 + 4);
  uStack_24 = 0x3f800000;
  sceVu0SubVector(auStack_40,&uStack_30,&uStack_20);
  sceVu0SubVector(auStack_50,param_2,&uStack_20);
  fVar4 = (float)sceVu0InnerProduct(auStack_40,auStack_50);
  fVar5 = (float)sceVu0InnerProduct(auStack_40,auStack_40);
  sceVu0ScaleVector(fVar4 / fVar5,auStack_70,auStack_40);
  sceVu0AddVector(auStack_70,&uStack_20,auStack_70);
  sceVu0SubVector(auStack_40,auStack_70,auStack_60);
  sceVu0SubVector(auStack_50,param_2,auStack_60);
  fVar4 = (float)sceVu0InnerProduct(auStack_40,auStack_50);
  fVar5 = (float)sceVu0InnerProduct(auStack_40,auStack_40);
  return fVar4 / fVar5;
}

// 0x001f22c0  size 0x50
float Demo_EvalKeyA(char *param_1)

{
  float fVar1;
  
  if (*param_1 == '\0') {
    fVar1 = *(float *)(param_1 + 4);
  }
  else if (*param_1 == '\x01') {
    fVar1 = (float)Demo_InterpolateKeys(*(undefined4 *)(param_1 + 4));
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1 * 10.0;
}

// 0x001f2310  size 0x44
undefined4 Demo_EvalKeyB(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else if (*param_1 == '\x01') {
    uVar1 = Demo_InterpolateKeys(*(undefined4 *)(param_1 + 4));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x001f2360  size 0x40
float Demo_EvalKeyC(float *param_1)

{
  float fVar1;
  
  if (param_1[1] == 0.0) {
    fVar1 = *param_1;
  }
  else {
    fVar1 = (float)Demo_InterpolateKeys(param_1[1]);
  }
  return fVar1 * 10.0;
}

// 0x001f23a0  size 0x30
undefined4 Demo_EvalKeyD(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = Demo_InterpolateKeys(param_1[1]);
  }
  return uVar1;
}

// 0x001f23d0  size 0x148
void Demo_InterpolateKeys(float param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_8 [8];
  
  pfVar3 = param_2 + 6;
  fVar1 = param_2[0xb];
  pfVar2 = pfVar3;
  while (fVar1 != 4.2039e-45) {
    fVar1 = pfVar2[0xb];
    pfVar2 = pfVar2 + 6;
  }
  fStack_28 = *pfVar3;
  while (fStack_28 < param_1 * *pfVar2) {
    pfVar3 = pfVar3 + 6;
    param_2 = param_2 + 6;
    fStack_28 = *pfVar3;
  }
  if (param_2[5] == 2.8026e-45) {
    fStack_20 = *param_2;
    fStack_28 = fStack_28 - fStack_20;
    fStack_1c = param_2[2];
    fStack_14 = param_2[4] * fStack_28;
    fStack_30 = *pfVar3;
    fStack_2c = pfVar3[1];
    fStack_24 = pfVar3[3] * fStack_28;
    fStack_18 = fStack_28;
    maybe_Vu0_ClearStack((param_1 * *pfVar2 - *param_2) / fStack_28,auStack_8,&fStack_20,&fStack_30)
    ;
  }
  return;
}

// 0x001f2520  size 0xa0
void Demo_SetTrack(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x10) = param_2 + *(int *)(param_1 + 0x10) * 0xd8;
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = 0;
    do {
      Demo_AdvanceTrack(*(int *)(param_1 + 0x10) + iVar2,param_3);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0xd8;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}

// 0x001f25c0  size 0xa8
void Demo_AdvanceTrack(int param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 8) == '\x02') {
    *(undefined1 *)(param_1 + 8) = 1;
    *(int *)(param_1 + 0xc) = (int)param_2 + *(int *)(param_1 + 0xc) * 0x18;
  }
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(int *)(param_1 + 0x14) = (int)param_2 + *(int *)(param_1 + 0x14) * 0x18;
  }
  Demo_EvalTrack(param_1 + 0x18,param_2);
  Demo_EvalTrack(param_1 + 0x78,param_2);
  return;
}

// 0x001f2670  size 0x250
void Demo_EvalTrack(char *param_1,int param_2)

{
  if (*param_1 == '\x02') {
    *param_1 = '\x01';
    *(int *)(param_1 + 4) = param_2 + *(int *)(param_1 + 4) * 0x18;
  }
  if (param_1[8] == '\x02') {
    param_1[8] = '\x01';
    *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 0xc) * 0x18;
  }
  if (param_1[0x10] == '\x02') {
    param_1[0x10] = '\x01';
    *(int *)(param_1 + 0x14) = param_2 + *(int *)(param_1 + 0x14) * 0x18;
  }
  if (param_1[0x18] == '\x02') {
    param_1[0x18] = '\x01';
    *(int *)(param_1 + 0x1c) = param_2 + *(int *)(param_1 + 0x1c) * 0x18;
  }
  if (param_1[0x20] == '\x02') {
    param_1[0x20] = '\x01';
    *(int *)(param_1 + 0x24) = param_2 + *(int *)(param_1 + 0x24) * 0x18;
  }
  if (param_1[0x28] == '\x02') {
    param_1[0x28] = '\x01';
    *(int *)(param_1 + 0x2c) = param_2 + *(int *)(param_1 + 0x2c) * 0x18;
  }
  if (param_1[0x30] == '\x02') {
    param_1[0x30] = '\x01';
    *(int *)(param_1 + 0x34) = param_2 + *(int *)(param_1 + 0x34) * 0x18;
  }
  if (param_1[0x38] == '\x02') {
    param_1[0x38] = '\x01';
    *(int *)(param_1 + 0x3c) = param_2 + *(int *)(param_1 + 0x3c) * 0x18;
  }
  if (param_1[0x40] == '\x02') {
    param_1[0x40] = '\x01';
    *(int *)(param_1 + 0x44) = param_2 + *(int *)(param_1 + 0x44) * 0x18;
  }
  if (param_1[0x48] == '\x02') {
    param_1[0x48] = '\x01';
    *(int *)(param_1 + 0x4c) = param_2 + *(int *)(param_1 + 0x4c) * 0x18;
  }
  if (param_1[0x50] == '\x02') {
    param_1[0x50] = '\x01';
    *(int *)(param_1 + 0x54) = param_2 + *(int *)(param_1 + 0x54) * 0x18;
  }
  if (param_1[0x58] == '\x02') {
    param_1[0x58] = '\x01';
    *(int *)(param_1 + 0x5c) = param_2 + *(int *)(param_1 + 0x5c) * 0x18;
  }
  return;
}

// 0x001f28c0  size 0x6c
void Demo_ResetMatrix(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  maybe_Vu0_UnitMatrix();
  sceVu0CopyVector(param_1,param_2);
  sceVu0CopyVector((int)param_1 + 0x10,param_3);
  sceVu0CopyVector((int)param_1 + 0x20,param_4);
  return;
}

// 0x001f2930  size 0x17c
void Demo_BuildRotation(undefined4 param_1,undefined8 param_2,undefined8 param_3,float *param_4)

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
  
  fVar1 = (float)sinf();
  fVar2 = (float)cosf(param_1);
  fVar3 = 1.0 - fVar1;
  maybe_Vu0_UnitMatrix(&fStack_40);
  fStack_40 = fVar3 * *param_4 * *param_4 + fVar1 + 0.0;
  fStack_3c = fVar3 * *param_4 * param_4[1] - fVar2 * param_4[2];
  fStack_38 = fVar2 * param_4[1] + fVar3 * param_4[2] * *param_4;
  fStack_30 = fVar2 * param_4[2] + fVar3 * *param_4 * param_4[1];
  fStack_2c = fVar3 * param_4[1] * param_4[1] + fVar1 + 0.0;
  fStack_28 = fVar3 * param_4[1] * param_4[2] - fVar2 * *param_4;
  fStack_20 = fVar3 * param_4[2] * *param_4 - fVar2 * param_4[1];
  fStack_1c = fVar2 * *param_4 + fVar3 * param_4[1] * param_4[2];
  fStack_18 = fVar3 * param_4[2] * param_4[2] + fVar1 + 0.0;
  sceVu0MulMatrix(param_2,param_3,&fStack_40);
  return;
}

// 0x001f2ab0  size 0xc4
float Demo_LookAt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  sceVu0SubVector(auStack_10,param_4);
  sceVu0SubVector(auStack_20,param_5,param_4);
  sceVu0OuterProduct(param_1,auStack_10,auStack_20);
  sceVu0Normalize(param_1,param_1);
  fVar1 = (float)sceVu0InnerProduct(param_1,param_3);
  fVar2 = (float)sceVu0InnerProduct(param_1,param_2);
  sceVu0ScaleVector(fVar1 - fVar2,param_1,param_1);
  return fVar1 - fVar2;
}

// 0x001f2b80  size 0x8c
void Demo_LookAtSimple(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  sceVu0SubVector(auStack_10,param_3,param_2);
  sceVu0SubVector(auStack_20,param_4,param_3);
  sceVu0OuterProduct(param_1,auStack_10,auStack_20);
  sceVu0Normalize(param_1,param_1);
  sceVu0InnerProduct(param_1,param_2);
  return;
}

// 0x001f2c10  size 0x124
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Demo_GetRoadPoint(short *param_1,uint param_2,short param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short sStack_4;
  short sStack_2;
  
  sStack_2 = (short)(param_2 >> 0x10);
  sStack_2 = sStack_2 + param_3;
  sStack_4 = (short)param_2;
  if (sStack_2 < 0) {
    uVar3 = (int)sStack_4 - 1;
    if ((int)uVar3 < 0) {
      uVar3 = *_g_RoadData - 1;
    }
    else if (*_g_RoadData + -1 < (int)uVar3) {
      uVar3 = 0;
    }
    sStack_4 = (short)uVar3;
    sStack_2 = sStack_2 + **(short **)(_g_RoadData[1] + (uVar3 & 0xffff) * 4);
  }
  else {
    sVar1 = **(short **)(_g_RoadData[1] + (param_2 & 0xffff) * 4);
    if (sVar1 <= sStack_2) {
      sStack_2 = sStack_2 - sVar1;
      iVar2 = sStack_4 + 1;
      if (iVar2 < 0) {
        iVar2 = *_g_RoadData + -1;
      }
      else if (*_g_RoadData + -1 < iVar2) {
        iVar2 = 0;
      }
      sStack_4 = (short)iVar2;
    }
  }
  *param_1 = sStack_4;
  param_1[1] = sStack_2;
  return;
}

// 0x001f2d40  size 0xe4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Demo_FindRoadSection(ushort *param_1,long param_2)

{
  short sVar1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  ushort *puVar5;
  long lVar6;
  uint uVar7;
  ushort uStack_4;
  short sStack_2;
  
  puVar3 = (ushort *)0x4;
  puVar5 = &uStack_4;
  puVar2 = puVar5;
  while (puVar2 != (ushort *)0x0) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (ushort *)((int)puVar5 + 1);
    puVar3 = (ushort *)((int)puVar3 + -1);
    puVar2 = puVar3;
  }
  uVar7 = 0;
  if (0 < *_g_RoadData) {
    do {
      sVar1 = **(short **)(_g_RoadData[1] + (uVar7 & 0xffff) * 4);
      if (param_2 < sVar1) {
        sStack_2 = (short)param_2;
        break;
      }
      param_2 = (long)((int)param_2 - (int)sVar1);
      uVar7 = uVar7 + 1;
      uStack_4 = uStack_4 + 1;
    } while ((int)uVar7 < *_g_RoadData);
  }
  lVar6 = (long)sStack_2;
  if (lVar6 < 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = (long)(**(short **)(_g_RoadData[1] + (uint)uStack_4 * 4) + -1);
    if (lVar4 < lVar6) {
      lVar6 = lVar4;
    }
  }
  *param_1 = uStack_4;
  param_1[1] = (ushort)lVar6;
  return;
}

// 0x001f2e30  size 0x1e4
/* WARNING: Removing unreachable block (ram,0x001f2ea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Demo_ProjectOnRoad(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  short sStack_4;
  short sStack_2;
  
  sStack_4 = (short)param_1;
  lVar5 = (long)sStack_4;
  sStack_2 = (short)((uint)param_1 >> 0x10);
  lVar4 = (long)sStack_2;
  if (*_g_RoadData < lVar5) {
    lVar4 = 0;
  }
  else {
    lVar6 = 0;
    if (0 < lVar5) {
      if (8 < lVar5) {
        bVar3 = false;
        if ((-1 < lVar5) && (lVar5 < 0x7fffffff)) {
          bVar3 = true;
        }
        if (bVar3) {
          iVar1 = _g_RoadData[1];
          do {
            uVar2 = (uint)lVar6;
            lVar6 = (long)(int)(uVar2 + 8);
            lVar4 = (long)((int)lVar4 + (int)**(short **)(iVar1 + (uVar2 & 0xffff) * 4) +
                           (int)**(short **)(iVar1 + (uVar2 + 1 & 0xffff) * 4) +
                           (int)**(short **)(iVar1 + (uVar2 + 2 & 0xffff) * 4) +
                           (int)**(short **)(iVar1 + (uVar2 + 3 & 0xffff) * 4) +
                           (int)**(short **)(iVar1 + (uVar2 + 4 & 0xffff) * 4) +
                           (int)**(short **)(iVar1 + (uVar2 + 5 & 0xffff) * 4) +
                           (int)**(short **)(iVar1 + (uVar2 + 6 & 0xffff) * 4) +
                          (int)**(short **)(iVar1 + (uVar2 + 7 & 0xffff) * 4));
          } while (lVar6 < sStack_4 + -8);
        }
      }
      if (lVar6 < lVar5) {
        do {
          uVar2 = (uint)lVar6;
          lVar6 = (long)(int)(uVar2 + 1);
          lVar4 = (long)((int)lVar4 + (int)**(short **)(_g_RoadData[1] + (uVar2 & 0xffff) * 4));
        } while (lVar6 < lVar5);
      }
    }
  }
  return lVar4;
}

// 0x001f3020  size 0x30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RoadData_GetSectionStart(undefined4 *param_1,uint param_2)

{
  short *psVar1;
  
  psVar1 = *(short **)(*(int *)(_g_RoadData + 4) + (param_2 & 0xffff) * 4);
  *param_1 = psVar1 + *psVar1 * 0x10 + 0x3e;
  return;
}

// 0x001f3050  size 0x40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RoadData_GetSectionEnd(undefined4 *param_1,uint param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = *(short **)(*(int *)(_g_RoadData + 4) + (param_2 & 0xffff) * 4);
  sVar1 = *psVar2;
  *param_1 = psVar2 + sVar1 * 0x14 + sVar1 * 2 + 0x3e;
  return;
}

// 0x001f3090  size 0x24
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RoadData_GetSegmentTable(int *param_1,uint param_2)

{
  *param_1 = *(int *)(*(int *)(_g_RoadData + 4) + (param_2 & 0xffff) * 4) + 0x7c;
  return;
}

// 0x001f30c0  size 0x40
void maybe_DemoCam_Reset(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uStack_10 = DAT_003268b0;
  uStack_c = DAT_003268b4;
  uStack_8 = DAT_003268b8;
  uStack_4 = DAT_003268bc;
  sceVu0CopyVector(param_2 + 0x124,&uStack_10);
  return;
}

// 0x001f3100  size 0xf8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_DemoCam_PickCar(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  RaceCar *pRVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int index;
  int iVar7;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar7 = 0;
  index = 0;
  piVar1 = *(int **)(_g_Loading + 4);
  piVar6 = piVar1 + 4;
  *param_2 = piVar6;
  param_2[1] = piVar6 + *piVar1 * 5 + -5;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar5 = GameState_GetRacerCount();
  if (lVar5 < 1) {
    bVar2 = true;
  }
  else {
    do {
      pRVar3 = RaceCar_Get(index);
      if ((pRVar3 != (RaceCar *)0x0) &&
         (iVar4 = RaceCar_GetIndex(pRVar3), (*(uint *)(iVar4 + 4) & 0x100) == 0)) {
        iVar7 = iVar7 + 1;
      }
      index = index + 1;
      iVar4 = GameState_GetRacerCount();
    } while (index < iVar4);
    bVar2 = iVar7 < 2;
  }
  if (!bVar2) {
    param_2[3] = 1;
  }
  uStack_10 = DAT_003268a0;
  uStack_c = DAT_003268a4;
  uStack_8 = DAT_003268a8;
  uStack_4 = DAT_003268ac;
  sceVu0CopyVector(param_2 + 0x124,&uStack_10);
  return;
}

// 0x001f3200  size 0xe4
void maybe_Demo_StepFadeOut(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  
  SndMgr_GetInstance();
  Demo_Start(param_2,param_2);
  lVar5 = maybe_RaceResult_GetCategory();
  if ((lVar5 == 0) || (cVar3 = Snd_StreamGetState(0), cVar3 == '\t')) {
    piVar6 = (int *)param_2;
    iVar1 = *piVar6;
    if ((piVar6[1] == 0) || (iVar1 == 0)) {
      bVar2 = false;
    }
    else {
      piVar6[4] = piVar6[4] + 1;
      bVar2 = piVar6[4] < *(int *)(iVar1 + 0x1c);
      if (!bVar2) {
        if (-1 < *(int *)(iVar1 + 0x14)) {
          iVar1 = piVar6[5];
          iVar4 = RaceCar_GetIndex(piVar6[3]);
          *(int *)(iVar4 + 4) = iVar1;
        }
        Fade_ToBlack();
      }
    }
    if (!bVar2) {
      uRam0046a594 = 0;
    }
  }
  return;
}

// 0x001f32f0  size 0x60
void maybe_Demo_StepStart(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = maybe_Attract_PickDemo();
  Demo_DriveCar(param_2,lVar1);
  Demo_Start(param_2,param_2);
  if (lVar1 == 0) {
    uRam0046a594 = 0;
  }
  return;
}

// 0x001f3350  size 0xbc
void maybe_Demo_StepCamera(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  Demo_Start(param_2);
  piVar4 = (int *)param_2;
  iVar1 = *piVar4;
  if ((piVar4[1] == 0) || (iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    piVar4[4] = piVar4[4] + 1;
    bVar2 = piVar4[4] < *(int *)(iVar1 + 0x1c);
    if (!bVar2) {
      if (-1 < *(int *)(iVar1 + 0x14)) {
        iVar1 = piVar4[5];
        iVar3 = RaceCar_GetIndex(piVar4[3]);
        *(int *)(iVar3 + 4) = iVar1;
      }
      Fade_ToBlack();
    }
  }
  if (!bVar2) {
    Cam_SetMode(param_2,*(undefined1 *)((int)piVar4 + 0x4f9));
    Cam_Update(param_2);
  }
  return;
}

// 0x001f3410  size 0x78
void Demo_HandlePad(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = Pad_GetPort(0,0);
  uVar1 = *(uint *)(iVar2 + 0xc);
  uVar3 = 0x35d5f0;
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 0xc) != 0) {
        uVar3 = 0x35d630;
      }
    }
    else {
      uVar3 = 0x35d610;
    }
  }
  Demo_DriveCar(param_2,uVar3);
  return;
}

// 0x001f3490  size 0x3f0
void maybe_DemoCam_FreeLook(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_50 [64];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar6 = (int)param_2;
  iVar2 = Pad_GetPort(1,0);
  pfVar3 = (float *)0x10;
  pfVar5 = &fStack_10;
  pfVar1 = pfVar5;
  while (pfVar1 != (float *)0x0) {
    *(undefined1 *)pfVar5 = 0;
    pfVar5 = (float *)((int)pfVar5 + 1);
    pfVar3 = (float *)((int)pfVar3 + -1);
    pfVar1 = pfVar3;
  }
  if (*(float *)(iVar2 + 0x360) <= 0.7) {
    if (-0.7 <= *(float *)(iVar2 + 0x360)) {
      if (*(float *)(iVar2 + 0x350) <= 0.7) {
        if (*(float *)(iVar2 + 0x350) < -0.7) {
          fStack_8 = fStack_8 - 0.05;
        }
      }
      else {
        fStack_8 = fStack_8 + 0.05;
      }
    }
    else {
      fStack_c = fStack_c + 0.05;
    }
  }
  else {
    fStack_c = fStack_c - 0.05;
  }
  if (*(float *)(iVar2 + 0x380) <= 0.7) {
    fVar7 = *(float *)(iVar2 + 0x380);
  }
  else {
    maybe_Vu0_RotMatrixX(0x3c8ef34d,param_2,param_2);
    fVar7 = *(float *)(iVar2 + 0x380);
  }
  if (-0.7 <= fVar7) {
    fVar7 = *(float *)(iVar2 + 0x370);
  }
  else {
    maybe_Vu0_RotMatrixX(0xbc8ef34d,param_2,param_2);
    fVar7 = *(float *)(iVar2 + 0x370);
  }
  if (fVar7 <= 0.7) {
    fVar7 = *(float *)(iVar2 + 0x370);
  }
  else {
    maybe_Vu0_RotMatrixY(0x3c8ef34d,param_2,param_2);
    fVar7 = *(float *)(iVar2 + 0x370);
  }
  if (-0.7 <= fVar7) {
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  else {
    maybe_Vu0_RotMatrixY(0xbc8ef34d,param_2,param_2);
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  if ((uVar4 & 0x400) != 0) {
    fStack_10 = fStack_10 - 0.4;
  }
  if ((*(uint *)(iVar2 + 0xc) & 0x800) != 0) {
    fStack_10 = fStack_10 + 0.4;
  }
  if ((*(uint *)(iVar2 + 0xc) & 0x1000) == 0) {
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  else {
    Cam_SetYaw(*(float *)(iVar6 + 0x4e0) + 0.01,param_2);
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  if ((uVar4 & 0x2000) == 0) {
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  else {
    Cam_SetYaw(*(float *)(iVar6 + 0x4e0) - 0.01,param_2);
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  if ((uVar4 & 0x10) == 0) {
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  else {
    Cam_SetPitch(*(float *)(iVar6 + 0x4e4) / 1.005,param_2);
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  if ((uVar4 & 0x20) != 0) {
    Cam_SetPitch(*(float *)(iVar6 + 0x4e4) * 1.005,param_2);
  }
  sceVu0TransposeMatrix(auStack_50,param_2);
  sceVu0ApplyMatrix(&fStack_10,auStack_50,&fStack_10);
  sceVu0AddVector(iVar6 + 0x40,iVar6 + 0x40,&fStack_10);
  sceVu0ApplyMatrix(iVar6 + 0x420,auStack_50,iVar6 + 0x470);
  sceVu0AddVector(iVar6 + 0x420,iVar6 + 0x420,iVar6 + 0x40);
  if (*(int *)(iVar6 + 0x50) == 1) {
    sceVu0CopyVector(iVar6 + 0x430,iVar6 + 0x510);
  }
  else {
    sceVu0ApplyMatrix(iVar6 + 0x430,auStack_50,iVar6 + 0x480);
    sceVu0AddVector(iVar6 + 0x430,iVar6 + 0x430,iVar6 + 0x40);
  }
  sceVu0ApplyMatrix(iVar6 + 0x440,auStack_50,iVar6 + 0x490);
  Cam_UpdateTargetFromCar(param_2);
  return;
}

// 0x001f3880  size 0xe0
void maybe_DemoCam_LookAt(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar1 = (int)param_2;
  sceVu0CopyVector(iVar1 + 0x470,0x365140);
  sceVu0CopyVector(iVar1 + 0x480,0x365150);
  sceVu0CopyVector(iVar1 + 0x490,0x365160);
  sceVu0CopyVector(iVar1 + 0x40,iVar1 + 0x420);
  sceVu0CopyVector(auStack_10,iVar1 + 0x440);
  sceVu0SubVector(auStack_20,iVar1 + 0x430,iVar1 + 0x420);
  sceVu0Normalize(auStack_20,auStack_20);
  sceVu0OuterProduct(auStack_30,auStack_20,auStack_10);
  sceVu0Normalize(auStack_30,auStack_30);
  sceVu0OuterProduct(auStack_10,auStack_30,auStack_20);
  sceVu0Normalize(auStack_10,auStack_10);
  Demo_ResetMatrix(param_2,auStack_20,auStack_10,auStack_30);
  sceVu0TransposeMatrix(param_2,param_2);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  return;
}

// 0x001f3960  size 0x104
void maybe_DemoCam_PlaceFront(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  RacerState *pRVar2;
  int iVar3;
  
  Demo_PlaceCamera(0x3d3851ec,0x3e23d70a,param_2);
  iVar3 = (int)param_2;
  if (*(int *)(iVar3 + 0x7b0) != 0) {
    iVar1 = RaceCar_GetIndex();
    pRVar2 = GameState_Elem_3e0_x540((int)*(char *)(iVar1 + 9));
    *(float *)(iVar3 + 0x474) = ((float)pRVar2->maybe_carObj + 250.0) / 1000.0;
    *(float *)(iVar3 + 0x484) = ((float)pRVar2->maybe_carObj + 100.0) / 1000.0;
  }
  return;
}

// 0x001f3a70  size 0x10c
void maybe_DemoCam_PlaceOrbit(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  RacerState *pRVar2;
  int iVar3;
  
  maybe_DemoCam_SetPath(param_2,0x365100,0x365110,0x365120,0x365130);
  iVar3 = (int)param_2;
  if (*(int *)(iVar3 + 0x7b0) != 0) {
    iVar1 = RaceCar_GetIndex();
    pRVar2 = GameState_Elem_3e0_x540((int)*(char *)(iVar1 + 9));
    *(float *)(iVar3 + 0x474) = ((float)pRVar2->maybe_carObj + 250.0) / 1000.0;
    *(float *)(iVar3 + 0x484) = ((float)pRVar2->maybe_carObj + 100.0) / 1000.0;
  }
  return;
}

// 0x001f3b80  size 0x24
/* WARNING: Removing unreachable block (ram,0x001f4560) */

void maybe_Cam_LeafTable(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  iVar4 = (int)param_2;
  iVar3 = iVar4 + 0x510;
  fVar6 = 0.055;
  if (*(int *)(iVar4 + 0x7b0) != 0) {
    *(undefined4 *)(iVar4 + 0x480) =
         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x7b0) + 0x120) + 0x80);
    *(undefined4 *)(iVar4 + 0x484) =
         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x7b0) + 0x120) + 0x84);
    *(undefined4 *)(iVar4 + 0x488) =
         *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x7b0) + 0x120) + 0x88);
    *(undefined4 *)(iVar4 + 0x48c) = 0x3f800000;
    *(float *)(iVar4 + 0x484) = *(float *)(iVar4 + 0x484) + 1.3;
    uStack_60 = 0x3f800000;
    uStack_50 = 0x3f800000;
    uStack_54 = 0x3f800000;
    uStack_44 = 0x3f800000;
    uStack_5c = 0;
    uStack_4c = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    sceVu0ApplyMatrix(&uStack_50,iVar4 + 0x590,&uStack_50);
    sceVu0ApplyMatrix(&uStack_60,iVar4 + 0x550,&uStack_60);
    fVar5 = (float)sceVu0InnerProduct(&uStack_50,&uStack_60);
    if ((float)(fVar5 < 0.0) * fVar5 * fVar5 * fVar5 * fVar5 == 0.0) {
      fVar6 = fVar6 * 1.0;
    }
    else {
      fVar6 = fVar6 * -1.0;
    }
    if (fVar6 < 0.07) {
      fVar6 = 0.07;
    }
    Mat33_MulVec3Add(fVar6,auStack_a0,iVar4 + 0x5d0);
    Mat33_MulVec3Add(1.0 - fVar6,auStack_b0,iVar4 + 0x5e0);
    Quat_Conjugate(&uStack_90,auStack_a0,auStack_b0);
    *(undefined4 *)(iVar4 + 0x5d0) = uStack_90;
    *(undefined4 *)(iVar4 + 0x5d4) = uStack_8c;
    *(undefined4 *)(iVar4 + 0x5d8) = uStack_88;
    *(undefined4 *)(iVar4 + 0x5dc) = uStack_84;
    Quat_Normalize(iVar4 + 0x5d0);
    if (iRam0036f428 == 0) {
      iVar2 = iVar4 + 0x530;
    }
    else {
      iVar2 = iVar3;
    }
    sceVu0TransMatrix(auStack_40,iVar4 + 0x550,iVar2);
    sceVu0ApplyMatrix(iVar4 + 0x430,auStack_40,iVar4 + 0x480);
    fStack_78 = *(float *)(iVar4 + 0x478) - *(float *)(iVar4 + 0x468);
    fStack_7c = *(float *)(iVar4 + 0x474) - *(float *)(iVar4 + 0x464);
    fStack_80 = *(float *)(iVar4 + 0x470) - *(float *)(iVar4 + 0x460);
    Quat_RotateVec3(&fStack_c0,iVar4 + 0x5d0,&fStack_80);
    fStack_80 = fStack_c0;
    fStack_7c = (float)uStack_bc;
    fStack_78 = (float)uStack_b8;
    uStack_74 = uStack_b4;
    if (iRam0036f428 == 0) {
      iVar3 = iVar4 + 0x530;
    }
    sceVu0TransMatrix(auStack_40,iVar4 + 0x550,iVar3);
    sceVu0ApplyMatrix(auStack_70,auStack_40,iVar4 + 0x460);
    sceVu0AddVector(iVar4 + 0x420,&fStack_80,auStack_70);
    *(undefined4 *)(iVar4 + 0x42c) = 0x3f800000;
    sceVu0CopyVector(iVar4 + 0x440,iVar4 + 0x490);
    Cam_UpdateTargetFromCar(param_2);
    Cam_Nop(param_2);
    if ((*(uint *)(iVar4 + 0x7c0) & 1) != 0) {
      Cam_BuildViewMatrix(param_2);
    }
    lVar1 = Cam_IsTransitioning(param_2);
    if (lVar1 != 0) {
      Cam_UpdateChase(param_2);
    }
  }
  return;
}

// 0x001f3bb0  size 0x28
void maybe_Cam_ResetOffset(undefined8 param_1,int param_2)

{
  int iVar1;
  
  sceVu0CopyVector(param_2 + 0x470,0x3650c0);
  sceVu0CopyVector(param_2 + 0x480,0x3650d0);
  sceVu0CopyVector(param_2 + 0x490,0x3650e0);
  sceVu0CopyVector(param_2 + 0x4a0,0x3650f0);
  sceVu0CopyVector(param_2 + 0x460,param_2 + 0x4a0);
  *(undefined4 *)(param_2 + 0x7c4) = 0;
  if (*(int *)(param_2 + 0x7b0) != 0) {
    Cam_SetTarget(param_2 + 0x510);
    iVar1 = *(int *)(param_2 + 0x7b4);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + 0x7b0);
    }
    Cam_SetTarget(param_2 + 0x660,iVar1);
    Quat_Normalize(param_2 + 0x5d0);
    *(undefined4 *)(param_2 + 0x5e0) = *(undefined4 *)(param_2 + 0x5d0);
    *(undefined4 *)(param_2 + 0x5e4) = *(undefined4 *)(param_2 + 0x5d4);
    *(undefined4 *)(param_2 + 0x5e8) = *(undefined4 *)(param_2 + 0x5d8);
    *(undefined4 *)(param_2 + 0x5ec) = *(undefined4 *)(param_2 + 0x5dc);
    *(undefined4 *)(param_2 + 0x480) =
         *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x7b0) + 0x120) + 0x80);
    *(undefined4 *)(param_2 + 0x484) =
         *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x7b0) + 0x120) + 0x84);
    *(undefined4 *)(param_2 + 0x488) =
         *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x7b0) + 0x120) + 0x88);
    *(undefined4 *)(param_2 + 0x48c) = 0x3f800000;
    *(float *)(param_2 + 0x484) = *(float *)(param_2 + 0x484) + 1.3;
  }
  return;
}

// 0x001f3be0  size 0xa8
void maybe_Cam_UpdateFollow(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_40 [64];
  
  (**(code **)(*param_1 + 8))();
  iVar1 = (int)param_2;
  sceVu0TransMatrix(auStack_40,iVar1 + 0x550,iVar1 + 0x510);
  sceVu0ApplyMatrix(iVar1 + 0x420,auStack_40,iVar1 + 0x470);
  sceVu0ApplyMatrix(iVar1 + 0x430,auStack_40,iVar1 + 0x480);
  sceVu0ApplyMatrix(iVar1 + 0x460,auStack_40,iVar1 + 0x4a0);
  sceVu0ApplyMatrix(iVar1 + 0x440,iVar1 + 0x550,iVar1 + 0x490);
  Cam_UpdateTargetFromCar(param_2);
  if ((*(uint *)(iVar1 + 0x7c0) & 1) != 0) {
    Cam_BuildViewMatrix(param_2);
  }
  return;
}

// 0x001f3c90  size 0x1c4
/* WARNING: Removing unreachable block (ram,0x001f3d18) */
/* WARNING: Removing unreachable block (ram,0x001f3db0) */

void maybe_DemoCam_PlaceSide(undefined8 param_1,int param_2)

{
  int iVar1;
  RacerState *pRVar2;
  
  sceVu0CopyVector(param_2 + 0x470,0x365080);
  sceVu0CopyVector(param_2 + 0x480,0x365090);
  sceVu0CopyVector(param_2 + 0x490,0x3650a0);
  sceVu0CopyVector(param_2 + 0x4a0,0x3650b0);
  if (*(int *)(param_2 + 0x7b0) != 0) {
    iVar1 = RaceCar_GetIndex();
    pRVar2 = GameState_Elem_3e0_x540((int)*(char *)(iVar1 + 9));
    *(float *)(param_2 + 0x470) = ((float)(pRVar2->unk_34 >> 1) - 1800.0) / 1000.0;
    *(float *)(param_2 + 0x474) = ((float)pRVar2->maybe_carObj - 450.0) / 1000.0;
    *(float *)(param_2 + 0x480) = (float)(pRVar2->unk_34 >> 1) / 1000.0;
    *(float *)(param_2 + 0x484) = ((float)pRVar2->maybe_carObj - 450.0) / 1000.0;
  }
  return;
}

// 0x001f3e60  size 0x45c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Demo_Start(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [32];
  float fStack_20;
  float fStack_1c;
  
  iVar1 = *param_1;
  iVar7 = (int)param_2;
  if ((param_1[1] != 0) && (iVar1 != 0)) {
    piVar6 = *(int **)(iVar1 + 8);
    iVar2 = param_1[3];
    if ((piVar6 != (int *)0x0) && (iVar8 = 0, 0 < *(int *)(iVar1 + 0xc))) {
      do {
        if (*piVar6 == param_1[4]) {
          iVar9 = piVar6[2];
          if (iVar9 == 2) {
            uVar10 = 0;
            lVar3 = GameState_GetRacerCount();
            if (0 < lVar3) {
              iVar9 = 0;
              do {
                if (_g_RaceSnd == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = _g_RaceSnd + iVar9;
                }
                CarSnd_StopVoice(iVar4);
                if ((_g_Skids == 0) || (uRam004301ac <= uVar10)) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = _g_Skids + uVar10 * 0xb900;
                }
                Skid_Clear(iVar4);
                iVar9 = iVar9 + 0x80;
                uVar10 = uVar10 + 1;
                iVar4 = GameState_GetRacerCount();
              } while ((int)uVar10 < iVar4);
            }
            uVar5 = 4;
            if (piVar6[1] == 0) {
              uVar5 = 3;
            }
            Scene_SetParam(uVar5);
            iRam0046a59c = piVar6[1];
            goto LAB_001f4074;
          }
          if (iVar9 == 3) {
            if (piVar6[1] == 0) {
              RaceCar_ClearFlags(iVar2,0x4000);
            }
            else {
              RaceCar_SetFlags(iVar2,0x4000);
            }
            goto LAB_001f4074;
          }
          if (iVar9 == 4) goto LAB_001f4074;
          if (iVar9 == 1) {
            if (piVar6[1] == 0) {
              RaceCar_ClearFlags(iVar2,8);
              RaceCar_SetFlags(iVar2,0x40);
            }
            else {
              RaceCar_SetFlags(iVar2,8);
              RaceCar_SetFlags(iVar2,0x20);
            }
            goto LAB_001f4074;
          }
          if (iVar9 == 0) {
            if (piVar6[1] == 0) {
              RaceCar_ClearFlags(iVar2,0x200);
              RaceCar_SetFlags(iVar2,1);
            }
            else {
              *(undefined1 *)(iVar2 + 0x890) = 0;
              RaceCar_SetFlags(iVar2,0x200);
              RaceCar_ClearFlags(iVar2,1);
            }
            goto LAB_001f4074;
          }
          iVar9 = *(int *)(iVar1 + 0xc);
        }
        else {
LAB_001f4074:
          iVar9 = *(int *)(iVar1 + 0xc);
        }
        iVar8 = iVar8 + 1;
        piVar6 = piVar6 + 3;
      } while (iVar8 < iVar9);
    }
    uVar10 = *(uint *)param_1[1];
    fVar11 = (float)param_1[4] / (float)*(int *)(iVar1 + 0x1c);
    lVar3 = Cam_FindKeyAfter((uint *)param_1[1],param_1[2],
                             (int)(fVar11 * (float)(*(int *)(param_1[2] + 4) - uVar10) +
                                  (float)uVar10 + 0.0));
    if (lVar3 != 0) {
      Cam_InterpolatePathAlt(fVar11,*(undefined4 *)((int)lVar3 + 0x10),auStack_60,iVar7 + 0x510);
      Cam_SetPitch(fStack_1c,param_2);
      Cam_SetYaw(-fStack_20,param_2);
      Cam_SetFov(*(float *)(iVar7 + 0x4f4) * (fStack_1c / *(float *)(iVar7 + 0x4f0)),param_2);
      sceVu0CopyVector(iVar7 + 0x420,auStack_50);
      sceVu0CopyVector(iVar7 + 0x430,auStack_40);
      sceVu0CopyVector(iVar7 + 0x440,iVar7 + 0x490);
      Cam_UpdateTargetFromCar(param_2);
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      fVar11 = (float)Demo_InterpolateKeys((float)param_1[4] / (float)*(int *)(iVar1 + 0x1c));
      fVar11 = fVar11 * 255.0;
      if (fVar11 < 2.1474836e+09) {
        uVar10 = (uint)fVar11;
      }
      else {
        uVar10 = (int)(fVar11 - 2.1474836e+09) | 0x80000000;
      }
      Gfx_SetDisplayParam(1,uVar10,0,0,0);
    }
  }
  return;
}

