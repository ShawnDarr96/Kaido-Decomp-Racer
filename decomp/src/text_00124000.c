// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00124000 - 0x00128000
#include "ghidra_types.h"

// 0x00124030  size 0xcc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcFlush(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  
  if (_g_sceMcInitShared1 == 0) {
    lVar1 = -100;
  }
  else {
    lVar1 = PollSema(DAT_00309d94);
    if (lVar1 < 0) {
      lVar1 = -200;
    }
    else {
      _g_sceMcGetInfoShared1 = param_1;
      _g_sceMcGetDirShared1 = param_2;
      lVar1 = sceSifCallRpc(0x3782c0,0x10,1,0x378340,0x30,0x379880,4,0x123240);
      if (lVar1 == 0) {
        DAT_00309d90 = 0x10;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar1;
}

// 0x00124100  size 0x11c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcChdir(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (_g_sceMcInitShared1 == 0) {
    lVar1 = -100;
  }
  else {
    lVar2 = PollSema(DAT_00309d94);
    lVar1 = -200;
    if (-1 < lVar2) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(DAT_00309d94);
        lVar1 = -0xd2;
      }
      else {
        maybe_strncpy(0x378384,param_3,0x3ff);
        g_sceMcOpenShared4 = 0;
        _g_sceMcOpenShared3 = 0;
        _g_sceMcOpenShared1 = param_1;
        _g_sceMcOpenShared2 = param_2;
        lVar1 = sceSifCallRpc(0x3782c0,0xf,1,0x378370,0x414,0x379880,4,0x123240);
        if (lVar1 == 0) {
          DAT_00309d90 = 0xf;
        }
        else {
          SignalSema(DAT_00309d94);
        }
      }
    }
  }
  return lVar1;
}

// 0x00124220  size 0xbc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcFormat(undefined4 param_1)

{
  long lVar1;
  
  if (_g_sceMcInitShared1 == 0) {
    lVar1 = -100;
  }
  else {
    lVar1 = PollSema(DAT_00309d94);
    if (lVar1 < 0) {
      lVar1 = -200;
    }
    else {
      _g_sceMcCloseShared1 = param_1;
      lVar1 = sceSifCallRpc(0x3782c0,10,1,0x378340,0x30,0x379880,4,0x123240);
      if (lVar1 == 0) {
        DAT_00309d90 = 10;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar1;
}

// 0x001242e0  size 0x1cc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcReadDirEntry
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  
  if (_g_sceMcInitShared1 == 0) {
    lVar1 = -100;
  }
  else {
    lVar2 = PollSema(DAT_00309d94);
    lVar1 = -200;
    if (-1 < lVar2) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(DAT_00309d94);
        lVar1 = -0xd2;
      }
      else {
        _g_sceMcOpenShared3 = param_5 & 7;
        _s_sceMcReadDirEntry_1 = *param_4;
        _s_sceMcReadDirEntry_2 = param_4[1];
        _s_sceMcReadDirEntry_3 = param_4[2];
        _s_sceMcReadDirEntry_4 = param_4[3];
        _s_sceMcReadDirEntry_5 = param_4[4];
        _s_sceMcReadDirEntry_6 = param_4[5];
        _s_sceMcReadDirEntry_7 = param_4[6];
        _s_sceMcReadDirEntry_8 = param_4[7];
        _g_sceMcSetFileInfoShared1 = &s_sceMcReadDirEntry_1;
        _g_sceMcOpenShared1 = param_1;
        _g_sceMcOpenShared2 = param_2;
        maybe_strncpy(0x378384,param_3,0x3ff);
        g_sceMcOpenShared4 = 0;
        FlushCache(0);
        lVar1 = sceSifCallRpc(0x3782c0,0xe,1,0x378370,0x414,0x379880,4,0x123240);
        if (lVar1 == 0) {
          DAT_00309d90 = 0xe;
        }
        else {
          SignalSema(DAT_00309d94);
        }
      }
    }
  }
  return lVar1;
}

// 0x001244b0  size 0x15c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcGetEntSpace(undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (_g_sceMcInitShared1 == 0) {
    lVar1 = -100;
  }
  else {
    lVar2 = PollSema(DAT_00309d94);
    lVar1 = -200;
    if (-1 < lVar2) {
      if (((param_3 == 0) || (*(char *)param_3 == '\0')) || (param_4 == 0)) {
        SignalSema(DAT_00309d94);
        lVar1 = -0xd2;
      }
      else {
        _g_sceMcOpenShared3 = 0x10;
        _g_sceMcOpenShared1 = param_1;
        _g_sceMcOpenShared2 = param_2;
        maybe_strncpy(0x378384,param_3,0x3ff);
        g_sceMcOpenShared4 = 0;
        maybe_strncpy(0x378320,param_4,0x20);
        _g_sceMcSetFileInfoShared1 = &s_sceMcReadDirEntry_1;
        s_sceMcGetEntSpace_1 = 0;
        FlushCache(0);
        lVar1 = sceSifCallRpc(0x3782c0,0xe,1,0x378370,0x414,0x379880,4,0x123240);
        if (lVar1 == 0) {
          DAT_00309d90 = 0x13;
        }
        else {
          SignalSema(DAT_00309d94);
        }
      }
    }
  }
  return lVar1;
}

// 0x00124610  size 0xcc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcUnformat(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  
  if (_g_sceMcInitShared1 == 0) {
    lVar1 = -100;
  }
  else {
    lVar1 = PollSema(DAT_00309d94);
    if (lVar1 < 0) {
      lVar1 = -200;
    }
    else {
      _g_sceMcGetInfoShared1 = param_1;
      _g_sceMcGetDirShared1 = param_2;
      lVar1 = sceSifCallRpc(0x3782c0,0x11,1,0x378340,0x30,0x379880,4,0x123240);
      if (lVar1 == 0) {
        DAT_00309d90 = 0x11;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar1;
}

// 0x001246e0  size 0x10c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcDelete(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (_g_sceMcInitShared1 == 0) {
    lVar1 = -100;
  }
  else {
    lVar2 = PollSema(DAT_00309d94);
    lVar1 = -200;
    if (-1 < lVar2) {
      if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
        SignalSema(DAT_00309d94);
        lVar1 = -0xd2;
      }
      else {
        _g_sceMcOpenShared1 = param_1;
        _g_sceMcOpenShared2 = param_2;
        maybe_strncpy(0x378384,param_3,0x3ff);
        g_sceMcOpenShared4 = 0;
        lVar1 = sceSifCallRpc(0x3782c0,0x12,1,0x378370,0x414,0x379880,4,0x123240);
        if (lVar1 == 0) {
          DAT_00309d90 = 0x12;
        }
        else {
          SignalSema(DAT_00309d94);
        }
      }
    }
  }
  return lVar1;
}

