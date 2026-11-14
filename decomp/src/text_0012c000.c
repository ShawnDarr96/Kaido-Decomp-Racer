// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x0012c000 - 0x00130000
#include "ghidra_types.h"

// 0x0012d340  size 0x1bc
undefined8
maybe_cvt(undefined8 param_1,long param_2,int param_3,ulong param_4,undefined1 *param_5,
         undefined8 param_6,long param_7,int *param_8)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 auStack_60 [4];
  char *apcStack_5c [3];
  
  uVar6 = 3;
  if ((param_7 != 0x66) && ((param_7 == 0x65 || (uVar6 = 2, param_7 == 0x45)))) {
    param_3 = param_3 + 1;
    uVar6 = 2;
  }
  if (param_2 >> 0x20 < 0) {
    param_2 = __subdf3(0,param_2);
    *param_5 = 0x2d;
  }
  else {
    *param_5 = 0;
  }
  uVar6 = _dtoa_r(param_1,param_2,uVar6,param_3,param_6,auStack_60,apcStack_5c);
  pcVar5 = (char *)uVar6;
  if (((param_7 != 0x67) && (param_7 != 0x47)) || ((param_4 & 1) != 0)) {
    pcVar4 = pcVar5 + param_3;
    if (param_7 == 0x66) {
      piVar7 = (int *)param_6;
      if (*pcVar5 == '0') {
        lVar1 = __cmpdf2(param_2,0);
        if (lVar1 != 0) {
          *piVar7 = 1 - param_3;
        }
        iVar3 = *piVar7;
      }
      else {
        iVar3 = *piVar7;
      }
      pcVar4 = pcVar4 + iVar3;
    }
    lVar1 = __cmpdf2(param_2,0);
    if (lVar1 == 0) {
      apcStack_5c[0] = pcVar4;
    }
    if (apcStack_5c[0] < pcVar4) {
      do {
        pcVar2 = apcStack_5c[0] + 1;
        *apcStack_5c[0] = '0';
        apcStack_5c[0] = pcVar2;
      } while (pcVar2 < pcVar4);
      iVar3 = (int)pcVar2 - (int)pcVar5;
      goto LAB_0012d4c8;
    }
  }
  iVar3 = (int)apcStack_5c[0] - (int)pcVar5;
LAB_0012d4c8:
  *param_8 = iVar3;
  return uVar6;
}

// 0x0012d500  size 0xd4
/* WARNING: Removing unreachable block (ram,0x0012d54c) */

int maybe__mbrtowc_r(undefined1 *param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char acStack_e [14];
  
  *param_1 = param_3;
  if (param_2 < 0) {
    uVar2 = 0x2d;
    param_2 = -param_2;
  }
  else {
    uVar2 = 0x2b;
  }
  param_1[1] = uVar2;
  pcVar3 = param_1 + 2;
  pcVar4 = acStack_e + 2;
  pcVar5 = pcVar4;
  if (param_2 < 10) {
    *pcVar3 = '0';
    param_1[3] = (char)param_2 + '0';
    pcVar3 = param_1 + 4;
  }
  else {
    do {
      pcVar6 = pcVar5;
      iVar7 = param_2 / 10;
      pcVar5 = pcVar6 + -1;
      *pcVar5 = (char)(param_2 % 10) + '0';
      param_2 = iVar7;
    } while (9 < iVar7);
    pcVar6 = pcVar6 + -2;
    *pcVar6 = (char)iVar7 + '0';
    if (pcVar6 < pcVar4) {
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (pcVar6 < pcVar4);
      return (int)pcVar3 - (int)param_1;
    }
  }
  return (int)pcVar3 - (int)param_1;
}

// 0x0012d5e0  size 0x110
uint maybe___swbuf_r(byte param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_0030a090;
  piVar7 = (int *)param_2;
  puVar4 = (undefined *)piVar7[0x15];
  if ((undefined *)piVar7[0x15] == (undefined *)0x0) {
    piVar7[0x15] = (int)PTR_DAT_0030a090;
    puVar4 = puVar2;
  }
  if (*(int *)(puVar4 + 0x38) == 0) {
    __sinit(puVar4);
    uVar1 = *(ushort *)(piVar7 + 3);
  }
  else {
    uVar1 = *(ushort *)(piVar7 + 3);
  }
  piVar7[2] = piVar7[6];
  if (((uVar1 & 8) == 0) || (iVar5 = piVar7[4], iVar5 == 0)) {
    lVar3 = maybe___swsetup(param_2);
    if (lVar3 != 0) {
      return 0xffffffff;
    }
    iVar5 = piVar7[4];
    pbVar6 = (byte *)*piVar7;
  }
  else {
    pbVar6 = (byte *)*piVar7;
  }
  iVar5 = (int)pbVar6 - iVar5;
  uVar8 = (uint)param_1;
  if (piVar7[5] <= iVar5) {
    lVar3 = maybe__fflush_r(param_2);
    if (lVar3 != 0) {
      return 0xffffffff;
    }
    pbVar6 = (byte *)*piVar7;
    iVar5 = 0;
  }
  piVar7[2] = piVar7[2] + -1;
  *pbVar6 = param_1;
  *piVar7 = (int)(pbVar6 + 1);
  if (iVar5 + 1 != piVar7[5]) {
    if ((*(ushort *)(piVar7 + 3) & 1) == 0) {
      return uVar8;
    }
    if (uVar8 != 10) {
      return uVar8;
    }
  }
  lVar3 = maybe__fflush_r(param_2);
  if (lVar3 == 0) {
    return uVar8;
  }
  return 0xffffffff;
}

// 0x0012d6f0  size 0x60
long maybe__write_r(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  iRam0046a5dc = 0;
  lVar1 = _write(param_2,param_3,param_4);
  if ((lVar1 == -1) && (iRam0046a5dc != 0)) {
    *param_1 = iRam0046a5dc;
  }
  return lVar1;
}

// 0x0012d750  size 0x108
undefined4 maybe___swsetup(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  ushort uVar4;
  int *piVar5;
  
  puVar3 = PTR_DAT_0030a090;
  piVar5 = (int *)param_1;
  puVar1 = (undefined *)piVar5[0x15];
  if (puVar1 == (undefined *)0x0) {
    piVar5[0x15] = (int)PTR_DAT_0030a090;
    iVar2 = *(int *)(puVar3 + 0x38);
  }
  else {
    iVar2 = *(int *)(puVar1 + 0x38);
    puVar3 = puVar1;
  }
  if (iVar2 == 0) {
    __sinit(puVar3);
    uVar4 = *(ushort *)(piVar5 + 3);
  }
  else {
    uVar4 = *(ushort *)(piVar5 + 3);
  }
  if ((uVar4 & 8) == 0) {
    if ((uVar4 & 0x10) == 0) {
      return 0xffffffff;
    }
    if ((uVar4 & 4) == 0) {
      iVar2 = piVar5[4];
    }
    else {
      if ((int *)piVar5[0xc] != (int *)0x0) {
        if ((int *)piVar5[0xc] == piVar5 + 0x10) {
          piVar5[0xc] = 0;
        }
        else {
          _free_r(piVar5[0x15]);
          uVar4 = *(ushort *)(piVar5 + 3);
          piVar5[0xc] = 0;
        }
      }
      iVar2 = piVar5[4];
      uVar4 = uVar4 & 0xffdb;
      piVar5[1] = 0;
      *(ushort *)(piVar5 + 3) = uVar4;
      *piVar5 = iVar2;
    }
    *(ushort *)(piVar5 + 3) = uVar4 | 8;
  }
  else {
    iVar2 = piVar5[4];
  }
  if (iVar2 == 0) {
    maybe___smakebuf(param_1);
    uVar4 = *(ushort *)(piVar5 + 3);
  }
  else {
    uVar4 = *(ushort *)(piVar5 + 3);
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = 0;
    if ((uVar4 & 2) == 0) {
      iVar2 = piVar5[5];
    }
    piVar5[2] = iVar2;
  }
  else {
    piVar5[2] = 0;
    piVar5[6] = -piVar5[5];
  }
  return 0;
}

// 0x0012d860  size 0x74
ulong maybe___muldi3(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (param_1 & 0xffffffff) * (param_2 & 0xffffffff);
  return uVar1 & 0xffffffff |
         (long)((int)(uVar1 >> 0x20) +
               (int)param_1 * (int)(param_2 >> 0x20) + (int)(param_1 >> 0x20) * (int)param_2) <<
         0x20;
}

