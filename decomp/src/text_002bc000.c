// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002bc000 - 0x002c0000
#include "ghidra_types.h"

// 0x002bc0b0  size 0x58
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 10 callers */

undefined4 SeqGen_FindPatternIndex(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x4c) != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x18;
  } while (iVar2 < 0xc);
  if ((_g_SeqGen == 0) || (*(int *)(_g_SeqGen + 4) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x002bc110  size 0x20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 SeqGen_GetPatternId(int param_1)

{
  return *(undefined2 *)(*(int *)(_g_SeqGen + 8) + param_1 * 0xc);
}

// 0x002bc130  size 0x1c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int SeqGen_GetPatternEntry(int param_1)

{
  return *(int *)(_g_SeqGen + 8) + param_1 * 0xc;
}

// 0x002bc150  size 0x50
bool SeqGen_GetModeSongIndex(long param_1)

{
  int iVar1;
  
  if (0xb < param_1) {
    iVar1 = maybe_Race_GetMode();
    *(undefined2 *)(iVar1 + (int)param_1 * 0x858 + -0x5bac) = 0;
  }
  return 0xb < param_1;
}

// 0x002bc1a0  size 0x50
/* < 12 slots; 15 callers */

bool SeqGen_IsUserSong(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 < 0xc) {
    bVar1 = true;
  }
  else {
    iVar2 = maybe_Race_GetMode();
    bVar1 = *(short *)(iVar2 + (int)param_1 * 0x858 + -0x5bac) != 0;
  }
  return bVar1;
}

// 0x002bc1f0  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Script_Nop(void)

{
  return _g_SeqGenShared1;
}

// 0x002bc200  size 0x1ec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SeqGen_Shutdown(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_g_SeqGen != 0) {
    if (*(int *)(_g_SeqGen + 8) != 0) {
      Mem_Free();
      *(undefined4 *)(_g_SeqGen + 8) = 0;
    }
    if (_g_SeqGen != 0) {
      Mem_Free();
      _g_SeqGen = 0;
    }
  }
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = _g_SeqGenShared1 + iVar2;
    maybe_SeqSrc_Free(iVar1 + 0x158);
    SeqGen_FreeData(iVar1 + 0x1ec);
    if (*(int *)(iVar1 + 0x2d8) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar1 + 0x2d8) = 0;
    }
    *(undefined4 *)(iVar1 + 0x2dc) = 0;
    *(undefined4 *)(iVar1 + 0x2e0) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2e4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2e8) = 0;
    *(undefined4 *)(iVar1 + 0x1e8) = 0;
    *(undefined4 *)(iVar1 + 0x2d0) = 0;
    *(undefined4 *)(iVar1 + 0x2ec) = 0;
    *(undefined4 *)(iVar1 + 0x2f0) = 0;
    *(undefined4 *)(iVar1 + 0x2fc) = 0;
    *(undefined4 *)(iVar1 + 0x2f4) = 0;
    Mem_Set16(iVar1 + 0x300,0,0xc00);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x2f8) = 0;
    iVar2 = iVar2 + 0xda8;
  } while (iVar3 < 8);
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = _g_SeqGenShared1 + iVar2;
    maybe_SeqSrc_Free(iVar1 + 0x6e98);
    SeqGen_FreeData(iVar1 + 0x6f2c);
    if (*(int *)(iVar1 + 0x7018) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar1 + 0x7018) = 0;
    }
    *(undefined4 *)(iVar1 + 0x701c) = 0;
    *(undefined4 *)(iVar1 + 0x7020) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7024) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7028) = 0;
    *(undefined4 *)(iVar1 + 0x6f28) = 0;
    *(undefined4 *)(iVar1 + 0x7010) = 0;
    *(undefined4 *)(iVar1 + 0x702c) = 0;
    *(undefined4 *)(iVar1 + 0x7030) = 0;
    *(undefined4 *)(iVar1 + 0x703c) = 0;
    *(undefined4 *)(iVar1 + 0x7034) = 0;
    Mem_Set16(iVar1 + 0x7040,0,0xc00);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x7038) = 0;
    iVar2 = iVar2 + 0xda8;
  } while (iVar3 < 2);
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = _g_SeqGenShared1 + iVar2;
    if (*(int *)(iVar1 + 0x3c) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x44) = 0xffffffff;
    iVar2 = iVar2 + 0x18;
    *(undefined4 *)(iVar1 + 0x48) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  } while (iVar3 < 0xc);
  if (_g_SeqGenShared1 != 0) {
    Mem_Free();
    _g_SeqGenShared1 = 0;
  }
  return;
}

// 0x002bc3f0  size 0x33c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x8a08-byte state */

void SeqGen_Init(undefined8 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = Mem_Alloc16(0x8a08,param_1);
  _g_SeqGenShared1 = (int)uVar3;
  Mem_Set16(uVar3,0,0x8a08);
  *(undefined4 *)(_g_SeqGenShared1 + 8) = 0;
  uVar6 = 0;
  iVar5 = 0;
  *(undefined4 *)(_g_SeqGenShared1 + 0xc) = 1;
  *(int *)(_g_SeqGenShared1 + 0x30) = (int)param_1;
  *(undefined4 *)(_g_SeqGenShared1 + 0x34) = param_2;
  *(undefined4 *)(_g_SeqGenShared1 + 0x89e8) = 0;
  *(undefined2 *)(_g_SeqGenShared1 + 0x89f4) = 0x96;
  *(undefined2 *)(_g_SeqGenShared1 + 0x89f0) = 0;
  *(undefined2 *)(_g_SeqGenShared1 + 0x89f2) = 0x400;
  *(undefined4 *)(_g_SeqGenShared1 + 0x89ec) = 4;
  *(undefined1 *)(_g_SeqGenShared1 + 0x89f6) = 0;
  do {
    iVar4 = _g_SeqGenShared1 + iVar5;
    *(int *)(iVar4 + 0x38) = (int)param_1;
    *(undefined4 *)(iVar4 + 0x3c) = 0;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    *(undefined4 *)(iVar4 + 0x44) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x48) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    iVar4 = *(int *)(_g_SeqGenShared1 + iVar5 + 0x3c);
    if (iVar4 != 0) {
      Mem_Set16(iVar4,0,*(undefined4 *)(_g_SeqGenShared1 + iVar5 + 0x40));
    }
    if (((int)(param_3 & 0xffff) >> (uVar6 & 0x1f) & 1U) != 0) {
      uVar1 = g_ArcToc->entries[uVar6 + 0x17ff].unpackedSize;
      iVar4 = _g_SeqGenShared1 + iVar5;
      if (uVar1 == 0) {
        uVar1 = g_ArcToc->entries[uVar6 + 0x17ff].sectorCount;
      }
      else {
        uVar1 = uVar1 + 0x7ff >> 0xb;
      }
      if (*(int *)(iVar4 + 0x3c) != 0) {
        Mem_Free();
        *(undefined4 *)(iVar4 + 0x3c) = 0;
      }
      *(undefined4 *)(iVar4 + 0x40) = 0;
      *(undefined4 *)(iVar4 + 0x44) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x48) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      uVar2 = Mem_Alloc16(uVar1 << 0xb,*(undefined4 *)(iVar4 + 0x38));
      *(undefined4 *)(iVar4 + 0x3c) = uVar2;
      if (*(int *)(iVar4 + 0x3c) != 0) {
        *(uint *)(iVar4 + 0x40) = uVar1 << 0xb;
        *(undefined4 *)(iVar4 + 0x44) = 0;
      }
      if (*(int *)(iVar4 + 0x3c) != 0) {
        uVar2 = Arc_LoadFileEx(uVar6 + 0x17ff,*(int *)(iVar4 + 0x3c),0x2ae450,
                               (undefined4 *)(iVar4 + 0x38),0,0);
        *(undefined4 *)(iVar4 + 0x48) = uVar2;
        *(undefined4 *)(iVar4 + 0x4c) = 1;
      }
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 0x18;
  } while ((int)uVar6 < 0xc);
  iVar4 = 0;
  iVar5 = 0;
  do {
    SeqGen_ResetPart(_g_SeqGenShared1 + iVar5 + 0x158,param_1,param_1);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0xda8;
  } while (iVar4 < 8);
  iVar4 = 0;
  iVar5 = 0;
  do {
    SeqGen_ResetPart(_g_SeqGenShared1 + iVar5 + 0x6e98,0x430750,param_1);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0xda8;
  } while (iVar4 < 2);
  if ((param_3 & 0xffff) == 0xffff) {
    uVar6 = g_ArcToc->entries[0x180b].unpackedSize;
    if (uVar6 == 0) {
      uVar6 = g_ArcToc->entries[0x180b].sectorCount;
    }
    else {
      uVar6 = uVar6 + 0x7ff >> 0xb;
    }
    _g_SeqGen = (undefined4 *)Mem_Alloc16(0xc,param_1);
    uVar2 = Mem_Alloc16(uVar6 << 0xb,param_1);
    _g_SeqGen[2] = uVar2;
    uVar2 = Arc_LoadFileEx(0x180b,_g_SeqGen[2],0x2ae560,_g_SeqGen,0,0);
    *_g_SeqGen = uVar2;
    _g_SeqGen[1] = 1;
  }
  return;
}

