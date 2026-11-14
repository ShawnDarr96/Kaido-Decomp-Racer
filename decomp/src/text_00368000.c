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
  std_ios_base_Init_ctor(0x36f0dc);
  __register_global_object(0x36f0dc,0x103050,0x42e340);
  maybe_std_wios_Init_ctor(0x36f0e0);
  __register_global_object(0x36f0e0,0x1035a0,0x42e350);
  return;
}

// 0x00368950  size 0x54
void __sinit_00368950(void)

{
  std_ios_base_Init_ctor(0x36f0e4);
  __register_global_object(0x36f0e4,0x103050,0x42f3a0);
  maybe_std_wios_Init_ctor(0x36f0e8);
  __register_global_object(0x36f0e8,0x1035a0,0x42f3b0);
  return;
}

// 0x003689b0  size 0x1a8
void __sinit_003689b0(void)

{
  std_ios_base_Init_ctor(0x36f0f0);
  __register_global_object(0x36f0f0,0x103050,0x42f410);
  maybe_std_wios_Init_ctor(0x36f0f4);
  __register_global_object(0x36f0f4,0x1035a0,0x42f420);
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
  std_ios_base_Init_ctor(0x36f0f8);
  __register_global_object(0x36f0f8,0x103050,0x42f550);
  maybe_std_wios_Init_ctor(0x36f0fc);
  __register_global_object(0x36f0fc,0x1035a0,0x42f560);
  PhysBody_ctor(0x42f570);
  return;
}

// 0x00368bc0  size 0x6c
void __sinit_00368bc0(void)

{
  std_ios_base_Init_ctor(0x36f108);
  __register_global_object(0x36f108,0x103050,0x42fb20);
  maybe_std_wios_Init_ctor(0x36f10c);
  __register_global_object(0x36f10c,0x1035a0,0x42fb30);
  __register_global_object(0x36f110,0x15d1d0,0x42fb40);
  return;
}

// 0x00368c30  size 0x394
void __sinit_00368c30(void)

{
  std_ios_base_Init_ctor(0x36f154);
  __register_global_object(0x36f154,0x103050,0x42fb50);
  maybe_std_wios_Init_ctor(0x36f158);
  __register_global_object(0x36f158,0x1035a0,0x42fb60);
  uRam0042fb70 = DAT_0030ace0;
  puRam0042fb78 = PTR_PhysPair_SphereTriangle_0030ace8;
  uRam0042fb7c = DAT_0030acf0;
  uRam0042fb80 = DAT_0030acf4;
  puRam0042fb84 = PTR_Phys_Nop_17_0030acf8;
  uRam0042fb8c = DAT_0030ad04;
  uRam0042fb88 = DAT_0030ad00;
  puRam0042fb90 = PTR_PhysPair_CollideGeneric_Wrap2_0030ad08;
  uRam0042fb98 = DAT_0030ad14;
  uRam0042fb94 = DAT_0030ad10;
  puRam0042fb9c = PTR_Phys_Nop_16_0030ad18;
  uRam0042fba4 = DAT_0030ad24;
  uRam0042fba0 = DAT_0030ad20;
  puRam0042fba8 = PTR_PhysPair_RunSphereBox_0030ad28;
  uRam0042fbb0 = DAT_0030ad34;
  uRam0042fbac = DAT_0030ad30;
  puRam0042fbb4 = PTR_PhysPair_RunSphereBox_0030ad38;
  uRam0042fbbc = DAT_0030ad44;
  uRam0042fbb8 = DAT_0030ad40;
  puRam0042fbc0 = PTR_PhysPair_CollideGeneric_Wrap_0030ad48;
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
  std_ios_base_Init_ctor(0x36f15c);
  __register_global_object(0x36f15c,0x103050,0x42fc50);
  maybe_std_wios_Init_ctor(0x36f160);
  __register_global_object(0x36f160,0x1035a0,0x42fc60);
  return;
}

// 0x00369030  size 0x54
void __sinit_00369030(void)

{
  std_ios_base_Init_ctor(0x36f164);
  __register_global_object(0x36f164,0x103050,0x42fc70);
  maybe_std_wios_Init_ctor(0x36f168);
  __register_global_object(0x36f168,0x1035a0,0x42fc80);
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
  std_ios_base_Init_ctor(0x36f174);
  __register_global_object(0x36f174,0x103050,0x42fc90);
  maybe_std_wios_Init_ctor(0x36f178);
  __register_global_object(0x36f178,0x1035a0,0x42fca0);
  return;
}

