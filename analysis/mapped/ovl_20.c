/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_20::0290a0 FUN_ovl_20__0290a0 */

void __cdecl16far FUN_ovl_20__0290a0(void)

{
  int iVar1;
  
  DAT_3000_d138 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(0,1,1);
  if (iVar1 == 0) {
    DAT_3000_d137 = 9;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d137 = 10;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d137 = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d137 = 0xb;
    return;
  }
  return;
}



/* ovl_20::0290e2 FUN_ovl_20__0290e2 */

void __cdecl16far FUN_ovl_20__0290e2(void)

{
  int iVar1;
  
  DAT_3000_d138 = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(1,1,2);
  if (iVar1 == 0) {
    DAT_3000_d137 = 9;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d137 = 10;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d137 = 5;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d137 = 0xc;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d137 = 0xb;
    return;
  }
  return;
}



/* ovl_20::029130 FUN_ovl_20__029130 */

void __cdecl16far FUN_ovl_20__029130(void)

{
  int iVar1;
  
  DAT_3000_d138 = 3;
  iVar1 = dispatch_ovl_13_2558_0d62(2,1,0);
  if (iVar1 == 0) {
    DAT_3000_d137 = 6;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d137 = 9;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d137 = 10;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d137 = 0xc;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d137 = 0xb;
    return;
  }
  return;
}



/* ovl_20::029180 FUN_ovl_20__029180 */

void __cdecl16far FUN_ovl_20__029180(void)

{
  int iVar1;
  
  DAT_3000_d138 = 4;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,0);
  if (iVar1 == 0) {
    DAT_3000_d137 = 0xc;
  }
  return;
}



/* ovl_20::0291a2 FUN_ovl_20__0291a2 */

void __cdecl16far FUN_ovl_20__0291a2(void)

{
  int iVar1;
  
  DAT_3000_d138 = 5;
  if (DAT_2a22_e328 == '\0') {
    iVar1 = dispatch_ovl_13_2558_0d62(4,1,2);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        DAT_3000_d137 = 10;
        return;
      }
LAB_ovl_20__02920a:
      if (iVar1 == 2) {
        DAT_3000_d137 = 0xc;
        return;
      }
      if (iVar1 == 3) {
        DAT_3000_d137 = 0xb;
        return;
      }
      return;
    }
    DAT_3000_d137 = 9;
  }
  else {
    if (DAT_2a22_e328 != '\x01') {
      return;
    }
    iVar1 = dispatch_ovl_13_2558_0d62(5,1,1);
    if (iVar1 == 0) {
      DAT_2a22_e328 = '\x02';
      DAT_2a22_e3fc = 1;
      DAT_3000_d137 = 7;
    }
    else {
      if (iVar1 != 1) goto LAB_ovl_20__02920a;
      DAT_3000_d137 = 8;
    }
  }
  return;
}



/* ovl_20::02922e FUN_ovl_20__02922e */

void __cdecl16far FUN_ovl_20__02922e(void)

{
  int iVar1;
  
  DAT_3000_d138 = 6;
  iVar1 = dispatch_ovl_13_2558_0d62(6,1,2);
  if (iVar1 == 0) {
    DAT_3000_d137 = 9;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d137 = 10;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d137 = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d137 = 0xb;
    return;
  }
  return;
}



/* ovl_20::029274 FUN_ovl_20__029274 */

void __cdecl16far FUN_ovl_20__029274(void)

{
  int iVar1;
  
  DAT_3000_d138 = 7;
  DAT_2a22_e982 = 1;
  DAT_2a22_e981 = 1;
  DAT_2a22_e961 = DAT_2a22_bd82;
  iVar1 = dispatch_ovl_13_2558_0d62(7,1,1);
  if (iVar1 == 0) {
    DAT_3000_d137 = 9;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d137 = 10;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d137 = 0xc;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d137 = 0xb;
    return;
  }
  return;
}



/* ovl_20::0292c6 FUN_ovl_20__0292c6 */

void __cdecl16far FUN_ovl_20__0292c6(void)

{
  DAT_3000_d138 = 8;
  DAT_2a22_e3f5 = DAT_2a22_e3f5 + '\x06';
  dispatch_ovl_06_22dc_03d6();
  dispatch_ovl_13_2558_0d62(8,1,0);
  DAT_3000_d137 = 0xc;
  return;
}



/* ovl_20::0292ee FUN_ovl_20__0292ee */

void __cdecl16far FUN_ovl_20__0292ee(void)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 local_6;
  undefined1 local_4;
  
  bVar1 = false;
  local_4 = 1;
  if (DAT_2a22_e328 == '\x02') {
    local_6 = 0x15;
  }
  else {
    local_6 = 9;
  }