// 0x002bc730  size 0x160
/* WARNING: Removing unreachable block (ram,0x002bc7b0) */

void SeqGen_ApplyPattern(int param_1,int param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  
  if ((-1 < param_2) && (puVar3 = *(undefined2 **)(param_1 + 0x1a4), puVar3 != (undefined2 *)0x0)) {
    if (param_2 == 0) {
      if (*(int *)(puVar3 + 4) != 0) {
        *(undefined4 *)(*(int *)(puVar3 + 4) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(puVar3 + 4);
    }
    else {
      iVar4 = 0;
      puVar5 = puVar3;
      if (0 < param_2) {
        puVar2 = puVar3;
        if (8 < param_2) {
          bVar1 = false;
          if ((-1 < param_2) && (param_2 < 0x7fffffff)) {
            bVar1 = true;
          }
          if (bVar1) {
            do {
              iVar4 = iVar4 + 8;
              puVar5 = *(undefined2 **)
                        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(puVar3 + 4) + 8) + 8)
                                                   + 8) + 8) + 8) + 8);
              puVar3 = *(undefined2 **)(puVar5 + 4);
              puVar2 = puVar3;
            } while (iVar4 < param_2 + -8);
          }
        }
        for (; puVar3 = puVar2, iVar4 < param_2; iVar4 = iVar4 + 1) {
          puVar2 = *(undefined2 **)(puVar3 + 4);
          puVar5 = puVar3;
        }
      }
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar3 + 4);
      if (*(int *)(puVar3 + 4) != 0) {
        *(undefined4 *)(*(int *)(puVar3 + 4) + 4) = *(undefined4 *)(puVar3 + 2);
      }
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
  }
  return;
}

// 0x002bc8a0  size 0x130
void SeqGen_ApplyRange(int param_1,short param_2,short param_3)

{
  short *psVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  iVar5 = 0;
  iVar4 = param_1;
  do {
    if (*(short *)(iVar4 + 0x1aa) < 1) {
      bVar2 = iVar5 < 0;
      goto LAB_002bc8d4;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xc;
  } while (iVar5 < 0x100);
  iVar5 = -1;
  bVar2 = true;
LAB_002bc8d4:
  if (((!bVar2) && (0 < param_3)) && ((int)param_2 + (int)param_3 < 0x401)) {
    psVar1 = *(short **)(param_1 + 0x1a4);
    iVar4 = param_1 + iVar5 * 0xc;
    iVar5 = iVar4 + 0x1a8;
    *(short *)(iVar4 + 0x1a8) = param_2;
    *(short *)(iVar4 + 0x1aa) = param_3;
    if (*(int *)(param_1 + 0x1a4) == 0) {
      *(undefined4 *)(iVar4 + 0x1ac) = 0;
      *(undefined4 *)(iVar4 + 0x1b0) = 0;
      *(int *)(param_1 + 0x1a4) = iVar5;
    }
    else if (param_2 < *psVar1) {
      *(undefined4 *)(iVar4 + 0x1ac) = 0;
      *(undefined4 *)(iVar4 + 0x1b0) = *(undefined4 *)(param_1 + 0x1a4);
      *(int *)(*(int *)(iVar4 + 0x1b0) + 4) = iVar5;
      *(int *)(param_1 + 0x1a4) = iVar5;
    }
    else {
      psVar3 = psVar1;
      while ((psVar6 = psVar1, psVar6 != (short *)0x0 && (*psVar6 < param_2))) {
        psVar3 = psVar6;
        psVar1 = *(short **)(psVar6 + 4);
      }
      *(short **)(iVar4 + 0x1ac) = psVar3;
      *(undefined4 *)(iVar4 + 0x1b0) = *(undefined4 *)(psVar3 + 4);
      *(int *)(psVar3 + 4) = iVar5;
      if (*(int *)(iVar4 + 0x1b0) != 0) {
        *(int *)(*(int *)(iVar4 + 0x1b0) + 4) = iVar5;
      }
    }
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  }
  return;
}

// 0x002bc9e0  size 0x114
void SeqGen_ResetPart(int param_1,undefined4 param_2,undefined4 param_3)

{
  maybe_SeqGen_ResetTrack();
  Mem_Set16(param_1 + 0x94,0,0x10);
  Mem_Set16(param_1 + 0xa4,0,0x40);
  Mem_Set16(param_1 + 0xe4,0,0x18);
  Mem_Set16(param_1 + 0xfc,0,0x18);
  Mem_Set16(param_1 + 0x114,0,0x18);
  Mem_Set16(param_1 + 300,0,0x18);
  *(undefined4 *)(param_1 + 0x148) = param_2;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  Mem_Set16(param_1 + 0x168,0,0x10);
  *(undefined4 *)(param_1 + 0x14c) = param_2;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x17c) = param_3;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  Mem_Set16(param_1 + 0x1a8,0,0xc00);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  return;
}

// 0x002bcb00  size 0x1d4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Result_BuildRaceEntry(int param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  iVar1 = *_g_AiDrivers;
  uVar8 = 0;
  cVar2 = RaceCtx_GetMode();
  if (cVar2 == '\x01') {
    uVar3 = RaceProg_Get_4();
    if ((uVar3 & 4) != 0) {
      uVar9 = RaceProg_GetArray_40(0);
      uVar9 = LapTime_GetBest(uVar9);
    }
    uVar3 = RaceProg_Get_4();
    if ((uVar3 & 2) != 0) {
      uVar8 = RaceProg_GetArray_34(0);
      uVar8 = SpGauge_GetValue(uVar8);
    }
    uVar4 = Replay_GetHeader();
    uVar5 = maybe_GameState_GetFlag();
    uVar6 = RaceCtx_GetMode();
    uVar7 = RaceCtx_Get_8();
    RaceEntry_Create(uVar4,uVar5,iVar1 + 0x1d8,uVar9,uVar8,uVar6,uVar7,0);
  }
  Save_AllocSlots();
  cVar2 = RaceCtx_GetMode();
  if (cVar2 == '\x03') {
    if (_s_ResultVar1 == 0) {
      NameEntry_SetMode(param_1 + 0x40c,2);
    }
    else {
      NameEntry_SetMode(param_1 + 0x40c,2,5);
    }
  }
  else if (cVar2 == '\x02') {
    if (_s_ResultVar1 == 0) {
      NameEntry_SetMode(param_1 + 0x40c,2,2);
    }
    else {
      NameEntry_SetMode(param_1 + 0x40c,2,4);
    }
  }
  else {
    NameEntry_SetMode(param_1 + 0x40c,2,1);
  }
  SaveUi_SetParams(0x2d9590,0x2d9780,0x2d8f70);
  *(undefined4 *)(param_1 + 0xb88) = 0;
  maybe_NameEntry_Animate(param_1 + 0x40c);
  maybe_NameEntry_Reset(param_1 + 0x40c);
  return;
}

// 0x002bcce0  size 0x11c
/* min*60000 + sec*1000 + ms */

int LapTime_Compare(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3[2] + param_3[1] * 1000 + *param_3 * 60000;
  iVar2 = param_2[2] + param_2[1] * 1000 + *param_2 * 60000;
  if (iVar1 < iVar2) {
    iVar3 = iVar2 - iVar1;
    param_1[3] = 1;
  }
  else if (iVar2 < iVar1) {
    iVar3 = iVar1 - iVar2;
    param_1[3] = -1;
  }
  else {
    param_1[3] = 0;
    iVar3 = 0;
  }
  *param_1 = iVar3 / 60000;
  param_1[1] = (iVar3 / 1000) % 0x3c;
  param_1[2] = iVar3 % 1000;
  return iVar2 - iVar1;
}

