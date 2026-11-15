// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00190000 - 0x00194000
#include "ghidra_types.h"

// 0x00190060  size 0x98
undefined4 SndCh_ProgramChange(int param_1,uint param_2,byte param_3,uint param_4)

{
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (param_4 & 0x7f) << 0x10 | (param_3 | 0xb0) | 0x700);
  return 1;
}

// 0x00190100  size 0xac
undefined4 SndCh_ProgramChangePan(int param_1,uint param_2,byte param_3,short param_4)

{
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (((int)param_4 + 0x2000U & 0x3f80) >> 7) << 0x10 |
                   (uint)(param_3 | 0xe0) | ((int)param_4 + 0x2000U & 0x7f) << 8);
  return 1;
}

// 0x001901b0  size 0x98
undefined4 SndCh_SetVolumeCc(int param_1,uint param_2,byte param_3,uint param_4)

{
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (param_4 & 0x7f) << 0x10 | (param_3 | 0xb0) | 0xa00);
  return 1;
}

// 0x00190250  size 0x98
undefined4 SndCh_SetPanCc(int param_1,uint param_2,byte param_3,uint param_4)

{
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (param_4 & 0x7f) << 0x10 | (param_3 | 0xb0) | 0xb00);
  return 1;
}

// 0x001902f0  size 0x94
undefined4 SndCh_SetExpressionCc(int param_1,uint param_2,byte param_3,uint param_4)

{
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(byte *)(param_1 + 0xd) = param_3;
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0xc0) | (param_2 & 0x7f) << 8);
  Midi_SendMessage((*(undefined4 **)(param_1 + 4))[1],**(undefined4 **)(param_1 + 4),
                   (uint)(param_3 | 0x80) | (param_4 & 0x7f) << 8);
  return 1;
}

// 0x00190390  size 0x14c
undefined4
SndCh_PlayVoice(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5,
               ulong param_6,undefined8 param_7)

{
  int *piVar1;
  
  piVar1 = (int *)param_1;
  *(char *)(piVar1 + 3) = (char)param_2;
  *(char *)((int)piVar1 + 0xd) = (char)param_3;
  Midi_SendMessage(((undefined4 *)piVar1[1])[1],*(undefined4 *)piVar1[1],
                   param_3 & 0xff | 0xc0 | ((uint)param_2 & 0x7f) << 8);
  Midi_SendMessage(((undefined4 *)piVar1[1])[1],*(undefined4 *)piVar1[1],
                   (param_4 & 0x7f) << 0x10 | param_3 & 0xff | 0x90 | ((uint)param_5 & 0x7f) << 8);
  if ((param_6 & 0xff) != 0x40) {
    (**(code **)(*piVar1 + 0x30))(param_1,param_2,param_3,param_6,param_5);
  }
  if ((short)param_7 != 0) {
    (**(code **)(*piVar1 + 0x34))(param_1,param_2,param_3,param_7,param_5);
  }
  return 1;
}

// 0x001904e0  size 0x4c
long MidiChBase_dtor(long param_1,short param_2)

{
  if ((param_1 != 0) && (*(undefined4 *)param_1 = &DAT_0036e4c0, 0 < param_2)) {
    Mem_Free();
  }
  return param_1;
}

// 0x00190530  size 0x7fc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long SndMgr_UpdateStreams(undefined8 param_1)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  float fVar12;
  uint uVar13;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar11 = (int *)((int)param_1 + *(char *)((int)param_1 + 0x401) * 0x20);
  lVar10 = 1;
  cVar3 = Snd_StreamGetState(*piVar11);
  cVar4 = Snd_IsBusy(8);
  iVar5 = _g_SndMgr;
  uVar7 = Script_Nop();
  cVar1 = (char)piVar11[1];
  if (((cVar1 == '\x19') || (cVar1 == '\x18')) || (cVar1 == '\x17')) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(**(code **)(**(int **)(iVar5 + *piVar11 * 4) + 8))();
  }
  if (*(byte *)(piVar11 + 1) < 0x1a) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)(piVar11 + 1)) {
    case 1:
      if ((piVar6[5] == 0) || ((cVar3 != '\t' && (piVar6[4] != 0)))) {
        if (cVar3 == '\0') {
          lVar10 = Snd_StreamSetState(*piVar11,piVar11[2]);
        }
        else {
          lVar10 = 0;
        }
      }
      break;
    case 2:
      if (piVar6[5] == 1) {
        if (cVar3 == '\t') {
          lVar10 = Snd_StreamIsReady(*piVar11);
        }
        else {
          lVar10 = 0;
        }
      }
      break;
    case 3:
      if (cVar4 == '\0') {
        iVar5 = piVar11[4];
        if (iVar5 < 0x41) {
          iVar9 = iVar5;
        }
        else {
          iVar9 = 0x40;
        }
        iVar9 = piVar11[3] * iVar9;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 0x3f;
        }
        if (iVar5 < 0x40) {
          iVar5 = 0x40;
        }
        else {
          iVar5 = 0x7f - iVar5;
        }
        iVar5 = piVar11[3] * iVar5;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x3f;
        }
        lVar10 = Snd_QueueCmd4(*piVar11,iVar5 >> 6 & 0xffff,iVar9 >> 6 & 0xffff,1);
      }
      else {
        lVar10 = 0;
      }
      break;
    case 4:
      if (piVar6[5] == 1) {
        if (piVar6[3] != piVar11[5]) {
          if (cVar3 == '\t') {
            lVar10 = IopStrm_SetVolume(*piVar11);
          }
          else {
            lVar10 = 0;
          }
        }
      }
      else if (piVar6[4] != 0) {
        SndMgr_PostEvent(param_1,piVar11);
        cVar1 = (char)piVar11[1];
        goto LAB_00190a7c;
      }
      break;
    case 5:
      if (*piVar6 != piVar11[2]) {
        lVar10 = Composer_GetPartEntry(8);
        if ((lVar10 == 0) || (lVar10 = Composer_GetSelectedPart(8), lVar10 == 0)) {
          lVar10 = 0;
        }
        else {
          iVar9 = piVar11[2] * 0xc;
          lVar10 = Snd_PlayStreamEx(*(undefined4 *)(*(int *)(iVar5 + *piVar11 * 4) + 0x40),
                                    *(undefined4 *)(&DAT_0030c750 + iVar9),
                                    *(undefined4 *)(&DAT_0030c754 + iVar9),
                                    *(undefined4 *)(&DAT_0030c758 + iVar9),0);
        }
      }
      if (lVar10 == 1) {
        lVar10 = 0;
        *(undefined1 *)(piVar11 + 1) = 6;
      }
      break;
    case 6:
      if ((*(char *)(_s_SndMgrStreams + 0x200) == '\0') && (cVar4 == '\0')) {
        lVar10 = Snd_QueueCmd3(8,0,0);
      }
      else {
        lVar10 = 0;
      }
      if (lVar10 == 1) {
        lVar10 = 0;
        *(undefined1 *)(piVar11 + 1) = 7;
      }
      break;
    case 7:
    case 0xf:
      Snd_StopAllVoices(0xfff);
      lVar10 = 0;
      *(char *)(piVar11 + 1) = (char)piVar11[1] + '\x01';
      break;
    case 8:
    case 0x10:
      lVar10 = Snd_QueueCmd2(8,1);
      break;
    case 9:
    case 0x11:
      if (piVar6[5] == 1) {
        if (cVar4 == '\0') {
          lVar8 = Snd_QueueCmd1(8);
        }
        else {
          lVar8 = 0;
        }
        lVar10 = 0;
        if (lVar8 != 0) {
          lVar10 = 0;
          *(char *)(piVar11 + 1) = (char)piVar11[1] + '\x01';
        }
      }
      break;
    case 10:
    case 0x12:
      Snd_StopAllVoices(0);
      lVar10 = 1;
      break;
    case 0xb:
      lVar10 = Composer_GetPartEntry(8);
      if ((lVar10 == 0) || (lVar10 = Composer_GetSelectedPart(8), lVar10 == 0)) {
        lVar10 = 0;
      }
      else {
        iVar9 = piVar11[2] * 0xc;
        lVar10 = Snd_PlayStreamEx(*(undefined4 *)(*(int *)(iVar5 + *piVar11 * 4) + 0x40),
                                  *(undefined4 *)(&DAT_0030c750 + iVar9),
                                  *(undefined4 *)(&DAT_0030c754 + iVar9),
                                  *(undefined4 *)(&DAT_0030c758 + iVar9),0);
      }
      break;
    case 0xc:
      if (cVar4 == '\0') {
        fVar12 = ((float)(uint)piVar11[3] * 256.0) / 16383.0;
        if (fVar12 < 2.1474836e+09) {
          uVar13 = (uint)fVar12;
        }
        else {
          uVar13 = (int)(fVar12 - 2.1474836e+09) | 0x80000000;
        }
        lVar10 = Snd_QueueCmd2d(8,uVar13);
      }
      break;
    case 0xd:
      if ((*(char *)(_s_SndMgrStreams + 0x200) == '\0') && (cVar4 == '\0')) {
        lVar10 = Snd_QueueCmd3(8,0,0);
      }
      if (lVar10 == 1) {
        *(undefined1 *)(piVar11 + 1) = 0xf;
      }
      lVar10 = 0;
      break;
    case 0x13:
      lVar10 = SeqGen_FindPatternIndex(uVar7);
      if ((lVar10 != 0) && (lVar10 = SeqGen_GetPosition(uVar7,0xffffffffffffffff), lVar10 == 0)) {
        SeqGen_SelectSong(uVar7,piVar11[2]);
        *(undefined1 *)(piVar11 + 1) = 0x14;
        *piVar6 = piVar11[2];
      }
      lVar10 = 0;
      break;
    case 0x14:
      lVar10 = SeqGen_GetPosition(uVar7,0xffffffffffffffff);
      if (lVar10 == 0) {
        SeqGen_StartThread(uVar7);
        *(undefined1 *)(piVar11 + 1) = 0x15;
      }
      lVar10 = 0;
      break;
    case 0x15:
      lVar8 = SeqGen_StopThread(uVar7);
      if (lVar8 == 0) {
        lVar10 = 0;
      }
      else {
        lVar8 = SeqGen_IsReady(uVar7);
        if (lVar8 == 0) {
          piVar2 = *(int **)(iVar5 + *piVar11 * 4);
          (**(code **)(*piVar2 + 0x28))(piVar2,0xff);
        }
        else {
          SeqGen_GetLoopRangeC(uVar7,&uStack_4,&uStack_10);
          SeqGen_GetLoopRangeB(uVar7,&uStack_8,&uStack_14);
          SeqGen_GetLoopRangeA(uVar7,&uStack_c,&uStack_18);
          Snd_PlayStream(*(undefined4 *)(*(int *)(iVar5 + *piVar11 * 4) + 0x40),uStack_4,uStack_10,
                         uStack_8,uStack_14,uStack_c,uStack_18);
        }
      }
      break;
    case 0x16:
      if (cVar4 == '\0') {
        fVar12 = ((float)(uint)piVar11[3] * 256.0) / 16383.0;
        if (fVar12 < 2.1474836e+09) {
          uVar13 = (uint)fVar12;
        }
        else {
          uVar13 = (int)(fVar12 - 2.1474836e+09) | 0x80000000;
        }
        lVar10 = Snd_QueueCmd2d(8,uVar13);
      }
      break;
    case 0x17:
      lVar10 = Snd_QueueCmd2d(*piVar11,piVar11[3]);
      break;
    case 0x18:
      lVar10 = Snd_QueueCmd1c(*piVar11);
      break;
    case 0x19:
      lVar10 = Snd_QueueCmd1b(*piVar11);
    }
  }
  cVar1 = (char)piVar11[1];
