
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001ac30(void)

{
  short sVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar5 [64];
  undefined1 auStackX_0 [1000000];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  
  uVar2 = ac;
  DAT_00557c74 = DAT_00557c74 + 1;
  sVar1 = *(short *)(DAT_00557c70 + 2);
  ac = ac & 0xfffffff8 | (uint)(DAT_00557c74 < sVar1) << 2 | (uint)(DAT_00557c74 == sVar1) << 1 |
       (uint)(sVar1 < DAT_00557c74);
  if (DAT_00557c74 < sVar1) {
    ac = uVar2 & 0xfffffff8 | (uint)(BYTE_0054fcfe != 0) << 2 | (uint)(BYTE_0054fcfe == 0) << 1;
    if (BYTE_0054fcfe == 0) {
      BYTE_0054fcfe = 1;
      auVar6._8_4_ = 0x1aca4;
      auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      auVar6._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar6;
      auVar5._8_56_ = auVar6._8_56_;
      auVar5._4_4_ = 0;
      auVar5._0_4_ = fp;
      FUN_000082f0(0xc);
      unaff_pfp = auVar5._0_4_;
    }
  }
  else {
    DAT_00557c70 = DAT_00557c70 + 4;
    DAT_00557c74 = g14;
    BYTE_0054fcfe = (byte)g14;
    auVar4._8_4_ = 0x1ac80;
    auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    auVar4._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar4;
    auVar3._8_56_ = auVar4._8_56_;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fp;
    FUN_00008320(0xc);
    unaff_pfp = auVar3._0_4_;
  }
  DAT_005bf8a1 = 1;
  fp = unaff_pfp;
  return;
}

