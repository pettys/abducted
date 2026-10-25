/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_14::0252a0 ovl_14_entry_252a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_14_entry_252a_0000(void)

{
  _DAT_2a22_facc = 0;
  _DAT_2a22_face = 0;
  _DAT_2a22_fad0 = 0;
  _DAT_2a22_fad2 = 0;
  _DAT_2a22_fad4 = 0;
  _DAT_2a22_fad6 = 4;
  _DAT_2a22_fad8 = 0x28;
  _DAT_2a22_fada = 0;
  _DAT_3000_d11d = 0;
  _DAT_3000_d11f = 2;
  _DAT_3000_aaa2 = 0;
  _DAT_3000_aad5 = 0;
  _DAT_3000_aae1 = 0;
  _DAT_3000_ab73 = 0;
  _DAT_3000_ab9d = 3;
  if (_DAT_2a22_e32c < 2) {
    _DAT_3000_aad1 = 0;
  }
  else {
    _DAT_3000_aad1 = 2;
  }
  _DAT_2a22_bd4c = 1;
  _DAT_2a22_bd60 = 1;
  _DAT_2a22_4a3c = 0;
  _DAT_3000_aaa4 = 0;
  DAT_3000_aaa6 = 0;
  DAT_3000_aaa7 = 0;
  _DAT_3000_ab71 = 0;
  _DAT_3000_ab25 = 2;
  _DAT_3000_abbf = 0xffff;
  _DAT_3000_ab29 = 7;
  return;
}