// 0x0012d8d8  size 0x680
undefined8 maybe___divdi3(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  
  uVar20 = 0;
  if (param_1 < 0) {
    uVar20 = 0xffffffff;
    param_1 = CONCAT44(-(uint)(-(int)param_1 != 0) - (int)((ulong)param_1 >> 0x20),-(int)param_1);
  }
  if (param_2 >> 0x20 < 0) {
    uVar20 = ~uVar20;
    param_2 = CONCAT44(-(uint)(-(int)param_2 != 0) - (int)((ulong)param_2 >> 0x20),-(int)param_2);
  }
  uVar11 = param_2 >> 0x20;
  uVar17 = (uint)param_1;
  uVar18 = (ulong)(int)uVar17;
  uVar14 = (uint)((ulong)param_1 >> 0x20);
  uVar16 = (ulong)(int)uVar14;
  uVar12 = (uint)param_2;
  uVar13 = (ulong)(int)uVar12;
  uVar7 = (uint)((ulong)param_2 >> 0x20);
  if (uVar11 == 0) {
    if (uVar13 <= uVar16) {
      if (uVar13 == 0) {
        trap(7);
        uVar13 = (ulong)(1 / (int)uVar7);
      }
      if (uVar13 < 0x10000) {
        iVar15 = 8;
        if (uVar13 < 0x100) {
          iVar15 = 0;
        }
      }
      else {
        iVar15 = 0x10;
        if (0xffffff < uVar13) {
          iVar15 = 0x18;
        }
      }
      uVar19 = (uint)uVar13;
      uVar7 = 0x20 - ((uint)(byte)(&DAT_003605d8)[uVar19 >> iVar15] + iVar15);
      if (uVar7 == 0) {
        iVar15 = uVar14 - uVar19;
        uVar12 = 1;
        uVar7 = uVar19 >> 0x10;
        uVar19 = uVar19 & 0xffff;
      }
      else {
        uVar18 = (ulong)(int)(uVar17 << (uVar7 & 0x1f));
        uVar12 = uVar14 >> (0x20 - uVar7 & 0x1f);
        uVar14 = uVar14 << (uVar7 & 0x1f) | uVar17 >> (0x20 - uVar7 & 0x1f);
        uVar17 = uVar19 << (uVar7 & 0x1f);
        uVar13 = (ulong)(int)uVar17;
        uVar7 = uVar17 >> 0x10;
        iVar15 = (int)uVar12 / (int)uVar7;
        uVar19 = uVar17 & 0xffff;
        if (uVar7 == 0) {
          trap(7);
        }
        iVar3 = iVar15 * uVar19;
        uVar12 = (int)uVar12 % (int)uVar7 << 0x10 | uVar14 >> 0x10;
        iVar8 = iVar15;
        if ((ulong)(long)(int)uVar12 < (ulong)(long)iVar3) {
          uVar12 = uVar12 + uVar17;
          iVar8 = iVar15 + -1;
          if ((ulong)(long)(int)uVar12 < uVar13) goto LAB_0012dc18;
          if ((ulong)(long)(int)uVar12 < (ulong)(long)iVar3) {
            iVar8 = iVar15 + -2;
            uVar12 = uVar12 + uVar17;
            goto LAB_0012dc18;
          }
          iVar3 = uVar12 - iVar3;
        }
        else {
LAB_0012dc18:
          iVar3 = uVar12 - iVar3;
        }
        if (uVar7 == 0) {
          trap(7);
        }
        uVar9 = iVar3 / (int)uVar7;
        iVar15 = uVar9 * uVar19;
        uVar11 = (long)(iVar3 % (int)uVar7 << 0x10) | (long)(int)uVar14 & 0xffffU;
        uVar12 = uVar9;
        if (uVar11 < (ulong)(long)iVar15) {
          iVar3 = (int)uVar11 + uVar17;
          uVar11 = (ulong)iVar3;
          uVar12 = uVar9 - 1;
          if ((uVar13 <= uVar11) && (uVar11 < (ulong)(long)iVar15)) {
            uVar12 = uVar9 - 2;
            uVar11 = (ulong)(int)(iVar3 + uVar17);
          }
        }
        iVar15 = (int)uVar11 - iVar15;
        uVar12 = iVar8 << 0x10 | uVar12;
      }
      iVar3 = iVar15 / (int)uVar7;
      if (uVar7 == 0) {
        trap(7);
      }
      iVar8 = iVar3 * uVar19;
      uVar14 = iVar15 % (int)uVar7 << 0x10 | (uint)uVar18 >> 0x10;
      iVar15 = (int)uVar13;
      if ((ulong)(long)(int)uVar14 < (ulong)(long)iVar8) {
        iVar5 = uVar14 + iVar15;
        iVar4 = iVar3 + -1;
        if (uVar13 <= (ulong)(long)iVar5) {
          if ((ulong)(long)iVar8 <= (ulong)(long)iVar5) {
            iVar8 = iVar5 - iVar8;
            goto LAB_0012dce4;
          }
          iVar4 = iVar3 + -2;
          iVar5 = iVar5 + iVar15;
        }
        iVar8 = iVar5 - iVar8;
      }
      else {
        iVar8 = uVar14 - iVar8;
        iVar4 = iVar3;
      }
LAB_0012dce4:
      if (uVar7 == 0) {
        trap(7);
      }
      uVar17 = iVar8 / (int)uVar7;
      uVar11 = (long)(iVar8 % (int)uVar7 << 0x10) | uVar18 & 0xffff;
      uVar14 = uVar17;
      if (uVar11 < (ulong)(long)(int)(uVar17 * uVar19)) {
        uVar11 = (ulong)((int)uVar11 + iVar15);
        uVar14 = uVar17 - 1;
        if ((uVar13 <= uVar11) && (uVar11 < (ulong)(long)(int)(uVar17 * uVar19))) {
          uVar14 = uVar17 - 2;
        }
      }
      uVar14 = iVar4 << 0x10 | uVar14;
      goto LAB_0012def8;
    }
    if (uVar13 < 0x10000) {
      iVar15 = 8;
      if (uVar13 < 0x100) {
        iVar15 = 0;
      }
    }
    else {
      iVar15 = 0x10;
      if (0xffffff < uVar13) {
        iVar15 = 0x18;
      }
    }
    uVar7 = 0x20 - ((uint)(byte)(&DAT_003605d8)[uVar12 >> iVar15] + iVar15);
    if (uVar7 != 0) {
      uVar18 = (ulong)(int)(uVar17 << (uVar7 & 0x1f));
      uVar14 = uVar14 << (uVar7 & 0x1f) | uVar17 >> (0x20 - uVar7 & 0x1f);
      uVar13 = (ulong)(int)(uVar12 << (uVar7 & 0x1f));
    }
    uVar12 = (uint)uVar13;
    uVar7 = uVar12 >> 0x10;
    iVar15 = (int)uVar14 / (int)uVar7;
    if (uVar7 == 0) {
      trap(7);
    }
    iVar3 = iVar15 * (uVar12 & 0xffff);
    uVar14 = (int)uVar14 % (int)uVar7 << 0x10 | (uint)uVar18 >> 0x10;
    if ((ulong)(long)(int)uVar14 < (ulong)(long)iVar3) {
      iVar4 = uVar14 + uVar12;
      iVar8 = iVar15 + -1;
      if (uVar13 <= (ulong)(long)iVar4) {
        if ((ulong)(long)iVar3 <= (ulong)(long)iVar4) {
          iVar3 = iVar4 - iVar3;
          goto LAB_0012daa4;
        }
        iVar8 = iVar15 + -2;
        iVar4 = iVar4 + uVar12;
      }
      iVar3 = iVar4 - iVar3;
    }
    else {
      iVar3 = uVar14 - iVar3;
      iVar8 = iVar15;
    }
LAB_0012daa4:
    if (uVar7 == 0) {
      trap(7);
    }
    uVar17 = iVar3 / (int)uVar7;
    uVar11 = (ulong)(int)(uVar17 * (uVar12 & 0xffff));
    uVar16 = (long)(iVar3 % (int)uVar7 << 0x10) | uVar18 & 0xffff;
    uVar14 = uVar17;
    if (uVar16 < uVar11) {
      uVar16 = (ulong)(int)((int)uVar16 + uVar12);
      uVar14 = uVar17 - 1;
      if ((uVar13 <= uVar16) && (uVar16 < uVar11)) {
        uVar14 = uVar17 - 2;
      }
    }
    uVar14 = iVar8 << 0x10 | uVar14;
  }
  else if (uVar16 < uVar11) {
    uVar14 = 0;
  }
  else {
    if (uVar11 < 0x10000) {
      iVar15 = 8;
      if (uVar11 < 0x100) {
        iVar15 = 0;
      }
    }
    else {
      iVar15 = 0x10;
      if (0xffffff < uVar11) {
        iVar15 = 0x18;
      }
    }
    uVar19 = 0x20 - ((uint)(byte)(&DAT_003605d8)[uVar7 >> iVar15] + iVar15);
    uVar9 = 0x20 - uVar19;
    if (uVar19 == 0) {
      uVar14 = 1;
      if ((uVar16 <= uVar11) && (uVar14 = 0, uVar13 <= uVar18)) {
        uVar14 = 1;
      }
    }
    else {
      uVar10 = uVar7 << (uVar19 & 0x1f) | uVar12 >> (uVar9 & 0x1f);
      uVar7 = uVar14 >> (uVar9 & 0x1f);
      uVar9 = uVar14 << (uVar19 & 0x1f) | uVar17 >> (uVar9 & 0x1f);
      uVar14 = uVar10 >> 0x10;
      iVar15 = (int)uVar7 / (int)uVar14;
      if (uVar14 == 0) {
        trap(7);
      }
      uVar2 = iVar15 * (uVar10 & 0xffff);
      uVar7 = (int)uVar7 % (int)uVar14 << 0x10 | uVar9 >> 0x10;
      if (uVar7 < uVar2) {
        uVar7 = uVar7 + uVar10;
        iVar3 = iVar15 + -1;
        if (uVar10 <= uVar7) {
          if (uVar2 <= uVar7) {
            iVar8 = uVar7 - uVar2;
            goto LAB_0012de5c;
          }
          iVar3 = iVar15 + -2;
          uVar7 = uVar7 + uVar10;
        }
        iVar8 = uVar7 - uVar2;
      }
      else {
        iVar8 = uVar7 - uVar2;
        iVar3 = iVar15;
      }
LAB_0012de5c:
      if (uVar14 == 0) {
        trap(7);
      }
      uVar7 = iVar8 / (int)uVar14;
      uVar2 = uVar7 * (uVar10 & 0xffff);
      uVar9 = iVar8 % (int)uVar14 << 0x10 | uVar9 & 0xffff;
      uVar14 = uVar7;
      if (uVar9 < uVar2) {
        uVar9 = uVar9 + uVar10;
        uVar14 = uVar7 - 1;
        if ((uVar10 <= uVar9) && (uVar9 < uVar2)) {
          uVar9 = uVar9 + uVar10;
          uVar14 = uVar7 - 2;
        }
      }
      uVar14 = iVar3 << 0x10 | uVar14;
      lVar1 = (ulong)uVar14 * (ulong)(uVar12 << (uVar19 & 0x1f));
      uVar7 = (uint)((ulong)lVar1 >> 0x20);
      if (uVar9 - uVar2 < uVar7) {
        uVar14 = uVar14 - 1;
      }
      else {
        uVar12 = 0;
        if ((uVar7 != uVar9 - uVar2) || ((uint)lVar1 <= uVar17 << (uVar19 & 0x1f)))
        goto LAB_0012def8;
        uVar14 = uVar14 - 1;
      }
    }
  }
  uVar12 = 0;
LAB_0012def8:
  uVar6 = CONCAT44(uVar12,uVar14);
  if (uVar20 != 0) {
    uVar6 = CONCAT44(-(uint)(-uVar14 != 0) - uVar12,-uVar14);
  }
  return uVar6;
}

