// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00130000 - 0x00134000
#include "ghidra_types.h"

// 0x00130030  size 0xb4
undefined8 __floatsidf(ulong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  ulong uStack_20;
  
  iStack_2c = -((int)param_1 >> 0x1f);
  uStack_30 = 3;
  if (param_1 == 0) {
    uStack_30 = 2;
  }
  else {
    iStack_28 = 0x3c;
    if (iStack_2c == 0) {
      uStack_20 = param_1;
    }
    else {
      if (param_1 == 0xffffffff80000000) {
        return 0xc1e0000000000000;
      }
      uStack_20 = (ulong)-(int)param_1;
    }
    iVar2 = 0x3c;
    if (uStack_20 < 0x1000000000000000) {
      do {
        uStack_20 = uStack_20 << 1;
        iVar2 = iVar2 + -1;
      } while (uStack_20 < 0x1000000000000000);
      iStack_28 = iVar2;
    }
  }
  uVar1 = __unpack_d(&uStack_30);
  return uVar1;
}

// 0x001300e8  size 0x9c
int __fixdfsi(undefined8 param_1)

{
  int iVar1;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  ulong uStack_30;
  undefined8 auStack_20 [2];
  
  auStack_20[0] = param_1;
  __pack_d(auStack_20,&uStack_40);
  if (uStack_40 == 2) {
    return 0;
  }
  if (uStack_40 < 2) {
    return 0;
  }
  if (uStack_40 != 4) {
    if (iStack_38 < 0) {
      return 0;
    }
    if (iStack_38 < 0x1f) {
      iVar1 = (int)(uStack_30 >> (long)(0x3c - iStack_38));
      if (iStack_3c == 0) {
        return iVar1;
      }
      return -iVar1;
    }
  }
  iVar1 = 0x7fffffff;
  if (iStack_3c != 0) {
    iVar1 = -0x80000000;
  }
  return iVar1;
}

// 0x00130188  size 0x2c
/* N153 confirmed: libgcc fp-bit */

void __make_dp(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_20;
  
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_20 = param_4;
  __unpack_d(&uStack_30);
  return;
}

// 0x001301b8  size 0x54
void maybe___extendsfdf2(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  ulong uStack_30;
  undefined8 auStack_20 [2];
  
  auStack_20[0] = param_1;
  __pack_d(auStack_20,&uStack_40);
  uVar1 = (long)(uStack_30 << 2) >> 0x20;
  uVar2 = uVar1 | 1;
  if ((uStack_30 & 0x3fffffff) == 0) {
    uVar2 = uVar1;
  }
  __make_fp(uStack_40,uStack_3c,uStack_38,uVar2);
  return;
}

// 0x00130210  size 0x9c
undefined4 maybe___truncdfsf2(undefined8 param_1)

{
  undefined4 uVar1;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  ulong uStack_30;
  undefined8 auStack_20 [2];
  
  auStack_20[0] = param_1;
  __pack_d(auStack_20,&uStack_40);
  uVar1 = 0;
  if ((((uStack_40 != 2) && (1 < uStack_40)) && (iStack_3c == 0)) &&
     (uVar1 = 0xffffffff, uStack_40 != 4)) {
    uVar1 = 0;
    if ((-1 < iStack_38) && (uVar1 = 0xffffffff, iStack_38 < 0x20)) {
      if (iStack_38 < 0x3d) {
        uVar1 = (undefined4)(uStack_30 >> (long)(0x3c - iStack_38));
      }
      else {
        uVar1 = (undefined4)(uStack_30 << (long)(iStack_38 + -0x3c));
      }
    }
  }
  return uVar1;
}

// 0x001302b0  size 0x40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_scePad2Init(void)

{
  undefined4 *puVar1;
  
  ram0x0030a510 = 1;
  puVar1 = (undefined4 *)0x3798c0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 0xcd;
  } while ((int)puVar1 < 0x37cc00);
  return 1;
}

// 0x001302f0  size 0x68
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_scePad2End(void)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x3798c0;
  iVar2 = 0;
  ram0x0030a510 = 0;
  while ((*piVar3 == 0 || (lVar1 = scePad2DeleteSocket(iVar2), -1 < lVar1))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0xcd;
    if (0xf < iVar2) {
      return 1;
    }
  }
  return lVar1;
}

// 0x00130358  size 0x108
/* "libpad2: buffer addr is not 64 byte align" */

long scePad2CreateSocket(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  uint auStack_70 [5];
  ulong uStack_5c;
  undefined8 uStack_54;
  
  if ((param_2 & 0x3f) == 0) {
    if (param_1 == 0) {
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      auStack_70[4] = 0;
      uStack_5c = uStack_5c & 0xffffffffffffff00;
      auStack_70[0] = 0;
    }
    else {
      puVar3 = (uint *)param_1;
      auStack_70[0] = *puVar3;
      auStack_70[2] = puVar3[1];
      auStack_70[3] = puVar3[2];
      auStack_70[4] = puVar3[3];
      uStack_5c = *(ulong *)(puVar3 + 4);
      uStack_54 = *(undefined8 *)(puVar3 + 6);
    }
    auStack_70[1] = 1;
    auStack_70[0] = auStack_70[0] | 1;
    lVar2 = sceDbcCreateSocket(auStack_70,param_2,(int)param_2 + 0x80);
    if (-1 < lVar2) {
      iVar1 = (int)lVar2 * 0x334;
      *(int *)(iVar1 + 0x3798d0) = (int)param_2;
      *(undefined4 *)(iVar1 + 0x3798c0) = 1;
      maybe_Pad2_ClearBuffer(lVar2);
    }
  }
  else {
    maybe_scePrintf(0x3609f0);
    lVar2 = -1;
  }
  return lVar2;
}

// 0x00130460  size 0x54
long scePad2DeleteSocket(int param_1)

{
  long lVar1;
  
  lVar1 = sceDbcDeleteSocket();
  if (-1 < lVar1) {
    param_1 = param_1 * 0x334;
    lVar1 = 1;
    *(undefined4 *)(param_1 + 0x3798c0) = 0;
    *(undefined4 *)(param_1 + 0x3798c4) = 0;
    *(undefined4 *)(param_1 + 0x3798cc) = 0;
  }
  return lVar1;
}

// 0x001304b8  size 0xd4
uint maybe_scePad2Read(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar3;
  uint uVar2;
  long lVar4;
  
  iVar1 = (int)param_1 * 0x334;
  uVar2 = 0xffffffff;
  if (*(int *)(iVar1 + 0x3798c0) != 0) {
    if ((*(int *)(iVar1 + 0x3798c4) == 0) && (lVar4 = maybe_Pad2_GetDepNumber(param_1), lVar4 < 0))
    {
      return 0xffffffff;
    }
    iVar1 = maybe_Pad2_SyncRecvBuffer(param_1);
    if (*(char *)(iVar1 + 2) == '\0') {
      iVar3 = *(int *)(iVar1 + 4);
    }
    else {
      if (iVar1 + 0x1c != 0) {
        memcpy(param_2,iVar1 + 0x1c,*(char *)(iVar1 + 2));
        maybe_Pad2_ParseData(iVar1 + *(byte *)(iVar1 + 2) + 0x1c,(int)param_1 * 0x334 + 0x3798d4);
      }
      iVar3 = *(int *)(iVar1 + 4);
    }
    if (iVar3 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uint)*(byte *)(iVar1 + 2);
    }
  }
  return uVar2;
}

// 0x00130590  size 0xd0
uint maybe_scePad2GetState(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  maybe_Pad2_UpdateSocket();
  if ((*(int *)((int)param_1 * 0x334 + 0x3798c4) == 0) &&
     (lVar3 = maybe_Pad2_GetDepNumber(param_1), lVar3 < 0)) {
    return 0xffffffff;
  }
  iVar1 = maybe_Pad2_SyncSendBuffer(param_1);
  if ((*(char *)(iVar1 + 3) != '\0') && (iVar1 != -0x1c)) {
    memcpy(param_2,(uint)*(byte *)(iVar1 + 2) + iVar1 + 0x1c,*(undefined1 *)(iVar1 + 3));
    maybe_Pad2_ParseData(iVar1 + *(byte *)(iVar1 + 2) + 0x1c,(int)param_1 * 0x334 + 0x3798d4);
  }
  if (*(int *)(iVar1 + 4) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)(iVar1 + 3);
  }
  return uVar2;
}

// 0x00130660  size 0x140
undefined1 maybe_Pad2_UpdateSocket(undefined8 param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_50 [16];
  
  if ((*(int *)((int)param_1 * 0x334 + 0x3798c4) == 0) &&
     (lVar3 = maybe_Pad2_GetDepNumber(param_1), lVar3 < 0)) {
    return 0;
  }
  lVar3 = maybe_Pad2_CheckFrame(param_1);
  if (lVar3 == 0) {
    lVar3 = sceDbcReceiveData(param_1,0x101800c,(uint)auStack_50 | 4,auStack_50);
    if (-1 < lVar3) {
      return auStack_50[0];
    }
  }
  else {
    puVar2 = (undefined1 *)maybe_Pad2_SyncSendBuffer(param_1);
    if (*(int *)(puVar2 + 4) != 0) {
      uVar1 = *puVar2;
      goto LAB_00130788;
    }
    lVar3 = maybe_Pad2_GetDepNumber(param_1);
    if (-1 < lVar3) {
      uVar1 = *puVar2;
      goto LAB_00130788;
    }
  }
  *(undefined4 *)((int)param_1 * 0x334 + 0x3798c4) = 0;
  maybe_Pad2_ClearBuffer(param_1);
  uVar1 = 0;
LAB_00130788:
  return uVar1;
}

// 0x001307a0  size 0xe0
uint maybe_scePad2GetButtonProfile(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  iVar4 = param_3 * 0x10 + param_1 * 0x334;
  uVar2 = *(undefined8 *)(iVar4 + 0x3798d4);
  uVar3 = *(undefined8 *)(iVar4 + 0x3798dc);
  iStack_10 = (int)uVar2;
  iStack_c = (int)((ulong)uVar2 >> 0x20);
  if (iStack_10 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iStack_8 = (int)uVar3;
    uStack_4 = (uint)((ulong)uVar3 >> 0x20);
    if (iStack_c == 1) {
      uVar1 = (uint)(((int)(uint)*(byte *)(param_2 + iStack_8) >> (uStack_4 & 0x1f) & 1U) == 0);
    }
    else {
      uVar1 = 0xffffffff;
      if ((iStack_c == 8) &&
         (uVar1 = (int)(uint)*(byte *)(param_2 + iStack_8) >> (uStack_4 & 0x1f) & 0xff,
         uStack_4 != 0)) {
        uVar1 = uVar1 | (uint)*(byte *)(param_2 + iStack_8 + 1) << (8 - uStack_4 & 0x1f) & 0xff;
      }
    }
  }
  return uVar1;
}

