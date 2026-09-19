
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00019040(void)

{
  undefined1 *unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar1 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  ac = ac & 0xfffffff8 | (uint)(DAT_00557c61 != '\0') << 2 | (uint)(DAT_00557c61 == '\0') << 1;
  if (DAT_00557c61 == '\0') {
    auVar1._8_4_ = 0x1905c;
    auVar1._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
    FUN_00008220(&LAB_000646f0,8);
    unaff_pfp = (undefined1 *)register0x00000004;
    FUN_00008220(&LAB_00064710,10);
    DAT_00557c61 = '\x01';
  }
  fp = unaff_pfp;
  return;
}

