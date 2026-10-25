/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_00::022dc0 ovl_00_entry_22dc_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_00_entry_22dc_0000(char param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int local_c;
  
  iVar1 = *(int *)(((*(int *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) + 9U) / 10) * 2 +
                  0x4ac6);
  uVar2 = FUN_1ed2_007e(_DAT_3000_a398);
  uVar3 = FUN_1ed2_006e(_DAT_3000_a398);
  iVar4 = (*(int *)&DAT_2a22_ccbb * 0x40) / 2;
  iVar5 = (*(int *)&DAT_2a22_ccb9 * 0x40) / 2;
  local_c = 0;
  do {
    if (_DAT_3000_a38e <= local_c) {
      return;
    }
    if ((local_c % 2 != 0) || (param_1 != '\0')) {
      if (iVar1 != 0) {
        iVar6 = local_c * 2;
        iVar11 = ((iVar1 << (*(byte *)(iVar6 + -0x431e) & 0x1f)) * _DAT_2a22_fad6) / 0xc + 1;
        *(int *)(iVar6 + -0x43d2) = *(int *)(iVar6 + -0x43d2) + *(int *)(iVar6 + -0x43d2) / iVar11;
        *(int *)(iVar6 + -0x4396) = *(int *)(iVar6 + -0x4396) + *(int *)(iVar6 + -0x4396) / iVar11;
        iVar11 = local_c * 2;
        if ((((iVar5 < *(int *)(iVar11 + -0x43d2)) ||
             (-*(int *)(iVar11 + -0x43d2) != iVar5 && *(int *)(iVar11 + -0x43d2) <= -iVar5)) ||
            (iVar4 < *(int *)(iVar11 + -0x4396))) ||
           (-*(int *)(iVar11 + -0x4396) != iVar4 && *(int *)(iVar11 + -0x4396) <= -iVar4)) {
          uVar8 = FUN_11e1_1488(_DAT_2a22_bd66 + 1 >> 1);
          *(undefined2 *)(local_c * 2 + -0x43d2) = uVar8;
          uVar8 = FUN_11e1_1488(_DAT_2a22_bd68 + 1 >> 1);
          *(undefined2 *)(local_c * 2 + -0x4396) = uVar8;
        }
      }
      iVar11 = local_c * 2;
      *(int *)(iVar11 + -0x4396) = *(int *)(iVar11 + -0x4396) + _DAT_3000_a396;
      *(int *)(iVar11 + -0x43d2) = *(int *)(iVar11 + -0x43d2) - _DAT_3000_a394;
      if (_DAT_3000_a398 != 0) {
        uVar8 = *(undefined2 *)(iVar11 + -0x4396);
        iVar6 = FUN_1ed2_0008(uVar8,uVar3);
        iVar7 = FUN_1ed2_0008(*(undefined2 *)(iVar11 + -0x43d2),uVar2);
        *(int *)(iVar11 + -0x4396) = iVar7 + iVar6;
        iVar11 = FUN_1ed2_0008(*(undefined2 *)(local_c * 2 + -0x43d2),uVar3);
        iVar6 = FUN_1ed2_0008(uVar8,uVar2);
        *(int *)(local_c * 2 + -0x43d2) = iVar11 - iVar6;
      }
      piVar12 = (int *)(local_c * 2 + -0x4396);
      if (iVar4 < *piVar12) {
        iVar11 = *(int *)&DAT_2a22_ccbb;
LAB_ovl_00__022e6a:
        *piVar12 = *piVar12 + iVar11 * -0x40;
      }
      else {
        piVar12 = (int *)(local_c * 2 + -0x4396);
        if (-*piVar12 == iVar4 || -iVar4 < *piVar12) {
          piVar12 = (int *)(local_c * 2 + -0x43d2);
          if (iVar5 < *piVar12) {
            iVar11 = *(int *)&DAT_2a22_ccb9;
            goto LAB_ovl_00__022e6a;
          }
          piVar12 = (int *)(local_c * 2 + -0x43d2);
          if (-*piVar12 == iVar5 || -iVar5 < *piVar12) goto LAB_ovl_00__022e92;
          iVar11 = *(int *)&DAT_2a22_ccb9;
        }
        else {
          iVar11 = *(int *)&DAT_2a22_ccbb;
        }
        *piVar12 = *piVar12 + iVar11 * 0x40;
      }
    }
LAB_ovl_00__022e92:
    iVar11 = local_c * 2;
    if (param_2 == '\0') {
      uVar9 = *(uint *)(local_c * 2 + -0x4396);
      uVar10 = (int)uVar9 >> 0xf;
      iVar6 = ((int)((uVar9 ^ uVar10) - uVar10) >> 6 ^ uVar10) - uVar10;
      uVar9 = *(uint *)(local_c * 2 + -0x43d2);
      uVar10 = (int)uVar9 >> 0xf;
      iVar7 = ((int)((uVar9 ^ uVar10) - uVar10) >> 6 ^ uVar10) - uVar10;
      uVar8 = _DAT_2a22_bd72;
    }
    else {
      uVar9 = (int)*(uint *)(iVar11 + -0x4396) >> 0xf;
      iVar6 = ((int)((*(uint *)(iVar11 + -0x4396) ^ uVar9) - uVar9) >> 6 ^ uVar9) - uVar9;
      uVar9 = (int)*(uint *)(iVar11 + -0x43d2) >> 0xf;
      iVar7 = ((int)((*(uint *)(iVar11 + -0x43d2) ^ uVar9) - uVar9) >> 6 ^ uVar9) - uVar9;
      uVar8 = _DAT_2a22_48d6;
    }
    FUN_1eea_0b9f(uVar8,iVar7 + _DAT_3000_a390,iVar6 + _DAT_3000_a392,
                  *(undefined2 *)(iVar11 + -0x435a));
    local_c = local_c + 1;
  } while( true );
}



