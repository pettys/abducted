/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_25::0290a0 FUN_ovl_25__0290a0 */

void __cdecl16far FUN_ovl_25__0290a0(void)

{
  int iVar1;
  
  DAT_3000_d13c = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(0,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    dispatch_ovl_07_22dc_0080();
    DAT_3000_d13b = 3;
    return;
  }
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    DAT_3000_d13b = 2;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 5) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_25::0290f6 FUN_ovl_25__0290f6 */

void __cdecl16far FUN_ovl_25__0290f6(void)

{
  int iVar1;
  
  DAT_3000_d13c = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(1,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    dispatch_ovl_07_22dc_0080();
    DAT_3000_d13b = 3;
    return;
  }
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    DAT_3000_d13b = 2;
    return;
  }
  if (iVar1 == 4) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 5) {
    DAT_3000_d13b = 0x61;
    return;
  }
  return;
}



/* ovl_25::02914a FUN_ovl_25__02914a */

undefined2 __cdecl16far FUN_ovl_25__02914a(void)

{
  undefined2 uVar1;
  undefined2 in_BX;
  
  DAT_3000_d13c = 3;
  uVar1 = dispatch_ovl_13_2558_0d62(2,1,(int)DAT_3000_d13d);
  switch(uVar1) {
  case 0:
    DAT_3000_d13b = 5;
    uVar1 = in_BX;
    break;
  case 1:
    DAT_3000_d13b = 6;
    uVar1 = in_BX;
    break;
  case 2:
    DAT_3000_d13b = 0xb;
    return in_BX;
  case 3:
    DAT_3000_d13b = 0x19;
    return in_BX;
  case 4:
    DAT_3000_d13b = 7;
    return in_BX;
  case 5:
    DAT_3000_d13b = 99;
    return in_BX;
  case 6:
    DAT_3000_d13b = 0x61;
    return in_BX;
  }
  return uVar1;
}



/* ovl_25::0291b0 FUN_ovl_25__0291b0 */

undefined2 __cdecl16far FUN_ovl_25__0291b0(void)

{
  undefined2 uVar1;
  undefined2 in_BX;
  
  DAT_3000_d13c = 4;
  uVar1 = dispatch_ovl_13_2558_0d62(3,1,(int)DAT_3000_d13d);
  switch(uVar1) {
  case 0:
    DAT_3000_d13b = 9;
    uVar1 = in_BX;
    break;
  case 1:
    DAT_3000_d13b = 6;
    uVar1 = in_BX;
    break;
  case 2:
    DAT_3000_d13b = 0xb;
    return in_BX;
  case 3:
    DAT_3000_d13b = 0x19;
    return in_BX;
  case 4:
    DAT_3000_d13b = 7;
    return in_BX;
  case 5:
    DAT_3000_d13b = 99;
    return in_BX;
  case 6:
    DAT_3000_d13b = 0x61;
    return in_BX;
  }
  return uVar1;
}



/* ovl_25::029216 FUN_ovl_25__029216 */

undefined2 __cdecl16far FUN_ovl_25__029216(void)

{
  undefined2 uVar1;
  undefined2 in_BX;
  
  DAT_3000_d13c = 5;
  uVar1 = dispatch_ovl_13_2558_0d62(4,1,(int)DAT_3000_d13d);
  switch(uVar1) {
  case 0:
    DAT_3000_d13b = 9;
    uVar1 = in_BX;
    break;
  case 1:
    DAT_3000_d13b = 6;
    uVar1 = in_BX;
    break;
  case 2:
    DAT_3000_d13b = 0xb;
    return in_BX;
  case 3:
    DAT_3000_d13b = 7;
    return in_BX;
  case 4:
    DAT_3000_d13b = 0x19;
    return in_BX;
  case 5:
    DAT_3000_d13b = 99;
    return in_BX;
  case 6:
    DAT_3000_d13b = 0x61;
    return in_BX;
  }
  return uVar1;
}



/* ovl_25::02927c FUN_ovl_25__02927c */

void __cdecl16far FUN_ovl_25__02927c(void)

