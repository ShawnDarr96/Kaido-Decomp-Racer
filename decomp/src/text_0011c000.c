// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0011c000 - 0x00120000
#include "ghidra_types.h"

// 0x0011c038  size 0x4c
undefined8 FUN_0011c038(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0011a7e0();
  uVar2 = FUN_0011bfc8(param_1);
  if (lVar1 != 0) {
    FUN_0011a838();
  }
  return uVar2;
}

// 0x0011c088  size 0xf4
undefined8 FUN_0011c088(uint param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 >> 10) * 0x40;
  if (((int)param_1 < 0) || ((param_1 & 0x3ff) != *(uint *)(iVar3 + 8))) {
    uVar1 = 0xffffffff80008002;
  }
  else if (DAT_003081a4 == param_1) {
    uVar1 = 0xffffffff80000010;
  }
  else {
    uVar2 = *(uint *)(iVar3 + 0xc);
    if ((uVar2 & 2) != 0) {
      FUN_0011b648(iVar3);
      uVar2 = *(uint *)(iVar3 + 0xc);
    }
    *(int *)(iVar3 + 0x28) = (int)param_3;
    if (param_3 == 0) {
      *(uint *)(iVar3 + 0xc) = uVar2 & 0xfffffffd;
    }
    else {
      *(undefined8 *)(iVar3 + 0x20) = param_2;
      *(uint *)(iVar3 + 0xc) = uVar2 | 2;
      *(undefined1 **)(iVar3 + 0x2c) = &_mips_gp0_value;
      *(undefined4 *)(iVar3 + 0x30) = param_4;
      if ((*(uint *)(iVar3 + 0xc) & 1) != 0) {
        FUN_0011b5c0(iVar3);
      }
    }
    uVar1 = FUN_0011b920();
    FUN_0011b430(uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

// 0x0011c180  size 0x7c
undefined8 FUN_0011c180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0011a7e0();
  uVar2 = FUN_0011c088(param_1,param_2,param_3,param_4);
  if (lVar1 != 0) {
    FUN_0011a838();
  }
  return uVar2;
}

// 0x0011c200  size 0xa8
void FUN_0011c200(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0012e600(param_1,0x8ca0000);
  if (param_2 != 0) {
    *(uint *)param_2 = uVar1;
  }
  if (param_3 != 0) {
    uVar2 = FUN_0012e600((param_1 -
                         ((long)(int)((ulong)uVar1 * 0x8ca0000 >> 0x20) << 0x20 |
                         (ulong)uVar1 * 0x8ca0000 & 0xffffffff)) * 1000000,0x8ca0000);
    *(undefined4 *)param_3 = uVar2;
  }
  return;
}

// 0x0011c2a8  size 0x70
long FUN_0011c2a8(int param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (param_2 & 0xffffffff) * 0x8ca0000;
  lVar2 = FUN_0012e600((long)(int)(uVar1 >> 0x20) << 0x20 | uVar1 & 0xffffffff,1000000);
  return (ulong)(uint)(param_1 * 0x8ca0000) + lVar2;
}

// 0x0011c318  size 0x54
float FUN_0011c318(ulong param_1)

{
  float fVar1;
  
  if ((long)param_1 < 0) {
    fVar1 = (float)FUN_0012f190(param_1 & 1 | param_1 >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)FUN_0012f190();
  }
  return 1.47456e+08 / fVar1;
}

// 0x0011c3a8  size 0x4c
undefined8 FUN_0011c3a8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  uRam00377dc0 = 0x3779c0;
  iVar2 = 0x377dc0;
  piVar1 = (int *)0x377db0;
  do {
    *piVar1 = iVar2;
    iVar3 = iVar3 + -1;
    piVar1 = piVar1 + -4;
    iVar2 = iVar2 + -0x10;
  } while (-1 < iVar3);
  uRam00377db0 = 0;
  return 0;
}

// 0x0011c3f8  size 0x5c
long FUN_0011c3f8(uint param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = (*(code *)param_4[2])((int)param_4 << 4 | param_1 & 0xfe | 1,param_2,param_3,param_4[3]);
  if (lVar2 == 0) {
    lVar2 = -1;
    puVar1 = param_4;
    *param_4 = puRam00377dc0;
    puRam00377dc0 = puVar1;
    param_4[1] = 0;
  }
  return lVar2;
}

// 0x0011c458  size 0x12c
uint FUN_0011c458(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar3 = 0x80000016;
  }
  else {
    lVar4 = FUN_0011a7e0();
    puVar1 = puRam00377dc0;
    if (puRam00377dc0 == (undefined4 *)0x0) {
      if (lVar4 != 0) {
        FUN_0011a838();
      }
      uVar3 = 0x80008005;
    }
    else {
      puRam00377dc0 = (undefined4 *)*puRam00377dc0;
      uVar3 = FUN_0011ba60();
      if ((int)uVar3 < 0) {
        puVar2 = puVar1;
        *puVar1 = puRam00377dc0;
        puRam00377dc0 = puVar2;
        puVar1[1] = 0;
        if (lVar4 != 0) {
          FUN_0011a838();
        }
      }
      else {
        puVar1[2] = (int)param_2;
        puVar1[3] = param_3;
        puVar1[1] = uVar3;
        FUN_0011c180(uVar3,param_1,0x11c3f8,puVar1);
        FUN_0011bcf8(uVar3);
        if (lVar4 != 0) {
          FUN_0011a838();
        }
        uVar3 = (int)puVar1 << 4 | uVar3 & 0xfe | 1;
      }
    }
  }
  return uVar3;
}

// 0x0011c588  size 0xf0
uint FUN_0011c588(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = puRam00377dc0;
  if (param_2 == 0) {
    uVar3 = 0x80000016;
  }
  else if (puRam00377dc0 == (undefined4 *)0x0) {
    uVar3 = 0x80008005;
  }
  else {
    puRam00377dc0 = (undefined4 *)*puRam00377dc0;
    uVar3 = FUN_0011b9f0();
    if ((int)uVar3 < 0) {
      puVar2 = puVar1;
      *puVar1 = puRam00377dc0;
      puRam00377dc0 = puVar2;
      puVar1[1] = 0;
    }
    else {
      puVar1[2] = (int)param_2;
      puVar1[3] = param_3;
      puVar1[1] = uVar3;
      FUN_0011c088(uVar3,param_1,0x11c3f8,puVar1);
      FUN_0011bc48(uVar3);
      uVar3 = (int)puVar1 << 4 | uVar3 & 0xfe | 1;
    }
  }
  return uVar3;
}

// 0x0011c678  size 0xa8
undefined8 FUN_0011c678(uint param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)((param_1 >> 8) * 0x10);
  lVar2 = FUN_0011a7e0();
  if (((int)param_1 < 0) || (((param_1 ^ puVar4[1]) & 0xff) != 0)) {
    if (lVar2 != 0) {
      FUN_0011a838();
    }
    uVar3 = 0xffffffff80008002;
  }
  else {
    FUN_0011bb48(puVar4[1]);
    puVar1 = puVar4;
    *puVar4 = puRam00377dc0;
    puRam00377dc0 = puVar1;
    puVar4[1] = 0;
    uVar3 = 0;
    if (lVar2 != 0) {
      FUN_0011a838();
      uVar3 = 0;
    }
  }
  return uVar3;
}

// 0x0011c720  size 0x78
long FUN_0011c720(uint param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((param_1 >> 8) * 0x10);
  if (((int)param_1 < 0) || (((param_1 ^ puVar3[1]) & 0xff) != 0)) {
    lVar2 = -0x7fff7ffe;
  }
  else {
    lVar2 = FUN_0011baa8(puVar3[1]);
    if (lVar2 == 0) {
      puVar1 = puVar3;
      *puVar3 = puRam00377dc0;
      puRam00377dc0 = puVar1;
      puVar3[1] = 0;
    }
  }
  return lVar2;
}

// 0x0011c798  size 0x24
void FUN_0011c798(void)

{
  DAT_003081a8 = 0;
  DAT_003081ac = 0;
  FUN_00128420(0x377dc8,0,0x200);
  return;
}

// 0x0011c840  size 0xb8
undefined8 FUN_0011c840(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((int)param_1 < 0) {
    param_1 = param_1 & 0x7fffffff;
    iVar5 = 0x377dc8;
    uVar1 = 0x20;
  }
  else {
    iVar5 = DAT_003081a8;
    uVar1 = DAT_003081ac;
  }
  if (param_1 < uVar1) {
    lVar3 = FUN_0011a7e0();
    puVar4 = (undefined4 *)(param_1 * 0x10 + iVar5);
    *puVar4 = param_2;
    puVar4[1] = param_3;
    puVar4[2] = register0x000001c0;
    if (lVar3 != 0) {
      FUN_0011a838();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff80000069;
  }
  return uVar2;
}

// 0x0011c950  size 0xa8
undefined1 * FUN_0011c950(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = DAT_003081ac;
    piVar1 = DAT_003081a8;
  }
  else {
    iVar2 = 0x20;
    piVar1 = (int *)0x377dc8;
  }
  if (0 < iVar2) {
    do {
      if (*piVar1 != 0) {
        register0x000001c0 = (BADSPACEBASE *)piVar1[2];
        (*(code *)*piVar1)(param_2,piVar1[1]);
      }
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + 4;
    } while (iVar2 != 0);
  }
  return (undefined1 *)register0x000001c0;
}

