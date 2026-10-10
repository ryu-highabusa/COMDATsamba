
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000143c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  word wVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [24];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined2 *puVar13;
  undefined1 in_register_0000000c [12];
  undefined4 unaff_r6;
  undefined1 in_register_0000001c [36];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar10 [64];
  
  uVar14 = ac;
  uVar3 = CONCAT44(auStackX_0,unaff_pfp);
  auVar4._8_4_ = unaff_retaddr;
  auVar4._0_8_ = uVar3;
  auVar4._12_12_ = in_register_0000000c;
  auVar5._24_4_ = unaff_r6;
  auVar5._0_24_ = auVar4;
  auVar5._28_36_ = in_register_0000001c;
  auVar6._24_40_ = auVar5._24_40_;
  auVar6._0_20_ = auVar4._0_20_;
  auVar6._20_4_ = param_1;
  auVar7._32_32_ = in_register_0000001c._4_32_;
  auVar7._0_28_ = auVar6._0_28_;
  auVar7._28_4_ = param_2;
  auVar11._20_44_ = auVar7._20_44_;
  auVar11._0_16_ = auVar4._0_16_;
  puVar13 = (undefined2 *)&DAT_0100c100;
  if (param_1 == 0) {
    puVar13 = &DAT_0100c104;
  }
  auVar11._16_4_ = puVar13;
  ac = ac & 0xfffffff8 | (uint)(9 < param_2) << 2 | (uint)(param_2 == 9) << 1 | (uint)(param_2 < 9);
  if (((byte)ac & 1 | 9 < param_2) == 1) {
    ac = uVar14 & 0xfffffff8 | (uint)(8 < param_2) << 2 | (uint)(param_2 == 8) << 1 |
         (uint)(param_2 < 8);
    if (((byte)ac & 1 | 8 < param_2) != 1) {
      auVar12._12_52_ = auVar11._12_52_;
      auVar12._8_4_ = 0x14484;
      auVar12._0_8_ = uVar3;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar12;
      auVar11._8_56_ = auVar12._8_56_;
      auVar11._4_4_ = auStack_40;
      auVar11._0_4_ = fp;
      FUN_00013db0(param_1);
    }
  }
  else {
    auVar8._28_36_ = auVar7._28_36_;
    auVar8._0_24_ = auVar11._0_24_;
    auVar8._24_4_ = &DAT_00555660;
    uVar14 = DAT_00557a80 ^ 1;
    auVar10._12_52_ = auVar8._12_52_;
    auVar10._8_4_ = 0x14404;
    auVar10._0_8_ = uVar3;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
    auVar9._8_56_ = auVar10._8_56_;
    auVar9._4_4_ = auStackX_0;
    auVar9._0_4_ = fp;
    FUN_00008eb0((int *)(&DAT_00555660 + uVar14 * 0xc));
    ac = ac & 0xfffffff8 | (uint)(g_effective_nation != JAPAN) << 2 |
         (uint)(g_effective_nation == JAPAN) << 1;
    if (g_effective_nation != JAPAN) {
      uVar14 = (uint)(&g_player1)[param_1].character_id;
      wVar1 = (&WORD_00090b8a)[uVar14];
    }
    else {
      uVar14 = (uint)(&g_player1)[param_1].character_id;
      wVar1 = (&WORD_00090b70)[uVar14];
    }
    auStackX_0._12_52_ = auVar9._12_52_;
    auStackX_0._0_8_ = auVar9._0_8_;
    auStackX_0._8_4_ = 0x14478;
    auVar11._8_56_ = auStackX_0._8_56_;
    auVar11._4_4_ = auStack_80;
    auVar11._0_4_ = auStackX_0;
    FUN_00039240((int *)(&DAT_00555660 + (DAT_00557a80 ^ 1) * 0xc),(int)(short)wVar1,param_3,param_4
                 ,uVar14,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  }
  fp = auVar11._0_4_;
  uVar14 = ac & 0xfffffff8 | (uint)(8 < param_2) << 2 | (uint)(param_2 == 8) << 1;
  ac = uVar14 | param_2 < 8;
  if (((byte)(uVar14 >> 1) & 1) != 1) {
    iVar16 = 0;
    do {
      puVar13 = auVar11._16_4_;
      *puVar13 = *(undefined2 *)(&DAT_0209c640 + (iVar16 % 8) * 2 + param_2 * 0x20);
      iVar15 = iVar16 % 8;
      iVar16 = iVar16 + 1;
      uVar2 = ac & 0xfffffff8 | (uint)(iVar16 < 199) << 2;
      uVar14 = uVar2 | (uint)(iVar16 == 199) << 1;
      ac = uVar14 | 199 < iVar16;
      auVar11._16_4_ = puVar13 + 4;
      puVar13[1] = (&WORD_0209c650)[param_2 * 0x10 + iVar15];
    } while (((byte)(uVar14 >> 1) & 1 | (byte)(uVar2 >> 2) & 1) == 1);
  }
  return;
}

