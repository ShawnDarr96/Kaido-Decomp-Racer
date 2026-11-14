// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00120000 - 0x00124000
#include "ghidra_types.h"

// 0x00120110  size 0x44
ulong libm_sub_00120110(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff |
         ((long)param_1 >> 0x20 & 0x7fffffffU | param_2 >> 0x20 & 0xffffffff80000000U) << 0x20;
}

// 0x00120158  size 0x34
ulong libm_sub_00120158(ulong param_1)

{
  return param_1 & 0xffffffff | ((long)param_1 >> 0x20 & 0x7fffffffU) << 0x20;
}

// 0x00120190  size 0x20c
ulong libm_sub_00120190(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar6 = (uint)param_1;
  uVar7 = (ulong)(int)uVar6;
  uVar4 = (long)param_1 >> 0x20;
  iVar3 = (int)(param_1 >> 0x20);
  uVar8 = iVar3 >> 0x14 & 0x7ff;
  uVar5 = uVar8 - 0x3ff;
  if ((int)uVar5 < 0x14) {
    if ((int)uVar5 < 0) {
      uVar1 = __adddf3(param_1,DAT_0035fc70);
      lVar2 = __cmpdf2(uVar1,0);
      if (0 < lVar2) {
        if ((long)uVar4 < 0) {
          if ((uVar4 & 0x7fffffff) != 0 || uVar7 != 0) {
            uVar4 = 0xffffffffbff00000;
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
          uVar4 = 0;
        }
      }
    }
    else {
      uVar9 = (ulong)(0xfffff >> (uVar5 & 0x1f));
      if ((uVar4 & uVar9) == 0 && uVar7 == 0) {
        return param_1;
      }
      uVar1 = __adddf3(param_1,DAT_0035fc70);
      lVar2 = __cmpdf2(uVar1,0);
      if (0 < lVar2) {
        if ((long)uVar4 < 0) {
          uVar4 = (ulong)(iVar3 + (0x100000 >> (uVar5 & 0x1f)));
        }
        uVar7 = 0;
        uVar4 = uVar4 & ~uVar9;
      }
    }
  }
  else {
    if (0x33 < (int)uVar5) {
      if (uVar5 == 0x400) {
        uVar4 = __adddf3(param_1,param_1);
        return uVar4;
      }
      return param_1;
    }
    uVar8 = 0xffffffff >> (uVar8 - 0x413 & 0x1f);
    if ((uVar6 & uVar8) == 0) {
      return param_1;
    }
    uVar1 = __adddf3(param_1,DAT_0035fc70);
    lVar2 = __cmpdf2(uVar1,0);
    if (0 < lVar2) {
      uVar9 = uVar7;
      if ((long)uVar4 < 0) {
        if (uVar5 == 0x14) {
          iVar3 = iVar3 + 1;
        }
        else {
          uVar9 = (ulong)(int)(uVar6 + (1 << (0x34 - uVar5 & 0x1f)));
          iVar3 = iVar3 + (uint)(uVar9 < uVar7);
        }
        uVar4 = (ulong)iVar3;
      }
      uVar7 = uVar9 & ~(long)(int)uVar8;
    }
  }
  return uVar4 << 0x20 | uVar7 & 0xffffffff;
}

// 0x001203a8  size 0x48
int libm_sub_001203a8(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x7ff00000 - ((int)param_1 >> 0x20 & 0x7fffffffU | (param_1 | -param_1) >> 0x1f);
  return ((int)(uVar1 | -uVar1) >> 0x1f) + 1;
}

// 0x001203f0  size 0x3c
uint libm_sub_001203f0(uint param_1)

{
  return 0x7ff00000 - ((int)param_1 >> 0x20 & 0x7fffffffU | (param_1 | -param_1) >> 0x1f) >> 0x1f;
}

// 0x00120430  size 0x1d0
ulong libm_sub_00120430(ulong param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = (long)param_1 >> 0x20;
  iVar2 = (int)((uint)(param_1 >> 0x20) & 0x7ff00000) >> 0x14;
  if (iVar2 == 0) {
    if ((int)param_1 == 0 && (uVar4 & 0x7fffffff) == 0) {
      return param_1;
    }
    param_1 = __muldf3(param_1,0x4350000000000000);
    uVar4 = (long)param_1 >> 0x20;
    iVar2 = ((int)((uint)(param_1 >> 0x20) & 0x7ff00000) >> 0x14) + -0x36;
    if (param_2 < -50000) {
      uVar4 = __muldf3(param_1,DAT_0035fc98);
      return uVar4;
    }
  }
  iVar3 = iVar2 + (int)param_2;
  if (iVar2 == 0x7ff) {
    uVar4 = __adddf3(param_1,param_1);
    return uVar4;
  }
  uVar5 = DAT_0035fca0;
  if (iVar3 < 0x7ff) {
    if (0 < iVar3) {
      return param_1 & 0xffffffff | (uVar4 & 0xffffffff800fffff | (long)(iVar3 * 0x100000)) << 0x20;
    }
    if (-0x36 < iVar3) {
      uVar4 = __muldf3(param_1 & 0xffffffff |
                       (uVar4 & 0xffffffff800fffff | (long)((iVar3 + 0x36) * 0x100000)) << 0x20,
                       0x3c90000000000000);
      return uVar4;
    }
    if (param_2 < 0xc351) {
      uVar5 = DAT_0035fc98;
    }
  }
  uVar1 = libm_sub_00120110(uVar5,param_1);
  uVar4 = __muldf3(uVar1,uVar5);
  return uVar4;
}

// 0x00120618  size 0xa0
void libm_sub_00120618(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = param_1 >> 0x20 & 0x7fffffff;
  if (uVar2 < 0x3fe921fc) {
    libm_sub_0011ee60(param_1,0);
  }
  else if (uVar2 < 0x7ff00000) {
    uVar1 = libm_sub_0011c9f8(param_1,&uStack_20,1);
    libm_sub_0011ee60(uStack_20,uStack_18,(uVar1 & 1) * -2 + 1);
  }
  else {
    __subdf3(param_1,param_1);
  }
  return;
}

// 0x001206c0  size 0x280
float atanf(float param_1)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (undefined *)((uint)param_1 & 0x7fffffff);
  if ((undefined *)0x507fffff < puVar2) {
    if ((int)param_1 < 1) {
      return -DAT_0035fcb4 - DAT_0035fcc4;
    }
    return DAT_0035fcb4 + DAT_0035fcc4;
  }
  if (puVar2 < (undefined *)0x3ee00000) {
    iVar1 = -1;
    fVar5 = param_1;
    if (puVar2 <= &UNK_30ffffff) {
      if (1.0 < param_1 + 9.9999994e+29) {
        return param_1;
      }
      fVar6 = param_1 * param_1;
      goto LAB_00120860;
    }
  }
  else {
    fVar5 = (float)fabsf();
    if (puVar2 < (undefined *)0x3f980000) {
      if (puVar2 < (undefined *)0x3f300000) {
        fVar5 = ((fVar5 + fVar5) - 1.0) / (fVar5 + 2.0);
        iVar1 = 0;
      }
      else {
        fVar5 = (fVar5 - 1.0) / (fVar5 + 1.0);
        iVar1 = 1;
      }
    }
    else if (puVar2 < (undefined *)0x401c0000) {
      fVar5 = (fVar5 - 1.5) / (fVar5 * 1.5 + 1.0);
      iVar1 = 2;
    }
    else {
      iVar1 = 3;
      fVar5 = -1.0 / fVar5;
    }
  }
  fVar6 = fVar5 * fVar5;
LAB_00120860:
  fVar4 = fVar6 * fVar6;
  fVar3 = fVar4 * (DAT_0035fccc +
                  fVar4 * (DAT_0035fcd4 +
                          fVar4 * (DAT_0035fcdc + fVar4 * (DAT_0035fce4 + fVar4 * DAT_0035fcec))));
  fVar6 = fVar6 * (DAT_0035fcc8 +
                  fVar4 * (DAT_0035fcd0 +
                          fVar4 * (DAT_0035fcd8 +
                                  fVar4 * (DAT_0035fce0 +
                                          fVar4 * (DAT_0035fce8 + fVar4 * DAT_0035fcf0)))));
  if (iVar1 < 0) {
    fVar5 = fVar5 - fVar5 * (fVar6 + fVar3);
  }
  else {
    fVar5 = *(float *)(iVar1 * 4 + 0x35fca8) -
            ((fVar5 * (fVar6 + fVar3) - *(float *)(iVar1 * 4 + 0x35fcb8)) - fVar5);
    if ((int)param_1 < 0) {
      fVar5 = -fVar5;
    }
  }
  return fVar5;
}

