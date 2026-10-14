
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001b7d0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  
  uVar1 = ac;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._12_52_ = in_register_0000000c;
  ac = ac & 0xfffffff8 | (uint)(1 < BYTE_005555e0) << 2 | (uint)(BYTE_005555e0 == 1) << 1 |
       (uint)(BYTE_005555e0 == 0);
  if (((byte)ac & 1 | 1 < BYTE_005555e0) != 1) {
    DAT_00557c6e = g14;
    ac = uVar1 & 0xfffffff8 | (uint)(1 < DAT_00557c62) << 2 | (uint)(DAT_00557c62 == 1) << 1 |
         (uint)(DAT_00557c62 == 0);
    if (((byte)ac & 1 | 1 < DAT_00557c62) != 1) {
      auVar5._8_4_ = 0x1b7f8;
      auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      auVar5._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
      auVar4._8_56_ = auVar5._8_56_;
      auVar4._4_4_ = auStackX_0;
      auVar4._0_4_ = fp;
      FUN_00008320(9);
      fp = auStack_40;
      auStackX_0._12_52_ = auVar4._12_52_;
      auStackX_0._0_8_ = auVar4._0_8_;
      auStackX_0._8_4_ = 0x1b800;
      auVar3._8_56_ = auStackX_0._8_56_;
      auVar3._4_4_ = auStack_80;
      auVar3._0_4_ = auStackX_0;
      FUN_00008320(0xc);
    }
    ac = ac & 0xfffffff8 | (uint)(1 < DAT_00557c63) << 2 | (uint)(DAT_00557c63 == 1) << 1 |
         (uint)(DAT_00557c63 == 0);
    if (((byte)ac & 1 | 1 < DAT_00557c63) != 1) {
      uVar1 = auVar3._4_4_ + 0x3f;
      uVar2 = uVar1 & 0xffffffc0;
      auVar7._12_52_ = auVar3._12_52_;
      auVar7._0_8_ = auVar3._0_8_;
      auVar7._8_4_ = 0x1b814;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
      auVar6._8_56_ = auVar7._8_56_;
      auVar6._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
      FUN_00008320(0xb);
      auVar9._12_52_ = auVar6._12_52_;
      auVar9._0_8_ = auVar6._0_8_;
      auVar9._8_4_ = 0x1b81c;
      *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar9;
      auVar8._8_56_ = auVar9._8_56_;
      auVar8._0_8_ = CONCAT44(uVar2 + 0x40,uVar1) & 0xffffffffffffffc0;
      FUN_00008320(6);
      auVar10._12_52_ = auVar8._12_52_;
      auVar10._0_8_ = auVar8._0_8_;
      auVar10._8_4_ = 0x1b824;
      *(undefined1 (*) [64])(uVar2 + 0x40) = auVar10;
      fp = (undefined1 *)(uVar2 + 0x80);
      FUN_00008320(7);
      FUN_00008320(5);
      return;
    }
  }
  fp = (undefined1 *)auVar3._0_4_;
  return;
}

