// Kaido Racer (SLES-53191) - Ghidra decompilation, not matching source.
// Address range 0x002a0000 - 0x002a4000
#include "ghidra_types.h"

// 0x002a11b0  size 0xb8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32eca0 */

void ScrCarRecGetModelId_Exit(int param_1)

{
  int iVar1;
  undefined8 in_t1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x6c) = 3;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  if (*(int *)(param_1 + 4) < 4) {
    in_t1 = 0xf;
  }
  else if (*(int *)(param_1 + 4) < 8) {
    in_t1 = 0xf0;
  }
  Menu_HandleCursor(param_1 + 4,0,2,0x1f,1,in_t1);
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x002a1270  size 0x1b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32eca0 */

void ScrCarRecGetModelId_Update(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  iVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (iVar1 != 0) {
    param_1[0x1a] = 0;
    param_1[2] = 0;
    param_1[4] = 1;
    if (param_1[1] < 4) {
      param_1[1] = 0;
    }
    else if (param_1[1] < 8) {
      param_1[1] = 4;
    }
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  uVar6 = *(uint *)(&DAT_0032ecf0 + *param_1 * 4);
  if (*param_1 == 5) {
    uVar4 = Profile_Get(0);
    uVar4 = Profile_GetCurrentCar(uVar4);
    uVar3 = CarRec_GetModelId(uVar4);
    lVar5 = CarDb_GetVariant(uVar3);
    if (lVar5 == 1) {
      uVar4 = Profile_Get(0);
      uVar4 = Profile_GetCurrentCar(uVar4);
      cVar2 = CarRec_GetGrade(uVar4);
      if (cVar2 != '\0') {
        uVar6 = 0x7b000000;
      }
    }
    else {
      uVar6 = 0x7b000000;
    }
    lVar5 = scrcareer_step_sub_0029f130(0x19);
    if (lVar5 == 0) {
      uVar6 = uVar6 & 0xfdffffff;
    }
  }
  Menu_HandleCursor(param_1 + 1,0,2,0x1f,1,uVar6);
  iVar1 = param_1[1];
  if (iVar1 == 0x19) {
    param_1[0x1b] = 9;
  }
  else if ((iVar1 == 0) || (iVar1 == 4)) {
    param_1[0x1b] = 2;
  }
  else {
    param_1[0x1b] = 3;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x002a1420  size 0xcc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32eca0 */

void ScrCarRecGetModelId_Enter(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[0x15];
  piVar2[0x15] = 0;
  if (iVar1 != 0) {
    piVar2[0x1a] = -1;
    piVar2[1] = 0;
    piVar2[3] = 0;
    piVar2[0xf] = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
    *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  }
  Menu_HandleCursor(param_1,0,2,5,1,0);
  if (*piVar2 == 4) {
    piVar2[0x1b] = 8;
  }
  else {
    piVar2[0x1b] = 1;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x002a14f0  size 0x28
undefined8 menuscr_leaf_sub_002a14f0(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x002a1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00367210)[(int)param_1])();
    return uVar1;
  }
  return 0x16;
}

// 0x002a1528  size 0x8
/* screen record 0x367230 */

undefined4 screc367230_enter_sub_002a1528(void)

{
  return 1;
}

// 0x002a1530  size 0x8
/* screen record 0x367230 */

undefined4 screc367230_update_sub_002a1530(void)

{
  return 3;
}

// 0x002a1538  size 0x8
/* screen record 0x367230 */

undefined4 screc367230_exit_sub_002a1538(void)

{
  return 4;
}

// 0x002a1540  size 0x8
/* screen record 0x36723c */

undefined4 screc36723c_enter_sub_002a1540(void)

{
  return 5;
}

// 0x002a1548  size 0x8
/* screen record 0x36723c */

undefined4 screc36723c_update_sub_002a1548(void)

{
  return 6;
}

// 0x002a1550  size 0x8
/* screen record 0x36724c */

undefined4 screc36724c_enter_sub_002a1550(void)

{
  return 7;
}

// 0x002a1558  size 0x8
/* screen record 0x36724c */

undefined4 screc36724c_update_sub_002a1558(void)

{
  return 8;
}

// 0x002a1560  size 0x8
/* screen record 0x36724c */

undefined4 screc36724c_exit_sub_002a1560(void)

{
  return 9;
}

// 0x002a1568  size 0x8
/* screen record 0x367258 */

undefined4 screc367258_enter_sub_002a1568(void)

{
  return 10;
}

// 0x002a1570  size 0x8
/* screen record 0x367258 */

undefined4 screc367258_update_sub_002a1570(void)

{
  return 0xb;
}

// 0x002a1578  size 0x18
/* screen record 0x36726c */

undefined4 screc36726c_enter_sub_002a1578(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 0xf;
  }
  return uVar1;
}

// 0x002a1590  size 0x8
/* screen record 0x36726c */

undefined4 screc36726c_update_sub_002a1590(void)

{
  return 0xc;
}

// 0x002a1598  size 0x8
/* screen record 0x36726c */

undefined4 screc36726c_exit_sub_002a1598(void)

{
  return 0x16;
}

// 0x002a15a0  size 0x8
/* screen record 0x367278 */

undefined4 screc367278_enter_sub_002a15a0(void)

{
  return 0x16;
}

// 0x002a15a8  size 0x8
/* screen record 0x367284 */

undefined4 screc367284_exit_sub_002a15a8(void)

{
  return 0x16;
}

// 0x002a15b0  size 0x8
/* screen record 0x367278 */

undefined4 screc367278_update_sub_002a15b0(void)

{
  return 0x12;
}

// 0x002a15b8  size 0x8
/* screen record 0x367278 */

undefined4 screc367278_exit_sub_002a15b8(void)

{
  return 0x11;
}

// 0x002a15c0  size 0x8
/* screen record 0x367284 */

undefined4 screc367284_enter_sub_002a15c0(void)

{
  return 0x13;
}

// 0x002a15c8  size 0x8
/* screen record 0x367284 */

undefined4 screc367284_update_sub_002a15c8(void)

{
  return 0x14;
}

// 0x002a15d0  size 0x18
undefined4 menuscr_leaf_sub_002a15d0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = 0xe;
  }
  else {
    uVar1 = 0xd;
  }
  return uVar1;
}

// 0x002a15e8  size 0xc
undefined4 Menuscr_Nop_9(void)

{
  return 0x16;
}

// 0x002a1600  size 0x84
short scrcareer_step_sub_002a1600(undefined8 param_1,short param_2)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = menuscr_leaf_sub_002a17d0();
  lVar3 = Rival_IsBossId(uVar2);
  if (lVar3 == 1) {
    sVar1 = menuscr_leaf_sub_002a17d0(param_1);
    param_2 = param_2 + sVar1;
  }
  else {
    sVar1 = menuscr_leaf_sub_002a17d0(param_1);
    param_2 = param_2 + sVar1 + -1;
  }
  return param_2;
}

// 0x002a1690  size 0x28
undefined8 menuscr_leaf_sub_002a1690(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x002a16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_003672a0)[(int)param_1])();
    return uVar1;
  }
  return 0;
}

// 0x002a16c8  size 0x8
/* screen record 0x3672a8 */

undefined4 screc3672a8_enter_sub_002a16c8(void)

{
  return 0x1a;
}

// 0x002a16d0  size 0x8
/* screen record 0x3672a8 */

undefined4 screc3672a8_update_sub_002a16d0(void)

{
  return 0x23;
}

// 0x002a16d8  size 0x8
/* screen record 0x3672a8 */

undefined4 screc3672a8_exit_sub_002a16d8(void)

{
  return 0x32;
}

// 0x002a16e0  size 0x8
/* screen record 0x3672b4 */

undefined4 screc3672b4_enter_sub_002a16e0(void)

{
  return 0x3b;
}

// 0x002a16e8  size 0x8
/* screen record 0x3672b4 */

undefined4 screc3672b4_update_sub_002a16e8(void)

{
  return 0x44;
}

// 0x002a16f0  size 0x8
/* screen record 0x3672b4 */

undefined4 screc3672b4_exit_sub_002a16f0(void)

{
  return 0x4d;
}

// 0x002a16f8  size 0x8
/* screen record 0x3672c0 */

undefined4 screc3672c0_enter_sub_002a16f8(void)

