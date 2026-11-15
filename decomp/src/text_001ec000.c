// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x001ec000 - 0x001f0000
#include "ghidra_types.h"

// 0x001ec030  size 0x2c8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RaceIntro_Update(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
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
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar1 = *(int *)(param_1 + 0x14);
  RaceIntro_SetupColliders(iVar1);
  iVar3 = *(int *)(iRam0036f3b0 + 0xc);
  lVar4 = RaceScene_IsRunning();
  if (lVar4 == 0) {
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  else if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x14), iVar3 != 0)) {
    fVar8 = (float)Cam_NormalizeDirection(*(undefined4 *)(_g_Loading + 0x14));
    if (10.0 < fVar8) {
      *(undefined4 *)(iVar1 + 0x5c) = 0;
    }
    uVar5 = GameState_Get_0();
    uVar6 = GameState_Get_2();
    uVar7 = GameState_Get_3();
    RaceScene_SetPaused(uVar5,uVar6,uVar7,0);
    if (*(int *)(iVar3 + 0x1c) != 0) {
      lVar4 = RaceCar_Get(0);
      if (lVar4 == 0) {
        maybe_Vu0_UnitMatrix(auStack_40);
        iVar2 = *(int *)(iVar3 + 0x1c);
      }
      else {
        iVar2 = (int)lVar4;
        uStack_80 = *(undefined4 *)(iVar2 + 0xe0);
        uStack_7c = *(undefined4 *)(iVar2 + 0xe4);
        uStack_78 = *(undefined4 *)(iVar2 + 0xe8);
        uStack_74 = *(undefined4 *)(iVar2 + 0xec);
        uStack_70 = *(undefined4 *)(iVar2 + 0xf0);
        uStack_6c = *(undefined4 *)(iVar2 + 0xf4);
        uStack_68 = *(undefined4 *)(iVar2 + 0xf8);
        uStack_64 = *(undefined4 *)(iVar2 + 0xfc);
        uStack_60 = *(undefined4 *)(iVar2 + 0x100);
        uStack_5c = *(undefined4 *)(iVar2 + 0x104);
        uStack_58 = *(undefined4 *)(iVar2 + 0x108);
        uStack_54 = *(undefined4 *)(iVar2 + 0x10c);
        uStack_50 = *(undefined4 *)(iVar2 + 0x110);
        uStack_4c = *(undefined4 *)(iVar2 + 0x114);
        uStack_48 = *(undefined4 *)(iVar2 + 0x118);
        uStack_44 = *(undefined4 *)(iVar2 + 0x11c);
        sceVu0CopyVector(auStack_40,&uStack_80);
        sceVu0CopyVector(auStack_30,&uStack_70);
        sceVu0CopyVector(auStack_20,&uStack_60);
        sceVu0CopyVector(auStack_10,&uStack_50);
        iVar2 = *(int *)(iVar3 + 0x1c);
      }
      Prop_SetLight(0,(*(uint *)(iVar2 + 0x110) & 4) != 0,auStack_40);
    }
    if (*(int *)(iVar3 + 0x20) != 0) {
      lVar4 = RaceCar_Get(1);
      if (lVar4 == 0) {
        maybe_Vu0_UnitMatrix(auStack_40);
        iVar3 = *(int *)(iVar3 + 0x1c);
      }
      else {
        iVar2 = (int)lVar4;
        uStack_c0 = *(undefined4 *)(iVar2 + 0xe0);
        uStack_bc = *(undefined4 *)(iVar2 + 0xe4);
        uStack_b8 = *(undefined4 *)(iVar2 + 0xe8);
        uStack_b4 = *(undefined4 *)(iVar2 + 0xec);
        uStack_b0 = *(undefined4 *)(iVar2 + 0xf0);
        uStack_ac = *(undefined4 *)(iVar2 + 0xf4);
        uStack_a8 = *(undefined4 *)(iVar2 + 0xf8);
        uStack_a4 = *(undefined4 *)(iVar2 + 0xfc);
        uStack_a0 = *(undefined4 *)(iVar2 + 0x100);
        uStack_9c = *(undefined4 *)(iVar2 + 0x104);
        uStack_98 = *(undefined4 *)(iVar2 + 0x108);
        uStack_94 = *(undefined4 *)(iVar2 + 0x10c);
        uStack_90 = *(undefined4 *)(iVar2 + 0x110);
        uStack_8c = *(undefined4 *)(iVar2 + 0x114);
        uStack_88 = *(undefined4 *)(iVar2 + 0x118);
        uStack_84 = *(undefined4 *)(iVar2 + 0x11c);
        sceVu0CopyVector(auStack_40,&uStack_c0);
        sceVu0CopyVector(auStack_30,&uStack_b0);
        sceVu0CopyVector(auStack_20,&uStack_a0);
        sceVu0CopyVector(auStack_10,&uStack_90);
        iVar3 = *(int *)(iVar3 + 0x1c);
      }
      Prop_SetLight(1,(*(uint *)(iVar3 + 0x110) & 4) != 0,auStack_40);
    }
    RaceScene_UpdateAmbient(iVar1 + 0x5c);
  }
  return;
}

// 0x001ec300  size 0x58
void RaceIntro_Exit(void)

{
  IntroCar_Free();
  IntroFlag_Free();
  CourseScene_Unload();
  UiRes_UploadFonts(uRam0036f2c0,uRam0036f2c0);
  UiMgr_SetActive(uRam0036f2c0,uRam0036f2c0);
  UiMgr_RebindTextures(uRam0036f2c0,uRam0036f2c0);
  RaceScene_FreeProps();
  return;
}

// 0x001ec360  size 0x54
void RaceIntro_Enter(int param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = *(undefined2 **)(param_1 + 0x14);
  uVar2 = Course_GetCurrentId();
  *puVar1 = uVar2;
  RaceScene_AllocProps(0x430750);
  RaceIntro_LoadAssets(puVar1);
  *(code **)(param_1 + 0x1c) = RaceIntro_Update;
  return;
}

// 0x001ec3c0  size 0x45c
void UiModel_DrawPart(undefined8 param_1,float *param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  int in_zero_lo;
  int in_zero_hi;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  int iStack_2a0;
  int iStack_29c;
  int iStack_250;
  undefined1 auStack_230 [8];
  float fStack_228;
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [256];
  undefined1 auStack_20 [8];
  float fStack_18;
  int aiStack_8 [2];
  
  if (param_4 < 4) {
    bVar2 = true;
  }
  else {
    iVar8 = 0;
    if (0 < param_4) {
      pfVar7 = param_2;
      do {
        if (iVar8 == param_4 + -1) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar8 + 1;
        }
        iVar5 = param_4;
        if (iVar8 != 0) {
          iVar5 = iVar8;
        }
        maybe_sceVu0InterVectorXYZ
                  (auStack_230,param_2 + (iVar5 + -1) * 4,param_2 + iVar4 * 4,pfVar7);
        if (0.0 <= fStack_228) {
          bVar2 = false;
          goto LAB_001ec484;
        }
        iVar8 = iVar8 + 1;
        pfVar7 = pfVar7 + 4;
      } while (iVar8 < param_4);
    }
    bVar2 = true;
  }
LAB_001ec484:
  if (bVar2) {
    piVar10 = (int *)param_1;
    Obj_Reset(*piVar10,6,param_4);
    *(uint *)*piVar10 = *(uint *)*piVar10 | 2;
    iVar8 = *piVar10;
    *(undefined4 *)(iVar8 + 0x2c0) = 0x80;
    *(undefined4 *)(iVar8 + 0x2c4) = 0x80;
    *(undefined4 *)(iVar8 + 0x2c8) = 0x80;
    *(undefined4 *)(iVar8 + 0x2cc) = 0x80;
    Obj_CopyParams(*piVar10,param_2);
    Obj_SetMatrixDirty(*piVar10,param_3);
    *piVar10 = *piVar10 + 0x310;
  }
  else {
    fVar14 = *param_2;
    iVar8 = 0;
    iVar4 = 1;
    if (1 < param_4) {
      pfVar7 = param_2;
      do {
        pfVar7 = pfVar7 + 4;
        if (*pfVar7 < fVar14) {
          fVar14 = *pfVar7;
          iVar8 = iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_4);
    }
    if (iVar8 == param_4 + -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar8 + 1;
    }
    iVar5 = param_4;
    if (iVar8 != 0) {
      iVar5 = iVar8;
    }
    iVar5 = iVar5 + -1;
    if (iVar4 == param_4 + -1) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar4 + 1;
    }
    aiStack_8[0] = iVar4;
    bVar2 = false;
    iStack_250 = -1;
    fVar14 = 65535.0;
    aiStack_8[1] = iVar5;
    if (iVar9 != iVar5) {
      iVar11 = iVar9;
      do {
        pfVar7 = param_2 + iVar11 * 4;
        maybe_sceVu0InterVectorXYZ(auStack_20,param_2 + iVar4 * 4,param_2 + iVar8 * 4,pfVar7);
        bVar1 = 0.0 <= fStack_18;
        maybe_sceVu0InterVectorXYZ(auStack_20,param_2 + iVar5 * 4,param_2 + iVar4 * 4,pfVar7);
        if ((bVar1 == 0.0 <= fStack_18) &&
           (maybe_sceVu0InterVectorXYZ(auStack_20,param_2 + iVar8 * 4,param_2 + iVar5 * 4,pfVar7),
           bVar1 == 0.0 <= fStack_18)) {
          bVar2 = true;
          break;
        }
        if (iVar11 == param_4 + -1) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar11 + 1;
        }
      } while (iVar11 != iVar5);
    }
    if (bVar2) {
      if (iVar9 != iVar5) {
        do {
          fVar15 = (float)maybe_sceVu0InterVectorDist
                                    (auStack_20,param_2 + iVar8 * 4,param_2 + iVar9 * 4);
          if (fVar15 < fVar14) {
            fVar14 = fVar15;
            iStack_250 = iVar9;
          }
          if (iVar9 == param_4 + -1) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 != iVar5);
      }
      aiStack_8[0] = iVar8;
      aiStack_8[1] = iStack_250;
    }
    iVar8 = 0;
    piVar10 = aiStack_8;
    do {
      lVar6 = (long)*piVar10;
      iVar4 = 0;
      uVar3 = iVar8 + 1U & 1;
      if (((int)(iVar8 + 1U) < 0) && (uVar3 != 0)) {
        uVar3 = uVar3 - 2;
      }
      if (param_4 + -1 == aiStack_8[uVar3]) {
        iStack_2a0 = in_zero_lo;
        iStack_29c = in_zero_hi;
      }
      else {
        iStack_2a0 = aiStack_8[uVar3] + 1;
        iStack_29c = iStack_2a0 >> 0x1f;
      }
      if (lVar6 != CONCAT44(iStack_29c,iStack_2a0)) {
        puVar12 = auStack_120;
        puVar13 = auStack_220;
        do {
          iVar5 = (int)lVar6;
          sceVu0CopyVector(puVar12,param_2 + iVar5 * 4);
          maybe_sceVu0CopyVectorInt(puVar13,param_3 + iVar5 * 0x10);
          puVar12 = puVar12 + 0x10;
          puVar13 = puVar13 + 0x10;
          iVar4 = iVar4 + 1;
          if (lVar6 == param_4 + -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = (long)(iVar5 + 1);
          }
        } while (lVar6 != CONCAT44(iStack_29c,iStack_2a0));
      }
      UiModel_DrawPart(param_1,auStack_120,auStack_220,iVar4);
      iVar8 = iVar8 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar8 < 2);
  }
  return;
}

