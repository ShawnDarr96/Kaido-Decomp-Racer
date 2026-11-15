/* XVI_SND.IRX: Ghidra decompilation (scripts/iop_export.py). IOP R3000 code. */
// 0x00000000  size 0x5c

void FUN_00000000(undefined4 param_1,undefined4 param_2)

{
  DAT_0000606c = 0xffffffff;
  DAT_00006068 = param_1;
  FUN_00000280();
  FUN_000009a0(param_1,param_2);
  FUN_00002590(param_1,param_2);
  return;
}


// 0x0000005c  size 0x48

void FUN_0000005c(undefined4 param_1)

{
  DAT_00006068 = 0xffffffff;
  DAT_0000606c = param_1;
  FUN_00000340();
  FUN_000009c0(param_1);
  FUN_000025bc(param_1);
  return;
}


// 0x000000a4  size 0xbc

undefined * FUN_000000a4(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 - 0x100U < 0x11) {
    puVar1 = (undefined *)SBasic_Init();
  }
  else if (param_1 - 0x200U < 0x15) {
    puVar1 = (undefined *)Synthe_Create();
  }
  else if (param_1 - 0x300U < 0xc) {
    puVar1 = (undefined *)Stream_Create();
  }
  else {
    if (param_1 == 0x400) {
      piVar4 = param_2 + 1;
      for (iVar5 = *param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
        iVar2 = *piVar4;
        piVar3 = piVar4 + 1;
        piVar4 = piVar4 + 5;
        FUN_000000a4(iVar2,piVar3);
      }
    }
    puVar1 = &DAT_00006070;
  }
  return puVar1;
}


// 0x00000160  size 0x11c

bool FUN_00000160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined **local_38;
  undefined4 local_34;
  char *local_30;
  char *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_58 = PTR_DAT_00005134;
  local_54 = DAT_00005138;
  local_50 = PTR_DAT_0000513c;
  local_4c = DAT_00005140;
  local_48 = PTR_DAT_00005144;
  local_44 = DAT_00005148;
  local_40 = DAT_0000514c;
  local_3c = DAT_00005150;
  FlushDcache();
  xvi_iop_4();
  xvi_iop_9(&local_58,param_1,param_2);
  FUN_00000000(0,local_44);
  local_38 = &PTR_s_xvi_isound_00006060;
  local_30 = s_Jan_4_2004_00005154;
  local_2c = s_18_32_54_00005160;
  local_28 = 0x3d0;
  local_24 = &DAT_00006128;
  local_20 = 0xa4;
  local_18 = 0x4000;
  local_34 = local_54;
  local_1c = local_4c;
  iVar1 = xvi_iop_17(&DAT_000060b0,&local_38);
  if (iVar1 != 0) {
    FUN_0000005c(1);
  }
  return iVar1 != 0;
}


// 0x00000280  size 0xc0

void FUN_00000280(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_00006084 = 0xffffffff;
  DAT_00006080 = param_1;
  DAT_00006088 = param_2;
  sceSdInit(0);
  uVar3 = 0;
  uVar2 = 0x980;
  do {
    sceSdSetParam(uVar2 & 0xffff,0);
    uVar1 = uVar3 & 0xffff | 0xa80;
    sceSdSetParam(uVar1,0);
    sceSdClearEffectWorkArea(uVar3,0,0);
    sceSdSetParam(uVar2 & 0xffff,0x3fff);
    sceSdSetParam(uVar1,0x3fff);
    uVar3 = uVar3 + 1;
    uVar2 = uVar3 | 0x980;
  } while ((int)uVar3 < 2);
  sceSdSetCoreAttr(10,0x80);
  return;
}


// 0x00000340  size 0x18

void FUN_00000340(undefined4 param_1)

{
  DAT_00006080 = 0xffffffff;
  DAT_00006084 = param_1;
  return;
}


// 0x00000358  size 0x640

undefined4 * SBasic_Init(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_20 [2];
  
  if ((param_1 != 0x104) || (param_2[1] != 1)) {
    CpuSuspendIntr(local_20);
  }
  switch(param_1) {
  case 0x100:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_Init_flag__d__00005170,*param_2);
    }
    DAT_00006500 = sceSdInit(*param_2);
    break;
  case 0x101:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_BlockTrans_chan__d___mod_00005188,*param_2,param_2[1],param_2[2],param_2[3],
              param_2[4]);
    }
    DAT_00006500 = sceSdBlockTrans((int)(short)*param_2,(short)param_2[1],param_2[2],param_2[3],
                                   param_2[4]);
    break;
  case 0x102:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_BlockTransStatus_chan__d_000051d4,*param_2,param_2[1]);
    }
    DAT_00006500 = sceSdBlockTransStatus((int)(short)*param_2,(int)(short)param_2[1]);
    break;
  case 0x103:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_VoiceTrans_chan__d___mod_00005204,*param_2,param_2[1],param_2[2],param_2[3],
              param_2[4]);
    }
    DAT_00006500 = sceSdVoiceTrans((int)(short)*param_2,(short)param_2[1],param_2[2],param_2[3],
                                   param_2[4]);
    break;
  case 0x104:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_VoiceTrans_chan__d___fla_0000524c,*param_2,param_2[1]);
    }
    DAT_00006500 = sceSdVoiceTransStatus((int)(short)*param_2,(int)(short)param_2[1]);
    break;
  case 0x105:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_ClearEffectWorkArea_core_00005274,*param_2,param_2[1],param_2[2]);
    }
    DAT_00006500 = sceSdClearEffectWorkArea(*param_2,param_2[1],param_2[2]);
    break;
  case 0x106:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_GetAddr_reg__d__000052b0,*param_2);
    }
    DAT_00006500 = sceSdGetAddr((short)*param_2);
    break;
  case 0x107:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_SetAddr_reg__d___value___000052cc,*param_2,param_2[1]);
    }
    sceSdSetAddr((short)*param_2,param_2[1]);
    DAT_00006500 = 0;
    break;
  case 0x108:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_GetCoreAttr_entry__d__000052f0,*param_2);
    }
    uVar1 = sceSdGetCoreAttr((short)*param_2);
    DAT_00006500 = uVar1 & 0xffff;
    break;
  case 0x109:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_SetCoreAttr_entry__d___v_00005310,*param_2,param_2[1]);
    }
    sceSdSetCoreAttr((short)*param_2,(short)param_2[1]);
    DAT_00006500 = 0;
    break;
  case 0x10a:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_GetEffectAttr_core__d__0000533c,*param_2);
    }
    sceSdGetEffectAttr(*param_2,&DAT_00006508);
    break;
  case 0x10b:
    if (((((DAT_00006088 != 0) && (Kprintf(s_SBasic>_SetEffectAttr_0000535c), DAT_00006088 != 0)) &&
         (Kprintf(s__core__d__00005374,param_2[1]), DAT_00006088 != 0)) &&
        ((Kprintf(s__mode__d__00005380,param_2[2]), DAT_00006088 != 0 &&
         (Kprintf(s__depth_L__d__0000538c,(int)(short)param_2[3]), DAT_00006088 != 0)))) &&
       ((Kprintf(s__depth_R__d__0000539c,(int)*(short *)((int)param_2 + 0xe)), DAT_00006088 != 0 &&
        (Kprintf(s__delay__d__000053ac,param_2[4]), DAT_00006088 != 0)))) {
      Kprintf(s__feedback__d__000053b8,param_2[5]);
    }
    DAT_00006500 = sceSdSetEffectAttr(*param_2,param_2 + 1);
    break;
  case 0x10c:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_GetParam_reg__d__000053c8,*param_2);
    }
    uVar1 = sceSdGetParam((short)*param_2);
    DAT_00006500 = uVar1 & 0xffff;
    break;
  case 0x10d:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_SetParam_reg__d___value__000053e4,*param_2,param_2[1]);
    }
    sceSdSetParam((short)*param_2,(short)param_2[1]);
    DAT_00006500 = 0;
    break;
  case 0x10e:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_GetSwitch_reg__d__0000540c,*param_2);
    }
    DAT_00006500 = sceSdGetSwitch((short)*param_2);
    break;
  case 0x10f:
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_SetSwitch_reg__d___value_00005428,*param_2,param_2[1]);
    }
    sceSdSetSwitch((short)*param_2,param_2[1]);
    DAT_00006500 = 0;
    break;
  case 0x110:
    iVar3 = *param_2;
    if (DAT_00006088 != 0) {
      Kprintf(s_SBasic>_ProcBatch_00005450);
    }
    DAT_00006500 = sceSdProcBatch(param_2 + 1,param_2 + 1 + iVar3 * 2,iVar3);
    break;
  default:
    DAT_00006500 = 0xffffffff;
  }
  if ((param_1 != 0x104) || (param_2[1] != 1)) {
    CpuResumeIntr(local_20[0]);
  }
  puVar2 = (undefined4 *)&DAT_00006508;
  if (param_1 != 0x10a) {
    puVar2 = &DAT_00006500;
  }
  return puVar2;
}


// 0x000009a0  size 0x20

void FUN_000009a0(undefined4 param_1,undefined4 param_2)

{
  DAT_00006090 = param_1;
  DAT_00006094 = 0xffffffff;
  DAT_00006098 = param_2;
  return;
}


// 0x000009c0  size 0x18

void FUN_000009c0(undefined4 param_1)

{
  DAT_00006090 = 0xffffffff;
  DAT_00006094 = param_1;
  return;
}


// 0x000009d8  size 0x6d4

undefined4 * Synthe_Create(int param_1,undefined4 *param_2)

