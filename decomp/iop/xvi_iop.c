/* XVI_IOP.IRX: Ghidra decompilation (scripts/iop_export.py). IOP R3000 code. */
// 0x000000c0  size 0x38

/* sceSif init checks then RPC init */

void XviIop_InitSif(void)

{
  int iVar1;
  
  iVar1 = sifman_29();
  if (iVar1 == 0) {
    sifman_5();
  }
  sifcmd_14(0);
  return;
}


// 0x000000f8  size 0x4c

/* AllocSysMemory; prints "Memory allocate failed" */

int XviIop_AllocMemory(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = AllocSysMemory(0,param_1,0);
  if (iVar1 == 0) {
    printf(0xbe0,param_1);
    iVar1 = 0;
  }
  return iVar1;
}


// 0x00000144  size 0x40

/* FreeSysMemory; prints "Memory release failed" */

undefined4 XviIop_FreeMemory(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FreeSysMemory();
  uVar2 = 0;
  if (iVar1 != 0) {
    printf(0xc00,param_1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// 0x00000184  size 0x74

/* sif DMA with interrupts suspended; optionally waits */

int XviIop_SetDma(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  
  local_1c = 0;
  local_28 = param_2;
  local_24 = param_1;
  local_20 = param_3;
  CpuSuspendIntr(local_18);
  iVar1 = sifman_7(&local_28,1);
  CpuResumeIntr(local_18[0]);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (param_4 != 0) {
      XviIop_WaitDma(iVar1,param_4);
    }
    iVar2 = iVar1;
  }
  return iVar2;
}


// 0x000001f8  size 0x44

/* polls the DMA status until done */

void XviIop_WaitDma(undefined4 param_1,int param_2)

{
  int iVar1;
  
  do {
    iVar1 = sifman_8(param_1);
    if (iVar1 < 0) {
      return;
    }
  } while (param_2 != 0);
  return;
}


// 0x0000023c  size 0xd8

/* matches "name=value" module arguments and converts with XviIop_Atoi */

undefined4 XviIop_ParseArgs(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = 1;
    if (1 < param_2) {
      puVar5 = (undefined4 *)(param_3 + 4);
      do {
        uVar4 = *puVar5;
        uVar6 = puVar5[1];
        uVar2 = strlen(*param_1);
        iVar3 = strncmp(*param_1,uVar4,uVar2);
        if (iVar3 == 0) {
          iVar3 = XviIop_Atoi(uVar6);
          param_1[1] = iVar3;
        }
        iVar1 = iVar1 + 2;
        puVar5 = puVar5 + 2;
      } while (iVar1 < param_2);
    }
    param_1 = param_1 + 2;
    iVar1 = *param_1;
  }
  return 0;
}


// 0x00000320  size 0x34

int XviIop_StrLen(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_1 != '\0') {
    iVar1 = 1;
    do {
      iVar2 = iVar1;
      iVar1 = iVar2 + 1;
    } while (param_1[iVar2] != '\0');
  }
  return iVar2;
}


// 0x00000354  size 0x2c

