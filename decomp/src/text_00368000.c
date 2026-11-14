// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x00368000 - 0x0036c000
#include "ghidra_types.h"

// 0x003685e0  size 0x50
void __sinit_003685e0(void)

{
  List_ctor(0x380380,0);
  puRam00380380 = &DAT_0036e0b0;
  __register_global_object(0x380380,0x1356f0,0x380370);
  return;
}

// 0x00368630  size 0x8c
void __sinit_00368630(void)

{
  __construct_array(0x380610,0x137420,0x1373c0,0x60,0x100);
  __register_global_object(0,0x1373a0,0x3805f8);
  List_ctor(0x386620,0);
  puRam00386620 = &DAT_0036e0c0;
  __register_global_object(0x386620,0x137340,0x386610);
  return;
}

// 0x003686c0  size 0x50
void __sinit_003686c0(void)

{
  __construct_array(0x386650,0x138050,0x137ff0,0x498,2);
  __register_global_object(0,0x138b40,0x386638);
  return;
}

// 0x00368710  size 0x7c
void __sinit_00368710(void)

{
  List_ctor(0x386f94,1);
  List_ctor(0x386fa8,1);
  maybe_ListNode_ctor(0x386fbc,0);
  puRam00386fbc = &DAT_0036e128;
  __register_global_object(0x386f90,0x139e80,0x386f80);
  return;
}

// 0x00368790  size 0x54
void __sinit_00368790(void)

{
  std_ios_base_Init_ctor(0x36f018);
  __register_global_object(0x36f018,0x103050,0x386fd0);
  maybe_std_wios_Init_ctor(0x36f01c);
  __register_global_object(0x36f01c,0x1035a0,0x386fe0);
  return;
}

// 0x003687f0  size 0x34
void __sinit_003687f0(void)

{
  Mutex_Init(0x36f03c);
  __register_global_object(0x36f03c,0x132830,0x387178);
  return;
}

// 0x003688a0  size 0x48
void __sinit_003688a0(void)

{
  Mutex_Init(0x42d84c);
  Mutex_Init(0x42d868);
  __register_global_object(0x42d810,0x157fd0,0x42d7f8);
  return;
}

// 0x003688f0  size 0x54
void __sinit_003688f0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7614);
  __register_global_object((int)register0x000001c0 + -0x7614,0x103050,0x42e340);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7610);
  __register_global_object((int)register0x000001c0 + -0x7610,0x1035a0,0x42e350);
  return;
}

// 0x00368950  size 0x54
void __sinit_00368950(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x760c);
  __register_global_object((int)register0x000001c0 + -0x760c,0x103050,0x42f3a0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7608);
  __register_global_object((int)register0x000001c0 + -0x7608,0x1035a0,0x42f3b0);
  return;
}

// 0x003689b0  size 0x1a8
void __sinit_003689b0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7600);
  __register_global_object((int)register0x000001c0 + -0x7600,0x103050,0x42f410);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x75fc);
  __register_global_object((int)register0x000001c0 + -0x75fc,0x1035a0,0x42f420);
  uRam0042f43c = 0x3f800000;
  uRam0042f45c = 0x3f800000;
  uRam0042f47c = 0x3f800000;
  uRam0042f480 = 0;
  uRam0042f484 = 0xbf350481;
  uRam0042f488 = 0xbf350481;
  uRam0042f490 = 0xbf350481;
  uRam0042f494 = 0;
  uRam0042f498 = 0xbf350481;
  uRam0042f4a0 = 0xbf350481;
  uRam0042f4a4 = 0xbf350481;
  uRam0042f4a8 = 0;
  uRam0042f4b0 = 0x3f350481;
  uRam0042f4b4 = 0;
  uRam0042f4b8 = 0xbf350481;
  uRam0042f4c0 = 0x3f350481;
  uRam0042f4c4 = 0xbf350481;
  uRam0042f4c8 = 0;
  uRam0042f4d0 = 0;
  uRam0042f4d4 = 0x3f350481;
  uRam0042f4d8 = 0xbf350481;
  uRam0042f4e0 = 0xbf350481;
  uRam0042f4e4 = 0x3f350481;
  uRam0042f4e8 = 0;
  uRam0042f4f0 = 0x3f350481;
  uRam0042f4f4 = 0x3f350481;
  uRam0042f4f8 = 0;
  uRam0042f500 = 0;
  uRam0042f504 = 0xbf350481;
  uRam0042f508 = 0x3f350481;
  uRam0042f510 = 0xbf350481;
  uRam0042f514 = 0;
  uRam0042f518 = 0x3f350481;
  uRam0042f520 = 0x3f350481;
  uRam0042f524 = 0;
  uRam0042f528 = 0x3f350481;
  uRam0042f530 = 0;
  uRam0042f534 = 0x3f350481;
  uRam0042f538 = 0x3f350481;
  uRam0042f54c = 0x3f800000;
  return;
}

// 0x00368b60  size 0x60
void __sinit_00368b60(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x75f8);
  __register_global_object((int)register0x000001c0 + -0x75f8,0x103050,0x42f550);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x75f4);
  __register_global_object((int)register0x000001c0 + -0x75f4,0x1035a0,0x42f560);
  PhysBody_ctor(0x42f570);
  return;
}

// 0x00368bc0  size 0x6c
void __sinit_00368bc0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x75e8);
  __register_global_object((int)register0x000001c0 + -0x75e8,0x103050,0x42fb20);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x75e4);
  __register_global_object((int)register0x000001c0 + -0x75e4,0x1035a0,0x42fb30);
  __register_global_object((int)register0x000001c0 + -0x75e0,0x15d1d0,0x42fb40);
  return;
}