{
  return 0x29;
}

// 0x002a1700  size 0x8
/* screen record 0x3672c0 */

undefined4 screc3672c0_update_sub_002a1700(void)

{
  return 0x54;
}

// 0x002a1708  size 0x8
/* screen record 0x3672c0 */

undefined4 screc3672c0_exit_sub_002a1708(void)

{
  return 0x5a;
}

// 0x002a1710  size 0x8
/* screen record 0x3672cc */

undefined4 screc3672cc_enter_sub_002a1710(void)

{
  return 0x60;
}

// 0x002a1718  size 0x8
/* screen record 0x3672cc */

undefined4 screc3672cc_update_sub_002a1718(void)

{
  return 0x66;
}

// 0x002a1720  size 0x8
/* screen record 0x3672cc */

undefined4 screc3672cc_exit_sub_002a1720(void)

{
  return 0x6a;
}

// 0x002a1728  size 0x8
/* screen record 0x3672d8 */

undefined4 screc3672d8_enter_sub_002a1728(void)

{
  return 0x6d;
}

// 0x002a1730  size 0x8
/* screen record 0x3672d8 */

undefined4 screc3672d8_update_sub_002a1730(void)

{
  return 0x70;
}

// 0x002a1738  size 0x8
/* screen record 0x3672d8 */

undefined4 screc3672d8_exit_sub_002a1738(void)

{
  return 0x76;
}

// 0x002a1740  size 0x8
/* screen record 0x3672e4 */

undefined4 screc3672e4_enter_sub_002a1740(void)

{
  return 0x7c;
}

// 0x002a1748  size 0x8
/* screen record 0x3672e4 */

undefined4 screc3672e4_update_sub_002a1748(void)

{
  return 0x82;
}

// 0x002a1750  size 0x8
/* screen record 0x3672e4 */

undefined4 screc3672e4_exit_sub_002a1750(void)

{
  return 0x88;
}

// 0x002a1758  size 0x8
/* screen record 0x3672f0 */

undefined4 screc3672f0_enter_sub_002a1758(void)

{
  return 0x92;
}

// 0x002a1760  size 0x8
/* screen record 0x3672f0 */

undefined4 screc3672f0_update_sub_002a1760(void)

{
  return 0x97;
}

// 0x002a1768  size 0x8
/* screen record 0x3672f0 */

undefined4 screc3672f0_exit_sub_002a1768(void)

{
  return 0x9c;
}

// 0x002a1770  size 0x8
/* screen record 0x3672fc */

undefined4 screc3672fc_enter_sub_002a1770(void)

{
  return 0xa1;
}

// 0x002a1778  size 0x8
/* screen record 0x3672fc */

undefined4 screc3672fc_update_sub_002a1778(void)

{
  return 0x8c;
}

// 0x002a1780  size 0x8
/* screen record 0x3672fc */

undefined4 screc3672fc_exit_sub_002a1780(void)

{
  return 0x162;
}

// 0x002a1788  size 0x8
/* screen record 0x367308 */

undefined4 screc367308_enter_sub_002a1788(void)

{
  return 0x162;
}

// 0x002a1790  size 0x8
/* screen record 0x367314 */

undefined4 screc367314_exit_sub_002a1790(void)

{
  return 0x162;
}

// 0x002a1798  size 0x8
/* screen record 0x367308 */

undefined4 screc367308_update_sub_002a1798(void)

{
  return 0xa8;
}

// 0x002a17a0  size 0x8
/* screen record 0x367308 */

undefined4 screc367308_exit_sub_002a17a0(void)

{
  return 0xa3;
}

// 0x002a17a8  size 0x8
/* screen record 0x367314 */

undefined4 screc367314_enter_sub_002a17a8(void)

{
  return 0xa9;
}

// 0x002a17b0  size 0x8
/* screen record 0x367314 */

undefined4 screc367314_update_sub_002a17b0(void)

{
  return 0xac;
}

// 0x002a17b8  size 0x8
undefined4 Menuscr_Nop_10(void)

{
  return 0x161;
}

// 0x002a17c0  size 0xc
undefined8 Menuscr_Nop_11(void)

{
  return 0;
}

// 0x002a17d0  size 0x28
undefined8 menuscr_leaf_sub_002a17d0(ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x002a17f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_00367330)[(int)param_1])();
    return uVar1;
  }
  return 0;
}

// 0x002a1808  size 0x8
/* screen record 0x367338 */

undefined4 screc367338_enter_sub_002a1808(void)

{
  return 0x12;
}

// 0x002a1810  size 0x8
/* screen record 0x367338 */

undefined4 screc367338_update_sub_002a1810(void)

{
  return 0x1b;
}

// 0x002a1818  size 0x8
/* screen record 0x367338 */

undefined4 screc367338_exit_sub_002a1818(void)

{
  return 0x2a;
}

// 0x002a1820  size 0x8
/* screen record 0x367344 */

undefined4 screc367344_enter_sub_002a1820(void)

{
  return 0x33;
}

// 0x002a1828  size 0x8
/* screen record 0x367344 */

undefined4 screc367344_update_sub_002a1828(void)

{
  return 0x3c;
}

// 0x002a1830  size 0x8
/* screen record 0x367344 */

undefined4 screc367344_exit_sub_002a1830(void)

{
  return 0x45;
}

// 0x002a1838  size 0x8
/* screen record 0x367350 */

undefined4 screc367350_enter_sub_002a1838(void)

{
  return 0x24;
}

// 0x002a1840  size 0x8
/* screen record 0x367350 */

undefined4 screc367350_update_sub_002a1840(void)

{
  return 0x4f;
}

// 0x002a1848  size 0x8
/* screen record 0x367350 */

undefined4 screc367350_exit_sub_002a1848(void)

{
  return 0x55;
}

// 0x002a1850  size 0x8
/* screen record 0x36735c */

undefined4 screc36735c_enter_sub_002a1850(void)

{
  return 0x5b;
}

// 0x002a1858  size 0x8
/* screen record 0x36735c */

undefined4 screc36735c_update_sub_002a1858(void)

{
  return 0x61;
}

// 0x002a1860  size 0x8
/* screen record 0x36735c */

undefined4 screc36735c_exit_sub_002a1860(void)

{
  return 0x67;
}

// 0x002a1868  size 0x8
/* screen record 0x367368 */

undefined4 screc367368_enter_sub_002a1868(void)

{
  return 0x6b;
}

// 0x002a1870  size 0x8
/* screen record 0x367368 */

undefined4 screc367368_update_sub_002a1870(void)

{
  return 0x6e;
}

// 0x002a1878  size 0x8
/* screen record 0x367368 */

undefined4 screc367368_exit_sub_002a1878(void)

{
  return 0x71;
}

// 0x002a1880  size 0x8
/* screen record 0x367374 */

undefined4 screc367374_enter_sub_002a1880(void)

{
  return 0x77;
}

// 0x002a1888  size 0x8
/* screen record 0x367374 */

undefined4 screc367374_update_sub_002a1888(void)

{
  return 0x7d;
}

// 0x002a1890  size 0x8
/* screen record 0x367374 */

undefined4 screc367374_exit_sub_002a1890(void)

{
  return 0x83;
}

// 0x002a1898  size 0x8
/* screen record 0x367380 */

undefined4 screc367380_enter_sub_002a1898(void)

{
  return 0x8d;
}

// 0x002a18a0  size 0x8
/* screen record 0x367380 */

undefined4 screc367380_update_sub_002a18a0(void)

{
  return 0x93;
}

// 0x002a18a8  size 0x8
/* screen record 0x367380 */

undefined4 screc367380_exit_sub_002a18a8(void)

{
  return 0x98;
}

// 0x002a18b0  size 0x8
/* screen record 0x36738c */

undefined4 screc36738c_enter_sub_002a18b0(void)

{
  return 0x9d;
}

// 0x002a18b8  size 0x8
/* screen record 0x36738c */

undefined4 screc36738c_update_sub_002a18b8(void)

{
  return 0x89;
}

// 0x002a18c0  size 0x8
/* screen record 0x36738c */

undefined4 screc36738c_exit_sub_002a18c0(void)

{
  return 0x162;
}

// 0x002a18c8  size 0x8
/* screen record 0x367398 */

