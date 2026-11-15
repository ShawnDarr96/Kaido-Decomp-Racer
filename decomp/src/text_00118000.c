// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00118000 - 0x0011c000
#include "ghidra_types.h"

// 0x00118170  size 0x1c
/* 0x15 */

void maybe_sceUmount(undefined8 param_1)

{
  maybe_Fio_PathCmd(param_1,0x15);
  return;
}

// 0x00118190  size 0x234
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x16 */

undefined8 maybe_sceLseek64(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined8 auStack_90 [2];
  
  lVar2 = maybe_Fio_GetFreeSlot();
  Fio_Lock(0x16);
  if (DAT_00306b7c == 0) {
    Fio_Unlock();
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (lVar2 != 0) {
      puVar6 = (undefined4 *)lVar2;
      uVar1 = puVar6[1];
      if (uVar1 != 0) {
        _g_FioShared1 = *puVar6;
        _g_sceReadShared1 = (int)(puVar6 + -0xdd000) >> 4;
        uStack_ac = 1;
        uStack_a8 = 0;
        uStack_9c = 0;
        _g_sceMkdirShared1 = param_2;
        _g_sceLseekShared2 = param_3;
        uVar3 = CreateSema(auStack_b0);
        _g_sceOpenShared1 = auStack_90;
        _g_sceOpenShared2 = 8;
        _g_sceLseekShared1 = (int)uVar3;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(DAT_00306b8c);
          if (DAT_00306af8 == -1) {
            DAT_00306af8 = _g_sceLseekShared1;
            _g_sceLseekShared1 = -_g_sceLseekShared1;
          }
          else {
            iVar5 = 1;
            do {
              if (0x1f < iVar5) goto LAB_001182ec;
              piVar4 = &DAT_00306af8 + iVar5;
              iVar5 = iVar5 + 1;
            } while (*piVar4 != -1);
            *piVar4 = _g_sceLseekShared1;
            _g_sceLseekShared1 = -_g_sceLseekShared1;
          }
LAB_001182ec:
          SignalSema(DAT_00306b8c);
        }
        lVar2 = sceSifCallRpc(0x374200,0x16,0,0x372b00,0x20,0x373740,4,0);
        iVar5 = DAT_20373740;
        if (lVar2 < 0) {
          DeleteSema(uVar3);
          Fio_Unlock();
          return 0xfffffffffffffff5;
        }
        Fio_Unlock();
        if (iVar5 == 0) {
          DeleteSema(uVar3);
          return 0xfffffffffffffff5;
        }
        if ((uVar1 & 0x8000) == 0) {
          WaitSema(uVar3);
          DeleteSema(uVar3);
          return auStack_90[0];
        }
        DeleteSema(uVar3);
        return 0;
      }
    }
    Fio_Unlock();
    uVar3 = 0xfffffffffffffff7;
  }
                    /* WARNING: Read-only address (ram,0x20373740) is written */
  return uVar3;
}

// 0x001183c8  size 0x238
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
maybe_sceDevctl(char *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
               ulong param_6)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_bc;
  undefined4 auStack_b0 [4];
  
  Fio_Lock(0x17);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    g_FioShared1 = *param_1;
  }
  else {
    g_FioShared1 = *param_1;
  }
  iVar6 = 0;
  if (g_FioShared1 != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 && (cVar1 = param_1[iVar6], (&g_FioShared1)[iVar6] = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    g_FioShared2 = 0;
  }
  if ((param_4 < 0x401) && (param_6 < 0x401)) {
    uVar7 = 0;
    if (param_4 != 0) {
      do {
        puVar2 = (undefined1 *)(param_3 + uVar7);
        puVar5 = &g_sceFormatShared1 + uVar7;
        uVar7 = uVar7 + 1;
        *puVar5 = *puVar2;
      } while (uVar7 < param_4);
    }
    uStack_cc = 1;
    uStack_c8 = 0;
    uStack_bc = 0;
    _s_sceDevctl_1 = param_2;
    _s_sceDevctl_2 = param_4;
    uVar3 = CreateSema(auStack_d0);
    _s_sceDevctl_4 = (undefined4)param_6;
    _g_sceOpenShared2 = 4;
    _g_sceLseekShared1 = (undefined4)uVar3;
    _g_sceOpenShared1 = auStack_b0;
    _s_sceDevctl_3 = param_5;
    sceSifWriteBackDCache(0x372b00,0x81c);
    lVar4 = sceSifCallRpc(0x374200,0x17,0,0x372b00,0x81c,0x373740,4,0);
    iVar6 = DAT_20373740;
    if (lVar4 < 0) {
      DeleteSema(uVar3);
      Fio_Unlock();
      auStack_b0[0] = 0xfffffff5;
    }
    else {
      Fio_Unlock();
      if (iVar6 == 0) {
        DeleteSema(uVar3);
        auStack_b0[0] = 0xfffffff5;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
      }
    }
  }
  else {
    Fio_Unlock();
    auStack_b0[0] = 0xffffffea;
  }
  return auStack_b0[0];
}

// 0x00118600  size 0x1e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSymlink(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined4 auStack_90 [4];
  
  Fio_Lock(0x11);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    g_FioShared1 = *param_1;
  }
  else {
    g_FioShared1 = *param_1;
  }
  iVar4 = 0;
  if (g_FioShared1 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (cVar1 = param_1[iVar4], (&g_FioShared1)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    g_FioShared2 = 0;
  }
  g_sceFormatShared1 = *param_2;
  iVar4 = 0;
  if (g_sceFormatShared1 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_2[iVar4], (&g_sceFormatShared1)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    g_sceFormatShared2 = 0;
  }
  uStack_a8 = 0;
  uStack_ac = 1;
  uStack_9c = 0;
  uVar2 = CreateSema(auStack_b0);
  _g_sceLseekShared1 = (undefined4)uVar2;
  _g_sceOpenShared2 = 4;
  _g_sceOpenShared1 = auStack_90;
  lVar3 = sceSifCallRpc(0x374200,0x18,0,0x372b00,0x80c,0x373740,4,0);
  iVar4 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    Fio_Unlock();
    auStack_90[0] = 0xfffffff5;
  }
  else {
    Fio_Unlock();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      auStack_90[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return auStack_90[0];
}

// 0x001187e0  size 0x1c8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceReadlink(char *param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_ac;
  undefined4 auStack_a0 [4];
  
  Fio_Lock(0x11);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    g_sceSyncShared1 = *param_1;
  }
  else {
    g_sceSyncShared1 = *param_1;
  }
  iVar4 = 0;
  if (g_sceSyncShared1 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_1[iVar4], (&g_sceSyncShared1)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    g_sceOpenShared3 = 0;
  }
  if (0x3ff < param_3) {
    param_3 = 0x3ff;
  }
  _g_sceMkdirShared1 = (undefined4)param_2;
  _g_FioShared1 = (undefined4)param_3;
  sceSifWriteBackDCache(param_2,param_3);
  uStack_b8 = 0;
  uStack_bc = 1;
  uStack_ac = 0;
  uVar2 = CreateSema(auStack_c0);
  _g_sceLseekShared1 = (undefined4)uVar2;
  _g_sceOpenShared2 = 4;
  _g_sceOpenShared1 = auStack_a0;
  lVar3 = sceSifCallRpc(0x374200,0x19,0,0x372b00,0x80c,0x373740,4,0);
  iVar4 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    Fio_Unlock();
    auStack_a0[0] = 0xfffffff5;
  }
  else {
    Fio_Unlock();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      auStack_a0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return auStack_a0[0];
}

// 0x001189a8  size 0x88
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* binds RPC 0x80000003 */

undefined4 sceSifInitIopHeap(void)

{
  int iVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = sceSifBindRpc(0x374300,0xffffffff80000003,0);
    if (lVar2 < 0) {
      return 0xffffffff;
    }
    if (_s_sceSifInitIopHeap_1 != 0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  DAT_00306b98 = 0;
  return 0;
}

// 0x00118a30  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceSifAllocIopHeap(undefined4 param_1)

{
  long lVar1;
  
  if ((DAT_00306b98 < 0) ||
     (_g_sceSifAllocIopHeapShared2 = param_1,
     lVar1 = sceSifCallRpc(0x374300,1,0,0x374380,4,0x374340,4,0), lVar1 < 0)) {
    return 0;
  }
  return _g_sceSifAllocIopHeapShared1;
}

// 0x00118aa0  size 0x80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifAllocSysMemory(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (-1 < DAT_00306b98) {
    _g_sceSifAllocIopHeapShared2 = param_2;
    _s_sceSifAllocSysMemory_1 = param_1;
    _s_sceSifAllocSysMemory_2 = param_3;
    lVar2 = sceSifCallRpc(0x374300,4,0,0x374380,0xc,0x374340,4,0);
    uVar1 = _g_sceSifAllocIopHeapShared1;
    if (lVar2 < 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

// 0x00118b20  size 0x78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceSifFreeIopHeap(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    _g_sceSifAllocIopHeapShared2 = param_1;
    lVar2 = sceSifCallRpc(0x374300,2,0,0x374380,4,0x374340,4,0);
    uVar1 = _g_sceSifAllocIopHeapShared1;
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// 0x00118b98  size 0x1c
void maybe_sceSifFreeSysMemory(void)

{
  sceSifFreeIopHeap();
  return;
}

// 0x00118bb8  size 0xf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifLoadIopHeap(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  if (DAT_00306b98 < 0) {
    uVar2 = 0;
  }
  else {
    s_sceSifLoadIopHeap_2 = *param_1;
    iVar4 = 0;
    if (s_sceSifLoadIopHeap_2 != '\0') {
      for (iVar4 = 1;
          (iVar4 < 0xfc &&
          (cVar1 = param_1[iVar4], (&s_sceSifLoadIopHeap_2)[iVar4] = cVar1, cVar1 != '\0'));
          iVar4 = iVar4 + 1) {
      }
    }
    if (iVar4 == 0xfc) {
      iVar4 = 0xfb;
    }
    s_sceSifLoadIopHeap_3 = 0;
    _s_sceSifLoadIopHeap_1 = param_2;
    lVar3 = sceSifCallRpc(0x374300,3,0,0x3743c0,iVar4 + 5,0x374340,4,0);
    uVar2 = _g_sceSifAllocIopHeapShared1;
    if (lVar3 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

// 0x00118ca8  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifQueryTotalFreeMemSize(void)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = sceSifCallRpc(0x374300,5,0,0,0,0x374340,4,0);
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = _g_sceSifAllocIopHeapShared1;
    }
  }
  return uVar1;
}

// 0x00118d18  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifQueryMaxFreeMemSize(void)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = sceSifCallRpc(0x374300,6,0,0,0,0x374340,4,0);
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = _g_sceSifAllocIopHeapShared1;
    }
  }
  return uVar1;
}

