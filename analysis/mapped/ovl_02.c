/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_02::022dc0 ovl_02_entry_22dc_0000 */

undefined2 __cdecl16far ovl_02_entry_22dc_0000(undefined2 param_1,undefined2 param_2)

{
  FUN_19b0_0002();
  FUN_ovl_02__0234f8(3);
  ovl_02_entry_22dc_050e(0xf,1);
  FUN_ovl_02__022e56();
  FUN_ovl_02__022ebe(param_1,param_2);
  ovl_02_entry_22dc_050e(0xe,0);
  FUN_ovl_02__022faa();
  FUN_ovl_02__022fc4();
  FUN_ovl_02__023058();
  FUN_ovl_02__023146();
  ovl_02_entry_22dc_050e(0xe,0);
  FUN_ovl_02__023488(0xc,0,0x3c0,0x20);
  FUN_ovl_02__02346a(0x10,0x1d,0x4c22);
  FUN_19b0_003b();
  return 0;
}



/* ovl_02::022e56 FUN_ovl_02__022e56 */

void __cdecl16far FUN_ovl_02__022e56(void)

{
  FUN_1951_0038(1,0);
  ovl_02_entry_22dc_0520(0x4c3a);
  ovl_02_entry_22dc_0582(0x4c3e);
  ovl_02_entry_22dc_0582(0x4c40);
  ovl_02_entry_22dc_0582(0x4c62);
  ovl_02_entry_22dc_0582(0x4c64);
  ovl_02_entry_22dc_0582(0x4cac);
  ovl_02_entry_22dc_0582(0x4cc2);
  ovl_02_entry_22dc_0520(0x4cc4);
  return;
}



/* ovl_02::022ebe FUN_ovl_02__022ebe */

void __cdecl16far FUN_ovl_02__022ebe(int param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  char *local_4;
  
  DAT_2a22_e324 = '\x02';
  DAT_2a22_46ef = 2;
  DAT_2a22_46ee = 2;
  DAT_2a22_e325 = '\x02';
  do {
    while( true ) {
      param_1 = param_1 + -1;
      if (param_1 == 0) {
        if (DAT_2a22_46ef != DAT_2a22_46ee) {
          DAT_2a22_46ef = DAT_2a22_46ef & 1;
          DAT_2a22_46ee = DAT_2a22_46ee & 1;
        }
        return;
      }
      param_2 = param_2 + 1;
      local_4 = (char *)*param_2;
      cVar1 = *local_4;
      if ((cVar1 == '-') || (cVar1 == '/')) {
        local_4 = local_4 + 1;
      }
      FUN_19c7_4cbe(local_4,cVar1);
      cVar1 = *local_4;
      if (cVar1 != 'A') break;
      iVar2 = FUN_19c7_4c1a(0x4ce2,(int)local_4[1]);
      if (iVar2 == 0) {
LAB_ovl_02__022f4f:
        FUN_ovl_02__02351e(0x4cc8,*param_2);
      }
      else {
        DAT_2a22_e325 = local_4[1];
      }
    }
    if (cVar1 == 'G') {
      iVar2 = FUN_19c7_4c1a(0x4cdc,(int)local_4[1]);
      if (iVar2 == 0) goto LAB_ovl_02__022f4f;
      DAT_2a22_e324 = local_4[1];
    }
    else if (cVar1 == 'J') {
      DAT_2a22_46ef = 1;
    }
    else if (cVar1 == 'K') {
      DAT_2a22_46ef = 0;
      DAT_2a22_46ee = 0;
    }
    else {
      if (cVar1 != 'M') goto LAB_ovl_02__022f4f;
      DAT_2a22_46ee = 1;
    }
  } while( true );
}



/* ovl_02::022faa FUN_ovl_02__022faa */

void __cdecl16far FUN_ovl_02__022faa(void)

{
  if (DAT_2a22_46ee == '\x02') {
    FUN_ovl_02__02320a(0x4ce8);
    DAT_2a22_46ee = FUN_ovl_02__023246();
  }
  return;
}



/* ovl_02::022fc4 FUN_ovl_02__022fc4 */

void __cdecl16far FUN_ovl_02__022fc4(void)

{
  if (DAT_2a22_46ef == '\x02') {
    FUN_ovl_02__02320a(0x4d05);
    DAT_2a22_46ef = FUN_ovl_02__023246();
  }
  if (DAT_2a22_46ef != '\0') {
    FUN_ovl_02__02320a(0x4d25);
    FUN_ovl_02__0234aa(1);
    thunk_EXT_FUN_0000_0000(0x22dc);
    FUN_ovl_02__0234aa(0xffff);
    FUN_ovl_02__02320a(0x4d50);
    FUN_ovl_02__0234aa(1);
    thunk_EXT_FUN_0000_0000(0x1eea);
    FUN_ovl_02__0234aa(0xffff);
    FUN_ovl_02__02320a(0x4d8e);
    FUN_ovl_02__0234aa(2);
    thunk_EXT_FUN_0000_0000(0x1eea);
    FUN_ovl_02__0234aa(0xfffe);
  }
  return;
}



