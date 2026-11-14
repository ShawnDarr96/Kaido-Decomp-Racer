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
  
  lVar2 = libkernl_sub_00115378();
  maybe_Fio_Lock(0x16);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Unlock();
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (lVar2 != 0) {
      puVar6 = (undefined4 *)lVar2;
      uVar1 = puVar6[1];
      if (uVar1 != 0) {
        uRam00372b0c = *puVar6;
        iRam00372b1c = (int)(puVar6 + -0xdd000) >> 4;
        uStack_ac = 1;
        uStack_a8 = 0;
        uStack_9c = 0;
        uRam00372b10 = param_2;
        uRam00372b18 = param_3;
        uVar3 = CreateSema(auStack_b0);
        puRam00372b04 = auStack_90;
        uRam00372b08 = 8;
        iRam00372b00 = (int)uVar3;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(DAT_00306b8c);
          if (DAT_00306af8 == -1) {
            DAT_00306af8 = iRam00372b00;
            iRam00372b00 = -iRam00372b00;
          }
          else {
            iVar5 = 1;
            do {
              if (0x1f < iVar5) goto LAB_001182ec;
              piVar4 = &DAT_00306af8 + iVar5;
              iVar5 = iVar5 + 1;
            } while (*piVar4 != -1);
            *piVar4 = iRam00372b00;
            iRam00372b00 = -iRam00372b00;
          }
LAB_001182ec:
          SignalSema(DAT_00306b8c);
        }
        lVar2 = sceSifCallRpc(0x374200,0x16,0,0x372b00,0x20,0x373740,4,0);
        iVar5 = DAT_20373740;
        if (lVar2 < 0) {
          DeleteSema(uVar3);
          maybe_Fio_Unlock();
          return 0xfffffffffffffff5;
        }
        maybe_Fio_Unlock();
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
    maybe_Fio_Unlock();
    uVar3 = 0xfffffffffffffff7;
  }
                    /* WARNING: Read-only address (ram,0x20373740) is written */
  return uVar3;
}