// 0x00120950  size 0x3c
uint copysignf(uint param_1,uint param_2)

{
  return param_1 & 0x7fffffff | param_2 & 0x80000000;
}

// 0x00120990  size 0xd4
float sinf(uint param_1)

{
  ulong uVar1;
  float fVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_20;
  
  uStack_20 = param_1;
  if ((param_1 & 0x7fffffff) < 0x3f490fd9) {
    fVar2 = (float)maybe___kernel_cosf(param_1,0);
  }
  else {
    uVar1 = maybe___ieee754_rem_pio2f(&uStack_30);
    uVar1 = uVar1 & 3;
    if (uVar1 == 1) {
      fVar2 = (float)maybe___kernel_sinf(uStack_30,uStack_2c,1);
      fVar2 = -fVar2;
    }
    else {
      if (uVar1 < 2) {
        if (uVar1 == 0) {
          fVar2 = (float)maybe___kernel_cosf(uStack_30,uStack_2c);
          return fVar2;
        }
      }
      else if (uVar1 == 2) {
        fVar2 = (float)maybe___kernel_cosf(uStack_30,uStack_2c);
        return -fVar2;
      }
      fVar2 = (float)maybe___kernel_sinf(uStack_30,uStack_2c,1);
    }
  }
  return fVar2;
}

// 0x00120a68  size 0x28
/* 67 callers */

uint fabsf(uint param_1)

{
  return param_1 & 0x7fffffff;
}

// 0x00120a90  size 0xd8
float maybe_floorf(float param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((uint)ABS(param_1) >> 0x17) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (0.0 < param_1 + 9.9999994e+29) {
        if ((int)param_1 < 0) {
          if (0x7fffff < (uint)ABS(param_1)) {
            param_1 = -1.0;
          }
        }
        else {
          param_1 = 0.0;
        }
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uint)param_1 & uVar2) == 0) {
        return param_1;
      }
      if (0.0 < param_1 + 9.9999994e+29) {
        if ((int)param_1 < 0) {
          param_1 = (float)((int)param_1 + (0x800000 >> (uVar1 & 0x1f)));
        }
        param_1 = (float)((uint)param_1 & ~uVar2);
      }
    }
  }
  return param_1;
}

// 0x00120b68  size 0xc8
float maybe_scalbnf(float param_1,long param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = ((uint)ABS(param_1) >> 0x17) + (int)param_2;
  if (0x7fffff < (uint)ABS(param_1)) {
    if (iVar2 < 0x100) {
      if (0 < iVar2) {
        return (float)((uint)param_1 & 0x807fffff | iVar2 * 0x800000);
      }
      if (param_2 < 0xc351) {
        fVar1 = 9.999999e-31;
      }
      else {
        fVar1 = 9.9999994e+29;
      }
    }
    else {
      fVar1 = 9.9999994e+29;
    }
    param_1 = (float)copysignf(fVar1,param_1);
    param_1 = param_1 * fVar1;
  }
  return param_1;
}

// 0x00120c30  size 0xdc
float cosf(uint param_1)

{
  ulong uVar1;
  float fVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_20;
  
  uStack_20 = param_1;
  if ((param_1 & 0x7fffffff) < 0x3f490fd9) {
    fVar2 = (float)maybe___kernel_sinf(param_1,0,0);
    return fVar2;
  }
  uVar1 = maybe___ieee754_rem_pio2f(&uStack_30);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    fVar2 = (float)maybe___kernel_cosf(uStack_30,uStack_2c);
    return fVar2;
  }
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      fVar2 = (float)maybe___kernel_sinf(uStack_30,uStack_2c,1);
      return fVar2;
    }
  }
  else if (uVar1 == 2) {
    fVar2 = (float)maybe___kernel_sinf(uStack_30,uStack_2c,1);
    goto LAB_00120d0c;
  }
  fVar2 = (float)maybe___kernel_cosf(uStack_30,uStack_2c);
LAB_00120d0c:
  return -fVar2;
}

// 0x00120d18  size 0x78
void tanf(uint param_1)

{
  uint uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_20;
  
  uStack_20 = param_1;
  if ((param_1 & 0x7fffffff) < 0x3f490fdb) {
    maybe___kernel_tanf(1);
  }
  else {
    uVar1 = maybe___ieee754_rem_pio2f(param_1,0,&uStack_30);
    maybe___kernel_tanf(uStack_30,uStack_2c,(uVar1 & 1) * -2 + 1);
  }
  return;
}

// 0x00120d90  size 0x14
void maybe_acosf(void)

{
  maybe___ieee754_acosf();
  return;
}

// 0x00120da8  size 0x14
void maybe_asinf(void)

{
  maybe___ieee754_asinf();
  return;
}

// 0x00120dc0  size 0x14
/* -> __ieee754_atan2f -> atanf */

void atan2f(void)

