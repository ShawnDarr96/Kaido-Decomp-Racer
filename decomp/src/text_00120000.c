// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00120000 - 0x00124000
#include "ghidra_types.h"

// 0x00120110  size 0x44
ulong copysign(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff |
         ((long)param_1 >> 0x20 & 0x7fffffffU | param_2 >> 0x20 & 0xffffffff80000000U) << 0x20;
}

// 0x00120158  size 0x34
ulong fabs(ulong param_1)

{
  return param_1 & 0xffffffff | ((long)param_1 >> 0x20 & 0x7fffffffU) << 0x20;
}

// 0x00120190  size 0x204
ulong maybe_floor(ulong param_1)

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

// 0x0012039c  size 0x8
/* follows floor; no call, branch, pointer or constant references it (exception landing pad or dead
   code) */

void floor_Orphan1(void)

{
  return;
}

// 0x001203a8  size 0x48
int maybe_finite(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x7ff00000 - ((int)param_1 >> 0x20 & 0x7fffffffU | (param_1 | -param_1) >> 0x1f);
  return ((int)(uVar1 | -uVar1) >> 0x1f) + 1;
}

// 0x001203f0  size 0x3c
uint maybe_isnan(uint param_1)

{
  return 0x7ff00000 - ((int)param_1 >> 0x20 & 0x7fffffffU | (param_1 | -param_1) >> 0x1f) >> 0x1f;
}

// 0x00120430  size 0x1bc
ulong maybe_scalbn(ulong param_1,long param_2)

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
  uVar1 = copysign(uVar5,param_1);
  uVar4 = __muldf3(uVar1,uVar5);
  return uVar4;
}

// 0x00120600  size 0x14
/* follows scalbn; no call, branch, pointer or constant references it (exception landing pad or dead
   code) */

void scalbn_Orphan1(void)

{
  return;
}

// 0x00120618  size 0xa0
void maybe_cos(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = param_1 >> 0x20 & 0x7fffffff;
  if (uVar2 < 0x3fe921fc) {
    maybe___kernel_cos(param_1,0);
  }
  else if (uVar2 < 0x7ff00000) {
    uVar1 = maybe___ieee754_rem_pio2(param_1,&uStack_20,1);
    maybe___kernel_cos(uStack_20,uStack_18,(uVar1 & 1) * -2 + 1);
  }
  else {
    __subdf3(param_1,param_1);
  }
  return;
}

// 0x001206c0  size 0x274
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

// 0x00120940  size 0xc
/* follows atanf; no call, branch, pointer or constant references it (exception landing pad or dead
   code) */

void atanf_Orphan1(void)