LAB_00190a7c:
  if ((((cVar1 != '\x19') && (cVar1 != '\x18')) && (cVar1 != '\x17')) && (lVar10 == 1)) {
    *piVar6 = piVar11[2];
    piVar6[1] = piVar11[3];
    piVar6[2] = piVar11[4];
    piVar6[3] = piVar11[5];
    piVar6[4] = piVar11[6];
    piVar6[5] = piVar11[7];
  }
  return lVar10;
}

// 0x00190d30  size 0x1d4
/* 17 callers */

undefined4 SndMgr_PostEvent(int param_1,int *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 uStack_1c;
  
  lVar2 = (long)*(char *)(param_1 + 0x400);
  iVar8 = *param_2;
  uVar11 = param_2[1];
  iVar17 = param_2[2];
  iVar18 = param_2[3];
  iVar14 = param_2[4];
  iVar15 = param_2[5];
  iVar9 = param_2[6];
  iVar12 = param_2[7];
  if (lVar2 < 0x20) {
    *(undefined1 *)(param_1 + 0x400) = 0;
    lVar3 = 0;
    uStack_1c = (undefined1)uVar11;
    if (0 < lVar2) {
      uVar11 = uVar11 & 0xff;
      do {
        uVar5 = (int)*(char *)(param_1 + 0x401) + (int)lVar3;
        uVar4 = uVar5 & 0x1f;
        if (((int)uVar5 < 0) && (uVar4 != 0)) {
          uVar4 = uVar4 - 0x20;
        }
        piVar7 = (int *)(param_1 + uVar4 * 0x20);
        uVar5 = (int)*(char *)(param_1 + 0x401) + (int)*(char *)(param_1 + 0x400);
        uVar4 = uVar5 & 0x1f;
        if (((int)uVar5 < 0) && (uVar4 != 0)) {
          uVar4 = uVar4 - 0x20;
        }
        piVar6 = (int *)(param_1 + uVar4 * 0x20);
        *piVar6 = *piVar7;
        *(char *)(piVar6 + 1) = (char)piVar7[1];
        iVar16 = piVar7[3];
        iVar10 = piVar7[4];
        iVar13 = piVar7[5];
        piVar6[2] = piVar7[2];
        piVar6[3] = iVar16;
        piVar6[4] = iVar10;
        piVar6[5] = iVar13;
        iVar10 = piVar7[7];
        piVar6[6] = piVar7[6];
        piVar6[7] = iVar10;
        if (((*piVar6 == iVar8) && (*(byte *)(piVar6 + 1) == uVar11)) && (lVar3 != 0)) {
          if (uVar11 == 4) {
            *(char *)(param_1 + 0x400) = *(char *)(param_1 + 0x400) + '\x01';
          }
        }
        else {
          *(char *)(param_1 + 0x400) = *(char *)(param_1 + 0x400) + '\x01';
        }
        lVar3 = (long)((int)lVar3 + 1);
      } while (lVar3 < lVar2);
    }
    uVar4 = (int)*(char *)(param_1 + 0x401) + (int)*(char *)(param_1 + 0x400);
    uVar11 = uVar4 & 0x1f;
    if (((int)uVar4 < 0) && (uVar11 != 0)) {
      uVar11 = uVar11 - 0x20;
    }
    piVar7 = (int *)(param_1 + uVar11 * 0x20);
    uVar1 = 1;
    *piVar7 = iVar8;
    *(undefined1 *)(piVar7 + 1) = uStack_1c;
    piVar7[2] = iVar17;
    piVar7[3] = iVar18;
    piVar7[4] = iVar14;
    piVar7[5] = iVar15;
    piVar7[6] = iVar9;
    piVar7[7] = iVar12;
    *(char *)(param_1 + 0x400) = *(char *)(param_1 + 0x400) + '\x01';
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 0x00190f10  size 0xfc
void SndMgr_PauseAll(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x28) + 0x3c))();
  (**(code **)(**(int **)(param_1 + 0x34) + 0x3c))();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))();
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))();
  (**(code **)(**(int **)(param_1 + 0x30) + 0x3c))();
  (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))();
  (**(code **)(**(int **)(param_1 + 0x24) + 0x3c))();
  (**(code **)(**(int **)(param_1 + 8) + 0x7c))();
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))();
  (**(code **)(**(int **)(param_1 + 0x10) + 0x7c))();
  return;
}

// 0x00191010  size 0xfc
void SndMgr_ResumeAll(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x28) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0x34) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0x20) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0x30) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0x18) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0x24) + 0x38))();
  (**(code **)(**(int **)(param_1 + 8) + 0x78))();
  (**(code **)(**(int **)(param_1 + 0xc) + 0x78))();
  (**(code **)(**(int **)(param_1 + 0x10) + 0x78))();
  return;
}

// 0x00191110  size 0x22c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SndMgr_PlayEngine(int param_1,undefined4 param_2)