{
  maybe___ieee754_atan2f();
  return;
}

// 0x00120dd8  size 0x14
void maybe_fmodf(void)

{
  maybe___ieee754_fmodf();
  return;
}

// 0x00120df0  size 0x14
void maybe_sqrtf(void)

{
  maybe___ieee754_sqrtf();
  return;
}

// 0x00120e08  size 0x68
undefined4 maybe_sceCdSync0(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sceCdSync(1);
  uVar1 = 0;
  if (lVar2 == 0) {
    lVar2 = DIntr();
    uVar1 = uRam00378000;
    uRam00378000 = param_1;
    puRam00378004 = (undefined1 *)register0x000001c0;
    if (lVar2 != 0) {
      EIntr();
    }
  }
  return uVar1;
}

// 0x00120e70  size 0xa0
void libcdvd_sub_00120e70(int *param_1)

{
  DAT_00308218 = *param_1;
  DAT_0030821c = DAT_00308218;
  if (DAT_00308218 == 0xb) {
    DAT_003081f4 = 0;
  }
  else {
    iSignalSema(DAT_003081e8);
    if ((DAT_003081d4 == 0) || (iRam00378000 == 0)) {
      DAT_003081f4 = 0;
    }
    else {
      iSignalSema(DAT_003081e0);
    }
  }
  DAT_00308218 = 0;
  return;
}

// 0x00120f10  size 0xd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sceCdCbfunc(void)

{
  do {
    WaitSema(DAT_003081e0);
    if (DAT_00308218 == -1) {
      DAT_003081f4 = 0;
      DAT_00308218 = 0;
      DAT_003081d4 = 0;
      uRam00378014 = 0;
      ExitDeleteThread();
    }
    if (0 < ram0x003081d0) {
      maybe_scePrintf(0x35fd00,pcRam00378000,DAT_0030821c);
    }
    if ((pcRam00378000 != (code *)0x0) && (DAT_0030821c != 0)) {
      (*pcRam00378000)(DAT_0030821c);
    }
    DAT_003081f4 = 0;
  } while( true );
}

// 0x00120fe0  size 0xcc
bool maybe_Cd_CallbackThreadInit(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = DAT_003081d4 != 0;
  if (bVar1) {
    ChangeThreadPriority(DAT_003081d4,param_1);
  }
  else {
    uVar2 = GetThreadId();
    uRam00378018 = (undefined4)uVar2;
    ReferThreadStatus(uVar2,0x378020);
    pcRam00378054 = sceCdCbfunc;
    uRam00378064 = (undefined4)param_1;
    uRam00378060 = 0;
    uRam00378058 = param_2;
    uRam0037805c = param_3;
    uVar2 = CreateThread(0x378050);
    DAT_003081d4 = (int)uVar2;
    _StartThread(uVar2,0);
  }
  return !bVar1;
}

// 0x00121168  size 0xb8
void maybe_Cd_SemaInit(void)

{
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_4c;
  
  if (((DAT_003081e8 == -1) || (DAT_003081ec == -1)) || (DAT_003081f0 == -1)) {
    uStack_4c = 0;
    uStack_5c = 1;
    uStack_58 = 1;
    DAT_003081e8 = CreateSema(auStack_60);
    DAT_003081ec = CreateSema(auStack_60);
    DAT_003081f0 = CreateSema(auStack_60);
    uStack_58 = 0;
    DAT_003081e0 = CreateSema(auStack_60);
    DAT_003081f4 = 0;
  }
  return;
}

// 0x00121220  size 0xa0
void libcdvd_sub_00121220(void)