// 0x001ec820  size 0x314
void UiModel_BuildMatrix(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_80 [5];
  undefined4 uStack_6c;
  undefined1 auStack_40 [64];
  
  maybe_Vu0_UnitMatrix(auStack_40);
  if ((*(uint *)(param_3 + 0x10) & 2) == 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
  }
  else {
    fStack_90 = -*(float *)(param_3 + 0x44);
    fStack_8c = 0.0;
    uStack_88 = 0;
    sceVu0TransMatrix(auStack_40,auStack_40,&fStack_90);
    maybe_Vu0_UnitMatrix(auStack_80);
    auStack_80[0] = 0xbf800000;
    sceVu0MulMatrix(auStack_40,auStack_80,auStack_40);
    fStack_90 = *(float *)(param_3 + 0x44);
    fStack_8c = 0.0;
    uStack_88 = 0;
    sceVu0TransMatrix(auStack_40,auStack_40,&fStack_90);
    uVar1 = *(uint *)(param_3 + 0x10);
  }
  if ((uVar1 & 1) == 0) {
    fVar2 = *(float *)(param_3 + 0x4c);
  }
  else {
    fStack_8c = -*(float *)(param_3 + 0x48);
    fStack_90 = 0.0;
    uStack_88 = 0;
    sceVu0TransMatrix(auStack_40,auStack_40,&fStack_90);
    maybe_Vu0_UnitMatrix(auStack_80);
    uStack_6c = 0xbf800000;
    sceVu0MulMatrix(auStack_40,auStack_80,auStack_40);
    fStack_8c = *(float *)(param_3 + 0x48);
    uStack_88 = 0;
    fStack_90 = 0.0;
    sceVu0TransMatrix(auStack_40,auStack_40,&fStack_90);
    fVar2 = *(float *)(param_3 + 0x4c);
  }
  if (((fVar2 == 1.0) && (*(float *)(param_3 + 0x50) == 1.0)) && (*(float *)(param_3 + 0x54) == 0.0)
     ) {
    fStack_8c = *(float *)(param_3 + 0x18);
  }
  else {
    fStack_8c = -*(float *)(param_3 + 0x48);
    fStack_90 = -*(float *)(param_3 + 0x44);
    uStack_88 = 0;
    sceVu0TransMatrix(auStack_40,auStack_40,&fStack_90);
    if ((*(float *)(param_3 + 0x4c) == 1.0) && (*(float *)(param_3 + 0x50) == 1.0)) {
      fVar2 = *(float *)(param_3 + 0x54);
    }
    else {
      maybe_Vu0_UnitMatrix(auStack_80);
      auStack_80[0] = *(undefined4 *)(param_3 + 0x4c);
      uStack_6c = *(undefined4 *)(param_3 + 0x50);
      sceVu0MulMatrix(auStack_40,auStack_80,auStack_40);
      fVar2 = *(float *)(param_3 + 0x54);
    }
    if (fVar2 != 0.0) {
      fVar2 = fVar2 * 0.017453292;
      while ((3.1415927 < fVar2 || (fVar2 < -3.1415927))) {
        if (3.1415927 < fVar2) {
          fVar2 = fVar2 - 6.2831855;
        }
        else {
          fVar2 = fVar2 + 6.2831855;
        }
      }
      maybe_Vu0_RotMatrixX(auStack_40,auStack_40);
    }
    fStack_8c = *(float *)(param_3 + 0x48);
    fStack_90 = *(float *)(param_3 + 0x44);
    uStack_88 = 0;
    sceVu0TransMatrix(auStack_40,auStack_40,&fStack_90);
    fStack_8c = *(float *)(param_3 + 0x18);
  }
  fStack_90 = *(float *)(param_3 + 0x14);
  uStack_88 = 0;
  sceVu0TransMatrix(auStack_40,auStack_40,&fStack_90);
  sceVu0MulMatrix(param_1,param_2,auStack_40);
  return;
}

// 0x001ecb40  size 0x23c
/* WARNING: Removing unreachable block (ram,0x001ecc0c) */

