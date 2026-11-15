// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00140000 - 0x00144000
#include "ghidra_types.h"

// 0x00140020  size 0x48
uint Bits_HighestSet(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x1f;
  do {
    if ((param_1 & 1 << (uVar1 & 0x1f)) != 0) break;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  if ((uint)(1 << (uVar1 & 0x1f)) < param_1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

// 0x00140070  size 0xc4
/* psm-dependent TBW */

uint Tex_GetBufferWidth(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 == 0x14) || (param_1 == 0x13)) {
    uVar1 = param_2 + 0x3fU >> 6;
    uVar1 = uVar1 + (uVar1 & 1);
  }
  else if ((((((param_1 == 0x3a) || (param_1 == 0x32)) || (param_1 == 10)) ||
            ((param_1 == 2 || (param_1 == 0x31)))) ||
           ((param_1 == 0x30 || ((param_1 == 1 || (param_1 == 0)))))) ||
          ((param_1 == 0x2c || ((param_1 == 0x24 || (param_1 == 0x1b)))))) {
    uVar1 = param_2 + 0x3fU >> 6;
  }
  return uVar1;
}

// 0x00140140  size 0x24
undefined4 Vu0_Sqrt(undefined4 param_1)

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

// 0x00140170  size 0x50
undefined4
Vu0_Vec3Distance(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

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

// 0x001401c0  size 0x184
void maybe_Camera_ClampAngles
               (float param_1,float param_2,float param_3,float *param_4,float *param_5,long param_6
               )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 == 0) {
    fVar4 = *param_5;
    fVar5 = param_5[1];
    fVar1 = param_5[2];
    fVar2 = param_3 * fVar1 + param_1 * fVar4 + param_2 * fVar5;
    fVar3 = -1.0 / fVar2;
    *param_4 = fVar3 * (param_1 * fVar4 - fVar2);
    param_4[4] = fVar3 * param_2 * fVar4;
    param_4[8] = fVar3 * param_3 * fVar4;
    param_4[0xc] = fVar3 * -fVar4;
    param_4[1] = fVar3 * param_1 * fVar5;
    param_4[5] = fVar3 * (param_2 * fVar5 - fVar2);
    param_4[9] = fVar3 * param_3 * fVar5;
    param_4[0xd] = fVar3 * -fVar5;
    param_4[2] = fVar3 * param_1 * fVar1;
    param_4[6] = fVar3 * param_2 * fVar1;
    param_4[10] = fVar3 * (param_3 * fVar1 - fVar2);
    param_4[0xe] = fVar3 * -fVar1;
    param_4[3] = 0.0;
    param_4[7] = 0.0;
    param_4[0xb] = 0.0;
    param_4[0xf] = fVar3 * -fVar2;
  }
  else {
    fVar4 = *param_5;
    fVar2 = param_5[1];
    fVar3 = param_5[2];
    fVar1 = 1.0 - (param_3 * fVar3 + param_1 * fVar4 + param_2 * fVar2);
    *param_4 = fVar1 + param_1 * fVar4;
    param_4[4] = param_2 * fVar4;
    param_4[8] = param_3 * fVar4;
    param_4[0xc] = -fVar4;
    param_4[1] = param_1 * fVar2;
    param_4[5] = fVar1 + param_2 * fVar2;
    param_4[9] = param_3 * fVar2;
    param_4[0xd] = -fVar2;
    param_4[2] = param_1 * fVar3;
    param_4[6] = param_2 * fVar3;
    param_4[10] = fVar1 + param_3 * fVar3;
    param_4[0xe] = -fVar3;
    param_4[3] = param_1;
    param_4[7] = param_2;
    param_4[0xb] = param_3;
    param_4[0xf] = fVar1 - 1.0;
  }
  return;
}

// 0x00140350  size 0x1e4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* lgDevEnumHint / lgDevAReadMulti */

void Wheel_Update(void)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  bVar1 = false;
  if (_s_WheelVar1 == 0) {
    if (_g_Wheel == 0) {
      lgDevAEnumHint(0x36f070);
      _g_Wheel = 1;
    }
    else {
      if ((_g_Wheel != 0) && (lVar2 = lgDev_WaitAsync(1,0x36f078), lVar2 == 0)) {
        _g_Wheel = 0;
      }
      if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
        _s_WheelVar10 = 1;
      }
    }
    if (_g_Wheel == 0) {
      bVar1 = true;
    }
  }
  else {
    lgDevEnumHint(0x36f070);
    bVar1 = true;
  }
  if (bVar1 && _s_WheelVar8 == 1) {
    Wheel_PollDevices();
    Wheel_EnumerateDevices();
  }
  if (_s_WheelVar1 != 0) {
    if ((_g_Wheel != 0) && (lVar2 = lgDev_WaitAsync(0,0x36f078), lVar2 == 0)) {
      _g_Wheel = 0;
    }
    if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
      _s_WheelVar10 = 1;
    }
    if (_g_Wheel == 0) {
      lgDevAReadMulti(_s_WheelVar1,0x36f058,0x36f068,0x387da0);
      _g_Wheel = 1;
    }
  }
  iVar5 = 0;
  if (0 < _s_WheelVar1) {
    puVar4 = (undefined4 *)&s_WheelVar4;
    pcVar3 = (char *)0x387da0;
    do {
      if (*pcVar3 != -1) {
        Wheel_ReadInput(*puVar4,pcVar3);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      pcVar3 = pcVar3 + 0x10;
    } while (iVar5 < _s_WheelVar1);
  }
  Wheel_UpdateForceEffects();
  return;
}

// 0x00140540  size 0x73c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* lgDevDownloadForceEffect etc. */

void Wheel_UpdateForceEffects(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar11 = 0;
  if (0 < _s_WheelVar1) {
    piVar7 = (int *)&s_WheelVar4;
    do {
      iVar10 = *piVar7;
      lVar5 = (**(code **)(*(int *)(iVar10 + 4) + 8))(iVar10);
      if (lVar5 != 0) {
        Wheel_StateMachine(iVar10);
      }
      iVar11 = iVar11 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar11 < _s_WheelVar1);
  }
  iVar11 = 0;
  if (0 < _s_WheelVar1) {
    piVar7 = (int *)&s_WheelVar4;
    do {
      iVar10 = *piVar7;
      uVar6 = *(uint *)(iVar10 + 0x494);
      uVar1 = *(undefined4 *)(iVar10 + 0x49c);
      *(uint *)(iVar10 + 0x494) = uVar6 & 0xfffffffe;
      if ((uVar6 & 1) != 0) {
        if ((_g_Wheel != 0) && (lVar5 = lgDev_WaitAsync(0,0x36f078), lVar5 == 0)) {
          _g_Wheel = 0;
        }
        if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
          _s_WheelVar10 = 1;
        }
        lgDevSetDeviceProperty(*(undefined4 *)(iVar10 + 0x490),2,uVar1);
        _g_Wheel = 1;
      }
      iVar11 = iVar11 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar11 < _s_WheelVar1);
  }
  iVar11 = 0;
  if (0 < _s_WheelVar1) {
    piVar7 = (int *)&s_WheelVar4;
    do {
      iVar10 = *piVar7;
      uVar6 = *(uint *)(iVar10 + 0x494);
      uVar1 = *(undefined4 *)(iVar10 + 0x4a0);
      *(uint *)(iVar10 + 0x494) = uVar6 & 0xfffffffd;
      if ((uVar6 & 2) != 0) {
        if ((_g_Wheel != 0) && (lVar5 = lgDev_WaitAsync(0,0x36f078), lVar5 == 0)) {
          _g_Wheel = 0;
        }
        if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
          _s_WheelVar10 = 1;
        }
        lgDevSetDeviceProperty(*(undefined4 *)(iVar10 + 0x490),3,uVar1);
        _g_Wheel = 1;
      }
      iVar11 = iVar11 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar11 < _s_WheelVar1);
  }
  iVar10 = 0;
  iVar11 = 0;
  if (0 < _s_WheelVar1) {
    puVar8 = (undefined4 *)&s_WheelVar4;
    do {
      iVar3 = Wheel_BuildEffect(*puVar8,0x10,iVar10 * 4 + 0x387dc0,iVar10 * 0x3c + 0x387de0);
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + iVar3;
      puVar8 = puVar8 + 1;
    } while (iVar11 < _s_WheelVar1);
  }
  if (iVar10 != 0) {
    if ((_g_Wheel != 0) && (lVar5 = lgDev_WaitAsync(0,0x36f078), lVar5 == 0)) {
      _g_Wheel = 0;
    }
    if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
      _s_WheelVar10 = 1;
    }
    lgDevAStopForceEffectMulti(iVar10,0x387dc0);
    _g_Wheel = 1;
  }
  uVar6 = 0;
  iVar11 = 0;
  if (0 < _s_WheelVar1) {
    piVar7 = (int *)&s_WheelVar4;
    do {
      iVar10 = *piVar7;
      iVar3 = Wheel_BuildEffect(iVar10,2,uVar6 * 4 + 0x387dc0,uVar6 * 0x3c + 0x387de0);
      uVar6 = uVar6 + iVar3;
      uVar12 = 0;
      if (uVar6 != 0) {
        piVar9 = (int *)0x387dc0;
        do {
          if ((_g_Wheel != 0) && (lVar5 = lgDev_WaitAsync(0,0x36f078), lVar5 == 0)) {
            _g_Wheel = 0;
          }
          if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
            _s_WheelVar10 = 1;
          }
          iVar3 = iVar10 + *piVar9 * 4;
          puVar8 = (undefined4 *)(iVar3 + 0x4a4);
          if (*(int *)(iVar3 + 0x4a4) != -1) {
            lgDevStopForceEffect();
            lgDevDestroyForceEffect(*puVar8);
            *puVar8 = 0xffffffff;
          }
          _g_Wheel = 1;
          uVar12 = uVar12 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar12 < uVar6);
      }
      iVar11 = iVar11 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar11 < _s_WheelVar1);
  }
  uVar6 = 0;
  iVar11 = 0;
  if (0 < _s_WheelVar1) {
    piVar7 = (int *)&s_WheelVar4;
    do {
      iVar10 = *piVar7;
      iVar3 = Wheel_BuildEffect(iVar10,1,uVar6 * 4 + 0x387dc0,uVar6 * 0x3c + 0x387de0);
      uVar6 = uVar6 + iVar3;
      uVar12 = 0;
      if (uVar6 != 0) {
        piVar9 = (int *)0x387dc0;
        do {
          if ((_g_Wheel != 0) && (lVar5 = lgDev_WaitAsync(0,0x36f078), lVar5 == 0)) {
            _g_Wheel = 0;
          }
          if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
            _s_WheelVar10 = 1;
          }
          iVar3 = iVar10 + *piVar9 * 4;
          puVar8 = (undefined4 *)(iVar3 + 0x4a4);
          if ((*(int *)(iVar3 + 0x4a4) == -1) &&
             (uVar4 = lgDevDownloadForceEffect
                                (*(undefined4 *)(iVar10 + 0x490),puVar8,
                                 iVar10 + *piVar9 * 0x3c + 0x4bc), (uVar4 & 0xffffffff80000000) != 0
             )) {
            *puVar8 = 0xffffffff;
          }
          _g_Wheel = 1;
          uVar12 = uVar12 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar12 < uVar6);
      }
      iVar11 = iVar11 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar11 < _s_WheelVar1);
  }
  uVar6 = 0;
  iVar11 = 0;
  if (_s_WheelVar1 < 1) {
    bVar2 = false;
  }
  else {
    puVar8 = (undefined4 *)&s_WheelVar4;
    do {
      iVar10 = Wheel_BuildEffect(*puVar8,4,uVar6 * 4 + 0x387dc0,uVar6 * 0x3c + 0x387de0);
      iVar11 = iVar11 + 1;
      uVar6 = uVar6 + iVar10;
      puVar8 = puVar8 + 1;
    } while (iVar11 < _s_WheelVar1);
    bVar2 = uVar6 != 0;
  }
  uVar12 = 0;
  if (bVar2) {
    iVar11 = 0x387de0;
    puVar8 = (undefined4 *)0x387dc0;
    do {
      if ((_g_Wheel != 0) && (lVar5 = lgDev_WaitAsync(0,0x36f078), lVar5 == 0)) {
        _g_Wheel = 0;
      }
      if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
        _s_WheelVar10 = 1;
      }
      lgDevAUpdateForceEffect(*puVar8,iVar11);
      uVar12 = uVar12 + 1;
      _g_Wheel = 1;
      iVar11 = iVar11 + 0x3c;
      puVar8 = puVar8 + 1;
    } while (uVar12 < uVar6);
  }
  iVar11 = 0;
  iVar10 = 0;
  if (0 < _s_WheelVar1) {
    puVar8 = (undefined4 *)&s_WheelVar4;
    do {
      iVar3 = Wheel_BuildEffect(*puVar8,8,iVar11 * 4 + 0x387dc0,iVar11 * 0x3c + 0x387de0);
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + iVar3;
      puVar8 = puVar8 + 1;
    } while (iVar10 < _s_WheelVar1);
  }
  if (iVar11 != 0) {
    if ((_g_Wheel != 0) && (lVar5 = lgDev_WaitAsync(0,0x36f078), lVar5 == 0)) {
      _g_Wheel = 0;
    }
    if ((_g_Wheel == 0) && ((_s_WheelVar9 & 0x80000000) != 0)) {
      _s_WheelVar10 = 1;
    }
    lgDevAStartForceEffectMulti(iVar11,0x387dc0);
    _g_Wheel = 1;
  }
  return;
}

