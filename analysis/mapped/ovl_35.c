/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_35::0290a0 ovl_35_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_35_entry_290a_0000(void)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (_DAT_2a22_e331 == 0) {
    FUN_ovl_35__02916a(0,6000,0);
    _DAT_2a22_dc7e = 3;
    if (_DAT_2a22_e5c2 < 2) goto LAB_ovl_35__029138;
    uVar4 = 0xf830;
  }
  else {
    if (_DAT_2a22_e331 != 1) {
      if (_DAT_2a22_e331 == 2) {
        iVar2 = FUN_19c7_4e32();
        if (iVar2 < 3) {
          _DAT_2a22_dc7e = 2;
        }
        else {
          _DAT_2a22_dc7e = 1;
        }
        FUN_ovl_35__0292f0(0,6000,0);
        _DAT_2a22_dc7e = 0;
        uVar4 = 6000;
        uVar3 = 0x5dc;
      }
      else {
        if (_DAT_2a22_e331 != 3) {
          return;
        }
        bVar1 = FUN_19c7_4e32();
        _DAT_2a22_dc7e = ((bVar1 & 7) < 2) + 1;
        uVar4 = 6000;
        uVar3 = 0;
      }
      goto LAB_ovl_35__0290db;
    }
    FUN_ovl_35__02916a(0,6000,0);
    _DAT_2a22_dc7e = 2;
LAB_ovl_35__029138:
    uVar4 = 0xf060;
  }
  uVar3 = 2000;
LAB_ovl_35__0290db:
  FUN_ovl_35__0292f0(uVar3,uVar4,0);
  return;
}



