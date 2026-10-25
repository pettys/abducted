/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_40::0290a0 ovl_40_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_40_entry_290a_0000(void)

{
  DAT_2a22_dc80 = 0;
  FUN_19c7_4d7c(0x9832,0,10);
  FUN_ovl_40__0290dc(0);
  if (_DAT_2a22_e331 < 2) {
    FUN_ovl_40__0290dc(1);
    return;
  }
  FUN_17ba_03b2();
  return;
}



/* ovl_40::0290dc FUN_ovl_40__0290dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_40__0290dc(int param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *(undefined1 *)(param_1 * 5 + -0x67ce) = DAT_3000_aaac;
  _DAT_3000_aac9[0x19] = 0x703;
  *_DAT_3000_aac9 = 0x100;
  _DAT_3000_aac9[0x12] = 0x82;
  _DAT_3000_aac9[0x11] = 0x3000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0x15] = 0x1e;
  puVar1[0x18] = 0x1e;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  _DAT_3000_aac9[0x14] = _DAT_2a22_fad6 * 10;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xb] = 0x4000;
  puVar1[0xf] = 0x4000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar1[0xc] = 0;
  _DAT_3000_aac9[0x10] = 0;
  if (param_1 == 0) {
    uVar2 = 500;
  }
  else {
    uVar2 = 0xfe0c;
  }
  _DAT_3000_aac9[1] = uVar2;
  _DAT_3000_aac9[4] = uVar2;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = 6000;
  puVar1[5] = 6000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = 500;
  puVar1[6] = 500;
  return;
}



/* ovl_40::0291aa ovl_40_entry_290a_010a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_40_entry_290a_010a(void)

{
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x03') {
    FUN_ovl_40__0291be();
  }
  return;
}



/* ovl_40::0291be FUN_ovl_40__0291be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_40__0291be(void)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int local_8;
  int local_6;
  int local_4;
  
  if (_DAT_2a22_e333 == 2) {
    if (_DAT_3000_aaae == 2) {
      FUN_17ba_03ca();
    }
    for (local_4 = 0; local_4 < 2; local_4 = local_4 + 1) {
      if (*(byte *)(local_4 * 5 + -0x67ce) == _DAT_3000_aaae) {
        if (*(char *)(_DAT_3000_aac9 + 0x36) != '\0') {
          piVar1 = (int *)(_DAT_3000_aac9 + 0x28);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
          _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
          *(undefined1 *)((uint)*(byte *)(_DAT_3000_aac9 + 0x36) + local_4 * 5 + -0x67ce) =
               DAT_3000_aaac;
          _DAT_3000_aacd[0x19] = 0x703;
          *_DAT_3000_aacd = CONCAT11(1,*(undefined1 *)(_DAT_3000_aac9 + 0x36));
          puVar3 = _DAT_3000_aacd;
          _DAT_3000_aacd[0xe] = 0x82;
          puVar3[0x12] = 0x82;
          _DAT_3000_aacd[0x11] = 0x3000;
          puVar3 = _DAT_3000_aacd;
          _DAT_3000_aacd[0x15] = 0x23;
          puVar3[0x18] = 0x23;
          _DAT_3000_aacd[0x1a] = (undefined *)&DAT_3000_a39a;
          uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 0x16);
          _DAT_3000_aacd[0xb] = uVar2;
          _DAT_3000_aacd[0xf] = uVar2;
          uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 0x18);
          _DAT_3000_aacd[0xc] = uVar2;
          _DAT_3000_aacd[0x10] = uVar2;
          if (local_4 == 0) {
            iVar4 = 500;
          }
          else {
            iVar4 = -500;
          }
          iVar4 = iVar4 * (uint)*(byte *)(_DAT_3000_aac9 + 0x36) + *(int *)(_DAT_3000_aac9 + 2);
          _DAT_3000_aacd[1] = iVar4;
          _DAT_3000_aacd[4] = iVar4;
          uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 4);
          _DAT_3000_aacd[2] = uVar2;
          _DAT_3000_aacd[5] = uVar2;
          uVar2 = *(undefined2 *)(_DAT_3000_aac9 + 6);
          _DAT_3000_aacd[3] = uVar2;
          _DAT_3000_aacd[6] = uVar2;
          *(undefined1 *)(_DAT_3000_aac9 + 0x36) = 0;
        }
        if (*(char *)(_DAT_3000_aac9 + 0x36) == '\0') {
          for (local_6 = 1; local_6 < 5; local_6 = local_6 + 1) {
            if (*(char *)(local_6 + local_4 * 5 + -0x67ce) == '\0') {
              *(undefined1 *)(_DAT_3000_aac9 + 0x36) = (undefined1)local_6;
              *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
              *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 10;
              return;
            }
          }
        }
      }
    }
    _DAT_3000_aacb = (undefined *)&DAT_3000_a39a;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
    FUN_132b_0ea4();
    if (*(char *)(_DAT_3000_aac9 + 0x37) == '\0') {
      if (((_DAT_3000_ab6f <
            CONCAT11((char)((uint)_DAT_3000_aab6 >> 8) + '\x02',(char)_DAT_3000_aab6)) ||
          (iVar4 = FUN_19c7_4e0a(_DAT_3000_aab8), 0x2fff < iVar4)) ||
         (iVar4 = FUN_19c7_4e0a(_DAT_3000_aaba), 0x2fff < iVar4)) {
        *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
        *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
      }
      else {
        if (_DAT_3000_aaba < 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = 1;
        }
        *(int *)(_DAT_3000_aac9 + 0x20) = iVar4 * -0x2000;
        if (_DAT_3000_aab8 < 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = 1;
        }
        *(int *)(_DAT_3000_aac9 + 0x1e) = iVar4 * -0x4000;
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
             (((*(int *)(_DAT_3000_aacb + 0x32) == 0 || ((byte)_DAT_3000_aacb[0x32] < 2)) ||
              ((_DAT_3000_aacb[0x33] == *(char *)(_DAT_3000_aac9 + 0x33) ||
               ((FUN_132b_0ea4(), 299 < _DAT_3000_aab6 ||
                (iVar4 = FUN_19c7_4e0a(_DAT_3000_aab8), 0x3fff < iVar4))))))))) {
        local_8 = local_8 + 1;
        _DAT_3000_aacb = _DAT_3000_aacb + 0x3c;
      }
      if (local_8 < _DAT_3000_aaa8) {
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 + 1 >> 1;
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
        _DAT_3000_aacd[0xe] = 800;
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 + 1 >> 1;
        _DAT_3000_aacd[0x15] = 4;
        _DAT_3000_aacd[0x17] = 0x20;
        *(undefined1 *)((int)_DAT_3000_aacd + 0x3b) = 0;
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



/* ovl_40::0295a2 ovl_40_entry_290a_0502 */