{
  undefined4 local_18 [2];
  
  if ((1 < param_1 - 0x200U) && (param_1 != 0x205)) {
    CpuSuspendIntr(local_18);
  }
  switch(param_1) {
  case 0x200:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_Create_prio__d___num__d__000054b0,*param_2,param_2[1]);
    }
    DAT_00006520 = FUN_000010ac(*param_2,param_2[1]);
    break;
  case 0x201:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_Remove_000054d4);
    }
    DAT_00006520 = FUN_00001158();
    break;
  case 0x202:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_ATickActive_enable__d__000054e4,*param_2);
    }
    DAT_00006520 = FUN_000011d8(*param_2);
    break;
  case 0x203:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_ReservVoice_core0_0x_08x_00005504,*param_2,param_2[1]);
    }
    DAT_00006520 = FUN_0000121c(*param_2,param_2[1]);
    break;
  case 0x204:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_OutputMode_mode__d__00005538,*param_2);
    }
    DAT_00006520 = FUN_00001250(*param_2);
    break;
  case 0x205:
    if (((((DAT_00006098 != 0) &&
          (Kprintf(s_Synthe>_SetAttribute_port__d__00005558,*param_2), DAT_00006098 != 0)) &&
         (Kprintf(s_attr_>type____d_00005578,param_2[1]), DAT_00006098 != 0)) &&
        ((Kprintf(s_attr_>prio____d_00005590,param_2[2]), DAT_00006098 != 0 &&
         (Kprintf(s_attr_>poly____d_000055a8,param_2[3]), DAT_00006098 != 0)))) &&
       ((Kprintf(s_attr_>inp_addr____p_000055c0,param_2[4]), DAT_00006098 != 0 &&
        ((Kprintf(s_attr_>inp_size____d_000055d8,param_2[5]), DAT_00006098 != 0 &&
         (Kprintf(s_attr_>out_addr____p_000055f0,param_2[6]), DAT_00006098 != 0)))))) {
      Kprintf(s_attr_>out_size____d_00005608,param_2[7]);
    }
    DAT_00006520 = FUN_0000127c(*param_2,param_2 + 1);
    break;
  case 0x206:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_SetVolume_port__d___volu_00005620,*param_2,param_2[1]);
    }
    DAT_00006520 = FUN_000012b0(*param_2,param_2[1]);
    break;
  case 0x207:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_SoftFadeVolume_port__d___00005648,*param_2,param_2[1],param_2[2],param_2[3])
      ;
    }
    DAT_00006520 = FUN_00001354(*param_2,param_2[1],param_2[2],param_2[3]);
    break;
  case 0x208:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_SyntheMidiVolume_port__d_0000568c,*param_2,param_2[1],param_2[2]);
    }
    DAT_00006520 = FUN_0000141c(*param_2,param_2[1],param_2[2]);
    break;
  case 0x209:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_VolumeChange_port__d___c_000056c0,*param_2,param_2[1],param_2[2]);
    }
    DAT_00006520 = Synthe_VolumeChange(*param_2,param_2[1],param_2[2]);
    break;
  case 0x20a:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_SetAbsoluteTempo_port__d_000056f0,*param_2,param_2[1]);
    }
    DAT_00006520 = Synthe_SetAbsoluteTempo(*param_2,param_2[1]);
    break;
  case 0x20b:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_AllNoteOff_port__d__00005720,*param_2);
    }
    DAT_00006520 = FUN_00001560(*param_2);
    break;
  case 0x20c:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_AllSoundOff_port__d__00005740,*param_2);
    }
    DAT_00006520 = FUN_00001598(*param_2);
    break;
  case 0x20d:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_LoadHD_port__d___spua__p_00005760,*param_2,param_2[1],param_2[2]);
    }
    DAT_00006520 = Synthe_Load(*param_2,param_2[1],param_2[2]);
    break;
  case 0x20e:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_LoadSQ_port__d___sq__p__0000578c,*param_2,param_2[1]);
    }
    DAT_00006520 = Synthe_Load(*param_2,param_2[1]);
    break;
  case 0x20f:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_PlaySelect_port__d___typ_000057b0,*param_2,param_2[1],param_2[2]);
    }
    DAT_00006520 = Synthe_Select(*param_2,param_2[1],param_2[2]);
    break;
  case 0x210:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_PlayLocation_port__d___p_000057e4,*param_2,param_2[1]);
    }
    DAT_00006520 = Synthe_Start(*param_2,param_2[1]);
    break;
  case 0x211:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_PlayStart_port__d___repe_0000580c,*param_2,param_2[1]);
    }
    DAT_00006520 = Synthe_Start(*param_2,param_2[1]);
    break;
  case 0x212:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_PlayStop_port__d__00005834,*param_2);
    }
    DAT_00006520 = Synthe_Stop(*param_2);
    break;
  case 0x213:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_PlaySeek_port__d___pos___00005850,*param_2,param_2[1]);
    }
    DAT_00006520 = Synthe_Seek(*param_2,param_2[1]);
    break;
  case 0x214:
    if (DAT_00006098 != 0) {
      Kprintf(s_Synthe>_StatusMonitor_eec_addr___00005874,*param_2);
    }
    DAT_00006520 = Synthe_Status(*param_2);
  }
  if ((1 < param_1 - 0x200U) && (param_1 != 0x205)) {
    CpuResumeIntr(local_18[0]);
  }
  return &DAT_00006520;
}


// 0x000010ac  size 0xac