// 0x00368c30  size 0x394
void __sinit_00368c30(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x759c);
  __register_global_object((int)register0x000001c0 + -0x759c,0x103050,0x42fb50);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7598);
  __register_global_object((int)register0x000001c0 + -0x7598,0x1035a0,0x42fb60);
  uRam0042fb70 = DAT_0030ace0;
  puRam0042fb78 = PTR_PhysPair_SphereTriangle_0030ace8;
  uRam0042fb7c = DAT_0030acf0;
  uRam0042fb80 = DAT_0030acf4;
  puRam0042fb84 = PTR_LAB_0030acf8;
  uRam0042fb8c = DAT_0030ad04;
  uRam0042fb88 = DAT_0030ad00;
  puRam0042fb90 = PTR_LAB_0030ad08;
  uRam0042fb98 = DAT_0030ad14;
  uRam0042fb94 = DAT_0030ad10;
  puRam0042fb9c = PTR_LAB_0030ad18;
  uRam0042fba4 = DAT_0030ad24;
  uRam0042fba0 = DAT_0030ad20;
  puRam0042fba8 = PTR_PhysPair_RunSphereBox_0030ad28;
  uRam0042fbb0 = DAT_0030ad34;
  uRam0042fbac = DAT_0030ad30;
  puRam0042fbb4 = PTR_PhysPair_RunSphereBox_0030ad38;
  uRam0042fbbc = DAT_0030ad44;
  uRam0042fbb8 = DAT_0030ad40;
  puRam0042fbc0 = PTR_LAB_0030ad48;
  uRam0042fbc8 = DAT_0030ad54;
  uRam0042fbc4 = DAT_0030ad50;
  uRam0042fbd4 = DAT_0030ad64;
  puRam0042fbcc = PTR_PhysPair_RunSphereBox_0030ad58;
  uRam0042fbd0 = DAT_0030ad60;
  puRam0042fbd8 = PTR_PhysPair_RunBoxBox_0030ad68;
  uRam0042fbec = DAT_0030ad80;
  uRam0042fbe0 = DAT_0030ad70;
  uRam0042fbf0 = DAT_0030ad84;
  puRam0042fbe8 = PTR_PhysPair_PointMeshContacts_0030ad78;
  puRam0042fc00 = PTR_PhysPair_BoxMeshContacts_0030ad98;
  puRam0042fbf4 = PTR_PhysPair_BoxMeshContacts_0030ad88;
  uRam0042fc04 = DAT_0030ada0;
  uRam0042fbf8 = DAT_0030ad90;
  uRam0042fbfc = DAT_0030ad94;
  uRam0042fc08 = DAT_0030ada4;
  puRam0042fc0c = PTR_PhysPair_RunBoxMesh_0030ada8;
  uRam0042fc10 = DAT_0030adb0;
  puRam0042fc18 = PTR_PhysPair_RunSphereMesh_0030adb8;
  uRam0042fc14 = DAT_0030adb4;
  uRam0042fc1c = DAT_0030adc0;
  uRam0042fc20 = DAT_0030adc4;
  puRam0042fc24 = PTR_PhysPair_RunSphereMesh_0030adc8;
  uRam0042fc28 = DAT_0030add0;
  puRam0042fc30 = PTR_PhysPair_RunBoxMesh_0030add8;
  uRam0042fc2c = DAT_0030add4;
  uRam0042fc34 = DAT_0030ade0;
  uRam0042fc38 = DAT_0030ade4;
  puRam0042fc3c = PTR_PhysPair_RunSphereMesh_0030ade8;
  uRam0042fc40 = DAT_0030adf0;
  uRam0042fc44 = DAT_0030adf4;
  puRam0042fc48 = PTR_PhysPair_RunBoxPlane_0030adf8;
  return;
}

// 0x00368fd0  size 0x54
void __sinit_00368fd0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7594);
  __register_global_object((int)register0x000001c0 + -0x7594,0x103050,0x42fc50);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7590);
  __register_global_object((int)register0x000001c0 + -0x7590,0x1035a0,0x42fc60);
  return;
}

// 0x00369030  size 0x54
void __sinit_00369030(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x758c);
  __register_global_object((int)register0x000001c0 + -0x758c,0x103050,0x42fc70);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7588);
  __register_global_object((int)register0x000001c0 + -0x7588,0x1035a0,0x42fc80);
  return;
}

// 0x00369090  size 0x120
void __sinit_00369090(void)

{
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  undefined4 uStack_4;
  
  DAT_00362450 = 0x3f800000;
  DAT_00362454 = 0;
  DAT_00362458 = 0;
  DAT_00362460 = 0;
  DAT_00362464 = 0x3f800000;
  DAT_0036246c = uStack_14;
  DAT_00362468 = 0;
  DAT_00362498 = 0;
  DAT_00362470 = 0;
  DAT_0036245c = uStack_4;
  DAT_00362474 = 0;
  DAT_003624a8 = 0;
  DAT_00362478 = 0x3f800000;
  DAT_003624b0 = 0;
  DAT_00362480 = 0;
  DAT_003624b8 = 0x3f800000;
  DAT_00362484 = 0;
  DAT_003624c0 = 0;
  DAT_00362488 = 0;
  DAT_00362490 = 0x3f800000;
  DAT_0036247c = uStack_24;
  DAT_003624c8 = 0;
  DAT_00362494 = 0;
  DAT_0036248c = uStack_34;
  DAT_0036249c = 0;
  DAT_003624a0 = 0;
  DAT_003624a4 = 0x3f800000;
  DAT_003624ac = 0;
  DAT_003624b4 = 0;
  DAT_003624bc = 0;
  DAT_003624c4 = 0;
  DAT_003624cc = 0x3f800000;
  return;
}

// 0x003691e0  size 0x70
void __sinit_003691e0(void)

{
  DAT_003624e0 = 0;
  DAT_003624f0 = 0;
  DAT_003624e4 = 0;
  DAT_003624f8 = 0;
  DAT_003624e8 = 0;
  DAT_003624ec = 0x3f800000;
  DAT_003624f4 = 0;
  DAT_00362500 = 0x3f800000;
  Mat34_Identity(0x362510);
  DAT_00362550 = 1;
  return;
}

// 0x00369370  size 0x54
void __sinit_00369370(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x757c);
  __register_global_object((int)register0x000001c0 + -0x757c,0x103050,0x42fc90);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7578);
  __register_global_object((int)register0x000001c0 + -0x7578,0x1035a0,0x42fca0);
  return;
}

// 0x003693d0  size 0x54
void __sinit_003693d0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7574);
  __register_global_object((int)register0x000001c0 + -0x7574,0x103050,0x42fcb0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7570);
  __register_global_object((int)register0x000001c0 + -0x7570,0x1035a0,0x42fcc0);
  return;
}