{
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_20 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 8);
  uStack_18 = 0xffffffff;
  uStack_10 = 0x3f;
  uStack_1c = 0x17;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  uStack_14 = param_2;
  SndMgr_PostEvent(_s_SndMgrVoices,&uStack_20);
  uStack_40 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8);
  uStack_38 = 0xffffffff;
  uStack_30 = 0x3f;
  uStack_3c = 0x17;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_34 = param_2;
  SndMgr_PostEvent(_s_SndMgrVoices,&uStack_40);
  uStack_60 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
  uStack_58 = 0xffffffff;
  uStack_50 = 0x3f;
  uStack_5c = 0x17;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_54 = param_2;
  SndMgr_PostEvent(_s_SndMgrVoices,&uStack_60);
  uStack_80 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 8);
  uStack_78 = 0xffffffff;
  uStack_70 = 0x3f;
  uStack_7c = 0x17;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_74 = param_2;
  SndMgr_PostEvent(_s_SndMgrVoices,&uStack_80);
  uStack_a0 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 8);
  uStack_98 = 0xffffffff;
  uStack_90 = 0x3f;
  uStack_9c = 0x17;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_94 = param_2;
  SndMgr_PostEvent(_s_SndMgrVoices,&uStack_a0);
  uStack_c0 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8);
  uStack_b8 = 0xffffffff;
  uStack_b0 = 0x3f;
  uStack_bc = 0x17;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b4 = param_2;
  SndMgr_PostEvent(_s_SndMgrVoices,&uStack_c0);
  uStack_e0 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 8);
  uStack_d8 = 0xffffffff;
  uStack_d0 = 0x3f;
  uStack_dc = 0x17;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d4 = param_2;
  SndMgr_PostEvent(_s_SndMgrVoices,&uStack_e0);
  uStack_100 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 8);
  uStack_f8 = 0xffffffff;
  uStack_f0 = 0x3f;
  uStack_fc = 0x17;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f4 = param_2;
  SndMgr_PostEvent(_s_SndMgrVoices,&uStack_100);
  return;
}

// 0x00191340  size 0xa4
void SndMgr_SetPitchAll(undefined4 *param_1,undefined2 param_2)

{
  (**(code **)(*(int *)param_1[2] + 0x20))((int *)param_1[2],param_2);
  (**(code **)(*(int *)param_1[3] + 0x20))((int *)param_1[3],param_2);
  (**(code **)(*(int *)param_1[4] + 0x20))((int *)param_1[4],param_2);
  (**(code **)(*(int *)*param_1 + 0x20))((int *)*param_1,param_2);
  (**(code **)(*(int *)param_1[1] + 0x20))((int *)param_1[1],param_2);
  return;
}

// 0x001913f0  size 0x10
undefined4 SndMgr_GetChannel(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + param_1 + 0x18);
}

// 0x00191400  size 0x10
undefined4 SndMgr_GetChannelB(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + param_1 + 0x18);
}

// 0x00191410  size 0x10
undefined4 SndMgr_GetSlot(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}

// 0x00191420  size 0x8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 31 callers */

undefined4 SndMgr_GetInstance(void)

{
  return _g_SndMgr;
}

