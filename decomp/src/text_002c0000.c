// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002c0000 - 0x002c4000
#include "ghidra_types.h"

// 0x002c0160  size 0x16c
void FUN_002c0160(int param_1)

{
  int iVar1;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = *(int *)(param_1 + 0x3f0);
  if ((*(int *)(param_1 + 0x3ec) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_40);
    uStack_2c = 0;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_40,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3f8);
  if ((*(int *)(param_1 + 0x3f4) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
    uStack_6c = 0;
    iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_80,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x400);
  if ((*(int *)(param_1 + 0x3fc) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_c0);
    uStack_ac = 4;
    iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_c0,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x408);
  if ((*(int *)(param_1 + 0x404) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_100);
    uStack_ec = 0;
    iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_100,iVar1);
  }
  return;
}

// 0x002c02d0  size 0x1b8
void FUN_002c02d0(int param_1)

{
  int iVar1;
  undefined1 auStack_140 [20];
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 auStack_100 [20];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_c0 [20];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  int iStack_68;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = *(int *)(param_1 + 0x3c8);
  if ((*(int *)(param_1 + 0x3c4) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_40);
    uStack_2c = 0;
    iStack_28 = (int)((float)iStack_28 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_40,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3d0);
  if ((*(int *)(param_1 + 0x3cc) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_80);
    uStack_6c = 0;
    iStack_68 = (int)((float)iStack_68 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_80,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3d8);
  if ((*(int *)(param_1 + 0x3d4) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_c0);
    uStack_ac = 0;
    iStack_a8 = (int)((float)iStack_a8 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_c0,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3e0);
  if ((*(int *)(param_1 + 0x3dc) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_100);
    uStack_ec = 0;
    iStack_e8 = (int)((float)iStack_e8 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_100,iVar1);
  }
  iVar1 = *(int *)(param_1 + 1000);
  if ((*(int *)(param_1 + 0x3e4) != -1) && (iVar1 != -1)) {
    FUN_001ede20(*(undefined4 *)(param_1 + 4),auStack_140);
    uStack_12c = 0;
    iStack_128 = (int)((float)iStack_128 * *(float *)(param_1 + 0x94));
    FUN_001f1350(auStack_140,iVar1);
  }
  return;
}

// 0x002c0490  size 0x304
void FUN_002c0490(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = param_1;
  do {
    if ((*(int *)(iVar3 + 4) == 0) && (*(int *)(iVar3 + 8) != -1)) {
      iVar2 = FUN_001f48c0();
      *(int *)(iVar3 + 4) = *piRam0036f42c + iVar2 * 0x4f4 + 4;
      FUN_002c2400(param_1,uVar4 & 0xff);
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x24;
  } while (uVar4 < 4);
  FUN_002c02d0(param_1);
  FUN_002c0160(param_1);
  FUN_001ecd80(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x80));
  FUN_001ecd80(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
  FUN_001eda40(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x70));
  FUN_001eda40(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 4));
  FUN_001eda40(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 800) == 0) {
    FUN_002bfcc0(param_1);
    FUN_002bfea0(param_1);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x48);
    if (cVar1 == '\x05') {
      if (*(int *)(*(int *)(param_1 + 0x34) * 0x14 + *(int *)(param_1 + 0x28) + 0x318) == 0) {
        *(undefined1 *)(param_1 + 0x48) = 6;
        iVar3 = *(int *)(param_1 + 0x30) * 0x14 + *(int *)(param_1 + 0x28);
        *(undefined4 *)(iVar3 + 0x30c) = 0;
        if (*(int *)(iVar3 + 0x31c) == 0) {
          *(undefined4 *)(iVar3 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x318) = 1;
        }
        iVar3 = *(int *)(param_1 + 0x34) * 0x14 + *(int *)(param_1 + 0x28);
        *(undefined4 *)(iVar3 + 0x30c) = 0;
        if (*(int *)(iVar3 + 0x31c) == 0) {
          *(undefined4 *)(iVar3 + 0x318) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0x318) = 1;
        }
        *(undefined4 *)(param_1 + 800) = 0;
        FUN_00200fc0(0);
      }
      else {
        FUN_001ecd80();
      }
    }
    else if (cVar1 == '\x04') {
      if (*(int *)(*(int *)(param_1 + 0x34) * 0x14 + *(int *)(param_1 + 0x28) + 0x318) == 0) {
        *(undefined1 *)(param_1 + 0x48) = 6;
      }
      else {
        FUN_001ecd80();
      }
    }
    else if (cVar1 == '\x03') {
      FUN_00200d70(*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)
                    ((&PTR_DAT_0032f1c0)[(char)(&DAT_0032f535)[(uint)bRam0036f810 * 6] * 2] +
                    *(int *)(param_1 + 0x324) * 0x14 + 8),1,0);
    }
    else if (cVar1 == '\x02') {
      if (*(int *)(*(int *)(param_1 + 0x30) * 0x14 + *(int *)(param_1 + 0x28) + 0x318) == 0) {
        *(char *)(param_1 + 0x48) = *(char *)(param_1 + 0x48) + '\x01';
      }
      else {
        FUN_001ecd80();
      }
    }
    FUN_002bd2d0(param_1);
    FUN_001eda40(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x28));
  }
  return;
}

// 0x002c07a0  size 0x18c
void FUN_002c07a0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  
  puVar5 = (undefined1 *)param_1;
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 0x94) = 0;
  FUN_002c2400(param_1,0);
  FUN_002c2400(param_1,1);
  switch(puVar5[0x340]) {
  case 1:
  case 7:
    FUN_002ccbd0();
    *(undefined4 *)(puVar5 + 0x324) = 0;
    *(undefined4 *)(puVar5 + 800) = 0;
    cVar1 = FUN_0017e8d0();
    if (cVar1 == '\x05') {
      FUN_001e9120(8);
      puVar5[0x340] = 0;
      return;
    }
    FUN_001e9120(4);
    break;
  case 2:
    *puVar5 = 1;
    FUN_001e9120(0x80000);
    FUN_001e9120(0x10);
    break;
  case 3:
  case 4:
    FUN_002bcb00(param_1);
    *puVar5 = 4;
    break;
  case 5:
    FUN_0020a640();
    if ((*(int *)(puVar5 + 800) != 0) && (puVar5[0x48] == '\0')) {
      puVar5[0x48] = 2;
    }
    *puVar5 = 8;
    break;
  case 6:
    FUN_002ccbd0();
    iVar6 = 0;
    lVar3 = FUN_00177230();
    if (0 < lVar3) {
      do {
        uVar4 = FUN_002cfb30(iVar6);
        FUN_002c5f70(uVar4,iVar6);
        iVar6 = iVar6 + 1;
        iVar2 = FUN_00177230();
      } while (iVar6 < iVar2);
    }
    *(undefined4 *)(puVar5 + 800) = 0;
    FUN_001e9120(0x80000);
    FUN_001e9120(2);
  }
  puVar5[0x340] = 0;
  return;
}

// 0x002c0930  size 0xe4
undefined4 FUN_002c0930(void)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_50 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_28 = 0x44;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  if (iGpffff8764 < 1) {
    FUN_00153260(2,9,0,0);
    uVar1 = 1;
    iGpffff8764 = 0x3c;
  }
  else {
    iVar2 = ((0x3c - iGpffff8764) * 0x80) / 0x3c;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x80 < iVar2) {
      iVar2 = 0x80;
    }
    aiStack_50[0] = (0x80 - iVar2) * 0x1000000;
    FUN_00153260(2,9,1,aiStack_50);
    uVar1 = 0;
    iGpffff8764 = iGpffff8764 + -1;
  }
  return uVar1;
}

// 0x002c0a20  size 0xf0
undefined4 FUN_002c0a20(undefined8 param_1)

{
  undefined4 uVar1;
  int aiStack_50 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_28 = 0x44;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  if (iGpffff8760 < 1) {
    FUN_00153260(2,9,0,0);
    iGpffff8760 = 0x3c;
    FUN_002c07a0(param_1);
    uVar1 = 1;
  }
  else {
    aiStack_50[0] = ((0x3c - iGpffff8760) * 0x80) / 0x3c;
    if (aiStack_50[0] < 0) {
      aiStack_50[0] = 0;
    }
    else if (0x80 < aiStack_50[0]) {
      aiStack_50[0] = 0x80;
    }
    aiStack_50[0] = aiStack_50[0] << 0x18;
    FUN_00153260(2,9,1,aiStack_50);
    uVar1 = 0;
    iGpffff8760 = iGpffff8760 + -1;
  }
  return uVar1;
}