// 0x00369430  size 0x2a0
void __sinit_00369430(void)

{
  undefined8 uVar1;
  undefined1 uStack_14;
  undefined1 uStack_10;
  undefined1 uStack_c;
  undefined1 uStack_8;
  undefined1 uStack_4;
  
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x756c);
  __register_global_object((int)register0x000001c0 + -0x756c,0x103050,0x42fcd0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7568);
  __register_global_object((int)register0x000001c0 + -0x7568,0x1035a0,0x42fce0);
  DAT_00362608 = 0;
  DAT_0036260c = 0;
  DAT_00362610 = 0;
  uVar1 = strlen(0x362660);
  std_string_reserve(0x362608,uVar1);
  maybe_std_string_replace(0x362608,0,0,0x362660,s_cdrom0__WBRCDATA__00362660 + (int)uVar1,uStack_4)
  ;
  __register_global_object(0x362608,0x107050,0x42fcf0);
  DAT_00362618 = 0;
  DAT_0036261c = 0;
  DAT_00362620 = 0;
  uVar1 = strlen(0x362680);
  std_string_reserve(0x362618,uVar1);
  maybe_std_string_replace
            (0x362618,0,0,0x362680,s_cdrom0__WBRCDATA_BDY__00362680 + (int)uVar1,uStack_8);
  __register_global_object(0x362618,0x107050,0x42fd00);
  DAT_00362628 = 0;
  DAT_0036262c = 0;
  DAT_00362630 = 0;
  uVar1 = strlen(0x3626a0);
  std_string_reserve(0x362628,uVar1);
  maybe_std_string_replace
            (0x362628,0,0,0x3626a0,s_cdrom0__WBRCDATA_TYR__003626a0 + (int)uVar1,uStack_c);
  __register_global_object(0x362628,0x107050,0x42fd10);
  DAT_00362638 = 0;
  DAT_0036263c = 0;
  DAT_00362640 = 0;
  uVar1 = strlen(0x3626c0);
  std_string_reserve(0x362638,uVar1);
  maybe_std_string_replace
            (0x362638,0,0,0x3626c0,s_cdrom0__WBRCDATA_ENG__003626c0 + (int)uVar1,uStack_10);
  __register_global_object(0x362638,0x107050,0x42fd20);
  DAT_00362648 = 0;
  DAT_0036264c = 0;
  DAT_00362650 = 0;
  uVar1 = strlen(0x3626e0);
  std_string_reserve(0x362648,uVar1);
  maybe_std_string_replace
            (0x362648,0,0,0x3626e0,s_cdrom0__WBRCDATA_ACD__003626e0 + (int)uVar1,uStack_14);
  __register_global_object(0x362648,0x107050,0x42fd30);
  return;
}

// 0x003696d0  size 0x54
void __sinit_003696d0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7564);
  __register_global_object((int)register0x000001c0 + -0x7564,0x103050,0x430120);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7560);
  __register_global_object((int)register0x000001c0 + -0x7560,0x1035a0,0x430130);
  return;
}

// 0x00369730  size 0x54
void __sinit_00369730(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7550);
  __register_global_object((int)register0x000001c0 + -0x7550,0x103050,0x430140);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x754c);
  __register_global_object((int)register0x000001c0 + -0x754c,0x1035a0,0x430150);
  return;
}

// 0x00369790  size 0x54
void __sinit_00369790(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7540);
  __register_global_object((int)register0x000001c0 + -0x7540,0x103050,0x430160);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x753c);
  __register_global_object((int)register0x000001c0 + -0x753c,0x1035a0,0x430170);
  return;
}

// 0x003697f0  size 0x54
void __sinit_003697f0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -30000);
  __register_global_object((int)register0x000001c0 + -30000,0x103050,0x430180);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x752c);
  __register_global_object((int)register0x000001c0 + -0x752c,0x1035a0,0x430190);
  return;
}

// 0x00369850  size 0x54
void __sinit_00369850(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7524);
  __register_global_object((int)register0x000001c0 + -0x7524,0x103050,0x430350);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7520);
  __register_global_object((int)register0x000001c0 + -0x7520,0x1035a0,0x430360);
  return;
}

// 0x003698b0  size 0x54
void __sinit_003698b0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7518);
  __register_global_object((int)register0x000001c0 + -0x7518,0x103050,0x430370);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7514);
  __register_global_object((int)register0x000001c0 + -0x7514,0x1035a0,0x430380);
  return;
}

// 0x00369910  size 0xb4
void __sinit_00369910(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7500);
  __register_global_object((int)register0x000001c0 + -0x7500,0x103050,0x430390);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x74fc);
  __register_global_object((int)register0x000001c0 + -0x74fc,0x1035a0,0x4303a0);
  puGpffff8b10 = &DAT_0036e680;
  puGpffff8b14 = &DAT_0036e670;
  puGpffff8b18 = &DAT_0036e660;
  puGpffff8b1c = &DAT_0036e650;
  puGpffff8b20 = &DAT_0036e630;
  puGpffff8b24 = &DAT_0036e640;
  puGpffff8b28 = &DAT_0036e2f0;
  puGpffff8b2c = &DAT_0036e2e0;
  return;
}

// 0x003699d0  size 0x54
void __sinit_003699d0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x74c8);
  __register_global_object((int)register0x000001c0 + -0x74c8,0x103050,0x4303b0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x74c4);
  __register_global_object((int)register0x000001c0 + -0x74c4,0x1035a0,0x4303c0);
  return;
}

// 0x00369a30  size 0x54
void __sinit_00369a30(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x74b0);
  __register_global_object((int)register0x000001c0 + -0x74b0,0x103050,0x4303e0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x74ac);
  __register_global_object((int)register0x000001c0 + -0x74ac,0x1035a0,0x4303f0);
  return;
}

// 0x00369a90  size 0x54
void __sinit_00369a90(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x74a8);
  __register_global_object((int)register0x000001c0 + -0x74a8,0x103050,0x430400);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x74a4);
  __register_global_object((int)register0x000001c0 + -0x74a4,0x1035a0,0x430410);
  return;
}

