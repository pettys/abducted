/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_05::022dc0 ovl_05_entry_22dc_0000 */

void __cdecl16far ovl_05_entry_22dc_0000(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined1 *)0x1b;
  puVar5 = (undefined *)&DAT_3000_d750;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