undefined4 FUN_000010ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  code *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00001a3c(param_2);
  if (iVar1 != -1) {
    local_28 = 0x2000000;
    local_20 = FUN_00001f3c;
    local_1c = 0x4000;
    local_24 = 0;
    local_18 = param_1;
    DAT_00006524 = CreateThread(&local_28);
    if (0 < DAT_00006524) {
      StartThread(DAT_00006524,0);
      iVar1 = FUN_00002428(&DAT_00006590,DAT_00006524);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


// 0x00001158  size 0x80

undefined4 FUN_00001158(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00002518(&DAT_00006590);
  iVar1 = FUN_000024c0(&DAT_00006590);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    TerminateThread(DAT_00006524);
    DeleteThread(DAT_00006524);
    iVar1 = FUN_00001bd8();
    uVar2 = 0xffffffff;
    if (iVar1 != -1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x000011d8  size 0x44

void FUN_000011d8(int param_1)

{
  if (param_1 == 0) {
    FUN_00002518(&DAT_00006590);
  }
  else {
    FUN_000024e4(&DAT_00006590);
  }
  return;
}


// 0x0000121c  size 0x34

undefined4 FUN_0000121c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  iVar1 = modhsyn_8(&local_10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x00001250  size 0x2c

undefined4 FUN_00001250(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = modhsyn_18();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x0000127c  size 0x34

undefined4 FUN_0000127c(int param_1)

{
  FUN_00001d8c(DAT_0000652c + param_1 * 0x804);
  return 0;
}


// 0x000012b0  size 0xa4

undefined4 FUN_000012b0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 * 0x804;
  *(uint *)(iVar1 + DAT_0000652c + 0x7f0) = param_2;
  *(uint *)(iVar1 + DAT_0000652c + 0x7f4) = param_2;
  *(undefined4 *)(iVar1 + DAT_0000652c + 0x7f8) = 0;
  *(undefined4 *)(iVar1 + DAT_0000652c + 0x7fc) = 0;
  *(undefined4 *)(iVar1 + DAT_0000652c + 0x800) = 1;
  iVar1 = modhsyn_10(&DAT_00006530,param_1,param_2 & 0xffff);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x00001354  size 0xc8

undefined4 FUN_00001354(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = modhsyn_11(&DAT_00006530,param_1);
  param_1 = param_1 * 0x804;
  *(uint *)(param_1 + DAT_0000652c + 0x7f0) = uVar1 & 0xffff;
  *(undefined4 *)(param_1 + DAT_0000652c + 0x7f4) = param_2;
  *(undefined4 *)(param_1 + DAT_0000652c + 0x7f8) = param_3;
  *(undefined4 *)(param_1 + DAT_0000652c + 0x7fc) = param_4;
  *(undefined4 *)(param_1 + DAT_0000652c + 0x800) = param_3;
  return 0;
}


// 0x0000141c  size 0x54

undefined4 FUN_0000141c(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = modmidi_17(DAT_0000652c + param_1 * 0x804 + 0x570,0,param_2,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x00001470  size 0x7c

undefined4 Synthe_VolumeChange(int param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_0000652c + param_1 * 0x804);
  if (*piVar3 == 1) {
    iVar2 = modmidi_18(piVar3 + 0x15c,0,param_2,param_3);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    printf(s_Synthe>_VolumeChange_SQ_type_err_000058ec);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// 0x000014ec  size 0x74

undefined4 Synthe_SetAbsoluteTempo(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_0000652c + param_1 * 0x804);
  if (*piVar3 == 1) {
    iVar2 = modmidi_19(piVar3 + 0x15c,0,param_2);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    printf(s_Synthe>_SetAbsoluteTempo_SQ_type_00005910);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// 0x00001560  size 0x38

undefined4 FUN_00001560(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = modhsyn_12(&DAT_00006530,param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x00001598  size 0x38

undefined4 FUN_00001598(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = modhsyn_13(&DAT_00006530,param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x000015d0  size 0x54

undefined4 Synthe_Load(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = modhsyn_6(&DAT_00006530,param_1,param_2,param_3,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    printf(s_Synthe>_Load_HD_error_00005938);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x00001624  size 0x74

undefined4 Synthe_Load(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_0000652c + param_1 * 0x804);
  pcVar2 = s_Synthe>_Load_SQ_type_error_00005950;
  if (*piVar3 == 1) {
    piVar3[0x166] = param_2;
    piVar3[0x15a] = param_2;
    iVar1 = modmidi_6(piVar3 + 0x15c,0);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar2 = s_Synthe>_Load_SQ_error_0000596c;
  }
  printf(pcVar2);
  return 0xffffffff;
}


// 0x00001698  size 0xc0

undefined4 Synthe_Select(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_0000652c + param_1 * 0x804);
  if (*piVar3 == 1) {
    if (param_2 == 0) {
      iVar1 = modmidi_14(piVar3 + 0x15c,0,param_3);
      if (iVar1 == 0) {
LAB_00001738:
        piVar3[0x1f8] = param_2;
        piVar3[0x1f9] = param_3;
        return 0;
      }
      pcVar2 = s_Synthe>_Select_midi_error_000059a0;
    }
    else {
      iVar1 = modmidi_7(piVar3 + 0x15c,0,param_3);
      if (iVar1 == 0) goto LAB_00001738;
      pcVar2 = s_Synthe>_Select_song_error_000059bc;
    }
  }
  else {
    pcVar2 = s_Synthe>_Select_type_error_00005984;
  }
  printf(pcVar2);
  return 0xffffffff;
}


// 0x00001758  size 0x74

undefined4 Synthe_Start(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = (int *)(DAT_0000652c + param_1 * 0x804);
  if (*piVar2 == 1) {
    iVar1 = modmidi_16(piVar2 + 0x15c,0,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar3 = s_Synthe>_Midi_location_error_000059f4;
  }
  else {
    pcVar3 = s_Synthe>_Start_type_error_000059d8;
  }
  printf(pcVar3);
  return 0xffffffff;
}


// 0x000017cc  size 0xc0

undefined4 Synthe_Start(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_0000652c + param_1 * 0x804);
  if (*piVar3 == 1) {
    if (piVar3[0x1f8] == 0) {
      iVar1 = modmidi_15(piVar3 + 0x15c,0,1);
      if (iVar1 == 0) {
LAB_0000186c:
        piVar3[0x1fa] = 1;
        piVar3[0x1fb] = param_2;
        return 0;
      }
      pcVar2 = s_Synthe>_Start_midi_error_00005a14;
    }
    else {
      iVar1 = modmidi_8(piVar3 + 0x15c,0,2);
      if (iVar1 == 0) goto LAB_0000186c;
      pcVar2 = s_Synthe>_Start_song_error_00005a30;
    }
  }
  else {
    pcVar2 = s_Synthe>_Start_type_error_000059d8;
  }
  printf(pcVar2);
  return 0xffffffff;
}


// 0x0000188c  size 0xc4

undefined4 Synthe_Stop(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_0000652c + param_1 * 0x804);
  if (*piVar3 == 1) {
    if (piVar3[0x1f8] == 0) {
      iVar1 = modmidi_15(piVar3 + 0x15c,0,0);
      if (iVar1 == 0) {
LAB_00001928:
        piVar3[0x1fa] = 0;
        piVar3[0x1fb] = 0;
        piVar3[0x1fe] = 0;
        piVar3[0x1ff] = 0;
        piVar3[0x200] = 1;
        return 0;
      }
      pcVar2 = s_Synthe>_Stop_midi_error_00005a68;
    }
    else {
      iVar1 = modmidi_8(piVar3 + 0x15c,0,0);
      if (iVar1 == 0) goto LAB_00001928;
      pcVar2 = s_Synthe>_Stop_song_error_00005a84;
    }
  }
  else {
    pcVar2 = s_Synthe>_Stop_type_error_00005a4c;
  }
  printf(pcVar2);
  return 0xffffffff;
}


// 0x00001950  size 0xa4

undefined4 Synthe_Seek(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = (int *)(DAT_0000652c + param_1 * 0x804);
  if (*piVar2 == 1) {
    if (piVar2[0x1f8] == 0) {
      iVar1 = modmidi_16(piVar2 + 0x15c,0);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar3 = s_Synthe>_Seek_midi_error_00005abc;
    }
    else {
      iVar1 = modmidi_13(piVar2 + 0x15c,0,param_2,0);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar3 = s_Synthe>_Seek_song_error_00005ad8;
    }
  }
  else {
    pcVar3 = s_Synthe>_Seek_type_error_00005aa0;
  }
  printf(pcVar3);
  return 0xffffffff;
}


// 0x000019f4  size 0x48

undefined4 Synthe_Status(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_00006580 = param_1;
  iVar1 = modhsyn_15(DAT_00006588 + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    printf(s_Synthe>_Status_monitor_error_00005af4);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x00001a3c  size 0x19c

undefined4 FUN_00001a3c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_00006528 = param_1;
  DAT_0000652c = xvi_iop_5(param_1 * 0x804);
  iVar2 = param_1 * 0x10;
  DAT_0000654c = xvi_iop_5(iVar2);
  DAT_00006584 = iVar2 + 0xa0;
  DAT_00006580 = 0;
  DAT_00006588 = (undefined4 *)xvi_iop_5();
  if (DAT_0000652c != 0) {
    if (DAT_0000654c == 0) {
      return 0xffffffff;
    }
    if (DAT_00006588 != (undefined4 *)0x0) {
      memset(DAT_0000652c,0,param_1 * 0x804);
      memset(DAT_0000654c,0,iVar2);
      memset(DAT_00006588 + 3,0,0x18);
      memset(DAT_00006588 + 9,0,0x18);
      *DAT_00006588 = 0;
      DAT_00006530 = 1;
      DAT_00006540 = 0;
      DAT_0000653c = 0;
      DAT_00006534 = &DAT_00006544;
      DAT_00006544 = param_1 << 1;
      iVar2 = 0;
      DAT_00006548 = DAT_0000654c;
      DAT_00006550 = 0x20;
      DAT_00006554 = 0;
      if (0 < param_1) {
        iVar3 = 0;
        do {
          iVar1 = iVar2 * 0x10;
          iVar2 = iVar2 + 1;
          FUN_00001c54(DAT_0000652c + iVar3,DAT_0000654c + iVar1,&DAT_00006550);
          iVar3 = iVar3 + 0x804;
        } while (iVar2 < param_1);
      }
      iVar2 = modhsyn_4(&DAT_00006530,0x1047);
      if (iVar2 == 0) {
        return 0;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// 0x00001bd8  size 0x7c

undefined4 FUN_00001bd8(void)

{
  if (DAT_00006588 != 0) {
    xvi_iop_6();
    DAT_00006588 = 0;
  }
  if (DAT_0000652c != 0) {
    xvi_iop_6();
    DAT_0000652c = 0;
  }
  if (DAT_0000654c != 0) {
    xvi_iop_6();
    DAT_0000654c = 0;
  }
  return 0;
}


// 0x00001c54  size 0x138

void FUN_00001c54(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[0x158] = param_3;
  *param_1 = 0;
  param_1[0x157] = param_2;
  param_1[0x159] = param_3;
  *(undefined1 *)((int)param_3 + *param_3 + 8) = 0;
  iVar2 = 0xf;
  iVar1 = (int)param_1 + 0x1e;
  *(undefined1 *)((int)param_1[0x159] + *(int *)param_1[0x159] + 8) = 0;
  param_1[0x15d] = param_1 + 0x161;
  param_1[0x162] = param_1 + 0x165;
  param_1[0x15c] = 2;
  param_1[0x161] = 2;
  param_1[0x168] = param_1 + 0x16b;
  param_1[0x15b] = param_3;
  param_1[0x160] = 0;
  param_1[0x15f] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = param_3;
  param_1[0x167] = 0;
  param_1[0x163] = 1;
  param_1[0x164] = param_1 + 0x169;
  param_1[0x169] = 0;
  param_1[0x16a] = param_3;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  *(undefined2 *)(param_1 + 0x177) = 1;
  do {
    *(undefined2 *)(iVar1 + 0x5bc) = 1;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -2;
  } while (-1 < iVar2);
  param_1[0x15a] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)param_1[0x157] = 0;
  *(int **)(param_1[0x157] + 4) = param_3;
  *(undefined4 *)(param_1[0x157] + 8) = 0;
  *(undefined4 **)(param_1[0x157] + 0xc) = param_1 + 1;
  return;
}


// 0x00001d8c  size 0x1b0

void FUN_00001d8c(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  
  if (*param_2 == 0) {
    piVar2 = (int *)param_2[3];
    param_1[0x158] = (int)piVar2;
    *piVar2 = param_2[4] + -0x10;
    *(undefined4 *)(param_1[0x158] + 4) = 0;
    piVar2 = (int *)param_2[5];
    param_1[0x159] = (int)piVar2;
    *piVar2 = param_2[6] + -0x10;
    bVar1 = DAT_00006098 != 0;
    *(undefined4 *)(param_1[0x159] + 4) = 0;
    if (bVar1) {
      Kprintf(s_SE_inp_0x_p_0x_03x_0x_03x_0x_03x_00005b14,param_1[0x158],param_2[4],
              *(undefined4 *)param_1[0x158],((undefined4 *)param_1[0x158])[1]);
      if (DAT_00006098 != 0) {
        Kprintf(s_SE_out_0x_p_0x_03x_0x_03x_0x_03x_00005b38,param_1[0x159],param_2[6],
                *(undefined4 *)param_1[0x159],((undefined4 *)param_1[0x159])[1]);
      }
    }
    piVar2 = (int *)param_1[0x158];
    param_1[0x1fa] = (int)piVar2;
    param_1[0x1fb] = param_1[0x159];
    *(undefined1 *)((int)piVar2 + *piVar2 + 8) = 0;
    *(undefined1 *)(param_1[0x159] + *(int *)param_1[0x159] + 8) = 0;
    *(int *)(param_1[0x157] + 4) = param_1[0x159];
  }
  else {
    piVar2 = (int *)param_2[5];
    param_1[0x15b] = (int)piVar2;
    *piVar2 = param_2[6] + -0x10;
    *(undefined4 *)(param_1[0x15b] + 4) = 0;
    param_1[0x16a] = param_1[0x15b];
    *(int *)(param_1[0x157] + 4) = param_1[0x15b];
    modmidi_4(param_1 + 0x15c,0x1047);
  }
  *param_1 = *param_2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  *(char *)((int)param_1 + 5) = (char)param_2[2];
  return;
}


// 0x00001f3c  size 0x4ec

void FUN_00001f3c(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_30 [2];
  
  uVar11 = 0;
  do {
    uVar7 = 0;
    SleepThread();
    uVar8 = 0;
    if (0 < DAT_00006528) {
      iVar9 = 0;
      iVar10 = 0;
      do {
        piVar6 = (int *)(DAT_0000652c + iVar10);
        if (*piVar6 == 0) {
          piVar4 = (int *)piVar6[0x158];
          if (*(char *)((int)piVar4 + *piVar4 + 8) != '\0') {
            if (((*piVar4 == *(int *)piVar6[0x159]) && ((int *)piVar6[0x1fa] == piVar4)) &&
               ((int *)piVar6[0x1fb] == (int *)piVar6[0x159])) {
              CpuSuspendIntr(local_30);
              memcpy((int *)piVar6[0x159],piVar6[0x158],*(int *)piVar6[0x159] + 0x10);
              *(undefined1 *)(piVar6[0x158] + *(int *)piVar6[0x158] + 8) = 0;
              goto LAB_000021dc;
            }
            if (((DAT_00006098 != 0) &&
                (Kprintf(s_SE__d__buffer_not_match_____00005b5c,uVar7), DAT_00006098 != 0)) &&
               ((Kprintf(s_inp_old__08x__now__08x__00005b7c,piVar6[0x1fa],piVar6[0x158]),
                DAT_00006098 != 0 &&
                ((Kprintf(s_out_old__08x__now__08x__00005b98,piVar6[0x1fb],piVar6[0x159]),
                 DAT_00006098 != 0 &&
                 (Kprintf(s_inp_buffer_size__08x__00005bb4,*(undefined4 *)piVar6[0x158]),
                 DAT_00006098 != 0)))))) {
              Kprintf(s_out_buffer_size__08x__00005bcc,*(undefined4 *)piVar6[0x159]);
            }
          }
        }
        else if (*piVar6 == 1) {
          if (((piVar6[0x1fa] == 0) && (((int)uVar11 >> (uVar7 & 0x1f) & 1U) == 0)) ||
             ((*(uint *)(*(int *)(*(int *)(piVar6[0x15d] + 4) + 0xc) + 0xc) & 2) == 0)) {
            if ((piVar6[0x1fa] == 0) || (piVar6[0x1fb] == 0)) goto LAB_000021f0;
            CpuSuspendIntr(local_30);
            Synthe_Select(uVar7,piVar6[0x1f8],piVar6[0x1f9]);
            Synthe_Start(uVar7,piVar6[0x1fb]);
          }
          else {
            CpuSuspendIntr(local_30);
          }
          modmidi_5(piVar6 + 0x15c);
LAB_000021dc:
          CpuResumeIntr(local_30[0]);
          uVar8 = uVar8 | 1 << (uVar7 & 0x1f);
        }
LAB_000021f0:
        puVar2 = DAT_00006588;
        if (DAT_00006580 != 0) {
          if (((int)uVar8 >> (uVar7 & 0x1f) & 1U) == 0) {
            memset((int)DAT_00006588 + iVar9 + 0x9c,0,0x10);
          }
          else {
            CpuSuspendIntr(local_30);
            modhsyn_17(&DAT_00006530,uVar7,(int)puVar2 + iVar9 + 0x9c);
            CpuResumeIntr(local_30[0]);
          }
        }
        if (piVar6[0x1fe] != 0) {
          CpuSuspendIntr(local_30);
          iVar5 = piVar6[0x200];
          if (iVar5 < 2) {
            modhsyn_10(&DAT_00006530,uVar7,(short)piVar6[0x1fd]);
            if ((piVar6[0x1ff] != 0) && (*piVar6 == 1)) {
              Synthe_Stop(uVar7);
            }
            piVar6[0x1fe] = 0;
            piVar6[0x1ff] = 0;
            piVar6[0x200] = 1;
          }
          else {
            iVar1 = (piVar6[0x1fd] - piVar6[0x1fc]) * (iVar5 - piVar6[0x1fe]);
            if (iVar5 == 0) {
              trap(0x1c00);
            }
            if ((iVar5 == -1) && (iVar1 == -0x80000000)) {
              trap(0x1800);
            }
            iVar3 = piVar6[0x1fe] + -1;
            piVar6[0x1fe] = iVar3;
            if (iVar3 == 0) {
              modhsyn_10(&DAT_00006530,uVar7,(short)piVar6[0x1fd]);
              if ((piVar6[0x1ff] != 0) && (*piVar6 == 1)) {
                Synthe_Stop(uVar7);
              }
            }
            else {
              modhsyn_10(&DAT_00006530,uVar7,piVar6[0x1fc] + iVar1 / iVar5 & 0xffff);
            }
          }
          CpuResumeIntr(local_30[0]);
        }
        iVar9 = iVar9 + 0x10;
        uVar7 = uVar7 + 1;
        iVar10 = iVar10 + 0x804;
      } while ((int)uVar7 < DAT_00006528);
    }
    if (((DAT_00006580 != 0) || (uVar8 != 0)) || (uVar11 != 0)) {
      CpuSuspendIntr(local_30);
      modhsyn_5(&DAT_00006530);
      CpuResumeIntr(local_30[0]);
    }
    *DAT_00006588 = uVar8;
    uVar11 = uVar8;
    if (DAT_00006580 != 0) {
      xvi_iop_7(DAT_00006580,DAT_00006588,DAT_00006584,0);
    }
  } while( true );
}


// 0x00002428  size 0x98

undefined4 FUN_00002428(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  
  *param_1 = param_2;
  USec2SysClock(0x1047,local_10);
  param_1[2] = local_10[0];
  iVar1 = AllocHardTimer(1,0x20,1);
  param_1[1] = iVar1;
  if ((iVar1 < 1) || (iVar1 = SetTimerHandler(iVar1,param_1[2],FUN_00002554,param_1), iVar1 != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = SetupHardTimer(param_1[1],1,0,1);
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x000024c0  size 0x24

undefined4 FUN_000024c0(int param_1)

{
  FreeHardTimer(*(undefined4 *)(param_1 + 4));
  return 0;
}


// 0x000024e4  size 0x34

undefined4 FUN_000024e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = StartHardTimer(*(undefined4 *)(param_1 + 4));
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


// 0x00002518  size 0x3c

undefined4 FUN_00002518(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = StopHardTimer(*(undefined4 *)(param_1 + 4));
  if ((iVar1 == 0) || (uVar2 = 0xffffffff, iVar1 == -0x9c)) {
    uVar2 = 0;
  }
  return uVar2;
}


// 0x00002554  size 0x30

undefined4 FUN_00002554(undefined4 *param_1)

{
  iWakeupThread(*param_1);
  return param_1[2];
}


// 0x00002590  size 0x2c

void FUN_00002590(undefined4 param_1,undefined4 param_2)

{
  DAT_000060a0 = param_1;
  DAT_000060a4 = 0xffffffff;
  DAT_000060a8 = param_2;
  DAT_000067a0 = 0;
  return;
}


// 0x000025bc  size 0x24

void FUN_000025bc(undefined4 param_1)

{
  DAT_000060a0 = 0xffffffff;
  DAT_000060a4 = param_1;
  DAT_000067a0 = 0;
  return;
}


// 0x000025e0  size 0x4d8

undefined4 * Stream_Create(uint param_1,int *param_2)

{
  undefined4 local_18 [2];
  
  if ((param_1 < 0x303) || (*param_2 < DAT_000067a0)) {
    if (1 < param_1 - 0x300) {
      CpuSuspendIntr(local_18);
    }
    switch(param_1 - 0x300) {
    case 0:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_Create_num__d___piro__d__00005bf0,*param_2,param_2[1],param_2[2]);
      }
      DAT_000065a0 = FUN_00002ab8(*param_2,param_2[1],param_2[2]);
      break;
    case 1:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_Remove_00005c20);
      }
      DAT_000065a0 = FUN_00002c18();
      break;
    case 2:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_SetInter_int__d__sw__d__00005c30,*param_2,param_2[1]);
      }
      DAT_000065a0 = FUN_00002ca4(*param_2,param_2[1]);
      break;
    case 3:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_SetVoice_core__d___ch0___00005c54,*param_2,param_2[1],param_2[2],
                param_2[3]);
      }
      DAT_000065a0 = FUN_00002dd8(*param_2,param_2[1],param_2[2],param_2[3]);
      break;
    case 4:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_SetVolume_core__d___vo0__00005c8c,*param_2,param_2[1],param_2[2],
                param_2[3]);
      }
      DAT_000065a0 = FUN_00002e0c(*param_2,param_2[1],param_2[2],param_2[3]);
      break;
    case 5:
      if (((DAT_000060a8 != 0) &&
          (Kprintf(s_Stream>_SetWaveArea_core__d__00005cc8,*param_2), DAT_000060a8 != 0)) &&
         ((Kprintf(s_blocksize____d_00005ce8,param_2[1]), DAT_000060a8 != 0 &&
          ((Kprintf(s_blocknum____d_00005cf8,param_2[2]), DAT_000060a8 != 0 &&
           (Kprintf(s_iop_top____p_00005d08,param_2[3]), DAT_000060a8 != 0)))))) {
        Kprintf(s_spu_top____p_00005d18,param_2[4]);
      }
      DAT_000065a0 = FUN_00002e40(*param_2,param_2 + 1);
      break;
    case 6:
      if ((((DAT_000060a8 != 0) &&
           (Kprintf(s_Stream>_SetWaveInfo_core__d__00005d28,*param_2), DAT_000060a8 != 0)) &&
          (Kprintf(s_type____d_00005d48,param_2[1]), DAT_000060a8 != 0)) &&
         (Kprintf(s_rate____d_00005d58,param_2[2]), DAT_000060a8 != 0)) {
        Kprintf(s_bytes____d_00005d68,param_2[3]);
      }
      DAT_000065a0 = FUN_00002e74(*param_2,param_2 + 1);
      break;
    case 7:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_PreLoad_core__d__byte__d_00005d78,*param_2,param_2[1],param_2[2]);
      }
      DAT_000065a0 = FUN_00002ecc(*param_2,param_2[1],param_2[2]);
      break;
    case 8:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_Start_core__d__00005da8,*param_2);
      }
      DAT_000065a0 = FUN_00002f00(*param_2);
      break;
    case 9:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_Pause_core__d___pause__d_00005dc0,*param_2,param_2[1]);
      }
      DAT_000065a0 = FUN_00002f34(*param_2,param_2[1]);
      break;
    case 10:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_Stop_core__d__00005de4,*param_2);
      }
      DAT_000065a0 = FUN_00002f68(*param_2);
      break;
    case 0xb:
      if (DAT_000060a8 != 0) {
        Kprintf(s_Stream>_SendByte_core__d__byte___00005dfc,*param_2,param_2[1]);
      }
      DAT_000065a0 = FUN_00002f9c(*param_2,param_2[1]);
    }
    if (1 < param_1 - 0x300) {
      CpuResumeIntr(local_18[0]);
    }
  }
  else {
    DAT_000065a0 = 0xffffffff;
  }
  return &DAT_000065a0;
}


// 0x00002ab8  size 0x160

undefined4 FUN_00002ab8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_000067a0 == 0) {
    if (2 < param_1) {
      return 0xffffffff;
    }
    DAT_000067a0 = param_1;
    iVar1 = FUN_00002fd0(&DAT_000066e8,param_3);
    if (iVar1 != -1) {
      FUN_00004470(&DAT_000065a8,0);
      FUN_00004470(&DAT_00006648,1);
      if ((DAT_000067a0 < 1) ||
         (iVar1 = Stream_Semapho(&DAT_000065a8,param_2,&DAT_000066e8), iVar1 != -1)) {
        if ((1 < DAT_000067a0) &&
           (iVar1 = Stream_Semapho(&DAT_00006648,param_2,&DAT_000066e8), iVar1 == -1)) {
          return 0xffffffff;
        }
        if (0 < DAT_000067a0) {
          sceSdSetTransIntrHandler(0,FUN_00004690,0);
        }
        if (1 < DAT_000067a0) {
          sceSdSetTransIntrHandler(1,FUN_00004690,0);
        }
        sceSdSetSpu2IntrHandler(FUN_000046d0,0);
        return 0;
      }
    }
  }
  return 0xffffffff;
}