// 0x003693d0  size 0x54
void __sinit_003693d0(void)

{
  std_ios_base_Init_ctor(0x36f17c);
  __register_global_object(0x36f17c,0x103050,0x42fcb0);
  maybe_std_wios_Init_ctor(0x36f180);
  __register_global_object(0x36f180,0x1035a0,0x42fcc0);
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
  
  std_ios_base_Init_ctor(0x36f184);
  __register_global_object(0x36f184,0x103050,0x42fcd0);
  maybe_std_wios_Init_ctor(0x36f188);
  __register_global_object(0x36f188,0x1035a0,0x42fce0);
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
  std_ios_base_Init_ctor(0x36f18c);
  __register_global_object(0x36f18c,0x103050,0x430120);
  maybe_std_wios_Init_ctor(0x36f190);
  __register_global_object(0x36f190,0x1035a0,0x430130);
  return;
}

// 0x00369730  size 0x54
void __sinit_00369730(void)

{
  std_ios_base_Init_ctor(0x36f1a0);
  __register_global_object(0x36f1a0,0x103050,0x430140);
  maybe_std_wios_Init_ctor(0x36f1a4);
  __register_global_object(0x36f1a4,0x1035a0,0x430150);
  return;
}

// 0x00369790  size 0x54
void __sinit_00369790(void)

{
  std_ios_base_Init_ctor(0x36f1b0);
  __register_global_object(0x36f1b0,0x103050,0x430160);
  maybe_std_wios_Init_ctor(0x36f1b4);
  __register_global_object(0x36f1b4,0x1035a0,0x430170);
  return;
}

// 0x003697f0  size 0x54
void __sinit_003697f0(void)

{
  std_ios_base_Init_ctor(0x36f1c0);
  __register_global_object(0x36f1c0,0x103050,0x430180);
  maybe_std_wios_Init_ctor(0x36f1c4);
  __register_global_object(0x36f1c4,0x1035a0,0x430190);
  return;
}

// 0x00369850  size 0x54
void __sinit_00369850(void)

{
  std_ios_base_Init_ctor(0x36f1cc);
  __register_global_object(0x36f1cc,0x103050,0x430350);
  maybe_std_wios_Init_ctor(0x36f1d0);
  __register_global_object(0x36f1d0,0x1035a0,0x430360);
  return;
}

// 0x003698b0  size 0x54
void __sinit_003698b0(void)

{
  std_ios_base_Init_ctor(0x36f1d8);
  __register_global_object(0x36f1d8,0x103050,0x430370);
  maybe_std_wios_Init_ctor(0x36f1dc);
  __register_global_object(0x36f1dc,0x1035a0,0x430380);
  return;
}

// 0x00369910  size 0xb4
void __sinit_00369910(void)

{
  std_ios_base_Init_ctor(0x36f1f0);
  __register_global_object(0x36f1f0,0x103050,0x430390);
  maybe_std_wios_Init_ctor(0x36f1f4);
  __register_global_object(0x36f1f4,0x1035a0,0x4303a0);
  puRam0036f200 = &DAT_0036e680;
  puRam0036f204 = &DAT_0036e670;
  puRam0036f208 = &DAT_0036e660;
  puRam0036f20c = &DAT_0036e650;
  puRam0036f210 = &DAT_0036e630;
  puRam0036f214 = &DAT_0036e640;
  puRam0036f218 = &DAT_0036e2f0;
  puRam0036f21c = &DAT_0036e2e0;
  return;
}

// 0x003699d0  size 0x54
void __sinit_003699d0(void)

{
  std_ios_base_Init_ctor(0x36f228);
  __register_global_object(0x36f228,0x103050,0x4303b0);
  maybe_std_wios_Init_ctor(0x36f22c);
  __register_global_object(0x36f22c,0x1035a0,0x4303c0);
  return;
}

// 0x00369a30  size 0x54
void __sinit_00369a30(void)

{
  std_ios_base_Init_ctor(0x36f240);
  __register_global_object(0x36f240,0x103050,0x4303e0);
  maybe_std_wios_Init_ctor(0x36f244);
  __register_global_object(0x36f244,0x1035a0,0x4303f0);
  return;
}

// 0x00369a90  size 0x54
void __sinit_00369a90(void)

{
  std_ios_base_Init_ctor(0x36f248);
  __register_global_object(0x36f248,0x103050,0x430400);
  maybe_std_wios_Init_ctor(0x36f24c);
  __register_global_object(0x36f24c,0x1035a0,0x430410);
  return;
}