/* ovl_14::025344 ovl_14_entry_252a_00a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __cdecl16far ovl_14_entry_252a_00a4(void)

{
  undefined1 local_6 [2];
  uint local_4;
  
  DAT_2a22_8f11 = 1;
  FUN_1505_0006();
  thunk_EXT_FUN_0000_0000(0x1505,0x366,0);
  FUN_17ba_04ea(0x796c,0,0x100);
  if (_DAT_3000_ca31 == 0) {
    _DAT_2a22_bd4c = 1;
    _DAT_2a22_bd60 = 1;
    _DAT_2a22_4a3c = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1808,0);
  }
  _DAT_3000_aed1 = FUN_1951_0192(0x7975);
  if (_DAT_2a22_bd78 < 2) {
    FUN_1897_0af2(0);
  }
  do {
    while( true ) {
      local_4 = (uint)DAT_3000_aaa7;
      if (DAT_3000_aaa7 == 3) {
        FUN_1505_18a0(_DAT_2a22_e32f + 0xe,4);
      }
      if (_DAT_2a22_9462 != 0) {
        dispatch_ovl_04_22dc_0818();
        _DAT_3000_a3b6 = 0;
        _DAT_3000_aad5 = 0;
        ovl_14_entry_252a_21bc();
      }
      dispatch_ovl_11_252a_00fe();
      if ((1 < _DAT_2a22_e32c) && (ovl_14_entry_252a_14c6(), _DAT_2a22_bd78 < 2)) {
        FUN_1897_0af2(1);
      }
      DAT_2a22_5b2f = (DAT_2a22_e326 == DAT_2a22_46f4) + '\x01';
      ovl_14_entry_252a_0000();
      FUN_186e_000c(_DAT_2a22_e32c);
      FUN_132b_0006();
      if (local_4 == 2) {
        FUN_ovl_14__026138();
      }
      if (DAT_2a22_46ee != '\0') {
        FUN_1090_00a6(local_6,local_6);
      }
      FUN_1951_02ac();
      do {
        if (DAT_2a22_e326 == DAT_2a22_46f4) {
          FUN_17ba_060e();
        }
        FUN_ovl_14__0268ca();
        FUN_132b_064a();
        FUN_ovl_14__026d3e();
        FUN_1697_109e();
        FUN_ovl_14__0276b2();
        FUN_132b_08f2();
        FUN_1697_03de();
        FUN_1090_0002();
      } while (DAT_3000_aaa7 == 0);
      if ((_DAT_3000_aad5 != 0) && (DAT_3000_aaa7 != 4)) {
        _DAT_3000_aad5 = 0;
        ovl_14_entry_252a_21bc();
      }
      FUN_19c7_4f54(0x1090,_DAT_3000_aed3);
      if (DAT_3000_aaa7 != 2) break;
      FUN_ovl_14__025a8e();
      if (DAT_3000_aaa7 != 2) goto LAB_ovl_14__0254eb;
    }
    if (DAT_3000_aaa7 == 4) {
      FUN_ovl_14__025e8c();
      break;
    }
  } while (DAT_3000_aaa7 == 5);
LAB_ovl_14__0254eb:
  _DAT_3000_a3b6 = 0;
  _DAT_3000_aad3 = 0;
  thunk_EXT_FUN_0000_0000(0x19c7,0);
  DAT_2a22_5b2f = 0;
  FUN_19c7_4f54(0x1eea,_DAT_3000_aed1);
  if (_DAT_2a22_bd7c == 0) {
    FUN_19c7_4f54(0x19c7,_DAT_3000_ab2d);
    _DAT_3000_ca31 = 0;
  }
  return DAT_3000_aaa7;
}



/* ovl_14::02582c FUN_ovl_14__02582c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_14__02582c(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int local_a;
  int *local_8;
  int local_4;
  
  local_a = 0x7fff;
  local_4 = 0;
  local_8 = (int *)&DAT_2a22_e5d0;
  iVar3 = 0;
  do {
    iVar1 = *local_8 - _DAT_2a22_e39b;
    uVar2 = FUN_1edc_000e(local_8[1] - _DAT_2a22_e5a6,local_8[2] - _DAT_2a22_e5aa,0,0);
    iVar1 = FUN_1edc_000e(iVar1,uVar2);
    if ((iVar1 <= local_a) && ('\x01' < (char)local_8[5])) {
      local_a = iVar1;
      local_4 = iVar3;
    }
    local_8 = local_8 + 0x19;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x13);
  if (param_1 < local_a) {
    return -1;
  }
  _DAT_2a22_e331 = 2;
  return (int)(char)((undefined *)&DAT_2a22_e5da)[local_4 * 0x32];
}



/* ovl_14::0258d8 FUN_ovl_14__0258d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_14__0258d8(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  char cVar4;
  int local_6;
  
  local_6 = -1;
  iVar1 = FUN_19c7_4e32();
  iVar2 = _DAT_2a22_bd7a;
  if (iVar1 % 4 != 0) {
    return -1;
  }
  _DAT_2a22_e331 = 3;
  if (_DAT_2a22_bd7a != 0) {
    _DAT_2a22_bd7a = 0;
    return iVar2;
  }
  iVar2 = FUN_19c7_4e32();
  cVar4 = (char)(iVar2 % 0x3f);
  if (_DAT_2a22_e5c2 == 1) {
    if (cVar4 < '\x05') {
      local_6 = 2;
    }
    else if (cVar4 < '\n') {
      local_6 = 3;
    }
    if (('\t' < cVar4) && (cVar4 < '\x10')) {
      local_6 = 4;
    }
    if (('\x0f' < cVar4) && (cVar4 < '\x15')) {
      local_6 = 5;
    }
    if (('\x14' < cVar4) && (cVar4 < '\x1a')) {
      local_6 = 6;
    }
    if (('\x19' < cVar4) && (cVar4 < ' ')) {
      local_6 = 7;
    }
    if (cVar4 < ' ') goto LAB_ovl_14__0259aa;
    uVar3 = 0x3c;
  }
  else {
    if (_DAT_2a22_e5c2 != 2) goto LAB_ovl_14__0259aa;
    if ((-1 < cVar4) && (cVar4 < '\x03')) {
      local_6 = 8;
    }
    if (('\x02' < cVar4) && (cVar4 < '\a')) {
      local_6 = 9;
    }
    if (('\x06' < cVar4) && (cVar4 < '\n')) {
      local_6 = 10;
    }
    if (('\t' < cVar4) && (cVar4 < '\r')) {
      local_6 = 2;
    }
    if (('\f' < cVar4) && (cVar4 < '\x10')) {
      local_6 = 3;
    }
    if (('\x0f' < cVar4) && (cVar4 < '\x13')) {
      local_6 = 0xc;
    }
    if (('\x15' < cVar4) && (cVar4 < '\x19')) {
      local_6 = 0xf;
    }
    if (('\x18' < cVar4) && (cVar4 < '\x1c')) {
      local_6 = 0x11;
    }
    if (('\x1b' < cVar4) && (cVar4 < ' ')) {
      local_6 = 0x12;
    }
    if (cVar4 < ' ') goto LAB_ovl_14__0259aa;
    uVar3 = 0x96;
  }
  local_6 = FUN_ovl_14__02582c(uVar3);
LAB_ovl_14__0259aa:
  if ((local_6 != -1) &&
     ((iVar2 = FUN_1000_08be(local_6), iVar2 == 0 || (*(char *)(local_6 * 0x1d + -0x60e5) != '\0')))
     ) {
    local_6 = -1;
  }
  if (local_6 == 0xd) {
    local_6 = -1;
  }
  return local_6;
}



/* ovl_14::025a8e FUN_ovl_14__025a8e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__025a8e(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_SI;
  int local_1c;
  char local_1a;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  uint local_10;
  int local_e;
  uint local_c;
  uint local_8;
  int local_6;
  
  FUN_1951_017a(0x10);
  FUN_1505_02b8();
  *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 10;
  _DAT_3000_a3be = 200;
  _DAT_3000_aad3 = 0xbe;
  FUN_1505_18a0(0x79d6,8);
  FUN_ovl_14__02604e(3,0,0);
  FUN_1951_017a(0x11);
  FUN_ovl_14__02604e(3,0,0);
  local_e = FUN_1edc_0079(*_DAT_2a22_e5c0 - _DAT_2a22_e39b,_DAT_2a22_e5c0[1] - _DAT_2a22_e5a6,
                          _DAT_2a22_e5c0[2] - _DAT_2a22_e5aa);
  iVar1 = local_e / 0x32;
  local_e = local_e % 0x32;
  if (iVar1 != 0) {
    local_14 = local_e / iVar1 >> 1;
    local_e = local_e - iVar1 * local_14;
  }
  local_1a = -0x69;
  local_1c = 0;
  do {
    local_1a = local_1a + ((undefined *)&DAT_3000_d750)[local_1c];
    local_1c = local_1c + 1;
  } while (local_1c < 0x40);
  if (((local_1a != '\0') || (iVar2 = FUN_19c7_486a(0xf0e2), iVar2 < 3)) ||
     (iVar2 = FUN_19c7_483e(0xf0e2,0xf101), iVar2 != 0)) {
    do {
      dispatch_ovl_05_22dc_0000();
    } while( true );
  }
  local_8 = _DAT_2a22_e39b << 4;
  local_c = _DAT_2a22_e5a6 << 4;
  local_10 = _DAT_2a22_e5aa << 4;
  local_14 = local_14 + 0x32;
  local_6 = 0;
  do {
    if (iVar1 <= local_6) {
      FUN_ovl_14__02604e(3,0,local_e);
      iVar1 = FUN_ovl_14__0261f0(local_e);
      if (iVar1 != 0) {
        _DAT_2a22_e39b = *_DAT_2a22_e5c0;
        _DAT_2a22_e5a6 = _DAT_2a22_e5c0[1];
        _DAT_2a22_e5aa = _DAT_2a22_e5c0[2];
        _DAT_2a22_e331 = (uint)(*(char *)((int)_DAT_2a22_e5c0 + 0x31) != '\x02');
        if (*(char *)((int)_DAT_2a22_e5c0 + 0x2f) == '\0') {
          _DAT_2a22_e32c = (int)(char)_DAT_2a22_e5c0[5];
        }
        else {
          _DAT_2a22_e32c = 0;
        }
        if (*(char *)((char)_DAT_2a22_e5c0[6] * 0x24 + -0x5075) != -1) {
          _DAT_2a22_e32c = 0;
        }
        _DAT_2a22_e333 = 0;
        DAT_2a22_a5bd = DAT_2a22_a5bc;
        _DAT_2a22_e32f = (undefined *)&DAT_2a22_e5d0 + DAT_2a22_a5bc * 0x32;
        *(undefined1 *)((int)_DAT_2a22_e5c0 + 0xd) =
             ((undefined *)&DAT_2a22_bd82)[(char)_DAT_2a22_e5c0[5]];
        if (_DAT_2a22_e32c == 1) {
          DAT_3000_aaa7 = 7;
        }
        else {
          FUN_ovl_14__025fa8(0);
          *(undefined1 *)((int)_DAT_2a22_e5c0 + 0x2d) = 1;
        }
        FUN_ovl_14__0264dc();
      }
      return;
    }
    local_12 = *_DAT_2a22_e5c0 * 0x10 - local_8;
    local_16 = _DAT_2a22_e5c0[1] * 0x10 - local_c;
    local_18 = _DAT_2a22_e5c0[2] * 0x10 - local_10;
    if (iVar1 == 1) {
      local_12 = local_12 >> 1;
      local_16 = local_16 >> 1;
      local_18 = local_18 >> 1;
      local_14 = local_14 >> 1;
      local_e = local_e + local_14;
    }
    FUN_ovl_14__02604e(1,0,local_14);
    iVar2 = FUN_ovl_14__0261f0(local_14);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar1 - local_6;
    local_8 = local_8 + local_12 / iVar2;
    local_c = local_c + local_16 / iVar2;
    local_10 = local_10 + local_18 / iVar2;
    uVar3 = (int)local_8 >> 0xf;
    _DAT_2a22_e39b = ((int)((local_8 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3;
    uVar3 = (int)local_c >> 0xf;
    _DAT_2a22_e5a6 = ((int)((local_c ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3;
    uVar3 = (int)local_10 >> 0xf;
    _DAT_2a22_e5aa = ((int)((local_10 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3;
    _DAT_2a22_e333 = 2;
    _DAT_2a22_e32c = FUN_ovl_14__0258d8();
    if (_DAT_2a22_e32c != -1) {
      if (_DAT_2a22_e5c2 == 1) {
        unaff_SI = dispatch_ovl_06_22dc_0000(_DAT_2a22_e32c + -2);
      }
      else if (_DAT_2a22_e5c2 == 2) {
        unaff_SI = dispatch_ovl_07_22dc_0b46(_DAT_2a22_e32c + -2);
      }
      if (unaff_SI == 0) {
        iVar2 = FUN_ovl_14__025de2();
        if (iVar2 == 0) goto LAB_ovl_14__025d0d;
      }
      else if ((iVar1 == 1) || (iVar1 + -1 != local_6)) {
        _DAT_2a22_9550 = 0;
LAB_ovl_14__025d0d:
        FUN_ovl_14__025fa8(1);
        return;
      }
    }
    local_6 = local_6 + 1;
  } while( true );
}



/* ovl_14::025de2 FUN_ovl_14__025de2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_14__025de2(void)

{
  undefined2 uVar1;
  int iVar2;
  
  ovl_14_entry_252a_14c6();
  FUN_132b_0006();
  uVar1 = _DAT_2a22_bd78;
  _DAT_3000_aad1 = 2;
  _DAT_2a22_bd78 = 3;
  FUN_1951_017a(0x13);
  _DAT_3000_aad3 = 0x6e;
  _DAT_3000_a3b6 = 0xb4;
  _DAT_3000_a3be = 200;
  FUN_1505_18a0(0x79e8,4);
  iVar2 = FUN_ovl_14__02604e(4,1,0);
  if (iVar2 != 0) {
    FUN_1951_017a(0x11);
  }
  FUN_1505_18a0(0x7a12,0);
  _DAT_2a22_bd78 = uVar1;
  FUN_1505_02b8();
  _DAT_3000_a3b6 = 0xbe;
  _DAT_3000_aad3 = 0xbe;
  FUN_19c7_4f54(0x1505,_DAT_3000_aed3);
  return iVar2;
}



/* ovl_14::025e8c FUN_ovl_14__025e8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__025e8c(void)

{
  int iVar1;
  bool bVar2;
  int local_6;
  char local_4;
  
  FUN_1951_017a(0x10);
  *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0xaa;
  _DAT_3000_a3be = 200;
  _DAT_3000_aad3 = 0xaa;
  FUN_1897_01ac(_DAT_2a22_bd72,0,0,0,0,0,0,0);
  FUN_ovl_14__02604e(3,0,0);
  FUN_1951_017a(0x11);
  FUN_ovl_14__02604e(7,0,0);
  FUN_1951_017a(0x12);
  _DAT_3000_aad3 = 10;
  FUN_ovl_14__02604e(3,0,0);
  _DAT_2a22_e331 = 2;
  _DAT_2a22_e32c = 1;
  _DAT_2a22_fac5 = 0;
  FUN_1000_07a6();
  bVar2 = 0xf82f < _DAT_2a22_ded0;
  _DAT_2a22_ded0 = _DAT_2a22_ded0 + 2000;
  _DAT_2a22_ded2 = _DAT_2a22_ded2 + (uint)bVar2;
  local_4 = -0x69;
  local_6 = 0;
  do {
    local_4 = local_4 + ((undefined *)&DAT_3000_d750)[local_6];
    local_6 = local_6 + 1;
  } while (local_6 < 0x40);
  if (local_4 == '\0') {
    iVar1 = FUN_19c7_486a(0xf0e2);
    if (2 < iVar1) {
      iVar1 = FUN_19c7_483e(0xf0e2,0xf101);
      if (iVar1 == 0) {
        dispatch_ovl_10_252a_01c8();
        FUN_1090_064e();
        FUN_1090_06b4();
        _DAT_2a22_e333 = 0;
        DAT_3000_aaa7 = 8;
        return;
      }
    }
  }
  do {
    dispatch_ovl_05_22dc_0000();
  } while( true );
}



/* ovl_14::025fa8 FUN_ovl_14__025fa8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__025fa8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    if (((_DAT_2a22_e32c != 1) &&
        ((_DAT_2a22_e32c < 2 || (*(char *)(_DAT_2a22_e32c * 0x1d + -0x60e3) == '\0')))) &&
       ((0 < _DAT_2a22_e32c || (*(char *)(_DAT_2a22_e32f + 0x2e) == '\0')))) {
      puVar2 = (undefined *)0x7a40;
      goto LAB_ovl_14__026043;
    }
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,0x7a36);
    iVar1 = _DAT_2a22_e5c0 + 0xe;
  }
  else {
    if (*(char *)(_DAT_2a22_e32c * 0x1d + -0x60e3) == '\0') {
      puVar2 = (undefined *)0x7a1e;
      goto LAB_ovl_14__026043;
    }
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,*(undefined2 *)(_DAT_2a22_e32c * 2 + 0x2e6));
    iVar1 = 0x7a13;
  }
  FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,iVar1);
  puVar2 = (undefined *)&DAT_2a22_f1ba;
LAB_ovl_14__026043:
  FUN_1505_18a0(puVar2,4);
  return;
}



/* ovl_14::02604e FUN_ovl_14__02604e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_14__02604e(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 in_AX;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar1 = _DAT_2a22_fac8;
  if (param_1 != 0) {
    iVar2 = param_1 * _DAT_2a22_fad6;
    for (local_8 = 0; local_8 < iVar2; local_8 = local_8 + 1) {
      FUN_1897_01ac(_DAT_2a22_bd72,0,0,0,0,0,0,0);
      FUN_11e1_129e();
      if (_DAT_3000_aad5 == 0) {
        FUN_1505_140c(0x12db);
      }
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        FUN_17ba_060e();
      }
      if (param_2 != 0) {
        FUN_1505_03d4();
      }
      FUN_1090_0002();
      if (0xbd < *(uint *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c)) {
        FUN_1505_18a0(0x7a58,param_1 + 1);
      }
      FUN_1697_109e();
      FUN_1090_1428(0x1697);
      iVar3 = FUN_1697_03bc(((iVar2 >> 1) + param_3) / iVar2);
      _DAT_2a22_fac8 = _DAT_2a22_fac8 - iVar3;
      if (_DAT_2a22_fac8 < 0) break;
      iVar3 = FUN_1951_00ea();
      if (iVar3 != 0) {
        _DAT_2a22_fac8 = iVar1;
        return 0;
      }
    }
    in_AX = 1;
  }
  _DAT_2a22_fac8 = iVar1;
  return in_AX;
}



/* ovl_14::026138 FUN_ovl_14__026138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__026138(void)

{
  long lVar1;
  int local_6;
  
  _DAT_3000_a3b6 = 0xbe;
  _DAT_3000_a3be = 0xbe;
  FUN_1951_017a(0x12);
  _DAT_3000_aad3 = 10;
  local_6 = _DAT_2a22_fad6 * 10;
  lVar1 = (long)local_6;
  while (local_6 = local_6 + -1, -1 < local_6) {
    FUN_1897_01ac(_DAT_2a22_bd72,0,0,0,0,-local_6 * (int)(0x7fff / lVar1),0,0);
    FUN_11e1_129e();
    FUN_132b_01be();
    FUN_1897_01ee();
    if (_DAT_3000_aad5 == 0) {
      FUN_1505_140c(0x1897);
    }
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      FUN_17ba_060e();
    }
    FUN_1090_0002();
    FUN_1697_109e();
    FUN_1090_1428(0x1697);
  }
  _DAT_3000_a3b6 = 0;
  _DAT_3000_aad3 = 0;
  FUN_1697_0048();
  return;
}



/* ovl_14::0261f0 FUN_ovl_14__0261f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_14__0261f0(int param_1)

{
  int iVar1;
  
  _DAT_2a22_e5ac = param_1;
  if (_DAT_2a22_e5c2 == 1) {
    dispatch_ovl_06_22dc_03c8();
  }
  else if (_DAT_2a22_e5c2 == 2) {
    dispatch_ovl_07_22dc_06f8();
  }
  _DAT_2a22_fac5 = _DAT_2a22_fac5 + param_1;
  iVar1 = FUN_1697_03bc(param_1);
  _DAT_2a22_fac8 = _DAT_2a22_fac8 - iVar1;
  if (_DAT_2a22_fac8 < 0) {
    _DAT_2a22_fac8 = 0;
    _DAT_2a22_e32c = 0;
    _DAT_2a22_e331 = 3;
    FUN_1505_18a0(0x7a6a,4);
    return 0;
  }
  return 1;
}



/* ovl_14::026258 ovl_14_entry_252a_0fb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far ovl_14_entry_252a_0fb8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_2a22_bd74 == '\0') {
    if (DAT_2a22_9852 == '\0') {
      if (((_DAT_2a22_a2c6 == 0) && (_DAT_2a22_a2dc == 0)) && (_DAT_2a22_a2f2 == 0)) {
        uVar3 = 4;
        uVar1 = 0x7ace;
      }
      else {
        uVar3 = 3;
        uVar1 = 0x7aaa;
      }
    }
    else if ((((DAT_2a22_a5bc == DAT_2a22_a5bd) && (*_DAT_2a22_e5c0 == _DAT_2a22_e39b)) &&
             (_DAT_2a22_e5c0[1] == _DAT_2a22_e5a6)) && (_DAT_2a22_e5c0[2] == _DAT_2a22_e5aa)) {
      uVar3 = 3;
      uVar1 = 0x7aeb;
    }
    else if (_DAT_2a22_fac8 == 0) {
      uVar3 = 4;
      uVar1 = 0x7b03;
    }
    else {
      if ((_DAT_2a22_e333 != 2) || (param_1 != 0)) {
        if (param_1 != 0) {
          if (_DAT_2a22_e333 == 2) {
            DAT_2a22_e56e = DAT_2a22_e56e + '\x06';
          }
          iVar5 = 0;
          for (iVar4 = 0; iVar4 < 10; iVar4 = iVar4 + 1) {
            iVar2 = FUN_1090_11ba(1,iVar4,iVar5);
            if (iVar2 == 0) {
              iVar5 = iVar5 + 1;
              FUN_1951_017a(10);
            }
            FUN_1697_0048();
            FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,0x7b42);
            uVar1 = FUN_19c7_48e8(iVar5,0xa176,10);
            FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar1);
            FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x7b43);
            FUN_1505_18a0((undefined *)&DAT_2a22_f1ba,4);
            thunk_EXT_FUN_0000_0000(0x1505,0x1e);
            FUN_1951_017a(0xf);
            FUN_1951_0006(0x1e);
          }
        }
        DAT_3000_aaa7 = 2;
        return 1;
      }
      uVar3 = 4;
      uVar1 = 0x7b1f;
    }
    FUN_1505_18a0(uVar1,uVar3);
  }
  else {
    DAT_2a22_bd74 = '\0';
    FUN_1505_18a0(0x7a87,4);
    thunk_EXT_FUN_0000_0000(0x1505,0xb4);
    FUN_1090_11ba(10);
    FUN_1697_0048();
    FUN_1951_0006(0xb4);
  }
  return 0;
}



/* ovl_14::02640a FUN_ovl_14__02640a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__02640a(void)

{
  char *pcVar1;
  int iVar2;
  
  if (1 < _DAT_2a22_e32c) {
    if (1 < _DAT_2a22_e333) {
      iVar2 = _DAT_2a22_e32c * 0x1d;
      pcVar1 = (char *)(iVar2 + -0x60e8);
      *pcVar1 = *pcVar1 + '\x01';
      *(undefined1 *)(iVar2 + -0x60e7) = 0;
    }
    if ((DAT_3000_aaa6 != '\0') && (_DAT_2a22_e333 != 4)) {
      if (_DAT_2a22_e331 == 0) {
        pcVar1 = (char *)(_DAT_2a22_e32c * 0x1d + -0x60eb);
        *pcVar1 = *pcVar1 + '\x01';
        pcVar1 = (char *)(_DAT_2a22_e32c * 0x17 + -0x524b);
        *pcVar1 = *pcVar1 + '\x01';
      }
      else if (_DAT_2a22_e331 == 1) {
        pcVar1 = (char *)(_DAT_2a22_e32c * 0x1d + -0x60ea);
        *pcVar1 = *pcVar1 + '\x01';
        pcVar1 = (char *)(_DAT_2a22_e32c * 0x17 + -0x524c);
        *pcVar1 = *pcVar1 + '\x01';
      }
      else if ((1 < _DAT_2a22_e331) && (_DAT_2a22_e331 < 4)) {
        pcVar1 = (char *)(_DAT_2a22_e32c * 0x1d + -0x60e9);
        *pcVar1 = *pcVar1 + '\x01';
        pcVar1 = (char *)(_DAT_2a22_e32c * 0x17 + -0x524a);
        *pcVar1 = *pcVar1 + '\x01';
      }
      if (_DAT_2a22_e5c2 == 2) {
        dispatch_ovl_07_22dc_0702(_DAT_2a22_e32c + -2,_DAT_2a22_e331);
      }
    }
    if (_DAT_2a22_e5c2 == 1) {
      dispatch_ovl_06_22dc_03d6();
      return;
    }
  }
  return;
}



/* ovl_14::0264dc FUN_ovl_14__0264dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__0264dc(void)

{
  int local_4;
  
  if (_DAT_2a22_a5d0 != 0) {
    local_4 = 0;
    do {
      if (*(char *)(DAT_2a22_a5bd * 0xb + local_4 + -0x54bc) == '\x14') {
        DAT_3000_aaa7 = 1;
      }
      local_4 = local_4 + 1;
    } while (local_4 < 0xb);
  }
  return;
}



/* ovl_14::02651c FUN_ovl_14__02651c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_14__02651c(int param_1)

{
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (_DAT_2a22_e5c4 <= local_4) {
      return 0;
    }
    if (((char)((undefined *)&DAT_2a22_e5da)[local_4 * 0x32] == param_1) &&
       (((undefined *)&DAT_2a22_e5ff)[local_4 * 0x32] == '\0')) break;
    local_4 = local_4 + 1;
  }
  return 1;
}



/* ovl_14::02655e ovl_14_entry_252a_12be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_14_entry_252a_12be(undefined2 param_1)

{
  int iVar1;
  int local_4;
  
  if (DAT_3000_aaa6 == '\0') {
    DAT_3000_aaa6 = '\x01';
    if ((_DAT_2a22_e331 < 2) && (_DAT_2a22_e32c != 0xb)) {
      *(undefined1 *)(_DAT_2a22_e32f + 0x2f) = 1;
      *(undefined1 *)(_DAT_2a22_e32f + 0x31) = 0xff;
      *(undefined1 *)(*(char *)(_DAT_2a22_e32f + 0xc) * 0x24 + -0x5075) = 0xff;
      FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,0x7b54);
      iVar1 = FUN_19c7_48ae(0x7b5c,_DAT_2a22_e32f + 0xe,4);
      if (iVar1 == 0) {
        iVar1 = _DAT_2a22_e32f + 0x12;
      }
      else {
        iVar1 = _DAT_2a22_e32f + 0xe;
      }
      FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,iVar1);
      FUN_19c7_4886(_DAT_2a22_e32f + 0xe,(undefined *)&DAT_2a22_f1ba,0x1e);
      *(undefined1 *)(_DAT_2a22_e32f + 0x2b) = 0;
    }
    if (_DAT_3000_aad5 != 0) {
      _DAT_3000_aad5 = 0;
      ovl_14_entry_252a_21bc();
    }
    FUN_1505_18a0(param_1,4);
    FUN_1951_017a(0x18);
    if (_DAT_2a22_e333 == 3) {
      iVar1 = _DAT_3000_abbb;
    }
    else {
      iVar1 = _DAT_3000_aaa4;
    }
    iVar1 = iVar1 / 100;
    local_4 = FUN_14b9_02b2(iVar1);
    local_4 = local_4 + (_DAT_3000_ab9f >> 1);
    if (iVar1 < local_4) {
      local_4 = iVar1;
    }
    FUN_1697_11f2(local_4);
    if (_DAT_2a22_e331 < 2) {
      _DAT_2a22_fac8 = 500;
    }
    if (_DAT_2a22_e32c == 0xb) {
      _DAT_2a22_e333 = 4;
    }
    else {
      _DAT_2a22_e333 = 3;
    }
    if (_DAT_2a22_bd7c == 0) {
      FUN_ovl_14__02640a();
    }
    FUN_1951_02ac();
    _DAT_2a22_e333 = 0;
    _DAT_2a22_e32c = 0;
  }
  return;
}



/* ovl_14::0266ba ovl_14_entry_252a_141a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far ovl_14_entry_252a_141a(void)

{
  undefined2 uVar1;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (_DAT_3000_aaa8 <= local_4) {
      if (_DAT_2a22_e333 == 3) {
        uVar1 = 0x7b61;
      }
      else {
        uVar1 = 0x7b83;
      }
      ovl_14_entry_252a_12be(uVar1);
      return 1;
    }
    if ((byte)((undefined *)&DAT_3000_a3cd)[local_4 * 0x3c] == _DAT_2a22_e32c) break;
    local_4 = local_4 + 1;
  }
  return 0;
}



/* ovl_14::02670c ovl_14_entry_252a_146c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_14_entry_252a_146c(void)

{
  int local_6;
  int local_4;
  
  for (local_6 = 0; local_6 < 2; local_6 = local_6 + 1) {
    for (local_4 = 0; local_4 < _DAT_3000_aaa8; local_4 = local_4 + 1) {
      if (((((undefined *)&DAT_3000_a3cd)[local_4 * 0x3c] & 0x80) == 0) &&
         ((((undefined *)&DAT_3000_a3cd)[local_4 * 0x3c] & 0x7f) != 1)) {
        FUN_132b_0466(local_4);
      }
    }
  }
  return;
}



/* ovl_14::026766 ovl_14_entry_252a_14c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_14_entry_252a_14c6(void)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = *(int *)(_DAT_2a22_e32c * 2 + 0x7946);
  if (iVar1 != 0) {
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,iVar1);
    if (_DAT_2a22_e32c == 2) {
      if (_DAT_2a22_e331 < 2) {
        uVar2 = 0x7baa;
      }
      else {
        uVar2 = 0x7bac;
      }
      FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar2);
    }
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x7bae);
    FUN_1951_0086((undefined *)&DAT_2a22_f1ba,0x7bb1);
    _DAT_3000_aed3 = FUN_1951_0192((undefined *)&DAT_2a22_f1ba);
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      FUN_1951_0086((undefined *)&DAT_2a22_f1ba,0x7bb6);
      FUN_17ba_04ea((undefined *)&DAT_2a22_f1ba,0xc0,0x40);
      return;
    }
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      FUN_1897_007c();
      return;
    }
    FUN_1897_0000();
  }
  return;
}



/* ovl_14::02681e ovl_14_entry_252a_157e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_14_entry_252a_157e(void)

{
  undefined2 uVar1;
  char *pcVar2;
  
  if ((1 < _DAT_2a22_e331) || (_DAT_2a22_e32c == 1)) {
    uVar1 = 0x7bbb;
LAB_ovl_14__026834:
    FUN_1505_18a0(uVar1,3);
    return;
  }
  _DAT_2a22_e5c0 = _DAT_2a22_e32f;
  if ((*(char *)(_DAT_2a22_e32f + 10) == '\0') || (*(char *)(_DAT_2a22_e32f + 0x2f) != '\0')) {
    if (_DAT_3000_aaa2 != 0) {
      _DAT_3000_aad5 = 0;
      ovl_14_entry_252a_21bc();
    }
    *(undefined1 *)(_DAT_2a22_e32f + 0x2e) = 1;
    FUN_1505_18a0(0x7bcd,3);
    dispatch_ovl_11_252a_2438(0x1505,1);
    FUN_1951_02ac();
  }
  else {
    if (_DAT_2a22_e333 != 0) {
      uVar1 = 0x7bc4;
      goto LAB_ovl_14__026834;
    }
    _DAT_2a22_e32c = (int)*(char *)(_DAT_2a22_e32f + 10);
    DAT_3000_aaa7 = 3;
    pcVar2 = (char *)(*(char *)(_DAT_2a22_e32f + 0xc) * 0x24 + -0x5075);
    if (*pcVar2 != -1) {
      *pcVar2 = -1;
      *(undefined1 *)(_DAT_2a22_e32f + 0x31) = 2;
      return;
    }
  }
  return;
}



/* ovl_14::0268ca FUN_ovl_14__0268ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__0268ca(void)

{
  int iVar1;
  
  iVar1 = _DAT_3000_aaa2 * 0x3c;
  _DAT_2a22_dc5e = *(int *)((undefined *)&DAT_3000_a39c + iVar1);
  _DAT_2a22_dc64 = *(int *)((undefined *)&DAT_3000_a39e + iVar1);
  _DAT_2a22_dc66 = *(int *)((undefined *)&DAT_3000_a3a0 + iVar1);
  _DAT_2a22_dc60 = 4;
  switch(_DAT_3000_d11d) {
  case 0:
    iVar1 = _DAT_3000_aaa2 * 0x3c;
    _DAT_2a22_dc6a = *(int *)((undefined *)&DAT_3000_a3b0 + iVar1);
    _DAT_2a22_dc72 = *(int *)((undefined *)&DAT_3000_a3b2 + iVar1);
    _DAT_2a22_dc74 = *(int *)((undefined *)&DAT_3000_a3b4 + iVar1);
    break;
  case 1:
    iVar1 = _DAT_3000_aaa2 * 0x3c;
    _DAT_2a22_dc6a =
         CONCAT11((char)((uint)*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1) >> 8) + -0x80,
                  (char)*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1));
    _DAT_2a22_dc72 = -*(int *)((undefined *)&DAT_3000_a3b2 + iVar1);
    _DAT_2a22_dc74 = *(int *)((undefined *)&DAT_3000_a3b4 + iVar1);
    goto LAB_ovl_14__026946;
  case 2:
    iVar1 = _DAT_3000_aaa2 * 0x3c;
    _DAT_2a22_dc6a =
         CONCAT11((char)((uint)*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1) >> 8) + '@',
                  (char)*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1));
    _DAT_2a22_dc72 = -*(int *)((undefined *)&DAT_3000_a3b4 + iVar1);
    _DAT_2a22_dc74 = *(int *)((undefined *)&DAT_3000_a3b2 + iVar1);
    break;
  case 3:
    iVar1 = _DAT_3000_aaa2 * 0x3c;
    _DAT_2a22_dc6a = *(int *)((undefined *)&DAT_3000_a3b0 + iVar1) + -0x4000;
    _DAT_2a22_dc72 = *(int *)((undefined *)&DAT_3000_a3b4 + iVar1);
    _DAT_2a22_dc74 = *(int *)((undefined *)&DAT_3000_a3b2 + iVar1);
LAB_ovl_14__026946:
    _DAT_2a22_dc74 = -_DAT_2a22_dc74;
    break;
  case 6:
    _DAT_3000_d11f = 0;
    _DAT_2a22_dc68 = (undefined *)&DAT_3000_a39a;
    _DAT_2a22_dc60 = 3;
    _DAT_2a22_dc6a = _DAT_3000_a3b0;
    _DAT_2a22_dc72 = _DAT_3000_a3b2 + -0x400;
    _DAT_2a22_dc6c = FUN_14b9_024c(_DAT_2a22_dc72,0x80);
    _DAT_2a22_dc5e = FUN_14b9_0230(_DAT_2a22_dc6a,_DAT_2a22_dc6c);
    _DAT_2a22_dc5e = *(int *)(_DAT_2a22_dc68 + 2) - _DAT_2a22_dc5e;
    _DAT_2a22_dc64 = FUN_14b9_024c(_DAT_2a22_dc6a,_DAT_2a22_dc6c);
    _DAT_2a22_dc64 = *(int *)(_DAT_2a22_dc68 + 4) - _DAT_2a22_dc64;
    _DAT_2a22_dc66 = FUN_14b9_0230(_DAT_2a22_dc72,0x10 << (DAT_2a22_dc60 & 0x1f));
    _DAT_2a22_dc66 = *(int *)(_DAT_2a22_dc68 + 6) - _DAT_2a22_dc66;
    break;
  case 7:
  case 8:
    _DAT_3000_d11f = 2;
    _DAT_2a22_dc68 = (undefined *)&DAT_3000_a412;
    _DAT_2a22_dc60 = 3;
    _DAT_2a22_dc6e = _DAT_3000_a414 - *(int *)((undefined *)&DAT_3000_a39c + _DAT_3000_aaa2 * 0x3c);
    _DAT_2a22_dc70 = _DAT_3000_a416 - *(int *)((undefined *)&DAT_3000_a39e + _DAT_3000_aaa2 * 0x3c);
    _DAT_2a22_dc62 = FUN_1edc_000e(_DAT_2a22_dc6e,_DAT_2a22_dc70,0);
    _DAT_2a22_dc6a = FUN_14b9_00ac(_DAT_2a22_dc6e,_DAT_2a22_dc70);
    _DAT_2a22_dc72 =
         FUN_14b9_00ac(*(int *)(_DAT_2a22_dc68 + 6) -
                       *(int *)((undefined *)&DAT_3000_a3a0 + _DAT_3000_aaa2 * 0x3c),_DAT_2a22_dc62)
    ;
    _DAT_2a22_dc72 = -_DAT_2a22_dc72;
    _DAT_2a22_dc74 = 0;
    _DAT_2a22_dc6c = FUN_14b9_024c(_DAT_2a22_dc72,0x18 << (DAT_2a22_dc60 & 0x1f));
    if (_DAT_3000_d11d == 7) {
      _DAT_2a22_dc5e = FUN_14b9_0230(_DAT_2a22_dc6a,_DAT_2a22_dc6c);
      _DAT_2a22_dc5e = *(int *)(_DAT_2a22_dc68 + 2) + _DAT_2a22_dc5e;
      _DAT_2a22_dc64 = FUN_14b9_024c(_DAT_2a22_dc6a,_DAT_2a22_dc6c);
      _DAT_2a22_dc64 = *(int *)(_DAT_2a22_dc68 + 4) + _DAT_2a22_dc64;
      iVar1 = FUN_14b9_0230(_DAT_2a22_dc72,0x18 << (DAT_2a22_dc60 & 0x1f));
      _DAT_2a22_dc66 = (*(int *)(_DAT_2a22_dc68 + 6) - iVar1) + (4 << (DAT_2a22_dc60 & 0x1f));
      _DAT_2a22_dc6a = CONCAT11(DAT_2a22_dc6b + -0x80,DAT_2a22_dc6a);
    }
    else {
      _DAT_2a22_dc5e =
           FUN_14b9_0230(CONCAT11((char)((uint)_DAT_2a22_dc6a >> 8) + -0x80,(char)_DAT_2a22_dc6a),
                         _DAT_2a22_dc6c);
      _DAT_2a22_dc5e =
           _DAT_2a22_dc5e + *(int *)((undefined *)&DAT_3000_a39c + _DAT_3000_aaa2 * 0x3c);
      _DAT_2a22_dc64 =
           FUN_14b9_024c(CONCAT11((char)((uint)_DAT_2a22_dc6a >> 8) + -0x80,(char)_DAT_2a22_dc6a),
                         _DAT_2a22_dc6c);
      _DAT_2a22_dc64 =
           _DAT_2a22_dc64 + *(int *)((undefined *)&DAT_3000_a39e + _DAT_3000_aaa2 * 0x3c);
      iVar1 = FUN_14b9_0230(_DAT_2a22_dc72,0x18 << (DAT_2a22_dc60 & 0x1f));
      _DAT_2a22_dc66 =
           iVar1 + *(int *)((undefined *)&DAT_3000_a3a0 + _DAT_3000_aaa2 * 0x3c) +
           (4 << (DAT_2a22_dc60 & 0x1f));
      _DAT_2a22_dc72 = -_DAT_2a22_dc72;
    }
    break;
  case 9:
    iVar1 = _DAT_3000_aaa2 * 0x3c;
    _DAT_2a22_dc6a = *(int *)((undefined *)&DAT_3000_a3b0 + iVar1);
    _DAT_2a22_dc72 = 0;
    _DAT_2a22_dc74 = 0;
    _DAT_2a22_dc5e =
         FUN_14b9_0230(CONCAT11((char)((uint)_DAT_2a22_dc6a >> 8) + -0x80,(char)_DAT_2a22_dc6a),
                       0x180);
    _DAT_2a22_dc5e = *(int *)((undefined *)&DAT_3000_a39c + iVar1) + _DAT_2a22_dc5e;
    iVar1 = _DAT_3000_aaa2 * 0x3c;
    _DAT_2a22_dc64 =
         FUN_14b9_024c(CONCAT11((char)((uint)*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1) >>
                                      8) + -0x80,
                                (char)*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1)),
                       0x18 << (DAT_2a22_dc60 & 0x1f));
    _DAT_2a22_dc64 = *(int *)((undefined *)&DAT_3000_a39e + iVar1) + _DAT_2a22_dc64;
    _DAT_2a22_dc66 =
         *(int *)((undefined *)&DAT_3000_a3a0 + _DAT_3000_aaa2 * 0x3c) +
         (4 << (DAT_2a22_dc60 & 0x1f));
    break;
  case 10:
    _DAT_2a22_dc6a = 0;
    _DAT_2a22_dc72 = 0;
    _DAT_2a22_dc74 = 0;
    _DAT_2a22_dc64 = *(int *)((undefined *)&DAT_3000_a39e + _DAT_3000_aaa2 * 0x3c) + -0x180;
  }
  iVar1 = FUN_19c7_4e0a(_DAT_2a22_dc72);
  if ((0x4000 < iVar1) || (_DAT_2a22_dc72 == -0x8000)) {
    _DAT_2a22_dc72 = -0x8000 - _DAT_2a22_dc72;
    _DAT_2a22_dc6a = CONCAT11(DAT_2a22_dc6b + -0x80,DAT_2a22_dc6a);
    _DAT_2a22_dc74 = -0x8000 - _DAT_2a22_dc74;
  }
  FUN_1897_01ac(_DAT_2a22_bd72,-_DAT_2a22_dc6a,_DAT_2a22_dc72,_DAT_2a22_dc74,_DAT_2a22_dc5e,
                _DAT_2a22_dc64,_DAT_2a22_dc66,0);
  FUN_11e1_1052();
  FUN_132b_01be();
  FUN_1897_01ee();
  if (_DAT_3000_aaa2 == 0) {
    FUN_1505_1126();
  }
  FUN_1505_1792();
  FUN_1505_0fc0();
  FUN_1505_11a4();
  FUN_132b_1458();
  FUN_1505_068a();
  if (_DAT_3000_aaa2 == 0) {
    FUN_1505_03d4();
  }
  FUN_1090_1428(0x1505);
  return;
}



/* ovl_14::026d3e FUN_ovl_14__026d3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__026d3e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint local_c;
  uint local_a;
  char local_8;
  char cStack_7;
  int local_6;
  uint local_4;
  
  uVar4 = 0x252a;
  bRam00000417 = bRam00000417 & 0xdf;
  _DAT_3000_a398 = 0;
  _DAT_3000_a396 = 0;
  _DAT_3000_a394 = 0;
  local_4 = 0;
  if (DAT_2a22_46ee != '\0') {
    FUN_1090_00a6(&local_a,&local_c);
    if (0x7f < (int)local_a) {
      local_a = 0x7f;
    }
    if ((int)local_a < -0x7f) {
      local_a = 0xff81;
    }
    if (0x7f < (int)local_c) {
      local_c = 0x7f;
    }
    if ((int)local_c < -0x7f) {
      local_c = 0xff81;
    }
    uVar4 = 0x1eea;
    local_4 = FUN_1eea_11b0();
    _DAT_3000_a396 = (local_c & 0xff) * -0x100;
    if ((local_4 & 2) == 0) {
      _DAT_3000_a394 = local_a << 8;
    }
    else {
      _DAT_3000_a398 = (local_a & 0xff) * -0x100;
    }
    local_4 = local_4 & 1;
  }
  if (DAT_2a22_46ef != '\0') {
    iVar3 = thunk_EXT_FUN_0000_0000(uVar4);
    local_8 = (char)iVar3;
    if (local_8 < '\0') {
      iVar1 = local_8 + 0x10;
      if (0 < iVar1) {
LAB_ovl_14__026e0b:
        iVar1 = 0;
      }
    }
    else {
      iVar1 = local_8 + -0x10;
      if (iVar1 < 0) goto LAB_ovl_14__026e0b;
    }
    cStack_7 = (char)((uint)iVar3 >> 8);
    if (iVar3 < 0) {
      iVar3 = cStack_7 + 0x10;
      if (0 < iVar3) {
LAB_ovl_14__026e2d:
        iVar3 = 0;
      }
    }
    else {
      iVar3 = cStack_7 + -0x10;
      if (iVar3 < 0) goto LAB_ovl_14__026e2d;
    }
    _local_8 = CONCAT11((char)iVar3,(char)iVar1);
    if (_DAT_3000_a396 == 0) {
      _DAT_3000_a396 = (char)iVar3 * -0x80;
    }
    iVar3 = thunk_EXT_FUN_0000_0000(0x1eea,1);
    if (iVar3 == 0) {
      if (_DAT_3000_a394 == 0) {
        _DAT_3000_a394 = (int)local_8 << 7;
      }
    }
    else if (_DAT_3000_a398 == 0) {
      _DAT_3000_a398 = local_8 * -0x80;
    }
    if (local_4 == 0) {
      local_4 = thunk_EXT_FUN_0000_0000(0x1eea,0);
    }
  }
  uVar4 = 0x1951;
  local_6 = FUN_1951_00ea();
  if (local_6 == 0x4a) {
    uVar4 = 0x17ba;
    FUN_17ba_0438();
  }
  else if (local_6 < 0x4b) {
    if (local_6 == 0x2d) {
      _DAT_3000_aad3 = _DAT_3000_aad3 + -10;
      if (_DAT_3000_aad3 < 0) {
LAB_ovl_14__026fb2:
        _DAT_3000_aad3 = 0;
      }
    }
    else if (local_6 < 0x2e) {
      if (local_6 == 0xd) {
        local_4 = 1;
      }
      else if (local_6 == 0x20) {
        _DAT_3000_aad5 = _DAT_3000_aad5 + 1;
        ovl_14_entry_252a_21bc();
      }
      else if (local_6 == 0x2b) {
LAB_ovl_14__026f9e:
        _DAT_3000_aad3 = *(int *)(_DAT_3000_aad7 + 0x24);
      }
      else if (local_6 == 0x2c) goto LAB_ovl_14__026fc2;
    }
    else if (local_6 == 0x2e) {
LAB_ovl_14__026fda:
      _DAT_3000_ab29 = _DAT_3000_ab29 + 1;
      if (8 < _DAT_3000_ab29) {
        _DAT_3000_ab29 = 8;
      }
    }
    else if (local_6 == 0x32) {
LAB_ovl_14__026f3e:
      _DAT_3000_a396 = _DAT_3000_a396 + -0x2000;
    }
    else if (local_6 == 0x34) {
LAB_ovl_14__026f46:
      uVar4 = 0x19c7;
      uVar2 = FUN_19c7_4e80(2);
      if ((uVar2 & 3) == 0) {
        _DAT_3000_a394 = _DAT_3000_a394 + -0x2000;
      }
      else {
        _DAT_3000_a398 = CONCAT11(DAT_3000_a399 + ' ',DAT_3000_a398);
      }
    }
    else if (local_6 == 0x36) {
LAB_ovl_14__026f68:
      uVar4 = 0x19c7;
      uVar2 = FUN_19c7_4e80(2);
      if ((uVar2 & 3) == 0) {
        _DAT_3000_a394 = CONCAT11(DAT_3000_a395 + ' ',DAT_3000_a394);
      }
      else {
        _DAT_3000_a398 = _DAT_3000_a398 + -0x2000;
      }
    }
    else {
      if (local_6 == 0x38) goto LAB_ovl_14__026f36;
      if ((local_6 == 0x3d) &&
         (_DAT_3000_aad3 = _DAT_3000_aad3 + 10, *(int *)(_DAT_3000_aad7 + 0x24) < _DAT_3000_aad3))
      goto LAB_ovl_14__026f9e;
    }
  }
  else if (local_6 == 0x11e) {
    DAT_2a22_bd7e = DAT_2a22_bd7e ^ 1;
  }
  else if (local_6 < 0x11f) {
    if (local_6 == 0x4d) {
      uVar4 = 0x1697;
      FUN_1697_1076();
    }
    else if (local_6 == 0x54) {
      ovl_14_entry_252a_2132();
    }
    else {
      if (local_6 == 0x58) goto LAB_ovl_14__026fda;
      if (local_6 == 0x5a) {
LAB_ovl_14__026fc2:
        _DAT_3000_ab29 = _DAT_3000_ab29 + -1;
        if (_DAT_3000_ab29 < 6) {
          _DAT_3000_ab29 = 6;
        }
      }
      else if (local_6 == 0x5f) goto LAB_ovl_14__026fb2;
    }
  }
  else if (local_6 == 0x120) {
    _DAT_2a22_bd78 = _DAT_2a22_bd78 + -1;
    if (_DAT_2a22_bd78 == 0) {
      _DAT_2a22_bd78 = 3;
    }
    if ((_DAT_2a22_bd78 != 2) && (FUN_1897_0af2(0), 1 < _DAT_2a22_e32c)) {
      FUN_1897_0af2(1);
    }
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,0x7be6);
    uVar4 = FUN_19c7_48e8(_DAT_2a22_bd78,0xa176,10);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar4);
    uVar4 = 0x1505;
    FUN_1505_18a0((undefined *)&DAT_2a22_f1ba,3);
    _DAT_3000_ab25 = 2;
  }
  else if (local_6 == 0x147) {
    iVar3 = _DAT_3000_aaa2 * 0x3c;
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + iVar3) = 0;
    *(undefined2 *)((undefined *)&DAT_3000_a3a0 + iVar3) = 0;
    *(undefined2 *)((undefined *)&DAT_3000_a39e + iVar3) = 0;
    *(undefined2 *)((undefined *)&DAT_3000_a39c + iVar3) = 0;
    *(undefined2 *)((undefined *)&DAT_3000_a3b4 + iVar3) = 0;
    *(undefined2 *)((undefined *)&DAT_3000_a3b2 + iVar3) = 0;
    *(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar3) = 0;
    ovl_14_entry_252a_27e4();
  }
  else if (local_6 == 0x148) {
LAB_ovl_14__026f36:
    _DAT_3000_a396 = CONCAT11(DAT_3000_a397 + ' ',DAT_3000_a396);
  }
  else {
    if (local_6 == 0x14b) goto LAB_ovl_14__026f46;
    if (local_6 == 0x14d) goto LAB_ovl_14__026f68;
    if (local_6 == 0x150) goto LAB_ovl_14__026f3e;
  }
  if (_DAT_3000_aaa2 == 0) {
    if (local_6 == 0x46) {
      _DAT_3000_ab9d = 2;
    }
    else if (local_6 == 0x47) {
      _DAT_3000_ab9d = 1;
    }
    else {
      if (local_6 != 0x4b) {
        if (local_6 == 300) {
          FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,0x7bf4);
          uVar4 = FUN_19c7_48e8(_DAT_2a22_fad8,0xa176,10);
          FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar4);
          uVar4 = 0x1505;
          FUN_1505_18a0((undefined *)&DAT_2a22_f1ba,3);
        }
        goto LAB_ovl_14__027143;
      }
      _DAT_3000_ab9d = 0;
    }
    uVar4 = 0x1697;
    FUN_1697_04ba();
  }
LAB_ovl_14__027143:
  if ((_DAT_3000_aaa2 == 0) && (_DAT_2a22_bd7c == 0)) {
    if (local_6 == 0x50) {
      _DAT_3000_ab9d = 5;
      FUN_1697_04ba();
    }
    else if (local_6 < 0x51) {
      if (local_6 == 0x43) {
        dispatch_ovl_11_252a_1326();
      }
      else if (local_6 == 0x4e) {
        dispatch_ovl_11_252a_2438(uVar4,0);
        FUN_1951_02ac();
      }
    }
    else {
      if (local_6 == 0x53) {
        uVar4 = 0;
      }
      else {
        if (local_6 != 0x11f) {
          if (local_6 == 0x122) {
            dispatch_ovl_04_22dc_07b8(uVar4);
          }
          else if ((local_6 == 0x126) && (dispatch_ovl_04_22dc_07f6(uVar4), _DAT_2a22_9462 != 0)) {
            DAT_3000_aaa7 = 5;
          }
          goto LAB_ovl_14__0271cf;
        }
        uVar4 = 1;
      }
      ovl_14_entry_252a_0fb8(uVar4);
    }
  }
LAB_ovl_14__0271cf:
  if (local_6 == 0x1b) {
    if (_DAT_2a22_bd7c == 0) {
      uVar2 = FUN_19c7_4e80(2);
      if ((uVar2 & 3) != 0) {
        if (DAT_2a22_e5da == '\x01') {
          _DAT_3000_ab9d = 4;
          FUN_1697_04ba();
        }
        else {
          FUN_1505_18a0(0x7c06,4);
        }
      }
    }
    else {
      DAT_3000_aaa7 = 7;
    }
  }
  if ((_DAT_3000_aaa2 < 2) && (local_6 == 0x45)) {
    dispatch_ovl_10_252a_262a(1);
    FUN_1951_02ac();
    thunk_EXT_FUN_0000_0000(0x1951,0x366,0);
    DAT_2a22_5b2f = (DAT_2a22_e326 == DAT_2a22_46f4) + '\x01';
    FUN_1697_0048();
    FUN_17ba_05aa();
    if (DAT_2a22_e326 != DAT_2a22_46f4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x1808,0x338,0,0,_DAT_3000_ab35);
    }
    ovl_14_entry_252a_21bc();
  }
  if ((1 < _DAT_3000_aad5) && (local_6 == 0x52)) {
    FUN_1697_1186();
  }
  do {
    iVar3 = FUN_1951_00ea();
  } while (iVar3 != 0);
  if (local_4 == 0) {
    DAT_2a22_dc5c = '\x01';
    _DAT_3000_ab5d = 0;
  }
  else if (DAT_2a22_dc5c != '\0') {
    _DAT_3000_ab9d = 3;
    FUN_1697_04ba();
  }
  if (DAT_2a22_bd7e != 0) {
    _DAT_3000_a396 = -_DAT_3000_a396;
  }
  if (_DAT_3000_ab71 != 0) {
    _DAT_3000_a398 = 0;
    _DAT_3000_a396 = 0;
    _DAT_3000_a394 = 0;
  }
  _DAT_3000_a396 =
       FUN_14b9_002e(_DAT_3000_a396,-*(int *)(_DAT_3000_aad7 + 0x22),
                     *(undefined2 *)(_DAT_3000_aad7 + 0x22));
  _DAT_3000_a396 = _DAT_3000_a396 / _DAT_2a22_fad6;
  _DAT_3000_a394 =
       FUN_14b9_002e(_DAT_3000_a394,-*(int *)(_DAT_3000_aad7 + 0x22),
                     *(undefined2 *)(_DAT_3000_aad7 + 0x22));
  _DAT_3000_a394 = _DAT_3000_a394 / _DAT_2a22_fad6;
  iVar3 = FUN_14b9_002e(_DAT_3000_a398,-*(int *)(_DAT_3000_aad7 + 0x22),
                        *(undefined2 *)(_DAT_3000_aad7 + 0x22));
  _DAT_3000_a398 = iVar3 / _DAT_2a22_fad6;
  return;
}



/* ovl_14::0273d2 ovl_14_entry_252a_2132 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_14_entry_252a_2132(void)

{
  int iVar1;
  int local_4;
  
  _DAT_3000_ab25 = 2;
  local_4 = 0;
  while( true ) {
    if (_DAT_3000_aaa8 <= local_4) {
      _DAT_3000_aad1 = 0;
      return;
    }
    _DAT_3000_aad1 = _DAT_3000_aad1 + 1;
    if (_DAT_3000_aaa8 <= _DAT_3000_aad1) {
      _DAT_3000_aad1 = 0;
    }
    iVar1 = _DAT_3000_aad1 * 0x3c;
    if ((((*(int *)((undefined *)&DAT_3000_a3cc + iVar1) != 0) &&
         (((undefined *)&DAT_3000_a3cd)[iVar1] != '\x01')) &&
        (2 < (byte)((undefined *)&DAT_3000_a3cc)[iVar1])) &&
       ((((undefined *)&DAT_3000_a39a)[iVar1] & 0x80) == 0)) break;
    local_4 = local_4 + 1;
  }
  if (2 < _DAT_2a22_bd78) {
    _DAT_2a22_4a78 = 0x8000;
    return;
  }
  if (_DAT_2a22_4a78 < 1) {
    _DAT_2a22_4a78 = 0x6000;
  }
  else {
    _DAT_2a22_4a78 = 0xa000;
  }
  return;
}



/* ovl_14::02745c ovl_14_entry_252a_21bc */