float UiAnim_EvalKey(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float afStack_10 [4];
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) == iVar2) {
    afStack_10[0] = -10000.0;
  }
  else {
    iVar5 = 1;
    fVar6 = (float)(param_2 - iVar2) / (float)(*(int *)(param_1 + 0x14) - iVar2);
    afStack_10[0] = *(float *)(param_1 + 0x18);
    afStack_10[1] = (float)*(undefined4 *)(param_1 + 0x1c);
    afStack_10[2] = (float)*(undefined4 *)(param_1 + 0x20);
    afStack_10[3] = (float)*(undefined4 *)(param_1 + 0x24);
    do {
      iVar2 = -iVar5 + 4;
      iVar4 = 0;
      if (0 < iVar2) {
        if (8 < iVar2) {
          bVar1 = false;
          if ((-1 < iVar2) && (iVar2 < 0x7fffffff)) {
            bVar1 = true;
          }
          if (bVar1) {
            pfVar3 = afStack_10;
            do {
              iVar4 = iVar4 + 8;
              *pfVar3 = fVar6 * (pfVar3[1] - *pfVar3) + *pfVar3 + 0.0;
              pfVar3[1] = fVar6 * (pfVar3[2] - pfVar3[1]) + pfVar3[1] + 0.0;
              pfVar3[2] = fVar6 * (pfVar3[3] - pfVar3[2]) + pfVar3[2] + 0.0;
              pfVar3[3] = fVar6 * (pfVar3[4] - pfVar3[3]) + pfVar3[3] + 0.0;
              pfVar3[4] = fVar6 * (pfVar3[5] - pfVar3[4]) + pfVar3[4] + 0.0;
              pfVar3[5] = fVar6 * (pfVar3[6] - pfVar3[5]) + pfVar3[5] + 0.0;
              pfVar3[6] = fVar6 * (pfVar3[7] - pfVar3[6]) + pfVar3[6] + 0.0;
              pfVar3[7] = fVar6 * (pfVar3[8] - pfVar3[7]) + pfVar3[7] + 0.0;
              pfVar3 = pfVar3 + 8;
            } while (iVar4 < -iVar5 + -4);
          }
        }
        if (iVar4 < iVar2) {
          pfVar3 = afStack_10 + iVar4;
          do {
            iVar4 = iVar4 + 1;
            *pfVar3 = fVar6 * (pfVar3[1] - *pfVar3) + *pfVar3 + 0.0;
            pfVar3 = pfVar3 + 1;
          } while (iVar4 < iVar2);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  return afStack_10[0];
}

// 0x001ecd80  size 0x404
/* 39 callers */

void UiLayout_UpdateAnim(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  float fVar13;
  uint uVar14;
  
  iVar6 = (int)param_1 + param_2 * 0x14;
  piVar12 = (int *)(iVar6 + 0x30c);
  if (*(int *)(iVar6 + 0x31c) == 0) {
    *(undefined4 *)(iVar6 + 0x318) = 0;
  }
  else if (*(int *)(iVar6 + 0x318) == 1) {
    *(undefined4 *)(iVar6 + 0x318) = 0;
    piVar11 = *(int **)(iVar6 + 0x31c);
    iVar1 = *(int *)(iVar6 + 0x310);
    if (*piVar11 != -1) {
      iVar9 = 0;
      do {
        piVar11 = (int *)((int)piVar11 + iVar9);
        if (iVar1 < 0) {
          iVar10 = *piVar11;
        }
        else {
          iVar10 = iVar1;
        }
        if (piVar11[5] < *piVar12) {
LAB_001ece1c:
          piVar11 = *(int **)(iVar6 + 0x31c);
        }
        else {
          bVar4 = true;
          *(undefined4 *)(iVar6 + 0x318) = 1;
          if (piVar11[4] == *piVar12) {
            uVar2 = piVar11[1];
            if ((uVar2 & 0xff) < 0x49) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar2 & 0xff) {
              case 0:
                goto switchD_001eceac_default;
              case 1:
              }
            }
            else {
switchD_001eceac_default:
              bVar4 = false;
            }
            if (bVar4) {
              piVar5 = (int *)UiElem_GetPropPtr(param_1,iVar10,uVar2 & 0xff);
              piVar11[2] = *piVar5;
            }
            else {
              piVar5 = (int *)UiElem_GetPropPtr(param_1,iVar10,uVar2 & 0xff);
              piVar11[2] = *piVar5;
            }
          }
          if (*piVar12 < piVar11[4]) goto LAB_001ece1c;
          fVar13 = (float)UiAnim_EvalKey(piVar11);
          uVar2 = piVar11[1];
          if ((uVar2 & 0xff) < 0x49) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar2 & 0xff) {
            case 0:
              bVar4 = false;
              break;
            case 1:
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
          if (!bVar4) {
            if (fVar13 < -1000.0) {
              uVar14 = piVar11[3];
            }
            else if (((int)uVar2 < 0x39) || (0x48 < (int)uVar2)) {
              uVar14 = (uint)(fVar13 * (float)(piVar11[3] - piVar11[2]) + (float)piVar11[2] + 0.0);
            }
            else {
              uVar14 = piVar11[2];
              uVar3 = piVar11[3];
              iVar8 = (int)(uVar14 & 0xff0000) >> 0x10;
              iVar7 = (int)(uVar14 & 0xff00) >> 8;
              uVar14 = (int)(fVar13 * (float)(int)((uVar3 & 0xff) - (uVar14 & 0xff)) +
                            (float)(uVar14 & 0xff) + 0.0) |
                       (int)(fVar13 * (float)(((int)(uVar3 & 0xff00) >> 8) - iVar7) +
                            (float)iVar7 + 0.0) << 8 |
                       (int)(fVar13 * (float)(int)((uVar3 >> 0x18) - (uVar14 >> 0x18)) +
                            (float)(uVar14 >> 0x18) + 0.0) << 0x18 |
                       (int)(fVar13 * (float)(((int)(uVar3 & 0xff0000) >> 0x10) - iVar8) +
                            (float)iVar8 + 0.0) << 0x10;
            }
            UiElem_SetPropInt(param_1,iVar10,uVar2 & 0xff,uVar14);
            goto LAB_001ece1c;
          }
          if (-1000.0 <= fVar13) {
            fVar13 = fVar13 * ((float)piVar11[3] - (float)piVar11[2]) + (float)piVar11[2] + 0.0;
          }
          else {
            fVar13 = (float)piVar11[3];
          }
          UiElem_SetPropFloat(fVar13,param_1,iVar10,uVar2 & 0xff);
          piVar11 = *(int **)(iVar6 + 0x31c);
        }
        iVar9 = iVar9 + 0x28;
      } while (*(int *)((int)piVar11 + iVar9) != -1);
    }
    if ((*(int *)(iVar6 + 0x318) == 0) && (*(int *)(iVar6 + 0x314) == 1)) {
      *(undefined4 *)(iVar6 + 0x318) = 1;
      *piVar12 = 0;
    }
    else {
      *piVar12 = *piVar12 + 1;
    }
  }
  return;
}

// 0x001ed190  size 0x130
/* 27 callers */

void UiLayout_PlayAnim(undefined8 param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    bVar3 = false;
    if (*param_2 != -1) {
      piVar4 = param_2;
      do {
        if (iVar5 <= piVar4[5]) {
          bVar3 = true;
          if (piVar4[5] == iVar5) {
            uVar1 = piVar4[1];
            if ((uVar1 & 0xff) < 0x49) {
                    /* WARNING: Switch is manually overridden */
              switch(uVar1 & 0xff) {
              case 0:
                bVar2 = false;
                break;
              case 1:
                bVar2 = true;
              }
            }
            else {
              bVar2 = false;
            }
            if (bVar2) {
              UiElem_SetPropFloat(piVar4[3],param_1,*piVar4,uVar1 & 0xff);
            }
            else {
              UiElem_SetPropInt(param_1,*piVar4,uVar1 & 0xff,piVar4[3]);
            }
          }
        }
        piVar4 = piVar4 + 10;
      } while (*piVar4 != -1);
    }
  } while ((bVar3) && (iVar5 = iVar5 + 1, iVar5 < 100));
  return;
}

// 0x001ed2c0  size 0x88
/* 18 callers */

void UiLayout_IsAnimDone(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_2 * 0x14 + param_1;
  *(undefined4 *)(iVar1 + 0x310) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x31c) = 0;
  *(undefined4 *)(iVar1 + 0x30c) = 0;
  if (*(int *)(iVar1 + 0x31c) == 0) {
    *(undefined4 *)(iVar1 + 0x318) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x318) = 1;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x318);
  *(undefined4 *)(iVar1 + 0x30c) = 0;
  if (*(int *)(iVar1 + 0x31c) == 0) {
    *puVar2 = 0;
  }
  else {
    *puVar2 = 1;
  }
  *(undefined4 *)(param_2 * 0x14 + param_1 + 0x314) = param_5;
  *(int *)(iVar1 + 0x31c) = param_4;
  *puVar2 = 1;
  *(undefined4 *)(iVar1 + 0x310) = param_3;
  return;
}

// 0x001ed350  size 0x1e8
/* WARNING: Removing unreachable block (ram,0x001ed3fc) */
/* WARNING: Removing unreachable block (ram,0x001ed490) */

void UiModel_DrawNode(float param_1,float param_2,undefined8 param_3,undefined8 param_4,int param_5,
                     undefined8 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  float fStack_210;
  float fStack_20c;
  undefined4 uStack_208;
  int aiStack_200 [64];
  undefined4 auStack_100 [64];
  
  puVar8 = (undefined4 *)(param_5 + 0x68);
  iVar1 = *(int *)(param_5 + 0xc);
  fStack_20c = -*(float *)(param_5 + 0x48) * param_2;
  uStack_208 = 0;
  fStack_210 = -*(float *)(param_5 + 0x44) * param_1;
  sceVu0TransMatrix(param_6,param_6,&fStack_210);
  iVar7 = 0;
  if (0 < iVar1) {
    puVar6 = auStack_100;
    piVar5 = aiStack_200;
    do {
      uVar2 = puVar8[2];
      uVar3 = (int)(uVar2 & 0xff00) >> 8;
      uVar4 = uVar2 & 0xff;
      uVar9 = puVar8[1];
      iVar10 = (int)(((float)(uVar2 >> 0x18) * ((float)param_7 / 128.0)) / 2.0);
      *puVar6 = *puVar8;
      *piVar5 = (int)(uVar2 & 0xff0000) >> 0x10;
      puVar6[1] = uVar9;
      puVar6[2] = 0;
      puVar6[3] = 0x3f800000;
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      piVar5[1] = uVar3;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      piVar5[2] = uVar4;
      if (iVar10 < 0) {
        piVar5[3] = 0;
      }
      else {
        if (0x80 < iVar10) {
          iVar10 = 0x80;
        }
        piVar5[3] = iVar10;
      }
      sceVu0ApplyMatrix(puVar6,param_6,puVar6);
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
      puVar6 = puVar6 + 4;
      piVar5 = piVar5 + 4;
    } while (iVar7 < iVar1);
  }
  UiModel_DrawPart(param_4,auStack_100,aiStack_200,iVar1);
  return;
}