// 0x00369af0  size 0x54
void __sinit_00369af0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x748c);
  __register_global_object((int)register0x000001c0 + -0x748c,0x103050,0x430420);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7488);
  __register_global_object((int)register0x000001c0 + -0x7488,0x1035a0,0x430430);
  return;
}

// 0x00369b50  size 0x54
void __sinit_00369b50(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7474);
  __register_global_object((int)register0x000001c0 + -0x7474,0x103050,0x430440);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7470);
  __register_global_object((int)register0x000001c0 + -0x7470,0x1035a0,0x430450);
  return;
}

// 0x00369bb0  size 0x54
void __sinit_00369bb0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7468);
  __register_global_object((int)register0x000001c0 + -0x7468,0x103050,0x430590);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7464);
  __register_global_object((int)register0x000001c0 + -0x7464,0x1035a0,0x4305a0);
  return;
}

// 0x00369c10  size 0xc0
void __sinit_00369c10(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7460);
  __register_global_object((int)register0x000001c0 + -0x7460,0x103050,0x430610);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x745c);
  __register_global_object((int)register0x000001c0 + -0x745c,0x1035a0,0x430620);
  maybe_ListNode_ctor(0x430644,0);
  puRam00430644 = &DAT_0036e128;
  __register_global_object(0x430640,0x1a4ed0,0x430630);
  maybe_Heap_ctor(0x4306e0);
  __register_global_object(0x4306e0,0x100860,0x4306d0);
  return;
}

// 0x00369cd0  size 0x7c
void __sinit_00369cd0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7454);
  __register_global_object((int)register0x000001c0 + -0x7454,0x103050,0x430720);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7450);
  __register_global_object((int)register0x000001c0 + -0x7450,0x1035a0,0x430730);
  maybe_Heap_ctor(0x430750);
  __register_global_object(0x430750,0x100860,0x430740);
  return;
}

// 0x00369d50  size 0x54
void __sinit_00369d50(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7444);
  __register_global_object((int)register0x000001c0 + -0x7444,0x103050,0x430768);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7440);
  __register_global_object((int)register0x000001c0 + -0x7440,0x1035a0,0x430778);
  return;
}

// 0x00369db0  size 0x4c
void __sinit_00369db0(void)

{
  List_ctor(0x4307a0,1);
  maybe_Heap_ctor(0x4308a8);
  __register_global_object(0x4307a0,0x1a8f80,0x430788);
  return;
}

// 0x00369e00  size 0x50
void __sinit_00369e00(void)

{
  maybe_ListNode_ctor(0x436310,0);
  puRam00436310 = &DAT_0036e5b8;
  __register_global_object(0x436310,0x1a9b80,0x436300);
  return;
}

// 0x00369e50  size 0x54
void __sinit_00369e50(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7400);
  __register_global_object((int)register0x000001c0 + -0x7400,0x103050,0x4364d8);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x73fc);
  __register_global_object((int)register0x000001c0 + -0x73fc,0x1035a0,0x4364e8);
  return;
}

// 0x00369eb0  size 0x7c
void __sinit_00369eb0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x73f0);
  __register_global_object((int)register0x000001c0 + -0x73f0,0x103050,0x4364f8);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x73ec);
  __register_global_object((int)register0x000001c0 + -0x73ec,0x1035a0,0x436508);
  maybe_Heap_ctor(0x436530);
  __register_global_object(0x436530,0x100860,0x436518);
  return;
}

// 0x00369f30  size 0x54
void __sinit_00369f30(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x73e0);
  __register_global_object((int)register0x000001c0 + -0x73e0,0x103050,0x436548);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x73dc);
  __register_global_object((int)register0x000001c0 + -0x73dc,0x1035a0,0x436558);
  return;
}

// 0x00369f90  size 0x54
void __sinit_00369f90(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x73bc);
  __register_global_object((int)register0x000001c0 + -0x73bc,0x103050,0x436610);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x73b8);
  __register_global_object((int)register0x000001c0 + -0x73b8,0x1035a0,0x436620);
  return;
}

// 0x00369ff0  size 0x54
void __sinit_00369ff0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x73b0);
  __register_global_object((int)register0x000001c0 + -0x73b0,0x103050,0x436630);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x73ac);
  __register_global_object((int)register0x000001c0 + -0x73ac,0x1035a0,0x436640);
  return;
}

// 0x0036a050  size 0x54
void __sinit_0036a050(void)

{
  std_ios_base_Init_ctor(0x36f350);
  __register_global_object(0x36f350,0x103050,0x436650);
  maybe_std_wios_Init_ctor(0x36f354);
  __register_global_object(0x36f354,0x1035a0,0x436660);
  return;
}

// 0x0036a0b0  size 0x54
void __sinit_0036a0b0(void)

{
  std_ios_base_Init_ctor(0x36f35c);
  __register_global_object(0x36f35c,0x103050,0x436670);
  maybe_std_wios_Init_ctor(0x36f360);
  __register_global_object(0x36f360,0x1035a0,0x436680);
  return;
}

// 0x0036a110  size 0x54
void __sinit_0036a110(void)

{
  std_ios_base_Init_ctor(0x36f364);
  __register_global_object(0x36f364,0x103050,0x436690);
  maybe_std_wios_Init_ctor(0x36f368);
  __register_global_object(0x36f368,0x1035a0,0x4366a0);
  return;
}

// 0x0036a170  size 0x54
void __sinit_0036a170(void)

{
  std_ios_base_Init_ctor(0x36f374);
  __register_global_object(0x36f374,0x103050,0x4366b0);
  maybe_std_wios_Init_ctor(0x36f378);
  __register_global_object(0x36f378,0x1035a0,0x4366c0);
  return;
}

// 0x0036a1d0  size 0x54
void __sinit_0036a1d0(void)

{
  std_ios_base_Init_ctor(0x36f37c);
  __register_global_object(0x36f37c,0x103050,0x4366d0);
  maybe_std_wios_Init_ctor(0x36f380);
  __register_global_object(0x36f380,0x1035a0,0x4366e0);
  return;
}

// 0x0036a230  size 0x54
void __sinit_0036a230(void)

