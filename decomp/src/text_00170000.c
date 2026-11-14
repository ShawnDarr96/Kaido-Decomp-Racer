// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00170000 - 0x00174000
#include "ghidra_types.h"

// 0x001702c0  size 0x188
/* reciprocals, degrees->radians */

void CarSpec_ConvertUnits(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = 0;
  fVar3 = 0.0;
  *(float *)(param_1 + 0xb0) = 1.0 / *(float *)(param_1 + 0xb0);
  *(float *)(param_1 + 0x520) = 1.0 / *(float *)(param_1 + 0x520);
  *(float *)(param_1 + 0x16c) = 1.0 / *(float *)(param_1 + 0x16c);
  *(float *)(param_1 + 0x170) = 1.0 / *(float *)(param_1 + 0x170);
  *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) * 0.017453292;
  *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) * 0.017453292;
  *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) * 0.017453292;
  *(float *)(param_1 + 0x35c) = *(float *)(param_1 + 0x35c) * 0.017453292;
  *(float *)(param_1 + 0x360) = *(float *)(param_1 + 0x360) * 0.017453292;
  *(float *)(param_1 + 0x6e0) = *(float *)(param_1 + 0x6e0) * 0.0009277429;
  *(float *)(param_1 + 0x6e4) = *(float *)(param_1 + 0x6e4) * 0.0009277429;
  *(float *)(param_1 + 0x744) = *(float *)(param_1 + 0x744) * 0.0009277429;
  *(float *)(param_1 + 0x748) = *(float *)(param_1 + 0x748) * 0.0009277429;
  *(float *)(param_1 + 0x68c) = *(float *)(param_1 + 0x68c) / *(float *)(param_1 + 0x528);
  iVar1 = param_1;
  do {
    uVar2 = uVar2 + 1;
    fVar3 = fVar3 + *(float *)(iVar1 + 0x53c);
    iVar1 = iVar1 + 4;
  } while (uVar2 < 0x20);
  *(float *)(param_1 + 0x63c) = DAT_0036e764 * fVar3 * *(float *)(param_1 + 0x5bc);
  fVar3 = *(float *)(param_1 + 0x530) / *(float *)(param_1 + 0x528);
  *(float *)(param_1 + 0x534) = fVar3;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0x534) = fVar3;
  *(float *)(param_1 + 0x680) = 1.0 / *(float *)(param_1 + 0x680);
  *(float *)(param_1 + 0xe8) = 1.0 / *(float *)(param_1 + 0xe8);
  return;
}

// 0x00170450  size 0x18c
void CarSpec_SetDefaults(int param_1)

{
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = uStack_4;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = uStack_14;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  memset(param_1 + 0x144,0,0x20);
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x170) = 0x40333333;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  memset(param_1 + 0x180,0,0x110);
  memset(param_1 + 0x290,0,0x110);
  memset(param_1 + 0x3a0,0,0x180);
  *(undefined4 *)(param_1 + 0x520) = 0;
  memset(param_1 + 0x524,0,0x1b4);
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x6dc) = 0;
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0x748) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x714) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x718) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x71c) = uStack_24;
  *(undefined4 *)(param_1 + 0x720) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x724) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x728) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x72c) = uStack_34;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined4 *)(param_1 + 0x734) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x224) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  return;
}

// 0x001705e0  size 0x1e8
undefined8 CarSpec_ctor(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 *puVar10;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar3 = puVar4 + 0x100;
  puVar4[3] = 0;
  puVar10 = puVar4 + 0x148;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[0x17] = 0x3f800000;
  puVar4[0x1b] = 0x3f800000;
  puVar4[0x1f] = 0x3f800000;
  puVar4[0x23] = 0x3f800000;
  puVar4[0x27] = 0x3f800000;
  puVar4[0x2b] = 0x3f800000;
  puVar4[99] = 0x3f800000;
  puVar4[0x77] = 0x3f800000;
  puVar4[0x9f] = 0x3f800000;
  puVar4[0xa7] = 0x3f800000;
  puVar4[0xbb] = 0x3f800000;
  puVar4[0xe3] = 0x3f800000;
  puVar4[0xeb] = 0x3f800000;
  puVar4[0xef] = 0x3f800000;
  if (puVar3 < puVar10) {
    uVar8 = (int)puVar10 - (int)(puVar4 + 0x100);
    uVar7 = uVar8 + 0x5f;
    uVar2 = (int)uVar7 / 0x60;
    uVar5 = uVar2 + 1;
    if (8 < (int)uVar5) {
      bVar1 = false;
      bVar6 = false;
      if (puVar4 + 0x100 <= puVar10) {
        bVar9 = true;
        if (((uVar8 & 0x80000000) == 0) && ((uVar7 & 0x80000000) != 0)) {
          bVar9 = false;
        }
        if (bVar9) {
          bVar6 = true;
        }
      }
      if (bVar6) {
        bVar6 = true;
        if (((uVar2 & 0x80000000) == 0) && ((uVar5 & 0x80000000) != 0)) {
          bVar6 = false;
        }
        if (bVar6) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        do {
          puVar3[3] = 0x3f800000;
          puVar3[7] = 0x3f800000;
          puVar3[0x1b] = 0x3f800000;
          puVar3[0x1f] = 0x3f800000;
          puVar3[0x33] = 0x3f800000;
          puVar3[0x37] = 0x3f800000;
          puVar3[0x4b] = 0x3f800000;
          puVar3[0x4f] = 0x3f800000;
          puVar3[99] = 0x3f800000;
          puVar3[0x67] = 0x3f800000;
          puVar3[0x7b] = 0x3f800000;
          puVar3[0x7f] = 0x3f800000;
          puVar3[0x93] = 0x3f800000;
          puVar3[0x97] = 0x3f800000;
          puVar3[0xab] = 0x3f800000;
          puVar3[0xaf] = 0x3f800000;
          puVar3 = puVar3 + 0xc0;
        } while (puVar3 < puVar4 + 0x88);
      }
    }
    for (; puVar3 < puVar4 + 0x148; puVar3 = puVar3 + 0x18) {
      puVar3[3] = 0x3f800000;
      puVar3[7] = 0x3f800000;
    }
  }
  puVar4[0x1c7] = 0x3f800000;
  puVar4[0x1cb] = 0x3f800000;
  CarSpec_SetDefaults(param_1);
  return param_1;
}

// 0x001707d0  size 0x40
undefined8 main(void)

{
  maybe___init_cpp();
  Game_Init();
  Game_MainLoop(3);
  Game_Shutdown();
  __destroy_global_chain();
  return 0;
}

// 0x00170810  size 0x3b0
/* WARNING: Removing unreachable block (ram,0x00170b28) */
/* WARNING: Removing unreachable block (ram,0x00170b5c) */

