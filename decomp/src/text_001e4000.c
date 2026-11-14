// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001e4000 - 0x001e8000
#include "ghidra_types.h"

// 0x001e43b0  size 0x4d4
void FUN_001e43b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [32];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar1 = FUN_0017e8d0();
  if ((cVar1 == '\x04') && (*(char *)(*(int *)(iRam0036f1fc + 0x14) + 0x4f8) == '\x03')) {
    uRam00430668 = 0;
    uRam0043066c = 0;
  }
  else {
    uVar9 = 0;
    pbVar8 = &DAT_0031c2e0;
    do {
      iVar5 = ((uint)*pbVar8 * 0x18 - (uint)*pbVar8) * 0x40;
      iVar7 = iVar5 + 0x431100;
      if (*(int *)(iVar5 + 0x431684) != 0) {
        iVar5 = *(int *)(pbVar8 + 4);
        uStack_10 = DAT_0031c300;
        fStack_c = DAT_0031c304;
        uStack_50 = DAT_0031c310;
        uStack_8 = DAT_0031c308;
        uStack_4 = DAT_0031c30c;
        uStack_4c = DAT_0031c314;
        uStack_48 = DAT_0031c318;
        uStack_44 = DAT_0031c31c;
        iVar2 = *(int *)(param_1 + iVar5 * 4 + 0x1c);
        puVar6 = (uint *)(iVar2 + 0x110);
        if ((*(uint *)(iVar2 + 0x110) & 0xc) == 0) {
          if (iVar5 == 0) {
            uRam00430668 = 0;
          }
          else {
            uRam0043066c = 0;
          }
        }
        else {
          if (iVar5 == 0) {
            uRam00430668 = 1;
          }
          else {
            uRam0043066c = 1;
          }
          if ((*puVar6 & 8) == 0) {
            fStack_c = DAT_0031c304 - 0.02;
          }
          uVar3 = FUN_001ca6b0(iVar5);
          uVar4 = FUN_001ca770(uVar3);
          iVar2 = (int)uVar3;
          uStack_d0 = *(undefined4 *)(iVar2 + 0xe0);
          uStack_cc = *(undefined4 *)(iVar2 + 0xe4);
          uStack_c8 = *(undefined4 *)(iVar2 + 0xe8);
          uStack_c4 = *(undefined4 *)(iVar2 + 0xec);
          uStack_c0 = *(undefined4 *)(iVar2 + 0xf0);
          uStack_bc = *(undefined4 *)(iVar2 + 0xf4);
          uStack_b8 = *(undefined4 *)(iVar2 + 0xf8);
          uStack_b4 = *(undefined4 *)(iVar2 + 0xfc);
          uStack_b0 = *(undefined4 *)(iVar2 + 0x100);
          uStack_ac = *(undefined4 *)(iVar2 + 0x104);
          uStack_a8 = *(undefined4 *)(iVar2 + 0x108);
          uStack_a4 = *(undefined4 *)(iVar2 + 0x10c);
          uStack_a0 = *(undefined4 *)(iVar2 + 0x110);
          uStack_9c = *(undefined4 *)(iVar2 + 0x114);
          uStack_98 = *(undefined4 *)(iVar2 + 0x118);
          uStack_94 = *(undefined4 *)(iVar2 + 0x11c);
          iVar2 = FUN_001d2280(uVar4,0xc);
          fVar10 = ((float)iVar2 + 5.0) / 5.0 - 1.0;
          FUN_00133090(auStack_90);
          FUN_00132ae0(auStack_90,&uStack_d0);
          FUN_00132ae0(auStack_80,&uStack_c0);
          FUN_00132ae0(auStack_70,&uStack_b0);
          FUN_00132ae0(auStack_20,&uStack_a0);
          FUN_00132d50(auStack_30,auStack_90,&uStack_10);
          FUN_00132ae0(auStack_e0,auStack_20);
          fStack_dc = fStack_dc + 0.4;
          if (iVar5 == 0) {
            FUN_00132ae0(0x430680,auStack_20);
            FUN_00132ae0(0x4306a0,auStack_30);
          }
          else {
            FUN_00132ae0(0x430690,auStack_20);
            FUN_00132ae0(0x4306b0,auStack_30);
          }
          FUN_00132d50(&uStack_50,auStack_90,&uStack_50);
          FUN_001328b0(auStack_30,auStack_30);
          FUN_001328b0(&uStack_50,&uStack_50);
          FUN_00132b10(0x40000000,auStack_40,auStack_30);
          FUN_00132b70(auStack_20,auStack_20,auStack_40);
          if ((*puVar6 & 8) == 0) {
            FUN_001443a0(fVar10 + 0.6,fVar10 + 1.0,iVar7,auStack_20,auStack_30,&uStack_50);
          }
          else {
            FUN_001443a0(fVar10 + 0.65,fVar10 + 1.2,iVar7,auStack_20,auStack_30,&uStack_50);
          }
        }
      }
      uVar9 = uVar9 + 1;
      pbVar8 = pbVar8 + 8;
    } while (uVar9 < 3);
  }
  return;
}