{
  std_ios_base_Init_ctor(0x36f388);
  __register_global_object(0x36f388,0x103050,0x4366f0);
  maybe_std_wios_Init_ctor(0x36f38c);
  __register_global_object(0x36f38c,0x1035a0,0x436700);
  return;
}

// 0x0036a290  size 0x54
void __sinit_0036a290(void)

{
  std_ios_base_Init_ctor(0x36f394);
  __register_global_object(0x36f394,0x103050,0x436710);
  maybe_std_wios_Init_ctor(0x36f398);
  __register_global_object(0x36f398,0x1035a0,0x436720);
  return;
}

// 0x0036a2f0  size 0x54
void __sinit_0036a2f0(void)

{
  std_ios_base_Init_ctor(0x36f39c);
  __register_global_object(0x36f39c,0x103050,0x436730);
  maybe_std_wios_Init_ctor(0x36f3a0);
  __register_global_object(0x36f3a0,0x1035a0,0x436740);
  return;
}

// 0x0036a350  size 0x54
void __sinit_0036a350(void)

{
  std_ios_base_Init_ctor(0x36f3a8);
  __register_global_object(0x36f3a8,0x103050,0x436750);
  maybe_std_wios_Init_ctor(0x36f3ac);
  __register_global_object(0x36f3ac,0x1035a0,0x436760);
  return;
}

// 0x0036a3b0  size 0x54
void __sinit_0036a3b0(void)

{
  std_ios_base_Init_ctor(0x36f3b8);
  __register_global_object(0x36f3b8,0x103050,0x436770);
  maybe_std_wios_Init_ctor(0x36f3bc);
  __register_global_object(0x36f3bc,0x1035a0,0x436780);
  return;
}

// 0x0036a410  size 0x54
void __sinit_0036a410(void)

{
  std_ios_base_Init_ctor(0x36f3c4);
  __register_global_object(0x36f3c4,0x103050,0x436790);
  maybe_std_wios_Init_ctor(0x36f3c8);
  __register_global_object(0x36f3c8,0x1035a0,0x4367a0);
  return;
}

// 0x0036a470  size 0x54
void __sinit_0036a470(void)

{
  std_ios_base_Init_ctor(0x36f3d0);
  __register_global_object(0x36f3d0,0x103050,0x4367b0);
  maybe_std_wios_Init_ctor(0x36f3d4);
  __register_global_object(0x36f3d4,0x1035a0,0x4367c0);
  return;
}

// 0x0036a4d0  size 0x54
void __sinit_0036a4d0(void)

{
  std_ios_base_Init_ctor(0x36f3e0);
  __register_global_object(0x36f3e0,0x103050,0x4367d0);
  maybe_std_wios_Init_ctor(0x36f3e4);
  __register_global_object(0x36f3e4,0x1035a0,0x4367e0);
  return;
}

// 0x0036a530  size 0x54
void __sinit_0036a530(void)

{
  std_ios_base_Init_ctor(0x36f3ec);
  __register_global_object(0x36f3ec,0x103050,0x4367f0);
  maybe_std_wios_Init_ctor(0x36f3f0);
  __register_global_object(0x36f3f0,0x1035a0,0x436800);
  return;
}

// 0x0036a590  size 0x54
void __sinit_0036a590(void)

{
  std_ios_base_Init_ctor(0x36f3f4);
  __register_global_object(0x36f3f4,0x103050,0x467810);
  maybe_std_wios_Init_ctor(0x36f3f8);
  __register_global_object(0x36f3f8,0x1035a0,0x467820);
  return;
}

// 0x0036a5f0  size 0x54
void __sinit_0036a5f0(void)

{
  std_ios_base_Init_ctor(0x36f410);
  __register_global_object(0x36f410,0x103050,0x4688c0);
  maybe_std_wios_Init_ctor(0x36f414);
  __register_global_object(0x36f414,0x1035a0,0x4688d0);
  return;
}

// 0x0036a650  size 0x54
void __sinit_0036a650(void)

{
  std_ios_base_Init_ctor(0x36f418);
  __register_global_object(0x36f418,0x103050,0x4688e0);
  maybe_std_wios_Init_ctor(0x36f41c);
  __register_global_object(0x36f41c,0x1035a0,0x4688f0);
  return;
}

// 0x0036a6b0  size 0x54
void __sinit_0036a6b0(void)

{
  std_ios_base_Init_ctor(0x36f420);
  __register_global_object(0x36f420,0x103050,0x468900);
  maybe_std_wios_Init_ctor(0x36f424);
  __register_global_object(0x36f424,0x1035a0,0x468910);
  return;
}

// 0x0036a710  size 0x54
void __sinit_0036a710(void)

{
  std_ios_base_Init_ctor(0x36f440);
  __register_global_object(0x36f440,0x103050,0x469300);
  maybe_std_wios_Init_ctor(0x36f444);
  __register_global_object(0x36f444,0x1035a0,0x469310);
  return;
}

// 0x0036a770  size 0x54
void __sinit_0036a770(void)

{
  std_ios_base_Init_ctor(0x36f448);
  __register_global_object(0x36f448,0x103050,0x469320);
  maybe_std_wios_Init_ctor(0x36f44c);
  __register_global_object(0x36f44c,0x1035a0,0x469330);
  return;
}

// 0x0036a7d0  size 0x54
void __sinit_0036a7d0(void)

{
  std_ios_base_Init_ctor(0x36f450);
  __register_global_object(0x36f450,0x103050,0x469340);
  maybe_std_wios_Init_ctor(0x36f454);
  __register_global_object(0x36f454,0x1035a0,0x469350);
  return;
}

// 0x0036a830  size 0x54
void __sinit_0036a830(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7294);
  __register_global_object((int)register0x000001c0 + -0x7294,0x103050,0x469360);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7290);
  __register_global_object((int)register0x000001c0 + -0x7290,0x1035a0,0x469370);
  return;
}

// 0x0036a890  size 0x54
void __sinit_0036a890(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7284);
  __register_global_object((int)register0x000001c0 + -0x7284,0x103050,0x469380);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7280);
  __register_global_object((int)register0x000001c0 + -0x7280,0x1035a0,0x469390);
  return;
}

