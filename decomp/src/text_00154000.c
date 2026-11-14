// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00154000 - 0x00158000
#include "ghidra_types.h"

// 0x00154260  size 0x88
undefined4 Snd_StreamIsReady(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_1 * 0x28 + 0x42daa8);
  uVar2 = 0;
  DisableIntc(1);
  cVar1 = *pcVar3;
  if (cVar1 == '\b') {
    *pcVar3 = '\0';
    uVar2 = 1;
  }
  else if (cVar1 == '\t') {
    *(undefined4 *)(param_1 * 0x28 + 0x42dac0) = 0;
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
  pcVar2 = (char *)(param_1 + 0x42daa8);
  uVar1 = 0;
  DisableIntc(1);
  if (*pcVar2 == '\0') {
    *(int *)(param_1 + 0x42dab0) = param_2;
    *pcVar2 = '\x02';
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x42dac0) = 1;
  }
  else if (param_2 == *(int *)(param_1 + 0x42dab0)) {
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x42dac0) = 1;
  }
  else if (*pcVar2 == '\b') {
    *(int *)(param_1 + 0x42dab0) = param_2;
    *pcVar2 = '\x02';
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x42dac0) = 1;
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
  uVar1 = *(undefined1 *)(param_1 * 0x28 + 0x42daa8);
  EnableIntc(1);
  return uVar1;
}

// 0x00154410  size 0x10
undefined4 Snd_GetBankCount(void)

{
  return *(undefined4 *)(iRam0042daf8 + 8);
}

// 0x00154420  size 0x338
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Snd_LoadSystemBanks(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined4 auStack_8 [2];
  
  puVar2 = (undefined4 *)0x8;
  puVar7 = auStack_8;
  puVar1 = puVar7;
  while (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + -1);
    puVar1 = puVar2;
  }
  IopStrm_Init(2,iRam0042d814 + -1,0x99901,iRam0042d818 + -1,uRam0042d810);
  uVar10 = 0;
  iVar9 = 0x42d810;
  iVar8 = 0;
  iVar12 = 0;
  do {
    iVar3 = _g_ArcToc;
    *(undefined4 *)(iVar9 + 0x260) = 0x2000;
    *(undefined4 *)(iVar9 + 0x264) = 0x10;
    iVar11 = *(int *)(iVar3 + 0x27c60);
    if (iVar11 == 0) {
      iVar11 = *(int *)(iVar3 + 0x27c54);
    }
    *(uint *)(iVar9 + 0x268) = iVar8 + iRam0042d81c + 0x140 + (iVar11 + 0x7ffU & 0xfffff800);
    *(undefined4 *)(iVar9 + 0x26c) = 0x20;
    *(int *)(iVar9 + 0x270) = iRam0042d820 + iVar12;
    *(undefined4 *)(iVar9 + 0x274) = 4;
    if (uVar10 == 0) {
      iVar11 = *(int *)(_g_ArcToc + 0x23d04);
      if (iVar11 == 0) {
        iVar11 = *(int *)(_g_ArcToc + 0x23cf8);
      }
      iVar3 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
      iVar4 = Arc_GetFileSize(0x1c60,0x1c62,1);
      iVar5 = Arc_GetFileSize(0x1c68,0x1c85,1);
      iVar6 = Arc_GetFileSize(0x1c86,0x1ca3,1);
      iVar6 = iVar6 + iVar5 + iVar4 + iVar11 + 0x5010 + iVar3;
    }
    else {
      iVar11 = *(int *)(_g_ArcToc + 0x23d04);
      if (iVar11 == 0) {
        iVar11 = *(int *)(_g_ArcToc + 0x23cf8);
      }
      iVar3 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
      iVar4 = Arc_GetFileSize(0x1c60,0x1c62,1);
      iVar5 = Arc_GetFileSize(0x1c68,0x1c85,1);
      iVar6 = Arc_GetFileSize(0x1c86,0x1ca3,1);
      iVar6 = iVar6 + iVar5 + iVar4 + iVar11 + 0x9010 + iVar3;
    }
    *(int *)(iVar9 + 0x278) = iVar6;
    uVar10 = uVar10 + 1;
    iVar12 = iVar12 + 0x8000;
    iVar9 = iVar9 + 0x1c;
    iVar8 = iVar8 + 0x40000;
  } while (uVar10 < 2);
  uVar10 = 0;
  iVar8 = 0x42d810;
  puVar7 = auStack_8;
  do {
    uStack_30 = *(undefined4 *)(iVar8 + 0x260);
    uStack_2c = *(undefined4 *)(iVar8 + 0x268);
    pcStack_18 = Snd_StreamFill;
    uStack_28 = *(undefined4 *)(iVar8 + 0x26c);
    uStack_24 = *(undefined4 *)(iVar8 + 0x270);
    uStack_20 = *(undefined4 *)(iVar8 + 0x274);
    uStack_1c = *(undefined4 *)(iVar8 + 0x278);
    IopStrm_PlayEx(uVar10,&uStack_30);
    uVar10 = uVar10 + 1;
    *puVar7 = 3;
    iVar8 = iVar8 + 0x1c;
    puVar7 = puVar7 + 1;
  } while (uVar10 < 2);
  IopSe_Command(0x203,auStack_8[0],auStack_8[1]);
  uRam0042daac = 0;
  uRam0042dad4 = 1;
  uRam0042daa8 = 0;
  uRam0042dac0 = 0;
  uRam0042dad0 = 0;
  uRam0042dae8 = 0;
  return;
}