// 0x001e48a0  size 0x874
void FUN_001e48a0(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (iGpffff8c5c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((char)param_4 * 4 + iGpffff8c5c + 8);
  }
  iVar3 = FUN_001ca770(param_3);
  if ((*(uint *)(iVar3 + 4) & 0x100) == 0) {
    *param_2 = *param_2 & 0xfffff7ff;
  }
  else {
    *param_2 = *param_2 | 0x800;
  }
  if (*(short *)(iVar3 + 0xc) == 0x11e) {
    uVar4 = FUN_001ca730(param_3);
    if ((uVar4 & 0x8000) == 0) {
      fVar7 = (float)FUN_001ca7c0(param_3);
      if (80.0 < fVar7) {
        FUN_001ca720(param_3,0x10000);
      }
      uVar4 = FUN_001ca730(param_3);
      if ((uVar4 & 0x10000) != 0) {
        fVar7 = (float)FUN_001ca7c0(param_3);
        if (10.0 <= fVar7) {
          fVar7 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar7 + 0.02);
          if (1.0 <= fVar7 + 0.02) {
            param_2[0xdf] = 0x3f800000;
            FUN_001ca720(param_3,0x8000);
            FUN_001ca700(param_3,0x10000);
          }
        }
        else {
          fVar7 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar7 - 0.02);
          if (fVar7 - 0.02 <= 0.0) {
            param_2[0xdf] = 0;
            FUN_001ca700(param_3,0x10000);
          }
        }
      }
    }
    else {
      fVar7 = (float)FUN_001ca7c0(param_3);
      if (fVar7 < 10.0) {
        FUN_001ca720(param_3,0x10000);
      }
      uVar4 = FUN_001ca730(param_3);
      if ((uVar4 & 0x10000) != 0) {
        fVar7 = (float)FUN_001ca7c0(param_3);
        if (80.0 < fVar7) {
          fVar7 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar7 + 0.02);
          if (1.0 <= fVar7 + 0.02) {
            param_2[0xdf] = 0x3f800000;
            FUN_001ca700(param_3,0x10000);
          }
        }
        else {
          fVar7 = (float)param_2[0xdf];
          param_2[0xdf] = (uint)(fVar7 - 0.02);
          if (fVar7 - 0.02 <= 0.0) {
            param_2[0xdf] = 0;
            FUN_001ca700(param_3,0x8000);
            FUN_001ca700(param_3,0x10000);
          }
        }
      }
    }
  }
  iVar3 = FUN_001ca770(param_3);
  uVar4 = FUN_001ca730(param_3);
  iVar6 = (int)param_3;
  if (((uVar4 & 0x1000) == 0) && (uVar4 = FUN_001ca730(param_3), (uVar4 & 0x2000) == 0)) {
    *(undefined4 *)(iVar6 + 0x17c4) = 0;
    *param_2 = *param_2 & 0xfffffe7f;
  }
  else {
    *(int *)(iVar6 + 0x17c4) = *(int *)(iVar6 + 0x17c4) + 1;
    if (0x31 < *(int *)(iVar6 + 0x17c4)) {
      *(undefined4 *)(iVar6 + 0x17c4) = 0;
    }
  }
  uVar4 = FUN_001ca730(param_3);
  if ((uVar4 & 0x1000) == 0) {
    *param_2 = *param_2 & 0xffffff7f;
  }
  else if (*(int *)(iVar6 + 0x17c4) % 0x32 < 0x19) {
    *param_2 = *param_2 | 0x80;
  }
  else {
    *param_2 = *param_2 & 0xffffff7f;
  }
  uVar4 = FUN_001ca730(param_3);
  if ((uVar4 & 0x2000) == 0) {
    *param_2 = *param_2 & 0xfffffeff;
  }
  else if (*(int *)(iVar6 + 0x17c4) % 0x32 < 0x19) {
    *param_2 = *param_2 | 0x100;
  }
  else {
    *param_2 = *param_2 & 0xfffffeff;
  }
  uVar4 = FUN_001ca730(param_3);
  if (((uVar4 & 0x10) != 0) && (*(int *)(iVar6 + 0x17bc) != 0)) {
    *(int *)(iVar6 + 0x17bc) = *(int *)(iVar6 + 0x17bc) + -1;
  }
  uVar4 = FUN_001ca730(param_3);
  if ((uVar4 & 0x20) == 0) {
    uVar4 = FUN_001ca730(param_3);
    if ((uVar4 & 0x40) != 0) {
      uVar2 = FUN_001d20f0(iVar3 + 0xc);
      iVar3 = FUN_001771b0(uVar2);
      if (*(int *)(iVar3 + 0x90) == 0) {
        FUN_001ca700(param_3,0x10);
        param_2[0xdd] = 0;
        FUN_001ca700(param_3,0x40);
      }
      else if (*(int *)(iVar6 + 0x17bc) == 0) {
        FUN_001ca700(param_3,0x10);
        fVar7 = (float)param_2[0xdd];
        param_2[0xdd] = (uint)(fVar7 - 0.05);
        if (fVar7 - 0.05 <= 0.0) {
          param_2[0xdd] = 0;
          FUN_001ca700(param_3,0x40);
        }
      }
    }
  }
  else {
    FUN_001ca700(param_3,0x40);
    iVar3 = FUN_001771b0(*(undefined1 *)(iVar3 + 9));
    if (*(int *)(iVar3 + 0x90) == 0) {
      param_2[0xdd] = 0x3f800000;
      FUN_001ca700(param_3,0x20);
      FUN_001ca720(param_3,0x10);
      *(undefined4 *)(iVar6 + 0x17bc) = 0;
      uVar4 = FUN_001ca730(param_3);
      if ((uVar4 & 0x80) != 0) {
        *(undefined4 *)(iVar6 + 0x17c0) = 3;
      }
    }
    else {
      fVar7 = (float)param_2[0xdd];
      param_2[0xdd] = (uint)(fVar7 + 0.05);
      if (1.0 <= fVar7 + 0.05) {
        param_2[0xdd] = 0x3f800000;
        FUN_001ca700(param_3,0x20);
        FUN_001ca720(param_3,0x10);
        *(undefined4 *)(iVar6 + 0x17bc) = 0x14;
        uVar4 = FUN_001ca730(param_3);
        if ((uVar4 & 0x80) != 0) {
          *(undefined4 *)(iVar6 + 0x17c0) = 3;
        }
      }
    }
  }
  uVar4 = FUN_001ca730(param_3);
  if (((uVar4 & 8) == 0) || (uVar4 = FUN_001ca730(param_3), (uVar4 & 0x10) == 0)) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  else {
    *param_2 = *param_2 | 4;
  }
  cVar1 = FUN_00177780();
  if (cVar1 == '\x01') {
    uVar4 = FUN_001ca730(param_3);
    if ((uVar4 & 8) == 0) {
      *param_2 = *param_2 & 0xffffffef;
    }
    else {
      cVar1 = FUN_00177790();
      if (((cVar1 == '\x03') || (cVar1 == '\x04')) ||
         ((cVar1 == '\x05' || ((cVar1 == '\x02' || (cVar1 == '\x01')))))) {
        *param_2 = *param_2 | 0x10;
      }
      else {
        *param_2 = *param_2 & 0xffffffef;
      }
    }
  }
  else {
    cVar1 = FUN_00177790();
    if ((((cVar1 == '\x03') || (cVar1 == '\x04')) || (cVar1 == '\x05')) ||
       ((cVar1 == '\x02' || (cVar1 == '\x01')))) {
      *param_2 = *param_2 | 0x10;
    }
    else {
      *param_2 = *param_2 & 0xffffffef;
    }
  }
  uVar4 = FUN_001ca730(param_3);
  if ((uVar4 & 0x80) == 0) {
    iVar3 = *(int *)(iVar6 + 0x17c0);
LAB_001e4e1c:
    if (iVar3 == 0) {
      *param_2 = *param_2 & 0xfffffff7;
      goto LAB_001e4e50;
    }
  }
  else {
    uVar4 = FUN_001ca730(param_3);
    if ((uVar4 & 0x10) == 0) {
      iVar3 = *(int *)(iVar6 + 0x17c0);
      goto LAB_001e4e1c;
    }
  }
  if (*(int *)(iVar6 + 0x17c0) != 0) {
    *(int *)(iVar6 + 0x17c0) = *(int *)(iVar6 + 0x17c0) + -1;
  }
  *param_2 = *param_2 | 8;
LAB_001e4e50:
  uVar4 = FUN_001ca730(param_3);
  if ((uVar4 & 0x4000) == 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  else {
    *param_2 = *param_2 | 0x20;
  }
  if (((*(uint *)(iVar5 + 0x10) & 0x200) == 0) || (*(int *)(iVar6 + 0x814) != -1)) {
    *param_2 = *param_2 & 0xffffffbf;
  }
  else {
    *param_2 = *param_2 | 0x40;
  }
  cVar1 = FUN_0017e8d0();
  if (cVar1 == '\x04') {
    cVar1 = FUN_0017e760();
    if (cVar1 == '\x01') {
      param_2[0xe0] = 1;
    }
    else {
      param_2[0xe0] = 0;
    }
  }
  else if ((param_4 == 0) || (cVar1 = FUN_0017e760(), cVar1 != '\x01')) {
    param_2[0xe0] = 0;
  }
  else {
    param_2[0xe0] = 1;
  }
  if ((*(char *)(*(int *)(iGpffff8b0c + 0x14) + 0x4f8) == '\x03') || (iRam0046a594 != 0)) {
    param_2[0xe4] = 0;
  }
  else {
    param_2[0xe4] = 1;
  }
  param_2[0xe1] = 1;
  return;
}