// 0x00130880  size 0x78
void maybe_Pad2_ClearBuffer(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 1;
  puVar2 = *(undefined1 **)(param_1 * 0x334 + 0x3798d0);
  *puVar2 = 0;
  while( true ) {
    puVar1 = puVar2 + 0x1c;
    *(undefined4 *)(puVar2 + 0x7c) = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    iVar3 = iVar3 + -1;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2 = puVar2 + 0x80;
    memset(puVar1,0xff,0x20);
    if (iVar3 < 0) break;
    *puVar2 = 0;
  }
  return;
}

// 0x001308f8  size 0x54
long maybe_Pad2_GetDepNumber(int param_1)

{
  long lVar1;
  
  lVar1 = sceDbcGetDepNumber();
  if (-1 < lVar1) {
    *(int *)(param_1 * 0x334 + 0x3798cc) = (int)lVar1;
    *(undefined4 *)(param_1 * 0x334 + 0x3798c4) = 1;
  }
  return lVar1;
}

// 0x00130950  size 0x64
int maybe_Pad2_SyncRecvBuffer(int param_1)

{
  int aiStack_20 [4];
  
  aiStack_20[0] = *(int *)(param_1 * 0x334 + 0x3798d0);
  aiStack_20[1] = aiStack_20[0] + 0x80;
  SyncDCache(aiStack_20[0],aiStack_20[0] + 0xff);
  return aiStack_20[*(int *)(aiStack_20[0] + 0x7c) < *(int *)(aiStack_20[1] + 0x7c)];
}

// 0x001309b8  size 0x64
int maybe_Pad2_SyncSendBuffer(int param_1)

{
  int aiStack_20 [4];
  
  aiStack_20[0] = *(int *)(param_1 * 0x334 + 0x3798d0);
  aiStack_20[1] = aiStack_20[0] + 0x80;
  SyncDCache(aiStack_20[0],aiStack_20[0] + 0x100);
  return aiStack_20[*(int *)(aiStack_20[0] + 0x7c) < *(int *)(aiStack_20[1] + 0x7c)];
}

// 0x00130a20  size 0x5c
undefined4 maybe_Pad2_CheckFrame(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = maybe_Pad2_SyncRecvBuffer();
  iVar1 = *(int *)(iVar1 + 0x7c);
  if ((iVar1 == 0) || (piVar3 = (int *)(param_1 * 0x334 + 0x3798c8), iVar1 == *piVar3)) {
    uVar2 = 0;
  }
  else {
    *piVar3 = iVar1;
    uVar2 = 1;
  }
  return uVar2;
}

// 0x00130a80  size 0xb0
undefined4 maybe_Pad2_ParseData(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (((int)(uint)*param_1 >> (uVar3 & 0x1f) & 1U) == 0) {
      *param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
    else {
      *param_2 = 1;
      param_2[2] = iVar4;
      param_2[3] = uVar2;
      if ((iVar1 - 0x10U < 0x10) || (iVar1 - 0x23U < 4)) {
        param_2[1] = 8;
        iVar4 = iVar4 + 1;
      }
      else {
        uVar2 = uVar2 + 1;
        param_2[1] = 1;
        if ((uVar2 & 7) == 0) {
          iVar4 = iVar4 + 1;
          uVar2 = 0;
        }
      }
    }
    uVar3 = uVar3 + 1;
    iVar1 = iVar1 + 1;
    if ((uVar3 & 7) == 0) {
      param_1 = param_1 + 1;
      uVar3 = 0;
    }
    param_2 = param_2 + 4;
  } while (iVar1 < 0x28);
  return 1;
}

// 0x00130b30  size 0x34
/* follows Pad2_ParseData; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

ulong * Pad2_ParseData_Orphan1(ulong param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined8 in_a0_udw;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_t1_udw;
  undefined4 uVar12;
  undefined4 in_register_0000009c;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  if (3 < param_1) {
    *(char *)param_2 = cRam00360a48;
    return (ulong *)(s_sceCdStResume_call_0035fff8 + 8);
  }
  pauVar7 = *(undefined1 (**) [16])((int)param_1 * 4 + 0x30a520);
  puVar4 = param_2;
  if ((((uint)pauVar7 | (uint)param_2) & 7) == 0) {
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x8080808080808080;
    if ((((uint)pauVar7 | (uint)param_2) & 0xf) == 0) {
      auVar5._8_4_ = in_t1_udw;
      auVar5._0_8_ = 0x101010101010101;
      auVar5._12_4_ = in_register_0000009c;
      auVar8._8_4_ = in_t1_udw;
      auVar8._0_8_ = 0x101010101010101;
      auVar8._12_4_ = in_register_0000009c;
      auVar14 = _pcpyld(auVar5,auVar8);
      uVar9 = *(undefined4 *)*pauVar7;
      uVar10 = *(undefined4 *)(*pauVar7 + 4);
      uVar11 = *(undefined4 *)(*pauVar7 + 8);
      uVar12 = *(undefined4 *)(*pauVar7 + 0xc);
      auVar8 = _pcpyld(auVar3,auVar3);
      auVar3 = _psubb(*pauVar7,auVar14);
      auVar3 = _pand(auVar3,~*pauVar7);
      auVar3 = _pand(auVar3,auVar8);
      auVar5 = _pcpyud(auVar3,*pauVar7);
      pauVar6 = pauVar7;
      if (auVar3._0_8_ == 0 && auVar5._0_8_ == 0) {
        do {
          *(undefined4 *)puVar4 = uVar9;
          *(undefined4 *)((int)puVar4 + 4) = uVar10;
          *(undefined4 *)(puVar4 + 1) = uVar11;
          *(undefined4 *)((int)puVar4 + 0xc) = uVar12;
          pauVar7 = pauVar6 + 1;
          uVar9 = *(undefined4 *)*pauVar7;
          uVar10 = *(undefined4 *)(pauVar6[1] + 4);
          uVar11 = *(undefined4 *)(pauVar6[1] + 8);
          uVar12 = *(undefined4 *)(pauVar6[1] + 0xc);
          auVar3 = _psubb(*pauVar7,auVar14);
          auVar3 = _pand(auVar3,~*pauVar7);
          auVar3 = _pand(auVar3,auVar8);
          auVar5 = _pcpyud(auVar3,*pauVar7);
          puVar4 = puVar4 + 2;
          pauVar6 = pauVar7;
        } while (auVar3._0_8_ == 0 && auVar5._0_8_ == 0);
      }
    }
    else {
      uVar13 = *(ulong *)*pauVar7;
      uVar2 = uVar13 + 0xfefefefefefefeff & ~uVar13;
      while ((uVar2 & 0x8080808080808080) == 0) {
        *puVar4 = uVar13;
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 8);
        uVar13 = *(ulong *)*pauVar7;
        puVar4 = puVar4 + 1;
        uVar2 = uVar13 + 0xfefefefefefefeff & ~uVar13;
      }
    }
  }
  do {
    cVar1 = (*pauVar7)[0];
    pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
    *(char *)puVar4 = cVar1;
    puVar4 = (ulong *)((int)puVar4 + 1);
  } while (cVar1 != '\0');
  return param_2;
}

// 0x00130b68  size 0x54
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_Dbc_RpcCall(void)

{
  sceSifCallRpc(0x37cc08,0xffffffff80001363,0,0x37cc80,0x280,0x37cc80,0x280,0);
  return _g_DbcShared1;
}

// 0x00130bc0  size 0x23c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "libdbc: Module version mismatch" */

