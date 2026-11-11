
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00087380(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  undefined4 unaff_pfp;
  char *pcVar14;
  undefined1 in_register_00000008 [56];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  char *pcVar15;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [999808];
  undefined1 auVar6 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  
  auVar6._4_4_ = auStackX_0;
  auVar6._0_4_ = unaff_pfp;
  auVar6._12_52_ = in_register_00000008._4_52_;
  auVar6._8_4_ = 0x87384;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
  auVar5._8_56_ = auVar6._8_56_;
  auVar5._4_4_ = auStackX_0;
  auVar5._0_4_ = fp;
  FUN_00008530();
  auStackX_0._12_52_ = auVar5._12_52_;
  auStackX_0._0_8_ = auVar5._0_8_;
  auStackX_0._8_4_ = 0x8738c;
  auVar7._8_56_ = auStackX_0._8_56_;
  auVar7._4_4_ = auStack_40;
  auVar7._0_4_ = auStackX_0;
  FUN_00008250(1);
  fp = &auStack_80;
  auStack_40._12_52_ = auVar7._12_52_;
  auStack_40._0_8_ = auVar7._0_8_;
  auStack_40._8_4_ = 0x87390;
  auVar8._8_56_ = auStack_40._8_56_;
  auVar8._4_4_ = auStack_c0;
  auVar8._0_4_ = auStack_40;
  FUN_000873c0();
  auVar9._20_44_ = auVar8._20_44_;
  auVar9._0_16_ = auVar8._0_16_;
  auVar9._16_4_ = &DAT_000d2200;
  do {
    pcVar14 = auVar9._16_4_;
    cVar3 = *pcVar14;
    cVar4 = pcVar14[1];
    uVar1 = auVar9._4_4_ + 0x3f;
    uVar2 = uVar1 & 0xffffffc0;
    auVar11._12_52_ = auVar9._12_52_;
    auVar11._0_8_ = auVar9._0_8_;
    auVar11._8_4_ = 0x873a4;
    *fp = auVar11;
    auVar10._8_56_ = auVar11._8_56_;
    auVar10._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    Debug_SetTextPosition((int)cVar3,(int)cVar4);
    pcVar15 = *(char **)(pcVar14 + 4);
    fp = (undefined1 (*) [64])(uVar2 + 0x40);
    auVar13._12_52_ = auVar10._12_52_;
    auVar13._0_8_ = auVar10._0_8_;
    auVar13._8_4_ = 0x873ac;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar13;
    auVar12._8_56_ = auVar13._8_56_;
    auVar12._0_8_ = CONCAT44(uVar2 + 0x80,uVar1) & 0xffffffffffffffc0;
    thunk_FUN_00008b0c(pcVar15);
    auVar9._20_44_ = auVar12._20_44_;
    auVar9._0_16_ = auVar12._0_16_;
    auVar9._16_4_ = pcVar14 + 8;
    cVar3 = *auVar9._16_4_;
    ac = ac & 0xfffffff8 | (uint)('\0' < cVar3) << 2 | (uint)(cVar3 == '\0') << 1 |
         (uint)(cVar3 < '\0');
  } while (((byte)ac & 1 | '\0' < cVar3) == 1);
  fp = (undefined1 (*) [64])uVar2;
  return;
}