// 0x001e5120  size 0x398
void FUN_001e5120(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (iGpffff8c5c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((char)param_4 * 4 + iGpffff8c5c + 8);
  }
  iVar2 = FUN_001ca770(param_3);
  if ((*(uint *)(iVar2 + 4) & 0x100) != 0) {
    *param_2 = *param_2 | 0x800;
  }
  cVar1 = FUN_00177780();
  if (cVar1 == '\x01') {
    *param_2 = *param_2 | 0x400;
    cVar1 = FUN_0017e8d0();
    if (cVar1 == '\x06') {
      *param_2 = *param_2 | 4;
      param_2[0xdd] = 0x3f800000;
      FUN_001ca720(param_3,8);
      FUN_001ca720(param_3,0x10);
    }
    uVar3 = FUN_001ca730(param_3);
    if ((uVar3 & 8) == 0) {
      *param_2 = *param_2 & 0xfffffffb;
      param_2[0xdd] = 0x3f800000;
    }
    else {
      *param_2 = *param_2 | 4;
      param_2[0xdd] = 0x3f800000;
    }
  }
  else {
    *param_2 = *param_2 & 0xfffffffb;
    param_2[0xdd] = 0;
  }
  cVar1 = FUN_00177780();
  if (cVar1 == '\x01') {
    uVar3 = FUN_001ca730(param_3);
    if ((uVar3 & 8) == 0) {
      *param_2 = *param_2 & 0xffffffef;
    }
    else {
      cVar1 = FUN_00177790();
      if (((cVar1 == '\x03') || (cVar1 == '\x05')) ||
         ((cVar1 == '\x04' || ((cVar1 == '\x02' || (cVar1 == '\x01')))))) {
        *param_2 = *param_2 | 0x10;
      }
      else {
        *param_2 = *param_2 & 0xffffffef;
      }
    }
  }
  else {
    cVar1 = FUN_00177790();
    if ((((cVar1 == '\x03') || (cVar1 == '\x05')) || (cVar1 == '\x04')) ||
       ((cVar1 == '\x02' || (cVar1 == '\x01')))) {
      *param_2 = *param_2 | 0x10;
    }
    else {
      *param_2 = *param_2 & 0xffffffef;
    }
  }
  uVar3 = FUN_001ca730(param_3);
  if ((uVar3 & 0x4000) == 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  else {
    *param_2 = *param_2 | 0x20;
  }
  if (iVar4 != 0) {
    if (((*(uint *)(iVar4 + 0x10) & 0x200) == 0) || (*(int *)((int)param_3 + 0x814) != -1)) {
      *param_2 = *param_2 & 0xffffffbf;
    }
    else {
      *param_2 = *param_2 | 0x40;
    }
    if ((*(uint *)(iVar4 + 0x10) & 0x1000) == 0) {
      *param_2 = *param_2 & 0xfffffeff;
    }
    else {
      *param_2 = *param_2 | 0x100;
    }
    if ((*(uint *)(iVar4 + 0x10) & 0x800) == 0) {
      *param_2 = *param_2 & 0xffffff7f;
    }
    else {
      *param_2 = *param_2 | 0x80;
    }
  }
  cVar1 = FUN_0017e8d0();
  if (cVar1 == '\x04') {
    cVar1 = FUN_0017e760();
    if (cVar1 == '\x01') {
      param_2[0xe0] = 1;
    }
    else {
      param_2[0xe0] = 0;
    }
  }
  else if ((param_4 == 0) || (cVar1 = FUN_0017e760(), cVar1 != '\x01')) {
    param_2[0xe0] = 0;
  }
  else {
    param_2[0xe0] = 1;
  }
  return;
}

// 0x001e54c0  size 0x208
void FUN_001e54c0(undefined4 *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 auStack_200 [64];
  undefined4 auStack_100 [64];
  
  if (iGpffff8b08 == 0) {
    FUN_0018d870(0x42c80000,param_1 + 0x14,100,1);
    FUN_0018d870(0x42c80000,param_1 + 0x388,100,1);
  }
  else {
    FUN_0018d870(0x42c80000,param_1 + 0x14,100,1);
    FUN_0018d870(0x42c80000,param_1 + 0x388,0x32,1);
    FUN_0018d870(0x42c80000,param_1 + 0x6fc,0x32,2);
  }
  if (param_2 == 0) {
    param_1[6] = 3;
  }
  else {
    param_1[6] = 0;
  }
  param_1[4] = 0;
  iVar7 = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar6 = param_1;
  do {
    lVar3 = FUN_001ca6b0(iVar7);
    iVar1 = FUN_00177070(iVar7);
    if (lVar3 == 0) {
      if (puVar6[7] != 0) {
        FUN_0019ce40();
        puVar6[7] = 0;
      }
    }
    else if ((*(uint *)(iVar1 + 4) & 0x80) == 0) {
      if (puVar6[7] != 0) {
        FUN_001e5120(param_1,puVar6[7] + 0x110,lVar3,iVar7);
      }
    }
    else {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffff7f;
      if (puVar6[7] != 0) {
        FUN_0019ce40();
      }
      FUN_00177110(auStack_200,*(undefined1 *)(iVar1 + 9));
      puVar5 = auStack_200;
      puVar4 = auStack_100;
      iVar1 = 0x20;
      do {
        iVar1 = iVar1 + -1;
        uVar2 = puVar5[1];
        *puVar4 = *puVar5;
        puVar4[1] = uVar2;
        puVar5 = puVar5 + 2;
        puVar4 = puVar4 + 2;
      } while (0 < iVar1);
      uVar2 = FUN_00198270(auStack_100);
      puVar6[7] = uVar2;
      FUN_001e5120(param_1,puVar6[7] + 0x110,lVar3,iVar7);
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar7 < 3);
  FUN_0017bce0();
  return;
}

// 0x001e56d0  size 0x84
void FUN_001e56d0(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined4 uStack_10;
  
  auStack_30[0] = 2;
  uStack_14 = 2;
  uStack_28 = 6;
  uStack_10 = 3;
  uStack_2c = 3;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_00198df0(0x430750,auStack_30);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  FUN_002d36c0(0x430750);
  FUN_001e54c0(param_1,1);
  return;
}

// 0x001e57a0  size 0x34
void FUN_001e57a0(int param_1)

{
  FUN_001e56d0(*(undefined4 *)(param_1 + 0x14));
  *(undefined1 **)(param_1 + 0x1c) = &LAB_001e5760;
  return;
}

// 0x001e57f0  size 0x148
void FUN_001e57f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar2 = FUN_002cfb30(0);
  iVar1 = *(int *)(iVar2 + 0xb0);
  iVar8 = 0;
  lVar6 = FUN_00177270();
  if (lVar6 < 1) {
    uVar3 = *(uint *)(iVar2 + 4);
  }
  else {
    do {
      iVar4 = FUN_002cfb30(iVar8);
      uVar7 = FUN_001e5f30(param_1,iVar8);
      FUN_001e5d80(param_1,iVar8,uVar7);
      FUN_001e5b50(param_1,iVar8);
      iVar8 = iVar8 + 1;
      *(int *)(iVar4 + 0xb8) = *(int *)(iVar4 + 0xb8) + 1;
      iVar4 = FUN_00177270();
    } while (iVar8 < iVar4);
    uVar3 = *(uint *)(iVar2 + 4);
  }
  if ((uVar3 & 0x100) == 0) {
    uVar7 = FUN_001dc240(0);
    uVar5 = FUN_001e0540(uVar7);
    *(undefined4 *)(iVar2 + 0xb0) = uVar5;
  }
  else {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffeff;
    if ((*(uint *)(iVar2 + 4) & 0x20) == 0) {
      if (*(int *)(iVar2 + 0xb4) < iVar1) {
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x400;
      }
      else {
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x200;
      }
    }
  }
  uVar7 = FUN_001dc240(0);
  uVar7 = FUN_001e0540(uVar7);
  FUN_002cfac0(uVar7);
  return;
}

// 0x001e5940  size 0x130
void FUN_001e5940(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = 0;
  lVar5 = FUN_00177230();
  if (0 < lVar5) {
    do {
      iVar2 = FUN_002cfb30(iVar8);
      uVar6 = FUN_001dc260((char)iVar8);
      uVar3 = FUN_001dcdc0(uVar6);
      *(undefined4 *)(iVar2 + 0x8c) = uVar3;
      iVar4 = *(int *)(iVar2 + 0x8c);
      iVar1 = *(int *)(iVar2 + 0x90);
      piVar7 = (int *)(iVar2 + 0x90);
      if (iVar1 < iVar4) {
        if (iVar1 + 10000 < iVar4) {
          *piVar7 = *piVar7 + 10000;
        }
        else {
          *piVar7 = iVar4;
        }
      }
      else if (iVar4 < iVar1) {
        if (iVar4 < iVar1 + -10000) {
          *piVar7 = iVar1 + -10000;
        }
        else {
          *piVar7 = iVar4;
        }
      }
      if (((float)*(int *)(iVar2 + 0x8c) / 5e+06 < 0.25) && (lVar5 = FUN_001e9010(), lVar5 == 0)) {
        *(int *)(iVar2 + 0x94) = *(int *)(iVar2 + 0x94) + 1;
      }
      iVar8 = iVar8 + 1;
      iVar4 = FUN_00177230();
    } while (iVar8 < iVar4);
  }
  return;
}

// 0x001e5a90  size 0xa4
void FUN_001e5a90(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = FUN_00177270();
  if (0 < lVar2) {
    do {
      iVar1 = FUN_002cfb30(iVar4);
      uVar3 = FUN_001e5f30(param_1,iVar4);
      FUN_001e5d80(param_1,iVar4,uVar3);
      FUN_001e5b50(param_1,iVar4);
      iVar4 = iVar4 + 1;
      *(int *)(iVar1 + 0xb8) = *(int *)(iVar1 + 0xb8) + 1;
      iVar1 = FUN_00177270();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001e5b50  size 0x224
void FUN_001e5b50(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar1 = FUN_002cfb30(param_2);
  uVar4 = FUN_001dc240((char)param_2);
  iVar2 = FUN_001e0530(uVar4);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffff7f;
  uVar5 = FUN_001ca6b0(param_2);
  uVar6 = FUN_001ca730(uVar5);
  if (((uVar6 & 0x100) != 0) && (iVar2 < *(int *)(iVar1 + 0xa4))) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80;
  }
  iVar3 = *(int *)(iVar1 + 0xa4);
  if (iVar3 < iVar2) {
    if (iVar3 + 0x28 < iVar2) {
      *(int *)(iVar1 + 0xa4) = *(int *)(iVar1 + 0xa4) + 0x28;
    }
    else {
      *(int *)(iVar1 + 0xa4) = iVar2;
    }
  }
  else if (iVar2 < iVar3) {
    if (iVar2 < iVar3 + -0x28) {
      *(int *)(iVar1 + 0xa4) = iVar3 + -0x28;
    }
    else {
      *(int *)(iVar1 + 0xa4) = iVar2;
    }
  }
  if (*(int *)(iVar1 + 0x98) == -1) {
    return;
  }
  iVar3 = FUN_001e04d0(uVar4);
  iVar2 = *(int *)(iVar1 + 0xa8);
  if (iVar2 < iVar3) {
    if (iVar2 + 0x28 < iVar3) {
      *(int *)(iVar1 + 0xa8) = *(int *)(iVar1 + 0xa8) + 0x28;
    }
    else {
      *(int *)(iVar1 + 0xa8) = iVar3;
    }
  }
  else if (iVar3 < iVar2) {
    if (iVar3 < iVar2 + -0x28) {
      *(int *)(iVar1 + 0xa8) = iVar2 + -0x28;
    }
    else {
      *(int *)(iVar1 + 0xa8) = iVar3;
    }
  }
  if (iVar3 - iVar2 < 1) {
    lVar7 = thunk_FUN_001e8fc0();
    if ((lVar7 == 0) && ((param_2 == 0 || (uVar6 = FUN_002cfad0(), (uVar6 & 1) != 0)))) {
      FUN_002c6090(0,param_2);
      iVar2 = *(int *)(iVar1 + 0x98);
      goto LAB_001e5cc8;
    }
  }
  else {
    lVar7 = thunk_FUN_001e8fc0();
    if ((lVar7 == 0) && ((param_2 == 0 || (uVar6 = FUN_002cfad0(), (uVar6 & 1) != 0)))) {
      FUN_002c6090(1,param_2);
    }
  }
  iVar2 = *(int *)(iVar1 + 0x98);
LAB_001e5cc8:
  iVar2 = iVar2 * 0x1c + (int)uVar4;
  *(int *)(iVar1 + 0xb4) = *(int *)(iVar2 + 0x100) + *(int *)(iVar2 + 0x104);
  return;
}

// 0x001e5d80  size 0x1a4
void FUN_001e5d80(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_002cfb30(param_2);
  if (param_3 == -1) {
    iVar4 = FUN_001dc240((char)param_2);
    if (*(int *)(iVar3 + 0x9c) != *(int *)(iVar3 + 0x98)) {
      *(undefined4 *)(iVar3 + 0xb8) = 0;
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffffb;
      *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar3 + 0x98);
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 8;
      cVar2 = FUN_00177050();
      if (cVar2 == '\a') {
        *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x100;
      }
      uVar1 = *(uint *)(*(int *)(iVar3 + 0x98) * 0x1c + iVar4 + 0x10c);
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 0x10) != 0) {
          *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x10;
        }
      }
      else {
        *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x20;
        *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x40;
        cVar2 = FUN_00177050();
        if (cVar2 == '\a') {
          *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x400;
        }
      }
    }
  }
  else if (*(int *)(iVar3 + 0x98) != param_3) {
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffff7;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffffffef;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffffffdf;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffffffbf;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffeff;
    *(undefined4 *)(iVar3 + 0xa8) = 0;
    *(int *)(iVar3 + 0x98) = param_3;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 4;
  }
  return;
}