undefined4 sceDbcInit(void)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if (ram0x0030a540 == 1) {
    return 1;
  }
  _g_sceDbcSendDataShared1 = 0;
  sceSifInitRpc(0);
  while (lVar3 = sceSifBindRpc(0x37cc08,0xffffffff80001300,0), -1 < lVar3) {
    iVar4 = 0x10000;
    if (_s_sceDbcInit_1 != 0) goto LAB_00130c84;
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
LAB_00130d78:
  maybe_Dbc_GetLastError(0x360a50);
  return 0;
LAB_00130c84:
  lVar3 = sceSifBindRpc(0x37cc30,0xffffffff8000131b,0);
  if (lVar3 < 0) goto LAB_00130d78;
  iVar4 = 0x10000;
  if (_s_sceDbcInit_2 != 0) goto LAB_00130cdc;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  goto LAB_00130c84;
LAB_00130cdc:
  while (lVar3 = sceSifBindRpc(0x37cc58,0xffffffff8000131c,0), -1 < lVar3) {
    iVar4 = 0x10000;
    if (_s_sceDbcInit_3 != 0) {
      uVar1 = maybe_Dbc_RpcCall();
      if ((int)uVar1 >> 8 != 3) {
        maybe_scePrintf(0x360a68);
        maybe_scePrintf(0x360a90,3,0,(int)uVar1 >> 8,uVar1 & 0xff);
        return 0;
      }
      uStack_68 = 1;
      uStack_6c = 0x7f;
      lVar3 = CreateSema(auStack_70);
      _g_sceDbcSendDataShared1 = (undefined4)lVar3;
      if (lVar3 < 0) {
        return 0;
      }
      iVar4 = 0xf;
      puVar2 = (undefined4 *)0x3801bc;
      do {
        *puVar2 = 0;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + -1;
      } while (-1 < iVar4);
      maybe_Dbc_GetLastError(0x360ab8,0x380100);
      sceDbcSetWorkAddr(0x380100);
      ram0x0030a540 = 1;
      return 1;
    }
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  goto LAB_00130d78;
}

// 0x00130e00  size 0x48
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcEnd(void)

{
  undefined4 uVar1;
  
  if (ram0x0030a540 == 0) {
    uVar1 = 0;
  }
  else {
    ram0x0030a540 = 0;
    uVar1 = 1;
    if (-1 < _g_sceDbcSendDataShared1) {
      DeleteSema();
      uVar1 = 1;
    }
  }
  return uVar1;
}

// 0x00130e48  size 0x6c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcSetWorkAddr(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  _g_sceDbcSetWorkAddrShared1 = param_1;
  lVar2 = sceSifCallRpc(0x37cc08,0xffffffff80001304,0,0x37cc80,0x280,0x37cc80,0x280,0);
  uVar1 = _g_DbcShared1;
  if (lVar2 < 0) {
    maybe_Dbc_GetLastError(0x360ad8);
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00130eb8  size 0xd8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcCreateSocket(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar2 = 0;
  if (ram0x0030a540 != 0) {
    _g_DbcShared1 = *param_1;
    _g_sceDbcSetWorkAddrShared1 = param_1[1];
    iVar5 = 0;
    _g_sceDbcReceiveDataShared1 = param_1[2];
    _g_sceDbcSRDataShared1 = param_1[3];
    _g_sceDbcCreateSocketShared1 = param_1[4];
    _s_sceDbcCreateSocket_2 = param_2;
    _s_sceDbcCreateSocket_3 = param_3;
    do {
      iVar1 = iVar5 + 0x14;
      puVar4 = &s_Dbc_GetDeviceStatusRpc_1 + iVar5;
      iVar5 = iVar5 + 1;
      *puVar4 = *(undefined1 *)((int)param_1 + iVar1);
    } while (iVar5 < 0x10);
    lVar3 = sceSifCallRpc(0x37cc08,0xffffffff80001301,0,0x37cc80,0x280,0x37cc80,0x280,0);
    if (lVar3 < 0) {
      maybe_Dbc_GetLastError(0x360af8);
      uVar2 = 0;
    }
    else {
      uVar2 = _s_sceDbcCreateSocket_1;
    }
  }
  return uVar2;
}

// 0x00130f90  size 0x88
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcDeleteSocket(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (ram0x0030a540 == 0) {
    uVar1 = 0;
  }
  else {
    _g_DbcShared1 = param_1;
    lVar2 = sceSifCallRpc(0x37cc08,0xffffffff80001302,0,0x37cc80,0x280,0x37cc80,0x280,0);
    if (lVar2 < 0) {
      maybe_Dbc_GetLastError(0x360b18);
      uVar1 = 0;
    }
    else {
      uVar1 = _g_sceDbcSetWorkAddrShared1;
    }
  }
  return uVar1;
}

// 0x00131018  size 0x148
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcGetDepNumber(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  SyncDCache(0x380100,0x380180);
  DIntr();
  _g_sceDbcGetDepNumberShared9 = _g_sceDbcGetDepNumberShared1;
  _g_sceDbcGetDepNumberShared10 = _g_sceDbcGetDepNumberShared2;
  _g_sceDbcGetDepNumberShared11 = _g_sceDbcGetDepNumberShared3;
  _g_sceDbcGetDepNumberShared12 = _g_sceDbcGetDepNumberShared4;
  _g_sceDbcGetDepNumberShared13 = _g_sceDbcGetDepNumberShared5;
  _g_sceDbcGetDepNumberShared14 = _g_sceDbcGetDepNumberShared6;
  _g_sceDbcGetDepNumberShared15 = _g_sceDbcGetDepNumberShared7;
  _g_sceDbcGetDepNumberShared16 = _g_sceDbcGetDepNumberShared8;
  EIntr();
  uVar1 = 0xfffffff4;
  if (*(int *)(&g_sceDbcGetDepNumberShared9 + param_1 * 4) == 1) {
    _g_DbcShared1 = param_1;
    lVar2 = sceSifCallRpc(0x37cc08,0xffffffff80001303,0,0x37cc80,0x280,0x37cc80,0x280,0);
    if (lVar2 < 0) {
      maybe_Dbc_GetLastError(0x360b38);
      uVar1 = 0;
    }
    else {
      uVar1 = _g_sceDbcSetWorkAddrShared1;
    }
  }
  return uVar1;
}

// 0x00131160  size 0xf4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_Dbc_SyncBuffers(int param_1)

{
  undefined4 uVar1;
  
  SyncDCache(0x380100,0x380180);
  DIntr();
  _g_sceDbcGetDepNumberShared9 = _g_sceDbcGetDepNumberShared1;
  _g_sceDbcGetDepNumberShared10 = _g_sceDbcGetDepNumberShared2;
  _g_sceDbcGetDepNumberShared11 = _g_sceDbcGetDepNumberShared3;
  _g_sceDbcGetDepNumberShared12 = _g_sceDbcGetDepNumberShared4;
  _g_sceDbcGetDepNumberShared13 = _g_sceDbcGetDepNumberShared5;
  _g_sceDbcGetDepNumberShared14 = _g_sceDbcGetDepNumberShared6;
  _g_sceDbcGetDepNumberShared15 = _g_sceDbcGetDepNumberShared7;
  _g_sceDbcGetDepNumberShared16 = _g_sceDbcGetDepNumberShared8;
  EIntr();
  uVar1 = 3;
  if (*(int *)(&g_sceDbcGetDepNumberShared9 + param_1 * 4) == 1) {
    uVar1 = 1;
  }
  return uVar1;
}

// 0x00131258  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcInitSocket(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  _g_DbcShared1 = param_1;
  lVar2 = sceSifCallRpc(0x37cc08,0xffffffff80001315,0,0x37cc80,0x280,0x37cc80,0x280,0);
  if (lVar2 < 0) {
    maybe_Dbc_GetLastError(0x360b58);
    uVar1 = 0;
  }
  else {
    uVar1 = _g_sceDbcSetWorkAddrShared1;
  }
  return uVar1;
}

// 0x001312c8  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcResetSocket(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  _g_DbcShared1 = param_1;
  lVar2 = sceSifCallRpc(0x37cc08,0xffffffff80001316,0,0x37cc80,0x280,0x37cc80,0x280,0);
  if (lVar2 < 0) {
    maybe_Dbc_GetLastError(0x360b78);
    uVar1 = 0;
  }
  else {
    uVar1 = _g_sceDbcSetWorkAddrShared1;
  }
  return uVar1;
}

// 0x00131338  size 0x70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcGetDeviceStatus(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  _g_DbcShared1 = param_1;
  lVar2 = sceSifCallRpc(0x37cc08,0xffffffff80001317,0,0x37cc80,0x280,0x37cc80,0x280,0);
  if (lVar2 < 0) {
    maybe_Dbc_GetLastError(0x360b98);
    uVar1 = 0;
  }
  else {
    uVar1 = _g_sceDbcSetWorkAddrShared1;
  }
  return uVar1;
}

// 0x001313a8  size 0x88
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "sceDbcGetDeviceStatus: rpc error" */

undefined4 maybe_Dbc_GetDeviceStatusRpc(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  _g_sceDbcReceiveDataShared1 = 2;
  _g_sceDbcCreateSocketShared1 = *(undefined4 *)(param_1 + 8);
  _s_Dbc_GetDeviceStatusRpc_1 = *(undefined4 *)(param_1 + 0xc);
  lVar2 = sceSifCallRpc(0x37cc08,0xffffffff8000131d,0,0x37cc80,0x280,0x37cc80,0x280,0);
  if (lVar2 < 0) {
    maybe_Dbc_GetLastError(0x360b98);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = _g_sceDbcSetWorkAddrShared1;
  }
  return uVar1;
}

// 0x00131430  size 0x148
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sceDbcSRData(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4,int *param_5
                ,int param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  _g_sceDbcReceiveDataShared1 = *param_3;
  _g_sceDbcSRDataShared1 = *param_5;
  iVar4 = 0;
  _g_DbcShared1 = param_1;
  _g_sceDbcSetWorkAddrShared1 = param_2;
  if (0 < *param_3) {
    puVar1 = param_4;
    do {
      puVar3 = &g_sceDbcCreateSocketShared1 + iVar4;
      iVar4 = iVar4 + 1;
      *puVar3 = *puVar1;
      puVar1 = param_4 + iVar4;
    } while (iVar4 < *param_3);
  }
  lVar2 = sceSifCallRpc(0x37cc08,0xffffffff80001318,0,0x37cc80,0x280,0x37cc80,0x280,0);
  if (lVar2 < 0) {
    maybe_Dbc_GetLastError(0x360bc0);
    iVar4 = 0;
  }
  else {
    iVar4 = _s_sceDbcSRData_1;
    if (-1 < _s_sceDbcSRData_1) {
      *param_3 = _g_sceDbcReceiveDataShared1;
      *param_5 = _g_sceDbcSRDataShared1;
      if (_g_sceDbcSRDataShared1 < 1) {
        iVar4 = _s_sceDbcSRData_1;
      }
      else {
        puVar1 = (undefined1 *)0x37ce90;
        iVar4 = 0;
        do {
          iVar5 = iVar4 + 1;
          *(undefined1 *)(param_6 + iVar4) = *puVar1;
          puVar1 = (undefined1 *)(iVar4 + 0x37ce91);
          iVar4 = iVar5;
        } while (iVar5 < _g_sceDbcSRDataShared1);
        iVar4 = _s_sceDbcSRData_1;
      }
    }
  }
  return iVar4;
}

// 0x00131578  size 0x12c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sceDbcSendData(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  
  WaitSema(_g_sceDbcSendDataShared1);
  _g_sceDbcReceiveDataShared1 = *param_3;
  iVar4 = 0;
  _g_DbcShared1 = param_1;
  _g_sceDbcSetWorkAddrShared1 = param_2;
  if (0 < *param_3) {
    puVar1 = param_4;
    do {
      puVar3 = &g_sceDbcSRDataShared1 + iVar4;
      iVar4 = iVar4 + 1;
      *puVar3 = *puVar1;
      puVar1 = param_4 + iVar4;
    } while (iVar4 < *param_3);
  }
  lVar2 = sceSifCallRpc(0x37cc08,0xffffffff80001319,0,0x37cc80,0x280,0x37cc80,0x280,0);
  if (lVar2 < 0) {
    maybe_Dbc_GetLastError(0x360be0);
    SignalSema(_g_sceDbcSendDataShared1);
    iVar4 = 0;
  }
  else {
    if (-1 < _g_sceDbcReceiveDataShared2) {
      *param_3 = _g_sceDbcReceiveDataShared1;
    }
    SignalSema(_g_sceDbcSendDataShared1);
    iVar4 = _g_sceDbcReceiveDataShared2;
  }
  return iVar4;
}