// 0x002bce00  size 0x4d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Result_UpdateCursor(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = 2;
  if (*(int *)(param_1 + 0x31c) == 0) {
    uVar4 = 0;
  }
  uVar4 = *(int *)(param_1 + 0x318) != 0 | uVar4;
  iVar7 = (int)(char)(&DAT_0032f535)[(uint)g_RaceHudShared1 * 6];
  iVar1 = *(int *)(&DAT_0032f1c4 + iVar7 * 8);
  if ((param_1[0x48] != '\x02') && (param_1[0x48] != '\x04')) {
    if (*param_1 == '\x01') {
      if (*(float *)(param_1 + 0x94) == 1.0) {
        if (*_g_MenuInput != 1) {
          *_g_MenuInput = 1;
        }
      }
      else if (*_g_MenuInput == 1) {
        *_g_MenuInput = 0;
      }
    }
    uVar6 = _g_MenuInput[2];
    if ((_g_MenuInput[4] & uVar6) == 0) {
      uVar6 = 0x100000;
    }
    else if (uVar6 == 0x80000) {
      uVar6 = 0x80000;
    }
    else if (*_g_MenuInput != 1) {
      uVar6 = 0x100000;
    }
    if (uVar6 == 0x20) {
      if (*(int *)(param_1 + 800) == 0) {
        param_1[800] = '\x01';
        param_1[0x321] = '\0';
        param_1[0x322] = '\0';
        param_1[0x323] = '\0';
        param_1[0x48] = '\x02';
      }
      else {
        param_1[0x48] = '\x05';
      }
    }
    else if (uVar6 == 0x10) {
      if (*(int *)(param_1 + 800) == 0) {
        param_1[800] = '\x01';
        param_1[0x321] = '\0';
        param_1[0x322] = '\0';
        param_1[0x323] = '\0';
        param_1[0x48] = '\x02';
      }
      else {
        Se_PlayMenuVol(5,0x60);
        if ((byte)(&PTR_DAT_0032f1c0)[iVar7 * 2][*(int *)(param_1 + 0x324) * 0x14] < 6) {
                    /* WARNING: Switch is manually overridden */
          switch((&PTR_DAT_0032f1c0)[iVar7 * 2][*(int *)(param_1 + 0x324) * 0x14]) {
          case 0:
            param_1[0x340] = '\x01';
            break;
          case 1:
            *_g_MenuInput = 0;
            param_1[0x340] = '\x02';
            break;
          case 2:
            param_1[0x340] = '\x03';
            _s_ResultVar1 = 0;
            break;
          case 3:
            param_1[0x340] = '\x04';
            _s_ResultVar1 = 1;
            break;
          case 4:
            param_1[0x324] = '\0';
            param_1[0x325] = '\0';
            param_1[0x326] = '\0';
            param_1[0x327] = '\0';
            param_1[0x340] = '\x06';
            *_g_MenuInput = 0;
            break;
          case 5:
            param_1[0x340] = '\a';
          }
        }
        *param_1 = '\a';
        param_1[0x24] = '\x04';
        param_1[0x48] = '\x04';
      }
    }
    else if (uVar6 == 2) {
      if (*(int *)(param_1 + 800) != 0) {
        iVar2 = *(int *)(param_1 + 0x324);
        *(int *)(param_1 + 0x324) = iVar2 + 1;
        uVar6 = *(uint *)(param_1 + 0x324);
        if ((int)uVar6 < 0) {
          uVar6 = iVar1 - 1;
        }
        else if (iVar1 - 1U < uVar6) {
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x324) = uVar6;
        iVar3 = *(int *)(param_1 + 0x324);
        if ((uVar4 & *(uint *)((&PTR_DAT_0032f1c0)[iVar7 * 2] + iVar3 * 0x14 + 4)) != 0) {
          do {
            *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
            uVar6 = *(uint *)(param_1 + 0x324);
            uVar5 = iVar1 - 1U;
            if ((-1 < (int)uVar6) && (uVar5 = uVar6, iVar1 - 1U < uVar6)) {
              uVar5 = 0;
            }
            *(uint *)(param_1 + 0x324) = uVar5;
            iVar3 = *(int *)(param_1 + 0x324);
          } while ((uVar4 & *(uint *)((&PTR_DAT_0032f1c0)[iVar7 * 2] + iVar3 * 0x14 + 4)) != 0);
        }
        if (iVar2 == iVar3) {
          Se_PlayMenuVol(8,0x60);
        }
        else {
          Se_PlayMenuVol(7,0x60);
        }
      }
    }
    else if ((uVar6 == 1) && (*(int *)(param_1 + 800) != 0)) {
      iVar2 = *(int *)(param_1 + 0x324);
      *(int *)(param_1 + 0x324) = iVar2 + -1;
      uVar6 = *(uint *)(param_1 + 0x324);
      if ((int)uVar6 < 0) {
        uVar6 = iVar1 - 1;
      }
      else if (iVar1 - 1U < uVar6) {
        uVar6 = 0;
      }
      *(uint *)(param_1 + 0x324) = uVar6;
      iVar3 = *(int *)(param_1 + 0x324);
      if ((uVar4 & *(uint *)((&PTR_DAT_0032f1c0)[iVar7 * 2] + iVar3 * 0x14 + 4)) != 0) {
        do {
          *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + -1;
          uVar6 = *(uint *)(param_1 + 0x324);
          uVar5 = iVar1 - 1U;
          if ((-1 < (int)uVar6) && (uVar5 = uVar6, iVar1 - 1U < uVar6)) {
            uVar5 = 0;
          }
          *(uint *)(param_1 + 0x324) = uVar5;
          iVar3 = *(int *)(param_1 + 0x324);
        } while ((uVar4 & *(uint *)((&PTR_DAT_0032f1c0)[iVar7 * 2] + iVar3 * 0x14 + 4)) != 0);
      }
      if (iVar2 == iVar3) {
        Se_PlayMenuVol(8,0x60);
      }
      else {
        Se_PlayMenuVol(7,0x60);
      }
    }
  }
  return;
}

// 0x002bd2d0  size 0x834
void Result_DrawRaceInfo(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  RaceEntrySetup *pRVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined4 auStack_350 [5];
  undefined4 uStack_33c;
  int iStack_338;
  undefined1 auStack_310 [576];
  undefined4 auStack_d0 [5];
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 auStack_90 [5];
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 auStack_50 [5];
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_18;
  ushort uStack_14;
  char acStack_10 [16];
  
  uVar8 = 2;
  iVar1 = *(int *)(param_1 + 0x318);
  if (*(int *)(param_1 + 0x31c) == 0) {
    uVar8 = 0;
  }
  iVar9 = (int)(char)(&DAT_0032f535)[(uint)g_RaceHudShared1 * 6];
  uVar2 = *(uint *)(&DAT_0032f1c4 + iVar9 * 8);
  uVar12 = 0;
  if (uVar2 != 0) {
    iVar11 = 0;
    do {
      uVar10 = 3;
      pbVar7 = (&PTR_DAT_0032f1c0)[iVar9 * 2] + iVar11;
      bVar4 = *pbVar7;
      if (((iVar1 != 0 | uVar8) & *(uint *)(pbVar7 + 4)) == 0) {
        uVar10 = 0;
      }
      if (((long)*(int *)(pbVar7 + 0xc) != -1) && (bVar4 + 0x57 != -1)) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 0x28),auStack_50,(long)*(int *)(pbVar7 + 0xc));
        iStack_38 = (int)((float)iStack_38 * *(float *)(param_1 + 0x94));
        uStack_3c = uVar10;
        UiText_DrawById(auStack_50,bVar4 + 0x57);
      }
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 0x14;
    } while (uVar12 < uVar2);
  }
  iVar1 = *(int *)(param_1 + 0x3b8);
  if (((long)*(int *)(param_1 + 0x3b4) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 0x28),auStack_90,(long)*(int *)(param_1 + 0x3b4));
    uStack_7c = 0;
    iStack_78 = (int)((float)iStack_78 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_90,iVar1);
  }
  lVar13 = (long)*(int *)(param_1 + 0x3bc);
  uVar10 = *(undefined4 *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x3c0);
  if ((lVar13 != -1) && (iVar1 != -1)) {
    if (*(int *)(param_1 + 0x318) != 0) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 0x28),auStack_350,lVar13);
      uStack_33c = 0;
      iStack_338 = (int)((float)iStack_338 * *(float *)(param_1 + 0x94));
      MenuWnd_DrawRivalLabel(uVar10,lVar13,0,iVar1,0x30,0x30,0x30,0x30);
      cVar3 = *(char *)(param_1 + 0x48);
      goto LAB_002bd944;
    }
    pRVar5 = GameState_Elem_f0_xcc(0);
    Result_ResetCursor(&uStack_18);
    if (pRVar5->maybe_state == '\x01') {
      uStack_18 = uStack_18 & 0xfffffffd | 2;
    }
    else if (pRVar5->maybe_state == '\0') {
      uStack_18 = uStack_18 & 0xfffffffd;
    }
    cVar3 = Race_GetDirection();
    uStack_18._0_1_ = (byte)uStack_18 & 0xfb | (cVar3 != '\0') << 2;
    cVar3 = Race_GetWeather();
    uStack_18._0_1_ = (byte)uStack_18 & 0xf7 | (cVar3 != '\0') << 3;
    iVar11 = RaceProg_GetArray_1c(0);
    uStack_18 = CONCAT31(uStack_18._1_3_,(byte)uStack_18 & 0xef | (*(int *)(iVar11 + 0xc) != 0) << 4
                        );
    bVar4 = Race_GetTimeOfDay();
    if (bVar4 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar4) {
      case 0:
        uStack_14 = uStack_14 & 0xfffc;
        break;
      default:
        uStack_14 = uStack_14 & 0xfffc | 1;
        break;
      case 3:
        uStack_14 = uStack_14 & 0xfffc | 2;
        break;
      case 4:
        uStack_14 = uStack_14 & 0xfffc | 3;
      }
    }
    bVar4 = Race_GetCourseVariant();
    if (bVar4 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(bVar4) {
      case 0:
        uStack_14 = (ushort)((byte)uStack_14 & 0x83);
        break;
      case 1:
        uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 4);
        break;
      case 2:
        uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 8);
        break;
      case 3:
        uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0xc);
        break;
      case 4:
        uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0x10);
        break;
      case 5:
        uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0x14);
        break;
      case 6:
        uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0x18);
        break;
      case 7:
        uStack_14 = (ushort)((byte)uStack_14 & 0x83 | 0x1c);
      }
    }
    uStack_14 = uStack_14 & 0x7f | (short)pRVar5->maybe_counter << 7;
    cVar3 = GameState_Get_354_7050();
    if (cVar3 == '\x02') {
      uStack_18 = uStack_18 & 0xfffffffe;
      uStack_18 = CONCAT22(uStack_18._2_2_,
                           (ushort)uStack_18 & 0xf01f |
                           (ushort)((*(uint *)(param_1 + 0x1e4) & 0x7f) << 5));
      uVar8 = uStack_18 & 0xfffc0fff | (*(uint *)(param_1 + 0x1e8) & 0x3f) << 0xc;
      uStack_18._2_2_ = (ushort)(uVar8 >> 0x10);
      uStack_18._0_2_ = (ushort)uVar8;
      uStack_18 = CONCAT22(uStack_18._2_2_ & 0xf003 |
                           (ushort)((*(uint *)(param_1 + 0x1ec) & 0x3ff) << 2),(ushort)uStack_18);
    }
    else if (cVar3 == '\x01') {
      uStack_18 = uStack_18 & 0xf000001e | 1 | (*(uint *)(param_1 + 0x150) & 0x7fffff) << 5;
    }
    Password_Decode(auStack_310,&uStack_18,acStack_10);
    uVar8 = 0;
    pcVar6 = acStack_10;
    do {
      cVar3 = *pcVar6;
      if (cVar3 < 'A') {
        *pcVar6 = cVar3 + -0x32;
      }
      else if (cVar3 < 'J') {
        *pcVar6 = *pcVar6 + -0x39;
      }
      else if (cVar3 < 'P') {
        *pcVar6 = *pcVar6 + -0x3a;
      }
      else {
        *pcVar6 = *pcVar6 + -0x3b;
      }
      uVar8 = uVar8 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar8 < 0xd);
    MenuWnd_DrawRivalLabel
              (uVar10,lVar13,0,iVar1,acStack_10[0] + 0x10,acStack_10[1] + 0x10,acStack_10[2] + 0x10,
               acStack_10[3] + 0x10);
  }
  cVar3 = *(char *)(param_1 + 0x48);
