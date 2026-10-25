/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_32::0290a0 FUN_ovl_32__0290a0 */

void __cdecl16far FUN_ovl_32__0290a0(void)

{
  int iVar1;
  
  DAT_3000_d13c = 1;
  DAT_3000_d143 = 5;
  iVar1 = dispatch_ovl_13_2558_0d62(0,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 7;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 99;
    return;
  }
  return;
}



/* ovl_32::0290d4 FUN_ovl_32__0290d4 */

void __cdecl16far FUN_ovl_32__0290d4(void)

{
  int iVar1;
  
  DAT_3000_d13c = 2;
  DAT_3000_d143 = 6;
  iVar1 = dispatch_ovl_13_2558_0d62(1,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 7;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 99;
    return;
  }
  return;
}



/* ovl_32::029106 FUN_ovl_32__029106 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_32__029106(void)

{
  bool bVar1;
  int local_a;
  int local_8;
  int local_6;
  
  bVar1 = false;
  local_a = 1;
  local_6 = 1;
  local_8 = -1;
  _DAT_2a22_fac8 = 500;
switchD_ovl_32__029154_default:
  if (bVar1) {
    if (local_8 == -1) {
      DAT_3000_d13b = 4;
      return;
    }
    dispatch_ovl_07_22dc_0106(local_8);
    DAT_3000_d13b = 5;
    return;
  }
  if (local_a != 1) goto LAB_ovl_32__0291a4;
  local_6 = dispatch_ovl_13_2558_0d62(2,local_6 + 1,(int)DAT_3000_d13d);
  switch(local_6) {
  case 0:
    local_8 = 8;
    break;
  case 1:
    local_8 = 9;
    break;
  case 2:
    local_8 = 10;
    break;
  case 3:
    local_8 = 0xb;
    break;
  case 4:
    local_8 = 2;
    break;
  case 5:
    local_8 = 3;
    break;
  case 6:
    local_a = 2;
    goto switchD_ovl_32__029154_default;
  case 7:
    break;
  default:
    goto switchD_ovl_32__029154_default;
  }
  goto switchD_ovl_32__029154_caseD_7;
LAB_ovl_32__0291a4:
  local_6 = dispatch_ovl_13_2558_0d62(0x14,local_6 + 1,(int)DAT_3000_d13d);
  switch(local_6) {
  case 0:
    local_8 = 0xc;
    break;
  case 1:
    local_8 = 0xd;
    break;
  case 2:
    local_8 = 0xe;
    break;
  case 3:
    local_8 = 0xf;
    break;
  case 4:
    local_8 = 0x11;
    break;
  case 5:
    local_8 = 0x12;
    break;
  case 6:
    local_a = 1;
    goto switchD_ovl_32__029154_default;
  case 7:
    break;
  default:
    goto switchD_ovl_32__029154_default;
  }
switchD_ovl_32__029154_caseD_7:
  bVar1 = true;
  goto switchD_ovl_32__029154_default;
}



/* ovl_32::029244 FUN_ovl_32__029244 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_32__029244(void)

{
  int iVar1;
  
  DAT_3000_d13c = 4;
  _DAT_2a22_fac8 = 500;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 7;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 99;
    return;
  }
  return;
}



/* ovl_32::02927a FUN_ovl_32__02927a */

void __cdecl16far FUN_ovl_32__02927a(void)

{
  int iVar1;
  
  DAT_3000_d13c = 5;
  iVar1 = dispatch_ovl_13_2558_0d62(4,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 7;
    DAT_2a22_e542 = 1;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 99;
    DAT_2a22_e542 = 1;
    return;
  }
  DAT_2a22_e542 = 1;
  return;
}



/* ovl_32::0292bc FUN_ovl_32__0292bc */

void __cdecl16far FUN_ovl_32__0292bc(void)

{
  DAT_3000_d13c = 6;
  dispatch_ovl_13_2558_0d62(5,1,(int)DAT_3000_d13d);
  DAT_3000_d143 = 5;
  DAT_3000_d13b = 99;
  return;
}



/* ovl_32::0292e2 FUN_ovl_32__0292e2 */

void __cdecl16far FUN_ovl_32__0292e2(void)

