/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* 1000:0100 com_entry */

/* WARNING: Control flow encountered bad instruction data */

void com_entry(void)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = (code *)swi(0x11);
  uVar2 = (*pcVar1)();
  if ((uVar2 & 1) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


