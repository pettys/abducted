/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_01::022dc0 ovl_01_entry_22dc_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far ovl_01_entry_22dc_0000(undefined2 param_1)

{
  int iVar1;
  
  _DAT_2a22_dad0 = FUN_20a6_0008(param_1,0x8000);
  FUN_20a6_0568(_DAT_2a22_dad0);
  iVar1 = FUN_ovl_01__022e36(param_1);
  if (iVar1 != 0) {
    FUN_ovl_01__022ea4();
    FUN_ovl_01__022f32();
    FUN_ovl_01__022ffe();
    iVar1 = FUN_ovl_01__02306c();
    if (iVar1 != 0) {
      iVar1 = FUN_ovl_01__0230de();
      if (iVar1 != 0) {
        FUN_20a6_009c(_DAT_2a22_dad0);
        FUN_1951_02ac();
        return 1;
      }
    }
  }
  FUN_20a6_009c(_DAT_2a22_dad0);
  return 0;
}



/* ovl_01::022e36 FUN_ovl_01__022e36 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_01__022e36(undefined2 param_1)

{
  int iVar1;
  
  _DAT_2a22_fd48 = param_1;
  DAT_2a22_dad6 = FUN_ovl_01__02330a();
  DAT_2a22_dad7 = FUN_ovl_01__02330a();
  DAT_2a22_dad8 = FUN_ovl_01__02330a();
  DAT_2a22_dad9 = FUN_ovl_01__02330a();
  DAT_2a22_dada = 0;
  _DAT_2a22_dad2 = FUN_ovl_01__02330a();
  _DAT_2a22_dad4 = FUN_ovl_01__02330a();
  iVar1 = FUN_19c7_483e(0x4c1c,(undefined *)&DAT_2a22_dad6);
  if (iVar1 == 0) {
    if (_DAT_2a22_dad2 == _DAT_2a22_d820) {
      return 1;
    }
    _DAT_2a22_fd46 = 2;
  }
  else {
    _DAT_2a22_fd46 = 1;
  }
  return 0;
}



/* ovl_01::022ea4 FUN_ovl_01__022ea4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_01__022ea4(void)

{
  int iVar1;
  int local_6;
  
  FUN_ovl_01__0232e4((undefined *)&DAT_2a22_fd42,1,1);
  if (_DAT_2a22_fd42 != 0) {
    FUN_ovl_01__0232e4((undefined *)&DAT_2a22_fd44,1,1);
    for (local_6 = 0; local_6 < _DAT_2a22_fd44; local_6 = local_6 + 1) {
      iVar1 = *(int *)(local_6 * 2 + 0x4c4);
      FUN_ovl_01__0232e4(iVar1,2,1);
      FUN_ovl_01__0232e4(iVar1 + 2,2,1);
      FUN_ovl_01__0232e4(iVar1 + 4,*(undefined2 *)(iVar1 + 2),1);
    }
  }
  return;
}



/* ovl_01::022f32 FUN_ovl_01__022f32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_01__022f32(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  *_DAT_2a22_48d4 = 1;
  FUN_ovl_01__0232e4(&local_6,2,1);
  FUN_ovl_01__0232e4(&local_8,2,1);
  FUN_ovl_01__0232e4(&local_4,2,1);
  FUN_ovl_01__0232e4(&local_a,2,1);
  FUN_ovl_01__0232e4(&local_c,2,1);
  if (_DAT_2a22_48d4[1] == -1) {
    _DAT_2a22_48d4[1] = local_6;
  }
  if (_DAT_2a22_48d4[2] == -1) {
    _DAT_2a22_48d4[2] = local_8;
  }
  _DAT_2a22_48d4[3] = local_4;
  _DAT_2a22_48d4[4] = local_a;
  puVar3 = _DAT_2a22_48d6;
  if (_DAT_2a22_fd3a == -1) {
    _DAT_2a22_fd3a = local_c;
  }
  puVar5 = _DAT_2a22_48d4;
  puVar6 = _DAT_2a22_48d6;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *puVar3 = 2;
  return;
}



/* ovl_01::022ffe FUN_ovl_01__022ffe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_01__022ffe(void)

{
  undefined2 local_6;
  int local_4;
  
  local_4 = FUN_ovl_01__02330a();
  if (local_4 != 0) {
    if (local_4 == 1) {
      FUN_ovl_01__023156(*_DAT_2a22_48d6,*(undefined2 *)(_DAT_2a22_48d4 + 2),
                         *(undefined2 *)(_DAT_2a22_48d4 + 4),*(int *)(_DAT_2a22_48d4 + 6) + 1,
                         *(int *)(_DAT_2a22_48d4 + 8) + 1);
      return;
    }
    if (local_4 != 2) {
      return;
    }
    FUN_ovl_01__0232e4(&local_6,2,1);
    thunk_EXT_FUN_0000_0000(0x22dc,*_DAT_2a22_48d6,local_6);
  }
  return;
}



/* ovl_01::02306c FUN_ovl_01__02306c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_01__02306c(void)

{
  int iVar1;
  int *piVar2;
  int local_8;
  undefined2 local_4;
  
  local_4 = 1;
  FUN_ovl_01__0232e4(0xb6f4,2,0xfa);
  iVar1 = thunk_EXT_FUN_0000_0000(0x22dc);
  if (iVar1 == 0) {
    return 0;
  }
  local_8 = 0;
  do {
    if (0xf9 < local_8) {
LAB_ovl_01__0230d1:
      thunk_EXT_FUN_0000_0000(0x1eea);
      return local_4;
    }
    piVar2 = (int *)(local_8 * 2 + -0x490c);
    if (*piVar2 != 0) {
      iVar1 = FUN_ovl_01__0231f6();
      *piVar2 = iVar1;
      if (iVar1 == 0) {
        _DAT_2a22_fd46 = 0;
        local_4 = 0;
        goto LAB_ovl_01__0230d1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}



/* ovl_01::0230de FUN_ovl_01__0230de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_ovl_01__0230de(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint local_c;
  uint local_a;
  uint local_8;
  undefined1 *local_6;
  
  FUN_ovl_01__0232e4(&local_a,2,1);
  uVar3 = thunk_EXT_FUN_0000_0000(0x22dc);
  if (uVar3 < local_a) {
    _DAT_2a22_fd46 = 0;
    return 0;
  }
  FUN_19c7_4e68(0x1eea,local_a,(undefined *)&DAT_2a22_fd38);
  local_6 = (undefined1 *)((ulong)_DAT_2a22_fd38 << 0x10);
  local_8 = local_a << 4;
  for (local_c = 0; local_c < local_8; local_c = local_c + 1) {
    uVar2 = FUN_ovl_01__02330a();
    puVar1 = local_6;
    local_6 = (undefined1 *)CONCAT22(local_6._2_2_,(undefined1 *)local_6 + 1);
    *puVar1 = uVar2;
  }
  return local_8;
}



/* ovl_01::023156 FUN_ovl_01__023156 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_ovl_01__023156(undefined2 param_1,undefined2 param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int local_4;
  
  uVar1 = 0x22dc;
  if ((_DAT_2a22_8c7a - _DAT_3000_ca2b & 1U) != 0) {
    FUN_ovl_01__02330a();
  }
  if (_DAT_2a22_dad4 == 0) {
    FUN_ovl_01__023290();
  }
  else {
    uVar1 = 0x1eea;
    FUN_1eea_0c62(0);
  }
  if (_DAT_2a22_dc8e < param_4) {
    param_4 = _DAT_2a22_dc8e;
  }
  if (_DAT_2a22_dc90 < param_5) {
    param_5 = _DAT_2a22_dc90;
  }
  for (local_4 = 0; local_4 < param_5; local_4 = local_4 + 1) {
    if (_DAT_2a22_dad4 == 0) {
      FUN_ovl_01__0232e4(0x968c,1,_DAT_2a22_dc8e);
    }
    else {
      uVar1 = 0x1eea;
      FUN_1eea_0ddc(0x968c);
    }
    thunk_EXT_FUN_0000_0000(uVar1,0x968c,param_1,param_2,param_3 + local_4,param_4);
    uVar1 = 0x1eea;
  }
  return;
}



/* ovl_01::0231f6 FUN_ovl_01__0231f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_01__0231f6(void)

{
  int iVar1;
  undefined2 uVar2;
  int local_4;
  
  uVar2 = 0x22dc;
  if ((_DAT_2a22_8c7a - _DAT_3000_ca2b & 1U) != 0) {
    FUN_ovl_01__02330a();
  }
  if (_DAT_2a22_dad4 == 0) {
    FUN_ovl_01__023290();
  }
  else {
    uVar2 = 0x1eea;
    FUN_1eea_0c62(0);
  }
  thunk_EXT_FUN_0000_0000(uVar2,_DAT_2a22_dc8e,_DAT_2a22_dc90);
  local_4 = 0;
  while( true ) {
    if (_DAT_2a22_dc90 <= local_4) {
      uVar2 = thunk_EXT_FUN_0000_0000(0x1eea);
      return uVar2;
    }
    if (_DAT_2a22_dad4 == 0) {
      FUN_ovl_01__0232e4(0x968c,1,_DAT_2a22_dc8e);
    }
    else {
      FUN_1eea_0ddc(0x968c);
    }
    iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,0x968c);
    if (iVar1 == 0) break;
    local_4 = local_4 + 1;
  }
  return 0;
}



/* ovl_01::023290 FUN_ovl_01__023290 */

void __cdecl16far FUN_ovl_01__023290(void)

{
  undefined1 local_6 [2];
  undefined1 local_4 [2];
  
  FUN_ovl_01__0232e4(local_4,1,2);
  FUN_ovl_01__0232e4(local_6,1,2);
  FUN_ovl_01__0232e4((undefined *)&DAT_2a22_dc8e,1,2);
  FUN_ovl_01__0232e4((undefined *)&DAT_2a22_dc90,1,2);
  return;
}



/* ovl_01::0232e4 FUN_ovl_01__0232e4 */

void __cdecl16far FUN_ovl_01__0232e4(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  param_2 = param_3 * param_2;
  while (param_2 != 0) {
    uVar1 = FUN_ovl_01__02330a();
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return;
}



/* ovl_01::02330a FUN_ovl_01__02330a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_01__02330a(void)

{
  char *pcVar1;
  
  if (_DAT_2a22_8c7a <= _DAT_3000_ca2b) {
    FUN_20a6_05bc(_DAT_2a22_dad0);
  }
  pcVar1 = _DAT_3000_ca2b;
  _DAT_3000_ca2b = _DAT_3000_ca2b + 1;
  return (int)*pcVar1;
}


