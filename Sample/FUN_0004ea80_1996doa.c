
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Motion_DecodePendingCommand_candidate(void)

{
  uint uVar1;
  byte bVar2;
  short *psVar3;
  uint16_t uVar4;
  uint uVar5;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined4 uVar10;
  undefined4 uVar13;
  undefined4 in_g3;
  undefined4 uVar14;
  short *in_g5;
  int iVar15;
  undefined4 in_g7;
  undefined4 in_g8;
  undefined4 in_g9;
  undefined4 in_g10;
  undefined4 in_g11;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar8 [64];
  
  auVar6._4_4_ = auStackX_0;
  auVar6._0_4_ = unaff_pfp;
  auVar6._8_4_ = unaff_retaddr;
  auVar6._12_52_ = in_register_0000000c;
  uVar13 = 0xffffffff;
  g_motion_next_command_frame_P1_candidate = 0xffff;
  g_motion_command_decode_pending_candidate = (uint8_t)g14;
LAB_0004ea94:
  uVar5 = ac;
  psVar3 = g_motion_command_stream_cursor_candidate;
  uVar10 = auVar6._0_4_;
  iVar15 = (int)*g_motion_command_stream_cursor_candidate;
  uVar14 = 0x22;
  uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x22) << 1;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    if (iVar15 < 0x23) {
      uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x10) << 1;
      if (((byte)(uVar1 >> 1) & 1) == 1) {
LAB_0004ef48:
        ac = uVar1;
        g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 1;
        goto LAB_0004ea94;
      }
      uVar4 = (uint16_t)g14;
      if (iVar15 < 0x11) {
        uVar1 = ac & 0xfffffff8 | (uint)(7 < iVar15) << 2 | (uint)(iVar15 == 7) << 1;
        ac = uVar1 | iVar15 < 7;
        if (((byte)(uVar1 >> 1) & 1) == 1) {
          g_motion_frame_counter_P1_candidate = (uint16_t)g14;
          fp = uVar10;
          return;
        }
        if (7 < iVar15) {
          uVar1 = uVar5 & 0xfffffff8 | (uint)(iVar15 == 0xb) << 1;
          if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef48;
          if (0xb < iVar15) {
            uVar1 = uVar5 & 0xfffffff8 | (uint)(iVar15 == 0xd) << 1;
            if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef58;
            ac = uVar5 & 0xfffffff8 | (uint)(iVar15 < 0xd);
            uVar1 = ac;
            if (((byte)ac & 1) != 1) {
              uVar1 = uVar5 & 0xfffffff8 | (uint)(iVar15 == 0xe) << 1;
              if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef88;
              uVar1 = uVar5 & 0xfffffff8 | (uint)(0xf < iVar15) << 2 | (uint)(iVar15 == 0xf) << 1;
              ac = uVar1 | iVar15 < 0xf;
              if (((byte)(uVar1 >> 1) & 1) == 1) {
                g_motion_frame_counter_P1_candidate = (uint16_t)g14;
                g_motion_command_stream_cursor_candidate =
                     g_motion_command_stream_cursor_candidate + 1;
                fp = uVar10;
                return;
              }
              goto LAB_0004ef9c;
            }
            goto LAB_0004ef68;
          }
          uVar1 = uVar5 & 0xfffffff8 | (uint)(iVar15 == 9) << 1;
          if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef48;
          uVar1 = uVar5 & 0xfffffff8;
          if (9 < iVar15) goto LAB_0004ef68;
          in_g5 = g_motion_command_stream_cursor_candidate + 2;
          DAT_0056ac34 = g_motion_command_stream_cursor_candidate[1];
          ac = uVar5 & 0xfffffff8;
          g_motion_command_stream_cursor_candidate = in_g5;
          goto LAB_0004ea94;
        }
        ac = uVar5 & 0xfffffff8 | (uint)(iVar15 == 2) << 1;
        if (((byte)(ac >> 1) & 1) == 1) {
          in_g7 = 1076101120;
          DAT_0056add0 = in_g5;
          g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 2;
          goto LAB_0004ea94;
        }
        if (iVar15 < 3) {
          ac = uVar5 & 0xfffffff8 | (uint)(iVar15 == 0) << 1;
          if (((byte)(ac >> 1) & 1) == 1) {
            DAT_0056ac4c = g_motion_command_stream_cursor_candidate[1];
            in_g5 = (short *)(int)DAT_0056ac4c;
            DAT_0056ac94 = g_motion_command_stream_cursor_candidate[2];
            g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 3;
          }
          else {
            ac = uVar5 & 0xfffffff8 | (uint)(0 < iVar15) << 2 | (uint)(iVar15 == 0) << 1 |
                 (uint)(iVar15 < 0);
            if (0 < iVar15) {
              g_motion_command_stream_cursor_candidate =
                   g_motion_command_stream_cursor_candidate + 2;
              g_motion_next_command_frame_P1_candidate = psVar3[1];
              fp = uVar10;
              return;
            }
            uVar13 = 0xffffffff;
            uVar1 = uVar5 & 0xfffffff8 | (uint)(iVar15 < -1) << 2 | (uint)(iVar15 == -1) << 1;
            ac = uVar1 | -1 < iVar15;
            if (((byte)(uVar1 >> 1) & 1) == 1) {
              fp = uVar10;
              return;
            }
LAB_0004ef9c:
            uVar10 = 0x14;
            uVar1 = auVar6._4_4_ + 0x3f;
            auVar8._12_52_ = auVar6._12_52_;
            auVar8._0_8_ = auVar6._0_8_;
            auVar8._8_4_ = 0x4efa8;
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
            auVar7._8_56_ = auVar8._8_56_;
            auVar7._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
            Debug_SetTextPosition(0x14,0x14);
            fp = (uVar1 & 0xffffffc0) + 0x40;
            auVar9._12_52_ = auVar7._12_52_;
            auVar9._0_8_ = auVar7._0_8_;
            auVar9._8_4_ = 0x4efb4;
            *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar9;
            auVar6._8_56_ = auVar9._8_56_;
            auVar6._0_8_ = CONCAT44((uVar1 & 0xffffffc0) + 0x80,uVar1) & 0xffffffffffffffc0;
            FUN_0008e740(s_INIT_COMMAND_ERROR___0004ea60,uVar10,uVar13,in_g3,uVar14,in_g5,iVar15,
                         in_g7,in_g8,in_g9,in_g10,in_g11);
          }
          goto LAB_0004ea94;
        }
        ac = uVar5 & 0xfffffff8 | (uint)(iVar15 == 4) << 1;
        if (((byte)(ac >> 1) & 1) == 1) {
          in_g5 = g_motion_command_stream_cursor_candidate + 1;
          DAT_00589f58 = (short *)((int)DAT_00589f58 + 1);
          uVar13 = 4;
          g_motion_command_stream_cursor_candidate = in_g5;
          (&DAT_00589e10)[(int)DAT_00589f58] = 4;
          goto LAB_0004ea94;
        }
        ac = uVar5 & 0xfffffff8 | (uint)(iVar15 < 4);
        uVar1 = ac;
        if (((byte)ac & 1) != 1) {
          ac = uVar5 & 0xfffffff8 | (uint)(iVar15 == 5) << 1;
          if (((byte)(ac >> 1) & 1) != 1) {
            uVar1 = uVar5 & 0xfffffff8 | (uint)(6 < iVar15) << 2 | (uint)(iVar15 == 6) << 1;
            ac = uVar1 | iVar15 < 6;
            bVar2 = (byte)(uVar1 >> 1);
            goto joined_r0x0004eae4;
          }
          g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 1;
          in_g5 = (short *)((int)DAT_00589f58 + 1);
          uVar13 = 5;
          DAT_00589f58 = in_g5;
          (&DAT_00589e10)[(int)in_g5] = 5;
          goto LAB_0004ea94;
        }
LAB_0004ef68:
        ac = uVar1;
        g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 2;
        goto LAB_0004ea94;
      }
      uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x19) << 1;
      if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef48;
      if (iVar15 < 0x1a) {
        uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x14) << 1;
        if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef58;
        if (iVar15 < 0x15) {
          uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x12) << 1;
          if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef58;
          uVar1 = ac & 0xfffffff8;
          if (iVar15 < 0x13) goto LAB_0004ef68;
        }
        else {
          uVar1 = ac & 0xfffffff8 | (uint)(0x16 < iVar15) << 2 | (uint)(iVar15 == 0x16) << 1;
          ac = uVar1 | iVar15 < 0x16;
          if (((byte)(uVar1 >> 1) & 1) == 1) {
            fp = uVar10;
            g_motion_frame_counter_P1_candidate = uVar4;
            g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 1;
            return;
          }
          ac = uVar5 & 0xfffffff8 | (uint)(iVar15 < 0x16);
          if (((byte)ac & 1) == 1) {
            DAT_0056ac14 = g_motion_command_stream_cursor_candidate[1] + -1;
            in_g5 = g_motion_command_stream_cursor_candidate;
            g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 2;
            goto LAB_0004ea94;
          }
          ac = uVar5 & 0xfffffff8 | (uint)(iVar15 == 0x17) << 1;
          if (((byte)(ac >> 1) & 1) == 1) {
            DAT_0056ac20 = (int)g_motion_command_stream_cursor_candidate[1];
            in_g7 = 1079574528;
            uVar13 = 1;
            DAT_0056ac18 = 1;
            DAT_0056ac28 = DAT_0056ac20;
            g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 2;
            goto LAB_0004ea94;
          }
          uVar1 = uVar5 & 0xfffffff8 | (uint)(0x18 < iVar15) << 2 | (uint)(iVar15 == 0x18) << 1;
          ac = uVar1 | iVar15 < 0x18;
          if (((byte)(uVar1 >> 1) & 1) != 1) goto LAB_0004ef9c;
          DAT_0056ac20 = g14;
          DAT_0056ac18 = (uint8_t)g14;
          uVar1 = ac;
        }
      }
      else {
        uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x1d) << 1;
        if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef48;
        if (iVar15 < 0x1e) {
          uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x1b) << 1;
          if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef48;
          goto LAB_0004ef88;
        }
        uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x1f) << 1;
        if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef58;
        ac = ac & 0xfffffff8 | (uint)(iVar15 < 0x1f);
        uVar1 = ac;
        if (((byte)ac & 1) != 1) {
          uVar13 = 0x20;
          uVar1 = uVar5 & 0xfffffff8 | (uint)(iVar15 == 0x20) << 1;
          if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef68;
          uVar13 = 0x21;
          uVar1 = uVar5 & 0xfffffff8 | (uint)(iVar15 < 0x21) << 2 | (uint)(iVar15 == 0x21) << 1;
          ac = uVar1 | 0x21 < iVar15;
          if (((byte)(uVar1 >> 1) & 1) != 1) goto LAB_0004ef9c;
          g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 2;
          in_g5 = (short *)((int)DAT_00589f58 + 1);
          DAT_00589f58 = in_g5;
          (&DAT_00589e10)[(int)in_g5] = iVar15;
          goto LAB_0004ea94;
        }
      }
