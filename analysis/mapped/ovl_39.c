/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_39::0290a0 ovl_39_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_39_entry_290a_0000(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (_DAT_2a22_e331 == 0) {
    FUN_ovl_39__0292a2(0,6000,0);
    FUN_ovl_39__02915e(0xf830,4000,0,4);
    FUN_ovl_39__02915e(2000,4000,0,4);
    uVar4 = 5;
    uVar3 = 300;
    uVar2 = 6000;
    uVar1 = 0xfa24;
  }
  else if (_DAT_2a22_e331 == 1) {
    FUN_ovl_39__0292a2(0,6000,0);
    FUN_ovl_39__02915e(0xf830,4000,0,4);
    uVar4 = 4;
    uVar3 = 0;
    uVar2 = 4000;
    uVar1 = 2000;
  }
  else {
    if ((_DAT_2a22_e331 < 2) || (3 < _DAT_2a22_e331)) {
      return;
    }
    uVar4 = 5;
    uVar3 = 0;
    uVar2 = 6000;
    uVar1 = 0xfd12;
  }
  FUN_ovl_39__02915e(uVar1,uVar2,uVar3,uVar4);
  return;
}



/* ovl_39::02915e FUN_ovl_39__02915e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_ovl_39__02915e(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  if (param_4 == 3) {
    _DAT_3000_aac9[0x19] = 0x603;
    *_DAT_3000_aac9 = 0x101;
    puVar1 = _DAT_3000_aac9;
    _DAT_3000_aac9[0xe] = 200;
    puVar1[0x12] = 200;
    _DAT_3000_aac9[0x11] = 0x1e00;
    _DAT_3000_aac9[0x18] = 0x14;
    _DAT_3000_aac9[0x15] = 0x18;
    _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a412;
  }
  else {
    if (param_4 == 4) {
      _DAT_3000_aac9[0x19] = 0x604;
      *_DAT_3000_aac9 = 0x100;
      puVar1 = _DAT_3000_aac9;
      _DAT_3000_aac9[0xe] = 0xdc;
      puVar1[0x12] = 0xdc;
      _DAT_3000_aac9[0x11] = 0x1e00;
      _DAT_3000_aac9[0x18] = 0xf;
      _DAT_3000_aac9[0x15] = 0x18;
    }
    else {
      if (param_4 != 5) goto LAB_ovl_39__02924e;
      _DAT_3000_aac9[0x19] = 0x605;
      *_DAT_3000_aac9 = 0x102;
      puVar1 = _DAT_3000_aac9;
      _DAT_3000_aac9[0xe] = 0x96;
      puVar1[0x12] = 0x96;
      _DAT_3000_aac9[0x11] = 0x1e00;
      _DAT_3000_aac9[0x18] = 0x4b;
      _DAT_3000_aac9[0x15] = 0x6c;
    }
    _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  }
LAB_ovl_39__02924e:
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xb] = 0x8000;
  puVar1[0xf] = 0x8000;
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



/* ovl_39::0292a2 FUN_ovl_39__0292a2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_39__0292a2(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x103;
  _DAT_3000_aac9[0x19] = 0x606;
  _DAT_3000_aac9[0x18] = 1000;
  _DAT_3000_aac9[0x15] = 0x420;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar1[4] = param_1;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar1[5] = param_2;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar1[6] = param_3;
  _DAT_3000_aac9[0xb] = 0x4000;
  _DAT_3000_aac9[0x11] = 0x400;
  return;
}



/* ovl_39::02931a ovl_39_entry_290a_027a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_39_entry_290a_027a(void)

{
  byte bVar1;
  
  bVar1 = *(byte *)(_DAT_3000_aac9 + 0x32);
  if (bVar1 == 3) {
    FUN_ovl_39__0295bc();
    return;
  }
  if (3 < bVar1) {
    if (bVar1 < 6) {
      FUN_ovl_39__02934a();
      return;
    }
    if (bVar1 != 6) {
      return;
    }
    FUN_ovl_39__0297dc();
  }
  return;
}



/* ovl_39::02934a FUN_ovl_39__02934a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_39__02934a(void)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  FUN_132b_0e94();
  if (*(char *)(_DAT_3000_aac9 + 0x37) == '\0') {
    if (((_DAT_3000_ab6f < CONCAT11((char)((uint)_DAT_3000_aab6 >> 8) + '\x02',(char)_DAT_3000_aab6)
         ) || (iVar3 = FUN_19c7_4e0a(_DAT_3000_aab8), 0x2fff < iVar3)) ||
       (iVar3 = FUN_19c7_4e0a(_DAT_3000_aaba), 0x2fff < iVar3)) {
      *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
      *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    }
    else {
      if (_DAT_3000_aaba < 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = 1;
      }
      *(int *)(_DAT_3000_aac9 + 0x20) = iVar3 * -0x2000;
      if (_DAT_3000_aab8 < 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = 1;
      }
      *(int *)(_DAT_3000_aac9 + 0x1e) = iVar3 * -0x4000;
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 1;
    }
    if ((*(char *)(_DAT_3000_aac9 + 0x32) == '\x05') && (_DAT_3000_ab61 != 0)) {
      uVar1 = FUN_19c7_4e32();
      if ((uVar1 & 1) == 0) {
        uVar2 = 0xd000;
      }
      else {
        uVar2 = 0x3000;
      }
      *(undefined2 *)(_DAT_3000_aac9 + 0x20) = uVar2;
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 2;
    }
  }
  else {
    if (*(char *)(_DAT_3000_aac9 + 0x37) == '\x01') {
      if (_DAT_3000_aab6 < 1000) goto LAB_ovl_39__02943b;
    }
    else if ((*(char *)(_DAT_3000_aac9 + 0x37) != '\x02') || (_DAT_3000_ab5f != 0))
    goto LAB_ovl_39__02943b;
    *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
  }
LAB_ovl_39__02943b:
  if (_DAT_2a22_e333 == 2) {
    if (((_DAT_3000_aab6 < 1000) && (iVar3 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar3 < 0x500)) &&
       (iVar3 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar3 < 0x500)) {
      if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
        *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
        return;
      }
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),1);
      uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 2);
      _DAT_3000_aacd[1] = uVar2;
      _DAT_3000_aacd[4] = uVar2;
      uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 4);
      _DAT_3000_aacd[2] = uVar2;
      _DAT_3000_aacd[5] = uVar2;
      uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 6);
      _DAT_3000_aacd[3] = uVar2;
      _DAT_3000_aacd[6] = uVar2;
      _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
      _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
      _DAT_3000_aacd[0xd] = -0x8000 - *(int *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0xe] = 500;
      _DAT_3000_aacd[0x15] = 4;
      if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x05') {
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 6;
        *_DAT_3000_aacd = 4;
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 << 1;
        iVar3 = FUN_14b9_02b2(0xc0);
        _DAT_3000_aacd[0x17] = iVar3 + 0xc0;
      }
      else {
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 << 2;
        *_DAT_3000_aacd = 0x11;
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6;
        _DAT_3000_aacd[0x17] = 0x20;
      }
      if (_DAT_3000_aacb == _DAT_3000_d121) {
        FUN_1951_017a(4);
        return;
      }
    }
    else {
      *(undefined2 *)(_DAT_3000_aac9 + 0x28) = 0;
    }
  }
  return;
}



/* ovl_39::0295bc FUN_ovl_39__0295bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_39__0295bc(void)

{
  int iVar1;
  undefined2 uVar2;
  
  if (*(char *)(*(int *)(_DAT_3000_aac9 + 0x34) + 0x33) != '\x01') {
    *(undefined2 *)(_DAT_3000_aac9 + 0x34) = (undefined *)&DAT_3000_a412;
  }
  if (((undefined *)*(undefined2 *)(_DAT_3000_aac9 + 0x34) == (undefined *)&DAT_3000_a412) &&
     (0 < _DAT_3000_ab73)) {
    *(undefined2 *)(_DAT_3000_aac9 + 0x34) = (undefined *)&DAT_3000_a39a + _DAT_3000_ab75 * 0x3c;
    FUN_1697_1138(_DAT_3000_ab75);
  }
  FUN_132b_0e94();
  if ((undefined *)*(undefined2 *)(_DAT_3000_aac9 + 0x34) == (undefined *)&DAT_3000_a412) {
    if (((_DAT_3000_aab6 < 2000) && (iVar1 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar1 < 0x4001)) &&
       (iVar1 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar1 < 0x4001)) {
      if (_DAT_3000_aab8 < 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = 1;
      }
      *(int *)(_DAT_3000_aac9 + 0x1e) = iVar1 * -0x4000 + _DAT_3000_aab8;
      *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
      return;
    }
  }
  else {
    if ((DAT_2a22_fad4 & 3) == 0) {
      *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
      *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
    }
    if (_DAT_3000_aab6 < 400) {
      uVar2 = *(undefined2 *)(_DAT_3000_aacb + 0x1c);
    }
    else {
      uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
    }
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = uVar2;
    if (_DAT_2a22_e333 == 2) {
      if (((_DAT_3000_aab6 < 1000) && (iVar1 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar1 < 0x800)) &&
         (iVar1 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar1 < 0x800)) {
        if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
          *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
          return;
        }
        *(undefined2 *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6;
        _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
        _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),1);
        *_DAT_3000_aacd = 0x11;
        uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 2);
        _DAT_3000_aacd[1] = uVar2;
        _DAT_3000_aacd[4] = uVar2;
        uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 4);
        _DAT_3000_aacd[2] = uVar2;
        _DAT_3000_aacd[5] = uVar2;
        uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 6);
        _DAT_3000_aacd[3] = uVar2;
        _DAT_3000_aacd[6] = uVar2;
        _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
        _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
        _DAT_3000_aacd[0xd] = -0x8000 - *(int *)(_DAT_3000_aac9 + 0x1a);
        _DAT_3000_aacd[0xe] = 500;
        _DAT_3000_aacd[0x15] = 4;
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6;
        _DAT_3000_aacd[0x17] = 0x20;
        if (_DAT_3000_aacb == _DAT_3000_d121) {
          FUN_1951_017a(4);
          return;
        }
      }
      else {
        *(undefined2 *)(_DAT_3000_aac9 + 0x28) = 0;
      }
    }
  }
  return;
}



/* ovl_39::0297dc FUN_ovl_39__0297dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_39__0297dc(void)

{
  undefined2 uVar1;
  int iVar2;
  
  FUN_132b_0e94();
  *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
  *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
  if (((_DAT_3000_aab6 < 4000) && (iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar2 < 0x800)) &&
     (iVar2 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar2 < 0x800)) {
    if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 << 3;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = 0x602;
      *_DAT_3000_aacd = 4;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 2);
      _DAT_3000_aacd[1] = uVar1;
      _DAT_3000_aacd[4] = uVar1;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 4);
      _DAT_3000_aacd[2] = uVar1;
      _DAT_3000_aacd[5] = uVar1;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 6);
      _DAT_3000_aacd[3] = uVar1;
      _DAT_3000_aacd[6] = uVar1;
      _DAT_3000_aacd[0xe] = 500;
      _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
      _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
      _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 << 3;
      _DAT_3000_aacd[0x15] = 0x60;
      iVar2 = FUN_14b9_02b2(0xc0);
      _DAT_3000_aacd[0x17] = iVar2 + 0xc0;
      return;
    }
    *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
  }
  return;
}