{
  int iVar1;
  
  DAT_3000_d13c = 6;
  iVar1 = dispatch_ovl_13_2558_0d62(5,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 9;
  }
  else {
    if (iVar1 == 1) {
      DAT_3000_d13b = 0xb;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 7;
      return;
    }
    if (iVar1 == 3) {
      DAT_3000_d13b = 0x19;
      return;
    }
    if (iVar1 == 4) {
      DAT_3000_d13b = 99;
      return;
    }
    if (iVar1 != 5) {
      return;
    }
    DAT_3000_d13b = 0x61;
  }
  return;
}



/* ovl_25::0292da FUN_ovl_25__0292da */

void __cdecl16far FUN_ovl_25__0292da(void)

{
  int iVar1;
  
  DAT_3000_d13c = 7;
  iVar1 = dispatch_ovl_13_2558_0d62(6,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 9;
  }
  else {
    if (iVar1 == 1) {
      DAT_3000_d13b = 6;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 0xb;
      return;
    }
    if (iVar1 == 3) {
      DAT_3000_d13b = 0x19;
      return;
    }
    if (iVar1 == 4) {
      DAT_3000_d13b = 99;
      return;
    }
    if (iVar1 != 5) {
      return;
    }
    DAT_3000_d13b = 0x61;
  }
  return;
}



/* ovl_25::029338 FUN_ovl_25__029338 */

void __cdecl16far FUN_ovl_25__029338(void)

{
  DAT_3000_d13c = 8;
  dispatch_ovl_13_2558_0d62(7,1,(int)DAT_3000_d13d);
  DAT_3000_d13b = 0x61;
  return;
}



/* ovl_25::029358 FUN_ovl_25__029358 */

undefined2 __cdecl16far FUN_ovl_25__029358(void)

{
  undefined2 uVar1;
  undefined2 in_BX;
  
  DAT_3000_d13c = 9;
  uVar1 = dispatch_ovl_13_2558_0d62(8,1,(int)DAT_3000_d13d);
  switch(uVar1) {
  case 0:
    DAT_3000_d13b = 10;
    uVar1 = in_BX;
    break;
  case 1:
    DAT_3000_d13b = 6;
    uVar1 = in_BX;
    break;
  case 2:
    DAT_3000_d13b = 0xb;
    return in_BX;
  case 3:
    DAT_3000_d13b = 7;
    return in_BX;
  case 4:
    DAT_3000_d13b = 0x19;
    return in_BX;
  case 5:
    DAT_3000_d13b = 99;
    return in_BX;
  case 6:
    DAT_3000_d13b = 0x61;
    return in_BX;
  }
  return uVar1;
}



/* ovl_25::0293be FUN_ovl_25__0293be */

void __cdecl16far FUN_ovl_25__0293be(void)

{
  int iVar1;
  
  DAT_3000_d13c = 10;
  iVar1 = dispatch_ovl_13_2558_0d62(9,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 6;
  }
  else {
    if (iVar1 == 1) {
      DAT_3000_d13b = 0xb;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 7;
      return;
    }
    if (iVar1 == 3) {
      DAT_3000_d13b = 0x19;
      return;
    }
    if (iVar1 == 4) {
      DAT_3000_d13b = 99;
      return;
    }
    if (iVar1 != 5) {
      return;
    }
    DAT_3000_d13b = 0x61;
  }
  return;
}



/* ovl_25::02941c FUN_ovl_25__02941c */

void __cdecl16far FUN_ovl_25__02941c(void)