/* ovl_02::023058 FUN_ovl_02__023058 */

void __cdecl16far FUN_ovl_02__023058(void)

{
  if (DAT_2a22_e324 == '\x02') {
    FUN_ovl_02__0230a2();
  }
  if (DAT_2a22_e324 == 'C') {
    DAT_2a22_e326 = DAT_2a22_46f1;
  }
  else if (DAT_2a22_e324 == 'E') {
    DAT_2a22_e326 = DAT_2a22_46f3;
  }
  else if (DAT_2a22_e324 == 'M') {
    DAT_2a22_e326 = DAT_2a22_46f4;
  }
  else {
    if (DAT_2a22_e324 != 'T') {
      return;
    }
    DAT_2a22_e326 = DAT_2a22_46f2;
  }
  return;
}



/* ovl_02::0230a2 FUN_ovl_02__0230a2 */

void __cdecl16far FUN_ovl_02__0230a2(void)

{
  int iVar1;
  
  FUN_ovl_02__023488(0xb,0,0x3c0,0x20);
  FUN_ovl_02__02346a(0xd,0x1b,0x4dd1);
  FUN_ovl_02__02346a(0xf,0x19,0x4de7);
  FUN_ovl_02__02346a(0x10,0x19,0x4e00);
  FUN_ovl_02__02346a(0x11,0x19,0x4e13);
  FUN_ovl_02__02346a(0x12,0x19,0x4e2d);
  FUN_1951_0038(0xd,0x32);
  iVar1 = FUN_ovl_02__02325e(0x4e3f);
  DAT_2a22_e324 = *(undefined1 *)(iVar1 + 0x4cab);
  return;
}



/* ovl_02::023146 FUN_ovl_02__023146 */

void __cdecl16far FUN_ovl_02__023146(void)

{
  int iVar1;
  
  if (DAT_2a22_e325 == '\x02') {
    FUN_ovl_02__023488(0xb,0,0x3c0,0x20);
    FUN_ovl_02__02346a(0xd,0x1b,0x4e44);
    FUN_ovl_02__02346a(0xf,0x19,0x4e59);
    FUN_ovl_02__02346a(0x10,0x19,0x4e68);
    FUN_ovl_02__02346a(0x11,0x19,0x4e76);
    FUN_ovl_02__02346a(0x12,0x19,0x4e87);
    FUN_ovl_02__02346a(0x13,0x19,0x4e9d);
    FUN_1951_0038(0xd,0x32);
    iVar1 = FUN_ovl_02__02325e(0x4eba);
    DAT_2a22_e325 = *(char *)(iVar1 + 0x4cb1);
  }
  return;
}



/* ovl_02::02320a FUN_ovl_02__02320a */

void __cdecl16far FUN_ovl_02__02320a(undefined2 param_1)

{
  int iVar1;
  
  FUN_ovl_02__023488(0x16,0,0x50,0x20);
  iVar1 = FUN_19c7_486a(param_1,param_1);
  FUN_ovl_02__02346a(0x16,(uint)-(iVar1 + -0x50) >> 1);
  return;
}



/* ovl_02::023246 FUN_ovl_02__023246 */

undefined2 __cdecl16far FUN_ovl_02__023246(void)

{
  int iVar1;
  
  iVar1 = FUN_ovl_02__02325e(0x4ec0);
  if (iVar1 == 0x59) {
    return 1;
  }
  return 0;
}



/* ovl_02::02325e FUN_ovl_02__02325e */

undefined2 __cdecl16far FUN_ovl_02__02325e(undefined2 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 0x22dc;
  do {
    bVar1 = thunk_EXT_FUN_0000_0000(uVar4);
    if ((bVar1 == 3) || (DAT_2a22_5ba4 != '\0')) {
      FUN_ovl_02__02351e(0x4ec3,0);
    }
    if (bVar1 < 0x20) {
      bVar1 = 0x20;
    }
    FUN_19c7_4c0a(bVar1);
    FUN_19c7_4c0a(8);
    uVar2 = FUN_19c7_490e(bVar1);
    uVar4 = 0x19c7;
    iVar3 = FUN_19c7_4c1a(param_1,uVar2);
  } while (iVar3 == 0);
  return uVar2;
}



