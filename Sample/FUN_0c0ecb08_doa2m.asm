                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined __stdcall FUN_0c0ecb08(ulonglong param_1)
                               assume r12 = 0x1
             undefined         r0:1           <RETURN>
             ulonglong         dr4:8          param_1
             undefined4        Stack[-0x4]:4  local_4                                 XREF[1]:     0c0ecb08(*)  
             undefined4        Stack[-0x8]:4  local_8                                 XREF[2]:     0c0ecb0a(*), 
                                                                                                   0c0ecc78(*)  
             undefined4        Stack[-0xc]:4  local_c                                 XREF[2]:     0c0ecb0c(*), 
                                                                                                   0c0ecc76(*)  
             undefined4        Stack[-0x10]:4 local_10                                XREF[2]:     0c0ecb0e(*), 
                                                                                                   0c0ecc74(*)  
             undefined4        Stack[-0x14]:4 local_14                                XREF[2]:     0c0ecb10(*), 
                                                                                                   0c0ecc72(*)  
             undefined4        Stack[-0x18]:4 local_18                                XREF[2]:     0c0ecb14(*), 
                                                                                                   0c0ecc70(*)  
             undefined4        Stack[-0x1c]:4 local_1c                                XREF[2]:     0c0ecb16(*), 
                                                                                                   0c0ecc6e(*)  
             undefined4        Stack[-0x20]:4 local_20                                XREF[2]:     0c0ecb18(*), 
                                                                                                   0c0ecc6c(*)  
                             FUN_0c0ecb08                                    XREF[2]:     0c0e5bba(c), 0c0e5c68(*)  
        0c0ecb08 e6 2f           mov.l      r14,@-r15=>local_4
             assume r12 = <UNKNOWN>
        0c0ecb0a d6 2f           mov.l      r13,@-r15=>local_8
        0c0ecb0c c6 2f           mov.l      r12,@-r15=>local_c
        0c0ecb0e b6 2f           mov.l      r11,@-r15=>local_10
        0c0ecb10 a6 2f           mov.l      r10,@-r15=>local_14
        0c0ecb12 2d dc           mov.l      PTR_DAT_0c0ecbc8,r12                               = 0c2cb1f5
        0c0ecb14 96 2f           mov.l      r9,@-r15=>local_18
        0c0ecb16 86 2f           mov.l      r8,@-r15=>local_1c
        0c0ecb18 22 4f           sts.l      PR,@-r15=>local_20
        0c0ecb1a c0 63           mov.b      @r12=>DAT_0c2cb1f5,r3
        0c0ecb1c 29 d9           mov.l      PTR_DAT_0c0ecbc4,r9                                = 0c2cb1f8
        0c0ecb1e 27 d7           mov.l      DAT_0c0ecbbc,r7                                    = 00FFFFFFh
        0c0ecb20 38 23           tst        r3,r3
        0c0ecb22 27 d6           mov.l      PTR_DAT_0c0ecbc0,r6                                = 0c2cb204
        0c0ecb24 09 8f           bf/s       LAB_0c0ecb3a
        0c0ecb26 01 eb           _mov       #0x1,r11
        0c0ecb28 92 61           mov.l      @r9=>DAT_0c2cb1f8,r1
        0c0ecb2a 18 41           shll8      r1
        0c0ecb2c 79 21           and        r7,r1
        0c0ecb2e 13 63           mov        r1,r3
        0c0ecb30 38 23           tst        r3,r3
        0c0ecb32 01 8f           bf/s       LAB_0c0ecb38
        0c0ecb34 12 29           _mov.l     r1,@r9=>DAT_0c2cb1f8
        0c0ecb36 b2 29           mov.l      r11,@r9=>DAT_0c2cb1f8
                             LAB_0c0ecb38                                    XREF[1]:     0c0ecb32(j)  
        0c0ecb38 b0 26           mov.b      r11,@r6=>DAT_0c2cb204
                             LAB_0c0ecb3a                                    XREF[1]:     0c0ecb24(j)  
        0c0ecb3a 26 dd           mov.l      PTR_DAT_0c0ecbd4,r13                               = 0c2cb1f6
        0c0ecb3c 23 d4           mov.l      PTR_DAT_0c0ecbcc,r4                                = 0c2cb205
        0c0ecb3e d0 63           mov.b      @r13=>DAT_0c2cb1f6,r3
        0c0ecb40 23 d8           mov.l      PTR_DAT_0c0ecbd0,r8                                = 0c2cb1fc
        0c0ecb42 38 23           tst        r3,r3
        0c0ecb44 08 8b           bf         LAB_0c0ecb58
        0c0ecb46 82 61           mov.l      @r8=>DAT_0c2cb1fc,r1
        0c0ecb48 18 41           shll8      r1
        0c0ecb4a 79 21           and        r7,r1
        0c0ecb4c 13 63           mov        r1,r3
        0c0ecb4e 38 23           tst        r3,r3
        0c0ecb50 01 8f           bf/s       LAB_0c0ecb56
        0c0ecb52 12 28           _mov.l     r1,@r8=>DAT_0c2cb1fc
        0c0ecb54 b2 28           mov.l      r11,@r8=>DAT_0c2cb1fc
                             LAB_0c0ecb56                                    XREF[1]:     0c0ecb50(j)  
        0c0ecb56 b0 24           mov.b      r11,@r4=>DAT_0c2cb205
                             LAB_0c0ecb58                                    XREF[1]:     0c0ecb44(j)  
        0c0ecb58 21 de           mov.l      PTR_DAT_0c0ecbe0,r14                               = 0c2cb1f7
        0c0ecb5a 1f d5           mov.l      PTR_DAT_0c0ecbd8,r5                                = 0c2cb206
        0c0ecb5c e0 63           mov.b      @r14=>DAT_0c2cb1f7,r3
        0c0ecb5e 1f da           mov.l      PTR_DAT_0c0ecbdc,r10                               = 0c2cb200
        0c0ecb60 38 23           tst        r3,r3
        0c0ecb62 08 8b           bf         LAB_0c0ecb76
        0c0ecb64 a2 61           mov.l      @r10=>DAT_0c2cb200,r1
        0c0ecb66 18 41           shll8      r1
        0c0ecb68 79 21           and        r7,r1
        0c0ecb6a 13 63           mov        r1,r3
        0c0ecb6c 38 23           tst        r3,r3
        0c0ecb6e 01 8f           bf/s       LAB_0c0ecb74
        0c0ecb70 12 2a           _mov.l     r1,@r10=>DAT_0c2cb200
        0c0ecb72 b2 2a           mov.l      r11,@r10=>DAT_0c2cb200
                             LAB_0c0ecb74                                    XREF[1]:     0c0ecb6e(j)  
        0c0ecb74 b0 25           mov.b      r11,@r5=>DAT_0c2cb206
                             LAB_0c0ecb76                                    XREF[1]:     0c0ecb62(j)  
        0c0ecb76 60 63           mov.b      @r6=>DAT_0c2cb204,r3
        0c0ecb78 18 97           mov.w      DAT_0c0ecbac,r7                                    = 0080h
        0c0ecb7a 38 23           tst        r3,r3
        0c0ecb7c 03 8b           bf         LAB_0c0ecb86
        0c0ecb7e c0 61           mov.b      @r12=>DAT_0c2cb1f5,r1
        0c0ecb80 ff 71           add        #-0x1,r1
        0c0ecb82 09 a0           bra        LAB_0c0ecb98
        0c0ecb84 10 2c           _mov.b     r1,@r12=>DAT_0c2cb1f5
                             LAB_0c0ecb86                                    XREF[1]:     0c0ecb7c(j)  
        0c0ecb86 c0 62           mov.b      @r12=>DAT_0c2cb1f5,r2
        0c0ecb88 01 72           add        #0x1,r2
        0c0ecb8a 20 2c           mov.b      r2,@r12=>DAT_0c2cb1f5
        0c0ecb8c c0 63           mov.b      @r12=>DAT_0c2cb1f5,r3
        0c0ecb8e 3c 63           extu.b     r3,r3
        0c0ecb90 73 33           cmp/ge     r7,r3
        0c0ecb92 01 8b           bf         LAB_0c0ecb98
        0c0ecb94 00 e3           mov        #0x0,r3
        0c0ecb96 30 26           mov.b      r3,@r6=>DAT_0c2cb204
                             LAB_0c0ecb98                                    XREF[2]:     0c0ecb82(j), 0c0ecb92(j)  
        0c0ecb98 40 62           mov.b      @r4=>DAT_0c2cb205,r2
        0c0ecb9a 28 22           tst        r2,r2
        0c0ecb9c 22 8b           bf         LAB_0c0ecbe4
        0c0ecb9e d0 61           mov.b      @r13=>DAT_0c2cb1f6,r1
        0c0ecba0 ff 71           add        #-0x1,r1
        0c0ecba2 28 a0           bra        LAB_0c0ecbf6
        0c0ecba4 10 2d           _mov.b     r1,@r13=>DAT_0c2cb1f6
                             DAT_0c0ecba6                                    XREF[2]:     FUN_0c0eca32:0c0ecac4(R), 
                                                                                          FUN_0c0eca32:0c0ecada(R)  
        0c0ecba6 b8 0a           undefined2 0AB8h
                             DAT_0c0ecba8                                    XREF[2]:     FUN_0c0eca32:0c0ecacc(R), 
                                                                                          FUN_0c0eca32:0c0ecae2(R)  
        0c0ecba8 80 03           undefined2 0380h
                             DAT_0c0ecbaa                                    XREF[1]:     FUN_0c0eca32:0c0ecaee(R)  
        0c0ecbaa d4 0a           undefined2 0AD4h
                             DAT_0c0ecbac                                    XREF[1]:     FUN_0c0ecb08:0c0ecb78(R)  
        0c0ecbac 80 00           undefined2 0080h
        0c0ecbae 00              ??         00h
        0c0ecbaf 00              ??         00h
                             PTR_FUN_0c0ecbb0                                XREF[1]:     FUN_0c0eca32:0c0ecaba(R)  
        0c0ecbb0 22 ff 0d 0c     addr       FUN_0c0dff22
                             PTR_FUN_0c0ecbb4                                XREF[1]:     FUN_0c0eca32:0c0ecab8(R)  
        0c0ecbb4 b0 ff 0d 0c     addr       FUN_0c0dffb0
                             PTR_s_GAME_OPTION_0c0ecbb8                      XREF[2]:     FUN_0c0eca32:0c0ecac6(R), 
                                                                                          FUN_0c0eca32:0c0ecadc(R)  
        0c0ecbb8 88 2b 21 0c     addr       s_GAME_OPTION_0c212b88                             = "GAME OPTION\n"
                             DAT_0c0ecbbc                                    XREF[1]:     FUN_0c0ecb08:0c0ecb1e(R)  
        0c0ecbbc ff ff ff 00     undefined4 00FFFFFFh
                             PTR_DAT_0c0ecbc0                                XREF[1]:     FUN_0c0ecb08:0c0ecb22(R)  
        0c0ecbc0 04 b2 2c 0c     addr       DAT_0c2cb204
                             PTR_DAT_0c0ecbc4                                XREF[1]:     FUN_0c0ecb08:0c0ecb1c(R)  
        0c0ecbc4 f8 b1 2c 0c     addr       DAT_0c2cb1f8
                             PTR_DAT_0c0ecbc8                                XREF[1]:     FUN_0c0ecb08:0c0ecb12(R)  
        0c0ecbc8 f5 b1 2c 0c     addr       DAT_0c2cb1f5
                             PTR_DAT_0c0ecbcc                                XREF[1]:     FUN_0c0ecb08:0c0ecb3c(R)  
        0c0ecbcc 05 b2 2c 0c     addr       DAT_0c2cb205
                             PTR_DAT_0c0ecbd0                                XREF[1]:     FUN_0c0ecb08:0c0ecb40(R)  
        0c0ecbd0 fc b1 2c 0c     addr       DAT_0c2cb1fc
                             PTR_DAT_0c0ecbd4                                XREF[1]:     FUN_0c0ecb08:0c0ecb3a(R)  
        0c0ecbd4 f6 b1 2c 0c     addr       DAT_0c2cb1f6
                             PTR_DAT_0c0ecbd8                                XREF[1]:     FUN_0c0ecb08:0c0ecb5a(R)  
        0c0ecbd8 06 b2 2c 0c     addr       DAT_0c2cb206
                             PTR_DAT_0c0ecbdc                                XREF[1]:     FUN_0c0ecb08:0c0ecb5e(R)  
        0c0ecbdc 00 b2 2c 0c     addr       DAT_0c2cb200
                             PTR_DAT_0c0ecbe0                                XREF[1]:     FUN_0c0ecb08:0c0ecb58(R)  
        0c0ecbe0 f7 b1 2c 0c     addr       DAT_0c2cb1f7
                             LAB_0c0ecbe4                                    XREF[1]:     0c0ecb9c(j)  
        0c0ecbe4 d0 62           mov.b      @r13=>DAT_0c2cb1f6,r2
        0c0ecbe6 01 72           add        #0x1,r2
        0c0ecbe8 20 2d           mov.b      r2,@r13=>DAT_0c2cb1f6
        0c0ecbea d0 63           mov.b      @r13=>DAT_0c2cb1f6,r3
        0c0ecbec 3c 63           extu.b     r3,r3
        0c0ecbee 73 33           cmp/ge     r7,r3
        0c0ecbf0 01 8b           bf         LAB_0c0ecbf6
        0c0ecbf2 00 e3           mov        #0x0,r3
        0c0ecbf4 30 24           mov.b      r3,@r4=>DAT_0c2cb205
                             LAB_0c0ecbf6                                    XREF[2]:     0c0ecba2(j), 0c0ecbf0(j)  
        0c0ecbf6 50 62           mov.b      @r5=>DAT_0c2cb206,r2
        0c0ecbf8 28 22           tst        r2,r2
        0c0ecbfa 03 8b           bf         LAB_0c0ecc04
        0c0ecbfc e0 61           mov.b      @r14=>DAT_0c2cb1f7,r1
        0c0ecbfe ff 71           add        #-0x1,r1
        0c0ecc00 09 a0           bra        LAB_0c0ecc16
        0c0ecc02 10 2e           _mov.b     r1,@r14=>DAT_0c2cb1f7
                             LAB_0c0ecc04                                    XREF[1]:     0c0ecbfa(j)  
        0c0ecc04 e0 62           mov.b      @r14=>DAT_0c2cb1f7,r2
        0c0ecc06 01 72           add        #0x1,r2
        0c0ecc08 20 2e           mov.b      r2,@r14=>DAT_0c2cb1f7
        0c0ecc0a e0 63           mov.b      @r14=>DAT_0c2cb1f7,r3
        0c0ecc0c 3c 63           extu.b     r3,r3
        0c0ecc0e 73 33           cmp/ge     r7,r3
        0c0ecc10 01 8b           bf         LAB_0c0ecc16
        0c0ecc12 00 e3           mov        #0x0,r3
        0c0ecc14 30 25           mov.b      r3,@r5=>DAT_0c2cb206
                             LAB_0c0ecc16                                    XREF[2]:     0c0ecc00(j), 0c0ecc10(j)  
        0c0ecc16 e0 66           mov.b      @r14=>DAT_0c2cb1f7,r6
        0c0ecc18 a2 63           mov.l      @r10=>DAT_0c2cb200,r3
        0c0ecc1a 6c 66           extu.b     r6,r6
        0c0ecc1c d0 65           mov.b      @r13=>DAT_0c2cb1f6,r5
        0c0ecc1e 37 06           mul.l      r3,r6
        0c0ecc20 82 63           mov.l      @r8=>DAT_0c2cb1fc,r3
        0c0ecc22 5c 65           extu.b     r5,r5
        0c0ecc24 c0 64           mov.b      @r12=>DAT_0c2cb1f5,r4
        0c0ecc26 5a d2           mov.l      ->FUN_0c0f0f50,r2                                  = 0c0f0f50
        0c0ecc28 1a 06           sts        MACL,r6
        0c0ecc2a 37 05           mul.l      r3,r5
        0c0ecc2c 92 63           mov.l      @r9=>DAT_0c2cb1f8,r3
        0c0ecc2e 4c 64           extu.b     r4,r4
        0c0ecc30 1a 05           sts        MACL,r5
        0c0ecc32 37 04           mul.l      r3,r4
        0c0ecc34 0b 42           jsr        @r2=>FUN_0c0f0f50                                  undefined FUN_0c0f0f50(undefined4 param_1)
        0c0ecc36 1a 04           _sts       MACL,r4
        0c0ecc38 57 d5           mov.l      PTR_DAT_0c0ecd98,r5                                = 0c2cb1f4
        0c0ecc3a 56 c7           mova       FLOAT_0c0ecd94,r0                                  = 0.0049999999
        0c0ecc3c 57 d4           mov.l      PTR_DAT_0c0ecd9c,r4                                = 0c2cb1f0
        0c0ecc3e 50 63           mov.b      @r5=>DAT_0c2cb1f4,r3
        0c0ecc40 38 23           tst        r3,r3
        0c0ecc42 09 8f           bf/s       LAB_0c0ecc58
        0c0ecc44 08 f4           _fmov.s    @r0=>FLOAT_0c0ecd94,param_1                        = 0.0049999999
        0c0ecc46 48 f3           fmov.s     @r4=>DAT_0c2cb1f0,fr3
        0c0ecc48 41 f3           fsub       param_1,fr3
        0c0ecc4a 3c f2           fmov       fr3,fr2
        0c0ecc4c 3a f4           fmov.s     fr3,@r4=>DAT_0c2cb1f0
        0c0ecc4e 8d f3           fldi0      fr3
        0c0ecc50 35 f2           fcmp/gt    fr3,fr2
        0c0ecc52 0b 89           bt         LAB_0c0ecc6c
        0c0ecc54 0a a0           bra        LAB_0c0ecc6c
        0c0ecc56 b0 25           _mov.b     r11,@r5=>DAT_0c2cb1f4
                             LAB_0c0ecc58                                    XREF[1]:     0c0ecc42(j)  
        0c0ecc58 48 f3           fmov.s     @r4=>DAT_0c2cb1f0,fr3
        0c0ecc5a 51 c7           mova       FLOAT_0c0ecda0,r0                                  = 0.39999998
        0c0ecc5c 40 f3           fadd       param_1,fr3
        0c0ecc5e 3c f2           fmov       fr3,fr2
        0c0ecc60 3a f4           fmov.s     fr3,@r4=>DAT_0c2cb1f0
        0c0ecc62 08 f3           fmov.s     @r0=>FLOAT_0c0ecda0,fr3                            = 0.39999998
        0c0ecc64 25 f3           fcmp/gt    fr2,fr3
        0c0ecc66 01 89           bt         LAB_0c0ecc6c
        0c0ecc68 00 e2           mov        #0x0,r2
        0c0ecc6a 20 25           mov.b      r2,@r5=>DAT_0c2cb1f4
                             LAB_0c0ecc6c                                    XREF[3]:     0c0ecc52(j), 0c0ecc54(j), 
                                                                                          0c0ecc66(j)  
        0c0ecc6c 26 4f           lds.l      @r15+,PR=>local_20
        0c0ecc6e f6 68           mov.l      @r15+=>local_1c,r8
        0c0ecc70 f6 69           mov.l      @r15+=>local_18,r9
        0c0ecc72 f6 6a           mov.l      @r15+=>local_14,r10
        0c0ecc74 f6 6b           mov.l      @r15+=>local_10,r11
        0c0ecc76 f6 6c           mov.l      @r15+=>local_c,r12
        0c0ecc78 f6 6d           mov.l      @r15+=>local_8,r13
        0c0ecc7a 0b 00           rts
        0c0ecc7c f6 6e           _mov.l     @r15+,r14
                             LAB_0c0ecc7e                                    XREF[2]:     0c02e8c0(j), 0c02e8e0(*)  
        0c0ecc7e d6 2f           mov.l      r13,@-r15=>local_4
        0c0ecc80 c6 2f           mov.l      r12,@-r15=>local_8
        0c0ecc82 b6 2f           mov.l      r11,@-r15=>local_c
        0c0ecc84 a6 2f           mov.l      r10,@-r15=>local_10
        0c0ecc86 96 2f           mov.l      r9,@-r15=>local_14
        0c0ecc88 86 2f           mov.l      r8,@-r15=>local_18
        0c0ecc8a 22 4f           sts.l      PR,@-r15=>local_1c
        0c0ecc8c f0 7f           add        #-0x10,r15
        0c0ecc8e 01 eb           mov        #0x1,r11
        0c0ecc90 44 da           mov.l      ->Unlock_Flag_ArcadeModeUNUSED??,r10               = 0c2563f4
        0c0ecc92 00 e7           mov        #0x0,r7
        0c0ecc94 b3 6c           mov        r11,r12
        0c0ecc96 09 e8           mov        #0x9,r8
        0c0ecc98 73 69           mov        r7,r9
                             LAB_0c0ecc9a                                    XREF[1]:     0c0ecd6c(j)  
        0c0ecc9a c3 6d           mov        r12,r13
        0c0ecc9c f3 63           mov        r15,r3
        0c0ecc9e 08 4d           shll2      r13
        0c0ecca0 3c 3d           add        r3,r13
        0c0ecca2 b2 2d           mov.l      r11,@r13=>local_28
        0c0ecca4 73 60           mov        r7,r0
        0c0ecca6 09 00           nop
        0c0ecca8 c3 65           mov        r12,param_2
        0c0eccaa 08 45           shll2      param_2
        0c0eccac 00 45           shll       param_2
        0c0eccae 3e d1           mov.l      PTR_s_TOMONOBU_0c0ecda8,r1                         = 0c214eac
        0c0eccb0 c3 62           mov        r12,r2
        0c0eccb2 2c 35           add        r2,param_2
        0c0eccb4 00 e6           mov        #0x0,r6
        0c0eccb6 1c 35           add        r1,param_2
        0c0eccb8 4c 36           add        param_1,r6
                             LAB_0c0eccba                                    XREF[1]:     0c0eccfc(j)  
        0c0eccba 60 62           mov.b      @r6,r2
        0c0eccbc 50 63           mov.b      @param_2=>s_LOVE?_0c214eb5,r3                      = "LOVE?   "
                                                                                                = "?   "
                                                                                                = "MIRAI   "
        0c0eccbe 20 33           cmp/eq     r2,r3
        0c0eccc0 01 8d           bt/s       LAB_0c0eccc6
        0c0eccc2 01 70           _add       #0x1,r0
        0c0eccc4 72 2d           mov.l      r7,@r13=>local_28
                             LAB_0c0eccc6                                    XREF[1]:     0c0eccc0(j)  
        0c0eccc6 01 75           add        #0x1,param_2
        0c0eccc8 01 76           add        #0x1,r6
        0c0eccca 50 62           mov.b      @param_2=>s_OVE?_0c214eb5+1,r2                     = "OVE?   "
        0c0ecccc 60 63           mov.b      @r6,r3
        0c0eccce 30 32           cmp/eq     r3,r2
        0c0eccd0 01 8d           bt/s       LAB_0c0eccd6
        0c0eccd2 01 70           _add       #0x1,r0
        0c0eccd4 72 2d           mov.l      r7,@r13=>local_28
                             LAB_0c0eccd6                                    XREF[1]:     0c0eccd0(j)  
        0c0eccd6 01 75           add        #0x1,param_2
        0c0eccd8 01 76           add        #0x1,r6
        0c0eccda 50 63           mov.b      @param_2=>s_VE?_0c214eb5+2,r3                      = "VE?   "
        0c0eccdc 60 62           mov.b      @r6,r2
        0c0eccde 20 33           cmp/eq     r2,r3
        0c0ecce0 01 8d           bt/s       LAB_0c0ecce6
        0c0ecce2 01 70           _add       #0x1,r0
        0c0ecce4 72 2d           mov.l      r7,@r13=>local_28
                             LAB_0c0ecce6                                    XREF[1]:     0c0ecce0(j)  
        0c0ecce6 01 75           add        #0x1,param_2
        0c0ecce8 01 76           add        #0x1,r6
        0c0eccea 50 62           mov.b      @param_2=>s_E?_0c214eb5+3,r2                       = "E?   "
        0c0eccec 60 63           mov.b      @r6,r3
        0c0eccee 30 32           cmp/eq     r3,r2
        0c0eccf0 01 8d           bt/s       LAB_0c0eccf6
        0c0eccf2 01 70           _add       #0x1,r0
        0c0eccf4 72 2d           mov.l      r7,@r13=>local_28
                             LAB_0c0eccf6                                    XREF[1]:     0c0eccf0(j)  
        0c0eccf6 05 e3           mov        #KASUMI,r3
        0c0eccf8 33 30           cmp/ge     r3,r0
        0c0eccfa 01 76           add        #0x1,r6
        0c0eccfc dd 8f           bf/s       LAB_0c0eccba
        0c0eccfe 01 75           _add       #0x1,param_2
        0c0ecd00 83 30           cmp/ge     r8,r0
        0c0ecd02 09 89           bt         LAB_0c0ecd18
                             LAB_0c0ecd04                                    XREF[1]:     0c0ecd14(j)  
        0c0ecd04 60 63           mov.b      @r6,r3
        0c0ecd06 50 62           mov.b      @param_2=>s_?_0c214eb5+4,r2                        = "?   "
                                                                                                = "   "
        0c0ecd08 30 32           cmp/eq     r3,r2
        0c0ecd0a 01 8d           bt/s       LAB_0c0ecd10
        0c0ecd0c 01 70           _add       #0x1,r0
        0c0ecd0e 72 2d           mov.l      r7,@r13=>local_28
                             LAB_0c0ecd10                                    XREF[1]:     0c0ecd0a(j)  
        0c0ecd10 83 30           cmp/ge     r8,r0
        0c0ecd12 01 76           add        #0x1,r6
        0c0ecd14 f6 8f           bf/s       LAB_0c0ecd04
        0c0ecd16 01 75           _add       #0x1,param_2=>s__0c214eb5+5                        = "   "
                             LAB_0c0ecd18                                    XREF[1]:     0c0ecd02(j)  
        0c0ecd18 c3 60           mov        r12,r0
        0c0ecd1a 09 00           nop
        0c0ecd1c f3 63           mov        r15,r3
        0c0ecd1e 08 40           shll2      r0
        0c0ecd20 3e 00           mov.l      @(r0,r3),r0
        0c0ecd22 01 88           cmp/eq     #0x1,r0
        0c0ecd24 1f 8b           bf         LAB_0c0ecd66
        0c0ecd26 c8 2c           tst        r12,r12
        0c0ecd28 c3 69           mov        r12,r9
        0c0ecd2a 07 8f           bf/s       LAB_0c0ecd3c
        0c0ecd2c 01 79           _add       #0x1,r9
        0c0ecd2e a3 84           mov.b      @(0x3,r10)=>Unlock_Flag_Time,r0                    = 1h
        0c0ecd30 08 20           tst        r0,r0
        0c0ecd32 13 8b           bf         LAB_0c0ecd5c
        0c0ecd34 b3 60           mov        r11,r0
        0c0ecd36 09 00           nop
        0c0ecd38 15 a0           bra        LAB_0c0ecd66
        0c0ecd3a a3 80           _mov.b     r0,@(0x3,r10)=>Unlock_Flag_Time                    = 1h
                             LAB_0c0ecd3c                                    XREF[1]:     0c0ecd2a(j)  
        0c0ecd3c c3 60           mov        r12,r0
        0c0ecd3e 09 00           nop
        0c0ecd40 01 88           cmp/eq     #0x1,r0
        0c0ecd42 06 8b           bf         LAB_0c0ecd52
        0c0ecd44 a2 84           mov.b      @(0x2,r10)=>Unlock_Flag_Tag,r0                     = 1h
        0c0ecd46 08 20           tst        r0,r0
        0c0ecd48 08 8b           bf         LAB_0c0ecd5c
        0c0ecd4a b3 60           mov        r11,r0
        0c0ecd4c 09 00           nop
        0c0ecd4e 0a a0           bra        LAB_0c0ecd66
        0c0ecd50 a2 80           _mov.b     r0,@(0x2,r10)=>Unlock_Flag_Tag                     = 1h
                             LAB_0c0ecd52                                    XREF[1]:     0c0ecd42(j)  
        0c0ecd52 02 88           cmp/eq     #0x2,r0
        0c0ecd54 07 8b           bf         LAB_0c0ecd66
        0c0ecd56 a4 84           mov.b      @(0x4,r10)=>Unlock_Flag_Survival,r0                = 1h
        0c0ecd58 08 20           tst        r0,r0
        0c0ecd5a 01 89           bt         LAB_0c0ecd60
                             LAB_0c0ecd5c                                    XREF[2]:     0c0ecd32(j), 0c0ecd48(j)  
        0c0ecd5c 03 a0           bra        LAB_0c0ecd66
        0c0ecd5e 73 69           _mov       r7,r9
                             LAB_0c0ecd60                                    XREF[1]:     0c0ecd5a(j)  
        0c0ecd60 b3 60           mov        r11,r0
        0c0ecd62 09 00           nop
        0c0ecd64 a4 80           mov.b      r0,@(0x4,r10)=>Unlock_Flag_Survival                = 1h
                             LAB_0c0ecd66                                    XREF[5]:     0c0ecd24(j), 0c0ecd38(j), 
                                                                                          0c0ecd4e(j), 0c0ecd54(j), 
                                                                                          0c0ecd5c(j)  
        0c0ecd66 03 e3           mov        #0x3,r3
        0c0ecd68 01 7c           add        #0x1,r12
        0c0ecd6a 33 3c           cmp/ge     r3,r12
        0c0ecd6c 95 8b           bf         LAB_0c0ecc9a
        0c0ecd6e 98 29           tst        r9,r9
        0c0ecd70 02 89           bt         LAB_0c0ecd78
        0c0ecd72 0e d2           mov.l      ->FUN_0c0219c0,r2                                  = 0c0219c0
        0c0ecd74 0b 42           jsr        @r2=>FUN_0c0219c0                                  undefined FUN_0c0219c0(void)
        0c0ecd76 09 00           _nop
                             LAB_0c0ecd78                                    XREF[1]:     0c0ecd70(j)  
        0c0ecd78 93 60           mov        r9,r0
        0c0ecd7a 09 00           nop
        0c0ecd7c 10 7f           add        #0x10,r15
        0c0ecd7e 26 4f           lds.l      @r15+,PR=>local_1c
        0c0ecd80 f6 68           mov.l      @r15+=>local_18,r8
        0c0ecd82 f6 69           mov.l      @r15+=>local_14,r9
        0c0ecd84 f6 6a           mov.l      @r15+=>local_10,r10
        0c0ecd86 f6 6b           mov.l      @r15+=>local_c,r11
        0c0ecd88 f6 6c           mov.l      @r15+=>local_8,r12
        0c0ecd8a 0b 00           rts
        0c0ecd8c f6 6d           _mov.l     @r15+,r13
        0c0ecd8e 00              ??         00h
        0c0ecd8f 00              ??         00h
                             PTR_FUN_0c0ecd90                                XREF[1]:     FUN_0c0ecb08:0c0ecc26(R)  
        0c0ecd90 50 0f 0f 0c     addr       FUN_0c0f0f50
                             FLOAT_0c0ecd94                                  XREF[2]:     FUN_0c0ecb08:0c0ecc3a(*), 
                                                                                          FUN_0c0ecb08:0c0ecc44(R)  
        0c0ecd94 0a d7 a3 3b     float      0.0049999999
                             PTR_DAT_0c0ecd98                                XREF[1]:     FUN_0c0ecb08:0c0ecc38(R)  
        0c0ecd98 f4 b1 2c 0c     addr       DAT_0c2cb1f4
                             PTR_DAT_0c0ecd9c                                XREF[1]:     FUN_0c0ecb08:0c0ecc3c(R)  
        0c0ecd9c f0 b1 2c 0c     addr       DAT_0c2cb1f0
                             FLOAT_0c0ecda0                                  XREF[2]:     FUN_0c0ecb08:0c0ecc5a(*), 
                                                                                          FUN_0c0ecb08:0c0ecc62(R)  
        0c0ecda0 cc cc cc 3e     float      0.39999998
                             PTR_Unlock_Flag_ArcadeModeUNUSED??_0c0ecda4     XREF[1]:     FUN_0c02e822:0c0ecc90(R)  
        0c0ecda4 f4 63 25 0c     addr       Unlock_Flag_ArcadeModeUNUSED??
                             PTR_s_TOMONOBU_0c0ecda8                         XREF[1]:     FUN_0c02e822:0c0eccae(R)  
        0c0ecda8 ac 4e 21 0c     addr       s_TOMONOBU_0c214eac                                = "TOMONOBU"
                             **************************************************************
                             * Address Constants                                          *
                             * s_TOMONOBU at 0x0c214eac ("TOMONOBU")                      *
                             * s_LOVE at 0x0c214eb5 ("LOVE?") - Tag Mode                  *
                             * s_MIRAI at 0x0c214ebe ("MIRAI") - Survival Mode            *
                             * s_KATUNORI at 0x0c214ec7 ("KATUNORI")                      *
                             * s_ALLCLEAR at 0x0c214ed0 ("ALLCLEAR")                      *
                             *                                                            *
                             * Assume r6 = Pointer to user-entered password               *
                             * r4 = Internal pointer used to reference stored passwords   *
                             * r14 = Mismatch counter (incremented on mismatch)           *
                             * r5 = Input character index                                 *
                             **************************************************************
                             PTR_FUN_0c0ecdac                                XREF[1]:     FUN_0c02e822:0c0ecd72(R)  
        0c0ecdac c0 19 02 0c     addr       FUN_0c0219c0
        0c0ecdb0 00 e6           mov        #0x0,r6
        0c0ecdb2 e6 2f           mov.l      r14,@-r15
        0c0ecdb4 4c 36           add        r4,r6
        0c0ecdb6 34 d2           mov.l      PTR_s_TOMONOBU_0c0ece88,r2                         = 0c214eac
        0c0ecdb8 01 75           add        #0x1,r5
        0c0ecdba c6 2f           mov.l      r12,@-r15
        0c0ecdbc 5c 64           extu.b     r5,r4
        0c0ecdbe 43 63           mov        r4,r3
        0c0ecdc0 08 44           shll2      r4
        0c0ecdc2 00 44           shll       r4
        0c0ecdc4 3c 34           add        r3,r4
        0c0ecdc6 00 e7           mov        #0x0,r7
        0c0ecdc8 05 e0           mov        #KASUMI,r0
        0c0ecdca 73 6e           mov        r7,r14
        0c0ecdcc 2c 34           add        r2,r4
        0c0ecdce 73 6c           mov        r7,r12
        0c0ecdd0 01 e1           mov        #0x1,r1
                             LAB_Password_Check_Start                        XREF[1]:     0c0ece12(j)  
        0c0ecdd2 60 62           mov.b      @r6,r2                                             Load entered character into r2
        0c0ecdd4 40 63           mov.b      @r4,r3=>s_TOMONOBU_0c214eac                        Load expected character ("TOMONOBU") into r3
        0c0ecdd6 20 33           cmp/eq     r2,r3                                              Compare entered char to expected char
        0c0ecdd8 01 8d           bt/s       LAB_Match_TOMONOBU_Char
        0c0ecdda 01 7e           _add       #0x1,r14                                           Increment mismatch counter if not matched
        0c0ecddc 73 61           mov        r7,r1                                              Reset success flag to zero on mismatch
                             LAB_Match_TOMONOBU_Char                         XREF[1]:     0c0ecdd8(j)  
        0c0ecdde 01 74           add        #0x1,r4                                            Increment pointer in expected string
        0c0ecde0 01 76           add        #0x1,r6                                            Increment pointer in user input string
        0c0ecde2 40 62           mov.b      @r4,r2=>s_OMONOBU_0c214eac+1                       = "OMONOBU"
        0c0ecde4 60 63           mov.b      @r6,r3
        0c0ecde6 30 32           cmp/eq     r3,r2
        0c0ecde8 01 8d           bt/s       LAB_Match_Second_Char
        0c0ecdea 01 7e           _add       #0x1,r14
        0c0ecdec 73 61           mov        r7,r1
                             LAB_Match_Second_Char                           XREF[1]:     0c0ecde8(j)  
        0c0ecdee 01 74           add        #0x1,r4
        0c0ecdf0 01 76           add        #0x1,r6
        0c0ecdf2 40 63           mov.b      @r4,r3=>s_MONOBU_0c214eac+2                        Third character check
        0c0ecdf4 60 62           mov.b      @r6,r2
        0c0ecdf6 20 33           cmp/eq     r2,r3
        0c0ecdf8 01 8d           bt/s       LAB_Match_Third_Char
        0c0ecdfa 01 7e           _add       #0x1,r14
        0c0ecdfc 73 61           mov        r7,r1
                             LAB_Match_Third_Char                            XREF[1]:     0c0ecdf8(j)  
        0c0ecdfe 01 74           add        #0x1,r4
        0c0ece00 01 76           add        #0x1,r6
        0c0ece02 40 62           mov.b      @r4,r2=>s_ONOBU_0c214eac+3                         Fourth character check
        0c0ece04 60 63           mov.b      @r6,r3
        0c0ece06 30 32           cmp/eq     r3,r2
        0c0ece08 01 8d           bt/s       LAB_Match_Fourth_Char
        0c0ece0a 01 7e           _add       #0x1,r14
        0c0ece0c 73 61           mov        r7,r1
                             LAB_Match_Fourth_Char                           XREF[1]:     0c0ece08(j)  
        0c0ece0e 03 3e           cmp/ge     r0,r14
        0c0ece10 01 76           add        #0x1,r6
        0c0ece12 de 8f           bf/s       LAB_Password_Check_Start
        0c0ece14 01 74           _add       #0x1,r4
        0c0ece16 09 e0           mov        #0x9,r0                                            Max mismatch allowed is likely small (0-8 range)
        0c0ece18 03 3e           cmp/ge     r0,r14                                             Did we exceed allowed mismatches?
        0c0ece1a 09 89           bt         LAB_Password_Check_Complete
                             **************************************************************
                             * Continue checking remaining characters similarly...        *
                             * (for brevity, let's jump ahead to the result-checking l... *
                             **************************************************************
                             LAB_0c0ece1c                                    XREF[1]:     0c0ece2c(j)  
        0c0ece1c 60 62           mov.b      @r6,r2
        0c0ece1e 40 63           mov.b      @r4,r3=>s_NOBU_0c214eac+4                          = "NOBU"
                                                                                                = "OBU"
        0c0ece20 20 33           cmp/eq     r2,r3
        0c0ece22 01 8d           bt/s       LAB_0c0ece28
        0c0ece24 01 7e           _add       #0x1,r14
        0c0ece26 73 61           mov        r7,r1
                             LAB_0c0ece28                                    XREF[1]:     0c0ece22(j)  
        0c0ece28 03 3e           cmp/ge     r0,r14
        0c0ece2a 01 76           add        #0x1,r6
        0c0ece2c f6 8f           bf/s       LAB_0c0ece1c
        0c0ece2e 01 74           _add       #0x1,r4
                             LAB_Password_Check_Complete                     XREF[1]:     0c0ece1a(j)  
        0c0ece30 13 60           mov        r1,r0
        0c0ece32 09 00           nop
        0c0ece34 01 88           cmp/eq     #0x1,r0
        0c0ece36 22 8b           bf         LAB_Password_Check_Failed
                             Password matched successfully:
        0c0ece38 5c 6e           extu.b     r5,r14                                             Store result indicator
        0c0ece3a 14 d4           mov.l      ->Unlock_Flag_ArcadeModeUNUSED??,r4                PTR to unlock flags (e.g., 0c2563f4)
        0c0ece3c e3 6c           mov        r14,r12
        0c0ece3e e8 2e           tst        r14,r14
        0c0ece40 01 7c           add        #0x1,r12
        0c0ece42 07 8f           bf/s       LAB_SetUnlockFlag_Alt
        0c0ece44 01 e5           _mov       #0x1,r5
                             LAB_SetUnlockFlag
        0c0ece46 43 84           mov.b      @(0x3,r4)=>Unlock_Flag_Time,r0                     Check existing unlock state
        0c0ece48 08 20           tst        r0,r0
        0c0ece4a 13 8b           bf         LAB_UnlockFlagExit
        0c0ece4c 53 60           mov        r5,r0
        0c0ece4e 09 00           nop
        0c0ece50 15 a0           bra        LAB_Password_Check_Failed
        0c0ece52 43 80           _mov.b     r0,@(0x3,r4)=>Unlock_Flag_Time                     = 1h
                             LAB_SetUnlockFlag_Alt                           XREF[1]:     0c0ece42(j)  
        0c0ece54 e3 60           mov        r14,r0
        0c0ece56 09 00           nop
        0c0ece58 01 88           cmp/eq     #0x1,r0
        0c0ece5a 06 8b           bf         LAB_CheckMismatchEqualsTwo
        0c0ece5c 42 84           mov.b      @(0x2,r4)=>Unlock_Flag_Tag,r0                      = 1h
        0c0ece5e 08 20           tst        r0,r0
        0c0ece60 08 8b           bf         LAB_UnlockFlagExit
        0c0ece62 53 60           mov        r5,r0
        0c0ece64 09 00           nop
        0c0ece66 0a a0           bra        LAB_Password_Check_Failed
        0c0ece68 42 80           _mov.b     r0,@(0x2,r4)=>Unlock_Flag_Tag                      = 1h
                             LAB_CheckMismatchEqualsTwo                      XREF[1]:     0c0ece5a(j)  
        0c0ece6a 02 88           cmp/eq     #0x2,r0
        0c0ece6c 07 8b           bf         LAB_Password_Check_Failed
        0c0ece6e 44 84           mov.b      @(0x4,r4)=>Unlock_Flag_Survival,r0                 = 1h
        0c0ece70 08 20           tst        r0,r0
        0c0ece72 01 89           bt         LAB_UnlockFlagSet
                             LAB_UnlockFlagExit                              XREF[2]:     0c0ece4a(j), 0c0ece60(j)  
        0c0ece74 03 a0           bra        LAB_Password_Check_Failed
        0c0ece76 73 6c           _mov       r7,r12
                             LAB_UnlockFlagSet                               XREF[1]:     0c0ece72(j)  
        0c0ece78 53 60           mov        r5,r0
        0c0ece7a 09 00           nop
        0c0ece7c 44 80           mov.b      r0,@(0x4,r4)=>Unlock_Flag_Survival                 = 1h
                             LAB_Password_Check_Failed                       XREF[5]:     0c0ece36(j), 0c0ece50(j), 
                                                                                          0c0ece66(j), 0c0ece6c(j), 
                                                                                          0c0ece74(j)  
        0c0ece7e c3 60           mov        r12,r0
        0c0ece80 09 00           nop
        0c0ece82 f6 6c           mov.l      @r15+,r12
        0c0ece84 0b 00           rts
        0c0ece86 f6 6e           _mov.l     @r15+,r14
                             PTR_s_TOMONOBU_0c0ece88                         XREF[1]:     0c0ecdb6(R)  
        0c0ece88 ac 4e 21 0c     addr       s_TOMONOBU_0c214eac                                = "TOMONOBU"
                             PTR_FlagUnlockAddr                              XREF[1]:     0c0ece3a(R)  
        0c0ece8c f4 63 25 0c     addr       Unlock_Flag_ArcadeModeUNUSED??
