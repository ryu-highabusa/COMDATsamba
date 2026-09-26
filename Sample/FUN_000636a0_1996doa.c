
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000636a0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  dword dVar4;
  undefined1 auVar5 [24];
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  dword dVar10;
  undefined4 unaff_pfp;
  undefined1 auVar11 [28];
  undefined1 auVar12 [32];
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [12];
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined1 in_register_00000020 [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  int iVar17;
  undefined1 auStackX_0 [1000000];
  
  auVar5._4_4_ = auStackX_0;
  auVar5._0_4_ = unaff_pfp;
  auVar5._8_4_ = unaff_retaddr;
  auVar5._12_12_ = in_register_0000000c;
  auVar13._24_4_ = unaff_r6;
  auVar13._0_24_ = auVar5;
  auVar13._28_4_ = unaff_r7;
  auVar13._32_32_ = in_register_00000020;
  auVar14._24_40_ = auVar13._24_40_;
  auVar14._0_20_ = auVar5._0_20_;
  auVar14._20_4_ = DAT_0059340c + 0x4036;
  g13 = (undefined4 *)(&DAT_0059be80 + DAT_00593408 * 0x7f8);
  auVar15._20_44_ = auVar14._20_44_;
  auVar15._0_16_ = auVar5._0_16_;
  auVar15._16_4_ = 0;
  uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_00593410) << 2 | (uint)(DAT_00593410 == 0) << 1;
  ac = uVar1 | DAT_00593410 < 0;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    do {
      if (*(short *)(g13 + 3) < 1) {
        if (*(short *)((int)g13 + 0xe) < 1) {
          *g13 = g14;
        }
        else {
          if (DAT_0054fcfe == '\0') {
            *(short *)((int)g13 + 0xe) = *(short *)((int)g13 + 0xe) + -1;
            g13[7] = g13[7];
            g13[4] = g13[4];
            iVar17 = g13[8];
            g13[8] = iVar17;
            iVar7 = g13[5];
            g13[5] = iVar7;
            if ((float10)iVar7 <= (float10)'\0') {
              uVar1 = g13[8];
              uVar6 = uVar1 ^ 0x80000000;
              g13[8] = uVar6;
              auVar11._0_24_ = auVar15._0_24_;
              auVar11._24_4_ = 0x47ae147b;
              auVar12._28_4_ = 0x3fb47ae1;
              auVar12._0_28_ = auVar11;
              if ((float10)auVar12._24_8_ <
                  (float10)CONCAT44((int)((unkuint10)((float10)iVar7 + (float10)iVar17) >> 0x20),
                                    CONCAT22((short)(uVar6 >> 0x10),(short)uVar1))) {
                auVar12._28_4_ = 0x3da3d70a;
                g13[8] = 0x3da3d70a;
              }
              auVar15._0_32_ = auVar12;
              g13[5] = g14;
            }
            g13[10] = g13[10] + 0x1000;
            g13[0xc] = g13[0xc] + 0x2000;
          }
          if ((((auVar15._16_4_ & 1) != 0) && (DAT_00593400 == 0)) ||
             (((auVar15._16_4_ & 1) == 0 && (DAT_00593400 != 0)))) {
            auVar16._0_24_ = auVar15._0_24_;
            DAT_00880050 = 0x505;
            auVar16._32_32_ = auVar15._32_32_;
            DAT_00880150 = 0x1515;
            *(undefined4 *)PTR_DAT_000006a4 = g13[0xb];
            uVar8 = g13[5];
            uVar9 = g13[6];
            DAT_00880120 = 0x1212;
            *(undefined4 *)PTR_DAT_000006a0 = g13[4];
            *(undefined4 *)PTR_DAT_000006a0 = uVar8;
            *(undefined4 *)PTR_DAT_000006a0 = uVar9;
            DAT_00880140 = 0x1414;
            *(undefined4 *)PTR_DAT_000006a4 = g13[10];
            DAT_00880160 = 0x1616;
            *(undefined4 *)PTR_DAT_000006a4 = g13[0xc];
            DAT_00880130 = 0x1313;
            *(undefined4 *)PTR_DAT_000006a0 = 0x3fc00000;
            *(undefined4 *)PTR_DAT_000006a0 = 0x3fc00000;
            *(undefined4 *)PTR_DAT_000006a0 = 0x3fc00000;
            dVar10 = DWORD_000006a8;
            puVar2 = PTR_DAT_000006a0;
            iVar7 = auVar15._20_4_ + DAT_005a6f10;
            DAT_00880110 = &DAT_00001111;
            auVar16._24_4_ = 0xb0b;
            DAT_008000b0 = 0xb0b;
            uVar8 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
            uVar9 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
            uVar3 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
            *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
            *(undefined4 *)(dVar10 + 4) = uVar8;
            *(undefined4 *)(dVar10 + 8) = uVar9;
            *(undefined4 *)(dVar10 + 0xc) = uVar3;
            uVar8 = *(undefined4 *)(puVar2 + 4);
            uVar9 = *(undefined4 *)(puVar2 + 8);
            uVar3 = *(undefined4 *)(puVar2 + 0xc);
            *(undefined4 *)dVar10 = *(undefined4 *)puVar2;
            *(undefined4 *)(dVar10 + 4) = uVar8;
            *(undefined4 *)(dVar10 + 8) = uVar9;
            *(undefined4 *)(dVar10 + 0xc) = uVar3;
            uVar8 = *(undefined4 *)(puVar2 + 4);
            uVar9 = *(undefined4 *)(puVar2 + 8);
            uVar3 = *(undefined4 *)(puVar2 + 0xc);
            *(undefined4 *)dVar10 = *(undefined4 *)puVar2;
            *(undefined4 *)(dVar10 + 4) = uVar8;
            *(undefined4 *)(dVar10 + 8) = uVar9;
            *(undefined4 *)(dVar10 + 0xc) = uVar3;
            auVar16._28_4_ = 0x101;
            DAT_00800010 = 0x101;
            uVar8 = *(undefined4 *)(&DAT_0203a164 + iVar7 * 0x10);
            puVar2 = (&PTR_GEOBASE_00800000_0203a168)[iVar7 * 4];
            dVar4 = (&DWORD_0203a16c)[iVar7 * 4];
            *(float *)dVar10 = (&FLOAT_0203a160)[iVar7 * 4];
            *(undefined4 *)(dVar10 + 4) = uVar8;
            *(undefined **)(dVar10 + 8) = puVar2;
            *(dword *)(dVar10 + 0xc) = dVar4;
            auVar15._28_36_ = auVar16._28_36_;
            auVar15._24_4_ = 0x606;
            auVar15._0_24_ = auVar16._0_24_;
            DAT_00880060 = 0x606;
          }
        }
      }
      else if (DAT_0054fcfe == '\0') {
        *(short *)(g13 + 3) = *(short *)(g13 + 3) + -1;
      }
      g13 = g13 + 0x11;
      auVar15._16_4_ = auVar15._16_4_ + 1;
      iVar7 = (int)DAT_00593410;
      ac = ac & 0xfffffff8 | (uint)(iVar7 < auVar15._16_4_) << 2 |
           (uint)(iVar7 == auVar15._16_4_) << 1 | (uint)(auVar15._16_4_ < iVar7);
    } while (((byte)ac & 1) == 1);
  }
  fp = auVar15._0_4_;
  return;
}