/* ovl_02::0232ce ovl_02_entry_22dc_050e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_02_entry_22dc_050e(int param_1,int param_2)

{
  _DAT_2a22_9322 = param_2 * 0x10 + param_1;
  return;
}



/* ovl_02::0232e0 ovl_02_entry_22dc_0520 */

void __cdecl16far ovl_02_entry_22dc_0520(char *param_1)

{
  FUN_ovl_02__023406(1,0x20);
  FUN_ovl_02__023406(1,(int)*param_1);
  FUN_ovl_02__023406(0x4c,(int)param_1[1]);
  FUN_ovl_02__023406(1,(int)param_1[2]);
  FUN_ovl_02__023406(1,0x20);
  return;
}



/* ovl_02::023342 ovl_02_entry_22dc_0582 */

void __cdecl16far ovl_02_entry_22dc_0582(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *param_1;
  iVar2 = FUN_19c7_486a(param_1 + 1);
  iVar3 = (0x4c - iVar2) / 2;
  FUN_ovl_02__023406(1,0x20);
  FUN_ovl_02__023406(1,(int)cVar1);
  FUN_ovl_02__023406(iVar3,0x20);
  FUN_ovl_02__0233e0(param_1 + 1);
  FUN_ovl_02__023406(-(iVar2 + iVar3 + -0x4c),0x20);
  FUN_ovl_02__023406(1,(int)cVar1);
  FUN_ovl_02__023406(1,0x20);
  return;
}



/* ovl_02::0233e0 FUN_ovl_02__0233e0 */

void __cdecl16far FUN_ovl_02__0233e0(char *param_1)

{
  while (*param_1 != '\0') {
    FUN_ovl_02__023406(1,(int)*param_1);
    param_1 = param_1 + 1;
  }
  return;
}



/* ovl_02::023406 FUN_ovl_02__023406 */

void __cdecl16far FUN_ovl_02__023406(int param_1,undefined1 param_2)

{
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined2 local_c;
  
  while (param_1 != 0) {
    local_f = 9;
    local_10 = 0x20;
    local_e = DAT_2a22_9322;
    local_d = 0;
    local_c = 1;
    FUN_19c7_4a00(0x10,&local_10,&local_10);
    local_f = 0xe;
    local_10 = param_2;
    local_d = 0;
    FUN_19c7_4a00(0x10,&local_10,&local_10);
    param_1 = param_1 + -1;
  }
  return;
}



/* ovl_02::02346a FUN_ovl_02__02346a */

void __cdecl16far FUN_ovl_02__02346a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1951_0038(param_1,param_2);
  FUN_ovl_02__0233e0(param_3);
  return;
}



/* ovl_02::023488 FUN_ovl_02__023488 */

void __cdecl16far
FUN_ovl_02__023488(undefined2 param_1,undefined2 param_2,undefined2 param_3,char param_4)

{
  FUN_1951_0038(param_1,param_2);
  FUN_ovl_02__023406(param_3,(int)param_4);
  return;
}



/* ovl_02::0234aa FUN_ovl_02__0234aa */

void __cdecl16far FUN_ovl_02__0234aa(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int local_4;
  
  uVar2 = 0x22dc;
  local_4 = 0;
  do {
    if (999 < local_4) {
      return;
    }
    if (param_1 < 1) {
      iVar1 = thunk_EXT_FUN_0000_0000(uVar2,-1 - param_1);
      if (iVar1 != 0) goto LAB_ovl_02__0234cb;
    }
    else {
      iVar1 = thunk_EXT_FUN_0000_0000(uVar2,param_1 + -1);
      if (iVar1 == 0) {
LAB_ovl_02__0234cb:
        local_4 = 0;
      }
    }
    uVar2 = 0x1eea;
    local_4 = local_4 + 1;
  } while( true );
}



/* ovl_02::0234f8 FUN_ovl_02__0234f8 */

void __cdecl16far FUN_ovl_02__0234f8(undefined1 param_1)

{
  undefined1 local_10;
  undefined1 local_f;
  
  local_f = 0;
  local_10 = param_1;
  FUN_19c7_4a00(0x10,&local_10,&local_10);
  return;
}



/* ovl_02::02351e FUN_ovl_02__02351e */

void __cdecl16far FUN_ovl_02__02351e(undefined2 param_1,undefined2 param_2)

{
  ovl_02_entry_22dc_050e(0xc,0);
  FUN_ovl_02__023488(0xb,0,0x3c0,0x20);
  FUN_ovl_02__02346a(0x16,0,param_1);
  FUN_ovl_02__0233e0(param_2);
  FUN_ovl_02__0233e0(0x4ed4);
  FUN_19b0_003b();
  FUN_19c7_29de(0x19b0,99);
  return;
}