// 0x00191430  size 0x584
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte SndMgr_IsIdle(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  
  if (_g_SndMgr == 0) {
    bVar4 = 1;
  }
  else {
    if (*(char *)(_s_SndMgrStreams + 0x200) == '\0') {
      if (*(int *)(_s_SndMgrStreams + 0x204) == 0) {
        iVar6 = 0;
        do {
          cVar3 = Snd_IsBusy(iVar6);
          if (cVar3 != '\0') {
            bVar1 = false;
            goto LAB_00191478;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 10);
        bVar1 = true;
      }
      else {
        bVar1 = false;
        *(int *)(_s_SndMgrStreams + 0x204) = *(int *)(_s_SndMgrStreams + 0x204) + -1;
      }
LAB_00191478:
      if (bVar1) {
        for (uVar5 = (ulong)*(char *)(_s_SndMgrStreams + 0x201);
            (long)uVar5 <
            (long)((int)*(char *)(_s_SndMgrStreams + 0x201) +
                  (int)*(char *)(_s_SndMgrStreams + 0x200)); uVar5 = (ulong)((int)uVar5 + 1)) {
          iVar6 = (int)(uVar5 & 0x1f);
          if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
            iVar6 = iVar6 + -0x20;
          }
          if (*(int *)(*(int *)(_g_SndMgr + 0x18) + 8) == *(int *)(_s_SndMgrStreams + iVar6 * 0x10))
          {
            bVar1 = true;
            goto LAB_001914ec;
          }
        }
        bVar1 = false;
LAB_001914ec:
        bVar2 = true;
        if (!bVar1) {
          cVar3 = Snd_IsBusy();
          if (cVar3 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        if (!bVar2) {
          for (uVar5 = (ulong)*(char *)(_s_SndMgrStreams + 0x201);
              (long)uVar5 <
              (long)((int)*(char *)(_s_SndMgrStreams + 0x201) +
                    (int)*(char *)(_s_SndMgrStreams + 0x200)); uVar5 = (ulong)((int)uVar5 + 1)) {
            iVar6 = (int)(uVar5 & 0x1f);
            if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
              iVar6 = iVar6 + -0x20;
            }
            if (*(int *)(*(int *)(_g_SndMgr + 0x1c) + 8) ==
                *(int *)(_s_SndMgrStreams + iVar6 * 0x10)) {
              bVar1 = true;
              goto LAB_0019156c;
            }
          }
          bVar1 = false;
LAB_0019156c:
          bVar2 = true;
          if (!bVar1) {
            cVar3 = Snd_IsBusy();
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
        if (!bVar2) {
          for (uVar5 = (ulong)*(char *)(_s_SndMgrStreams + 0x201);
              (long)uVar5 <
              (long)((int)*(char *)(_s_SndMgrStreams + 0x201) +
                    (int)*(char *)(_s_SndMgrStreams + 0x200)); uVar5 = (ulong)((int)uVar5 + 1)) {
            iVar6 = (int)(uVar5 & 0x1f);
            if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
              iVar6 = iVar6 + -0x20;
            }
            if (*(int *)(*(int *)(_g_SndMgr + 0x20) + 8) ==
                *(int *)(_s_SndMgrStreams + iVar6 * 0x10)) {
              bVar1 = true;
              goto LAB_001915ec;
            }
          }
          bVar1 = false;
LAB_001915ec:
          bVar2 = true;
          if (!bVar1) {
            cVar3 = Snd_IsBusy();
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
        if (!bVar2) {
          for (uVar5 = (ulong)*(char *)(_s_SndMgrStreams + 0x201);
              (long)uVar5 <
              (long)((int)*(char *)(_s_SndMgrStreams + 0x201) +
                    (int)*(char *)(_s_SndMgrStreams + 0x200)); uVar5 = (ulong)((int)uVar5 + 1)) {
            iVar6 = (int)(uVar5 & 0x1f);
            if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
              iVar6 = iVar6 + -0x20;
            }
            if (*(int *)(*(int *)(_g_SndMgr + 0x24) + 8) ==
                *(int *)(_s_SndMgrStreams + iVar6 * 0x10)) {
              bVar1 = true;
              goto LAB_0019166c;
            }
          }
          bVar1 = false;
LAB_0019166c:
          bVar2 = true;
          if (!bVar1) {
            cVar3 = Snd_IsBusy();
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
        if (!bVar2) {
          for (uVar5 = (ulong)*(char *)(_s_SndMgrStreams + 0x201);
              (long)uVar5 <
              (long)((int)*(char *)(_s_SndMgrStreams + 0x201) +
                    (int)*(char *)(_s_SndMgrStreams + 0x200)); uVar5 = (ulong)((int)uVar5 + 1)) {
            iVar6 = (int)(uVar5 & 0x1f);
            if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
              iVar6 = iVar6 + -0x20;
            }
            if (*(int *)(*(int *)(_g_SndMgr + 0x28) + 8) ==
                *(int *)(_s_SndMgrStreams + iVar6 * 0x10)) {
              bVar1 = true;
              goto LAB_001916ec;
            }
          }
          bVar1 = false;
LAB_001916ec:
          bVar2 = true;
          if (!bVar1) {
            cVar3 = Snd_IsBusy();
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
        if (!bVar2) {
          for (uVar5 = (ulong)*(char *)(_s_SndMgrStreams + 0x201);
              (long)uVar5 <
              (long)((int)*(char *)(_s_SndMgrStreams + 0x201) +
                    (int)*(char *)(_s_SndMgrStreams + 0x200)); uVar5 = (ulong)((int)uVar5 + 1)) {
            iVar6 = (int)(uVar5 & 0x1f);
            if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
              iVar6 = iVar6 + -0x20;
            }
            if (*(int *)(*(int *)(_g_SndMgr + 0x2c) + 8) ==
                *(int *)(_s_SndMgrStreams + iVar6 * 0x10)) {
              bVar1 = true;
              goto LAB_0019176c;
            }
          }
          bVar1 = false;
LAB_0019176c:
          bVar2 = true;
          if (!bVar1) {
            cVar3 = Snd_IsBusy();
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
        if (!bVar2) {
          for (uVar5 = (ulong)*(char *)(_s_SndMgrStreams + 0x201);
              (long)uVar5 <
              (long)((int)*(char *)(_s_SndMgrStreams + 0x201) +
                    (int)*(char *)(_s_SndMgrStreams + 0x200)); uVar5 = (ulong)((int)uVar5 + 1)) {
            iVar6 = (int)(uVar5 & 0x1f);
            if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
              iVar6 = iVar6 + -0x20;
            }
            if (*(int *)(*(int *)(_g_SndMgr + 0x30) + 8) ==
                *(int *)(_s_SndMgrStreams + iVar6 * 0x10)) {
              bVar1 = true;
              goto LAB_001917ec;
            }
          }
          bVar1 = false;
LAB_001917ec:
          bVar2 = true;
          if (!bVar1) {
            cVar3 = Snd_IsBusy();
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
        if (!bVar2) {
          for (uVar5 = (ulong)*(char *)(_s_SndMgrStreams + 0x201);
              (long)uVar5 <
              (long)((int)*(char *)(_s_SndMgrStreams + 0x201) +
                    (int)*(char *)(_s_SndMgrStreams + 0x200)); uVar5 = (ulong)((int)uVar5 + 1)) {
            iVar6 = (int)(uVar5 & 0x1f);
            if (((long)uVar5 < 0) && ((uVar5 & 0x1f) != 0)) {
              iVar6 = iVar6 + -0x20;
            }
            if (*(int *)(*(int *)(_g_SndMgr + 0x34) + 8) ==
                *(int *)(_s_SndMgrStreams + iVar6 * 0x10)) {
              bVar1 = true;
              goto LAB_0019186c;
            }
          }
          bVar1 = false;
LAB_0019186c:
          bVar2 = true;
          if (!bVar1) {
            cVar3 = Snd_IsBusy();
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
        return bVar2 ^ 1;
      }
    }
    bVar4 = 0;
  }
  return bVar4;
}

// 0x001919c0  size 0x2f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SndMgr_Update(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  
  iVar3 = _s_SndMgrStreams;
  iVar2 = _s_SndMgrVoices;
  if (*(int *)(_s_SndMgrStreams + 0x204) == 0) {
    iVar11 = 0;
    do {
      cVar4 = Snd_IsBusy(iVar11);
      if (cVar4 != '\0') {
        bVar1 = false;
        goto LAB_00191a00;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 10);
    bVar1 = true;
  }
  else {
    bVar1 = false;
    *(int *)(_s_SndMgrStreams + 0x204) = *(int *)(_s_SndMgrStreams + 0x204) + -1;
  }
LAB_00191a00:
  if ((bVar1) && (*(char *)(iVar3 + 0x200) != '\0')) {
    puVar5 = (undefined4 *)(iVar3 + *(char *)(iVar3 + 0x201) * 0x10);
    lVar8 = Snd_PlayStreamEx(*puVar5,puVar5[1],puVar5[2],puVar5[3],0);
    if (lVar8 != 0) {
      *(undefined4 *)(iVar3 + 0x204) = 0x10;
      uVar9 = (int)*(char *)(iVar3 + 0x201) + 1;
      uVar6 = uVar9 & 0x1f;
      cVar4 = (char)uVar6;
      if (((int)uVar9 < 0) && (uVar6 != 0)) {
        cVar4 = cVar4 + -0x20;
      }
      *(char *)(iVar3 + 0x201) = cVar4;
      *(char *)(iVar3 + 0x200) = *(char *)(iVar3 + 0x200) + -1;
    }
  }
  if ((*(char *)(iVar2 + 0x400) != '\0') && (lVar8 = SndMgr_UpdateStreams(iVar2), lVar8 != 0)) {
    uVar9 = (int)*(char *)(iVar2 + 0x401) + 1;
    uVar6 = uVar9 & 0x1f;
    cVar4 = (char)uVar6;
    if (((int)uVar9 < 0) && (uVar6 != 0)) {
      cVar4 = cVar4 + -0x20;
    }
    *(char *)(iVar2 + 0x401) = cVar4;
    *(char *)(iVar2 + 0x400) = *(char *)(iVar2 + 0x400) + -1;
  }
  if (*(char *)(iVar2 + 0x400) == '\0') {
    iVar11 = 0;
    puVar5 = param_1;
    do {
      puVar7 = (undefined1 *)(**(code **)(*(int *)*puVar5 + 8))();
      cVar4 = Snd_StreamGetState(iVar11);
      if ((cVar4 == '\0') && (*(int *)(puVar7 + 0x10) != 0)) {
        (**(code **)(*(int *)*puVar5 + 0x10))
                  ((int *)*puVar5,*puVar7,*(undefined2 *)(puVar7 + 4),puVar7[8]);
      }
      iVar11 = iVar11 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar11 < 2);
  }
  iVar11 = (**(code **)(*(int *)*param_1 + 8))();
  if ((((*(int *)(iVar11 + 0x14) == 0) &&
       (iVar11 = (**(code **)(*(int *)param_1[1] + 8))(), *(int *)(iVar11 + 0x14) == 0)) &&
      (iVar11 = (**(code **)(*(int *)param_1[2] + 8))(), *(int *)(iVar11 + 0x14) == 0)) &&
     ((iVar11 = (**(code **)(*(int *)param_1[3] + 8))(), *(int *)(iVar11 + 0x14) == 0 &&
      (iVar11 = (**(code **)(*(int *)param_1[4] + 8))(), *(int *)(iVar11 + 0x14) == 0)))) {
    _g_CarSndShared1 = _g_CarSndShared1 & 0xffffffef;
  }
  else {
    _g_CarSndShared1 = _g_CarSndShared1 | 0x10;
  }
  uVar10 = 0;
  if ((*(char *)(iVar3 + 0x200) == '\0') && (*(char *)(iVar2 + 0x400) == '\0')) {
    uVar10 = 1;
  }
  return uVar10;
}

// 0x00191cc0  size 0x104
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SndMgr_PauseGlobal(void)

{
  int iVar1;
  
  iVar1 = _g_SndMgr;
  if (_g_SndMgr != 0) {
    (**(code **)(**(int **)(_g_SndMgr + 0x28) + 0x3c))();
    (**(code **)(**(int **)(iVar1 + 0x34) + 0x3c))();
    (**(code **)(**(int **)(iVar1 + 0x1c) + 0x3c))();
    (**(code **)(**(int **)(iVar1 + 0x20) + 0x3c))();
    (**(code **)(**(int **)(iVar1 + 0x2c) + 0x3c))();
    (**(code **)(**(int **)(iVar1 + 0x30) + 0x3c))();
    (**(code **)(**(int **)(iVar1 + 0x18) + 0x3c))();
    (**(code **)(**(int **)(iVar1 + 0x24) + 0x3c))();
    (**(code **)(**(int **)(iVar1 + 8) + 0x7c))();
    (**(code **)(**(int **)(iVar1 + 0xc) + 0x7c))();
    (**(code **)(**(int **)(iVar1 + 0x10) + 0x7c))();
  }
  return;
}

// 0x00191dd0  size 0x274
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SndMgr_Shutdown(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((undefined4 *)*_g_SndMgr != (undefined4 *)0x0) {
    *(undefined4 *)*_g_SndMgr = &DAT_0036e440;
  }
  Mem_Free();
  if ((undefined4 *)_g_SndMgr[1] != (undefined4 *)0x0) {
    *(undefined4 *)_g_SndMgr[1] = &DAT_0036e440;
  }
  Mem_Free();
  if ((undefined4 *)_g_SndMgr[2] != (undefined4 *)0x0) {
    *(undefined4 *)_g_SndMgr[2] = &DAT_0036e440;
  }
  Mem_Free();
  if ((undefined4 *)_g_SndMgr[3] != (undefined4 *)0x0) {
    *(undefined4 *)_g_SndMgr[3] = &DAT_0036e440;
  }
  Mem_Free();
  if ((undefined4 *)_g_SndMgr[4] != (undefined4 *)0x0) {
    *(undefined4 *)_g_SndMgr[4] = &DAT_0036e440;
  }
  Mem_Free();
  if ((undefined4 *)_g_SndMgr[5] != (undefined4 *)0x0) {
    *(undefined4 *)_g_SndMgr[5] = &DAT_0036e440;
  }
  Mem_Free();
  piVar1 = (int *)_g_SndMgr[6];
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,0xffffffffffffffff);
    Mem_Free(uVar2);
  }
  piVar1 = (int *)_g_SndMgr[7];
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,0xffffffffffffffff);
    Mem_Free(uVar2);
  }
  piVar1 = (int *)_g_SndMgr[8];
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,0xffffffffffffffff);
    Mem_Free(uVar2);
  }
  piVar1 = (int *)_g_SndMgr[9];
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,0xffffffffffffffff);
    Mem_Free(uVar2);
  }
  piVar1 = (int *)_g_SndMgr[10];
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,0xffffffffffffffff);
    Mem_Free(uVar2);
  }
  piVar1 = (int *)_g_SndMgr[0xb];
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,0xffffffffffffffff);
    Mem_Free(uVar2);
  }
  piVar1 = (int *)_g_SndMgr[0xc];
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,0xffffffffffffffff);
    Mem_Free(uVar2);
  }
  piVar1 = (int *)_g_SndMgr[0xd];
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,0xffffffffffffffff);
    Mem_Free(uVar2);
  }
  if (_s_SndMgrVoices != 0) {
    Mem_Free();
    _s_SndMgrVoices = 0;
  }
  if (_s_SndMgrStreams != 0) {
    Mem_Free();
    _s_SndMgrStreams = 0;
  }
  if (_g_SndMgr != (undefined4 *)0x0) {
    Mem_Free();
    _g_SndMgr = (undefined4 *)0x0;
  }
  return;
}