// 0x002c0b10  size 0x3e8
void FUN_002c0b10(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  
  pcVar8 = (char *)param_1;
  if ((*(int *)(pcVar8 + 0x98) == 0) && (uVar5 = FUN_00176fa0(), uVar5 != 0)) {
    *(uint *)(pcVar8 + 0x328) = (uint)((uVar5 & 1) != 0);
    *(uint *)(pcVar8 + 0x32c) = (uint)((uVar5 & 4) != 0);
    *(uint *)(pcVar8 + 0x318) = (uint)((uVar5 & 0x400) != 0);
    FUN_002c1450(param_1);
    pcVar2 = (char *)FUN_00177070(0);
    if (*pcVar2 == '\x01') {
      pcVar8[0x3f0] = 'N';
      pcVar8[0x3f1] = '\0';
      pcVar8[0x3f2] = '\0';
      pcVar8[0x3f3] = '\0';
    }
    else if (*pcVar2 == '\0') {
      pcVar8[0x3f0] = 'M';
      pcVar8[0x3f1] = '\0';
      pcVar8[0x3f2] = '\0';
      pcVar8[0x3f3] = '\0';
    }
    iVar3 = FUN_00177070(0);
    if (*(short *)(iVar3 + 0xc) == 0x112) {
      iVar3 = 0x295;
    }
    else {
      iVar3 = FUN_00178390();
      iVar3 = *(char *)(iVar3 + 0x40c) + 0x296;
    }
    *(int *)(pcVar8 + 0x3f8) = iVar3;
    iVar3 = FUN_00177070(0);
    piVar4 = (int *)FUN_001771b0(*(undefined1 *)(iVar3 + 9));
    *(int *)(pcVar8 + 0x400) = *piVar4 + 0x1b3;
    iVar3 = FUN_00177070(0);
    piVar4 = (int *)FUN_001771b0(*(undefined1 *)(iVar3 + 9));
    *(int *)(pcVar8 + 0x408) = *piVar4 + 0xd1;
    FUN_002c0f00(param_1,0);
    uVar5 = FUN_001dc290();
    if ((uVar5 & 2) != 0) {
      FUN_002c12a0(param_1,0);
    }
    uVar5 = FUN_001dc290();
    if (((uVar5 & 0x19) != 0) && (*(int *)(pcVar8 + 0x318) == 0)) {
      uVar6 = FUN_001dc220(0);
      FUN_001dcc70(uVar6,pcVar8 + 0x1d8,pcVar8 + 0x1dc,pcVar8 + 0x1e0);
    }
    FUN_002c16a0(param_1);
    pcVar8[0x98] = '\x01';
    pcVar8[0x99] = '\0';
    pcVar8[0x9a] = '\0';
    pcVar8[0x9b] = '\0';
    pcVar8[0x9c] = '\0';
    pcVar8[0x9d] = '\0';
    pcVar8[0x9e] = '\0';
    pcVar8[0x9f] = '\0';
  }
  cVar1 = *pcVar8;
  switch(cVar1) {
  case '\0':
  case '\x02':
    break;
  case '\x01':
    if ((cVar1 == '\x01') || (cVar1 == '\b')) {
      pcVar8[0x94] = '\0';
      pcVar8[0x95] = '\0';
      pcVar8[0x96] = -0x80;
      pcVar8[0x97] = '?';
      lVar7 = FUN_001e9090();
      if (lVar7 == 0) {
        FUN_001e9120(0x40000);
        FUN_00177f20();
        FUN_001e8f80();
      }
    }
    FUN_002c0490(param_1);
    FUN_002bce00(param_1);
    break;
  case '\x03':
    lVar7 = FUN_002db3e0(pcVar8 + 0x40c);
    if (lVar7 != 1) {
      *pcVar8 = '\x05';
      pcVar8[0x340] = '\x05';
    }
    FUN_0020a5d0();
    FUN_002db730(pcVar8 + 0x40c);
    break;
  case '\x04':
    lVar7 = FUN_002c0930(param_1);
    if (lVar7 != 0) {
      *pcVar8 = '\x03';
    }
    FUN_002db730(pcVar8 + 0x40c);
    break;
  case '\x05':
    lVar7 = FUN_002c0a20(param_1);
    if (lVar7 != 0) {
      return;
    }
    FUN_002db730(pcVar8 + 0x40c);
    break;
  case '\x06':
    if ((cVar1 == '\x01') || (cVar1 == '\b')) {
      pcVar8[0x94] = '\0';
      pcVar8[0x95] = '\0';
      pcVar8[0x96] = -0x80;
      pcVar8[0x97] = '?';
      lVar7 = FUN_001e9090();
      if (lVar7 == 0) {
        FUN_001e9120(0x40000);
        FUN_00177f20();
        FUN_001e8f80();
      }
    }
    FUN_002c0490(param_1);
    FUN_002bce00(param_1);
    break;
  case '\a':
    if ((cVar1 == '\x01') || (cVar1 == '\b')) {
      pcVar8[0x94] = '\0';
      pcVar8[0x95] = '\0';
      pcVar8[0x96] = -0x80;
      pcVar8[0x97] = '?';
      lVar7 = FUN_001e9090();
      if (lVar7 == 0) {
        FUN_001e9120(0x40000);
        FUN_00177f20();
        FUN_001e8f80();
      }
    }
    FUN_002c0a20(param_1);
    FUN_002c0490(param_1);
    break;
  case '\b':
    lVar7 = FUN_002c0930(param_1);
    if (lVar7 != 0) {
      *pcVar8 = '\x01';
    }
    if ((*pcVar8 == '\x01') || (*pcVar8 == '\b')) {
      pcVar8[0x94] = '\0';
      pcVar8[0x95] = '\0';
      pcVar8[0x96] = -0x80;
      pcVar8[0x97] = '?';
      lVar7 = FUN_001e9090();
      if (lVar7 == 0) {
        FUN_001e9120(0x40000);
        FUN_00177f20();
        FUN_001e8f80();
      }
    }
    FUN_002c0490(param_1);
    FUN_002bce00(param_1);
    break;
  default:
    goto switchD_002c0cb0_default;
  }
switchD_002c0cb0_default:
  return;
}

// 0x002c0f00  size 0x394
void FUN_002c0f00(int param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  iVar3 = FUN_00177060();
  cVar1 = (&DAT_0032f535)[(uint)bGpffff9120 * 6];
  if (cVar1 == '\0') {
    FUN_0017d9e0(1,*(undefined4 *)(iVar3 + 0x68),param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c);
  }
  else if (cVar1 == '\x01') {
    FUN_0017d9e0(1,*(undefined4 *)(iVar3 + 0x10),param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c);
  }
  else {
    if (cVar1 == '\x02') {
      FUN_0017d9e0(1,*(undefined4 *)(iVar3 + 0x10),param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c);
      iVar3 = *(int *)(param_1 + 0x318);
      goto LAB_002c0fa8;
    }
    FUN_0017d9e0(1,0,param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c);
  }
  iVar3 = *(int *)(param_1 + 0x318);
LAB_002c0fa8:
  if (iVar3 == 0) {
    uVar5 = FUN_001dc220(param_2);
    bVar2 = false;
    uVar6 = FUN_001dccc0(uVar5);
    FUN_0017d9e0(1,uVar6,param_1 + 0x1e4,param_1 + 0x1e8,param_1 + 0x1ec);
    uVar4 = FUN_001dccc0(uVar5);
    *(undefined4 *)(param_1 + 0x1d4) = uVar4;
    if (*(int *)(param_1 + 0x9c) == 0) {
      lVar8 = FUN_002bcce0(param_1 + 0x268,param_1 + 0x1e4,param_1 + 0xcc);
      if (lVar8 < 0) {
        bVar2 = true;
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x1e4);
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1e8);
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x1ec);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined4 *)(param_1 + 0x26c) = 0;
      *(undefined4 *)(param_1 + 0x270) = 0;
      *(undefined4 *)(param_1 + 0x274) = 0;
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x1e4);
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x1ec);
    }
    uVar10 = 0;
    iVar3 = param_1;
    iVar9 = param_1;
    do {
      if (uVar10 == 0) {
        FUN_001dcbd0(uVar5,0,iVar3 + 0x1f0,iVar3 + 500,iVar3 + 0x1f8);
        if (*(int *)(param_1 + 0x9c) == 0) {
          lVar8 = FUN_002bcce0(iVar9 + 0x278,iVar3 + 0x1f0,iVar3 + 0xd8);
          if (lVar8 < 0) {
            *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0x1f0);
            *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 500);
            *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0x1f8);
          }
        }
        else {
          *(undefined4 *)(iVar9 + 0x278) = 0;
          *(undefined4 *)(iVar9 + 0x27c) = 0;
          *(undefined4 *)(iVar9 + 0x280) = 0;
          *(undefined4 *)(iVar9 + 0x284) = 0;
          *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0x1f0);
          *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 500);
          *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0x1f8);
        }
      }
      else {
        lVar8 = FUN_001dcc30(uVar5,uVar10);
        lVar7 = FUN_001dcc30(uVar5,uVar10 - 1);
        if (lVar7 < lVar8) {
          uVar6 = FUN_001dcc30(uVar5,uVar10 - 1);
          FUN_0017d9e0(1,uVar6,auStack_10,auStack_c,auStack_8);
          uVar6 = FUN_001dcc30(uVar5,uVar10);
          FUN_0017d9e0(1,uVar6,auStack_20,auStack_1c,auStack_18);
          FUN_001dcbf0(uVar5,uVar10,iVar3 + 0x1f0,iVar3 + 500,iVar3 + 0x1f8);
          if (*(int *)(param_1 + 0x9c) == 0) {
            FUN_002bcce0(iVar9 + 0x278,iVar3 + 0x1f0,iVar3 + 0xd8);
            if (bVar2) {
              *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0x1f0);
              *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 500);
              *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0x1f8);
            }
          }
          else {
            *(undefined4 *)(iVar9 + 0x278) = 0;
            *(undefined4 *)(iVar9 + 0x27c) = 0;
            *(undefined4 *)(iVar9 + 0x280) = 0;
            *(undefined4 *)(iVar9 + 0x284) = 0;
            *(undefined4 *)(iVar3 + 0xd8) = *(undefined4 *)(iVar3 + 0x1f0);
            *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 500);
            *(undefined4 *)(iVar3 + 0xe0) = *(undefined4 *)(iVar3 + 0x1f8);
          }
        }
        else {
          *(undefined4 *)(iVar3 + 0x1f0) = 0;
          *(undefined4 *)(iVar3 + 500) = 0;
          *(undefined4 *)(iVar3 + 0x1f8) = 0;
          *(undefined4 *)(iVar9 + 0x278) = 0;
          *(undefined4 *)(iVar9 + 0x27c) = 0;
          *(undefined4 *)(iVar9 + 0x280) = 0;
          *(undefined4 *)(iVar9 + 0x284) = 0;
        }
      }
      uVar10 = uVar10 + 1;
      iVar3 = iVar3 + 0xc;
      iVar9 = iVar9 + 0x10;
    } while (uVar10 < 10);
  }
  return;
}