/* WARNING: Removing unreachable block (ram,0x0002761a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_14_entry_252a_21bc(void)

{
  thunk_EXT_FUN_0000_0000(0x252a,*_DAT_2a22_bd5e,0);
  FUN_1951_017a(0x1c);
  if ((_DAT_3000_aad5 == 0) || (_DAT_3000_aae1 + 1 < _DAT_3000_aad5)) {
    _DAT_3000_aad5 = 0;
    _DAT_3000_aaa2 = 0;
    _DAT_2a22_4a52 = 0xa1;
    _DAT_2a22_bd62 = 0x20;
    _DAT_2a22_bd64 = 1;
    _DAT_2a22_bd66 = 0xff;
    _DAT_2a22_bd68 = 0x69;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1951,_DAT_2a22_bd5e,0,0,_DAT_3000_ab35);
  }
  if (_DAT_3000_aad5 != 1) {
    _DAT_3000_aaa2 = *(int *)((undefined *)&DAT_3000_aad5 + _DAT_3000_aad5 * 2);
    _DAT_2a22_4a52 = 0x6d;
    _DAT_2a22_bd62 = 0;
    _DAT_2a22_bd64 = 0;
    _DAT_2a22_bd66 = 0x13f;
    _DAT_2a22_bd68 = 0x71;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1951,_DAT_2a22_bd5e,0,0,_DAT_3000_ab37);
  }
  _DAT_3000_aaa2 = 1;
  _DAT_3000_a3ec = _DAT_3000_a3b0;
  _DAT_3000_a3ee = _DAT_3000_a3b2;
  _DAT_3000_a3f0 = _DAT_3000_a3b4;
  _DAT_2a22_4a52 = 0x6d;
  _DAT_2a22_bd62 = 0;
  _DAT_2a22_bd64 = 0;
  _DAT_2a22_bd66 = 0x13f;
  _DAT_2a22_bd68 = 199;
  _DAT_3000_ab6f = 0xfa;
  _DAT_3000_ab27 = 800;
  DAT_3000_aabc = 0;
  _DAT_3000_aad7 = (undefined *)&DAT_3000_a3d6;
  _DAT_3000_aad3 = _DAT_3000_a3f2;
  if (_DAT_3000_a3f2 != 0) {
    FUN_1951_017a(0x39);
  }
  FUN_1505_11a4();
  if ((DAT_2a22_8f11 == '\0') && (_DAT_3000_ca2f != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1505,_DAT_2a22_bd5e,0x20,1,_DAT_3000_ca33);
  }
  thunk_EXT_FUN_0000_0000(0x1505,_DAT_2a22_bd5e,0,0,0x140,200,_DAT_2a22_4a4e,0,0);
  if (_DAT_3000_aaa2 == 1) {
    _DAT_3000_d121 = (undefined *)&DAT_3000_a39a;
  }
  else {
    _DAT_3000_d121 = _DAT_3000_aad7;
  }
  ovl_14_entry_252a_27e4();
  FUN_11e1_0faa();
  DAT_2a22_dc5c = 0;
  return;
}



/* ovl_14::0276b2 FUN_ovl_14__0276b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__0276b2(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_3000_a398 != 0) {
    _DAT_2a22_c0ac = FUN_1ed2_006e(_DAT_3000_a398);
    _DAT_2a22_c0b4 = _DAT_2a22_c0ac;
    _DAT_2a22_c0ae = FUN_1ed2_007e(_DAT_3000_a398);
    _DAT_2a22_c0b2 = -_DAT_2a22_c0ae;
    FUN_ovl_14__027816(0x7c26,(undefined *)&DAT_2a22_c0ac);
  }
  if (_DAT_3000_a396 != 0) {
    _DAT_2a22_c0a2 = FUN_1ed2_006e(_DAT_3000_a396);
    _DAT_2a22_c0aa = _DAT_2a22_c0a2;
    _DAT_2a22_c0a8 = FUN_1ed2_007e(_DAT_3000_a396);
    _DAT_2a22_c0a4 = -_DAT_2a22_c0a8;
    FUN_ovl_14__027816(0x7c26,0x7c4a);
  }
  if (_DAT_3000_a394 != 0) {
    _DAT_2a22_c088 = FUN_1ed2_006e(_DAT_3000_a394);
    _DAT_2a22_c098 = _DAT_2a22_c088;
    _DAT_2a22_c08c = FUN_1ed2_007e(_DAT_3000_a394);
    _DAT_2a22_c094 = -_DAT_2a22_c08c;
    FUN_ovl_14__027816(0x7c26,(undefined *)&DAT_2a22_c088);
  }
  iVar4 = *(int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
  iVar2 = *(int *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c);
  FUN_ovl_14__027844();
  iVar3 = FUN_19c7_4e0a(*(undefined2 *)((undefined *)&DAT_3000_a3b2 + _DAT_3000_aaa2 * 0x3c));
  if (0x7ff < iVar3) goto LAB_ovl_14__02780c;
  iVar4 = iVar4 - *(int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
  if (iVar4 == -0x8000) {
LAB_ovl_14__0277c9:
    pcVar1 = (char *)(_DAT_3000_aaa2 * 0x3c + -0x42bf);
    *pcVar1 = *pcVar1 + -0x80;
  }
  else {
    iVar4 = FUN_19c7_4e0a(iVar4);
    if (0x7000 < iVar4) goto LAB_ovl_14__0277c9;
  }
  iVar2 = iVar2 - *(int *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c);
  if (iVar2 != -0x8000) {
    iVar4 = FUN_19c7_4e0a(iVar2);
    if (iVar4 < 0x7001) goto LAB_ovl_14__02780c;
  }
  pcVar1 = (char *)(_DAT_3000_aaa2 * 0x3c + -0x42bb);
  *pcVar1 = *pcVar1 + -0x80;
LAB_ovl_14__02780c:
  ovl_14_entry_252a_27e4();
  return;
}



/* ovl_14::027816 FUN_ovl_14__027816 */