undefined4 screc367398_enter_sub_002a18c8(void)

{
  return 0x162;
}

// 0x002a18d0  size 0x8
/* screen record 0x3673a4 */

undefined4 screc3673a4_exit_sub_002a18d0(void)

{
  return 0x162;
}

// 0x002a18d8  size 0x8
/* screen record 0x367398 */

undefined4 screc367398_update_sub_002a18d8(void)

{
  return 0xa4;
}

// 0x002a18e0  size 0x8
/* screen record 0x367398 */

undefined4 screc367398_exit_sub_002a18e0(void)

{
  return 0xa2;
}

// 0x002a18e8  size 0x8
/* screen record 0x3673a4 */

undefined4 screc3673a4_enter_sub_002a18e8(void)

{
  return 0xa9;
}

// 0x002a18f0  size 0x8
/* screen record 0x3673a4 */

undefined4 screc3673a4_update_sub_002a18f0(void)

{
  return 0xaa;
}

// 0x002a18f8  size 0x8
undefined4 Menuscr_Nop_12(void)

{
  return 0xad;
}

// 0x002a1900  size 0xc
undefined8 Menuscr_Nop_13(void)

{
  return 0;
}

// 0x002a1910  size 0x80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32760c */

void screc32760c_exit_sub_002a1910(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x544) = 0xfffffffe;
  *(undefined4 *)(_g_MenuMgr + 0x594) = 0;
  iVar1 = _g_MenuMgr + 0x534;
  do {
    *(undefined2 *)(iVar1 + 0x14) = 0x162;
    iVar2 = iVar2 + 7;
    *(undefined2 *)(iVar1 + 0x16) = 0x162;
    *(undefined2 *)(iVar1 + 0x18) = 0x162;
    *(undefined2 *)(iVar1 + 0x1a) = 0x162;
    *(undefined2 *)(iVar1 + 0x1c) = 0x162;
    *(undefined2 *)(iVar1 + 0x1e) = 0x162;
    *(undefined2 *)(iVar1 + 0x20) = 0x162;
    iVar1 = iVar1 + 0xe;
  } while (iVar2 < 0x15);
  return;
}

// 0x002a1990  size 0x60
/* screen record 0x32760c */

void screc32760c_update_sub_002a1990(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x48);
  if (lVar1 != 0) {
    (*(code *)(&PTR_ScrCarRecGetModelId_Enter_0032eca0)[*(int *)(iVar2 + 0x4c)])(param_1);
    scrcareer_step_sub_0029e910(param_1);
    Menu_RequestTransition(iVar2 + 0x48);
  }
  return;
}

// 0x002a19f0  size 0x78
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32760c */

void screc32760c_enter_sub_002a19f0(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 1;
  param_1[0x19] = 0;
  param_1[0x17] = 1;
  param_1[0x15] = 1;
  param_1[0x18] = 0;
  *param_1 = 0;
  iVar3 = Profile_Get(0);
  iVar4 = showroom_step_sub_002d3ba0(0);
  iVar2 = _g_MenuMgr;
  sVar1 = *(short *)(iVar3 + iVar4 * 2 + 0x13ee);
  *(undefined4 *)(_g_MenuMgr + 0x538) = 2;
  *(int *)(iVar2 + 0x53c) = (int)sVar1;
  return;
}

// 0x002a1a70  size 0x16c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menuscr_step_sub_002a1a70(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  iVar3 = (int)param_1;
  if (uVar2 != 0x10) {
    if (uVar2 != 0x20) {
      return;
    }
    if (*(int *)(iVar3 + 0x8f8) == -2) {
      Se_PlayMenu(8);
      iVar1 = *(int *)(iVar3 + 0x8f8);
    }
    else {
      Se_PlayMenu(6);
      iVar1 = *(int *)(iVar3 + 0x8f8);
    }
    if (-1 < iVar1) {
      *(int *)(iVar3 + 0x8e0) = iVar1;
      return;
    }
    if (iVar1 == -1) {
      MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
      return;
    }
    return;
  }
  if (*(int *)(iVar3 + 0x8fc) == -2) {
    Se_PlayMenu(8);
  }
  else {
    if (*(int *)(iVar3 + 0x8fc) == 4) {
      scrgarage_step_sub_002a1be0(param_1);
      Se_PlayMenu(0xc);
      iVar1 = *(int *)(iVar3 + 0x8fc);
      goto LAB_002a1b60;
    }
    Se_PlayMenu(5);
  }
  iVar1 = *(int *)(iVar3 + 0x8fc);
LAB_002a1b60:
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      MenuMgr_GetScreenParam(*(undefined4 *)(_g_MenuMgr + 0x24));
    }
  }
  else {
    *(int *)(iVar3 + 0x8e0) = iVar1;
  }
  return;
}

// 0x002a1be0  size 0x154
void scrgarage_step_sub_002a1be0(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 4) == 1) {
    iVar6 = *(int *)(param_1 + 0xc) + 1;
    uVar3 = *(undefined2 *)(*(int *)(param_1 + 8) * 2 + param_1 + 0x8c);
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        uVar4 = Profile_Get(0);
        Profile_GetCarValue(uVar4,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    iVar5 = *(int *)(param_1 + 0x28) * 4 + param_1;
    sVar2 = *(short *)(iVar5 + 0x30);
    uVar1 = *(undefined1 *)(iVar5 + 0x32);
    iVar5 = Profile_Get(0);
    uVar3 = *(undefined2 *)(iVar5 + *(int *)(param_1 + 0x20) * 2 + 0x13ee);
    iVar5 = Profile_Get(0);
    if (*(short *)(iVar5 + sVar2 * 2 + 0x1420) == 99) {
      uVar4 = Profile_Get(0);
      Profile_GetCarValue(uVar4,sVar2);
      uVar4 = Profile_Get(0);
      Profile_ResetCarParts(uVar4,uVar3,uVar1);
    }
    else {
      uVar4 = Profile_Get(0);
      Profile_ResetCarParts(uVar4,uVar3,uVar1);
      uVar4 = Profile_Get(0);
      Profile_GetCarValue(uVar4,sVar2);
    }
  }
  return;
}