// 0x00369af0  size 0x54
void __sinit_00369af0(void)

{
  std_ios_base_Init_ctor(0x36f264);
  __register_global_object(0x36f264,0x103050,0x430420);
  maybe_std_wios_Init_ctor(0x36f268);
  __register_global_object(0x36f268,0x1035a0,0x430430);
  return;
}

// 0x00369b50  size 0x54
void __sinit_00369b50(void)

{
  std_ios_base_Init_ctor(0x36f27c);
  __register_global_object(0x36f27c,0x103050,0x430440);
  maybe_std_wios_Init_ctor(0x36f280);
  __register_global_object(0x36f280,0x1035a0,0x430450);
  return;
}

// 0x00369bb0  size 0x54
void __sinit_00369bb0(void)

{
  std_ios_base_Init_ctor(0x36f288);
  __register_global_object(0x36f288,0x103050,0x430590);
  maybe_std_wios_Init_ctor(0x36f28c);
  __register_global_object(0x36f28c,0x1035a0,0x4305a0);
  return;
}

// 0x00369c10  size 0xc0
void __sinit_00369c10(void)

{
  std_ios_base_Init_ctor(0x36f290);
  __register_global_object(0x36f290,0x103050,0x430610);
  maybe_std_wios_Init_ctor(0x36f294);
  __register_global_object(0x36f294,0x1035a0,0x430620);
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
  std_ios_base_Init_ctor(0x36f29c);
  __register_global_object(0x36f29c,0x103050,0x430720);
  maybe_std_wios_Init_ctor(0x36f2a0);
  __register_global_object(0x36f2a0,0x1035a0,0x430730);
  maybe_Heap_ctor(0x430750);
  __register_global_object(0x430750,0x100860,0x430740);
  return;
}

// 0x00369d50  size 0x54
void __sinit_00369d50(void)

{
  std_ios_base_Init_ctor(0x36f2ac);
  __register_global_object(0x36f2ac,0x103050,0x430768);
  maybe_std_wios_Init_ctor(0x36f2b0);
  __register_global_object(0x36f2b0,0x1035a0,0x430778);
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
  std_ios_base_Init_ctor(0x36f2f0);
  __register_global_object(0x36f2f0,0x103050,0x4364d8);
  maybe_std_wios_Init_ctor(0x36f2f4);
  __register_global_object(0x36f2f4,0x1035a0,0x4364e8);
  return;
}

// 0x00369eb0  size 0x7c
void __sinit_00369eb0(void)

{
  std_ios_base_Init_ctor(0x36f300);
  __register_global_object(0x36f300,0x103050,0x4364f8);
  maybe_std_wios_Init_ctor(0x36f304);
  __register_global_object(0x36f304,0x1035a0,0x436508);
  maybe_Heap_ctor(0x436530);
  __register_global_object(0x436530,0x100860,0x436518);
  return;
}

// 0x00369f30  size 0x54
void __sinit_00369f30(void)

{
  std_ios_base_Init_ctor(0x36f310);
  __register_global_object(0x36f310,0x103050,0x436548);
  maybe_std_wios_Init_ctor(0x36f314);
  __register_global_object(0x36f314,0x1035a0,0x436558);
  return;
}

// 0x00369f90  size 0x54
void __sinit_00369f90(void)

{
  std_ios_base_Init_ctor(0x36f334);
  __register_global_object(0x36f334,0x103050,0x436610);
  maybe_std_wios_Init_ctor(0x36f338);
  __register_global_object(0x36f338,0x1035a0,0x436620);
  return;
}

// 0x00369ff0  size 0x54
void __sinit_00369ff0(void)

{
  std_ios_base_Init_ctor(0x36f340);
  __register_global_object(0x36f340,0x103050,0x436630);
  maybe_std_wios_Init_ctor(0x36f344);
  __register_global_object(0x36f344,0x1035a0,0x436640);
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
  std_ios_base_Init_ctor(0x36f45c);
  __register_global_object(0x36f45c,0x103050,0x469360);
  maybe_std_wios_Init_ctor(0x36f460);
  __register_global_object(0x36f460,0x1035a0,0x469370);
  return;
}

// 0x0036a890  size 0x54
void __sinit_0036a890(void)

{
  std_ios_base_Init_ctor(0x36f46c);
  __register_global_object(0x36f46c,0x103050,0x469380);
  maybe_std_wios_Init_ctor(0x36f470);
  __register_global_object(0x36f470,0x1035a0,0x469390);
  return;
}