// 0x001e5f30  size 0x9c
int FUN_001e5f30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_002cfb30(param_2);
  iVar2 = FUN_001dc240((char)param_2);
  iVar4 = -1;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar2 + 0xf8) == -1) {
      return iVar4;
    }
    if ((*(uint *)(iVar2 + 0x10c) & 0xe) == 0) {
      if ((*(uint *)(iVar2 + 0x10c) & 1) != 0) {
        iVar4 = iVar3;
      }
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) + 1;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x1c;
  } while (iVar3 < 0x46);
  return iVar4;
}

// 0x001e5fd0  size 0xa4
void FUN_001e5fd0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar2 = FUN_00177270();
  if (0 < lVar2) {
    do {
      iVar1 = FUN_002cfb30(iVar4);
      uVar3 = FUN_001e5f30(param_1,iVar4);
      FUN_001e5d80(param_1,iVar4,uVar3);
      FUN_001e5b50(param_1,iVar4);
      iVar4 = iVar4 + 1;
      *(int *)(iVar1 + 0xb8) = *(int *)(iVar1 + 0xb8) + 1;
      iVar1 = FUN_00177270();
    } while (iVar4 < iVar1);
  }
  return;
}

// 0x001e6080  size 0x130
void FUN_001e6080(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = 0;
  lVar5 = FUN_00177230();
  if (0 < lVar5) {
    do {
      iVar2 = FUN_002cfb30(iVar7);
      uVar6 = FUN_001dc260((char)iVar7);
      uVar3 = FUN_001dcdc0(uVar6);
      *(undefined4 *)(iVar2 + 0x8c) = uVar3;
      iVar4 = *(int *)(iVar2 + 0x8c);
      iVar1 = *(int *)(iVar2 + 0x90);
      if (iVar1 < iVar4) {
        if (iVar1 + 10000 < iVar4) {
          *(int *)(iVar2 + 0x90) = *(int *)(iVar2 + 0x90) + 10000;
        }
        else {
          *(int *)(iVar2 + 0x90) = iVar4;
        }
      }
      else if (iVar4 < iVar1) {
        if (iVar4 < iVar1 + -10000) {
          *(int *)(iVar2 + 0x90) = iVar1 + -10000;
        }
        else {
          *(int *)(iVar2 + 0x90) = iVar4;
        }
      }
      if (((float)*(int *)(iVar2 + 0x8c) / 5e+06 < 0.25) && (lVar5 = FUN_001e9010(), lVar5 == 0)) {
        *(int *)(iVar2 + 0x94) = *(int *)(iVar2 + 0x94) + 1;
      }
      iVar7 = iVar7 + 1;
      iVar4 = FUN_00177230();
    } while (iVar7 < iVar4);
  }
  return;
}