{
  bool bVar1;
  int local_a;
  int local_8;
  int local_4;
  
  bVar1 = false;
  local_4 = 7;
  local_a = 1;
  local_8 = 0;
switchD_ovl_32__02932b_default:
  do {
    if (bVar1) {
      DAT_3000_d13b = DAT_3000_d13c;
      return;
    }
    if (local_a != 1) break;
    local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
    switch(local_8) {
    case 0:
      local_4 = 9;
      break;
    case 1:
      local_4 = 10;
      break;
    case 2:
      local_4 = 0xb;
      break;
    case 3:
      local_4 = 0xc;
      break;
    case 4:
      local_4 = 0xd;
      break;
    case 5:
      local_4 = 0xe;
      break;
    case 6:
      local_4 = 8;
      local_a = 2;
      break;
    case 7:
      goto switchD_ovl_32__02932b_caseD_7;
    }
  } while( true );
  local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
  switch(local_8) {
  case 0:
    local_4 = 0xf;
    break;
  case 1:
    local_4 = 0x10;
    break;
  case 2:
    local_4 = 0x11;
    break;
  case 3:
    local_4 = 0x12;
    break;
  case 4:
    local_4 = 0x13;
    break;
  case 5:
    local_4 = 0x14;
    break;
  case 6:
    local_4 = 7;
    local_a = 1;
    break;
  case 7:
switchD_ovl_32__02932b_caseD_7:
    bVar1 = true;
  }
  goto switchD_ovl_32__02932b_default;
}



/* ovl_32::029410 FUN_ovl_32__029410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_32__029410(void)

{
  int iVar1;
  
  DAT_3000_d13b = 4;
  iVar1 = ((((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
           (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0)) - _DAT_2a22_c6fc) -
          (uint)(_DAT_2a22_fac5 + _DAT_2a22_ded0 < _DAT_2a22_c6fa);
  if ((-1 < iVar1) && ((0 < iVar1 || (0x5dc < (_DAT_2a22_fac5 + _DAT_2a22_ded0) - _DAT_2a22_c6fa))))
  {
    DAT_3000_d13b = 3;
  }
  if (DAT_2a22_f37c != '\0') {
    DAT_3000_d13b = 1;
  }
  if (DAT_2a22_f37b != '\0') {
    DAT_3000_d13b = 2;
  }
  if (DAT_2a22_e542 != '\0') {
    DAT_3000_d13b = 6;
  }
  _DAT_2a22_c6fa = _DAT_2a22_fac5 + _DAT_2a22_ded0;
  _DAT_2a22_c6fc =
       ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 + (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0);
  return;
}



/* ovl_32::029472 ovl_32_entry_290a_03d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_32_entry_290a_03d2(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  int local_8;
  char local_6;
  
  bVar1 = false;
  FUN_20a6_02a8(4,0xf,0x82ae);
  local_6 = -0x69;
  local_8 = 0;
  do {
    local_6 = local_6 + ((undefined *)&DAT_3000_d750)[local_8];
    local_8 = local_8 + 1;
  } while (local_8 < 0x40);
  if (((local_6 != '\0') || (iVar2 = FUN_19c7_486a(0xf0e2), iVar2 < 3)) ||
     (iVar2 = FUN_19c7_483e(0xf0e2,0xf101), iVar2 != 0)) {
    do {
      dispatch_ovl_05_22dc_0000();
    } while( true );
  }
  FUN_1000_038c(0x82b9);
  dispatch_ovl_13_2558_00d4(0x82c4,param_1);
  DAT_3000_d13d = DAT_2a22_e326 != DAT_2a22_46f4;
  FUN_1951_017a(0x2c);
  DAT_2a22_e539 = DAT_2a22_e539 + '\x01';
  DAT_2a22_e3ca = 1;
  DAT_3000_d143 = 0;
  FUN_ovl_32__029410();
  while (!bVar1) {
    if (DAT_3000_d13b == '\x04') {
      FUN_ovl_32__029244();
    }
    else if (DAT_3000_d13b < '\x05') {
      if (DAT_3000_d13b == '\x01') {
        FUN_ovl_32__0290a0();
      }
      else if (DAT_3000_d13b == '\x02') {
        FUN_ovl_32__0290d4();
      }
      else if (DAT_3000_d13b == '\x03') {
        FUN_ovl_32__029106();
      }
    }
    else if (DAT_3000_d13b == '\x05') {
      FUN_ovl_32__02927a();
    }
    else if (DAT_3000_d13b == '\x06') {
      FUN_ovl_32__0292bc();
    }
    else if (DAT_3000_d13b == '\a') {
      FUN_ovl_32__0292e2();
    }
    else if (DAT_3000_d13b == 'c') {
      bVar1 = true;
    }
  }
  dispatch_ovl_07_22dc_0216(0xe);
  if ((DAT_3000_d143 & 1) != 0) {
    _DAT_2a22_e333 = 2;
  }
  if ((DAT_3000_d143 & 2) != 0) {
    dispatch_ovl_07_22dc_0168();
  }
  if ((DAT_3000_d143 & 4) != 0) {
    dispatch_ovl_07_22dc_016e();
  }
  FUN_1000_036e();
  FUN_1951_017a(1);
  return;
}