// 0x0036a8f0  size 0x54
void __sinit_0036a8f0(void)

{
  std_ios_base_Init_ctor(0x36f480);
  __register_global_object(0x36f480,0x103050,0x4693a0);
  maybe_std_wios_Init_ctor(0x36f484);
  __register_global_object(0x36f484,0x1035a0,0x4693b0);
  return;
}

// 0x0036a950  size 0x54
void __sinit_0036a950(void)

{
  std_ios_base_Init_ctor(0x36f48c);
  __register_global_object(0x36f48c,0x103050,0x4693c0);
  maybe_std_wios_Init_ctor(0x36f490);
  __register_global_object(0x36f490,0x1035a0,0x4693d0);
  return;
}

// 0x0036a9b0  size 0x54
void __sinit_0036a9b0(void)

{
  std_ios_base_Init_ctor(0x36f498);
  __register_global_object(0x36f498,0x103050,0x4693e0);
  maybe_std_wios_Init_ctor(0x36f49c);
  __register_global_object(0x36f49c,0x1035a0,0x4693f0);
  return;
}

// 0x0036aa10  size 0x54
void __sinit_0036aa10(void)

{
  std_ios_base_Init_ctor(0x36f4a8);
  __register_global_object(0x36f4a8,0x103050,0x469400);
  maybe_std_wios_Init_ctor(0x36f4ac);
  __register_global_object(0x36f4ac,0x1035a0,0x469410);
  return;
}

// 0x0036aa70  size 0x54
void __sinit_0036aa70(void)

{
  std_ios_base_Init_ctor(0x36f4b0);
  __register_global_object(0x36f4b0,0x103050,0x469420);
  maybe_std_wios_Init_ctor(0x36f4b4);
  __register_global_object(0x36f4b4,0x1035a0,0x469430);
  return;
}

// 0x0036aad0  size 0x54
void __sinit_0036aad0(void)

{
  std_ios_base_Init_ctor(0x36f4bc);
  __register_global_object(0x36f4bc,0x103050,0x469440);
  maybe_std_wios_Init_ctor(0x36f4c0);
  __register_global_object(0x36f4c0,0x1035a0,0x469450);
  return;
}

// 0x0036ab30  size 0x54
void __sinit_0036ab30(void)

{
  std_ios_base_Init_ctor(0x36f4c8);
  __register_global_object(0x36f4c8,0x103050,0x469460);
  maybe_std_wios_Init_ctor(0x36f4cc);
  __register_global_object(0x36f4cc,0x1035a0,0x469470);
  return;
}

// 0x0036ab90  size 0x54
void __sinit_0036ab90(void)

{
  std_ios_base_Init_ctor(0x36f4d4);
  __register_global_object(0x36f4d4,0x103050,0x469480);
  maybe_std_wios_Init_ctor(0x36f4d8);
  __register_global_object(0x36f4d8,0x1035a0,0x469490);
  return;
}

// 0x0036abf0  size 0x54
void __sinit_0036abf0(void)

{
  std_ios_base_Init_ctor(0x36f4e0);
  __register_global_object(0x36f4e0,0x103050,0x4694a0);
  maybe_std_wios_Init_ctor(0x36f4e4);
  __register_global_object(0x36f4e4,0x1035a0,0x4694b0);
  return;
}

// 0x0036ac50  size 0x54
void __sinit_0036ac50(void)

{
  std_ios_base_Init_ctor(0x36f4ec);
  __register_global_object(0x36f4ec,0x103050,0x4694c0);
  maybe_std_wios_Init_ctor(0x36f4f0);
  __register_global_object(0x36f4f0,0x1035a0,0x4694d0);
  return;
}

// 0x0036acb0  size 0x54
void __sinit_0036acb0(void)

{
  std_ios_base_Init_ctor(0x36f500);
  __register_global_object(0x36f500,0x103050,0x4694e0);
  maybe_std_wios_Init_ctor(0x36f504);
  __register_global_object(0x36f504,0x1035a0,0x4694f0);
  return;
}

// 0x0036ad10  size 0x54
void __sinit_0036ad10(void)

{
  std_ios_base_Init_ctor(0x36f508);
  __register_global_object(0x36f508,0x103050,0x469500);
  maybe_std_wios_Init_ctor(0x36f50c);
  __register_global_object(0x36f50c,0x1035a0,0x469510);
  return;
}

