// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00154000 - 0x00158000
#include "ghidra_types.h"

// 0x00154260  size 0x88
undefined4 Snd_StreamIsReady(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  DisableIntc(1);
  cVar1 = (&s_Snd_LoadSystemBanks_1)[param_1 * 0x28];
  if (cVar1 == '\b') {
    (&s_Snd_LoadSystemBanks_1)[param_1 * 0x28] = '\0';
    uVar2 = 1;
  }
  else if (cVar1 == '\t') {
    *(undefined4 *)(&s_Snd_LoadSystemBanks_3 + param_1 * 0x28) = 0;
    uVar2 = 1;
  }
  EnableIntc(1);
  return uVar2;
}

// 0x00154300  size 0xbc
undefined4 Snd_StreamSetState(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  param_1 = param_1 * 0x28;
  pcVar2 = &s_Snd_LoadSystemBanks_1 + param_1;
  uVar1 = 0;
  DisableIntc(1);
  if (*pcVar2 == '\0') {
    *(int *)(param_1 + 0x42dab0) = param_2;
    *pcVar2 = '\x02';
    uVar1 = 1;
    *(undefined4 *)(&s_Snd_LoadSystemBanks_3 + param_1) = 1;
  }
  else if (param_2 == *(int *)(param_1 + 0x42dab0)) {
    uVar1 = 1;
    *(undefined4 *)(&s_Snd_LoadSystemBanks_3 + param_1) = 1;
  }
  else if (*pcVar2 == '\b') {
    *(int *)(param_1 + 0x42dab0) = param_2;
    *pcVar2 = '\x02';
    uVar1 = 1;
    *(undefined4 *)(&s_Snd_LoadSystemBanks_3 + param_1) = 1;
  }
  EnableIntc(1);
  return uVar1;
}

// 0x001543c0  size 0x50
/* 7 callers */

undefined1 Snd_StreamGetState(int param_1)

{
  undefined1 uVar1;
  
  DisableIntc(1);
  uVar1 = (&s_Snd_LoadSystemBanks_1)[param_1 * 0x28];
  EnableIntc(1);
  return uVar1;
}

// 0x00154410  size 0x10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Snd_GetBankCount(void)

{
  return *(undefined4 *)(_s_SndVar27 + 8);
}

// 0x00154420  size 0x338
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_LoadSystemBanks(void)

{
  undefined4 *puVar1;
  ArcToc *pAVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined4 auStack_8 [2];
  
  puVar3 = (undefined4 *)0x8;
  puVar8 = auStack_8;
  puVar1 = puVar8;
  while (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + -1);
    puVar1 = puVar3;
  }
  IopStrm_Init(2,_s_SndVar2 + -1,0x99901,_s_SndVar3 + -1,_s_SndVar1);
  uVar11 = 0;
  puVar10 = &s_SndVar1;
  iVar9 = 0;
  iVar13 = 0;
  do {
    pAVar2 = g_ArcToc;
    *(undefined4 *)(puVar10 + 0x260) = 0x2000;
    *(undefined4 *)(puVar10 + 0x264) = 0x10;
    uVar12 = pAVar2->entries[0x1fd0].unpackedSize;
    if (uVar12 == 0) {
      uVar12 = pAVar2->entries[0x1fd0].storedSize;
    }
    *(uint *)(puVar10 + 0x268) = iVar9 + _g_Snd + 0x140 + (uVar12 + 0x7ff & 0xfffff800);
    *(undefined4 *)(puVar10 + 0x26c) = 0x20;
    *(int *)(puVar10 + 0x270) = _s_SndVar4 + iVar13;
    *(undefined4 *)(puVar10 + 0x274) = 4;
    if (uVar11 == 0) {
      uVar12 = g_ArcToc->entries[0x1ca5].unpackedSize;
      if (uVar12 == 0) {
        uVar12 = g_ArcToc->entries[0x1ca5].storedSize;
      }
      iVar4 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
      iVar5 = Arc_GetFileSize(0x1c60,0x1c62,1);
      iVar6 = Arc_GetFileSize(0x1c68,0x1c85,1);
      iVar7 = Arc_GetFileSize(0x1c86,0x1ca3,1);
      iVar7 = iVar7 + iVar6 + iVar5 + uVar12 + 0x5010 + iVar4;
    }
    else {
      uVar12 = g_ArcToc->entries[0x1ca5].unpackedSize;
      if (uVar12 == 0) {
        uVar12 = g_ArcToc->entries[0x1ca5].storedSize;
      }
      iVar4 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
      iVar5 = Arc_GetFileSize(0x1c60,0x1c62,1);
      iVar6 = Arc_GetFileSize(0x1c68,0x1c85,1);
      iVar7 = Arc_GetFileSize(0x1c86,0x1ca3,1);
      iVar7 = iVar7 + iVar6 + iVar5 + uVar12 + 0x9010 + iVar4;
    }
    *(int *)(puVar10 + 0x278) = iVar7;
    uVar11 = uVar11 + 1;
    iVar13 = iVar13 + 0x8000;
    puVar10 = puVar10 + 0x1c;
    iVar9 = iVar9 + 0x40000;
  } while (uVar11 < 2);
  uVar11 = 0;
  puVar10 = &s_SndVar1;
  puVar8 = auStack_8;
  do {
    uStack_30 = *(undefined4 *)(puVar10 + 0x260);
    uStack_2c = *(undefined4 *)(puVar10 + 0x268);
    pcStack_18 = Snd_StreamFill;
    uStack_28 = *(undefined4 *)(puVar10 + 0x26c);
    uStack_24 = *(undefined4 *)(puVar10 + 0x270);
    uStack_20 = *(undefined4 *)(puVar10 + 0x274);
    uStack_1c = *(undefined4 *)(puVar10 + 0x278);
    IopStrm_PlayEx(uVar11,&uStack_30);
    uVar11 = uVar11 + 1;
    *puVar8 = 3;
    puVar10 = puVar10 + 0x1c;
    puVar8 = puVar8 + 1;
  } while (uVar11 < 2);
  IopSe_Command(0x203,auStack_8[0],auStack_8[1]);
  _s_Snd_LoadSystemBanks_2 = 0;
  _s_Snd_LoadSystemBanks_5 = 1;
  s_Snd_LoadSystemBanks_1 = 0;
  _s_Snd_LoadSystemBanks_3 = 0;
  s_Snd_LoadSystemBanks_4 = 0;
  _s_Snd_LoadSystemBanks_6 = 0;
  return;
}