// 0x0011c9f8  size 0x5a8
int FUN_0011c9f8(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 auStack_70 [2];
  ulong auStack_60 [2];
  
  puVar10 = auStack_70;
  uVar14 = (long)param_1 >> 0x20;
  uVar9 = uVar14 & 0x7fffffff;
  puVar11 = (ulong *)param_2;
  if (uVar9 < 0x3fe921fc) {
    *puVar11 = param_1;
    puVar11[1] = 0;
    return 0;
  }
  if (uVar9 < 0x4002d97c) {
    if ((long)uVar14 < 1) {
      uVar1 = FUN_0012fa38(param_1,DAT_0035f640);
      uVar5 = DAT_0035f658;
      if (uVar9 == 0x3ff921fb) {
        uVar1 = FUN_0012fa38(uVar1,DAT_0035f650);
      }
      else {
        uVar5 = DAT_0035f648;
      }
      uVar9 = FUN_0012fa38(uVar1,uVar5);
      *puVar11 = uVar9;
      uVar1 = FUN_0012fa90(uVar1,uVar9);
      uVar9 = FUN_0012fa38(uVar1,uVar5);
      puVar11[1] = uVar9;
      return -1;
    }
    uVar1 = FUN_0012fa90(param_1,DAT_0035f620);
    uVar5 = DAT_0035f638;
    if (uVar9 == 0x3ff921fb) {
      uVar1 = FUN_0012fa90(uVar1,DAT_0035f630);
    }
    else {
      uVar5 = DAT_0035f628;
    }
    uVar9 = FUN_0012fa90(uVar1,uVar5);
    *puVar11 = uVar9;
    uVar1 = FUN_0012fa90(uVar1,uVar9);
    uVar9 = FUN_0012fa90(uVar1,uVar5);
    puVar11[1] = uVar9;
    return 1;
  }
  iVar13 = (int)uVar9 >> 0x14;
  if (0x413921fb < uVar9) {
    if (0x7fefffff < uVar9) {
      uVar9 = FUN_0012fa90();
      *puVar11 = uVar9;
      puVar11[1] = uVar9;
      return 0;
    }
    uVar9 = param_1 & 0xffffffff | (long)((int)uVar9 + (iVar13 + -0x416) * -0x100000) << 0x20;
    iVar7 = 1;
    do {
      iVar7 = iVar7 + -1;
      uVar5 = FUN_001300e8(uVar9);
      uVar5 = FUN_00130030(uVar5);
      *puVar10 = uVar5;
      puVar10 = puVar10 + 1;
      uVar5 = FUN_0012fa90(uVar9,uVar5);
      uVar9 = FUN_0012faf8(uVar5,0x4170000000000000);
    } while (-1 < iVar7);
    iVar7 = 3;
    auStack_60[0] = uVar9;
    puVar8 = auStack_60;
    while( true ) {
      uVar9 = *puVar8;
      puVar8 = puVar8 + -1;
      lVar6 = FUN_0012ffe0(uVar9,0);
      if (lVar6 != 0) break;
      iVar7 = iVar7 + -1;
    }
    iVar7 = FUN_0011e310(auStack_70,param_2,iVar13 + -0x416,iVar7,2,0x35f448);
    if (-1 < (long)uVar14) {
      return iVar7;
    }
    uVar14 = FUN_0012fa90(0,*puVar11);
    uVar9 = puVar11[1];
    *puVar11 = uVar14;
    goto LAB_0011cf70;
  }
  uVar5 = FUN_00120158();
  uVar1 = FUN_0012faf8(uVar5,DAT_0035f660);
  uVar1 = FUN_0012fa38(uVar1,0x3fe0000000000000);
  iVar7 = FUN_001300e8(uVar1);
  uVar1 = FUN_00130030(iVar7);
  uVar2 = FUN_0012faf8(uVar1,DAT_0035f668);
  uVar5 = FUN_0012fa90(uVar5,uVar2);
  uVar2 = FUN_0012faf8(uVar1,DAT_0035f670);
  if ((iVar7 < 0x20) && (uVar9 != (long)*(int *)(&DAT_0035f54c + iVar7 * 4))) {
LAB_0011cdec:
    uVar9 = FUN_0012fa90(uVar5,uVar2);
    *puVar11 = uVar9;
    uVar3 = uVar5;
  }
  else {
    uVar9 = FUN_0012fa90(uVar5,uVar2);
    *puVar11 = uVar9;
    uVar3 = uVar5;
    if (0x10 < (int)(iVar13 - ((uint)(uVar9 >> 0x34) & 0x7ff))) {
      uVar2 = FUN_0012faf8(uVar1,DAT_0035f678);
      uVar3 = FUN_0012fa90(uVar5,uVar2);
      uVar4 = FUN_0012faf8(uVar1,DAT_0035f680);
      uVar5 = FUN_0012fa90(uVar5,uVar3);
      uVar5 = FUN_0012fa90(uVar5,uVar2);
      uVar2 = FUN_0012fa90(uVar4,uVar5);
      uVar9 = FUN_0012fa90(uVar3,uVar2);
      *puVar11 = uVar9;
      if (0x31 < (int)(iVar13 - ((uint)(uVar9 >> 0x34) & 0x7ff))) {
        uVar2 = FUN_0012faf8(uVar1,DAT_0035f688);
        uVar5 = FUN_0012fa90(uVar3,uVar2);
        uVar1 = FUN_0012faf8(uVar1,DAT_0035f690);
        uVar3 = FUN_0012fa90(uVar3,uVar5);
        uVar2 = FUN_0012fa90(uVar3,uVar2);
        uVar2 = FUN_0012fa90(uVar1,uVar2);
        goto LAB_0011cdec;
      }
    }
  }
  uVar12 = *puVar11;
  uVar5 = FUN_0012fa90(uVar3,uVar12);
  uVar9 = FUN_0012fa90(uVar5,uVar2);
  puVar11[1] = uVar9;
  if (-1 < (long)uVar14) {
    return iVar7;
  }
  uVar14 = FUN_0012fa90(0,uVar12);
  *puVar11 = uVar14;
LAB_0011cf70:
  uVar9 = FUN_0012fa90(0,uVar9);
  puVar11[1] = uVar9;
  return -iVar7;
}

// 0x0011cfb0  size 0x41c
float FUN_0011cfb0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = ABS(param_1);
  if (fVar2 == 1.0) {
    fVar1 = 0.0;
    if ((int)param_1 < 1) {
      fVar1 = 3.1415925;
    }
  }
  else if ((uint)fVar2 < 0x3f800001) {
    if ((uint)fVar2 < 0x3f000000) {
      fVar1 = 1.5707963;
      if (0x23000000 < (uint)fVar2) {
        fVar2 = param_1 * param_1;
        fVar1 = 1.5707963 -
                (param_1 -
                (7.5497894e-08 -
                param_1 * ((fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * 3.479331e-05 +
                                                                        0.000791535) + -0.040055536)
                                                      + 0.20121253) + -0.3255658) + 0.16666666)) /
                          (fVar2 * (fVar2 * (fVar2 * (fVar2 * 0.07703815 + -0.6882839) + 2.0209455)
                                   + -2.4033947) + 1.0))));
      }
    }
    else if ((int)param_1 < 0) {
      fVar1 = (param_1 + 1.0) * 0.5;
      fVar2 = (float)FUN_0011e240(fVar1);
      fVar2 = fVar2 + (((fVar1 * (fVar1 * (fVar1 * (fVar1 * (fVar1 * (fVar1 * 3.479331e-05 +
                                                                     0.000791535) + -0.040055536) +
                                                   0.20121253) + -0.3255658) + 0.16666666)) /
                       (fVar1 * (fVar1 * (fVar1 * (fVar1 * 0.07703815 + -0.6882839) + 2.0209455) +
                                -2.4033947) + 1.0)) * fVar2 - 7.5497894e-08);
      fVar1 = 3.1415925 - (fVar2 + fVar2);
    }
    else {
      fVar3 = (1.0 - param_1) * 0.5;
      fVar2 = (float)FUN_0011e240(fVar3);
      fVar1 = (float)((uint)fVar2 & 0xfffff000);
      fVar1 = fVar1 + ((fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * 3.479331e-05 +
                                                                    0.000791535) + -0.040055536) +
                                                  0.20121253) + -0.3255658) + 0.16666666)) /
                      (fVar3 * (fVar3 * (fVar3 * (fVar3 * 0.07703815 + -0.6882839) + 2.0209455) +
                               -2.4033947) + 1.0)) * fVar2 +
                      (fVar3 - fVar1 * fVar1) / (fVar2 + fVar1);
      fVar1 = fVar1 + fVar1;
    }
  }
  else {
    fVar1 = (param_1 - param_1) / (param_1 - param_1);
  }
  return fVar1;
}