// 0x0036ad70  size 0x54
void __sinit_0036ad70(void)

{
  std_ios_base_Init_ctor(0x36f510);
  __register_global_object(0x36f510,0x103050,0x469520);
  maybe_std_wios_Init_ctor(0x36f514);
  __register_global_object(0x36f514,0x1035a0,0x469530);
  return;
}

// 0x0036add0  size 0x54
void __sinit_0036add0(void)

{
  std_ios_base_Init_ctor(0x36f518);
  __register_global_object(0x36f518,0x103050,0x469540);
  maybe_std_wios_Init_ctor(0x36f51c);
  __register_global_object(0x36f51c,0x1035a0,0x469550);
  return;
}

// 0x0036ae30  size 0x54
void __sinit_0036ae30(void)

{
  std_ios_base_Init_ctor(0x36f520);
  __register_global_object(0x36f520,0x103050,0x469560);
  maybe_std_wios_Init_ctor(0x36f524);
  __register_global_object(0x36f524,0x1035a0,0x469570);
  return;
}

// 0x0036ae90  size 0x54
void __sinit_0036ae90(void)

{
  std_ios_base_Init_ctor(0x36f528);
  __register_global_object(0x36f528,0x103050,0x469580);
  maybe_std_wios_Init_ctor(0x36f52c);
  __register_global_object(0x36f52c,0x1035a0,0x469590);
  return;
}

// 0x0036aef0  size 0x54
void __sinit_0036aef0(void)

{
  std_ios_base_Init_ctor(0x36f530);
  __register_global_object(0x36f530,0x103050,0x4695a0);
  maybe_std_wios_Init_ctor(0x36f534);
  __register_global_object(0x36f534,0x1035a0,0x4695b0);
  return;
}

// 0x0036af50  size 0x54
void __sinit_0036af50(void)

{
  std_ios_base_Init_ctor(0x36f538);
  __register_global_object(0x36f538,0x103050,0x4695c0);
  maybe_std_wios_Init_ctor(0x36f53c);
  __register_global_object(0x36f53c,0x1035a0,0x4695d0);
  return;
}

// 0x0036afb0  size 0x54
void __sinit_0036afb0(void)

{
  std_ios_base_Init_ctor(0x36f54c);
  __register_global_object(0x36f54c,0x103050,0x4695f0);
  maybe_std_wios_Init_ctor(0x36f550);
  __register_global_object(0x36f550,0x1035a0,0x469600);
  return;
}

// 0x0036b010  size 0x54
void __sinit_0036b010(void)

{
  std_ios_base_Init_ctor(0x36f554);
  __register_global_object(0x36f554,0x103050,0x469610);
  maybe_std_wios_Init_ctor(0x36f558);
  __register_global_object(0x36f558,0x1035a0,0x469620);
  return;
}

// 0x0036b070  size 0x54
void __sinit_0036b070(void)

{
  std_ios_base_Init_ctor(0x36f55c);
  __register_global_object(0x36f55c,0x103050,0x469630);
  maybe_std_wios_Init_ctor(0x36f560);
  __register_global_object(0x36f560,0x1035a0,0x469640);
  return;
}

// 0x0036b0d0  size 0x54
void __sinit_0036b0d0(void)

{
  std_ios_base_Init_ctor(0x36f564);
  __register_global_object(0x36f564,0x103050,0x469650);
  maybe_std_wios_Init_ctor(0x36f568);
  __register_global_object(0x36f568,0x1035a0,0x469660);
  return;
}

// 0x0036b130  size 0x54
void __sinit_0036b130(void)

{
  std_ios_base_Init_ctor(0x36f56c);
  __register_global_object(0x36f56c,0x103050,0x469670);
  maybe_std_wios_Init_ctor(0x36f570);
  __register_global_object(0x36f570,0x1035a0,0x469680);
  return;
}

// 0x0036b190  size 0x54
void __sinit_0036b190(void)

{
  std_ios_base_Init_ctor(0x36f574);
  __register_global_object(0x36f574,0x103050,0x469690);
  maybe_std_wios_Init_ctor(0x36f578);
  __register_global_object(0x36f578,0x1035a0,0x4696a0);
  return;
}

// 0x0036b1f0  size 0x54
void __sinit_0036b1f0(void)

{
  std_ios_base_Init_ctor(0x36f57c);
  __register_global_object(0x36f57c,0x103050,0x4696b0);
  maybe_std_wios_Init_ctor(0x36f580);
  __register_global_object(0x36f580,0x1035a0,0x4696c0);
  return;
}

