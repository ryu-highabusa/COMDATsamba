
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0004ff60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte bVar6;
  undefined1 auVar7 [20];
  undefined1 auVar8 [24];
  undefined *puVar9;
  undefined4 unaff_pfp;
  int iVar29;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  int iVar32;
  int iVar33;
  undefined1 auVar19 [64];
  int iVar31;
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar30 [60];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auStackX_0 [1000000];
  undefined1 auVar21 [64];
  undefined1 auVar11 [64];
  char *pcVar34;
  
  auVar7._4_4_ = auStackX_0;
  auVar7._0_4_ = unaff_pfp;
  auVar7._8_4_ = unaff_retaddr;
  auVar7._12_4_ = unaff_r3;
  auVar7._16_4_ = unaff_r4;
  auVar8._20_4_ = unaff_r5;
  auVar8._0_20_ = auVar7;
  auVar10._24_4_ = unaff_r6;
  auVar10._0_24_ = auVar8;
  auVar10._28_4_ = unaff_r7;
  auVar10._32_4_ = unaff_r8;
  auVar10._36_4_ = unaff_r9;
  auVar10._40_4_ = unaff_r10;
  auVar10._44_4_ = unaff_r11;
  auVar10._48_4_ = unaff_r12;
  auVar10._52_4_ = unaff_r13;
  auVar10._56_4_ = unaff_r14;
  auVar10._60_4_ = unaff_r15;
  auVar11._28_36_ = auVar10._28_36_;
  auVar11._24_4_ = param_1;
  auVar11._0_24_ = auVar8;
  auVar12._48_16_ = auVar10._48_16_;
  auVar12._0_44_ = auVar11._0_44_;
  auVar12._44_4_ = param_1 * 0xb;
  ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].player_display == '\0') << 1 |
       (uint)((&g_player1)[param_1].player_display != '\0');
  if (((byte)ac & 1) != 1) {
    fp = unaff_pfp;
    return 0;
  }
  auVar13._0_56_ = auVar12._0_56_;
  auVar13._56_4_ = &DAT_00880050;
  auVar13._60_4_ = unaff_r15;
  auVar14._24_40_ = auVar13._24_40_;
  auVar14._20_4_ = 0;
  auVar14._0_20_ = auVar7;
  auVar15._0_48_ = auVar14._0_48_;
  auVar15._48_4_ = param_1 * 0x30;
  auVar15._56_8_ = auVar13._56_8_;
  auVar15._52_4_ = &DAT_00880190;
  auVar16._44_20_ = auVar15._44_20_;
  auVar16._0_40_ = auVar14._0_40_;
  auVar16._40_4_ = 0;
  auVar17._36_28_ = auVar16._36_28_;
  auVar17._0_32_ = auVar14._0_32_;
  auVar17._32_4_ = &DAT_00588f80 + param_1 * 0x618;
  auVar28._52_12_ = auVar15._52_12_;
  auVar28._0_48_ = auVar17._0_48_;
  auVar28._48_4_ = param_1 * 0x2d;
  DAT_00880050 = 0x505;
  do {
    puVar9 = PTR_DAT_000006a0;
    pcVar34 = auVar28._32_4_;
    auVar18._32_32_ = auVar28._32_32_;
    auVar18._0_28_ = auVar28._0_28_;
    auVar18._28_4_ = (int)*pcVar34;
    ac = ac & 0xfffffff8;
    DAT_0058a1f8 = pcVar34;
    if (auVar18._28_4_ != 0) {
      g13 = PTR_DAT_000006a4;
      *auVar28._52_4_ = 0x1919;
      puVar4 = (undefined4 *)(&DAT_00554d30 + auVar28._48_4_ * 0x10 + auVar28._40_4_);
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      DAT_00880070 = 0x707;
      *(undefined4 *)puVar9 = *puVar4;
      *(undefined4 *)(puVar9 + 4) = uVar1;
      *(undefined4 *)(puVar9 + 8) = uVar2;
      *(undefined4 *)(puVar9 + 0xc) = uVar3;
      uVar1 = puVar4[5];
      uVar2 = puVar4[6];
      uVar3 = puVar4[7];
      *(undefined4 *)(puVar9 + 0x10) = puVar4[4];
      *(undefined4 *)(puVar9 + 0x14) = uVar1;
      *(undefined4 *)(puVar9 + 0x18) = uVar2;
      *(undefined4 *)(puVar9 + 0x1c) = uVar3;
      uVar1 = puVar4[9];
      uVar2 = puVar4[10];
      uVar3 = puVar4[0xb];
      *(undefined4 *)(puVar9 + 0x20) = puVar4[8];
      *(undefined4 *)(puVar9 + 0x24) = uVar1;
      *(undefined4 *)(puVar9 + 0x28) = uVar2;
      *(undefined4 *)(puVar9 + 0x2c) = uVar3;
      *auVar28._52_4_ = 0x1919;
      DAT_00880110 = &DAT_00001111;
      DAT_0058a200 = *(undefined4 *)puVar9;
      DAT_0058a204 = *(undefined4 *)(puVar9 + 4);
      DAT_0058a208 = *(undefined4 *)(puVar9 + 8);
      DAT_0058a20c = *(undefined4 *)(puVar9 + 0xc);
      DAT_0058a210 = *(undefined4 *)(puVar9 + 0x10);
      DAT_0058a214 = *(undefined4 *)(puVar9 + 0x14);
      DAT_0058a218 = *(undefined4 *)(puVar9 + 0x18);
      DAT_0058a21c = *(undefined4 *)(puVar9 + 0x1c);
      DAT_0058a220 = *(undefined4 *)(puVar9 + 0x20);
      DAT_0058a224 = *(undefined4 *)(puVar9 + 0x24);
      DAT_0058a228 = *(undefined4 *)(puVar9 + 0x28);
      DAT_0058a22c = *(undefined4 *)(puVar9 + 0x2c);
    }
    iVar33 = auVar28._24_4_;
    iVar32 = auVar28._20_4_;
    auVar20._20_44_ = auVar18._20_44_;
    auVar20._0_16_ = auVar28._0_16_;
    auVar20._16_4_ = 0;
    if (0 < auVar18._28_4_) {
      auVar19._40_24_ = auVar28._40_24_;
      auVar19._0_36_ = auVar20._0_36_;
      auVar19._36_4_ = g_player1.unknown_56 + auVar28._44_4_ * 8 + -0x54;
      auVar20 = auVar19;
      do {
        uVar5 = ac;
        iVar31 = auVar20._16_4_;
        ac = ac | DAT_0054fcfe != '\0';
        DAT_0058a1fc = DAT_0058a1f8 + 4;
        if (((byte)ac & 1) != 1) {
          ac = uVar5 | (uint)(0 < iVar31) << 2 | (uint)(iVar31 == 0) << 1 | (uint)(iVar31 < 0);
          if (((byte)ac & 1 | 0 < iVar31) != 1) {
            uVar5 = auVar20._4_4_ + 0x3fU & 0xffffffc0;
            auVar21._12_52_ = auVar20._12_52_;
            auVar21._0_8_ = auVar20._0_8_;
            auVar21._8_4_ = 0x500b0;
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar21;
            auVar20._8_56_ = auVar21._8_56_;
            auVar20._4_4_ = uVar5 + 0x40;
            auVar20._0_4_ = fp;
            FUN_00051a00(iVar33,0);
            fp = uVar5;
          }
        }
        uVar5 = fp;
        iVar29 = auVar20._4_4_;
        *auVar28._56_4_ = 0x505;
        bVar6 = g_player1.unknown_56[auVar28._44_4_ * 8 + -0x54];
        auVar22._0_8_ = auVar20._0_8_;
        auVar22._12_52_ = auVar20._12_52_;
        if (bVar6 != 0) {
          ac = ac & 0xfffffff8 | (uint)(1 < bVar6) << 2 | (uint)(bVar6 == 1) << 1 |
               (uint)(bVar6 == 0);
          if (((byte)ac & 1 | 1 < bVar6) == 1) {
            auVar24._8_4_ = 0x500fc;
            auVar24._0_8_ = auVar22._0_8_;
            auVar24._12_52_ = auVar22._12_52_;
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar24;
            auVar30._4_56_ = auVar24._8_56_;
            auVar30._0_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
            FUN_000511c0(iVar33,iVar32,iVar31);
            fp = iVar29 + 0x3fU & 0xffffffc0;
          }
          else {
            auVar23._8_4_ = 0x500e8;
            auVar23._0_8_ = auVar22._0_8_;
            auVar23._12_52_ = auVar22._12_52_;
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar23;
            auVar30._4_56_ = auVar23._8_56_;
            auVar30._0_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
            FUN_00050980(iVar33,iVar32,iVar31);
            fp = iVar29 + 0x3fU & 0xffffffc0;
          }
        }
        else {
          auVar22._8_4_ = 0x500d0;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar22;
          auVar30._4_56_ = auVar22._8_56_;
          auVar30._0_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
          ac = ac & 0xfffffff8 | (uint)(bVar6 != 0) << 2 | (uint)(bVar6 == 0) << 1;
          FUN_00050140(iVar33,iVar32,iVar31);
          fp = iVar29 + 0x3fU & 0xffffffc0;
        }
        auVar25._4_60_ = auVar30;
        auVar25._0_4_ = uVar5;
        auVar20._20_44_ = auVar30._16_44_;
        auVar20._0_16_ = auVar25._0_16_;
        auVar20._16_4_ = iVar31 + 1;
        ac = ac & 0xfffffff8;
        DAT_00880060 = 0x606;
      } while (auVar20._16_4_ < auVar18._28_4_);
    }
    auVar26._24_40_ = auVar20._24_40_;
    auVar26._0_20_ = auVar20._0_20_;
    auVar26._20_4_ = iVar32 + 1;
    uVar5 = ac | (uint)(0xe < auVar26._20_4_) << 2 | (uint)(auVar26._20_4_ == 0xe) << 1;
    ac = uVar5 | auVar26._20_4_ < 0xe;
    auVar27._44_20_ = auVar20._44_20_;
    auVar27._0_40_ = auVar26._0_40_;
    auVar27._40_4_ = auVar28._40_4_ + 0x30;
    auVar28._36_28_ = auVar27._36_28_;
    auVar28._0_32_ = auVar26._0_32_;
    auVar28._32_4_ = pcVar34 + 0x68;
  } while (((byte)ac & 1 | (byte)(uVar5 >> 1) & 1) == 1);
  DAT_00880060 = 0x606;
  fp = auVar20._0_4_;
  return 0;
}