// 0x001247f0  size 0x80
undefined4 maybe_Midi_Init(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (((param_1 != 0) && (iVar1 = ((int *)param_1)[1], 1 < *(int *)param_1)) && (iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 8);
    if ((iVar2 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
      iVar4 = 0;
      if (0 < iVar2) {
        piVar3 = (int *)(*(int *)(iVar1 + 0xc) + 4);
        do {
          if (((uint *)*piVar3 == (uint *)0x0) || (iVar4 = iVar4 + 1, *(uint *)*piVar3 < 8)) {
            return 0xffffffff;
          }
          piVar3 = piVar3 + 2;
        } while (iVar4 < iVar2);
      }
      return 0;
    }
  }
  return 0xffffffff;
}

// 0x00124870  size 0x8
/* follows Midi_Init; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

undefined8 Midi_Init_Orphan1(void)

{
  return 0;
}

// 0x00124878  size 0x8
/* follows Midi_Init_Orphan1; unreferenced except as noted (was FUN_00124870_Orphan1) */

undefined8 Midi_Init_Orphan2(void)

{
  return 0;
}

// 0x00124880  size 0x94
undefined4 maybe_Midi_GetChannel(long param_1,uint param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  if ((param_1 != 0) && (iVar2 = *(int *)((int)param_1 + 4), param_2 < *(uint *)(iVar2 + 8))) {
    puVar3 = *(uint **)(param_2 * 8 + *(int *)(iVar2 + 0xc) + 4);
    uVar4 = puVar3[1];
    uVar6 = uVar4 + param_4;
    if (uVar6 + 8 <= *puVar3) {
      puVar3[1] = uVar6;
      puVar5 = (undefined1 *)((int)puVar3 + uVar4 + 8);
      while (param_4 = param_4 + -1, param_4 != -1) {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

// 0x00124918  size 0xb0
/* status|ch, data bytes; 23 callers */

undefined8 Midi_SendMessage(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint auStack_20 [4];
  
  uVar1 = param_3 & 0xf0;
  if (uVar1 != 0xb0) {
    if (0xb0 < uVar1) {
      if (uVar1 != 0xd0) {
        if (0xd0 < uVar1) {
          if (uVar1 != 0xe0) {
            return 0xffffffffffffffff;
          }
          goto LAB_001249b0;
        }
        if (uVar1 != 0xc0) {
          return 0xffffffffffffffff;
        }
      }
LAB_001249a8:
      uVar2 = 2;
      goto LAB_001249b4;
    }
    if (uVar1 != 0x90) {
      if (uVar1 < 0x91) {
        if (uVar1 != 0x80) {
          return 0xffffffffffffffff;
        }
        goto LAB_001249a8;
      }
      if (uVar1 != 0xa0) {
        return 0xffffffffffffffff;
      }
    }
  }
LAB_001249b0:
  uVar2 = 3;
LAB_001249b4:
  auStack_20[0] = param_3;
  uVar2 = maybe_Midi_GetChannel(param_1,param_2,auStack_20,uVar2);
  return uVar2;
}

// 0x001249c8  size 0x78
undefined8 maybe_Midi_SendSysEx(undefined8 param_1,undefined8 param_2,char *param_3,uint param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = param_3 + 1;
  if ((*param_3 == -0x10) && (uVar3 = 2, 1 < param_4)) {
    cVar1 = *pcVar4;
    while (pcVar4 = pcVar4 + 1, cVar1 != -9) {
      uVar3 = uVar3 + 1;
      if (param_4 < uVar3) goto LAB_00124a34;
      cVar1 = *pcVar4;
    }
    uVar2 = maybe_Midi_GetChannel();
  }
  else {
LAB_00124a34:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

// 0x00124a40  size 0x48
undefined8 Midi_IsReady(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  
  if ((*param_3 == -7) || (uVar1 = 0xffffffffffffffff, *param_3 == -3)) {
    uVar1 = maybe_Midi_GetChannel();
  }
  return uVar1;
}

// 0x00124a88  size 0x18
/* raise(6) */

long abort(void)

{
  long lVar1;
  long extraout_a0;
  
  raise(6);
  Exit(1);
  lVar1 = extraout_a0;
  if (extraout_a0 < 0) {
    lVar1 = (long)-(int)extraout_a0;
  }
  return lVar1;
}

// 0x00124aa0  size 0x14
int abs(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}

// 0x00124ab8  size 0x28
/* strtol(s, 0, 10) */

undefined4 atoi(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = strtol(param_1,0,10);
  return uVar1;
}

// 0x00124ae0  size 0xb0
undefined4 * maybe__calloc_r(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)_malloc_r(param_1,param_2 * param_3);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (puVar1[-1] & 0xfffffffc) - 4;
    if (uVar3 < 0x25) {
      puVar2 = puVar1;
      if (0x13 < uVar3) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar2 = puVar1 + 2;
        if (0x1b < uVar3) {
          *puVar2 = 0;
          puVar2 = puVar1 + 4;
          puVar1[3] = 0;
          if (0x23 < uVar3) {
            *puVar2 = 0;
            puVar2 = puVar1 + 6;
            puVar1[5] = 0;
          }
        }
      }
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
    }
    else {
      memset(puVar1,0,uVar3);
    }
  }
  return puVar1;
}

// 0x00124b98  size 0x58
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe__close_r(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  _s_RuntimeVar2 = 0;
  lVar1 = maybe__getpid(param_2);
  if ((lVar1 == -1) && (_s_RuntimeVar2 != 0)) {
    *param_1 = _s_RuntimeVar2;
  }
  return;
}

// 0x00124bf0  size 0x228
/* dtoa helper */

int maybe_quorem(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  
  iVar11 = *(int *)((int)param_2 + 0x10);
  iVar15 = (int)param_1;
  iVar13 = 0;
  if (iVar11 <= *(int *)(iVar15 + 0x10)) {
    iVar11 = iVar11 + -1;
    puVar9 = (uint *)((int)param_2 + 0x14);
    puVar12 = (uint *)(iVar15 + 0x14);
    puVar14 = puVar9 + iVar11;
    puVar7 = puVar12 + iVar11;
    uVar1 = *puVar7;
    iVar13 = (int)uVar1 / (int)(*puVar14 + 1);
    if (*puVar14 + 1 == 0) {
      trap(7);
    }
    iVar5 = 0;
    if (iVar13 != 0) {
      uVar3 = 0;
      puVar10 = puVar9;
      puVar8 = puVar12;
      do {
        uVar6 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar2 = *puVar8;
        uVar3 = (uVar6 & 0xffff) * iVar13 + uVar3;
        uVar6 = (uVar6 >> 0x10) * iVar13 + (uVar3 >> 0x10);
        iVar5 = ((uVar2 & 0xffff) - (uVar3 & 0xffff)) + iVar5;
        *(short *)puVar8 = (short)iVar5;
        iVar5 = ((uVar2 >> 0x10) - (uVar6 & 0xffff)) + (iVar5 >> 0x10);
        uVar3 = uVar6 >> 0x10;
        *(short *)((int)puVar8 + 2) = (short)iVar5;
        puVar8 = puVar8 + 1;
        iVar5 = iVar5 >> 0x10;
      } while (puVar10 <= puVar14);
      if (uVar1 == 0) {
        while (puVar7 = puVar7 + -1, puVar12 < puVar7) {
          if (*puVar7 != 0) {
            *(int *)(iVar15 + 0x10) = iVar11;
            goto LAB_00124d24;
          }
          iVar11 = iVar11 + -1;
        }
        *(int *)(iVar15 + 0x10) = iVar11;
      }
    }
LAB_00124d24:
    lVar4 = __mcmp(param_1,param_2);
    if (-1 < lVar4) {
      iVar13 = iVar13 + 1;
      iVar5 = 0;
      puVar7 = puVar12;
      do {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar3 = *puVar7;
        iVar5 = ((uVar3 & 0xffff) - (uVar1 & 0xffff)) + iVar5;
        *(short *)puVar7 = (short)iVar5;
        iVar5 = ((uVar3 >> 0x10) - (uVar1 >> 0x10)) + (iVar5 >> 0x10);
        *(short *)((int)puVar7 + 2) = (short)iVar5;
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 >> 0x10;
      } while (puVar9 <= puVar14);
      puVar7 = puVar12 + iVar11;
      if (*puVar7 != 0) {
        return iVar13;
      }
      while (puVar7 = puVar7 + -1, puVar12 < puVar7) {
        if (*puVar7 != 0) {
          *(int *)(iVar15 + 0x10) = iVar11;
          goto LAB_00124df4;
        }
        iVar11 = iVar11 + -1;
      }
      *(int *)(iVar15 + 0x10) = iVar11;
    }
  }
LAB_00124df4:
  return iVar13;
}

// 0x00124e20  size 0x11cc
/* "Infinity" */

char * _dtoa_r(undefined8 param_1,ulong param_2,uint param_3,uint param_4,int *param_5,
              undefined4 *param_6,int *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  char cVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  int iStack_b0;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  char *pcStack_5c;
  
  iVar16 = (int)param_1;
  iVar13 = *(int *)(iVar16 + 0x40);
  uStack_a8 = param_3;
  uStack_a4 = param_4;
  piStack_a0 = param_5;
  piStack_9c = param_7;
  if (iVar13 != 0) {
    *(undefined4 *)(iVar13 + 4) = *(undefined4 *)(iVar16 + 0x44);
    *(int *)(iVar13 + 8) = 1 << (*(uint *)(iVar16 + 0x44) & 0x1f);
    _Bfree(param_1,iVar13);
    *(undefined4 *)(iVar16 + 0x40) = 0;
  }
  uVar11 = (ulong)(int)(param_2 >> 0x20);
  if ((long)uVar11 < 0) {
    *param_6 = 1;
    param_2 = param_2 & 0xffffffff | (uVar11 & 0x7fffffff) << 0x20;
  }
  else {
    *param_6 = 0;
  }
  uVar12 = (uint)(param_2 >> 0x20);
  if ((uVar12 & 0x7ff00000) == 0x7ff00000) {
    *piStack_a0 = 9999;
    if ((param_2 & 0xfffffffffffff) == 0) {
      pcVar20 = s_Infinity_00360200;
    }
    else {
      pcVar20 = (char *)0x360210;
    }
    if (piStack_9c != (int *)0x0) {
      pcVar21 = pcVar20 + 8;
      if (pcVar20[3] == '\0') {
        pcVar21 = pcVar20 + 3;
      }
      *piStack_9c = (int)pcVar21;
    }
    return pcVar20;
  }
  lVar4 = __cmpdf2(param_2,0);
  if (lVar4 == 0) {
    *piStack_a0 = 1;
    if (piStack_9c == (int *)0x0) {
      return (char *)0x360218;
    }
    *piStack_9c = (int)&DAT_00360219;
    return (char *)0x360218;
  }
  uStack_6c = maybe___d2b(param_1,param_2,&iStack_b0,&iStack_ac);
  iVar13 = iStack_ac;
  uVar17 = uVar12 >> 0x14 & 0x7ff;
  if (uVar17 == 0) {
    iVar9 = iStack_ac + iStack_b0;
    iVar18 = iVar9 + 0x432;
    if (iVar18 < 0x21) {
      uVar12 = (uint)param_2 << (-iVar18 & 0x1fU);
    }
    else {
      uVar12 = uVar12 << (-iVar18 & 0x1fU) | (uint)param_2 >> (iVar9 + 0x412U & 0x1f);
    }
    uVar11 = __floatsidf(uVar12);
    if ((int)uVar12 < 0) {
      uVar11 = __adddf3(uVar11,0x41f0000000000000);
    }
    iStack_70 = 1;
    uVar17 = iVar9 - 1;
    uVar11 = uVar11 & 0xffffffff | (long)((int)(uVar11 >> 0x20) + -0x1f00000) << 0x20;
  }
  else {
    uVar17 = uVar17 - 0x3ff;
    iStack_70 = 0;
    uVar11 = param_2 & 0xffffffff |
             ((long)(param_2 & 0xffffffff | ((long)param_2 >> 0x20 & 0xfffffU) << 0x20) >> 0x20 |
             0x3ff00000U) << 0x20;
  }
  uVar5 = __subdf3(uVar11,0x3ff8000000000000);
  uVar5 = __muldf3(uVar5,DAT_00360220);
  uVar5 = __adddf3(uVar5,DAT_00360228);
  uVar6 = __floatsidf(uVar17);
  uVar6 = __muldf3(uVar6,DAT_00360230);
  uVar5 = __adddf3(uVar5,uVar6);
  uVar12 = __fixdfsi(uVar5);
  lVar4 = __cmpdf2(uVar5,0);
  if (lVar4 < 0) {
    uVar6 = __floatsidf(uVar12);
    lVar4 = __cmpdf2(uVar5,uVar6);
    if (lVar4 != 0) {
      uVar12 = uVar12 - 1;
    }
  }
  iStack_80 = 1;
  if (uVar12 < 0x17) {
    iStack_80 = 0;
    lVar4 = __cmpdf2(param_2,*(undefined8 *)(&DAT_003602b8 + uVar12 * 8));
    if (lVar4 < 0) {
      uVar12 = uVar12 - 1;
    }
  }
  iStack_78 = (iVar13 - uVar17) + -1;
  if (iStack_78 < 0) {
    iStack_98 = -iStack_78;
    iStack_78 = 0;
  }
  else {
    iStack_98 = 0;
  }
  if ((int)uVar12 < 0) {
    iStack_94 = -uVar12;
    iStack_98 = iStack_98 - uVar12;
    uStack_74 = 0;
  }
  else {
    iStack_94 = 0;
    iStack_78 = iStack_78 + uVar12;
    uStack_74 = uVar12;
  }
  if (9 < uStack_a8) {
    uStack_a8 = 0;
  }
  bVar1 = 5 < (int)uStack_a8;
  if (bVar1) {
    uStack_a8 = uStack_a8 - 4;
  }
  iStack_7c = 1;
  uStack_88 = 0xffffffff;
  uStack_90 = 0xffffffff;
  if (uStack_a8 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(uStack_a8) {
    default:
      uVar17 = 0x12;
      uStack_a4 = 0;
      break;
    case 2:
      iStack_7c = 0;
    case 4:
      uVar17 = 1;
      if (0 < (int)uStack_a4) {
        uVar17 = uStack_a4;
      }
      uStack_a4 = uVar17;
      uStack_90 = uVar17;
      uStack_88 = uVar17;
      break;
    case 3:
      iStack_7c = 0;
    case 5:
      uStack_88 = uStack_a4 + uVar12;
      uStack_90 = uStack_88 + 1;
      uVar17 = uStack_90;
      if ((int)uStack_90 < 1) {
        uVar17 = 1;
      }
    }
  }
  *(undefined4 *)(iVar16 + 0x44) = 0;
  iVar13 = 4;
  if (0x17 < uVar17) {
    iVar9 = 0;
    do {
      iVar13 = iVar13 * 2;
      iVar9 = iVar9 + 1;
    } while (iVar13 + 0x14U <= uVar17);
    *(int *)(iVar16 + 0x44) = iVar9;
  }
  pcVar20 = (char *)_Balloc(param_1,*(undefined4 *)(iVar16 + 0x44));
  *(char **)(iVar16 + 0x40) = pcVar20;
  pcStack_5c = pcVar20;
  if ((0xe < uStack_90) || (bVar1)) {
LAB_0012574c:
    pcVar20 = pcStack_5c;
    if ((iStack_b0 < 0) || (0xe < (int)uVar12)) {
      bVar1 = (int)uStack_a8 < 2;
      iStack_68 = 0;
      iStack_64 = 0;
      iVar13 = iStack_98;
      iVar16 = iStack_94;
      if (iStack_7c != 0) {
        if (bVar1) {
          uVar17 = iStack_b0 + 0x433;
          if (iStack_70 == 0) {
            uVar17 = 0x36 - iStack_ac;
          }
        }
        else {
          iVar9 = uStack_90 - 1;
          iVar16 = iStack_94 - iVar9;
          if (iStack_94 < iVar9) {
            iVar16 = 0;
            iVar9 = iVar9 - iStack_94;
            iStack_94 = iStack_94 + iVar9;
            uStack_74 = uStack_74 + iVar9;
          }
          uVar17 = uStack_90;
          if ((int)uStack_90 < 0) {
            uVar17 = 0;
            iVar13 = iStack_98 - uStack_90;
          }
        }
        iStack_78 = iStack_78 + uVar17;
        iStack_64 = __i2b(param_1,1);
        iStack_98 = iStack_98 + uVar17;
      }
      if ((0 < iVar13) && (0 < iStack_78)) {
        iVar9 = iStack_78;
        if (iVar13 < iStack_78) {
          iVar9 = iVar13;
        }
        iStack_78 = iStack_78 - iVar9;
        iVar13 = iVar13 - iVar9;
        iStack_98 = iStack_98 - iVar9;
      }
      if (0 < iStack_94) {
        if (iStack_7c == 0) {
          uStack_6c = __pow5mult(param_1,uStack_6c,iStack_94);
        }
        else {
          if (0 < iVar16) {
            uVar5 = __pow5mult(param_1,iStack_64,iVar16);
            iStack_64 = (int)uVar5;
            uVar3 = __multiply(param_1,uVar5,uStack_6c);
            _Bfree(param_1,uStack_6c);
            uStack_6c = uVar3;
          }
          if (iStack_94 - iVar16 != 0) {
            uStack_6c = __pow5mult(param_1,uStack_6c,iStack_94 - iVar16);
          }
        }
      }
      uVar5 = __i2b(param_1,1);
      iStack_60 = (int)uVar5;
      if (0 < (int)uStack_74) {
        iStack_60 = __pow5mult(param_1,uVar5,uStack_74);
      }
      bVar2 = false;
      if (((bVar1) && ((param_2 & 0xfffffffffffff) == 0)) &&
         (((long)param_2 >> 0x20 & 0x7ff00000U) != 0)) {
        bVar2 = true;
        iStack_98 = iStack_98 + 1;
        iStack_78 = iStack_78 + 1;
      }
      if (uStack_74 == 0) {
        uVar17 = iStack_78 + 1;
      }
      else {
        iVar16 = __hi0bits(*(undefined4 *)(*(int *)(iStack_60 + 0x10) * 4 + iStack_60 + 0x10));
        uVar17 = iStack_78 - iVar16;
      }
      iVar16 = 0;
      if ((uVar17 & 0x1f) != 0) {
        iVar16 = 0x20 - (uVar17 & 0x1f);
      }
      if (iVar16 < 5) {
        if (iVar16 < 4) {
          iVar16 = iVar16 + 0x1c;
          goto LAB_00125b88;
        }
      }
      else {
        iVar16 = iVar16 + -4;
LAB_00125b88:
        iStack_78 = iStack_78 + iVar16;
        iStack_98 = iStack_98 + iVar16;
        iVar13 = iVar13 + iVar16;
      }
      if (0 < iStack_98) {
        uStack_6c = __lshift(param_1,uStack_6c,iStack_98);
      }
      if (0 < iStack_78) {
        iStack_60 = __lshift(param_1,iStack_60,iStack_78);
      }
      if ((iStack_80 != 0) && (lVar4 = __mcmp(uStack_6c,iStack_60), lVar4 < 0)) {
        uStack_6c = __multadd(param_1,uStack_6c,10,0);
        uVar12 = uVar12 - 1;
        if (iStack_7c != 0) {
          iStack_64 = __multadd(param_1,iStack_64,10,0);
        }
        uStack_90 = uStack_88;
      }
      if ((0 < (int)uStack_90) || ((int)uStack_a8 < 3)) {
        iVar16 = 1;
        if (iStack_7c != 0) {
          if (0 < iVar13) {
            iStack_64 = __lshift(param_1,iStack_64,iVar13);
          }
          iStack_68 = iStack_64;
          if (bVar2) {
            iStack_64 = _Balloc(param_1,*(undefined4 *)(iStack_64 + 4));
            memcpy(iStack_64 + 0xc,iStack_68 + 0xc,*(int *)(iStack_68 + 0x10) * 4 + 8);
            iStack_64 = __lshift(param_1,iStack_64,1);
          }
          uVar17 = 1;
          do {
            iVar13 = maybe_quorem(uStack_6c,iStack_60);
            uVar19 = iVar13 + 0x30;
            lVar4 = __mcmp(uStack_6c,iStack_68);
            uVar5 = __mdiff(param_1,iStack_60,iStack_64);
            lVar14 = 1;
            if (*(int *)((int)uVar5 + 0xc) == 0) {
              lVar14 = __mcmp(uStack_6c,uVar5);
            }
            _Bfree(param_1,uVar5);
            cVar10 = (char)uVar19;
            if (((lVar14 == 0) && (uStack_a8 == 0)) && ((param_2 & 1) == 0)) {
              if (uVar19 != 0x39) {
                *pcVar20 = cVar10 + (0 < lVar4);
                goto LAB_00125fe8;
              }
LAB_00125ec0:
              *pcVar20 = '9';
              pcVar20 = pcVar20 + 1;
              goto LAB_00125f90;
            }
            if ((lVar4 < 0) || (((lVar4 == 0 && (uStack_a8 == 0)) && ((param_2 & 1) == 0)))) {
              if (lVar14 < 1) {
                *pcVar20 = cVar10;
                goto LAB_00125fe8;
              }
              uVar5 = __lshift(param_1,uStack_6c,1);
              uStack_6c = (undefined4)uVar5;
              lVar4 = __mcmp(uVar5,iStack_60);
              if (lVar4 < 1) {
                if (lVar4 != 0) {
                  *pcVar20 = cVar10;
                  goto LAB_00125fe8;
                }
                if ((uVar19 & 1) == 0) {
                  *pcVar20 = cVar10;
                  goto LAB_00125fe8;
                }
              }
              if (iVar13 + 0x31 == 0x3a) goto LAB_00125ec0;
              *pcVar20 = (char)(iVar13 + 0x31);
              goto LAB_00125fe8;
            }
            if (0 < lVar14) {
              if (uVar19 == 0x39) goto LAB_00125ec0;
              *pcVar20 = (char)iVar13 + '1';
              goto LAB_00125fe8;
            }
            *pcVar20 = cVar10;
            pcVar20 = pcVar20 + 1;
            if (uVar17 == uStack_90) goto LAB_00125f34;
            uStack_6c = __multadd(param_1,uStack_6c,10,0);
            if (iStack_68 == iStack_64) {
              iStack_68 = __multadd(param_1,iStack_64,10,0);
              iStack_64 = iStack_68;
            }
            else {
              iStack_68 = __multadd(param_1,iStack_68,10,0);
              iStack_64 = __multadd(param_1,iStack_64,10,0);
            }
            uVar17 = uVar17 + 1;
          } while( true );
        }
        while( true ) {
          iVar13 = maybe_quorem(uStack_6c,iStack_60);
          uVar19 = iVar13 + 0x30;
          *pcVar20 = (char)uVar19;
          pcVar20 = pcVar20 + 1;
          if ((int)uStack_90 <= iVar16) break;
          uStack_6c = __multadd(param_1,uStack_6c,10,0);
          iVar16 = iVar16 + 1;
        }
LAB_00125f34:
        uVar5 = __lshift(param_1,uStack_6c,1);
        uStack_6c = (undefined4)uVar5;
        lVar4 = __mcmp(uVar5,iStack_60);
        if (lVar4 < 1) {
          if (lVar4 == 0) {
            if ((uVar19 & 1) != 0) goto LAB_00125f90;
            pcVar20 = pcVar20 + -1;
          }
          else {
            pcVar20 = pcVar20 + -1;
          }
          for (; *pcVar20 == '0'; pcVar20 = pcVar20 + -1) {
          }
LAB_00125fe8:
          pcVar20 = pcVar20 + 1;
        }
        else {
LAB_00125f90:
          do {
            pcVar20 = pcVar20 + -1;
            if (*pcVar20 != '9') {
              *pcVar20 = *pcVar20 + '\x01';
              goto LAB_00125fe8;
            }
          } while (pcVar20 != pcStack_5c);
          uVar12 = uVar12 + 1;
          *pcStack_5c = '1';
          pcVar20 = pcStack_5c + 1;
        }
        goto LAB_00125fec;
      }
      if (-1 < (int)uStack_90) {
        uVar5 = __multadd(param_1,iStack_60,5,0);
        iStack_60 = (int)uVar5;
        lVar4 = __mcmp(uStack_6c,uVar5);
        if (0 < lVar4) goto LAB_00125c88;
      }
    }
    else {
      uVar5 = *(undefined8 *)(&DAT_003602b8 + uVar12 * 8);
      uVar17 = 1;
      if ((-1 < (int)uStack_a4) || (0 < (int)uStack_90)) {
        do {
          uVar6 = __divdf3(param_2,uVar5);
          uVar11 = __fixdfsi(uVar6);
          uVar6 = __floatsidf(uVar11);
          uVar6 = __muldf3(uVar6,uVar5);
          uVar6 = __subdf3(param_2,uVar6);
          *pcVar20 = (char)uVar11 + '0';
          pcVar20 = pcVar20 + 1;
          if (uVar17 == uStack_90) {
            uVar6 = __adddf3(uVar6);
            lVar4 = __cmpdf2(uVar6,uVar5);
            pcVar21 = pcVar20;
            if ((0 < lVar4) || ((lVar4 = __cmpdf2(uVar6,uVar5), lVar4 == 0 && ((uVar11 & 1) != 0))))
            goto LAB_00125880;
            break;
          }
          param_2 = __muldf3(0x4024000000000000);
          lVar4 = __cmpdf2(param_2,0);
          uVar17 = uVar17 + 1;
        } while (lVar4 != 0);
        goto LAB_0012602c;
      }
      iStack_64 = 0;
      iStack_60 = 0;
      if (-1 < (int)uStack_90) {
        uVar5 = __muldf3(uVar5,0x4014000000000000);
        lVar4 = __cmpdf2(param_2,uVar5);
        if (0 < lVar4) goto LAB_00125c88;
      }
    }
LAB_00125c7c:
    uVar12 = ~uStack_a4;
  }
  else {
    uStack_8c = uStack_90;
    iVar13 = 2;
    uStack_84 = uVar12;
    if ((int)uVar12 < 1) {
      uVar17 = -uVar12;
      uVar11 = param_2;
      if (uVar17 != 0) {
        uVar19 = (int)uVar17 >> 4;
        uVar11 = __muldf3(*(undefined8 *)(&DAT_003602b8 + (uVar17 & 0xf) * 8),param_2);
        if (uVar19 != 0) {
          puVar15 = (undefined8 *)0x360380;
          do {
            uVar17 = uVar19 & 1;
            uVar19 = (int)uVar19 >> 1;
            if (uVar17 != 0) {
              iVar13 = iVar13 + 1;
              uVar11 = __muldf3(*puVar15,uVar11);
            }
            puVar15 = puVar15 + 1;
          } while (uVar19 != 0);
        }
      }
    }
    else {
      uVar17 = (int)uVar12 >> 4;
      uVar5 = *(undefined8 *)(&DAT_003602b8 + (uVar12 & 0xf) * 8);
      uVar11 = param_2;
      if ((uVar17 & 0x10) != 0) {
        uVar17 = uVar17 & 0xf;
        iVar13 = 3;
        uVar11 = __divdf3(param_2,DAT_003603a0);
      }
      if (uVar17 != 0) {
        puVar15 = (undefined8 *)0x360380;
        do {
          uVar19 = uVar17 & 1;
          uVar17 = (int)uVar17 >> 1;
          if (uVar19 != 0) {
            iVar13 = iVar13 + 1;
            uVar5 = __muldf3(uVar5,*puVar15);
          }
          puVar15 = puVar15 + 1;
        } while (uVar17 != 0);
      }
      uVar11 = __divdf3(uVar11,uVar5);
    }
    if (((iStack_80 != 0) && (lVar4 = __cmpdf2(uVar11,0x3ff0000000000000), lVar4 < 0)) &&
       (0 < (int)uStack_90)) {
      if (0 < (int)uStack_88) {
        uVar12 = uVar12 - 1;
        uStack_90 = uStack_88;
        iVar13 = iVar13 + 1;
        uVar11 = __muldf3(0x4024000000000000,uVar11);
        goto LAB_00125470;
      }
LAB_00125738:
      uStack_90 = uStack_8c;
      uVar12 = uStack_84;
      goto LAB_0012574c;
    }
LAB_00125470:
    uVar5 = __floatsidf(iVar13);
    uVar5 = __muldf3(uVar5,uVar11);
    uVar7 = __adddf3(uVar5,0x401c000000000000);
    uVar7 = uVar7 & 0xffffffff | (long)((int)(uVar7 >> 0x20) + -0x3400000) << 0x20;
    if (uStack_90 != 0) {
      if (iStack_7c != 0) {
        iVar13 = 0;
        uVar5 = __divdf3(0x3fe0000000000000,*(undefined8 *)(&DAT_003602b0 + uStack_90 * 8));
        uVar5 = __subdf3(uVar5,uVar7);
        while( true ) {
          uVar6 = __fixdfsi(uVar11);
          uVar8 = __floatsidf(uVar6);
          uVar8 = __subdf3(uVar11,uVar8);
          *pcVar20 = (char)uVar6 + '0';
          pcVar20 = pcVar20 + 1;
          lVar4 = __cmpdf2(uVar8,uVar5);
          if (lVar4 < 0) break;
          uVar6 = __subdf3(0x3ff0000000000000,uVar8);
          lVar4 = __cmpdf2(uVar6,uVar5);
          pcVar21 = pcVar20;
          if (lVar4 < 0) goto LAB_00125880;
          iVar13 = iVar13 + 1;
          if ((int)uStack_90 <= iVar13) goto LAB_00125738;
          uVar5 = __muldf3(0x4024000000000000,uVar5);
          uVar11 = __muldf3(0x4024000000000000,uVar8);
        }
        goto LAB_0012602c;
      }
      uVar17 = 1;
      uVar5 = __muldf3(*(undefined8 *)(&DAT_003602b0 + uStack_90 * 8),uVar7);
      while( true ) {
        uVar6 = __fixdfsi(uVar11);
        uVar8 = __floatsidf(uVar6);
        uVar8 = __subdf3(uVar11,uVar8);
        *pcVar20 = (char)uVar6 + '0';
        if (uVar17 == uStack_90) break;
        uVar17 = uVar17 + 1;
        uVar11 = __muldf3(0x4024000000000000,uVar8);
        pcVar20 = pcVar20 + 1;
      }
      uVar6 = __adddf3(0x3fe0000000000000,uVar5);
      lVar4 = __cmpdf2(uVar8,uVar6);
      pcVar21 = pcVar20 + 1;
      if (0 < lVar4) {
LAB_00125880:
        do {
          pcVar20 = pcVar21;
          pcVar21 = pcVar20 + -1;
          cVar10 = *pcVar21;
          if (*pcVar21 != '9') goto LAB_001258b0;
        } while (pcVar21 != pcStack_5c);
        *pcStack_5c = '0';
        cVar10 = '0';
        uVar12 = uVar12 + 1;
LAB_001258b0:
        *pcVar21 = cVar10 + '\x01';
        goto LAB_0012602c;
      }
      uVar5 = __subdf3(0x3fe0000000000000,uVar5);
      lVar4 = __cmpdf2(uVar8,uVar5);
      if (lVar4 < 0) {
        for (; *pcVar20 == '0'; pcVar20 = pcVar20 + -1) {
        }
        pcVar20 = pcVar20 + 1;
        goto LAB_0012602c;
      }
      goto LAB_00125738;
    }
    iStack_64 = 0;
    iStack_60 = 0;
    uVar5 = __subdf3(uVar11,0x4014000000000000);
    lVar4 = __cmpdf2(uVar5,uVar7);
    if (lVar4 < 1) {
      uVar6 = __subdf3(0,uVar7);
      lVar4 = __cmpdf2(uVar5,uVar6);
      if (-1 < lVar4) goto LAB_00125738;
      goto LAB_00125c7c;
    }
LAB_00125c88:
    uVar12 = uVar12 + 1;
    pcVar20 = pcStack_5c + 1;
    *pcStack_5c = '1';
  }
LAB_00125fec:
  _Bfree(param_1,iStack_60);
  if (iStack_64 != 0) {
    if ((iStack_68 != 0) && (iStack_68 != iStack_64)) {
      _Bfree(param_1,iStack_68);
    }
    _Bfree(param_1,iStack_64);
  }
LAB_0012602c:
  _Bfree(param_1,uStack_6c);
  *pcVar20 = '\0';
  *piStack_a0 = uVar12 + 1;
  if (piStack_9c != (int *)0x0) {
    *piStack_9c = (int)pcVar20;
  }
  return pcStack_5c;
}

// 0x00126038  size 0x4c
/* follows _dtoa_r; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

undefined4 _dtoa_r_Orphan1(void)

{
  undefined4 unaff_s5_lo;
  int unaff_s8_lo;
  int *piStack00000010;
  undefined4 *puStack00000014;
  undefined8 in_stack_00000050;
  
  *piStack00000010 = unaff_s8_lo + 1;
  if (puStack00000014 != (undefined4 *)0x0) {
    *puStack00000014 = unaff_s5_lo;
  }
  return in_stack_00000050._4_4_;
}

// 0x00126088  size 0xc
undefined * __errno(void)

{
  return PTR_DAT_0030a090;
}

// 0x00126098  size 0xac
void maybe_exit(undefined8 param_1)

{
  code *pcVar1;
  int iVar3;
  int iVar2;
  int *piVar4;
  int *piVar5;
  
  piVar5 = *(int **)(PTR_DAT_0030a090 + 0x148);
  if (piVar5 != (int *)0x0) {
    iVar3 = piVar5[1];
    while( true ) {
      iVar2 = iVar3 + -1;
      if (-1 < iVar2) {
        piVar4 = piVar5 + iVar3 + 1;
        pcVar1 = (code *)*piVar4;
        while( true ) {
          piVar4 = piVar4 + -1;
          iVar2 = iVar2 + -1;
          (*pcVar1)();
          if (iVar2 < 0) break;
          pcVar1 = (code *)*piVar4;
        }
      }
      piVar5 = (int *)*piVar5;
      if (piVar5 == (int *)0x0) break;
      iVar3 = piVar5[1];
    }
  }
  if (*(code **)(PTR_DAT_0030a090 + 0x3c) != (code *)0x0) {
    (**(code **)(PTR_DAT_0030a090 + 0x3c))();
  }
  Exit(param_1);
  return;
}

// 0x00126148  size 0x104
undefined8 maybe__fflush_r(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  puVar5 = PTR_DAT_0030a090;
  if (param_1 == 0) {
    uVar2 = maybe__fwalk(PTR_DAT_0030a090,0x126148);
    return uVar2;
  }
  piVar8 = (int *)param_1;
  puVar1 = (undefined *)piVar8[0x15];
  if (puVar1 == (undefined *)0x0) {
    piVar8[0x15] = (int)PTR_DAT_0030a090;
    iVar9 = *(int *)(puVar5 + 0x38);
  }
  else {
    iVar9 = *(int *)(puVar1 + 0x38);
    puVar5 = puVar1;
  }
  if (iVar9 == 0) {
    __sinit(puVar5);
    uVar4 = *(ushort *)(piVar8 + 3);
  }
  else {
    uVar4 = *(ushort *)(piVar8 + 3);
  }
  if ((uVar4 & 8) != 0) {
    iVar9 = piVar8[4];
    iVar6 = 0;
    if (iVar9 != 0) {
      iVar7 = *piVar8;
      *piVar8 = iVar9;
      iVar7 = iVar7 - iVar9;
      if ((uVar4 & 3) == 0) {
        iVar6 = piVar8[5];
      }
      piVar8[2] = iVar6;
      while (0 < iVar7) {
        lVar3 = (*(code *)piVar8[9])(piVar8[7],iVar9,iVar7);
        iVar7 = iVar7 - (int)lVar3;
        if (lVar3 < 1) {
          *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 0x40;
          return 0xffffffffffffffff;
        }
        iVar9 = iVar9 + (int)lVar3;
      }
    }
  }
  return 0;
}

// 0x00126254  size 0x8
/* follows _fflush_r; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

void _fflush_r_Orphan1(void)

{
  return;
}

// 0x00126260  size 0x5c
void maybe_std_FILE_init(undefined4 *param_1,undefined2 param_2,undefined2 param_3,
                        undefined4 param_4)

{
  param_1[0x15] = param_4;
  *(undefined2 *)(param_1 + 3) = param_2;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[8] = __sread;
  param_1[9] = __swrite;
  param_1[10] = __sseek;
  param_1[0xb] = __sclose;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_1;
  return;
}

// 0x001262c0  size 0x78
long maybe___sfmoreglue(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = _malloc_r(param_1,param_2 * 0x58 + 0xc);
  puVar2 = (undefined4 *)lVar1;
  if (lVar1 != 0) {
    puVar2[1] = param_2;
    *puVar2 = 0;
    puVar2[2] = puVar2 + 3;
    memset(puVar2 + 3,0,param_2 * 0x58);
  }
  return lVar1;
}

// 0x00126338  size 0xf8
undefined4 * maybe___sfp(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  puVar3 = puVar4 + 0x76;
  if (puVar4[0xe] == 0) {
    __sinit();
  }
  while( true ) {
    while( true ) {
      iVar1 = puVar3[1];
      puVar2 = (undefined4 *)puVar3[2];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        if (*(short *)(puVar2 + 3) == 0) {
          *(undefined2 *)((int)puVar2 + 0xe) = 0xffff;
          puVar2[0x15] = puVar4;
          *puVar2 = 0;
          puVar2[2] = 0;
          puVar2[1] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0x11] = 0;
          puVar2[0x12] = 0;
          *(undefined2 *)(puVar2 + 3) = 1;
          return puVar2;
        }
        puVar2 = puVar2 + 0x16;
      }
      if ((undefined4 *)*puVar3 == (undefined4 *)0x0) break;
      puVar3 = (undefined4 *)*puVar3;
    }
    puVar2 = (undefined4 *)maybe___sfmoreglue(param_1,4);
    *puVar3 = puVar2;
    if (puVar2 == (undefined4 *)0x0) break;
    puVar3 = puVar2;
  }
  *puVar4 = 0xc;
  return (undefined4 *)0x0;
}

// 0x00126430  size 0x1c
/* N153 confirmed: _fwalk(ptr, fclose) */

void _cleanup_r(undefined8 param_1)

{
  maybe__fwalk(param_1,0x126148);
  return;
}

// 0x00126470  size 0x8c
/* newlib stdio init; 9 callers */

void __sinit(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(code **)(iVar1 + 0x3c) = _cleanup_r;
  *(undefined4 *)(iVar1 + 0x38) = 1;
  maybe_std_FILE_init(iVar1 + 0x1e4,4,0,param_1);
  maybe_std_FILE_init(iVar1 + 0x23c,9,1,param_1);
  maybe_std_FILE_init(iVar1 + 0x294,10,2,param_1);
  *(undefined4 *)(iVar1 + 0x1d8) = 0;
  *(int *)(iVar1 + 0x1e0) = iVar1 + 0x1e4;
  *(undefined4 *)(iVar1 + 0x1dc) = 3;
  return;
}

// 0x00126500  size 0x2dc
/* WARNING: Removing unreachable block (ram,0x00126760) */

void _free_r(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  
  if (param_2 == 0) {
    return;
  }
  __malloc_lock();
  piVar9 = (int *)((int)param_2 + -8);
  uVar4 = *(uint *)((int)param_2 + -4);
  uVar8 = uVar4 & 0xfffffffe;
  puVar5 = (undefined *)((int)piVar9 + uVar8);
  uVar6 = *(uint *)(puVar5 + 4) & 0xfffffffc;
  if (puVar5 == PTR_DAT_0030a0a8) {
    uVar8 = uVar8 + uVar6;
    PTR_DAT_0030a0a8 = (undefined *)piVar9;
    if ((uVar4 & 1) == 0) {
      PTR_DAT_0030a0a8 = (undefined *)((int)piVar9 - *piVar9);
      uVar8 = uVar8 + *piVar9;
      iVar1 = *(int *)((int)PTR_DAT_0030a0a8 + 0xc);
      iVar2 = *(int *)((int)PTR_DAT_0030a0a8 + 8);
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar1 + 8) = iVar2;
    }
    *(uint *)((int)PTR_DAT_0030a0a8 + 4) = uVar8 | 1;
    if (DAT_0030a4a8 <= uVar8) {
      maybe__malloc_trim_r(param_1,DAT_0030a4b0);
    }
    __malloc_unlock(param_1);
    return;
  }
  *(uint *)(puVar5 + 4) = uVar6;
  bVar10 = false;
  if ((uVar4 & 1) == 0) {
    iVar1 = *piVar9;
    piVar9 = (int *)((int)piVar9 - iVar1);
    uVar8 = uVar8 + iVar1;
    ppuVar3 = (undefined **)piVar9[2];
    if (ppuVar3 == &PTR_DAT_0030a0a8) {
      bVar10 = true;
    }
    else {
      puVar7 = (undefined *)piVar9[3];
      ppuVar3[3] = puVar7;
      *(undefined ***)(puVar7 + 8) = ppuVar3;
    }
  }
  if ((*(uint *)(puVar5 + uVar6 + 4) & 1) == 0) {
    uVar8 = uVar8 + uVar6;
    if (bVar10) {
      ppuVar3 = *(undefined ***)(puVar5 + 8);
      puVar5 = *(undefined **)(puVar5 + 0xc);
    }
    else {
      ppuVar3 = *(undefined ***)(puVar5 + 8);
      if (ppuVar3 == &PTR_DAT_0030a0a8) {
        bVar10 = true;
        PTR_PTR_0030a0b0 = (undefined *)piVar9;
        PTR_PTR_0030a0b4 = (undefined *)piVar9;
        piVar9[2] = (int)&PTR_DAT_0030a0a8;
        piVar9[3] = (int)&PTR_DAT_0030a0a8;
        goto LAB_00126670;
      }
      puVar5 = *(undefined **)(puVar5 + 0xc);
    }
    ppuVar3[3] = puVar5;
    *(undefined ***)(puVar5 + 8) = ppuVar3;
  }
LAB_00126670:
  piVar9[1] = uVar8 | 1;
  *(uint *)((int)piVar9 + uVar8) = uVar8;
  if (!bVar10) {
    if (uVar8 < 0x200) {
      puVar7 = &DAT_0030a0a0 + (uVar8 & 0xfffffff8);
      puVar5 = *(undefined **)((int)&PTR_DAT_0030a0a8 + (uVar8 & 0xfffffff8));
      DAT_0030a0a4 = DAT_0030a0a4 | (uint)(1L << (long)(int)(uVar8 >> 5));
      piVar9[3] = (int)puVar7;
      piVar9[2] = (int)puVar5;
    }
    else {
      uVar4 = uVar8 >> 9;
      uVar6 = uVar8 >> 3;
      if (uVar4 != 0) {
        if (uVar4 < 5) {
          uVar6 = (uVar8 >> 6) + 0x38;
        }
        else {
          uVar6 = uVar4 + 0x5b;
          if (0x14 < uVar4) {
            if (uVar4 < 0x55) {
              uVar6 = (uVar8 >> 0xc) + 0x6e;
            }
            else if (uVar4 < 0x155) {
              uVar6 = (uVar8 >> 0xf) + 0x77;
            }
            else if (uVar4 < 0x555) {
              uVar6 = (uVar8 >> 0x12) + 0x7c;
            }
            else {
              uVar6 = 0x7e;
            }
          }
        }
      }
      puVar7 = &DAT_0030a0a0 + uVar6 * 8;
      puVar5 = (&PTR_DAT_0030a0a8)[uVar6 * 2];
      if (puVar5 == puVar7) {
        DAT_0030a0a4 = DAT_0030a0a4 | (uint)(1L << (long)((int)uVar6 >> 2));
      }
      else {
        uVar4 = *(uint *)(puVar5 + 4);
        while (uVar8 < (uVar4 & 0xfffffffc)) {
          puVar5 = *(undefined **)(puVar5 + 8);
          if (puVar5 == puVar7) {
            puVar7 = *(undefined **)(puVar5 + 0xc);
            goto LAB_001267b8;
          }
          uVar4 = *(uint *)(puVar5 + 4);
        }
        puVar7 = *(undefined **)(puVar5 + 0xc);
      }
LAB_001267b8:
      piVar9[3] = (int)puVar7;
      piVar9[2] = (int)puVar5;
    }
    *(int **)(puVar7 + 8) = piVar9;
    *(int **)(puVar5 + 0xc) = piVar9;
  }
  __malloc_unlock(param_1);
  return;
}

// 0x001267e8  size 0xc
/* follows _free_r; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

void _free_r_Orphan1(void)

{
  return;
}

// 0x001267f8  size 0x16c
undefined4 maybe__malloc_trim_r(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  __malloc_lock();
  uVar1 = *(uint *)(PTR_DAT_0030a0a8 + 4);
  uVar6 = (long)(int)uVar1 & 0xfffffffc;
  lVar5 = ((uVar6 - (param_2 & 0xffffffff)) + 0xfef >> 0xc) - 1;
  if ((0xfff < lVar5 * 0x1000) &&
     (puVar2 = (undefined *)maybe__sbrk_r(param_1,0),
     puVar2 == PTR_DAT_0030a0a8 + (uVar1 & 0xfffffffc))) {
    iVar3 = (int)((ulong)(lVar5 << 0x2c) >> 0x20);
    lVar4 = maybe__sbrk_r(param_1,-iVar3);
    if (lVar4 != -1) {
      *(uint *)(PTR_DAT_0030a0a8 + 4) = (int)uVar6 + (int)lVar5 * -0x1000 | 1;
      DAT_0030a4d0 = DAT_0030a4d0 - iVar3;
      __malloc_unlock(param_1);
      return 1;
    }
    iVar3 = maybe__sbrk_r(param_1,0);
    if (0xf < iVar3 - (int)PTR_DAT_0030a0a8) {
      DAT_0030a4d0 = iVar3 - DAT_0030a4b8;
      *(uint *)(PTR_DAT_0030a0a8 + 4) = iVar3 - (int)PTR_DAT_0030a0a8 | 1;
    }
  }
  __malloc_unlock(param_1);
  return 0;
}

// 0x00126968  size 0x46c
undefined4 maybe__fseek_r(undefined8 param_1,ulong param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  long unaff_s2;
  ulong uVar12;
  code *pcVar13;
  undefined1 auStack_c0 [4];
  uint uStack_bc;
  long lStack_b0;
  
  puVar3 = PTR_DAT_0030a090;
  piVar9 = (int *)param_1;
  puVar10 = (undefined4 *)piVar9[0x15];
  if ((undefined4 *)piVar9[0x15] == (undefined4 *)0x0) {
    piVar9[0x15] = (int)PTR_DAT_0030a090;
    puVar10 = (undefined4 *)puVar3;
  }
  if (puVar10[0xe] == 0) {
    __sinit(puVar10);
    puVar10 = (undefined4 *)piVar9[0x15];
    uVar11 = piVar9[3];
  }
  else {
    uVar11 = piVar9[3];
  }
  if ((uVar11 & 0x108) == 0x108) {
    maybe__fflush_r(param_1);
    pcVar13 = (code *)piVar9[10];
  }
  else {
    pcVar13 = (code *)piVar9[10];
  }
  if (pcVar13 == (code *)0x0) {
    uVar7 = 0x1d;
    goto LAB_00126aec;
  }
  if (param_3 == 1) {
    maybe__fflush_r(param_1);
    uVar4 = *(ushort *)(piVar9 + 3);
    if ((uVar4 & 0x1000) == 0) {
      unaff_s2 = (*pcVar13)(piVar9[7],0,1);
      if (unaff_s2 == -1) {
        return 0xffffffff;
      }
      uVar4 = *(ushort *)(piVar9 + 3);
    }
    else {
      unaff_s2 = (long)piVar9[0x14];
    }
    if ((uVar4 & 4) == 0) {
      iVar5 = piVar9[4];
      if (((uVar4 & 8) != 0) && (*piVar9 != 0)) {
        unaff_s2 = unaff_s2 + (*piVar9 - iVar5);
      }
    }
    else {
      unaff_s2 = unaff_s2 - piVar9[1];
      if (piVar9[0xc] == 0) {
        iVar5 = piVar9[4];
      }
      else {
        iVar5 = piVar9[4];
        unaff_s2 = unaff_s2 - piVar9[0xf];
      }
    }
    param_2 = param_2 + unaff_s2;
    param_3 = 0;
    bVar2 = true;
  }
  else {
    if (param_3 < 2) {
      uVar7 = 0x16;
      if (param_3 != 0) {
LAB_00126aec:
        *puVar10 = uVar7;
        return 0xffffffff;
      }
    }
    else {
      uVar7 = 0x16;
      if (param_3 != 2) goto LAB_00126aec;
    }
    bVar2 = false;
    iVar5 = piVar9[4];
  }
  if (iVar5 == 0) {
    maybe___smakebuf(param_1);
    uVar4 = *(ushort *)(piVar9 + 3);
  }
  else {
    uVar4 = *(ushort *)(piVar9 + 3);
  }
  if ((uVar4 & 0x81a) != 0) goto LAB_00126d78;
  if ((uVar4 & 0x400) == 0) {
    if (pcVar13 == __sseek) {
      if (*(short *)((int)piVar9 + 0xe) < 0) {
        uVar4 = uVar4 | 0x800;
      }
      else {
        lVar6 = maybe__fstat_r(puVar10,*(short *)((int)piVar9 + 0xe),auStack_c0);
        if (lVar6 == 0) {
          if ((uStack_bc & 0xf000) == 0x8000) {
            piVar9[0x13] = 0x400;
            *(ushort *)(piVar9 + 3) = *(ushort *)(piVar9 + 3) | 0x400;
            goto LAB_00126b80;
          }
          uVar4 = *(ushort *)(piVar9 + 3);
        }
        else {
          uVar4 = *(ushort *)(piVar9 + 3);
        }
        uVar4 = uVar4 | 0x800;
      }
    }
    else {
      uVar4 = uVar4 | 0x800;
    }
    *(ushort *)(piVar9 + 3) = uVar4;
    goto LAB_00126d78;
  }
LAB_00126b80:
  uVar12 = param_2;
  if (param_3 != 0) {
    lVar6 = maybe__fstat_r(puVar10,*(undefined2 *)((int)piVar9 + 0xe),auStack_c0);
    if (lVar6 != 0) goto LAB_00126d78;
    uVar12 = lStack_b0 + param_2;
  }
  uVar4 = *(ushort *)(piVar9 + 3);
  if (bVar2) {
    piVar8 = (int *)piVar9[0xc];
LAB_00126c04:
    if (piVar8 == (int *)0x0) {
      iVar5 = *piVar9;
      goto LAB_00126c3c;
    }
    iVar1 = piVar9[4];
    uVar11 = (piVar9[0xe] - iVar1) + piVar9[0xf];
    lVar6 = (unaff_s2 + piVar9[1]) - (ulong)(uint)(piVar9[0xe] - iVar1);
  }
  else {
    if ((uVar4 & 0x1000) == 0) {
      lVar6 = (*pcVar13)(piVar9[7],0,1);
      if (lVar6 == -1) goto LAB_00126d78;
      uVar4 = *(ushort *)(piVar9 + 3);
    }
    else {
      lVar6 = (long)piVar9[0x14];
    }
    piVar8 = (int *)piVar9[0xc];
    unaff_s2 = lVar6 - piVar9[1];
    if (piVar8 != (int *)0x0) {
      unaff_s2 = unaff_s2 - piVar9[0xf];
      goto LAB_00126c04;
    }
    iVar5 = *piVar9;
LAB_00126c3c:
    iVar1 = piVar9[4];
    uVar11 = (iVar5 - iVar1) + piVar9[1];
    lVar6 = unaff_s2 - (ulong)(uint)(iVar5 - iVar1);
  }
  if ((uVar4 & 0x2000) == 0) {
    if ((long)uVar12 < lVar6) {
      iVar5 = piVar9[0x13];
    }
    else {
      if ((long)uVar12 < (long)(lVar6 + (ulong)uVar11)) {
        iVar5 = (int)uVar12 - (int)lVar6;
        *piVar9 = iVar1 + iVar5;
        piVar9[1] = uVar11 - iVar5;
        if (piVar8 != (int *)0x0) {
          if (piVar8 == piVar9 + 0x10) {
            piVar9[0xc] = 0;
          }
          else {
            _free_r(piVar9[0x15]);
            uVar4 = *(ushort *)(piVar9 + 3);
            piVar9[0xc] = 0;
          }
        }
        *(ushort *)(piVar9 + 3) = uVar4 & 0xffdf;
        return 0;
      }
      iVar5 = piVar9[0x13];
    }
  }
  else {
    iVar5 = piVar9[0x13];
  }
  lVar6 = (*pcVar13)(piVar9[7],(long)-iVar5 & uVar12,0);
  if (lVar6 != -1) {
    piVar9[1] = 0;
    if ((int *)piVar9[0xc] != (int *)0x0) {
      if ((int *)piVar9[0xc] == piVar9 + 0x10) {
        piVar9[0xc] = 0;
      }
      else {
        _free_r(piVar9[0x15]);
        piVar9[0xc] = 0;
      }
    }
    uVar11 = (int)uVar12 - (int)((long)-iVar5 & uVar12);
    *(ushort *)(piVar9 + 3) = *(ushort *)(piVar9 + 3) & 0xffdf;
    if (uVar11 != 0) {
      lVar6 = maybe___srefill_r(param_1);
      if ((lVar6 != 0) || ((uint)piVar9[1] < uVar11)) goto LAB_00126d78;
      piVar9[1] = piVar9[1] - uVar11;
      *piVar9 = *piVar9 + uVar11;
    }
    return 0;
  }
LAB_00126d78:
  lVar6 = maybe__fflush_r(param_1);
  if (lVar6 == 0) {
    lVar6 = (*pcVar13)(piVar9[7],param_2,param_3);
    if (lVar6 == -1) {
      uVar7 = 0xffffffff;
    }
    else {
      if ((int *)piVar9[0xc] != (int *)0x0) {
        if ((int *)piVar9[0xc] == piVar9 + 0x10) {
          piVar9[0xc] = 0;
        }
        else {
          _free_r(piVar9[0x15]);
          piVar9[0xc] = 0;
        }
      }
      uVar7 = 0;
      piVar9[1] = 0;
      *(ushort *)(piVar9 + 3) = *(ushort *)(piVar9 + 3) & 0xffdf;
      *piVar9 = piVar9[4];
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

// 0x00126df4  size 0x20
/* follows _fseek_r; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

void _fseek_r_Orphan1(void)

{
  return;
}

// 0x00126e18  size 0x5c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe__fstat_r(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _s_RuntimeVar2 = 0;
  lVar1 = _fstat(param_2,param_3);
  if ((lVar1 == -1) && (_s_RuntimeVar2 != 0)) {
    *param_1 = _s_RuntimeVar2;
  }
  return;
}

// 0x00126e78  size 0xf4
long maybe__fclose_r(undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  
  puVar5 = PTR_DAT_0030a090;
  piVar6 = (int *)param_1;
  puVar2 = (undefined *)piVar6[0x15];
  if (puVar2 == (undefined *)0x0) {
    piVar6[0x15] = (int)PTR_DAT_0030a090;
    iVar3 = *(int *)(puVar5 + 0x38);
  }
  else {
    iVar3 = *(int *)(puVar2 + 0x38);
    puVar5 = puVar2;
  }
  if (iVar3 == 0) {
    __sinit(puVar5);
    iVar3 = piVar6[10];
  }
  else {
    iVar3 = piVar6[10];
  }
  if (iVar3 == 0) {
    lVar4 = -1;
    *(undefined4 *)piVar6[0x15] = 0x1d;
  }
  else {
    maybe__fflush_r(param_1);
    uVar1 = *(ushort *)(piVar6 + 3);
    if ((uVar1 & 0x1000) == 0) {
      lVar4 = (*(code *)piVar6[10])(piVar6[7],0,1);
      if (lVar4 == -1) {
        return -1;
      }
      uVar1 = *(ushort *)(piVar6 + 3);
    }
    else {
      lVar4 = (long)piVar6[0x14];
    }
    if ((uVar1 & 4) == 0) {
      if (((uVar1 & 8) != 0) && (*piVar6 != 0)) {
        lVar4 = lVar4 + (*piVar6 - piVar6[4]);
      }
    }
    else {
      lVar4 = lVar4 - piVar6[1];
      if (piVar6[0xc] != 0) {
        lVar4 = lVar4 - piVar6[0xf];
      }
    }
  }
  return lVar4;
}

// 0x00126f74  size 0x8
/* follows _fclose_r; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

void _fclose_r_Orphan1(void)

{
  return;
}

// 0x00126f80  size 0x3b8
undefined4 maybe___sfvwrite(undefined8 param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int unaff_s3_lo;
  int *piVar13;
  uint unaff_s5_lo;
  
  if (param_2[2] != 0) {
    puVar11 = (uint *)param_1;
    uVar7 = (ushort)puVar11[3];
    if (((uVar7 & 8) == 0) || (puVar11[4] == 0)) {
      lVar6 = maybe___swsetup();
      if (lVar6 != 0) {
        return 0xffffffff;
      }
      uVar7 = (ushort)puVar11[3];
    }
    piVar13 = (int *)*param_2;
    uVar12 = 0;
    if ((uVar7 & 2) == 0) {
      bVar3 = false;
      if ((uVar7 & 1) == 0) {
joined_r0x00127090:
        while (uVar12 == 0) {
          puVar1 = (uint *)(piVar13 + 1);
          unaff_s3_lo = *piVar13;
          piVar13 = piVar13 + 2;
          uVar12 = *puVar1;
        }
        uVar4 = puVar11[2];
        if ((uVar7 & 0x200) == 0) {
          uVar8 = *puVar11;
          if (puVar11[4] < uVar8) {
            if (uVar12 <= uVar4) {
              uVar4 = puVar11[5];
              goto LAB_00127140;
            }
            memmove(uVar8,unaff_s3_lo,uVar4);
            *puVar11 = *puVar11 + uVar4;
            lVar6 = maybe__fflush_r(param_1);
            if (lVar6 != 0) {
              uVar7 = (ushort)puVar11[3];
              goto LAB_00127328;
            }
            iVar5 = param_2[2];
          }
          else {
            uVar4 = puVar11[5];
LAB_00127140:
            if (uVar12 < uVar4) {
              memmove(uVar8,unaff_s3_lo,uVar12);
              uVar8 = puVar11[2] - uVar12;
              uVar4 = *puVar11 + uVar12;
              goto LAB_00127194;
            }
            uVar4 = (*(code *)puVar11[9])(puVar11[7],unaff_s3_lo,uVar4);
            if ((int)uVar4 < 1) {
              uVar7 = (ushort)puVar11[3];
              goto LAB_00127328;
            }
            iVar5 = param_2[2];
          }
        }
        else {
          if (uVar12 < uVar4) {
            uVar4 = uVar12;
          }
          memmove(*puVar11,unaff_s3_lo,uVar4);
          uVar8 = puVar11[2] - uVar4;
          uVar4 = *puVar11 + uVar4;
LAB_00127194:
          puVar11[2] = uVar8;
          *puVar11 = uVar4;
          iVar5 = param_2[2];
          uVar4 = uVar12;
        }
        unaff_s3_lo = unaff_s3_lo + uVar4;
        uVar12 = uVar12 - uVar4;
        param_2[2] = iVar5 - uVar4;
        if (iVar5 - uVar4 != 0) {
          uVar7 = (ushort)puVar11[3];
          goto joined_r0x00127090;
        }
      }
      else {
        do {
          if (uVar12 == 0) {
            bVar3 = false;
            do {
              uVar12 = piVar13[1];
              unaff_s3_lo = *piVar13;
              piVar13 = piVar13 + 2;
            } while (uVar12 == 0);
          }
          if (bVar3) {
            uVar4 = *puVar11;
          }
          else {
            lVar6 = memchr(unaff_s3_lo,10,uVar12);
            uVar4 = uVar12;
            if (lVar6 != 0) {
              uVar4 = (int)lVar6 - unaff_s3_lo;
            }
            unaff_s5_lo = uVar4 + 1;
            bVar3 = true;
            uVar4 = *puVar11;
          }
          uVar8 = uVar12;
          if (unaff_s5_lo <= uVar12) {
            uVar8 = unaff_s5_lo;
          }
          uVar2 = puVar11[5];
          uVar10 = puVar11[2] + uVar2;
          if ((puVar11[4] < uVar4) && ((int)uVar10 < (int)uVar8)) {
            memmove(uVar4,unaff_s3_lo,uVar10);
            *puVar11 = *puVar11 + uVar10;
            lVar6 = maybe__fflush_r(param_1);
            unaff_s5_lo = unaff_s5_lo - uVar10;
            if (lVar6 != 0) {
              uVar7 = (ushort)puVar11[3];
              goto LAB_00127328;
            }
          }
          else if ((int)uVar8 < (int)uVar2) {
            memmove(uVar4,unaff_s3_lo,uVar8);
            puVar11[2] = puVar11[2] - uVar8;
            *puVar11 = *puVar11 + uVar8;
            unaff_s5_lo = unaff_s5_lo - uVar8;
            uVar10 = uVar8;
          }
          else {
            uVar10 = (*(code *)puVar11[9])(puVar11[7],unaff_s3_lo,uVar2);
            unaff_s5_lo = unaff_s5_lo - uVar10;
            if ((int)uVar10 < 1) {
              uVar7 = (ushort)puVar11[3];
              goto LAB_00127328;
            }
          }
          if (unaff_s5_lo == 0) {
            lVar6 = maybe__fflush_r(param_1);
            if (lVar6 != 0) {
              uVar7 = (ushort)puVar11[3];
              goto LAB_00127328;
            }
            bVar3 = false;
            iVar5 = param_2[2];
          }
          else {
            iVar5 = param_2[2];
          }
          unaff_s3_lo = unaff_s3_lo + uVar10;
          uVar12 = uVar12 - uVar10;
          param_2[2] = iVar5 - uVar10;
        } while (iVar5 - uVar10 != 0);
      }
    }
    else {
      do {
        while (uVar12 == 0) {
          puVar1 = (uint *)(piVar13 + 1);
          unaff_s3_lo = *piVar13;
          piVar13 = piVar13 + 2;
          uVar12 = *puVar1;
        }
        uVar4 = 0x400;
        if (uVar12 < 0x401) {
          uVar4 = uVar12;
        }
        lVar6 = (*(code *)puVar11[9])(puVar11[7],unaff_s3_lo,uVar4);
        if (lVar6 < 1) {
          uVar7 = (ushort)puVar11[3];
LAB_00127328:
          *(ushort *)(puVar11 + 3) = uVar7 | 0x40;
          return 0xffffffff;
        }
        iVar5 = param_2[2];
        iVar9 = (int)lVar6;
        unaff_s3_lo = unaff_s3_lo + iVar9;
        uVar12 = uVar12 - iVar9;
        param_2[2] = iVar5 - iVar9;
      } while (iVar5 - iVar9 != 0);
    }
  }
  return 0;
}

// 0x0012734c  size 0x14
/* follows __sfvwrite; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

void __sfvwrite_Orphan1(void)

{
  return;
}

// 0x00127360  size 0x94
ulong maybe__fwalk(int param_1,code *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  
  piVar4 = (int *)(param_1 + 0x1d8);
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x1dc);
    while( true ) {
      iVar3 = piVar4[2];
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        if (*(short *)(iVar3 + 0xc) != 0) {
          uVar1 = (*param_2)(iVar3);
          uVar5 = uVar5 | uVar1;
        }
        iVar3 = iVar3 + 0x58;
      }
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) break;
      iVar2 = piVar4[1];
    }
  }
  return uVar5;
}

// 0x001273f8  size 0x88
undefined * maybe__setlocale_r(int param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = strcmp(param_3,0x3602a0);
    if ((lVar1 != 0) && (lVar1 = strcmp(param_3,0x360290), lVar1 != 0)) {
      return (undefined *)0x0;
    }
    *(int *)(param_1 + 0x34) = (int)param_3;
    *(undefined4 *)(param_1 + 0x30) = param_2;
  }
  return &DAT_003602a0;
}

// 0x00127488  size 0xc
/* N153 confirmed: returns the C locale lconv */

undefined ** _localeconv_r(void)

{
  return &PTR_DAT_00360260;
}

// 0x00127498  size 0x24
/* N153 confirmed: _setlocale_r(_impure_ptr, ...) */

void setlocale(undefined8 param_1,undefined8 param_2)

{
  maybe__setlocale_r(PTR_DAT_0030a090,param_1,param_2);
  return;
}

// 0x001274c0  size 0x1c
/* N153 confirmed */

void localeconv(void)

{
  _localeconv_r(PTR_DAT_0030a090);
  return;
}

// 0x001274e0  size 0x60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe__lseek_r(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _s_RuntimeVar2 = 0;
  lVar1 = maybe__kill(param_2,param_3,param_4);
  if ((lVar1 == -1) && (_s_RuntimeVar2 != 0)) {
    *param_1 = _s_RuntimeVar2;
  }
  return;
}

// 0x00127540  size 0x144
void maybe___smakebuf(int *param_1)

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  undefined1 auStack_90 [4];
  uint uStack_8c;
  
  uVar3 = *(ushort *)(param_1 + 3);
  if ((uVar3 & 2) != 0) {
    param_1[5] = 1;
    param_1[4] = (int)param_1 + 0x43;
    *param_1 = (int)param_1 + 0x43;
    return;
  }
  if (-1 < *(short *)((int)param_1 + 0xe)) {
    lVar2 = maybe__fstat_r(param_1[0x15],*(short *)((int)param_1 + 0xe),auStack_90);
    if (-1 < lVar2) {
      bVar1 = (uStack_8c & 0xf000) == 0x2000;
      if ((uStack_8c & 0xf000) == 0x8000) {
        uVar3 = *(ushort *)(param_1 + 3);
        if ((code *)param_1[10] != __sseek) goto LAB_001275f4;
        param_1[0x13] = 0x400;
        uVar3 = uVar3 | 0x400;
      }
      else {
        uVar3 = *(ushort *)(param_1 + 3);
LAB_001275f4:
        uVar3 = uVar3 | 0x800;
      }
      *(ushort *)(param_1 + 3) = uVar3;
      goto LAB_001275fc;
    }
    uVar3 = *(ushort *)(param_1 + 3);
  }
  bVar1 = false;
  *(ushort *)(param_1 + 3) = uVar3 | 0x800;
LAB_001275fc:
  lVar2 = _malloc_r(param_1[0x15],0x400);
  uVar3 = *(ushort *)(param_1 + 3);
  if (lVar2 == 0) {
    param_1[4] = (int)param_1 + 0x43;
    param_1[5] = 1;
    *(ushort *)(param_1 + 3) = uVar3 | 2;
    *param_1 = (int)param_1 + 0x43;
  }
  else {
    param_1[4] = (int)lVar2;
    *(code **)(param_1[0x15] + 0x3c) = _cleanup_r;
    *(ushort *)(param_1 + 3) = uVar3 | 0x80;
    param_1[5] = 0x400;
    *param_1 = (int)lVar2;
    if ((bVar1) && (lVar2 = maybe__isatty(*(undefined2 *)((int)param_1 + 0xe)), lVar2 != 0)) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 1;
    }
  }
  return;
}