{
  return;
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
float cosf(float __x)

{
  ulong uVar1;
  float fVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_20;
  
  fStack_20 = __x;
  if ((uint)ABS(__x) < 0x3f490fd9) {
    fVar2 = (float)maybe___kernel_sinf(__x,0,0);
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
/* N153 confirmed: newlib wrapper over __ieee754_acosf */

void acosf(void)

{
  maybe___ieee754_acosf();
  return;
}

// 0x00120da8  size 0x14
/* N153 confirmed */

void asinf(void)

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
/* N153 confirmed */

void fmodf(void)

{
  maybe___ieee754_fmodf();
  return;
}

// 0x00120df0  size 0x14
/* N153 confirmed */

void sqrtf(void)

{
  maybe___ieee754_sqrtf();
  return;
}

// 0x00120e08  size 0x68
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceCdSync0(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sceCdSync(1);
  uVar1 = 0;
  if (lVar2 == 0) {
    lVar2 = DIntr();
    uVar1 = _g_sceCdCbfuncShared1;
    _s_sceCdSync0_1 = &_mips_gp0_value;
    _g_sceCdCbfuncShared1 = param_1;
    if (lVar2 != 0) {
      EIntr();
    }
  }
  return uVar1;
}

// 0x00120e70  size 0xa0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Cd_CallbackHandler(int *param_1)

{
  DAT_00308218 = *param_1;
  DAT_0030821c = DAT_00308218;
  if (DAT_00308218 == 0xb) {
    DAT_003081f4 = 0;
  }
  else {
    iSignalSema(DAT_003081e8);
    if ((DAT_003081d4 == 0) || (_g_sceCdCbfuncShared1 == 0)) {
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
      _s_sceCdCbfunc_1 = 0;
      ExitDeleteThread();
    }
    if (0 < ram0x003081d0) {
      maybe_scePrintf(0x35fd00,_g_sceCdCbfuncShared1,DAT_0030821c);
    }
    if ((_g_sceCdCbfuncShared1 != (code *)0x0) && (DAT_0030821c != 0)) {
      (*_g_sceCdCbfuncShared1)(DAT_0030821c);
    }
    DAT_003081f4 = 0;
  } while( true );
}

// 0x00120fe0  size 0xcc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
    _g_CdShared2 = (undefined4)uVar2;
    ReferThreadStatus(uVar2,0x378020);
    _s_Cd_CallbackThreadInit_1 = sceCdCbfunc;
    _s_Cd_CallbackThreadInit_5 = (undefined4)param_1;
    _s_Cd_CallbackThreadInit_4 = 0;
    _s_Cd_CallbackThreadInit_2 = param_2;
    _s_Cd_CallbackThreadInit_3 = param_3;
    uVar2 = CreateThread(0x378050);
    DAT_003081d4 = (int)uVar2;
    _StartThread(uVar2,0);
  }
  return !bVar1;
}

// 0x001210b0  size 0xb8
/* address loaded as a constant in sceCdRead */

void sceCdRead_Callback1(uint param_1)

{
  uint uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 | 0x20000000);
  iVar5 = 0;
  if (0 < *piVar7) {
    uVar1 = piVar7[2];
    if (0 < *piVar7) {
      piVar2 = piVar7 + 4;
      do {
        puVar4 = (undefined1 *)((uVar1 | 0x20000000) + iVar5);
        iVar6 = *piVar2;
        puVar3 = (undefined1 *)(uVar1 + iVar5);
        iVar5 = iVar5 + 1;
        *puVar4 = (char)iVar6;
        *puVar3 = (char)iVar6;
        piVar2 = (int *)((int)(piVar7 + 4) + iVar5);
      } while (iVar5 < *piVar7);
      iVar5 = piVar7[1];
      goto LAB_00121118;
    }
  }
  iVar5 = piVar7[1];
LAB_00121118:
  if (0 < iVar5) {
    uVar1 = piVar7[3];
    iVar6 = 0;
    if (0 < iVar5) {
      piVar2 = piVar7 + 0x14;
      do {
        puVar4 = (undefined1 *)((uVar1 | 0x20000000) + iVar6);
        iVar5 = *piVar2;
        puVar3 = (undefined1 *)(uVar1 + iVar6);
        iVar6 = iVar6 + 1;
        *puVar4 = (char)iVar5;
        *puVar3 = (char)iVar5;
        piVar2 = (int *)((int)(piVar7 + 0x14) + iVar6);
      } while (iVar6 < piVar7[1]);
    }
  }
  maybe_Cd_CallbackHandler(0x308218);
  return;
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
void maybe_sceCdInitEeCB(void)

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
  maybe_sceSifRemoveCmdHandler(0xffffffff80000012);
  if (lVar1 == 0) {
    return;
  }
  EIntr();
  return;
}