undefined8 lgDevInit(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_4c;
  
  printf(0x3626f8,0x362718,0x362720,0x362730);
  sceSifInitRpc(0);
  while( true ) {
    lVar1 = sceSifBindRpc(0x42fd40,0x46d046d,0);
    if (lVar1 < 0) {
      printf(0x362740);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iRam0042fd64 != 0) break;
    for (iVar7 = 0xffff; iVar7 != -1; iVar7 = iVar7 + -1) {
    }
  }
  iRam0042fd84 = 0;
  lVar1 = sceSifCallRpc(0x42fd40,0xc,0,0x42fd80,0x240,0x42fd80,0x240,0);
  if (lVar1 != 0) {
    printf(0x362760);
    printf(0x362778);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (iRam0042fd84 != 0x108) {
    printf(0x362798);
    printf(0x3627c0,1,8);
    iVar7 = iRam0042fd84;
    if (iRam0042fd84 < 0) {
      iVar7 = iRam0042fd84 + 0xff;
    }
    printf(0x3627f0,iVar7 >> 8,iRam0042fd84 + (iVar7 >> 8) * -0x100);
    printf(0x362778);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
  if (DAT_0030ae48 == -1) {
    memset(auStack_60,0,0x18);
    uStack_5c = 1;
    uStack_58 = 1;
    uStack_4c = 0;
    lVar1 = CreateSema(auStack_60);
    DAT_0030ae48 = (int)lVar1;
    if (lVar1 == -1) {
      printf(0x362820);
      printf(0x362778);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    printf(0x362848);
  }
  if (DAT_0030ae40 != 0) {
    puVar3 = (undefined8 *)0x42fdf4;
    puVar2 = (undefined8 *)0x42ffc0;
    do {
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar2 != (undefined8 *)0x430120);
    lVar1 = sceSifCallRpc(0x42fd40,0x12,0,0x42fd80,0x240,0x42fd80,0x240,0);
    if (lVar1 == 0) {
      DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
      DAT_0030ae40 = 0;
    }
    else {
      DAT_0030ae40 = 0;
    }
  }
  return 0;
}

// 0x00170bd8  size 0x54
undefined8 lgDevEnumHint(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    printf(0x362878);
    uVar2 = 0xffffffff80000004;
  }
  else {
    bVar1 = DAT_0030ae44 == 1;
    *(int *)param_1 = DAT_0030ae44;
    if (bVar1) {
      DAT_0030ae44 = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// 0x00170c30  size 0x108
undefined4 lgDevEnumerate(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_2 == 0) {
    printf(0x3628a8);
    uVar3 = 0x80000004;
  }
  else {
    lgDev_WaitAsync(0,0);
    uRam0042fd84 = param_1;
    lVar4 = sceSifCallRpc(0x42fd40,1,0,0x42fd80,0x240,0x42fd80,0x240,0);
    uVar2 = uRam0042fe04;
    uVar1 = uRam0042fdfc;
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)param_2;
      *puVar5 = uRam0042fdf4;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
      uVar3 = uRam0042fd80;
    }
    else {
      printf(0x3628e0);
      uVar3 = 0x80000000;
    }
  }
  return uVar3;
}

// 0x00170d40  size 0xe0
undefined4 lgDevOpen(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    printf(0x362908);
    uVar1 = 0x80000004;
  }
  else {
    lgDev_WaitAsync(0,0);
    uRam0042fd84 = param_1;
    lVar2 = sceSifCallRpc(0x42fd40,2,0,0x42fd80,0x240,0x42fd80,0x240,0);
    if (lVar2 == 0) {
      *(undefined4 *)param_2 = uRam0042fd88;
      DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
      uVar1 = uRam0042fd80;
    }
    else {
      printf(0x362930);
      uVar1 = 0x80000000;
    }
  }
  return uVar1;
}

// 0x00170e28  size 0xac
undefined4 lgDevClose(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lgDev_WaitAsync(0,0);
  uRam0042fd88 = param_1;
  lVar2 = sceSifCallRpc(0x42fd40,3,0,0x42fd80,0x240,0x42fd80,0x240,0);
  if (lVar2 == 0) {
    DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
    uVar1 = uRam0042fd80;
  }
  else {
    printf(0x362950);
    uVar1 = 0x80000000;
  }
  return uVar1;
}

// 0x00170ed8  size 0xf0
undefined4 lgDevGetDeviceProperty(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    printf(0x362970);
    uVar1 = 0x80000004;
  }
  else {
    lgDev_WaitAsync(0,0);
    uRam0042fd88 = param_1;
    uRam0042fdd8 = param_2;
    lVar2 = sceSifCallRpc(0x42fd40,4,0,0x42fd80,0x240,0x42fd80,0x240,0);
    if (lVar2 == 0) {
      *(undefined4 *)param_3 = uRam0042fddc;
      DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
      uVar1 = uRam0042fd80;
    }
    else {
      printf(0x3629a8);
      uVar1 = 0x80000000;
    }
  }
  return uVar1;
}

// 0x00170fc8  size 0xcc
undefined4 lgDevSetDeviceProperty(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lgDev_WaitAsync(0,0);
  uRam0042fd88 = param_1;
  uRam0042fdd8 = param_2;
  uRam0042fddc = param_3;
  lVar2 = sceSifCallRpc(0x42fd40,5,0,0x42fd80,0x240,0x42fd80,0x240,0);
  if (lVar2 == 0) {
    DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
    uVar1 = uRam0042fd80;
  }
  else {
    printf(0x3629d8);
    uVar1 = 0x80000000;
  }
  return uVar1;
}

// 0x00171098  size 0x108
undefined4 lgDevRead(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    printf(0x362a08);
    uVar2 = 0x80000004;
  }
  else {
    lgDev_WaitAsync(0,0);
    uRam0042fd88 = param_1;
    uRam0042fde4 = param_2;
    lVar3 = sceSifCallRpc(0x42fd40,6,0,0x42fd80,0x240,0x42fd80,0x240,0);
    uVar1 = uRam0042fdfc;
    if (lVar3 == 0) {
      DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
      *(undefined8 *)param_3 = uRam0042fdf4;
      ((undefined8 *)param_3)[1] = uVar1;
      uVar2 = uRam0042fd80;
    }
    else {
      printf(0x362a38);
      uVar2 = 0x80000000;
    }
  }
  return uVar2;
}

// 0x001711a0  size 0x1c0
undefined4 lgDevReadMulti(int param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (param_1 - 1U < 4) {
    if (param_2 == 0) {
      uVar3 = 0x362a88;
    }
    else if (param_3 == 0) {
      uVar3 = 0x362ab8;
    }
    else {
      if (param_4 != (undefined8 *)0x0) {
        lgDev_WaitAsync(0,0);
        iVar5 = 0;
        if (0 < param_1) {
          puVar4 = (undefined4 *)0x42fde4;
          do {
            iVar2 = iVar5 * 4;
            iVar5 = iVar5 + 1;
            puVar4[-0x17] = *(undefined4 *)(iVar2 + (int)param_2);
            *puVar4 = *(undefined4 *)(iVar2 + (int)param_3);
            puVar4 = puVar4 + 1;
          } while (iVar5 < param_1);
        }
        iRam0042fddc = param_1;
        lVar1 = sceSifCallRpc(0x42fd40,0xe,0,0x42fd80,0x240,0x42fd80,0x240,0);
        if (lVar1 != 0) {
          printf(0x362b18);
          return 0x80000000;
        }
        iVar5 = 0;
        DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
        if (0 < param_1) {
          puVar6 = (undefined8 *)0x42fdf4;
          do {
            uVar3 = puVar6[1];
            *param_4 = *puVar6;
            iVar5 = iVar5 + 1;
            param_4[1] = uVar3;
            puVar6 = puVar6 + 2;
            param_4 = param_4 + 2;
          } while (iVar5 < param_1);
        }
        return uRam0042fd80;
      }
      uVar3 = 0x362ae8;
    }
    printf(uVar3);
  }
  else {
    printf(0x362a58,param_1);
  }
  return 0x80000004;
}

// 0x00171370  size 0x17c
undefined4 lgDevDownloadForceEffect(undefined4 param_1,long param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    pcVar2 = s_lgDevDownloadForceEffect__invali_00362b40;
  }
  else {
    if (param_3 != 0) {
      lgDev_WaitAsync(0,0);
      uRam0042fd98 = *(undefined4 *)param_2;
      puVar3 = (undefined8 *)param_3;
      uRam0042fdf4 = *puVar3;
      uRam0042fdfc = puVar3[1];
      uRam0042fe04 = puVar3[2];
      uRam0042fe0c = puVar3[3];
      uRam0042fe14 = puVar3[4];
      uRam0042fe1c = puVar3[5];
      uRam0042fe24 = puVar3[6];
      uRam0042fe2c = *(undefined4 *)(puVar3 + 7);
      uRam0042fd88 = param_1;
      lVar1 = sceSifCallRpc(0x42fd40,7,0,0x42fd80,0x240,0x42fd80,0x240,0);
      if (lVar1 == 0) {
        *(undefined4 *)param_2 = uRam0042fd98;
        DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
        return uRam0042fd80;
      }
      printf(0x362bb8);
      return 0x80000000;
    }
    pcVar2 = s_lgDevDownloadForceEffect__invali_00362b78;
  }
  printf(pcVar2);
  return 0x80000004;
}