// 0x00002c18  size 0x8c

undefined4 FUN_00002c18(void)

{
  int iVar1;
  
  if (DAT_000067a0 != 0) {
    DAT_000067a0 = 0;
    iVar1 = Stream_Thread(&DAT_000065a8);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    iVar1 = Stream_Thread(&DAT_00006648);
    if (iVar1 != -1) {
      iVar1 = FUN_00003008(&DAT_000066e8);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


// 0x00002ca4  size 0x134

undefined4 FUN_00002ca4(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  
  bVar2 = false;
  if ((param_2 == 0) || (param_2 == 2)) {
    bVar2 = true;
  }
  bVar1 = 1 < param_2 - 1U;
  if (param_1 == 0) {
    if ((0 < DAT_000067a0) && (bVar2)) {
      sceSdSetTransIntrHandler(0,0,0);
    }
    if ((1 < DAT_000067a0) && (!bVar1)) {
      sceSdSetTransIntrHandler(1,0,0);
    }
    if (!bVar2) {
      return 0;
    }
    pcVar3 = FUN_00000000;
    if (bVar1) {
      return 0;
    }
  }
  else {
    if ((0 < DAT_000067a0) && (bVar2)) {
      sceSdSetTransIntrHandler(0,FUN_00004690,0);
    }
    if ((1 < DAT_000067a0) && (!bVar1)) {
      sceSdSetTransIntrHandler(1,FUN_00004690,0);
    }
    if (!bVar2) {
      return 0;
    }
    if (bVar1) {
      return 0;
    }
    pcVar3 = FUN_000046d0;
  }
  sceSdSetSpu2IntrHandler(pcVar3,0);
  return 0;
}


// 0x00002dd8  size 0x34

undefined4 FUN_00002dd8(int param_1)

{
  FUN_000030d0(param_1 * 0xa0 + 0x65cc);
  return 0;
}


// 0x00002e0c  size 0x34

undefined4 FUN_00002e0c(int param_1)

{
  FUN_000030e0(param_1 * 0xa0 + 0x65cc);
  return 0;
}


// 0x00002e40  size 0x34

void FUN_00002e40(int param_1)

{
  FUN_00003470(param_1 * 0xa0 + 0x65e8);
  return;
}


// 0x00002e74  size 0x58

void FUN_00002e74(int param_1,undefined4 *param_2)

{
  FUN_000030c8(param_1 * 0xa0 + 0x65cc,*param_2);
  FUN_000034e0(param_1 * 0xa0 + 0x65e8,param_2);
  return;
}


// 0x00002ecc  size 0x34

void FUN_00002ecc(int param_1)

{
  FUN_00004734(&DAT_000065a8 + param_1 * 0xa0);
  return;
}


// 0x00002f00  size 0x34

void FUN_00002f00(int param_1)

{
  FUN_00004790(&DAT_000065a8 + param_1 * 0xa0);
  return;
}


// 0x00002f34  size 0x34

void FUN_00002f34(int param_1)

{
  FUN_000047cc(&DAT_000065a8 + param_1 * 0xa0);
  return;
}


// 0x00002f68  size 0x34

void FUN_00002f68(int param_1)

{
  FUN_00004858(&DAT_000065a8 + param_1 * 0xa0);
  return;
}


// 0x00002f9c  size 0x34

void FUN_00002f9c(int param_1)

{
  FUN_00003554(param_1 * 0xa0 + 0x65e8);
  return;
}


// 0x00002fd0  size 0x38

undefined4 FUN_00002fd0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = xvi_iop_19();
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    uVar2 = 0;
  }
  return uVar2;
}


// 0x00003008  size 0x38

undefined4 FUN_00003008(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = xvi_iop_20();
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    uVar2 = 0;
  }
  return uVar2;
}