// 0x001e61c0  size 0x380
void FUN_001e61c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  iVar1 = FUN_002cfb30(param_2);
  uVar5 = FUN_001ca6b0(param_2);
  uVar13 = FUN_001ca7c0(uVar5);
  *(undefined4 *)(iVar1 + 0x14) = uVar13;
  uVar13 = FUN_001ca7b0(uVar5);
  *(undefined4 *)(iVar1 + 0x2c) = uVar13;
  iVar12 = (int)uVar5;
  iVar11 = 0;
  iVar10 = 0;
  *(float *)(iVar1 + 0x44) = *(float *)(iVar12 + 0xac0) - 1.0;
  iVar4 = iVar1;
  do {
    iVar2 = FUN_002cfb20();
    pfVar3 = (float *)(iVar2 + iVar10);
    *(float *)(iVar4 + 0x18) =
         pfVar3[1] +
         ((*pfVar3 - pfVar3[1]) * (*(float *)(iVar4 + 0x14) - *(float *)(iVar4 + 0x10))) /
         (*(float *)(iVar4 + 0xc) - *(float *)(iVar4 + 0x10));
    fVar14 = *(float *)(iVar4 + 0x1c) + pfVar3[2];
    if (*(float *)(iVar4 + 0x18) <= fVar14) {
      fVar14 = *(float *)(iVar4 + 0x1c) - pfVar3[2];
      if (*(float *)(iVar4 + 0x18) < fVar14) {
        *(float *)(iVar4 + 0x18) = fVar14;
      }
    }
    else {
      *(float *)(iVar4 + 0x18) = fVar14;
    }
    if (*(float *)(iVar4 + 0x18) <= *pfVar3) {
      if (*(float *)(iVar4 + 0x18) < pfVar3[1]) {
        *(float *)(iVar4 + 0x18) = pfVar3[1];
      }
    }
    else {
      *(float *)(iVar4 + 0x18) = *pfVar3;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 0x18;
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar4 + 0x18);
    iVar4 = iVar4 + 0x18;
  } while (iVar11 < 3);
  cVar9 = (char)param_2;
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar12 + 0x814);
  uVar6 = FUN_001dc200(cVar9);
  iVar4 = FUN_001dcdd0(uVar6);
  *(undefined1 *)(iVar1 + 0x7c) = *(undefined1 *)(iVar4 + 8);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined1 *)(iVar1 + 0x84) = *(undefined1 *)(iVar4 + 0x10);
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(iVar4 + 0x14);
  uVar13 = FUN_001ca6e0(uVar5);
  *(undefined4 *)(iVar1 + 0x60) = uVar13;
  uVar7 = FUN_001dc290();
  if ((uVar7 & 4) != 0) {
    uVar6 = FUN_001dc220(cVar9);
    FUN_001dcc70(uVar6,iVar1 + 0xbc,iVar1 + 0xc0,iVar1 + 0xc4);
  }
  if (iRam0036f34c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(cVar9 * 4 + iRam0036f34c + 8);
  }
  *(uint *)(iVar1 + 0x5c) = (uint)(0.0 < *(float *)(iVar4 + 0xc));
  fVar14 = *(float *)(iVar12 + 0xbd0) / 100.0;
  *(float *)(iVar1 + 0x54) = fVar14;
  if (1.0 <= fVar14) {
    *(undefined4 *)(iVar1 + 0x54) = 0x3f800000;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
  }
  else {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
    if (*(float *)(iVar1 + 0x54) < 0.0) {
      *(undefined4 *)(iVar1 + 0x54) = 0;
    }
  }
  fVar14 = 0.0;
  iVar4 = 0;
  do {
    fVar15 = (float)FUN_00167a60(uVar5,iVar4);
    iVar4 = iVar4 + 1;
    fVar14 = fVar14 + fVar15;
  } while (iVar4 < 4);
  fVar14 = (fVar14 / 4.0) / 0.7;
  *(float *)(iVar1 + 0x58) = fVar14;
  if (1.0 <= fVar14) {
    *(undefined4 *)(iVar1 + 0x58) = 0x3f800000;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  }
  else {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
  }
  *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + 1;
  uVar7 = FUN_001ca730(uVar5);
  if (((uVar7 & 0x100) == 0) || (cVar9 = FUN_001dc1b0(), cVar9 != '\x03')) {
    *(undefined4 *)(iVar1 + 0x74) = 0;
  }
  else {
    lVar8 = FUN_001e9010();
    if (lVar8 == 0) {
      *(int *)(iVar1 + 0x74) = *(int *)(iVar1 + 0x74) + 1;
    }
  }
  return;
}

// 0x001e6550  size 0x14c
void FUN_001e6550(void)

{
  char cVar1;
  long lVar2;
  
  cVar1 = FUN_001dc1b0();
  if (cVar1 == '\x05') {
    if (*(int *)(iRam0036f804 + 0x288) == 0) {
      cVar1 = FUN_002cfb60();
      if (cVar1 != '\x04') {
        FUN_002cfb70();
      }
    }
    else {
      cVar1 = FUN_002cfb60();
      if (cVar1 != '\x02') {
        FUN_002cfb70();
      }
    }
  }
  else if (cVar1 == '\x03') {
    lVar2 = FUN_001e9010();
    if (lVar2 == 0) {
      cVar1 = FUN_002cfb60();
      if (cVar1 == '\x05') {
        FUN_002cfb70(3);
      }
    }
    else {
      cVar1 = FUN_002cfb60();
      if (cVar1 == '\x03') {
        FUN_002062d0(9,0x60);
        FUN_002cfb70(5);
      }
    }
  }
  else if (((cVar1 == '\x01') && (cVar1 = FUN_002cfb60(), cVar1 != '\x01')) &&
          (cVar1 = FUN_002cfb60(), cVar1 != '\x03')) {
    FUN_002cfb70(1);
  }
  return;
}

// 0x001e66a0  size 0x280
void FUN_001e66a0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  lVar3 = FUN_002cf9b0();
  if ((lVar3 == 0) && (cVar1 = FUN_001dc1b0(), cVar1 != '\0')) {
    if (iRam0046a590 == 0) {
      FUN_001e6550(param_1);
      lVar3 = thunk_FUN_001e8fc0();
      if (lVar3 != 0) {
        FUN_002cfb00(4);
        if (*piRam0036f468 != 1) {
          *piRam0036f468 = 1;
        }
        uVar5 = piRam0036f468[2];
        if ((piRam0036f468[4] & uVar5) == 0) {
          uVar5 = 0x100000;
        }
        else if (uVar5 == 0x80000) {
          uVar5 = 0x80000;
        }
        else if (*piRam0036f468 != 1) {
          uVar5 = 0x100000;
        }
        if (((uVar5 == 0x10) && (lVar3 = FUN_001e9010(), lVar3 == 0)) &&
           (uVar4 = FUN_002cfad0(), (uVar4 & 1) == 0)) {
          FUN_002cfae0(8);
          *(undefined4 *)(iRam0036f804 + 0x3b70) = 0x3f800000;
        }
      }
      FUN_00178390();
      uVar7 = FUN_00177730();
      FUN_002cfab0(uVar7);
      iVar6 = 0;
      lVar3 = FUN_00177230();
      if (0 < lVar3) {
        do {
          FUN_001e61c0(param_1,iVar6);
          iVar6 = iVar6 + 1;
          iVar2 = FUN_00177230();
        } while (iVar6 < iVar2);
      }
      FUN_00101180(param_1);
      uVar4 = FUN_002cfad0();
      if ((uVar4 & 1) == 0) {
        iVar6 = FUN_002cfb30(0);
        lVar3 = FUN_00183de0(*(undefined4 *)(iRam0036f1fc + 0x14));
        if ((lVar3 == 0) || (lVar3 = thunk_FUN_001e8fc0(), lVar3 != 0)) {
          *(undefined4 *)(iVar6 + 0x70) = 1;
        }
        else {
          *(undefined4 *)(iVar6 + 0x70) = 0;
        }
      }
      FUN_002cf820();
      uVar4 = FUN_002cfad0();
      if ((((uVar4 & 10) != 0) && (cVar1 = FUN_002cfb60(), cVar1 != '\x04')) &&
         ((lVar3 = FUN_001834e0(), lVar3 == 1 && (iRam0036f1f8 == 0)))) {
        if (iRam0036f85c != 0) {
          *(undefined4 *)(iRam0036f85c + 0x1c) = *(undefined4 *)(iRam0036f804 + 0x3b70);
        }
        FUN_002d6e40();
      }
    }
  }
  else {
    FUN_001f4e90(1);
  }
  return;
}