// 0x0011d3d8  size 0x38c
float FUN_0011d3d8(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = ABS(param_1);
  if (fVar1 == 1.0) {
    fVar1 = param_1 * 1.5707963 + param_1 * 7.5497894e-08;
  }
  else if ((uint)fVar1 < 0x3f800001) {
    if ((uint)fVar1 < 0x3f000000) {
      if (0x31ffffff < (uint)fVar1) {
        fVar1 = param_1 * param_1;
        return param_1 + param_1 * ((fVar1 * (fVar1 * (fVar1 * (fVar1 * (fVar1 * (fVar1 * 
                                                  3.479331e-05 + 0.000791535) + -0.040055536) +
                                                  0.20121253) + -0.3255658) + 0.16666666)) /
                                   (fVar1 * (fVar1 * (fVar1 * (fVar1 * 0.07703815 + -0.6882839) +
                                                     2.0209455) + -2.4033947) + 1.0));
      }
      if (1.0 < param_1 + 9.9999994e+29) {
        return param_1;
      }
    }
    fVar2 = (float)FUN_00120a68();
    fVar4 = (1.0 - fVar2) * 0.5;
    fVar5 = fVar4 * (fVar4 * (fVar4 * (fVar4 * 0.07703815 + -0.6882839) + 2.0209455) + -2.4033947) +
            1.0;
    fVar3 = fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * 3.479331e-05 + 0.000791535) +
                                               -0.040055536) + 0.20121253) + -0.3255658) +
                    0.16666666);
    fVar2 = (float)FUN_0011e240(fVar4);
    if ((uint)fVar1 < 0x3f79999a) {
      fVar1 = (float)((uint)fVar2 & 0xfffff000);
      fVar4 = (fVar4 - fVar1 * fVar1) / (fVar2 + fVar1);
      fVar1 = 0.7853981 -
              (((fVar2 + fVar2) * (fVar3 / fVar5) - (7.5497894e-08 - (fVar4 + fVar4))) -
              (0.7853981 - (fVar1 + fVar1)));
    }
    else {
      fVar2 = fVar2 + fVar2 * (fVar3 / fVar5);
      fVar1 = 1.5707963 - ((fVar2 + fVar2) - 7.5497894e-08);
    }
    if ((int)param_1 < 1) {
      fVar1 = -fVar1;
    }
  }
  else {
    fVar1 = (param_1 - param_1) / (param_1 - param_1);
  }
  return fVar1;
}

// 0x0011d778  size 0x1d4
undefined * FUN_0011d778(undefined *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  if (param_2 == 1.0) {
    puVar3 = (undefined *)FUN_001206c0();
    return puVar3;
  }
  uVar2 = (uint)param_1 >> 0x1f | (int)param_2 >> 0x1e & 2U;
  if ((uint)ABS((float)param_1) < 0x800000) {
    if (uVar2 == 2) {
      return (undefined *)0x40490fda;
    }
    if (uVar2 < 3) {
      return param_1;
    }
    if (uVar2 == 3) {
      return (undefined *)0xc0490fda;
    }
  }
  if ((uint)ABS(param_2) < 0x800000) {
    puVar3 = &UNK_bfc90fda;
    if (-1 < (int)param_1) {
      puVar3 = (undefined *)0x3fc90fda;
    }
  }
  else {
    puVar3 = (undefined *)0x3fc90fda;
    iVar1 = (int)ABS((float)param_1) - (int)ABS(param_2) >> 0x17;
    if ((iVar1 < 0x3d) && ((-1 < (int)param_2 || (puVar3 = (undefined *)0x0, -0x3d < iVar1)))) {
      uVar4 = FUN_00120a68((float)param_1 / param_2);
      puVar3 = (undefined *)FUN_001206c0(uVar4);
    }
    if (uVar2 == 1) {
      puVar3 = (undefined *)((uint)puVar3 ^ 0x80000000);
    }
    else {
      if (uVar2 < 2) {
        if (uVar2 == 0) {
          return puVar3;
        }
      }
      else if (uVar2 == 2) {
        return (undefined *)(3.1415925 - ((float)puVar3 - 1.5099579e-07));
      }
      puVar3 = (undefined *)(((float)puVar3 - 1.5099579e-07) - 3.1415925);
    }
  }
  return puVar3;
}

// 0x0011d958  size 0x248
float FUN_0011d958(float param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  float in_f7;
  float in_f6;
  
  iVar1 = (int)param_1 >> 0x1f;
  puVar2 = (undefined *)((uint)param_1 & 0x7fffffff);
  if (0x42b2d4fc < (int)param_1) {
    return DAT_0035f6d8;
  }
  if (((int)param_1 < 0) && ((undefined *)0x42aeac50 < puVar2)) {
    return 0.0;
  }
  if (puVar2 < (undefined *)0x3eb17219) {
    if (puVar2 <= &UNK_317fffff) {
      if (1.0 < param_1 + 9.9999994e+29) {
        return param_1 + 1.0;
      }
      fVar3 = param_1 * param_1;
      goto LAB_0011da94;
    }
    param_4 = 0;
  }
  else {
    if (puVar2 < (undefined *)0x3f851592) {
      fVar3 = (&DAT_0035f6b0)[-iVar1];
      in_f7 = (&DAT_0035f6b8)[-iVar1];
      param_4 = iVar1 * 2 + 1;
    }
    else {
      param_4 = (int)(param_1 * 1.4426949 + *(float *)(&DAT_0035f6a0 + iVar1 * -4));
      fVar3 = (float)param_4 * DAT_0035f6b0;
      in_f7 = (float)param_4 * DAT_0035f6b8;
    }
    in_f6 = param_1 - fVar3;
    param_1 = in_f6 - in_f7;
  }
  fVar3 = param_1 * param_1;
LAB_0011da94:
  fVar3 = param_1 - fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * 4.1381366e-08 + -1.6533902e-06) +
                                              6.613755e-05) + -0.0027777776) + 0.16666666);
  if (param_4 == 0) {
    return 1.0 - ((param_1 * fVar3) / (fVar3 - 2.0) - param_1);
  }
  fVar3 = 1.0 - ((in_f7 - (param_1 * fVar3) / (2.0 - fVar3)) - in_f6);
  if (param_4 < -0x7d) {
    return (float)((int)fVar3 + (param_4 + 100) * 0x800000) * 7.8886086e-31;
  }
  return (float)((int)fVar3 + param_4 * 0x800000);
}

// 0x0011dbb0  size 0x2d0
float FUN_0011dbb0(float param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((uint)ABS(param_1) < 0x800000) {
    return DAT_0035f70c;
  }
  if ((int)param_1 < 0) {
    return (param_1 - param_1) / 0.0;
  }
  uVar3 = (uint)param_1 & 0x7fffff;
  uVar1 = uVar3 + 0x4afb20 & 0x800000;
  iVar2 = ((int)param_1 >> 0x17) + -0x7f + ((int)uVar1 >> 0x17);
  fVar8 = (float)(uVar3 | uVar1 ^ 0x3f800000) - 1.0;
  if ((uVar3 + 0xf & 0x7fffff) < 0x10) {
    fVar4 = 0.0;
    if (fVar8 != 0.0) {
      fVar4 = fVar8 * fVar8 * (0.5 - fVar8 * 0.3333333);
      if (iVar2 == 0) {
        return fVar8 - fVar4;
      }
      return (float)iVar2 * 0.6931381 - ((fVar4 - (float)iVar2 * 9.058001e-06) - fVar8);
    }
    if (iVar2 != 0) {
      return (float)iVar2 * 0.6931381 + (float)iVar2 * 9.058001e-06;
    }
  }
  else {
    fVar7 = fVar8 / (fVar8 + 2.0);
    fVar6 = (float)iVar2;
    fVar5 = fVar7 * fVar7;
    fVar4 = fVar5 * fVar5;
    fVar4 = fVar5 * (fVar4 * (fVar4 * (fVar4 * 0.14798197 + 0.18183571) + 0.2857143) + 0.6666666) +
            fVar4 * (fVar4 * (fVar4 * 0.15313837 + 0.22222199) + 0.39999998);
    if (0 < (int)(uVar3 - 0x30a3d0 | 0x35c288 - uVar3)) {
      fVar5 = fVar8 * 0.5 * fVar8;
      if (iVar2 == 0) {
        return fVar8 - (fVar5 - fVar7 * (fVar5 + fVar4));
      }
      return fVar6 * 0.6931381 -
             ((fVar5 - (fVar7 * (fVar5 + fVar4) + fVar6 * 9.058001e-06)) - fVar8);
    }
    if (iVar2 == 0) {
      return fVar8 - fVar7 * (fVar8 - fVar4);
    }
    fVar4 = fVar6 * 0.6931381 - ((fVar7 * (fVar8 - fVar4) - fVar6 * 9.058001e-06) - fVar8);
  }
  return fVar4;
}