// 0x001ed540  size 0x2f4
void UiModel_DrawMesh(float param_1,float param_2,int param_3,int *param_4,int param_5,
                     undefined8 param_6,uint param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int iVar6;
  uint unaff_s5_lo;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  puVar1 = (uint *)*param_4;
  *param_4 = (int)(puVar1 + 0xc4);
  iVar2 = *(int *)(param_5 + 0x24);
  iVar3 = *(int *)(param_5 + 0x28);
  fVar12 = (float)*(int *)(param_5 + 0x1c);
  fVar11 = (float)*(int *)(param_5 + 0x20);
  fVar9 = (float)(iVar2 - *(int *)(param_5 + 0x1c));
  fVar10 = (float)(iVar3 - *(int *)(param_5 + 0x20));
  Obj_Reset(puVar1,5,4);
  *puVar1 = *puVar1 | 2;
  Obj_SetVisible(puVar1,1,*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 0xc));
  puVar1[0xb0] = 0x80;
  puVar1[0xb1] = 0x80;
  puVar1[0xb2] = 0x80;
  puVar1[0xb3] = 0;
  if ((int)param_7 < 0) {
    param_7 = 0;
  }
  else {
    if (0x80 < (int)param_7) {
      param_7 = 0x80;
    }
    param_7 = param_7 & 0xff;
  }
  puVar1[0xb3] = param_7;
  if (*(int *)(param_5 + 8) == 1) {
    unaff_s5_lo = *(int *)(*(int *)(param_5 + 0xc) * 0x80 + *(int *)(param_3 + 0x2d8) + 0xc) - 1;
  }
  else {
    if (g_UiMgr == (UiMgr *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else if (g_UiMgr->unk_508 == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4 = &g_UiMgr->field_0x2d0;
    }
    if (puVar4 != (undefined1 *)0x0) {
      unaff_s5_lo = *(int *)(*(int *)(param_5 + 0xc) * 0x80 + *(int *)(puVar4 + 0xc) + 0xc) - 1;
    }
  }
  uVar7 = *(uint *)(param_5 + 0x5c);
  if ((int)uVar7 < 0) {
    puVar1[0xa7] = 0;
  }
  else {
    if ((int)unaff_s5_lo < (int)uVar7) {
      uVar7 = unaff_s5_lo;
    }
    puVar1[0xa7] = uVar7;
  }
  uStack_8 = 0;
  fStack_c = -*(float *)(param_5 + 0x48) * param_2;
  fStack_10 = -*(float *)(param_5 + 0x44) * param_1;
  sceVu0TransMatrix(param_6,param_6,&fStack_10);
  puVar1[4] = 0;
  puVar1[5] = 0;
  iVar6 = 0;
  puVar1[6] = 0;
  puVar1[7] = 0x3f800000;
  puVar1[8] = 0;
  puVar1[9] = (uint)fVar10;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3f800000;
  puVar1[0xc] = (uint)fVar9;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0x3f800000;
  puVar1[0x10] = (uint)fVar9;
  puVar1[0x11] = (uint)fVar10;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0x3f800000;
  puVar5 = puVar1;
  do {
    sceVu0ApplyMatrix(puVar5 + 4,param_6,puVar5 + 4);
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 4;
  } while (iVar6 < 4);
  *puVar1 = *puVar1 | 0x10;
  puVar1[0x84] = (int)fVar12;
  uVar7 = (uint)(float)iVar3;
  puVar1[0x85] = (int)fVar11;
  puVar1[0x86] = (int)fVar12;
  uVar8 = (uint)(float)iVar2;
  puVar1[0x87] = uVar7;
  puVar1[0x88] = uVar8;
  puVar1[0x89] = (int)fVar11;
  puVar1[0x8a] = uVar8;
  puVar1[0x8b] = uVar7;
  return;
}

// 0x001ed840  size 0x1f4
/* recursive */

void UiModel_DrawTree(float param_1,float param_2,undefined8 param_3,undefined8 param_4,int param_5,
                     undefined8 param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_40 [64];
  
  iVar6 = 0;
  iVar3 = param_5 * 0x14 + *(int *)((int)param_3 + 0x44);
  iVar1 = *(int *)(iVar3 + 8);
  iVar3 = *(int *)(iVar3 + 4);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      piVar5 = (int *)(*(int *)((int)param_3 + 0x48) + iVar3 * 0x128 + iVar4);
      if (((param_8 == -1) || (piVar5[0x18] == param_8)) &&
         (iVar7 = (int)((float)param_7 * (float)piVar5[0x16]), iVar7 != 0)) {
        UiModel_BuildMatrix(auStack_40,param_6,piVar5);
        iVar2 = *piVar5;
        if (iVar2 == 1) {
          UiModel_DrawTree(param_1 * (float)piVar5[0x13],param_2 * (float)piVar5[0x14],param_3,
                           param_4,piVar5[3],auStack_40,iVar7,0xffffffffffffffff);
        }
        else if (iVar2 == 2) {
          UiModel_DrawNode(param_1,param_2,param_3,param_4,piVar5,auStack_40,iVar7);
        }
        else if (iVar2 == 0) {
          UiModel_DrawMesh(param_1,param_2,param_3,param_4,piVar5,auStack_40,iVar7);
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x128;
    } while (iVar6 < iVar1);
  }
  return;
}

// 0x001eda40  size 0x3dc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (alpha, layout); 315 callers */

void UiLayout_Draw(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [76];
  int iStack_4;
  
  iStack_4 = 0x436810;
  if (g_UiMgr == (UiMgr *)0x0) {
    piVar8 = (int *)0x0;
  }
  else if (g_UiMgr->unk_508 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)&g_UiMgr->field_0x2d0;
  }
  if ((piVar8 != (int *)0x0) && (*piVar8 == 1)) {
    TexSlot_Set(0,*(undefined2 *)(piVar8[1] + 6),piVar8[3]);
  }
  if (*(int *)(param_2 + 0x2cc) == 1) {
    TexSlot_Set(1,*(undefined2 *)(*(int *)(param_2 + 0x2d0) + 6),*(undefined4 *)(param_2 + 0x2d8));
  }
  iVar7 = 0;
  iVar5 = param_2;
  do {
    if ((*(uint *)(iVar5 + 0x4c) & 1) != 0) {
      iStack_4 = 0x436810;
      if (iVar7 < 0x18) {
        Pkt_Init(param_2,2,2,0);
        Pkt_SubmitToChain(param_2,(*_s_RaceUiSpriteCursor + -2) - iVar7);
      }
      else {
        Pkt_Init(param_2,0,2,0);
        Pkt_SubmitToChain(param_2,(*piRam00387f5c + -2) - (iVar7 + -0x18));
      }
      maybe_Vu0_UnitMatrix(auStack_50);
      UiModel_DrawTree(0x3f800000,0x3f800000,param_2,&iStack_4,
                       *(int *)(*(int *)(param_2 + 0x40) + 4) + -1,auStack_50,(int)(param_1 * 128.0)
                       ,iVar7);
      iVar6 = iStack_4 + -0x436810 >> 0x1f;
      if ((iStack_4 + -0x436810) / 0x310 + iVar6 != iVar6) {
        if ((*(int *)(param_2 + 0x2d4) == 1) && (*(int *)(param_2 + 0x2cc) == 1)) {
          Pkt_Flush(param_2,param_2 + 0x2dc);
        }
        if (((piVar8 != (int *)0x0) && (piVar8[2] == 1)) && (*piVar8 == 1)) {
          Pkt_Flush(param_2,piVar8 + 4);
        }
        if ((*(uint *)(iVar5 + 0x4c) & 4) != 0) {
          Pkt_SetScissor(param_2,*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x54),
                         *(undefined4 *)(iVar5 + 0x58),*(undefined4 *)(iVar5 + 0x5c),0);
        }
        Pkt_AddPrimitives(param_2,0x436810,(iStack_4 + -0x436810) / 0x310);
        if ((*(uint *)(iVar5 + 0x4c) & 4) != 0) {
          Pkt_SetScissor(param_2,0,0,0,0,0);
        }
      }
      Pkt_Submit(param_2,0);
    }
    if ((*(uint *)(iVar5 + 0x4c) & 2) != 0) {
      iVar2 = *(int *)(param_2 + 0x44) + *(int *)(*(int *)(param_2 + 0x40) + 4) * 0x14;
      iVar6 = *(int *)(iVar2 + -0x10);
      iVar2 = iVar6 + *(int *)(iVar2 + -0xc);
      if (iVar6 < iVar2) {
        iVar4 = iVar6 * 0x128;
        do {
          piVar3 = (int *)(*(int *)(param_2 + 0x48) + iVar4);
          if ((*piVar3 == 3) && (iVar7 == piVar3[0x18])) {
            piVar3 = (int *)UiElem_GetPropPtr(param_2,iVar6,0x17);
            iVar1 = *piVar3;
            if (0 < iVar1) {
              UiElem_GetRect(param_2,auStack_90,iVar6);
              UiText_DrawById(auStack_90,iVar1);
            }
          }
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 0x128;
        } while (iVar6 < iVar2);
      }
    }
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 0x14;
  } while (iVar7 < 0x20);
  return;
}

// 0x001ede20  size 0x294
/* 47 callers */

void UiElem_GetRect(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  
  puVar1 = (undefined4 *)UiElem_GetPropPtr(param_1,param_3,10);
  *param_2 = *puVar1;
  pfVar2 = (float *)UiElem_GetPropPtr(param_1,param_3,1);
  param_2[1] = (int)(*pfVar2 + 0.5);
  pfVar2 = (float *)UiElem_GetPropPtr(param_1,param_3,1);
  fVar5 = *pfVar2;
  piVar3 = (int *)UiElem_GetPropPtr(param_1,param_3,0x14);
  param_2[2] = (int)(fVar5 + 0.5) + *piVar3;
  pfVar2 = (float *)UiElem_GetPropPtr(param_1,param_3,2);
  param_2[3] = (int)(*pfVar2 + 0.5);
  pfVar2 = (float *)UiElem_GetPropPtr(param_1,param_3,2);
  fVar5 = *pfVar2;
  piVar3 = (int *)UiElem_GetPropPtr(param_1,param_3,0x15);
  param_2[4] = (int)(fVar5 + 0.5) + *piVar3;
  puVar1 = (undefined4 *)UiElem_GetPropPtr(param_1,param_3,0x18);
  *(char *)(param_2 + 7) = (char)*puVar1;
  pfVar2 = (float *)UiElem_GetPropPtr(param_1,param_3,8);
  param_2[6] = (int)(*pfVar2 * 128.0 + 0.5);
  puVar1 = (undefined4 *)UiElem_GetPropPtr(param_1,param_3,0xb);
  param_2[8] = *puVar1;
  puVar1 = (undefined4 *)UiElem_GetPropPtr(param_1,param_3,0x10);
  param_2[10] = *puVar1;
  puVar1 = (undefined4 *)UiElem_GetPropPtr(param_1,param_3,0x11);
  param_2[0xc] = *puVar1;
  puVar1 = (undefined4 *)UiElem_GetPropPtr(param_1,param_3,0x12);
  param_2[0xb] = *puVar1;
  puVar1 = (undefined4 *)UiElem_GetPropPtr(param_1,param_3,0x13);
  param_2[0xd] = *puVar1;
  puVar1 = (undefined4 *)UiElem_GetPropPtr(param_1,param_3,9);
  param_2[5] = *puVar1;
  if ((((param_2[10] == 0) && (param_2[0xb] == 0)) && (param_2[0xc] == 0)) && (param_2[0xd] == 0)) {
    param_2[9] = 0;
  }
  else {
    iVar4 = param_2[0xb];
    if (iVar4 == 0) {
      iVar4 = 0x280;
    }
    param_2[0xb] = iVar4;
    iVar4 = param_2[0xd];
    if (iVar4 == 0) {
      iVar4 = 0x1c0;
    }
    param_2[0xd] = iVar4;
    param_2[9] = 1;
  }
  return;
}