// 0x001714f8  size 0x164
undefined4 lgDevUpdateForceEffect(int param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  if (param_1 == -1) {
    pcVar2 = s_lgDevUpdateForceEffect__invalid_p_00362be8;
  }
  else {
    if (param_2 != 0) {
      lgDev_WaitAsync(0,0);
      puVar3 = (undefined8 *)param_2;
      uRam0042fdf4 = *puVar3;
      uRam0042fdfc = puVar3[1];
      uRam0042fe04 = puVar3[2];
      uRam0042fe0c = puVar3[3];
      uRam0042fe14 = puVar3[4];
      uRam0042fe1c = puVar3[5];
      uRam0042fe24 = puVar3[6];
      uRam0042fe2c = *(undefined4 *)(puVar3 + 7);
      iRam0042fd98 = param_1;
      lVar1 = sceSifCallRpc(0x42fd40,0xd,0,0x42fd80,0x240,0x42fd80,0x240,0);
      if (lVar1 == 0) {
        DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
        return uRam0042fd80;
      }
      printf(0x362c60);
      return 0x80000000;
    }
    pcVar2 = s_lgDevUpdateForceEffect__invalid_p_00362c20;
  }
  printf(pcVar2);
  return 0x80000004;
}

// 0x00171668  size 0xac
undefined4 lgDevStartForceEffect(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lgDev_WaitAsync(0,0);
  uRam0042fd98 = param_1;
  lVar2 = sceSifCallRpc(0x42fd40,8,0,0x42fd80,0x240,0x42fd80,0x240,0);
  if (lVar2 == 0) {
    DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
    uVar1 = uRam0042fd80;
  }
  else {
    printf(0x362c90);
    uVar1 = 0x80000000;
  }
  return uVar1;
}

// 0x00171718  size 0x128
undefined4 lgDevStartForceEffectMulti(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 - 1U < 0x10) {
    if (param_2 != (undefined4 *)0x0) {
      lgDev_WaitAsync(0,0);
      iVar4 = 0;
      if (0 < param_1) {
        puVar3 = (undefined4 *)0x42fd98;
        do {
          uVar1 = *param_2;
          param_2 = param_2 + 1;
          iVar4 = iVar4 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        } while (iVar4 < param_1);
      }
      iRam0042fddc = param_1;
      lVar2 = sceSifCallRpc(0x42fd40,0xf,0,0x42fd80,0x240,0x42fd80,0x240,0);
      if (lVar2 == 0) {
        DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
        return uRam0042fd80;
      }
      printf(0x362d28);
      return 0x80000000;
    }
    printf(0x362cf8);
  }
  else {
    printf(0x362cb8,param_1);
  }
  return 0x80000004;
}

// 0x00171848  size 0xac
undefined4 lgDevStopForceEffect(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lgDev_WaitAsync(0,0);
  uRam0042fd98 = param_1;
  lVar2 = sceSifCallRpc(0x42fd40,9,0,0x42fd80,0x240,0x42fd80,0x240,0);
  if (lVar2 == 0) {
    DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
    uVar1 = uRam0042fd80;
  }
  else {
    printf(0x362d58);
    uVar1 = 0x80000000;
  }
  return uVar1;
}

// 0x001718f8  size 0x128
undefined4 lgDevStopForceEffectMulti(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 - 1U < 0x10) {
    if (param_2 != (undefined4 *)0x0) {
      lgDev_WaitAsync(0,0);
      iVar4 = 0;
      if (0 < param_1) {
        puVar3 = (undefined4 *)0x42fd98;
        do {
          uVar1 = *param_2;
          param_2 = param_2 + 1;
          iVar4 = iVar4 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        } while (iVar4 < param_1);
      }
      iRam0042fddc = param_1;
      lVar2 = sceSifCallRpc(0x42fd40,0x10,0,0x42fd80,0x240,0x42fd80,0x240,0);
      if (lVar2 == 0) {
        DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
        return uRam0042fd80;
      }
      printf(0x362df0);
      return 0x80000000;
    }
    printf(0x362dc0);
  }
  else {
    printf(0x362d80,param_1);
  }
  return 0x80000004;
}

// 0x00171a28  size 0xac
undefined4 lgDevDestroyForceEffect(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lgDev_WaitAsync(0,0);
  uRam0042fd98 = param_1;
  lVar2 = sceSifCallRpc(0x42fd40,10,0,0x42fd80,0x240,0x42fd80,0x240,0);
  if (lVar2 == 0) {
    DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
    uVar1 = uRam0042fd80;
  }
  else {
    printf(0x362e20);
    uVar1 = 0x80000000;
  }
  return uVar1;
}

// 0x00171ad8  size 0x164
/* WARNING: Removing unreachable block (ram,0x00171ba8) */
/* WARNING: Removing unreachable block (ram,0x00171bdc) */

undefined4 lgDevPrepareForIOPReboot(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lgDev_WaitAsync(0,0);
  lVar2 = sceSifCallRpc(0x42fd40,0x11,0,0x42fd80,0x240,0x42fd80,0x240,0);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)0x42fdf4;
    puVar3 = (undefined8 *)0x42ffc0;
    do {
      uVar5 = puVar4[1];
      uVar6 = puVar4[2];
      uVar7 = puVar4[3];
      *puVar3 = *puVar4;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      puVar4 = puVar4 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar4 != (undefined8 *)0x42ff54);
    DAT_0030ae40 = 1;
    DAT_0030ae44 = DAT_0030ae44 & 0xfffffffd | uRam0042fde0;
    uVar1 = uRam0042fd80;
  }
  else {
    DAT_0030ae40 = 0;
    printf(0x362e50);
    uVar1 = 0x80000000;
  }
  return uVar1;
}

// 0x00171c40  size 0x84
/* sceSifCheckStatRpc; 25 callers */

long lgDev_WaitAsync(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    do {
      lVar1 = sceSifCheckStatRpc(0x42fd40);
    } while (lVar1 != 0);
    lVar1 = 0;
    if (param_2 != 0) {
      *(undefined4 *)param_2 = DAT_0030ae80;
    }
  }
  else {
    lVar1 = sceSifCheckStatRpc(0x42fd40);
    if ((lVar1 == 0) && (param_2 != 0)) {
      *(undefined4 *)param_2 = DAT_0030ae80;
    }
  }
  return lVar1;
}

// 0x00171df0  size 0xa8
undefined8 lgDevAEnumHint(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    printf(0x362878);
    uVar1 = 0xffffffff80000004;
  }
  else {
    lVar2 = lgDev_WaitAsync(1,0);
    if (lVar2 == 0) {
      DAT_0030b0c4 = (undefined4)param_1;
      sceSifCallRpc(0x42fd40,0xb,1,0x30ae80,0x240,0x30ae80,0x240,0x171db0);
      uVar1 = 0;
    }
    else {
      printf(0x362e80);
      uVar1 = 0xffffffff80000008;
    }
  }
  return uVar1;
}

// 0x00171e98  size 0xcc
undefined8 lgDevARead(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    printf(0x362ec0);
    uVar1 = 0xffffffff80000004;
  }
  else {
    lVar2 = lgDev_WaitAsync(1,0);
    if (lVar2 == 0) {
      DAT_0030b0c0 = (undefined4)param_3;
      DAT_0030ae88 = param_1;
      DAT_0030aee4 = param_2;
      sceSifCallRpc(0x42fd40,6,1,0x30ae80,0x240,0x30ae80,0x240,0x171cc8);
      uVar1 = 0;
    }
    else {
      printf(0x362ef0);
      uVar1 = 0xffffffff80000008;
    }
  }
  return uVar1;
}