// 0x001183c8  size 0x238
undefined4
maybe_sceDevctl(char *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
               ulong param_6)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_bc;
  undefined4 auStack_b0 [4];
  
  maybe_Fio_Lock(0x17);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b0c = *param_1;
  }
  else {
    cRam00372b0c = *param_1;
  }
  iVar6 = 0;
  if (cRam00372b0c != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 &&
        (cVar1 = param_1[iVar6], *(char *)(iVar6 + 0x372b0c) = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    uRam00372f0b = 0;
  }
  if ((param_4 < 0x401) && (param_6 < 0x401)) {
    uVar7 = 0;
    if (param_4 != 0) {
      do {
        puVar2 = (undefined1 *)(param_3 + uVar7);
        puVar5 = (undefined1 *)(uVar7 + 0x372f0c);
        uVar7 = uVar7 + 1;
        *puVar5 = *puVar2;
      } while (uVar7 < param_4);
    }
    uStack_cc = 1;
    uStack_c8 = 0;
    uStack_bc = 0;
    uRam0037330c = param_2;
    uRam00373310 = param_4;
    uVar3 = CreateSema(auStack_d0);
    uRam00373318 = (undefined4)param_6;
    uRam00372b08 = 4;
    uRam00372b00 = (undefined4)uVar3;
    puRam00372b04 = auStack_b0;
    uRam00373314 = param_5;
    sceSifWriteBackDCache(0x372b00,0x81c);
    lVar4 = sceSifCallRpc(0x374200,0x17,0,0x372b00,0x81c,0x373740,4,0);
    iVar6 = DAT_20373740;
    if (lVar4 < 0) {
      DeleteSema(uVar3);
      maybe_Fio_Unlock();
      auStack_b0[0] = 0xfffffff5;
    }
    else {
      maybe_Fio_Unlock();
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
    maybe_Fio_Unlock();
    auStack_b0[0] = 0xffffffea;
  }
  return auStack_b0[0];
}

// 0x00118600  size 0x1e0
undefined4 libkernl_sub_00118600(char *param_1,char *param_2)

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
  
  maybe_Fio_Lock(0x11);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b0c = *param_1;
  }
  else {
    cRam00372b0c = *param_1;
  }
  iVar4 = 0;
  if (cRam00372b0c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_1[iVar4], *(char *)(iVar4 + 0x372b0c) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    uRam00372f0b = 0;
  }
  cRam00372f0c = *param_2;
  iVar4 = 0;
  if (cRam00372f0c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_2[iVar4], *(char *)(iVar4 + 0x372f0c) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    uRam0037330b = 0;
  }
  uStack_a8 = 0;
  uStack_ac = 1;
  uStack_9c = 0;
  uVar2 = CreateSema(auStack_b0);
  uRam00372b00 = (undefined4)uVar2;
  uRam00372b08 = 4;
  puRam00372b04 = auStack_90;
  lVar3 = sceSifCallRpc(0x374200,0x18,0,0x372b00,0x80c,0x373740,4,0);
  iVar4 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    maybe_Fio_Unlock();
    auStack_90[0] = 0xfffffff5;
  }
  else {
    maybe_Fio_Unlock();
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
undefined4 libkernl_sub_001187e0(char *param_1,undefined8 param_2,ulong param_3)

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
  
  maybe_Fio_Lock(0x11);
  if (DAT_00306b7c == 0) {
    maybe_Fio_Bind();
    cRam00372b14 = *param_1;
  }
  else {
    cRam00372b14 = *param_1;
  }
  iVar4 = 0;
  if (cRam00372b14 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_1[iVar4], *(char *)(iVar4 + 0x372b14) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    uRam00372f13 = 0;
  }
  if (0x3ff < param_3) {
    param_3 = 0x3ff;
  }
  uRam00372b10 = (undefined4)param_2;
  uRam00372b0c = (undefined4)param_3;
  sceSifWriteBackDCache(param_2,param_3);
  uStack_b8 = 0;
  uStack_bc = 1;
  uStack_ac = 0;
  uVar2 = CreateSema(auStack_c0);
  uRam00372b00 = (undefined4)uVar2;
  uRam00372b08 = 4;
  puRam00372b04 = auStack_a0;
  lVar3 = sceSifCallRpc(0x374200,0x19,0,0x372b00,0x80c,0x373740,4,0);
  iVar4 = DAT_20373740;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    maybe_Fio_Unlock();
    auStack_a0[0] = 0xfffffff5;
  }
  else {
    maybe_Fio_Unlock();
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
undefined4 loadfile_sub_001189a8(void)

{
  int iVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = sceSifBindRpc(0x374300,0xffffffff80000003,0);
    if (lVar2 < 0) {
      return 0xffffffff;
    }
    if (iRam00374324 != 0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  DAT_00306b98 = 0;
  return 0;
}

// 0x00118a30  size 0x70
undefined4 loadfile_sub_00118a30(undefined4 param_1)

{
  long lVar1;
  
  if ((DAT_00306b98 < 0) ||
     (uRam00374380 = param_1, lVar1 = sceSifCallRpc(0x374300,1,0,0x374380,4,0x374340,4,0), lVar1 < 0
     )) {
    return 0;
  }
  return uRam00374340;
}

// 0x00118aa0  size 0x80
undefined4 loadfile_sub_00118aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (-1 < DAT_00306b98) {
    uRam00374380 = param_2;
    uRam00374384 = param_1;
    uRam00374388 = param_3;
    lVar2 = sceSifCallRpc(0x374300,4,0,0x374380,0xc,0x374340,4,0);
    uVar1 = uRam00374340;
    if (lVar2 < 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

// 0x00118b20  size 0x78
undefined4 loadfile_sub_00118b20(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    uRam00374380 = param_1;
    lVar2 = sceSifCallRpc(0x374300,2,0,0x374380,4,0x374340,4,0);
    uVar1 = uRam00374340;
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// 0x00118b98  size 0x1c
void loadfile_sub_00118b98(void)

{
  loadfile_sub_00118b20();
  return;
}

// 0x00118bb8  size 0xf0
undefined4 loadfile_sub_00118bb8(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  if (DAT_00306b98 < 0) {
    uVar2 = 0;
  }
  else {
    cRam003743c4 = *param_1;
    iVar4 = 0;
    if (cRam003743c4 != '\0') {
      for (iVar4 = 1;
          (iVar4 < 0xfc &&
          (cVar1 = param_1[iVar4], *(char *)(iVar4 + 0x3743c4) = cVar1, cVar1 != '\0'));
          iVar4 = iVar4 + 1) {
      }
    }
    if (iVar4 == 0xfc) {
      iVar4 = 0xfb;
    }
    uRam003744bf = 0;
    uRam003743c0 = param_2;
    lVar3 = sceSifCallRpc(0x374300,3,0,0x3743c0,iVar4 + 5,0x374340,4,0);
    uVar2 = uRam00374340;
    if (lVar3 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

// 0x00118ca8  size 0x70
undefined4 loadfile_sub_00118ca8(void)

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
      uVar1 = uRam00374340;
    }
  }
  return uVar1;
}

// 0x00118d18  size 0x70
undefined4 loadfile_sub_00118d18(void)

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
      uVar1 = uRam00374340;
    }
  }
  return uVar1;
}

// 0x00118d88  size 0x70
undefined4 loadfile_sub_00118d88(void)

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
      uVar1 = uRam00374340;
    }
  }
  return uVar1;
}