// 0x00118d88  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifQueryBlockTopAddress(void)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = sceSifCallRpc(0x374300,7,0,0,0,0x374340,4,0);
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = _g_sceSifAllocIopHeapShared1;
    }
  }
  return uVar1;
}

// 0x00118df8  size 0x7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifQueryBlockSize(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    _g_sceSifAllocIopHeapShared2 = param_1;
    lVar2 = sceSifCallRpc(0x374300,8,0,0x374380,4,0x374340,4,0);
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = _g_sceSifAllocIopHeapShared1;
    }
  }
  return uVar1;
}

// 0x00118e78  size 0x7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifQueryMemSize(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    _g_sceSifAllocIopHeapShared2 = param_1;
    lVar2 = sceSifCallRpc(0x374300,9,0,0x374380,4,0x374340,4,0);
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = _g_sceSifAllocIopHeapShared1;
    }
  }
  return uVar1;
}

// 0x00118ef8  size 0x100
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* binds RPC 0x80000006 */

undefined4 sceSifLoadFileInit(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if (DAT_00306ba0 < 0) {
    while (lVar3 = sceSifBindRpc(0x3746c0,0xffffffff80000006,0), -1 < lVar3) {
      if (_s_sceSifLoadFileInit_1 != 0) {
        DAT_00306ba0 = 0;
        lVar3 = sceSifCallRpc(0x3746c0,0xff,0,0,0,0x3744c0,4,0);
        if (lVar3 < 0) {
          return 0xfffeffff;
        }
        _s_sceSifLoadFileInit_2 = _g_RuntimeShared1;
        return 0;
      }
      iVar2 = 0x100000;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00118ff8  size 0x8c
bool maybe_LoadFile_IsBound(void)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  lVar1 = memcmp(0x3746e8,0x306acc,4);
  if (lVar1 != 0) {
    lVar1 = memcmp(0x3746e8,PTR_DAT_00306ba4,4);
    if (lVar1 != 0) {
      lVar1 = memcmp(0x306acc,PTR_DAT_00306ba4,4);
      bVar2 = lVar1 != 0;
    }
  }
  return bVar2;
}

// 0x00119088  size 0x38
undefined8 sceSifLoadFileReset(void)

{
  DAT_00306ba0 = 0xffffffff;
  memset(0x3746e8,0,4);
  return 0;
}

// 0x001190c0  size 0x208
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
maybe__lf_module_load(undefined4 param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = sceSifLoadFileInit();
  uVar2 = 0xffff0000;
  if (-1 < lVar3) {
    lVar3 = maybe_LoadFile_IsBound();
    if (lVar3 == 0) {
      _g_RuntimeShared1 = param_1;
      if (param_3 == (undefined8 *)0x0) {
        _g_RuntimeShared2 = 0;
      }
      else if (param_2 < 0xfd) {
        memcpy(0x3745c4,param_3,param_2);
        _g_RuntimeShared2 = (undefined4)param_2;
      }
      else {
        puVar4 = (undefined8 *)&s__lf_module_buffer_load_1;
        if ((((uint)param_3 | 0x3745c4) & 7) == 0) {
          puVar1 = param_3 + 0x1c;
          do {
            uVar5 = param_3[1];
            uVar6 = param_3[2];
            uVar7 = param_3[3];
            *puVar4 = *param_3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            param_3 = param_3 + 4;
            puVar4 = puVar4 + 4;
          } while (param_3 != puVar1);
        }
        else {
          puVar1 = param_3 + 0x1c;
          do {
            uVar5 = param_3[1];
            uVar6 = param_3[2];
            uVar7 = param_3[3];
            *puVar4 = *param_3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            param_3 = param_3 + 4;
            puVar4 = puVar4 + 4;
          } while (param_3 != puVar1);
        }
        uVar6 = param_3[1];
        uVar5 = param_3[2];
        uVar2 = *(undefined4 *)(param_3 + 3);
        *puVar4 = *param_3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar5;
        *(undefined4 *)(puVar4 + 3) = uVar2;
        _g_RuntimeShared2 = 0xfc;
      }
      lVar3 = sceSifCallRpc(0x3746c0,6,0,0x3744c0,0x200,0x3744c0,8,0);
      uVar2 = _g_RuntimeShared1;
      if (lVar3 < 0) {
        uVar2 = 0xfffeffff;
      }
      else {
        *param_4 = _g_RuntimeShared2;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

// 0x001192c8  size 0x208
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
maybe__lf_module_load_ex(undefined4 param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = sceSifLoadFileInit();
  uVar2 = 0xffff0000;
  if (-1 < lVar3) {
    lVar3 = maybe_LoadFile_IsBound();
    if (lVar3 == 0) {
      _g_RuntimeShared1 = param_1;
      if (param_3 == (undefined8 *)0x0) {
        _g_RuntimeShared2 = 0;
      }
      else if (param_2 < 0xfd) {
        memcpy(0x3745c4,param_3,param_2);
        _g_RuntimeShared2 = (undefined4)param_2;
      }
      else {
        puVar4 = (undefined8 *)&s__lf_module_buffer_load_1;
        if ((((uint)param_3 | 0x3745c4) & 7) == 0) {
          puVar1 = param_3 + 0x1c;
          do {
            uVar5 = param_3[1];
            uVar6 = param_3[2];
            uVar7 = param_3[3];
            *puVar4 = *param_3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            param_3 = param_3 + 4;
            puVar4 = puVar4 + 4;
          } while (param_3 != puVar1);
        }
        else {
          puVar1 = param_3 + 0x1c;
          do {
            uVar5 = param_3[1];
            uVar6 = param_3[2];
            uVar7 = param_3[3];
            *puVar4 = *param_3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            param_3 = param_3 + 4;
            puVar4 = puVar4 + 4;
          } while (param_3 != puVar1);
        }
        uVar6 = param_3[1];
        uVar5 = param_3[2];
        uVar2 = *(undefined4 *)(param_3 + 3);
        *puVar4 = *param_3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar5;
        *(undefined4 *)(puVar4 + 3) = uVar2;
        _g_RuntimeShared2 = 0xfc;
      }
      lVar3 = sceSifCallRpc(0x3746c0,7,0,0x3744c0,0x200,0x3744c0,8,0);
      uVar2 = _g_RuntimeShared1;
      if (lVar3 < 0) {
        uVar2 = 0xfffeffff;
      }
      else {
        *param_4 = _g_RuntimeShared2;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

// 0x001194d0  size 0x90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifStopModule(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sceSifLoadFileInit();
  uVar1 = 0xffff0000;
  if (-1 < lVar2) {
    lVar2 = maybe_LoadFile_IsBound();
    if (lVar2 == 0) {
      _g_RuntimeShared1 = param_1;
      lVar2 = sceSifCallRpc(0x3746c0,8,0,0x3744c0,4,0x3744c0,4,0);
      if (lVar2 < 0) {
        uVar1 = 0xfffeffff;
      }
      else {
        uVar1 = _g_RuntimeShared1;
      }
    }
    else {
      uVar1 = 0xfffefffc;
    }
  }
  return uVar1;
}

// 0x00119560  size 0xa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifSearchModuleByName(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sceSifLoadFileInit();
  uVar1 = 0xffff0000;
  if (-1 < lVar2) {
    lVar2 = maybe_LoadFile_IsBound();
    if (lVar2 == 0) {
      maybe_strncpy(0x3744c8,param_1,0xfc);
      g_RuntimeShared3 = 0;
      lVar2 = sceSifCallRpc(0x3746c0,9,0,0x3744c0,0x200,0x3744c0,4,0);
      if (lVar2 < 0) {
        uVar1 = 0xfffeffff;
      }
      else {
        uVar1 = _g_RuntimeShared1;
      }
    }
    else {
      uVar1 = 0xfffefffc;
    }
  }
  return uVar1;
}

// 0x00119600  size 0x90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceSifUnloadModule(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sceSifLoadFileInit();
  uVar1 = 0xffff0000;
  if (-1 < lVar2) {
    lVar2 = maybe_LoadFile_IsBound();
    if (lVar2 == 0) {
      _g_RuntimeShared1 = param_1;
      lVar2 = sceSifCallRpc(0x3746c0,10,0,0x3744c0,4,0x3744c0,4,0);
      if (lVar2 < 0) {
        uVar1 = 0xfffeffff;
      }
      else {
        uVar1 = _g_RuntimeShared1;
      }
    }
    else {
      uVar1 = 0xfffefffc;
    }
  }
  return uVar1;
}

// 0x00119690  size 0x1c
void sceSifLoadModule(void)

{
  maybe__lf_module_load();
  return;
}

// 0x001196b0  size 0x1c
void maybe_sceSifLoadStartModule(void)

{
  maybe__lf_module_load();
  return;
}

// 0x001196d0  size 0x224
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
maybe__lf_module_buffer_load
          (undefined8 param_1,long param_2,undefined8 *param_3,undefined4 *param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = sceSifLoadFileInit();
  uVar2 = 0xffff0000;
  if (-1 < lVar3) {
    lVar3 = maybe_LoadFile_IsBound();
    if (lVar3 == 0) {
      maybe_strncpy(0x3744c8,param_1,0xfc);
      g_RuntimeShared3 = 0;
      if (param_3 == (undefined8 *)0x0) {
        s__lf_module_buffer_load_1 = 0;
        _g_RuntimeShared1 = 0;
      }
      else if (param_2 < 0xfd) {
        memcpy(0x3745c4,param_3,param_2);
        _g_RuntimeShared1 = (undefined4)param_2;
      }
      else {
        puVar4 = (undefined8 *)&s__lf_module_buffer_load_1;
        if ((((uint)param_3 | 0x3745c4) & 7) == 0) {
          puVar1 = param_3 + 0x1c;
          do {
            uVar5 = param_3[1];
            uVar6 = param_3[2];
            uVar7 = param_3[3];
            *puVar4 = *param_3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            param_3 = param_3 + 4;
            puVar4 = puVar4 + 4;
          } while (param_3 != puVar1);
        }
        else {
          puVar1 = param_3 + 0x1c;
          do {
            uVar5 = param_3[1];
            uVar6 = param_3[2];
            uVar7 = param_3[3];
            *puVar4 = *param_3;
            puVar4[1] = uVar5;
            puVar4[2] = uVar6;
            puVar4[3] = uVar7;
            param_3 = param_3 + 4;
            puVar4 = puVar4 + 4;
          } while (param_3 != puVar1);
        }
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar2 = *(undefined4 *)(param_3 + 3);
        *puVar4 = *param_3;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        *(undefined4 *)(puVar4 + 3) = uVar2;
        _g_RuntimeShared1 = 0xfc;
      }
      lVar3 = sceSifCallRpc(0x3746c0,param_5,0,0x3744c0,0x200,0x3744c0,8,0);
      uVar2 = _g_RuntimeShared1;
      if (lVar3 < 0) {
        uVar2 = 0xfffeffff;
      }
      else {
        *param_4 = _g_RuntimeShared2;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

// 0x001198f8  size 0x20
void maybe_sceSifLoadModuleBuffer(void)

{
  maybe__lf_module_buffer_load();
  return;
}

// 0x00119918  size 0x1c
void maybe_sceSifLoadStartModuleBuffer(void)

{
  maybe__lf_module_buffer_load();
  return;
}

// 0x00119938  size 0x104
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 maybe__lf_elf_load(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = sceSifLoadFileInit();
  uVar2 = 0xffffffffffff0000;
  if (-1 < lVar1) {
    lVar1 = maybe_LoadFile_IsBound();
    if (lVar1 == 0) {
      maybe_strncpy(0x3744c8,param_1,0xfc);
      g_RuntimeShared3 = 0;
      maybe_strncpy(0x3745c4,param_2,0xfc);
      s__lf_elf_load_1 = 0;
      lVar1 = sceSifCallRpc(0x3746c0,param_4,0,0x3744c0,0x200,0x3744c0,0x10,0);
      if (lVar1 < 0) {
        uVar2 = 0xfffffffffffeffff;
      }
      else if (_g_RuntimeShared1 == 0) {
        uVar2 = 0xfffffffffffefffd;
      }
      else {
        *param_3 = _g_RuntimeShared1;
        uVar2 = 0;
        param_3[1] = _g_RuntimeShared2;
      }
    }
    else {
      uVar2 = 0xfffffffffffefffc;
    }
  }
  return uVar2;
}

// 0x00119a40  size 0x1c
void maybe_sceSifLoadElf(void)

{
  maybe__lf_elf_load();
  return;
}

// 0x00119a60  size 0x28
/* follows sceSifLoadElf; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void sceSifLoadElf_Orphan1(undefined8 param_1,undefined8 param_2)

{
  maybe__lf_elf_load(param_1,0x35f388,param_2,1);
  return;
}

// 0x00119a88  size 0xec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 maybe_sceSifGetIopAddr(undefined4 param_1,undefined4 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = sceSifLoadFileInit();
  if (lVar1 < 0) {
    return 0xffffffffffff0000;
  }
  if (param_3 < 3) {
    _g_RuntimeShared2 = (undefined4)param_3;
    _g_RuntimeShared1 = param_1;
    lVar1 = sceSifCallRpc(0x3746c0,3,0,0x3744c0,0x20,0x3744c0,0x20,0);
    if (lVar1 < 0) {
      return 0xfffffffffffeffff;
    }
    if (param_3 == 0) {
      *(undefined1 *)param_2 = g_RuntimeShared1;
    }
    else if (param_3 == 1) {
      *(undefined2 *)param_2 = _g_RuntimeShared1;
    }
    else {
      if (param_3 != 2) goto LAB_00119b44;
      *param_2 = _g_RuntimeShared1;
    }
    uVar2 = 0;
  }
  else {
LAB_00119b44:
    uVar2 = 0xfffffffffffefffe;
  }
  return uVar2;
}

// 0x00119b78  size 0xdc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 maybe_sceSifSetIopAddr(undefined4 param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = sceSifLoadFileInit();
  if (lVar1 < 0) {
    uVar2 = 0xffffffffffff0000;
  }
  else {
    _g_RuntimeShared2 = (undefined4)param_3;
    if (param_3 == 0) {
      _s_sceSifSetIopAddr_1 = CONCAT31(s_sceSifSetIopAddr_1_1,*(undefined1 *)param_2);
    }
    else if (param_3 == 1) {
      _s_sceSifSetIopAddr_1 = CONCAT22(s_sceSifSetIopAddr_1_1._1_2_,*(undefined2 *)param_2);
    }
    else {
      if (param_3 != 2) {
        _g_RuntimeShared1 = param_1;
        return 0xfffffffffffefffe;
      }
      _s_sceSifSetIopAddr_1 = *param_2;
    }
    _g_RuntimeShared1 = param_1;
    lVar1 = sceSifCallRpc(0x3746c0,2,0,0x3744c0,0x20,0x3744c0,0x10,0);
    uVar2 = 0xfffffffffffeffff;
    if (-1 < lVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

// 0x00119c58  size 0x154
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool maybe_sceSifResetIop(char *param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  maybe_SetSifCmdFlag(0,0);
  maybe_SetSifCmdFlag(1,0);
  sceSifStopDma();
  uStack_3c = sceSifGetReg(0xffffffff80000000);
  _s_sceSifResetIop_3 = 0;
  _s_sceSifResetIop_4 = param_2;
  if (*param_1 != '\0') {
    cVar2 = *param_1;
    iVar3 = _s_sceSifResetIop_3;
    while( true ) {
      _s_sceSifResetIop_3 = iVar3 + 1;
      *(char *)(iVar3 + 0x374718) = cVar2;
      if (param_1[_s_sceSifResetIop_3] == '\0') break;
      cVar2 = param_1[_s_sceSifResetIop_3];
      iVar3 = _s_sceSifResetIop_3;
    }
  }
  _s_sceSifResetIop_2 = 0x80000003;
  _s_sceSifResetIop_1 = 0x68;
  uStack_38 = 0x68;
  uStack_34 = 0x44;
  puStack_40 = &s_sceSifResetIop_1;
  sceSifWriteBackDCache(0x374700,0x68);
  sceSifSetReg(4,0x40000);
  lVar1 = sceSifSetDma(&puStack_40,1);
  if (lVar1 != 0) {
    sceSifSetReg(4,0x10000);
    sceSifSetReg(4,0x20000);
    sceSifSetReg(0xffffffff80000002,0);
    sceSifSetReg(0xffffffff80000000,0);
  }
  return lVar1 != 0;
}

// 0x00119db0  size 0x28
/* SMFLAG bit 0x10000 */

bool sceSifSyncIop(void)

{
  ulong uVar1;
  
  uVar1 = sceSifGetReg(4);
  return (uVar1 & 0x10000) != 0;
}

// 0x00119dd8  size 0x50
bool maybe_sceSifIsIopReady(void)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = sceSifGetReg(4);
  bVar1 = (uVar2 & 0x40000) != 0;
  if (bVar1) {
    maybe__kernl_ResetTtyFlag();
    maybe_SetSifCmdFlag(1,1);
    maybe_SetSifCmdFlag(0,1);
  }
  return bVar1;
}

// 0x00119e28  size 0x110
/* "m0:UDNL " */

undefined8 sceSifRebootIop(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  byte *pbVar6;
  ulong uVar7;
  char *pcVar8;
  char acStack_80 [80];
  
  pcVar4 = acStack_80;
  pcVar8 = &DAT_0035f390;
  if (*param_1 == 0) {
    uVar2 = 0xb;
  }
  else {
    pbVar6 = param_1;
    do {
      pbVar6 = pbVar6 + 1;
    } while (*pbVar6 != 0);
    uVar2 = (int)pbVar6 - (int)(param_1 + -0xb);
  }
  if (uVar2 < 0x51) {
    sceSifInitRpc(0);
    sceSifExitRpc();
    if (DAT_0035f390 == '\0') {
      bVar1 = *param_1;
    }
    else {
      bVar1 = *param_1;
      cVar5 = DAT_0035f390;
      pcVar4 = acStack_80;
      do {
        *pcVar4 = cVar5;
        pcVar8 = pcVar8 + 1;
        pcVar4 = pcVar4 + 1;
        cVar5 = *pcVar8;
      } while (*pcVar8 != '\0');
    }
    uVar7 = (ulong)bVar1;
    if (uVar7 == 0) {
      *pcVar4 = '\0';
    }
    else {
      do {
        *pcVar4 = (char)uVar7;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
        uVar7 = (ulong)(char)*param_1;
      } while (uVar7 != 0);
      *pcVar4 = '\0';
    }
    uVar3 = maybe_sceSifResetIop(acStack_80,0);
  }
  else {
    maybe_scePrintf(0x35f3a0,param_1);
    uVar3 = 0;
  }
  return uVar3;
}

// 0x00119f38  size 0x60
undefined8 maybe_InitTLBHandler(undefined8 param_1)

{
  DAT_00306ed8 = (undefined4)param_1;
  SetVTLBRefillHandler(1,0x11a480);
  SetVTLBRefillHandler(2,0x11a480);
  SetVTLBRefillHandler(3,0x11a480);
  return param_1;
}

// 0x00119f98  size 0x84
/* follows InitTLBHandler; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

undefined4 InitTLBHandler_Orphan1(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = (int)param_1 - 1;
  if (uVar3 < 0xd) {
    puVar2 = (undefined4 *)((int)param_1 * 4 + 0x306ee0);
    uVar1 = *puVar2;
    *puVar2 = param_2;
    if (uVar3 < 3) {
      SetVTLBRefillHandler(param_1,0x11a6c0);
    }
    else {
      SetVCommonHandler(param_1,0x11a6c0);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x0011a020  size 0x10
/* syscall 0x5a */

void maybe_kCopy_A(void)

{
  syscall(0x5a);
  return;
}

// 0x0011a030  size 0x38
/* follows kCopy_A; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

undefined8 kCopy_A_Orphan1(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 >> 2 != 0) {
    do {
      uVar1 = *param_2;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3 >> 2);
  }
  return 0;
}

// 0x0011a068  size 0x10
void RFU091(void)

{
  syscall(0x5b);
  return;
}

// 0x0011a078  size 0x10
void SetSyscall(void)

{
  syscall(0x74);
  return;
}

// 0x0011a088  size 0xc4
void maybe_InitAlarmPatch(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 3;
  puVar3 = &DAT_00306f40;
  SetSyscall(DAT_00306f28,PTR_kCopy_A_Orphan1_00306f2c);
  maybe_kCopy_A(0xffffffff80075000,0x306ba8,0x330);
  FlushCache(0);
  FlushCache(2);
  SetSyscall(DAT_00306f30,DAT_00306f34);
  SetSyscall(DAT_00306f38,PTR_maybe_KernelPatch_RestoreAndEret_00306f3c);
  uVar1 = DAT_00306f40;
  while( true ) {
    uVar4 = uVar4 + 1;
    uVar2 = RFU091(uVar1);
    uVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    SetSyscall(uVar1,uVar2);
    if (7 < uVar4) break;
    uVar1 = *puVar3;
  }
  DAT_00306f20 = RFU091(3);
  return;
}

// 0x0011a150  size 0x10
/* follows InitAlarmPatch; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void InitAlarmPatch_Orphan1(void)

{
  syscall(0x55);
  return;
}

// 0x0011a160  size 0x10
/* EE kernel syscall stub (pattern from ghidra-emotionengine-reloaded) */

void RFU085_iClearEventFlag_copy2(void)

{
  syscall(0xffffffffffffffab);
  return;
}

// 0x0011a170  size 0x10
void RFU086_WaitEvnetFlag(void)

{
  syscall(0x56);
  return;
}

// 0x0011a180  size 0x30
undefined8 maybe_Kernl_WaitEventFlagWrap(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 - 0xdU < 0x23) {
    uVar1 = RFU086_WaitEvnetFlag();
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

// 0x0011a1b0  size 0x10
/* follows Kernl_WaitEventFlagWrap; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Kernl_WaitEventFlagWrap_Orphan1(void)

{
  syscall(0xffffffffffffffaa);
  return;
}

// 0x0011a1c0  size 0x10
/* EE kernel syscall stub (pattern from ghidra-emotionengine-reloaded) */

void RFU087_PollEvnetFlag_copy2(void)

{
  syscall(0x57);
  return;
}

// 0x0011a1d0  size 0x10
/* follows RFU087_PollEvnetFlag_copy2; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void RFU087_PollEvnetFlag_copy2_Orphan1(void)

{
  syscall(0xffffffffffffffa9);
  return;
}

// 0x0011a1e0  size 0x10
/* follows RFU087_PollEvnetFlag_copy2_Orphan1; unreferenced except as noted (was
   FUN_0011a1d0_Orphan1) */

void RFU087_PollEvnetFlag_copy2_Orphan2(void)

{
  syscall(0x58);
  return;
}

// 0x0011a1f0  size 0x10
/* EE kernel syscall stub (pattern from ghidra-emotionengine-reloaded) */

void RFU088_iPollEvnetFlag_copy2(void)

{
  syscall(0xffffffffffffffa8);
  return;
}

// 0x0011a200  size 0x10
/* EE kernel syscall stub (pattern from ghidra-emotionengine-reloaded) */

void RFU089_ReferEventFlagStatus_copy2(void)

{
  syscall(0x59);
  return;
}

// 0x0011a210  size 0x40
void maybe_kernl_ResetTLB(void)

{
  long lVar1;
  
  lVar1 = GetMemorySize();
  if (lVar1 == 0x2000000) {
    maybe_kernl_InitTLB();
  }
  else {
    _InitTLB();
  }
  return;
}

// 0x0011a250  size 0x1f4
/* "# TLB spad=0 kernel=1" */

long maybe_kernl_InitTLB(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar5 = DAT_003071d8 + DAT_003071dc;
  maybe_kprintf(0x35f3c0,DAT_003071d8 + -1,DAT_003071d8,iVar5 + -1,iVar5,iVar5 + DAT_003071e0 + -1);
  Wired = 0;
  SYNC(0x10);
  lVar8 = (long)DAT_003071d8;
  lVar9 = 0;
  if (0x30 < lVar8) {
    maybe_kprintf(0x35f3f8);
    Exit(1);
  }
  if (lVar9 < lVar8) {
    uVar4 = *(undefined4 *)PTR_DAT_003071e8;
    puVar6 = (undefined4 *)PTR_DAT_003071e8;
    while( true ) {
      puVar1 = puVar6 + 1;
      puVar2 = puVar6 + 2;
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 4;
      RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
      lVar9 = (long)((int)lVar9 + 1);
      if (lVar8 <= lVar9) break;
      uVar4 = *puVar6;
    }
  }
  lVar8 = (long)((int)lVar9 + DAT_003071dc);
  if (0x30 < lVar8) {
    maybe_kprintf(0x35f410);
    Exit(1);
  }
  if (lVar9 < lVar8) {
    uVar4 = *(undefined4 *)PTR_DAT_003071ec;
    puVar6 = (undefined4 *)PTR_DAT_003071ec;
    while( true ) {
      puVar1 = puVar6 + 1;
      puVar2 = puVar6 + 2;
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 4;
      RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
      lVar9 = (long)((int)lVar9 + 1);
      if (lVar8 <= lVar9) break;
      uVar4 = *puVar6;
    }
  }
  Wired = (int)lVar9;
  SYNC(0x10);
  DAT_003071e4 = Wired;
  if (0 < DAT_003071e0) {
    lVar8 = (long)(Wired + DAT_003071e0);
    if (0x30 < lVar8) {
      maybe_kprintf(0x35f428);
      Exit(1);
    }
    if (lVar9 < lVar8) {
      uVar4 = *(undefined4 *)PTR_DAT_003071f0;
      puVar6 = (undefined4 *)PTR_DAT_003071f0;
      while( true ) {
        puVar1 = puVar6 + 1;
        puVar2 = puVar6 + 2;
        puVar3 = puVar6 + 3;
        puVar6 = puVar6 + 4;
        RFU086_WaitEvnetFlag(lVar9,uVar4,*puVar1,*puVar2,*puVar3);
        lVar9 = (long)((int)lVar9 + 1);
        if (lVar8 <= lVar9) break;
        uVar4 = *puVar6;
      }
    }
  }
  iVar5 = (int)lVar9 * 0x2000;
  lVar8 = (long)iVar5;
  if (lVar9 < 0x30) {
    iVar5 = iVar5 + -0x20000000;
    do {
      lVar7 = (long)((int)lVar9 + 1);
      RFU086_WaitEvnetFlag(lVar9,0,iVar5,0,0);
      iVar5 = iVar5 + 0x2000;
      lVar9 = lVar7;
    } while (lVar7 < 0x30);
  }
  return lVar8;
}

// 0x0011a480  size 0x100
/* kernel mode: saves all GPRs, calls the handler at 0x306ed8, eret */

void maybe_KernelPatch_HandlerA
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined1 param_9)

{
  undefined8 in_at;
  undefined4 in_at_udw;
  undefined4 in_register_0000001c;
  undefined8 in_v0;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined4 in_v1_lo;
  undefined4 in_v1_hi;
  undefined4 in_v1_udw;
  undefined4 in_register_0000003c;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined4 in_t0_udw;
  undefined4 in_register_0000008c;
  undefined4 in_t1_udw;
  undefined4 in_register_0000009c;
  undefined4 in_t2_udw;
  undefined4 in_register_000000ac;
  undefined4 in_t3_udw;
  undefined4 in_register_000000bc;
  undefined4 in_t4_lo;
  undefined4 in_t4_hi;
  undefined4 in_t4_udw;
  undefined4 in_register_000000cc;
  undefined4 in_t5_lo;
  undefined4 in_t5_hi;
  undefined4 in_t5_udw;
  undefined4 in_register_000000dc;
  undefined4 in_t6_lo;
  undefined4 in_t6_hi;
  undefined4 in_t6_udw;
  undefined4 in_register_000000ec;
  undefined4 in_t7_lo;
  undefined4 in_t7_hi;
  undefined4 in_t7_udw;
  undefined4 in_register_000000fc;
  undefined4 unaff_s0_lo;
  undefined4 unaff_s0_hi;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  undefined4 unaff_s1_lo;
  undefined4 unaff_s1_hi;
  undefined4 in_s1_udw;
  undefined4 in_register_0000011c;
  undefined4 unaff_s2_lo;
  undefined4 unaff_s2_hi;
  undefined4 in_s2_udw;
  undefined4 in_register_0000012c;
  undefined4 unaff_s3_lo;
  undefined4 unaff_s3_hi;
  undefined4 in_s3_udw;
  undefined4 in_register_0000013c;
  undefined4 unaff_s4_lo;
  undefined4 unaff_s4_hi;
  undefined4 in_s4_udw;
  undefined4 in_register_0000014c;
  undefined4 unaff_s5_lo;
  undefined4 unaff_s5_hi;
  undefined4 in_s5_udw;
  undefined4 in_register_0000015c;
  undefined4 unaff_s6_lo;
  undefined4 unaff_s6_hi;
  undefined4 in_s6_udw;
  undefined4 in_register_0000016c;
  undefined4 unaff_s7_lo;
  undefined4 unaff_s7_hi;
  undefined4 in_s7_udw;
  undefined4 in_register_0000017c;
  undefined4 in_t8_lo;
  undefined4 in_t8_hi;
  undefined4 in_t8_udw;
  undefined4 in_register_0000018c;
  undefined4 in_t9_lo;
  undefined4 in_t9_hi;
  undefined4 in_t9_udw;
  undefined4 in_register_0000019c;
  undefined4 in_gp_udw;
  undefined4 in_register_000001cc;
  undefined4 unaff_sp_hi;
  undefined4 in_sp_udw;
  undefined4 in_register_000001dc;
  undefined4 unaff_s8_lo;
  undefined4 unaff_s8_hi;
  undefined4 in_s8_udw;
  undefined4 in_register_000001ec;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 in_ra_udw;
  undefined4 in_register_000001fc;
  undefined8 in_hi;
  undefined8 in_hi1;
  undefined8 in_lo;
  undefined8 in_lo1;
  undefined8 in_sa;
  undefined1 uStack00000000;
  
  uRam00375790 = (int)in_at;
  uRam00375794 = (int)((ulong)in_at >> 0x20);
  uRam00375798 = in_at_udw;
  uRam0037579c = in_register_0000001c;
  uRam003757a0 = (int)in_v0;
  uRam003757a4 = (int)((ulong)in_v0 >> 0x20);
  uRam003757a8 = in_v0_udw;
  uRam003757ac = in_register_0000002c;
  uRam003757b0 = in_v1_lo;
  uRam003757b4 = in_v1_hi;
  uRam003757b8 = in_v1_udw;
  uRam003757bc = in_register_0000003c;
  uRam003757c0 = (int)param_1;
  uRam003757c4 = (int)((ulong)param_1 >> 0x20);
  uRam003757c8 = in_a0_udw;
  uRam003757cc = in_register_0000004c;
  uRam003757d0 = (int)param_2;
  uRam003757d4 = (int)((ulong)param_2 >> 0x20);
  uRam003757d8 = in_a1_udw;
  uRam003757dc = in_register_0000005c;
  uRam003757e0 = (int)param_3;
  uRam003757e4 = (int)((ulong)param_3 >> 0x20);
  uRam003757e8 = in_a2_udw;
  uRam003757ec = in_register_0000006c;
  uRam003757f0 = (int)param_4;
  uRam003757f4 = (int)((ulong)param_4 >> 0x20);
  uRam003757f8 = in_a3_udw;
  uRam003757fc = in_register_0000007c;
  uRam00375800 = (int)param_5;
  uRam00375804 = (int)((ulong)param_5 >> 0x20);
  uRam00375808 = in_t0_udw;
  uRam0037580c = in_register_0000008c;
  uRam00375810 = (int)param_6;
  uRam00375814 = (int)((ulong)param_6 >> 0x20);
  uRam00375818 = in_t1_udw;
  uRam0037581c = in_register_0000009c;
  uRam00375820 = (int)param_7;
  uRam00375824 = (int)((ulong)param_7 >> 0x20);
  uRam00375828 = in_t2_udw;
  uRam0037582c = in_register_000000ac;
  uRam00375830 = (int)param_8;
  uRam00375834 = (int)((ulong)param_8 >> 0x20);
  uRam00375838 = in_t3_udw;
  uRam0037583c = in_register_000000bc;
  uRam00375840 = in_t4_lo;
  uRam00375844 = in_t4_hi;
  uRam00375848 = in_t4_udw;
  uRam0037584c = in_register_000000cc;
  uRam00375850 = in_t5_lo;
  uRam00375854 = in_t5_hi;
  uRam00375858 = in_t5_udw;
  uRam0037585c = in_register_000000dc;
  uRam00375860 = in_t6_lo;
  uRam00375864 = in_t6_hi;
  uRam00375868 = in_t6_udw;
  uRam0037586c = in_register_000000ec;
  uRam00375870 = in_t7_lo;
  uRam00375874 = in_t7_hi;
  uRam00375878 = in_t7_udw;
  uRam0037587c = in_register_000000fc;
  uRam00375880 = unaff_s0_lo;
  uRam00375884 = unaff_s0_hi;
  uRam00375888 = in_s0_udw;
  uRam0037588c = in_register_0000010c;
  uRam00375890 = unaff_s1_lo;
  uRam00375894 = unaff_s1_hi;
  uRam00375898 = in_s1_udw;
  uRam0037589c = in_register_0000011c;
  uRam003758a0 = unaff_s2_lo;
  uRam003758a4 = unaff_s2_hi;
  uRam003758a8 = in_s2_udw;
  uRam003758ac = in_register_0000012c;
  uRam003758b0 = unaff_s3_lo;
  uRam003758b4 = unaff_s3_hi;
  uRam003758b8 = in_s3_udw;
  uRam003758bc = in_register_0000013c;
  uRam003758c0 = unaff_s4_lo;
  uRam003758c4 = unaff_s4_hi;
  uRam003758c8 = in_s4_udw;
  uRam003758cc = in_register_0000014c;
  uRam003758d0 = unaff_s5_lo;
  uRam003758d4 = unaff_s5_hi;
  uRam003758d8 = in_s5_udw;
  uRam003758dc = in_register_0000015c;
  uRam003758e0 = unaff_s6_lo;
  uRam003758e4 = unaff_s6_hi;
  uRam003758e8 = in_s6_udw;
  uRam003758ec = in_register_0000016c;
  uRam003758f0 = unaff_s7_lo;
  uRam003758f4 = unaff_s7_hi;
  uRam003758f8 = in_s7_udw;
  uRam003758fc = in_register_0000017c;
  uRam00375900 = in_t8_lo;
  uRam00375904 = in_t8_hi;
  uRam00375908 = in_t8_udw;
  uRam0037590c = in_register_0000018c;
  uRam00375910 = in_t9_lo;
  uRam00375914 = in_t9_hi;
  uRam00375918 = in_t9_udw;
  uRam0037591c = in_register_0000019c;
  puRam00375940 = &_mips_gp0_value;
  uRam00375944 = 0;
  uRam00375948 = in_gp_udw;
  uRam0037594c = in_register_000001cc;
  puRam00375950 = &param_9;
  uRam00375954 = unaff_sp_hi;
  uRam00375958 = in_sp_udw;
  uRam0037595c = in_register_000001dc;
  uRam00375960 = unaff_s8_lo;
  uRam00375964 = unaff_s8_hi;
  uRam00375968 = in_s8_udw;
  uRam0037596c = in_register_000001ec;
  uRam00375970 = unaff_retaddr;
  uRam00375974 = unaff_retaddr_00;
  uRam00375978 = in_ra_udw;
  uRam0037597c = in_register_000001fc;
  uRam00375980 = in_hi;
  uRam00375988 = in_hi1;
  uRam00375990 = in_lo;
  uRam00375998 = in_lo1;
  uRam003759a0 = in_sa;
  uRam003759a8 = EPC;
  EPC = 0x11a580;
  SYNC(0x10);
  Status = Status & 0xfffffffe;
  SYNC(0x10);
  return;
}

// 0x0011a5c0  size 0xf4
/* restores the saved GPRs and returns with eret */

undefined8 maybe_KernelPatch_RestoreAndEret(void)

{
  SYNC(0x10);
  EPC = uRam003759a8;
  SYNC(0x10);
  SYNC(0x10);
  Status = Status & 0xffffffe4 | 0x13;
  SYNC(0x10);
  return CONCAT44(uRam003757a4,uRam003757a0);
}

// 0x0011a6c0  size 0xfc
/* kernel mode: saves GPRs, calls table 0x306ee0 indexed by the cause code, eret */

void maybe_KernelPatch_ExceptionDispatch
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined1 param_9)

{
  undefined8 in_at;
  undefined4 in_at_udw;
  undefined4 in_register_0000001c;
  undefined8 in_v0;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined4 in_v1_lo;
  undefined4 in_v1_hi;
  undefined4 in_v1_udw;
  undefined4 in_register_0000003c;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined4 in_t0_udw;
  undefined4 in_register_0000008c;
  undefined4 in_t1_udw;
  undefined4 in_register_0000009c;
  undefined4 in_t2_udw;
  undefined4 in_register_000000ac;
  undefined4 in_t3_udw;
  undefined4 in_register_000000bc;
  undefined4 in_t4_lo;
  undefined4 in_t4_hi;
  undefined4 in_t4_udw;
  undefined4 in_register_000000cc;
  undefined4 in_t5_lo;
  undefined4 in_t5_hi;
  undefined4 in_t5_udw;
  undefined4 in_register_000000dc;
  undefined4 in_t6_lo;
  undefined4 in_t6_hi;
  undefined4 in_t6_udw;
  undefined4 in_register_000000ec;
  undefined4 in_t7_lo;
  undefined4 in_t7_hi;
  undefined4 in_t7_udw;
  undefined4 in_register_000000fc;
  undefined4 unaff_s0_lo;
  undefined4 unaff_s0_hi;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  undefined4 unaff_s1_lo;
  undefined4 unaff_s1_hi;
  undefined4 in_s1_udw;
  undefined4 in_register_0000011c;
  undefined4 unaff_s2_lo;
  undefined4 unaff_s2_hi;
  undefined4 in_s2_udw;
  undefined4 in_register_0000012c;
  undefined4 unaff_s3_lo;
  undefined4 unaff_s3_hi;
  undefined4 in_s3_udw;
  undefined4 in_register_0000013c;
  undefined4 unaff_s4_lo;
  undefined4 unaff_s4_hi;
  undefined4 in_s4_udw;
  undefined4 in_register_0000014c;
  undefined4 unaff_s5_lo;
  undefined4 unaff_s5_hi;
  undefined4 in_s5_udw;
  undefined4 in_register_0000015c;
  undefined4 unaff_s6_lo;
  undefined4 unaff_s6_hi;
  undefined4 in_s6_udw;
  undefined4 in_register_0000016c;
  undefined4 unaff_s7_lo;
  undefined4 unaff_s7_hi;
  undefined4 in_s7_udw;
  undefined4 in_register_0000017c;
  undefined4 in_t8_lo;
  undefined4 in_t8_hi;
  undefined4 in_t8_udw;
  undefined4 in_register_0000018c;
  undefined4 in_t9_lo;
  undefined4 in_t9_hi;
  undefined4 in_t9_udw;
  undefined4 in_register_0000019c;
  undefined4 in_gp_udw;
  undefined4 in_register_000001cc;
  undefined4 unaff_sp_hi;
  undefined4 in_sp_udw;
  undefined4 in_register_000001dc;
  undefined4 unaff_s8_lo;
  undefined4 unaff_s8_hi;
  undefined4 in_s8_udw;
  undefined4 in_register_000001ec;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 in_ra_udw;
  undefined4 in_register_000001fc;
  undefined8 in_hi;
  undefined8 in_hi1;
  undefined8 in_lo;
  undefined8 in_lo1;
  undefined8 in_sa;
  undefined1 uStack00000000;
  
  uRam00375790 = (int)in_at;
  uRam00375794 = (int)((ulong)in_at >> 0x20);
  uRam00375798 = in_at_udw;
  uRam0037579c = in_register_0000001c;
  uRam003757a0 = (int)in_v0;
  uRam003757a4 = (int)((ulong)in_v0 >> 0x20);
  uRam003757a8 = in_v0_udw;
  uRam003757ac = in_register_0000002c;
  uRam003757b0 = in_v1_lo;
  uRam003757b4 = in_v1_hi;
  uRam003757b8 = in_v1_udw;
  uRam003757bc = in_register_0000003c;
  uRam003757c0 = (int)param_1;
  uRam003757c4 = (int)((ulong)param_1 >> 0x20);
  uRam003757c8 = in_a0_udw;
  uRam003757cc = in_register_0000004c;
  uRam003757d0 = (int)param_2;
  uRam003757d4 = (int)((ulong)param_2 >> 0x20);
  uRam003757d8 = in_a1_udw;
  uRam003757dc = in_register_0000005c;
  uRam003757e0 = (int)param_3;
  uRam003757e4 = (int)((ulong)param_3 >> 0x20);
  uRam003757e8 = in_a2_udw;
  uRam003757ec = in_register_0000006c;
  uRam003757f0 = (int)param_4;
  uRam003757f4 = (int)((ulong)param_4 >> 0x20);
  uRam003757f8 = in_a3_udw;
  uRam003757fc = in_register_0000007c;
  uRam00375800 = (int)param_5;
  uRam00375804 = (int)((ulong)param_5 >> 0x20);
  uRam00375808 = in_t0_udw;
  uRam0037580c = in_register_0000008c;
  uRam00375810 = (int)param_6;
  uRam00375814 = (int)((ulong)param_6 >> 0x20);
  uRam00375818 = in_t1_udw;
  uRam0037581c = in_register_0000009c;
  uRam00375820 = (int)param_7;
  uRam00375824 = (int)((ulong)param_7 >> 0x20);
  uRam00375828 = in_t2_udw;
  uRam0037582c = in_register_000000ac;
  uRam00375830 = (int)param_8;
  uRam00375834 = (int)((ulong)param_8 >> 0x20);
  uRam00375838 = in_t3_udw;
  uRam0037583c = in_register_000000bc;
  uRam00375840 = in_t4_lo;
  uRam00375844 = in_t4_hi;
  uRam00375848 = in_t4_udw;
  uRam0037584c = in_register_000000cc;
  uRam00375850 = in_t5_lo;
  uRam00375854 = in_t5_hi;
  uRam00375858 = in_t5_udw;
  uRam0037585c = in_register_000000dc;
  uRam00375860 = in_t6_lo;
  uRam00375864 = in_t6_hi;
  uRam00375868 = in_t6_udw;
  uRam0037586c = in_register_000000ec;
  uRam00375870 = in_t7_lo;
  uRam00375874 = in_t7_hi;
  uRam00375878 = in_t7_udw;
  uRam0037587c = in_register_000000fc;
  uRam00375880 = unaff_s0_lo;
  uRam00375884 = unaff_s0_hi;
  uRam00375888 = in_s0_udw;
  uRam0037588c = in_register_0000010c;
  uRam00375890 = unaff_s1_lo;
  uRam00375894 = unaff_s1_hi;
  uRam00375898 = in_s1_udw;
  uRam0037589c = in_register_0000011c;
  uRam003758a0 = unaff_s2_lo;
  uRam003758a4 = unaff_s2_hi;
  uRam003758a8 = in_s2_udw;
  uRam003758ac = in_register_0000012c;
  uRam003758b0 = unaff_s3_lo;
  uRam003758b4 = unaff_s3_hi;
  uRam003758b8 = in_s3_udw;
  uRam003758bc = in_register_0000013c;
  uRam003758c0 = unaff_s4_lo;
  uRam003758c4 = unaff_s4_hi;
  uRam003758c8 = in_s4_udw;
  uRam003758cc = in_register_0000014c;
  uRam003758d0 = unaff_s5_lo;
  uRam003758d4 = unaff_s5_hi;
  uRam003758d8 = in_s5_udw;
  uRam003758dc = in_register_0000015c;
  uRam003758e0 = unaff_s6_lo;
  uRam003758e4 = unaff_s6_hi;
  uRam003758e8 = in_s6_udw;
  uRam003758ec = in_register_0000016c;
  uRam003758f0 = unaff_s7_lo;
  uRam003758f4 = unaff_s7_hi;
  uRam003758f8 = in_s7_udw;
  uRam003758fc = in_register_0000017c;
  uRam00375900 = in_t8_lo;
  uRam00375904 = in_t8_hi;
  uRam00375908 = in_t8_udw;
  uRam0037590c = in_register_0000018c;
  uRam00375910 = in_t9_lo;
  uRam00375914 = in_t9_hi;
  uRam00375918 = in_t9_udw;
  uRam0037591c = in_register_0000019c;
  puRam00375940 = &_mips_gp0_value;
  uRam00375944 = 0;
  uRam00375948 = in_gp_udw;
  uRam0037594c = in_register_000001cc;
  puRam00375950 = &param_9;
  uRam00375954 = unaff_sp_hi;
  uRam00375958 = in_sp_udw;
  uRam0037595c = in_register_000001dc;
  uRam00375960 = unaff_s8_lo;
  uRam00375964 = unaff_s8_hi;
  uRam00375968 = in_s8_udw;
  uRam0037596c = in_register_000001ec;
  uRam00375970 = unaff_retaddr;
  uRam00375974 = unaff_retaddr_00;
  uRam00375978 = in_ra_udw;
  uRam0037597c = in_register_000001fc;
  uRam00375980 = in_hi;
  uRam00375988 = in_hi1;
  uRam00375990 = in_lo;
  uRam00375998 = in_lo1;
  uRam003759a0 = in_sa;
  EPC = 0x11a7bc;
  SYNC(0x10);
  Status = Status & 0xfffffffe;
  SYNC(0x10);
  return;
}

// 0x0011a7e0  size 0x54
bool DIntr(void)

{
  if ((Status & 0x10000) == 0) {
    return false;
  }
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  return (Status & 0x10000) != 0;
}

// 0x0011a838  size 0x18
bool EIntr(void)

{
  EI();
  return (Status & 0x10000) != 0;
}

// 0x0011a850  size 0x48
void maybe_InitKernelSema(void)

{
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = 1;
  uStack_4c = 1;
  uStack_48 = 1;
  uStack_2c = 1;
  DAT_00307210 = CreateSema(auStack_50);
  DAT_00307214 = CreateSema(auStack_30);
  return;
}

// 0x0011a898  size 0xc
/* follows InitKernelSema; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

undefined4 InitKernelSema_Orphan1(void)

{
  return DAT_00307214;
}

// 0x0011a8a8  size 0x10
void maybe_kCopy_B(void)

{
  syscall(0x5a);
  return;
}

// 0x0011a8b8  size 0x38
/* address loaded as a constant in InitThreadPatch (callback / handler) */

undefined8 InitThreadPatch_Callback1(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 >> 2 != 0) {
    do {
      uVar1 = *param_2;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3 >> 2);
  }
  return 0;
}

// 0x0011a8f0  size 0x40
/* address loaded as a constant in InitThreadPatch (callback / handler) */

int * InitThreadPatch_Callback2(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = param_1 < param_2;
  if (*param_1 == param_3) {
LAB_0011a924:
    if (!bVar1) {
      param_1 = (int *)0x0;
    }
  }
  else if (bVar1) {
    do {
      param_1 = param_1 + 1;
      bVar1 = param_1 < param_2;
      if (*param_1 == param_3) goto LAB_0011a924;
    } while (bVar1);
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}

// 0x0011a930  size 0x10
/* syscall 0x83 */

void maybe_GetSyscallTable(void)

{
  syscall(0x83);
  return;
}

// 0x0011a940  size 0x34
undefined4 maybe_Kernl_ReadSyscallEntry(int param_1)

{
  undefined4 auStack_20 [4];
  
  maybe_kCopy_B(auStack_20,DAT_003071f8 + param_1 * 4,4);
  return auStack_20[0];
}

// 0x0011a978  size 0xfc
void maybe_InitThreadPatch(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  SetSyscall_copy2(DAT_00307200,PTR_InitThreadPatch_Callback2_00307204);
  SetSyscall_copy2(DAT_00307208,PTR_InitThreadPatch_Callback1_0030720c);
  iVar2 = maybe_GetSyscallTable(0xffffffff80000000,0xffffffff80080000,0x11a8f0);
  iVar3 = maybe_GetSyscallTable(0xffffffff80000000,0xffffffff80080000,0x11a8b8);
  uVar5 = iVar2 - 0x20c;
  uVar4 = iVar3 - 0x168;
  if (uVar5 == uVar4) {
    DAT_003071f8 = uVar5;
  }
  else {
    bVar1 = uVar5 < uVar4;
    do {
      if (bVar1) {
        iVar2 = maybe_GetSyscallTable(iVar2 + 4,0xffffffff80080000,0x11a8f0);
        uVar5 = iVar2 - 0x20c;
      }
      else {
        iVar3 = maybe_GetSyscallTable(iVar3 + 4,0xffffffff80080000,0x11a8b8);
        uVar4 = iVar3 - 0x168;
      }
      bVar1 = uVar5 < uVar4;
    } while (uVar5 != uVar4);
    DAT_003071f8 = uVar5;
  }
  return;
}

// 0x0011aa78  size 0x10
void SetSyscall_copy2(void)

{
  syscall(0x74);
  return;
}

// 0x0011aa88  size 0x54
/* called from entry */

void _InitSys(void)

{
  maybe_InitKernelSema();
  maybe_InitThreadPatch();
  maybe_InitTimerPatch();
  maybe_InitTimer(2);
  maybe_StartTimerSystemTime();
  maybe_InitThreadExtension();
  maybe_InitOsdPatch();
  maybe_InitAlarmPatch();
  maybe_InitTimerAlarmPool();
  return;
}

// 0x0011aae0  size 0x10
void SetSyscall_copy3(void)

{
  syscall(0x74);
  return;
}

// 0x0011aaf0  size 0x10
void maybe_kCopy_C(void)

{
  syscall(0x5a);
  return;
}

// 0x0011ab00  size 0x38
/* follows kCopy_C; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

undefined8 kCopy_C_Orphan1(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 >> 2 != 0) {
    do {
      uVar1 = *param_2;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3 >> 2);
  }
  return 0;
}

// 0x0011ab38  size 0x10
void RFU091_copy2(void)

{
  syscall(0x5b);
  return;
}

// 0x0011ab48  size 0x68
bool maybe_SetOsdConfigFlag(void)

{
  uint uStack_30;
  uint auStack_2c [3];
  
  GetOsdConfigParam(&uStack_30);
  auStack_2c[0] = uStack_30 & 0xffff1fff | 0x2000;
  SetOsdConfigParam(auStack_2c);
  GetOsdConfigParam(auStack_2c);
  SetOsdConfigParam(&uStack_30);
  return (auStack_2c[0] >> 0xd & 7) == 0;
}

// 0x0011abb0  size 0xac
void maybe_InitOsdPatch(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  lVar2 = maybe_SetOsdConfigFlag();
  if (lVar2 != 0) {
    uVar5 = 2;
    puVar4 = &DAT_003079d0;
    SetSyscall_copy3(DAT_003079c0,PTR_kCopy_C_Orphan1_003079c4);
    maybe_kCopy_C(0xffffffff80074000,0x307218,0x7a8);
    FlushCache(0);
    FlushCache(2);
    SetSyscall_copy3(DAT_003079c8,DAT_003079cc);
    uVar1 = DAT_003079d0;
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar3 = RFU091_copy2(uVar1);
      uVar1 = *puVar4;
      puVar4 = puVar4 + 2;
      SetSyscall_copy3(uVar1,uVar3);
      if (2 < uVar5) break;
      uVar1 = *puVar4;
    }
  }
  return;
}

// 0x0011ac60  size 0x10
void maybe_kCopy_D(void)

{
  syscall(0x5a);
  return;
}

// 0x0011ac70  size 0x30
/* follows kCopy_D; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

undefined8 kCopy_D_Orphan1(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3);
  }
  return 0;
}

// 0x0011aca0  size 0x10
void SetSyscall_copy4(void)

{
  syscall(0x74);
  return;
}

// 0x0011acb0  size 0x118
int maybe_Exec_SetupArgs(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int aiStack_80 [4];
  
  iVar4 = DAT_00306f20;
  iVar2 = DAT_00306f20 + 0x40;
  aiStack_80[0] = iVar2;
  SetSyscall_copy4(DAT_003079d8,PTR_kCopy_D_Orphan1_003079dc);
  if (0xf < param_2) {
    param_2 = 0xf;
  }
  maybe_kCopy_D(iVar4,aiStack_80,4);
  iVar3 = strlen(param_1);
  maybe_kCopy_D(aiStack_80[0],param_1,iVar3 + 1);
  aiStack_80[0] = aiStack_80[0] + iVar3 + 1;
  if (0 < param_2) {
    do {
      iVar4 = iVar4 + 4;
      maybe_kCopy_D(iVar4,aiStack_80,4);
      param_2 = param_2 + -1;
      iVar3 = strlen(*param_3);
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      maybe_kCopy_D(aiStack_80[0],uVar1,iVar3 + 1);
      aiStack_80[0] = aiStack_80[0] + iVar3 + 1;
    } while (param_2 != 0);
  }
  return iVar2;
}

// 0x0011add0  size 0x70
/* follows Exec_SetupArgs; no call, branch, pointer or constant reference (exception landing pad or
   dead code) */

void Exec_SetupArgs_Orphan1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  maybe_Exec_SetupArgs(0x35f440,param_3,param_4);
  maybe_kernl_ResetTLB();
  _ExecPS2(param_1,param_2,param_3,DAT_00306f20 + 4);
  return;
}

// 0x0011ae40  size 0x48
void LoadExecPS2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = maybe_Exec_SetupArgs();
  maybe_kernl_ResetTLB();
  _LoadExecPS2(uVar1,param_2,DAT_00306f20 + 4);
  return;
}

// 0x0011ae88  size 0x28
void Exit(int param_1)

{
  maybe_kernl_ResetTLB();
  _Exit(param_1);
  return;
}

// 0x0011aeb0  size 0x4c
void ExecOSD(undefined8 param_1,undefined8 param_2)

{
  maybe_Exec_SetupArgs(0x35f440,param_1,param_2);
  maybe_kernl_ResetTLB();
  _ExecOSD(param_1,DAT_00306f20 + 4);
  return;
}

// 0x0011af00  size 0x10
void SetSyscall_copy5(void)

{
  syscall(0x74);
  return;
}

// 0x0011af10  size 0x10
void maybe_kCopy_E(void)

{
  syscall(0x5a);
  return;
}

// 0x0011af20  size 0x38
undefined8 maybe_Kernel_CopyWords(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 >> 2 != 0) {
    do {
      uVar1 = *param_2;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3 >> 2);
  }
  return 0;
}

// 0x0011af58  size 0x10
void RFU091_copy3(void)

{
  syscall(0x5b);
  return;
}

// 0x0011af68  size 0xd4
/* RCNT3 */

void maybe_InitTimerPatch(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = REG_RCNT3_MODE;
  if ((uVar4 & 0x100) == 0) {
    uVar4 = 2;
    puVar3 = &DAT_00308158;
    SetSyscall_copy5(DAT_00308148,PTR_maybe_Kernel_CopyWords_0030814c);
    maybe_kCopy_E(0xffffffff80076000,0x3079e0,0x740);
    maybe_kCopy_E(0x82000,0x308120,0x28);
    FlushCache(0);
    FlushCache(2);
    SetSyscall_copy5(DAT_00308150,DAT_00308154);
    uVar1 = DAT_00308158;
    while( true ) {
      uVar4 = uVar4 + 1;
      uVar2 = RFU091_copy3(uVar1);
      uVar1 = *puVar3;
      puVar3 = puVar3 + 2;
      SetSyscall_copy5(uVar1,uVar2);
      if (7 < uVar4) break;
      uVar1 = *puVar3;
    }
  }
  return;
}

// 0x0011b040  size 0x68
void Timer_WriteReg(undefined4 *param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  SYNC(0x10);
  Status = (Status | 6) ^ 2 | Status & 0x10000;
  SYNC(0x10);
  *param_1 = param_2;
  ErrorPC = unaff_retaddr;
  SYNC(0x10);
  return;
}

// 0x0011b0a8  size 0x8
/* follows Timer_WriteReg; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

void Timer_WriteReg_Orphan1(void)

{
  return;
}

// 0x0011b0b0  size 0x10
/* T2_COUNT 0xB0001000 */

void Timer_SetCount(undefined8 param_1)

{
  Timer_WriteReg(0xffffffffb0001000,param_1);
  return;
}

// 0x0011b0c0  size 0x10
/* T2_MODE  0xB0001010 */

void Timer_SetMode(undefined8 param_1)

{
  Timer_WriteReg(0xffffffffb0001010,param_1);
  return;
}

// 0x0011b0d0  size 0x10
/* T2_COMP  0xB0001020 */

void Timer_SetComp(undefined8 param_1)

{
  Timer_WriteReg(0xffffffffb0001020,param_1);
  return;
}

// 0x0011b0e0  size 0x154
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RCNT2 + INTC handler */

undefined8 maybe_InitTimer(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  if (DAT_00308190 < 0) {
    DAT_00308188 = 0;
    DAT_00308198 = 0;
    memset(0x3759c0,0,0x2000);
    DAT_0030819c = 0x3759c0;
    iVar4 = 0x3779c0;
    iVar1 = 0x7f;
    piVar5 = (int *)&s_InitTimer_1;
    do {
      *piVar5 = iVar4;
      iVar1 = iVar1 + -1;
      piVar5 = piVar5 + -0x10;
      iVar4 = iVar4 + -0x40;
    } while (-1 < iVar1);
    _s_InitTimer_1 = 0;
    maybe_Timer_FindFreeSlot();
    lVar3 = AddIntcHandler(0xb,0x11b680,0,0);
    if (lVar3 < 0) {
      uVar2 = 0xffffffff80009021;
    }
    else {
      DAT_00308190 = (int)lVar3;
      lVar3 = DIntr();
      uVar6 = REG_RCNT2_MODE;
      param_1 = uVar6 & 0xfffffffc | param_1;
      uVar6 = param_1 | 0x300;
      if ((param_1 & 0x80) == 0) {
        uVar6 = param_1 | 0xf80;
        Timer_SetCount(0);
        Timer_SetComp(0xffff);
      }
      Timer_SetMode(uVar6);
      EnableIntc(0xb);
      uVar2 = 0;
      if (lVar3 != 0) {
        EIntr();
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0xffffffff80008001;
  }
  return uVar2;
}

// 0x0011b238  size 0xb8
undefined8 maybe_EndTimer(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_00308190 < 0) {
    uVar1 = 0xffffffff80008001;
  }
  else if (DAT_00308198 == 0) {
    lVar2 = DIntr();
    lVar3 = RemoveIntcHandler(0xb,DAT_00308190);
    if (lVar3 == 0) {
      DisableIntc(0xb);
      Timer_SetMode(0xc00);
      Timer_SetCount(0);
    }
    DAT_00308188 = 0;
    DAT_00308190 = -1;
    if (lVar2 != 0) {
      EIntr();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff80000010;
  }
  return uVar1;
}

// 0x0011b2f0  size 0x2c
/* follows EndTimer; no call, branch, pointer or constant references it (exception landing pad or
   dead code) */

uint EndTimer_Orphan1(void)

{
  uint uVar1;
  
  if (DAT_00308190 < 0) {
    return 0x80008001;
  }
  uVar1 = REG_RCNT2_MODE;
  return uVar1 & 3;
}

// 0x0011b320  size 0x90
undefined4 maybe_StartTimerSystemTime(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = DIntr();
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x80) == 0) {
    Timer_SetMode(uVar1 & 0xfffff3ff | 0x80);
    uVar4 = maybe_GetTimerSystemTime();
    maybe_Timer_UpdateCompare(uVar4);
    uVar2 = 0;
    if (lVar3 != 0) {
      EIntr();
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
    if (lVar3 != 0) {
      EIntr();
      uVar2 = 1;
    }
  }
  return uVar2;
}

// 0x0011b3b0  size 0x7c
undefined4 maybe_StopTimerSystemTime(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = DIntr();
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x80) == 0) {
    uVar2 = 0;
    if (lVar3 != 0) {
      EIntr();
      uVar2 = 0;
    }
  }
  else {
    Timer_SetMode(uVar1 & 0xfffff37f);
    uVar2 = 1;
    if (lVar3 != 0) {
      EIntr();
      uVar2 = 1;
    }
  }
  return uVar2;
}

// 0x0011b430  size 0x190
void maybe_Timer_UpdateCompare(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  if (-1 < DAT_003081a4) {
    return;
  }
  uVar2 = REG_RCNT2_MODE;
  if (DAT_003081a0 == (int *)0x0) {
    Timer_SetComp(0);
    Timer_SetMode(uVar2 & 0xfffff7ff);
    return;
  }
  piVar4 = (int *)*DAT_003081a0;
  uVar5 = (*(long *)(DAT_003081a0 + 8) + *(long *)(DAT_003081a0 + 4)) - *(long *)(DAT_003081a0 + 6);
  if ((piVar4 != (int *)0x0) &&
     (uVar3 = (*(long *)(piVar4 + 8) + *(long *)(piVar4 + 4)) - *(long *)(piVar4 + 6),
     uVar3 < uVar5 + 0x7333)) {
    uVar5 = uVar3;
    while( true ) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) break;
      uVar3 = (*(long *)(piVar4 + 8) + *(long *)(piVar4 + 4)) - *(long *)(piVar4 + 6);
      if (uVar5 + 0x7333 <= uVar3) {
        param_1 = uVar5 - param_1;
        goto LAB_0011b51c;
      }
      uVar5 = uVar3;
    }
  }
  param_1 = uVar5 - param_1;
LAB_0011b51c:
  if (param_1 < 0x7333) {
    iVar1 = REG_RCNT2_COUNT;
    Timer_SetComp(iVar1 + (int)(0x7333L >> (long)(int)((uVar2 & 3) << 2)));
    Timer_SetMode(uVar2 & 0xfffff7ff);
    return;
  }
  Timer_SetMode(uVar2 & 0xfffff7ff);
  Timer_SetComp((int)(uVar5 >> (long)(int)((uVar2 & 3) << 2)));
  return;
}

// 0x0011b5c0  size 0x80
void maybe_Timer_FindNextAlarm(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = DAT_003081a0;
  puVar3 = (undefined4 *)0x0;
  do {
    puVar2 = puVar1;
    if (puVar2 == (undefined4 *)0x0) {
      param_1[1] = puVar3;
LAB_0011b620:
      *param_1 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = param_1;
      }
      if (puVar3 == (undefined4 *)0x0) {
        DAT_003081a0 = param_1;
        return;
      }
      *puVar3 = param_1;
      return;
    }
    if ((ulong)((*(long *)(param_1 + 8) + *(long *)(param_1 + 4)) - *(long *)(param_1 + 6)) <
        (ulong)((*(long *)(puVar2 + 8) + *(long *)(puVar2 + 4)) - *(long *)(puVar2 + 6))) {
      param_1[1] = puVar3;
      goto LAB_0011b620;
    }
    puVar1 = (undefined4 *)*puVar2;
    puVar3 = puVar2;
  } while( true );
}

// 0x0011b648  size 0x38
int maybe_Timer_UnlinkAlarm(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((int *)param_1[1] == (int *)0x0) {
    DAT_003081a0 = iVar1;
  }
  else {
    *(int *)param_1[1] = iVar1;
  }
  if (iVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    *(int *)(iVar1 + 4) = param_1[1];
    param_1[1] = 0;
  }
  return iVar1;
}

// 0x0011b680  size 0x2a0
undefined8 maybe_Timer_IntcHandler(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  uVar1 = REG_RCNT2_MODE;
  if (((uVar1 & 0x400) != 0) && (DAT_003081a0 != (undefined4 *)0x0)) {
    puVar8 = DAT_003081a0;
    do {
      uVar1 = REG_RCNT2_COUNT;
      uVar2 = REG_RCNT2_MODE;
      lVar7 = *(long *)(puVar8 + 8);
      lVar5 = *(long *)(puVar8 + 4);
      lVar6 = *(long *)(puVar8 + 6);
      if ((uVar2 & 0x800) != 0) {
        DAT_00308188 = DAT_00308188 + 1;
        Timer_SetMode(uVar2 & 0xfffffbff);
        uVar1 = REG_RCNT2_COUNT;
      }
      uVar9 = (DAT_00308188 << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2);
      if (uVar9 < (ulong)((lVar7 + lVar5) - lVar6)) break;
      puVar4 = (undefined4 *)maybe_Timer_UnlinkAlarm(puVar8);
      DAT_003081a4 = (int)puVar8 << 4 | puVar8[2];
      uVar9 = (*(code *)puVar8[10])
                        ((int)puVar8 << 4 | puVar8[2],*(undefined8 *)(puVar8 + 8),
                         (uVar9 + *(long *)(puVar8 + 6)) - *(long *)(puVar8 + 4),puVar8[0xc],param_3
                        );
      if (uVar9 == 0) {
        puVar8[3] = puVar8[3] & 0xfffffffd;
      }
      else if (uVar9 == 0xffffffffffffffff) {
        puVar3 = puVar8;
        *puVar8 = DAT_0030819c;
        DAT_0030819c = puVar3;
        puVar8[2] = 0;
        puVar8[3] = 0;
      }
      else {
        if (uVar9 < 0x3999) {
          uVar9 = 0x3999;
        }
        *(ulong *)(puVar8 + 8) = *(long *)(puVar8 + 8) + uVar9;
        maybe_Timer_FindNextAlarm(puVar8);
      }
      puVar8 = puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  DAT_003081a4 = 0xffffffff;
  uVar1 = REG_RCNT2_COUNT;
  uVar2 = REG_RCNT2_MODE;
  if ((uVar2 & 0x800) != 0) {
    DAT_00308188 = DAT_00308188 + 1;
    Timer_SetMode(uVar2 & 0xfffffbff);
    uVar1 = REG_RCNT2_COUNT;
  }
  maybe_Timer_UpdateCompare((DAT_00308188 << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2));
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x800) != 0) {
    DAT_00308188 = DAT_00308188 + 1;
    Timer_SetMode(uVar1 & 0xfffffbff);
  }
  SYNC(0);
  EI();
  return 0;
}

// 0x0011b920  size 0x4c
long maybe_GetTimerSystemTime(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = REG_RCNT2_COUNT;
  iVar2 = REG_RCNT2_MODE;
  lVar4 = 2;
  lVar5 = DAT_00308188;
  if (((long)iVar2 & 0x800U) != 0) {
    uVar1 = REG_RCNT2_COUNT;
    lVar5 = DAT_00308188 + 1;
  }
  uVar3 = (long)iVar2 & 3;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  return ((ulong)uVar1 | lVar5 << 0x10) << (lVar4 << uVar3);
}

// 0x0011b970  size 0x7c
long maybe_iGetTimerSystemTime(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = DIntr();
  uVar1 = REG_RCNT2_COUNT;
  iVar2 = REG_RCNT2_MODE;
  lVar5 = 2;
  lVar6 = DAT_00308188;
  if (((long)iVar2 & 0x800U) != 0) {
    uVar1 = REG_RCNT2_COUNT;
    lVar6 = DAT_00308188 + 1;
  }
  uVar4 = (long)iVar2 & 3;
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  if (lVar3 != 0) {
    EIntr();
  }
  return ((ulong)uVar1 | lVar6 << 0x10) << (lVar5 << uVar4);
}

// 0x0011b9f0  size 0x70
uint maybe_Timer_AllocSlot(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = DAT_0030819c;
  if (DAT_0030819c == (undefined4 *)0x0) {
    return 0x80008005;
  }
  uVar3 = (int)DAT_0030819c << 4;
  DAT_00308198 = DAT_00308198 + 1;
  DAT_0030819c[10] = 0;
  DAT_0030819c[3] = 0;
  puVar1 = (undefined8 *)(DAT_0030819c + 6);
  DAT_0030819c = (undefined4 *)*DAT_0030819c;
  *puVar1 = 0;
  DAT_00308194 = DAT_00308194 + 1;
  puVar2[2] = (DAT_00308194 & 0x1ff) << 1 | 1;
  return uVar3 | puVar2[2];
}

// 0x0011ba60  size 0x48
undefined8 maybe_AllocTimerCounter(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DIntr();
  uVar2 = maybe_Timer_AllocSlot();
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011baa8  size 0xa0
undefined8 maybe_iFreeTimerCounter(uint param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((param_1 >> 10) * 0x40);
  if (((int)param_1 < 0) || ((param_1 & 0x3ff) != puVar2[2])) {
    uVar1 = 0xffffffff80008002;
  }
  else if (DAT_003081a4 == param_1) {
    uVar1 = 0xffffffff80000010;
  }
  else {
    if ((puVar2[3] & 2) != 0) {
      maybe_Timer_UnlinkAlarm(puVar2);
    }
    puVar2[2] = 0;
    uVar1 = 0;
    puVar2[3] = 0;
    *puVar2 = DAT_0030819c;
    DAT_00308198 = DAT_00308198 + -1;
    DAT_0030819c = puVar2;
  }
  return uVar1;
}

// 0x0011bb48  size 0x4c
undefined8 maybe_FreeTimerCounter(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DIntr();
  uVar2 = maybe_iFreeTimerCounter(param_1);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011bb98  size 0x50
undefined8 maybe_iGetTimerUsedUnitSize(long param_1,long param_2)

{
  if (DAT_00308190 < 0) {
    return 0xffffffff80008001;
  }
  if (param_1 != 0) {
    *(int *)param_1 = DAT_00308198;
  }
  if (param_2 != 0) {
    *(int *)param_2 = 0x80 - DAT_00308198;
  }
  return 0;
}

// 0x0011bbe8  size 0x5c
undefined8 maybe_GetTimerUsedUnitSize(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DIntr();
  uVar2 = maybe_iGetTimerUsedUnitSize(param_1,param_2);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011bc48  size 0xac
undefined4 maybe_iStartTimerCounter(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (param_1 >> 10) * 0x40;
  if (((int)param_1 < 0) || ((param_1 & 0x3ff) != *(uint *)(iVar4 + 8))) {
    uVar2 = 0x80008002;
  }
  else if (DAT_003081a4 == param_1) {
    uVar2 = 0x80000010;
  }
  else {
    uVar2 = 1;
    if ((*(uint *)(iVar4 + 0xc) & 1) == 0) {
      uVar3 = maybe_GetTimerSystemTime();
      uVar1 = *(uint *)(iVar4 + 0xc);
      *(undefined8 *)(iVar4 + 0x10) = uVar3;
      *(uint *)(iVar4 + 0xc) = uVar1 | 1;
      if ((uVar1 & 2) != 0) {
        maybe_Timer_FindNextAlarm(iVar4);
        maybe_Timer_UpdateCompare(uVar3);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

// 0x0011bcf8  size 0x4c
undefined8 maybe_StartTimerCounter(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DIntr();
  uVar2 = maybe_iStartTimerCounter(param_1);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011bd48  size 0xc4
undefined4 maybe_iStopTimerCounter(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (param_1 >> 10) * 0x40;
  if (((int)param_1 < 0) || ((param_1 & 0x3ff) != *(uint *)(iVar4 + 8))) {
    uVar2 = 0x80008002;
  }
  else if (DAT_003081a4 == param_1) {
    uVar2 = 0x80000010;
  }
  else {
    uVar2 = 0;
    if ((*(uint *)(iVar4 + 0xc) & 1) != 0) {
      lVar3 = maybe_GetTimerSystemTime();
      uVar1 = *(uint *)(iVar4 + 0xc);
      *(long *)(iVar4 + 0x18) = *(long *)(iVar4 + 0x18) + (lVar3 - *(long *)(iVar4 + 0x10));
      *(uint *)(iVar4 + 0xc) = uVar1 & 0xfffffffe;
      if ((uVar1 & 2) != 0) {
        maybe_Timer_UnlinkAlarm(iVar4);
        maybe_Timer_UpdateCompare(lVar3);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

// 0x0011be10  size 0x4c
undefined8 maybe_StopTimerCounter(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DIntr();
  uVar2 = maybe_iStopTimerCounter(param_1);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011be60  size 0xcc
long maybe_SetTimerCount(uint param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = (param_1 >> 10) * 0x40;
  lVar1 = DIntr();
  if ((((int)param_1 < 0) || ((param_1 & 0x3ff) != *(uint *)(iVar4 + 8))) ||
     (DAT_003081a4 == param_1)) {
    lVar5 = -1;
    if (lVar1 != 0) {
      EIntr();
      lVar5 = -1;
    }
  }
  else {
    lVar5 = *(long *)(iVar4 + 0x18);
    if ((*(uint *)(iVar4 + 0xc) & 1) == 0) {
      *(undefined8 *)(iVar4 + 0x18) = param_2;
    }
    else {
      lVar2 = maybe_GetTimerSystemTime();
      lVar3 = *(long *)(iVar4 + 0x10);
      *(undefined8 *)(iVar4 + 0x18) = param_2;
      *(long *)(iVar4 + 0x10) = lVar2;
      lVar5 = lVar5 + (lVar2 - lVar3);
    }
    if (lVar1 != 0) {
      EIntr();
    }
  }
  return lVar5;
}

// 0x0011bf30  size 0x48
long maybe_iGetTimerBaseTime(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 >> 10) * 0x40;
  if (((int)param_1 < 0) || ((param_1 & 0x3ff) != *(uint *)(iVar1 + 8))) {
    return -1;
  }
  if ((*(uint *)(iVar1 + 0xc) & 1) == 0) {
    return 0;
  }
  return *(long *)(iVar1 + 0x10) - *(long *)(iVar1 + 0x18);
}

// 0x0011bf78  size 0x4c
undefined8 maybe_GetTimerBaseTime(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DIntr();
  uVar2 = maybe_iGetTimerBaseTime(param_1);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011bfc8  size 0x6c
long maybe_iGetTimerCount(uint param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (param_1 >> 10) * 0x40;
  if (((int)param_1 < 0) || ((param_1 & 0x3ff) != *(uint *)(iVar3 + 8))) {
    lVar2 = -1;
  }
  else {
    lVar2 = *(long *)(iVar3 + 0x18);
    if ((*(uint *)(iVar3 + 0xc) & 1) != 0) {
      lVar1 = maybe_GetTimerSystemTime();
      lVar2 = lVar2 + (lVar1 - *(long *)(iVar3 + 0x10));
    }
  }
  return lVar2;
}