LAB_002bd944:
  if (cVar3 == '\x03') {
    *(undefined4 *)(param_1 + 0x348) =
         *(undefined4 *)((&PTR_DAT_0032f1c0)[iVar9 * 2] + *(int *)(param_1 + 0x324) * 0x14 + 0x10);
    if ((((&DAT_0032f535)[(uint)g_RaceHudShared1 * 6] == '\x05') &&
        (cVar3 = GameState_Get_354_7050(), cVar3 == '\x01')) && (*(int *)(param_1 + 0x348) == 99)) {
      *(undefined4 *)(param_1 + 0x348) = 100;
    }
    iVar1 = *(int *)(param_1 + 0x348);
    if (((long)*(int *)(param_1 + 0x344) != -1) && (iVar1 != -1)) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 0x4c),auStack_d0,(long)*(int *)(param_1 + 0x344));
      uStack_bc = 0;
      iStack_b8 = (int)((float)iStack_b8 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_d0,iVar1);
    }
  }
  return;
}

// 0x002bdb10  size 0xc
void Result_ResetCursor(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 0x002bdb20  size 0x984
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Result_Draw_TestCourse(int param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  UiLayout *pUVar5;
  int iVar6;
  uint uVar7;
  undefined4 auStack_540 [5];
  undefined4 uStack_52c;
  int iStack_528;
  undefined4 auStack_500 [5];
  undefined4 uStack_4ec;
  int iStack_4e8;
  undefined4 auStack_4c0 [5];
  undefined4 uStack_4ac;
  int iStack_4a8;
  undefined4 auStack_480 [5];
  undefined4 uStack_46c;
  int iStack_468;
  undefined4 auStack_440 [5];
  undefined4 uStack_42c;
  int iStack_428;
  undefined4 auStack_400 [5];
  undefined4 uStack_3ec;
  int iStack_3e8;
  undefined4 auStack_3c0 [5];
  undefined4 uStack_3ac;
  int iStack_3a8;
  undefined4 auStack_380 [5];
  undefined4 uStack_36c;
  int iStack_368;
  undefined4 auStack_340 [5];
  undefined4 uStack_32c;
  int iStack_328;
  undefined4 auStack_300 [5];
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 auStack_2c0 [5];
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined4 auStack_280 [5];
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 auStack_240 [5];
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 auStack_200 [5];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 auStack_1c0 [5];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 auStack_180 [5];
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 auStack_140 [5];
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 auStack_c0 [5];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  cVar1 = GameState_Get_354_7050();
  if (cVar1 == '\x02') {
    if (*(int *)(param_1 + 0x318) == 0) {
      if ((long)*(int *)(param_1 + 0x364) == -1) {
        iVar6 = *(int *)(param_1 + 900);
      }
      else {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_400,(long)*(int *)(param_1 + 0x364));
        uStack_3ec = 0;
        iStack_3e8 = (int)((float)iStack_3e8 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_400,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                   *(undefined4 *)(param_1 + 0x1ec));
        iVar6 = *(int *)(param_1 + 900);
      }
      if ((long)iVar6 != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_440,(long)iVar6);
        uStack_42c = 4;
        iStack_428 = (int)((float)iStack_428 * *(float *)(param_1 + 0x94));
        if (*(int *)(param_1 + 0x274) < 1) {
          if (*(int *)(param_1 + 0x274) < 0) {
            UiText_DrawRivalInfo
                      (auStack_440,4,*(undefined4 *)(param_1 + 0x268),
                       *(undefined4 *)(param_1 + 0x26c),*(undefined4 *)(param_1 + 0x270));
          }
          else {
            UiText_DrawRivalInfo
                      (auStack_440,5,*(undefined4 *)(param_1 + 0x268),
                       *(undefined4 *)(param_1 + 0x26c),*(undefined4 *)(param_1 + 0x270));
          }
        }
        else {
          UiText_DrawRivalInfo
                    (auStack_440,3,*(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c)
                     ,*(undefined4 *)(param_1 + 0x270));
        }
      }
    }
    else {
      if ((long)*(int *)(param_1 + 0x364) == -1) {
        iVar6 = *(int *)(param_1 + 900);
      }
      else {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_380,(long)*(int *)(param_1 + 0x364));
        uStack_36c = 0;
        iStack_368 = (int)((float)iStack_368 * *(float *)(param_1 + 0x94));
        UiText_DrawById(auStack_380,0xc);
        iVar6 = *(int *)(param_1 + 900);
      }
      if ((long)iVar6 != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_3c0,(long)iVar6);
        uStack_3ac = 0;
        iStack_3a8 = (int)((float)iStack_3a8 * *(float *)(param_1 + 0x94));
        UiText_DrawById(auStack_3c0,0xb);
      }
    }
    uVar7 = 0;
    iVar6 = param_1;
    iVar4 = param_1;
    do {
      if (*(int *)(param_1 + 0x318) == 0) {
        lVar3 = (long)(int)(*(int *)(param_1 + 0x3a4) + uVar7);
        if (lVar3 != -1) {
          UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_500,lVar3);
          uStack_4ec = 0;
          iStack_4e8 = (int)((float)iStack_4e8 * *(float *)(param_1 + 0x94));
          UiText_DrawRivalInfo
                    (auStack_500,2,*(undefined4 *)(iVar6 + 0x1f0),*(undefined4 *)(iVar6 + 500),
                     *(undefined4 *)(iVar6 + 0x1f8));
        }
        lVar3 = (long)(int)(*(int *)(param_1 + 0x3ac) + uVar7);
        if (lVar3 != -1) {
          UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_540,lVar3);
          uStack_52c = 4;
          iStack_528 = (int)((float)iStack_528 * *(float *)(param_1 + 0x94));
          if (*(int *)(iVar4 + 0x284) < 1) {
            if (*(int *)(iVar4 + 0x284) < 0) {
              UiText_DrawRivalInfo
                        (auStack_540,4,*(undefined4 *)(iVar4 + 0x278),*(undefined4 *)(iVar4 + 0x27c)
                         ,*(undefined4 *)(iVar4 + 0x280));
            }
            else {
              UiText_DrawRivalInfo
                        (auStack_540,5,*(undefined4 *)(iVar4 + 0x278),*(undefined4 *)(iVar4 + 0x27c)
                         ,*(undefined4 *)(iVar4 + 0x280));
            }
          }
          else {
            UiText_DrawRivalInfo
                      (auStack_540,3,*(undefined4 *)(iVar4 + 0x278),*(undefined4 *)(iVar4 + 0x27c),
                       *(undefined4 *)(iVar4 + 0x280));
          }
        }
      }
      else {
        lVar3 = (long)(int)(*(int *)(param_1 + 0x3a4) + uVar7);
        if (lVar3 != -1) {
          UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_480,lVar3);
          uStack_46c = 0;
          iStack_468 = (int)((float)iStack_468 * *(float *)(param_1 + 0x94));
          UiText_DrawById(auStack_480,0xc);
        }
        lVar3 = (long)(int)(*(int *)(param_1 + 0x3ac) + uVar7);
        if (lVar3 != -1) {
          UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_4c0,lVar3);
          uStack_4ac = 0;
          iStack_4a8 = (int)((float)iStack_4a8 * *(float *)(param_1 + 0x94));
          UiText_DrawById(auStack_4c0,0xb);
        }
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0xc;
      iVar4 = iVar4 + 0x10;
    } while (uVar7 < 9);
    return;
  }
  if (cVar1 != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0x318) == 0) {
    iVar6 = *(int *)(param_1 + 0x150);
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_180,(long)*(int *)(param_1 + 0x364));
    uStack_16c = 0;
    iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
    if (iVar6 < 0) {
      UiText_DrawRivalInfo(auStack_180,7,-iVar6);
      pUVar5 = *(UiLayout **)(param_1 + 4);
    }
    else {
      UiText_DrawRivalInfo(auStack_180,6,iVar6);
      pUVar5 = *(UiLayout **)(param_1 + 4);
    }
    iVar6 = *(int *)(param_1 + 0x1a8);
    UiElem_GetRect(pUVar5,auStack_1c0,(long)*(int *)(param_1 + 900));
    uStack_1ac = 4;
    iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
    if (iVar6 < 1) {
      if (iVar6 < 0) {
        UiText_DrawRivalInfo(auStack_1c0,9,-iVar6);
      }
      else {
        UiText_DrawRivalInfo(auStack_1c0,10,iVar6);
      }
      iVar6 = *(int *)(param_1 + 0x38c);
    }
    else {
      UiText_DrawRivalInfo(auStack_1c0,8,iVar6);
      iVar6 = *(int *)(param_1 + 0x38c);
    }
    iVar4 = *(int *)(param_1 + 0x390);
    if (((long)iVar6 != -1) && (iVar4 != -1)) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_200,(long)iVar6);
      uStack_1ec = 4;
      iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_200,iVar4);
    }
    iVar6 = *(int *)(param_1 + 0x1a4);
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_240,(long)*(int *)(param_1 + 0x394));
    uStack_22c = 5;
    iStack_228 = (int)((float)iStack_228 * *(float *)(param_1 + 0x94));
    if (-1 < iVar6) {
      UiText_DrawRivalInfo(auStack_240,6,iVar6);
      pUVar5 = *(UiLayout **)(param_1 + 4);
      goto LAB_002bdc40;
    }
    UiText_DrawRivalInfo(auStack_240,7,-iVar6);
  }
  else {
    if ((long)*(int *)(param_1 + 0x364) == -1) {
      iVar6 = *(int *)(param_1 + 900);
    }
    else {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x364));
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_80,0xc);
      iVar6 = *(int *)(param_1 + 900);
    }
    if ((long)iVar6 == -1) {
      iVar6 = *(int *)(param_1 + 0x38c);
    }
    else {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_c0,(long)iVar6);
      uStack_ac = 0;
      iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_c0,0xb);
      iVar6 = *(int *)(param_1 + 0x38c);
    }
    iVar4 = *(int *)(param_1 + 0x390);
    if (((long)iVar6 != -1) && (iVar4 != -1)) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_100,(long)iVar6);
      uStack_ec = 4;
      iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_100,iVar4);
    }
    if ((long)*(int *)(param_1 + 0x394) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_140,(long)*(int *)(param_1 + 0x394));
      uStack_12c = 5;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_140,0xb);
    }
  }
  pUVar5 = *(UiLayout **)(param_1 + 4);