// 0x002c12a0  size 0x1a8
void FUN_002c12a0(int param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar3 = FUN_00177060();
  cVar1 = (&DAT_0032f535)[(uint)bGpffff9120 * 6];
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar3 + 0x60);
  }
  else if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar3 + 0x3c);
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar3 + 0x3c);
  }
  else {
    *(undefined4 *)(param_1 + 0x330) = 0;
  }
  if (*(int *)(param_1 + 0x318) == 0) {
    uVar6 = FUN_001dc240(param_2);
    bVar2 = false;
    iVar3 = FUN_001e0510(uVar6);
    iVar4 = FUN_001e0520(uVar6);
    *(int *)(param_1 + 0x150) = iVar3 - iVar4;
    iVar3 = FUN_001e0520(uVar6);
    *(int *)(param_1 + 0x1a4) = -iVar3;
    if (*(int *)(param_1 + 0x9c) == 0) {
      iVar3 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0xa0);
      *(int *)(param_1 + 0x1a8) = iVar3;
      if (0 < iVar3) {
        bVar2 = true;
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x150);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x150);
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x150);
    }
    iVar4 = 0;
    iVar3 = param_1;
    do {
      uVar5 = FUN_001e0480(uVar6,iVar4);
      *(undefined4 *)(iVar3 + 0x154) = uVar5;
      uVar5 = FUN_001e0430(uVar6,iVar4);
      *(undefined4 *)(iVar3 + 0x17c) = uVar5;
      if (*(int *)(param_1 + 0x9c) == 0) {
        *(int *)(iVar3 + 0x1ac) = *(int *)(iVar3 + 0x154) - *(int *)(iVar3 + 0xa4);
        if (bVar2) {
          *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x154);
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0x1ac) = *(undefined4 *)(iVar3 + 0x154);
        *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x154);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 9);
  }
  return;
}

// 0x002c1450  size 0x24c
void FUN_002c1450(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_0017e890();
  if (cVar1 == '\x06') {
    uVar2 = FUN_001777b0();
    cVar1 = FUN_001777a0();
    uVar3 = FUN_00177790();
    cVar4 = FUN_00177780();
  }
  else {
    uVar2 = FUN_0017e720();
    cVar1 = FUN_0017e6e0();
    uVar3 = FUN_0017e550(10);
    cVar4 = FUN_0017e760();
  }
  switch(uVar2) {
  case 0:
    *(undefined4 *)(param_1 + 0x3d0) = 0x51;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x3d0) = 0x50;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x3d0) = 0x53;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x3d0) = 0x52;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x3d0) = 0x54;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x3d0) = 0x4f;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x3d0) = 0x56;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x3d0) = 0x55;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x3d0) = 0x4f;
  }
  uVar5 = 0x3c;
  if (cVar1 != '\0') {
    uVar5 = 0x3b;
  }
  *(undefined4 *)(param_1 + 0x3d8) = uVar5;
  switch(uVar3) {
  case 0:
    *(undefined4 *)(param_1 + 0x3e0) = 0x47;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x3e0) = 0x49;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x3e0) = 0x4b;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x3e0) = 0x48;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x3e0) = 0x4a;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x3e0) = 0x4c;
  }
  uVar5 = 0x3d;
  if (cVar4 != '\0') {
    uVar5 = 0x3e;
  }
  *(undefined4 *)(param_1 + 1000) = uVar5;
  uVar3 = FUN_00177050();
  switch(uVar3) {
  case 0:
    *(undefined4 *)(param_1 + 0x3c8) = 0x42;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x3c8) = 0x3f;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x3c8) = 0x40;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x3c8) = 0x41;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x3c8) = 0x43;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x3c8) = 0x44;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x3c8) = 0x45;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x3c8) = 0x46;
  }
  return;
}

// 0x002c16a0  size 0x114
void FUN_002c16a0(int param_1)

{
  switch(uGpffff9120) {
  case 0:
  case 7:
  case 0xc:
    *(undefined4 *)(param_1 + 0x350) = 0x34;
    *(undefined4 *)(param_1 + 0x360) = 0x32;
    break;
  case 1:
  case 8:
  case 0xd:
  case 0x10:
    *(undefined4 *)(param_1 + 0x350) = 0x35;
    *(undefined4 *)(param_1 + 0x360) = 0x31;
    break;
  case 2:
  case 9:
  case 0xe:
    *(undefined4 *)(param_1 + 0x350) = 0x34;
    *(undefined4 *)(param_1 + 0x360) = 0x32;
    *(undefined4 *)(param_1 + 0x370) = 0x35;
    *(undefined4 *)(param_1 + 0x380) = 0x31;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x350) = 0x36;
    *(undefined4 *)(param_1 + 0x360) = 0x32;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x350) = 0x37;
    *(undefined4 *)(param_1 + 0x360) = 0x31;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x350) = 0x36;
    *(undefined4 *)(param_1 + 0x360) = 0x32;
    *(undefined4 *)(param_1 + 0x370) = 0x37;
    *(undefined4 *)(param_1 + 0x380) = 0x31;
    break;
  case 6:
  case 10:
  case 0xb:
  case 0xf:
  case 0x17:
    *(undefined4 *)(param_1 + 0x360) = 0x3a;
    break;
  case 0x12:
    *(undefined4 *)(param_1 + 0x360) = 0x32;
    *(undefined4 *)(param_1 + 0x3b8) = 0xe;
    *(undefined4 *)(param_1 + 0x3c0) = 0xf;
    *(undefined4 *)(param_1 + 0x390) = 0x33;
    break;
  case 0x13:
    *(undefined4 *)(param_1 + 0x360) = 0x31;
    *(undefined4 *)(param_1 + 0x3b8) = 0xe;
    *(undefined4 *)(param_1 + 0x3c0) = 0xf;
  }
  return;
}