// 0x002a1d40  size 0x104
void scrgarage_step_sub_002a1d40(int param_1,int *param_2,int param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  *param_2 = 0;
  iVar3 = Profile_Get(0);
  uVar7 = 0;
  uVar1 = *(undefined2 *)(iVar3 + param_3 * 2 + 0x13ee);
  do {
    uVar5 = Profile_Get(0);
    uVar5 = Profile_GetCarRecordB(uVar5,uVar1);
    psVar4 = (short *)CarRec_GetPartSlotB(uVar5,uVar7 & 0xff);
    sVar2 = *psVar4;
    lVar6 = Rival_IsBossId(sVar2);
    if (((lVar6 == 0) && (sVar2 != -1)) && ((char)psVar4[1] == '\x1f')) {
      *(short *)(param_1 + *param_2 * 4) = sVar2;
      *(char *)(param_1 + *param_2 * 4 + 2) = (char)uVar7;
      *param_2 = *param_2 + 1;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x15);
  return;
}

// 0x002a1e50  size 0x158
void scrcareer_step_sub_002a1e50(int param_1,long param_2,int *param_3)

{
  short sVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = 0;
  *param_3 = 0;
  do {
    if (iVar7 != 0x20) {
      sVar3 = menuscr_leaf_sub_002a17d0(iVar7);
      lVar6 = (long)sVar3;
      sVar3 = menuscr_leaf_sub_002a1690(iVar7);
      if ((lVar6 < 0x162) && ((long)sVar3 < 0x162)) {
        for (; lVar6 <= sVar3; lVar6 = (long)((int)lVar6 + 1)) {
          sVar5 = (short)lVar6;
          lVar2 = Rival_IsBossId(sVar5);
          if (lVar2 == 0) {
            iVar4 = Profile_Get(0);
            sVar1 = *(short *)(iVar4 + sVar5 * 2 + 0x1420);
            if (0 < sVar1) {
              *(short *)(param_1 + *param_3 * 2) = sVar5;
              if (param_2 != 0) {
                *(int *)((int)param_2 + *param_3 * 4) = (int)sVar1;
              }
              *param_3 = *param_3 + 1;
            }
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x22);
  return;
}

// 0x002a1fb0  size 0x80
void menuscr_input_sub_002a1fb0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[0x239];
  piVar2[0x239] = 0;
  if (iVar1 != 0) {
    *piVar2 = 0;
    piVar2[0x23e] = 5;
  }
  Menu_HandleCursor(param_1,0,2,1,1,0);
  if (*piVar2 == 0) {
    piVar2[0x23f] = 4;
  }
  else {
    piVar2[0x23f] = piVar2[0x23e];
  }
  return;
}

// 0x002a2030  size 0x320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ed1c */

void screc32ed1c_exit_sub_002a2030(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 4;
  }
  uVar1 = Profile_Get(0);
  lVar2 = Garage_FindCar(uVar1);
  iVar3 = (int)lVar2;
  Menu_HandleCursor(param_1 + 0x20,0,8,iVar3 + -1,1,0);
  iVar4 = *(int *)(param_1 + 0x28);
  Menu_HandleCursor(param_1 + 0x28,0,2,*(int *)(param_1 + 0x84) + -1,0,0);
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
  if (uVar5 == 2) {
    if (iVar4 != *(int *)(param_1 + 0x28)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      iVar4 = *(int *)(param_1 + 0x84) + -1;
      if (6 < iVar4) {
        iVar4 = 6;
      }
      if (iVar4 < *(int *)(param_1 + 0x1c)) {
        if (*(int *)(param_1 + 0x84) < 8) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
        else {
          *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 6;
        }
      }
    }
  }
  else if (uVar5 == 1) {
    if ((iVar4 != *(int *)(param_1 + 0x28)) &&
       (*(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1, *(int *)(param_1 + 0x1c) < 0)) {
      if (*(int *)(param_1 + 0x84) < 8) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x84) + -1;
      }
      else {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x14) = 1;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
  }
  else if (uVar5 == 8) {
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if (0xb < iVar3) {
      iVar3 = 0xb;
    }
    if (iVar3 < *(int *)(param_1 + 0x18)) {
      if (lVar2 < 0xd) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      else {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x14) = 2;
        *(undefined4 *)(param_1 + 0x18) = 0xb;
      }
    }
  }
  else {
    if (uVar5 != 4) {
      iVar4 = *(int *)(param_1 + 0x24);
      goto LAB_002a2278;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    if (*(int *)(param_1 + 0x18) < 0) {
      if (lVar2 < 0xd) {
        *(int *)(param_1 + 0x18) = iVar3 + -1;
      }
      else {
        *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x400000;
        *(undefined4 *)(param_1 + 0x14) = 3;
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x24);
LAB_002a2278:
  if (iVar4 == *(int *)(param_1 + 0x20)) {
    iVar4 = *(int *)(param_1 + 0x84);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    scrgarage_step_sub_002a1d40(param_1 + 0x30,param_1 + 0x84,*(undefined4 *)(param_1 + 0x20));
    iVar4 = *(int *)(param_1 + 0x84);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x8fc) = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x8fc) = 6;
  }
  return;
}

// 0x002a2360  size 0x48
/* screen record 0x32ed1c */

void screc32ed1c_update_sub_002a2360(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 4) == 1) {
      *(undefined4 *)(param_1 + 0x8fc) = 0;
      *(undefined4 *)(param_1 + 0x8f8) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x8fc) = 5;
      *(undefined4 *)(param_1 + 0x8f8) = 5;
    }
  }
  return;
}

// 0x002a23b0  size 0x9c
/* screen record 0x32ed1c */

void screc32ed1c_enter_sub_002a23b0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[0x239];
  piVar2[0x239] = 0;
  if (iVar1 != 0) {
    *piVar2 = 0;
    if (piVar2[piVar2[2] + 0xd4] < 2) {
      piVar2[0x23e] = 1;
    }
    else {
      piVar2[0x23e] = 2;
    }
  }
  Menu_HandleCursor(param_1,0,2,1,1,0);
  if (*piVar2 == 0) {
    piVar2[0x23f] = 4;
  }
  else {
    piVar2[0x23f] = piVar2[0x23e];
  }
  return;
}

// 0x002a2450  size 0x68
/* screen record 0x32ed10 */

void screc32ed10_exit_sub_002a2450(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x8fc) = 3;
    *(undefined4 *)(param_1 + 0x8f8) = 1;
  }
  Menu_HandleCursor(param_1 + 0xc,0,2,*(int *)(*(int *)(param_1 + 8) * 4 + param_1 + 0x350) + -1,0,0
                   );
  return;
}

// 0x002a24c0  size 0x208
/* screen record 0x32ed10 */

void screc32ed10_update_sub_002a24c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x88);
  }
  else {
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    scrcareer_step_sub_002a1e50(param_1 + 0x8c,param_1 + 0x350,param_1 + 0x88);
    iVar1 = *(int *)(param_1 + 0x88);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x8fc) = 0;
    return;
  }
  Menu_HandleCursor(param_1 + 8,0,2,iVar1 + -1,1,0);
  uVar2 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar2) == 0) {
    uVar2 = 0x100000;
  }
  else if (uVar2 == 0x80000) {
    uVar2 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar2 = 0x100000;
  }
  if (uVar2 == 4) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) =
         ((1 - *(int *)(param_1 + 0x88)) * -10 + iVar1) % *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x10) =
         ((1 - *(int *)(param_1 + 0x88)) * -10 + *(int *)(param_1 + 0x10)) %
         *(int *)(param_1 + 0x88);
    if (*(int *)(param_1 + 8) == iVar1) {
      Se_PlayMenu(8);
    }
    else {
      Se_PlayMenu(7);
    }
  }
  else {
    if (uVar2 != 8) {
      iVar1 = *(int *)(param_1 + 8);
      goto LAB_002a267c;
    }
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = (iVar1 + 10) % *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x10) = (*(int *)(param_1 + 0x10) + 10) % *(int *)(param_1 + 0x88);
    if (*(int *)(param_1 + 8) == iVar1) {
      Se_PlayMenu();
    }
    else {
      Se_PlayMenu(7);
    }
  }
  iVar1 = *(int *)(param_1 + 8);
LAB_002a267c:
  if (*(int *)(iVar1 * 4 + param_1 + 0x350) < 2) {
    *(undefined4 *)(param_1 + 0x8fc) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x8fc) = 2;
  }
  return;
}

// 0x002a26d0  size 0xe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ed10 */

void screc32ed10_enter_sub_002a26d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  if (iVar1 != 0) {
    uVar3 = Profile_Get(0);
    lVar4 = Garage_FindCar(uVar3);
    *(undefined4 *)(param_1 + 0x8f8) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    uVar2 = showroom_step_sub_002d3ba0(0);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (lVar4 < 0xd) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  Menu_HandleCursor(param_1 + 4,0,2,1,1,0);
  if (*(int *)(param_1 + 4) == 1) {
    *(undefined4 *)(param_1 + 0x8fc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x8fc) = 5;
  }
  *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 0x1c000;
  return;
}

// 0x002a27b0  size 0x8
/* screen record 0x327618 */

void screc327618_exit_sub_002a27b0(void)

{
  return;
}

// 0x002a27c0  size 0x60
/* screen record 0x327618 */

void screc327618_update_sub_002a27c0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x8d8);
  if (lVar1 != 0) {
    (*(code *)(&PTR_screc32ed10_enter_sub_002a26d0_0032ed10)[*(int *)(iVar2 + 0x8dc)])(param_1);
    menuscr_step_sub_002a1a70(param_1);
    Menu_RequestTransition(iVar2 + 0x8d8);
  }
  return;
}

// 0x002a2820  size 0x30
/* screen record 0x327618 */

void screc327618_enter_sub_002a2820(int param_1)