LAB_002bdc40:
  uVar7 = 0;
  do {
    UiElem_GetRect(pUVar5,auStack_40,(long)(int)(*(int *)(param_1 + 0x39c) + uVar7));
    uStack_2c = 4;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    UiText_DrawRivalInfo(auStack_40,1,0,uVar7 + 1);
    if (*(int *)(_g_RaceHud + 0x298) == 0) {
      uVar2 = 8 - uVar7;
    }
    else {
      uVar2 = uVar7;
    }
    if (*(int *)(param_1 + 0x318) == 0) {
      iVar4 = param_1 + uVar2 * 4;
      iVar6 = *(int *)(iVar4 + 0x154);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_300,
                     (long)(int)(*(int *)(param_1 + 0x3a4) + uVar7));
      uStack_2ec = 0;
      iStack_2e8 = (int)((float)iStack_2e8 * *(float *)(param_1 + 0x94));
      if (iVar6 < 0) {
        UiText_DrawRivalInfo(auStack_300,7,-iVar6);
        iVar6 = *(int *)(param_1 + 0x3ac);
      }
      else {
        UiText_DrawRivalInfo(auStack_300,6,iVar6);
        iVar6 = *(int *)(param_1 + 0x3ac);
      }
      iVar4 = *(int *)(iVar4 + 0x1ac);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_340,(long)(int)(iVar6 + uVar7));
      uStack_32c = 4;
      iStack_328 = (int)((float)iStack_328 * *(float *)(param_1 + 0x94));
      if (iVar4 < 1) {
        if (iVar4 < 0) {
          UiText_DrawRivalInfo(auStack_340,9,-iVar4);
        }
        else {
          UiText_DrawRivalInfo(auStack_340,10,iVar4);
        }
      }
      else {
        UiText_DrawRivalInfo(auStack_340,8,iVar4);
      }
    }
    else {
      lVar3 = (long)(int)(*(int *)(param_1 + 0x3a4) + uVar7);
      if (lVar3 == -1) {
        iVar6 = *(int *)(param_1 + 0x3ac);
      }
      else {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_280,lVar3);
        uStack_26c = 0;
        iStack_268 = (int)((float)iStack_268 * *(float *)(param_1 + 0x94));
        UiText_DrawById(auStack_280,0xc);
        iVar6 = *(int *)(param_1 + 0x3ac);
      }
      if ((long)(int)(iVar6 + uVar7) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_2c0,(long)(int)(iVar6 + uVar7));
        uStack_2ac = 0;
        iStack_2a8 = (int)((float)iStack_2a8 * *(float *)(param_1 + 0x94));
        UiText_DrawById(auStack_2c0,0xb);
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 9);
  return;
}

// 0x002be4b0  size 0x5a4
void Result_Draw_TestCourse_e4b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 auStack_380 [5];
  undefined4 uStack_36c;
  int iStack_368;
  undefined4 auStack_340 [5];
  undefined4 uStack_32c;
  int iStack_328;
  undefined4 auStack_300 [5];
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 auStack_2c0 [5];
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined4 auStack_280 [5];
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 auStack_240 [5];
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 auStack_200 [5];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 auStack_1c0 [5];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 auStack_180 [5];
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 auStack_140 [5];
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 auStack_c0 [5];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  cVar1 = GameState_Get_354_7050();
  if (cVar1 != '\x03') {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') {
        return;
      }
      iVar2 = *(int *)(param_1 + 0xa0);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_40,(long)*(int *)(param_1 + 0x354));
      uStack_2c = 0;
      iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
      if (iVar2 < 0) {
        UiText_DrawRivalInfo(auStack_40,7,-iVar2);
        iVar2 = *(int *)(param_1 + 0x318);
      }
      else {
        UiText_DrawRivalInfo(auStack_40,6,iVar2);
        iVar2 = *(int *)(param_1 + 0x318);
      }
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x150);
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_c0,(long)*(int *)(param_1 + 0x364));
        uStack_ac = 0;
        iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
        if (iVar2 < 0) {
          UiText_DrawRivalInfo(auStack_c0,7,-iVar2);
          return;
        }
        UiText_DrawRivalInfo(auStack_c0,6,iVar2);
        return;
      }
      if ((long)*(int *)(param_1 + 0x364) == -1) {
        return;
      }
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x364));
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_80,0xc);
      return;
    }
    if (((*(int *)(param_1 + 0xcc) == 0) && (*(int *)(param_1 + 0xd0) == 0)) &&
       (*(int *)(param_1 + 0xd4) == 0)) {
      if ((long)*(int *)(param_1 + 0x354) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_100,(long)*(int *)(param_1 + 0x354));
        uStack_ec = 0;
        iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
        UiText_DrawById(auStack_100,0xb);
        iVar2 = *(int *)(param_1 + 0x318);
        goto LAB_002be668;
      }
    }
    else if ((long)*(int *)(param_1 + 0x354) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_140,(long)*(int *)(param_1 + 0x354));
      uStack_12c = 0;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      UiText_DrawRivalInfo
                (auStack_140,2,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),
                 *(undefined4 *)(param_1 + 0xd4));
    }
    iVar2 = *(int *)(param_1 + 0x318);