// 0x00003040  size 0x60

void FUN_00003040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined *local_c;
  
  local_1c = 1;
  local_18 = 0x40;
  local_10 = 0x40;
  local_14 = &DAT_00006720;
  local_c = &DAT_00006760;
  DAT_00006728 = param_5;
  DAT_00006720 = param_3;
  DAT_00006724 = param_4;
  local_20 = param_2;
  xvi_iop_22(param_1,&local_20);
  return;
}


// 0x000030a0  size 0x28

void FUN_000030a0(undefined4 *param_1,undefined4 param_2)

{
  param_1[3] = 1;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0x3fff;
  param_1[5] = 0x3fff;
  param_1[6] = 0;
  return;
}


// 0x000030c8  size 0x8

void FUN_000030c8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// 0x000030d0  size 0x10

void FUN_000030d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  return;
}


// 0x000030e0  size 0x2c

void FUN_000030e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  if (param_4 != 0) {
    FUN_000032fc();
  }
  return;
}


// 0x0000310c  size 0x70

void FUN_0000310c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 2) == 0) {
    uVar1 = *param_1;
    uVar2 = 1 << (*(uint *)(param_1 + 4) & 0x1f);
  }
  else {
    uVar1 = *param_1;
    uVar2 = 1 << (*(uint *)(param_1 + 4) & 0x1f) | 1 << (*(uint *)(param_1 + 6) & 0x1f);
  }
  sceSdSetSwitch(uVar1 | 0x1500,uVar2);
  FUN_000032fc(param_1);
  return;
}


// 0x0000317c  size 0x180

void FUN_0000317c(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 2) == 0) {
      sceSdSetParam(*param_1 | param_1[4] << 1 | 0x200,0);
      sceSdSetParam(*param_1 | param_1[4] << 1 | 0x400,0x1fc0);
      uVar1 = param_1[4];
    }
    else {
      sceSdSetParam(*param_1 | param_1[4] << 1 | 0x200,0);
      sceSdSetParam(*param_1 | param_1[4] << 1 | 0x400,0x1fc0);
      sceSdSetAddr(*param_1 | param_1[4] << 1 | 0x2040,0);
      sceSdSetParam(*param_1 | param_1[6] << 1 | 0x200,0);
      sceSdSetParam(*param_1 | param_1[6] << 1 | 0x400,0x1fc0);
      uVar1 = param_1[6];
    }
    sceSdSetAddr(*param_1 | uVar1 << 1 | 0x2040,0);
  }
  if (*(int *)(param_1 + 2) == 0) {
    uVar1 = *param_1;
    uVar2 = 1 << (*(uint *)(param_1 + 4) & 0x1f);
  }
  else {
    uVar1 = *param_1;
    uVar2 = 1 << (*(uint *)(param_1 + 4) & 0x1f) | 1 << (*(uint *)(param_1 + 6) & 0x1f);
  }
  sceSdSetSwitch(uVar1 | 0x1600,uVar2);
  return;
}


// 0x000032fc  size 0x110

void FUN_000032fc(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 8) & 0x3fff;
  uVar3 = *(uint *)(param_1 + 10) & 0x3fff;
  uVar4 = 0;
  if ((*(uint *)(param_1 + 8) & 0x4000) != 0) {
    uVar4 = uVar2;
  }
  uVar5 = 0;
  if ((*(uint *)(param_1 + 10) & 0x4000) != 0) {
    uVar5 = uVar3;
  }
  if (*(int *)(param_1 + 2) == 0) {
    sceSdSetParam(*param_1 | param_1[4] << 1,uVar2);
    uVar1 = param_1[4];
  }
  else {
    sceSdSetParam(*param_1 | param_1[4] << 1,uVar2);
    sceSdSetParam(*param_1 | param_1[4] << 1 | 0x100,uVar4);
    sceSdSetParam(*param_1 | param_1[6] << 1,uVar5);
    uVar1 = param_1[6];
  }
  sceSdSetParam(*param_1 | uVar1 << 1 | 0x100,uVar3);
  return;
}


// 0x0000340c  size 0x64

void FUN_0000340c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}


// 0x00003470  size 0x70

undefined4 FUN_00003470(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_0000340c(param_1,*param_1);
  param_1[3] = *param_2;
  param_1[8] = param_2[2];
  param_1[9] = param_2[1];
  uVar1 = param_2[3];
  param_1[0xd] = 2;
  param_1[0xc] = uVar1;
  return 0;
}


// 0x000034e0  size 0x30

undefined4 FUN_000034e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return 0;
}


// 0x00003510  size 0x44

undefined4 FUN_00003510(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return 0;
}


// 0x00003554  size 0x9c

undefined4 FUN_00003554(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_00003510();
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x50) = 1;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (param_2 == -0x80000000)) {
      trap(0x1800);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_2 / iVar1;
  }
  return 0;
}


// 0x000035f0  size 0xa20