// 0x001ee0c0  size 0x78
void UiElem_Get(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x48) + param_2 * 0x128;
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar2 = iVar1;
    do {
      *(uint *)(iVar2 + 0x70) =
           param_5 & 0xff | (param_3 & 0xff) << 0x10 | 0xff000000 | (param_4 & 0xff) << 8;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)(iVar1 + 0xc));
  }
  return;
}

// 0x001ee140  size 0x16c
/* element = 0x128 bytes */

int UiElem_GetPropPtr(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 & 0xff;
  iVar1 = *(int *)(param_1 + 0x48) + param_2 * 0x128;
  if (param_3 < 0x49) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case 0:
      iVar1 = iVar1 + 0x10;
      break;
    case 1:
      iVar1 = iVar1 + 0x14;
      break;
    case 2:
      iVar1 = iVar1 + 0x18;
      break;
    case 3:
      iVar1 = iVar1 + 0x44;
      break;
    case 4:
      iVar1 = iVar1 + 0x48;
      break;
    case 5:
      iVar1 = iVar1 + 0x4c;
      break;
    case 6:
      iVar1 = iVar1 + 0x50;
      break;
    case 7:
      iVar1 = iVar1 + 0x54;
      break;
    case 8:
      iVar1 = iVar1 + 0x58;
      break;
    case 9:
      iVar1 = iVar1 + 0x5c;
      break;
    case 10:
      iVar1 = iVar1 + 0x60;
      break;
    case 0xb:
      iVar1 = iVar1 + 100;
      break;
    case 0xc:
      iVar1 = iVar1 + 0x1c;
      break;
    case 0xd:
      iVar1 = iVar1 + 0x20;
      break;
    case 0xe:
      iVar1 = iVar1 + 0x24;
      break;
    case 0xf:
      iVar1 = iVar1 + 0x28;
      break;
    case 0x10:
      iVar1 = iVar1 + 0x2c;
      break;
    case 0x11:
      iVar1 = iVar1 + 0x30;
      break;
    case 0x12:
      iVar1 = iVar1 + 0x34;
      break;
    case 0x13:
      iVar1 = iVar1 + 0x38;
      break;
    case 0x14:
      iVar1 = iVar1 + 0x3c;
      break;
    case 0x15:
      iVar1 = iVar1 + 0x40;
      break;
    case 0x16:
      iVar1 = iVar1 + 0xc;
      break;
    case 0x17:
      iVar1 = iVar1 + 8;
      break;
    case 0x18:
      iVar1 = iVar1 + 0xc;
      break;
    default:
      iVar1 = iVar1 + (param_3 - 0x19) * 0xc + 0x68;
      break;
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      iVar1 = iVar1 + (param_3 - 0x29) * 0xc + 0x6c;
      break;
    case 0x39:
      iVar1 = iVar1 + (param_3 - 0x39) * 0xc + 0x70;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

// 0x001ee2b0  size 0x84
void UiLayout_SetTexture(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x2ec) = param_2;
  *(undefined4 *)(param_1 + 0x2f0) = param_3;
  if (*(int *)(param_1 + 0x2d0) != 0) {
    if (*(int *)(param_1 + 0x2d4) != 0) {
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      Pkt_AddTextureUploadAll
                (param_1 + 0x2dc,*(undefined4 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2ec),
                 *(undefined4 *)(param_1 + 0x2f0));
    }
    TexSlot_Bind(*(undefined4 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2d0),
                 *(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2ec),
                 *(undefined4 *)(param_1 + 0x2f0),*(undefined4 *)(param_1 + 0x2f4),0,0);
  }
  return;
}

// 0x001ee340  size 0x244
void UiElem_MarkDirty(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar3 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    iVar3 = iVar3 + 8;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0;
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xc4) = 0;
    *(undefined4 *)(iVar1 + 0xd8) = 0;
    iVar1 = iVar1 + 0xa0;
  } while (iVar3 < 0x20);
  iVar1 = *(int *)(param_1 + 0x44);
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4) * 0x14;
  iVar3 = 0;
  if (0 < *(int *)(iVar5 + iVar1 + -0xc)) {
    iVar4 = 0;
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x48) + *(int *)(iVar1 + iVar5 + -0x10) * 0x128 + iVar4);
      if (*piVar2 == 3) {
        iVar1 = param_1 + piVar2[0x18] * 0x14;
        *(uint *)(iVar1 + 0x4c) = *(uint *)(iVar1 + 0x4c) | 2;
      }
      else {
        iVar1 = param_1 + piVar2[0x18] * 0x14;
        puVar6 = (uint *)(iVar1 + 0x4c);
        if (((*(uint *)(iVar1 + 0x4c) & 4) == 0) &&
           ((((piVar2[0xb] != 0 || (piVar2[0xd] != 0)) || (piVar2[0xc] != 0)) || (piVar2[0xe] != 0))
           )) {
          *puVar6 = *puVar6 | 4;
          *(int *)(param_1 + piVar2[0x18] * 0x14 + 0x50) = piVar2[0xb];
          if (piVar2[0xd] == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = piVar2[0xd] + -0x280;
          }
          *(int *)(param_1 + piVar2[0x18] * 0x14 + 0x54) = iVar1;
          iVar1 = piVar2[0xc];
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          *(int *)(param_1 + piVar2[0x18] * 0x14 + 0x58) = iVar1 >> 1;
          iVar1 = piVar2[0xe];
          if (iVar1 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar1 + -0x1c0 >> 1;
            if (iVar1 + -0x1c0 < 0) {
              iVar5 = iVar1 + -0x1bf >> 1;
            }
          }
          *(int *)(param_1 + piVar2[0x18] * 0x14 + 0x5c) = iVar5;
        }
        iVar1 = param_1 + piVar2[0x18] * 0x14;
        *(uint *)(iVar1 + 0x4c) = *(uint *)(iVar1 + 0x4c) | 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(param_1 + 0x44);
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4) * 0x14;
      iVar4 = iVar4 + 0x128;
    } while (iVar3 < *(int *)(iVar1 + iVar5 + -0xc));
  }
  return;
}

// 0x001ee590  size 0x130
void UiLayout_OnTextureLoaded(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 in_a3;
  
  iVar5 = (int)in_a3;
  piVar1 = *(int **)(iVar5 + 0x3c);
  uVar2 = piVar1[1];
  iVar3 = *piVar1;
  iVar4 = piVar1[2];
  if (10 < uVar2) {
    *(int *)(iVar5 + 0x40) = (int)piVar1 + iVar3;
    *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x3c) + iVar3 + 8;
    *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x3c) + iVar3 + **(int **)(iVar5 + 0x40) * 0x128 + 8;
    UiElem_MarkDirty(in_a3);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x2cc) = 0;
  }
  else {
    *(undefined4 *)(iVar5 + 0x2cc) = 1;
    *(uint *)(iVar5 + 0x2d0) = *(int *)(iVar5 + 0x3c) + iVar3 + uVar2;
    Tex_Relocate(*(undefined4 *)(iVar5 + 0x2d0));
    if (*(int *)(iVar5 + 0x2d4) != 0) {
      Pkt_AddTextureUploadAll
                (iVar5 + 0x2dc,*(undefined4 *)(iVar5 + 0x2d0),*(undefined4 *)(iVar5 + 0x2ec),
                 *(undefined4 *)(iVar5 + 0x2f0));
    }
    TexSlot_Bind(*(undefined4 *)(iVar5 + 0x2d8),*(undefined4 *)(iVar5 + 0x2d0),
                 *(undefined4 *)(iVar5 + 0x2d4),*(undefined4 *)(iVar5 + 0x2ec),
                 *(undefined4 *)(iVar5 + 0x2f0),*(undefined4 *)(iVar5 + 0x2f4),0,0);
  }
  *(undefined4 *)(iVar5 + 0x304) = 0;
  return;
}

// 0x001ee6c0  size 0x22c
void UiLayout_Load(undefined8 param_1,undefined4 *param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x2f8) = *param_2;
  *(undefined4 *)(iVar4 + 0x2fc) = uVar5;
  *(undefined4 *)(iVar4 + 0x300) = uVar6;
  iVar2 = *(int *)(iVar4 + 0x2f8);
  bVar1 = g_RaceCtx->language;
  uVar3 = g_ArcToc->entries[iVar2].unpackedSize;
  if (uVar3 == 0) {
    uVar3 = g_ArcToc->entries[iVar2].sectorCount;
  }
  else {
    uVar3 = uVar3 + 0x7ff >> 0xb;
  }
  *(uint *)(iVar4 + 0x308) =
       ((*(int *)(iVar4 + 0x300) * 0xd + 1) * 0x10 + 0x3fU & 0xffffffc0) +
       uVar3 * 0x800 + *(int *)(iVar4 + 0x2fc) * 0x80;
  if (param_3 == 0) {
    uVar5 = UiMgr_LockedAlloc(*(undefined4 *)(iVar4 + 0x308));
    *(undefined4 *)(iVar4 + 0x3c) = uVar5;
  }
  else {
    uVar5 = Mem_AllocAligned(*(undefined4 *)(iVar4 + 0x308),0x40,param_3);
    *(undefined4 *)(iVar4 + 0x3c) = uVar5;
    *(int *)(iVar4 + 0x4ec) = (int)param_3;
  }
  if (0 < *(int *)(iVar4 + 0x2fc)) {
    uVar3 = g_ArcToc->entries[*(int *)(iVar4 + 0x2f8)].unpackedSize;
    if (uVar3 == 0) {
      uVar3 = g_ArcToc->entries[*(int *)(iVar4 + 0x2f8)].sectorCount;
    }
    else {
      uVar3 = uVar3 + 0x7ff >> 0xb;
    }
    *(uint *)(iVar4 + 0x2d8) = *(int *)(iVar4 + 0x3c) + uVar3 * 0x800;
  }
  if ((*(int *)(iVar4 + 0x2d4) != 0) && (0 < *(int *)(iVar4 + 0x300))) {
    uVar3 = g_ArcToc->entries[*(int *)(iVar4 + 0x2f8)].unpackedSize;
    if (uVar3 == 0) {
      uVar3 = g_ArcToc->entries[*(int *)(iVar4 + 0x2f8)].sectorCount;
    }
    else {
      uVar3 = uVar3 + 0x7ff >> 0xb;
    }
    DmaBuf_SetUncached(iVar4 + 0x2dc,
                       *(int *)(iVar4 + 0x3c) + *(int *)(iVar4 + 0x2fc) * 0x80 + uVar3 * 0x800,
                       *(int *)(iVar4 + 0x300) * 0xd + 1);
  }
  *(undefined4 *)(iVar4 + 0x304) = 1;
  Arc_LoadFileEx(iVar2 + (uint)bVar1,*(undefined4 *)(iVar4 + 0x3c),0x1ee590,param_1,0,0);
  return;
}