// 0x002c17c0  size 0x42c
void FUN_002c17c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x344) = 0x1b;
  switch((&DAT_0032f532)[(uint)bGpffff9120 * 6]) {
  case 0:
    *(undefined4 *)(param_1 + 0x3c4) = 0x20;
    *(undefined4 *)(param_1 + 0x3cc) = 0x21;
    *(undefined4 *)(param_1 + 0x3d4) = 0x1f;
    *(undefined4 *)(param_1 + 0x3dc) = 0x22;
    *(undefined4 *)(param_1 + 0x3e4) = 0x23;
    *(undefined4 *)(param_1 + 0x35c) = 0x24;
    *(undefined4 *)(param_1 + 0x364) = 0x25;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x3c4) = 0x26;
    *(undefined4 *)(param_1 + 0x3cc) = 0x27;
    *(undefined4 *)(param_1 + 0x3d4) = 0x25;
    *(undefined4 *)(param_1 + 0x3dc) = 0x28;
    *(undefined4 *)(param_1 + 0x3e4) = 0x29;
    *(undefined4 *)(param_1 + 0x34c) = 0x2a;
    *(undefined4 *)(param_1 + 0x354) = 0x2b;
    *(undefined4 *)(param_1 + 0x35c) = 0x2c;
    *(undefined4 *)(param_1 + 0x364) = 0x2d;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x3c4) = 0x27;
    *(undefined4 *)(param_1 + 0x3cc) = 0x28;
    *(undefined4 *)(param_1 + 0x3d4) = 0x26;
    *(undefined4 *)(param_1 + 0x3dc) = 0x29;
    *(undefined4 *)(param_1 + 0x3e4) = 0x2a;
    *(undefined4 *)(param_1 + 0x34c) = 0x2b;
    *(undefined4 *)(param_1 + 0x354) = 0x2c;
    *(undefined4 *)(param_1 + 0x35c) = 0x2d;
    *(undefined4 *)(param_1 + 0x364) = 0x2e;
    *(undefined4 *)(param_1 + 0x36c) = 0x2f;
    *(undefined4 *)(param_1 + 0x374) = 0x30;
    *(undefined4 *)(param_1 + 0x37c) = 0x31;
    *(undefined4 *)(param_1 + 900) = 0x32;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x3c4) = 0x27;
    *(undefined4 *)(param_1 + 0x3cc) = 0x28;
    *(undefined4 *)(param_1 + 0x3d4) = 0x26;
    *(undefined4 *)(param_1 + 0x3dc) = 0x29;
    *(undefined4 *)(param_1 + 0x3e4) = 0x2a;
    *(undefined4 *)(param_1 + 0x34c) = 0x2b;
    *(undefined4 *)(param_1 + 0x354) = 0x2c;
    *(undefined4 *)(param_1 + 0x35c) = 0x2d;
    *(undefined4 *)(param_1 + 0x364) = 0x2e;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x3c4) = 0x28;
    *(undefined4 *)(param_1 + 0x3cc) = 0x29;
    *(undefined4 *)(param_1 + 0x3d4) = 0x27;
    *(undefined4 *)(param_1 + 0x3dc) = 0x2a;
    *(undefined4 *)(param_1 + 0x3e4) = 0x2b;
    *(undefined4 *)(param_1 + 0x34c) = 0x2c;
    *(undefined4 *)(param_1 + 0x354) = 0x2d;
    *(undefined4 *)(param_1 + 0x35c) = 0x2e;
    *(undefined4 *)(param_1 + 0x364) = 0x2f;
    *(undefined4 *)(param_1 + 0x36c) = 0x30;
    *(undefined4 *)(param_1 + 0x374) = 0x31;
    *(undefined4 *)(param_1 + 0x37c) = 0x32;
    *(undefined4 *)(param_1 + 900) = 0x33;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x3cc) = 0x2c;
    *(undefined4 *)(param_1 + 0x3d4) = 0x2b;
    *(undefined4 *)(param_1 + 0x3dc) = 0x2d;
    *(undefined4 *)(param_1 + 0x3e4) = 0x2e;
    *(undefined4 *)(param_1 + 0x3ec) = 0x41;
    *(undefined4 *)(param_1 + 0x3f4) = 0x42;
    *(undefined4 *)(param_1 + 0x3fc) = 0x44;
    *(undefined4 *)(param_1 + 0x404) = 0x43;
    *(undefined4 *)(param_1 + 0x35c) = 0x45;
    *(undefined4 *)(param_1 + 0x364) = 0x47;
    *(undefined4 *)(param_1 + 900) = 0x46;
    *(undefined4 *)(param_1 + 0x3a4) = 0x38;
    *(undefined4 *)(param_1 + 0x3ac) = 0x2f;
    *(undefined4 *)(param_1 + 0x3b4) = 0x25;
    *(undefined4 *)(param_1 + 0x3bc) = 0x26;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x3c4) = 0x1b;
    *(undefined4 *)(param_1 + 0x3cc) = 0x1c;
    *(undefined4 *)(param_1 + 0x3d4) = 0x1a;
    *(undefined4 *)(param_1 + 0x3dc) = 0x1d;
    *(undefined4 *)(param_1 + 0x3e4) = 0x1e;
    *(undefined4 *)(param_1 + 0x34c) = 0x1f;
    *(undefined4 *)(param_1 + 0x354) = 0x20;
    *(undefined4 *)(param_1 + 0x35c) = 0x21;
    *(undefined4 *)(param_1 + 0x364) = 0x22;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x3c4) = 0x1c;
    *(undefined4 *)(param_1 + 0x3cc) = 0x1d;
    *(undefined4 *)(param_1 + 0x3d4) = 0x1b;
    *(undefined4 *)(param_1 + 0x3dc) = 0x1e;
    *(undefined4 *)(param_1 + 0x3e4) = 0x1f;
    *(undefined4 *)(param_1 + 0x34c) = 0x20;
    *(undefined4 *)(param_1 + 0x354) = 0x21;
    *(undefined4 *)(param_1 + 0x35c) = 0x22;
    *(undefined4 *)(param_1 + 0x364) = 0x23;
    *(undefined4 *)(param_1 + 0x36c) = 0x24;
    *(undefined4 *)(param_1 + 0x374) = 0x25;
    *(undefined4 *)(param_1 + 0x37c) = 0x26;
    *(undefined4 *)(param_1 + 900) = 0x27;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x3c4) = 0x2a;
    *(undefined4 *)(param_1 + 0x3cc) = 0x2b;
    *(undefined4 *)(param_1 + 0x3d4) = 0x29;
    *(undefined4 *)(param_1 + 0x3dc) = 0x2c;
    *(undefined4 *)(param_1 + 0x3e4) = 0x2d;
    *(undefined4 *)(param_1 + 0x39c) = 0x37;
    *(undefined4 *)(param_1 + 0x3a4) = 0x40;
    *(undefined4 *)(param_1 + 0x3ac) = 0x2e;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x3c4) = 0x1b;
    *(undefined4 *)(param_1 + 0x3cc) = 0x1c;
    *(undefined4 *)(param_1 + 0x3d4) = 0x1a;
    *(undefined4 *)(param_1 + 0x3dc) = 0x1d;
    *(undefined4 *)(param_1 + 0x3e4) = 0x1e;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x3cc) = 0x2c;
    *(undefined4 *)(param_1 + 0x3d4) = 0x2b;
    *(undefined4 *)(param_1 + 0x3dc) = 0x2d;
    *(undefined4 *)(param_1 + 0x3e4) = 0x2e;
    *(undefined4 *)(param_1 + 0x3ec) = 0x4a;
    *(undefined4 *)(param_1 + 0x3f4) = 0x4b;
    *(undefined4 *)(param_1 + 0x3fc) = 0x4d;
    *(undefined4 *)(param_1 + 0x404) = 0x4c;
    *(undefined4 *)(param_1 + 0x35c) = 0x4e;
    *(undefined4 *)(param_1 + 0x364) = 0x50;
    *(undefined4 *)(param_1 + 900) = 0x4f;
    *(undefined4 *)(param_1 + 0x39c) = 0x38;
    *(undefined4 *)(param_1 + 0x3a4) = 0x41;
    *(undefined4 *)(param_1 + 0x3ac) = 0x2f;
    *(undefined4 *)(param_1 + 0x3b4) = 0x25;
    *(undefined4 *)(param_1 + 0x3bc) = 0x26;
    *(undefined4 *)(param_1 + 0x38c) = 0x51;
    *(undefined4 *)(param_1 + 0x394) = 0x52;
  }
  return;
}

// 0x002c1bf0  size 0x50
void FUN_002c1bf0(void)

{
  FUN_002c1c90();
  return;
}

// 0x002c1c40  size 0x4c
void FUN_002c1c40(void)

{
  FUN_002c1c90();
  return;
}

// 0x002c1c90  size 0x21c
void FUN_002c1c90(int param_1,uint param_2,undefined8 param_3,undefined4 *param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,long param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  param_1 = param_1 + (param_2 & 0xff) * 0x24;
  iVar4 = (param_2 & 0xff) * 0xc;
  uStack_10 = *param_4;
  uStack_c = param_4[1];
  uStack_8 = param_4[2];
  *(undefined4 *)(&DAT_0032efa0 + iVar4) = uStack_10;
  *(undefined4 *)(&DAT_0032efa4 + iVar4) = uStack_c;
  *(undefined4 *)(&DAT_0032efa8 + iVar4) = uStack_8;
  *(int *)(param_1 + 8) = (int)param_3;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_6;
  *(undefined4 *)(param_1 + 0x14) = param_7;
  FUN_001f4980(param_3,&uStack_10,0);
  if (-1 < param_8) {
    iVar3 = (int)param_8 * 0x14 + iGpffff89d4;
    iVar4 = *(int *)(iVar3 + 0x20);
    if (iVar4 == 0) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    else {
      uVar2 = iVar4 + 0x7ffU >> 0xb;
    }
    uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    FUN_0014bf00(param_8,*(undefined4 *)(param_1 + 0x18),0,0,0,0);
  }
  if (-1 < param_9) {
    iVar3 = param_9 * 0x14 + iGpffff89d4;
    iVar4 = *(int *)(iVar3 + 0x20);
    if (iVar4 == 0) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    else {
      uVar2 = iVar4 + 0x7ffU >> 0xb;
    }
    uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    FUN_0014bf00(param_9,*(undefined4 *)(param_1 + 0x1c),0,0,0,0);
  }
  if (-1 < param_10) {
    iVar3 = param_10 * 0x14 + iGpffff89d4;
    iVar4 = *(int *)(iVar3 + 0x20);
    if (iVar4 == 0) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    else {
      uVar2 = iVar4 + 0x7ffU >> 0xb;
    }
    uVar1 = Mem_AllocAligned(uVar2 << 0xb,0x40,0x430750);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    FUN_0014bf00(param_10,*(undefined4 *)(param_1 + 0x20),0,0,0,0);
  }
  return;
}