// 0x0036a8f0  size 0x54
void __sinit_0036a8f0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7270);
  __register_global_object((int)register0x000001c0 + -0x7270,0x103050,0x4693a0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x726c);
  __register_global_object((int)register0x000001c0 + -0x726c,0x1035a0,0x4693b0);
  return;
}

// 0x0036a950  size 0x54
void __sinit_0036a950(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7264);
  __register_global_object((int)register0x000001c0 + -0x7264,0x103050,0x4693c0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7260);
  __register_global_object((int)register0x000001c0 + -0x7260,0x1035a0,0x4693d0);
  return;
}

// 0x0036a9b0  size 0x54
void __sinit_0036a9b0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7258);
  __register_global_object((int)register0x000001c0 + -0x7258,0x103050,0x4693e0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7254);
  __register_global_object((int)register0x000001c0 + -0x7254,0x1035a0,0x4693f0);
  return;
}

// 0x0036aa10  size 0x54
void __sinit_0036aa10(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7248);
  __register_global_object((int)register0x000001c0 + -0x7248,0x103050,0x469400);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7244);
  __register_global_object((int)register0x000001c0 + -0x7244,0x1035a0,0x469410);
  return;
}

// 0x0036aa70  size 0x54
void __sinit_0036aa70(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7240);
  __register_global_object((int)register0x000001c0 + -0x7240,0x103050,0x469420);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x723c);
  __register_global_object((int)register0x000001c0 + -0x723c,0x1035a0,0x469430);
  return;
}

// 0x0036aad0  size 0x54
void __sinit_0036aad0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7234);
  __register_global_object((int)register0x000001c0 + -0x7234,0x103050,0x469440);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7230);
  __register_global_object((int)register0x000001c0 + -0x7230,0x1035a0,0x469450);
  return;
}

// 0x0036ab30  size 0x54
void __sinit_0036ab30(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7228);
  __register_global_object((int)register0x000001c0 + -0x7228,0x103050,0x469460);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7224);
  __register_global_object((int)register0x000001c0 + -0x7224,0x1035a0,0x469470);
  return;
}

// 0x0036ab90  size 0x54
void __sinit_0036ab90(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x721c);
  __register_global_object((int)register0x000001c0 + -0x721c,0x103050,0x469480);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7218);
  __register_global_object((int)register0x000001c0 + -0x7218,0x1035a0,0x469490);
  return;
}

// 0x0036abf0  size 0x54
void __sinit_0036abf0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7210);
  __register_global_object((int)register0x000001c0 + -0x7210,0x103050,0x4694a0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x720c);
  __register_global_object((int)register0x000001c0 + -0x720c,0x1035a0,0x4694b0);
  return;
}

// 0x0036ac50  size 0x54
void __sinit_0036ac50(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7204);
  __register_global_object((int)register0x000001c0 + -0x7204,0x103050,0x4694c0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7200);
  __register_global_object((int)register0x000001c0 + -0x7200,0x1035a0,0x4694d0);
  return;
}

// 0x0036acb0  size 0x54
void __sinit_0036acb0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71f0);
  __register_global_object((int)register0x000001c0 + -0x71f0,0x103050,0x4694e0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71ec);
  __register_global_object((int)register0x000001c0 + -0x71ec,0x1035a0,0x4694f0);
  return;
}

// 0x0036ad10  size 0x54
void __sinit_0036ad10(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71e8);
  __register_global_object((int)register0x000001c0 + -0x71e8,0x103050,0x469500);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71e4);
  __register_global_object((int)register0x000001c0 + -0x71e4,0x1035a0,0x469510);
  return;
}

// 0x0036ad70  size 0x54
void __sinit_0036ad70(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71e0);
  __register_global_object((int)register0x000001c0 + -0x71e0,0x103050,0x469520);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71dc);
  __register_global_object((int)register0x000001c0 + -0x71dc,0x1035a0,0x469530);
  return;
}

// 0x0036add0  size 0x54
void __sinit_0036add0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71d8);
  __register_global_object((int)register0x000001c0 + -0x71d8,0x103050,0x469540);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71d4);
  __register_global_object((int)register0x000001c0 + -0x71d4,0x1035a0,0x469550);
  return;
}

// 0x0036ae30  size 0x54
void __sinit_0036ae30(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71d0);
  __register_global_object((int)register0x000001c0 + -0x71d0,0x103050,0x469560);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71cc);
  __register_global_object((int)register0x000001c0 + -0x71cc,0x1035a0,0x469570);
  return;
}

// 0x0036ae90  size 0x54
void __sinit_0036ae90(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71c8);
  __register_global_object((int)register0x000001c0 + -0x71c8,0x103050,0x469580);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71c4);
  __register_global_object((int)register0x000001c0 + -0x71c4,0x1035a0,0x469590);
  return;
}

// 0x0036aef0  size 0x54
void __sinit_0036aef0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71c0);
  __register_global_object((int)register0x000001c0 + -0x71c0,0x103050,0x4695a0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71bc);
  __register_global_object((int)register0x000001c0 + -0x71bc,0x1035a0,0x4695b0);
  return;
}

// 0x0036af50  size 0x54
void __sinit_0036af50(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71b8);
  __register_global_object((int)register0x000001c0 + -0x71b8,0x103050,0x4695c0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71b4);
  __register_global_object((int)register0x000001c0 + -0x71b4,0x1035a0,0x4695d0);
  return;
}

// 0x0036afb0  size 0x54
void __sinit_0036afb0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x71a4);
  __register_global_object((int)register0x000001c0 + -0x71a4,0x103050,0x4695f0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x71a0);
  __register_global_object((int)register0x000001c0 + -0x71a0,0x1035a0,0x469600);
  return;
}

// 0x0036b010  size 0x54
void __sinit_0036b010(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x719c);
  __register_global_object((int)register0x000001c0 + -0x719c,0x103050,0x469610);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7198);
  __register_global_object((int)register0x000001c0 + -0x7198,0x1035a0,0x469620);
  return;
}

// 0x0036b070  size 0x54
void __sinit_0036b070(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7194);
  __register_global_object((int)register0x000001c0 + -0x7194,0x103050,0x469630);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7190);
  __register_global_object((int)register0x000001c0 + -0x7190,0x1035a0,0x469640);
  return;
}