switchD_ovl_20__0293a8_default:
  do {
    if (bVar1) {
      DAT_3000_d137 = DAT_3000_d138;
      return;
    }
    if (DAT_2a22_e328 != '\x02') goto LAB_ovl_20__02938a;
    iVar2 = dispatch_ovl_13_2558_0d62(local_6,local_4,1);
    if (iVar2 == 0) {
      local_6 = 0x10;
      goto LAB_ovl_20__029356;
    }
    if (iVar2 == 1) {
      local_6 = 0x11;
      goto LAB_ovl_20__029362;
    }
    if (iVar2 == 2) {
      local_6 = 0x12;
      goto LAB_ovl_20__029370;
    }
    if (iVar2 == 3) {
      local_6 = 0x13;
      goto LAB_ovl_20__02937a;
    }
    if (iVar2 == 4) {
      local_6 = 0x14;
      goto LAB_ovl_20__029384;
    }
  } while (iVar2 != 5);
  goto switchD_ovl_20__0293a8_caseD_6;
LAB_ovl_20__02938a:
  uVar3 = dispatch_ovl_13_2558_0d62(local_6,local_4,1);
  switch(uVar3) {
  case 0:
    local_6 = 10;
LAB_ovl_20__029356:
    local_4 = 1;
    break;
  case 1:
    local_6 = 0xb;
LAB_ovl_20__029362:
    local_4 = 2;
    break;
  case 2:
    local_6 = 0xc;
LAB_ovl_20__029370:
    local_4 = 3;
    break;
  case 3:
    local_6 = 0xd;
LAB_ovl_20__02937a:
    local_4 = 4;
    break;
  case 4:
    local_6 = 0xe;
LAB_ovl_20__029384:
    local_4 = 5;
    break;
  case 5:
    local_6 = 0xf;
    local_4 = 6;
    break;
  case 6:
switchD_ovl_20__0293a8_caseD_6:
    bVar1 = true;
  }
  goto switchD_ovl_20__0293a8_default;
}



/* ovl_20::0293fe FUN_ovl_20__0293fe */

void __cdecl16far FUN_ovl_20__0293fe(void)

{
  dispatch_ovl_12_252a_36c2(3);
  DAT_3000_d137 = DAT_3000_d138;
  return;
}



/* ovl_20::029412 ovl_20_entry_290a_0372 */

void __cdecl16far ovl_20_entry_290a_0372(void)

{
  FUN_1090_12ec(4,1);
  FUN_1090_12ec(0,1);
  FUN_1090_12ec(0xb,1);
  FUN_1090_12ec(7,1);
  return;
}



/* ovl_20::029452 FUN_ovl_20__029452 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_20__029452(void)

{
  _DAT_2a22_e333 = 2;
  DAT_3000_d137 = 0xc;
  return;
}



/* ovl_20::029460 ovl_20_entry_290a_03c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_20_entry_290a_03c0(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  int local_8;
  char local_6;
  
  bVar1 = false;
  FUN_20a6_02a8(4,4,0x8030);
  FUN_1000_038c(0x803b);
  dispatch_ovl_13_2558_00d4(0x8044,param_1);
  _DAT_3000_d102 = (undefined *)&DAT_2a22_e3fc;
  FUN_1951_017a(0x21);
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
  iVar2 = ((((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
           (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0)) - _DAT_2a22_c47e) -
          (uint)(_DAT_2a22_fac5 + _DAT_2a22_ded0 < _DAT_2a22_c47c);
  if ((-1 < iVar2) && ((0 < iVar2 || (0x32 < (_DAT_2a22_fac5 + _DAT_2a22_ded0) - _DAT_2a22_c47c))))
  {
    DAT_2a22_e3fa = DAT_2a22_e3fa + '\x01';
    _DAT_2a22_c47c = _DAT_2a22_fac5 + _DAT_2a22_ded0;
    _DAT_2a22_c47e =
         ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 + (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0)
    ;
  }
  dispatch_ovl_06_22dc_03d6();
  if (DAT_2a22_e328 == '\x02') {
    DAT_3000_d137 = 1;
  }
  else {
    iVar2 = (DAT_2a22_e3f5 + -1) / 6;
    if (iVar2 == 1) {
      DAT_3000_d137 = 2;
    }
    else if (iVar2 == 2) {
      DAT_3000_d137 = 3;
    }
    else if (iVar2 == 3) {
      DAT_3000_d137 = 4;
    }
  }
  while (!bVar1) {
    switch(DAT_3000_d137) {
    case 1:
      FUN_ovl_20__0290a0();
      break;
    case 2:
      FUN_ovl_20__0290e2();
      break;
    case 3:
      FUN_ovl_20__029130();
      break;
    case 4:
      FUN_ovl_20__029180();
      break;
    case 5:
      FUN_ovl_20__0291a2();
      break;
    case 6:
      FUN_ovl_20__02922e();
      break;
    case 7:
      FUN_ovl_20__029274();
      break;
    case 8:
      FUN_ovl_20__0292c6();
      break;
    case 9:
      FUN_ovl_20__0292ee();
      break;
    case 10:
      FUN_ovl_20__0293fe();
      dispatch_ovl_13_2558_0066(param_1);
      break;
    case 0xb:
      FUN_ovl_20__029452(0);
      break;
    case 0xc:
      bVar1 = true;
    }
  }
  FUN_1000_036e();
  FUN_1951_017a(1);
  return;
}