LAB_002be668:
    if (iVar2 != 0) {
      if ((long)*(int *)(param_1 + 0x364) == -1) {
        return;
      }
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_180,(long)*(int *)(param_1 + 0x364));
      uStack_16c = 0;
      iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_180,0xc);
      return;
    }
    if ((long)*(int *)(param_1 + 0x364) == -1) {
      return;
    }
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_1c0,(long)*(int *)(param_1 + 0x364));
    uStack_1ac = 0;
    iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
    UiText_DrawRivalInfo
              (auStack_1c0,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
               *(undefined4 *)(param_1 + 0x1ec));
    return;
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_200,(long)*(int *)(param_1 + 0x354));
  uStack_1ec = 0;
  iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
  if (iVar2 < 0) {
    UiText_DrawRivalInfo(auStack_200,7,-iVar2);
    iVar2 = *(int *)(param_1 + 0x318);
  }
  else {
    UiText_DrawRivalInfo(auStack_200,6,iVar2);
    iVar2 = *(int *)(param_1 + 0x318);
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x150);
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_280,(long)*(int *)(param_1 + 0x364));
    uStack_26c = 0;
    iStack_268 = (int)((float)iStack_268 * *(float *)(param_1 + 0x94));
    if (iVar2 < 0) {
      UiText_DrawRivalInfo(auStack_280,7,-iVar2);
      goto LAB_002be7b8;
    }
    UiText_DrawRivalInfo(auStack_280,6,iVar2);
    iVar2 = *(int *)(param_1 + 0xcc);
  }
  else {
    if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_240,(long)*(int *)(param_1 + 0x364));
      uStack_22c = 0;
      iStack_228 = (int)((float)iStack_228 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_240,0xc);
    }
LAB_002be7b8:
    iVar2 = *(int *)(param_1 + 0xcc);
  }
  if (((iVar2 == 0) && (*(int *)(param_1 + 0xd0) == 0)) && (*(int *)(param_1 + 0xd4) == 0)) {
    if ((long)*(int *)(param_1 + 0x374) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_2c0,(long)*(int *)(param_1 + 0x374));
      uStack_2ac = 0;
      iStack_2a8 = (int)((float)iStack_2a8 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_2c0,0xb);
      iVar2 = *(int *)(param_1 + 0x318);
      goto LAB_002be884;
    }
  }
  else if ((long)*(int *)(param_1 + 0x374) != -1) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_300,(long)*(int *)(param_1 + 0x374));
    uStack_2ec = 0;
    iStack_2e8 = (int)((float)iStack_2e8 * *(float *)(param_1 + 0x94));
    UiText_DrawRivalInfo
              (auStack_300,2,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),
               *(undefined4 *)(param_1 + 0xd4));
  }
  iVar2 = *(int *)(param_1 + 0x318);
LAB_002be884:
  if (iVar2 == 0) {
    if ((long)*(int *)(param_1 + 900) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_380,(long)*(int *)(param_1 + 900));
      uStack_36c = 0;
      iStack_368 = (int)((float)iStack_368 * *(float *)(param_1 + 0x94));
      UiText_DrawRivalInfo
                (auStack_380,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                 *(undefined4 *)(param_1 + 0x1ec));
    }
  }
  else if ((long)*(int *)(param_1 + 900) != -1) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_340,(long)*(int *)(param_1 + 900));
    uStack_32c = 0;
    iStack_328 = (int)((float)iStack_328 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_340,0xc);
  }
  return;
}

// 0x002bea60  size 0x930
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Result_Draw_TestCourse_ea60(int param_1)

{
  UiLayout *pUVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 auStack_500 [5];
  undefined4 uStack_4ec;
  int iStack_4e8;
  undefined4 auStack_4c0 [5];
  undefined4 uStack_4ac;
  int iStack_4a8;
  undefined4 auStack_480 [5];
  undefined4 uStack_46c;
  int iStack_468;
  undefined4 auStack_440 [5];
  undefined4 uStack_42c;
  int iStack_428;
  undefined4 auStack_400 [5];
  undefined4 uStack_3ec;
  int iStack_3e8;
  undefined4 auStack_3c0 [5];
  undefined4 uStack_3ac;
  int iStack_3a8;
  undefined4 auStack_380 [5];
  undefined4 uStack_36c;
  int iStack_368;
  undefined4 auStack_340 [5];
  undefined4 uStack_32c;
  int iStack_328;
  undefined4 auStack_300 [5];
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 auStack_2c0 [5];
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined4 auStack_280 [5];
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 auStack_240 [5];
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 auStack_200 [5];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 auStack_1c0 [5];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 auStack_180 [5];
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 auStack_140 [5];
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 auStack_c0 [5];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  pUVar1 = *(UiLayout **)(param_1 + 4);
  bVar2 = GameState_Get_354_7050();
  if (7 < bVar2) {
    return;
  }
                    /* WARNING: Switch is manually overridden */
  switch(bVar2) {
  default:
    iVar6 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar6 = 7;
    }
    UiElem_SetPropInt(pUVar1,0x1e,0x16,iVar6);
    if (*(int *)(param_1 + 0x318) == 0) {
      if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_c0,(long)*(int *)(param_1 + 0x364));
        uStack_ac = 0;
        iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_c0,2,*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                   *(undefined4 *)(param_1 + 0x1e0));
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x364));
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_80,0xc);
    }
    break;
  case 1:
    iVar6 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar6 = 7;
    }
    UiElem_SetPropInt(pUVar1,0x24,0x16,iVar6);
    iVar6 = *(int *)(param_1 + 0x330);
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_100,(long)*(int *)(param_1 + 0x354));
    uStack_ec = 0;
    iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
    if (iVar6 < 0) {
      UiText_DrawRivalInfo(auStack_100,7,-iVar6);
      iVar6 = *(int *)(param_1 + 0x318);
    }
    else {
      UiText_DrawRivalInfo(auStack_100,6,iVar6);
      iVar6 = *(int *)(param_1 + 0x318);
    }
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x150);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_180,(long)*(int *)(param_1 + 0x364));
      uStack_16c = 0;
      iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
      if (iVar6 < 0) {
        UiText_DrawRivalInfo(auStack_180,7,-iVar6);
      }
      else {
        UiText_DrawRivalInfo(auStack_180,6,iVar6);
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_140,(long)*(int *)(param_1 + 0x364));
      uStack_12c = 0;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_140,0xc);
    }
    break;
  case 2:
    iVar6 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar6 = 7;
    }
    UiElem_SetPropInt(pUVar1,0x24,0x16,iVar6);
    if ((long)*(int *)(param_1 + 0x354) == -1) {
      iVar6 = *(int *)(param_1 + 0x318);
    }
    else {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_1c0,(long)*(int *)(param_1 + 0x354));
      uStack_1ac = 0;
      iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
      UiText_DrawRivalInfo
                (auStack_1c0,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                 *(undefined4 *)(param_1 + 0x33c));
      iVar6 = *(int *)(param_1 + 0x318);
    }
    if (iVar6 == 0) {
      if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_240,(long)*(int *)(param_1 + 0x364));
        uStack_22c = 0;
        iStack_228 = (int)((float)iStack_228 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_240,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                   *(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_200,(long)*(int *)(param_1 + 0x364));
      uStack_1ec = 0;
      iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_200,0xc);
    }
    break;
  case 3:
    iVar6 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar6 = 7;
    }
    UiElem_SetPropInt(pUVar1,0x25,0x16,iVar6);
    iVar6 = *(int *)(param_1 + 0x330);
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_340,(long)*(int *)(param_1 + 0x354));
    uStack_32c = 0;
    iStack_328 = (int)((float)iStack_328 * *(float *)(param_1 + 0x94));
    if (iVar6 < 0) {
      UiText_DrawRivalInfo(auStack_340,7,-iVar6);
      iVar6 = *(int *)(param_1 + 0x318);
    }
    else {
      UiText_DrawRivalInfo(auStack_340,6,iVar6);
      iVar6 = *(int *)(param_1 + 0x318);
    }
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x150);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_3c0,(long)*(int *)(param_1 + 0x364));
      uStack_3ac = 0;
      iStack_3a8 = (int)((float)iStack_3a8 * *(float *)(param_1 + 0x94));
      if (iVar6 < 0) {
        UiText_DrawRivalInfo(auStack_3c0,7,-iVar6);
        goto LAB_002beeec;
      }
      UiText_DrawRivalInfo(auStack_3c0,6,iVar6);
      iVar6 = *(int *)(param_1 + 0x374);
    }
    else {
      if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_380,(long)*(int *)(param_1 + 0x364));
        uStack_36c = 0;
        iStack_368 = (int)((float)iStack_368 * *(float *)(param_1 + 0x94));
        UiText_DrawById(auStack_380,0xc);
      }