// 0x00154760  size 0x108
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
    if (iRam0042dafc < 0x30) {
      iVar2 = iRam0042dafc * 0x14;
      iRam0042dafc = iRam0042dafc + 1;
      *(undefined4 *)(iVar2 + 0x42db00) = 0x10d;
      *(uint *)(iVar2 + 0x42db04) = uVar1 | 0xb80;
      *(undefined4 *)(iVar2 + 0x42db08) = param_1;
      *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
      *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
    }
    if (iRam0042dafc < 0x30) {
      iVar2 = iRam0042dafc * 0x14;
      iRam0042dafc = iRam0042dafc + 1;
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
/* 9 callers; queue max 0x30 */

bool Snd_QueueCmd1(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x212;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = uStack_18;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x001548f0  size 0x84
bool Snd_QueueCmd2(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x211;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154980  size 0x84
bool Snd_QueueCmd2b(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x210;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154a10  size 0x88
bool Snd_QueueCmd3(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x20f;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154aa0  size 0x80
bool Snd_QueueCmd1b(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x20c;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = uStack_18;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154b20  size 0x80
bool Snd_QueueCmd1c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x20b;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = uStack_18;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154ba0  size 0x84
bool Snd_QueueCmd2c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x20a;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = uStack_14;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154c30  size 0x88
bool Snd_QueueCmd3b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x209;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154cc0  size 0x88
bool Snd_QueueCmd3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
    *(undefined4 *)(iVar2 + 0x42db00) = 0x208;
    *(undefined4 *)(iVar2 + 0x42db04) = param_1;
    *(undefined4 *)(iVar2 + 0x42db08) = param_2;
    *(undefined4 *)(iVar2 + 0x42db0c) = param_3;
    *(undefined4 *)(iVar2 + 0x42db10) = uStack_10;
  }
  return bVar1;
}

// 0x00154d50  size 0x84
bool Snd_QueueCmd2d(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar1 = iRam0042dafc < 0x30;
  if (bVar1) {
    iVar2 = iRam0042dafc * 0x14;
    iRam0042dafc = iRam0042dafc + 1;
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
  uVar2 = Sif_SendDma(*(int *)(iVar1 * 0x2c + 0x42d89c) + param_4[0xc],param_2,param_3,*param_4);
  param_4[0xf] = uVar2;
  EnableIntc(1);
  return;
}

// 0x00154e90  size 0x144
void Snd_BgmLoadNext(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = uRam0042da94;
  uVar3 = iRam0042da8c * iRam0042daa0;
  if (uRam0042da64 <= (uint)(iRam0042da8c * iRam0042daa0)) {
    uVar3 = uRam0042da64;
  }
  DisableIntc(1);
  uRam0042da34 = 1;
  uRam0042da64 = uRam0042da64 - uVar3;
  uRam0042da68 = uVar3;
  EnableIntc();
  if (iRam0042da44 == 0) {
    if (iRam0042da58 != 0) {
      iVar4 = iRam0042da58 + iRam0042da60;
      iVar2 = iRam0042da38 * 0x2c;
      DisableIntc(1);
      uRam0042da34 = 0xf;
      uRam0042da6c = Sif_SendDma(*(int *)(iVar2 + 0x42d89c) + iRam0042da60,iVar4,uVar3,iRam0042da30)
      ;
      EnableIntc(1);
    }
  }
  else {
    Arc_LoadFileEx(iRam0042da44,uVar1,0x154df0,0x42da30,iRam0042da60,uVar3);
    if (iRam0042da30 != 0) {
      File_AbortAll();
    }
  }
  return;
}

// 0x001550a0  size 0x78
void Snd_JingleDmaCallback
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = uRam0042da9c;
  DisableIntc(1);
  *(undefined1 *)(param_4 + 1) = 7;
  uVar1 = Sif_SendDma(uVar1,param_2,param_3,*param_4);
  param_4[0xf] = uVar1;
  EnableIntc(1);
  return;
}

// 0x00155120  size 0x11c
void Snd_JingleLoadNext(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = uRam0042da94;
  uVar3 = iRam0042da8c * iRam0042daa0;
  if (uRam0042da64 <= (uint)(iRam0042da8c * iRam0042daa0)) {
    uVar3 = uRam0042da64;
  }
  DisableIntc(1);
  uRam0042da34 = 1;
  uRam0042da64 = uRam0042da64 - uVar3;
  uRam0042da68 = uVar3;
  EnableIntc();
  uVar2 = uRam0042da9c;
  if (iRam0042da40 == 0) {
    if (iRam0042da50 != 0) {
      iVar4 = iRam0042da50 + iRam0042da60;
      DisableIntc(1);
      uRam0042da34 = 7;
      uRam0042da6c = Sif_SendDma(uVar2,iVar4,uVar3,iRam0042da30);
      EnableIntc(1);
    }
  }
  else {
    Arc_LoadFileEx(iRam0042da40,uVar1,0x1550a0,0x42da30,iRam0042da60,uVar3);
    if (iRam0042da30 != 0) {
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
  uVar2 = Sif_SendDma(*(int *)(iVar1 * 0x2c + 0x42d898) + param_4[0xc],param_2,param_3,*param_4);
  param_4[0xf] = uVar2;
  EnableIntc(1);
  return;
}

// 0x001552e0  size 0x144
void Snd_VoiceLoadNext(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = uRam0042da94;
  uVar3 = iRam0042da8c * iRam0042daa0;
  if (uRam0042da64 <= (uint)(iRam0042da8c * iRam0042daa0)) {
    uVar3 = uRam0042da64;
  }
  DisableIntc(1);
  uRam0042da34 = 1;
  uRam0042da64 = uRam0042da64 - uVar3;
  uRam0042da68 = uVar3;
  EnableIntc();
  if (iRam0042da3c == 0) {
    if (iRam0042da48 != 0) {
      iVar4 = iRam0042da48 + iRam0042da60;
      iVar2 = iRam0042da38 * 0x2c;
      DisableIntc(1);
      uRam0042da34 = 4;
      uRam0042da6c = Sif_SendDma(*(int *)(iVar2 + 0x42d898) + iRam0042da60,iVar4,uVar3,iRam0042da30)
      ;
      EnableIntc(1);
    }
  }
  else {
    Arc_LoadFileEx(iRam0042da3c,uVar1,0x155240,0x42da30,iRam0042da60,uVar3);
    if (iRam0042da30 != 0) {
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
  uVar1 = uRam0042da9c;
  if (lVar2 != 0) {
    switch(uRam0042da34) {
    case 0:
    case 1:
      break;
    case 2:
      DisableIntc(1);
      if (iRam0042da3c == 0) {
        if (iRam0042da48 == 0) {
          uRam0042da34 = 5;
        }
        else {
          uRam0042da34 = 3;
          iRam0042da64 = iRam0042da4c;
        }
      }
      else {
        iVar3 = iRam0042da3c * 0x14 + _g_ArcToc;
        iRam0042da64 = *(int *)(iVar3 + 0x20);
        if (iRam0042da64 == 0) {
          iRam0042da64 = *(int *)(iVar3 + 0x14);
        }
        uRam0042da34 = 3;
      }
      iRam0042da60 = 0;
      iRam0042da68 = 0;
      EnableIntc(1);
      break;
    case 3:
      Snd_VoiceLoadNext();
      break;
    case 4:
      DisableIntc(1);
      lVar2 = Sif_WaitDma(uRam0042da6c,uRam0042da30);
      if (lVar2 < 0) {
        if (iRam0042da64 == 0) {
          uRam0042da34 = 5;
        }
        else {
          uRam0042da34 = 3;
          iRam0042da60 = iRam0042da60 + iRam0042da68;
        }
      }
      EnableIntc(1);
      break;
    case 5:
      DisableIntc(1);
      if (iRam0042da40 == 0) {
        if (iRam0042da50 == 0) {
          uRam0042da34 = 0xd;
        }
        else {
          uRam0042da34 = 6;
          iRam0042da64 = iRam0042da54;
        }
      }
      else {
        iVar3 = iRam0042da40 * 0x14 + _g_ArcToc;
        iRam0042da64 = *(int *)(iVar3 + 0x20);
        if (iRam0042da64 == 0) {
          iRam0042da64 = *(int *)(iVar3 + 0x14);
        }
        uRam0042da34 = 6;
      }
      iRam0042da60 = 0;
      iRam0042da68 = 0;
      EnableIntc(1);
      break;
    case 6:
      Snd_JingleLoadNext();
      break;
    case 7:
      DisableIntc(1);
      lVar2 = Sif_WaitDma(uRam0042da6c,uRam0042da30);
      if (lVar2 < 0) {
        uRam0042da34 = 8;
      }
      EnableIntc(1);
      break;
    case 8:
      DisableIntc(1);
      puRam0042d854 = &LAB_00155090;
      uRam0042da34 = 1;
      uRam0042d858 = 0x42da30;
      IopStrm_Command(0x302,0);
      EnableIntc(1);
      break;
    case 9:
      iVar3 = iRam0042da38 * 0x2c;
      DisableIntc(1);
      uRam0042d858 = 0x42da30;
      puRam0042d854 = &LAB_00155080;
      uRam0042da34 = 1;
      IopSnd_Command(0x103,1,0,uVar1,*(int *)(iVar3 + 0x42d8a0) + iRam0042da60,iRam0042da68);
      iRam0042da60 = iRam0042da60 + iRam0042da68;
      EnableIntc(1);
      break;
    case 10:
      DisableIntc(1);
      puRam0042d854 = &LAB_00155040;
      uRam0042da34 = 1;
      uRam0042d858 = 0x42da30;
      IopSnd_Command(0x104,1,0);
      EnableIntc(1);
      break;
    case 0xb:
      DisableIntc(1);
      puRam0042d854 = &LAB_00155030;
      uRam0042da34 = 1;
      uRam0042d858 = 0x42da30;
      IopStrm_Command(0x302,1,1);
      EnableIntc(1);
      break;
    case 0xc:
      iVar3 = iRam0042da38 * 0x2c;
      DisableIntc(1);
      uRam0042da34 = 1;
      puRam0042d854 = &LAB_00154fe0;
      uRam0042d858 = 0x42da30;
      IopSe_Command(0x20d,iRam0042da38,*(undefined4 *)(iVar3 + 0x42d8a0),
                    *(undefined4 *)(iVar3 + 0x42d898));
      EnableIntc(1);
      break;
    case 0xd:
      DisableIntc(1);
      if (iRam0042da44 == 0) {
        if (iRam0042da58 == 0) {
          uRam0042da34 = 0;
        }
        else {
          uRam0042da34 = 0xe;
          iRam0042da64 = iRam0042da5c;
        }
      }
      else {
        iVar3 = iRam0042da44 * 0x14 + _g_ArcToc;
        iRam0042da64 = *(int *)(iVar3 + 0x20);
        if (iRam0042da64 == 0) {
          iRam0042da64 = *(int *)(iVar3 + 0x14);
        }
        uRam0042da34 = 0xe;
      }
      iRam0042da60 = 0;
      iRam0042da68 = 0;
      EnableIntc(1);
      break;
    case 0xe:
      Snd_BgmLoadNext();
      break;
    case 0xf:
      DisableIntc(1);
      lVar2 = Sif_WaitDma(uRam0042da6c,uRam0042da30);
      if (lVar2 < 0) {
        if (iRam0042da64 == 0) {
          uRam0042da34 = 0x10;
        }
        else {
          uRam0042da34 = 0xe;
          iRam0042da60 = iRam0042da60 + iRam0042da68;
        }
      }
      EnableIntc(1);
      break;
    case 0x10:
      iVar3 = iRam0042da38 * 0x2c;
      DisableIntc(1);
      uRam0042da34 = 1;
      puRam0042d854 = &LAB_00154de0;
      uRam0042d858 = 0x42da30;
      IopSe_Command(0x20e,iRam0042da38,*(undefined4 *)(iVar3 + 0x42d89c));
      EnableIntc(1);
      break;
    default:
      goto switchD_00155484_default;
    }
  }
switchD_00155484_default:
  return;
}

// 0x001559d0  size 0xf0
bool Snd_PlayStream(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  
  DisableIntc(1);
  bVar1 = cRam0042da34 == '\0';
  if (bVar1) {
    cRam0042da34 = '\x02';
    uRam0042da30 = 0;
    uRam0042da3c = 0;
    uRam0042da40 = 0;
    uRam0042da44 = 0;
    uRam0042da60 = 0;
    uRam0042da64 = 0;
    uRam0042da68 = 0;
    uRam0042da6c = 0;
    uRam0042da38 = param_1;
    uRam0042da48 = param_2;
    uRam0042da4c = param_3;
    uRam0042da50 = param_4;
    uRam0042da54 = param_5;
    uRam0042da58 = param_6;
    uRam0042da5c = param_7;
  }
  EnableIntc(1);
  return bVar1;
}

// 0x00155ac0  size 0x118
/* 6 callers */

bool Snd_PlayStreamEx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     long param_5)

{
  bool bVar1;
  
  DisableIntc(1);
  bVar1 = cRam0042da34 == '\0';
  if (bVar1) {
    cRam0042da34 = '\x02';
    uRam0042da30 = (undefined4)param_5;
    uRam0042da48 = 0;
    uRam0042da4c = 0;
    uRam0042da50 = 0;
    uRam0042da54 = 0;
    uRam0042da58 = 0;
    uRam0042da5c = 0;
    uRam0042da60 = 0;
    uRam0042da64 = 0;
    uRam0042da68 = 0;
    uRam0042da6c = 0;
    uRam0042da38 = param_1;
    uRam0042da3c = param_2;
    uRam0042da40 = param_3;
    uRam0042da44 = param_4;
  }
  EnableIntc(1);
  if ((bVar1) && (param_5 != 0)) {
    while (cRam0042da34 != '\0') {
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
  uVar1 = uRam0042da34;
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
  int iVar10;
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
  
  IopSe_OpenLocked(10,iRam0042d814 + -1,uRam0042d810);
  iRam0042d874 = iRam0042d81c;
  IopSe_Command(0x214);
  uRam0042d884 = 0x110;
  uRam0042d888 = 0x110;
  uRam0042d878 = 0;
  uRam0042d87c = 4;
  uRam0042d880 = 4;
  iVar3 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x27c54);
  }
  uRam0042d89c = 0;
  iRam0042d88c = iRam0042d81c + 0x80140 + (iVar3 + 0x7ffU & 0xfffff800);
  iRam0042d890 = iRam0042d820 + 0x10000;
  uRam0042d8a0 = 0x5010;
  iRam0042d894 = iRam0042d820 + 0x10140;
  iRam0042d898 = iRam0042d820 + 0x10280;
  uRam0042d8a8 = 4;
  uRam0042d8b0 = 0x410;
  uRam0042d8b4 = 0x410;
  uRam0042d8a4 = 0;
  uRam0042d8ac = 0x10;
  iVar3 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x27c54);
  }
  iRam0042d8b8 = iRam0042d81c + 0x80280 + (iVar3 + 0x7ffU & 0xfffff800);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iRam0042d8bc = iRam0042d820 + 0x10280 + (iVar3 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iRam0042d8c0 = iRam0042d820 + 0x106c0 + (iVar3 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  uRam0042d8c8 = 0;
  iRam0042d8c4 = iRam0042d820 + 0x10b00 + (iVar3 + 0x3fU & 0xffffffc0);
  iRam0042d8cc = *(int *)(_g_ArcToc + 0x23d04);
  if (iRam0042d8cc == 0) {
    iRam0042d8cc = *(int *)(_g_ArcToc + 0x23cf8);
  }
  iRam0042d8cc = iRam0042d8cc + 0x5010;
  uRam0042d8dc = 0x410;
  uRam0042d8e0 = 0x410;
  uRam0042d8d4 = 4;
  uRam0042d8d0 = 0;
  uRam0042d8d8 = 0x10;
  iVar3 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x27c54);
  }
  iRam0042d8e4 = iRam0042d81c + 0x806c0 + (iVar3 + 0x7ffU & 0xfffff800);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iRam0042d8e8 = iRam0042d820 + 0x10b00 + (iVar3 + 0x3fU & 0xffffffc0) +
                 (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iRam0042d8ec = iRam0042d820 + 0x10f40 + (iVar3 + 0x3fU & 0xffffffc0) +
                 (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  uRam0042d8f4 = 0;
  iRam0042d8f0 = iRam0042d820 + 0x11380 + (iVar3 + 0x3fU & 0xffffffc0) +
                 (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23d04);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23cf8);
  }
  iRam0042d8f8 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
  iRam0042d8f8 = iVar3 + 0x5010 + iRam0042d8f8;
  uRam0042d908 = 0x90;
  uRam0042d90c = 0x90;
  uRam0042d904 = 2;
  uRam0042d8fc = 0;
  uRam0042d900 = 0;
  iVar3 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x27c54);
  }
  iRam0042d910 = iRam0042d81c + 0x80b00 + (iVar3 + 0x7ffU & 0xfffff800);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar4 = iRam0042d820 + 0x11380;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iRam0042d914 = (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar4 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar4 = iRam0042d820 + 0x11440;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iRam0042d918 = (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar4 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar4 = iRam0042d820 + 0x11500;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iRam0042d91c = (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar4 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uRam0042d920 = 0;
  iVar3 = Arc_GetFileSize(0x1c68,0x1c85,1);
  iRam0042d924 = Arc_GetFileSize(0x1c68,0x1c85,1);
  iRam0042d924 = iVar3 + 0x100000 + iRam0042d924;
  uRam0042d934 = 0x110;
  uRam0042d938 = 0x110;
  uRam0042d92c = 3;
  uRam0042d928 = 0;
  uRam0042d930 = 8;
  iVar3 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x27c54);
  }
  iRam0042d93c = iRam0042d81c + 0x80bc0 + (iVar3 + 0x7ffU & 0xfffff800);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar5 = iRam0042d820 + 0x11500;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iRam0042d940 = (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar5 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar5 = iRam0042d820 + 0x11640;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iRam0042d944 = (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar5 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar5 = iRam0042d820 + 0x11780;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  uRam0042d94c = 0;
  uRam0042d950 = 0x100000;
  uRam0042d954 = 0;
  iRam0042d948 = (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar5 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uRam0042d960 = 0x110;
  uRam0042d964 = 0x110;
  uRam0042d958 = 2;
  uRam0042d95c = 8;
  iVar3 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x27c54);
  }
  iRam0042d968 = iRam0042d81c + 0x80d00 + (iVar3 + 0x7ffU & 0xfffff800);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar6 = iRam0042d820 + 0x11780;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iRam0042d96c = (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar6 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar6 = iRam0042d820 + 0x118c0;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iRam0042d970 = (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar6 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar6 = iRam0042d820 + 0x11a00;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iRam0042d974 = (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar6 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  uRam0042d978 = 0;
  iRam0042d97c = Arc_GetFileSize(0x1c68,0x1c85,1);
  iRam0042d97c = iRam0042d97c + 0x100000;
  uRam0042d98c = 0x110;
  uRam0042d990 = 0x110;
  uRam0042d984 = 2;
  uRam0042d980 = 0;
  uRam0042d988 = 8;
  iVar3 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x27c54);
  }
  iRam0042d994 = iRam0042d81c + 0x80e40 + (iVar3 + 0x7ffU & 0xfffff800);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar7 = iRam0042d820 + 0x11a00;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iRam0042d998 = (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar7 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar7 = iRam0042d820 + 0x11b40;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iRam0042d99c = (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar7 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar7 = iRam0042d820 + 0x11c80;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  uRam0042d9a4 = 0;
  iRam0042d9a0 = (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar7 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23d04);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23cf8);
  }
  iVar1 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
  iRam0042d9a8 = Arc_GetFileSize(0x1c60,0x1c62,1);
  iRam0042d9a8 = iRam0042d9a8 + iVar3 + 0x5010 + iVar1;
  uRam0042d9b8 = 0x110;
  uRam0042d9bc = 0x110;
  uRam0042d9b0 = 3;
  uRam0042d9ac = 0;
  uRam0042d9b4 = 8;
  iVar3 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x27c54);
  }
  iRam0042d9c0 = iRam0042d81c + 0x80f80 + (iVar3 + 0x7ffU & 0xfffff800);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar8 = iRam0042d820 + 0x11c80;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iRam0042d9c4 = (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar8 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar8 = iRam0042d820 + 0x11dc0;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iRam0042d9c8 = (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar8 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar8 = iRam0042d820 + 0x11f00;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  uRam0042d9d0 = 0;
  iRam0042d9cc = (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar8 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23d04);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23cf8);
  }
  iVar1 = Arc_GetFileSize(0x1c5d,0x1c5f,1);
  iVar2 = Arc_GetFileSize(0x1c60,0x1c62,1);
  iRam0042d9d4 = Arc_GetFileSize(0x1c68,0x1c85,1);
  iRam0042d9d4 = iRam0042d9d4 + iVar2 + iVar3 + 0x5010 + iVar1;
  uRam0042d9d8 = 1;
  uRam0042d9dc = 0;
  uRam0042d9e0 = 0x20;
  uRam0042d9e4 = 0;
  uRam0042d9e8 = 0x110;
  uRam0042d9ec = 0;
  uRam0042d9f0 = 0;
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar9 = iRam0042d820 + 0x11f00;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar8 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  iRam0042d9f4 = (iVar8 + 0x3fU & 0xffffffc0) +
                 (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar9 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar9 = iRam0042d820 + 0x12040;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar8 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  iRam0042d9f8 = (iVar8 + 0x3fU & 0xffffffc0) +
                 (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar9 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar9 = iRam0042d820 + 0x1c940;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar8 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  iRam0042d9fc = (iVar8 + 0x3fU & 0xffffffc0) +
                 (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar9 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = Arc_GetFileSize(0x1c68,0x1c85,1);
  iVar1 = Arc_GetFileSize(0x1c68,0x1c85,1);
  iRam0042da00 = Arc_GetFileSize(0x1c63,0x1c67,1);
  iRam0042da00 = iRam0042da00 + iVar3 + 0x100000 + iVar1;
  uRam0042da04 = 1;
  uRam0042da08 = 0;
  uRam0042da0c = 0x20;
  uRam0042da10 = 0;
  uRam0042da14 = 0x110;
  uRam0042da18 = 0;
  uRam0042da1c = 0;
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar9 = iRam0042d820 + 0x45000;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar8 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  iRam0042da20 = (iVar8 + 0x3fU & 0xffffffc0) +
                 (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar9 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar9 = iRam0042d820 + 0x45140;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar8 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  iRam0042da24 = (iVar8 + 0x3fU & 0xffffffc0) +
                 (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar9 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23744);
  }
  iVar1 = Arc_GetFileSize(0x1c14,0x1c16,1);
  iVar10 = iRam0042d820 + 0x45140;
  iVar2 = Arc_GetFileSize(0x1c17,0x1c19,1);
  iVar4 = Arc_GetFileSize(0x1c1a,0x1c1e,1);
  iVar5 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar6 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar7 = Arc_GetFileSize(0x1c1f,0x1c3c,1);
  iVar8 = Arc_GetFileSize(0x1c3d,0x1c5a,1);
  iVar9 = Arc_GetFileSize(0x1ca7,0x1db2,1);
  iRam0042da28 = (iVar9 + 0x3fU & 0xffffffc0) +
                 (iVar8 + 0x3fU & 0xffffffc0) +
                 (iVar7 + 0x3fU & 0xffffffc0) +
                 (iVar6 + 0x3fU & 0xffffffc0) +
                 (iVar5 + 0x3fU & 0xffffffc0) +
                 (iVar4 + 0x3fU & 0xffffffc0) +
                 (iVar2 + 0x3fU & 0xffffffc0) +
                 iVar10 + (iVar3 + 0x3fU & 0xffffffc0) + (iVar1 + 0x3fU & 0xffffffc0);
  iVar3 = *(int *)(_g_ArcToc + 0x23d04);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_g_ArcToc + 0x23cf8);
  }
  iRam0042da2c = Arc_GetFileSize(0x1c5d,0x1c5f,1);
  iRam0042da2c = iVar3 + 0x5010 + iRam0042da2c;
  uVar11 = 0;
  iVar3 = 0x42d810;
  do {
    uStack_1c = *(undefined4 *)(iVar3 + 0x80);
    uStack_20 = *(undefined4 *)(iVar3 + 0x74);
    uStack_30 = *(undefined4 *)(iVar3 + 0x68);
    uStack_2c = *(undefined4 *)(iVar3 + 0x6c);
    uStack_28 = *(undefined4 *)(iVar3 + 0x70);
    uStack_24 = *(undefined4 *)(iVar3 + 0x7c);
    uStack_14 = *(undefined4 *)(iVar3 + 0x84);
    uStack_10 = *(undefined4 *)(iVar3 + 0x78);
    uStack_18 = uStack_20;
    IopSe_LoadBank(uVar11,&uStack_30);
    IopSe_Command(0x206,uVar11,0x100);
    uVar11 = uVar11 + 1;
    iVar3 = iVar3 + 0x2c;
  } while (uVar11 < 10);
  IopSe_Command(0x202,1);
  uRam0042da34 = 0;
  return;
}

// 0x00157990  size 0xdc
void Snd_Update(void)

{
  long lVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (iRam0042dec0 == 0) {
    if (cRam0042da34 != '\0') {
      IopSe_ClearPending(uRam0042da38);
    }
    IopSe_FlushDma();
    lVar1 = Rpc_GetPendingCount(0x42d824);
    if ((lVar1 != 0) && (iRam0042dafc != 0)) {
      Mem_Copy32(0x42df00,0x42dafc,0xf1);
      iRam0042dafc = 0;
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
  uRam0042dec0 = (int)param_1;
  return;
}

// 0x00157b20  size 0x8c
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
  Mem_Free(uRam0042d81c);
  loadfile_sub_00118b98(uRam0042d820);
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
  int iVar11;
  uint uVar12;
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
  
  uRam0042d810 = (undefined4)param_1;
  uRam0042d86c = 0;
  uRam0042d870 = 0;
  iVar11 = *(int *)(_g_ArcToc + 0x27c60);
  if (iVar11 == 0) {
    iVar11 = *(int *)(_g_ArcToc + 0x27c54);
  }
  uRam0042d814 = param_2;
  uRam0042d818 = param_3;
  iRam0042d81c = Mem_AllocAligned((iVar11 + 0x7ffU & 0xfffff800) + 0x810c0,0x40,param_1);
  iVar11 = *(int *)(_g_ArcToc + 0x23750);
  if (iVar11 == 0) {
    iVar11 = *(int *)(_g_ArcToc + 0x23744);
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
  uRam0042d820 = loadfile_sub_00118a30
                           ((iVar9 + 0x3fU & 0xffffffc0) +
                            (iVar8 + 0x3fU & 0xffffffc0) +
                            (iVar7 + 0x3fU & 0xffffffc0) +
                            (iVar6 + 0x3fU & 0xffffffc0) +
                            (iVar5 + 0x3fU & 0xffffffc0) +
                            (iVar4 + 0x3fU & 0xffffffc0) +
                            (iVar3 + 0x3fU & 0xffffffc0) +
                            (iVar2 + 0x3fU & 0xffffffc0) +
                            (iVar11 + 0x3fU & 0xffffffc0) + 0x45140 + (iVar1 + 0x3fU & 0xffffffc0));
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
  uVar12 = 0;
  uStack_138 = 10;
  uStack_136 = 10;
  iVar11 = 0xfffff;
  do {
    IopSnd_Command(0x107,uVar12 | 0x1d00,iVar11);
    IopSnd_Command(0x10f,uVar12 | 0x1900,0xfffffc);
    IopSnd_Command(0x10f,uVar12 | 0x1b00,0xfffffc);
    IopSnd_Command(0x10b,uVar12,auStack_140);
    IopSnd_Command(0x109,uVar12 | 2,1);
    IopSnd_Command(0x10d,uVar12 | 0xb80,0);
    IopSnd_Command(0x10d,uVar12 | 0xc80,0);
    uVar12 = uVar12 + 1;
    iVar11 = iVar11 + 0x100000;
  } while (uVar12 < 2);
  Snd_LoadBanks();
  Snd_LoadSystemBanks();
  Rpc_SetBlocking(0x42d824,0);
  iRam0042daf8 = iRam0042d81c + 0x140;
  Arc_LoadFileEx(0x1fd0,iRam0042daf8,0,0,0,0);
  File_AbortAll();
  Snd_PlayStreamEx(0,0x1c5c,0x1ca5,0,1);
  uRam0042dafc = 0;
  uRam0042dec0 = 0;
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

