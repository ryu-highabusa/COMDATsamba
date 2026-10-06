
/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_0002db50(uint param_1,uint param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined4 unaff_pfp;
  undefined1 auVar8 [20];
  undefined1 auVar9 [24];
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar11 [64];
  undefined1 auVar10 [64];
  undefined1 auVar13 [64];
  undefined1 auVar12 [64];
  undefined1 auVar15 [64];
  undefined1 auVar14 [64];
  bool bVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  DOA_F32 DVar20;
  int iVar21;
  undefined2 uVar22;
  undefined1 auStackX_0 [64];
  
  auVar10._8_4_ = unaff_retaddr;
  auVar10._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar10._12_52_ = in_register_0000000c;
  auVar11._24_40_ = in_register_0000000c._12_40_;
  auVar11._0_20_ = auVar10._0_20_;
  auVar11._20_4_ = param_1;
  auVar12._20_44_ = auVar11._20_44_;
  auVar8._0_16_ = auVar10._0_16_;
  auVar8._16_4_ = param_2;
  auVar12._0_20_ = auVar8;
  ac = ac & 0xfffffff8;
  if ((param_2 & 0x8000) == 0) {
    ac = ac | (uint)(5 < TimeCurrentMatch_Seconds_005555a0) << 2;
    uVar19 = ac;
    ac = ac | (uint)(TimeCurrentMatch_Seconds_005555a0 == 5) << 1;
    ac = ac | TimeCurrentMatch_Seconds_005555a0 < 5;
    if (((byte)(uVar19 >> 2) & 1) != 1) goto LAB_0002db68;
  }
  else {
LAB_0002db68:
    ac = ac & 0xfffffff8;
    if ((param_2 & 0x4000) == 0) {
      uVar5 = *(ushort *)(pwrk_own + 0x20);
      uVar6 = *(ushort *)(pwrk_rival + 0x20);
      ac = ac | (uint)(uVar5 < uVar6) << 2;
      uVar19 = ac;
      ac = ac | (uint)(uVar5 == uVar6) << 1;
      ac = ac | uVar6 < uVar5;
      if (((byte)(uVar19 >> 2) & 1) == 1) goto LAB_0002e2ac;
    }
    ac = ac & 0xfffffff8;
    if ((param_2 & 0x2000) == 0) {
      uVar5 = *(ushort *)(pwrk_own + 0x20);
      uVar6 = *(ushort *)(pwrk_rival + 0x20);
      ac = ac | (uint)(uVar5 < uVar6) << 2;
      ac = ac | (uint)(uVar5 == uVar6) << 1;
      ac = ac | uVar6 < uVar5;
      if (((byte)ac & 1) == 1) goto LAB_0002e2ac;
    }
    ac = ac & 0xfffffff8;
    if ((param_2 & 0x1000) == 0) {
      uVar19 = (uint)plyr;
      DAT_008801e0 = 0x1e1e;
      *(undefined4 *)PTR_DAT_000006a4 = *(undefined4 *)(pwrk_own + 0x14);
      *(undefined4 *)PTR_DAT_000006a0 = 0x40400000;
      DAT_008801d0 = 0x1d1d;
      *(int *)PTR_DAT_000006a4 =
           (int)((unkuint10)
                 ((float10)*(int *)PTR_DAT_000006a0 + (float10)(int)(&g_player1)[uVar19].x_position)
                >> 0x20);
      *(undefined4 *)PTR_DAT_000006a0 = 0x40400000;
      uVar22 = (undefined2)
               ((unkuint10)
                ((float10)*(int *)PTR_DAT_000006a0 + (float10)(int)(&g_player1)[uVar19].z_position)
               >> 0x30);
      fVar2 = (float10)SUB104((float10)(int)-FLOAT_0054fd7c / (float10)0x40000000,0);
      fVar1 = (float10)CONCAT22(uVar22,(short)((unkuint10)
                                               ((float10)(int)-FLOAT_0054fd7c / (float10)0x40000000)
                                              >> 0x40));
      if (!NAN(fVar1) && !NAN(fVar2)) {
        ac = ac | (uint)(fVar1 < fVar2) << 2;
      }
      if (((byte)(ac >> 2) & 1) == 1) {
LAB_0002dcc0:
        bVar16 = true;
      }
      else {
        fVar2 = (float10)SUB104((float10)(int)FLOAT_0054fd7c / (float10)0x40000000,0);
        fVar1 = (float10)CONCAT22(uVar22,(short)((unkuint10)
                                                 ((float10)(int)FLOAT_0054fd7c / (float10)0x40000000
                                                 ) >> 0x40));
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | fVar2 < fVar1;
        }
        if (((byte)ac & 1) == 1) goto LAB_0002dcc0;
        fVar2 = (float10)(int)-FLOAT_0054fd80 / (float10)0x40000000;
        fVar1 = (float10)(int)((unkuint10)fVar2 >> 0x20);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN((float10)SUB104(fVar2,0))) {
          ac = ac | (uint)(fVar1 < (float10)SUB104(fVar2,0)) << 2;
        }
        if (((byte)(ac >> 2) & 1) == 1) goto LAB_0002dcc0;
        fVar1 = (float10)CONCAT22((short)((uint)FLOAT_0054fd80 >> 0x10),
                                  (short)((unkuint10)fVar2 >> 0x40)) / (float10)0x40000000;
        fVar2 = (float10)SUB104(fVar1,0);
        fVar1 = (float10)(int)((unkuint10)fVar1 >> 0x20);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | (uint)(fVar1 < fVar2) << 2;
          ac = ac | (uint)(fVar1 == fVar2) << 1;
        }
        if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) goto LAB_0002dcc0;
        bVar16 = false;
      }
      uVar19 = ac & 0xfffffff8 | (uint)(true < bVar16) << 2 | (uint)bVar16 << 1;
      ac = uVar19 | !bVar16;
      if (((byte)(uVar19 >> 1) & 1) == 1) goto LAB_0002e2ac;
    }
    ac = ac & 0xfffffff8;
    if ((param_2 & 0x800) == 0) {
      uVar19 = (uint)plyr;
      iVar21 = *(int *)(pwrk_own + 0x14);
      DAT_008801e0 = 0x1e1e;
      *(int *)PTR_DAT_000006a4 = iVar21 + 0x8000;
      *(undefined4 *)PTR_DAT_000006a0 = 0x40400000;
      iVar7 = *(int *)PTR_DAT_000006a0;
      DVar20 = (&g_player1)[uVar19].x_position;
      DAT_008801d0 = 0x1d1d;
      *(int *)PTR_DAT_000006a4 = iVar21 + 0x8000;
      *(undefined4 *)PTR_DAT_000006a0 = 0x40400000;
      iVar21 = CONCAT22((short)((unkuint10)((float10)iVar7 + (float10)(int)DVar20) >> 0x10),
                        (short)((unkuint10)
                                ((float10)*(int *)PTR_DAT_000006a0 +
                                (float10)(int)(&g_player1)[uVar19].z_position) >> 0x40));
      fVar2 = (float10)SUB104((float10)(int)-FLOAT_0054fd7c / (float10)0x40000000,0);
      fVar1 = (float10)iVar21;
      if (!NAN(fVar1) && !NAN(fVar2)) {
        ac = ac | (uint)(fVar1 < fVar2) << 2;
      }
      if (((byte)(ac >> 2) & 1) == 1) {
LAB_0002ddf8:
        bVar16 = true;
      }
      else {
        fVar2 = (float10)SUB104((float10)CONCAT22((short)((uint)FLOAT_0054fd7c >> 0x10),
                                                  (short)((unkuint10)
                                                          ((float10)(int)-FLOAT_0054fd7c /
                                                          (float10)0x40000000) >> 0x40)) /
                                (float10)0x40000000,0);
        fVar1 = (float10)iVar21;
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | fVar2 < fVar1;
        }
        if (((byte)ac & 1) == 1) goto LAB_0002ddf8;
        fVar2 = (float10)(int)-FLOAT_0054fd80 / (float10)0x40000000;
        fVar1 = (float10)(int)((unkuint10)fVar2 >> 0x20);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN((float10)SUB104(fVar2,0))) {
          ac = ac | (uint)(fVar1 < (float10)SUB104(fVar2,0)) << 2;
        }
        if (((byte)(ac >> 2) & 1) == 1) goto LAB_0002ddf8;
        fVar1 = (float10)CONCAT22((short)((uint)FLOAT_0054fd80 >> 0x10),
                                  (short)((unkuint10)fVar2 >> 0x40)) / (float10)0x40000000;
        fVar2 = (float10)SUB104(fVar1,0);
        fVar1 = (float10)(int)((unkuint10)fVar1 >> 0x20);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | (uint)(fVar1 < fVar2) << 2;
          ac = ac | (uint)(fVar1 == fVar2) << 1;
        }
        if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) goto LAB_0002ddf8;
        bVar16 = false;
      }
      uVar19 = ac & 0xfffffff8 | (uint)(true < bVar16) << 2 | (uint)bVar16 << 1;
      ac = uVar19 | !bVar16;
      if (((byte)(uVar19 >> 1) & 1) == 1) goto LAB_0002e2ac;
    }
    ac = ac & 0xfffffff8;
    if ((param_2 & 0x400) == 0) {
      fVar2 = (float10)(int)-FLOAT_0054fd08 / (float10)0x40000000;
      fVar1 = (float10)*(int *)(pwrk_own + 4);
      if (!NAN(fVar1) && !NAN((float10)SUB104(fVar2,0))) {
        ac = ac | (uint)(fVar1 < (float10)SUB104(fVar2,0)) << 2;
      }
      if (((byte)(ac >> 2) & 1) == 1) {
LAB_0002de70:
        bVar16 = true;
      }
      else {
        fVar3 = (float10)(int)((unkuint10)fVar2 >> 0x20) /
                (float10)CONCAT22(0x4000,(short)((unkuint10)fVar2 >> 0x40));
        fVar2 = (float10)SUB104(fVar3,0);
        fVar1 = (float10)*(int *)(pwrk_own + 4);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | fVar2 < fVar1;
        }
        if (((byte)ac & 1) == 1) goto LAB_0002de70;
        fVar2 = (float10)(int)-FLOAT_0054fd0c /
                (float10)CONCAT22(0x4000,(short)((unkuint10)fVar3 >> 0x40));
        fVar1 = (float10)*(int *)(pwrk_own + 0xc);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN((float10)SUB104(fVar2,0))) {
          ac = ac | (uint)(fVar1 < (float10)SUB104(fVar2,0)) << 2;
        }
        if (((byte)(ac >> 2) & 1) == 1) goto LAB_0002de70;
        fVar2 = (float10)SUB104((float10)(int)((unkuint10)fVar2 >> 0x20) /
                                (float10)CONCAT22(0x4000,(short)((unkuint10)fVar2 >> 0x40)),0);
        fVar1 = (float10)*(int *)(pwrk_own + 0xc);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | (uint)(fVar1 < fVar2) << 2;
          ac = ac | (uint)(fVar1 == fVar2) << 1;
        }
        if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) goto LAB_0002de70;
        bVar16 = false;
      }
      ac = ac & 0xfffffff8 | (uint)bVar16 << 2 | (uint)!bVar16 << 1;
      if (((byte)(ac >> 1) & 1) == 1) goto LAB_0002e2ac;
    }
    ac = ac & 0xfffffff8;
    if ((param_2 & 0x200) == 0) {
      DAT_008801e0 = 0x1e1e;
      *(undefined4 *)PTR_DAT_000006a4 = *(undefined4 *)(pwrk_own + 0x14);
      *(undefined4 *)PTR_DAT_000006a0 = 0x3fc00000;
      DAT_008801d0 = 0x1d1d;
      *(undefined4 *)PTR_DAT_000006a4 = *(undefined4 *)(pwrk_own + 0x14);
      *(undefined4 *)PTR_DAT_000006a0 = 1069547520;
      uVar22 = (undefined2)
               ((unkuint10)((float10)*(int *)PTR_DAT_000006a0 + (float10)*(int *)(pwrk_own + 0xc))
               >> 0x30);
      fVar2 = (float10)SUB104((float10)(int)-FLOAT_0054fd08 / (float10)0x40000000,0);
      fVar1 = (float10)CONCAT22(uVar22,(short)((unkuint10)
                                               ((float10)(int)-FLOAT_0054fd08 / (float10)0x40000000)
                                              >> 0x40));
      if (!NAN(fVar1) && !NAN(fVar2)) {
        ac = ac | (uint)(fVar1 < fVar2) << 2;
      }
      if (((byte)(ac >> 2) & 1) == 1) {
LAB_0002df88:
        bVar16 = true;
      }
      else {
        fVar2 = (float10)SUB104((float10)(int)FLOAT_0054fd08 / (float10)0x40000000,0);
        fVar1 = (float10)CONCAT22(uVar22,(short)((unkuint10)
                                                 ((float10)(int)FLOAT_0054fd08 / (float10)0x40000000
                                                 ) >> 0x40));
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | fVar2 < fVar1;
        }
        if (((byte)ac & 1) == 1) goto LAB_0002df88;
        fVar2 = (float10)(int)-FLOAT_0054fd0c / (float10)0x40000000;
        fVar1 = (float10)(int)((unkuint10)fVar2 >> 0x20);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN((float10)SUB104(fVar2,0))) {
          ac = ac | (uint)(fVar1 < (float10)SUB104(fVar2,0)) << 2;
        }
        if (((byte)(ac >> 2) & 1) == 1) goto LAB_0002df88;
        fVar1 = (float10)CONCAT22((short)((uint)FLOAT_0054fd0c >> 0x10),
                                  (short)((unkuint10)fVar2 >> 0x40)) / (float10)0x40000000;
        fVar2 = (float10)SUB104(fVar1,0);
        fVar1 = (float10)(int)((unkuint10)fVar1 >> 0x20);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | (uint)(fVar1 < fVar2) << 2;
          ac = ac | (uint)(fVar1 == fVar2) << 1;
        }
        if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) goto LAB_0002df88;
        bVar16 = false;
      }
      ac = ac & 0xfffffff8 | (uint)bVar16 << 2 | (uint)!bVar16 << 1;
      if (((byte)(ac >> 1) & 1) == 1) goto LAB_0002e2ac;
    }
    ac = ac & 0xfffffff8;
    if ((param_2 & 0x100) == 0) {
      DAT_008801e0 = 0x1e1e;
      *(int *)PTR_DAT_000006a4 = *(int *)(pwrk_own + 0x14) + 0x8000;
      *(undefined4 *)PTR_DAT_000006a0 = 0x3fc00000;
      DAT_008801d0 = 0x1d1d;
      *(int *)PTR_DAT_000006a4 = *(int *)(pwrk_own + 0x14) + 0x8000;
      *(undefined4 *)PTR_DAT_000006a0 = 1069547520;
      uVar22 = (undefined2)
               ((unkuint10)((float10)*(int *)PTR_DAT_000006a0 + (float10)*(int *)(pwrk_own + 0xc))
               >> 0x30);
      fVar2 = (float10)SUB104((float10)(int)-FLOAT_0054fd08 / (float10)0x40000000,0);
      fVar1 = (float10)CONCAT22(uVar22,(short)((unkuint10)
                                               ((float10)(int)-FLOAT_0054fd08 / (float10)0x40000000)
                                              >> 0x40));
      if (!NAN(fVar1) && !NAN(fVar2)) {
        ac = ac | (uint)(fVar1 < fVar2) << 2;
      }
      if (((byte)(ac >> 2) & 1) == 1) {
LAB_0002e0b0:
        bVar16 = true;
      }
      else {
        fVar2 = (float10)SUB104((float10)(int)FLOAT_0054fd08 / (float10)0x40000000,0);
        fVar1 = (float10)CONCAT22(uVar22,(short)((unkuint10)
                                                 ((float10)(int)FLOAT_0054fd08 / (float10)0x40000000
                                                 ) >> 0x40));
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | fVar2 < fVar1;
        }
        if (((byte)ac & 1) == 1) goto LAB_0002e0b0;
        fVar2 = (float10)(int)-FLOAT_0054fd0c / (float10)0x40000000;
        fVar1 = (float10)(int)((unkuint10)fVar2 >> 0x20);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN((float10)SUB104(fVar2,0))) {
          ac = ac | (uint)(fVar1 < (float10)SUB104(fVar2,0)) << 2;
        }
        if (((byte)(ac >> 2) & 1) == 1) goto LAB_0002e0b0;
        fVar1 = (float10)CONCAT22((short)((uint)FLOAT_0054fd0c >> 0x10),
                                  (short)((unkuint10)fVar2 >> 0x40)) / (float10)0x40000000;
        fVar2 = (float10)SUB104(fVar1,0);
        fVar1 = (float10)(int)((unkuint10)fVar1 >> 0x20);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | (uint)(fVar1 < fVar2) << 2;
          ac = ac | (uint)(fVar1 == fVar2) << 1;
        }
        if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) goto LAB_0002e0b0;
        bVar16 = false;
      }
      ac = ac & 0xfffffff8 | (uint)bVar16 << 2 | (uint)!bVar16 << 1;
      if (((byte)(ac >> 1) & 1) == 1) goto LAB_0002e2ac;
    }
    uVar19 = ac & 0xfffffff8;
    ac = uVar19;
    if ((((param_2 & 0x80) != 0) ||
        (ac = uVar19 | (uint)(1 < (byte)(pwrk_rival[0x2d] - 2)) << 2, ((byte)(ac >> 2) & 1) == 1))
       || (ac = uVar19 | (uint)(pwrk_rival[0x4d] != -1) << 2 | (uint)(pwrk_rival[0x4d] == -1) << 1,
          ((byte)(ac >> 1) & 1) != 1)) {
      ac = ac & 0xfffffff8;
      if ((param_2 & 0x40) == 0) {
        ac = ac | (uint)(*(short *)(pwrk_rival + 0x20) != 0) << 2;
        uVar19 = ac;
        ac = ac | (uint)(*(short *)(pwrk_rival + 0x20) == 0) << 1;
        if (((byte)(uVar19 >> 2) & 1) == 1) goto LAB_0002e2ac;
      }
      ac = ac & 0xfffffff8;
      if ((param_2 & 0x20) == 0) {
        auVar13._12_52_ = auVar12._12_52_;
        auVar13._8_4_ = 0x2e10c;
        auVar13._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
        auVar12._8_56_ = auVar13._8_56_;
        auVar12._4_4_ = &stack0x00000040;
        auVar12._0_4_ = fp;
        uVar19 = act_punch_chk();
        auVar8 = auVar12._0_20_;
        ac = ac & 0xfffffff8 | (uint)((uVar19 & 0xff) != 0) << 2 | (uint)((uVar19 & 0xff) == 0) << 1
        ;
        fp = (undefined1 *)register0x00000004;
        if (((byte)(ac >> 1) & 1) == 1) goto LAB_0002e2ac;
      }
      auVar8 = auVar12._0_20_;
      ac = ac & 0xfffffff8;
      if ((param_2 & 0x10) == 0) {
        auVar15._12_52_ = auVar12._12_52_;
        auVar15._0_8_ = auVar12._0_8_;
        auVar15._8_4_ = 0x2e120;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
        auVar14._8_56_ = auVar15._8_56_;
        auVar14._4_4_ = (auVar12._4_4_ + 0x3fU & 0xffffffc0) + 0x40;
        auVar14._0_4_ = fp;
        uVar19 = act_kick_chk();
        auVar8 = auVar14._0_20_;
        ac = ac & 0xfffffff8 | (uint)((uVar19 & 0xff) != 0) << 2 | (uint)((uVar19 & 0xff) == 0) << 1
        ;
        if (((byte)(ac >> 1) & 1) == 1) goto LAB_0002e2ac;
      }
      uVar19 = ac;
      auVar9._20_4_ = param_1 & 0xfff;
      auVar9._0_20_ = auVar8;
      if ((param_1 & 0xf000) == 0xf000) {
        bVar4 = pwrk_rival[0x2d];
        uVar18 = ac & 0xfffffff8 | (uint)(3 < bVar4) << 2;
        ac = uVar18 | (uint)(bVar4 == 3) << 1 | (uint)(bVar4 < 3);
        if ((((byte)ac & 1 | (byte)(uVar18 >> 2) & 1) == 1) ||
           (uVar19 = uVar19 & 0xfffffff8 | (uint)(pwrk_rival[0x4d] != -1) << 2,
           ac = uVar19 | (uint)(pwrk_rival[0x4d] == -1) << 1, ((byte)(uVar19 >> 2) & 1) == 1))
        goto LAB_0002e2b0;
      }
      else {
        iVar21 = 0;
        pcVar17 = (char *)(param_1 & 0xf000);
        if (pcVar17 == s_dwnasta__2X__2X_00005000) {
          uVar19 = (uint)BYTE_005555e2;
LAB_0002e29c:
          iVar21 = uVar19 << 6;
        }
        else if (s_dwnasta__2X__2X_00005000 < pcVar17) {
          if (pcVar17 == &DAT_0000a000) {
            iVar21 = (uint)BYTE_005555e2 * -0x10;
          }
          else if (&DAT_0000a000 < pcVar17) {
            if (pcVar17 == &DAT_0000b000) {
              iVar21 = (uint)BYTE_005555e2 * -0x20;
            }
            else if (pcVar17 == (char *)0xc000) {
              uVar19 = -(uint)BYTE_005555e2;
              goto LAB_0002e29c;
            }
          }
          else if (pcVar17 == (char *)0x8000) {
            iVar21 = (uint)BYTE_005555e2 * -4;
          }
          else if (pcVar17 == s_SCROLL_GROUP_ERROR____00009000) {
            iVar21 = (uint)BYTE_005555e2 * -8;
          }
        }
        else if (pcVar17 == "\f \r<\x14 \x05:") {
          iVar21 = (uint)BYTE_005555e2 << 3;
        }
        else if (pcVar17 < " \r<\x14 \x05:") {
          if (pcVar17 == (char *)0x1000) {
            iVar21 = (uint)BYTE_005555e2 << 2;
          }
        }
        else if (pcVar17 == (char *)0x3000) {
          iVar21 = (uint)BYTE_005555e2 << 4;
        }
        else if (pcVar17 == (char *)0x4000) {
          iVar21 = (uint)BYTE_005555e2 << 5;
        }
        uVar18 = auVar9._20_4_ + iVar21;
        auVar9._20_4_ = uVar18;
        uVar19 = ac & 0xfffffff8;
        ac = uVar19 | 2;
        if ((uVar18 & 0x8000) != 0) goto LAB_0002e2b0;
        ac = uVar19;
      }
    }
  }
LAB_0002e2ac:
  auVar9._20_4_ = 0;
  auVar9._0_20_ = auVar8;
LAB_0002e2b0:
  fp = (undefined1 *)auVar9._0_4_;
  return auVar9._20_4_ & 0xffff;
}