// 0x0036b0d0  size 0x54
void __sinit_0036b0d0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x718c);
  __register_global_object((int)register0x000001c0 + -0x718c,0x103050,0x469650);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7188);
  __register_global_object((int)register0x000001c0 + -0x7188,0x1035a0,0x469660);
  return;
}

// 0x0036b130  size 0x54
void __sinit_0036b130(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7184);
  __register_global_object((int)register0x000001c0 + -0x7184,0x103050,0x469670);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7180);
  __register_global_object((int)register0x000001c0 + -0x7180,0x1035a0,0x469680);
  return;
}

// 0x0036b190  size 0x54
void __sinit_0036b190(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x717c);
  __register_global_object((int)register0x000001c0 + -0x717c,0x103050,0x469690);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7178);
  __register_global_object((int)register0x000001c0 + -0x7178,0x1035a0,0x4696a0);
  return;
}

// 0x0036b1f0  size 0x54
void __sinit_0036b1f0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7174);
  __register_global_object((int)register0x000001c0 + -0x7174,0x103050,0x4696b0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7170);
  __register_global_object((int)register0x000001c0 + -0x7170,0x1035a0,0x4696c0);
  return;
}

// 0x0036b250  size 0x54
void __sinit_0036b250(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x716c);
  __register_global_object((int)register0x000001c0 + -0x716c,0x103050,0x4696d0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7168);
  __register_global_object((int)register0x000001c0 + -0x7168,0x1035a0,0x4696e0);
  return;
}

// 0x0036b2b0  size 0x54
void __sinit_0036b2b0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7164);
  __register_global_object((int)register0x000001c0 + -0x7164,0x103050,0x4696f0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7160);
  __register_global_object((int)register0x000001c0 + -0x7160,0x1035a0,0x469700);
  return;
}

// 0x0036b310  size 0x54
void __sinit_0036b310(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x715c);
  __register_global_object((int)register0x000001c0 + -0x715c,0x103050,0x469710);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7158);
  __register_global_object((int)register0x000001c0 + -0x7158,0x1035a0,0x469720);
  return;
}

// 0x0036b370  size 0x54
void __sinit_0036b370(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7154);
  __register_global_object((int)register0x000001c0 + -0x7154,0x103050,0x469730);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7150);
  __register_global_object((int)register0x000001c0 + -0x7150,0x1035a0,0x469740);
  return;
}

// 0x0036b3d0  size 0x54
void __sinit_0036b3d0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x714c);
  __register_global_object((int)register0x000001c0 + -0x714c,0x103050,0x469750);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -29000);
  __register_global_object((int)register0x000001c0 + -29000,0x1035a0,0x469760);
  return;
}

// 0x0036b430  size 0x54
void __sinit_0036b430(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7144);
  __register_global_object((int)register0x000001c0 + -0x7144,0x103050,0x469770);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7140);
  __register_global_object((int)register0x000001c0 + -0x7140,0x1035a0,0x469780);
  return;
}

// 0x0036b490  size 0x54
void __sinit_0036b490(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x713c);
  __register_global_object((int)register0x000001c0 + -0x713c,0x103050,0x469790);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7138);
  __register_global_object((int)register0x000001c0 + -0x7138,0x1035a0,0x4697a0);
  return;
}

// 0x0036b4f0  size 0x54
void __sinit_0036b4f0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7134);
  __register_global_object((int)register0x000001c0 + -0x7134,0x103050,0x4697b0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7130);
  __register_global_object((int)register0x000001c0 + -0x7130,0x1035a0,0x4697c0);
  return;
}

// 0x0036b550  size 0x54
void __sinit_0036b550(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x712c);
  __register_global_object((int)register0x000001c0 + -0x712c,0x103050,0x4697d0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7128);
  __register_global_object((int)register0x000001c0 + -0x7128,0x1035a0,0x4697e0);
  return;
}

// 0x0036b5b0  size 0x54
void __sinit_0036b5b0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7124);
  __register_global_object((int)register0x000001c0 + -0x7124,0x103050,0x4697f0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7120);
  __register_global_object((int)register0x000001c0 + -0x7120,0x1035a0,0x469800);
  return;
}

// 0x0036b610  size 0x54
void __sinit_0036b610(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x711c);
  __register_global_object((int)register0x000001c0 + -0x711c,0x103050,0x469810);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7118);
  __register_global_object((int)register0x000001c0 + -0x7118,0x1035a0,0x469820);
  return;
}

// 0x0036b670  size 0x54
void __sinit_0036b670(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7100);
  __register_global_object((int)register0x000001c0 + -0x7100,0x103050,0x469840);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70fc);
  __register_global_object((int)register0x000001c0 + -0x70fc,0x1035a0,0x469850);
  return;
}

// 0x0036b6d0  size 0x54
void __sinit_0036b6d0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70f8);
  __register_global_object((int)register0x000001c0 + -0x70f8,0x103050,0x469860);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70f4);
  __register_global_object((int)register0x000001c0 + -0x70f4,0x1035a0,0x469870);
  return;
}

// 0x0036b730  size 0x54
void __sinit_0036b730(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70f0);
  __register_global_object((int)register0x000001c0 + -0x70f0,0x103050,0x469880);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70ec);
  __register_global_object((int)register0x000001c0 + -0x70ec,0x1035a0,0x469890);
  return;
}

// 0x0036b790  size 0x54
void __sinit_0036b790(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70e8);
  __register_global_object((int)register0x000001c0 + -0x70e8,0x103050,0x4698a0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70e4);
  __register_global_object((int)register0x000001c0 + -0x70e4,0x1035a0,0x4698b0);
  return;
}

// 0x0036b7f0  size 0x54
void __sinit_0036b7f0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70e0);
  __register_global_object((int)register0x000001c0 + -0x70e0,0x103050,0x4698c0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70dc);
  __register_global_object((int)register0x000001c0 + -0x70dc,0x1035a0,0x4698d0);
  return;
}

// 0x0036b850  size 0x54
void __sinit_0036b850(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70d8);
  __register_global_object((int)register0x000001c0 + -0x70d8,0x103050,0x4698e0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70d4);
  __register_global_object((int)register0x000001c0 + -0x70d4,0x1035a0,0x4698f0);
  return;
}