// 0x001316a8  size 0x15c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sceDbcSendData2(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  
  if (*param_3 < 0x1081) {
    WaitSema(_g_sceDbcSendDataShared1);
    _s_sceDbcSendData2_3 = *param_3;
    iVar5 = 0;
    _s_sceDbcSendData2_1 = param_1;
    _s_sceDbcSendData2_2 = param_2;
    if (0 < *param_3) {
      puVar1 = param_4;
      do {
        puVar3 = (undefined1 *)(iVar5 + 0x37cf0c);
        iVar5 = iVar5 + 1;
        *puVar3 = *puVar1;
        puVar1 = param_4 + iVar5;
      } while (iVar5 < *param_3);
    }
    lVar2 = sceSifCheckStatRpc(0x37cc30);
    if (lVar2 == 1) {
      pcVar4 = s_dbcman___SendData2_BUSY_00360c30;
    }
    else {
      lVar2 = sceSifCallRpc(0x37cc30,0xffffffff8000131b,1,0x37cf00,0x1090,0x37cf00,0x1090,0);
      if (-1 < lVar2) {
        SignalSema(_g_sceDbcSendDataShared1);
        return 1;
      }
      pcVar4 = s_sceDbcSendData2__rpc_error_00360c50;
    }
    maybe_Dbc_GetLastError(pcVar4);
    SignalSema(_g_sceDbcSendDataShared1);
  }
  else {
    maybe_Dbc_GetLastError(0x360c00,*param_3);
  }
  return 0;
}

// 0x00131808  size 0x164
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "SendData3 data length too long" */

undefined4
maybe_sceDbcSendData3
          (undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4,undefined8 param_5
          )

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*param_3 < 0x2081) {
    WaitSema(_g_sceDbcSendDataShared1);
    _s_sceDbcSendData3_3 = *param_3;
    iVar4 = 0;
    _s_sceDbcSendData3_1 = param_1;
    _s_sceDbcSendData3_2 = param_2;
    if (0 < *param_3) {
      puVar1 = param_4;
      do {
        puVar3 = (undefined1 *)(iVar4 + 0x37e00c);
        iVar4 = iVar4 + 1;
        *puVar3 = *puVar1;
        puVar1 = param_4 + iVar4;
      } while (iVar4 < *param_3);
    }
    lVar2 = sceSifCheckStatRpc(0x37cc58);
    if (lVar2 == 1) {
      maybe_Dbc_GetLastError(0x360c98);
    }
    else {
      lVar2 = sceSifCallRpc(0x37cc58,0xffffffff8000131c,1,0x37e000,0x2090,0x37e000,0x2090,param_5);
      if (-1 < lVar2) {
        SignalSema(_g_sceDbcSendDataShared1);
        return 1;
      }
    }
    SignalSema(_g_sceDbcSendDataShared1);
  }
  else {
    maybe_Dbc_GetLastError(0x360c70);
  }
  return 0;
}

// 0x00131970  size 0xec
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sceDbcReceiveData(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  _g_sceDbcReceiveDataShared1 = *param_3;
  _g_DbcShared1 = param_1;
  _g_sceDbcSetWorkAddrShared1 = param_2;
  lVar3 = sceSifCallRpc(0x37cc08,0xffffffff8000131a,0,0x37cc80,0x280,0x37cc80,0x280,0);
  if (lVar3 < 0) {
    maybe_Dbc_GetLastError(0x360cb8);
    iVar2 = 0;
  }
  else {
    iVar2 = _g_sceDbcReceiveDataShared2;
    if (-1 < _g_sceDbcReceiveDataShared2) {
      *param_3 = _g_sceDbcReceiveDataShared1;
      if (_g_sceDbcReceiveDataShared1 < 1) {
        iVar2 = _g_sceDbcReceiveDataShared2;
      }
      else {
        puVar1 = &g_sceDbcSRDataShared1;
        iVar2 = 0;
        do {
          iVar4 = iVar2 + 1;
          *(undefined *)(param_4 + iVar2) = *puVar1;
          puVar1 = (undefined *)(iVar2 + 0x37cc8d);
          iVar2 = iVar4;
        } while (iVar4 < _g_sceDbcReceiveDataShared1);
        iVar2 = _g_sceDbcReceiveDataShared2;
      }
    }
  }
  return iVar2;
}

// 0x00131a60  size 0x28
/* 14 callers */

void maybe_Dbc_GetLastError(void)

{
  return;
}

// 0x00131a88  size 0x80
int maybe_Dbc_ReceiveStatus(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int aiStack_20 [4];
  
  iVar1 = sceDbcReceiveData(param_1,0xffffffff01038002,aiStack_20,param_2);
  if (-1 < iVar1) {
    iVar1 = aiStack_20[0];
  }
  return iVar1;
}

// 0x00131b08  size 0xec
void maybe_Dbc_SendActuator
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong unaff_s4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 auStack_98 [40];
  undefined4 auStack_70 [4];
  
  auStack_70[0] = 0x28;
  iStack_9c = (int)param_4;
  memcpy((uint)&uStack_a0 | 8,param_5,param_4);
  uStack_a0 = (undefined4)param_2;
  memcpy(auStack_98 + (int)param_4,param_3,param_2);
  sceDbcSendData2(param_1,unaff_s4 & 0xffffffff00000000 | 0x103400b,auStack_70,&uStack_a0);
  return;
}

// 0x00131c00  size 0x220
/* WARNING: Removing unreachable block (ram,0x00131d80) */

undefined8
Str_FormatNumberPadded
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  
  Str_FormatNumberBase();
  if (param_4 != 0) {
    lVar6 = strlen(param_1);
    iVar12 = 0;
    if (lVar6 < param_4) {
      iVar14 = (int)param_4;
      pcVar15 = (char *)param_1;
      pcVar15[iVar14] = '\0';
      uVar7 = (uint)(*pcVar15 == '-');
      iVar5 = (int)lVar6;
      if (0 < (int)(iVar5 - uVar7)) {
        do {
          iVar10 = iVar5 - iVar12;
          iVar8 = iVar14 - iVar12;
          iVar12 = iVar12 + 1;
          pcVar15[iVar8 + -1] = pcVar15[iVar10 + -1];
        } while (iVar12 < (int)(iVar5 - uVar7));
      }
      uVar11 = iVar14 - iVar5;
      uVar13 = uVar7 + uVar11;
      if ((int)uVar7 < (int)uVar13) {
        if (8 < (int)uVar11) {
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          bVar4 = false;
          if (((int)uVar7 <= (int)uVar13) && ((int)uVar13 < 0x7fffffff)) {
            bVar4 = true;
          }
          if ((bVar4) && (uVar7 < 0x7fffffff)) {
            bVar1 = true;
          }
          if ((bVar1) && (uVar7 != 0x80000000)) {
            bVar2 = true;
          }
          if (bVar2) {
            bVar1 = true;
            if (((uVar13 & 0x80000000) == (-uVar7 & 0x80000000)) &&
               ((uVar13 & 0x80000000) != (uVar11 & 0x80000000))) {
              bVar1 = false;
            }
            if (bVar1) {
              bVar3 = true;
            }
          }
          if (bVar3) {
            do {
              pcVar9 = pcVar15 + uVar7;
              *pcVar9 = param_5;
              uVar7 = uVar7 + 8;
              pcVar9[1] = param_5;
              pcVar9[2] = param_5;
              pcVar9[3] = param_5;
              pcVar9[4] = param_5;
              pcVar9[5] = param_5;
              pcVar9[6] = param_5;
              pcVar9[7] = param_5;
            } while ((int)uVar7 < (int)(uVar13 - 8));
          }
        }
        for (; (int)uVar7 < (int)uVar13; uVar7 = uVar7 + 1) {
          pcVar15[uVar7] = param_5;
        }
      }
    }
  }
  return param_1;
}

// 0x00131e20  size 0x104
/* base 2..36 */

char * Str_FormatNumberBase(char *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((param_3 < 0) || (0x23 < param_3)) {
    *param_1 = '\0';
  }
  else {
    if (param_3 == 0) {
      param_3 = 10;
    }
    if (param_2 == 0) {
      *param_1 = '0';
      param_1[1] = '\0';
    }
    else {
      bVar2 = param_2 < 0;
      pcVar5 = param_1;
      if (bVar2) {
        param_2 = -param_2;
      }
      for (; 0 < param_2; param_2 = param_2 / param_3) {
        iVar3 = param_2 % param_3;
        if (9 < iVar3) {
          iVar3 = iVar3 + 7;
        }
        *pcVar5 = (char)iVar3 + '0';
        pcVar5 = pcVar5 + 1;
      }
      if (bVar2) {
        *pcVar5 = '-';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = '\0';
      pcVar5 = pcVar5 + -1;
      pcVar4 = param_1;
      if (param_1 < pcVar5) {
        do {
          cVar1 = *pcVar4;
          *pcVar4 = *pcVar5;
          *pcVar5 = cVar1;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + -1;
        } while (pcVar4 < pcVar5);
      }
    }
  }
  return param_1;
}

// 0x00131f30  size 0x7c
void Task_RunPostUpdate(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if ((*(uint *)(iVar1 + 0x10) & 0x14) == 0x14) {
      (**(code **)(iVar1 + 0x20))(iVar1);
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffffffef;
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x18);
    }
  }
  return;
}

// 0x00131fb0  size 0x70
void Task_RunUpdate(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if ((*(uint *)(iVar1 + 0x10) & 9) == 1) {
      (**(code **)(iVar1 + 0x1c))(iVar1);
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x10;
    }
  }
  return;
}

// 0x00132020  size 0xc
void TaskList_Remove(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 8);
  maybe_List_Remove();
  return;
}

// 0x00132030  size 0x60
long TaskList_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e070;
    maybe_List_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00132090  size 0x38
undefined8 TaskList_ctor(undefined8 param_1)

{
  List_ctor(param_1,0);
  *(undefined4 *)param_1 = &DAT_0036e070;
  return param_1;
}

// 0x001320d0  size 0x60
long Task_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)param_1 = &DAT_0036e080;
    maybe_ListNode_dtor(param_1,0);
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x00132130  size 0x90
undefined8
Task_ctor(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
         undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  
  ListNode_ctor(param_1,0);
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_0036e080;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = param_4;
  puVar1[5] = param_3;
  puVar1[6] = param_5;
  puVar1[7] = param_5;
  puVar1[8] = param_6;
  return param_1;
}