/* ovl_35::02916a FUN_ovl_35__02916a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_35__02916a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int local_4;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x103;
  _DAT_3000_aac9[0x19] = 0x206;
  _DAT_3000_aac9[0x18] = 1000;
  _DAT_3000_aac9[0x15] = 0x480;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar2[4] = param_1;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar2[5] = param_2;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar2[6] = param_3;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  _DAT_3000_aac9[0x11] = 0x400;
  _DAT_3000_aacb = _DAT_3000_aac9;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 0x3f;
  local_4 = 0;
  do {
    _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
    *_DAT_3000_aac9 = 0x187;
    _DAT_3000_aac9[0x19] = 0x207;
    _DAT_3000_aac9[0x18] = 1;
    _DAT_3000_aac9[0x15] = 0x18;
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
    _DAT_3000_aac9[0x11] = 0;
    _DAT_3000_aac9[0x12] = 0x46;
    _DAT_3000_aac9[0x17] = *(undefined2 *)(local_4 * 2 + -0x7cb4);
    *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = *(undefined1 *)(local_4 * 2 + -0x7ca8);
    _DAT_3000_aac9[7] = *(undefined2 *)(local_4 * 2 + -0x7c9c);
    _DAT_3000_aac9[8] = *(undefined2 *)(local_4 * 2 + -0x7c90);
    _DAT_3000_aac9[9] = *(undefined2 *)(local_4 * 2 + -0x7c84);
    local_4 = local_4 + 1;
  } while (local_4 < 6);
  return;
}



/* ovl_35::0292f0 FUN_ovl_35__0292f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_35__0292f0(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  _DAT_3000_aac9 = (uint *)FUN_132b_0410();
  *_DAT_3000_aac9 = *(uint *)(_DAT_2a22_dc7e * 2 + -0x7cd6) | 0x100;
  _DAT_3000_aac9[0x19] = 0x205;
  *(undefined1 *)((int)_DAT_3000_aac9 + 0x3b) = DAT_2a22_dc7e;
  _DAT_3000_aac9[0x11] = *(uint *)(_DAT_2a22_dc7e * 2 + -0x7ce6);
  _DAT_3000_aac9[0x12] = *(uint *)(_DAT_2a22_dc7e * 2 + -0x7cee);
  _DAT_3000_aac9[0x18] = *(uint *)(_DAT_2a22_dc7e * 2 + -0x7cde);
  _DAT_3000_aac9[0x15] = *(uint *)(_DAT_2a22_dc7e * 2 + -0x7cde);
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 3;
  _DAT_3000_aac9[0x1a] = (uint)(undefined *)&DAT_3000_a39a;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xf] = 0;
  puVar1[0x10] = 0;
  if (_DAT_3000_aaac == 2) {
    iVar2 = FUN_19c7_4e32();
    uVar3 = iVar2 << 1;
  }
  else {
    uVar3 = _DAT_3000_a428;
  }
  _DAT_3000_aac9[0xb] = uVar3;
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
  _DAT_3000_aacb = _DAT_3000_aac9;
  _DAT_3000_aac9 = (uint *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x187;
  _DAT_3000_aac9[0x19] = 0x207;
  _DAT_3000_aac9[0x18] = 1;
  _DAT_3000_aac9[0x15] = *(undefined2 *)(_DAT_2a22_dc7e * 2 + -0x7cc6);
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = *(undefined2 *)(_DAT_2a22_dc7e * 2 + -0x7cce);
  _DAT_3000_aac9[9] = 0;
  uVar3 = _DAT_3000_aacb[1];
  _DAT_3000_aac9[1] = uVar3;
  _DAT_3000_aac9[4] = uVar3;
  uVar3 = _DAT_3000_aacb[2];
  _DAT_3000_aac9[2] = uVar3;
  _DAT_3000_aac9[5] = uVar3;
  uVar3 = _DAT_3000_aacb[3];
  _DAT_3000_aac9[3] = uVar3;
  _DAT_3000_aac9[6] = uVar3;
  _DAT_3000_aac9[0xb] = _DAT_3000_aacb[0xb];
  _DAT_3000_aac9[0xc] = _DAT_3000_aacb[0xc];
  _DAT_3000_aac9[0xd] = _DAT_3000_aacb[0xd];
  _DAT_3000_aac9[0x11] = 0;
  _DAT_3000_aac9[0x12] = *(undefined2 *)(_DAT_2a22_dc7e * 2 + -0x7cbe);
  _DAT_3000_aac9[0x17] = 0;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = 3;
  return;
}



/* ovl_35::0294ce ovl_35_entry_290a_042e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_35_entry_290a_042e(void)

{
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x06') {
    FUN_ovl_35__0297d0();
    return;
  }
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\a') {
    FUN_17ba_0006();
    return;
  }
  FUN_ovl_35__0294f4();
  return;
}



/* ovl_35::0294f4 FUN_ovl_35__0294f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_35__0294f4(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (_DAT_2a22_e333 == 2) {
    if (*(int *)(_DAT_3000_aac9 + 0x6e) != 0x207) {
      *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
    }
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
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 10;
        _DAT_2a22_dc7e = (uint)*(byte *)(_DAT_3000_aac9 + 0x3b);
        FUN_1897_0502((undefined *)&DAT_2a22_581a,*(undefined2 *)(_DAT_3000_aac9 + 0x16),
                      -*(int *)(_DAT_3000_aac9 + 0x18),-*(int *)(_DAT_3000_aac9 + 0x1a));
        for (local_6 = 0; local_6 < *(int *)(_DAT_2a22_dc7e * 2 + -0x7c50); local_6 = local_6 + 1) {
          _DAT_3000_aacd = (uint *)FUN_132b_0410();
          _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
          *_DAT_3000_aacd = (0 < (int)_DAT_2a22_dc7e) + 4 | 0x100;
          if (_DAT_2a22_dc7e == 3) {
            local_4 = *(int *)(local_6 * 2 + -0x7c68);
            local_a = *(int *)(local_6 * 2 + -0x7c5c);
          }
          else if (_DAT_2a22_dc7e == 0) {
            local_4 = 0;
            local_a = 0;
          }
          else {
            local_4 = *(int *)(local_6 * 2 + -0x7c78);
            local_a = *(int *)(local_6 * 2 + -0x7c70);
          }
          local_8 = *(int *)(_DAT_3000_aac9 + 0x2a) + 100;
          FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_4,&local_8,&local_a);
          uVar2 = *(int *)(_DAT_3000_aac9 + 2) + local_4;
          _DAT_3000_aacd[1] = uVar2;
          _DAT_3000_aacd[4] = uVar2;
          uVar2 = *(int *)(_DAT_3000_aac9 + 4) + local_8;
          _DAT_3000_aacd[2] = uVar2;
          _DAT_3000_aacd[5] = uVar2;
          uVar2 = *(int *)(_DAT_3000_aac9 + 6) + local_a;
          _DAT_3000_aacd[3] = uVar2;
          _DAT_3000_aacd[6] = uVar2;
          _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
          _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
          _DAT_3000_aacd[0xd] = *(uint *)(_DAT_3000_aac9 + 0x1a);
          _DAT_3000_aacd[0xe] = 200;
          _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 7;
          _DAT_3000_aacd[0x15] = 0x40;
          iVar1 = FUN_14b9_02b2(0x80);
          _DAT_3000_aacd[0x17] = (uint)(0 < (int)_DAT_2a22_dc7e) * iVar1 + 0x40;
        }
        FUN_1951_017a(0xd);
      }
    }
    else {
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
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}



/* ovl_35::0297d0 FUN_ovl_35__0297d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_35__0297d0(void)

{
  int iVar1;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (_DAT_2a22_e333 == 2) {
    local_6 = 0;
    do {
      if (*(int *)(_DAT_3000_aac9 + local_6 * 0x3c + 0x6e) != 0x207) {
        *(byte *)(_DAT_3000_aac9 + 0x38) =
             *(byte *)(_DAT_3000_aac9 + 0x38) & ~('\x01' << ((byte)local_6 & 0x1f));
      }
      local_6 = local_6 + 1;
    } while (local_6 < 6);
    FUN_132b_0e94();
    *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
    *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    if ((_DAT_3000_aab6 < 2000) && (*(int *)(_DAT_3000_aac9 + 0x28) == 0)) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 10;
      FUN_1897_0502((undefined *)&DAT_2a22_581a,*(undefined2 *)(_DAT_3000_aac9 + 0x16),
                    -*(int *)(_DAT_3000_aac9 + 0x18),-*(int *)(_DAT_3000_aac9 + 0x1a));
      local_6 = 0;
      do {
        _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
        _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
        *_DAT_3000_aacd = 0x105;
        local_4 = *(int *)(local_6 * 2 + -0x7c78);
        local_a = *(int *)(local_6 * 2 + -0x7c70);
        local_8 = *(int *)(_DAT_3000_aac9 + 0x2a) + 100;
        FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_4,&local_8,&local_a);
        iVar1 = *(int *)(_DAT_3000_aac9 + 2) + local_4;
        _DAT_3000_aacd[1] = iVar1;
        _DAT_3000_aacd[4] = iVar1;
        iVar1 = *(int *)(_DAT_3000_aac9 + 4) + local_8;
        _DAT_3000_aacd[2] = iVar1;
        _DAT_3000_aacd[5] = iVar1;
        iVar1 = *(int *)(_DAT_3000_aac9 + 6) + local_a;
        _DAT_3000_aacd[3] = iVar1;
        _DAT_3000_aacd[6] = iVar1;
        _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
        _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
        _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
        _DAT_3000_aacd[0xe] = 200;
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 6;
        _DAT_3000_aacd[0x15] = 0x40;
        iVar1 = FUN_14b9_02b2(0x80);
        _DAT_3000_aacd[0x17] = iVar1 + 0x40;
        local_6 = local_6 + 1;
      } while (local_6 < 4);
      FUN_1951_017a(0xd);
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}


