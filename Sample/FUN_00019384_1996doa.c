
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00019384(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar56 [60];
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 extraout_g1_01;
  undefined4 extraout_g1_02;
  undefined4 extraout_g1_03;
  undefined4 extraout_g1_04;
  undefined4 extraout_g1_05;
  undefined4 extraout_g1_06;
  undefined4 extraout_g1_07;
  undefined4 extraout_g1_08;
  undefined4 extraout_g1_09;
  undefined4 extraout_g1_10;
  undefined4 extraout_g1_11;
  undefined4 extraout_g1_12;
  undefined4 extraout_g1_13;
  undefined4 extraout_g1_14;
  undefined4 extraout_g1_15;
  undefined4 extraout_g1_16;
  undefined4 extraout_g1_17;
  undefined4 extraout_g1_18;
  undefined4 extraout_g1_19;
  undefined4 extraout_g1_20;
  undefined4 extraout_g1_21;
  undefined4 extraout_g1_22;
  undefined4 extraout_g1_23;
  undefined4 extraout_g1_24;
  undefined4 extraout_g1_25;
  undefined4 extraout_g1_26;
  undefined4 extraout_g1_27;
  undefined4 extraout_g1_28;
  undefined4 extraout_g1_29;
  undefined4 extraout_g1_30;
  undefined4 extraout_g1_31;
  undefined4 extraout_g1_32;
  undefined4 extraout_g1_33;
  undefined4 extraout_g1_34;
  undefined4 extraout_g1_35;
  undefined4 extraout_g1_36;
  undefined4 extraout_g1_37;
  undefined4 extraout_g1_38;
  undefined4 extraout_g1_39;
  undefined4 extraout_g1_40;
  undefined4 extraout_g1_41;
  undefined4 extraout_g1_42;
  undefined4 extraout_g1_43;
  undefined4 extraout_g1_44;
  undefined4 extraout_g1_45;
  undefined4 extraout_g1_46;
  undefined4 extraout_g1_47;
  undefined4 extraout_g1_48;
  undefined4 extraout_g1_49;
  undefined4 extraout_g1_50;
  uint uVar57;
  undefined *puVar58;
  undefined1 auStackX_0 [1000000];
  int iVar55;
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._12_52_ = in_register_0000000c;
  do {
    uVar1 = fp;
    iVar55 = auVar2._4_4_;
    DAT_005bf8a0 = DAT_005bf8a0 + '\x01';
    uVar57 = (uint)*DAT_00557c70;
    ac = ac & 0xfffffff8 | (uint)(uVar57 < 0x33) << 2 | (uint)(uVar57 == 0x33) << 1 |
         (uint)(0x33 < uVar57);
    auVar3._0_8_ = auVar2._0_8_;
    auVar3._12_52_ = auVar2._12_52_;
    if (((byte)ac & 1) == 1) {
switchD_000193b4_caseD_19620:
      auVar54._8_4_ = 0x19624;
      auVar54._0_8_ = auVar3._0_8_;
      auVar54._12_52_ = auVar3._12_52_;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar54;
      auVar56._4_56_ = auVar54._8_56_;
      auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
      FUN_0001b2b0();
      param_2 = extraout_g1_50;
      fp = iVar55 + 0x3fU & 0xffffffc0;
    }
    else {
      puVar58 = (&switchD_000193b4::switchdataD_000193b8)[uVar57];
      switch(puVar58) {
      case (undefined *)0x19488:
        auVar3._8_4_ = 0x1948c;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar3;
        auVar56._4_56_ = auVar3._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019640();
        param_2 = extraout_g1;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19490:
        auVar4._8_4_ = 0x19494;
        auVar4._0_8_ = auVar3._0_8_;
        auVar4._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar4;
        auVar56._4_56_ = auVar4._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019680();
        param_2 = extraout_g1_00;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19498:
        auVar5._8_4_ = 0x1949c;
        auVar5._0_8_ = auVar3._0_8_;
        auVar5._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar5;
        auVar56._4_56_ = auVar5._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_000196a0();
        param_2 = extraout_g1_01;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194a0:
        auVar6._8_4_ = 0x194a4;
        auVar6._0_8_ = auVar3._0_8_;
        auVar6._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar6;
        auVar56._4_56_ = auVar6._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_000196c0();
        param_2 = extraout_g1_02;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194a8:
        auVar7._8_4_ = 0x194ac;
        auVar7._0_8_ = auVar3._0_8_;
        auVar7._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar7;
        auVar56._4_56_ = auVar7._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019740();
        param_2 = extraout_g1_03;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194b0:
        auVar8._8_4_ = 0x194b4;
        auVar8._0_8_ = auVar3._0_8_;
        auVar8._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
        auVar56._4_56_ = auVar8._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019860();
        param_2 = extraout_g1_04;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194b8:
        auVar9._8_4_ = 0x194bc;
        auVar9._0_8_ = auVar3._0_8_;
        auVar9._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar9;
        auVar56._4_56_ = auVar9._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019a00();
        param_2 = extraout_g1_05;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194c0:
        auVar10._8_4_ = 0x194c4;
        auVar10._0_8_ = auVar3._0_8_;
        auVar10._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
        auVar56._4_56_ = auVar10._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019b70();
        param_2 = extraout_g1_06;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194c8:
        auVar11._8_4_ = 0x194cc;
        auVar11._0_8_ = auVar3._0_8_;
        auVar11._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar11;
        auVar56._4_56_ = auVar11._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019c80();
        param_2 = extraout_g1_07;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194d0:
        auVar12._8_4_ = 0x194d4;
        auVar12._0_8_ = auVar3._0_8_;
        auVar12._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar12;
        auVar56._4_56_ = auVar12._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019d60();
        param_2 = extraout_g1_08;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194d8:
        auVar13._8_4_ = 0x194dc;
        auVar13._0_8_ = auVar3._0_8_;
        auVar13._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar13;
        auVar56._4_56_ = auVar13._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019e30();
        param_2 = extraout_g1_09;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194e0:
        auVar14._8_4_ = 0x194e4;
        auVar14._0_8_ = auVar3._0_8_;
        auVar14._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar14;
        auVar56._4_56_ = auVar14._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_00019f50();
        param_2 = extraout_g1_10;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194e8:
        auVar15._8_4_ = 0x194ec;
        auVar15._0_8_ = auVar3._0_8_;
        auVar15._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar15;
        auVar56._4_56_ = auVar15._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a0a0();
        param_2 = extraout_g1_11;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194f0:
        auVar16._8_4_ = 0x194f4;
        auVar16._0_8_ = auVar3._0_8_;
        auVar16._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar16;
        auVar56._4_56_ = auVar16._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a130();
        param_2 = extraout_g1_12;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x194f8:
        auVar17._8_4_ = 0x194fc;
        auVar17._0_8_ = auVar3._0_8_;
        auVar17._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar17;
        auVar56._4_56_ = auVar17._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a3a0();
        param_2 = extraout_g1_13;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19500:
        auVar18._8_4_ = 0x19504;
        auVar18._0_8_ = auVar3._0_8_;
        auVar18._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar18;
        auVar56._4_56_ = auVar18._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a620();
        param_2 = extraout_g1_14;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19508:
        auVar19._8_4_ = 0x1950c;
        auVar19._0_8_ = auVar3._0_8_;
        auVar19._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar19;
        auVar56._4_56_ = auVar19._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a660();
        param_2 = extraout_g1_15;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19510:
        auVar20._8_4_ = 0x19514;
        auVar20._0_8_ = auVar3._0_8_;
        auVar20._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar20;
        auVar56._4_56_ = auVar20._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a6c0();
        param_2 = extraout_g1_16;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19518:
        auVar21._8_4_ = 0x1951c;
        auVar21._0_8_ = auVar3._0_8_;
        auVar21._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar21;
        auVar56._4_56_ = auVar21._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a700();
        param_2 = extraout_g1_17;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19520:
        auVar22._8_4_ = 0x19524;
        auVar22._0_8_ = auVar3._0_8_;
        auVar22._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar22;
        auVar56._4_56_ = auVar22._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a760();
        param_2 = extraout_g1_18;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19528:
        auVar23._8_4_ = 0x1952c;
        auVar23._0_8_ = auVar3._0_8_;
        auVar23._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar23;
        auVar56._4_56_ = auVar23._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a7f0();
        param_2 = extraout_g1_19;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19530:
        auVar24._8_4_ = 0x19534;
        auVar24._0_8_ = auVar3._0_8_;
        auVar24._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar24;
        auVar56._4_56_ = auVar24._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a9a0();
        param_2 = extraout_g1_20;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19538:
        auVar25._8_4_ = 0x1953c;
        auVar25._0_8_ = auVar3._0_8_;
        auVar25._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar25;
        auVar56._4_56_ = auVar25._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001aa00();
        param_2 = extraout_g1_21;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19540:
        auVar26._8_4_ = 0x19544;
        auVar26._0_8_ = auVar3._0_8_;
        auVar26._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar26;
        auVar56._4_56_ = auVar26._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001aa20();
        param_2 = extraout_g1_22;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19548:
        auVar27._8_4_ = 0x1954c;
        auVar27._0_8_ = auVar3._0_8_;
        auVar27._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar27;
        auVar56._4_56_ = auVar27._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a8a0();
        param_2 = extraout_g1_23;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19550:
        auVar28._8_4_ = 0x19554;
        auVar28._0_8_ = auVar3._0_8_;
        auVar28._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar28;
        auVar56._4_56_ = auVar28._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001a900();
        param_2 = extraout_g1_24;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19558:
        auVar29._8_4_ = 0x1955c;
        auVar29._0_8_ = auVar3._0_8_;
        auVar29._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar29;
        auVar56._4_56_ = auVar29._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001aac0(0x33,param_2,param_3,param_4,puVar58,param_6,param_7,param_8,param_9,param_10,
                     param_11,param_12);
        param_2 = extraout_g1_25;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19560:
        auVar30._8_4_ = 0x19564;
        auVar30._0_8_ = auVar3._0_8_;
        auVar30._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar30;
        auVar56._4_56_ = auVar30._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001aba0();
        param_2 = extraout_g1_26;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19568:
        auVar31._8_4_ = 0x1956c;
        auVar31._0_8_ = auVar3._0_8_;
        auVar31._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar31;
        auVar56._4_56_ = auVar31._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001ac30();
        param_2 = extraout_g1_27;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19570:
        auVar32._8_4_ = 0x19574;
        auVar32._0_8_ = auVar3._0_8_;
        auVar32._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar32;
        auVar56._4_56_ = auVar32._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001acc0();
        param_2 = extraout_g1_28;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19578:
        auVar33._8_4_ = 0x1957c;
        auVar33._0_8_ = auVar3._0_8_;
        auVar33._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar33;
        auVar56._4_56_ = auVar33._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001ad10();
        param_2 = extraout_g1_29;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19580:
        auVar34._8_4_ = 0x19584;
        auVar34._0_8_ = auVar3._0_8_;
        auVar34._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar34;
        auVar56._4_56_ = auVar34._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001ad80();
        param_2 = extraout_g1_30;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19588:
        auVar35._8_4_ = 0x1958c;
        auVar35._0_8_ = auVar3._0_8_;
        auVar35._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar35;
        auVar56._4_56_ = auVar35._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001ada0();
        param_2 = extraout_g1_31;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19590:
        auVar36._8_4_ = 0x19594;
        auVar36._0_8_ = auVar3._0_8_;
        auVar36._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar36;
        auVar56._4_56_ = auVar36._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001adb0();
        param_2 = extraout_g1_32;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19598:
        auVar37._8_4_ = 0x1959c;
        auVar37._0_8_ = auVar3._0_8_;
        auVar37._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar37;
        auVar56._4_56_ = auVar37._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001adc0();
        param_2 = extraout_g1_33;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195a0:
        auVar38._8_4_ = 0x195a4;
        auVar38._0_8_ = auVar3._0_8_;
        auVar38._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar38;
        auVar56._4_56_ = auVar38._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001ae00();
        param_2 = extraout_g1_34;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195a8:
        auVar39._8_4_ = 0x195ac;
        auVar39._0_8_ = auVar3._0_8_;
        auVar39._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar39;
        auVar56._4_56_ = auVar39._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001ae40();
        param_2 = extraout_g1_35;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195b0:
        auVar40._8_4_ = 0x195b4;
        auVar40._0_8_ = auVar3._0_8_;
        auVar40._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar40;
        auVar56._4_56_ = auVar40._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001ae80();
        param_2 = extraout_g1_36;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195b8:
        auVar41._8_4_ = 0x195bc;
        auVar41._0_8_ = auVar3._0_8_;
        auVar41._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar41;
        auVar56._4_56_ = auVar41._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001aed0();
        param_2 = extraout_g1_37;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195c0:
        auVar42._8_4_ = 0x195c4;
        auVar42._0_8_ = auVar3._0_8_;
        auVar42._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar42;
        auVar56._4_56_ = auVar42._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001af50();
        param_2 = extraout_g1_38;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195c8:
        auVar43._8_4_ = 0x195cc;
        auVar43._0_8_ = auVar3._0_8_;
        auVar43._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar43;
        auVar56._4_56_ = auVar43._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001af90();
        param_2 = extraout_g1_39;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195d0:
        auVar44._8_4_ = 0x195d4;
        auVar44._0_8_ = auVar3._0_8_;
        auVar44._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar44;
        auVar56._4_56_ = auVar44._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001afe0();
        param_2 = extraout_g1_40;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195d8:
        auVar45._8_4_ = 0x195dc;
        auVar45._0_8_ = auVar3._0_8_;
        auVar45._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar45;
        auVar56._4_56_ = auVar45._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b020();
        param_2 = extraout_g1_41;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195e0:
        auVar46._8_4_ = 0x195e4;
        auVar46._0_8_ = auVar3._0_8_;
        auVar46._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar46;
        auVar56._4_56_ = auVar46._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b090();
        param_2 = extraout_g1_42;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195e8:
        auVar47._8_4_ = 0x195ec;
        auVar47._0_8_ = auVar3._0_8_;
        auVar47._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar47;
        auVar56._4_56_ = auVar47._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b0e0();
        param_2 = extraout_g1_43;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195f0:
        auVar48._8_4_ = 0x195f4;
        auVar48._0_8_ = auVar3._0_8_;
        auVar48._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar48;
        auVar56._4_56_ = auVar48._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b130();
        param_2 = extraout_g1_44;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x195f8:
        auVar49._8_4_ = 0x195fc;
        auVar49._0_8_ = auVar3._0_8_;
        auVar49._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar49;
        auVar56._4_56_ = auVar49._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b170();
        param_2 = extraout_g1_45;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19600:
        auVar50._8_4_ = 0x19604;
        auVar50._0_8_ = auVar3._0_8_;
        auVar50._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar50;
        auVar56._4_56_ = auVar50._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b1a0();
        param_2 = extraout_g1_46;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19608:
        auVar51._8_4_ = 0x1960c;
        auVar51._0_8_ = auVar3._0_8_;
        auVar51._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar51;
        auVar56._4_56_ = auVar51._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b1d0();
        param_2 = extraout_g1_47;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19610:
        auVar52._8_4_ = 0x19614;
        auVar52._0_8_ = auVar3._0_8_;
        auVar52._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar52;
        auVar56._4_56_ = auVar52._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b200();
        param_2 = extraout_g1_48;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19618:
        auVar53._8_4_ = 0x1961c;
        auVar53._0_8_ = auVar3._0_8_;
        auVar53._12_52_ = auVar3._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar53;
        auVar56._4_56_ = auVar53._8_56_;
        auVar56._0_4_ = (iVar55 + 0x3fU & 0xffffffc0) + 0x40;
        FUN_0001b290();
        param_2 = extraout_g1_49;
        fp = iVar55 + 0x3fU & 0xffffffc0;
        break;
      case (undefined *)0x19620:
        goto switchD_000193b4_caseD_19620;
      }
    }
    auVar2._4_60_ = auVar56;
    auVar2._0_4_ = uVar1;
    ac = ac & 0xfffffff8 | (uint)(DAT_005bf8a1 != '\0') << 2 | (uint)(DAT_005bf8a1 == '\0') << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      fp = uVar1;
      return;
    }
  } while( true );
}