void __cdecl16far FUN_ovl_14__027816(undefined2 param_1,undefined2 param_2)

{
  FUN_1897_0856(param_1,param_2,0x7c6e);
  FUN_19c7_4d50(0x7c26,0x7c6e,0x12);
  return;
}



/* ovl_14::027844 FUN_ovl_14__027844 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_14__027844(void)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = ovl_14_entry_252a_2886(-_DAT_2a22_c080);
  *(undefined2 *)((undefined *)&DAT_3000_a3b2 + _DAT_3000_aaa2 * 0x3c) = uVar2;
  iVar3 = FUN_1ed2_006e(*(undefined2 *)((undefined *)&DAT_3000_a3b2 + _DAT_3000_aaa2 * 0x3c));
  if (iVar3 == 0) {
    iVar3 = _DAT_3000_aaa2 * 0x3c;
    *(undefined2 *)((undefined *)&DAT_3000_a3b4 + iVar3) = 0;
    uVar2 = ovl_14_entry_252a_2886(_DAT_2a22_c078);
    *(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar3) = uVar2;
    if ((_DAT_2a22_c07c < 1) && (_DAT_2a22_c07e < 0)) {
      pcVar1 = (char *)(_DAT_3000_aaa2 * 0x3c + -0x42bf);
      *pcVar1 = *pcVar1 + -0x80;
    }
    if ((0 < _DAT_2a22_c07c) && (_DAT_2a22_c07e < 0)) {
      *(int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c) =
           -0x8000 - *(int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
    }
    if (-1 < _DAT_2a22_c07c) {
      return;
    }
    if (_DAT_2a22_c07e < 1) {
      return;
    }
    piVar5 = (int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
  }
  else {
    iVar4 = FUN_19c7_4e0a(_DAT_2a22_c07a);
    if (iVar4 < 0x5a81) {
      uVar2 = ovl_14_entry_252a_2808(_DAT_2a22_c07a,iVar3);
      uVar2 = FUN_19c7_4e0a(uVar2);
      uVar2 = ovl_14_entry_252a_2886(uVar2);
    }
    else {
      uVar2 = ovl_14_entry_252a_2808(_DAT_2a22_c086,iVar3);
      uVar2 = FUN_19c7_4e0a(uVar2);
      uVar2 = ovl_14_entry_252a_291e(uVar2);
    }
    *(undefined2 *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c) = uVar2;
    if ((_DAT_2a22_c07a < 1) && (_DAT_2a22_c086 < 0)) {
      pcVar1 = (char *)(_DAT_3000_aaa2 * 0x3c + -0x42bf);
      *pcVar1 = *pcVar1 + -0x80;
    }
    if ((0 < _DAT_2a22_c07a) && (_DAT_2a22_c086 < 0)) {
      *(int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c) =
           -0x8000 - *(int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
    }
    if ((_DAT_2a22_c07a < 0) && (0 < _DAT_2a22_c086)) {
      *(int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c) =
           -*(int *)((undefined *)&DAT_3000_a3b0 + _DAT_3000_aaa2 * 0x3c);
    }
    iVar4 = FUN_19c7_4e0a(_DAT_2a22_c07c);
    if (iVar4 < 0x5a81) {
      uVar2 = ovl_14_entry_252a_2808(_DAT_2a22_c07c,iVar3);
      uVar2 = FUN_19c7_4e0a(uVar2);
      uVar2 = ovl_14_entry_252a_2886(uVar2);
    }
    else {
      uVar2 = ovl_14_entry_252a_2808(_DAT_2a22_c07e,iVar3);
      uVar2 = FUN_19c7_4e0a(uVar2);
      uVar2 = ovl_14_entry_252a_291e(uVar2);
    }
    *(undefined2 *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c) = uVar2;
    if ((_DAT_2a22_c07c < 1) && (_DAT_2a22_c07e < 0)) {
      pcVar1 = (char *)(_DAT_3000_aaa2 * 0x3c + -0x42bb);
      *pcVar1 = *pcVar1 + -0x80;
    }
    if ((0 < _DAT_2a22_c07c) && (_DAT_2a22_c07e < 0)) {
      *(int *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c) =
           -0x8000 - *(int *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c);
    }
    if (-1 < _DAT_2a22_c07c) {
      return;
    }
    if (_DAT_2a22_c07e < 1) {
      return;
    }
    piVar5 = (int *)((undefined *)&DAT_3000_a3b4 + _DAT_3000_aaa2 * 0x3c);
  }
  *piVar5 = -*piVar5;
  return;
}



/* ovl_14::027a84 ovl_14_entry_252a_27e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_14_entry_252a_27e4(void)

{
  int iVar1;
  
  iVar1 = _DAT_3000_aaa2 * 0x3c;
  FUN_1897_0502(0x7c26,*(undefined2 *)((undefined *)&DAT_3000_a3b0 + iVar1),
                *(undefined2 *)((undefined *)&DAT_3000_a3b2 + iVar1),
                *(undefined2 *)((undefined *)&DAT_3000_a3b4 + iVar1));
  return;
}



/* ovl_14::027aa8 ovl_14_entry_252a_2808 */

