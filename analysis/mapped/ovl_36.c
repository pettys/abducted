/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_36::0290a0 ovl_36_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_36_entry_290a_0000(void)

{
  undefined2 uVar1;
  
  if (_DAT_2a22_e331 < 2) {
    FUN_ovl_36__02915a(0,6000,0,0);
    FUN_ovl_36__029372(0xe890,0,0);
    FUN_ovl_36__029372(6000,0,0);
    FUN_ovl_36__0295c2(0,6000,1000);
    FUN_ovl_36__0295c2(0xfc18,0x1870,0);
    uVar1 = 1000;
  }
  else {
    FUN_ovl_36__029372(0,6000,0);
    FUN_ovl_36__0295c2(0,6000,500);
    FUN_ovl_36__0295c2(0xfe0c,0x1870,0);
    uVar1 = 500;
  }
  FUN_ovl_36__0295c2(uVar1,(undefined *)&DAT_2a22_5dc0,0);
  return;
}



/* ovl_36::02915a FUN_ovl_36__02915a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_36__02915a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x102;
  _DAT_3000_aac9[0x19] = 0x306;
  _DAT_3000_aac9[0x18] = 0x2ee;
  _DAT_3000_aac9[0x15] = 0x300;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar2[4] = param_1;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar2[5] = param_2;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar2[6] = param_3;
  _DAT_3000_aac9[0xc] = 0x1000;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aacb = _DAT_3000_aac9;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 7;
  *(undefined1 *)(puVar2 + 0x1d) = 7;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x18b;
  _DAT_3000_aac9[0x19] = 0x307;
  _DAT_3000_aac9[0x18] = 1;
  _DAT_3000_aac9[0x15] = 0x14;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0;
  _DAT_3000_aac9[9] = 0xfe0c;
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
  _DAT_3000_aac9[0x11] = 0xb398;
  _DAT_3000_aac9[0x12] = 100;
  _DAT_3000_aac9[0x17] = 0xc000;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = 1;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x18b;
  _DAT_3000_aac9[0x19] = 0x307;
  _DAT_3000_aac9[0x18] = 1;
  _DAT_3000_aac9[0x15] = 0x14;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0;
  _DAT_3000_aac9[9] = 500;
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
  _DAT_3000_aac9[0x11] = 0xb398;
  _DAT_3000_aac9[0x12] = 100;
  _DAT_3000_aac9[0x17] = 0x4000;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = 1;
  return;
}



/* ovl_36::029372 FUN_ovl_36__029372 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_36__029372(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x101;
  _DAT_3000_aac9[0x19] = 0x304;
  _DAT_3000_aac9[0x11] = 0xc00;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 0x28;
  puVar2[0x12] = 0x28;
  _DAT_3000_aac9[0x18] = 200;
  _DAT_3000_aac9[0x15] = 0xa8;
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
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 3;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x18a;
  _DAT_3000_aac9[0x19] = 0x307;
  _DAT_3000_aac9[0x18] = 1;
  _DAT_3000_aac9[0x15] = 0x14;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0xc;
  _DAT_3000_aac9[9] = 0xfff0;
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
  _DAT_3000_aac9[0x11] = 0xf5cd;
  _DAT_3000_aac9[0x12] = 0x1e;
  _DAT_3000_aac9[0x17] = 0xc000;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = 1;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x18a;
  _DAT_3000_aac9[0x19] = 0x307;
  _DAT_3000_aac9[0x18] = 1;
  _DAT_3000_aac9[0x15] = 0x14;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0x84;
  _DAT_3000_aac9[9] = 0x18;
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
  _DAT_3000_aac9[0x11] = 0xf5cd;
  _DAT_3000_aac9[0x12] = 0x1e;
  _DAT_3000_aac9[0x17] = 0x4000;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = 1;
  return;
}



/* ovl_36::0295c2 FUN_ovl_36__0295c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_36__0295c2(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x19] = 0x303;
  *_DAT_3000_aac9 = 0x100;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 0x5a;
  puVar1[0x12] = 0x5a;
  _DAT_3000_aac9[0x11] = 0x2000;
  _DAT_3000_aac9[0x18] = 0x32;
  _DAT_3000_aac9[0x15] = 0x34;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xb] = 0x4000;
  puVar1[0xf] = 0x4000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar1[0xc] = 0;
  _DAT_3000_aac9[0x10] = 0;
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



/* ovl_36::029710 ovl_36_entry_290a_0670 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_36_entry_290a_0670(void)

{
  char cVar1;
  
  cVar1 = *(char *)(_DAT_3000_aac9 + 0x32);
  if (cVar1 == '\x03') {
    FUN_ovl_36__02993e();
    return;
  }
  if (cVar1 == '\x04') {
    FUN_ovl_36__029746();
    return;
  }
  if (cVar1 == '\x06') {
    FUN_ovl_36__029bac();
  }
  else if (cVar1 == '\a') {
    FUN_17ba_0006();
    return;
  }
  return;
}



/* ovl_36::029746 FUN_ovl_36__029746 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_36__029746(void)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (*(int *)(_DAT_3000_aac9 + 0x6e) != 0x307) {
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
  }
  if (*(int *)(_DAT_3000_aac9 + 0xaa) != 0x307) {
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfd;
  }
  FUN_132b_0e94();
  if (_DAT_3000_ab61 != 0) {
    uVar1 = FUN_19c7_4e32();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0xd000;
    }
    else {
      uVar2 = 0x3000;
    }
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = uVar2;
  }
  if (_DAT_3000_ab5f == 0) {
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
  }
  if ((*(int *)(_DAT_3000_aac9 + 0x30) < *(int *)(_DAT_3000_aac9 + 0x2c)) && (1 < _DAT_2a22_e331)) {
    *(undefined2 *)(_DAT_3000_aac9 + 0x1e) =
         CONCAT11((char)((uint)_DAT_3000_aab8 >> 8) + -0x80,(char)_DAT_3000_aab8);
    FUN_17ba_037a();
  }
  else {
    *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    if ((_DAT_3000_aab6 < 2000) &&
       ((iVar3 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar3 < 0x4001 &&
        (iVar3 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar3 < 0x4001)))) {
      if (_DAT_3000_aab8 < 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = 1;
      }
      *(int *)(_DAT_3000_aac9 + 0x1e) = iVar3 * -0x4000 + _DAT_3000_aab8;
    }
  }
  if (1 < _DAT_2a22_e333) {
    if ((_DAT_3000_aab6 < 2000) && (*(int *)(_DAT_3000_aac9 + 0x28) == 0)) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 10;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
      *_DAT_3000_aacd = 0x103;
      uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 2);
      _DAT_3000_aacd[1] = uVar2;
      _DAT_3000_aacd[4] = uVar2;
      uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 4);
      _DAT_3000_aacd[2] = uVar2;
      _DAT_3000_aacd[5] = uVar2;
      uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 6);
      _DAT_3000_aacd[3] = uVar2;
      _DAT_3000_aacd[6] = uVar2;
      _DAT_3000_aacd[0xb] = *(undefined2 *)(_DAT_3000_aac9 + 0x16);
      _DAT_3000_aacd[0xc] = *(undefined2 *)(_DAT_3000_aac9 + 0x18);
      _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0x11] = 0x7fff;
      _DAT_3000_aacd[0xe] = 200;
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 << 4;
      _DAT_3000_aacd[0x15] = 0x19;
      iVar3 = FUN_14b9_02b2(0x40);
      _DAT_3000_aacd[0x17] = iVar3 + 0x40;
      *(undefined1 *)((int)_DAT_3000_aacd + 0x3b) = 1;
      _DAT_3000_aacd[0x1a] = (undefined *)&DAT_3000_a39a;
      FUN_1951_017a(0xd);
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}



/* ovl_36::02993e FUN_ovl_36__02993e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_36__02993e(void)

{
  undefined2 uVar1;
  int iVar2;
  
  if (_DAT_2a22_e333 != 3) {
    _DAT_3000_aacb = (undefined *)&DAT_3000_a39a;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
    FUN_132b_0ea4();
    if (*(char *)(_DAT_3000_aac9 + 0x37) == '\0') {
      if (((_DAT_3000_ab6f <
            CONCAT11((char)((uint)_DAT_3000_aab6 >> 8) + '\x02',(char)_DAT_3000_aab6)) ||
          (iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8), 0x2fff < iVar2)) ||
         (iVar2 = FUN_19c7_4e0a(_DAT_3000_aaba), 0x2fff < iVar2)) {
        *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
        *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
      }
      else {
        if (_DAT_3000_aaba < 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = 1;
        }
        *(int *)(_DAT_3000_aac9 + 0x20) = iVar2 * -0x2000;
        if (_DAT_3000_aab8 < 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = 1;
        }
        *(int *)(_DAT_3000_aac9 + 0x1e) = iVar2 * -0x4000;
        *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 1;
      }
    }
    else if (0x5db < _DAT_3000_aab6) {
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
    }
    if (1 < _DAT_2a22_e333) {
      if (((_DAT_3000_aab6 < 600) && (iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar2 < 0x500)) &&
         ((iVar2 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar2 < 0x500 &&
          (*(int *)(_DAT_3000_aac9 + 0x28) == 0)))) {
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 + 1 >> 1;
        _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
        _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),1);
        *_DAT_3000_aacd = 0x11;
        uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 2);
        _DAT_3000_aacd[1] = uVar1;
        _DAT_3000_aacd[4] = uVar1;
        uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 4);
        _DAT_3000_aacd[2] = uVar1;
        _DAT_3000_aacd[5] = uVar1;
        uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 6);
        _DAT_3000_aacd[3] = uVar1;
        _DAT_3000_aacd[6] = uVar1;
        _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
        _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
        _DAT_3000_aacd[0xd] = -0x8000 - *(int *)(_DAT_3000_aac9 + 0x1a);
        _DAT_3000_aacd[0xe] = 400;
        _DAT_3000_aacd[0x13] = (_DAT_2a22_fad6 >> 1) + _DAT_2a22_fad6;
        _DAT_3000_aacd[0x15] = 2;
        _DAT_3000_aacd[0x17] = 10;
        *(undefined1 *)((int)_DAT_3000_aacd + 0x3b) = 0;
        if (_DAT_3000_aacb == _DAT_3000_d121) {
          FUN_1951_017a(4);
        }
      }
      if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
        *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
      }
    }
    return;
  }
  _DAT_3000_aacb = (undefined *)&DAT_3000_a39a;
  FUN_132b_0ea4();
  FUN_17ba_037a();
  _DAT_3000_aacb = (undefined *)&DAT_3000_a412;
  if (_DAT_3000_a444 == 0x304) {
    FUN_132b_0ea4();
    *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
    *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    if (_DAT_3000_aab6 < (int)((uint)DAT_3000_aaae * 0x100 + 0x2dc)) {
      uVar1 = *(undefined2 *)(_DAT_3000_aacb + 0x1c);
      goto LAB_ovl_36__02999d;
    }
  }
  uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
LAB_ovl_36__02999d:
  *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = uVar1;
  return;
}



/* ovl_36::029bac FUN_ovl_36__029bac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_36__029bac(void)

{
  if (*(int *)(_DAT_3000_aac9 + 0x6e) != 0x307) {
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
  }
  if (*(int *)(_DAT_3000_aac9 + 0xaa) != 0x307) {
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xf9;
  }
  if (*(int *)(_DAT_3000_aac9 + 0xaa) == 0x307) {
    *(undefined1 *)(_DAT_3000_aac9 + 0x3a) = 1;
    return;
  }
  *(undefined1 *)(_DAT_3000_aac9 + 0x3a) = 0;
  return;
}