/* ovl_00::023062 FUN_ovl_00__023062 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__023062(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x22dc;
  if (_DAT_3000_ca2f != 0) {
    thunk_EXT_FUN_0000_0000(0x22dc);
    FUN_20a6_0232(2,0x4af0);
    _DAT_3000_a29c = thunk_EXT_FUN_0000_0000(0x20a6,2,1,0x15,0x127,0x24);
    uVar2 = 0x1eea;
    thunk_EXT_FUN_0000_0000(0x1eea);
  }
  if (DAT_2a22_e326 != DAT_2a22_46f4) {
    thunk_EXT_FUN_0000_0000(uVar2,5,0);
  }
  _DAT_3000_aed1 = FUN_1951_0192(0x4afe);
  if (_DAT_3000_aed1 == 0) {
    FUN_1951_00b2(0x4afe);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    FUN_1897_007c();
  }
  else if (DAT_2a22_e326 != DAT_2a22_46f4) {
    FUN_1897_0000();
  }
  iVar1 = 0;
  do {
    *(undefined2 *)((undefined *)&DAT_3000_a3cc + iVar1 * 0x3c) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1e);
  return;
}



/* ovl_00::023118 FUN_ovl_00__023118 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__023118(void)

{
  undefined *puVar1;
  undefined2 *puVar2;
  
  _DAT_2a22_fad6 = 4;
  if (_DAT_2a22_8f5c == 0) {
    _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  }
  else {
    _DAT_3000_aac9 = (undefined2 *)&DAT_3000_a39a;
  }
  if (_DAT_2a22_8f5c != 0) {
    FUN_19c7_4d7c(_DAT_3000_aac9,0,0x3c);
  }
  *(undefined2 *)((int)_DAT_3000_aac9 + 0x32) = 1;
  *(undefined2 *)((int)_DAT_3000_aac9 + 0x1c) = 0;
  puVar1 = (undefined *)_DAT_3000_aac9;
  *(undefined2 *)((int)_DAT_3000_aac9 + 2) = 0xff9c;
  *(undefined2 *)(puVar1 + 8) = 0xff9c;
  puVar1 = (undefined *)_DAT_3000_aac9;
  *(undefined2 *)((int)_DAT_3000_aac9 + 4) = 0;
  *(undefined2 *)(puVar1 + 10) = 0;
  puVar1 = (undefined *)_DAT_3000_aac9;
  *(undefined2 *)((int)_DAT_3000_aac9 + 6) = 0xffce;
  *(undefined2 *)(puVar1 + 0xc) = 0xffce;
  if (_DAT_2a22_8f5c == 0) {
    _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  }
  else {
    _DAT_3000_aac9 = (undefined2 *)&DAT_3000_a3d6;
  }
  if (_DAT_2a22_8f5c != 0) {
    FUN_19c7_4d7c(_DAT_3000_aac9,0,0x3c);
  }
  _DAT_3000_aac9[0x19] = 1;
  _DAT_3000_aac9[0x16] = 0;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  *_DAT_3000_aac9 = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 300;
  puVar2[0x12] = 300;
  _DAT_3000_aac9[0x11] = 0x7000;
  _DAT_3000_aac9[0xb] = 0x8000;
  _DAT_3000_aac9[0xc] = 0xff00;
  _DAT_3000_aac9[0xd] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = 0;
  puVar2[4] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = 3000;
  puVar2[5] = 3000;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = 0;
  puVar2[6] = 0;
  if (_DAT_2a22_8f5c == 0) {
    _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  }
  else {
    _DAT_3000_aac9 = (undefined2 *)&DAT_3000_a412;
  }
  if (_DAT_2a22_8f5c != 0) {
    FUN_19c7_4d7c(_DAT_3000_aac9,0,0x3c);
  }
  _DAT_3000_aac9[0x19] = 1;
  _DAT_3000_aac9[0x16] = 1;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  *_DAT_3000_aac9 = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 0;
  puVar2[0x12] = 0;
  _DAT_3000_aac9[0x11] = 0x7000;
  _DAT_3000_aac9[0xb] = 0x8000;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = 0;
  puVar2[4] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = 3000;
  puVar2[5] = 3000;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = 0;
  puVar2[6] = 0;
  return;
}



/* ovl_00::0232e2 FUN_ovl_00__0232e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__0232e2(void)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x16] = 1;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  *_DAT_3000_aac9 = 2;
  _DAT_3000_aac9[0x19] = 1;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 0;
  puVar1[0x12] = 0;
  _DAT_3000_aac9[0x11] = 0x7000;
  _DAT_3000_aac9[0xb] = 0;
  _DAT_3000_aac9[0xc] = 0x4000;
  _DAT_3000_aac9[0xd] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = 0;
  puVar1[4] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = 0x5dc;
  puVar1[5] = 0x5dc;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = 0xf060;
  puVar1[6] = 0xf060;
  return;
}



/* ovl_00::023366 FUN_ovl_00__023366 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__023366(void)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 1;
  _DAT_3000_aac9[0x1a] = 0;
  _DAT_3000_aac9[0x19] = 1;
  _DAT_3000_aac9[0x16] = 1;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0x12] = 0;
  puVar1[0xe] = 0;
  _DAT_3000_aac9[0x11] = 0x7000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xb] = 0x4000;
  puVar1[0xf] = 0x4000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar1[0xc] = 0;
  _DAT_3000_aac9[0x10] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = 0;
  puVar1[4] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = 3000;
  puVar1[5] = 3000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = 0;
  puVar1[6] = 0;
  return;
}



/* ovl_00::0233f6 FUN_ovl_00__0233f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__0233f6(void)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 3;
  _DAT_3000_aac9[0x19] = 1;
  _DAT_3000_aac9[0x1a] = 0;
  _DAT_3000_aac9[0x16] = 1;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 0;
  puVar1[0x12] = 0;
  _DAT_3000_aac9[0x11] = 0x7000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xb] = 0x4000;
  puVar1[0xf] = 0x4000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar1[0xc] = 0;
  _DAT_3000_aac9[0x10] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = 0;
  puVar1[4] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = 0;
  puVar1[5] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = 0;
  puVar1[6] = 0;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aaa2 = 6;
  _DAT_3000_a51e = 0x4b;
  _DAT_2a22_8e72 = 1;
  return;
}



/* ovl_00::0234fc FUN_ovl_00__0234fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__0234fc(void)

{
  int iVar1;
  
  if ((0x13 < _DAT_2a22_fad2) && (_DAT_3000_a402 == 0)) {
    iVar1 = (int)(0x1000 / (long)(_DAT_2a22_fad6 * 3));
    _DAT_3000_a3f0 = _DAT_3000_a3f0 - iVar1;
    _DAT_3000_a3ee = _DAT_3000_a3ee - iVar1;
    _DAT_3000_a3ec = _DAT_3000_a3ec + iVar1;
  }
  if ((0x19 < _DAT_2a22_fad2) && (_DAT_3000_a402 == 0)) {
    _DAT_3000_a402 = 1;
    _DAT_3000_a3f2 = 0;
    _DAT_3000_a43e = 0;
    _DAT_3000_a42e = 300;
    _DAT_3000_a436 = 300;
  }
  if ((0x25 < _DAT_2a22_fad2) && (_DAT_3000_a43e == 0)) {
    iVar1 = _DAT_2a22_fad6 * 3;
    _DAT_3000_a42c = _DAT_3000_a42c + (int)(0x2000 / (long)iVar1);
    _DAT_3000_a42a = _DAT_3000_a42a - (int)(0x800 / (long)iVar1);
    _DAT_3000_a428 = _DAT_3000_a428 - (int)(0x4000 / (long)iVar1);
  }
  return;
}



/* ovl_00::02358a FUN_ovl_00__02358a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__02358a(void)

{
  undefined *puVar1;
  uint *puVar2;
  
  if (((0x32 < _DAT_2a22_fad2) && (DAT_2a22_8f7c == '\0')) && (DAT_2a22_8f10 == '\0')) {
    _DAT_3000_a43e = 1;
    _DAT_3000_a42e = 0;
    _DAT_3000_a4b6 = 0;
    _DAT_3000_a4a6 = 0x50;
    _DAT_3000_a4ae = 0x50;
    _DAT_3000_aac9 = (undefined *)&DAT_3000_a39a;
    FUN_19c7_4d7c((undefined *)&DAT_3000_a39a,0,0x3c);
    *(undefined2 *)(_DAT_3000_aac9 + 0x32) = 1;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 2) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 4) = 2000;
    *(undefined2 *)(puVar1 + 10) = 2000;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 6) = 2000;
    *(undefined2 *)(puVar1 + 0xc) = 2000;
    DAT_2a22_8f7c = '\x01';
  }
  if ((0x32 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x96)) {
    puVar2 = (uint *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c);
    *puVar2 = *puVar2 - 5;
    if (*puVar2 < 10) {
      *puVar2 = 10;
      _DAT_2a22_8e72 = 0;
    }
  }
  if ((0x96 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0xab)) {
    _DAT_3000_a4a2 = _DAT_3000_a4a2 - (int)(0x2000 / (long)(_DAT_2a22_fad6 * 3));
    _DAT_3000_a4be = 0;
  }
  if ((0xab < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0xc3)) {
    _DAT_3000_a4a6 = 0x32;
    _DAT_3000_a4a0 = _DAT_3000_a4a0 - (int)(0x1000 / (long)(_DAT_2a22_fad6 * 3));
  }
  if ((0xd2 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0xda)) {
    _DAT_3000_a47a = 0;
    _DAT_3000_a450 = _DAT_3000_a48c;
    _DAT_3000_a452 = _DAT_3000_a48e << 2;
    _DAT_3000_a454 = _DAT_3000_a490 + 0x28;
    _DAT_3000_a464 = _DAT_3000_a4a0;
    _DAT_3000_a466 = _DAT_3000_a4a2;
    _DAT_3000_a468 = _DAT_3000_a4a4;
  }
  if ((0x10a < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x110)) {
    _DAT_3000_a4a6 = 0xffec;
    _DAT_3000_a4a0 = _DAT_3000_a4a0 - (int)(0x1000 / (long)_DAT_2a22_fad6);
    _DAT_3000_a4a4 = _DAT_3000_a4a4 - (int)(0x2000 / (long)_DAT_2a22_fad6);
  }
  if (_DAT_3000_a48c < -29000) {
    _DAT_3000_a4b6 = 1;
    _DAT_3000_a4a6 = 0;
  }
  return;
}



/* ovl_00::02371c FUN_ovl_00__02371c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__02371c(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if ((0xd9 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x10a)) {
    _DAT_3000_a454 = _DAT_3000_a454 - (int)(1000 / (long)(_DAT_2a22_fad6 * 3));
  }
  if ((0x115 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 300)) {
    iVar3 = _DAT_2a22_fad6 * 3;
    iVar2 = (int)(0x800 / (long)iVar3);
    _DAT_3000_a466 = _DAT_3000_a466 + iVar2;
    _DAT_3000_a468 = _DAT_3000_a468 - iVar2;
    _DAT_3000_a450 = _DAT_3000_a450 + (int)(1000 / (long)iVar3);
    _DAT_3000_a454 = _DAT_3000_a454 + (int)(0x708 / (long)iVar3);
    _DAT_3000_a452 = _DAT_3000_a452 - (int)(0x1194 / (long)iVar3);
    _DAT_2a22_8e72 = 1;
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 5;
  }
  if ((300 < _DAT_2a22_fad2) && (DAT_2a22_8f7f == '\0')) {
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0x1e;
    _DAT_2a22_8e72 = 0;
    DAT_2a22_8f7f = '\x01';
  }
  if (((299 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x136)) && (_DAT_3000_a464 < 0)) {
    iVar3 = (int)(0x8000 / (ulong)(uint)(_DAT_2a22_fad6 * 3));
    _DAT_3000_a464 = _DAT_3000_a464 - iVar3;
    _DAT_3000_a46a = 400;
    if (_DAT_3000_a464 < -0x3fff) {
      _DAT_3000_a468 = _DAT_3000_a468 + (int)(0x4000 / (long)(_DAT_2a22_fad6 * 3));
      _DAT_3000_a466 = _DAT_3000_a466 + (int)(0x1000 / (long)(_DAT_2a22_fad6 * 3));
    }
    else {
      _DAT_3000_a468 = _DAT_3000_a468 - (int)(0x4000 / (long)(_DAT_2a22_fad6 * 3));
      _DAT_3000_a466 = _DAT_3000_a466 - iVar3;
    }
  }
  if (((0x135 < _DAT_2a22_fad2) && (_DAT_3000_a466 < 0x5000)) && (DAT_2a22_8f7d == '\0')) {
    _DAT_3000_aac9 = (undefined *)&DAT_3000_a39a;
    FUN_19c7_4d7c((undefined *)&DAT_3000_a39a,0,0x3c);
    *(undefined2 *)(_DAT_3000_aac9 + 0x32) = 1;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 2) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 4) = 0xb1e0;
    *(undefined2 *)(puVar1 + 10) = 0xb1e0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 6) = 20000;
    *(undefined2 *)(puVar1 + 0xc) = 20000;
    _DAT_3000_a46a = 0x514;
    _DAT_3000_a482 = (undefined *)&DAT_3000_a39a;
  }
  if ((0x140 < _DAT_2a22_fad2) && (DAT_2a22_8f7d == '\0')) {
    _DAT_3000_aac9 = (undefined *)&DAT_3000_a39a;
    FUN_19c7_4d7c((undefined *)&DAT_3000_a39a,0,0x3c);
    *(undefined2 *)(_DAT_3000_aac9 + 0x32) = 1;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 2) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 4) = 30000;
    *(undefined2 *)(puVar1 + 10) = 30000;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 6) = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    _DAT_3000_a482 = (undefined *)&DAT_3000_a39a;
    _DAT_3000_a450 = 0;
    _DAT_3000_a452 = -200;
    _DAT_3000_a454 = 400;
    _DAT_3000_a46a = 0;
    _DAT_3000_a468 = 0;
    _DAT_3000_a464 = 0;
    _DAT_3000_a466 = -0x80;
    DAT_2a22_8f7d = '\x01';
  }
  if ((0x147 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x167)) {
    _DAT_3000_a46a = 200;
  }
  if ((0x154 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x163)) {
    _DAT_3000_a454 = _DAT_3000_a454 - (int)(400 / (long)(_DAT_2a22_fad6 * 3));
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 10;
  }
  if ((0x167 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x177)) {
    FUN_ovl_00__024150();
    _DAT_3000_a46a = _DAT_3000_a46a - (int)(0x3c / (long)(_DAT_2a22_fad6 << 1));
    if (10000 < _DAT_3000_a46a) {
      _DAT_3000_a46a = 0;
    }
    DAT_2a22_5b2f = 0;
  }
  if ((0x177 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x189)) {
    DAT_2a22_5b2f = 1;
    _DAT_3000_a46a = 3000;
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0x4b;
    FUN_11e1_129e();
  }
  if ((0x188 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x18b)) {
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 10;
    FUN_11e1_129e();
    _DAT_3000_a47a = 1;
  }
  return;
}



/* ovl_00::023a1e FUN_ovl_00__023a1e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__023a1e(void)

{
  uint uVar1;
  
  if ((0x1e6 < _DAT_2a22_fad2) && (DAT_2a22_8f13 == '\0')) {
    _DAT_2a22_7c4e = 0;
    _DAT_2a22_7c50 = 0x2d;
    _DAT_2a22_7c52 = 0xffd3;
    _DAT_3000_a4f2 = 0;
    _DAT_3000_a4c8 = -11000;
    _DAT_3000_a4ca = 7000;
    _DAT_3000_a4cc = 0;
    _DAT_3000_aae7 = 1;
    _DAT_3000_aae9 = 1;
    _DAT_3000_aaeb = 1;
    DAT_2a22_8f13 = '\x01';
  }
  if ((_DAT_2a22_fad6 < 5) && (0x1e6 < _DAT_2a22_fad2)) {
    _DAT_3000_a46a = 5000;
  }
  if ((_DAT_3000_a4c8 < 0) && (0x1e6 < _DAT_2a22_fad2)) {
    _DAT_2a22_8e72 = 1;
    _DAT_3000_a394 = 0xff38;
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0x1e;
    if (_DAT_3000_a4c8 < -0x313) {
      _DAT_3000_a4c8 = _DAT_3000_a4c8 + (int)(7000 / (long)(_DAT_2a22_fad6 * 3));
      _DAT_3000_a4ca = _DAT_3000_a4ca - (int)(3000 / (long)(_DAT_2a22_fad6 * 3));
    }
    if ((-0x314 < _DAT_3000_a4c8) && (_DAT_3000_a4c8 < -0x28)) {
      _DAT_3000_a4c8 = _DAT_3000_a4c8 + (int)(3000 / (long)(_DAT_2a22_fad6 * 3));
      _DAT_3000_a4ca = _DAT_3000_a4ca - (int)(1000 / (long)(_DAT_2a22_fad6 * 3));
    }
  }
  if (((-1 < _DAT_3000_a4c8) && (2999 < _DAT_3000_a4ca)) && (0x1e6 < _DAT_2a22_fad2)) {
    if ((0x4b0 < _DAT_3000_a452) && (4 < _DAT_2a22_fad6)) {
      _DAT_3000_a452 = _DAT_3000_a452 - (int)(5000 / (long)(_DAT_2a22_fad6 * 3));
    }
    _DAT_3000_a4ca = _DAT_3000_a4ca - (int)(900 / (long)(_DAT_2a22_fad6 * 3));
  }
  if (((_DAT_3000_a4ca < 3000) && (0x1e6 < _DAT_2a22_fad2)) && (DAT_2a22_8e74 == '\0')) {
    _DAT_3000_a394 = 0;
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0x32;
    _DAT_3000_a4ca = _DAT_3000_a4ca - (int)(0x5dc / (long)(_DAT_2a22_fad6 * 3));
    if ((0x4b0 < _DAT_3000_a452) && (4 < _DAT_2a22_fad6)) {
      _DAT_3000_a452 = _DAT_3000_a452 - (int)(5000 / (long)(_DAT_2a22_fad6 * 3));
    }
    if (_DAT_3000_a468 < 0) {
      _DAT_3000_a468 = _DAT_3000_a468 + (int)(0x4000 / (long)(_DAT_2a22_fad6 * 3));
    }
    if (_DAT_3000_a4ca < 0x6a4) {
      _DAT_3000_aae7 = 0;
    }
    if (_DAT_3000_a4ca < 0x640) {
      _DAT_3000_aae9 = 0;
    }
    if (_DAT_3000_a4ca < 0x5dc) {
      _DAT_3000_aaeb = 0;
    }
    if (_DAT_3000_a4ca < 900) {
      if (_DAT_2a22_fad6 < 5) {
        DAT_2a22_8f15 = 1;
      }
      else {
        DAT_2a22_8e74 = '\x01';
      }
    }
  }
  if ((DAT_2a22_8e74 != '\0') && (_DAT_3000_a452 < 0x4b0)) {
    _DAT_3000_a46a = 0;
    _DAT_3000_a482 = 0;
    if (_DAT_3000_a464 < -0x2fff) {
      DAT_2a22_8f15 = 1;
      return;
    }
    uVar1 = _DAT_2a22_fad6 * 3;
    _DAT_3000_a464 = _DAT_3000_a464 - (int)(0x8000 / (ulong)uVar1);
    _DAT_3000_a468 = _DAT_3000_a468 + (int)(0x1500 / (long)(int)uVar1);
    _DAT_3000_a466 = _DAT_3000_a466 - (int)(0x1000 / (long)(int)uVar1);
    _DAT_3000_a454 = _DAT_3000_a454 - (int)(0x400 / (long)(int)uVar1);
    return;
  }
  if ((DAT_2a22_8e74 != '\0') && (0x4af < _DAT_3000_a452)) {
    _DAT_3000_a452 = _DAT_3000_a452 - (int)(5000 / (long)(_DAT_2a22_fad6 * 3));
  }
  return;
}



/* ovl_00::023c98 FUN_ovl_00__023c98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__023c98(void)

{
  undefined *puVar1;
  
  if ((0x1c2 < _DAT_2a22_fad2) && (DAT_2a22_8f81 == '\0')) {
    _DAT_3000_aac9 = (undefined *)&DAT_3000_a39a;
    FUN_19c7_4d7c((undefined *)&DAT_3000_a39a,0,0x3c);
    *(undefined2 *)(_DAT_3000_aac9 + 0x32) = 1;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 2) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 4) = 0xf830;
    *(undefined2 *)(puVar1 + 10) = 0xf830;
    puVar1 = _DAT_3000_aac9;
    *(undefined2 *)(_DAT_3000_aac9 + 6) = 0xffce;
    *(undefined2 *)(puVar1 + 0xc) = 0xffce;
    _DAT_3000_a482 = (undefined *)&DAT_3000_a39a;
    _DAT_3000_a450 = 0;
    _DAT_3000_a452 = 20000;
    _DAT_3000_a454 = 0xf830;
    _DAT_3000_a46a = 0;
    _DAT_3000_a47a = 1;
    _DAT_3000_a464 = 0x8000;
    _DAT_3000_a468 = 0;
    _DAT_3000_a466 = 0;
    DAT_2a22_8f81 = '\x01';
  }
  if ((0x1c2 < _DAT_2a22_fad2) && (DAT_2a22_8f82 == '\0')) {
    *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0x4b;
    _DAT_3000_a47a = 0;
    _DAT_3000_a46a = 3000;
    DAT_2a22_8f82 = '\x01';
  }
  return;
}



/* ovl_00::023d88 FUN_ovl_00__023d88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__023d88(int param_1,int param_2)

{
  int iVar1;
  int local_6;
  
  FUN_1897_01ac(_DAT_2a22_bd5e,0,0,0,0,0,0,0);
  if (param_2 != 0) {
    ovl_00_entry_22dc_0000(_DAT_2a22_8e72,0);
  }
  local_6 = 1;
  do {
    iVar1 = *(int *)(local_6 * 2 + 0x4b34) * 0x3c;
    _DAT_3000_aac9 = (undefined2 *)((undefined *)&DAT_3000_a39a + iVar1);
    if (*(int *)((undefined *)&DAT_3000_a3c6 + iVar1) == 0) {
      if (*(int *)((undefined *)&DAT_3000_a3ce + iVar1) != 0) {
        FUN_132b_0e94();
        _DAT_3000_aac9[0x10] = _DAT_3000_aaba;
        _DAT_3000_aac9[0xf] = _DAT_3000_aab8;
      }
      FUN_1897_03b6(*_DAT_3000_aac9,-_DAT_3000_aac9[0xb],_DAT_3000_aac9[0xc],_DAT_3000_aac9[0xd],
                    _DAT_3000_aac9[1],_DAT_3000_aac9[2],_DAT_3000_aac9[3]);
    }
    local_6 = local_6 + 1;
  } while (local_6 < 6);
  FUN_1897_01ee();
  FUN_132b_064a();
  FUN_132b_08f2();
  if (param_1 != 0) {
    FUN_1090_1428(0x132b);
  }
  FUN_1090_0002();
  FUN_ovl_00__023a1e();
  if (_DAT_3000_ca2f != 0) {
    FUN_ovl_00__0234fc();
    FUN_ovl_00__02371c();
    FUN_ovl_00__02358a();
    FUN_ovl_00__023c98();
  }
  return;
}



/* ovl_00::023e60 FUN_ovl_00__023e60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__023e60(void)

{
  _DAT_2a22_e337 = 0x4b40;
  _DAT_2a22_e339 = 0x19d0;
  _DAT_2a22_e33b = 0x2120;
  _DAT_2a22_e33d = 0x19e4;
  _DAT_2a22_e33f = 0x2120;
  _DAT_2a22_e341 = 3;
  _DAT_2a22_e343 = 0xffff;
  _DAT_2a22_e345 = 0xffff;
  _DAT_2a22_e347 = 0xffff;
  _DAT_2a22_fade = 0;
  FUN_11e1_002a((undefined *)&DAT_2a22_e337);
  return;
}



/* ovl_00::023eaa FUN_ovl_00__023eaa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__023eaa(void)

{
  undefined *puVar1;
  int iVar2;
  int local_4;
  
  local_4 = 0x51;
  _DAT_3000_a452 = 20000;
  *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0x28;
  do {
    iVar2 = FUN_1951_00ea();
  } while (iVar2 != 0);
  while( true ) {
    if (((_DAT_2a22_fad2 < 0x1c2) || (DAT_2a22_8f15 != '\0')) ||
       (iVar2 = FUN_19c7_49d4(), iVar2 != 0)) {
      return;
    }
    FUN_ovl_00__023d88(0,1);
    if ((_DAT_3000_a452 < 0x2a3) && (_DAT_3000_ca2f != 0)) {
      _DAT_3000_a482 = (undefined *)0x0;
      local_4 = local_4 - (int)(600 / (long)(_DAT_2a22_fad6 * 3));
    }
    if ((_DAT_2a22_fad2 < 0x1e9) && (_DAT_3000_ca2f != 0)) break;
    if ((0x1e9 < _DAT_2a22_fad2) && (DAT_2a22_8f14 == '\0')) {
      _DAT_3000_aac9 = (undefined *)&DAT_3000_a39a;
      FUN_19c7_4d7c((undefined *)&DAT_3000_a39a,0,0x3c);
      *(undefined2 *)(_DAT_3000_aac9 + 0x32) = 1;
      *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
      puVar1 = _DAT_3000_aac9;
      *(undefined2 *)(_DAT_3000_aac9 + 2) = 0;
      *(undefined2 *)(puVar1 + 8) = 0;
      puVar1 = _DAT_3000_aac9;
      *(undefined2 *)(_DAT_3000_aac9 + 4) = 20000;
      *(undefined2 *)(puVar1 + 10) = 20000;
      puVar1 = _DAT_3000_aac9;
      *(undefined2 *)(_DAT_3000_aac9 + 6) = 0xffd3;
      *(undefined2 *)(puVar1 + 0xc) = 0xffd3;
      _DAT_3000_a482 = (undefined *)&DAT_3000_a39a;
      _DAT_3000_a454 = 300;
      _DAT_3000_a452 = 300;
      _DAT_3000_a450 = 0;
      _DAT_3000_a466 = 0xf800;
      _DAT_3000_a464 = 0;
      _DAT_3000_a46a = 2000;
      _DAT_3000_a47a = 0;
      DAT_2a22_8f14 = '\x01';
    }
    if ((0x1f1 < _DAT_2a22_fad2) && (_DAT_2a22_fad2 < 0x212)) {
      _DAT_3000_a46a = 200;
      _DAT_3000_a466 = 0xff80;
      if (-0x1000 < _DAT_3000_a468) {
        _DAT_3000_a468 = _DAT_3000_a468 - (int)(0x1000 / (long)(_DAT_2a22_fad6 * 3));
      }
    }
    FUN_1090_1428(0x19c7);
    FUN_1090_0002();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x19c7,*(undefined2 *)(_DAT_2a22_bd4c * 2 + 0x34a),0xb,local_4,_DAT_3000_a29c)
  ;
}



/* ovl_00::024150 FUN_ovl_00__024150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__024150(void)

{
  undefined2 uVar1;
  
  uVar1 = _DAT_2a22_d81e;
  *(undefined *)&DAT_2a22_4452 = 0x20;
  *(undefined *)&DAT_2a22_4451 = 0x20;
  *(undefined1 *)0x0 = 0x20;
  FUN_1eea_0004(0xd,1,0,0x2e66);
  return;
}



/* ovl_00::02417c FUN_ovl_00__02417c */