int __cdecl16far ovl_14_entry_252a_2808(int param_1,int param_2)

{
  ulong uVar1;
  char local_6;
  char local_4;
  
  local_4 = '\x01';
  local_6 = '\x01';
  if (param_1 < 0) {
    local_4 = -1;
  }
  if (param_2 < 0) {
    local_6 = -1;
  }
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  uVar1 = FUN_19c7_5056(0,param_1,param_2,param_2 >> 0xf);
  return (int)(CONCAT12((uVar1 & 0x10000) != 0,(int)uVar1) >> 1) * (int)local_4 * (int)local_6;
}



/* ovl_14::027b26 ovl_14_entry_252a_2886 */

int __cdecl16far ovl_14_entry_252a_2886(int param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  if (param_1 == -0x8000) {
    return -0x4000;
  }
  iVar1 = FUN_19c7_4e0a(param_1);
  local_8 = (iVar1 >> 9) + 1;
  do {
    if (local_8 < 0) {
LAB_ovl_14__027b80:
      if (param_1 < 0) {
        local_4 = -local_4;
      }
      return local_4;
    }
    iVar2 = local_8 * 2;
    if (*(int *)(iVar2 + 0x1768) <= iVar1) {
      iVar2 = *(int *)(iVar2 + 0x176a) - *(int *)(iVar2 + 0x1768);
      if (iVar2 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar1 = iVar1 - *(int *)(local_8 * 2 + 0x1768);
      iVar1 = FUN_19c7_4f62(iVar1 * 0x100,(int)(char)((uint)iVar1 >> 8),iVar2,iVar2 >> 0xf);
      local_4 = iVar1 + local_8 * 0x100;
      goto LAB_ovl_14__027b80;
    }
    local_8 = local_8 + -1;
  } while( true );
}



/* ovl_14::027bbe ovl_14_entry_252a_291e */

int __cdecl16far ovl_14_entry_252a_291e(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = ovl_14_entry_252a_2886(param_1);
  return -(iVar1 + -0x4000);
}



/* ovl_14::027bd2 FUN_ovl_14__027bd2 */

int __cdecl16far FUN_ovl_14__027bd2(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int local_6;
  
  iVar1 = FUN_19c7_4e0a(param_1);
  if (iVar1 < 4) {
    return 1;
  }
  local_6 = iVar1 >> 2;
  do {
    iVar2 = iVar1 / local_6;
    local_6 = local_6 + iVar2 >> 1;
    iVar2 = FUN_19c7_4e0a(local_6 - iVar2);
  } while (1 < iVar2);
  return local_6;
}


