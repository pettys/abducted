/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_27::0290a0 FUN_ovl_27__0290a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_27__0290a0(int param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1eea_0004(param_2,param_3,
                (param_1 - (uint)*(byte *)(_DAT_2a22_4914 + 4)) * 3 + _DAT_2a22_4914 + 6,0x2e67);
  return;
}



/* ovl_27::0290da FUN_ovl_27__0290da */

void __cdecl16far FUN_ovl_27__0290da(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d13c = 1;
  if (DAT_2a22_e3c2 == '\0') {
    iVar1 = dispatch_ovl_13_2558_0d62(0,1,(int)DAT_3000_d13d);
    if (iVar1 == 0) {
      DAT_3000_d13b = 9;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d13b = 0x12;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 0x61;
      return;
    }
    if (iVar1 == 3) {
      DAT_3000_d13b = 99;
      return;
    }
    bVar2 = iVar1 == 4;
  }
  else {
    iVar1 = dispatch_ovl_13_2558_0d62(1,1,(int)DAT_3000_d13d);
    if (iVar1 == 0) {
      DAT_3000_d13b = 0x12;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d13b = 0x61;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 99;
      return;
    }
    bVar2 = iVar1 == 3;
  }
  if (bVar2) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::029156 FUN_ovl_27__029156 */

void __cdecl16far FUN_ovl_27__029156(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d13c = 2;
  if ((DAT_2a22_e3c8 == '\0') || (iVar1 = FUN_1000_08be(0xe), iVar1 == 0)) {
    iVar1 = dispatch_ovl_13_2558_0d62(2,1,(int)DAT_3000_d13d);
    if (iVar1 == 0) {
      DAT_3000_d13b = 0x12;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d13b = 10;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 99;
      return;
    }
    bVar2 = iVar1 == 3;
  }
  else {
    if (DAT_2a22_e3cc == '\0') {
      DAT_2a22_e3bb = DAT_2a22_e3bb + '\x05';
    }
    DAT_2a22_e3cc = '\x01';
    DAT_3000_d13d = '\x01';
    iVar1 = dispatch_ovl_13_2558_0d62(3,1,1);
    if (iVar1 == 0) {
      DAT_3000_d13b = 0xf;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d13b = 99;
      return;
    }
    bVar2 = iVar1 == 2;
  }
  if (bVar2) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::0291ee FUN_ovl_27__0291ee */

void __cdecl16far FUN_ovl_27__0291ee(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d13c = 3;
  if ((DAT_2a22_e3c8 == '\0') || (iVar1 = FUN_1000_08be(0xe), iVar1 == 0)) {
    iVar1 = dispatch_ovl_13_2558_0d62(4,1,(int)DAT_3000_d13d);
    if (iVar1 == 0) {
      DAT_3000_d13b = 0x12;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d13b = 10;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 99;
      return;
    }
    bVar2 = iVar1 == 3;
  }
  else {
    if (DAT_2a22_e3cc == '\0') {
      DAT_2a22_e3bb = DAT_2a22_e3bb + '\x05';
    }
    DAT_2a22_e3cc = '\x01';
    DAT_3000_d13d = '\x01';
    iVar1 = dispatch_ovl_13_2558_0d62(5,1,1);
    if (iVar1 == 0) {
      DAT_3000_d13b = 0xf;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d13b = 99;
      return;
    }
    bVar2 = iVar1 == 2;
  }
  if (bVar2) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::029286 FUN_ovl_27__029286 */

void __cdecl16far FUN_ovl_27__029286(void)

{
  int iVar1;
  undefined2 uVar2;
  
  DAT_3000_d13c = 4;
  if (DAT_2a22_e3c8 != '\0') {
    iVar1 = FUN_1000_08be(0xe);
    if (iVar1 != 0) {
      if (DAT_2a22_e3cc == '\0') {
        DAT_2a22_e3bb = DAT_2a22_e3bb + '\x05';
      }
      DAT_2a22_e3cc = '\x01';
      DAT_3000_d13d = '\x01';
      iVar1 = 1;
      uVar2 = 7;
      goto LAB_ovl_27__0292c0;
    }
  }
  iVar1 = (int)DAT_3000_d13d;
  uVar2 = 6;
LAB_ovl_27__0292c0:
  iVar1 = dispatch_ovl_13_2558_0d62(uVar2,1,iVar1);
  if (iVar1 == 0) {
    DAT_3000_d13b = 99;
  }
  else if (iVar1 == 1) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::0292ec FUN_ovl_27__0292ec */

void __cdecl16far FUN_ovl_27__0292ec(void)

{
  int iVar1;
  
  DAT_3000_d13c = 9;
  DAT_2a22_e3c2 = 1;
  iVar1 = dispatch_ovl_13_2558_0d62(8,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0x12;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 0x61;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::029338 FUN_ovl_27__029338 */

void __cdecl16far FUN_ovl_27__029338(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_3000_d13c = 10;
  if ((DAT_2a22_e3c8 == '\0') || (DAT_2a22_e3cb == '\0')) {
    iVar1 = dispatch_ovl_13_2558_0d62(9,1,(int)DAT_3000_d13d);
    if (iVar1 == 0) {
      DAT_3000_d13b = 0xc;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d13b = 0xd;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 0x12;
      return;
    }
    if (iVar1 == 3) {
      DAT_3000_d13b = 99;
      return;
    }
    bVar2 = iVar1 == 4;
  }
  else {
    iVar1 = dispatch_ovl_13_2558_0d62(10,1,(int)DAT_3000_d13d);
    if (iVar1 == 0) {
      DAT_3000_d13b = 0xc;
      return;
    }
    if (iVar1 == 1) {
      DAT_3000_d13b = 0x12;
      return;
    }
    if (iVar1 == 2) {
      DAT_3000_d13b = 99;
      return;
    }
    bVar2 = iVar1 == 3;
  }
  if (bVar2) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::0293c0 FUN_ovl_27__0293c0 */

void __cdecl16far FUN_ovl_27__0293c0(void)

{
  int iVar1;
  
  DAT_3000_d13c = 0xc;
  iVar1 = dispatch_ovl_13_2558_0d62(0xb,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0x12;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 0xd;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::029406 FUN_ovl_27__029406 */

void __cdecl16far FUN_ovl_27__029406(void)

{
  int iVar1;
  
  DAT_3000_d13c = 0xd;
  iVar1 = dispatch_ovl_13_2558_0d62(0xc,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0x12;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 0xc;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::02944c FUN_ovl_27__02944c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_27__02944c(void)

{
  int iVar1;
  
  DAT_3000_d13c = 0xe;
  iVar1 = FUN_19c7_483e(_DAT_3000_d13f,0x8157);
  if (iVar1 == 0) {
    DAT_2a22_e3c7 = 0;
    DAT_2a22_e3c8 = 1;
    DAT_2a22_e3bb = DAT_2a22_e3bb + -4;
  }
  iVar1 = FUN_19c7_483e(_DAT_3000_d13f,0x815f);
  if (iVar1 == 0) {
    DAT_2a22_e3ca = 0;
    DAT_2a22_e3cb = 1;
  }
  iVar1 = dispatch_ovl_13_2558_0d62(0xd,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0x61;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 0x12;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 3) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::0294d4 FUN_ovl_27__0294d4 */

void __cdecl16far FUN_ovl_27__0294d4(void)

{
  int iVar1;
  
  DAT_3000_d13c = 0xf;
  iVar1 = dispatch_ovl_13_2558_0d62(0xe,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    DAT_3000_d13b = 99;
  }
  else if (iVar1 == 1) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::029504 FUN_ovl_27__029504 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_27__029504(void)

{
  int iVar1;
  
  DAT_3000_d13c = 0x10;
  if (DAT_2a22_e3ca != '\0') {
    _DAT_3000_d13f = 0x8165;
  }
  if (DAT_2a22_e3c7 != '\0') {
    _DAT_3000_d13f = 0x816b;
  }
  iVar1 = dispatch_ovl_13_2558_0d62(0xf,1,(int)DAT_3000_d13d,_DAT_3000_d13f);
  if (iVar1 == 0) {
    DAT_3000_d13b = 0xe;
    return;
  }
  if (iVar1 == 1) {
    DAT_3000_d13b = 99;
    return;
  }
  if (iVar1 == 2) {
    DAT_3000_d13b = 0x62;
    return;
  }
  return;
}



/* ovl_27::02955e FUN_ovl_27__02955e */

void __cdecl16far FUN_ovl_27__02955e(void)

{
  int iVar1;
  
  DAT_3000_d13c = 0x11;
  iVar1 = dispatch_ovl_13_2558_0d62(0x10,1,(int)DAT_3000_d13d);
  if (iVar1 == 0) {
    iVar1 = (DAT_2a22_e3bb + -1) / 6;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        DAT_3000_d13b = 2;
        return;
      }
      if (iVar1 == 2) {
        DAT_3000_d13b = 3;
        return;
      }
      if (iVar1 == 3) {
        DAT_3000_d13b = 4;
        return;
      }
      return;
    }
    DAT_3000_d13b = 1;
  }
  else if (iVar1 == 1) {
    DAT_3000_d13b = 99;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    DAT_3000_d13b = 0x62;
  }
  return;
}



/* ovl_27::0295d0 FUN_ovl_27__0295d0 */

void __cdecl16far FUN_ovl_27__0295d0(void)

{
  bool bVar1;
  int iVar2;
  int local_a;
  int local_8;
  int local_4;
  
  bVar1 = false;
  local_4 = 0x12;
  local_a = 1;
  local_8 = 0;
switchD_ovl_27__029619_default:
  do {
    if (bVar1) {
      DAT_3000_d13b = DAT_3000_d13c;
      return;
    }
    if (local_a == 1) break;
    local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
    switch(local_8) {
    case 0:
      local_4 = 0x1a;
      if (DAT_2a22_e3c8 != '\0') {
        local_4 = 0x1b;
      }
      iVar2 = FUN_1000_08be(0xe);
      if (iVar2 == 0) {
        local_4 = 0x1c;
      }
      break;
    case 1:
      local_4 = 0x1d;
      break;
    case 2:
      local_4 = 0x1e;
      if (DAT_2a22_e3cb != '\0') {
        local_4 = 0x1f;
      }
      break;
    case 3:
      local_4 = 0x20;
      break;
    case 4:
      local_4 = 0x21;
      break;
    case 5:
      local_4 = 0x22;
      break;
    case 6:
      local_4 = 0x12;
      local_a = 1;
      break;
    case 7:
      goto switchD_ovl_27__029619_caseD_7;
    }
  } while( true );
  local_8 = dispatch_ovl_13_2558_0d62(local_4 + -1,local_8 + 1,(int)DAT_3000_d13d);
  switch(local_8) {
  case 0:
    local_4 = 0x14;
    break;
  case 1:
    local_4 = 0x15;
    break;
  case 2:
    local_4 = 0x16;
    break;
  case 3:
    local_4 = 0x17;
    break;
  case 4:
    local_4 = 0x18;
    break;
  case 5:
    local_4 = 0x19;
    break;
  case 6:
    local_4 = 0x13;
    local_a = 2;
    break;
  case 7:
switchD_ovl_27__029619_caseD_7:
    bVar1 = true;
  }
  goto switchD_ovl_27__029619_default;
}



/* ovl_27::02972e FUN_ovl_27__02972e */

void __cdecl16far FUN_ovl_27__02972e(void)

{
  dispatch_ovl_12_252a_36c2(1);
  DAT_3000_d13b = DAT_3000_d13c;
  return;
}



/* ovl_27::029742 FUN_ovl_27__029742 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_27__029742(void)

{
  _DAT_2a22_e333 = 2;
  DAT_3000_d13b = 99;
  return;
}



/* ovl_27::02974e FUN_ovl_27__02974e */

void __cdecl16far FUN_ovl_27__02974e(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (param_1 + -1) / 6;
  if (iVar1 == 1) {
    FUN_ovl_27__0290a0(0x26,0x21,4);
    uVar2 = 0x40;
  }
  else if (iVar1 == 2) {
    FUN_ovl_27__0290a0(0x2b,0x21,4);
    uVar2 = 0x50;
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    FUN_ovl_27__0290a0(0x71,0x21,4);
    uVar2 = 0x60;
  }
  FUN_ovl_27__0290a0(uVar2,0x30,0x10);
  return;
}



/* ovl_27::0297d4 ovl_27_entry_290a_0734 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_27_entry_290a_0734(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  FUN_20a6_02a8(4,2,0x8173);
  FUN_1000_038c(0x817e);
  dispatch_ovl_13_2558_00d4(0x8189,param_1);
  FUN_1951_017a(0x1f);
  _DAT_3000_d102 = (undefined *)&DAT_2a22_e3c2;
  DAT_3000_d13d = 0;
  DAT_2a22_e3c0 = DAT_2a22_e3c0 + '\x01';
  iVar2 = (int)DAT_2a22_e3bb;
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_27__02974e(iVar2);
  }
  iVar3 = (DAT_2a22_e3bb + -1) / 6;
  if (iVar3 == 0) {
    DAT_3000_d13b = '\x01';
  }
  else if (iVar3 == 1) {
    DAT_3000_d13b = '\x02';
  }
  else if (iVar3 == 2) {
    DAT_3000_d13b = '\x03';
  }
  else if (iVar3 == 3) {
    DAT_3000_d13b = '\x04';
  }
  if ((DAT_2a22_e3c7 != '\0') || (DAT_2a22_e3ca != '\0')) {
    DAT_3000_d13b = '\x10';
  }
  if (DAT_2a22_f252 != '\0') {
    DAT_3000_d13b = '\x11';
  }
  while (!bVar1) {
    iVar3 = (int)DAT_3000_d13b;
    if (iVar3 == 0xd) {
      FUN_ovl_27__029406();
    }
    else if (iVar3 < 0xe) {
      switch(iVar3) {
      case 1:
        FUN_ovl_27__0290da();
        break;
      case 2:
        FUN_ovl_27__029156();
        break;
      case 3:
        FUN_ovl_27__0291ee();
        break;
      case 4:
        FUN_ovl_27__029286();
        break;
      case 9:
        FUN_ovl_27__0292ec();
        break;
      case 10:
        FUN_ovl_27__029338();
        break;
      case 0xc:
        FUN_ovl_27__0293c0();
      }
    }
    else if (iVar3 == 0x11) {
      FUN_ovl_27__02955e();
    }
    else if (iVar3 < 0x12) {
      if (iVar3 == 0xe) {
        FUN_ovl_27__02944c();
      }
      else if (iVar3 == 0xf) {
        FUN_ovl_27__0294d4();
      }
      else if (iVar3 == 0x10) {
        FUN_ovl_27__029504();
      }
    }
    else if (iVar3 == 0x12) {
      FUN_ovl_27__0295d0();
    }
    else if (iVar3 == 0x61) {
      FUN_ovl_27__02972e();
      dispatch_ovl_13_2558_0066(param_1);
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        FUN_ovl_27__02974e(iVar2);
      }
    }
    else if (iVar3 == 0x62) {
      FUN_ovl_27__029742();
    }
    else if (iVar3 == 99) {
      bVar1 = true;
    }
  }
  dispatch_ovl_07_22dc_0216(1);
  FUN_1000_036e();
  FUN_1951_017a(1);
  return;
}


