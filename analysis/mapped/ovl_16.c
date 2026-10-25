/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_16::0290a0 FUN_ovl_16__0290a0 */

void __cdecl16far FUN_ovl_16__0290a0(void)

{
  int iVar1;
  
  DAT_3000_d12e = 1;
  if (DAT_2a22_e32e == '\0') {
    iVar1 = dispatch_ovl_13_2558_0d62(0,1,1);
    if (iVar1 == 0) {
      DAT_3000_d12d = 5;
      return;
    }
  }
  else {
    if (DAT_2a22_e32e != '\x01') {
      return;
    }
    iVar1 = dispatch_ovl_13_2558_0d62(1,1,1);
    if (iVar1 == 0) {
      DAT_3000_d12d = 10;
      return;
    }
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 0xd;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::02910a FUN_ovl_16__02910a */

void __cdecl16far FUN_ovl_16__02910a(void)

{
  int iVar1;
  
  DAT_3000_d12e = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(2,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12d = 6;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 0xe;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::02915a FUN_ovl_16__02915a */

void __cdecl16far FUN_ovl_16__02915a(void)

{
  int iVar1;
  
  DAT_3000_d12e = 3;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,2);
  if (iVar1 == 0) {
    DAT_3000_d12d = 7;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 8;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::0291aa FUN_ovl_16__0291aa */

void __cdecl16far FUN_ovl_16__0291aa(void)

{
  int iVar1;
  
  DAT_3000_d12e = 4;
  iVar1 = dispatch_ovl_13_2558_0d62(4,1,2);
  if (iVar1 == 0) {
    DAT_3000_d12d = 0x10;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::0291e4 FUN_ovl_16__0291e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_16__0291e4(void)

{
  int iVar1;
  
  DAT_3000_d12e = 5;
  iVar1 = dispatch_ovl_13_2558_0d62(6,1,1);
  if (iVar1 == 0) {
    DAT_3000_d12d = 6;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 0xd;
    return;
  }
  if ((iVar1 == 2) || (iVar1 == 3)) {
    _DAT_2a22_fac8 = 500;
  }
  else if (iVar1 != 4) {
    if (iVar1 == 5) {
      DAT_3000_d12d = 0x11;
      return;
    }
    return;
  }
  DAT_3000_d12d = 0x12;
  return;
}



/* ovl_16::02923c FUN_ovl_16__02923c */

void __cdecl16far FUN_ovl_16__02923c(void)

{
  int iVar1;
  
  DAT_3000_d12e = 6;
  iVar1 = dispatch_ovl_13_2558_0d62(7,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12d = 0xe;
    return;
  }
  if (iVar1 == 1) {
    if (DAT_2a22_e39e < '\a') {
      DAT_3000_d12d = 0xd;
      return;
    }
    DAT_3000_d12d = 0xc;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::02928e FUN_ovl_16__02928e */

void __cdecl16far FUN_ovl_16__02928e(void)

{
  int iVar1;
  
  DAT_3000_d12e = 7;
  iVar1 = dispatch_ovl_13_2558_0d62(8,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12d = 9;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 8;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::0292de FUN_ovl_16__0292de */

void __cdecl16far FUN_ovl_16__0292de(void)

{
  int iVar1;
  
  DAT_3000_d12e = 8;
  iVar1 = dispatch_ovl_13_2558_0d62(9,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12d = 9;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 7;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::02932e FUN_ovl_16__02932e */

void __cdecl16far FUN_ovl_16__02932e(void)

{
  int iVar1;
  
  DAT_3000_d12e = 9;
  iVar1 = dispatch_ovl_13_2558_0d62(10,1,0);
  if (iVar1 == 0) {
    DAT_3000_d12d = 8;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 7;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::02937e FUN_ovl_16__02937e */

void __cdecl16far FUN_ovl_16__02937e(void)

{
  int iVar1;
  
  DAT_3000_d12e = 10;
  DAT_2a22_e3a5 = 1;
  DAT_2a22_e32e = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(0xb,1,1);
  if (iVar1 == 0) {
    DAT_3000_d12d = 0xe;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 0xd;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::0293ca FUN_ovl_16__0293ca */

void __cdecl16far FUN_ovl_16__0293ca(void)

{
  int iVar1;
  
  DAT_3000_d12e = 0xb;
  iVar1 = dispatch_ovl_13_2558_0d62(0xc,1,1);
  if (iVar1 == 0) {
    DAT_3000_d12d = 0xe;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d12d = 0xd;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d12d = 0x12;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d12d = 0x11;
    return;
  }
  return;
}



/* ovl_16::02940c FUN_ovl_16__02940c */

void __cdecl16far FUN_ovl_16__02940c(void)

{
  bool bVar1;
  undefined2 uVar2;
  undefined1 local_6;
  undefined1 local_4;
  
  bVar1 = false;
  local_6 = 0x14;
LAB_ovl_16__02941a:
  local_4 = 1;
  do {
    if (bVar1) {
      DAT_3000_d12d = DAT_3000_d12e;
      return;
    }
    uVar2 = dispatch_ovl_13_2558_0d62(local_6,local_4,1);
    switch(uVar2) {
    case 0:
      goto switchD_ovl_16__02943e_caseD_0;
    case 1:
      local_6 = 0x16;
      local_4 = 2;
      break;
    case 2:
      local_6 = 0x17;
      local_4 = 3;
      break;
    case 3:
      local_6 = 0x18;
      local_4 = 4;
      break;
    case 4:
      local_6 = 0x19;
      local_4 = 5;
      break;
    case 5:
      local_6 = 0x1a;
      local_4 = 6;
      break;
    case 6:
      bVar1 = true;
    }
  } while( true );
switchD_ovl_16__02943e_caseD_0:
  local_6 = 0x15;
  goto LAB_ovl_16__02941a;
}



/* ovl_16::0294a0 FUN_ovl_16__0294a0 */

void __cdecl16far FUN_ovl_16__0294a0(void)

{
  bool bVar1;
  undefined2 uVar2;
  undefined1 local_6;
  undefined1 local_4;
  
  bVar1 = false;
  local_6 = 0xd;
LAB_ovl_16__0294ae:
  local_4 = 1;
  do {
    if (bVar1) {
      DAT_3000_d12d = DAT_3000_d12e;
      return;
    }
    uVar2 = dispatch_ovl_13_2558_0d62(local_6,local_4,1);
    switch(uVar2) {
    case 0:
      goto switchD_ovl_16__0294d2_caseD_0;
    case 1:
      local_6 = 0xf;
      local_4 = 2;
      break;
    case 2:
      local_6 = 0x10;
      local_4 = 3;
      break;
    case 3:
      local_6 = 0x11;
      local_4 = 4;
      break;
    case 4:
      local_6 = 0x12;
      local_4 = 5;
      break;
    case 5:
      local_6 = 0x13;
      local_4 = 6;
      break;
    case 6:
      bVar1 = true;
    }
  } while( true );
switchD_ovl_16__0294d2_caseD_0:
  local_6 = 0xe;
  goto LAB_ovl_16__0294ae;
}



/* ovl_16::029534 FUN_ovl_16__029534 */

void __cdecl16far FUN_ovl_16__029534(void)

{
  dispatch_ovl_12_252a_36c2(0);
  DAT_3000_d12d = DAT_3000_d12e;
  return;
}



/* ovl_16::029562 ovl_16_entry_290a_04c2 */

void __cdecl16far ovl_16_entry_290a_04c2(void)

{
  FUN_1090_12ec(0,1);
  FUN_1090_12ec(1,1);
  FUN_1090_12ec(0xf,1);
  return;
}



/* ovl_16::02959e ovl_16_entry_290a_04fe */

/* WARNING: Removing unreachable block (ram,0x0002962b) */
/* WARNING: Removing unreachable block (ram,0x00029709) */
/* WARNING: Removing unreachable block (ram,0x0002971c) */
/* WARNING: Removing unreachable block (ram,0x00029722) */
/* WARNING: Removing unreachable block (ram,0x00029733) */
/* WARNING: Removing unreachable block (ram,0x0002974e) */
/* WARNING: Removing unreachable block (ram,0x00029747) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_16_entry_290a_04fe(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_20a6_02a8(4,1,0x7f8e);
  FUN_1000_038c(0x7f99);
  dispatch_ovl_13_2558_00d4(0x7fa4,param_1);
  _DAT_3000_d102 = (undefined *)&DAT_2a22_e3a5;
  FUN_1951_017a(0x1e);
  DAT_2a22_e3a3 = DAT_2a22_e3a3 + '\x01';
  dispatch_ovl_06_22dc_03d6();
  if (DAT_2a22_e3a5 == '\0') {
    iVar1 = (DAT_2a22_e39e + -1) / 6;
    if (iVar1 == 0) {
      DAT_3000_d12d = 1;
    }
    else if (iVar1 == 1) {
      DAT_3000_d12d = 2;
    }
    else if (iVar1 == 2) {
      DAT_3000_d12d = 3;
    }
    else {
      DAT_3000_d12d = 4;
    }
  }
  else {
    DAT_3000_d12d = 0xb;
  }
switchD_ovl_16__02963d_default:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(DAT_3000_d12d) {
  case 2:
    FUN_ovl_16__0290a0();
    goto switchD_ovl_16__02963d_default;
  case 3:
    FUN_ovl_16__02910a();
    goto switchD_ovl_16__02963d_default;
  case 4:
    FUN_ovl_16__02915a();
    goto switchD_ovl_16__02963d_default;
  case 5:
    FUN_ovl_16__0291aa();
    goto switchD_ovl_16__02963d_default;
  case 6:
    FUN_ovl_16__0291e4();
    goto switchD_ovl_16__02963d_default;
  case 7:
    FUN_ovl_16__02923c();
    goto switchD_ovl_16__02963d_default;
  case 8:
    FUN_ovl_16__02928e();
    goto switchD_ovl_16__02963d_default;
  case 9:
    FUN_ovl_16__0292de();
    goto switchD_ovl_16__02963d_default;
  case 10:
    FUN_ovl_16__02932e();
    goto switchD_ovl_16__02963d_default;
  case 0xb:
    FUN_ovl_16__02937e();
    goto switchD_ovl_16__02963d_default;
  case 0xc:
    FUN_ovl_16__0293ca();
    goto switchD_ovl_16__02963d_default;
  case 0xd:
    FUN_ovl_16__02940c();
    goto switchD_ovl_16__02963d_default;
  case 0xe:
    FUN_ovl_16__0294a0();
    goto switchD_ovl_16__02963d_default;
  case 0xf:
    uVar2 = 0;
    break;
  case 0x10:
    uVar2 = 1;
    break;
  default:
    goto switchD_ovl_16__02963d_default;
  }
  FUN_ovl_16__029534(uVar2);
  dispatch_ovl_13_2558_0066(param_1);
  goto switchD_ovl_16__02963d_default;
}