// 0x00171f68  size 0x160
undefined8 lgDevAReadMulti(int param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1 - 1U < 4) {
    if (param_2 == 0) {
      uVar3 = 0x362f60;
    }
    else if (param_3 == 0) {
      uVar3 = 0x362f90;
    }
    else {
      if (param_4 != 0) {
        lVar1 = lgDev_WaitAsync(1,0);
        if (lVar1 != 0) {
          printf(0x362ff0);
          return 0xffffffff80000008;
        }
        iVar5 = 0;
        if (0 < param_1) {
          puVar4 = &DAT_0030aee4;
          do {
            iVar2 = iVar5 * 4;
            iVar5 = iVar5 + 1;
            puVar4[-0x17] = *(undefined4 *)(iVar2 + (int)param_2);
            *puVar4 = *(undefined4 *)(iVar2 + (int)param_3);
            puVar4 = puVar4 + 1;
          } while (iVar5 < param_1);
        }
        DAT_0030b0c0 = (undefined4)param_4;
        DAT_0030aedc = param_1;
        sceSifCallRpc(0x42fd40,0xe,1,0x30ae80,0x240,0x30ae80,0x240,0x171d10);
        return 0;
      }
      uVar3 = 0x362fc0;
    }
    printf(uVar3);
  }
  else {
    printf(0x362f30,param_1);
  }
  return 0xffffffff80000004;
}

// 0x001720d8  size 0x144
undefined8 lgDevAUpdateForceEffect(int param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  if (param_1 == -1) {
    pcVar2 = s_lgDevAUpdateForceEffect__invalid_00363030;
  }
  else {
    if (param_2 != 0) {
      lVar1 = lgDev_WaitAsync(1,0);
      if (lVar1 == 0) {
        puVar3 = (undefined8 *)param_2;
        DAT_0030aef4 = *puVar3;
        DAT_0030aefc = puVar3[1];
        DAT_0030af04 = puVar3[2];
        DAT_0030af0c = puVar3[3];
        DAT_0030af14 = puVar3[4];
        DAT_0030af1c = puVar3[5];
        DAT_0030af24 = puVar3[6];
        DAT_0030af2c = *(undefined4 *)(puVar3 + 7);
        DAT_0030ae98 = param_1;
        sceSifCallRpc(0x42fd40,0xd,1,0x30ae80,0x240,0x30ae80,0x240,0x171d88);
        return 0;
      }
      printf(0x3630a8);
      return 0xffffffff80000008;
    }
    pcVar2 = s_lgDevAUpdateForceEffect__invalid_00363068;
  }
  printf(pcVar2);
  return 0xffffffff80000004;
}

// 0x00172228  size 0x8c
undefined8 lgDevAStartForceEffect(undefined4 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lgDev_WaitAsync(1,0);
  if (lVar1 == 0) {
    DAT_0030ae98 = param_1;
    sceSifCallRpc(0x42fd40,8,1,0x30ae80,0x240,0x30ae80,0x240,0x171d88);
    uVar2 = 0;
  }
  else {
    printf(0x3630f0);
    uVar2 = 0xffffffff80000008;
  }
  return uVar2;
}

// 0x001722b8  size 0x110
undefined8 lgDevAStartForceEffectMulti(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  lVar2 = lgDev_WaitAsync(1,0);
  if (lVar2 == 0) {
    if (param_1 - 1U < 0x10) {
      if (param_2 != (undefined4 *)0x0) {
        iVar5 = 0;
        if (0 < param_1) {
          puVar4 = &DAT_0030ae98;
          do {
            uVar1 = *param_2;
            param_2 = param_2 + 1;
            iVar5 = iVar5 + 1;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
          } while (iVar5 < param_1);
        }
        DAT_0030aedc = param_1;
        sceSifCallRpc(0x42fd40,0xf,1,0x30ae80,0x240,0x30ae80,0x240,0x171d88);
        return 0;
      }
      printf(0x3631c8);
    }
    else {
      printf(0x363188,param_1);
    }
    uVar3 = 0xffffffff80000004;
  }
  else {
    printf(0x363138);
    uVar3 = 0xffffffff80000008;
  }
  return uVar3;
}

// 0x001723d8  size 0x8c
undefined8 lgDevAStopForceEffect(undefined4 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lgDev_WaitAsync(1,0);
  if (lVar1 == 0) {
    DAT_0030ae98 = param_1;
    sceSifCallRpc(0x42fd40,9,1,0x30ae80,0x240,0x30ae80,0x240,0x171d88);
    uVar2 = 0;
  }
  else {
    printf(0x3631f8);
    uVar2 = 0xffffffff80000008;
  }
  return uVar2;
}

// 0x00172468  size 0x110
undefined8 lgDevAStopForceEffectMulti(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  lVar2 = lgDev_WaitAsync(1,0);
  if (lVar2 == 0) {
    if (param_1 - 1U < 0x10) {
      if (param_2 != (undefined4 *)0x0) {
        iVar5 = 0;
        if (0 < param_1) {
          puVar4 = &DAT_0030ae98;
          do {
            uVar1 = *param_2;
            param_2 = param_2 + 1;
            iVar5 = iVar5 + 1;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
          } while (iVar5 < param_1);
        }
        DAT_0030aedc = param_1;
        sceSifCallRpc(0x42fd40,0x10,1,0x30ae80,0x240,0x30ae80,0x240,0x171d88);
        return 0;
      }
      printf(0x3632d0);
    }
    else {
      printf(0x363290,param_1);
    }
    uVar3 = 0xffffffff80000004;
  }
  else {
    printf(0x363240);
    uVar3 = 0xffffffff80000008;
  }
  return uVar3;
}

// 0x00172590  size 0x1c
/* 0x220 bytes per slot */

int SaveSlot_Get(int param_1,int param_2)

{
  return iRam0036f19c + (param_1 + param_2) * 0x220;
}

// 0x001725b0  size 0x48
void Save_UpdateAll(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    SaveSlot_Update(iRam0036f19c + uVar1 * 0x220);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}

// 0x00172600  size 0x60
void Save_FreeAll(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    Mc_RemoveCommandsFor(iRam0036f19c + uVar1 * 0x220);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  if (iRam0036f19c != 0) {
    Mem_Free();
    iRam0036f19c = 0;
  }
  return;
}

// 0x00172660  size 0x90
void Save_AllocSlots(void)