// 0x0012df70  size 0x680
ulong maybe___moddi3(ulong param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  undefined1 uStack00000000;
  ulong uStack_20;
  
  iVar18 = 0;
  if ((long)param_1 < 0) {
    iVar18 = -1;
    param_1 = CONCAT44(-(uint)(-(int)param_1 != 0) - (int)(param_1 >> 0x20),-(int)param_1);
  }
  if (param_2 >> 0x20 < 0) {
    param_2 = CONCAT44(-(uint)(-(int)param_2 != 0) - (int)((ulong)param_2 >> 0x20),-(int)param_2);
  }
  uVar10 = param_2 >> 0x20;
  uVar14 = (uint)param_1;
  uVar16 = (ulong)(int)uVar14;
  uVar11 = (uint)(param_1 >> 0x20);
  uVar12 = (ulong)(int)uVar11;
  uVar6 = (uint)param_2;
  uVar8 = (ulong)(int)uVar6;
  uVar13 = (uint)((ulong)param_2 >> 0x20);
  if (uVar10 != 0) {
    if (uVar12 < uVar10) {
      uStack_20 = param_1 & 0xffffffff | uVar12 << 0x20;
      goto LAB_0012e594;
    }
    if (uVar10 < 0x10000) {
      iVar4 = 8;
      if (uVar10 < 0x100) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x10;
      if (0xffffff < uVar10) {
        iVar4 = 0x18;
      }
    }
    uVar3 = 0x20 - ((uint)(byte)(&DAT_003606d8)[uVar13 >> iVar4] + iVar4);
    uVar7 = 0x20 - uVar3;
    if (uVar3 == 0) {
      if ((uVar10 < uVar12) || (uVar10 = uVar16, uVar8 <= uVar16)) {
        uVar10 = (ulong)(int)(uVar14 - uVar6);
        uVar12 = (ulong)(int)((uVar11 - uVar13) - (uint)(uVar16 < uVar10));
      }
      if (&uStack00000000 != (undefined1 *)0x20) {
        uStack_20 = uVar10 & 0xffffffff | uVar12 << 0x20;
      }
      goto LAB_0012e594;
    }
    uVar15 = uVar14 << (uVar3 & 0x1f);
    uVar9 = uVar13 << (uVar3 & 0x1f) | uVar6 >> (uVar7 & 0x1f);
    uVar13 = uVar11 >> (uVar7 & 0x1f);
    uVar6 = uVar6 << (uVar3 & 0x1f);
    uVar14 = uVar11 << (uVar3 & 0x1f) | uVar14 >> (uVar7 & 0x1f);
    uVar11 = uVar9 >> 0x10;
    iVar4 = (int)uVar13 / (int)uVar11;
    if (uVar11 == 0) {
      trap(7);
    }
    uVar2 = iVar4 * (uVar9 & 0xffff);
    uVar13 = (int)uVar13 % (int)uVar11 << 0x10 | uVar14 >> 0x10;
    if (uVar13 < uVar2) {
      uVar13 = uVar13 + uVar9;
      iVar17 = iVar4 + -1;
      if (uVar9 <= uVar13) {
        if (uVar2 <= uVar13) {
          iVar5 = uVar13 - uVar2;
          goto LAB_0012e49c;
        }
        iVar17 = iVar4 + -2;
        uVar13 = uVar13 + uVar9;
      }
      iVar5 = uVar13 - uVar2;
    }
    else {
      iVar5 = uVar13 - uVar2;
      iVar17 = iVar4;
    }
LAB_0012e49c:
    if (uVar11 == 0) {
      trap(7);
    }
    uVar13 = iVar5 / (int)uVar11;
    uVar2 = uVar13 * (uVar9 & 0xffff);
    uVar11 = iVar5 % (int)uVar11 << 0x10 | uVar14 & 0xffff;
    if (uVar11 < uVar2) {
      uVar11 = uVar11 + uVar9;
      uVar14 = uVar13 - 1;
      if (uVar9 <= uVar11) {
        if (uVar2 <= uVar11) {
          uVar11 = uVar11 - uVar2;
          goto LAB_0012e4f8;
        }
        uVar14 = uVar13 - 2;
        uVar11 = uVar11 + uVar9;
      }
      uVar11 = uVar11 - uVar2;
    }
    else {
      uVar11 = uVar11 - uVar2;
      uVar14 = uVar13;
    }
LAB_0012e4f8:
    lVar1 = (ulong)(iVar17 << 0x10 | uVar14) * (ulong)uVar6;
    uVar13 = (uint)lVar1;
    uVar14 = (uint)((ulong)lVar1 >> 0x20);
    if ((uVar11 < uVar14) || ((uVar14 == uVar11 && (uVar15 < uVar13)))) {
      uVar6 = uVar13 - uVar6;
      lVar1 = CONCAT44((uVar14 - uVar9) - (uint)(uVar13 < uVar6),uVar6);
    }
    uVar6 = uVar15 - (int)lVar1;
    if (&uStack00000000 != (undefined1 *)0x20) {
      uVar11 = (uVar11 - (int)((ulong)lVar1 >> 0x20)) - (uint)(uVar15 < uVar6);
      uStack_20 = CONCAT44(uVar11 >> (uVar3 & 0x1f),
                           uVar11 << (uVar7 & 0x1f) | uVar6 >> (uVar3 & 0x1f));
    }
    goto LAB_0012e594;
  }
  if (uVar12 < uVar8) {
    if (uVar8 < 0x10000) {
      iVar4 = 8;
      if (uVar8 < 0x100) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x10;
      if (0xffffff < uVar8) {
        iVar4 = 0x18;
      }
    }
    uVar13 = 0x20 - ((uint)(byte)(&DAT_003606d8)[uVar6 >> iVar4] + iVar4);
    if (uVar13 != 0) {
      uVar16 = (ulong)(int)(uVar14 << (uVar13 & 0x1f));
      uVar11 = uVar11 << (uVar13 & 0x1f) | uVar14 >> (0x20 - uVar13 & 0x1f);
      uVar8 = (ulong)(int)(uVar6 << (uVar13 & 0x1f));
    }
    uVar14 = (uint)uVar8 >> 0x10;
    uVar6 = (uint)uVar8 & 0xffff;
  }
  else {
    if (uVar8 == 0) {
      trap(7);
      uVar8 = (ulong)(1 / (int)uVar13);
    }
    if (uVar8 < 0x10000) {
      iVar4 = 8;
      if (uVar8 < 0x100) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x10;
      if (0xffffff < uVar8) {
        iVar4 = 0x18;
      }
    }
    uVar6 = (uint)uVar8;
    uVar13 = 0x20 - ((uint)(byte)(&DAT_003606d8)[uVar6 >> iVar4] + iVar4);
    if (uVar13 == 0) {
      uVar11 = uVar11 - uVar6;
      uVar14 = uVar6 >> 0x10;
      uVar6 = uVar6 & 0xffff;
    }
    else {
      uVar16 = (ulong)(int)(uVar14 << (uVar13 & 0x1f));
      uVar3 = uVar11 >> (0x20 - uVar13 & 0x1f);
      uVar11 = uVar11 << (uVar13 & 0x1f) | uVar14 >> (0x20 - uVar13 & 0x1f);
      uVar7 = uVar6 << (uVar13 & 0x1f);
      uVar8 = (ulong)(int)uVar7;
      uVar14 = uVar7 >> 0x10;
      uVar6 = uVar7 & 0xffff;
      if (uVar14 == 0) {
        trap(7);
      }
      iVar4 = ((int)uVar3 / (int)uVar14) * uVar6;
      uVar3 = (int)uVar3 % (int)uVar14 << 0x10 | uVar11 >> 0x10;
      if ((ulong)(long)(int)uVar3 < (ulong)(long)iVar4) {
        uVar3 = uVar3 + uVar7;
        if (uVar8 <= (ulong)(long)(int)uVar3) {
          if ((ulong)(long)(int)uVar3 < (ulong)(long)iVar4) {
            uVar3 = uVar3 + uVar7;
          }
          goto LAB_0012e1e0;
        }
        iVar4 = uVar3 - iVar4;
      }
      else {
LAB_0012e1e0:
        iVar4 = uVar3 - iVar4;
      }
      if (uVar14 == 0) {
        trap(7);
      }
      iVar17 = (iVar4 / (int)uVar14) * uVar6;
      uVar10 = (long)(iVar4 % (int)uVar14 << 0x10) | (long)(int)uVar11 & 0xffffU;
      iVar4 = (int)uVar10;
      uVar11 = iVar4 - iVar17;
      if (uVar10 < (ulong)(long)iVar17) {
        iVar4 = iVar4 + uVar7;
        uVar11 = iVar4 - iVar17;
        if (uVar8 <= (ulong)(long)iVar4) {
          if ((ulong)(long)iVar4 < (ulong)(long)iVar17) {
            iVar4 = iVar4 + uVar7;
          }
          uVar11 = iVar4 - iVar17;
        }
      }
    }
  }
  if (uVar14 == 0) {
    trap(7);
  }
  iVar4 = ((int)uVar11 / (int)uVar14) * uVar6;
  uVar11 = (int)uVar11 % (int)uVar14 << 0x10 | (uint)uVar16 >> 0x10;
  iVar17 = (int)uVar8;
  if ((ulong)(long)(int)uVar11 < (ulong)(long)iVar4) {
    iVar5 = uVar11 + iVar17;
    if ((ulong)(long)iVar5 < uVar8) {
      iVar4 = iVar5 - iVar4;
    }
    else {
      if ((ulong)(long)iVar5 < (ulong)(long)iVar4) {
        iVar5 = iVar5 + iVar17;
      }
      iVar4 = iVar5 - iVar4;
    }
  }
  else {
    iVar4 = uVar11 - iVar4;
  }
  if (uVar14 == 0) {
    trap(7);
  }
  iVar5 = (iVar4 / (int)uVar14) * uVar6;
  uVar10 = (long)(iVar4 % (int)uVar14 << 0x10) | uVar16 & 0xffff;
  if (uVar10 < (ulong)(long)iVar5) {
    iVar4 = (int)uVar10 + iVar17;
    uVar10 = (ulong)iVar4;
    if (uVar8 <= uVar10) {
      if (uVar10 < (ulong)(long)iVar5) {
        uVar10 = (long)(iVar4 + iVar17);
      }
    }
  }
  if (&uStack00000000 != (undefined1 *)0x20) {
    uStack_20 = (ulong)((uint)((int)uVar10 - iVar5) >> (uVar13 & 0x1f));
  }
LAB_0012e594:
  if (iVar18 != 0) {
    uStack_20 = CONCAT44(-(uint)(-(int)uStack_20 != 0) - (int)(uStack_20 >> 0x20),-(int)uStack_20);
  }
  return uStack_20;
}