// 0x00140ca0  size 0x1e8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* lgDevRead / lgDevClose */

void Wheel_PollDevices(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = _s_WheelVar1;
  iVar7 = 0;
  iVar8 = 0x387da0;
  piVar4 = (int *)&s_WheelVar2;
  do {
    if (*piVar4 != -1) {
      uVar2 = lgDevRead(*piVar4,1,iVar8);
      _s_WheelVar9 = (undefined4)uVar2;
      if ((uVar2 & 0xffffffff80000000) != 0) {
        iVar3 = 0;
        iVar6 = 0x387280;
        do {
          if (*piVar4 == *(int *)(iVar6 + 0x490)) goto LAB_00140d98;
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x590;
        } while (iVar3 < 2);
        iVar6 = 0;
LAB_00140d98:
        if (*(int *)(iVar6 + 0x490) != -1) {
          uVar5 = 0;
          do {
            iVar3 = iVar6 + uVar5 * 4;
            if (*(int *)(iVar3 + 0x4a4) != -1) {
              lgDevStopForceEffect();
              lgDevDestroyForceEffect(*(undefined4 *)(iVar3 + 0x4a4));
              *(undefined4 *)(iVar3 + 0x4a4) = 0xffffffff;
            }
            *(undefined4 *)(iVar3 + 0x4a4) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x4b0) = 0;
            iVar3 = uVar5 * 0x3c;
            uVar5 = uVar5 + 1;
            iVar3 = iVar6 + iVar3;
            *(undefined1 *)(iVar3 + 0x4bc) = 0;
            *(undefined4 *)(iVar3 + 0x4c0) = 0;
            *(undefined4 *)(iVar3 + 0x4c4) = 0;
          } while (uVar5 < 3);
          lgDevClose(*(undefined4 *)(iVar6 + 0x490));
          Pad_Reset(iVar6);
        }
        Wheel_ResetState(iVar6);
        *piVar4 = -1;
        _s_WheelVar1 = _s_WheelVar1 + -1;
      }
    }
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 1;
    iVar8 = iVar8 + 0x10;
    if (1 < iVar7) {
      if (iVar1 != _s_WheelVar1) {
        maybe_Wheel_SortDevices(0,1);
      }
      _s_WheelVar2 = *(undefined4 *)(_s_WheelVar4 + 0x490);
      _s_WheelVar6 = *(undefined4 *)(_s_WheelVar4 + 0x498);
      _s_WheelVar3 = *(undefined4 *)(_s_WheelVar5 + 0x490);
      _s_WheelVar7 = *(undefined4 *)(_s_WheelVar5 + 0x498);
      _s_WheelVar10 = 0;
      return;
    }
  } while( true );
}

// 0x00140e90  size 0x284
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* lgDevEnumerate / lgDevOpen */

void Wheel_EnumerateDevices(void)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  int iStack_c;
  
  iVar3 = _s_WheelVar1;
  iVar9 = 0;
  uVar4 = lgDevEnumerate(0,&iStack_20);
  if ((uVar4 & 0xffffffff80000000) == 0) {
    do {
      if (iStack_c == -1) {
        bVar2 = false;
        if ((((iStack_20 == 0x11) || (iStack_20 == 0x12)) || (iStack_20 == 0)) || (iStack_20 == 0))
        {
          bVar2 = true;
        }
        if (bVar2) {
          iVar5 = 0;
          iVar8 = 0x387280;
          do {
            if (*(int *)(iVar8 + 0x490) == -1) goto LAB_00140f70;
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 0x590;
          } while (iVar5 < 2);
          iVar8 = 0;
LAB_00140f70:
          if (iVar8 != 0) {
            if ((*(int *)(iVar8 + 0x490) == -1) &&
               (uVar4 = lgDevOpen(iVar9,iVar8 + 0x490), (uVar4 & 0xffffffff80000000) == 0)) {
              Pad_Reset(iVar8);
              puVar6 = (undefined1 *)(iVar8 + 0x57c);
              *(undefined4 *)(iVar8 + 0x47c) = 1;
              iVar5 = 4;
              *(int *)(iVar8 + 0x48c) = iVar9;
              *(int *)(iVar8 + 0x570) = iStack_20;
              *(undefined4 *)(iVar8 + 0x574) = uStack_1c;
              *(undefined4 *)(iVar8 + 0x578) = uStack_18;
              puVar7 = auStack_14;
              do {
                iVar5 = iVar5 + -1;
                uVar1 = puVar7[1];
                *puVar6 = *puVar7;
                puVar6[1] = uVar1;
                puVar7 = puVar7 + 2;
                puVar6 = puVar6 + 2;
              } while (0 < iVar5);
              *(int *)(iVar8 + 0x584) = iStack_c;
              lgDevGetDeviceProperty(*(undefined4 *)(iVar8 + 0x490),2,iVar8 + 0x49c);
              lgDevGetDeviceProperty(*(undefined4 *)(iVar8 + 0x490),3,iVar8 + 0x4a0);
              *(undefined4 *)(iVar8 + 0x4a4) = 0xffffffff;
              *(undefined4 *)(iVar8 + 0x4b0) = 0;
              *(undefined1 *)(iVar8 + 0x4bc) = 0;
              *(undefined4 *)(iVar8 + 0x4c0) = 0;
              *(undefined4 *)(iVar8 + 0x4c4) = 0;
              *(undefined4 *)(iVar8 + 0x4a8) = 0xffffffff;
              *(undefined4 *)(iVar8 + 0x4b4) = 0;
              *(undefined1 *)(iVar8 + 0x4f8) = 0;
              *(undefined4 *)(iVar8 + 0x4fc) = 0;
              *(undefined4 *)(iVar8 + 0x500) = 0;
              *(undefined4 *)(iVar8 + 0x4ac) = 0xffffffff;
              *(undefined4 *)(iVar8 + 0x4b8) = 0;
              *(undefined1 *)(iVar8 + 0x534) = 0;
              *(undefined4 *)(iVar8 + 0x538) = 0;
              *(undefined4 *)(iVar8 + 0x53c) = 0;
            }
            _s_WheelVar1 = _s_WheelVar1 + 1;
          }
        }
      }
      iVar9 = iVar9 + 1;
      uVar4 = lgDevEnumerate(iVar9,&iStack_20);
    } while ((uVar4 & 0xffffffff80000000) == 0);
  }
  if (iVar3 != _s_WheelVar1) {
    maybe_Wheel_SortDevices(0,1);
  }
  _s_WheelVar2 = *(undefined4 *)(_s_WheelVar4 + 0x490);
  _s_WheelVar6 = *(undefined4 *)(_s_WheelVar4 + 0x498);
  _s_WheelVar3 = *(undefined4 *)(_s_WheelVar5 + 0x490);
  _s_WheelVar7 = *(undefined4 *)(_s_WheelVar5 + 0x498);
  return;
}