// 0x001ee8f0  size 0x80
void UiLayout_Free(int param_1)

{
  *(undefined4 *)(param_1 + 0x304) = 0;
  if (*(int *)(param_1 + 0x4ec) == 0) {
    if (0 < *(int *)(param_1 + 0x308)) {
      UiMgr_ReleaseMemory(param_1 + 0x308);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4ec) = 0;
    if ((0 < *(int *)(param_1 + 0x308)) && (*(int *)(param_1 + 0x3c) != 0)) {
      Mem_Free();
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  return;
}

// 0x001ee970  size 0xc0
void UiLayout_Init(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = param_4;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  DmaBuf_SetUncached(param_1 + 0x2dc,0,0);
  *(undefined4 *)(param_1 + 0x2ec) = param_2;
  *(undefined4 *)(param_1 + 0x2f0) = param_3;
  *(undefined4 *)(param_1 + 0x2f4) = 0x50010;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  do {
    *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x31c) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    if (*(int *)(param_1 + 0x31c) == 0) {
      *(undefined4 *)(param_1 + 0x318) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x318) = 1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x14;
  } while (iVar1 < 0x18);
  return;
}

// 0x001eea30  size 0xc8
/* (layout, elem, prop, value); 126 callers */

void UiElem_SetPropInt(undefined8 param_1,undefined8 param_2,byte param_3,int param_4)

{
  bool bVar1;
  float *pfVar2;
  int *piVar3;
  
  if (param_3 < 0x49) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case 0:
      bVar1 = false;
      break;
    case 1:
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    pfVar2 = (float *)UiElem_GetPropPtr(param_1);
    *pfVar2 = (float)param_4;
  }
  else {
    piVar3 = (int *)UiElem_GetPropPtr(param_1);
    *piVar3 = param_4;
  }
  if (param_3 == 10) {
    UiElem_MarkDirty(param_1);
  }
  return;
}

// 0x001eeb00  size 0xf0
/* (value, layout, elem, prop); 209 callers */

void UiElem_SetPropFloat(float param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  
  if (param_4 < 0x49) {
                    /* WARNING: Switch is manually overridden */
    switch(param_4) {
    case 0:
      bVar1 = false;
      break;
    case 1:
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    pfVar3 = (float *)UiElem_GetPropPtr(param_2);
    *pfVar3 = param_1;
  }
  else {
    iVar4 = (int)param_1;
    if ((float)iVar4 != param_1) {
      iVar4 = (int)(param_1 + 0.5);
    }
    piVar2 = (int *)UiElem_GetPropPtr(param_2);
    *piVar2 = iVar4;
  }
  if (param_4 == 10) {
    UiElem_MarkDirty(param_2);
  }
  return;
}

// 0x001eebf0  size 0xe4
void UiText_Reset(int param_1,long param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x460c) = 0;
  if ((param_3 == 0) || (param_2 < 0)) {
    *(int *)(param_1 + 0x4614) = (int)param_2;
  }
  else {
    *(int *)(param_1 + 0x4614) = (int)param_2;
    bVar4 = 0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x4604)) {
      do {
        iVar5 = *(int *)(param_1 + 0x4608);
        iVar2 = 0;
        if (0 < iVar5) {
          do {
            iVar6 = (int)param_3 + iVar2;
            *(char *)(param_1 + (iVar2 + iVar3 * iVar5) * 4 + 2) =
                 *(char *)(iVar6 + iVar3 * iVar5) + -1;
            iVar5 = iVar3 * *(int *)(param_1 + 0x4608);
            bVar1 = *(byte *)(iVar6 + iVar5 +
                             *(int *)(param_1 + 0x4608) * *(int *)(param_1 + 0x4604));
            *(byte *)(param_1 + (iVar2 + iVar5) * 4 + 3) = bVar1;
            if (bVar4 < bVar1) {
              bVar4 = bVar1;
            }
            iVar5 = *(int *)(param_1 + 0x4608);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar5);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x4604));
    }
  }
  return;
}

// 0x001eece0  size 0x2b4
void UiText_Layout(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int unaff_s1_lo;
  int unaff_s2_lo;
  int iVar10;
  int iVar11;
  
  iVar4 = *(int *)(param_1 + 0x4610);
  iVar3 = *(int *)(param_1 + 0x460c);
  if (iVar4 + -1 == iVar3 % iVar4) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x4604)) {
      do {
        iVar3 = *(int *)(param_1 + 0x4608);
        iVar6 = 0;
        if (0 < iVar3) {
          do {
            iVar3 = iVar6 + iVar4 * iVar3;
            iVar6 = iVar6 + 1;
            puVar5 = (undefined1 *)(param_1 + iVar3 * 4);
            *puVar5 = puVar5[1];
            iVar3 = *(int *)(param_1 + 0x4608);
          } while (iVar6 < iVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x4604));
    }
  }
  else {
    if (iVar4 != 1) {
      unaff_s1_lo = *(int *)(param_1 + 0x4608);
      iVar4 = (unaff_s1_lo + -1) / (iVar4 + -1) + 1;
      unaff_s2_lo = iVar4 * iVar3;
      iVar4 = iVar4 * (iVar3 + 1);
      if (iVar4 <= unaff_s1_lo) {
        unaff_s1_lo = iVar4;
      }
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x4604)) {
      iVar3 = unaff_s2_lo;
      do {
        for (; iVar3 < unaff_s1_lo; iVar3 = iVar3 + 1) {
          iVar6 = *(int *)(param_1 + 0x4608);
          uVar2 = *(uint *)(param_1 + 0x4614);
          pcVar7 = (char *)(param_1 + (iVar3 + iVar4 * iVar6) * 4);
          cVar1 = *pcVar7;
          pcVar8 = pcVar7 + 1;
          if (((int)uVar2 < 0) || ((int)(uint)(byte)pcVar7[3] <= (int)uVar2)) {
            if (((int)uVar2 < 0) || ((byte)pcVar7[3] != uVar2)) {
              iVar10 = 0;
              iVar9 = -1;
              do {
                iVar11 = -1;
                do {
                  if ((iVar9 != 0) || (iVar11 != 0)) {
                    iVar10 = iVar10 + (uint)(*(char *)(param_1 + ((iVar6 + iVar3 + iVar9) % iVar6) *
                                                                 4 +
                                                      ((*(int *)(param_1 + 0x4604) + iVar4 + iVar11)
                                                      % *(int *)(param_1 + 0x4604)) * iVar6 * 4) !=
                                            -1);
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < 2);
                iVar9 = iVar9 + 1;
              } while (iVar9 < 2);
              if (iVar10 == 3) {
                *pcVar8 = (char)((cVar1 + 1) % 7);
              }
              else if ((iVar10 == 2) && (cVar1 != -1)) {
                *pcVar8 = (char)((cVar1 + 1) % 7);
              }
              else {
                *pcVar8 = -1;
              }
            }
            else {
              *pcVar8 = (char)((cVar1 + 1) % 7);
            }
          }
          else {
            *pcVar8 = -1;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = unaff_s2_lo;
      } while (iVar4 < *(int *)(param_1 + 0x4604));
    }
  }
  return;
}

// 0x001eefa0  size 0x1e4
void UiText_Update(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x4614) == 0) {
    iVar1 = *(int *)(param_1 + 0x4610);
  }
  else {
    UiText_Layout();
    iVar1 = *(int *)(param_1 + 0x4610);
  }
  if (iVar1 + -1 == *(int *)(param_1 + 0x460c) % iVar1) {
    iVar1 = *(int *)(param_1 + 0x4614);
    if (iVar1 < 0) {
      if (iVar1 == -1) {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x4604)) {
          do {
            iVar2 = *(int *)(param_1 + 0x4608);
            iVar5 = 0;
            if (0 < iVar2) {
              do {
                *(undefined1 *)(param_1 + (iVar5 + iVar1 * iVar2) * 4) = 0xff;
                iVar2 = iVar5 + iVar1 * *(int *)(param_1 + 0x4608);
                iVar5 = iVar5 + 1;
                *(undefined1 *)(param_1 + iVar2 * 4 + 1) = 0xff;
                iVar2 = *(int *)(param_1 + 0x4608);
              } while (iVar5 < iVar2);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x4604));
          iVar1 = *(int *)(param_1 + 0x460c);
          goto LAB_001ef0a4;
        }
      }
      else {
        *(int *)(param_1 + 0x4614) = iVar1 + 1;
      }
    }
    else {
      if ((iVar1 == 0) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x4604))) {
        do {
          iVar2 = *(int *)(param_1 + 0x4608);
          iVar5 = 0;
          if (0 < iVar2) {
            do {
              puVar3 = (undefined1 *)(param_1 + (iVar5 + iVar1 * iVar2) * 4);
              if (puVar3[2] == -1) {
                *puVar3 = 0xff;
              }
              pcVar4 = (char *)(param_1 + (iVar5 + iVar1 * *(int *)(param_1 + 0x4608)) * 4);
              if (*pcVar4 != pcVar4[2]) {
                *pcVar4 = (char)((*pcVar4 + 1) % 7);
              }
              iVar2 = *(int *)(param_1 + 0x4608);
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar2);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x4604));
      }
      iVar1 = *(int *)(param_1 + 0x4614) + -1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x4614) = iVar1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x460c);