{
  uint uVar1;
  int iVar2;
  
  iRam0036f19c = Mem_Alloc16(0x440,uRam0036f198);
  uVar1 = 0;
  do {
    iVar2 = iRam0036f19c + uVar1 * 0x220;
    *(undefined4 *)(iVar2 + 0x38) = uRam0036f198;
    *(undefined4 *)(iVar2 + 0x70) = 0;
    *(undefined4 *)(iVar2 + 0x74) = 0;
    *(undefined4 *)(iVar2 + 0x78) = 0;
    SaveSlot_SetState(iVar2,0,0);
    Mc_InitCommand(iVar2,uVar1 & 0xff,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}

// 0x001726f0  size 0x24
void Save_Shutdown(void)

{
  Mc_Shutdown();
  uRam0036f198 = 0;
  uRam0036f19c = 0;
  return;
}

// 0x00172720  size 0x10
/* Mc_Init(heap, 0x14) */

void Save_Init(undefined4 param_1)

{
  uRam0036f19c = 0;
  uRam0036f198 = param_1;
  Mc_Init(param_1,0x14);
  return;
}

// 0x00172730  size 0x8
void SaveSlot_SetUserData(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}

// 0x00172740  size 0x8
undefined4 SaveSlot_GetBuffer(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}

// 0x00172750  size 0x150
int SaveSlot_BuildPath(int param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((param_4 < 0) || (3 < param_4)) {
    maybe_strcpy(param_2,**(undefined4 **)(param_1 + 0x6c));
    iVar1 = strlen(param_2);
  }
  iVar2 = (int)param_2;
  if ((-1 < param_3) && ((param_4 < 0 || (3 < param_4)))) {
    *(undefined1 *)(iVar2 + iVar1) = 0x2e;
    Str_FormatNumberPadded(iVar2 + iVar1 + 1,param_3,10,2,0x30);
    iVar1 = iVar1 + 3;
  }
  if (-1 < param_4) {
    if (param_4 < 4) {
      maybe_strcpy(iVar2 + iVar1,(&PTR_s_icon_sys_0030b100)[(int)param_4]);
      iVar1 = strlen(param_2);
    }
    else if (4 < param_4) {
      *(undefined1 *)(iVar2 + iVar1) = 0x2e;
      Str_FormatNumberPadded(iVar2 + iVar1 + 1,(int)param_4 + -4,10,2,0x30);
      iVar1 = iVar1 + 3;
    }
  }
  return iVar1;
}

// 0x001728a0  size 0x268
int SaveSlot_ParseDirectory(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 0;
  if (param_3 != 0) {
    do {
      iVar9 = (int)param_1;
      puVar7 = (undefined1 *)(*(int *)(iVar9 + 0x74) + (param_3 + -1) * 0x40);
      if (puVar7[0x20] != '.') {
        iVar4 = 0;
        bVar2 = false;
        if (puVar7[0x20] == 'i') {
          cVar1 = puVar7[0x26];
          if (cVar1 == '2') {
            iVar4 = 3;
          }
          else if (cVar1 == '1') {
            iVar4 = 2;
          }
          else if (cVar1 == '0') {
            iVar4 = 1;
          }
        }
        else {
          lVar6 = newlib_sub_0012af48(puVar7 + 0x20);
          if (lVar6 == 0) {
            bVar2 = true;
          }
          else {
            lVar6 = newlib_sub_0012af48((int)lVar6 + 1,0x2e);
            if (lVar6 == 0) {
              iVar4 = 4;
            }
            else {
              iVar4 = atoi((int)lVar6 + 1);
              iVar4 = iVar4 + 4;
            }
          }
        }
        if (!bVar2) {
          SaveSlot_BuildPath(param_1,iVar9 + 0x1a0,param_2,iVar4);
          uVar5 = strlen(puVar7 + 0x20);
          lVar6 = Str_CompareN(puVar7 + 0x20,iVar9 + 0x1a0,uVar5);
          if (lVar6 != 0) {
            bVar2 = true;
          }
        }
        if ((!bVar2) && (iVar4 < *(int *)(*(int *)(iVar9 + 0x6c) + 8))) {
          iVar8 = iVar8 + 1;
          puVar3 = (undefined4 *)
                   (*(int *)((int)param_2 * 0x28 + *(int *)(iVar9 + 0x78) + 0x24) + iVar4 * 0x1c);
          *puVar3 = 1;
          *(undefined1 *)(puVar3 + 1) = *puVar7;
          *(undefined1 *)((int)puVar3 + 5) = puVar7[1];
          *(undefined1 *)((int)puVar3 + 6) = puVar7[2];
          *(undefined1 *)((int)puVar3 + 7) = puVar7[3];
          *(undefined1 *)(puVar3 + 2) = puVar7[4];
          *(undefined1 *)((int)puVar3 + 9) = puVar7[5];
          *(undefined2 *)((int)puVar3 + 10) = *(undefined2 *)(puVar7 + 6);
          *(undefined1 *)(puVar3 + 3) = puVar7[8];
          *(undefined1 *)((int)puVar3 + 0xd) = puVar7[9];
          *(undefined1 *)((int)puVar3 + 0xe) = puVar7[10];
          *(undefined1 *)((int)puVar3 + 0xf) = puVar7[0xb];
          *(undefined1 *)(puVar3 + 4) = puVar7[0xc];
          *(undefined1 *)((int)puVar3 + 0x11) = puVar7[0xd];
          *(undefined2 *)((int)puVar3 + 0x12) = *(undefined2 *)(puVar7 + 0xe);
          puVar3[5] = *(undefined4 *)(puVar7 + 0x10);
          puVar3[6] = (uint)*(ushort *)(puVar7 + 0x14);
        }
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return iVar8;
}

// 0x00172b20  size 0x1b4
int SaveSlot_ParseFileList(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar8 = (int)param_1;
    puVar6 = (undefined1 *)(*(int *)(iVar8 + 0x74) + (param_2 + -1) * 0x40);
    lVar3 = newlib_sub_0012b630(puVar6 + 0x20,0x2e);
    iVar2 = 0;
    bVar1 = lVar3 == 0;
    if (!bVar1) {
      iVar2 = atoi((int)lVar3 + 1);
      SaveSlot_BuildPath(param_1,iVar8 + 0x1a0,iVar2,0xffffffffffffffff);
      uVar4 = strlen(puVar6 + 0x20);
      lVar3 = Str_CompareN(puVar6 + 0x20,iVar8 + 0x1a0,uVar4);
      if (lVar3 != 0) {
        bVar1 = true;
      }
    }
    if ((!bVar1) && (iVar2 < *(int *)(*(int *)(iVar8 + 0x6c) + 4))) {
      iVar7 = iVar7 + 1;
      puVar5 = (undefined4 *)(*(int *)(iVar8 + 0x78) + iVar2 * 0x28);
      *puVar5 = 1;
      *(undefined1 *)(puVar5 + 1) = *puVar6;
      *(undefined1 *)((int)puVar5 + 5) = puVar6[1];
      *(undefined1 *)((int)puVar5 + 6) = puVar6[2];
      *(undefined1 *)((int)puVar5 + 7) = puVar6[3];
      *(undefined1 *)(puVar5 + 2) = puVar6[4];
      *(undefined1 *)((int)puVar5 + 9) = puVar6[5];
      *(undefined2 *)((int)puVar5 + 10) = *(undefined2 *)(puVar6 + 6);
      *(undefined1 *)(puVar5 + 3) = puVar6[8];
      *(undefined1 *)((int)puVar5 + 0xd) = puVar6[9];
      *(undefined1 *)((int)puVar5 + 0xe) = puVar6[10];
      *(undefined1 *)((int)puVar5 + 0xf) = puVar6[0xb];
      *(undefined1 *)(puVar5 + 4) = puVar6[0xc];
      *(undefined1 *)((int)puVar5 + 0x11) = puVar6[0xd];
      *(undefined2 *)((int)puVar5 + 0x12) = *(undefined2 *)(puVar6 + 0xe);
      puVar5[5] = *(undefined4 *)(puVar6 + 0x10);
      puVar5[6] = (uint)*(ushort *)(puVar6 + 0x14);
    }
  }
  return iVar7;
}

// 0x00172ce0  size 0x100
void SaveSlot_ClearLists(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)param_1;
  Mem_Set16(*(undefined4 *)(iVar1 + 0x78),0,*(int *)(*(int *)(iVar1 + 0x6c) + 4) * 0x28);
  Mem_Set16(*(undefined4 *)(iVar1 + 0x7c),0,
            *(int *)(*(int *)(iVar1 + 0x6c) + 4) * *(int *)(*(int *)(iVar1 + 0x6c) + 8) * 0x1c);
  *(undefined4 *)(iVar1 + 0x88) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x8c) = 0xffffffff;
  *(int *)(iVar1 + 0x80) = (int)param_2;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar2 = *(int *)(iVar1 + 0x6c);
  iVar5 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(iVar1 + 0x78) + iVar4;
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(iVar3 + 0x20) = 0;
      iVar2 = iVar5 * *(int *)(*(int *)(iVar1 + 0x6c) + 8);
      iVar5 = iVar5 + 1;
      *(int *)(iVar3 + 0x24) = *(int *)(iVar1 + 0x7c) + iVar2 * 0x1c;
      iVar2 = *(int *)(iVar1 + 0x6c);
      iVar4 = iVar4 + 0x28;
    } while (iVar5 < *(int *)(iVar2 + 4));
  }
  SaveSlot_ParseFileList(param_1,param_2);
  return;
}

// 0x00172de0  size 0xa0
/* (state, substate) */