LAB_002beeec:
      iVar6 = *(int *)(param_1 + 0x374);
    }
    if ((long)iVar6 == -1) {
      iVar6 = *(int *)(param_1 + 0x318);
    }
    else {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_400,(long)iVar6);
      uStack_3ec = 0;
      iStack_3e8 = (int)((float)iStack_3e8 * *(float *)(param_1 + 0x94));
      UiText_DrawRivalInfo
                (auStack_400,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                 *(undefined4 *)(param_1 + 0x33c));
      iVar6 = *(int *)(param_1 + 0x318);
    }
    if (iVar6 == 0) {
      if ((long)*(int *)(param_1 + 900) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_480,(long)*(int *)(param_1 + 900));
        uStack_46c = 0;
        iStack_468 = (int)((float)iStack_468 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_480,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                   *(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if ((long)*(int *)(param_1 + 900) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_440,(long)*(int *)(param_1 + 900));
      uStack_42c = 0;
      iStack_428 = (int)((float)iStack_428 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_440,0xc);
    }
    break;
  case 6:
    iVar6 = 10;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar6 = 7;
    }
    UiElem_SetPropInt(pUVar1,0x24,0x16,iVar6);
    if ((long)*(int *)(param_1 + 0x354) == -1) {
      iVar6 = *(int *)(param_1 + 0x318);
    }
    else {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_280,(long)*(int *)(param_1 + 0x354));
      uStack_26c = 0;
      iStack_268 = (int)((float)iStack_268 * *(float *)(param_1 + 0x94));
      UiText_DrawRivalInfo
                (auStack_280,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                 *(undefined4 *)(param_1 + 0x33c));
      iVar6 = *(int *)(param_1 + 0x318);
    }
    if (iVar6 == 0) {
      if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_300,(long)*(int *)(param_1 + 0x364));
        uStack_2ec = 0;
        iStack_2e8 = (int)((float)iStack_2e8 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_300,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                   *(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_2c0,(long)*(int *)(param_1 + 0x364));
      uStack_2ac = 0;
      iStack_2a8 = (int)((float)iStack_2a8 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_2c0,0xc);
    }
    break;
  case 7:
    iVar6 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar6 = 7;
    }
    UiElem_SetPropInt(pUVar1,0x28,0x16,iVar6);
    pUVar1 = *(UiLayout **)(param_1 + 4);
    RaceProg_GetArray_34(0);
    uVar5 = 0;
    do {
      UiElem_GetRect(pUVar1,auStack_40,(long)(int)(*(int *)(param_1 + 0x39c) + uVar5));
      uStack_2c = 4;
      iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
      if (*(int *)(_g_RaceHud + 0x298) == 0) {
        uVar4 = 8 - uVar5;
      }
      else {
        uVar4 = uVar5;
      }
      iVar6 = param_1 + uVar4 * 4;
      if (*(int *)(iVar6 + 0x17c) == 0) {
        return;
      }
      UiText_DrawRivalInfo(auStack_40,1,0,uVar5 + 1);
      iVar3 = *(int *)(iVar6 + 0x17c);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_4c0,
                     (long)(int)(*(int *)(param_1 + 0x3a4) + uVar5));
      uStack_4ac = 0;
      iStack_4a8 = (int)((float)iStack_4a8 * *(float *)(param_1 + 0x94));
      if (iVar3 < 0) {
        UiText_DrawRivalInfo(auStack_4c0,7,-iVar3);
        iVar3 = *(int *)(param_1 + 0x3ac);
      }
      else {
        UiText_DrawRivalInfo(auStack_4c0,6,iVar3);
        iVar3 = *(int *)(param_1 + 0x3ac);
      }
      iVar6 = *(int *)(iVar6 + 0x154);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_500,(long)(int)(iVar3 + uVar5));
      uStack_4ec = 0;
      iStack_4e8 = (int)((float)iStack_4e8 * *(float *)(param_1 + 0x94));
      if (iVar6 < 0) {
        UiText_DrawRivalInfo(auStack_500,7,-iVar6);
      }
      else {
        UiText_DrawRivalInfo(auStack_500,6,iVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 9);
  }
  return;
}

// 0x002bf390  size 0x60c
void Result_Draw_TestCourse_f390(int param_1)

{
  UiLayout *pUVar1;
  byte bVar2;
  int iVar3;
  undefined4 auStack_380 [5];
  undefined4 uStack_36c;
  int iStack_368;
  undefined4 auStack_340 [5];
  undefined4 uStack_32c;
  int iStack_328;
  undefined4 auStack_300 [5];
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 auStack_2c0 [5];
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined4 auStack_280 [5];
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 auStack_240 [5];
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 auStack_200 [5];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 auStack_1c0 [5];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 auStack_180 [5];
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 auStack_140 [5];
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 auStack_c0 [5];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  pUVar1 = *(UiLayout **)(param_1 + 4);
  bVar2 = GameState_Get_354_7050();
  if (5 < bVar2) {
    return;
  }
                    /* WARNING: Switch is manually overridden */
  switch(bVar2) {
  case 0:
    iVar3 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar3 = 9;
    }
    UiElem_SetPropInt(pUVar1,0x1e,0x16,iVar3);
    if (*(int *)(param_1 + 0x318) == 0) {
      if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_200,(long)*(int *)(param_1 + 0x364));
        uStack_1ec = 0;
        iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_200,2,*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                   *(undefined4 *)(param_1 + 0x1e0));
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_1c0,(long)*(int *)(param_1 + 0x364));
      uStack_1ac = 0;
      iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_1c0,0xc);
    }
    break;
  case 1:
    iVar3 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar3 = 9;
    }
    UiElem_SetPropInt(pUVar1,0x24,0x16,iVar3);
    iVar3 = *(int *)(param_1 + 0x330);
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_40,(long)*(int *)(param_1 + 0x354));
    uStack_2c = 0;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    if (iVar3 < 0) {
      UiText_DrawRivalInfo(auStack_40,7,-iVar3);
      iVar3 = *(int *)(param_1 + 0x318);
    }
    else {
      UiText_DrawRivalInfo(auStack_40,6,iVar3);
      iVar3 = *(int *)(param_1 + 0x318);
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x150);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_c0,(long)*(int *)(param_1 + 0x364));
      uStack_ac = 0;
      iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
      if (iVar3 < 0) {
        UiText_DrawRivalInfo(auStack_c0,7,-iVar3);
      }
      else {
        UiText_DrawRivalInfo(auStack_c0,6,iVar3);
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x364));
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_80,0xc);
    }
    break;
  case 2:
    iVar3 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar3 = 9;
    }
    UiElem_SetPropInt(pUVar1,0x24,0x16,iVar3);
    if ((long)*(int *)(param_1 + 0x354) == -1) {
      iVar3 = *(int *)(param_1 + 0x318);
    }
    else {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_100,(long)*(int *)(param_1 + 0x354));
      uStack_ec = 0;
      iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
      UiText_DrawRivalInfo
                (auStack_100,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                 *(undefined4 *)(param_1 + 0x33c));
      iVar3 = *(int *)(param_1 + 0x318);
    }
    if (iVar3 == 0) {
      if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_180,(long)*(int *)(param_1 + 0x364));
        uStack_16c = 0;
        iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_180,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                   *(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_140,(long)*(int *)(param_1 + 0x364));
      uStack_12c = 0;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_140,0xc);
    }
    break;
  case 3:
    iVar3 = 8;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar3 = 9;
    }
    UiElem_SetPropInt(pUVar1,0x25,0x16,iVar3);
    iVar3 = *(int *)(param_1 + 0x330);
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_240,(long)*(int *)(param_1 + 0x354));
    uStack_22c = 0;
    iStack_228 = (int)((float)iStack_228 * *(float *)(param_1 + 0x94));
    if (iVar3 < 0) {
      UiText_DrawRivalInfo(auStack_240,7,-iVar3);
      iVar3 = *(int *)(param_1 + 0x318);
    }
    else {
      UiText_DrawRivalInfo(auStack_240,6,iVar3);
      iVar3 = *(int *)(param_1 + 0x318);
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x150);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_2c0,(long)*(int *)(param_1 + 0x364));
      uStack_2ac = 0;
      iStack_2a8 = (int)((float)iStack_2a8 * *(float *)(param_1 + 0x94));
      if (iVar3 < 0) {
        UiText_DrawRivalInfo(auStack_2c0,7,-iVar3);
        goto LAB_002bf718;
      }
      UiText_DrawRivalInfo(auStack_2c0,6,iVar3);
      iVar3 = *(int *)(param_1 + 0x374);
    }
    else {
      if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_280,(long)*(int *)(param_1 + 0x364));
        uStack_26c = 0;
        iStack_268 = (int)((float)iStack_268 * *(float *)(param_1 + 0x94));
        UiText_DrawById(auStack_280,0xc);
      }