{
  *(undefined4 *)(param_1 + 0x8d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x8e8) = 1;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x8ec) = 1;
  *(undefined4 *)(param_1 + 0x8e4) = 1;
  *(undefined4 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 0x002a2850  size 0x238
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_step_sub_002a2850(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = piRam0036f468[2];
  if ((piRam0036f468[4] & uVar4) == 0) {
    uVar4 = 0x100000;
  }
  else if (uVar4 == 0x80000) {
    uVar4 = 0x80000;
  }
  else if (*piRam0036f468 != 1) {
    uVar4 = 0x100000;
  }
  if (uVar4 == 0x1000) {
    if (param_1[6] == 0) {
      Se_PlayMenu(5);
      *(int *)(_g_MenuMgr + 0x2c) = *param_1;
      MenuMgr_GetScreenParam(0x23);
    }
  }
  else if (uVar4 == 0x10) {
    Se_PlayMenu(5);
    if (param_1[0xe] == 3) {
      iVar2 = Profile_Get(0);
      uVar1 = *(undefined2 *)(iVar2 + *param_1 * 2 + 0x13ee);
      uVar3 = Profile_Get(0);
      Garage_IsSlotUsed(uVar3,uVar1);
      param_1[2] = *param_1;
    }
    iVar2 = param_1[0xe];
    if (iVar2 < 0) {
      if (iVar2 == -2) {
        *(int *)(_g_MenuMgr + 0x2c) = *param_1;
        MenuMgr_GetScreenParam(0x25);
      }
      else if (iVar2 == -3) {
        *(int *)(_g_MenuMgr + 0x2c) = *param_1;
        MenuMgr_GetScreenParam(0x23);
      }
      else if (iVar2 == -1) {
        MenuMgr_GetScreenParam(0xb);
      }
    }
    else {
      param_1[7] = iVar2;
    }
  }
  else if (uVar4 == 0x20) {
    Se_PlayMenu(6);
    iVar2 = param_1[0xd];
    if (iVar2 < 0) {
      if (iVar2 == -2) {
        *(int *)(_g_MenuMgr + 0x2c) = *param_1;
        MenuMgr_GetScreenParam(0x25);
      }
      else if (iVar2 == -3) {
        *(int *)(_g_MenuMgr + 0x2c) = *param_1;
        MenuMgr_GetScreenParam(0x23);
      }
      else if (iVar2 == -1) {
        MenuMgr_GetScreenParam(0xb);
      }
    }
    else {
      param_1[7] = iVar2;
    }
  }
  return;
}

// 0x002a2a90  size 0x30
/* screen record 0x32ed3c */

void screc32ed3c_enter_sub_002a2a90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

// 0x002a2ac0  size 0x7c
/* screen record 0x32ed30 */

void screc32ed30_exit_sub_002a2ac0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  Menu_HandleCursor(param_1 + 4,0,2,1,1,0);
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}

// 0x002a2b40  size 0x88
/* screen record 0x32ed30 */

void screc32ed30_update_sub_002a2b40(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1[8];
  param_1[8] = 0;
  if (iVar1 != 0) {
    param_1[0xd] = 0;
  }
  uVar2 = 0;
  if (*param_1 == param_1[2]) {
    uVar2 = 2;
  }
  Menu_HandleCursor(param_1 + 1,0,2,1,1,uVar2);
  if (param_1[1] == 0) {
    param_1[0xe] = 2;
  }
  else {
    param_1[0xe] = -2;
  }
  return;
}

// 0x002a2bd0  size 0xe8
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ed30 */

void screc32ed30_enter_sub_002a2bd0(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  iVar2 = piVar6[8];
  piVar6[8] = 0;
  if (iVar2 != 0) {
    piVar6[0xe] = 1;
    piVar6[0xd] = -1;
    piVar6[1] = 0;
    piVar6[3] = 0;
  }
  uVar4 = Profile_Get(0);
  iVar2 = Garage_FindCar(uVar4);
  lVar5 = Menu_HandleCursor(param_1,0,8,iVar2 + -1,1,0);
  if (lVar5 == 1) {
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654);
    iVar3 = Profile_Get(0);
    iVar2 = _g_MenuMgr;
    sVar1 = *(short *)(iVar3 + *piVar6 * 2 + 0x13ee);
    *(undefined4 *)(_g_MenuMgr + 0x538) = 2;
    *(int *)(iVar2 + 0x53c) = (int)sVar1;
  }
  uVar4 = Profile_Get(0);
  uVar4 = Garage_FindCar(uVar4);
  Menu_HandleList(piVar6 + 3,piVar6 + 4,uVar4,0xc,0,8);
  return;
}

// 0x002a2cc0  size 0x2c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327624 */

void screc327624_exit_sub_002a2cc0(void)

{
  *(undefined4 *)(_g_MenuMgr + 0x5a0) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x5e8) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x60c) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x634) = 0;
  *(undefined4 *)(_g_MenuMgr + 0x644) = 0;
  return;
}

// 0x002a2cf0  size 0x60
/* screen record 0x327624 */

void screc327624_update_sub_002a2cf0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = Menu_IsInputIdle(iVar2 + 0x14);
  if (lVar1 != 0) {
    (*(code *)(&PTR_screc32ed30_enter_sub_002a2bd0_0032ed30)[*(int *)(iVar2 + 0x18)])(param_1);
    scrgarage_step_sub_002a2850(param_1);
    Menu_RequestTransition(iVar2 + 0x14);
  }
  return;
}

// 0x002a2d50  size 0x230
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x327624 */

void screc327624_enter_sub_002a2d50(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  showroom_step_sub_002d3990(param_1 + 2,8,0);
  *(undefined4 *)(_g_MenuMgr + 0x5a0) = 1;
  *(undefined4 *)(_g_MenuMgr + 0x5e8) = 1;
  *(undefined4 *)(_g_MenuMgr + 0x60c) = 1;
  *(undefined4 *)(_g_MenuMgr + 0x634) = 1;
  *(undefined4 *)(_g_MenuMgr + 0x644) = 1;
  switch(*(undefined4 *)(_g_MenuMgr + 0x34)) {
  case 1:
    *(undefined4 *)(_g_MenuMgr + 0x598) = 0;
    break;
  case 2:
    *(undefined4 *)(_g_MenuMgr + 0x5dc) = 0;
    break;
  case 3:
    *(undefined4 *)(_g_MenuMgr + 0x5fc) = 0;
    break;
  case 4:
    *(undefined4 *)(_g_MenuMgr + 0x618) = 0;
  }
  iVar3 = 0;
  *(undefined4 *)(_g_MenuMgr + 0x544) = 0xfffffffe;
  *(undefined4 *)(_g_MenuMgr + 0x594) = 0;
  iVar2 = _g_MenuMgr + 0x534;
  do {
    *(undefined2 *)(iVar2 + 0x14) = 0x162;
    iVar3 = iVar3 + 7;
    *(undefined2 *)(iVar2 + 0x16) = 0x162;
    *(undefined2 *)(iVar2 + 0x18) = 0x162;
    *(undefined2 *)(iVar2 + 0x1a) = 0x162;
    *(undefined2 *)(iVar2 + 0x1c) = 0x162;
    *(undefined2 *)(iVar2 + 0x1e) = 0x162;
    *(undefined2 *)(iVar2 + 0x20) = 0x162;
    iVar2 = iVar2 + 0xe;
  } while (iVar3 < 0x15);
  Menu_ShowDialog(_g_MenuMgr + 0x654,0x116,3);
  iVar2 = *(int *)(_g_MenuMgr + 0x24);
  if (iVar2 == 0x25) {
    *param_1 = *(int *)(_g_MenuMgr + 0x2c);
    param_1[5] = -1;
    param_1[6] = 1;
    param_1[7] = 1;
    param_1[9] = 1;
    param_1[0xc] = 0;
    param_1[10] = 1;
    param_1[8] = 1;
    param_1[0xb] = 0;
    param_1[1] = 1;
  }
  else if (iVar2 == 0x23) {
    if (*param_1 != *(int *)(_g_MenuMgr + 0x2c)) {
      *param_1 = *(int *)(_g_MenuMgr + 0x2c);
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    }
    param_1[5] = -1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 1;
    param_1[0xc] = 0;
    param_1[10] = 1;
    param_1[8] = 1;
    param_1[0xb] = 0;
  }
  else {
    if (iVar2 != 0xb) {
      iVar2 = *param_1;
      goto LAB_002a2f1c;
    }
    *param_1 = param_1[2];
    param_1[5] = -1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 1;
    param_1[0xc] = 0;
    param_1[10] = 1;
    param_1[8] = 1;
    param_1[0xb] = 0;
  }
  iVar2 = *param_1;
LAB_002a2f1c:
  if (iVar2 < 0xc) {
    param_1[4] = iVar2;
  }
  else {
    param_1[4] = 0;
  }
  iVar3 = Profile_Get(0);
  iVar2 = _g_MenuMgr;
  sVar1 = *(short *)(iVar3 + *param_1 * 2 + 0x13ee);
  *(undefined4 *)(_g_MenuMgr + 0x538) = 2;
  *(int *)(iVar2 + 0x53c) = (int)sVar1;
  return;
}