// 0x0012e600  size 0x56c
ulong maybe___udivdi3(int param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint unaff_10000000;
  uint unaff_10000008;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar7 = param_2 >> 0x20;
  uVar5 = param_1 >> 0x20;
  if (uVar7 == 0) {
    if (unaff_10000008 <= uVar5) {
      if (unaff_10000008 == 0) {
        trap(7);
        unaff_10000008 = 1 / 0;
      }
      if (unaff_10000008 < 0x10000) {
        iVar10 = 8;
        if (unaff_10000008 < 0x100) {
          iVar10 = 0;
        }
      }
      else {
        iVar10 = 0x10;
        if (0xffffff < unaff_10000008) {
          iVar10 = 0x18;
        }
      }
      uVar7 = 0x20 - ((uint)(byte)(&DAT_003607d8)[unaff_10000008 >> iVar10] + iVar10);
      if (uVar7 == 0) {
        iVar10 = uVar5 - unaff_10000008;
        uVar11 = 1;
        uVar7 = unaff_10000008 >> 0x10;
        uVar5 = unaff_10000008 & 0xffff;
      }
      else {
        uVar3 = unaff_10000000 >> (0x20 - uVar7 & 0x1f);
        unaff_10000000 = unaff_10000000 << (uVar7 & 0x1f);
        uVar6 = uVar5 >> (0x20 - uVar7 & 0x1f);
        uVar3 = uVar5 << (uVar7 & 0x1f) | uVar3;
        unaff_10000008 = unaff_10000008 << (uVar7 & 0x1f);
        uVar7 = unaff_10000008 >> 0x10;
        iVar10 = (int)uVar6 / (int)uVar7;
        uVar5 = unaff_10000008 & 0xffff;
        if (uVar7 == 0) {
          trap(7);
        }
        uVar9 = iVar10 * uVar5;
        uVar6 = (int)uVar6 % (int)uVar7 << 0x10 | uVar3 >> 0x10;
        iVar8 = iVar10;
        if (uVar6 < uVar9) {
          uVar6 = uVar6 + unaff_10000008;
          iVar8 = iVar10 + -1;
          if (uVar6 < unaff_10000008) goto LAB_0012e870;
          if (uVar6 < uVar9) {
            iVar8 = iVar10 + -2;
            uVar6 = uVar6 + unaff_10000008;
            goto LAB_0012e870;
          }
          iVar10 = uVar6 - uVar9;
        }
        else {
LAB_0012e870:
          iVar10 = uVar6 - uVar9;
        }
        if (uVar7 == 0) {
          trap(7);
        }
        iVar4 = iVar10 / (int)uVar7;
        uVar12 = (ulong)iVar4;
        uVar6 = iVar4 * uVar5;
        uVar3 = iVar10 % (int)uVar7 << 0x10 | uVar3 & 0xffff;
        uVar11 = (ulong)(iVar8 << 0x10);
        if (uVar3 < uVar6) {
          uVar3 = uVar3 + unaff_10000008;
          uVar12 = (ulong)(iVar4 + -1);
          if (unaff_10000008 <= uVar3) {
            uVar11 = (ulong)(iVar8 << 0x10);
            if (uVar6 <= uVar3) goto LAB_0012e8d0;
            uVar12 = (ulong)(iVar4 + -2);
            uVar3 = uVar3 + unaff_10000008;
          }
          uVar11 = (ulong)(iVar8 << 0x10);
        }
LAB_0012e8d0:
        iVar10 = uVar3 - uVar6;
        uVar11 = uVar11 | uVar12;
      }
      iVar8 = iVar10 / (int)uVar7;
      if (uVar7 == 0) {
        trap(7);
      }
      uVar3 = iVar8 * uVar5;
      uVar6 = iVar10 % (int)uVar7 << 0x10 | unaff_10000000 >> 0x10;
      if (uVar6 < uVar3) {
        uVar6 = uVar6 + unaff_10000008;
        iVar10 = iVar8 + -1;
        if (unaff_10000008 <= uVar6) {
          if (uVar3 <= uVar6) {
            iVar4 = uVar6 - uVar3;
            goto LAB_0012e93c;
          }
          iVar10 = iVar8 + -2;
          uVar6 = uVar6 + unaff_10000008;
        }
        iVar4 = uVar6 - uVar3;
      }
      else {
        iVar4 = uVar6 - uVar3;
        iVar10 = iVar8;
      }
LAB_0012e93c:
      if (uVar7 == 0) {
        trap(7);
      }
      uVar6 = iVar4 / (int)uVar7;
      uVar7 = iVar4 % (int)uVar7 << 0x10 | unaff_10000000 & 0xffff;
      uVar3 = uVar6;
      if (uVar7 < uVar6 * uVar5) {
        uVar7 = uVar7 + unaff_10000008;
        uVar3 = uVar6 - 1;
        if ((unaff_10000008 <= uVar7) && (uVar7 < uVar6 * uVar5)) {
          uVar3 = uVar6 - 2;
        }
      }
      uVar3 = iVar10 << 0x10 | uVar3;
      goto LAB_0012eb4c;
    }
    if (unaff_10000008 < 0x10000) {
      iVar10 = 8;
      if (unaff_10000008 < 0x100) {
        iVar10 = 0;
      }
    }
    else {
      iVar10 = 0x10;
      if (0xffffff < unaff_10000008) {
        iVar10 = 0x18;
      }
    }
    uVar7 = 0x20 - ((uint)(byte)(&DAT_003607d8)[unaff_10000008 >> iVar10] + iVar10);
    if (uVar7 != 0) {
      uVar3 = unaff_10000000 >> (0x20 - uVar7 & 0x1f);
      unaff_10000000 = unaff_10000000 << (uVar7 & 0x1f);
      uVar5 = uVar5 << (uVar7 & 0x1f) | uVar3;
      unaff_10000008 = unaff_10000008 << (uVar7 & 0x1f);
    }
    uVar7 = unaff_10000008 >> 0x10;
    iVar10 = (int)uVar5 / (int)uVar7;
    if (uVar7 == 0) {
      trap(7);
    }
    uVar3 = iVar10 * (unaff_10000008 & 0xffff);
    uVar5 = (int)uVar5 % (int)uVar7 << 0x10 | unaff_10000000 >> 0x10;
    if (uVar5 < uVar3) {
      uVar5 = uVar5 + unaff_10000008;
      iVar8 = iVar10 + -1;
      if (unaff_10000008 <= uVar5) {
        if (uVar3 <= uVar5) {
          iVar4 = uVar5 - uVar3;
          goto LAB_0012e6fc;
        }
        iVar8 = iVar10 + -2;
        uVar5 = uVar5 + unaff_10000008;
      }
      iVar4 = uVar5 - uVar3;
    }
    else {
      iVar4 = uVar5 - uVar3;
      iVar8 = iVar10;
    }
LAB_0012e6fc:
    if (uVar7 == 0) {
      trap(7);
    }
    uVar5 = iVar4 / (int)uVar7;
    uVar6 = uVar5 * (unaff_10000008 & 0xffff);
    uVar7 = iVar4 % (int)uVar7 << 0x10 | unaff_10000000 & 0xffff;
    uVar3 = uVar5;
    if (uVar7 < uVar6) {
      uVar7 = uVar7 + unaff_10000008;
      uVar3 = uVar5 - 1;
      if ((unaff_10000008 <= uVar7) && (uVar7 < uVar6)) {
        uVar3 = uVar5 - 2;
      }
    }
    uVar3 = iVar8 << 0x10 | uVar3;
  }
  else if (uVar5 < uVar7) {
    uVar3 = 0;
  }
  else {
    if (uVar7 < 0x10000) {
      iVar10 = 8;
      if (uVar7 < 0x100) {
        iVar10 = 0;
      }
    }
    else {
      iVar10 = 0x10;
      if (0xffffff < uVar7) {
        iVar10 = 0x18;
      }
    }
    uVar6 = 0x20 - ((uint)(byte)(&DAT_003607d8)[uVar7 >> iVar10] + iVar10);
    uVar3 = 0x20 - uVar6;
    if (uVar6 == 0) {
      uVar3 = 1;
      if ((uVar5 <= uVar7) && (uVar3 = 0, unaff_10000008 <= unaff_10000000)) {
        uVar3 = 1;
      }
    }
    else {
      uVar9 = uVar7 << (uVar6 & 0x1f) | unaff_10000008 >> (uVar3 & 0x1f);
      uVar7 = uVar5 >> (uVar3 & 0x1f);
      uVar3 = uVar5 << (uVar6 & 0x1f) | unaff_10000000 >> (uVar3 & 0x1f);
      uVar5 = uVar9 >> 0x10;
      iVar10 = (int)uVar7 / (int)uVar5;
      if (uVar5 == 0) {
        trap(7);
      }
      uVar2 = iVar10 * (uVar9 & 0xffff);
      uVar7 = (int)uVar7 % (int)uVar5 << 0x10 | uVar3 >> 0x10;
      if (uVar7 < uVar2) {
        uVar7 = uVar7 + uVar9;
        iVar8 = iVar10 + -1;
        if (uVar9 <= uVar7) {
          if (uVar2 <= uVar7) {
            iVar4 = uVar7 - uVar2;
            goto LAB_0012eab4;
          }
          iVar8 = iVar10 + -2;
          uVar7 = uVar7 + uVar9;
        }
        iVar4 = uVar7 - uVar2;
      }
      else {
        iVar4 = uVar7 - uVar2;
        iVar8 = iVar10;
      }
LAB_0012eab4:
      if (uVar5 == 0) {
        trap(7);
      }
      uVar7 = iVar4 / (int)uVar5;
      uVar2 = uVar7 * (uVar9 & 0xffff);
      uVar5 = iVar4 % (int)uVar5 << 0x10 | uVar3 & 0xffff;
      uVar3 = uVar7;
      if (uVar5 < uVar2) {
        uVar5 = uVar5 + uVar9;
        uVar3 = uVar7 - 1;
        if ((uVar9 <= uVar5) && (uVar5 < uVar2)) {
          uVar5 = uVar5 + uVar9;
          uVar3 = uVar7 - 2;
        }
      }
      uVar3 = iVar8 << 0x10 | uVar3;
      lVar1 = (ulong)uVar3 * (ulong)(unaff_10000008 << (uVar6 & 0x1f));
      uVar7 = (uint)((ulong)lVar1 >> 0x20);
      if (uVar5 - uVar2 < uVar7) {
        uVar3 = uVar3 - 1;
      }
      else {
        uVar11 = 0;
        if ((uVar7 != uVar5 - uVar2) || ((uint)lVar1 <= unaff_10000000 << (uVar6 & 0x1f)))
        goto LAB_0012eb4c;
        uVar3 = uVar3 - 1;
      }
    }
  }
  uVar11 = 0;
LAB_0012eb4c:
  return (ulong)uVar3 | uVar11 << 0x20;
}