void __cdecl16far
FUN_ovl_00__02417c(undefined2 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x93ce;
  *(undefined1 *)0x0 = param_2;
  *(undefined1 *)0x1 = param_3;
  *(undefined1 *)0x2 = param_4;
  FUN_1eea_0004(param_1,1,0,0x2e66);
  return;
}



/* ovl_00::024312 FUN_ovl_00__024312 */

void __cdecl16far FUN_ovl_00__024312(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_1eea_11e7();
  if (param_2 == 0) {
    *(undefined2 *)(*(int *)((*(uint *)0x7910 ^ 1) * 2 + 0x34a) + 0xc) = 0xf;
  }
  else {
    if (*(char *)0x9ed6 == *(char *)0x2a4) {
      uVar1 = 0x13;
    }
    else {
      uVar1 = 10;
    }
    *(undefined2 *)(*(int *)((*(uint *)0x7910 ^ 1) * 2 + 0x34a) + 0xc) = uVar1;
  }
  FUN_1951_0274(*(undefined2 *)((*(uint *)0x78fc ^ 1) * 2 + 0x34a),0x20,param_1 * 10 + 0x1e,
                *(undefined2 *)(param_1 * 2 + param_3 * 0x16 + 0x4a2e),0x108);
  if (*(char *)0x29e != '\0') {
    FUN_1eea_11b7();
  }
  return;
}



