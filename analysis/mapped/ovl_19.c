/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_19::0290a0 FUN_ovl_19__0290a0 */

void __cdecl16far FUN_ovl_19__0290a0(void)

{
  int iVar1;
  
  DAT_3000_d136 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(0,1,0);
  if (iVar1 == 0) {
    DAT_3000_d135 = 2;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d135 = 3;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d135 = 10;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d135 = 0xc;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d135 = 0xb;
    return;
  }
  return;
}



/* ovl_19::0290ee FUN_ovl_19__0290ee */

void __cdecl16far FUN_ovl_19__0290ee(void)

{
  int iVar1;
  
  DAT_3000_d136 = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(1,1,1);
  if (iVar1 == 0) {
    DAT_3000_d135 = 3;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d135 = 4;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d135 = 10;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d135 = 0xc;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d135 = 0xb;
    return;
  }
  return;
}



/* ovl_19::029138 FUN_ovl_19__029138 */

void __cdecl16far FUN_ovl_19__029138(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d136 = 3;
  if (DAT_2a22_475e == '\0') {
    iVar1 = dispatch_ovl_13_2558_0d62(2,1,0);
    if (iVar1 == 0) {
      DAT_3000_d135 = 9;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d135 = 6;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d135 = 5;
      return;
    }
    if (iVar1 == 3) {
      DAT_3000_d135 = 0xc;
      return;
    }
    bVar2 = iVar1 == 4;
  }
  else {
    iVar1 = dispatch_ovl_13_2558_0d62(0xb,1,0);
    if (iVar1 == 0) {
      DAT_3000_d135 = 9;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d135 = 6;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d135 = 0xc;
      return;
    }
    bVar2 = iVar1 == 3;
  }
  if (bVar2) {
    DAT_3000_d135 = 0xb;
    return;
  }
  return;
}



/* ovl_19::0291b6 FUN_ovl_19__0291b6 */

void __cdecl16far FUN_ovl_19__0291b6(void)

{
  int iVar1;
  
  DAT_3000_d136 = 4;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,1);
  if (iVar1 == 0) {
    DAT_3000_d135 = 0xc;
  }
  return;
}



/* ovl_19::0291d6 FUN_ovl_19__0291d6 */

void __cdecl16far FUN_ovl_19__0291d6(void)

{
  DAT_2a22_475e = 1;
  DAT_2a22_e5ff = 1;
  FUN_1000_07a6();
  dispatch_ovl_10_252a_0316();
  dispatch_ovl_06_22dc_044a();
  DAT_3000_d135 = 0xc;
  return;
}



/* ovl_19::0291f6 FUN_ovl_19__0291f6 */

void __cdecl16far FUN_ovl_19__0291f6(void)

{
  int iVar1;
  
  DAT_3000_d136 = 5;
  iVar1 = dispatch_ovl_13_2558_0d62(4,1,0);
  if (iVar1 == 0) {
    DAT_3000_d135 = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d135 = 3;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d135 = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d135 = 0xb;
    return;
  }
  return;
}



/* ovl_19::02923a FUN_ovl_19__02923a */

void __cdecl16far FUN_ovl_19__02923a(void)

{
  int iVar1;
  
  DAT_3000_d136 = 6;
  iVar1 = dispatch_ovl_13_2558_0d62(0xc,1,0);
  if (iVar1 == 0) {
    DAT_3000_d135 = 2;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d135 = 10;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d135 = 3;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d135 = 0xc;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d135 = 0xb;
    return;
  }
  return;
}



/* ovl_19::02928a FUN_ovl_19__02928a */

void __cdecl16far FUN_ovl_19__02928a(void)