// 0x0012eb80  size 0x558
ulong maybe___umoddi3(ulong param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 uStack00000000;
  ulong uStack_10;
  
  uVar11 = param_2 >> 0x20;
  uVar12 = (long)param_1 >> 0x20;
  uVar7 = (uint)param_2;
  uVar9 = (ulong)(int)uVar7;
  uVar14 = (uint)param_1;
  uVar16 = (ulong)(int)uVar14;
  uVar6 = (uint)(param_1 >> 0x20);
  uVar13 = (uint)((ulong)param_2 >> 0x20);
  if (uVar11 != 0) {
    if (uVar12 < uVar11) {
      return param_1 & 0xffffffff | uVar12 << 0x20;
    }
    if (uVar11 < 0x10000) {
      iVar4 = 8;
      if (uVar11 < 0x100) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x10;
      if (0xffffff < uVar11) {
        iVar4 = 0x18;
      }
    }
    uVar3 = 0x20 - ((uint)(byte)(&DAT_003608d8)[uVar13 >> iVar4] + iVar4);
    uVar8 = 0x20 - uVar3;
    if (uVar3 == 0) {
      if ((uVar11 < uVar12) || (uVar11 = uVar16, uVar9 <= uVar16)) {
        uVar11 = (ulong)(int)(uVar14 - uVar7);
        uVar12 = (ulong)(int)((uVar6 - uVar13) - (uint)(uVar16 < uVar11));
      }
      if (&uStack00000000 == (undefined1 *)0x10) {
        return uStack_10;
      }
      return uVar11 & 0xffffffff | uVar12 << 0x20;
    }
    uVar15 = uVar14 << (uVar3 & 0x1f);
    uVar10 = uVar13 << (uVar3 & 0x1f) | uVar7 >> (uVar8 & 0x1f);
    uVar13 = uVar6 >> (uVar8 & 0x1f);
    uVar7 = uVar7 << (uVar3 & 0x1f);
    uVar14 = uVar6 << (uVar3 & 0x1f) | uVar14 >> (uVar8 & 0x1f);
    uVar6 = uVar10 >> 0x10;
    iVar4 = (int)uVar13 / (int)uVar6;
    if (uVar6 == 0) {
      trap(7);
    }
    uVar2 = iVar4 * (uVar10 & 0xffff);
    uVar13 = (int)uVar13 % (int)uVar6 << 0x10 | uVar14 >> 0x10;
    if (uVar13 < uVar2) {
      uVar13 = uVar13 + uVar10;
      iVar17 = iVar4 + -1;
      if (uVar10 <= uVar13) {
        if (uVar2 <= uVar13) {
          iVar5 = uVar13 - uVar2;
          goto LAB_0012efe4;
        }
        iVar17 = iVar4 + -2;
        uVar13 = uVar13 + uVar10;
      }
      iVar5 = uVar13 - uVar2;
    }
    else {
      iVar5 = uVar13 - uVar2;
      iVar17 = iVar4;
    }
LAB_0012efe4:
    if (uVar6 == 0) {
      trap(7);
    }
    uVar13 = iVar5 / (int)uVar6;
    uVar2 = uVar13 * (uVar10 & 0xffff);
    uVar6 = iVar5 % (int)uVar6 << 0x10 | uVar14 & 0xffff;
    if (uVar6 < uVar2) {
      uVar6 = uVar6 + uVar10;
      uVar14 = uVar13 - 1;
      if (uVar10 <= uVar6) {
        if (uVar2 <= uVar6) {
          uVar6 = uVar6 - uVar2;
          goto LAB_0012f040;
        }
        uVar14 = uVar13 - 2;
        uVar6 = uVar6 + uVar10;
      }
      uVar6 = uVar6 - uVar2;
    }
    else {
      uVar6 = uVar6 - uVar2;
      uVar14 = uVar13;
    }
LAB_0012f040:
    lVar1 = (ulong)(iVar17 << 0x10 | uVar14) * (ulong)uVar7;
    uVar13 = (uint)lVar1;
    uVar14 = (uint)((ulong)lVar1 >> 0x20);
    if ((uVar6 < uVar14) || ((uVar14 == uVar6 && (uVar15 < uVar13)))) {
      uVar7 = uVar13 - uVar7;
      lVar1 = CONCAT44((uVar14 - uVar10) - (uint)(uVar13 < uVar7),uVar7);
    }
    uVar7 = uVar15 - (int)lVar1;
    if (&uStack00000000 == (undefined1 *)0x10) {
      return uStack_10;
    }
    uVar13 = (uVar6 - (int)((ulong)lVar1 >> 0x20)) - (uint)(uVar15 < uVar7);
    return CONCAT44(uVar13 >> (uVar3 & 0x1f),uVar13 << (uVar8 & 0x1f) | uVar7 >> (uVar3 & 0x1f));
  }
  if (uVar12 < uVar9) {
    if (uVar9 < 0x10000) {
      iVar4 = 8;
      if (uVar9 < 0x100) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x10;
      if (0xffffff < uVar9) {
        iVar4 = 0x18;
      }
    }
    uVar13 = 0x20 - ((uint)(byte)(&DAT_003608d8)[uVar7 >> iVar4] + iVar4);
    if (uVar13 != 0) {
      uVar16 = (ulong)(int)(uVar14 << (uVar13 & 0x1f));
      uVar12 = (ulong)(int)(uVar6 << (uVar13 & 0x1f) | uVar14 >> (0x20 - uVar13 & 0x1f));
      uVar9 = (ulong)(int)(uVar7 << (uVar13 & 0x1f));
    }
    iVar5 = (int)uVar12;
    uVar14 = (uint)uVar9 >> 0x10;
    uVar7 = (uint)uVar9 & 0xffff;
    goto LAB_0012ed88;
  }
  if (uVar9 == 0) {
    trap(7);
    uVar9 = (ulong)(1 / (int)uVar13);
  }
  if (uVar9 < 0x10000) {
    iVar4 = 8;
    if (uVar9 < 0x100) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0x10;
    if (0xffffff < uVar9) {
      iVar4 = 0x18;
    }
  }
  uVar7 = (uint)uVar9;
  uVar13 = 0x20 - ((uint)(byte)(&DAT_003608d8)[uVar7 >> iVar4] + iVar4);
  if (uVar13 == 0) {
    iVar5 = uVar6 - uVar7;
    uVar14 = uVar7 >> 0x10;
    uVar7 = uVar7 & 0xffff;
    goto LAB_0012ed88;
  }
  uVar16 = (ulong)(int)(uVar14 << (uVar13 & 0x1f));
  uVar3 = uVar6 >> (0x20 - uVar13 & 0x1f);
  uVar6 = uVar6 << (uVar13 & 0x1f) | uVar14 >> (0x20 - uVar13 & 0x1f);
  uVar8 = uVar7 << (uVar13 & 0x1f);
  uVar9 = (ulong)(int)uVar8;
  uVar14 = uVar8 >> 0x10;
  uVar7 = uVar8 & 0xffff;
  if (uVar14 == 0) {
    trap(7);
  }
  iVar4 = ((int)uVar3 / (int)uVar14) * uVar7;
  uVar3 = (int)uVar3 % (int)uVar14 << 0x10 | uVar6 >> 0x10;
  if ((ulong)(long)(int)uVar3 < (ulong)(long)iVar4) {
    uVar3 = uVar3 + uVar8;
    if (uVar9 <= (ulong)(long)(int)uVar3) {
      if ((ulong)(long)(int)uVar3 < (ulong)(long)iVar4) {
        uVar3 = uVar3 + uVar8;
      }
      goto LAB_0012ed28;
    }
    iVar4 = uVar3 - iVar4;
  }
  else {
LAB_0012ed28:
    iVar4 = uVar3 - iVar4;
  }
  if (uVar14 == 0) {
    trap(7);
  }
  iVar17 = (iVar4 / (int)uVar14) * uVar7;
  uVar11 = (long)(iVar4 % (int)uVar14 << 0x10) | (long)(int)uVar6 & 0xffffU;
  iVar4 = (int)uVar11;
  iVar5 = iVar4 - iVar17;
  if (uVar11 < (ulong)(long)iVar17) {
    iVar4 = iVar4 + uVar8;
    iVar5 = iVar4 - iVar17;
    if (uVar9 <= (ulong)(long)iVar4) {
      if ((ulong)(long)iVar4 < (ulong)(long)iVar17) {
        iVar4 = iVar4 + uVar8;
      }
      iVar5 = iVar4 - iVar17;
    }
  }
LAB_0012ed88:
  if (uVar14 == 0) {
    trap(7);
  }
  iVar4 = (iVar5 / (int)uVar14) * uVar7;
  uVar6 = iVar5 % (int)uVar14 << 0x10 | (uint)uVar16 >> 0x10;
  iVar17 = (int)uVar9;
  if ((ulong)(long)(int)uVar6 < (ulong)(long)iVar4) {
    iVar5 = uVar6 + iVar17;
    if ((ulong)(long)iVar5 < uVar9) {
      iVar4 = iVar5 - iVar4;
    }
    else {
      if ((ulong)(long)iVar5 < (ulong)(long)iVar4) {
        iVar5 = iVar5 + iVar17;
      }
      iVar4 = iVar5 - iVar4;
    }
  }
  else {
    iVar4 = uVar6 - iVar4;
  }
  if (uVar14 == 0) {
    trap(7);
  }
  iVar5 = (iVar4 / (int)uVar14) * uVar7;
  uVar11 = (long)(iVar4 % (int)uVar14 << 0x10) | uVar16 & 0xffff;
  if (uVar11 < (ulong)(long)iVar5) {
    iVar4 = (int)uVar11 + iVar17;
    uVar11 = (ulong)iVar4;
    if (uVar9 <= uVar11) {
      if (uVar11 < (ulong)(long)iVar5) {
        uVar11 = (long)(iVar4 + iVar17);
      }
    }
  }
  if (&uStack00000000 == (undefined1 *)0x10) {
    return uStack_10;
  }
  return (ulong)((uint)((int)uVar11 - iVar5) >> (uVar13 & 0x1f));
}