// 0x001e6920  size 0x18c
void FUN_001e6920(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined1 uVar17;
  
  uVar17 = FUN_00177050();
  puVar16 = PTR_LAB_0031c3e0;
  uVar15 = DAT_0031c3dc;
  puVar14 = PTR_FUN_0031c3d0;
  uVar13 = DAT_0031c3cc;
  puVar12 = PTR_FUN_0031c3c0;
  uVar11 = DAT_0031c3bc;
  puVar10 = PTR_LAB_0031c3b0;
  uVar9 = DAT_0031c3ac;
  puVar8 = PTR_FUN_0031c3a0;
  uVar7 = DAT_0031c39c;
  puVar6 = PTR_LAB_0031c390;
  uVar5 = DAT_0031c38c;
  puVar4 = PTR_FUN_0031c380;
  uVar3 = DAT_0031c37c;
  puVar2 = PTR_FUN_0031c370;
  uVar1 = DAT_0031c36c;
  switch(uVar17) {
  case 0:
    *param_1 = DAT_0031c368;
    param_1[1] = uVar1;
    param_1[2] = puVar2;
    break;
  case 1:
    *param_1 = DAT_0031c378;
    param_1[1] = uVar3;
    param_1[2] = puVar4;
    break;
  default:
    *param_1 = DAT_0031c388;
    param_1[1] = uVar5;
    param_1[2] = puVar6;
    break;
  case 3:
    *param_1 = DAT_0031c398;
    param_1[1] = uVar7;
    param_1[2] = puVar8;
    break;
  case 4:
  case 5:
    *param_1 = DAT_0031c3a8;
    param_1[1] = uVar9;
    param_1[2] = puVar10;
    break;
  case 6:
    *param_1 = DAT_0031c3b8;
    param_1[1] = uVar11;
    param_1[2] = puVar12;
    break;
  case 7:
    *param_1 = DAT_0031c3c8;
    param_1[1] = uVar13;
    param_1[2] = puVar14;
    break;
  case 8:
    *param_1 = DAT_0031c3d8;
    param_1[1] = uVar15;
    param_1[2] = puVar16;
  }
  return;
}

// 0x001e6af0  size 0x8c
void FUN_001e6af0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  FUN_00153260(2,9,0,0);
  FUN_001f0760(0x430750,0x1876,0x485);
  FUN_001fe300(0x430750,0);
  FUN_002d1130(0x430750);
  FUN_001e6920(uVar1);
  FUN_001f4e90(1);
  *(undefined1 **)(param_1 + 0x1c) = &LAB_001e6ab0;
  return;
}

// 0x001e6b80  size 0x3d8
void FUN_001e6b80(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong unaff_s1;
  ulong unaff_s2;
  ulong uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  lVar6 = FUN_00177210();
  if (0 < lVar6) {
    iVar10 = 0;
    do {
      lVar6 = FUN_001ca6b0(iVar9);
      if (lVar6 != 0) {
        if (iRam0036f26c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iRam0036f26c + iVar10;
        }
        iVar3 = FUN_001ca770(lVar6);
        sVar2 = FUN_001d20f0(iVar3 + 0xc);
        uVar7 = FUN_001ca770(lVar6);
        uVar7 = FUN_001d2280(uVar7,0);
        switch(uVar7) {
        case 0:
          unaff_s2 = 0;
          break;
        case 1:
          unaff_s2 = 1;
          break;
        case 2:
          unaff_s2 = 1;
          break;
        case 3:
          unaff_s2 = 1;
          break;
        case 4:
          unaff_s2 = 2;
          break;
        case 5:
          unaff_s2 = 2;
          break;
        case 6:
          unaff_s2 = 2;
          break;
        case 7:
          unaff_s2 = 3;
          break;
        case 8:
          unaff_s2 = 3;
        }
        uVar7 = FUN_001ca770(lVar6);
        uVar7 = FUN_001d2280(uVar7,2);
        switch(uVar7) {
        case 0:
          unaff_s1 = 0;
          break;
        case 1:
          unaff_s1 = 1;
          break;
        case 2:
          unaff_s1 = 1;
          break;
        case 3:
          unaff_s1 = 2;
          break;
        case 4:
          unaff_s1 = 2;
          break;
        case 5:
          unaff_s1 = 3;
          break;
        case 6:
          unaff_s1 = 3;
          break;
        case 7:
          unaff_s1 = 3;
          break;
        case 8:
          unaff_s1 = 4;
        }
        if (unaff_s2 < unaff_s1) {
          uVar8 = unaff_s1;
        }
        else {
          uVar8 = unaff_s2;
        }
        iVar3 = FUN_001ca770(lVar6);
        iVar4 = FUN_001771b0(*(undefined1 *)(iVar3 + 9));
        iVar3 = *(int *)(iVar4 + 0x8c);
        FUN_00193140(iVar5,lVar6);
        if (iVar3 == 2) {
          uVar8 = 4;
        }
        if (((sVar2 == 0x9b) || (sVar2 == 0x9d)) || (sVar2 == 0x8b)) {
          (**(code **)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + 8))(*(int *)(iVar5 + 0xc),3,uVar8);
          cVar1 = *(char *)(iVar4 + 0x49);
        }
        else {
          if (((*(uint *)(iVar4 + 0x4c) < 0x5dc) && (*(uint *)(iVar4 + 0x4c) != 0)) &&
             (*(char *)(iVar4 + 0x48) != '\a')) {
            (**(code **)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + 8))(*(int *)(iVar5 + 0xc),0,uVar8);
          }
          else {
            switch(*(char *)(iVar4 + 0x48)) {
            case '\0':
              (**(code **)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + 8))(*(int *)(iVar5 + 0xc),3,uVar8);
              break;
            case '\x01':
              (**(code **)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + 8))(*(int *)(iVar5 + 0xc),3,uVar8);
              break;
            case '\x02':
              (**(code **)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + 8))(*(int *)(iVar5 + 0xc),4,uVar8);
              break;
            case '\x03':
            case '\x04':
              (**(code **)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + 8))(*(int *)(iVar5 + 0xc),1,uVar8);
              break;
            case '\x05':
            case '\x06':
            case '\b':
              (**(code **)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + 8))(*(int *)(iVar5 + 0xc),5,uVar8);
              break;
            case '\a':
              (**(code **)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + 8))(*(int *)(iVar5 + 0xc),2,uVar8);
            }
          }
          cVar1 = *(char *)(iVar4 + 0x49);
        }
        if (cVar1 != '\0') {
          *(uint *)(*(int *)(iVar5 + 0xc) + 4) = *(uint *)(*(int *)(iVar5 + 0xc) + 4) | 0x40;
        }
        cVar1 = FUN_0017e890();
        if (cVar1 == '\x0f') {
          *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 0x14) & 0xfffffffe;
        }
      }
      iVar10 = iVar10 + 0x80;
      iVar9 = iVar9 + 1;
      iVar5 = FUN_00177210();
    } while (iVar9 < iVar5);
  }
  return;
}