// 0x002a2f80  size 0x128
void scrgarage_step_sub_002a2f80(int param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if ((uRam0036f770 & 2) != 0) {
    iVar4 = 0;
    iVar3 = param_1;
    do {
      lVar2 = CarDb_GetVariant(iVar4);
      if (((((lVar2 != 2) && (iVar4 != 0xf7)) && (iVar4 != 0xf8)) &&
          ((iVar4 != 0xff && (iVar4 != 0x100)))) &&
         ((iVar4 != 0x101 && ((iVar4 != 0xf9 && (iVar4 != 0xfa)))))) {
        *(undefined4 *)(iVar3 + 0x2d4) = 1;
        uVar1 = MenuText_CarFullName(iVar4,0xffffffffffffffff);
        *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) | (long)(1 << (uVar1 & 0x1f));
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x120);
  }
  if ((uRam0036f770 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x754) = 7;
    *(long *)(param_1 + 0x60) = (long)((1 << (*(uint *)(param_1 + 0x754) & 0x1f)) + -1);
  }
  return;
}

// 0x002a30b0  size 0x11c
ulong scroptions_input_sub_002a30b0(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = Pad_GetPort(0,0);
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar2 = 0;
  if (iVar1 == 0) {
    iRam0036f77c = iRam0036f77c + 1;
    if (300 < iRam0036f77c) {
      iRam0036f77c = 0;
      iRam0036f774 = 0;
      iRam0036f778 = 0;
    }
  }
  else {
    if ((uRam0036f770 & 1) == 0) {
      if (iVar1 == *(int *)(&LAB_0032ed90 + iRam0036f774 * 4)) {
        iRam0036f774 = iRam0036f774 + 1;
        if (iRam0036f774 == 10) {
          iRam0036f774 = 0;
          uVar2 = 1;
          Se_PlayMenuVol(4,0x60);
        }
      }
      else {
        iRam0036f774 = 0;
      }
    }
    if ((uRam0036f770 & 2) == 0) {
      if (iVar1 == *(int *)(&LAB_0032edc0 + iRam0036f778 * 4)) {
        iRam0036f778 = iRam0036f778 + 1;
        if (iRam0036f778 == 10) {
          iRam0036f778 = 0;
          uVar2 = uVar2 | 2;
          Se_PlayMenuVol(4,0x60);
        }
      }
      else {
        iRam0036f778 = 0;
      }
    }
    iRam0036f77c = 0;
  }
  return uVar2;
}

// 0x002a31d0  size 0x8
undefined4 menuscr_leaf_sub_002a31d0(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 5;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 7;
    break;
  case 7:
    uVar1 = 6;
    break;
  case 0xffffffff:
    uVar1 = 8;
    break;
  default:
    uVar1 = 1;
  }
  return uVar1;
}

// 0x002a31e0  size 0x8
undefined4 menuscr_leaf_sub_002a31e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 5;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 7;
    break;
  case 7:
    uVar1 = 6;
    break;
  case 0xffffffff:
    uVar1 = 8;
    break;
  default:
    uVar1 = 1;
  }
  return uVar1;
}

// 0x002a31f0  size 0x10
undefined1 menuscr_leaf_sub_002a31f0(undefined8 param_1,int param_2)

{
  return (&DAT_0036ee2c)[param_2];
}

// 0x002a3200  size 0x458
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrgarage_step_sub_002a3200(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [24];
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 auStack_150 [16];
  undefined2 auStack_130 [42];
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [24];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 auStack_80 [16];
  undefined2 auStack_60 [42];
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x884) == 3) {
    Subtitle_Hide(5,0xffff);
    iVar4 = *(int *)(param_1 + 0x884);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x884);
  }
  if (iVar4 == 8) {
    Menu_BlockInput(_g_MenuMgr + 0x654);
  }
  if (param_2 < 0) {
    *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 1;
    if (param_2 == -2) {
      MenuMgr_GetScreenParam(0x16);
      uRam0036ee28 = *(undefined4 *)(param_1 + 8);
    }
    else {
      if (param_2 == -3) {
        MenuMgr_GetScreenParam(0x19);
      }
      else {
        if (*(int *)(param_1 + 0x24) == 1) {
          iVar4 = Profile_Get(0);
          uVar2 = *(undefined2 *)(iVar4 + *(int *)(param_1 + 0x90) * 2 + 0x13ee);
          uVar6 = Profile_Get(0);
          Profile_CopyCarRecord(&uStack_1a0,uVar6,uVar2);
          puVar10 = auStack_18c;
          puVar8 = auStack_bc;
          iVar4 = 0x17;
          uStack_d0 = uStack_1a0;
          uStack_c0 = uStack_190;
          uStack_ce = uStack_19e;
          uStack_cc = uStack_19c;
          uStack_c8 = uStack_198;
          uStack_c4 = uStack_194;
          do {
            iVar4 = iVar4 + -1;
            *puVar8 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + 1;
          } while (0 < iVar4);
          puVar12 = auStack_150;
          puVar11 = auStack_80;
          iVar4 = 8;
          uStack_98 = uStack_168;
          uStack_94 = uStack_164;
          uStack_90 = uStack_160;
          uStack_a4 = uStack_174;
          uStack_a0 = uStack_170;
          uStack_9c = uStack_16c;
          uStack_8c = uStack_15c;
          uStack_88 = uStack_158;
          uStack_84 = uStack_154;
          do {
            iVar4 = iVar4 + -1;
            uVar2 = puVar12[1];
            *puVar11 = *puVar12;
            puVar11[1] = uVar2;
            puVar12 = puVar12 + 2;
            puVar11 = puVar11 + 2;
          } while (0 < iVar4);
          puVar12 = auStack_130;
          puVar11 = auStack_60;
          iVar4 = 0x15;
          do {
            iVar4 = iVar4 + -1;
            uVar2 = puVar12[1];
            *puVar11 = *puVar12;
            puVar11[1] = uVar2;
            puVar12 = puVar12 + 2;
            puVar11 = puVar11 + 2;
          } while (0 < iVar4);
          uStack_c = uStack_dc;
          uStack_8 = uStack_d8;
        }
        else {
          CarRec_ResetColors(&uStack_d0);
          CarRec_Build(&uStack_d0,*(undefined2 *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x34),
                       *(int *)(param_1 + 0x38) == 0,0);
        }
        if (*(int *)(param_1 + 8) == 0) {
          RaceCtx_SetMode(2);
          iVar4 = *(int *)(param_1 + 0x28);
        }
        else {
          if (*(int *)(param_1 + 8) == 1) {
            RaceCtx_SetMode(3);
          }
          iVar4 = *(int *)(param_1 + 0x28);
        }
        uRam0036f1ec = (uint)(iVar4 != 2);
        iVar4 = *(int *)(param_1 + 0x38);
        uVar6 = 0xb;
        if (*(int *)(param_1 + 8) != 0) {
          uVar6 = 0xc;
        }
        uVar5 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x10));
        bVar1 = *(int *)(param_1 + 0x24) != 1;
        if (bVar1) {
          iVar9 = *(int *)(param_1 + 0x1c);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x1c);
        }
        cVar7 = (&DAT_0036ee30)[iVar9];
        if (*(int *)(param_1 + 0x10) - 5U < 2) {
          if (cVar7 == '\x01') {
            cVar7 = '\x02';
          }
          else if (cVar7 == '\x04') {
            cVar7 = '\x05';
          }
        }
        RaceSetup_FromQuickRace
                  (uVar6,iVar4 == 0,uVar5,cVar7,(&DAT_0036ee34)[*(int *)(param_1 + 0x20)],
                   (&DAT_0036ee2c)[*(int *)(param_1 + 0x18)],&uStack_d0,!bVar1);
        MenuMgr_GetScreenParam(0xfffffffffffffffe);
      }
      uRam0036ee28 = *(undefined4 *)(param_1 + 8);
    }
  }
  else if ((param_2 == 6) && (*(int *)(param_1 + 0x28) == 0)) {
    iVar4 = MenuMgr_UpdateTransition(0x17);
    uVar3 = 4;
    *(undefined1 *)(iVar4 + 0x778) = 1;
    if (*(int *)(param_1 + 8) != 0) {
      uVar3 = 5;
    }
    *(undefined1 *)(iVar4 + 0x779) = uVar3;
    *(undefined4 *)(iVar4 + 0x77c) = 1;
    uVar3 = Menu_MapCursorToItem(*(undefined4 *)(param_1 + 0x10));
    *(undefined1 *)(iVar4 + 0x780) = uVar3;
    *(undefined *)(iVar4 + 0x781) = (&DAT_0036ee2c)[*(int *)(param_1 + 0x18)];
    cVar7 = (&DAT_0036ee30)[*(int *)(param_1 + 0x1c)];
    if (*(int *)(param_1 + 0x10) - 5U < 2) {
      if (cVar7 == '\x01') {
        cVar7 = '\x02';
      }
      else if (cVar7 == '\x04') {
        cVar7 = '\x05';
      }
    }
    *(char *)(iVar4 + 0x782) = cVar7;
    *(undefined *)(iVar4 + 0x783) = (&DAT_0036ee34)[*(int *)(param_1 + 0x20)];
    MenuMgr_GetScreenParam(0x17);
  }
  else {
    if (((param_2 == 7) && (*(int *)(param_1 + 0x884) == 8)) ||
       ((param_2 == 8 && (*(int *)(param_1 + 0x884) == 7)))) {
      *(uint *)(_g_MenuMgr + 0x28) = *(uint *)(_g_MenuMgr + 0x28) | 1;
    }
    *(int *)(param_1 + 0x888) = param_2;
  }
  return;
}