// 0x00192050  size 0x718
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SndMgr_Init(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = Mem_Alloc16(0x40,param_1);
  _g_SndMgr = (undefined4 *)uVar2;
  Mem_Set16(uVar2,0,0x40);
  uVar2 = Mem_Alloc16(0x404,param_1);
  _s_SndMgrVoices = (undefined4)uVar2;
  Mem_Set16(uVar2,0,0x404);
  uVar2 = Mem_Alloc16(0x208,param_1);
  _s_SndMgrStreams = (undefined4)uVar2;
  Mem_Set16(uVar2,0,0x208);
  lVar3 = Mem_Alloc16(0x38,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e440;
    puVar1[1] = 0;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0x3fff;
    puVar1[4] = 0x3f;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0x3fff;
    puVar1[10] = 0x3f;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_0036e400;
  }
  *_g_SndMgr = puVar1;
  lVar3 = Mem_Alloc16(0x38,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e440;
    puVar1[1] = 1;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0x3fff;
    puVar1[4] = 0x3f;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0x3fff;
    puVar1[10] = 0x3f;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_0036e400;
  }
  _g_SndMgr[1] = puVar1;
  lVar3 = Mem_Alloc16(0x48,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e440;
    puVar1[1] = 2;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0x3fff;
    puVar1[4] = 0x3f;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0x3fff;
    puVar1[10] = 0x3f;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = &DAT_0036e4c0;
    puVar1[0xf] = _g_IopSe + 0x2c0;
    puVar1[0x10] = 8;
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *puVar1 = &DAT_0036e380;
    puVar1[0xe] = &DAT_0036e3b4;
  }
  _g_SndMgr[2] = puVar1;
  lVar3 = Mem_Alloc16(0x48,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e440;
    puVar1[1] = 3;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0x3fff;
    puVar1[4] = 0x3f;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0x3fff;
    puVar1[10] = 0x3f;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = &DAT_0036e4c0;
    puVar1[0xf] = _g_IopSe + 0x2c0;
    puVar1[0x10] = 8;
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *puVar1 = &DAT_0036e380;
    puVar1[0xe] = &DAT_0036e3b4;
  }
  _g_SndMgr[3] = puVar1;
  lVar3 = Mem_Alloc16(0x48,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e440;
    puVar1[1] = 4;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0x3fff;
    puVar1[4] = 0x3f;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0x3fff;
    puVar1[10] = 0x3f;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = &DAT_0036e4c0;
    puVar1[0xf] = _g_IopSe + 0x2c0;
    puVar1[0x10] = 8;
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *puVar1 = &DAT_0036e380;
    puVar1[0xe] = &DAT_0036e3b4;
    *puVar1 = &DAT_0036e300;
    puVar1[0xe] = &DAT_0036e334;
  }
  _g_SndMgr[4] = puVar1;
  lVar3 = Mem_Alloc16(0x38,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e440;
    puVar1[1] = 5;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0x3fff;
    puVar1[4] = 0x3f;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0x3fff;
    puVar1[10] = 0x3f;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
  }
  _g_SndMgr[5] = puVar1;
  lVar3 = Mem_Alloc16(0x10,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e4c0;
    puVar1[1] = _g_IopSe + 0x40;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  _g_SndMgr[6] = puVar1;
  lVar3 = Mem_Alloc16(0x14,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e4c0;
    puVar1[1] = _g_IopSe + 0x90;
    puVar1[2] = 1;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = &DAT_0036e480;
    puVar1[4] = &DAT_0036e7a0;
  }
  _g_SndMgr[7] = puVar1;
  lVar3 = Mem_Alloc16(0x14,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e4c0;
    puVar1[1] = _g_IopSe + 0xe0;
    puVar1[2] = 2;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = &DAT_0036e480;
    puVar1[4] = &DAT_0036e7a0;
  }
  _g_SndMgr[8] = puVar1;
  lVar3 = Mem_Alloc16(0x14,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e4c0;
    puVar1[1] = _g_IopSe + 0x130;
    puVar1[2] = 3;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = &DAT_0036e480;
    puVar1[4] = &DAT_0036e7a0;
  }
  _g_SndMgr[9] = puVar1;
  lVar3 = Mem_Alloc16(0x14,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e4c0;
    puVar1[1] = _g_IopSe + 0x180;
    puVar1[2] = 4;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = &DAT_0036e480;
    puVar1[4] = &DAT_0036e7a0;
  }
  _g_SndMgr[10] = puVar1;
  lVar3 = Mem_Alloc16(0x14,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e4c0;
    puVar1[1] = _g_IopSe + 0x1d0;
    puVar1[2] = 5;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = &DAT_0036e480;
    puVar1[4] = &DAT_0036e7a0;
  }
  _g_SndMgr[0xb] = puVar1;
  lVar3 = Mem_Alloc16(0x14,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e4c0;
    puVar1[1] = _g_IopSe + 0x220;
    puVar1[2] = 6;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = &DAT_0036e480;
    puVar1[4] = &DAT_0036e7a0;
  }
  _g_SndMgr[0xc] = puVar1;
  lVar3 = Mem_Alloc16(0x14,param_1);
  puVar1 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    *puVar1 = &DAT_0036e4c0;
    puVar1[1] = _g_IopSe + 0x270;
    puVar1[2] = 7;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = &DAT_0036e480;
    puVar1[4] = &DAT_0036e7a0;
  }
  _g_SndMgr[0xd] = puVar1;
  puVar1 = _g_SndMgr;
  _g_CarSndShared1 = _g_CarSndShared1 & 1;
  (**(code **)(*(int *)_g_SndMgr[2] + 0x20))((int *)_g_SndMgr[2],0x3fff);
  (**(code **)(*(int *)puVar1[3] + 0x20))((int *)puVar1[3],0x3fff);
  (**(code **)(*(int *)puVar1[4] + 0x20))((int *)puVar1[4],0x3fff);
  (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,0x3fff);
  (**(code **)(*(int *)puVar1[1] + 0x20))((int *)puVar1[1],0x3fff);
  return;
}

// 0x00192770  size 0x90
/* x * 384 / 15 */

uint Snd_RpmToPitch(ulong param_1)

{
  float fVar1;
  uint uVar2;
  
  if ((long)param_1 < 0) {
    fVar1 = (float)(param_1 & 0xffffffff);
  }
  else {
    fVar1 = (float)(int)param_1;
  }
  fVar1 = (fVar1 * 384.0) / 15.0;
  if (fVar1 < 2.1474836e+09) {
    uVar2 = (uint)fVar1;
  }
  else {
    uVar2 = (int)(fVar1 - 2.1474836e+09) | 0x80000000;
  }
  return uVar2;
}

// 0x00192800  size 0x20
/* x * 0x3fff / 15 */

uint Snd_VolumeToMidi(int param_1)

{
  return (uint)(param_1 * 0x3fff) / 0xf;
}

// 0x00192820  size 0x8
void SndStream_dtorThunk(int param_1)

{
  SndStream_dtor(param_1 + -0x38);
  return;
}

// 0x00192830  size 0x8
void SndCh_FadeOutThunk(int param_1)

{
  SndCh_FadeOut(param_1 + -0x38);
  return;
}

// 0x00192840  size 0x8
void SndCh_FadeInThunk(int param_1)

{
  SndCh_FadeIn(param_1 + -0x38);
  return;
}

// 0x00192850  size 0x8
void SndCh_dtorThunk(int param_1)

{
  SndCh_dtor(param_1 + -0x38);
  return;
}

// 0x00192860  size 0x30
undefined4 maybe_SndCh_GetHandleIfReady(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = Loading_IsActive();
  if (lVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
  }
  return uVar1;
}