// 0x002c1eb0  size 0x294
void FUN_002c1eb0(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_20;
  int iStack_1c;
  int aiStack_18 [2];
  int iStack_10;
  int iStack_c;
  int aiStack_8 [2];
  
  puVar2 = (undefined1 *)FUN_00177070(param_2);
  uVar4 = FUN_0017e1e0();
  uVar5 = FUN_0017e6e0();
  uVar6 = FUN_0017e720();
  iVar3 = FUN_0017e1a0(uVar4,*puVar2,uVar5,uVar6);
  if (((&DAT_0032f535)[(uint)bGpffff9120 * 6] == '\x05') &&
     (cVar1 = FUN_00177050(), cVar1 == '\x02')) {
    FUN_0017d9e0(1,*(undefined4 *)(iVar3 + 0xc),param_1 + 0xcc,param_1 + 0xd0,param_1 + 0xd4);
    iVar9 = 0;
    do {
      if (iVar9 == 0) {
        FUN_0017d9e0(1,*(undefined4 *)(iVar3 + 0x140),param_1 + 0xd8,param_1 + 0xdc,param_1 + 0xe0);
      }
      else if (*(int *)(iVar3 + 0x13c) < *(int *)(iVar3 + 0x140)) {
        FUN_0017d9e0(1,*(int *)(iVar3 + 0x13c),&iStack_10,&iStack_c,aiStack_8);
        FUN_0017d9e0(1,*(undefined4 *)(iVar3 + 0x140),&iStack_20,&iStack_1c,aiStack_18);
        iVar7 = aiStack_8[0] + iStack_c * 1000 + iStack_10 * 60000;
        iVar8 = aiStack_18[0] + iStack_1c * 1000 + iStack_20 * 60000;
        if (iVar7 < iVar8) {
          iVar8 = iVar8 - iVar7;
        }
        else if (iVar8 < iVar7) {
          iVar8 = iVar7 - iVar8;
        }
        else {
          iVar8 = 0;
        }
        *(int *)(param_1 + 0xd8) = iVar8 / 60000;
        *(int *)(param_1 + 0xdc) = (iVar8 / 1000) % 0x3c;
        *(int *)(param_1 + 0xe0) = iVar8 % 1000;
      }
      else {
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
      }
      iVar9 = iVar9 + 1;
      param_1 = param_1 + 0xc;
      iVar3 = iVar3 + 4;
    } while (iVar9 < 10);
  }
  return;
}

// 0x002c2150  size 0x150
void FUN_002c2150(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  puVar2 = (undefined1 *)FUN_00177070(param_2);
  iVar3 = FUN_001dc240((char)param_2);
  uVar5 = FUN_0017e1f0();
  uVar6 = FUN_0017e6e0();
  uVar7 = FUN_0017e720();
  iVar4 = FUN_0017e140(uVar5,*puVar2,uVar6,uVar7);
  if (((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x05') &&
     (cVar1 = FUN_00177050(), cVar1 == '\x01')) {
    iVar9 = 0;
    iVar8 = param_1;
    do {
      *(undefined4 *)(iVar8 + 0xa4) = 0;
      iVar9 = iVar9 + 3;
      *(undefined4 *)(iVar8 + 0xa8) = 0;
      *(undefined4 *)(iVar8 + 0xac) = 0;
      iVar8 = iVar8 + 0xc;
    } while (iVar9 < 9);
    iVar8 = 0;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar4 + 0x10);
    do {
      if (*(int *)(iVar3 + 0xfc) != -1) {
        iVar9 = param_1 + *(int *)(iVar3 + 0xfc) * 4;
        *(int *)(iVar9 + 0xa4) = *(int *)(iVar9 + 0xa4) + *(int *)(iVar4 + 400);
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + 0x1c;
      iVar4 = iVar4 + 4;
    } while (iVar8 < 0x46);
  }
  return;
}

// 0x002c22a0  size 0x158
void FUN_002c22a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if ((&DAT_0032f535)[(uint)bRam0036f810 * 6] == '\x05') {
    puVar2 = (undefined1 *)FUN_00177070(0);
    cVar1 = FUN_00177050();
    if (cVar1 == '\x01') {
      uVar4 = FUN_0017e1f0();
      uVar5 = FUN_0017e6e0();
      uVar6 = FUN_0017e720();
      iVar3 = FUN_0017e140(uVar4,*puVar2,uVar5,uVar6);
      *(uint *)((int)param_1 + 0x9c) = (uint)(*(int *)(iVar3 + 0x10) == 0);
    }
    else {
      cVar1 = FUN_00177050();
      if (cVar1 == '\x02') {
        uVar4 = FUN_0017e1e0();
        uVar5 = FUN_0017e6e0();
        uVar6 = FUN_0017e720();
        iVar3 = FUN_0017e1a0(uVar4,*puVar2,uVar5,uVar6);
        *(uint *)((int)param_1 + 0x9c) = (uint)(*(int *)(iVar3 + 0xc) == 0);
      }
    }
  }
  FUN_002c1eb0(param_1,param_2);
  uVar7 = FUN_001dc290();
  if ((uVar7 & 2) != 0) {
    FUN_002c2150(param_1,param_2);
  }
  return;
}

// 0x002c2400  size 0x21c
void FUN_002c2400(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  param_1 = param_1 + (param_2 & 0xff) * 0x24;
  piVar6 = (int *)(param_1 + 4);
  if (((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
     (*(int *)(param_1 + 0x1c) != 0)) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    iVar1 = *piVar6;
    iVar2 = *(int *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0xc) * 0x14;
    iVar3 = iVar4 + iVar1;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar5 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
    *(undefined4 *)(iVar4 + iVar1 + 0x314) = 0;
    *(int *)(iVar3 + 0x31c) = iVar2;
    *puVar5 = 1;
    iVar1 = *piVar6;
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(param_1 + 0x10) * 0x14;
    iVar3 = iVar4 + iVar1;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar5 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
    *(undefined4 *)(iVar4 + iVar1 + 0x314) = 0;
    *(int *)(iVar3 + 0x31c) = iVar2;
    *puVar5 = 1;
    FUN_00200fc0(0);
  }
  if ((*piVar6 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    *(undefined1 *)(param_1 + 0x24) = 1;
    iVar1 = *piVar6;
    iVar2 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x14) * 0x14;
    iVar3 = iVar4 + iVar1;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar5 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
    *(undefined4 *)(iVar4 + iVar1 + 0x314) = 1;
    *(int *)(iVar3 + 0x31c) = iVar2;
    *puVar5 = 1;
  }
  return;
}

// 0x002c2620  size 0x84
void FUN_002c2620(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x18) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x24;
  } while (uVar1 < 4);
  return;
}

// 0x002c26b0  size 0x254
void FUN_002c26b0(undefined1 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x340] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x408) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x404) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x388) = 0xffffffff;
  *(undefined4 *)(param_1 + 900) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x380) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x37c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x374) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x370) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x354) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x318) = 0;
  lVar1 = FUN_001834a0();
  iVar5 = 0;
  *(uint *)(param_1 + 0x31c) = lVar1 != 0 ^ 1;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  puVar3 = param_1;
  puVar4 = param_1;
  puVar2 = param_1;
  do {
    *(undefined4 *)(puVar4 + 0x1f0) = 0;
    iVar5 = iVar5 + 1;
    *(undefined4 *)(puVar4 + 500) = 0;
    *(undefined4 *)(puVar4 + 0x1f8) = 0;
    *(undefined4 *)(puVar3 + 0x278) = 0;
    *(undefined4 *)(puVar3 + 0x27c) = 0;
    *(undefined4 *)(puVar3 + 0x280) = 0;
    *(undefined4 *)(puVar3 + 0x284) = 0;
    *(undefined4 *)(puVar4 + 0xd8) = 0;
    puVar3 = puVar3 + 0x10;
    *(undefined4 *)(puVar4 + 0xdc) = 0;
    *(undefined4 *)(puVar4 + 0xe0) = 0;
    *(undefined4 *)(puVar2 + 0xa4) = 0;
    puVar4 = puVar4 + 0xc;
    *(undefined4 *)(puVar2 + 0x154) = 0;
    *(undefined4 *)(puVar2 + 0x17c) = 0;
    *(undefined4 *)(puVar2 + 0x1ac) = 0;
    puVar2 = puVar2 + 4;
  } while (iVar5 < 10);
  FUN_002c17c0(param_1);
  return;
}

// 0x002c2910  size 0x74
void FUN_002c2910(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_002062d0(5,0x60);
  if (*(int *)((int)param_1 + 0x104) == 0) {
    FUN_002c3de0(param_1,9);
  }
  else {
    FUN_002c3de0(param_1,10);
    lVar1 = thunk_FUN_001e8fc0();
    uVar2 = 7;
    if (lVar1 == 0) {
      uVar2 = 2;
    }
    FUN_002c3eb0(param_1,uVar2);
  }
  return;
}

// 0x002c2990  size 0x108
void FUN_002c2990(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_002062d0(5,0x60);
  lVar2 = thunk_FUN_001e8fc0();
  iVar4 = (int)param_1;
  if (lVar2 == 0) {
    uVar1 = (uint)*(char *)(iVar4 + 0xf4);
  }
  else {
    uVar1 = 2;
  }
  switch((&PTR_DAT_0032f370)[(uVar1 & 0xff) * 2][*(int *)(iVar4 + 0xf8) * 0x14]) {
  default:
    FUN_002c3890(param_1,2);
    break;
  case 1:
    *(undefined4 *)(iVar4 + 0xf0) = 6;
    lVar2 = thunk_FUN_001e8fc0();
    uVar3 = 6;
    if (lVar2 == 0) {
      uVar3 = 1;
    }
    FUN_002c3eb0(param_1,uVar3);
    break;
  case 5:
    FUN_002c3890(param_1,3);
    break;
  case 6:
    FUN_002c3890(param_1,4);
    break;
  case 7:
    FUN_002c3890(param_1,5);
  }
  return;
}