{
  bool bVar1;
  int local_a;
  int local_8;
  int local_4;
  
  bVar1 = false;
  local_4 = 0xb;
  local_a = 1;
  local_8 = 0;
switchD_ovl_25__029465_default:
  do {
    if (bVar1) {
      DAT_3000_d13b = DAT_3000_d13c;
      return;
    }
    if (local_a != 1) break;
    local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
    switch(local_8) {
    case 0:
      local_4 = 0xd;
      break;
    case 1:
      local_4 = 0xe;
      break;
    case 2:
      local_4 = 0xf;
      break;
    case 3:
      local_4 = 0x10;
      break;
    case 4:
      local_4 = 0x11;
      break;
    case 5:
      local_4 = 0x12;
      break;
    case 6:
      local_4 = 0xc;
      local_a = 2;
      break;
    case 7:
      goto switchD_ovl_25__029465_caseD_7;
    }
  } while( true );
  local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
  switch(local_8) {
  case 0:
    local_4 = 0x13;
    break;
  case 1:
    local_4 = 0x14;
    break;
  case 2:
    local_4 = 0x15;
    break;
  case 3:
    local_4 = 0x16;
    break;
  case 4:
    local_4 = 0x17;
    break;
  case 5:
    local_4 = 0x18;
    break;
  case 6:
    local_4 = 0xb;
    local_a = 1;
    break;
  case 7:
switchD_ovl_25__029465_caseD_7:
    bVar1 = true;
  }
  goto switchD_ovl_25__029465_default;
}



/* ovl_25::02954a FUN_ovl_25__02954a */

void __cdecl16far FUN_ovl_25__02954a(void)

{
  dispatch_ovl_13_2558_0d62(DAT_2a22_e4b1 + 0x18,1,(int)DAT_3000_d13d);
  DAT_3000_d13e = 1;
  dispatch_ovl_07_22dc_0080();
  DAT_3000_d13b = DAT_3000_d13c;
  return;
}



/* ovl_25::029574 FUN_ovl_25__029574 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_25__029574(void)

{
  _DAT_2a22_e333 = 2;
  DAT_3000_d13b = 99;
  return;
}



/* ovl_25::029580 ovl_25_entry_290a_04e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_25_entry_290a_04e0(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = false;
  FUN_20a6_02a8(4,10,0x8104);
  FUN_1000_038c(0x810f);
  dispatch_ovl_13_2558_00d4(0x811b,param_1);
  DAT_3000_d13e = '\0';
  DAT_3000_d13d = 0;
  FUN_1951_017a(0x27);
  _DAT_3000_d102 = 0xa05a;
  DAT_2a22_e4a8 = DAT_2a22_e4a8 + '\x01';
  DAT_3000_d13b = '\x01';
  if (DAT_2a22_e4af != '\0') {
    DAT_3000_d13b = '\x04';
  }
  if (DAT_2a22_f309 != '\0') {
    DAT_3000_d13b = '\b';
  }
  while (!bVar1) {
    if (DAT_3000_d13b == '\a') {
      FUN_ovl_25__0292da();
    }
    else if (DAT_3000_d13b < '\b') {
      if (DAT_3000_d13b == '\x01') {
        FUN_ovl_25__0290a0();
      }
      else if (DAT_3000_d13b == '\x02') {
        FUN_ovl_25__0290f6();
      }
      else if (DAT_3000_d13b == '\x03') {
        FUN_ovl_25__02914a();
      }
      else if (DAT_3000_d13b == '\x04') {
        FUN_ovl_25__0291b0();
      }
      else if (DAT_3000_d13b == '\x05') {
        FUN_ovl_25__029216();
      }
      else if (DAT_3000_d13b == '\x06') {
        FUN_ovl_25__02927c();
      }
    }
    else if (DAT_3000_d13b == '\n') {
      FUN_ovl_25__0293be();
    }
    else if (DAT_3000_d13b < '\v') {
      if (DAT_3000_d13b == '\b') {
        FUN_ovl_25__029338();
      }
      else if (DAT_3000_d13b == '\t') {
        FUN_ovl_25__029358();
      }
    }
    else if (DAT_3000_d13b == '\v') {
      FUN_ovl_25__02941c();
    }
    else if (DAT_3000_d13b == '\x19') {
      FUN_ovl_25__02954a();
    }
    else if (DAT_3000_d13b == 'a') {
      FUN_ovl_25__029574();
    }
    else if (DAT_3000_d13b == 'c') {
      bVar1 = true;
    }
  }
  dispatch_ovl_07_22dc_0216(9);
  if ((DAT_3000_d13e != '\0') && (DAT_2a22_e4b1 = DAT_2a22_e4b1 + '\x01', '\x04' < DAT_2a22_e4b1)) {
    DAT_2a22_e4b1 = '\0';
  }
  FUN_1000_036e();
  FUN_1951_017a(1);
  return;
}