// 0x00154760  size 0x108
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_StopAllVoices(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = 0;
  do {
    if (_s_SndCmdCount < 0x30) {
      iVar2 = _s_SndCmdCount * 0x14;
      _s_SndCmdCount = _s_SndCmdCount + 1;
      *(undefined4 *)(iVar2 + 0x42db00) = 0x10d;
      *(uint *)(iVar2 + 0x42db04) = uVar1 | 0xb80;
      *(undefined4 *)(iVar2 + 0x42db08) = param_1;
      *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
      *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
    }
    if (_s_SndCmdCount < 0x30) {
      iVar2 = _s_SndCmdCount * 0x14;
      _s_SndCmdCount = _s_SndCmdCount + 1;
      *(undefined4 *)(iVar2 + 0x42db00) = 0x10d;
      *(uint *)(iVar2 + 0x42db04) = uVar1 | 0xc80;
      *(undefined4 *)(iVar2 + 0x42db08) = param_1;
      *(undefined4 *)(iVar2 + 0x42db0c) = uStack_34;
      *(undefined4 *)(iVar2 + 0x42db10) = uStack_30;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}

// 0x00154870  size 0x80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 9 callers; queue max 0x30 */

bool Snd_QueueCmd1(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x212;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = uStack_18;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x001548f0  size 0x84
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd2(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x211;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154980  size 0x84
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd2b(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x210;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154a10  size 0x88
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd3(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x20f;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154aa0  size 0x80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd1b(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x20c;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = uStack_18;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154b20  size 0x80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd1c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x20b;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = uStack_18;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154ba0  size 0x84
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd2c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x20a;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154c30  size 0x88
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd3b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x209;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154cc0  size 0x88
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x208;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154d50  size 0x84
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_QueueCmd2d(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = _s_SndCmdCount < 0x30;
  if (bVar1) {
    iVar2 = _s_SndCmdCount * 0x14;
    _s_SndCmdCount = _s_SndCmdCount + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x206;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154df0  size 0xa0
void Snd_BgmDmaCallback(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4
                       )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_4[2];
  DisableIntc(1);
  *(undefined1 *)(param_4 + 1) = 0xf;
  uVar2 = Sif_SendDma(*(int *)(&s_Snd_LoadBanks_10 + iVar1 * 0x2c) + param_4[0xc],param_2,param_3,
                      *param_4);
  param_4[0xf] = uVar2;
  EnableIntc(1);
  return;
}

// 0x00154e90  size 0x144
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_BgmLoadNext(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = _s_SndVar24;
  uVar3 = _s_SndVar23 * _s_SndVar26;
  if (_s_SndVar20 <= (uint)(_s_SndVar23 * _s_SndVar26)) {
    uVar3 = _s_SndVar20;
  }
  DisableIntc(1);
  s_SndVar8 = 1;
  _s_SndVar20 = _s_SndVar20 - uVar3;
  _s_SndVar21 = uVar3;
  EnableIntc();
  if (_s_SndVar12 == 0) {
    if (_s_SndVar17 != 0) {
      iVar4 = _s_SndVar17 + _s_SndVar19;
      iVar2 = _s_SndVar9 * 0x2c;
      DisableIntc(1);
      s_SndVar8 = 0xf;
      _s_SndVar22 = Sif_SendDma(*(int *)(&s_Snd_LoadBanks_10 + iVar2) + _s_SndVar19,iVar4,uVar3,
                                _s_SndVar7);
      EnableIntc(1);
    }
  }
  else {
    Arc_LoadFileEx(_s_SndVar12,uVar1,0x154df0,0x42da30,_s_SndVar19,uVar3);
    if (_s_SndVar7 != 0) {
      File_AbortAll();
    }
  }
  return;
}

// 0x001550a0  size 0x78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_JingleDmaCallback
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = _s_SndVar25;
  DisableIntc(1);
  *(undefined1 *)(param_4 + 1) = 7;
  uVar1 = Sif_SendDma(uVar1,param_2,param_3,*param_4);
  param_4[0xf] = uVar1;
  EnableIntc(1);
  return;
}

// 0x00155120  size 0x11c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_JingleLoadNext(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = _s_SndVar24;
  uVar3 = _s_SndVar23 * _s_SndVar26;
  if (_s_SndVar20 <= (uint)(_s_SndVar23 * _s_SndVar26)) {
    uVar3 = _s_SndVar20;
  }
  DisableIntc(1);
  s_SndVar8 = 1;
  _s_SndVar20 = _s_SndVar20 - uVar3;
  _s_SndVar21 = uVar3;
  EnableIntc();
  uVar2 = _s_SndVar25;
  if (_s_SndVar11 == 0) {
    if (_s_SndVar15 != 0) {
      iVar4 = _s_SndVar15 + _s_SndVar19;
      DisableIntc(1);
      s_SndVar8 = 7;
      _s_SndVar22 = Sif_SendDma(uVar2,iVar4,uVar3,_s_SndVar7);
      EnableIntc(1);
    }
  }
  else {
    Arc_LoadFileEx(_s_SndVar11,uVar1,0x1550a0,0x42da30,_s_SndVar19,uVar3);
    if (_s_SndVar7 != 0) {
      File_AbortAll();
    }
  }
  return;
}

// 0x00155240  size 0xa0
void Snd_VoiceDmaCallback
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_4[2];
  DisableIntc(1);
  *(undefined1 *)(param_4 + 1) = 4;
  uVar2 = Sif_SendDma(*(int *)(&s_Snd_LoadBanks_9 + iVar1 * 0x2c) + param_4[0xc],param_2,param_3,
                      *param_4);
  param_4[0xf] = uVar2;
  EnableIntc(1);
  return;
}

// 0x001552e0  size 0x144
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_VoiceLoadNext(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = _s_SndVar24;
  uVar3 = _s_SndVar23 * _s_SndVar26;
  if (_s_SndVar20 <= (uint)(_s_SndVar23 * _s_SndVar26)) {
    uVar3 = _s_SndVar20;
  }
  DisableIntc(1);
  s_SndVar8 = 1;
  _s_SndVar20 = _s_SndVar20 - uVar3;
  _s_SndVar21 = uVar3;
  EnableIntc();
  if (_s_SndVar10 == 0) {
    if (_s_SndVar13 != 0) {
      iVar4 = _s_SndVar13 + _s_SndVar19;
      iVar2 = _s_SndVar9 * 0x2c;
      DisableIntc(1);
      s_SndVar8 = 4;
      _s_SndVar22 = Sif_SendDma(*(int *)(&s_Snd_LoadBanks_9 + iVar2) + _s_SndVar19,iVar4,uVar3,
                                _s_SndVar7);
      EnableIntc(1);
    }
  }
  else {
    Arc_LoadFileEx(_s_SndVar10,uVar1,0x155240,0x42da30,_s_SndVar19,uVar3);
    if (_s_SndVar7 != 0) {
      File_AbortAll();
    }
  }
  return;
}

// 0x00155430  size 0x5a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_ProcessQueue(void)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = Rpc_GetPendingCount(0x42d824);
  uVar1 = _s_SndVar25;
  if ((lVar2 != 0) && (s_SndVar8 < 0x11)) {
                    /* WARNING: Switch is manually overridden */
    switch(s_SndVar8) {
    case 2:
      DisableIntc(1);
      if (_s_SndVar10 == 0) {
        if (_s_SndVar13 == 0) {
          s_SndVar8 = 5;
        }
        else {
          s_SndVar8 = 3;
          _s_SndVar20 = _s_SndVar14;
        }
      }
      else {
        _s_SndVar20 = g_ArcToc->entries[_s_SndVar10].unpackedSize;
        if (_s_SndVar20 == 0) {
          _s_SndVar20 = g_ArcToc->entries[_s_SndVar10].storedSize;
        }
        s_SndVar8 = 3;
      }
      _s_SndVar19 = 0;
      _s_SndVar21 = 0;
      EnableIntc(1);
      break;
    case 3:
      Snd_VoiceLoadNext();
      break;
    case 4:
      DisableIntc(1);
      lVar2 = Sif_WaitDma(_s_SndVar22,_s_SndVar7);
      if (lVar2 < 0) {
        if (_s_SndVar20 == 0) {
          s_SndVar8 = 5;
        }
        else {
          s_SndVar8 = 3;
          _s_SndVar19 = _s_SndVar19 + _s_SndVar21;
        }
      }
      EnableIntc(1);
      break;
    case 5:
      DisableIntc(1);
      if (_s_SndVar11 == 0) {
        if (_s_SndVar15 == 0) {
          s_SndVar8 = 0xd;
        }
        else {
          s_SndVar8 = 6;
          _s_SndVar20 = _s_SndVar16;
        }
      }
      else {
        _s_SndVar20 = g_ArcToc->entries[_s_SndVar11].unpackedSize;
        if (_s_SndVar20 == 0) {
          _s_SndVar20 = g_ArcToc->entries[_s_SndVar11].storedSize;
        }
        s_SndVar8 = 6;
      }
      _s_SndVar19 = 0;
      _s_SndVar21 = 0;
      EnableIntc(1);
      break;
    case 6:
      Snd_JingleLoadNext();
      break;
    case 7:
      DisableIntc(1);
      lVar2 = Sif_WaitDma(_s_SndVar22,_s_SndVar7);
      if (lVar2 < 0) {
        s_SndVar8 = 8;
      }
      EnableIntc(1);
      break;
    case 8:
      DisableIntc(1);
      _s_SndVar5 = &LAB_00155090;
      s_SndVar8 = 1;
      _s_SndVar6 = &s_SndVar7;
      IopStrm_Command(0x302,0);
      EnableIntc(1);
      break;
    case 9:
      iVar3 = _s_SndVar9 * 0x2c;
      DisableIntc(1);
      _s_SndVar6 = &s_SndVar7;
      _s_SndVar5 = &LAB_00155080;
      s_SndVar8 = 1;
      IopSnd_Command(0x103,1,0,uVar1,*(int *)(&s_Snd_LoadBanks_11 + iVar3) + _s_SndVar19,_s_SndVar21
                    );
      _s_SndVar19 = _s_SndVar19 + _s_SndVar21;
      EnableIntc(1);
      break;
    case 10:
      DisableIntc(1);
      _s_SndVar5 = &LAB_00155040;
      s_SndVar8 = 1;
      _s_SndVar6 = &s_SndVar7;
      IopSnd_Command(0x104,1,0);
      EnableIntc(1);
      break;
    case 0xb:
      DisableIntc(1);
      _s_SndVar5 = &LAB_00155030;
      s_SndVar8 = 1;
      _s_SndVar6 = &s_SndVar7;
      IopStrm_Command(0x302,1,1);
      EnableIntc(1);
      break;
    case 0xc:
      iVar3 = _s_SndVar9 * 0x2c;
      DisableIntc(1);
      s_SndVar8 = 1;
      _s_SndVar5 = &LAB_00154fe0;
      _s_SndVar6 = &s_SndVar7;
      IopSe_Command(0x20d,_s_SndVar9,*(undefined4 *)(&s_Snd_LoadBanks_11 + iVar3),
                    *(undefined4 *)(&s_Snd_LoadBanks_9 + iVar3));
      EnableIntc(1);
      break;
    case 0xd:
      DisableIntc(1);
      if (_s_SndVar12 == 0) {
        if (_s_SndVar17 == 0) {
          s_SndVar8 = 0;
        }
        else {
          s_SndVar8 = 0xe;
          _s_SndVar20 = _s_SndVar18;
        }
      }
      else {
        _s_SndVar20 = g_ArcToc->entries[_s_SndVar12].unpackedSize;
        if (_s_SndVar20 == 0) {
          _s_SndVar20 = g_ArcToc->entries[_s_SndVar12].storedSize;
        }
        s_SndVar8 = 0xe;
      }
      _s_SndVar19 = 0;
      _s_SndVar21 = 0;
      EnableIntc(1);
      break;
    case 0xe:
      Snd_BgmLoadNext();
      break;
    case 0xf:
      DisableIntc(1);
      lVar2 = Sif_WaitDma(_s_SndVar22,_s_SndVar7);
      if (lVar2 < 0) {
        if (_s_SndVar20 == 0) {
          s_SndVar8 = 0x10;
        }
        else {
          s_SndVar8 = 0xe;
          _s_SndVar19 = _s_SndVar19 + _s_SndVar21;
        }
      }
      EnableIntc(1);
      break;
    case 0x10:
      iVar3 = _s_SndVar9 * 0x2c;
      DisableIntc(1);
      s_SndVar8 = 1;
      _s_SndVar5 = &LAB_00154de0;
      _s_SndVar6 = &s_SndVar7;
      IopSe_Command(0x20e,_s_SndVar9,*(undefined4 *)(&s_Snd_LoadBanks_10 + iVar3));
      EnableIntc(1);
    }
  }
  return;
}

// 0x001559d0  size 0xf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Snd_PlayStream(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  
  DisableIntc(1);
  bVar1 = s_SndVar8 == '\0';
  if (bVar1) {
    s_SndVar8 = '\x02';
    _s_SndVar7 = 0;
    _s_SndVar10 = 0;
    _s_SndVar11 = 0;
    _s_SndVar12 = 0;
    _s_SndVar19 = 0;
    _s_SndVar20 = 0;
    _s_SndVar21 = 0;
    _s_SndVar22 = 0;
    _s_SndVar9 = param_1;
    _s_SndVar13 = param_2;
    _s_SndVar14 = param_3;
    _s_SndVar15 = param_4;
    _s_SndVar16 = param_5;
    _s_SndVar17 = param_6;
    _s_SndVar18 = param_7;
  }
  EnableIntc(1);
  return bVar1;
}

// 0x00155ac0  size 0x118
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 6 callers */

bool Snd_PlayStreamEx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     long param_5)

{
  bool bVar1;
  
  DisableIntc(1);
  bVar1 = s_SndVar8 == '\0';
  if (bVar1) {
    s_SndVar8 = '\x02';
    _s_SndVar7 = (undefined4)param_5;
    _s_SndVar13 = 0;
    _s_SndVar14 = 0;
    _s_SndVar15 = 0;
    _s_SndVar16 = 0;
    _s_SndVar17 = 0;
    _s_SndVar18 = 0;
    _s_SndVar19 = 0;
    _s_SndVar20 = 0;
    _s_SndVar21 = 0;
    _s_SndVar22 = 0;
    _s_SndVar9 = param_1;
    _s_SndVar10 = param_2;
    _s_SndVar11 = param_3;
    _s_SndVar12 = param_4;
  }
  EnableIntc(1);
  if ((bVar1) && (param_5 != 0)) {
    while (s_SndVar8 != '\0') {
      Snd_ProcessQueue();
    }
  }
  return bVar1;
}

// 0x00155be0  size 0x38
/* 12 callers */

undefined1 Snd_IsBusy(void)

{
  undefined1 uVar1;
  
  DisableIntc(1);
  uVar1 = s_SndVar8;
  EnableIntc(1);
  return uVar1;
}

// 0x00155c20  size 0x1d70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* big table setup */

void Snd_LoadBanks(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  IopSe_OpenLocked(10,_s_SndVar2 + -1,_s_SndVar1);
  iRam0042d874 = _g_Snd;
  IopSe_Command(0x214);
  _s_Snd_LoadBanks_4 = 0x110;
  _s_Snd_LoadBanks_5 = 0x110;
  _s_Snd_LoadBanks_1 = 0;
  _s_Snd_LoadBanks_2 = 4;
  _s_Snd_LoadBanks_3 = 4;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_Snd_LoadBanks_10 = 0;
  _s_Snd_LoadBanks_6 = _g_Snd + 0x80140 + (uVar11 + 0x7ff & 0xfffff800);
  _s_Snd_LoadBanks_7 = _s_SndVar4 + 0x10000;
  _s_Snd_LoadBanks_11 = 0x5010;
  _s_Snd_LoadBanks_8 = _s_SndVar4 + 0x10140;
  _s_Snd_LoadBanks_9 = _s_SndVar4 + 0x10280;
  _s_Snd_LoadBanks_13 = 4;
  _s_Snd_LoadBanks_15 = 0x410;
  _s_Snd_LoadBanks_16 = 0x410;
  _s_Snd_LoadBanks_12 = 0;
  _s_Snd_LoadBanks_14 = 0x10;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_Snd_LoadBanks_17 = _g_Snd + 0x80280 + (uVar11 + 0x7ff & 0xfffff800);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  _s_Snd_LoadBanks_18 = _s_SndVar4 + 0x10280 + (uVar11 + 0x3f & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  _s_Snd_LoadBanks_19 = _s_SndVar4 + 0x106c0 + (uVar11 + 0x3f & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  _s_Snd_LoadBanks_21 = 0;
  _s_Snd_LoadBanks_20 = _s_SndVar4 + 0x10b00 + (uVar11 + 0x3f & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1ca5].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1ca5].storedSize;
  }
  _s_Snd_LoadBanks_22 = uVar11 + 0x5010;
  _s_Snd_LoadBanks_26 = 0x410;
  _s_Snd_LoadBanks_27 = 0x410;
  _s_Snd_LoadBanks_24 = 4;
  _s_Snd_LoadBanks_23 = 0;
  _s_Snd_LoadBanks_25 = 0x10;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_Snd_LoadBanks_28 = _g_Snd + 0x806c0 + (uVar11 + 0x7ff & 0xfffff800);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  _s_Snd_LoadBanks_29 =
       _s_SndVar4 + 0x10b00 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  _s_Snd_LoadBanks_30 =
       _s_SndVar4 + 0x10f40 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  _s_Snd_LoadBanks_32 = 0;
  _s_Snd_LoadBanks_31 =
       _s_SndVar4 + 0x11380 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1ca5].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1ca5].storedSize;
  }
  _s_Snd_LoadBanks_33 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
  _s_Snd_LoadBanks_33 = uVar11 + 0x5010 + _s_Snd_LoadBanks_33;
  _s_Snd_LoadBanks_37 = 0x90;
  _s_Snd_LoadBanks_38 = 0x90;
  _s_Snd_LoadBanks_36 = 2;
  _s_Snd_LoadBanks_34 = 0;
  _s_Snd_LoadBanks_35 = 0;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_Snd_LoadBanks_39 = _g_Snd + 0x80b00 + (uVar11 + 0x7ff & 0xfffff800);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar3 = _s_SndVar4 + 0x11380;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  _s_Snd_LoadBanks_40 =
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar3 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar3 = _s_SndVar4 + 0x11440;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  _s_Snd_LoadBanks_41 =
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar3 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar3 = _s_SndVar4 + 0x11500;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  _s_Snd_LoadBanks_42 =
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar3 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  _s_Snd_LoadBanks_43 = 0;
  iVar1 = Arc_GetFileSize(0x1c68,0x1c85,1);
  _s_Snd_LoadBanks_44 = Arc_GetFileSize(0x1c68,0x1c85,1);
  _s_Snd_LoadBanks_44 = iVar1 + 0x100000 + _s_Snd_LoadBanks_44;
  _s_Snd_LoadBanks_48 = 0x110;
  _s_Snd_LoadBanks_49 = 0x110;
  _s_Snd_LoadBanks_46 = 3;
  _s_Snd_LoadBanks_45 = 0;
  _s_Snd_LoadBanks_47 = 8;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_Snd_LoadBanks_50 = _g_Snd + 0x80bc0 + (uVar11 + 0x7ff & 0xfffff800);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar4 = _s_SndVar4 + 0x11500;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  _s_Snd_LoadBanks_51 =
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar4 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar4 = _s_SndVar4 + 0x11640;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  _s_Snd_LoadBanks_52 =
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar4 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar4 = _s_SndVar4 + 0x11780;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  _s_Snd_LoadBanks_54 = 0;
  _s_Snd_LoadBanks_55 = 0x100000;
  _s_Snd_LoadBanks_56 = 0;
  _s_Snd_LoadBanks_53 =
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar4 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  _s_Snd_LoadBanks_59 = 0x110;
  _s_Snd_LoadBanks_60 = 0x110;
  _s_Snd_LoadBanks_57 = 2;
  _s_Snd_LoadBanks_58 = 8;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_Snd_LoadBanks_61 = _g_Snd + 0x80d00 + (uVar11 + 0x7ff & 0xfffff800);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar5 = _s_SndVar4 + 0x11780;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_62 =
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar5 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar5 = _s_SndVar4 + 0x118c0;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_63 =
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar5 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar5 = _s_SndVar4 + 0x11a00;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_64 =
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar5 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  _s_Snd_LoadBanks_65 = 0;
  _s_Snd_LoadBanks_66 = Arc_GetFileSize(0x1c68,0x1c85,1);
  _s_Snd_LoadBanks_66 = _s_Snd_LoadBanks_66 + 0x100000;
  _s_Snd_LoadBanks_70 = 0x110;
  _s_Snd_LoadBanks_71 = 0x110;
  _s_Snd_LoadBanks_68 = 2;
  _s_Snd_LoadBanks_67 = 0;
  _s_Snd_LoadBanks_69 = 8;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_Snd_LoadBanks_72 = _g_Snd + 0x80e40 + (uVar11 + 0x7ff & 0xfffff800);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar6 = _s_SndVar4 + 0x11a00;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_73 =
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar6 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar6 = _s_SndVar4 + 0x11b40;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_74 =
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar6 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar6 = _s_SndVar4 + 0x11c80;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_76 = 0;
  _s_Snd_LoadBanks_75 =
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar6 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1ca5].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1ca5].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
  _s_Snd_LoadBanks_77 = Arc_GetFileSize(0x1c60,0x1c62,1);
  _s_Snd_LoadBanks_77 = _s_Snd_LoadBanks_77 + uVar11 + 0x5010 + iVar1;
  _s_Snd_LoadBanks_81 = 0x110;
  _s_Snd_LoadBanks_82 = 0x110;
  _s_Snd_LoadBanks_79 = 3;
  _s_Snd_LoadBanks_78 = 0;
  _s_Snd_LoadBanks_80 = 8;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_Snd_LoadBanks_83 = _g_Snd + 0x80f80 + (uVar11 + 0x7ff & 0xfffff800);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar7 = _s_SndVar4 + 0x11c80;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_84 =
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar7 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar7 = _s_SndVar4 + 0x11dc0;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_85 =
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar7 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar7 = _s_SndVar4 + 0x11f00;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  _s_Snd_LoadBanks_87 = 0;
  _s_Snd_LoadBanks_86 =
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar7 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1ca5].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1ca5].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
  iVar2 = Arc_GetFileSize(0x1c60,0x1c62,1);
  _s_Snd_LoadBanks_88 = Arc_GetFileSize(0x1c68,0x1c85,1);
  _s_Snd_LoadBanks_88 = _s_Snd_LoadBanks_88 + iVar2 + uVar11 + 0x5010 + iVar1;
  _s_Snd_LoadBanks_89 = 1;
  _s_Snd_LoadBanks_90 = 0;
  _s_Snd_LoadBanks_91 = 0x20;
  _s_Snd_LoadBanks_92 = 0;
  _s_Snd_LoadBanks_93 = 0x110;
  _s_Snd_LoadBanks_94 = 0;
  _s_Snd_LoadBanks_95 = 0;
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar8 = _s_SndVar4 + 0x11f00;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  _s_Snd_LoadBanks_96 =
       (iVar7 + 0x3fU & 0xffffffc0) +
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar8 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar8 = _s_SndVar4 + 0x12040;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  _s_Snd_LoadBanks_97 =
       (iVar7 + 0x3fU & 0xffffffc0) +
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar8 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar8 = _s_SndVar4 + 0x1c940;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  _s_Snd_LoadBanks_98 =
       (iVar7 + 0x3fU & 0xffffffc0) +
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar8 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar1 = Arc_GetFileSize(0x1c68,0x1c85,1);
  iVar2 = Arc_GetFileSize(0x1c68,0x1c85,1);
  _s_Snd_LoadBanks_99 = Arc_GetFileSize(0x1c63,0x1c67,1);
  _s_Snd_LoadBanks_99 = _s_Snd_LoadBanks_99 + iVar1 + 0x100000 + iVar2;
  _s_Snd_LoadBanks_100 = 1;
  _s_Snd_LoadBanks_101 = 0;
  _s_Snd_LoadBanks_102 = 0x20;
  _s_Snd_LoadBanks_103 = 0;
  _s_Snd_LoadBanks_104 = 0x110;
  _s_Snd_LoadBanks_105 = 0;
  _s_Snd_LoadBanks_106 = 0;
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar8 = _s_SndVar4 + 0x45000;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  _s_Snd_LoadBanks_107 =
       (iVar7 + 0x3fU & 0xffffffc0) +
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar8 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar8 = _s_SndVar4 + 0x45140;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  _s_Snd_LoadBanks_108 =
       (iVar7 + 0x3fU & 0xffffffc0) +
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar8 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar9 = _s_SndVar4 + 0x45140;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  iVar8 = Arc_GetFileSize(0x1ca7,0x1db2,1);
  _s_Snd_LoadBanks_109 =
       (iVar8 + 0x3fU & 0xffffffc0) +
       (iVar7 + 0x3fU & 0xffffffc0) +
       (iVar6 + 0x3fU & 0xffffffc0) +
       (iVar5 + 0x3fU & 0xffffffc0) +
       (iVar4 + 0x3fU & 0xffffffc0) +
       (iVar3 + 0x3fU & 0xffffffc0) +
       (iVar2 + 0x3fU & 0xffffffc0) +
       iVar9 + (uVar11 + 0x3f & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uVar11 = g_ArcToc->entries[0x1ca5].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1ca5].storedSize;
  }
  _s_Snd_LoadBanks_110 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
  _s_Snd_LoadBanks_110 = uVar11 + 0x5010 + _s_Snd_LoadBanks_110;
  uVar11 = 0;
  puVar10 = &s_SndVar1;
  do {
    uStack_1c = *(undefined4 *)(puVar10 + 0x80);
    uStack_20 = *(undefined4 *)(puVar10 + 0x74);
    uStack_30 = *(undefined4 *)(puVar10 + 0x68);
    uStack_2c = *(undefined4 *)(puVar10 + 0x6c);
    uStack_28 = *(undefined4 *)(puVar10 + 0x70);
    uStack_24 = *(undefined4 *)(puVar10 + 0x7c);
    uStack_14 = *(undefined4 *)(puVar10 + 0x84);
    uStack_10 = *(undefined4 *)(puVar10 + 0x78);
    uStack_18 = uStack_20;
    IopSe_LoadBank(uVar11,&uStack_30);
    IopSe_Command(0x206,uVar11,0x100);
    uVar11 = uVar11 + 1;
    puVar10 = puVar10 + 0x2c;
  } while (uVar11 < 10);
  IopSe_Command(0x202,1);
  s_SndVar8 = 0;
  return;
}