uint Stream_Error(short *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x2e) == 0) {
    *(undefined4 *)(param_1 + 0x22) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_2;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x2e] = 1;
    param_1[0x2f] = 0;
  }
  if (*(int *)(param_1 + 0x2e) == 1) {
    if (*(int *)(param_1 + 0x1a) - *(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x24)) {
      printf(s_Stream>_Error_SPU_not_empty____00005e50);
      printf(s_send_cnts____d_00005e70,*(undefined4 *)(param_1 + 0x24));
      printf(s_spu_num____d_00005e80,*(undefined4 *)(param_1 + 0x1a));
      printf(s_spu_cnt____d_00005e90,*(undefined4 *)(param_1 + 0x1c));
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x24)) {
      if ((*(int *)(param_1 + 10) != *(int *)(param_1 + 8)) ||
         (iVar4 = *(int *)(param_1 + 0xc), iVar4 == 0)) {
        if (DAT_000060a8 == 0) {
          return 0xffffffff;
        }
        Kprintf(s_Stream>_Error_IOP_data_low____00005ec8);
        if (DAT_000060a8 == 0) {
          return 0xffffffff;
        }
        Kprintf(s_iop_bytes____d_00005ee8,*(undefined4 *)(param_1 + 0xc));
        if (DAT_000060a8 == 0) {
          return 0xffffffff;
        }
        Kprintf(s_iop_entry____d_00005ef8,*(undefined4 *)(param_1 + 10));
        if (DAT_000060a8 == 0) {
          return 0xffffffff;
        }
        Kprintf(s_iop_total____d_00005f08,*(undefined4 *)(param_1 + 8));
        return 0xffffffff;
      }
      iVar3 = *(int *)(param_1 + 6);
      iVar9 = iVar4 / iVar3;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      *(int *)(param_1 + 0x24) = iVar9;
      *(int *)(param_1 + 0x22) = iVar9;
      bVar1 = DAT_000060a8 != 0;
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 6) * iVar9;
      if (((bVar1) && (Kprintf(s_Stream>_odd_data_send_00005ea0), DAT_000060a8 != 0)) &&
         (Kprintf(s_send_cnts____d_00005e70,*(undefined4 *)(param_1 + 0x24)), DAT_000060a8 != 0)) {
        Kprintf(s_iop_odd____d_00005eb8,*(undefined4 *)(param_1 + 0xe));
      }
    }
    if (*(int *)(param_1 + 0x2e) == 1) {
      iVar4 = *(int *)(param_1 + 0x12);
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 == -1) && (*(int *)(param_1 + 0x16) == -0x80000000)) {
        trap(0x1800);
      }
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
      *(int *)(param_1 + 0x2a) =
           *(int *)(param_1 + 0x10) + (*(int *)(param_1 + 0x16) % iVar4) * *(int *)(param_1 + 6);
      if (*(int *)(param_1 + 0x28) == 0) {
        if (*(int *)(param_1 + 2) == 0) {
          iVar4 = *(int *)(param_1 + 0x12);
          if (iVar4 == 0) {
            trap(0x1c00);
          }
          if ((iVar4 == -1) && (*(int *)(param_1 + 0x16) == -0x80000000)) {
            trap(0x1800);
          }
          iVar4 = (*(int *)(param_1 + 0x16) % iVar4) * *(int *)(param_1 + 6);
          iVar3 = *(int *)(param_1 + 0xe);
          if (*(int *)(param_1 + 0xe) == 0) {
            iVar3 = *(int *)(param_1 + 6);
          }
          if ((*(uint *)(param_1 + 0x1e) & 1) != 0) {
            iVar4 = *(int *)(param_1 + 0x10) + iVar4;
            *(undefined1 *)(iVar4 + 1) = 2;
            *(undefined1 *)(iVar4 + 0x11) = 2;
            iVar4 = iVar4 + iVar3;
            goto LAB_00003a28;
          }
          iVar4 = *(int *)(param_1 + 0x10) + iVar4;
          *(undefined1 *)(iVar4 + 1) = 6;
          *(undefined1 *)(iVar4 + 0x11) = 2;
          *(undefined1 *)(iVar4 + iVar3 + -0xf) = 2;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x12);
          if (iVar4 == 0) {
            trap(0x1c00);
          }
          if ((iVar4 == -1) && (*(int *)(param_1 + 0x16) == -0x80000000)) {
            trap(0x1800);
          }
          iVar4 = (*(int *)(param_1 + 0x16) % iVar4) * *(int *)(param_1 + 6);
          iVar9 = *(int *)(param_1 + 6) / 2;
          iVar3 = *(int *)(param_1 + 0xe) / 2;
          if (*(int *)(param_1 + 0xe) / 2 == 0) {
            iVar3 = iVar9;
          }
          if ((*(uint *)(param_1 + 0x1e) & 1) != 0) {
            iVar7 = *(int *)(param_1 + 0x10) + iVar4;
            *(undefined1 *)(iVar7 + 1) = 2;
            *(undefined1 *)(iVar7 + 0x11) = 2;
            *(undefined1 *)(iVar7 + iVar3 + -0xf) = 3;
            iVar9 = *(int *)(param_1 + 0x10) + iVar4 + iVar9;
            *(undefined1 *)(iVar9 + 1) = 2;
            *(undefined1 *)(iVar9 + 0x11) = 2;
            goto LAB_00003b2c;
          }
          iVar7 = *(int *)(param_1 + 0x10) + iVar4;
          *(undefined1 *)(iVar7 + 1) = 6;
          *(undefined1 *)(iVar7 + 0x11) = 2;
          *(undefined1 *)(iVar7 + iVar3 + -0xf) = 2;
          iVar9 = *(int *)(param_1 + 0x10) + iVar4 + iVar9;
          *(undefined1 *)(iVar9 + 1) = 6;
          *(undefined1 *)(iVar9 + 0x11) = 2;
          *(undefined1 *)(iVar9 + iVar3 + -0xf) = 2;
        }
      }
      else if (*(int *)(param_1 + 2) == 0) {
        iVar3 = *(int *)(param_1 + 6);
        iVar4 = *(int *)(param_1 + 0x24);
        iVar7 = *(int *)(param_1 + 0x10);
        iVar9 = *(int *)(param_1 + 0xe);
        *(undefined1 *)(iVar7 + 1) = 6;
        *(undefined1 *)(iVar7 + 0x11) = 2;
        iVar4 = *(int *)(param_1 + 0x10) + iVar4 * iVar3 + iVar9;
LAB_00003a28:
        *(undefined1 *)(iVar4 + -0xf) = 3;
      }
      else {
        iVar9 = *(int *)(param_1 + 6) / 2;
        iVar3 = *(int *)(param_1 + 0xe) / 2;
        if (iVar3 == 0) {
          iVar3 = -iVar9;
        }
        iVar3 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 6) + iVar3;
        iVar4 = *(int *)(param_1 + 0x10);
        *(undefined1 *)(iVar4 + 1) = 6;
        *(undefined1 *)(iVar4 + 0x11) = 2;
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar3 + -0xf) = 3;
        iVar4 = *(int *)(param_1 + 0x10);
        *(undefined1 *)(iVar4 + iVar9 + 1) = 6;
        *(undefined1 *)(iVar4 + iVar9 + 0x11) = 2;
        iVar9 = *(int *)(param_1 + 0x10) + iVar9;
LAB_00003b2c:
        *(undefined1 *)(iVar9 + iVar3 + -0xf) = 3;
      }
      FlushDcache();
      param_1[0x28] = 0;
      param_1[0x29] = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x22) - iVar4;
    if (*(int *)(param_1 + 2) == 0) {
      iVar9 = *(int *)(param_1 + 0x12);
      if (iVar9 == 0) {
        trap(0x1c00);
      }
      if ((iVar9 == -1) && (*(int *)(param_1 + 0x16) + iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      iVar5 = *(int *)(param_1 + 0x1a);
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (*(int *)(param_1 + 0x1e) + iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      iVar8 = *(int *)(param_1 + 6);
      iVar7 = ((*(int *)(param_1 + 0x16) + iVar3) % iVar9) * iVar8;
      iVar3 = ((*(int *)(param_1 + 0x1e) + iVar3) % iVar5) * iVar8;
      *(int *)(param_1 + 0x24) = iVar4 + -1;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x12);
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 == -1) && (*(int *)(param_1 + 0x16) + iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      iVar9 = *(int *)(param_1 + 0x1a);
      if (iVar9 == 0) {
        trap(0x1c00);
      }
      if ((iVar9 == -1) && (*(int *)(param_1 + 0x1e) + iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      iVar5 = *(int *)(param_1 + 0x26);
      iVar8 = *(int *)(param_1 + 6) / 2;
      iVar7 = ((*(int *)(param_1 + 0x16) + iVar3) % iVar4) * *(int *)(param_1 + 6) + iVar8 * iVar5;
      *(int *)(param_1 + 0x26) = iVar5 + 1;
      iVar3 = ((*(int *)(param_1 + 0x1e) + iVar3) % iVar9) * iVar8 + iVar5 * iVar9 * iVar8;
      if (1 < iVar5 + 1) {
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      }
    }
    iVar4 = sceSdVoiceTrans((int)*param_1,0,*(int *)(param_1 + 0x10) + iVar7,
                            *(int *)(param_1 + 0x18) + iVar3,iVar8);
    bVar2 = true;
    if (iVar4 < 0) {
      return 0xffffffff;
    }
  }
  if (bVar2) {
LAB_00003f20:
    iVar4 = *(int *)(param_1 + 0x24);
LAB_00003f28:
    if (((iVar4 == 0) && (*(int *)(param_1 + 0x26) == 0)) && (*(int *)(param_1 + 0xe) == 0)) {
      iVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 6);
      *(int *)(param_1 + 0xc) = iVar4;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 0xc) = iVar4;
      iVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x14) = iVar4;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      iVar3 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x14) = iVar4;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      *(int *)(param_1 + 0x16) = *(int *)(param_1 + 0x16) + iVar3;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3;
      *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + iVar3;
      goto LAB_00003fe8;
    }
  }
  else if (*(int *)(param_1 + 0x24) == 0) {
    iVar3 = *(int *)(param_1 + 0xe);
    iVar4 = 0;
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 2) == 0) {
        iVar9 = *(int *)(param_1 + 0x12);
        iVar4 = *(int *)(param_1 + 0x16) + *(int *)(param_1 + 0x2c);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && (iVar4 == -0x80000000)) {
          trap(0x1800);
        }
        iVar5 = *(int *)(param_1 + 0x1a);
        iVar7 = *(int *)(param_1 + 0x1e) + *(int *)(param_1 + 0x2c);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && (iVar7 == -0x80000000)) {
          trap(0x1800);
        }
        iVar4 = (iVar4 % iVar9) * *(int *)(param_1 + 6);
        iVar9 = (iVar7 % iVar5) * *(int *)(param_1 + 6);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar3;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x12);
        iVar4 = *(int *)(param_1 + 0x16) + *(int *)(param_1 + 0x2c);
        if (iVar9 == 0) {
          trap(0x1c00);
        }
        if ((iVar9 == -1) && (iVar4 == -0x80000000)) {
          trap(0x1800);
        }
        iVar5 = *(int *)(param_1 + 0x1a);
        iVar7 = *(int *)(param_1 + 0x1e) + *(int *)(param_1 + 0x2c);
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && (iVar7 == -0x80000000)) {
          trap(0x1800);
        }
        iVar6 = *(int *)(param_1 + 0x26);
        iVar8 = *(int *)(param_1 + 6) / 2;
        iVar4 = (iVar4 % iVar9) * *(int *)(param_1 + 6) + iVar8 * iVar6;
        iVar3 = iVar3 / 2;
        *(int *)(param_1 + 0x26) = iVar6 + 1;
        iVar9 = (iVar7 % iVar5) * iVar8 + iVar6 * iVar5 * iVar8;
        if (1 < iVar6 + 1) {
          iVar7 = *(int *)(param_1 + 0xe);
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar7;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        }
      }
      iVar4 = sceSdVoiceTrans((int)*param_1,0,*(int *)(param_1 + 0x10) + iVar4,
                              *(int *)(param_1 + 0x18) + iVar9,iVar3);
      if (iVar4 < 0) {
        return 0xffffffff;
      }
      goto LAB_00003f20;
    }
    goto LAB_00003f28;
  }
  *(int *)(param_1 + 0x2e) = *(int *)(param_1 + 0x2e) + 1;