// 0x00141120  size 0x1e4
/* recursive */

void maybe_Wheel_SortDevices(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  
  iVar4 = param_1 + param_2;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  iVar6 = param_1;
  iVar11 = param_2;
LAB_00141164:
  do {
    iVar5 = iVar6 * 4;
    uVar9 = 0;
    iVar3 = *(int *)(&s_WheelVar4 + iVar5);
    do {
      bVar1 = *(byte *)(*(int *)(&s_WheelVar4 + (iVar4 >> 1) * 4) + 0x57c + uVar9);
      bVar2 = *(byte *)(iVar3 + 0x57c + uVar9);
      if (bVar2 < bVar1) {
        lVar8 = -1;
        goto LAB_001411d0;
      }
      if (bVar1 < bVar2) {
        lVar8 = 1;
        goto LAB_001411d0;
      }
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < 8);
    lVar8 = 0;
LAB_001411d0:
    if (-1 < lVar8) {
      piVar10 = (int *)(&s_WheelVar4 + iVar11 * 4);
      do {
        uVar9 = 0;
        do {
          bVar1 = *(byte *)(*(int *)(&s_WheelVar4 + (iVar4 >> 1) * 4) + 0x57c + uVar9);
          bVar2 = *(byte *)(*piVar10 + 0x57c + uVar9);
          if (bVar2 < bVar1) {
            lVar8 = -1;
            goto LAB_00141250;
          }
          if (bVar1 < bVar2) {
            lVar8 = 1;
            goto LAB_00141250;
          }
          uVar9 = uVar9 + 1 & 0xff;
        } while (uVar9 < 8);
        lVar8 = 0;
LAB_00141250:
        if (lVar8 < 1) goto LAB_00141280;
        piVar10 = piVar10 + -1;
        iVar11 = iVar11 + -1;
      } while( true );
    }
    iVar6 = iVar6 + 1;
  } while( true );
LAB_00141280:
  if (iVar11 <= iVar6) {
    if (param_1 < iVar6 + -1) {
      maybe_Wheel_SortDevices();
    }
    if (iVar11 + 1 < param_2) {
      maybe_Wheel_SortDevices(iVar11 + 1,param_2);
    }
    return;
  }
  iVar7 = iVar11 * 4;
  iVar6 = iVar6 + 1;
  iVar11 = iVar11 + -1;
  *(int *)(&s_WheelVar4 + iVar5) = *(int *)(&s_WheelVar4 + iVar7);
  *(int *)(&s_WheelVar4 + iVar7) = iVar3;
  goto LAB_00141164;
}

// 0x00141310  size 0xec
int Wheel_GetDeviceName(int param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char acStack_8 [8];
  
  pcVar9 = (&PTR_DAT_0030a6c0)[param_1];
  do {
    pcVar3 = acStack_8;
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      pcVar8 = pcVar9;
      uVar7 = uVar6 + 1;
      *pcVar3 = *pcVar8;
      pcVar3 = pcVar3 + 1;
      if (7 < uVar7) break;
      pcVar9 = pcVar8 + 1;
    } while (pcVar8[1] != '\0');
    if (uVar7 < 8) {
      acStack_8[uVar6 + 1] = '\0';
      uVar7 = uVar6 + 2;
    }
    iVar5 = 0;
    piVar4 = (int *)&s_WheelVar4;
    do {
      iVar1 = *piVar4;
      lVar2 = Str_CompareN(iVar1 + 0x57c,acStack_8,uVar7);
      if (lVar2 == 0) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < 2);
    pcVar9 = pcVar8 + 2;
    if (*pcVar9 == '\0') {
      return 0;
    }
  } while( true );
}

// 0x00141400  size 0x24
undefined4 Wheel_GetHandle(long param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = *(undefined4 *)(&s_WheelVar4 + (int)param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00141430  size 0xfc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maybe_Wheel_Shutdown(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0x387280;
  do {
    if (*(int *)(iVar2 + 0x490) != -1) {
      uVar3 = 0;
      do {
        iVar1 = iVar2 + uVar3 * 4;
        if (*(int *)(iVar1 + 0x4a4) != -1) {
          lgDevStopForceEffect();
          lgDevDestroyForceEffect(*(undefined4 *)(iVar1 + 0x4a4));
          *(undefined4 *)(iVar1 + 0x4a4) = 0xffffffff;
        }
        *(undefined4 *)(iVar1 + 0x4a4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x4b0) = 0;
        iVar1 = uVar3 * 0x3c;
        uVar3 = uVar3 + 1;
        iVar1 = iVar2 + iVar1;
        *(undefined1 *)(iVar1 + 0x4bc) = 0;
        *(undefined4 *)(iVar1 + 0x4c0) = 0;
        *(undefined4 *)(iVar1 + 0x4c4) = 0;
      } while (uVar3 < 3);
      lgDevClose(*(undefined4 *)(iVar2 + 0x490));
      Pad_Reset(iVar2);
    }
    Wheel_ResetState(iVar2);
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0x590;
  } while (iVar4 < 2);
  _s_WheelVar1 = 0;
  return;
}

// 0x00141530  size 0x8c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* lgDevInit */

void Wheel_Init(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  lgDevInit();
  _s_WheelVar1 = 0;
  iVar4 = 0;
  iVar3 = 0x387280;
  puVar2 = (undefined4 *)&s_WheelVar2;
  piVar1 = (int *)&s_WheelVar4;
  do {
    Wheel_ResetState(iVar3);
    *piVar1 = iVar3;
    *puVar2 = 0xffffffff;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x590;
    puVar2 = puVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar4 < 2);
  _s_WheelVar8 = 0;
  _g_Wheel = 0;
  _s_WheelVar9 = 0;
  _s_WheelVar10 = 0;
  return;
}

// 0x001415c0  size 0x3cc
void Wheel_StateMachine(int param_1)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(uint *)(param_1 + 0x588) < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(param_1 + 0x588)) {
    case 0:
      if (*(int *)(param_1 + 0x49c) != 0) {
        *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
        *(undefined4 *)(param_1 + 0x49c) = 0;
      }
      *(undefined4 *)(param_1 + 0x588) = 1;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x58c) = 0;
      if ((*(int *)(param_1 + 0x4a4) == -1) || ((*(uint *)(param_1 + 0x4b0) & 2) != 0)) {
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 1;
        *(undefined1 *)(param_1 + 0x4bc) = 0;
      }
      if (((*(int *)(param_1 + 0x4a4) != -1) || ((*(uint *)(param_1 + 0x4b0) & 1) != 0)) &&
         (*(char *)(param_1 + 0x4bc) == '\0')) {
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 4;
        *(undefined1 *)(param_1 + 0x4bc) = 0;
        *(undefined4 *)(param_1 + 0x4c0) = 1000;
        *(undefined4 *)(param_1 + 0x4c4) = 0;
        *(undefined4 *)(param_1 + 0x4c8) = 0xffffff01;
        *(undefined4 *)(param_1 + 0x4cc) = 0x5a;
        *(undefined4 *)(param_1 + 0x4d0) = 0;
        *(undefined4 *)(param_1 + 0x4d4) = 0;
        *(undefined4 *)(param_1 + 0x4d8) = 0;
        *(undefined4 *)(param_1 + 0x4dc) = 0;
        *(undefined4 *)(param_1 + 0x4e0) = uStack_1c;
        *(undefined4 *)(param_1 + 0x4e4) = uStack_18;
        *(undefined4 *)(param_1 + 0x4e8) = uStack_14;
        *(undefined4 *)(param_1 + 0x4ec) = uStack_10;
        *(undefined4 *)(param_1 + 0x4f0) = uStack_c;
        *(undefined4 *)(param_1 + 0x4f4) = uStack_8;
      }
      if ((*(int *)(param_1 + 0x4a4) != -1) || ((*(uint *)(param_1 + 0x4b0) & 1) != 0)) {
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 8;
      }
      *(undefined4 *)(param_1 + 0x588) = 2;
      break;
    case 2:
      iVar1 = *(int *)(param_1 + 0x58c) + 1;
      *(int *)(param_1 + 0x58c) = iVar1;
      if (iVar1 < 0x3c) {
        return;
      }
      if (*(int *)(param_1 + 0x4a4) != -1) {
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 0x10;
      }
      *(undefined4 *)(param_1 + 0x588) = 3;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x58c) = 0;
      if ((*(int *)(param_1 + 0x4a4) == -1) || ((*(uint *)(param_1 + 0x4b0) & 2) != 0)) {
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 1;
        *(undefined1 *)(param_1 + 0x4bc) = 0;
      }
      if (((*(int *)(param_1 + 0x4a4) != -1) || ((*(uint *)(param_1 + 0x4b0) & 1) != 0)) &&
         (*(char *)(param_1 + 0x4bc) == '\0')) {
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 4;
        *(undefined1 *)(param_1 + 0x4bc) = 0;
        *(undefined4 *)(param_1 + 0x4c0) = 1000;
        *(undefined4 *)(param_1 + 0x4c4) = 0;
        *(undefined4 *)(param_1 + 0x4c8) = 0xffffff01;
        *(undefined4 *)(param_1 + 0x4cc) = 0x10e;
        *(undefined4 *)(param_1 + 0x4d0) = 0;
        *(undefined4 *)(param_1 + 0x4d4) = 0;
        *(undefined4 *)(param_1 + 0x4d8) = 0;
        *(undefined4 *)(param_1 + 0x4dc) = 0;
        *(undefined4 *)(param_1 + 0x4e0) = uStack_1c;
        *(undefined4 *)(param_1 + 0x4e4) = uStack_18;
        *(undefined4 *)(param_1 + 0x4e8) = uStack_14;
        *(undefined4 *)(param_1 + 0x4ec) = uStack_10;
        *(undefined4 *)(param_1 + 0x4f0) = uStack_c;
        *(undefined4 *)(param_1 + 0x4f4) = uStack_8;
      }
      if ((*(int *)(param_1 + 0x4a4) != -1) || ((*(uint *)(param_1 + 0x4b0) & 1) != 0)) {
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 8;
      }
      *(undefined4 *)(param_1 + 0x588) = 4;
      break;
    case 4:
      iVar1 = *(int *)(param_1 + 0x58c) + 1;
      *(int *)(param_1 + 0x58c) = iVar1;
      if (iVar1 < 0x3c) {
        return;
      }
      if (*(int *)(param_1 + 0x4a4) != -1) {
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 0x10;
      }
      *(undefined4 *)(param_1 + 0x588) = 5;
      break;
    case 5:
      if (*(int *)(param_1 + 0x4a4) != -1) {
        *(undefined4 *)(param_1 + 0x4b0) = 2;
      }
      if (*(int *)(param_1 + 0x49c) != 1) {
        *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
        *(undefined4 *)(param_1 + 0x49c) = 1;
      }
      *(undefined4 *)(param_1 + 0x588) = 6;
      *(undefined4 *)(param_1 + 0x58c) = 0;
      break;
    case 6:
      iVar1 = *(int *)(param_1 + 0x58c) + 1;
      *(int *)(param_1 + 0x58c) = iVar1;
      if (iVar1 < 0x3c) {
        return;
      }
      *(undefined4 *)(param_1 + 0x588) = 7;
      *(undefined4 *)(param_1 + 0x58c) = 0;
    }
  }
  return;
}