// 0x00192890  size 0x7dc
/* WARNING: Removing unreachable block (ram,0x00192b38) */
/* WARNING: Removing unreachable block (ram,0x00192bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarSnd_Update3d(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  float *pfVar5;
  RaceEntrySetup *pRVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 auStack_10 [16];
  
  piVar13 = (int *)param_1;
  if (*piVar13 == 0) {
    return;
  }
  iVar4 = RaceCar_GetIndex();
  if ((*(uint *)(iVar4 + 4) & 0x100) != 0) {
    return;
  }
  (**(code **)(*(int *)(piVar13[3] + 8) + 0x10))();
  s_CarSnd_Update3d_1 = CarSnd_ComputeListener(param_1,param_2);
  fVar15 = (float)Cam_ComputeFov(param_2,*piVar13);
  _s_CarSnd_Update3d_3 = (int)(fVar15 * 8192.0 - 8192.0);
  if (_s_CarSnd_Update3d_3 < -0x2000) {
    _s_CarSnd_Update3d_3 = -0x2000;
  }
  else if (0x1fff < _s_CarSnd_Update3d_3) {
    _s_CarSnd_Update3d_3 = 0x1fff;
  }
  iVar7 = (int)param_2;
  sceVu0SubVector(auStack_10,iVar7 + 0x430,iVar7 + 0x420);
  pfVar5 = (float *)PhysBody_GetWorldMatrix(*(undefined4 *)(*piVar13 + 0x154));
  fStack_20 = *pfVar5 - *(float *)(iVar7 + 0x420);
  iVar4 = PhysBody_GetWorldMatrix(*(undefined4 *)(*piVar13 + 0x154));
  fStack_1c = *(float *)(iVar4 + 4) - *(float *)(iVar7 + 0x424);
  iVar4 = PhysBody_GetWorldMatrix(*(undefined4 *)(*piVar13 + 0x154));
  fStack_18 = *(float *)(iVar4 + 8) - *(float *)(iVar7 + 0x428);
  sceVu0Normalize(&fStack_20,&fStack_20);
  sceVu0Normalize(auStack_10,auStack_10);
  sceVu0InnerProduct(&fStack_20,auStack_10);
  sceVu0OuterProduct(auStack_30,&fStack_20,auStack_10);
  sceVu0CopyVector(auStack_40,iVar7 + 0x440);
  sceVu0Normalize(auStack_40,auStack_40);
  fVar15 = (float)sceVu0InnerProduct(iVar7 + 0x440,auStack_30);
  sVar3 = (short)(int)(fVar15 * 64.0 + 64.0);
  if (0x7f < sVar3) {
    sVar3 = 0x7f;
  }
  s_CarSnd_Update3d_2 = (char)sVar3 + -0x40;
  lVar8 = Loading_IsActive();
  if ((lVar8 != 0) && (_s_RaceIsReplayMode == 0)) {
    pRVar6 = GameState_Elem_f0_xcc(0);
    uVar9 = CarRec_GetPartData(pRVar6,0xb);
    fVar15 = 1.0;
    if (uVar9 < 6) {
                    /* WARNING: Switch is manually overridden */
      switch((int)uVar9) {
      case 0:
        fVar15 = 0.8;
        break;
      case 1:
        fVar15 = 0.9;
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        fVar15 = 1.1;
        break;
      case 5:
        fVar15 = 1.2;
      }
    }
    fVar15 = (float)s_CarSnd_Update3d_1 * fVar15;
    if (2.1474836e+09 <= fVar15) {
      fVar15 = fVar15 - 2.1474836e+09;
    }
    s_CarSnd_Update3d_1 = (byte)(int)fVar15;
  }
  if ((float)s_CarSnd_Update3d_1 == 0.0) {
    (**(code **)(*(int *)(piVar13[3] + 8) + 0xc))();
    (**(code **)(*(int *)piVar13[9] + 8))((int *)piVar13[9],(char)piVar13[0xc]);
    piVar13[10] = piVar13[10] & 0xfffffffd;
    (**(code **)(*(int *)piVar13[0xf] + 8))((int *)piVar13[0xf],(char)piVar13[0x16]);
    piVar13[0x10] = piVar13[0x10] & 0xfffffffd;
    (**(code **)(*(int *)piVar13[4] + 8))((int *)piVar13[4],7);
    piVar13[5] = piVar13[5] & 0xfffffffd;
  }
  else {
    CarSnd_UpdateTireSqueal(piVar13 + 4,*piVar13);
    iVar4 = *piVar13;
    if ((piVar13[0x18] & 1U) != 0) {
      iVar7 = RaceCar_GetTracker(iVar4);
      uVar10 = PhysBody_FindShapeWithFlags(*(undefined4 *)(iVar4 + 0x158),0xffffffffffffffff);
      if ((*(uint *)(iVar7 + 0x60) & 0x40) != 0) {
        fVar16 = (float)PhysWorld_GetFirstBody(uVar10);
        fVar15 = 1.0;
        if (fVar16 / DAT_0036e7d8 <= 1.0) {
          fVar15 = fVar16 / DAT_0036e7d8;
        }
        piVar14 = (int *)piVar13[0x17];
        fVar17 = DAT_0036e7e8 + 0.0;
        fVar16 = 127.0 - DAT_0036e7e8;
        uVar10 = (**(code **)(*piVar14 + 0x14))(piVar14);
        lVar8 = SndMgr_IsChannelBusy(uVar10);
        if (lVar8 == 0) {
          uVar10 = (**(code **)(*piVar14 + 0x14))(piVar14);
          uVar11 = (**(code **)(*piVar14 + 0xc))(piVar14,6);
          uVar12 = (**(code **)(*piVar14 + 0x10))(piVar14);
          (**(code **)(*(int *)uVar10 + 0x24))(uVar10,6,uVar11,0x7f,uVar12,0x40,0);
          uVar10 = (**(code **)(*piVar14 + 0x14))(piVar14);
          lVar8 = SndMgr_IsChannelBusy(uVar10);
          if (lVar8 == 0) {
            uVar10 = (**(code **)(*piVar14 + 0x14))(piVar14);
            uVar1 = (**(code **)(*piVar14 + 0xc))(piVar14,6);
            uVar2 = (**(code **)(*piVar14 + 0x10))(piVar14);
            piVar14 = (int *)uVar10;
            (**(code **)(*piVar14 + 0x2c))
                      (uVar10,6,uVar1,(ushort)(int)(fVar16 * fVar15 + fVar17) & 0xff,uVar2);
            (**(code **)(*piVar14 + 0x30))(uVar10,6,uVar1,0x40,uVar2);
            (**(code **)(*piVar14 + 0x34))(uVar10,6,uVar1,0x2000,uVar2);
          }
        }
      }
    }
    CarSnd_UpdateWind(piVar13[3],*piVar13);
    CarSnd_UpdateTurbo(piVar13 + 9,*piVar13);
    CarSnd_UpdateEngine(piVar13 + 0xf,*piVar13);
    if (((piVar13[0x1a] & 1U) != 0) && (*(char *)(*piVar13 + 0x8e8) != '\0')) {
      fVar15 = (float)fabsf(*(undefined4 *)(*piVar13 + 0x8ec));
      piVar14 = (int *)piVar13[0x19];
      uVar10 = (**(code **)(*piVar14 + 0x14))(piVar14);
      lVar8 = SndMgr_IsChannelBusy(uVar10);
      if (lVar8 == 0) {
        uVar10 = (**(code **)(*piVar14 + 0x14))(piVar14);
        uVar11 = (**(code **)(*piVar14 + 0xc))(piVar14,2);
        uVar12 = (**(code **)(*piVar14 + 0x10))(piVar14);
        (**(code **)(*(int *)uVar10 + 0x24))(uVar10,2,uVar11,0x7f,uVar12,0x40,0);
        uVar10 = (**(code **)(*piVar14 + 0x14))(piVar14);
        lVar8 = SndMgr_IsChannelBusy(uVar10);
        if (lVar8 == 0) {
          uVar10 = (**(code **)(*piVar14 + 0x14))(piVar14);
          uVar1 = (**(code **)(*piVar14 + 0xc))(piVar14,2);
          uVar2 = (**(code **)(*piVar14 + 0x10))(piVar14);
          piVar14 = (int *)uVar10;
          (**(code **)(*piVar14 + 0x2c))
                    (uVar10,2,uVar1,(ushort)(int)(fVar15 * 127.0 * 2.0 + 64.0) & 0xff,uVar2);
          (**(code **)(*piVar14 + 0x30))(uVar10,2,uVar1,0x40,uVar2);
          (**(code **)(*piVar14 + 0x34))(uVar10,2,uVar1,0x2000,uVar2);
        }
      }
    }
    CarSnd_UpdateGearShift(piVar13 + 0x1b,*piVar13);
  }
  return;
}