// 0x00157990  size 0xdc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_Update(void)

{
  long lVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (_s_SndVar28 == 0) {
    if (s_SndVar8 != '\0') {
      IopSe_ClearPending(_s_SndVar9);
    }
    IopSe_FlushDma();
    lVar1 = Rpc_GetPendingCount(0x42d824);
    if ((lVar1 != 0) && (_s_SndCmdCount != 0)) {
      Mem_Copy32(0x42df00,0x42dafc,0xf1);
      _s_SndCmdCount = 0;
      uStack_20 = 0x400;
      uStack_1c = 0x3d0;
      uStack_18 = 0x42df00;
      uStack_14 = 0x40;
      uStack_10 = 0x42e300;
      Rpc_Call(0x42d824,&uStack_20);
    }
    Snd_ProcessQueue();
    Snd_StreamUpdate();
  }
  return;
}

// 0x00157a70  size 0xa4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_SetPause(long param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
    do {
      IopStrm_Command(0x302,1,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
    Rpc_SetBlocking(0x42d824,0);
  }
  else {
    Rpc_SetBlocking(0x42d824,1);
    uVar1 = 0;
    do {
      IopStrm_Command(0x302,0,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
  }
  _s_SndVar28 = (int)param_1;
  return;
}

// 0x00157b20  size 0x8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Snd_Shutdown(void)

{
  Rpc_SetBlocking(0x42d824,1);
  IopStrm_Shutdown();
  IopSe_Shutdown();
  Rpc_SetBlocking(0x42d824,0);
  IopStrm_Reset();
  IopSe_Reset();
  IopSnd_Nop();
  maybe_Mutex_Delete(0x42d868);
  Rpc_Unbind(0x42d824);
  Mem_Free(_g_Snd);
  maybe_sceSifFreeSysMemory(_s_SndVar4);
  return;
}

// 0x00157bb0  size 0x418
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* XVI_SND.IRX */

void Snd_Init(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 auStack_140 [4];
  undefined4 uStack_13c;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined *puStack_120;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined4 uStack_114;
  undefined *puStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [256];
  
  _s_SndVar1 = (undefined4)param_1;
  _s_Snd_Init_1 = 0;
  _s_Snd_Init_2 = 0;
  uVar11 = g_ArcToc->entries[0x1fd0].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1fd0].storedSize;
  }
  _s_SndVar2 = param_2;
  _s_SndVar3 = param_3;
  _g_Snd = Mem_AllocAligned((uVar11 + 0x7ff & 0xfffff800) + 0x810c0,0x40,param_1);
  uVar11 = g_ArcToc->entries[0x1c5c].unpackedSize;
  if (uVar11 == 0) {
    uVar11 = g_ArcToc->entries[0x1c5c].storedSize;
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar3 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar4 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  iVar8 = Arc_GetFileSize(0x1ca7,0x1db2,1);
  iVar9 = Arc_GetFileSize(0x1ec3,0x1fce,1);
  _s_SndVar4 = sceSifAllocIopHeap((iVar9 + 0x3fU & 0xffffffc0) +
                                  (iVar8 + 0x3fU & 0xffffffc0) +
                                  (iVar7 + 0x3fU & 0xffffffc0) +
                                  (iVar6 + 0x3fU & 0xffffffc0) +
                                  (iVar5 + 0x3fU & 0xffffffc0) +
                                  (iVar4 + 0x3fU & 0xffffffc0) +
                                  (iVar3 + 0x3fU & 0xffffffc0) +
                                  (iVar2 + 0x3fU & 0xffffffc0) +
                                  (uVar11 + 0x3f & 0xffffffc0) + 0x45140 +
                                  (iVar1 + 0x3fU & 0xffffffc0));
  puStack_120 = PTR_DAT_0030ac60;
  puStack_118 = PTR_DAT_0030ac68;
  puStack_110 = PTR_DAT_0030ac70;
  uStack_10c = DAT_0030ac74;
  uStack_108 = DAT_0030ac78;
  uStack_11c = 0x99900;
  uStack_104 = DAT_0030ac7c;
  uStack_114 = param_2;
  uVar10 = Rpc_PackStrings(auStack_100,&puStack_120);
  Iop_LoadModule(0x362410,uVar10,auStack_100,0);
  Rpc_Bind(0x42d824,0x99900);
  maybe_Mutex_Create(0x42d868);
  IopSnd_SetBlocking(0x42d824);
  IopSe_SetRpcClient(0x42d824);
  IopStrm_SetRpcClient(0x42d824);
  Rpc_SetBlocking(0x42d824,1);
  uStack_13c = 4;
  uVar11 = 0;
  uStack_138 = 10;
  uStack_136 = 10;
  iVar1 = 0xfffff;
  do {
    IopSnd_Command(0x107,uVar11 | 0x1d00,iVar1);
    IopSnd_Command(0x10f,uVar11 | 0x1900,0xfffffc);
    IopSnd_Command(0x10f,uVar11 | 0x1b00,0xfffffc);
    IopSnd_Command(0x10b,uVar11,auStack_140);
    IopSnd_Command(0x109,uVar11 | 2,1);
    IopSnd_Command(0x10d,uVar11 | 0xb80,0);
    IopSnd_Command(0x10d,uVar11 | 0xc80,0);
    uVar11 = uVar11 + 1;
    iVar1 = iVar1 + 0x100000;
  } while (uVar11 < 2);
  Snd_LoadBanks();
  Snd_LoadSystemBanks();
  Rpc_SetBlocking(0x42d824,0);
  _s_SndVar27 = _g_Snd + 0x140;
  Arc_LoadFileEx(0x1fd0,_s_SndVar27,0,0,0,0);
  File_AbortAll();
  Snd_PlayStreamEx(0,0x1c5c,0x1ca5,0,1);
  _s_SndCmdCount = 0;
  _s_SndVar28 = 0;
  return;
}

// 0x00157fd0  size 0x78
long Snd_Manager_dtor(long param_1,short param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (int)param_1;
    Mutex_dtor(iVar1 + 0x58,0xffffffffffffffff);
    if (iVar1 != -0x14) {
      Mutex_dtor(iVar1 + 0x3c,0xffffffffffffffff);
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