// 0x00141990  size 0x2c
void Wheel_SetButtonMap(int param_1,long param_2)

{
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x488) = &DAT_0030a870;
  }
  else {
    *(int *)(param_1 + 0x488) = (int)param_2;
  }
  return;
}

// 0x001419c0  size 0x2c
void Wheel_SetAxisMap(int param_1,long param_2)

{
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x484) = &DAT_0030a830;
  }
  else {
    *(int *)(param_1 + 0x484) = (int)param_2;
  }
  return;
}

// 0x001419f0  size 0x10
bool Wheel_IsActive(int param_1)

{
  return *(int *)(param_1 + 0x588) != 7;
}

// 0x00141a00  size 0x24
bool Wheel_ConsumeDisconnect(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x588) == 7;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x588) = 0;
  }
  return bVar1;
}

// 0x00141a30  size 0x8
undefined4 Engine_GetField_47c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x47c);
}

// 0x00141a40  size 0x18
void maybe_EngineObj_SetBitB(int param_1,uint param_2)

{
  (**(code **)(*(int *)(param_1 + 4) + 0xc))(param_1,1 << (param_2 & 0x1f));
  return;
}

// 0x00141a60  size 0x14
bool maybe_EngineObj_HasFlags(int param_1,uint param_2)

{
  return param_2 == (param_2 & *(uint *)(param_1 + 0x480));
}

// 0x00141a80  size 0x970
void Wheel_ReadInput(int param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  float fVar14;
  uint auStack_10 [4];
  
  uVar2 = 0;
  bVar1 = false;
  *(undefined4 *)(param_1 + 0x480) = 0;
  if (*(int *)(param_1 + 0x570) == 0x12) {
    uVar2 = Wheel_ReadButtons(param_1,0x30a7a0,param_1 + 0x480,param_2);
  }
  if (*(int *)(param_1 + 0x570) == 0x22) {
    uVar11 = Wheel_ReadButtons(param_1,0x30a7a0,param_1 + 0x480,param_2);
    uVar2 = uVar2 | uVar11;
  }
  iVar13 = (int)param_2;
  if (((*(uint *)(param_1 + 0x574) & 0x18) != 0) && (*(byte *)(iVar13 + 9) < 8)) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)(iVar13 + 9)) {
    case 0:
      uVar2 = uVar2 | 4;
      break;
    case 1:
      uVar2 = uVar2 | 0x24;
      break;
    case 2:
      uVar2 = uVar2 | 0x20;
      break;
    case 3:
      uVar2 = uVar2 | 0x28;
      break;
    case 4:
      uVar2 = uVar2 | 8;
      break;
    case 5:
      uVar2 = uVar2 | 0x18;
      break;
    case 6:
      uVar2 = uVar2 | 0x10;
      break;
    case 7:
      uVar2 = uVar2 | 0x14;
    }
  }
  if ((*(uint *)(param_1 + 0x574) & 0x20) != 0) {
    uVar11 = Wheel_ReadButtons(param_1,0x30a7d0,param_1 + 0x480,param_2);
    uVar2 = uVar2 | uVar11;
  }
  if ((*(uint *)(param_1 + 0x574) & 0x40) != 0) {
    uVar11 = Wheel_ReadButtons(param_1,0x30a7e8,param_1 + 0x480,param_2);
    uVar2 = uVar2 | uVar11;
  }
  if ((*(uint *)(param_1 + 0x574) & 0x80) != 0) {
    uVar11 = Wheel_ReadButtons(param_1,0x30a7f8,param_1 + 0x480,param_2);
    uVar2 = uVar2 | uVar11;
  }
  if ((*(uint *)(param_1 + 0x574) & 0x100) != 0) {
    uVar11 = Wheel_ReadButtons(param_1,0x30a808,param_1 + 0x480,param_2);
    uVar2 = uVar2 | uVar11;
  }
  if ((*(uint *)(param_1 + 0x574) & 0x200) != 0) {
    uVar11 = Wheel_ReadButtons(param_1,0x30a818,param_1 + 0x480,param_2);
    uVar2 = uVar2 | uVar11;
  }
  puVar12 = *(uint **)(param_1 + 0x484);
  uVar3 = 0;
  uVar11 = *puVar12;
  while (uVar11 != 0xffffffff) {
    uVar11 = puVar12[1];
    uVar4 = *puVar12;
    *(uint *)(param_1 + 0x480) =
         *(uint *)(param_1 + 0x480) | 1 << (*(uint *)(&DAT_0030a6e0 + uVar11 * 4) & 0x1f);
    if (uVar4 == (uVar4 & *(uint *)(iVar13 + 0xc))) {
      uVar3 = uVar3 | 1 << (uVar11 & 0x1f);
    }
    puVar12 = puVar12 + 2;
    uVar11 = *puVar12;
  }
  uVar2 = uVar2 | uVar3;
  uVar11 = 0;
  do {
    uVar10 = 0;
    if ((uVar2 & 1 << (uVar11 & 0x1f)) != 0) {
      uVar10 = 0xff;
    }
    *(undefined1 *)(param_1 + uVar11 + 0x414) = uVar10;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x18);
  if (*(int *)(param_1 + 0x570) - 0x11U < 2) {
    uVar11 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x30),
                            *(undefined1 *)(iVar13 + 7),param_1 + 0x480,1);
    uVar3 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x34),
                           *(undefined1 *)(iVar13 + 8),param_1 + 0x480,1);
    uVar2 = uVar2 | uVar11 | uVar3;
  }
  iVar9 = *(int *)(param_1 + 0x570);
  if (((iVar9 == 0x11) || (iVar9 == 0x12)) || (iVar9 - 0x21U < 2)) {
    uVar11 = Wheel_ReadAxis(param_1,**(undefined4 **)(param_1 + 0x488),*(undefined1 *)(iVar13 + 1),
                            param_1 + 0x480,1);
    uVar3 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 4),
                           *(undefined1 *)(iVar13 + 1),param_1 + 0x480,1);
    uVar4 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 8),
                           *(undefined1 *)(iVar13 + 2),param_1 + 0x480,1);
    uVar5 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0xc),
                           *(undefined1 *)(iVar13 + 2),param_1 + 0x480,1);
    uVar6 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x20),
                           *(undefined1 *)(iVar13 + 1),param_1 + 0x480,1);
    uVar7 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x24),
                           *(undefined1 *)(iVar13 + 2),param_1 + 0x480,1);
    uVar2 = uVar2 | uVar11 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  }
  if (*(int *)(param_1 + 0x574) == 1) {
    uVar11 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x10),
                            *(undefined1 *)(iVar13 + 3),param_1 + 0x480);
    uVar3 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x14),
                           *(undefined1 *)(iVar13 + 3),param_1 + 0x480,1);
    uVar4 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x18),
                           *(undefined1 *)(iVar13 + 4),param_1 + 0x480,1);
    uVar5 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x1c),
                           *(undefined1 *)(iVar13 + 4),param_1 + 0x480,1);
    uVar6 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x28),
                           *(undefined1 *)(iVar13 + 3),param_1 + 0x480,1);
    uVar7 = Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x2c),
                           *(undefined1 *)(iVar13 + 4),param_1 + 0x480,1);
    uVar2 = uVar2 | uVar11 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  }
  if (*(int *)(param_1 + 0x570) - 0x11U < 2) {
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x30),
                   *(undefined1 *)(iVar13 + 7),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x34),
                   *(undefined1 *)(iVar13 + 8),param_1 + 0x480,0);
    iVar9 = *(int *)(param_1 + 0x570);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x570);
  }
  if (((iVar9 == 0x11) || (iVar9 == 0x12)) || (iVar9 - 0x21U < 2)) {
    Wheel_ReadAxis(param_1,**(undefined4 **)(param_1 + 0x488),*(undefined1 *)(iVar13 + 1),
                   param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 4),
                   *(undefined1 *)(iVar13 + 1),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 8),
                   *(undefined1 *)(iVar13 + 2),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0xc),
                   *(undefined1 *)(iVar13 + 2),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x20),
                   *(undefined1 *)(iVar13 + 1),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x24),
                   *(undefined1 *)(iVar13 + 2),param_1 + 0x480,0);
    iVar9 = *(int *)(param_1 + 0x574);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x574);
  }
  if (iVar9 == 1) {
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x10),
                   *(undefined1 *)(iVar13 + 3),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x14),
                   *(undefined1 *)(iVar13 + 3),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x18),
                   *(undefined1 *)(iVar13 + 4),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x1c),
                   *(undefined1 *)(iVar13 + 4),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x28),
                   *(undefined1 *)(iVar13 + 3),param_1 + 0x480,0);
    Wheel_ReadAxis(param_1,*(undefined4 *)(*(int *)(param_1 + 0x488) + 0x2c),
                   *(undefined1 *)(iVar13 + 4),param_1 + 0x480,0);
  }
  uVar11 = 0;
  iVar13 = param_1;
  do {
    Color_LerpAlpha(iVar13 + 0x1a4,*(undefined1 *)(param_1 + uVar11 + 0x414),0xff);
    uVar11 = uVar11 + 1;
    iVar13 = iVar13 + 0x10;
  } while (uVar11 < 0x18);
  uVar8 = Pad_MapButtons(param_1,uVar2,0);
  Input_UpdateButtonEdges(param_1 + 8,uVar8);
  puVar12 = *(uint **)(param_1 + 0x488);
  if (puVar12 != (uint *)0x0) {
    iVar13 = 0xe;
    do {
      if ((1 < *puVar12) && (*puVar12 < 6)) {
        bVar1 = true;
        break;
      }
      iVar13 = iVar13 + -1;
      puVar12 = puVar12 + 1;
    } while (iVar13 != 0);
  }
  if (!bVar1) {
    uVar11 = 2;
    puVar12 = auStack_10 + 2;
    do {
      uVar3 = 0;
      if ((uVar2 & 1 << (uVar11 & 0x1f)) != 0) {
        uVar3 = 0xff;
      }
      uVar11 = uVar11 + 1;
      puVar12[-2] = uVar3;
      puVar12 = puVar12 + 1;
    } while (uVar11 < 6);
    Color_LerpRgba(param_1 + 0x324,auStack_10[2],auStack_10[3],0xff);
    fVar14 = ((float)auStack_10[3] / 2.0 - (float)auStack_10[2] / 2.0) + 127.5;
    if (2.1474836e+09 <= fVar14) {
      fVar14 = fVar14 - 2.1474836e+09;
    }
    *(char *)(param_1 + 0x474) = (char)(int)fVar14;
    Color_LerpRgba(param_1 + 0x334,auStack_10[1],auStack_10[0],0xff);
    fVar14 = ((float)auStack_10[1] / 2.0 - (float)auStack_10[0] / 2.0) + 127.5;
    if (2.1474836e+09 <= fVar14) {
      fVar14 = fVar14 - 2.1474836e+09;
    }
    *(char *)(param_1 + 0x475) = (char)(int)fVar14;
  }
  return;
}