// 0x0011de90  size 0x3a0
int FUN_0011de90(float param_1,undefined8 param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_40;
  float afStack_3c [7];
  
  pfVar2 = &fStack_40;
  afStack_3c[1] = ABS(param_1);
  pfVar4 = (float *)param_2;
  if ((uint)afStack_3c[1] < 0x3f490fd9) {
    *pfVar4 = param_1;
    pfVar4[1] = 0.0;
    return 0;
  }
  if ((uint)afStack_3c[1] < 0x4016cbe4) {
    if ((int)param_1 < 1) {
      fVar8 = param_1 + 1.5707855;
      if (((uint)param_1 & 0x7ffffff0) == 0x3fc90fd0) {
        fVar6 = 6.0771e-11;
        fVar8 = fVar8 + 1.0804272e-05;
        fVar5 = fVar8 + 6.0771e-11;
      }
      else {
        fVar6 = 1.0804333e-05;
        fVar5 = fVar8 + 1.0804333e-05;
      }
      *pfVar4 = fVar5;
      pfVar4[1] = (fVar8 - fVar5) + fVar6;
      return -1;
    }
    fVar8 = param_1 - 1.5707855;
    if (((uint)param_1 & 0x7ffffff0) == 0x3fc90fd0) {
      fVar6 = 6.0771e-11;
      fVar8 = fVar8 - 1.0804272e-05;
      fVar5 = fVar8 - 6.0771e-11;
    }
    else {
      fVar6 = 1.0804333e-05;
      fVar5 = fVar8 - 1.0804333e-05;
    }
    *pfVar4 = fVar5;
    pfVar4[1] = (fVar8 - fVar5) - fVar6;
    return 1;
  }
  iVar1 = (int)afStack_3c[1] >> 0x17;
  if (0x43490f80 < (uint)afStack_3c[1]) {
    afStack_3c[1] = (float)((int)afStack_3c[1] + (iVar1 + -0x86) * -0x800000);
    iVar3 = 1;
    do {
      iVar3 = iVar3 + -1;
      *pfVar2 = (float)(int)afStack_3c[1];
      pfVar2 = pfVar2 + 1;
      afStack_3c[1] = (afStack_3c[1] - (float)(int)afStack_3c[1]) * 256.0;
    } while (-1 < iVar3);
    iVar3 = 3;
    if (afStack_3c[1] == 0.0) {
      pfVar2 = afStack_3c + 1;
      do {
        pfVar2 = pfVar2 + -1;
        iVar3 = iVar3 + -1;
      } while (*pfVar2 == 0.0);
    }
    iVar3 = FUN_0011f518(&fStack_40,param_2,iVar1 + -0x86,iVar3,2,0x35f710);
    if (-1 < (int)param_1) {
      return iVar3;
    }
    fVar5 = *pfVar4;
    fVar6 = pfVar4[1];
    goto LAB_0011e21c;
  }
  fVar8 = (float)FUN_00120a68();
  iVar3 = (int)(fVar8 * 0.6366198 + 0.5);
  fVar5 = (float)iVar3;
  fVar6 = fVar5 * 1.0804333e-05;
  fVar8 = fVar8 - fVar5 * 1.5707855;
  if ((iVar3 < 0x20) && (((uint)param_1 & 0x7fffff00) != *(uint *)(&DAT_0035fa24 + iVar3 * 4))) {
    *pfVar4 = fVar8 - fVar6;
LAB_0011e13c:
    fVar5 = *pfVar4;
    fVar7 = fVar8;
  }
  else {
    *pfVar4 = fVar8 - fVar6;
    if ((int)(iVar1 - ((uint)(fVar8 - fVar6) >> 0x17 & 0xff)) < 9) {
      fVar5 = *pfVar4;
      fVar7 = fVar8;
    }
    else {
      fVar7 = fVar8 - fVar5 * 1.0804272e-05;
      fVar6 = fVar5 * 6.0771e-11 - ((fVar8 - fVar7) - fVar5 * 1.0804272e-05);
      *pfVar4 = fVar7 - fVar6;
      if (0x19 < (int)(iVar1 - ((uint)(fVar7 - fVar6) >> 0x17 & 0xff))) {
        fVar8 = fVar7 - fVar5 * 6.0770944e-11;
        fVar6 = fVar5 * 6.1232336e-17 - ((fVar7 - fVar8) - fVar5 * 6.0770944e-11);
        *pfVar4 = fVar8 - fVar6;
        goto LAB_0011e13c;
      }
      fVar5 = *pfVar4;
    }
  }
  fVar6 = (fVar7 - fVar5) - fVar6;
  pfVar4[1] = fVar6;
  if (-1 < (int)param_1) {
    return iVar3;
  }
LAB_0011e21c:
  *pfVar4 = -fVar5;
  pfVar4[1] = -fVar6;
  return -iVar3;
}

// 0x0011e240  size 0xcc
float FUN_0011e240(float param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (0x7fffff < (uint)ABS(param_1)) {
    if (-1 < (int)param_1) {
      uVar5 = ((int)param_1 >> 0x17) - 0x7f;
      iVar6 = 0;
      uVar2 = 0x1000000;
      iVar3 = (((uint)param_1 & 0x7fffff | 0x800000) << (uVar5 & 1)) << 1;
      uVar4 = 0;
      do {
        iVar1 = iVar6 + uVar2;
        if (iVar1 <= iVar3) {
          iVar3 = iVar3 - iVar1;
          iVar6 = iVar1 + uVar2;
          uVar4 = uVar4 + uVar2;
        }
        uVar2 = uVar2 >> 1;
        iVar3 = iVar3 << 1;
      } while (uVar2 != 0);
      if (iVar3 != 0) {
        uVar4 = uVar4 + (uVar4 & 1);
      }
      return (float)(((int)uVar4 >> 1) + 0x3f000000 + ((int)uVar5 >> 1) * 0x800000);
    }
    param_1 = (param_1 - param_1) / (param_1 - param_1);
  }
  return param_1;
}

// 0x0011e310  size 0xb24
/* WARNING: Removing unreachable block (ram,0x0011e368) */