LAB_0004ef88:
      ac = uVar1;
      g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 1;
      goto LAB_0004ea94;
    }
    uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x34) << 1;
    if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef58;
    if (iVar15 < 0x35) {
      uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x2b) << 1;
      if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef48;
      if (iVar15 < 0x2c) {
        uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x26) << 1;
        if (((byte)(uVar1 >> 1) & 1) != 1) {
          if (iVar15 < 0x27) {
            uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x24) << 1;
            if (((byte)(uVar1 >> 1) & 1) != 1) {
              ac = ac & 0xfffffff8 | (uint)(0x24 < iVar15);
              uVar1 = ac;
              if (((byte)ac & 1) != 1) goto LAB_0004ef88;
              goto LAB_0004ef68;
            }
          }
          else {
            uVar14 = 0x28;
            uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x28) << 1;
            if (((byte)(uVar1 >> 1) & 1) != 1) {
              uVar1 = ac & 0xfffffff8;
              if (0x27 < iVar15) {
                uVar13 = 0x29;
                uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x29) << 1;
                if (((byte)(uVar1 >> 1) & 1) != 1) {
                  uVar13 = 0x2a;
                  uVar1 = ac & 0xfffffff8 | (uint)(iVar15 < 0x2a) << 2 | (uint)(iVar15 == 0x2a) << 1
                  ;
                  ac = uVar1 | 0x2a < iVar15;
                  bVar2 = (byte)(uVar1 >> 1);
joined_r0x0004eae4:
                  uVar1 = ac;
                  if ((bVar2 & 1) != 1) goto LAB_0004ef9c;
                }
              }
              goto LAB_0004ef68;
            }
          }
        }
      }
      else {
        uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x2f) << 1;
        if (((byte)(uVar1 >> 1) & 1) != 1) {
          if (iVar15 < 0x30) {
            uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x2d) << 1;
            if (((byte)(uVar1 >> 1) & 1) != 1) {
              ac = ac & 0xfffffff8 | (uint)(0x2d < iVar15);
              uVar1 = ac;
              if (((byte)ac & 1) != 1) goto LAB_0004ef88;
              g_motion_command_stream_cursor_candidate =
                   g_motion_command_stream_cursor_candidate + 3;
              goto LAB_0004ea94;
            }
          }
          else {
            uVar14 = 0x31;
            uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x31) << 1;
            if (((byte)(uVar1 >> 1) & 1) != 1) {
              uVar1 = ac & 0xfffffff8;
              if (0x30 < iVar15) {
                uVar13 = 0x32;
                uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x32) << 1;
                if (((byte)(uVar1 >> 1) & 1) != 1) {
                  uVar13 = 0x33;
                  uVar1 = ac & 0xfffffff8 | (uint)(iVar15 < 0x33) << 2 | (uint)(iVar15 == 0x33) << 1
                  ;
                  ac = uVar1 | 0x33 < iVar15;
                  bVar2 = (byte)(uVar1 >> 1);
joined_r0x0004ec7c:
                  uVar1 = ac;
                  if ((bVar2 & 1) != 1) goto LAB_0004ef9c;
                  goto LAB_0004ef88;
                }
              }
              goto LAB_0004ef68;
            }
          }
        }
      }
    }
    else {
      uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x3d) << 1;
      if (((byte)(uVar1 >> 1) & 1) != 1) {
        if (iVar15 < 0x3e) {
          uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x38) << 1;
          if (((byte)(uVar1 >> 1) & 1) != 1) {
            if (0x38 < iVar15) {
              uVar14 = 0x3a;
              uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x3a) << 1;
              if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_0004ef48;
              uVar1 = ac & 0xfffffff8;
              if (iVar15 < 0x3a) goto LAB_0004ef88;
              uVar13 = 0x3b;
              uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x3b) << 1;
              if (((byte)(uVar1 >> 1) & 1) != 1) {
                uVar13 = 0x3c;
                uVar1 = ac & 0xfffffff8 | (uint)(iVar15 < 0x3c) << 2 | (uint)(iVar15 == 0x3c) << 1;
                ac = uVar1 | 0x3c < iVar15;
                bVar2 = (byte)(uVar1 >> 1);
                goto joined_r0x0004eae4;
              }
              goto LAB_0004ef68;
            }
            uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x36) << 1;
            if (((byte)(uVar1 >> 1) & 1) == 1) {
              DAT_0056ac34 = g_motion_command_stream_cursor_candidate[1];
              ac = uVar1;
              g_motion_command_stream_cursor_candidate =
                   g_motion_command_stream_cursor_candidate + 2;
              goto LAB_0004ea94;
            }
            ac = ac & 0xfffffff8 | (uint)(0x36 < iVar15);
            uVar1 = ac;
            if (((byte)ac & 1) == 1) {
              g_motion_command_stream_cursor_candidate =
                   g_motion_command_stream_cursor_candidate + 2;
              in_g5 = (short *)((int)DAT_00589f58 + 1);
              uVar13 = 0x21;
              DAT_00589f58 = in_g5;
              (&DAT_00589e10)[(int)in_g5] = 0x21;
              goto LAB_0004ea94;
            }
            goto LAB_0004ef68;
          }
        }
        else {
          uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x41) << 1;
          if (((byte)(uVar1 >> 1) & 1) != 1) {
            if (iVar15 < 0x42) {
              uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x3f) << 1;
              if (((byte)(uVar1 >> 1) & 1) != 1) goto LAB_0004ef68;
            }
            else {
              uVar14 = 0x43;
              uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x43) << 1;
              if (((byte)(uVar1 >> 1) & 1) != 1) {
                uVar1 = ac & 0xfffffff8;
                if (0x42 < iVar15) {
                  uVar13 = 0x44;
                  uVar1 = ac & 0xfffffff8 | (uint)(iVar15 == 0x44) << 1;
                  if (((byte)(uVar1 >> 1) & 1) != 1) {
                    uVar13 = 0x7777;
                    uVar1 = ac & 0xfffffff8 | (uint)(iVar15 < 0x7777) << 2 |
                            (uint)(iVar15 == 0x7777) << 1;
                    ac = uVar1 | 0x7777 < iVar15;
                    bVar2 = (byte)(uVar1 >> 1);
                    goto joined_r0x0004ec7c;
                  }
                }
                goto LAB_0004ef68;
              }
            }
          }
        }
      }
    }
  }
LAB_0004ef58:
  ac = uVar1;
  g_motion_command_stream_cursor_candidate = g_motion_command_stream_cursor_candidate + 2;
  goto LAB_0004ea94;
}

