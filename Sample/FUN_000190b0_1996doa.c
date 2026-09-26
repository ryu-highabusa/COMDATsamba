
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000190b0(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auStackX_0 [1000000];
  undefined1 auVar1 [64];
  undefined1 auVar4 [64];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  ac = ac & 0xfffffff8 | (uint)(DAT_00557c62 != '\0') << 2 | (uint)(DAT_00557c62 == '\0') << 1;
  if (DAT_00557c62 == '\0') {
    auVar2._8_4_ = 0x190cc;
    auVar2._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar2;
    auVar1._8_56_ = auVar2._8_56_;
    auVar1._4_4_ = auStackX_0;
    auVar1._0_4_ = fp;
    Task_RegisterOrReplace(&LAB_0007d200,0xc);
    auVar4._12_52_ = auVar1._12_52_;
    auVar4._0_8_ = auVar1._0_8_;
    auVar4._8_4_ = 0x190dc;
    auVar3._8_56_ = auVar4._8_56_;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = auStackX_0;
    Task_RegisterOrReplace(Motion_TaskMain,9);
    unaff_pfp = auVar3._0_4_;
    DAT_00557c62 = '\x01';
  }
  fp = unaff_pfp;
  return;
}