// 0x002c2aa0  size 0x184
undefined4 FUN_002c2aa0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = (int)param_1;
  bVar1 = *(int *)(iVar2 + 0xfc) != 0;
  uVar4 = 0;
  if (*piGpffff8d78 != 1) {
    *piGpffff8d78 = 1;
  }
  uVar3 = piGpffff8d78[bVar1 + 2];
  if ((piGpffff8d78[bVar1 + 4] & uVar3) == 0) {
    uVar3 = 0x100000;
  }
  else if (uVar3 == 0x80000) {
    uVar3 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar3 = 0x100000;
  }
  if (uVar3 == 0x20) {
    FUN_002062d0(6,0x60);
    FUN_002c3de0(param_1,9);
    uVar4 = 1;
  }
  else if (uVar3 == 0x10) {
    FUN_002c2910(param_1);
    uVar4 = 1;
  }
  else if (uVar3 == 2) {
    if (*(int *)(iVar2 + 0x104) == 0) {
      FUN_002062d0(8,0x60);
      *(undefined4 *)(iVar2 + 0x104) = 0;
    }
    else {
      FUN_002062d0(7,0x60);
      *(undefined4 *)(iVar2 + 0x104) = 0;
    }
  }
  else {
    if (uVar3 != 1) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x104) == 0) {
      FUN_002062d0(7,0x60);
    }
    else {
      FUN_002062d0(8,0x60);
    }
    *(undefined4 *)(iVar2 + 0x104) = 1;
  }
  return uVar4;
}

// 0x002c2c30  size 0x668
undefined4 FUN_002c2c30(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  
  lVar8 = thunk_FUN_001e8fc0();
  iVar14 = (int)param_1;
  if (lVar8 == 0) {
    uVar7 = (uint)*(char *)(iVar14 + 0xf4);
  }
  else {
    uVar7 = 2;
  }
  uVar7 = uVar7 & 0xff;
  iVar2 = *(int *)(iVar14 + 0xf8);
  uVar15 = 0;
  iVar3 = *(int *)(&DAT_0032f374 + uVar7 * 8);
  bVar5 = true;
  lVar8 = thunk_FUN_001e8fc0();
  lVar9 = thunk_FUN_001e8fc0();
  cVar11 = '\v';
  if (lVar9 == 0) {
    cVar11 = '\x06';
  }
  uVar13 = (ulong)(lVar8 == 0);
  if (uVar13 < (ulong)(long)cVar11) {
    iVar12 = iVar14 + (lVar8 == 0) * 0x14;
    do {
      if ((*(char *)(iVar12 + 0x14) == '\x01') || (*(char *)(iVar12 + 0x15) == '\x01')) {
        bVar5 = false;
      }
      uVar13 = (ulong)((int)uVar13 + 1);
      iVar12 = iVar12 + 0x14;
    } while (uVar13 < (ulong)(long)cVar11);
  }
  if (!bVar5) {
    return 0;
  }
  bVar5 = *(int *)(iVar14 + 0xfc) != 0;
  if (*piGpffff8d78 != 1) {
    *piGpffff8d78 = 1;
  }
  uVar10 = piGpffff8d78[bVar5 + 2];
  if ((piGpffff8d78[bVar5 + 4] & uVar10) == 0) {
    uVar10 = 0x100000;
  }
  else if (uVar10 == 0x80000) {
    uVar10 = 0x80000;
  }
  else if (*piGpffff8d78 != 1) {
    uVar10 = 0x100000;
  }
  if (uVar10 == 0x40) {
LAB_002c3178:
    FUN_002062d0(6,0x60);
    FUN_002c3890(param_1,2);
    uVar15 = 1;
  }
  else {
    if (uVar10 == 0x20) {
      FUN_001833f0(*(undefined1 *)(iVar14 + 0x108));
      FUN_00183380(*(undefined1 *)(iVar14 + 0x10c));
      FUN_001834b0(*(undefined4 *)(iVar14 + 0x110));
      goto LAB_002c3178;
    }
    if (uVar10 == 0x10) {
      FUN_002c2990(param_1);
      uVar15 = 1;
    }
    else if (uVar10 == 8) {
      cVar11 = (&PTR_DAT_0032f370)[uVar7 * 2][*(int *)(iVar14 + 0xf8) * 0x14];
      if (cVar11 == '\x04') {
        iVar3 = *(int *)(iVar14 + 0x114);
        *(undefined4 *)(iVar14 + 0x114) = 0;
        if (iVar3 == *(int *)(iVar14 + 0x114)) {
          FUN_002062d0(8,0x60);
          uVar4 = *(undefined4 *)(iVar14 + 0x114);
        }
        else {
          FUN_002062d0(7,0x60);
          uVar4 = *(undefined4 *)(iVar14 + 0x114);
        }
        FUN_001834b0(uVar4);
      }
      else if (cVar11 == '\x03') {
        sVar1 = *(short *)(iVar14 + 0x10e);
        *(short *)(iVar14 + 0x10e) = sVar1 + 1;
        sVar6 = *(short *)(iVar14 + 0x10e);
        if (sVar6 < 0) {
          *(undefined2 *)(iVar14 + 0x10e) = 0;
        }
        else {
          if (0xf < sVar6) {
            sVar6 = 0xf;
          }
          *(short *)(iVar14 + 0x10e) = sVar6;
        }
        if (sVar1 == *(short *)(iVar14 + 0x10e)) {
          FUN_002062d0(8,0x60);
        }
        else {
          FUN_002062d0(7,0x60);
          FUN_00183380(*(undefined1 *)(iVar14 + 0x10e));
        }
      }
      else if (cVar11 == '\x02') {
        sVar1 = *(short *)(iVar14 + 0x10a);
        *(short *)(iVar14 + 0x10a) = sVar1 + 1;
        sVar6 = *(short *)(iVar14 + 0x10a);
        if (sVar6 < 0) {
          *(undefined2 *)(iVar14 + 0x10a) = 0;
        }
        else {
          if (0xf < sVar6) {
            sVar6 = 0xf;
          }
          *(short *)(iVar14 + 0x10a) = sVar6;
        }
        if (sVar1 == *(short *)(iVar14 + 0x10a)) {
          FUN_002062d0(8,0x60);
        }
        else {
          FUN_002062d0(7,0x60);
          FUN_001833f0(*(undefined1 *)(iVar14 + 0x10a));
        }
      }
    }
    else if (uVar10 == 4) {
      cVar11 = (&PTR_DAT_0032f370)[uVar7 * 2][*(int *)(iVar14 + 0xf8) * 0x14];
      if (cVar11 == '\x04') {
        iVar3 = *(int *)(iVar14 + 0x114);
        *(undefined4 *)(iVar14 + 0x114) = 1;
        if (iVar3 == *(int *)(iVar14 + 0x114)) {
          FUN_002062d0(8,0x60);
          uVar4 = *(undefined4 *)(iVar14 + 0x114);
        }
        else {
          FUN_002062d0(7,0x60);
          uVar4 = *(undefined4 *)(iVar14 + 0x114);
        }
        FUN_001834b0(uVar4);
      }
      else if (cVar11 == '\x03') {
        sVar1 = *(short *)(iVar14 + 0x10e);
        *(short *)(iVar14 + 0x10e) = sVar1 + -1;
        sVar6 = *(short *)(iVar14 + 0x10e);
        if (sVar6 < 0) {
          *(undefined2 *)(iVar14 + 0x10e) = 0;
        }
        else {
          if (0xf < sVar6) {
            sVar6 = 0xf;
          }
          *(short *)(iVar14 + 0x10e) = sVar6;
        }
        if (sVar1 == *(short *)(iVar14 + 0x10e)) {
          FUN_002062d0(8,0x60);
        }
        else {
          FUN_002062d0(7,0x60);
          FUN_00183380(*(undefined1 *)(iVar14 + 0x10e));
        }
      }
      else if (cVar11 == '\x02') {
        sVar1 = *(short *)(iVar14 + 0x10a);
        *(short *)(iVar14 + 0x10a) = sVar1 + -1;
        sVar6 = *(short *)(iVar14 + 0x10a);
        if (sVar6 < 0) {
          *(undefined2 *)(iVar14 + 0x10a) = 0;
        }
        else {
          if (0xf < sVar6) {
            sVar6 = 0xf;
          }
          *(short *)(iVar14 + 0x10a) = sVar6;
        }
        if (sVar1 == *(short *)(iVar14 + 0x10a)) {
          FUN_002062d0(8,0x60);
        }
        else {
          FUN_002062d0(7,0x60);
          FUN_001833f0(*(undefined1 *)(iVar14 + 0x10a));
        }
      }
    }
    else if (uVar10 == 2) {
      *(int *)(iVar14 + 0xf8) = *(int *)(iVar14 + 0xf8) + 1;
      uVar10 = *(uint *)(iVar14 + 0xf8);
      if ((int)uVar10 < 0) {
        uVar10 = iVar3 - 1;
      }
      else if (iVar3 - 1U < uVar10) {
        uVar10 = 0;
      }
      *(uint *)(iVar14 + 0xf8) = uVar10;
    }
    else {
      if (uVar10 != 1) {
        iVar14 = *(int *)(iVar14 + 0xf8);
        goto LAB_002c3198;
      }
      *(int *)(iVar14 + 0xf8) = *(int *)(iVar14 + 0xf8) + -1;
      uVar10 = *(uint *)(iVar14 + 0xf8);
      if ((int)uVar10 < 0) {
        uVar10 = iVar3 - 1;
      }
      else if (iVar3 - 1U < uVar10) {
        uVar10 = 0;
      }
      *(uint *)(iVar14 + 0xf8) = uVar10;
    }
  }
  iVar14 = *(int *)(iVar14 + 0xf8);
LAB_002c3198:
  if (iVar2 != iVar14) {
    FUN_002c40d0(param_1,(&PTR_DAT_0032f370)[uVar7 * 2][iVar14 * 0x14 + 8]);
    FUN_002c3eb0(param_1,(&PTR_DAT_0032f370)[uVar7 * 2][iVar2 * 0x14 + 8]);
  }
  return uVar15;
}