// 0x001e6f60  size 0x4d4
void FUN_001e6f60(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  float fVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  byte abStack_50 [80];
  
  iVar5 = FUN_001e9010();
  if (iVar5 == *(int *)(param_1 + 0x18)) {
LAB_001e7340:
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    if (iVar5 == 0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
      uVar2 = FUN_00183470();
      uVar4 = FUN_00192800(uVar2);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
                (*(int **)(param_1 + 0xc),*(undefined1 *)(param_1 + 8),uVar4,0x3f,1);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
      uVar2 = FUN_00183470();
      uVar4 = FUN_00192800(uVar2);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
                (*(int **)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x10),uVar4,0x3f,1);
      *(int *)(param_1 + 0x18) = iVar5;
    }
    fVar10 = DAT_0036e860;
    if (iRam0036f1f8 != 0) goto LAB_001e7340;
    cVar3 = FUN_00183470();
    *(int *)(param_1 + 0x1c) = (int)cVar3;
    lVar7 = FUN_00183600();
    if (lVar7 != 0) {
      uVar8 = FUN_00177070(0);
      uVar8 = FUN_001d2280(uVar8,0xb);
      fVar6 = 1.0;
      switch(uVar8) {
      case 0:
        fVar10 = fVar10 * 0.8;
        goto LAB_001e7114;
      case 1:
        fVar6 = 0.9;
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        fVar6 = 1.1;
        break;
      case 5:
        fVar6 = 1.2;
      }
      fVar10 = fVar10 * fVar6;
    }
LAB_001e7114:
    uVar8 = FUN_00191420();
    uVar8 = FUN_00191410(uVar8,1);
    fVar10 = (float)*(int *)(param_1 + 0x1c) * fVar10;
    if (fVar10 < 2.1474836e+09) {
      uVar9 = (uint)fVar10;
    }
    else {
      uVar9 = (int)(fVar10 - 2.1474836e+09) | 0x80000000;
    }
    uVar4 = FUN_00192800(uVar9);
    (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar4);
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  cVar3 = FUN_00183470();
  fVar10 = DAT_0036e860;
  if (((long)iVar5 == (long)cVar3) || (iRam0036f1f8 != 0)) goto LAB_001e72f0;
  cVar3 = FUN_00183470();
  *(int *)(param_1 + 0x1c) = (int)cVar3;
  lVar7 = FUN_00183600();
  if (lVar7 != 0) {
    uVar8 = FUN_00177070(0);
    uVar8 = FUN_001d2280(uVar8,0xb);
    fVar6 = 1.0;
    switch(uVar8) {
    case 0:
      fVar10 = fVar10 * 0.8;
      goto LAB_001e726c;
    case 1:
      fVar6 = 0.9;
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      fVar6 = 1.1;
      break;
    case 5:
      fVar6 = 1.2;
    }
    fVar10 = fVar10 * fVar6;
  }
LAB_001e726c:
  uVar8 = FUN_00191420();
  uVar8 = FUN_00191410(uVar8,1);
  fVar10 = (float)*(int *)(param_1 + 0x1c) * fVar10;
  if (fVar10 < 2.1474836e+09) {
    uVar9 = (uint)fVar10;
  }
  else {
    uVar9 = (int)(fVar10 - 2.1474836e+09) | 0x80000000;
  }
  uVar4 = FUN_00192800(uVar9);
  (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar4);
LAB_001e72f0:
  if (*(int *)(param_1 + 0x24) == 6) {
    cVar3 = FUN_001dc1b0();
    bVar1 = cVar3 == '\x05';
  }
  else {
    cVar3 = FUN_001dc1b0();
    bVar1 = cVar3 == '\a';
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x24) = 4;
  }
  else {
    lVar7 = FUN_001e9010();
    if (lVar7 == 0) {
      cVar3 = FUN_001dc1b0();
      if (cVar3 == '\x03') {
        (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x24) = 3;
      }
      else {
        cVar3 = FUN_0017e890();
        if ((((cVar3 != '\f') && (cVar3 != '\v')) && (cVar3 != '\x10')) &&
           (FUN_001778a0(abStack_50), abStack_50[0] < 9)) {
          (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),0);
          *(undefined4 *)(param_1 + 0x24) = 3;
        }
      }
    }
  }
  return;
}

// 0x001e7440  size 0x2f8
void FUN_001e7440(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  
  puVar7 = (undefined1 *)param_1;
  (**(code **)(**(int **)(puVar7 + 4) + 0x1c))();
  if (*(int *)(puVar7 + 0x18) == 0) {
    (**(code **)(**(int **)(puVar7 + 0xc) + 0x1c))();
  }
  else {
    (**(code **)(**(int **)(puVar7 + 0x14) + 0x1c))();
  }
  FUN_001e8860(param_1,param_1,5);
  uVar1 = FUN_00183470();
  uVar3 = FUN_00192800(uVar1);
  (**(code **)(**(int **)(puVar7 + 4) + 0x10))(*(int **)(puVar7 + 4),*puVar7,uVar3,0x3f,1);
  if (*(int *)(puVar7 + 0x18) == 0) {
    uVar1 = FUN_00183470();
    uVar3 = FUN_00192800(uVar1);
    (**(code **)(**(int **)(puVar7 + 0xc) + 0x10))(*(int **)(puVar7 + 0xc),puVar7[8],uVar3,0x3f,1);
  }
  else {
    uVar1 = FUN_00183470();
    uVar3 = FUN_00192800(uVar1);
    (**(code **)(**(int **)(puVar7 + 0x14) + 0x10))
              (*(int **)(puVar7 + 0x14),puVar7[0x10],uVar3,0x3f,1);
  }
  fVar12 = DAT_0036e860;
  if (iRam0036f1f8 != 0) goto LAB_001e7580;
  cVar2 = FUN_00183470();
  *(int *)(puVar7 + 0x1c) = (int)cVar2;
  lVar5 = FUN_00183600();
  if (lVar5 != 0) {
    uVar6 = FUN_00177070(0);
    uVar6 = FUN_001d2280(uVar6,0xb);
    fVar4 = 1.0;
    switch(uVar6) {
    case 0:
      fVar12 = fVar12 * 0.8;
      goto LAB_001e7694;
    case 1:
      fVar4 = 0.9;
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      fVar4 = 1.1;
      break;
    case 5:
      fVar4 = 1.2;
    }
    fVar12 = fVar12 * fVar4;
  }
LAB_001e7694:
  uVar6 = FUN_00191420();
  uVar6 = FUN_00191410(uVar6,1);
  fVar12 = (float)*(int *)(puVar7 + 0x1c) * fVar12;
  if (fVar12 < 2.1474836e+09) {
    uVar11 = (uint)fVar12;
  }
  else {
    uVar11 = (int)(fVar12 - 2.1474836e+09) | 0x80000000;
  }
  uVar3 = FUN_00192800(uVar11);
  (**(code **)(*(int *)uVar6 + 0x20))(uVar6,uVar3);
LAB_001e7580:
  iVar10 = 0;
  lVar5 = FUN_00177210();
  if (0 < lVar5) {
    iVar9 = 0;
    do {
      if (iRam0036f26c == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = iRam0036f26c + iVar9;
      }
      FUN_00193070(iVar8);
      iVar9 = iVar9 + 0x80;
      iVar10 = iVar10 + 1;
      iVar8 = FUN_00177210();
    } while (iVar10 < iVar8);
  }
  *(undefined4 *)(puVar7 + 0x24) = 5;
  return;
}

// 0x001e7740  size 0x280
void FUN_001e7740(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  lVar5 = FUN_001e9010();
  if (lVar5 == 0) {
    if (*(int *)(param_1 + 0x24) == 6) {
      cVar2 = FUN_001dc1b0();
      bVar1 = cVar2 == '\x05';
    }
    else {
      cVar2 = FUN_001dc1b0();
      bVar1 = cVar2 == '\a';
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x24) = 4;
    }
    else {
      uVar9 = 0;
      iVar8 = 0;
      do {
        if (iRam0036f26c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iRam0036f26c + iVar8;
        }
        FUN_00192890(iVar4,*(undefined4 *)(iRam0036f1fc + (uVar9 & 0xff) * 4 + 0x14));
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0x80;
      } while ((int)uVar9 < 2);
      lVar5 = thunk_FUN_001e8fc0();
      if (((lVar5 == 0) && (uVar6 = FUN_001dc290(), (uVar6 & 1) != 0)) &&
         (cVar2 = FUN_001dc1b0(), cVar2 == '\x03')) {
        iVar8 = 0;
        lVar5 = FUN_00177210();
        if (0 < lVar5) {
          do {
            uVar7 = FUN_001dc260((char)iVar8);
            iVar4 = FUN_001dcdc0(uVar7);
            if ((iVar4 < *(int *)(param_1 + 0x30)) &&
               (fVar10 = ((float)iVar4 / 0.25) / 5e+06, fVar10 < 1.0)) {
              if (*(int *)(param_1 + 0x2c) == 0) {
                *(int *)(param_1 + 0x2c) = (int)(fVar10 * 32.0 + 16.0);
                FUN_002062d0(0,0x60);
              }
              else {
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
              }
            }
            *(int *)(param_1 + 0x30) = iVar4;
            param_1 = param_1 + 0xc;
            iVar8 = iVar8 + 1;
            iVar4 = FUN_00177210();
          } while (iVar8 < iVar4);
        }
      }
    }
  }
  else {
    iVar8 = 0;
    lVar5 = FUN_00177210();
    if (0 < lVar5) {
      iVar4 = 0;
      do {
        if (iRam0036f26c == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iRam0036f26c + iVar4;
        }
        FUN_00193070(iVar3);
        iVar4 = iVar4 + 0x80;
        iVar8 = iVar8 + 1;
        iVar3 = FUN_00177210();
      } while (iVar8 < iVar3);
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),1);
    *(undefined4 *)(param_1 + 0x24) = 6;
  }
  return;
}