void __cdecl16far ovl_40_entry_290a_0502(uint param_1)

{
  char cVar1;
  byte *pbVar2;
  uint local_8;
  uint local_6;
  int local_4;
  
  local_4 = 0;
  do {
    if (1 < local_4) {
      return;
    }
    for (local_6 = 0; (int)local_6 < 5; local_6 = local_6 + 1) {
      pbVar2 = (byte *)(local_6 + local_4 * 5 + -0x67ce);
      if (param_1 == *pbVar2) {
        *pbVar2 = 0;
        if (local_6 < (byte)((undefined *)&DAT_3000_a3d0)
                            [(uint)*(byte *)(local_4 * 5 + -0x67ce) * 0x3c]) {
          ((undefined *)&DAT_3000_a3d0)[(uint)*(byte *)(local_4 * 5 + -0x67ce) * 0x3c] =
               (byte)local_6;
        }
        if (DAT_2a22_dc80 != '\0') {
          return;
        }
        DAT_2a22_dc80 = '\x01';
        while (local_8 = local_6 + 1, (int)local_8 < 5) {
          cVar1 = *(char *)(local_8 + local_4 * 5 + -0x67ce);
          if (cVar1 != '\0') {
            FUN_132b_0466(cVar1);
          }
          local_6 = local_8;
        }
        DAT_2a22_dc80 = DAT_2a22_dc80 + -1;
        return;
      }
    }
    local_4 = local_4 + 1;
  } while( true );
}