uint FUN_0011e310(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  uint auStack_2c4 [21];
  undefined8 auStack_270 [19];
  undefined8 auStack_1d8 [21];
  undefined8 auStack_130 [20];
  undefined8 *puStack_90;
  undefined8 *puStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iStack_7c = (param_3 + -3) / 0x18;
  iStack_80 = param_4 + -1;
  iStack_78 = *(int *)(&DAT_0035fad0 + param_5 * 4);
  iStack_88 = param_5;
  puStack_90 = param_1;
  iVar9 = iStack_80 + *(int *)(&DAT_0035fad0 + param_5 * 4);
  puStack_8c = param_2;
  iStack_84 = param_6;
  if (iStack_7c < 0) {
    iStack_7c = 0;
  }
  iVar12 = iStack_7c - iStack_80;
  iStack_70 = param_3 + iStack_7c * -0x18 + -0x18;
  if (-1 < iVar9) {
    iVar9 = iVar9 + 1;
    puVar19 = (undefined4 *)(iVar12 * 4 + param_6);
    puVar14 = auStack_270;
    do {
      if (iVar12 < 0) {
        *puVar14 = 0;
      }
      else {
        uVar20 = FUN_00130030(*puVar19);
        *puVar14 = uVar20;
      }
      iVar9 = iVar9 + -1;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
      iVar12 = iVar12 + 1;
    } while (iVar9 != 0);
  }
  iVar9 = 0;
  if (-1 < iStack_78) {
    puVar14 = auStack_130;
    do {
      uVar20 = 0;
      if (-1 < iStack_80) {
        puVar15 = auStack_270 + iStack_80 + iVar9;
        iVar12 = iStack_80 + 1;
        puVar17 = puStack_90;
        do {
          uVar10 = *puVar17;
          puVar17 = puVar17 + 1;
          uVar11 = *puVar15;
          puVar15 = puVar15 + -1;
          iVar12 = iVar12 + -1;
          uVar10 = FUN_0012faf8(uVar10,uVar11);
          uVar20 = FUN_0012fa38(uVar20,uVar10);
        } while (iVar12 != 0);
      }
      *puVar14 = uVar20;
      iVar9 = iVar9 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar9 <= iStack_78);
  }
  iVar9 = iStack_78;
LAB_0011e498:
  puVar14 = auStack_130 + iVar9;
  uVar20 = *puVar14;
  if (0 < iVar9) {
    puVar8 = auStack_2c4 + 1;
    iVar12 = iVar9;
    do {
      puVar14 = puVar14 + -1;
      iVar12 = iVar12 + -1;
      uVar10 = FUN_0012faf8(uVar20,0x3e70000000000000);
      uVar10 = FUN_001300e8(uVar10);
      uVar10 = FUN_00130030(uVar10);
      uVar11 = FUN_0012faf8(uVar10,0x4170000000000000);
      uVar20 = FUN_0012fa90(uVar20,uVar11);
      uVar3 = FUN_001300e8(uVar20);
      uVar20 = *puVar14;
      *puVar8 = uVar3;
      puVar8 = puVar8 + 1;
      uVar20 = FUN_0012fa38(uVar20,uVar10);
    } while (0 < iVar12);
  }
  uVar20 = FUN_00120430(uVar20,iStack_70);
  uVar10 = FUN_0012faf8(uVar20,0x3fc0000000000000);
  uVar10 = FUN_00120190(uVar10);
  uVar10 = FUN_0012faf8(uVar10,0x4020000000000000);
  uVar20 = FUN_0012fa90(uVar20,uVar10);
  uVar10 = FUN_001300e8(uVar20);
  uStack_74 = (uint)uVar10;
  uVar10 = FUN_00130030(uVar10);
  uVar20 = FUN_0012fa90(uVar20,uVar10);
  if (iStack_70 < 1) {
    if (iStack_70 == 0) {
      iVar12 = (int)auStack_2c4[iVar9] >> 0x17;
    }
    else {
      iVar12 = 2;
      lVar7 = FUN_0012ffe0(uVar20,0x3fe0000000000000);
      if (lVar7 < 0) {
        iVar12 = 0;
      }
    }
  }
  else {
    uVar4 = auStack_2c4[iVar9];
    iVar12 = (int)uVar4 >> (0x18U - iStack_70 & 0x1f);
    uStack_74 = uStack_74 + iVar12;
    uVar4 = uVar4 - (iVar12 << (0x18U - iStack_70 & 0x1f));
    iVar12 = (int)uVar4 >> (0x17U - iStack_70 & 0x1f);
    auStack_2c4[iVar9] = uVar4;
  }
  if (0 < iVar12) {
    bVar2 = false;
    uStack_74 = uStack_74 + 1;
    if (0 < iVar9) {
      puVar8 = auStack_2c4 + 1;
      iVar18 = iVar9;
      do {
        iVar13 = *puVar8;
        if (bVar2) {
          iVar5 = 0xffffff - iVar13;
LAB_0011e68c:
          *puVar8 = iVar5;
        }
        else {
          iVar5 = 0x1000000 - iVar13;
          if (iVar13 != 0) {
            bVar2 = true;
            goto LAB_0011e68c;
          }
        }
        iVar18 = iVar18 + -1;
        puVar8 = puVar8 + 1;
      } while (iVar18 != 0);
    }
    if (0 < iStack_70) {
      if (iStack_70 == 1) {
        uVar4 = 0x7f0000;
      }
      else {
        if (iStack_70 != 2) goto LAB_0011e700;
        uVar4 = 0x3f0000;
      }
      auStack_2c4[iVar9] = auStack_2c4[iVar9] & (uVar4 | 0xffff);
    }
LAB_0011e700:
    if ((iVar12 == 2) && (uVar20 = FUN_0012fa90(0x3ff0000000000000,uVar20), bVar2)) {
      uVar10 = FUN_00120430(0x3ff0000000000000,iStack_70);
      uVar20 = FUN_0012fa90(uVar20,uVar10);
    }
  }
  lVar7 = FUN_0012ffe0(uVar20,0);
  if (lVar7 == 0) {
    iVar18 = iVar9 + -1;
    uVar4 = 0;
    if (iStack_78 <= iVar18) {
      puVar8 = auStack_2c4 + iVar9;
      do {
        iVar18 = iVar18 + -1;
        uVar1 = *puVar8;
        puVar8 = puVar8 + -1;
        uVar4 = uVar4 | uVar1;
      } while (iStack_78 <= iVar18);
    }
    if (uVar4 != 0) goto LAB_0011e8c0;
    iVar12 = 1;
    if (auStack_2c4[iStack_78] == 0) {
      puVar8 = auStack_2c4 + iStack_78;
      do {
        puVar8 = puVar8 + -1;
        iVar12 = iVar12 + 1;
      } while (*puVar8 == 0);
    }
    iVar12 = iVar9 + iVar12;
    iVar18 = iVar9 + 1;
    iVar9 = iVar12;
    if (iVar18 <= iVar12) {
      puVar14 = auStack_270 + iStack_80 + iVar18;
      puVar17 = auStack_130 + iVar18;
      puVar19 = (undefined4 *)((iStack_7c + iVar18) * 4 + iStack_84);
      do {
        uVar10 = 0;
        iVar13 = iStack_80 + iVar18;
        uVar20 = FUN_00130030(*puVar19);
        *puVar14 = uVar20;
        if (-1 < iStack_80) {
          iVar5 = iStack_80 + 1;
          puVar16 = auStack_270 + iVar13;
          puVar15 = puStack_90;
          do {
            uVar20 = *puVar15;
            puVar15 = puVar15 + 1;
            uVar11 = *puVar16;
            puVar16 = puVar16 + -1;
            iVar5 = iVar5 + -1;
            uVar20 = FUN_0012faf8(uVar20,uVar11);
            uVar10 = FUN_0012fa38(uVar10,uVar20);
          } while (iVar5 != 0);
        }
        iVar18 = iVar18 + 1;
        *puVar17 = uVar10;
        puVar14 = puVar14 + 1;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar18 <= iVar12);
    }
    goto LAB_0011e498;
  }
LAB_0011e8c0:
  lVar7 = FUN_0012ffe0(uVar20,0);
  if (lVar7 == 0) {
    puVar8 = auStack_2c4 + iVar9;
    iStack_70 = iStack_70 + -0x18;
    uVar4 = *puVar8;
    while (iVar9 = iVar9 + -1, uVar4 == 0) {
      puVar8 = puVar8 + -1;
      uVar4 = *puVar8;
      iStack_70 = iStack_70 + -0x18;
    }
  }
  else {
    uVar20 = FUN_00120430(uVar20,-iStack_70);
    lVar7 = FUN_0012ffe0(uVar20,0x4170000000000000);
    if (-1 < lVar7) {
      iStack_70 = iStack_70 + 0x18;
      uVar10 = FUN_0012faf8(uVar20,0x3e70000000000000);
      uVar10 = FUN_001300e8(uVar10);
      uVar10 = FUN_00130030(uVar10);
      iVar18 = iVar9 + 1;
      uVar11 = FUN_0012faf8(uVar10,0x4170000000000000);
      iVar9 = iVar9 + 1;
      uVar20 = FUN_0012fa90(uVar20,uVar11);
      uVar4 = FUN_001300e8(uVar20);
      auStack_2c4[iVar18] = uVar4;
      uVar20 = uVar10;
    }
    uVar4 = FUN_001300e8(uVar20);
    auStack_2c4[iVar9 + 1] = uVar4;
  }
  uVar20 = FUN_00120430(0x3ff0000000000000,iStack_70);
  if (-1 < iVar9) {
    puVar8 = auStack_2c4 + iVar9 + 1;
    puVar14 = auStack_130 + iVar9;
    uVar4 = *puVar8;
    iVar18 = iVar9;
    while( true ) {
      puVar8 = puVar8 + -1;
      iVar18 = iVar18 + -1;
      uVar10 = FUN_00130030(uVar4);
      uVar10 = FUN_0012faf8(uVar20,uVar10);
      *puVar14 = uVar10;
      puVar14 = puVar14 + -1;
      uVar20 = FUN_0012faf8(uVar20,0x3e70000000000000);
      if (iVar18 < 0) break;
      uVar4 = *puVar8;
    }
  }
  if (-1 < iVar9) {
    lVar7 = (long)(int)(auStack_1d8 + 1);
    iVar18 = iVar9;
    do {
      uVar20 = 0;
      iVar13 = 0;
      if (iStack_78 < 0) {
        iVar5 = iVar9 - iVar18;
LAB_0011eb04:
        iVar6 = iVar5 << 3;
      }
      else {
        iVar5 = iVar9 - iVar18;
        if (iVar5 < 0) goto LAB_0011eb04;
        puVar17 = &DAT_0035fae0;
        puVar14 = auStack_130 + iVar18;
        do {
          uVar10 = *puVar17;
          puVar17 = puVar17 + 1;
          uVar11 = *puVar14;
          puVar14 = puVar14 + 1;
          uStack_60 = (undefined4)lVar7;
          uStack_5c = (undefined4)((ulong)lVar7 >> 0x20);
          iVar13 = iVar13 + 1;
          uVar10 = FUN_0012faf8(uVar10,uVar11);
          uVar20 = FUN_0012fa38(uVar20,uVar10);
          lVar7 = CONCAT44(uStack_5c,uStack_60);
          if (iStack_78 < iVar13) goto LAB_0011eb04;
          iVar6 = iVar5 * 8;
        } while (iVar13 <= iVar5);
      }
      iVar18 = iVar18 + -1;
      *(undefined8 *)((int)lVar7 + iVar6) = uVar20;
    } while (-1 < iVar18);
  }
  if (iStack_88 < 3) {
    if (iStack_88 < 1) {
      if (iStack_88 == 0) {
        uVar20 = 0;
        if (-1 < iVar9) {
          puVar14 = auStack_1d8 + iVar9 + 1;
          do {
            uVar10 = *puVar14;
            puVar14 = puVar14 + -1;
            iVar9 = iVar9 + -1;
            uVar20 = FUN_0012fa38(uVar20,uVar10);
          } while (-1 < iVar9);
        }
        *puStack_8c = uVar20;
        if (iVar12 != 0) {
          uVar20 = FUN_0012fa90(0,uVar20);
          *puStack_8c = uVar20;
        }
      }
    }
    else {
      uVar20 = 0;
      if (-1 < iVar9) {
        puVar14 = auStack_1d8 + iVar9 + 1;
        iVar18 = iVar9;
        do {
          uVar10 = *puVar14;
          puVar14 = puVar14 + -1;
          iVar18 = iVar18 + -1;
          uVar20 = FUN_0012fa38(uVar20,uVar10);
        } while (-1 < iVar18);
      }
      *puStack_8c = uVar20;
      if (iVar12 != 0) {
        uVar10 = FUN_0012fa90(0,uVar20);
        *puStack_8c = uVar10;
      }
      uVar20 = FUN_0012fa90(auStack_1d8[1],uVar20);
      if (0 < iVar9) {
        puVar14 = auStack_1d8 + 2;
        do {
          uVar10 = *puVar14;
          puVar14 = puVar14 + 1;
          iVar9 = iVar9 + -1;
          uVar20 = FUN_0012fa38(uVar20,uVar10);
        } while (iVar9 != 0);
      }
      puStack_8c[1] = uVar20;
      if (iVar12 != 0) {
        uVar20 = FUN_0012fa90(0,uVar20);
        puStack_8c[1] = uVar20;
      }
    }
  }
  else if (iStack_88 == 3) {
    if (0 < iVar9) {
      puVar14 = auStack_1d8 + iVar9;
      iVar18 = iVar9;
      do {
        uVar10 = *puVar14;
        uVar11 = puVar14[1];
        iVar18 = iVar18 + -1;
        uVar20 = FUN_0012fa38(uVar10,uVar11);
        uVar10 = FUN_0012fa90(uVar10,uVar20);
        uVar10 = FUN_0012fa38(uVar11,uVar10);
        *puVar14 = uVar20;
        puVar14[1] = uVar10;
        puVar14 = puVar14 + -1;
      } while (0 < iVar18);
    }
    if (1 < iVar9) {
      puVar14 = auStack_1d8 + iVar9;
      iVar18 = iVar9;
      do {
        uVar10 = *puVar14;
        uVar11 = puVar14[1];
        iVar18 = iVar18 + -1;
        uVar20 = FUN_0012fa38(uVar10,uVar11);
        uVar10 = FUN_0012fa90(uVar10,uVar20);
        uVar10 = FUN_0012fa38(uVar11,uVar10);
        *puVar14 = uVar20;
        puVar14[1] = uVar10;
        puVar14 = puVar14 + -1;
      } while (1 < iVar18);
    }
    uVar20 = 0;
    if (1 < iVar9) {
      puVar14 = auStack_1d8 + iVar9 + 1;
      do {
        uVar10 = *puVar14;
        puVar14 = puVar14 + -1;
        iVar9 = iVar9 + -1;
        uVar20 = FUN_0012fa38(uVar20,uVar10);
      } while (1 < iVar9);
    }
    if (iVar12 == 0) {
      puStack_8c[2] = uVar20;
      *puStack_8c = auStack_1d8[1];
      puStack_8c[1] = auStack_1d8[2];
    }
    else {
      uVar10 = FUN_0012fa90(0,auStack_1d8[1]);
      *puStack_8c = uVar10;
      uVar10 = FUN_0012fa90(0,auStack_1d8[2]);
      puStack_8c[1] = uVar10;
      uVar20 = FUN_0012fa90(0,uVar20);
      puStack_8c[2] = uVar20;
    }
  }
  return uStack_74 & 7;
}