{
  bool bVar1;
  int iVar2;
  undefined1 local_8;
  undefined1 local_4;
  
  bVar1 = false;
  local_4 = 5;
  local_8 = 1;
  do {
    while( true ) {
      if (bVar1) {
        DAT_3000_d135 = DAT_3000_d136;
        return;
      }
      iVar2 = dispatch_ovl_13_2558_0d62(local_4,local_8,0);
      if (iVar2 != 0) break;
      local_4 = 6;
      local_8 = 1;
      DAT_2a22_e3a7 = 1;
      DAT_2a22_e62f = 1;
      DAT_2a22_e661 = 1;
      DAT_2a22_e693 = 1;
      DAT_2a22_e6c5 = 1;
      DAT_2a22_e60f = DAT_2a22_bd84;
      DAT_2a22_e641 = DAT_2a22_bd84;
      DAT_2a22_e673 = DAT_2a22_bd84;
      DAT_2a22_e6a5 = DAT_2a22_bd84;
LAB_ovl_19__02930e:
      FUN_1090_1252(2);
    }
    if (iVar2 == 1) {
      local_4 = 7;
      local_8 = 2;
      DAT_2a22_e3c4 = 1;
      DAT_2a22_e6f7 = 1;
      DAT_2a22_e6d7 = DAT_2a22_bd85;
      goto LAB_ovl_19__02930e;
    }
    if (iVar2 == 2) {
      local_4 = 8;
      local_8 = 3;
      DAT_2a22_e3fe = 1;
      DAT_2a22_e75b = 1;
      DAT_2a22_e78d = 1;
      DAT_2a22_e73b = DAT_2a22_bd87;
      DAT_2a22_e76d = DAT_2a22_bd87;
      goto LAB_ovl_19__02930e;
    }
    if (iVar2 == 3) {
      local_4 = 9;
      local_8 = 4;
      DAT_2a22_e41b = 1;
      DAT_2a22_e7bf = 1;
      DAT_2a22_e7f1 = 1;
      DAT_2a22_e823 = 1;
      DAT_2a22_e79f = DAT_2a22_bd88;
      DAT_2a22_e7d1 = DAT_2a22_bd88;
      DAT_2a22_e803 = DAT_2a22_bd88;
      goto LAB_ovl_19__02930e;
    }
    if (iVar2 == 4) {
      local_4 = 10;
      local_8 = 5;
      goto LAB_ovl_19__02930e;
    }
    if (iVar2 == 5) {
      bVar1 = true;
    }
  } while( true );
}



/* ovl_19::0293a4 FUN_ovl_19__0293a4 */

void __cdecl16far FUN_ovl_19__0293a4(void)

{
  dispatch_ovl_12_252a_36c2(5);
  DAT_3000_d135 = DAT_3000_d136;
  return;
}



/* ovl_19::0293b8 ovl_19_entry_290a_0318 */

void __cdecl16far ovl_19_entry_290a_0318(void)

{
  FUN_1090_12ec(4,1);
  FUN_1090_12ec(0,1);
  FUN_1090_12ec(9,1);
  FUN_1090_12ec(10,1);
  FUN_1090_12ec(0xb,1);
  FUN_1090_12ec(5,1);
  return;
}



/* ovl_19::029418 FUN_ovl_19__029418 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_19__029418(void)

{
  _DAT_2a22_e333 = 2;
  DAT_3000_d135 = 0xc;
  return;
}



/* ovl_19::029426 ovl_19_entry_290a_0386 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_19_entry_290a_0386(undefined2 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  char local_6;
  
  bVar1 = false;
  FUN_20a6_02a8(4,6,0x8006);
  FUN_1000_038c(0x8011);
  dispatch_ovl_13_2558_00d4(0x801e,param_1);
  FUN_1951_017a(0x23);
  _DAT_3000_d102 = 0x9fe6;
  DAT_2a22_e434 = DAT_2a22_e434 + '\x01';
  dispatch_ovl_06_22dc_03d6();
  DAT_3000_d135 = 1;
  while( true ) {
    if (bVar1) {
      FUN_1000_036e();
      FUN_1951_017a(1);
      return;
    }
    local_6 = -0x69;
    local_8 = 0;
    do {
      local_6 = local_6 + ((undefined *)&DAT_3000_d750)[local_8];
      local_8 = local_8 + 1;
    } while (local_8 < 0x40);
    if (((local_6 != '\0') || (uVar2 = FUN_19c7_486a(0xf0e2), uVar2 < 3)) ||
       (iVar3 = FUN_19c7_483e(0xf0e2,0xf101), iVar3 != 0)) break;
    switch(DAT_3000_d135) {
    case 1:
      FUN_ovl_19__0290a0();
      break;
    case 2:
      FUN_ovl_19__0290ee();
      break;
    case 3:
      FUN_ovl_19__029138();
      break;
    case 4:
      FUN_ovl_19__0291b6();
      break;
    case 5:
      FUN_ovl_19__0291f6();
      break;
    case 6:
      FUN_ovl_19__02923a();
      break;
    case 8:
      FUN_ovl_19__0291d6();
      break;
    case 9:
      FUN_ovl_19__02928a();
      break;
    case 10:
      FUN_ovl_19__0293a4();
      dispatch_ovl_13_2558_0066(param_1);
      break;
    case 0xb:
      FUN_ovl_19__029418(0);
      break;
    case 0xc:
      bVar1 = true;
    }
  }
  do {
    dispatch_ovl_05_22dc_0000();
  } while( true );
}