// 0x0012f0e8  size 0xa8
void __floatdidf(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __floatsidf(param_1 >> 0x20);
  uVar1 = __muldf3(uVar1,0x40f0000000000000);
  uVar1 = __muldf3(uVar1,0x40f0000000000000);
  uVar2 = __floatsidf((int)param_1);
  if ((int)param_1 < 0) {
    uVar2 = __adddf3(uVar2,0x41f0000000000000);
  }
  __adddf3(uVar1,uVar2);
  return;
}

// 0x0012f190  size 0xe8
void maybe___floatdisf(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((0x3ffffffffffffe < param_1 + 0x1fffffffffffff) && ((param_1 & 0x7ff) != 0)) {
    param_1 = param_1 | 0x800;
  }
  uVar1 = __floatsidf((long)param_1 >> 0x20);
  uVar1 = __muldf3(uVar1,0x40f0000000000000);
  uVar1 = __muldf3(uVar1,0x40f0000000000000);
  uVar2 = __floatsidf((int)param_1);
  if ((int)param_1 < 0) {
    uVar2 = __adddf3(uVar2,0x41f0000000000000);
  }
  uVar1 = __adddf3(uVar1,uVar2);
  maybe___extendsfdf2(uVar1);
  return;
}

// 0x0012f278  size 0x118
long maybe___fixdfdi(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = __cmpdf2(param_1,0);
  lVar2 = 0;
  if (-1 < lVar1) {
    uVar3 = __muldf3(param_1,0x3df0000000000000);
    uVar4 = maybe___truncdfsf2(uVar3);
    lVar2 = uVar4 << 0x20;
    if (lVar2 < 0) {
      uVar3 = __floatdidf((uVar4 & 0xffffffff) << 0x1f);
      uVar3 = __adddf3(uVar3,uVar3);
    }
    else {
      uVar3 = __floatdidf(lVar2);
    }
    uVar3 = __subdf3(param_1,uVar3);
    lVar1 = __cmpdf2(uVar3,0);
    if (lVar1 < 0) {
      uVar3 = __subdf3(0);
      uVar4 = maybe___truncdfsf2(uVar3);
      uVar4 = -(uVar4 & 0xffffffff);
    }
    else {
      uVar4 = maybe___truncdfsf2(uVar3,uVar3);
      uVar4 = uVar4 & 0xffffffff;
    }
    lVar2 = lVar2 + uVar4;
  }
  return lVar2;
}