// 0x0011ee60  size 0x560
ulong FUN_0011ee60(ulong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar10 = uVar1 & 0x7fffffff;
  if ((uVar10 < 0x3e300000) && (lVar2 = FUN_001300e8(), lVar2 == 0)) {
    if (((param_1 & 0x7fffffff00000000) == 0 && (int)param_1 == 0) && param_3 == -1) {
      uVar3 = FUN_00120158(param_1);
      param_1 = FUN_0012fd80(0x3ff0000000000000,uVar3);
    }
    else if (param_3 != 1) {
      param_1 = FUN_0012fd80(0xbff0000000000000,param_1);
    }
  }
  else {
    uVar5 = param_1;
    if (0x3fe59427 < uVar10) {
      uVar3 = param_2;
      if ((long)param_1 < 0) {
        param_1 = FUN_0012fa90(0,param_1);
        uVar3 = FUN_0012fa90(0,param_2);
      }
      uVar4 = FUN_0012fa90(DAT_0035fbc0,param_1);
      param_2 = 0;
      uVar3 = FUN_0012fa90(DAT_0035fbc8,uVar3);
      uVar5 = FUN_0012fa38(uVar4,uVar3);
    }
    uVar3 = FUN_0012faf8(uVar5,uVar5);
    uVar4 = FUN_0012faf8(uVar3,uVar3);
    uVar6 = FUN_0012faf8(uVar4,DAT_0035fbb0);
    uVar6 = FUN_0012fa38(DAT_0035fba0,uVar6);
    uVar6 = FUN_0012faf8(uVar4,uVar6);
    uVar6 = FUN_0012fa38(DAT_0035fb90,uVar6);
    uVar6 = FUN_0012faf8(uVar4,uVar6);
    uVar6 = FUN_0012fa38(DAT_0035fb80,uVar6);
    uVar6 = FUN_0012faf8(uVar4,uVar6);
    uVar6 = FUN_0012fa38(DAT_0035fb70,uVar6);
    uVar6 = FUN_0012faf8(uVar4,uVar6);
    uVar6 = FUN_0012fa38(DAT_0035fb60,uVar6);
    uVar7 = FUN_0012faf8(uVar4,DAT_0035fbb8);
    uVar7 = FUN_0012fa38(DAT_0035fba8,uVar7);
    uVar7 = FUN_0012faf8(uVar4,uVar7);
    uVar7 = FUN_0012fa38(DAT_0035fb98,uVar7);
    uVar7 = FUN_0012faf8(uVar4,uVar7);
    uVar7 = FUN_0012fa38(DAT_0035fb88,uVar7);
    uVar7 = FUN_0012faf8(uVar4,uVar7);
    uVar7 = FUN_0012fa38(DAT_0035fb78,uVar7);
    uVar4 = FUN_0012faf8(uVar4,uVar7);
    uVar4 = FUN_0012fa38(DAT_0035fb68,uVar4);
    uVar4 = FUN_0012faf8(uVar3,uVar4);
    uVar7 = FUN_0012faf8(uVar3,uVar5);
    uVar4 = FUN_0012fa38(uVar6,uVar4);
    uVar4 = FUN_0012faf8(uVar7,uVar4);
    uVar4 = FUN_0012fa38(uVar4,param_2);
    uVar3 = FUN_0012faf8(uVar3,uVar4);
    uVar3 = FUN_0012fa38(param_2,uVar3);
    uVar4 = FUN_0012faf8(DAT_0035fb58,uVar7);
    uVar3 = FUN_0012fa38(uVar3,uVar4);
    param_1 = FUN_0012fa38(uVar5,uVar3);
    if (uVar10 < 0x3fe59428) {
      if (param_3 != 1) {
        uVar4 = FUN_0012fa90(param_1 & 0xffffffff00000000,uVar5);
        uVar3 = FUN_0012fa90(uVar3,uVar4);
        uVar5 = FUN_0012fd80(0xbff0000000000000,param_1);
        uVar9 = uVar5 & 0xffffffff00000000;
        uVar4 = FUN_0012faf8(uVar9,param_1 & 0xffffffff00000000);
        uVar4 = FUN_0012fa38(uVar4,0x3ff0000000000000);
        uVar3 = FUN_0012faf8(uVar9,uVar3);
        uVar3 = FUN_0012fa38(uVar4,uVar3);
        uVar3 = FUN_0012faf8(uVar5,uVar3);
        param_1 = FUN_0012fa38(uVar9,uVar3);
      }
    }
    else {
      uVar4 = FUN_00130030(param_3);
      uVar6 = FUN_00130030(1 - ((int)uVar1 >> 0x1e & 2U));
      uVar7 = FUN_0012faf8(param_1,param_1);
      uVar8 = FUN_0012fa38(param_1,uVar4);
      uVar7 = FUN_0012fd80(uVar7,uVar8);
      uVar3 = FUN_0012fa90(uVar7,uVar3);
      uVar3 = FUN_0012fa90(uVar5,uVar3);
      uVar3 = FUN_0012fa38(uVar3,uVar3);
      uVar3 = FUN_0012fa90(uVar4,uVar3);
      param_1 = FUN_0012faf8(uVar6,uVar3);
    }
  }
  return param_1;
}