// 0x0036b250  size 0x54
void __sinit_0036b250(void)

{
  std_ios_base_Init_ctor(0x36f584);
  __register_global_object(0x36f584,0x103050,0x4696d0);
  maybe_std_wios_Init_ctor(0x36f588);
  __register_global_object(0x36f588,0x1035a0,0x4696e0);
  return;
}

// 0x0036b2b0  size 0x54
void __sinit_0036b2b0(void)

{
  std_ios_base_Init_ctor(0x36f58c);
  __register_global_object(0x36f58c,0x103050,0x4696f0);
  maybe_std_wios_Init_ctor(0x36f590);
  __register_global_object(0x36f590,0x1035a0,0x469700);
  return;
}

// 0x0036b310  size 0x54
void __sinit_0036b310(void)

{
  std_ios_base_Init_ctor(0x36f594);
  __register_global_object(0x36f594,0x103050,0x469710);
  maybe_std_wios_Init_ctor(0x36f598);
  __register_global_object(0x36f598,0x1035a0,0x469720);
  return;
}

// 0x0036b370  size 0x54
void __sinit_0036b370(void)

{
  std_ios_base_Init_ctor(0x36f59c);
  __register_global_object(0x36f59c,0x103050,0x469730);
  maybe_std_wios_Init_ctor(0x36f5a0);
  __register_global_object(0x36f5a0,0x1035a0,0x469740);
  return;
}

// 0x0036b3d0  size 0x54
void __sinit_0036b3d0(void)

{
  std_ios_base_Init_ctor(0x36f5a4);
  __register_global_object(0x36f5a4,0x103050,0x469750);
  maybe_std_wios_Init_ctor(0x36f5a8);
  __register_global_object(0x36f5a8,0x1035a0,0x469760);
  return;
}

// 0x0036b430  size 0x54
void __sinit_0036b430(void)

{
  std_ios_base_Init_ctor(0x36f5ac);
  __register_global_object(0x36f5ac,0x103050,0x469770);
  maybe_std_wios_Init_ctor(0x36f5b0);
  __register_global_object(0x36f5b0,0x1035a0,0x469780);
  return;
}

// 0x0036b490  size 0x54
void __sinit_0036b490(void)

{
  std_ios_base_Init_ctor(0x36f5b4);
  __register_global_object(0x36f5b4,0x103050,0x469790);
  maybe_std_wios_Init_ctor(0x36f5b8);
  __register_global_object(0x36f5b8,0x1035a0,0x4697a0);
  return;
}

// 0x0036b4f0  size 0x54
void __sinit_0036b4f0(void)

{
  std_ios_base_Init_ctor(0x36f5bc);
  __register_global_object(0x36f5bc,0x103050,0x4697b0);
  maybe_std_wios_Init_ctor(0x36f5c0);
  __register_global_object(0x36f5c0,0x1035a0,0x4697c0);
  return;
}

// 0x0036b550  size 0x54
void __sinit_0036b550(void)

{
  std_ios_base_Init_ctor(0x36f5c4);
  __register_global_object(0x36f5c4,0x103050,0x4697d0);
  maybe_std_wios_Init_ctor(0x36f5c8);
  __register_global_object(0x36f5c8,0x1035a0,0x4697e0);
  return;
}

// 0x0036b5b0  size 0x54
void __sinit_0036b5b0(void)

{
  std_ios_base_Init_ctor(0x36f5cc);
  __register_global_object(0x36f5cc,0x103050,0x4697f0);
  maybe_std_wios_Init_ctor(0x36f5d0);
  __register_global_object(0x36f5d0,0x1035a0,0x469800);
  return;
}

// 0x0036b610  size 0x54
void __sinit_0036b610(void)

{
  std_ios_base_Init_ctor(0x36f5d4);
  __register_global_object(0x36f5d4,0x103050,0x469810);
  maybe_std_wios_Init_ctor(0x36f5d8);
  __register_global_object(0x36f5d8,0x1035a0,0x469820);
  return;
}

// 0x0036b670  size 0x54
void __sinit_0036b670(void)

{
  std_ios_base_Init_ctor(0x36f5f0);
  __register_global_object(0x36f5f0,0x103050,0x469840);
  maybe_std_wios_Init_ctor(0x36f5f4);
  __register_global_object(0x36f5f4,0x1035a0,0x469850);
  return;
}

