/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_23::0290a0 FUN_ovl_23__0290a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_23__0290a0(void)

{
  int iVar1;
  
  _DAT_3000_ca37 = -1;
  do {
    iVar1 = FUN_19c7_4e32();
    iVar1 = (iVar1 % _DAT_2a22_e5c4) * 0x32;
    if (((undefined *)&DAT_2a22_e5ff)[iVar1] == '\0') {
      _DAT_3000_ca37 = (int)(char)((undefined *)&DAT_2a22_e5da)[iVar1];
      if (((((_DAT_3000_ca37 == 9) || (_DAT_3000_ca37 == 0x10)) || (_DAT_3000_ca37 == 0xd)) ||
          ((_DAT_3000_ca37 == 3 || (_DAT_3000_ca37 == 0x12)))) ||
         ((_DAT_3000_ca37 == 0xb || ((_DAT_3000_ca37 == 1 || (_DAT_3000_ca37 == 0)))))) {
        _DAT_3000_ca37 = -1;
      }
    }
  } while (_DAT_3000_ca37 == -1);
  _DAT_3000_ca37 = _DAT_3000_ca37 + -2;
  return;
}



/* ovl_23::029110 FUN_ovl_23__029110 */

void __cdecl16far FUN_ovl_23__029110(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 1;
  DAT_2a22_dc78 = '\x02';
  FUN_ovl_23__0290a0();
  iVar1 = dispatch_ovl_13_2558_0d62(0,1,(int)DAT_2a22_dc78);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 2;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 3;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::02915e FUN_ovl_23__02915e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_23__02915e(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 2;
  DAT_2a22_dc78 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(1,1,1,*(undefined2 *)(_DAT_3000_ca37 * 2 + 0x6c8c));
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 5;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 6;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 4;
    return;
  }
  return;
}



/* ovl_23::0291a2 FUN_ovl_23__0291a2 */

