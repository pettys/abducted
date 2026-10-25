/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_09::023315 ovl_09_entry_22dc_0555 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_09_entry_22dc_0555(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined2 unaff_ES;
  undefined2 uVar9;
  
  puVar7 = (undefined1 *)&DAT_3000_d750;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar1 = 0;
  }
  uVar5 = _DAT_0000_046c & 0xff;
  do {
    uVar9 = (undefined2)((ulong)DAT_ovl_09__022dc0 >> 0x10);
    pcVar8 = (char *)DAT_ovl_09__022dc0;
    do {
      uVar5 = uVar5 - 1;
      if ((int)uVar5 < 0) {
        pcVar6 = (char *)&DAT_3000_d750;
        DAT_3000_d78f = (-pcVar8[1] - *pcVar8) + '+';
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          DAT_3000_d78f = DAT_3000_d78f + cVar3 * '\x02';
          *pcVar6 = -cVar3;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        return;
      }
      iVar4 = 0x28;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar2 != '\0');
    } while (*pcVar8 != '\0');
  } while( true );
}


