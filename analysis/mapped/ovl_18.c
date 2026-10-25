/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_18::0290a0 FUN_ovl_18__0290a0 */

void __cdecl16far FUN_ovl_18__0290a0(void)

{
  int iVar1;
  
  DAT_3000_d134 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(0,1,0);
  if (iVar1 == 0) {
    DAT_3000_d133 = 2;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d133 = 3;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d133 = 4;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d133 = 0xf;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d133 = 0xd;
    return;
  }
  return;
}



/* ovl_18::0290ee FUN_ovl_18__0290ee */

void __cdecl16far FUN_ovl_18__0290ee(void)

{
  int iVar1;
  
  DAT_3000_d134 = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(1,1,0);
  if (iVar1 == 0) {
    DAT_3000_d133 = 3;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d133 = 4;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d133 = 0xf;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d133 = 0xd;
    return;
  }
  return;
}



/* ovl_18::029130 FUN_ovl_18__029130 */

void __cdecl16far FUN_ovl_18__029130(void)

{
  int iVar1;
  
  DAT_3000_d134 = 3;
  iVar1 = dispatch_ovl_13_2558_0d62(2,1,0);
  if (iVar1 == 0) {
    DAT_3000_d133 = 2;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d133 = 4;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d133 = 0xf;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d133 = 0xd;
    return;
  }
  return;
}



/* ovl_18::029174 FUN_ovl_18__029174 */

void __cdecl16far FUN_ovl_18__029174(void)

{
  int iVar1;
  
  DAT_3000_d134 = 4;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,0);
  if (iVar1 == 0) {
    DAT_3000_d133 = 2;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d133 = 3;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d133 = 0xf;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d133 = 0xd;
    return;
  }
  return;
}



/* ovl_18::0291b8 FUN_ovl_18__0291b8 */

void __cdecl16far FUN_ovl_18__0291b8(void)

{
  int iVar1;
  
  DAT_3000_d134 = 5;
  iVar1 = dispatch_ovl_13_2558_0d62(4,1,1);
  if (iVar1 == 0) {
    DAT_3000_d133 = 6;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d133 = 7;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d133 = 0xf;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d133 = 0xd;
    return;
  }
  return;
}



/* ovl_18::0291fa FUN_ovl_18__0291fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_18__0291fa(void)

{
  int local_6;
  undefined *local_4;
  
  local_4 = (undefined *)&DAT_2a22_e5d0;
  local_6 = 0;
  while( true ) {
    if (_DAT_2a22_e5c4 <= local_6) {
      _DAT_3000_d131 = (undefined *)0x0;
      return;
    }
    if (local_4[0x2f] != '\0') break;
    local_4 = local_4 + 0x32;
    local_6 = local_6 + 1;
  }
  _DAT_3000_d131 = local_4;
  return;
}



/* ovl_18::029234 FUN_ovl_18__029234 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_18__029234(void)

{
  int iVar1;
  
  FUN_19c7_480c(_DAT_3000_d131 + 0xe,0x7fd4);
  *(undefined1 *)(_DAT_3000_d131 + 10) = 4;
  *(undefined1 *)(_DAT_3000_d131 + 0xd) = DAT_2a22_bd86;
  *(undefined1 *)(_DAT_3000_d131 + 0x31) = 1;
  *(undefined1 *)(_DAT_3000_d131 + 0x2f) = 0;
  dispatch_ovl_06_22dc_03d6();
  DAT_3000_d134 = 6;
  iVar1 = dispatch_ovl_13_2558_0d62(5,1,1);
  if (iVar1 == 0) {
    DAT_3000_d133 = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d133 = 0xe;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d133 = 0xf;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d133 = 0xd;
    return;
  }
  return;
}



/* ovl_18::029324 FUN_ovl_18__029324 */

void __cdecl16far FUN_ovl_18__029324(void)

{
  int iVar1;
  
  DAT_3000_d134 = 8;
  do {
    iVar1 = dispatch_ovl_13_2558_0d62(7,1,0);
  } while (iVar1 != 0);
  FUN_1697_11f2(0x10);
  DAT_3000_d133 = 10;
  return;
}



/* ovl_18::0293e2 ovl_18_entry_290a_0342 */

void __cdecl16far ovl_18_entry_290a_0342(void)

{
  FUN_1090_12ec(0,1);
  FUN_1090_12ec(5,1);
  return;
}



/* ovl_18::029410 ovl_18_entry_290a_0370 */

/* WARNING: Removing unreachable block (ram,0x00029525) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_18_entry_290a_0370(undefined2 param_1)

{
  FUN_20a6_02a8(4,3,0x7fe6);
  FUN_1000_038c(0x7ff1);
  dispatch_ovl_13_2558_00d4(0x7ffc,param_1);
  _DAT_3000_d102 = 0x9f8f;
  FUN_1951_017a(0x20);
  DAT_2a22_e3dd = DAT_2a22_e3dd + '\x01';
  dispatch_ovl_06_22dc_03d6();
  FUN_ovl_18__0291fa();
  if (_DAT_3000_d131 == 0) {
    DAT_3000_d133 = 1;
  }
  else {
    DAT_3000_d133 = 5;
  }
  do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(DAT_3000_d133) {
    case 2:
      FUN_ovl_18__0290a0();
      break;
    case 3:
      FUN_ovl_18__0290ee();
      break;
    case 4:
      FUN_ovl_18__029130();
      break;
    case 5:
      FUN_ovl_18__029174();
      break;
    case 6:
      FUN_ovl_18__0291b8();
    }
  } while( true );
}


