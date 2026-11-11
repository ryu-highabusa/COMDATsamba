
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0002f720(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  byte bVar1;
  undefined1 auVar2 [32];
  undefined4 unaff_pfp;
  undefined1 auVar3 [36];
  undefined1 auVar6 [40];
  undefined4 unaff_retaddr;
  int iVar27;
  int iVar28;
  undefined1 in_register_0000000c [20];
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 in_register_00000028 [24];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar4 [36];
  undefined1 auVar15 [64];
  undefined1 auVar5 [36];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  int iVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar12 [64];
  undefined1 auVar21 [64];
  undefined1 auVar25 [64];
  undefined1 auVar7 [64];
  undefined1 auVar17 [64];
  undefined1 auVar14 [64];
  
  uVar32 = ac;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar2._12_20_ = in_register_0000000c;
  auVar7._32_4_ = unaff_r8;
  auVar7._0_32_ = auVar2;
  auVar7._36_4_ = unaff_r9;
  auVar7._40_24_ = in_register_00000028;
  auVar8._28_36_ = auVar7._28_36_;
  auVar8._0_24_ = auVar2._0_24_;
  auVar8._24_4_ = &g_player1;
  auVar9._24_40_ = auVar8._24_40_;
  auVar9._0_20_ = auVar2._0_20_;
  auVar9._20_4_ = &g_player2;
  auVar10._20_44_ = auVar9._20_44_;
  auVar10._0_16_ = auVar2._0_16_;
  auVar10._16_4_ = &FLOAT_000b5f30;
  uVar31 = ac & 0xfffffff8 | (uint)(1 < g_player1.hit_body) << 2 |
           (uint)(g_player1.hit_body == '\x01') << 1;
  ac = uVar31 | g_player1.hit_body == '\0';
  if ((((byte)(uVar31 >> 1) & 1) != 1) &&
     (ac = uVar32 & 0xfffffff8 | (uint)(1 < g_player2.hit_body) << 2 |
           (uint)(g_player2.hit_body == '\x01') << 1 | (uint)(g_player2.hit_body == '\0'),
     ((byte)ac & 1 | 1 < g_player2.hit_body) == 1)) goto LAB_0002fa3c;
  auVar12._12_52_ = auVar10._12_52_;
  auVar12._8_4_ = 0x2f754;
  auVar12._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
  auVar11._8_56_ = auVar12._8_56_;
  auVar11._4_4_ = auStack_40;
  auVar11._0_4_ = fp;
  Battle_ResolveInteractionPriority();
  auVar10._36_28_ = auVar11._36_28_;
  auVar3._0_32_ = auVar11._0_32_;
  auVar3._32_4_ = 0xff;
  auVar10._0_36_ = auVar3;
  uVar31 = ac & 0xfffffff8 | (uint)(DAT_005647d2 == -1) << 1;
  fp = (undefined1 *)register0x00000004;
  if (((((byte)(uVar31 >> 1) & 1) == 1) ||
      (uVar31 = ac & 0xfffffff8 | (uint)(DAT_005647d3 == -1) << 1, ((byte)(uVar31 >> 1) & 1) == 1))
     || ((DAT_005647d2 == '\0' && (uVar31 = ac & 0xfffffff8, DAT_005647d3 == '\0')))) {
    ac = uVar31;
    DAT_0056480c = (int)g14;
    goto LAB_0002fa3c;
  }
  uVar31 = ac & 0xfffffff8 | (uint)(DAT_005647d2 == '\0') << 1;
  if ((((byte)(uVar31 >> 1) & 1) == 1) ||
     (ac = ac & 0xfffffff8 | (uint)(DAT_005647d3 != '\0') << 2 | (uint)(DAT_005647d3 == '\0') << 1,
     uVar31 = ac, DAT_005647d3 == '\0')) {
    ac = uVar31;
    auVar10._40_24_ = auVar11._40_24_;
    auVar10._36_4_ = 1;
    DAT_0056481c = 1;
    ac = ac & 0xfffffff8 | (uint)(DAT_005647d2 == '\0') << 1;
    if (((byte)(ac >> 1) & 1) == 1) {
      param_6 = &DAT_0056480c;
    }
    else {
      DAT_0056480c = (int)g14;
      param_6 = (int *)&DAT_00564808;
    }
    goto LAB_0002fa3c;
  }
  fp = auStack_40;
  auStackX_0._12_52_ = auVar10._12_52_;
  auStackX_0._0_8_ = auVar11._0_8_;
  auStackX_0._8_4_ = 0x2f850;
  auVar13._8_56_ = auStackX_0._8_56_;
  auVar13._4_4_ = auStack_80;
  auVar13._0_4_ = auStackX_0;
  param_4 = _DAT_0055539c;
  uVar31 = _DAT_005553a0;
  uVar32 = _DAT_005553a4;
  iVar29 = FUN_00006320(DAT_005552e8,DAT_005552ec,DAT_005552f0,_DAT_0055539c,_DAT_005553a0,
                        _DAT_005553a4);
  ac = ac & 0xfffffff8;
  if ((float10)CONCAT44(uVar32,(uint)uVar31) < (float10)'\0') {
    uVar32 = uVar32 ^ 0x80000000;
  }
  auVar6._0_32_ = auVar13._0_32_;
  auVar6._32_4_ = 0;
  auVar14._40_24_ = auVar13._40_24_;
  auVar6._36_4_ = 0x40000000;
  auVar14._0_40_ = auVar6;
  if ((float10)CONCAT44(uVar32,(uint)uVar31) < (float10)auVar6._32_8_) {
    iVar29 = (int)(float10)iVar29;
  }
  else {
    iVar29 = 0x14;
  }
  param_3 = (int)(&FLOAT_000b60b0)[iVar29];
  DAT_0056481c = (int)g14;
  if (DAT_005647d1 < DAT_005647d0 || DAT_005647d0 < DAT_005647d1) {
    fVar30 = 1.4013e-45;
    if (DAT_005647d1 < DAT_005647d0) {
      fVar30 = 0.0;
    }
  }
  else {
    fVar30 = 2.8026e-45;
  }
  auVar15._36_28_ = auVar14._36_28_;
  if ((byte)DAT_005647d3 < (byte)DAT_005647d2 || (byte)DAT_005647d2 < (byte)DAT_005647d3) {
    auVar4._32_4_ = 0xff;
    auVar4._0_32_ = auVar6._0_32_;
    auVar15._0_36_ = auVar4;
    if (fVar30 == 2.8026e-45) goto LAB_0002f994;
    auVar15._36_4_ = 0xff;
    auVar15._40_24_ = auVar14._40_24_;
  }
  else {
    auVar15._32_4_ = 0xff;
    auVar15._0_32_ = auVar6._0_32_;
    if (fVar30 == 2.8026e-45) {
LAB_0002f994:
      auVar15._32_4_ = 0xff;
      fVar30 = 0.0;
    }
  }
  auVar10._36_28_ = auVar15._36_28_;
  auVar10._0_32_ = auVar15._0_32_;
  auVar10._32_4_ = 0xff;
  if (fVar30 == 0.0) {
    piVar33 = &DAT_0056480c;
  }
  else {
    piVar33 = (int *)&DAT_00564808;
    DAT_0056480c = (int)fVar30;
  }
  param_6 = (int *)*piVar33;
  *piVar33 = (int)fVar30;
LAB_0002fa3c:
  iVar29 = DAT_0056481c;
  iVar28 = auVar10._24_4_;
  iVar27 = auVar10._20_4_;
  auVar16._40_24_ = auVar10._40_24_;
  auVar16._0_36_ = auVar10._0_36_;
  auVar16._36_4_ = 0xff;
  auVar17._36_28_ = auVar16._36_28_;
  auVar5._0_32_ = auVar10._0_32_;
  auVar5._32_4_ = 0xff;
  auVar17._0_36_ = auVar5;
  if ((((byte)(*(char *)(iVar27 + 0x2d) - 2U) < 2) && (*(char *)(iVar27 + 0x46) == '\0')) &&
     (*(char *)(iVar27 + 0x33) == '\x01')) {
    DAT_0056480c = (int)g14;
  }
  if ((((*(char *)(iVar28 + 0x2d) == '\x01') && (*(char *)(iVar28 + 0x3b) == '\x01')) &&
      (*(char *)(iVar27 + 0x2e) == '\x01')) ||
     (((*(char *)(iVar27 + 0x2d) == '\x01' && (*(char *)(iVar27 + 0x3b) == '\x01')) &&
      (*(char *)(iVar28 + 0x2e) == '\x01')))) {
    DAT_0056480c = (int)g14;
  }
  if ((*(char *)(iVar28 + 0x2d) == '\t') && (*(char *)(iVar27 + 0x2d) == '\t')) {
    DAT_0056480c = (int)g14;
  }
  bVar1 = *(byte *)(iVar28 + 0x2d);
  uVar31 = ac & 0xfffffff8 | (uint)(bVar1 == 4) << 1;
  if ((((byte)(uVar31 >> 1) & 1) == 1) ||
     (ac = ac & 0xfffffff8 | (uint)(bVar1 < 6), uVar31 = ac, ((byte)ac & 1 | 6 < bVar1) != 1)) {
    ac = uVar31;
    auVar17._36_4_ = 0xff;
    auVar17._40_24_ = auVar16._40_24_;
    bVar1 = *(char *)(iVar27 + 0x2d) - 10;
    uVar31 = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1;
    ac = uVar31 | *(char *)(iVar27 + 0x2d) == '\n';
    if (((byte)ac & 1 | (byte)(uVar31 >> 1) & 1) == 1) {
      fp = (undefined1 *)auVar10._0_4_;
      DAT_00564808 = g14;
      DAT_0056480c = (int)g14;
      return;
    }
  }
  auVar18._40_24_ = auVar17._40_24_;
  auVar18._0_36_ = auVar17._0_36_;
  auVar18._36_4_ = 0xff;
  bVar1 = *(byte *)(iVar27 + 0x2d);
  uVar31 = ac & 0xfffffff8 | (uint)(bVar1 == 4) << 1;
  if ((((byte)(uVar31 >> 1) & 1) == 1) ||
     (ac = ac & 0xfffffff8 | (uint)(bVar1 < 6), uVar31 = ac, ((byte)ac & 1 | 6 < bVar1) != 1)) {
    ac = uVar31;
    auVar18._0_32_ = auVar17._0_32_;
    auVar18._32_4_ = 0xff;
    bVar1 = *(char *)(iVar28 + 0x2d) - 10;
    ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 |
         (uint)(*(char *)(iVar28 + 0x2d) == '\n');
    if (1 >= bVar1) {
      DAT_00564808 = g14;
      DAT_0056480c = (int)g14;
      fp = (undefined1 *)auVar10._0_4_;
      return;
    }
  }
  auVar19._36_28_ = auVar18._36_28_;
  auVar19._0_32_ = auVar18._0_32_;
  auVar19._32_4_ = 0xff;
  auVar20._20_44_ = auVar19._20_44_;
  auVar20._0_16_ = auVar18._0_16_;
  auVar20._16_4_ = &DAT_0056480c;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_0056481c) << 2 | (uint)(DAT_0056481c == 1) << 1 |
       (uint)(DAT_0056481c < 1);
  auVar22._0_8_ = auVar18._0_8_;
  auVar22._12_52_ = auVar20._12_52_;
  DAT_00564808 = (float)param_3;
  if (((byte)ac & 1 | 1 < DAT_0056481c) != 1) {
    uVar31 = auVar18._4_4_ + 0x3f;
    auVar22._8_4_ = 0x2fbb0;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
    auVar21._8_56_ = auVar22._8_56_;
    auVar21._0_8_ = CONCAT44(uVar31,fp) & 0xffffffc0ffffffff;
    FUN_00030100(0,0,param_3,param_4,iVar29,param_6);
    iVar27 = DAT_0056480c;
    auVar23._12_52_ = auVar21._12_52_;
    auVar23._0_8_ = auVar21._0_8_;
    auVar23._8_4_ = 0x2fbc0;
    *(undefined1 (*) [64])(uVar31 & 0xffffffc0) = auVar23;
    FUN_00030100(1,1,iVar27,param_4,iVar29,param_6);
    fp = (undefined1 *)(uVar31 & 0xffffffc0);
    return;
  }
  uVar31 = auVar18._4_4_ + 0x3f;
  auVar25._8_4_ = 0x2fbd8;
  auVar25._0_8_ = auVar22._0_8_;
  auVar25._12_52_ = auVar22._12_52_;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar25;
  auVar24._8_56_ = auVar25._8_56_;
  auVar24._0_8_ = CONCAT44(uVar31,fp) & 0xffffffc0ffffffff;
  FUN_00030100(0,1,param_3,param_4,iVar29,param_6);
  iVar27 = DAT_0056480c;
  auVar26._12_52_ = auVar24._12_52_;
  auVar26._0_8_ = auVar24._0_8_;
  auVar26._8_4_ = 0x2fbec;
  *(undefined1 (*) [64])(uVar31 & 0xffffffc0) = auVar26;
  FUN_00030100(1,0,iVar27,param_4,iVar29,param_6);
  fp = (undefined1 *)(uVar31 & 0xffffffc0);
  return;
}