// 0x001321c0  size 0x88
undefined4 maybe_List_Append(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar3 = *(int *)(param_1 + 0xc);
    iVar2 = 0;
    while (iVar1 = iVar3, iVar1 != 0) {
      if (iVar1 == param_2) {
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
        }
        if (*(int *)(param_1 + 0xc) == iVar1) {
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 4);
        }
        if (*(int *)(param_1 + 0x10) == iVar1) {
          *(int *)(param_1 + 0x10) = iVar2;
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        return 1;
      }
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 4);
    }
  }
  return 0;
}

// 0x00132250  size 0x44
undefined4 maybe_List_Remove(int param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(int *)(param_1 + 0xc) = iVar2;
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    else {
      *(int *)(*(int *)(param_1 + 0x10) + 4) = iVar2;
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    *(int *)(param_1 + 0x10) = iVar2;
    uVar1 = 1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return uVar1;
}

// 0x001322a0  size 0x74
void maybe_List_Clear(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(param_1 + 0xc);
  while (piVar3 = piVar2, piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[1];
    if ((iVar1 != 0) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 8))(piVar3,1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 0x00132320  size 0xa8
long maybe_List_dtor(long param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    puVar4 = (undefined4 *)param_1;
    *puVar4 = &DAT_0036e090;
    iVar1 = puVar4[1];
    piVar2 = (int *)puVar4[3];
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[1];
      if ((iVar1 != 0) && (piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 8))(piVar3,1);
      }
    }
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001323d0  size 0x24
undefined8 List_ctor(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_0036e090;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return param_1;
}

// 0x00132400  size 0x4c
long maybe_ListNode_dtor(long param_1,short param_2)

{
  if ((param_1 != 0) && (*(undefined4 *)param_1 = &DAT_0036e0a0, 0 < param_2)) {
    Mem_Free();
  }
  return param_1;
}

// 0x00132450  size 0x18
/* N153 confirmed: sets vtable 0x36e0a0 and the payload */

undefined8 ListNode_ctor(undefined8 param_1,undefined4 param_2)

{
  *(undefined4 *)param_1 = &DAT_0036e0a0;
  ((undefined4 *)param_1)[1] = param_2;
  return param_1;
}

// 0x00132470  size 0x28
void Dbg_Nop(void)

{
  return;
}

// 0x001324a0  size 0x30
undefined1 * Mem_Copy8(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return puVar2;
}

// 0x001324d0  size 0x30
undefined2 * Mem_Copy16(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return puVar2;
}

// 0x00132500  size 0x30
undefined4 * Mem_Copy32(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return puVar2;
}

// 0x00132530  size 0x30
undefined8 * Mem_Copy64(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar2;
    param_1 = param_1 + 1;
  }
  return puVar1;
}

// 0x00132560  size 0x30
/* 10 callers */

undefined4 * Mem_Copy128(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1 = param_1 + 4;
  }
  return puVar1;
}