void __cdecl16far FUN_ovl_23__0291a2(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 3;
  DAT_2a22_dc78 = 0;
  iVar1 = dispatch_ovl_13_2558_0d62(2,1,0);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 2;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 4;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::0291ec FUN_ovl_23__0291ec */

void __cdecl16far FUN_ovl_23__0291ec(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 4;
  DAT_2a22_dc78 = 0;
  iVar1 = dispatch_ovl_13_2558_0d62(3,1,0);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::029220 FUN_ovl_23__029220 */

void __cdecl16far FUN_ovl_23__029220(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 5;
  DAT_2a22_dc78 = 2;
  DAT_2a22_e468 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(4,1,2);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 9;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 7;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 4) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::02927a FUN_ovl_23__02927a */

void __cdecl16far FUN_ovl_23__02927a(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 6;
  DAT_2a22_dc78 = 1;
  DAT_2a22_e468 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(5,1,1);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 0x61;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 8;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 4) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::0292d2 FUN_ovl_23__0292d2 */

void __cdecl16far FUN_ovl_23__0292d2(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 7;
  DAT_2a22_dc78 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(6,1,1);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 9;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::02931a FUN_ovl_23__02931a */

void __cdecl16far FUN_ovl_23__02931a(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 8;
  DAT_2a22_dc78 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(7,1,1);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 0x61;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::029362 FUN_ovl_23__029362 */

void __cdecl16far FUN_ovl_23__029362(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 9;
  DAT_2a22_dc78 = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(8,1,2);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 0x60;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 4;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 4) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::0293b8 FUN_ovl_23__0293b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_23__0293b8(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 10;
  DAT_2a22_dc78 = 0;
  iVar1 = dispatch_ovl_13_2558_0d62(9,1,0,*(undefined2 *)(_DAT_3000_ca37 * 2 + 0x6c8c));
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x61;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::02940c FUN_ovl_23__02940c */

void __cdecl16far FUN_ovl_23__02940c(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 0xb;
  DAT_2a22_dc78 = 2;
  DAT_2a22_e468 = 0;
  iVar1 = dispatch_ovl_13_2558_0d62(10,1,2);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 0xc;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 4;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::02945c FUN_ovl_23__02945c */

void __cdecl16far FUN_ovl_23__02945c(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 0xc;
  DAT_2a22_dc78 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(0xb,1,1);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 0x60;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::0294a4 FUN_ovl_23__0294a4 */

void __cdecl16far FUN_ovl_23__0294a4(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 0xd;
  DAT_2a22_dc78 = 2;
  DAT_2a22_e468 = 0;
  iVar1 = dispatch_ovl_13_2558_0d62(0xc,1,2);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 0x5e;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x60;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 4) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::0294fe FUN_ovl_23__0294fe */

void __cdecl16far FUN_ovl_23__0294fe(void)

{
  int iVar1;
  
  DAT_2a22_dc76 = 0x1b;
  DAT_2a22_dc78 = 2;
  iVar1 = dispatch_ovl_13_2558_0d62(0x1a,1,2);
  if (iVar1 == 0) {
    DAT_2a22_dc77 = 0x60;
    return;
  }
  if (iVar1 == 1) {
    DAT_2a22_dc77 = 0x5f;
    return;
  }
  if (iVar1 == 2) {
    DAT_2a22_dc77 = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_2a22_dc77 = 0x62;
    return;
  }
  return;
}



/* ovl_23::029548 FUN_ovl_23__029548 */

void __cdecl16far FUN_ovl_23__029548(void)

{
  bool bVar1;
  int local_a;
  int local_8;
  int local_4;
  
  bVar1 = false;
  local_4 = 0xe;
  local_a = 1;
  local_8 = 1;
switchD_ovl_23__029591_default:
  do {
    if (bVar1) {
      DAT_2a22_dc77 = DAT_2a22_dc76;
      return;
    }
    if (local_a != 1) break;
    local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_2a22_dc78);
    switch(local_8) {
    case 0:
      local_4 = 0x10;
      break;
    case 1:
      local_4 = 0x11;
      break;
    case 2:
      local_4 = 0x12;
      break;
    case 3:
      local_4 = 0x13;
      break;
    case 4:
      local_4 = 0x14;
      break;
    case 5:
      local_4 = 0x15;
      break;
    case 6:
      local_4 = 0xf;
      local_a = 2;
      break;
    case 7:
      goto switchD_ovl_23__029591_caseD_7;
    }
  } while( true );
  local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_2a22_dc78);
  switch(local_8) {
  case 0:
    local_4 = 0x16;
    break;
  case 1:
    local_4 = 0x17;
    break;
  case 2:
    local_4 = 0x18;
    break;
  case 3:
    local_4 = 0x19;
    break;
  case 4:
    local_4 = 0x1a;
    break;
  case 5:
    local_4 = 0xe;
    local_a = 1;
    break;
  case 6:
switchD_ovl_23__029591_caseD_7:
    bVar1 = true;
  }
  goto switchD_ovl_23__029591_default;
}



/* ovl_23::02966c FUN_ovl_23__02966c */

void __cdecl16far FUN_ovl_23__02966c(void)

{
  dispatch_ovl_12_252a_36c2(7);
  DAT_2a22_dc77 = DAT_2a22_dc76;
  return;
}



/* ovl_23::029680 FUN_ovl_23__029680 */

void __cdecl16far FUN_ovl_23__029680(void)

{
  undefined1 local_1a [24];
  
  FUN_19c7_4d50(local_1a,0x6a92,0x17);
  FUN_19c7_4d50(0x6a92,0x80a8,0x17);
  dispatch_ovl_12_252a_36c2(7);
  FUN_19c7_4d50(0x6a92,local_1a,0x17);
  DAT_2a22_dc77 = DAT_2a22_dc76;
  return;
}



/* ovl_23::0296d6 FUN_ovl_23__0296d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_23__0296d6(void)

{
  _DAT_2a22_e333 = 2;
  DAT_2a22_dc77 = 99;
  return;
}



/* ovl_23::0296e2 FUN_ovl_23__0296e2 */

void __cdecl16far FUN_ovl_23__0296e2(void)

{
  int *piVar1;
  int local_4;
  
  local_4 = 0;
  do {
    piVar1 = (int *)(local_4 * 2 + 0x354);
    *piVar1 = *piVar1 + 1;
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  DAT_2a22_dc77 = 0x1b;
  return;
}



/* ovl_23::029708 ovl_23_entry_290a_0668 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_23_entry_290a_0668(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  FUN_20a6_02a8(4,8,0x80bf);
  FUN_1000_038c(0x80ca);
  dispatch_ovl_13_2558_00d4(0x80d6,param_1);
  FUN_1951_017a(0x25);
  _DAT_3000_d102 = 0xa020;
  DAT_2a22_e46e = DAT_2a22_e46e + '\x01';
  if (DAT_2a22_e468 == '\0') {
    DAT_2a22_dc77 = '\x01';
  }
  else if (DAT_2a22_e468 == '\x01') {
    DAT_2a22_dc77 = '\n';
  }
  else if (DAT_2a22_e468 == '\x02') {
    DAT_2a22_dc77 = '\r';
  }
  else if (DAT_2a22_e468 == '\x03') {
    DAT_2a22_dc77 = '\v';
  }
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                if (bVar1) {
                  dispatch_ovl_07_22dc_0216(7);
                  FUN_1000_036e();
                  FUN_1951_017a(1);
                  return;
                }
                iVar2 = (int)DAT_2a22_dc77;
                if (iVar2 != 10) break;
                FUN_ovl_23__0293b8();
              }
              if (10 < iVar2) break;
              switch(iVar2) {
              case 1:
                FUN_ovl_23__029110();
                break;
              case 2:
                FUN_ovl_23__02915e();
                break;
              case 3:
                FUN_ovl_23__0291a2();
                break;
              case 4:
                FUN_ovl_23__0291ec();
                break;
              case 5:
                FUN_ovl_23__029220();
                break;
              case 6:
                FUN_ovl_23__02927a();
                break;
              case 7:
                FUN_ovl_23__0292d2();
                break;
              case 8:
                FUN_ovl_23__02931a();
                break;
              case 9:
                FUN_ovl_23__029362();
              }
            }
            if (iVar2 != 0x5e) break;
            FUN_ovl_23__0296e2();
          }
          if (0x5e < iVar2) break;
          if (iVar2 == 0xb) {
            FUN_ovl_23__02940c();
          }
          else if (iVar2 == 0xc) {
            FUN_ovl_23__02945c();
          }
          else if (iVar2 == 0xd) {
            FUN_ovl_23__0294a4();
          }
          else if (iVar2 == 0x1b) {
            FUN_ovl_23__0294fe();
          }
        }
        if (iVar2 != 0x5f) break;
        FUN_ovl_23__029548();
      }
      if (iVar2 != 0x60) break;
      FUN_ovl_23__02966c();
LAB_ovl_23__02982a:
      dispatch_ovl_13_2558_0066(param_1);
    }
    if (iVar2 == 0x61) {
      FUN_ovl_23__029680();
      goto LAB_ovl_23__02982a;
    }
    if (iVar2 == 0x62) {
      FUN_ovl_23__0296d6();
    }
    else if (iVar2 == 99) {
      bVar1 = true;
    }
  } while( true );
}