// 0x0012f390  size 0x124
long maybe___fixsfdi(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = maybe___sf_to_df();
  lVar2 = __cmpdf2(uVar1,0);
  lVar3 = 0;
  if (-1 < lVar2) {
    uVar4 = __muldf3(uVar1,0x3df0000000000000);
    uVar5 = maybe___truncdfsf2(uVar4);
    lVar3 = uVar5 << 0x20;
    if (lVar3 < 0) {
      uVar4 = __floatdidf((uVar5 & 0xffffffff) << 0x1f);
      uVar4 = __adddf3(uVar4,uVar4);
    }
    else {
      uVar4 = __floatdidf(lVar3);
    }
    uVar1 = __subdf3(uVar1,uVar4);
    lVar2 = __cmpdf2(uVar1,0);
    if (lVar2 < 0) {
      uVar1 = __subdf3(0);
      uVar5 = maybe___truncdfsf2(uVar1);
      uVar5 = -(uVar5 & 0xffffffff);
    }
    else {
      uVar5 = maybe___truncdfsf2(uVar1,uVar1);
      uVar5 = uVar5 & 0xffffffff;
    }
    lVar3 = lVar3 + uVar5;
  }
  return lVar3;
}

// 0x0012f4b8  size 0xb0
uint __pack_f(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = param_1[3];
  if (*param_1 != 2) {
    uVar3 = 0;
    if (uVar1 == 0) goto LAB_0012f520;
    iVar2 = param_1[2];
    if (iVar2 < -0x7e) {
      uVar3 = 0;
      goto LAB_0012f520;
    }
    if (iVar2 < 0x81) {
      uVar4 = iVar2 + 0x7f;
      if (iVar2 != 0x80) {
        uVar3 = uVar1 >> 7;
        goto LAB_0012f520;
      }
      if (-1 < (int)uVar1) {
        uVar3 = uVar1 >> 7;
        goto LAB_0012f520;
      }
      uVar4 = 0xff;
    }
    else {
      uVar4 = 0xff;
    }
  }
  uVar3 = 0;
LAB_0012f520:
  return uVar3 & 0x7fffff | (uVar4 & 0xff) << 0x17 | param_1[1] << 0x1f;
}

// 0x0012f570  size 0x58
void __unpack_f(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 0x17 & 0xff;
  param_2[1] = uVar1 >> 0x1f;
  if (uVar2 == 0) {
    *param_2 = 2;
    return;
  }
  param_2[2] = uVar2 - 0x7f;
  *param_2 = 3;
  param_2[3] = (uVar1 & 0x7fffff) << 7 | 0x40000000;
  return;
}

// 0x0012f5d0  size 0x2c
void maybe___make_fp(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  __pack_f(&uStack_20);
  return;
}

// 0x0012f600  size 0x3c
/* unpack_f + make_dp; 15 callers */

void maybe___sf_to_df(undefined4 param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  __unpack_f(auStack_20,&uStack_30);
  maybe___make_dp(uStack_30,uStack_2c,uStack_28,(ulong)uStack_24 << 0x1e);
  return;
}

// 0x0012f640  size 0xd4
ulong __unpack_d(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar4 = 0;
  uVar2 = *(ulong *)(param_1 + 4);
  if (uVar1 < 2) {
    uVar4 = 0x7ff;
    uVar3 = uVar2 | 0x8000000000000;
    goto LAB_0012f6bc;
  }
  if (uVar1 != 4) {
    if (uVar1 == 2) {
      uVar3 = 0;
      goto LAB_0012f6bc;
    }
    uVar3 = 0;
    if (uVar2 == 0) goto LAB_0012f6bc;
    uVar1 = param_1[2];
    if ((int)uVar1 < -0x3fe) {
      uVar3 = 0;
      goto LAB_0012f6bc;
    }
    if ((int)uVar1 < 0x400) {
      uVar4 = (ulong)(int)(uVar1 + 0x3ff);
      uVar3 = uVar2 >> 8;
      goto LAB_0012f6bc;
    }
  }
  uVar4 = 0x7ff;
  uVar3 = 0;
LAB_0012f6bc:
  return uVar3 & 0xfffffffffffff | (uVar4 & 0x7ff) << 0x34 | (long)(int)param_1[1] << 0x3f;
}