// 0x0011f3c8  size 0x150
float FUN_0011f3c8(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = ABS(param_1);
  if ((0x31ffffff < (uint)fVar1) || (fVar3 = 1.0, (int)param_1 != 0)) {
    fVar4 = param_1 * param_1;
    fVar3 = fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * -1.1359648e-11 + 2.0875721e-09) +
                                               -2.7557311e-07) + 2.4801586e-05) + -0.0013888888) +
                    0.041666664);
    if ((uint)fVar1 < 0x3e99999a) {
      fVar3 = 1.0 - (fVar4 * 0.5 - (fVar4 * fVar3 - param_1 * param_2));
    }
    else {
      fVar2 = 0.28125;
      if ((uint)fVar1 < 0x3f480001) {
        fVar2 = (float)((int)fVar1 - 0x1000000);
      }
      fVar3 = (1.0 - fVar2) - ((fVar4 * 0.5 - fVar2) - (fVar4 * fVar3 - param_1 * param_2));
    }
  }
  return fVar3;
}

// 0x0011f518  size 0x844
uint FUN_0011f518(float *param_1,float *param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint auStack_1b4 [21];
  float afStack_160 [19];
  float afStack_114 [21];
  float afStack_c0 [20];
  float *pfStack_70;
  int iStack_6c;
  int iStack_68;
  
  iVar18 = param_3 + -3;
  if (param_3 + -3 < 0) {
    iVar18 = param_3 + 4;
  }
  iVar18 = iVar18 >> 3;
  iStack_6c = param_5;
  if (iVar18 < 0) {
    iVar18 = 0;
  }
  iVar14 = *(int *)(&DAT_0035fbd0 + param_5 * 4);
  iVar17 = param_4 + -1;
  param_3 = param_3 + iVar18 * -8;
  iVar16 = param_3 + -8;
  iVar10 = iVar18 - iVar17;
  pfStack_70 = param_1;
  iStack_68 = param_6;
  if (-1 < iVar17 + iVar14) {
    iVar12 = iVar17 + iVar14 + 1;
    piVar2 = (int *)(iVar10 * 4 + param_6);
    pfVar6 = afStack_160;
    do {
      if (iVar10 < 0) {
        *pfVar6 = 0.0;
      }
      else {
        *pfVar6 = (float)*piVar2;
      }
      iVar12 = iVar12 + -1;
      pfVar6 = pfVar6 + 1;
      piVar2 = piVar2 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar12 != 0);
  }
  iVar10 = 0;
  if (-1 < iVar14) {
    pfVar6 = afStack_c0;
    iVar12 = iVar17;
    do {
      fVar22 = 0.0;
      if (-1 < iVar17) {
        pfVar3 = afStack_160 + iVar12;
        pfVar7 = pfStack_70;
        iVar13 = param_4;
        do {
          fVar19 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar20 = *pfVar3;
          pfVar3 = pfVar3 + -1;
          iVar13 = iVar13 + -1;
          fVar22 = fVar22 + fVar19 * fVar20;
        } while (iVar13 != 0);
      }
      iVar10 = iVar10 + 1;
      *pfVar6 = fVar22;
      iVar12 = iVar12 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar10 <= iVar14);
  }
  iVar10 = iVar14;
  do {
    pfVar6 = afStack_c0 + iVar10;
    fVar22 = *pfVar6;
    if (0 < iVar10) {
      puVar9 = auStack_1b4 + 1;
      iVar12 = iVar10;
      do {
        pfVar6 = pfVar6 + -1;
        iVar12 = iVar12 + -1;
        fVar20 = fVar22 - (float)(int)(fVar22 * 0.00390625) * 256.0;
        fVar22 = *pfVar6 + (float)(int)(fVar22 * 0.00390625);
        *puVar9 = (int)fVar20;
        puVar9 = puVar9 + 1;
      } while (0 < iVar12);
    }
    fVar22 = (float)FUN_00120b68(fVar22,iVar16);
    iVar12 = 0;
    fVar20 = (float)FUN_00120a90(fVar22 * 0.125);
    fVar22 = fVar22 - fVar20 * 8.0;
    uVar21 = (uint)fVar22;
    fVar22 = fVar22 - (float)(int)uVar21;
    if (iVar16 < 1) {
      if (iVar16 == 0) {
        iVar12 = (int)auStack_1b4[iVar10] >> 8;
      }
      else if (0.5 <= fVar22) {
        iVar12 = 2;
      }
    }
    else {
      uVar8 = auStack_1b4[iVar10];
      iVar12 = (int)uVar8 >> (8U - iVar16 & 0x1f);
      uVar21 = uVar21 + iVar12;
      uVar8 = uVar8 - (iVar12 << (8U - iVar16 & 0x1f));
      auStack_1b4[iVar10] = uVar8;
      iVar12 = (int)uVar8 >> (7U - iVar16 & 0x1f);
    }
    if (0 < iVar12) {
      uVar21 = uVar21 + 1;
      bVar15 = false;
      if (0 < iVar10) {
        puVar9 = auStack_1b4 + 1;
        iVar13 = iVar10;
        do {
          iVar11 = *puVar9;
          if (bVar15) {
            iVar4 = 0xff - iVar11;
LAB_0011f7ac:
            *puVar9 = iVar4;
          }
          else {
            iVar4 = 0x100 - iVar11;
            if (iVar11 != 0) {
              bVar15 = true;
              goto LAB_0011f7ac;
            }
          }
          iVar13 = iVar13 + -1;
          puVar9 = puVar9 + 1;
        } while (iVar13 != 0);
      }
      if (0 < iVar16) {
        if (iVar16 == 1) {
          puVar9 = auStack_1b4 + iVar10;
          uVar8 = *puVar9 & 0x7f;
        }
        else {
          if (iVar16 != 2) goto LAB_0011f814;
          puVar9 = auStack_1b4 + iVar10;
          uVar8 = *puVar9 & 0x3f;
        }
        *puVar9 = uVar8;
      }
LAB_0011f814:
      if ((iVar12 == 2) && (fVar22 = 1.0 - fVar22, bVar15)) {
        fVar20 = (float)FUN_00120b68(iVar16);
        fVar22 = fVar22 - fVar20;
      }
    }
    iVar13 = iVar10 + -1;
    if (fVar22 != 0.0) {
LAB_0011f988:
      if (fVar22 == 0.0) {
        iVar18 = iVar10 + -1;
        puVar9 = auStack_1b4 + iVar10;
        param_3 = param_3 + -0x10;
        if (*puVar9 == 0) {
          do {
            puVar9 = puVar9 + -1;
            iVar18 = iVar18 + -1;
            param_3 = param_3 + -8;
          } while (*puVar9 == 0);
        }
      }
      else {
        fVar22 = (float)FUN_00120b68(fVar22,-iVar16);
        if (256.0 <= fVar22) {
          iVar18 = iVar10 + 1;
          auStack_1b4[iVar10 + 1] = (int)(fVar22 - (float)(int)(fVar22 * 0.00390625) * 256.0);
          auStack_1b4[iVar10 + 2] = (int)(float)(int)(fVar22 * 0.00390625);
        }
        else {
          auStack_1b4[iVar10 + 1] = (int)fVar22;
          iVar18 = iVar10;
          param_3 = iVar16;
        }
      }
      fVar22 = (float)FUN_00120b68(0x3f800000,param_3);
      for (iVar10 = iVar18; -1 < iVar10; iVar10 = iVar10 + -1) {
        fVar20 = fVar22 * (float)(int)auStack_1b4[iVar10 + 1];
        fVar22 = fVar22 * 0.00390625;
        afStack_c0[iVar10] = fVar20;
      }
      if (-1 < iVar18) {
        iVar10 = iVar18;
        do {
          fVar22 = 0.0;
          iVar16 = 0;
          if (iVar14 < 0) {
            iVar17 = iVar18 - iVar10;
          }
          else {
            iVar17 = iVar18 - iVar10;
            if (-1 < iVar17) {
              pfVar7 = afStack_c0 + iVar10;
              fVar20 = DAT_0035fbe0;
              pfVar6 = &DAT_0035fbe0;
              while( true ) {
                pfVar6 = pfVar6 + 1;
                fVar19 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                iVar16 = iVar16 + 1;
                fVar22 = fVar22 + fVar20 * fVar19;
                if (iVar14 < iVar16) break;
                if (iVar17 < iVar16) {
                  iVar17 = iVar17 * 4;
                  goto LAB_0011fb30;
                }
                fVar20 = *pfVar6;
              }
            }
          }
          iVar17 = iVar17 << 2;
LAB_0011fb30:
          iVar10 = iVar10 + -1;
          *(float *)((int)afStack_114 + iVar17 + 4) = fVar22;
        } while (-1 < iVar10);
      }
      if (iStack_6c < 3) {
        if (iStack_6c < 1) {
          if (iStack_6c == 0) {
            fVar22 = 0.0;
            if (-1 < iVar18) {
              pfVar6 = afStack_114 + iVar18 + 1;
              do {
                fVar20 = *pfVar6;
                pfVar6 = pfVar6 + -1;
                iVar18 = iVar18 + -1;
                fVar22 = fVar22 + fVar20;
              } while (-1 < iVar18);
            }
            *param_2 = fVar22;
            if (iVar12 != 0) {
              *param_2 = -fVar22;
            }
          }
        }
        else {
          fVar22 = 0.0;
          if (-1 < iVar18) {
            pfVar6 = afStack_114 + iVar18 + 1;
            iVar14 = iVar18;
            do {
              fVar20 = *pfVar6;
              pfVar6 = pfVar6 + -1;
              iVar14 = iVar14 + -1;
              fVar22 = fVar22 + fVar20;
            } while (-1 < iVar14);
          }
          *param_2 = fVar22;
          if (iVar12 != 0) {
            *param_2 = -fVar22;
          }
          afStack_114[1] = afStack_114[1] - fVar22;
          if (0 < iVar18) {
            pfVar6 = afStack_114 + 2;
            do {
              fVar22 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              iVar18 = iVar18 + -1;
              afStack_114[1] = afStack_114[1] + fVar22;
            } while (iVar18 != 0);
          }
          param_2[1] = afStack_114[1];
          if (iVar12 != 0) {
            param_2[1] = -afStack_114[1];
          }
        }
      }
      else if (iStack_6c == 3) {
        if (0 < iVar18) {
          pfVar6 = afStack_114 + iVar18;
          iVar14 = iVar18;
          do {
            fVar22 = *pfVar6;
            iVar14 = iVar14 + -1;
            fVar20 = fVar22 + pfVar6[1];
            *pfVar6 = fVar20;
            pfVar6[1] = pfVar6[1] + (fVar22 - fVar20);
            pfVar6 = pfVar6 + -1;
          } while (0 < iVar14);
        }
        if (1 < iVar18) {
          pfVar6 = afStack_114 + iVar18;
          iVar14 = iVar18;
          do {
            fVar22 = *pfVar6;
            iVar14 = iVar14 + -1;
            fVar20 = fVar22 + pfVar6[1];
            *pfVar6 = fVar20;
            pfVar6[1] = pfVar6[1] + (fVar22 - fVar20);
            pfVar6 = pfVar6 + -1;
          } while (1 < iVar14);
        }
        fVar22 = 0.0;
        if (1 < iVar18) {
          pfVar6 = afStack_114 + iVar18 + 1;
          do {
            fVar20 = *pfVar6;
            pfVar6 = pfVar6 + -1;
            iVar18 = iVar18 + -1;
            fVar22 = fVar22 + fVar20;
          } while (1 < iVar18);
        }
        if (iVar12 != 0) {
          fVar22 = -fVar22;
          afStack_114[1] = -afStack_114[1];
          afStack_114[2] = -afStack_114[2];
        }
        param_2[2] = fVar22;
        *param_2 = afStack_114[1];
        param_2[1] = afStack_114[2];
      }
      return uVar21 & 7;
    }
    uVar8 = 0;
    if (iVar14 <= iVar13) {
      puVar9 = auStack_1b4 + iVar10;
      do {
        uVar1 = *puVar9;
        puVar9 = puVar9 + -1;
        iVar13 = iVar13 + -1;
        uVar8 = uVar8 | uVar1;
      } while (iVar14 <= iVar13);
    }
    if (uVar8 != 0) goto LAB_0011f988;
    iVar12 = 1;
    if (auStack_1b4[iVar14] == 0) {
      puVar9 = auStack_1b4 + iVar14;
      do {
        puVar9 = puVar9 + -1;
        iVar12 = iVar12 + 1;
      } while (*puVar9 == 0);
    }
    iVar12 = iVar10 + iVar12;
    iVar13 = iVar10 + 1;
    iVar10 = iVar12;
    if (iVar13 <= iVar12) {
      piVar2 = (int *)((iVar18 + iVar13) * 4 + iStack_68);
      pfVar6 = afStack_c0 + iVar13;
      pfVar7 = afStack_160 + iVar17 + iVar13;
      do {
        fVar22 = 0.0;
        *pfVar7 = (float)*piVar2;
        if (-1 < iVar17) {
          pfVar5 = afStack_160 + iVar17 + iVar13;
          pfVar3 = pfStack_70;
          iVar11 = param_4;
          do {
            fVar19 = *pfVar3;
            pfVar3 = pfVar3 + 1;
            fVar20 = *pfVar5;
            pfVar5 = pfVar5 + -1;
            iVar11 = iVar11 + -1;
            fVar22 = fVar22 + fVar19 * fVar20;
          } while (iVar11 != 0);
        }
        iVar13 = iVar13 + 1;
        *pfVar6 = fVar22;
        pfVar7 = pfVar7 + 1;
        pfVar6 = pfVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar13 <= iVar12);
    }
  } while( true );
}

