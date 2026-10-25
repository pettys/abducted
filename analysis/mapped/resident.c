/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* 1000:0000 game_main */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void game_main(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  uVar2 = FUN_2035_0000(0x25f,0);
  FUN_1eea_052b(uVar2);
  dispatch_ovl_02_22dc_0000(param_2,param_3);
  FUN_19b0_0002();
  *_DAT_2a22_4762 = DAT_2a22_e325;
  uVar2 = FUN_2035_0000(_DAT_2a22_4762,0);
  FUN_1eea_052b(uVar2);
  iVar3 = thunk_EXT_FUN_0000_0000(0x1eea);
  if (iVar3 != 0) {
    FUN_19c7_4f54(0x1eea,uVar2);
    *_DAT_2a22_4762 = 0x4e;
    uVar2 = FUN_2035_0000(_DAT_2a22_4762,0);
    FUN_1eea_052b(uVar2);
  }
  *_DAT_2a22_4760 = DAT_2a22_e324;
  uVar2 = FUN_2035_0000(_DAT_2a22_4760,0x268);
  FUN_1eea_052b(uVar2);
  thunk_EXT_FUN_0000_0000(0x1eea,0);
  local_8 = 0;
  do {
    uVar2 = 0x1eea;
    iVar3 = thunk_EXT_FUN_0000_0000(0x1eea,local_8);
    *(int *)(local_8 * 2 + 0x39bc) = iVar3;
    if (iVar3 == 0) {
      uVar2 = 0x1951;
      FUN_1951_00b2(0x272);
    }
    thunk_EXT_FUN_0000_0000(uVar2,local_8,iVar3);
    local_8 = local_8 + 1;
  } while (local_8 < 3);
  uVar2 = 0x1eea;
  uVar4 = thunk_EXT_FUN_0000_0000(0x1eea);
  uVar1 = *(uint *)(DAT_2a22_e326 * 2 + 0x35a);
  if (uVar4 < uVar1) {
    DAT_2a22_f1ba = 0;
    uVar2 = FUN_19c7_48e8((uVar1 - uVar4) + 0x3f >> 6,0xa176,10);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar2);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x27c);
    uVar2 = 0x1951;
    FUN_1951_00b2((undefined *)&DAT_2a22_f1ba);
  }
  FUN_19c7_0072(uVar2,(int)*_DAT_2a22_4760);
  _DAT_2a22_7e14 = *(undefined2 *)(_DAT_2a22_bd60 * 2 + 0x39bc);
  FUN_197d_0004();
  dispatch_ovl_10_252a_29e0();
  FUN_1000_026c();
  if (DAT_2a22_46ee != '\0') {
    iVar3 = FUN_1eea_111a();
    if (iVar3 != 0) {
      DAT_2a22_46ee = 1;
      goto LAB_1000_019e;
    }
  }
  DAT_2a22_46ee = 0;
LAB_1000_019e:
  FUN_1eea_1173(0,0,_DAT_2a22_e349);
  _DAT_2a22_e32c = 1;
  _DAT_2a22_fac5 = 0;
  _DAT_2a22_ded2 = 0;
  _DAT_2a22_ded0 = 0;
  _DAT_2a22_faca = 0;
  FUN_1000_07de();
  FUN_1000_088c();
  if (DAT_2a22_e326 == DAT_2a22_46f3) {
    thunk_EXT_FUN_0000_0000(0x1eea,5,0);
  }
  thunk_EXT_FUN_0000_0000(0x1eea,0x366,0);
  dispatch_ovl_00_22dc_2350(0x1eea);
  FUN_1000_047c();
  do {
    iVar3 = FUN_1951_00ea();
  } while (iVar3 != 0);
  FUN_1000_07a6();
  dispatch_ovl_10_252a_01c8();
  _DAT_2a22_e32c = 0x10;
  _DAT_2a22_e331 = 3;
  _DAT_2a22_e333 = 2;
  DAT_2a22_a5bd = 0;
  DAT_2a22_a5bc = 0;
  _DAT_2a22_e32f = (undefined *)&DAT_2a22_e5d0;
  _DAT_2a22_e5c0 = (undefined *)&DAT_2a22_e5d0;
  do {
    iVar3 = dispatch_ovl_14_252a_00a4();
    if (iVar3 == 1) {
      dispatch_ovl_15_252a_193c();
LAB_1000_0265:
      dispatch_ovl_00_22dc_20fe();
    }
    else if (iVar3 == 3) {
      FUN_1000_0598();
    }
    else {
      if ((6 < iVar3) && (iVar3 < 9)) goto LAB_1000_0265;
      FUN_1000_0332();
    }
    FUN_1eea_11e7();
  } while( true );
}



/* 1000:00ea FUN_1000_00ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000_00ea(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 uVar5;
  
  uVar5 = 0x1000;
  while( true ) {
    thunk_EXT_FUN_0000_0000(uVar5);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    if (2 < *(int *)(unaff_BP + -6)) break;
    uVar5 = 0x1eea;
    uVar2 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)(unaff_BP + -8) = uVar2;
    *(undefined2 *)(*(int *)(unaff_BP + -6) * 2 + 0x39bc) = uVar2;
    if (*(int *)(unaff_BP + -8) == 0) {
      uVar5 = 0x1951;
      FUN_1951_00b2();
    }
  }
  uVar3 = thunk_EXT_FUN_0000_0000();
  uVar1 = *(uint *)(DAT_2a22_e326 * 2 + 0x35a);
  if (uVar3 < uVar1) {
    DAT_2a22_f1ba = 0;
    FUN_19c7_48e8((uVar1 - uVar3) + 0x3f >> 6);
    FUN_19c7_47cc();
    FUN_19c7_47cc();
    FUN_1951_00b2();
  }
  FUN_19c7_0072();
  _DAT_2a22_7e14 = *(undefined2 *)(_DAT_2a22_bd60 * 2 + 0x39bc);
  FUN_197d_0004();
  dispatch_ovl_10_252a_29e0();
  FUN_1000_026c();
  if ((DAT_2a22_46ee == '\0') || (iVar4 = FUN_1eea_111a(), iVar4 == 0)) {
    DAT_2a22_46ee = 0;
  }
  else {
    DAT_2a22_46ee = 1;
  }
  FUN_1eea_1173(0);
  _DAT_2a22_e32c = 1;
  _DAT_2a22_fac5 = 0;
  _DAT_2a22_ded2 = 0;
  _DAT_2a22_ded0 = 0;
  _DAT_2a22_faca = 0;
  FUN_1000_07de();
  FUN_1000_088c();
  if (DAT_2a22_e326 == DAT_2a22_46f3) {
    thunk_EXT_FUN_0000_0000(0x1eea);
  }
  thunk_EXT_FUN_0000_0000(0x1eea);
  dispatch_ovl_00_22dc_2350();
  FUN_1000_047c();
  do {
    iVar4 = FUN_1951_00ea();
  } while (iVar4 != 0);
  FUN_1000_07a6();
  dispatch_ovl_10_252a_01c8();
  _DAT_2a22_e32c = 0x10;
  _DAT_2a22_e331 = 3;
  _DAT_2a22_e333 = 2;
  DAT_2a22_a5bd = 0;
  DAT_2a22_a5bc = 0;
  _DAT_2a22_e32f = (undefined *)&DAT_2a22_e5d0;
  _DAT_2a22_e5c0 = (undefined *)&DAT_2a22_e5d0;
  do {
    iVar4 = dispatch_ovl_14_252a_00a4();
    if (iVar4 == 1) {
      dispatch_ovl_15_252a_193c();
LAB_1000_0265:
      dispatch_ovl_00_22dc_20fe();
    }
    else if (iVar4 == 3) {
      FUN_1000_0598();
    }
    else {
      if ((6 < iVar4) && (iVar4 < 9)) goto LAB_1000_0265;
      FUN_1000_0332();
    }
    FUN_1eea_11e7();
  } while( true );
}



/* 1000:026c FUN_1000_026c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_026c(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_6;
  int local_4;
  
  thunk_EXT_FUN_0000_0000(0x1000);
  FUN_20a6_0232(2,0x376);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    local_6 = 0;
  }
  else if (DAT_2a22_e326 == DAT_2a22_46f1) {
    local_6 = 0x20;
  }
  else {
    local_6 = 0x10;
  }
  _DAT_2a22_e349 = thunk_EXT_FUN_0000_0000(0x20a6,2,local_6,0x28,0x10,0x10);
  local_4 = 0;
  do {
    iVar2 = local_4 * 2;
    uVar1 = thunk_EXT_FUN_0000_0000
                      (0x1eea,2,local_6,local_4 * 0x14,*(undefined2 *)(iVar2 + 0x382),
                       *(undefined2 *)(iVar2 + 0x394));
    *(undefined2 *)((undefined *)&DAT_2a22_e385 + iVar2) = uVar1;
    local_4 = local_4 + 1;
  } while (local_4 < 9);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 1000:030e FUN_1000_030e */

void __cdecl16far FUN_1000_030e(void)

{
  thunk_EXT_FUN_0000_0000(0x1000);
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_1163();
  }
  if (DAT_2a22_5b24 != '\0') {
    FUN_197d_0042();
  }
  FUN_19b0_003b();
  return;
}



/* 1000:0332 FUN_1000_0332 */

void __cdecl16far FUN_1000_0332(void)

{
  FUN_1000_030e();
  FUN_1951_0064(3);
  FUN_19c7_29de(0x1951,0x45);
  return;
}



/* 1000:0350 FUN_1000_0350 */

void __cdecl16far FUN_1000_0350(char *param_1,char *param_2)

{
  char cVar1;
  
  while (cVar1 = *param_2, *param_1 = cVar1, cVar1 != '\0') {
    param_1 = param_1 + 1;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
  }
  return;
}



/* 1000:036e FUN_1000_036e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_036e(void)

{
  FUN_11e1_0108();
  FUN_19c7_4f54(0x11e1,_DAT_2a22_e322);
  FUN_1951_0006(2);
  return;
}



/* 1000:038c FUN_1000_038c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_038c(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_12 [2];
  undefined1 local_e [2];
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  undefined2 local_4;
  
  FUN_2035_00c6(param_1,0,&local_4);
  FUN_19c7_4f30(0x2035,local_4,&local_c,0x2e67,2,local_e);
  FUN_19c7_4f30(0x19c7,local_4,0x9a84,0x2e67,local_c * 0x16,local_e);
  FUN_19c7_4f30(0x19c7,local_4,&local_8,0x2e67,2,local_e);
  uVar2 = 0x1eea;
  local_a = thunk_EXT_FUN_0000_0000(0x19c7);
  local_6 = local_8 + 0xfU >> 4;
  if (local_a < local_6) {
    FUN_19c7_4ec2(0x1eea,local_4);
    uVar2 = 0x1951;
    FUN_1951_00b2(0x3a6);
  }
  uVar3 = 0x19c7;
  iVar1 = FUN_19c7_4e68(uVar2,local_6,local_12);
  if (iVar1 != 0) {
    uVar3 = 0x1951;
    FUN_1951_00b2(0x3c7);
  }
  _DAT_2a22_e322 = local_12[0];
  _DAT_2a22_e320 = 0;
  FUN_19c7_4f30(uVar3,local_4,0,local_12[0],local_8,local_e);
  FUN_19c7_4ec2(0x19c7,local_4);
  FUN_1951_02ac();
  return;
}



/* 1000:047c FUN_1000_047c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_047c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_6;
  undefined1 local_4 [2];
  
  if (_DAT_2a22_e5c2 != 0) {
    uVar2 = 0x2035;
    iVar1 = FUN_2035_00c6(*(undefined2 *)(_DAT_2a22_e5c2 * 2 + 0x43e),0,&local_6);
    if (iVar1 != 0) {
      uVar2 = 0x1951;
      FUN_1951_00b2(0x414);
    }
    FUN_19c7_4f30(uVar2,local_6,(undefined *)&DAT_2a22_e5c4,0x2e67,2,local_4);
    FUN_19c7_4f30(0x19c7,local_6,(undefined *)&DAT_2a22_e5d0,0x2e67,_DAT_2a22_e5c4 * 0x32,local_4);
    FUN_19c7_4f30(0x19c7,local_6,0xaf69,0x2e67,_DAT_2a22_e5c4 * 0x24,local_4);
    FUN_19c7_4f30(0x19c7,local_6,0xab44,0x2e67,_DAT_2a22_e5c4 * 0xb,local_4);
    FUN_19c7_4ec2(0x19c7,local_6);
    FUN_1951_02ac();
    _DAT_2a22_e39b = _DAT_2a22_e5d0 + 10;
    _DAT_2a22_e5a6 = _DAT_2a22_e5d2 + 10;
    _DAT_2a22_e5aa = _DAT_2a22_e5d4;
  }
  return;
}



/* 1000:0556 FUN_1000_0556 */

void __cdecl16far FUN_1000_0556(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    if ((char)((undefined *)&DAT_2a22_e39e)[local_4 * 0x1d] < '\x01') {
      ((undefined *)&DAT_2a22_e39e)[local_4 * 0x1d] = '\x01';
    }
    if ('\x18' < (char)((undefined *)&DAT_2a22_e39e)[local_4 * 0x1d]) {
      ((undefined *)&DAT_2a22_e39e)[local_4 * 0x1d] = '\x18';
    }
    local_4 = local_4 + 1;
  } while (local_4 < 0x11);
  return;
}



/* 1000:0598 FUN_1000_0598 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_0598(void)

{
  thunk_EXT_FUN_0000_0000(0x1000,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  FUN_1000_0556();
  if (_DAT_2a22_e5c2 == 1) {
    if (_DAT_2a22_e32c == 2) {
      dispatch_ovl_16_290a_04fe((int)*(char *)(_DAT_2a22_e32f + 0xb));
    }
    else if (_DAT_2a22_e32c == 3) {
      dispatch_ovl_17_290a_0562((int)*(char *)(_DAT_2a22_e32f + 0xb));
    }
    else if (_DAT_2a22_e32c == 4) {
      dispatch_ovl_18_290a_0370((int)*(char *)(_DAT_2a22_e32f + 0xb));
    }
    else if (_DAT_2a22_e32c == 5) {
      dispatch_ovl_20_290a_03c0((int)*(char *)(_DAT_2a22_e32f + 0xb));
    }
    else if (_DAT_2a22_e32c == 6) {
      dispatch_ovl_21_290a_02a2((int)*(char *)(_DAT_2a22_e32f + 0xb));
    }
    else if (_DAT_2a22_e32c == 7) {
      dispatch_ovl_19_290a_0386((int)*(char *)(_DAT_2a22_e32f + 0xb));
    }
  }
  else if (_DAT_2a22_e5c2 == 2) {
    switch(_DAT_2a22_e32c) {
    case 2:
      dispatch_ovl_26_290a_066e((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 3:
      dispatch_ovl_27_290a_0734((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 8:
      dispatch_ovl_22_290a_0598((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 9:
      dispatch_ovl_23_290a_0668((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 10:
      dispatch_ovl_24_290a_02b6((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 0xb:
      dispatch_ovl_25_290a_04e0((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 0xc:
      dispatch_ovl_28_290a_0820((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 0xd:
      dispatch_ovl_29_290a_068a((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 0xe:
      dispatch_ovl_30_290a_0434((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 0xf:
      dispatch_ovl_31_290a_04cc((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 0x10:
      dispatch_ovl_32_290a_03d2((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 0x11:
      dispatch_ovl_33_290a_0c6c((int)*(char *)(_DAT_2a22_e32f + 0xb));
      break;
    case 0x12:
      dispatch_ovl_34_290a_036e((int)*(char *)(_DAT_2a22_e32f + 0xb));
    }
  }
  FUN_1000_0556();
  *(undefined1 *)(_DAT_2a22_e32c * 0x1d + -0x60e3) = 1;
  FUN_1eea_11e7();
  thunk_EXT_FUN_0000_0000(0x1eea,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  return;
}



/* 1000:07a6 FUN_1000_07a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_07a6(void)

{
  int iVar1;
  bool bVar2;
  
  _DAT_2a22_fac8 = 500;
  _DAT_2a22_fac1 = 3;
  _DAT_2a22_faca = 10;
  bVar2 = CARRY2(_DAT_2a22_ded0,_DAT_2a22_fac5);
  _DAT_2a22_ded0 = _DAT_2a22_ded0 + _DAT_2a22_fac5;
  _DAT_2a22_ded2 = _DAT_2a22_ded2 + ((int)_DAT_2a22_fac5 >> 0xf) + (uint)bVar2;
  iVar1 = (int)_DAT_2a22_fac5 / 0x32;
  if (0xf < iVar1) {
    iVar1 = 0xf;
  }
  _DAT_2a22_a2c8 = _DAT_2a22_a2c8 + iVar1;
  _DAT_2a22_fac5 = 0;
  return;
}



/* 1000:07de FUN_1000_07de */

void __cdecl16far FUN_1000_07de(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    FUN_19c7_4d7c((undefined *)&DAT_2a22_e39d + local_4 * 0x1d,0,0x1d);
    local_4 = local_4 + 1;
  } while (local_4 < 0x11);
  DAT_2a22_e39e = 0xf;
  DAT_2a22_e3bb = 0x12;
  DAT_2a22_e3d8 = 0;
  DAT_2a22_e3f5 = 0xc;
  DAT_2a22_e412 = 0;
  DAT_2a22_e42f = 0;
  DAT_2a22_e44c = 4;
  DAT_2a22_e469 = 0;
  DAT_2a22_e486 = 0;
  DAT_2a22_e4a3 = 0;
  DAT_2a22_e4c0 = 0x10;
  DAT_2a22_e4dd = 0xc;
  DAT_2a22_e4fa = 9;
  DAT_2a22_e517 = 2;
  DAT_2a22_e534 = 0;
  DAT_2a22_e551 = 0;
  DAT_2a22_e56e = 0x18;
  DAT_2a22_e327 = 0;
  DAT_2a22_e328 = 0;
  DAT_2a22_e329 = 0;
  DAT_2a22_e32a = 0;
  DAT_2a22_e32b = 0;
  DAT_2a22_e32e = 0;
  FUN_1000_088c();
  dispatch_ovl_09_22dc_0555();
  return;
}



/* 1000:088c FUN_1000_088c */

void __cdecl16far FUN_1000_088c(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    FUN_19c7_4d7c((undefined *)&DAT_2a22_f232 + local_4 * 0x17,0,0x17);
    local_4 = local_4 + 1;
  } while (local_4 < 0x11);
  return;
}



/* 1000:08be FUN_1000_08be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1000_08be(int param_1)

{
  int local_6;
  int local_4;
  
  local_4 = 0;
  for (local_6 = 0; local_6 < _DAT_2a22_e5c4; local_6 = local_6 + 1) {
    if (((char)((undefined *)&DAT_2a22_e5da)[local_6 * 0x32] == param_1) &&
       (((undefined *)&DAT_2a22_e5ff)[local_6 * 0x32] == '\0')) {
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}



/* 1090:0002 FUN_1090_0002 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1090_0002(void)

{
  uint uVar1;
  
  _DAT_2a22_fad4 = _DAT_2a22_fad2;
  _DAT_2a22_facc = _DAT_2a22_facc + 1;
  if (1000 < _DAT_2a22_5b26) {
    _DAT_2a22_5b26 = 1000;
  }
  uVar1 = _DAT_2a22_5b26;
  _DAT_2a22_face = _DAT_2a22_5b26;
  do {
  } while (_DAT_2a22_5b26 < _DAT_2a22_5b26 + _DAT_2a22_fada);
  _DAT_2a22_5b26 = 0;
  if (uVar1 == 0) {
    _DAT_2a22_face = 1;
  }
  _DAT_2a22_fad8 = (int)(600 / (long)(int)_DAT_2a22_face);
  if ((int)_DAT_2a22_face < 4) {
    _DAT_2a22_fada = 4 - _DAT_2a22_face;
    _DAT_2a22_face = 4;
  }
  else {
    _DAT_2a22_fada = 0;
    if (0x14 < (int)_DAT_2a22_face) {
      _DAT_2a22_face = 0x14;
    }
  }
  _DAT_2a22_fad6 = (((int)_DAT_2a22_face >> 1) + 0x3c) / (int)_DAT_2a22_face;
  _DAT_2a22_fad0 = _DAT_2a22_fad0 + _DAT_2a22_face;
  if (_DAT_2a22_fad0 < 0x10) {
    _DAT_2a22_fad4 = 0xffff;
    return;
  }
  _DAT_2a22_fad0 = _DAT_2a22_fad0 + -0xf;
  _DAT_2a22_fad2 = _DAT_2a22_fad2 + 1;
  return;
}



/* 1090:00a6 FUN_1090_00a6 */

void __cdecl16far FUN_1090_00a6(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 local_10 [2];
  undefined2 local_c;
  undefined2 local_a;
  
  local_10[0] = 0xb;
  FUN_19c7_4a00(0x33,local_10,local_10);
  *param_1 = local_c;
  *param_2 = local_a;
  return;
}



/* 1090:00d6 FUN_1090_00d6 */

void __cdecl16far FUN_1090_00d6(undefined2 param_1)

{
  int local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)(*(int *)(local_4 * 2 + 0x34a) + 0x10) = param_1;
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  return;
}



/* 1090:00fe FUN_1090_00fe */

void __cdecl16far FUN_1090_00fe(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_2;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    cVar1 = *pcVar2;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}



/* 1090:011a FUN_1090_011a */

void __cdecl16far FUN_1090_011a(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_1;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}



/* 1090:0136 FUN_1090_0136 */

void __cdecl16far
FUN_1090_0136(int param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7)

{
  undefined1 local_34 [50];
  
  FUN_1090_00fe(local_34,param_4,param_5);
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x16;
  *(undefined2 *)(param_1 + 0xc) = param_7;
  thunk_EXT_FUN_0000_0000(0x1090,param_1,param_2 + 1,param_3 + 1,local_34);
  *(undefined2 *)(param_1 + 0xc) = param_6;
  thunk_EXT_FUN_0000_0000(0x1eea,param_1,param_2,param_3,local_34);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



/* 1090:01ae FUN_1090_01ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1090_01ae(void)

{
  int iVar1;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = 0;
  local_a = _DAT_2a22_47ac;
  if (_DAT_2a22_e5c2 == 1) {
    for (local_6 = 0; local_6 < 4; local_6 = local_6 + 1) {
      local_4 = 5;
      local_c = *(int *)(local_6 * 2 + 0x354);
      while (iVar1 = local_c + -1, local_c != 0) {
        local_8 = local_8 + local_4;
        local_c = iVar1;
        if (1 < local_4) {
          local_4 = local_4 + -1;
        }
      }
    }
    iVar1 = FUN_1000_08be(4);
    if (iVar1 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar1 = FUN_1000_08be(7);
    if (iVar1 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar1 = FUN_1000_08be(3);
    if (iVar1 == 0) {
      local_8 = local_8 + 5;
    }
    iVar1 = FUN_1000_08be(6);
    if (iVar1 == 0) {
      local_8 = local_8 + 10;
    }
    iVar1 = FUN_1000_08be(2);
    if (iVar1 == 0) {
      local_8 = local_8 + 10;
    }
    iVar1 = FUN_1000_08be(5);
    if (iVar1 == 0) {
      local_8 = local_8 + 5;
    }
    if (DAT_2a22_e3a5 != '\0') {
      local_8 = local_8 + 0x19;
    }
    if (DAT_2a22_e3fc != '\0') {
      local_8 = local_8 + 0x19;
    }
    if (DAT_2a22_e3c2 != '\0') {
      local_8 = local_8 + 0x19;
    }
  }
  else {
    if (_DAT_2a22_e5c2 != 2) {
      return 0;
    }
    if (_DAT_2a22_47ac != 0) {
      local_a = _DAT_2a22_47ac + -1;
      local_8 = 0x32;
    }
    if (local_a != 0) {
      local_8 = local_8 + 0x14;
      local_a = local_a + -1;
    }
    while (local_a != 0) {
      local_8 = local_8 + 10;
      local_a = local_a + -1;
    }
    for (local_6 = 0; local_6 < 4; local_6 = local_6 + 1) {
      local_4 = 10;
      local_c = *(int *)(local_6 * 2 + 0x354);
      while (iVar1 = local_c + -1, local_c != 0) {
        local_8 = local_8 + local_4;
        local_c = iVar1;
        if (1 < local_4) {
          local_4 = local_4 + -1;
        }
      }
    }
    iVar1 = FUN_1000_08be(9);
    if (iVar1 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar1 = FUN_1000_08be(0xb);
    if (iVar1 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar1 = FUN_1000_08be(0x12);
    if (iVar1 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar1 = FUN_1000_08be(10);
    if (iVar1 == 0) {
      local_8 = local_8 + 10;
    }
    iVar1 = FUN_1000_08be(2);
    if (iVar1 == 0) {
      local_8 = local_8 + 10;
    }
    iVar1 = FUN_1000_08be(0xc);
    if (iVar1 == 0) {
      local_8 = local_8 + 10;
    }
    iVar1 = FUN_1000_08be(0xd);
    if (iVar1 == 0) {
      local_8 = local_8 + 10;
    }
    iVar1 = FUN_1000_08be(0xf);
    if (iVar1 == 0) {
      local_8 = local_8 + 10;
    }
    iVar1 = FUN_1000_08be(0x11);
    if (iVar1 == 0) {
      local_8 = local_8 + 10;
    }
    iVar1 = FUN_1000_08be(8);
    if (iVar1 == 0) {
      local_8 = local_8 + 5;
    }
    iVar1 = FUN_1000_08be(3);
    if (iVar1 == 0) {
      local_8 = local_8 + 5;
    }
    iVar1 = FUN_1000_08be(0xe);
    if (iVar1 == 0) {
      local_8 = local_8 + 5;
    }
    if (DAT_2a22_e453 != '\0') {
      local_8 = local_8 + 0x14;
    }
    if (DAT_2a22_e3c2 != '\0') {
      local_8 = local_8 + 0x14;
    }
    if (DAT_2a22_e501 != '\0') {
      local_8 = local_8 + 0x14;
    }
    if (DAT_2a22_e51e != '\0') {
      local_8 = local_8 + 0x14;
    }
    if (DAT_2a22_e3a5 != '\0') {
      local_8 = local_8 + 0x28;
    }
    if (DAT_2a22_e4e4 != '\0') {
      local_8 = local_8 + 0x28;
    }
    if (DAT_2a22_e4c7 != '\0') {
      local_8 = local_8 + 0x3c;
    }
    if (DAT_2a22_e558 != '\0') {
      local_8 = local_8 + 0x3c;
    }
  }
  iVar1 = FUN_19c7_4f62(_DAT_2a22_fac5 + _DAT_2a22_ded0,
                        ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
                        (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0),0xfa,0);
  return local_8 - iVar1;
}



/* 1090:047e FUN_1090_047e */

void __cdecl16far FUN_1090_047e(void)

{
  uint local_4;
  
  local_4 = 0;
  do {
    if (((undefined *)&DAT_2a22_97e2)[local_4 * 2] == '\0') {
      ((undefined *)&DAT_2a22_97e8)[local_4] = 0;
      ((undefined *)&DAT_2a22_97ea)[local_4] = 0;
    }
    if (((undefined *)&DAT_2a22_97e0)[local_4] == '\0') {
      ((undefined *)&DAT_2a22_97e8)[local_4] = 0;
    }
    local_4 = local_4 + 1;
  } while ((int)local_4 < 2);
  local_4 = 0;
  do {
    if (((undefined *)&DAT_2a22_97e3)[local_4 * 2] == '\0') {
      ((undefined *)&DAT_2a22_97e6)[local_4 ^ 1] = 0;
    }
    local_4 = local_4 + 1;
  } while ((int)local_4 < 2);
  return;
}



/* 1090:04e6 FUN_1090_04e6 */

void __cdecl16far FUN_1090_04e6(void)

{
  int local_4;
  
  if (DAT_2a22_982a == '\0') {
    local_4 = 0;
    do {
      ((undefined *)&DAT_2a22_982b)[local_4] = 0;
      local_4 = local_4 + 1;
    } while (local_4 < 0xd);
  }
  local_4 = 0;
  do {
    if (((undefined *)&DAT_2a22_9822)[local_4] == '\0') {
      ((undefined *)&DAT_2a22_982b)[local_4] = 0;
      ((undefined *)&DAT_2a22_9833)[local_4] = 0;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  local_4 = 0;
  do {
    if (((undefined *)&DAT_2a22_981e)[local_4] == '\0') {
      ((undefined *)&DAT_2a22_9833)[local_4] = 0;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  return;
}



/* 1090:0550 FUN_1090_0550 */

void __cdecl16far FUN_1090_0550(void)

{
  int local_4;
  
  if (DAT_2a22_9852 == '\0') {
    for (local_4 = 0; local_4 < 6; local_4 = local_4 + 1) {
      ((undefined *)&DAT_2a22_9853)[local_4] = 0;
      ((undefined *)&DAT_2a22_9859)[local_4] = 0;
    }
  }
  else {
    local_4 = 0;
    do {
      if ((((undefined *)&DAT_2a22_9846)[local_4] == '\0') ||
         (((undefined *)&DAT_2a22_984c)[local_4] == '\0')) {
        ((undefined *)&DAT_2a22_9853)[local_4] = 0;
        ((undefined *)&DAT_2a22_9859)[local_4] = 0;
      }
      local_4 = local_4 + 1;
    } while (local_4 < 6);
  }
  return;
}



/* 1090:05b0 FUN_1090_05b0 */

void __cdecl16far FUN_1090_05b0(void)

{
  int iVar1;
  int local_4;
  
  if ((DAT_2a22_9805 == '\0') || (DAT_2a22_9801 == '\0')) {
    local_4 = 0;
    do {
      ((undefined *)&DAT_2a22_9806)[local_4] = 0;
      ((undefined *)&DAT_2a22_9809)[local_4] = 0;
      ((undefined *)&DAT_2a22_980c)[local_4] = 0;
      local_4 = local_4 + 1;
    } while (local_4 < 3);
  }
  local_4 = 0;
  do {
    if (((undefined *)&DAT_2a22_9803)[local_4] == '\0') {
      iVar1 = local_4 * 2;
      ((undefined *)&DAT_2a22_9809)[iVar1] = 0;
      ((undefined *)&DAT_2a22_980c)[iVar1] = 0;
      ((undefined *)&DAT_2a22_9806)[iVar1] = 0;
    }
    iVar1 = local_4 * 2;
    if (((undefined *)&DAT_2a22_9800)[iVar1] == '\0') {
      ((undefined *)&DAT_2a22_9809)[iVar1] = 0;
      ((undefined *)&DAT_2a22_9806)[iVar1] = 0;
    }
    if (((undefined *)&DAT_2a22_97fd)[local_4 * 2] == '\0') {
      ((undefined *)&DAT_2a22_9806)[local_4 * 2] = 0;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 2);
  if (DAT_2a22_97fe == '\0') {
    DAT_2a22_9807 = 0;
  }
  return;
}



/* 1090:064e FUN_1090_064e */

void __cdecl16far FUN_1090_064e(void)

{
  FUN_19c7_4ce0((undefined *)&DAT_2a22_97e6,(undefined *)&DAT_2a22_97dc,10);
  FUN_19c7_4ce0((undefined *)&DAT_2a22_9806,(undefined *)&DAT_2a22_97fa,0xc);
  FUN_19c7_4ce0((undefined *)&DAT_2a22_982b,(undefined *)&DAT_2a22_981e,0xd);
  FUN_19c7_4ce0((undefined *)&DAT_2a22_9853,(undefined *)&DAT_2a22_9846,0xd);
  FUN_19c7_4ce0((undefined *)&DAT_2a22_9875,(undefined *)&DAT_2a22_986e,7);
  return;
}



/* 1090:06b4 FUN_1090_06b4 */

void __cdecl16far FUN_1090_06b4(void)

{
  FUN_1090_04e6();
  FUN_1090_047e();
  FUN_1090_0550();
  FUN_1090_05b0();
  return;
}



/* 1090:06c6 FUN_1090_06c6 */

void __cdecl16far FUN_1090_06c6(undefined2 param_1)

{
  switch(param_1) {
  case 0:
    DAT_2a22_a2a8 = DAT_2a22_a2a8 + -1;
    break;
  case 1:
  case 2:
  case 3:
    DAT_2a22_a2a9 = DAT_2a22_a2a9 + -1;
    break;
  case 4:
    DAT_2a22_a2aa = DAT_2a22_a2aa + -1;
    break;
  case 5:
  case 6:
    DAT_2a22_a2ab = DAT_2a22_a2ab + -1;
    break;
  case 7:
  case 8:
    DAT_2a22_a2ac = DAT_2a22_a2ac + -1;
    break;
  case 9:
    DAT_2a22_a2ad = DAT_2a22_a2ad + -1;
    return;
  case 10:
    DAT_2a22_a2ae = DAT_2a22_a2ae + -1;
    return;
  case 0xb:
    DAT_2a22_a2af = DAT_2a22_a2af + -1;
    return;
  case 0xc:
  case 0xd:
  case 0xe:
    DAT_2a22_a2b0 = DAT_2a22_a2b0 + -1;
    return;
  case 0xf:
  case 0x10:
    DAT_2a22_a2b1 = DAT_2a22_a2b1 + -1;
    return;
  }
  return;
}



/* 1090:073a FUN_1090_073a */

undefined2 __cdecl16far FUN_1090_073a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if (2 < iVar1) {
      return 0;
    }
    for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
      if (*(int *)((undefined *)&DAT_2a22_a2b4 + iVar1 * 0x16 + iVar2 * 2) != 0) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* 1090:077c FUN_1090_077c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1090_077c(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_4;
  
  while ((_DAT_2a22_a2c8 != 0 && (*param_1 != 0))) {
    *param_1 = *param_1 + -1;
    _DAT_2a22_a2c8 = _DAT_2a22_a2c8 + -1;
  }
  if (0 < *param_1) {
    for (local_4 = '\0';
        ((0 < *param_1 && (iVar4 = FUN_1090_073a(), iVar4 != 0)) && (local_4 < '<'));
        local_4 = local_4 + '\x01') {
      bVar2 = false;
      cVar3 = FUN_14b9_02b2(9);
      iVar4 = 0;
      do {
        if (bVar2) break;
        if (*(int *)((undefined *)&DAT_2a22_a2b4 + cVar3 * 2 + iVar4 * 0x16) != 0) {
          piVar1 = (int *)((undefined *)&DAT_2a22_a2b4 + cVar3 * 2 + iVar4 * 0x16);
          *piVar1 = *piVar1 + -1;
          *param_1 = *param_1 + -1;
          bVar2 = true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
    }
    if (((';' < local_4) && (0 < *param_1)) && (iVar4 = FUN_1090_073a(), iVar4 != 0)) {
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        for (iVar6 = 0; iVar6 < 10; iVar6 = iVar6 + 1) {
          if (*(int *)((undefined *)&DAT_2a22_a2b4 + iVar4 * 0x16 + iVar6 * 2) != 0) {
            piVar1 = (int *)((undefined *)&DAT_2a22_a2b4 + iVar4 * 0x16 + iVar6 * 2);
            *piVar1 = *piVar1 + -1;
            *param_1 = *param_1 + -1;
            if ((*param_1 == 0) || (iVar5 = FUN_1090_073a(), iVar5 == 0)) goto LAB_1090_086e;
          }
        }
      }
    }
  }
LAB_1090_086e:
  return *param_1;
}



/* 1090:087a FUN_1090_087a */

void __cdecl16far FUN_1090_087a(int *param_1)

{
  int local_10 [5];
  int local_6;
  int local_4;
  
  local_4 = 0;
  if (DAT_2a22_982a != '\0') {
    local_6 = 0;
    do {
      local_10[local_6] = 0;
      local_6 = local_6 + 1;
    } while (local_6 < 4);
    local_6 = 0;
    do {
      if (((undefined *)&DAT_2a22_9826)[local_6] != '\0') {
        local_10[local_6] = local_10[local_6] + 1;
      }
      if (((undefined *)&DAT_2a22_981e)[local_6] != '\0') {
        local_10[local_6] = local_10[local_6] + 1;
      }
      if (((undefined *)&DAT_2a22_9822)[local_6] != '\0') {
        local_10[local_6] = local_10[local_6] + 1;
      }
      local_6 = local_6 + 1;
    } while (local_6 < 4);
    if ((((local_10[0] == 0) && (local_10[1] == 0)) && (local_10[2] == 0)) && (local_10[3] == 0)) {
      DAT_2a22_982a = '\0';
      DAT_2a22_9844 = DAT_2a22_4898;
      DAT_2a22_9837 = 0;
      FUN_1090_06c6(0xc);
    }
    else {
      local_6 = 0;
      do {
        if (local_10[local_4] < local_10[local_6]) {
          local_4 = local_6;
        }
        local_6 = local_6 + 1;
      } while (local_6 < 4);
      if ((((undefined *)&DAT_2a22_9826)[local_4] != '\0') && (*param_1 != 0)) {
        ((undefined *)&DAT_2a22_9826)[local_4] = 0;
        ((undefined *)&DAT_2a22_9833)[local_4] = 0;
        ((undefined *)&DAT_2a22_9840)[local_4] = DAT_2a22_4898;
        FUN_1090_06c6(9);
        *param_1 = *param_1 + -1;
      }
      if ((((undefined *)&DAT_2a22_981e)[local_4] != '\0') && (*param_1 != 0)) {
        ((undefined *)&DAT_2a22_981e)[local_4] = 0;
        ((undefined *)&DAT_2a22_9838)[local_4] = DAT_2a22_4898;
        ((undefined *)&DAT_2a22_982b)[local_4] = 0;
        FUN_1090_06c6(5);
        *param_1 = *param_1 + -1;
      }
      if ((((undefined *)&DAT_2a22_9822)[local_4] != '\0') && (*param_1 != 0)) {
        ((undefined *)&DAT_2a22_9822)[local_4] = 0;
        *(undefined1 *)(local_4 + 0x53df) = 0;
        ((undefined *)&DAT_2a22_983c)[local_4] = DAT_2a22_4898;
        FUN_1090_06c6(10);
        *param_1 = *param_1 + -1;
      }
    }
    FUN_1090_064e();
    FUN_1090_06b4();
  }
  return;
}



/* 1090:0a08 FUN_1090_0a08 */

void __cdecl16far FUN_1090_0a08(int *param_1)

{
  if ((DAT_2a22_9874 != '\0') && (*param_1 != 0)) {
    DAT_2a22_987b = 0;
    DAT_2a22_9882 = DAT_2a22_4898;
    DAT_2a22_9874 = '\0';
    FUN_1090_06c6(9);
    *param_1 = *param_1 + -1;
  }
  if ((DAT_2a22_9873 != '\0') && (*param_1 != 0)) {
    DAT_2a22_987a = 0;
    DAT_2a22_9881 = DAT_2a22_4898;
    DAT_2a22_9873 = '\0';
    FUN_1090_06c6(4);
    *param_1 = *param_1 + -1;
  }
  if ((DAT_2a22_9872 != '\0') && (*param_1 != 0)) {
    DAT_2a22_9879 = 0;
    DAT_2a22_9880 = DAT_2a22_4898;
    DAT_2a22_9872 = '\0';
    FUN_1090_06c6(0);
    *param_1 = *param_1 + -1;
  }
  if ((DAT_2a22_9871 != '\0') && (*param_1 != 0)) {
    DAT_2a22_9878 = 0;
    DAT_2a22_987f = DAT_2a22_4898;
    DAT_2a22_9871 = '\0';
    FUN_1090_06c6(0xb);
    *param_1 = *param_1 + -1;
  }
  if ((DAT_2a22_9870 != '\0') && (*param_1 != 0)) {
    DAT_2a22_9877 = 0;
    DAT_2a22_987e = DAT_2a22_4898;
    DAT_2a22_9870 = '\0';
    FUN_1090_06c6(7);
    *param_1 = *param_1 + -1;
  }
  if ((DAT_2a22_986e != '\0') && (*param_1 != 0)) {
    DAT_2a22_9875 = 0;
    DAT_2a22_987c = DAT_2a22_4898;
    DAT_2a22_986e = '\0';
    FUN_1090_06c6(10);
    *param_1 = *param_1 + -1;
  }
  if ((DAT_2a22_986f != '\0') && (*param_1 != 0)) {
    DAT_2a22_9876 = 0;
    DAT_2a22_987d = DAT_2a22_4898;
    DAT_2a22_986f = '\0';
    FUN_1090_06c6(10);
    *param_1 = *param_1 + -1;
  }
  FUN_1090_064e();
  FUN_1090_06b4();
  return;
}



/* 1090:0b5e FUN_1090_0b5e */

void __cdecl16far FUN_1090_0b5e(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int local_8;
  int local_4;
  
switchD_1000_14c5_default:
  if ((*param_1 < 1) || (DAT_2a22_9852 == '\0')) {
    FUN_1090_064e();
    FUN_1090_06b4();
    return;
  }
  local_4 = 0;
  local_8 = 0;
  do {
    if (((undefined *)&DAT_2a22_9846)[local_8] == '\0') {
      local_4 = local_4 + 1;
    }
    if (((undefined *)&DAT_2a22_984c)[local_8] == '\0') {
      local_4 = local_4 + 1;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 6);
  iVar1 = FUN_19c7_4e32();
  switch(iVar1 % 0xd) {
  case 0:
    if (DAT_2a22_984c == '\0') goto switchD_1000_14c5_default;
    DAT_2a22_9859 = 0;
    DAT_2a22_9866 = DAT_2a22_4898;
    DAT_2a22_984c = '\0';
    break;
  case 1:
    if (DAT_2a22_9846 != '\0') {
      DAT_2a22_9853 = 0;
      DAT_2a22_9860 = DAT_2a22_4898;
      DAT_2a22_9846 = '\0';
      goto LAB_1090_0c12;
    }
    goto switchD_1000_14c5_default;
  case 2:
    if (DAT_2a22_984d == '\0') goto switchD_1000_14c5_default;
    DAT_2a22_985a = 0;
    DAT_2a22_9867 = DAT_2a22_4898;
    DAT_2a22_984d = '\0';
    break;
  case 3:
    if (DAT_2a22_9847 != '\0') {
      DAT_2a22_9854 = 0;
      DAT_2a22_9861 = DAT_2a22_4898;
      DAT_2a22_9847 = '\0';
      goto LAB_1090_0c12;
    }
    goto switchD_1000_14c5_default;
  case 4:
    if (DAT_2a22_984e == '\0') goto switchD_1000_14c5_default;
    DAT_2a22_985b = 0;
    DAT_2a22_9868 = DAT_2a22_4898;
    DAT_2a22_984e = '\0';
    break;
  case 5:
    if (DAT_2a22_9848 != '\0') {
      DAT_2a22_9855 = 0;
      DAT_2a22_9862 = DAT_2a22_4898;
      DAT_2a22_9848 = '\0';
      goto LAB_1090_0c12;
    }
    goto switchD_1000_14c5_default;
  case 6:
    if (DAT_2a22_984f == '\0') goto switchD_1000_14c5_default;
    DAT_2a22_985c = 0;
    DAT_2a22_9869 = DAT_2a22_4898;
    DAT_2a22_984f = '\0';
    break;
  case 7:
    if (DAT_2a22_9849 != '\0') {
      DAT_2a22_9856 = 0;
      DAT_2a22_9863 = DAT_2a22_4898;
      DAT_2a22_9849 = '\0';
      goto LAB_1090_0c12;
    }
    goto switchD_1000_14c5_default;
  case 8:
    if (DAT_2a22_9850 == '\0') goto switchD_1000_14c5_default;
    DAT_2a22_985d = 0;
    DAT_2a22_986a = DAT_2a22_4898;
    DAT_2a22_9850 = '\0';
    break;
  case 9:
    if (DAT_2a22_984a != '\0') {
      DAT_2a22_9857 = 0;
      DAT_2a22_9864 = DAT_2a22_4898;
      DAT_2a22_984a = '\0';
      goto LAB_1090_0c12;
    }
    goto switchD_1000_14c5_default;
  case 10:
    if (DAT_2a22_9851 == '\0') goto switchD_1000_14c5_default;
    DAT_2a22_985e = 0;
    DAT_2a22_986b = DAT_2a22_4898;
    DAT_2a22_9851 = '\0';
    break;
  case 0xb:
    if (DAT_2a22_984b != '\0') {
      DAT_2a22_9858 = 0;
      DAT_2a22_9865 = DAT_2a22_4898;
      DAT_2a22_984b = '\0';
LAB_1090_0c12:
      uVar2 = 0;
      goto LAB_1090_0be7;
    }
    goto switchD_1000_14c5_default;
  case 0xc:
    if ((DAT_2a22_9852 != '\0') && (9 < local_4)) {
      DAT_2a22_985f = 0;
      DAT_2a22_986c = DAT_2a22_4898;
      DAT_2a22_9852 = '\0';
      uVar2 = 0xf;
      goto LAB_1090_0be7;
    }
  default:
    goto switchD_1000_14c5_default;
  }
  uVar2 = 4;
LAB_1090_0be7:
  FUN_1090_06c6(uVar2);
  *param_1 = *param_1 + -1;
  goto switchD_1000_14c5_default;
}



/* 1090:0d8a FUN_1090_0d8a */

void __cdecl16far FUN_1090_0d8a(int *param_1)

{
  int iVar1;
  int aiStack_e [4];
  int local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = 0;
  do {
    aiStack_e[local_6] = 0;
    local_6 = local_6 + 1;
  } while (local_6 < 4);
  local_6 = 0;
  do {
    if (((undefined *)&DAT_2a22_97de)[local_6] != '\0') {
      aiStack_e[local_6 * 2] = aiStack_e[local_6 * 2] + 2;
    }
    if (((undefined *)&DAT_2a22_97e0)[local_6] != '\0') {
      aiStack_e[local_6 * 2] = aiStack_e[local_6 * 2] + 1;
    }
    if (((undefined *)&DAT_2a22_97e2)[local_6 * 2] != '\0') {
      aiStack_e[local_6 * 2] = aiStack_e[local_6 * 2] + 1;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 2);
  local_6 = 0;
  do {
    if (((undefined *)&DAT_2a22_97dc)[local_6] != '\0') {
      aiStack_e[local_6 * 2 + 1] = aiStack_e[local_6 * 2 + 1] + 2;
    }
    if (((undefined *)&DAT_2a22_97e3)[local_6 * 2] != '\0') {
      aiStack_e[local_6 * 2 + 1] = aiStack_e[local_6 * 2 + 1] + 1;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 2);
  local_6 = 0;
  do {
    if (aiStack_e[local_4] < aiStack_e[local_6]) {
      local_4 = local_6;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 4);
  if ((local_4 == 0) || (local_4 == 2)) {
    iVar1 = local_4 / 2;
    if ((((undefined *)&DAT_2a22_97de)[iVar1] != '\0') && (*param_1 != 0)) {
      ((undefined *)&DAT_2a22_97e8)[iVar1] = 0;
      ((undefined *)&DAT_2a22_97f2)[iVar1] = DAT_2a22_4898;
      ((undefined *)&DAT_2a22_97de)[iVar1] = 0;
      FUN_1090_06c6(0);
      *param_1 = *param_1 + -1;
    }
    iVar1 = local_4 / 2;
    if ((((undefined *)&DAT_2a22_97e0)[iVar1] != '\0') && (*param_1 != 0)) {
      ((undefined *)&DAT_2a22_97ea)[iVar1] = 0;
      ((undefined *)&DAT_2a22_97f4)[iVar1] = DAT_2a22_4898;
      ((undefined *)&DAT_2a22_97e0)[iVar1] = 0;
      FUN_1090_06c6(0xb);
      *param_1 = *param_1 + -1;
    }
    if ((((undefined *)&DAT_2a22_97e2)[local_4] != '\0') && (*param_1 != 0)) {
      ((undefined *)&DAT_2a22_97ec)[local_4] = 0;
      ((undefined *)&DAT_2a22_97f6)[local_4] = DAT_2a22_4898;
      ((undefined *)&DAT_2a22_97e2)[local_4] = 0;
      FUN_1090_06c6(1);
      *param_1 = *param_1 + -1;
    }
  }
  if ((local_4 == 1) || (local_4 == 3)) {
    iVar1 = local_4 / 2;
    if ((((undefined *)&DAT_2a22_97dc)[iVar1] != '\0') && (*param_1 != 0)) {
      ((undefined *)&DAT_2a22_97e6)[iVar1] = 0;
      ((undefined *)&DAT_2a22_97f0)[iVar1] = DAT_2a22_4898;
      ((undefined *)&DAT_2a22_97dc)[iVar1] = 0;
      FUN_1090_06c6(7);
      *param_1 = *param_1 + -1;
    }
    if ((((undefined *)&DAT_2a22_97e2)[local_4] != '\0') && (*param_1 != 0)) {
      ((undefined *)&DAT_2a22_97ec)[local_4] = 0;
      ((undefined *)&DAT_2a22_97f6)[local_4] = DAT_2a22_4898;
      ((undefined *)&DAT_2a22_97e2)[local_4] = 0;
      FUN_1090_06c6(1);
      *param_1 = *param_1 + -1;
    }
  }
  FUN_1090_064e();
  FUN_1090_06b4();
  return;
}



/* 1090:0fa6 FUN_1090_0fa6 */

void __cdecl16far FUN_1090_0fa6(int *param_1)

{
  int local_c [5];
  
  local_c[4] = 0;
  if ((((DAT_2a22_9803 == '\0') && (DAT_2a22_9804 == '\0')) && (DAT_2a22_9801 == '\0')) &&
     (DAT_2a22_9805 != '\0')) {
    DAT_2a22_9811 = 0;
    DAT_2a22_981d = DAT_2a22_4898;
    DAT_2a22_9805 = 0;
    FUN_1090_06c6(7);
    return;
  }
  local_c[3] = 0;
  do {
    local_c[local_c[3]] = 0;
    local_c[3] = local_c[3] + 1;
  } while (local_c[3] < 3);
  local_c[3] = 0;
  do {
    if (DAT_2a22_9803 != '\0') {
      local_c[0] = local_c[0] + 1;
    }
    if (DAT_2a22_9804 != '\0') {
      local_c[2] = local_c[2] + 1;
    }
    local_c[3] = local_c[3] + 1;
  } while (local_c[3] < 2);
  local_c[3] = 0;
  do {
    if (((undefined *)&DAT_2a22_97fa)[local_c[3]] != '\0') {
      local_c[local_c[3]] = local_c[local_c[3]] + 1;
    }
    if (((undefined *)&DAT_2a22_97fd)[local_c[3]] != '\0') {
      local_c[local_c[3]] = local_c[local_c[3]] + 1;
    }
    if (((undefined *)&DAT_2a22_9800)[local_c[3]] != '\0') {
      local_c[local_c[3]] = local_c[local_c[3]] + 1;
    }
    local_c[3] = local_c[3] + 1;
  } while (local_c[3] < 3);
  local_c[3] = 0;
  do {
    if (local_c[local_c[4]] < local_c[local_c[3]]) {
      local_c[4] = local_c[3];
    }
    local_c[3] = local_c[3] + 1;
  } while (local_c[3] < 3);
  if ((((undefined *)&DAT_2a22_97fa)[local_c[4]] != '\0') && (*param_1 != 0)) {
    ((undefined *)&DAT_2a22_9806)[local_c[4]] = 0;
    ((undefined *)&DAT_2a22_9812)[local_c[4]] = DAT_2a22_4898;
    ((undefined *)&DAT_2a22_97fa)[local_c[4]] = 0;
    FUN_1090_06c6(9);
    *param_1 = *param_1 + -1;
  }
  if ((((undefined *)&DAT_2a22_97fd)[local_c[4]] != '\0') && (*param_1 != 0)) {
    ((undefined *)&DAT_2a22_9809)[local_c[4]] = 0;
    ((undefined *)&DAT_2a22_9815)[local_c[4]] = DAT_2a22_4898;
    ((undefined *)&DAT_2a22_97fd)[local_c[4]] = 0;
    FUN_1090_06c6(4);
    *param_1 = *param_1 + -1;
  }
  if ((((undefined *)&DAT_2a22_9800)[local_c[4]] != '\0') && (*param_1 != 0)) {
    ((undefined *)&DAT_2a22_980c)[local_c[4]] = 0;
    ((undefined *)&DAT_2a22_9818)[local_c[4]] = DAT_2a22_4898;
    ((undefined *)&DAT_2a22_9800)[local_c[4]] = 0;
    FUN_1090_06c6(0xb);
    *param_1 = *param_1 + -1;
  }
  if (((local_c[4] == 0) && (DAT_2a22_9803 != '\0')) && (*param_1 != 0)) {
    DAT_2a22_980f = 0;
    DAT_2a22_981b = DAT_2a22_4898;
    DAT_2a22_9803 = '\0';
    FUN_1090_06c6(10);
    *param_1 = *param_1 + -1;
  }
  if (((local_c[4] == 2) && (DAT_2a22_9804 != '\0')) && (*param_1 != 0)) {
    DAT_2a22_9810 = 0;
    DAT_2a22_981c = DAT_2a22_4898;
    DAT_2a22_9804 = '\0';
    FUN_1090_06c6(10);
    *param_1 = *param_1 + -1;
  }
  FUN_1090_064e();
  FUN_1090_06b4();
  return;
}



/* 1090:11ba FUN_1090_11ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1090_11ba(int param_1)

{
  int iVar1;
  uint uVar2;
  
  _DAT_2a22_4898 = 1;
  uVar2 = FUN_19c7_4e32();
  _DAT_2a22_fadc = (int)*(char *)((uVar2 & 0xf) + 0x44a);
  if (_DAT_2a22_fadc == 0) {
    FUN_1090_0d8a(&param_1);
  }
  else if (_DAT_2a22_fadc == 1) {
    FUN_1090_0fa6(&param_1);
  }
  else if (_DAT_2a22_fadc == 2) {
    FUN_1090_087a(&param_1);
  }
  else if (_DAT_2a22_fadc == 3) {
    FUN_1090_0b5e(&param_1);
  }
  else if (_DAT_2a22_fadc == 4) {
    FUN_1090_0a08(&param_1);
  }
  iVar1 = param_1;
  if ((param_1 != 0) && (FUN_1090_077c(&param_1), param_1 != iVar1)) {
    _DAT_2a22_fadc = 5;
  }
  return param_1;
}



/* 1090:1252 FUN_1090_1252 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1090_1252(int param_1)

{
  byte bVar1;
  
  _DAT_2a22_4898 = 0;
  FUN_1090_077c(&param_1);
  if (param_1 != 0) {
    bVar1 = FUN_19c7_4e32();
    bVar1 = bVar1 & 0xf;
    if (bVar1 < 3) {
      FUN_1090_0d8a(&param_1);
    }
    else if (bVar1 < 7) {
      FUN_1090_0fa6(&param_1);
    }
    if ((6 < bVar1) && (bVar1 < 0xb)) {
      FUN_1090_087a(&param_1);
    }
    if (bVar1 == 0xb) {
      FUN_1090_0b5e(&param_1);
    }
    if ((0xb < bVar1) && (bVar1 < 0x10)) {
      FUN_1090_0a08(&param_1);
    }
  }
  _DAT_2a22_4898 = 1;
  return param_1;
}



/* 1090:12ec FUN_1090_12ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1090_12ec(undefined2 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    DAT_2a22_a2f6 = 0;
    _DAT_2a22_a2b4 = _DAT_2a22_a2b4 + param_2;
    break;
  case 1:
    DAT_2a22_a2f7 = 1;
    _DAT_2a22_a2b6 = _DAT_2a22_a2b6 + param_2;
    break;
  case 2:
    DAT_2a22_a302 = 0xb;
    _DAT_2a22_a2cc = _DAT_2a22_a2cc + param_2;
    break;
  case 3:
    DAT_2a22_a30d = 0xc;
    _DAT_2a22_a2e2 = _DAT_2a22_a2e2 + param_2;
    break;
  case 4:
    DAT_2a22_a2f8 = 2;
    _DAT_2a22_a2b8 = _DAT_2a22_a2b8 + param_2;
    break;
  case 5:
    DAT_2a22_a2f9 = 3;
    _DAT_2a22_a2ba = _DAT_2a22_a2ba + param_2;
    break;
  case 6:
    DAT_2a22_a304 = 0xd;
    _DAT_2a22_a2d0 = _DAT_2a22_a2d0 + param_2;
    break;
  case 7:
    DAT_2a22_a2fa = 4;
    _DAT_2a22_a2bc = _DAT_2a22_a2bc + param_2;
    break;
  case 8:
    DAT_2a22_a305 = 0xe;
    _DAT_2a22_a2d2 = _DAT_2a22_a2d2 + param_2;
    break;
  case 9:
    DAT_2a22_a2fb = 5;
    _DAT_2a22_a2be = _DAT_2a22_a2be + param_2;
    break;
  case 10:
    DAT_2a22_a2fc = 6;
    _DAT_2a22_a2c0 = _DAT_2a22_a2c0 + param_2;
    break;
  case 0xb:
    DAT_2a22_a2fd = 7;
    _DAT_2a22_a2c2 = _DAT_2a22_a2c2 + param_2;
    break;
  case 0xc:
    DAT_2a22_a2fe = 8;
    _DAT_2a22_a2c4 = _DAT_2a22_a2c4 + param_2;
    return;
  case 0xd:
    DAT_2a22_a309 = 0xf;
    _DAT_2a22_a2da = _DAT_2a22_a2da + param_2;
    return;
  case 0xe:
    DAT_2a22_a314 = 0x10;
    _DAT_2a22_a2f0 = _DAT_2a22_a2f0 + param_2;
    return;
  case 0xf:
    DAT_2a22_a2ff = 9;
    _DAT_2a22_a2c6 = _DAT_2a22_a2c6 + param_2;
    return;
  case 0x10:
    DAT_2a22_a30a = 0x11;
    _DAT_2a22_a2dc = _DAT_2a22_a2dc + param_2;
    return;
  }
  return;
}



/* 1090:1428 FUN_1090_1428 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090_1428(void)

{
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1090,_DAT_2a22_bd4c);
}



/* 1090:147c FUN_1090_147c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1090_147c(void)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((DAT_2a22_46ef == '\0') || (iVar1 = thunk_EXT_FUN_0000_0000(0x1090,0,0), iVar1 == 0)) {
    if (((DAT_2a22_46ee == '\0') || (_DAT_2a22_d31c == 0)) && (iVar1 = FUN_1951_00ea(), iVar1 == 0))
    {
      return 0;
    }
  }
  else {
    do {
      iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,0,uVar2);
    } while (iVar1 != 0);
  }
  return 1;
}



/* 1090:14d2 FUN_1090_14d2 */

undefined2 __cdecl16far FUN_1090_14d2(char param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1090;
  iVar2 = 0;
  if (DAT_2a22_46ef != '\0') {
    while (iVar1 = thunk_EXT_FUN_0000_0000(uVar3,(int)param_1), iVar1 != 0) {
      uVar3 = 0x1eea;
      iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,(int)param_1);
      if (iVar1 < 0x28) {
        iVar2 = iVar2 + 1;
      }
    }
    if (0x1d < iVar2) {
      return 1;
    }
  }
  return 0;
}



/* 11e1:000e FUN_11e1_000e */

void __cdecl16far FUN_11e1_000e(undefined2 param_1)

{
  int iVar1;
  
  FUN_11e1_002a(param_1);
  do {
    iVar1 = FUN_11e1_019c();
  } while (iVar1 == 0);
  FUN_11e1_0108();
  return;
}



/* 11e1:002a FUN_11e1_002a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_002a(undefined2 *param_1)

{
  int iVar1;
  
  _DAT_2a22_d916 = param_1;
  _DAT_2a22_fd3a = param_1[8];
  *(undefined2 *)(_DAT_2a22_48d4 + 2) = param_1[6];
  *(undefined2 *)(_DAT_2a22_48d4 + 4) = _DAT_2a22_d916[7];
  _DAT_2a22_491a = _DAT_2a22_d916[3];
  _DAT_2a22_491c = _DAT_2a22_d916[4];
  iVar1 = dispatch_ovl_01_22dc_0000(*_DAT_2a22_d916);
  if (iVar1 == 0) {
    FUN_11e1_04da();
  }
  if (_DAT_2a22_d916[5] == -1) {
    _DAT_2a22_d910 = 0xffff;
  }
  else {
    _DAT_2a22_d910 =
         (undefined2)
         (((ulong)(uint)_DAT_2a22_d916[5] * (ulong)(_DAT_2a22_fd3a + 0x13) & 0xffff) /
         (ulong)_DAT_2a22_fd3a);
  }
  thunk_EXT_FUN_0000_0000(0x2120,0);
  _DAT_2a22_fd40 = 1;
  FUN_11e1_00f6(_DAT_2a22_d916[3],_DAT_2a22_d916[4]);
  FUN_11e1_04a6();
  FUN_11e1_01de();
  return;
}



/* 11e1:00f6 FUN_11e1_00f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_00f6(undefined2 param_1,undefined2 param_2)

{
  _DAT_2a22_491a = param_1;
  _DAT_2a22_491c = param_2;
  return;
}



/* 11e1:0108 FUN_11e1_0108 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0108(void)

{
  int iVar1;
  int local_4;
  
  _DAT_2a22_491c = 0;
  _DAT_2a22_491a = 0;
  iVar1 = thunk_EXT_FUN_0000_0000(0x11e1,0);
  if ((iVar1 != 0) && (*_DAT_2a22_48d4 == 0)) {
    thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_4910,0,0,0x140,200,_DAT_2a22_490e,0,0);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,*_DAT_2a22_48d4);
  }
  FUN_19c7_4f54(0x1eea,_DAT_2a22_fd38);
  local_4 = 0;
  while( true ) {
    if (0xf9 < local_4) {
      return;
    }
    iVar1 = *(int *)(local_4 * 2 + -0x490c);
    if (iVar1 != 0) break;
    local_4 = local_4 + 1;
  }
  FUN_19c7_4f54(0x19c7,iVar1);
  return;
}



/* 11e1:019c FUN_11e1_019c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_11e1_019c(void)

{
  int iVar1;
  undefined2 local_4;
  
  iVar1 = (*(code *)*(undefined2 *)(_DAT_2a22_d916 + 2))(0x11e1);
  if (iVar1 != 0) {
    return 0xffff;
  }
  FUN_11e1_044c();
  local_4 = FUN_11e1_0396(1);
  FUN_11e1_044c();
  _DAT_2a22_d910 = _DAT_2a22_d910 + -1;
  if (_DAT_2a22_d910 == 0) {
    local_4 = 1;
  }
  return local_4;
}



/* 11e1:01de FUN_11e1_01de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_01de(void)

{
  FUN_11e1_0618();
  FUN_11e1_0a32();
  FUN_1eea_10b1();
  _DAT_2a22_d912 = 2;
  _DAT_2a22_fd3e = 0;
  _DAT_2a22_d914 = 0;
  _DAT_2a22_fd3c = 0;
  *_DAT_2a22_48d4 = 1;
  return;
}



/* 11e1:0208 FUN_11e1_0208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_11e1_0208(void)

{
  int iVar1;
  
  FUN_11e1_044c();
  FUN_11e1_0ca2();
  iVar1 = FUN_11e1_064e();
  if (iVar1 == 0) {
    FUN_11e1_0b44();
    FUN_11e1_0b66();
    _DAT_2a22_fd3c = _DAT_2a22_fd3c + 1;
    thunk_EXT_FUN_0000_0000
              (0x11e1,_DAT_2a22_4912,0,0,0x140,200,*(undefined2 *)(*_DAT_2a22_48d4 * 2 + 0x34a),0,0)
    ;
    FUN_11e1_0be4();
    return 0;
  }
  return 1;
}



/* 11e1:02ec FUN_11e1_02ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_11e1_02ec(void)

{
  int iVar1;
  
  FUN_11e1_05b0();
  iVar1 = thunk_EXT_FUN_0000_0000(0x11e1,0);
  if (iVar1 == 0) {
    FUN_11e1_05e6(1);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,*_DAT_2a22_48d4);
}



/* 11e1:0342 FUN_11e1_0342 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0342(void)

{
  int iVar1;
  
  FUN_11e1_05b0();
  iVar1 = thunk_EXT_FUN_0000_0000(0x11e1,0);
  if (iVar1 == 0) {
    FUN_11e1_05e6(1);
  }
  thunk_EXT_FUN_0000_0000(0x1eea,*(undefined2 *)_DAT_2a22_48d4);
  iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,0);
  if (iVar1 != 0) {
    FUN_11e1_05e6(1);
    *_DAT_2a22_48d4 = *_DAT_2a22_48d4 ^ 1;
  }
  FUN_11e1_044c();
  return;
}



/* 11e1:0396 FUN_11e1_0396 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_11e1_0396(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    FUN_11e1_0ca2();
    iVar1 = FUN_11e1_064e();
    if (iVar1 != 0) {
      return 1;
    }
    FUN_11e1_0b44();
    FUN_11e1_0b66();
    _DAT_2a22_fd3c = _DAT_2a22_fd3c + 1;
    param_1 = param_1 + -1;
  }
  FUN_11e1_050c();
  FUN_11e1_0be4();
  FUN_11e1_05b0();
  iVar1 = thunk_EXT_FUN_0000_0000(0x11e1,0);
  if (iVar1 == 0) {
    FUN_11e1_05e6(1);
  }
  if (_DAT_2a22_fd40 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,*(undefined2 *)_DAT_2a22_48d4);
  }
  thunk_EXT_FUN_0000_0000
            (0x1eea,_DAT_2a22_48d4,0,0,*(int *)(_DAT_2a22_48d4 + 6) + 1,
             *(int *)(_DAT_2a22_48d4 + 8) + 1,_DAT_2a22_490e,*(undefined2 *)(_DAT_2a22_48d4 + 2),
             *(undefined2 *)(_DAT_2a22_48d4 + 4));
  iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,0);
  if (iVar1 != 0) {
    FUN_11e1_05e6(1);
    *_DAT_2a22_48d4 = *_DAT_2a22_48d4 ^ 1;
  }
  return 0;
}



/* 11e1:044c FUN_11e1_044c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_044c(void)

{
  int iVar1;
  bool bVar2;
  uint local_6;
  int local_4;
  
  if (_DAT_2a22_491e == 0) {
    while( true ) {
      iVar1 = FUN_19c7_4e94(0,&local_6);
      if (iVar1 != 0) break;
      if ((_DAT_2a22_d922 <= local_4) && ((_DAT_2a22_d922 < local_4 || (_DAT_2a22_d920 <= local_6)))
         ) break;
    }
  }
  else {
    FUN_19c7_4e94(0,(undefined *)&DAT_2a22_d920);
    bVar2 = CARRY2(_DAT_2a22_d920,_DAT_2a22_fd3a);
    _DAT_2a22_d920 = _DAT_2a22_d920 + _DAT_2a22_fd3a;
    _DAT_2a22_d922 = _DAT_2a22_d922 + ((int)_DAT_2a22_fd3a >> 0xf) + (uint)bVar2;
  }
  _DAT_2a22_491e = _DAT_2a22_491e ^ 1;
  return;
}



/* 11e1:04a6 FUN_11e1_04a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_04a6(void)

{
  undefined2 uVar1;
  int local_4;
  
  if (_DAT_2a22_fd42 != 0) {
    uVar1 = 0x11e1;
    for (local_4 = 0; local_4 < _DAT_2a22_fd44; local_4 = local_4 + 1) {
      thunk_EXT_FUN_0000_0000(uVar1,*(undefined2 *)(local_4 * 2 + 0x4c4));
      uVar1 = 0x1eea;
    }
  }
  return;
}



/* 11e1:04da FUN_11e1_04da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_04da(void)

{
  FUN_11e1_0f84(3);
  FUN_19c7_323c(0x513,_DAT_2a22_fd48,*(undefined2 *)(_DAT_2a22_fd46 * 2 + 0x51c));
  FUN_19c7_29de(0x19c7,99);
  return;
}



/* 11e1:050c FUN_11e1_050c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_050c(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  
  uVar1 = 0x11e1;
  if (_DAT_2a22_d912 == 0) {
LAB_11e1_0559:
    FUN_1eea_1052(*_DAT_2a22_48d6,*_DAT_2a22_48d4);
    return;
  }
  if (_DAT_2a22_d912 == 1) {
    _DAT_2a22_d912 = 0;
    iVar4 = thunk_EXT_FUN_0000_0000(0x11e1,0);
    if (iVar4 == 0) goto LAB_11e1_0559;
    uVar1 = 0x1eea;
    thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_4910,0,0,0x140,200,_DAT_2a22_490e,0,0);
    iVar4 = _DAT_2a22_48d4[4] + 1;
    iVar3 = _DAT_2a22_48d4[3] + 1;
    puVar2 = _DAT_2a22_48d6;
    puVar5 = _DAT_2a22_48d4;
  }
  else {
    if (_DAT_2a22_d912 != 2) {
      return;
    }
    _DAT_2a22_d912 = 1;
    iVar4 = 200;
    iVar3 = 0x140;
    puVar2 = _DAT_2a22_4912;
    puVar5 = _DAT_2a22_4910;
  }
  thunk_EXT_FUN_0000_0000(uVar1,puVar2,0,0,iVar3,iVar4,puVar5,0,0);
  return;
}



/* 11e1:05b0 FUN_11e1_05b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_05b0(void)

{
  if (_DAT_2a22_d91e != 0) {
    while (_DAT_2a22_d91e != 0) {
      _DAT_2a22_d91e = _DAT_2a22_d91e + -1;
      if (_DAT_2a22_491a != (code *)0x0 || _DAT_2a22_491c != 0) {
        (*_DAT_2a22_491a)(0x11e1,*(undefined2 *)(_DAT_2a22_d91e * 2 + 200));
      }
    }
  }
  return;
}



/* 11e1:05e6 FUN_11e1_05e6 */

void __cdecl16far FUN_11e1_05e6(int param_1)

{
  int iVar1;
  uint uVar2;
  
  while (iVar1 = param_1 + -1, param_1 != 0) {
    do {
      uVar2 = FUN_19c7_4bfc(0x3da);
    } while ((uVar2 & 8) != 0);
    do {
      uVar2 = FUN_19c7_4bfc(0x3da);
      param_1 = iVar1;
    } while ((uVar2 & 8) == 0);
  }
  return;
}



/* 11e1:0618 FUN_11e1_0618 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0618(void)

{
  int local_4;
  
  _DAT_2a22_d91a = _DAT_2a22_fd38;
  _DAT_2a22_d918 = 0;
  _DAT_2a22_d91e = 0;
  _DAT_2a22_d91c = 0;
  local_4 = 0;
  do {
    *(undefined2 *)((undefined *)&DAT_2a22_fade + local_4 * 2) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 0x14);
  return;
}



/* 11e1:064e FUN_11e1_064e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_11e1_064e(void)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined2 uVar7;
  
switchD_1000_2487_default:
  while( true ) {
    if (_DAT_2a22_fd3e != 0) {
      return 1;
    }
    if (_DAT_2a22_d914 == 0) break;
    if (_DAT_2a22_d914 == 1) {
      if (_DAT_2a22_d924 != 0) {
        _DAT_2a22_d924 = _DAT_2a22_d924 + -1;
        return 0;
      }
      _DAT_2a22_d914 = 0;
      _DAT_2a22_d924 = -1;
    }
  }
  uVar7 = (undefined2)((ulong)_DAT_2a22_d918 >> 0x10);
  switch(*_DAT_2a22_d918) {
  case 0:
    uVar7 = _DAT_2a22_d80a;
    if (*(int *)(_DAT_2a22_d91c * 2 + -0xc) == -1) {
      uVar2 = FUN_11e1_09f8();
      uVar7 = _DAT_2a22_d80a;
      *(undefined2 *)(_DAT_2a22_d91c * 2 + -0xc) = uVar2;
    }
    iVar3 = _DAT_2a22_d91c * 2;
    if ((0 < *(int *)(iVar3 + -0xc)) && (*(int *)(iVar3 + -0xc) < 0x33)) {
      FUN_11e1_0a5e(*(undefined2 *)(iVar3 + -0xc),*(undefined2 *)(iVar3 + -0xe),
                    *(undefined2 *)(iVar3 + -10),*(undefined2 *)(iVar3 + -8),
                    *(undefined2 *)(iVar3 + -6),*(undefined2 *)(iVar3 + -4),
                    *(undefined2 *)(iVar3 + -2));
    }
    _DAT_2a22_d91c = _DAT_2a22_d91c + -7;
    break;
  case 1:
    iVar3 = *(int *)(_DAT_2a22_d91c * 2 + -2);
    if ((0 < iVar3) && (iVar3 < 0x33)) {
      *(undefined2 *)(iVar3 * 0x2a + 0xda) = 0;
    }
    goto LAB_11e1_0710;
  case 2:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    _DAT_2a22_d924 = *(int *)(_DAT_2a22_d91c * 2);
    _DAT_2a22_d914 = 1;
    break;
  case 3:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    iVar3 = _DAT_2a22_d91e * 2;
    _DAT_2a22_d91e = _DAT_2a22_d91e + 1;
    *(undefined2 *)(iVar3 + 200) = *(undefined2 *)(_DAT_2a22_d91c * 2);
    break;
  case 4:
    iVar3 = *(int *)(_DAT_2a22_d91c * 2 + -2);
    if ((0 < iVar3) && (iVar3 < 0x33)) {
      *(undefined2 *)(iVar3 * 0x2a + 0xdc) = 1;
    }
LAB_11e1_0710:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    break;
  case 5:
    _DAT_2a22_d924 = *(int *)(_DAT_2a22_d918 + 2);
    if (_DAT_2a22_d918[1] != '\0') {
      _DAT_2a22_d924 = *(int *)((undefined *)&DAT_2a22_fade + _DAT_2a22_d924 * 2);
    }
    piVar6 = (int *)(_DAT_2a22_d91c * 2);
    _DAT_2a22_d91c = _DAT_2a22_d91c + 1;
    *piVar6 = _DAT_2a22_d924;
    _DAT_2a22_d918 = (undefined1 *)CONCAT22(_DAT_2a22_d91a,_DAT_2a22_d918 + 4);
    goto switchD_1000_2487_default;
  case 6:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    _DAT_2a22_d924 = *(int *)(_DAT_2a22_d918 + 1);
    if ((-1 < _DAT_2a22_d924) && (_DAT_2a22_d924 < 0x33)) {
      *(undefined2 *)((undefined *)&DAT_2a22_fade + _DAT_2a22_d924 * 2) =
           *(undefined2 *)(_DAT_2a22_d91c * 2);
    }
    goto LAB_11e1_0950;
  case 7:
    _DAT_2a22_d91c = _DAT_2a22_d91c + 1;
    piVar6 = (int *)(_DAT_2a22_d91c * 2);
    iVar3 = piVar6[-2];
    goto LAB_11e1_092d;
  case 8:
    piVar6 = (int *)((_DAT_2a22_d91c + -1) * 2);
    if (piVar6[-1] == *piVar6) goto LAB_11e1_08bf;
LAB_11e1_082d:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    iVar3 = 0;
    goto LAB_11e1_092d;
  case 9:
    piVar6 = (int *)((_DAT_2a22_d91c + -1) * 2);
    if (piVar6[-1] == *piVar6) goto LAB_11e1_082d;
    goto LAB_11e1_08bf;
  case 10:
    piVar6 = (int *)((_DAT_2a22_d91c + -1) * 2);
    if (piVar6[-1] <= *piVar6) goto LAB_11e1_082d;
    goto LAB_11e1_08bf;
  case 0xb:
    piVar6 = (int *)((_DAT_2a22_d91c + -1) * 2);
    if (*piVar6 <= piVar6[-1]) goto LAB_11e1_082d;
    goto LAB_11e1_08bf;
  case 0xc:
    piVar6 = (int *)((_DAT_2a22_d91c + -1) * 2);
    if (piVar6[-1] < *piVar6) goto LAB_11e1_082d;
    goto LAB_11e1_08bf;
  case 0xd:
    piVar6 = (int *)((_DAT_2a22_d91c + -1) * 2);
    if (*piVar6 < piVar6[-1]) goto LAB_11e1_082d;
LAB_11e1_08bf:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    iVar3 = 1;
LAB_11e1_092d:
    piVar6[-1] = iVar3;
    break;
  case 0xe:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    piVar1 = (int *)(_DAT_2a22_d91c * 2) + -1;
    *piVar1 = *piVar1 + *(int *)(_DAT_2a22_d91c * 2);
    break;
  case 0xf:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    piVar1 = (int *)(_DAT_2a22_d91c * 2) + -1;
    *piVar1 = *piVar1 - *(int *)(_DAT_2a22_d91c * 2);
    break;
  case 0x10:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    piVar6 = (int *)(_DAT_2a22_d91c * 2);
    iVar3 = *piVar6 * piVar6[-1];
    goto LAB_11e1_092d;
  case 0x11:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    piVar6 = (int *)(_DAT_2a22_d91c * 2);
    iVar3 = piVar6[-1] / *piVar6;
    goto LAB_11e1_092d;
  case 0x12:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    if (*(int *)(_DAT_2a22_d91c * 2) != 0) goto switchD_1000_2487_caseD_13;
LAB_11e1_0950:
    _DAT_2a22_d918 = (undefined1 *)CONCAT22(_DAT_2a22_d91a,_DAT_2a22_d918 + 3);
    goto switchD_1000_2487_default;
  case 0x13:
    goto switchD_1000_2487_caseD_13;
  case 0x14:
    goto switchD_1000_2487_caseD_14;
  case 0x15:
    _DAT_2a22_fd3e = 1;
    goto switchD_1000_2487_default;
  case 0x16:
    _DAT_2a22_d91c = _DAT_2a22_d91c + -1;
    puVar4 = (undefined1 *)*(undefined2 *)(_DAT_2a22_d91c * 2);
    goto LAB_11e1_0987;
  case 0x17:
    puVar5 = (undefined2 *)(_DAT_2a22_d91c * 2);
    _DAT_2a22_d91c = _DAT_2a22_d91c + 1;
    *puVar5 = _DAT_2a22_d918 + 3;
    goto switchD_1000_2487_caseD_13;
  default:
    goto switchD_1000_2487_default;
  }
  _DAT_2a22_d918 = (undefined1 *)CONCAT22(_DAT_2a22_d91a,_DAT_2a22_d918 + 1);
  goto switchD_1000_2487_default;
switchD_1000_2487_caseD_13:
  puVar4 = *(undefined1 **)((undefined1 *)_DAT_2a22_d918 + 1);
LAB_11e1_0987:
  _DAT_2a22_d918 = (undefined1 *)CONCAT22(_DAT_2a22_d91a,puVar4);
  goto switchD_1000_2487_default;
switchD_1000_2487_caseD_14:
  return 0;
}



/* 11e1:09f8 FUN_11e1_09f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_11e1_09f8(void)

{
  int local_4;
  
  local_4 = 1;
  while( true ) {
    if (0x32 < local_4) {
      return local_4 + -1;
    }
    if (*(int *)(local_4 * 0x2a + 0xda) == 0) break;
    local_4 = local_4 + 1;
  }
  return local_4;
}



/* 11e1:0a32 FUN_11e1_0a32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0a32(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)(local_4 * 0x2a + 0x104) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 0x32);
  return;
}



/* 11e1:0a5e FUN_11e1_0a5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_11e1_0a5e(int param_1,undefined2 param_2,int param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7)

{
  undefined2 uVar1;
  undefined4 local_6;
  
  param_1 = param_1 * 0x2a;
  local_6 = (undefined2 *)CONCAT22(0x2a22,(undefined2 *)(param_1 + 0xda));
  *local_6 = 1;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  *(int *)(param_1 + 0xde) = param_3 + -1;
  *(undefined2 *)(param_1 + 0xe0) = param_4;
  *(undefined2 *)(param_1 + 0xe2) = param_5;
  *(int *)(param_1 + 0xde) = param_3 + -1;
  if (param_3 == -1) {
    *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(param_1 + 0xe0);
    *(undefined2 *)(param_1 + 0xe6) = *(undefined2 *)(param_1 + 0xe2);
  }
  else {
    *(undefined2 *)(param_1 + 0xe4) = 0;
    *(undefined2 *)(param_1 + 0xe6) = 0;
  }
  *(undefined2 *)(param_1 + 0xe8) = param_6;
  *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)(param_1 + 0xe8);
  *(undefined2 *)(param_1 + 0xec) = 0xff;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0xfa) = param_2;
  *(undefined2 *)(param_1 + 0xfc) = param_7;
  uVar1 = _DAT_2a22_fd38;
  *(undefined2 *)(param_1 + 0xfe) = *(undefined2 *)(param_1 + 0xfa);
  *(undefined2 *)(param_1 + 0x100) = uVar1;
  return;
}



/* 11e1:0b44 FUN_11e1_0b44 */

void __cdecl16far FUN_11e1_0b44(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    FUN_11e1_0d94(local_4);
    local_4 = local_4 + 1;
  } while (local_4 < 0x32);
  return;
}



/* 11e1:0b66 FUN_11e1_0b66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0b66(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  undefined2 uStack_4;
  
  local_c = 0;
  uVar2 = 0x11e1;
  do {
    iVar1 = local_c * 0x2a;
    uVar3 = uVar2;
    if ((*(int *)(iVar1 + 0x104) != 0) && (*(int *)(iVar1 + 0x106) != 0)) {
      local_6 = iVar1 + 0x104;
      uStack_4 = 0x2a22;
      if (*(char *)(iVar1 + 300) != -1) {
        FUN_11e1_0ce2(local_c,&local_8,&local_a);
        uVar3 = 0x1eea;
        FUN_1eea_0fbe(uVar2,_DAT_2a22_48d6,local_8,local_a,
                      *(undefined2 *)((uint)*(byte *)(local_6 + 0x28) * 2 + -0x490c));
      }
    }
    local_c = local_c + 1;
    uVar2 = uVar3;
  } while (local_c < 0x32);
  return;
}



/* 11e1:0be4 FUN_11e1_0be4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0be4(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    if (*(int *)(local_4 * 0x2a + 0x104) != 0) {
      FUN_11e1_0c1a(local_4);
    }
    local_4 = local_4 + 1;
  } while (local_4 < 0x32);
  return;
}



/* 11e1:0c1a FUN_11e1_0c1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0c1a(int param_1)

{
  int iVar1;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  undefined2 uStack_4;
  
  iVar1 = param_1 * 0x2a;
  local_6 = iVar1 + 0x104;
  uStack_4 = 0x2a22;
  if ((*(char *)(iVar1 + 300) != -1) && (*(int *)(iVar1 + 0x106) == 0)) {
    FUN_11e1_0ce2(param_1,&local_8,&local_a);
    if (*(int *)(local_6 + 0x22) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x11e1,_DAT_2a22_48d4,local_8,local_a,
                          *(undefined2 *)((uint)*(byte *)(local_6 + 0x28) * 2 + -0x490c));
    }
    FUN_1eea_0fa0(0x11e1,_DAT_2a22_48d4,local_8,local_a,
                  *(undefined2 *)((uint)*(byte *)(local_6 + 0x28) * 2 + -0x490c));
  }
  return;
}



/* 11e1:0ca2 FUN_11e1_0ca2 */

void __cdecl16far FUN_11e1_0ca2(void)

{
  int iVar1;
  int local_8;
  undefined4 local_6;
  
  local_8 = 0;
  do {
    iVar1 = local_8 * 0x2a;
    local_6 = (int *)CONCAT22(0x2a22,(int *)(iVar1 + 0x104));
    if ((*local_6 != 0) && (*(int *)(iVar1 + 0x106) != 0)) {
      *(undefined2 *)(iVar1 + 0x106) = 0;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x32);
  return;
}



/* 11e1:0ce2 FUN_11e1_0ce2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0ce2(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  param_1 = param_1 * 0x2a;
  if (*(int *)(param_1 + 0x108) == -2) {
    *param_2 = *(int *)(param_1 + 0x10e);
    iVar1 = *(int *)(param_1 + 0x110);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x108) + 1;
    if ((iVar1 < 1) && (iVar1 < 0x33)) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x108) * 0x2a + 0x104) == 0) {
      return;
    }
    *param_2 = *(int *)(*(int *)(param_1 + 0x108) * 0x2a + 0x10e) + *(int *)(param_1 + 0x10a) +
               *(int *)(param_1 + 0x10e);
    iVar1 = *(int *)(*(int *)(param_1 + 0x108) * 0x2a + 0x110) + *(int *)(param_1 + 0x10c) +
            *(int *)(param_1 + 0x110);
  }
  *param_3 = iVar1;
  return;
}



/* 11e1:0d94 FUN_11e1_0d94 */

int * __cdecl16far FUN_11e1_0d94(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined2 uVar7;
  int *piVar8;
  undefined4 local_6;
  
  param_1 = param_1 * 0x2a;
  piVar6 = (int *)(param_1 + 0x104);
  local_6 = (int *)CONCAT22(0x2a22,piVar6);
  piVar8 = piVar6;
  if (*local_6 != 0) {
    piVar8 = (int *)*(undefined2 *)(param_1 + 0x114);
    *(int *)(param_1 + 0x116) = *(int *)(param_1 + 0x116) + (int)piVar8;
    if (0xff < *(int *)(param_1 + 0x116)) {
      *(int *)(param_1 + 0x116) = *(int *)(param_1 + 0x116) + -0xff;
      uVar2 = *(undefined2 *)(param_1 + 0x12a);
switchD_1000_2c08_default:
      piVar5 = (int *)*(undefined4 *)(param_1 + 0x128);
      piVar8 = (int *)piVar5;
      switch((char)*piVar5) {
      case '\0':
        goto switchD_1000_2c08_caseD_0;
      case '\x01':
        *(undefined2 *)(param_1 + 0x10e) =
             *(undefined2 *)((int)*(undefined4 *)(param_1 + 0x128) + 1);
        *(undefined2 *)(param_1 + 0x110) =
             *(undefined2 *)((int)*(undefined4 *)(param_1 + 0x128) + 3);
        goto LAB_11e1_0e68;
      case '\x02':
        *(int *)(param_1 + 0x10e) =
             *(int *)(param_1 + 0x10e) + *(int *)((int)*(undefined4 *)(param_1 + 0x128) + 1);
        *(int *)(param_1 + 0x110) =
             *(int *)(param_1 + 0x110) + *(int *)((int)*(undefined4 *)(param_1 + 0x128) + 3);
LAB_11e1_0e68:
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 5;
        goto switchD_1000_2c08_default;
      case '\x03':
        *(undefined2 *)(param_1 + 0x114) =
             *(undefined2 *)((int)*(undefined4 *)(param_1 + 0x128) + 1);
        break;
      case '\x04':
        *(int *)(param_1 + 0x114) =
             *(int *)(param_1 + 0x114) + *(int *)((int)*(undefined4 *)(param_1 + 0x128) + 1);
        break;
      case '\x05':
        iVar3 = *(int *)((int)*(undefined4 *)(param_1 + 0x128) + 1);
        iVar4 = *(int *)(param_1 + 0x122);
        *(int *)(param_1 + 0x122) = *(int *)(param_1 + 0x122) + 1;
        piVar6[iVar4 + 10] = iVar3;
        break;
      case '\x06':
        piVar5 = piVar6 + *(int *)(param_1 + 0x122) + 9;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          *(int *)(param_1 + 0x122) = *(int *)(param_1 + 0x122) + -1;
          break;
        }
        uVar7 = *(undefined2 *)((int)*(undefined4 *)(param_1 + 0x128) + 1);
        goto LAB_11e1_0f42;
      case '\a':
        if (*(int *)(param_1 + 0x108) == -2) {
          *(undefined2 *)(param_1 + 0x10e) = *(undefined2 *)(param_1 + 0x10a);
          *(undefined2 *)(param_1 + 0x110) = *(undefined2 *)(param_1 + 0x10c);
        }
        else {
          *(undefined2 *)(param_1 + 0x10e) = 0;
          *(undefined2 *)(param_1 + 0x110) = 0;
        }
        *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)(param_1 + 0x112);
        *(undefined2 *)(param_1 + 0x116) = 0xff;
      case '\b':
        *(undefined2 *)(param_1 + 0x122) = 0;
        uVar7 = *(undefined2 *)(param_1 + 0x124);
LAB_11e1_0f42:
        *(undefined2 *)(param_1 + 0x128) = uVar7;
        *(undefined2 *)(param_1 + 0x12a) = uVar2;
        goto switchD_1000_2c08_default;
      case '\t':
        goto switchD_1000_2c08_caseD_9;
      case '\n':
        *local_6 = 0;
        return (int *)piVar5;
      default:
        goto switchD_1000_2c08_default;
      }
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 3;
      goto switchD_1000_2c08_default;
    }
  }
switchD_1000_2c08_caseD_9:
  return piVar8;
switchD_1000_2c08_caseD_0:
  uVar1 = *(undefined1 *)((int)*(undefined4 *)(param_1 + 0x128) + 1);
  *(undefined1 *)(param_1 + 300) = uVar1;
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 2;
  return (int *)CONCAT11((char)((ulong)piVar5 >> 8),uVar1);
}



/* 11e1:0f84 FUN_11e1_0f84 */

void __cdecl16far FUN_11e1_0f84(undefined1 param_1)

{
  undefined1 local_10;
  undefined1 local_f;
  
  local_f = 0;
  local_10 = param_1;
  FUN_19c7_4a00(0x10,&local_10,&local_10);
  return;
}



/* 11e1:0faa FUN_11e1_0faa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_0faa(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int local_4;
  
  _DAT_3000_a38e = 0x1e;
  for (local_4 = 0; local_4 < _DAT_3000_a38e; local_4 = local_4 + 1) {
    uVar2 = FUN_11e1_1488(_DAT_2a22_bd66 + 1);
    *(undefined2 *)(local_4 * 2 + -0x43d2) = uVar2;
    uVar2 = FUN_11e1_1488(_DAT_2a22_bd68 + 1);
    *(undefined2 *)(local_4 * 2 + -0x4396) = uVar2;
    uVar2 = FUN_14b9_02b2(5);
    *(undefined2 *)(local_4 * 2 + -0x431e) = uVar2;
    iVar1 = *(int *)(local_4 * 2 + -0x431e);
    iVar3 = FUN_14b9_02b2(0x14);
    iVar3 = iVar1 * 4 + iVar3;
    if (_DAT_2a22_7dee == 0x4d) {
      iVar3 = iVar3 + 0x24;
    }
    else {
      iVar3 = *(int *)((iVar3 + 4 >> 3) * 2 + 0x522);
    }
    *(int *)(local_4 * 2 + -0x435a) = iVar3;
  }
  return;
}



/* 11e1:1052 FUN_11e1_1052 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_1052(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int local_c;
  
  iVar1 = *(int *)(((*(int *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) + 9U) / 10) * 2 +
                  0x52a);
  uVar2 = FUN_1ed2_007e(_DAT_3000_a398);
  uVar3 = FUN_1ed2_006e(_DAT_3000_a398);
  iVar4 = (*(int *)&DAT_2a22_ccbb * 0x40) / 2;
  iVar5 = (*(int *)&DAT_2a22_ccb9 * 0x40) / 2;
  local_c = 0;
  do {
    if (_DAT_3000_a38e <= local_c) {
      return;
    }
    if (iVar1 != 0) {
      iVar7 = local_c * 2;
      iVar12 = ((iVar1 << (*(byte *)(iVar7 + -0x431e) & 0x1f)) * _DAT_2a22_fad6) / 0xc + 1;
      *(int *)(iVar7 + -0x43d2) = *(int *)(iVar7 + -0x43d2) + *(int *)(iVar7 + -0x43d2) / iVar12;
      *(int *)(iVar7 + -0x4396) = *(int *)(iVar7 + -0x4396) + *(int *)(iVar7 + -0x4396) / iVar12;
      iVar12 = local_c * 2;
      if ((((iVar5 < *(int *)(iVar12 + -0x43d2)) ||
           (-*(int *)(iVar12 + -0x43d2) != iVar5 && *(int *)(iVar12 + -0x43d2) <= -iVar5)) ||
          (iVar4 < *(int *)(iVar12 + -0x4396))) ||
         (-*(int *)(iVar12 + -0x4396) != iVar4 && *(int *)(iVar12 + -0x4396) <= -iVar4)) {
        uVar6 = FUN_11e1_1488(_DAT_2a22_bd66 + 1 >> 1);
        *(undefined2 *)(local_c * 2 + -0x43d2) = uVar6;
        uVar6 = FUN_11e1_1488(_DAT_2a22_bd68 + 1 >> 1);
        *(undefined2 *)(local_c * 2 + -0x4396) = uVar6;
      }
    }
    iVar12 = local_c * 2;
    *(int *)(iVar12 + -0x4396) = *(int *)(iVar12 + -0x4396) + _DAT_3000_a396;
    *(int *)(iVar12 + -0x43d2) = *(int *)(iVar12 + -0x43d2) - _DAT_3000_a394;
    if (_DAT_3000_a398 != 0) {
      uVar6 = *(undefined2 *)(iVar12 + -0x4396);
      iVar7 = FUN_1ed2_0008(uVar6,uVar3);
      iVar8 = FUN_1ed2_0008(*(undefined2 *)(iVar12 + -0x43d2),uVar2);
      *(int *)(iVar12 + -0x4396) = iVar8 + iVar7;
      iVar12 = FUN_1ed2_0008(*(undefined2 *)(local_c * 2 + -0x43d2),uVar3);
      iVar7 = FUN_1ed2_0008(uVar6,uVar2);
      *(int *)(local_c * 2 + -0x43d2) = iVar12 - iVar7;
    }
    piVar11 = (int *)(local_c * 2 + -0x4396);
    if (iVar4 < *piVar11) {
      iVar12 = *(int *)&DAT_2a22_ccbb;
LAB_11e1_10fc:
      *piVar11 = *piVar11 + iVar12 * -0x40;
    }
    else {
      piVar11 = (int *)(local_c * 2 + -0x4396);
      if (-*piVar11 == iVar4 || -iVar4 < *piVar11) {
        piVar11 = (int *)(local_c * 2 + -0x43d2);
        if (iVar5 < *piVar11) {
          iVar12 = *(int *)&DAT_2a22_ccb9;
          goto LAB_11e1_10fc;
        }
        piVar11 = (int *)(local_c * 2 + -0x43d2);
        if (-*piVar11 != iVar5 && *piVar11 <= -iVar5) {
          iVar12 = *(int *)&DAT_2a22_ccb9;
          goto LAB_11e1_111e;
        }
      }
      else {
        iVar12 = *(int *)&DAT_2a22_ccbb;
LAB_11e1_111e:
        *piVar11 = *piVar11 + iVar12 * 0x40;
      }
    }
    iVar12 = local_c * 2;
    uVar9 = (int)*(uint *)(iVar12 + -0x4396) >> 0xf;
    uVar10 = (int)*(uint *)(iVar12 + -0x43d2) >> 0xf;
    FUN_1eea_0b9f(_DAT_2a22_bd72,
                  (((int)((*(uint *)(iVar12 + -0x43d2) ^ uVar10) - uVar10) >> 6 ^ uVar10) - uVar10)
                  + _DAT_3000_a390,
                  (((int)((*(uint *)(iVar12 + -0x4396) ^ uVar9) - uVar9) >> 6 ^ uVar9) - uVar9) +
                  _DAT_3000_a392,*(undefined2 *)(iVar12 + -0x435a));
    local_c = local_c + 1;
  } while( true );
}



/* 11e1:129e FUN_11e1_129e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_11e1_129e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_12;
  uint local_10;
  int local_c;
  
  iVar1 = *(int *)(((*(int *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) + 9U) / 10) * 2 +
                  0x554);
  FUN_1ed2_007e(_DAT_3000_a398);
  FUN_1ed2_006e(_DAT_3000_a398);
  iVar2 = (*(int *)&DAT_2a22_ccbb * 0x40) / 2;
  iVar3 = (*(int *)&DAT_2a22_ccb9 * 0x40) / 2;
  for (local_c = 0; local_c < _DAT_3000_a38e; local_c = local_c + 1) {
    if (iVar1 == 0) {
      local_10 = *(uint *)(local_c * 2 + -0x43d2);
      local_12 = *(uint *)(local_c * 2 + -0x4396);
    }
    else {
      iVar10 = local_c * 2;
      iVar9 = ((iVar1 << (*(byte *)(iVar10 + -0x431e) & 0x1f)) * _DAT_2a22_fad6) / 0xc + 1;
      local_10 = *(int *)(iVar10 + -0x43d2) / iVar9 + *(int *)(iVar10 + -0x43d2);
      local_12 = *(int *)(iVar10 + -0x4396) / iVar9 + *(int *)(iVar10 + -0x4396);
      iVar9 = local_c * 2;
      if ((((iVar3 < *(int *)(iVar9 + -0x43d2)) ||
           (-*(int *)(iVar9 + -0x43d2) != iVar3 && *(int *)(iVar9 + -0x43d2) <= -iVar3)) ||
          (iVar2 < *(int *)(iVar9 + -0x4396))) ||
         (-*(int *)(iVar9 + -0x4396) != iVar2 && *(int *)(iVar9 + -0x4396) <= -iVar2)) {
        uVar4 = FUN_11e1_1488(_DAT_2a22_bd66 + 1 >> 1);
        *(undefined2 *)(local_c * 2 + -0x43d2) = uVar4;
        uVar4 = FUN_11e1_1488(_DAT_2a22_bd68 + 1 >> 1);
        *(undefined2 *)(local_c * 2 + -0x4396) = uVar4;
        iVar10 = local_c * 2;
        iVar9 = ((iVar1 << (*(byte *)(iVar10 + -0x431e) & 0x1f)) * _DAT_2a22_fad6) / 0xc + 1;
        local_10 = *(int *)(iVar10 + -0x43d2) / iVar9 + *(int *)(iVar10 + -0x43d2);
        local_12 = *(int *)(iVar10 + -0x4396) / iVar9 + *(int *)(iVar10 + -0x4396);
      }
    }
    iVar9 = local_c * 2;
    uVar5 = (int)local_12 >> 0xf;
    uVar6 = (int)local_10 >> 0xf;
    uVar7 = (int)*(uint *)(iVar9 + -0x4396) >> 0xf;
    uVar8 = (int)*(uint *)(iVar9 + -0x43d2) >> 0xf;
    FUN_1eea_0b5a(_DAT_2a22_bd72,
                  (((int)((*(uint *)(iVar9 + -0x43d2) ^ uVar8) - uVar8) >> 6 ^ uVar8) - uVar8) +
                  _DAT_3000_a390,
                  (((int)((*(uint *)(iVar9 + -0x4396) ^ uVar7) - uVar7) >> 6 ^ uVar7) - uVar7) +
                  _DAT_3000_a392,
                  (((int)((local_10 ^ uVar6) - uVar6) >> 6 ^ uVar6) - uVar6) + _DAT_3000_a390,
                  (((int)((local_12 ^ uVar5) - uVar5) >> 6 ^ uVar5) - uVar5) + _DAT_3000_a392,
                  *(undefined2 *)(iVar9 + -0x435a));
    *(uint *)(local_c * 2 + -0x43d2) = local_10;
    *(uint *)(local_c * 2 + -0x4396) = local_12;
  }
  return;
}



/* 11e1:1488 FUN_11e1_1488 */

int __cdecl16far FUN_11e1_1488(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_14b9_02b2(param_1);
  return (iVar1 - (param_1 >> 1)) * 0x40;
}



/* 132b:0006 FUN_132b_0006 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_0006(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)((undefined *)&DAT_3000_a3cc + local_4 * 0x3c) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 0x1e);
  _DAT_3000_aaa8 = 0;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 1;
  _DAT_3000_aac9[0x19] = 0x105;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0x15] = 0x200;
  puVar2[0x18] = 0x200;
  _DAT_3000_aac9[0x11] = 0x800;
  _DAT_3000_aac9[0x12] = 0x28;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = 0;
  puVar2[2] = 0;
  _DAT_3000_aac9[1] = 0;
  _DAT_3000_aac9[0xd] = 0;
  _DAT_3000_aac9[0xc] = 0;
  _DAT_3000_aac9[0xb] = 0;
  dispatch_ovl_14_252a_27e4();
  _DAT_3000_aac9[0xe] = 0;
  _DAT_3000_aad3 = 0;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x11] = 0x4000;
  *_DAT_3000_aac9 = 0x80;
  _DAT_3000_aac9[0x19] = 0x107;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0x15] = 0;
  puVar2[0x18] = 0;
  uVar1 = _DAT_3000_aac9[9];
  _DAT_3000_aac9[8] = uVar1;
  _DAT_3000_aac9[7] = uVar1;
  FUN_1697_0008();
  switch(_DAT_2a22_e32c) {
  case 2:
    dispatch_ovl_35_290a_0000();
    break;
  case 3:
    dispatch_ovl_36_290a_0000();
    break;
  case 4:
    dispatch_ovl_37_290a_0000();
    break;
  case 5:
    dispatch_ovl_38_290a_0000();
    break;
  case 6:
    dispatch_ovl_39_290a_0000();
    break;
  case 7:
    dispatch_ovl_40_290a_0000();
    break;
  case 8:
    dispatch_ovl_41_290a_03f2();
    break;
  case 9:
    dispatch_ovl_42_290a_0000();
    break;
  case 10:
    dispatch_ovl_43_290a_0000();
    break;
  case 0xb:
    dispatch_ovl_44_290a_0000();
    break;
  case 0xc:
    dispatch_ovl_45_290a_050e();
    break;
  case 0xd:
    dispatch_ovl_46_290a_0000();
    break;
  case 0xe:
    dispatch_ovl_47_290a_0000();
    break;
  case 0xf:
    dispatch_ovl_48_290a_064c();
    break;
  case 0x10:
    dispatch_ovl_51_290a_0000();
    break;
  case 0x11:
    dispatch_ovl_49_290a_078a();
    break;
  case 0x12:
    dispatch_ovl_50_290a_0000();
  }
  _DAT_3000_aaaa = 0;
  if (_DAT_3000_aaa8 == 2) {
    _DAT_3000_aad1 = 0;
  }
  return;
}



/* 132b:01be FUN_132b_01be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_01be(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  int local_6;
  int local_4;
  
  _DAT_2a22_d926 = 0;
  if (_DAT_3000_aaa2 < 2) {
    local_4 = 2;
  }
  else {
    local_4 = 0;
  }
LAB_132b_021c:
  if (local_4 < _DAT_3000_aaa8) {
    iVar3 = local_4 * 0x3c;
    _DAT_3000_aac9 = (undefined *)&DAT_3000_a39a + iVar3;
    if (((local_4 != _DAT_3000_aaa2) && (*(int *)((undefined *)&DAT_3000_a3cc + iVar3) != 0)) &&
       ((DAT_2a22_bd80 != '\0' || ((*_DAT_3000_aac9 & 0x80) == 0)))) {
      uVar2 = FUN_1edc_000e(*(int *)((undefined *)&DAT_3000_a39e + iVar3) -
                            *(int *)((undefined *)&DAT_3000_a39e + _DAT_3000_aaa2 * 0x3c),
                            *(int *)((undefined *)&DAT_3000_a3a0 + iVar3) -
                            *(int *)((undefined *)&DAT_3000_a3a0 + _DAT_3000_aaa2 * 0x3c),0,0);
      _DAT_3000_aab6 =
           FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 2) -
                         *(int *)((undefined *)&DAT_3000_a39c + _DAT_3000_aaa2 * 0x3c),uVar2);
      for (local_6 = 0; local_6 < _DAT_2a22_d926; local_6 = local_6 + 1) {
        local_8 = _DAT_2a22_d926;
        if (*(int *)((undefined *)&DAT_2a22_d928 + local_6 * 2) < _DAT_3000_aab6)
        goto LAB_132b_01e3;
      }
      goto LAB_132b_0202;
    }
    goto LAB_132b_0219;
  }
  local_4 = 0;
  do {
    if (_DAT_2a22_d926 <= local_4) {
      FUN_17ba_016a();
      if (_DAT_3000_aacf != (byte *)0x0) {
        _DAT_3000_aac9 = _DAT_3000_aacf;
        FUN_132b_145a();
      }
      return;
    }
    _DAT_3000_aac9 = *(byte **)((undefined *)&DAT_2a22_d964 + local_4 * 2);
    if (*(int *)(_DAT_3000_aac9 + 0x32) == -0x8000) {
      if (6 < *(int *)(_DAT_3000_aac9 + 0x28)) {
        pbVar1 = _DAT_3000_aac9 + 0x28;
        pbVar1[0] = 6;
        pbVar1[1] = 0;
      }
      pbVar1 = _DAT_3000_aac9;
      iVar3 = *(int *)(_DAT_3000_aac9 + 0x28);
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + 1;
      *(int *)pbVar1 = iVar3 + 6;
      FUN_1897_043e(*(undefined2 *)_DAT_3000_aac9,-*(int *)(_DAT_3000_aac9 + 0x16),
                    *(undefined2 *)(_DAT_3000_aac9 + 0x18),*(undefined2 *)(_DAT_3000_aac9 + 0x1a),
                    *(undefined2 *)(_DAT_3000_aac9 + 2),*(undefined2 *)(_DAT_3000_aac9 + 4),
                    *(undefined2 *)(_DAT_3000_aac9 + 6),*(undefined2 *)(_DAT_3000_aac9 + 0x2a));
    }
    else {
      if (2 < _DAT_3000_aac9[0x32]) {
        uVar4 = (uint)_DAT_3000_aac9[0x38];
        local_6 = 1;
        do {
          *(uint *)(local_6 * 2 + -0x3b8b) = uVar4 & 1;
          uVar4 = (int)uVar4 >> 1;
          local_6 = local_6 + 1;
        } while (local_6 < 9);
      }
      if ((char)_DAT_3000_aac9[0x39] < '\0') {
        _DAT_3000_aac9[0x39] = _DAT_3000_aac9[0x39] + 1;
        _DAT_3000_aae3 = 0;
      }
      else if (DAT_2a22_bd80 == '\0') {
        _DAT_3000_aae3 = (int)(char)_DAT_3000_aac9[0x39];
        if (0 < _DAT_3000_aae3) {
          _DAT_3000_aac9[0x39] = _DAT_3000_aac9[0x39] - 1;
        }
        if (DAT_2a22_e326 != DAT_2a22_46f4) {
          _DAT_2a22_7c40 =
               (uint)(*(int *)((undefined *)&DAT_2a22_d928 + local_4 * 2) <
                     *(int *)(_DAT_3000_aac9 + 0x2a) * 0x10);
        }
        if (_DAT_3000_aac9[0x33] == 0xb) {
          iVar3 = 0x1000;
        }
        else {
          iVar3 = 0;
        }
        FUN_1897_03b6(*(undefined2 *)_DAT_3000_aac9,-*(int *)(_DAT_3000_aac9 + 0x16),
                      iVar3 + *(int *)(_DAT_3000_aac9 + 0x18),*(undefined2 *)(_DAT_3000_aac9 + 0x1a)
                      ,*(undefined2 *)(_DAT_3000_aac9 + 2),*(undefined2 *)(_DAT_3000_aac9 + 4),
                      *(undefined2 *)(_DAT_3000_aac9 + 6));
        goto LAB_132b_038a;
      }
      FUN_186e_013e();
    }
LAB_132b_038a:
    local_4 = local_4 + 1;
  } while( true );
LAB_132b_01e3:
  while (local_8 = local_8 + -1, local_6 <= local_8) {
    iVar3 = local_8 * 2;
    *(undefined2 *)(iVar3 + -0x6b26) = *(undefined2 *)((undefined *)&DAT_2a22_d928 + iVar3);
    *(undefined2 *)(iVar3 + -0x6aea) = *(undefined2 *)((undefined *)&DAT_2a22_d964 + iVar3);
  }
LAB_132b_0202:
  *(int *)((undefined *)&DAT_2a22_d928 + local_6 * 2) = _DAT_3000_aab6;
  *(byte **)((undefined *)&DAT_2a22_d964 + local_6 * 2) = _DAT_3000_aac9;
  _DAT_2a22_d926 = _DAT_2a22_d926 + 1;
LAB_132b_0219:
  local_4 = local_4 + 1;
  goto LAB_132b_021c;
}



/* 132b:0410 FUN_132b_0410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl16far FUN_132b_0410(void)

{
  _DAT_3000_aaac = 0;
  _DAT_2a22_d9a0 = (undefined *)&DAT_3000_a39a;
  while( true ) {
    if (0x1d < _DAT_3000_aaac) {
      _DAT_3000_aaac = 0x1d;
      return (undefined *)0xc3f6;
    }
    if (*(int *)(_DAT_2a22_d9a0 + 0x32) == 0) break;
    _DAT_3000_aaac = _DAT_3000_aaac + 1;
    _DAT_2a22_d9a0 = _DAT_2a22_d9a0 + 0x3c;
  }
  if (_DAT_3000_aaa8 <= _DAT_3000_aaac) {
    _DAT_3000_aaa8 = _DAT_3000_aaac + 1;
  }
  FUN_19c7_4d7c(_DAT_2a22_d9a0,0,0x3c);
  return _DAT_2a22_d9a0;
}



/* 132b:0466 FUN_132b_0466 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_0466(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_6;
  byte local_4;
  byte bStack_3;
  
  if (*(int *)((undefined *)&DAT_3000_a3cc + param_1 * 0x3c) != 0) {
    uVar1 = *(uint *)((undefined *)&DAT_3000_a3cc + param_1 * 0x3c);
    uVar2 = uVar1 & 0x7fff;
    if (uVar2 == 0x703) {
      dispatch_ovl_40_290a_0502(param_1);
    }
    else if (uVar2 == 0xa03) {
      dispatch_ovl_43_290a_0aa4(param_1);
    }
    else if (uVar2 == 0xc05) {
      dispatch_ovl_45_290a_04e4((undefined *)&DAT_3000_a39a + param_1 * 0x3c);
    }
    if (param_1 == _DAT_3000_aaa2) {
      _DAT_3000_aad5 = 0;
      dispatch_ovl_14_252a_21bc();
    }
    if ((((uVar1 & 0x7fff) == 0x102) || ((uVar1 & 0x7fff) == 0x103)) &&
       (FUN_1697_1138(param_1), *(char *)(param_1 * 0x3c + -0x429b) == '\0')) {
      local_6 = 0;
LAB_132b_057b:
      if (local_6 < _DAT_3000_aae1) {
        if (*(int *)((undefined *)&DAT_3000_aad9 + local_6 * 2) != param_1) goto LAB_132b_0578;
        _DAT_3000_aae1 = _DAT_3000_aae1 + -1;
        for (; local_6 < _DAT_3000_aae1; local_6 = local_6 + 1) {
          *(undefined2 *)((undefined *)&DAT_3000_aad9 + local_6 * 2) =
               *(undefined2 *)(local_6 * 2 + -0x3b95);
        }
      }
    }
    *(undefined2 *)((undefined *)&DAT_3000_a3cc + param_1 * 0x3c) = 0;
    if (param_1 == _DAT_3000_aad1) {
      dispatch_ovl_14_252a_2132();
    }
    local_4 = (byte)uVar1;
    bStack_3 = (byte)(uVar1 >> 8);
    if ((2 < local_4) && (bStack_3 == _DAT_2a22_e32c)) {
      _DAT_3000_aaa4 = _DAT_3000_aaa4 + *(int *)((undefined *)&DAT_3000_a3ca + param_1 * 0x3c) * 2;
      for (local_6 = 0; local_6 < _DAT_3000_aaa8; local_6 = local_6 + 1) {
        iVar3 = local_6 * 0x3c;
        if (((*(int *)((undefined *)&DAT_3000_a3cc + iVar3) != 0) &&
            (((undefined *)&DAT_3000_a3cc)[iVar3] == '\x02')) &&
           ((((undefined *)&DAT_3000_a3cd)[iVar3] == '\x01' &&
            ((*(char *)(iVar3 + -0x429b) != '\0' &&
             ((undefined *)&DAT_3000_a39a + param_1 * 0x3c ==
              *(undefined **)((undefined *)&DAT_3000_a3ce + iVar3))))))) {
          FUN_132b_0466(local_6);
        }
      }
    }
    if (local_4 == 6) {
      dispatch_ovl_14_252a_12be(0x580);
      dispatch_ovl_14_252a_146c();
    }
    else if (bStack_3 != 1) {
      dispatch_ovl_14_252a_141a();
    }
    if (param_1 == _DAT_3000_aaa8 + -1) {
      do {
        _DAT_3000_aaa8 = _DAT_3000_aaa8 + -1;
      } while (*(int *)((undefined *)&DAT_3000_a390 + _DAT_3000_aaa8 * 0x3c) == 0);
      return;
    }
    if (((undefined *)&DAT_3000_a408)[param_1 * 0x3c] == '\a') {
      FUN_132b_0466(param_1 + 1);
    }
  }
  return;
LAB_132b_0578:
  local_6 = local_6 + 1;
  goto LAB_132b_057b;
}



/* 132b:064a FUN_132b_064a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_064a(void)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int local_6;
  
  _DAT_2a22_d9b4 = (undefined *)&DAT_3000_a39a;
  for (local_6 = 0; local_6 < _DAT_3000_aaa8; local_6 = local_6 + 1) {
    if (*(int *)(_DAT_2a22_d9b4 + 0x32) != 0) {
      if (_DAT_2a22_d9b4[0x32] == '\a') {
        *(undefined2 *)(_DAT_2a22_d9b4 + 0x14) = *(undefined2 *)(_DAT_2a22_d9bc + 0x14);
        *(undefined2 *)(_DAT_2a22_d9b4 + 0x1c) = *(undefined2 *)(_DAT_2a22_d9bc + 0x1c);
        if (local_6 != _DAT_3000_aaa2) {
          *(undefined2 *)(_DAT_2a22_d9b4 + 0x16) = *(undefined2 *)(_DAT_2a22_d9bc + 0x16);
          *(undefined2 *)(_DAT_2a22_d9b4 + 0x18) = *(undefined2 *)(_DAT_2a22_d9bc + 0x18);
          *(undefined2 *)(_DAT_2a22_d9b4 + 0x1a) = *(undefined2 *)(_DAT_2a22_d9bc + 0x1a);
          cVar1 = _DAT_2a22_d9b4[0x36];
          if (cVar1 == '\0') {
            *(int *)(_DAT_2a22_d9b4 + 0x16) =
                 *(int *)(_DAT_2a22_d9b4 + 0x16) + *(int *)(_DAT_2a22_d9b4 + 0x2e);
          }
          else if (cVar1 == '\x01') {
            *(int *)(_DAT_2a22_d9b4 + 0x18) =
                 *(int *)(_DAT_2a22_d9b4 + 0x18) + *(int *)(_DAT_2a22_d9b4 + 0x2e);
          }
          else if (cVar1 == '\x02') {
            *(int *)(_DAT_2a22_d9b4 + 0x1a) =
                 *(int *)(_DAT_2a22_d9b4 + 0x1a) + *(int *)(_DAT_2a22_d9b4 + 0x2e);
          }
        }
        _DAT_2a22_d9b6 = *(int *)(_DAT_2a22_d9b4 + 0xe);
        _DAT_2a22_d9b8 = *(int *)(_DAT_2a22_d9b4 + 0x10);
        _DAT_2a22_d9ba = *(int *)(_DAT_2a22_d9b4 + 0x12);
        if ((_DAT_2a22_d9b6 != 0 || _DAT_2a22_d9b8 != 0) || _DAT_2a22_d9ba != 0) {
          FUN_1897_0502(0x9552,*(undefined2 *)(_DAT_2a22_d9bc + 0x16),
                        -*(int *)(_DAT_2a22_d9bc + 0x18),-*(int *)(_DAT_2a22_d9bc + 0x1a));
          FUN_14b9_03be(0x9552,(undefined *)&DAT_2a22_d9b6,(undefined *)&DAT_2a22_d9b8,
                        (undefined *)&DAT_2a22_d9ba);
        }
        *(undefined2 *)(_DAT_2a22_d9b4 + 8) = *(undefined2 *)(_DAT_2a22_d9b4 + 2);
        *(undefined2 *)(_DAT_2a22_d9b4 + 10) = *(undefined2 *)(_DAT_2a22_d9b4 + 4);
        *(undefined2 *)(_DAT_2a22_d9b4 + 0xc) = *(undefined2 *)(_DAT_2a22_d9b4 + 6);
        *(int *)(_DAT_2a22_d9b4 + 2) = *(int *)(_DAT_2a22_d9bc + 2) + _DAT_2a22_d9b6;
        *(int *)(_DAT_2a22_d9b4 + 4) = *(int *)(_DAT_2a22_d9bc + 4) + _DAT_2a22_d9b8;
        *(int *)(_DAT_2a22_d9b4 + 6) = *(int *)(_DAT_2a22_d9bc + 6) + _DAT_2a22_d9ba;
      }
      else {
        uVar2 = FUN_1ed2_006e(*(undefined2 *)(_DAT_2a22_d9b4 + 0x18));
        uVar3 = (uint)(*(int *)(_DAT_2a22_d9b4 + 0x1c) * _DAT_2a22_face) >> 5;
        *(uint *)(_DAT_2a22_d9b4 + 0x14) = uVar3;
        uVar2 = FUN_1ed2_0008(uVar3,uVar2);
        *(undefined2 *)(_DAT_2a22_d9b4 + 8) = *(undefined2 *)(_DAT_2a22_d9b4 + 2);
        *(undefined2 *)(_DAT_2a22_d9b4 + 10) = *(undefined2 *)(_DAT_2a22_d9b4 + 4);
        *(undefined2 *)(_DAT_2a22_d9b4 + 0xc) = *(undefined2 *)(_DAT_2a22_d9b4 + 6);
        uVar4 = FUN_1ed2_007e(*(undefined2 *)(_DAT_2a22_d9b4 + 0x16));
        iVar5 = FUN_1ed2_0008(uVar2,uVar4);
        *(int *)(_DAT_2a22_d9b4 + 2) = *(int *)(_DAT_2a22_d9b4 + 2) + iVar5;
        uVar4 = FUN_1ed2_006e(*(undefined2 *)(_DAT_2a22_d9b4 + 0x16));
        iVar5 = FUN_1ed2_0008(uVar2,uVar4);
        *(int *)(_DAT_2a22_d9b4 + 4) = *(int *)(_DAT_2a22_d9b4 + 4) + iVar5;
        uVar2 = FUN_1ed2_007e(*(undefined2 *)(_DAT_2a22_d9b4 + 0x18));
        iVar5 = FUN_1ed2_0008((uint)(*(int *)(_DAT_2a22_d9b4 + 0x1c) * _DAT_2a22_face) >> 5,uVar2);
        *(int *)(_DAT_2a22_d9b4 + 6) = *(int *)(_DAT_2a22_d9b4 + 6) + iVar5;
        if ((_DAT_2a22_d9b4 == _DAT_3000_aad7) && (DAT_3000_aabc != '\0')) {
          DAT_3000_aabc = DAT_3000_aabc + -1;
          *(int *)(_DAT_2a22_d9b4 + 2) = *(int *)(_DAT_2a22_d9b4 + 2) + _DAT_3000_aabd;
          *(int *)(_DAT_2a22_d9b4 + 4) = *(int *)(_DAT_2a22_d9b4 + 4) + _DAT_3000_aabf;
          *(int *)(_DAT_2a22_d9b4 + 6) = *(int *)(_DAT_2a22_d9b4 + 6) + _DAT_3000_aac1;
          _DAT_3000_aabd = _DAT_3000_aabd - _DAT_3000_aac3;
          _DAT_3000_aabf = _DAT_3000_aabf - _DAT_3000_aac5;
          _DAT_3000_aac1 = _DAT_3000_aac1 - _DAT_3000_aac7;
        }
        _DAT_2a22_d9bc = _DAT_2a22_d9b4;
      }
    }
    _DAT_2a22_d9b4 = _DAT_2a22_d9b4 + 0x3c;
  }
  return;
}



/* 132b:08f2 FUN_132b_08f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_08f2(void)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = DAT_3000_aaa6;
  _DAT_3000_aacf = 0;
  _DAT_3000_aac9 = (int *)&DAT_3000_a39a;
  for (_DAT_3000_aaae = 0; _DAT_3000_aaae < _DAT_3000_aaa8; _DAT_3000_aaae = _DAT_3000_aaae + 1) {
    if ((((DAT_2a22_fad4 & 7) == 0) && (*(char *)((int)_DAT_3000_aac9 + 0x33) == '\x01')) &&
       (1 < *(byte *)(_DAT_3000_aac9 + 0x19))) {
      if (_DAT_3000_aaae == 0) {
        FUN_132b_13d8();
      }
      else if (1 < _DAT_3000_aaae) {
        FUN_132b_13da();
      }
    }
    if (_DAT_3000_aac9[0x19] != 0) {
      _DAT_3000_aaba = 0;
      _DAT_3000_aab8 = 0;
      if ((*(byte *)((int)_DAT_3000_aac9 + 0x33) & 0x80) == 0) {
        if (_DAT_3000_aac9[0x19] == 0x104) {
          piVar1 = _DAT_3000_aac9 + 0x13;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            if (*_DAT_3000_aac9 == 0xd) {
              FUN_132b_0466(_DAT_3000_aaae);
              dispatch_ovl_14_252a_157e();
            }
            else {
              DAT_3000_aaa7 = 4;
            }
          }
        }
        else if ((*(char *)((int)_DAT_3000_aac9 + 0x33) == '\x01') &&
                (2 < *(byte *)(_DAT_3000_aac9 + 0x19))) {
          FUN_132b_116c();
        }
        else if (*(byte *)(_DAT_3000_aac9 + 0x19) < 3) {
          FUN_132b_0b4a();
        }
        else {
          switch(*(undefined *)((int)_DAT_3000_aac9 + 0x33)) {
          case 2:
            dispatch_ovl_35_290a_042e();
            break;
          case 3:
            dispatch_ovl_36_290a_0670();
            break;
          case 4:
            dispatch_ovl_37_290a_0132();
            break;
          case 5:
            dispatch_ovl_38_290a_03ce();
            break;
          case 6:
            dispatch_ovl_39_290a_027a();
            break;
          case 7:
            dispatch_ovl_40_290a_010a();
            break;
          case 8:
            dispatch_ovl_41_290a_0b22();
            break;
          case 9:
            dispatch_ovl_42_290a_00e8();
            break;
          case 10:
            dispatch_ovl_43_290a_039a();
            break;
          case 0xb:
            dispatch_ovl_44_290a_00fe();
            break;
          case 0xc:
            dispatch_ovl_45_290a_0d10();
            break;
          case 0xd:
            dispatch_ovl_46_290a_0358();
            break;
          case 0xe:
            dispatch_ovl_47_290a_0252();
            break;
          case 0xf:
            dispatch_ovl_48_290a_1130();
            break;
          case 0x10:
            dispatch_ovl_51_290a_012a();
            break;
          case 0x11:
            dispatch_ovl_49_290a_0f7a();
            break;
          case 0x12:
            dispatch_ovl_50_290a_021a();
          }
        }
      }
      else {
        piVar1 = _DAT_3000_aac9 + 0x13;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_132b_0466(_DAT_3000_aaae);
        }
      }
      if (_DAT_3000_aac9[0x10] != 0 || _DAT_3000_aac9[0xf] != 0) {
        _DAT_3000_aab8 =
             FUN_14b9_002e(_DAT_3000_aac9[0xf],-_DAT_3000_aac9[0x11],_DAT_3000_aac9[0x11]);
        _DAT_3000_aab8 = _DAT_3000_aab8 / _DAT_2a22_fad6;
        _DAT_3000_aaba =
             FUN_14b9_002e(_DAT_3000_aac9[0x10],-_DAT_3000_aac9[0x11],_DAT_3000_aac9[0x11]);
        _DAT_3000_aaba = _DAT_3000_aaba / _DAT_2a22_fad6;
        _DAT_3000_aac9[0xf] = _DAT_3000_aac9[0xf] - _DAT_3000_aab8;
        _DAT_3000_aac9[0x10] = _DAT_3000_aac9[0x10] - _DAT_3000_aaba;
        _DAT_3000_aac9[0xb] = _DAT_3000_aac9[0xb] + _DAT_3000_aab8;
        _DAT_3000_aac9[0xc] = _DAT_3000_aac9[0xc] + _DAT_3000_aaba;
      }
    }
    _DAT_3000_aac9 = _DAT_3000_aac9 + 0x1e;
  }
  if ((cVar2 == '\0') && (DAT_3000_aaa6 != '\0')) {
    FUN_1697_11ba();
  }
  return;
}



/* 132b:0b4a FUN_132b_0b4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_0b4a(void)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  int local_4;
  
  if ((*(char *)((int)_DAT_3000_aac9 + 0x33) != '\x01') &&
     (*(char *)(_DAT_3000_aac9 + 0x19) == '\x02')) {
    _DAT_3000_a3c4 = 0x80;
  }
  if (*(char *)((int)_DAT_3000_aac9 + 0x3b) == '\0') {
    FUN_132b_0f46();
  }
  else {
    FUN_132b_0e94();
    _DAT_3000_aac9[0x10] = _DAT_3000_aaba;
    _DAT_3000_aac9[0xf] = _DAT_3000_aab8;
  }
  local_4 = 0;
  _DAT_3000_aacd = (undefined2 *)&DAT_3000_a39a;
  do {
    if (_DAT_3000_aaa8 <= local_4) {
LAB_132b_0de9:
      piVar1 = _DAT_3000_aac9 + 0x13;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_132b_0466(_DAT_3000_aaae);
      }
      _DAT_3000_a3c4 = 0x200;
      return;
    }
    if (((((_DAT_3000_aacd[0x19] != 0) && (local_4 != _DAT_3000_aaae)) &&
         ((*(byte *)((int)_DAT_3000_aacd + 0x33) & 0x80) == 0)) &&
        ((*(char *)(_DAT_3000_aacd + 0x19) != '\x01' &&
         (*(char *)((int)_DAT_3000_aacd + 0x33) != *(char *)((int)_DAT_3000_aac9 + 0x33))))) &&
       ((iVar2 = FUN_132b_1672(_DAT_3000_aac9,_DAT_3000_aacd), iVar2 != 0 &&
        (iVar2 = FUN_186e_001e(_DAT_3000_aac9,_DAT_3000_aacd), iVar2 != 0)))) {
      _DAT_3000_aac9[0x13] = 1;
      if (local_4 == 0) {
        _DAT_3000_aab8 =
             FUN_14b9_00ac(_DAT_3000_aac9[4] - _DAT_3000_aacd[1],
                           _DAT_3000_aac9[5] - _DAT_3000_aacd[2]);
        _DAT_3000_aab8 = _DAT_3000_aab8 - _DAT_3000_aacd[0xb];
        FUN_1697_02d8(_DAT_3000_aac9[0x17]);
      }
      else if (1 < local_4) {
        if (((*(char *)(_DAT_3000_aacd + 0x1d) == '\0') ||
            (*(char *)((int)_DAT_3000_aacd + 0x33) == '\x01')) ||
           (*(char *)(_DAT_3000_aac9 + 0x19) != '\x01')) {
          if ((_DAT_3000_aac9 == _DAT_3000_aad7) && (*(char *)(_DAT_3000_aac9 + 0x19) == '\x02')) {
            FUN_1eea_0574(_DAT_2a22_4a4e,0,0,0x140,0x72,0xd);
            thunk_EXT_FUN_0000_0000(0x1eea,0xf);
            FUN_1951_017a(10);
            FUN_1951_0006(0xf);
            _DAT_3000_aad5 = 0;
            dispatch_ovl_14_252a_21bc();
          }
          _DAT_3000_aacd[0x16] = _DAT_3000_aacd[0x16] + _DAT_3000_aac9[0x17];
          if ((int)_DAT_3000_aacd[0x16] < _DAT_3000_aacd[0x18] * 2) {
            if (_DAT_3000_aac9[0x19] == 0x101) {
              if (100 < (int)_DAT_3000_aac9[0x17]) {
                iVar2 = _DAT_2a22_fad6;
                goto LAB_132b_0bcc;
              }
              if ((int)_DAT_3000_aacd[0x18] < 0xc9) {
                _DAT_3000_aac9[0x19] = 0x8001;
                *_DAT_3000_aac9 = 5;
                _DAT_3000_aac9[0x13] = 0xb;
                _DAT_3000_aac9[0xe] = 200;
                iVar2 = FUN_19c7_4e32();
                _DAT_3000_aac9[0xb] = iVar2 << 1;
                iVar2 = FUN_19c7_4e32();
                _DAT_3000_aac9[0xc] = iVar2 << 1;
                iVar2 = FUN_19c7_4e32();
                _DAT_3000_aac9[0xd] = iVar2 << 1;
                FUN_1951_017a(0xc);
              }
              else {
                _DAT_3000_aacd[0x16] = _DAT_3000_aacd[0x16] - _DAT_3000_aac9[0x17];
              }
            }
            else if (_DAT_3000_aac9[0x19] == 0x102) {
              _DAT_3000_aacd = _DAT_3000_aac9;
              FUN_132b_0e08();
              goto LAB_132b_0de9;
            }
          }
          else {
            if (local_4 == _DAT_3000_aaa2) {
              *(byte *)((int)_DAT_3000_aacd + 0x33) = *(byte *)((int)_DAT_3000_aacd + 0x33) | 0x80;
              puVar3 = _DAT_3000_aacd;
              iVar2 = _DAT_2a22_fad6;
              _DAT_3000_aacd[0x13] = _DAT_2a22_fad6;
              goto LAB_132b_0bce;
            }
            FUN_132b_0e08();
            if (*(char *)(_DAT_3000_aacd + 0x19) != '\a') {
              FUN_132b_0466(local_4);
              goto LAB_132b_0de9;
            }
            *(byte *)((int)_DAT_3000_aacd + 0x33) = *(byte *)((int)_DAT_3000_aacd + 0x33) | 0x80;
          }
        }
        else {
          iVar2 = -_DAT_2a22_fad6;
LAB_132b_0bcc:
          iVar2 = iVar2 >> 1;
          puVar3 = _DAT_3000_aacd;
LAB_132b_0bce:
          *(undefined *)((int)puVar3 + 0x39) = (char)iVar2;
        }
      }
    }
    local_4 = local_4 + 1;
    _DAT_3000_aacd = _DAT_3000_aacd + 0x1e;
  } while( true );
}



/* 132b:0e08 FUN_132b_0e08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_0e08(void)

{
  int iVar1;
  
  _DAT_3000_aacb = FUN_132b_0410();
  *(undefined2 *)(_DAT_3000_aacb + 0x32) = 0x8000;
  *(undefined2 *)(_DAT_3000_aacb + 0x26) = 8;
  *(undefined2 *)(_DAT_3000_aacb + 0x28) = 0;
  *(undefined2 *)(_DAT_3000_aacb + 0x1c) = 0;
  iVar1 = FUN_19c7_4e32();
  *(int *)(_DAT_3000_aacb + 0x16) = iVar1 << 1;
  iVar1 = FUN_19c7_4e32();
  *(int *)(_DAT_3000_aacb + 0x18) = iVar1 << 1;
  *(undefined2 *)(_DAT_3000_aacb + 2) = *(undefined2 *)(_DAT_3000_aacd + 2);
  *(undefined2 *)(_DAT_3000_aacb + 4) = *(undefined2 *)(_DAT_3000_aacd + 4);
  *(undefined2 *)(_DAT_3000_aacb + 6) = *(undefined2 *)(_DAT_3000_aacd + 6);
  *(undefined2 *)(_DAT_3000_aacb + 0x2a) = *(undefined2 *)(_DAT_3000_aacd + 0x2a);
  FUN_1951_017a(9);
  return;
}



/* 132b:0e94 FUN_132b_0e94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_0e94(void)

{
  _DAT_3000_aacb = *(undefined2 *)(_DAT_3000_aac9 + 0x34);
  FUN_132b_0ea4();
  return;
}



/* 132b:0ea4 FUN_132b_0ea4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_0ea4(void)

{
  int iVar1;
  
  _DAT_3000_aab0 = *(int *)(_DAT_3000_aacb + 2) - *(int *)(_DAT_3000_aac9 + 2);
  _DAT_3000_aab2 = *(int *)(_DAT_3000_aacb + 4) - *(int *)(_DAT_3000_aac9 + 4);
  _DAT_3000_aab4 = *(int *)(_DAT_3000_aacb + 6) - *(int *)(_DAT_3000_aac9 + 6);
  _DAT_3000_aab6 = FUN_1edc_000e(_DAT_3000_aab0,_DAT_3000_aab2,0);
  _DAT_3000_aab8 = FUN_14b9_00ac(_DAT_3000_aab0,_DAT_3000_aab2);
  _DAT_3000_aab8 = _DAT_3000_aab8 - *(int *)(_DAT_3000_aac9 + 0x16);
  _DAT_3000_aaba = FUN_14b9_00ac(_DAT_3000_aab4,_DAT_3000_aab6);
  _DAT_3000_aaba = _DAT_3000_aaba - *(int *)(_DAT_3000_aac9 + 0x18);
  iVar1 = FUN_1edc_000e(_DAT_3000_aab4,_DAT_3000_aab6,0);
  _DAT_3000_aab6 = (iVar1 - *(int *)(_DAT_3000_aacb + 0x2a)) - *(int *)(_DAT_3000_aac9 + 0x2a);
  return;
}



/* 132b:0f46 FUN_132b_0f46 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_0f46(void)

{
  undefined2 uVar1;
  int iVar2;
  
  _DAT_3000_aacb = *(int *)(_DAT_3000_aac9 + 0x34);
  _DAT_3000_aab0 = *(int *)(_DAT_3000_aacb + 2) - *(int *)(_DAT_3000_aac9 + 2);
  _DAT_3000_aab2 = *(int *)(_DAT_3000_aacb + 4) - *(int *)(_DAT_3000_aac9 + 4);
  _DAT_3000_aab4 = *(int *)(_DAT_3000_aacb + 6) - *(int *)(_DAT_3000_aac9 + 6);
  uVar1 = FUN_1edc_000e(_DAT_3000_aab2,_DAT_3000_aab4,0,0);
  iVar2 = FUN_1edc_000e(_DAT_3000_aab0,uVar1);
  _DAT_3000_aab6 = (iVar2 - *(int *)(_DAT_3000_aacb + 0x2a)) - *(int *)(_DAT_3000_aac9 + 0x2a);
  return;
}



/* 132b:0fb4 FUN_132b_0fb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_132b_0fb4(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  param_1 = param_1 + *(int *)(_DAT_3000_aacb + 0x2a) + *(int *)(_DAT_3000_aac9 + 0x2a);
  _DAT_3000_aab0 = *(int *)(_DAT_3000_aacb + 2) - *(int *)(_DAT_3000_aac9 + 2);
  if (((_DAT_3000_aab0 < param_1) &&
      (_DAT_3000_aab2 = *(int *)(_DAT_3000_aacb + 4) - *(int *)(_DAT_3000_aac9 + 4),
      _DAT_3000_aab2 < param_1)) &&
     (_DAT_3000_aab4 = *(int *)(_DAT_3000_aacb + 6) - *(int *)(_DAT_3000_aac9 + 6),
     _DAT_3000_aab4 < param_1)) {
    uVar1 = FUN_1edc_000e(_DAT_3000_aab2,_DAT_3000_aab4,0,0);
    _DAT_3000_aab6 = FUN_1edc_000e(_DAT_3000_aab0,uVar1);
    if ((int)_DAT_3000_aab6 < param_1) {
      uVar1 = FUN_1ed2_006e(*(undefined2 *)(_DAT_3000_aac9 + 0x18));
      uVar1 = FUN_1ed2_007e(*(undefined2 *)(_DAT_3000_aac9 + 0x16),uVar1);
      _DAT_2a22_d9c2 = FUN_1ed2_0008(uVar1);
      uVar1 = FUN_1ed2_006e(*(undefined2 *)(_DAT_3000_aac9 + 0x18));
      uVar1 = FUN_1ed2_006e(*(undefined2 *)(_DAT_3000_aac9 + 0x16),uVar1);
      _DAT_2a22_d9c4 = FUN_1ed2_0008(uVar1);
      _DAT_2a22_d9c6 = FUN_1ed2_007e(*(undefined2 *)(_DAT_3000_aac9 + 0x18));
      uVar2 = FUN_1ed2_0008(_DAT_2a22_d9c6,_DAT_3000_aab4);
      uVar3 = FUN_1ed2_0008(_DAT_2a22_d9c4,_DAT_3000_aab2);
      uVar4 = FUN_1ed2_0008(_DAT_2a22_d9c2,_DAT_3000_aab0);
      _DAT_2a22_d9be = uVar4 + uVar3 + uVar2;
      _DAT_2a22_d9c0 =
           ((int)uVar4 >> 0xf) + ((int)uVar3 >> 0xf) + (uint)CARRY2(uVar4,uVar3) +
           ((int)uVar2 >> 0xf) + (uint)CARRY2(uVar4 + uVar3,uVar2);
      iVar6 = (int)_DAT_3000_aab6 >> 0xf;
      iVar7 = _DAT_2a22_d9c0 + (_DAT_2a22_d9be != 0);
      iVar8 = -iVar7;
      if ((-iVar6 == iVar7 || iVar8 < iVar6) &&
         ((iVar8 < iVar6 || (-_DAT_2a22_d9be < _DAT_3000_aab6)))) {
        if (((int)_DAT_2a22_d9c0 <= iVar6) &&
           (((int)_DAT_2a22_d9c0 < iVar6 || (_DAT_2a22_d9be < _DAT_3000_aab6)))) {
          cVar5 = '\x0f';
          uVar2 = _DAT_2a22_d9be;
          uVar3 = _DAT_2a22_d9c0;
          do {
            bVar9 = (int)uVar2 < 0;
            uVar2 = uVar2 << 1;
            uVar3 = uVar3 << 1 | (uint)bVar9;
            cVar5 = cVar5 + -1;
          } while (cVar5 != '\0');
          iVar6 = FUN_19c7_4f62(uVar2,uVar3,_DAT_3000_aab6,iVar6);
          if (iVar6 <= param_2) {
            return 0;
          }
        }
        _DAT_3000_aab6 =
             _DAT_3000_aab6 - (*(int *)(_DAT_3000_aacb + 0x2a) + *(int *)(_DAT_3000_aac9 + 0x2a));
        return 1;
      }
    }
  }
  return 0;
}



/* 132b:116c FUN_132b_116c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_116c(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  int local_6;
  
  if (1 < _DAT_3000_aaae) {
    *(undefined2 *)(_DAT_3000_aac9 + 0x2a) = 1;
  }
  local_6 = 0;
  _DAT_3000_aacb = (undefined *)&DAT_3000_a39a;
  do {
    if (_DAT_3000_aaa8 <= local_6) {
LAB_132b_13bf:
      if (1 < _DAT_3000_aaae) {
        *(undefined2 *)(_DAT_3000_aac9 + 0x2a) = *(undefined2 *)(_DAT_3000_aac9 + 0x30);
      }
      return;
    }
    if (((((_DAT_3000_aacb != _DAT_3000_aac9) && (*(int *)(_DAT_3000_aacb + 0x32) != 0)) &&
         ((_DAT_3000_aacb[0x33] & 0x80) == 0)) &&
        ((_DAT_3000_aacb[0x32] != '\a' && ((byte)_DAT_3000_aac9[0x32] <= (byte)_DAT_3000_aacb[0x32])
         ))) && (iVar4 = FUN_132b_1672(_DAT_3000_aac9,_DAT_3000_aacb), iVar4 != 0)) {
      uVar5 = 0x186e;
      iVar4 = FUN_186e_001e(_DAT_3000_aac9,_DAT_3000_aacb);
      if (iVar4 != 0) {
        *(undefined2 *)(_DAT_3000_aac9 + 2) = *(undefined2 *)(_DAT_3000_aac9 + 8);
        *(undefined2 *)(_DAT_3000_aac9 + 4) = *(undefined2 *)(_DAT_3000_aac9 + 10);
        *(undefined2 *)(_DAT_3000_aac9 + 6) = *(undefined2 *)(_DAT_3000_aac9 + 0xc);
        FUN_132b_0ea4();
        if ((_DAT_3000_aac9 == (undefined *)&DAT_3000_a39a) &&
           (0x5a < *(int *)(_DAT_3000_aacb + 0x30))) {
          if (_DAT_3000_a3b6 != 0) {
            uVar5 = 0x1697;
            FUN_1697_02d8(0x40);
          }
          *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
          if (_DAT_3000_aac9 == _DAT_3000_aad7) {
            _DAT_3000_aad3 = 0;
            thunk_EXT_FUN_0000_0000(uVar5,0x14);
            FUN_1951_017a(10);
          }
          goto LAB_132b_13bf;
        }
        if ((_DAT_3000_aac9 == _DAT_3000_aad7) && (*(int *)(_DAT_3000_aac9 + 0x1c) != 0)) {
          if (DAT_3000_aabc == '\0') {
            thunk_EXT_FUN_0000_0000(0x186e,0x14);
            FUN_1951_017a(10);
            DAT_3000_aabc = DAT_2a22_fad6 << 1;
            uVar5 = FUN_1ed2_006e(*(undefined2 *)(_DAT_3000_aac9 + 0x18));
            uVar2 = (uint)(*(int *)(_DAT_3000_aac9 + 0x1c) * _DAT_2a22_face) >> 5;
            *(uint *)(_DAT_3000_aac9 + 0x14) = uVar2;
            uVar5 = FUN_1ed2_0008(uVar2,uVar5);
            uVar3 = FUN_1ed2_007e(*(int *)(_DAT_3000_aac9 + 0x16) + -0x8000);
            _DAT_3000_aabd = FUN_1ed2_0008(uVar5,uVar3);
            uVar3 = FUN_1ed2_006e(*(int *)(_DAT_3000_aac9 + 0x16) + -0x8000);
            _DAT_3000_aabf = FUN_1ed2_0008(uVar5,uVar3);
            uVar5 = FUN_1ed2_007e(*(int *)(_DAT_3000_aac9 + 0x18) + -0x8000);
            _DAT_3000_aac1 =
                 FUN_1ed2_0008((uint)(*(int *)(_DAT_3000_aac9 + 0x1c) * _DAT_2a22_face) >> 5,uVar5);
            puVar1 = _DAT_3000_aac9;
            _DAT_3000_aac7 = (int)DAT_3000_aabc;
            _DAT_3000_aac3 = _DAT_3000_aabd / _DAT_3000_aac7;
            _DAT_3000_aac5 = _DAT_3000_aabf / _DAT_3000_aac7;
            _DAT_3000_aac7 = _DAT_3000_aac1 / _DAT_3000_aac7;
            *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
            *(undefined2 *)(puVar1 + 0x14) = 0;
            *(int *)(_DAT_3000_aac9 + 0x2c) =
                 *(int *)(_DAT_3000_aac9 + 0x2c) + (*(int *)(_DAT_3000_aac9 + 0x30) >> 1);
            if (*(int *)(_DAT_3000_aac9 + 0x30) * 2 <= *(int *)(_DAT_3000_aac9 + 0x2c)) {
              _DAT_3000_aac9[0x33] = _DAT_3000_aac9[0x33] | 0x80;
              puVar1 = _DAT_3000_aac9;
              iVar4 = _DAT_2a22_fad6 >> 1;
              *(int *)(_DAT_3000_aac9 + 0x26) = iVar4;
              puVar1[0x39] = (char)iVar4;
            }
          }
          goto LAB_132b_13bf;
        }
      }
    }
    local_6 = local_6 + 1;
    _DAT_3000_aacb = _DAT_3000_aacb + 0x3c;
  } while( true );
}



/* 132b:13d8 FUN_132b_13d8 */

void __cdecl16far FUN_132b_13d8(void)

{
  return;
}



/* 132b:13da FUN_132b_13da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_13da(void)

{
  int iVar1;
  
  iVar1 = FUN_19c7_4e0a(*(int *)(_DAT_3000_aac9 + 2) - _DAT_3000_a39c);
  if (((iVar1 < 0x4269) &&
      (iVar1 = FUN_19c7_4e0a(*(int *)(_DAT_3000_aac9 + 4) - _DAT_3000_a39e), iVar1 < 0x4269)) &&
     (iVar1 = FUN_19c7_4e0a(*(int *)(_DAT_3000_aac9 + 6) - _DAT_3000_a3a0), iVar1 < 0x4269)) {
    return;
  }
  _DAT_3000_aacb = (undefined *)&DAT_3000_a39a;
  FUN_132b_0ea4();
  *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
  *(undefined2 *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
  return;
}



/* 132b:1458 FUN_132b_1458 */

void __cdecl16far FUN_132b_1458(void)

{
  return;
}



/* 132b:145a FUN_132b_145a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_132b_145a(void)

{
  undefined2 uVar1;
  int iVar2;
  
  if (_DAT_3000_aac9 == -1) {
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 1;
    }
    FUN_1eea_0574(_DAT_2a22_bd72,0,0,*(int *)(_DAT_2a22_bd72 + 6) + 1,
                  *(int *)(_DAT_2a22_bd72 + 8) + 1,uVar1);
    return;
  }
  iVar2 = _DAT_3000_aaa2 * 0x3c;
  FUN_1897_0502((undefined *)&DAT_2a22_583e,*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar2),
                -*(int *)((undefined *)&DAT_3000_a3b2 + iVar2),
                -*(int *)((undefined *)&DAT_3000_a3b4 + iVar2));
  iVar2 = _DAT_3000_aaa2 * 0x3c;
  FUN_1859_0008(_DAT_2a22_bd72,
                *(int *)(_DAT_3000_aac9 + 2) - *(int *)((undefined *)&DAT_3000_a39c + iVar2),
                *(int *)(_DAT_3000_aac9 + 4) - *(int *)((undefined *)&DAT_3000_a39e + iVar2),
                *(int *)(_DAT_3000_aac9 + 6) - *(int *)((undefined *)&DAT_3000_a3a0 + iVar2),0x9578,
                0x957a);
  iVar2 = FUN_14b9_02b2(4);
  if (iVar2 == 0) {
    _DAT_2a22_d9cc = *(int *)(_DAT_2a22_bd72 + 6);
LAB_132b_151b:
    _DAT_2a22_d9d0 = _DAT_2a22_d9cc;
    _DAT_2a22_d9ce = FUN_14b9_02b2(*(undefined2 *)(_DAT_2a22_bd72 + 8));
    _DAT_2a22_d9d2 = _DAT_2a22_d9ce + 6;
  }
  else {
    if (iVar2 == 1) {
      _DAT_2a22_d9ce = *(int *)(_DAT_2a22_bd72 + 8);
    }
    else {
      if (iVar2 == 2) {
        _DAT_2a22_d9cc = 0;
        goto LAB_132b_151b;
      }
      if (iVar2 != 3) goto LAB_132b_1539;
      _DAT_2a22_d9ce = 0;
    }
    _DAT_2a22_d9d2 = _DAT_2a22_d9ce;
    _DAT_2a22_d9cc = FUN_14b9_02b2(*(undefined2 *)(_DAT_2a22_bd72 + 6));
    _DAT_2a22_d9d0 = _DAT_2a22_d9cc + 6;
  }
LAB_132b_1539:
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 1;
  }
  FUN_1eea_0bde(_DAT_2a22_bd72,3,0x9578,uVar1);
  return;
}



/* 132b:1592 FUN_132b_1592 */

undefined2 __cdecl16far FUN_132b_1592(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_19c7_4e0a(*(int *)(param_1 + 2) - *(int *)(param_2 + 2));
  if (iVar1 < param_3) {
    iVar1 = FUN_19c7_4e0a(*(int *)(param_1 + 4) - *(int *)(param_2 + 4));
    if (iVar1 < param_3) {
      iVar1 = FUN_19c7_4e0a(*(int *)(param_1 + 6) - *(int *)(param_2 + 6));
      if (iVar1 < param_3) {
        return 1;
      }
    }
  }
  return 0;
}



/* 132b:15ec FUN_132b_15ec */

undefined2 __cdecl16far FUN_132b_15ec(int param_1,int param_2)

{
  if ((((*(int *)(param_1 + 2) + *(int *)(param_1 + 0x2a) <
         *(int *)(param_2 + 2) - *(int *)(param_2 + 0x2a)) ||
       (*(int *)(param_2 + 2) + *(int *)(param_2 + 0x2a) <
        *(int *)(param_1 + 2) - *(int *)(param_1 + 0x2a))) ||
      (*(int *)(param_1 + 4) + *(int *)(param_1 + 0x2a) <
       *(int *)(param_2 + 4) - *(int *)(param_2 + 0x2a))) ||
     (((*(int *)(param_2 + 4) + *(int *)(param_2 + 0x2a) <
        *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2a) ||
       (*(int *)(param_1 + 6) + *(int *)(param_1 + 0x2a) <
        *(int *)(param_2 + 6) - *(int *)(param_2 + 0x2a))) ||
      (*(int *)(param_2 + 6) + *(int *)(param_2 + 0x2a) <
       *(int *)(param_1 + 6) - *(int *)(param_1 + 0x2a))))) {
    return 0;
  }
  return 1;
}



/* 132b:1672 FUN_132b_1672 */

undefined2 __cdecl16far FUN_132b_1672(int param_1,int param_2)

{
  int iVar1;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 2);
  local_a = iVar1;
  if (iVar1 < local_8) {
    local_a = local_8;
    local_8 = iVar1;
  }
  local_4 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 2);
  local_6 = iVar1;
  if (iVar1 < local_4) {
    local_6 = local_4;
    local_4 = iVar1;
  }
  if ((local_4 - *(int *)(param_2 + 0x2a) <= *(int *)(param_1 + 0x2a) + local_a) &&
     (local_8 - *(int *)(param_1 + 0x2a) <= *(int *)(param_2 + 0x2a) + local_6)) {
    local_8 = *(int *)(param_1 + 10);
    iVar1 = *(int *)(param_1 + 4);
    local_a = iVar1;
    if (iVar1 < local_8) {
      local_a = local_8;
      local_8 = iVar1;
    }
    local_4 = *(int *)(param_2 + 10);
    iVar1 = *(int *)(param_2 + 4);
    local_6 = iVar1;
    if (iVar1 < local_4) {
      local_6 = local_4;
      local_4 = iVar1;
    }
    if ((local_4 - *(int *)(param_2 + 0x2a) <= *(int *)(param_1 + 0x2a) + local_a) &&
       (local_8 - *(int *)(param_1 + 0x2a) <= *(int *)(param_2 + 0x2a) + local_6)) {
      local_8 = *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(param_1 + 6);
      local_a = iVar1;
      if (iVar1 < local_8) {
        local_a = local_8;
        local_8 = iVar1;
      }
      local_4 = *(int *)(param_2 + 0xc);
      iVar1 = *(int *)(param_2 + 6);
      local_6 = iVar1;
      if (iVar1 < local_4) {
        local_6 = local_4;
        local_4 = iVar1;
      }
      if ((local_4 - *(int *)(param_2 + 0x2a) <= *(int *)(param_1 + 0x2a) + local_a) &&
         (local_8 - *(int *)(param_1 + 0x2a) <= *(int *)(param_2 + 0x2a) + local_6)) {
        return 1;
      }
    }
  }
  return 0;
}



/* 132b:17b4 FUN_132b_17b4 */

uint __cdecl16far FUN_132b_17b4(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_22;
  int local_20;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_4;
  
  uVar2 = *(int *)(param_2 + 0x2a) + *(int *)(param_1 + 0x2a);
  uVar3 = ((*(uint *)(param_1 + 0x14) - *(uint *)(param_2 + 0x14) &
           ~-(uint)(*(uint *)(param_1 + 0x14) < *(uint *)(param_2 + 0x14))) +
          *(int *)(param_2 + 0x14)) / uVar2;
  bVar1 = FUN_14b9_04a8(uVar3);
  local_20 = *(int *)(param_2 + 2);
  local_22 = *(int *)(param_2 + 4);
  local_4 = *(int *)(param_2 + 6);
  local_e = *(int *)(param_1 + 2);
  local_10 = *(int *)(param_1 + 4);
  local_12 = *(int *)(param_1 + 6);
  iVar4 = local_20 - *(int *)(param_2 + 8);
  iVar5 = local_22 - *(int *)(param_2 + 10);
  iVar6 = local_4 - *(int *)(param_2 + 0xc);
  iVar7 = local_e - *(int *)(param_1 + 8);
  iVar8 = local_10 - *(int *)(param_1 + 10);
  iVar9 = local_12 - *(int *)(param_1 + 0xc);
  local_14 = 0;
  while( true ) {
    if ((int)uVar3 < local_14) {
      return uVar3;
    }
    if (((((int)(local_20 - uVar2) < local_e) && (local_e < (int)(local_20 + uVar2))) &&
        ((int)(local_22 - uVar2) < local_10)) &&
       (((local_10 < (int)(local_22 + uVar2) && ((int)(local_4 - uVar2) < local_12)) &&
        (local_12 < (int)(local_4 + uVar2))))) break;
    local_e = local_e + (iVar7 >> (bVar1 & 0x1f));
    local_10 = local_10 + (iVar8 >> (bVar1 & 0x1f));
    local_12 = local_12 + (iVar9 >> (bVar1 & 0x1f));
    local_20 = local_20 + (iVar4 >> (bVar1 & 0x1f));
    local_22 = local_22 + (iVar5 >> (bVar1 & 0x1f));
    local_4 = local_4 + (iVar6 >> (bVar1 & 0x1f));
    local_14 = local_14 + 1;
  }
  return 1;
}



/* 14b9:0004 FUN_14b9_0004 */

int __cdecl16far FUN_14b9_0004(int param_1,int param_2,int param_3)

{
  if (param_1 <= param_3) {
    if (param_2 <= param_1) {
      return param_1;
    }
    if (-0x4000 < param_1) {
      return param_2;
    }
  }
  return param_3;
}



/* 14b9:002e FUN_14b9_002e */

int __cdecl16far FUN_14b9_002e(int param_1,int param_2,int param_3)

{
  if ((param_1 <= param_3) && (param_3 = param_2, param_2 <= param_1)) {
    param_3 = param_1;
  }
  return param_3;
}



/* 14b9:0046 FUN_14b9_0046 */

uint __cdecl16far FUN_14b9_0046(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_6;
  
  uVar1 = FUN_19c7_4e0a(param_1);
  uVar2 = FUN_19c7_4e0a(param_2);
  if ((int)uVar2 < (int)uVar1) {
    uVar3 = uVar2;
    uVar2 = uVar1;
  }
  else {
    uVar3 = uVar1;
  }
  local_6 = ((int)uVar3 >> 1) + uVar2;
  iVar4 = ((int)uVar3 >> 0xf) + ((int)uVar2 >> 0xf) + (uint)CARRY2((int)uVar3 >> 1,uVar2);
  if ((-1 < iVar4) && ((0 < iVar4 || (0x7fff < local_6)))) {
    local_6 = 0x7fff;
  }
  return local_6;
}



/* 14b9:00ac FUN_14b9_00ac */

int __cdecl16far FUN_14b9_00ac(int param_1,int param_2)

{
  uint uVar1;
  uint3 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int local_c;
  int local_a;
  uint local_8;
  
  if (param_1 == 0) {
    if (param_2 < 1) {
      return -0x8000;
    }
    return 0;
  }
  if (param_2 == 0) {
    if (param_1 < 1) {
      return -0x4000;
    }
    return 0x4000;
  }
  iVar4 = FUN_19c7_4e0a(param_2);
  iVar5 = FUN_19c7_4e0a(param_1);
  if (iVar4 < iVar5) {
    local_a = FUN_19c7_4e0a(param_2);
    local_8 = local_a >> 0xf;
    cVar6 = '\x0e';
    do {
      bVar8 = local_a < 0;
      local_a = local_a << 1;
      local_8 = local_8 << 1 | (uint)bVar8;
      cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    local_c = FUN_19c7_4e0a(param_1);
    bVar8 = true;
  }
  else {
    local_a = FUN_19c7_4e0a(param_1);
    local_8 = local_a >> 0xf;
    cVar6 = '\x0e';
    do {
      bVar8 = local_a < 0;
      local_a = local_a << 1;
      local_8 = local_8 << 1 | (uint)bVar8;
      cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    local_c = FUN_19c7_4e0a(param_2);
    bVar8 = false;
  }
  iVar4 = FUN_19c7_4f62(local_a,local_8,local_c,local_c >> 0xf);
  iVar7 = iVar4 >> 0xf;
  uVar11 = 0;
  uVar10 = 0xb00;
  iVar5 = FUN_19c7_4e0a(0x1333 - iVar4,0xb00,0,iVar4,iVar7);
  uVar9 = FUN_19c7_4ffe(iVar5,iVar5 >> 0xf,uVar10,uVar11);
  cVar6 = '\x0e';
  do {
    iVar5 = (int)((long)uVar9 >> 0x11);
    uVar1 = (uint)(CONCAT12((uVar9 & 0x10000) != 0,(int)uVar9) >> 1);
    uVar9 = CONCAT22(iVar5,uVar1);
    cVar6 = cVar6 + -1;
  } while (cVar6 != '\0');
  uVar9 = FUN_19c7_4ffe(-(uVar1 + 0xd800),
                        -((iVar5 - (uint)(uVar1 < 0x2800)) + (uint)(uVar1 + 0xd800 != 0)),iVar4,
                        iVar7);
  cVar6 = '\x0e';
  do {
    uVar2 = CONCAT12((uVar9 & 0x10000) != 0,(int)uVar9) >> 1;
    iVar4 = (int)uVar2;
    uVar9 = CONCAT22((int)((long)uVar9 >> 0x11),iVar4);
    cVar6 = cVar6 + -1;
  } while (cVar6 != '\0');
  uVar3 = (undefined1)uVar2;
  cVar6 = (char)(uVar2 >> 8);
  if (param_1 < 1) {
    if (0 < param_2) {
      if (bVar8) {
        return CONCAT11(cVar6 + -0x40,uVar3);
      }
      return -iVar4;
    }
    if (!bVar8) {
      return CONCAT11(cVar6 + -0x80,uVar3);
    }
    iVar5 = -0x4000;
  }
  else if (param_2 < 1) {
    if (bVar8) {
      return CONCAT11(cVar6 + '@',uVar3);
    }
    iVar5 = -0x8000;
  }
  else {
    if (!bVar8) {
      return iVar4;
    }
    iVar5 = 0x4000;
  }
  return iVar5 - iVar4;
}



/* 14b9:0230 FUN_14b9_0230 */

void __cdecl16far FUN_14b9_0230(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1ed2_007e(param_1,param_2);
  FUN_1ed2_0008(uVar1);
  return;
}



/* 14b9:024c FUN_14b9_024c */

void __cdecl16far FUN_14b9_024c(undefined2 param_1,undefined2 param_2)

{
  FUN_14b9_0230(CONCAT11((char)((uint)param_1 >> 8) + '@',(char)param_1),param_2);
  return;
}



/* 14b9:0262 FUN_14b9_0262 */

void __cdecl16far FUN_14b9_0262(byte param_1)

{
  if (param_1 < 0x80) {
    return;
  }
  return;
}



/* 14b9:0284 FUN_14b9_0284 */

undefined2 __cdecl16far FUN_14b9_0284(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 1) {
    return 0xffff;
  }
  return 1;
}



/* 14b9:02b2 FUN_14b9_02b2 */

undefined2 __cdecl16far FUN_14b9_02b2(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = param_1 >> 0xf;
  iVar2 = FUN_19c7_4e32(param_1,iVar4);
  uVar5 = FUN_19c7_4ffe(iVar2,iVar2 >> 0xf,param_1,iVar4);
  cVar3 = '\x0f';
  do {
    uVar1 = (undefined2)(CONCAT12((uVar5 & 0x10000) != 0,(int)uVar5) >> 1);
    uVar5 = CONCAT22((int)((long)uVar5 >> 0x11),uVar1);
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  return uVar1;
}



/* 14b9:02d4 FUN_14b9_02d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_14b9_02d4(undefined2 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _DAT_2a22_d9d6 = *param_2;
  _DAT_2a22_d9da = *param_3;
  _DAT_2a22_d9d8 = *param_4;
  iVar1 = FUN_1ed2_0008(_DAT_2a22_d9da,param_1[6]);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_d9d8,param_1[3]);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_d9d6,*param_1);
  *param_2 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(_DAT_2a22_d9da,param_1[7]);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_d9d8,param_1[4]);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_d9d6,param_1[1]);
  *param_3 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(_DAT_2a22_d9da,param_1[8]);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_d9d8,param_1[5]);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_d9d6,param_1[2]);
  *param_4 = iVar3 + iVar2 + iVar1;
  return;
}



/* 14b9:03be FUN_14b9_03be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_14b9_03be(undefined2 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _DAT_2a22_d9dc = *param_2;
  _DAT_2a22_d9e0 = *param_3;
  _DAT_2a22_d9de = *param_4;
  iVar1 = FUN_1ed2_0008(_DAT_2a22_d9e0,param_1[2]);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_d9de,param_1[1]);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_d9dc,*param_1);
  *param_2 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(_DAT_2a22_d9e0,param_1[5]);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_d9de,param_1[4]);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_d9dc,param_1[3]);
  *param_4 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(_DAT_2a22_d9e0,param_1[8]);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_d9de,param_1[7]);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_d9dc,param_1[6]);
  *param_3 = iVar3 + iVar2 + iVar1;
  return;
}



/* 14b9:04a8 FUN_14b9_04a8 */

int __cdecl16far FUN_14b9_04a8(uint param_1)

{
  int unaff_SI;
  
  for (param_1 = param_1 - 1; param_1 != 0; param_1 = param_1 >> 1) {
    unaff_SI = unaff_SI + 1;
  }
  return unaff_SI;
}



/* 1505:0006 FUN_1505_0006 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_0006(void)

{
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    _DAT_2a22_4a7e = 5;
    _DAT_2a22_4a80 = 3;
    _DAT_2a22_4a82 = 3;
    return;
  }
  if (DAT_2a22_e326 != DAT_2a22_46f4) {
    _DAT_2a22_4a7e = 8;
    _DAT_2a22_4a80 = 0xc;
    _DAT_2a22_4a82 = 4;
  }
  return;
}



/* 1505:00dc FUN_1505_00dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_00dc(void)

{
  int local_4;
  
  if (_DAT_3000_aaa2 == 0) {
    local_4 = 0;
    do {
      FUN_1505_0228((uint)(((undefined *)&DAT_2a22_97fa)[local_4] != '\0') +
                    (char)((undefined *)&DAT_2a22_9812)[local_4] * 2,
                    (int)(char)((undefined *)&DAT_2a22_9806)[local_4],local_4 * 8 + 0x78c);
      local_4 = local_4 + 1;
    } while (local_4 < 0xc);
    local_4 = 0;
    do {
      FUN_1505_0228((uint)(((undefined *)&DAT_2a22_986e)[local_4] != '\0') +
                    (char)((undefined *)&DAT_2a22_987c)[local_4] * 2,
                    (int)(char)((undefined *)&DAT_2a22_9875)[local_4],local_4 * 8 + 0x754);
      local_4 = local_4 + 1;
    } while (local_4 < 7);
    local_4 = 0;
    do {
      FUN_1505_0228((uint)(((undefined *)&DAT_2a22_97dc)[local_4] != '\0') +
                    (char)((undefined *)&DAT_2a22_97f0)[local_4] * 2,
                    (int)(char)((undefined *)&DAT_2a22_97e6)[local_4],local_4 * 8 + 0x704);
      local_4 = local_4 + 1;
    } while (local_4 < 10);
    local_4 = 0;
    do {
      FUN_1505_0228((uint)(((undefined *)&DAT_2a22_981e)[local_4] != '\0') +
                    (char)((undefined *)&DAT_2a22_9838)[local_4] * 2,
                    (int)(char)((undefined *)&DAT_2a22_982b)[local_4],local_4 * 8 + 0x69c);
      local_4 = local_4 + 1;
    } while (local_4 < 0xd);
    for (local_4 = 0; local_4 < 0xd; local_4 = local_4 + 1) {
      FUN_1505_0228((uint)(((undefined *)&DAT_2a22_9846)[local_4] != '\0') +
                    (char)((undefined *)&DAT_2a22_9860)[local_4] * 2,
                    (int)(char)((undefined *)&DAT_2a22_9853)[local_4],local_4 * 8 + 0x634);
    }
  }
  else if (1 < _DAT_3000_aaa2) {
    FUN_1505_1488();
  }
  return;
}



/* 1505:0228 FUN_1505_0228 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_0228(uint param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined1 local_4;
  
  if (param_1 == 0) {
    uVar1 = _DAT_2a22_4a7e;
  }
  else if (param_1 == 1) {
    if (param_2 == 0) {
      uVar1 = _DAT_2a22_4a82;
    }
    else {
      uVar1 = _DAT_2a22_4a80;
    }
  }
  else {
    uVar1 = 0xd;
  }
  if (param_1 != *(byte *)((int)param_3 + 7)) {
    thunk_EXT_FUN_0000_0000
              (0x1505,_DAT_2a22_4a4e,*param_3,param_3[1],*(undefined1 *)(param_3 + 2),
               *(undefined1 *)((int)param_3 + 5),(uint)*(byte *)((int)param_3 + 7),uVar1);
    thunk_EXT_FUN_0000_0000
              (0x1eea,_DAT_2a22_bd5e,*param_3,param_3[1],*(undefined1 *)(param_3 + 2),
               *(undefined1 *)((int)param_3 + 5),*(undefined1 *)((int)param_3 + 7),uVar1);
    local_4 = (undefined1)uVar1;
    *(undefined1 *)((int)param_3 + 7) = local_4;
  }
  return;
}



/* 1505:02b8 FUN_1505_02b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_02b8(void)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (1 < local_4) {
      return;
    }
    _DAT_2a22_4a64 = _DAT_2a22_bd60;
    FUN_1eea_0b5a(_DAT_2a22_bd5e,0x57,0x78,0xe7,0x78,0);
    if (DAT_2a22_e326 == DAT_2a22_46f4) break;
    thunk_EXT_FUN_0000_0000(0x1eea,0x338,0x3c,0x7c,100,0x4b,_DAT_2a22_4a76,0,0);
    _DAT_2a22_4a50 = _DAT_2a22_bd4c;
    if (_DAT_3000_aaa2 == 0) {
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_4a62,0,0,_DAT_3000_ab3b);
      }
      thunk_EXT_FUN_0000_0000(0x1eea,0x338,0xa1,0x7c,100,0x4b,0x600,0,0);
    }
    else if (_DAT_3000_aaa2 != 1) {
      FUN_1eea_0574(0x600,0,0,_DAT_2a22_4a56 + 1,_DAT_2a22_4a58 + 1,0);
    }
    iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,0);
    if (iVar1 == 0) {
      local_4 = local_4 + 1;
    }
    else {
      _DAT_2a22_bd60 = _DAT_2a22_bd60 ^ 1;
      _DAT_2a22_bd4c = _DAT_2a22_bd4c ^ 1;
    }
    local_4 = local_4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_4a76,0,0,_DAT_3000_ab39);
}



/* 1505:03d4 FUN_1505_03d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_03d4(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  _DAT_2a22_4a64 = _DAT_2a22_bd60;
  _DAT_3000_aac9 = (int *)((undefined *)&DAT_3000_a39a + _DAT_3000_aad1 * 0x3c);
  FUN_1eea_0b5a(_DAT_2a22_bd5e,0x57,0x78,0xe7,0x78,0);
  if (_DAT_3000_aad1 != 0) {
    FUN_1505_05e8();
  }
  if (_DAT_2a22_bd78 < 3) {
    if (_DAT_3000_ab25 == 0) {
      return;
    }
    _DAT_3000_ab25 = _DAT_3000_ab25 + -1;
    if (_DAT_3000_ab25 == 0) {
      thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_4a4e,0x3c,0x7c,100,0x4b,_DAT_2a22_4a76,0,0);
      return;
    }
  }
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_4a76,0,0,_DAT_3000_ab39);
  }
  thunk_EXT_FUN_0000_0000(0x1eea,0x338,0x3c,0x7c,100,0x4b,_DAT_2a22_4a76,0,0);
  if (_DAT_3000_aad1 != 0) {
    FUN_1897_01ac(_DAT_2a22_4a76,0,-_DAT_2a22_4c3c,0,0,0,0,0);
    iVar1 = *(int *)((undefined *)&DAT_3000_a3c4 + _DAT_3000_aad1 * 0x3c) << 2;
    uVar2 = FUN_1ed2_007e(_DAT_2a22_4c3c);
    iVar3 = FUN_1ed2_0008(iVar1,uVar2);
    uVar2 = FUN_1ed2_006e(_DAT_2a22_4c3c);
    uVar2 = FUN_1ed2_0008(iVar1,uVar2);
    FUN_1ed2_007e(_DAT_2a22_4a78);
    FUN_1ed2_006e(_DAT_2a22_4a78);
    iVar1 = _DAT_3000_aad1 * 0x3c;
    _DAT_3000_aac9 = (int *)((undefined *)&DAT_3000_a39a + iVar1);
    if (*(int *)((undefined *)&DAT_3000_a3cc + iVar1) == -0x8000) {
      if (6 < *(int *)((undefined *)&DAT_3000_a3c2 + iVar1)) {
        *(undefined2 *)((undefined *)&DAT_3000_a3c2 + iVar1) = 6;
      }
      *_DAT_3000_aac9 = _DAT_3000_aac9[0x14] + 6;
    }
    if (2 < *(byte *)(_DAT_3000_aac9 + 0x19)) {
      uVar4 = (uint)*(byte *)(_DAT_3000_aac9 + 0x1c);
      local_8 = 1;
      do {
        *(uint *)(local_8 * 2 + -0x3b8b) = uVar4 & 1;
        uVar4 = (int)uVar4 >> 1;
        local_8 = local_8 + 1;
      } while (local_8 < 9);
    }
    if (_DAT_2a22_bd78 < 3) {
      _DAT_3000_aae3 = 0;
    }
    else {
      _DAT_3000_aae3 = (int)*(char *)((int)_DAT_3000_aac9 + 0x39);
    }
    if (DAT_2a22_e326 != DAT_2a22_46f4) {
      _DAT_2a22_7c40 = 1;
    }
    if ((char)_DAT_3000_aac9[0x19] == '\x06') {
      iVar1 = -0x8000;
    }
    else {
      iVar1 = _DAT_2a22_4a78;
    }
    FUN_1897_03b6(*_DAT_3000_aac9,iVar1,0,0,0,uVar2,-iVar3);
    _DAT_2a22_4a78 = _DAT_2a22_4a78 + _DAT_2a22_face * 0x80;
  }
  return;
}



/* 1505:05e8 FUN_1505_05e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_05e8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(_DAT_3000_aac9 + 0x30) >> 5;
  iVar2 = iVar1 + 5;
  iVar3 = *(int *)(_DAT_3000_aac9 + 0x30) - (*(int *)(_DAT_3000_aac9 + 0x2c) >> 1);
  if (iVar3 < 0x191) {
    iVar3 = (iVar2 * iVar3) / *(int *)(_DAT_3000_aac9 + 0x30);
  }
  else {
    iVar3 = ((iVar3 >> 3) * iVar2) / (*(int *)(_DAT_3000_aac9 + 0x30) >> 3);
  }
  if (-1 < iVar3) {
    FUN_1eea_0b5a(_DAT_2a22_bd5e,0xa0 - iVar2,0x78,iVar1 + 0xa4,0x78,0xd,iVar3);
    FUN_1eea_0b5a(_DAT_2a22_bd5e,0xa0 - iVar3,0x78,iVar3 + 0x9f,0x78,4);
  }
  return;
}



/* 1505:068a FUN_1505_068a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_068a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_6;
  undefined *local_4;
  
  _DAT_2a22_4a50 = _DAT_2a22_bd4c;
  _DAT_2a22_4a5c = 2;
  _DAT_2a22_4a5e = 2;
  if (_DAT_3000_aaa2 == 0) {
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x1505,_DAT_2a22_4a62,0,0,_DAT_3000_ab3b);
    }
    thunk_EXT_FUN_0000_0000(0x1505,0x338,0xa1,0x7c,100,0x4b,0x600,0,0);
  }
  else if (_DAT_3000_aaa2 != 1) {
    FUN_1eea_0574(0x600,0,0,_DAT_2a22_4a56 + 1,_DAT_2a22_4a58 + 1,0);
  }
  _DAT_2a22_da32 = _DAT_2a22_4a56 >> 1;
  _DAT_2a22_da34 = _DAT_2a22_4a58 >> 1;
  if (_DAT_3000_ab29 == 8) {
    FUN_1505_0c52(0x28,10,_DAT_2a22_da32,_DAT_2a22_da34 + 4);
    iVar1 = _DAT_2a22_da34 + 1;
    uVar3 = 4;
    uVar2 = 0x10;
  }
  else if (_DAT_3000_ab29 == 7) {
    FUN_1505_0c52(0x2c,0xb,_DAT_2a22_da32,_DAT_2a22_da34 + 4);
    FUN_1505_0c52(0x14,5,_DAT_2a22_da32,_DAT_2a22_da34 + 2);
    iVar1 = _DAT_2a22_da34 + 1;
    uVar3 = 2;
    uVar2 = 8;
  }
  else {
    FUN_1505_0c52(0x30,0xc,_DAT_2a22_da32,_DAT_2a22_da34 + 4);
    iVar1 = _DAT_2a22_da34 + 2;
    uVar3 = 6;
    uVar2 = 0x18;
  }
  FUN_1505_0c52(uVar2,uVar3,_DAT_2a22_da32,iVar1);
  FUN_1eea_0b9f(0x600,_DAT_2a22_da32,_DAT_2a22_da34,2);
  iVar1 = _DAT_3000_aaa2 * 0x3c;
  FUN_1897_0502((undefined *)&DAT_2a22_d9e2,*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1),
                -*(int *)((undefined *)&DAT_3000_a3b2 + iVar1),
                -*(int *)((undefined *)&DAT_3000_a3b4 + iVar1));
  _DAT_2a22_da28 = 0x1000;
  local_4 = (undefined *)&DAT_3000_a39a;
  for (local_6 = 0; local_6 < _DAT_3000_aaa8; local_6 = local_6 + 1) {
    if ((((*(int *)(local_4 + 0x32) != 0) && (local_4[0x32] != '\a')) && (local_4[0x32] != -0x80))
       && (local_6 != _DAT_3000_aaa2)) {
      iVar1 = _DAT_3000_aaa2 * 0x3c;
      FUN_1505_0886(*(int *)(local_4 + 2) - *(int *)((undefined *)&DAT_3000_a39c + iVar1),
                    *(int *)(local_4 + 4) - *(int *)((undefined *)&DAT_3000_a39e + iVar1),
                    *(int *)(local_4 + 6) - *(int *)((undefined *)&DAT_3000_a3a0 + iVar1),local_6,
                    local_4);
    }
    local_4 = local_4 + 0x3c;
  }
  return;
}



/* 1505:0886 FUN_1505_0886 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1505_0886(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int in_DX;
  int iVar8;
  int iVar9;
  
  _DAT_2a22_d9f8 = param_1;
  _DAT_2a22_da0c = param_2;
  _DAT_2a22_da02 = param_3;
  uVar2 = FUN_1edc_000e(param_3,param_2,0,0);
  iVar3 = FUN_1edc_000e(_DAT_2a22_d9f8,uVar2);
  if (*(int *)(_DAT_3000_ab29 * 2 + 0x7fe) < iVar3) {
    return;
  }
  uVar4 = FUN_1ed2_001e(_DAT_2a22_da0c,_DAT_2a22_d9ee);
  iVar3 = in_DX;
  uVar5 = FUN_1ed2_001e(_DAT_2a22_da02,_DAT_2a22_d9e8);
  iVar9 = iVar3;
  uVar6 = FUN_1ed2_001e(_DAT_2a22_d9f8,_DAT_2a22_d9e2);
  _DAT_2a22_d9fa = uVar6 + uVar5 + uVar4;
  iVar8 = iVar9 + iVar3 + (uint)CARRY2(uVar6,uVar5) + in_DX + (uint)CARRY2(uVar6 + uVar5,uVar4);
  _DAT_2a22_d9fc = iVar8;
  uVar4 = FUN_1ed2_001e(_DAT_2a22_da0c,_DAT_2a22_d9f0);
  iVar3 = iVar8;
  uVar5 = FUN_1ed2_001e(_DAT_2a22_da02,_DAT_2a22_d9ea);
  iVar9 = iVar3;
  uVar6 = FUN_1ed2_001e(_DAT_2a22_d9f8,_DAT_2a22_d9e4);
  _DAT_2a22_da04 = uVar6 + uVar5 + uVar4;
  iVar8 = iVar9 + iVar3 + (uint)CARRY2(uVar6,uVar5) + iVar8 + (uint)CARRY2(uVar6 + uVar5,uVar4);
  _DAT_2a22_da06 = iVar8;
  uVar4 = FUN_1ed2_001e(_DAT_2a22_da0c,_DAT_2a22_d9f2);
  iVar3 = iVar8;
  uVar5 = FUN_1ed2_001e(_DAT_2a22_da02,_DAT_2a22_d9ec);
  iVar9 = iVar3;
  uVar6 = FUN_1ed2_001e(_DAT_2a22_d9f8,_DAT_2a22_d9e6);
  _DAT_2a22_da0e = uVar6 + uVar5 + uVar4;
  iVar9 = iVar9 + iVar3 + (uint)CARRY2(uVar6,uVar5) + iVar8 + (uint)CARRY2(uVar6 + uVar5,uVar4);
  _DAT_2a22_da10 = iVar9;
  _DAT_2a22_da26 = iVar9;
  uVar2 = FUN_1ed2_007e(_DAT_2a22_4c3c);
  _DAT_2a22_da08 = FUN_1ed2_001e(_DAT_2a22_da26,uVar2);
  _DAT_2a22_da0a = iVar9;
  uVar2 = FUN_1ed2_007e(_DAT_2a22_4c3c);
  uVar4 = FUN_1ed2_001e(_DAT_2a22_da26,uVar2);
  iVar3 = iVar9;
  uVar2 = FUN_1ed2_006e(_DAT_2a22_4c3c);
  uVar5 = FUN_1ed2_001e(_DAT_2a22_da06,uVar2);
  _DAT_2a22_da04 = uVar5 + uVar4;
  _DAT_2a22_da06 = iVar3 + iVar9 + (uint)CARRY2(uVar5,uVar4);
  _DAT_2a22_d9f4 = _DAT_2a22_4a56 >> 1;
  _DAT_2a22_d9f6 = _DAT_2a22_4a58 >> 1;
  _DAT_2a22_da16 = (_DAT_2a22_d9fc >> (DAT_3000_ab29 & 0x1f)) + _DAT_2a22_d9f4;
  _DAT_2a22_da18 = _DAT_2a22_da16 >> 0xf;
  _DAT_2a22_da1e = -_DAT_2a22_da06 >> ((0 < _DAT_2a22_da06) + DAT_3000_ab29 & 0x1f);
  if (_DAT_2a22_da1e < 1) {
    uVar2 = 10;
  }
  else {
    uVar2 = 2;
  }
  _DAT_2a22_da1e = _DAT_2a22_da1e - ((_DAT_2a22_da1e >> 2) - _DAT_2a22_d9f6);
  _DAT_2a22_da20 = _DAT_2a22_da1e >> 0xf;
  _DAT_2a22_da22 = -_DAT_2a22_da0a >> ((0 < _DAT_2a22_da0a) + DAT_3000_ab29 & 0x1f);
  _DAT_2a22_da22 = _DAT_2a22_da22 - ((_DAT_2a22_da22 >> 2) - _DAT_2a22_d9f6);
  _DAT_2a22_da24 = _DAT_2a22_da22 >> 0xf;
  _DAT_2a22_da1a = _DAT_2a22_da16;
  _DAT_2a22_da1c = _DAT_2a22_da18;
  if (*(char *)(param_5 + 0x32) == '\x01') {
    uVar2 = 9;
  }
  else {
    FUN_1eea_0b5a(0x600,_DAT_2a22_da16,_DAT_2a22_da1e,_DAT_2a22_da16,_DAT_2a22_da22,uVar2);
    cVar1 = *(char *)(param_5 + 0x32);
    if (cVar1 == '\x02') {
      if (DAT_2a22_e326 == DAT_2a22_46f1) {
        uVar2 = 5;
      }
      else {
        uVar2 = 0xd;
      }
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x04') {
          if (cVar1 != '\x05') {
            if (cVar1 != '\x06') goto LAB_1505_0b90;
            FUN_1eea_0b9f(0x600,_DAT_2a22_da16 + 1,_DAT_2a22_da1e + -1,0xf);
          }
          FUN_1eea_0b9f(0x600,_DAT_2a22_da16,_DAT_2a22_da1e + -1,0xf);
        }
        FUN_1eea_0b9f(0x600,_DAT_2a22_da16 + 1,_DAT_2a22_da1e,0xf);
      }
      uVar2 = 0xf;
    }
  }
  FUN_1eea_0b9f(0x600,_DAT_2a22_da16,_DAT_2a22_da1e,uVar2);
LAB_1505_0b90:
  if (param_4 == _DAT_3000_aad1) {
    iVar3 = _DAT_2a22_da16 + -2;
    iVar9 = *(int *)((uint)*(byte *)(param_5 + 0x32) * 2 + 0x7ee) + _DAT_2a22_da16 + 2;
    iVar8 = _DAT_2a22_da1e + 2;
    iVar7 = (_DAT_2a22_da1e - *(int *)((uint)*(byte *)(param_5 + 0x32) * 2 + 0x7fc)) + -2;
    FUN_1eea_0b5a(0x600,iVar3,iVar7,iVar9,iVar7,0xf);
    FUN_1eea_0b5a(0x600,iVar9,iVar7,iVar9,iVar8,0xf);
    FUN_1eea_0b5a(0x600,iVar9,iVar8,iVar3,iVar8,0xf);
    FUN_1eea_0b5a(0x600,iVar3,iVar8,iVar3,iVar7,0xf);
  }
  return;
}



/* 1505:0c52 FUN_1505_0c52 */

void __cdecl16far FUN_1505_0c52(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int local_14;
  int local_12;
  
  local_12 = 0;
  local_14 = param_2;
  iVar10 = param_1 >> 0xf;
  lVar14 = FUN_19c7_4ffe(param_1,iVar10,param_1,iVar10);
  iVar7 = (int)((ulong)lVar14 >> 0x10);
  uVar13 = (uint)lVar14;
  iVar11 = param_2 >> 0xf;
  lVar15 = FUN_19c7_4ffe(param_2,iVar11,param_2,iVar11);
  iVar8 = (int)((ulong)lVar15 >> 0x10);
  uVar5 = (uint)lVar15;
  cVar9 = '\x02';
  lVar19 = lVar14;
  do {
    iVar6 = (int)lVar19 * 2;
    uVar12 = (int)((ulong)lVar19 >> 0x10) << 1 | (uint)((int)lVar19 < 0);
    lVar19 = CONCAT22(uVar12,iVar6);
    cVar9 = cVar9 + -1;
  } while (cVar9 != '\0');
  lVar4 = CONCAT22(((iVar7 << 1 | (uint)((int)uVar13 < 0)) + iVar7 + (uint)CARRY2(uVar13 * 2,uVar13)
                   ) * 2 | (uint)((int)(uVar13 * 3) < 0),uVar13 * 6);
  cVar9 = '\x02';
  lVar1 = lVar15;
  do {
    iVar7 = (int)lVar1 * 2;
    uVar13 = (int)((ulong)lVar1 >> 0x10) << 1 | (uint)((int)lVar1 < 0);
    lVar1 = CONCAT22(uVar13,iVar7);
    cVar9 = cVar9 + -1;
  } while (cVar9 != '\0');
  lVar2 = CONCAT22(((iVar8 << 1 | (uint)((int)uVar5 < 0)) + iVar8 + (uint)CARRY2(uVar5 * 2,uVar5)) *
                   2 | (uint)((int)(uVar5 * 3) < 0),uVar5 * 6);
  iVar8 = FUN_1edc_0099(lVar14 + lVar15);
  iVar8 = FUN_19c7_4f62(lVar14,iVar8,iVar8 >> 0xf);
  uVar16 = FUN_19c7_4ffe(param_2,iVar11,lVar14);
  lVar3 = lVar15 + CONCAT22(-((int)((ulong)uVar16 >> 0x10) + (uint)((int)uVar16 != 0)),-(int)uVar16)
  ;
  iVar11 = (int)lVar3;
  lVar3 = lVar14 + CONCAT22((int)((ulong)lVar3 >> 0x10) * 2 | (uint)(iVar11 < 0),iVar11 * 2);
  while (local_12 <= iVar8) {
    FUN_1505_0ecc(local_12,local_14,param_3,param_4);
    if (lVar3 < 0) {
      lVar17 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar3 = lVar17 + lVar2 + lVar3;
      local_12 = local_12 + 1;
    }
    else {
      lVar17 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar18 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar3 = (lVar18 - lVar17) + lVar2 + lVar19 + lVar3;
      local_12 = local_12 + 1;
      local_14 = local_14 + -1;
    }
  }
  local_12 = param_1;
  local_14 = 0;
  iVar11 = FUN_1edc_0099(lVar15 + lVar14);
  iVar11 = FUN_19c7_4f62(lVar15,iVar11,iVar11 >> 0xf);
  uVar16 = FUN_19c7_4ffe(param_1,iVar10,lVar15);
  lVar14 = lVar14 + CONCAT22(-((int)((ulong)uVar16 >> 0x10) + (uint)((int)uVar16 != 0)),-(int)uVar16
                            );
  iVar10 = (int)lVar14;
  lVar15 = lVar15 + CONCAT22((int)((ulong)lVar14 >> 0x10) * 2 | (uint)(iVar10 < 0),iVar10 * 2);
  while (local_14 <= iVar11) {
    FUN_1505_0ecc(local_12,local_14,param_3,param_4);
    if (lVar15 < 0) {
      lVar19 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar15 = lVar19 + lVar4 + lVar15;
      local_14 = local_14 + 1;
    }
    else {
      lVar19 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar14 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar15 = (lVar14 - lVar19) + lVar4 + lVar1 + lVar15;
      local_14 = local_14 + 1;
      local_12 = local_12 + -1;
    }
  }
  return;
}



/* 1505:0ecc FUN_1505_0ecc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_0ecc(int param_1,int param_2,int param_3,int param_4)

{
  FUN_1eea_0b9f(_DAT_2a22_4a62,param_3 + param_1,param_4 + param_2,
                *(undefined2 *)(_DAT_2a22_4a62 + 0xc));
  if (param_1 != 0) {
    FUN_1eea_0b9f(_DAT_2a22_4a62,param_3 - param_1,param_4 + param_2,
                  *(undefined2 *)(_DAT_2a22_4a62 + 0xc));
  }
  if (param_2 != 0) {
    FUN_1eea_0b9f(_DAT_2a22_4a62,param_3 + param_1,param_4 - param_2,
                  *(undefined2 *)(_DAT_2a22_4a62 + 0xc));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_1eea_0b9f(_DAT_2a22_4a62,param_3 - param_1,param_4 - param_2,
                  *(undefined2 *)(_DAT_2a22_4a62 + 0xc));
  }
  return;
}



/* 1505:0f62 FUN_1505_0f62 */

void __cdecl16far
FUN_1505_0f62(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,param_3);
  uVar1 = FUN_19c7_48e8(param_4,0xa176,10);
  FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar1);
  FUN_1505_0fa4(param_1,param_2);
  return;
}



/* 1505:0fa4 FUN_1505_0fa4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_0fa4(undefined2 param_1,undefined2 param_2)

{
  thunk_EXT_FUN_0000_0000(0x1505,_DAT_2a22_bd5e,param_1,param_2,(undefined *)&DAT_2a22_f1ba);
  return;
}



/* 1505:0fc0 FUN_1505_0fc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_0fc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(_DAT_2a22_bd72 + 6) + 1 >> 1;
  iVar2 = iVar1 + -1;
  iVar3 = *(int *)(_DAT_2a22_bd72 + 8) + 1 >> 1;
  iVar4 = iVar3 + -1;
  if (_DAT_2a22_4cc4 < _DAT_3000_ab27) {
    if (((_DAT_3000_aaa2 == 0) || (-1 < _DAT_3000_ab2b)) && ((DAT_2a22_facc & 1) == 0)) {
      return;
    }
    FUN_1eea_0b5a(_DAT_2a22_bd72,iVar1 + -0xb,iVar3 + -0xb,iVar1 + 9,iVar3 + -0xb,7);
    FUN_1eea_0b5a(_DAT_2a22_bd72,iVar1 + 9,iVar3 + -0xb,iVar1 + 9,iVar3 + 9,7);
    FUN_1eea_0b5a(_DAT_2a22_bd72,iVar1 + 9,iVar3 + 9,iVar1 + -0xb,iVar3 + 9,7);
    iVar2 = iVar1 + -0xb;
    iVar1 = iVar3 + -0xb;
  }
  else {
    FUN_1eea_0b5a(_DAT_2a22_bd72,iVar1 + -0xb,iVar4,iVar1 + -5,iVar4,7);
    FUN_1eea_0b5a(_DAT_2a22_bd72,iVar1 + 9,iVar4,iVar1 + 3,iVar4,7);
    FUN_1eea_0b5a(_DAT_2a22_bd72,iVar2,iVar3 + -0xb,iVar2,iVar3 + -5,7);
    iVar1 = iVar3 + 3;
  }
  FUN_1eea_0b5a(_DAT_2a22_bd72,iVar2,iVar3 + 9,iVar2,iVar1,7);
  return;
}



/* 1505:1126 FUN_1505_1126 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_1126(void)

{
  int iVar1;
  int local_6;
  int local_4;
  
  if (_DAT_3000_aad1 != 0) {
    iVar1 = _DAT_3000_aad1 * 0x3c;
    _DAT_3000_aac9 = (undefined *)&DAT_3000_a39a + iVar1;
    FUN_1859_0008(_DAT_2a22_bd72,
                  *(int *)((undefined *)&DAT_3000_a39c + iVar1) - *(int *)(_DAT_3000_aad7 + 2),
                  *(int *)((undefined *)&DAT_3000_a39e + iVar1) - *(int *)(_DAT_3000_aad7 + 4),
                  *(int *)((undefined *)&DAT_3000_a3a0 + iVar1) - *(int *)(_DAT_3000_aad7 + 6),
                  &local_4,&local_6);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1859,_DAT_2a22_bd72,local_4 + -8,local_6 + -5,_DAT_3000_ab33);
  }
  return;
}



/* 1505:11a4 FUN_1505_11a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_11a4(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined2 uVar4;
  bool bVar5;
  
  uVar4 = 0x1505;
  if (1 < _DAT_3000_aaa2) {
    *(undefined2 *)(_DAT_2a22_bd5e + 8) = 0xb4;
    FUN_1eea_0574(_DAT_2a22_bd5e,0xfa,0x8e,0x2b,0x27,0);
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      FUN_1eea_0b5a(_DAT_2a22_bd5e,0x125,0x8e,0x125,0xb4,0x26);
      FUN_1eea_0b5a(_DAT_2a22_bd5e,0x126,0x8e,0x126,0xb4,0x27);
      FUN_1eea_0b5a(_DAT_2a22_bd5e,0x127,0x8e,0x127,0xb4,0x28);
    }
    else {
      FUN_1eea_0574(_DAT_2a22_bd5e,0x125,0x8e,3,0x27,8);
    }
    iVar1 = *(int *)(_DAT_3000_aad7 + 0x30) - *(int *)(_DAT_3000_aad7 + 0x2c) / 2;
    uVar2 = iVar1 >> 0xf;
    cVar3 = '\x05';
    do {
      bVar5 = iVar1 < 0;
      iVar1 = iVar1 << 1;
      uVar2 = uVar2 << 1 | (uint)bVar5;
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
    iVar1 = FUN_19c7_4f62(iVar1,uVar2,*(int *)(_DAT_3000_aad7 + 0x30),
                          *(int *)(_DAT_3000_aad7 + 0x30) >> 0xf);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x19c7,_DAT_2a22_bd5e,0x118,0xb0 - iVar1,_DAT_3000_ab31);
  }
  if (_DAT_3000_aaa2 != 0) {
    return;
  }
  if ((_DAT_2a22_5b2c == 0) && (_DAT_2a22_4a7c != 0)) {
    uVar4 = 0x1951;
    FUN_1951_017a(0x19);
  }
  _DAT_2a22_4a7c = _DAT_2a22_5b2c;
  thunk_EXT_FUN_0000_0000(uVar4,_DAT_2a22_bd5e,0x12f,0x13,0xc,0x15,_DAT_2a22_4a7e,_DAT_2a22_4a80);
  uVar2 = _DAT_2a22_5b2c + 0x1fU >> 5;
  if (0x15 < uVar2) {
    uVar2 = 0x15;
  }
  if (uVar2 != 0) {
    thunk_EXT_FUN_0000_0000
              (0x1eea,_DAT_2a22_bd5e,0x12f,0x13,0xc,uVar2,_DAT_2a22_4a80,_DAT_2a22_4a7e);
  }
  *(undefined2 *)(_DAT_2a22_bd5e + 8) = 99;
  FUN_1eea_0574(_DAT_2a22_bd5e,0x127,0x3d,10,0x27,0);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_bd5e,0x127,
                      (int)(((ulong)(0x36 - _DAT_3000_a3b6) * 0x25 & 0xffff) / 0x36) + 0x3d,
                      _DAT_3000_ab3d);
}



/* 1505:140c FUN_1505_140c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1505_140c(void)

{
  *(undefined2 *)(_DAT_2a22_bd5e + 8) = 100;
  FUN_1eea_0574(_DAT_2a22_bd5e,0x132,0x3d,0xb,0x28,0);
  FUN_1eea_0b5a(_DAT_2a22_bd5e,0x13e,0x3d,0x13e,100,0x81);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_bd5e,0x132,((500 - _DAT_2a22_fac8) * 0x26) / 500 + 0x3d,
                      _DAT_3000_ab3f);
}



/* 1505:1488 FUN_1505_1488 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_1488(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int local_4;
  
  uVar4 = 0x1505;
  for (local_4 = 0; local_4 < 2; local_4 = local_4 + 1) {
    iVar2 = (((int)*(char *)(local_4 + 0x868) - *(int *)((undefined *)&DAT_3000_ab53 + local_4 * 2))
            * (int)*(char *)(local_4 + 0x862)) / (int)*(char *)(local_4 + 0x868);
    uVar3 = uVar4;
    if (0 < iVar2) {
      if (DAT_2a22_e326 == DAT_2a22_46f1) {
        uVar1 = 0xf;
      }
      else {
        uVar1 = 10;
      }
      uVar3 = 0x1eea;
      thunk_EXT_FUN_0000_0000
                (uVar4,_DAT_2a22_bd5e,*(undefined1 *)(local_4 + 0x850),
                 *(undefined1 *)(local_4 + 0x856),(int)*(char *)(local_4 + 0x85c),iVar2,uVar1,0xc);
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        uVar3 = 0x1eea;
        thunk_EXT_FUN_0000_0000
                  (0x1eea,_DAT_2a22_bd5e,*(undefined1 *)(local_4 + 0x850),
                   *(undefined1 *)(local_4 + 0x856),(int)*(char *)(local_4 + 0x85c),iVar2,0x49,0x1a)
        ;
      }
    }
    uVar4 = uVar3;
  }
  for (local_4 = 2; local_4 < 5; local_4 = local_4 + 1) {
    iVar2 = (((int)*(char *)(local_4 + 0x868) - *(int *)((undefined *)&DAT_3000_ab53 + local_4 * 2))
            * (int)*(char *)(local_4 + 0x85c)) / (int)*(char *)(local_4 + 0x868);
    uVar3 = uVar4;
    if (0 < iVar2) {
      if (DAT_2a22_e326 == DAT_2a22_46f1) {
        uVar1 = 0xf;
      }
      else {
        uVar1 = 10;
      }
      uVar3 = 0x1eea;
      thunk_EXT_FUN_0000_0000
                (uVar4,_DAT_2a22_bd5e,*(undefined1 *)(local_4 + 0x850),
                 *(undefined1 *)(local_4 + 0x856),iVar2,(int)*(char *)(local_4 + 0x862),uVar1,0xc);
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        uVar3 = 0x1eea;
        thunk_EXT_FUN_0000_0000
                  (0x1eea,_DAT_2a22_bd5e,*(undefined1 *)(local_4 + 0x850),
                   *(undefined1 *)(local_4 + 0x856),iVar2,(int)*(char *)(local_4 + 0x862),0x49,0x1a)
        ;
      }
    }
    uVar4 = uVar3;
  }
  if ((0 < _DAT_2a22_4a7a) && (_DAT_2a22_fadc != -1)) {
    FUN_1eea_0574(_DAT_2a22_bd5e,0x1f,0xae,0x2d,7,0);
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      *(undefined2 *)(_DAT_2a22_bd5e + 0xc) = 0x1a;
      FUN_1951_0274(_DAT_2a22_bd5e,0x20,0xae,*(undefined2 *)(_DAT_2a22_fadc * 2 + 0x844),0x2c);
      *(undefined2 *)(_DAT_2a22_bd5e + 0xc) = 0xc;
    }
    else {
      *(undefined2 *)(_DAT_2a22_bd5e + 0xc) = 4;
    }
    FUN_1951_0274(_DAT_2a22_bd5e,0x1f,0xaf,*(undefined2 *)(_DAT_2a22_fadc * 2 + 0x844),0x2c);
    *(undefined2 *)(_DAT_2a22_bd5e + 0xc) = 2;
  }
  return;
}



/* 1505:1684 FUN_1505_1684 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_1684(void)

{
  int local_4;
  
  thunk_EXT_FUN_0000_0000(0x1505,_DAT_2a22_bd5e,0x127,0x31,0x14,10,_DAT_2a22_4a80,_DAT_2a22_4a7e);
  thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_4a4e,0x127,0x31,0x14,10,_DAT_2a22_4a80,_DAT_2a22_4a7e);
  if (0 < _DAT_2a22_faca) {
    local_4 = _DAT_2a22_faca * 4;
    if (5 < _DAT_2a22_faca) {
      local_4 = local_4 + -0x14;
      thunk_EXT_FUN_0000_0000
                (0x1eea,_DAT_2a22_bd5e,0x13b - local_4,0x31,local_4,4,_DAT_2a22_4a7e,_DAT_2a22_4a80)
      ;
      thunk_EXT_FUN_0000_0000
                (0x1eea,_DAT_2a22_4a4e,0x13b - local_4,0x31,local_4,4,_DAT_2a22_4a7e,_DAT_2a22_4a80)
      ;
      local_4 = 0x14;
    }
    thunk_EXT_FUN_0000_0000
              (0x1eea,_DAT_2a22_bd5e,0x13b - local_4,0x37,local_4,4,_DAT_2a22_4a7e,_DAT_2a22_4a80);
    thunk_EXT_FUN_0000_0000
              (0x1eea,_DAT_2a22_4a4e,0x13b - local_4,0x37,local_4,4,_DAT_2a22_4a7e,_DAT_2a22_4a80);
  }
  return;
}



/* 1505:1792 FUN_1505_1792 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_1792(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1505;
  if ((_DAT_2a22_5b2a == 0) && (_DAT_2a22_4cbe != 0)) {
    _DAT_2a22_4cbe = _DAT_2a22_4cbe + -1;
    if (_DAT_3000_aaa2 == 0) {
      FUN_1eea_0574(_DAT_2a22_bd5e,0x49,0x6c,0xae,7,0);
      uVar1 = 0x1eea;
      FUN_1eea_0574(_DAT_2a22_4a4e,0x49,0x6c,0xae,7,0);
    }
    if ((_DAT_2a22_bd7c != 0) && (DAT_3000_aaa6 != '\0')) {
      DAT_3000_aaa7 = 1;
      thunk_EXT_FUN_0000_0000(uVar1,0);
    }
  }
  _DAT_2a22_4a7a = _DAT_2a22_4a7a + -1;
  if ((_DAT_2a22_4a7a == 0) && (1 < _DAT_3000_aaa2)) {
    FUN_1eea_0574(_DAT_2a22_bd5e,0x1f,0xae,0x2d,6,0);
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      uVar1 = 0x14;
    }
    else if (DAT_2a22_e326 == DAT_2a22_46f1) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    FUN_1eea_0b5a(_DAT_2a22_bd5e,0x35,0xae,0x35,0xb4,uVar1);
    thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_bd5e,0x1f,0xae,0x2d,6,_DAT_2a22_4a4e,0x1f,0xae);
  }
  return;
}



/* 1505:18a0 FUN_1505_18a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1505_18a0(undefined2 param_1,int param_2)

{
  if (_DAT_3000_aaa2 == 0) {
    FUN_1eea_0574(_DAT_2a22_bd5e,0x49,0x6c,0xae,7,0);
    FUN_1951_0274(_DAT_2a22_bd5e,0x4a,0x6d,param_1,0xae);
    thunk_EXT_FUN_0000_0000(0x1951,_DAT_2a22_bd5e,0x49,0x6c,0xae,7,_DAT_2a22_4a4e,0x49,0x6c);
    _DAT_2a22_5b2a = param_2 * 0x3c;
    if (param_2 == 0) {
      _DAT_2a22_4cbe = 0;
    }
    else {
      _DAT_2a22_4cbe = 2;
    }
  }
  return;
}



/* 1697:0008 FUN_1697_0008 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0008(void)

{
  DAT_3000_aba4 = 0;
  DAT_3000_aba3 = 0;
  DAT_3000_aba2 = 0;
  DAT_3000_aba1 = 0;
  _DAT_3000_ab9f = 0;
  _DAT_3000_ab5d = 0;
  _DAT_3000_ab2b = 0;
  _DAT_3000_ab5f = 0;
  _DAT_3000_ab61 = 0;
  _DAT_3000_ab69 = 0;
  FUN_1697_0048();
  return;
}



/* 1697:0048 FUN_1697_0048 */

void __cdecl16far FUN_1697_0048(void)

{
  FUN_1697_0116();
  FUN_1697_0154();
  FUN_1697_01ac();
  FUN_1697_0202();
  FUN_1697_02a8();
  FUN_1697_0070();
  FUN_1505_00dc();
  return;
}



/* 1697:0070 FUN_1697_0070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0070(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)((undefined *)&DAT_3000_ab53 + local_4 * 2) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  local_4 = 0;
  do {
    _DAT_3000_ab53 = _DAT_3000_ab53 + (char)((undefined *)&DAT_2a22_982b)[local_4];
    local_4 = local_4 + 1;
  } while (local_4 < 0xd);
  local_4 = 0;
  do {
    _DAT_3000_ab55 = _DAT_3000_ab55 + (char)((undefined *)&DAT_2a22_9875)[local_4];
    local_4 = local_4 + 1;
  } while (local_4 < 7);
  local_4 = 0;
  do {
    _DAT_3000_ab57 = _DAT_3000_ab57 + (char)((undefined *)&DAT_2a22_9806)[local_4];
    local_4 = local_4 + 1;
  } while (local_4 < 0xc);
  local_4 = 0;
  do {
    _DAT_3000_ab59 = _DAT_3000_ab59 + (char)((undefined *)&DAT_2a22_9853)[local_4];
    local_4 = local_4 + 1;
  } while (local_4 < 0xd);
  local_4 = 0;
  do {
    _DAT_3000_ab5b = _DAT_3000_ab5b + (char)((undefined *)&DAT_2a22_97e6)[local_4];
    local_4 = local_4 + 1;
  } while (local_4 < 10);
  return;
}



/* 1697:0116 FUN_1697_0116 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0116(void)

{
  int local_4;
  
  _DAT_3000_ab67 = 0;
  local_4 = 0;
  do {
    if (((undefined *)&DAT_2a22_9853)[local_4] != '\0') {
      _DAT_3000_ab67 = _DAT_3000_ab67 + 1;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 6);
  _DAT_2a22_a5ce = (uint)('\x01' < DAT_2a22_9852);
  return;
}



/* 1697:0154 FUN_1697_0154 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0154(void)

{
  int local_6;
  
  _DAT_3000_ab63 = 0x30c;
  local_6 = 0;
  do {
    if (((undefined *)&DAT_2a22_9875)[*(int *)(local_6 * 2 + 0x888)] != '\0') {
      _DAT_3000_ab63 = _DAT_3000_ab63 + -0x78;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 5);
  _DAT_3000_ab65 = 0x96;
  if (DAT_2a22_9871 != '\0') {
    _DAT_3000_ab65 = _DAT_3000_ab67 * 0x32 + 0x96;
  }
  if (DAT_2a22_9870 != '\0') {
    _DAT_3000_ab65 = _DAT_3000_ab65 + 100;
  }
  return;
}



/* 1697:01ac FUN_1697_01ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_01ac(void)

{
  _DAT_3000_ab6b = (int)DAT_2a22_9806 + (int)DAT_2a22_9809 + (int)DAT_2a22_9808 + (int)DAT_2a22_980b
  ;
  _DAT_3000_ab6d = (int)DAT_2a22_9807 + (int)DAT_2a22_980a + (int)DAT_2a22_9811;
  if (3 < _DAT_3000_ab67) {
    _DAT_3000_ab6b = _DAT_3000_ab6b + (int)DAT_2a22_980c + (int)DAT_2a22_980e;
    _DAT_3000_ab6d = _DAT_3000_ab6d + DAT_2a22_980d;
  }
  return;
}



/* 1697:0202 FUN_1697_0202 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0202(void)

{
  int iVar1;
  
  iVar1 = ((int)DAT_2a22_97ea + (int)DAT_2a22_97eb) * 3;
  if (_DAT_3000_ab67 < iVar1) {
    iVar1 = _DAT_3000_ab67;
  }
  _DAT_3000_a3be =
       ((DAT_2a22_97ec + 1 >> 1) + (DAT_2a22_97ed + 1 >> 1) + (DAT_2a22_97ee + 1 >> 1) +
       (DAT_2a22_97ef + 1 >> 1)) * 4 + ((int)DAT_2a22_97e6 + (int)DAT_2a22_97e7) * 5 + iVar1 +
       ((int)DAT_2a22_97e8 + (int)DAT_2a22_97e9) * 2 + (int)DAT_2a22_97ea + (int)DAT_2a22_97eb;
  if ((int)_DAT_3000_a3be < 0) {
    _DAT_3000_a3be = 0;
  }
  if (_DAT_3000_a3be < _DAT_3000_a3b6) {
    _DAT_3000_a3b6 = _DAT_3000_a3be;
    if (_DAT_3000_aaa2 == 0) {
      _DAT_3000_aad3 = _DAT_3000_a3be;
    }
  }
  return;
}



/* 1697:02a8 FUN_1697_02a8 */

void __cdecl16far FUN_1697_02a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    ((undefined *)&DAT_3000_aba5)[iVar1] = 0xff;
    iVar2 = iVar3;
    if (((undefined *)&DAT_2a22_982b)[iVar1] != '\0') {
      iVar2 = iVar3 + 1;
      ((undefined *)&DAT_3000_aba5)[iVar3] = (char)iVar1;
    }
    iVar3 = iVar2;
  }
  return;
}



/* 1697:02d8 FUN_1697_02d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_1697_02d8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_4;
  
  bVar1 = FUN_19c7_4e32();
  iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8);
  if (iVar2 < 0x4000) {
    uVar4 = _DAT_3000_ab6b;
  }
  else {
    uVar4 = _DAT_3000_ab6d;
  }
  if (uVar4 <= (bVar1 & 7)) {
    uVar4 = _DAT_3000_a3c6 + param_1;
    if (_DAT_2a22_e5c2 < 2) {
      uVar3 = _DAT_2a22_ded0;
      if ((-1 < _DAT_2a22_ded2) && ((0 < _DAT_2a22_ded2 || (0x1555 < _DAT_2a22_ded0)))) {
        uVar3 = 0x1555;
      }
      local_4 = -(((int)(uVar3 - ((int)uVar3 >> 2)) >> 5) + -0xc0);
    }
    else {
      local_4 = 0x40;
    }
    _DAT_3000_a3c6 = uVar4;
    if (local_4 <= (int)uVar4) {
      FUN_1697_0374((int)uVar4 / local_4);
      uVar4 = (int)_DAT_3000_a3c6 / local_4;
      _DAT_3000_a3c6 = (int)_DAT_3000_a3c6 % local_4;
    }
  }
  return uVar4;
}



/* 1697:0374 FUN_1697_0374 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0374(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1090_11ba(param_1);
  _DAT_3000_ab9f = _DAT_3000_ab9f + (param_1 - iVar1);
  _DAT_2a22_4a7a = _DAT_2a22_fad6 * 3;
  FUN_1697_0048();
  if (_DAT_3000_aaa2 < 2) {
    thunk_EXT_FUN_0000_0000(0x1090,0x1e);
    FUN_1951_017a(10);
  }
  return;
}



/* 1697:03bc FUN_1697_03bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1697_03bc(int param_1)

{
  if (_DAT_3000_ab67 < 4) {
    return param_1;
  }
  return param_1 * (0xb - _DAT_3000_ab67) >> 3;
}



/* 1697:03de FUN_1697_03de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_03de(void)

{
  undefined2 uVar1;
  
  FUN_1697_0ede();
  FUN_1697_1024();
  _DAT_3000_ab61 = 0;
  if (_DAT_3000_ab5f != 0) {
    _DAT_3000_ab5f = _DAT_3000_ab5f + -1;
  }
  if ((1 < _DAT_2a22_e32c) && (_DAT_3000_aad1 != 0)) {
    if ((_DAT_2a22_e333 == 0) && (DAT_3000_aaa6 == '\0')) {
      if (_DAT_3000_a3b6 != 0) {
        if (*(char *)(_DAT_2a22_e32c * 0x1d + -0x60e5) == '\0') {
          if (_DAT_2a22_e32c != 0xd) {
            FUN_1505_18a0(0x8d4,5);
            _DAT_3000_a3c2 = _DAT_2a22_fad6 * 5;
            _DAT_2a22_e333 = 1;
            return;
          }
          uVar1 = 0x8bb;
        }
        else {
          uVar1 = 0x892;
        }
        _DAT_3000_aad3 = 0;
        FUN_1505_18a0(uVar1,5);
        return;
      }
    }
    else if (_DAT_2a22_e333 == 1) {
      if (_DAT_3000_a3b6 == 0) {
        _DAT_2a22_e333 = 0;
        return;
      }
      _DAT_3000_a3c2 = _DAT_3000_a3c2 + -1;
      if (_DAT_3000_a3c2 == 0) {
        FUN_1505_18a0(0x8f6,3);
        _DAT_2a22_e333 = 2;
      }
    }
  }
  return;
}



/* 1697:04ba FUN_1697_04ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_04ba(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  int local_6;
  int local_4;
  
  if ((((1 < _DAT_2a22_e32c) && (_DAT_3000_aad1 != 0)) && (_DAT_2a22_e333 < 2)) &&
     ((_DAT_3000_ab9d < 4 && (DAT_3000_aaa6 == '\0')))) {
    if (*(char *)(_DAT_2a22_e32c * 0x1d + -0x60e5) != '\0') {
      uVar2 = 0x90a;
LAB_1697_04fb:
      FUN_1505_18a0(uVar2,5);
      return;
    }
    if (_DAT_2a22_e32c == 0xd) {
      _DAT_3000_aad3 = 0;
      uVar2 = 0x933;
      goto LAB_1697_04fb;
    }
    FUN_1505_18a0(0x94c,3);
    _DAT_2a22_e333 = 2;
  }
  if (_DAT_3000_aaa2 != 0) {
    if (DAT_2a22_5b2e != '\0') {
      return;
    }
    DAT_2a22_5b2e = 0xc;
    if (_DAT_3000_aaa2 != 1) {
      if (*(char *)(_DAT_3000_aad7 + 0x3a) == '\0') {
        DAT_2a22_5b2e = 0xc;
        return;
      }
      FUN_1697_0c5e(*(undefined1 *)(_DAT_3000_aad7 + 0x3a));
      return;
    }
    if (DAT_2a22_982a == '\0') {
      DAT_2a22_5b2e = 0xc;
      return;
    }
    if (DAT_2a22_982a == '\x01') {
      uVar5 = _DAT_3000_ab5d & 3;
      _DAT_3000_ab5d = _DAT_3000_ab5d + 1;
    }
    else {
      if (DAT_2a22_982a == '\x02') {
        FUN_1697_09da(_DAT_3000_ab5d & 2);
        FUN_1697_09da((_DAT_3000_ab5d & 2) + 1);
        _DAT_3000_ab5d = _DAT_3000_ab5d + 2;
        return;
      }
      if (DAT_2a22_982a != '\x03') {
        return;
      }
      FUN_1697_09da(0);
      FUN_1697_09da(1);
      FUN_1697_09da(2);
      uVar5 = 3;
    }
    FUN_1697_09da(uVar5);
    return;
  }
  if (_DAT_3000_ab9d == 3) {
    if (_DAT_2a22_5b2c != 0) {
      return;
    }
    _DAT_2a22_5b2c = _DAT_3000_ab63;
  }
  if ((_DAT_3000_ab9d == 1) && (_DAT_3000_aad1 == 0)) {
    FUN_1505_18a0(0x960);
    uVar2 = 0x1b;
    goto LAB_1697_0574;
  }
  puVar3 = (undefined2 *)FUN_132b_0410();
  _DAT_2a22_da36 = puVar3;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  _DAT_2a22_da36[0xb] = *(undefined2 *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
  _DAT_2a22_da36[0xc] = *(undefined2 *)((undefined *)&DAT_3000_a3b2 + _DAT_3000_aaa2 * 0x3c);
  _DAT_2a22_da36[0xd] = *(undefined2 *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c);
  FUN_1897_0502((undefined *)&DAT_2a22_581a,_DAT_3000_a3b0,-_DAT_3000_a3b2,-_DAT_3000_a3b4);
  local_4 = 0;
  if (_DAT_3000_ab9d == 1) {
LAB_1697_061a:
    local_8 = -0x32;
LAB_1697_061f:
    local_6 = 0;
  }
  else {
    if (_DAT_3000_ab9d != 3) {
      if (_DAT_3000_ab9d == 5) goto LAB_1697_061a;
      local_8 = -(_DAT_2a22_face * 5 + 0x50);
      goto LAB_1697_061f;
    }
    local_8 = 0;
    local_6 = 100;
  }
  FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_4,&local_6,&local_8);
  iVar4 = *(int *)((undefined *)&DAT_3000_a39c + _DAT_3000_aaa2 * 0x3c) + local_4;
  _DAT_2a22_da36[1] = iVar4;
  _DAT_2a22_da36[4] = iVar4;
  iVar4 = *(int *)((undefined *)&DAT_3000_a39e + _DAT_3000_aaa2 * 0x3c) + local_6;
  _DAT_2a22_da36[2] = iVar4;
  _DAT_2a22_da36[5] = iVar4;
  iVar4 = *(int *)((undefined *)&DAT_3000_a3a0 + _DAT_3000_aaa2 * 0x3c) + local_8;
  _DAT_2a22_da36[3] = iVar4;
  _DAT_2a22_da36[6] = iVar4;
  if (_DAT_3000_ab9d < 3) {
    if (_DAT_2a22_faca == 0) {
      return;
    }
    bVar1 = *(byte *)(_DAT_3000_ab9d + 0x884);
    _DAT_2a22_da36[0xe] = (uint)bVar1;
    _DAT_2a22_da36[0x12] = (uint)bVar1;
    *(undefined1 *)(_DAT_2a22_da36 + 0x1d) = *(undefined1 *)(_DAT_3000_ab9d + 0x87c);
    _DAT_2a22_da36[0x17] = *(undefined2 *)(_DAT_3000_ab9d * 2 + 0x876);
    *(undefined1 *)((int)_DAT_2a22_da36 + 0x3b) = *(undefined1 *)(_DAT_3000_ab9d + 0x880);
    puVar3 = _DAT_2a22_da36;
    _DAT_2a22_da36[0x15] = 0x19;
    puVar3[0x18] = 0x19;
    if (*(char *)((int)_DAT_2a22_da36 + 0x3b) == '\0') {
      if (3 < _DAT_3000_aae1) {
        FUN_132b_0466(_DAT_3000_aaac);
        return;
      }
      iVar4 = _DAT_3000_aae1 * 2;
      _DAT_3000_aae1 = _DAT_3000_aae1 + 1;
      *(undefined2 *)((undefined *)&DAT_3000_aad9 + iVar4) = _DAT_3000_aaac;
      _DAT_3000_aad5 = _DAT_3000_aae1 + 1;
      dispatch_ovl_14_252a_21bc();
    }
    if (_DAT_2a22_da36[0x17] == 0) {
      _DAT_2a22_da36[0x19] = 0x103;
      *_DAT_2a22_da36 = 0;
    }
    else {
      _DAT_2a22_da36[0x19] = 0x102;
      *_DAT_2a22_da36 = 2;
      _DAT_2a22_da36[0x18] = 1;
    }
    _DAT_2a22_da36[0x1a] = (undefined *)&DAT_3000_a39a + _DAT_3000_aad1 * 0x3c;
    _DAT_2a22_da36[0x11] = 0x3000;
    _DAT_2a22_da36[0x13] = 0xffff;
    FUN_1951_017a(5);
    if (_DAT_3000_ab73 < 0x14) {
      iVar4 = _DAT_3000_ab73 * 2;
      _DAT_3000_ab73 = _DAT_3000_ab73 + 1;
      *(undefined2 *)((undefined *)&DAT_3000_ab75 + iVar4) = _DAT_3000_aaac;
    }
    _DAT_2a22_faca = _DAT_2a22_faca + -1;
    FUN_1505_1684();
    return;
  }
  if (_DAT_3000_ab9d == 4) {
    FUN_1697_0914(_DAT_2a22_da36);
    return;
  }
  if (_DAT_3000_ab9d == 5) {
    FUN_1697_097c(_DAT_2a22_da36);
    return;
  }
  if (_DAT_3000_ab71 != 0) {
    return;
  }
  _DAT_2a22_da36[0x19] = 0x101;
  *_DAT_2a22_da36 = 4;
  *(undefined1 *)((int)_DAT_2a22_da36 + 0x3b) = 0;
  _DAT_2a22_da36[0xe] = 300;
  _DAT_2a22_da36[0x17] = _DAT_3000_ab65;
  _DAT_2a22_da36[0x15] = 10;
  _DAT_2a22_da36[0x13] = _DAT_2a22_fad6 << 2;
  _DAT_3000_ab61 = _DAT_3000_aaac;
  _DAT_3000_ab5f = _DAT_2a22_fad6 * 3;
  uVar2 = 6;
LAB_1697_0574:
  FUN_1951_017a(uVar2);
  return;
}



/* 1697:0914 FUN_1697_0914 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0914(undefined2 *param_1)

{
  param_1[0xe] = 200;
  param_1[0x12] = 200;
  param_1[0x15] = 1;
  param_1[0x18] = 1;
  _DAT_3000_aad9 = _DAT_3000_aaac;
  if (_DAT_3000_aae1 == 0) {
    _DAT_3000_aae1 = 1;
  }
  _DAT_3000_aad5 = 2;
  dispatch_ovl_14_252a_21bc();
  param_1[0x19] = 0x104;
  *param_1 = 0;
  param_1[0x13] = _DAT_2a22_fad6 << 1;
  FUN_1951_017a(5);
  return;
}



/* 1697:097c FUN_1697_097c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_097c(undefined2 *param_1)

{
  param_1[0xe] = 0x96;
  param_1[0x12] = 0x96;
  param_1[0x15] = 1;
  param_1[0x18] = 1;
  param_1[0x19] = 0x104;
  *param_1 = 0xd;
  param_1[0x13] = _DAT_2a22_fad6 * 3;
  FUN_1505_18a0(0x96a,3);
  FUN_1951_017a(5);
  return;
}



/* 1697:09da FUN_1697_09da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_09da(uint param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  iVar1 = (int)(char)((undefined *)&DAT_3000_aba5)[param_1];
  if ((iVar1 != -1) && ('\0' < (char)((undefined *)&DAT_3000_aba1)[iVar1])) {
    if (((undefined *)&DAT_2a22_9826)[iVar1] == '\0') {
      ((undefined *)&DAT_3000_aba1)[iVar1] = ((undefined *)&DAT_3000_aba1)[iVar1] + -1;
    }
    if ((param_1 & 1) == 0) {
      uVar2 = 0x1e;
    }
    else {
      uVar2 = 0xffe2;
    }
    _DAT_2a22_da38 = (undefined2 *)FUN_132b_0410(uVar2,iVar1);
    _DAT_2a22_da38[0x19] = 0x101;
    *_DAT_2a22_da38 = 3;
    _DAT_2a22_da38[0xb] = *(undefined2 *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
    _DAT_2a22_da38[0xc] = *(undefined2 *)((undefined *)&DAT_3000_a3b2 + _DAT_3000_aaa2 * 0x3c);
    _DAT_2a22_da38[0xd] = *(undefined2 *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c);
    _DAT_2a22_da38[0xe] = 400;
    _DAT_2a22_da38[0x11] = 0x4000;
    _DAT_2a22_da38[0x13] = _DAT_2a22_fad6 + 1;
    _DAT_2a22_da38[0x15] = 4;
    _DAT_2a22_da38[0x17] = 0x14;
    *(undefined1 *)((int)_DAT_2a22_da38 + 0x3b) = 0;
    if ((param_1 & 2) == 0) {
      _DAT_3000_aab0 = FUN_1ed2_0008(uVar2,_DAT_2a22_581a);
      _DAT_3000_aab2 = FUN_1ed2_0008(uVar2,_DAT_2a22_5826);
      uVar3 = _DAT_2a22_5820;
    }
    else {
      _DAT_3000_aab0 = FUN_1ed2_0008(uVar2,_DAT_2a22_581c);
      _DAT_3000_aab2 = FUN_1ed2_0008(uVar2,_DAT_2a22_5828);
      uVar3 = _DAT_2a22_5822;
    }
    _DAT_3000_aab4 = FUN_1ed2_0008(uVar2,uVar3);
    iVar1 = *(int *)((undefined *)&DAT_3000_a39c + _DAT_3000_aaa2 * 0x3c) + _DAT_3000_aab0;
    _DAT_2a22_da38[1] = iVar1;
    _DAT_2a22_da38[4] = iVar1;
    iVar1 = *(int *)((undefined *)&DAT_3000_a39e + _DAT_3000_aaa2 * 0x3c) + _DAT_3000_aab2;
    _DAT_2a22_da38[2] = iVar1;
    _DAT_2a22_da38[5] = iVar1;
    iVar1 = *(int *)((undefined *)&DAT_3000_a3a0 + _DAT_3000_aaa2 * 0x3c) + _DAT_3000_aab4;
    _DAT_2a22_da38[3] = iVar1;
    _DAT_2a22_da38[6] = iVar1;
    if (800 < _DAT_2a22_4cc2) {
      _DAT_2a22_4cc2 = 800;
    }
    _DAT_3000_aac9 = _DAT_3000_aad7;
    uVar2 = FUN_1ed2_006e(*(undefined2 *)(_DAT_3000_aad7 + 0x18));
    _DAT_3000_aab6 = FUN_1ed2_0008(_DAT_2a22_4cc2,uVar2);
    uVar2 = FUN_1ed2_007e(*(undefined2 *)(_DAT_3000_aad7 + 0x16));
    iVar1 = FUN_1ed2_0008(_DAT_3000_aab6,uVar2);
    _DAT_3000_aab0 = iVar1 - _DAT_3000_aab0;
    uVar2 = FUN_1ed2_006e(*(undefined2 *)(_DAT_3000_aad7 + 0x16));
    iVar1 = FUN_1ed2_0008(_DAT_3000_aab6,uVar2);
    _DAT_3000_aab2 = iVar1 - _DAT_3000_aab2;
    uVar2 = FUN_1ed2_007e(*(undefined2 *)(_DAT_3000_aad7 + 0x18));
    iVar1 = FUN_1ed2_0008(_DAT_2a22_4cc2,uVar2);
    _DAT_3000_aab4 = iVar1 - _DAT_3000_aab4;
    _DAT_3000_aab6 = FUN_1edc_000e(_DAT_3000_aab0,_DAT_3000_aab2,0);
    iVar1 = FUN_14b9_00ac(_DAT_3000_aab0,_DAT_3000_aab2);
    _DAT_2a22_da38[0xb] = _DAT_2a22_da38[0xb] + (iVar1 - _DAT_2a22_da38[0xb]);
    iVar1 = FUN_14b9_00ac(_DAT_3000_aab4,_DAT_3000_aab6);
    _DAT_2a22_da38[0xc] = _DAT_2a22_da38[0xc] + (iVar1 - _DAT_2a22_da38[0xc]);
    FUN_1951_017a(3);
  }
  return;
}



/* 1697:0c5e FUN_1697_0c5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0c5e(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  uint local_4;
  
  if (0x40 < _DAT_3000_ab2b) {
    _DAT_3000_ab2b = _DAT_3000_ab2b + -0x155;
    for (local_4 = 0; (int)local_4 < param_1; local_4 = local_4 + 1) {
      if ((local_4 & 1) == 0) {
        uVar1 = 0x1e;
      }
      else {
        uVar1 = 0xffe2;
      }
      _DAT_2a22_da3c = (undefined2 *)FUN_132b_0410(uVar1);
      _DAT_2a22_da3c[0x19] = 0x101;
      *_DAT_2a22_da3c = 3;
      _DAT_2a22_da3c[0xb] = *(undefined2 *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
      _DAT_2a22_da3c[0xc] = *(undefined2 *)((undefined *)&DAT_3000_a3b2 + _DAT_3000_aaa2 * 0x3c);
      _DAT_2a22_da3c[0xd] = *(undefined2 *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c);
      _DAT_2a22_da3c[0xe] = 400;
      _DAT_2a22_da3c[0x11] = 0x4000;
      _DAT_2a22_da3c[0x13] = _DAT_2a22_fad6;
      _DAT_2a22_da3c[0x15] = 4;
      _DAT_2a22_da3c[0x17] = 10;
      *(undefined1 *)((int)_DAT_2a22_da3c + 0x3b) = 0;
      if ((local_4 & 2) == 0) {
        _DAT_3000_aab0 = FUN_1ed2_0008(uVar1,_DAT_2a22_581a);
        _DAT_3000_aab2 = FUN_1ed2_0008(uVar1,_DAT_2a22_5826);
        uVar3 = _DAT_2a22_5820;
      }
      else {
        _DAT_3000_aab0 = FUN_1ed2_0008(uVar1,_DAT_2a22_581c);
        _DAT_3000_aab2 = FUN_1ed2_0008(uVar1,_DAT_2a22_5828);
        uVar3 = _DAT_2a22_5822;
      }
      _DAT_3000_aab4 = FUN_1ed2_0008(uVar1,uVar3);
      iVar2 = *(int *)((undefined *)&DAT_3000_a39c + _DAT_3000_aaa2 * 0x3c) + _DAT_3000_aab0;
      _DAT_2a22_da3c[1] = iVar2;
      _DAT_2a22_da3c[4] = iVar2;
      iVar2 = *(int *)((undefined *)&DAT_3000_a39e + _DAT_3000_aaa2 * 0x3c) + _DAT_3000_aab2;
      _DAT_2a22_da3c[2] = iVar2;
      _DAT_2a22_da3c[5] = iVar2;
      iVar2 = *(int *)((undefined *)&DAT_3000_a3a0 + _DAT_3000_aaa2 * 0x3c) + _DAT_3000_aab4;
      _DAT_2a22_da3c[3] = iVar2;
      _DAT_2a22_da3c[6] = iVar2;
      if (800 < _DAT_2a22_4cc2) {
        _DAT_2a22_4cc2 = 800;
      }
      _DAT_3000_aac9 = _DAT_3000_aad7;
      uVar1 = FUN_1ed2_006e(*(undefined2 *)(_DAT_3000_aad7 + 0x18));
      _DAT_3000_aab6 = FUN_1ed2_0008(_DAT_2a22_4cc2,uVar1);
      uVar1 = FUN_1ed2_007e(*(undefined2 *)(_DAT_3000_aad7 + 0x16));
      iVar2 = FUN_1ed2_0008(_DAT_3000_aab6,uVar1);
      _DAT_3000_aab0 = iVar2 - _DAT_3000_aab0;
      uVar1 = FUN_1ed2_006e(*(undefined2 *)(_DAT_3000_aad7 + 0x16));
      iVar2 = FUN_1ed2_0008(_DAT_3000_aab6,uVar1);
      _DAT_3000_aab2 = iVar2 - _DAT_3000_aab2;
      uVar1 = FUN_1ed2_007e(*(undefined2 *)(_DAT_3000_aad7 + 0x18));
      iVar2 = FUN_1ed2_0008(_DAT_2a22_4cc2,uVar1);
      _DAT_3000_aab4 = iVar2 - _DAT_3000_aab4;
      _DAT_3000_aab6 = FUN_1edc_000e(_DAT_3000_aab0,_DAT_3000_aab2,0);
      iVar2 = FUN_14b9_00ac(_DAT_3000_aab0,_DAT_3000_aab2);
      _DAT_2a22_da3c[0xb] = _DAT_2a22_da3c[0xb] + (iVar2 - _DAT_2a22_da3c[0xb]);
      iVar2 = FUN_14b9_00ac(_DAT_3000_aab4,_DAT_3000_aab6);
      _DAT_2a22_da3c[0xc] = _DAT_2a22_da3c[0xc] + (iVar2 - _DAT_2a22_da3c[0xc]);
      FUN_1951_017a(3);
    }
  }
  return;
}



/* 1697:0ede FUN_1697_0ede */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_0ede(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_6;
  
  _DAT_2a22_4cc2 = 0x7fff;
  _DAT_2a22_4cc4 = 0x7fff;
  _DAT_2a22_4cc0 = (undefined *)0x0;
  if ((_DAT_3000_aaa2 < 2) || (1 < _DAT_3000_aaa2)) {
    _DAT_3000_aacb = (undefined *)&DAT_3000_a412;
    for (local_6 = 2; local_6 < _DAT_3000_aaa8; local_6 = local_6 + 1) {
      if ((((_DAT_3000_aacb[0x33] != '\x01') && (*(int *)(_DAT_3000_aacb + 0x32) != 0)) &&
          (_DAT_3000_aacb[0x33] != -0x80)) &&
         ((_DAT_3000_aacb[0x32] != '\x01' &&
          ((_DAT_3000_aacb[0x32] != '\x02' || (_DAT_3000_aaa2 != 0)))))) {
        _DAT_3000_aab0 = *(int *)(_DAT_3000_aacb + 2) - *(int *)(_DAT_3000_aad7 + 2);
        _DAT_3000_aab2 = *(int *)(_DAT_3000_aacb + 4) - *(int *)(_DAT_3000_aad7 + 4);
        _DAT_3000_aab4 = *(int *)(_DAT_3000_aacb + 6) - *(int *)(_DAT_3000_aad7 + 6);
        uVar1 = FUN_1edc_000e(_DAT_3000_aab0,_DAT_3000_aab2,0);
        _DAT_3000_aab6 = FUN_1edc_000e(_DAT_3000_aab4,uVar1,0);
        if (_DAT_3000_aab6 < _DAT_2a22_4cc2) {
          iVar2 = FUN_14b9_00ac(_DAT_3000_aab0,_DAT_3000_aab2);
          iVar2 = FUN_19c7_4e0a(iVar2 - *(int *)(_DAT_3000_aad7 + 0x16));
          if (iVar2 < 0x1000) {
            iVar2 = FUN_14b9_00ac(_DAT_3000_aab4,_DAT_3000_aab6);
            iVar2 = FUN_19c7_4e0a(iVar2 - *(int *)(_DAT_3000_aad7 + 0x18));
            if (iVar2 < 0x1000) {
              _DAT_2a22_4cc2 = _DAT_3000_aab6;
              _DAT_2a22_4cc4 = _DAT_3000_aab6 - *(int *)(_DAT_3000_aacb + 0x2a);
              _DAT_2a22_4cc0 = _DAT_3000_aacb;
            }
          }
        }
      }
      _DAT_3000_aacb = _DAT_3000_aacb + 0x3c;
    }
  }
  return;
}



/* 1697:1024 FUN_1697_1024 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_1024(void)

{
  int local_4;
  
  if ((DAT_2a22_fad4 & 7) == 0) {
    local_4 = 0;
    do {
      if ((char)((undefined *)&DAT_3000_aba1)[local_4] < '\x03') {
        ((undefined *)&DAT_3000_aba1)[local_4] = ((undefined *)&DAT_3000_aba1)[local_4] + '\x01';
      }
      local_4 = local_4 + 1;
    } while (local_4 < 4);
  }
  if (_DAT_3000_ab2b < 0x800) {
    _DAT_3000_ab2b = _DAT_3000_ab2b + _DAT_2a22_face * 5;
  }
  if (0x800 < _DAT_3000_ab2b) {
    _DAT_3000_ab2b = 0x800;
  }
  return;
}



/* 1697:1076 FUN_1697_1076 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_1076(void)

{
  if ((1 < _DAT_3000_aaa2) && (_DAT_2a22_4cc0 != 0)) {
    _DAT_3000_aad3 =
         (*(uint *)(_DAT_2a22_4cc0 + 0x1c) - *(uint *)(_DAT_3000_aad7 + 0x24) &
         -(uint)(*(uint *)(_DAT_2a22_4cc0 + 0x1c) < *(uint *)(_DAT_3000_aad7 + 0x24))) +
         *(int *)(_DAT_3000_aad7 + 0x24);
  }
  return;
}



/* 1697:109e FUN_1697_109e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_109e(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  
  if (*(int *)(_DAT_3000_aad7 + 0x1c) != _DAT_3000_aad3) {
    iVar1 = *(int *)(_DAT_3000_aad7 + 0x24) * _DAT_2a22_face + 0x7f >> 7;
    iVar2 = _DAT_3000_aad3 - *(int *)(_DAT_3000_aad7 + 0x1c);
    if (0 < iVar2) {
      if (*(int *)(_DAT_3000_aad7 + 0x1c) == 0) {
        if (_DAT_3000_aaa2 < 2) {
          uVar3 = 7;
        }
        else {
          uVar3 = 0xe;
        }
        FUN_1951_017a(uVar3);
      }
      iVar4 = iVar1;
      if (iVar2 < iVar1) {
        iVar4 = iVar2;
      }
      *(int *)(_DAT_3000_aad7 + 0x1c) = *(int *)(_DAT_3000_aad7 + 0x1c) + iVar4;
    }
    if (iVar2 < 0) {
      iVar4 = -iVar2;
      if (-iVar1 != iVar2 && iVar1 <= -iVar2) {
        iVar4 = iVar1;
      }
      *(int *)(_DAT_3000_aad7 + 0x1c) = *(int *)(_DAT_3000_aad7 + 0x1c) - iVar4;
      if (*(int *)(_DAT_3000_aad7 + 0x1c) == 0) {
        FUN_1951_017a(0x1c);
      }
    }
  }
  return;
}



/* 1697:1138 FUN_1697_1138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_1138(int param_1)

{
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (_DAT_3000_ab73 <= local_4) {
      return;
    }
    if (*(int *)((undefined *)&DAT_3000_ab75 + local_4 * 2) == param_1) break;
    local_4 = local_4 + 1;
  }
  _DAT_3000_ab73 = _DAT_3000_ab73 + -1;
  for (; local_4 < _DAT_3000_ab73; local_4 = local_4 + 1) {
    *(undefined2 *)((undefined *)&DAT_3000_ab75 + local_4 * 2) =
         *(undefined2 *)(local_4 * 2 + -0x3af9);
  }
  return;
}



/* 1697:1186 FUN_1697_1186 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_1186(void)

{
  if (_DAT_3000_ab71 == 0) {
    FUN_132b_0466(_DAT_3000_aaa2);
    _DAT_2a22_faca = _DAT_2a22_faca + 1;
    _DAT_3000_aad5 = 0;
    dispatch_ovl_14_252a_21bc();
    FUN_1505_18a0(0x979,4);
  }
  return;
}



/* 1697:11ba FUN_1697_11ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_11ba(void)

{
  int local_4;
  
  local_4 = _DAT_3000_aae1;
  while (local_4 = local_4 + -1, -1 < local_4) {
    FUN_132b_0466(*(undefined2 *)((undefined *)&DAT_3000_aad9 + local_4 * 2));
    _DAT_2a22_faca = _DAT_2a22_faca + 1;
  }
  FUN_1505_1684();
  return;
}



/* 1697:11f2 FUN_1697_11f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1697_11f2(int param_1)

{
  uint uVar1;
  int local_4;
  
  for (local_4 = 0; local_4 < param_1; local_4 = local_4 + 1) {
    uVar1 = FUN_19c7_4e32(1);
    FUN_1090_12ec(*(undefined1 *)(_DAT_2a22_e32c * 8 + (uVar1 & 7) + 0x97a));
  }
  return;
}



/* 17ba:0006 FUN_17ba_0006 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_17ba_0006(void)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int local_4;
  
  if ((*(int *)(_DAT_3000_aac9 + 0x34) == 0) && ((_DAT_2a22_fad4 & 3) == 0)) {
    _DAT_3000_aacb = (undefined *)&DAT_3000_a39a;
    for (local_4 = 0; local_4 < _DAT_3000_aaa8; local_4 = local_4 + 1) {
      if ((((*(int *)(_DAT_3000_aacb + 0x32) != 0) && (1 < (byte)_DAT_3000_aacb[0x32])) &&
          ((byte)_DAT_3000_aacb[0x32] < 4)) &&
         ((_DAT_3000_aacb[0x33] == '\x01' &&
          (iVar4 = FUN_132b_0fb4(*(int *)(_DAT_3000_aac9 + 0x24) << 4,
                                 *(undefined2 *)(_DAT_3000_aac9 + 0x22)), iVar4 != 0)))) {
        *(undefined2 *)(_DAT_3000_aac9 + 0x34) = _DAT_3000_aacb;
        goto LAB_17ba_0086;
      }
      _DAT_3000_aacb = _DAT_3000_aacb + 0x3c;
    }
  }
  if ((*(int *)(_DAT_3000_aac9 + 0x34) != 0) && (_DAT_2a22_fad4 != 0xffff)) {
    bVar2 = FUN_19c7_4e32();
    if ((bVar2 & 1) == (DAT_2a22_fad4 & 1)) {
      _DAT_3000_aacb = (undefined *)*(undefined2 *)(_DAT_3000_aac9 + 0x34);
      iVar4 = FUN_132b_0fb4(*(int *)(_DAT_3000_aac9 + 0x24) << 4,
                            *(undefined2 *)(_DAT_3000_aac9 + 0x22));
      if (iVar4 == 0) {
        if (_DAT_3000_aacb == _DAT_3000_aad7) {
          _DAT_3000_ab69 = 0;
        }
        *(undefined2 *)(_DAT_3000_aac9 + 0x34) = 0;
        return;
      }
LAB_17ba_0086:
      uVar3 = FUN_19c7_4e32();
      if ((uVar3 & 3) == 0) {
        *(int *)(_DAT_3000_aacb + 0x2c) = *(int *)(_DAT_3000_aacb + 0x2c) + 0x19;
        if (*(int *)(_DAT_3000_aacb + 0x30) * 2 <= *(int *)(_DAT_3000_aacb + 0x2c)) {
          _DAT_3000_aacb[0x33] = _DAT_3000_aacb[0x33] | 0x80;
          puVar1 = _DAT_3000_aacb;
          iVar4 = _DAT_2a22_fad6 >> 1;
          *(int *)(_DAT_3000_aacb + 0x26) = iVar4;
          puVar1[0x39] = (char)iVar4;
          *(undefined2 *)(_DAT_3000_aac9 + 0x34) = 0;
        }
        if (_DAT_3000_aacb != _DAT_3000_aad7) {
          return;
        }
        _DAT_3000_aacf = -1;
      }
      else {
        if (_DAT_3000_aacb != _DAT_3000_aad7) {
          return;
        }
        if (_DAT_3000_aacf != 0) {
          return;
        }
        _DAT_3000_aacf = _DAT_3000_aac9;
      }
      FUN_1951_017a(4);
    }
  }
  return;
}



/* 17ba:016a FUN_17ba_016a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_17ba_016a(void)

{
  int iVar1;
  int local_4;
  
  _DAT_3000_ab71 = 0;
  for (local_4 = 0; local_4 < _DAT_3000_abb9; local_4 = local_4 + 1) {
    _DAT_3000_aac9 = *(int *)(local_4 * 2 + -0x3ac7);
    _DAT_3000_aacb = *(int *)(local_4 * 2 + -0x3abf);
    iVar1 = _DAT_3000_aaa2 * 0x3c;
    FUN_1897_0502((undefined *)&DAT_2a22_583e,*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1),
                  -*(int *)((undefined *)&DAT_3000_a3b2 + iVar1),
                  -*(int *)((undefined *)&DAT_3000_a3b4 + iVar1));
    iVar1 = _DAT_3000_aaa2 * 0x3c;
    FUN_1859_0008(_DAT_2a22_bd72,
                  *(int *)(_DAT_3000_aac9 + 2) - *(int *)((undefined *)&DAT_3000_a39c + iVar1),
                  *(int *)(_DAT_3000_aac9 + 4) - *(int *)((undefined *)&DAT_3000_a39e + iVar1),
                  *(int *)(_DAT_3000_aac9 + 6) - *(int *)((undefined *)&DAT_3000_a3a0 + iVar1),
                  0x95ee,0x95f0);
    if (_DAT_3000_aacb == _DAT_3000_aad7) {
      _DAT_2a22_da44 = *(undefined2 *)(_DAT_2a22_bd72 + 8);
      _DAT_2a22_da42 = _DAT_3000_a390 + -10;
      _DAT_2a22_da46 = _DAT_3000_a390 + 10;
      _DAT_3000_ab71 = _DAT_3000_ab71 + 1;
      _DAT_2a22_da48 = _DAT_2a22_da44;
    }
    else {
      iVar1 = _DAT_3000_aaa2 * 0x3c;
      FUN_1859_0008(_DAT_2a22_bd72,
                    *(int *)(_DAT_3000_aacb + 2) - *(int *)((undefined *)&DAT_3000_a39c + iVar1),
                    *(int *)(_DAT_3000_aacb + 4) - *(int *)((undefined *)&DAT_3000_a39e + iVar1),
                    *(int *)(_DAT_3000_aacb + 6) - *(int *)((undefined *)&DAT_3000_a3a0 + iVar1),
                    (undefined *)&DAT_2a22_da42,(undefined *)&DAT_2a22_da44);
      iVar1 = _DAT_3000_aaa2 * 0x3c;
      FUN_1859_0008(_DAT_2a22_bd72,
                    *(int *)(_DAT_3000_aacb + 2) - *(int *)((undefined *)&DAT_3000_a39c + iVar1),
                    *(int *)(_DAT_3000_aacb + 4) - *(int *)((undefined *)&DAT_3000_a39e + iVar1),
                    (*(int *)(_DAT_3000_aacb + 6) - *(int *)((undefined *)&DAT_3000_a3a0 + iVar1)) +
                    0x28,(undefined *)&DAT_2a22_da46,(undefined *)&DAT_2a22_da48);
    }
    FUN_1eea_0bde(_DAT_2a22_bd72,3,0x95ee,0xd);
  }
  _DAT_3000_abb9 = 0;
  return;
}



/* 17ba:02cc FUN_17ba_02cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_17ba_02cc(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_6;
  int local_4;
  
  *(undefined2 *)(_DAT_3000_aac9 + 0x34) = (undefined *)&DAT_3000_a39a;
  local_6 = _DAT_3000_aab6;
  _DAT_3000_aacb = (undefined *)&DAT_3000_a412;
  for (local_4 = 2; local_4 < _DAT_3000_aaa8; local_4 = local_4 + 1) {
    if (((1 < (byte)_DAT_3000_aacb[0x32]) && (_DAT_3000_aacb[0x32] != '\a')) &&
       (_DAT_3000_aacb[0x33] == '\x01')) {
      uVar1 = FUN_1edc_000e(*(int *)(_DAT_3000_aacb + 4) - *(int *)(_DAT_3000_aac9 + 4),
                            *(int *)(_DAT_3000_aacb + 6) - *(int *)(_DAT_3000_aac9 + 6),0,0);
      iVar2 = FUN_1edc_000e(*(int *)(_DAT_3000_aacb + 2) - *(int *)(_DAT_3000_aac9 + 2),uVar1);
      iVar2 = (iVar2 - *(int *)(_DAT_3000_aacb + 0x2a)) - *(int *)(_DAT_3000_aac9 + 0x2a);
      _DAT_3000_aab6 = iVar2;
      if (iVar2 < local_6) {
        *(undefined2 *)(_DAT_3000_aac9 + 0x34) = _DAT_3000_aacb;
        local_6 = iVar2;
      }
    }
    _DAT_3000_aacb = _DAT_3000_aacb + 0x3c;
  }
  return;
}



/* 17ba:037a FUN_17ba_037a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_17ba_037a(void)

{
  if (4000 < _DAT_3000_aab6) {
    FUN_132b_0466(_DAT_3000_aaae);
  }
  if (_DAT_2a22_e333 != 3) {
    _DAT_2a22_e333 = 3;
    _DAT_3000_abbb = _DAT_3000_aaa4;
    FUN_1505_18a0(0xa12,4);
  }
  return;
}



/* 17ba:03b2 FUN_17ba_03b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_17ba_03b2(void)

{
  uint uVar1;
  
  uVar1 = FUN_19c7_4e32();
  _DAT_3000_abbf = (uVar1 & 3) + 3;
  _DAT_3000_abbd = _DAT_2a22_fad6 << 1;
  return;
}



/* 17ba:03ca FUN_17ba_03ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_17ba_03ca(void)

{
  undefined2 uVar1;
  
  if ((1 < _DAT_2a22_e331) && (_DAT_3000_abbd = _DAT_3000_abbd + -1, _DAT_3000_abbd == 0)) {
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,0xa3d);
    _DAT_3000_abbf = _DAT_3000_abbf + 1;
    uVar1 = FUN_19c7_48e8(_DAT_3000_abbf,0xa176,10);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar1);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0xa47);
    FUN_1505_18a0((undefined *)&DAT_2a22_f1ba,4);
    _DAT_3000_abbd = _DAT_2a22_fad6 * 0x3c;
  }
  return;
}



/* 17ba:0438 FUN_17ba_0438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_17ba_0438(void)

{
  undefined2 uVar1;
  
  if (_DAT_3000_abbf == -1) {
    FUN_1505_18a0(0xa5a,4);
    return;
  }
  if (DAT_3000_aaa6 == '\0') {
    DAT_3000_aaa6 = '\x01';
    dispatch_ovl_14_252a_146c();
    _DAT_2a22_e333 = 4;
    if (_DAT_2a22_bd7c != 0) {
      DAT_3000_aaa7 = 1;
    }
    if (_DAT_3000_aad5 != 0) {
      _DAT_3000_aad5 = 0;
      dispatch_ovl_14_252a_21bc();
    }
    DAT_2a22_f1ba = 0;
    uVar1 = FUN_19c7_48e8(_DAT_3000_abbf,0xa176,10);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar1);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0xa73);
    FUN_1505_18a0((undefined *)&DAT_2a22_f1ba,4);
    FUN_1090_1252(_DAT_3000_abbf);
    FUN_1090_064e();
    FUN_1090_06b4();
    FUN_1697_0048();
  }
  return;
}



/* 17ba:04ea FUN_17ba_04ea */

char __cdecl16far FUN_17ba_04ea(undefined2 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int local_a;
  char *local_8;
  char *local_6;
  
  cVar1 = DAT_2a22_46f4;
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    puVar2 = (undefined1 *)FUN_19c7_4c1a(param_1,0x2e);
    *puVar2 = 0;
    FUN_19c7_47cc(param_1,0xa96);
    FUN_20a6_0650(0xa9b);
    FUN_20a6_0232(0,param_1);
    FUN_20a6_0682();
    pcVar3 = (char *)FUN_19b0_006c();
    if ((*pcVar3 == 'M') && (pcVar3[1] == '0')) {
      local_a = (((uint)(byte)pcVar3[5] - (uint)(byte)pcVar3[4]) + 1) * 3;
      local_8 = (char *)((uint)(byte)pcVar3[4] * 3 + -0x3a9f);
      local_6 = pcVar3 + 6;
      while (local_a != 0) {
        *local_8 = *local_6;
        local_a = local_a + -1;
        local_8 = local_8 + 1;
        local_6 = local_6 + 1;
      }
    }
    cVar1 = '\x01';
  }
  return cVar1;
}



/* 17ba:05aa FUN_17ba_05aa */

void __cdecl16far FUN_17ba_05aa(void)

{
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_1eea_0004(0,0x40,0xc561,0x2e67);
    FUN_1eea_0004(0x40,0x40,0xc621,0x2e67);
    FUN_1eea_0004(0x80,0x40,0xc6e1,0x2e67);
    FUN_1eea_0004(0xc0,0x40,0xc7a1,0x2e67);
  }
  return;
}



/* 17ba:060e FUN_17ba_060e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_17ba_060e(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  int local_e;
  undefined *local_a;
  undefined *local_8;
  
  uVar4 = DAT_3000_ac24;
  uVar3 = DAT_3000_ac23;
  uVar2 = DAT_3000_ac22;
  if ((DAT_2a22_fad4 & 1) == 0) {
    iVar1 = *(int *)(_DAT_2a22_da4a * 2 + 0xaa6) * 3;
    DAT_3000_ac1f = *(undefined1 *)(iVar1 + -0x3a9f);
    DAT_3000_ac20 = *(undefined1 *)(iVar1 + -0x3a9e);
    DAT_3000_ac21 = *(undefined1 *)(iVar1 + -0x3a9d);
    local_8 = (undefined *)&DAT_3000_ac25;
    local_a = (undefined *)&DAT_3000_ac22;
    local_e = 0;
    puVar5 = local_a;
    do {
      local_a = puVar5;
      *local_a = *local_8;
      local_e = local_e + 1;
      puVar5 = local_a + 1;
      local_8 = local_8 + 1;
    } while (local_e < 9);
    local_a[1] = uVar2;
    local_a[2] = uVar3;
    local_a[3] = uVar4;
    FUN_1eea_0004(0x1a,5,(undefined *)&DAT_3000_ac1f,0x2e67);
    _DAT_2a22_da4a = (_DAT_2a22_da4a + 1) % 6;
  }
  return;
}



/* 1859:0008 FUN_1859_0008 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1859_0008(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 *param_5,undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_DX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_2a22_da4c = param_2;
  _DAT_2a22_da50 = param_3;
  _DAT_2a22_da4e = param_4;
  uVar1 = FUN_1ed2_001e(param_3,_DAT_2a22_584a);
  iVar4 = in_DX;
  uVar2 = FUN_1ed2_001e(_DAT_2a22_da4e,_DAT_2a22_5844);
  iVar5 = iVar4;
  uVar3 = FUN_1ed2_001e(_DAT_2a22_da4c,_DAT_2a22_583e);
  _DAT_2a22_5850 = uVar3 + uVar2 + uVar1;
  iVar6 = iVar5 + iVar4 + (uint)CARRY2(uVar3,uVar2) + in_DX + (uint)CARRY2(uVar3 + uVar2,uVar1);
  _DAT_2a22_5852 = iVar6;
  uVar1 = FUN_1ed2_001e(_DAT_2a22_da50,_DAT_2a22_584c);
  iVar4 = iVar6;
  uVar2 = FUN_1ed2_001e(_DAT_2a22_da4e,_DAT_2a22_5846);
  iVar5 = iVar4;
  uVar3 = FUN_1ed2_001e(_DAT_2a22_da4c,_DAT_2a22_5840);
  _DAT_2a22_5858 = uVar3 + uVar2 + uVar1;
  iVar6 = iVar5 + iVar4 + (uint)CARRY2(uVar3,uVar2) + iVar6 + (uint)CARRY2(uVar3 + uVar2,uVar1);
  _DAT_2a22_585a = iVar6;
  uVar1 = FUN_1ed2_001e(_DAT_2a22_da50,_DAT_2a22_584e);
  iVar4 = iVar6;
  uVar2 = FUN_1ed2_001e(_DAT_2a22_da4e,_DAT_2a22_5848);
  iVar5 = iVar4;
  uVar3 = FUN_1ed2_001e(_DAT_2a22_da4c,_DAT_2a22_5842);
  _DAT_2a22_5860 = uVar3 + uVar2 + uVar1;
  _DAT_2a22_5862 =
       iVar5 + iVar4 + (uint)CARRY2(uVar3,uVar2) + iVar6 + (uint)CARRY2(uVar3 + uVar2,uVar1);
  if ((_DAT_2a22_5862 < 2) && (_DAT_2a22_5862 < 1)) {
    *param_5 = 0xfc18;
    *param_6 = 0xfc18;
    return;
  }
  _DAT_3000_a390 = *(int *)(param_1 + 6) >> 1;
  _DAT_3000_a392 = *(int *)(param_1 + 8) >> 1;
  FUN_19b7_00af();
  FUN_19b7_0002(0);
  FUN_19b7_00d3();
  *param_5 = _DAT_2a22_5868;
  *param_6 = _DAT_2a22_5870;
  return;
}



/* 186e:000c FUN_186e_000c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_186e_000c(int param_1)

{
  _DAT_2a22_57c8 = *(undefined2 *)(param_1 * 2 + 0x137a);
  return;
}



/* 186e:001e FUN_186e_001e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_186e_001e(int param_1,uint *param_2)

{
  int iVar1;
  
  _DAT_2a22_da5a = *(int *)(param_1 + 2) - param_2[1];
  _DAT_2a22_da5c = *(int *)(param_1 + 6) - param_2[3];
  _DAT_2a22_da5e = param_2[2] - *(int *)(param_1 + 4);
  FUN_19c7_001a(0x186e,param_2[0xb],-param_2[0xc],param_2[0xd],0x13dc);
  FUN_19c7_0084(0x19c7,(undefined *)&DAT_2a22_da5a,0x13dc);
  _DAT_2a22_da52 = *(int *)(param_1 + 0x2a) + (*(uint *)(param_1 + 0x14) >> 1);
  _DAT_2a22_da60 =
       (int *)*(undefined2 *)(*(int *)(((int)*param_2 >> 8) * 2 + 0x1376) + (*param_2 & 0x7f) * 2);
  while( true ) {
    iVar1 = *_DAT_2a22_da60;
    if (iVar1 == -0x8000) {
      return 0;
    }
    _DAT_2a22_da54 = iVar1;
    _DAT_2a22_da56 = _DAT_2a22_da60[2];
    _DAT_2a22_da58 = -_DAT_2a22_da60[1];
    if ((((_DAT_2a22_da58 - _DAT_2a22_da60[4] <= _DAT_2a22_da5e + _DAT_2a22_da52) &&
         (_DAT_2a22_da5e - _DAT_2a22_da52 <= _DAT_2a22_da58)) &&
        (_DAT_2a22_da5a - _DAT_2a22_da52 <= _DAT_2a22_da60[3] + iVar1)) &&
       (((iVar1 <= _DAT_2a22_da5a + _DAT_2a22_da52 &&
         (_DAT_2a22_da5c - _DAT_2a22_da52 <= _DAT_2a22_da60[5] + _DAT_2a22_da56)) &&
        (_DAT_2a22_da56 <= _DAT_2a22_da5c + _DAT_2a22_da52)))) break;
    _DAT_2a22_da60 = _DAT_2a22_da60 + 6;
  }
  return 1;
}



/* 186e:013e FUN_186e_013e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_186e_013e(void)

{
  int iVar1;
  undefined2 uVar2;
  
  for (_DAT_2a22_daa6 =
            (int *)*(undefined2 *)
                    (*(int *)(((int)*_DAT_3000_aac9 >> 8) * 2 + 0x1376) +
                    (*_DAT_3000_aac9 & 0x7f) * 2); uVar2 = _DAT_2a22_d810, iVar1 = *_DAT_2a22_daa6,
      iVar1 != -0x8000; _DAT_2a22_daa6 = _DAT_2a22_daa6 + 6) {
    _DAT_2a22_da8c = _DAT_2a22_daa6[2];
    _DAT_2a22_da9e = -_DAT_2a22_daa6[1];
    _DAT_2a22_daa0 = _DAT_2a22_daa6[3];
    _DAT_2a22_daa2 = _DAT_2a22_daa6[5];
    _DAT_2a22_daa4 = -_DAT_2a22_daa6[4];
    _DAT_2a22_da8a = iVar1;
    *(int *)0x6a = iVar1;
    *(int *)0x6c = _DAT_2a22_da8c;
    *(int *)0x6e = _DAT_2a22_da9e;
    *(int *)0x70 = iVar1 + _DAT_2a22_daa0;
    *(int *)0x72 = _DAT_2a22_da8c;
    *(int *)0x74 = _DAT_2a22_da9e;
    *(undefined2 *)0x76 = *(undefined2 *)0x70;
    *(int *)0x78 = _DAT_2a22_da8c;
    *(int *)0x7a = _DAT_2a22_da9e + _DAT_2a22_daa4;
    *(int *)0x7c = iVar1;
    *(int *)0x7e = _DAT_2a22_da8c;
    *(undefined2 *)0x80 = *(undefined2 *)0x7a;
    *(int *)0x82 = iVar1;
    *(int *)0x84 = _DAT_2a22_da8c + _DAT_2a22_daa2;
    *(int *)0x86 = _DAT_2a22_da9e;
    *(undefined2 *)0x88 = *(undefined2 *)0x70;
    *(undefined2 *)0x8a = *(undefined2 *)0x84;
    *(int *)0x8c = _DAT_2a22_da9e;
    *(undefined2 *)0x8e = *(undefined2 *)0x70;
    *(undefined2 *)0x90 = *(undefined2 *)0x84;
    *(undefined2 *)0x92 = *(undefined2 *)0x7a;
    *(int *)0x94 = iVar1;
    *(undefined2 *)0x96 = *(undefined2 *)0x84;
    *(undefined2 *)0x98 = *(undefined2 *)0x7a;
    _DAT_3000_aed5 = *(undefined2 *)0xea;
    FUN_1897_03b6(0x200,-_DAT_3000_aac9[0xb],_DAT_3000_aac9[0xc],_DAT_3000_aac9[0xd],
                  _DAT_3000_aac9[1],_DAT_3000_aac9[2],_DAT_3000_aac9[3]);
  }
  return;
}



/* 1897:0000 FUN_1897_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1897_0000(void)

{
  undefined2 uVar1;
  int local_8;
  
  uVar1 = *(undefined2 *)(_DAT_2a22_e32c * 2 + 0x1538);
  local_8 = 0;
  do {
    *(undefined1 *)(local_8 + 0x14e8) = (char)((uint)uVar1 >> 8);
    *(undefined1 *)(local_8 + 0x1508) = (char)uVar1;
    local_8 = local_8 + 1;
  } while (local_8 < 0x20);
  _DAT_2a22_7c4a = 0x1428;
  if (_DAT_2a22_e32c == 10) {
    DAT_2a22_5985 = 0x77;
  }
  else if ((_DAT_2a22_e32c == 2) || (_DAT_2a22_e32c == 9)) {
    DAT_2a22_5985 = 0xff;
  }
  else {
    DAT_2a22_5985 = 0x55;
  }
  if (_DAT_2a22_e32c == 0xb) {
    DAT_2a22_5980 = 0x88;
  }
  else {
    DAT_2a22_5980 = 0x77;
  }
  return;
}



/* 1897:007c FUN_1897_007c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1897_007c(void)

{
  undefined2 uVar1;
  int local_8;
  
  uVar1 = *(undefined2 *)(_DAT_2a22_e32c * 2 + 0x166e);
  local_8 = 0;
  do {
    *(undefined1 *)(local_8 + 0x161e) = (char)((uint)uVar1 >> 8);
    *(undefined1 *)(local_8 + 0x163e) = (char)uVar1;
    local_8 = local_8 + 1;
  } while (local_8 < 0x20);
  _DAT_2a22_7c4a = 0x155e;
  FUN_19c7_4d50(0x1528,0x165e,0x10);
  if (_DAT_2a22_e32c == 10) {
    DAT_2a22_5985 = 0x77;
  }
  else if ((_DAT_2a22_e32c == 2) || (_DAT_2a22_e32c == 9)) {
    DAT_2a22_5985 = 0xff;
  }
  else {
    DAT_2a22_5985 = 0x55;
  }
  if (_DAT_2a22_e32c == 0xb) {
    DAT_2a22_5980 = 0x88;
  }
  else {
    DAT_2a22_5980 = 0x77;
  }
  return;
}



/* 1897:010c FUN_1897_010c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_1897_010c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1;
  if (_DAT_2a22_7dee != 0x4d) {
    if (_DAT_3000_aae3 == 0) {
      param_1 = param_1 & 0xff;
      return (uint)*(byte *)((uVar1 & 0xf) + 0x1528) * 0x100 + param_1;
    }
    return 0xf;
  }
  if (_DAT_3000_aae3 != 0) {
    return 0x10;
  }
  if ((byte)param_1 < 0x40) {
    return param_1 & 0xff;
  }
  if ((byte)param_1 == 0xfe) {
    param_1 = (param_1 & 0xff00) + 0xff;
  }
  uVar1 = (int)param_1 >> 0xf;
  uVar1 = ((int)((param_1 ^ uVar1) - uVar1) >> 8 ^ uVar1) - uVar1;
  uVar2 = (int)uVar1 >> 0xf;
  iVar3 = (((int)((uVar1 ^ uVar2) - uVar2) >> 2 ^ uVar2) - uVar2) + 0x10;
  if (0x1f < iVar3) {
    iVar3 = 0x1f;
  }
  return (param_1 & 0xe0) + iVar3;
}



/* 1897:01ac FUN_1897_01ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1897_01ac(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  _DAT_2a22_7c40 = (uint)(_DAT_2a22_7dee != 0x4d);
  FUN_1897_02b0(param_1);
  FUN_1897_0350(param_2,param_3,param_4);
  FUN_1897_039e(param_5,param_6,param_7);
  return;
}



/* 1897:01ee FUN_1897_01ee */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1897_01ee(void)

{
  _DAT_3000_ab13 = _DAT_3000_ab13 + _DAT_2a22_face * 0x80;
  _DAT_3000_ab11 = _DAT_3000_ab11 + _DAT_2a22_face * 0x100;
  _DAT_3000_ab0f = _DAT_3000_ab0f + _DAT_2a22_face * 0x180;
  _DAT_3000_ab0d = _DAT_3000_ab0d + _DAT_2a22_face * 0x200;
  _DAT_3000_ab0b = _DAT_3000_ab0b + _DAT_2a22_face * 0x280;
  _DAT_3000_ab09 = _DAT_3000_ab09 + _DAT_2a22_face * 0x300;
  _DAT_3000_ab07 = _DAT_3000_ab07 + _DAT_2a22_face * 0x380;
  _DAT_3000_ab05 = _DAT_3000_ab05 + _DAT_2a22_face * 0x400;
  _DAT_3000_ab03 = _DAT_3000_ab03 + _DAT_2a22_face * 0x480;
  _DAT_3000_ab15 = -_DAT_3000_ab13;
  _DAT_3000_ab17 = -_DAT_3000_ab11;
  _DAT_3000_ab19 = -_DAT_3000_ab0f;
  _DAT_3000_ab1b = -_DAT_3000_ab0d;
  _DAT_3000_ab1d = -_DAT_3000_ab0b;
  _DAT_3000_ab1f = -_DAT_3000_ab09;
  _DAT_3000_ab21 = -_DAT_3000_ab07;
  _DAT_3000_ab23 = -_DAT_3000_ab05;
  FUN_19c7_4d50((undefined *)&DAT_2a22_583e,(undefined *)&DAT_2a22_581a,0x12);
  FUN_19c5_0013();
  return;
}



/* 1897:02b0 FUN_1897_02b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1897_02b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_2a22_7c4e = 0xffdc;
  _DAT_2a22_7c50 = 0x24;
  _DAT_2a22_7c52 = 0x24;
  iVar1 = param_1[3];
  iVar2 = param_1[4];
  _DAT_3000_a390 = (iVar1 + 2 >> 1) + -1;
  _DAT_3000_a392 = (iVar2 + 2 >> 1) + -1;
  FUN_19c5_0008(param_1);
  _DAT_2a22_7df4 = param_1[1];
  _DAT_2a22_7df6 = param_1[2];
  _DAT_2a22_7df8 = param_1[1] + param_1[3];
  _DAT_2a22_7dfa = param_1[2] + param_1[4];
  _DAT_2a22_7dfc = param_1[1] + _DAT_3000_a390;
  _DAT_2a22_7dfe = param_1[2] + _DAT_3000_a392;
  *(int *)&DAT_2a22_ccb9 = iVar1;
  *(int *)&DAT_2a22_ccbb = iVar2;
  _DAT_2a22_7e14 = *(undefined2 *)(*param_1 * 2 + 0x39bc);
  return;
}



/* 1897:0350 FUN_1897_0350 */

void __cdecl16far FUN_1897_0350(int param_1,int param_2,int param_3)

{
  FUN_1897_0502((undefined *)&DAT_2a22_581a,-param_1,-param_2,-param_3);
  FUN_19c7_001a(0x1897,-param_1,-param_2,param_3,0x13dc);
  FUN_19c7_0050(0x19c7,0x13dc,0x80);
  return;
}



/* 1897:039e FUN_1897_039e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1897_039e(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  _DAT_2a22_5808 = param_1;
  _DAT_2a22_580a = param_2;
  _DAT_2a22_580c = param_3;
  return;
}



/* 1897:03b6 FUN_1897_03b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1897_03b6(uint param_1,int param_2,int param_3,undefined2 param_4,int param_5,int param_6,
             int param_7)

{
  _DAT_2a22_7d56 = *(undefined2 *)((undefined *)&DAT_3000_aed1 + ((int)param_1 >> 8) * 2);
  _DAT_2a22_57f6 = param_2;
  _DAT_2a22_57f8 = param_3;
  _DAT_2a22_57fa = param_4;
  _DAT_2a22_57f0 = param_5 - _DAT_2a22_5808;
  _DAT_2a22_57f2 = param_6 - _DAT_2a22_580a;
  _DAT_2a22_57f4 = param_7 - _DAT_2a22_580c;
  FUN_19c7_001a(0x1897,-param_2,-param_3,param_4,0x13dc);
  FUN_1897_0820();
  FUN_19c7_003e(0x19c7,param_1 & 0xff,_DAT_2a22_57f0,_DAT_2a22_57f4,-_DAT_2a22_57f2,0x13dc,0xc475);
  return;
}



/* 1897:043e FUN_1897_043e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1897_043e(uint param_1,int param_2,int param_3,undefined2 param_4,int param_5,int param_6,
             int param_7,int param_8)

{
  _DAT_2a22_7d56 = *(undefined2 *)((undefined *)&DAT_3000_aed1 + ((int)param_1 >> 8) * 2);
  _DAT_2a22_57f6 = param_2;
  _DAT_2a22_57f8 = param_3;
  _DAT_2a22_57fa = param_4;
  if (param_8 < 0x40) {
    param_8 = 0x40;
  }
  _DAT_2a22_57f0 = FUN_1ed2_005f(param_5 - _DAT_2a22_5808,0x40,param_8);
  _DAT_2a22_57f2 = FUN_1ed2_005f(param_6 - _DAT_2a22_580a,0x40,param_8);
  _DAT_2a22_57f4 = FUN_1ed2_005f(param_7 - _DAT_2a22_580c,0x40,param_8);
  FUN_19c7_001a(0x1ed2,-param_2,-param_3,param_4,0x13dc);
  FUN_1897_0820();
  FUN_19c7_003e(0x19c7,param_1 & 0xff,_DAT_2a22_57f0,_DAT_2a22_57f4,-_DAT_2a22_57f2,0x13dc,0xc475);
  return;
}



/* 1897:0502 FUN_1897_0502 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1897_0502(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  _DAT_2a22_580e = FUN_1ed2_007e(param_2);
  _DAT_2a22_5810 = FUN_1ed2_006e(param_2);
  _DAT_2a22_5812 = FUN_1ed2_007e(param_3);
  _DAT_2a22_5814 = FUN_1ed2_006e(param_3);
  _DAT_2a22_5816 = FUN_1ed2_007e(param_4);
  _DAT_2a22_5818 = FUN_1ed2_006e(param_4);
  uVar1 = FUN_1ed2_0008(_DAT_2a22_5812,_DAT_2a22_5816);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_580e,uVar1);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_5810,_DAT_2a22_5818);
  *param_1 = iVar3 + iVar2;
  uVar1 = FUN_1ed2_0008(_DAT_2a22_5812,_DAT_2a22_5818);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_580e,uVar1);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_5810,_DAT_2a22_5816);
  param_1[1] = iVar2 - iVar3;
  iVar2 = FUN_1ed2_0008(_DAT_2a22_580e,_DAT_2a22_5814);
  param_1[2] = iVar2;
  iVar2 = FUN_1ed2_0008(_DAT_2a22_5816,_DAT_2a22_5814);
  param_1[3] = iVar2;
  iVar2 = FUN_1ed2_0008(_DAT_2a22_5818,_DAT_2a22_5814);
  param_1[4] = iVar2;
  param_1[5] = -_DAT_2a22_5812;
  uVar1 = FUN_1ed2_0008(_DAT_2a22_5812,_DAT_2a22_5816);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_5810,uVar1);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_580e,_DAT_2a22_5818);
  param_1[6] = iVar2 - iVar3;
  uVar1 = FUN_1ed2_0008(_DAT_2a22_5812,_DAT_2a22_5818);
  iVar2 = FUN_1ed2_0008(_DAT_2a22_5810,uVar1);
  iVar3 = FUN_1ed2_0008(_DAT_2a22_5816,_DAT_2a22_580e);
  param_1[7] = iVar3 + iVar2;
  iVar2 = FUN_1ed2_0008(_DAT_2a22_5810,_DAT_2a22_5814);
  param_1[8] = iVar2;
  return;
}



/* 1897:0820 FUN_1897_0820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1897_0820(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = _DAT_2a22_5836;
  uVar2 = _DAT_2a22_5830;
  uVar1 = _DAT_2a22_582e;
  _DAT_2a22_582e = _DAT_2a22_5832;
  _DAT_2a22_5832 = uVar1;
  _DAT_2a22_5830 = _DAT_2a22_5838;
  _DAT_2a22_5838 = uVar2;
  _DAT_2a22_5836 = _DAT_2a22_583a;
  _DAT_2a22_583a = uVar3;
  return;
}



/* 1897:0856 FUN_1897_0856 */

void __cdecl16far FUN_1897_0856(undefined2 *param_1,undefined2 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1ed2_0008(param_1[2],param_2[6]);
  iVar2 = FUN_1ed2_0008(param_1[1],param_2[3]);
  iVar3 = FUN_1ed2_0008(*param_1,*param_2);
  *param_3 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[2],param_2[7]);
  iVar2 = FUN_1ed2_0008(param_1[1],param_2[4]);
  iVar3 = FUN_1ed2_0008(*param_1,param_2[1]);
  param_3[1] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[2],param_2[8]);
  iVar2 = FUN_1ed2_0008(param_1[1],param_2[5]);
  iVar3 = FUN_1ed2_0008(*param_1,param_2[2]);
  param_3[2] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[5],param_2[6]);
  iVar2 = FUN_1ed2_0008(param_1[4],param_2[3]);
  iVar3 = FUN_1ed2_0008(param_1[3],*param_2);
  param_3[3] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[5],param_2[7]);
  iVar2 = FUN_1ed2_0008(param_1[4],param_2[4]);
  iVar3 = FUN_1ed2_0008(param_1[3],param_2[1]);
  param_3[4] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[5],param_2[8]);
  iVar2 = FUN_1ed2_0008(param_1[4],param_2[5]);
  iVar3 = FUN_1ed2_0008(param_1[3],param_2[2]);
  param_3[5] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[8],param_2[6]);
  iVar2 = FUN_1ed2_0008(param_1[7],param_2[3]);
  iVar3 = FUN_1ed2_0008(param_1[6],*param_2);
  param_3[6] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[8],param_2[7]);
  iVar2 = FUN_1ed2_0008(param_1[7],param_2[4]);
  iVar3 = FUN_1ed2_0008(param_1[6],param_2[1]);
  param_3[7] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[8],param_2[8]);
  iVar2 = FUN_1ed2_0008(param_1[7],param_2[5]);
  iVar3 = FUN_1ed2_0008(param_1[6],param_2[2]);
  param_3[8] = iVar3 + iVar2 + iVar1;
  return;
}



/* 1897:0af2 FUN_1897_0af2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1897_0af2(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  int local_6;
  
  _DAT_2a22_daa8 = (int *)((ulong)*(uint *)((undefined *)&DAT_3000_aed1 + param_1 * 2) << 0x10);
  iVar1 = *_DAT_2a22_daa8;
  local_6 = 0;
  do {
    if (iVar1 <= local_6) {
      return;
    }
    _DAT_2a22_daa8 = (int *)CONCAT22(_DAT_2a22_daaa,(undefined2 *)(local_6 * 2 + 2));
    piVar3 = (int *)*_DAT_2a22_daa8;
    _DAT_2a22_daa8 = (int *)CONCAT22(_DAT_2a22_daaa,piVar3);
    if (_DAT_2a22_bd78 == 3) {
      if (*piVar3 == -0x7ffe) {
        *piVar3 = piVar3[2];
        ((int *)_DAT_2a22_daa8)[2] = -0x7fff;
        goto LAB_1897_0b38;
      }
    }
    else if ((*piVar3 != -0x7fff) && (piVar3[2] == -0x7fff)) {
      piVar3[2] = *piVar3;
      *_DAT_2a22_daa8 = -0x7ffe;
LAB_1897_0b38:
      uVar4 = (undefined2)((ulong)_DAT_2a22_daa8 >> 0x10);
      piVar3 = (int *)_DAT_2a22_daa8;
      iVar2 = piVar3[3];
      piVar3[3] = piVar3[1];
      ((int *)_DAT_2a22_daa8)[1] = iVar2;
    }
    local_6 = local_6 + 1;
  } while( true );
}



/* 1951:0006 FUN_1951_0006 */

void __cdecl16far FUN_1951_0006(int param_1)

{
  int iVar1;
  uint uVar2;
  
  while (iVar1 = param_1 + -1, param_1 != 0) {
    do {
      uVar2 = FUN_19c7_4bfc(0x3da);
    } while ((uVar2 & 8) == 0);
    do {
      uVar2 = FUN_19c7_4bfc(0x3da);
      param_1 = iVar1;
    } while ((uVar2 & 8) != 0);
  }
  return;
}



/* 1951:0038 FUN_1951_0038 */

void __cdecl16far FUN_1951_0038(undefined1 param_1,undefined1 param_2)

{
  DAT_3000_aeda = 2;
  DAT_3000_aedc = 0;
  DAT_3000_aee0 = param_1;
  DAT_3000_aedf = param_2;
  FUN_19c7_4a00(0x10,(undefined *)&DAT_3000_aed9,(undefined *)&DAT_3000_aed9);
  return;
}



/* 1951:0064 FUN_1951_0064 */

void __cdecl16far FUN_1951_0064(undefined1 param_1)

{
  DAT_3000_aeda = 0;
  DAT_3000_aed9 = param_1;
  FUN_19c7_4a00(0x10,(undefined *)&DAT_3000_aed9,(undefined *)&DAT_3000_aed9);
  return;
}



/* 1951:0086 FUN_1951_0086 */

void __cdecl16far FUN_1951_0086(char *param_1,undefined2 param_2)

{
  for (; (*param_1 != '.' && (*param_1 != '\0')); param_1 = param_1 + 1) {
  }
  FUN_19c7_480c(param_1,param_2);
  return;
}



/* 1951:00b2 FUN_1951_00b2 */

void __cdecl16far FUN_1951_00b2(undefined2 param_1)

{
  FUN_1000_030e();
  FUN_1951_0064(3);
  FUN_19c7_4c0a(7);
  FUN_19c7_4ada(param_1);
  FUN_19c7_29de(0x19c7,99);
  return;
}



/* 1951:00ea FUN_1951_00ea */

uint __cdecl16far FUN_1951_00ea(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = 0x1951;
  if (DAT_2a22_5ba4 != '\0') {
    FUN_1000_0332();
    uVar4 = 0x1000;
  }
LAB_1951_00fd:
  do {
    iVar2 = thunk_EXT_FUN_0000_0000(uVar4);
    if (iVar2 != 0) {
      return 0;
    }
    uVar5 = 0x1eea;
    uVar3 = thunk_EXT_FUN_0000_0000(0x1eea);
    if ((char)uVar3 != '\0') {
      uVar3 = uVar3 & 0xff;
      if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
        uVar3 = uVar3 - 0x20;
      }
      return uVar3;
    }
    cVar1 = (char)(uVar3 >> 8);
    uVar3 = CONCAT11((cVar1 >> 7) + '\x01',cVar1);
    if (uVar3 == 0x110) {
      uVar5 = 0x1000;
      FUN_1000_0332();
    }
    else if (uVar3 != 0x124) {
      if (uVar3 != 0x12f) {
        return uVar3;
      }
      DAT_2a22_5ae4 = DAT_2a22_5ae4 ^ 1;
      if (DAT_2a22_5ae4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x1a;
      }
      thunk_EXT_FUN_0000_0000(0x1eea,uVar4);
      uVar4 = 0x1eea;
      goto LAB_1951_00fd;
    }
    uVar4 = uVar5;
    if (DAT_2a22_46ef != '\0') {
      uVar4 = 0x1eea;
      thunk_EXT_FUN_0000_0000(uVar5);
    }
  } while( true );
}



/* 1951:017a FUN_1951_017a */

void __cdecl16far FUN_1951_017a(undefined2 param_1)

{
  if (DAT_2a22_5ae4 != '\0') {
    thunk_EXT_FUN_0000_0000(0x1951,param_1);
  }
  return;
}



/* 1951:0192 FUN_1951_0192 */

undefined2 __cdecl16far FUN_1951_0192(undefined2 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 in_DX;
  undefined4 uVar4;
  undefined1 local_8 [6];
  
  puVar1 = (undefined1 *)FUN_19c7_4c1a(param_1,0x2e);
  *puVar1 = 0;
  FUN_19c7_47cc(param_1,0x1695);
  iVar2 = FUN_201d_0008(param_1,0,local_8);
  if (iVar2 != 0) {
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,param_1);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x169a);
    uVar4 = thunk_EXT_FUN_0000_0000(0x19c7,0xa176,10);
    in_DX = (undefined2)((ulong)uVar4 >> 0x10);
    uVar3 = FUN_19c7_48e8((int)uVar4);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar3);
    FUN_1951_00b2((undefined *)&DAT_2a22_f1ba);
  }
  FUN_201d_00b2();
  return in_DX;
}



/* 1951:0230 FUN_1951_0230 */

int __cdecl16far FUN_1951_0230(int param_1,char *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int local_8;
  char *local_6;
  
  local_6 = param_2;
  uVar1 = *(undefined2 *)(param_1 + 0x10);
  local_8 = 0;
  uVar3 = 0x1951;
  while (*local_6 != '\0') {
    iVar2 = thunk_EXT_FUN_0000_0000(uVar3,uVar1,*local_6);
    local_8 = local_8 + iVar2;
    uVar3 = 0x1eea;
    local_6 = local_6 + 1;
  }
  return local_8;
}



/* 1951:0274 FUN_1951_0274 */

void __cdecl16far
FUN_1951_0274(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_1951_0230(param_1,param_4);
  thunk_EXT_FUN_0000_0000(0x1951,param_1,(param_5 - iVar1) / 2 + param_2,param_3,param_4);
  return;
}



/* 1951:02ac FUN_1951_02ac */

void __cdecl16far FUN_1951_02ac(void)

{
  if (cRam00000440 == '\0') {
    return;
  }
  do {
  } while( true );
}



/* 197d:0004 FUN_197d_0004 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_197d_0004(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  DAT_2a22_5b24 = 1;
  _DAT_2a22_5b14 = 1;
  _DAT_2a22_5b1e = 1;
  _DAT_2a22_5b0a = 0;
  _DAT_2a22_5b0c = 0;
  FUN_197d_0150(0x2e67);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_197d_00e5 = in_BX;
  DAT_197d_00e7 = unaff_ES;
  (*pcVar1)();
  return;
}



/* 197d:0042 FUN_197d_0042 */

void __cdecl16far FUN_197d_0042(void)

{
  code *pcVar1;
  
  DAT_2a22_5b24 = 0;
  out(0x43,0x36);
  out(0x40,0);
  out(0x40,0);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



/* 197d:0150 FUN_197d_0150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_197d_0150(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte in_CF;
  bool bVar5;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  DAT_2a22_5b16 = 1;
  DAT_2a22_5b1d = 1;
  _DAT_2a22_5b19 = 0;
  _DAT_2a22_5b1b = 0;
  iVar1 = FUN_197d_01e5((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                        (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                        (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                        (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  iVar4 = 0x10;
  do {
    iVar2 = FUN_197d_01e5();
    bVar5 = CARRY2(_DAT_2a22_5b19,iVar1 - iVar2);
    _DAT_2a22_5b19 = _DAT_2a22_5b19 + (iVar1 - iVar2);
    _DAT_2a22_5b1b = _DAT_2a22_5b1b + (uint)bVar5;
    iVar4 = iVar4 + -1;
    iVar1 = iVar2;
  } while (iVar4 != 0);
  bVar5 = CARRY2(_DAT_2a22_5b0a,_DAT_2a22_5b19);
  _DAT_2a22_5b0a = _DAT_2a22_5b0a + _DAT_2a22_5b19;
  _DAT_2a22_5b0c = _DAT_2a22_5b0c + _DAT_2a22_5b1b + (uint)bVar5;
  uVar3 = (uint)(CONCAT22(_DAT_2a22_5b1b,_DAT_2a22_5b19) / 0x10);
  _DAT_2a22_5b19 = uVar3 >> 1;
  _DAT_2a22_5b17 = (_DAT_2a22_5b19 + (uVar3 >> 5)) / 0xf89;
  if ((_DAT_2a22_5b17 < 4) || (6 < _DAT_2a22_5b17)) {
    DAT_2a22_5b1d = 0;
    _DAT_2a22_5b19 = 0x4dae;
    _DAT_2a22_5b17 = 5;
  }
  if (_DAT_2a22_5b14 != 1) {
    _DAT_2a22_5b14 = _DAT_2a22_5b17;
  }
  _DAT_2a22_5b10 = _DAT_2a22_5b19 / _DAT_2a22_5b14;
  _DAT_2a22_5b0e = _DAT_2a22_5b19 / _DAT_2a22_5b14;
  return;
}



/* 197d:01e5 FUN_197d_01e5 */

undefined2 __cdecl16near FUN_197d_01e5(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) != 0);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  out(0x43,0);
  uVar2 = in(0x40);
  uVar3 = in(0x40);
  return CONCAT11(uVar3,uVar2);
}



/* 197d:0214 FUN_197d_0214 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_197d_0214(void)

{
  return _DAT_2a22_5b30;
}



/* 197d:0218 FUN_197d_0218 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_197d_0218(void)

{
  _DAT_2a22_5b30 = 0;
  return;
}



/* 199e:000e FUN_199e_000e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_199e_000e(void)

{
  return _DAT_2a22_5b32;
}



/* 199e:0012 FUN_199e_0012 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_199e_0012(void)

{
  _DAT_2a22_5b32 = 0;
  return;
}



/* 19b0:0002 FUN_19b0_0002 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19b0_0002(void)

{
  code *pcVar1;
  char cVar2;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  cVar2 = DAT_2a22_5ba5;
  LOCK();
  DAT_2a22_5ba5 = 1;
  UNLOCK();
  if (cVar2 == '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    _DAT_2a22_5ba6 = in_BX;
    _DAT_2a22_5ba8 = unaff_ES;
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    _DAT_2a22_5baa = in_BX;
    _DAT_2a22_5bac = unaff_ES;
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* 19b0:003b FUN_19b0_003b */

void __cdecl16far FUN_19b0_003b(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = DAT_2a22_5ba5;
  LOCK();
  DAT_2a22_5ba5 = 0;
  UNLOCK();
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* 19b0:006c FUN_19b0_006c */

undefined * __cdecl16far FUN_19b0_006c(void)

{
  return (undefined *)&DAT_3000_aee7;
}



/* 19b7:0002 FUN_19b7_0002 */

void __cdecl16far FUN_19b7_0002(void)

{
  FUN_19b7_0014();
  return;
}



/* 19b7:0014 FUN_19b7_0014 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19b7_0014(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_BX;
  
  iVar5 = *(int *)((undefined *)&DAT_2a22_5862 + in_BX);
  if (DAT_2a22_bd75 != '\0') {
    iVar5 = iVar5 << 1;
  }
  if (DAT_2a22_bd76 != 0) {
    iVar5 = iVar5 >> (DAT_2a22_bd76 & 0x1f);
  }
  if (iVar5 < 1) {
    *(undefined2 *)((undefined *)&DAT_2a22_5868 + in_BX) = 0x8000;
    *(undefined2 *)(in_BX + 0x141a) = 0x8000;
    *(undefined2 *)((undefined *)&DAT_2a22_5870 + in_BX) = 0x8000;
    *(undefined2 *)(in_BX + 0x1422) = 0x8000;
    return;
  }
  uVar2 = (uint)(CONCAT22((int)*(char *)(in_BX + 0x1403),*(undefined2 *)(in_BX + 0x1401)) /
                (long)iVar5);
  iVar3 = uVar2 + _DAT_3000_a390;
  *(int *)(in_BX + 0x141a) = ((int)uVar2 >> 0xf) + (uint)CARRY2(uVar2,_DAT_3000_a390);
  *(int *)((undefined *)&DAT_2a22_5868 + in_BX) = iVar3;
  uVar2 = *(uint *)(in_BX + 0x1409);
  uVar4 = (uint)*(char *)(in_BX + 0x140b);
  uVar1 = (uint)(((ulong)(((int)uVar4 >> 1 & 1U) != 0) << 0x10 |
                 (ulong)(CONCAT12((uVar4 & 1) != 0,uVar2) >> 1)) >> 1);
  uVar2 = (uint)(CONCAT22((((int)uVar4 >> 2) - uVar4) - (uint)(uVar1 < uVar2),uVar1 - uVar2) /
                (long)iVar5);
  iVar5 = uVar2 + _DAT_3000_a392;
  *(int *)(in_BX + 0x1422) = ((int)uVar2 >> 0xf) + (uint)CARRY2(uVar2,_DAT_3000_a392);
  *(int *)((undefined *)&DAT_2a22_5870 + in_BX) = iVar5;
  return;
}



/* 19b7:0097 FUN_19b7_0097 */

long FUN_19b7_0097(void)

{
  long lVar1;
  undefined2 in_AX;
  int in_CX;
  undefined2 in_DX;
  undefined1 uVar2;
  
  uVar2 = (undefined1)((uint)in_DX >> 8);
  lVar1 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11((char)in_DX,(char)((uint)in_AX >> 8))) /
          (long)in_CX;
  return (ulong)CONCAT21((int)(char)((ulong)lVar1 >> 8),(char)lVar1) << 8;
}



/* 19b7:00af FUN_19b7_00af */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19b7_00af(void)

{
  _DAT_2a22_5bb2 = _LAB_0000_0000;
  _LAB_0000_0000 = 0x97;
  _DAT_2a22_5bb4 = uRam00000002;
  uRam00000002 = 0x19b7;
  return;
}



/* 19b7:00d3 FUN_19b7_00d3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19b7_00d3(void)

{
  _LAB_0000_0000 = _DAT_2a22_5bb2;
  uRam00000002 = _DAT_2a22_5bb4;
  return;
}



/* 19c5:0008 FUN_19c5_0008 */

void __cdecl16far FUN_19c5_0008(void)

{
  thunk_EXT_FUN_0000_0000(0x19c5);
  return;
}



/* 19c5:0013 FUN_19c5_0013 */

void __cdecl16far FUN_19c5_0013(void)

{
  thunk_EXT_FUN_0000_0000(0x19c5);
  return;
}



/* 19c7:001a FUN_19c7_001a */

void FUN_19c7_001a(undefined2 param_1)

{
  uint in_stack_00000000;
  
  DAT_19c7_0016 = param_1;
  DAT_19c7_0014 = in_stack_00000000;
  FUN_19c7_1267();
                    /* WARNING: Could not recover jumptable at 0x00019c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)DAT_19c7_0014)();
  return;
}



/* 19c7:003e FUN_19c7_003e */

void FUN_19c7_003e(undefined2 param_1)

{
  uint in_stack_00000000;
  
  DAT_19c7_0016 = param_1;
  DAT_19c7_0014 = in_stack_00000000;
  FUN_19c7_0159();
                    /* WARNING: Could not recover jumptable at 0x00019cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)DAT_19c7_0014)();
  return;
}



/* 19c7:0050 FUN_19c7_0050 */

void FUN_19c7_0050(undefined2 param_1)

{
  uint in_stack_00000000;
  
  DAT_19c7_0016 = param_1;
  DAT_19c7_0014 = in_stack_00000000;
  FUN_19c7_0096();
                    /* WARNING: Could not recover jumptable at 0x00019ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)DAT_19c7_0014)();
  return;
}



/* 19c7:0062 FUN_19c7_0062 */

void FUN_19c7_0062(void)

{
  undefined2 in_stack_00000000;
  
  DAT_19c7_0018 = in_stack_00000000;
  FUN_1897_010c();
  return;
}



/* 19c7:0072 FUN_19c7_0072 */

void FUN_19c7_0072(undefined2 param_1)

{
  uint in_stack_00000000;
  
  DAT_19c7_0016 = param_1;
  DAT_19c7_0014 = in_stack_00000000;
  FUN_19c7_1caa();
                    /* WARNING: Could not recover jumptable at 0x00019cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)DAT_19c7_0014)();
  return;
}



/* 19c7:0084 FUN_19c7_0084 */

void FUN_19c7_0084(undefined2 param_1)

{
  uint in_stack_00000000;
  
  DAT_19c7_0016 = param_1;
  DAT_19c7_0014 = in_stack_00000000;
  FUN_19c7_1097();
                    /* WARNING: Could not recover jumptable at 0x00019d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)DAT_19c7_0014)();
  return;
}



/* 19c7:0096 FUN_19c7_0096 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16near FUN_19c7_0096(undefined2 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (param_2 << 1) >> 0xf;
  uVar4 = (param_2 << 1 ^ uVar4) - uVar4;
  if (uVar4 < 0x100) {
    uVar4 = 0x100;
  }
  _DAT_2a22_7c32 = (int)(0x7fff00 / (ulong)uVar4);
  FUN_19c7_11d2(param_1,(undefined *)&DAT_2a22_79fc);
  FUN_19c7_11a0((undefined *)&DAT_2a22_79fc,0x35be);
  iVar1 = -_DAT_2a22_7c32;
  _DAT_2a22_7a00 =
       (uint)(((ulong)((long)iVar1 * (long)(int)_DAT_2a22_7a00) >> 0x10) << 1) |
       (uint)((int)((long)iVar1 * (long)(int)_DAT_2a22_7a00) < 0);
  _DAT_2a22_7a06 =
       (uint)(((ulong)((long)iVar1 * (long)(int)_DAT_2a22_7a06) >> 0x10) << 1) |
       (uint)((int)((long)iVar1 * (long)(int)_DAT_2a22_7a06) < 0);
  iVar2 = (int)((long)iVar1 * (long)(int)_DAT_2a22_7a0c);
  iVar3 = iVar2 << 1;
  _DAT_2a22_7a0c =
       (uint)(((ulong)((long)iVar1 * (long)(int)_DAT_2a22_7a0c) >> 0x10) << 1) | (uint)(iVar2 < 0);
  _DAT_2a22_79fc = _DAT_2a22_79fc >> 1;
  _DAT_2a22_7a02 = _DAT_2a22_7a02 >> 1;
  _DAT_2a22_7a08 = _DAT_2a22_7a08 >> 1;
  if (_DAT_2a22_7c3e == 0) {
    _DAT_2a22_79fe = -(_DAT_2a22_79fe >> 1);
    _DAT_2a22_79fe = _DAT_2a22_79fe - (_DAT_2a22_79fe >> 2);
    _DAT_2a22_7a04 = -(_DAT_2a22_7a04 >> 1);
    _DAT_2a22_7a04 = _DAT_2a22_7a04 - (_DAT_2a22_7a04 >> 2);
    iVar3 = -(_DAT_2a22_7a0a >> 1);
    iVar3 = iVar3 - (iVar3 >> 2);
    _DAT_2a22_7a0a = iVar3;
  }
  else {
    _DAT_2a22_79fe = -(_DAT_2a22_79fe >> 1);
    _DAT_2a22_7a04 = -(_DAT_2a22_7a04 >> 1);
    _DAT_2a22_7a0a = -(_DAT_2a22_7a0a >> 1);
  }
  return iVar3;
}



/* 19c7:0159 FUN_19c7_0159 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near
FUN_19c7_0159(uint param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  uint *puVar4;
  bool bVar5;
  
  uVar3 = _DAT_2a22_7d56;
  if (*(uint *)0x0 <= param_1) {
    return;
  }
  _DAT_2a22_7ba0 = param_2;
  _DAT_2a22_7ba2 = param_3;
  _DAT_2a22_7ba4 = param_4;
  _DAT_2a22_7c20 = param_5;
  _DAT_2a22_7c22 = param_6;
  FUN_19c7_11ec((undefined *)&DAT_2a22_7ba0,(undefined *)&DAT_2a22_79fc,(undefined *)&DAT_2a22_7ba6)
  ;
  puVar4 = (uint *)*(undefined2 *)(param_1 * 2 + 2);
  do {
    puVar1 = puVar4;
    uVar2 = puVar4[1];
    puVar4 = puVar4 + 2;
  } while (*puVar1 < (_DAT_2a22_7bb0 ^ (int)_DAT_2a22_7bb0 >> 0xf) - ((int)_DAT_2a22_7bb0 >> 0xf));
  bVar5 = uVar2 == 0xfffe;
  FUN_19c7_022b();
  if (bVar5) {
    FUN_19c7_0290();
    _DAT_2a22_7c30 = *(undefined2 *)(uVar2 + 4);
    FUN_19c7_04c8();
    FUN_19c7_01f6();
    FUN_19c7_05fa();
    FUN_19c7_087c();
    FUN_19c7_0ac3();
    FUN_19c7_0217();
  }
  return;
}



/* 19c7:01f6 FUN_19c7_01f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_01f6(void)

{
  _DAT_2a22_5dba = _LAB_0000_0000;
  _DAT_2a22_5dbc = uRam00000002;
  uRam00000002 = 0x19c7;
  _LAB_0000_0000 = 0x861;
  return;
}



/* 19c7:0217 FUN_19c7_0217 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0217(void)

{
  _LAB_0000_0000 = _DAT_2a22_5dba;
  uRam00000002 = _DAT_2a22_5dbc;
  return;
}



/* 19c7:022b FUN_19c7_022b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_19c7_022b(void)

{
  int in_AX;
  uint uVar1;
  uint uVar2;
  
  if (((((_DAT_2a22_7bb0 ^ (int)_DAT_2a22_7bb0 >> 0xf) - ((int)_DAT_2a22_7bb0 >> 0xf)) + 1) * 2 <
       _DAT_2a22_7c32) && (uVar1 = _DAT_2a22_7bb0 * 2 + in_AX, -1 < (int)uVar1)) {
    uVar2 = _DAT_2a22_7ba8;
    if ((int)_DAT_2a22_7ba8 < 0) {
      uVar2 = ~_DAT_2a22_7ba8 + (uint)(0xfffe < ~_DAT_2a22_7ba6);
    }
    if (uVar2 <= uVar1) {
      uVar2 = _DAT_2a22_7bac;
      if ((int)_DAT_2a22_7bac < 0) {
        uVar2 = ~_DAT_2a22_7bac + (uint)(0xfffe < ~_DAT_2a22_7baa);
      }
      if (uVar2 <= uVar1) {
        return 0;
      }
    }
  }
  return 0xffff;
}



/* 19c7:0290 FUN_19c7_0290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0290(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_CX;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  byte *unaff_SI;
  undefined *puVar6;
  undefined2 unaff_ES;
  int *piVar7;
  int iVar8;
  
  _DAT_2a22_7c2c = in_CX;
  _DAT_2a22_7b40 = -_DAT_2a22_7ba0;
  _DAT_2a22_7b42 = -_DAT_2a22_7ba2;
  _DAT_2a22_7b44 = -_DAT_2a22_7ba4;
  if (in_CX < 1) {
    _DAT_2a22_7c24 = (undefined *)&DAT_2a22_79fc;
    return;
  }
  _DAT_2a22_7c24 = (undefined *)0x35d0;
  puVar6 = (undefined *)&DAT_2a22_79fc;
  iVar5 = _DAT_2a22_7c20;
  while( true ) {
    iVar8 = (int)_DAT_2a22_7c24;
    FUN_19c7_1144(iVar5,puVar6,_DAT_2a22_7c24);
    FUN_19c7_11a0(iVar5,iVar8 + 0x12);
    iVar5 = _DAT_2a22_7c2c;
    in_CX = in_CX + -1;
    if (in_CX == 0) break;
    uVar1 = *(undefined2 *)((uint)*unaff_SI * 2 + _DAT_2a22_7c22);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = uVar1;
    if ((unaff_SI[1] != 1) && (uVar4 = 0, uVar2 = uVar1, '\0' < (char)unaff_SI[1])) {
      uVar2 = 0;
      uVar3 = uVar1;
    }
    unaff_SI = unaff_SI + 2;
    iVar5 = (int)_DAT_2a22_7c24 + 0x48;
    _DAT_2a22_7c24 = (undefined *)((int)_DAT_2a22_7c24 + 0x24);
    FUN_19c7_1267(uVar2,uVar4,uVar3);
    puVar6 = (undefined *)0x35d0;
  }
  _DAT_2a22_7c24 = (undefined *)0x35d0;
  _DAT_2a22_7bb2 = _DAT_2a22_7ba6;
  _DAT_2a22_7bb4 = _DAT_2a22_7ba8;
  _DAT_2a22_7bb6 = _DAT_2a22_7baa;
  _DAT_2a22_7bb8 = _DAT_2a22_7bac;
  _DAT_2a22_7bba = _DAT_2a22_7bae;
  _DAT_2a22_7bbc = _DAT_2a22_7bb0;
  _DAT_2a22_7c2a = (undefined *)&DAT_2a22_7bb2;
  iVar8 = 0x35e2;
  piVar7 = (int *)&DAT_2a22_7b40;
  FUN_19c7_1097((undefined *)&DAT_2a22_7b40,0x35e2);
  FUN_19c7_0434();
  while( true ) {
    _DAT_2a22_7c2a = _DAT_2a22_7c2a + 0xc;
    piVar7 = piVar7 + 3;
    iVar8 = iVar8 + 0x24;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) break;
    FUN_19c7_03ab();
    *piVar7 = _DAT_2a22_7b40 - *(int *)unaff_SI;
    piVar7[1] = _DAT_2a22_7b42 - *(int *)(unaff_SI + 2);
    piVar7[2] = _DAT_2a22_7b44 - *(int *)(unaff_SI + 4);
    unaff_SI = unaff_SI + 6;
    FUN_19c7_1097(piVar7,iVar8);
    FUN_19c7_045e();
  }
  return;
}



/* 19c7:03ab FUN_19c7_03ab */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_03ab(void)

{
  uint *puVar1;
  uint *puVar2;
  int *in_BX;
  int *unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar3;
  
  *in_BX = *unaff_SI;
  in_BX[1] = unaff_SI[1];
  in_BX[2] = unaff_SI[2];
  FUN_19c7_11ec();
  *in_BX = -*in_BX;
  in_BX[1] = -in_BX[1];
  in_BX[2] = -in_BX[2];
  FUN_19c7_11ec(in_BX,unaff_DI + -0x12,_DAT_2a22_7c2a);
  puVar2 = _DAT_2a22_7c2a;
  puVar1 = _DAT_2a22_7c2a;
  bVar3 = CARRY2(*puVar1,_DAT_2a22_7ba6);
  *puVar1 = *puVar1 + _DAT_2a22_7ba6;
  puVar2[1] = puVar2[1] + _DAT_2a22_7ba8 + (uint)bVar3;
  puVar1 = puVar2;
  bVar3 = CARRY2(*puVar1,_DAT_2a22_7c12);
  *puVar1 = *puVar1 + _DAT_2a22_7c12;
  puVar2[1] = puVar2[1] + _DAT_2a22_7c14 + (uint)bVar3;
  puVar1 = puVar2 + 2;
  bVar3 = CARRY2(*puVar1,_DAT_2a22_7baa);
  *puVar1 = *puVar1 + _DAT_2a22_7baa;
  puVar2[3] = puVar2[3] + _DAT_2a22_7bac + (uint)bVar3;
  puVar1 = puVar2 + 2;
  bVar3 = CARRY2(*puVar1,_DAT_2a22_7c16);
  *puVar1 = *puVar1 + _DAT_2a22_7c16;
  puVar2[3] = puVar2[3] + _DAT_2a22_7c18 + (uint)bVar3;
  puVar1 = puVar2 + 4;
  bVar3 = CARRY2(*puVar1,_DAT_2a22_7bae);
  *puVar1 = *puVar1 + _DAT_2a22_7bae;
  puVar2[5] = puVar2[5] + _DAT_2a22_7bb0 + (uint)bVar3;
  puVar1 = puVar2 + 4;
  bVar3 = CARRY2(*puVar1,_DAT_2a22_7c1a);
  *puVar1 = *puVar1 + _DAT_2a22_7c1a;
  puVar2[5] = puVar2[5] + _DAT_2a22_7c1c + (uint)bVar3;
  return;
}



/* 19c7:0434 FUN_19c7_0434 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0434(void)

{
  _DAT_2a22_7c48 = (undefined *)&DAT_2a22_7b70;
  _DAT_2a22_7b70 = _DAT_2a22_7c4e;
  _DAT_2a22_7b72 = _DAT_2a22_7c50;
  _DAT_2a22_7b74 = _DAT_2a22_7c52;
  FUN_19c7_1097((undefined *)&DAT_2a22_7b70);
  _DAT_2a22_7c48 = _DAT_2a22_7c48 + 6;
  return;
}



/* 19c7:045e FUN_19c7_045e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_045e(void)

{
  undefined2 *puVar1;
  
  puVar1 = _DAT_2a22_7c48;
  *_DAT_2a22_7c48 = _DAT_2a22_7b70;
  puVar1[1] = _DAT_2a22_7b72;
  puVar1[2] = _DAT_2a22_7b74;
  FUN_19c7_1097(puVar1);
  _DAT_2a22_7c48 = _DAT_2a22_7c48 + 3;
  return;
}



/* 19c7:04c8 FUN_19c7_04c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16near FUN_19c7_04c8(void)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  uint *unaff_SI;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  byte *pbVar10;
  undefined2 unaff_ES;
  
  _DAT_2a22_7c2e = *unaff_SI;
  puVar8 = unaff_SI + 1;
  if (_DAT_2a22_7c2e == 0) {
    return 0;
  }
  iVar3 = (_DAT_2a22_7c2e ^ (int)_DAT_2a22_7c2e >> 0xf) - ((int)_DAT_2a22_7c2e >> 0xf);
  iVar9 = 0;
  piVar6 = (int *)&DAT_2a22_7b40;
  _DAT_2a22_7c48 = (undefined *)&DAT_2a22_7b70;
  do {
    DAT_2a22_7c3c = 0xff;
    puVar7 = puVar8;
    while( true ) {
      while( true ) {
        uVar4 = *puVar7;
        puVar8 = puVar7 + 1;
        if ((char)(uVar4 >> 8) != -0x80) break;
        piVar6 = (int *)((undefined *)&DAT_2a22_7b40 + (uVar4 & 0xff) * 6);
        _DAT_2a22_7c48 = (undefined *)&DAT_2a22_7b70 + (uVar4 & 0xff) * 6;
        puVar7 = puVar8;
      }
      if (uVar4 != 0x8100) break;
      pbVar10 = (byte *)((int)puVar7 + 3);
      puVar7 = puVar7 + 2;
      if ((int)(char)*pbVar10 != *(int *)(((byte)*puVar8 & 0x1f) * 2 + _DAT_2a22_7c22)) {
        DAT_2a22_7c3c = 0x7f;
      }
    }
    lVar2 = (long)(int)*puVar8 * (long)piVar6[1] + (long)(int)uVar4 * (long)*piVar6 +
            (long)(int)puVar7[2] * (long)piVar6[2];
    puVar8 = puVar7 + 5;
    bVar5 = ~(byte)((int)((int)((ulong)lVar2 >> 0x10) + puVar7[4] +
                         (uint)CARRY2((uint)lVar2,puVar7[3])) >> 0xf) & DAT_2a22_7c3c;
    ((undefined *)&DAT_2a22_75d6)[iVar9] = bVar5;
    if ((char)bVar5 < '\0') {
      FUN_19c7_05b9();
    }
    iVar9 = iVar9 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_19c7_0599();
  iVar3 = (_DAT_2a22_7c2e ^ (int)_DAT_2a22_7c2e >> 0xf) - ((int)_DAT_2a22_7c2e >> 0xf);
  pbVar10 = (byte *)&DAT_2a22_75d6;
  do {
    uVar4 = (uint)(byte)*puVar8;
    puVar8 = (uint *)((int)puVar8 + 1);
    if (uVar4 != 0) {
      if (*pbVar10 < 0x80) {
        puVar8 = (uint *)((int)puVar8 + uVar4);
      }
      else {
        do {
          puVar1 = puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          ((undefined *)&DAT_2a22_78d6)[(byte)*puVar1] = 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    pbVar10 = pbVar10 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if ((int)_DAT_2a22_7c2e < 0) {
    FUN_19c7_0ca9(puVar8);
    return _DAT_2a22_7c2e * -2 + 1;
  }
  return 1;
}



/* 19c7:0599 FUN_19c7_0599 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0599(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)&DAT_2a22_78d6;
  for (uVar2 = ((_DAT_2a22_7c30 ^ (int)_DAT_2a22_7c30 >> 0xf) - ((int)_DAT_2a22_7c30 >> 0xf)) + 2 >>
               1; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  return;
}



/* 19c7:05b9 FUN_19c7_05b9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_05b9(void)

{
  ulong uVar1;
  int iVar2;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  
  uVar1 = (long)*(int *)(unaff_SI + -8) * (long)_DAT_2a22_7c48[1] +
          (long)*(int *)(unaff_SI + -10) * (long)*_DAT_2a22_7c48 +
          (long)*(int *)(unaff_SI + -6) * (long)_DAT_2a22_7c48[2];
  iVar2 = (int)uVar1;
  *(byte *)(unaff_DI + 0x3286) =
       (byte)(((uVar1 >> 0x10 & 0x7fff) << 1 | (ulong)(iVar2 < 0)) << 1) | iVar2 << 1 < 0;
  return;
}



/* 19c7:05fa FUN_19c7_05fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_05fa(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *unaff_SI;
  undefined2 unaff_ES;
  bool bVar5;
  
  if (_DAT_2a22_7c30 != 0) {
    if (_DAT_2a22_7c30 < 0) {
      iVar3 = -_DAT_2a22_7c30;
      _DAT_2a22_7c1e = (undefined *)&DAT_3000_aee7;
      do {
        iVar2 = (uint)(byte)*unaff_SI * 0x10;
        bVar5 = CARRY2(*(uint *)((undefined *)&DAT_2a22_5dba + iVar2),_DAT_2a22_7ba6);
        iVar4 = *(int *)((undefined *)&DAT_2a22_5dbc + iVar2) + _DAT_2a22_7ba8;
        *(uint *)((undefined *)&DAT_3000_aee7 + iVar2) =
             *(uint *)((undefined *)&DAT_2a22_5dba + iVar2) + _DAT_2a22_7ba6;
        *(uint *)((undefined *)&DAT_3000_aee9 + iVar2) = iVar4 + (uint)bVar5;
        bVar5 = CARRY2(*(uint *)((undefined *)&DAT_2a22_5dbe + iVar2),_DAT_2a22_7baa);
        iVar4 = *(int *)((undefined *)&DAT_2a22_5dc0 + iVar2) + _DAT_2a22_7bac;
        *(int *)(iVar2 + -0x3785) = *(uint *)((undefined *)&DAT_2a22_5dbe + iVar2) + _DAT_2a22_7baa;
        *(int *)(iVar2 + -0x3783) = iVar4 + (uint)bVar5;
        bVar5 = CARRY2(*(uint *)((undefined *)&DAT_2a22_5dc2 + iVar2),_DAT_2a22_7bae);
        iVar4 = *(int *)((undefined *)&DAT_2a22_5dc4 + iVar2) + _DAT_2a22_7bb0;
        *(int *)(iVar2 + -0x3781) = *(uint *)((undefined *)&DAT_2a22_5dc2 + iVar2) + _DAT_2a22_7bae;
        *(int *)(iVar2 + -0x377f) = iVar4 + (uint)bVar5;
        FUN_19c7_07fd();
        unaff_SI = (uint *)((int)unaff_SI + 1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
    _DAT_2a22_7c1e = (undefined *)&DAT_3000_aee7;
    iVar3 = _DAT_2a22_7c30;
    if (_DAT_2a22_7c2e != 0) {
      iVar4 = 0;
      do {
        while( true ) {
          for (; (uVar1 = *unaff_SI, 0x7fff < uVar1 && (uVar1 < 0x8010)); unaff_SI = unaff_SI + 1) {
            iVar2 = (uVar1 & 0xf) * 0xc;
            _DAT_2a22_7ba6 = *(uint *)((undefined *)&DAT_2a22_7bb2 + iVar2);
            _DAT_2a22_7ba8 = *(int *)((undefined *)&DAT_2a22_7bb4 + iVar2);
            _DAT_2a22_7baa = *(uint *)((undefined *)&DAT_2a22_7bb6 + iVar2);
            _DAT_2a22_7bac = *(int *)((undefined *)&DAT_2a22_7bb8 + iVar2);
            _DAT_2a22_7bae = *(uint *)((undefined *)&DAT_2a22_7bba + iVar2);
            _DAT_2a22_7bb0 = *(int *)((undefined *)&DAT_2a22_7bbc + iVar2);
          }
          if (((undefined *)&DAT_2a22_78d6)[iVar4] != '\0') break;
          unaff_SI = unaff_SI + 3;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            return;
          }
        }
        FUN_19c7_075a();
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
    do {
      FUN_19c7_075a();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



/* 19c7:075a FUN_19c7_075a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_075a(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int *in_BX;
  undefined2 unaff_BP;
  uint *unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_ES;
  
  for (; (uVar2 = *unaff_SI, 0x7fff < uVar2 && (uVar2 < 0x8010)); unaff_SI = unaff_SI + 1) {
    iVar4 = (uVar2 & 0xff) * 0xc;
    in_BX = (int *)(_DAT_2a22_7c24 + (uVar2 & 0xff) * 0x24);
    _DAT_2a22_7ba6 = *(undefined2 *)((undefined *)&DAT_2a22_7bb2 + iVar4);
    _DAT_2a22_7ba8 = *(undefined2 *)((undefined *)&DAT_2a22_7bb4 + iVar4);
    _DAT_2a22_7baa = *(undefined2 *)((undefined *)&DAT_2a22_7bb6 + iVar4);
    _DAT_2a22_7bac = *(undefined2 *)((undefined *)&DAT_2a22_7bb8 + iVar4);
    _DAT_2a22_7bae = *(undefined2 *)((undefined *)&DAT_2a22_7bba + iVar4);
    _DAT_2a22_7bb0 = *(undefined2 *)((undefined *)&DAT_2a22_7bbc + iVar4);
  }
  uVar7 = unaff_SI[1];
  uVar3 = unaff_SI[2];
  iVar4 = *in_BX;
  *unaff_DI = (uint)((long)(int)uVar2 * (long)iVar4);
  unaff_DI[1] = (uint)((ulong)((long)(int)uVar2 * (long)iVar4) >> 0x10);
  iVar4 = in_BX[1];
  unaff_DI[2] = (uint)((long)(int)uVar2 * (long)iVar4);
  unaff_DI[3] = (uint)((ulong)((long)(int)uVar2 * (long)iVar4) >> 0x10);
  iVar4 = in_BX[2];
  unaff_DI[4] = (uint)((long)(int)uVar2 * (long)iVar4);
  unaff_DI[5] = (uint)((ulong)((long)(int)uVar2 * (long)iVar4) >> 0x10);
  iVar4 = in_BX[3];
  uVar6 = (uint)((long)(int)uVar7 * (long)iVar4);
  puVar1 = unaff_DI;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar6;
  unaff_DI[1] = unaff_DI[1] + (int)((ulong)((long)(int)uVar7 * (long)iVar4) >> 0x10) +
                (uint)CARRY2(uVar2,uVar6);
  iVar4 = in_BX[4];
  uVar6 = (uint)((long)(int)uVar7 * (long)iVar4);
  puVar1 = unaff_DI + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar6;
  unaff_DI[3] = unaff_DI[3] + (int)((ulong)((long)(int)uVar7 * (long)iVar4) >> 0x10) +
                (uint)CARRY2(uVar2,uVar6);
  iVar4 = in_BX[5];
  uVar6 = (uint)((long)(int)uVar7 * (long)iVar4);
  puVar1 = unaff_DI + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar6;
  unaff_DI[5] = unaff_DI[5] + (int)((ulong)((long)(int)uVar7 * (long)iVar4) >> 0x10) +
                (uint)CARRY2(uVar2,uVar6);
  lVar5 = (long)(int)uVar3 * (long)in_BX[6] + CONCAT22(_DAT_2a22_7ba8,_DAT_2a22_7ba6);
  uVar7 = (uint)lVar5;
  puVar1 = unaff_DI;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  unaff_DI[1] = unaff_DI[1] + (int)((ulong)lVar5 >> 0x10) + (uint)CARRY2(uVar2,uVar7);
  lVar5 = (long)(int)uVar3 * (long)in_BX[7] + CONCAT22(_DAT_2a22_7bac,_DAT_2a22_7baa);
  uVar7 = (uint)lVar5;
  puVar1 = unaff_DI + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  unaff_DI[3] = unaff_DI[3] + (int)((ulong)lVar5 >> 0x10) + (uint)CARRY2(uVar2,uVar7);
  lVar5 = (long)(int)uVar3 * (long)in_BX[8] + CONCAT22(_DAT_2a22_7bb0,_DAT_2a22_7bae);
  uVar7 = (uint)lVar5;
  puVar1 = unaff_DI + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  unaff_DI[5] = unaff_DI[5] + (int)((ulong)lVar5 >> 0x10) + (uint)CARRY2(uVar2,uVar7);
  FUN_19c7_07fd(unaff_BP);
  return;
}



/* 19c7:07fd FUN_19c7_07fd */

void __cdecl16near FUN_19c7_07fd(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_BX;
  undefined2 *unaff_DI;
  
  iVar2 = unaff_DI[5];
  if (0xff < iVar2) {
    iVar1 = (int)(CONCAT22((int)*(char *)((int)unaff_DI + 3),*(undefined2 *)((int)unaff_DI + 1)) /
                 (long)iVar2);
    *in_BX = iVar1;
    in_BX[1] = iVar1 >> 0xf;
    iVar2 = (int)(CONCAT22((int)*(char *)((int)unaff_DI + 7),*(undefined2 *)((int)unaff_DI + 5)) /
                 (long)iVar2);
    in_BX[2] = iVar2;
    in_BX[3] = iVar2 >> 0xf;
    return;
  }
  if (iVar2 < 1) {
    in_BX[1] = -0x8000;
    return;
  }
  uVar3 = *(uint *)((int)unaff_DI + 9) >> 1;
  iVar2 = (int)((long)((ulong)(uint)((int)unaff_DI[1] >> 1) << 0x10 |
                      (ulong)(CONCAT12((unaff_DI[1] & 1) != 0,*unaff_DI) >> 1)) / (long)(int)uVar3);
  *in_BX = iVar2;
  in_BX[1] = iVar2 >> 0xf;
  iVar2 = (int)((long)((ulong)(uint)((int)unaff_DI[3] >> 1) << 0x10 |
                      (ulong)(CONCAT12((unaff_DI[3] & 1) != 0,unaff_DI[2]) >> 1)) / (long)(int)uVar3
               );
  in_BX[2] = iVar2;
  in_BX[3] = iVar2 >> 0xf;
  return;
}



/* 19c7:0861 FUN_19c7_0861 */

long FUN_19c7_0861(void)

{
  long lVar1;
  undefined2 in_AX;
  int in_CX;
  undefined2 in_DX;
  
  lVar1 = CONCAT22((int)(char)((uint)in_DX >> 8),CONCAT11((char)in_DX,(char)((uint)in_AX >> 8))) /
          (long)in_CX;
  return (ulong)CONCAT21((int)(char)((ulong)lVar1 >> 8),(char)lVar1) << 8;
}



/* 19c7:087c FUN_19c7_087c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_087c(void)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  int *unaff_SI;
  uint *puVar4;
  undefined2 unaff_ES;
  
  puVar3 = (undefined *)&DAT_2a22_5dbe;
  puVar4 = (uint *)(unaff_SI + 1);
  for (iVar2 = *unaff_SI; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    if ((_DAT_2a22_7c2e == 0) ||
       ((((undefined *)&DAT_2a22_78d6)[*puVar1 & 0xff] & ((undefined *)&DAT_2a22_78d6)[*puVar1 >> 8]
        ) != 0)) {
      FUN_19c7_0987(puVar4,puVar3);
    }
    puVar3 = puVar3 + 0x18;
  }
  return;
}



/* 19c7:08c6 FUN_19c7_08c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_08c6(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_BX;
  int iVar5;
  int iVar6;
  int *unaff_SI;
  int unaff_DI;
  int iVar7;
  bool bVar8;
  
  iVar4 = *(int *)(unaff_DI + -0x2787);
  bVar8 = CARRY2(*(uint *)(unaff_DI + -0x2789),_DAT_2a22_7dfc);
  *unaff_SI = *(uint *)(unaff_DI + -0x2789) + _DAT_2a22_7dfc;
  unaff_SI[1] = iVar4 + (uint)bVar8;
  iVar4 = *(int *)(unaff_DI + -0x2783);
  bVar8 = CARRY2(*(uint *)(unaff_DI + -0x2785),_DAT_2a22_7dfe);
  unaff_SI[2] = *(uint *)(unaff_DI + -0x2785) + _DAT_2a22_7dfe;
  unaff_SI[3] = iVar4 + (uint)bVar8;
  iVar7 = unaff_DI * 2;
  iVar5 = in_BX * 2;
  iVar2 = *(int *)(iVar7 + -0x377f) - *(int *)(iVar5 + -0x377f);
  iVar6 = 1 - *(int *)(iVar5 + -0x377f);
  iVar4 = (int)(((long)(int)((*(int *)((undefined *)&DAT_3000_aee9 + iVar7) -
                             *(int *)((undefined *)&DAT_3000_aee9 + iVar5)) -
                            (uint)(*(uint *)((undefined *)&DAT_3000_aee7 + iVar7) <
                                  *(uint *)((undefined *)&DAT_3000_aee7 + iVar5))) * (long)iVar6) /
               (long)iVar2) + *(int *)((undefined *)&DAT_3000_aee9 + iVar5);
  uVar3 = CONCAT11((char)iVar4,
                   (char)((uint)*(undefined2 *)((undefined *)&DAT_3000_aee7 + iVar5) >> 8));
  iVar1 = uVar3 + _DAT_2a22_7dfc;
  iVar4 = (int)(char)((uint)iVar4 >> 8) + (uint)CARRY2(uVar3,_DAT_2a22_7dfc);
  unaff_SI[4] = iVar1;
  unaff_SI[5] = iVar4;
  unaff_SI[8] = iVar1;
  unaff_SI[9] = iVar4;
  iVar4 = (int)(((long)(int)((*(int *)(iVar7 + -0x3783) - *(int *)(iVar5 + -0x3783)) -
                            (uint)(*(uint *)(iVar7 + -0x3785) < *(uint *)(iVar5 + -0x3785))) *
                (long)iVar6) / (long)iVar2) + *(int *)(iVar5 + -0x3783);
  uVar3 = CONCAT11((char)iVar4,(char)((uint)*(undefined2 *)(iVar5 + -0x3785) >> 8));
  iVar1 = uVar3 + _DAT_2a22_7dfe;
  iVar4 = (int)(char)((uint)iVar4 >> 8) + (uint)CARRY2(uVar3,_DAT_2a22_7dfe);
  unaff_SI[6] = iVar1;
  unaff_SI[7] = iVar4;
  unaff_SI[10] = iVar1;
  unaff_SI[0xb] = iVar4;
  FUN_19c7_19d4();
  unaff_SI[1] = unaff_SI[1] | 0x4040;
  return;
}



/* 19c7:0987 FUN_19c7_0987 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0987(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_BX;
  int iVar5;
  int *unaff_BP;
  int iVar6;
  int unaff_DI;
  int iVar7;
  bool bVar8;
  
  if (*(int *)(unaff_DI + -0x2787) == -0x8000) {
    if (*(int *)(in_BX + -0x2787) == -0x8000) {
      unaff_BP[1] = -0x7f80;
      return;
    }
    iVar4 = *(int *)(in_BX + -0x2787);
    bVar8 = CARRY2(*(uint *)(in_BX + -0x2789),_DAT_2a22_7dfc);
    unaff_BP[4] = *(uint *)(in_BX + -0x2789) + _DAT_2a22_7dfc;
    unaff_BP[5] = iVar4 + (uint)bVar8;
    iVar4 = *(int *)(in_BX + -0x2783);
    bVar8 = CARRY2(*(uint *)(in_BX + -0x2785),_DAT_2a22_7dfe);
    unaff_BP[6] = *(uint *)(in_BX + -0x2785) + _DAT_2a22_7dfe;
    unaff_BP[7] = iVar4 + (uint)bVar8;
    iVar7 = unaff_DI * 2;
    iVar5 = in_BX * 2;
    iVar2 = *(int *)(iVar5 + -0x377f) - *(int *)(iVar7 + -0x377f);
    iVar6 = 1 - *(int *)(iVar7 + -0x377f);
    iVar4 = (int)(((long)(int)((*(int *)((undefined *)&DAT_3000_aee9 + iVar5) -
                               *(int *)((undefined *)&DAT_3000_aee9 + iVar7)) -
                              (uint)(*(uint *)((undefined *)&DAT_3000_aee7 + iVar5) <
                                    *(uint *)((undefined *)&DAT_3000_aee7 + iVar7))) * (long)iVar6)
                 / (long)iVar2) + *(int *)((undefined *)&DAT_3000_aee9 + iVar7);
    uVar3 = CONCAT11((char)iVar4,
                     (char)((uint)*(undefined2 *)((undefined *)&DAT_3000_aee7 + iVar7) >> 8));
    iVar1 = uVar3 + _DAT_2a22_7dfc;
    iVar4 = (int)(char)((uint)iVar4 >> 8) + (uint)CARRY2(uVar3,_DAT_2a22_7dfc);
    *unaff_BP = iVar1;
    unaff_BP[1] = iVar4;
    unaff_BP[8] = iVar1;
    unaff_BP[9] = iVar4;
    iVar4 = (int)(((long)(int)((*(int *)(iVar5 + -0x3783) - *(int *)(iVar7 + -0x3783)) -
                              (uint)(*(uint *)(iVar5 + -0x3785) < *(uint *)(iVar7 + -0x3785))) *
                  (long)iVar6) / (long)iVar2) + *(int *)(iVar7 + -0x3783);
    uVar3 = CONCAT11((char)iVar4,(char)((uint)*(undefined2 *)(iVar7 + -0x3785) >> 8));
    iVar1 = uVar3 + _DAT_2a22_7dfe;
    iVar4 = (int)(char)((uint)iVar4 >> 8) + (uint)CARRY2(uVar3,_DAT_2a22_7dfe);
    unaff_BP[2] = iVar1;
    unaff_BP[3] = iVar4;
    unaff_BP[10] = iVar1;
    unaff_BP[0xb] = iVar4;
    FUN_19c7_19d4();
    unaff_BP[1] = unaff_BP[1] | 0x4040;
    return;
  }
  if (*(int *)(in_BX + -0x2787) == -0x8000) {
    FUN_19c7_08c6();
    return;
  }
  iVar4 = *(int *)(unaff_DI + -0x2787);
  bVar8 = CARRY2(*(uint *)(unaff_DI + -0x2789),_DAT_2a22_7dfc);
  *unaff_BP = *(uint *)(unaff_DI + -0x2789) + _DAT_2a22_7dfc;
  unaff_BP[1] = iVar4 + (uint)bVar8;
  iVar4 = *(int *)(unaff_DI + -0x2783);
  bVar8 = CARRY2(*(uint *)(unaff_DI + -0x2785),_DAT_2a22_7dfe);
  unaff_BP[2] = *(uint *)(unaff_DI + -0x2785) + _DAT_2a22_7dfe;
  unaff_BP[3] = iVar4 + (uint)bVar8;
  iVar4 = *(int *)(in_BX + -0x2787);
  bVar8 = CARRY2(*(uint *)(in_BX + -0x2789),_DAT_2a22_7dfc);
  unaff_BP[4] = *(uint *)(in_BX + -0x2789) + _DAT_2a22_7dfc;
  unaff_BP[5] = iVar4 + (uint)bVar8;
  iVar4 = *(int *)(in_BX + -0x2783);
  bVar8 = CARRY2(*(uint *)(in_BX + -0x2785),_DAT_2a22_7dfe);
  unaff_BP[6] = *(uint *)(in_BX + -0x2785) + _DAT_2a22_7dfe;
  unaff_BP[7] = iVar4 + (uint)bVar8;
  FUN_19c7_19d4();
  return;
}



/* 19c7:0ac3 FUN_19c7_0ac3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0ac3(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if (_DAT_2a22_7c2e < 0) {
    pcVar3 = (char *)&DAT_2a22_77d6;
    while (pcVar1 = pcVar3, pcVar3 = pcVar3 + 1, *pcVar1 != -1) {
      FUN_19c7_0af5();
    }
    return;
  }
  iVar2 = _DAT_2a22_7c2e;
  if (_DAT_2a22_7c2e != 0) {
    do {
      FUN_19c7_0af5();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
  }
  iVar2 = 1;
  do {
    FUN_19c7_0b36();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* 19c7:0af5 FUN_19c7_0af5 */

void __cdecl16near FUN_19c7_0af5(void)

{
  int in_BX;
  
  if (0x7f < (byte)((undefined *)&DAT_2a22_75d6)[in_BX]) {
    DAT_2a22_7c54 = *(undefined1 *)(in_BX + 0x3286);
    FUN_19c7_0b36();
  }
  return;
}



/* 19c7:0b36 FUN_19c7_0b36 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0b36(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  byte *unaff_SI;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  
  while( true ) {
    do {
      while( true ) {
        pbVar7 = unaff_SI;
        bVar2 = *pbVar7;
        pbVar8 = pbVar7 + 1;
        if (bVar2 == 0xff) {
          return;
        }
        if ((bVar2 & 0x80) != 0) break;
        if ((bVar2 & 0x20) == 0) {
          if ((bVar2 & 0x40) == 0) {
            uVar6 = (uint)bVar2;
            _DAT_2a22_7c42 = uVar6;
            _DAT_2a22_7c44 = pbVar8;
            if (pbVar8[uVar6] == 0xff) {
              unaff_SI = pbVar8 + uVar6 + 1;
            }
            else {
              do {
                pbVar7 = pbVar8;
                pbVar8 = pbVar7 + 1;
                FUN_19c7_1660();
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              unaff_SI = pbVar7 + 2;
              uVar3 = *(undefined1 *)(ulong)(_DAT_2a22_7c4a + (uint)*pbVar8);
              uVar4 = CONCAT11(extraout_AH,uVar3);
              if (_DAT_2a22_7c40 == 0) {
                if (_DAT_2a22_7dee == 0x4d) {
                  uVar4 = FUN_19c7_0062(CONCAT11(DAT_2a22_7c54,uVar3));
                }
                FUN_19c7_172a(uVar4);
              }
              else {
                uVar4 = FUN_19c7_0062(uVar4);
                FUN_19c7_172a(uVar4);
                pbVar8 = _DAT_2a22_7c44;
                uVar6 = _DAT_2a22_7c42;
                thunk_FUN_19c7_1e56();
                do {
                  pbVar1 = pbVar8;
                  pbVar8 = pbVar8 + 1;
                  if ((*(uint *)((undefined *)&DAT_2a22_5dc0 + (uint)*pbVar1 * 0x18) & 0x80) == 0) {
                    thunk_FUN_19c7_1ff3();
                  }
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
            }
          }
          else {
            uVar6 = bVar2 & 0x1f;
            unaff_SI = pbVar7 + 2;
            thunk_FUN_19c7_1e56();
            do {
              pbVar1 = unaff_SI;
              unaff_SI = unaff_SI + 1;
              if ((*(uint *)((undefined *)&DAT_2a22_5dc0 + (uint)*pbVar1 * 0x18) & 0x80) == 0) {
                thunk_FUN_19c7_1ff3();
              }
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        else {
          uVar6 = bVar2 & 0x1f;
          bVar2 = *pbVar8;
          unaff_SI = pbVar7 + 2;
          do {
            pbVar1 = unaff_SI;
            unaff_SI = unaff_SI + 1;
            iVar5 = (uint)*pbVar1 * 8;
            if (((*(int *)(iVar5 + -0x2787) != -0x8000) &&
                (*(int *)(iVar5 + -0x2787) + (uint)CARRY2(*(uint *)(iVar5 + -0x2789),_DAT_2a22_7dfc)
                 + 1 < 2)) &&
               (*(int *)(iVar5 + -0x2783) + (uint)CARRY2(*(uint *)(iVar5 + -0x2785),_DAT_2a22_7dfe)
                + 1 < 2)) {
              thunk_FUN_19c7_1ec4(*(uint *)(iVar5 + -0x2789) + _DAT_2a22_7dfc,
                                  *(uint *)(iVar5 + -0x2785) + _DAT_2a22_7dfe,bVar2);
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      unaff_SI = pbVar7 + 2;
    } while ((int)(char)*pbVar8 == *(int *)((bVar2 & 0x7f) * 2 + _DAT_2a22_7c22));
    bVar2 = pbVar7[2];
    if (bVar2 == 0xff) break;
    unaff_SI = pbVar7 + (bVar2 & 0x1f) + 4;
  }
  return;
}



/* 19c7:0ca9 FUN_19c7_0ca9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0ca9(void)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  int in_BX;
  int iVar5;
  int iVar6;
  byte *unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  uint in_stack_00000000;
  
  iVar6 = 0;
  bVar1 = *unaff_SI;
  _DAT_2a22_7c46 = in_BX;
  do {
    uVar2 = (uint)bVar1;
    iVar5 = uVar2 << 1;
    uVar4 = 0;
    if (*(char *)(_DAT_2a22_7c46 + uVar2) == '\0') {
      uVar4 = 2;
    }
LAB_19c7_0cce:
    do {
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          *unaff_DI = (byte)uVar2;
          unaff_DI = unaff_DI + 1;
          uVar4 = 4;
        }
        else {
          if (uVar4 != 2) {
            if (uVar4 == 3) {
              uVar4 = 4;
              goto LAB_19c7_0d28;
            }
            iVar6 = iVar6 + -1;
            if (iVar6 < 0) {
              *unaff_DI = 0xff;
              return;
            }
            uVar4 = in_stack_00000000 & 0xff;
            uVar2 = in_stack_00000000 >> 8;
            iVar5 = uVar2 << 1;
            goto LAB_19c7_0cce;
          }
          uVar4 = 3;
        }
        uVar3 = (undefined1)uVar4;
        bVar1 = unaff_SI[iVar5 + 1];
        if (bVar1 != 0xff) {
          if (-1 < (char)bVar1) break;
          *unaff_DI = bVar1;
          unaff_DI = unaff_DI + 1;
        }
        goto LAB_19c7_0cce;
      }
      uVar4 = 1;
LAB_19c7_0d28:
      uVar3 = (undefined1)uVar4;
      bVar1 = unaff_SI[iVar5 + 2];
    } while (bVar1 == 0xff);
    in_stack_00000000 = CONCAT11((byte)uVar2,uVar3);
    iVar6 = iVar6 + 1;
  } while( true );
}



/* 19c7:0d3c FUN_19c7_0d3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0d3c(uint param_1,uint *param_2)

{
  int iVar1;
  undefined2 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = _DAT_2a22_7d56;
  if (*(uint *)0x0 <= param_1) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 * 2 + 2) + 2);
  FUN_19c7_0290();
  _DAT_2a22_7c30 = *(int *)(iVar1 + 4);
  FUN_19c7_04c8();
  iVar5 = _DAT_2a22_7c30;
  puVar3 = (uint *)(iVar1 + 6);
  if (0 < _DAT_2a22_7c30) {
LAB_19c7_0d9d:
    do {
      puVar7 = puVar3;
      uVar4 = *puVar7;
      if (0x7fff < uVar4) {
        puVar3 = puVar7 + 1;
        if (uVar4 < 0x8010) goto LAB_19c7_0d9d;
      }
      uVar4 = (uVar4 ^ (int)uVar4 >> 0xf) - ((int)uVar4 >> 0xf);
      if (*param_2 < uVar4) {
        *param_2 = uVar4;
      }
      uVar4 = puVar7[1];
      uVar6 = (int)uVar4 >> 0xf;
      uVar6 = (uVar4 ^ uVar6) - uVar6;
      if (param_2[1] < uVar6) {
        param_2[1] = uVar6;
      }
      uVar4 = (int)puVar7[2] >> 0xf;
      uVar4 = (puVar7[2] ^ uVar4) - uVar4;
      if (param_2[2] < uVar4) {
        param_2[2] = uVar4;
      }
      iVar5 = iVar5 + -1;
      puVar3 = puVar7 + 3;
    } while (iVar5 != 0);
  }
  return;
}



/* 19c7:0e8c FUN_19c7_0e8c */

int __cdecl16near FUN_19c7_0e8c(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 >> 2;
  if ((param_1 & 0x4000) != 0) {
    uVar1 = ~uVar1;
  }
  iVar2 = *(int *)(uVar1 & 0xffe);
  if ((int)param_1 < 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* 19c7:0eb9 FUN_19c7_0eb9 */

int __cdecl16near FUN_19c7_0eb9(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 >> 2;
  if ((param_1 & 0x4000) == 0) {
    uVar1 = ~uVar1;
  }
  iVar2 = *(int *)(uVar1 & 0xffe);
  if ((int)((uint)(byte)((char)(param_1 >> 8) + 0x40) << 8) < 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* 19c7:0ee9 FUN_19c7_0ee9 */

int __cdecl16near FUN_19c7_0ee9(uint param_1,uint param_2)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  byte bVar5;
  undefined2 uVar4;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  if ((int)param_2 < 0) {
    uVar6 = 8;
    param_2 = -param_2;
  }
  if ((int)param_1 < 0) {
    uVar6 = (uint)(byte)((char)uVar6 + 4);
    param_1 = -param_1;
  }
  uVar3 = param_2;
  if (param_2 < param_1) {
    uVar6 = (uint)(byte)((char)uVar6 + 2);
    uVar3 = param_1;
    param_1 = param_2;
  }
  if ((param_1 < uVar3) && (uVar3 != 0)) {
    uVar1 = ((ulong)param_1 << 0x10) / (ulong)uVar3;
    uVar4 = *(undefined2 *)(uVar6 + 0x3932);
    cVar2 = (char)uVar1;
    iVar7 = (((((uint)(byte)(uVar1 >> 8) << 1 | (uint)(cVar2 < '\0')) << 1 |
              (uint)((char)(cVar2 << 1) < '\0')) << 1 | (uint)((char)(cVar2 << 2) < '\0')) << 1 |
            (uint)((char)(cVar2 << 3) < '\0')) << 1;
  }
  else {
    uVar4 = *(undefined2 *)(uVar6 + 0x3932);
    iVar7 = 0x1ffe;
  }
  bVar5 = (byte)((uint)uVar4 >> 8);
  if ((char)uVar4 < '\0') {
    return (uint)bVar5 * 0x100 - *(int *)(iVar7 + 0x1000);
  }
  return (uint)bVar5 * 0x100 + *(int *)(iVar7 + 0x1000);
}



/* 19c7:0f5e FUN_19c7_0f5e */

uint __cdecl16near FUN_19c7_0f5e(int param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 >> 2;
  if ((param_2 & 0x4000) != 0) {
    uVar2 = ~uVar2;
  }
  iVar3 = *(int *)(uVar2 & 0xffe);
  if ((int)param_2 < 0) {
    iVar3 = -iVar3;
  }
  uVar1 = (long)iVar3 * (long)param_1;
  uVar2 = (uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0);
  if ((int)((uint)(byte)(uVar1 >> 8) << 8) < 0) {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}



/* 19c7:0f9f FUN_19c7_0f9f */

uint __cdecl16near FUN_19c7_0f9f(int param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 >> 2;
  if ((param_2 & 0x4000) == 0) {
    uVar2 = ~uVar2;
  }
  iVar3 = *(int *)(uVar2 & 0xffe);
  if ((int)((uint)(byte)((char)(param_2 >> 8) + 0x40) << 8) < 0) {
    iVar3 = -iVar3;
  }
  uVar1 = (long)iVar3 * (long)param_1;
  uVar2 = (uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0);
  if ((int)((uint)(byte)(uVar1 >> 8) << 8) < 0) {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}



/* 19c7:0fe3 FUN_19c7_0fe3 */

int __cdecl16near FUN_19c7_0fe3(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  iVar2 = *(int *)((uVar1 >> 4 & 0x7fe) + 0x3202);
  if ((int)param_1 < 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* 19c7:1013 FUN_19c7_1013 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16near FUN_19c7_1013(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
  uVar2 = (param_2 ^ (int)param_2 >> 0xf) - ((int)param_2 >> 0xf);
  if (uVar2 == uVar1) {
    uVar2 = _DAT_2a22_3c30;
  }
  else {
    uVar3 = uVar2;
    if (uVar1 <= uVar2) {
      uVar3 = uVar1;
      uVar1 = uVar2;
    }
    uVar2 = *(uint *)((uint)(byte)(((ulong)uVar3 << 0x10) / (ulong)uVar1 >> 8) * 2 + 0x3000);
  }
  uVar2 = (int)((ulong)uVar2 * (ulong)uVar1 >> 0x10) + uVar1;
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* 19c7:1062 FUN_19c7_1062 */

int __cdecl16near FUN_19c7_1062(undefined2 param_1,undefined2 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_19c7_1013(param_1,param_2);
  if (iVar1 < 0) {
    return ((param_3 ^ (int)param_3 >> 0xf) - ((int)param_3 >> 0xf) >> 1) + iVar1;
  }
  iVar1 = FUN_19c7_1013(iVar1,param_3);
  return iVar1;
}



/* 19c7:1097 FUN_19c7_1097 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16near FUN_19c7_1097(uint *param_1,undefined2 param_2)

{
  int iVar1;
  
  FUN_19c7_11ec(param_1,param_2);
  *param_1 = _DAT_2a22_7d5e << 1 | (uint)(_DAT_2a22_7d5c < 0);
  param_1[1] = _DAT_2a22_7d62 << 1 | (uint)(_DAT_2a22_7d60 < 0);
  iVar1 = _DAT_2a22_7d64 << 1;
  param_1[2] = _DAT_2a22_7d66 << 1 | (uint)(_DAT_2a22_7d64 < 0);
  return iVar1;
}



/* 19c7:1144 FUN_19c7_1144 */

void __cdecl16near FUN_19c7_1144(void)

{
  FUN_19c7_1168();
  FUN_19c7_1168();
  FUN_19c7_1168();
  return;
}



/* 19c7:1168 FUN_19c7_1168 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1168(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *in_BX;
  int *unaff_SI;
  uint *unaff_DI;
  
  iVar3 = 3;
  do {
    lVar2 = (long)*unaff_SI * (long)*in_BX + (long)unaff_SI[1] * (long)in_BX[3] +
            (long)unaff_SI[2] * (long)in_BX[6];
    iVar1 = (int)lVar2;
    _DAT_2a22_7d74 = iVar1 * 2;
    *unaff_DI = (int)((ulong)lVar2 >> 0x10) * 2 | (uint)(iVar1 < 0);
    unaff_DI = unaff_DI + 1;
    in_BX = in_BX + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



/* 19c7:11a0 FUN_19c7_11a0 */

void __cdecl16near FUN_19c7_11a0(undefined2 *param_1,undefined2 *param_2)

{
  *param_2 = *param_1;
  param_2[3] = param_1[1];
  param_2[6] = param_1[2];
  param_2[1] = param_1[3];
  param_2[4] = param_1[4];
  param_2[7] = param_1[5];
  param_2[2] = param_1[6];
  param_2[5] = param_1[7];
  param_2[8] = param_1[8];
  return;
}



/* 19c7:11d2 FUN_19c7_11d2 */

void __cdecl16near FUN_19c7_11d2(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = param_2;
    param_2 = param_2 + 1;
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 19c7:11ec FUN_19c7_11ec */

void __cdecl16near FUN_19c7_11ec(int *param_1,int *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = *param_1;
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  iVar6 = *param_2;
  *param_3 = (uint)((long)iVar3 * (long)iVar6);
  param_3[1] = (uint)((ulong)((long)iVar3 * (long)iVar6) >> 0x10);
  iVar6 = param_2[1];
  param_3[2] = (uint)((long)iVar3 * (long)iVar6);
  param_3[3] = (uint)((ulong)((long)iVar3 * (long)iVar6) >> 0x10);
  iVar6 = param_2[2];
  param_3[4] = (uint)((long)iVar3 * (long)iVar6);
  param_3[5] = (uint)((ulong)((long)iVar3 * (long)iVar6) >> 0x10);
  iVar3 = param_2[3];
  uVar7 = (uint)((long)iVar4 * (long)iVar3);
  puVar1 = param_3;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[1] = param_3[1] + (int)((ulong)((long)iVar4 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[4];
  uVar7 = (uint)((long)iVar4 * (long)iVar3);
  puVar1 = param_3 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[3] = param_3[3] + (int)((ulong)((long)iVar4 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[5];
  uVar7 = (uint)((long)iVar4 * (long)iVar3);
  puVar1 = param_3 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[5] = param_3[5] + (int)((ulong)((long)iVar4 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[6];
  uVar7 = (uint)((long)iVar5 * (long)iVar3);
  puVar1 = param_3;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[1] = param_3[1] + (int)((ulong)((long)iVar5 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[7];
  uVar7 = (uint)((long)iVar5 * (long)iVar3);
  puVar1 = param_3 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[3] = param_3[3] + (int)((ulong)((long)iVar5 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[8];
  uVar7 = (uint)((long)iVar5 * (long)iVar3);
  puVar1 = param_3 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[5] = param_3[5] + (int)((ulong)((long)iVar5 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  return;
}



/* 19c7:1267 FUN_19c7_1267 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16near
FUN_19c7_1267(undefined2 param_1,undefined2 param_2,undefined2 param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  
  _DAT_2a22_7d76 = FUN_19c7_0e8c(param_1);
  _DAT_2a22_7d78 = FUN_19c7_0eb9();
  _DAT_2a22_7d7e = FUN_19c7_0e8c(param_3);
  _DAT_2a22_7d80 = FUN_19c7_0eb9();
  _DAT_2a22_7d7a = FUN_19c7_0e8c(param_2);
  _DAT_2a22_7d7c = FUN_19c7_0eb9();
  uVar1 = (long)(int)((uint)(((ulong)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d7a) >> 0x10) << 1) |
                     (uint)((int)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d7a) < 0)) *
          (long)_DAT_2a22_7d76;
  *param_4 = ((uint)(((ulong)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d78) >> 0x10) << 1) |
             (uint)((int)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d78) < 0)) -
             ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  uVar1 = (long)(int)((uint)(((ulong)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d7a) >> 0x10) << 1) |
                     (uint)((int)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d7a) < 0)) *
          (long)_DAT_2a22_7d76;
  param_4[1] = ((uint)(((ulong)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d78) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d78) < 0)) +
               ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  param_4[2] = -((uint)(((ulong)((long)_DAT_2a22_7d7c * (long)_DAT_2a22_7d76) >> 0x10) << 1) |
                (uint)((int)((long)_DAT_2a22_7d7c * (long)_DAT_2a22_7d76) < 0));
  param_4[3] = -((uint)(((ulong)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d7c) >> 0x10) << 1) |
                (uint)((int)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d7c) < 0));
  param_4[4] = (uint)(((ulong)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d7c) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d7c) < 0);
  param_4[5] = _DAT_2a22_7d7a;
  uVar1 = (long)(int)((uint)(((ulong)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d7a) >> 0x10) << 1) |
                     (uint)((int)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d7a) < 0)) *
          (long)_DAT_2a22_7d78;
  param_4[6] = ((uint)(((ulong)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d76) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d76) < 0)) +
               ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  uVar1 = (long)(int)((uint)(((ulong)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d7a) >> 0x10) << 1) |
                     (uint)((int)((long)_DAT_2a22_7d80 * (long)_DAT_2a22_7d7a) < 0)) *
          (long)_DAT_2a22_7d78;
  param_4[7] = ((uint)(((ulong)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d76) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d7e * (long)_DAT_2a22_7d76) < 0)) -
               ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  iVar2 = (int)((long)_DAT_2a22_7d7c * (long)_DAT_2a22_7d78);
  param_4[8] = (uint)(((ulong)((long)_DAT_2a22_7d7c * (long)_DAT_2a22_7d78) >> 0x10) << 1) |
               (uint)(iVar2 < 0);
  return iVar2 << 1;
}



/* 19c7:1389 FUN_19c7_1389 */

void __cdecl16near
FUN_19c7_1389(undefined2 *param_1,undefined2 *param_2,uint *param_3,undefined2 *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar1 = FUN_19c7_0fe3(param_1[5]);
  if ((uVar1 ^ (int)uVar1 >> 0xf) - ((int)uVar1 >> 0xf) < 0x3e81) {
    uVar2 = FUN_19c7_0ee9(-param_1[2],param_1[8]);
    uVar3 = FUN_19c7_0ee9(-param_1[3],param_1[4]);
  }
  else {
    uVar2 = FUN_19c7_0ee9(param_1[6],*param_1);
    uVar3 = 0;
  }
  *param_4 = uVar3;
  *param_2 = uVar2;
  *param_3 = uVar1;
  return;
}



/* 19c7:13ec FUN_19c7_13ec */

void __cdecl16near
FUN_19c7_13ec(undefined2 *param_1,undefined2 *param_2,uint *param_3,undefined2 *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar1 = FUN_19c7_0fe3(param_1[7]);
  if ((uVar1 ^ (int)uVar1 >> 0xf) - ((int)uVar1 >> 0xf) < 0x3e81) {
    uVar2 = FUN_19c7_0ee9(-param_1[6],param_1[8]);
    uVar3 = FUN_19c7_0ee9(-param_1[1],param_1[4]);
  }
  else {
    uVar2 = FUN_19c7_0ee9(param_1[2],*param_1);
    uVar3 = 0;
  }
  *param_4 = uVar3;
  *param_2 = uVar2;
  *param_3 = uVar1;
  return;
}



/* 19c7:144f FUN_19c7_144f */

void __cdecl16near FUN_19c7_144f(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_19c7_1062(param_1[2],param_1[1],*param_1);
  uVar1 = uVar1 >> 2;
  if (uVar1 != 0) {
    *param_1 = (int)(((long)*param_1 * 0xfff) / (long)(int)uVar1) << 1;
    param_1[1] = (int)(((long)param_1[1] * 0xfff) / (long)(int)uVar1) << 1;
    param_1[2] = (int)(((long)param_1[2] * 0xfff) / (long)(int)uVar1) << 1;
  }
  return;
}



/* 19c7:1494 FUN_19c7_1494 */

void __cdecl16near FUN_19c7_1494(int param_1)

{
  FUN_19c7_144f(param_1);
  FUN_19c7_144f(param_1 + 6);
  FUN_19c7_144f(param_1 + 0xc);
  return;
}



/* 19c7:14bf FUN_19c7_14bf */

void __cdecl16near FUN_19c7_14bf(void)

{
  return;
}



/* 19c7:14d1 FUN_19c7_14d1 */

long __cdecl16near FUN_19c7_14d1(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)param_3 >> 0xf;
  uVar1 = param_3 ^ uVar2;
  if (uVar1 == uVar2) {
    param_3 = param_3 + 1;
  }
  if ((param_2 ^ (int)param_2 >> 0xf) - ((int)param_2 >> 0xf) < uVar1 - uVar2) {
    return (long)(int)(((long)param_1 * (long)(int)param_2) / (long)(int)param_3);
  }
  return (long)((int)param_2 / (int)param_3) * (long)param_1;
}



/* 19c7:1507 FUN_19c7_1507 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16near
FUN_19c7_1507(undefined2 param_1,undefined2 param_2,undefined2 param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  
  _DAT_2a22_7d76 = FUN_19c7_0e8c(param_3);
  _DAT_2a22_7d78 = FUN_19c7_0eb9();
  _DAT_2a22_7d7e = FUN_19c7_0e8c(param_1);
  _DAT_2a22_7d80 = FUN_19c7_0eb9();
  _DAT_2a22_7d7a = FUN_19c7_0e8c(param_2);
  _DAT_2a22_7d7c = FUN_19c7_0eb9();
  uVar1 = (long)(int)((uint)(((ulong)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d7a) >> 0x10) << 1) |
                     (uint)((int)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d7a) < 0)) *
          (long)_DAT_2a22_7d7e;
  *param_4 = ((uint)(((ulong)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d80) >> 0x10) << 1) |
             (uint)((int)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d80) < 0)) +
             ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  param_4[1] = (uint)(((ulong)((long)_DAT_2a22_7d7c * (long)_DAT_2a22_7d7e) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d7c * (long)_DAT_2a22_7d7e) < 0);
  uVar1 = (long)(int)((uint)(((ulong)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d7a) >> 0x10) << 1) |
                     (uint)((int)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d7a) < 0)) *
          (long)_DAT_2a22_7d7e;
  param_4[2] = ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0)) -
               ((uint)(((ulong)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d80) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d80) < 0));
  uVar1 = (long)(int)((uint)(((ulong)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d7a) >> 0x10) << 1) |
                     (uint)((int)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d7a) < 0)) *
          (long)_DAT_2a22_7d80;
  param_4[3] = ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0)) -
               ((uint)(((ulong)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d7e) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d7e) < 0));
  param_4[4] = (uint)(((ulong)((long)_DAT_2a22_7d7c * (long)_DAT_2a22_7d80) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d7c * (long)_DAT_2a22_7d80) < 0);
  uVar1 = (long)(int)((uint)(((ulong)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d7a) >> 0x10) << 1) |
                     (uint)((int)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d7a) < 0)) *
          (long)_DAT_2a22_7d80;
  param_4[5] = ((uint)(((ulong)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d7e) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d7e) < 0)) +
               ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  param_4[6] = (uint)(((ulong)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d7c) >> 0x10) << 1) |
               (uint)((int)((long)_DAT_2a22_7d76 * (long)_DAT_2a22_7d7c) < 0);
  param_4[7] = -_DAT_2a22_7d7a;
  iVar2 = (int)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d7c);
  param_4[8] = (uint)(((ulong)((long)_DAT_2a22_7d78 * (long)_DAT_2a22_7d7c) >> 0x10) << 1) |
               (uint)(iVar2 < 0);
  return iVar2 << 1;
}



/* 19c7:1628 FUN_19c7_1628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1628(int param_1,int param_2,int param_3,int param_4)

{
  _DAT_2a22_5dc0 = param_1 >> 0xf;
  _DAT_2a22_5dbe = param_1;
  _DAT_2a22_5dc4 = param_2 >> 0xf;
  _DAT_2a22_5dc2 = param_2;
  _DAT_2a22_5dc8 = param_3 >> 0xf;
  _DAT_2a22_5dc6 = param_3;
  _DAT_2a22_5dcc = param_4 >> 0xf;
  _DAT_2a22_5dca = param_4;
  FUN_19c7_19d4();
  FUN_19c7_1660();
  return;
}



/* 19c7:1660 FUN_19c7_1660 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1660(void)

{
  uint uVar1;
  int unaff_SI;
  
  _DAT_2a22_7ddc = _DAT_2a22_7ddc | *(uint *)(unaff_SI + 2);
  if ((*(uint *)(unaff_SI + 2) & 0x40) != 0) {
    FUN_19c7_1700();
  }
  uVar1 = *(uint *)(unaff_SI + 2);
  if ((uVar1 & 0x80) == 0) {
    _DAT_2a22_7de6 = _DAT_2a22_7de6 | 4;
    FUN_19c7_23a3();
    uVar1 = *(uint *)(unaff_SI + 2);
    if ((uVar1 & 3) != 0) {
      if ((uVar1 & 2) == 0) {
        uVar1 = FUN_19c7_16e5();
      }
      else {
        uVar1 = FUN_19c7_16ca();
      }
    }
    if ((uVar1 & 0xc) != 0) {
      if ((uVar1 & 8) == 0) {
        FUN_19c7_16e5();
      }
      else {
        FUN_19c7_16ca();
      }
    }
  }
  else if ((uVar1 & 3) != 0) {
    if ((uVar1 & 2) == 0) {
      FUN_19c7_16e5();
    }
    else {
      FUN_19c7_16ca();
    }
  }
  return;
}



/* 19c7:16ca FUN_19c7_16ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_16ca(void)

{
  int in_CX;
  int iVar1;
  int in_BX;
  
  iVar1 = in_CX;
  if (in_CX < in_BX) {
    iVar1 = in_BX;
    in_BX = in_CX;
  }
  if (_DAT_2a22_7de0 <= iVar1) {
    _DAT_2a22_7de0 = iVar1;
  }
  if (in_BX < _DAT_2a22_7dde) {
    _DAT_2a22_7dde = in_BX;
  }
  return;
}



/* 19c7:16e5 FUN_19c7_16e5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_16e5(void)

{
  int in_CX;
  int iVar1;
  int in_BX;
  
  iVar1 = in_CX;
  if (in_CX < in_BX) {
    iVar1 = in_BX;
    in_BX = in_CX;
  }
  if (_DAT_2a22_7de4 <= iVar1) {
    _DAT_2a22_7de4 = iVar1;
  }
  if (in_BX < _DAT_2a22_7de2) {
    _DAT_2a22_7de2 = in_BX;
  }
  return;
}



/* 19c7:1700 FUN_19c7_1700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1700(void)

{
  undefined2 *puVar1;
  int unaff_SI;
  
  puVar1 = (undefined2 *)&DAT_2a22_7db2;
  if (_DAT_2a22_7de8 != 0) {
    puVar1 = (undefined2 *)&DAT_2a22_7dba;
  }
  _DAT_2a22_7de8 = _DAT_2a22_7de8 + 1;
  *puVar1 = *(undefined2 *)(unaff_SI + 0x10);
  puVar1[1] = *(undefined2 *)(unaff_SI + 0x12);
  puVar1[2] = *(undefined2 *)(unaff_SI + 0x14);
  puVar1[3] = *(undefined2 *)(unaff_SI + 0x16);
  return;
}



/* 19c7:172a FUN_19c7_172a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_172a(undefined2 param_1)

{
  thunk_FUN_19c7_1e56(param_1);
  if (_DAT_2a22_7de8 == 2) {
    FUN_19c7_19d4();
    FUN_19c7_1660();
  }
  if (_DAT_2a22_7de6 == 0) {
    if ((_DAT_2a22_7ddc & 5) == 0) {
      _DAT_2a22_7ddc = 0;
      _DAT_2a22_7dde = 0x7fff;
      _DAT_2a22_7de0 = 0x8000;
      _DAT_2a22_7de2 = 0x7fff;
      _DAT_2a22_7de4 = 0x8000;
      _DAT_2a22_7de6 = 0;
      _DAT_2a22_7de8 = 0;
      return;
    }
    if ((_DAT_2a22_7ddc & 10) == 0) {
      _DAT_2a22_7ddc = 0;
      _DAT_2a22_7dde = 0x7fff;
      _DAT_2a22_7de0 = 0x8000;
      _DAT_2a22_7de2 = 0x7fff;
      _DAT_2a22_7de4 = 0x8000;
      _DAT_2a22_7de6 = 0;
      _DAT_2a22_7de8 = 0;
      return;
    }
    FUN_19c7_179d();
    FUN_19c7_17b1();
  }
  else {
    if ((_DAT_2a22_7ddc & 5) != 0) {
      FUN_19c7_179d();
    }
    if ((_DAT_2a22_7ddc & 10) != 0) {
      FUN_19c7_17b1();
    }
  }
  thunk_FUN_19c7_24fe();
  _DAT_2a22_7de2 = 0x7fff;
  _DAT_2a22_7dde = 0x7fff;
  _DAT_2a22_7de4 = 0x8000;
  _DAT_2a22_7de0 = 0x8000;
  _DAT_2a22_7de6 = 0;
  _DAT_2a22_7ddc = 0;
  _DAT_2a22_7de8 = 0;
  return;
}



/* 19c7:179d FUN_19c7_179d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_179d(void)

{
  FUN_19c7_2460(_DAT_2a22_7de4,_DAT_2a22_7de2,_DAT_2a22_7df8 + 1);
  return;
}



/* 19c7:17b1 FUN_19c7_17b1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_17b1(void)

{
  FUN_19c7_2460(_DAT_2a22_7de0,_DAT_2a22_7dde,_DAT_2a22_7df4 + -1);
  return;
}



/* 19c7:17c5 FUN_19c7_17c5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_17c5(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  thunk_FUN_19c7_1e56(param_5);
  _DAT_2a22_5dc0 = param_1 >> 0xf;
  _DAT_2a22_5dbe = param_1;
  _DAT_2a22_5dc4 = param_2 >> 0xf;
  _DAT_2a22_5dc2 = param_2;
  _DAT_2a22_5dc8 = param_3 >> 0xf;
  _DAT_2a22_5dc6 = param_3;
  _DAT_2a22_5dcc = param_4 >> 0xf;
  _DAT_2a22_5dca = param_4;
  FUN_19c7_19d4();
  FUN_19c7_1807();
  return;
}



/* 19c7:1807 FUN_19c7_1807 */

void __cdecl16near FUN_19c7_1807(void)

{
  int unaff_SI;
  
  if ((*(uint *)(unaff_SI + 2) & 0x80) == 0) {
    thunk_FUN_19c7_1ff3();
  }
  return;
}



/* 19c7:1822 FUN_19c7_1822 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1822(void)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar4;
  uint uVar3;
  undefined1 extraout_AH;
  int iVar5;
  int iVar6;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  int iVar7;
  int *unaff_SI;
  bool bVar8;
  
  DAT_2a22_7dea = 0;
  iVar5 = unaff_SI[6];
  FUN_19c7_1972();
  iVar7 = *unaff_SI;
  iVar6 = unaff_SI[2];
  iVar2 = FUN_19c7_1972();
  if (iVar2 == 0) {
    unaff_SI[1] = 0;
    return;
  }
  bVar4 = (byte)((uint)iVar2 >> 8);
  if (((byte)iVar2 & bVar4) != 0) {
    if ((bVar4 & (byte)iVar2 & 3) != 0) {
      unaff_SI[1] = -0x7f80;
      return;
    }
    uVar3 = FUN_19c7_18ac();
    uVar1 = 0x85;
    if ((uVar3 & 8) == 0) {
      uVar1 = 0x8a;
    }
    unaff_SI[1] = CONCAT11(uVar1,uVar1);
    return;
  }
  FUN_19c7_18ac();
  iVar2 = extraout_DX - iVar7;
  if (!SBORROW2(extraout_DX,iVar7)) {
    iVar7 = iVar5 - iVar6;
    _DAT_2a22_7dd6 = iVar2;
    if (!SBORROW2(iVar5,iVar6)) {
      bVar8 = false;
      _DAT_2a22_7dd8 = iVar7;
      DAT_2a22_7deb = extraout_AH;
      if ((DAT_2a22_7dea & 1) == 0) {
        uVar1 = FUN_19c7_1906();
        if (!bVar8) {
          *unaff_SI = iVar7;
          unaff_SI[2] = extraout_DX_00;
          uVar1 = FUN_19c7_1906();
          if (!bVar8) {
            unaff_SI[4] = iVar7;
            unaff_SI[6] = extraout_DX_01;
            return;
          }
        }
        unaff_SI[1] = CONCAT11(uVar1,uVar1) | 0x8080;
        return;
      }
    }
  }
  FUN_19c7_19b6();
  return;
}



/* 19c7:18ac FUN_19c7_18ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_18ac(void)

{
  byte in_AL;
  byte in_AH;
  undefined2 in_CX;
  undefined2 unaff_BP;
  int unaff_SI;
  byte bVar1;
  
  if ((in_AL & 1) != 0) {
    in_CX = _DAT_2a22_7df6;
  }
  if ((in_AL & 2) != 0) {
    in_CX = _DAT_2a22_7dfa;
  }
  *(undefined2 *)(unaff_SI + 6) = in_CX;
  if ((in_AH & 1) != 0) {
    unaff_BP = _DAT_2a22_7df6;
  }
  if ((in_AH & 2) != 0) {
    unaff_BP = _DAT_2a22_7dfa;
  }
  *(undefined2 *)(unaff_SI + 0xe) = unaff_BP;
  bVar1 = (in_AL & 8) != 0;
  if ((in_AL & 4) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((in_AH & 8) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((in_AH & 4) != 0) {
    bVar1 = bVar1 | 8;
  }
  *(undefined2 *)(unaff_SI + 2) = CONCAT11(bVar1,bVar1);
  return;
}



/* 19c7:1906 FUN_19c7_1906 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl16near FUN_19c7_1906(void)

{
  uint in_AX;
  int iVar1;
  int iVar2;
  int in_CX;
  int in_BX;
  
  if ((char)in_AX == '\0') {
    return CONCAT22(in_CX,in_AX);
  }
  if ((in_AX & 0xc) == 0) {
LAB_19c7_193a:
    iVar1 = _DAT_2a22_7df6;
    if ((in_AX & 1) != 0) goto LAB_19c7_1946;
  }
  else {
    iVar1 = _DAT_2a22_7df8;
    if ((in_AX & 4) != 0) {
      iVar1 = _DAT_2a22_7df4;
    }
    iVar1 = (int)(((long)(iVar1 - in_BX) * (long)_DAT_2a22_7dd8) / (long)_DAT_2a22_7dd6) + in_CX;
    in_AX = CONCAT11((char)((uint)iVar1 >> 8),1);
    if (iVar1 < _DAT_2a22_7df6) goto LAB_19c7_193a;
    if (iVar1 <= _DAT_2a22_7dfa) {
      return CONCAT22(iVar1,in_AX);
    }
  }
  iVar1 = _DAT_2a22_7dfa;
LAB_19c7_1946:
  iVar2 = (int)(((long)(iVar1 - in_CX) * (long)_DAT_2a22_7dd6) / (long)_DAT_2a22_7dd8) + in_BX;
  if (iVar2 < _DAT_2a22_7df4) {
    return CONCAT22(iVar1,0xa0a);
  }
  if (_DAT_2a22_7df8 < iVar2) {
    return CONCAT22(iVar1,0x505);
  }
  return CONCAT22(iVar1,iVar2);
}



/* 19c7:1972 FUN_19c7_1972 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __cdecl16near FUN_19c7_1972(void)

{
  byte bVar1;
  int in_CX;
  int in_BX;
  
  bVar1 = 0;
  if (SBORROW2(in_BX,_DAT_2a22_7df4)) {
    DAT_2a22_7dea = 1;
  }
  if (in_BX < _DAT_2a22_7df4) {
    bVar1 = 4;
  }
  if (_DAT_2a22_7df8 < in_BX) {
    bVar1 = bVar1 | 8;
  }
  if (SBORROW2(in_CX,_DAT_2a22_7df6)) {
    DAT_2a22_7dea = 1;
  }
  if (in_CX < _DAT_2a22_7df6) {
    bVar1 = bVar1 | 1;
  }
  if (_DAT_2a22_7dfa < in_CX) {
    return bVar1 | 2;
  }
  return bVar1;
}



/* 19c7:19b6 FUN_19c7_19b6 */

/* WARNING: Removing unreachable block (ram,0x0001b6db) */
/* WARNING: Removing unreachable block (ram,0x0001b6df) */
/* WARNING: Removing unreachable block (ram,0x0001b706) */
/* WARNING: Removing unreachable block (ram,0x0001b71d) */
/* WARNING: Removing unreachable block (ram,0x0001b758) */
/* WARNING: Removing unreachable block (ram,0x0001b760) */
/* WARNING: Removing unreachable block (ram,0x0001b762) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_19b6(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  uint unaff_BP;
  int *unaff_SI;
  int *piVar5;
  int *piVar6;
  
  unaff_SI[1] = *unaff_SI >> 0xf;
  unaff_SI[3] = unaff_SI[2] >> 0xf;
  unaff_SI[5] = unaff_SI[4] >> 0xf;
  unaff_SI[7] = unaff_SI[6] >> 0xf;
  FUN_19c7_1c6e();
  FUN_19c7_1c6e();
  if (unaff_BP == 0) {
    unaff_SI[1] = 0;
    return;
  }
  if (unaff_BP != 0) {
    if ((unaff_BP & 3) == 0) {
      uVar3 = FUN_19c7_1be2();
      unaff_SI[1] = CONCAT11(uVar3,uVar3) | 0x8080;
      return;
    }
    unaff_SI[1] = -0x7f80;
    return;
  }
  piVar6 = (int *)&DAT_2a22_7d92;
  piVar5 = unaff_SI;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  piVar5 = piVar5 + -8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  uVar3 = FUN_19c7_1be2();
  unaff_SI[1] = CONCAT11(uVar3,uVar3);
  iVar4 = FUN_19c7_1b74();
  *unaff_SI = iVar4;
  unaff_SI[2] = unaff_BP;
  return;
}



/* 19c7:19d4 FUN_19c7_19d4 */

/* WARNING: Removing unreachable block (ram,0x0001b6db) */
/* WARNING: Removing unreachable block (ram,0x0001b6df) */
/* WARNING: Removing unreachable block (ram,0x0001b706) */
/* WARNING: Removing unreachable block (ram,0x0001b71d) */
/* WARNING: Removing unreachable block (ram,0x0001b758) */
/* WARNING: Removing unreachable block (ram,0x0001b760) */
/* WARNING: Removing unreachable block (ram,0x0001b762) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_19d4(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  uint unaff_BP;
  int *unaff_SI;
  int *piVar5;
  int *piVar6;
  
  if ((((*unaff_SI >> 0xf == unaff_SI[1]) && (unaff_SI[4] >> 0xf == unaff_SI[5])) &&
      (unaff_SI[2] >> 0xf == unaff_SI[3])) && (unaff_SI[6] >> 0xf == unaff_SI[7])) {
    FUN_19c7_1822();
    return;
  }
  FUN_19c7_1c6e();
  FUN_19c7_1c6e();
  if (unaff_BP == 0) {
    unaff_SI[1] = 0;
    return;
  }
  if (unaff_BP != 0) {
    if ((unaff_BP & 3) == 0) {
      uVar3 = FUN_19c7_1be2();
      unaff_SI[1] = CONCAT11(uVar3,uVar3) | 0x8080;
      return;
    }
    unaff_SI[1] = -0x7f80;
    return;
  }
  piVar6 = (int *)&DAT_2a22_7d92;
  piVar5 = unaff_SI;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  piVar5 = piVar5 + -8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  uVar3 = FUN_19c7_1be2();
  unaff_SI[1] = CONCAT11(uVar3,uVar3);
  iVar4 = FUN_19c7_1b74();
  *unaff_SI = iVar4;
  unaff_SI[2] = unaff_BP;
  return;
}



/* 19c7:1af8 FUN_19c7_1af8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_19c7_1af8(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  bool bVar6;
  undefined4 uVar7;
  
  _DAT_2a22_7dda = 0x20;
  uVar1 = *unaff_DI;
  uVar5 = unaff_DI[2];
  iVar3 = unaff_DI[3];
  while( true ) {
    _DAT_2a22_7dda = _DAT_2a22_7dda + -1;
    if (_DAT_2a22_7dda < 0) {
      return uVar1;
    }
    uVar2 = iVar3 + unaff_SI[3] + (uint)CARRY2(uVar5,unaff_SI[2]);
    iVar3 = (int)uVar2 >> 1;
    bVar6 = iVar3 == 0;
    uVar5 = (uint)(CONCAT12((uVar2 & 1) != 0,uVar5 + unaff_SI[2]) >> 1);
    uVar7 = FUN_19c7_1c6e();
    uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
    uVar1 = (undefined2)uVar7;
    if (bVar6) break;
    if ((_DAT_2a22_7dd4 & unaff_BP) == 0) {
      *unaff_SI = uVar1;
      unaff_SI[1] = uVar4;
      unaff_SI[2] = uVar5;
      unaff_SI[3] = iVar3;
      uVar1 = *unaff_DI;
      uVar5 = unaff_DI[2];
      iVar3 = unaff_DI[3];
    }
    else {
      if ((_DAT_2a22_7dd2 & unaff_BP) != 0) {
        return uVar1;
      }
      *unaff_DI = uVar1;
      unaff_DI[1] = uVar4;
      unaff_DI[2] = uVar5;
      unaff_DI[3] = iVar3;
    }
  }
  return uVar1;
}



/* 19c7:1b74 FUN_19c7_1b74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_19c7_1b74(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  bool bVar4;
  undefined4 uVar5;
  
  _DAT_2a22_7dda = 0x20;
  uVar3 = unaff_DI[2];
  uVar2 = unaff_DI[3];
  while( true ) {
    while( true ) {
      _DAT_2a22_7dda = _DAT_2a22_7dda + -1;
      if (_DAT_2a22_7dda < 0) {
        return *unaff_SI;
      }
      bVar4 = CARRY2(uVar3,unaff_SI[2]);
      uVar3 = uVar3 + unaff_SI[2];
      uVar2 = uVar2 + unaff_SI[3] + (uint)bVar4;
      if (uVar3 == uVar2) {
        bVar4 = false;
        if (uVar3 == 0xffff) {
          uVar3 = 0;
          uVar2 = 0;
          bVar4 = true;
        }
      }
      else {
        uVar1 = uVar2 & 1;
        uVar2 = (int)uVar2 >> 1;
        bVar4 = uVar2 == 0;
        uVar3 = (uint)(CONCAT12(uVar1 != 0,uVar3) >> 1);
      }
      uVar5 = FUN_19c7_1c6e();
      if (bVar4) break;
      *unaff_DI = (int)uVar5;
      unaff_DI[1] = (int)((ulong)uVar5 >> 0x10);
      unaff_DI[2] = uVar3;
      unaff_DI[3] = uVar2;
    }
    uVar5 = FUN_19c7_1c47();
    if (!bVar4) break;
    *unaff_SI = (int)uVar5;
    unaff_SI[1] = (int)((ulong)uVar5 >> 0x10);
    unaff_SI[2] = uVar3;
    unaff_SI[3] = uVar2;
    uVar3 = unaff_DI[2];
    uVar2 = unaff_DI[3];
  }
  return (int)uVar5;
}



/* 19c7:1be2 FUN_19c7_1be2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1be2(void)

{
  undefined2 uVar1;
  uint unaff_BP;
  int unaff_SI;
  uint unaff_DI;
  
  if ((unaff_BP & 1) == 0) {
    if ((unaff_BP & 2) == 0) {
      uVar1 = *(undefined2 *)(unaff_SI + 4);
    }
    else {
      uVar1 = _DAT_2a22_7dfa;
    }
  }
  else {
    uVar1 = _DAT_2a22_7df6;
  }
  *(undefined2 *)(unaff_SI + 6) = uVar1;
  if ((unaff_DI & 1) == 0) {
    if ((unaff_DI & 2) == 0) {
      uVar1 = *(undefined2 *)(unaff_SI + 0xc);
    }
    else {
      uVar1 = _DAT_2a22_7dfa;
    }
  }
  else {
    uVar1 = _DAT_2a22_7df6;
  }
  *(undefined2 *)(unaff_SI + 0xe) = uVar1;
  return;
}



/* 19c7:1c47 FUN_19c7_1c47 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1c47(void)

{
  int in_AX;
  int in_CX;
  int in_DX;
  int in_BX;
  
  if (((in_DX == 0) && (in_CX == 0)) &&
     ((in_AX == _DAT_2a22_7df4 ||
      (((in_AX == _DAT_2a22_7df8 || (in_BX == _DAT_2a22_7df6)) || (in_BX == _DAT_2a22_7dfa)))))) {
    return;
  }
  return;
}



/* 19c7:1c6e FUN_19c7_1c6e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1c6e(void)

{
  int in_CX;
  uint in_BX;
  
  if (in_CX < 0) {
    return;
  }
  if (in_CX == 0) {
    if (in_BX < _DAT_2a22_7df6) {
      return;
    }
    if (in_BX <= _DAT_2a22_7dfa) {
      return;
    }
  }
  return;
}



/* 19c7:1caa FUN_19c7_1caa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1caa(byte param_1)

{
  if (0x60 < param_1) {
    param_1 = param_1 - 0x20;
  }
  _DAT_2a22_7dee = (uint)param_1;
  if (param_1 == 0x45) {
    FUN_19c7_1d8c();
    return;
  }
  if (param_1 == 0x4d) {
    FUN_19c7_1daf();
    return;
  }
  if (param_1 == 0x43) {
    FUN_19c7_1dcb();
    return;
  }
  if (param_1 == 0x54) {
    FUN_19c7_1dee();
    return;
  }
  return;
}



/* 19c7:1ce1 thunk_FUN_19c7_1ec4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near thunk_FUN_19c7_1ec4(void)

{
  (*(code *)*(undefined2 *)(_DAT_2a22_7dec + 2))();
  return;
}



/* 19c7:1ce9 thunk_FUN_19c7_1e56 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near thunk_FUN_19c7_1e56(void)

{
  (*(code *)*(undefined2 *)(_DAT_2a22_7dec + 4))();
  return;
}



/* 19c7:1cf1 thunk_FUN_19c7_1ff3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near thunk_FUN_19c7_1ff3(void)

{
  (*(code *)*(undefined2 *)(_DAT_2a22_7dec + 6))();
  return;
}



/* 19c7:1cf9 thunk_FUN_19c7_24fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near thunk_FUN_19c7_24fe(void)

{
  (*(code *)*(undefined2 *)(_DAT_2a22_7dec + 8))();
  return;
}



/* 19c7:1d39 FUN_19c7_1d39 */

undefined2 __cdecl16near FUN_19c7_1d39(uint param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 in_CF;
  
  iVar3 = -1;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (((bool)in_CF) && (iVar3 - 0x400U <= param_1)) {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return 0;
}



/* 19c7:1d8c FUN_19c7_1d8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1d8c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (_DAT_2a22_8968 == 0) {
    iVar3 = 200;
    piVar4 = (int *)&DAT_2a22_7e16;
    iVar2 = 0;
    do {
      piVar1 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar1 = iVar2;
      iVar2 = iVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    _DAT_2a22_7dec = 0x1d09;
    return;
  }
  iVar3 = 0x1e0;
  piVar4 = (int *)&DAT_2a22_7e16;
  iVar2 = 0;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    *piVar1 = iVar2;
    iVar2 = iVar2 + 0x50;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _DAT_2a22_7dec = 0x1d09;
  _DAT_2a22_896a = 0x4f;
  _DAT_2a22_896c = 0xffaf;
  return;
}



/* 19c7:1daf FUN_19c7_1daf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1daf(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 200;
  piVar4 = (int *)&DAT_2a22_7e16;
  iVar2 = 0;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    *piVar1 = iVar2;
    iVar2 = iVar2 + 0x140;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _DAT_2a22_7dec = 0x1d15;
  return;
}



/* 19c7:1dcb FUN_19c7_1dcb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1dcb(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 100;
  piVar4 = (int *)&DAT_2a22_7e16;
  iVar2 = 0;
  do {
    piVar1 = piVar4 + 1;
    *piVar4 = iVar2;
    piVar4 = piVar4 + 2;
    *piVar1 = iVar2 + 0x2000;
    iVar2 = iVar2 + 0x50;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _DAT_2a22_7dec = 0x1d21;
  return;
}



/* 19c7:1dee FUN_19c7_1dee */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1dee(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0x32;
  piVar4 = (int *)&DAT_2a22_7e16;
  iVar2 = 0;
  do {
    *piVar4 = iVar2;
    piVar4[1] = iVar2 + 0x2000;
    piVar1 = piVar4 + 3;
    piVar4[2] = iVar2 + 0x4000;
    piVar4 = piVar4 + 4;
    *piVar1 = iVar2 + 0x6000;
    iVar2 = iVar2 + 0xa0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _DAT_2a22_7dec = 0x1d2d;
  return;
}



/* 19c7:1e40 FUN_19c7_1e40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1e40(int param_1)

{
  _DAT_2a22_7df0 = param_1;
  _DAT_2a22_7e14 = *(undefined2 *)(param_1 * 2 + 0x39bc);
  return;
}



/* 19c7:1e56 FUN_19c7_1e56 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl16near FUN_19c7_1e56(void)

{
  int iVar1;
  uint in_AX;
  
  _DAT_2a22_7e00 = in_AX & 0xff;
  iVar1 = *(int *)((in_AX & 0xff) * 2 + 0x455c);
  out(0x3ce,iVar1 << 8);
  out(0x3ce,CONCAT11((char)((uint)iVar1 >> 8),1));
  return CONCAT22(0x3ce,_DAT_2a22_7e14);
}



/* 19c7:1e82 FUN_19c7_1e82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1e82(void)

{
  undefined1 uVar1;
  byte bVar2;
  uint in_AX;
  uint uVar3;
  
  _DAT_2a22_7e00 = in_AX;
  uVar1 = *(undefined1 *)((in_AX & 0xf) + 0x4522);
  _DAT_2a22_8982 = CONCAT11(uVar1,uVar1);
  uVar3 = _DAT_2a22_8982 & 0x3333;
  bVar2 = (char)uVar3 << 2 | (byte)(uVar3 >> 8);
  _DAT_2a22_8984 = CONCAT11(bVar2,bVar2);
  return;
}



/* 19c7:1ea7 FUN_19c7_1ea7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_19c7_1ea7(void)

{
  char in_AL;
  byte bVar1;
  uint uVar2;
  
  _DAT_2a22_7e00 = CONCAT11(in_AL,in_AL);
  uVar2 = CONCAT11(in_AL,in_AL << 4) & 0xfff;
  bVar1 = (byte)uVar2 | (byte)(uVar2 >> 8);
  _DAT_2a22_8986 = CONCAT11(bVar1,bVar1);
  return _DAT_2a22_7e14;
}



/* 19c7:1ec4 FUN_19c7_1ec4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1ec4(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 extraout_DX;
  uint unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  if ((_DAT_2a22_7df4 <= param_1) && (param_1 <= _DAT_2a22_7df8)) {
    _DAT_2a22_895c = param_1;
    if ((_DAT_2a22_7df6 <= param_2) && (param_2 <= _DAT_2a22_7dfa)) {
      _DAT_2a22_895e = param_2;
      FUN_19c7_1e56();
      uVar1 = FUN_19c7_1fce();
      out(extraout_DX,uVar1);
      uVar1 = 0x55;
      if ((unaff_SI & 2) != 0) {
        uVar1 = 0xaa;
      }
      *unaff_DI = uVar1;
    }
  }
  return;
}



/* 19c7:1f05 FUN_19c7_1f05 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1f05(int param_1,int param_2,undefined2 param_3)

{
  if ((_DAT_2a22_7df4 <= param_1) && (param_1 <= _DAT_2a22_7df8)) {
    _DAT_2a22_895c = param_1;
    if ((_DAT_2a22_7df6 <= param_2) && (param_2 <= _DAT_2a22_7dfa)) {
      _DAT_2a22_7e00 = param_3;
      *(undefined1 *)(*(int *)(param_2 << 1) + param_1) = (char)param_3;
    }
  }
  return;
}



/* 19c7:1f40 FUN_19c7_1f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1f40(uint param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte *pbVar4;
  
  uVar2 = _DAT_2a22_7e14;
  if ((((_DAT_2a22_7df4 <= (int)param_1) && ((int)param_1 <= _DAT_2a22_7df8)) &&
      (_DAT_2a22_7df6 <= param_2)) && (param_2 <= _DAT_2a22_7dfa)) {
    pbVar4 = (byte *)(*(int *)(param_2 << 1) + ((int)param_1 >> 2));
    bVar3 = FUN_19c7_1e82();
    bVar1 = *(byte *)((param_1 & 3) + 0x4538);
    *pbVar4 = bVar3 & bVar1 | ~bVar1 & *pbVar4;
  }
  return;
}



/* 19c7:1f8b FUN_19c7_1f8b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1f8b(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined2 unaff_ES;
  
  if ((((_DAT_2a22_7df4 <= (int)param_1) && ((int)param_1 <= _DAT_2a22_7df8)) &&
      (_DAT_2a22_7df6 <= param_2)) && (param_2 <= _DAT_2a22_7dfa)) {
    pbVar3 = (byte *)(*(int *)(param_2 << 1) + ((int)param_1 >> 1));
    bVar1 = FUN_19c7_1ea7();
    bVar2 = 0xf0;
    if ((param_1 & 1) != 0) {
      bVar2 = 0xf;
    }
    *pbVar3 = bVar1 & bVar2 | ~bVar2 & *pbVar3;
  }
  return;
}



/* 19c7:1fce FUN_19c7_1fce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl16near FUN_19c7_1fce(void)

{
  out(0x3ce,8);
  return *(undefined1 *)((_DAT_2a22_895c & 7) + 0x4544);
}



/* 19c7:1ff3 FUN_19c7_1ff3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_1ff3(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *unaff_SI;
  byte *unaff_DI;
  bool bVar12;
  undefined4 uVar13;
  
  uVar2 = _DAT_2a22_7e14;
  _DAT_2a22_895c = *unaff_SI;
  _DAT_2a22_8960 = unaff_SI[4];
  _DAT_2a22_895e = unaff_SI[2];
  _DAT_2a22_8962 = unaff_SI[6];
  uVar3 = _DAT_2a22_895c;
  uVar8 = _DAT_2a22_895e;
  if (_DAT_2a22_8960 == _DAT_2a22_895c) {
    if (_DAT_2a22_895e == _DAT_2a22_8962) {
      uVar4 = FUN_19c7_1fce();
      out(extraout_DX,uVar4);
      bVar6 = 0x55;
      if (((uint)unaff_SI & 2) != 0) {
        bVar6 = 0xaa;
      }
      *unaff_DI = bVar6;
      return;
    }
  }
  else if (_DAT_2a22_8960 < _DAT_2a22_895c) {
    uVar3 = _DAT_2a22_8960;
    uVar8 = _DAT_2a22_8962;
    _DAT_2a22_8960 = _DAT_2a22_895c;
    _DAT_2a22_8962 = _DAT_2a22_895e;
  }
  _DAT_2a22_895e = uVar8;
  _DAT_2a22_895c = uVar3;
  _DAT_2a22_8964 = _DAT_2a22_8960 - _DAT_2a22_895c;
  _DAT_2a22_8966 = _DAT_2a22_8962 - _DAT_2a22_895e;
  iVar11 = _DAT_2a22_896a;
  if ((int)_DAT_2a22_8966 < 0) {
    _DAT_2a22_8966 = -_DAT_2a22_8966;
    iVar11 = _DAT_2a22_896c;
  }
  if (_DAT_2a22_8964 < _DAT_2a22_8966) {
    uVar13 = FUN_19c7_1fce();
    uVar3 = _DAT_2a22_8964;
    uVar7 = (uint)uVar13;
    uVar10 = -(_DAT_2a22_8966 + 1 >> 1);
    uVar8 = _DAT_2a22_8966;
    while( true ) {
      bVar6 = (byte)uVar7;
      out((int)((ulong)uVar13 >> 0x10),bVar6);
      uVar7 = uVar7 & 0xff;
      *unaff_DI = bVar6;
      uVar8 = uVar8 - 1;
      if ((int)uVar8 < 0) break;
      bVar12 = CARRY2(uVar10,uVar3);
      uVar10 = uVar10 + uVar3;
      if (-1 < (int)uVar10) {
        uVar10 = uVar10 - _DAT_2a22_8966;
        bVar12 = (bool)(bVar6 & 1);
        uVar7 = (uint)(byte)(bVar6 >> 1 | bVar6 << 7);
      }
      unaff_DI = unaff_DI + (uint)bVar12 + iVar11 + 1;
    }
    return;
  }
  bVar5 = FUN_19c7_1fce();
  uVar3 = _DAT_2a22_8966;
  iVar9 = -(_DAT_2a22_8964 + 1 >> 1);
  uVar8 = _DAT_2a22_8964;
  bVar6 = bVar5;
LAB_19c7_209e:
  bVar6 = bVar6 | bVar5;
  uVar8 = uVar8 - 1;
  if ((int)uVar8 < 0) {
    out(extraout_DX_00,bVar6);
    *unaff_DI = bVar6;
    return;
  }
  iVar9 = iVar9 + uVar3;
  if (iVar9 < 0) goto code_r0x0001bd17;
  iVar9 = iVar9 - _DAT_2a22_8964;
  out(extraout_DX_00,bVar6);
  *unaff_DI = bVar6;
  bVar6 = bVar5 & 1;
  bVar5 = bVar5 >> 1 | bVar5 << 7;
  unaff_DI = unaff_DI + (uint)bVar6 + iVar11 + 1;
  goto LAB_19c7_209c;
code_r0x0001bd17:
  bVar12 = (bool)(bVar5 & 1);
  bVar5 = bVar5 >> 1 | bVar5 << 7;
  if (bVar12) {
    out(extraout_DX_00,bVar6);
    pbVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pbVar1 = bVar6;
LAB_19c7_209c:
    bVar6 = bVar5;
  }
  goto LAB_19c7_209e;
}



/* 19c7:23a3 FUN_19c7_23a3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_23a3(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_SI;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar5 = *unaff_SI;
  iVar6 = unaff_SI[4];
  iVar1 = iVar5;
  iVar4 = unaff_SI[2];
  iVar7 = unaff_SI[6];
  if (iVar6 < iVar5) {
    iVar1 = iVar6;
    iVar6 = iVar5;
    iVar4 = unaff_SI[6];
    iVar7 = unaff_SI[2];
  }
  iVar9 = iVar4 << 1;
  uVar3 = iVar6 - iVar1;
  iVar6 = 2;
  iVar5 = iVar4;
  if (iVar7 < iVar4) {
    iVar6 = -2;
    iVar5 = iVar7;
    iVar7 = iVar4;
  }
  if ((((_DAT_2a22_7df6 <= iVar5) && (iVar5 <= _DAT_2a22_7dfa)) && (_DAT_2a22_7df6 <= iVar7)) &&
     (iVar7 <= _DAT_2a22_7dfa)) {
    if (iVar5 < _DAT_2a22_895a) {
      _DAT_2a22_895a = iVar5;
    }
    uVar8 = iVar7 - iVar5;
    if (uVar3 < uVar8) {
      uVar2 = uVar8 + 1;
      iVar5 = -(uVar2 >> 1);
      while( true ) {
        while( true ) {
          if (iVar1 < *(int *)((undefined *)&DAT_2a22_81d6 + iVar9)) {
            *(int *)((undefined *)&DAT_2a22_81d6 + iVar9) = iVar1;
          }
          if (*(int *)((undefined *)&DAT_2a22_8598 + iVar9) < iVar1) {
            *(int *)((undefined *)&DAT_2a22_8598 + iVar9) = iVar1;
          }
          iVar5 = iVar5 + uVar3;
          if (-1 < iVar5) break;
          iVar9 = iVar9 + iVar6;
          uVar2 = uVar2 - 1;
          if (uVar2 == 0) {
            return;
          }
        }
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) break;
        iVar5 = iVar5 - uVar8;
        iVar1 = iVar1 + 1;
        iVar9 = iVar9 + iVar6;
      }
      return;
    }
    uVar2 = uVar3 + 1;
    iVar5 = -(uVar2 >> 1);
    while( true ) {
      if (iVar1 < *(int *)((undefined *)&DAT_2a22_81d6 + iVar9)) {
        *(int *)((undefined *)&DAT_2a22_81d6 + iVar9) = iVar1;
      }
      while (iVar4 = iVar1, iVar5 = iVar5 + uVar8, iVar5 < 0) {
        uVar2 = uVar2 - 1;
        iVar1 = iVar4 + 1;
        if (uVar2 == 0) {
          if (*(int *)((undefined *)&DAT_2a22_8598 + iVar9) < iVar4) {
            *(int *)((undefined *)&DAT_2a22_8598 + iVar9) = iVar4;
            return;
          }
          return;
        }
      }
      if (*(int *)((undefined *)&DAT_2a22_8598 + iVar9) < iVar4) {
        *(int *)((undefined *)&DAT_2a22_8598 + iVar9) = iVar4;
      }
      iVar5 = iVar5 - uVar3;
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) break;
      iVar1 = iVar4 + 1;
      iVar9 = iVar9 + iVar6;
    }
  }
  return;
}



/* 19c7:2460 FUN_19c7_2460 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_2460(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < param_1) {
    iVar1 = param_1;
    param_1 = param_2;
  }
  if ((_DAT_2a22_7df6 < iVar1) && (param_1 < _DAT_2a22_7dfa)) {
    if (param_1 < _DAT_2a22_7df6) {
      param_1 = _DAT_2a22_7df6;
    }
    if (_DAT_2a22_7dfa < iVar1) {
      iVar1 = _DAT_2a22_7dfa;
    }
    if (iVar1 - param_1 != 0) {
      if (param_1 < _DAT_2a22_895a) {
        _DAT_2a22_895a = param_1;
      }
      iVar1 = (iVar1 - param_1) + 1;
      param_1 = param_1 << 1;
      do {
        if (param_3 < *(int *)((undefined *)&DAT_2a22_81d6 + param_1)) {
          *(int *)((undefined *)&DAT_2a22_81d6 + param_1) = param_3;
        }
        if (*(int *)((undefined *)&DAT_2a22_8598 + param_1) < param_3) {
          *(int *)((undefined *)&DAT_2a22_8598 + param_1) = param_3;
        }
        param_1 = param_1 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}



/* 19c7:24fe FUN_19c7_24fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_24fe(void)

{
  if (_DAT_2a22_895a < 0x7fff) {
    out(0x3ce,8);
    FUN_19c7_251b();
    return;
  }
  _DAT_2a22_895a = 0x7fff;
  return;
}



/* 19c7:251b FUN_19c7_251b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_251b(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 in_DX;
  uint uVar6;
  uint unaff_SI;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  
  while( true ) {
    uVar4 = *(uint *)((undefined *)&DAT_2a22_81d6 + unaff_SI);
    uVar6 = *(uint *)((undefined *)&DAT_2a22_8598 + unaff_SI);
    if (uVar4 == 0x7fff) {
      _DAT_2a22_895a = 0x7fff;
      return;
    }
    if (((int)_DAT_2a22_7df8 < (int)uVar4) || ((int)uVar6 < (int)_DAT_2a22_7df4)) break;
    if ((int)uVar4 < (int)_DAT_2a22_7df4) {
      uVar4 = _DAT_2a22_7df4;
    }
    if ((int)_DAT_2a22_7df8 < (int)uVar6) {
      uVar6 = _DAT_2a22_7df8;
    }
    pbVar7 = (byte *)(*(int *)((undefined *)&DAT_2a22_7e16 + unaff_SI) + (uVar4 >> 3));
    iVar3 = (uVar6 >> 3) - (uVar4 >> 3);
    if (iVar3 == 0) {
      out(in_DX,*(byte *)((uVar4 & 7) + 0x454c) & *(byte *)((uVar6 & 7) + 0x4554));
      bVar2 = DAT_2a22_896e | 0x55;
      if ((unaff_SI & 2) != 0) {
        bVar2 = bVar2 << 1 | (char)bVar2 < '\0';
      }
      *pbVar7 = bVar2;
    }
    else {
      out(in_DX,*(undefined1 *)((uVar4 & 7) + 0x454c));
      bVar2 = DAT_2a22_896e | 0x55;
      if ((unaff_SI & 2) != 0) {
        bVar2 = bVar2 << 1 | (char)bVar2 < '\0';
      }
      pbVar8 = pbVar7 + 1;
      *pbVar7 = bVar2;
      out(in_DX,0xff);
      uVar4 = iVar3 - 1;
      if (uVar4 != 0) {
        if (((uint)pbVar8 & 1) != 0) {
          pbVar1 = pbVar8;
          pbVar8 = pbVar7 + 2;
          *pbVar1 = bVar2;
          uVar4 = iVar3 - 2;
        }
        uVar5 = uVar4 >> 1;
        if (uVar5 != 0) {
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            pbVar1 = pbVar8;
            pbVar8 = pbVar8 + 2;
            *(uint *)pbVar1 = CONCAT11(bVar2,bVar2);
          }
        }
        if ((uVar4 & 1) != 0) {
          pbVar1 = pbVar8;
          pbVar8 = pbVar8 + 1;
          *pbVar1 = bVar2;
        }
      }
      out(in_DX,*(undefined1 *)((uVar6 & 7) + 0x4554));
      *pbVar8 = bVar2;
    }
    *(undefined2 *)((undefined *)&DAT_2a22_81d6 + unaff_SI) = 0x7fff;
    *(undefined2 *)((undefined *)&DAT_2a22_8598 + unaff_SI) = 0x8001;
    unaff_SI = unaff_SI + 2;
    if (_DAT_2a22_7dfa < unaff_SI >> 1) {
      _DAT_2a22_895a = 0x7fff;
      return;
    }
  }
  *(undefined2 *)((undefined *)&DAT_2a22_81d6 + unaff_SI) = 0x7fff;
  *(undefined2 *)((undefined *)&DAT_2a22_8598 + unaff_SI) = 0x8001;
  FUN_19c7_251b();
  return;
}



/* 19c7:2854 msc_runtime_startup */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl16far msc_runtime_startup(undefined1 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  char extraout_DH;
  uint extraout_DX;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int unaff_ES;
  bool bVar13;
  undefined *puStack_f24;
  undefined *puStack_f22;
  undefined2 uStack_f20;
  undefined *puStack_f1e;
  undefined2 uStack_f1c;
  
  pcVar4 = (code *)swi(0x21);
  bVar5 = (*pcVar4)();
  if (bVar5 < 2) {
    pcVar4 = (code *)swi(0x20);
    (*pcVar4)();
  }
  uVar9 = _DAT_2a22_4452 + 0xd199;
  if (0xfff < uVar9) {
    uVar9 = 0x1000;
  }
  if ((undefined1 *)0xf21 < &param_1) {
    uStack_f20 = 0x19c7;
    puStack_f22 = (undefined *)&DAT_3000_ab61;
    FUN_19c7_2a7c();
    uStack_f20 = 0;
    puStack_f22 = (undefined *)0x19c7;
    puStack_f24 = (undefined *)&DAT_3000_ab69;
    FUN_19c7_2d1b();
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
  }
  _DAT_2a22_d33a = &puStack_f1e;
  _DAT_2a22_d336 = &puStack_f1e;
  _DAT_2a22_d334 = uVar9 * 0x10 + -1;
  _DAT_2a22_4452 = uVar9 + 0x2e67;
  iVar8 = -(unaff_ES - _DAT_2a22_4452);
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  _DAT_2a22_d3ab = 0x2e67;
  puVar11 = (undefined1 *)&DAT_2a22_d90f;
  for (iVar7 = 0x5c21; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar2 = 0;
  }
                    /* WARNING: Call to offcut address within same function */
  uStack_f1c = 0x19c7;
  puStack_f1e = (undefined *)0xc541;
  func_0x0001c58a();
  uStack_f1c = 0x19c7;
  puStack_f1e = (undefined *)0xc548;
  FUN_19c7_2c82();
  uStack_f1c = 0x19c7;
  puStack_f1e = (undefined *)&DAT_3000_abbd;
  FUN_19c7_2af0();
  uStack_f1c = _DAT_2a22_d3cc;
  puStack_f1e = _DAT_2a22_d3ca;
  uStack_f20 = _DAT_2a22_d3c8;
  puStack_f22 = (undefined *)0x19c7;
  puStack_f24 = (undefined *)0xc560;
  puStack_f22 = (undefined *)game_main();
  puStack_f24 = (undefined *)0x1000;
  FUN_19c7_29de();
  _DAT_2a22_d338 = (code *)0x29de;
  puStack_f24 = (undefined *)0x3;
  FUN_19c7_2a7c();
  FUN_19c7_2d1b();
  puStack_f24 = (undefined *)0xff;
  (*_DAT_2a22_d338)(0x19c7);
  *(char *)(uVar9 - 0x469) = *(char *)(uVar9 - 0x469) + extraout_DH;
  *(uint *)(puVar11 + -0x70a3) = *(uint *)(puVar11 + -0x70a3) & (uint)&puStack_f24;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  _DAT_2a22_d39b = 0x2e67;
  puStack_f22 = (undefined *)0x19c7;
  pcVar4 = (code *)swi(0x21);
  _DAT_2a22_d399 = iVar8;
  (*pcVar4)();
  if (_DAT_2a22_d7f8 != 0) {
    bVar13 = false;
    puStack_f1e = (undefined *)0x19c7;
    uStack_f20 = 0xc5c6;
    (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
    if (bVar13) {
      puStack_f1e = (undefined *)0x2e67;
      FUN_19c7_2aa0();
      return;
    }
    puStack_f1e = (undefined *)0x19c7;
    uStack_f20 = 0xc5dc;
    (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
  }
  iVar7 = *(int *)&DAT_2a22_447c;
  if (iVar7 != 0) {
    pcVar12 = (char *)0x0;
    do {
      if (*pcVar12 == '\0') break;
      iVar8 = 0xc;
      pcVar10 = (char *)&DAT_2a22_d38c;
      bVar13 = false;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar3 = pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar1 = pcVar10;
        pcVar10 = pcVar10 + 1;
        bVar13 = *pcVar1 == *pcVar3;
      } while (bVar13);
      if (bVar13) {
        uStack_f20 = 0x2e67;
        pcVar10 = (char *)&DAT_2a22_d3b4;
        iVar8 = (int)*pcVar12;
        do {
          pcVar12 = pcVar12 + 1;
          cVar6 = '\0';
          if (*pcVar12 != -1) {
            cVar6 = *pcVar12;
          }
          pcVar1 = pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar1 = cVar6;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        break;
      }
      iVar8 = 0x7fff;
      bVar13 = true;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar1 = pcVar12;
        pcVar12 = pcVar12 + 1;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
    } while (bVar13);
  }
  puStack_f1e = (undefined *)0x2e67;
  iVar7 = 4;
  do {
    bVar13 = false;
    ((undefined *)&DAT_2a22_d3b4)[iVar7] = ((undefined *)&DAT_2a22_d3b4)[iVar7] & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar13) && ((extraout_DX & 0x80) != 0)) {
      ((undefined *)&DAT_2a22_d3b4)[iVar7] = ((undefined *)&DAT_2a22_d3b4)[iVar7] | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  puStack_f1e = (undefined *)0xc644;
  FUN_19c7_2a69();
  puStack_f1e = (undefined *)0xc64d;
  FUN_19c7_2a69();
  return;
}



/* 19c7:29de FUN_19c7_29de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19c7_29de(undefined2 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  iVar2 = FUN_19c7_2aca();
  if ((iVar2 != 0) && (param_2 == 0)) {
    param_2 = 0xff;
  }
  iVar2 = 0xf;
  iVar3 = 5;
  do {
    if ((((undefined *)&DAT_2a22_d3b4)[iVar3] & 1) != 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_19c7_2a3c();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (_DAT_2a22_d7f8 != 0) {
    (*_DAT_2a22_d7f6)();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x8f86 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* 19c7:29f5 FUN_19c7_29f5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19c7_29f5(undefined2 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  iVar2 = FUN_19c7_2aca();
  if ((iVar2 != 0) && (param_2 == 0)) {
    param_2 = 0xff;
  }
  iVar2 = 0xf;
  iVar3 = 5;
  do {
    if ((((undefined *)&DAT_2a22_d3b4)[iVar3] & 1) != 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_19c7_2a3c();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (_DAT_2a22_d7f8 != 0) {
    (*_DAT_2a22_d7f6)();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x8f86 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* 19c7:2a3c FUN_19c7_2a3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_2a3c(undefined2 param_1)

{
  code *pcVar1;
  
  if (_DAT_2a22_d7f8 != 0) {
    (*_DAT_2a22_d7f6)(0x19c7);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x8f86 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* 19c7:2a69 FUN_19c7_2a69 */

void __cdecl16near FUN_19c7_2a69(void)

{
  int *piVar1;
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  
  while (unaff_SI < unaff_DI) {
    piVar2 = unaff_DI + -2;
    piVar1 = unaff_DI + -1;
    unaff_DI = piVar2;
    if (*piVar2 != 0 || *piVar1 != 0) {
      (*(code *)*piVar2)(0x19c7);
    }
  }
  return;
}



/* 19c7:2a7c FUN_19c7_2a7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_2a7c(void)

{
  FUN_19c7_2d1b(0xfc);
  if (_DAT_2a22_d3de != 0) {
    (*_DAT_2a22_d3dc)(0x19c7);
  }
  FUN_19c7_2d1b(0xff);
  return;
}



/* 19c7:2aa0 FUN_19c7_2aa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_2aa0(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  char extraout_DH;
  uint extraout_DX;
  int iVar6;
  undefined2 in_BX;
  int unaff_BP;
  char *pcVar7;
  int unaff_SI;
  char *pcVar8;
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar9;
  undefined2 uStack_2;
  
  uStack_2 = 2;
  FUN_19c7_2a7c();
  FUN_19c7_2d1b();
  uStack_2 = 0xff;
  (*_DAT_2a22_d338)(0x19c7);
  *(char *)(unaff_SI + -0x32d0) = *(char *)(unaff_SI + -0x32d0) + extraout_DH;
  *(uint *)((undefined *)&DAT_2a22_d3ad + unaff_BP + unaff_DI) =
       *(uint *)((undefined *)&DAT_2a22_d3ad + unaff_BP + unaff_DI) & (uint)&uStack_2;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x21);
  _DAT_2a22_d399 = in_BX;
  _DAT_2a22_d39b = unaff_ES;
  (*pcVar3)();
  if (_DAT_2a22_d7f8 != 0) {
    bVar9 = false;
    (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
    if (bVar9) {
      FUN_19c7_2aa0();
      return;
    }
    (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
  }
  iVar6 = *(int *)&DAT_2a22_447c;
  if (iVar6 != 0) {
    pcVar8 = (char *)0x0;
    do {
      if (*pcVar8 == '\0') break;
      iVar5 = 0xc;
      pcVar7 = (char *)&DAT_2a22_d38c;
      bVar9 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
        bVar9 = *pcVar1 == *pcVar2;
      } while (bVar9);
      if (bVar9) {
        pcVar7 = (char *)&DAT_2a22_d3b4;
        iVar5 = (int)*pcVar8;
        do {
          pcVar8 = pcVar8 + 1;
          cVar4 = '\0';
          if (*pcVar8 != -1) {
            cVar4 = *pcVar8;
          }
          pcVar1 = pcVar7;
          pcVar7 = pcVar7 + 1;
          *pcVar1 = cVar4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        break;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar9 = *pcVar1 == '\0';
      } while (!bVar9);
    } while (bVar9);
  }
  iVar6 = 4;
  do {
    bVar9 = false;
    ((undefined *)&DAT_2a22_d3b4)[iVar6] = ((undefined *)&DAT_2a22_d3b4)[iVar6] & 0xbf;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      ((undefined *)&DAT_2a22_d3b4)[iVar6] = ((undefined *)&DAT_2a22_d3b4)[iVar6] | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  return;
}



/* 19c7:2aa6 FUN_19c7_2aa6 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_2aa6(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  undefined1 *in_AX;
  int iVar5;
  char extraout_DH;
  uint extraout_DX;
  uint uVar6;
  int iVar7;
  int unaff_BP;
  char *pcVar8;
  int unaff_SI;
  char *pcVar9;
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar10;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  undefined2 auStack_7ffe [16383];
  
  iVar7 = -(int)in_AX;
  uVar6 = (int)&param_1 + iVar7;
  if ((in_AX <= &param_1) && (_DAT_2a22_d3e4 <= uVar6)) {
    *(undefined2 *)((int)register0x00000010 + iVar7 + 2) = in_stack_00000002;
    *(undefined2 *)((int)register0x00000010 + iVar7) = in_stack_00000000;
    return;
  }
  if (_DAT_2a22_d3e0 != 0xffff) {
                    /* WARNING: Could not recover jumptable at 0x0001c736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_2a22_d3e0)();
    return;
  }
  FUN_19c7_2a7c();
  FUN_19c7_2d1b();
  (*_DAT_2a22_d338)();
  *(char *)(unaff_SI + -0x32d0) = *(char *)(unaff_SI + -0x32d0) + extraout_DH;
  *(uint *)((undefined *)&DAT_2a22_d3ad + unaff_BP + unaff_DI) =
       *(uint *)((undefined *)&DAT_2a22_d3ad + unaff_BP + unaff_DI) & (int)register0x00000010 + 2U;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  param_1 = 0x19c7;
  pcVar3 = (code *)swi(0x21);
  _DAT_2a22_d399 = uVar6;
  _DAT_2a22_d39b = unaff_ES;
  (*pcVar3)();
  if (_DAT_2a22_d7f8 != 0) {
    bVar10 = false;
    param_3 = 0x19c7;
    param_2 = 0xc5c6;
    (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
    if (bVar10) {
      param_3 = 0x2e67;
      FUN_19c7_2aa0();
      return;
    }
    param_3 = 0x19c7;
    param_2 = 0xc5dc;
    (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
  }
  iVar7 = *(int *)&DAT_2a22_447c;
  if (iVar7 != 0) {
    pcVar9 = (char *)0x0;
    do {
      if (*pcVar9 == '\0') break;
      iVar5 = 0xc;
      pcVar8 = (char *)&DAT_2a22_d38c;
      bVar10 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar10 = *pcVar1 == *pcVar2;
      } while (bVar10);
      if (bVar10) {
        param_2 = 0x2e67;
        pcVar8 = (char *)&DAT_2a22_d3b4;
        iVar5 = (int)*pcVar9;
        do {
          pcVar9 = pcVar9 + 1;
          cVar4 = '\0';
          if (*pcVar9 != -1) {
            cVar4 = *pcVar9;
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        break;
      }
      iVar5 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar1 = pcVar9;
        pcVar9 = pcVar9 + 1;
        bVar10 = *pcVar1 == '\0';
      } while (!bVar10);
    } while (bVar10);
  }
  param_3 = 0x2e67;
  iVar7 = 4;
  do {
    bVar10 = false;
    ((undefined *)&DAT_2a22_d3b4)[iVar7] = ((undefined *)&DAT_2a22_d3b4)[iVar7] & 0xbf;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if ((!bVar10) && ((extraout_DX & 0x80) != 0)) {
      ((undefined *)&DAT_2a22_d3b4)[iVar7] = ((undefined *)&DAT_2a22_d3b4)[iVar7] | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  param_3 = 0xc644;
  FUN_19c7_2a69();
  param_3 = 0xc64d;
  FUN_19c7_2a69();
  return;
}



/* 19c7:2aca FUN_19c7_2aca */

uint __cdecl16far FUN_19c7_2aca(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_19c7_2a7c();
    FUN_19c7_2d1b(1);
    uVar2 = 1;
  }
  return uVar2;
}



/* 19c7:2af0 FUN_19c7_2af0 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_19c7_2af0(undefined2 param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 in_stack_00000000;
  
  _DAT_2a22_d3e8 = param_1;
  uVar5 = 2;
  if (DAT_2a22_d3ad != '\x02') {
    _DAT_2a22_d3d0 = *(undefined2 *)&DAT_2a22_447c;
    iVar3 = -0x8000;
    pcVar8 = (char *)0x0;
LAB_19c7_2b16:
    do {
      _DAT_2a22_d3ce = pcVar8;
      if (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
        _DAT_2a22_d3ce = pcVar8;
        if (*pcVar2 != '\0') goto LAB_19c7_2b16;
      }
      pcVar8 = _DAT_2a22_d3ce + 1;
    } while (*_DAT_2a22_d3ce != '\0');
    _DAT_2a22_d3ce = _DAT_2a22_d3ce + 3;
    uVar5 = 0xffff;
    pcVar8 = _DAT_2a22_d3ce;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar2 != '\0');
    uVar5 = ~uVar5;
  }
  _DAT_2a22_d3c8 = 1;
  pcVar8 = (char *)0x81;
LAB_19c7_2b34:
  do {
    do {
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar2;
    } while (cVar1 == ' ');
  } while (cVar1 == '\t');
  if ((cVar1 != '\r') && (cVar1 != '\0')) {
    _DAT_2a22_d3c8 = _DAT_2a22_d3c8 + 1;
    do {
      pcVar8 = pcVar8 + -1;
LAB_19c7_2b47:
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar2;
      if ((cVar1 == ' ') || (cVar1 == '\t')) goto LAB_19c7_2b34;
      if ((cVar1 == '\r') || (cVar1 == '\0')) break;
      if (cVar1 == '\"') {
LAB_19c7_2b80:
        do {
          while( true ) {
            while( true ) {
              pcVar2 = pcVar8;
              pcVar8 = pcVar8 + 1;
              cVar1 = *pcVar2;
              if ((cVar1 == '\r') || (cVar1 == '\0')) goto LAB_19c7_2bb0;
              if (cVar1 == '\"') goto LAB_19c7_2b47;
              if (cVar1 == '\\') break;
              uVar5 = uVar5 + 1;
            }
            uVar4 = 0;
            do {
              pcVar10 = pcVar8;
              uVar4 = uVar4 + 1;
              pcVar8 = pcVar10 + 1;
            } while (*pcVar10 == '\\');
            if (*pcVar10 == '\"') break;
            uVar5 = uVar5 + uVar4;
            pcVar8 = pcVar10;
          }
          uVar5 = uVar5 + (uVar4 >> 1) + (uint)((uVar4 & 1) != 0);
        } while ((uVar4 & 1) != 0);
        goto LAB_19c7_2b47;
      }
      if (cVar1 != '\\') {
        uVar5 = uVar5 + 1;
        goto LAB_19c7_2b47;
      }
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar2 == '\\');
      if (*pcVar2 == '\"') {
        uVar5 = uVar5 + (uVar4 >> 1) + (uint)((uVar4 & 1) != 0);
        if ((uVar4 & 1) == 0) goto LAB_19c7_2b80;
        goto LAB_19c7_2b47;
      }
      uVar5 = uVar5 + uVar4;
    } while( true );
  }
LAB_19c7_2bb0:
  param_1 = 0x2e67;
  iVar9 = (_DAT_2a22_d3c8 + 1) * 2;
  iVar3 = -(uVar5 + _DAT_2a22_d3c8 + iVar9 & 0xfffe);
  _DAT_2a22_d3ca = &param_2 + iVar3;
  pcVar10 = &param_2 + iVar9 + iVar3;
  *(undefined2 *)((int)&param_1 + iVar3) = 0x2e67;
  uVar11 = *(undefined2 *)((int)&param_1 + iVar3);
  *(char **)(&param_2 + iVar3) = pcVar10;
  uVar12 = _DAT_2a22_d3d0;
  puVar6 = (undefined2 *)(&param_3 + iVar3);
  pcVar8 = _DAT_2a22_d3ce;
  do {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
    pcVar10 = pcVar10 + 1;
    *pcVar2 = cVar1;
  } while (cVar1 != '\0');
  pcVar8 = (char *)0x81;
LAB_19c7_2be9:
  do {
    do {
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar2;
    } while (cVar1 == ' ');
  } while (cVar1 == '\t');
  if ((cVar1 == '\r') || (cVar1 == '\0')) {
LAB_19c7_2c78:
    *(undefined2 *)((int)&param_1 + iVar3) = 0x2e67;
    uVar12 = *(undefined2 *)((int)&param_1 + iVar3);
    *puVar6 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001c8ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _DAT_2a22_d3e6 = in_stack_00000000;
    (*(code *)(ulong)*(uint *)&DAT_2a22_d3e6)();
    return;
  }
  *puVar6 = pcVar10;
  puVar6 = puVar6 + 1;
  do {
    pcVar8 = pcVar8 + -1;
LAB_19c7_2c06:
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar2;
    if ((cVar1 == ' ') || (cVar1 == '\t')) {
      pcVar2 = pcVar10;
      pcVar10 = pcVar10 + 1;
      *pcVar2 = '\0';
      goto LAB_19c7_2be9;
    }
    if ((cVar1 == '\r') || (cVar1 == '\0')) {
LAB_19c7_2c75:
      *pcVar10 = '\0';
      goto LAB_19c7_2c78;
    }
    if (cVar1 == '\"') {
LAB_19c7_2c42:
      while( true ) {
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar2;
        if ((cVar1 == '\r') || (cVar1 == '\0')) goto LAB_19c7_2c75;
        if (cVar1 == '\"') break;
        if (cVar1 == '\\') {
          uVar5 = 0;
          do {
            pcVar7 = pcVar8;
            uVar5 = uVar5 + 1;
            pcVar8 = pcVar7 + 1;
          } while (*pcVar7 == '\\');
          if (*pcVar7 == '\"') {
            for (uVar4 = uVar5 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = '\\';
            }
            if ((uVar5 & 1) == 0) break;
            pcVar2 = pcVar10;
            pcVar10 = pcVar10 + 1;
            *pcVar2 = '\"';
          }
          else {
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = '\\';
            }
            pcVar8 = pcVar7;
          }
        }
        else {
          pcVar2 = pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar2 = cVar1;
        }
      }
      goto LAB_19c7_2c06;
    }
    if (cVar1 != '\\') {
      pcVar2 = pcVar10;
      pcVar10 = pcVar10 + 1;
      *pcVar2 = cVar1;
      goto LAB_19c7_2c06;
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar2 == '\\');
    if (*pcVar2 == '\"') {
      for (uVar4 = uVar5 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar2 = pcVar10;
        pcVar10 = pcVar10 + 1;
        *pcVar2 = '\\';
      }
      if ((uVar5 & 1) == 0) goto LAB_19c7_2c42;
      pcVar2 = pcVar10;
      pcVar10 = pcVar10 + 1;
      *pcVar2 = '\"';
      goto LAB_19c7_2c06;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar2 = pcVar10;
      pcVar10 = pcVar10 + 1;
      *pcVar2 = '\\';
    }
  } while( true );
}



/* 19c7:2c82 FUN_19c7_2c82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_2c82(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined1 auStackY_86 [128];
  
  iVar6 = 0;
  pcVar9 = (char *)0x0;
  iVar5 = -1;
  iVar4 = *(int *)&DAT_2a22_447c;
  if (iVar4 != 0) {
    cVar3 = *(char *)0x0;
    while (cVar3 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar2 != '\0');
      iVar6 = iVar6 + 1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      cVar3 = *pcVar2;
    }
  }
  iVar6 = iVar6 + 1;
  puVar7 = (undefined2 *)(iVar6 * 2);
  iVar5 = FUN_19c7_2d46(iVar6,auStackY_86 + 0x84);
  pcVar9 = (char *)((int)puVar7 + iVar5);
  piVar8 = (int *)0x0;
  _DAT_2a22_d3cc = puVar7;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    if (*piVar8 != 0x433b) {
      *puVar7 = pcVar9;
      puVar7 = puVar7 + 1;
    }
    do {
      piVar1 = piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
      iVar5 = *piVar1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar2 = (char)iVar5;
    } while ((char)iVar5 != '\0');
  }
  *puVar7 = 0;
  return;
}



/* 19c7:2cf0 FUN_19c7_2cf0 */

int * __stdcall16far FUN_19c7_2cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_2a22_d83e;
  do {
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar3;
    if ((*piVar1 == param_1) || (piVar4 = (int *)0x0, *piVar1 == -1)) {
      return piVar4;
    }
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}



/* 19c7:2d1b FUN_19c7_2d1b */

void __stdcall16far FUN_19c7_2d1b(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  
  pcVar3 = (char *)FUN_19c7_2cf0(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



/* 19c7:2d46 FUN_19c7_2d46 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl16near FUN_19c7_2d46(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  uint in_AX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char extraout_DH;
  uint extraout_DX;
  uint extraout_DX_00;
  int iVar8;
  int in_BX;
  int unaff_BP;
  char *pcVar9;
  int unaff_SI;
  char *pcVar10;
  int unaff_DI;
  int unaff_ES;
  bool bVar11;
  undefined1 auStackY_84 [128];
  
  iVar8 = _DAT_2a22_d3ab;
  uVar5 = in_AX + _DAT_2a22_d33a;
  if (CARRY2(in_AX,_DAT_2a22_d33a)) {
LAB_19c7_2905:
    FUN_19c7_2a7c();
    FUN_19c7_2d1b();
    (*_DAT_2a22_d338)(0x19c7);
    *(char *)(unaff_SI + -0x32d0) = *(char *)(unaff_SI + -0x32d0) + extraout_DH;
    *(uint *)((undefined *)&DAT_2a22_d3ad + unaff_BP + unaff_DI) =
         *(uint *)((undefined *)&DAT_2a22_d3ad + unaff_BP + unaff_DI) & (uint)(auStackY_84 + 0x82);
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    pcVar3 = (code *)swi(0x21);
    _DAT_2a22_d399 = in_BX;
    _DAT_2a22_d39b = unaff_ES;
    (*pcVar3)();
    if (_DAT_2a22_d7f8 != 0) {
      bVar11 = false;
      (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
      if (bVar11) {
        FUN_19c7_2aa0();
        return;
      }
      (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
    }
    iVar8 = *(int *)&DAT_2a22_447c;
    if (iVar8 != 0) {
      pcVar10 = (char *)0x0;
      do {
        if (*pcVar10 == '\0') break;
        iVar7 = 0xc;
        pcVar9 = (char *)&DAT_2a22_d38c;
        bVar11 = false;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar2 = pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar1 = pcVar9;
          pcVar9 = pcVar9 + 1;
          bVar11 = *pcVar1 == *pcVar2;
        } while (bVar11);
        if (bVar11) {
          pcVar9 = (char *)&DAT_2a22_d3b4;
          iVar7 = (int)*pcVar10;
          do {
            pcVar10 = pcVar10 + 1;
            cVar4 = '\0';
            if (*pcVar10 != -1) {
              cVar4 = *pcVar10;
            }
            pcVar1 = pcVar9;
            pcVar9 = pcVar9 + 1;
            *pcVar1 = cVar4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          break;
        }
        iVar7 = 0x7fff;
        bVar11 = true;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar1 = pcVar10;
          pcVar10 = pcVar10 + 1;
          bVar11 = *pcVar1 == '\0';
        } while (!bVar11);
      } while (bVar11);
    }
    iVar8 = 4;
    do {
      bVar11 = false;
      ((undefined *)&DAT_2a22_d3b4)[iVar8] = ((undefined *)&DAT_2a22_d3b4)[iVar8] & 0xbf;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      if ((!bVar11) && ((extraout_DX & 0x80) != 0)) {
        ((undefined *)&DAT_2a22_d3b4)[iVar8] = ((undefined *)&DAT_2a22_d3b4)[iVar8] | 0x40;
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    FUN_19c7_2a69();
    FUN_19c7_2a69();
    return;
  }
  if (_DAT_2a22_d334 < uVar5) {
    uVar6 = (uint)(CONCAT12(0xfff0 < uVar5,uVar5 + 0xf) >> 1) >> 3;
    bVar11 = CARRY2(uVar6,0x2e67U - _DAT_2a22_d3ab);
    in_BX = uVar6 + (0x2e67U - _DAT_2a22_d3ab);
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    unaff_ES = iVar8;
    if (bVar11) goto LAB_19c7_2905;
    _DAT_2a22_d334 = (uVar5 + 0xf & 0xfff0) - 1;
    in_AX = extraout_DX_00;
  }
  _DAT_2a22_d33a = _DAT_2a22_d33a + in_AX;
  return;
}



/* 19c7:2d88 FUN_19c7_2d88 */

undefined2 __cdecl16far FUN_19c7_2d88(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_19c7_2dae();
    return 0xffff;
  }
  return 0;
}



/* 19c7:2d90 FUN_19c7_2d90 */

undefined2 __cdecl16far FUN_19c7_2d90(void)

{
  undefined2 in_AX;
  bool in_CF;
  
  if (in_CF) {
    FUN_19c7_2dae();
    return in_AX;
  }
  return 0;
}



/* 19c7:2d9b FUN_19c7_2d9b */

void __cdecl16far FUN_19c7_2d9b(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_19c7_2dae();
  }
  return;
}



/* 19c7:2da8 FUN_19c7_2da8 */

void __cdecl16far FUN_19c7_2da8(void)

{
  FUN_19c7_2dae();
  return;
}



/* 19c7:2dae FUN_19c7_2dae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_2dae(void)

{
  char cVar1;
  uint in_AX;
  
  DAT_2a22_d3b0 = (byte)in_AX;
  cVar1 = (char)(in_AX >> 8);
  if (cVar1 != '\0') goto LAB_19c7_2dd3;
  if (DAT_2a22_d3ad < 3) {
LAB_19c7_2dc9:
    if (0x13 < DAT_2a22_d3b0) {
LAB_19c7_2dcd:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < DAT_2a22_d3b0) goto LAB_19c7_2dcd;
    if (DAT_2a22_d3b0 < 0x20) goto LAB_19c7_2dc9;
    in_AX = 5;
  }
  cVar1 = *(char *)(ulong)((in_AX & 0xff) + 0x8f9a);
LAB_19c7_2dd3:
  _DAT_2a22_d3a5 = (int)cVar1;
  return;
}



/* 19c7:2ddc FUN_19c7_2ddc */

undefined2 __cdecl16far FUN_19c7_2ddc(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  char local_10;
  undefined1 uStack_f;
  undefined1 local_e [8];
  int local_6;
  undefined1 *local_4;
  
  uVar2 = 0xffff;
  if (((*(byte *)(param_1 + 6) & 0x83) == 0) || ((*(byte *)(param_1 + 6) & 0x40) != 0))
  goto LAB_19c7_2e98;
  uVar2 = FUN_19c7_3758(param_1);
  local_6 = *(int *)((param_1 + 0x704c >> 3) * 6 + -0x6fa8);
  FUN_19c7_349e(param_1);
  iVar1 = FUN_19c7_40f2(0x19c7,(int)*(char *)(param_1 + 7));
  if (-1 < iVar1) {
    if (local_6 == 0) goto LAB_19c7_2e98;
    FUN_19c7_480c(&local_10,0x8fae);
    local_4 = local_e;
    if (local_10 == '\\') {
      local_4 = &uStack_f;
    }
    else {
      FUN_19c7_47cc(&local_10,0x8fb0);
    }
    FUN_19c7_48e8(local_6,local_4,10);
    iVar1 = FUN_19c7_4e5a(0x19c7,&local_10);
    if (iVar1 == 0) goto LAB_19c7_2e98;
  }
  uVar2 = 0xffff;
LAB_19c7_2e98:
  *(undefined1 *)(param_1 + 6) = 0;
  return uVar2;
}



/* 19c7:2ea4 FUN_19c7_2ea4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_19c7_2ea4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (uVar2 = 0x8fb4; uVar2 <= _DAT_2a22_d51c; uVar2 = uVar2 + 8) {
    if ((*(byte *)(uVar2 + 6) & 0x83) != 0) {
      iVar1 = FUN_19c7_3758(uVar2);
      if (iVar1 != -1) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  return iVar3;
}



/* 19c7:2f04 FUN_19c7_2f04 */

uint __cdecl16far FUN_19c7_2f04(undefined1 *param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint local_6;
  
  uVar4 = param_2 * param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    return uVar4;
  }
  local_6 = uVar4;
  if (((*(byte *)(param_4 + 3) & 0xc) == 0) &&
     ((*(byte *)(((int)(param_4 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
    cVar2 = *(char *)((int)param_4 + 7);
    if (((((undefined *)&DAT_2a22_d3b4)[cVar2] & 0x80) == 0) && ((uVar4 & 0x1ff) == 0)) {
      if (uVar4 != 0) {
        do {
          iVar7 = FUN_19c7_4330(0x19c7,(int)cVar2,param_1,local_6);
          if ((iVar7 == 0) || (iVar7 == -1)) goto joined_r0x0001cd44;
          local_6 = local_6 - iVar7;
          param_1 = param_1 + iVar7;
        } while (local_6 != 0);
      }
      goto LAB_19c7_303c;
    }
    piVar1 = param_4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar6 = FUN_19c7_327e(param_4);
    }
    else {
      pbVar3 = (byte *)*param_4;
      *param_4 = *param_4 + 1;
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffff) {
      return 0;
    }
    *param_1 = (char)uVar6;
    param_1 = param_1 + 1;
    local_6 = uVar4 - 1;
  }
  if (((*(byte *)(param_4 + 3) & 8) == 0) &&
     ((*(byte *)(((int)(param_4 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
    if (local_6 != 0) {
      cVar2 = *(char *)((int)param_4 + 7);
      do {
        iVar7 = FUN_19c7_4330(0x19c7,(int)cVar2,param_1,local_6);
        if ((iVar7 == 0) || (iVar7 == -1)) goto joined_r0x0001cd44;
        local_6 = local_6 - iVar7;
        param_1 = param_1 + iVar7;
      } while (local_6 != 0);
    }
  }
  else {
    while (local_6 != 0) {
      if (param_4[1] == 0) {
        if (local_6 < 0x200) {
          iVar7 = FUN_19c7_327e(param_4);
          if (iVar7 == -1) break;
          *param_1 = (char)iVar7;
          param_1 = param_1 + 1;
          local_6 = local_6 - 1;
        }
        else {
          iVar7 = FUN_19c7_4330(0x19c7,(int)*(char *)((int)param_4 + 7),param_1,local_6 & 0xfe00);
          if ((iVar7 == 0) || (iVar7 == -1)) goto joined_r0x0001cd44;
          local_6 = local_6 - iVar7;
          param_1 = param_1 + iVar7;
        }
      }
      else {
        iVar7 = (param_4[1] - local_6 & -(uint)((uint)param_4[1] < local_6)) + local_6;
        FUN_19c7_4d50(param_1,*param_4,iVar7);
        *param_4 = *param_4 + iVar7;
        param_1 = param_1 + iVar7;
        local_6 = local_6 - iVar7;
        param_4[1] = param_4[1] - iVar7;
      }
    }
  }
LAB_19c7_303c:
  return (uVar4 - local_6) / param_2;
joined_r0x0001cd44:
  if (iVar7 == -1) {
    bVar5 = 0x20;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | bVar5;
  goto LAB_19c7_303c;
}



/* 19c7:30f6 FUN_19c7_30f6 */

uint __cdecl16far FUN_19c7_30f6(char *param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint local_6;
  
  uVar4 = param_2 * param_3;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_19c7_311c;
  local_6 = uVar4;
  if (((*(byte *)(param_4 + 3) & 0xc) == 0) &&
     ((*(byte *)(((int)(param_4 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
    if ((uVar4 & 0x1ff) == 0) {
      uVar4 = FUN_19c7_440e(0x19c7,(int)*(char *)((int)param_4 + 7),param_1,uVar4);
      if (uVar4 != 0xffff) goto LAB_19c7_3161;
    }
    else {
      piVar1 = param_4 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        FUN_19c7_3340((int)*param_1,param_4);
      }
      else {
        cVar2 = *param_1;
        pcVar3 = (char *)*param_4;
        *param_4 = *param_4 + 1;
        *pcVar3 = cVar2;
      }
      if ((*(byte *)(param_4 + 3) & 0x20) == 0) {
        param_1 = param_1 + 1;
        local_6 = uVar4 - 1;
        goto LAB_19c7_3191;
      }
    }
LAB_19c7_311c:
    uVar4 = 0;
  }
  else {
LAB_19c7_3191:
    if (((*(byte *)(param_4 + 3) & 8) == 0) &&
       ((*(byte *)(((int)(param_4 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
      iVar5 = FUN_19c7_440e(0x19c7,(int)*(char *)((int)param_4 + 7),param_1,local_6);
      if (iVar5 != -1) {
        local_6 = local_6 - iVar5;
      }
    }
    else {
      while (local_6 != 0) {
        if (param_4[1] == 0) {
          piVar1 = param_4 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            FUN_19c7_3340((int)*param_1,param_4);
          }
          else {
            cVar2 = *param_1;
            pcVar3 = (char *)*param_4;
            *param_4 = *param_4 + 1;
            *pcVar3 = cVar2;
          }
          if ((*(byte *)(param_4 + 3) & 0x20) != 0) break;
          param_1 = param_1 + 1;
          local_6 = local_6 - 1;
        }
        else {
          iVar5 = (param_4[1] - local_6 & -(uint)((uint)param_4[1] < local_6)) + local_6;
          FUN_19c7_4d50(*param_4,param_1,iVar5);
          *param_4 = *param_4 + iVar5;
          param_1 = param_1 + iVar5;
          local_6 = local_6 - iVar5;
          param_4[1] = param_4[1] - iVar5;
        }
      }
    }
    uVar4 = uVar4 - local_6;
LAB_19c7_3161:
    uVar4 = uVar4 / param_2;
  }
  return uVar4;
}



/* 19c7:323c FUN_19c7_323c */

undefined2 __cdecl16far FUN_19c7_323c(undefined2 param_1,undefined1 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_19c7_3636(0x8fbc);
  uVar2 = FUN_19c7_37c8(0x8fbc,param_1,&param_2);
  FUN_19c7_36ba(uVar1,0x8fbc);
  return uVar2;
}



/* 19c7:327e FUN_19c7_327e */

uint __cdecl16far FUN_19c7_327e(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = ((int)(param_1 + 0x3826) >> 3) * 6;
  if (((*(byte *)(param_1 + 3) & 0x83) != 0) && ((*(byte *)(param_1 + 3) & 0x40) == 0)) {
    if ((*(byte *)(param_1 + 3) & 2) == 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
      pbVar1 = (byte *)(iVar4 + -0x6fac);
      *pbVar1 = *pbVar1 & 0xfb;
      if (((*(byte *)(param_1 + 3) & 0xc) == 0) &&
         ((*(byte *)(((int)(param_1 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
        FUN_19c7_34ce(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar4 = FUN_19c7_4330(0x19c7,(int)*(char *)((int)param_1 + 7),param_1[2],
                            *(undefined2 *)(iVar4 + -0x6faa));
      param_1[1] = iVar4;
      if ((iVar4 != 0) && (iVar4 != -1)) {
        param_1[1] = param_1[1] + -1;
        pbVar2 = (byte *)*param_1;
        *param_1 = *param_1 + 1;
        return (uint)*pbVar2;
      }
      if (param_1[1] == 0) {
        bVar3 = 0x10;
      }
      else {
        bVar3 = 0x20;
      }
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | bVar3;
      param_1[1] = 0;
    }
    else {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
    }
  }
  return 0xffff;
}



/* 19c7:3340 FUN_19c7_3340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_19c7_3340(byte param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int local_6;
  
  piVar1 = param_2;
  iVar2 = (int)*(char *)((int)param_2 + 7);
  iVar3 = ((int)(param_2 + 0x3826) >> 3) * 6;
  if ((((*(byte *)(param_2 + 3) & 0x83) != 0) && ((*(byte *)(param_2 + 3) & 0x40) == 0)) &&
     ((*(byte *)(param_2 + 3) & 1) == 0)) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xef;
    param_2[1] = 0;
    local_6 = 0;
    if (((*(byte *)(param_2 + 3) & 0xc) == 0) &&
       ((*(byte *)(((int)(param_2 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
      if ((param_2 == (int *)0x8fbc) || (param_2 == (int *)0x8fc4)) {
        iVar4 = FUN_19c7_4926(iVar2);
        if (iVar4 == 0) {
          _DAT_2a22_d402 = _DAT_2a22_d402 + 1;
          if (piVar1 == (int *)0x8fbc) {
            puVar5 = (undefined *)&DAT_3000_d346;
          }
          else {
            puVar5 = (undefined *)0xeed6;
          }
          piVar1[2] = (int)puVar5;
          *piVar1 = (int)puVar5;
          *(undefined2 *)(iVar3 + -0x6faa) = 0x200;
          *(undefined1 *)(iVar3 + -0x6fac) = 1;
        }
      }
      else {
        FUN_19c7_34ce(param_2);
      }
    }
    if (((*(byte *)(piVar1 + 3) & 8) == 0) &&
       ((*(byte *)(((int)(piVar1 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
      iVar4 = 1;
      local_6 = FUN_19c7_440e(0x19c7,iVar2,&param_1,1);
    }
    else {
      iVar4 = *piVar1 - piVar1[2];
      *piVar1 = piVar1[2] + 1;
      piVar1[1] = *(int *)(iVar3 + -0x6faa) + -1;
      if (iVar4 < 1) {
        if ((((undefined *)&DAT_2a22_d3b4)[iVar2] & 0x20) != 0) {
          FUN_19c7_4112(0x19c7,iVar2,0,0,2);
        }
      }
      else {
        local_6 = FUN_19c7_440e(0x19c7,iVar2,piVar1[2],iVar4);
      }
      *(byte *)piVar1[2] = param_1;
    }
    if (local_6 == iVar4) {
      return (uint)param_1;
    }
  }
  *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 0x20;
  return 0xffff;
}



/* 19c7:349e FUN_19c7_349e */

void __cdecl16far FUN_19c7_349e(undefined2 *param_1)

{
  if (((*(byte *)(param_1 + 3) & 0x83) != 0) && ((*(byte *)(param_1 + 3) & 8) != 0)) {
    FUN_19c7_454c(param_1[2]);
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



/* 19c7:34ce FUN_19c7_34ce */

void __cdecl16near FUN_19c7_34ce(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((int)(param_1 + 0x3826) >> 3) * 6;
  iVar2 = FUN_19c7_455e(0x200);
  param_1[2] = iVar2;
  if (iVar2 == 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
    param_1[2] = iVar1 + -0x6fab;
    *(undefined2 *)(iVar1 + -0x6faa) = 1;
  }
  else {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
    *(undefined2 *)(iVar1 + -0x6faa) = 0x200;
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return;
}



/* 19c7:3636 FUN_19c7_3636 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_19c7_3636(undefined2 *param_1)

{
  int iVar1;
  undefined *local_4;
  
  _DAT_2a22_d402 = _DAT_2a22_d402 + 1;
  if (param_1 == (undefined2 *)0x8fbc) {
    local_4 = (undefined *)&DAT_3000_d346;
  }
  else {
    if (param_1 != (undefined2 *)0x8fc4) {
      return 0;
    }
    local_4 = (undefined *)0xeed6;
  }
  if (((*(byte *)(param_1 + 3) & 0xc) == 0) &&
     ((*(byte *)(((int)(param_1 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
    iVar1 = ((int)(param_1 + 0x3826) >> 3) * 6;
    param_1[2] = local_4;
    *param_1 = local_4;
    *(undefined2 *)(iVar1 + -0x6faa) = 0x200;
    param_1[1] = 0x200;
    *(undefined1 *)(iVar1 + -0x6fac) = 1;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
    return 1;
  }
  return 0;
}



/* 19c7:36ba FUN_19c7_36ba */

void __cdecl16far FUN_19c7_36ba(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (((undefined *)param_2[2] == (undefined *)&DAT_3000_d346) || (param_2[2] == -0x112a)) {
      iVar1 = FUN_19c7_4926((int)*(char *)((int)param_2 + 7));
      if (iVar1 != 0) {
        FUN_19c7_3758(param_2);
      }
    }
  }
  else if ((param_2 == (undefined2 *)0x8fbc) || (param_2 == (undefined2 *)0x8fc4)) {
    iVar1 = FUN_19c7_4926((int)*(char *)((int)param_2 + 7));
    if (iVar1 != 0) {
      iVar1 = ((int)(param_2 + 0x3826) >> 3) * 6;
      FUN_19c7_3758(param_2);
      *(undefined1 *)(iVar1 + -0x6fac) = 0;
      *(undefined2 *)(iVar1 + -0x6faa) = 0;
      *param_2 = 0;
      param_2[2] = 0;
    }
  }
  return;
}



/* 19c7:3758 FUN_19c7_3758 */

undefined2 __cdecl16far FUN_19c7_3758(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  if (((*(byte *)(param_1 + 3) & 3) == 2) &&
     (((*(byte *)(param_1 + 3) & 8) != 0 ||
      ((*(byte *)(((int)(param_1 + 0x3826) >> 3) * 6 + -0x6fac) & 1) != 0)))) {
    iVar1 = *param_1 - param_1[2];
    if (0 < iVar1) {
      iVar2 = FUN_19c7_440e(0x19c7,(int)*(char *)((int)param_1 + 7),param_1[2],iVar1);
      if (iVar2 != iVar1) {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
        uVar3 = 0xffff;
      }
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return uVar3;
}



/* 19c7:37c8 FUN_19c7_37c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_19c7_37c8(int param_1,char *param_2,undefined2 *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int local_166;
  undefined1 local_164 [340];
  undefined2 uStack_10;
  undefined2 uStack_e;
  char *pcStack_c;
  undefined *puStack_a;
  char *pcStack_8;
  
  FUN_19c7_2aa6();
  _DAT_2a22_dec6 = local_164;
  _DAT_2a22_deb6 = param_3;
  _DAT_2a22_deaa = param_1;
  _DAT_2a22_dec0 = 0;
  _DAT_2a22_debe = 0;
LAB_19c7_3a81:
  for (; *param_2 != '\0'; param_2 = param_2 + 1) {
    pcStack_c = param_2;
    if (*param_2 != '%') goto LAB_19c7_3a64;
    _DAT_2a22_dec2 = 1;
    _DAT_2a22_deb2 = 0;
    _DAT_2a22_deae = 0;
    _DAT_2a22_debc = 0;
    _DAT_2a22_deb0 = 0;
    _DAT_2a22_deba = 0;
    _DAT_2a22_deb8 = 0;
    _DAT_2a22_deac = 0;
    _DAT_2a22_dea8 = 0;
    _DAT_2a22_deb4 = 0;
    _DAT_2a22_decc = 0x20;
    if (param_2[1] == '0') {
      param_2 = param_2 + 1;
      _DAT_2a22_decc = 0x30;
    }
    while( true ) {
      param_2 = param_2 + 1;
      pcStack_8 = (char *)(int)*param_2;
      puStack_a = (undefined *)0x19c7;
      pcStack_c = (char *)0xd4e6;
      iVar3 = FUN_19c7_4090();
      if (iVar3 == 0) break;
      if (*param_2 == '-') {
        _DAT_2a22_deb4 = _DAT_2a22_deb4 + 1;
      }
      else if (*param_2 == '+') {
        _DAT_2a22_deb2 = _DAT_2a22_deb2 + 1;
        _DAT_2a22_deb8 = 0;
      }
      else if (*param_2 == ' ') {
        if (_DAT_2a22_deb2 == 0) {
          _DAT_2a22_deb8 = _DAT_2a22_deb8 + 1;
        }
      }
      else {
        _DAT_2a22_dea8 = _DAT_2a22_dea8 + 1;
      }
    }
    puStack_a = (undefined *)&DAT_2a22_dec8;
    pcStack_c = (char *)0x19c7;
    uStack_e = 0xd4f6;
    pcStack_8 = param_2;
    param_2 = (char *)FUN_19c7_4010();
    if (_DAT_2a22_dec8 < 0) {
      _DAT_2a22_deb4 = _DAT_2a22_deb4 + 1;
      _DAT_2a22_dec8 = -_DAT_2a22_dec8;
    }
    if (*param_2 == '.') {
      _DAT_2a22_deba = _DAT_2a22_deba + 1;
      pcStack_8 = param_2 + 1;
      puStack_a = (undefined *)&DAT_2a22_dec2;
      pcStack_c = (char *)0x19c7;
      uStack_e = 0xd521;
      param_2 = (char *)FUN_19c7_4010();
      if (_DAT_2a22_dec2 < 0) {
        _DAT_2a22_dec2 = 1;
        _DAT_2a22_deba = _DAT_2a22_deba + -1;
      }
    }
    cVar1 = *param_2;
    if (cVar1 == 'F') {
      _DAT_2a22_deb0 = 0x10;
    }
    else if (cVar1 == 'N') {
      _DAT_2a22_deb0 = 8;
    }
    else if (cVar1 == 'h') {
      _DAT_2a22_deb0 = 1;
    }
    else if (cVar1 == 'l') {
      _DAT_2a22_deb0 = 2;
    }
    if ((_DAT_2a22_deb0 != 0) || (*param_2 == 'L')) {
      param_2 = param_2 + 1;
    }
    if (*param_2 == '\0') break;
    local_166 = (int)*param_2;
    if (((local_166 == 0x45) || (local_166 == 0x47)) || (local_166 == 0x58)) {
      _DAT_2a22_deae = _DAT_2a22_deae + 1;
      local_166 = local_166 + 0x20;
    }
    switch(local_166) {
    case 99:
      pcStack_8 = (char *)0x1;
      goto LAB_19c7_3a40;
    case 0x65:
    case 0x66:
    case 0x67:
      pcStack_8 = (char *)local_166;
      puStack_a = (undefined *)0x19c7;
      pcStack_c = (char *)0xd6c6;
      FUN_19c7_3d1a();
      goto LAB_19c7_3acc;
    default:
      pcStack_c = param_2;
      if (_DAT_2a22_deb0 != 0) {
        pcStack_c = param_2 + -1;
      }
      goto LAB_19c7_3a64;
    case 0x6e:
      *(int *)*_DAT_2a22_deb6 = _DAT_2a22_debe;
      goto LAB_19c7_3953;
    case 0x6f:
      pcStack_8 = (char *)0x8;
      break;
    case 0x70:
      _DAT_2a22_deac = _DAT_2a22_deac + 1;
      _DAT_2a22_deae = _DAT_2a22_deae + 1;
      _DAT_2a22_dec4 = (uint)(_DAT_2a22_deba == 0);
      _DAT_2a22_deba = _DAT_2a22_deba + 1;
      _DAT_2a22_dec2 = 4;
      if (_DAT_2a22_deb0 == 8) goto switchD_1000_d5b3_caseD_78;
      _DAT_2a22_deb0 = 0;
      iVar3 = 0;
      if (_DAT_2a22_dec8 != 0) {
        iVar3 = _DAT_2a22_dec8;
        if (_DAT_2a22_deb4 == 0) {
          _DAT_2a22_dec8 = _DAT_2a22_dec8 + -5;
          if (_DAT_2a22_dec8 < 0) {
            _DAT_2a22_dec8 = 0;
          }
        }
        else {
          _DAT_2a22_dec8 = 0;
        }
      }
      _DAT_2a22_deb6 = _DAT_2a22_deb6 + 1;
      pcStack_8 = (char *)0x10;
      puStack_a = (undefined *)0x19c7;
      pcStack_c = (char *)0xd65e;
      FUN_19c7_3af4();
      pcStack_8 = (char *)0x3a;
      puStack_a = (undefined *)0x19c7;
      pcStack_c = (char *)0xd669;
      FUN_19c7_3dd8();
      if (iVar3 != 0) {
        if (_DAT_2a22_deb4 == 0) {
          _DAT_2a22_dec8 = 0;
        }
        else {
          _DAT_2a22_dec8 = iVar3 + -5;
          if (_DAT_2a22_dec8 < 0) {
            _DAT_2a22_dec8 = 0;
          }
        }
      }
      _DAT_2a22_deb6 = _DAT_2a22_deb6 + -2;
      pcStack_8 = (char *)0x10;
      puStack_a = (undefined *)0x19c7;
      pcStack_c = (char *)0xd6a1;
      FUN_19c7_3af4();
LAB_19c7_3953:
      _DAT_2a22_deb6 = _DAT_2a22_deb6 + 1;
      goto LAB_19c7_3acc;
    case 0x73:
      pcStack_8 = (char *)0x0;
LAB_19c7_3a40:
      puStack_a = (undefined *)0x19c7;
      pcStack_c = (char *)0xd6b5;
      FUN_19c7_3c2e();
      goto LAB_19c7_3acc;
    case 0x75:
      _DAT_2a22_debc = _DAT_2a22_debc + 1;
    case 100:
    case 0x69:
      _DAT_2a22_dea8 = 0;
      pcStack_8 = (char *)0xa;
      break;
    case 0x78:
switchD_1000_d5b3_caseD_78:
      pcStack_8 = (char *)0x10;
    }
    puStack_a = (undefined *)0x19c7;
    pcStack_c = (char *)0xd5de;
    FUN_19c7_3af4();
LAB_19c7_3acc:
    if (_DAT_2a22_dec0 != 0) {
      if (_DAT_2a22_debe != 0) {
        return _DAT_2a22_debe;
      }
      bVar2 = *(byte *)(_DAT_2a22_deaa + 6);
      goto joined_r0x0001d752;
    }
  }
  if (_DAT_2a22_debe == 0) {
    bVar2 = *(byte *)(_DAT_2a22_deaa + 6);
joined_r0x0001d752:
    if ((bVar2 & 0x20) != 0) {
      return -1;
    }
  }
  return _DAT_2a22_debe;
LAB_19c7_3a64:
  param_2 = pcStack_c;
  do {
    param_2 = param_2 + 1;
    if (*param_2 == '\0') break;
  } while (*param_2 != '%');
  pcStack_8 = (char *)((int)param_2 - (int)pcStack_c);
  puStack_a = (undefined *)0x2e67;
  uStack_e = 0x19c7;
  uStack_10 = 0xd6ec;
  FUN_19c7_3e78();
  goto LAB_19c7_3a81;
}



/* 19c7:3af4 FUN_19c7_3af4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3af4(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  char local_1a [12];
  int local_e;
  int local_a;
  int local_6;
  int local_4;
  
  pcVar5 = _DAT_2a22_dec6;
  if (param_1 != 10) {
    _DAT_2a22_debc = _DAT_2a22_debc + 1;
  }
  if ((_DAT_2a22_deb0 == 2) || (_DAT_2a22_deb0 == 0x10)) {
    local_6 = *_DAT_2a22_deb6;
    local_4 = _DAT_2a22_deb6[1];
    _DAT_2a22_deb6 = _DAT_2a22_deb6 + 2;
  }
  else {
    if (_DAT_2a22_debc == 0) {
      local_6 = *_DAT_2a22_deb6;
      local_4 = local_6 >> 0xf;
    }
    else {
      local_6 = *_DAT_2a22_deb6;
      local_4 = 0;
    }
    _DAT_2a22_deb6 = _DAT_2a22_deb6 + 1;
  }
  if ((_DAT_2a22_dea8 == 0) || (local_6 == 0 && local_4 == 0)) {
    _DAT_2a22_deca = 0;
  }
  else {
    _DAT_2a22_deca = param_1;
  }
  if ((_DAT_2a22_debc == 0) && (local_4 < 0)) {
    if (param_1 == 10) {
      *_DAT_2a22_dec6 = '-';
      pcVar5 = pcVar5 + 1;
      bVar7 = local_6 != 0;
      local_6 = -local_6;
      local_4 = -(local_4 + (uint)bVar7);
    }
    local_a = 1;
  }
  else {
    local_a = 0;
  }
  pcVar6 = local_1a;
  FUN_19c7_4904(0x19c7,local_6,local_4,pcVar6,param_1);
  iVar3 = _DAT_2a22_deae;
  if (_DAT_2a22_deba != 0) {
    iVar3 = FUN_19c7_486a(pcVar6);
    iVar3 = _DAT_2a22_dec2 - iVar3;
    while (0 < iVar3) {
      *pcVar5 = '0';
      pcVar5 = pcVar5 + 1;
      iVar3 = iVar3 + -1;
    }
    local_e = iVar3 + -1;
    iVar3 = _DAT_2a22_deae;
  }
  do {
    cVar2 = *pcVar6;
    *pcVar5 = cVar2;
    if ((iVar3 != 0) && ('`' < cVar2)) {
      *pcVar5 = *pcVar5 + -0x20;
    }
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  if (((_DAT_2a22_debc == 0) && (_DAT_2a22_deb2 != 0 || _DAT_2a22_deb8 != 0)) && (local_a == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_19c7_3ee2(uVar4);
  return;
}



/* 19c7:3c2e FUN_19c7_3c2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3c2e(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  char *local_a;
  int local_8;
  
  if (param_1 != 0) {
    iVar2 = 1;
    local_a = _DAT_2a22_deb6;
    local_8 = 0x2e67;
    _DAT_2a22_deb6 = _DAT_2a22_deb6 + 2;
    goto LAB_19c7_3ce1;
  }
  if (_DAT_2a22_deb0 == 0x10) {
    local_a = *(char **)_DAT_2a22_deb6;
    local_8 = *(int *)(_DAT_2a22_deb6 + 2);
    _DAT_2a22_deb6 = _DAT_2a22_deb6 + 4;
    if (local_a == (char *)0x0 && local_8 == 0) {
      local_a = (char *)&DAT_2a22_d51e;
LAB_19c7_3c9f:
      local_8 = 0x2e67;
    }
  }
  else {
    local_a = *(char **)_DAT_2a22_deb6;
    local_8 = 0x2e67;
    _DAT_2a22_deb6 = _DAT_2a22_deb6 + 2;
    if (local_a == (char *)0x0) {
      local_a = (char *)0x90d5;
      goto LAB_19c7_3c9f;
    }
  }
  local_10 = (char *)CONCAT22(local_8,local_a);
  iVar2 = 0;
  if (_DAT_2a22_deba == 0) {
    while( true ) {
      pcVar1 = local_10;
      local_10 = (char *)CONCAT22(local_10._2_2_,(char *)local_10 + 1);
      if (*pcVar1 == '\0') break;
      iVar2 = iVar2 + 1;
    }
  }
  else {
    for (; pcVar1 = local_10, iVar2 < _DAT_2a22_dec2; iVar2 = iVar2 + 1) {
      local_10 = (char *)CONCAT22(local_10._2_2_,(char *)local_10 + 1);
      if (*pcVar1 == '\0') break;
    }
  }
LAB_19c7_3ce1:
  iVar3 = _DAT_2a22_dec8 - iVar2;
  if (_DAT_2a22_deb4 == 0) {
    FUN_19c7_3e18(iVar3);
  }
  FUN_19c7_3e78(local_a,local_8,iVar2);
  if (_DAT_2a22_deb4 != 0) {
    FUN_19c7_3e18(iVar3);
  }
  return;
}



/* 19c7:3d1a FUN_19c7_3d1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3d1a(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar2 = _DAT_2a22_deb6;
  if ((param_1 == 0x67) || (param_1 == 0x47)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (_DAT_2a22_deba == 0) {
    _DAT_2a22_dec2 = 6;
  }
  if ((bVar1) && (_DAT_2a22_dec2 == 0)) {
    _DAT_2a22_dec2 = 1;
  }
  (*_DAT_2a22_d54a)(0x19c7,_DAT_2a22_deb6,_DAT_2a22_dec6,param_1,_DAT_2a22_dec2,_DAT_2a22_deae);
  if ((bVar1) && (_DAT_2a22_dea8 == 0)) {
    (*_DAT_2a22_d54e)(0x19c7,_DAT_2a22_dec6);
  }
  if ((_DAT_2a22_dea8 != 0) && (_DAT_2a22_dec2 == 0)) {
    (*_DAT_2a22_d556)(0x19c7,_DAT_2a22_dec6);
  }
  _DAT_2a22_deb6 = _DAT_2a22_deb6 + 8;
  _DAT_2a22_deca = 0;
  if (_DAT_2a22_deb2 != 0 || _DAT_2a22_deb8 != 0) {
    iVar2 = (*_DAT_2a22_d55a)(0x19c7,iVar2);
    if (iVar2 != 0) {
      uVar3 = 1;
      goto LAB_19c7_3dce;
    }
  }
  uVar3 = 0;
LAB_19c7_3dce:
  FUN_19c7_3ee2(uVar3);
  return;
}



/* 19c7:3dd8 FUN_19c7_3dd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3dd8(uint param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  piVar3 = _DAT_2a22_deaa;
  if (_DAT_2a22_dec0 == 0) {
    piVar1 = _DAT_2a22_deaa + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      param_1 = FUN_19c7_3340(param_1,piVar3);
    }
    else {
      puVar2 = (undefined1 *)*piVar3;
      *piVar3 = *piVar3 + 1;
      *puVar2 = (undefined1)param_1;
      param_1 = param_1 & 0xff;
    }
    if (param_1 == 0xffff) {
      _DAT_2a22_dec0 = _DAT_2a22_dec0 + 1;
    }
    else {
      _DAT_2a22_debe = _DAT_2a22_debe + 1;
    }
  }
  return;
}



/* 19c7:3e18 FUN_19c7_3e18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3e18(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if ((_DAT_2a22_dec0 == 0) && (iVar6 = param_1, 0 < param_1)) {
    while (piVar3 = _DAT_2a22_deaa, iVar7 = iVar6 + -1, 0 < iVar6) {
      piVar1 = _DAT_2a22_deaa + 1;
      *piVar1 = *piVar1 + -1;
      uVar5 = _DAT_2a22_decc;
      if (*piVar1 < 0) {
        uVar5 = FUN_19c7_3340(_DAT_2a22_decc,_DAT_2a22_deaa);
      }
      else {
        uVar4 = DAT_2a22_decc;
        puVar2 = (undefined1 *)*piVar3;
        piVar1 = piVar3;
        *piVar1 = *piVar1 + 1;
        *puVar2 = uVar4;
        uVar5 = uVar5 & 0xff;
      }
      iVar6 = iVar7;
      if (uVar5 == 0xffff) {
        _DAT_2a22_dec0 = _DAT_2a22_dec0 + 1;
      }
    }
    if (_DAT_2a22_dec0 == 0) {
      _DAT_2a22_debe = _DAT_2a22_debe + param_1;
    }
  }
  return;
}



/* 19c7:3e78 FUN_19c7_3e78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3e78(byte *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_2;
  if (_DAT_2a22_dec0 == 0) {
    while (iVar5 != 0) {
      piVar1 = _DAT_2a22_deaa + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar4 = FUN_19c7_3340((int)(char)*param_1,_DAT_2a22_deaa);
      }
      else {
        bVar2 = *param_1;
        pbVar3 = (byte *)*_DAT_2a22_deaa;
        *_DAT_2a22_deaa = *_DAT_2a22_deaa + 1;
        *pbVar3 = bVar2;
        uVar4 = (uint)bVar2;
      }
      if (uVar4 == 0xffff) {
        _DAT_2a22_dec0 = _DAT_2a22_dec0 + 1;
      }
      param_1 = (byte *)CONCAT22(param_1._2_2_,(byte *)param_1 + 1);
      iVar5 = iVar5 + -1;
    }
    if (_DAT_2a22_dec0 == 0) {
      _DAT_2a22_debe = _DAT_2a22_debe + param_2;
    }
  }
  return;
}



/* 19c7:3ee2 FUN_19c7_3ee2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3ee2(int param_1)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  int local_a;
  
  iVar4 = _DAT_2a22_dec8;
  pcVar3 = _DAT_2a22_dec6;
  bVar2 = false;
  bVar5 = false;
  if (((_DAT_2a22_decc == 0x30) && (_DAT_2a22_deba != 0)) &&
     ((_DAT_2a22_deac == 0 || (_DAT_2a22_dec4 == 0)))) {
    _DAT_2a22_decc = 0x20;
  }
  local_a = FUN_19c7_486a(_DAT_2a22_dec6);
  iVar4 = (iVar4 - local_a) - param_1;
  if (((_DAT_2a22_deb4 == 0) && (*pcVar3 == '-')) && (_DAT_2a22_decc == 0x30)) {
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    FUN_19c7_3dd8((int)*pcVar1);
    local_a = local_a + -1;
  }
  if (((_DAT_2a22_decc == 0x30) || (iVar4 < 1)) || (_DAT_2a22_deb4 != 0)) {
    bVar5 = param_1 != 0;
    if (bVar5) {
      FUN_19c7_3fce();
    }
    if (_DAT_2a22_deca != 0) {
      bVar2 = true;
      FUN_19c7_3fe6();
    }
  }
  if (_DAT_2a22_deb4 == 0) {
    FUN_19c7_3e18(iVar4);
    if ((param_1 != 0) && (!bVar5)) {
      FUN_19c7_3fce();
    }
    if ((_DAT_2a22_deca != 0) && (!bVar2)) {
      FUN_19c7_3fe6();
    }
  }
  FUN_19c7_3e78(pcVar3,0x2e67,local_a);
  if (_DAT_2a22_deb4 != 0) {
    _DAT_2a22_decc = 0x20;
    FUN_19c7_3e18(iVar4);
  }
  return;
}



/* 19c7:3fce FUN_19c7_3fce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3fce(void)

{
  undefined2 uVar1;
  
  if (_DAT_2a22_deb2 == 0) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x2b;
  }
  FUN_19c7_3dd8(uVar1);
  return;
}



/* 19c7:3fe6 FUN_19c7_3fe6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_3fe6(void)

{
  undefined2 uVar1;
  
  FUN_19c7_3dd8(0x30);
  if (_DAT_2a22_deca == 0x10) {
    if (_DAT_2a22_deae == 0) {
      uVar1 = 0x78;
    }
    else {
      uVar1 = 0x58;
    }
    FUN_19c7_3dd8(uVar1);
  }
  return;
}



/* 19c7:4010 FUN_19c7_4010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl16far FUN_19c7_4010(int *param_1,char *param_2)

{
  int iVar1;
  int local_4;
  
  local_4 = 1;
  if (*param_2 == '*') {
    iVar1 = *_DAT_2a22_deb6;
    _DAT_2a22_deb6 = _DAT_2a22_deb6 + 1;
    param_2 = param_2 + 1;
  }
  else {
    if (*param_2 == '-') {
      local_4 = -1;
      param_2 = param_2 + 1;
    }
    iVar1 = 0;
    if (('/' < *param_2) && (*param_2 < ':')) {
      if ((_DAT_2a22_deba == 0) && (*param_2 == '0')) {
        _DAT_2a22_decc = 0x30;
      }
      do {
        iVar1 = iVar1 * 10 + (int)*param_2 + -0x30;
        param_2 = param_2 + 1;
        if (*param_2 < '0') break;
      } while (*param_2 < ':');
    }
  }
  *param_1 = local_4 * iVar1;
  return param_2;
}



/* 19c7:4090 FUN_19c7_4090 */

undefined2 __cdecl16far FUN_19c7_4090(char param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)&DAT_2a22_d52c;
  while( true ) {
    if (*pcVar1 == '\0') {
      return 0;
    }
    if (param_1 == *pcVar1) break;
    pcVar1 = pcVar1 + 1;
  }
  return 1;
}



/* 19c7:40f2 FUN_19c7_40f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19c7_40f2(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = param_2 < _DAT_2a22_d3b2;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      ((undefined *)&DAT_2a22_d3b4)[param_2] = 0;
    }
  }
  FUN_19c7_2d88();
  return;
}



/* 19c7:4112 FUN_19c7_4112 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19c7_4112(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (_DAT_2a22_d3b2 <= param_2) goto LAB_19c7_4189;
  bVar5 = false;
  if ((param_4 & 0x8000) != 0) {
    if (param_5 == 0) goto LAB_19c7_4189;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_19c7_4189;
    if ((param_5 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_3);
      bVar5 = CARRY2(uVar3,param_4) || CARRY2(uVar3 + param_4,uVar1);
      if ((int)(uVar3 + param_4 + uVar1) < 0) goto LAB_19c7_4189;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_3);
      uVar1 = uVar4 + param_4;
      bVar5 = CARRY2(uVar4,param_4) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_19c7_4189;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    ((undefined *)&DAT_2a22_d3b4)[param_2] = ((undefined *)&DAT_2a22_d3b4)[param_2] & 0xfd;
  }
LAB_19c7_4189:
  FUN_19c7_2d9b();
  return;
}



/* 19c7:4330 FUN_19c7_4330 */

/* WARNING: Removing unreachable block (ram,0x0001e07b) */
/* WARNING: Removing unreachable block (ram,0x0001e070) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19c7_4330(undefined2 param_1,uint param_2,undefined2 param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char cVar6;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 uVar7;
  int iVar5;
  undefined1 extraout_AH_01;
  int iVar8;
  uint extraout_DX;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 uVar12;
  
  if (((_DAT_2a22_d3b2 <= param_2) || (param_4 == 0)) ||
     (bVar11 = false, (((undefined *)&DAT_2a22_d3b4)[param_2] & 2) != 0)) {
LAB_19c7_43a1:
    FUN_19c7_2d9b();
    return;
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar10 = (char *)((ulong)uVar12 >> 0x10);
  if (((bVar11) || ((((undefined *)&DAT_2a22_d3b4)[param_2] & 0x80) == 0)) ||
     (((undefined *)&DAT_2a22_d3b4)[param_2] = ((undefined *)&DAT_2a22_d3b4)[param_2] & 0xfb,
     (int)uVar12 == 0)) goto LAB_19c7_43a1;
  uVar4 = 0xd00;
  if (*pcVar10 == '\n') {
    ((undefined *)&DAT_2a22_d3b4)[param_2] = ((undefined *)&DAT_2a22_d3b4)[param_2] | 4;
  }
LAB_19c7_4386:
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  iVar8 = (int)uVar12;
  pcVar1 = pcVar9 + 1;
  cVar2 = *pcVar9;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar8 != 1) {
      if (*pcVar1 != '\n') goto LAB_19c7_4396;
      goto LAB_19c7_4399;
    }
    bVar11 = false;
    if ((((undefined *)&DAT_2a22_d3b4)[param_2] & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        uVar7 = 0;
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          (*pcVar3)();
          iVar8 = 1;
          uVar7 = extraout_AH_01;
        }
        uVar4 = CONCAT11(uVar7,0xd);
        goto LAB_19c7_4396;
      }
      goto LAB_19c7_43a1;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar7 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar7 = extraout_AH_00;
      if (bVar11) goto LAB_19c7_43a1;
    }
    uVar4 = CONCAT11(uVar7,10);
  }
  else if (cVar2 == '\x1a') {
    ((undefined *)&DAT_2a22_d3b4)[param_2] = ((undefined *)&DAT_2a22_d3b4)[param_2] | 2;
    goto LAB_19c7_43a1;
  }
LAB_19c7_4396:
  *pcVar10 = (char)uVar4;
  pcVar10 = pcVar10 + 1;
LAB_19c7_4399:
  uVar12 = CONCAT22(pcVar1,iVar8 + -1);
  if (iVar8 + -1 == 0) goto LAB_19c7_43a1;
  goto LAB_19c7_4386;
}



/* 19c7:440e FUN_19c7_440e */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19c7_440e(undefined2 param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char extraout_DH;
  uint extraout_DX;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 uVar10;
  bool bVar11;
  uint auStack_70a5 [14408];
  undefined2 uStack_14;
  undefined2 uStack_12;
  char acStack_10 [2];
  
  if (_DAT_2a22_d3b2 <= param_2) {
LAB_19c7_4421:
    FUN_19c7_2d9b();
    return;
  }
  if ((((undefined *)&DAT_2a22_d3b4)[param_2] & 0x20) != 0) {
    bVar11 = false;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if (bVar11) goto LAB_19c7_4421;
  }
  if ((((undefined *)&DAT_2a22_d3b4)[param_2] & 0x80) != 0) {
    bVar11 = true;
    iVar7 = param_4;
    pcVar9 = param_3;
    if (param_4 == 0) {
      FUN_19c7_44f6();
      return;
    }
    do {
      if (iVar7 == 0) break;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      bVar11 = *pcVar2 == '\n';
      iVar7 = iVar7 + -1;
    } while (!bVar11);
    if (bVar11) {
      acStack_10[0] = -0x39;
      acStack_10[1] = '\x19';
      uStack_12 = 0xe0d4;
      uVar5 = FUN_19c7_4538();
      if (0xa8 < uVar5) {
        pcVar9 = acStack_10;
        iVar7 = 0x200;
        if (uVar5 < 0x228) {
          iVar7 = 0x80;
        }
        iVar7 = -iVar7;
        pcVar8 = acStack_10 + iVar7;
        *(undefined2 *)(acStack_10 + iVar7 + -2) = 0x2e67;
        uVar10 = *(undefined2 *)(acStack_10 + iVar7 + -2);
        do {
          pcVar2 = param_3;
          param_3 = param_3 + 1;
          cVar4 = *pcVar2;
          if (cVar4 == '\n') {
            cVar4 = '\r';
            if (pcVar8 == pcVar9) {
              *(undefined2 *)(acStack_10 + iVar7 + -2) = 0xe10e;
              cVar4 = FUN_19c7_44b6();
            }
            pcVar2 = pcVar8;
            pcVar8 = pcVar8 + 1;
            *pcVar2 = cVar4;
            cVar4 = '\n';
          }
          if (pcVar8 == pcVar9) {
            *(undefined2 *)(acStack_10 + iVar7 + -2) = 0xe119;
            cVar4 = FUN_19c7_44b6();
          }
          pcVar2 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar2 = cVar4;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        *(undefined2 *)(acStack_10 + iVar7 + -2) = 0xe103;
        FUN_19c7_44b6();
        FUN_19c7_44f6();
        return;
      }
      acStack_10[0] = '\0';
      acStack_10[1] = '\0';
      uStack_12 = 0x19c7;
      uStack_14 = 0xc57b;
      FUN_19c7_2a7c();
      uStack_12 = 0x19c7;
      uStack_14 = 0xc580;
      FUN_19c7_2d1b();
      acStack_10[0] = -1;
      acStack_10[1] = '\0';
      uStack_12 = 0x19c7;
      uStack_14 = 0xc589;
      (*_DAT_2a22_d338)();
      param_3[-0x32d0] = param_3[-0x32d0] + extraout_DH;
      *(uint *)((int)auStack_70a5 + (int)pcVar9) =
           *(uint *)((int)auStack_70a5 + (int)pcVar9) & (uint)acStack_10;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x21);
      _DAT_2a22_d399 = param_2;
      _DAT_2a22_d39b = 0x2e67;
      (*pcVar3)();
      if (_DAT_2a22_d7f8 != 0) {
        bVar11 = false;
        (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
        if (bVar11) {
          FUN_19c7_2aa0();
          return;
        }
        (*(code *)*(undefined2 *)&DAT_2a22_d7f6)();
      }
      iVar7 = *(int *)&DAT_2a22_447c;
      if (iVar7 != 0) {
        pcVar9 = (char *)0x0;
        do {
          if (*pcVar9 == '\0') break;
          iVar6 = 0xc;
          pcVar8 = (char *)&DAT_2a22_d38c;
          bVar11 = false;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar1 = pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar2 = pcVar8;
            pcVar8 = pcVar8 + 1;
            bVar11 = *pcVar2 == *pcVar1;
          } while (bVar11);
          if (bVar11) {
            pcVar8 = (char *)&DAT_2a22_d3b4;
            iVar6 = (int)*pcVar9;
            do {
              pcVar9 = pcVar9 + 1;
              cVar4 = '\0';
              if (*pcVar9 != -1) {
                cVar4 = *pcVar9;
              }
              pcVar2 = pcVar8;
              pcVar8 = pcVar8 + 1;
              *pcVar2 = cVar4;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            break;
          }
          iVar6 = 0x7fff;
          bVar11 = true;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar2 = pcVar9;
            pcVar9 = pcVar9 + 1;
            bVar11 = *pcVar2 == '\0';
          } while (!bVar11);
        } while (bVar11);
      }
      iVar7 = 4;
      do {
        bVar11 = false;
        ((undefined *)&DAT_2a22_d3b4)[iVar7] = ((undefined *)&DAT_2a22_d3b4)[iVar7] & 0xbf;
        pcVar3 = (code *)swi(0x21);
        (*pcVar3)();
        if ((!bVar11) && ((extraout_DX & 0x80) != 0)) {
          ((undefined *)&DAT_2a22_d3b4)[iVar7] = ((undefined *)&DAT_2a22_d3b4)[iVar7] | 0x40;
        }
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      FUN_19c7_2a69();
      FUN_19c7_2a69();
      return;
    }
  }
  FUN_19c7_4504();
  return;
}



/* 19c7:44b6 FUN_19c7_44b6 */

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_19c7_44b6(void)

{
  code *pcVar1;
  undefined2 in_AX;
  int iVar2;
  undefined2 uVar3;
  uint in_DX;
  int unaff_BP;
  uint unaff_DI;
  bool bVar4;
  
  bVar4 = unaff_DI < in_DX;
  if (unaff_DI != in_DX) {
    pcVar1 = (code *)swi(0x21);
    iVar2 = (*pcVar1)();
    if ((bVar4) || (*(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + iVar2, iVar2 == 0)) {
      uVar3 = FUN_19c7_2d9b();
      return uVar3;
    }
  }
  return in_AX;
}



/* 19c7:44f6 FUN_19c7_44f6 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_19c7_44f6(void)

{
  FUN_19c7_2d9b();
  return;
}



/* 19c7:4504 FUN_19c7_4504 */

void FUN_19c7_4504(void)

{
  code *pcVar1;
  int unaff_BP;
  
  if (*(int *)(unaff_BP + 10) == 0) {
    FUN_19c7_2d9b();
    return;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d9b();
  return;
}



/* 19c7:4538 FUN_19c7_4538 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_19c7_4538(undefined1 param_1)

{
  int iVar1;
  
  if (_DAT_2a22_d3e4 < &param_1) {
    iVar1 = -((int)_DAT_2a22_d3e4 - (int)&param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* 19c7:454c FUN_19c7_454c */

void __cdecl16far FUN_19c7_454c(int param_1)

{
  if (param_1 != 0) {
    *(byte *)(param_1 + -2) = *(byte *)(param_1 + -2) | 1;
  }
  return;
}



/* 19c7:455e FUN_19c7_455e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_19c7_455e(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  bool bVar4;
  
  bVar4 = _DAT_2a22_d534 == (undefined2 *)0x0;
  if (bVar4) {
    iVar1 = FUN_19c7_46e6();
    if (bVar4) {
      return 0;
    }
    puVar2 = (undefined2 *)(iVar1 + 1U & 0xfffe);
    _DAT_2a22_d534 = puVar2;
    _DAT_2a22_d536 = puVar2;
    *puVar2 = 1;
    _DAT_2a22_d53a = puVar2 + 2;
    puVar2[1] = 0xfffe;
  }
  uVar3 = FUN_19c7_45a7();
  return uVar3;
}



/* 19c7:45a7 FUN_19c7_45a7 */

uint * __cdecl16near FUN_19c7_45a7(void)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_CX;
  uint uVar6;
  undefined2 *in_BX;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 unaff_ES;
  int iVar11;
  bool bVar12;
  
  iVar11 = 0x2e67;
  if ((in_CX + 1U == 0) || (uVar6 = in_CX + 1U & 0xfffe, 0xffed < uVar6)) {
LAB_19c7_4675:
    if (iVar11 != 0x2e67) {
      *(int *)0x90f2 = iVar11;
    }
    in_BX[1] = *in_BX;
    return (uint *)0x0;
  }
  puVar10 = (uint *)in_BX[1];
  puVar7 = puVar10 + 1;
  uVar4 = *puVar10;
  puVar8 = puVar7;
  if ((uVar4 & 1) != 0) {
    do {
      uVar3 = uVar4 - 1;
      bVar12 = uVar3 == uVar6;
      if (uVar6 <= uVar3) {
LAB_19c7_45d7:
        if (bVar12) {
          *(char *)(puVar7 + -1) = (char)puVar7[-1] + -1;
        }
        else {
          puVar7[-1] = uVar6;
          *(int *)((int)puVar7 + uVar6) = (uVar3 - uVar6) + -1;
        }
        if (iVar11 != 0x2e67) {
          *(int *)0x90f2 = iVar11;
        }
        in_BX[1] = (int)puVar7 + uVar6;
        return (uint *)CONCAT22(iVar11,puVar7);
      }
      puVar8 = (uint *)((int)puVar7 + uVar3) + 1;
      uVar4 = *(uint *)((int)puVar7 + uVar3);
      if ((uVar4 & 1) == 0) break;
      uVar4 = uVar4 + uVar3 + 2;
      *puVar10 = uVar4;
    } while( true );
  }
  *(undefined1 *)0x90f8 = 2;
  puVar10 = puVar7;
  do {
    if (uVar4 == 0xfffe) {
      if (in_BX[4] == 0) {
        pcVar1 = (char *)0x90f8;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          uVar4 = in_BX[3];
          uVar3 = FUN_19c7_46c4();
          bVar12 = uVar3 == uVar4;
          if (!bVar12) {
            bVar12 = (uVar3 & 0xff01) == 0xfffe;
            FUN_19c7_46c4();
            if (bVar12) goto LAB_19c7_4675;
            puVar2 = puVar10 + -1;
            *(char *)puVar2 = (char)*puVar2 + -1;
            bVar12 = (char)*puVar2 == '\0';
          }
          iVar5 = FUN_19c7_468a();
          if (!bVar12) {
            puVar9 = (uint *)(iVar5 + -2);
            goto LAB_19c7_460e;
          }
          goto LAB_19c7_4675;
        }
        puVar10 = (uint *)0x2e67;
        if (iVar11 != 0x2e67) {
          iVar11 = *(int *)0x90ee;
        }
      }
      else {
        iVar11 = in_BX[4];
      }
      puVar9 = (uint *)*in_BX;
    }
    else {
      puVar9 = (uint *)((int)puVar8 + uVar4);
      puVar10 = puVar8;
    }
LAB_19c7_460e:
    puVar7 = puVar9 + 1;
    uVar4 = *puVar9;
    puVar8 = puVar7;
    if ((uVar4 & 1) != 0) {
      while( true ) {
        uVar3 = uVar4 - 1;
        bVar12 = uVar3 == uVar6;
        if (uVar6 <= uVar3) goto LAB_19c7_45d7;
        puVar8 = (uint *)((int)puVar7 + uVar3) + 1;
        uVar4 = *(uint *)((int)puVar7 + uVar3);
        puVar10 = puVar7;
        if ((uVar4 & 1) == 0) break;
        uVar4 = uVar4 + uVar3 + 2;
        *puVar9 = uVar4;
      }
    }
  } while( true );
}



/* 19c7:468a FUN_19c7_468a */

undefined2 __cdecl16near FUN_19c7_468a(void)

{
  int in_CX;
  uint uVar1;
  uint uVar2;
  uint unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(unaff_DI + -2) & 1) != 0) {
    in_CX = (in_CX - *(uint *)(unaff_DI + -2)) + -1;
  }
  uVar1 = in_CX + 2;
  uVar2 = 0x7fff;
  do {
    if (uVar2 <= *(uint *)0x90f4) break;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  do {
    if (CARRY2(uVar1,unaff_SI)) {
      return 0;
    }
    if (!CARRY2(uVar1 + unaff_SI,uVar2)) {
      bVar3 = (uVar1 + unaff_SI + uVar2 & ~uVar2) == unaff_SI;
      uVar4 = FUN_19c7_46c4();
      if (!bVar3) {
        return (int)uVar4;
      }
      uVar2 = ~(uint)((ulong)uVar4 >> 0x10);
    }
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  return 0;
}



/* 19c7:46c4 FUN_19c7_46c4 */

undefined4 __cdecl16near FUN_19c7_46c4(void)

{
  undefined2 in_DX;
  int in_BX;
  int unaff_SI;
  int iVar1;
  int unaff_DI;
  undefined1 in_ZF;
  undefined4 uVar2;
  
  uVar2 = FUN_19c7_46e6();
  iVar1 = (int)uVar2;
  if (!(bool)in_ZF) {
    iVar1 = (int)uVar2 + (int)((ulong)uVar2 >> 0x10);
    *(undefined2 *)(iVar1 + -2) = 0xfffe;
    *(int *)(in_BX + 6) = iVar1;
    *(int *)(unaff_SI + -2) = (iVar1 - unaff_SI) + -1;
    iVar1 = unaff_DI;
  }
  return CONCAT22(in_DX,iVar1);
}



/* 19c7:46e6 FUN_19c7_46e6 */

void __cdecl16near FUN_19c7_46e6(void)

{
  FUN_19c7_4708(1);
  return;
}



/* 19c7:4708 FUN_19c7_4708 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_19c7_4708(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined *)_DAT_2a22_d38a;
  bVar5 = false;
  if (param_3 == 0) {
    if (param_1 == 1) {
      uVar3 = FUN_19c7_4776();
      if (!bVar5) {
        return uVar3;
      }
    }
    else {
      if ((param_1 != 2) &&
         (bVar5 = _DAT_2a22_d38a < (undefined *)&DAT_2a22_d33a,
         _DAT_2a22_d38a != (undefined2 *)(undefined *)&DAT_2a22_d33a)) {
        uVar6 = FUN_19c7_4776();
        param_2 = (int)((ulong)uVar6 >> 0x10);
        if (!bVar5) {
          return (int)uVar6;
        }
      }
      puVar4 = (undefined2 *)(puVar2 + 4);
      if ((puVar4 < (undefined2 *)&DAT_2a22_d38a) && (param_2 != 0)) {
        bVar5 = (param_2 + 0xfU >> 3 & 1) != 0;
        pcVar1 = (code *)swi(0x21);
        uVar6 = (*pcVar1)();
        if (!bVar5) {
          *puVar4 = (int)((ulong)uVar6 >> 0x10);
          *(int *)(puVar2 + 6) = (int)uVar6;
          _DAT_2a22_d38a = puVar4;
          return 0;
        }
      }
    }
  }
  return 0xffff;
}



/* 19c7:4776 FUN_19c7_4776 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_4776(void)

{
  code *pcVar1;
  uint in_DX;
  uint extraout_DX;
  uint uVar2;
  int unaff_BP;
  uint *puVar3;
  uint *unaff_DI;
  bool bVar4;
  
  puVar3 = unaff_DI;
  while (puVar3[1] != *(uint *)(unaff_BP + 0xe)) {
    puVar3 = puVar3 + 2;
    if (puVar3 == (uint *)&DAT_2a22_d38a) {
      return;
    }
  }
  uVar2 = in_DX + *puVar3;
  if (CARRY2(in_DX,*puVar3)) {
    return;
  }
  if ((puVar3 != unaff_DI) || (_DAT_2a22_d334 < uVar2)) {
    bVar4 = puVar3 < unaff_DI;
    if (puVar3 == unaff_DI) {
      bVar4 = ((uint)(CONCAT12(0xfff0 < uVar2,uVar2 + 0xf) >> 1) >> 3) + *(uint *)(unaff_BP + 0xe) <
              _DAT_2a22_d3ab;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      return;
    }
    uVar2 = extraout_DX;
    if (puVar3 == unaff_DI) {
      _DAT_2a22_d334 = extraout_DX;
    }
  }
  LOCK();
  *puVar3 = uVar2;
  UNLOCK();
  return;
}



/* 19c7:47cc FUN_19c7_47cc */

char * __cdecl16far FUN_19c7_47cc(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = -1;
  pcVar6 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  param_2 = param_2 + -uVar4;
  pcVar7 = pcVar6 + -1;
  if (((uint)param_2 & 1) != 0) {
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    pcVar6[-1] = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return param_1;
}



/* 19c7:480c FUN_19c7_480c */

void __cdecl16far FUN_19c7_480c(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar3 = 0xffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  if (((uint)param_1 & 1) != 0) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}



/* 19c7:483e FUN_19c7_483e */

void __cdecl16far FUN_19c7_483e(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  param_2 = param_2 + -uVar3;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}



/* 19c7:486a FUN_19c7_486a */

int __cdecl16far FUN_19c7_486a(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}



/* 19c7:4886 FUN_19c7_4886 */

char * __cdecl16far FUN_19c7_4886(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  if (param_3 != 0) {
    do {
      pcVar1 = param_2;
      param_2 = param_2 + 1;
      if (*pcVar1 == '\0') break;
      pcVar2 = pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar2 = *pcVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar1 = '\0';
    }
  }
  return param_1;
}



/* 19c7:48ae FUN_19c7_48ae */

uint __cdecl16far FUN_19c7_48ae(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  if (param_3 != 0) {
    iVar3 = param_3;
    pcVar5 = param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    param_3 = param_3 - iVar3;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar2 = param_1;
      param_1 = param_1 + 1;
      pcVar1 = param_2;
      param_2 = param_2 + 1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0;
    if ((byte)param_2[-1] <= (byte)param_1[-1]) {
      if (param_2[-1] == param_1[-1]) {
        return 0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}



/* 19c7:48e8 FUN_19c7_48e8 */

byte * __cdecl16far FUN_19c7_48e8(int param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  char cVar3;
  byte bVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  uVar5 = 0;
  pbVar8 = param_2;
  pbVar7 = param_2;
  if ((param_3 == 10) && (uVar5 = param_1 >> 0xf, (int)uVar5 < 0)) {
    pbVar8 = param_2 + 1;
    *param_2 = 0x2d;
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    uVar5 = -(uVar5 + bVar10);
    pbVar7 = pbVar8;
  }
  do {
    uVar6 = 0;
    uVar4 = uVar5;
    if (uVar5 != 0) {
      uVar4 = uVar5 / param_3;
      uVar6 = uVar5 % param_3;
    }
    uVar1 = CONCAT22(uVar6,param_1);
    param_1 = (int)(uVar1 / param_3);
    cVar3 = (char)(uVar1 % (ulong)param_3);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x57;
    }
    pbVar9 = pbVar8 + 1;
    *pbVar8 = bVar2;
    uVar5 = uVar4;
    pbVar8 = pbVar9;
  } while (uVar4 != 0 || param_1 != 0);
  *pbVar9 = 0;
  do {
    pbVar9 = pbVar9 + -1;
    LOCK();
    bVar2 = *pbVar9;
    *pbVar9 = *pbVar7;
    UNLOCK();
    *pbVar7 = bVar2;
    pbVar8 = pbVar7 + 2;
    pbVar7 = pbVar7 + 1;
  } while (pbVar8 < pbVar9);
  return param_2;
}



/* 19c7:4904 FUN_19c7_4904 */

void FUN_19c7_4904(void)

{
  FUN_19c7_4daa();
  return;
}



/* 19c7:490e FUN_19c7_490e */

int __cdecl16far FUN_19c7_490e(int param_1)

{
  if ((*(byte *)(param_1 + -0x6eeb) & 2) != 0) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}



/* 19c7:4926 FUN_19c7_4926 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_19c7_4926(int param_1)

{
  undefined2 uVar1;
  
  if (((param_1 < _DAT_2a22_d3b2) && (-1 < param_1)) &&
     ((((undefined *)&DAT_2a22_d3b4)[param_1] & 0x40) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* 19c7:494a FUN_19c7_494a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_494a(char *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = FUN_19c7_486a(param_1);
    FUN_19c7_440e(0x19c7,2,param_1,uVar1);
    FUN_19c7_440e(0x19c7,2,0x9216,2);
  }
  if ((_DAT_2a22_d3a5 < 0) || (_DAT_2a22_d7f2 <= _DAT_2a22_d3a5)) {
    iVar3 = _DAT_2a22_d7f2;
  }
  else {
    iVar3 = _DAT_2a22_d3a5;
  }
  uVar1 = *(undefined2 *)(iVar3 * 2 + -0x6caa);
  uVar2 = FUN_19c7_486a(uVar1);
  FUN_19c7_440e(0x19c7,2,uVar1,uVar2);
  FUN_19c7_440e(0x19c7,2,0x9219,1);
  return;
}



/* 19c7:49d4 FUN_19c7_49d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_19c7_49d4(void)

{
  code *pcVar1;
  byte bVar2;
  char cVar4;
  uint uVar3;
  
  cVar4 = (char)((uint)_DAT_2a22_d66c >> 8);
  uVar3 = CONCAT11(cVar4,0xff);
  if (cVar4 != '\0') {
    pcVar1 = (code *)swi(0x21);
    bVar2 = (*pcVar1)();
    uVar3 = (uint)bVar2;
  }
  return uVar3;
}



/* 19c7:4a00 FUN_19c7_4a00 */

undefined2 __cdecl16far FUN_19c7_4a00(byte param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined2 local_e;
  undefined1 local_c;
  byte local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  
  local_c = (code)0xcd;
  local_b = param_1;
  bVar6 = param_1 < 0x25;
  if ((param_1 == 0x25) || (bVar6 = param_1 < 0x26, param_1 == 0x26)) {
    local_8 = 0xcb;
    local_9 = 0x44;
    local_a = 0x44;
  }
  else {
    local_a = 0xcb;
  }
  local_e = 0x2e67;
  uVar5 = *(undefined2 *)(param_2 + 2);
  uVar4 = *(undefined2 *)(param_2 + 4);
  uVar1 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined2 *)(param_2 + 10);
  uVar7 = (*(code *)&local_c)(0x19c7);
  uVar3 = (undefined2)uVar7;
  *param_3 = uVar3;
  param_3[1] = uVar5;
  param_3[2] = uVar4;
  param_3[3] = (int)((ulong)uVar7 >> 0x10);
  param_3[4] = uVar1;
  param_3[5] = uVar2;
  if (bVar6) {
    FUN_19c7_2da8();
    uVar3 = *param_3;
  }
  param_3[6] = (uint)bVar6;
  return uVar3;
}



/* 19c7:4a80 FUN_19c7_4a80 */

undefined2 __cdecl16far FUN_19c7_4a80(undefined1 *param_1,undefined2 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined1 *local_e;
  int local_c;
  undefined1 *local_a;
  undefined1 local_8;
  undefined1 *local_4;
  
  local_4 = &param_3;
  local_8 = 0x42;
  local_a = param_1;
  local_e = param_1;
  local_c = 0x7fff;
  uVar1 = FUN_19c7_37c8(&local_e,param_2,&param_3);
  local_c = local_c + -1;
  if (local_c < 0) {
    FUN_19c7_3340(0,&local_e);
  }
  else {
    *local_e = 0;
  }
  return uVar1;
}



/* 19c7:4ada FUN_19c7_4ada */

undefined2 __cdecl16far FUN_19c7_4ada(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  do {
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    if (*pcVar1 == '\0') {
      return 0;
    }
    iVar2 = FUN_19c7_4c0a(*pcVar1);
  } while (iVar2 != -1);
  return 0xffff;
}



/* 19c7:4afe FUN_19c7_4afe */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 __cdecl16far
FUN_19c7_4afe(byte param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined2 local_10;
  undefined1 local_e;
  byte local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 uStack_8;
  
  uStack_8 = 0x2e67;
  local_e = (code)0xcd;
  local_d = param_1;
  bVar8 = param_1 < 0x25;
  if ((param_1 == 0x25) || (bVar8 = param_1 < 0x26, param_1 == 0x26)) {
    local_a = 0xcb;
    local_b = 0x44;
    local_c = 0x44;
  }
  else {
    local_c = 0xcb;
  }
  local_10 = 0x2e67;
  uVar7 = *(undefined2 *)(param_2 + 2);
  uVar6 = *(undefined2 *)(param_2 + 4);
  uVar3 = *(undefined2 *)(param_2 + 8);
  uVar4 = *(undefined2 *)(param_2 + 10);
  uVar1 = *param_4;
  uVar2 = param_4[3];
  uVar9 = (*(code *)&local_e)(0x19c7);
  uVar5 = (undefined2)uVar9;
  *param_4 = uVar1;
  param_4[3] = uVar2;
  *param_3 = uVar5;
  param_3[1] = uVar7;
  param_3[2] = uVar6;
  param_3[3] = (int)((ulong)uVar9 >> 0x10);
  param_3[4] = uVar3;
  param_3[5] = uVar4;
  if (bVar8) {
    FUN_19c7_2da8();
    uVar5 = *param_3;
  }
  param_3[6] = (uint)bVar8;
  return uVar5;
}



/* 19c7:4b94 FUN_19c7_4b94 */

undefined2 __cdecl16far FUN_19c7_4b94(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 in_CF;
  undefined4 uVar7;
  
  uVar6 = *(undefined2 *)(param_1 + 2);
  uVar5 = *(undefined2 *)(param_1 + 4);
  uVar1 = *(undefined2 *)(param_1 + 8);
  uVar2 = *(undefined2 *)(param_1 + 10);
  pcVar3 = (code *)swi(0x21);
  uVar7 = (*pcVar3)();
  uVar4 = (undefined2)uVar7;
  *param_2 = uVar4;
  param_2[1] = uVar6;
  param_2[2] = uVar5;
  param_2[3] = (int)((ulong)uVar7 >> 0x10);
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  if ((bool)in_CF) {
    FUN_19c7_2da8();
    uVar4 = *param_2;
  }
  param_2[6] = (uint)(byte)in_CF;
  return uVar4;
}



/* 19c7:4bde FUN_19c7_4bde */

void __cdecl16far
FUN_19c7_4bde(undefined2 param_1,undefined1 *param_2,undefined2 param_3,undefined1 *param_4,
             int param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  for (; param_5 != 0; param_5 = param_5 + -1) {
    puVar2 = param_4;
    param_4 = param_4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 19c7:4bfc FUN_19c7_4bfc */

undefined1 __cdecl16far FUN_19c7_4bfc(undefined2 param_1)

{
  undefined1 uVar1;
  
  uVar1 = in(param_1);
  return uVar1;
}



/* 19c7:4c0a FUN_19c7_4c0a */

uint __cdecl16far FUN_19c7_4c0a(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0xff;
}



/* 19c7:4c1a FUN_19c7_4c1a */

char * __cdecl16far FUN_19c7_4c1a(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (param_2 != *pcVar1);
  param_1 = param_1 + -1;
  if (*param_1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* 19c7:4c44 FUN_19c7_4c44 */

uint __cdecl16far FUN_19c7_4c44(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      bVar2 = *param_1;
      bVar1 = *param_2;
      if ((bVar2 == 0) || (bVar1 == 0)) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        bVar2 = bVar2 + 0x20;
      }
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        bVar1 = bVar1 + 0x20;
      }
      bVar4 = bVar2 < bVar1;
      if (bVar2 != bVar1) goto LAB_19c7_4c8a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar3 = 0;
    bVar4 = bVar2 < bVar1;
    if (bVar2 != bVar1) {
LAB_19c7_4c8a:
      uVar3 = 0;
      if (!bVar4) {
        uVar3 = 0xfffe;
      }
      uVar3 = ~uVar3;
    }
  }
  return uVar3;
}



/* 19c7:4cbe FUN_19c7_4cbe */

char * __cdecl16far FUN_19c7_4cbe(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return param_1;
}



/* 19c7:4ce0 FUN_19c7_4ce0 */

undefined2 * __cdecl16far FUN_19c7_4ce0(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar3 = param_1;
  if (param_3 != 0) {
    if ((param_2 < param_1) && (param_1 < (undefined2 *)((int)param_2 + param_3))) {
      puVar5 = (undefined1 *)((int)param_2 + param_3);
      puVar6 = (undefined1 *)((int)param_1 + param_3);
      while( true ) {
        puVar6 = puVar6 + -1;
        puVar5 = puVar5 + -1;
        if (param_3 == 0) break;
        param_3 = param_3 - 1;
        *puVar6 = *puVar5;
      }
    }
    else {
      if (((uint)param_1 & 1) != 0) {
        puVar2 = param_1;
        param_1 = (undefined2 *)((int)param_1 + 1);
        puVar1 = param_2;
        param_2 = (undefined2 *)((int)param_2 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
        param_3 = param_3 - 1;
      }
      for (uVar4 = param_3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar2 = param_1;
        param_1 = param_1 + 1;
        puVar1 = param_2;
        param_2 = param_2 + 1;
        *puVar2 = *puVar1;
      }
      for (uVar4 = (uint)((param_3 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar2 = param_1;
        param_1 = (undefined2 *)((int)param_1 + 1);
        puVar1 = param_2;
        param_2 = (undefined2 *)((int)param_2 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      }
    }
  }
  return puVar3;
}



/* 19c7:4d28 FUN_19c7_4d28 */

int __cdecl16far FUN_19c7_4d28(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = false;
  iVar3 = 0;
  bVar5 = true;
  if (param_3 != 0) {
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pbVar2 = param_2;
      param_2 = param_2 + 1;
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar4 = *pbVar1 < *pbVar2;
      bVar5 = *pbVar1 == *pbVar2;
    } while (bVar5);
    if (!bVar5) {
      iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
    }
  }
  return iVar3;
}



/* 19c7:4d50 FUN_19c7_4d50 */

void __cdecl16far FUN_19c7_4d50(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    if (((uint)param_1 & 1) != 0) {
      puVar2 = param_1;
      param_1 = (undefined2 *)((int)param_1 + 1);
      puVar1 = param_2;
      param_2 = (undefined2 *)((int)param_2 + 1);
      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      param_3 = param_3 - 1;
    }
    for (uVar3 = param_3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2 = param_1;
      param_1 = param_1 + 1;
      puVar1 = param_2;
      param_2 = param_2 + 1;
      *puVar2 = *puVar1;
    }
    for (uVar3 = (uint)((param_3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2 = param_1;
      param_1 = (undefined2 *)((int)param_1 + 1);
      puVar1 = param_2;
      param_2 = (undefined2 *)((int)param_2 + 1);
      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
    }
  }
  return;
}



/* 19c7:4d7c FUN_19c7_4d7c */

undefined2 * __cdecl16far FUN_19c7_4d7c(undefined2 *param_1,undefined1 param_2,uint param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    if (((uint)param_1 & 1) != 0) {
      puVar3 = (undefined2 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
      param_3 = param_3 - 1;
    }
    for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar1 = CONCAT11(param_2,param_2);
    }
    for (uVar2 = (uint)((param_3 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar3;
      puVar3 = (undefined2 *)((int)puVar3 + 1);
      *(undefined1 *)puVar1 = param_2;
    }
  }
  return param_1;
}



/* 19c7:4daa FUN_19c7_4daa */

byte * __cdecl16far FUN_19c7_4daa(void)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  char cVar5;
  byte bVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char in_BL;
  int iVar9;
  int unaff_BP;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  uVar1 = *(uint *)(unaff_BP + 0xc);
  iVar9 = *(int *)(unaff_BP + 6);
  uVar7 = *(uint *)(unaff_BP + 8);
  pbVar2 = (byte *)*(undefined2 *)(unaff_BP + 10);
  pbVar11 = pbVar2;
  pbVar10 = pbVar2;
  if (((in_BL != '\0') && (uVar1 == 10)) && ((int)uVar7 < 0)) {
    pbVar11 = pbVar2 + 1;
    *pbVar2 = 0x2d;
    bVar13 = iVar9 != 0;
    iVar9 = -iVar9;
    uVar7 = -(uVar7 + bVar13);
    pbVar10 = pbVar11;
  }
  do {
    uVar8 = 0;
    uVar6 = uVar7;
    if (uVar7 != 0) {
      uVar6 = uVar7 / uVar1;
      uVar8 = uVar7 % uVar1;
    }
    uVar3 = CONCAT22(uVar8,iVar9);
    iVar9 = (int)(uVar3 / uVar1);
    cVar5 = (char)(uVar3 % (ulong)uVar1);
    bVar4 = cVar5 + 0x30;
    if (0x39 < bVar4) {
      bVar4 = cVar5 + 0x57;
    }
    pbVar12 = pbVar11 + 1;
    *pbVar11 = bVar4;
    uVar7 = uVar6;
    pbVar11 = pbVar12;
  } while (uVar6 != 0 || iVar9 != 0);
  *pbVar12 = 0;
  do {
    pbVar12 = pbVar12 + -1;
    LOCK();
    bVar4 = *pbVar12;
    *pbVar12 = *pbVar10;
    UNLOCK();
    *pbVar10 = bVar4;
    pbVar11 = pbVar10 + 2;
    pbVar10 = pbVar10 + 1;
  } while (pbVar11 < pbVar12);
  return pbVar2;
}



/* 19c7:4e0a FUN_19c7_4e0a */

int __cdecl16far FUN_19c7_4e0a(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



/* 19c7:4e20 FUN_19c7_4e20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19c7_4e20(undefined2 param_1)

{
  _DAT_2a22_d66e = param_1;
  _DAT_2a22_d670 = 0;
  return;
}



/* 19c7:4e32 FUN_19c7_4e32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_19c7_4e32(void)

{
  long lVar1;
  
  lVar1 = FUN_19c7_4ffe(_DAT_2a22_d66e,_DAT_2a22_d670,0x43fd,3);
  _DAT_2a22_d66e = lVar1 + 0x269ec3;
  return (uint)((ulong)(lVar1 + 0x269ec3) >> 0x10) & 0x7fff;
}



/* 19c7:4e5a FUN_19c7_4e5a */

void FUN_19c7_4e5a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d88();
  return;
}



/* 19c7:4e68 FUN_19c7_4e68 */

void FUN_19c7_4e68(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    param_2 = uVar2;
  }
  *param_3 = param_2;
  FUN_19c7_2d90();
  return;
}



/* 19c7:4e80 FUN_19c7_4e80 */

undefined2 __cdecl16far FUN_19c7_4e80(char param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_ZF;
  
  pcVar1 = (code *)swi(0x16);
  uVar2 = (*pcVar1)();
  if (((bool)in_ZF) && (param_1 == '\x01')) {
    uVar2 = 0;
  }
  return uVar2;
}



/* 19c7:4e94 FUN_19c7_4e94 */

uint __cdecl16far FUN_19c7_4e94(int param_1,undefined2 *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined2 in_CX;
  undefined2 extraout_DX;
  
  if (param_1 == 0) {
    pcVar1 = (code *)swi(0x1a);
    bVar2 = (*pcVar1)();
    *param_2 = extraout_DX;
    param_2[1] = in_CX;
    uVar3 = (uint)bVar2;
  }
  else {
    uVar3 = 0xffff;
    if (param_1 == 1) {
      pcVar1 = (code *)swi(0x1a);
      (*pcVar1)();
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* 19c7:4ec2 FUN_19c7_4ec2 */

void FUN_19c7_4ec2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d90();
  return;
}



/* 19c7:4ed0 FUN_19c7_4ed0 */

void FUN_19c7_4ed0(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined2 *in_stack_00000008;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_00000008 = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4ed7 FUN_19c7_4ed7 */

void FUN_19c7_4ed7(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined2 *in_stack_00000008;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_00000008 = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4ef0 FUN_19c7_4ef0 */

void FUN_19c7_4ef0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d90();
  return;
}



/* 19c7:4efa FUN_19c7_4efa */

void FUN_19c7_4efa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f18 FUN_19c7_4f18 */

void FUN_19c7_4f18(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined2 *in_stack_00000008;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_00000008 = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f30 FUN_19c7_4f30 */

void FUN_19c7_4f30(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined2 in_stack_00000000;
  undefined2 *in_stack_0000000c;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_0000000c = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f37 FUN_19c7_4f37 */

void FUN_19c7_4f37(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined2 in_stack_00000000;
  undefined2 *in_stack_0000000c;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_0000000c = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f54 FUN_19c7_4f54 */

void FUN_19c7_4f54(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f62 FUN_19c7_4f62 */

undefined4 __stdcall16far FUN_19c7_4f62(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  
  cVar10 = (int)param_2 < 0;
  if ((bool)cVar10) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar9 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar10 = cVar10 + '\x01';
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar9 - param_4;
  }
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    uVar7 = param_1;
    uVar4 = param_3;
    uVar6 = param_2;
    uVar8 = param_4;
    do {
      uVar3 = uVar8 & 1;
      uVar8 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT12(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar7 = (uint)(CONCAT12(uVar3 != 0,uVar7) >> 1);
    } while (uVar8 != 0);
    uVar1 = CONCAT22(uVar6,uVar7) / (ulong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar4 = (uint)((ulong)lVar2 >> 0x10);
    uVar7 = uVar4 + iVar5 * param_4;
    if (((CARRY2(uVar4,iVar5 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  if (cVar10 == '\x01') {
    bVar9 = iVar5 != 0;
    iVar5 = -iVar5;
    uVar4 = -(uint)bVar9 - uVar4;
  }
  return CONCAT22(uVar4,iVar5);
}



/* 19c7:4ffe FUN_19c7_4ffe */

long __stdcall16far FUN_19c7_4ffe(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}



/* 19c7:5032 FUN_19c7_5032 */

void __stdcall16far FUN_19c7_5032(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_19c7_4f62(*param_1,param_1[1],param_2,param_3);
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  *param_1 = (int)uVar1;
  return;
}



/* 19c7:5056 FUN_19c7_5056 */

undefined4 __stdcall16far FUN_19c7_5056(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    uVar8 = param_1;
    uVar6 = param_4;
    uVar7 = param_2;
    uVar4 = param_3;
    do {
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar4 = (uint)(CONCAT12(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar7 & 1;
      uVar7 = uVar7 >> 1;
      uVar8 = (uint)(CONCAT12(uVar3 != 0,uVar8) >> 1);
    } while (uVar6 != 0);
    uVar1 = CONCAT22(uVar7,uVar8) / (ulong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar4 = (uint)((ulong)lVar2 >> 0x10);
    uVar8 = uVar4 + iVar5 * param_4;
    if (((CARRY2(uVar4,iVar5 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  return CONCAT22(uVar4,iVar5);
}



/* 1ed2:0008 FUN_1ed2_0008 */

int __cdecl16far FUN_1ed2_0008(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)((long)param_1 * (long)param_2);
  return ((uint)(((ulong)((long)param_1 * (long)param_2) >> 0x10) << 1) | (uint)(iVar1 < 0)) +
         (uint)(iVar1 << 1 < 0);
}



/* 1ed2:001e FUN_1ed2_001e */

int __cdecl16far FUN_1ed2_001e(int param_1,int param_2)

{
  return param_1 * param_2 * 2;
}



/* 1ed2:005f FUN_1ed2_005f */

undefined2 __cdecl16far FUN_1ed2_005f(int param_1,int param_2,int param_3)

{
  return (int)(((long)param_1 * (long)param_2) / (long)param_3);
}



/* 1ed2:006e FUN_1ed2_006e */

int __cdecl16far FUN_1ed2_006e(int param_1)

{
  param_1 = param_1 + 0x4000;
  FUN_1ed2_008e();
  return param_1;
}



/* 1ed2:007e FUN_1ed2_007e */

undefined2 __cdecl16far FUN_1ed2_007e(undefined2 param_1)

{
  FUN_1ed2_008e();
  return param_1;
}



/* 1ed2:008e FUN_1ed2_008e */

undefined4 __cdecl16near FUN_1ed2_008e(void)

{
  long lVar1;
  uint in_BX;
  int iVar2;
  
  iVar2 = (in_BX >> 8) * 2;
  lVar1 = (long)(*(int *)(iVar2 + 0x176a) - *(int *)(iVar2 + 0x1768)) * (long)(int)(in_BX & 0xff);
  return CONCAT22((int)((ulong)lVar1 >> 8),CONCAT11((char)((ulong)lVar1 >> 8),(char)lVar1 << 1));
}



/* 1edc:000e FUN_1edc_000e */

uint __cdecl16far FUN_1edc_000e(uint param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
  uVar4 = (param_2 ^ (int)param_2 >> 0xf) - ((int)param_2 >> 0xf);
  uVar7 = uVar4;
  if (uVar3 < uVar4) {
    uVar7 = uVar3;
    uVar3 = uVar4;
  }
  uVar4 = (uVar7 >> 2) + uVar3;
  iVar6 = uVar7 * 2 - uVar3;
  if (uVar3 <= uVar7 * 2 && iVar6 != 0) {
    uVar4 = uVar4 + ((uint)(iVar6 * 3) >> 4);
  }
  uVar4 = uVar4 - (uVar4 >> 6);
  if (param_3 <= uVar4) {
    return uVar4;
  }
  uVar1 = (long)(int)param_2 * (long)(int)param_2 + (long)(int)param_1 * (long)(int)param_1;
  uVar7 = (uint)uVar1;
  uVar4 = (uint)(uVar1 >> 0x10);
  uVar3 = 0;
  if ((-1 < (long)uVar1) && (uVar3 = 0, uVar1 != 0)) {
    uVar3 = 0x20;
    uVar5 = uVar4;
    if (uVar4 == 0) {
      uVar3 = 0x10;
      uVar5 = uVar7;
    }
    do {
      bVar8 = -1 < (int)uVar5;
      uVar5 = uVar5 << 1;
      uVar3 = uVar3 - 1;
    } while (bVar8);
    uVar2 = uVar1;
    for (uVar3 = uVar3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar7 = (uint)(CONCAT12((uVar2 & 0x10000) != 0,(int)uVar2) >> 1);
      uVar2 = CONCAT22((uint)(uVar2 >> 0x11),uVar7);
    }
    do {
      uVar3 = uVar7;
      uVar7 = (uint)(((ulong)uVar4 << 0x10 | uVar1 & 0xffff) / (ulong)uVar3);
      uVar7 = (uint)(CONCAT12(CARRY2(uVar7,uVar3),uVar7 + uVar3) >> 1);
    } while (uVar7 < uVar3);
  }
  return uVar3;
}



/* 1edc:0062 FUN_1edc_0062 */

uint __cdecl16far FUN_1edc_0062(int param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar1 = (long)param_2 * (long)param_2 + (long)param_1 * (long)param_1;
  uVar6 = (uint)uVar1;
  uVar5 = (uint)(uVar1 >> 0x10);
  uVar3 = 0;
  if ((-1 < (long)uVar1) && (uVar3 = 0, uVar1 != 0)) {
    uVar3 = 0x20;
    uVar4 = uVar5;
    if (uVar5 == 0) {
      uVar3 = 0x10;
      uVar4 = uVar6;
    }
    do {
      bVar7 = -1 < (int)uVar4;
      uVar4 = uVar4 << 1;
      uVar3 = uVar3 - 1;
    } while (bVar7);
    uVar2 = uVar1;
    for (uVar3 = uVar3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar6 = (uint)(CONCAT12((uVar2 & 0x10000) != 0,(int)uVar2) >> 1);
      uVar2 = CONCAT22((uint)(uVar2 >> 0x11),uVar6);
    }
    do {
      uVar3 = uVar6;
      uVar6 = (uint)(((ulong)uVar5 << 0x10 | uVar1 & 0xffff) / (ulong)uVar3);
      uVar6 = (uint)(CONCAT12(CARRY2(uVar6,uVar3),uVar6 + uVar3) >> 1);
    } while (uVar6 < uVar3);
  }
  return uVar3;
}



/* 1edc:0079 FUN_1edc_0079 */

uint __cdecl16far FUN_1edc_0079(int param_1,int param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar1 = (long)param_2 * (long)param_2 + (long)param_1 * (long)param_1 +
          (long)param_3 * (long)param_3;
  uVar6 = (uint)uVar1;
  uVar5 = (uint)(uVar1 >> 0x10);
  uVar3 = 0;
  if ((-1 < (long)uVar1) && (uVar3 = 0, uVar1 != 0)) {
    uVar3 = 0x20;
    uVar4 = uVar5;
    if (uVar5 == 0) {
      uVar3 = 0x10;
      uVar4 = uVar6;
    }
    do {
      bVar7 = -1 < (int)uVar4;
      uVar4 = uVar4 << 1;
      uVar3 = uVar3 - 1;
    } while (bVar7);
    uVar2 = uVar1;
    for (uVar3 = uVar3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar6 = (uint)(CONCAT12((uVar2 & 0x10000) != 0,(int)uVar2) >> 1);
      uVar2 = CONCAT22((uint)(uVar2 >> 0x11),uVar6);
    }
    do {
      uVar3 = uVar6;
      uVar6 = (uint)(((ulong)uVar5 << 0x10 | uVar1 & 0xffff) / (ulong)uVar3);
      uVar6 = (uint)(CONCAT12(CARRY2(uVar6,uVar3),uVar6 + uVar3) >> 1);
    } while (uVar6 < uVar3);
  }
  return uVar3;
}



/* 1edc:0099 FUN_1edc_0099 */

uint __cdecl16far FUN_1edc_0099(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = 0;
  if ((-1 < (int)param_2) && (uVar2 = 0, param_1 != 0 || param_2 != 0)) {
    uVar2 = 0x20;
    uVar3 = param_2;
    if (param_2 == 0) {
      uVar2 = 0x10;
      uVar3 = param_1;
    }
    do {
      bVar5 = -1 < (int)uVar3;
      uVar3 = uVar3 << 1;
      uVar2 = uVar2 - 1;
    } while (bVar5);
    uVar3 = param_1;
    uVar4 = param_2;
    for (uVar2 = uVar2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar1 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      uVar3 = (uint)(CONCAT12(uVar1 != 0,uVar3) >> 1);
    }
    do {
      uVar2 = uVar3;
      uVar3 = (uint)(CONCAT22(param_2,param_1) / (ulong)uVar2);
      uVar3 = (uint)(CONCAT12(CARRY2(uVar3,uVar2),uVar3 + uVar2) >> 1);
    } while (uVar3 < uVar2);
  }
  return uVar2;
}



/* 1eea:0004 FUN_1eea_0004 */

undefined2 __cdecl16far FUN_1eea_0004(char param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  undefined2 in_AX;
  undefined1 uVar8;
  int iVar6;
  int iVar7;
  char cVar9;
  byte *pbVar10;
  undefined2 uVar11;
  
  uVar11 = (undefined2)((ulong)param_3 >> 0x10);
  pbVar10 = (byte *)param_3;
  if ((DAT_0000_0489 & 2) != 0) {
    do {
      pbVar1 = pbVar10;
      pbVar2 = pbVar10 + 1;
      pbVar3 = pbVar10 + 2;
      pbVar10 = pbVar10 + 3;
      lVar4 = (ulong)*pbVar2 * 0x970a + (ulong)*pbVar1 * 0x4ccd + (ulong)*pbVar3 * 0x1c29;
      iVar6 = (int)lVar4;
      iVar7 = iVar6 << 1;
      cVar9 = (char)((ulong)lVar4 >> 0x10) + (iVar6 < 0);
      do {
        uVar8 = (undefined1)((uint)iVar7 >> 8);
        bVar5 = in(0x3da);
        iVar7 = CONCAT11(uVar8,bVar5);
      } while ((bVar5 & 8) == 0);
      out(0x3c8,param_1);
      out(0x3c9,cVar9);
      out(0x3c9,cVar9);
      out(0x3c9,cVar9);
      param_2 = param_2 + -1;
      param_1 = param_1 + '\x01';
    } while (param_2 != 0);
    return CONCAT11(uVar8,cVar9);
  }
  do {
    do {
      bVar5 = in(0x3da);
      in_AX = CONCAT11((char)((uint)in_AX >> 8),bVar5);
    } while ((bVar5 & 8) == 0);
    while( true ) {
      uVar8 = (undefined1)((uint)in_AX >> 8);
      bVar5 = in(0x3da);
      in_AX = CONCAT11(uVar8,bVar5);
      if ((bVar5 & 1) == 0) break;
      out(0x3c8,param_1);
      out(0x3c9,*pbVar10);
      pbVar2 = pbVar10 + 2;
      out(0x3c9,pbVar10[1]);
      pbVar10 = pbVar10 + 3;
      in_AX = CONCAT11(uVar8,*pbVar2);
      out(0x3c9,*pbVar2);
      param_2 = param_2 + -1;
      param_1 = param_1 + '\x01';
      if (param_2 == 0) {
        return in_AX;
      }
    }
  } while( true );
}



/* 1eea:00a4 FUN_1eea_00a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1eea_00a4(uint param_1,undefined2 param_2)

{
  undefined2 in_stack_00000000;
  
  if (DAT_2a22_c855 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001ef52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uRam0001ef55 = in_stack_00000000;
    (*(code *)(ulong)uRam0001eea0)();
    return;
  }
  DAT_2a22_c854 = '\x01';
  _DAT_2a22_c856 = param_1;
  _DAT_2a22_c858 = param_2;
  uRam0001ef6e = in_stack_00000000;
  (*_DAT_2a22_4450)();
  DAT_2a22_c854 = DAT_2a22_c854 + -1;
  if (DAT_2a22_c854 != '\0') {
    FUN_1000_00ea();
    DAT_2a22_c854 = '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x0001ef7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)_DAT_2a22_c856)();
  return;
}



/* 1eea:00e4 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:00eb thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:00f2 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:00f9 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0100 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0107 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:010c thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:0115 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0123 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:012a thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0131 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:014b thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:015b thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0162 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0169 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0170 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0177 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0193 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:019a thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01a1 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01a8 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01af thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01b6 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01bb thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:01c2 thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:01c9 thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:01d2 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01d9 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01e0 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01ee thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01f5 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01fc thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0203 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:020a thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0211 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:023b thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0242 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0249 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:035a thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0361 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:037d thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0384 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:038b thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03a0 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03a7 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03ae thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03ca thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03ec FUN_1eea_03ec */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_1eea_03ec(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 in_CF;
  bool bVar5;
  
  _DAT_2a22_c85a = param_1;
  _DAT_2a22_c85c = param_2;
  uVar4 = 0xffff;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(0x2e67);
  if (!(bool)in_CF) {
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  bVar5 = uVar4 < 0x100;
  _DAT_2a22_c860 = uVar4 - 0x100;
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if (bVar5) {
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  pcVar1 = (code *)swi(0x21);
  _DAT_2a22_c85e = (undefined1 *)register0x00000010;
  _DAT_2a22_c862 = iVar2;
  _DAT_2a22_c864 = iVar2;
  iVar3 = (*pcVar1)();
  iVar2 = _DAT_2a22_c862;
  if (bVar5) {
    if (iVar3 == 2) {
      iVar2 = FUN_1eea_04a8();
      return iVar2;
    }
    if (iVar3 == 8) {
      iVar2 = FUN_1eea_04a8();
      return iVar2;
    }
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  iVar3 = *(int *)0x2a +
          ((uint)(CONCAT12(0xfff0 < *(uint *)&DAT_2a22_447c,*(uint *)&DAT_2a22_447c + 0xf) >> 1) >>
          3);
  *(undefined2 *)(_DAT_2a22_c85e + -2) = 0xf322;
  FUN_1eea_04d7();
  uVar4 = (iVar3 - iVar2) + 8;
  bVar5 = uVar4 < _DAT_2a22_c860;
  if (_DAT_2a22_c860 < uVar4) {
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar5) {
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  return iVar2;
}



/* 1eea:04a8 FUN_1eea_04a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1eea_04a8(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  uVar4 = 0;
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  bVar5 = false;
  if (_DAT_2a22_c85c != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar5) {
      FUN_1eea_04a8();
      return;
    }
    uVar3 = 0x8000;
    bVar5 = false;
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar5) {
      FUN_1eea_04a8();
      return;
    }
    if (uVar3 <= uVar2) {
      uVar2 = uVar4 + 0x800;
      uVar4 = uVar2;
    }
    bVar5 = CARRY2(uVar4,uVar2 + 0xf >> 4);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar5) {
      FUN_1eea_04a8();
      return;
    }
  }
  return;
}



/* 1eea:04d7 FUN_1eea_04d7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_04d7(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint in_BX;
  bool bVar4;
  
  bVar4 = false;
  if (_DAT_2a22_c85c != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      FUN_1eea_04a8();
      return;
    }
    uVar3 = 0x8000;
    bVar4 = false;
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar4) {
      FUN_1eea_04a8();
      return;
    }
    if (uVar3 <= uVar2) {
      uVar2 = in_BX + 0x800;
      in_BX = uVar2;
    }
    bVar4 = CARRY2(in_BX,uVar2 + 0xf >> 4);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      FUN_1eea_04a8();
      return;
    }
  }
  return;
}



/* 1eea:052b FUN_1eea_052b */

void __cdecl16far FUN_1eea_052b(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  
  puVar5 = (undefined2 *)0x32;
  iVar6 = (*(uint *)0x2e & 0xff) * 7 + 0xe2;
  iVar4 = *(int *)0x30;
  uVar1 = *(undefined2 *)0x28;
  do {
    puVar3 = (undefined2 *)(iVar6 + 5);
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *(undefined2 *)(iVar6 + 3) = *puVar2;
    iVar6 = iVar6 + 7;
    *puVar3 = uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



/* 1eea:0574 FUN_1eea_0574 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_0574(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 unaff_ES;
  
  if ((0 < param_4) && (0 < param_5)) {
    FUN_1eea_0608();
    thunk_EXT_FUN_0000_0000(0x1eea);
    _DAT_2a22_cca8 = param_3 + *(int *)(param_1 + 4);
    iVar4 = _DAT_2a22_cca8 * 2;
    piVar5 = (int *)((undefined *)&DAT_2a22_c984 + iVar4);
    iVar2 = *(int *)(param_1 + 2);
    for (iVar3 = param_5; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar1 = piVar5;
      piVar5 = piVar5 + 1;
      *piVar1 = param_2 + iVar2;
    }
    piVar5 = (int *)((undefined *)&DAT_2a22_cb14 + iVar4);
    iVar2 = *(int *)(param_1 + 2);
    for (iVar3 = param_5; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar1 = piVar5;
      piVar5 = piVar5 + 1;
      *piVar1 = param_2 + iVar2 + param_4 + -1;
    }
    thunk_EXT_FUN_0000_0000(0x1eea);
    _DAT_2a22_ccaa = _DAT_2a22_cca8 + param_5 + -1;
    thunk_EXT_FUN_0000_0000(0x1eea);
    thunk_EXT_FUN_0000_0000(0x1eea);
  }
  return;
}



/* 1eea:0608 FUN_1eea_0608 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_0608(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  
  if (-1 < _DAT_2a22_cca8) {
    iVar4 = _DAT_2a22_cca8 * 2;
    puVar5 = (undefined2 *)((undefined *)&DAT_2a22_c984 + iVar4);
    iVar2 = (_DAT_2a22_ccaa + 1) - _DAT_2a22_cca8;
    for (iVar3 = iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xffff;
    }
    _DAT_2a22_cca8 = -1;
    puVar5 = (undefined2 *)((undefined *)&DAT_2a22_cb14 + iVar4);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    _DAT_2a22_ccaa = 0;
  }
  return;
}



/* 1eea:063e FUN_1eea_063e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_063e(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_DX;
  uint uVar4;
  int unaff_SI;
  int iVar5;
  int unaff_DI;
  undefined *puVar6;
  int *piVar7;
  
  puVar6 = (undefined *)&DAT_2a22_c984;
  if (unaff_SI != 0) {
    if (unaff_SI != _DAT_2a22_ccb9) {
      return;
    }
    puVar6 = (undefined *)&DAT_2a22_cb14;
  }
  iVar3 = unaff_DI;
  if (unaff_DI < in_DX) {
    iVar3 = in_DX;
    in_DX = unaff_DI;
  }
  if (in_DX < 0) {
    in_DX = 0;
  }
  if (_DAT_2a22_ccbb < iVar3) {
    iVar3 = _DAT_2a22_ccbb;
  }
  iVar5 = unaff_SI + _DAT_2a22_ccac;
  uVar2 = iVar3 + _DAT_2a22_ccae;
  uVar4 = in_DX + _DAT_2a22_ccae;
  if (_DAT_2a22_ccaa < uVar2) {
    _DAT_2a22_ccaa = uVar2;
  }
  if (uVar4 < _DAT_2a22_cca8) {
    _DAT_2a22_cca8 = uVar4;
  }
  piVar7 = (int *)(puVar6 + uVar4 * 2);
  for (iVar3 = (uVar2 - uVar4) + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    piVar1 = piVar7;
    piVar7 = piVar7 + 1;
    *piVar1 = iVar5;
  }
  return;
}



/* 1eea:07b6 FUN_1eea_07b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_07b6(void)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined2 uVar18;
  
  uVar15 = _DAT_2a22_c982;
  uVar14 = _DAT_2a22_c97e;
  uVar2 = uRam00000002;
  uVar18 = _LAB_0000_0000;
  uVar16 = 1;
  _LAB_0000_0000 = 0x963;
  uRam00000002 = 0x1eea;
  uVar7 = _DAT_2a22_c97c;
  DAT_2a22_ccb0 = FUN_1eea_0942();
  uVar17 = FUN_1eea_0942();
  _LAB_0000_0000 = uVar18;
  uVar9 = (uint)((ulong)uVar17 >> 0x10);
  uVar3 = (uint)uVar17;
  uVar8 = uVar7;
  uVar10 = uVar9;
  if ((bool)uVar16) {
    if (DAT_2a22_ccb0 == 0) goto LAB_1eea_07d8;
    LOCK();
    uVar3 = (uint)DAT_2a22_ccb0;
    UNLOCK();
    _DAT_2a22_c97c = uVar14;
    _DAT_2a22_c980 = uVar15;
    uVar8 = uVar14;
    uVar10 = uVar15;
    uVar14 = uVar7;
    uVar15 = uVar9;
    DAT_2a22_ccb0 = (byte)uVar17;
  }
  if ((DAT_2a22_ccb0 & (byte)uVar3) != 0) {
    uRam00000002 = uVar2;
    return;
  }
  _DAT_2a22_ccb1 = uVar14 - uVar8;
  if (SBORROW2(uVar14,uVar8)) {
    _DAT_2a22_ccb1 = (int)(CONCAT12(uVar8 <= uVar14,_DAT_2a22_ccb1) >> 1);
    _DAT_2a22_ccb5 = _DAT_2a22_ccb1 >> 1;
    if (SBORROW2(uVar15,uVar10)) {
      iVar11 = (int)(CONCAT12(uVar10 <= uVar15,uVar15 - uVar10) >> 1);
    }
    else {
      iVar11 = (int)(uVar15 - uVar10) >> 1;
    }
  }
  else {
    iVar11 = uVar15 - uVar10;
    _DAT_2a22_ccb5 = _DAT_2a22_ccb1 >> 1;
    if (SBORROW2(uVar15,uVar10)) {
      iVar11 = (int)(CONCAT12(uVar10 <= uVar15,iVar11) >> 1);
      _DAT_2a22_ccb5 = _DAT_2a22_ccb1 >> 2;
      _DAT_2a22_ccb1 = _DAT_2a22_ccb1 >> 1;
    }
  }
  _DAT_2a22_ccb7 = iVar11 >> 1;
  do {
    uVar9 = uVar10;
    uVar7 = uVar8;
    if ((uVar3 & 9) == 0) {
LAB_1eea_08df:
      uVar5 = _DAT_2a22_ccbb;
      if ((int)uVar15 <= (int)_DAT_2a22_ccbb) {
LAB_1eea_08e7:
        uVar5 = 0;
      }
      lVar1 = (long)(int)(uVar5 - uVar9) * (long)_DAT_2a22_ccb1;
      iVar4 = (int)(lVar1 / (long)iVar11);
      iVar12 = (int)(lVar1 % (long)iVar11);
      bVar13 = (byte)((ulong)lVar1 >> 0x18);
      DAT_2a22_ccb4 = (byte)((uint)iVar11 >> 8);
      if ((char)(bVar13 ^ DAT_2a22_ccb4) < '\0') {
        iVar12 = -iVar12;
        iVar4 = iVar4 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar12 - _DAT_2a22_ccb7) >> 8) ^ bVar13) << 8)) {
        iVar4 = iVar4 + 1;
      }
      uVar6 = iVar4 + uVar7;
      if ((int)uVar6 < 0) {
        uRam00000002 = uVar2;
        _DAT_2a22_ccb3 = iVar11;
        return;
      }
      if ((int)_DAT_2a22_ccb9 < (int)uVar6) {
        uRam00000002 = uVar2;
        _DAT_2a22_ccb3 = iVar11;
        return;
      }
    }
    else {
      uVar6 = 0;
      if (-1 < (int)uVar14) {
        uVar6 = _DAT_2a22_ccb9;
      }
      lVar1 = (long)(int)(uVar6 - uVar7) * (long)iVar11;
      iVar4 = (int)(lVar1 / (long)_DAT_2a22_ccb1);
      iVar12 = (int)(lVar1 % (long)_DAT_2a22_ccb1);
      bVar13 = (byte)((ulong)lVar1 >> 0x18);
      if ((char)(bVar13 ^ DAT_2a22_ccb2) < '\0') {
        iVar12 = -iVar12;
        iVar4 = iVar4 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar12 - _DAT_2a22_ccb5) >> 8) ^ bVar13) << 8)) {
        iVar4 = iVar4 + 1;
      }
      uVar5 = iVar4 + uVar9;
      if ((int)uVar5 < 0) goto LAB_1eea_08e7;
      if ((int)_DAT_2a22_ccbb < (int)uVar5) goto LAB_1eea_08df;
    }
    if (DAT_2a22_ccb0 == 0) break;
    uVar3 = (uint)DAT_2a22_ccb0;
    DAT_2a22_ccb0 = 0;
    uVar8 = uVar14;
    uVar10 = uVar15;
    uVar14 = uVar7;
    uVar15 = uVar9;
    _DAT_2a22_c97c = uVar6;
    _DAT_2a22_c980 = uVar5;
  } while( true );
  _DAT_2a22_c97e = uVar6;
  _DAT_2a22_c982 = uVar5;
  _DAT_2a22_ccb3 = iVar11;
LAB_1eea_07d8:
  uRam00000002 = uVar2;
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 1eea:0942 FUN_1eea_0942 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __cdecl16near FUN_1eea_0942(void)

{
  byte bVar1;
  int in_BX;
  int unaff_BP;
  
  bVar1 = 0xf;
  if (-1 < in_BX) {
    bVar1 = 7;
  }
  if (in_BX <= _DAT_2a22_ccb9) {
    bVar1 = bVar1 & 0xfe;
  }
  if (-1 < unaff_BP) {
    bVar1 = bVar1 & 0xfb;
  }
  if (unaff_BP <= _DAT_2a22_ccbb) {
    bVar1 = bVar1 & 0xfd;
  }
  return bVar1;
}



/* 1eea:0963 FUN_1eea_0963 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_1eea_0963(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint in_DX;
  int in_stack_00000000;
  
  uVar1 = _DAT_2a22_ccb3;
  if (in_stack_00000000 != 0x8f4) {
    uVar1 = _DAT_2a22_ccb1;
  }
  uVar2 = 0x7f00;
  if ((int)(in_DX ^ uVar1) < 0) {
    uVar2 = 0x8100;
  }
  return uVar2;
}



/* 1eea:0990 FUN_1eea_0990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_0990(void)

{
  int *piVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  undefined *puVar17;
  int *piVar18;
  int iVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  
  uVar11 = _DAT_2a22_c982;
  uVar6 = _DAT_2a22_c97e;
  uVar4 = uRam00000002;
  uVar3 = _LAB_0000_0000;
  uVar20 = 1;
  _LAB_0000_0000 = 0xb38;
  uRam00000002 = 0x1eea;
  uVar5 = _DAT_2a22_c97c;
  DAT_2a22_ccbe = FUN_1eea_0942();
  uVar21 = FUN_1eea_0942();
  uVar14 = (uint)((ulong)uVar21 >> 0x10);
  uVar7 = (uint)uVar21;
  uVar10 = uVar5;
  uVar13 = uVar14;
  if ((bool)uVar20) {
    if (DAT_2a22_ccbe == 0) goto LAB_1eea_06a8;
    LOCK();
    uVar7 = (uint)DAT_2a22_ccbe;
    UNLOCK();
    _DAT_2a22_c97c = uVar6;
    _DAT_2a22_c980 = uVar11;
    uVar10 = uVar6;
    uVar13 = uVar11;
    uVar6 = uVar5;
    uVar11 = uVar14;
    DAT_2a22_ccbe = (byte)uVar21;
  }
  if ((DAT_2a22_ccbe & (byte)uVar7) != 0) {
    if (((byte)uVar7 & DAT_2a22_ccbe & 6) != 0) {
      uRam00000002 = uVar4;
      _LAB_0000_0000 = uVar3;
      return;
    }
LAB_1eea_0699:
    uRam00000002 = uVar4;
    _LAB_0000_0000 = uVar3;
    uVar6 = 0;
    if ((-1 < (int)uVar10) && (uVar6 = _DAT_2a22_ccb9, (int)uVar10 <= (int)_DAT_2a22_ccb9)) {
      return;
    }
    puVar17 = (undefined *)&DAT_2a22_c984;
    if (uVar6 != 0) {
      if (uVar6 != _DAT_2a22_ccb9) {
        return;
      }
      puVar17 = (undefined *)&DAT_2a22_cb14;
    }
    uVar5 = uVar11;
    if ((int)uVar11 < (int)uVar13) {
      uVar5 = uVar13;
      uVar13 = uVar11;
    }
    if ((int)uVar13 < 0) {
      uVar13 = 0;
    }
    if ((int)_DAT_2a22_ccbb < (int)uVar5) {
      uVar5 = _DAT_2a22_ccbb;
    }
    iVar8 = uVar6 + _DAT_2a22_ccac;
    uVar5 = uVar5 + _DAT_2a22_ccae;
    uVar13 = uVar13 + _DAT_2a22_ccae;
    if (_DAT_2a22_ccaa < uVar5) {
      _DAT_2a22_ccaa = uVar5;
    }
    if (uVar13 < _DAT_2a22_cca8) {
      _DAT_2a22_cca8 = uVar13;
    }
    piVar18 = (int *)(puVar17 + uVar13 * 2);
    for (iVar15 = (uVar5 - uVar13) + 1; iVar15 != 0; iVar15 = iVar15 + -1) {
      piVar1 = piVar18;
      piVar18 = piVar18 + 1;
      *piVar1 = iVar8;
    }
    return;
  }
  _DAT_2a22_ccbf = uVar6 - uVar10;
  if (SBORROW2(uVar6,uVar10)) {
    _DAT_2a22_ccbf = (int)(CONCAT12(uVar10 <= uVar6,_DAT_2a22_ccbf) >> 1);
    _DAT_2a22_ccc3 = _DAT_2a22_ccbf >> 1;
    if (SBORROW2(uVar11,uVar13)) {
      _DAT_2a22_ccc1 = (int)(CONCAT12(uVar13 <= uVar11,uVar11 - uVar13) >> 1);
    }
    else {
      _DAT_2a22_ccc1 = (int)(uVar11 - uVar13) >> 1;
    }
  }
  else {
    _DAT_2a22_ccc1 = uVar11 - uVar13;
    _DAT_2a22_ccc3 = _DAT_2a22_ccbf >> 1;
    if (SBORROW2(uVar11,uVar13)) {
      _DAT_2a22_ccc1 = (int)(CONCAT12(uVar13 <= uVar11,_DAT_2a22_ccc1) >> 1);
      _DAT_2a22_ccc3 = _DAT_2a22_ccbf >> 2;
      _DAT_2a22_ccbf = _DAT_2a22_ccbf >> 1;
    }
  }
  _DAT_2a22_ccc5 = _DAT_2a22_ccc1 >> 1;
  uVar5 = uVar10;
  uVar14 = uVar13;
  do {
    uVar13 = uVar14;
    uVar12 = uVar5;
    if ((uVar7 & 9) == 0) {
LAB_1eea_0a9d:
      uVar9 = _DAT_2a22_ccbb;
      if ((int)uVar11 <= (int)_DAT_2a22_ccbb) {
LAB_1eea_0aa5:
        uVar9 = 0;
      }
      lVar2 = (long)(int)(uVar9 - uVar13) * (long)_DAT_2a22_ccbf;
      iVar8 = (int)(lVar2 / (long)_DAT_2a22_ccc1);
      iVar15 = (int)(lVar2 % (long)_DAT_2a22_ccc1);
      bVar16 = (byte)((ulong)lVar2 >> 0x18);
      if ((char)(bVar16 ^ DAT_2a22_ccc2) < '\0') {
        iVar15 = -iVar15;
        iVar8 = iVar8 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar15 - _DAT_2a22_ccc5) >> 8) ^ bVar16) << 8)) {
        iVar8 = iVar8 + 1;
      }
      uVar10 = iVar8 + uVar12;
      if (((int)uVar10 < 0) || ((int)_DAT_2a22_ccb9 < (int)uVar10)) goto LAB_1eea_0699;
    }
    else {
      uVar10 = 0;
      if (-1 < (int)uVar6) {
        uVar10 = _DAT_2a22_ccb9;
      }
      lVar2 = (long)(int)(uVar10 - uVar12) * (long)_DAT_2a22_ccc1;
      iVar8 = (int)(lVar2 / (long)_DAT_2a22_ccbf);
      iVar15 = (int)(lVar2 % (long)_DAT_2a22_ccbf);
      bVar16 = (byte)((ulong)lVar2 >> 0x18);
      if ((char)(bVar16 ^ DAT_2a22_ccc0) < '\0') {
        iVar15 = -iVar15;
        iVar8 = iVar8 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar15 - _DAT_2a22_ccc3) >> 8) ^ bVar16) << 8)) {
        iVar8 = iVar8 + 1;
      }
      uVar9 = iVar8 + uVar13;
      if ((int)uVar9 < 0) goto LAB_1eea_0aa5;
      if ((int)_DAT_2a22_ccbb < (int)uVar9) goto LAB_1eea_0a9d;
    }
    FUN_1eea_063e();
    if (DAT_2a22_ccbe == 0) break;
    uVar7 = (uint)DAT_2a22_ccbe;
    DAT_2a22_ccbe = 0;
    uVar5 = uVar6;
    uVar14 = uVar11;
    uVar6 = uVar12;
    uVar11 = uVar13;
    _DAT_2a22_c97c = uVar10;
    _DAT_2a22_c980 = uVar9;
  } while( true );
  _DAT_2a22_c97e = uVar10;
  _DAT_2a22_c982 = uVar9;
LAB_1eea_06a8:
  uVar6 = _DAT_2a22_c97c + _DAT_2a22_ccac;
  _DAT_2a22_c97e = _DAT_2a22_c97e + _DAT_2a22_ccac;
  uVar11 = _DAT_2a22_c980 + _DAT_2a22_ccae;
  _DAT_2a22_c982 = _DAT_2a22_c982 + _DAT_2a22_ccae;
  _DAT_2a22_c97c = uVar6;
  _DAT_2a22_c980 = uVar11;
  if (_DAT_2a22_c97e < uVar6) {
    _DAT_2a22_c97c = _DAT_2a22_c97e;
    _DAT_2a22_c97e = uVar6;
    _DAT_2a22_c980 = _DAT_2a22_c982;
    _DAT_2a22_c982 = uVar11;
  }
  uVar10 = _DAT_2a22_c97e - _DAT_2a22_c97c;
  uVar5 = _DAT_2a22_c982 - _DAT_2a22_c980;
  iVar8 = 2;
  uVar6 = _DAT_2a22_c980;
  uVar11 = _DAT_2a22_c982;
  if ((int)uVar5 < 0) {
    iVar8 = -2;
    uVar5 = -uVar5;
    uVar6 = _DAT_2a22_c982;
    uVar11 = _DAT_2a22_c980;
  }
  if (_DAT_2a22_ccaa < uVar11) {
    _DAT_2a22_ccaa = uVar11;
  }
  if (uVar6 < _DAT_2a22_cca8) {
    _DAT_2a22_cca8 = uVar6;
  }
  _DAT_2a22_cca4 = uVar10;
  _DAT_2a22_cca6 = uVar5;
  if (uVar10 <= uVar5) {
    iVar19 = _DAT_2a22_c980 << 1;
    iVar15 = -(uVar5 + 1 >> 1);
    uVar6 = _DAT_2a22_c97c;
    uVar11 = uVar5;
    _LAB_0000_0000 = uVar3;
    uRam00000002 = uVar4;
    while( true ) {
      if (uVar6 < *(uint *)((undefined *)&DAT_2a22_c984 + iVar19)) {
        *(uint *)((undefined *)&DAT_2a22_c984 + iVar19) = uVar6;
      }
      if (*(uint *)((undefined *)&DAT_2a22_cb14 + iVar19) < uVar6) {
        *(uint *)((undefined *)&DAT_2a22_cb14 + iVar19) = uVar6;
      }
      uVar11 = uVar11 - 1;
      if ((int)uVar11 < 0) break;
      iVar19 = iVar19 + iVar8;
      iVar15 = iVar15 + uVar10;
      if (-1 < iVar15) {
        iVar15 = iVar15 - uVar5;
        uVar6 = uVar6 + 1;
      }
    }
    return;
  }
  iVar19 = _DAT_2a22_c980 << 1;
  iVar15 = -(uVar10 + 1 >> 1);
  uVar6 = _DAT_2a22_c97c;
  uVar11 = uVar10;
  _LAB_0000_0000 = uVar3;
  uRam00000002 = uVar4;
  do {
    if (uVar6 < *(uint *)((undefined *)&DAT_2a22_c984 + iVar19)) {
      *(uint *)((undefined *)&DAT_2a22_c984 + iVar19) = uVar6;
    }
    while( true ) {
      uVar11 = uVar11 - 1;
      if ((int)uVar11 < 0) {
        if (*(uint *)((undefined *)&DAT_2a22_cb14 + iVar19) < uVar6) {
          *(uint *)((undefined *)&DAT_2a22_cb14 + iVar19) = uVar6;
        }
        return;
      }
      iVar15 = iVar15 + uVar5;
      if (-1 < iVar15) break;
      uVar6 = uVar6 + 1;
    }
    if (*(uint *)((undefined *)&DAT_2a22_cb14 + iVar19) < uVar6) {
      *(uint *)((undefined *)&DAT_2a22_cb14 + iVar19) = uVar6;
    }
    uVar6 = uVar6 + 1;
    iVar15 = iVar15 - uVar10;
    iVar19 = iVar19 + iVar8;
  } while( true );
}



/* 1eea:0b38 FUN_1eea_0b38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_1eea_0b38(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint in_DX;
  int in_stack_00000000;
  
  uVar1 = _DAT_2a22_ccc1;
  if (in_stack_00000000 != 0xab2) {
    uVar1 = _DAT_2a22_ccbf;
  }
  uVar2 = 0x7f00;
  if ((int)(in_DX ^ uVar1) < 0) {
    uVar2 = 0x8100;
  }
  return uVar2;
}



/* 1eea:0b5a FUN_1eea_0b5a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1eea_0b5a(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  _DAT_2a22_ccb9 = *(undefined2 *)(param_1 + 6);
  _DAT_2a22_ccbb = *(undefined2 *)(param_1 + 8);
  thunk_EXT_FUN_0000_0000(0x1eea);
  _DAT_2a22_c97c = param_2;
  _DAT_2a22_c980 = param_3;
  _DAT_2a22_c97e = param_4;
  _DAT_2a22_c982 = param_5;
  thunk_EXT_FUN_0000_0000(0x1eea);
  FUN_1eea_07b6();
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 1eea:0b9f FUN_1eea_0b9f */

void __cdecl16far FUN_1eea_0b9f(int param_1,int param_2,int param_3)

{
  if ((((-1 < param_2) && (param_2 <= *(int *)(param_1 + 6))) && (-1 < param_3)) &&
     (param_3 <= *(int *)(param_1 + 8))) {
    thunk_EXT_FUN_0000_0000(0x1eea);
    thunk_EXT_FUN_0000_0000(0x1eea);
    thunk_EXT_FUN_0000_0000(0x1eea);
    thunk_EXT_FUN_0000_0000(0x1eea);
  }
  return;
}



/* 1eea:0bde FUN_1eea_0bde */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_0bde(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  thunk_EXT_FUN_0000_0000(0x1eea);
  thunk_EXT_FUN_0000_0000(0x1eea);
  _DAT_2a22_ccac = *(undefined2 *)(param_1 + 2);
  _DAT_2a22_ccae = *(undefined2 *)(param_1 + 4);
  _DAT_2a22_ccb9 = *(undefined2 *)(param_1 + 6);
  _DAT_2a22_ccbb = *(undefined2 *)(param_1 + 8);
  FUN_1eea_0608();
  param_2 = param_2 + -1;
  uVar1 = param_3[1];
  _DAT_2a22_c97c = *param_3;
  _DAT_2a22_c980 = uVar1;
  uVar4 = *param_3;
  do {
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    _DAT_2a22_c97e = uVar2;
    _DAT_2a22_c982 = uVar3;
    FUN_1eea_0990();
    _DAT_2a22_c97e = uVar4;
    param_2 = param_2 + -1;
    _DAT_2a22_c97c = uVar2;
    _DAT_2a22_c980 = uVar3;
    uVar4 = _DAT_2a22_c97e;
    param_3 = param_3 + 2;
  } while (param_2 != 0);
  _DAT_2a22_c982 = uVar1;
  FUN_1eea_0990();
  thunk_EXT_FUN_0000_0000(0x1eea);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 1eea:0c62 FUN_1eea_0c62 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_0c62(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint in_CX;
  undefined2 extraout_DX;
  undefined2 uVar5;
  undefined2 extraout_DX_00;
  undefined2 in_BX;
  uint *puVar6;
  uint *puVar7;
  
  thunk_EXT_FUN_0000_0000(0x1eea,0);
  uVar5 = extraout_DX;
  while( true ) {
    if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
      (*_DAT_3000_c6e7)(0x1eea,uVar5,in_CX,in_BX);
    }
    puVar1 = _DAT_3000_ca2b;
    _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
    uVar2 = *puVar1;
    if ((char)uVar2 == 'X') break;
    puVar6 = (uint *)&DAT_3000_aee7;
    if (uVar2 == 0x304d) {
      if (param_1 == (uint *)0x0) {
        puVar6 = (uint *)&DAT_3000_aee9;
      }
      else if (param_1 != (uint *)&DAT_2a22_4451) {
        puVar6 = param_1;
      }
    }
    *puVar6 = uVar2;
    puVar7 = puVar6;
    if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
      (*_DAT_3000_c6e7)(0x1eea,uVar5,in_CX);
    }
    puVar1 = _DAT_3000_ca2b;
    _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
    in_CX = *puVar1;
    puVar4 = puVar6 + 2;
    puVar6[1] = in_CX;
    for (in_CX = in_CX >> 1; in_CX != 0; in_CX = in_CX - 1) {
      if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
        (*_DAT_3000_c6e7)(0x1eea);
      }
      puVar1 = _DAT_3000_ca2b;
      _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
      puVar3 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar3 = *puVar1;
    }
    if (puVar7 == (uint *)&DAT_3000_aee7) {
      thunk_EXT_FUN_0000_0000(0x1eea,(undefined *)&DAT_3000_aee7);
      uVar5 = extraout_DX_00;
    }
  }
  DAT_2a22_dca3 = (byte)(uVar2 >> 8) & 1;
  if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
    (*_DAT_3000_c6e7)(0x1eea,uVar5,in_CX,in_BX);
  }
  puVar1 = _DAT_3000_ca2b;
  _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
  _DAT_2a22_dc92 = *puVar1;
  if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
    (*_DAT_3000_c6e7)(0x1eea,uVar5,in_CX,in_BX);
  }
  puVar1 = _DAT_3000_ca2b;
  _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
  _DAT_2a22_dc8e = *puVar1;
  if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
    (*_DAT_3000_c6e7)(0x1eea,uVar5,in_CX,in_BX);
  }
  puVar1 = _DAT_3000_ca2b;
  _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
  _DAT_2a22_dc90 = *puVar1;
  FUN_1eea_0dfb();
  return;
}



/* 1eea:0d7a FUN_1eea_0d7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_0d7a(void)

{
  undefined2 *puVar1;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  
  if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
    (*_DAT_3000_c6e7)(0x1eea);
  }
  puVar1 = _DAT_3000_ca2b;
  _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
  DAT_2a22_dca3 = (byte)*puVar1 & 1;
  if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
    (*_DAT_3000_c6e7)(0x1eea,in_DX,in_CX,in_BX);
  }
  puVar1 = _DAT_3000_ca2b;
  _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
  _DAT_2a22_dc92 = *puVar1;
  FUN_1eea_0dfb();
  return;
}



/* 1eea:0dc2 FUN_1eea_0dc2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_0dc2(void)

{
  undefined2 uVar1;
  
  uVar1 = _DAT_3000_ca2b;
  FUN_1eea_0e7a();
  _DAT_3000_ca2b = uVar1;
  return;
}



/* 1eea:0ddc FUN_1eea_0ddc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_0ddc(void)

{
  undefined2 uVar1;
  
  uVar1 = _DAT_3000_ca2b;
  FUN_1eea_0e7a();
  _DAT_3000_ca2b = uVar1;
  return;
}



/* 1eea:0dfb FUN_1eea_0dfb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_0dfb(void)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_2a22_dc8e == 0 && _DAT_2a22_dc90 == 0) {
    return;
  }
  DAT_2a22_dc98 = 0;
  DAT_2a22_dc99 = 0;
  _DAT_2a22_dc94 = 0x9a57;
  if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
    (*_DAT_3000_c6e7)(0x1eea);
  }
  puVar1 = _DAT_3000_ca2b;
  _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
  _DAT_2a22_dca0 = *puVar1;
  if (0xb < (byte)_DAT_2a22_dca0) {
    _DAT_2a22_dca0 = CONCAT11((char)((uint)_DAT_2a22_dca0 >> 8),0xb);
  }
  DAT_2a22_dc9b = (undefined1)_DAT_2a22_dca0;
  DAT_2a22_dca2 = 8;
  DAT_2a22_dc9a = 9;
  _DAT_2a22_dc9c = 0x1ff;
  _DAT_2a22_dc9e = 0x100;
  iVar4 = 0;
  iVar3 = 0x800;
  do {
    *(undefined2 *)((undefined *)&DAT_3000_aee7 + iVar4) = 0xffff;
    iVar4 = iVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  cVar2 = '\0';
  iVar4 = 0;
  iVar3 = 0x100;
  do {
    ((undefined *)&DAT_3000_aee9)[iVar4] = cVar2;
    cVar2 = cVar2 + '\x01';
    iVar4 = iVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



/* 1eea:0e44 FUN_1eea_0e44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_0e44(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  DAT_2a22_dc9a = 9;
  _DAT_2a22_dc9c = 0x1ff;
  _DAT_2a22_dc9e = 0x100;
  iVar3 = 0;
  iVar2 = 0x800;
  do {
    *(undefined2 *)((undefined *)&DAT_3000_aee7 + iVar3) = 0xffff;
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cVar1 = '\0';
  iVar3 = 0;
  iVar2 = 0x100;
  do {
    ((undefined *)&DAT_3000_aee9)[iVar3] = cVar1;
    cVar1 = cVar1 + '\x01';
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* 1eea:0e7a FUN_1eea_0e7a */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_0e7a(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint in_CX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar4;
  undefined2 *puVar6;
  undefined1 *puVar5;
  undefined2 *puVar7;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  if (DAT_2a22_dca3 != '\0') {
    in_CX = in_CX + 1 >> 1;
  }
  LOCK();
  UNLOCK();
  uVar4 = _DAT_2a22_dc9e;
  puVar5 = _DAT_2a22_dc94;
  _DAT_2a22_dc94 = (undefined1 *)register0x00000010;
  _DAT_2a22_dc96 = in_CX;
LAB_1eea_0e90:
  do {
    if (DAT_2a22_dc98 == '\0') {
      puVar6 = (undefined2 *)(puVar5 + -2);
      puVar5 = puVar5 + -2;
      *puVar6 = 0xfd3a;
      cVar2 = FUN_1eea_0eec();
      if (cVar2 == -0x70) {
        puVar7 = (undefined2 *)(puVar5 + -2);
        puVar5 = puVar5 + -2;
        *puVar7 = 0xfd47;
        cVar2 = FUN_1eea_0eec();
        uVar4 = extraout_DX_00;
        if (cVar2 != '\0') {
          DAT_2a22_dc98 = cVar2 + -1;
          goto LAB_1eea_0eb8;
        }
        DAT_2a22_dc99 = -0x70;
      }
      else {
        uVar4 = extraout_DX;
        DAT_2a22_dc99 = cVar2;
      }
    }
    else {
LAB_1eea_0eb8:
      DAT_2a22_dc98 = DAT_2a22_dc98 + -1;
    }
    if (DAT_2a22_dca3 != '\0') {
      uVar3 = CONCAT11(DAT_2a22_dc99,DAT_2a22_dc99) & 0xff0f;
      pcVar1 = unaff_DI;
      unaff_DI = unaff_DI + 2;
      *(uint *)pcVar1 = CONCAT11((byte)(uVar3 >> 0xc),(char)uVar3);
      _DAT_2a22_dc96 = _DAT_2a22_dc96 - 1;
      if (_DAT_2a22_dc96 == 0) {
        _DAT_2a22_dc96 = 0;
        goto LAB_1eea_0ee3;
      }
      goto LAB_1eea_0e90;
    }
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar1 = DAT_2a22_dc99;
    _DAT_2a22_dc96 = _DAT_2a22_dc96 - 1;
    if (_DAT_2a22_dc96 == 0) {
LAB_1eea_0ee3:
      _DAT_2a22_dc9e = uVar4;
      LOCK();
      _DAT_2a22_dc94 = puVar5;
      UNLOCK();
      return;
    }
  } while( true );
}



/* 1eea:0eec FUN_1eea_0eec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1eea_0eec(void)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint in_DX;
  uint uVar5;
  uint *unaff_SI;
  undefined1 uStack0000;
  
  if (&uStack0000 == (undefined1 *)0x9a55) {
    uVar5 = _DAT_2a22_dca0 >> (0x10 - DAT_2a22_dca2 & 0x1f);
    for (bVar3 = DAT_2a22_dca2; (char)bVar3 < DAT_2a22_dc9a; bVar3 = bVar3 + 0x10) {
      if (_DAT_2a22_8c7a <= unaff_SI) {
        (*_DAT_3000_c6e7)(0x1eea);
        unaff_SI = _DAT_3000_ca2b;
      }
      puVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      _DAT_2a22_dca0 = *puVar1;
      uVar5 = uVar5 | _DAT_2a22_dca0 << (bVar3 & 0x1f);
    }
    DAT_2a22_dca2 = bVar3 - DAT_2a22_dc9a;
    uVar5 = uVar5 & _DAT_2a22_dc9c;
    uVar4 = uVar5;
    if ((int)in_DX <= (int)uVar5) {
      uVar5 = _DAT_2a22_dca4;
      uVar4 = in_DX;
    }
    do {
      iVar2 = uVar5 * 3;
      uVar5 = *(uint *)((undefined *)&DAT_3000_aee7 + iVar2);
    } while (uVar5 != 0xffff);
    DAT_2a22_dca6 = ((undefined *)&DAT_3000_aee9)[iVar2];
    ((undefined *)&DAT_3000_aee9)[in_DX * 3] = DAT_2a22_dca6;
    *(uint *)((undefined *)&DAT_3000_aee7 + in_DX * 3) = _DAT_2a22_dca4;
    if ((int)_DAT_2a22_dc9c < (int)(in_DX + 1)) {
      DAT_2a22_dc9a = DAT_2a22_dc9a + '\x01';
      _DAT_2a22_dc9c = _DAT_2a22_dc9c << 1 | 1;
    }
    if (DAT_2a22_dc9b < DAT_2a22_dc9a) {
      FUN_1eea_0e44();
    }
    _DAT_2a22_dca4 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001fd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_uStack0000)();
  return;
}



/* 1eea:0fa0 FUN_1eea_0fa0 */

void FUN_1eea_0fa0(undefined2 param_1)

{
  undefined2 in_stack_00000000;
  
  DAT_1eea_0f9e = param_1;
  DAT_1eea_0f9c = in_stack_00000000;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4();
}



/* 1eea:0faf FUN_1eea_0faf */

void FUN_1eea_0faf(void)

{
  FUN_1eea_0feb();
                    /* WARNING: Could not recover jumptable at 0x0001fe59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)DAT_1eea_0f9c)();
  return;
}



/* 1eea:0fbe FUN_1eea_0fbe */

void FUN_1eea_0fbe(undefined2 param_1)

{
  undefined2 in_stack_00000000;
  
  DAT_1eea_0f9e = param_1;
  DAT_1eea_0f9c = in_stack_00000000;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4();
}



/* 1eea:0fcd FUN_1eea_0fcd */

void FUN_1eea_0fcd(void)

{
  byte *in_stack_00000000;
  
  FUN_1eea_0feb();
  *in_stack_00000000 = *in_stack_00000000 ^ 1;
  FUN_1eea_0feb();
  *in_stack_00000000 = *in_stack_00000000 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x0001fe86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)DAT_1eea_0f9c)();
  return;
}



/* 1eea:0feb FUN_1eea_0feb */

void __cdecl16near FUN_1eea_0feb(void)

{
  int iVar1;
  int *in_AX;
  uint uVar2;
  undefined2 in_DX;
  uint uVar3;
  uint *unaff_BP;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  iVar4 = (*unaff_BP & 1) * 2;
  iVar1 = in_AX[2];
  if (-1 < iVar1 + -1) {
    uVar5 = in_AX[1] + unaff_BP[2];
    if (uVar5 < *(uint *)((undefined *)&DAT_2a22_ccc8 + iVar4)) {
      *(uint *)((undefined *)&DAT_2a22_ccc8 + iVar4) = uVar5;
    }
    uVar2 = (in_AX[3] + uVar5) - 1;
    if (*(uint *)((undefined *)&DAT_2a22_cccc + iVar4) < uVar2) {
      *(uint *)((undefined *)&DAT_2a22_cccc + iVar4) = uVar2;
    }
    iVar4 = *(int *)((undefined *)&DAT_2a22_ccd0 + iVar4);
    puVar6 = (uint *)(uVar5 * 2 + iVar4);
    uVar5 = *in_AX + unaff_BP[1];
    uVar3 = iVar1 + -1 + uVar5;
    do {
      if (uVar5 < *puVar6) {
        *puVar6 = uVar5;
      }
      if (puVar6[200] < uVar3) {
        puVar6[200] = uVar3;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 <= (uint *)(uVar2 * 2 + iVar4));
  }
  return;
}



/* 1eea:1052 FUN_1eea_1052 */

void __cdecl16far FUN_1eea_1052(undefined2 param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  iVar5 = (param_2 & 1) * 2;
  thunk_EXT_FUN_0000_0000(0x1eea);
  iVar2 = *(int *)((undefined *)&DAT_2a22_ccc8 + iVar5);
  if (-1 < iVar2) {
    puVar6 = (undefined2 *)(iVar2 * 2 + *(int *)((undefined *)&DAT_2a22_ccd0 + iVar5));
    iVar3 = (*(int *)((undefined *)&DAT_2a22_cccc + iVar5) + 1) - iVar2;
    for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = 0xffff;
    }
    *(undefined2 *)((undefined *)&DAT_2a22_ccc8 + iVar5) = 0xffff;
    puVar6 = (undefined2 *)(iVar2 * 2 + *(int *)((undefined *)&DAT_2a22_ccd4 + iVar5));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = 0;
    }
    *(undefined2 *)((undefined *)&DAT_2a22_cccc + iVar5) = 0;
  }
  return;
}



/* 1eea:10b1 FUN_1eea_10b1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_10b1(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  
  if (-1 < _DAT_2a22_ccc8) {
    iVar4 = _DAT_2a22_ccc8 * 2;
    puVar5 = (undefined2 *)(iVar4 + _DAT_2a22_ccd0);
    iVar2 = (_DAT_2a22_cccc + 1) - _DAT_2a22_ccc8;
    for (iVar3 = iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xffff;
    }
    _DAT_2a22_ccc8 = -1;
    puVar5 = (undefined2 *)(iVar4 + _DAT_2a22_ccd4);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    _DAT_2a22_cccc = 0;
  }
  if (-1 < _DAT_2a22_ccca) {
    iVar4 = _DAT_2a22_ccca * 2;
    puVar5 = (undefined2 *)(iVar4 + _DAT_2a22_ccd2);
    iVar2 = (_DAT_2a22_ccce + 1) - _DAT_2a22_ccca;
    for (iVar3 = iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xffff;
    }
    _DAT_2a22_ccca = -1;
    puVar5 = (undefined2 *)(iVar4 + _DAT_2a22_ccd6);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    _DAT_2a22_ccce = 0;
  }
  return;
}



/* 1eea:111a FUN_1eea_111a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_111a(void)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 extraout_DX;
  undefined2 in_BX;
  
  uVar2 = 0;
  if (iRam000000cc != 0 || iRam000000ce != 0) {
    pcVar1 = (code *)swi(0x33);
    iVar3 = (*pcVar1)();
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar4 = 0x1f;
      pcVar1 = (code *)swi(0x33);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x33);
      (*pcVar1)();
      DAT_2a22_d326 = (byte)(uVar4 >> 8);
      _DAT_2a22_d318 = uVar4 >> (DAT_2a22_d326 & 0x1f);
      uVar2 = 0xff;
      _DAT_2a22_d31a = extraout_DX;
      _DAT_2a22_d31c = in_BX;
    }
  }
  DAT_2a22_d327 = uVar2;
  return;
}



/* 1eea:1163 FUN_1eea_1163 */

void __cdecl16far FUN_1eea_1163(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = DAT_2a22_d327;
  LOCK();
  DAT_2a22_d327 = 0;
  UNLOCK();
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(0x33);
    (*pcVar1)();
  }
  return;
}



/* 1eea:1173 FUN_1eea_1173 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_1173(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  _DAT_2a22_d322 = param_1;
  _DAT_2a22_d324 = param_2;
  _DAT_2a22_d320 = param_3;
  return;
}



/* 1eea:118a FUN_1eea_118a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_118a(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  
  _DAT_2a22_d318 = param_1;
  _DAT_2a22_d31a = param_2;
  if (DAT_2a22_d327 != '\0') {
    pcVar1 = (code *)swi(0x33);
    (*pcVar1)();
  }
  return;
}



/* 1eea:11b0 FUN_1eea_11b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1eea_11b0(void)

{
  undefined2 uVar1;
  
  uVar1 = _DAT_2a22_d31e;
  LOCK();
  _DAT_2a22_d31e = 0;
  UNLOCK();
  return uVar1;
}



/* 1eea:11b7 FUN_1eea_11b7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_11b7(void)

{
  if ((_DAT_2a22_d320 != 0) && (DAT_2a22_c855 == '\0')) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_d318 - _DAT_2a22_d322,_DAT_2a22_d31a - _DAT_2a22_d324,
                        _DAT_2a22_d320);
  }
  return;
}



/* 1eea:11e7 FUN_1eea_11e7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_11e7(void)

{
  if ((_DAT_2a22_d320 != 0) && (DAT_2a22_c855 != '\0')) {
    DAT_2a22_c855 = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea);
  }
  return;
}



/* 1eea:1216 FUN_1eea_1216 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl16far FUN_1eea_1216(uint param_1,undefined2 param_2,uint param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (code *)swi(0x33);
  uVar2 = (*pcVar1)();
  _DAT_2a22_d32c = (int)uVar2;
  _DAT_2a22_d32e = param_2;
  _DAT_2a22_d332 = (int)((ulong)uVar2 >> 0x10);
  _DAT_2a22_d330 = param_3;
  if (param_1 < 7) {
    _DAT_2a22_d330 = param_3 >> (DAT_2a22_d326 & 0x1f);
  }
  return (undefined *)&DAT_2a22_d32c;
}



/* 1eea:127c FUN_1eea_127c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1eea_127c(undefined4 param_1)

{
  _DAT_2a22_d328 = (int)param_1;
  _DAT_2a22_d32a = (int)((ulong)param_1 >> 0x10);
  return;
}



/* 1eea:12da FUN_1eea_12da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1eea_12da(void)

{
  if (_DAT_2a22_d31c == 1) {
    return 1;
  }
  return 0;
}



/* 1eea:12e8 FUN_1eea_12e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1eea_12e8(void)

{
  if (_DAT_2a22_d31c == 2) {
    return 1;
  }
  return 0;
}



/* 201d:0008 FUN_201d_0008 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_201d_0008(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar2 = FUN_2035_00c6(param_1,param_2,param_3,0x2e67);
  bVar8 = false;
  if (iVar2 == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar8) {
      uVar3 = thunk_EXT_FUN_0000_0000(0x2035);
      uVar7 = _DAT_2a22_8bae + _DAT_2a22_8bb0 + 0xfU >> 4;
      bVar8 = uVar7 < uVar3;
      if (uVar7 <= uVar3) {
        pcVar1 = (code *)swi(0x21);
        uVar4 = (*pcVar1)();
        iVar2 = _DAT_2a22_8bb0;
        if (!bVar8) {
          _DAT_2a22_8bb2 = 0;
          pcVar1 = (code *)swi(0x21);
          iVar6 = _DAT_2a22_8bae;
          _DAT_2a22_8bb4 = uVar4;
          iVar5 = (*pcVar1)();
          if ((bVar8) || (iVar5 != iVar6)) {
            pcVar1 = (code *)swi(0x21);
            uVar4 = (*pcVar1)();
            FUN_201d_00a5(uVar4);
          }
          else {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            if (iVar2 != 0) {
              FUN_201d_00e9();
            }
          }
        }
      }
    }
  }
  FUN_1951_02ac();
  return;
}



/* 201d:00a5 FUN_201d_00a5 */

void __cdecl16far FUN_201d_00a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



/* 201d:00b2 FUN_201d_00b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_201d_00b2(void)

{
  return _DAT_2a22_8bb2;
}



/* 201d:00ba FUN_201d_00ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_201d_00ba(undefined2 param_1,undefined1 *param_2,uint param_3,uint *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if ((uint)(_DAT_2a22_8bac - (int)_DAT_2a22_8bb2) < param_3) {
    param_3 = _DAT_2a22_8bac - (int)_DAT_2a22_8bb2;
  }
  *param_4 = param_3;
  puVar5 = (undefined1 *)param_2;
  uVar3 = (ulong)_DAT_2a22_8bb2 >> 0x10;
  puVar4 = (undefined1 *)_DAT_2a22_8bb2;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  _DAT_2a22_8bb2 = (undefined1 *)CONCAT22(_DAT_2a22_8bb4,puVar4);
  return 0;
}



/* 201d:00e9 FUN_201d_00e9 */

undefined2 __cdecl16near FUN_201d_00e9(void)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint *unaff_SI;
  uint *puVar12;
  byte *unaff_DI;
  int unaff_ES;
  
  iVar5 = 0x2e67;
  puVar12 = unaff_SI + 1;
  uVar10 = *unaff_SI;
  iVar7 = 0x10;
  do {
    while( true ) {
      while( true ) {
        uVar11 = uVar10 & 1;
        uVar10 = uVar10 >> 1;
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
          puVar3 = puVar12;
          puVar12 = puVar12 + 1;
          uVar10 = *puVar3;
          iVar7 = 0x10;
        }
        if (uVar11 == 0) break;
        puVar3 = puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
        *unaff_DI = (byte)*puVar3;
        unaff_DI = unaff_DI + 1;
      }
      uVar11 = uVar10 & 1;
      uVar10 = uVar10 >> 1;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        uVar10 = *puVar3;
        iVar7 = 0x10;
      }
      if (uVar11 != 0) break;
      uVar8 = uVar10 & 1;
      uVar11 = uVar10 >> 1;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        uVar11 = *puVar3;
        iVar7 = 0x10;
      }
      uVar10 = uVar11 >> 1;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        uVar10 = *puVar3;
        iVar7 = 0x10;
      }
      iVar6 = ((uint)(uVar8 != 0) << 1 | (uint)((uVar11 & 1) != 0)) + 2;
      uVar8 = CONCAT11(0xff,(byte)*puVar12);
      puVar12 = (uint *)((int)puVar12 + 1);
LAB_201d_0141:
      do {
        pbVar1 = unaff_DI + uVar8;
        pbVar4 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        *pbVar4 = *pbVar1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar11 = *puVar12;
    bVar9 = (byte)(uVar11 >> 8);
    uVar8 = CONCAT11(bVar9 >> 3,(char)uVar11) | 0xe000;
    if ((uVar11 & 0x700) != 0) {
      iVar6 = (bVar9 & 7) + 2;
      puVar12 = puVar12 + 1;
      goto LAB_201d_0141;
    }
    puVar2 = (uint *)((int)puVar12 + 3);
    bVar9 = (byte)puVar12[1];
    if (bVar9 == 0) {
      return 0;
    }
    if (bVar9 != 1) {
      iVar6 = bVar9 + 1;
      puVar12 = puVar2;
      goto LAB_201d_0141;
    }
    unaff_ES = unaff_ES + ((uint)unaff_DI >> 4) + -0x200;
    puVar12 = (uint *)((uint)puVar2 & 0xf);
    iVar5 = iVar5 + ((uint)puVar2 >> 4);
    unaff_DI = (byte *)(((uint)unaff_DI & 0xf) + 0x2000);
  } while( true );
}



/* 2035:0000 FUN_2035_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2035_0000(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_44;
  undefined1 local_42 [32];
  undefined1 local_22 [32];
  
  uVar2 = 0x2035;
  iVar1 = FUN_2035_00c6(param_1,0,&local_44);
  if (iVar1 == 0) {
    uVar2 = 0x19c7;
    FUN_19c7_4ec2(0x2035,local_44);
  }
  if (_DAT_2a22_8bc4 != 0) {
    FUN_19c7_480c(local_22,0x4766);
    uVar2 = 0x19c7;
    FUN_19c7_47cc(local_22,param_1);
    param_1 = local_22;
    local_22[0] = DAT_2a22_8bc4;
  }
  if (param_2 != (undefined1 *)0x0) {
    iVar1 = FUN_2035_00c6(param_2,0,&local_44);
    if (iVar1 == 0) {
      FUN_19c7_4ec2(uVar2,local_44);
    }
  }
  if ((param_2 != (undefined1 *)0x0) && (_DAT_2a22_8bc4 != 0)) {
    FUN_19c7_480c(local_42,0x476a);
    FUN_19c7_47cc(local_42,param_2);
    param_2 = local_42;
    local_42[0] = DAT_2a22_8bc4;
  }
  FUN_1eea_03ec(param_1,param_2);
  return;
}



/* 2035:00c6 FUN_2035_00c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_2035_00c6(undefined1 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined1 local_26 [32];
  int local_6;
  int local_4;
  
  uVar1 = 0x2035;
  if (_DAT_2a22_8bbe == 0) {
    FUN_2035_015e(param_1);
  }
  _DAT_2a22_8bc4 = 0;
  local_4 = 0;
  while( true ) {
    if (2 < local_4) {
      return local_6;
    }
    local_6 = FUN_19c7_4f18(uVar1,param_1,param_2,param_3);
    if (_DAT_2a22_8bc2 != 0) break;
    if (local_6 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      FUN_19c7_480c(local_26,0x4780);
      FUN_19c7_47cc(local_26,param_1);
      param_1 = local_26;
      _DAT_2a22_8bc4 = _DAT_2a22_8bc6;
      local_26[0] = (undefined1)_DAT_2a22_8bc6;
    }
    else {
      FUN_2035_01f4(param_1 + 3);
    }
    uVar1 = 0x19c7;
    local_4 = local_4 + 1;
  }
  return local_6;
}



/* 2035:015e FUN_2035_015e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2035_015e(undefined2 param_1)

{
  int iVar1;
  undefined2 local_4;
  
  _DAT_2a22_8bbe = FUN_209f_0006(0);
  _DAT_2a22_8bc2 = (uint)(_DAT_2a22_8bbe == 0xf8);
  if (_DAT_2a22_8bc2 == 0) {
    iVar1 = FUN_19c7_4e68(0x209f,0x280,0x477e);
    if (iVar1 != 0) {
      FUN_1951_00b2(0x4784);
    }
    _DAT_2a22_8bc6 = FUN_209f_002a();
    iVar1 = FUN_19c7_4f18(0x209f,param_1,0,&local_4);
    if (iVar1 == 0) {
      FUN_19c7_4ec2(0x19c7,local_4);
      return;
    }
    FUN_2035_03f2(_DAT_2a22_8bc6);
    if (_DAT_2a22_8bc6 == 0x41) {
      _DAT_2a22_8bc6 = 0x42;
    }
    else {
      _DAT_2a22_8bc6 = 0x41;
    }
  }
  return;
}



/* 2035:01f4 FUN_2035_01f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2035_01f4(undefined2 param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_2035_046a(param_1);
    if (iVar1 != 0) {
      FUN_2035_0236(iVar1,iVar1);
      return;
    }
    if (_DAT_2a22_8bca == 0) break;
    FUN_2035_0236(_DAT_2a22_8bc8,0);
    FUN_2035_03f2(_DAT_2a22_8bc8);
  }
  return;
}



/* 2035:0236 FUN_2035_0236 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2035_0236(undefined1 param_1)

{
  int iVar1;
  undefined2 local_4;
  
  DAT_2a22_8bf6 = DAT_2a22_8bc6;
  DAT_2a22_8bfe = param_1;
  do {
    do {
      iVar1 = FUN_209f_0054(_DAT_2a22_8bc6);
    } while (iVar1 == 6);
    iVar1 = FUN_209f_0054(_DAT_2a22_8bc6);
    if (iVar1 == 0) {
      iVar1 = FUN_19c7_4f18(0x209f,(undefined *)&DAT_2a22_8bf6,0,&local_4);
      if (iVar1 == 0) {
        FUN_19c7_4ec2(0x19c7,local_4);
        return;
      }
    }
    FUN_2035_054c(0x47a9);
  } while( true );
}



/* 2035:029a FUN_2035_029a */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 __cdecl16far FUN_2035_029a(char *param_1)

{
  undefined2 *puVar1;
  
  FUN_19c7_4cbe(param_1);
  puVar1 = (undefined2 *)param_1;
  for (param_1 = (char *)((int)param_1 + 4); *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  return *puVar1;
}



/* 2035:02e6 FUN_2035_02e6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_2035_02e6(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 in_DX;
  undefined2 local_20;
  undefined1 local_1e [20];
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  local_a = FUN_2035_029a(param_1);
  local_8 = in_DX;
  iVar1 = FUN_2035_04fe(local_a,in_DX);
  if (iVar1 != 0) {
    _DAT_2a22_8bc8 = FUN_2035_04fe(local_a,local_8);
    _DAT_2a22_8bc8 = _DAT_2a22_8bc8 + 1;
    _DAT_2a22_daac = 0;
    FUN_19c7_480c(local_1e,0x47b0);
    FUN_19c7_47cc(local_1e,param_1);
    local_1e[0] = DAT_2a22_8bc6;
    iVar1 = FUN_19c7_4f18(0x19c7,local_1e,0,&local_20);
    if (iVar1 == 0) {
      iVar1 = FUN_19c7_4f30(0x19c7,local_20,local_1e,0x2e67,0x14,&local_6);
      if (iVar1 == 0) {
        local_1e[local_6] = 0;
        local_4 = FUN_19c7_4c1a(local_1e,0x2d);
        if (local_4 != 0) {
          _DAT_2a22_daac = (int)*(char *)(local_4 + 1);
          uVar2 = 1 << (*(char *)(local_4 + 1) - 0x31U & 0x1f);
          if ((uVar2 & _DAT_2a22_8bca) == 0) {
            _DAT_2a22_daac = 0;
          }
          else {
            _DAT_2a22_8bca = _DAT_2a22_8bca & ~uVar2;
          }
        }
      }
      FUN_19c7_4ec2(0x19c7,local_20);
    }
  }
  if (_DAT_2a22_daac < 0x32) {
    return 0;
  }
  return local_a;
}



/* 2035:03f2 FUN_2035_03f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2035_03f2(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 local_2e [30];
  undefined1 local_10 [14];
  
  _DAT_2a22_daac = 0;
  DAT_2a22_8c04 = DAT_2a22_8bc6;
  uVar6 = FUN_19c7_4efa(0x2035,(undefined *)&DAT_2a22_8c04,0,local_2e);
  while (iVar2 = (int)((ulong)uVar6 >> 0x10), (int)uVar6 == 0) {
    iVar1 = FUN_2035_02e6(local_10);
    if (iVar1 != 0 || iVar2 != 0) {
      iVar3 = _DAT_2a22_8bc0 * 4;
      uVar5 = (undefined2)((ulong)_DAT_2a22_8bcc >> 0x10);
      iVar4 = (int)_DAT_2a22_8bcc;
      *(int *)(iVar3 + iVar4) = iVar1;
      *(int *)(iVar3 + iVar4 + 2) = iVar2;
      if (_DAT_2a22_8bc0 < 0xa0) {
        _DAT_2a22_8bc0 = _DAT_2a22_8bc0 + 1;
      }
    }
    uVar6 = FUN_19c7_4ef0(0x19c7,local_2e);
  }
  return;
}



/* 2035:046a FUN_2035_046a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_2035_046a(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int in_DX;
  undefined2 uVar3;
  undefined2 local_a;
  int local_8;
  
  local_a = 0;
  iVar1 = FUN_2035_029a(param_1);
  local_8 = 0;
  while( true ) {
    if (_DAT_2a22_8bc0 <= local_8) {
      return 0;
    }
    uVar3 = (undefined2)((ulong)_DAT_2a22_8bcc >> 0x10);
    iVar2 = FUN_2035_04fe(*(undefined2 *)(local_8 * 4 + (int)_DAT_2a22_8bcc),
                          *(undefined2 *)(local_8 * 4 + (int)_DAT_2a22_8bcc + 2));
    if (iVar2 != 0) {
      uVar3 = (undefined2)((ulong)_DAT_2a22_8bcc >> 0x10);
      local_a = FUN_2035_04fe(*(undefined2 *)(local_8 * 4 + (int)_DAT_2a22_8bcc),
                              *(undefined2 *)(local_8 * 4 + (int)_DAT_2a22_8bcc + 2));
    }
    uVar3 = (undefined2)((ulong)_DAT_2a22_8bcc >> 0x10);
    if ((*(int *)(local_8 * 4 + (int)_DAT_2a22_8bcc) == iVar1) &&
       (*(int *)(local_8 * 4 + (int)_DAT_2a22_8bcc + 2) == in_DX)) break;
    local_8 = local_8 + 1;
  }
  return local_a;
}



/* 2035:04fe FUN_2035_04fe */

int __cdecl16far FUN_2035_04fe(undefined2 param_1,undefined2 param_2)

{
  if ((((char)param_1 == 'D') && (param_1._1_1_ == 'I')) && ((char)param_2 == 'S')) {
    param_2._1_1_ = param_2._1_1_ + 'V';
    if (('@' < param_2._1_1_) && (param_2._1_1_ < 'F')) {
      return (int)param_2._1_1_;
    }
  }
  return 0;
}



/* 2035:054c FUN_2035_054c */

void __cdecl16far FUN_2035_054c(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = FUN_209f_0071();
  if (iVar1 < 4) {
    FUN_2035_0584(param_1);
  }
  else {
    FUN_2035_0606(0x209f,param_1);
  }
  FUN_19c7_4c0a(7);
  do {
    iVar1 = FUN_1951_00ea();
  } while (iVar1 == 0);
  return;
}



/* 2035:0584 FUN_2035_0584 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2035_0584(undefined2 param_1)

{
  undefined1 local_5c [90];
  
  FUN_19c7_4a80(local_5c,0x47bb,param_1,_DAT_2a22_8bc6);
  FUN_19c7_4c0a(10);
  FUN_19c7_4c0a(0xd);
  dispatch_ovl_02_22dc_050e(0xf,1);
  dispatch_ovl_02_22dc_0520(0x47ec);
  dispatch_ovl_02_22dc_0582(0x47f0);
  dispatch_ovl_02_22dc_0582(local_5c);
  dispatch_ovl_02_22dc_0582(0x47f2);
  dispatch_ovl_02_22dc_0520(0x47f4);
  return;
}



/* 2035:0606 FUN_2035_0606 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2035_0606(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar3 = _DAT_2a22_8c78;
  puVar5 = _DAT_2a22_bd72;
  puVar6 = _DAT_2a22_8c78;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x2035,*_DAT_2a22_8c78);
}



/* 209f:0006 FUN_209f_0006 */

char __cdecl16far FUN_209f_0006(void)

{
  code *pcVar1;
  char cVar2;
  char *in_BX;
  undefined4 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  cVar2 = *in_BX;
  if ((cVar2 == -7) && (((uint)uVar3 & 0xff) * (int)((ulong)uVar3 >> 0x10) < 0x801)) {
    cVar2 = -0xf;
  }
  return cVar2;
}



/* 209f:002a FUN_209f_002a */

char __cdecl16far FUN_209f_002a(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = (code *)swi(0x21);
  cVar2 = (*pcVar1)();
  return cVar2 + 'A';
}



/* 209f:0033 FUN_209f_0033 */

void __cdecl16far FUN_209f_0033(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



/* 209f:0044 FUN_209f_0044 */

undefined2 __cdecl16far FUN_209f_0044(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    uVar2 = 0;
  }
  return uVar2;
}



/* 209f:0054 FUN_209f_0054 */

undefined1 __cdecl16far FUN_209f_0054(void)

{
  code *pcVar1;
  undefined1 extraout_AH;
  
  pcVar1 = (code *)swi(0x13);
  (*pcVar1)();
  return extraout_AH;
}



/* 209f:0071 FUN_209f_0071 */

void __cdecl16far FUN_209f_0071(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



/* 20a6:0008 FUN_20a6_0008 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_20a6_0008(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 local_1c [20];
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  iVar1 = FUN_20a6_06aa(param_1,local_1c);
  if (iVar1 == 0) {
    iVar1 = FUN_2035_00c6(param_1,param_2,&local_4);
    if (iVar1 != 0) {
      FUN_20a6_05f6(param_1);
    }
    return local_4;
  }
  iVar1 = FUN_20a6_0750(_DAT_2a22_8c7c,local_8,local_6);
  if (iVar1 != 0) {
    FUN_20a6_05f6(param_1);
  }
  return _DAT_2a22_8c7c;
}



/* 20a6:006e FUN_20a6_006e */

undefined2 __cdecl16far FUN_20a6_006e(undefined2 param_1)

{
  int iVar1;
  undefined2 local_4;
  
  iVar1 = FUN_19c7_4ed7(0x20a6,param_1,0,&local_4);
  if (iVar1 != 0) {
    FUN_20a6_05f6(param_1);
  }
  return local_4;
}



/* 20a6:009c FUN_20a6_009c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a6_009c(int param_1)

{
  int iVar1;
  
  if (param_1 != _DAT_2a22_8c7c) {
    iVar1 = FUN_19c7_4ec2(0x20a6,param_1);
    if (iVar1 != 0) {
      FUN_20a6_05f6(0);
    }
  }
  return;
}



/* 20a6:00c2 FUN_20a6_00c2 */

undefined2 __cdecl16far FUN_20a6_00c2(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_4;
  
  uVar1 = FUN_20a6_0008(param_1,0);
  iVar2 = FUN_19c7_4f30(0x20a6,uVar1,param_2,0x2e67,0xffff,&local_4);
  if (iVar2 != 0) {
    FUN_20a6_05f6(0);
  }
  FUN_20a6_009c(uVar1);
  return local_4;
}



/* 20a6:010c FUN_20a6_010c */

undefined2 __cdecl16far FUN_20a6_010c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_4;
  
  uVar1 = FUN_20a6_0008(param_1,0);
  iVar2 = FUN_19c7_4f30(0x20a6,uVar1,param_2,param_3,0xffff,&local_4);
  if (iVar2 != 0) {
    FUN_20a6_05f6(0);
  }
  FUN_20a6_009c(uVar1);
  return local_4;
}



/* 20a6:0158 FUN_20a6_0158 */

undefined2 __cdecl16far
FUN_20a6_0158(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = FUN_20a6_006e(param_1);
  iVar2 = FUN_19c7_4f37(0x20a6,uVar1,param_2,param_3,param_4,&param_4);
  if (iVar2 != 0) {
    FUN_20a6_05f6(0);
  }
  FUN_20a6_009c(uVar1);
  return param_4;
}



/* 20a6:01a0 FUN_20a6_01a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_20a6_01a0(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  int local_4;
  
  uVar1 = FUN_20a6_0008(param_4,0);
  FUN_20a6_0568(uVar1,uVar1);
  FUN_1eea_0c62(param_5);
  for (local_4 = 0; local_4 < _DAT_2a22_dc90; local_4 = local_4 + 1) {
    FUN_1eea_0ddc(0xe07b);
    thunk_EXT_FUN_0000_0000(0x1eea,0xe07b,param_1,param_2,param_3 + local_4,_DAT_2a22_dc8e);
  }
  FUN_20a6_009c(uVar1);
  FUN_1951_02ac();
  return;
}



/* 20a6:0218 FUN_20a6_0218 */

void __cdecl16far FUN_20a6_0218(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_20a6_01a0(param_1,0,0,param_2,param_3);
  return;
}



/* 20a6:0232 FUN_20a6_0232 */

void __cdecl16far FUN_20a6_0232(undefined2 param_1,undefined2 param_2)

{
  FUN_20a6_01a0(param_1,0,0,param_2,1);
  return;
}



/* 20a6:0264 FUN_20a6_0264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_20a6_0264(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_20a6_0008(param_3,0);
  FUN_20a6_0568(uVar1,uVar1);
  FUN_1eea_0d7a();
  FUN_1eea_0dc2(param_1,param_2,_DAT_2a22_dc92);
  FUN_20a6_009c(uVar1);
  return _DAT_2a22_dc92;
}



/* 20a6:02a8 FUN_20a6_02a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_20a6_02a8(undefined2 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_18;
  undefined1 local_16 [2];
  int local_14;
  int local_12;
  undefined2 local_10;
  int local_6;
  int local_4;
  
  iVar1 = FUN_19c7_4f18(0x20a6,param_3,0,&local_18);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_19c7_4f30(0x19c7,local_18,&local_4,0x2e67,2,local_16), iVar1 == 0)) {
    _DAT_2a22_d3a5 = 2;
    if (local_4 < param_2) {
      return 2;
    }
    iVar1 = FUN_20a6_0750(local_18,param_2 << 1,(param_2 << 1) >> 0xf);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_19c7_4f30(0x19c7,local_18,&local_4,0x2e67,2,local_16), iVar1 == 0)) {
      local_4 = local_4 + -8;
      iVar1 = FUN_20a6_0750(local_18,local_4,local_4 >> 0xf);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_19c7_4f30(0x19c7,local_18,(undefined *)&DAT_2a22_dac2,0x2e67,8,local_16),
         iVar1 == 0)) {
        local_6 = ((uint)DAT_2a22_dac3 - (uint)DAT_2a22_dac2) + 1;
        local_14 = ((uint)DAT_2a22_dac6 + (uint)DAT_2a22_dac8) * local_6 * (uint)DAT_2a22_dac4 + 8;
        uVar2 = thunk_EXT_FUN_0000_0000(0x19c7,param_1);
        local_10 = (undefined2)((ulong)uVar2 >> 0x10);
        local_12 = (int)uVar2 + -8;
        if (DAT_2a22_dac5 == '\0') {
          local_12 = local_12 - local_6;
          local_4 = local_4 - local_6;
          local_14 = local_14 + local_6;
        }
        iVar1 = FUN_20a6_0750(local_18,local_4,local_4 >> 0xf);
        if (((iVar1 == 0) &&
            (iVar1 = FUN_19c7_4f30(0x1eea,local_18,local_12,local_10,local_14,local_16), iVar1 == 0)
            ) && (iVar1 = FUN_19c7_4ec2(0x19c7,local_18), iVar1 == 0)) {
          FUN_1951_02ac();
          return 0;
        }
      }
    }
  }
  return _DAT_2a22_d3a5;
}



/* 20a6:0412 FUN_20a6_0412 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a6_0412(undefined2 param_1)

{
  undefined2 uVar1;
  int local_4;
  
  uVar1 = FUN_20a6_0008(param_1,0);
  FUN_20a6_0568(uVar1,uVar1);
  FUN_1eea_0c62(0);
  thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_dc8e,_DAT_2a22_dc90);
  for (local_4 = 0; local_4 < _DAT_2a22_dc90; local_4 = local_4 + 1) {
    FUN_1eea_0ddc(0xe07b);
    thunk_EXT_FUN_0000_0000(0x1eea,0xe07b);
  }
  FUN_20a6_009c(uVar1);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 20a6:0488 FUN_20a6_0488 */

void __cdecl16far FUN_20a6_0488(undefined2 param_1,undefined2 param_2)

{
  FUN_20a6_0232(param_2,param_1);
  return;
}



/* 20a6:049a FUN_20a6_049a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a6_049a(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int local_4;
  
  uVar1 = FUN_20a6_0008(param_1,0);
  FUN_20a6_0568(uVar1,uVar1);
  FUN_1eea_0c62(0);
  for (local_4 = 0; local_4 < _DAT_2a22_dc90; local_4 = local_4 + 1) {
    FUN_1eea_0ddc(0xe07b);
    thunk_EXT_FUN_0000_0000(0x1eea,0xe07b,param_2,0,local_4,_DAT_2a22_dc8e);
  }
  return;
}



/* 20a6:04fe FUN_20a6_04fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a6_04fe(undefined2 param_1,undefined2 param_2)

{
  int local_4;
  
  _DAT_2a22_dacc = 0;
  _DAT_2a22_dace = param_1;
  _DAT_3000_ca2b = _DAT_2a22_8c7a;
  _DAT_3000_c6e7 = 0x586;
  _DAT_3000_c6e9 = 0x20a6;
  FUN_1eea_0c62(0);
  for (local_4 = 0; local_4 < _DAT_2a22_dc90; local_4 = local_4 + 1) {
    FUN_1eea_0ddc(0xe07b);
    thunk_EXT_FUN_0000_0000(0x1eea,0xe07b,param_2,0,local_4,_DAT_2a22_dc8e);
  }
  return;
}



/* 20a6:0568 FUN_20a6_0568 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a6_0568(undefined2 param_1)

{
  _DAT_2a22_daca = param_1;
  _DAT_3000_ca2b = _DAT_2a22_8c7a;
  _DAT_3000_c6e7 = 0x5cc;
  _DAT_3000_c6e9 = 0x20a6;
  return;
}



/* 20a6:0586 FUN_20a6_0586 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_20a6_0586(void)

{
  FUN_19c7_4bde(_DAT_2a22_dace,_DAT_2a22_dacc,0x2e67,0xe1bb,0x200,0xe1bb,0x2e67);
  _DAT_3000_ca2b = 0xe1bb;
  _DAT_2a22_dacc = CONCAT11(DAT_2a22_dacd + '\x02',DAT_2a22_dacc);
  return 0x200;
}



/* 20a6:05bc FUN_20a6_05bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a6_05bc(undefined2 param_1)

{
  _DAT_2a22_daca = param_1;
  FUN_20a6_05cc();
  return;
}



/* 20a6:05cc FUN_20a6_05cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_20a6_05cc(void)

{
  undefined2 local_4;
  
  FUN_19c7_4f30(0x20a6,_DAT_2a22_daca,0xe1bb,0x2e67,0x200,&local_4);
  _DAT_3000_ca2b = 0xe1bb;
  return local_4;
}



/* 20a6:05f6 FUN_20a6_05f6 */

void __cdecl16far FUN_20a6_05f6(undefined2 param_1)

{
  FUN_20a6_061e(3);
  FUN_19c7_494a(param_1);
  FUN_19c7_29de(0x19c7,99);
  return;
}



/* 20a6:061e FUN_20a6_061e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a6_061e(undefined1 param_1)

{
  undefined2 uVar1;
  undefined1 local_10;
  undefined1 local_f;
  
  uVar1 = _DAT_2a22_d3a5;
  local_f = 0;
  local_10 = param_1;
  FUN_19c7_4a00(0x10,&local_10,&local_10);
  _DAT_2a22_d3a5 = uVar1;
  return;
}



/* 20a6:0650 FUN_20a6_0650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_20a6_0650(undefined2 param_1)

{
  int iVar1;
  undefined2 local_4;
  
  iVar1 = FUN_19c7_4f18(0x20a6,param_1,0x8000,&local_4);
  if (iVar1 == 0) {
    _DAT_2a22_8c7c = local_4;
    return 1;
  }
  return 0;
}



/* 20a6:0682 FUN_20a6_0682 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a6_0682(void)

{
  int iVar1;
  
  if (_DAT_2a22_8c7c != -1) {
    iVar1 = FUN_19c7_4ec2(0x20a6,_DAT_2a22_8c7c);
    if (iVar1 != 0) {
      FUN_20a6_05f6(0);
    }
    _DAT_2a22_8c7c = -1;
  }
  return;
}



/* 20a6:06aa FUN_20a6_06aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_20a6_06aa(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int local_6;
  undefined1 local_4 [2];
  
  if (_DAT_2a22_8c7c != -1) {
    iVar1 = FUN_20a6_0750(_DAT_2a22_8c7c,0,0);
    if (iVar1 != 0) {
      FUN_20a6_05f6(0);
    }
    iVar1 = FUN_19c7_4f30(0x20a6,_DAT_2a22_8c7c,&local_6,0x2e67,2,local_4);
    if (iVar1 != 0) {
      FUN_20a6_05f6(0);
    }
    while (local_6 != 0) {
      local_6 = local_6 + -1;
      iVar1 = FUN_19c7_4f30(0x19c7,_DAT_2a22_8c7c,param_2,0x2e67,0x18,local_4);
      if (iVar1 != 0) {
        FUN_20a6_05f6(0);
      }
      iVar1 = FUN_19c7_4c44(param_2,param_1,0xc);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* 20a6:0750 FUN_20a6_0750 */

undefined2 __cdecl16far FUN_20a6_0750(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  int local_4;
  
  local_10 = 0x4200;
  local_e = param_1;
  local_c = param_3;
  local_a = param_2;
  FUN_19c7_4b94(&local_10,&local_10);
  if (local_4 == 0) {
    return 0;
  }
  return local_10;
}



/* 20a6:07a0 FUN_20a6_07a0 */

void __cdecl16far FUN_20a6_07a0(void)

{
  return;
}



/* 2120:0002 FUN_2120_0002 */

undefined2 __cdecl16far FUN_2120_0002(void)

{
  undefined2 in_AX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  if ((*(byte *)(unaff_SI + 7) & 0x10) != 0) {
    return in_AX;
  }
  if ((*(char *)0xaa4 != '\0') && ((*(byte *)(unaff_SI + 7) & 0xc) != 0)) {
    FUN_2120_1b88();
  }
  *(byte *)(unaff_SI + 7) = *(byte *)(unaff_SI + 7) & 0xfd;
  return in_AX;
}



/* 2120:0035 dos_load_overlay */

int __cdecl16far dos_load_overlay(void)

{
  byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  int in_AX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *extraout_DX;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined1 uVar18;
  bool bVar19;
  uint *puVar20;
  undefined4 uVar21;
  uint uVar22;
  
  if (in_AX == -1) {
    return -1;
  }
  uVar17 = 0x2120;
  iVar8 = in_AX * 0x10;
  puVar9 = (uint *)(iVar8 + 0xc2c);
  DAT_2120_0aa8 = puVar9;
  if ((*(int *)(iVar8 + 0xc34) == 0) || ((*(byte *)(iVar8 + 0xc33) & 2) != 0)) {
    uVar18 = false;
LAB_2120_032e:
    if ((!(bool)uVar18) && (*(int *)(*(int *)0xaa8 + 0xc) != -1)) {
      dos_load_overlay();
    }
    return in_AX;
  }
  puVar10 = (uint *)0xc2c;
  iVar8 = DAT_2120_0c24;
  do {
    bVar19 = false;
    if ((*(byte *)((int)puVar10 + 7) & 2) != 0) {
      uVar4 = *puVar10 - *puVar9;
      if (*puVar10 < *puVar9) {
        bVar19 = -uVar4 < puVar10[4];
      }
      else {
        bVar19 = uVar4 < puVar9[4];
      }
    }
    if (bVar19) {
      bVar19 = iVar8 != DAT_2120_0c24;
      FUN_2120_0002();
      if (bVar19) {
        FUN_22d8_000a();
        FUN_22d8_000a();
        iVar8 = dos_overlay_fatal_error();
        return iVar8;
      }
    }
    uVar15 = 0x2120;
    puVar10 = puVar10 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if ((DAT_2120_0aa4 != '\0') && (bVar19 = false, (*(byte *)((int)puVar9 + 7) & 0xc) != 0)) {
    uVar15 = 0x22d8;
    FUN_2120_1b88();
    if (!bVar19) {
LAB_2120_0320:
      *(byte *)(*(int *)0xaa8 + 7) = *(byte *)(*(int *)0xaa8 + 7) | 2;
      uVar18 = 0;
      FUN_20a6_07a0();
      goto LAB_2120_032e;
    }
  }
  pbVar12 = (byte *)puVar9[1];
  if ((*(byte *)((int)puVar9 + 7) & 8) != 0) {
    pbVar12 = *(byte **)pbVar12;
  }
  pbVar11 = pbVar12 + 1;
  if (DAT_2120_0aaa != (byte *)0x0) {
    puVar10 = DAT_2120_0aac;
    if (pbVar11 == DAT_2120_0aaa) goto LAB_2120_0203;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
  }
  bVar19 = false;
  uVar16 = uVar15;
  uVar4 = uVar17;
  DAT_2120_0aaa = pbVar11;
  if ((*pbVar12 & 1) == 0) goto LAB_2120_0139;
  pcVar3 = (code *)swi(0x21);
  puVar10 = (uint *)(*pcVar3)();
  if (bVar19) {
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    dos_overlay_print_filename();
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    goto LAB_2120_0134;
  }
LAB_2120_0203:
  uVar17 = puVar9[5];
  uVar14 = puVar9[2];
  pcVar3 = (code *)swi(0x21);
  DAT_2120_0aac = puVar10;
  (*pcVar3)();
  uVar6 = DAT_2120_0aa8[4];
  uVar4 = *DAT_2120_0aa8;
  if ((*(byte *)((int)DAT_2120_0aa8 + 7) & 8) != 0) {
    uVar6 = uVar6 - *(int *)(DAT_2120_0aa8[1] + 0x1c);
  }
  uVar15 = 0x2120;
  uVar14 = -((((uVar17 + 3 >> 2) + uVar14) - 1 & 0x7f) - 0xfff);
  puVar9 = puVar10;
  uVar17 = 0x2120;
  for (; uVar6 != 0; uVar6 = uVar6 - uVar5) {
    uVar5 = uVar6;
    if (uVar14 < uVar6) {
      uVar5 = uVar14;
    }
    bVar19 = false;
    pcVar3 = (code *)swi(0x21);
    uVar22 = uVar17;
    (*pcVar3)();
    uVar17 = uVar4;
    if (bVar19) goto LAB_2120_0290;
    uVar4 = uVar4 + uVar5;
    uVar14 = 0xf80;
    uVar17 = uVar22;
  }
  iVar8 = *(int *)(*(int *)0xaa8 + 10);
  puVar9 = (uint *)*(undefined2 *)0xaac;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  iVar7 = (iVar8 - 1U & 0x1f) + 1;
  pbVar12 = (byte *)(iVar8 + 0x1fU >> 5);
  pbVar11 = pbVar12;
  if (pbVar12 != (byte *)0x0) {
    while( true ) {
      bVar19 = false;
      uVar4 = iVar7 << 2;
      pcVar3 = (code *)swi(0x21);
      uVar21 = (*pcVar3)();
      pbVar13 = (byte *)((ulong)uVar21 >> 0x10);
      if ((bVar19) || ((uint)uVar21 < uVar4)) break;
      uVar4 = *(int *)0xaa6 + 0x10;
      do {
        if (!CARRY2(uVar4,*(uint *)(pbVar13 + 2))) {
          **(int **)pbVar13 = **(int **)pbVar13 + uVar4;
        }
        pbVar13 = pbVar13 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar7 = 0x20;
      pbVar12 = pbVar12 + -1;
      pbVar11 = pbVar13;
      if (pbVar12 == (byte *)0x0) goto LAB_2120_0320;
    }
LAB_2120_0290:
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    dos_overlay_print_filename();
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
LAB_2120_0134:
    do {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar16 = uVar15;
      uVar4 = uVar17;
LAB_2120_0139:
      iVar8 = 0x80;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pbVar2 = pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (*pbVar2 != 0);
      if ((((*(uint *)(pbVar11 + -3) | 0x2020) == 0x6578) &&
          (bVar19 = (*(uint *)(pbVar11 + -5) | 0x2000) < 0x652e,
          (*(uint *)(pbVar11 + -5) | 0x2000) == 0x652e)) && (FUN_2120_0784(), !bVar19)) {
        bVar19 = puVar9 != (uint *)0xffff;
        if (puVar9 == (uint *)0xffff) {
          pbVar12 = extraout_DX;
          pbVar11 = DAT_2120_0aaa;
          do {
            pbVar2 = pbVar12;
            pbVar12 = pbVar12 + 1;
            bVar1 = *pbVar2;
            pbVar2 = pbVar11;
            pbVar11 = pbVar11 + 1;
            *pbVar2 = bVar1;
          } while (bVar1 != 0);
        }
        else {
          uVar16 = 0x2120;
          pcVar3 = (code *)swi(0x21);
          puVar20 = (uint *)(*pcVar3)();
          if (!bVar19) goto LAB_2120_01e2;
        }
      }
      pbVar11 = DAT_2120_0aaa;
      uVar17 = 0x2120;
      bVar19 = false;
      uVar4 = 0x21cb;
      puVar9 = (uint *)(uint)DAT_2120_0aa5;
      uVar15 = 0x2120;
      uVar14 = dos_overlay_find_file(uVar16);
      if (!bVar19) goto LAB_2120_01de;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      while (pbVar2 = pbVar11, pbVar11 = pbVar11 + 1, *pbVar2 != 0) {
        pcVar3 = (code *)swi(0x21);
        (*pcVar3)();
      }
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    } while( true );
  }
  goto LAB_2120_0320;
LAB_2120_01de:
  puVar20 = (uint *)(ulong)uVar14;
LAB_2120_01e2:
  pbVar12 = DAT_2120_0aaa;
  pbVar11 = (byte *)((ulong)puVar20 >> 0x10);
  DAT_2120_0aaa[-1] = DAT_2120_0aaa[-1] | 1;
  do {
    pbVar2 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar1 = *pbVar2;
    pbVar2 = pbVar12;
    pbVar12 = pbVar12 + 1;
    *pbVar2 = bVar1;
  } while (bVar1 != 0);
  puVar10 = (uint *)puVar20;
  puVar9 = DAT_2120_0aa8;
  goto LAB_2120_0203;
}



/* 2120:034c dos_overlay_dispatch */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl16near dos_overlay_dispatch(undefined2 param_1,undefined2 param_2)

{
  undefined2 in_AX;
  undefined2 uVar1;
  undefined2 in_DX;
  undefined2 uVar2;
  undefined2 *puVar3;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  int in_stack_00000000;
  
  puVar3 = (undefined2 *)(DAT_2120_0a96 + ram0x00021c94);
  register0x00000000 = ram0x00021c94 + 6;
  if (DAT_2120_0c2a <= register0x00000000) {
    uVar2 = 0x9f3;
    uVar1 = dos_overlay_fatal_error();
    return CONCAT22(uVar2,uVar1);
  }
  *puVar3 = *(undefined2 *)(in_stack_00000000 + 5);
  if ((DAT_2120_0c20 & 1) == 0) {
    param_2 = 0x2120;
  }
  puVar3[2] = param_2;
  puVar3[1] = param_1;
  dos_load_overlay((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                   (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80
                   | (uint)(in_ZF & 1) * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 |
                   (uint)(in_CF & 1));
  return CONCAT22(in_DX,in_AX);
}



/* 2120:03ba dos_overlay_restore_caller */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 dos_overlay_restore_caller(void)

{
  undefined2 in_AX;
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = ram0x00021c94 - 6;
  if (ram0x00021c94 < 6) {
    uVar1 = dos_overlay_fatal_error();
    return uVar1;
  }
  unique0x10000026 = iVar2;
  if (iVar2 != 0) {
    dos_load_overlay();
  }
  return in_AX;
}



/* 2120:03be FUN_2120_03be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_2120_03be(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 in_AX;
  undefined2 uVar1;
  int iVar2;
  
  param_1 = param_3;
  iVar2 = ram0x00021c94 - 6;
  if (ram0x00021c94 < 6) {
    uVar1 = dos_overlay_fatal_error();
    return uVar1;
  }
  unique0x10000022 = iVar2;
  if (iVar2 != 0) {
    dos_load_overlay();
  }
  return in_AX;
}



/* 2120:0414 dos_overlay_startup */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void dos_overlay_startup(void)

{
  int iVar1;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined1 *puVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = DAT_2120_0c22;
  puVar2 = (undefined1 *)0x800;
  iVar3 = 0x3d75;
  if (DAT_2120_0c22 != 0) {
    in_CX = 0x3d75;
    in_DX = 0x800;
    puVar2 = (undefined1 *)0x200;
    iVar3 = DAT_2120_0c22;
  }
  *(undefined2 *)(puVar2 + -2) = unaff_DS;
  *(int *)(puVar2 + -4) = iVar1;
  *(undefined2 *)(puVar2 + -6) = in_CX;
  *(undefined2 *)(puVar2 + -8) = in_DX;
  DAT_2120_0aa6 = unaff_DS;
  *(undefined2 *)(puVar2 + -10) = 0x1638;
  FUN_2120_044f();
  msc_runtime_startup();
  return;
}



/* 2120:044f FUN_2120_044f */

int __cdecl16near FUN_2120_044f(void)

{
  undefined2 *puVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 unaff_DS;
  bool bVar12;
  
  pcVar2 = (code *)swi(0x21);
  bVar3 = (*pcVar2)();
  if (2 < bVar3) {
    *(undefined1 *)0xaa5 = 0x20;
  }
  *(int *)0xaae = *(int *)0xc24 * 0x10 + 0xc2c;
  iVar8 = *(int *)0xc26 * 0x20 + DAT_2120_0aae;
  *(undefined2 *)0xa94 = 0;
  *(int *)0xa96 = iVar8;
  bVar12 = false;
  iVar8 = FUN_2120_1b88();
  if ((!bVar12) || (*(int *)0xc26 != 0)) {
    *(undefined1 *)0xaa4 = 0xff;
  }
  puVar9 = (uint *)0xc2c;
  if ((*(uint *)0xc20 & 2) != 0) {
    uVar4 = 0xffff;
    uVar6 = 0;
    do {
      uVar7 = *puVar9;
      if (uVar7 != 0) {
        if (uVar7 < uVar4) {
          uVar4 = uVar7;
        }
        if (uVar6 < uVar7 + puVar9[4]) {
          uVar6 = uVar7 + puVar9[4];
        }
      }
      puVar9 = puVar9 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar6 = uVar6 - uVar4;
    do {
      uVar7 = 0x1000;
      if (uVar6 < 0x1000) {
        uVar7 = uVar6;
      }
      puVar11 = (undefined2 *)0x0;
      for (iVar8 = uVar7 << 3; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar1 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar1 = 0;
      }
      uVar4 = uVar4 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
  }
  iVar5 = 0;
  iVar10 = 0xc2c;
  iVar8 = DAT_2120_0c24;
  do {
    if ((*(byte *)(iVar10 + 7) & 1) != 0) {
      iVar5 = dos_load_overlay();
    }
    iVar10 = iVar10 + 0x10;
    iVar5 = iVar5 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return iVar5;
}



/* 2120:05bb dos_overlay_print_filename */

void __cdecl16near dos_overlay_print_filename(void)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  
  pcVar4 = (char *)*(undefined2 *)0xaaa;
  iVar3 = -0x8000;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  pcVar4[-1] = '$';
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  return;
}



/* 2120:05d7 dos_overlay_fatal_error */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far dos_overlay_fatal_error(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *extraout_DX;
  uint in_BX;
  char *pcVar8;
  char *pcVar9;
  char *unaff_SI;
  uint uVar10;
  int iVar11;
  bool bVar12;
  ulong uVar13;
  undefined4 uVar14;
  int iStack0008;
  undefined2 in_stack_00000018;
  
  iVar11 = 0x2120;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
LAB_2120_0134:
  do {
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    iVar7 = 0x80;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar2 = unaff_SI;
      unaff_SI = unaff_SI + 1;
    } while (*pcVar2 != '\0');
    if ((((*(uint *)(unaff_SI + -3) | 0x2020) != 0x6578) ||
        (bVar12 = (*(uint *)(unaff_SI + -5) | 0x2000) < 0x652e,
        (*(uint *)(unaff_SI + -5) | 0x2000) != 0x652e)) || (FUN_2120_0784(), bVar12)) {
LAB_2120_0194:
      unaff_SI = DAT_2120_0aaa;
      iVar11 = 0x2120;
      bVar12 = false;
      iVar7 = 0x21cb;
      in_BX = (uint)DAT_2120_0aa5;
      uVar5 = dos_overlay_find_file();
      if (bVar12) {
        pcVar4 = (code *)swi(0x21);
        (*pcVar4)();
        while (pcVar2 = unaff_SI, unaff_SI = unaff_SI + 1, *pcVar2 != '\0') {
          pcVar4 = (code *)swi(0x21);
          (*pcVar4)();
        }
        pcVar4 = (code *)swi(0x21);
        (*pcVar4)();
        goto LAB_2120_0134;
      }
      uVar13 = (ulong)uVar5;
    }
    else {
      bVar12 = in_BX != 0xffff;
      if (in_BX == 0xffff) {
        pcVar8 = extraout_DX;
        pcVar9 = DAT_2120_0aaa;
        do {
          pcVar2 = pcVar8;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
          pcVar9 = pcVar9 + 1;
          *pcVar2 = cVar1;
        } while (cVar1 != '\0');
        goto LAB_2120_0194;
      }
      pcVar4 = (code *)swi(0x21);
      uVar13 = (*pcVar4)();
      iVar7 = iVar11;
      if (bVar12) goto LAB_2120_0194;
    }
    pcVar8 = DAT_2120_0aaa;
    unaff_SI = (char *)(uVar13 >> 0x10);
    in_BX = (uint)uVar13;
    DAT_2120_0aaa[-1] = DAT_2120_0aaa[-1] | 1;
    do {
      pcVar2 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
    iVar7 = DAT_2120_0aa8[5];
    iVar3 = DAT_2120_0aa8[2];
    pcVar4 = (code *)swi(0x21);
    DAT_2120_0aac = in_BX;
    (*pcVar4)();
    iStack0008 = 0x2120;
    uVar5 = DAT_2120_0aa8[4];
    iVar11 = *DAT_2120_0aa8;
    if ((*(byte *)((int)DAT_2120_0aa8 + 7) & 8) != 0) {
      uVar5 = uVar5 - *(int *)(DAT_2120_0aa8[1] + 0x1c);
    }
    uVar10 = -((((iVar7 + 3U >> 2) + iVar3) - 1 & 0x7f) - 0xfff);
    for (; uVar5 != 0; uVar5 = uVar5 - uVar6) {
      uVar6 = uVar5;
      if (uVar10 < uVar5) {
        uVar6 = uVar10;
      }
      bVar12 = false;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      if (bVar12) goto LAB_2120_0290;
      iVar11 = iVar11 + uVar6;
      uVar10 = 0xf80;
    }
    iVar11 = DAT_2120_0aa8[5];
    pcVar4 = (code *)swi(0x21);
    in_BX = DAT_2120_0aac;
    (*pcVar4)();
    iVar7 = (iVar11 - 1U & 0x1f) + 1;
    pcVar8 = (char *)(iVar11 + 0x1fU >> 5);
    unaff_SI = pcVar8;
    while( true ) {
      if (pcVar8 == (char *)0x0) {
        *(byte *)((int)DAT_2120_0aa8 + 7) = *(byte *)((int)DAT_2120_0aa8 + 7) | 2;
        bVar12 = false;
        FUN_20a6_07a0();
        if ((!bVar12) && (DAT_2120_0aa8[6] != -1)) {
          dos_load_overlay();
        }
        return in_stack_00000018;
      }
      bVar12 = false;
      uVar5 = iVar7 << 2;
      pcVar4 = (code *)swi(0x21);
      uVar14 = (*pcVar4)();
      pcVar9 = (char *)((ulong)uVar14 >> 0x10);
      iVar11 = iStack0008;
      if ((bVar12) || ((uint)uVar14 < uVar5)) break;
      uVar5 = DAT_2120_0aa6 + 0x10;
      do {
        if (!CARRY2(uVar5,*(uint *)(pcVar9 + 2))) {
          **(int **)pcVar9 = **(int **)pcVar9 + uVar5;
        }
        pcVar9 = pcVar9 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar7 = 0x20;
      pcVar8 = pcVar8 + -1;
      unaff_SI = pcVar9;
    }
LAB_2120_0290:
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    dos_overlay_print_filename();
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
  } while( true );
}



/* 2120:05e3 FUN_2120_05e3 */

undefined2 FUN_2120_05e3(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 in_AX;
  int iVar5;
  char *unaff_SI;
  char *pcVar6;
  char *unaff_DI;
  char *pcVar7;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    pcVar7 = (char *)0x0;
LAB_2120_05f9:
    if (*pcVar7 != '\0') {
      pcVar6 = unaff_SI;
      do {
        pcVar2 = pcVar6;
        pcVar6 = pcVar6 + 1;
        if (*pcVar2 == '\0') {
          if (*pcVar7 == '=') {
            do {
              pcVar7 = pcVar7 + 1;
              cVar3 = *pcVar7;
              pcVar2 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              *pcVar2 = cVar3;
            } while (cVar3 != '\0');
            return in_AX;
          }
          break;
        }
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar2 == *pcVar1);
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar2 != '\0');
      goto LAB_2120_05f9;
    }
  }
  return in_AX;
}



/* 2120:05e9 FUN_2120_05e9 */

undefined2 __cdecl16far
FUN_2120_05e9(char *param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 in_AX;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    pcVar7 = (char *)0x0;
LAB_2120_05f9:
    if (*pcVar7 != '\0') {
      pcVar6 = param_1;
      do {
        pcVar2 = pcVar6;
        pcVar6 = pcVar6 + 1;
        if (*pcVar2 == '\0') {
          if (*pcVar7 == '=') {
            do {
              pcVar7 = pcVar7 + 1;
              cVar3 = *pcVar7;
              pcVar2 = param_2;
              param_2 = param_2 + 1;
              *pcVar2 = cVar3;
            } while (cVar3 != '\0');
            return param_4;
          }
          break;
        }
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar2 == *pcVar1);
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar2 != '\0');
      goto LAB_2120_05f9;
    }
  }
  return param_4;
}



/* 2120:0641 dos_overlay_find_file */

uint __cdecl16near dos_overlay_find_file(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  code *pcVar5;
  uint uVar6;
  byte bVar7;
  uint in_CX;
  byte bVar8;
  int iVar9;
  byte *unaff_SI;
  byte *pbVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined2 unaff_DS;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined2 uVar17;
  
  while( true ) {
    pbVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    bVar8 = *pbVar1;
    iVar9 = 0x678;
    uVar17 = 0x678;
    if (bVar8 == 0) {
      return in_CX;
    }
    if (bVar8 == 0x43) {
      FUN_2120_0746();
      uVar6 = FUN_2120_07e9();
      return uVar6;
    }
    if (bVar8 == 0x45) break;
    if (bVar8 == 0x50) {
      pcVar5 = (code *)swi(0x21);
      uVar6 = (*pcVar5)();
      bVar14 = (byte)uVar6 < 3;
      if (!bVar14) {
        uVar16 = FUN_2120_0784();
        puVar11 = (undefined1 *)((ulong)uVar16 >> 0x10);
        uVar6 = (uint)uVar16;
        if ((!bVar14) && (iVar9 != -1)) {
          puVar13 = (undefined1 *)0x0;
          for (iVar9 = iVar9 - (int)puVar11; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar4 = puVar13;
            puVar13 = puVar13 + 1;
            puVar2 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar4 = *puVar2;
          }
          uVar6 = FUN_2120_07e9();
          return uVar6;
        }
      }
      return uVar6;
    }
    if (bVar8 == 0x41) {
      bVar14 = false;
      do {
        bVar15 = bVar14;
        uVar6 = FUN_2120_0815(uVar17);
        if (bVar15) {
          return uVar6;
        }
        uVar6 = FUN_2120_07e9();
        bVar14 = true;
      } while (bVar15);
      return uVar6;
    }
  }
  do {
    pbVar12 = unaff_SI;
    bVar8 = *pbVar12;
    bVar14 = false;
    if (bVar8 == 0) break;
    bVar14 = bVar8 < 0x2c;
    unaff_SI = pbVar12 + 1;
  } while (bVar8 != 0x2c);
  *pbVar12 = 0;
  FUN_2120_05e3(0x2120);
  *pbVar12 = bVar8;
  if (bVar14) {
    return (uint)bVar8;
  }
  pbVar10 = (byte *)0x50;
  uVar6 = in_CX;
  do {
    bVar8 = (byte)pbVar12;
    pbVar12 = (byte *)0x0;
    while( true ) {
      pbVar1 = pbVar10;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
      bVar7 = (byte)(uVar6 >> 8);
      uVar6 = CONCAT11(bVar7,bVar3);
      if ((bVar3 == 0) || (bVar3 == 0x3b)) break;
      pbVar1 = pbVar12;
      pbVar12 = pbVar12 + 1;
      *pbVar1 = bVar3;
      uVar6 = (uint)bVar3 << 8;
    }
    if (pbVar12 != (byte *)0x0) {
      bVar14 = bVar7 < 0x5c;
      if ((bVar7 != 0x5c) && (bVar14 = bVar7 < 0x3a, bVar7 != 0x3a)) {
        *pbVar12 = 0x5c;
      }
      bVar8 = bVar3;
      uVar6 = FUN_2120_07e9();
      if (!bVar14) {
        return uVar6;
      }
    }
    pbVar12 = (byte *)(uint)bVar8;
    if (bVar8 == 0) {
      return uVar6;
    }
  } while( true );
}



/* 2120:0746 FUN_2120_0746 */

undefined4 __cdecl16near FUN_2120_0746(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 in_AX;
  int iVar4;
  char *unaff_DI;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_ES;
  
  cVar3 = (char)in_AX;
  if (cVar3 == '\0') {
    pcVar2 = (code *)swi(0x21);
    cVar3 = (*pcVar2)();
    cVar3 = cVar3 + '\x01';
  }
  *unaff_DI = cVar3 + '@';
  pcVar5 = unaff_DI + 3;
  (unaff_DI + 1)[0] = ':';
  (unaff_DI + 1)[1] = '\\';
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  iVar4 = 0x40;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar6 = pcVar5 + -1;
  if (pcVar5[-2] != '\\') {
    pcVar5[-1] = '\\';
    pcVar6 = pcVar5;
  }
  *pcVar6 = '\0';
  return CONCAT22(in_AX,param_1);
}



/* 2120:0784 FUN_2120_0784 */

undefined4 FUN_2120_0784(undefined2 param_1)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  undefined2 in_AX;
  int iVar5;
  char *in_BX;
  char *pcVar6;
  char *pcStack_4;
  
  pcVar3 = (code *)swi(0x21);
  bVar4 = (*pcVar3)();
  pcStack_4 = in_BX;
  if ((2 < bVar4) && (iVar2 = *(int *)0x2c, iVar2 != 0)) {
    iVar5 = -0x8000;
    pcVar6 = (char *)0x0;
LAB_2120_07b3:
    if (*pcVar6 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      goto LAB_2120_07b3;
    }
    if (*(int *)(pcVar6 + 1) == 1) {
      pcVar6 = pcVar6 + 3;
      pcStack_4 = (char *)0xffff;
      while( true ) {
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
        if (*pcVar1 == '\0') break;
        if (*pcVar1 == '\\') {
          pcStack_4 = pcVar6;
        }
      }
    }
  }
  return CONCAT22(pcStack_4,param_1);
}



/* 2120:078a FUN_2120_078a */

undefined4 __cdecl16near FUN_2120_078a(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  undefined2 in_AX;
  int iVar5;
  char *pcVar6;
  char *in_stack_00000008;
  undefined2 in_stack_0000000e;
  
  pcVar3 = (code *)swi(0x21);
  bVar4 = (*pcVar3)();
  if ((2 < bVar4) && (iVar2 = *(int *)0x2c, iVar2 != 0)) {
    iVar5 = -0x8000;
    pcVar6 = (char *)0x0;
LAB_2120_07b3:
    if (*pcVar6 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      goto LAB_2120_07b3;
    }
    if (*(int *)(pcVar6 + 1) == 1) {
      pcVar6 = pcVar6 + 3;
      in_stack_00000008 = (char *)0xffff;
      while( true ) {
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
        if (*pcVar1 == '\0') break;
        if (*pcVar1 == '\\') {
          in_stack_00000008 = pcVar6;
        }
      }
    }
  }
  return CONCAT22(in_stack_00000008,in_stack_0000000e);
}



/* 2120:07e9 FUN_2120_07e9 */

void __cdecl16near FUN_2120_07e9(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  
  FUN_2120_07fd();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(extraout_DX);
  return;
}



/* 2120:07fd FUN_2120_07fd */

undefined2 __cdecl16near FUN_2120_07fd(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char *pcVar3;
  char cVar4;
  undefined2 in_AX;
  undefined2 *unaff_BP;
  char *pcVar5;
  char *unaff_DI;
  undefined2 unaff_SS;
  
  uVar1 = unaff_BP[6];
  uVar2 = *unaff_BP;
  pcVar5 = (char *)unaff_BP[4];
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar5 + 1;
    cVar4 = *pcVar3;
    pcVar3 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar3 = cVar4;
  } while (cVar4 != '\0');
  return in_AX;
}



/* 2120:0815 FUN_2120_0815 */

undefined2 __cdecl16near FUN_2120_0815(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 unaff_SS;
  
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  FUN_2120_07fd();
  *(undefined1 *)0x0 = 0x24;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar1 = *(undefined2 *)(unaff_BP + 0xc);
  *(undefined1 *)0x50 = 0xfe;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar7 = (uint)*(byte *)0x51;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar7 = uVar7 & 0xff;
  if (uVar7 == 0) goto LAB_2120_08ce;
  uVar1 = *(undefined2 *)(unaff_BP + 0xc);
  puVar8 = (undefined1 *)0x52;
  uVar2 = *(undefined2 *)(unaff_BP + 0xc);
  puVar9 = (undefined1 *)0x0;
  if (*(char *)0x53 == ':') {
    if (*(char *)0x54 != '\\') {
      puVar8 = (undefined1 *)0x54;
      uVar7 = uVar7 - 2;
LAB_2120_08b9:
      FUN_2120_0746();
    }
  }
  else {
    if (*(char *)0x52 != '\\') goto LAB_2120_08b9;
    pcVar5 = (code *)swi(0x21);
    cVar6 = (*pcVar5)();
    puVar9 = (undefined1 *)0x2;
    *(undefined2 *)0x0 = CONCAT11(0x3a,cVar6 + 'A');
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    puVar4 = puVar9;
    puVar9 = puVar9 + 1;
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar4 = *puVar3;
  }
  if ((puVar9[-1] != '\\') && (puVar9[-1] != ':')) {
    *puVar9 = 0x5c;
  }
LAB_2120_08ce:
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  return extraout_DX;
}


/* 2120:167e dispatch_ovl_16_290a_04fe is an overlay dispatch alias for dispatch_ovl_16_290a_04fe. */
/* 2120:1688 dispatch_ovl_17_290a_0562 is an overlay dispatch alias for dispatch_ovl_17_290a_0562. */
/* 2120:1692 dispatch_ovl_02_22dc_0000 is an overlay dispatch alias for dispatch_ovl_02_22dc_0000. */
/* 2120:169c dispatch_ovl_21_290a_02a2 is an overlay dispatch alias for dispatch_ovl_21_290a_02a2. */
/* 2120:16a6 dispatch_ovl_19_290a_0386 is an overlay dispatch alias for dispatch_ovl_19_290a_0386. */
/* 2120:16b0 dispatch_ovl_20_290a_03c0 is an overlay dispatch alias for dispatch_ovl_20_290a_03c0. */
/* 2120:16ba dispatch_ovl_18_290a_0370 is an overlay dispatch alias for dispatch_ovl_18_290a_0370. */
/* 2120:16c4 dispatch_ovl_22_290a_0598 is an overlay dispatch alias for dispatch_ovl_22_290a_0598. */
/* 2120:16ce dispatch_ovl_10_252a_29e0 is an overlay dispatch alias for dispatch_ovl_10_252a_29e0. */
/* 2120:16d8 dispatch_ovl_23_290a_0668 is an overlay dispatch alias for dispatch_ovl_23_290a_0668. */
/* 2120:16e2 dispatch_ovl_24_290a_02b6 is an overlay dispatch alias for dispatch_ovl_24_290a_02b6. */
/* 2120:16ec dispatch_ovl_00_22dc_2350 is an overlay dispatch alias for dispatch_ovl_00_22dc_2350. */
/* 2120:16f6 dispatch_ovl_25_290a_04e0 is an overlay dispatch alias for dispatch_ovl_25_290a_04e0. */
/* 2120:1700 dispatch_ovl_26_290a_066e is an overlay dispatch alias for dispatch_ovl_26_290a_066e. */
/* 2120:170a dispatch_ovl_27_290a_0734 is an overlay dispatch alias for dispatch_ovl_27_290a_0734. */
/* 2120:1714 dispatch_ovl_28_290a_0820 is an overlay dispatch alias for dispatch_ovl_28_290a_0820. */
/* 2120:171e dispatch_ovl_10_252a_01c8 is an overlay dispatch alias for dispatch_ovl_10_252a_01c8. */
/* 2120:1728 dispatch_ovl_29_290a_068a is an overlay dispatch alias for dispatch_ovl_29_290a_068a. */
/* 2120:1732 dispatch_ovl_30_290a_0434 is an overlay dispatch alias for dispatch_ovl_30_290a_0434. */
/* 2120:173c dispatch_ovl_14_252a_00a4 is an overlay dispatch alias for dispatch_ovl_14_252a_00a4. */
/* 2120:1746 dispatch_ovl_31_290a_04cc is an overlay dispatch alias for dispatch_ovl_31_290a_04cc. */
/* 2120:1750 dispatch_ovl_32_290a_03d2 is an overlay dispatch alias for dispatch_ovl_32_290a_03d2. */
/* 2120:175a dispatch_ovl_33_290a_0c6c is an overlay dispatch alias for dispatch_ovl_33_290a_0c6c. */
/* 2120:1764 dispatch_ovl_34_290a_036e is an overlay dispatch alias for dispatch_ovl_34_290a_036e. */
/* 2120:176e dispatch_ovl_15_252a_193c is an overlay dispatch alias for dispatch_ovl_15_252a_193c. */
/* 2120:1778 dispatch_ovl_00_22dc_20fe is an overlay dispatch alias for dispatch_ovl_00_22dc_20fe. */
/* 2120:1782 dispatch_ovl_09_22dc_0555 is an overlay dispatch alias for dispatch_ovl_09_22dc_0555. */
/* 2120:178c dispatch_ovl_01_22dc_0000 is an overlay dispatch alias for dispatch_ovl_01_22dc_0000. */
/* 2120:1796 dispatch_ovl_00_22dc_0000 is an overlay dispatch alias for dispatch_ovl_00_22dc_0000. */
/* 2120:17a0 dispatch_ovl_50_290a_021a is an overlay dispatch alias for dispatch_ovl_50_290a_021a. */
/* 2120:17aa dispatch_ovl_14_252a_21bc is an overlay dispatch alias for dispatch_ovl_14_252a_21bc. */
/* 2120:17b4 dispatch_ovl_51_290a_012a is an overlay dispatch alias for dispatch_ovl_51_290a_012a. */
/* 2120:17be dispatch_ovl_14_252a_2132 is an overlay dispatch alias for dispatch_ovl_14_252a_2132. */
/* 2120:17c8 dispatch_ovl_14_252a_27e4 is an overlay dispatch alias for dispatch_ovl_14_252a_27e4. */
/* 2120:17d2 dispatch_ovl_14_252a_157e is an overlay dispatch alias for dispatch_ovl_14_252a_157e. */
/* 2120:17dc dispatch_ovl_40_290a_0000 is an overlay dispatch alias for dispatch_ovl_40_290a_0000. */
/* 2120:17e6 dispatch_ovl_14_252a_12be is an overlay dispatch alias for dispatch_ovl_14_252a_12be. */
/* 2120:17f0 dispatch_ovl_36_290a_0000 is an overlay dispatch alias for dispatch_ovl_36_290a_0000. */
/* 2120:17fa dispatch_ovl_14_252a_146c is an overlay dispatch alias for dispatch_ovl_14_252a_146c. */
/* 2120:1804 dispatch_ovl_35_290a_0000 is an overlay dispatch alias for dispatch_ovl_35_290a_0000. */
/* 2120:180e dispatch_ovl_14_252a_141a is an overlay dispatch alias for dispatch_ovl_14_252a_141a. */
/* 2120:1818 dispatch_ovl_37_290a_0000 is an overlay dispatch alias for dispatch_ovl_37_290a_0000. */
/* 2120:1822 dispatch_ovl_38_290a_0000 is an overlay dispatch alias for dispatch_ovl_38_290a_0000. */
/* 2120:182c dispatch_ovl_39_290a_0000 is an overlay dispatch alias for dispatch_ovl_39_290a_0000. */
/* 2120:1836 dispatch_ovl_41_290a_03f2 is an overlay dispatch alias for dispatch_ovl_41_290a_03f2. */
/* 2120:1840 dispatch_ovl_40_290a_010a is an overlay dispatch alias for dispatch_ovl_40_290a_010a. */
/* 2120:184a dispatch_ovl_42_290a_0000 is an overlay dispatch alias for dispatch_ovl_42_290a_0000. */
/* 2120:1854 dispatch_ovl_36_290a_0670 is an overlay dispatch alias for dispatch_ovl_36_290a_0670. */
/* 2120:185e dispatch_ovl_43_290a_0000 is an overlay dispatch alias for dispatch_ovl_43_290a_0000. */
/* 2120:1868 dispatch_ovl_35_290a_042e is an overlay dispatch alias for dispatch_ovl_35_290a_042e. */
/* 2120:1872 dispatch_ovl_44_290a_0000 is an overlay dispatch alias for dispatch_ovl_44_290a_0000. */
/* 2120:187c dispatch_ovl_37_290a_0132 is an overlay dispatch alias for dispatch_ovl_37_290a_0132. */
/* 2120:1886 dispatch_ovl_45_290a_050e is an overlay dispatch alias for dispatch_ovl_45_290a_050e. */
/* 2120:1890 dispatch_ovl_38_290a_03ce is an overlay dispatch alias for dispatch_ovl_38_290a_03ce. */
/* 2120:189a dispatch_ovl_46_290a_0000 is an overlay dispatch alias for dispatch_ovl_46_290a_0000. */
/* 2120:18a4 dispatch_ovl_39_290a_027a is an overlay dispatch alias for dispatch_ovl_39_290a_027a. */
/* 2120:18ae dispatch_ovl_47_290a_0000 is an overlay dispatch alias for dispatch_ovl_47_290a_0000. */
/* 2120:18b8 dispatch_ovl_41_290a_0b22 is an overlay dispatch alias for dispatch_ovl_41_290a_0b22. */
/* 2120:18c2 dispatch_ovl_48_290a_064c is an overlay dispatch alias for dispatch_ovl_48_290a_064c. */
/* 2120:18cc dispatch_ovl_42_290a_00e8 is an overlay dispatch alias for dispatch_ovl_42_290a_00e8. */
/* 2120:18d6 dispatch_ovl_49_290a_078a is an overlay dispatch alias for dispatch_ovl_49_290a_078a. */
/* 2120:18e0 dispatch_ovl_43_290a_039a is an overlay dispatch alias for dispatch_ovl_43_290a_039a. */
/* 2120:18ea dispatch_ovl_50_290a_0000 is an overlay dispatch alias for dispatch_ovl_50_290a_0000. */
/* 2120:18f4 dispatch_ovl_44_290a_00fe is an overlay dispatch alias for dispatch_ovl_44_290a_00fe. */
/* 2120:18fe dispatch_ovl_51_290a_0000 is an overlay dispatch alias for dispatch_ovl_51_290a_0000. */
/* 2120:1908 dispatch_ovl_45_290a_0d10 is an overlay dispatch alias for dispatch_ovl_45_290a_0d10. */
/* 2120:1912 dispatch_ovl_46_290a_0358 is an overlay dispatch alias for dispatch_ovl_46_290a_0358. */
/* 2120:191c dispatch_ovl_47_290a_0252 is an overlay dispatch alias for dispatch_ovl_47_290a_0252. */
/* 2120:1926 dispatch_ovl_40_290a_0502 is an overlay dispatch alias for dispatch_ovl_40_290a_0502. */
/* 2120:1930 dispatch_ovl_48_290a_1130 is an overlay dispatch alias for dispatch_ovl_48_290a_1130. */
/* 2120:193a dispatch_ovl_43_290a_0aa4 is an overlay dispatch alias for dispatch_ovl_43_290a_0aa4. */
/* 2120:1944 dispatch_ovl_49_290a_0f7a is an overlay dispatch alias for dispatch_ovl_49_290a_0f7a. */
/* 2120:194e dispatch_ovl_45_290a_04e4 is an overlay dispatch alias for dispatch_ovl_45_290a_04e4. */
/* 2120:1958 dispatch_ovl_02_22dc_050e is an overlay dispatch alias for dispatch_ovl_02_22dc_050e. */
/* 2120:1962 dispatch_ovl_02_22dc_0520 is an overlay dispatch alias for dispatch_ovl_02_22dc_0520. */
/* 2120:196c dispatch_ovl_02_22dc_0582 is an overlay dispatch alias for dispatch_ovl_02_22dc_0582. */
/* 2120:1976 dispatch_ovl_10_252a_0000 is an overlay dispatch alias for dispatch_ovl_10_252a_0000. */
/* 2120:1980 dispatch_ovl_14_252a_0000 is an overlay dispatch alias for dispatch_ovl_14_252a_0000. */
/* 2120:198a dispatch_ovl_00_22dc_163c is an overlay dispatch alias for dispatch_ovl_00_22dc_163c. */
/* 2120:1994 dispatch_ovl_04_22dc_07f6 is an overlay dispatch alias for dispatch_ovl_04_22dc_07f6. */
/* 2120:199e dispatch_ovl_14_252a_042a is an overlay dispatch alias for dispatch_ovl_14_252a_042a. */
/* 2120:19a8 dispatch_ovl_00_22dc_1364 is an overlay dispatch alias for dispatch_ovl_00_22dc_1364. */
/* 2120:19b2 dispatch_ovl_08_22dc_0000 is an overlay dispatch alias for dispatch_ovl_08_22dc_0000. */
/* 2120:19bc dispatch_ovl_00_22dc_13f2 is an overlay dispatch alias for dispatch_ovl_00_22dc_13f2. */
/* 2120:19c6 dispatch_ovl_00_22dc_1442 is an overlay dispatch alias for dispatch_ovl_00_22dc_1442. */
/* 2120:19d0 dispatch_ovl_13_2558_0000 is an overlay dispatch alias for dispatch_ovl_13_2558_0000. */
/* 2120:19da dispatch_ovl_03_22dc_00c2 is an overlay dispatch alias for dispatch_ovl_03_22dc_00c2. */
/* 2120:19e4 dispatch_ovl_13_2558_0002 is an overlay dispatch alias for dispatch_ovl_13_2558_0002. */
/* 2120:19ee dispatch_ovl_04_22dc_07b8 is an overlay dispatch alias for dispatch_ovl_04_22dc_07b8. */
/* 2120:19f8 dispatch_ovl_04_22dc_0818 is an overlay dispatch alias for dispatch_ovl_04_22dc_0818. */
/* 2120:1a02 dispatch_ovl_05_22dc_0000 is an overlay dispatch alias for dispatch_ovl_05_22dc_0000. */
/* 2120:1a0c dispatch_ovl_06_22dc_0000 is an overlay dispatch alias for dispatch_ovl_06_22dc_0000. */
/* 2120:1a16 dispatch_ovl_06_22dc_03c8 is an overlay dispatch alias for dispatch_ovl_06_22dc_03c8. */
/* 2120:1a20 dispatch_ovl_06_22dc_03d6 is an overlay dispatch alias for dispatch_ovl_06_22dc_03d6. */
/* 2120:1a2a dispatch_ovl_16_290a_04c2 is an overlay dispatch alias for dispatch_ovl_16_290a_04c2. */
/* 2120:1a34 dispatch_ovl_17_290a_0468 is an overlay dispatch alias for dispatch_ovl_17_290a_0468. */
/* 2120:1a3e dispatch_ovl_18_290a_0342 is an overlay dispatch alias for dispatch_ovl_18_290a_0342. */
/* 2120:1a48 dispatch_ovl_21_290a_0262 is an overlay dispatch alias for dispatch_ovl_21_290a_0262. */
/* 2120:1a52 dispatch_ovl_20_290a_0372 is an overlay dispatch alias for dispatch_ovl_20_290a_0372. */
/* 2120:1a5c dispatch_ovl_19_290a_0318 is an overlay dispatch alias for dispatch_ovl_19_290a_0318. */
/* 2120:1a66 dispatch_ovl_06_22dc_044a is an overlay dispatch alias for dispatch_ovl_06_22dc_044a. */
/* 2120:1a70 dispatch_ovl_07_22dc_0106 is an overlay dispatch alias for dispatch_ovl_07_22dc_0106. */
/* 2120:1a7a dispatch_ovl_07_22dc_0168 is an overlay dispatch alias for dispatch_ovl_07_22dc_0168. */
/* 2120:1a84 dispatch_ovl_07_22dc_016e is an overlay dispatch alias for dispatch_ovl_07_22dc_016e. */
/* 2120:1a8e dispatch_ovl_07_22dc_01f0 is an overlay dispatch alias for dispatch_ovl_07_22dc_01f0. */
/* 2120:1a98 dispatch_ovl_07_22dc_0216 is an overlay dispatch alias for dispatch_ovl_07_22dc_0216. */
/* 2120:1aa2 dispatch_ovl_07_22dc_0000 is an overlay dispatch alias for dispatch_ovl_07_22dc_0000. */
/* 2120:1aac dispatch_ovl_07_22dc_06f8 is an overlay dispatch alias for dispatch_ovl_07_22dc_06f8. */
/* 2120:1ab6 dispatch_ovl_07_22dc_0b46 is an overlay dispatch alias for dispatch_ovl_07_22dc_0b46. */
/* 2120:1ac0 dispatch_ovl_07_22dc_000e is an overlay dispatch alias for dispatch_ovl_07_22dc_000e. */
/* 2120:1aca dispatch_ovl_07_22dc_0702 is an overlay dispatch alias for dispatch_ovl_07_22dc_0702. */
/* 2120:1ad4 dispatch_ovl_07_22dc_001c is an overlay dispatch alias for dispatch_ovl_07_22dc_001c. */
/* 2120:1ade dispatch_ovl_07_22dc_004e is an overlay dispatch alias for dispatch_ovl_07_22dc_004e. */
/* 2120:1ae8 dispatch_ovl_07_22dc_0080 is an overlay dispatch alias for dispatch_ovl_07_22dc_0080. */
/* 2120:1af2 dispatch_ovl_07_22dc_00d8 is an overlay dispatch alias for dispatch_ovl_07_22dc_00d8. */
/* 2120:1afc dispatch_ovl_14_252a_14c6 is an overlay dispatch alias for dispatch_ovl_14_252a_14c6. */
/* 2120:1b06 dispatch_ovl_10_252a_262a is an overlay dispatch alias for dispatch_ovl_10_252a_262a. */
/* 2120:1b10 dispatch_ovl_10_252a_0316 is an overlay dispatch alias for dispatch_ovl_10_252a_0316. */
/* 2120:1b1a dispatch_ovl_11_252a_1326 is an overlay dispatch alias for dispatch_ovl_11_252a_1326. */
/* 2120:1b24 dispatch_ovl_11_252a_2438 is an overlay dispatch alias for dispatch_ovl_11_252a_2438. */
/* 2120:1b2e dispatch_ovl_11_252a_00fe is an overlay dispatch alias for dispatch_ovl_11_252a_00fe. */
/* 2120:1b38 dispatch_ovl_14_252a_0fb8 is an overlay dispatch alias for dispatch_ovl_14_252a_0fb8. */
/* 2120:1b42 dispatch_ovl_12_252a_36c2 is an overlay dispatch alias for dispatch_ovl_12_252a_36c2. */
/* 2120:1b4c dispatch_ovl_13_2558_00d4 is an overlay dispatch alias for dispatch_ovl_13_2558_00d4. */
/* 2120:1b56 dispatch_ovl_13_2558_0d62 is an overlay dispatch alias for dispatch_ovl_13_2558_0d62. */
/* 2120:1b60 dispatch_ovl_13_2558_0066 is an overlay dispatch alias for dispatch_ovl_13_2558_0066. */
/* 2120:1b6a dispatch_ovl_14_252a_2886 is an overlay dispatch alias for dispatch_ovl_14_252a_2886. */
/* 2120:1b74 dispatch_ovl_14_252a_291e is an overlay dispatch alias for dispatch_ovl_14_252a_291e. */
/* 2120:1b7e dispatch_ovl_14_252a_2808 is an overlay dispatch alias for dispatch_ovl_14_252a_2808. */

/* 2120:1b88 FUN_2120_1b88 */

void __cdecl16far FUN_2120_1b88(void)

{
  return;
}



/* 22d8:000a FUN_22d8_000a */

undefined2 __cdecl16far FUN_22d8_000a(void)

{
  undefined2 in_stack_00000000;
  
  FUN_22d8_001c();
  return in_stack_00000000;
}



/* 22d8:001c FUN_22d8_001c */

void FUN_22d8_001c(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  byte in_stack_00000000;
  
  FUN_22d8_0023();
  FUN_22d8_0030();
  bVar2 = (in_stack_00000000 & 0xf) + 0x90;
  in_AF = 9 < (bVar2 & 0xf) | in_AF;
  bVar1 = 0x99 < bVar2 || 0x6f < (in_stack_00000000 & 0xf);
  bVar3 = bVar2 + in_AF * '\x06' + bVar1 * '`';
  bVar2 = bVar3 + 0x40;
  bVar4 = bVar2 + bVar1;
  *unaff_DI = bVar4 + (9 < (bVar4 & 0xf) | in_AF) * '\x06' +
              (0x99 < bVar4 || (0xbf < bVar3 || CARRY1(bVar2,bVar1))) * '`';
  return;
}



/* 22d8:0023 FUN_22d8_0023 */

void FUN_22d8_0023(void)

{
  bool bVar1;
  byte in_AL;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  FUN_22d8_0030();
  bVar2 = (in_AL & 0xf) + 0x90;
  in_AF = 9 < (bVar2 & 0xf) | in_AF;
  bVar1 = 0x99 < bVar2 || 0x6f < (in_AL & 0xf);
  bVar3 = bVar2 + in_AF * '\x06' + bVar1 * '`';
  bVar2 = bVar3 + 0x40;
  bVar4 = bVar2 + bVar1;
  *unaff_DI = bVar4 + (9 < (bVar4 & 0xf) | in_AF) * '\x06' +
              (0x99 < bVar4 || (0xbf < bVar3 || CARRY1(bVar2,bVar1))) * '`';
  return;
}



/* 22d8:0030 FUN_22d8_0030 */

void __cdecl16near FUN_22d8_0030(void)

{
  bool bVar2;
  byte bVar1;
  byte in_AL;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  bVar3 = (in_AL & 0xf) + 0x90;
  bVar1 = 9 < (bVar3 & 0xf) | in_AF;
  bVar2 = 0x99 < bVar3 || 0x6f < (in_AL & 0xf);
  bVar4 = bVar3 + bVar1 * '\x06' + bVar2 * '`';
  bVar3 = bVar4 + 0x40;
  bVar5 = bVar3 + bVar2;
  *unaff_DI = bVar5 + (9 < (bVar5 & 0xf) | bVar1) * '\x06' +
              (0x99 < bVar5 || (0xbf < bVar4 || CARRY1(bVar3,bVar2))) * '`';
  return;
}