// 0x0036b8b0  size 0x54
void __sinit_0036b8b0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70d0);
  __register_global_object((int)register0x000001c0 + -0x70d0,0x103050,0x469900);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70cc);
  __register_global_object((int)register0x000001c0 + -0x70cc,0x1035a0,0x469910);
  return;
}

// 0x0036b910  size 0x54
void __sinit_0036b910(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70c8);
  __register_global_object((int)register0x000001c0 + -0x70c8,0x103050,0x469920);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70c4);
  __register_global_object((int)register0x000001c0 + -0x70c4,0x1035a0,0x469930);
  return;
}

// 0x0036b970  size 0x54
void __sinit_0036b970(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70c0);
  __register_global_object((int)register0x000001c0 + -0x70c0,0x103050,0x469940);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70bc);
  __register_global_object((int)register0x000001c0 + -0x70bc,0x1035a0,0x469950);
  return;
}

// 0x0036b9d0  size 0x54
void __sinit_0036b9d0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70b8);
  __register_global_object((int)register0x000001c0 + -0x70b8,0x103050,0x469960);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70b4);
  __register_global_object((int)register0x000001c0 + -0x70b4,0x1035a0,0x469970);
  return;
}

// 0x0036ba30  size 0x54
void __sinit_0036ba30(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70b0);
  __register_global_object((int)register0x000001c0 + -0x70b0,0x103050,0x469980);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70ac);
  __register_global_object((int)register0x000001c0 + -0x70ac,0x1035a0,0x469990);
  return;
}

// 0x0036ba90  size 0x54
void __sinit_0036ba90(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70a8);
  __register_global_object((int)register0x000001c0 + -0x70a8,0x103050,0x4699a0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x70a4);
  __register_global_object((int)register0x000001c0 + -0x70a4,0x1035a0,0x4699b0);
  return;
}

// 0x0036baf0  size 0x54
void __sinit_0036baf0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x70a0);
  __register_global_object((int)register0x000001c0 + -0x70a0,0x103050,0x4699c0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x709c);
  __register_global_object((int)register0x000001c0 + -0x709c,0x1035a0,0x4699d0);
  return;
}

// 0x0036bb50  size 0x54
void __sinit_0036bb50(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7098);
  __register_global_object((int)register0x000001c0 + -0x7098,0x103050,0x4699e0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7094);
  __register_global_object((int)register0x000001c0 + -0x7094,0x1035a0,0x4699f0);
  return;
}

// 0x0036bbb0  size 0x54
void __sinit_0036bbb0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7090);
  __register_global_object((int)register0x000001c0 + -0x7090,0x103050,0x469a00);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x708c);
  __register_global_object((int)register0x000001c0 + -0x708c,0x1035a0,0x469a10);
  return;
}

// 0x0036bc10  size 0x54
void __sinit_0036bc10(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7088);
  __register_global_object((int)register0x000001c0 + -0x7088,0x103050,0x469a20);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7084);
  __register_global_object((int)register0x000001c0 + -0x7084,0x1035a0,0x469a30);
  return;
}

// 0x0036bc70  size 0x54
void __sinit_0036bc70(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7080);
  __register_global_object((int)register0x000001c0 + -0x7080,0x103050,0x469a40);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x707c);
  __register_global_object((int)register0x000001c0 + -0x707c,0x1035a0,0x469a50);
  return;
}

// 0x0036bcd0  size 0x54
void __sinit_0036bcd0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7078);
  __register_global_object((int)register0x000001c0 + -0x7078,0x103050,0x469a60);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7074);
  __register_global_object((int)register0x000001c0 + -0x7074,0x1035a0,0x469a70);
  return;
}

// 0x0036bd30  size 0x54
void __sinit_0036bd30(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7070);
  __register_global_object((int)register0x000001c0 + -0x7070,0x103050,0x469a80);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x706c);
  __register_global_object((int)register0x000001c0 + -0x706c,0x1035a0,0x469a90);
  return;
}

// 0x0036bd90  size 0x54
void __sinit_0036bd90(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7068);
  __register_global_object((int)register0x000001c0 + -0x7068,0x103050,0x469aa0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7064);
  __register_global_object((int)register0x000001c0 + -0x7064,0x1035a0,0x469ab0);
  return;
}

// 0x0036bdf0  size 0x54
void __sinit_0036bdf0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7060);
  __register_global_object((int)register0x000001c0 + -0x7060,0x103050,0x469ac0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x705c);
  __register_global_object((int)register0x000001c0 + -0x705c,0x1035a0,0x469ad0);
  return;
}

// 0x0036be50  size 0x54
void __sinit_0036be50(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7054);
  __register_global_object((int)register0x000001c0 + -0x7054,0x103050,0x469ae0);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7050);
  __register_global_object((int)register0x000001c0 + -0x7050,0x1035a0,0x469af0);
  return;
}

// 0x0036beb0  size 0x54
void __sinit_0036beb0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x704c);
  __register_global_object((int)register0x000001c0 + -0x704c,0x103050,0x469b00);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7048);
  __register_global_object((int)register0x000001c0 + -0x7048,0x1035a0,0x469b10);
  return;
}

// 0x0036bf10  size 0x54
void __sinit_0036bf10(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7044);
  __register_global_object((int)register0x000001c0 + -0x7044,0x103050,0x469b20);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7040);
  __register_global_object((int)register0x000001c0 + -0x7040,0x1035a0,0x469b30);
  return;
}

// 0x0036bf70  size 0x54
void __sinit_0036bf70(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7038);
  __register_global_object((int)register0x000001c0 + -0x7038,0x103050,0x469b40);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x7034);
  __register_global_object((int)register0x000001c0 + -0x7034,0x1035a0,0x469b50);
  return;
}

// 0x0036bfd0  size 0x54
void __sinit_0036bfd0(void)

{
  std_ios_base_Init_ctor((int)register0x000001c0 + -0x7030);
  __register_global_object((int)register0x000001c0 + -0x7030,0x103050,0x469b60);
  maybe_std_wios_Init_ctor((int)register0x000001c0 + -0x702c);
  __register_global_object((int)register0x000001c0 + -0x702c,0x1035a0,0x469b70);
  return;
}