LAB_00003fe8:
  return *(uint *)(param_1 + 0x24) | *(uint *)(param_1 + 0x26) | *(uint *)(param_1 + 0xe);
}


// 0x00004010  size 0x30

undefined4 FUN_00004010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) &&
     (uVar1 = 1, *(int *)(param_1 + 0x18) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x00004040  size 0xc

undefined4 FUN_00004040(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// 0x0000404c  size 0x1c

void FUN_0000404c(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  return;
}


// 0x00004068  size 0x28

void FUN_00004068(ushort *param_1,undefined2 param_2)

{
  sceSdSetCoreAttr(*param_1 | 4,param_2);
  return;
}


// 0x00004090  size 0x208

void FUN_00004090(ushort *param_1)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar3 = FUN_00004010();
  if ((iVar3 == 1) && (*(int *)(param_1 + 0x1c) == 1)) {
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 6) * *(int *)(param_1 + 0x1a)) {
      iVar4 = *(int *)(param_1 + 8);
      param_1[0x20] = 0;
      param_1[0x21] = 0;
    }
    bVar1 = iVar4 == 0;
    iVar4 = iVar4 + -0x10;
    if (bVar1) {
      iVar3 = *(int *)(param_1 + 6);
      iVar5 = *(int *)(param_1 + 8) % iVar3;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (*(int *)(param_1 + 8) == -0x80000000)) {
        trap(0x1800);
      }
      iVar4 = iVar5 + -0x10;
      if (iVar5 == 0) {
        iVar4 = iVar3 + -0x10;
      }
    }
    if (DAT_000060a8 != 0) {
      Kprintf(s_odd_inter____d____d_00005f18,iVar4,*(undefined4 *)(param_1 + 0x20));
    }
  }
  else {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  if (*(int *)(param_1 + 2) == 0) {
    iVar3 = *(int *)(param_1 + 0x1a);
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && (*(int *)(param_1 + 0x20) == -0x80000000)) {
      trap(0x1800);
    }
    iVar4 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 6) * (*(int *)(param_1 + 0x20) % iVar3) +
            iVar4;
    if (DAT_000060a8 != 0) {
      Kprintf(s_int_addr_inter____d_00005f30,iVar4 - *(int *)(param_1 + 0x18));
    }
    uVar2 = *param_1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1a);
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && (*(int *)(param_1 + 0x20) == -0x80000000)) {
      trap(0x1800);
    }
    uVar2 = *param_1;
    iVar4 = *(int *)(param_1 + 0x18) +
            (*(int *)(param_1 + 6) / 2) * (*(int *)(param_1 + 0x20) % iVar3) + iVar4 / 2;
  }
  sceSdSetAddr(uVar2 | 0x1f00,iVar4);
  return;
}


// 0x00004298  size 0x1d8

void FUN_00004298(ushort *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 2) == 0) {
    sceSdSetParam(*param_1 | *(short *)(param_2 + 8) << 1 | 0x200,param_1[4]);
    sceSdSetParam(*param_1 | *(short *)(param_2 + 8) << 1 | 0x300,0xf);
    sceSdSetParam(*param_1 | *(short *)(param_2 + 8) << 1 | 0x400,
                  *(ushort *)(param_2 + 0x18) | 0x1fc0);
    iVar2 = *(int *)(param_1 + 0x18);
    uVar1 = *param_1 | *(short *)(param_2 + 8) << 1;
  }
  else {
    sceSdSetParam(*param_1 | *(short *)(param_2 + 8) << 1 | 0x200,param_1[4]);
    sceSdSetParam(*param_1 | *(short *)(param_2 + 8) << 1 | 0x300,0xf);
    sceSdSetParam(*param_1 | *(short *)(param_2 + 8) << 1 | 0x400,
                  *(ushort *)(param_2 + 0x18) | 0x1fc0);
    sceSdSetAddr(*param_1 | *(short *)(param_2 + 8) << 1 | 0x2040,*(undefined4 *)(param_1 + 0x18));
    sceSdSetParam(*param_1 | *(short *)(param_2 + 0xc) << 1 | 0x200,param_1[4]);
    sceSdSetParam(*param_1 | *(short *)(param_2 + 0xc) << 1 | 0x300,0xf);
    sceSdSetParam(*param_1 | *(short *)(param_2 + 0xc) << 1 | 0x400,
                  *(ushort *)(param_2 + 0x18) | 0x1fc0);
    uVar1 = *param_1 | *(short *)(param_2 + 0xc) << 1;
    iVar2 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 6);
  }
  sceSdSetAddr(uVar1 | 0x2040,iVar2);
  FUN_00004090(param_1);
  return;
}


// 0x00004470  size 0x60

void FUN_00004470(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_000030a0(param_1 + 9);
  FUN_0000340c(param_1 + 0x10,param_2);
  return;
}


// 0x000044d0  size 0x12c

undefined4 Stream_Semapho(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  code *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  local_40 = 0;
  local_3c = 1;
  local_48[0] = 0;
  iVar1 = CreateSema(local_48);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 < 1) {
    printf(s_Stream>_Semapho_create_failed_00005f48);
    uVar2 = 0xffffffff;
  }
  else {
    local_30 = 0;
    local_2c = 1;
    local_38[0] = 0;
    iVar1 = CreateSema(local_38);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 < 1) {
      printf(s_Stream>_INT_Semapho_create_faile_00005f68);
      uVar2 = 0xffffffff;
    }
    else {
      local_28 = 0x2000000;
      local_20 = Stream_PreLoad;
      local_1c = 0x4000;
      local_24 = 0;
      local_18 = param_2;
      iVar1 = CreateThread(&local_28);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 < 1) {
        printf(s_Stream>_Thread_create_failed_00005f8c);
        DeleteSema(*(undefined4 *)(param_1 + 8));
        uVar2 = 0xffffffff;
      }
      else {
        iVar1 = StartThread(iVar1,param_1);
        uVar2 = 0;
        if (iVar1 != 0) {
          printf(s_Stream>_Thread_start_failed_00005fac);
          DeleteSema(*(undefined4 *)(param_1 + 8));
          DeleteThread(*(undefined4 *)(param_1 + 4));
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}


// 0x000045fc  size 0x94

undefined4 Stream_Thread(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = TerminateThread(*(undefined4 *)(param_1 + 4));
  if ((iVar1 == 0) && (iVar1 = DeleteThread(*(undefined4 *)(param_1 + 4)), iVar1 == 0)) {
    iVar1 = DeleteSema(*(undefined4 *)(param_1 + 0xc));
    pcVar2 = s_Stream>_INT_Semapho_delete_faile_00005fec;
    if (iVar1 == 0) {
      iVar1 = DeleteSema(*(undefined4 *)(param_1 + 8));
      if (iVar1 == 0) {
        return 0;
      }
      pcVar2 = s_Stream>_Semapho_delete_failed_00006010;
    }
  }
  else {
    pcVar2 = s_Stream>_Thread_delete_failed_00005fcc;
  }
  printf(pcVar2);
  return 0xffffffff;
}


// 0x00004690  size 0x40

undefined4 FUN_00004690(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(&DAT_000065b4 + param_1 * 0xa0);
  (&DAT_000065b8)[param_1 * 0x28] = 2;
  iSignalSema(uVar1);
  return 1;
}


// 0x000046d0  size 0x64

undefined4 FUN_000046d0(uint param_1)

{
  if ((param_1 & 1) != 0) {
    DAT_000065b8 = 3;
    iSignalSema(DAT_000065b0);
  }
  if ((param_1 & 2) != 0) {
    DAT_00006658 = 3;
    iSignalSema(DAT_00006650);
  }
  return 1;
}


// 0x00004734  size 0x5c

undefined4 FUN_00004734(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00003554(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x14) = 1;
    *(undefined4 *)(param_1 + 0x18) = param_3;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    SignalSema(*(undefined4 *)(param_1 + 8));
  }
  return 0;
}


// 0x00004790  size 0x3c

undefined4 FUN_00004790(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    SignalSema(*(undefined4 *)(param_1 + 8));
  }
  return 0;
}


// 0x000047cc  size 0x8c

