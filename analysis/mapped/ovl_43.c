/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_43::0290a0 ovl_43_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_43_entry_290a_0000(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  _DAT_2a22_dc8c = 0;
  if (_DAT_2a22_e331 == 0) {
    FUN_ovl_43__02918a(0,6000,0xf060,4);
    uVar3 = 3;
  }
  else {
    if (_DAT_2a22_e331 != 1) {
      if (_DAT_2a22_e331 == 2) {
        uVar1 = FUN_19c7_4e32();
        if ((uVar1 & 7) == 0) {
          uVar3 = 3;
        }
        else if ((uVar1 & 7) < 4) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        uVar4 = 0;
      }
      else {
        if (_DAT_2a22_e331 != 3) {
          return;
        }
        uVar1 = FUN_19c7_4e32();
        if ((uVar1 & 1) == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        uVar4 = 0x2ee;
      }
      uVar2 = 6000;
      goto LAB_ovl_43__0290e5;
    }
    FUN_ovl_43__02918a(0,6000,0xf060,4);
    uVar3 = 2;
  }
  uVar4 = 2000;
  uVar2 = 4000;
LAB_ovl_43__0290e5:
  FUN_ovl_43__02918a(0,uVar2,uVar4,uVar3);
  FUN_ovl_43__02918a(0xfd12,3000,0,0);
  FUN_ovl_43__02918a(0x2ee,3000,0,0);
  return;
}



/* ovl_43::02918a FUN_ovl_43__02918a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_43__02918a(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  
  _DAT_3000_aac9 = (uint *)FUN_132b_0410();
  _DAT_3000_aac9[0x19] = *(uint *)(param_4 * 2 + -0x7c42) | 0xa00;
  *_DAT_3000_aac9 = *(uint *)(param_4 * 2 + -0x7c38) | 0x100;
  _DAT_3000_aac9[0x12] = *(uint *)(param_4 * 2 + -0x7c24);
  _DAT_3000_aac9[0x11] = (uint)*(byte *)(param_4 * 2 + -0x7c1a) << 8;
  uVar1 = *(uint *)(param_4 * 2 + -0x7c10);
  _DAT_3000_aac9[0x15] = uVar1;
  _DAT_3000_aac9[0x18] = uVar1;
  if (2 < param_4) {
    _DAT_3000_aac9[0x15] = _DAT_3000_aac9[0x15] + 200;
  }
  _DAT_3000_aac9[0x1a] = (uint)(undefined *)&DAT_3000_a39a;
  _DAT_3000_aac9[0xb] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar2[4] = param_1;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar2[5] = param_2;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar2[6] = param_3;
  if (param_4 == 0) {
    _DAT_2a22_dc8c = _DAT_2a22_dc8c + 1;
    return;
  }
  _DAT_3000_aacb = _DAT_3000_aac9;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 1;
  _DAT_3000_aac9 = (uint *)FUN_132b_0410();
  *_DAT_3000_aac9 = *(uint *)(param_4 * 2 + -0x7c2e) | 0x100;
  _DAT_3000_aac9[0x19] = 0xa07;
  _DAT_3000_aac9[0x18] = 0x3fff;
  _DAT_3000_aac9[0x15] = *(int *)(param_4 * 2 + -0x7c10) + 0x32;
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
  if (2 < param_4) {
    _DAT_3000_aac9 = (uint *)FUN_132b_0410();
    _DAT_3000_aac9[0x19] = 0xa07;
    _DAT_3000_aac9[0x18] = 1;
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
    if (param_4 == 3) {
      *_DAT_3000_aac9 = 0x18d;
      _DAT_3000_aac9[0x15] = 0x150;
      _DAT_3000_aac9[7] = 0;
      _DAT_3000_aac9[8] = 0;
      _DAT_3000_aac9[9] = 0x180;
      return;
    }
    *_DAT_3000_aac9 = 0x18e;
    _DAT_3000_aac9[0x15] = 0x2a0;
    _DAT_3000_aac9[7] = 0;
    _DAT_3000_aac9[8] = 0;
    _DAT_3000_aac9[9] = 0x300;
  }
  return;
}



/* ovl_43::02943a ovl_43_entry_290a_039a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_43_entry_290a_039a(void)

{
  char cVar1;
  
  cVar1 = *(char *)(_DAT_3000_aac9 + 0x32);
  if (cVar1 == '\x03') {
    FUN_ovl_43__02947c();
    return;
  }
  if (cVar1 == '\x04') {
    FUN_ovl_43__02969e();
    return;
  }
  if (cVar1 == '\x05') {
    FUN_ovl_43__02992e();
    return;
  }
  if (cVar1 == '\x06') {
    FUN_ovl_43__029b4a();
    return;
  }
  if (cVar1 == '\a') {
    FUN_ovl_43__029b18();
    return;
  }
  return;
}



/* ovl_43::02947c FUN_ovl_43__02947c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_43__02947c(void)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
  FUN_132b_0e94();
  if (*(char *)(_DAT_3000_aac9 + 0x37) == '\0') {
    if (((_DAT_3000_ab6f < CONCAT11((char)((uint)_DAT_3000_aab6 >> 8) + '\x02',(char)_DAT_3000_aab6)
         ) || (iVar3 = FUN_19c7_4e0a(_DAT_3000_aab8), 0x2fff < iVar3)) ||
       (iVar3 = FUN_19c7_4e0a(_DAT_3000_aaba), 0x2fff < iVar3)) {
      if (_DAT_3000_ab5f >> 1 == 0) {
        *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
      }
      *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    }
    else {
      if (_DAT_3000_ab5f >> 1 == 0) {
        if (_DAT_3000_aaba < 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = 1;
        }
        *(int *)(_DAT_3000_aac9 + 0x20) = iVar3 * -0x2000;
      }
      if (_DAT_3000_aab8 < 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = 1;
      }
      *(int *)(_DAT_3000_aac9 + 0x1e) = iVar3 * -0x4000;
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 1;
    }
  }
  else if (0x5db < _DAT_3000_aab6) {
    *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
  }
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
  if (_DAT_2a22_e333 == 2) {
    if (((_DAT_3000_aab6 < 800) && (iVar3 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar3 < 0x800)) &&
       ((iVar3 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar3 < 0x800 &&
        (*(int *)(_DAT_3000_aac9 + 0x28) == 0)))) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 + 1 >> 1;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),1);
      *_DAT_3000_aacd = 0x105;
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
      _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0xe] = 200;
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 3;
      _DAT_3000_aacd[0x15] = 6;
      _DAT_3000_aacd[0x17] = 0xc;
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



/* ovl_43::02969e FUN_ovl_43__02969e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_43__02969e(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_a;
  int local_8 [2];
  int local_4;
  
  if ((*(char *)(_DAT_3000_aac9 + 0x32) == '\x05') && (*(int *)(_DAT_3000_aac9 + 0xaa) != 0xa07)) {
    FUN_132b_0466((_DAT_3000_aac9 + 0x4312) / 0x3c);
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
    *(undefined1 *)(_DAT_3000_aac9 + 0x3a) = 0;
  }
  if (_DAT_2a22_e333 == 2) {
    FUN_132b_0e94();
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
    if (*(char *)(_DAT_3000_aac9 + 0x37) == '\0') {
      if (_DAT_3000_aab6 < 0x5dc) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
      }
      *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = uVar1;
      *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
      if (_DAT_3000_aab6 < 500) {
        *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 1;
      }
    }
    if (*(char *)(_DAT_3000_aac9 + 0x37) == '\x01') {
      if (0x5dc < _DAT_3000_aab6) {
        *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
      }
      *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
      *(undefined2 *)(_DAT_3000_aac9 + 0x1e) =
           CONCAT11((char)((uint)_DAT_3000_aab8 >> 8) + -0x80,(char)_DAT_3000_aab8);
    }
    if ((((_DAT_3000_aab6 < 2000) && (iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar2 < 0xaab)) &&
        (iVar2 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar2 < 0xaab)) &&
       (*(int *)(_DAT_3000_aac9 + 0x28) == 0)) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 << 1;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
      FUN_1897_0502((undefined *)&DAT_2a22_581a,*(undefined2 *)(_DAT_3000_aac9 + 0x16),
                    -*(int *)(_DAT_3000_aac9 + 0x18),-*(int *)(_DAT_3000_aac9 + 0x1a));
      local_4 = 0;
      local_8[0] = 0;
      local_a = *(int *)(_DAT_3000_aac9 + 0x2a);
      if (_DAT_2a22_c84a != 0) {
        local_a = -local_a;
      }
      FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_4,local_8,&local_a);
      iVar2 = *(int *)(_DAT_3000_aac9 + 2) + local_4;
      _DAT_3000_aacd[1] = iVar2;
      _DAT_3000_aacd[4] = iVar2;
      iVar2 = *(int *)(_DAT_3000_aac9 + 4) + local_8[0];
      _DAT_3000_aacd[2] = iVar2;
      _DAT_3000_aacd[5] = iVar2;
      iVar2 = *(int *)(_DAT_3000_aac9 + 6) + local_a;
      _DAT_3000_aacd[3] = iVar2;
      _DAT_3000_aacd[6] = iVar2;
      _DAT_3000_aacd[0xb] = *(undefined2 *)(_DAT_3000_aac9 + 0x16);
      if (_DAT_2a22_c84a == 0) {
        iVar2 = 0x4000;
      }
      else {
        iVar2 = -0x4000;
      }
      _DAT_3000_aacd[0xc] = iVar2 + *(int *)(_DAT_3000_aac9 + 0x18);
      _DAT_2a22_c84a = _DAT_2a22_c84a ^ 1;
      _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0x11] = 0x2d00;
      *(undefined1 *)((int)_DAT_3000_aacd + 0x3b) = 1;
      _DAT_3000_aacd[0x1a] = _DAT_3000_aacb;
      _DAT_3000_aacd[0xe] = 200;
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 10;
      if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x04') {
        *_DAT_3000_aacd = 0x106;
        _DAT_3000_aacd[0x15] = 0xc;
        _DAT_3000_aacd[0x17] = 0x18;
      }
      else {
        *_DAT_3000_aacd = 0x107;
        _DAT_3000_aacd[0x15] = 0x18;
        _DAT_3000_aacd[0x17] = 0x30;
      }
      FUN_1951_017a(0xd);
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}



/* ovl_43::02992e FUN_ovl_43__02992e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_43__02992e(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_a;
  int local_8 [2];
  int local_4;
  
  if (*(int *)(_DAT_3000_aac9 + 0xaa) != 0xa07) {
    *(byte *)(_DAT_3000_aac9 + 0x6f) = *(byte *)(_DAT_3000_aac9 + 0x6f) | 0x80;
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
    *(undefined1 *)(_DAT_3000_aac9 + 0x3a) = 0;
  }
  if (_DAT_2a22_e333 == 2) {
    FUN_132b_0e94();
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    if (_DAT_3000_aab6 < 0x5dc) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
    }
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = uVar1;
    if ((_DAT_3000_aab6 < 2000) && (*(int *)(_DAT_3000_aac9 + 0x28) == 0)) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 << 2;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
      FUN_1897_0502((undefined *)&DAT_2a22_581a,*(undefined2 *)(_DAT_3000_aac9 + 0x16),
                    -*(int *)(_DAT_3000_aac9 + 0x18),-*(int *)(_DAT_3000_aac9 + 0x1a));
      local_4 = 0;
      local_8[0] = 0;
      local_a = *(int *)(_DAT_3000_aac9 + 0x2a);
      if (_DAT_2a22_c84c != 0) {
        local_a = -local_a;
      }
      FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_4,local_8,&local_a);
      iVar2 = *(int *)(_DAT_3000_aac9 + 2) + local_4;
      _DAT_3000_aacd[1] = iVar2;
      _DAT_3000_aacd[4] = iVar2;
      iVar2 = *(int *)(_DAT_3000_aac9 + 4) + local_8[0];
      _DAT_3000_aacd[2] = iVar2;
      _DAT_3000_aacd[5] = iVar2;
      iVar2 = *(int *)(_DAT_3000_aac9 + 6) + local_a;
      _DAT_3000_aacd[3] = iVar2;
      _DAT_3000_aacd[6] = iVar2;
      _DAT_3000_aacd[0xb] = *(undefined2 *)(_DAT_3000_aac9 + 0x16);
      if (_DAT_2a22_c84c == 0) {
        iVar2 = 0x4000;
      }
      else {
        iVar2 = -0x4000;
      }
      _DAT_3000_aacd[0xc] = iVar2 + *(int *)(_DAT_3000_aac9 + 0x18);
      _DAT_2a22_c84c = _DAT_2a22_c84c ^ 1;
      _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0x11] = 0x2d00;
      *(undefined1 *)((int)_DAT_3000_aacd + 0x3b) = 1;
      _DAT_3000_aacd[0x1a] = _DAT_3000_aacb;
      _DAT_3000_aacd[0xe] = 200;
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 10;
      *_DAT_3000_aacd = 0x108;
      _DAT_3000_aacd[0x15] = 0x30;
      _DAT_3000_aacd[0x17] = 0x60;
      FUN_1951_017a(0xd);
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}



/* ovl_43::029b18 FUN_ovl_43__029b18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_43__029b18(void)

{
  int iVar1;
  
  if (*_DAT_3000_aac9 < 0x18d) {
    _DAT_3000_aac9[0x18] = 0x3fff;
    if ((char)_DAT_3000_aac9[-5] == '\x06') {
      iVar1 = _DAT_3000_ab15;
    }
    else {
      iVar1 = _DAT_3000_ab13;
    }
    _DAT_3000_aac9[0xb] = -iVar1;
  }
  return;
}



/* ovl_43::029b44 ovl_43_entry_290a_0aa4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_43_entry_290a_0aa4(void)

{
  _DAT_2a22_dc8c = _DAT_2a22_dc8c + -1;
  return;
}



/* ovl_43::029b4a FUN_ovl_43__029b4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_43__029b4a(void)

{
  if (*(int *)(_DAT_3000_aac9 + 0xaa) != 0xa07) {
    *(byte *)(_DAT_3000_aac9 + 0x6f) = *(byte *)(_DAT_3000_aac9 + 0x6f) | 0x80;
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
    *(undefined1 *)(_DAT_3000_aac9 + 0x3a) = 0;
  }
  FUN_132b_0e94();
  if (_DAT_3000_aab6 < 0x9c4) {
    if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 4;
      if (_DAT_2a22_dc8c < 2) {
        FUN_ovl_43__02918a(*(undefined2 *)(_DAT_3000_aac9 + 2),*(undefined2 *)(_DAT_3000_aac9 + 4),
                           *(undefined2 *)(_DAT_3000_aac9 + 6),0);
      }
    }
    else {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
    *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
  }
  return;
}


