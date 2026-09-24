
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001af90(void)

{
  undefined1 auVar1 [64];
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  ac = ac & 0xfffffff8 | (uint)(DAT_00557c62 != '\0') << 2 | (uint)(DAT_00557c62 == '\0') << 1;
  if (DAT_00557c62 == '\0') {
    auVar1._4_4_ = auStackX_0;
    auVar1._0_4_ = unaff_pfp;
    auVar1._8_4_ = 0x1afac;
    auVar1._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
    Task_RegisterOrReplace(&LAB_0007d200,0xc);
    auStackX_0._4_4_ = auStackX_0;
    auStackX_0._0_4_ = fp;
    auStackX_0._8_4_ = 0x1afbc;
    auStackX_0._12_52_ = in_register_0000000c;
    Task_RegisterOrReplace(Motion_TaskMain,9);
    DAT_00557c62 = '\x01';
    fp = auStack_40;
  }
  DAT_00557c70 = DAT_00557c70 + 2;
  FUN_0001b650();
  return;
}

