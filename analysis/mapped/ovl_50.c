/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_50::0290a0 ovl_50_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_50_entry_290a_0000(void)

{
  if (-1 < _DAT_2a22_e331) {
    if (1 < _DAT_2a22_e331) {
      if (_DAT_2a22_e331 == 2) {
        FUN_ovl_50__02919c(0xfd12,0x1518,0);
        FUN_ovl_50__02919c(0x2ee,6000,0);
        FUN_ovl_50__02922c(0,6000,1000,0x3000);
      }
      else {
        if (_DAT_2a22_e331 != 3) {
          return;
        }
        FUN_ovl_50__02919c(0,0x12c0,0x2ee);
        FUN_ovl_50__02919c(0,0x1450,0xfd12);
        FUN_ovl_50__02919c(0xfd12,0x15e0,0);
        FUN_ovl_50__02919c(0x2ee,6000,0);
      }
      FUN_17ba_03b2();
      return;
    }
    FUN_ovl_50__02922c(0xfc18,0x1518,0,0x3000);
    FUN_ovl_50__02922c(1000,6000,0,0xd000);
    FUN_ovl_50__02919c(0,0x1518,0xfd12);
    FUN_ovl_50__02919c(0,6000,0x2ee);
  }
  return;
}



/* ovl_50::02919c FUN_ovl_50__02919c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_50__02919c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x19] = 0x1203;
  *_DAT_3000_aac9 = 0x100;
  _DAT_3000_aac9[0x12] = 0x78;
  _DAT_3000_aac9[0x11] = 0x2400;
  _DAT_3000_aac9[0x18] = 0x19;
  _DAT_3000_aac9[0x15] = 0x40;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  _DAT_3000_aac9[0xb] = 0x8000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar1[0xc] = 0;
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



/* ovl_50::02922c FUN_ovl_50__02922c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_ovl_50__02922c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x19] = 0x1205;
  *_DAT_3000_aac9 = 0x102;
  _DAT_3000_aac9[0x12] = 0x1e;
  _DAT_3000_aac9[0x11] = 0xc00;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0x15] = 400;
  puVar1[0x18] = 400;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  _DAT_3000_aac9[0xb] = param_4;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar1[0xc] = 0;
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



/* ovl_50::0292ba ovl_50_entry_290a_021a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_50_entry_290a_021a(void)

{
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x03') {
    FUN_ovl_50__0292da();
    return;
  }
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x05') {
    FUN_ovl_50__02951c();
    return;
  }
  return;
}



/* ovl_50::0292da FUN_ovl_50__0292da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_50__0292da(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_8;
  
  if (_DAT_2a22_e333 == 2) {
    if (_DAT_3000_aaae == 2) {
      FUN_17ba_03ca();
    }
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
    if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
      local_8 = 0;
      _DAT_3000_aacb = (undefined *)&DAT_3000_a39a;
      while ((local_8 < _DAT_3000_aaa8 &&
             ((((*(int *)(_DAT_3000_aacb + 0x32) == 0 || ((byte)_DAT_3000_aacb[0x32] < 2)) ||
               ((_DAT_3000_aacb[0x33] == *(char *)(_DAT_3000_aac9 + 0x33) ||
                ((FUN_132b_0ea4(), 299 < _DAT_3000_aab6 ||
                 (iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8), 0xfff < iVar2)))))) ||
              (iVar2 = FUN_19c7_4e0a(_DAT_3000_aaba), 0xfff < iVar2))))) {
        local_8 = local_8 + 1;
        _DAT_3000_aacb = _DAT_3000_aacb + 0x3c;
      }
      if (local_8 < _DAT_3000_aaa8) {
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
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6;
        _DAT_3000_aacd[0x15] = 4;
        _DAT_3000_aacd[0x17] = 0x10;
        if (_DAT_3000_aacb == _DAT_3000_d121) {
          FUN_1951_017a(4);
          return;
        }
      }
    }
    else {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}



/* ovl_50::02951c FUN_ovl_50__02951c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_50__02951c(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int local_a;
  int local_8 [2];
  int local_4;
  
  if (_DAT_2a22_e333 == 2) {
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
      if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 10;
        FUN_1897_0502((undefined *)&DAT_2a22_581a,*(undefined2 *)(_DAT_3000_aac9 + 0x16),
                      -*(int *)(_DAT_3000_aac9 + 0x18),-*(int *)(_DAT_3000_aac9 + 0x1a));
        _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
        _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
        *_DAT_3000_aacd = 0x103;
        local_4 = 0;
        local_a = -0x60;
        local_8[0] = *(int *)(_DAT_3000_aac9 + 0x2a) + 100;
        FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_4,local_8,&local_a);
        iVar1 = *(int *)(_DAT_3000_aac9 + 2) + local_4;
        _DAT_3000_aacd[1] = iVar1;
        _DAT_3000_aacd[4] = iVar1;
        iVar1 = *(int *)(_DAT_3000_aac9 + 4) + local_8[0];
        _DAT_3000_aacd[2] = iVar1;
        _DAT_3000_aacd[5] = iVar1;
        iVar1 = *(int *)(_DAT_3000_aac9 + 6) + local_a;
        _DAT_3000_aacd[3] = iVar1;
        _DAT_3000_aacd[6] = iVar1;
        _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
        _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
        _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
        _DAT_3000_aacd[0xe] = 0x96;
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 7;
        _DAT_3000_aacd[0x15] = 0x30;
        _DAT_3000_aacd[0x17] = 0x100;
        FUN_1951_017a(0xd);
      }
    }
    else {
      *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
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
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}