// 0x0036b6d0  size 0x54
void __sinit_0036b6d0(void)

{
  std_ios_base_Init_ctor(0x36f5f8);
  __register_global_object(0x36f5f8,0x103050,0x469860);
  maybe_std_wios_Init_ctor(0x36f5fc);
  __register_global_object(0x36f5fc,0x1035a0,0x469870);
  return;
}

// 0x0036b730  size 0x54
void __sinit_0036b730(void)

{
  std_ios_base_Init_ctor(0x36f600);
  __register_global_object(0x36f600,0x103050,0x469880);
  maybe_std_wios_Init_ctor(0x36f604);
  __register_global_object(0x36f604,0x1035a0,0x469890);
  return;
}

// 0x0036b790  size 0x54
void __sinit_0036b790(void)

{
  std_ios_base_Init_ctor(0x36f608);
  __register_global_object(0x36f608,0x103050,0x4698a0);
  maybe_std_wios_Init_ctor(0x36f60c);
  __register_global_object(0x36f60c,0x1035a0,0x4698b0);
  return;
}

// 0x0036b7f0  size 0x54
void __sinit_0036b7f0(void)

{
  std_ios_base_Init_ctor(0x36f610);
  __register_global_object(0x36f610,0x103050,0x4698c0);
  maybe_std_wios_Init_ctor(0x36f614);
  __register_global_object(0x36f614,0x1035a0,0x4698d0);
  return;
}

// 0x0036b850  size 0x54
void __sinit_0036b850(void)

{
  std_ios_base_Init_ctor(0x36f618);
  __register_global_object(0x36f618,0x103050,0x4698e0);
  maybe_std_wios_Init_ctor(0x36f61c);
  __register_global_object(0x36f61c,0x1035a0,0x4698f0);
  return;
}

// 0x0036b8b0  size 0x54
void __sinit_0036b8b0(void)

{
  std_ios_base_Init_ctor(0x36f620);
  __register_global_object(0x36f620,0x103050,0x469900);
  maybe_std_wios_Init_ctor(0x36f624);
  __register_global_object(0x36f624,0x1035a0,0x469910);
  return;
}

// 0x0036b910  size 0x54
void __sinit_0036b910(void)

{
  std_ios_base_Init_ctor(0x36f628);
  __register_global_object(0x36f628,0x103050,0x469920);
  maybe_std_wios_Init_ctor(0x36f62c);
  __register_global_object(0x36f62c,0x1035a0,0x469930);
  return;
}

// 0x0036b970  size 0x54
void __sinit_0036b970(void)

{
  std_ios_base_Init_ctor(0x36f630);
  __register_global_object(0x36f630,0x103050,0x469940);
  maybe_std_wios_Init_ctor(0x36f634);
  __register_global_object(0x36f634,0x1035a0,0x469950);
  return;
}

// 0x0036b9d0  size 0x54
void __sinit_0036b9d0(void)

{
  std_ios_base_Init_ctor(0x36f638);
  __register_global_object(0x36f638,0x103050,0x469960);
  maybe_std_wios_Init_ctor(0x36f63c);
  __register_global_object(0x36f63c,0x1035a0,0x469970);
  return;
}

// 0x0036ba30  size 0x54
void __sinit_0036ba30(void)

{
  std_ios_base_Init_ctor(0x36f640);
  __register_global_object(0x36f640,0x103050,0x469980);
  maybe_std_wios_Init_ctor(0x36f644);
  __register_global_object(0x36f644,0x1035a0,0x469990);
  return;
}

// 0x0036ba90  size 0x54
void __sinit_0036ba90(void)

{
  std_ios_base_Init_ctor(0x36f648);
  __register_global_object(0x36f648,0x103050,0x4699a0);
  maybe_std_wios_Init_ctor(0x36f64c);
  __register_global_object(0x36f64c,0x1035a0,0x4699b0);
  return;
}

// 0x0036baf0  size 0x54
void __sinit_0036baf0(void)

{
  std_ios_base_Init_ctor(0x36f650);
  __register_global_object(0x36f650,0x103050,0x4699c0);
  maybe_std_wios_Init_ctor(0x36f654);
  __register_global_object(0x36f654,0x1035a0,0x4699d0);
  return;
}

// 0x0036bb50  size 0x54
void __sinit_0036bb50(void)

{
  std_ios_base_Init_ctor(0x36f658);
  __register_global_object(0x36f658,0x103050,0x4699e0);
  maybe_std_wios_Init_ctor(0x36f65c);
  __register_global_object(0x36f65c,0x1035a0,0x4699f0);
  return;
}