// 0x002c32a0  size 0x5e8
void FUN_002c32a0(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 auStack_1a0 [48];
  undefined4 auStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 auStack_c0 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 auStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_60 [4];
  undefined4 auStack_50 [4];
  undefined4 auStack_40 [4];
  undefined4 auStack_30 [4];
  undefined4 auStack_20 [4];
  undefined4 auStack_10 [4];
  
  puVar11 = (undefined4 *)param_1;
  iVar4 = puVar11[0x3e];
  cVar2 = *(char *)((int)puVar11 + 0x10a);
  cVar3 = *(char *)((int)puVar11 + 0x10e);
  iVar5 = puVar11[0x45];
  lVar10 = thunk_FUN_001e8fc0();
  if (lVar10 == 0) {
    uVar9 = (uint)*(char *)(puVar11 + 0x3d);
  }
  else {
    uVar9 = 2;
  }
  uVar9 = uVar9 & 0xff;
  puVar14 = &DAT_0032f470;
  puVar13 = auStack_1a0;
  iVar12 = 0x18;
  auStack_10[0] = DAT_0032f388;
  auStack_10[1] = DAT_0032f38c;
  auStack_10[2] = DAT_0032f390;
  auStack_20[0] = DAT_0032f398;
  auStack_20[1] = DAT_0032f39c;
  auStack_20[2] = DAT_0032f3a0;
  auStack_30[0] = DAT_0032f3a8;
  auStack_30[1] = DAT_0032f3ac;
  auStack_30[2] = DAT_0032f3b0;
  auStack_40[1] = DAT_0032f3bc;
  auStack_40[0] = DAT_0032f3b8;
  auStack_50[1] = DAT_0032f3cc;
  auStack_40[2] = DAT_0032f3c0;
  auStack_50[0] = DAT_0032f3c8;
  auStack_60[2] = DAT_0032f3e0;
  auStack_50[2] = DAT_0032f3d0;
  auStack_80[3] = DAT_0032f3fc;
  auStack_60[0] = DAT_0032f3d8;
  auStack_60[1] = DAT_0032f3dc;
  auStack_80[0] = DAT_0032f3f0;
  auStack_80[1] = DAT_0032f3f4;
  auStack_80[2] = DAT_0032f3f8;
  uStack_6c = DAT_0032f404;
  uStack_70 = DAT_0032f400;
  auStack_a0[1] = DAT_0032f414;
  auStack_a0[0] = DAT_0032f410;
  auStack_a0[3] = DAT_0032f41c;
  auStack_a0[2] = DAT_0032f418;
  uStack_8c = DAT_0032f424;
  uStack_90 = DAT_0032f420;
  auStack_c0[1] = DAT_0032f434;
  auStack_c0[0] = DAT_0032f430;
  auStack_c0[3] = DAT_0032f43c;
  auStack_c0[2] = DAT_0032f438;
  uStack_ac = DAT_0032f444;
  uStack_b0 = DAT_0032f440;
  auStack_e0[1] = DAT_0032f454;
  auStack_e0[0] = DAT_0032f450;
  auStack_e0[3] = DAT_0032f45c;
  auStack_e0[2] = DAT_0032f458;
  uStack_d0 = DAT_0032f460;
  uStack_cc = DAT_0032f464;
  do {
    iVar12 = iVar12 + -1;
    uVar15 = puVar14[1];
    *puVar13 = *puVar14;
    puVar13[1] = uVar15;
    puVar14 = puVar14 + 2;
    puVar13 = puVar13 + 2;
  } while (0 < iVar12);
  lVar10 = FUN_002c2c30(param_1);
  if (lVar10 == 0) {
    if (puVar11[0x3e] != iVar4) {
      FUN_002062d0(7,0x60);
    }
    FUN_002c54e0(*puVar11,auStack_10[uVar9],9,cVar2);
    FUN_002c54e0(*puVar11,auStack_40[uVar9],9,cVar3);
    FUN_001eea30(*puVar11,auStack_30[uVar9],0x16,auStack_1a0[uVar9 * 0x10 + (int)cVar2]);
    FUN_001eea30(*puVar11,auStack_60[uVar9],0x16,auStack_1a0[uVar9 * 0x10 + (int)cVar3]);
    FUN_001eea30(*puVar11,auStack_20[uVar9],9,cVar2 == '\0');
    FUN_001eea30(*puVar11,auStack_50[uVar9],9,cVar3 == '\0');
    uVar1 = (uGpffff89dc / 10) % 6;
    if (cVar2 == '\0') {
      uVar15 = 0;
    }
    else {
      uVar15 = 0x3f800000;
    }
    uVar16 = auStack_a0[uVar9 * 2];
    FUN_001eeb00(uVar15,*puVar11,uVar16,8);
    if (cVar2 == '\x0f') {
      uVar15 = 0;
    }
    else {
      uVar15 = 0x3f800000;
    }
    uVar6 = auStack_a0[uVar9 * 2 + 1];
    FUN_001eeb00(uVar15,*puVar11,uVar6,8);
    if (cVar3 == '\0') {
      uVar15 = 0;
    }
    else {
      uVar15 = 0x3f800000;
    }
    uVar7 = auStack_c0[uVar9 * 2];
    FUN_001eeb00(uVar15,*puVar11,uVar7,8);
    if (cVar3 == '\x0f') {
      uVar15 = 0;
    }
    else {
      uVar15 = 0x3f800000;
    }
    uVar8 = auStack_c0[uVar9 * 2 + 1];
    FUN_001eeb00(uVar15,*puVar11,uVar8,8);
    FUN_001f5380(*puVar11,uVar16,9,uVar1);
    FUN_001f5380(*puVar11,uVar6,9,uVar1);
    FUN_001f5380(*puVar11,uVar7,9,uVar1);
    FUN_001f5380(*puVar11,uVar8,9,uVar1);
    if (iVar5 == 0) {
      uVar16 = 0;
      uVar15 = auStack_80[uVar9 * 2];
    }
    else {
      uVar16 = 0x3f800000;
      uVar15 = auStack_80[uVar9 * 2];
    }
    FUN_001eeb00(uVar16,*puVar11,uVar15,8);
    if (iVar5 == 0) {
      uVar16 = 0x3f800000;
      uVar15 = auStack_80[uVar9 * 2 + 1];
    }
    else {
      uVar16 = 0;
      uVar15 = auStack_80[uVar9 * 2 + 1];
    }
    FUN_001eeb00(uVar16,*puVar11,uVar15,8);
    lVar10 = thunk_FUN_001e8fc0();
    if (lVar10 == 0) {
      uVar15 = puVar11[1];
    }
    else {
      uVar15 = puVar11[2];
    }
    if ((&PTR_DAT_0032f370)[uVar9 * 2][puVar11[0x3e] * 0x14] == '\x04') {
      FUN_00200d70(uVar15,auStack_e0[uVar9 * 2 + (iVar5 != 0 ^ 1)],0,0);
    }
    else {
      iVar4 = *(int *)((&PTR_DAT_0032f370)[uVar9 * 2] + puVar11[0x3e] * 0x14 + 4);
      if (iVar4 != -1) {
        FUN_00200d70(uVar15,iVar4,1,0);
      }
    }
  }
  return;
}

// 0x002c3890  size 0x74
void FUN_002c3890(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = thunk_FUN_001e8fc0();
  uVar2 = 6;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  lVar1 = thunk_FUN_001e8fc0();
  *(uint *)((int)param_1 + 0xf0) = param_2 & 0xff;
  uVar3 = 7;
  if (lVar1 == 0) {
    uVar3 = 2;
  }
  FUN_002c3eb0(param_1,uVar2);
  FUN_002c3eb0(param_1,uVar3);
  return;
}