// 0x00193070  size 0xc8
void CarSnd_StopVoice(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x24) + 8))
            (*(int **)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffd;
  (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0x3c) + 8))
            (*(int **)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0x58));
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffffd;
  (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int **)(param_1 + 0x10),7);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffd;
  (**(code **)(**(int **)(param_1 + 0x6c) + 8))(*(int **)(param_1 + 0x6c),0);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffd;
  return;
}

// 0x00193140  size 0x10c
void CarSnd_Attach(undefined4 *param_1,long param_2)

{
  RaceEntrySetup *pRVar1;
  undefined8 uVar2;
  
  *param_1 = (int)param_2;
  if (param_2 != 0) {
    param_1[0x16] = 1;
    param_1[0xc] = 0;
    *(uint *)(param_1[3] + 4) = *(uint *)(param_1[3] + 4) | 1;
    param_1[5] = param_1[5] | 1;
    param_1[10] = param_1[10] | 1;
    param_1[0x10] = param_1[0x10] | 1;
    param_1[0x18] = param_1[0x18] & 0xfffffffe;
    param_1[0x1a] = param_1[0x1a] | 1;
    if (*(char *)(param_1[1] + 4) == '\0') {
      param_1[0x1c] = param_1[0x1c] | 1;
      pRVar1 = GameState_Elem_f0_xcc(0);
      CarRec_GetPartData(pRVar1,1);
      uVar2 = SndMgr_GetInstance();
      uVar2 = SndMgr_GetChannelB(uVar2,3);
      if (param_1[0x1d] != 2) {
        param_1[0x1d] = 2;
        SndMgr_PlayStreamSlot(uVar2,0x1c1c,0x1c65,0,0);
      }
    }
    else {
      param_1[0x1c] = param_1[0x1c] & 0xfffffffe;
    }
  }
  return;
}

// 0x00193250  size 0x1e0
void CarSnd_CreateVoice(int param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = SndMgr_GetInstance();
  lVar3 = Mem_Alloc16(8,param_3);
  if (lVar3 != 0) {
    *(undefined4 *)lVar3 = &DAT_0036e560;
  }
  *(undefined4 **)(param_1 + 4) = (undefined4 *)lVar3;
  lVar3 = Mem_Alloc16(8,param_3);
  if (lVar3 != 0) {
    *(undefined4 *)lVar3 = &DAT_0036e540;
  }
  *(undefined4 **)(param_1 + 8) = (undefined4 *)lVar3;
  if (param_2 == 0) {
    lVar3 = Mem_Alloc16(0x58,param_3);
    iVar4 = (int)lVar3;
    if (lVar3 != 0) {
      *(undefined **)(iVar4 + 8) = &DAT_0036e500;
    }
    uVar1 = SndMgr_GetChannelB(uVar2,7);
    *(undefined4 *)(iVar4 + 0x54) = uVar1;
    *(int *)(param_1 + 0xc) = iVar4;
  }
  else {
    lVar3 = Mem_Alloc16(0x54,param_3);
    if (lVar3 != 0) {
      *(undefined **)((int)lVar3 + 8) = &DAT_0036e520;
    }
    *(int *)(param_1 + 0xc) = (int)lVar3;
  }
  *(char *)(*(int *)(param_1 + 4) + 4) = (char)param_2;
  *(char *)(*(int *)(param_1 + 8) + 4) = (char)param_2;
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar4 + 0x40) = 6;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined1 *)(iVar4 + 0x25) = 0;
  *(undefined1 *)(iVar4 + 0x14) = 1;
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 1;
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 0x10;
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 0x20;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 5;
  **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 8);
  uVar1 = SndMgr_GetChannelB(uVar2,(int)param_2 + 4);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = uVar1;
  return;
}

// 0x00193430  size 0x168
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarSnd_UpdateAll(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (_g_RaceSnd == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = _g_RaceSnd + iVar2;
    }
    if (iVar1 != 0) {
      if (_g_RaceSnd == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = _g_RaceSnd + iVar2;
      }
      (**(code **)(**(int **)(iVar1 + 0x24) + 8))
                (*(int **)(iVar1 + 0x24),*(undefined1 *)(iVar1 + 0x30));
      *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 0xfffffffd;
      (**(code **)(*(int *)(*(int *)(iVar1 + 0xc) + 8) + 0xc))();
      (**(code **)(**(int **)(iVar1 + 0x3c) + 8))
                (*(int **)(iVar1 + 0x3c),*(undefined1 *)(iVar1 + 0x58));
      *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xfffffffd;
      (**(code **)(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10),7);
      *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xfffffffd;
      (**(code **)(**(int **)(iVar1 + 0x6c) + 8))(*(int **)(iVar1 + 0x6c),0);
      *(uint *)(iVar1 + 0x70) = *(uint *)(iVar1 + 0x70) & 0xfffffffd;
      *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 0xfffffffe;
      *(uint *)(*(int *)(iVar1 + 0xc) + 4) = *(uint *)(*(int *)(iVar1 + 0xc) + 4) & 0xfffffffe;
      *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xfffffffe;
      *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xfffffffe;
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xfffffffe;
      *(uint *)(iVar1 + 0x68) = *(uint *)(iVar1 + 0x68) & 0xfffffffe;
      *(uint *)(iVar1 + 0x70) = *(uint *)(iVar1 + 0x70) & 0xfffffffe;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x80;
  } while (iVar3 < 3);
  return;
}

// 0x001935a0  size 0x10c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarSnd_Shutdown(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = SndMgr_GetInstance();
  iVar4 = 0;
  iVar3 = 0;
  do {
    if (_g_RaceSnd == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = _g_RaceSnd + iVar3;
    }
    Mem_Free(*(undefined4 *)(iVar5 + 0xc));
    Mem_Free(*(undefined4 *)(iVar5 + 4));
    Mem_Free(*(undefined4 *)(iVar5 + 8));
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x80;
  } while (iVar4 < 3);
  uVar2 = SndMgr_GetChannel(uVar1,1);
  SndCh_SetMidiPort(uVar2,0);
  uVar2 = SndMgr_GetChannel(uVar1,2);
  SndCh_SetMidiPort(uVar2,0);
  uVar2 = SndMgr_GetChannel(uVar1,4);
  SndCh_SetMidiPort(uVar2,0);
  uVar2 = SndMgr_GetChannel(uVar1,5);
  SndCh_SetMidiPort(uVar2,0);
  uVar1 = SndMgr_GetChannel(uVar1,6);
  SndCh_SetMidiPort(uVar1,0);
  if (_g_RaceSnd != 0) {
    Mem_Free();
    _g_RaceSnd = 0;
  }
  return;
}

// 0x001936b0  size 0x134
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarSnd_Init(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = SndMgr_GetInstance();
  uVar2 = Mem_Alloc16(0x180,param_1);
  _g_RaceSnd = (int)uVar2;
  Mem_Set16(uVar2,0,0x180);
  uVar2 = SndMgr_GetChannel(uVar1,1);
  SndCh_SetMidiPort(uVar2,0x36f270);
  uVar2 = SndMgr_GetChannel(uVar1,2);
  SndCh_SetMidiPort(uVar2,0x36f270);
  uVar2 = SndMgr_GetChannel(uVar1,3);
  SndCh_SetMidiPort(uVar2,0x36f270);
  uVar2 = SndMgr_GetChannel(uVar1,4);
  SndCh_SetMidiPort(uVar2,0x36f270);
  uVar2 = SndMgr_GetChannel(uVar1,5);
  SndCh_SetMidiPort(uVar2,0x36f270);
  uVar2 = SndMgr_GetChannel(uVar1,6);
  SndCh_SetMidiPort(uVar2,0x36f270);
  uVar1 = SndMgr_GetChannel(uVar1,7);
  SndCh_SetMidiPort(uVar1,0x36f270);
  iVar5 = 0;
  iVar4 = 0;
  do {
    if (_g_RaceSnd == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = _g_RaceSnd + iVar4;
    }
    CarSnd_CreateVoice(iVar3,iVar5,param_1);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x80;
  } while (iVar5 < 3);
  return;
}