// 0x001423f0  size 0x514
uint Wheel_ReadAxis(int param_1,uint param_2,ulong param_3,uint *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 uVar5;
  uint uVar6;
  float fVar7;
  
  uVar1 = 0;
  if (param_2 < 0x10) {
    if (param_5 == 0) {
      *param_4 = *param_4 | 1 << (*(uint *)(&DAT_0030a740 + param_2 * 4) & 0x1f);
      uVar4 = (ulong)*(byte *)(param_2 + param_1 + 0x414);
      if (uVar4 < (param_3 & 0xff)) {
        uVar4 = param_3;
      }
      *(char *)(param_2 + param_1 + 0x414) = (char)uVar4;
    }
    else {
      *param_4 = *param_4 | 1 << (*(uint *)(&DAT_0030a6e0 + param_2 * 4) & 0x1f);
      if (param_3 != 0) {
        uVar1 = 1 << (param_2 & 0x1f);
      }
    }
  }
  if ((0xf < param_2) && (param_2 < 0x18)) {
    iVar2 = 0;
    uVar6 = 0;
    if (param_2 - 0x10 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(param_2 - 0x10) {
      case 0:
        if ((param_3 & 0xff) < 0x7f) {
          iVar2 = 1;
          if ((long)param_3 < 0) {
            fVar7 = (float)(param_3 & 0xffffffff);
          }
          else {
            fVar7 = (float)(int)param_3;
          }
          fVar7 = (127.5 - fVar7) * 2.0;
          if (fVar7 < 2.1474836e+09) {
            uVar6 = (uint)fVar7;
          }
          else {
            uVar6 = (int)(fVar7 - 2.1474836e+09) | 0x80000000;
          }
        }
        break;
      case 1:
        if (0x7f < (param_3 & 0xff)) {
          iVar2 = 1;
          if ((long)param_3 < 0) {
            fVar7 = (float)(param_3 & 0xffffffff);
          }
          else {
            fVar7 = (float)(int)param_3;
          }
          fVar7 = (fVar7 - 127.5) * 2.0;
          if (fVar7 < 2.1474836e+09) {
            uVar6 = (uint)fVar7;
          }
          else {
            uVar6 = (int)(fVar7 - 2.1474836e+09) | 0x80000000;
          }
        }
      }
    }
    if (param_5 == 0) {
      uVar3 = (uint)*(byte *)(param_2 + param_1 + 0x414);
      if (uVar6 <= uVar3) {
        uVar6 = uVar3;
      }
      *(char *)(param_2 + param_1 + 0x414) = (char)uVar6;
    }
    else {
      uVar1 = uVar1 | iVar2 << (param_2 & 0x1f);
    }
  }
  uVar5 = (undefined1)param_3;
  if (param_2 - 0x18 < 2) {
    iVar2 = 0;
    if ((param_3 & 0xff) < 0x7f) {
      iVar2 = 1;
    }
    else if (0x7f < (param_3 & 0xff)) {
      iVar2 = 2;
    }
    if (param_5 == 0) {
      if (param_2 == 0x18) {
        *param_4 = *param_4 | 1 << (DAT_0030a750 & 0x1f);
        *param_4 = *param_4 | 1 << (DAT_0030a754 & 0x1f);
        Color_LerpRgb(param_1 + 0x324,param_3 & 0xff,0xff);
        *(undefined1 *)(param_1 + 0x474) = uVar5;
      }
      else {
        *param_4 = *param_4 | 1 << (DAT_0030a748 & 0x1f);
        *param_4 = *param_4 | 1 << (DAT_0030a74c & 0x1f);
        Color_LerpRgb(param_1 + 0x334,param_3 & 0xff,0xff);
        *(undefined1 *)(param_1 + 0x475) = uVar5;
      }
    }
    else if (param_2 == 0x18) {
      *param_4 = *param_4 | 1 << (DAT_0030a6f0 & 0x1f);
      *param_4 = *param_4 | 1 << (DAT_0030a6f4 & 0x1f);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          uVar6 = 0x10;
        }
        else {
          uVar6 = 0x20;
        }
        uVar1 = uVar1 | uVar6;
      }
    }
    else {
      *param_4 = *param_4 | 1 << (DAT_0030a6e8 & 0x1f);
      *param_4 = *param_4 | 1 << (DAT_0030a6ec & 0x1f);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          uVar6 = 4;
        }
        else {
          uVar6 = 8;
        }
        uVar1 = uVar1 | uVar6;
      }
    }
  }
  if (param_2 == 0x1a) {
    *param_4 = *param_4 | 0x40000;
    Color_LerpRgb(param_1 + 0x364,param_3 & 0xff,0xff);
    *(undefined1 *)(param_1 + 0x478) = uVar5;
  }
  if (param_2 == 0x1b) {
    *param_4 = *param_4 | 0x80000;
    Color_LerpRgb(param_1 + 0x374,param_3 & 0xff,0xff);
    *(undefined1 *)(param_1 + 0x479) = uVar5;
  }
  if (param_2 == 0x1c) {
    *param_4 = *param_4 | 0x10000;
    Color_LerpRgb(param_1 + 0x344,param_3 & 0xff,0xff);
    *(undefined1 *)(param_1 + 0x476) = uVar5;
  }
  if (param_2 == 0x1d) {
    *param_4 = *param_4 | 0x20000;
    Color_LerpRgb(param_1 + 0x354,param_3 & 0xff,0xff);
    *(undefined1 *)(param_1 + 0x477) = uVar5;
  }
  return uVar1;
}