// 0x0012768c  size 0x8
/* follows __smakebuf; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

void __smakebuf_Orphan1(void)

{
  return;
}

// 0x00127698  size 0x54
undefined8 malloc(undefined8 param_1)

{
  undefined8 uVar1;
  
  __malloc_lock(PTR_DAT_0030a090);
  uVar1 = _malloc_r(PTR_DAT_0030a090,param_1);
  __malloc_unlock(PTR_DAT_0030a090);
  return uVar1;
}

// 0x001276f0  size 0x48
void free(undefined8 param_1)

{
  __malloc_lock(PTR_DAT_0030a090);
  _free_r(PTR_DAT_0030a090,param_1);
  __malloc_unlock(PTR_DAT_0030a090);
  return;
}

// 0x00127738  size 0x238
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_malloc_extend_top(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_0030a0a8;
  param_2 = param_2 + (int)_DAT_0030a4b0;
  uVar8 = *(uint *)(PTR_DAT_0030a0a8 + 4) & 0xfffffffc;
  uVar7 = param_2 + 0x10;
  puVar5 = PTR_DAT_0030a0a8 + uVar8;
  if (DAT_0030a4b8 != (undefined *)0xffffffff) {
    uVar7 = param_2 + 0x100fU & 0xfffff000;
  }
  puVar2 = (undefined *)maybe__sbrk_r(param_1,uVar7);
  if ((puVar2 != (undefined *)0xffffffff) && ((puVar5 <= puVar2 || (puVar1 == &DAT_0030a0a0)))) {
    DAT_0030a4d0 = DAT_0030a4d0 + uVar7;
    if (puVar2 == puVar5) {
      *(uint *)(PTR_DAT_0030a0a8 + 4) = uVar7 + uVar8 | 1;
    }
    else {
      if (DAT_0030a4b8 == (undefined *)0xffffffff) {
        DAT_0030a4b8 = puVar2;
      }
      else {
        DAT_0030a4d0 = puVar2 + ((int)DAT_0030a4d0 - (int)puVar5);
      }
      if (((uint)(puVar2 + 8) & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x10 - ((uint)(puVar2 + 8) & 0xf);
        puVar2 = puVar2 + iVar6;
      }
      iVar6 = iVar6 + (0x1000 - ((uint)(puVar2 + uVar7) & 0xfff));
      lVar3 = maybe__sbrk_r((int)param_1,iVar6);
      if (lVar3 == -1) {
        return;
      }
      DAT_0030a4d0 = DAT_0030a4d0 + iVar6;
      PTR_DAT_0030a0a8 = puVar2;
      *(uint *)(puVar2 + 4) = ((int)lVar3 - (int)puVar2) + iVar6 | 1;
      if (puVar1 != &DAT_0030a0a0) {
        if (uVar8 < 0x10) {
          *(undefined4 *)(puVar2 + 4) = 1;
          return;
        }
        uVar7 = uVar8 - 0xc & 0xfffffff0;
        *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) & 1 | uVar7;
        *(undefined4 *)(puVar1 + uVar7 + 8) = 5;
        *(undefined4 *)(puVar1 + uVar7 + 4) = 5;
        if (0xf < uVar7) {
          _free_r((int)param_1,puVar1 + 8);
        }
      }
    }
    uVar4 = (ulong)(int)DAT_0030a4d0;
    if (DAT_0030a4c0 < uVar4) {
      DAT_0030a4c0 = uVar4;
    }
    if (DAT_0030a4c8 < uVar4) {
      DAT_0030a4c8 = uVar4;
    }
  }
  return;
}

// 0x00127980  size 0x10
/* follows malloc_extend_top; no call, branch, pointer or constant references it (exception landing
   pad or dead code) */

