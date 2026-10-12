                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                               undefined __stdcall FUN_0005d7c0(void)
             undefined         <UNASSIGNED>   <RETURN>
                                             FUN_0005d7c0                                    XREF[1]:     00007818(c)  
        0005d7c0 00 30 b8        ldob                      CHAR_COL_P1_0054fc02,g7
                 80 02 fc 
                 54 00
        0005d7c8 00 30 80        ldob                      CHAR_COL_P2_0054fc5a,g0
                 80 5a fc 
                 54 00
        0005d7d0 00 30 a8        ldob                      CHAR_NUM_P1_0054fc01*,g5
                 80 01 fc 
                 54 00
        0005d7d8 00 30 b0        ldob                      CHAR_NUM_P2_0054fc59*,g6
                 80 59 fc 
                 54 00
        0005d7e0 00 30 88        ldob                      DAT_005a6f08,g1
                 80 08 6f 
                 5a 00
        0005d7e8 01 ce a5 59     shlo                      0x1,g7,g4
        0005d7ec 17 00 a5 59     addo                      g7,g4,g4
        0005d7f0 14 fd a5        lda                       WORD_000c6e70 (g7) [g4 * 0x4],g4                               = 100h
                 8c 70 6e 
                 0c 00
        0005d7f8 15 1c 25 80     ldob                      (g4) [g5 * 0x1],r4
        0005d7fc 01 0e a4 59     shlo                      0x1,g0,g4
        0005d800 10 00 a5 59     addo                      g0,g4,g4
        0005d804 14 3d a4        lda                       WORD_000c6e70 (g0) [g4 * 0x4],g4                               = 100h
                 8c 70 6e 
                 0c 00
        0005d80c 16 1c ed 80     ldob                      (g4) [g6 * 0x1],g13
        0005d810 00 6f 04 5a     chkbit                    0x0,g1
        0005d814 07 0d b9 59     shrdi                     0x7,r4,g7
        0005d818 84 d0 ab 58     and                       r4,0xf,g5
        0005d81c 07 4d 87 59     shrdi                     0x7,g13,g0
        0005d820 9d d0 b3 58     and                       g13,0xf,g6
        0005d824 b0 00 00 10     bno                       LAB_0005d8d4
        0005d828 00 30 90        lda                       DAT_01800200,g2
                 8c 00 02 
                 80 01
        0005d830 04 ce a5 59     shlo                      0x4,g7,g4
        0005d834 00 1e 88 5c     mov                       0x0,g1
        0005d838 00 00 28 8c     lda                       0x0,r5
        0005d83c ff 00 98 8c     lda                       0xff,g3
        0005d840 17 01 a5 59     subo                      g7,g4,g4
        0005d844 3f 00 e8 8c     lda                       0x3f,g13
        0005d848 14 39 a0        lda                       PTR_FLOAT_ARRAY_0007a810 [g4 * 0x4],g4                         = 000577b8
                 8c 10 a8 
                 07 00
        0005d850 15 1d b5 90     ld                        (g4) [g5 * 0x4],g6
                                             LAB_0005d854                                    XREF[1]:     0005d8b0(j)  
        0005d854 00 1e 80 5c     mov                       0x0,g0
        0005d858 05 bc bc        lda                       LAB_00018000 (g2) [r5 * 0x1],g7
                 8c 00 80 
                 01 00
                                             LAB_0005d860                                    XREF[1]:     0005d89c(j)  
        0005d860 00 90 a5 80     ldob                      (g6),g4
        0005d864 00 f4 a5        stos                      g4,-0x8000 (g7)=>DAT_01810200
                 8a 00 80 
                 ff ff
        0005d86c 16 50 b0 59     addo                      g6,0x1,g6
        0005d870 00 90 ad 80     ldob                      (g6),g5
        0005d874 10 50 80 59     addo                      g0,0x1,g0
        0005d878 93 00 a4 58     and                       g3,g0,g4
        0005d87c 1d 20 05 5a     cmpo                      g13,g4
        0005d880 00 f4 ad        stos                      g5,-0x4000 (g7)=>DAT_01814200
                 8a 00 c0 
                 ff ff
        0005d888 16 50 b0 59     addo                      g6,0x1,g6
        0005d88c 00 90 a5 80     ldob                      (g6),g4
        0005d890 16 50 b0 59     addo                      g6,0x1,g6
        0005d894 00 d0 a5 8a     stos                      g4,(g7)=>DAT_01818200
        0005d898 17 90 b8 59     addo                      g7,0x2,g7
        0005d89c c4 ff ff 13     bge                       LAB_0005d860
        0005d8a0 11 50 88 59     addo                      g1,0x1,g1
        0005d8a4 93 40 a4 58     and                       g3,g1,g4
        0005d8a8 04 28 05 5a     cmpo                      0x4,g4
        0005d8ac 00 a4 94 8c     lda                       0x400 (g2),g2
        0005d8b0 a4 ff ff 13     bge                       LAB_0005d854
        0005d8b4 00 30 a0        ldob                      DAT_005a6f08,g4
                 80 08 6f 
                 5a 00
        0005d8bc 00 30 20        stob                      r4,DAT_005a6f0a
                 82 0a 6f 
                 5a 00
        0005d8c4 14 53 a0 58     xor                       g4,0x1,g4
        0005d8c8 00 30 a0        stob                      g4,DAT_005a6f08
                 82 08 6f 
                 5a 00
        0005d8d0 64 01 00 08     b                         LAB_0005da34
                                             LAB_0005d8d4                                    XREF[1]:     0005d824(j)  
        0005d8d4 b0 60 0c 30     bbc                       0x1,g1,LAB_0005d984
        0005d8d8 00 30 90        lda                       DAT_01801600,g2
                 8c 00 16 
                 80 01
        0005d8e0 04 0e a4 59     shlo                      0x4,g0,g4
        0005d8e4 00 1e 88 5c     mov                       0x0,g1
        0005d8e8 00 00 28 8c     lda                       0x0,r5
        0005d8ec ff 00 98 8c     lda                       0xff,g3
        0005d8f0 10 01 a5 59     subo                      g0,g4,g4
        0005d8f4 3f 00 20 8c     lda                       0x3f,r4
        0005d8f8 14 39 a0        lda                       PTR_FLOAT_ARRAY_0007a810 [g4 * 0x4],g4                         = 000577b8
                 8c 10 a8 
                 07 00
        0005d900 16 1d b5 90     ld                        (g4) [g6 * 0x4],g6
                                             LAB_0005d904                                    XREF[1]:     0005d960(j)  
        0005d904 00 1e 80 5c     mov                       0x0,g0
        0005d908 05 bc bc        lda                       LAB_00018000 (g2) [r5 * 0x1],g7
                 8c 00 80 
                 01 00
                                             LAB_0005d910                                    XREF[1]:     0005d94c(j)  
        0005d910 00 90 a5 80     ldob                      (g6),g4
        0005d914 00 f4 a5        stos                      g4,-0x8000 (g7)=>DAT_01811600
                 8a 00 80 
                 ff ff
        0005d91c 16 50 b0 59     addo                      g6,0x1,g6
        0005d920 00 90 ad 80     ldob                      (g6),g5
        0005d924 10 50 80 59     addo                      g0,0x1,g0
        0005d928 93 00 a4 58     and                       g3,g0,g4
        0005d92c 04 20 05 5a     cmpo                      r4,g4
        0005d930 00 f4 ad        stos                      g5,-0x4000 (g7)=>DAT_01815600
                 8a 00 c0 
                 ff ff
        0005d938 16 50 b0 59     addo                      g6,0x1,g6
        0005d93c 00 90 a5 80     ldob                      (g6),g4
        0005d940 16 50 b0 59     addo                      g6,0x1,g6
        0005d944 00 d0 a5 8a     stos                      g4,(g7)=>DAT_01819600
        0005d948 17 90 b8 59     addo                      g7,0x2,g7
        0005d94c c4 ff ff 13     bge                       LAB_0005d910
        0005d950 11 50 88 59     addo                      g1,0x1,g1
        0005d954 93 40 a4 58     and                       g3,g1,g4
        0005d958 04 28 05 5a     cmpo                      0x4,g4
        0005d95c 00 a4 94 8c     lda                       0x400 (g2),g2
        0005d960 a4 ff ff 13     bge                       LAB_0005d904
        0005d964 00 30 a0        ldob                      DAT_005a6f08,g4
                 80 08 6f 
                 5a 00
        0005d96c 00 30 e8        stob                      g13,DAT_005a6f0b
                 82 0b 6f 
                 5a 00
        0005d974 14 93 a0 58     xor                       g4,0x2,g4
        0005d978 00 30 a0        stob                      g4,DAT_005a6f08
                 82 08 6f 
                 5a 00
        0005d980 b4 00 00 08     b                         LAB_0005da34
                                             LAB_0005d984                                    XREF[1]:     0005d8d4(j)  
        0005d984 b0 60 14 30     bbc                       0x2,g1,LAB_0005da34
        0005d988 00 30 90        lda                       DAT_01802a00,g2
                 8c 00 2a 
                 80 01
        0005d990 00 30 a0        ldob                      g_current_stage,g4
                 80 de 55 
                 55 00
        0005d998 00 1e 88 5c     mov                       0x0,g1
        0005d99c 00 00 20 8c     lda                       0x0,r4
        0005d9a0 ff 00 98 8c     lda                       0xff,g3
        0005d9a4 3f 00 e8 8c     lda                       0x3f,g13
        0005d9a8 14 39 b0        ld                        PTR_WORD_0007a890 [g4 * 0x4],g6                                = 00078284
                 90 90 a8 
                 07 00
                                             LAB_0005d9b0                                    XREF[1]:     0005da0c(j)  
        0005d9b0 00 1e 80 5c     mov                       0x0,g0
        0005d9b4 04 bc bc        lda                       LAB_00018000 (g2) [r4 * 0x1],g7
                 8c 00 80 
                 01 00
                                             LAB_0005d9bc                                    XREF[1]:     0005d9f8(j)  
        0005d9bc 00 90 a5 80     ldob                      (g6),g4
        0005d9c0 00 f4 a5        stos                      g4,-0x8000 (g7)=>DAT_01812a00
                 8a 00 80 
                 ff ff
        0005d9c8 16 50 b0 59     addo                      g6,0x1,g6
        0005d9cc 00 90 ad 80     ldob                      (g6),g5
        0005d9d0 10 50 80 59     addo                      g0,0x1,g0
        0005d9d4 93 00 a4 58     and                       g3,g0,g4
        0005d9d8 1d 20 05 5a     cmpo                      g13,g4
        0005d9dc 00 f4 ad        stos                      g5,-0x4000 (g7)=>DAT_01816a00
                 8a 00 c0 
                 ff ff
        0005d9e4 16 50 b0 59     addo                      g6,0x1,g6
        0005d9e8 00 90 a5 80     ldob                      (g6),g4
        0005d9ec 16 50 b0 59     addo                      g6,0x1,g6
        0005d9f0 00 d0 a5 8a     stos                      g4,(g7)=>DAT_0181aa00
        0005d9f4 17 90 b8 59     addo                      g7,0x2,g7
        0005d9f8 c4 ff ff 13     bge                       LAB_0005d9bc
        0005d9fc 11 50 88 59     addo                      g1,0x1,g1
        0005da00 93 40 a4 58     and                       g3,g1,g4
        0005da04 04 28 05 5a     cmpo                      0x4,g4
        0005da08 00 a4 94 8c     lda                       0x400 (g2),g2
        0005da0c a4 ff ff 13     bge                       LAB_0005d9b0
        0005da10 00 30 a0        ldob                      DAT_005a6f08,g4
                 80 08 6f 
                 5a 00
        0005da18 00 30 a8        ldob                      g_current_stage,g5
                 80 de 55 
                 55 00
        0005da20 14 13 a1 58     xor                       g4,0x4,g4
        0005da24 00 30 a0        stob                      g4,DAT_005a6f08
                 82 08 6f 
                 5a 00
        0005da2c 00 30 a8        stob                      g5,DAT_005a6f0c
                 82 0c 6f 
                 5a 00
                                             LAB_0005da34                                    XREF[3]:     0005d8d0(j), 0005d980(j), 
                                                                                                          0005d984(j)  
        0005da34 00 30 a0        ldob                      DAT_005a6f08,g4
                 80 08 6f 
                 5a 00
        0005da3c 0c 20 05 3d     cmpibne                   0x0,g4,LAB_0005da48
        0005da40 00 30 f0        stob                      g14,DAT_0054fdb7
                 82 b7 fd 
                 54 00
                                             LAB_0005da48                                    XREF[1]:     0005da3c(j)  
        0005da48 00 00 00 0a     ret
        0005da4c 00              ??                        00h
        0005da4d 00              ??                        00h
        0005da4e 00              ??                        00h
        0005da4f 00              ??                        00h