// 0x001937f0  size 0x1f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint CarSnd_ComputeListener(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)PhysBody_GetWorldMatrix(*(undefined4 *)(*param_1 + 0x154));
  uStack_10 = *puVar1;
  iVar2 = PhysBody_GetWorldMatrix(*(undefined4 *)(*param_1 + 0x154));
  uStack_c = *(undefined4 *)(iVar2 + 4);
  iVar2 = PhysBody_GetWorldMatrix(*(undefined4 *)(*param_1 + 0x154));
  uStack_8 = *(undefined4 *)(iVar2 + 8);
  fVar5 = (float)Cam_DistanceTo(param_2,&uStack_10);
  fVar5 = 1.0 - (fVar5 - _s_CarSnd_ComputeListener_2) / _s_CarSnd_ComputeListener_1;
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  iVar4 = (int)param_2;
  fVar5 = fVar5 * fVar5 * fVar5;
  sceVu0SubVector(auStack_20,iVar4 + 0x430,iVar4 + 0x420);
  pfVar3 = (float *)PhysBody_GetWorldMatrix(*(undefined4 *)(*param_1 + 0x154));
  fStack_30 = *pfVar3 - *(float *)(iVar4 + 0x420);
  iVar2 = PhysBody_GetWorldMatrix(*(undefined4 *)(*param_1 + 0x154));
  fStack_2c = *(float *)(iVar2 + 4) - *(float *)(iVar4 + 0x424);
  iVar2 = PhysBody_GetWorldMatrix(*(undefined4 *)(*param_1 + 0x154));
  fStack_28 = *(float *)(iVar2 + 8) - *(float *)(iVar4 + 0x428);
  sceVu0Normalize(&fStack_30,&fStack_30);
  sceVu0Normalize(auStack_20,auStack_20);
  fVar6 = (float)sceVu0InnerProduct(&fStack_30,auStack_20);
  sceVu0OuterProduct(auStack_40,&fStack_30,auStack_20);
  sceVu0CopyVector(auStack_50,iVar4 + 0x440);
  sceVu0Normalize(auStack_50,auStack_50);
  sceVu0InnerProduct(iVar4 + 0x440,auStack_40);
  if (fVar6 < 0.0) {
    fVar5 = fVar5 * fVar5;
  }
  fVar5 = fVar5 * 127.0;
  if (2.1474836e+09 <= fVar5) {
    fVar5 = fVar5 - 2.1474836e+09;
  }
  return (int)fVar5 & 0xff;
}

// 0x001939e0  size 0x708
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CarSnd_UpdateEngine(undefined4 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  
  if ((param_1[1] & 1) == 0) {
    return;
  }
  fVar12 = (float)RaceCar_GetSpeedKmh(param_2);
  param_1[2] = (int)((DAT_0036e7cc * fVar12) / DAT_0036e7c8);
  fVar12 = _s_CarSnd_UpdateEngine_1;
  if ((param_1[1] & 2) != 0) {
    if (param_1[2] == 0) {
      (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,*(undefined1 *)(param_1 + 7));
      param_1[1] = param_1[1] & 0xfffffffd;
    }
    else {
      fVar13 = (float)RaceCar_GetSpeedKmh(param_2);
      piVar11 = (int *)*param_1;
      uVar4 = *(ushort *)(param_1 + 2);
      uVar3 = *(undefined1 *)(param_1 + 7);
      fVar12 = (fVar13 - fVar12) / (DAT_0036e7c4 - fVar12);
      fVar13 = (1.0 - fVar12) * DAT_0036e7c0;
      fVar12 = fVar12 * DAT_0036e7bc;
      uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
      lVar7 = SndMgr_IsChannelBusy(uVar6);
      if (lVar7 == 0) {
        uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
        uVar1 = (**(code **)(*piVar11 + 0xc))(piVar11,uVar3);
        uVar2 = (**(code **)(*piVar11 + 0x10))(piVar11);
        piVar11 = (int *)uVar6;
        (**(code **)(*piVar11 + 0x2c))(uVar6,uVar3,uVar1,uVar4 & 0xff,uVar2);
        (**(code **)(*piVar11 + 0x30))(uVar6,uVar3,uVar1,0x40,uVar2);
        (**(code **)(*piVar11 + 0x34))
                  (uVar6,uVar3,uVar1,(short)(int)(fVar12 + fVar13) + 0x2000,uVar2);
      }
    }
    goto LAB_00193bd4;
  }
  if (param_1[2] == 0) goto LAB_00193bd4;
  piVar11 = (int *)*param_1;
  uVar3 = *(undefined1 *)(param_1 + 7);
  uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
  lVar7 = SndMgr_IsChannelBusy(uVar6);
  if (lVar7 == 0) {
    uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
    uVar8 = (**(code **)(*piVar11 + 0xc))(piVar11,uVar3);
    uVar9 = (**(code **)(*piVar11 + 0x10))(piVar11);
    (**(code **)(*(int *)uVar6 + 0x24))(uVar6,uVar3,uVar8,0x7f,uVar9,0x40,0);
    uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
    lVar7 = SndMgr_IsChannelBusy(uVar6);
    if (lVar7 != 0) goto LAB_00193bc4;
    uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
    uVar1 = (**(code **)(*piVar11 + 0xc))(piVar11,uVar3);
    uVar2 = (**(code **)(*piVar11 + 0x10))(piVar11);
    piVar11 = (int *)uVar6;
    (**(code **)(*piVar11 + 0x2c))(uVar6,uVar3,uVar1,0,uVar2);
    (**(code **)(*piVar11 + 0x30))(uVar6,uVar3,uVar1,0x40,uVar2);
    (**(code **)(*piVar11 + 0x34))(uVar6,uVar3,uVar1,0x2000,uVar2);
    uVar5 = param_1[1];
  }
  else {
LAB_00193bc4:
    uVar5 = param_1[1];
  }
  param_1[1] = uVar5 | 2;
LAB_00193bd4:
  fVar12 = (float)RaceCar_GetSpeedKmh(param_2);
  iVar10 = (int)param_2;
  uVar4 = (ushort)(int)((fVar12 * 127.0) / 128.0);
  if ((*(char *)(iVar10 + 0x1c8) == '\x04') || (*(char *)(iVar10 + 0x308) == '\x04')) {
    if (param_1[4] == 0) {
      piVar11 = (int *)*param_1;
      uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
      lVar7 = SndMgr_IsChannelBusy(uVar6);
      if (lVar7 == 0) {
        uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
        uVar8 = (**(code **)(*piVar11 + 0xc))(piVar11,8);
        uVar9 = (**(code **)(*piVar11 + 0x10))(piVar11);
        (**(code **)(*(int *)uVar6 + 0x24))(uVar6,8,uVar8,0x7f,uVar9,0x40,0);
        uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
        lVar7 = SndMgr_IsChannelBusy(uVar6);
        if (lVar7 == 0) {
          uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
          uVar3 = (**(code **)(*piVar11 + 0xc))(piVar11,8);
          uVar1 = (**(code **)(*piVar11 + 0x10))(piVar11);
          piVar11 = (int *)uVar6;
          (**(code **)(*piVar11 + 0x2c))(uVar6,8,uVar3,uVar4 & 0xff,uVar1);
          (**(code **)(*piVar11 + 0x30))(uVar6,8,uVar3,0x40,uVar1);
          (**(code **)(*piVar11 + 0x34))(uVar6,8,uVar3,0x2000,uVar1);
        }
      }
      param_1[4] = 1;
      fVar12 = (float)RaceCar_GetSpeedKmh(param_2);
      param_1[6] = (int)(fVar12 / 32.0);
    }
  }
  else {
    param_1[4] = 0;
  }
  if ((*(char *)(iVar10 + 0x448) == '\x04') || (*(char *)(iVar10 + 0x588) == '\x04')) {
    if (param_1[3] == 0) {
      piVar11 = (int *)*param_1;
      uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
      lVar7 = SndMgr_IsChannelBusy(uVar6);
      if (lVar7 == 0) {
        uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
        uVar8 = (**(code **)(*piVar11 + 0xc))(piVar11,9);
        uVar9 = (**(code **)(*piVar11 + 0x10))(piVar11);
        (**(code **)(*(int *)uVar6 + 0x24))(uVar6,9,uVar8,0x7f,uVar9,0x40,0);
        uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
        lVar7 = SndMgr_IsChannelBusy(uVar6);
        if (lVar7 == 0) {
          uVar6 = (**(code **)(*piVar11 + 0x14))(piVar11);
          uVar3 = (**(code **)(*piVar11 + 0xc))(piVar11,9);
          uVar1 = (**(code **)(*piVar11 + 0x10))(piVar11);
          piVar11 = (int *)uVar6;
          (**(code **)(*piVar11 + 0x2c))(uVar6,9,uVar3,uVar4 & 0xff,uVar1);
          (**(code **)(*piVar11 + 0x30))(uVar6,9,uVar3,0x40,uVar1);
          (**(code **)(*piVar11 + 0x34))(uVar6,9,uVar3,0x2000,uVar1);
        }
      }
      param_1[3] = 1;
      fVar12 = (float)RaceCar_GetSpeedKmh(param_2);
      param_1[5] = (int)(fVar12 / 32.0);
    }
  }
  else {
    param_1[3] = 0;
  }
  return;
}