// 0x0036bbb0  size 0x54
void __sinit_0036bbb0(void)

{
  std_ios_base_Init_ctor(0x36f660);
  __register_global_object(0x36f660,0x103050,0x469a00);
  maybe_std_wios_Init_ctor(0x36f664);
  __register_global_object(0x36f664,0x1035a0,0x469a10);
  return;
}

// 0x0036bc10  size 0x54
void __sinit_0036bc10(void)

{
  std_ios_base_Init_ctor(0x36f668);
  __register_global_object(0x36f668,0x103050,0x469a20);
  maybe_std_wios_Init_ctor(0x36f66c);
  __register_global_object(0x36f66c,0x1035a0,0x469a30);
  return;
}

// 0x0036bc70  size 0x54
void __sinit_0036bc70(void)

{
  std_ios_base_Init_ctor(0x36f670);
  __register_global_object(0x36f670,0x103050,0x469a40);
  maybe_std_wios_Init_ctor(0x36f674);
  __register_global_object(0x36f674,0x1035a0,0x469a50);
  return;
}

// 0x0036bcd0  size 0x54
void __sinit_0036bcd0(void)

{
  std_ios_base_Init_ctor(0x36f678);
  __register_global_object(0x36f678,0x103050,0x469a60);
  maybe_std_wios_Init_ctor(0x36f67c);
  __register_global_object(0x36f67c,0x1035a0,0x469a70);
  return;
}

// 0x0036bd30  size 0x54
void __sinit_0036bd30(void)

{
  std_ios_base_Init_ctor(0x36f680);
  __register_global_object(0x36f680,0x103050,0x469a80);
  maybe_std_wios_Init_ctor(0x36f684);
  __register_global_object(0x36f684,0x1035a0,0x469a90);
  return;
}

// 0x0036bd90  size 0x54
void __sinit_0036bd90(void)

{
  std_ios_base_Init_ctor(0x36f688);
  __register_global_object(0x36f688,0x103050,0x469aa0);
  maybe_std_wios_Init_ctor(0x36f68c);
  __register_global_object(0x36f68c,0x1035a0,0x469ab0);
  return;
}

// 0x0036bdf0  size 0x54
void __sinit_0036bdf0(void)

{
  std_ios_base_Init_ctor(0x36f690);
  __register_global_object(0x36f690,0x103050,0x469ac0);
  maybe_std_wios_Init_ctor(0x36f694);
  __register_global_object(0x36f694,0x1035a0,0x469ad0);
  return;
}

// 0x0036be50  size 0x54
void __sinit_0036be50(void)

{
  std_ios_base_Init_ctor(0x36f69c);
  __register_global_object(0x36f69c,0x103050,0x469ae0);
  maybe_std_wios_Init_ctor(0x36f6a0);
  __register_global_object(0x36f6a0,0x1035a0,0x469af0);
  return;
}

// 0x0036beb0  size 0x54
void __sinit_0036beb0(void)

{
  std_ios_base_Init_ctor(0x36f6a4);
  __register_global_object(0x36f6a4,0x103050,0x469b00);
  maybe_std_wios_Init_ctor(0x36f6a8);
  __register_global_object(0x36f6a8,0x1035a0,0x469b10);
  return;
}

// 0x0036bf10  size 0x54
void __sinit_0036bf10(void)

{
  std_ios_base_Init_ctor(0x36f6ac);
  __register_global_object(0x36f6ac,0x103050,0x469b20);
  maybe_std_wios_Init_ctor(0x36f6b0);
  __register_global_object(0x36f6b0,0x1035a0,0x469b30);
  return;
}

// 0x0036bf70  size 0x54
void __sinit_0036bf70(void)

{
  std_ios_base_Init_ctor(0x36f6b8);
  __register_global_object(0x36f6b8,0x103050,0x469b40);
  maybe_std_wios_Init_ctor(0x36f6bc);
  __register_global_object(0x36f6bc,0x1035a0,0x469b50);
  return;
}

// 0x0036bfd0  size 0x54
void __sinit_0036bfd0(void)

{
  std_ios_base_Init_ctor(0x36f6c0);
  __register_global_object(0x36f6c0,0x103050,0x469b60);
  maybe_std_wios_Init_ctor(0x36f6c4);
  __register_global_object(0x36f6c4,0x1035a0,0x469b70);
  return;
}