LAB_001ef0a4:
  *(int *)(param_1 + 0x460c) = (iVar1 + 1) % *(int *)(param_1 + 0x4610);
  return;
}

// 0x001ef190  size 0xe0
void UiText_SetString(int param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x4604) = param_3;
  *(undefined4 *)(param_1 + 0x4608) = param_2;
  *(undefined4 *)(param_1 + 0x460c) = 0;
  *(undefined4 *)(param_1 + 0x4610) = 4;
  *(undefined4 *)(param_1 + 0x4614) = 0xffffffff;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x4604)) {
    do {
      iVar3 = *(int *)(param_1 + 0x4608);
      iVar1 = 0;
      if (0 < iVar3) {
        do {
          if (param_4 == 0) {
            *(undefined1 *)(param_1 + (iVar1 + iVar2 * iVar3) * 4) = 0xff;
          }
          else {
            *(char *)(param_1 + (iVar1 + iVar2 * iVar3) * 4) =
                 *(char *)((int)param_4 + iVar1 + iVar2 * iVar3) + -1;
          }
          iVar3 = iVar1 + iVar2 * *(int *)(param_1 + 0x4608);
          iVar1 = iVar1 + 1;
          *(undefined1 *)(param_1 + iVar3 * 4 + 1) = 0xff;
          iVar3 = *(int *)(param_1 + 0x4608);
        } while (iVar1 < iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x4604));
  }
  return;
}

// 0x001ef270  size 0xec
void UiText_SetColor(int *param_1,int param_2,int param_3,long param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_4;
  uVar1 = *(uint *)(param_2 + 0x20);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x80) != 0) {
          if (param_4 == 1) {
            *param_1 = *(int *)(param_2 + 0xc);
          }
          else {
            *param_1 = *(int *)(param_2 + 0xc) +
                       param_3 * (param_5 +
                                 ((*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc)) -
                                 iVar2 * param_5) / (iVar2 + -1));
          }
        }
      }
      else {
        iVar2 = (*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x10)) - iVar2 * param_5;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        *param_1 = (iVar2 >> 1) + param_3 * param_5;
      }
    }
    else {
      *param_1 = *(int *)(param_2 + 0x10) + param_5 * (param_3 - iVar2);
    }
  }
  else {
    *param_1 = *(int *)(param_2 + 0xc) + param_3 * param_5;
  }
  return;
}

// 0x001ef360  size 0x128
void UiText_MeasureLine(int *param_1,float *param_2,int param_3,int param_4,undefined4 *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  
  uVar2 = *(uint *)(param_3 + 0x20);
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 2) == 0) {
        if ((uVar2 & 8) != 0) {
          iVar3 = 0;
          puVar4 = (ushort *)*param_5;
          while( true ) {
            uVar1 = *puVar4;
            if ((uVar1 == 0xffff) || (uVar1 == 0xfffe)) break;
            if (uVar1 - 0xfffc < 2) {
              puVar4 = puVar4 + 2;
            }
            else {
              iVar3 = iVar3 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          *param_1 = *(int *)(param_3 + 4);
          if ((float)(iVar3 + -1) == 0.0) {
            *param_2 = 0.0;
          }
          else {
            *param_2 = (float)((*(int *)(param_3 + 8) - *(int *)(param_3 + 4)) - param_4) /
                       (float)(iVar3 + -1);
          }
        }
      }
      else {
        param_4 = (*(int *)(param_3 + 4) + *(int *)(param_3 + 8)) - param_4;
        if (param_4 < 0) {
          param_4 = param_4 + 1;
        }
        *param_1 = param_4 >> 1;
        *param_2 = 0.0;
      }
    }
    else {
      *param_1 = *(int *)(param_3 + 8) - param_4;
      *param_2 = 0.0;
    }
  }
  else {
    *param_1 = *(int *)(param_3 + 4);
    *param_2 = 0.0;
  }
  return;
}