// 0x001212c0  size 0x80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_sceCdCallback(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_00308200 < 0) {
    maybe_Cd_SetupCallbackCmd();
  }
  lVar2 = DIntr();
  uVar1 = _g_sceCdCallbackShared1;
  _s_sceCdCallback_1 = &_mips_gp0_value;
  _g_sceCdCallbackShared1 = param_1;
  _g_sceCdCallbackShared2 = param_2;
  if (lVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

// 0x00121340  size 0x54
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Cd_InvokeUserCallback(void)

{
  if ((_g_sceCdCallbackShared1 != (code *)0x0) && (DAT_003081e4 == 0)) {
    (*_g_sceCdCallbackShared1)(_g_sceCdCallbackShared2);
  }
  return;
}

// 0x00121398  size 0x78
undefined4 maybe_Cd_SetupCallbackCmd(void)

{
  long lVar1;
  
  DAT_003081e4 = 1;
  lVar1 = DIntr();
  maybe_sceSifGetCmdHandler(0xffffffff80000012,0x121340,0);
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
    ReferThreadStatus(_g_CdShared2,0x378020);
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
          if (_s_sceCdSearchFile_5 != 0) break;
          do {
            iVar6 = iVar6 + -1;
          } while (iVar6 != -1);
        }
        DAT_00308204 = 0;
      }
      s_sceCdSearchFile_1 = *param_2;
      iVar6 = 0;
      if (s_sceCdSearchFile_1 != '\0') {
        for (iVar6 = 1;
            (iVar6 < 0x100 &&
            (cVar1 = param_2[iVar6], (&s_sceCdSearchFile_1)[iVar6] = cVar1, cVar1 != '\0'));
            iVar6 = iVar6 + 1) {
        }
      }
      if (iVar6 == 0x100) {
        s_sceCdSearchFile_2 = 0;
      }
      if (0 < ram0x003081d0) {
        maybe_scePrintf(0x35fd48,0x3780a4);
      }
      _s_sceCdSearchFile_3 = 0x378080;
      _s_sceCdSearchFile_4 = param_3;
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
void maybe_sceCdSearchFileSimple(undefined8 param_1,undefined8 param_2)

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
    ReferThreadStatus(_g_CdShared2,0x378020);
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
undefined4 sceCdGetError(void)

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

// 0x00121a60  size 0x164
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
    ReferThreadStatus(_g_CdShared2,0x378020);
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

// 0x00121bc8  size 0x4
/* follows Cd_CheckSCmd; no call, branch, pointer or constant reference (exception landing pad or
   dead code) */

void Cd_CheckSCmd_Orphan2(void)

{
  return;
}

// 0x00121bcc  size 0x4
/* follows Cd_CheckSCmd; no call, branch, pointer or constant references it (exception landing pad
   or dead code) */

undefined4 Cd_CheckSCmd_Orphan1(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == 0x8001) {
    puVar1 = DAT_003081e8;
  }
  else if (param_1 == 0x8003) {
    puVar1 = (undefined4 *)&DAT_00308240;
  }
  else if (param_1 == 0x8002) {
    puVar1 = &DAT_003082c0;
  }
  else if (param_1 == 0x8004) {
    puVar1 = (undefined4 *)&DAT_00309390;
  }
  else {
    if (param_1 == 0x8011) {
      *param_2 = DAT_003081ec;
      return 1;
    }
    if (param_1 == 0x8013) {
      puVar1 = (undefined4 *)&DAT_003093c0;
    }
    else if (param_1 == 0x8012) {
      puVar1 = &DAT_00309800;
    }
    else if (param_1 == 0x8014) {
      puVar1 = (undefined4 *)&DAT_00309d40;
    }
    else {
      puVar1 = (undefined4 *)0x0;
    }
  }
  *param_2 = puVar1;
  return 1;
}

// 0x00121bd0  size 0xb0
/* follows Cd_CheckSCmd; no call, branch, pointer or constant reference (exception landing pad or
   dead code) */