{
  long lVar1;
  
  if (DAT_003081d4 != 0) {
    DAT_00308218 = 0xffffffff;
    SignalSema(DAT_003081e0);
  }
  DeleteSema(DAT_003081e8);
  DeleteSema(DAT_003081ec);
  DeleteSema(DAT_003081f0);
  DeleteSema(DAT_003081e0);
  lVar1 = DIntr();
  libkernl_sub_00113e00(0xffffffff80000012);
  if (lVar1 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x001212c0  size 0x80
undefined4 libcdvd_sub_001212c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00308200 < 0) {
    libcdvd_sub_00121398();
  }
  lVar2 = DIntr();
  uVar1 = uRam00378008;
  uRam00378008 = param_1;
  puRam0037800c = (undefined1 *)register0x000001c0;
  uRam00378010 = param_2;
  if (lVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

// 0x00121340  size 0x54
void libcdvd_sub_00121340(void)

{
  if ((pcRam00378008 != (code *)0x0) && (DAT_003081e4 == 0)) {
    (*pcRam00378008)(uRam00378010);
  }
  return;
}

// 0x00121398  size 0x78
undefined4 libcdvd_sub_00121398(void)

{
  long lVar1;
  
  DAT_003081e4 = 1;
  lVar1 = DIntr();
  libkernl_sub_00113d88(0xffffffff80000012,0x121340,0);
  if (lVar1 != 0) {
    EIntr();
  }
  DAT_003081e4 = 0;
  DAT_00308200 = 1;
  return 1;
}

// 0x00121410  size 0x310
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "Libcdvd bind err CdSearchFile" */

undefined4 sceCdSearchFile(undefined8 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  
  maybe_Cd_SemaInit();
  iVar6 = PollSema(DAT_003081e8);
  if (DAT_003081e8 == iVar6) {
    DAT_003081dc = 1;
    ReferThreadStatus(uRam00378018,0x378020);
    lVar7 = sceCdSync(1);
    if (lVar7 == 0) {
      sceSifInitRpc(0);
      if (DAT_00308204 < 0) {
        while( true ) {
          while (lVar7 = sceSifBindRpc(0x378200,0xffffffff80000597,0), lVar7 < 0) {
            if (0 < ram0x003081d0) {
              maybe_scePrintf(0x35fd28);
            }
            iVar6 = 0x100000;
            do {
              iVar6 = iVar6 + -1;
            } while (iVar6 != -1);
          }
          iVar6 = 0x100000;
          if (iRam00378224 != 0) break;
          do {
            iVar6 = iVar6 + -1;
          } while (iVar6 != -1);
        }
        DAT_00308204 = 0;
      }
      cRam003780a4 = *param_2;
      iVar6 = 0;
      if (cRam003780a4 != '\0') {
        for (iVar6 = 1;
            (iVar6 < 0x100 &&
            (cVar1 = param_2[iVar6], *(char *)(iVar6 + 0x3780a4) = cVar1, cVar1 != '\0'));
            iVar6 = iVar6 + 1) {
        }
      }
      if (iVar6 == 0x100) {
        uRam003781a3 = 0;
      }
      if (0 < ram0x003081d0) {
        maybe_scePrintf(0x35fd48,0x3780a4);
      }
      uRam003781a4 = 0x378080;
      uRam003781a8 = param_3;
      sceSifWriteBackDCache(0x378080,300);
      lVar7 = sceSifCallRpc(0x378200,0,0,0x378080,300,0x3781c0,4,0);
      uVar4 = DAT_20378098;
      uVar3 = DAT_20378090;
      uVar2 = DAT_20378088;
      if (-1 < lVar7) {
        *param_1 = DAT_20378080;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        *(undefined4 *)(param_1 + 4) = DAT_203780a0;
        if (((0 < ram0x003081d0) && (maybe_scePrintf(0x35fd60,param_1 + 1), 0 < ram0x003081d0)) &&
           (maybe_scePrintf(0x35fd70,*(undefined4 *)((int)param_1 + 4)), 0 < ram0x003081d0)) {
          maybe_scePrintf(0x35fd80,*(undefined4 *)param_1);
        }
        uVar5 = DAT_203781c0;
        SignalSema(DAT_003081e8);
        return uVar5;
      }
    }
    SignalSema(DAT_003081e8);
  }
                    /* WARNING: Read-only address (ram,0x20378080) is written */
                    /* WARNING: Read-only address (ram,0x20378088) is written */
                    /* WARNING: Read-only address (ram,0x20378090) is written */
                    /* WARNING: Read-only address (ram,0x20378098) is written */
                    /* WARNING: Read-only address (ram,0x203780a0) is written */
                    /* WARNING: Read-only address (ram,0x203781c0) is written */
  return 0;
}

// 0x00121728  size 0x1c
void libcdvd_sub_00121728(undefined8 param_1,undefined8 param_2)

{
  sceCdSearchFile(param_1,param_2,0);
  return;
}

// 0x00121748  size 0x16c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "Ncmd fail sema", "bind err N CMD" */

undefined4 maybe_Cd_CheckNCmd(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  maybe_Cd_SemaInit();
  iVar1 = PollSema(DAT_003081e8);
  if (DAT_003081e8 == iVar1) {
    DAT_003081dc = (undefined4)param_1;
    ReferThreadStatus(uRam00378018,0x378020);
    lVar2 = sceCdSync(1);
    if (lVar2 == 0) {
      sceSifInitRpc(0);
      if (-1 < DAT_003081fc) {
        return 1;
      }
      while( true ) {
        while (lVar2 = sceSifBindRpc(0x309390,0xffffffff80000595,0), lVar2 < 0) {
          if (0 < ram0x003081d0) {
            maybe_scePrintf(0x35fdc0);
          }
          iVar1 = 0x100000;
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
        if (DAT_003093b4 != 0) break;
        iVar1 = 0x100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      DAT_003081fc = 0;
      return 1;
    }
    SignalSema(DAT_003081e8);
  }
  else if (0 < ram0x003081d0) {
    maybe_scePrintf(0x35fd98,param_1,DAT_003081dc);
    return 0;
  }
  return 0;
}

// 0x001218b8  size 0x98
undefined4 libcdvd_sub_001218b8(void)

{
  long lVar1;
  
  lVar1 = maybe_Cd_CheckNCmd(2);
  if (lVar1 != 0) {
    lVar1 = sceSifCallRpc(0x309390,0xe,0,0,0,0x308240,4,0);
    if (lVar1 < 0) {
      SignalSema(DAT_003081e8);
    }
    else {
      SignalSema(DAT_003081e8);
    }
  }
  return 0;
}

// 0x00121950  size 0xa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "N cmd wait" */

undefined4 sceCdSync(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = 1;
    if (DAT_003081f4 == 0) {
      lVar2 = sceSifCheckStatRpc(0x309390);
      uVar1 = 1;
      if (lVar2 == 0) {
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  if (0 < ram0x003081d0) {
    maybe_scePrintf(0x35fdd8);
  }
  while ((DAT_003081f4 != 0 || (lVar2 = sceSifCheckStatRpc(0x309390), lVar2 != 0))) {
    DelayThread(4000);
  }
  return 0;
}

// 0x001219f0  size 0x6c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "S cmd wait" */

undefined8 sceCdSyncS(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    if (0 < ram0x003081d0) {
      maybe_scePrintf(0x35fde8);
    }
    while( true ) {
      lVar1 = sceSifCheckStatRpc(0x309d40);
      uVar2 = 0;
      if (lVar1 == 0) break;
      DelayThread(4000);
    }
  }
  else {
    uVar2 = sceSifCheckStatRpc(0x309d40);
  }
  return uVar2;
}

// 0x00121a60  size 0x16c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "Scmd fail sema", "bind err S cmd" */

undefined4 maybe_Cd_CheckSCmd(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  maybe_Cd_SemaInit();
  iVar1 = PollSema(DAT_003081ec);
  if (DAT_003081ec == iVar1) {
    DAT_003081d8 = (undefined4)param_1;
    ReferThreadStatus(uRam00378018,0x378020);
    lVar2 = sceCdSyncS(1);
    if (lVar2 == 0) {
      sceSifInitRpc(0);
      if (-1 < DAT_0030820c) {
        return 1;
      }
      while( true ) {
        while (lVar2 = sceSifBindRpc(0x309d40,0xffffffff80000593,0), lVar2 < 0) {
          if (0 < ram0x003081d0) {
            maybe_scePrintf(0x35fe20);
          }
          iVar1 = 0x100000;
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
        if (DAT_00309d64 != 0) break;
        iVar1 = 0x100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      DAT_0030820c = 0;
      return 1;
    }
    SignalSema(DAT_003081ec);
  }
  else if (0 < ram0x003081d0) {
    maybe_scePrintf(0x35fdf8,param_1,DAT_003081d8);
    return 0;
  }
  return 0;
}

// 0x00121c80  size 0x2e0
/* WARNING: Removing unreachable block (ram,0x00121e9c) */
/* WARNING: Removing unreachable block (ram,0x00121eb8) */
/* WARNING: Removing unreachable block (ram,0x00121e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "Libcdvd bind err %d CD_Init" */

undefined4 sceCdInit(int param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = sceCdSyncS(1);
  uVar3 = 0;
  if (lVar2 == 0) {
    sceSifInitRpc(0);
    uRam00378018 = GetThreadId();
    DAT_003081e4 = 1;
    DAT_00308214 = DAT_00308214 + 1;
    DAT_00308200 = 0xffffffff;
    DAT_00308204 = 0xffffffff;
    DAT_003081fc = 0xffffffff;
    DAT_0030820c = 0xffffffff;
    DAT_00308208 = 0xffffffff;
    DAT_003081f8 = 0;
    DAT_00308210 = 0xffffffff;
    while( true ) {
      while (lVar2 = sceSifBindRpc(0x378228,0xffffffff80000592,0), lVar2 < 0) {
        if (0 < ram0x003081d0) {
          maybe_scePrintf(0x35fe38,lVar2,DAT_00308214);
        }
        iVar1 = 0x100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      if (iRam0037824c != 0) break;
      iVar1 = 0x100000;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    DAT_00308210 = 0;
    iRam00378280 = param_1;
    sceSifWriteBackDCache(0x378280,4);
    lVar2 = sceSifCallRpc(0x378228,0,0,0x378280,4,0x3093c0,0x10,0);
    if (lVar2 < 0) {
      DAT_003081e4 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
      DAT_003081e4 = 0;
      if (((param_1 < 0) || (param_1 < 2)) || (param_1 != 5)) {
        maybe_Cd_SemaInit();
        libcdvd_sub_00121398();
      }
      else {
        if (0 < ram0x003081d0) {
          maybe_scePrintf(0x35fe58);
        }
        libcdvd_sub_00121220();
        DAT_003081e8 = 0xffffffff;
        DAT_003081ec = 0xffffffff;
        DAT_003081e0 = 0xffffffff;
      }
    }
  }
  return uVar3;
}

// 0x00121f60  size 0x1f4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "OLD DiskReady Call" */

undefined4 maybe_sceCdDiskReadyOld(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (0 < ram0x003081d0) {
    maybe_scePrintf(0x35fe68);
  }
  maybe_Cd_SemaInit();
  iVar1 = PollSema(DAT_003081ec);
  uVar2 = 6;
  if (DAT_003081ec == iVar1) {
    lVar3 = sceCdSyncS(1);
    if (lVar3 == 0) {
      sceSifInitRpc(0);
      if (DAT_00308208 < 0) {
        while( true ) {
          while (lVar3 = sceSifBindRpc(0x378250,0xffffffff8000059a,0), lVar3 < 0) {
            if (0 < ram0x003081d0) {
              maybe_scePrintf(0x35fe80);
            }
            iVar1 = 0x100000;
            do {
              iVar1 = iVar1 + -1;
            } while (iVar1 != -1);
          }
          iVar1 = 0x100000;
          if (iRam00378274 != 0) break;
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
        DAT_00308208 = 0;
      }
      uRam00378290 = (undefined4)param_1;
      sceSifWriteBackDCache(0x378290,4);
      lVar3 = sceSifCallRpc(0x378250,0,0,0x378290,4,0x3093c0,4,0);
      if (-1 < lVar3) {
        if (0 < ram0x003081d0) {
          maybe_scePrintf(0x35fea0);
        }
        SignalSema(DAT_003081ec);
        return 0;
      }
    }
    SignalSema(DAT_003081ec);
    uVar2 = 6;
    if (param_1 == 8) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

// 0x00122158  size 0x204
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "NEW DiskReady Call" */

undefined8 sceCdDiskReady(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (0 < ram0x003081d0) {
    maybe_scePrintf(0x35feb8);
  }
  maybe_Cd_SemaInit();
  iVar2 = PollSema(DAT_003081f0);
  if (DAT_003081f0 == iVar2) {
    sceSifInitRpc(0);
    iVar2 = 0;
    if (DAT_00308208 < 0) {
      while( true ) {
        while (lVar3 = sceSifBindRpc(0x378250,0xffffffff8000059c,0), lVar3 < 0) {
          if (0 < ram0x003081d0) {
            maybe_scePrintf(0x35fe80);
          }
          iVar5 = 0x100000;
          do {
            iVar5 = iVar5 + -1;
          } while (iVar5 != -1);
        }
        bVar1 = 0x10 < iVar2;
        if (iRam00378274 != 0) break;
        iVar2 = iVar2 + 1;
        if (bVar1) {
          SignalSema(DAT_003081f0);
          uVar4 = maybe_sceCdDiskReadyOld(param_1);
          return uVar4;
        }
        iVar5 = 0x100000;
        do {
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
      DAT_00308208 = 0;
    }
    uRam00378290 = (undefined4)param_1;
    sceSifWriteBackDCache(0x378290,4);
    lVar3 = sceSifCallRpc(0x378250,0,0,0x378290,4,0x309c40,4,0);
    if (-1 < lVar3) {
      if (0 < ram0x003081d0) {
        maybe_scePrintf(0x35fea0);
      }
      SignalSema(DAT_003081f0);
      return 0;
    }
    SignalSema(DAT_003081f0);
  }
  uVar4 = 6;
  if (param_1 == 8) {
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}

// 0x00122360  size 0x1e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "call cdread cmd" */

undefined4 sceCdRead(undefined4 param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  
  if (((DAT_003081f8 & 1) == 0) && (lVar2 = libcdvd_sub_001218b8(), lVar2 == 6)) {
    return 0;
  }
  lVar2 = maybe_Cd_CheckNCmd(4);
  if (lVar2 != 0) {
    DAT_003082c8 = (undefined4)param_3;
    DAT_003082cc = *param_4;
    DAT_003082cd = param_4[1];
    DAT_003082ce = param_4[2];
    DAT_003082d0 = &DAT_003092c0;
    DAT_003082d4 = &DAT_00309380;
    bVar1 = param_4[2];
    if (bVar1 == 1) {
      iVar3 = param_2 * 0x918;
    }
    else {
      iVar3 = param_2 << 0xb;
      if ((1 < bVar1) && (bVar1 == 2)) {
        iVar3 = param_2 * 0x924;
      }
    }
    DAT_00309380 = 0;
    DAT_003082c0 = param_1;
    DAT_003082c4 = param_2;
    if ((DAT_003081f8 & 2) == 0) {
      sceSifWriteBackDCache(param_3,iVar3);
    }
    sceSifWriteBackDCache(0x3092c0,0x90);
    sceSifWriteBackDCache(0x3082c0,0x18);
    sceSifWriteBackDCache(0x309380,4);
    if (0 < ram0x003081d0) {
      maybe_scePrintf(0x35fed0);
    }
    DAT_00308218 = 1;
    DAT_003081f4 = 1;
    lVar2 = sceSifCallRpc(0x309390,1,1,0x3082c0,0x18,0,0,0x1210b0);
    if (-1 < lVar2) {
      if (ram0x003081d0 < 1) {
        return 1;
      }
      maybe_scePrintf(0x35fee8);
      return 1;
    }
    DAT_00308218 = 0;
    DAT_003081f4 = 0;
    SignalSema(DAT_003081e8);
  }
  return 0;
}

// 0x00122540  size 0x154
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
maybe_sceCdReadIOPm(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  long lVar1;
  
  if (((DAT_003081f8 & 1) == 0) && (lVar1 = libcdvd_sub_001218b8(), lVar1 == 6)) {
    return 0;
  }
  lVar1 = maybe_Cd_CheckNCmd(5);
  if (lVar1 != 0) {
    DAT_003082cc = *param_4;
    DAT_003082cd = param_4[1];
    DAT_003082ce = param_4[2];
    DAT_003082d0 = &DAT_003092c0;
    DAT_003082d4 = &DAT_00309380;
    DAT_003082c0 = param_1;
    DAT_003082c4 = param_2;
    DAT_003082c8 = param_3;
    sceSifWriteBackDCache(0x3082c0,0x18);
    DAT_00308218 = 1;
    DAT_003081f4 = 1;
    lVar1 = sceSifCallRpc(0x309390,0xd,1,0x3082c0,0x18,0,0,0x120e70);
    if (-1 < lVar1) {
      if (ram0x003081d0 < 1) {
        return 1;
      }
      maybe_scePrintf(0x35fef8);
      return 1;
    }
    DAT_00308218 = 0;
    DAT_003081f4 = 0;
    SignalSema(DAT_003081e8);
  }
  return 0;
}

// 0x00122698  size 0xcc
undefined4 libcdvd_sub_00122698(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = libcdvd_sub_001218b8();
  if ((lVar1 != 6) && (lVar1 = maybe_Cd_CheckNCmd(9), lVar1 != 0)) {
    DAT_003082c0 = param_1;
    sceSifWriteBackDCache(0x3082c0,4);
    DAT_00308218 = 4;
    DAT_003081f4 = 1;
    lVar1 = sceSifCallRpc(0x309390,5,1,0x3082c0,4,0,0,0x120e70);
    if (-1 < lVar1) {
      return 1;
    }
    DAT_00308218 = 0;
    DAT_003081f4 = 0;
    SignalSema(DAT_003081e8);
  }
  return 0;
}

// 0x00122768  size 0xac
undefined4 libcdvd_sub_00122768(void)

{
  long lVar1;
  
  lVar1 = libcdvd_sub_001218b8();
  if ((lVar1 != 6) && (lVar1 = maybe_Cd_CheckNCmd(10), lVar1 != 0)) {
    DAT_00308218 = 5;
    DAT_003081f4 = 1;
    lVar1 = sceSifCallRpc(0x309390,6,1,0,0,0,0,0x120e70);
    if (-1 < lVar1) {
      return 1;
    }
    DAT_00308218 = 0;
    DAT_003081f4 = 0;
    SignalSema(DAT_003081e8);
  }
  return 0;
}

// 0x00122818  size 0x98
undefined4 libcdvd_sub_00122818(void)

{
  long lVar1;
  
  lVar1 = maybe_Cd_CheckSCmd(1);
  if (lVar1 != 0) {
    lVar1 = sceSifCallRpc(0x309d40,3,0,0,0,0x3093c0,4,0);
    if (lVar1 < 0) {
      SignalSema(DAT_003081ec);
    }
    else {
      SignalSema(DAT_003081ec);
    }
  }
  return 0;
}

// 0x001228b0  size 0x98
undefined4 libcdvd_sub_001228b0(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = maybe_Cd_CheckSCmd(3);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    lVar2 = sceSifCallRpc(0x309d40,4,0,0,0,0x3093c0,4,0);
    if (lVar2 < 0) {
      SignalSema(DAT_003081ec);
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
      SignalSema(DAT_003081ec);
    }
  }
  return uVar1;
}

// 0x00122948  size 0xd0
undefined4 libcdvd_sub_00122948(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = maybe_Cd_CheckSCmd(0x22);
  if (lVar1 != 0) {
    DAT_00309800 = param_1;
    sceSifWriteBackDCache(0x309800,4);
    lVar1 = sceSifCallRpc(0x309d40,DAT_00309d68,0,0x309800,DAT_00309d6c,0x3093c0,DAT_00309d70,0);
    if (lVar1 < 0) {
      SignalSema(DAT_003081ec);
    }
    else {
      SignalSema(DAT_003081ec);
    }
  }
  return 0;
}

// 0x00122a18  size 0xf8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "Libcdvd call Clock read" */

undefined4 sceCdReadClock(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = maybe_Cd_CheckSCmd(0xf);
  if (lVar1 != 0) {
    if (0 < ram0x003081d0) {
      maybe_scePrintf(0x35ff08);
    }
    lVar1 = sceSifCallRpc(0x309d40,1,0,0,0,0x3093c0,0x10,0);
    if (lVar1 < 0) {
      SignalSema(DAT_003081ec);
    }
    else {
      *param_1 = 0;
      if (0 < ram0x003081d0) {
        maybe_scePrintf(0x35ff28);
      }
      SignalSema(DAT_003081ec);
    }
  }
  return 0;
}

// 0x00122b10  size 0x2c
void libcdvd_sub_00122b10(void)

{
  DAT_00309d78 = 0;
  maybe_Cd_StreamCmd();
  return;
}

// 0x00122b40  size 0x34
void libcdvd_sub_00122b40(undefined8 param_1,undefined8 param_2)

{
  DAT_00309d78 = 1;
  maybe_Cd_StreamCmd(param_1,0,0,1,param_2);
  return;
}

// 0x00122b78  size 0x2c
void libcdvd_sub_00122b78(undefined8 param_1)

{
  maybe_Cd_StreamCmd(param_1,0,0,9,0x378298);
  return;
}

// 0x00122ba8  size 0x2c
void libcdvd_sub_00122ba8(undefined8 param_1)

{
  maybe_Cd_StreamCmd(param_1,0,0,4,0x378298);
  return;
}

// 0x00122bd8  size 0x38
void libcdvd_sub_00122bd8(void)

{
  DAT_00309d78 = 0;
  maybe_Cd_StreamCmd(0,0,0,3,0x378298);
  return;
}

// 0x00122c10  size 0x188
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sceCdStRead(uint param_1,undefined8 param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < ram0x003081d0) {
    maybe_scePrintf(0x35ff48,param_1);
  }
  uVar2 = 0;
  if (DAT_00309d78 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    sceSifWriteBackDCache(param_2,param_1 << 0xb);
    if (param_3 == 0) {
      uVar2 = maybe_Cd_StreamCmd(0,param_1,param_2,2,0x378298);
      uVar5 = uVar2 & 0xffff;
      *param_4 = uVar2 >> 0x10;
    }
    else {
      iVar3 = 0;
      while( true ) {
        do {
          uVar1 = maybe_Cd_StreamCmd(0,param_1 - uVar5,(int)param_2 + iVar3,2,0x378298);
          uVar4 = uVar1 & 0xffff;
          uVar1 = uVar1 >> 0x10;
          uVar5 = uVar5 + uVar4;
          if (uVar1 == 0) {
            if (uVar4 == 0) {
              DelayThread(600);
            }
          }
          else {
            uVar2 = uVar1;
            if (0 < ram0x003081d0) {
              maybe_scePrintf(0x35ff78,uVar5,uVar4,param_1,uVar1);
            }
          }
          if (uVar5 == param_1) goto LAB_00122d24;
          iVar3 = uVar5 * 0x800;
        } while (uVar1 == 0);
        if (uVar4 == 0) break;
        iVar3 = uVar5 * 0x800;
      }
LAB_00122d24:
      if (0 < ram0x003081d0) {
        maybe_scePrintf(0x35ffc0);
      }
      *param_4 = uVar2;
    }
  }
  return uVar5;
}

// 0x00122d98  size 0x50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sceCdStPause(void)

{
  DAT_00309d78 = 0;
  if (0 < ram0x003081d0) {
    maybe_scePrintf(0x35ffe0);
  }
  maybe_Cd_StreamCmd(0,0,0,7,0x378298);
  return;
}

// 0x00122de8  size 0x54
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sceCdStResume(void)

{
  DAT_00309d78 = 1;
  if (0 < ram0x003081d0) {
    maybe_scePrintf(0x35fff8);
  }
  maybe_Cd_StreamCmd(0,0,0,8,0x378298);
  return;
}

// 0x00122e40  size 0x48
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sceCdStStat(void)

{
  if (0 < ram0x003081d0) {
    maybe_scePrintf(0x360010);
  }
  maybe_Cd_StreamCmd(0,0,0,6,0x378298);
  return;
}

// 0x00122e88  size 0x168
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "call cdreadstm cmd" */

undefined4
maybe_Cd_StreamCmd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = maybe_Cd_CheckNCmd(0xf);
  if (lVar1 != 0) {
    if (0 < ram0x003081d0) {
      maybe_scePrintf(0x360028);
    }
    if (param_5 != 0) {
      puVar2 = (undefined1 *)param_5;
      DAT_003082d0._0_1_ = *puVar2;
      DAT_003082d0._1_1_ = puVar2[1];
      DAT_003082d0._2_1_ = puVar2[2];
    }
    DAT_003082c0 = param_1;
    DAT_003082c4 = param_2;
    DAT_003082c8 = param_3;
    _DAT_003082cc = param_4;
    if (0 < ram0x003081d0) {
      maybe_scePrintf(0x360040);
    }
    sceSifWriteBackDCache(0x3082c0,0x14);
    lVar1 = sceSifCallRpc(0x309390,9,0,0x3082c0,0x14,0x308240,4,0);
    if (lVar1 < 0) {
      SignalSema(DAT_003081e8);
    }
    else {
      if (0 < ram0x003081d0) {
        maybe_scePrintf(0x360058);
      }
      SignalSema(DAT_003081e8);
    }
  }
  return 0;
}

// 0x00122ff0  size 0x1cc
/* "bind error libmc" */

int sceMcInit(void)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_8c;
  
  if (DAT_00309d94 < 0) {
    uStack_8c = 0;
    uStack_98 = 1;
    uStack_9c = 1;
    DAT_00309d94 = CreateSema(auStack_a0);
    uStack_9c = 1;
    uStack_98 = 0;
    uStack_8c = 0;
    DAT_00309d98 = CreateSema(auStack_a0);
  }
  sceMcSync(0,0,0);
  WaitSema(DAT_00309d94);
  sceSifInitRpc(0);
  while( true ) {
    lVar2 = sceSifBindRpc(0x3782c0,0xffffffff80000400,0);
    if (lVar2 < 0) {
      maybe_scePrintf(0x360068);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iRam003782e4 != 0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lVar2 = sceSifCallRpc(0x3782c0,0xfe,0,0x378340,0x30,0x379880,0xc,0);
  SignalSema(DAT_00309d94);
  if (lVar2 < 0) {
    iRam003782e4 = 0;
    iVar1 = (int)lVar2 + -100;
  }
  else if (iRam00379884 < 0x20a) {
    maybe_scePrintf(0x360080);
    iRam003782e4 = 0;
    iVar1 = -0x78;
  }
  else if (iRam00379888 < 0x20e) {
    maybe_scePrintf(0x3600a8);
    iRam003782e4 = 0;
    iVar1 = -0x79;
  }
  else {
    iVar1 = iRam00379880;
  }
  return iVar1;
}

// 0x001231c0  size 0x4c
undefined4 maybe_sceMcEnd(void)

{
  if (-1 < DAT_00309d94) {
    DeleteSema();
    DAT_00309d94 = -1;
    DeleteSema(DAT_00309d98);
  }
  return 1;
}

// 0x00123210  size 0x30
undefined4 libmc_sub_00123210(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0x379880;
  *param_2 = &DAT_00309d90;
  uRam003798bc = DAT_00309d94;
  return 0x3782c0;
}

// 0x00123310  size 0xc4
int libmc_sub_00123310(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  
  if (iRam003782e4 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(DAT_00309d94);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      uRam00378344 = param_1;
      iVar1 = sceSifCallRpc(0x3782c0,0x15,0,0x378340,0x30,0x379880,4,0);
      if (iVar1 == 0) {
        SignalSema(DAT_00309d94);
        iVar1 = iRam00379880;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return iVar1;
}

// 0x001233d8  size 0x128
long libmc_sub_001233d8(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  
  if (iRam003782e4 == 0) {
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
        uRam00378783 = 0;
        uRam00378370 = param_1;
        uRam00378374 = param_2;
        uRam00378378 = param_4;
        lVar1 = sceSifCallRpc(0x3782c0,2,1,0x378370,0x414,0x379880,4,0x123240);
        if (lVar1 == 0) {
          DAT_00309d90 = 2;
        }
        else {
          SignalSema(DAT_00309d94);
        }
      }
    }
  }
  return lVar1;
}

// 0x00123500  size 0x34
long libmc_sub_00123500(void)

{
  long lVar1;
  
  lVar1 = libmc_sub_001233d8();
  if (lVar1 == 0) {
    DAT_00309d90 = 0xb;
  }
  return lVar1;
}

// 0x00123538  size 0xbc
long libmc_sub_00123538(undefined4 param_1)

{
  long lVar1;
  
  if (iRam003782e4 == 0) {
    lVar1 = -100;
  }
  else {
    lVar1 = PollSema(DAT_00309d94);
    if (lVar1 < 0) {
      lVar1 = -200;
    }
    else {
      uRam00378340 = param_1;
      lVar1 = sceSifCallRpc(0x3782c0,3,1,0x378340,0x30,0x379880,4,0x123240);
      if (lVar1 == 0) {
        DAT_00309d90 = 3;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar1;
}

// 0x001235f8  size 0xe0
long libmc_sub_001235f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (iRam003782e4 == 0) {
    lVar1 = -100;
  }
  else {
    lVar1 = PollSema(DAT_00309d94);
    if (lVar1 < 0) {
      lVar1 = -200;
    }
    else {
      uRam00378340 = param_1;
      uRam00378350 = param_2;
      uRam00378354 = param_3;
      lVar1 = sceSifCallRpc(0x3782c0,4,1,0x378340,0x30,0x379880,4,0x123240);
      if (lVar1 == 0) {
        DAT_00309d90 = 4;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar1;
}

// 0x00123770  size 0x114
long libmc_sub_00123770(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (iRam003782e4 == 0) {
    lVar1 = -100;
  }
  else {
    lVar1 = PollSema(DAT_00309d94);
    if (lVar1 < 0) {
      lVar1 = -200;
    }
    else {
      uRam0037835c = 0x3787c0;
      uRam00378358 = (undefined4)param_2;
      uRam0037834c = (undefined4)param_3;
      uRam00378340 = param_1;
      sceSifWriteBackDCache(param_2,param_3);
      sceSifWriteBackDCache(0x3787c0,0xc0);
      lVar1 = sceSifCallRpc(0x3782c0,5,1,0x378340,0x30,0x379880,4,0x1236d8);
      if (lVar1 == 0) {
        DAT_00309d90 = 5;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar1;
}

// 0x00123888  size 0x178
long libmc_sub_00123888(undefined4 param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  if (iRam003782e4 == 0) {
    lVar2 = -100;
  }
  else {
    lVar2 = PollSema(DAT_00309d94);
    if (lVar2 < 0) {
      lVar2 = -200;
    }
    else {
      if (param_3 < 0x11) {
        puRam00378358 = (undefined1 *)0x0;
        iRam0037834c = 0;
        uRam00378354 = (uint)param_3;
      }
      else {
        uRam00378354 = ((uint)(param_2 + -1) & 0xfffffff0) - (int)(param_2 + -0x10);
        iRam0037834c = (uint)param_3 - uRam00378354;
        puRam00378358 = param_2 + uRam00378354;
      }
      uRam00378340 = param_1;
      if (uRam00378354 != 0) {
        puVar1 = param_2;
        uVar3 = 0;
        do {
          uVar4 = uVar3 + 1;
          *(undefined1 *)(uVar3 + 0x378360) = *puVar1;
          puVar1 = param_2 + uVar4;
          uVar3 = uVar4;
        } while (uVar4 < uRam00378354);
      }
      FlushCache(0);
      lVar2 = sceSifCallRpc(0x3782c0,6,1,0x378340,0x30,0x379880,4,0x123240);
      if (lVar2 == 0) {
        DAT_00309d90 = 6;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar2;
}

// 0x00123a00  size 0xc4
uint sceMcSync(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  
  if (DAT_00309d90 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar2 = PollSema(DAT_00309d98);
    bVar1 = lVar2 < 0;
    if ((param_1 == 0) && (bVar1)) {
      bVar1 = false;
      WaitSema(DAT_00309d98);
    }
    uVar3 = (uint)!bVar1;
    if (param_2 != 0) {
      *(int *)param_2 = DAT_00309d90;
    }
    if (uVar3 != 0) {
      DAT_00309d90 = 0;
      if (param_3 != 0) {
        *(undefined4 *)param_3 = uRam00379880;
      }
      SignalSema(DAT_00309d94);
    }
  }
  return uVar3;
}

// 0x00123b20  size 0x17c
long libmc_sub_00123b20(undefined4 param_1,undefined4 param_2,long param_3,long param_4,long param_5
                       )

{
  long lVar1;
  
  if (iRam003782e4 == 0) {
    lVar1 = -100;
  }
  else {
    lVar1 = PollSema(DAT_00309d94);
    if (lVar1 < 0) {
      lVar1 = -200;
    }
    else {
      uRam0037835c = 0x3787c0;
      uRam00378354 = (uint)(param_3 != 0);
      uRam00378350 = (uint)(param_4 != 0);
      uRam0037834c = (uint)(param_5 != 0);
      uRam003782e8 = (undefined4)param_3;
      uRam003782ec = (undefined4)param_4;
      uRam003782f0 = (undefined4)param_5;
      uRam00378344 = param_1;
      uRam00378348 = param_2;
      sceSifWriteBackDCache(0x3787c0,0xc0);
      lVar1 = sceSifCallRpc(0x3782c0,1,1,0x378340,0x30,0x379880,4,0x123ac8);
      if (lVar1 == 0) {
        DAT_00309d90 = 1;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar1;
}

// 0x00123ca0  size 0x70
/* "sceMcUdCheckNewCard RPC faild" */

undefined4 sceMcUdCheckNewCard(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sceSifCallRpc(0x3782c0,0x35,0,0x378340,0x30,0x379880,4,0x123240);
  if (lVar2 == 0) {
    uVar1 = uRam00379880;
  }
  else {
    maybe_scePrintf(0x3600d0);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x00123d10  size 0x14c
long libmc_sub_00123d10(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                       long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  if (iRam003782e4 == 0) {
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
        uRam00378380 = (undefined4)param_6;
        uRam00378370 = param_1;
        uRam00378374 = param_2;
        uRam00378378 = param_4;
        iRam0037837c = (int)param_5;
        maybe_strncpy(0x378384,param_3,0x3ff);
        uRam00378783 = 0;
        if (-1 < param_5) {
          sceSifWriteBackDCache(param_6,(int)param_5 << 6);
        }
        lVar1 = sceSifCallRpc(0x3782c0,0xd,1,0x378370,0x414,0x379880,4,0x123240);
        if (lVar1 == 0) {
          DAT_00309d90 = 0xd;
        }
        else {
          SignalSema(DAT_00309d94);
        }
      }
    }
  }
  return lVar1;
}

// 0x00123e60  size 0x8c
void libmc_sub_00123e60(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = strlen(0x20378880);
    if (uVar1 < 0x400) {
      uVar2 = strlen(0x20378880);
    }
    else {
      uVar2 = 0x3ff;
    }
    memcpy(param_1,0x20378880,uVar2);
    *(undefined1 *)((int)param_1 + (int)uVar2) = 0;
  }
  iSignalSema(DAT_00309d98);
  return;
}

// 0x00123ef0  size 0x140
long libmc_sub_00123ef0(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (iRam003782e4 == 0) {
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
        uRam00378380 = 0x378880;
        uRam00378370 = param_1;
        uRam00378374 = param_2;
        maybe_strncpy(0x378384,param_3,0x3ff);
        uRam00378783 = 0;
        sceSifWriteBackDCache(0x378880,0x400);
        lVar1 = sceSifCallRpc(0x3782c0,0xc,1,0x378370,0x414,0x379880,4,0x123e60);
        if (lVar1 == 0) {
          DAT_00309d90 = 0xc;
        }
        else {
          SignalSema(DAT_00309d94);
        }
      }
    }
  }
  return lVar1;
}