char * XviIop_StrCpy(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  while( true ) {
    cVar1 = *param_2;
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  return param_1;
}


// 0x00000380  size 0x40

/* StrLen + StrCpy */

int XviIop_StrCat(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = XviIop_StrLen();
  XviIop_StrCpy(param_1 + iVar1,param_2);
  return param_1;
}


// 0x000004b8  size 0x5c

/* optional '-' then decimal digits */

int XviIop_Atoi(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = (int)*param_1;
  iVar3 = 1;
  if (iVar1 != 0x2d) goto LAB_000004fc;
  iVar3 = -1;
  while( true ) {
    param_1 = param_1 + 1;
    iVar1 = (int)*param_1;
LAB_000004fc:
    if ((iVar1 == 0) || (9 < iVar1 - 0x30U)) break;
    iVar2 = iVar2 * 10 + -0x30 + iVar1;
  }
  return iVar2 * iVar3;
}


// 0x00000590  size 0x13c

/* CreateThread + StartThread; prints "Server thread create/start failed" or "Server installed ver"
    */

undefined4 XviServer_Start(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  XviIop_InitSif();
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[4];
  param_1[3] = param_2[5];
  param_1[4] = param_2[6];
  local_28 = 0x2000000;
  local_20 = 0x760;
  local_18 = param_2[7];
  local_1c = param_2[8];
  local_24 = param_1;
  iVar1 = CreateThread(&local_28);
  param_1[5] = iVar1;
  if (iVar1 < 1) {
    printf(0xc20,*(undefined4 *)*param_1);
    iVar1 = param_2[7];
    uVar2 = 0xc48;
  }
  else {
    iVar1 = StartThread(iVar1,param_1);
    if (iVar1 == 0) {
      printf(0xc7c,*(undefined4 *)*param_1,*(undefined2 *)(*param_2 + 4),param_2[2],param_2[3]);
      return 0;
    }
    iVar1 = *(int *)*param_1;
    uVar2 = 0xc5c;
  }
  printf(uVar2,iVar1);
  return 0xffffffff;
}


// 0x000006cc  size 0x94

/* TerminateThread + DeleteThread + unregister; prints "Server thread delete failed" */

undefined4 XviServer_Stop(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = TerminateThread(param_1[5]);
  if ((iVar1 == 0) && (iVar1 = DeleteThread(param_1[5]), iVar1 == 0)) {
    iVar1 = XviServer_Unregister(param_1);
    if (iVar1 != -1) {
      return 0;
    }
    uVar3 = *(undefined4 *)*param_1;
    uVar2 = 0xcd0;
  }
  else {
    uVar3 = *(undefined4 *)*param_1;
    uVar2 = 0xcac;
  }
  printf(uVar2,uVar3);
  return 0xffffffff;
}


// 0x00000760  size 0x38

/* registers the RPC server then runs the sifcmd loop */

undefined4 XviServer_Thread(int param_1)

{
  int iVar1;
  
  iVar1 = XviServer_Register();
  if (iVar1 == 0) {
    sifcmd_22(param_1 + 0x18);
  }
  return 0;
}


// 0x00000798  size 0x5c

/* sets up the RPC queue and registers the server */

undefined4 XviServer_Register(int param_1)

{
  sifcmd_19(param_1 + 0x18,*(undefined4 *)(param_1 + 0x14));
  sifcmd_17(param_1 + 0x30,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(param_1 + 0xc),0,0,param_1 + 0x18);
  return 0;
}


// 0x000007f4  size 0x58

/* removes the server and queue ("Server un registed failed") */

undefined4 XviServer_Unregister(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sifcmd_24(param_1 + 0x30,param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = sifcmd_25(param_1 + 0x18);
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x00000850  size 0xb8

/* binds an RPC client by GUID, retrying; creates the client semaphore ("Client module bind failed",
   "Client Re entrant Semapho create failed") */

undefined4 XviClient_Bind(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  do {
    iVar2 = sifcmd_15(param_1,param_2,0);
    if (iVar2 < 0) {
      printf(0xcf0,param_2);
      return 0xffffffff;
    }
    iVar2 = 0x270e;
    do {
      bVar1 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  } while (*(int *)(param_1 + 0x24) == 0);
  uStack_18 = 1;
  uStack_14 = 1;
  auStack_20[0] = 0;
  iVar2 = CreateSema(auStack_20);
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 < 1) {
    printf(0xd1c);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// 0x00000908  size 0x24

/* DeleteSema on the client semaphore */

undefined4 XviClient_Unbind(int param_1)

{
  DeleteSema(*(undefined4 *)(param_1 + 0x28));
  return 0;
}


// 0x00000938  size 0xa8

/* RPC call serialised by the client semaphore */

undefined4 XviClient_Call(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  WaitSema(*(undefined4 *)(param_1 + 0x28));
  uVar1 = sifcmd_16(param_1,*param_2,param_2[1] == 0,param_2[3],param_2[2],param_2[5],param_2[4],
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  SignalSema(*(undefined4 *)(param_1 + 0x28));
  if (param_2[1] != 0) {
    uVar1 = *(undefined4 *)param_2[5];
  }
  return uVar1;
}


// 0x000009f4  size 0x8

void AllocSysMemory(void)

{
  return;
}


// 0x000009fc  size 0x8

void FreeSysMemory(void)

{
  return;
}


// 0x00000a20  size 0x8

void CpuSuspendIntr(void)

{
  return;
}


// 0x00000a28  size 0x8

void CpuResumeIntr(void)

{
  return;
}


// 0x00000a4c  size 0x8

void RegisterLibraryEntries(void)

{
  return;
}


// 0x00000a70  size 0x8

void sifcmd_14(void)

{
  return;
}


// 0x00000a78  size 0x8

void sifcmd_15(void)

{
  return;
}


// 0x00000a80  size 0x8

void sifcmd_16(void)

{
  return;
}


// 0x00000a88  size 0x8

void sifcmd_17(void)

{
  return;
}


// 0x00000a90  size 0x8

void sifcmd_19(void)

{
  return;
}


// 0x00000a98  size 0x8

void sifcmd_22(void)

{
  return;
}


// 0x00000aa0  size 0x8

void sifcmd_24(void)

{
  return;
}


// 0x00000aa8  size 0x8

void sifcmd_25(void)

{
  return;
}


// 0x00000acc  size 0x8

void sifman_5(void)

{
  return;
}


// 0x00000ad4  size 0x8

void sifman_7(void)

{
  return;
}


// 0x00000adc  size 0x8

void sifman_8(void)

{
  return;
}


// 0x00000ae4  size 0x8

void sifman_29(void)

{
  return;
}


// 0x00000b08  size 0x8

void printf(void)

{
  return;
}


// 0x00000b2c  size 0x8

void strlen(void)

{
  return;
}


// 0x00000b34  size 0x8

void strncmp(void)

{
  return;
}


// 0x00000b58  size 0x8

void CreateThread(void)

{
  return;
}


// 0x00000b60  size 0x8

void DeleteThread(void)

{
  return;
}


// 0x00000b68  size 0x8

void StartThread(void)

{
  return;
}


// 0x00000b70  size 0x8

void TerminateThread(void)

{
  return;
}


// 0x00000b94  size 0x8

void CreateSema(void)

{
  return;
}


// 0x00000b9c  size 0x8

void DeleteSema(void)

{
  return;
}


// 0x00000ba4  size 0x8

void SignalSema(void)

{
  return;
}


// 0x00000bac  size 0x8

void WaitSema(void)

{
  return;
}