// 0x002c3910  size 0x1bc
int FUN_002c3910(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  
  piVar5 = (int *)param_1;
  iVar10 = 1;
  if (*(char *)((int)piVar5 + 0x15) == '\x01') {
    if (*(int *)(piVar5[7] * 0x14 + piVar5[3] + 0x318) == 0) {
      *(undefined1 *)((int)piVar5 + 0x15) = 2;
    }
    else {
      iVar10 = 0;
      FUN_001ecd80();
    }
  }
  lVar4 = thunk_FUN_001e8fc0();
  cVar9 = '\x06';
  if (lVar4 == 0) {
    cVar9 = '\x01';
  }
  if (iVar10 != 0) {
    piVar5[0x40] = 0;
    piVar5[0x41] = 0;
    iVar8 = (int)cVar9;
    piVar5[0x3c] = 0;
    *(undefined1 *)(piVar5 + iVar8 * 5 + 5) = 0;
    *(undefined1 *)((int)piVar5 + iVar8 * 0x14 + 0x15) = 0;
    iVar1 = piVar5[iVar8 * 5 + 8];
    iVar2 = piVar5[iVar8 * 5 + 6];
    iVar3 = *piVar5;
    iVar6 = iVar2 * 0x14 + iVar3;
    *(undefined4 *)(iVar6 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x31c) = 0;
    *(undefined4 *)(iVar6 + 0x30c) = 0;
    if (*(int *)(iVar6 + 0x31c) == 0) {
      *(undefined4 *)(iVar6 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x318) = 1;
    }
    puVar7 = (undefined4 *)(iVar6 + 0x318);
    *(undefined4 *)(iVar6 + 0x30c) = 0;
    if (*(int *)(iVar6 + 0x31c) == 0) {
      *puVar7 = 0;
    }
    else {
      *puVar7 = 1;
    }
    *(undefined4 *)(iVar2 * 0x14 + iVar3 + 0x314) = 0;
    *(int *)(iVar6 + 0x31c) = iVar1;
    *puVar7 = 1;
    iVar1 = piVar5[iVar8 * 5 + 9];
    iVar2 = piVar5[iVar8 * 5 + 7];
    iVar3 = *piVar5;
    iVar8 = iVar2 * 0x14 + iVar3;
    *(undefined4 *)(iVar8 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x31c) = 0;
    *(undefined4 *)(iVar8 + 0x30c) = 0;
    if (*(int *)(iVar8 + 0x31c) == 0) {
      *(undefined4 *)(iVar8 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 0x318) = 1;
    }
    puVar7 = (undefined4 *)(iVar8 + 0x318);
    *(undefined4 *)(iVar8 + 0x30c) = 0;
    if (*(int *)(iVar8 + 0x31c) == 0) {
      *puVar7 = 0;
    }
    else {
      *puVar7 = 1;
    }
    *(undefined4 *)(iVar2 * 0x14 + iVar3 + 0x314) = 0;
    *(int *)(iVar8 + 0x31c) = iVar1;
    *puVar7 = 1;
    FUN_002c40d0(param_1);
  }
  return iVar10;
}

// 0x002c3ad0  size 0x200
long FUN_002c3ad0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  
  lVar7 = 1;
  lVar2 = thunk_FUN_001e8fc0();
  cVar1 = '\x06';
  if (lVar2 == 0) {
    cVar1 = '\x01';
  }
  uVar6 = (ulong)cVar1;
  lVar2 = thunk_FUN_001e8fc0();
  cVar4 = '\v';
  if (lVar2 == 0) {
    cVar4 = '\x06';
  }
  piVar8 = (int *)param_1;
  if (uVar6 < (ulong)(long)cVar4) {
    piVar5 = piVar8 + cVar1 * 5;
    do {
      if (*(char *)((int)piVar5 + 0x15) == '\x01') {
        if (*(int *)(*piVar8 + piVar5[7] * 0x14 + 0x318) == 0) {
          *(undefined1 *)((int)piVar5 + 0x15) = 2;
        }
        else {
          lVar7 = 0;
          FUN_001ecd80();
        }
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      piVar5 = piVar5 + 5;
    } while (uVar6 < (ulong)(long)cVar4);
  }
  if (lVar7 == 0) {
    return 0;
  }
  iVar3 = piVar8[0x3c];
  if (iVar3 == 6) {
    FUN_002c3f90(param_1);
  }
  else if (iVar3 == 3) {
    FUN_001e9120(0x80000);
    FUN_001e9120(2);
    FUN_002ccbd0();
  }
  else if (iVar3 == 4) {
    FUN_001e9120(0x80000);
    FUN_001e9120(0x10);
    FUN_002ccbd0();
  }
  else if (iVar3 == 5) {
    cVar1 = FUN_0017e8d0();
    if (cVar1 == '\x05') {
      FUN_001e9120(8);
      iVar3 = piVar8[0x3c];
      goto LAB_002c3bf8;
    }
    FUN_00180160();
  }
  iVar3 = piVar8[0x3c];
LAB_002c3bf8:
  if (iVar3 - 2U < 4) {
    if ((iVar3 == 2) || (iVar3 == 5)) {
      FUN_001e9120(0x20);
    }
    piVar8[0x3c] = 0xb;
    *piVar8 = 0;
    piVar8[3] = 0;
    FUN_002cfb70(3);
  }
  return lVar7;
}

// 0x002c3cd0  size 0x10c
void FUN_002c3cd0(int *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int *piVar5;
  ulong uVar6;
  
  bVar1 = true;
  lVar2 = thunk_FUN_001e8fc0();
  lVar3 = thunk_FUN_001e8fc0();
  cVar4 = '\v';
  if (lVar3 == 0) {
    cVar4 = '\x06';
  }
  uVar6 = (ulong)(lVar2 == 0);
  if (uVar6 < (ulong)(long)cVar4) {
    piVar5 = param_1 + (lVar2 == 0) * 5;
    do {
      if ((char)piVar5[5] == '\x01') {
        if (*(int *)(*param_1 + piVar5[6] * 0x14 + 0x318) == 0) {
          *(undefined1 *)(piVar5 + 5) = 2;
        }
        else {
          bVar1 = false;
          FUN_001ecd80();
        }
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      piVar5 = piVar5 + 5;
    } while (uVar6 < (ulong)(long)cVar4);
  }
  if ((bVar1) && (param_1[0x3c] == 0)) {
    param_1[0x3c] = 1;
  }
  return;
}

// 0x002c3de0  size 0xcc
void FUN_002c3de0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*(int *)(*(int *)(param_1 + 0x18) * 0x14 + *(int *)(param_1 + 0xc) + 0x318) == 0) {
    *(uint *)(param_1 + 0xf0) = param_2 & 0xff;
    *(undefined1 *)(param_1 + 0x15) = 1;
    *(undefined1 *)(param_1 + 0x14) = 0;
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 0x1c) * 0x14;
    iVar3 = iVar5 + iVar2;
    *(undefined4 *)(iVar3 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x31c) = 0;
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *(undefined4 *)(iVar3 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x318) = 1;
    }
    puVar4 = (undefined4 *)(iVar3 + 0x318);
    *(undefined4 *)(iVar3 + 0x30c) = 0;
    if (*(int *)(iVar3 + 0x31c) == 0) {
      *puVar4 = 0;
    }
    else {
      *puVar4 = 1;
    }
    *(undefined4 *)(iVar5 + iVar2 + 0x314) = 0;
    *(int *)(iVar3 + 0x31c) = iVar1;
    *puVar4 = 1;
  }
  return;
}

// 0x002c3eb0  size 0xdc
void FUN_002c3eb0(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2 != -1) {
    if (((char)param_1[param_2 * 5 + 5] == '\x02') &&
       (*(char *)((int)param_1 + param_2 * 0x14 + 0x15) == '\0')) {
      *(undefined1 *)((int)param_1 + param_2 * 0x14 + 0x15) = 1;
      *(undefined1 *)(param_1 + param_2 * 5 + 5) = 0;
      iVar1 = *param_1;
      iVar2 = param_1[param_2 * 5 + 9];
      iVar3 = param_1[param_2 * 5 + 7];
      iVar4 = iVar3 * 0x14 + iVar1;
      *(undefined4 *)(iVar4 + 0x310) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x31c) = 0;
      *(undefined4 *)(iVar4 + 0x30c) = 0;
      if (*(int *)(iVar4 + 0x31c) == 0) {
        *(undefined4 *)(iVar4 + 0x318) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + 0x318) = 1;
      }
      puVar5 = (undefined4 *)(iVar4 + 0x318);
      *(undefined4 *)(iVar4 + 0x30c) = 0;
      if (*(int *)(iVar4 + 0x31c) == 0) {
        *puVar5 = 0;
      }
      else {
        *puVar5 = 1;
      }
      *(undefined4 *)(iVar3 * 0x14 + iVar1 + 0x314) = 0;
      *(int *)(iVar4 + 0x31c) = iVar2;
      *puVar5 = 1;
    }
  }
  return;
}

// 0x002c3f90  size 0x134
void FUN_002c3f90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  
  lVar4 = thunk_FUN_001e8fc0();
  cVar5 = '\x06';
  if (lVar4 == 0) {
    cVar5 = '\x01';
  }
  if ((*(int *)(*param_1 + 0x318 + param_1[cVar5 * 5 + 6] * 0x14) == 0) &&
     (*(int *)(*param_1 + 0x318 + param_1[cVar5 * 5 + 7] * 0x14) == 0)) {
    param_1[0x3c] = 7;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + cVar5 * 5 + 5) = 0;
    *(undefined1 *)((int)param_1 + cVar5 * 0x14 + 0x15) = 0;
    iVar1 = param_1[6];
    iVar2 = param_1[3];
    iVar3 = param_1[8];
    iVar6 = iVar1 * 0x14 + iVar2;
    *(undefined4 *)(iVar6 + 0x310) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x31c) = 0;
    *(undefined4 *)(iVar6 + 0x30c) = 0;
    if (*(int *)(iVar6 + 0x31c) == 0) {
      *(undefined4 *)(iVar6 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0x318) = 1;
    }
    puVar7 = (undefined4 *)(iVar6 + 0x318);
    *(undefined4 *)(iVar6 + 0x30c) = 0;
    if (*(int *)(iVar6 + 0x31c) == 0) {
      *puVar7 = 0;
    }
    else {
      *puVar7 = 1;
    }
    *(undefined4 *)(iVar1 * 0x14 + iVar2 + 0x314) = 0;
    *(int *)(iVar6 + 0x31c) = iVar3;
    *puVar7 = 1;
  }
  return;
}