void SaveSlot_SetState(int param_1,char param_2,char param_3)

{
  *(char *)(param_1 + 0x3c) = param_2;
  *(char *)(param_1 + 0x3d) = param_3;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (param_3 == '\x02') {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((param_2 == '\x01') || (param_2 == '\a')) {
    SaveSlot_ClearLists(param_1,0);
  }
  return;
}

// 0x00172e80  size 0x2dc
undefined4 SaveSlot_FindFreeName(int param_1,int param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int aiStack_50 [20];
  
  iVar10 = 0;
  iVar9 = 0;
  if (param_2 < *(int *)(*(int *)(param_1 + 0x6c) + 4)) {
    Mem_Set16(aiStack_50,0,0x48);
    iVar4 = 0;
    if (*(int *)(*(int *)(param_1 + 0x78) + param_2 * 0x28) != 0) {
      iVar2 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x6c) + 8)) {
        iVar8 = 0;
        piVar7 = aiStack_50;
        do {
          piVar5 = (int *)(*(int *)(param_2 * 0x28 + *(int *)(param_1 + 0x78) + 0x24) + iVar8);
          if (*piVar5 != 0) {
            iVar4 = iVar4 + 1;
            *piVar7 = piVar5[5];
          }
          iVar6 = *piVar7 + 0x3ff;
          if (iVar6 < 0) {
            iVar6 = *piVar7 + 0x7fe;
          }
          iVar10 = iVar10 + (iVar6 >> 10);
          iVar2 = iVar2 + 1;
          iVar8 = iVar8 + 0x1c;
          piVar7 = piVar7 + 1;
        } while (iVar2 < *(int *)(*(int *)(param_1 + 0x6c) + 8));
      }
      iVar2 = iVar4 + 1;
      if (iVar2 < 0) {
        iVar2 = iVar4 + 2;
      }
      iVar10 = iVar10 + (iVar2 >> 1) + 2;
    }
    iVar2 = 0;
    iVar4 = -1;
    iVar6 = 0;
    iVar8 = 0;
    if (0 < param_4) {
      piVar7 = aiStack_50;
      do {
        iVar3 = *param_3;
        if (*(int *)(*(int *)(param_1 + 0x6c) + 8) <= iVar3) {
          return 3;
        }
        if (iVar4 != iVar3) {
          iVar6 = 0;
          iVar4 = iVar3;
        }
        iVar6 = iVar6 + param_3[2];
        if ((iVar8 + 1 == param_4) || (iVar4 != param_3[3])) {
          iVar3 = *piVar7;
          if (*piVar7 < iVar6) {
            iVar3 = iVar6;
          }
          aiStack_50[iVar4] = iVar3;
        }
        iVar8 = iVar8 + 1;
        param_3 = param_3 + 3;
        piVar7 = piVar7 + 1;
      } while (iVar8 < param_4);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x6c) + 8);
    iVar8 = 0;
    if (0 < iVar4) {
      piVar7 = aiStack_50;
      do {
        iVar6 = *piVar7;
        if (iVar6 != 0) {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar6 + 0x3ff;
        if (iVar3 < 0) {
          iVar3 = iVar6 + 0x7fe;
        }
        iVar9 = iVar9 + (iVar3 >> 10);
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar8 < iVar4);
    }
    iVar4 = iVar2 + 1;
    if (iVar4 < 0) {
      iVar4 = iVar2 + 2;
    }
    *(int *)(param_1 + 0x60) = iVar10;
    *(int *)(param_1 + 0x68) = iVar9 + (iVar4 >> 1) + 2;
    iVar9 = *(int *)(param_1 + 100);
    if ((iVar9 < 0) || (*(int *)(param_1 + 0x68) <= iVar9)) {
      if (*(int *)(param_1 + 0x60) == 0) {
        if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x5c) < iVar9)) {
          return 6;
        }
      }
      else if ((*(int *)(param_1 + 0x40) == 0) &&
              (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) < *(int *)(param_1 + 0x68))) {
        return 6;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 6;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// 0x00173160  size 0xd4
undefined4 SaveSlot_FindFile(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar4 = -1;
  uVar3 = 0;
  if (param_2 < *(int *)(*(int *)(param_1 + 0x6c) + 4)) {
    piVar6 = (int *)(*(int *)(param_1 + 0x78) + param_2 * 0x28);
    if (*piVar6 == 0) {
      uVar2 = 2;
    }
    else {
      iVar7 = 0;
      if (0 < param_4) {
        do {
          iVar1 = *param_3;
          if (*(int *)(*(int *)(param_1 + 0x6c) + 8) <= iVar1) {
            return 3;
          }
          if (iVar4 == iVar1) {
            uVar3 = uVar3 + param_3[2];
          }
          else {
            uVar3 = param_3[2];
            iVar4 = iVar1;
          }
          piVar5 = (int *)(piVar6[9] + iVar4 * 0x1c);
          if (*piVar5 == 0) {
            return 4;
          }
          if ((uint)piVar5[5] < uVar3) {
            return 5;
          }
          iVar7 = iVar7 + 1;
          param_3 = param_3 + 3;
        } while (iVar7 < param_4);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

// 0x00173240  size 0x110
undefined4 SaveSlot_StartCheck(int param_1)

{
  if (*(char *)(param_1 + 0x3c) != '\x04') {
    return 0;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    switch(*(undefined1 *)(param_1 + 0x3d)) {
    case 5:
    case 6:
      SaveSlot_SetState(param_1,1,1);
      return 1;
    case 9:
    case 10:
      if (*(int *)(param_1 + 0x80) == 0) {
        SaveSlot_SetState(param_1,3,7);
      }
      else {
        SaveSlot_SetState(param_1,3,8);
      }
      break;
    case 0xb:
      SaveSlot_SetState(param_1,1,1);
      break;
    case 0xc:
    case 0xd:
      if (*(int *)(param_1 + 0x80) == 0) {
        SaveSlot_SetState(param_1,3,7);
      }
      else {
        SaveSlot_SetState(param_1,3,8);
      }
      break;
    case 0xe:
      SaveSlot_SetState(param_1,1,1);
    }
  }
  else {
    SaveSlot_SetState(param_1,1,1);
  }
  return 1;
}

// 0x00173350  size 0x90
undefined4 SaveSlot_StartLoad(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x3c) == '\x03') &&
     ((*(char *)(param_1 + 0x3d) == '\a' || (*(char *)(param_1 + 0x3d) == '\b')))) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x90) = param_3;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = param_4;
    if (*(int *)(param_1 + 0x40) == 0) {
      SaveSlot_SetState(param_1,0xe,1);
      uVar1 = 1;
    }
    else {
      SaveSlot_SetState(param_1,5,1);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x001733e0  size 0x68
undefined4 SaveSlot_StartSave(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x3c) == '\x03') && (*(char *)(param_1 + 0x3d) == '\b')) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x90) = param_3;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = param_4;
    SaveSlot_SetState(param_1,0xb,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00173450  size 0x40
undefined4 SaveSlot_ConsumeDone(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x3d) == '\x04') && (*(char *)(param_1 + 0x3c) == '\x03')) {
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined1 *)(param_1 + 0x3d) = 7;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00173490  size 0x1c
undefined4 SaveSlot_GetFileList(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x80);
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
  return *(undefined4 *)(param_1 + 0x78);
}

// 0x001734b0  size 0x8
undefined1 SaveSlot_GetSubState(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3d);
}

// 0x001734c0  size 0x8
undefined1 SaveSlot_GetState(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}

// 0x001734d0  size 0x94
undefined4 SaveSlot_Close(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x3d) == '\x01') {
    uVar1 = 0;
  }
  else {
    if (*(int *)(iVar2 + 0x78) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x78) = 0;
    }
    if (*(int *)(iVar2 + 0x7c) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x7c) = 0;
    }
    *(undefined4 *)(iVar2 + 0x70) = 0;
    if (*(int *)(iVar2 + 0x74) != 0) {
      Mem_Free();
      *(undefined4 *)(iVar2 + 0x74) = 0;
    }
    SaveSlot_SetState(param_1,0,0);
    uVar1 = 1;
  }
  return uVar1;
}