void malloc_extend_top_Orphan1(void)

{
  return;
}

// 0x00127990  size 0x6fc
/* WARNING: Removing unreachable block (ram,0x00127cb4) */
/* WARNING: Removing unreachable block (ram,0x00127d30) */

undefined4 * _malloc_r(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  
  if (param_2 + 0x13U < 0x1f) {
    uVar16 = 0x10;
  }
  else {
    uVar16 = param_2 + 0x13U & 0xfffffff0;
  }
  __malloc_lock(param_1);
  puVar8 = PTR_PTR_0030a0b0;
  uVar3 = uVar16 >> 9;
  if (uVar16 < 0x1f8) {
    puVar15 = *(undefined4 **)((int)&PTR_DAT_0030a0ac + uVar16);
    if (puVar15 != (undefined4 *)(&DAT_0030a0a0 + uVar16)) {
      uVar16 = puVar15[1];
      iVar2 = puVar15[3];
      iVar1 = puVar15[2];
      uVar3 = *(uint *)((int)puVar15 + (uVar16 & 0xfffffffc) + 4);
      *(int *)(iVar1 + 0xc) = iVar2;
      *(int *)(iVar2 + 8) = iVar1;
      *(uint *)((int)puVar15 + (uVar16 & 0xfffffffc) + 4) = uVar3 | 1;
      goto LAB_0012808c;
    }
    uVar13 = (uVar16 >> 3) + 2;
  }
  else {
    uVar13 = uVar16 >> 3;
    if (uVar3 != 0) {
      if (uVar3 < 5) {
        uVar13 = (uVar16 >> 6) + 0x38;
      }
      else {
        uVar13 = uVar3 + 0x5b;
        if (0x14 < uVar3) {
          if (uVar3 < 0x55) {
            uVar13 = (uVar16 >> 0xc) + 0x6e;
          }
          else if (uVar3 < 0x155) {
            uVar13 = (uVar16 >> 0xf) + 0x77;
          }
          else if (uVar3 < 0x555) {
            uVar13 = (uVar16 >> 0x12) + 0x7c;
          }
          else {
            uVar13 = 0x7e;
          }
        }
      }
    }
    for (puVar15 = (undefined4 *)(&PTR_DAT_0030a0ac)[uVar13 * 2];
        puVar15 != (undefined4 *)(&DAT_0030a0a0 + uVar13 * 8); puVar15 = (undefined4 *)puVar15[3]) {
      uVar3 = puVar15[1] & 0xfffffffc;
      uVar12 = -(ulong)(uVar16 - uVar3);
      if (uVar16 <= uVar3) {
        uVar12 = (ulong)(uVar3 - uVar16);
      }
      if (0xf < (long)uVar12) goto LAB_00127b14;
      if (-1 < (long)uVar12) {
        iVar2 = puVar15[3];
        iVar1 = puVar15[2];
        *(uint *)((int)puVar15 + uVar3 + 4) = *(uint *)((int)puVar15 + uVar3 + 4) | 1;
        *(int *)(iVar1 + 0xc) = iVar2;
        *(int *)(iVar2 + 8) = iVar1;
        goto LAB_0012808c;
      }
    }
    uVar13 = uVar13 + 1;
  }
LAB_00127b14:
  if ((undefined **)PTR_PTR_0030a0b0 != &PTR_DAT_0030a0a8) {
    uVar3 = *(uint *)(PTR_PTR_0030a0b0 + 4);
    uVar9 = uVar3 & 0xfffffffc;
    if (uVar9 < uVar16) {
      uVar12 = -(ulong)(uVar16 - uVar9);
    }
    else {
      uVar12 = (ulong)(uVar9 - uVar16);
    }
    puVar15 = (undefined4 *)puVar8;
    if (0xf < (long)uVar12) {
      puVar8 = PTR_PTR_0030a0b0 + uVar16;
      uVar3 = (uint)uVar12;
      *(uint *)(PTR_PTR_0030a0b0 + 4) = uVar16 | 1;
      PTR_PTR_0030a0b0 = puVar8;
      PTR_PTR_0030a0b4 = puVar8;
      *(uint *)(puVar8 + 4) = uVar3 | 1;
      *(undefined ***)(puVar8 + 8) = &PTR_DAT_0030a0a8;
      *(uint *)(puVar8 + uVar3) = uVar3;
      *(undefined ***)(puVar8 + 0xc) = &PTR_DAT_0030a0a8;
      goto LAB_0012808c;
    }
    PTR_PTR_0030a0b4 = (undefined *)&PTR_DAT_0030a0a8;
    PTR_PTR_0030a0b0 = (undefined *)&PTR_DAT_0030a0a8;
    if (-1 < (long)uVar12) {
      *(uint *)(puVar8 + uVar9 + 4) = *(uint *)(puVar8 + uVar9 + 4) | 1;
      goto LAB_0012808c;
    }
    uVar4 = uVar3 >> 9;
    if (uVar9 < 0x200) {
      puVar14 = &DAT_0030a0a0 + (uVar3 & 0xfffffff8);
      puVar11 = *(undefined **)((int)&PTR_DAT_0030a0a8 + (uVar3 & 0xfffffff8));
      DAT_0030a0a4 = DAT_0030a0a4 | (uint)(1L << (long)(int)(uVar3 >> 5));
      *(undefined **)(puVar8 + 0xc) = puVar14;
      *(undefined **)(puVar8 + 8) = puVar11;
    }
    else {
      uVar6 = uVar3 >> 3;
      if (uVar4 != 0) {
        if (uVar4 < 5) {
          uVar6 = (uVar3 >> 6) + 0x38;
        }
        else {
          uVar6 = uVar4 + 0x5b;
          if (0x14 < uVar4) {
            if (uVar4 < 0x55) {
              uVar6 = (uVar3 >> 0xc) + 0x6e;
            }
            else if (uVar4 < 0x155) {
              uVar6 = (uVar3 >> 0xf) + 0x77;
            }
            else if (uVar4 < 0x555) {
              uVar6 = (uVar3 >> 0x12) + 0x7c;
            }
            else {
              uVar6 = 0x7e;
            }
          }
        }
      }
      puVar14 = &DAT_0030a0a0 + uVar6 * 8;
      puVar11 = (&PTR_DAT_0030a0a8)[uVar6 * 2];
      if (puVar11 == puVar14) {
        DAT_0030a0a4 = DAT_0030a0a4 | (uint)(1L << (long)((int)uVar6 >> 2));
      }
      else {
        uVar3 = *(uint *)(puVar11 + 4);
        while (uVar9 < (uVar3 & 0xfffffffc)) {
          puVar11 = *(undefined **)(puVar11 + 8);
          if (puVar11 == puVar14) {
            puVar14 = *(undefined **)(puVar11 + 0xc);
            goto LAB_00127d10;
          }
          uVar3 = *(uint *)(puVar11 + 4);
        }
        puVar14 = *(undefined **)(puVar11 + 0xc);
      }
LAB_00127d10:
      *(undefined **)(puVar8 + 0xc) = puVar14;
      *(undefined **)(puVar8 + 8) = puVar11;
    }
    *(undefined **)(puVar14 + 8) = puVar8;
    *(undefined **)(puVar11 + 0xc) = puVar8;
  }
  uVar10 = (ulong)DAT_0030a0a4;
  uVar12 = 1L << (long)((int)uVar13 >> 2);
  if (uVar12 <= uVar10) {
    if ((uVar12 & uVar10) == 0) {
      uVar13 = uVar13 & 0xfffffffc;
      do {
        uVar12 = uVar12 << 1;
        uVar13 = uVar13 + 4;
      } while ((uVar12 & uVar10) == 0);
    }
    iVar2 = uVar13 << 3;
    do {
      puVar15 = *(undefined4 **)((int)&PTR_DAT_0030a0ac + iVar2);
      puVar7 = (undefined4 *)(&DAT_0030a0a0 + iVar2);
      uVar3 = uVar13;
      while( true ) {
        if (puVar15 != puVar7) {
          uVar9 = puVar15[1];
          while( true ) {
            uVar9 = uVar9 & 0xfffffffc;
            uVar10 = -(ulong)(uVar16 - uVar9);
            if (uVar16 <= uVar9) {
              uVar10 = (ulong)(uVar9 - uVar16);
            }
            if (0xf < (long)uVar10) {
              iVar2 = puVar15[3];
              puVar8 = (undefined *)((int)puVar15 + uVar16);
              uVar3 = (uint)uVar10;
              iVar1 = puVar15[2];
              *(int *)(iVar1 + 0xc) = iVar2;
              *(int *)(iVar2 + 8) = iVar1;
              puVar15[1] = uVar16 | 1;
              PTR_PTR_0030a0b0 = puVar8;
              PTR_PTR_0030a0b4 = puVar8;
              *(uint *)(puVar8 + 4) = uVar3 | 1;
              *(undefined ***)(puVar8 + 8) = &PTR_DAT_0030a0a8;
              *(uint *)(puVar8 + uVar3) = uVar3;
              *(undefined ***)(puVar8 + 0xc) = &PTR_DAT_0030a0a8;
              goto LAB_0012808c;
            }
            if (-1 < (long)uVar10) {
              iVar2 = puVar15[3];
              iVar1 = puVar15[2];
              *(uint *)((int)puVar15 + uVar9 + 4) = *(uint *)((int)puVar15 + uVar9 + 4) | 1;
              *(int *)(iVar1 + 0xc) = iVar2;
              *(int *)(iVar2 + 8) = iVar1;
              goto LAB_0012808c;
            }
            puVar15 = (undefined4 *)puVar15[3];
            if (puVar15 == puVar7) break;
            uVar9 = puVar15[1];
          }
        }
        puVar15 = puVar7 + 2;
        if ((int)uVar3 < 0x3f) {
          uVar3 = uVar3 + 1;
          puVar15 = puVar7 + 4;
        }
        puVar7 = puVar15;
        uVar3 = uVar3 + 1;
        if ((uVar3 & 3) == 0) break;
        puVar15 = (undefined4 *)puVar7[3];
      }
      puVar15 = (undefined4 *)(&DAT_0030a0a0 + iVar2);
      do {
        uVar9 = uVar13 & 3;
        uVar13 = uVar13 - 1;
        if (uVar9 == 0) {
          DAT_0030a0a4 = DAT_0030a0a4 & ~(uint)uVar12;
          break;
        }
        puVar5 = puVar15 + -2;
        puVar7 = (undefined4 *)*puVar15;
        puVar15 = puVar5;
      } while (puVar7 == puVar5);
      uVar12 = uVar12 << 1;
      if ((DAT_0030a0a4 < uVar12) || (uVar12 == 0)) break;
      iVar2 = uVar3 * 8;
      uVar13 = uVar3;
      if ((uVar12 & DAT_0030a0a4) == 0) {
        do {
          uVar12 = uVar12 << 1;
          uVar13 = uVar13 + 4;
        } while ((uVar12 & DAT_0030a0a4) == 0);
        iVar2 = uVar13 * 8;
      }
    } while( true );
  }
  uVar3 = *(uint *)(PTR_DAT_0030a0a8 + 4) & 0xfffffffc;
  if (uVar3 < uVar16) {
    uVar12 = -(ulong)(uVar16 - uVar3);
  }
  else {
    uVar12 = (ulong)(uVar3 - uVar16);
  }
  if (((*(uint *)(PTR_DAT_0030a0a8 + 4) & 0xfffffffc) < uVar16) || ((long)uVar12 < 0x10)) {
    maybe_malloc_extend_top(param_1,uVar16);
    uVar3 = *(uint *)(PTR_DAT_0030a0a8 + 4) & 0xfffffffc;
    if (uVar3 < uVar16) {
      uVar12 = -(ulong)(uVar16 - uVar3);
    }
    else {
      uVar12 = (ulong)(uVar3 - uVar16);
    }
    if (((*(uint *)(PTR_DAT_0030a0a8 + 4) & 0xfffffffc) < uVar16) || ((long)uVar12 < 0x10)) {
      __malloc_unlock(param_1);
      return (undefined4 *)0x0;
    }
  }
  puVar15 = (undefined4 *)PTR_DAT_0030a0a8;
  puVar8 = PTR_DAT_0030a0a8 + uVar16;
  *(uint *)(PTR_DAT_0030a0a8 + 4) = uVar16 | 1;
  PTR_DAT_0030a0a8 = puVar8;
  *(uint *)(puVar8 + 4) = (uint)uVar12 | 1;
LAB_0012808c:
  __malloc_unlock(param_1);
  return puVar15 + 2;
}