undefined4 FUN_000047cc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x14) == 4) {
    if (*(int *)(param_1 + 0x1c) == param_2) {
      uVar1 = 0xffffffff;
    }
    else {
      if (param_2 == 0) {
        FUN_00004068(param_1 + 0x40,1);
        FUN_0000310c(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        FUN_0000317c(param_1 + 0x24,0);
        FUN_00004068(param_1 + 0x40,0);
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


// 0x00004858  size 0x38

undefined4 FUN_00004858(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 4) {
    *(undefined4 *)(param_1 + 0x14) = 3;
    SignalSema(*(undefined4 *)(param_1 + 8));
  }
  return 0;
}


// 0x00004890  size 0x42c

void Stream_PreLoad(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_20 [2];
  
  puVar6 = param_1 + 0x10;
switchD_000048f4_caseD_0:
  if (param_1[4] == 0) {
    WaitSema(param_1[2]);
  }
  switch(param_1[5]) {
  default:
    goto switchD_000048f4_caseD_0;
  case 1:
    CpuSuspendIntr(local_20);
    FUN_00004068(param_1 + 0x10,0);
    FUN_0000317c(param_1 + 9,0);
    CpuResumeIntr(local_20[0]);
    do {
      CpuSuspendIntr(local_20);
      iVar1 = Stream_Error(param_1 + 0x10,param_1[0x1d]);
      CpuResumeIntr(local_20[0]);
      if (iVar1 < 0) goto LAB_00004970;
      WaitSema(param_1[3],0x405);
    } while (0 < iVar1);
    uVar2 = 0x403;
    if (iVar1 < 0) {
LAB_00004970:
      uVar2 = 0x405;
      iVar1 = 0;
      uVar3 = param_1[8];
      uVar4 = *param_1;
      uVar5 = 0;
    }
    else {
      iVar1 = param_1[0x26] * param_1[0x13];
      uVar5 = param_1[0x25];
      uVar3 = param_1[8];
      uVar4 = *param_1;
    }
    FUN_00003040(uVar3,uVar2,uVar4,uVar5,iVar1);
    iVar1 = DAT_000060a8;
    if (param_1[6] != 0) {
      param_1[4] = 1;
      param_1[5] = 2;
      if (iVar1 != 0) {
        Kprintf(s_Stream>_PreLoad_Start_00006030);
      }
      goto switchD_000048f4_caseD_0;
    }
    break;
  case 2:
    CpuSuspendIntr(local_20);
    FUN_00004298(puVar6,param_1 + 9);
    FUN_0000310c(param_1 + 9);
    CpuResumeIntr(local_20[0]);
    WaitVblank();
    WaitNonVblank();
    CpuSuspendIntr(local_20);
    FUN_00004068(puVar6,1);
    CpuResumeIntr(local_20[0]);
    FUN_00003040(param_1[8],0x400,*param_1,0,0);
    param_1[6] = 0;
    param_1[4] = 0;
    param_1[5] = 4;
    goto switchD_000048f4_caseD_0;
  case 3:
    CpuSuspendIntr(local_20);
    FUN_00004068(puVar6,0);
    FUN_0000317c(param_1 + 9,1);
    FUN_00003510(puVar6);
    CpuResumeIntr(local_20[0]);
    FUN_00003040(param_1[8],0x401,*param_1,0,0);
    break;
  case 4:
    iVar1 = FUN_00004040(puVar6);
    if (iVar1 != 0) {
      FUN_0000404c(puVar6);
    }
    iVar1 = FUN_00004010(puVar6);
    if (iVar1 == 0) {
      CpuSuspendIntr(local_20);
      FUN_00004068(puVar6,0);
      CpuResumeIntr(local_20[0]);
      uVar2 = FUN_00003040(param_1[8],0x404,*param_1,0,0);
      CpuSuspendIntr(local_20);
      FUN_00003554(puVar6,uVar2);
      CpuResumeIntr(local_20[0]);
      do {
        CpuSuspendIntr(local_20);
        iVar1 = Stream_Error(param_1 + 0x10,1);
        CpuResumeIntr(local_20[0]);
        if (iVar1 < 0) goto LAB_00004b98;
        WaitSema(param_1[3],0x405);
      } while (0 < iVar1);
      uVar2 = 0x403;
      if (iVar1 < 0) {
LAB_00004b98:
        uVar2 = 0x405;
        iVar7 = 0;
        uVar3 = param_1[8];
        uVar4 = *param_1;
        uVar5 = 0;
      }
      else {
        iVar7 = param_1[0x26] * param_1[0x13];
        uVar5 = param_1[0x25];
        uVar3 = param_1[8];
        uVar4 = *param_1;
      }
      FUN_00003040(uVar3,uVar2,uVar4,uVar5,iVar7);
      if (iVar1 < 0) {
        CpuSuspendIntr(local_20);
        FUN_0000317c(param_1 + 9,1);
        CpuResumeIntr(local_20[0]);
        goto LAB_00004c70;
      }
      CpuSuspendIntr(local_20);
LAB_00004c94:
      FUN_00004090(puVar6);
      FUN_00004068(puVar6,1);
      CpuResumeIntr(local_20[0]);
    }
    else {
      iVar1 = FUN_00004040(puVar6);
      if (iVar1 != 0) {
        CpuSuspendIntr(local_20);
        FUN_00004068(puVar6,0);
        goto LAB_00004c94;
      }
      CpuSuspendIntr(local_20);
      FUN_00004068(puVar6,0);
      FUN_0000317c(param_1 + 9,1);
      CpuResumeIntr(local_20[0]);
      FUN_00003040(param_1[8],0x402,*param_1,0,0);
LAB_00004c70:
      FUN_00003510(param_1 + 0x10);
      param_1[5] = 0;
    }
    param_1[4] = 0;
    goto switchD_000048f4_caseD_0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  goto switchD_000048f4_caseD_0;
}


// 0x00004d44  size 0x8

void sceSdInit(void)

{
  return;
}


// 0x00004d4c  size 0x8

void sceSdSetParam(void)

{
  return;
}


// 0x00004d54  size 0x8

void sceSdGetParam(void)

{
  return;
}


// 0x00004d5c  size 0x8

void sceSdSetSwitch(void)

{
  return;
}


// 0x00004d64  size 0x8

void sceSdGetSwitch(void)

{
  return;
}


// 0x00004d6c  size 0x8

void sceSdSetAddr(void)

{
  return;
}


// 0x00004d74  size 0x8

void sceSdGetAddr(void)

{
  return;
}


// 0x00004d7c  size 0x8

void sceSdSetCoreAttr(void)

{
  return;
}


// 0x00004d84  size 0x8

void sceSdGetCoreAttr(void)

{
  return;
}


// 0x00004d8c  size 0x8

void sceSdProcBatch(void)

{
  return;
}


// 0x00004d94  size 0x8

void sceSdVoiceTrans(void)

{
  return;
}


// 0x00004d9c  size 0x8

void sceSdBlockTrans(void)

{
  return;
}


// 0x00004da4  size 0x8

void sceSdVoiceTransStatus(void)

{
  return;
}


// 0x00004dac  size 0x8

void sceSdBlockTransStatus(void)

{
  return;
}


// 0x00004db4  size 0x8

void sceSdSetEffectAttr(void)

{
  return;
}


// 0x00004dbc  size 0x8

void sceSdGetEffectAttr(void)

{
  return;
}


// 0x00004dc4  size 0x8

void sceSdClearEffectWorkArea(void)

{
  return;
}


// 0x00004dcc  size 0x8

void sceSdSetTransIntrHandler(void)

{
  return;
}


// 0x00004dd4  size 0x8

void sceSdSetSpu2IntrHandler(void)

{
  return;
}


// 0x00004df8  size 0x8

void modhsyn_4(void)

{
  return;
}


// 0x00004e00  size 0x8

void modhsyn_5(void)

{
  return;
}


// 0x00004e08  size 0x8

void modhsyn_6(void)

{
  return;
}


// 0x00004e10  size 0x8

void modhsyn_8(void)

{
  return;
}


// 0x00004e18  size 0x8

void modhsyn_10(void)

{
  return;
}


// 0x00004e20  size 0x8

void modhsyn_11(void)

{
  return;
}


// 0x00004e28  size 0x8

void modhsyn_12(void)

{
  return;
}


// 0x00004e30  size 0x8

void modhsyn_13(void)

{
  return;
}


// 0x00004e38  size 0x8

void modhsyn_15(void)

{
  return;
}


// 0x00004e40  size 0x8

void modhsyn_17(void)

{
  return;
}


// 0x00004e48  size 0x8

void modhsyn_18(void)

{
  return;
}


// 0x00004e6c  size 0x8

void modmidi_4(void)

{
  return;
}


// 0x00004e74  size 0x8

void modmidi_5(void)

{
  return;
}


// 0x00004e7c  size 0x8

void modmidi_6(void)

{
  return;
}


// 0x00004e84  size 0x8

void modmidi_7(void)

{
  return;
}


// 0x00004e8c  size 0x8

void modmidi_8(void)

{
  return;
}


// 0x00004e94  size 0x8

void modmidi_13(void)

{
  return;
}


// 0x00004e9c  size 0x8

void modmidi_14(void)

{
  return;
}


// 0x00004ea4  size 0x8

void modmidi_15(void)

{
  return;
}


// 0x00004eac  size 0x8

void modmidi_16(void)

{
  return;
}


// 0x00004eb4  size 0x8

void modmidi_17(void)

{
  return;
}


// 0x00004ebc  size 0x8

void modmidi_18(void)

{
  return;
}


// 0x00004ec4  size 0x8

void modmidi_19(void)

{
  return;
}


// 0x00004ee8  size 0x8

void xvi_iop_4(void)

{
  return;
}


// 0x00004ef0  size 0x8

void xvi_iop_5(void)

{
  return;
}


// 0x00004ef8  size 0x8

void xvi_iop_6(void)

{
  return;
}


// 0x00004f00  size 0x8

void xvi_iop_7(void)

{
  return;
}


// 0x00004f08  size 0x8

void xvi_iop_9(void)

{
  return;
}


// 0x00004f10  size 0x8

void xvi_iop_17(void)

{
  return;
}


// 0x00004f18  size 0x8

void xvi_iop_19(void)

{
  return;
}


// 0x00004f20  size 0x8

void xvi_iop_20(void)

{
  return;
}


// 0x00004f28  size 0x8

void xvi_iop_22(void)

{
  return;
}


// 0x00004f4c  size 0x8

void Kprintf(void)

{
  return;
}


// 0x00004f70  size 0x8

void CpuSuspendIntr(void)

{
  return;
}


// 0x00004f78  size 0x8

void CpuResumeIntr(void)

{
  return;
}


// 0x00004f9c  size 0x8

void FlushDcache(void)

{
  return;
}


// 0x00004fc0  size 0x8

void printf(void)

{
  return;
}


// 0x00004fe4  size 0x8

void memcpy(void)

{
  return;
}


// 0x00004fec  size 0x8

void memset(void)

{
  return;
}


// 0x00005010  size 0x8

void CreateThread(void)

{
  return;
}


// 0x00005018  size 0x8

void DeleteThread(void)

{
  return;
}


// 0x00005020  size 0x8

void StartThread(void)

{
  return;
}


// 0x00005028  size 0x8

void TerminateThread(void)

{
  return;
}


// 0x00005030  size 0x8

void SleepThread(void)

{
  return;
}


// 0x00005038  size 0x8

void iWakeupThread(void)

{
  return;
}


// 0x00005040  size 0x8

void USec2SysClock(void)

{
  return;
}


// 0x00005064  size 0x8

void CreateSema(void)

{
  return;
}


// 0x0000506c  size 0x8

void DeleteSema(void)

{
  return;
}


// 0x00005074  size 0x8

void SignalSema(void)

{
  return;
}


// 0x0000507c  size 0x8

void iSignalSema(void)

{
  return;
}


// 0x00005084  size 0x8

void WaitSema(void)

{
  return;
}


// 0x000050a8  size 0x8

void AllocHardTimer(void)

{
  return;
}


// 0x000050b0  size 0x8

void FreeHardTimer(void)

{
  return;
}


// 0x000050b8  size 0x8

void SetTimerHandler(void)

{
  return;
}


// 0x000050c0  size 0x8

void SetupHardTimer(void)

{
  return;
}


// 0x000050c8  size 0x8

void StartHardTimer(void)

{
  return;
}


// 0x000050d0  size 0x8

void StopHardTimer(void)

{
  return;
}


// 0x000050f4  size 0x8

void WaitVblank(void)

{
  return;
}


// 0x000050fc  size 0x8

void WaitNonVblank(void)

{
  return;
}