undefined4 Cd_CheckSCmd_Orphan3(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == 0x8001) {
    puVar1 = DAT_003081e8;
  }
  else if (param_1 == 0x8003) {
    puVar1 = (undefined4 *)&DAT_00308240;
  }
  else if (param_1 == 0x8002) {
    puVar1 = &DAT_003082c0;
  }
  else if (param_1 == 0x8004) {
    puVar1 = (undefined4 *)&DAT_00309390;
  }
  else {
    if (param_1 == 0x8011) {
      *param_2 = DAT_003081ec;
      return 1;
    }
    if (param_1 == 0x8013) {
      puVar1 = (undefined4 *)&DAT_003093c0;
    }
    else if (param_1 == 0x8012) {
      puVar1 = &DAT_00309800;
    }
    else if (param_1 == 0x8014) {
      puVar1 = (undefined4 *)&DAT_00309d40;
    }
    else {
      puVar1 = (undefined4 *)0x0;
    }
  }
  *param_2 = puVar1;
  return 1;
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
    _g_CdShared2 = GetThreadId();
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
      if (_s_sceCdInit_1 != 0) break;
      iVar1 = 0x100000;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    DAT_00308210 = 0;
    _s_sceCdInit_2 = param_1;
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
        maybe_Cd_SetupCallbackCmd();
      }
      else {
        if (0 < ram0x003081d0) {
          maybe_scePrintf(0x35fe58);
        }
        maybe_sceCdInitEeCB();
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
          if (_g_sceCdDiskReadyOldShared1 != 0) break;
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
        DAT_00308208 = 0;
      }
      _g_sceCdDiskReadyOldShared2 = (undefined4)param_1;
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
        if (_g_sceCdDiskReadyOldShared1 != 0) break;
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
    _g_sceCdDiskReadyOldShared2 = (undefined4)param_1;
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
  
  if (((DAT_003081f8 & 1) == 0) && (lVar2 = sceCdGetError(), lVar2 == 6)) {
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
  
  if (((DAT_003081f8 & 1) == 0) && (lVar1 = sceCdGetError(), lVar1 == 6)) {
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
undefined4 maybe_sceCdSeek(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = sceCdGetError();
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
undefined4 maybe_sceCdStop(void)

{
  long lVar1;
  
  lVar1 = sceCdGetError();
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
/* scmd 1; used by File_GetDiscType */

undefined4 sceCdGetDiskType(void)

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
/* scmd 3 */

undefined4 maybe_sceCdTrayReq(void)

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
/* scmd 0x22; called with 2 (DVD) after init */

undefined4 sceCdMmode(undefined4 param_1)

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
void sceCdStInit(void)

{
  DAT_00309d78 = 0;
  maybe_Cd_StreamCmd();
  return;
}

// 0x00122b40  size 0x34
void sceCdStStart(undefined8 param_1,undefined8 param_2)

{
  DAT_00309d78 = 1;
  maybe_Cd_StreamCmd(param_1,0,0,1,param_2);
  return;
}

// 0x00122b78  size 0x2c
void maybe_sceCdStSeekF(undefined8 param_1)

{
  maybe_Cd_StreamCmd(param_1,0,0,9,0x378298);
  return;
}

// 0x00122ba8  size 0x2c
void maybe_sceCdStSeek(undefined8 param_1)

{
  maybe_Cd_StreamCmd(param_1,0,0,4,0x378298);
  return;
}

// 0x00122bd8  size 0x38
void sceCdStStop(void)

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
    if (_g_sceMcInitShared1 != 0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lVar2 = sceSifCallRpc(0x3782c0,0xfe,0,0x378340,0x30,0x379880,0xc,0);
  SignalSema(DAT_00309d94);
  if (lVar2 < 0) {
    _g_sceMcInitShared1 = 0;
    iVar1 = (int)lVar2 + -100;
  }
  else if (_s_sceMcInit_1 < 0x20a) {
    maybe_scePrintf(0x360080);
    _g_sceMcInitShared1 = 0;
    iVar1 = -0x78;
  }
  else if (_s_sceMcInit_2 < 0x20e) {
    maybe_scePrintf(0x3600a8);
    _g_sceMcInitShared1 = 0;
    iVar1 = -0x79;
  }
  else {
    iVar1 = _g_sceMcInitShared2;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 maybe_Mc_GetSyncState(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = &g_sceMcInitShared2;
  *param_2 = &DAT_00309d90;
  _s_Mc_GetSyncState_1 = DAT_00309d94;
  return 0x3782c0;
}

// 0x00123240  size 0xc
/* address loaded as a constant in sceMcOpen (callback / handler) */

void sceMcOpen_Callback1(void)

{
  iSignalSema(DAT_00309d98);
  return;
}

// 0x00123250  size 0xbc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* follows sceMcOpen; no call, branch, pointer or constant reference (exception landing pad or dead
   code) */

long sceMcOpen_Orphan1(undefined4 param_1)

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
      _g_sceMcWriteShared2 = param_1;
      lVar1 = sceSifCallRpc(0x3782c0,0x14,1,0x378340,0x30,0x379880,4,0x123240);
      if (lVar1 == 0) {
        DAT_00309d90 = 0x14;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return lVar1;
}

// 0x00123310  size 0xc4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int maybe_sceMcGetInfo(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  
  if (_g_sceMcInitShared1 == 0) {
    iVar1 = -100;
  }
  else {
    lVar2 = PollSema(DAT_00309d94);
    if (lVar2 < 0) {
      iVar1 = -200;
    }
    else {
      _g_sceMcGetInfoShared1 = param_1;
      iVar1 = sceSifCallRpc(0x3782c0,0x15,0,0x378340,0x30,0x379880,4,0);
      if (iVar1 == 0) {
        SignalSema(DAT_00309d94);
        iVar1 = _g_sceMcInitShared2;
      }
      else {
        SignalSema(DAT_00309d94);
      }
    }
  }
  return iVar1;
}

// 0x001233d8  size 0x128
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcOpen(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4)

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
        _g_sceMcOpenShared1 = param_1;
        _g_sceMcOpenShared2 = param_2;
        _g_sceMcOpenShared3 = param_4;
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
long maybe_sceMcOpenChecked(void)

{
  long lVar1;
  
  lVar1 = maybe_sceMcOpen();
  if (lVar1 == 0) {
    DAT_00309d90 = 0xb;
  }
  return lVar1;
}

// 0x00123538  size 0xbc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcClose(undefined4 param_1)

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcSeek(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
      _g_sceMcSeekShared1 = param_2;
      _g_sceMcWriteShared2 = param_3;
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

// 0x001236d8  size 0x98
/* address loaded as a constant in sceMcRead */

void sceMcRead_Callback1(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  piVar1 = (int *)(param_1 | 0x20000000);
  if (*piVar1 != 0) {
    puVar4 = (undefined1 *)piVar1[2];
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        iVar3 = iVar2 + 0x10;
        iVar2 = iVar2 + 1;
        *puVar4 = *(undefined1 *)((int)piVar1 + iVar3);
        puVar4 = puVar4 + 1;
      } while (iVar2 < *piVar1);
      iVar2 = piVar1[1];
      goto LAB_0012372c;
    }
  }
  iVar2 = piVar1[1];
LAB_0012372c:
  if (iVar2 != 0) {
    puVar4 = (undefined1 *)piVar1[3];
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = iVar3 + 0x50;
        iVar3 = iVar3 + 1;
        *puVar4 = *(undefined1 *)((int)piVar1 + iVar2);
        puVar4 = puVar4 + 1;
      } while (iVar3 < piVar1[1]);
    }
  }
  iSignalSema(DAT_00309d98);
  return;
}

// 0x00123770  size 0x114
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcRead(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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
      _g_sceMcReadShared1 = 0x3787c0;
      _g_sceMcWriteShared3 = (undefined4)param_2;
      _g_sceMcWriteShared1 = (undefined4)param_3;
      _g_sceMcCloseShared1 = param_1;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcWrite(undefined4 param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  if (_g_sceMcInitShared1 == 0) {
    lVar2 = -100;
  }
  else {
    lVar2 = PollSema(DAT_00309d94);
    if (lVar2 < 0) {
      lVar2 = -200;
    }
    else {
      if (param_3 < 0x11) {
        _g_sceMcWriteShared3 = (undefined1 *)0x0;
        _g_sceMcWriteShared1 = 0;
        _g_sceMcWriteShared2 = (uint)param_3;
      }
      else {
        _g_sceMcWriteShared2 = ((uint)(param_2 + -1) & 0xfffffff0) - (int)(param_2 + -0x10);
        _g_sceMcWriteShared1 = (uint)param_3 - _g_sceMcWriteShared2;
        _g_sceMcWriteShared3 = param_2 + _g_sceMcWriteShared2;
      }
      _g_sceMcCloseShared1 = param_1;
      if (_g_sceMcWriteShared2 != 0) {
        puVar1 = param_2;
        uVar3 = 0;
        do {
          uVar4 = uVar3 + 1;
          *(undefined1 *)(uVar3 + 0x378360) = *puVar1;
          puVar1 = param_2 + uVar4;
          uVar3 = uVar4;
        } while (uVar4 < _g_sceMcWriteShared2);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
        *(undefined4 *)param_3 = _g_sceMcInitShared2;
      }
      SignalSema(DAT_00309d94);
    }
  }
  return uVar3;
}

// 0x00123ac8  size 0x58
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* address loaded as a constant in sceMcGetDir */

void sceMcGetDir_Callback1(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 | 0x20000000);
  if (_s_sceMcGetDir_1 != (undefined4 *)0x0) {
    *_s_sceMcGetDir_1 = *puVar1;
  }
  if (_s_sceMcGetDir_2 != (undefined4 *)0x0) {
    *_s_sceMcGetDir_2 = puVar1[1];
  }
  if (_s_sceMcGetDir_3 != (undefined4 *)0x0) {
    *_s_sceMcGetDir_3 = puVar1[0x24];
  }
  iSignalSema(DAT_00309d98);
  return;
}

// 0x00123b20  size 0x17c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcGetDir(undefined4 param_1,undefined4 param_2,long param_3,long param_4,long param_5)

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
      _g_sceMcReadShared1 = 0x3787c0;
      _g_sceMcWriteShared2 = (uint)(param_3 != 0);
      _g_sceMcSeekShared1 = (uint)(param_4 != 0);
      _g_sceMcWriteShared1 = (uint)(param_5 != 0);
      _s_sceMcGetDir_1 = (undefined4)param_3;
      _s_sceMcGetDir_2 = (undefined4)param_4;
      _s_sceMcGetDir_3 = (undefined4)param_5;
      _g_sceMcGetInfoShared1 = param_1;
      _g_sceMcGetDirShared1 = param_2;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* "sceMcUdCheckNewCard RPC faild" */

undefined4 sceMcUdCheckNewCard(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sceSifCallRpc(0x3782c0,0x35,0,0x378340,0x30,0x379880,4,0x123240);
  if (lVar2 == 0) {
    uVar1 = _g_sceMcInitShared2;
  }
  else {
    maybe_scePrintf(0x3600d0);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 0x00123d10  size 0x14c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcSetFileInfo
               (undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
               undefined8 param_6)

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
        _g_sceMcSetFileInfoShared1 = (undefined4)param_6;
        _g_sceMcOpenShared1 = param_1;
        _g_sceMcOpenShared2 = param_2;
        _g_sceMcOpenShared3 = param_4;
        _s_sceMcSetFileInfo_1 = (int)param_5;
        maybe_strncpy(0x378384,param_3,0x3ff);
        g_sceMcOpenShared4 = 0;
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
void maybe_Mc_RpcEndCallback(long param_1)

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long maybe_sceMcMkdir(undefined4 param_1,undefined4 param_2,long param_3)

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
        _g_sceMcSetFileInfoShared1 = 0x378880;
        _g_sceMcOpenShared1 = param_1;
        _g_sceMcOpenShared2 = param_2;
        maybe_strncpy(0x378384,param_3,0x3ff);
        g_sceMcOpenShared4 = 0;
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