// 0x001ef490  size 0xfb8
/* WARNING: Removing unreachable block (ram,0x001ef7dc) */
/* WARNING: Removing unreachable block (ram,0x001f02e4) */
/* WARNING: Removing unreachable block (ram,0x001ef5a8) */
/* WARNING: Removing unreachable block (ram,0x001efa18) */
/* WARNING: Removing unreachable block (ram,0x001efd3c) */
/* WARNING: Removing unreachable block (ram,0x001f015c) */
/* WARNING: Removing unreachable block (ram,0x001efb00) */
/* WARNING: Removing unreachable block (ram,0x001efc20) */
/* WARNING: Removing unreachable block (ram,0x001ef6c4) */
/* WARNING: Removing unreachable block (ram,0x001efe54) */
/* WARNING: Removing unreachable block (ram,0x001eff8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UiText_FormatRivalInfo(ushort *param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  float fVar15;
  ushort auStack_70 [56];
  
LAB_001ef4b8:
  do {
    uVar1 = *param_2;
    piVar13 = param_3;
LAB_001ef4bc:
    param_2 = param_2 + 1;
    if (uVar1 == 0xffff) {
      *param_1 = 0xffff;
      return;
    }
    if (uVar1 == 0xfffd) {
      param_3 = piVar13 + 2;
      iVar4 = *piVar13;
      *param_1 = 0xfffd;
      param_1[1] = (ushort)iVar4;
      param_1 = param_1 + 2;
      goto LAB_001ef4b8;
    }
    if (uVar1 == 0xfffc) {
      param_3 = piVar13 + 2;
      iVar4 = *piVar13;
      *param_1 = 0xfffc;
      param_1[1] = (ushort)iVar4;
      param_1 = param_1 + 2;
      goto LAB_001ef4b8;
    }
    if (uVar1 == 0xfffb) {
      param_3 = piVar13 + 2;
      iVar4 = *piVar13;
      if (iVar4 == -2) {
        puVar6 = auStack_70;
        uVar3 = Profile_Get(0);
        uVar3 = Career_GetRivalTable(uVar3);
        UiText_CountLines(puVar6,uVar3);
        while( true ) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          if (uVar1 == 0xffff) break;
          *param_1 = uVar1;
          param_1 = param_1 + 1;
        }
      }
      else {
        if (iVar4 == -1) {
          puVar6 = &DAT_0036e864;
        }
        else {
          puVar6 = (ushort *)(_g_Fonts + *(int *)(_g_LocalizedText + iVar4 * 4) * 2);
        }
        while( true ) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          if (uVar1 == 0xffff) break;
          *param_1 = uVar1;
          param_1 = param_1 + 1;
        }
      }
      goto LAB_001ef4b8;
    }
    uVar7 = (uint)uVar1;
    iVar4 = 0xfffa - uVar7;
    if (((iVar4 < 0) || (9 < iVar4)) && (((int)(0xffe6 - uVar7) < 0 || (9 < (int)(0xffe6 - uVar7))))
       ) {
      iVar4 = -uVar7;
      iVar14 = iVar4 + 0xfff0;
      if ((iVar14 < 0) || (9 < iVar14)) {
        *param_1 = uVar1;
        param_1 = param_1 + 1;
        param_3 = piVar13;
        goto LAB_001ef4b8;
      }
      param_3 = piVar13 + 2;
      fVar15 = (float)maybe___extendsfdf2(*(undefined8 *)piVar13);
      if (fVar15 < 0.0) {
        *param_1 = 0x16;
        fVar15 = -fVar15;
        param_1 = param_1 + 1;
      }
      iVar11 = (int)fVar15;
      if (iVar14 < 9) {
        iVar12 = 1;
        iVar10 = 0;
        if (0 < iVar14) {
          if (8 < iVar14) {
            bVar2 = false;
            if ((-1 < iVar14) && (iVar14 < 0x7fffffff)) {
              bVar2 = true;
            }
            if (bVar2) {
              do {
                iVar10 = iVar10 + 8;
                iVar12 = iVar12 * 100000000;
              } while (iVar10 < iVar4 + 0xffe8);
            }
          }
          for (; iVar10 < iVar14; iVar10 = iVar10 + 1) {
            iVar12 = iVar12 * 10;
          }
        }
      }
      else {
        iVar12 = -1;
      }
      if (iVar14 < 9) {
        iVar10 = 1;
        iVar9 = 0;
        if (0 < iVar14) {
          if (8 < iVar14) {
            bVar2 = false;
            if ((-1 < iVar14) && (iVar14 < 0x7fffffff)) {
              bVar2 = true;
            }
            if (bVar2) {
              do {
                iVar9 = iVar9 + 8;
                iVar10 = iVar10 * 100000000;
              } while (iVar9 < iVar4 + 0xffe8);
            }
          }
          for (; iVar9 < iVar14; iVar9 = iVar9 + 1) {
            iVar10 = iVar10 * 10;
          }
        }
      }
      else {
        iVar10 = -1;
      }
      iVar12 = (int)((fVar15 * (float)iVar12 + 0.5) - (float)(iVar11 * iVar10));
      if (iVar14 < 9) {
        iVar10 = 1;
        iVar9 = 0;
        if (0 < iVar14) {
          if (8 < iVar14) {
            iVar8 = 0;
            if ((-1 < iVar14) && (iVar14 < 0x7fffffff)) {
              iVar8 = iVar10;
            }
            if (iVar8 != 0) {
              do {
                iVar9 = iVar9 + 8;
                iVar10 = iVar10 * 100000000;
              } while (iVar9 < iVar4 + 0xffe8);
            }
          }
          for (; iVar9 < iVar14; iVar9 = iVar9 + 1) {
            iVar10 = iVar10 * 10;
          }
        }
      }
      else {
        iVar10 = -1;
      }
      if (iVar12 == iVar10) {
        iVar11 = iVar11 + 1;
        iVar12 = 0;
      }
      if (iVar11 == 0) {
        *param_1 = 1;
        param_1 = param_1 + 1;
      }
      else {
        iVar10 = 1;
        iVar14 = 0;
        do {
          iVar9 = iVar14 + 1;
          if (iVar9 < 9) {
            iVar5 = 0;
            iVar8 = iVar10;
            if (0 < iVar9) {
              if (8 < iVar9) {
                bVar2 = false;
                if ((-1 < iVar9) && (iVar9 < 0x7fffffff)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  do {
                    iVar5 = iVar5 + 8;
                    iVar8 = iVar8 * 100000000;
                  } while (iVar5 < iVar14 + -7);
                }
              }
              for (; iVar5 < iVar9; iVar5 = iVar5 + 1) {
                iVar8 = iVar8 * 10;
              }
            }
          }
          else {
            iVar8 = -1;
          }
          if (iVar8 == -1) {
            iVar9 = 0;
            break;
          }
          iVar14 = iVar9;
        } while (iVar8 <= iVar11);
        iVar9 = iVar9 + -1;
        if (-1 < iVar9) {
          iVar14 = 1;
          do {
            if (iVar9 < 9) {
              iVar8 = 0;
              iVar10 = iVar14;
              if (0 < iVar9) {
                if (8 < iVar9) {
                  bVar2 = false;
                  if ((-1 < iVar9) && (iVar9 < 0x7fffffff)) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    do {
                      iVar8 = iVar8 + 8;
                      iVar10 = iVar10 * 100000000;
                    } while (iVar8 < iVar9 + -8);
                  }
                }
                for (; iVar8 < iVar9; iVar8 = iVar8 + 1) {
                  iVar10 = iVar10 * 10;
                }
              }
            }
            else {
              iVar10 = -1;
            }
            iVar9 = iVar9 + -1;
            *param_1 = (short)((iVar11 / iVar10) % 10) + 1;
            param_1 = param_1 + 1;
          } while (-1 < iVar9);
        }
      }
      if (iVar4 != -0xfff0) {
        iVar4 = iVar4 + 0xffef;
        *param_1 = 0x17;
        param_1 = param_1 + 1;
        if (-1 < iVar4) {
          iVar14 = 1;
          do {
            if (iVar4 < 9) {
              iVar10 = 0;
              iVar11 = 1;
              if (0 < iVar4) {
                iVar11 = iVar14;
                if (8 < iVar4) {
                  bVar2 = false;
                  if ((-1 < iVar4) && (iVar4 < 0x7fffffff)) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    do {
                      iVar10 = iVar10 + 8;
                      iVar11 = iVar11 * 100000000;
                    } while (iVar10 < iVar4 + -8);
                  }
                }
                for (; iVar10 < iVar4; iVar10 = iVar10 + 1) {
                  iVar11 = iVar11 * 10;
                }
              }
            }
            else {
              iVar11 = -1;
            }
            iVar4 = iVar4 + -1;
            *param_1 = (short)((iVar12 / iVar11) % 10) + 1;
            param_1 = param_1 + 1;
          } while (-1 < iVar4);
        }
      }
    }
    else {
      param_3 = piVar13 + 2;
      iVar14 = *piVar13;
      if ((iVar4 < 0) || (9 < iVar4)) {
        iVar11 = 0xffe6 - uVar7;
      }
      else {
        iVar11 = iVar4;
      }
      if (iVar11 < 9) {
        iVar12 = 1;
        iVar10 = 0;
        if (0 < iVar11) {
          if (8 < iVar11) {
            bVar2 = false;
            if ((-1 < iVar11) && (iVar11 < 0x7fffffff)) {
              bVar2 = true;
            }
            if (bVar2) {
              do {
                iVar10 = iVar10 + 8;
                iVar12 = iVar12 * 100000000;
              } while (iVar10 < iVar11 + -8);
            }
          }
          for (; iVar10 < iVar11; iVar10 = iVar10 + 1) {
            iVar12 = iVar12 * 10;
          }
        }
      }
      else {
        iVar12 = -1;
      }
      if (iVar14 < 0) {
        *param_1 = 0x16;
        iVar14 = -iVar14;
        param_1 = param_1 + 1;
      }
      if (iVar12 <= iVar14) {
        if (iVar14 == 0) {
          *param_1 = 1;
          param_1 = param_1 + 1;
          goto LAB_001ef4b8;
        }
        do {
          iVar4 = iVar11 + 1;
          if (iVar4 < 9) {
            iVar12 = 1;
            iVar10 = 0;
            if (0 < iVar4) {
              if (8 < iVar4) {
                bVar2 = false;
                if ((-1 < iVar4) && (iVar4 < 0x7fffffff)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  do {
                    iVar10 = iVar10 + 8;
                    iVar12 = iVar12 * 100000000;
                  } while (iVar10 < iVar11 + -7);
                }
              }
              for (; iVar10 < iVar4; iVar10 = iVar10 + 1) {
                iVar12 = iVar12 * 10;
              }
            }
          }
          else {
            iVar12 = -1;
          }
          if (iVar12 == -1) {
            iVar4 = 0;
            break;
          }
          iVar11 = iVar4;
        } while (iVar12 <= iVar14);
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) goto LAB_001ef4b8;
        iVar11 = 1;
        do {
          if (iVar4 < 9) {
            iVar10 = 0;
            iVar12 = 1;
            if (0 < iVar4) {
              iVar12 = iVar11;
              if (8 < iVar4) {
                bVar2 = false;
                if ((-1 < iVar4) && (iVar4 < 0x7fffffff)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  do {
                    iVar10 = iVar10 + 8;
                    iVar12 = iVar12 * 100000000;
                  } while (iVar10 < iVar4 + -8);
                }
              }
              for (; iVar10 < iVar4; iVar10 = iVar10 + 1) {
                iVar12 = iVar12 * 10;
              }
            }
          }
          else {
            iVar12 = -1;
          }
          iVar4 = iVar4 + -1;
          *param_1 = (short)((iVar14 / iVar12) % 10) + 1;
          param_1 = param_1 + 1;
        } while (-1 < iVar4);
        uVar1 = *param_2;
        piVar13 = param_3;
        goto LAB_001ef4bc;
      }
      if ((iVar4 < 0) || (9 < iVar4)) {
        iVar11 = iVar11 + -1;
        if (0 < iVar11) {
          iVar4 = 1;
          do {
            if (iVar11 < 9) {
              iVar10 = 0;
              iVar12 = 1;
              if (0 < iVar11) {
                iVar12 = iVar4;
                if (8 < iVar11) {
                  bVar2 = false;
                  if ((-1 < iVar11) && (iVar11 < 0x7fffffff)) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    do {
                      iVar10 = iVar10 + 8;
                      iVar12 = iVar12 * 100000000;
                    } while (iVar10 < iVar11 + -8);
                  }
                }
                for (; iVar10 < iVar11; iVar10 = iVar10 + 1) {
                  iVar12 = iVar12 * 10;
                }
              }
            }
            else {
              iVar12 = -1;
            }
            iVar11 = iVar11 + -1;
            *param_1 = (short)((iVar14 / iVar12) % 10) + 1;
            param_1 = param_1 + 1;
          } while (0 < iVar11);
        }
      }
      else {
        iVar11 = iVar11 + -1;
        iVar4 = 0;
        if (0 < iVar11) {
          iVar12 = 1;
          do {
            if (iVar11 < 9) {
              iVar9 = 0;
              iVar10 = iVar12;
              if (0 < iVar11) {
                if (8 < iVar11) {
                  bVar2 = false;
                  if ((-1 < iVar11) && (iVar11 < 0x7fffffff)) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    do {
                      iVar9 = iVar9 + 8;
                      iVar10 = iVar10 * 100000000;
                    } while (iVar9 < iVar11 + -8);
                  }
                }
                for (; iVar9 < iVar11; iVar9 = iVar9 + 1) {
                  iVar10 = iVar10 * 10;
                }
              }
            }
            else {
              iVar10 = -1;
            }
            iVar10 = (iVar14 / iVar10) % 10;
            if (iVar10 != 0) {
              iVar4 = iVar12;
            }
            if (iVar4 == 1) {
              *param_1 = (short)iVar10 + 1;
            }
            else {
              *param_1 = 0;
            }
            param_1 = param_1 + 1;
            iVar11 = iVar11 + -1;
          } while (0 < iVar11);
        }
      }
      *param_1 = (short)(iVar14 % 10) + 1;
      param_1 = param_1 + 1;
    }
  } while( true );
}