/* ovl_00::0243b0 FUN_ovl_00__0243b0 */

int __cdecl16far FUN_ovl_00__0243b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((((param_1 < 0x58) || (0xe4 < param_1)) || (param_4 < param_2 % 10)) ||
     ((iVar1 = param_2 / 10 + -3, iVar1 < 1 || (param_4 + 1 <= iVar1)))) {
    return param_3;
  }
  return iVar1;
}



/* ovl_00::0245a0 FUN_ovl_00__0245a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_00__0245a0(void)

{
  DAT_2a22_5b2f = 1;
  thunk_EXT_FUN_0000_0000(0x22dc,2,0);
  _DAT_2a22_bd4c = 1;
  _DAT_2a22_bd60 = 1;
  _DAT_2a22_4a3c = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,0);
}



/* ovl_00::02487c FUN_ovl_00__02487c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_00__02487c(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  _DAT_2a22_e5c2 = param_1;
  if (_DAT_3000_ca2f != 0) {
    iVar1 = dispatch_ovl_03_22dc_00c2(0x22dc,param_1);
    if (iVar1 == 0) {
      FUN_1951_00b2(0x4b73);
    }
  }
  iVar1 = _DAT_2a22_fad2;
  FUN_1951_017a(5);
  *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0;
  _DAT_3000_a394 = 0;
  _DAT_3000_a396 = 0;
  _DAT_3000_a398 = 0;
  while( true ) {
    if (_DAT_2a22_fad2 - iVar1 < 0xc) {
      *(undefined2 *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 0x96;
    }
    else {
      *(int *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) =
           *(int *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) + -10;
    }
    if (*(uint *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) < 10) break;
    FUN_1897_01ac(_DAT_2a22_bd72,0,0,0,0,0,0,0);
    FUN_11e1_1052();
    FUN_1897_01ee();
    FUN_11e1_129e();
    uVar2 = 0x1505;
    FUN_1505_140c(0x12db);
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      uVar2 = 0x1808;
      FUN_17ba_060e();
    }
    FUN_1090_1428(uVar2);
    FUN_1090_0002();
  }
  *(uint *)((undefined *)&DAT_3000_a3b6 + _DAT_3000_aaa2 * 0x3c) = 10;
  return 0;
}



/* ovl_00::024b10 FUN_ovl_00__024b10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_00__024b10(char param_1,char param_2)

{
  if ((DAT_2a22_e326 != DAT_2a22_46f4) && (param_1 == '\x01')) {
    param_1 = '\x04';
  }
  _DAT_2a22_e337 = *(undefined2 *)(param_1 * 2 + 0x4bc4);
  _DAT_2a22_e339 = 0x19d0;
  _DAT_2a22_e33b = 0x2120;
  _DAT_2a22_e33d = 0x19e4;
  _DAT_2a22_e33f = 0x2120;
  _DAT_2a22_e341 = 0xffff;
  _DAT_2a22_e343 = 0xffff;
  _DAT_2a22_e345 = 0xffff;
  _DAT_2a22_e347 = 0xffff;
  _DAT_2a22_fade = 0;
  FUN_11e1_002a((undefined *)&DAT_2a22_e337);
  _DAT_2a22_fd3a = (int)param_2;
  return;
}



/* ovl_00::024ebe ovl_00_entry_22dc_20fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_00_entry_22dc_20fe(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  int local_6;
  
  DAT_2a22_5b2f = 1;
  FUN_1000_07a6();
  DAT_2a22_8f14 = 0;
  DAT_2a22_8f15 = 0;
  DAT_2a22_8e74 = 0;
  DAT_2a22_8f13 = 0;
  _DAT_2a22_bd62 = 0;
  _DAT_2a22_bd64 = 0;
  _DAT_2a22_bd66 = 0x13f;
  _DAT_2a22_bd68 = 199;
  _DAT_3000_a390 = 0x9f;
  _DAT_3000_a392 = 99;
  thunk_EXT_FUN_0000_0000(0x1000,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  if ((DAT_3000_aaa7 != '\b') && (DAT_2a22_e326 != DAT_2a22_46f2)) {
    FUN_ovl_00__023062();
    FUN_ovl_00__023118();
    FUN_ovl_00__023366();
    FUN_ovl_00__0232e2();
    FUN_ovl_00__0233f6();
    _DAT_3000_a3c6 = 1;
    _DAT_3000_a402 = 1;
    _DAT_3000_a43e = 1;
    _DAT_3000_a4b6 = 1;
    _DAT_2a22_fad2 = 0x1e5;
    do {
      iVar1 = FUN_1951_00ea();
    } while (iVar1 != 0);
    FUN_ovl_00__023eaa();
    FUN_19c7_4f54(0x1951,_DAT_3000_aed1);
    if (_DAT_3000_ca2f != 0) {
      FUN_19c7_4f54(0x19c7,_DAT_3000_a29c);
    }
  }
  DAT_2a22_5b2f = 0;
  local_6 = 0;
  uVar2 = 0x19c7;
  iVar1 = FUN_19c7_49d4();
  if (iVar1 != 0) {
LAB_ovl_00__025049:
    thunk_EXT_FUN_0000_0000(uVar2,0,0);
    thunk_EXT_FUN_0000_0000(0x1eea,1,0);
    uVar2 = 0x1eea;
    thunk_EXT_FUN_0000_0000(0x1eea,2,0);
    DAT_2a22_8f11 = 0;
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      uVar2 = 0x1808;
      FUN_17ba_04ea(0x4be5,0,0x100);
    }
    if ((DAT_2a22_e326 == DAT_2a22_46f3) || (uVar3 = uVar2, DAT_2a22_e326 == DAT_2a22_46f2)) {
      uVar3 = 0x1eea;
      thunk_EXT_FUN_0000_0000(uVar2,0x4bee);
    }
    FUN_ovl_00__0245a0(uVar3);
    FUN_1951_017a(0x3d);
    FUN_19c7_4f54(0x1951,_DAT_3000_ca33);
    FUN_ovl_00__02487c(_DAT_2a22_e5c2);
    _DAT_2a22_e39b = _DAT_2a22_e5d0 + 10;
    _DAT_2a22_e5a6 = _DAT_2a22_e5d2 + 10;
    _DAT_2a22_e5aa = _DAT_2a22_e5d4;
    DAT_2a22_a5bd = 0;
    DAT_2a22_a5bc = 0;
    _DAT_2a22_e32f = (undefined *)&DAT_2a22_e5d0;
    _DAT_2a22_e5c0 = (undefined *)&DAT_2a22_e5d0;
    do {
      iVar1 = FUN_1951_00ea();
    } while (iVar1 != 0);
    return;
  }
  FUN_ovl_00__024b10(1,2);
  if (DAT_2a22_e326 != DAT_2a22_46f4) {
    thunk_EXT_FUN_0000_0000(0x19c7,5,0);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f3) {
    DAT_2a22_5b2f = 0;
  }
  FUN_11e1_0208();
  FUN_11e1_0342();
  FUN_11e1_044c();
LAB_ovl_00__024fe3:
  uVar2 = 0x3a;
  do {
    FUN_1951_017a(uVar2);
    while( true ) {
      iVar1 = FUN_11e1_0396(1);
      if ((iVar1 == 1) || (iVar1 = FUN_19c7_49d4(), iVar1 != 0)) {
        uVar2 = 0x11e1;
        FUN_11e1_0108();
        if (DAT_2a22_e326 == DAT_2a22_46f3) {
          DAT_2a22_5b2f = 1;
        }
        goto LAB_ovl_00__025049;
      }
      FUN_11e1_044c();
      iVar1 = local_6 + 1;
      if ((((local_6 == 100) || (local_6 == 0x9f)) || (local_6 == 0xdc)) || (local_6 == 0x117))
      break;
      bVar4 = local_6 == 0x154;
      local_6 = iVar1;
      if (bVar4) goto LAB_ovl_00__024fe3;
    }
    uVar2 = 0x3b;
    local_6 = iVar1;
  } while( true );
}



/* ovl_00::025110 ovl_00_entry_22dc_2350 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ovl_00_entry_22dc_2350(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_20a6_0232(1,0x4bff);
  FUN_20a6_0232(2,0x4c09);
  thunk_EXT_FUN_0000_0000(0x20a6,0,0);
  do {
    iVar1 = FUN_1951_00ea();
  } while (iVar1 != 0);
  uVar2 = 0x1eea;
  thunk_EXT_FUN_0000_0000(0x1951,1);
  _DAT_2a22_5b26 = 0;
  do {
    if (99 < _DAT_2a22_5b26) break;
    uVar2 = 0x19c7;
    iVar1 = FUN_19c7_49d4();
  } while (iVar1 == 0);
  uVar3 = 0x1eea;
  thunk_EXT_FUN_0000_0000(uVar2,2);
  _DAT_2a22_5b26 = 0;
  do {
    if (99 < _DAT_2a22_5b26) break;
    uVar3 = 0x19c7;
    iVar1 = FUN_19c7_49d4();
  } while (iVar1 == 0);
  thunk_EXT_FUN_0000_0000(uVar3,2,0);
  thunk_EXT_FUN_0000_0000(0x1eea,2);
  thunk_EXT_FUN_0000_0000(0x1eea,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  thunk_EXT_FUN_0000_0000(0x1eea,2,0);
  dispatch_ovl_10_252a_0000();
  _DAT_3000_ca2f = 1;
  FUN_ovl_00__023062();
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_17ba_04ea(0x4c12,0,0x100);
  }
  dispatch_ovl_14_252a_0000();
  _DAT_2a22_bd62 = 0;
  _DAT_2a22_bd64 = 0;
  _DAT_2a22_bd66 = 0x13f;
  _DAT_2a22_bd68 = 199;
  _DAT_3000_a390 = 0x9f;
  _DAT_3000_a392 = 99;
  FUN_11e1_0faa();
  FUN_ovl_00__023e60();
  FUN_11e1_1052();
  FUN_1951_017a(2);
  _DAT_2a22_7c4e = 0xffdc;
  _DAT_2a22_7c50 = 0x24;
  _DAT_2a22_7c52 = 0x24;
  _DAT_2a22_bd4c = 1;
  _DAT_2a22_bd60 = 1;
  _DAT_2a22_4a3c = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1951,0);
}


