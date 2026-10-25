/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_38::0290a0 ovl_38_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_38_entry_290a_0000(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (_DAT_2a22_e331 == 0) {
    FUN_ovl_38__029328(0,6000,0);
    FUN_ovl_38__02928a(500,3000,500);
    uVar1 = 3000;
    uVar2 = 0xfe0c;
  }
  else {
    if (_DAT_2a22_e331 == 1) {
      FUN_ovl_38__029328(0,6000,0);
      uVar1 = 3000;
    }
    else {
      if (_DAT_2a22_e331 != 2) {
        if (_DAT_2a22_e331 == 3) {
          FUN_ovl_38__029132(500,6000,500);
          return;
        }
        return;
      }
      FUN_19c7_4e32();
      uVar1 = 6000;
    }
    uVar2 = 500;
  }
  FUN_ovl_38__02928a(uVar2,uVar1,500);
  return;
}



/* ovl_38::029132 FUN_ovl_38__029132 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_38__029132(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x100;
  _DAT_3000_aac9[0x19] = 0x503;
  _DAT_3000_aac9[0x11] = 0x800;
  _DAT_3000_aac9[0x12] = 0x3c;
  _DAT_3000_aac9[0x18] = 100;
  _DAT_3000_aac9[0x15] = 200;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 1;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xf] = 0;
  puVar2[0x10] = 0;
  _DAT_3000_aac9[0xb] = 0x8000;
  _DAT_3000_aac9[0xd] = 0;
  _DAT_3000_aac9[0xc] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar2[4] = param_1;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar2[5] = param_2;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar2[6] = param_3;
  _DAT_3000_aacb = _DAT_3000_aac9;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x186;
  _DAT_3000_aac9[0x19] = 0x507;
  _DAT_3000_aac9[0x18] = 100;
  _DAT_3000_aac9[0x15] = 0xa8;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0;
  _DAT_3000_aac9[9] = 0;
  uVar1 = _DAT_3000_aacb[1];
  _DAT_3000_aac9[1] = uVar1;
  _DAT_3000_aac9[4] = uVar1;
  uVar1 = _DAT_3000_aacb[2];
  _DAT_3000_aac9[2] = uVar1;
  _DAT_3000_aac9[5] = uVar1;
  uVar1 = _DAT_3000_aacb[3];
  _DAT_3000_aac9[3] = uVar1;
  _DAT_3000_aac9[6] = uVar1;
  _DAT_3000_aac9[0xb] = _DAT_3000_aacb[0xb];
  _DAT_3000_aac9[0xc] = _DAT_3000_aacb[0xc];
  _DAT_3000_aac9[0xd] = _DAT_3000_aacb[0xd];
  return;
}



/* ovl_38::02928a FUN_ovl_38__02928a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_38__02928a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x101;
  _DAT_3000_aac9[0x19] = 0x504;
  _DAT_3000_aac9[0x11] = 0x800;
  _DAT_3000_aac9[0x12] = 0x5a;
  _DAT_3000_aac9[0x18] = 0x7d;
  _DAT_3000_aac9[0x15] = 0x78;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xf] = 0;
  puVar1[0x10] = 0;
  _DAT_3000_aac9[0xb] = 0x8000;
  _DAT_3000_aac9[0xd] = 0;
  _DAT_3000_aac9[0xc] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar1[4] = param_1;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar1[5] = param_2;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar1[6] = param_3;
  return;
}



/* ovl_38::029328 FUN_ovl_38__029328 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_38__029328(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x102;
  _DAT_3000_aac9[0x19] = 0x506;
  _DAT_3000_aac9[0x18] = 500;
  _DAT_3000_aac9[0x15] = 0x200;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  _DAT_3000_aac9[0xb] = 0x8000;
  _DAT_3000_aac9[0xd] = 0;
  _DAT_3000_aac9[0xc] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar2[4] = param_1;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar2[5] = param_2;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar2[6] = param_3;
  _DAT_3000_aacb = _DAT_3000_aac9;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x187;
  _DAT_3000_aac9[0x19] = 0x505;
  _DAT_3000_aac9[0x18] = 0x3fff;
  _DAT_3000_aac9[0x15] = 0x200;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0;
  _DAT_3000_aac9[9] = 0;
  uVar1 = _DAT_3000_aacb[1];
  _DAT_3000_aac9[1] = uVar1;
  _DAT_3000_aac9[4] = uVar1;
  uVar1 = _DAT_3000_aacb[2];
  _DAT_3000_aac9[2] = uVar1;
  _DAT_3000_aac9[5] = uVar1;
  uVar1 = _DAT_3000_aacb[3];
  _DAT_3000_aac9[3] = uVar1;
  _DAT_3000_aac9[6] = uVar1;
  _DAT_3000_aac9[0xb] = _DAT_3000_aacb[0xb];
  _DAT_3000_aac9[0xc] = _DAT_3000_aacb[0xc];
  _DAT_3000_aac9[0xd] = _DAT_3000_aacb[0xd];
  _DAT_3000_aac9[0x17] = 0;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = 3;
  return;
}



/* ovl_38::02946e ovl_38_entry_290a_03ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_38_entry_290a_03ce(void)

{
  if ((*(char *)(_DAT_3000_aac9 + 0x32) == '\x03') || (*(char *)(_DAT_3000_aac9 + 0x32) == '\x04'))
  {
    if (1 < _DAT_2a22_e333) {
      if (_DAT_3000_a444 == 0x506) {
        FUN_ovl_38__0296e8();
        return;
      }
      FUN_ovl_38__0294a8();
      return;
    }
  }
  else if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x06') {
    FUN_ovl_38__0298b2();
  }
  return;
}



/* ovl_38::0294a8 FUN_ovl_38__0294a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_38__0294a8(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(_DAT_3000_aac9 + 0x6e) != 0x507) {
    *(undefined1 *)(_DAT_3000_aac9 + 0x38) = 0;
    *(undefined2 *)(_DAT_3000_aac9 + 0x24) = 0xbe;
  }
  uVar1 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 4) - _DAT_3000_a39e,
                        *(int *)(_DAT_3000_aac9 + 6) - _DAT_3000_a3a0,0,0);
  iVar2 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 2) - _DAT_3000_a39c,uVar1);
  iVar2 = (iVar2 - *(int *)(_DAT_3000_aac9 + 0x2a)) - _DAT_3000_a3c4;
  _DAT_3000_aab6 = iVar2;
  if ((DAT_2a22_fad4 & 3) == 0) {
    FUN_17ba_02cc();
  }
  FUN_132b_0e94();
  if ((_DAT_3000_ab61 == 0) || (1999 < iVar2)) {
    if (*(char *)(_DAT_3000_aac9 + 0x37) == '\x01') {
      if (_DAT_3000_ab5f == 0) {
        *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
      }
    }
    else if ((*(char *)(_DAT_3000_aac9 + 0x32) == '\x03') &&
            (*(int *)(_DAT_3000_aac9 + 0x30) < *(int *)(_DAT_3000_aac9 + 0x2c))) {
      *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
      *(int *)(_DAT_3000_aac9 + 0x20) = -_DAT_3000_aaba;
      *(undefined2 *)(_DAT_3000_aac9 + 0x1e) =
           CONCAT11((char)((uint)_DAT_3000_aab8 >> 8) + -0x80,(char)_DAT_3000_aab8);
      FUN_17ba_037a();
    }
    else if (_DAT_3000_aab6 < 0x4b1) {
      if (_DAT_3000_aab6 < 1000) {
        iVar2 = *(int *)(_DAT_3000_aac9 + 0x24);
        if (*(int *)(_DAT_3000_aacb + 0x24) < iVar2) {
          iVar2 = *(int *)(_DAT_3000_aacb + 0x24);
        }
        *(int *)(_DAT_3000_aac9 + 0x1c) = iVar2;
        *(int *)(_DAT_3000_aac9 + 0x20) = -_DAT_3000_aaba;
        *(undefined2 *)(_DAT_3000_aac9 + 0x1e) =
             CONCAT11((char)((uint)_DAT_3000_aab8 >> 8) + -0x80,(char)_DAT_3000_aab8);
      }
    }
    else {
      *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
    }
  }
  else {
    uVar3 = FUN_19c7_4e32();
    if ((uVar3 & 1) == 0) {
      uVar1 = 0xd000;
    }
    else {
      uVar1 = 0x3000;
    }
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = uVar1;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = 0;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
    *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 1;
  }
  if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
    if (_DAT_3000_aab6 < 1000) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 << 2;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = 0x502;
      *_DAT_3000_aacd = 0x103;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 2);
      _DAT_3000_aacd[1] = uVar1;
      _DAT_3000_aacd[4] = uVar1;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 4);
      _DAT_3000_aacd[2] = uVar1;
      _DAT_3000_aacd[5] = uVar1;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 6);
      _DAT_3000_aacd[3] = uVar1;
      _DAT_3000_aacd[6] = uVar1;
      _DAT_3000_aacd[0xb] = *(undefined2 *)(_DAT_3000_aac9 + 0x16);
      _DAT_3000_aacd[0xc] = *(undefined2 *)(_DAT_3000_aac9 + 0x18);
      _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 0x14;
      _DAT_3000_aacd[0x15] = 0x60;
      iVar2 = FUN_14b9_02b2(0x80);
      _DAT_3000_aacd[0x17] = iVar2 + 0x40;
      return;
    }
  }
  else {
    *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
  }
  return;
}



/* ovl_38::0296e8 FUN_ovl_38__0296e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_38__0296e8(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  
  FUN_132b_0e94();
  if (*(char *)(_DAT_3000_aac9 + 0x37) == '\0') {
    *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
    *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
  }
  else if ((*(char *)(_DAT_3000_aac9 + 0x37) == '\x02') && (_DAT_3000_ab5f == 0)) {
    *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
  }
  if (((_DAT_3000_aab6 < 2000) && (iVar1 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar1 < 0xaab)) &&
     (iVar1 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar1 < 0xaab)) {
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xf9 | 4;
    if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 << 2;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = 0x502;
      *_DAT_3000_aacd = 0x104;
      uVar3 = *(undefined2 *)(_DAT_3000_aac9 + 2);
      _DAT_3000_aacd[1] = uVar3;
      _DAT_3000_aacd[4] = uVar3;
      uVar3 = *(undefined2 *)(_DAT_3000_aac9 + 4);
      _DAT_3000_aacd[2] = uVar3;
      _DAT_3000_aacd[5] = uVar3;
      uVar3 = *(undefined2 *)(_DAT_3000_aac9 + 6);
      _DAT_3000_aacd[3] = uVar3;
      _DAT_3000_aacd[6] = uVar3;
      _DAT_3000_aacd[0xe] = 0x96;
      _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
      _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
      _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 << 3;
      _DAT_3000_aacd[0x15] = 0x60;
      _DAT_3000_aacd[0x17] = 0x20;
      *(undefined1 *)((int)_DAT_3000_aacd + 0x3b) = 1;
      _DAT_3000_aacd[0x1a] = _DAT_3000_aacb;
      return;
    }
    *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    return;
  }
  *(undefined2 *)(_DAT_3000_aac9 + 0x28) = 0;
  *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
  *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xf9 | 2;
  if ((_DAT_3000_ab61 != 0) && (_DAT_3000_aab6 < 2000)) {
    uVar2 = FUN_19c7_4e32();
    if ((uVar2 & 1) == 0) {
      uVar3 = 0xd000;
    }
    else {
      uVar3 = 0x3000;
    }
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = uVar3;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = 0;
    *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 2;
  }
  return;
}



/* ovl_38::0298b2 FUN_ovl_38__0298b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_38__0298b2(void)

{
  undefined2 uVar1;
  int iVar2;
  
  _DAT_3000_aacb = _DAT_3000_aac9 + 0x3c;
  *(int *)(_DAT_3000_aac9 + 0x52) = -_DAT_3000_ab09;
  *(int *)(_DAT_3000_aac9 + 0x2c) =
       *(int *)(_DAT_3000_aac9 + 0x2c) + *(int *)(_DAT_3000_aacb + 0x2c);
  *(undefined2 *)(_DAT_3000_aacb + 0x2c) = 0;
  *(byte *)(_DAT_3000_aac9 + 0x39) =
       *(byte *)(_DAT_3000_aac9 + 0x39) | *(byte *)(_DAT_3000_aacb + 0x39);
  *(undefined1 *)(_DAT_3000_aacb + 0x39) = 0;
  if (*(int *)(_DAT_3000_aac9 + 0x30) * 2 <= *(int *)(_DAT_3000_aac9 + 0x2c)) {
    _DAT_3000_aacd = (undefined2 *)_DAT_3000_aac9;
    FUN_132b_0e08();
    FUN_132b_0466((_DAT_3000_aac9 + 0x42d6) / 0x3c);
    return;
  }
  if (1 < _DAT_2a22_e333) {
    if ((DAT_2a22_fad4 & 3) == 0) {
      uVar1 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 4) - _DAT_3000_a39e,
                            *(int *)(_DAT_3000_aac9 + 6) - _DAT_3000_a3a0,0,0);
      iVar2 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 2) - _DAT_3000_a39c,uVar1);
      _DAT_3000_aab6 = (iVar2 - *(int *)(_DAT_3000_aac9 + 0x2a)) - _DAT_3000_a3c4;
      FUN_17ba_02cc();
    }
    FUN_132b_0e94();
    if (_DAT_3000_aab6 < 2000) {
      if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 << 2;
        _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
        _DAT_3000_aacd[0x19] = 0x502;
        *_DAT_3000_aacd = 0x104;
        uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 2);
        _DAT_3000_aacd[1] = uVar1;
        _DAT_3000_aacd[4] = uVar1;
        uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 4);
        _DAT_3000_aacd[2] = uVar1;
        _DAT_3000_aacd[5] = uVar1;
        uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 6);
        _DAT_3000_aacd[3] = uVar1;
        _DAT_3000_aacd[6] = uVar1;
        _DAT_3000_aacd[0xe] = 0x96;
        _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
        _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
        _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 << 3;
        _DAT_3000_aacd[0x15] = 0x60;
        _DAT_3000_aacd[0x17] = 0x20;
        *(undefined1 *)((int)_DAT_3000_aacd + 0x3b) = 1;
        _DAT_3000_aacd[0x1a] = _DAT_3000_aacb;
        return;
      }
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
      return;
    }
    *(undefined2 *)(_DAT_3000_aac9 + 0x28) = 0;
  }
  return;
}