// 0x002a3660  size 0x7a4
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void scrrecord_input_sub_002a3660(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_490 [576];
  undefined1 auStack_250 [576];
  uint auStack_10 [4];
  
  iVar2 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar2 != 0) {
    param_1[1] = 2;
    *param_1 = 2;
    param_1[0x15] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if (param_1[0x15] == 0) {
    iVar7 = param_1[0x14];
    iVar3 = param_1[0x10];
    lVar8 = Menu_HandleCursor(param_1 + 0x14,0,2,9,0,0);
    lVar9 = Menu_HandleCursor(param_1 + 0x10,0,8,7,1,param_1[0x18]);
    UiMgr_FindLayout(0x10e);
    uVar14 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar14) == 0) {
      uVar14 = 0x100000;
    }
    else if (uVar14 == 0x80000) {
      uVar14 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar14 = 0x100000;
    }
    if (uVar14 == 0x1000) {
      Se_PlayMenu(7);
      param_1[0x11] = param_1[0x11] != 0 ^ 1;
    }
    uVar15 = piRam0036f468[2];
    if ((piRam0036f468[4] & uVar15) == 0) {
      uVar15 = 0x100000;
    }
    else if (uVar15 == 0x80000) {
      uVar15 = 0x80000;
    }
    else if (*piRam0036f468 != 1) {
      uVar15 = 0x100000;
    }
    if (uVar15 == 0x2000) {
      Se_PlayMenu(7);
      param_1[0x12] = param_1[0x12] != 0 ^ 1;
    }
    iVar4 = param_1[0x14];
    if ((3 < iVar4 - param_1[0x13]) || (iVar4 < (int)param_1[0x13])) {
      if (iVar7 < iVar4) {
        param_1[0x13] = param_1[0x13] + 1;
        param_1[0x15] = 1;
        uVar6 = UiRes_GetLayoutData(0x38d);
        iVar7 = UiMgr_FindLayout(0x10e);
        iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
        *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
        *(undefined4 *)(iVar7 + 0x334) = 0;
        *(undefined4 *)(iVar7 + 0x324) = 0;
        if (*(int *)(iVar7 + 0x334) == 0) {
          *(undefined4 *)(iVar7 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar7 + 0x330) = 1;
        }
        *(undefined4 *)(iVar7 + 0x324) = 0;
        if (*(int *)(iVar7 + 0x334) == 0) {
          *(undefined4 *)(iVar7 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar7 + 0x330) = 1;
        }
        *(undefined4 *)(iVar7 + 0x32c) = 0;
        *(undefined4 *)(iVar7 + 0x334) = uVar6;
        *(undefined4 *)(iVar7 + 0x330) = 1;
      }
      else if (iVar4 < iVar7) {
        param_1[0x13] = param_1[0x13] + -1;
        param_1[0x15] = 2;
        uVar6 = UiRes_GetLayoutData(0x388);
        iVar7 = UiMgr_FindLayout(0x10e);
        iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
        *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
        *(undefined4 *)(iVar7 + 0x334) = 0;
        *(undefined4 *)(iVar7 + 0x324) = 0;
        if (*(int *)(iVar7 + 0x334) == 0) {
          *(undefined4 *)(iVar7 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar7 + 0x330) = 1;
        }
        *(undefined4 *)(iVar7 + 0x324) = 0;
        if (*(int *)(iVar7 + 0x334) == 0) {
          *(undefined4 *)(iVar7 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar7 + 0x330) = 1;
        }
        *(undefined4 *)(iVar7 + 0x32c) = 0;
        *(undefined4 *)(iVar7 + 0x334) = uVar6;
        *(undefined4 *)(iVar7 + 0x330) = 1;
      }
    }
    iVar7 = param_1[0x10];
    if (iVar3 != iVar7) {
      bVar5 = iVar3 < iVar7;
      lVar10 = abs(iVar3 - iVar7);
      if (lVar10 != 1) {
        bVar5 = !bVar5;
      }
      if (bVar5) {
        param_1[0x15] = 4;
        uVar6 = UiRes_GetLayoutData(0x38a);
        iVar7 = UiMgr_FindLayout(0x10e);
        iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
        *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
        *(undefined4 *)(iVar7 + 0x334) = 0;
        *(undefined4 *)(iVar7 + 0x324) = 0;
        if (*(int *)(iVar7 + 0x334) == 0) {
          *(undefined4 *)(iVar7 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar7 + 0x330) = 1;
        }
        *(undefined4 *)(iVar7 + 0x324) = 0;
        if (*(int *)(iVar7 + 0x334) == 0) {
          *(undefined4 *)(iVar7 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar7 + 0x330) = 1;
        }
        *(undefined4 *)(iVar7 + 0x32c) = 0;
        *(undefined4 *)(iVar7 + 0x334) = uVar6;
        *(undefined4 *)(iVar7 + 0x330) = 1;
      }
      else {
        param_1[0x15] = 5;
        uVar6 = UiRes_GetLayoutData(0x38c);
        iVar7 = UiMgr_FindLayout(0x10e);
        iVar7 = *_g_UiMgr + iVar7 * 0x4f4;
        *(undefined4 *)(iVar7 + 0x328) = 0xffffffff;
        *(undefined4 *)(iVar7 + 0x334) = 0;
        *(undefined4 *)(iVar7 + 0x324) = 0;
        if (*(int *)(iVar7 + 0x334) == 0) {
          *(undefined4 *)(iVar7 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar7 + 0x330) = 1;
        }
        *(undefined4 *)(iVar7 + 0x324) = 0;
        if (*(int *)(iVar7 + 0x334) == 0) {
          *(undefined4 *)(iVar7 + 0x330) = 0;
        }
        else {
          *(undefined4 *)(iVar7 + 0x330) = 1;
        }
        *(undefined4 *)(iVar7 + 0x32c) = 0;
        *(undefined4 *)(iVar7 + 0x334) = uVar6;
        *(undefined4 *)(iVar7 + 0x330) = 1;
      }
    }
    if (uVar15 == 0x2000 || (uVar14 == 0x1000 || (lVar9 != 0 || (lVar8 != 0 || iVar2 != 0)))) {
      uVar11 = RaceTbl_Ptr_5fa0();
      uVar12 = maybe_RaceTbl_GetCount();
      uVar13 = Menu_MapCursorToItem(param_1[0x10]);
      uVar1 = (&DAT_0036ee2c)[param_1[0x11]];
      if (param_1[2] == 0) {
        if (param_1[0x12] == 0) {
          uVar11 = RaceTbl_GetCourseEntryB(uVar11,0,uVar1,uVar13);
          menuscr_leaf_sub_002a57e0(param_1 + 0x1ff,uVar11);
          scrrecord_step_sub_002a5080
                    (param_1 + 0x1fb,param_1 + param_1[0x14] + 0x1ff,uVar13,uVar1,0);
          *(undefined1 *)((int)param_1 + 0x7f9) = 0;
          return;
        }
        uVar11 = RaceTbl_GetCourseEntryB(uVar11,1,uVar1,uVar13);
        menuscr_leaf_sub_002a57e0(param_1 + 0x1ff,uVar11);
        scrrecord_step_sub_002a5080(param_1 + 0x1fb,param_1 + param_1[0x14] + 0x1ff,uVar13,uVar1,1);
      }
      else if (param_1[0x12] == 0) {
        uVar11 = RaceTbl_GetCourseEntry(uVar12,0,uVar1,uVar13);
        menuscr_leaf_sub_002a5790(param_1 + 0x209,uVar11);
        iVar2 = param_1[0x14];
        auStack_10[3] = 0;
        if (*(int *)param_1[iVar2 + 0x209] < 0) {
          iVar2 = 0;
          do {
            iVar7 = iVar2;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ec) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ed) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ee) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ef) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7f0) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7f1) = 0x2d;
            iVar2 = iVar7 + 6;
          } while (iVar7 + 6 < 7);
          *(undefined1 *)((int)param_1 + iVar7 + 0x7f2) = 0x2d;
        }
        else {
          auStack_10[2] = 1;
          menuscr_leaf_sub_002a51b0(auStack_10 + 2,param_1[iVar2 + 0x209],uVar13,uVar1,0);
          auStack_10[2] =
               auStack_10[2] & 0xf000001f |
               (*(uint *)(param_1[iVar2 + 0x209] + 0x10) & 0x7fffff) << 5;
          Password_Decode(auStack_250,auStack_10 + 2,param_1 + 0x1fb);
        }
      }
      else {
        uVar11 = RaceTbl_GetCourseEntry(uVar12,1,uVar1,uVar13);
        menuscr_leaf_sub_002a5790(param_1 + 0x209,uVar11);
        iVar2 = param_1[0x14];
        auStack_10[1] = 0;
        if (*(int *)param_1[iVar2 + 0x209] < 0) {
          iVar2 = 0;
          do {
            iVar7 = iVar2;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ec) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ed) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ee) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7ef) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7f0) = 0x2d;
            *(undefined1 *)((int)param_1 + iVar7 + 0x7f1) = 0x2d;
            iVar2 = iVar7 + 6;
          } while (iVar7 + 6 < 7);
          *(undefined1 *)((int)param_1 + iVar7 + 0x7f2) = 0x2d;
        }
        else {
          auStack_10[0] = 1;
          menuscr_leaf_sub_002a51b0(auStack_10,param_1[iVar2 + 0x209],uVar13,uVar1,1);
          auStack_10[0] =
               auStack_10[0] & 0xf000001f |
               (*(uint *)(param_1[iVar2 + 0x209] + 0x10) & 0x7fffff) << 5;
          Password_Decode(auStack_490,auStack_10,param_1 + 0x1fb);
        }
      }
      *(undefined1 *)((int)param_1 + 0x7f9) = 0;
    }
  }
  return;
}

