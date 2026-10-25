/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_03::022e82 ovl_03_entry_22dc_00c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ovl_03_entry_22dc_00c2(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  byte local_2e;
  undefined2 local_16 [9];
  undefined2 *local_4;
  
  local_4 = local_16;
  bVar3 = (byte)((uint)_DAT_3000_d750 >> 8);
  DAT_2a22_9431 = ((char)bVar3 >> 4 & 0xfU) + 0x30;
  DAT_2a22_9433 = (bVar3 & 0xf) + 0x30;
  DAT_2a22_9435 = ((byte)(_DAT_3000_d750 >> 4) & 0xf) + 0x30;
  local_2e = (byte)_DAT_3000_d750;
  DAT_2a22_9456 = (local_2e & 0xf) + 0x30;
  puVar6 = local_16;
  puVar5 = _DAT_2a22_bd72;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *local_4 = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x22dc,0);
}