// 0x0011fd80  size 0x104
float FUN_0011fd80(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((0x31ffffff < (uint)ABS(param_1)) || ((int)param_1 != 0)) {
    fVar2 = param_1 * param_1;
    fVar3 = fVar2 * param_1;
    fVar1 = fVar2 * (fVar2 * (fVar2 * (fVar2 * 1.5896909e-10 + -2.505076e-08) + 2.7557312e-06) +
                    -0.0001984127) + 0.008333334;
    if (param_3 == 0) {
      param_1 = param_1 + fVar3 * (fVar2 * fVar1 + -0.16666666);
    }
    else {
      param_1 = param_1 - ((fVar2 * (param_2 * 0.5 - fVar3 * fVar1) - param_2) - fVar3 * -0.16666666
                          );
    }
  }
  return param_1;
}

// 0x0011fe88  size 0x27c
float FUN_0011fe88(float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = (undefined *)((uint)param_1 & 0x7fffffff);
  if ((&UNK_317fffff < puVar1) || ((int)param_1 != 0)) {
    if (puVar1 < (undefined *)0x3f2ca140) {
      fVar2 = param_1 * param_1;
      fVar3 = param_1;
    }
    else {
      fVar2 = param_1;
      if ((int)param_1 < 0) {
        fVar2 = -param_1;
        param_2 = -param_2;
      }
      fVar3 = 3.7748944e-08 - param_2;
      param_2 = 0.0;
      fVar3 = (0.7853981 - fVar2) + fVar3;
      fVar2 = fVar3 * fVar3;
    }
    fVar5 = fVar2 * fVar2;
    fVar2 = param_2 + fVar2 * (fVar2 * fVar3 *
                               (DAT_0035fc34 +
                                fVar5 * (DAT_0035fc3c +
                                        fVar5 * (DAT_0035fc44 +
                                                fVar5 * (DAT_0035fc4c +
                                                        fVar5 * (DAT_0035fc54 + fVar5 * DAT_0035fc5c
                                                                )))) +
                               fVar2 * (DAT_0035fc38 +
                                       fVar5 * (DAT_0035fc40 +
                                               fVar5 * (DAT_0035fc48 +
                                                       fVar5 * (DAT_0035fc50 +
                                                               fVar5 * (DAT_0035fc58 +
                                                                       fVar5 * DAT_0035fc60)))))) +
                              param_2) + DAT_0035fc30 * fVar2 * fVar3;
    fVar5 = fVar3 + fVar2;
    if (puVar1 < (undefined *)0x3f2ca140) {
      param_1 = fVar5;
      if (param_3 != 1) {
        param_1 = (float)((uint)(-1.0 / fVar5) & 0xfffff000);
        param_1 = param_1 + (-1.0 / fVar5) *
                            (param_1 * (float)((uint)fVar5 & 0xfffff000) + 1.0 +
                            param_1 * (fVar2 - ((float)((uint)fVar5 & 0xfffff000) - fVar3)));
      }
    }
    else {
      fVar4 = (float)(int)param_3;
      fVar3 = fVar3 - ((fVar5 * fVar5) / (fVar5 + fVar4) - fVar2);
      param_1 = (float)(int)(1 - ((int)param_1 >> 0x1e & 2U)) * (fVar4 - (fVar3 + fVar3));
    }
  }
  else if (puVar1 == (undefined *)0x0 && (int)param_3 == -1) {
    fVar2 = (float)FUN_00120a68();
    param_1 = 1.0 / fVar2;
  }
  else if (param_3 != 1) {
    param_1 = -1.0 / param_1;
  }
  return param_1;
}