// 0x0012f718  size 0xb0
void __pack_d(ulong *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar3 = uVar1 >> 0x34 & 0x7ff;
  uVar2 = uVar1 & 0xfffffffffffff;
  param_2[1] = (uint)(uVar1 >> 0x3f);
  if (uVar3 == 0) {
    *param_2 = 2;
    return;
  }
  if (uVar3 != 0x7ff) {
    *(ulong *)(param_2 + 4) = uVar2 << 8 | 0x1000000000000000;
    param_2[2] = (int)uVar3 + -0x3ff;
    *param_2 = 3;
    return;
  }
  param_2[2] = 0x3ff;
  if (uVar2 == 0) {
    *(undefined8 *)(param_2 + 4) = 0x1000000000000000;
    *param_2 = 4;
    return;
  }
  if ((uVar1 & 0x8000000000000) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  *(ulong *)(param_2 + 4) = uVar2;
  return;
}

// 0x0012f7d8  size 0x250
undefined8 _fpadd_parts(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  
  puVar6 = (undefined8 *)param_3;
  puVar11 = (uint *)param_1;
  uVar8 = *puVar11;
  uVar3 = param_1;
  if (1 < uVar8) {
    puVar5 = (uint *)param_2;
    uVar7 = *puVar5;
    uVar3 = param_2;
    if (1 < uVar7) {
      if (uVar8 == 4) {
        if ((uVar7 == 4) && (puVar11[1] != puVar5[1])) {
          return 0x3609d8;
        }
        return param_1;
      }
      if (uVar7 != 4) {
        if (uVar7 == 2) {
          if (uVar8 == 2) {
            *puVar6 = *(undefined8 *)puVar11;
            puVar6[1] = *(undefined8 *)(puVar11 + 2);
            puVar6[2] = *(undefined8 *)(puVar11 + 4);
            *(uint *)((int)puVar6 + 4) = puVar11[1] & puVar5[1];
            return param_3;
          }
          return param_1;
        }
        if (uVar8 != 2) {
          uVar8 = puVar11[2];
          uVar7 = puVar5[2];
          uVar10 = *(ulong *)(puVar11 + 4);
          iVar2 = uVar8 - uVar7;
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          uVar9 = *(ulong *)(puVar5 + 4);
          if (iVar2 < 0x40) {
            bVar1 = (int)uVar8 < (int)uVar7;
            if ((int)uVar7 < (int)uVar8) {
              iVar2 = uVar8 - uVar7;
              do {
                iVar2 = iVar2 + -1;
                uVar9 = uVar9 & 1 | uVar9 >> 1;
              } while (iVar2 != 0);
              bVar1 = false;
              uVar7 = uVar8;
            }
            if (bVar1) {
              do {
                uVar8 = uVar8 + 1;
                uVar10 = uVar10 & 1 | uVar10 >> 1;
              } while ((int)uVar8 < (int)uVar7);
              uVar7 = puVar11[1];
            }
            else {
              uVar7 = puVar11[1];
            }
          }
          else {
            if ((int)uVar7 < (int)uVar8) {
              uVar9 = 0;
            }
            else {
              uVar10 = 0;
              uVar8 = uVar7;
            }
            uVar7 = puVar11[1];
          }
          if (uVar7 == puVar5[1]) {
            uVar10 = uVar10 + uVar9;
            *(uint *)((int)puVar6 + 4) = uVar7;
            *(uint *)(puVar6 + 1) = uVar8;
            puVar6[2] = uVar10;
          }
          else {
            lVar4 = uVar9 - uVar10;
            if (uVar7 == 0) {
              lVar4 = uVar10 - uVar9;
            }
            if (lVar4 < 0) {
              *(undefined4 *)((int)puVar6 + 4) = 1;
              *(uint *)(puVar6 + 1) = uVar8;
              puVar6[2] = -lVar4;
            }
            else {
              *(uint *)(puVar6 + 1) = uVar8;
              puVar6[2] = lVar4;
              *(undefined4 *)((int)puVar6 + 4) = 0;
            }
            uVar10 = puVar6[2];
            while (uVar10 - 1 < 0xfffffffffffffff) {
              uVar10 = uVar10 * 2;
              *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + -1;
              puVar6[2] = uVar10;
            }
          }
          *(undefined4 *)puVar6 = 3;
          if (0x1fffffffffffffff < uVar10) {
            puVar6[2] = uVar10 & 1 | uVar10 >> 1;
            *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
          }
          uVar3 = param_3;
        }
      }
    }
  }
  return uVar3;
}

// 0x0012fa38  size 0x58
void __adddf3(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  __pack_d(&uStack_20,auStack_80);
  __pack_d(&uStack_18,auStack_60);
  uVar1 = _fpadd_parts(auStack_80,auStack_60,auStack_40);
  __unpack_d(uVar1);
  return;
}

// 0x0012fa90  size 0x64
void __subdf3(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [4];
  uint uStack_5c;
  undefined1 auStack_40 [32];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  __pack_d(&uStack_20,auStack_80);
  __pack_d(&uStack_18,auStack_60);
  uStack_5c = uStack_5c ^ 1;
  uVar1 = _fpadd_parts(auStack_80,auStack_60,auStack_40);
  __unpack_d(uVar1);
  return;
}

// 0x0012faf8  size 0x278
void __muldf3(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uStack_b0;
  uint uStack_ac;
  int iStack_a8;
  ulong uStack_a0;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  ulong uStack_80;
  uint uStack_70;
  uint uStack_6c;
  int iStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_b0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  __pack_d(&uStack_50,&uStack_b0);
  __pack_d(&uStack_48,&uStack_90);
  if (uStack_b0 < 2) {
LAB_0012fbac:
    uStack_ac = (uint)(uStack_ac != uStack_8c);
  }
  else {
    if (1 < uStack_90) {
      if (uStack_b0 == 4) {
        if (uStack_90 == 2) {
LAB_0012fb94:
          puVar4 = (uint *)&DAT_003609d8;
          goto LAB_0012fd4c;
        }
        goto LAB_0012fbac;
      }
      if (uStack_90 == 4) {
        if ((uStack_b0 ^ 2) == 0) goto LAB_0012fb94;
      }
      else {
        if ((uStack_b0 ^ 2) == 0) goto LAB_0012fbac;
        if (uStack_90 != 2) {
          uVar1 = maybe___muldi3(uStack_80 & 0xffffffff,uStack_a0 & 0xffffffff);
          uVar2 = maybe___muldi3(uStack_80 >> 0x20,uStack_a0 & 0xffffffff);
          lVar3 = maybe___muldi3(uStack_80 & 0xffffffff,uStack_a0 >> 0x20);
          uVar6 = uVar2 + lVar3;
          lVar3 = maybe___muldi3(uStack_80 >> 0x20,uStack_a0 >> 0x20);
          uVar5 = uVar1 + (uVar6 << 0x20);
          uStack_60 = ((ulong)(uVar6 < uVar2) << 0x20) + (ulong)(uVar5 < uVar1) +
                      (uVar6 >> 0x20) + lVar3;
          iStack_68 = iStack_a8 + iStack_88 + 4;
          uStack_6c = (uint)(uStack_ac != uStack_8c);
          if (0x1fffffffffffffff < uStack_60) {
            do {
              uVar1 = uStack_60 & 1;
              uStack_60 = uStack_60 >> 1;
              iStack_68 = iStack_68 + 1;
              if (uVar1 != 0) {
                uVar5 = uVar5 >> 1 | 0x8000000000000000;
              }
            } while (0x1fffffffffffffff < uStack_60);
          }
          if (uStack_60 < 0x1000000000000000) {
            do {
              uStack_60 = uStack_60 << 1;
              iStack_68 = iStack_68 + -1;
              if ((uVar5 & 0x8000000000000000) != 0) {
                uStack_60 = uStack_60 | 1;
              }
              uVar5 = uVar5 << 1;
            } while (uStack_60 < 0x1000000000000000);
          }
          uStack_70 = 3;
          puVar4 = &uStack_70;
          goto LAB_0012fd4c;
        }
      }
    }
    uStack_8c = (uint)(uStack_ac != uStack_8c);
    puVar4 = &uStack_90;
  }
LAB_0012fd4c:
  __unpack_d(puVar4);
  return;
}

// 0x0012fd80  size 0x13c
void __divdf3(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  ulong uStack_50;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  ulong uStack_30;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  __pack_d(&uStack_20,&uStack_60);
  __pack_d(&uStack_18,&uStack_40);
  puVar4 = &uStack_60;
  if ((1 < uStack_60) && (puVar4 = &uStack_40, 1 < uStack_40)) {
    uStack_5c = uStack_5c ^ uStack_3c;
    if ((uStack_60 == 4) || (uStack_60 == 2)) {
      if (uStack_60 == uStack_40) {
        puVar4 = (uint *)&DAT_003609d8;
      }
      else {
        puVar4 = &uStack_60;
      }
    }
    else if (uStack_40 == 4) {
      uStack_50 = 0;
      iStack_58 = 0;
      puVar4 = &uStack_60;
    }
    else if (uStack_40 == 2) {
      uStack_60 = 4;
      puVar4 = &uStack_60;
    }
    else {
      iStack_58 = iStack_58 - iStack_38;
      bVar1 = false;
      if (uStack_50 < uStack_30) {
        iStack_58 = iStack_58 + -1;
        uStack_50 = uStack_50 << 1;
        bVar1 = uStack_50 < uStack_30;
      }
      uVar3 = 0x1000000000000000;
      uVar5 = 0;
      do {
        uVar2 = uStack_50 << 1;
        if (!bVar1) {
          uVar5 = uVar5 | uVar3;
          uVar2 = (uStack_50 - uStack_30) * 2;
        }
        uVar3 = uVar3 >> 1;
        bVar1 = uVar2 < uStack_30;
        uStack_50 = uVar2;
      } while (uVar3 != 0);
      puVar4 = &uStack_60;
      uStack_50 = uVar5;
    }
  }
  __unpack_d(puVar4);
  return;
}

// 0x0012fec0  size 0x118
int __fpcmp_parts_d(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if ((uVar3 < 2) || (uVar1 = *param_2, uVar1 < 2)) {
    return 1;
  }
  if (uVar3 == 4) {
    if ((uVar1 ^ 4) == 0) {
      return param_2[1] - param_1[1];
    }
    uVar3 = param_1[1];
  }
  else {
    if ((uVar1 ^ 4) == 0) {
      iVar2 = 1;
      if (param_2[1] == 0) {
        iVar2 = -1;
      }
      return iVar2;
    }
    if (uVar3 == 2) {
      if (uVar1 == 2) {
        return 0;
      }
      iVar2 = -1;
      if (param_2[1] != 0) {
        iVar2 = 1;
      }
      return iVar2;
    }
    if (uVar1 != 2) {
      uVar3 = param_1[1];
      if (uVar3 == param_2[1]) {
        if ((int)param_1[2] <= (int)param_2[2]) {
          if ((int)param_2[2] <= (int)param_1[2]) {
            if (*(ulong *)(param_2 + 4) < *(ulong *)(param_1 + 4)) goto LAB_0012ffb4;
            if (*(ulong *)(param_2 + 4) <= *(ulong *)(param_1 + 4)) {
              return 0;
            }
          }
          iVar2 = 1;
          if (uVar3 == 0) {
            iVar2 = -1;
          }
          return iVar2;
        }
      }
LAB_0012ffb4:
      iVar2 = -1;
      if (uVar3 == 0) {
        iVar2 = 1;
      }
      return iVar2;
    }
    uVar3 = param_1[1];
  }
  iVar2 = -1;
  if (uVar3 == 0) {
    iVar2 = 1;
  }
  return iVar2;
}

// 0x0012ffe0  size 0x4c
void __cmpdf2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  __pack_d(&uStack_20,auStack_60);
  __pack_d(&uStack_18,auStack_40);
  __fpcmp_parts_d(auStack_60,auStack_40);
  return;
}