// 0x00142910  size 0x230
uint Wheel_ReadButtons(undefined8 param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = *param_2;
  while (-1 < (int)uVar2) {
    uVar2 = *param_2;
    *param_3 = *param_3 | 1 << (*(uint *)(&DAT_0030a6e0 + uVar2 * 4) & 0x1f);
    switch(uVar2) {
    case 0:
      if ((*(uint *)(param_4 + 0xc) & 0x200000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 1:
      if ((*(uint *)(param_4 + 0xc) & 0x100000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 6:
      if ((*(uint *)(param_4 + 0xc) & 0x80000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 7:
      if ((*(uint *)(param_4 + 0xc) & 0x40000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 8:
      if ((*(uint *)(param_4 + 0xc) & 0x10000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 9:
      if ((*(uint *)(param_4 + 0xc) & 0x20000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 10:
      if ((*(uint *)(param_4 + 0xc) & 0x400000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 0xb:
      if ((*(uint *)(param_4 + 0xc) & 0x800000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 0xc:
      if ((*(uint *)(param_4 + 0xc) & 0x1000000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 0xd:
      if ((*(uint *)(param_4 + 0xc) & 0x2000000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 0xe:
      if ((*(uint *)(param_4 + 0xc) & 0x4000000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
      break;
    case 0xf:
      if ((*(uint *)(param_4 + 0xc) & 0x8000000) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1 << (uVar2 & 0x1f);
      }
      uVar1 = uVar1 | uVar2;
    }
    param_2 = param_2 + 1;
    uVar2 = *param_2;
  }
  return uVar1;
}

// 0x00142b40  size 0x4c
undefined4 Wheel_IsEffectIdle(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 * 4 + param_1;
  if ((*(int *)(iVar2 + 0x4a4) == -1) && ((*(uint *)(iVar2 + 0x4b0) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    param_1 = param_2 * 4 + param_1;
    uVar1 = 1;
    *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 8;
  }
  return uVar1;
}

// 0x00142b90  size 0xec
undefined4 Wheel_PlayEffect(int param_1,int param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = param_2 * 4 + param_1;
  if ((*(int *)(iVar2 + 0x4a4) == -1) && ((*(uint *)(iVar2 + 0x4b0) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    iVar2 = param_2 * 0x3c + param_1;
    if (*param_3 == *(char *)(iVar2 + 0x4bc)) {
      param_1 = param_2 * 4 + param_1;
      uVar1 = 1;
      *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) | 4;
      *(char *)(iVar2 + 0x4bc) = *param_3;
      *(undefined4 *)(iVar2 + 0x4c0) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(iVar2 + 0x4c4) = *(undefined4 *)(param_3 + 8);
      uVar5 = *(undefined4 *)(param_3 + 0x10);
      uVar3 = *(undefined4 *)(param_3 + 0x14);
      uVar4 = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(iVar2 + 0x4c8) = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(iVar2 + 0x4cc) = uVar5;
      *(undefined4 *)(iVar2 + 0x4d0) = uVar3;
      *(undefined4 *)(iVar2 + 0x4d4) = uVar4;
      uVar5 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      uVar4 = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(iVar2 + 0x4d8) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(iVar2 + 0x4dc) = uVar5;
      *(undefined4 *)(iVar2 + 0x4e0) = uVar3;
      *(undefined4 *)(iVar2 + 0x4e4) = uVar4;
      uVar5 = *(undefined4 *)(param_3 + 0x30);
      uVar3 = *(undefined4 *)(param_3 + 0x34);
      uVar4 = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(iVar2 + 0x4e8) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(iVar2 + 0x4ec) = uVar5;
      *(undefined4 *)(iVar2 + 0x4f0) = uVar3;
      *(undefined4 *)(iVar2 + 0x4f4) = uVar4;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

// 0x00142c80  size 0x30
bool Wheel_IsEffectPlaying(int param_1,int param_2)

{
  bool bVar1;
  
  param_1 = param_2 * 4 + param_1;
  bVar1 = *(int *)(param_1 + 0x4a4) != -1;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x4b0) = 2;
  }
  return bVar1;
}

// 0x00142cb0  size 0x60
undefined4 Wheel_SetEffectGain(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 * 4 + param_1;
  if ((*(int *)(iVar2 + 0x4a4) == -1) || ((*(uint *)(iVar2 + 0x4b0) & 2) != 0)) {
    iVar2 = param_2 * 4 + param_1;
    uVar1 = 1;
    *(uint *)(iVar2 + 0x4b0) = *(uint *)(iVar2 + 0x4b0) | 1;
    *(undefined1 *)(param_2 * 0x3c + param_1 + 0x4bc) = param_3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00142d10  size 0x128
int Wheel_BuildEffect(int param_1,uint param_2,uint *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x490) != -1) {
    uVar3 = 0;
    iVar2 = param_1;
    do {
      if (((*(uint *)(param_1 + 0x4b0) & param_2) != 0) &&
         ((param_2 == 1 || (*(int *)(param_1 + 0x4a4) != -1)))) {
        if ((param_2 & 3) == 0) {
          *param_3 = *(uint *)(param_1 + 0x4a4);
        }
        else {
          *param_3 = uVar3;
        }
        if ((param_2 & 5) != 0) {
          *param_4 = *(undefined1 *)(iVar2 + 0x4bc);
          *(undefined4 *)(param_4 + 4) = *(undefined4 *)(iVar2 + 0x4c0);
          *(undefined4 *)(param_4 + 8) = *(undefined4 *)(iVar2 + 0x4c4);
          uVar6 = *(undefined4 *)(iVar2 + 0x4cc);
          uVar4 = *(undefined4 *)(iVar2 + 0x4d0);
          uVar5 = *(undefined4 *)(iVar2 + 0x4d4);
          *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(iVar2 + 0x4c8);
          *(undefined4 *)(param_4 + 0x10) = uVar6;
          *(undefined4 *)(param_4 + 0x14) = uVar4;
          *(undefined4 *)(param_4 + 0x18) = uVar5;
          uVar6 = *(undefined4 *)(iVar2 + 0x4dc);
          uVar4 = *(undefined4 *)(iVar2 + 0x4e0);
          uVar5 = *(undefined4 *)(iVar2 + 0x4e4);
          *(undefined4 *)(param_4 + 0x1c) = *(undefined4 *)(iVar2 + 0x4d8);
          *(undefined4 *)(param_4 + 0x20) = uVar6;
          *(undefined4 *)(param_4 + 0x24) = uVar4;
          *(undefined4 *)(param_4 + 0x28) = uVar5;
          uVar6 = *(undefined4 *)(iVar2 + 0x4ec);
          uVar4 = *(undefined4 *)(iVar2 + 0x4f0);
          uVar5 = *(undefined4 *)(iVar2 + 0x4f4);
          *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(iVar2 + 0x4e8);
          *(undefined4 *)(param_4 + 0x30) = uVar6;
          *(undefined4 *)(param_4 + 0x34) = uVar4;
          *(undefined4 *)(param_4 + 0x38) = uVar5;
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 0x3c;
        iVar1 = iVar1 + 1;
        *(uint *)(param_1 + 0x4b0) = *(uint *)(param_1 + 0x4b0) & ~param_2;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 4;
      iVar2 = iVar2 + 0x3c;
    } while (uVar3 < 3);
  }
  return iVar1;
}

// 0x00142e40  size 0x40
void Wheel_SetCenterSpring(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff;
  if (((int)param_2 < 0) && (uVar1 != 0)) {
    uVar1 = uVar1 - 0x100;
  }
  if (uVar1 != *(uint *)(param_1 + 0x4a0)) {
    *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 2;
    *(uint *)(param_1 + 0x4a0) = uVar1;
  }
  return;
}

// 0x00142e80  size 0x30
void Wheel_SetAutocenter(int param_1,long param_2)

{
  if ((uint)(param_2 != 0) != *(uint *)(param_1 + 0x49c)) {
    *(uint *)(param_1 + 0x494) = *(uint *)(param_1 + 0x494) | 1;
    *(uint *)(param_1 + 0x49c) = (uint)(param_2 != 0);
  }
  return;
}

// 0x00142eb0  size 0xfc
void Wheel_ResetState(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x484) = &DAT_0030a830;
  *(undefined **)(iVar1 + 0x488) = &DAT_0030a870;
  *(undefined4 *)(iVar1 + 0x47c) = 0;
  *(undefined4 *)(iVar1 + 0x480) = 0;
  *(undefined4 *)(iVar1 + 0x48c) = 0;
  uVar2 = 0;
  *(undefined4 *)(iVar1 + 0x490) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x494) = 0;
  *(undefined4 *)(iVar1 + 0x498) = 1;
  *(undefined1 *)(iVar1 + 0x57c) = 0xff;
  *(undefined1 *)(iVar1 + 0x57d) = 0xff;
  *(undefined1 *)(iVar1 + 0x57e) = 0xff;
  *(undefined1 *)(iVar1 + 0x57f) = 0xff;
  *(undefined1 *)(iVar1 + 0x580) = 0xff;
  *(undefined1 *)(iVar1 + 0x581) = 0xff;
  *(undefined1 *)(iVar1 + 0x582) = 0xff;
  *(undefined1 *)(iVar1 + 0x583) = 0xff;
  *(undefined4 *)(iVar1 + 0x588) = 0;
  *(undefined4 *)(iVar1 + 0x58c) = 0;
  do {
    maybe_Pad_ApplyDeadzone(0x3dcccccd,0,param_1,uVar2 & 0xff,0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar2 = 0x10;
  do {
    maybe_Pad_ApplyDeadzone(0x3e4ccccd,0x3e4ccccd,param_1,uVar2 & 0xff,0,0x14);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x18);
  return;
}

// 0x00142fb0  size 0x34
undefined8 maybe_Wheel_ctor(undefined8 param_1)

{
  Pad_InitState();
  *(undefined **)((int)param_1 + 4) = &DAT_0036e140;
  return param_1;
}

// 0x00142ff0  size 0x100
undefined4
Vu0_TransformPointPersp(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 in_vc2;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar5 = _lqc2(*param_2);
  auVar8 = _lqc2(param_2[3]);
  auVar9 = _lqc2(*param_3);
  auVar6 = _lqc2(param_2[1]);
  auVar7 = _lqc2(param_2[2]);
  auVar10 = _lqc2(param_3[1]);
  _vmulabc(auVar5,auVar9);
  auVar11 = _vmaddbc(auVar8,auVar9);
  auVar12 = _vmulbc(auVar6,auVar9);
  auVar9 = _vmulbc(auVar7,auVar9);
  auVar6 = _vmulbc(auVar6,auVar10);
  auVar7 = _vmulbc(auVar7,auVar10);
  auVar13 = _vadd(auVar11,auVar12);
  _vmulabc(auVar5,auVar10);
  auVar5 = _vmaddbc(auVar8,auVar10);
  auVar8 = _vadd(auVar11,auVar6);
  auVar10 = _vadd(auVar13,auVar9);
  auVar11 = _vadd(auVar13,auVar7);
  auVar13 = _vadd(auVar8,auVar9);
  auVar8 = _vadd(auVar8,auVar7);
  _vclip(auVar10,auVar10);
  _vclip(auVar11,auVar11);
  _vclip(auVar13,auVar13);
  _vclip(auVar8,auVar8);
  auVar8 = _vadd(auVar5,auVar12);
  auVar6 = _vadd(auVar5,auVar6);
  auVar10 = _vadd(auVar8,auVar9);
  auVar8 = _vadd(auVar8,auVar7);
  auVar5 = _vadd(auVar6,auVar9);
  auVar6 = _vadd(auVar6,auVar7);
  uVar2 = _cfc2(in_vc2);
  uVar1 = (long)(int)(((uint)uVar2 & 0x3f) << 6) & uVar2;
  _vclip(auVar10,auVar10);
  if (uVar1 != 0) {
    _vclip(auVar8,auVar8);
    _vclip(auVar5,auVar5);
    _vclip(auVar6,auVar6);
    uVar2 = (long)(int)(((int)uVar1 << 6 & (uint)uVar2) << 6) & uVar2;
    if (uVar2 != 0) {
      uVar3 = _cfc2(in_vc2);
      uVar4 = _cfc2(in_vc2);
      uVar1 = (long)(int)(((uint)uVar2 >> 0x12 & (uint)uVar3 & (uint)uVar4) << 6) & uVar4;
      if ((uVar1 != 0) && (((long)(int)(((int)uVar1 << 6 & (uint)uVar4) << 6) & uVar4) != 0)) {
        return 0;
      }
    }
  }
  return 1;
}

// 0x001430f0  size 0x79c
/* WARNING: Removing unreachable block (ram,0x001433f8) */
/* WARNING: Removing unreachable block (ram,0x00143204) */
/* WARNING: Removing unreachable block (ram,0x001436d0) */

void maybe_Camera_BuildFrustum(int param_1,int param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  
  iVar22 = 0;
  iVar13 = 0;
  iVar9 = param_1;
  pfVar12 = param_3;
  do {
    iVar4 = iVar13 + 1;
    fVar24 = *(float *)(iVar9 + iVar22);
    if ((iVar4 < 4) && (iVar4 < 4)) {
      if (8 < (int)(4U - iVar4)) {
        bVar2 = false;
        bVar1 = false;
        bVar3 = false;
        if ((iVar4 < 5) && (iVar4 < 0x7fffffff)) {
          bVar3 = true;
        }
        if ((bVar3) && (iVar13 != 0x7fffffff)) {
          bVar1 = true;
        }
        if (bVar1) {
          bVar1 = true;
          if (((-(iVar13 + 1) & 0x80000000U) == 0) && ((4U - iVar4 & 0x80000000) != 0)) {
            bVar1 = false;
          }
          if (bVar1) {
            bVar2 = true;
          }
        }
        if (bVar2) {
          pfVar5 = (float *)(iVar9 + iVar4 * 4);
          do {
            iVar4 = iVar4 + 8;
            *pfVar5 = *pfVar5 / fVar24;
            pfVar5[1] = pfVar5[1] / fVar24;
            pfVar5[2] = pfVar5[2] / fVar24;
            pfVar5[3] = pfVar5[3] / fVar24;
            pfVar5[4] = pfVar5[4] / fVar24;
            pfVar5[5] = pfVar5[5] / fVar24;
            pfVar5[6] = pfVar5[6] / fVar24;
            pfVar5[7] = pfVar5[7] / fVar24;
            pfVar5 = pfVar5 + 8;
          } while (iVar4 < -4);
        }
      }
      if (iVar4 < 4) {
        pfVar5 = (float *)(iVar9 + iVar4 * 4);
        do {
          iVar4 = iVar4 + 1;
          *pfVar5 = *pfVar5 / fVar24;
          pfVar5 = pfVar5 + 1;
        } while (iVar4 < 4);
      }
    }
    iVar4 = iVar13 + 1;
    *pfVar12 = *pfVar12 / fVar24;
    pfVar12[1] = pfVar12[1] / fVar24;
    pfVar12[2] = pfVar12[2] / fVar24;
    pfVar12[3] = pfVar12[3] / fVar24;
    if (iVar4 < 4) {
      iVar8 = param_1 + iVar4 * 0x10;
      pfVar5 = param_3 + iVar4 * 4;
      iVar14 = iVar4;
      do {
        fVar24 = *(float *)(iVar8 + iVar22);
        if ((iVar4 < 4) && (iVar4 < 4)) {
          iVar6 = iVar4;
          if (8 < (int)(4U - iVar4)) {
            bVar2 = false;
            bVar1 = false;
            bVar3 = false;
            if ((iVar4 < 5) && (iVar4 < 0x7fffffff)) {
              bVar3 = true;
            }
            if ((bVar3) && (iVar4 != -0x80000000)) {
              bVar1 = true;
            }
            if (bVar1) {
              bVar1 = true;
              if (((-iVar4 & 0x80000000U) == 0) && ((4U - iVar4 & 0x80000000) != 0)) {
                bVar1 = false;
              }
              if (bVar1) {
                bVar2 = true;
              }
            }
            if (bVar2) {
              pfVar10 = (float *)(iVar9 + iVar4 * 4);
              pfVar11 = (float *)(iVar8 + iVar4 * 4);
              do {
                iVar6 = iVar6 + 8;
                *pfVar11 = (*pfVar11 + 0.0) - fVar24 * *pfVar10;
                pfVar11[1] = (pfVar11[1] + 0.0) - fVar24 * pfVar10[1];
                pfVar11[2] = (pfVar11[2] + 0.0) - fVar24 * pfVar10[2];
                pfVar11[3] = (pfVar11[3] + 0.0) - fVar24 * pfVar10[3];
                pfVar11[4] = (pfVar11[4] + 0.0) - fVar24 * pfVar10[4];
                pfVar11[5] = (pfVar11[5] + 0.0) - fVar24 * pfVar10[5];
                pfVar11[6] = (pfVar11[6] + 0.0) - fVar24 * pfVar10[6];
                pfVar7 = pfVar10 + 7;
                pfVar10 = pfVar10 + 8;
                pfVar11[7] = (pfVar11[7] + 0.0) - fVar24 * *pfVar7;
                pfVar11 = pfVar11 + 8;
              } while (iVar6 < -4);
            }
          }
          if (iVar6 < 4) {
            pfVar10 = (float *)(iVar9 + iVar6 * 4);
            pfVar11 = (float *)(iVar8 + iVar6 * 4);
            do {
              iVar6 = iVar6 + 1;
              fVar23 = *pfVar10;
              pfVar10 = pfVar10 + 1;
              *pfVar11 = (*pfVar11 + 0.0) - fVar24 * fVar23;
              pfVar11 = pfVar11 + 1;
            } while (iVar6 < 4);
          }
        }
        iVar14 = iVar14 + 1;
        iVar8 = iVar8 + 0x10;
        *pfVar5 = (*pfVar5 + 0.0) - fVar24 * *pfVar12;
        pfVar5[1] = (pfVar5[1] + 0.0) - fVar24 * pfVar12[1];
        pfVar5[2] = (pfVar5[2] + 0.0) - fVar24 * pfVar12[2];
        pfVar5[3] = (pfVar5[3] + 0.0) - fVar24 * pfVar12[3];
        pfVar5 = pfVar5 + 4;
      } while (iVar14 < 4);
    }
    iVar13 = iVar13 + 1;
    iVar9 = iVar9 + 0x10;
    iVar22 = iVar22 + 4;
    pfVar12 = pfVar12 + 4;
  } while (iVar13 < 3);
  fVar24 = *(float *)(param_1 + 0x3c);
  param_1 = param_1 + 0x20;
  iVar9 = 2;
  pfVar5 = param_3 + 8;
  pfVar12 = (float *)(param_2 + 0x20);
  *(float *)(param_2 + 0x30) = param_3[0xc] / fVar24;
  *(float *)(param_2 + 0x34) = param_3[0xd] / fVar24;
  *(float *)(param_2 + 0x38) = param_3[0xe] / fVar24;
  *(float *)(param_2 + 0x3c) = param_3[0xf] / fVar24;
  do {
    iVar13 = iVar9 + 1;
    iVar22 = 0;
    iVar4 = 0;
    pfVar10 = pfVar5;
    pfVar11 = pfVar12;
    do {
      fVar24 = *pfVar10;
      if ((iVar13 < 4) && (iVar13 < 4)) {
        iVar14 = iVar13;
        if (8 < (int)(4U - iVar13)) {
          bVar2 = false;
          bVar1 = false;
          bVar3 = false;
          if ((iVar13 < 5) && (iVar13 < 0x7fffffff)) {
            bVar3 = true;
          }
          if ((bVar3) && (iVar13 != -0x80000000)) {
            bVar1 = true;
          }
          if (bVar1) {
            bVar1 = true;
            if (((-iVar13 & 0x80000000U) == 0) && ((4U - iVar13 & 0x80000000) != 0)) {
              bVar1 = false;
            }
            if (bVar1) {
              bVar2 = true;
            }
          }
          if (bVar2) {
            iVar8 = param_2 + iVar13 * 0x10;
            pfVar7 = (float *)(param_1 + iVar13 * 4);
            do {
              pfVar15 = (float *)(iVar8 + iVar4);
              iVar14 = iVar14 + 8;
              iVar6 = iVar8 + 0x10;
              iVar16 = iVar8 + 0x20;
              iVar17 = iVar8 + 0x30;
              iVar18 = iVar8 + 0x40;
              iVar19 = iVar8 + 0x50;
              iVar20 = iVar8 + 0x60;
              iVar21 = iVar8 + 0x70;
              iVar8 = iVar8 + 0x80;
              fVar24 = ((((((((fVar24 + 0.0) - *pfVar7 * *pfVar15) -
                            pfVar7[1] * *(float *)(iVar6 + iVar4)) -
                           pfVar7[2] * *(float *)(iVar16 + iVar4)) -
                          pfVar7[3] * *(float *)(iVar17 + iVar4)) -
                         pfVar7[4] * *(float *)(iVar18 + iVar4)) -
                        pfVar7[5] * *(float *)(iVar19 + iVar4)) -
                       pfVar7[6] * *(float *)(iVar20 + iVar4)) -
                       pfVar7[7] * *(float *)(iVar21 + iVar4);
              pfVar7 = pfVar7 + 8;
            } while (iVar14 < -4);
          }
        }
        if (iVar14 < 4) {
          iVar8 = param_2 + iVar14 * 0x10;
          pfVar7 = (float *)(param_1 + iVar14 * 4);
          do {
            pfVar15 = (float *)(iVar8 + iVar4);
            iVar14 = iVar14 + 1;
            iVar8 = iVar8 + 0x10;
            fVar24 = (fVar24 + 0.0) - *pfVar7 * *pfVar15;
            pfVar7 = pfVar7 + 1;
          } while (iVar14 < 4);
        }
      }
      iVar22 = iVar22 + 1;
      *pfVar11 = fVar24;
      pfVar10 = pfVar10 + 1;
      iVar4 = iVar4 + 4;
      pfVar11 = pfVar11 + 1;
    } while (iVar22 < 4);
    iVar9 = iVar9 + -1;
    pfVar5 = pfVar5 + -4;
    pfVar12 = pfVar12 + -4;
    param_1 = param_1 + -0x10;
  } while (-1 < iVar9);
  return;
}

// 0x00143890  size 0x2ac
void Camera_BuildProjection
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,undefined8 param_9,float *param_10,undefined8 param_11,
               undefined8 param_12,undefined8 param_13)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_stack_00000000;
  float in_stack_00000008;
  float in_stack_00000010;
  float afStack_80 [5];
  float fStack_6c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float afStack_40 [5];
  float fStack_2c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fVar2 = ((param_8 * in_stack_00000008) / param_1) / param_2;
  fVar5 = ((param_8 * *param_10) / param_1) / param_2;
  fVar6 = ((param_8 * param_10[1]) / param_1) / param_3;
  fVar3 = ((param_8 * in_stack_00000010) / param_1) / param_3;
  maybe_Vu0_UnitMatrix(afStack_80);
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_48 = 0x3f800000;
  uStack_44 = 0;
  afStack_80[0] = param_1;
  fStack_6c = param_1;
  maybe_Vu0_UnitMatrix(afStack_40);
  fVar8 = in_stack_00000000 * param_8;
  fStack_18 = (fVar8 * (-param_6 + param_7)) / (-param_8 + in_stack_00000000);
  fVar4 = -param_7;
  fStack_8 = (fVar4 * param_8 + param_6 * in_stack_00000000) / (-param_8 + in_stack_00000000);
  afStack_40[0] = param_2;
  fStack_2c = param_3;
  fStack_10 = param_4;
  fStack_c = param_5;
  sceVu0MulMatrix(param_9,afStack_40,afStack_80);
  maybe_Vu0_UnitMatrix(param_11);
  pfVar1 = (float *)param_11;
  *pfVar1 = param_8 / fVar5;
  pfVar1[5] = param_8 / fVar6;
  fVar7 = (in_stack_00000000 + param_8) / (in_stack_00000000 - param_8);
  fVar8 = (fVar8 * -2.0) / (in_stack_00000000 - param_8);
  pfVar1[10] = fVar7;
  pfVar1[0xe] = fVar8;
  pfVar1[0xb] = 1.0;
  pfVar1[0xf] = 0.0;
  maybe_Vu0_UnitMatrix(param_12);
  pfVar1 = (float *)param_12;
  *pfVar1 = (param_8 * 2.0) / (fVar2 + fVar2);
  pfVar1[5] = (param_8 * 2.0) / (fVar3 + fVar3);
  pfVar1[10] = fVar7;
  pfVar1[0xe] = fVar8;
  pfVar1[0xb] = 1.0;
  pfVar1[0xf] = 0.0;
  maybe_Vu0_UnitMatrix(param_13);
  pfVar1 = (float *)param_13;
  *pfVar1 = (fVar5 * param_1 * param_2) / param_8;
  pfVar1[5] = (fVar6 * param_1 * param_3) / param_8;
  pfVar1[10] = (fVar4 + param_6) / 2.0;
  pfVar1[0xe] = (param_7 + param_6) / 2.0;
  pfVar1[0xc] = param_4;
  pfVar1[0xd] = param_5;
  pfVar1[0xf] = 1.0;
  return;
}

// 0x00143b40  size 0x2cc
void Gfx_SetupRenderTarget(int param_1,undefined4 *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  
  param_2[0x18] = 1;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *param_2 = 1;
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined2 *)((int)param_2 + 6) = 0;
  *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 0x70);
  *(short *)((int)param_2 + 10) = (short)*(undefined4 *)(param_1 + 0x74);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(ulong *)(param_2 + 0x16) =
       (ulong)*(ushort *)((int)param_2 + 6) << 0x18 |
       (ulong)*(ushort *)(param_2 + 1) << 4 | 10 |
       (long)(int)((uint)*(ushort *)(param_2 + 1) + (uint)*(ushort *)(param_2 + 2) + -1) << 0xe |
       (long)(int)((uint)*(ushort *)((int)param_2 + 6) + (uint)*(ushort *)((int)param_2 + 10) + -1)
       << 0x22;
  *(ushort *)(param_2 + 6) =
       *(ushort *)(param_2 + 6) & 0xc000 | (ushort)(*(int *)(param_1 + 0x68) << 5) & 0x3fff;
  uVar2 = Tex_GetBufferWidth(*(undefined4 *)(param_1 + 100),*(undefined2 *)(param_2 + 2));
  *(ulong *)(param_2 + 6) = *(ulong *)(param_2 + 6) & 0xfffffffffff03fff | (uVar2 & 0x3f) << 0xe;
  *(ushort *)((int)param_2 + 0x1a) =
       *(ushort *)((int)param_2 + 0x1a) & 0xfc0f | (ushort)((*(uint *)(param_1 + 0x6c) & 0x3f) << 4)
  ;
  bVar1 = Bits_HighestSet(*(undefined2 *)(param_2 + 2));
  *(byte *)((int)param_2 + 0x1b) = *(byte *)((int)param_2 + 0x1b) & 0xc3 | (bVar1 & 0xf) << 2;
  uVar2 = Bits_HighestSet(*(undefined2 *)((int)param_2 + 10));
  *(ulong *)(param_2 + 6) = *(ulong *)(param_2 + 6) & 0xfffffffc3fffffff | (uVar2 & 0xf) << 0x1e;
  *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xfb | 4;
  *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xe7 | 8;
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe;
  if (param_3 == 0) {
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xdf | 0x20;
    *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfe3f | 0x40;
  }
  else {
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xdf;
    *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfe3f;
  }
  *(byte *)((int)param_2 + 0x22) = *(byte *)((int)param_2 + 0x22) & 0xe7;
  *(ushort *)(param_2 + 9) = *(ushort *)(param_2 + 9) & 0xf000;
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + 10) = 0;
    *(byte *)((int)param_2 + 0x29) = *(byte *)((int)param_2 + 0x29) & 0x7f;
    *(undefined1 *)(param_2 + 0xb) = 0x80;
  }
  return;
}

// 0x00143e10  size 0x53c
/* 9 callers */

void Gfx_SetupRenderTargetEx(int param_1,undefined4 *param_2,long param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  param_2[0x18] = 1;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *param_2 = 1;
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined2 *)((int)param_2 + 6) = 0;
  *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 0x70);
  *(short *)((int)param_2 + 10) = (short)*(undefined4 *)(param_1 + 0x74);
  iVar3 = (int)param_3;
  if (param_3 == 0) {
    param_2[3] = 0;
    param_2[4] = 0;
  }
  else {
    param_2[3] = *(undefined4 *)(iVar3 + 0xc);
    param_2[4] = *(undefined4 *)(iVar3 + 0x10);
  }
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(ulong *)(param_2 + 0x16) =
       (ulong)*(ushort *)((int)param_2 + 6) << 0x18 |
       (ulong)*(ushort *)(param_2 + 1) << 4 | 10 |
       (long)(int)((uint)*(ushort *)(param_2 + 1) + (uint)*(ushort *)(param_2 + 2) + -1) << 0xe |
       (long)(int)((uint)*(ushort *)((int)param_2 + 6) + (uint)*(ushort *)((int)param_2 + 10) + -1)
       << 0x22;
  *(ushort *)(param_2 + 6) =
       *(ushort *)(param_2 + 6) & 0xc000 | (ushort)(*(int *)(param_1 + 0x60) << 5) & 0x3fff;
  uVar2 = Tex_GetBufferWidth(*(undefined4 *)(param_1 + 100),*(undefined2 *)(param_2 + 2));
  *(ulong *)(param_2 + 6) = *(ulong *)(param_2 + 6) & 0xfffffffffff03fff | (uVar2 & 0x3f) << 0xe;
  *(ushort *)((int)param_2 + 0x1a) =
       *(ushort *)((int)param_2 + 0x1a) & 0xfc0f | (ushort)((*(uint *)(param_1 + 100) & 0x3f) << 4);
  bVar1 = Bits_HighestSet(*(undefined2 *)(param_2 + 2));
  *(byte *)((int)param_2 + 0x1b) = *(byte *)((int)param_2 + 0x1b) & 0xc3 | (bVar1 & 0xf) << 2;
  uVar2 = Bits_HighestSet(*(undefined2 *)((int)param_2 + 10));
  *(ulong *)(param_2 + 6) = *(ulong *)(param_2 + 6) & 0xfffffffc3fffffff | (uVar2 & 0xf) << 0x1e;
  if (param_3 == 0) {
    if (param_4 == 0) {
      *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xfb;
      *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xe7;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xdf | 0x20;
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfe3f | 0x40;
    }
    else {
      *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xfb | 4;
      *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xe7 | 8;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xdf;
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfe3f;
    }
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe;
    *(byte *)((int)param_2 + 0x22) = *(byte *)((int)param_2 + 0x22) & 0xe7;
    *(ushort *)(param_2 + 9) = *(ushort *)(param_2 + 9) & 0xf000;
  }
  else {
    *(ushort *)((int)param_2 + 0x1a) = *(ushort *)((int)param_2 + 0x1a) & 0xfc0f | 0x1b0;
    *(ulong *)(param_2 + 6) =
         *(ulong *)(param_2 + 6) & 0xfff8001fffffffff | *(ulong *)(iVar3 + 0x18) & 0x7ffe000000000;
    *(byte *)((int)param_2 + 0x1e) =
         *(byte *)((int)param_2 + 0x1e) & 0x87 |
         (byte)((int)(((ulong)*(byte *)(iVar3 + 0x1e) & 0x7f) >> 3) << 3);
    *(byte *)((int)param_2 + 0x1e) =
         *(byte *)((int)param_2 + 0x1e) & 0x7f | *(byte *)(iVar3 + 0x1e) & 0x80;
    *(byte *)((int)param_2 + 0x1f) =
         *(byte *)((int)param_2 + 0x1f) & 0xe0 | *(byte *)(iVar3 + 0x1f) & 0x1f;
    *(byte *)((int)param_2 + 0x1f) =
         *(byte *)((int)param_2 + 0x1f) & 0x1f | *(byte *)(iVar3 + 0x1f) & 0xe0;
    *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xfb | 4;
    *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xe7 | 8;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xdf;
    *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & 0xfe3f;
    *(byte *)((int)param_2 + 0x22) = *(byte *)((int)param_2 + 0x22) & 0xe7;
    *(ushort *)(param_2 + 9) = *(ushort *)(param_2 + 9) & 0xf000;
  }
  if (param_3 == 0) {
    if (param_4 == 0) {
      *(undefined1 *)(param_2 + 10) = 0x80;
      *(byte *)((int)param_2 + 0x29) = *(byte *)((int)param_2 + 0x29) & 0x7f;
      *(undefined1 *)(param_2 + 0xb) = 0x80;
    }
    else {
      *(undefined1 *)(param_2 + 10) = 0;
      *(byte *)((int)param_2 + 0x29) = *(byte *)((int)param_2 + 0x29) & 0x7f;
      *(undefined1 *)(param_2 + 0xb) = 0x80;
    }
  }
  else {
    *(undefined1 *)(param_2 + 10) = 0;
    *(byte *)((int)param_2 + 0x29) = *(byte *)((int)param_2 + 0x29) & 0x7f;
    *(undefined1 *)(param_2 + 0xb) = 0x80;
  }
  return;
}