// 0x00173570  size 0xdc
undefined4 SaveSlot_Open(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if ((*(char *)(iVar4 + 0x3c) == '\0') && (*(char *)(iVar4 + 0x3d) == '\0')) {
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    *(undefined4 *)(iVar4 + 0x60) = 0;
    *(undefined4 *)(iVar4 + 100) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = param_2;
    iVar1 = *(int *)(*(int *)(iVar4 + 0x6c) + 4);
    iVar3 = *(int *)(*(int *)(iVar4 + 0x6c) + 8) + 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    *(int *)(iVar4 + 0x70) = iVar3;
    uVar2 = Mem_AllocAligned(*(int *)(iVar4 + 0x70) << 6,0x40,*(undefined4 *)(iVar4 + 0x38));
    *(undefined4 *)(iVar4 + 0x74) = uVar2;
    uVar2 = Mem_Alloc16(*(int *)(*(int *)(iVar4 + 0x6c) + 4) * 0x28,*(undefined4 *)(iVar4 + 0x38));
    *(undefined4 *)(iVar4 + 0x78) = uVar2;
    uVar2 = Mem_Alloc16(*(int *)(*(int *)(iVar4 + 0x6c) + 4) * *(int *)(*(int *)(iVar4 + 0x6c) + 8)
                        * 0x1c,*(undefined4 *)(iVar4 + 0x38));
    *(undefined4 *)(iVar4 + 0x7c) = uVar2;
    SaveSlot_SetState(param_1,1,1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// 0x00173650  size 0xd8c
/* memory-card state machine */

void SaveSlot_Update(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar5 = (uint *)param_1;
  uVar6 = *puVar5;
  uVar7 = uVar6 & 8;
  if ((uVar7 == 0) && (puVar5[5] != 0)) {
    return;
  }
  switch((char)puVar5[0xf]) {
  case '\0':
    break;
  case '\x01':
    Mc_QueueCommand(param_1,0,1,7,0,0,0);
    SaveSlot_SetState(param_1,2,1);
    break;
  case '\x02':
    if (puVar5[0x11] == 0) {
      puVar5[0x13] = uVar6;
      puVar5[0x15] = puVar5[2];
      puVar5[0x16] = puVar5[4];
      puVar5[0x17] = puVar5[3];
      puVar5[0x11] = puVar5[0x11] + 1;
    }
    else if ((((puVar5[0x13] == uVar6) && (puVar5[0x15] == puVar5[2])) &&
             (puVar5[0x16] == puVar5[4])) && (puVar5[0x17] == puVar5[3])) {
      puVar5[0x11] = puVar5[0x11] + 1;
    }
    else {
      puVar5[0x11] = 0;
    }
    if ((*puVar5 & 8) == 0) {
      if ((int)puVar5[0x11] < 4) {
        Mc_QueueCommand(param_1,0,1,7,0,0,0);
      }
      else {
        if (puVar5[0x15] == 2) {
          if (puVar5[0x16] == 0) {
            SaveSlot_SetState(param_1,3,4);
            puVar5[0x11] = 0;
            break;
          }
          SaveSlot_SetState(param_1,7,1);
        }
        else {
          SaveSlot_SetState(param_1,3);
          puVar5[0x13] = *puVar5;
          puVar5[0x15] = puVar5[2];
          puVar5[0x16] = puVar5[4];
          puVar5[0x17] = puVar5[3];
        }
        puVar5[0x11] = 0;
      }
    }
    else {
      Mc_CancelCommand(param_1);
      puVar5[0x11] = 0;
    }
    break;
  case '\x03':
  case '\x04':
    if (uVar7 == 0) {
      if (puVar5[0x13] == uVar6) {
        if ((int)puVar5[0x14] < 10) {
          puVar5[0x14] = puVar5[0x14] + 1;
        }
        else {
          Mc_QueueCommand(param_1,0,1,0,0,0,0);
          puVar5[0x14] = 0;
        }
      }
      else if ((char)puVar5[0xf] == '\x03') {
        SaveSlot_SetState(param_1,1,1);
      }
      else {
        puVar5[0x12] = 1;
      }
    }
    else {
      Mc_CancelCommand(param_1);
      puVar5[0x14] = 0;
    }
    break;
  case '\x05':
    Mc_QueueCommand(param_1,0,0x10,0,0,0,0);
    SaveSlot_SetState(param_1,6,1);
    break;
  case '\x06':
    if (uVar7 == 0) {
      if (puVar5[0x10] == 0) {
        SaveSlot_SetState(param_1,4,5);
      }
      else {
        SaveSlot_SetState(param_1,0xe,1);
      }
    }
    else {
      Mc_CancelCommand(param_1);
      SaveSlot_SetState(param_1,4,6);
    }
    break;
  case '\a':
    *(undefined1 *)(puVar5 + 0x28) = 0x2f;
    iVar3 = SaveSlot_BuildPath(param_1,(int)puVar5 + 0xa1,0xffffffffffffffff,0xffffffffffffffff);
    maybe_strcpy((int)puVar5 + iVar3 + 0xa1,0x363358);
    Mc_QueueCommand(param_1,0,0xd,puVar5 + 0x28,0,puVar5[0x1c],puVar5[0x1d]);
    SaveSlot_SetState(param_1,8,1);
    break;
  case '\b':
    if (uVar7 == 0) {
      SaveSlot_ClearLists(param_1,puVar5[8]);
      if ((int)puVar5[8] < 1) {
        SaveSlot_SetState(param_1,3,7);
      }
      else {
        SaveSlot_SetState(param_1,9,1);
      }
    }
    else {
      Mc_CancelCommand(param_1);
      if (puVar5[10] == 0x13) {
        SaveSlot_SetState(param_1,3,2);
      }
      else if (puVar5[10] == 5) {
        SaveSlot_SetState(param_1,3,3);
      }
      else {
        SaveSlot_SetState(param_1,1,1);
      }
    }
    break;
  case '\t':
    uVar6 = puVar5[0x21];
    iVar3 = *(int *)(puVar5[0x1b] + 4);
    if ((int)uVar6 < iVar3) {
      do {
        if (*(int *)(puVar5[0x1e] + uVar6 * 0x28) != 0) break;
        puVar5[0x21] = puVar5[0x21] + 1;
        uVar6 = puVar5[0x21];
        iVar3 = *(int *)(puVar5[0x1b] + 4);
      } while ((int)uVar6 < iVar3);
    }
    if ((int)uVar6 < iVar3) {
      *(undefined1 *)(puVar5 + 0x28) = 0x2f;
      iVar3 = SaveSlot_BuildPath(param_1,(int)puVar5 + 0xa1,uVar6,0xffffffffffffffff);
      maybe_strcpy((int)puVar5 + iVar3 + 0xa1,0x363360);
      Mc_QueueCommand(param_1,0,0xd,puVar5 + 0x28,0,puVar5[0x1c],puVar5[0x1d]);
      SaveSlot_SetState(param_1,10,1);
    }
    else {
      SaveSlot_SetState(param_1,3,8);
    }
    break;
  case '\n':
    if (uVar7 == 0) {
      uVar6 = puVar5[0x21];
      puVar5[0x21] = uVar6 + 1;
      uVar7 = puVar5[0x1e];
      uVar2 = SaveSlot_ParseDirectory(param_1,uVar6,puVar5[8]);
      *(undefined4 *)(uVar7 + uVar6 * 0x28 + 0x20) = uVar2;
      SaveSlot_SetState(param_1,9,1);
    }
    else {
      Mc_CancelCommand(param_1);
      if (puVar5[10] == 0x13) {
        SaveSlot_SetState(param_1,3,2);
      }
      else if (puVar5[10] == 5) {
        SaveSlot_SetState(param_1,3,3);
      }
      else {
        SaveSlot_SetState(param_1,1,1);
      }
    }
    break;
  case '\v':
    cVar1 = SaveSlot_FindFile(param_1,puVar5[0x22],puVar5[0x24],puVar5[0x27]);
    if (cVar1 == '\0') {
      SaveSlot_SetState(param_1,0xc,1);
    }
    else {
      SaveSlot_SetState(param_1,4,10);
    }
    break;
  case '\f':
    if (uVar7 == 0) {
      if ((int)puVar5[0x26] < (int)puVar5[0x27]) {
        puVar8 = (uint *)(puVar5[0x24] + puVar5[0x26] * 0xc);
        if (puVar5[0x23] != *puVar8) {
          if (-1 < (int)puVar5[0x23]) {
            Mc_QueueCommand(param_1,0,3,0,0,0,0);
          }
          puVar5[0x23] = *puVar8;
          uVar6 = puVar5[0x22];
          uVar7 = puVar5[0x23];
          *(undefined1 *)(puVar5 + 0x48) = 0x2f;
          iVar3 = SaveSlot_BuildPath(param_1,(int)puVar5 + 0x121,uVar6,0xffffffffffffffff);
          if (-1 < (int)uVar7) {
            *(undefined1 *)((int)puVar5 + iVar3 + 0x121) = 0x2f;
            SaveSlot_BuildPath(param_1,(int)puVar5 + iVar3 + 0x122,uVar6,uVar7);
          }
          Mc_QueueCommand(param_1,0,2,puVar5 + 0x48,1,0,0);
        }
        Mc_QueueCommand(param_1,0,5,puVar8[1],puVar8[2],0,0);
        puVar5[0x26] = puVar5[0x26] + 1;
      }
      else {
        Mc_QueueCommand(param_1,0,3,0,0,0,0);
        SaveSlot_SetState(param_1,0xd,1);
      }
    }
    else {
      Mc_CancelCommand(param_1);
      if ((puVar5[10] == 0x13) || (puVar5[10] == 9)) {
        SaveSlot_SetState(param_1,3,2);
      }
      else {
        SaveSlot_SetState(param_1,4,0xb);
      }
    }
    break;
  case '\r':
    if (uVar7 == 0) {
      SaveSlot_SetState(param_1,4,9);
    }
    else {
      Mc_CancelCommand(param_1);
      if ((puVar5[10] == 0x13) || (puVar5[10] == 9)) {
        SaveSlot_SetState(param_1,3,2);
      }
      else {
        SaveSlot_SetState(param_1,4,0xb);
      }
    }
    break;
  case '\x0e':
    cVar1 = SaveSlot_FindFreeName(param_1,puVar5[0x22],puVar5[0x24],puVar5[0x27]);
    if (cVar1 == '\0') {
      uVar6 = puVar5[0x22];
      piVar4 = (int *)(puVar5[0x1e] + uVar6 * 0x28);
      if (*piVar4 == 0) {
        *(undefined1 *)(puVar5 + 0x28) = 0x2f;
        SaveSlot_BuildPath(param_1,(int)puVar5 + 0xa1,uVar6,0xffffffffffffffff);
        Mc_QueueCommand(param_1,0,0xb,puVar5 + 0x28,0,0,0);
        Mc_QueueCommand(param_1,0,0xd,puVar5 + 0x28,0,1,puVar5[0x1d]);
      }
      else if (*(int *)piVar4[9] == 1) {
        *(undefined1 *)(puVar5 + 0x48) = 0x2f;
        iVar3 = SaveSlot_BuildPath(param_1,(int)puVar5 + 0x121,uVar6,0xffffffffffffffff);
        *(undefined1 *)((int)puVar5 + iVar3 + 0x121) = 0x2f;
        SaveSlot_BuildPath(param_1,(int)puVar5 + iVar3 + 0x122,uVar6,0);
        Mc_QueueCommand(param_1,0,0xf,puVar5 + 0x48,0,0,0);
      }
      SaveSlot_SetState(param_1,0xf,1);
    }
    else {
      SaveSlot_SetState(param_1,4,0xd);
    }
    break;
  case '\x0f':
    if (uVar7 == 0) {
      if (*(int *)(puVar5[0x1e] + puVar5[0x22] * 0x28) == 0) {
        puVar5[0x20] = puVar5[0x20] + puVar5[8];
        SaveSlot_ParseFileList(param_1);
        uVar6 = puVar5[0x26];
      }
      else {
        uVar6 = puVar5[0x26];
      }
      if ((int)uVar6 < (int)puVar5[0x27]) {
        puVar8 = (uint *)(puVar5[0x24] + uVar6 * 0xc);
        if ((int)puVar5[0x23] < 0) {
          puVar5[0x23] = *puVar8;
          uVar6 = puVar5[0x22];
          uVar7 = puVar5[0x23];
          *(undefined1 *)(puVar5 + 0x48) = 0x2f;
          iVar3 = SaveSlot_BuildPath(param_1,(int)puVar5 + 0x121,uVar6,0xffffffffffffffff);
          if (-1 < (int)uVar7) {
            *(undefined1 *)((int)puVar5 + iVar3 + 0x121) = 0x2f;
            SaveSlot_BuildPath(param_1,(int)puVar5 + iVar3 + 0x122,uVar6,uVar7);
          }
          Mc_QueueCommand(param_1,0,2,puVar5 + 0x48,0x202,0,0);
          uVar6 = puVar8[1];
        }
        else {
          uVar6 = puVar8[1];
        }
        Mc_QueueCommand(param_1,0,6,uVar6,puVar8[2],0,0);
        if ((puVar5[0x26] + 1 == puVar5[0x27]) ||
           (*puVar8 != *(uint *)(puVar5[0x26] * 0xc + puVar5[0x24] + 0xc))) {
          Mc_QueueCommand(param_1,0,3,0,0,0,0);
          uVar6 = puVar5[0x22];
          uVar7 = puVar5[0x23];
          *(undefined1 *)(puVar5 + 0x28) = 0x2f;
          iVar3 = SaveSlot_BuildPath(param_1,(int)puVar5 + 0xa1,uVar6,0xffffffffffffffff);
          if (-1 < (int)uVar7) {
            *(undefined1 *)((int)puVar5 + iVar3 + 0xa1) = 0x2f;
            SaveSlot_BuildPath(param_1,(int)puVar5 + iVar3 + 0xa2,uVar6,uVar7);
          }
          Mc_QueueCommand(param_1,0,0xd,puVar5 + 0x28,0,1,puVar5[0x1d] + puVar5[0x25] * 0x40);
          puVar5[0x23] = 0xffffffff;
          puVar5[0x25] = puVar5[0x25] + 1;
        }
        puVar5[0x26] = puVar5[0x26] + 1;
      }
      else {
        SaveSlot_ParseDirectory(param_1,puVar5[0x22],puVar5[0x25]);
        Mc_QueueCommand(param_1,0,1,7,0,0,0);
        SaveSlot_SetState(param_1,0x10,1);
      }
    }
    else {
      Mc_CancelCommand(param_1);
      if ((puVar5[10] == 0x13) || (puVar5[10] == 9)) {
        SaveSlot_SetState(param_1,3,2);
      }
      else {
        SaveSlot_SetState(param_1,4,0xe);
      }
    }
    break;
  case '\x10':
    puVar5[0x10] = 0;
    if ((*puVar5 & 8) == 0) {
      puVar5[0x15] = puVar5[2];
      puVar5[0x16] = puVar5[4];
      puVar5[0x17] = puVar5[3];
      SaveSlot_SetState(param_1,4,0xc);
    }
    else {
      Mc_CancelCommand(param_1);
      if ((puVar5[10] == 0x13) || (puVar5[10] == 9)) {
        SaveSlot_SetState(param_1,3,2);
      }
      else {
        SaveSlot_SetState(param_1,4,0xe);
      }
    }
    break;
  default:
    goto switchD_001736ac_default;
  }
switchD_001736ac_default:
  return;
}