// 0x00118df8  size 0x7c
undefined4 loadfile_sub_00118df8(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    uRam00374380 = param_1;
    lVar2 = sceSifCallRpc(0x374300,8,0,0x374380,4,0x374340,4,0);
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = uRam00374340;
    }
  }
  return uVar1;
}

// 0x00118e78  size 0x7c
undefined4 loadfile_sub_00118e78(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00306b98 < 0) {
    uVar1 = 0;
  }
  else {
    uRam00374380 = param_1;
    lVar2 = sceSifCallRpc(0x374300,9,0,0x374380,4,0x374340,4,0);
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = uRam00374340;
    }
  }
  return uVar1;
}

// 0x00118ef8  size 0x100
undefined4 loadfile_sub_00118ef8(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if (DAT_00306ba0 < 0) {
    while (lVar3 = sceSifBindRpc(0x3746c0,0xffffffff80000006,0), -1 < lVar3) {
      if (iRam003746e4 != 0) {
        DAT_00306ba0 = 0;
        lVar3 = sceSifCallRpc(0x3746c0,0xff,0,0,0,0x3744c0,4,0);
        if (lVar3 < 0) {
          return 0xfffeffff;
        }
        uRam003746e8 = uRam003744c0;
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
bool loadfile_sub_00118ff8(void)

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
undefined8 loadfile_sub_00119088(void)

{
  DAT_00306ba0 = 0xffffffff;
  memset(0x3746e8,0,4);
  return 0;
}

// 0x001190c0  size 0x208
undefined4
loadfile_sub_001190c0(undefined4 param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = loadfile_sub_00118ef8();
  uVar2 = 0xffff0000;
  if (-1 < lVar3) {
    lVar3 = loadfile_sub_00118ff8();
    if (lVar3 == 0) {
      uRam003744c0 = param_1;
      if (param_3 == (undefined8 *)0x0) {
        uRam003744c4 = 0;
      }
      else if (param_2 < 0xfd) {
        memcpy(0x3745c4,param_3,param_2);
        uRam003744c4 = (undefined4)param_2;
      }
      else {
        puVar4 = (undefined8 *)0x3745c4;
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
        uRam003744c4 = 0xfc;
      }
      lVar3 = sceSifCallRpc(0x3746c0,6,0,0x3744c0,0x200,0x3744c0,8,0);
      uVar2 = uRam003744c0;
      if (lVar3 < 0) {
        uVar2 = 0xfffeffff;
      }
      else {
        *param_4 = uRam003744c4;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

// 0x001192c8  size 0x208
undefined4
loadfile_sub_001192c8(undefined4 param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = loadfile_sub_00118ef8();
  uVar2 = 0xffff0000;
  if (-1 < lVar3) {
    lVar3 = loadfile_sub_00118ff8();
    if (lVar3 == 0) {
      uRam003744c0 = param_1;
      if (param_3 == (undefined8 *)0x0) {
        uRam003744c4 = 0;
      }
      else if (param_2 < 0xfd) {
        memcpy(0x3745c4,param_3,param_2);
        uRam003744c4 = (undefined4)param_2;
      }
      else {
        puVar4 = (undefined8 *)0x3745c4;
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
        uRam003744c4 = 0xfc;
      }
      lVar3 = sceSifCallRpc(0x3746c0,7,0,0x3744c0,0x200,0x3744c0,8,0);
      uVar2 = uRam003744c0;
      if (lVar3 < 0) {
        uVar2 = 0xfffeffff;
      }
      else {
        *param_4 = uRam003744c4;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

// 0x001194d0  size 0x90
undefined4 loadfile_sub_001194d0(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = loadfile_sub_00118ef8();
  uVar1 = 0xffff0000;
  if (-1 < lVar2) {
    lVar2 = loadfile_sub_00118ff8();
    if (lVar2 == 0) {
      uRam003744c0 = param_1;
      lVar2 = sceSifCallRpc(0x3746c0,8,0,0x3744c0,4,0x3744c0,4,0);
      if (lVar2 < 0) {
        uVar1 = 0xfffeffff;
      }
      else {
        uVar1 = uRam003744c0;
      }
    }
    else {
      uVar1 = 0xfffefffc;
    }
  }
  return uVar1;
}

// 0x00119560  size 0xa0
undefined4 loadfile_sub_00119560(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = loadfile_sub_00118ef8();
  uVar1 = 0xffff0000;
  if (-1 < lVar2) {
    lVar2 = loadfile_sub_00118ff8();
    if (lVar2 == 0) {
      maybe_strncpy(0x3744c8,param_1,0xfc);
      uRam003745c3 = 0;
      lVar2 = sceSifCallRpc(0x3746c0,9,0,0x3744c0,0x200,0x3744c0,4,0);
      if (lVar2 < 0) {
        uVar1 = 0xfffeffff;
      }
      else {
        uVar1 = uRam003744c0;
      }
    }
    else {
      uVar1 = 0xfffefffc;
    }
  }
  return uVar1;
}

// 0x00119600  size 0x90
undefined4 loadfile_sub_00119600(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = loadfile_sub_00118ef8();
  uVar1 = 0xffff0000;
  if (-1 < lVar2) {
    lVar2 = loadfile_sub_00118ff8();
    if (lVar2 == 0) {
      uRam003744c0 = param_1;
      lVar2 = sceSifCallRpc(0x3746c0,10,0,0x3744c0,4,0x3744c0,4,0);
      if (lVar2 < 0) {
        uVar1 = 0xfffeffff;
      }
      else {
        uVar1 = uRam003744c0;
      }
    }
    else {
      uVar1 = 0xfffefffc;
    }
  }
  return uVar1;
}

// 0x00119690  size 0x1c
void loadfile_sub_00119690(void)

{
  loadfile_sub_001190c0();
  return;
}

// 0x001196b0  size 0x1c
void loadfile_sub_001196b0(void)

{
  loadfile_sub_001190c0();
  return;
}

// 0x001196d0  size 0x224
undefined4
loadfile_sub_001196d0
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
  
  lVar3 = loadfile_sub_00118ef8();
  uVar2 = 0xffff0000;
  if (-1 < lVar3) {
    lVar3 = loadfile_sub_00118ff8();
    if (lVar3 == 0) {
      maybe_strncpy(0x3744c8,param_1,0xfc);
      uRam003745c3 = 0;
      if (param_3 == (undefined8 *)0x0) {
        uRam003745c4 = 0;
        uRam003744c0 = 0;
      }
      else if (param_2 < 0xfd) {
        memcpy(0x3745c4,param_3,param_2);
        uRam003744c0 = (undefined4)param_2;
      }
      else {
        puVar4 = (undefined8 *)0x3745c4;
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
        uRam003744c0 = 0xfc;
      }
      lVar3 = sceSifCallRpc(0x3746c0,param_5,0,0x3744c0,0x200,0x3744c0,8,0);
      uVar2 = uRam003744c0;
      if (lVar3 < 0) {
        uVar2 = 0xfffeffff;
      }
      else {
        *param_4 = uRam003744c4;
      }
    }
    else {
      uVar2 = 0xfffefffc;
    }
  }
  return uVar2;
}

// 0x001198f8  size 0x20
void loadfile_sub_001198f8(void)

{
  loadfile_sub_001196d0();
  return;
}

// 0x00119918  size 0x1c
void loadfile_sub_00119918(void)

{
  loadfile_sub_001196d0();
  return;
}

// 0x00119938  size 0x104
undefined8
loadfile_sub_00119938(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = loadfile_sub_00118ef8();
  uVar2 = 0xffffffffffff0000;
  if (-1 < lVar1) {
    lVar1 = loadfile_sub_00118ff8();
    if (lVar1 == 0) {
      maybe_strncpy(0x3744c8,param_1,0xfc);
      uRam003745c3 = 0;
      maybe_strncpy(0x3745c4,param_2,0xfc);
      uRam003746bf = 0;
      lVar1 = sceSifCallRpc(0x3746c0,param_4,0,0x3744c0,0x200,0x3744c0,0x10,0);
      if (lVar1 < 0) {
        uVar2 = 0xfffffffffffeffff;
      }
      else if (iRam003744c0 == 0) {
        uVar2 = 0xfffffffffffefffd;
      }
      else {
        *param_3 = iRam003744c0;
        uVar2 = 0;
        param_3[1] = iRam003744c4;
      }
    }
    else {
      uVar2 = 0xfffffffffffefffc;
    }
  }
  return uVar2;
}

// 0x00119a40  size 0x1c
void loadfile_sub_00119a40(void)

{
  loadfile_sub_00119938();
  return;
}

// 0x00119a88  size 0xec
undefined8 loadfile_sub_00119a88(undefined4 param_1,undefined4 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = loadfile_sub_00118ef8();
  if (lVar1 < 0) {
    return 0xffffffffffff0000;
  }
  if (param_3 < 3) {
    uRam003744c4 = (undefined4)param_3;
    uRam003744c0 = param_1;
    lVar1 = sceSifCallRpc(0x3746c0,3,0,0x3744c0,0x20,0x3744c0,0x20,0);
    if (lVar1 < 0) {
      return 0xfffffffffffeffff;
    }
    if (param_3 == 0) {
      *(undefined1 *)param_2 = (undefined1)uRam003744c0;
    }
    else if (param_3 == 1) {
      *(undefined2 *)param_2 = (undefined2)uRam003744c0;
    }
    else {
      if (param_3 != 2) goto LAB_00119b44;
      *param_2 = uRam003744c0;
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
undefined8 loadfile_sub_00119b78(undefined4 param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = loadfile_sub_00118ef8();
  if (lVar1 < 0) {
    uVar2 = 0xffffffffffff0000;
  }
  else {
    uRam003744c4 = (undefined4)param_3;
    if (param_3 == 0) {
      uRam003744c8 = CONCAT31(uRam003744c8._1_3_,*(undefined1 *)param_2);
    }
    else if (param_3 == 1) {
      uRam003744c8 = CONCAT22(uRam003744c8._2_2_,*(undefined2 *)param_2);
    }
    else {
      if (param_3 != 2) {
        uRam003744c0 = param_1;
        return 0xfffffffffffefffe;
      }
      uRam003744c8 = *param_2;
    }
    uRam003744c0 = param_1;
    lVar1 = sceSifCallRpc(0x3746c0,2,0,0x3744c0,0x20,0x3744c0,0x10,0);
    uVar2 = 0xfffffffffffeffff;
    if (-1 < lVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

// 0x00119c58  size 0x154
bool maybe_sceSifResetIop(char *param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  libkernl_sub_0011c950(0,0);
  libkernl_sub_0011c950(1,0);
  sceSifStopDma();
  uStack_3c = sceSifGetReg(0xffffffff80000000);
  iRam00374710 = 0;
  uRam00374714 = param_2;
  if (*param_1 != '\0') {
    cVar2 = *param_1;
    iVar3 = iRam00374710;
    while( true ) {
      iRam00374710 = iVar3 + 1;
      *(char *)(iVar3 + 0x374718) = cVar2;
      if (param_1[iRam00374710] == '\0') break;
      cVar2 = param_1[iRam00374710];
      iVar3 = iRam00374710;
    }
  }
  uRam00374708 = 0x80000003;
  uRam00374700 = 0x68;
  uStack_38 = 0x68;
  uStack_34 = 0x44;
  uStack_40 = 0x374700;
  sceSifWriteBackDCache(0x374700,0x68);
  sceSifSetReg(4,0x40000);
  lVar1 = sceSifSetDma(&uStack_40,1);
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
    libkernl_sub_00111c20();
    libkernl_sub_0011c950(1,1);
    libkernl_sub_0011c950(0,1);
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
undefined8 libkernl_sub_00119f38(undefined8 param_1)

{
  DAT_00306ed8 = (undefined4)param_1;
  SetVTLBRefillHandler(1,0x11a480);
  SetVTLBRefillHandler(2,0x11a480);
  SetVTLBRefillHandler(3,0x11a480);
  return param_1;
}

// 0x0011a020  size 0x10
void libkernl_sub_0011a020(void)

{
  syscall(0x5a);
  return;
}

// 0x0011a068  size 0x10
void RFU091(void)

{
  syscall(0x5b);
  return;
}

// 0x0011a078  size 0x10
void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}

// 0x0011a088  size 0xc4
void libkernl_sub_0011a088(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 3;
  puVar3 = &DAT_00306f40;
  RFU116_SetSyscall(DAT_00306f28,PTR_LAB_00306f2c);
  libkernl_sub_0011a020(0xffffffff80075000,0x306ba8,0x330);
  FlushCache(0);
  FlushCache(2);
  RFU116_SetSyscall(DAT_00306f30,DAT_00306f34);
  RFU116_SetSyscall(DAT_00306f38,PTR_LAB_00306f3c);
  uVar1 = DAT_00306f40;
  while( true ) {
    uVar4 = uVar4 + 1;
    uVar2 = RFU091(uVar1);
    uVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    RFU116_SetSyscall(uVar1,uVar2);
    if (7 < uVar4) break;
    uVar1 = *puVar3;
  }
  DAT_00306f20 = RFU091(3);
  return;
}

// 0x0011a170  size 0x10
void RFU086_WaitEvnetFlag(void)

{
  syscall(0x56);
  return;
}

// 0x0011a180  size 0x30
undefined8 libkernl_sub_0011a180(int param_1)

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
void libkernl_sub_0011a850(void)

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

// 0x0011a8a8  size 0x10
void libkernl_sub_0011a8a8(void)

{
  syscall(0x5a);
  return;
}

// 0x0011a930  size 0x10
void libkernl_sub_0011a930(void)

{
  syscall(0x83);
  return;
}

// 0x0011a940  size 0x34
undefined4 libkernl_sub_0011a940(int param_1)

{
  undefined4 auStack_20 [4];
  
  libkernl_sub_0011a8a8(auStack_20,DAT_003071f8 + param_1 * 4,4);
  return auStack_20[0];
}

// 0x0011a978  size 0xfc
void libkernl_sub_0011a978(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  RFU116_SetSyscall(DAT_00307200,PTR_LAB_00307204);
  RFU116_SetSyscall(DAT_00307208,PTR_LAB_0030720c);
  iVar2 = libkernl_sub_0011a930(0xffffffff80000000,0xffffffff80080000,0x11a8f0);
  iVar3 = libkernl_sub_0011a930(0xffffffff80000000,0xffffffff80080000,0x11a8b8);
  uVar5 = iVar2 - 0x20c;
  uVar4 = iVar3 - 0x168;
  if (uVar5 == uVar4) {
    DAT_003071f8 = uVar5;
  }
  else {
    bVar1 = uVar5 < uVar4;
    do {
      if (bVar1) {
        iVar2 = libkernl_sub_0011a930(iVar2 + 4,0xffffffff80080000,0x11a8f0);
        uVar5 = iVar2 - 0x20c;
      }
      else {
        iVar3 = libkernl_sub_0011a930(iVar3 + 4,0xffffffff80080000,0x11a8b8);
        uVar4 = iVar3 - 0x168;
      }
      bVar1 = uVar5 < uVar4;
    } while (uVar5 != uVar4);
    DAT_003071f8 = uVar5;
  }
  return;
}

// 0x0011aa78  size 0x10
void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}

// 0x0011aa88  size 0x54
/* called from entry */

void _InitSys(void)

{
  libkernl_sub_0011a850();
  libkernl_sub_0011a978();
  libkernl_sub_0011af68();
  maybe_InitTimer(2);
  maybe_StartTimerSystemTime();
  maybe_InitThreadExtension();
  libkernl_sub_0011abb0();
  libkernl_sub_0011a088();
  libkernl_sub_0011c798();
  return;
}

// 0x0011aae0  size 0x10
void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}

// 0x0011aaf0  size 0x10
void libkernl_sub_0011aaf0(void)

{
  syscall(0x5a);
  return;
}

// 0x0011ab38  size 0x10
void RFU091(void)

{
  syscall(0x5b);
  return;
}

// 0x0011ab48  size 0x68
bool libkernl_sub_0011ab48(void)

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
void libkernl_sub_0011abb0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  lVar2 = libkernl_sub_0011ab48();
  if (lVar2 != 0) {
    uVar5 = 2;
    puVar4 = &DAT_003079d0;
    RFU116_SetSyscall(DAT_003079c0,PTR_LAB_003079c4);
    libkernl_sub_0011aaf0(0xffffffff80074000,0x307218,0x7a8);
    FlushCache(0);
    FlushCache(2);
    RFU116_SetSyscall(DAT_003079c8,DAT_003079cc);
    uVar1 = DAT_003079d0;
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar3 = RFU091(uVar1);
      uVar1 = *puVar4;
      puVar4 = puVar4 + 2;
      RFU116_SetSyscall(uVar1,uVar3);
      if (2 < uVar5) break;
      uVar1 = *puVar4;
    }
  }
  return;
}

// 0x0011ac60  size 0x10
void libkernl_sub_0011ac60(void)

{
  syscall(0x5a);
  return;
}

// 0x0011aca0  size 0x10
void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}

// 0x0011acb0  size 0x118
int libkernl_sub_0011acb0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int aiStack_80 [4];
  
  iVar4 = DAT_00306f20;
  iVar2 = DAT_00306f20 + 0x40;
  aiStack_80[0] = iVar2;
  RFU116_SetSyscall(DAT_003079d8,PTR_LAB_003079dc);
  if (0xf < param_2) {
    param_2 = 0xf;
  }
  libkernl_sub_0011ac60(iVar4,aiStack_80,4);
  iVar3 = strlen(param_1);
  libkernl_sub_0011ac60(aiStack_80[0],param_1,iVar3 + 1);
  aiStack_80[0] = aiStack_80[0] + iVar3 + 1;
  if (0 < param_2) {
    do {
      iVar4 = iVar4 + 4;
      libkernl_sub_0011ac60(iVar4,aiStack_80,4);
      param_2 = param_2 + -1;
      iVar3 = strlen(*param_3);
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      libkernl_sub_0011ac60(aiStack_80[0],uVar1,iVar3 + 1);
      aiStack_80[0] = aiStack_80[0] + iVar3 + 1;
    } while (param_2 != 0);
  }
  return iVar2;
}

// 0x0011ae40  size 0x48
void LoadExecPS2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = libkernl_sub_0011acb0();
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
  libkernl_sub_0011acb0(0x35f440,param_1,param_2);
  maybe_kernl_ResetTLB();
  _ExecOSD(param_1,DAT_00306f20 + 4);
  return;
}

// 0x0011af00  size 0x10
void RFU116_SetSyscall(void)

{
  syscall(0x74);
  return;
}

// 0x0011af10  size 0x10
void libkernl_sub_0011af10(void)

{
  syscall(0x5a);
  return;
}

// 0x0011af58  size 0x10
void RFU091(void)

{
  syscall(0x5b);
  return;
}

// 0x0011af68  size 0xd4
void libkernl_sub_0011af68(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = REG_RCNT3_MODE;
  if ((uVar4 & 0x100) == 0) {
    uVar4 = 2;
    puVar3 = &DAT_00308158;
    RFU116_SetSyscall(DAT_00308148,PTR_LAB_0030814c);
    libkernl_sub_0011af10(0xffffffff80076000,0x3079e0,0x740);
    libkernl_sub_0011af10(0x82000,0x308120,0x28);
    FlushCache(0);
    FlushCache(2);
    RFU116_SetSyscall(DAT_00308150,DAT_00308154);
    uVar1 = DAT_00308158;
    while( true ) {
      uVar4 = uVar4 + 1;
      uVar2 = RFU091(uVar1);
      uVar1 = *puVar3;
      puVar3 = puVar3 + 2;
      RFU116_SetSyscall(uVar1,uVar2);
      if (7 < uVar4) break;
      uVar1 = *puVar3;
    }
  }
  return;
}

// 0x0011b040  size 0x68
void libkernl_sub_0011b040(undefined4 *param_1,undefined4 param_2)

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

// 0x0011b0b0  size 0x10
void libkernl_sub_0011b0b0(undefined8 param_1)

{
  libkernl_sub_0011b040(0xffffffffb0001000,param_1);
  return;
}

// 0x0011b0c0  size 0x10
void libkernl_sub_0011b0c0(undefined8 param_1)

{
  libkernl_sub_0011b040(0xffffffffb0001010,param_1);
  return;
}

// 0x0011b0d0  size 0x10
void libkernl_sub_0011b0d0(undefined8 param_1)

{
  libkernl_sub_0011b040(0xffffffffb0001020,param_1);
  return;
}

// 0x0011b0e0  size 0x154
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
    piVar5 = (int *)0x377980;
    do {
      *piVar5 = iVar4;
      iVar1 = iVar1 + -1;
      piVar5 = piVar5 + -0x10;
      iVar4 = iVar4 + -0x40;
    } while (-1 < iVar1);
    uRam00377980 = 0;
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
        libkernl_sub_0011b0b0(0);
        libkernl_sub_0011b0d0(0xffff);
      }
      libkernl_sub_0011b0c0(uVar6);
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
      libkernl_sub_0011b0c0(0xc00);
      libkernl_sub_0011b0b0(0);
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
    libkernl_sub_0011b0c0(uVar1 & 0xfffff3ff | 0x80);
    uVar4 = maybe_GetTimerSystemTime();
    libkernl_sub_0011b430(uVar4);
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
    libkernl_sub_0011b0c0(uVar1 & 0xfffff37f);
    uVar2 = 1;
    if (lVar3 != 0) {
      EIntr();
      uVar2 = 1;
    }
  }
  return uVar2;
}

// 0x0011b430  size 0x190
void libkernl_sub_0011b430(long param_1)

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
    libkernl_sub_0011b0d0(0);
    libkernl_sub_0011b0c0(uVar2 & 0xfffff7ff);
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
    libkernl_sub_0011b0d0(iVar1 + (int)(0x7333L >> (long)(int)((uVar2 & 3) << 2)));
    libkernl_sub_0011b0c0(uVar2 & 0xfffff7ff);
    return;
  }
  libkernl_sub_0011b0c0(uVar2 & 0xfffff7ff);
  libkernl_sub_0011b0d0((int)(uVar5 >> (long)(int)((uVar2 & 3) << 2)));
  return;
}

// 0x0011b5c0  size 0x80
void libkernl_sub_0011b5c0(undefined4 *param_1)

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
int libkernl_sub_0011b648(int *param_1)

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
        libkernl_sub_0011b0c0(uVar2 & 0xfffffbff);
        uVar1 = REG_RCNT2_COUNT;
      }
      uVar9 = (DAT_00308188 << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2);
      if (uVar9 < (ulong)((lVar7 + lVar5) - lVar6)) break;
      puVar4 = (undefined4 *)libkernl_sub_0011b648(puVar8);
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
        libkernl_sub_0011b5c0(puVar8);
      }
      puVar8 = puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  DAT_003081a4 = 0xffffffff;
  uVar1 = REG_RCNT2_COUNT;
  uVar2 = REG_RCNT2_MODE;
  if ((uVar2 & 0x800) != 0) {
    DAT_00308188 = DAT_00308188 + 1;
    libkernl_sub_0011b0c0(uVar2 & 0xfffffbff);
    uVar1 = REG_RCNT2_COUNT;
  }
  libkernl_sub_0011b430((DAT_00308188 << 0x10 | (ulong)uVar1) << (long)(int)((uVar2 & 3) << 2));
  uVar1 = REG_RCNT2_MODE;
  if ((uVar1 & 0x800) != 0) {
    DAT_00308188 = DAT_00308188 + 1;
    libkernl_sub_0011b0c0(uVar1 & 0xfffffbff);
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
uint libkernl_sub_0011b9f0(void)

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
  uVar2 = libkernl_sub_0011b9f0();
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011baa8  size 0xa0
undefined8 libkernl_sub_0011baa8(uint param_1)

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
      libkernl_sub_0011b648(puVar2);
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
  uVar2 = libkernl_sub_0011baa8(param_1);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011bb98  size 0x50
undefined8 libkernl_sub_0011bb98(long param_1,long param_2)

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
undefined8 libkernl_sub_0011bbe8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DIntr();
  uVar2 = libkernl_sub_0011bb98(param_1,param_2);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011bc48  size 0xac
undefined4 libkernl_sub_0011bc48(uint param_1)

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
        libkernl_sub_0011b5c0(iVar4);
        libkernl_sub_0011b430(uVar3);
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
  uVar2 = libkernl_sub_0011bc48(param_1);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011bd48  size 0xc4
undefined4 libkernl_sub_0011bd48(uint param_1)

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
        libkernl_sub_0011b648(iVar4);
        libkernl_sub_0011b430(lVar3);
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
  uVar2 = libkernl_sub_0011bd48(param_1);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011be60  size 0xcc
long libkernl_sub_0011be60(uint param_1,undefined8 param_2)

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
long libkernl_sub_0011bf30(uint param_1)

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
undefined8 libkernl_sub_0011bf78(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DIntr();
  uVar2 = libkernl_sub_0011bf30(param_1);
  if (lVar1 != 0) {
    EIntr();
  }
  return uVar2;
}

// 0x0011bfc8  size 0x6c
long libkernl_sub_0011bfc8(uint param_1)

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

