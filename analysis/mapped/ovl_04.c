/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_04::023444 FUN_ovl_04__023444 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_04__023444(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  iVar4 = FUN_ovl_04__023558();
  puVar3 = _DAT_2a22_9460;
  if (iVar4 != 0) {
    return 0;
  }
  puVar5 = _DAT_2a22_bd72;
  puVar6 = _DAT_2a22_9460;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x22dc,0);
}



/* ovl_04::023558 FUN_ovl_04__023558 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_04__023558(void)

{
  if (_DAT_2a22_e333 == 0) {
    return 0;
  }
  FUN_1505_18a0(0x504f,3);
  return 1;
}



/* ovl_04::023578 ovl_04_entry_22dc_07b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ovl_04_entry_22dc_07b8(void)

{
  undefined2 uVar1;
  
  _DAT_2a22_dc1c = 1;
  uVar1 = FUN_ovl_04__023444(0x5078,0x506e);
  FUN_ovl_04__02360a(0x30f6,0x19c7,uVar1,uVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x22dc,*_DAT_2a22_bd72);
}



/* ovl_04::0235b6 ovl_04_entry_22dc_07f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ovl_04_entry_22dc_07f6(void)

{
  _DAT_2a22_9462 = FUN_ovl_04__023444(0x5085,0x507b);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x22dc,*_DAT_2a22_bd72);
}



/* ovl_04::0235d8 ovl_04_entry_22dc_0818 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_04_entry_22dc_0818(void)

{
  FUN_ovl_04__02360a(0x2f04,0x19c7,_DAT_2a22_9462);
  _DAT_2a22_e32f = (undefined *)&DAT_2a22_e5d0 + DAT_2a22_a5bd * 0x32;
  _DAT_2a22_e5c0 = (undefined *)&DAT_2a22_e5d0 + DAT_2a22_a5bc * 0x32;
  _DAT_2a22_9462 = 0;
  return;
}



/* ovl_04::02360a FUN_ovl_04__02360a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_04__02360a(code *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_3 != 0) {
    (*param_1)(0x22dc,(undefined *)&DAT_2a22_dc1c,2,1,param_3);
    if (_DAT_2a22_dc1c == 1) {
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e5c4,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e5d0,0x32,_DAT_2a22_e5c4,param_3);
      (*param_1)(0x22dc,0xaf69,0x24,_DAT_2a22_e5c4,param_3);
      (*param_1)(0x22dc,0xab44,0xb,_DAT_2a22_e5c4,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e39b,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e5a6,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e5aa,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_a5bd,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_a5bc,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_fac8,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_fac1,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_ded0,4,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_fac5,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e32c,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_faca,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_a5ce,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e333,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e331,2,1,param_3);
      (*param_1)(0x22dc,0x35c,2,1,param_3);
      (*param_1)(0x22dc,0x6172,2,3,param_3);
      (*param_1)(0x22dc,0x6950,0x2e,0x11,param_3);
      (*param_1)(0x22dc,0xa13a,2,0xe,param_3);
      (*param_1)(0x22dc,0x354,2,4,param_3);
      (*param_1)(0x22dc,0x5ec8,1,0xb,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_a2a8,1,0xb,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_a2b4,2,0x21,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e39d,0x1d,0x11,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_f232,0x17,0x11,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e327,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e328,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e329,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e32a,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e32b,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e32e,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_97dc,0x1e,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_97fa,0x24,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_981e,0x27,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_9846,0x27,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_986e,0x15,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_3000_ca3d,2,8,param_3);
      (*param_1)(0x22dc,0x5434,0x10,0xc,param_3);
      (*param_1)(0x22dc,0x54f4,0x10,0xd,param_3);
      (*param_1)(0x22dc,0x55c4,0x10,0xd,param_3);
      (*param_1)(0x22dc,0x5694,0x10,7,param_3);
      (*param_1)(0x22dc,0x5704,0x10,10,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_e5c2,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_3000_ca39,4,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_9552,4,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_3000_ca37,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_9556,4,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_955a,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_955e,4,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_955c,2,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_c47c,4,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_c6fa,4,1,param_3);
      (*param_1)(0x22dc,0x30e,1,1,param_3);
      (*param_1)(0x22dc,(undefined *)&DAT_2a22_a5d0,2,1,param_3);
      if ((*(byte *)(param_3 + 6) & 0x20) != 0) {
        if (_DAT_2a22_d3a5 == 0x1c) {
          uVar2 = 0x50b6;
        }
        else {
          uVar2 = 0x50c3;
        }
        thunk_EXT_FUN_0000_0000(0x22dc,_DAT_2a22_9460,0x14,0x10,uVar2);
        do {
          iVar1 = FUN_1951_00ea();
        } while (iVar1 == 0);
      }
    }
    else {
      thunk_EXT_FUN_0000_0000(0x22dc,_DAT_2a22_9460,0x14,0x10,0x5088);
      do {
        iVar1 = FUN_1951_00ea();
      } while (iVar1 == 0);
    }
    FUN_19c7_2ddc(param_3);
    FUN_1951_02ac();
  }
  return;
}