LAB_002bf718:
      iVar3 = *(int *)(param_1 + 0x374);
    }
    if ((long)iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x318);
    }
    else {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_300,(long)iVar3);
      uStack_2ec = 0;
      iStack_2e8 = (int)((float)iStack_2e8 * *(float *)(param_1 + 0x94));
      UiText_DrawRivalInfo
                (auStack_300,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                 *(undefined4 *)(param_1 + 0x33c));
      iVar3 = *(int *)(param_1 + 0x318);
    }
    if (iVar3 == 0) {
      if ((long)*(int *)(param_1 + 900) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_380,(long)*(int *)(param_1 + 900));
        uStack_36c = 0;
        iStack_368 = (int)((float)iStack_368 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_380,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                   *(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if ((long)*(int *)(param_1 + 900) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_340,(long)*(int *)(param_1 + 900));
      uStack_32c = 0;
      iStack_328 = (int)((float)iStack_328 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_340,0xc);
    }
  }
  return;
}

// 0x002bf9a0  size 0x314
void Result_Draw_TestCourse_f9a0(int param_1)

{
  UiLayout *pUVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  int unaff_s0_lo;
  undefined4 auStack_180 [5];
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 auStack_140 [5];
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 auStack_c0 [5];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  pUVar1 = *(UiLayout **)(param_1 + 4);
  uVar3 = Password_GetModeCode();
  if (uVar3 < 7) {
                    /* WARNING: Switch is manually overridden */
    switch((int)uVar3) {
    case 0:
      unaff_s0_lo = 7;
      break;
    case 1:
      unaff_s0_lo = 8;
      break;
    case 2:
      unaff_s0_lo = 0xb;
      break;
    case 3:
      unaff_s0_lo = 10;
      break;
    case 4:
      unaff_s0_lo = 9;
      break;
    case 5:
      unaff_s0_lo = 0xd;
      break;
    case 6:
      unaff_s0_lo = 0xe;
    }
  }
  UiElem_SetPropInt(pUVar1,0x25,0x16,unaff_s0_lo);
  cVar2 = GameState_Get_354_7050();
  if (cVar2 == '\x02') {
    if ((long)*(int *)(param_1 + 0x354) == -1) {
      iVar4 = *(int *)(param_1 + 0x318);
    }
    else {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_100,(long)*(int *)(param_1 + 0x354));
      uStack_ec = 0;
      iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
      UiText_DrawRivalInfo
                (auStack_100,2,*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                 *(undefined4 *)(param_1 + 0x33c));
      iVar4 = *(int *)(param_1 + 0x318);
    }
    if (iVar4 == 0) {
      if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_180,(long)*(int *)(param_1 + 0x364));
        uStack_16c = 0;
        iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
        UiText_DrawRivalInfo
                  (auStack_180,2,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),
                   *(undefined4 *)(param_1 + 0x1ec));
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_140,(long)*(int *)(param_1 + 0x364));
      uStack_12c = 0;
      iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_140,0xc);
    }
  }
  else if (cVar2 == '\x01') {
    iVar4 = *(int *)(param_1 + 0x330);
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_40,(long)*(int *)(param_1 + 0x354));
    uStack_2c = 0;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    if (iVar4 < 0) {
      UiText_DrawRivalInfo(auStack_40,7,-iVar4);
      iVar4 = *(int *)(param_1 + 0x318);
    }
    else {
      UiText_DrawRivalInfo(auStack_40,6,iVar4);
      iVar4 = *(int *)(param_1 + 0x318);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x150);
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_c0,(long)*(int *)(param_1 + 0x364));
      uStack_ac = 0;
      iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
      if (iVar4 < 0) {
        UiText_DrawRivalInfo(auStack_c0,7,-iVar4);
      }
      else {
        UiText_DrawRivalInfo(auStack_c0,6,iVar4);
      }
    }
    else if ((long)*(int *)(param_1 + 0x364) != -1) {
      UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x364));
      uStack_6c = 0;
      iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
      UiText_DrawById(auStack_80,0xc);
    }
  }
  return;
}

// 0x002bfcc0  size 0x1d4
void Result_Draw_TestCourse_fcc0(int param_1)

{
  int iVar1;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  if ((byte)(&DAT_0032f535)[(uint)g_RaceHudShared1 * 6] < 7) {
                    /* WARNING: Switch is manually overridden */
    switch((&DAT_0032f535)[(uint)g_RaceHudShared1 * 6]) {
    case 0:
      Result_Draw_TestCourse_f9a0();
      break;
    case 1:
      Result_Draw_TestCourse_f390();
      break;
    case 2:
      Result_Draw_TestCourse_ea60();
      break;
    case 3:
      Result_Draw_TestCourse_e4b0();
      break;
    case 4:
      iVar1 = 8;
      if (*(int *)(param_1 + 0x328) == 0) {
        iVar1 = 9;
      }
      UiElem_SetPropInt(*(UiLayout **)(param_1 + 4),0x1e,0x16,iVar1);
      if (*(int *)(param_1 + 0x318) == 0) {
        if ((long)*(int *)(param_1 + 0x364) != -1) {
          UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x364));
          uStack_6c = 0;
          iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
          UiText_DrawRivalInfo
                    (auStack_80,2,*(undefined4 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc),
                     *(undefined4 *)(param_1 + 0x1e0));
        }
      }
      else if ((long)*(int *)(param_1 + 0x364) != -1) {
        UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_40,(long)*(int *)(param_1 + 0x364));
        uStack_2c = 0;
        iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
        UiText_DrawById(auStack_40,0xc);
      }
      break;
    case 5:
      Result_Draw_TestCourse();
      break;
    case 6:
      if (*(int *)(param_1 + 0x32c) == 0) {
        iVar1 = 7;
        if (*(int *)(param_1 + 0x328) == 0) {
          iVar1 = 8;
        }
        UiElem_SetPropInt(*(UiLayout **)(param_1 + 4),0x19,0x16,iVar1);
      }
      else {
        UiElem_SetPropInt(*(UiLayout **)(param_1 + 4),0x19,0x16,9);
      }
    }
  }
  return;
}

// 0x002bfea0  size 0x2b8
void Result_DrawRankingTable(int param_1)

{
  int iVar1;
  undefined4 auStack_200 [5];
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 auStack_1c0 [5];
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 auStack_180 [5];
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 auStack_140 [5];
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 auStack_100 [5];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 auStack_c0 [5];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 auStack_40 [5];
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = *(int *)(param_1 + 0x350);
  if (((long)*(int *)(param_1 + 0x34c) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_40,(long)*(int *)(param_1 + 0x34c));
    uStack_2c = 4;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_40,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x358);
  if (((long)*(int *)(param_1 + 0x354) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_80,(long)*(int *)(param_1 + 0x354));
    uStack_6c = 0;
    iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_80,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x360);
  if (((long)*(int *)(param_1 + 0x35c) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_c0,(long)*(int *)(param_1 + 0x35c));
    uStack_ac = 4;
    iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_c0,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x368);
  if (((long)*(int *)(param_1 + 0x364) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_100,(long)*(int *)(param_1 + 0x364));
    uStack_ec = 0;
    iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_100,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x370);
  if (((long)*(int *)(param_1 + 0x36c) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_140,(long)*(int *)(param_1 + 0x36c));
    uStack_12c = 4;
    iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_140,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x378);
  if (((long)*(int *)(param_1 + 0x374) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_180,(long)*(int *)(param_1 + 0x374));
    uStack_16c = 0;
    iStack_168 = (int)((float)iStack_168 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_180,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x380);
  if (((long)*(int *)(param_1 + 0x37c) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_1c0,(long)*(int *)(param_1 + 0x37c));
    uStack_1ac = 4;
    iStack_1a8 = (int)((float)iStack_1a8 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_1c0,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x388);
  if (((long)*(int *)(param_1 + 900) != -1) && (iVar1 != -1)) {
    UiElem_GetRect(*(UiLayout **)(param_1 + 4),auStack_200,(long)*(int *)(param_1 + 900));
    uStack_1ec = 0;
    iStack_1e8 = (int)((float)iStack_1e8 * *(float *)(param_1 + 0x94));
    UiText_DrawById(auStack_200,iVar1);
  }
  return;
}