// 0x00132590  size 0x34
int Str_CompareN(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  
  do {
    if (param_3 == 0) {
      return 0;
    }
    param_3 = param_3 + -1;
    cVar1 = *param_1;
    cVar2 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while ((int)cVar1 - (int)cVar2 == 0);
  return (int)cVar1 - (int)cVar2;
}

// 0x001325d0  size 0x30
/* (dst, value, size) qword fill; 53 callers */

undefined1 * Mem_Set16(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return puVar1;
}

// 0x00132600  size 0x188
/* 16-byte aligned fast copy */

uint maybe_Mem_CopyQwords(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (((param_3 < 0x10) || ((param_1 & 0xf) != 0)) || ((param_2 & 0xf) != 0)) {
    if (((param_3 < 8) || ((param_1 & 7) != 0)) || ((param_2 & 7) != 0)) {
      if (((param_3 < 4) || ((param_1 & 3) != 0)) || ((param_2 & 3) != 0)) {
        uVar2 = param_1;
        if (((1 < param_3) && ((param_1 & 1) == 0)) && ((param_2 & 1) == 0)) {
          uVar1 = param_3 >> 1;
          Mem_Copy16(param_1,param_2,uVar1);
          uVar2 = param_1 + uVar1 * 2;
          param_2 = param_2 + uVar1 * 2;
          param_3 = param_3 + uVar1 * -2;
        }
      }
      else {
        uVar2 = param_3 >> 2;
        Mem_Copy32(param_1,param_2,uVar2);
        param_2 = param_2 + uVar2 * 4;
        param_3 = param_3 + uVar2 * -4;
        uVar2 = param_1 + uVar2 * 4;
      }
    }
    else {
      uVar2 = param_3 >> 3;
      Mem_Copy64(param_1,param_2,uVar2);
      param_2 = param_2 + uVar2 * 8;
      param_3 = param_3 + uVar2 * -8;
      uVar2 = param_1 + uVar2 * 8;
    }
  }
  else {
    uVar1 = param_3 >> 4;
    Mem_Copy128(param_1,param_2,uVar1);
    uVar2 = param_1 + uVar1 * 0x10;
    param_2 = param_2 + uVar1 * 0x10;
    param_3 = param_3 + uVar1 * -0x10;
  }
  if (param_3 != 0) {
    Mem_Copy8(uVar2,param_2,param_3);
  }
  return param_1;
}

// 0x00132790  size 0x40
void maybe_Mutex_Delete(int *param_1)

{
  if (*param_1 != 0) {
    DeleteSema();
    *param_1 = 0;
  }
  return;
}

// 0x001327d0  size 0x54
bool maybe_Mutex_Create(int *param_1)

{
  int iVar1;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 1;
  uStack_1c = 1;
  iVar1 = CreateSema(auStack_20);
  *param_1 = iVar1;
  iVar1 = *param_1;
  if (0 >= iVar1) {
    *param_1 = 0;
  }
  return 0 < iVar1;
}

// 0x00132830  size 0x6c
long Mutex_dtor(long param_1,short param_2)

{
  if (param_1 != 0) {
    if (*(int *)param_1 != 0) {
      DeleteSema();
      *(int *)param_1 = 0;
    }
    if (0 < param_2) {
      Mem_Free(param_1);
    }
  }
  return param_1;
}

// 0x001328a0  size 0xc
undefined8 Mutex_Init(undefined8 param_1)

{
  *(undefined4 *)param_1 = 0;
  return param_1;
}

// 0x001328b0  size 0x48
/* 36 callers */

undefined4 sceVu0Normalize(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _vmul(auVar1,auVar1);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  _vsqrt(auVar2);
  uVar3 = _vwaitq();
  auVar2 = _vaddq(in_vf0,uVar3);
  _vnop();
  _vnop();
  _vdiv(in_vf0,0,auVar2,0);
  _vsub(in_vf0,in_vf0);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _qmfc2(auVar2._0_4_);
  return auVar1._0_4_;
}

// 0x00132900  size 0x50
undefined4
maybe_sceVu0InterVectorDist
          (undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vsub(auVar1,auVar2);
  auVar2 = _vmul(auVar1,auVar1);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  _vsqrt(auVar2);
  uVar3 = _vwaitq();
  auVar2 = _vaddq(in_vf0,uVar3);
  _vnop();
  _vnop();
  _vdiv(in_vf0,0,auVar2,0);
  _vsub(in_vf0,in_vf0);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _qmfc2(auVar2._0_4_);
  return auVar1._0_4_;
}

// 0x00132950  size 0x6c
/* *16 */

void sceVu0FTOI4Vector(int *param_1,float *param_2)

{
  *param_1 = (int)(*param_2 * 16.0);
  param_1[1] = (int)(param_2[1] * 16.0);
  param_1[2] = (int)(param_2[2] * 16.0);
  param_1[3] = (int)(param_2[3] * 16.0);
  return;
}

// 0x001329c0  size 0x24
void maybe_sceVu0CopyVectorInt(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}

// 0x001329f0  size 0x14
void maybe_Vu0_VecMax(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                     undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vmax(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

// 0x00132a10  size 0x14
void maybe_Vu0_VecMin(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                     undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vmini(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

// 0x00132a30  size 0x28
void maybe_sceVu0InterVectorXYZ
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
               undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar3 = _lqc2(*param_4);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vsub(auVar1,auVar3);
  auVar2 = _vsub(auVar2,auVar3);
  _vopmula(auVar1,auVar2);
  auVar1 = _vopmsub(auVar2,auVar1);
  auVar1 = _vsub(auVar1,auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

// 0x00132a60  size 0x2c
void sceVu0InterVector(undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                      undefined1 (*param_4) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _lqc2(*param_4);
  auVar3 = _qmtc2(param_1);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vsub(auVar4,auVar3);
  _vmulabc(auVar1,auVar3);
  auVar1 = _vmaddbc(auVar2,auVar4);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

// 0x00132a90  size 0x1c
void sceVu0OuterProduct(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                       undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  _vopmula(auVar1,auVar2);
  auVar1 = _vopmsub(auVar2,auVar1);
  auVar1 = _vsub(auVar1,auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

// 0x00132ab0  size 0x24
/* 40 callers */

undefined4 sceVu0InnerProduct(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_1);
  auVar2 = _lqc2(*param_2);
  auVar1 = _vmul(auVar1,auVar2);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_4_;
}

// 0x00132ae0  size 0xc
/* 86 callers */

void sceVu0CopyVector(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 0x00132af0  size 0x1c
void maybe_sceVu0ScaleVectorXYZ
               (undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _qmtc2(param_1);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

// 0x00132b10  size 0x1c
/* 46 callers */

void sceVu0ScaleVector(undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _qmtc2(param_1);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

// 0x00132b30  size 0x14
void sceVu0MulVector(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                    undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vmul(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

// 0x00132b50  size 0x14
/* 40 callers */

void sceVu0SubVector(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                    undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

// 0x00132b70  size 0x14
/* 43 callers */

void sceVu0AddVector(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                    undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

// 0x00132b90  size 0x8
/* N153 confirmed: stores vf0 (0,0,0,1) */

void Vu0_SetUnitW(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  
  auVar1 = _sqc2(in_vf0);
  *param_1 = auVar1;
  return;
}

// 0x00132ba0  size 0x78
/* 26 callers */

void sceVu0MulMatrix(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                    undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar5 = _lqc2(*param_3);
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar6 = _lqc2(param_3[1]);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar5 = _vmaddbc(auVar4,auVar5);
  auVar7 = _lqc2(param_3[2]);
  _vmulabc(auVar1,auVar6);
  _vmaddabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  auVar8 = _vmaddbc(auVar4,auVar6);
  auVar5 = _sqc2(auVar5);
  *param_1 = auVar5;
  auVar6 = _lqc2(param_3[3]);
  _vmulabc(auVar1,auVar7);
  _vmaddabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  auVar7 = _vmaddbc(auVar4,auVar7);
  auVar5 = _sqc2(auVar8);
  param_1[1] = auVar5;
  _vmulabc(auVar1,auVar6);
  _vmaddabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  auVar1 = _vmaddbc(auVar4,auVar6);
  auVar5 = _sqc2(auVar7);
  param_1[2] = auVar5;
  auVar5 = _sqc2(auVar1);
  param_1[3] = auVar5;
  return;
}

// 0x00132c20  size 0x24
void sceVu0CopyMatrix(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _sqc2(auVar2);
  param_1[1] = auVar1;
  auVar1 = _sqc2(auVar3);
  param_1[2] = auVar1;
  auVar1 = _sqc2(auVar4);
  param_1[3] = auVar1;
  return;
}

// 0x00132c50  size 0x74
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Vu0_SinCos(void)

{
  long in_a3;
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_vf6 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  auVar2 = _lqc2(_DAT_0030a550);
  auVar3 = _vmr32(in_vf6);
  auVar1 = _vaddbc(in_vf0,auVar3);
  auVar3 = _vmul(auVar3,auVar3);
  auVar1 = _vmulbc(auVar1,in_vf0);
  auVar4 = _vmulbc(auVar2,auVar3);
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar4);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar4);
  auVar3 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar3);
  auVar1 = _vaddbc(auVar1,auVar3);
  auVar1 = _vaddbc(auVar2,auVar1);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vsubbc(in_vf0,auVar1);
  _vsqrt(auVar1);
  uVar5 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar5);
  if (in_a3 == 0) {
    _vaddbc(auVar2,auVar1);
  }
  else {
    _vsubbc(auVar2,auVar1);
  }
  return;
}

// 0x00132cd0  size 0x44
void sceVu0TransposeMatrix(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar2 = _pextlw(SUB168(param_2[1],0),SUB168(*param_2,0));
  auVar3 = _pextuw(param_2[1],*param_2);
  auVar4 = _pextlw(SUB168(param_2[3],0),SUB168(param_2[2],0));
  auVar5 = _pextuw(param_2[3],param_2[2]);
  auVar1 = _pcpyld(auVar4,auVar2);
  auVar2 = _pcpyud(auVar2,auVar4);
  auVar4 = _pcpyld(auVar5,auVar3);
  auVar3 = _pcpyud(auVar3,auVar5);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar2._12_4_;
  param_1[8] = auVar4._0_4_;
  param_1[9] = auVar4._4_4_;
  param_1[10] = auVar4._8_4_;
  param_1[0xb] = auVar4._12_4_;
  param_1[0xc] = auVar3._0_4_;
  param_1[0xd] = auVar3._4_4_;
  param_1[0xe] = auVar3._8_4_;
  param_1[0xf] = auVar3._12_4_;
  return;
}

// 0x00132d20  size 0x2c
/* 24 callers */

void sceVu0TransMatrix(undefined4 *param_1,undefined4 *param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar12 = _lqc2(*param_3);
  auVar13 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xc));
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  auVar12 = _vadd(auVar13,auVar12);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  auVar12 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar12;
  return;
}

// 0x00132d50  size 0x2c
/* 32 callers */

void sceVu0ApplyMatrix(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                      undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar5 = _lqc2(*param_3);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar1 = _vmaddbc(auVar4,auVar5);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

// 0x00132d80  size 0xd8
void maybe_Vu0_RotMatrixX(float param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  int iVar1;
  undefined4 unaff_retaddr;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 extraout_vf4 [16];
  undefined1 auVar3 [16];
  undefined1 extraout_vf5 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 < 0.0) {
    fVar2 = param_1 + 1.5707964;
  }
  else {
    fVar2 = 1.5707964 - param_1;
  }
  _qmtc2(fVar2);
  maybe_Vu0_SinCos(param_2,param_3,unaff_retaddr,param_1 < 0.0,fVar2);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar6 = _vmove(in_vf0);
  auVar7 = _vsub(auVar6,auVar6);
  auVar5 = _vmr32(auVar7);
  auVar6 = _vsub(extraout_vf4,extraout_vf4);
  _vaddbc(extraout_vf5,auVar6);
  auVar4 = _vaddbc(extraout_vf5,auVar6);
  _vsubbc(extraout_vf5,auVar6);
  auVar6 = _vaddbc(extraout_vf5,auVar6);
  iVar1 = 4;
  do {
    auVar3 = _lqc2(*param_3);
    _vmulabc(auVar4,auVar3);
    _vmaddabc(auVar6,auVar3);
    _vmaddabc(auVar5,auVar3);
    auVar3 = _vmaddbc(auVar7,auVar3);
    auVar3 = _sqc2(auVar3);
    *param_2 = auVar3;
    iVar1 = iVar1 + -1;
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 != 0);
  return;
}

// 0x00132e60  size 0xdc
void maybe_Vu0_RotMatrixY(float param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  int iVar1;
  undefined4 unaff_retaddr;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 extraout_vf4 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 extraout_vf5 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 < 0.0) {
    fVar2 = param_1 + 1.5707964;
  }
  else {
    fVar2 = 1.5707964 - param_1;
  }
  _qmtc2(fVar2);
  maybe_Vu0_SinCos(param_2,param_3,unaff_retaddr,param_1 < 0.0,fVar2);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar6 = _vaddbc(extraout_vf5,in_vf0);
  auVar7 = _vaddbc(extraout_vf5,in_vf0);
  auVar3 = _vsub(extraout_vf4,extraout_vf4);
  _vsubbc(extraout_vf5,auVar3);
  auVar5 = _vaddbc(extraout_vf5,auVar3);
  _vaddbc(extraout_vf5,auVar3);
  auVar3 = _vaddbc(extraout_vf5,auVar3);
  iVar1 = 4;
  do {
    auVar4 = _lqc2(*param_3);
    _vmulabc(auVar5,auVar4);
    _vmaddabc(auVar6,auVar4);
    _vmaddabc(auVar3,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar4 = _sqc2(auVar4);
    *param_2 = auVar4;
    iVar1 = iVar1 + -1;
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 != 0);
  return;
}

// 0x00132f40  size 0xdc
void maybe_Vu0_RotMatrixZ(float param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  int iVar1;
  undefined4 unaff_retaddr;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 extraout_vf4 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 extraout_vf5 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 < 0.0) {
    fVar2 = param_1 + 1.5707964;
  }
  else {
    fVar2 = 1.5707964 - param_1;
  }
  _qmtc2(fVar2);
  maybe_Vu0_SinCos(param_2,param_3,unaff_retaddr,param_1 < 0.0,fVar2);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar5 = _vaddbc(extraout_vf5,in_vf0);
  auVar7 = _vaddbc(extraout_vf5,in_vf0);
  auVar3 = _vsub(extraout_vf4,extraout_vf4);
  _vaddbc(extraout_vf5,auVar3);
  auVar6 = _vaddbc(extraout_vf5,auVar3);
  _vsubbc(extraout_vf5,auVar3);
  auVar3 = _vaddbc(extraout_vf5,auVar3);
  iVar1 = 4;
  do {
    auVar4 = _lqc2(*param_3);
    _vmulabc(auVar5,auVar4);
    _vmaddabc(auVar6,auVar4);
    _vmaddabc(auVar3,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar4 = _sqc2(auVar4);
    *param_2 = auVar4;
    iVar1 = iVar1 + -1;
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 != 0);
  return;
}

// 0x00133020  size 0x6c
void sceVu0InversMatrix(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar5 = _lqc2(param_2[3]);
  auVar6 = _vmove(auVar5);
  auVar5 = _vsub(auVar5,auVar5);
  auVar8 = _vmove(auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  auVar1 = _pextlw(SUB168(param_2[1],0),SUB168(*param_2,0));
  auVar2 = _pextuw(param_2[1],*param_2);
  auVar3 = _pextlw(auVar5._0_8_,SUB168(param_2[2],0));
  auVar4 = _pextuw(auVar5,param_2[2]);
  auVar5 = _pcpyld(auVar3,auVar1);
  auVar1 = _pcpyud(auVar1,auVar3);
  auVar2 = _pcpyld(auVar4,auVar2);
  auVar3 = _qmtc2(auVar5._0_4_);
  auVar4 = _qmtc2(auVar1._0_4_);
  auVar7 = _qmtc2(auVar2._0_4_);
  _vmulabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar3 = _vmaddbc(auVar7,auVar6);
  auVar3 = _vsub(auVar8,auVar3);
  *param_1 = auVar5._0_4_;
  param_1[1] = auVar5._4_4_;
  param_1[2] = auVar5._8_4_;
  param_1[3] = auVar5._12_4_;
  param_1[4] = auVar1._0_4_;
  param_1[5] = auVar1._4_4_;
  param_1[6] = auVar1._8_4_;
  param_1[7] = auVar1._12_4_;
  param_1[8] = auVar2._0_4_;
  param_1[9] = auVar2._4_4_;
  param_1[10] = auVar2._8_4_;
  param_1[0xb] = auVar2._12_4_;
  auVar5 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar5;
  return;
}

// 0x00133090  size 0x28
void maybe_Vu0_UnitMatrix(undefined1 (*param_1) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = _vsub(in_vf0,in_vf0);
  auVar1 = _vadd(auVar1,in_vf0);
  auVar2 = _vmr32(auVar1);
  auVar3 = _vmr32(auVar2);
  auVar4 = _vmr32(auVar3);
  auVar1 = _sqc2(auVar1);
  param_1[3] = auVar1;
  auVar1 = _sqc2(auVar2);
  param_1[2] = auVar1;
  auVar1 = _sqc2(auVar3);
  param_1[1] = auVar1;
  auVar1 = _sqc2(auVar4);
  *param_1 = auVar1;
  return;
}

// 0x001330c0  size 0x54
void maybe_sceVu0RotTransPers(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_vf28 [16];
  undefined1 in_vf29 [16];
  undefined1 in_vf30 [16];
  undefined1 in_vf31 [16];
  
  auVar1 = _lqc2(*param_1);
  auVar2 = _lqc2(param_1[1]);
  auVar3 = _lqc2(param_1[2]);
  auVar4 = _lqc2(param_1[3]);
  _vmulabc(auVar1,in_vf28);
  _vmaddabc(auVar2,in_vf28);
  _vmaddabc(auVar3,in_vf28);
  _vmaddbc(auVar4,in_vf28);
  _vmulabc(auVar1,in_vf29);
  _vmaddabc(auVar2,in_vf29);
  _vmaddabc(auVar3,in_vf29);
  _vmaddbc(auVar4,in_vf29);
  _vmulabc(auVar1,in_vf30);
  _vmaddabc(auVar2,in_vf30);
  _vmaddabc(auVar3,in_vf30);
  _vmaddbc(auVar4,in_vf30);
  _vmulabc(auVar1,in_vf31);
  _vmaddabc(auVar2,in_vf31);
  _vmaddabc(auVar3,in_vf31);
  _vmaddbc(auVar4,in_vf31);
  return;
}

// 0x00133120  size 0xc4
undefined4 maybe_sceVu0RotTransPersN(undefined1 (*param_1) [16],int param_2)

{
  ulong uVar1;
  undefined4 in_vc2;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_vf28 [16];
  undefined1 in_vf29 [16];
  undefined1 in_vf30 [16];
  undefined1 in_vf31 [16];
  
  auVar2 = _lqc2(*param_1);
  auVar3 = _lqc2(param_1[1]);
  _vmulabc(in_vf28,auVar2);
  auVar4 = _vmaddbc(in_vf31,auVar2);
  auVar5 = _vmulbc(in_vf29,auVar2);
  auVar2 = _vmulbc(in_vf30,auVar2);
  _vmulabc(in_vf28,auVar3);
  auVar6 = _vmaddbc(in_vf31,auVar3);
  auVar7 = _vmulbc(in_vf29,auVar3);
  auVar3 = _vmulbc(in_vf30,auVar3);
  auVar8 = _vadd(auVar4,auVar5);
  auVar4 = _vadd(auVar4,auVar7);
  auVar9 = _vadd(auVar8,auVar2);
  auVar8 = _vadd(auVar8,auVar3);
  auVar10 = _vadd(auVar4,auVar2);
  auVar4 = _vadd(auVar4,auVar3);
  _vclip(auVar9,auVar9);
  _vclip(auVar8,auVar8);
  _vclip(auVar10,auVar10);
  _vclip(auVar4,auVar4);
  auVar4 = _vadd(auVar6,auVar5);
  auVar5 = _vadd(auVar6,auVar7);
  auVar6 = _vadd(auVar4,auVar2);
  auVar4 = _vadd(auVar4,auVar3);
  uVar1 = _cfc2(in_vc2);
  if (((long)param_2 & uVar1) == 0) {
    auVar2 = _vadd(auVar5,auVar2);
    auVar3 = _vadd(auVar5,auVar3);
    _vclip(auVar6,auVar6);
    _vclip(auVar4,auVar4);
    _vclip(auVar2,auVar2);
    _vclip(auVar3,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    uVar1 = _cfc2(in_vc2);
    if (((long)param_2 & uVar1) == 0) {
      return 1;
    }
  }
  return 0;
}

// 0x001331f0  size 0x64
void maybe_sceVu0MulMatrixVf28(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_vf28 [16];
  undefined1 in_vf29 [16];
  undefined1 in_vf30 [16];
  undefined1 in_vf31 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  _vmulabc(auVar1,in_vf28);
  _vmaddabc(auVar2,in_vf28);
  _vmaddabc(auVar3,in_vf28);
  auVar5 = _vmaddbc(auVar4,in_vf28);
  auVar5 = _sqc2(auVar5);
  *param_1 = auVar5;
  _vmulabc(auVar1,in_vf29);
  _vmaddabc(auVar2,in_vf29);
  _vmaddabc(auVar3,in_vf29);
  auVar5 = _vmaddbc(auVar4,in_vf29);
  auVar5 = _sqc2(auVar5);
  param_1[1] = auVar5;
  _vmulabc(auVar1,in_vf30);
  _vmaddabc(auVar2,in_vf30);
  _vmaddabc(auVar3,in_vf30);
  auVar5 = _vmaddbc(auVar4,in_vf30);
  auVar5 = _sqc2(auVar5);
  param_1[2] = auVar5;
  _vmulabc(auVar1,in_vf31);
  _vmaddabc(auVar2,in_vf31);
  _vmaddabc(auVar3,in_vf31);
  auVar5 = _vmaddbc(auVar4,in_vf31);
  auVar5 = _sqc2(auVar5);
  param_1[3] = auVar5;
  return;
}

// 0x00133260  size 0x14
/* N153 confirmed: lqc2 into vf28-vf31 */

void Vu0_LoadMatrixVf28(undefined1 (*param_1) [16])

{
  _lqc2(*param_1);
  _lqc2(param_1[1]);
  _lqc2(param_1[2]);
  _lqc2(param_1[3]);
  return;
}

// 0x00133280  size 0x14
/* N153 confirmed: sqc2 from vf28-vf31 */

void Vu0_StoreMatrixVf28(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_vf28 [16];
  undefined1 in_vf29 [16];
  undefined1 in_vf30 [16];
  undefined1 in_vf31 [16];
  
  auVar1 = _sqc2(in_vf28);
  *param_1 = auVar1;
  auVar1 = _sqc2(in_vf29);
  param_1[1] = auVar1;
  auVar1 = _sqc2(in_vf30);
  param_1[2] = auVar1;
  auVar1 = _sqc2(in_vf31);
  param_1[3] = auVar1;
  return;
}

// 0x001332a0  size 0x10c
void maybe_Vu0_ClearStack(float param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uStack00000000;
  undefined1 auStack_10 [16];
  
  puVar2 = auStack_10;
  iVar1 = 0x10;
  if (&uStack00000000 != (undefined1 *)0x10) {
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  fVar5 = param_1 * 2.0 * param_1;
  fVar7 = param_1 * 3.0 * param_1;
  fVar6 = (param_1 * fVar5 - fVar7) + 1.0;
  fVar3 = param_1 * param_1 * param_1;
  fVar4 = fVar3 - param_1 * param_1;
  fVar3 = param_1 + (fVar3 - fVar5);
  fVar5 = param_1 * param_1 * -2.0 * param_1 + fVar7 + 0.0;
  *param_2 = *param_4 * fVar5 + param_4[2] * fVar4 + *param_3 * fVar6 + param_3[2] * fVar3;
  param_2[1] = param_4[1] * fVar5 + param_4[3] * fVar4 + param_3[1] * fVar6 + param_3[3] * fVar3;
  return;
}

// 0x001333b0  size 0x29c
void maybe_Vu0_EvalCurve(float param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  if (param_4 == 4) {
    fStack_4c = param_1 * param_1;
    fStack_50 = param_1 * fStack_4c;
    uStack_44 = DAT_0030a56c;
    fStack_48 = param_1;
    sceVu0CopyVector(auStack_40);
    sceVu0CopyVector(auStack_30,param_3 + param_5);
    sceVu0CopyVector(auStack_20,param_3 + param_5 * 2);
    sceVu0CopyVector(auStack_10,param_3 + param_5 * 3);
    sceVu0ApplyMatrix(&fStack_50,0x360d20,&fStack_50);
    sceVu0ApplyMatrix(&fStack_50,auStack_40,&fStack_50);
    sceVu0ScaleVector(0x3f000000,param_2,&fStack_50);
  }
  else {
    fVar2 = 1.0 / (float)(param_4 + -1);
    fStack_58 = param_1 * (float)(param_4 + -1);
    iVar1 = (int)fStack_58;
    param_3 = param_3 + param_5 * iVar1;
    fStack_58 = fStack_58 - (float)iVar1;
    fStack_5c = fStack_58 * fStack_58;
    fStack_60 = fStack_58 * fStack_5c;
    uStack_54 = DAT_0030a57c;
    if (fVar2 <= param_1) {
      if (param_1 + fVar2 <= 1.0) {
        sceVu0CopyVector(auStack_40,param_3 - param_5);
        sceVu0CopyVector(auStack_30,param_3);
        sceVu0CopyVector(auStack_20,param_3 + param_5);
        sceVu0CopyVector(auStack_10,param_3 + param_5 * 2);
        sceVu0ApplyMatrix(&fStack_60,0x360d20,&fStack_60);
      }
      else {
        sceVu0CopyVector(auStack_40,param_3 - param_5);
        sceVu0CopyVector(auStack_30,param_3);
        sceVu0CopyVector(auStack_20,param_3 + param_5);
        sceVu0CopyVector(auStack_10,param_3 + param_5);
        sceVu0ApplyMatrix(&fStack_60,0x360d60,&fStack_60);
      }
    }
    else {
      sceVu0CopyVector(auStack_40,param_3);
      sceVu0CopyVector(auStack_30,param_3);
      sceVu0CopyVector(auStack_20,param_3 + param_5);
      sceVu0CopyVector(auStack_10,param_3 + param_5 * 2);
      sceVu0ApplyMatrix(&fStack_60,0x360ce0,&fStack_60);
    }
    sceVu0ApplyMatrix(&fStack_60,auStack_40,&fStack_60);
    sceVu0ScaleVector(0x3f000000,&fStack_60,&fStack_60);
    sceVu0CopyVector(param_2,&fStack_60);
  }
  return;
}

// 0x00133650  size 0x24
/* N153 confirmed: vsqrt into Q, vwaitq */

undefined4 Vu0_SqrtQ(undefined4 param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = _qmtc2(param_1);
  _vsqrt(auVar1);
  uVar2 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar2);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_4_;
}

// 0x00133680  size 0x44
void sceVu0RotTransPersN(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                        undefined1 (*param_3) [16],long param_4)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar5 = _lqc2(*param_3);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar1 = _vmaddbc(auVar4,auVar5);
  _vdiv(in_vf0,0,auVar1,0);
  uVar6 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar6);
  auVar2 = _vftoi4(auVar1);
  if (param_4 != 0) {
    auVar2 = _vftoi0(auVar1);
  }
  auVar1 = _sqc2(auVar2);
  *param_1 = auVar1;
  return;
}

// 0x001336d0  size 0xa4
/* look-at: outer products + inverse */

void sceVu0ViewScreenMatrix
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  maybe_Vu0_UnitMatrix(auStack_40);
  sceVu0OuterProduct(auStack_50,param_4,param_3);
  sceVu0Normalize(auStack_40,auStack_50);
  sceVu0Normalize(auStack_20,param_3);
  sceVu0OuterProduct(auStack_30,auStack_20,auStack_40);
  sceVu0TransMatrix(auStack_40,auStack_40,param_2);
  sceVu0InversMatrix(param_1,auStack_40);
  return;
}

// 0x00133780  size 0x6c
void sceVu0LightColorMatrix
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  sceVu0CopyVector();
  sceVu0CopyVector(param_1 + 0x10,param_3);
  sceVu0CopyVector(param_1 + 0x20,param_4);
  sceVu0CopyVector(param_1 + 0x30,param_5);
  return;
}

// 0x001337f0  size 0xb4
void sceVu0NormalLightMatrix
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  sceVu0ScaleVector(0xbf800000,auStack_10);
  sceVu0Normalize(param_1,auStack_10);
  sceVu0ScaleVector(0xbf800000,auStack_10,param_3);
  iVar1 = (int)param_1;
  sceVu0Normalize(iVar1 + 0x10,auStack_10);
  sceVu0ScaleVector(0xbf800000,auStack_10,param_4);
  sceVu0Normalize(iVar1 + 0x20,auStack_10);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
  sceVu0TransposeMatrix(param_1,param_1);
  return;
}

// 0x001338b0  size 0x84
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LCG 0x41c64e6d, 0x3039 */

float maybe_Rand_Next(float param_1,float param_2)

{
  _s_RandVar1 = _s_RandVar1 * 0x41c64e6d + 0x3039;
  return (param_2 - param_1) * (float)(_s_RandVar1 >> 0x10 & 0x7fff) * 3.051851e-05 + param_1 + 0.0;
}

// 0x00133940  size 0x58
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint maybe_Rand_Float(void)

{
  _s_RandVar1 = _s_RandVar1 * 0x41c64e6d + 0x3039;
  return _s_RandVar1 >> 0x10 & 0x7fff;
}

// 0x001339a0  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* N153 confirmed: stores the seed */

void Rand_Seed(undefined4 param_1)

{
  _s_RandVar1 = param_1;
  return;
}

// 0x001339b0  size 0x3c
/* 256-entry table at 0x360e00 */

void Math_SinCosTable(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(&DAT_00360e00 + (param_1 >> 8 & 0xffU) * 4);
  *param_2 = *(undefined4 *)(&DAT_00360e00 + ((param_1 >> 8) + 0x80U & 0xff) * 4);
  *param_3 = uVar1;
  return;
}

// 0x001339f0  size 0x7c
/* x * 40.74 (256/2pi) */

void maybe_Math_AngleToIndex(float param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = param_1 * 40.743664 + 0.0078125 + DAT_00360da0;
  uVar2 = *(undefined4 *)(&DAT_00360e00 + ((uint)fVar1 & 0xff) * 4);
  *param_2 = *(undefined4 *)(&DAT_00360e00 + (((uint)fVar1 & 0x3fffff) + 0x80 & 0xff) * 4);
  *param_3 = uVar2;
  return;
}

// 0x00133a70  size 0x28
uint Math_FloatToFixed22(float param_1)

{
  return (uint)(param_1 + DAT_00360da0) & 0x3fffff;
}

// 0x00133aa0  size 0x3ac
undefined4 Gut_DecompressBlock(int param_1,uint param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  
  uVar9 = 0;
  uVar7 = 0;
  uVar6 = 0;
  iVar5 = 0;
  uVar4 = 1;
  do {
    while( true ) {
      if (uVar9 == 0) {
        puVar8 = (uint *)(param_1 + uVar6);
        uVar9 = 0x1f;
        uVar6 = uVar6 + 4;
        uVar7 = *puVar8;
        uVar2 = uVar7 >> 0x1f;
      }
      else {
        uVar9 = uVar9 - 1;
        uVar2 = uVar7 >> (uVar9 & 0x1f);
      }
      if ((uVar2 & 1) == 0) break;
      puVar11 = (undefined1 *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
      puVar12 = (undefined1 *)(param_3 + iVar5);
      iVar5 = iVar5 + 1;
      *puVar12 = *puVar11;
    }
    iVar3 = 1;
    do {
      if (uVar9 == 0) {
        puVar8 = (uint *)(param_1 + uVar6);
        uVar9 = 0x1f;
        uVar6 = uVar6 + 4;
        uVar7 = *puVar8;
        uVar2 = uVar7 >> 0x1f;
      }
      else {
        uVar9 = uVar9 - 1;
        uVar2 = uVar7 >> (uVar9 & 0x1f);
      }
      iVar3 = iVar3 * 2 + (uVar2 & 1);
      if (uVar9 == 0) {
        puVar8 = (uint *)(param_1 + uVar6);
        uVar9 = 0x1f;
        uVar6 = uVar6 + 4;
        uVar7 = *puVar8;
        uVar2 = uVar7 >> 0x1f;
      }
      else {
        uVar9 = uVar9 - 1;
        uVar2 = uVar7 >> (uVar9 & 0x1f);
      }
    } while ((uVar2 & 1) == 0);
    if (iVar3 != 2) {
      iVar3 = (iVar3 + -3) * 0x100 + (uint)*(byte *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
      if (iVar3 == -1) {
        *param_4 = iVar5;
        if (uVar6 == param_2) {
          uVar1 = 0;
        }
        else if (uVar6 < param_2) {
          uVar1 = 0xffffff33;
        }
        else {
          uVar1 = 0xffffff37;
        }
        return uVar1;
      }
      uVar4 = iVar3 + 1;
    }
    if (uVar9 == 0) {
      puVar8 = (uint *)(param_1 + uVar6);
      uVar9 = 0x1f;
      uVar6 = uVar6 + 4;
      uVar7 = *puVar8;
      uVar2 = uVar7 >> 0x1f;
    }
    else {
      uVar9 = uVar9 - 1;
      uVar2 = uVar7 >> (uVar9 & 0x1f);
    }
    if (uVar9 == 0) {
      puVar8 = (uint *)(param_1 + uVar6);
      uVar9 = 0x1f;
      uVar6 = uVar6 + 4;
      uVar7 = *puVar8;
      uVar10 = uVar7 >> 0x1f;
    }
    else {
      uVar9 = uVar9 - 1;
      uVar10 = uVar7 >> (uVar9 & 0x1f);
    }
    iVar3 = (uVar2 & 1) * 2 + (uVar10 & 1);
    if (iVar3 == 0) {
      iVar3 = 1;
      do {
        if (uVar9 == 0) {
          puVar8 = (uint *)(param_1 + uVar6);
          uVar9 = 0x1f;
          uVar6 = uVar6 + 4;
          uVar7 = *puVar8;
          uVar2 = uVar7 >> 0x1f;
        }
        else {
          uVar9 = uVar9 - 1;
          uVar2 = uVar7 >> (uVar9 & 0x1f);
        }
        iVar3 = iVar3 * 2 + (uVar2 & 1);
        if (uVar9 == 0) {
          puVar8 = (uint *)(param_1 + uVar6);
          uVar9 = 0x1f;
          uVar6 = uVar6 + 4;
          uVar7 = *puVar8;
          uVar2 = uVar7 >> 0x1f;
        }
        else {
          uVar9 = uVar9 - 1;
          uVar2 = uVar7 >> (uVar9 & 0x1f);
        }
      } while ((uVar2 & 1) == 0);
      iVar3 = iVar3 + 2;
    }
    puVar12 = (undefined1 *)(param_3 + iVar5);
    puVar11 = puVar12 + -uVar4;
    iVar3 = iVar3 + (uVar4 < 0xd01 ^ 1);
    iVar5 = iVar5 + 1;
    *puVar12 = *puVar11;
    do {
      puVar11 = puVar11 + 1;
      puVar12 = (undefined1 *)(param_3 + iVar5);
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + 1;
      *puVar12 = *puVar11;
    } while (iVar3 != 0);
  } while( true );
}

// 0x00133e54  size 0x8
/* follows Gut_DecompressBlock; no call, branch, pointer or constant references it (exception
   landing pad or dead code) */

void Gut_DecompressBlock_Orphan1(void)

{
  return;
}

// 0x00133e60  size 0x190
void Color_LerpRgba(float *param_1,uint param_2,uint param_3,ulong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((long)param_4 < 0) {
    fVar1 = (float)(param_4 & 0xffffffff);
  }
  else {
    fVar1 = (float)(int)param_4;
  }
  if ((long)param_4 < 0) {
    fVar2 = (float)(param_4 & 0xffffffff);
  }
  else {
    fVar2 = (float)(int)param_4;
  }
  fVar2 = (float)param_3 / fVar1 - (float)param_2 / fVar2;
  param_1[3] = fVar2;
  fVar3 = param_1[2];
  fVar1 = -1.0;
  if (fVar3 * -1.0 <= fVar2) {
    if (fVar2 <= fVar3) {
      fVar1 = *param_1 - param_1[1];
      if (fVar1 <= fVar2) {
        fVar1 = *param_1 + param_1[1];
        if (fVar1 < fVar2) {
          fVar1 = (fVar2 - fVar1) / (fVar3 - fVar1);
        }
        else {
          fVar1 = 0.0;
        }
      }
      else {
        fVar1 = ((fVar2 - fVar1) / (fVar3 * -1.0 - fVar1)) * -1.0;
      }
    }
    else {
      fVar1 = 1.0;
    }
  }
  param_1[3] = fVar1;
  return;
}

// 0x00133ff0  size 0x12c
void Color_LerpRgb(float *param_1,ulong param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((long)param_2 < 0) {
    fVar1 = (float)(param_2 & 0xffffffff);
  }
  else {
    fVar1 = (float)(int)param_2;
  }
  fVar2 = (fVar1 - (float)param_3 / 2.0) / ((float)param_3 / 2.0);
  param_1[3] = fVar2;
  fVar3 = param_1[2];
  fVar1 = -1.0;
  if (fVar3 * -1.0 <= fVar2) {
    if (fVar2 <= fVar3) {
      fVar1 = *param_1 - param_1[1];
      if (fVar1 <= fVar2) {
        fVar1 = *param_1 + param_1[1];
        if (fVar1 < fVar2) {
          fVar1 = (fVar2 - fVar1) / (fVar3 - fVar1);
        }
        else {
          fVar1 = 0.0;
        }
      }
      else {
        fVar1 = ((fVar2 - fVar1) / (fVar3 * -1.0 - fVar1)) * -1.0;
      }
    }
    else {
      fVar1 = 1.0;
    }
  }
  param_1[3] = fVar1;
  return;
}

