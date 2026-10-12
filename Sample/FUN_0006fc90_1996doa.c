
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0006fc90(int *param_1,int *param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined1 in_register_00000020 [32];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  int iVar6;
  undefined1 auVar5 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  auVar1._8_4_ = unaff_retaddr;
  auVar2._12_4_ = unaff_r3;
  auVar2._0_12_ = auVar1;
  auVar2._16_4_ = unaff_r4;
  auVar2._20_4_ = unaff_r5;
  auVar2._24_4_ = unaff_r6;
  auVar2._28_4_ = unaff_r7;
  auVar2._32_32_ = in_register_00000020;
  auVar3._16_48_ = auVar2._16_48_;
  auVar3._12_4_ = param_3 * 0x10001;
  auVar3._0_12_ = auVar1;
  auVar4._36_28_ = in_register_00000020._4_28_;
  auVar4._0_32_ = auVar3._0_32_;
  auVar4._32_4_ = 8;
  do {
    auVar5._0_16_ = auVar4._0_16_;
    iVar6 = auVar4._12_4_;
    fp = auVar4._0_4_;
    auVar5._16_4_ = iVar6 + *param_1;
    auVar5._20_4_ = iVar6 + param_1[1];
    auVar5._24_4_ = iVar6 + param_1[2];
    auVar5._28_4_ = iVar6 + param_1[3];
    *param_2 = auVar5._16_4_;
    param_2[1] = auVar5._20_4_;
    param_2[2] = auVar5._24_4_;
    param_2[3] = auVar5._28_4_;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    auVar5._36_28_ = auVar4._36_28_;
    auVar5._32_4_ = auVar4._32_4_ + -1;
    ac = ac & 0xfffffff8 | (uint)(0 < auVar5._32_4_) << 2 | (uint)(auVar5._32_4_ == 0) << 1 |
         (uint)(auVar5._32_4_ < 0);
    auVar4 = auVar5;
  } while (0 < auVar5._32_4_);
  return;
}