// 0x001e79d0  size 0x70c
void FUN_001e79d0(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  cVar2 = FUN_0017e890();
  if (cVar2 == '\x0f') {
    if (*(int *)(param_1 + 0x24) == 6) {
      cVar2 = FUN_001dc1b0();
      bVar1 = cVar2 == '\x05';
    }
    else {
      cVar2 = FUN_001dc1b0();
      bVar1 = cVar2 == '\a';
    }
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
      if (*(int *)(param_1 + 0x18) == 0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
      }
      iVar11 = 0;
      lVar7 = FUN_00177210();
      if (0 < lVar7) {
        iVar10 = 0;
        do {
          if (iRam0036f26c == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iRam0036f26c + iVar10;
          }
          FUN_00193070(iVar4);
          iVar10 = iVar10 + 0x80;
          iVar11 = iVar11 + 1;
          iVar4 = FUN_00177210();
        } while (iVar11 < iVar4);
      }
      *(undefined4 *)(param_1 + 0x24) = 5;
    }
    else {
      iVar11 = *(int *)(iRam0036f1fc + 0x14);
      iVar10 = 0;
      lVar7 = FUN_00177210();
      if (0 < lVar7) {
        iVar4 = 0;
        do {
          fVar13 = DAT_0036e860;
          if (*(int *)(iVar11 + 0x500) == 0) {
            if (iRam0036f26c == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = iRam0036f26c + iVar4;
            }
            FUN_00192890(iVar6,iVar11);
          }
          else {
            if ((iVar10 == 0) && (iRam0036f1f8 == 0)) {
              cVar2 = FUN_00183470();
              *(int *)(param_1 + 0x1c) = (int)cVar2;
              lVar7 = FUN_00183600();
              if (lVar7 != 0) {
                uVar8 = FUN_00177070(0);
                uVar8 = FUN_001d2280(uVar8,0xb);
                fVar5 = 1.0;
                switch(uVar8) {
                case 0:
                  fVar13 = fVar13 * 0.8;
                  goto LAB_001e7bfc;
                case 1:
                  fVar5 = 0.9;
                  break;
                case 2:
                  break;
                case 3:
                  break;
                case 4:
                  fVar5 = 1.1;
                  break;
                case 5:
                  fVar5 = 1.2;
                }
                fVar13 = fVar13 * fVar5;
              }
LAB_001e7bfc:
              uVar8 = FUN_00191420();
              uVar8 = FUN_00191410(uVar8,1);
              fVar13 = (float)*(int *)(param_1 + 0x1c) * fVar13;
              if (fVar13 < 2.1474836e+09) {
                uVar12 = (uint)fVar13;
              }
              else {
                uVar12 = (int)(fVar13 - 2.1474836e+09) | 0x80000000;
              }
              uVar3 = FUN_00192800(uVar12);
              (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar3);
            }
            if (iRam0036f26c == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = iRam0036f26c + iVar4;
            }
            FUN_00193070(iVar6);
          }
          iVar4 = iVar4 + 0x80;
          iVar10 = iVar10 + 1;
          iVar6 = FUN_00177210();
        } while (iVar10 < iVar6);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) == 6) {
      cVar2 = FUN_001dc1b0();
      bVar1 = cVar2 == '\x05';
    }
    else {
      cVar2 = FUN_001dc1b0();
      bVar1 = cVar2 == '\a';
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x24) = 4;
    }
    else {
      lVar7 = FUN_001e9010();
      if (lVar7 == 0) {
        lVar7 = thunk_FUN_001e8fc0();
        if ((((lVar7 == 0) && (uVar9 = FUN_001dc290(), (uVar9 & 1) != 0)) &&
            (cVar2 = FUN_001dc1b0(), cVar2 == '\x03')) &&
           (uVar9 = FUN_001dc290(), (uVar9 & 0x80) == 0)) {
          uVar8 = FUN_001dc260(0);
          iVar11 = FUN_001dcdc0(uVar8);
          if ((iVar11 < *(int *)(param_1 + 0x30)) &&
             (fVar13 = ((float)iVar11 / 0.25) / 5e+06, fVar13 < 1.0)) {
            if (*(int *)(param_1 + 0x2c) == 0) {
              *(int *)(param_1 + 0x2c) = (int)(fVar13 * 32.0 + 16.0);
              FUN_002062d0(0,0x60);
            }
            else {
              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
            }
          }
          *(int *)(param_1 + 0x30) = iVar11;
        }
        iVar11 = *(int *)(iRam0036f1fc + 0x14);
        iVar10 = 0;
        lVar7 = FUN_00177210();
        if (0 < lVar7) {
          iVar4 = 0;
          do {
            fVar13 = DAT_0036e860;
            if (*(int *)(iVar11 + 0x500) == 0) {
              if (iRam0036f26c == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = iRam0036f26c + iVar4;
              }
              FUN_00192890(iVar6,iVar11);
            }
            else {
              if ((iVar10 == 0) && (iRam0036f1f8 == 0)) {
                cVar2 = FUN_00183470();
                *(int *)(param_1 + 0x1c) = (int)cVar2;
                lVar7 = FUN_00183600();
                if (lVar7 != 0) {
                  uVar8 = FUN_00177070(0);
                  uVar8 = FUN_001d2280(uVar8,0xb);
                  fVar5 = 1.0;
                  switch(uVar8) {
                  case 0:
                    fVar13 = fVar13 * 0.8;
                    goto LAB_001e7fb4;
                  case 1:
                    fVar5 = 0.9;
                    break;
                  case 2:
                    break;
                  case 3:
                    break;
                  case 4:
                    fVar5 = 1.1;
                    break;
                  case 5:
                    fVar5 = 1.2;
                  }
                  fVar13 = fVar13 * fVar5;
                }
LAB_001e7fb4:
                uVar8 = FUN_00191420();
                uVar8 = FUN_00191410(uVar8,1);
                fVar13 = (float)*(int *)(param_1 + 0x1c) * fVar13;
                if (fVar13 < 2.1474836e+09) {
                  uVar12 = (uint)fVar13;
                }
                else {
                  uVar12 = (int)(fVar13 - 2.1474836e+09) | 0x80000000;
                }
                uVar3 = FUN_00192800(uVar12);
                (**(code **)(*(int *)uVar8 + 0x20))(uVar8,uVar3);
              }
              if (iRam0036f26c == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = iRam0036f26c + iVar4;
              }
              FUN_00193070(iVar6);
            }
            iVar4 = iVar4 + 0x80;
            iVar10 = iVar10 + 1;
            iVar6 = FUN_00177210();
          } while (iVar10 < iVar6);
        }
      }
      else {
        iVar11 = 0;
        lVar7 = FUN_00177210();
        if (0 < lVar7) {
          iVar10 = 0;
          do {
            if (iRam0036f26c == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iRam0036f26c + iVar10;
            }
            FUN_00193070(iVar4);
            iVar10 = iVar10 + 0x80;
            iVar11 = iVar11 + 1;
            iVar4 = FUN_00177210();
          } while (iVar11 < iVar4);
        }
        (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),1);
        *(undefined4 *)(param_1 + 0x24) = 6;
      }
    }
  }
  return;
}