// 0x002a3e10  size 0xa8
/* screen record 0x32ed60 */

void ScrCarDbGetModelEntry_Exit(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar1 != 0) {
    param_1[1] = 0xffffffff;
    if ((param_1[9] == 1) || (lVar2 = MenuText_CarFullNameDefault(param_1[0xc]), lVar2 == 0)) {
      *param_1 = 8;
    }
    else {
      *param_1 = 9;
    }
    lVar2 = Options_Get_14();
    param_1[0xe] = (uint)(lVar2 == 0);
  }
  Menu_HandleCursor(param_1 + 0xe,0,2,1,1,0);
  return;
}

// 0x002a3ec0  size 0xb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ed60 */

void ScrCarDbGetModelEntry_Update(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x223];
  param_1[0x223] = 0;
  if ((iVar1 != 0) && (param_1[1] = 10, param_1[0x220] == 8)) {
    uVar2 = CarDb_GetModelEntry(param_1[0xc]);
    param_1[0x1d7] = uVar2;
    param_1[0x1d8] = 0;
    param_1[0xd] = 0;
  }
  if (param_1[9] == 1) {
    *param_1 = 6;
  }
  else {
    *param_1 = 8;
  }
  Menu_HandleCursor(param_1 + 0xd,0,8,param_1[0x1d7] + -1,1,0);
  *(undefined4 *)(_g_MenuMgr + 0x544) = param_1[0xd];
  return;
}

// 0x002a3f70  size 0x270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* screen record 0x32ed60 */

void ScrCarDbGetModelEntry_Enter(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iStack_4;
  
  iVar2 = param_1[0x223];
  param_1[0x223] = 0;
  if (iVar2 != 0) {
    Menu_ShowDialog(_g_MenuMgr + 0x654,0x120,4);
    if (param_1[0x220] - 6 < 2) {
      param_1[0x24] = 0;
      param_1[0x23] = 0;
      if (param_1[9] == 1) {
        uVar4 = Profile_Get(0);
        uVar1 = Garage_FindCar(uVar4);
        param_1[0x22] = uVar1;
      }
      else {
        iStack_4 = 0;
        param_1[0x22] = 0;
        MenuText_CountCars(&iStack_4,1,param_1[0xb],param_1 + 0xb5);
        iVar2 = iStack_4;
        do {
          *(short *)((int)param_1 + param_1[0x22] * 2 + 0x94) = (short)iStack_4;
          param_1[0x22] = param_1[0x22] + 1;
          MenuText_CountCars(&iStack_4,1,param_1[0xb],param_1 + 0xb5);
        } while (iVar2 != iStack_4);
      }
      Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
      iVar2 = param_1[0x220];
    }
    else {
      iVar2 = param_1[0x220];
    }
    if (iVar2 == 9) {
      uVar1 = CarDb_GetModelEntry(param_1[0xc]);
      param_1[0x1d7] = uVar1;
      param_1[0x1d8] = 0;
      param_1[0xd] = 0;
      *(undefined4 *)(_g_MenuMgr + 0x544) = param_1[0xd];
    }
  }
  if (param_1[9] == 1) {
    *param_1 = 6;
    param_1[1] = 10;
  }
  else {
    *param_1 = 7;
    param_1[1] = 9;
  }
  lVar3 = Menu_HandleCursor(param_1 + 0x24,0,8,param_1[0x22] + -1,1,0);
  if (lVar3 == 0) {
    iVar2 = param_1[9];
  }
  else {
    Menu_SetCursorAlpha(_g_MenuMgr + 0x654,1);
    iVar2 = param_1[9];
  }
  if (iVar2 == 1) {
    Menu_HandleList(param_1 + 0x1d9,param_1 + 0x23,param_1[0x22],0xc,0,8);
    iVar2 = param_1[9];
  }
  else {
    Menu_HandleList(param_1 + 0x1d9,param_1 + 0x23,param_1[0x22],0xc,0,8);
    lVar3 = MenuText_CarFullNameDefault(param_1[0xc]);
    if (lVar3 == 0) {
      param_1[1] = 10;
    }
    iVar2 = param_1[9];
  }
  if (iVar2 == 1) {
    iVar2 = Profile_Get(0);
    param_1[0xc] = (int)*(short *)(iVar2 + param_1[0x24] * 2 + 0x13ee);
    iVar2 = _g_MenuMgr;
    uVar1 = param_1[0xc];
    *(undefined4 *)(_g_MenuMgr + 0x538) = 2;
    *(undefined4 *)(iVar2 + 0x53c) = uVar1;
  }
  else {
    param_1[0xc] = (int)*(short *)((int)param_1 + param_1[0x24] * 2 + 0x94);
    iVar2 = _g_MenuMgr;
    uVar1 = param_1[0xc];
    *(undefined4 *)(_g_MenuMgr + 0x538) = 0;
    *(undefined4 *)(iVar2 + 0x53c) = uVar1;
  }
  return;
}

